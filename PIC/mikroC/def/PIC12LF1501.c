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
sfr unsigned short volatile PIE1             absolute 0x0091;
sfr unsigned short volatile PIE2             absolute 0x0092;
sfr unsigned short volatile PIE3             absolute 0x0093;
sfr unsigned short volatile OPTION_REG       absolute 0x0095;
sfr unsigned short volatile PCON             absolute 0x0096;
sfr unsigned short          WDTCON           absolute 0x0097;
sfr unsigned short volatile OSCCON           absolute 0x0099;
sfr unsigned short volatile OSCSTAT          absolute 0x009A;
sfr unsigned short volatile ADRESL           absolute 0x009B;
sfr unsigned short volatile ADRESH           absolute 0x009C;
sfr unsigned short volatile ADCON0           absolute 0x009D;
sfr unsigned short volatile ADCON1           absolute 0x009E;
sfr unsigned short volatile ADCON2           absolute 0x009F;
sfr unsigned short volatile LATA             absolute 0x010C;
sfr unsigned short volatile CM1CON0          absolute 0x0111;
sfr unsigned short volatile CM1CON1          absolute 0x0112;
sfr unsigned short volatile CMOUT            absolute 0x0115;
sfr unsigned short volatile BORCON           absolute 0x0116;
sfr unsigned short volatile FVRCON           absolute 0x0117;
sfr unsigned short volatile DACCON0          absolute 0x0118;
sfr unsigned short volatile DACCON1          absolute 0x0119;
sfr unsigned short          APFCON           absolute 0x011D;
sfr unsigned short volatile ANSELA           absolute 0x018C;
sfr unsigned int   volatile PMADR            absolute 0x0191;
sfr unsigned short volatile PMADRL           absolute 0x0191;
sfr unsigned short volatile PMADRH           absolute 0x0192;
sfr unsigned int   volatile PMDAT            absolute 0x0193;
sfr unsigned short volatile PMDATL           absolute 0x0193;
sfr unsigned short volatile PMDATH           absolute 0x0194;
sfr unsigned short volatile PMCON1           absolute 0x0195;
sfr unsigned short volatile PMCON2           absolute 0x0196;
sfr unsigned short volatile VREGCON          absolute 0x0197;
sfr unsigned short          WPUA             absolute 0x020C;
sfr unsigned short volatile IOCAP            absolute 0x0391;
sfr unsigned short volatile IOCAN            absolute 0x0392;
sfr unsigned short volatile IOCAF            absolute 0x0393;
sfr unsigned int   volatile NCO1ACC          absolute 0x0498;
sfr unsigned short volatile NCO1ACCL         absolute 0x0498;
sfr unsigned short volatile NCO1ACCH         absolute 0x0499;
sfr unsigned short volatile NCO1ACCU         absolute 0x049A;
sfr unsigned int   volatile NCO1INC          absolute 0x049B;
sfr unsigned short volatile NCO1INCL         absolute 0x049B;
sfr unsigned short volatile NCO1INCH         absolute 0x049C;
sfr unsigned short volatile NCO1INCU         absolute 0x049D;
sfr unsigned short volatile NCO1CON          absolute 0x049E;
sfr unsigned short volatile NCO1CLK          absolute 0x049F;
sfr unsigned short volatile PWM1DCL          absolute 0x0611;
sfr unsigned short volatile PWM1DCH          absolute 0x0612;
sfr unsigned short          PWM1CON          absolute 0x0613;
sfr unsigned short volatile PWM1CON0         absolute 0x0613;
sfr unsigned short volatile PWM2DCL          absolute 0x0614;
sfr unsigned short volatile PWM2DCH          absolute 0x0615;
sfr unsigned short          PWM2CON          absolute 0x0616;
sfr unsigned short volatile PWM2CON0         absolute 0x0616;
sfr unsigned short volatile PWM3DCL          absolute 0x0617;
sfr unsigned short volatile PWM3DCH          absolute 0x0618;
sfr unsigned short          PWM3CON          absolute 0x0619;
sfr unsigned short volatile PWM3CON0         absolute 0x0619;
sfr unsigned short volatile PWM4DCL          absolute 0x061A;
sfr unsigned short volatile PWM4DCH          absolute 0x061B;
sfr unsigned short volatile PWM4CON          absolute 0x061C;
sfr unsigned short volatile PWM4CON0         absolute 0x061C;
sfr unsigned short volatile CWG1DBR          absolute 0x0691;
sfr unsigned short volatile CWG1DBF          absolute 0x0692;
sfr unsigned short volatile CWG1CON0         absolute 0x0693;
sfr unsigned short volatile CWG1CON1         absolute 0x0694;
sfr unsigned short volatile CWG1CON2         absolute 0x0695;
sfr unsigned short volatile CLCDATA          absolute 0x0F0F;
sfr unsigned short volatile CLC1CON          absolute 0x0F10;
sfr unsigned short volatile CLC1POL          absolute 0x0F11;
sfr unsigned short volatile CLC1SEL0         absolute 0x0F12;
sfr unsigned short volatile CLC1SEL1         absolute 0x0F13;
sfr unsigned short volatile CLC1GLS0         absolute 0x0F14;
sfr unsigned short volatile CLC1GLS1         absolute 0x0F15;
sfr unsigned short volatile CLC1GLS2         absolute 0x0F16;
sfr unsigned short volatile CLC1GLS3         absolute 0x0F17;
sfr unsigned short volatile CLC2CON          absolute 0x0F18;
sfr unsigned short volatile CLC2POL          absolute 0x0F19;
sfr unsigned short volatile CLC2SEL0         absolute 0x0F1A;
sfr unsigned short volatile CLC2SEL1         absolute 0x0F1B;
sfr unsigned short volatile CLC2GLS0         absolute 0x0F1C;
sfr unsigned short volatile CLC2GLS1         absolute 0x0F1D;
sfr unsigned short volatile CLC2GLS2         absolute 0x0F1E;
sfr unsigned short volatile CLC2GLS3         absolute 0x0F1F;
sfr unsigned short volatile BSR_ICDSHAD      absolute 0x0FE3;
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
sfr unsigned short volatile TRISA            absolute 0x008C;
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
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;
    const register unsigned short int TMR1GIF = 7;
    sbit  TMR1GIF_bit at PIR1.B7;

    // PIR2 bits
    const register unsigned short int NCO1IF = 2;
    sbit  NCO1IF_bit at PIR2.B2;
    const register unsigned short int C1IF = 5;
    sbit  C1IF_bit at PIR2.B5;

    // PIR3 bits
    const register unsigned short int CLC1IF = 0;
    sbit  CLC1IF_bit at PIR3.B0;
    const register unsigned short int CLC2IF = 1;
    sbit  CLC2IF_bit at PIR3.B1;

    // T1CON bits
    const register unsigned short int TMR1ON = 0;
    sbit  TMR1ON_bit at T1CON.B0;
    const register unsigned short int NOT_T1SYNC = 2;
    sbit  NOT_T1SYNC_bit at T1CON.B2;
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
    const register unsigned short int TOUTPS0 = 3;
    sbit  TOUTPS0_bit at T2CON.B3;
    const register unsigned short int TOUTPS1 = 4;
    sbit  TOUTPS1_bit at T2CON.B4;
    const register unsigned short int TOUTPS2 = 5;
    sbit  TOUTPS2_bit at T2CON.B5;
    const register unsigned short int TOUTPS3 = 6;
    sbit  TOUTPS3_bit at T2CON.B6;

    // PIE1 bits
    const register unsigned short int TMR1IE = 0;
    sbit  TMR1IE_bit at PIE1.B0;
    const register unsigned short int TMR2IE = 1;
    sbit  TMR2IE_bit at PIE1.B1;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;
    const register unsigned short int TMR1GIE = 7;
    sbit  TMR1GIE_bit at PIE1.B7;

    // PIE2 bits
    const register unsigned short int NCO1IE = 2;
    sbit  NCO1IE_bit at PIE2.B2;
    const register unsigned short int C1IE = 5;
    sbit  C1IE_bit at PIE2.B5;

    // PIE3 bits
    const register unsigned short int CLC1IE = 0;
    sbit  CLC1IE_bit at PIE3.B0;
    const register unsigned short int CLC2IE = 1;
    sbit  CLC2IE_bit at PIE3.B1;

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

    // ADCON2 bits
    const register unsigned short int TRIGSEL0 = 4;
    sbit  TRIGSEL0_bit at ADCON2.B4;
    const register unsigned short int TRIGSEL1 = 5;
    sbit  TRIGSEL1_bit at ADCON2.B5;
    const register unsigned short int TRIGSEL2 = 6;
    sbit  TRIGSEL2_bit at ADCON2.B6;
    const register unsigned short int TRIGSEL3 = 7;
    sbit  TRIGSEL3_bit at ADCON2.B7;

    // LATA bits
    const register unsigned short int LATA0 = 0;
    sbit  LATA0_bit at LATA.B0;
    const register unsigned short int LATA1 = 1;
    sbit  LATA1_bit at LATA.B1;
    const register unsigned short int LATA2 = 2;
    sbit  LATA2_bit at LATA.B2;
    const register unsigned short int LATA4 = 4;
    sbit  LATA4_bit at LATA.B4;
    const register unsigned short int LATA5 = 5;
    sbit  LATA5_bit at LATA.B5;

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
    const register unsigned short int C1INTN = 6;
    sbit  C1INTN_bit at CM1CON1.B6;
    const register unsigned short int C1INTP = 7;
    sbit  C1INTP_bit at CM1CON1.B7;
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

    // CMOUT bits
    const register unsigned short int MC1OUT = 0;
    sbit  MC1OUT_bit at CMOUT.B0;

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
    const register unsigned short int CDAFVR0 = 2;
    sbit  CDAFVR0_bit at FVRCON.B2;
    const register unsigned short int CDAFVR1 = 3;
    sbit  CDAFVR1_bit at FVRCON.B3;

    // DACCON0 bits
    const register unsigned short int DACPSS = 2;
    sbit  DACPSS_bit at DACCON0.B2;
    const register unsigned short int DACOE2 = 4;
    sbit  DACOE2_bit at DACCON0.B4;
    const register unsigned short int DACOE1 = 5;
    sbit  DACOE1_bit at DACCON0.B5;
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

    // APFCON bits
    const register unsigned short int NCO1SEL = 0;
    sbit  NCO1SEL_bit at APFCON.B0;
    const register unsigned short int CLC1SEL = 1;
    sbit  CLC1SEL_bit at APFCON.B1;
    const register unsigned short int T1GSEL = 3;
    sbit  T1GSEL_bit at APFCON.B3;
    const register unsigned short int CWG1ASEL = 6;
    sbit  CWG1ASEL_bit at APFCON.B6;
    const register unsigned short int CWG1BSEL = 7;
    sbit  CWG1BSEL_bit at APFCON.B7;

    // ANSELA bits
    const register unsigned short int ANSA0 = 0;
    sbit  ANSA0_bit at ANSELA.B0;
    const register unsigned short int ANSA1 = 1;
    sbit  ANSA1_bit at ANSELA.B1;
    const register unsigned short int ANSA2 = 2;
    sbit  ANSA2_bit at ANSELA.B2;
    const register unsigned short int ANSA4 = 4;
    sbit  ANSA4_bit at ANSELA.B4;

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
    const register unsigned short int VREGPM = 1;
    sbit  VREGPM_bit at VREGCON.B1;

    // WPUA bits
    const register unsigned short int WPUA0 = 0;
    sbit  WPUA0_bit at WPUA.B0;
    const register unsigned short int WPUA1 = 1;
    sbit  WPUA1_bit at WPUA.B1;
    const register unsigned short int WPUA2 = 2;
    sbit  WPUA2_bit at WPUA.B2;
    const register unsigned short int WPUA3 = 3;
    sbit  WPUA3_bit at WPUA.B3;
    const register unsigned short int WPUA4 = 4;
    sbit  WPUA4_bit at WPUA.B4;
    const register unsigned short int WPUA5 = 5;
    sbit  WPUA5_bit at WPUA.B5;

    // IOCAP bits
    const register unsigned short int IOCAP0 = 0;
    sbit  IOCAP0_bit at IOCAP.B0;
    const register unsigned short int IOCAP1 = 1;
    sbit  IOCAP1_bit at IOCAP.B1;
    const register unsigned short int IOCAP2 = 2;
    sbit  IOCAP2_bit at IOCAP.B2;
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
    const register unsigned short int IOCAN2 = 2;
    sbit  IOCAN2_bit at IOCAN.B2;
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
    const register unsigned short int IOCAF2 = 2;
    sbit  IOCAF2_bit at IOCAF.B2;
    const register unsigned short int IOCAF3 = 3;
    sbit  IOCAF3_bit at IOCAF.B3;
    const register unsigned short int IOCAF4 = 4;
    sbit  IOCAF4_bit at IOCAF.B4;
    const register unsigned short int IOCAF5 = 5;
    sbit  IOCAF5_bit at IOCAF.B5;

    // NCO1ACCL bits
    const register unsigned short int NCO1ACC0 = 0;
    sbit  NCO1ACC0_bit at NCO1ACCL.B0;
    const register unsigned short int NCO1ACC1 = 1;
    sbit  NCO1ACC1_bit at NCO1ACCL.B1;
    const register unsigned short int NCO1ACC2 = 2;
    sbit  NCO1ACC2_bit at NCO1ACCL.B2;
    const register unsigned short int NCO1ACC3 = 3;
    sbit  NCO1ACC3_bit at NCO1ACCL.B3;
    const register unsigned short int NCO1ACC4 = 4;
    sbit  NCO1ACC4_bit at NCO1ACCL.B4;
    const register unsigned short int NCO1ACC5 = 5;
    sbit  NCO1ACC5_bit at NCO1ACCL.B5;
    const register unsigned short int NCO1ACC6 = 6;
    sbit  NCO1ACC6_bit at NCO1ACCL.B6;
    const register unsigned short int NCO1ACC7 = 7;
    sbit  NCO1ACC7_bit at NCO1ACCL.B7;

    // NCO1ACCH bits
    const register unsigned short int NCO1ACC8 = 0;
    sbit  NCO1ACC8_bit at NCO1ACCH.B0;
    const register unsigned short int NCO1ACC9 = 1;
    sbit  NCO1ACC9_bit at NCO1ACCH.B1;
    const register unsigned short int NCO1ACC10 = 2;
    sbit  NCO1ACC10_bit at NCO1ACCH.B2;
    const register unsigned short int NCO1ACC11 = 3;
    sbit  NCO1ACC11_bit at NCO1ACCH.B3;
    const register unsigned short int NCO1ACC12 = 4;
    sbit  NCO1ACC12_bit at NCO1ACCH.B4;
    const register unsigned short int NCO1ACC13 = 5;
    sbit  NCO1ACC13_bit at NCO1ACCH.B5;
    const register unsigned short int NCO1ACC14 = 6;
    sbit  NCO1ACC14_bit at NCO1ACCH.B6;
    const register unsigned short int NCO1ACC15 = 7;
    sbit  NCO1ACC15_bit at NCO1ACCH.B7;

    // NCO1ACCU bits
    const register unsigned short int NCO1ACC16 = 0;
    sbit  NCO1ACC16_bit at NCO1ACCU.B0;
    const register unsigned short int NCO1ACC17 = 1;
    sbit  NCO1ACC17_bit at NCO1ACCU.B1;
    const register unsigned short int NCO1ACC18 = 2;
    sbit  NCO1ACC18_bit at NCO1ACCU.B2;
    const register unsigned short int NCO1ACC19 = 3;
    sbit  NCO1ACC19_bit at NCO1ACCU.B3;

    // NCO1INCL bits
    const register unsigned short int NCO1INC0 = 0;
    sbit  NCO1INC0_bit at NCO1INCL.B0;
    const register unsigned short int NCO1INC1 = 1;
    sbit  NCO1INC1_bit at NCO1INCL.B1;
    const register unsigned short int NCO1INC2 = 2;
    sbit  NCO1INC2_bit at NCO1INCL.B2;
    const register unsigned short int NCO1INC3 = 3;
    sbit  NCO1INC3_bit at NCO1INCL.B3;
    const register unsigned short int NCO1INC4 = 4;
    sbit  NCO1INC4_bit at NCO1INCL.B4;
    const register unsigned short int NCO1INC5 = 5;
    sbit  NCO1INC5_bit at NCO1INCL.B5;
    const register unsigned short int NCO1INC6 = 6;
    sbit  NCO1INC6_bit at NCO1INCL.B6;
    const register unsigned short int NCO1INC7 = 7;
    sbit  NCO1INC7_bit at NCO1INCL.B7;

    // NCO1INCH bits
    const register unsigned short int NCO1INC8 = 0;
    sbit  NCO1INC8_bit at NCO1INCH.B0;
    const register unsigned short int NCO1INC9 = 1;
    sbit  NCO1INC9_bit at NCO1INCH.B1;
    const register unsigned short int NCO1INC10 = 2;
    sbit  NCO1INC10_bit at NCO1INCH.B2;
    const register unsigned short int NCO1INC11 = 3;
    sbit  NCO1INC11_bit at NCO1INCH.B3;
    const register unsigned short int NCO1INC12 = 4;
    sbit  NCO1INC12_bit at NCO1INCH.B4;
    const register unsigned short int NCO1INC13 = 5;
    sbit  NCO1INC13_bit at NCO1INCH.B5;
    const register unsigned short int NCO1INC14 = 6;
    sbit  NCO1INC14_bit at NCO1INCH.B6;
    const register unsigned short int NCO1INC15 = 7;
    sbit  NCO1INC15_bit at NCO1INCH.B7;

    // NCO1CON bits
    const register unsigned short int N1PFM = 0;
    sbit  N1PFM_bit at NCO1CON.B0;
    const register unsigned short int N1POL = 4;
    sbit  N1POL_bit at NCO1CON.B4;
    const register unsigned short int N1OUT = 5;
    sbit  N1OUT_bit at NCO1CON.B5;
    const register unsigned short int N1OE = 6;
    sbit  N1OE_bit at NCO1CON.B6;
    const register unsigned short int N1EN = 7;
    sbit  N1EN_bit at NCO1CON.B7;

    // NCO1CLK bits
    const register unsigned short int N1CKS0 = 0;
    sbit  N1CKS0_bit at NCO1CLK.B0;
    const register unsigned short int N1CKS1 = 1;
    sbit  N1CKS1_bit at NCO1CLK.B1;
    const register unsigned short int N1PWS0 = 5;
    sbit  N1PWS0_bit at NCO1CLK.B5;
    const register unsigned short int N1PWS1 = 6;
    sbit  N1PWS1_bit at NCO1CLK.B6;
    const register unsigned short int N1PWS2 = 7;
    sbit  N1PWS2_bit at NCO1CLK.B7;

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

    // PWM3DCL bits
    const register unsigned short int PWM3DCL0 = 6;
    sbit  PWM3DCL0_bit at PWM3DCL.B6;
    const register unsigned short int PWM3DCL1 = 7;
    sbit  PWM3DCL1_bit at PWM3DCL.B7;

    // PWM3DCH bits
    const register unsigned short int PWM3DCH0 = 0;
    sbit  PWM3DCH0_bit at PWM3DCH.B0;
    const register unsigned short int PWM3DCH1 = 1;
    sbit  PWM3DCH1_bit at PWM3DCH.B1;
    const register unsigned short int PWM3DCH2 = 2;
    sbit  PWM3DCH2_bit at PWM3DCH.B2;
    const register unsigned short int PWM3DCH3 = 3;
    sbit  PWM3DCH3_bit at PWM3DCH.B3;
    const register unsigned short int PWM3DCH4 = 4;
    sbit  PWM3DCH4_bit at PWM3DCH.B4;
    const register unsigned short int PWM3DCH5 = 5;
    sbit  PWM3DCH5_bit at PWM3DCH.B5;
    const register unsigned short int PWM3DCH6 = 6;
    sbit  PWM3DCH6_bit at PWM3DCH.B6;
    const register unsigned short int PWM3DCH7 = 7;
    sbit  PWM3DCH7_bit at PWM3DCH.B7;

    // PWM3CON, PWM3CON0 bits
    const register unsigned short int PWM3POL = 4;
    sbit  PWM3POL_bit at PWM3CON.B4;
    const register unsigned short int PWM3OUT = 5;
    sbit  PWM3OUT_bit at PWM3CON.B5;
    const register unsigned short int PWM3OE = 6;
    sbit  PWM3OE_bit at PWM3CON.B6;
    const register unsigned short int PWM3EN = 7;
    sbit  PWM3EN_bit at PWM3CON.B7;

    // PWM4DCL bits
    const register unsigned short int PWM4DCL0 = 6;
    sbit  PWM4DCL0_bit at PWM4DCL.B6;
    const register unsigned short int PWM4DCL1 = 7;
    sbit  PWM4DCL1_bit at PWM4DCL.B7;

    // PWM4DCH bits
    const register unsigned short int PWM4DCH0 = 0;
    sbit  PWM4DCH0_bit at PWM4DCH.B0;
    const register unsigned short int PWM4DCH1 = 1;
    sbit  PWM4DCH1_bit at PWM4DCH.B1;
    const register unsigned short int PWM4DCH2 = 2;
    sbit  PWM4DCH2_bit at PWM4DCH.B2;
    const register unsigned short int PWM4DCH3 = 3;
    sbit  PWM4DCH3_bit at PWM4DCH.B3;
    const register unsigned short int PWM4DCH4 = 4;
    sbit  PWM4DCH4_bit at PWM4DCH.B4;
    const register unsigned short int PWM4DCH5 = 5;
    sbit  PWM4DCH5_bit at PWM4DCH.B5;
    const register unsigned short int PWM4DCH6 = 6;
    sbit  PWM4DCH6_bit at PWM4DCH.B6;
    const register unsigned short int PWM4DCH7 = 7;
    sbit  PWM4DCH7_bit at PWM4DCH.B7;

    // PWM4CON, PWM4CON0 bits
    const register unsigned short int PWM4POL = 4;
    sbit  PWM4POL_bit at PWM4CON.B4;
    const register unsigned short int PWM4OUT = 5;
    sbit  PWM4OUT_bit at PWM4CON.B5;
    const register unsigned short int PWM4OE = 6;
    sbit  PWM4OE_bit at PWM4CON.B6;
    const register unsigned short int PWM4EN = 7;
    sbit  PWM4EN_bit at PWM4CON.B7;

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
    const register unsigned short int G1IS2 = 2;
    sbit  G1IS2_bit at CWG1CON1.B2;
    const register unsigned short int G1ASDLA0 = 4;
    sbit  G1ASDLA0_bit at CWG1CON1.B4;
    const register unsigned short int G1ASDLA1 = 5;
    sbit  G1ASDLA1_bit at CWG1CON1.B5;
    const register unsigned short int G1ASDLB0 = 6;
    sbit  G1ASDLB0_bit at CWG1CON1.B6;
    const register unsigned short int G1ASDLB1 = 7;
    sbit  G1ASDLB1_bit at CWG1CON1.B7;

    // CWG1CON2 bits
    const register unsigned short int G1ASDSCLC2 = 0;
    sbit  G1ASDSCLC2_bit at CWG1CON2.B0;
    const register unsigned short int G1ASDSFLT = 1;
    sbit  G1ASDSFLT_bit at CWG1CON2.B1;
    const register unsigned short int G1ASDSC1 = 2;
    sbit  G1ASDSC1_bit at CWG1CON2.B2;
    const register unsigned short int G1ARSEN = 6;
    sbit  G1ARSEN_bit at CWG1CON2.B6;
    const register unsigned short int G1ASE = 7;
    sbit  G1ASE_bit at CWG1CON2.B7;

    // CLCDATA bits
    const register unsigned short int MCLC1OUT = 0;
    sbit  MCLC1OUT_bit at CLCDATA.B0;
    const register unsigned short int MCLC2OUT = 1;
    sbit  MCLC2OUT_bit at CLCDATA.B1;

    // CLC1CON bits
    const register unsigned short int LC1MODE0 = 0;
    sbit  LC1MODE0_bit at CLC1CON.B0;
    const register unsigned short int LC1MODE1 = 1;
    sbit  LC1MODE1_bit at CLC1CON.B1;
    const register unsigned short int LC1MODE2 = 2;
    sbit  LC1MODE2_bit at CLC1CON.B2;
    const register unsigned short int LC1INTN = 3;
    sbit  LC1INTN_bit at CLC1CON.B3;
    const register unsigned short int LC1INTP = 4;
    sbit  LC1INTP_bit at CLC1CON.B4;
    const register unsigned short int LC1OUT = 5;
    sbit  LC1OUT_bit at CLC1CON.B5;
    const register unsigned short int LC1OE = 6;
    sbit  LC1OE_bit at CLC1CON.B6;
    const register unsigned short int LC1EN = 7;
    sbit  LC1EN_bit at CLC1CON.B7;
    const register unsigned short int LCMODE0 = 0;
    sbit  LCMODE0_bit at CLC1CON.B0;
    const register unsigned short int LCMODE1 = 1;
    sbit  LCMODE1_bit at CLC1CON.B1;
    const register unsigned short int LCMODE2 = 2;
    sbit  LCMODE2_bit at CLC1CON.B2;
    const register unsigned short int LCINTN = 3;
    sbit  LCINTN_bit at CLC1CON.B3;
    const register unsigned short int LCINTP = 4;
    sbit  LCINTP_bit at CLC1CON.B4;
    const register unsigned short int LCOUT = 5;
    sbit  LCOUT_bit at CLC1CON.B5;
    const register unsigned short int LCOE = 6;
    sbit  LCOE_bit at CLC1CON.B6;
    const register unsigned short int LCEN = 7;
    sbit  LCEN_bit at CLC1CON.B7;

    // CLC1POL bits
    const register unsigned short int LC1G1POL = 0;
    sbit  LC1G1POL_bit at CLC1POL.B0;
    const register unsigned short int LC1G2POL = 1;
    sbit  LC1G2POL_bit at CLC1POL.B1;
    const register unsigned short int LC1G3POL = 2;
    sbit  LC1G3POL_bit at CLC1POL.B2;
    const register unsigned short int LC1G4POL = 3;
    sbit  LC1G4POL_bit at CLC1POL.B3;
    const register unsigned short int LC1POL = 7;
    sbit  LC1POL_bit at CLC1POL.B7;
    const register unsigned short int G1POL = 0;
    sbit  G1POL_bit at CLC1POL.B0;
    const register unsigned short int G2POL = 1;
    sbit  G2POL_bit at CLC1POL.B1;
    const register unsigned short int G3POL = 2;
    sbit  G3POL_bit at CLC1POL.B2;
    const register unsigned short int G4POL = 3;
    sbit  G4POL_bit at CLC1POL.B3;
    const register unsigned short int POL = 7;
    sbit  POL_bit at CLC1POL.B7;

    // CLC1SEL0 bits
    const register unsigned short int LC1D1S0 = 0;
    sbit  LC1D1S0_bit at CLC1SEL0.B0;
    const register unsigned short int LC1D1S1 = 1;
    sbit  LC1D1S1_bit at CLC1SEL0.B1;
    const register unsigned short int LC1D1S2 = 2;
    sbit  LC1D1S2_bit at CLC1SEL0.B2;
    const register unsigned short int LC1D2S0 = 4;
    sbit  LC1D2S0_bit at CLC1SEL0.B4;
    const register unsigned short int LC1D2S1 = 5;
    sbit  LC1D2S1_bit at CLC1SEL0.B5;
    const register unsigned short int LC1D2S2 = 6;
    sbit  LC1D2S2_bit at CLC1SEL0.B6;
    const register unsigned short int D1S0 = 0;
    sbit  D1S0_bit at CLC1SEL0.B0;
    const register unsigned short int D1S1 = 1;
    sbit  D1S1_bit at CLC1SEL0.B1;
    const register unsigned short int D1S2 = 2;
    sbit  D1S2_bit at CLC1SEL0.B2;
    const register unsigned short int D2S0 = 4;
    sbit  D2S0_bit at CLC1SEL0.B4;
    const register unsigned short int D2S1 = 5;
    sbit  D2S1_bit at CLC1SEL0.B5;
    const register unsigned short int D2S2 = 6;
    sbit  D2S2_bit at CLC1SEL0.B6;

    // CLC1SEL1 bits
    const register unsigned short int LC1D3S0 = 0;
    sbit  LC1D3S0_bit at CLC1SEL1.B0;
    const register unsigned short int LC1D3S1 = 1;
    sbit  LC1D3S1_bit at CLC1SEL1.B1;
    const register unsigned short int LC1D3S2 = 2;
    sbit  LC1D3S2_bit at CLC1SEL1.B2;
    const register unsigned short int LC1D4S0 = 4;
    sbit  LC1D4S0_bit at CLC1SEL1.B4;
    const register unsigned short int LC1D4S1 = 5;
    sbit  LC1D4S1_bit at CLC1SEL1.B5;
    const register unsigned short int LC1D4S2 = 6;
    sbit  LC1D4S2_bit at CLC1SEL1.B6;
    const register unsigned short int D3S0 = 0;
    sbit  D3S0_bit at CLC1SEL1.B0;
    const register unsigned short int D3S1 = 1;
    sbit  D3S1_bit at CLC1SEL1.B1;
    const register unsigned short int D3S2 = 2;
    sbit  D3S2_bit at CLC1SEL1.B2;
    const register unsigned short int D4S0 = 4;
    sbit  D4S0_bit at CLC1SEL1.B4;
    const register unsigned short int D4S1 = 5;
    sbit  D4S1_bit at CLC1SEL1.B5;
    const register unsigned short int D4S2 = 6;
    sbit  D4S2_bit at CLC1SEL1.B6;

    // CLC1GLS0 bits
    const register unsigned short int LC1G1D1N = 0;
    sbit  LC1G1D1N_bit at CLC1GLS0.B0;
    const register unsigned short int LC1G1D1T = 1;
    sbit  LC1G1D1T_bit at CLC1GLS0.B1;
    const register unsigned short int LC1G1D2N = 2;
    sbit  LC1G1D2N_bit at CLC1GLS0.B2;
    const register unsigned short int LC1G1D2T = 3;
    sbit  LC1G1D2T_bit at CLC1GLS0.B3;
    const register unsigned short int LC1G1D3N = 4;
    sbit  LC1G1D3N_bit at CLC1GLS0.B4;
    const register unsigned short int LC1G1D3T = 5;
    sbit  LC1G1D3T_bit at CLC1GLS0.B5;
    const register unsigned short int LC1G1D4N = 6;
    sbit  LC1G1D4N_bit at CLC1GLS0.B6;
    const register unsigned short int LC1G1D4T = 7;
    sbit  LC1G1D4T_bit at CLC1GLS0.B7;
    const register unsigned short int D1N = 0;
    sbit  D1N_bit at CLC1GLS0.B0;
    const register unsigned short int D1T = 1;
    sbit  D1T_bit at CLC1GLS0.B1;
    const register unsigned short int D2N = 2;
    sbit  D2N_bit at CLC1GLS0.B2;
    const register unsigned short int D2T = 3;
    sbit  D2T_bit at CLC1GLS0.B3;
    const register unsigned short int D3N = 4;
    sbit  D3N_bit at CLC1GLS0.B4;
    const register unsigned short int D3T = 5;
    sbit  D3T_bit at CLC1GLS0.B5;
    const register unsigned short int D4N = 6;
    sbit  D4N_bit at CLC1GLS0.B6;
    const register unsigned short int D4T = 7;
    sbit  D4T_bit at CLC1GLS0.B7;

    // CLC1GLS1 bits
    const register unsigned short int LC1G2D1N = 0;
    sbit  LC1G2D1N_bit at CLC1GLS1.B0;
    const register unsigned short int LC1G2D1T = 1;
    sbit  LC1G2D1T_bit at CLC1GLS1.B1;
    const register unsigned short int LC1G2D2N = 2;
    sbit  LC1G2D2N_bit at CLC1GLS1.B2;
    const register unsigned short int LC1G2D2T = 3;
    sbit  LC1G2D2T_bit at CLC1GLS1.B3;
    const register unsigned short int LC1G2D3N = 4;
    sbit  LC1G2D3N_bit at CLC1GLS1.B4;
    const register unsigned short int LC1G2D3T = 5;
    sbit  LC1G2D3T_bit at CLC1GLS1.B5;
    const register unsigned short int LC1G2D4N = 6;
    sbit  LC1G2D4N_bit at CLC1GLS1.B6;
    const register unsigned short int LC1G2D4T = 7;
    sbit  LC1G2D4T_bit at CLC1GLS1.B7;
    sbit  D1N_CLC1GLS1_bit at CLC1GLS1.B0;
    sbit  D1T_CLC1GLS1_bit at CLC1GLS1.B1;
    sbit  D2N_CLC1GLS1_bit at CLC1GLS1.B2;
    sbit  D2T_CLC1GLS1_bit at CLC1GLS1.B3;
    sbit  D3N_CLC1GLS1_bit at CLC1GLS1.B4;
    sbit  D3T_CLC1GLS1_bit at CLC1GLS1.B5;
    sbit  D4N_CLC1GLS1_bit at CLC1GLS1.B6;
    sbit  D4T_CLC1GLS1_bit at CLC1GLS1.B7;

    // CLC1GLS2 bits
    const register unsigned short int LC1G3D1N = 0;
    sbit  LC1G3D1N_bit at CLC1GLS2.B0;
    const register unsigned short int LC1G3D1T = 1;
    sbit  LC1G3D1T_bit at CLC1GLS2.B1;
    const register unsigned short int LC1G3D2N = 2;
    sbit  LC1G3D2N_bit at CLC1GLS2.B2;
    const register unsigned short int LC1G3D2T = 3;
    sbit  LC1G3D2T_bit at CLC1GLS2.B3;
    const register unsigned short int LC1G3D3N = 4;
    sbit  LC1G3D3N_bit at CLC1GLS2.B4;
    const register unsigned short int LC1G3D3T = 5;
    sbit  LC1G3D3T_bit at CLC1GLS2.B5;
    const register unsigned short int LC1G3D4N = 6;
    sbit  LC1G3D4N_bit at CLC1GLS2.B6;
    const register unsigned short int LC1G3D4T = 7;
    sbit  LC1G3D4T_bit at CLC1GLS2.B7;
    sbit  D1N_CLC1GLS2_bit at CLC1GLS2.B0;
    sbit  D1T_CLC1GLS2_bit at CLC1GLS2.B1;
    sbit  D2N_CLC1GLS2_bit at CLC1GLS2.B2;
    sbit  D2T_CLC1GLS2_bit at CLC1GLS2.B3;
    sbit  D3N_CLC1GLS2_bit at CLC1GLS2.B4;
    sbit  D3T_CLC1GLS2_bit at CLC1GLS2.B5;
    sbit  D4N_CLC1GLS2_bit at CLC1GLS2.B6;
    sbit  D4T_CLC1GLS2_bit at CLC1GLS2.B7;

    // CLC1GLS3 bits
    const register unsigned short int LC1G4D1N = 0;
    sbit  LC1G4D1N_bit at CLC1GLS3.B0;
    const register unsigned short int LC1G4D1T = 1;
    sbit  LC1G4D1T_bit at CLC1GLS3.B1;
    const register unsigned short int LC1G4D2N = 2;
    sbit  LC1G4D2N_bit at CLC1GLS3.B2;
    const register unsigned short int LC1G4D2T = 3;
    sbit  LC1G4D2T_bit at CLC1GLS3.B3;
    const register unsigned short int LC1G4D3N = 4;
    sbit  LC1G4D3N_bit at CLC1GLS3.B4;
    const register unsigned short int LC1G4D3T = 5;
    sbit  LC1G4D3T_bit at CLC1GLS3.B5;
    const register unsigned short int LC1G4D4N = 6;
    sbit  LC1G4D4N_bit at CLC1GLS3.B6;
    const register unsigned short int LC1G4D4T = 7;
    sbit  LC1G4D4T_bit at CLC1GLS3.B7;
    const register unsigned short int G4D1N = 0;
    sbit  G4D1N_bit at CLC1GLS3.B0;
    const register unsigned short int G4D1T = 1;
    sbit  G4D1T_bit at CLC1GLS3.B1;
    const register unsigned short int G4D2N = 2;
    sbit  G4D2N_bit at CLC1GLS3.B2;
    const register unsigned short int G4D2T = 3;
    sbit  G4D2T_bit at CLC1GLS3.B3;
    const register unsigned short int G4D3N = 4;
    sbit  G4D3N_bit at CLC1GLS3.B4;
    const register unsigned short int G4D3T = 5;
    sbit  G4D3T_bit at CLC1GLS3.B5;
    const register unsigned short int G4D4N = 6;
    sbit  G4D4N_bit at CLC1GLS3.B6;
    const register unsigned short int G4D4T = 7;
    sbit  G4D4T_bit at CLC1GLS3.B7;

    // CLC2CON bits
    const register unsigned short int LC2MODE0 = 0;
    sbit  LC2MODE0_bit at CLC2CON.B0;
    const register unsigned short int LC2MODE1 = 1;
    sbit  LC2MODE1_bit at CLC2CON.B1;
    const register unsigned short int LC2MODE2 = 2;
    sbit  LC2MODE2_bit at CLC2CON.B2;
    const register unsigned short int LC2INTN = 3;
    sbit  LC2INTN_bit at CLC2CON.B3;
    const register unsigned short int LC2INTP = 4;
    sbit  LC2INTP_bit at CLC2CON.B4;
    const register unsigned short int LC2OUT = 5;
    sbit  LC2OUT_bit at CLC2CON.B5;
    const register unsigned short int LC2OE = 6;
    sbit  LC2OE_bit at CLC2CON.B6;
    const register unsigned short int LC2EN = 7;
    sbit  LC2EN_bit at CLC2CON.B7;
    sbit  LCMODE0_CLC2CON_bit at CLC2CON.B0;
    sbit  LCMODE1_CLC2CON_bit at CLC2CON.B1;
    sbit  LCMODE2_CLC2CON_bit at CLC2CON.B2;
    sbit  LCINTN_CLC2CON_bit at CLC2CON.B3;
    sbit  LCINTP_CLC2CON_bit at CLC2CON.B4;
    sbit  LCOUT_CLC2CON_bit at CLC2CON.B5;
    sbit  LCOE_CLC2CON_bit at CLC2CON.B6;
    sbit  LCEN_CLC2CON_bit at CLC2CON.B7;

    // CLC2POL bits
    const register unsigned short int LC2G1POL = 0;
    sbit  LC2G1POL_bit at CLC2POL.B0;
    const register unsigned short int LC2G2POL = 1;
    sbit  LC2G2POL_bit at CLC2POL.B1;
    const register unsigned short int LC2G3POL = 2;
    sbit  LC2G3POL_bit at CLC2POL.B2;
    const register unsigned short int LC2G4POL = 3;
    sbit  LC2G4POL_bit at CLC2POL.B3;
    const register unsigned short int LC2POL = 7;
    sbit  LC2POL_bit at CLC2POL.B7;
    sbit  G1POL_CLC2POL_bit at CLC2POL.B0;
    sbit  G2POL_CLC2POL_bit at CLC2POL.B1;
    sbit  G3POL_CLC2POL_bit at CLC2POL.B2;
    sbit  G4POL_CLC2POL_bit at CLC2POL.B3;
    sbit  POL_CLC2POL_bit at CLC2POL.B7;

    // CLC2SEL0 bits
    const register unsigned short int LC2D1S0 = 0;
    sbit  LC2D1S0_bit at CLC2SEL0.B0;
    const register unsigned short int LC2D1S1 = 1;
    sbit  LC2D1S1_bit at CLC2SEL0.B1;
    const register unsigned short int LC2D1S2 = 2;
    sbit  LC2D1S2_bit at CLC2SEL0.B2;
    const register unsigned short int LC2D2S0 = 4;
    sbit  LC2D2S0_bit at CLC2SEL0.B4;
    const register unsigned short int LC2D2S1 = 5;
    sbit  LC2D2S1_bit at CLC2SEL0.B5;
    const register unsigned short int LC2D2S2 = 6;
    sbit  LC2D2S2_bit at CLC2SEL0.B6;
    sbit  D1S0_CLC2SEL0_bit at CLC2SEL0.B0;
    sbit  D1S1_CLC2SEL0_bit at CLC2SEL0.B1;
    sbit  D1S2_CLC2SEL0_bit at CLC2SEL0.B2;
    sbit  D2S0_CLC2SEL0_bit at CLC2SEL0.B4;
    sbit  D2S1_CLC2SEL0_bit at CLC2SEL0.B5;
    sbit  D2S2_CLC2SEL0_bit at CLC2SEL0.B6;

    // CLC2SEL1 bits
    const register unsigned short int LC2D3S0 = 0;
    sbit  LC2D3S0_bit at CLC2SEL1.B0;
    const register unsigned short int LC2D3S1 = 1;
    sbit  LC2D3S1_bit at CLC2SEL1.B1;
    const register unsigned short int LC2D3S2 = 2;
    sbit  LC2D3S2_bit at CLC2SEL1.B2;
    const register unsigned short int LC2D4S0 = 4;
    sbit  LC2D4S0_bit at CLC2SEL1.B4;
    const register unsigned short int LC2D4S1 = 5;
    sbit  LC2D4S1_bit at CLC2SEL1.B5;
    const register unsigned short int LC2D4S2 = 6;
    sbit  LC2D4S2_bit at CLC2SEL1.B6;
    sbit  D3S0_CLC2SEL1_bit at CLC2SEL1.B0;
    sbit  D3S1_CLC2SEL1_bit at CLC2SEL1.B1;
    sbit  D3S2_CLC2SEL1_bit at CLC2SEL1.B2;
    sbit  D4S0_CLC2SEL1_bit at CLC2SEL1.B4;
    sbit  D4S1_CLC2SEL1_bit at CLC2SEL1.B5;
    sbit  D4S2_CLC2SEL1_bit at CLC2SEL1.B6;

    // CLC2GLS0 bits
    const register unsigned short int LC2G1D1N = 0;
    sbit  LC2G1D1N_bit at CLC2GLS0.B0;
    const register unsigned short int LC2G1D1T = 1;
    sbit  LC2G1D1T_bit at CLC2GLS0.B1;
    const register unsigned short int LC2G1D2N = 2;
    sbit  LC2G1D2N_bit at CLC2GLS0.B2;
    const register unsigned short int LC2G1D2T = 3;
    sbit  LC2G1D2T_bit at CLC2GLS0.B3;
    const register unsigned short int LC2G1D3N = 4;
    sbit  LC2G1D3N_bit at CLC2GLS0.B4;
    const register unsigned short int LC2G1D3T = 5;
    sbit  LC2G1D3T_bit at CLC2GLS0.B5;
    const register unsigned short int LC2G1D4N = 6;
    sbit  LC2G1D4N_bit at CLC2GLS0.B6;
    const register unsigned short int LC2G1D4T = 7;
    sbit  LC2G1D4T_bit at CLC2GLS0.B7;
    sbit  D1N_CLC2GLS0_bit at CLC2GLS0.B0;
    sbit  D1T_CLC2GLS0_bit at CLC2GLS0.B1;
    sbit  D2N_CLC2GLS0_bit at CLC2GLS0.B2;
    sbit  D2T_CLC2GLS0_bit at CLC2GLS0.B3;
    sbit  D3N_CLC2GLS0_bit at CLC2GLS0.B4;
    sbit  D3T_CLC2GLS0_bit at CLC2GLS0.B5;
    sbit  D4N_CLC2GLS0_bit at CLC2GLS0.B6;
    sbit  D4T_CLC2GLS0_bit at CLC2GLS0.B7;

    // CLC2GLS1 bits
    const register unsigned short int LC2G2D1N = 0;
    sbit  LC2G2D1N_bit at CLC2GLS1.B0;
    const register unsigned short int LC2G2D1T = 1;
    sbit  LC2G2D1T_bit at CLC2GLS1.B1;
    const register unsigned short int LC2G2D2N = 2;
    sbit  LC2G2D2N_bit at CLC2GLS1.B2;
    const register unsigned short int LC2G2D2T = 3;
    sbit  LC2G2D2T_bit at CLC2GLS1.B3;
    const register unsigned short int LC2G2D3N = 4;
    sbit  LC2G2D3N_bit at CLC2GLS1.B4;
    const register unsigned short int LC2G2D3T = 5;
    sbit  LC2G2D3T_bit at CLC2GLS1.B5;
    const register unsigned short int LC2G2D4N = 6;
    sbit  LC2G2D4N_bit at CLC2GLS1.B6;
    const register unsigned short int LC2G2D4T = 7;
    sbit  LC2G2D4T_bit at CLC2GLS1.B7;
    sbit  D1N_CLC2GLS1_bit at CLC2GLS1.B0;
    sbit  D1T_CLC2GLS1_bit at CLC2GLS1.B1;
    sbit  D2N_CLC2GLS1_bit at CLC2GLS1.B2;
    sbit  D2T_CLC2GLS1_bit at CLC2GLS1.B3;
    sbit  D3N_CLC2GLS1_bit at CLC2GLS1.B4;
    sbit  D3T_CLC2GLS1_bit at CLC2GLS1.B5;
    sbit  D4N_CLC2GLS1_bit at CLC2GLS1.B6;
    sbit  D4T_CLC2GLS1_bit at CLC2GLS1.B7;

    // CLC2GLS2 bits
    const register unsigned short int LC2G3D1N = 0;
    sbit  LC2G3D1N_bit at CLC2GLS2.B0;
    const register unsigned short int LC2G3D1T = 1;
    sbit  LC2G3D1T_bit at CLC2GLS2.B1;
    const register unsigned short int LC2G3D2N = 2;
    sbit  LC2G3D2N_bit at CLC2GLS2.B2;
    const register unsigned short int LC2G3D2T = 3;
    sbit  LC2G3D2T_bit at CLC2GLS2.B3;
    const register unsigned short int LC2G3D3N = 4;
    sbit  LC2G3D3N_bit at CLC2GLS2.B4;
    const register unsigned short int LC2G3D3T = 5;
    sbit  LC2G3D3T_bit at CLC2GLS2.B5;
    const register unsigned short int LC2G3D4N = 6;
    sbit  LC2G3D4N_bit at CLC2GLS2.B6;
    const register unsigned short int LC2G3D4T = 7;
    sbit  LC2G3D4T_bit at CLC2GLS2.B7;
    sbit  D1N_CLC2GLS2_bit at CLC2GLS2.B0;
    sbit  D1T_CLC2GLS2_bit at CLC2GLS2.B1;
    sbit  D2N_CLC2GLS2_bit at CLC2GLS2.B2;
    sbit  D2T_CLC2GLS2_bit at CLC2GLS2.B3;
    sbit  D3N_CLC2GLS2_bit at CLC2GLS2.B4;
    sbit  D3T_CLC2GLS2_bit at CLC2GLS2.B5;
    sbit  D4N_CLC2GLS2_bit at CLC2GLS2.B6;
    sbit  D4T_CLC2GLS2_bit at CLC2GLS2.B7;

    // CLC2GLS3 bits
    const register unsigned short int LC2G4D1N = 0;
    sbit  LC2G4D1N_bit at CLC2GLS3.B0;
    const register unsigned short int LC2G4D1T = 1;
    sbit  LC2G4D1T_bit at CLC2GLS3.B1;
    const register unsigned short int LC2G4D2N = 2;
    sbit  LC2G4D2N_bit at CLC2GLS3.B2;
    const register unsigned short int LC2G4D2T = 3;
    sbit  LC2G4D2T_bit at CLC2GLS3.B3;
    const register unsigned short int LC2G4D3N = 4;
    sbit  LC2G4D3N_bit at CLC2GLS3.B4;
    const register unsigned short int LC2G4D3T = 5;
    sbit  LC2G4D3T_bit at CLC2GLS3.B5;
    const register unsigned short int LC2G4D4N = 6;
    sbit  LC2G4D4N_bit at CLC2GLS3.B6;
    const register unsigned short int LC2G4D4T = 7;
    sbit  LC2G4D4T_bit at CLC2GLS3.B7;
    sbit  G4D1N_CLC2GLS3_bit at CLC2GLS3.B0;
    sbit  G4D1T_CLC2GLS3_bit at CLC2GLS3.B1;
    sbit  G4D2N_CLC2GLS3_bit at CLC2GLS3.B2;
    sbit  G4D2T_CLC2GLS3_bit at CLC2GLS3.B3;
    sbit  G4D3N_CLC2GLS3_bit at CLC2GLS3.B4;
    sbit  G4D3T_CLC2GLS3_bit at CLC2GLS3.B5;
    sbit  G4D4N_CLC2GLS3_bit at CLC2GLS3.B6;
    sbit  G4D4T_CLC2GLS3_bit at CLC2GLS3.B7;

    // STATUS_SHAD bits
    const register unsigned short int C_SHAD = 0;
    sbit  C_SHAD_bit at STATUS_SHAD.B0;
    const register unsigned short int DC_SHAD = 1;
    sbit  DC_SHAD_bit at STATUS_SHAD.B1;
    const register unsigned short int Z_SHAD = 2;
    sbit  Z_SHAD_bit at STATUS_SHAD.B2;

    // PORTA bits
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

    // TRISA bits
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

    // NCO1INCU bits
