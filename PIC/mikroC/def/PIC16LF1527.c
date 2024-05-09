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
sfr unsigned short volatile PIR3             absolute 0x0013;
sfr unsigned short volatile PIR4             absolute 0x0014;
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
sfr unsigned short volatile PIE4             absolute 0x0094;
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
sfr unsigned short          APFCON           absolute 0x011D;
sfr unsigned short volatile ANSELA           absolute 0x018C;
sfr unsigned short volatile ANSELB           absolute 0x018D;
sfr unsigned short volatile ANSELD           absolute 0x018F;
sfr unsigned short volatile ANSELE           absolute 0x0190;
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
sfr unsigned short volatile WPUD             absolute 0x020F;
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
sfr unsigned short volatile SSP2BUF          absolute 0x0219;
sfr unsigned short volatile SSP2ADD          absolute 0x021A;
sfr unsigned short volatile SSP2MSK          absolute 0x021B;
sfr unsigned short volatile SSP2STAT         absolute 0x021C;
sfr unsigned short volatile SSP2CON1         absolute 0x021D;
sfr unsigned short volatile SSP2CON2         absolute 0x021E;
sfr unsigned short volatile SSP2CON3         absolute 0x021F;
sfr unsigned int   volatile CCPR1            absolute 0x0291;
sfr unsigned short volatile CCPR1L           absolute 0x0291;
sfr unsigned short volatile CCPR1H           absolute 0x0292;
sfr unsigned short volatile CCP1CON          absolute 0x0293;
sfr unsigned short volatile CCP2CON          absolute 0x029A;
sfr unsigned short volatile CCPTMRS0         absolute 0x029D;
sfr unsigned short volatile CCPTMRS1         absolute 0x029E;
sfr unsigned short volatile CCPTMRS2         absolute 0x029F;
sfr unsigned short volatile CCP3CON          absolute 0x0313;
sfr unsigned short volatile CCP4CON          absolute 0x031A;
sfr unsigned short volatile CCP5CON          absolute 0x031E;
sfr unsigned short volatile LATF             absolute 0x038C;
sfr unsigned short volatile LATG             absolute 0x038D;
sfr unsigned short volatile IOCBP            absolute 0x0394;
sfr unsigned short volatile IOCBN            absolute 0x0395;
sfr unsigned short volatile IOCBF            absolute 0x0396;
sfr unsigned short volatile ANSELF           absolute 0x040C;
sfr unsigned short volatile ANSELG           absolute 0x040D;
sfr unsigned short volatile TMR3L            absolute 0x0411;
sfr unsigned short volatile TMR3H            absolute 0x0412;
sfr unsigned short volatile T3CON            absolute 0x0413;
sfr unsigned short volatile T3GCON           absolute 0x0414;
sfr unsigned short volatile TMR4             absolute 0x0415;
sfr unsigned short volatile PR4              absolute 0x0416;
sfr unsigned short volatile T4CON            absolute 0x0417;
sfr unsigned short volatile TMR5L            absolute 0x0418;
sfr unsigned short volatile TMR5H            absolute 0x0419;
sfr unsigned short volatile T5CON            absolute 0x041A;
sfr unsigned short volatile T5GCON           absolute 0x041B;
sfr unsigned short volatile TMR6             absolute 0x041C;
sfr unsigned short volatile PR6              absolute 0x041D;
sfr unsigned short volatile T6CON            absolute 0x041E;
sfr unsigned short volatile WPUG             absolute 0x048D;
sfr unsigned short volatile RC2REG           absolute 0x0491;
sfr unsigned short volatile RCREG2           absolute 0x0491;
sfr unsigned short volatile TX2REG           absolute 0x0492;
sfr unsigned short volatile TXREG2           absolute 0x0492;
sfr unsigned int   volatile SPBRG2           absolute 0x0493;
sfr unsigned short volatile SP2BRG           absolute 0x0493;
sfr unsigned short volatile SP2BRGL          absolute 0x0493;
sfr unsigned short volatile SPBRGL2          absolute 0x0493;
sfr unsigned short volatile SP2BRGH          absolute 0x0494;
sfr unsigned short          SPBRGH2          absolute 0x0494;
sfr unsigned short volatile RC2STA           absolute 0x0495;
sfr unsigned short volatile RCSTA2           absolute 0x0495;
sfr unsigned short volatile TX2STA           absolute 0x0496;
sfr unsigned short volatile TXSTA2           absolute 0x0496;
sfr unsigned short volatile BAUD2CON         absolute 0x0497;
sfr unsigned short          BAUDCON2         absolute 0x0497;
sfr unsigned short volatile TMR8             absolute 0x0595;
sfr unsigned short volatile PR8              absolute 0x0596;
sfr unsigned short volatile T8CON            absolute 0x0597;
sfr unsigned short volatile TMR10            absolute 0x059C;
sfr unsigned short volatile PR10             absolute 0x059D;
sfr unsigned short volatile T10CON           absolute 0x059E;
sfr unsigned short volatile CCP6CON          absolute 0x0613;
sfr unsigned short volatile CCP7CON          absolute 0x0616;
sfr unsigned short volatile CCP8CON          absolute 0x0619;
sfr unsigned short volatile CCP9CON          absolute 0x061C;
sfr unsigned int   volatile CCPR10           absolute 0x061D;
sfr unsigned short volatile CCPR10L          absolute 0x061D;
sfr unsigned short volatile CCPR10H          absolute 0x061E;
sfr unsigned short volatile CCP10CON         absolute 0x061F;
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
sfr unsigned short volatile PORTF            absolute 0x028C;
sfr unsigned short volatile PORTG            absolute 0x028D;
sfr unsigned short volatile CCPR2L           absolute 0x0298;
sfr unsigned short volatile CCPR2H           absolute 0x0299;
sfr unsigned short volatile TRISF            absolute 0x030C;
sfr unsigned short volatile TRISG            absolute 0x030D;
sfr unsigned short volatile CCPR3L           absolute 0x0311;
sfr unsigned short volatile CCPR3H           absolute 0x0312;
sfr unsigned short volatile CCPR4L           absolute 0x0318;
sfr unsigned short volatile CCPR4H           absolute 0x0319;
sfr unsigned short volatile CCPR5L           absolute 0x031C;
sfr unsigned short volatile CCPR5H           absolute 0x031D;
sfr unsigned short volatile CCPR6L           absolute 0x0611;
sfr unsigned short volatile CCPR6H           absolute 0x0612;
sfr unsigned short volatile CCPR7L           absolute 0x0614;
sfr unsigned short volatile CCPR7H           absolute 0x0615;
sfr unsigned short volatile CCPR8L           absolute 0x0617;
sfr unsigned short volatile CCPR8H           absolute 0x0618;
sfr unsigned short volatile CCPR9L           absolute 0x061A;
sfr unsigned short volatile CCPR9H           absolute 0x061B;
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
    const register unsigned short int TX1IF = 4;
    sbit  TX1IF_bit at PIR1.B4;
    const register unsigned short int RC1IF = 5;
    sbit  RC1IF_bit at PIR1.B5;
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;
    const register unsigned short int TMR1GIF = 7;
    sbit  TMR1GIF_bit at PIR1.B7;
    const register unsigned short int SSPIF = 3;
    sbit  SSPIF_bit at PIR1.B3;
    const register unsigned short int TXIF = 4;
    sbit  TXIF_bit at PIR1.B4;
    const register unsigned short int RCIF = 5;
    sbit  RCIF_bit at PIR1.B5;

    // PIR2 bits
    const register unsigned short int CCP2IF = 0;
    sbit  CCP2IF_bit at PIR2.B0;
    const register unsigned short int TMR8IF = 1;
    sbit  TMR8IF_bit at PIR2.B1;
    const register unsigned short int TMR10IF = 2;
    sbit  TMR10IF_bit at PIR2.B2;
    const register unsigned short int BCL1IF = 3;
    sbit  BCL1IF_bit at PIR2.B3;
    const register unsigned short int TMR3GIF = 5;
    sbit  TMR3GIF_bit at PIR2.B5;
    const register unsigned short int TMR5GIF = 6;
    sbit  TMR5GIF_bit at PIR2.B6;
    const register unsigned short int OSFIF = 7;
    sbit  OSFIF_bit at PIR2.B7;
    const register unsigned short int BCLIF = 3;
    sbit  BCLIF_bit at PIR2.B3;

    // PIR3 bits
    const register unsigned short int TMR3IF = 0;
    sbit  TMR3IF_bit at PIR3.B0;
    const register unsigned short int TMR4IF = 1;
    sbit  TMR4IF_bit at PIR3.B1;
    const register unsigned short int TMR5IF = 2;
    sbit  TMR5IF_bit at PIR3.B2;
    const register unsigned short int TMR6IF = 3;
    sbit  TMR6IF_bit at PIR3.B3;
    const register unsigned short int CCP3IF = 4;
    sbit  CCP3IF_bit at PIR3.B4;
    const register unsigned short int CCP4IF = 5;
    sbit  CCP4IF_bit at PIR3.B5;
    const register unsigned short int CCP5IF = 6;
    sbit  CCP5IF_bit at PIR3.B6;
    const register unsigned short int CCP6IF = 7;
    sbit  CCP6IF_bit at PIR3.B7;

    // PIR4 bits
    const register unsigned short int SSP2IF = 0;
    sbit  SSP2IF_bit at PIR4.B0;
    const register unsigned short int BCL2IF = 1;
    sbit  BCL2IF_bit at PIR4.B1;
    const register unsigned short int CCP7IF = 2;
    sbit  CCP7IF_bit at PIR4.B2;
    const register unsigned short int CCP8IF = 3;
    sbit  CCP8IF_bit at PIR4.B3;
    const register unsigned short int TX2IF = 4;
    sbit  TX2IF_bit at PIR4.B4;
    const register unsigned short int RC2IF = 5;
    sbit  RC2IF_bit at PIR4.B5;
    const register unsigned short int CCP9IF = 6;
    sbit  CCP9IF_bit at PIR4.B6;
    const register unsigned short int CCP10IF = 7;
    sbit  CCP10IF_bit at PIR4.B7;

    // T1CON bits
    const register unsigned short int TMR1ON = 0;
    sbit  TMR1ON_bit at T1CON.B0;
    const register unsigned short int NOT_T1SYNC = 2;
    sbit  NOT_T1SYNC_bit at T1CON.B2;
    const register unsigned short int SOSCEN = 3;
    sbit  SOSCEN_bit at T1CON.B3;
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
    const register unsigned short int TX1IE = 4;
    sbit  TX1IE_bit at PIE1.B4;
    const register unsigned short int RC1IE = 5;
    sbit  RC1IE_bit at PIE1.B5;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;
    const register unsigned short int TMR1GIE = 7;
    sbit  TMR1GIE_bit at PIE1.B7;
    const register unsigned short int SSPIE = 3;
    sbit  SSPIE_bit at PIE1.B3;
    const register unsigned short int TXIE = 4;
    sbit  TXIE_bit at PIE1.B4;
    const register unsigned short int RCIE = 5;
    sbit  RCIE_bit at PIE1.B5;

    // PIE2 bits
    const register unsigned short int CCP2IE = 0;
    sbit  CCP2IE_bit at PIE2.B0;
    const register unsigned short int TMR8IE = 1;
    sbit  TMR8IE_bit at PIE2.B1;
    const register unsigned short int TMR10IE = 2;
    sbit  TMR10IE_bit at PIE2.B2;
    const register unsigned short int BCL1IE = 3;
    sbit  BCL1IE_bit at PIE2.B3;
    const register unsigned short int TMR3GIE = 5;
    sbit  TMR3GIE_bit at PIE2.B5;
    const register unsigned short int TMR5GIE = 6;
    sbit  TMR5GIE_bit at PIE2.B6;
    const register unsigned short int OSFIE = 7;
    sbit  OSFIE_bit at PIE2.B7;
    const register unsigned short int BCLIE = 3;
    sbit  BCLIE_bit at PIE2.B3;

    // PIE3 bits
    const register unsigned short int TMR3IE = 0;
    sbit  TMR3IE_bit at PIE3.B0;
    const register unsigned short int TMR4IE = 1;
    sbit  TMR4IE_bit at PIE3.B1;
    const register unsigned short int TMR5IE = 2;
    sbit  TMR5IE_bit at PIE3.B2;
    const register unsigned short int TMR6IE = 3;
    sbit  TMR6IE_bit at PIE3.B3;
    const register unsigned short int CCP3IE = 4;
    sbit  CCP3IE_bit at PIE3.B4;
    const register unsigned short int CCP4IE = 5;
    sbit  CCP4IE_bit at PIE3.B5;
    const register unsigned short int CCP5IE = 6;
    sbit  CCP5IE_bit at PIE3.B6;
    const register unsigned short int CCP6IE = 7;
    sbit  CCP6IE_bit at PIE3.B7;

    // PIE4 bits
    const register unsigned short int SSP2IE = 0;
    sbit  SSP2IE_bit at PIE4.B0;
    const register unsigned short int BCL2IE = 1;
    sbit  BCL2IE_bit at PIE4.B1;
    const register unsigned short int CCP7IE = 2;
    sbit  CCP7IE_bit at PIE4.B2;
    const register unsigned short int CCP8IE = 3;
    sbit  CCP8IE_bit at PIE4.B3;
    const register unsigned short int TX2IE = 4;
    sbit  TX2IE_bit at PIE4.B4;
    const register unsigned short int RC2IE = 5;
    sbit  RC2IE_bit at PIE4.B5;
    const register unsigned short int CCP9IE = 6;
    sbit  CCP9IE_bit at PIE4.B6;
    const register unsigned short int CCP10IE = 7;
    sbit  CCP10IE_bit at PIE4.B7;

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
    const register unsigned short int T3CKISEL = 1;
    sbit  T3CKISEL_bit at APFCON.B1;

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

    // ANSELD bits
    const register unsigned short int ANSD0 = 0;
    sbit  ANSD0_bit at ANSELD.B0;
    const register unsigned short int ANSD1 = 1;
    sbit  ANSD1_bit at ANSELD.B1;
    const register unsigned short int ANSD2 = 2;
    sbit  ANSD2_bit at ANSELD.B2;
    const register unsigned short int ANSD3 = 3;
    sbit  ANSD3_bit at ANSELD.B3;

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

    // VREGCON bits
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

    // WPUD bits
    const register unsigned short int WPUD0 = 0;
    sbit  WPUD0_bit at WPUD.B0;
    const register unsigned short int WPUD1 = 1;
    sbit  WPUD1_bit at WPUD.B1;
    const register unsigned short int WPUD2 = 2;
    sbit  WPUD2_bit at WPUD.B2;
    const register unsigned short int WPUD3 = 3;
    sbit  WPUD3_bit at WPUD.B3;
    const register unsigned short int WPUD4 = 4;
    sbit  WPUD4_bit at WPUD.B4;
    const register unsigned short int WPUD5 = 5;
    sbit  WPUD5_bit at WPUD.B5;
    const register unsigned short int WPUD6 = 6;
    sbit  WPUD6_bit at WPUD.B6;
    const register unsigned short int WPUD7 = 7;
    sbit  WPUD7_bit at WPUD.B7;

    // WPUE bits
    const register unsigned short int WPUE0 = 0;
    sbit  WPUE0_bit at WPUE.B0;
    const register unsigned short int WPUE1 = 1;
    sbit  WPUE1_bit at WPUE.B1;
    const register unsigned short int WPUE2 = 2;
    sbit  WPUE2_bit at WPUE.B2;
    const register unsigned short int WPUE3 = 3;
    sbit  WPUE3_bit at WPUE.B3;
    const register unsigned short int WPUE4 = 4;
    sbit  WPUE4_bit at WPUE.B4;
    const register unsigned short int WPUE5 = 5;
    sbit  WPUE5_bit at WPUE.B5;
    const register unsigned short int WPUE6 = 6;
    sbit  WPUE6_bit at WPUE.B6;
    const register unsigned short int WPUE7 = 7;
    sbit  WPUE7_bit at WPUE.B7;

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

    // SSP2STAT bits
    sbit  BF_SSP2STAT_bit at SSP2STAT.B0;
    sbit  UA_SSP2STAT_bit at SSP2STAT.B1;
    sbit  R_NOT_W_SSP2STAT_bit at SSP2STAT.B2;
    sbit  S_SSP2STAT_bit at SSP2STAT.B3;
    sbit  P_SSP2STAT_bit at SSP2STAT.B4;
    sbit  D_NOT_A_SSP2STAT_bit at SSP2STAT.B5;
    sbit  CKE_SSP2STAT_bit at SSP2STAT.B6;
    sbit  SMP_SSP2STAT_bit at SSP2STAT.B7;

    // SSP2CON1 bits
    sbit  CKP_SSP2CON1_bit at SSP2CON1.B4;
    sbit  SSPEN_SSP2CON1_bit at SSP2CON1.B5;
    sbit  SSPOV_SSP2CON1_bit at SSP2CON1.B6;
    sbit  WCOL_SSP2CON1_bit at SSP2CON1.B7;
    sbit  SSPM0_SSP2CON1_bit at SSP2CON1.B0;
    sbit  SSPM1_SSP2CON1_bit at SSP2CON1.B1;
    sbit  SSPM2_SSP2CON1_bit at SSP2CON1.B2;
    sbit  SSPM3_SSP2CON1_bit at SSP2CON1.B3;

    // SSP2CON2 bits
    sbit  SEN_SSP2CON2_bit at SSP2CON2.B0;
    sbit  RSEN_SSP2CON2_bit at SSP2CON2.B1;
    sbit  PEN_SSP2CON2_bit at SSP2CON2.B2;
    sbit  RCEN_SSP2CON2_bit at SSP2CON2.B3;
    sbit  ACKEN_SSP2CON2_bit at SSP2CON2.B4;
    sbit  ACKDT_SSP2CON2_bit at SSP2CON2.B5;
    sbit  ACKSTAT_SSP2CON2_bit at SSP2CON2.B6;
    sbit  GCEN_SSP2CON2_bit at SSP2CON2.B7;

    // SSP2CON3 bits
    sbit  DHEN_SSP2CON3_bit at SSP2CON3.B0;
    sbit  AHEN_SSP2CON3_bit at SSP2CON3.B1;
    sbit  SBCDE_SSP2CON3_bit at SSP2CON3.B2;
    sbit  SDAHT_SSP2CON3_bit at SSP2CON3.B3;
    sbit  BOEN_SSP2CON3_bit at SSP2CON3.B4;
    sbit  SCIE_SSP2CON3_bit at SSP2CON3.B5;
    sbit  PCIE_SSP2CON3_bit at SSP2CON3.B6;
    sbit  ACKTIM_SSP2CON3_bit at SSP2CON3.B7;

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
    const register unsigned short int C6TSEL0 = 2;
    sbit  C6TSEL0_bit at CCPTMRS1.B2;
    const register unsigned short int C6TSEL1 = 3;
    sbit  C6TSEL1_bit at CCPTMRS1.B3;
    const register unsigned short int C7TSEL0 = 4;
    sbit  C7TSEL0_bit at CCPTMRS1.B4;
    const register unsigned short int C7TSEL1 = 5;
    sbit  C7TSEL1_bit at CCPTMRS1.B5;
    const register unsigned short int C8TSEL0 = 6;
    sbit  C8TSEL0_bit at CCPTMRS1.B6;
    const register unsigned short int C8TSEL1 = 7;
    sbit  C8TSEL1_bit at CCPTMRS1.B7;

    // CCPTMRS2 bits
    const register unsigned short int C9TSEL0 = 0;
    sbit  C9TSEL0_bit at CCPTMRS2.B0;
    const register unsigned short int C9TSEL1 = 1;
    sbit  C9TSEL1_bit at CCPTMRS2.B1;
    const register unsigned short int C10TSEL0 = 2;
    sbit  C10TSEL0_bit at CCPTMRS2.B2;
    const register unsigned short int C10TSEL1 = 3;
    sbit  C10TSEL1_bit at CCPTMRS2.B3;

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

    // ANSELF bits
    const register unsigned short int ANSF0 = 0;
    sbit  ANSF0_bit at ANSELF.B0;
    const register unsigned short int ANSF1 = 1;
    sbit  ANSF1_bit at ANSELF.B1;
    const register unsigned short int ANSF2 = 2;
    sbit  ANSF2_bit at ANSELF.B2;
    const register unsigned short int ANSF3 = 3;
    sbit  ANSF3_bit at ANSELF.B3;
    const register unsigned short int ANSF4 = 4;
    sbit  ANSF4_bit at ANSELF.B4;
    const register unsigned short int ANSF5 = 5;
    sbit  ANSF5_bit at ANSELF.B5;
    const register unsigned short int ANSF6 = 6;
    sbit  ANSF6_bit at ANSELF.B6;
    const register unsigned short int ANSF7 = 7;
    sbit  ANSF7_bit at ANSELF.B7;

    // ANSELG bits
    const register unsigned short int ANSG1 = 1;
    sbit  ANSG1_bit at ANSELG.B1;
    const register unsigned short int ANSG2 = 2;
    sbit  ANSG2_bit at ANSELG.B2;
    const register unsigned short int ANSG3 = 3;
    sbit  ANSG3_bit at ANSELG.B3;
    const register unsigned short int ANSG4 = 4;
    sbit  ANSG4_bit at ANSELG.B4;

    // T3CON bits
    const register unsigned short int TMR3ON = 0;
    sbit  TMR3ON_bit at T3CON.B0;
    const register unsigned short int NOT_T3SYNC = 2;
    sbit  NOT_T3SYNC_bit at T3CON.B2;
    sbit  SOSCEN_T3CON_bit at T3CON.B3;
    const register unsigned short int T3OSCEN = 3;
    sbit  T3OSCEN_bit at T3CON.B3;
    const register unsigned short int T3CKPS0 = 4;
    sbit  T3CKPS0_bit at T3CON.B4;
    const register unsigned short int T3CKPS1 = 5;
    sbit  T3CKPS1_bit at T3CON.B5;
    const register unsigned short int TMR3CS0 = 6;
    sbit  TMR3CS0_bit at T3CON.B6;
    const register unsigned short int TMR3CS1 = 7;
    sbit  TMR3CS1_bit at T3CON.B7;

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

    // T5CON bits
    const register unsigned short int TMR5ON = 0;
    sbit  TMR5ON_bit at T5CON.B0;
    const register unsigned short int NOT_T5SYNC = 2;
    sbit  NOT_T5SYNC_bit at T5CON.B2;
    sbit  SOSCEN_T5CON_bit at T5CON.B3;
    const register unsigned short int T5OSCEN = 3;
    sbit  T5OSCEN_bit at T5CON.B3;
    const register unsigned short int T5CKPS0 = 4;
    sbit  T5CKPS0_bit at T5CON.B4;
    const register unsigned short int T5CKPS1 = 5;
    sbit  T5CKPS1_bit at T5CON.B5;
    const register unsigned short int TMR5CS0 = 6;
    sbit  TMR5CS0_bit at T5CON.B6;
    const register unsigned short int TMR5CS1 = 7;
    sbit  TMR5CS1_bit at T5CON.B7;

    // T5GCON bits
    const register unsigned short int T5GVAL = 2;
    sbit  T5GVAL_bit at T5GCON.B2;
    const register unsigned short int T5GGO_NOT_DONE = 3;
    sbit  T5GGO_NOT_DONE_bit at T5GCON.B3;
    const register unsigned short int T5GSPM = 4;
    sbit  T5GSPM_bit at T5GCON.B4;
    const register unsigned short int T5GTM = 5;
    sbit  T5GTM_bit at T5GCON.B5;
    const register unsigned short int T5GPOL = 6;
    sbit  T5GPOL_bit at T5GCON.B6;
    const register unsigned short int TMR5GE = 7;
    sbit  TMR5GE_bit at T5GCON.B7;
    const register unsigned short int T5GSS0 = 0;
    sbit  T5GSS0_bit at T5GCON.B0;
    const register unsigned short int T5GSS1 = 1;
    sbit  T5GSS1_bit at T5GCON.B1;

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

    // WPUG bits
    const register unsigned short int WPUG5 = 5;
    sbit  WPUG5_bit at WPUG.B5;

    // RC2STA, RCSTA2 bits
    sbit  RX9D_RC2STA_bit at RC2STA.B0;
    sbit  OERR_RC2STA_bit at RC2STA.B1;
    sbit  FERR_RC2STA_bit at RC2STA.B2;
    sbit  ADDEN_RC2STA_bit at RC2STA.B3;
    sbit  CREN_RC2STA_bit at RC2STA.B4;
    sbit  SREN_RC2STA_bit at RC2STA.B5;
    sbit  RX9_RC2STA_bit at RC2STA.B6;
    sbit  SPEN_RC2STA_bit at RC2STA.B7;

    // TX2STA, TXSTA2 bits
    sbit  TX9D_TX2STA_bit at TX2STA.B0;
    sbit  TRMT_TX2STA_bit at TX2STA.B1;
    sbit  BRGH_TX2STA_bit at TX2STA.B2;
    sbit  SENDB_TX2STA_bit at TX2STA.B3;
    sbit  SYNC_TX2STA_bit at TX2STA.B4;
    sbit  TXEN_TX2STA_bit at TX2STA.B5;
    sbit  TX9_TX2STA_bit at TX2STA.B6;
    sbit  CSRC_TX2STA_bit at TX2STA.B7;

    // BAUD2CON, BAUDCON2 bits
    sbit  ABDEN_BAUD2CON_bit at BAUD2CON.B0;
    sbit  WUE_BAUD2CON_bit at BAUD2CON.B1;
    sbit  BRG16_BAUD2CON_bit at BAUD2CON.B3;
    sbit  SCKP_BAUD2CON_bit at BAUD2CON.B4;
    sbit  RCIDL_BAUD2CON_bit at BAUD2CON.B6;
    sbit  ABDOVF_BAUD2CON_bit at BAUD2CON.B7;

    // T8CON bits
    const register unsigned short int TMR8ON = 2;
    sbit  TMR8ON_bit at T8CON.B2;
    const register unsigned short int T8CKPS0 = 0;
    sbit  T8CKPS0_bit at T8CON.B0;
    const register unsigned short int T8CKPS1 = 1;
    sbit  T8CKPS1_bit at T8CON.B1;
    const register unsigned short int T8OUTPS0 = 3;
    sbit  T8OUTPS0_bit at T8CON.B3;
    const register unsigned short int T8OUTPS1 = 4;
    sbit  T8OUTPS1_bit at T8CON.B4;
    const register unsigned short int T8OUTPS2 = 5;
    sbit  T8OUTPS2_bit at T8CON.B5;
    const register unsigned short int T8OUTPS3 = 6;
    sbit  T8OUTPS3_bit at T8CON.B6;

    // T10CON bits
    const register unsigned short int TMR10ON = 2;
    sbit  TMR10ON_bit at T10CON.B2;
    const register unsigned short int T10CKPS0 = 0;
    sbit  T10CKPS0_bit at T10CON.B0;
    const register unsigned short int T10CKPS1 = 1;
    sbit  T10CKPS1_bit at T10CON.B1;
    const register unsigned short int T10OUTPS0 = 3;
    sbit  T10OUTPS0_bit at T10CON.B3;
    const register unsigned short int T10OUTPS1 = 4;
    sbit  T10OUTPS1_bit at T10CON.B4;
    const register unsigned short int T10OUTPS2 = 5;
    sbit  T10OUTPS2_bit at T10CON.B5;
    const register unsigned short int T10OUTPS3 = 6;
    sbit  T10OUTPS3_bit at T10CON.B6;

    // CCP6CON bits
    const register unsigned short int CCP6M0 = 0;
    sbit  CCP6M0_bit at CCP6CON.B0;
    const register unsigned short int CCP6M1 = 1;
    sbit  CCP6M1_bit at CCP6CON.B1;
    const register unsigned short int CCP6M2 = 2;
    sbit  CCP6M2_bit at CCP6CON.B2;
    const register unsigned short int CCP6M3 = 3;
    sbit  CCP6M3_bit at CCP6CON.B3;
    const register unsigned short int DC6B0 = 4;
    sbit  DC6B0_bit at CCP6CON.B4;
    const register unsigned short int DC6B1 = 5;
    sbit  DC6B1_bit at CCP6CON.B5;

    // CCP7CON bits
    const register unsigned short int CCP7M0 = 0;
    sbit  CCP7M0_bit at CCP7CON.B0;
    const register unsigned short int CCP7M1 = 1;
    sbit  CCP7M1_bit at CCP7CON.B1;
    const register unsigned short int CCP7M2 = 2;
    sbit  CCP7M2_bit at CCP7CON.B2;
    const register unsigned short int CCP7M3 = 3;
    sbit  CCP7M3_bit at CCP7CON.B3;
    const register unsigned short int DC7B0 = 4;
    sbit  DC7B0_bit at CCP7CON.B4;
    const register unsigned short int DC7B1 = 5;
    sbit  DC7B1_bit at CCP7CON.B5;

    // CCP8CON bits
    const register unsigned short int CCP8M0 = 0;
    sbit  CCP8M0_bit at CCP8CON.B0;
    const register unsigned short int CCP8M1 = 1;
    sbit  CCP8M1_bit at CCP8CON.B1;
    const register unsigned short int CCP8M2 = 2;
    sbit  CCP8M2_bit at CCP8CON.B2;
    const register unsigned short int CCP8M3 = 3;
    sbit  CCP8M3_bit at CCP8CON.B3;
    const register unsigned short int DC8B0 = 4;
    sbit  DC8B0_bit at CCP8CON.B4;
    const register unsigned short int DC8B1 = 5;
    sbit  DC8B1_bit at CCP8CON.B5;

    // CCP9CON bits
    const register unsigned short int CCP9M0 = 0;
    sbit  CCP9M0_bit at CCP9CON.B0;
    const register unsigned short int CCP9M1 = 1;
    sbit  CCP9M1_bit at CCP9CON.B1;
    const register unsigned short int CCP9M2 = 2;
    sbit  CCP9M2_bit at CCP9CON.B2;
    const register unsigned short int CCP9M3 = 3;
    sbit  CCP9M3_bit at CCP9CON.B3;
    const register unsigned short int DC9B0 = 4;
    sbit  DC9B0_bit at CCP9CON.B4;
    const register unsigned short int DC9B1 = 5;
    sbit  DC9B1_bit at CCP9CON.B5;

    // CCP10CON bits
    const register unsigned short int CCP10M0 = 0;
    sbit  CCP10M0_bit at CCP10CON.B0;
    const register unsigned short int CCP10M1 = 1;
    sbit  CCP10M1_bit at CCP10CON.B1;
    const register unsigned short int CCP10M2 = 2;
    sbit  CCP10M2_bit at CCP10CON.B2;
    const register unsigned short int CCP10M3 = 3;
    sbit  CCP10M3_bit at CCP10CON.B3;
    const register unsigned short int DC10B0 = 4;
    sbit  DC10B0_bit at CCP10CON.B4;
    const register unsigned short int DC10B1 = 5;
    sbit  DC10B1_bit at CCP10CON.B5;

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
    const register unsigned short int TRISE2 = 2;
    sbit  TRISE2_bit at TRISE.B2;
    const register unsigned short int TRISE1 = 1;
    sbit  TRISE1_bit at TRISE.B1;
    const register unsigned short int TRISE0 = 0;
    sbit  TRISE0_bit at TRISE.B0;

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
