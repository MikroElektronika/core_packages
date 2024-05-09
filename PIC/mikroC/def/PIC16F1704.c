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
sfr unsigned short volatile DAC1CON0         absolute 0x0118;
sfr unsigned short volatile DAC1CON1         absolute 0x0119;
sfr unsigned short volatile ZCD1CON          absolute 0x011C;
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
sfr unsigned short volatile RC1REG           absolute 0x0199;
sfr unsigned short volatile RCREG            absolute 0x0199;
sfr unsigned short volatile RCREG1           absolute 0x0199;
sfr unsigned short volatile TX1REG           absolute 0x019A;
sfr unsigned short volatile TXREG            absolute 0x019A;
sfr unsigned short volatile TXREG1           absolute 0x019A;
sfr unsigned short volatile SP1BRG           absolute 0x019B;
sfr unsigned short volatile SP1BRGL          absolute 0x019B;
sfr unsigned short          SPBRG            absolute 0x019B;
sfr unsigned short          SPBRG1           absolute 0x019B;
sfr unsigned short volatile SPBRGL           absolute 0x019B;
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
sfr unsigned short          BAUDCTL          absolute 0x019F;
sfr unsigned short          BAUDCTL1         absolute 0x019F;
sfr unsigned short          WPUA             absolute 0x020C;
sfr unsigned short volatile WPUC             absolute 0x020E;
sfr unsigned short volatile SSP1BUF          absolute 0x0211;
sfr unsigned short volatile SSPBUF           absolute 0x0211;
sfr unsigned short volatile SSP1ADD          absolute 0x0212;
sfr unsigned short volatile SSPADD           absolute 0x0212;
sfr unsigned short volatile SSP1MSK          absolute 0x0213;
sfr unsigned short volatile SSPMSK           absolute 0x0213;
sfr unsigned short volatile SSP1STAT         absolute 0x0214;
sfr unsigned short volatile SSPSTAT          absolute 0x0214;
sfr unsigned short volatile SSP1CON          absolute 0x0215;
sfr unsigned short volatile SSP1CON1         absolute 0x0215;
sfr unsigned short volatile SSPCON           absolute 0x0215;
sfr unsigned short volatile SSPCON1          absolute 0x0215;
sfr unsigned short volatile SSP1CON2         absolute 0x0216;
sfr unsigned short volatile SSPCON2          absolute 0x0216;
sfr unsigned short volatile SSP1CON3         absolute 0x0217;
sfr unsigned short volatile SSPCON3          absolute 0x0217;
sfr unsigned short volatile ODCONA           absolute 0x028C;
sfr unsigned short volatile ODCONC           absolute 0x028E;
sfr unsigned int   volatile CCPR1            absolute 0x0291;
sfr unsigned short volatile CCPR1L           absolute 0x0291;
sfr unsigned short volatile CCPR1H           absolute 0x0292;
sfr unsigned short volatile CCP1CON          absolute 0x0293;
sfr unsigned short volatile ECCP1CON         absolute 0x0293;
sfr unsigned short volatile CCP2CON          absolute 0x029A;
sfr unsigned short volatile ECCP2CON         absolute 0x029A;
sfr unsigned short volatile CCPTMRS          absolute 0x029E;
sfr unsigned short volatile SLRCONA          absolute 0x030C;
sfr unsigned short volatile SLRCONC          absolute 0x030E;
sfr unsigned short volatile INLVLA           absolute 0x038C;
sfr unsigned short volatile INLVLC           absolute 0x038E;
sfr unsigned short volatile IOCAP            absolute 0x0391;
sfr unsigned short volatile IOCAN            absolute 0x0392;
sfr unsigned short volatile IOCAF            absolute 0x0393;
sfr unsigned short volatile IOCCP            absolute 0x0397;
sfr unsigned short volatile IOCCN            absolute 0x0398;
sfr unsigned short volatile IOCCF            absolute 0x0399;
sfr unsigned short volatile TMR4             absolute 0x0415;
sfr unsigned short volatile PR4              absolute 0x0416;
sfr unsigned short volatile T4CON            absolute 0x0417;
sfr unsigned short volatile TMR6             absolute 0x041C;
sfr unsigned short volatile PR6              absolute 0x041D;
sfr unsigned short volatile T6CON            absolute 0x041E;
sfr unsigned short volatile OPA1CON          absolute 0x0511;
sfr unsigned short volatile OPA2CON          absolute 0x0515;
sfr unsigned short volatile PWM3DCL          absolute 0x0617;
sfr unsigned short volatile PWM3DCH          absolute 0x0618;
sfr unsigned short          PWM3CON          absolute 0x0619;
sfr unsigned short volatile PWM3CON0         absolute 0x0619;
sfr unsigned short volatile PWM4DCL          absolute 0x061A;
sfr unsigned short volatile PWM4DCH          absolute 0x061B;
sfr unsigned short volatile PWM4CON          absolute 0x061C;
sfr unsigned short volatile PWM4CON0         absolute 0x061C;
sfr unsigned short volatile COG1PHR          absolute 0x0691;
sfr unsigned short volatile COG1PHF          absolute 0x0692;
sfr unsigned short volatile COG1BLKR         absolute 0x0693;
sfr unsigned short volatile COG1BLKF         absolute 0x0694;
sfr unsigned short volatile COG1DBR          absolute 0x0695;
sfr unsigned short volatile COG1DBF          absolute 0x0696;
sfr unsigned short volatile COG1CON0         absolute 0x0697;
sfr unsigned short volatile COG1CON1         absolute 0x0698;
sfr unsigned short volatile COG1RIS          absolute 0x0699;
sfr unsigned short volatile COG1RSIM         absolute 0x069A;
sfr unsigned short volatile COG1FIS          absolute 0x069B;
sfr unsigned short volatile COG1FSIM         absolute 0x069C;
sfr unsigned short volatile COG1ASD0         absolute 0x069D;
sfr unsigned short volatile COG1ASD1         absolute 0x069E;
sfr unsigned short volatile COG1STR          absolute 0x069F;
sfr unsigned short volatile PPSLOCK          absolute 0x0E0F;
sfr unsigned short volatile INTPPS           absolute 0x0E10;
sfr unsigned short volatile T0CKIPPS         absolute 0x0E11;
sfr unsigned short volatile T1CKIPPS         absolute 0x0E12;
sfr unsigned short volatile T1GPPS           absolute 0x0E13;
sfr unsigned short volatile CCP1PPS          absolute 0x0E14;
sfr unsigned short volatile CCP2PPS          absolute 0x0E15;
sfr unsigned short volatile COGINPPS         absolute 0x0E17;
sfr unsigned short volatile SSPCLKPPS        absolute 0x0E20;
sfr unsigned short volatile SSPDATPPS        absolute 0x0E21;
sfr unsigned short volatile SSPSSPPS         absolute 0x0E22;
sfr unsigned short volatile RXPPS            absolute 0x0E24;
sfr unsigned short volatile CKPPS            absolute 0x0E25;
sfr unsigned short volatile CLCIN0PPS        absolute 0x0E28;
sfr unsigned short volatile CLCIN1PPS        absolute 0x0E29;
sfr unsigned short volatile CLCIN2PPS        absolute 0x0E2A;
sfr unsigned short volatile CLCIN3PPS        absolute 0x0E2B;
sfr unsigned short volatile RA0PPS           absolute 0x0E90;
sfr unsigned short volatile RA1PPS           absolute 0x0E91;
sfr unsigned short volatile RA2PPS           absolute 0x0E92;
sfr unsigned short volatile RA4PPS           absolute 0x0E94;
sfr unsigned short volatile RA5PPS           absolute 0x0E95;
sfr unsigned short volatile RC0PPS           absolute 0x0EA0;
sfr unsigned short volatile RC1PPS           absolute 0x0EA1;
sfr unsigned short volatile RC2PPS           absolute 0x0EA2;
sfr unsigned short volatile RC3PPS           absolute 0x0EA3;
sfr unsigned short volatile RC4PPS           absolute 0x0EA4;
sfr unsigned short volatile RC5PPS           absolute 0x0EA5;
sfr unsigned short volatile CLCDATA          absolute 0x0F0F;
sfr unsigned short volatile CLC1CON          absolute 0x0F10;
sfr unsigned short volatile CLC1POL          absolute 0x0F11;
sfr unsigned short volatile CLC1SEL0         absolute 0x0F12;
sfr unsigned short volatile CLC1SEL1         absolute 0x0F13;
sfr unsigned short volatile CLC1SEL2         absolute 0x0F14;
sfr unsigned short volatile CLC1SEL3         absolute 0x0F15;
sfr unsigned short volatile CLC1GLS0         absolute 0x0F16;
sfr unsigned short volatile CLC1GLS1         absolute 0x0F17;
sfr unsigned short volatile CLC1GLS2         absolute 0x0F18;
sfr unsigned short volatile CLC1GLS3         absolute 0x0F19;
sfr unsigned short volatile CLC2CON          absolute 0x0F1A;
sfr unsigned short volatile CLC2POL          absolute 0x0F1B;
sfr unsigned short volatile CLC2SEL0         absolute 0x0F1C;
sfr unsigned short volatile CLC2SEL1         absolute 0x0F1D;
sfr unsigned short volatile CLC2SEL2         absolute 0x0F1E;
sfr unsigned short volatile CLC2SEL3         absolute 0x0F1F;
sfr unsigned short volatile CLC2GLS0         absolute 0x0F20;
sfr unsigned short volatile CLC2GLS1         absolute 0x0F21;
sfr unsigned short volatile CLC2GLS2         absolute 0x0F22;
sfr unsigned short volatile CLC2GLS3         absolute 0x0F23;
sfr unsigned short volatile CLC3CON          absolute 0x0F24;
sfr unsigned short volatile CLC3POL          absolute 0x0F25;
sfr unsigned short volatile CLC3SEL0         absolute 0x0F26;
sfr unsigned short volatile CLC3SEL1         absolute 0x0F27;
sfr unsigned short volatile CLC3SEL2         absolute 0x0F28;
sfr unsigned short volatile CLC3SEL3         absolute 0x0F29;
sfr unsigned short volatile CLC3GLS0         absolute 0x0F2A;
sfr unsigned short volatile CLC3GLS1         absolute 0x0F2B;
sfr unsigned short volatile CLC3GLS2         absolute 0x0F2C;
sfr unsigned short volatile CLC3GLS3         absolute 0x0F2D;
sfr unsigned short volatile ICDBK0H          absolute 0x0F9E;
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
sfr unsigned int   volatile CCPR2            absolute 0x0298;
sfr unsigned short volatile CCPR2L           absolute 0x0298;
sfr unsigned short volatile CCPR2H           absolute 0x0299;
sfr unsigned short volatile ICDIO            absolute 0x0F8C;
sfr unsigned short volatile ICDCON0          absolute 0x0F8D;
sfr unsigned short volatile ICDSTAT          absolute 0x0F91;
sfr unsigned short volatile CLKRFRZ          absolute 0x0F92;
sfr unsigned short volatile DEVSEL           absolute 0x0F95;
sfr unsigned short volatile ICDINSTL         absolute 0x0F96;
sfr unsigned short volatile ICDINSTH         absolute 0x0F97;
sfr unsigned short volatile ICDBK0CON        absolute 0x0F9C;
sfr unsigned short volatile ICDBK0L          absolute 0x0F9D;
sfr unsigned short volatile BSRICDSHAD       absolute 0x0FE3;
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
    const register unsigned short int CCPIF = 2;
    sbit  CCPIF_bit at PIR1.B2;

    // PIR2 bits
    const register unsigned short int CCP2IF = 0;
    sbit  CCP2IF_bit at PIR2.B0;
    const register unsigned short int TMR4IF = 1;
    sbit  TMR4IF_bit at PIR2.B1;
    const register unsigned short int TMR6IF = 2;
    sbit  TMR6IF_bit at PIR2.B2;
    const register unsigned short int BCL1IF = 3;
    sbit  BCL1IF_bit at PIR2.B3;
    const register unsigned short int C1IF = 5;
    sbit  C1IF_bit at PIR2.B5;
    const register unsigned short int C2IF = 6;
    sbit  C2IF_bit at PIR2.B6;
    const register unsigned short int OSFIF = 7;
    sbit  OSFIF_bit at PIR2.B7;

    // PIR3 bits
    const register unsigned short int CLC1IF = 0;
    sbit  CLC1IF_bit at PIR3.B0;
    const register unsigned short int CLC2IF = 1;
    sbit  CLC2IF_bit at PIR3.B1;
    const register unsigned short int CLC3IF = 2;
    sbit  CLC3IF_bit at PIR3.B2;
    const register unsigned short int ZCDIF = 4;
    sbit  ZCDIF_bit at PIR3.B4;
    const register unsigned short int COGIF = 5;
    sbit  COGIF_bit at PIR3.B5;

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
    const register unsigned short int CCPIE = 2;
    sbit  CCPIE_bit at PIE1.B2;

    // PIE2 bits
    const register unsigned short int CCP2IE = 0;
    sbit  CCP2IE_bit at PIE2.B0;
    const register unsigned short int TMR4IE = 1;
    sbit  TMR4IE_bit at PIE2.B1;
    const register unsigned short int TMR6IE = 2;
    sbit  TMR6IE_bit at PIE2.B2;
    const register unsigned short int BCL1IE = 3;
    sbit  BCL1IE_bit at PIE2.B3;
    const register unsigned short int C1IE = 5;
    sbit  C1IE_bit at PIE2.B5;
    const register unsigned short int C2IE = 6;
    sbit  C2IE_bit at PIE2.B6;
    const register unsigned short int OSFIE = 7;
    sbit  OSFIE_bit at PIE2.B7;

    // PIE3 bits
    const register unsigned short int CLC1IE = 0;
    sbit  CLC1IE_bit at PIE3.B0;
    const register unsigned short int CLC2IE = 1;
    sbit  CLC2IE_bit at PIE3.B1;
    const register unsigned short int CLC3IE = 2;
    sbit  CLC3IE_bit at PIE3.B2;
    const register unsigned short int ZCDIE = 4;
    sbit  ZCDIE_bit at PIE3.B4;
    const register unsigned short int COGIE = 5;
    sbit  COGIE_bit at PIE3.B5;

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

    // OSCCON bits
    const register unsigned short int SPLLEN = 7;
    sbit  SPLLEN_bit at OSCCON.B7;
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
    const register unsigned short int C1ZLF = 3;
    sbit  C1ZLF_bit at CM1CON0.B3;
    const register unsigned short int C1POL = 4;
    sbit  C1POL_bit at CM1CON0.B4;
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
    const register unsigned short int C1PCH0 = 3;
    sbit  C1PCH0_bit at CM1CON1.B3;
    const register unsigned short int C1PCH1 = 4;
    sbit  C1PCH1_bit at CM1CON1.B4;
    const register unsigned short int C1PCH2 = 5;
    sbit  C1PCH2_bit at CM1CON1.B5;

    // CM2CON0 bits
    const register unsigned short int C2SYNC = 0;
    sbit  C2SYNC_bit at CM2CON0.B0;
    const register unsigned short int C2HYS = 1;
    sbit  C2HYS_bit at CM2CON0.B1;
    const register unsigned short int C2SP = 2;
    sbit  C2SP_bit at CM2CON0.B2;
    const register unsigned short int C2ZLF = 3;
    sbit  C2ZLF_bit at CM2CON0.B3;
    const register unsigned short int C2POL = 4;
    sbit  C2POL_bit at CM2CON0.B4;
    const register unsigned short int C2OUT = 6;
    sbit  C2OUT_bit at CM2CON0.B6;
    const register unsigned short int C2ON = 7;
    sbit  C2ON_bit at CM2CON0.B7;

    // CM2CON1 bits
    const register unsigned short int C2INTN = 6;
    sbit  C2INTN_bit at CM2CON1.B6;
    const register unsigned short int C2INTP = 7;
    sbit  C2INTP_bit at CM2CON1.B7;
    const register unsigned short int C2NCH0 = 0;
    sbit  C2NCH0_bit at CM2CON1.B0;
    const register unsigned short int C2NCH1 = 1;
    sbit  C2NCH1_bit at CM2CON1.B1;
    const register unsigned short int C2NCH2 = 2;
    sbit  C2NCH2_bit at CM2CON1.B2;
    const register unsigned short int C2PCH0 = 3;
    sbit  C2PCH0_bit at CM2CON1.B3;
    const register unsigned short int C2PCH1 = 4;
    sbit  C2PCH1_bit at CM2CON1.B4;
    const register unsigned short int C2PCH2 = 5;
    sbit  C2PCH2_bit at CM2CON1.B5;

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

    // DAC1CON0 bits
    const register unsigned short int DAC1NSS = 0;
    sbit  DAC1NSS_bit at DAC1CON0.B0;
    const register unsigned short int DAC1OE2 = 4;
    sbit  DAC1OE2_bit at DAC1CON0.B4;
    const register unsigned short int DAC1OE1 = 5;
    sbit  DAC1OE1_bit at DAC1CON0.B5;
    const register unsigned short int DAC1EN = 7;
    sbit  DAC1EN_bit at DAC1CON0.B7;
    const register unsigned short int DAC1PSS0 = 2;
    sbit  DAC1PSS0_bit at DAC1CON0.B2;
    const register unsigned short int DAC1PSS1 = 3;
    sbit  DAC1PSS1_bit at DAC1CON0.B3;
    const register unsigned short int DACNSS = 0;
    sbit  DACNSS_bit at DAC1CON0.B0;
    const register unsigned short int DACOE0 = 4;
    sbit  DACOE0_bit at DAC1CON0.B4;
    const register unsigned short int DACOE1 = 5;
    sbit  DACOE1_bit at DAC1CON0.B5;
    const register unsigned short int DACEN = 7;
    sbit  DACEN_bit at DAC1CON0.B7;
    const register unsigned short int DACPSS0 = 2;
    sbit  DACPSS0_bit at DAC1CON0.B2;
    const register unsigned short int DACPSS1 = 3;
    sbit  DACPSS1_bit at DAC1CON0.B3;

    // DAC1CON1 bits
    const register unsigned short int DAC1R0 = 0;
    sbit  DAC1R0_bit at DAC1CON1.B0;
    const register unsigned short int DAC1R1 = 1;
    sbit  DAC1R1_bit at DAC1CON1.B1;
    const register unsigned short int DAC1R2 = 2;
    sbit  DAC1R2_bit at DAC1CON1.B2;
    const register unsigned short int DAC1R3 = 3;
    sbit  DAC1R3_bit at DAC1CON1.B3;
    const register unsigned short int DAC1R4 = 4;
    sbit  DAC1R4_bit at DAC1CON1.B4;
    const register unsigned short int DAC1R5 = 5;
    sbit  DAC1R5_bit at DAC1CON1.B5;
    const register unsigned short int DAC1R6 = 6;
    sbit  DAC1R6_bit at DAC1CON1.B6;
    const register unsigned short int DAC1R7 = 7;
    sbit  DAC1R7_bit at DAC1CON1.B7;
    const register unsigned short int DACR0 = 0;
    sbit  DACR0_bit at DAC1CON1.B0;
    const register unsigned short int DACR1 = 1;
    sbit  DACR1_bit at DAC1CON1.B1;
    const register unsigned short int DACR2 = 2;
    sbit  DACR2_bit at DAC1CON1.B2;
    const register unsigned short int DACR3 = 3;
    sbit  DACR3_bit at DAC1CON1.B3;
    const register unsigned short int DACR4 = 4;
    sbit  DACR4_bit at DAC1CON1.B4;
    const register unsigned short int DACR5 = 5;
    sbit  DACR5_bit at DAC1CON1.B5;
    const register unsigned short int DACR6 = 6;
    sbit  DACR6_bit at DAC1CON1.B6;
    const register unsigned short int DACR7 = 7;
    sbit  DACR7_bit at DAC1CON1.B7;

    // ZCD1CON bits
    const register unsigned short int ZCD1INTN = 0;
    sbit  ZCD1INTN_bit at ZCD1CON.B0;
    const register unsigned short int ZCD1INTP = 1;
    sbit  ZCD1INTP_bit at ZCD1CON.B1;
    const register unsigned short int ZCD1POL = 4;
    sbit  ZCD1POL_bit at ZCD1CON.B4;
    const register unsigned short int ZCD1OUT = 5;
    sbit  ZCD1OUT_bit at ZCD1CON.B5;
    const register unsigned short int ZCD1EN = 7;
    sbit  ZCD1EN_bit at ZCD1CON.B7;

    // ANSELA bits
    const register unsigned short int ANSA0 = 0;
    sbit  ANSA0_bit at ANSELA.B0;
    const register unsigned short int ANSA1 = 1;
    sbit  ANSA1_bit at ANSELA.B1;
    const register unsigned short int ANSA2 = 2;
    sbit  ANSA2_bit at ANSELA.B2;
    const register unsigned short int ANSA4 = 4;
    sbit  ANSA4_bit at ANSELA.B4;
    const register unsigned short int ANS5 = 5;
    sbit  ANS5_bit at ANSELA.B5;

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
    const register unsigned short int Reserved = 0;
    sbit  Reserved_bit at VREGCON.B0;
    const register unsigned short int VREGPM = 1;
    sbit  VREGPM_bit at VREGCON.B1;

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

    // BAUD1CON, BAUDCON, BAUDCON1, BAUDCTL, BAUDCTL1 bits
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

    // WPUC bits
    const register unsigned short int WPUC0 = 0;
    sbit  WPUC0_bit at WPUC.B0;
    const register unsigned short int WPUC1 = 1;
    sbit  WPUC1_bit at WPUC.B1;
    const register unsigned short int WPUC2 = 2;
    sbit  WPUC2_bit at WPUC.B2;
    const register unsigned short int WPUC3 = 3;
    sbit  WPUC3_bit at WPUC.B3;
    const register unsigned short int WPUC4 = 4;
    sbit  WPUC4_bit at WPUC.B4;
    const register unsigned short int WPUC5 = 5;
    sbit  WPUC5_bit at WPUC.B5;

    // SSP1BUF, SSPBUF bits
    const register unsigned short int SSP1BUF0 = 0;
    sbit  SSP1BUF0_bit at SSP1BUF.B0;
    const register unsigned short int SSP1BUF1 = 1;
    sbit  SSP1BUF1_bit at SSP1BUF.B1;
    const register unsigned short int SSP1BUF2 = 2;
    sbit  SSP1BUF2_bit at SSP1BUF.B2;
    const register unsigned short int SSP1BUF3 = 3;
    sbit  SSP1BUF3_bit at SSP1BUF.B3;
    const register unsigned short int SSP1BUF4 = 4;
    sbit  SSP1BUF4_bit at SSP1BUF.B4;
    const register unsigned short int SSP1BUF5 = 5;
    sbit  SSP1BUF5_bit at SSP1BUF.B5;
    const register unsigned short int SSP1BUF6 = 6;
    sbit  SSP1BUF6_bit at SSP1BUF.B6;
    const register unsigned short int SSP1BUF7 = 7;
    sbit  SSP1BUF7_bit at SSP1BUF.B7;
    const register unsigned short int BUF0 = 0;
    sbit  BUF0_bit at SSP1BUF.B0;
    const register unsigned short int BUF1 = 1;
    sbit  BUF1_bit at SSP1BUF.B1;
    const register unsigned short int BUF2 = 2;
    sbit  BUF2_bit at SSP1BUF.B2;
    const register unsigned short int BUF3 = 3;
    sbit  BUF3_bit at SSP1BUF.B3;
    const register unsigned short int BUF4 = 4;
    sbit  BUF4_bit at SSP1BUF.B4;
    const register unsigned short int BUF5 = 5;
    sbit  BUF5_bit at SSP1BUF.B5;
    const register unsigned short int BUF6 = 6;
    sbit  BUF6_bit at SSP1BUF.B6;
    const register unsigned short int BUF7 = 7;
    sbit  BUF7_bit at SSP1BUF.B7;

    // SSP1ADD, SSPADD bits
    const register unsigned short int SSP1ADD0 = 0;
    sbit  SSP1ADD0_bit at SSP1ADD.B0;
    const register unsigned short int SSP1ADD1 = 1;
    sbit  SSP1ADD1_bit at SSP1ADD.B1;
    const register unsigned short int SSP1ADD2 = 2;
    sbit  SSP1ADD2_bit at SSP1ADD.B2;
    const register unsigned short int SSP1ADD3 = 3;
    sbit  SSP1ADD3_bit at SSP1ADD.B3;
    const register unsigned short int SSP1ADD4 = 4;
    sbit  SSP1ADD4_bit at SSP1ADD.B4;
    const register unsigned short int SSP1ADD5 = 5;
    sbit  SSP1ADD5_bit at SSP1ADD.B5;
    const register unsigned short int SSP1ADD6 = 6;
    sbit  SSP1ADD6_bit at SSP1ADD.B6;
    const register unsigned short int SSP1ADD7 = 7;
    sbit  SSP1ADD7_bit at SSP1ADD.B7;
    const register unsigned short int ADD0 = 0;
    sbit  ADD0_bit at SSP1ADD.B0;
    const register unsigned short int ADD1 = 1;
    sbit  ADD1_bit at SSP1ADD.B1;
    const register unsigned short int ADD2 = 2;
    sbit  ADD2_bit at SSP1ADD.B2;
    const register unsigned short int ADD3 = 3;
    sbit  ADD3_bit at SSP1ADD.B3;
    const register unsigned short int ADD4 = 4;
    sbit  ADD4_bit at SSP1ADD.B4;
    const register unsigned short int ADD5 = 5;
    sbit  ADD5_bit at SSP1ADD.B5;
    const register unsigned short int ADD6 = 6;
    sbit  ADD6_bit at SSP1ADD.B6;
    const register unsigned short int ADD7 = 7;
    sbit  ADD7_bit at SSP1ADD.B7;

    // SSP1MSK, SSPMSK bits
    const register unsigned short int SSP1MSK0 = 0;
    sbit  SSP1MSK0_bit at SSP1MSK.B0;
    const register unsigned short int SSP1MSK1 = 1;
    sbit  SSP1MSK1_bit at SSP1MSK.B1;
    const register unsigned short int SSP1MSK2 = 2;
    sbit  SSP1MSK2_bit at SSP1MSK.B2;
    const register unsigned short int SSP1MSK3 = 3;
    sbit  SSP1MSK3_bit at SSP1MSK.B3;
    const register unsigned short int SSP1MSK4 = 4;
    sbit  SSP1MSK4_bit at SSP1MSK.B4;
    const register unsigned short int SSP1MSK5 = 5;
    sbit  SSP1MSK5_bit at SSP1MSK.B5;
    const register unsigned short int SSP1MSK6 = 6;
    sbit  SSP1MSK6_bit at SSP1MSK.B6;
    const register unsigned short int SSP1MSK7 = 7;
    sbit  SSP1MSK7_bit at SSP1MSK.B7;
    const register unsigned short int MSK0 = 0;
    sbit  MSK0_bit at SSP1MSK.B0;
    const register unsigned short int MSK1 = 1;
    sbit  MSK1_bit at SSP1MSK.B1;
    const register unsigned short int MSK2 = 2;
    sbit  MSK2_bit at SSP1MSK.B2;
    const register unsigned short int MSK3 = 3;
    sbit  MSK3_bit at SSP1MSK.B3;
    const register unsigned short int MSK4 = 4;
    sbit  MSK4_bit at SSP1MSK.B4;
    const register unsigned short int MSK5 = 5;
    sbit  MSK5_bit at SSP1MSK.B5;
    const register unsigned short int MSK6 = 6;
    sbit  MSK6_bit at SSP1MSK.B6;
    const register unsigned short int MSK7 = 7;
    sbit  MSK7_bit at SSP1MSK.B7;

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

    // SSP1CON, SSP1CON1, SSPCON, SSPCON1 bits
    const register unsigned short int CKP = 4;
    sbit  CKP_bit at SSP1CON.B4;
    const register unsigned short int SSPEN = 5;
    sbit  SSPEN_bit at SSP1CON.B5;
    const register unsigned short int SSPOV = 6;
    sbit  SSPOV_bit at SSP1CON.B6;
    const register unsigned short int WCOL = 7;
    sbit  WCOL_bit at SSP1CON.B7;
    const register unsigned short int SSPM0 = 0;
    sbit  SSPM0_bit at SSP1CON.B0;
    const register unsigned short int SSPM1 = 1;
    sbit  SSPM1_bit at SSP1CON.B1;
    const register unsigned short int SSPM2 = 2;
    sbit  SSPM2_bit at SSP1CON.B2;
    const register unsigned short int SSPM3 = 3;
    sbit  SSPM3_bit at SSP1CON.B3;

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

    // ODCONA bits
    const register unsigned short int ODA0 = 0;
    sbit  ODA0_bit at ODCONA.B0;
    const register unsigned short int ODA1 = 1;
    sbit  ODA1_bit at ODCONA.B1;
    const register unsigned short int ODA2 = 2;
    sbit  ODA2_bit at ODCONA.B2;
    const register unsigned short int ODA4 = 4;
    sbit  ODA4_bit at ODCONA.B4;
    const register unsigned short int ODA5 = 5;
    sbit  ODA5_bit at ODCONA.B5;

    // ODCONC bits
    const register unsigned short int ODC0 = 0;
    sbit  ODC0_bit at ODCONC.B0;
    const register unsigned short int ODC1 = 1;
    sbit  ODC1_bit at ODCONC.B1;
    const register unsigned short int ODC2 = 2;
    sbit  ODC2_bit at ODCONC.B2;
    const register unsigned short int ODC3 = 3;
    sbit  ODC3_bit at ODCONC.B3;
    const register unsigned short int ODC4 = 4;
    sbit  ODC4_bit at ODCONC.B4;
    const register unsigned short int ODC5 = 5;
    sbit  ODC5_bit at ODCONC.B5;

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
    const register unsigned short int CCP1Y = 4;
    sbit  CCP1Y_bit at CCP1CON.B4;
    const register unsigned short int CCP1X = 5;
    sbit  CCP1X_bit at CCP1CON.B5;

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
    const register unsigned short int CCP2Y = 4;
    sbit  CCP2Y_bit at CCP2CON.B4;
    const register unsigned short int CCP2X = 5;
    sbit  CCP2X_bit at CCP2CON.B5;

    // CCPTMRS bits
    const register unsigned short int C1TSEL0 = 0;
    sbit  C1TSEL0_bit at CCPTMRS.B0;
    const register unsigned short int C1TSEL1 = 1;
    sbit  C1TSEL1_bit at CCPTMRS.B1;
    const register unsigned short int C2TSEL0 = 2;
    sbit  C2TSEL0_bit at CCPTMRS.B2;
    const register unsigned short int C2TSEL1 = 3;
    sbit  C2TSEL1_bit at CCPTMRS.B3;
    const register unsigned short int P3TSEL0 = 4;
    sbit  P3TSEL0_bit at CCPTMRS.B4;
    const register unsigned short int P3TSEL1 = 5;
    sbit  P3TSEL1_bit at CCPTMRS.B5;
    const register unsigned short int P4TSEL0 = 6;
    sbit  P4TSEL0_bit at CCPTMRS.B6;
    const register unsigned short int P4TSEL1 = 7;
    sbit  P4TSEL1_bit at CCPTMRS.B7;

    // SLRCONA bits
    const register unsigned short int SLRA0 = 0;
    sbit  SLRA0_bit at SLRCONA.B0;
    const register unsigned short int SLRA1 = 1;
    sbit  SLRA1_bit at SLRCONA.B1;
    const register unsigned short int SLRA2 = 2;
    sbit  SLRA2_bit at SLRCONA.B2;
    const register unsigned short int SLRA4 = 4;
    sbit  SLRA4_bit at SLRCONA.B4;
    const register unsigned short int SLRA5 = 5;
    sbit  SLRA5_bit at SLRCONA.B5;

    // SLRCONC bits
    const register unsigned short int SLRC0 = 0;
    sbit  SLRC0_bit at SLRCONC.B0;
    const register unsigned short int SLRC1 = 1;
    sbit  SLRC1_bit at SLRCONC.B1;
    const register unsigned short int SLRC2 = 2;
    sbit  SLRC2_bit at SLRCONC.B2;
    const register unsigned short int SLRC3 = 3;
    sbit  SLRC3_bit at SLRCONC.B3;
    const register unsigned short int SLRC4 = 4;
    sbit  SLRC4_bit at SLRCONC.B4;
    const register unsigned short int SLRC5 = 5;
    sbit  SLRC5_bit at SLRCONC.B5;

    // INLVLA bits
    const register unsigned short int INLVLA0 = 0;
    sbit  INLVLA0_bit at INLVLA.B0;
    const register unsigned short int INLVLA1 = 1;
    sbit  INLVLA1_bit at INLVLA.B1;
    const register unsigned short int INLVLA2 = 2;
    sbit  INLVLA2_bit at INLVLA.B2;
    const register unsigned short int INLVLA3 = 3;
    sbit  INLVLA3_bit at INLVLA.B3;
    const register unsigned short int INLVLA4 = 4;
    sbit  INLVLA4_bit at INLVLA.B4;
    const register unsigned short int INLVLA5 = 5;
    sbit  INLVLA5_bit at INLVLA.B5;

    // INLVLC bits
    const register unsigned short int INLVLC0 = 0;
    sbit  INLVLC0_bit at INLVLC.B0;
    const register unsigned short int INLVLC1 = 1;
    sbit  INLVLC1_bit at INLVLC.B1;
    const register unsigned short int INLVLC2 = 2;
    sbit  INLVLC2_bit at INLVLC.B2;
    const register unsigned short int INLVLC3 = 3;
    sbit  INLVLC3_bit at INLVLC.B3;
    const register unsigned short int INLVLC4 = 4;
    sbit  INLVLC4_bit at INLVLC.B4;
    const register unsigned short int INLVLC5 = 5;
    sbit  INLVLC5_bit at INLVLC.B5;

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

    // IOCCP bits
    const register unsigned short int IOCCP0 = 0;
    sbit  IOCCP0_bit at IOCCP.B0;
    const register unsigned short int IOCCP1 = 1;
    sbit  IOCCP1_bit at IOCCP.B1;
    const register unsigned short int IOCCP2 = 2;
    sbit  IOCCP2_bit at IOCCP.B2;
    const register unsigned short int IOCCP3 = 3;
    sbit  IOCCP3_bit at IOCCP.B3;
    const register unsigned short int IOCCP4 = 4;
    sbit  IOCCP4_bit at IOCCP.B4;
    const register unsigned short int IOCCP5 = 5;
    sbit  IOCCP5_bit at IOCCP.B5;

    // IOCCN bits
    const register unsigned short int IOCCN0 = 0;
    sbit  IOCCN0_bit at IOCCN.B0;
    const register unsigned short int IOCCN1 = 1;
    sbit  IOCCN1_bit at IOCCN.B1;
    const register unsigned short int IOCCN2 = 2;
    sbit  IOCCN2_bit at IOCCN.B2;
    const register unsigned short int IOCCN3 = 3;
    sbit  IOCCN3_bit at IOCCN.B3;
    const register unsigned short int IOCCN4 = 4;
    sbit  IOCCN4_bit at IOCCN.B4;
    const register unsigned short int IOCCN5 = 5;
    sbit  IOCCN5_bit at IOCCN.B5;

    // IOCCF bits
    const register unsigned short int IOCCF0 = 0;
    sbit  IOCCF0_bit at IOCCF.B0;
    const register unsigned short int IOCCF1 = 1;
    sbit  IOCCF1_bit at IOCCF.B1;
    const register unsigned short int IOCCF2 = 2;
    sbit  IOCCF2_bit at IOCCF.B2;
    const register unsigned short int IOCCF3 = 3;
    sbit  IOCCF3_bit at IOCCF.B3;
    const register unsigned short int IOCCF4 = 4;
    sbit  IOCCF4_bit at IOCCF.B4;
    const register unsigned short int IOCCF5 = 5;
    sbit  IOCCF5_bit at IOCCF.B5;

    // T4CON bits
    const register unsigned short int TMR4ON = 2;
    sbit  TMR4ON_bit at T4CON.B2;
    const register unsigned short int T4CKPS0 = 0;
    sbit  T4CKPS0_bit at T4CON.B0;
    const register unsigned short int T4CKPS1 = 1;
    sbit  T4CKPS1_bit at T4CON.B1;
    const register unsigned short int T4OUTPS0 = 3;
    sbit  T4OUTPS0_bit at T4CON.B3;
    const register unsigned short int T4OUTPS1 = 4;
    sbit  T4OUTPS1_bit at T4CON.B4;
    const register unsigned short int T4OUTPS2 = 5;
    sbit  T4OUTPS2_bit at T4CON.B5;
    const register unsigned short int T4OUTPS3 = 6;
    sbit  T4OUTPS3_bit at T4CON.B6;

    // T6CON bits
    const register unsigned short int TMR6ON = 2;
    sbit  TMR6ON_bit at T6CON.B2;
    const register unsigned short int T6CKPS0 = 0;
    sbit  T6CKPS0_bit at T6CON.B0;
    const register unsigned short int T6CKPS1 = 1;
    sbit  T6CKPS1_bit at T6CON.B1;
    const register unsigned short int T6OUTPS0 = 3;
    sbit  T6OUTPS0_bit at T6CON.B3;
    const register unsigned short int T6OUTPS1 = 4;
    sbit  T6OUTPS1_bit at T6CON.B4;
    const register unsigned short int T6OUTPS2 = 5;
    sbit  T6OUTPS2_bit at T6CON.B5;
    const register unsigned short int T6OUTPS3 = 6;
    sbit  T6OUTPS3_bit at T6CON.B6;

    // OPA1CON bits
    const register unsigned short int OPA1UG = 4;
    sbit  OPA1UG_bit at OPA1CON.B4;
    const register unsigned short int OPA1SP = 6;
    sbit  OPA1SP_bit at OPA1CON.B6;
    const register unsigned short int OPA1EN = 7;
    sbit  OPA1EN_bit at OPA1CON.B7;
    const register unsigned short int OPA1PCH0 = 0;
    sbit  OPA1PCH0_bit at OPA1CON.B0;
    const register unsigned short int OPA1PCH1 = 1;
    sbit  OPA1PCH1_bit at OPA1CON.B1;

    // OPA2CON bits
    const register unsigned short int OPA2UG = 4;
    sbit  OPA2UG_bit at OPA2CON.B4;
    const register unsigned short int OPA2SP = 6;
    sbit  OPA2SP_bit at OPA2CON.B6;
    const register unsigned short int OPA2EN = 7;
    sbit  OPA2EN_bit at OPA2CON.B7;
    const register unsigned short int OPA2PCH0 = 0;
    sbit  OPA2PCH0_bit at OPA2CON.B0;
    const register unsigned short int OPA2PCH1 = 1;
    sbit  OPA2PCH1_bit at OPA2CON.B1;

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
    const register unsigned short int PWM4EN = 7;
    sbit  PWM4EN_bit at PWM4CON.B7;

    // COG1PHR bits
    const register unsigned short int G1PHR0 = 0;
    sbit  G1PHR0_bit at COG1PHR.B0;
    const register unsigned short int G1PHR1 = 1;
    sbit  G1PHR1_bit at COG1PHR.B1;
    const register unsigned short int G1PHR2 = 2;
    sbit  G1PHR2_bit at COG1PHR.B2;
    const register unsigned short int G1PHR3 = 3;
    sbit  G1PHR3_bit at COG1PHR.B3;
    const register unsigned short int G1PHR4 = 4;
    sbit  G1PHR4_bit at COG1PHR.B4;
    const register unsigned short int G1PHR5 = 5;
    sbit  G1PHR5_bit at COG1PHR.B5;

    // COG1PHF bits
    const register unsigned short int G1PHF0 = 0;
    sbit  G1PHF0_bit at COG1PHF.B0;
    const register unsigned short int G1PHF1 = 1;
    sbit  G1PHF1_bit at COG1PHF.B1;
    const register unsigned short int G1PHF2 = 2;
    sbit  G1PHF2_bit at COG1PHF.B2;
    const register unsigned short int G1PHF3 = 3;
    sbit  G1PHF3_bit at COG1PHF.B3;
    const register unsigned short int G1PHF4 = 4;
    sbit  G1PHF4_bit at COG1PHF.B4;
    const register unsigned short int G1PHF5 = 5;
    sbit  G1PHF5_bit at COG1PHF.B5;

    // COG1BLKR bits
    const register unsigned short int G1BLKR0 = 0;
    sbit  G1BLKR0_bit at COG1BLKR.B0;
    const register unsigned short int G1BLKR1 = 1;
    sbit  G1BLKR1_bit at COG1BLKR.B1;
    const register unsigned short int G1BLKR2 = 2;
    sbit  G1BLKR2_bit at COG1BLKR.B2;
    const register unsigned short int G1BLKR3 = 3;
    sbit  G1BLKR3_bit at COG1BLKR.B3;
    const register unsigned short int G1BLKR4 = 4;
    sbit  G1BLKR4_bit at COG1BLKR.B4;
    const register unsigned short int G1BLKR5 = 5;
    sbit  G1BLKR5_bit at COG1BLKR.B5;

    // COG1BLKF bits
    const register unsigned short int G1BLKF0 = 0;
    sbit  G1BLKF0_bit at COG1BLKF.B0;
    const register unsigned short int G1BLKF1 = 1;
    sbit  G1BLKF1_bit at COG1BLKF.B1;
    const register unsigned short int G1BLKF2 = 2;
    sbit  G1BLKF2_bit at COG1BLKF.B2;
    const register unsigned short int G1BLKF3 = 3;
    sbit  G1BLKF3_bit at COG1BLKF.B3;
    const register unsigned short int G1BLKF4 = 4;
    sbit  G1BLKF4_bit at COG1BLKF.B4;
    const register unsigned short int G1BLKF5 = 5;
    sbit  G1BLKF5_bit at COG1BLKF.B5;

    // COG1DBR bits
    const register unsigned short int G1DBR0 = 0;
    sbit  G1DBR0_bit at COG1DBR.B0;
    const register unsigned short int G1DBR1 = 1;
    sbit  G1DBR1_bit at COG1DBR.B1;
    const register unsigned short int G1DBR2 = 2;
    sbit  G1DBR2_bit at COG1DBR.B2;
    const register unsigned short int G1DBR3 = 3;
    sbit  G1DBR3_bit at COG1DBR.B3;
    const register unsigned short int G1DBR4 = 4;
    sbit  G1DBR4_bit at COG1DBR.B4;
    const register unsigned short int G1DBR5 = 5;
    sbit  G1DBR5_bit at COG1DBR.B5;

    // COG1DBF bits
    const register unsigned short int G1DBF0 = 0;
    sbit  G1DBF0_bit at COG1DBF.B0;
    const register unsigned short int G1DBF1 = 1;
    sbit  G1DBF1_bit at COG1DBF.B1;
    const register unsigned short int G1DBF2 = 2;
    sbit  G1DBF2_bit at COG1DBF.B2;
    const register unsigned short int G1DBF3 = 3;
    sbit  G1DBF3_bit at COG1DBF.B3;
    const register unsigned short int G1DBF4 = 4;
    sbit  G1DBF4_bit at COG1DBF.B4;
    const register unsigned short int G1DBF5 = 5;
    sbit  G1DBF5_bit at COG1DBF.B5;

    // COG1CON0 bits
    const register unsigned short int G1LD = 6;
    sbit  G1LD_bit at COG1CON0.B6;
    const register unsigned short int G1EN = 7;
    sbit  G1EN_bit at COG1CON0.B7;
    const register unsigned short int G1MD0 = 0;
    sbit  G1MD0_bit at COG1CON0.B0;
    const register unsigned short int G1MD1 = 1;
    sbit  G1MD1_bit at COG1CON0.B1;
    const register unsigned short int G1MD2 = 2;
    sbit  G1MD2_bit at COG1CON0.B2;
    const register unsigned short int G1CS0 = 3;
    sbit  G1CS0_bit at COG1CON0.B3;
    const register unsigned short int G1CS1 = 4;
    sbit  G1CS1_bit at COG1CON0.B4;

    // COG1CON1 bits
    const register unsigned short int G1POLA = 0;
    sbit  G1POLA_bit at COG1CON1.B0;
    const register unsigned short int G1POLB = 1;
    sbit  G1POLB_bit at COG1CON1.B1;
    const register unsigned short int G1POLC = 2;
    sbit  G1POLC_bit at COG1CON1.B2;
    const register unsigned short int G1POLD = 3;
    sbit  G1POLD_bit at COG1CON1.B3;
    const register unsigned short int G1FDBS = 6;
    sbit  G1FDBS_bit at COG1CON1.B6;
    const register unsigned short int G1RDBS = 7;
    sbit  G1RDBS_bit at COG1CON1.B7;

    // COG1RIS bits
    const register unsigned short int G1RIS0 = 0;
    sbit  G1RIS0_bit at COG1RIS.B0;
    const register unsigned short int G1RIS1 = 1;
    sbit  G1RIS1_bit at COG1RIS.B1;
    const register unsigned short int G1RIS2 = 2;
    sbit  G1RIS2_bit at COG1RIS.B2;
    const register unsigned short int G1RIS3 = 3;
    sbit  G1RIS3_bit at COG1RIS.B3;
    const register unsigned short int G1RIS4 = 4;
    sbit  G1RIS4_bit at COG1RIS.B4;
    const register unsigned short int G1RIS5 = 5;
    sbit  G1RIS5_bit at COG1RIS.B5;
    const register unsigned short int G1RIS6 = 6;
    sbit  G1RIS6_bit at COG1RIS.B6;

    // COG1RSIM bits
    const register unsigned short int G1RSIM0 = 0;
    sbit  G1RSIM0_bit at COG1RSIM.B0;
    const register unsigned short int G1RSIM1 = 1;
    sbit  G1RSIM1_bit at COG1RSIM.B1;
    const register unsigned short int G1RSIM2 = 2;
    sbit  G1RSIM2_bit at COG1RSIM.B2;
    const register unsigned short int G1RSIM3 = 3;
    sbit  G1RSIM3_bit at COG1RSIM.B3;
    const register unsigned short int G1RSIM4 = 4;
    sbit  G1RSIM4_bit at COG1RSIM.B4;
    const register unsigned short int G1RSIM5 = 5;
    sbit  G1RSIM5_bit at COG1RSIM.B5;
    const register unsigned short int G1RSIM6 = 6;
    sbit  G1RSIM6_bit at COG1RSIM.B6;

    // COG1FIS bits
    const register unsigned short int G1FIS0 = 0;
    sbit  G1FIS0_bit at COG1FIS.B0;
    const register unsigned short int G1FIS1 = 1;
    sbit  G1FIS1_bit at COG1FIS.B1;
    const register unsigned short int G1FIS2 = 2;
    sbit  G1FIS2_bit at COG1FIS.B2;
    const register unsigned short int G1FIS3 = 3;
    sbit  G1FIS3_bit at COG1FIS.B3;
    const register unsigned short int G1FIS4 = 4;
    sbit  G1FIS4_bit at COG1FIS.B4;
    const register unsigned short int G1FIS5 = 5;
    sbit  G1FIS5_bit at COG1FIS.B5;
    const register unsigned short int G1FIS6 = 6;
    sbit  G1FIS6_bit at COG1FIS.B6;

    // COG1FSIM bits
    const register unsigned short int G1FSIM0 = 0;
    sbit  G1FSIM0_bit at COG1FSIM.B0;
    const register unsigned short int G1FSIM1 = 1;
    sbit  G1FSIM1_bit at COG1FSIM.B1;
    const register unsigned short int G1FSIM2 = 2;
    sbit  G1FSIM2_bit at COG1FSIM.B2;
    const register unsigned short int G1FSIM3 = 3;
    sbit  G1FSIM3_bit at COG1FSIM.B3;
    const register unsigned short int G1FSIM4 = 4;
    sbit  G1FSIM4_bit at COG1FSIM.B4;
    const register unsigned short int G1FSIM5 = 5;
    sbit  G1FSIM5_bit at COG1FSIM.B5;
    const register unsigned short int G1FSIM6 = 6;
    sbit  G1FSIM6_bit at COG1FSIM.B6;

    // COG1ASD0 bits
    const register unsigned short int G1ARSEN = 6;
    sbit  G1ARSEN_bit at COG1ASD0.B6;
    const register unsigned short int G1ASE = 7;
    sbit  G1ASE_bit at COG1ASD0.B7;
    const register unsigned short int G1ASDAC0 = 2;
    sbit  G1ASDAC0_bit at COG1ASD0.B2;
    const register unsigned short int G1ASDAC1 = 3;
    sbit  G1ASDAC1_bit at COG1ASD0.B3;
    const register unsigned short int G1ASDBD0 = 4;
    sbit  G1ASDBD0_bit at COG1ASD0.B4;
    const register unsigned short int G1ASDBD1 = 5;
    sbit  G1ASDBD1_bit at COG1ASD0.B5;

    // COG1ASD1 bits
    const register unsigned short int G1AS0E = 0;
    sbit  G1AS0E_bit at COG1ASD1.B0;
    const register unsigned short int G1AS1E = 1;
    sbit  G1AS1E_bit at COG1ASD1.B1;
    const register unsigned short int G1AS2E = 2;
    sbit  G1AS2E_bit at COG1ASD1.B2;
    const register unsigned short int G1AS3E = 3;
    sbit  G1AS3E_bit at COG1ASD1.B3;

    // COG1STR bits
    const register unsigned short int G1STRA = 0;
    sbit  G1STRA_bit at COG1STR.B0;
    const register unsigned short int G1STRB = 1;
    sbit  G1STRB_bit at COG1STR.B1;
    const register unsigned short int G1STRC = 2;
    sbit  G1STRC_bit at COG1STR.B2;
    const register unsigned short int G1STRD = 3;
    sbit  G1STRD_bit at COG1STR.B3;
    const register unsigned short int G1SDATA = 4;
    sbit  G1SDATA_bit at COG1STR.B4;
    const register unsigned short int G1SDATB = 5;
    sbit  G1SDATB_bit at COG1STR.B5;
    const register unsigned short int G1SDATC = 6;
    sbit  G1SDATC_bit at COG1STR.B6;
    const register unsigned short int G1SDATD = 7;
    sbit  G1SDATD_bit at COG1STR.B7;

    // PPSLOCK bits
    const register unsigned short int PPSLOCKED = 0;
    sbit  PPSLOCKED_bit at PPSLOCK.B0;

    // CLCDATA bits
    const register unsigned short int MCLC1OUT = 0;
    sbit  MCLC1OUT_bit at CLCDATA.B0;
    const register unsigned short int MCLC2OUT = 1;
    sbit  MCLC2OUT_bit at CLCDATA.B1;
    const register unsigned short int MCLC3OUT = 2;
    sbit  MCLC3OUT_bit at CLCDATA.B2;

    // CLC1CON bits
    const register unsigned short int LC1INTN = 3;
    sbit  LC1INTN_bit at CLC1CON.B3;
    const register unsigned short int LC1INTP = 4;
    sbit  LC1INTP_bit at CLC1CON.B4;
    const register unsigned short int LC1OUT = 5;
    sbit  LC1OUT_bit at CLC1CON.B5;
    const register unsigned short int LC1EN = 7;
    sbit  LC1EN_bit at CLC1CON.B7;
    const register unsigned short int LC1MODE0 = 0;
    sbit  LC1MODE0_bit at CLC1CON.B0;
    const register unsigned short int LC1MODE1 = 1;
    sbit  LC1MODE1_bit at CLC1CON.B1;
    const register unsigned short int LC1MODE2 = 2;
    sbit  LC1MODE2_bit at CLC1CON.B2;
    const register unsigned short int INTN = 3;
    sbit  INTN_bit at CLC1CON.B3;
    const register unsigned short int INTP = 4;
    sbit  INTP_bit at CLC1CON.B4;
    const register unsigned short int OUT_ = 5;
    sbit  OUT__bit at CLC1CON.B5;
    const register unsigned short int EN = 7;
    sbit  EN_bit at CLC1CON.B7;
    const register unsigned short int MODE0 = 0;
    sbit  MODE0_bit at CLC1CON.B0;
    const register unsigned short int MODE1 = 1;
    sbit  MODE1_bit at CLC1CON.B1;
    const register unsigned short int MODE2 = 2;
    sbit  MODE2_bit at CLC1CON.B2;

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
    const register unsigned short int LC1D1S3 = 3;
    sbit  LC1D1S3_bit at CLC1SEL0.B3;
    const register unsigned short int LC1D1S4 = 4;
    sbit  LC1D1S4_bit at CLC1SEL0.B4;
    const register unsigned short int D1S0 = 0;
    sbit  D1S0_bit at CLC1SEL0.B0;
    const register unsigned short int D1S1 = 1;
    sbit  D1S1_bit at CLC1SEL0.B1;
    const register unsigned short int D1S2 = 2;
    sbit  D1S2_bit at CLC1SEL0.B2;
    const register unsigned short int D1S3 = 3;
    sbit  D1S3_bit at CLC1SEL0.B3;
    const register unsigned short int D1S4 = 4;
    sbit  D1S4_bit at CLC1SEL0.B4;

    // CLC1SEL1 bits
    const register unsigned short int LC1D2S0 = 0;
    sbit  LC1D2S0_bit at CLC1SEL1.B0;
    const register unsigned short int LC1D2S1 = 1;
    sbit  LC1D2S1_bit at CLC1SEL1.B1;
    const register unsigned short int LC1D2S2 = 2;
    sbit  LC1D2S2_bit at CLC1SEL1.B2;
    const register unsigned short int LC1D2S3 = 3;
    sbit  LC1D2S3_bit at CLC1SEL1.B3;
    const register unsigned short int LC1D2S4 = 4;
    sbit  LC1D2S4_bit at CLC1SEL1.B4;
    const register unsigned short int D2S0 = 0;
    sbit  D2S0_bit at CLC1SEL1.B0;
    const register unsigned short int D2S1 = 1;
    sbit  D2S1_bit at CLC1SEL1.B1;
    const register unsigned short int D2S2 = 2;
    sbit  D2S2_bit at CLC1SEL1.B2;
    const register unsigned short int D2S3 = 3;
    sbit  D2S3_bit at CLC1SEL1.B3;
    const register unsigned short int D2S4 = 4;
    sbit  D2S4_bit at CLC1SEL1.B4;

    // CLC1SEL2 bits
    const register unsigned short int LC1D3S0 = 0;
    sbit  LC1D3S0_bit at CLC1SEL2.B0;
    const register unsigned short int LC1D3S1 = 1;
    sbit  LC1D3S1_bit at CLC1SEL2.B1;
    const register unsigned short int LC1D3S2 = 2;
    sbit  LC1D3S2_bit at CLC1SEL2.B2;
    const register unsigned short int LC1D3S3 = 3;
    sbit  LC1D3S3_bit at CLC1SEL2.B3;
    const register unsigned short int LC1D3S4 = 4;
    sbit  LC1D3S4_bit at CLC1SEL2.B4;
    const register unsigned short int D3S0 = 0;
    sbit  D3S0_bit at CLC1SEL2.B0;
    const register unsigned short int D3S1 = 1;
    sbit  D3S1_bit at CLC1SEL2.B1;
    const register unsigned short int D3S2 = 2;
    sbit  D3S2_bit at CLC1SEL2.B2;
    const register unsigned short int D3S3 = 3;
    sbit  D3S3_bit at CLC1SEL2.B3;
    const register unsigned short int D3S4 = 4;
    sbit  D3S4_bit at CLC1SEL2.B4;

    // CLC1SEL3 bits
    const register unsigned short int LC1D4S0 = 0;
    sbit  LC1D4S0_bit at CLC1SEL3.B0;
    const register unsigned short int LC1D4S1 = 1;
    sbit  LC1D4S1_bit at CLC1SEL3.B1;
    const register unsigned short int LC1D4S2 = 2;
    sbit  LC1D4S2_bit at CLC1SEL3.B2;
    const register unsigned short int LC1D4S3 = 3;
    sbit  LC1D4S3_bit at CLC1SEL3.B3;
    const register unsigned short int LC1D4S4 = 4;
    sbit  LC1D4S4_bit at CLC1SEL3.B4;
    const register unsigned short int D4S0 = 0;
    sbit  D4S0_bit at CLC1SEL3.B0;
    const register unsigned short int D4S1 = 1;
    sbit  D4S1_bit at CLC1SEL3.B1;
    const register unsigned short int D4S2 = 2;
    sbit  D4S2_bit at CLC1SEL3.B2;
    const register unsigned short int D4S3 = 3;
    sbit  D4S3_bit at CLC1SEL3.B3;
    const register unsigned short int D4S4 = 4;
    sbit  D4S4_bit at CLC1SEL3.B4;

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
    const register unsigned short int LC2INTN = 3;
    sbit  LC2INTN_bit at CLC2CON.B3;
    const register unsigned short int LC2INTP = 4;
    sbit  LC2INTP_bit at CLC2CON.B4;
    const register unsigned short int LC2OUT = 5;
    sbit  LC2OUT_bit at CLC2CON.B5;
    const register unsigned short int LC2EN = 7;
    sbit  LC2EN_bit at CLC2CON.B7;
    const register unsigned short int LC2MODE0 = 0;
    sbit  LC2MODE0_bit at CLC2CON.B0;
    const register unsigned short int LC2MODE1 = 1;
    sbit  LC2MODE1_bit at CLC2CON.B1;
    const register unsigned short int LC2MODE2 = 2;
    sbit  LC2MODE2_bit at CLC2CON.B2;
    sbit  INTN_CLC2CON_bit at CLC2CON.B3;
    sbit  INTP_CLC2CON_bit at CLC2CON.B4;
    sbit  OUT__CLC2CON_bit at CLC2CON.B5;
    sbit  EN_CLC2CON_bit at CLC2CON.B7;
    sbit  MODE0_CLC2CON_bit at CLC2CON.B0;
    sbit  MODE1_CLC2CON_bit at CLC2CON.B1;
    sbit  MODE2_CLC2CON_bit at CLC2CON.B2;

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
    const register unsigned short int LC2D1S3 = 3;
    sbit  LC2D1S3_bit at CLC2SEL0.B3;
    const register unsigned short int LC2D1S4 = 4;
    sbit  LC2D1S4_bit at CLC2SEL0.B4;
    sbit  D1S0_CLC2SEL0_bit at CLC2SEL0.B0;
    sbit  D1S1_CLC2SEL0_bit at CLC2SEL0.B1;
    sbit  D1S2_CLC2SEL0_bit at CLC2SEL0.B2;
    sbit  D1S3_CLC2SEL0_bit at CLC2SEL0.B3;
    sbit  D1S4_CLC2SEL0_bit at CLC2SEL0.B4;

    // CLC2SEL1 bits
    const register unsigned short int LC2D2S0 = 0;
    sbit  LC2D2S0_bit at CLC2SEL1.B0;
    const register unsigned short int LC2D2S1 = 1;
    sbit  LC2D2S1_bit at CLC2SEL1.B1;
    const register unsigned short int LC2D2S2 = 2;
    sbit  LC2D2S2_bit at CLC2SEL1.B2;
    const register unsigned short int LC2D2S3 = 3;
    sbit  LC2D2S3_bit at CLC2SEL1.B3;
    const register unsigned short int LC2D2S4 = 4;
    sbit  LC2D2S4_bit at CLC2SEL1.B4;
    sbit  D2S0_CLC2SEL1_bit at CLC2SEL1.B0;
    sbit  D2S1_CLC2SEL1_bit at CLC2SEL1.B1;
    sbit  D2S2_CLC2SEL1_bit at CLC2SEL1.B2;
    sbit  D2S3_CLC2SEL1_bit at CLC2SEL1.B3;
    sbit  D2S4_CLC2SEL1_bit at CLC2SEL1.B4;

    // CLC2SEL2 bits
    const register unsigned short int LC2D3S0 = 0;
    sbit  LC2D3S0_bit at CLC2SEL2.B0;
    const register unsigned short int LC2D3S1 = 1;
    sbit  LC2D3S1_bit at CLC2SEL2.B1;
    const register unsigned short int LC2D3S2 = 2;
    sbit  LC2D3S2_bit at CLC2SEL2.B2;
    const register unsigned short int LC2D3S3 = 3;
    sbit  LC2D3S3_bit at CLC2SEL2.B3;
    const register unsigned short int LC2D3S4 = 4;
    sbit  LC2D3S4_bit at CLC2SEL2.B4;
    sbit  D3S0_CLC2SEL2_bit at CLC2SEL2.B0;
    sbit  D3S1_CLC2SEL2_bit at CLC2SEL2.B1;
    sbit  D3S2_CLC2SEL2_bit at CLC2SEL2.B2;
    sbit  D3S3_CLC2SEL2_bit at CLC2SEL2.B3;
    sbit  D3S4_CLC2SEL2_bit at CLC2SEL2.B4;

    // CLC2SEL3 bits
    const register unsigned short int LC2D4S0 = 0;
    sbit  LC2D4S0_bit at CLC2SEL3.B0;
    const register unsigned short int LC2D4S1 = 1;
    sbit  LC2D4S1_bit at CLC2SEL3.B1;
    const register unsigned short int LC2D4S2 = 2;
    sbit  LC2D4S2_bit at CLC2SEL3.B2;
    const register unsigned short int LC2D4S3 = 3;
    sbit  LC2D4S3_bit at CLC2SEL3.B3;
    const register unsigned short int LC2D4S4 = 4;
    sbit  LC2D4S4_bit at CLC2SEL3.B4;
    sbit  D4S0_CLC2SEL3_bit at CLC2SEL3.B0;
    sbit  D4S1_CLC2SEL3_bit at CLC2SEL3.B1;
    sbit  D4S2_CLC2SEL3_bit at CLC2SEL3.B2;
    sbit  D4S3_CLC2SEL3_bit at CLC2SEL3.B3;
    sbit  D4S4_CLC2SEL3_bit at CLC2SEL3.B4;

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

    // CLC3CON bits
    const register unsigned short int LC3INTN = 3;
    sbit  LC3INTN_bit at CLC3CON.B3;
    const register unsigned short int LC3INTP = 4;
    sbit  LC3INTP_bit at CLC3CON.B4;
    const register unsigned short int LC3OUT = 5;
    sbit  LC3OUT_bit at CLC3CON.B5;
    const register unsigned short int LC3EN = 7;
    sbit  LC3EN_bit at CLC3CON.B7;
    const register unsigned short int LC3MODE0 = 0;
    sbit  LC3MODE0_bit at CLC3CON.B0;
    const register unsigned short int LC3MODE1 = 1;
    sbit  LC3MODE1_bit at CLC3CON.B1;
    const register unsigned short int LC3MODE2 = 2;
    sbit  LC3MODE2_bit at CLC3CON.B2;
    sbit  INTN_CLC3CON_bit at CLC3CON.B3;
    sbit  INTP_CLC3CON_bit at CLC3CON.B4;
    sbit  OUT__CLC3CON_bit at CLC3CON.B5;
    sbit  EN_CLC3CON_bit at CLC3CON.B7;
    sbit  MODE0_CLC3CON_bit at CLC3CON.B0;
    sbit  MODE1_CLC3CON_bit at CLC3CON.B1;
    sbit  MODE2_CLC3CON_bit at CLC3CON.B2;

    // CLC3POL bits
    const register unsigned short int LC3G1POL = 0;
    sbit  LC3G1POL_bit at CLC3POL.B0;
    const register unsigned short int LC3G2POL = 1;
    sbit  LC3G2POL_bit at CLC3POL.B1;
    const register unsigned short int LC3G3POL = 2;
    sbit  LC3G3POL_bit at CLC3POL.B2;
    const register unsigned short int LC3G4POL = 3;
    sbit  LC3G4POL_bit at CLC3POL.B3;
    const register unsigned short int LC3POL = 7;
    sbit  LC3POL_bit at CLC3POL.B7;
    sbit  G1POL_CLC3POL_bit at CLC3POL.B0;
    sbit  G2POL_CLC3POL_bit at CLC3POL.B1;
    sbit  G3POL_CLC3POL_bit at CLC3POL.B2;
    sbit  G4POL_CLC3POL_bit at CLC3POL.B3;
    sbit  POL_CLC3POL_bit at CLC3POL.B7;

    // CLC3SEL0 bits
    const register unsigned short int LC3D1S0 = 0;
    sbit  LC3D1S0_bit at CLC3SEL0.B0;
    const register unsigned short int LC3D1S1 = 1;
    sbit  LC3D1S1_bit at CLC3SEL0.B1;
    const register unsigned short int LC3D1S2 = 2;
    sbit  LC3D1S2_bit at CLC3SEL0.B2;
    const register unsigned short int LC3D1S3 = 3;
    sbit  LC3D1S3_bit at CLC3SEL0.B3;
    const register unsigned short int LC3D1S4 = 4;
    sbit  LC3D1S4_bit at CLC3SEL0.B4;
    sbit  D1S0_CLC3SEL0_bit at CLC3SEL0.B0;
    sbit  D1S1_CLC3SEL0_bit at CLC3SEL0.B1;
    sbit  D1S2_CLC3SEL0_bit at CLC3SEL0.B2;
    sbit  D1S3_CLC3SEL0_bit at CLC3SEL0.B3;
    sbit  D1S4_CLC3SEL0_bit at CLC3SEL0.B4;

    // CLC3SEL1 bits
    const register unsigned short int LC3D2S0 = 0;
    sbit  LC3D2S0_bit at CLC3SEL1.B0;
    const register unsigned short int LC3D2S1 = 1;
    sbit  LC3D2S1_bit at CLC3SEL1.B1;
    const register unsigned short int LC3D2S2 = 2;
    sbit  LC3D2S2_bit at CLC3SEL1.B2;
    const register unsigned short int LC3D2S3 = 3;
    sbit  LC3D2S3_bit at CLC3SEL1.B3;
    const register unsigned short int LC3D2S4 = 4;
    sbit  LC3D2S4_bit at CLC3SEL1.B4;
    sbit  D2S0_CLC3SEL1_bit at CLC3SEL1.B0;
    sbit  D2S1_CLC3SEL1_bit at CLC3SEL1.B1;
    sbit  D2S2_CLC3SEL1_bit at CLC3SEL1.B2;
    sbit  D2S3_CLC3SEL1_bit at CLC3SEL1.B3;
    sbit  D2S4_CLC3SEL1_bit at CLC3SEL1.B4;

    // CLC3SEL2 bits
    const register unsigned short int LC3D3S0 = 0;
    sbit  LC3D3S0_bit at CLC3SEL2.B0;
    const register unsigned short int LC3D3S1 = 1;
    sbit  LC3D3S1_bit at CLC3SEL2.B1;
    const register unsigned short int LC3D3S2 = 2;
    sbit  LC3D3S2_bit at CLC3SEL2.B2;
    const register unsigned short int LC3D3S3 = 3;
    sbit  LC3D3S3_bit at CLC3SEL2.B3;
    const register unsigned short int LC3D3S4 = 4;
    sbit  LC3D3S4_bit at CLC3SEL2.B4;
    sbit  D3S0_CLC3SEL2_bit at CLC3SEL2.B0;
    sbit  D3S1_CLC3SEL2_bit at CLC3SEL2.B1;
    sbit  D3S2_CLC3SEL2_bit at CLC3SEL2.B2;
    sbit  D3S3_CLC3SEL2_bit at CLC3SEL2.B3;
    sbit  D3S4_CLC3SEL2_bit at CLC3SEL2.B4;

    // CLC3SEL3 bits
    const register unsigned short int LC3D4S0 = 0;
    sbit  LC3D4S0_bit at CLC3SEL3.B0;
    const register unsigned short int LC3D4S1 = 1;
    sbit  LC3D4S1_bit at CLC3SEL3.B1;
    const register unsigned short int LC3D4S2 = 2;
    sbit  LC3D4S2_bit at CLC3SEL3.B2;
    const register unsigned short int LC3D4S3 = 3;
    sbit  LC3D4S3_bit at CLC3SEL3.B3;
    const register unsigned short int LC3D4S4 = 4;
    sbit  LC3D4S4_bit at CLC3SEL3.B4;
    sbit  D4S0_CLC3SEL3_bit at CLC3SEL3.B0;
    sbit  D4S1_CLC3SEL3_bit at CLC3SEL3.B1;
    sbit  D4S2_CLC3SEL3_bit at CLC3SEL3.B2;
    sbit  D4S3_CLC3SEL3_bit at CLC3SEL3.B3;
    sbit  D4S4_CLC3SEL3_bit at CLC3SEL3.B4;

    // CLC3GLS0 bits
    const register unsigned short int LC3G1D1N = 0;
    sbit  LC3G1D1N_bit at CLC3GLS0.B0;
    const register unsigned short int LC3G1D1T = 1;
    sbit  LC3G1D1T_bit at CLC3GLS0.B1;
    const register unsigned short int LC3G1D2N = 2;
    sbit  LC3G1D2N_bit at CLC3GLS0.B2;
    const register unsigned short int LC3G1D2T = 3;
    sbit  LC3G1D2T_bit at CLC3GLS0.B3;
    const register unsigned short int LC3G1D3N = 4;
    sbit  LC3G1D3N_bit at CLC3GLS0.B4;
    const register unsigned short int LC3G1D3T = 5;
    sbit  LC3G1D3T_bit at CLC3GLS0.B5;
    const register unsigned short int LC3G1D4N = 6;
    sbit  LC3G1D4N_bit at CLC3GLS0.B6;
    const register unsigned short int LC3G1D4T = 7;
    sbit  LC3G1D4T_bit at CLC3GLS0.B7;
    sbit  D1N_CLC3GLS0_bit at CLC3GLS0.B0;
    sbit  D1T_CLC3GLS0_bit at CLC3GLS0.B1;
    sbit  D2N_CLC3GLS0_bit at CLC3GLS0.B2;
    sbit  D2T_CLC3GLS0_bit at CLC3GLS0.B3;
    sbit  D3N_CLC3GLS0_bit at CLC3GLS0.B4;
    sbit  D3T_CLC3GLS0_bit at CLC3GLS0.B5;
    sbit  D4N_CLC3GLS0_bit at CLC3GLS0.B6;
    sbit  D4T_CLC3GLS0_bit at CLC3GLS0.B7;

    // CLC3GLS1 bits
    const register unsigned short int LC3G2D1N = 0;
    sbit  LC3G2D1N_bit at CLC3GLS1.B0;
    const register unsigned short int LC3G2D1T = 1;
    sbit  LC3G2D1T_bit at CLC3GLS1.B1;
    const register unsigned short int LC3G2D2N = 2;
    sbit  LC3G2D2N_bit at CLC3GLS1.B2;
    const register unsigned short int LC3G2D2T = 3;
    sbit  LC3G2D2T_bit at CLC3GLS1.B3;
    const register unsigned short int LC3G2D3N = 4;
    sbit  LC3G2D3N_bit at CLC3GLS1.B4;
    const register unsigned short int LC3G2D3T = 5;
    sbit  LC3G2D3T_bit at CLC3GLS1.B5;
    const register unsigned short int LC3G2D4N = 6;
    sbit  LC3G2D4N_bit at CLC3GLS1.B6;
    const register unsigned short int LC3G2D4T = 7;
    sbit  LC3G2D4T_bit at CLC3GLS1.B7;
    sbit  D1N_CLC3GLS1_bit at CLC3GLS1.B0;
    sbit  D1T_CLC3GLS1_bit at CLC3GLS1.B1;
    sbit  D2N_CLC3GLS1_bit at CLC3GLS1.B2;
    sbit  D2T_CLC3GLS1_bit at CLC3GLS1.B3;
    sbit  D3N_CLC3GLS1_bit at CLC3GLS1.B4;
    sbit  D3T_CLC3GLS1_bit at CLC3GLS1.B5;
    sbit  D4N_CLC3GLS1_bit at CLC3GLS1.B6;
    sbit  D4T_CLC3GLS1_bit at CLC3GLS1.B7;

    // CLC3GLS2 bits
    const register unsigned short int LC3G3D1N = 0;
    sbit  LC3G3D1N_bit at CLC3GLS2.B0;
    const register unsigned short int LC3G3D1T = 1;
    sbit  LC3G3D1T_bit at CLC3GLS2.B1;
    const register unsigned short int LC3G3D2N = 2;
    sbit  LC3G3D2N_bit at CLC3GLS2.B2;
    const register unsigned short int LC3G3D2T = 3;
    sbit  LC3G3D2T_bit at CLC3GLS2.B3;
    const register unsigned short int LC3G3D3N = 4;
    sbit  LC3G3D3N_bit at CLC3GLS2.B4;
    const register unsigned short int LC3G3D3T = 5;
    sbit  LC3G3D3T_bit at CLC3GLS2.B5;
    const register unsigned short int LC3G3D4N = 6;
    sbit  LC3G3D4N_bit at CLC3GLS2.B6;
    const register unsigned short int LC3G3D4T = 7;
    sbit  LC3G3D4T_bit at CLC3GLS2.B7;
    sbit  D1N_CLC3GLS2_bit at CLC3GLS2.B0;
    sbit  D1T_CLC3GLS2_bit at CLC3GLS2.B1;
    sbit  D2N_CLC3GLS2_bit at CLC3GLS2.B2;
    sbit  D2T_CLC3GLS2_bit at CLC3GLS2.B3;
    sbit  D3N_CLC3GLS2_bit at CLC3GLS2.B4;
    sbit  D3T_CLC3GLS2_bit at CLC3GLS2.B5;
    sbit  D4N_CLC3GLS2_bit at CLC3GLS2.B6;
    sbit  D4T_CLC3GLS2_bit at CLC3GLS2.B7;

    // CLC3GLS3 bits
    const register unsigned short int LC3G4D1N = 0;
    sbit  LC3G4D1N_bit at CLC3GLS3.B0;
    const register unsigned short int LC3G4D1T = 1;
    sbit  LC3G4D1T_bit at CLC3GLS3.B1;
    const register unsigned short int LC3G4D2N = 2;
    sbit  LC3G4D2N_bit at CLC3GLS3.B2;
    const register unsigned short int LC3G4D2T = 3;
    sbit  LC3G4D2T_bit at CLC3GLS3.B3;
    const register unsigned short int LC3G4D3N = 4;
    sbit  LC3G4D3N_bit at CLC3GLS3.B4;
    const register unsigned short int LC3G4D3T = 5;
    sbit  LC3G4D3T_bit at CLC3GLS3.B5;
    const register unsigned short int LC3G4D4N = 6;
    sbit  LC3G4D4N_bit at CLC3GLS3.B6;
    const register unsigned short int LC3G4D4T = 7;
    sbit  LC3G4D4T_bit at CLC3GLS3.B7;
    sbit  G4D1N_CLC3GLS3_bit at CLC3GLS3.B0;
    sbit  G4D1T_CLC3GLS3_bit at CLC3GLS3.B1;
    sbit  G4D2N_CLC3GLS3_bit at CLC3GLS3.B2;
    sbit  G4D2T_CLC3GLS3_bit at CLC3GLS3.B3;
    sbit  G4D3N_CLC3GLS3_bit at CLC3GLS3.B4;
    sbit  G4D3T_CLC3GLS3_bit at CLC3GLS3.B5;
    sbit  G4D4N_CLC3GLS3_bit at CLC3GLS3.B6;
    sbit  G4D4T_CLC3GLS3_bit at CLC3GLS3.B7;

    // ICDBK0H bits
    const register unsigned short int BKA8 = 0;
    sbit  BKA8_bit at ICDBK0H.B0;
    const register unsigned short int BKA9 = 1;
    sbit  BKA9_bit at ICDBK0H.B1;
    const register unsigned short int BKA10 = 2;
    sbit  BKA10_bit at ICDBK0H.B2;
    const register unsigned short int BKA11 = 3;
    sbit  BKA11_bit at ICDBK0H.B3;
    const register unsigned short int BKA12 = 4;
    sbit  BKA12_bit at ICDBK0H.B4;
    const register unsigned short int BKA13 = 5;
    sbit  BKA13_bit at ICDBK0H.B5;
    const register unsigned short int BKA14 = 6;
    sbit  BKA14_bit at ICDBK0H.B6;

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
    const register unsigned short int TRISA2 = 2;
    sbit  TRISA2_bit at TRISA.B2;
    const register unsigned short int TRISA1 = 1;
    sbit  TRISA1_bit at TRISA.B1;
    const register unsigned short int TRISA0 = 0;
    sbit  TRISA0_bit at TRISA.B0;

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

    // T1GPPS bits
    const register unsigned short int T1CKIPPS4 = 4;
    sbit  T1CKIPPS4_bit at T1GPPS.B4;
    const register unsigned short int T1CKIPPS3 = 3;
    sbit  T1CKIPPS3_bit at T1GPPS.B3;
    const register unsigned short int T1CKIPPS2 = 2;
    sbit  T1CKIPPS2_bit at T1GPPS.B2;
    const register unsigned short int T1CKIPPS1 = 1;
    sbit  T1CKIPPS1_bit at T1GPPS.B1;
    const register unsigned short int T1CKIPPS0 = 0;
    sbit  T1CKIPPS0_bit at T1GPPS.B0;

    // T1CKIPPS bits
    const register unsigned short int T1GPPS4 = 4;
    sbit  T1GPPS4_bit at T1CKIPPS.B4;
    const register unsigned short int T1GPPS3 = 3;
    sbit  T1GPPS3_bit at T1CKIPPS.B3;
    const register unsigned short int T1GPPS2 = 2;
    sbit  T1GPPS2_bit at T1CKIPPS.B2;
    const register unsigned short int T1GPPS1 = 1;
    sbit  T1GPPS1_bit at T1CKIPPS.B1;
    const register unsigned short int T1GPPS0 = 0;
    sbit  T1GPPS0_bit at T1CKIPPS.B0;

    // ICDIO bits
    const register unsigned short int PORT_ICDDAT = 7;
    sbit  PORT_ICDDAT_bit at ICDIO.B7;
    const register unsigned short int PORT_ICDCLK = 6;
    sbit  PORT_ICDCLK_bit at ICDIO.B6;
    const register unsigned short int LAT_ICDDAT = 5;
    sbit  LAT_ICDDAT_bit at ICDIO.B5;
    const register unsigned short int LAT_ICDCLK = 4;
    sbit  LAT_ICDCLK_bit at ICDIO.B4;
    const register unsigned short int TRIS_ICDDAT = 3;
    sbit  TRIS_ICDDAT_bit at ICDIO.B3;
    const register unsigned short int TRIS_ICDCLK = 2;
    sbit  TRIS_ICDCLK_bit at ICDIO.B2;

    // ICDCON0 bits
    const register unsigned short int INBUG = 7;
    sbit  INBUG_bit at ICDCON0.B7;
    const register unsigned short int FREEZ = 6;
    sbit  FREEZ_bit at ICDCON0.B6;
    const register unsigned short int SSTEP = 5;
    sbit  SSTEP_bit at ICDCON0.B5;
    const register unsigned short int DBGINEX = 3;
    sbit  DBGINEX_bit at ICDCON0.B3;
    const register unsigned short int RSTVEC = 0;
    sbit  RSTVEC_bit at ICDCON0.B0;

    // ICDSTAT bits
    const register unsigned short int TRP1HLTF = 7;
    sbit  TRP1HLTF_bit at ICDSTAT.B7;
    const register unsigned short int TRP0HLTF = 6;
    sbit  TRP0HLTF_bit at ICDSTAT.B6;
    const register unsigned short int USRHLTF = 1;
    sbit  USRHLTF_bit at ICDSTAT.B1;

    // CLKRFRZ bits

    // DEVSEL bits
    const register unsigned short int DEVSEL2 = 2;
    sbit  DEVSEL2_bit at DEVSEL.B2;
    const register unsigned short int DEVSEL1 = 1;
    sbit  DEVSEL1_bit at DEVSEL.B1;
    const register unsigned short int DEVSEL0 = 0;
    sbit  DEVSEL0_bit at DEVSEL.B0;

    // ICDINSTL bits
    const register unsigned short int DBGIN7 = 7;
    sbit  DBGIN7_bit at ICDINSTL.B7;
    const register unsigned short int DBGIN6 = 6;
    sbit  DBGIN6_bit at ICDINSTL.B6;
    const register unsigned short int DBGIN5 = 5;
    sbit  DBGIN5_bit at ICDINSTL.B5;
    const register unsigned short int DBGIN4 = 4;
    sbit  DBGIN4_bit at ICDINSTL.B4;
    const register unsigned short int DBGIN3 = 3;
    sbit  DBGIN3_bit at ICDINSTL.B3;
    const register unsigned short int DBGIN2 = 2;
    sbit  DBGIN2_bit at ICDINSTL.B2;
    const register unsigned short int DBGIN1 = 1;
    sbit  DBGIN1_bit at ICDINSTL.B1;
    const register unsigned short int DBGIN0 = 0;
    sbit  DBGIN0_bit at ICDINSTL.B0;

    // ICDINSTH bits
    const register unsigned short int DBGIN13 = 5;
    sbit  DBGIN13_bit at ICDINSTH.B5;
    const register unsigned short int DBGIN12 = 4;
    sbit  DBGIN12_bit at ICDINSTH.B4;
    const register unsigned short int DBGIN11 = 3;
    sbit  DBGIN11_bit at ICDINSTH.B3;
    const register unsigned short int DBGIN10 = 2;
    sbit  DBGIN10_bit at ICDINSTH.B2;
    const register unsigned short int DBGIN9 = 1;
    sbit  DBGIN9_bit at ICDINSTH.B1;
    const register unsigned short int DBGIN8 = 0;
    sbit  DBGIN8_bit at ICDINSTH.B0;

    // ICDBK0CON bits
    const register unsigned short int BKEN = 7;
    sbit  BKEN_bit at ICDBK0CON.B7;
    const register unsigned short int BKHLT = 0;
    sbit  BKHLT_bit at ICDBK0CON.B0;

    // ICDBK0L bits
    const register unsigned short int BKA7 = 7;
    sbit  BKA7_bit at ICDBK0L.B7;
    const register unsigned short int BKA6 = 6;
    sbit  BKA6_bit at ICDBK0L.B6;
    const register unsigned short int BKA5 = 5;
    sbit  BKA5_bit at ICDBK0L.B5;
    const register unsigned short int BKA4 = 4;
    sbit  BKA4_bit at ICDBK0L.B4;
    const register unsigned short int BKA3 = 3;
    sbit  BKA3_bit at ICDBK0L.B3;
    const register unsigned short int BKA2 = 2;
    sbit  BKA2_bit at ICDBK0L.B2;
    const register unsigned short int BKA1 = 1;
    sbit  BKA1_bit at ICDBK0L.B1;
    const register unsigned short int BKA0 = 0;
    sbit  BKA0_bit at ICDBK0L.B0;

    // BSRICDSHAD bits
    const register unsigned short int BSR_ICDSHAD4 = 4;
    sbit  BSR_ICDSHAD4_bit at BSRICDSHAD.B4;
    const register unsigned short int BSR_ICDSHAD3 = 3;
    sbit  BSR_ICDSHAD3_bit at BSRICDSHAD.B3;
    const register unsigned short int BSR_ICDSHAD2 = 2;
    sbit  BSR_ICDSHAD2_bit at BSRICDSHAD.B2;
    const register unsigned short int BSR_ICDSHAD1 = 1;
    sbit  BSR_ICDSHAD1_bit at BSRICDSHAD.B1;
    const register unsigned short int BSR_ICDSHAD0 = 0;
    sbit  BSR_ICDSHAD0_bit at BSRICDSHAD.B0;
