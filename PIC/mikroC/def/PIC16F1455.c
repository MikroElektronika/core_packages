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
sfr unsigned short volatile TMR2             absolute 0x001A;
sfr unsigned short volatile PR2              absolute 0x001B;
sfr unsigned short volatile T2CON            absolute 0x001C;
sfr unsigned short volatile PIE1             absolute 0x0091;
sfr unsigned short volatile PIE2             absolute 0x0092;
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
sfr unsigned short volatile ADCON2           absolute 0x009F;
sfr unsigned short volatile LATA             absolute 0x010C;
sfr unsigned short volatile LATC             absolute 0x010E;
sfr unsigned short volatile CM1CON0          absolute 0x0111;
sfr unsigned short volatile CM1CON1          absolute 0x0112;
sfr unsigned short volatile CM2CON0          absolute 0x0113;
sfr unsigned short volatile CM2CON1          absolute 0x0114;
sfr unsigned short volatile CMOUT            absolute 0x0115;
sfr unsigned short volatile BORCON           absolute 0x0116;
sfr unsigned short volatile FVRCON           absolute 0x0117;
sfr unsigned short volatile DACCON0          absolute 0x0118;
sfr unsigned short volatile DACCON1          absolute 0x0119;
sfr unsigned short          APFCON           absolute 0x011D;
sfr unsigned short volatile ANSELA           absolute 0x018C;
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
sfr unsigned int          SPBRG            absolute 0x019B;
sfr unsigned short volatile SPBRGL           absolute 0x019B;
sfr unsigned short          SPBRGH           absolute 0x019C;
sfr unsigned short volatile RCSTA            absolute 0x019D;
sfr unsigned short volatile TXSTA            absolute 0x019E;
sfr unsigned short          BAUDCON          absolute 0x019F;
sfr unsigned short          WPUA             absolute 0x020C;
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
sfr unsigned short volatile IOCAP            absolute 0x0391;
sfr unsigned short volatile IOCAN            absolute 0x0392;
sfr unsigned short volatile IOCAF            absolute 0x0393;
sfr unsigned short volatile CLKRCON          absolute 0x039A;
sfr unsigned short volatile ACTCON           absolute 0x039B;
sfr unsigned short volatile PWM1DCL          absolute 0x0611;
sfr unsigned short volatile PWM1DCH          absolute 0x0612;
sfr unsigned short          PWM1CON          absolute 0x0613;
sfr unsigned short volatile PWM1CON0         absolute 0x0613;
sfr unsigned short volatile PWM2DCL          absolute 0x0614;
sfr unsigned short volatile PWM2DCH          absolute 0x0615;
sfr unsigned short          PWM2CON          absolute 0x0616;
sfr unsigned short volatile PWM2CON0         absolute 0x0616;
sfr unsigned short volatile CWG1DBR          absolute 0x0691;
sfr unsigned short volatile CWG1DBF          absolute 0x0692;
sfr unsigned short volatile CWG1CON0         absolute 0x0693;
sfr unsigned short volatile CWG1CON1         absolute 0x0694;
sfr unsigned short volatile CWG1CON2         absolute 0x0695;
sfr unsigned short volatile UCON             absolute 0x0E8E;
sfr unsigned short volatile USTAT            absolute 0x0E8F;
sfr unsigned short volatile UIR              absolute 0x0E90;
sfr unsigned short volatile UCFG             absolute 0x0E91;
sfr unsigned short volatile UIE              absolute 0x0E92;
sfr unsigned short volatile UEIR             absolute 0x0E93;
sfr unsigned short volatile UFRM             absolute 0x0E94;
sfr unsigned short volatile UFRMH            absolute 0x0E94;
sfr unsigned short volatile UFRML            absolute 0x0E95;
sfr unsigned short volatile UADDR            absolute 0x0E96;
sfr unsigned short volatile UEIE             absolute 0x0E97;
sfr unsigned short volatile UEP0             absolute 0x0E98;
sfr unsigned short volatile UEP1             absolute 0x0E99;
sfr unsigned short volatile UEP2             absolute 0x0E9A;
sfr unsigned short volatile UEP3             absolute 0x0E9B;
sfr unsigned short volatile UEP4             absolute 0x0E9C;
sfr unsigned short volatile UEP5             absolute 0x0E9D;
sfr unsigned short volatile UEP6             absolute 0x0E9E;
sfr unsigned short volatile UEP7             absolute 0x0E9F;
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
sfr unsigned short volatile PORTC            absolute 0x000E;
sfr unsigned short volatile TRISA            absolute 0x008C;
sfr unsigned short volatile TRISC            absolute 0x008E;
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
    const register unsigned short int SSP1IF = 3;
    sbit  SSP1IF_bit at PIR1.B3;
    const register unsigned short int TXIF = 4;
    sbit  TXIF_bit at PIR1.B4;
    const register unsigned short int RCIF = 5;
    sbit  RCIF_bit at PIR1.B5;
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;
    const register unsigned short int TMR1GIF = 7;
    sbit  TMR1GIF_bit at PIR1.B7;

    // PIR2 bits
    const register unsigned short int ACTIF = 1;
    sbit  ACTIF_bit at PIR2.B1;
    const register unsigned short int USBIF = 2;
    sbit  USBIF_bit at PIR2.B2;
    const register unsigned short int BCL1IF = 3;
    sbit  BCL1IF_bit at PIR2.B3;
    const register unsigned short int C1IF = 5;
    sbit  C1IF_bit at PIR2.B5;
    const register unsigned short int C2IF = 6;
    sbit  C2IF_bit at PIR2.B6;
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
    const register unsigned short int SSP1IE = 3;
    sbit  SSP1IE_bit at PIE1.B3;
    const register unsigned short int TXIE = 4;
    sbit  TXIE_bit at PIE1.B4;
    const register unsigned short int RCIE = 5;
    sbit  RCIE_bit at PIE1.B5;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;
    const register unsigned short int TMR1GIE = 7;
    sbit  TMR1GIE_bit at PIE1.B7;

    // PIE2 bits
    const register unsigned short int ACTIE = 1;
    sbit  ACTIE_bit at PIE2.B1;
    const register unsigned short int USBIE = 2;
    sbit  USBIE_bit at PIE2.B2;
    const register unsigned short int BCL1IE = 3;
    sbit  BCL1IE_bit at PIE2.B3;
    const register unsigned short int C1IE = 5;
    sbit  C1IE_bit at PIE2.B5;
    const register unsigned short int C2IE = 6;
    sbit  C2IE_bit at PIE2.B6;
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
    const register unsigned short int TUN6 = 6;
    sbit  TUN6_bit at OSCTUNE.B6;

    // OSCCON bits
    const register unsigned short int SPLLMULT = 6;
    sbit  SPLLMULT_bit at OSCCON.B6;
    const register unsigned short int SPLLEN = 7;
    sbit  SPLLEN_bit at OSCCON.B7;
    const register unsigned short int SCS0 = 0;
    sbit  SCS0_bit at OSCCON.B0;
    const register unsigned short int SCS1 = 1;
    sbit  SCS1_bit at OSCCON.B1;
    const register unsigned short int IRCF0 = 2;
    sbit  IRCF0_bit at OSCCON.B2;
    const register unsigned short int IRCF1 = 3;
    sbit  IRCF1_bit at OSCCON.B3;
    const register unsigned short int IRCF2 = 4;
    sbit  IRCF2_bit at OSCCON.B4;
    const register unsigned short int IRCF3 = 5;
    sbit  IRCF3_bit at OSCCON.B5;

    // OSCSTAT bits
    const register unsigned short int HFIOFS = 0;
    sbit  HFIOFS_bit at OSCSTAT.B0;
    const register unsigned short int LFIOFR = 1;
    sbit  LFIOFR_bit at OSCSTAT.B1;
    const register unsigned short int HFIOFR = 4;
    sbit  HFIOFR_bit at OSCSTAT.B4;
    const register unsigned short int OSTS = 5;
    sbit  OSTS_bit at OSCSTAT.B5;
    const register unsigned short int PLLRDY = 6;
    sbit  PLLRDY_bit at OSCSTAT.B6;
    const register unsigned short int SOSCR = 7;
    sbit  SOSCR_bit at OSCSTAT.B7;

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

    // ADCON2 bits
    const register unsigned short int TRIGSEL0 = 4;
    sbit  TRIGSEL0_bit at ADCON2.B4;
    const register unsigned short int TRIGSEL1 = 5;
    sbit  TRIGSEL1_bit at ADCON2.B5;
    const register unsigned short int TRIGSEL2 = 6;
    sbit  TRIGSEL2_bit at ADCON2.B6;

    // LATA bits
    const register unsigned short int LATA4 = 4;
    sbit  LATA4_bit at LATA.B4;
    const register unsigned short int LATA5 = 5;
    sbit  LATA5_bit at LATA.B5;

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
    const register unsigned short int C1NCH2 = 2;
    sbit  C1NCH2_bit at CM1CON1.B2;
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
    const register unsigned short int C2NCH2 = 2;
    sbit  C2NCH2_bit at CM2CON1.B2;
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
    const register unsigned short int BORFS = 6;
    sbit  BORFS_bit at BORCON.B6;
    const register unsigned short int SBOREN = 7;
    sbit  SBOREN_bit at BORCON.B7;

    // FVRCON bits
    const register unsigned short int FVRRDY = 6;
    sbit  FVRRDY_bit at FVRCON.B6;
    const register unsigned short int FVREN = 7;
    sbit  FVREN_bit at FVRCON.B7;
    const register unsigned short int ADFVR0 = 0;
    sbit  ADFVR0_bit at FVRCON.B0;
    const register unsigned short int ADFVR1 = 1;
    sbit  ADFVR1_bit at FVRCON.B1;
    const register unsigned short int CDAFVR0 = 2;
    sbit  CDAFVR0_bit at FVRCON.B2;
    const register unsigned short int CDAFVR1 = 3;
    sbit  CDAFVR1_bit at FVRCON.B3;

    // DACCON0 bits
    const register unsigned short int DACOE2 = 4;
    sbit  DACOE2_bit at DACCON0.B4;
    const register unsigned short int DACOE1 = 5;
    sbit  DACOE1_bit at DACCON0.B5;
    const register unsigned short int DACEN = 7;
    sbit  DACEN_bit at DACCON0.B7;
    const register unsigned short int D1PSS0 = 2;
    sbit  D1PSS0_bit at DACCON0.B2;
    const register unsigned short int D1PSS1 = 3;
    sbit  D1PSS1_bit at DACCON0.B3;

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

    // APFCON bits
    const register unsigned short int P2SEL = 2;
    sbit  P2SEL_bit at APFCON.B2;
    const register unsigned short int T1GSEL = 3;
    sbit  T1GSEL_bit at APFCON.B3;
    const register unsigned short int SSSEL = 5;
    sbit  SSSEL_bit at APFCON.B5;
    const register unsigned short int SDOSEL = 6;
    sbit  SDOSEL_bit at APFCON.B6;
    const register unsigned short int CLKRSEL = 7;
    sbit  CLKRSEL_bit at APFCON.B7;

    // ANSELA bits
    const register unsigned short int ANSA4 = 4;
    sbit  ANSA4_bit at ANSELA.B4;

    // ANSELC bits
    const register unsigned short int ANSC0 = 0;
    sbit  ANSC0_bit at ANSELC.B0;
    const register unsigned short int ANSC1 = 1;
    sbit  ANSC1_bit at ANSELC.B1;
    const register unsigned short int ANSC2 = 2;
    sbit  ANSC2_bit at ANSELC.B2;
    const register unsigned short int ANSC3 = 3;
    sbit  ANSC3_bit at ANSELC.B3;

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
    const register unsigned short int VREGPM0 = 0;
    sbit  VREGPM0_bit at VREGCON.B0;
    const register unsigned short int VREGPM1 = 1;
    sbit  VREGPM1_bit at VREGCON.B1;

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

    // WPUA bits
    const register unsigned short int WPUA3 = 3;
    sbit  WPUA3_bit at WPUA.B3;
    const register unsigned short int WPUA4 = 4;
    sbit  WPUA4_bit at WPUA.B4;
    const register unsigned short int WPUA5 = 5;
    sbit  WPUA5_bit at WPUA.B5;

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
    const register unsigned short int SSPM0 = 0;
    sbit  SSPM0_bit at SSP1CON1.B0;
    const register unsigned short int SSPM1 = 1;
    sbit  SSPM1_bit at SSP1CON1.B1;
    const register unsigned short int SSPM2 = 2;
    sbit  SSPM2_bit at SSP1CON1.B2;
    const register unsigned short int SSPM3 = 3;
    sbit  SSPM3_bit at SSP1CON1.B3;
    const register unsigned short int CKP = 4;
    sbit  CKP_bit at SSP1CON1.B4;
    const register unsigned short int SSPEN = 5;
    sbit  SSPEN_bit at SSP1CON1.B5;
    const register unsigned short int SSPOV = 6;
    sbit  SSPOV_bit at SSP1CON1.B6;
    const register unsigned short int WCOL = 7;
    sbit  WCOL_bit at SSP1CON1.B7;
    const register unsigned short int SSP1EN = 5;
    sbit  SSP1EN_bit at SSP1CON1.B5;
    const register unsigned short int SSP1OV = 6;
    sbit  SSP1OV_bit at SSP1CON1.B6;

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

    // IOCAP bits
    const register unsigned short int IOCAP0 = 0;
    sbit  IOCAP0_bit at IOCAP.B0;
    const register unsigned short int IOCAP1 = 1;
    sbit  IOCAP1_bit at IOCAP.B1;
    const register unsigned short int IOCAP3 = 3;
    sbit  IOCAP3_bit at IOCAP.B3;
    const register unsigned short int IOCAP4 = 4;
    sbit  IOCAP4_bit at IOCAP.B4;
    const register unsigned short int IOCAP5 = 5;
    sbit  IOCAP5_bit at IOCAP.B5;

    // IOCAN bits
    const register unsigned short int IOCAN0 = 0;
    sbit  IOCAN0_bit at IOCAN.B0;
    const register unsigned short int IOCAN1 = 1;
    sbit  IOCAN1_bit at IOCAN.B1;
    const register unsigned short int IOCAN3 = 3;
    sbit  IOCAN3_bit at IOCAN.B3;
    const register unsigned short int IOCAN4 = 4;
    sbit  IOCAN4_bit at IOCAN.B4;
    const register unsigned short int IOCAN5 = 5;
    sbit  IOCAN5_bit at IOCAN.B5;

    // IOCAF bits
    const register unsigned short int IOCAF0 = 0;
    sbit  IOCAF0_bit at IOCAF.B0;
    const register unsigned short int IOCAF1 = 1;
    sbit  IOCAF1_bit at IOCAF.B1;
    const register unsigned short int IOCAF3 = 3;
    sbit  IOCAF3_bit at IOCAF.B3;
    const register unsigned short int IOCAF4 = 4;
    sbit  IOCAF4_bit at IOCAF.B4;
    const register unsigned short int IOCAF5 = 5;
    sbit  IOCAF5_bit at IOCAF.B5;

    // CLKRCON bits
    const register unsigned short int CLKRSLR = 5;
    sbit  CLKRSLR_bit at CLKRCON.B5;
    const register unsigned short int CLKROE = 6;
    sbit  CLKROE_bit at CLKRCON.B6;
    const register unsigned short int CLKREN = 7;
    sbit  CLKREN_bit at CLKRCON.B7;
    const register unsigned short int CLKRDIV0 = 0;
    sbit  CLKRDIV0_bit at CLKRCON.B0;
    const register unsigned short int CLKRDIV1 = 1;
    sbit  CLKRDIV1_bit at CLKRCON.B1;
    const register unsigned short int CLKRDIV2 = 2;
    sbit  CLKRDIV2_bit at CLKRCON.B2;
    const register unsigned short int CLKRCD0 = 3;
    sbit  CLKRCD0_bit at CLKRCON.B3;
    const register unsigned short int CLKRCD1 = 4;
    sbit  CLKRCD1_bit at CLKRCON.B4;

    // ACTCON bits
    const register unsigned short int ACTORS = 1;
    sbit  ACTORS_bit at ACTCON.B1;
    const register unsigned short int ACTLOCK = 3;
    sbit  ACTLOCK_bit at ACTCON.B3;
    const register unsigned short int ACTSRC = 4;
    sbit  ACTSRC_bit at ACTCON.B4;
    const register unsigned short int ACTUD = 6;
    sbit  ACTUD_bit at ACTCON.B6;
    const register unsigned short int ACTEN = 7;
    sbit  ACTEN_bit at ACTCON.B7;

    // PWM1DCL bits
    const register unsigned short int PWM1DCL0 = 6;
    sbit  PWM1DCL0_bit at PWM1DCL.B6;
    const register unsigned short int PWM1DCL1 = 7;
    sbit  PWM1DCL1_bit at PWM1DCL.B7;

    // PWM1DCH bits
    const register unsigned short int PWM1DCH0 = 0;
    sbit  PWM1DCH0_bit at PWM1DCH.B0;
    const register unsigned short int PWM1DCH1 = 1;
    sbit  PWM1DCH1_bit at PWM1DCH.B1;
    const register unsigned short int PWM1DCH2 = 2;
    sbit  PWM1DCH2_bit at PWM1DCH.B2;
    const register unsigned short int PWM1DCH3 = 3;
    sbit  PWM1DCH3_bit at PWM1DCH.B3;
    const register unsigned short int PWM1DCH4 = 4;
    sbit  PWM1DCH4_bit at PWM1DCH.B4;
    const register unsigned short int PWM1DCH5 = 5;
    sbit  PWM1DCH5_bit at PWM1DCH.B5;
    const register unsigned short int PWM1DCH6 = 6;
    sbit  PWM1DCH6_bit at PWM1DCH.B6;
    const register unsigned short int PWM1DCH7 = 7;
    sbit  PWM1DCH7_bit at PWM1DCH.B7;

    // PWM1CON, PWM1CON0 bits
    const register unsigned short int PWM1POL = 4;
    sbit  PWM1POL_bit at PWM1CON.B4;
    const register unsigned short int PWM1OUT = 5;
    sbit  PWM1OUT_bit at PWM1CON.B5;
    const register unsigned short int PWM1OE = 6;
    sbit  PWM1OE_bit at PWM1CON.B6;
    const register unsigned short int PWM1EN = 7;
    sbit  PWM1EN_bit at PWM1CON.B7;

    // PWM2DCL bits
    const register unsigned short int PWM2DCL0 = 6;
    sbit  PWM2DCL0_bit at PWM2DCL.B6;
    const register unsigned short int PWM2DCL1 = 7;
    sbit  PWM2DCL1_bit at PWM2DCL.B7;

    // PWM2DCH bits
    const register unsigned short int PWM2DCH0 = 0;
    sbit  PWM2DCH0_bit at PWM2DCH.B0;
    const register unsigned short int PWM2DCH1 = 1;
    sbit  PWM2DCH1_bit at PWM2DCH.B1;
    const register unsigned short int PWM2DCH2 = 2;
    sbit  PWM2DCH2_bit at PWM2DCH.B2;
    const register unsigned short int PWM2DCH3 = 3;
    sbit  PWM2DCH3_bit at PWM2DCH.B3;
    const register unsigned short int PWM2DCH4 = 4;
    sbit  PWM2DCH4_bit at PWM2DCH.B4;
    const register unsigned short int PWM2DCH5 = 5;
    sbit  PWM2DCH5_bit at PWM2DCH.B5;
    const register unsigned short int PWM2DCH6 = 6;
    sbit  PWM2DCH6_bit at PWM2DCH.B6;
    const register unsigned short int PWM2DCH7 = 7;
    sbit  PWM2DCH7_bit at PWM2DCH.B7;

    // PWM2CON, PWM2CON0 bits
    const register unsigned short int PWM2POL = 4;
    sbit  PWM2POL_bit at PWM2CON.B4;
    const register unsigned short int PWM2OUT = 5;
    sbit  PWM2OUT_bit at PWM2CON.B5;
    const register unsigned short int PWM2OE = 6;
    sbit  PWM2OE_bit at PWM2CON.B6;
    const register unsigned short int PWM2EN = 7;
    sbit  PWM2EN_bit at PWM2CON.B7;

    // CWG1DBR bits
    const register unsigned short int CWG1DBR0 = 0;
    sbit  CWG1DBR0_bit at CWG1DBR.B0;
    const register unsigned short int CWG1DBR1 = 1;
    sbit  CWG1DBR1_bit at CWG1DBR.B1;
    const register unsigned short int CWG1DBR2 = 2;
    sbit  CWG1DBR2_bit at CWG1DBR.B2;
    const register unsigned short int CWG1DBR3 = 3;
    sbit  CWG1DBR3_bit at CWG1DBR.B3;
    const register unsigned short int CWG1DBR4 = 4;
    sbit  CWG1DBR4_bit at CWG1DBR.B4;
    const register unsigned short int CWG1DBR5 = 5;
    sbit  CWG1DBR5_bit at CWG1DBR.B5;

    // CWG1DBF bits
    const register unsigned short int CWG1DBF0 = 0;
    sbit  CWG1DBF0_bit at CWG1DBF.B0;
    const register unsigned short int CWG1DBF1 = 1;
    sbit  CWG1DBF1_bit at CWG1DBF.B1;
    const register unsigned short int CWG1DBF2 = 2;
    sbit  CWG1DBF2_bit at CWG1DBF.B2;
    const register unsigned short int CWG1DBF3 = 3;
    sbit  CWG1DBF3_bit at CWG1DBF.B3;
    const register unsigned short int CWG1DBF4 = 4;
    sbit  CWG1DBF4_bit at CWG1DBF.B4;
    const register unsigned short int CWG1DBF5 = 5;
    sbit  CWG1DBF5_bit at CWG1DBF.B5;

    // CWG1CON0 bits
    const register unsigned short int G1CS0 = 0;
    sbit  G1CS0_bit at CWG1CON0.B0;
    const register unsigned short int G1POLA = 3;
    sbit  G1POLA_bit at CWG1CON0.B3;
    const register unsigned short int G1POLB = 4;
    sbit  G1POLB_bit at CWG1CON0.B4;
    const register unsigned short int G1OEA = 5;
    sbit  G1OEA_bit at CWG1CON0.B5;
    const register unsigned short int G1OEB = 6;
    sbit  G1OEB_bit at CWG1CON0.B6;
    const register unsigned short int G1EN = 7;
    sbit  G1EN_bit at CWG1CON0.B7;

    // CWG1CON1 bits
    const register unsigned short int G1IS0 = 0;
    sbit  G1IS0_bit at CWG1CON1.B0;
    const register unsigned short int G1IS1 = 1;
    sbit  G1IS1_bit at CWG1CON1.B1;
    const register unsigned short int G1ASDLA0 = 4;
    sbit  G1ASDLA0_bit at CWG1CON1.B4;
    const register unsigned short int G1ASDLA1 = 5;
    sbit  G1ASDLA1_bit at CWG1CON1.B5;
    const register unsigned short int G1ASDLB0 = 6;
    sbit  G1ASDLB0_bit at CWG1CON1.B6;
    const register unsigned short int G1ASDLB1 = 7;
    sbit  G1ASDLB1_bit at CWG1CON1.B7;

    // CWG1CON2 bits
    const register unsigned short int G1ASDSFLT = 1;
    sbit  G1ASDSFLT_bit at CWG1CON2.B1;
    const register unsigned short int G1ASDSC1 = 2;
    sbit  G1ASDSC1_bit at CWG1CON2.B2;
    const register unsigned short int G1ASDSC2 = 3;
    sbit  G1ASDSC2_bit at CWG1CON2.B3;
    const register unsigned short int G1ARSEN = 6;
    sbit  G1ARSEN_bit at CWG1CON2.B6;
    const register unsigned short int G1ASE = 7;
    sbit  G1ASE_bit at CWG1CON2.B7;

    // UCON bits
    const register unsigned short int SUSPND = 1;
    sbit  SUSPND_bit at UCON.B1;
    const register unsigned short int RESUME_ = 2;
    sbit  RESUME__bit at UCON.B2;
    const register unsigned short int USBEN = 3;
    sbit  USBEN_bit at UCON.B3;
    const register unsigned short int PKTDIS = 4;
    sbit  PKTDIS_bit at UCON.B4;
    const register unsigned short int SE0 = 5;
    sbit  SE0_bit at UCON.B5;
    const register unsigned short int PPBRST = 6;
    sbit  PPBRST_bit at UCON.B6;

    // USTAT bits
    const register unsigned short int PPBI = 1;
    sbit  PPBI_bit at USTAT.B1;
    const register unsigned short int DIR_ = 2;
    sbit  DIR__bit at USTAT.B2;
    const register unsigned short int ENDP0 = 3;
    sbit  ENDP0_bit at USTAT.B3;
    const register unsigned short int ENDP1 = 4;
    sbit  ENDP1_bit at USTAT.B4;
    const register unsigned short int ENDP2 = 5;
    sbit  ENDP2_bit at USTAT.B5;
    const register unsigned short int ENDP3 = 6;
    sbit  ENDP3_bit at USTAT.B6;

    // UIR bits
    const register unsigned short int URSTIF = 0;
    sbit  URSTIF_bit at UIR.B0;
    const register unsigned short int UERRIF = 1;
    sbit  UERRIF_bit at UIR.B1;
    const register unsigned short int ACTVIF = 2;
    sbit  ACTVIF_bit at UIR.B2;
    const register unsigned short int TRNIF = 3;
    sbit  TRNIF_bit at UIR.B3;
    const register unsigned short int IDLEIF = 4;
    sbit  IDLEIF_bit at UIR.B4;
    const register unsigned short int STALLIF = 5;
    sbit  STALLIF_bit at UIR.B5;
    const register unsigned short int SOFIF = 6;
    sbit  SOFIF_bit at UIR.B6;

    // UCFG bits
    const register unsigned short int FSEN = 2;
    sbit  FSEN_bit at UCFG.B2;
    const register unsigned short int UPUEN = 4;
    sbit  UPUEN_bit at UCFG.B4;
    const register unsigned short int UTEYE = 7;
    sbit  UTEYE_bit at UCFG.B7;
    const register unsigned short int PPB0 = 0;
    sbit  PPB0_bit at UCFG.B0;
    const register unsigned short int PPB1 = 1;
    sbit  PPB1_bit at UCFG.B1;

    // UIE bits
    const register unsigned short int URSTIE = 0;
    sbit  URSTIE_bit at UIE.B0;
    const register unsigned short int UERRIE = 1;
    sbit  UERRIE_bit at UIE.B1;
    const register unsigned short int ACTVIE = 2;
    sbit  ACTVIE_bit at UIE.B2;
    const register unsigned short int TRNIE = 3;
    sbit  TRNIE_bit at UIE.B3;
    const register unsigned short int IDLEIE = 4;
    sbit  IDLEIE_bit at UIE.B4;
    const register unsigned short int STALLIE = 5;
    sbit  STALLIE_bit at UIE.B5;
    const register unsigned short int SOFIE = 6;
    sbit  SOFIE_bit at UIE.B6;

    // UEIR bits
    const register unsigned short int PIDEF = 0;
    sbit  PIDEF_bit at UEIR.B0;
    const register unsigned short int CRC5EF = 1;
    sbit  CRC5EF_bit at UEIR.B1;
    const register unsigned short int CRC16EF = 2;
    sbit  CRC16EF_bit at UEIR.B2;
    const register unsigned short int DFN8EF = 3;
    sbit  DFN8EF_bit at UEIR.B3;
    const register unsigned short int BTOEF = 4;
    sbit  BTOEF_bit at UEIR.B4;
    const register unsigned short int BTSEF = 7;
    sbit  BTSEF_bit at UEIR.B7;

    // UFRMH bits
    const register unsigned short int FRM8 = 0;
    sbit  FRM8_bit at UFRMH.B0;
    const register unsigned short int FRM9 = 1;
    sbit  FRM9_bit at UFRMH.B1;
    const register unsigned short int FRM10 = 2;
    sbit  FRM10_bit at UFRMH.B2;

    // UFRML bits
    const register unsigned short int FRM0 = 0;
    sbit  FRM0_bit at UFRML.B0;
    const register unsigned short int FRM1 = 1;
    sbit  FRM1_bit at UFRML.B1;
    const register unsigned short int FRM2 = 2;
    sbit  FRM2_bit at UFRML.B2;
    const register unsigned short int FRM3 = 3;
    sbit  FRM3_bit at UFRML.B3;
    const register unsigned short int FRM4 = 4;
    sbit  FRM4_bit at UFRML.B4;
    const register unsigned short int FRM5 = 5;
    sbit  FRM5_bit at UFRML.B5;
    const register unsigned short int FRM6 = 6;
    sbit  FRM6_bit at UFRML.B6;
    const register unsigned short int FRM7 = 7;
    sbit  FRM7_bit at UFRML.B7;

    // UADDR bits
    const register unsigned short int ADDR0 = 0;
    sbit  ADDR0_bit at UADDR.B0;
    const register unsigned short int ADDR1 = 1;
    sbit  ADDR1_bit at UADDR.B1;
    const register unsigned short int ADDR2 = 2;
    sbit  ADDR2_bit at UADDR.B2;
    const register unsigned short int ADDR3 = 3;
    sbit  ADDR3_bit at UADDR.B3;
    const register unsigned short int ADDR4 = 4;
    sbit  ADDR4_bit at UADDR.B4;
    const register unsigned short int ADDR5 = 5;
    sbit  ADDR5_bit at UADDR.B5;
    const register unsigned short int ADDR6 = 6;
    sbit  ADDR6_bit at UADDR.B6;

    // UEIE bits
    const register unsigned short int PIDEE = 0;
    sbit  PIDEE_bit at UEIE.B0;
    const register unsigned short int CRC5EE = 1;
    sbit  CRC5EE_bit at UEIE.B1;
    const register unsigned short int CRC16EE = 2;
    sbit  CRC16EE_bit at UEIE.B2;
    const register unsigned short int DFN8EE = 3;
    sbit  DFN8EE_bit at UEIE.B3;
    const register unsigned short int BTOEE = 4;
    sbit  BTOEE_bit at UEIE.B4;
    const register unsigned short int BTSEE = 7;
    sbit  BTSEE_bit at UEIE.B7;

    // UEP0 bits
    const register unsigned short int EPSTALL = 0;
    sbit  EPSTALL_bit at UEP0.B0;
    const register unsigned short int EPINEN = 1;
    sbit  EPINEN_bit at UEP0.B1;
    const register unsigned short int EPOUTEN = 2;
    sbit  EPOUTEN_bit at UEP0.B2;
    const register unsigned short int EPCONDIS = 3;
    sbit  EPCONDIS_bit at UEP0.B3;
    const register unsigned short int EPHSHK = 4;
    sbit  EPHSHK_bit at UEP0.B4;

    // UEP1 bits
    sbit  EPSTALL_UEP1_bit at UEP1.B0;
    sbit  EPINEN_UEP1_bit at UEP1.B1;
    sbit  EPOUTEN_UEP1_bit at UEP1.B2;
    sbit  EPCONDIS_UEP1_bit at UEP1.B3;
    sbit  EPHSHK_UEP1_bit at UEP1.B4;

    // UEP2 bits
    sbit  EPSTALL_UEP2_bit at UEP2.B0;
    sbit  EPINEN_UEP2_bit at UEP2.B1;
    sbit  EPOUTEN_UEP2_bit at UEP2.B2;
    sbit  EPCONDIS_UEP2_bit at UEP2.B3;
    sbit  EPHSHK_UEP2_bit at UEP2.B4;

    // UEP3 bits
    sbit  EPSTALL_UEP3_bit at UEP3.B0;
    sbit  EPINEN_UEP3_bit at UEP3.B1;
    sbit  EPOUTEN_UEP3_bit at UEP3.B2;
    sbit  EPCONDIS_UEP3_bit at UEP3.B3;
    sbit  EPHSHK_UEP3_bit at UEP3.B4;

    // UEP4 bits
    sbit  EPSTALL_UEP4_bit at UEP4.B0;
    sbit  EPINEN_UEP4_bit at UEP4.B1;
    sbit  EPOUTEN_UEP4_bit at UEP4.B2;
    sbit  EPCONDIS_UEP4_bit at UEP4.B3;
    sbit  EPHSHK_UEP4_bit at UEP4.B4;

    // UEP5 bits
    sbit  EPSTALL_UEP5_bit at UEP5.B0;
    sbit  EPINEN_UEP5_bit at UEP5.B1;
    sbit  EPOUTEN_UEP5_bit at UEP5.B2;
    sbit  EPCONDIS_UEP5_bit at UEP5.B3;
    sbit  EPHSHK_UEP5_bit at UEP5.B4;

    // UEP6 bits
    sbit  EPSTALL_UEP6_bit at UEP6.B0;
    sbit  EPINEN_UEP6_bit at UEP6.B1;
    sbit  EPOUTEN_UEP6_bit at UEP6.B2;
    sbit  EPCONDIS_UEP6_bit at UEP6.B3;
    sbit  EPHSHK_UEP6_bit at UEP6.B4;

    // UEP7 bits
    sbit  EPSTALL_UEP7_bit at UEP7.B0;
    sbit  EPINEN_UEP7_bit at UEP7.B1;
    sbit  EPOUTEN_UEP7_bit at UEP7.B2;
    sbit  EPCONDIS_UEP7_bit at UEP7.B3;
    sbit  EPHSHK_UEP7_bit at UEP7.B4;

    // STATUS_SHAD bits
    sbit  C_STATUS_SHAD_bit at STATUS_SHAD.B0;
    sbit  DC_STATUS_SHAD_bit at STATUS_SHAD.B1;
    sbit  Z_STATUS_SHAD_bit at STATUS_SHAD.B2;

    // PORTA bits
    const register unsigned short int RA5 = 5;
    sbit  RA5_bit at PORTA.B5;
    const register unsigned short int RA4 = 4;
    sbit  RA4_bit at PORTA.B4;
    const register unsigned short int RA3 = 3;
    sbit  RA3_bit at PORTA.B3;
    const register unsigned short int RA1 = 1;
    sbit  RA1_bit at PORTA.B1;
    const register unsigned short int RA0 = 0;
    sbit  RA0_bit at PORTA.B0;

    // PORTC bits
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

    // TRISA bits
    const register unsigned short int TRISA5 = 5;
    sbit  TRISA5_bit at TRISA.B5;
    const register unsigned short int TRISA4 = 4;
    sbit  TRISA4_bit at TRISA.B4;

    // TRISC bits
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
