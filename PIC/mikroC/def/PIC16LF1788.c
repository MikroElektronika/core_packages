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
sfr unsigned short volatile OSCTUNE          absolute 0x0098;
sfr unsigned short volatile OSCCON           absolute 0x0099;
sfr unsigned short volatile OSCSTAT          absolute 0x009A;
sfr unsigned short volatile ADRESL           absolute 0x009B;
sfr unsigned short volatile ADRESH           absolute 0x009C;
sfr unsigned short volatile ADCON0           absolute 0x009D;
sfr unsigned short volatile ADCON1           absolute 0x009E;
sfr unsigned short volatile ADCON2           absolute 0x009F;
sfr unsigned short volatile LATA             absolute 0x010C;
sfr unsigned short volatile LATB             absolute 0x010D;
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
sfr unsigned short volatile CM4CON0          absolute 0x011A;
sfr unsigned short volatile CM4CON1          absolute 0x011B;
sfr unsigned short volatile APFCON2          absolute 0x011C;
sfr unsigned short          APFCON           absolute 0x011D;
sfr unsigned short volatile APFCON0          absolute 0x011D;
sfr unsigned short volatile APFCON1          absolute 0x011D;
sfr unsigned short volatile CM3CON0          absolute 0x011E;
sfr unsigned short volatile CM3CON1          absolute 0x011F;
sfr unsigned short volatile ANSELA           absolute 0x018C;
sfr unsigned short volatile ANSELB           absolute 0x018D;
sfr unsigned short volatile ANSELC           absolute 0x018E;
sfr unsigned int   volatile EEADR            absolute 0x0191;
sfr unsigned short volatile EEADRL           absolute 0x0191;
sfr unsigned short volatile EEADRH           absolute 0x0192;
sfr unsigned int   volatile EEDAT            absolute 0x0193;
sfr unsigned short volatile EEDATL           absolute 0x0193;
sfr unsigned short volatile EEDATH           absolute 0x0194;
sfr unsigned short volatile EECON1           absolute 0x0195;
sfr unsigned short volatile EECON2           absolute 0x0196;
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
sfr unsigned short          WPUB             absolute 0x020D;
sfr unsigned short volatile WPUC             absolute 0x020E;
sfr unsigned short volatile WPUE             absolute 0x0210;
sfr unsigned short volatile SSP1BUF          absolute 0x0211;
sfr unsigned short volatile SSPBUF           absolute 0x0211;
sfr unsigned short volatile SSP1ADD          absolute 0x0212;
sfr unsigned short volatile SSPADD           absolute 0x0212;
sfr unsigned short volatile SSP1MSK          absolute 0x0213;
sfr unsigned short volatile SSPMSK           absolute 0x0213;
sfr unsigned short volatile SSP1STAT         absolute 0x0214;
sfr unsigned short volatile SSPSTAT          absolute 0x0214;
sfr unsigned short volatile SSP1CON          absolute 0x0215;
sfr unsigned short volatile SSPCON           absolute 0x0215;
sfr unsigned short volatile SSP1CON2         absolute 0x0216;
sfr unsigned short volatile SSPCON2          absolute 0x0216;
sfr unsigned short volatile SSP1CON3         absolute 0x0217;
sfr unsigned short volatile SSPCON3          absolute 0x0217;
sfr unsigned short volatile ODCONA           absolute 0x028C;
sfr unsigned short volatile ODCONB           absolute 0x028D;
sfr unsigned short volatile ODCONC           absolute 0x028E;
sfr unsigned int   volatile CCPR1            absolute 0x0291;
sfr unsigned short volatile CCPR1L           absolute 0x0291;
sfr unsigned short volatile CCPR1H           absolute 0x0292;
sfr unsigned short volatile CCP1CON          absolute 0x0293;
sfr unsigned short volatile CCP2CON          absolute 0x029A;
sfr unsigned short volatile SLRCONA          absolute 0x030C;
sfr unsigned short volatile SLRCONB          absolute 0x030D;
sfr unsigned short volatile SLRCONC          absolute 0x030E;
sfr unsigned short volatile CCP3CON          absolute 0x0313;
sfr unsigned short volatile INLVLA           absolute 0x038C;
sfr unsigned short volatile INLVLB           absolute 0x038D;
sfr unsigned short volatile INLVLC           absolute 0x038E;
sfr unsigned short volatile INLVLE           absolute 0x0390;
sfr unsigned short volatile IOCAP            absolute 0x0391;
sfr unsigned short volatile IOCAN            absolute 0x0392;
sfr unsigned short volatile IOCAF            absolute 0x0393;
sfr unsigned short volatile IOCBP            absolute 0x0394;
sfr unsigned short volatile IOCBN            absolute 0x0395;
sfr unsigned short volatile IOCBF            absolute 0x0396;
sfr unsigned short volatile IOCCP            absolute 0x0397;
sfr unsigned short volatile IOCCN            absolute 0x0398;
sfr unsigned short volatile IOCCF            absolute 0x0399;
sfr unsigned short volatile IOCEP            absolute 0x039D;
sfr unsigned short volatile IOCEN            absolute 0x039E;
sfr unsigned short volatile IOCEF            absolute 0x039F;
sfr unsigned short volatile OPA1CON          absolute 0x0511;
sfr unsigned short volatile OPA2CON          absolute 0x0513;
sfr unsigned short volatile CLKRCON          absolute 0x051A;
sfr unsigned short volatile DAC2CON0         absolute 0x0591;
sfr unsigned short volatile DAC2CON1         absolute 0x0592;
sfr unsigned short volatile DAC3CON0         absolute 0x0593;
sfr unsigned short volatile DAC3CON1         absolute 0x0594;
sfr unsigned short volatile DAC4CON0         absolute 0x0595;
sfr unsigned short volatile DAC4CON1         absolute 0x0596;
sfr unsigned short volatile PSMC1CON         absolute 0x0E91;
sfr unsigned short volatile PSMC1MDL         absolute 0x0E92;
sfr unsigned short volatile PSMC1SYNC        absolute 0x0E93;
sfr unsigned short volatile PSMC1CLK         absolute 0x0E94;
sfr unsigned short volatile PSMC1OEN         absolute 0x0E95;
sfr unsigned short volatile PSMC1POL         absolute 0x0E96;
sfr unsigned short volatile PSMC1BLNK        absolute 0x0E97;
sfr unsigned short volatile PSMC1REBS        absolute 0x0E98;
sfr unsigned short volatile PSMC1FEBS        absolute 0x0E99;
sfr unsigned short volatile PSMC1PHS         absolute 0x0E9A;
sfr unsigned short volatile PSMC1DCS         absolute 0x0E9B;
sfr unsigned short volatile PSMC1PRS         absolute 0x0E9C;
sfr unsigned short volatile PSMC1ASDC        absolute 0x0E9D;
sfr unsigned short volatile PSMC1ASDL        absolute 0x0E9E;
sfr unsigned short volatile PSMC1ASDS        absolute 0x0E9F;
sfr unsigned short volatile PSMC1INT         absolute 0x0EA0;
sfr unsigned int   volatile PSMC1PH          absolute 0x0EA1;
sfr unsigned short volatile PSMC1PHL         absolute 0x0EA1;
sfr unsigned short volatile PSMC1PHH         absolute 0x0EA2;
sfr unsigned int   volatile PSMC1DC          absolute 0x0EA3;
sfr unsigned short volatile PSMC1DCL         absolute 0x0EA3;
sfr unsigned short volatile PSMC1DCH         absolute 0x0EA4;
sfr unsigned int   volatile PSMC1PR          absolute 0x0EA5;
sfr unsigned short volatile PSMC1PRL         absolute 0x0EA5;
sfr unsigned short volatile PSMC1PRH         absolute 0x0EA6;
sfr unsigned int   volatile PSMC1TMR         absolute 0x0EA7;
sfr unsigned short volatile PSMC1TMRL        absolute 0x0EA7;
sfr unsigned short volatile PSMC1TMRH        absolute 0x0EA8;
sfr unsigned short volatile PSMC1DBR         absolute 0x0EA9;
sfr unsigned short volatile PSMC1DBF         absolute 0x0EAA;
sfr unsigned short volatile PSMC1BLKR        absolute 0x0EAB;
sfr unsigned short volatile PSMC1BLKF        absolute 0x0EAC;
sfr unsigned short volatile PSMC1FFA         absolute 0x0EAD;
sfr unsigned short volatile PSMC1STR0        absolute 0x0EAE;
sfr unsigned short volatile PSMC1STR1        absolute 0x0EAF;
sfr unsigned short volatile PSMC2CON         absolute 0x0EB1;
sfr unsigned short volatile PSMC2MDL         absolute 0x0EB2;
sfr unsigned short volatile PSMC2SYNC        absolute 0x0EB3;
sfr unsigned short volatile PSMC2CLK         absolute 0x0EB4;
sfr unsigned short volatile PSMC2OEN         absolute 0x0EB5;
sfr unsigned short volatile PSMC2POL         absolute 0x0EB6;
sfr unsigned short volatile PSMC2BLNK        absolute 0x0EB7;
sfr unsigned short volatile PSMC2REBS        absolute 0x0EB8;
sfr unsigned short volatile PSMC2FEBS        absolute 0x0EB9;
sfr unsigned short volatile PSMC2PHS         absolute 0x0EBA;
sfr unsigned short volatile PSMC2DCS         absolute 0x0EBB;
sfr unsigned short volatile PSMC2PRS         absolute 0x0EBC;
sfr unsigned short volatile PSMC2ASDC        absolute 0x0EBD;
sfr unsigned short volatile PSMC2ASDL        absolute 0x0EBE;
sfr unsigned short volatile PSMC2ASDS        absolute 0x0EBF;
sfr unsigned short volatile PSMC2INT         absolute 0x0EC0;
sfr unsigned int   volatile PSMC2PH          absolute 0x0EC1;
sfr unsigned short volatile PSMC2PHL         absolute 0x0EC1;
sfr unsigned short volatile PSMC2PHH         absolute 0x0EC2;
sfr unsigned int   volatile PSMC2DC          absolute 0x0EC3;
sfr unsigned short volatile PSMC2DCL         absolute 0x0EC3;
sfr unsigned short volatile PSMC2DCH         absolute 0x0EC4;
sfr unsigned int   volatile PSMC2PR          absolute 0x0EC5;
sfr unsigned short volatile PSMC2PRL         absolute 0x0EC5;
sfr unsigned short volatile PSMC2PRH         absolute 0x0EC6;
sfr unsigned int   volatile PSMC2TMR         absolute 0x0EC7;
sfr unsigned short volatile PSMC2TMRL        absolute 0x0EC7;
sfr unsigned short volatile PSMC2TMRH        absolute 0x0EC8;
sfr unsigned short volatile PSMC2DBR         absolute 0x0EC9;
sfr unsigned short volatile PSMC2DBF         absolute 0x0ECA;
sfr unsigned short volatile PSMC2BLKR        absolute 0x0ECB;
sfr unsigned short volatile PSMC2BLKF        absolute 0x0ECC;
sfr unsigned short volatile PSMC2FFA         absolute 0x0ECD;
sfr unsigned short volatile PSMC2STR0        absolute 0x0ECE;
sfr unsigned short volatile PSMC2STR1        absolute 0x0ECF;
sfr unsigned short volatile PSMC3CON         absolute 0x0ED1;
sfr unsigned short volatile PSMC3MDL         absolute 0x0ED2;
sfr unsigned short volatile PSMC3SYNC        absolute 0x0ED3;
sfr unsigned short volatile PSMC3CLK         absolute 0x0ED4;
sfr unsigned short volatile PSMC3OEN         absolute 0x0ED5;
sfr unsigned short volatile PSMC3POL         absolute 0x0ED6;
sfr unsigned short volatile PSMC3BLNK        absolute 0x0ED7;
sfr unsigned short volatile PSMC3REBS        absolute 0x0ED8;
sfr unsigned short volatile PSMC3FEBS        absolute 0x0ED9;
sfr unsigned short volatile PSMC3PHS         absolute 0x0EDA;
sfr unsigned short volatile PSMC3DCS         absolute 0x0EDB;
sfr unsigned short volatile PSMC3PRS         absolute 0x0EDC;
sfr unsigned short volatile PSMC3ASDC        absolute 0x0EDD;
sfr unsigned short volatile PSMC3ASDL        absolute 0x0EDE;
sfr unsigned short volatile PSMC3ASDS        absolute 0x0EDF;
sfr unsigned short volatile PSMC3INT         absolute 0x0EE0;
sfr unsigned int   volatile PSMC3PH          absolute 0x0EE1;
sfr unsigned short volatile PSMC3PHL         absolute 0x0EE1;
sfr unsigned short volatile PSMC3PHH         absolute 0x0EE2;
sfr unsigned int   volatile PSMC3DC          absolute 0x0EE3;
sfr unsigned short volatile PSMC3DCL         absolute 0x0EE3;
sfr unsigned short volatile PSMC3DCH         absolute 0x0EE4;
sfr unsigned int   volatile PSMC3PR          absolute 0x0EE5;
sfr unsigned short volatile PSMC3PRL         absolute 0x0EE5;
sfr unsigned short volatile PSMC3PRH         absolute 0x0EE6;
sfr unsigned int   volatile PSMC3TMR         absolute 0x0EE7;
sfr unsigned short volatile PSMC3TMRL        absolute 0x0EE7;
sfr unsigned short volatile PSMC3TMRH        absolute 0x0EE8;
sfr unsigned short volatile PSMC3DBR         absolute 0x0EE9;
sfr unsigned short volatile PSMC3DBF         absolute 0x0EEA;
sfr unsigned short volatile PSMC3BLKR        absolute 0x0EEB;
sfr unsigned short volatile PSMC3BLKF        absolute 0x0EEC;
sfr unsigned short volatile PSMC3FFA         absolute 0x0EED;
sfr unsigned short volatile PSMC3STR0        absolute 0x0EEE;
sfr unsigned short volatile PSMC3STR1        absolute 0x0EEF;
sfr unsigned short volatile PSMC4CON         absolute 0x0F11;
sfr unsigned short volatile PSMC4MDL         absolute 0x0F12;
sfr unsigned short volatile PSMC4SYNC        absolute 0x0F13;
sfr unsigned short volatile PSMC4CLK         absolute 0x0F14;
sfr unsigned short volatile PSMC4OEN         absolute 0x0F15;
sfr unsigned short volatile PSMC4POL         absolute 0x0F16;
sfr unsigned short volatile PSMC4BLNK        absolute 0x0F17;
sfr unsigned short volatile PSMC4REBS        absolute 0x0F18;
sfr unsigned short volatile PSMC4FEBS        absolute 0x0F19;
sfr unsigned short volatile PSMC4PHS         absolute 0x0F1A;
sfr unsigned short volatile PSMC4DCS         absolute 0x0F1B;
sfr unsigned short volatile PSMC4PRS         absolute 0x0F1C;
sfr unsigned short volatile PSMC4ASDC        absolute 0x0F1D;
sfr unsigned short volatile PSMC4ASDL        absolute 0x0F1E;
sfr unsigned short volatile PSMC4ASDS        absolute 0x0F1F;
sfr unsigned short volatile PSMC4INT         absolute 0x0F20;
sfr unsigned int   volatile PSMC4PH          absolute 0x0F21;
sfr unsigned short volatile PSMC4PHL         absolute 0x0F21;
sfr unsigned short volatile PSMC4PHH         absolute 0x0F22;
sfr unsigned int   volatile PSMC4DC          absolute 0x0F23;
sfr unsigned short volatile PSMC4DCL         absolute 0x0F23;
sfr unsigned short volatile PSMC4DCH         absolute 0x0F24;
sfr unsigned int   volatile PSMC4PR          absolute 0x0F25;
sfr unsigned short volatile PSMC4PRL         absolute 0x0F25;
sfr unsigned short volatile PSMC4PRH         absolute 0x0F26;
sfr unsigned int   volatile PSMC4TMR         absolute 0x0F27;
sfr unsigned short volatile PSMC4TMRL        absolute 0x0F27;
sfr unsigned short volatile PSMC4TMRH        absolute 0x0F28;
sfr unsigned short volatile PSMC4DBR         absolute 0x0F29;
sfr unsigned short volatile PSMC4DBF         absolute 0x0F2A;
sfr unsigned short volatile PSMC4BLKR        absolute 0x0F2B;
sfr unsigned short volatile PSMC4BLKF        absolute 0x0F2C;
sfr unsigned short volatile PSMC4FFA         absolute 0x0F2D;
sfr unsigned short volatile PSMC4STR0        absolute 0x0F2E;
sfr unsigned short volatile PSMC4STR1        absolute 0x0F2F;
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

    // PIR2 bits
    const register unsigned short int CCP2IF = 0;
    sbit  CCP2IF_bit at PIR2.B0;
    const register unsigned short int C3IF = 1;
    sbit  C3IF_bit at PIR2.B1;
    const register unsigned short int C4IF = 2;
    sbit  C4IF_bit at PIR2.B2;
    const register unsigned short int BCL1IF = 3;
    sbit  BCL1IF_bit at PIR2.B3;
    const register unsigned short int EEIF = 4;
    sbit  EEIF_bit at PIR2.B4;
    const register unsigned short int C1IF = 5;
    sbit  C1IF_bit at PIR2.B5;
    const register unsigned short int C2IF = 6;
    sbit  C2IF_bit at PIR2.B6;
    const register unsigned short int OSFIF = 7;
    sbit  OSFIF_bit at PIR2.B7;

    // PIR3 bits
    const register unsigned short int CCP3IF = 4;
    sbit  CCP3IF_bit at PIR3.B4;

    // PIR4 bits
    const register unsigned short int PSMC1SIF = 0;
    sbit  PSMC1SIF_bit at PIR4.B0;
    const register unsigned short int PSMC2SIF = 1;
    sbit  PSMC2SIF_bit at PIR4.B1;
    const register unsigned short int PSMC3SIF = 2;
    sbit  PSMC3SIF_bit at PIR4.B2;
    const register unsigned short int PSMC4SIF = 3;
    sbit  PSMC4SIF_bit at PIR4.B3;
    const register unsigned short int PSMC1TIF = 4;
    sbit  PSMC1TIF_bit at PIR4.B4;
    const register unsigned short int PSMC2TIF = 5;
    sbit  PSMC2TIF_bit at PIR4.B5;
    const register unsigned short int PSMC3TIF = 6;
    sbit  PSMC3TIF_bit at PIR4.B6;
    const register unsigned short int PSMC4TIF = 7;
    sbit  PSMC4TIF_bit at PIR4.B7;

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
    const register unsigned short int T1GGO = 3;
    sbit  T1GGO_bit at T1GCON.B3;
    const register unsigned short int T1GSPM = 4;
    sbit  T1GSPM_bit at T1GCON.B4;
    const register unsigned short int T1GTM = 5;
    sbit  T1GTM_bit at T1GCON.B5;
    const register unsigned short int T1GPOL = 6;
    sbit  T1GPOL_bit at T1GCON.B6;
    const register unsigned short int TMR1GE = 7;
    sbit  TMR1GE_bit at T1GCON.B7;

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

    // PIE2 bits
    const register unsigned short int CCP2IE = 0;
    sbit  CCP2IE_bit at PIE2.B0;
    const register unsigned short int C3IE = 1;
    sbit  C3IE_bit at PIE2.B1;
    const register unsigned short int C4IE = 2;
    sbit  C4IE_bit at PIE2.B2;
    const register unsigned short int BCL1IE = 3;
    sbit  BCL1IE_bit at PIE2.B3;
    const register unsigned short int EEIE = 4;
    sbit  EEIE_bit at PIE2.B4;
    const register unsigned short int C1IE = 5;
    sbit  C1IE_bit at PIE2.B5;
    const register unsigned short int C2IE = 6;
    sbit  C2IE_bit at PIE2.B6;
    const register unsigned short int OSFIE = 7;
    sbit  OSFIE_bit at PIE2.B7;

    // PIE3 bits
    const register unsigned short int CCP3IE = 4;
    sbit  CCP3IE_bit at PIE3.B4;

    // PIE4 bits
    const register unsigned short int PSMC1SIE = 0;
    sbit  PSMC1SIE_bit at PIE4.B0;
    const register unsigned short int PSMC2SIE = 1;
    sbit  PSMC2SIE_bit at PIE4.B1;
    const register unsigned short int PSMC3SIE = 2;
    sbit  PSMC3SIE_bit at PIE4.B2;
    const register unsigned short int PSMC4SIE = 3;
    sbit  PSMC4SIE_bit at PIE4.B3;
    const register unsigned short int PSMC1TIE = 4;
    sbit  PSMC1TIE_bit at PIE4.B4;
    const register unsigned short int PSMC2TIE = 5;
    sbit  PSMC2TIE_bit at PIE4.B5;
    const register unsigned short int PMSC3TIE = 6;
    sbit  PMSC3TIE_bit at PIE4.B6;
    const register unsigned short int PSMC4TIE = 7;
    sbit  PSMC4TIE_bit at PIE4.B7;

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
    const register unsigned short int ADRMD = 7;
    sbit  ADRMD_bit at ADCON0.B7;
    const register unsigned short int ADGO = 1;
    sbit  ADGO_bit at ADCON0.B1;
    const register unsigned short int GO = 1;
    sbit  GO_bit at ADCON0.B1;
    const register unsigned short int DONE = 1;
    sbit  DONE_bit at ADCON0.B1;

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

    // ADCON2 bits
    const register unsigned short int CHSN0 = 0;
    sbit  CHSN0_bit at ADCON2.B0;
    const register unsigned short int CHSN1 = 1;
    sbit  CHSN1_bit at ADCON2.B1;
    const register unsigned short int CHSN2 = 2;
    sbit  CHSN2_bit at ADCON2.B2;
    const register unsigned short int CHSN3 = 3;
    sbit  CHSN3_bit at ADCON2.B3;
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
    const register unsigned short int C2OE = 5;
    sbit  C2OE_bit at CM2CON0.B5;
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
    const register unsigned short int MC3OUT = 2;
    sbit  MC3OUT_bit at CMOUT.B2;
    const register unsigned short int MC4OUT = 3;
    sbit  MC4OUT_bit at CMOUT.B3;

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
    const register unsigned short int CDAFVR0 = 2;
    sbit  CDAFVR0_bit at FVRCON.B2;
    const register unsigned short int CDAFVR1 = 3;
    sbit  CDAFVR1_bit at FVRCON.B3;
    const register unsigned short int FVRRDY = 6;
    sbit  FVRRDY_bit at FVRCON.B6;
    const register unsigned short int FVREN = 7;
    sbit  FVREN_bit at FVRCON.B7;

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

    // CM4CON0 bits
    const register unsigned short int C4SYNC = 0;
    sbit  C4SYNC_bit at CM4CON0.B0;
    const register unsigned short int C4HYS = 1;
    sbit  C4HYS_bit at CM4CON0.B1;
    const register unsigned short int C4SP = 2;
    sbit  C4SP_bit at CM4CON0.B2;
    const register unsigned short int C4ZLF = 3;
    sbit  C4ZLF_bit at CM4CON0.B3;
    const register unsigned short int C4POL = 4;
    sbit  C4POL_bit at CM4CON0.B4;
    const register unsigned short int C4OE = 5;
    sbit  C4OE_bit at CM4CON0.B5;
    const register unsigned short int C4OUT = 6;
    sbit  C4OUT_bit at CM4CON0.B6;
    const register unsigned short int C4ON = 7;
    sbit  C4ON_bit at CM4CON0.B7;

    // CM4CON1 bits
    const register unsigned short int C4INTN = 6;
    sbit  C4INTN_bit at CM4CON1.B6;
    const register unsigned short int C4INTP = 7;
    sbit  C4INTP_bit at CM4CON1.B7;
    const register unsigned short int C4NCH0 = 0;
    sbit  C4NCH0_bit at CM4CON1.B0;
    const register unsigned short int C4NCH1 = 1;
    sbit  C4NCH1_bit at CM4CON1.B1;
    const register unsigned short int C4NCH2 = 2;
    sbit  C4NCH2_bit at CM4CON1.B2;
    const register unsigned short int C4PCH0 = 3;
    sbit  C4PCH0_bit at CM4CON1.B3;
    const register unsigned short int C4PCH1 = 4;
    sbit  C4PCH1_bit at CM4CON1.B4;
    const register unsigned short int C4PCH2 = 5;
    sbit  C4PCH2_bit at CM4CON1.B5;

    // APFCON2 bits
    const register unsigned short int CCP3SEL = 0;
    sbit  CCP3SEL_bit at APFCON2.B0;

    // APFCON, APFCON0, APFCON1 bits
    const register unsigned short int CCP2SEL = 0;
    sbit  CCP2SEL_bit at APFCON.B0;
    const register unsigned short int RXSEL = 1;
    sbit  RXSEL_bit at APFCON.B1;
    const register unsigned short int TXSEL = 2;
    sbit  TXSEL_bit at APFCON.B2;
    const register unsigned short int SDISEL = 3;
    sbit  SDISEL_bit at APFCON.B3;
    const register unsigned short int SCKSEL = 4;
    sbit  SCKSEL_bit at APFCON.B4;
    const register unsigned short int SDOSEL = 5;
    sbit  SDOSEL_bit at APFCON.B5;
    const register unsigned short int CCP1SEL = 6;
    sbit  CCP1SEL_bit at APFCON.B6;
    const register unsigned short int C2OUTSEL = 7;
    sbit  C2OUTSEL_bit at APFCON.B7;

    // CM3CON0 bits
    const register unsigned short int C3SYNC = 0;
    sbit  C3SYNC_bit at CM3CON0.B0;
    const register unsigned short int C3HYS = 1;
    sbit  C3HYS_bit at CM3CON0.B1;
    const register unsigned short int C3SP = 2;
    sbit  C3SP_bit at CM3CON0.B2;
    const register unsigned short int C3ZLF = 3;
    sbit  C3ZLF_bit at CM3CON0.B3;
    const register unsigned short int C3POL = 4;
    sbit  C3POL_bit at CM3CON0.B4;
    const register unsigned short int C3OE = 5;
    sbit  C3OE_bit at CM3CON0.B5;
    const register unsigned short int C3OUT = 6;
    sbit  C3OUT_bit at CM3CON0.B6;
    const register unsigned short int C3ON = 7;
    sbit  C3ON_bit at CM3CON0.B7;

    // CM3CON1 bits
    const register unsigned short int C3INTN = 6;
    sbit  C3INTN_bit at CM3CON1.B6;
    const register unsigned short int C3INTP = 7;
    sbit  C3INTP_bit at CM3CON1.B7;
    const register unsigned short int C3NCH0 = 0;
    sbit  C3NCH0_bit at CM3CON1.B0;
    const register unsigned short int C3NCH1 = 1;
    sbit  C3NCH1_bit at CM3CON1.B1;
    const register unsigned short int C3NCH2 = 2;
    sbit  C3NCH2_bit at CM3CON1.B2;
    const register unsigned short int C3PCH0 = 3;
    sbit  C3PCH0_bit at CM3CON1.B3;
    const register unsigned short int C3PCH1 = 4;
    sbit  C3PCH1_bit at CM3CON1.B4;
    const register unsigned short int C3PCH2 = 5;
    sbit  C3PCH2_bit at CM3CON1.B5;

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
    const register unsigned short int WPUA6 = 6;
    sbit  WPUA6_bit at WPUA.B6;
    const register unsigned short int WPUA7 = 7;
    sbit  WPUA7_bit at WPUA.B7;

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
    const register unsigned short int WPUC6 = 6;
    sbit  WPUC6_bit at WPUC.B6;
    const register unsigned short int WPUC7 = 7;
    sbit  WPUC7_bit at WPUC.B7;

    // WPUE bits
    const register unsigned short int WPUE3 = 3;
    sbit  WPUE3_bit at WPUE.B3;

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

    // SSP1CON, SSPCON bits
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
    const register unsigned short int ODCONA0 = 0;
    sbit  ODCONA0_bit at ODCONA.B0;
    const register unsigned short int ODCONA1 = 1;
    sbit  ODCONA1_bit at ODCONA.B1;
    const register unsigned short int ODCONA2 = 2;
    sbit  ODCONA2_bit at ODCONA.B2;
    const register unsigned short int ODCONA3 = 3;
    sbit  ODCONA3_bit at ODCONA.B3;
    const register unsigned short int ODCONA4 = 4;
    sbit  ODCONA4_bit at ODCONA.B4;
    const register unsigned short int ODCONA5 = 5;
    sbit  ODCONA5_bit at ODCONA.B5;
    const register unsigned short int ODCONA6 = 6;
    sbit  ODCONA6_bit at ODCONA.B6;
    const register unsigned short int ODCONA7 = 7;
    sbit  ODCONA7_bit at ODCONA.B7;

    // ODCONB bits
    const register unsigned short int ODCONB0 = 0;
    sbit  ODCONB0_bit at ODCONB.B0;
    const register unsigned short int ODCONB1 = 1;
    sbit  ODCONB1_bit at ODCONB.B1;
    const register unsigned short int ODCONB2 = 2;
    sbit  ODCONB2_bit at ODCONB.B2;
    const register unsigned short int ODCONB3 = 3;
    sbit  ODCONB3_bit at ODCONB.B3;
    const register unsigned short int ODCONB4 = 4;
    sbit  ODCONB4_bit at ODCONB.B4;
    const register unsigned short int ODCONB5 = 5;
    sbit  ODCONB5_bit at ODCONB.B5;
    const register unsigned short int ODCONB6 = 6;
    sbit  ODCONB6_bit at ODCONB.B6;
    const register unsigned short int ODCONB7 = 7;
    sbit  ODCONB7_bit at ODCONB.B7;

    // ODCONC bits
    const register unsigned short int ODCONC0 = 0;
    sbit  ODCONC0_bit at ODCONC.B0;
    const register unsigned short int ODCONC1 = 1;
    sbit  ODCONC1_bit at ODCONC.B1;
    const register unsigned short int ODCONC2 = 2;
    sbit  ODCONC2_bit at ODCONC.B2;
    const register unsigned short int ODCONC3 = 3;
    sbit  ODCONC3_bit at ODCONC.B3;
    const register unsigned short int ODCONC4 = 4;
    sbit  ODCONC4_bit at ODCONC.B4;
    const register unsigned short int ODCONC5 = 5;
    sbit  ODCONC5_bit at ODCONC.B5;
    const register unsigned short int ODCONC6 = 6;
    sbit  ODCONC6_bit at ODCONC.B6;
    const register unsigned short int ODCONC7 = 7;
    sbit  ODCONC7_bit at ODCONC.B7;

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

    // SLRCONA bits
    const register unsigned short int SLRCONA0 = 0;
    sbit  SLRCONA0_bit at SLRCONA.B0;
    const register unsigned short int SLRCONA1 = 1;
    sbit  SLRCONA1_bit at SLRCONA.B1;
    const register unsigned short int SLRCONA2 = 2;
    sbit  SLRCONA2_bit at SLRCONA.B2;
    const register unsigned short int SLRCONA3 = 3;
    sbit  SLRCONA3_bit at SLRCONA.B3;
    const register unsigned short int SLRCONA4 = 4;
    sbit  SLRCONA4_bit at SLRCONA.B4;
    const register unsigned short int SLRCONA5 = 5;
    sbit  SLRCONA5_bit at SLRCONA.B5;
    const register unsigned short int SLRCONA6 = 6;
    sbit  SLRCONA6_bit at SLRCONA.B6;
    const register unsigned short int SLRCONA7 = 7;
    sbit  SLRCONA7_bit at SLRCONA.B7;

    // SLRCONB bits
    const register unsigned short int SLRCONB0 = 0;
    sbit  SLRCONB0_bit at SLRCONB.B0;
    const register unsigned short int SLRCONB1 = 1;
    sbit  SLRCONB1_bit at SLRCONB.B1;
    const register unsigned short int SLRCONB2 = 2;
    sbit  SLRCONB2_bit at SLRCONB.B2;
    const register unsigned short int SLRCONB3 = 3;
    sbit  SLRCONB3_bit at SLRCONB.B3;
    const register unsigned short int SLRCONB4 = 4;
    sbit  SLRCONB4_bit at SLRCONB.B4;
    const register unsigned short int SLRCONB5 = 5;
    sbit  SLRCONB5_bit at SLRCONB.B5;
    const register unsigned short int SLRCONB6 = 6;
    sbit  SLRCONB6_bit at SLRCONB.B6;
    const register unsigned short int SLRCONB7 = 7;
    sbit  SLRCONB7_bit at SLRCONB.B7;

    // SLRCONC bits
    const register unsigned short int SLRCONC0 = 0;
    sbit  SLRCONC0_bit at SLRCONC.B0;
    const register unsigned short int SLRCONC1 = 1;
    sbit  SLRCONC1_bit at SLRCONC.B1;
    const register unsigned short int SLRCONC2 = 2;
    sbit  SLRCONC2_bit at SLRCONC.B2;
    const register unsigned short int SLRCONC3 = 3;
    sbit  SLRCONC3_bit at SLRCONC.B3;
    const register unsigned short int SLRCONC4 = 4;
    sbit  SLRCONC4_bit at SLRCONC.B4;
    const register unsigned short int SLRCONC5 = 5;
    sbit  SLRCONC5_bit at SLRCONC.B5;
    const register unsigned short int SLRCONC6 = 6;
    sbit  SLRCONC6_bit at SLRCONC.B6;
    const register unsigned short int SLRCONC7 = 7;
    sbit  SLRCONC7_bit at SLRCONC.B7;

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
    const register unsigned short int INLVLA6 = 6;
    sbit  INLVLA6_bit at INLVLA.B6;
    const register unsigned short int INLVLA7 = 7;
    sbit  INLVLA7_bit at INLVLA.B7;

    // INLVLB bits
    const register unsigned short int INLVLB0 = 0;
    sbit  INLVLB0_bit at INLVLB.B0;
    const register unsigned short int INLVLB1 = 1;
    sbit  INLVLB1_bit at INLVLB.B1;
    const register unsigned short int INLVLB2 = 2;
    sbit  INLVLB2_bit at INLVLB.B2;
    const register unsigned short int INLVLB3 = 3;
    sbit  INLVLB3_bit at INLVLB.B3;
    const register unsigned short int INLVLB4 = 4;
    sbit  INLVLB4_bit at INLVLB.B4;
    const register unsigned short int INLVLB5 = 5;
    sbit  INLVLB5_bit at INLVLB.B5;
    const register unsigned short int INLVLB6 = 6;
    sbit  INLVLB6_bit at INLVLB.B6;
    const register unsigned short int INLVLB7 = 7;
    sbit  INLVLB7_bit at INLVLB.B7;

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
    const register unsigned short int INLVLC6 = 6;
    sbit  INLVLC6_bit at INLVLC.B6;
    const register unsigned short int INLVLC7 = 7;
    sbit  INLVLC7_bit at INLVLC.B7;

    // INLVLE bits
    const register unsigned short int INLVLE3 = 3;
    sbit  INLVLE3_bit at INLVLE.B3;

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
    const register unsigned short int IOCAP6 = 6;
    sbit  IOCAP6_bit at IOCAP.B6;
    const register unsigned short int IOCAP7 = 7;
    sbit  IOCAP7_bit at IOCAP.B7;

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
    const register unsigned short int IOCAN6 = 6;
    sbit  IOCAN6_bit at IOCAN.B6;
    const register unsigned short int IOCAN7 = 7;
    sbit  IOCAN7_bit at IOCAN.B7;

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
    const register unsigned short int IOCAF6 = 6;
    sbit  IOCAF6_bit at IOCAF.B6;
    const register unsigned short int IOCAF7 = 7;
    sbit  IOCAF7_bit at IOCAF.B7;

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
    const register unsigned short int IOCCP6 = 6;
    sbit  IOCCP6_bit at IOCCP.B6;
    const register unsigned short int IOCCP7 = 7;
    sbit  IOCCP7_bit at IOCCP.B7;

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
    const register unsigned short int IOCCN6 = 6;
    sbit  IOCCN6_bit at IOCCN.B6;
    const register unsigned short int IOCCN7 = 7;
    sbit  IOCCN7_bit at IOCCN.B7;

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
    const register unsigned short int IOCCF6 = 6;
    sbit  IOCCF6_bit at IOCCF.B6;
    const register unsigned short int IOCCF7 = 7;
    sbit  IOCCF7_bit at IOCCF.B7;

    // IOCEP bits
    const register unsigned short int IOCEP3 = 3;
    sbit  IOCEP3_bit at IOCEP.B3;

    // IOCEN bits
    const register unsigned short int IOCEN3 = 3;
    sbit  IOCEN3_bit at IOCEN.B3;

    // IOCEF bits
    const register unsigned short int IOCEF3 = 3;
    sbit  IOCEF3_bit at IOCEF.B3;

    // OPA1CON bits
    const register unsigned short int OPA1PCH0 = 0;
    sbit  OPA1PCH0_bit at OPA1CON.B0;
    const register unsigned short int OPA1PCH1 = 1;
    sbit  OPA1PCH1_bit at OPA1CON.B1;
    const register unsigned short int OPA1PCH2 = 2;
    sbit  OPA1PCH2_bit at OPA1CON.B2;
    const register unsigned short int OPA1SP = 6;
    sbit  OPA1SP_bit at OPA1CON.B6;
    const register unsigned short int OPA1EN = 7;
    sbit  OPA1EN_bit at OPA1CON.B7;

    // OPA2CON bits
    const register unsigned short int OPA2PCH0 = 0;
    sbit  OPA2PCH0_bit at OPA2CON.B0;
    const register unsigned short int OPA2PCH1 = 1;
    sbit  OPA2PCH1_bit at OPA2CON.B1;
    const register unsigned short int OPA2PCH2 = 2;
    sbit  OPA2PCH2_bit at OPA2CON.B2;
    const register unsigned short int OPA2SP = 6;
    sbit  OPA2SP_bit at OPA2CON.B6;
    const register unsigned short int OPA2EN = 7;
    sbit  OPA2EN_bit at OPA2CON.B7;

    // CLKRCON bits
    const register unsigned short int CLKRDIV0 = 0;
    sbit  CLKRDIV0_bit at CLKRCON.B0;
    const register unsigned short int CLKRDIV1 = 1;
    sbit  CLKRDIV1_bit at CLKRCON.B1;
    const register unsigned short int CLKRDIV2 = 2;
    sbit  CLKRDIV2_bit at CLKRCON.B2;
    const register unsigned short int CLKRDC0 = 3;
    sbit  CLKRDC0_bit at CLKRCON.B3;
    const register unsigned short int CLKRDC1 = 4;
    sbit  CLKRDC1_bit at CLKRCON.B4;
    const register unsigned short int CLKRSLR = 5;
    sbit  CLKRSLR_bit at CLKRCON.B5;
    const register unsigned short int CLKROE = 6;
    sbit  CLKROE_bit at CLKRCON.B6;
    const register unsigned short int CLKREN = 7;
    sbit  CLKREN_bit at CLKRCON.B7;

    // DAC2CON0 bits
    const register unsigned short int DAC2OE2 = 4;
    sbit  DAC2OE2_bit at DAC2CON0.B4;
    const register unsigned short int DAC2OE1 = 5;
    sbit  DAC2OE1_bit at DAC2CON0.B5;
    const register unsigned short int DAC2EN = 7;
    sbit  DAC2EN_bit at DAC2CON0.B7;

    // DAC3CON0 bits
    const register unsigned short int DAC3OE2 = 4;
    sbit  DAC3OE2_bit at DAC3CON0.B4;
    const register unsigned short int DAC3OE1 = 5;
    sbit  DAC3OE1_bit at DAC3CON0.B5;
    const register unsigned short int DAC3EN = 7;
    sbit  DAC3EN_bit at DAC3CON0.B7;

    // DAC4CON0 bits
    const register unsigned short int DAC4OE2 = 4;
    sbit  DAC4OE2_bit at DAC4CON0.B4;
    const register unsigned short int DAC4OE1 = 5;
    sbit  DAC4OE1_bit at DAC4CON0.B5;
    const register unsigned short int DAC4EN = 7;
    sbit  DAC4EN_bit at DAC4CON0.B7;

    // PSMC1CON bits
    const register unsigned short int P1DBRE = 4;
    sbit  P1DBRE_bit at PSMC1CON.B4;
    const register unsigned short int P1DBFE = 5;
    sbit  P1DBFE_bit at PSMC1CON.B5;
    const register unsigned short int PSMC1LD = 6;
    sbit  PSMC1LD_bit at PSMC1CON.B6;
    const register unsigned short int PSMC1EN = 7;
    sbit  PSMC1EN_bit at PSMC1CON.B7;
    const register unsigned short int P1MODE0 = 0;
    sbit  P1MODE0_bit at PSMC1CON.B0;
    const register unsigned short int P1MODE1 = 1;
    sbit  P1MODE1_bit at PSMC1CON.B1;
    const register unsigned short int P1MODE2 = 2;
    sbit  P1MODE2_bit at PSMC1CON.B2;
    const register unsigned short int P1MODE3 = 3;
    sbit  P1MODE3_bit at PSMC1CON.B3;

    // PSMC1MDL bits
    const register unsigned short int P1MDLBIT = 5;
    sbit  P1MDLBIT_bit at PSMC1MDL.B5;
    const register unsigned short int P1MDLPOL = 6;
    sbit  P1MDLPOL_bit at PSMC1MDL.B6;
    const register unsigned short int P1MDLEN = 7;
    sbit  P1MDLEN_bit at PSMC1MDL.B7;
    const register unsigned short int P1MSRC0 = 0;
    sbit  P1MSRC0_bit at PSMC1MDL.B0;
    const register unsigned short int P1MSRC1 = 1;
    sbit  P1MSRC1_bit at PSMC1MDL.B1;
    const register unsigned short int P1MSRC2 = 2;
    sbit  P1MSRC2_bit at PSMC1MDL.B2;
    const register unsigned short int P1MSRC3 = 3;
    sbit  P1MSRC3_bit at PSMC1MDL.B3;

    // PSMC1SYNC bits
    const register unsigned short int P1SYNC0 = 0;
    sbit  P1SYNC0_bit at PSMC1SYNC.B0;
    const register unsigned short int P1SYNC1 = 1;
    sbit  P1SYNC1_bit at PSMC1SYNC.B1;
    const register unsigned short int P1SYNC2 = 2;
    sbit  P1SYNC2_bit at PSMC1SYNC.B2;
    const register unsigned short int P1DCPOL = 5;
    sbit  P1DCPOL_bit at PSMC1SYNC.B5;
    const register unsigned short int P1PRPOL = 6;
    sbit  P1PRPOL_bit at PSMC1SYNC.B6;
    const register unsigned short int P1POFST = 7;
    sbit  P1POFST_bit at PSMC1SYNC.B7;

    // PSMC1CLK bits
    const register unsigned short int P1CSRC0 = 0;
    sbit  P1CSRC0_bit at PSMC1CLK.B0;
    const register unsigned short int P1CSRC1 = 1;
    sbit  P1CSRC1_bit at PSMC1CLK.B1;
    const register unsigned short int P1CPRE0 = 4;
    sbit  P1CPRE0_bit at PSMC1CLK.B4;
    const register unsigned short int P1CPRE1 = 5;
    sbit  P1CPRE1_bit at PSMC1CLK.B5;

    // PSMC1OEN bits
    const register unsigned short int P1OEA = 0;
    sbit  P1OEA_bit at PSMC1OEN.B0;
    const register unsigned short int P1OEB = 1;
    sbit  P1OEB_bit at PSMC1OEN.B1;
    const register unsigned short int P1OEC = 2;
    sbit  P1OEC_bit at PSMC1OEN.B2;
    const register unsigned short int P1OED = 3;
    sbit  P1OED_bit at PSMC1OEN.B3;
    const register unsigned short int P1OEE = 4;
    sbit  P1OEE_bit at PSMC1OEN.B4;
    const register unsigned short int P1OEF = 5;
    sbit  P1OEF_bit at PSMC1OEN.B5;

    // PSMC1POL bits
    const register unsigned short int P1POLA = 0;
    sbit  P1POLA_bit at PSMC1POL.B0;
    const register unsigned short int P1POLB = 1;
    sbit  P1POLB_bit at PSMC1POL.B1;
    const register unsigned short int P1POLC = 2;
    sbit  P1POLC_bit at PSMC1POL.B2;
    const register unsigned short int P1POLD = 3;
    sbit  P1POLD_bit at PSMC1POL.B3;
    const register unsigned short int P1POLE = 4;
    sbit  P1POLE_bit at PSMC1POL.B4;
    const register unsigned short int P1POLF = 5;
    sbit  P1POLF_bit at PSMC1POL.B5;
    const register unsigned short int P1INPOL = 6;
    sbit  P1INPOL_bit at PSMC1POL.B6;

    // PSMC1BLNK bits
    const register unsigned short int P1REBM0 = 0;
    sbit  P1REBM0_bit at PSMC1BLNK.B0;
    const register unsigned short int P1REBM1 = 1;
    sbit  P1REBM1_bit at PSMC1BLNK.B1;
    const register unsigned short int P1FEBM0 = 4;
    sbit  P1FEBM0_bit at PSMC1BLNK.B4;
    const register unsigned short int P1FEBM1 = 5;
    sbit  P1FEBM1_bit at PSMC1BLNK.B5;

    // PSMC1REBS bits
    const register unsigned short int P1REBSC1 = 1;
    sbit  P1REBSC1_bit at PSMC1REBS.B1;
    const register unsigned short int P1REBSC2 = 2;
    sbit  P1REBSC2_bit at PSMC1REBS.B2;
    const register unsigned short int P1REBSC3 = 3;
    sbit  P1REBSC3_bit at PSMC1REBS.B3;
    const register unsigned short int P1REBSC4 = 4;
    sbit  P1REBSC4_bit at PSMC1REBS.B4;
    const register unsigned short int P1REBSIN = 7;
    sbit  P1REBSIN_bit at PSMC1REBS.B7;

    // PSMC1FEBS bits
    const register unsigned short int P1FEBSC1 = 1;
    sbit  P1FEBSC1_bit at PSMC1FEBS.B1;
    const register unsigned short int P1FEBSC2 = 2;
    sbit  P1FEBSC2_bit at PSMC1FEBS.B2;
    const register unsigned short int P1FEBSC3 = 3;
    sbit  P1FEBSC3_bit at PSMC1FEBS.B3;
    const register unsigned short int P1FEBSC4 = 4;
    sbit  P1FEBSC4_bit at PSMC1FEBS.B4;
    const register unsigned short int P1FEBSIN = 7;
    sbit  P1FEBSIN_bit at PSMC1FEBS.B7;

    // PSMC1PHS bits
    const register unsigned short int P1PHST = 0;
    sbit  P1PHST_bit at PSMC1PHS.B0;
    const register unsigned short int P1PHSC1 = 1;
    sbit  P1PHSC1_bit at PSMC1PHS.B1;
    const register unsigned short int P1PHSC2 = 2;
    sbit  P1PHSC2_bit at PSMC1PHS.B2;
    const register unsigned short int P1PHSC3 = 3;
    sbit  P1PHSC3_bit at PSMC1PHS.B3;
    const register unsigned short int P1PHSC4 = 4;
    sbit  P1PHSC4_bit at PSMC1PHS.B4;
    const register unsigned short int P1PHSIN = 7;
    sbit  P1PHSIN_bit at PSMC1PHS.B7;

    // PSMC1DCS bits
    const register unsigned short int P1DCST = 0;
    sbit  P1DCST_bit at PSMC1DCS.B0;
    const register unsigned short int P1DCSC1 = 1;
    sbit  P1DCSC1_bit at PSMC1DCS.B1;
    const register unsigned short int P1DCSC2 = 2;
    sbit  P1DCSC2_bit at PSMC1DCS.B2;
    const register unsigned short int P1DCSC3 = 3;
    sbit  P1DCSC3_bit at PSMC1DCS.B3;
    const register unsigned short int P1DCSC4 = 4;
    sbit  P1DCSC4_bit at PSMC1DCS.B4;
    const register unsigned short int P1DCSIN = 7;
    sbit  P1DCSIN_bit at PSMC1DCS.B7;

    // PSMC1PRS bits
    const register unsigned short int P1PRST = 0;
    sbit  P1PRST_bit at PSMC1PRS.B0;
    const register unsigned short int P1PRSC1 = 1;
    sbit  P1PRSC1_bit at PSMC1PRS.B1;
    const register unsigned short int P1PRSC2 = 2;
    sbit  P1PRSC2_bit at PSMC1PRS.B2;
    const register unsigned short int P1PRSC3 = 3;
    sbit  P1PRSC3_bit at PSMC1PRS.B3;
    const register unsigned short int P1PRSC4 = 4;
    sbit  P1PRSC4_bit at PSMC1PRS.B4;
    const register unsigned short int P1PRSIN = 7;
    sbit  P1PRSIN_bit at PSMC1PRS.B7;

    // PSMC1ASDC bits
    const register unsigned short int P1ASDOV = 0;
    sbit  P1ASDOV_bit at PSMC1ASDC.B0;
    const register unsigned short int P1ARSEN = 5;
    sbit  P1ARSEN_bit at PSMC1ASDC.B5;
    const register unsigned short int P1ASDEN = 6;
    sbit  P1ASDEN_bit at PSMC1ASDC.B6;
    const register unsigned short int P1ASE = 7;
    sbit  P1ASE_bit at PSMC1ASDC.B7;

    // PSMC1ASDL bits
    const register unsigned short int P1ASDLA = 0;
    sbit  P1ASDLA_bit at PSMC1ASDL.B0;
    const register unsigned short int P1ASDLB = 1;
    sbit  P1ASDLB_bit at PSMC1ASDL.B1;
    const register unsigned short int P1ASDLC = 2;
    sbit  P1ASDLC_bit at PSMC1ASDL.B2;
    const register unsigned short int P1ASDLD = 3;
    sbit  P1ASDLD_bit at PSMC1ASDL.B3;
    const register unsigned short int P1ASDLE = 4;
    sbit  P1ASDLE_bit at PSMC1ASDL.B4;
    const register unsigned short int P1ASDLF = 5;
    sbit  P1ASDLF_bit at PSMC1ASDL.B5;

    // PSMC1ASDS bits
    const register unsigned short int P1ASDSC1 = 1;
    sbit  P1ASDSC1_bit at PSMC1ASDS.B1;
    const register unsigned short int P1ASDSC2 = 2;
    sbit  P1ASDSC2_bit at PSMC1ASDS.B2;
    const register unsigned short int P1ASDSC3 = 3;
    sbit  P1ASDSC3_bit at PSMC1ASDS.B3;
    const register unsigned short int P1ASDSC4 = 4;
    sbit  P1ASDSC4_bit at PSMC1ASDS.B4;
    const register unsigned short int P1ASDSIN = 7;
    sbit  P1ASDSIN_bit at PSMC1ASDS.B7;

    // PSMC1INT bits
    const register unsigned short int P1TPRIF = 0;
    sbit  P1TPRIF_bit at PSMC1INT.B0;
    const register unsigned short int P1TDCIF = 1;
    sbit  P1TDCIF_bit at PSMC1INT.B1;
    const register unsigned short int P1TPHIF = 2;
    sbit  P1TPHIF_bit at PSMC1INT.B2;
    const register unsigned short int P1TOVIF = 3;
    sbit  P1TOVIF_bit at PSMC1INT.B3;
    const register unsigned short int P1TPRIE = 4;
    sbit  P1TPRIE_bit at PSMC1INT.B4;
    const register unsigned short int P1TDCIE = 5;
    sbit  P1TDCIE_bit at PSMC1INT.B5;
    const register unsigned short int P1TPHIE = 6;
    sbit  P1TPHIE_bit at PSMC1INT.B6;
    const register unsigned short int P1TOVIE = 7;
    sbit  P1TOVIE_bit at PSMC1INT.B7;

    // PSMC1PHL bits
    const register unsigned short int PSMC1PH0 = 0;
    sbit  PSMC1PH0_bit at PSMC1PHL.B0;
    const register unsigned short int PSMC1PH1 = 1;
    sbit  PSMC1PH1_bit at PSMC1PHL.B1;
    const register unsigned short int PSMC1PH2 = 2;
    sbit  PSMC1PH2_bit at PSMC1PHL.B2;
    const register unsigned short int PSMC1PH3 = 3;
    sbit  PSMC1PH3_bit at PSMC1PHL.B3;
    const register unsigned short int PSMC1PH4 = 4;
    sbit  PSMC1PH4_bit at PSMC1PHL.B4;
    const register unsigned short int PSMC1PH5 = 5;
    sbit  PSMC1PH5_bit at PSMC1PHL.B5;
    const register unsigned short int PSMC1PH6 = 6;
    sbit  PSMC1PH6_bit at PSMC1PHL.B6;
    const register unsigned short int PSMC1PH7 = 7;
    sbit  PSMC1PH7_bit at PSMC1PHL.B7;

    // PSMC1PHH bits
    const register unsigned short int PSMC1PH8 = 0;
    sbit  PSMC1PH8_bit at PSMC1PHH.B0;
    const register unsigned short int PSMC1PH9 = 1;
    sbit  PSMC1PH9_bit at PSMC1PHH.B1;
    const register unsigned short int PSMC1PH10 = 2;
    sbit  PSMC1PH10_bit at PSMC1PHH.B2;
    const register unsigned short int PSMC1PH11 = 3;
    sbit  PSMC1PH11_bit at PSMC1PHH.B3;
    const register unsigned short int PSMC1PH12 = 4;
    sbit  PSMC1PH12_bit at PSMC1PHH.B4;
    const register unsigned short int PSMC1PH13 = 5;
    sbit  PSMC1PH13_bit at PSMC1PHH.B5;
    const register unsigned short int PSMC1PH14 = 6;
    sbit  PSMC1PH14_bit at PSMC1PHH.B6;
    const register unsigned short int PSMC1PH15 = 7;
    sbit  PSMC1PH15_bit at PSMC1PHH.B7;

    // PSMC1DCL bits
    const register unsigned short int PSMC1DC0 = 0;
    sbit  PSMC1DC0_bit at PSMC1DCL.B0;
    const register unsigned short int PSMC1DC1 = 1;
    sbit  PSMC1DC1_bit at PSMC1DCL.B1;
    const register unsigned short int PSMC1DC2 = 2;
    sbit  PSMC1DC2_bit at PSMC1DCL.B2;
    const register unsigned short int PSMC1DC3 = 3;
    sbit  PSMC1DC3_bit at PSMC1DCL.B3;
    const register unsigned short int PSMC1DC4 = 4;
    sbit  PSMC1DC4_bit at PSMC1DCL.B4;
    const register unsigned short int PSMC1DC5 = 5;
    sbit  PSMC1DC5_bit at PSMC1DCL.B5;
    const register unsigned short int PSMC1DC6 = 6;
    sbit  PSMC1DC6_bit at PSMC1DCL.B6;
    const register unsigned short int PSMC1DC7 = 7;
    sbit  PSMC1DC7_bit at PSMC1DCL.B7;

    // PSMC1DCH bits
    const register unsigned short int PSMC1DC8 = 0;
    sbit  PSMC1DC8_bit at PSMC1DCH.B0;
    const register unsigned short int PSMC1DC9 = 1;
    sbit  PSMC1DC9_bit at PSMC1DCH.B1;
    const register unsigned short int PSMC1DC10 = 2;
    sbit  PSMC1DC10_bit at PSMC1DCH.B2;
    const register unsigned short int PSMC1DC11 = 3;
    sbit  PSMC1DC11_bit at PSMC1DCH.B3;
    const register unsigned short int PSMC1DC12 = 4;
    sbit  PSMC1DC12_bit at PSMC1DCH.B4;
    const register unsigned short int PSMC1DC13 = 5;
    sbit  PSMC1DC13_bit at PSMC1DCH.B5;
    const register unsigned short int PSMC1DC14 = 6;
    sbit  PSMC1DC14_bit at PSMC1DCH.B6;
    const register unsigned short int PSMC1DC15 = 7;
    sbit  PSMC1DC15_bit at PSMC1DCH.B7;

    // PSMC1PRL bits
    const register unsigned short int PSMC1PR0 = 0;
    sbit  PSMC1PR0_bit at PSMC1PRL.B0;
    const register unsigned short int PSMC1PR1 = 1;
    sbit  PSMC1PR1_bit at PSMC1PRL.B1;
    const register unsigned short int PSMC1PR2 = 2;
    sbit  PSMC1PR2_bit at PSMC1PRL.B2;
    const register unsigned short int PSMC1PR3 = 3;
    sbit  PSMC1PR3_bit at PSMC1PRL.B3;
    const register unsigned short int PSMC1PR4 = 4;
    sbit  PSMC1PR4_bit at PSMC1PRL.B4;
    const register unsigned short int PSMC1PR5 = 5;
    sbit  PSMC1PR5_bit at PSMC1PRL.B5;
    const register unsigned short int PSMC1PR6 = 6;
    sbit  PSMC1PR6_bit at PSMC1PRL.B6;
    const register unsigned short int PSMC1PR7 = 7;
    sbit  PSMC1PR7_bit at PSMC1PRL.B7;

    // PSMC1PRH bits
    const register unsigned short int PSMC1PR8 = 0;
    sbit  PSMC1PR8_bit at PSMC1PRH.B0;
    const register unsigned short int PSMC1PR9 = 1;
    sbit  PSMC1PR9_bit at PSMC1PRH.B1;
    const register unsigned short int PSMC1PR10 = 2;
    sbit  PSMC1PR10_bit at PSMC1PRH.B2;
    const register unsigned short int PSMC1PR11 = 3;
    sbit  PSMC1PR11_bit at PSMC1PRH.B3;
    const register unsigned short int PSMC1PR12 = 4;
    sbit  PSMC1PR12_bit at PSMC1PRH.B4;
    const register unsigned short int PSMC1PR13 = 5;
    sbit  PSMC1PR13_bit at PSMC1PRH.B5;
    const register unsigned short int PSMC1PR14 = 6;
    sbit  PSMC1PR14_bit at PSMC1PRH.B6;
    const register unsigned short int PSMC1PR15 = 7;
    sbit  PSMC1PR15_bit at PSMC1PRH.B7;

    // PSMC1TMRL bits
    const register unsigned short int PSMC1TMR0 = 0;
    sbit  PSMC1TMR0_bit at PSMC1TMRL.B0;
    const register unsigned short int PSMC1TMR1 = 1;
    sbit  PSMC1TMR1_bit at PSMC1TMRL.B1;
    const register unsigned short int PSMC1TMR2 = 2;
    sbit  PSMC1TMR2_bit at PSMC1TMRL.B2;
    const register unsigned short int PSMC1TMR3 = 3;
    sbit  PSMC1TMR3_bit at PSMC1TMRL.B3;
    const register unsigned short int PSMC1TMR4 = 4;
    sbit  PSMC1TMR4_bit at PSMC1TMRL.B4;
    const register unsigned short int PSMC1TMR5 = 5;
    sbit  PSMC1TMR5_bit at PSMC1TMRL.B5;
    const register unsigned short int PSMC1TMR6 = 6;
    sbit  PSMC1TMR6_bit at PSMC1TMRL.B6;
    const register unsigned short int PSMC1TMR7 = 7;
    sbit  PSMC1TMR7_bit at PSMC1TMRL.B7;

    // PSMC1TMRH bits
    const register unsigned short int PSMC1TMR8 = 0;
    sbit  PSMC1TMR8_bit at PSMC1TMRH.B0;
    const register unsigned short int PSMC1TMR9 = 1;
    sbit  PSMC1TMR9_bit at PSMC1TMRH.B1;
    const register unsigned short int PSMC1TMR10 = 2;
    sbit  PSMC1TMR10_bit at PSMC1TMRH.B2;
    const register unsigned short int PSMC1TMR11 = 3;
    sbit  PSMC1TMR11_bit at PSMC1TMRH.B3;
    const register unsigned short int PSMC1TMR12 = 4;
    sbit  PSMC1TMR12_bit at PSMC1TMRH.B4;
    const register unsigned short int PSMC1TMR13 = 5;
    sbit  PSMC1TMR13_bit at PSMC1TMRH.B5;
    const register unsigned short int PSMC1TMR14 = 6;
    sbit  PSMC1TMR14_bit at PSMC1TMRH.B6;
    const register unsigned short int PSMC1TMR15 = 7;
    sbit  PSMC1TMR15_bit at PSMC1TMRH.B7;

    // PSMC1DBR bits
    const register unsigned short int PSMC1DBR0 = 0;
    sbit  PSMC1DBR0_bit at PSMC1DBR.B0;
    const register unsigned short int PSMC1DBR1 = 1;
    sbit  PSMC1DBR1_bit at PSMC1DBR.B1;
    const register unsigned short int PSMC1DBR2 = 2;
    sbit  PSMC1DBR2_bit at PSMC1DBR.B2;
    const register unsigned short int PSMC1DBR3 = 3;
    sbit  PSMC1DBR3_bit at PSMC1DBR.B3;
    const register unsigned short int PSMC1DBR4 = 4;
    sbit  PSMC1DBR4_bit at PSMC1DBR.B4;
    const register unsigned short int PSMC1DBR5 = 5;
    sbit  PSMC1DBR5_bit at PSMC1DBR.B5;
    const register unsigned short int PSMC1DBR6 = 6;
    sbit  PSMC1DBR6_bit at PSMC1DBR.B6;
    const register unsigned short int PSMC1DBR7 = 7;
    sbit  PSMC1DBR7_bit at PSMC1DBR.B7;

    // PSMC1DBF bits
    const register unsigned short int PSMC1DBF0 = 0;
    sbit  PSMC1DBF0_bit at PSMC1DBF.B0;
    const register unsigned short int PSMC1DBF1 = 1;
    sbit  PSMC1DBF1_bit at PSMC1DBF.B1;
    const register unsigned short int PSMC1DBF2 = 2;
    sbit  PSMC1DBF2_bit at PSMC1DBF.B2;
    const register unsigned short int PSMC1DBF3 = 3;
    sbit  PSMC1DBF3_bit at PSMC1DBF.B3;
    const register unsigned short int PSMC1DBF4 = 4;
    sbit  PSMC1DBF4_bit at PSMC1DBF.B4;
    const register unsigned short int PSMC1DBF5 = 5;
    sbit  PSMC1DBF5_bit at PSMC1DBF.B5;
    const register unsigned short int PSMC1DBF6 = 6;
    sbit  PSMC1DBF6_bit at PSMC1DBF.B6;
    const register unsigned short int PSMC1DBF7 = 7;
    sbit  PSMC1DBF7_bit at PSMC1DBF.B7;

    // PSMC1BLKR bits
    const register unsigned short int PSMC1BLKR0 = 0;
    sbit  PSMC1BLKR0_bit at PSMC1BLKR.B0;
    const register unsigned short int PSMC1BLKR1 = 1;
    sbit  PSMC1BLKR1_bit at PSMC1BLKR.B1;
    const register unsigned short int PSMC1BLKR2 = 2;
    sbit  PSMC1BLKR2_bit at PSMC1BLKR.B2;
    const register unsigned short int PSMC1BLKR3 = 3;
    sbit  PSMC1BLKR3_bit at PSMC1BLKR.B3;
    const register unsigned short int PSMC1BLKR4 = 4;
    sbit  PSMC1BLKR4_bit at PSMC1BLKR.B4;
    const register unsigned short int PSMC1BLKR5 = 5;
    sbit  PSMC1BLKR5_bit at PSMC1BLKR.B5;
    const register unsigned short int PSMC1BLKR6 = 6;
    sbit  PSMC1BLKR6_bit at PSMC1BLKR.B6;
    const register unsigned short int PSMC1BLKR7 = 7;
    sbit  PSMC1BLKR7_bit at PSMC1BLKR.B7;

    // PSMC1BLKF bits
    const register unsigned short int PSMC1BLKF0 = 0;
    sbit  PSMC1BLKF0_bit at PSMC1BLKF.B0;
    const register unsigned short int PSMC1BLKF1 = 1;
    sbit  PSMC1BLKF1_bit at PSMC1BLKF.B1;
    const register unsigned short int PSMC1BLKF2 = 2;
    sbit  PSMC1BLKF2_bit at PSMC1BLKF.B2;
    const register unsigned short int PSMC1BLKF3 = 3;
    sbit  PSMC1BLKF3_bit at PSMC1BLKF.B3;
    const register unsigned short int PSMC1BLKF4 = 4;
    sbit  PSMC1BLKF4_bit at PSMC1BLKF.B4;
    const register unsigned short int PSMC1BLKF5 = 5;
    sbit  PSMC1BLKF5_bit at PSMC1BLKF.B5;
    const register unsigned short int PSMC1BLKF6 = 6;
    sbit  PSMC1BLKF6_bit at PSMC1BLKF.B6;
    const register unsigned short int PSMC1BLKF7 = 7;
    sbit  PSMC1BLKF7_bit at PSMC1BLKF.B7;

    // PSMC1FFA bits
    const register unsigned short int PSMC1FFA0 = 0;
    sbit  PSMC1FFA0_bit at PSMC1FFA.B0;
    const register unsigned short int PSMC1FFA1 = 1;
    sbit  PSMC1FFA1_bit at PSMC1FFA.B1;
    const register unsigned short int PSMC1FFA2 = 2;
    sbit  PSMC1FFA2_bit at PSMC1FFA.B2;
    const register unsigned short int PSMC1FFA3 = 3;
    sbit  PSMC1FFA3_bit at PSMC1FFA.B3;

    // PSMC1STR0 bits
    const register unsigned short int P1STRA = 0;
    sbit  P1STRA_bit at PSMC1STR0.B0;
    const register unsigned short int P1STRB = 1;
    sbit  P1STRB_bit at PSMC1STR0.B1;
    const register unsigned short int P1STRC = 2;
    sbit  P1STRC_bit at PSMC1STR0.B2;
    const register unsigned short int P1STRD = 3;
    sbit  P1STRD_bit at PSMC1STR0.B3;
    const register unsigned short int P1STRE = 4;
    sbit  P1STRE_bit at PSMC1STR0.B4;
    const register unsigned short int P1STRF = 5;
    sbit  P1STRF_bit at PSMC1STR0.B5;

    // PSMC1STR1 bits
    const register unsigned short int P1HSMEN = 0;
    sbit  P1HSMEN_bit at PSMC1STR1.B0;
    const register unsigned short int P1LSMEN = 1;
    sbit  P1LSMEN_bit at PSMC1STR1.B1;
    const register unsigned short int P1SSYNC = 7;
    sbit  P1SSYNC_bit at PSMC1STR1.B7;

    // PSMC2CON bits
    const register unsigned short int P2DBRE = 4;
    sbit  P2DBRE_bit at PSMC2CON.B4;
    const register unsigned short int P2DBFE = 5;
    sbit  P2DBFE_bit at PSMC2CON.B5;
    const register unsigned short int PSMC2LD = 6;
    sbit  PSMC2LD_bit at PSMC2CON.B6;
    const register unsigned short int PSMC2EN = 7;
    sbit  PSMC2EN_bit at PSMC2CON.B7;
    const register unsigned short int P2MODE0 = 0;
    sbit  P2MODE0_bit at PSMC2CON.B0;
    const register unsigned short int P2MODE1 = 1;
    sbit  P2MODE1_bit at PSMC2CON.B1;
    const register unsigned short int P2MODE2 = 2;
    sbit  P2MODE2_bit at PSMC2CON.B2;
    const register unsigned short int P2MODE3 = 3;
    sbit  P2MODE3_bit at PSMC2CON.B3;

    // PSMC2MDL bits
    const register unsigned short int P2MDLBIT = 5;
    sbit  P2MDLBIT_bit at PSMC2MDL.B5;
    const register unsigned short int P2MDLPOL = 6;
    sbit  P2MDLPOL_bit at PSMC2MDL.B6;
    const register unsigned short int P2MDLEN = 7;
    sbit  P2MDLEN_bit at PSMC2MDL.B7;
    const register unsigned short int P2MSRC0 = 0;
    sbit  P2MSRC0_bit at PSMC2MDL.B0;
    const register unsigned short int P2MSRC1 = 1;
    sbit  P2MSRC1_bit at PSMC2MDL.B1;
    const register unsigned short int P2MSRC2 = 2;
    sbit  P2MSRC2_bit at PSMC2MDL.B2;
    const register unsigned short int P2MSRC3 = 3;
    sbit  P2MSRC3_bit at PSMC2MDL.B3;

    // PSMC2SYNC bits
    const register unsigned short int P2SYNC0 = 0;
    sbit  P2SYNC0_bit at PSMC2SYNC.B0;
    const register unsigned short int P2SYNC1 = 1;
    sbit  P2SYNC1_bit at PSMC2SYNC.B1;
    const register unsigned short int P2SYNC2 = 2;
    sbit  P2SYNC2_bit at PSMC2SYNC.B2;
    const register unsigned short int P2DCPOL = 5;
    sbit  P2DCPOL_bit at PSMC2SYNC.B5;
    const register unsigned short int P2PRPOL = 6;
    sbit  P2PRPOL_bit at PSMC2SYNC.B6;
    const register unsigned short int P2POFST = 7;
    sbit  P2POFST_bit at PSMC2SYNC.B7;

    // PSMC2CLK bits
    const register unsigned short int P2CSRC0 = 0;
    sbit  P2CSRC0_bit at PSMC2CLK.B0;
    const register unsigned short int P2CSRC1 = 1;
    sbit  P2CSRC1_bit at PSMC2CLK.B1;
    const register unsigned short int P2CPRE0 = 4;
    sbit  P2CPRE0_bit at PSMC2CLK.B4;
    const register unsigned short int P2CPRE1 = 5;
    sbit  P2CPRE1_bit at PSMC2CLK.B5;

    // PSMC2OEN bits
    const register unsigned short int P2OEA = 0;
    sbit  P2OEA_bit at PSMC2OEN.B0;
    const register unsigned short int P2OEB = 1;
    sbit  P2OEB_bit at PSMC2OEN.B1;

    // PSMC2POL bits
    const register unsigned short int P2POLA = 0;
    sbit  P2POLA_bit at PSMC2POL.B0;
    const register unsigned short int P2POLB = 1;
    sbit  P2POLB_bit at PSMC2POL.B1;
    const register unsigned short int P2INPOL = 6;
    sbit  P2INPOL_bit at PSMC2POL.B6;

    // PSMC2BLNK bits
    const register unsigned short int P2REBM0 = 0;
    sbit  P2REBM0_bit at PSMC2BLNK.B0;
    const register unsigned short int P2REBM1 = 1;
    sbit  P2REBM1_bit at PSMC2BLNK.B1;
    const register unsigned short int P2FEBM0 = 4;
    sbit  P2FEBM0_bit at PSMC2BLNK.B4;
    const register unsigned short int P2FEBM1 = 5;
    sbit  P2FEBM1_bit at PSMC2BLNK.B5;

    // PSMC2REBS bits
    const register unsigned short int P2REBSC1 = 1;
    sbit  P2REBSC1_bit at PSMC2REBS.B1;
    const register unsigned short int P2REBSC2 = 2;
    sbit  P2REBSC2_bit at PSMC2REBS.B2;
    const register unsigned short int P2REBSC3 = 3;
    sbit  P2REBSC3_bit at PSMC2REBS.B3;
    const register unsigned short int P2REBSC4 = 4;
    sbit  P2REBSC4_bit at PSMC2REBS.B4;
    const register unsigned short int P2REBSIN = 7;
    sbit  P2REBSIN_bit at PSMC2REBS.B7;

    // PSMC2FEBS bits
    const register unsigned short int P2FEBSC1 = 1;
    sbit  P2FEBSC1_bit at PSMC2FEBS.B1;
    const register unsigned short int P2FEBSC2 = 2;
    sbit  P2FEBSC2_bit at PSMC2FEBS.B2;
    const register unsigned short int P2FEBSC3 = 3;
    sbit  P2FEBSC3_bit at PSMC2FEBS.B3;
    const register unsigned short int P2FEBSC4 = 4;
    sbit  P2FEBSC4_bit at PSMC2FEBS.B4;
    const register unsigned short int P2FEBSIN = 7;
    sbit  P2FEBSIN_bit at PSMC2FEBS.B7;

    // PSMC2PHS bits
    const register unsigned short int P2PHST = 0;
    sbit  P2PHST_bit at PSMC2PHS.B0;
    const register unsigned short int P2PHSC1 = 1;
    sbit  P2PHSC1_bit at PSMC2PHS.B1;
    const register unsigned short int P2PHSC2 = 2;
    sbit  P2PHSC2_bit at PSMC2PHS.B2;
    const register unsigned short int P2PHSC3 = 3;
    sbit  P2PHSC3_bit at PSMC2PHS.B3;
    const register unsigned short int P2PHSC4 = 4;
    sbit  P2PHSC4_bit at PSMC2PHS.B4;
    const register unsigned short int P2PHSIN = 7;
    sbit  P2PHSIN_bit at PSMC2PHS.B7;

    // PSMC2DCS bits
    const register unsigned short int P2DCST = 0;
    sbit  P2DCST_bit at PSMC2DCS.B0;
    const register unsigned short int P2DCSC1 = 1;
    sbit  P2DCSC1_bit at PSMC2DCS.B1;
    const register unsigned short int P2DCSC2 = 2;
    sbit  P2DCSC2_bit at PSMC2DCS.B2;
    const register unsigned short int P2DCSC3 = 3;
    sbit  P2DCSC3_bit at PSMC2DCS.B3;
    const register unsigned short int P2DCSC4 = 4;
    sbit  P2DCSC4_bit at PSMC2DCS.B4;
    const register unsigned short int P2DCSIN = 7;
    sbit  P2DCSIN_bit at PSMC2DCS.B7;

    // PSMC2PRS bits
    const register unsigned short int P2PRST = 0;
    sbit  P2PRST_bit at PSMC2PRS.B0;
    const register unsigned short int P2PRSC1 = 1;
    sbit  P2PRSC1_bit at PSMC2PRS.B1;
    const register unsigned short int P2PRSC2 = 2;
    sbit  P2PRSC2_bit at PSMC2PRS.B2;
    const register unsigned short int P2PRSC3 = 3;
    sbit  P2PRSC3_bit at PSMC2PRS.B3;
    const register unsigned short int P2PRSC4 = 4;
    sbit  P2PRSC4_bit at PSMC2PRS.B4;
    const register unsigned short int P2PRSIN = 7;
    sbit  P2PRSIN_bit at PSMC2PRS.B7;

    // PSMC2ASDC bits
    const register unsigned short int P2ASDOV = 0;
    sbit  P2ASDOV_bit at PSMC2ASDC.B0;
    const register unsigned short int P2ARSEN = 5;
    sbit  P2ARSEN_bit at PSMC2ASDC.B5;
    const register unsigned short int P2ASDEN = 6;
    sbit  P2ASDEN_bit at PSMC2ASDC.B6;
    const register unsigned short int P2ASE = 7;
    sbit  P2ASE_bit at PSMC2ASDC.B7;

    // PSMC2ASDL bits
    const register unsigned short int P2ASDLA = 0;
    sbit  P2ASDLA_bit at PSMC2ASDL.B0;
    const register unsigned short int P2ASDLB = 1;
    sbit  P2ASDLB_bit at PSMC2ASDL.B1;

    // PSMC2ASDS bits
    const register unsigned short int P2ASDSC1 = 1;
    sbit  P2ASDSC1_bit at PSMC2ASDS.B1;
    const register unsigned short int P2ASDSC2 = 2;
    sbit  P2ASDSC2_bit at PSMC2ASDS.B2;
    const register unsigned short int P2ASDSC3 = 3;
    sbit  P2ASDSC3_bit at PSMC2ASDS.B3;
    const register unsigned short int P2ASDSC4 = 4;
    sbit  P2ASDSC4_bit at PSMC2ASDS.B4;
    const register unsigned short int P2ASDSIN = 7;
    sbit  P2ASDSIN_bit at PSMC2ASDS.B7;

    // PSMC2INT bits
    const register unsigned short int P2TPRIF = 0;
    sbit  P2TPRIF_bit at PSMC2INT.B0;
    const register unsigned short int P2TDCIF = 1;
    sbit  P2TDCIF_bit at PSMC2INT.B1;
    const register unsigned short int P2TPHIF = 2;
    sbit  P2TPHIF_bit at PSMC2INT.B2;
    const register unsigned short int P2TOVIF = 3;
    sbit  P2TOVIF_bit at PSMC2INT.B3;
    const register unsigned short int P2TPRIE = 4;
    sbit  P2TPRIE_bit at PSMC2INT.B4;
    const register unsigned short int P2TDCIE = 5;
    sbit  P2TDCIE_bit at PSMC2INT.B5;
    const register unsigned short int P2TPHIE = 6;
    sbit  P2TPHIE_bit at PSMC2INT.B6;
    const register unsigned short int P2TOVIE = 7;
    sbit  P2TOVIE_bit at PSMC2INT.B7;

    // PSMC2PHL bits
    const register unsigned short int PSMC2PH0 = 0;
    sbit  PSMC2PH0_bit at PSMC2PHL.B0;
    const register unsigned short int PSMC2PH1 = 1;
    sbit  PSMC2PH1_bit at PSMC2PHL.B1;
    const register unsigned short int PSMC2PH2 = 2;
    sbit  PSMC2PH2_bit at PSMC2PHL.B2;
    const register unsigned short int PSMC2PH3 = 3;
    sbit  PSMC2PH3_bit at PSMC2PHL.B3;
    const register unsigned short int PSMC2PH4 = 4;
    sbit  PSMC2PH4_bit at PSMC2PHL.B4;
    const register unsigned short int PSMC2PH5 = 5;
    sbit  PSMC2PH5_bit at PSMC2PHL.B5;
    const register unsigned short int PSMC2PH6 = 6;
    sbit  PSMC2PH6_bit at PSMC2PHL.B6;
    const register unsigned short int PSMC2PH7 = 7;
    sbit  PSMC2PH7_bit at PSMC2PHL.B7;

    // PSMC2PHH bits
    const register unsigned short int PSMC2PH8 = 0;
    sbit  PSMC2PH8_bit at PSMC2PHH.B0;
    const register unsigned short int PSMC2PH9 = 1;
    sbit  PSMC2PH9_bit at PSMC2PHH.B1;
    const register unsigned short int PSMC2PH10 = 2;
    sbit  PSMC2PH10_bit at PSMC2PHH.B2;
    const register unsigned short int PSMC2PH11 = 3;
    sbit  PSMC2PH11_bit at PSMC2PHH.B3;
    const register unsigned short int PSMC2PH12 = 4;
    sbit  PSMC2PH12_bit at PSMC2PHH.B4;
    const register unsigned short int PSMC2PH13 = 5;
    sbit  PSMC2PH13_bit at PSMC2PHH.B5;
    const register unsigned short int PSMC2PH14 = 6;
    sbit  PSMC2PH14_bit at PSMC2PHH.B6;
    const register unsigned short int PSMC2PH15 = 7;
    sbit  PSMC2PH15_bit at PSMC2PHH.B7;

    // PSMC2DCL bits
    const register unsigned short int PSMC2DC0 = 0;
    sbit  PSMC2DC0_bit at PSMC2DCL.B0;
    const register unsigned short int PSMC2DC1 = 1;
    sbit  PSMC2DC1_bit at PSMC2DCL.B1;
    const register unsigned short int PSMC2DC2 = 2;
    sbit  PSMC2DC2_bit at PSMC2DCL.B2;
    const register unsigned short int PSMC2DC3 = 3;
    sbit  PSMC2DC3_bit at PSMC2DCL.B3;
    const register unsigned short int PSMC2DC4 = 4;
    sbit  PSMC2DC4_bit at PSMC2DCL.B4;
    const register unsigned short int PSMC2DC5 = 5;
    sbit  PSMC2DC5_bit at PSMC2DCL.B5;
    const register unsigned short int PSMC2DC6 = 6;
    sbit  PSMC2DC6_bit at PSMC2DCL.B6;
    const register unsigned short int PSMC2DC7 = 7;
    sbit  PSMC2DC7_bit at PSMC2DCL.B7;

    // PSMC2DCH bits
    const register unsigned short int PSMC2DC8 = 0;
    sbit  PSMC2DC8_bit at PSMC2DCH.B0;
    const register unsigned short int PSMC2DC9 = 1;
    sbit  PSMC2DC9_bit at PSMC2DCH.B1;
    const register unsigned short int PSMC2DC10 = 2;
    sbit  PSMC2DC10_bit at PSMC2DCH.B2;
    const register unsigned short int PSMC2DC11 = 3;
    sbit  PSMC2DC11_bit at PSMC2DCH.B3;
    const register unsigned short int PSMC2DC12 = 4;
    sbit  PSMC2DC12_bit at PSMC2DCH.B4;
    const register unsigned short int PSMC2DC13 = 5;
    sbit  PSMC2DC13_bit at PSMC2DCH.B5;
    const register unsigned short int PSMC2DC14 = 6;
    sbit  PSMC2DC14_bit at PSMC2DCH.B6;
    const register unsigned short int PSMC2DC15 = 7;
    sbit  PSMC2DC15_bit at PSMC2DCH.B7;

    // PSMC2PRL bits
    const register unsigned short int PSMC2PR0 = 0;
    sbit  PSMC2PR0_bit at PSMC2PRL.B0;
    const register unsigned short int PSMC2PR1 = 1;
    sbit  PSMC2PR1_bit at PSMC2PRL.B1;
    const register unsigned short int PSMC2PR2 = 2;
    sbit  PSMC2PR2_bit at PSMC2PRL.B2;
    const register unsigned short int PSMC2PR3 = 3;
    sbit  PSMC2PR3_bit at PSMC2PRL.B3;
    const register unsigned short int PSMC2PR4 = 4;
    sbit  PSMC2PR4_bit at PSMC2PRL.B4;
    const register unsigned short int PSMC2PR5 = 5;
    sbit  PSMC2PR5_bit at PSMC2PRL.B5;
    const register unsigned short int PSMC2PR6 = 6;
    sbit  PSMC2PR6_bit at PSMC2PRL.B6;
    const register unsigned short int PSMC2PR7 = 7;
    sbit  PSMC2PR7_bit at PSMC2PRL.B7;

    // PSMC2PRH bits
    const register unsigned short int PSMC2PR8 = 0;
    sbit  PSMC2PR8_bit at PSMC2PRH.B0;
    const register unsigned short int PSMC2PR9 = 1;
    sbit  PSMC2PR9_bit at PSMC2PRH.B1;
    const register unsigned short int PSMC2PR10 = 2;
    sbit  PSMC2PR10_bit at PSMC2PRH.B2;
    const register unsigned short int PSMC2PR11 = 3;
    sbit  PSMC2PR11_bit at PSMC2PRH.B3;
    const register unsigned short int PSMC2PR12 = 4;
    sbit  PSMC2PR12_bit at PSMC2PRH.B4;
    const register unsigned short int PSMC2PR13 = 5;
    sbit  PSMC2PR13_bit at PSMC2PRH.B5;
    const register unsigned short int PSMC2PR14 = 6;
    sbit  PSMC2PR14_bit at PSMC2PRH.B6;
    const register unsigned short int PSMC2PR15 = 7;
    sbit  PSMC2PR15_bit at PSMC2PRH.B7;

    // PSMC2TMRL bits
    const register unsigned short int PSMC2TMR0 = 0;
    sbit  PSMC2TMR0_bit at PSMC2TMRL.B0;
    const register unsigned short int PSMC2TMR1 = 1;
    sbit  PSMC2TMR1_bit at PSMC2TMRL.B1;
    const register unsigned short int PSMC2TMR2 = 2;
    sbit  PSMC2TMR2_bit at PSMC2TMRL.B2;
    const register unsigned short int PSMC2TMR3 = 3;
    sbit  PSMC2TMR3_bit at PSMC2TMRL.B3;
    const register unsigned short int PSMC2TMR4 = 4;
    sbit  PSMC2TMR4_bit at PSMC2TMRL.B4;
    const register unsigned short int PSMC2TMR5 = 5;
    sbit  PSMC2TMR5_bit at PSMC2TMRL.B5;
    const register unsigned short int PSMC2TMR6 = 6;
    sbit  PSMC2TMR6_bit at PSMC2TMRL.B6;
    const register unsigned short int PSMC2TMR7 = 7;
    sbit  PSMC2TMR7_bit at PSMC2TMRL.B7;

    // PSMC2TMRH bits
    const register unsigned short int PSMC2TMR8 = 0;
    sbit  PSMC2TMR8_bit at PSMC2TMRH.B0;
    const register unsigned short int PSMC2TMR9 = 1;
    sbit  PSMC2TMR9_bit at PSMC2TMRH.B1;
    const register unsigned short int PSMC2TMR10 = 2;
    sbit  PSMC2TMR10_bit at PSMC2TMRH.B2;
    const register unsigned short int PSMC2TMR11 = 3;
    sbit  PSMC2TMR11_bit at PSMC2TMRH.B3;
    const register unsigned short int PSMC2TMR12 = 4;
    sbit  PSMC2TMR12_bit at PSMC2TMRH.B4;
    const register unsigned short int PSMC2TMR13 = 5;
    sbit  PSMC2TMR13_bit at PSMC2TMRH.B5;
    const register unsigned short int PSMC2TMR14 = 6;
    sbit  PSMC2TMR14_bit at PSMC2TMRH.B6;
    const register unsigned short int PSMC2TMR15 = 7;
    sbit  PSMC2TMR15_bit at PSMC2TMRH.B7;

    // PSMC2DBR bits
    const register unsigned short int PSMC2DBR0 = 0;
    sbit  PSMC2DBR0_bit at PSMC2DBR.B0;
    const register unsigned short int PSMC2DBR1 = 1;
    sbit  PSMC2DBR1_bit at PSMC2DBR.B1;
    const register unsigned short int PSMC2DBR2 = 2;
    sbit  PSMC2DBR2_bit at PSMC2DBR.B2;
    const register unsigned short int PSMC2DBR3 = 3;
    sbit  PSMC2DBR3_bit at PSMC2DBR.B3;
    const register unsigned short int PSMC2DBR4 = 4;
    sbit  PSMC2DBR4_bit at PSMC2DBR.B4;
    const register unsigned short int PSMC2DBR5 = 5;
    sbit  PSMC2DBR5_bit at PSMC2DBR.B5;
    const register unsigned short int PSMC2DBR6 = 6;
    sbit  PSMC2DBR6_bit at PSMC2DBR.B6;
    const register unsigned short int PSMC2DBR7 = 7;
    sbit  PSMC2DBR7_bit at PSMC2DBR.B7;

    // PSMC2DBF bits
    const register unsigned short int PSMC2DBF0 = 0;
    sbit  PSMC2DBF0_bit at PSMC2DBF.B0;
    const register unsigned short int PSMC2DBF1 = 1;
    sbit  PSMC2DBF1_bit at PSMC2DBF.B1;
    const register unsigned short int PSMC2DBF2 = 2;
    sbit  PSMC2DBF2_bit at PSMC2DBF.B2;
    const register unsigned short int PSMC2DBF3 = 3;
    sbit  PSMC2DBF3_bit at PSMC2DBF.B3;
    const register unsigned short int PSMC2DBF4 = 4;
    sbit  PSMC2DBF4_bit at PSMC2DBF.B4;
    const register unsigned short int PSMC2DBF5 = 5;
    sbit  PSMC2DBF5_bit at PSMC2DBF.B5;
    const register unsigned short int PSMC2DBF6 = 6;
    sbit  PSMC2DBF6_bit at PSMC2DBF.B6;
    const register unsigned short int PSMC2DBF7 = 7;
    sbit  PSMC2DBF7_bit at PSMC2DBF.B7;

    // PSMC2BLKR bits
    const register unsigned short int PSMC2BLKR0 = 0;
    sbit  PSMC2BLKR0_bit at PSMC2BLKR.B0;
    const register unsigned short int PSMC2BLKR1 = 1;
    sbit  PSMC2BLKR1_bit at PSMC2BLKR.B1;
    const register unsigned short int PSMC2BLKR2 = 2;
    sbit  PSMC2BLKR2_bit at PSMC2BLKR.B2;
    const register unsigned short int PSMC2BLKR3 = 3;
    sbit  PSMC2BLKR3_bit at PSMC2BLKR.B3;
    const register unsigned short int PSMC2BLKR4 = 4;
    sbit  PSMC2BLKR4_bit at PSMC2BLKR.B4;
    const register unsigned short int PSMC2BLKR5 = 5;
    sbit  PSMC2BLKR5_bit at PSMC2BLKR.B5;
    const register unsigned short int PSMC2BLKR6 = 6;
    sbit  PSMC2BLKR6_bit at PSMC2BLKR.B6;
    const register unsigned short int PSMC2BLKR7 = 7;
    sbit  PSMC2BLKR7_bit at PSMC2BLKR.B7;

    // PSMC2BLKF bits
    const register unsigned short int PSMC2BLKF0 = 0;
    sbit  PSMC2BLKF0_bit at PSMC2BLKF.B0;
    const register unsigned short int PSMC2BLKF1 = 1;
    sbit  PSMC2BLKF1_bit at PSMC2BLKF.B1;
    const register unsigned short int PSMC2BLKF2 = 2;
    sbit  PSMC2BLKF2_bit at PSMC2BLKF.B2;
    const register unsigned short int PSMC2BLKF3 = 3;
    sbit  PSMC2BLKF3_bit at PSMC2BLKF.B3;
    const register unsigned short int PSMC2BLKF4 = 4;
    sbit  PSMC2BLKF4_bit at PSMC2BLKF.B4;
    const register unsigned short int PSMC2BLKF5 = 5;
    sbit  PSMC2BLKF5_bit at PSMC2BLKF.B5;
    const register unsigned short int PSMC2BLKF6 = 6;
    sbit  PSMC2BLKF6_bit at PSMC2BLKF.B6;
    const register unsigned short int PSMC2BLKF7 = 7;
    sbit  PSMC2BLKF7_bit at PSMC2BLKF.B7;

    // PSMC2FFA bits
    const register unsigned short int PSMC2FFA0 = 0;
    sbit  PSMC2FFA0_bit at PSMC2FFA.B0;
    const register unsigned short int PSMC2FFA1 = 1;
    sbit  PSMC2FFA1_bit at PSMC2FFA.B1;
    const register unsigned short int PSMC2FFA2 = 2;
    sbit  PSMC2FFA2_bit at PSMC2FFA.B2;
    const register unsigned short int PSMC2FFA3 = 3;
    sbit  PSMC2FFA3_bit at PSMC2FFA.B3;

    // PSMC2STR0 bits
    const register unsigned short int P2STRA = 0;
    sbit  P2STRA_bit at PSMC2STR0.B0;
    const register unsigned short int P2STRB = 1;
    sbit  P2STRB_bit at PSMC2STR0.B1;

    // PSMC2STR1 bits
    const register unsigned short int P2HSMEN = 0;
    sbit  P2HSMEN_bit at PSMC2STR1.B0;
    const register unsigned short int P2LSMEN = 1;
    sbit  P2LSMEN_bit at PSMC2STR1.B1;
    const register unsigned short int P2SSYNC = 7;
    sbit  P2SSYNC_bit at PSMC2STR1.B7;

    // PSMC3CON bits
    const register unsigned short int P3DBRE = 4;
    sbit  P3DBRE_bit at PSMC3CON.B4;
    const register unsigned short int P3DBFE = 5;
    sbit  P3DBFE_bit at PSMC3CON.B5;
    const register unsigned short int PSMC3LD = 6;
    sbit  PSMC3LD_bit at PSMC3CON.B6;
    const register unsigned short int PSMC3EN = 7;
    sbit  PSMC3EN_bit at PSMC3CON.B7;
    const register unsigned short int P3MODE0 = 0;
    sbit  P3MODE0_bit at PSMC3CON.B0;
    const register unsigned short int P3MODE1 = 1;
    sbit  P3MODE1_bit at PSMC3CON.B1;
    const register unsigned short int P3MODE2 = 2;
    sbit  P3MODE2_bit at PSMC3CON.B2;
    const register unsigned short int P3MODE3 = 3;
    sbit  P3MODE3_bit at PSMC3CON.B3;

    // PSMC3MDL bits
    const register unsigned short int P3MDLBIT = 5;
    sbit  P3MDLBIT_bit at PSMC3MDL.B5;
    const register unsigned short int P3MDLPOL = 6;
    sbit  P3MDLPOL_bit at PSMC3MDL.B6;
    const register unsigned short int P3MDLEN = 7;
    sbit  P3MDLEN_bit at PSMC3MDL.B7;
    const register unsigned short int P3MSRC0 = 0;
    sbit  P3MSRC0_bit at PSMC3MDL.B0;
    const register unsigned short int P3MSRC1 = 1;
    sbit  P3MSRC1_bit at PSMC3MDL.B1;
    const register unsigned short int P3MSRC2 = 2;
    sbit  P3MSRC2_bit at PSMC3MDL.B2;
    const register unsigned short int P3MSRC3 = 3;
    sbit  P3MSRC3_bit at PSMC3MDL.B3;

    // PSMC3SYNC bits
    const register unsigned short int P3SYNC0 = 0;
    sbit  P3SYNC0_bit at PSMC3SYNC.B0;
    const register unsigned short int P3SYNC1 = 1;
    sbit  P3SYNC1_bit at PSMC3SYNC.B1;
    const register unsigned short int P3SYNC2 = 2;
    sbit  P3SYNC2_bit at PSMC3SYNC.B2;
    const register unsigned short int P3DCPOL = 5;
    sbit  P3DCPOL_bit at PSMC3SYNC.B5;
    const register unsigned short int P3PRPOL = 6;
    sbit  P3PRPOL_bit at PSMC3SYNC.B6;
    const register unsigned short int P3POFST = 7;
    sbit  P3POFST_bit at PSMC3SYNC.B7;

    // PSMC3CLK bits
    const register unsigned short int P3CSRC0 = 0;
    sbit  P3CSRC0_bit at PSMC3CLK.B0;
    const register unsigned short int P3CSRC1 = 1;
    sbit  P3CSRC1_bit at PSMC3CLK.B1;
    const register unsigned short int P3CPRE0 = 4;
    sbit  P3CPRE0_bit at PSMC3CLK.B4;
    const register unsigned short int P3CPRE1 = 5;
    sbit  P3CPRE1_bit at PSMC3CLK.B5;

    // PSMC3OEN bits
    const register unsigned short int P3OEA = 0;
    sbit  P3OEA_bit at PSMC3OEN.B0;
    const register unsigned short int P3OEB = 1;
    sbit  P3OEB_bit at PSMC3OEN.B1;

    // PSMC3POL bits
    const register unsigned short int P3POLA = 0;
    sbit  P3POLA_bit at PSMC3POL.B0;
    const register unsigned short int P3POLB = 1;
    sbit  P3POLB_bit at PSMC3POL.B1;
    const register unsigned short int P3INPOL = 6;
    sbit  P3INPOL_bit at PSMC3POL.B6;

    // PSMC3BLNK bits
    const register unsigned short int P3REBM0 = 0;
    sbit  P3REBM0_bit at PSMC3BLNK.B0;
    const register unsigned short int P3REBM1 = 1;
    sbit  P3REBM1_bit at PSMC3BLNK.B1;
    const register unsigned short int P3FEBM0 = 4;
    sbit  P3FEBM0_bit at PSMC3BLNK.B4;
    const register unsigned short int P3FEBM1 = 5;
    sbit  P3FEBM1_bit at PSMC3BLNK.B5;

    // PSMC3REBS bits
    const register unsigned short int P3REBSC1 = 1;
    sbit  P3REBSC1_bit at PSMC3REBS.B1;
    const register unsigned short int P3REBSC2 = 2;
    sbit  P3REBSC2_bit at PSMC3REBS.B2;
    const register unsigned short int P3REBSC3 = 3;
    sbit  P3REBSC3_bit at PSMC3REBS.B3;
    const register unsigned short int P3REBSC4 = 4;
    sbit  P3REBSC4_bit at PSMC3REBS.B4;
    const register unsigned short int P3REBSIN = 7;
    sbit  P3REBSIN_bit at PSMC3REBS.B7;

    // PSMC3FEBS bits
    const register unsigned short int P3FEBSC1 = 1;
    sbit  P3FEBSC1_bit at PSMC3FEBS.B1;
    const register unsigned short int P3FEBSC2 = 2;
    sbit  P3FEBSC2_bit at PSMC3FEBS.B2;
    const register unsigned short int P3FEBSC3 = 3;
    sbit  P3FEBSC3_bit at PSMC3FEBS.B3;
    const register unsigned short int P3FEBSC4 = 4;
    sbit  P3FEBSC4_bit at PSMC3FEBS.B4;
    const register unsigned short int P3FEBSIN = 7;
    sbit  P3FEBSIN_bit at PSMC3FEBS.B7;

    // PSMC3PHS bits
    const register unsigned short int P3PHST = 0;
    sbit  P3PHST_bit at PSMC3PHS.B0;
    const register unsigned short int P3PHSC1 = 1;
    sbit  P3PHSC1_bit at PSMC3PHS.B1;
    const register unsigned short int P3PHSC2 = 2;
    sbit  P3PHSC2_bit at PSMC3PHS.B2;
    const register unsigned short int P3PHSC3 = 3;
    sbit  P3PHSC3_bit at PSMC3PHS.B3;
    const register unsigned short int P3PHSC4 = 4;
    sbit  P3PHSC4_bit at PSMC3PHS.B4;
    const register unsigned short int P3PHSIN = 7;
    sbit  P3PHSIN_bit at PSMC3PHS.B7;

    // PSMC3DCS bits
    const register unsigned short int P3DCST = 0;
    sbit  P3DCST_bit at PSMC3DCS.B0;
    const register unsigned short int P3DCSC1 = 1;
    sbit  P3DCSC1_bit at PSMC3DCS.B1;
    const register unsigned short int P3DCSC2 = 2;
    sbit  P3DCSC2_bit at PSMC3DCS.B2;
    const register unsigned short int P3DCSC3 = 3;
    sbit  P3DCSC3_bit at PSMC3DCS.B3;
    const register unsigned short int P3DCSC4 = 4;
    sbit  P3DCSC4_bit at PSMC3DCS.B4;
    const register unsigned short int P3DCSIN = 7;
    sbit  P3DCSIN_bit at PSMC3DCS.B7;

    // PSMC3PRS bits
    const register unsigned short int P3PRST = 0;
    sbit  P3PRST_bit at PSMC3PRS.B0;
    const register unsigned short int P3PRSC1 = 1;
    sbit  P3PRSC1_bit at PSMC3PRS.B1;
    const register unsigned short int P3PRSC2 = 2;
    sbit  P3PRSC2_bit at PSMC3PRS.B2;
    const register unsigned short int P3PRSC3 = 3;
    sbit  P3PRSC3_bit at PSMC3PRS.B3;
    const register unsigned short int P3PRSC4 = 4;
    sbit  P3PRSC4_bit at PSMC3PRS.B4;
    const register unsigned short int P3PRSIN = 7;
    sbit  P3PRSIN_bit at PSMC3PRS.B7;

    // PSMC3ASDC bits
    const register unsigned short int P3ASDOV = 0;
    sbit  P3ASDOV_bit at PSMC3ASDC.B0;
    const register unsigned short int P3ARSEN = 5;
    sbit  P3ARSEN_bit at PSMC3ASDC.B5;
    const register unsigned short int P3ASDEN = 6;
    sbit  P3ASDEN_bit at PSMC3ASDC.B6;
    const register unsigned short int P3ASE = 7;
    sbit  P3ASE_bit at PSMC3ASDC.B7;

    // PSMC3ASDL bits
    const register unsigned short int P3ASDLA = 0;
    sbit  P3ASDLA_bit at PSMC3ASDL.B0;
    const register unsigned short int P3ASDLB = 1;
    sbit  P3ASDLB_bit at PSMC3ASDL.B1;

    // PSMC3ASDS bits
    const register unsigned short int P3ASDSC1 = 1;
    sbit  P3ASDSC1_bit at PSMC3ASDS.B1;
    const register unsigned short int P3ASDSC2 = 2;
    sbit  P3ASDSC2_bit at PSMC3ASDS.B2;
    const register unsigned short int P3ASDSC3 = 3;
    sbit  P3ASDSC3_bit at PSMC3ASDS.B3;
    const register unsigned short int P3ASDSC4 = 4;
    sbit  P3ASDSC4_bit at PSMC3ASDS.B4;
    const register unsigned short int P3ASDSIN = 7;
    sbit  P3ASDSIN_bit at PSMC3ASDS.B7;

    // PSMC3INT bits
    const register unsigned short int P3TPRIF = 0;
    sbit  P3TPRIF_bit at PSMC3INT.B0;
    const register unsigned short int P3TDCIF = 1;
    sbit  P3TDCIF_bit at PSMC3INT.B1;
    const register unsigned short int P3TPHIF = 2;
    sbit  P3TPHIF_bit at PSMC3INT.B2;
    const register unsigned short int P3TOVIF = 3;
    sbit  P3TOVIF_bit at PSMC3INT.B3;
    const register unsigned short int P3TPRIE = 4;
    sbit  P3TPRIE_bit at PSMC3INT.B4;
    const register unsigned short int P3TDCIE = 5;
    sbit  P3TDCIE_bit at PSMC3INT.B5;
    const register unsigned short int P3TPHIE = 6;
    sbit  P3TPHIE_bit at PSMC3INT.B6;
    const register unsigned short int P3TOVIE = 7;
    sbit  P3TOVIE_bit at PSMC3INT.B7;

    // PSMC3PHL bits
    const register unsigned short int PSMC3PH0 = 0;
    sbit  PSMC3PH0_bit at PSMC3PHL.B0;
    const register unsigned short int PSMC3PH1 = 1;
    sbit  PSMC3PH1_bit at PSMC3PHL.B1;
    const register unsigned short int PSMC3PH2 = 2;
    sbit  PSMC3PH2_bit at PSMC3PHL.B2;
    const register unsigned short int PSMC3PH3 = 3;
    sbit  PSMC3PH3_bit at PSMC3PHL.B3;
    const register unsigned short int PSMC3PH4 = 4;
    sbit  PSMC3PH4_bit at PSMC3PHL.B4;
    const register unsigned short int PSMC3PH5 = 5;
    sbit  PSMC3PH5_bit at PSMC3PHL.B5;
    const register unsigned short int PSMC3PH6 = 6;
    sbit  PSMC3PH6_bit at PSMC3PHL.B6;
    const register unsigned short int PSMC3PH7 = 7;
    sbit  PSMC3PH7_bit at PSMC3PHL.B7;

    // PSMC3PHH bits
    const register unsigned short int PSMC3PH8 = 0;
    sbit  PSMC3PH8_bit at PSMC3PHH.B0;
    const register unsigned short int PSMC3PH9 = 1;
    sbit  PSMC3PH9_bit at PSMC3PHH.B1;
    const register unsigned short int PSMC3PH10 = 2;
    sbit  PSMC3PH10_bit at PSMC3PHH.B2;
    const register unsigned short int PSMC3PH11 = 3;
    sbit  PSMC3PH11_bit at PSMC3PHH.B3;
    const register unsigned short int PSMC3PH12 = 4;
    sbit  PSMC3PH12_bit at PSMC3PHH.B4;
    const register unsigned short int PSMC3PH13 = 5;
    sbit  PSMC3PH13_bit at PSMC3PHH.B5;
    const register unsigned short int PSMC3PH14 = 6;
    sbit  PSMC3PH14_bit at PSMC3PHH.B6;
    const register unsigned short int PSMC3PH15 = 7;
    sbit  PSMC3PH15_bit at PSMC3PHH.B7;

    // PSMC3DCL bits
    const register unsigned short int PSMC3DC0 = 0;
    sbit  PSMC3DC0_bit at PSMC3DCL.B0;
    const register unsigned short int PSMC3DC1 = 1;
    sbit  PSMC3DC1_bit at PSMC3DCL.B1;
    const register unsigned short int PSMC3DC2 = 2;
    sbit  PSMC3DC2_bit at PSMC3DCL.B2;
    const register unsigned short int PSMC3DC3 = 3;
    sbit  PSMC3DC3_bit at PSMC3DCL.B3;
    const register unsigned short int PSMC3DC4 = 4;
    sbit  PSMC3DC4_bit at PSMC3DCL.B4;
    const register unsigned short int PSMC3DC5 = 5;
    sbit  PSMC3DC5_bit at PSMC3DCL.B5;
    const register unsigned short int PSMC3DC6 = 6;
    sbit  PSMC3DC6_bit at PSMC3DCL.B6;
    const register unsigned short int PSMC3DC7 = 7;
    sbit  PSMC3DC7_bit at PSMC3DCL.B7;

    // PSMC3DCH bits
    const register unsigned short int PSMC3DC8 = 0;
    sbit  PSMC3DC8_bit at PSMC3DCH.B0;
    const register unsigned short int PSMC3DC9 = 1;
    sbit  PSMC3DC9_bit at PSMC3DCH.B1;
    const register unsigned short int PSMC3DC10 = 2;
    sbit  PSMC3DC10_bit at PSMC3DCH.B2;
    const register unsigned short int PSMC3DC11 = 3;
    sbit  PSMC3DC11_bit at PSMC3DCH.B3;
    const register unsigned short int PSMC3DC12 = 4;
    sbit  PSMC3DC12_bit at PSMC3DCH.B4;
    const register unsigned short int PSMC3DC13 = 5;
    sbit  PSMC3DC13_bit at PSMC3DCH.B5;
    const register unsigned short int PSMC3DC14 = 6;
    sbit  PSMC3DC14_bit at PSMC3DCH.B6;
    const register unsigned short int PSMC3DC15 = 7;
    sbit  PSMC3DC15_bit at PSMC3DCH.B7;

    // PSMC3PRL bits
    const register unsigned short int PSMC3PR0 = 0;
    sbit  PSMC3PR0_bit at PSMC3PRL.B0;
    const register unsigned short int PSMC3PR1 = 1;
    sbit  PSMC3PR1_bit at PSMC3PRL.B1;
    const register unsigned short int PSMC3PR2 = 2;
    sbit  PSMC3PR2_bit at PSMC3PRL.B2;
    const register unsigned short int PSMC3PR3 = 3;
    sbit  PSMC3PR3_bit at PSMC3PRL.B3;
    const register unsigned short int PSMC3PR4 = 4;
    sbit  PSMC3PR4_bit at PSMC3PRL.B4;
    const register unsigned short int PSMC3PR5 = 5;
    sbit  PSMC3PR5_bit at PSMC3PRL.B5;
    const register unsigned short int PSMC3PR6 = 6;
    sbit  PSMC3PR6_bit at PSMC3PRL.B6;
    const register unsigned short int PSMC3PR7 = 7;
    sbit  PSMC3PR7_bit at PSMC3PRL.B7;

    // PSMC3PRH bits
    const register unsigned short int PSMC3PR8 = 0;
    sbit  PSMC3PR8_bit at PSMC3PRH.B0;
    const register unsigned short int PSMC3PR9 = 1;
    sbit  PSMC3PR9_bit at PSMC3PRH.B1;
    const register unsigned short int PSMC3PR10 = 2;
    sbit  PSMC3PR10_bit at PSMC3PRH.B2;
    const register unsigned short int PSMC3PR11 = 3;
    sbit  PSMC3PR11_bit at PSMC3PRH.B3;
    const register unsigned short int PSMC3PR12 = 4;
    sbit  PSMC3PR12_bit at PSMC3PRH.B4;
    const register unsigned short int PSMC3PR13 = 5;
    sbit  PSMC3PR13_bit at PSMC3PRH.B5;
    const register unsigned short int PSMC3PR14 = 6;
    sbit  PSMC3PR14_bit at PSMC3PRH.B6;
    const register unsigned short int PSMC3PR15 = 7;
    sbit  PSMC3PR15_bit at PSMC3PRH.B7;

    // PSMC3TMRL bits
    const register unsigned short int PSMC3TMR0 = 0;
    sbit  PSMC3TMR0_bit at PSMC3TMRL.B0;
    const register unsigned short int PSMC3TMR1 = 1;
    sbit  PSMC3TMR1_bit at PSMC3TMRL.B1;
    const register unsigned short int PSMC3TMR2 = 2;
    sbit  PSMC3TMR2_bit at PSMC3TMRL.B2;
    const register unsigned short int PSMC3TMR3 = 3;
    sbit  PSMC3TMR3_bit at PSMC3TMRL.B3;
    const register unsigned short int PSMC3TMR4 = 4;
    sbit  PSMC3TMR4_bit at PSMC3TMRL.B4;
    const register unsigned short int PSMC3TMR5 = 5;
    sbit  PSMC3TMR5_bit at PSMC3TMRL.B5;
    const register unsigned short int PSMC3TMR6 = 6;
    sbit  PSMC3TMR6_bit at PSMC3TMRL.B6;
    const register unsigned short int PSMC3TMR7 = 7;
    sbit  PSMC3TMR7_bit at PSMC3TMRL.B7;

    // PSMC3TMRH bits
    const register unsigned short int PSMC3TMR8 = 0;
    sbit  PSMC3TMR8_bit at PSMC3TMRH.B0;
    const register unsigned short int PSMC3TMR9 = 1;
    sbit  PSMC3TMR9_bit at PSMC3TMRH.B1;
    const register unsigned short int PSMC3TMR10 = 2;
    sbit  PSMC3TMR10_bit at PSMC3TMRH.B2;
    const register unsigned short int PSMC3TMR11 = 3;
    sbit  PSMC3TMR11_bit at PSMC3TMRH.B3;
    const register unsigned short int PSMC3TMR12 = 4;
    sbit  PSMC3TMR12_bit at PSMC3TMRH.B4;
    const register unsigned short int PSMC3TMR13 = 5;
    sbit  PSMC3TMR13_bit at PSMC3TMRH.B5;
    const register unsigned short int PSMC3TMR14 = 6;
    sbit  PSMC3TMR14_bit at PSMC3TMRH.B6;
    const register unsigned short int PSMC3TMR15 = 7;
    sbit  PSMC3TMR15_bit at PSMC3TMRH.B7;

    // PSMC3DBR bits
    const register unsigned short int PSMC3DBR0 = 0;
    sbit  PSMC3DBR0_bit at PSMC3DBR.B0;
    const register unsigned short int PSMC3DBR1 = 1;
    sbit  PSMC3DBR1_bit at PSMC3DBR.B1;
    const register unsigned short int PSMC3DBR2 = 2;
    sbit  PSMC3DBR2_bit at PSMC3DBR.B2;
    const register unsigned short int PSMC3DBR3 = 3;
    sbit  PSMC3DBR3_bit at PSMC3DBR.B3;
    const register unsigned short int PSMC3DBR4 = 4;
    sbit  PSMC3DBR4_bit at PSMC3DBR.B4;
    const register unsigned short int PSMC3DBR5 = 5;
    sbit  PSMC3DBR5_bit at PSMC3DBR.B5;
    const register unsigned short int PSMC3DBR6 = 6;
    sbit  PSMC3DBR6_bit at PSMC3DBR.B6;
    const register unsigned short int PSMC3DBR7 = 7;
    sbit  PSMC3DBR7_bit at PSMC3DBR.B7;

    // PSMC3DBF bits
    const register unsigned short int PSMC3DBF0 = 0;
    sbit  PSMC3DBF0_bit at PSMC3DBF.B0;
    const register unsigned short int PSMC3DBF1 = 1;
    sbit  PSMC3DBF1_bit at PSMC3DBF.B1;
    const register unsigned short int PSMC3DBF2 = 2;
    sbit  PSMC3DBF2_bit at PSMC3DBF.B2;
    const register unsigned short int PSMC3DBF3 = 3;
    sbit  PSMC3DBF3_bit at PSMC3DBF.B3;
    const register unsigned short int PSMC3DBF4 = 4;
    sbit  PSMC3DBF4_bit at PSMC3DBF.B4;
    const register unsigned short int PSMC3DBF5 = 5;
    sbit  PSMC3DBF5_bit at PSMC3DBF.B5;
    const register unsigned short int PSMC3DBF6 = 6;
    sbit  PSMC3DBF6_bit at PSMC3DBF.B6;
    const register unsigned short int PSMC3DBF7 = 7;
    sbit  PSMC3DBF7_bit at PSMC3DBF.B7;

    // PSMC3BLKR bits
    const register unsigned short int PSMC3BLKR0 = 0;
    sbit  PSMC3BLKR0_bit at PSMC3BLKR.B0;
    const register unsigned short int PSMC3BLKR1 = 1;
    sbit  PSMC3BLKR1_bit at PSMC3BLKR.B1;
    const register unsigned short int PSMC3BLKR2 = 2;
    sbit  PSMC3BLKR2_bit at PSMC3BLKR.B2;
    const register unsigned short int PSMC3BLKR3 = 3;
    sbit  PSMC3BLKR3_bit at PSMC3BLKR.B3;
    const register unsigned short int PSMC3BLKR4 = 4;
    sbit  PSMC3BLKR4_bit at PSMC3BLKR.B4;
    const register unsigned short int PSMC3BLKR5 = 5;
    sbit  PSMC3BLKR5_bit at PSMC3BLKR.B5;
    const register unsigned short int PSMC3BLKR6 = 6;
    sbit  PSMC3BLKR6_bit at PSMC3BLKR.B6;
    const register unsigned short int PSMC3BLKR7 = 7;
    sbit  PSMC3BLKR7_bit at PSMC3BLKR.B7;

    // PSMC3BLKF bits
    const register unsigned short int PSMC3BLKF0 = 0;
    sbit  PSMC3BLKF0_bit at PSMC3BLKF.B0;
    const register unsigned short int PSMC3BLKF1 = 1;
    sbit  PSMC3BLKF1_bit at PSMC3BLKF.B1;
    const register unsigned short int PSMC3BLKF2 = 2;
    sbit  PSMC3BLKF2_bit at PSMC3BLKF.B2;
    const register unsigned short int PSMC3BLKF3 = 3;
    sbit  PSMC3BLKF3_bit at PSMC3BLKF.B3;
    const register unsigned short int PSMC3BLKF4 = 4;
    sbit  PSMC3BLKF4_bit at PSMC3BLKF.B4;
    const register unsigned short int PSMC3BLKF5 = 5;
    sbit  PSMC3BLKF5_bit at PSMC3BLKF.B5;
    const register unsigned short int PSMC3BLKF6 = 6;
    sbit  PSMC3BLKF6_bit at PSMC3BLKF.B6;
    const register unsigned short int PSMC3BLKF7 = 7;
    sbit  PSMC3BLKF7_bit at PSMC3BLKF.B7;

    // PSMC3FFA bits
    const register unsigned short int PSMC3FFA0 = 0;
    sbit  PSMC3FFA0_bit at PSMC3FFA.B0;
    const register unsigned short int PSMC3FFA1 = 1;
    sbit  PSMC3FFA1_bit at PSMC3FFA.B1;
    const register unsigned short int PSMC3FFA2 = 2;
    sbit  PSMC3FFA2_bit at PSMC3FFA.B2;
    const register unsigned short int PSMC3FFA3 = 3;
    sbit  PSMC3FFA3_bit at PSMC3FFA.B3;

    // PSMC3STR0 bits
    const register unsigned short int P3STRA = 0;
    sbit  P3STRA_bit at PSMC3STR0.B0;
    const register unsigned short int P3STRB = 1;
    sbit  P3STRB_bit at PSMC3STR0.B1;

    // PSMC3STR1 bits
    const register unsigned short int P3HSMEN = 0;
    sbit  P3HSMEN_bit at PSMC3STR1.B0;
    const register unsigned short int P3LSMEN = 1;
    sbit  P3LSMEN_bit at PSMC3STR1.B1;
    const register unsigned short int P3SSYNC = 7;
    sbit  P3SSYNC_bit at PSMC3STR1.B7;

    // PSMC4CON bits
    const register unsigned short int P4DBRE = 4;
    sbit  P4DBRE_bit at PSMC4CON.B4;
    const register unsigned short int P4DBFE = 5;
    sbit  P4DBFE_bit at PSMC4CON.B5;
    const register unsigned short int PSMC4LD = 6;
    sbit  PSMC4LD_bit at PSMC4CON.B6;
    const register unsigned short int PSMC4EN = 7;
    sbit  PSMC4EN_bit at PSMC4CON.B7;
    const register unsigned short int P4MODE0 = 0;
    sbit  P4MODE0_bit at PSMC4CON.B0;
    const register unsigned short int P4MODE1 = 1;
    sbit  P4MODE1_bit at PSMC4CON.B1;
    const register unsigned short int P4MODE2 = 2;
    sbit  P4MODE2_bit at PSMC4CON.B2;
    const register unsigned short int P4MODE3 = 3;
    sbit  P4MODE3_bit at PSMC4CON.B3;

    // PSMC4MDL bits
    const register unsigned short int P4MDLBIT = 5;
    sbit  P4MDLBIT_bit at PSMC4MDL.B5;
    const register unsigned short int P4MDLPOL = 6;
    sbit  P4MDLPOL_bit at PSMC4MDL.B6;
    const register unsigned short int P4MDLEN = 7;
    sbit  P4MDLEN_bit at PSMC4MDL.B7;
    const register unsigned short int P4MSRC0 = 0;
    sbit  P4MSRC0_bit at PSMC4MDL.B0;
    const register unsigned short int P4MSRC1 = 1;
    sbit  P4MSRC1_bit at PSMC4MDL.B1;
    const register unsigned short int P4MSRC2 = 2;
    sbit  P4MSRC2_bit at PSMC4MDL.B2;
    const register unsigned short int P4MSRC3 = 3;
    sbit  P4MSRC3_bit at PSMC4MDL.B3;

    // PSMC4SYNC bits
    const register unsigned short int P4SYNC0 = 0;
    sbit  P4SYNC0_bit at PSMC4SYNC.B0;
    const register unsigned short int P4SYNC1 = 1;
    sbit  P4SYNC1_bit at PSMC4SYNC.B1;
    const register unsigned short int P4SYNC2 = 2;
    sbit  P4SYNC2_bit at PSMC4SYNC.B2;
    const register unsigned short int P4DCPOL = 5;
    sbit  P4DCPOL_bit at PSMC4SYNC.B5;
    const register unsigned short int P4PRPOL = 6;
    sbit  P4PRPOL_bit at PSMC4SYNC.B6;
    const register unsigned short int P4POFST = 7;
    sbit  P4POFST_bit at PSMC4SYNC.B7;

    // PSMC4CLK bits
    const register unsigned short int P4CSRC0 = 0;
    sbit  P4CSRC0_bit at PSMC4CLK.B0;
    const register unsigned short int P4CSRC1 = 1;
    sbit  P4CSRC1_bit at PSMC4CLK.B1;
    const register unsigned short int P4CPRE0 = 4;
    sbit  P4CPRE0_bit at PSMC4CLK.B4;
    const register unsigned short int P4CPRE1 = 5;
    sbit  P4CPRE1_bit at PSMC4CLK.B5;

    // PSMC4OEN bits
    const register unsigned short int P4OEA = 0;
    sbit  P4OEA_bit at PSMC4OEN.B0;
    const register unsigned short int P4OEB = 1;
    sbit  P4OEB_bit at PSMC4OEN.B1;

    // PSMC4POL bits
    const register unsigned short int P4POLA = 0;
    sbit  P4POLA_bit at PSMC4POL.B0;
    const register unsigned short int P4POLB = 1;
    sbit  P4POLB_bit at PSMC4POL.B1;
    const register unsigned short int P4INPOL = 6;
    sbit  P4INPOL_bit at PSMC4POL.B6;

    // PSMC4BLNK bits
    const register unsigned short int P4REBM0 = 0;
    sbit  P4REBM0_bit at PSMC4BLNK.B0;
    const register unsigned short int P4REBM1 = 1;
    sbit  P4REBM1_bit at PSMC4BLNK.B1;
    const register unsigned short int P4FEBM0 = 4;
    sbit  P4FEBM0_bit at PSMC4BLNK.B4;
    const register unsigned short int P4FEBM1 = 5;
    sbit  P4FEBM1_bit at PSMC4BLNK.B5;

    // PSMC4REBS bits
    const register unsigned short int P4REBSC1 = 1;
    sbit  P4REBSC1_bit at PSMC4REBS.B1;
    const register unsigned short int P4REBSC2 = 2;
    sbit  P4REBSC2_bit at PSMC4REBS.B2;
    const register unsigned short int P4REBSC3 = 3;
    sbit  P4REBSC3_bit at PSMC4REBS.B3;
    const register unsigned short int P4REBSC4 = 4;
    sbit  P4REBSC4_bit at PSMC4REBS.B4;
    const register unsigned short int P4REBSIN = 7;
    sbit  P4REBSIN_bit at PSMC4REBS.B7;

    // PSMC4FEBS bits
    const register unsigned short int P4FEBSC1 = 1;
    sbit  P4FEBSC1_bit at PSMC4FEBS.B1;
    const register unsigned short int P4FEBSC2 = 2;
    sbit  P4FEBSC2_bit at PSMC4FEBS.B2;
    const register unsigned short int P4FEBSC3 = 3;
    sbit  P4FEBSC3_bit at PSMC4FEBS.B3;
    const register unsigned short int P4FEBSC4 = 4;
    sbit  P4FEBSC4_bit at PSMC4FEBS.B4;
    const register unsigned short int P4FEBSIN = 7;
    sbit  P4FEBSIN_bit at PSMC4FEBS.B7;

    // PSMC4PHS bits
    const register unsigned short int P4PHST = 0;
    sbit  P4PHST_bit at PSMC4PHS.B0;
    const register unsigned short int P4PHSC1 = 1;
    sbit  P4PHSC1_bit at PSMC4PHS.B1;
    const register unsigned short int P4PHSC2 = 2;
    sbit  P4PHSC2_bit at PSMC4PHS.B2;
    const register unsigned short int P4PHSC3 = 3;
    sbit  P4PHSC3_bit at PSMC4PHS.B3;
    const register unsigned short int P4PHSC4 = 4;
    sbit  P4PHSC4_bit at PSMC4PHS.B4;
    const register unsigned short int P4PHSIN = 7;
    sbit  P4PHSIN_bit at PSMC4PHS.B7;

    // PSMC4DCS bits
    const register unsigned short int P4DCST = 0;
    sbit  P4DCST_bit at PSMC4DCS.B0;
    const register unsigned short int P4DCSC1 = 1;
    sbit  P4DCSC1_bit at PSMC4DCS.B1;
    const register unsigned short int P4DCSC2 = 2;
    sbit  P4DCSC2_bit at PSMC4DCS.B2;
    const register unsigned short int P4DCSC3 = 3;
    sbit  P4DCSC3_bit at PSMC4DCS.B3;
    const register unsigned short int P4DCSC4 = 4;
    sbit  P4DCSC4_bit at PSMC4DCS.B4;
    const register unsigned short int P4DCSIN = 7;
    sbit  P4DCSIN_bit at PSMC4DCS.B7;

    // PSMC4PRS bits
    const register unsigned short int P4PRST = 0;
    sbit  P4PRST_bit at PSMC4PRS.B0;
    const register unsigned short int P4PRSC1 = 1;
    sbit  P4PRSC1_bit at PSMC4PRS.B1;
    const register unsigned short int P4PRSC2 = 2;
    sbit  P4PRSC2_bit at PSMC4PRS.B2;
    const register unsigned short int P4PRSC3 = 3;
    sbit  P4PRSC3_bit at PSMC4PRS.B3;
    const register unsigned short int P4PRSC4 = 4;
    sbit  P4PRSC4_bit at PSMC4PRS.B4;
    const register unsigned short int P4PRSIN = 7;
    sbit  P4PRSIN_bit at PSMC4PRS.B7;

    // PSMC4ASDC bits
    const register unsigned short int P4ASDOV = 0;
    sbit  P4ASDOV_bit at PSMC4ASDC.B0;
    const register unsigned short int P4ARSEN = 5;
    sbit  P4ARSEN_bit at PSMC4ASDC.B5;
    const register unsigned short int P4ASDEN = 6;
    sbit  P4ASDEN_bit at PSMC4ASDC.B6;
    const register unsigned short int P4ASE = 7;
    sbit  P4ASE_bit at PSMC4ASDC.B7;

    // PSMC4ASDL bits
    const register unsigned short int P4ASDLA = 0;
    sbit  P4ASDLA_bit at PSMC4ASDL.B0;
    const register unsigned short int P4ASDLB = 1;
    sbit  P4ASDLB_bit at PSMC4ASDL.B1;

    // PSMC4ASDS bits
    const register unsigned short int P4ASDSC1 = 1;
    sbit  P4ASDSC1_bit at PSMC4ASDS.B1;
    const register unsigned short int P4ASDSC2 = 2;
    sbit  P4ASDSC2_bit at PSMC4ASDS.B2;
    const register unsigned short int P4ASDSC3 = 3;
    sbit  P4ASDSC3_bit at PSMC4ASDS.B3;
    const register unsigned short int P4ASDSC4 = 4;
    sbit  P4ASDSC4_bit at PSMC4ASDS.B4;
    const register unsigned short int P4ASDSIN = 7;
    sbit  P4ASDSIN_bit at PSMC4ASDS.B7;

    // PSMC4INT bits
    const register unsigned short int P4TPRIF = 0;
    sbit  P4TPRIF_bit at PSMC4INT.B0;
    const register unsigned short int P4TDCIF = 1;
    sbit  P4TDCIF_bit at PSMC4INT.B1;
    const register unsigned short int P4TPHIF = 2;
    sbit  P4TPHIF_bit at PSMC4INT.B2;
    const register unsigned short int P4TOVIF = 3;
    sbit  P4TOVIF_bit at PSMC4INT.B3;
    const register unsigned short int P4TPRIE = 4;
    sbit  P4TPRIE_bit at PSMC4INT.B4;
    const register unsigned short int P4TDCIE = 5;
    sbit  P4TDCIE_bit at PSMC4INT.B5;
    const register unsigned short int P4TPHIE = 6;
    sbit  P4TPHIE_bit at PSMC4INT.B6;
    const register unsigned short int P4TOVIE = 7;
    sbit  P4TOVIE_bit at PSMC4INT.B7;

    // PSMC4PHL bits
    const register unsigned short int PSMC4PH0 = 0;
    sbit  PSMC4PH0_bit at PSMC4PHL.B0;
    const register unsigned short int PSMC4PH1 = 1;
    sbit  PSMC4PH1_bit at PSMC4PHL.B1;
    const register unsigned short int PSMC4PH2 = 2;
    sbit  PSMC4PH2_bit at PSMC4PHL.B2;
    const register unsigned short int PSMC4PH3 = 3;
    sbit  PSMC4PH3_bit at PSMC4PHL.B3;
    const register unsigned short int PSMC4PH4 = 4;
    sbit  PSMC4PH4_bit at PSMC4PHL.B4;
    const register unsigned short int PSMC4PH5 = 5;
    sbit  PSMC4PH5_bit at PSMC4PHL.B5;
    const register unsigned short int PSMC4PH6 = 6;
    sbit  PSMC4PH6_bit at PSMC4PHL.B6;
    const register unsigned short int PSMC4PH7 = 7;
    sbit  PSMC4PH7_bit at PSMC4PHL.B7;

    // PSMC4PHH bits
    const register unsigned short int PSMC4PH8 = 0;
    sbit  PSMC4PH8_bit at PSMC4PHH.B0;
    const register unsigned short int PSMC4PH9 = 1;
    sbit  PSMC4PH9_bit at PSMC4PHH.B1;
    const register unsigned short int PSMC4PH10 = 2;
    sbit  PSMC4PH10_bit at PSMC4PHH.B2;
    const register unsigned short int PSMC4PH11 = 3;
    sbit  PSMC4PH11_bit at PSMC4PHH.B3;
    const register unsigned short int PSMC4PH12 = 4;
    sbit  PSMC4PH12_bit at PSMC4PHH.B4;
    const register unsigned short int PSMC4PH13 = 5;
    sbit  PSMC4PH13_bit at PSMC4PHH.B5;
    const register unsigned short int PSMC4PH14 = 6;
    sbit  PSMC4PH14_bit at PSMC4PHH.B6;
    const register unsigned short int PSMC4PH15 = 7;
    sbit  PSMC4PH15_bit at PSMC4PHH.B7;

    // PSMC4DCL bits
    const register unsigned short int PSMC4DC0 = 0;
    sbit  PSMC4DC0_bit at PSMC4DCL.B0;
    const register unsigned short int PSMC4DC1 = 1;
    sbit  PSMC4DC1_bit at PSMC4DCL.B1;
    const register unsigned short int PSMC4DC2 = 2;
    sbit  PSMC4DC2_bit at PSMC4DCL.B2;
    const register unsigned short int PSMC4DC3 = 3;
    sbit  PSMC4DC3_bit at PSMC4DCL.B3;
    const register unsigned short int PSMC4DC4 = 4;
    sbit  PSMC4DC4_bit at PSMC4DCL.B4;
    const register unsigned short int PSMC4DC5 = 5;
    sbit  PSMC4DC5_bit at PSMC4DCL.B5;
    const register unsigned short int PSMC4DC6 = 6;
    sbit  PSMC4DC6_bit at PSMC4DCL.B6;
    const register unsigned short int PSMC4DC7 = 7;
    sbit  PSMC4DC7_bit at PSMC4DCL.B7;

    // PSMC4DCH bits
    const register unsigned short int PSMC4DC8 = 0;
    sbit  PSMC4DC8_bit at PSMC4DCH.B0;
    const register unsigned short int PSMC4DC9 = 1;
    sbit  PSMC4DC9_bit at PSMC4DCH.B1;
    const register unsigned short int PSMC4DC10 = 2;
    sbit  PSMC4DC10_bit at PSMC4DCH.B2;
    const register unsigned short int PSMC4DC11 = 3;
    sbit  PSMC4DC11_bit at PSMC4DCH.B3;
    const register unsigned short int PSMC4DC12 = 4;
    sbit  PSMC4DC12_bit at PSMC4DCH.B4;
    const register unsigned short int PSMC4DC13 = 5;
    sbit  PSMC4DC13_bit at PSMC4DCH.B5;
    const register unsigned short int PSMC4DC14 = 6;
    sbit  PSMC4DC14_bit at PSMC4DCH.B6;
    const register unsigned short int PSMC4DC15 = 7;
    sbit  PSMC4DC15_bit at PSMC4DCH.B7;

    // PSMC4PRL bits
    const register unsigned short int PSMC4PR0 = 0;
    sbit  PSMC4PR0_bit at PSMC4PRL.B0;
    const register unsigned short int PSMC4PR1 = 1;
    sbit  PSMC4PR1_bit at PSMC4PRL.B1;
    const register unsigned short int PSMC4PR2 = 2;
    sbit  PSMC4PR2_bit at PSMC4PRL.B2;
    const register unsigned short int PSMC4PR3 = 3;
    sbit  PSMC4PR3_bit at PSMC4PRL.B3;
    const register unsigned short int PSMC4PR4 = 4;
    sbit  PSMC4PR4_bit at PSMC4PRL.B4;
    const register unsigned short int PSMC4PR5 = 5;
    sbit  PSMC4PR5_bit at PSMC4PRL.B5;
    const register unsigned short int PSMC4PR6 = 6;
    sbit  PSMC4PR6_bit at PSMC4PRL.B6;
    const register unsigned short int PSMC4PR7 = 7;
    sbit  PSMC4PR7_bit at PSMC4PRL.B7;

    // PSMC4PRH bits
    const register unsigned short int PSMC4PR8 = 0;
    sbit  PSMC4PR8_bit at PSMC4PRH.B0;
    const register unsigned short int PSMC4PR9 = 1;
    sbit  PSMC4PR9_bit at PSMC4PRH.B1;
    const register unsigned short int PSMC4PR10 = 2;
    sbit  PSMC4PR10_bit at PSMC4PRH.B2;
    const register unsigned short int PSMC4PR11 = 3;
    sbit  PSMC4PR11_bit at PSMC4PRH.B3;
    const register unsigned short int PSMC4PR12 = 4;
    sbit  PSMC4PR12_bit at PSMC4PRH.B4;
    const register unsigned short int PSMC4PR13 = 5;
    sbit  PSMC4PR13_bit at PSMC4PRH.B5;
    const register unsigned short int PSMC4PR14 = 6;
    sbit  PSMC4PR14_bit at PSMC4PRH.B6;
    const register unsigned short int PSMC4PR15 = 7;
    sbit  PSMC4PR15_bit at PSMC4PRH.B7;

    // PSMC4TMRL bits
    const register unsigned short int PSMC4TMR0 = 0;
    sbit  PSMC4TMR0_bit at PSMC4TMRL.B0;
    const register unsigned short int PSMC4TMR1 = 1;
    sbit  PSMC4TMR1_bit at PSMC4TMRL.B1;
    const register unsigned short int PSMC4TMR2 = 2;
    sbit  PSMC4TMR2_bit at PSMC4TMRL.B2;
    const register unsigned short int PSMC4TMR3 = 3;
    sbit  PSMC4TMR3_bit at PSMC4TMRL.B3;
    const register unsigned short int PSMC4TMR4 = 4;
    sbit  PSMC4TMR4_bit at PSMC4TMRL.B4;
    const register unsigned short int PSMC4TMR5 = 5;
    sbit  PSMC4TMR5_bit at PSMC4TMRL.B5;
    const register unsigned short int PSMC4TMR6 = 6;
    sbit  PSMC4TMR6_bit at PSMC4TMRL.B6;
    const register unsigned short int PSMC4TMR7 = 7;
    sbit  PSMC4TMR7_bit at PSMC4TMRL.B7;

    // PSMC4TMRH bits
    const register unsigned short int PSMC4TMR8 = 0;
    sbit  PSMC4TMR8_bit at PSMC4TMRH.B0;
    const register unsigned short int PSMC4TMR9 = 1;
    sbit  PSMC4TMR9_bit at PSMC4TMRH.B1;
    const register unsigned short int PSMC4TMR10 = 2;
    sbit  PSMC4TMR10_bit at PSMC4TMRH.B2;
    const register unsigned short int PSMC4TMR11 = 3;
    sbit  PSMC4TMR11_bit at PSMC4TMRH.B3;
    const register unsigned short int PSMC4TMR12 = 4;
    sbit  PSMC4TMR12_bit at PSMC4TMRH.B4;
    const register unsigned short int PSMC4TMR13 = 5;
    sbit  PSMC4TMR13_bit at PSMC4TMRH.B5;
    const register unsigned short int PSMC4TMR14 = 6;
    sbit  PSMC4TMR14_bit at PSMC4TMRH.B6;
    const register unsigned short int PSMC4TMR15 = 7;
    sbit  PSMC4TMR15_bit at PSMC4TMRH.B7;

    // PSMC4DBR bits
    const register unsigned short int PSMC4DBR0 = 0;
    sbit  PSMC4DBR0_bit at PSMC4DBR.B0;
    const register unsigned short int PSMC4DBR1 = 1;
    sbit  PSMC4DBR1_bit at PSMC4DBR.B1;
    const register unsigned short int PSMC4DBR2 = 2;
    sbit  PSMC4DBR2_bit at PSMC4DBR.B2;
    const register unsigned short int PSMC4DBR3 = 3;
    sbit  PSMC4DBR3_bit at PSMC4DBR.B3;
    const register unsigned short int PSMC4DBR4 = 4;
    sbit  PSMC4DBR4_bit at PSMC4DBR.B4;
    const register unsigned short int PSMC4DBR5 = 5;
    sbit  PSMC4DBR5_bit at PSMC4DBR.B5;
    const register unsigned short int PSMC4DBR6 = 6;
    sbit  PSMC4DBR6_bit at PSMC4DBR.B6;
    const register unsigned short int PSMC4DBR7 = 7;
    sbit  PSMC4DBR7_bit at PSMC4DBR.B7;

    // PSMC4DBF bits
    const register unsigned short int PSMC4DBF0 = 0;
    sbit  PSMC4DBF0_bit at PSMC4DBF.B0;
    const register unsigned short int PSMC4DBF1 = 1;
    sbit  PSMC4DBF1_bit at PSMC4DBF.B1;
    const register unsigned short int PSMC4DBF2 = 2;
    sbit  PSMC4DBF2_bit at PSMC4DBF.B2;
    const register unsigned short int PSMC4DBF3 = 3;
    sbit  PSMC4DBF3_bit at PSMC4DBF.B3;
    const register unsigned short int PSMC4DBF4 = 4;
    sbit  PSMC4DBF4_bit at PSMC4DBF.B4;
    const register unsigned short int PSMC4DBF5 = 5;
    sbit  PSMC4DBF5_bit at PSMC4DBF.B5;
    const register unsigned short int PSMC4DBF6 = 6;
    sbit  PSMC4DBF6_bit at PSMC4DBF.B6;
    const register unsigned short int PSMC4DBF7 = 7;
    sbit  PSMC4DBF7_bit at PSMC4DBF.B7;

    // PSMC4BLKR bits
    const register unsigned short int PSMC4BLKR0 = 0;
    sbit  PSMC4BLKR0_bit at PSMC4BLKR.B0;
    const register unsigned short int PSMC4BLKR1 = 1;
    sbit  PSMC4BLKR1_bit at PSMC4BLKR.B1;
    const register unsigned short int PSMC4BLKR2 = 2;
    sbit  PSMC4BLKR2_bit at PSMC4BLKR.B2;
    const register unsigned short int PSMC4BLKR3 = 3;
    sbit  PSMC4BLKR3_bit at PSMC4BLKR.B3;
    const register unsigned short int PSMC4BLKR4 = 4;
    sbit  PSMC4BLKR4_bit at PSMC4BLKR.B4;
    const register unsigned short int PSMC4BLKR5 = 5;
    sbit  PSMC4BLKR5_bit at PSMC4BLKR.B5;
    const register unsigned short int PSMC4BLKR6 = 6;
    sbit  PSMC4BLKR6_bit at PSMC4BLKR.B6;
    const register unsigned short int PSMC4BLKR7 = 7;
    sbit  PSMC4BLKR7_bit at PSMC4BLKR.B7;

    // PSMC4BLKF bits
    const register unsigned short int PSMC4BLKF0 = 0;
    sbit  PSMC4BLKF0_bit at PSMC4BLKF.B0;
    const register unsigned short int PSMC4BLKF1 = 1;
    sbit  PSMC4BLKF1_bit at PSMC4BLKF.B1;
    const register unsigned short int PSMC4BLKF2 = 2;
    sbit  PSMC4BLKF2_bit at PSMC4BLKF.B2;
    const register unsigned short int PSMC4BLKF3 = 3;
    sbit  PSMC4BLKF3_bit at PSMC4BLKF.B3;
    const register unsigned short int PSMC4BLKF4 = 4;
    sbit  PSMC4BLKF4_bit at PSMC4BLKF.B4;
    const register unsigned short int PSMC4BLKF5 = 5;
    sbit  PSMC4BLKF5_bit at PSMC4BLKF.B5;
    const register unsigned short int PSMC4BLKF6 = 6;
    sbit  PSMC4BLKF6_bit at PSMC4BLKF.B6;
    const register unsigned short int PSMC4BLKF7 = 7;
    sbit  PSMC4BLKF7_bit at PSMC4BLKF.B7;

    // PSMC4FFA bits
    const register unsigned short int PSMC4FFA0 = 0;
    sbit  PSMC4FFA0_bit at PSMC4FFA.B0;
    const register unsigned short int PSMC4FFA1 = 1;
    sbit  PSMC4FFA1_bit at PSMC4FFA.B1;
    const register unsigned short int PSMC4FFA2 = 2;
    sbit  PSMC4FFA2_bit at PSMC4FFA.B2;
    const register unsigned short int PSMC4FFA3 = 3;
    sbit  PSMC4FFA3_bit at PSMC4FFA.B3;

    // PSMC4STR0 bits
    const register unsigned short int P4STRA = 0;
    sbit  P4STRA_bit at PSMC4STR0.B0;
    const register unsigned short int P4STRB = 1;
    sbit  P4STRB_bit at PSMC4STR0.B1;

    // PSMC4STR1 bits
    const register unsigned short int P4HSMEN = 0;
    sbit  P4HSMEN_bit at PSMC4STR1.B0;
    const register unsigned short int P4LSMEN = 1;
    sbit  P4LSMEN_bit at PSMC4STR1.B1;
    const register unsigned short int P4SSYNC = 7;
    sbit  P4SSYNC_bit at PSMC4STR1.B7;

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

    // DAC2CON1 bits
    const register unsigned short int DAC2R4 = 4;
    sbit  DAC2R4_bit at DAC2CON1.B4;
    const register unsigned short int DAC2R3 = 3;
    sbit  DAC2R3_bit at DAC2CON1.B3;
    const register unsigned short int DAC2R2 = 2;
    sbit  DAC2R2_bit at DAC2CON1.B2;
    const register unsigned short int DAC2R1 = 1;
    sbit  DAC2R1_bit at DAC2CON1.B1;
    const register unsigned short int DAC2R0 = 0;
    sbit  DAC2R0_bit at DAC2CON1.B0;

    // DAC3CON1 bits
    const register unsigned short int DAC3R4 = 4;
    sbit  DAC3R4_bit at DAC3CON1.B4;
    const register unsigned short int DAC3R3 = 3;
    sbit  DAC3R3_bit at DAC3CON1.B3;
    const register unsigned short int DAC3R2 = 2;
    sbit  DAC3R2_bit at DAC3CON1.B2;
    const register unsigned short int DAC3R1 = 1;
    sbit  DAC3R1_bit at DAC3CON1.B1;
    const register unsigned short int DAC3R0 = 0;
    sbit  DAC3R0_bit at DAC3CON1.B0;

    // DAC4CON1 bits
    const register unsigned short int DAC4R4 = 4;
    sbit  DAC4R4_bit at DAC4CON1.B4;
    const register unsigned short int DAC4R3 = 3;
    sbit  DAC4R3_bit at DAC4CON1.B3;
    const register unsigned short int DAC4R2 = 2;
    sbit  DAC4R2_bit at DAC4CON1.B2;
    const register unsigned short int DAC4R1 = 1;
    sbit  DAC4R1_bit at DAC4CON1.B1;
    const register unsigned short int DAC4R0 = 0;
    sbit  DAC4R0_bit at DAC4CON1.B0;
