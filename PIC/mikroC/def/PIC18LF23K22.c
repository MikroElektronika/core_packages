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

sfr unsigned short volatile ANSELA           absolute 0x0F38;
sfr unsigned short volatile ANSELB           absolute 0x0F39;
sfr unsigned short volatile ANSELC           absolute 0x0F3A;
sfr unsigned short volatile PMD2             absolute 0x0F3D;
sfr unsigned short volatile PMD1             absolute 0x0F3E;
sfr unsigned short volatile PMD0             absolute 0x0F3F;
sfr unsigned short volatile DACCON1          absolute 0x0F40;
sfr unsigned short volatile VREFCON2         absolute 0x0F40;
sfr unsigned short volatile DACCON0          absolute 0x0F41;
sfr unsigned short volatile VREFCON1         absolute 0x0F41;
sfr unsigned short volatile FVRCON           absolute 0x0F42;
sfr unsigned short volatile VREFCON0         absolute 0x0F42;
sfr unsigned short volatile CTMUICON         absolute 0x0F43;
sfr unsigned short volatile CTMUICONH        absolute 0x0F43;
sfr unsigned short volatile CTMUCON1         absolute 0x0F44;
sfr unsigned short volatile CTMUCONL         absolute 0x0F44;
sfr unsigned short volatile CTMUCON0         absolute 0x0F45;
sfr unsigned short volatile CTMUCONH         absolute 0x0F45;
sfr unsigned short volatile SRCON1           absolute 0x0F46;
sfr unsigned short volatile SRCON0           absolute 0x0F47;
sfr unsigned short volatile CCPTMRS1         absolute 0x0F48;
sfr unsigned short volatile CCPTMRS0         absolute 0x0F49;
sfr unsigned short volatile T6CON            absolute 0x0F4A;
sfr unsigned short volatile PR6              absolute 0x0F4B;
sfr unsigned short volatile TMR6             absolute 0x0F4C;
sfr unsigned short volatile T5GCON           absolute 0x0F4D;
sfr unsigned short volatile T5CON            absolute 0x0F4E;
sfr unsigned short volatile TMR5L            absolute 0x0F4F;
sfr unsigned short volatile TMR5H            absolute 0x0F50;
sfr unsigned short volatile T4CON            absolute 0x0F51;
sfr unsigned short volatile PR4              absolute 0x0F52;
sfr unsigned short volatile TMR4             absolute 0x0F53;
sfr unsigned short volatile CCP5CON          absolute 0x0F54;
sfr unsigned short volatile CCP4CON          absolute 0x0F57;
sfr unsigned short volatile PSTR3CON         absolute 0x0F5A;
sfr unsigned short volatile CCP3AS           absolute 0x0F5B;
sfr unsigned short volatile ECCP3AS          absolute 0x0F5B;
sfr unsigned short          PWM3CON          absolute 0x0F5C;
sfr unsigned short volatile CCP3CON          absolute 0x0F5D;
sfr unsigned short volatile SLRCON           absolute 0x0F60;
sfr unsigned short          WPUB             absolute 0x0F61;
sfr unsigned short volatile IOCB             absolute 0x0F62;
sfr unsigned short volatile PSTR2CON         absolute 0x0F63;
sfr unsigned short volatile CCP2AS           absolute 0x0F64;
sfr unsigned short volatile ECCP2AS          absolute 0x0F64;
sfr unsigned short          PWM2CON          absolute 0x0F65;
sfr unsigned short volatile CCP2CON          absolute 0x0F66;
sfr unsigned short volatile SSP2CON3         absolute 0x0F69;
sfr unsigned short volatile SSP2MSK          absolute 0x0F6A;
sfr unsigned short volatile SSP2CON2         absolute 0x0F6B;
sfr unsigned short volatile SSP2CON1         absolute 0x0F6C;
sfr unsigned short volatile SSP2STAT         absolute 0x0F6D;
sfr unsigned short volatile SSP2ADD          absolute 0x0F6E;
sfr unsigned short volatile SSP2BUF          absolute 0x0F6F;
sfr unsigned short volatile BAUD2CON         absolute 0x0F70;
sfr unsigned short          BAUDCON2         absolute 0x0F70;
sfr unsigned short volatile RC2STA           absolute 0x0F71;
sfr unsigned short volatile RCSTA2           absolute 0x0F71;
sfr unsigned short volatile TX2STA           absolute 0x0F72;
sfr unsigned short volatile TXSTA2           absolute 0x0F72;
sfr unsigned short volatile TX2REG           absolute 0x0F73;
sfr unsigned short volatile TXREG2           absolute 0x0F73;
sfr unsigned short volatile RC2REG           absolute 0x0F74;
sfr unsigned short volatile RCREG2           absolute 0x0F74;
sfr unsigned short volatile SP2BRG           absolute 0x0F75;
sfr unsigned short          SPBRG2           absolute 0x0F75;
sfr unsigned short volatile SP2BRGH          absolute 0x0F76;
sfr unsigned short          SPBRGH2          absolute 0x0F76;
sfr unsigned short volatile CM12CON          absolute 0x0F77;
sfr unsigned short volatile CM2CON1          absolute 0x0F77;
sfr unsigned short volatile CM2CON           absolute 0x0F78;
sfr unsigned short volatile CM2CON0          absolute 0x0F78;
sfr unsigned short volatile CM1CON           absolute 0x0F79;
sfr unsigned short volatile CM1CON0          absolute 0x0F79;
sfr unsigned short volatile PIE4             absolute 0x0F7A;
sfr unsigned short volatile PIR4             absolute 0x0F7B;
sfr unsigned short volatile IPR4             absolute 0x0F7C;
sfr unsigned short volatile PIE5             absolute 0x0F7D;
sfr unsigned short volatile PIR5             absolute 0x0F7E;
sfr unsigned short volatile IPR5             absolute 0x0F7F;
sfr unsigned short volatile LATA             absolute 0x0F89;
sfr unsigned short volatile LATB             absolute 0x0F8A;
sfr unsigned short volatile LATC             absolute 0x0F8B;
sfr unsigned short volatile OSCTUNE          absolute 0x0F9B;
sfr unsigned short volatile HLVDCON          absolute 0x0F9C;
sfr unsigned short volatile LVDCON           absolute 0x0F9C;
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
sfr unsigned short volatile EEDATA           absolute 0x0FA8;
sfr unsigned short volatile EEADR            absolute 0x0FA9;
sfr unsigned short volatile RC1STA           absolute 0x0FAB;
sfr unsigned short volatile RCSTA            absolute 0x0FAB;
sfr unsigned short volatile RCSTA1           absolute 0x0FAB;
sfr unsigned short volatile TX1STA           absolute 0x0FAC;
sfr unsigned short volatile TXSTA            absolute 0x0FAC;
sfr unsigned short volatile TXSTA1           absolute 0x0FAC;
sfr unsigned short volatile TX1REG           absolute 0x0FAD;
sfr unsigned short volatile TXREG            absolute 0x0FAD;
sfr unsigned short volatile TXREG1           absolute 0x0FAD;
sfr unsigned short volatile RC1REG           absolute 0x0FAE;
sfr unsigned short volatile RCREG            absolute 0x0FAE;
sfr unsigned short volatile RCREG1           absolute 0x0FAE;
sfr unsigned short volatile SP1BRG           absolute 0x0FAF;
sfr unsigned short          SPBRG            absolute 0x0FAF;
sfr unsigned short          SPBRG1           absolute 0x0FAF;
sfr unsigned short volatile SP1BRGH          absolute 0x0FB0;
sfr unsigned short          SPBRGH           absolute 0x0FB0;
sfr unsigned short          SPBRGH1          absolute 0x0FB0;
sfr unsigned short volatile T3CON            absolute 0x0FB1;
sfr unsigned short volatile TMR3L            absolute 0x0FB2;
sfr unsigned short volatile TMR3H            absolute 0x0FB3;
sfr unsigned short volatile T3GCON           absolute 0x0FB4;
sfr unsigned short volatile ECCP1AS          absolute 0x0FB6;
sfr unsigned short volatile ECCPAS           absolute 0x0FB6;
sfr unsigned short          PWM1CON          absolute 0x0FB7;
sfr unsigned short volatile PWMCON           absolute 0x0FB7;
sfr unsigned short volatile BAUD1CON         absolute 0x0FB8;
sfr unsigned short          BAUDCON          absolute 0x0FB8;
sfr unsigned short          BAUDCON1         absolute 0x0FB8;
sfr unsigned short          BAUDCTL          absolute 0x0FB8;
sfr unsigned short volatile PSTR1CON         absolute 0x0FB9;
sfr unsigned short volatile PSTRCON          absolute 0x0FB9;
sfr unsigned short volatile T2CON            absolute 0x0FBA;
sfr unsigned short volatile PR2              absolute 0x0FBB;
sfr unsigned short volatile TMR2             absolute 0x0FBC;
sfr unsigned short volatile CCP1CON          absolute 0x0FBD;
sfr unsigned int   volatile CCPR1            absolute 0x0FBE;
sfr unsigned short volatile CCPR1L           absolute 0x0FBE;
sfr unsigned short volatile CCPR1H           absolute 0x0FBF;
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
sfr unsigned short volatile SSP1MSK          absolute 0x0FCA;
sfr unsigned short volatile SSPMSK           absolute 0x0FCA;
sfr unsigned short volatile SSP1CON3         absolute 0x0FCB;
sfr unsigned short volatile SSPCON3          absolute 0x0FCB;
sfr unsigned short volatile T1GCON           absolute 0x0FCC;
sfr unsigned short volatile T1CON            absolute 0x0FCD;
sfr unsigned short volatile TMR1L            absolute 0x0FCE;
sfr unsigned short volatile TMR1H            absolute 0x0FCF;
sfr unsigned short volatile RCON             absolute 0x0FD0;
sfr unsigned short          WDTCON           absolute 0x0FD1;
sfr unsigned short volatile OSCCON2          absolute 0x0FD2;
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
sfr unsigned short volatile CCPR5L           absolute 0x0F55;
sfr unsigned short volatile CCPR5H           absolute 0x0F56;
sfr unsigned short volatile CCPR4L           absolute 0x0F58;
sfr unsigned short volatile CCPR4H           absolute 0x0F59;
sfr unsigned short volatile CCPR3L           absolute 0x0F5E;
sfr unsigned short volatile CCPR3H           absolute 0x0F5F;
sfr unsigned int   volatile CCPR2            absolute 0x0F67;
sfr unsigned short volatile CCPR2L           absolute 0x0F67;
sfr unsigned short volatile CCPR2H           absolute 0x0F68;
sfr unsigned short volatile PORTA            absolute 0x0F80;
sfr unsigned short volatile PORTB            absolute 0x0F81;
sfr unsigned short volatile PORTC            absolute 0x0F82;
sfr unsigned short volatile PORTE            absolute 0x0F84;
sfr unsigned short volatile TRISA            absolute 0x0F92;
sfr unsigned short volatile TRISB            absolute 0x0F93;
sfr unsigned short volatile TRISC            absolute 0x0F94;
sfr unsigned short volatile TRISE            absolute 0x0F96;
sfr unsigned int   volatile ADRES            absolute 0x0FC3;
sfr unsigned int            PROD             absolute 0x0FF3;
sfr unsigned short          PRODL            absolute 0x0FF3;
sfr unsigned short          PRODH            absolute 0x0FF4;
sfr unsigned short volatile TOSL             absolute 0x0FFD;
sfr unsigned short volatile TOSH             absolute 0x0FFE;
sfr unsigned short volatile TOSU             absolute 0x0FFF;

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

    // PMD2 bits
    const register unsigned short int ADCMD = 0;
    sbit  ADCMD_bit at PMD2.B0;
    const register unsigned short int CMP1MD = 1;
    sbit  CMP1MD_bit at PMD2.B1;
    const register unsigned short int CMP2MD = 2;
    sbit  CMP2MD_bit at PMD2.B2;
    const register unsigned short int CTMUMD = 3;
    sbit  CTMUMD_bit at PMD2.B3;

    // PMD1 bits
    const register unsigned short int CCP1MD = 0;
    sbit  CCP1MD_bit at PMD1.B0;
    const register unsigned short int CCP2MD = 1;
    sbit  CCP2MD_bit at PMD1.B1;
    const register unsigned short int CCP3MD = 2;
    sbit  CCP3MD_bit at PMD1.B2;
    const register unsigned short int CCP4MD = 3;
    sbit  CCP4MD_bit at PMD1.B3;
    const register unsigned short int CCP5MD = 4;
    sbit  CCP5MD_bit at PMD1.B4;
    const register unsigned short int MSSP1MD = 6;
    sbit  MSSP1MD_bit at PMD1.B6;
    const register unsigned short int MSSP2MD = 7;
    sbit  MSSP2MD_bit at PMD1.B7;

    // PMD0 bits
    const register unsigned short int TMR1MD = 0;
    sbit  TMR1MD_bit at PMD0.B0;
    const register unsigned short int TMR2MD = 1;
    sbit  TMR2MD_bit at PMD0.B1;
    const register unsigned short int TMR3MD = 2;
    sbit  TMR3MD_bit at PMD0.B2;
    const register unsigned short int TMR4MD = 3;
    sbit  TMR4MD_bit at PMD0.B3;
    const register unsigned short int TMR5MD = 4;
    sbit  TMR5MD_bit at PMD0.B4;
    const register unsigned short int TMR6MD = 5;
    sbit  TMR6MD_bit at PMD0.B5;
    const register unsigned short int UART1MD = 6;
    sbit  UART1MD_bit at PMD0.B6;
    const register unsigned short int UART2MD = 7;
    sbit  UART2MD_bit at PMD0.B7;

    // DACCON1, VREFCON2 bits
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

    // DACCON0, VREFCON1 bits
    const register unsigned short int DACNSS = 0;
    sbit  DACNSS_bit at DACCON0.B0;
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

    // FVRCON, VREFCON0 bits
    const register unsigned short int FVRST = 6;
    sbit  FVRST_bit at FVRCON.B6;
    const register unsigned short int FVREN = 7;
    sbit  FVREN_bit at FVRCON.B7;
    const register unsigned short int FVRS0 = 4;
    sbit  FVRS0_bit at FVRCON.B4;
    const register unsigned short int FVRS1 = 5;
    sbit  FVRS1_bit at FVRCON.B5;

    // CTMUICON, CTMUICONH bits
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

    // CTMUCON1, CTMUCONL bits
    const register unsigned short int EDG1STAT = 0;
    sbit  EDG1STAT_bit at CTMUCON1.B0;
    const register unsigned short int EDG2STAT = 1;
    sbit  EDG2STAT_bit at CTMUCON1.B1;
    const register unsigned short int EDG1POL = 4;
    sbit  EDG1POL_bit at CTMUCON1.B4;
    const register unsigned short int EDG2POL = 7;
    sbit  EDG2POL_bit at CTMUCON1.B7;
    const register unsigned short int EDG1SEL0 = 2;
    sbit  EDG1SEL0_bit at CTMUCON1.B2;
    const register unsigned short int EDG1SEL1 = 3;
    sbit  EDG1SEL1_bit at CTMUCON1.B3;
    const register unsigned short int EDG2SEL0 = 5;
    sbit  EDG2SEL0_bit at CTMUCON1.B5;
    const register unsigned short int EDG2SEL1 = 6;
    sbit  EDG2SEL1_bit at CTMUCON1.B6;

    // CTMUCON0, CTMUCONH bits
    const register unsigned short int CTTRIG = 0;
    sbit  CTTRIG_bit at CTMUCON0.B0;
    const register unsigned short int IDISSEN = 1;
    sbit  IDISSEN_bit at CTMUCON0.B1;
    const register unsigned short int EDGSEQEN = 2;
    sbit  EDGSEQEN_bit at CTMUCON0.B2;
    const register unsigned short int EDGEN = 3;
    sbit  EDGEN_bit at CTMUCON0.B3;
    const register unsigned short int TGEN = 4;
    sbit  TGEN_bit at CTMUCON0.B4;
    const register unsigned short int CTMUSIDL = 5;
    sbit  CTMUSIDL_bit at CTMUCON0.B5;
    const register unsigned short int CTMUEN = 7;
    sbit  CTMUEN_bit at CTMUCON0.B7;

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

    // SRCON0 bits
    const register unsigned short int SRPR = 0;
    sbit  SRPR_bit at SRCON0.B0;
    const register unsigned short int SRPS = 1;
    sbit  SRPS_bit at SRCON0.B1;
    const register unsigned short int SRNQEN = 2;
    sbit  SRNQEN_bit at SRCON0.B2;
    const register unsigned short int SRQEN = 3;
    sbit  SRQEN_bit at SRCON0.B3;
    const register unsigned short int SRLEN = 7;
    sbit  SRLEN_bit at SRCON0.B7;
    const register unsigned short int SRCLK0 = 4;
    sbit  SRCLK0_bit at SRCON0.B4;
    const register unsigned short int SRCLK1 = 5;
    sbit  SRCLK1_bit at SRCON0.B5;
    const register unsigned short int SRCLK2 = 6;
    sbit  SRCLK2_bit at SRCON0.B6;

    // CCPTMRS1 bits
    const register unsigned short int C4TSEL0 = 0;
    sbit  C4TSEL0_bit at CCPTMRS1.B0;
    const register unsigned short int C4TSEL1 = 1;
    sbit  C4TSEL1_bit at CCPTMRS1.B1;
    const register unsigned short int C5TSEL0 = 2;
    sbit  C5TSEL0_bit at CCPTMRS1.B2;
    const register unsigned short int C5TSEL1 = 3;
    sbit  C5TSEL1_bit at CCPTMRS1.B3;

    // CCPTMRS0 bits
    const register unsigned short int C1TSEL0 = 0;
    sbit  C1TSEL0_bit at CCPTMRS0.B0;
    const register unsigned short int C1TSEL1 = 1;
    sbit  C1TSEL1_bit at CCPTMRS0.B1;
    const register unsigned short int C2TSEL0 = 3;
    sbit  C2TSEL0_bit at CCPTMRS0.B3;
    const register unsigned short int C2TSEL1 = 4;
    sbit  C2TSEL1_bit at CCPTMRS0.B4;
    const register unsigned short int C3TSEL0 = 6;
    sbit  C3TSEL0_bit at CCPTMRS0.B6;
    const register unsigned short int C3TSEL1 = 7;
    sbit  C3TSEL1_bit at CCPTMRS0.B7;

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
    const register unsigned short int T5GGO = 3;
    sbit  T5GGO_bit at T5GCON.B3;
    const register unsigned short int T5G_DONE = 3;
    sbit  T5G_DONE_bit at T5GCON.B3;

    // T5CON bits
    const register unsigned short int TMR5ON = 0;
    sbit  TMR5ON_bit at T5CON.B0;
    const register unsigned short int T5RD16 = 1;
    sbit  T5RD16_bit at T5CON.B1;
    const register unsigned short int NOT_T5SYNC = 2;
    sbit  NOT_T5SYNC_bit at T5CON.B2;
    const register unsigned short int T5SOSCEN = 3;
    sbit  T5SOSCEN_bit at T5CON.B3;
    const register unsigned short int T5SYNC = 2;
    sbit  T5SYNC_bit at T5CON.B2;
    const register unsigned short int T5CKPS0 = 4;
    sbit  T5CKPS0_bit at T5CON.B4;
    const register unsigned short int T5CKPS1 = 5;
    sbit  T5CKPS1_bit at T5CON.B5;
    const register unsigned short int TMR5CS0 = 6;
    sbit  TMR5CS0_bit at T5CON.B6;
    const register unsigned short int TMR5CS1 = 7;
    sbit  TMR5CS1_bit at T5CON.B7;

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

    // CCP3AS, ECCP3AS bits
    const register unsigned short int CCP3ASE = 7;
    sbit  CCP3ASE_bit at CCP3AS.B7;
    const register unsigned short int P3SSBD0 = 0;
    sbit  P3SSBD0_bit at CCP3AS.B0;
    const register unsigned short int P3SSBD1 = 1;
    sbit  P3SSBD1_bit at CCP3AS.B1;
    const register unsigned short int P3SSAC0 = 2;
    sbit  P3SSAC0_bit at CCP3AS.B2;
    const register unsigned short int P3SSAC1 = 3;
    sbit  P3SSAC1_bit at CCP3AS.B3;
    const register unsigned short int CCP3AS0 = 4;
    sbit  CCP3AS0_bit at CCP3AS.B4;
    const register unsigned short int CCP3AS1 = 5;
    sbit  CCP3AS1_bit at CCP3AS.B5;
    const register unsigned short int CCP3AS2 = 6;
    sbit  CCP3AS2_bit at CCP3AS.B6;
    const register unsigned short int PSS3BD0 = 0;
    sbit  PSS3BD0_bit at CCP3AS.B0;
    const register unsigned short int PSS3BD1 = 1;
    sbit  PSS3BD1_bit at CCP3AS.B1;
    const register unsigned short int PSS3AC0 = 2;
    sbit  PSS3AC0_bit at CCP3AS.B2;
    const register unsigned short int PSS3AC1 = 3;
    sbit  PSS3AC1_bit at CCP3AS.B3;

    // PWM3CON bits
    const register unsigned short int P3RSEN = 7;
    sbit  P3RSEN_bit at PWM3CON.B7;
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

    // SLRCON bits
    const register unsigned short int SLRA = 0;
    sbit  SLRA_bit at SLRCON.B0;
    const register unsigned short int SLRB = 1;
    sbit  SLRB_bit at SLRCON.B1;
    const register unsigned short int SLRC = 2;
    sbit  SLRC_bit at SLRCON.B2;

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
    const register unsigned short int IOCB4 = 4;
    sbit  IOCB4_bit at IOCB.B4;
    const register unsigned short int IOCB5 = 5;
    sbit  IOCB5_bit at IOCB.B5;
    const register unsigned short int IOCB6 = 6;
    sbit  IOCB6_bit at IOCB.B6;
    const register unsigned short int IOCB7 = 7;
    sbit  IOCB7_bit at IOCB.B7;

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

    // CCP2AS, ECCP2AS bits
    const register unsigned short int CCP2ASE = 7;
    sbit  CCP2ASE_bit at CCP2AS.B7;
    const register unsigned short int P2SSBD0 = 0;
    sbit  P2SSBD0_bit at CCP2AS.B0;
    const register unsigned short int P2SSBD1 = 1;
    sbit  P2SSBD1_bit at CCP2AS.B1;
    const register unsigned short int P2SSAC0 = 2;
    sbit  P2SSAC0_bit at CCP2AS.B2;
    const register unsigned short int P2SSAC1 = 3;
    sbit  P2SSAC1_bit at CCP2AS.B3;
    const register unsigned short int CCP2AS0 = 4;
    sbit  CCP2AS0_bit at CCP2AS.B4;
    const register unsigned short int CCP2AS1 = 5;
    sbit  CCP2AS1_bit at CCP2AS.B5;
    const register unsigned short int CCP2AS2 = 6;
    sbit  CCP2AS2_bit at CCP2AS.B6;
    const register unsigned short int PSS2BD0 = 0;
    sbit  PSS2BD0_bit at CCP2AS.B0;
    const register unsigned short int PSS2BD1 = 1;
    sbit  PSS2BD1_bit at CCP2AS.B1;
    const register unsigned short int PSS2AC0 = 2;
    sbit  PSS2AC0_bit at CCP2AS.B2;
    const register unsigned short int PSS2AC1 = 3;
    sbit  PSS2AC1_bit at CCP2AS.B3;

    // PWM2CON bits
    const register unsigned short int P2RSEN = 7;
    sbit  P2RSEN_bit at PWM2CON.B7;
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

    // CCP2CON bits
    const register unsigned short int P2M0 = 6;
    sbit  P2M0_bit at CCP2CON.B6;
    const register unsigned short int P2M1 = 7;
    sbit  P2M1_bit at CCP2CON.B7;
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

    // SSP2CON3 bits
    const register unsigned short int DHEN = 0;
    sbit  DHEN_bit at SSP2CON3.B0;
    const register unsigned short int AHEN = 1;
    sbit  AHEN_bit at SSP2CON3.B1;
    const register unsigned short int SBCDE = 2;
    sbit  SBCDE_bit at SSP2CON3.B2;
    const register unsigned short int SDAHT = 3;
    sbit  SDAHT_bit at SSP2CON3.B3;
    const register unsigned short int BOEN = 4;
    sbit  BOEN_bit at SSP2CON3.B4;
    const register unsigned short int SCIE = 5;
    sbit  SCIE_bit at SSP2CON3.B5;
    const register unsigned short int PCIE = 6;
    sbit  PCIE_bit at SSP2CON3.B6;
    const register unsigned short int ACKTIM = 7;
    sbit  ACKTIM_bit at SSP2CON3.B7;

    // SSP2MSK bits
    const register unsigned short int MSK0 = 0;
    sbit  MSK0_bit at SSP2MSK.B0;
    const register unsigned short int MSK1 = 1;
    sbit  MSK1_bit at SSP2MSK.B1;
    const register unsigned short int MSK2 = 2;
    sbit  MSK2_bit at SSP2MSK.B2;
    const register unsigned short int MSK3 = 3;
    sbit  MSK3_bit at SSP2MSK.B3;
    const register unsigned short int MSK4 = 4;
    sbit  MSK4_bit at SSP2MSK.B4;
    const register unsigned short int MSK5 = 5;
    sbit  MSK5_bit at SSP2MSK.B5;
    const register unsigned short int MSK6 = 6;
    sbit  MSK6_bit at SSP2MSK.B6;
    const register unsigned short int MSK7 = 7;
    sbit  MSK7_bit at SSP2MSK.B7;

    // SSP2CON2 bits
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at SSP2CON2.B0;
    const register unsigned short int RSEN = 1;
    sbit  RSEN_bit at SSP2CON2.B1;
    const register unsigned short int PEN = 2;
    sbit  PEN_bit at SSP2CON2.B2;
    const register unsigned short int RCEN = 3;
    sbit  RCEN_bit at SSP2CON2.B3;
    const register unsigned short int ACKEN = 4;
    sbit  ACKEN_bit at SSP2CON2.B4;
    const register unsigned short int ACKDT = 5;
    sbit  ACKDT_bit at SSP2CON2.B5;
    const register unsigned short int ACKSTAT = 6;
    sbit  ACKSTAT_bit at SSP2CON2.B6;
    const register unsigned short int GCEN = 7;
    sbit  GCEN_bit at SSP2CON2.B7;

    // SSP2CON1 bits
    const register unsigned short int CKP = 4;
    sbit  CKP_bit at SSP2CON1.B4;
    const register unsigned short int SSPEN = 5;
    sbit  SSPEN_bit at SSP2CON1.B5;
    const register unsigned short int SSPOV = 6;
    sbit  SSPOV_bit at SSP2CON1.B6;
    const register unsigned short int WCOL = 7;
    sbit  WCOL_bit at SSP2CON1.B7;
    const register unsigned short int SSPM0 = 0;
    sbit  SSPM0_bit at SSP2CON1.B0;
    const register unsigned short int SSPM1 = 1;
    sbit  SSPM1_bit at SSP2CON1.B1;
    const register unsigned short int SSPM2 = 2;
    sbit  SSPM2_bit at SSP2CON1.B2;
    const register unsigned short int SSPM3 = 3;
    sbit  SSPM3_bit at SSP2CON1.B3;

    // SSP2STAT bits
    const register unsigned short int BF = 0;
    sbit  BF_bit at SSP2STAT.B0;
    const register unsigned short int UA = 1;
    sbit  UA_bit at SSP2STAT.B1;
    const register unsigned short int R_NOT_W = 2;
    sbit  R_NOT_W_bit at SSP2STAT.B2;
    const register unsigned short int S = 3;
    sbit  S_bit at SSP2STAT.B3;
    const register unsigned short int P = 4;
    sbit  P_bit at SSP2STAT.B4;
    const register unsigned short int D_NOT_A = 5;
    sbit  D_NOT_A_bit at SSP2STAT.B5;
    const register unsigned short int CKE = 6;
    sbit  CKE_bit at SSP2STAT.B6;
    const register unsigned short int SMP = 7;
    sbit  SMP_bit at SSP2STAT.B7;
    const register unsigned short int R = 2;
    sbit  R_bit at SSP2STAT.B2;
    const register unsigned short int D = 5;
    sbit  D_bit at SSP2STAT.B5;
    const register unsigned short int NOT_W = 2;
    sbit  NOT_W_bit at SSP2STAT.B2;
    const register unsigned short int NOT_A = 5;
    sbit  NOT_A_bit at SSP2STAT.B5;
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at SSP2STAT.B2;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at SSP2STAT.B5;
    const register unsigned short int NOT_WRITE = 2;
    sbit  NOT_WRITE_bit at SSP2STAT.B2;
    const register unsigned short int NOT_ADDRESS = 5;
    sbit  NOT_ADDRESS_bit at SSP2STAT.B5;

    // BAUD2CON, BAUDCON2 bits
    const register unsigned short int ABDEN = 0;
    sbit  ABDEN_bit at BAUD2CON.B0;
    const register unsigned short int WUE = 1;
    sbit  WUE_bit at BAUD2CON.B1;
    const register unsigned short int BRG16 = 3;
    sbit  BRG16_bit at BAUD2CON.B3;
    const register unsigned short int CKTXP = 4;
    sbit  CKTXP_bit at BAUD2CON.B4;
    const register unsigned short int DTRXP = 5;
    sbit  DTRXP_bit at BAUD2CON.B5;
    const register unsigned short int RCIDL = 6;
    sbit  RCIDL_bit at BAUD2CON.B6;
    const register unsigned short int ABDOVF = 7;
    sbit  ABDOVF_bit at BAUD2CON.B7;
    const register unsigned short int SCKP = 4;
    sbit  SCKP_bit at BAUD2CON.B4;

    // RC2STA, RCSTA2 bits
    const register unsigned short int RX9D = 0;
    sbit  RX9D_bit at RC2STA.B0;
    const register unsigned short int OERR = 1;
    sbit  OERR_bit at RC2STA.B1;
    const register unsigned short int FERR = 2;
    sbit  FERR_bit at RC2STA.B2;
    const register unsigned short int ADDEN = 3;
    sbit  ADDEN_bit at RC2STA.B3;
    const register unsigned short int CREN = 4;
    sbit  CREN_bit at RC2STA.B4;
    const register unsigned short int SREN = 5;
    sbit  SREN_bit at RC2STA.B5;
    const register unsigned short int RX9 = 6;
    sbit  RX9_bit at RC2STA.B6;
    const register unsigned short int SPEN = 7;
    sbit  SPEN_bit at RC2STA.B7;
    const register unsigned short int ADEN = 3;
    sbit  ADEN_bit at RC2STA.B3;
    const register unsigned short int RX9D2 = 0;
    sbit  RX9D2_bit at RC2STA.B0;
    const register unsigned short int OERR2 = 1;
    sbit  OERR2_bit at RC2STA.B1;
    const register unsigned short int FERR2 = 2;
    sbit  FERR2_bit at RC2STA.B2;
    const register unsigned short int ADDEN2 = 3;
    sbit  ADDEN2_bit at RC2STA.B3;
    const register unsigned short int CREN2 = 4;
    sbit  CREN2_bit at RC2STA.B4;
    const register unsigned short int SREN2 = 5;
    sbit  SREN2_bit at RC2STA.B5;
    const register unsigned short int RX92 = 6;
    sbit  RX92_bit at RC2STA.B6;
    const register unsigned short int SPEN2 = 7;
    sbit  SPEN2_bit at RC2STA.B7;

    // TX2STA, TXSTA2 bits
    const register unsigned short int TX9D = 0;
    sbit  TX9D_bit at TX2STA.B0;
    const register unsigned short int TRMT = 1;
    sbit  TRMT_bit at TX2STA.B1;
    const register unsigned short int BRGH = 2;
    sbit  BRGH_bit at TX2STA.B2;
    const register unsigned short int SENDB = 3;
    sbit  SENDB_bit at TX2STA.B3;
    const register unsigned short int SYNC = 4;
    sbit  SYNC_bit at TX2STA.B4;
    const register unsigned short int TXEN = 5;
    sbit  TXEN_bit at TX2STA.B5;
    const register unsigned short int TX9 = 6;
    sbit  TX9_bit at TX2STA.B6;
    const register unsigned short int CSRC = 7;
    sbit  CSRC_bit at TX2STA.B7;
    const register unsigned short int TX9D2 = 0;
    sbit  TX9D2_bit at TX2STA.B0;
    const register unsigned short int TRMT2 = 1;
    sbit  TRMT2_bit at TX2STA.B1;
    const register unsigned short int BRGH2 = 2;
    sbit  BRGH2_bit at TX2STA.B2;
    const register unsigned short int SENDB2 = 3;
    sbit  SENDB2_bit at TX2STA.B3;
    const register unsigned short int SYNC2 = 4;
    sbit  SYNC2_bit at TX2STA.B4;
    const register unsigned short int TXEN2 = 5;
    sbit  TXEN2_bit at TX2STA.B5;
    const register unsigned short int TX92 = 6;
    sbit  TX92_bit at TX2STA.B6;
    const register unsigned short int CSRC2 = 7;
    sbit  CSRC2_bit at TX2STA.B7;

    // CM12CON bits
    const register unsigned short int C2SYNC = 0;
    sbit  C2SYNC_bit at CM12CON.B0;
    const register unsigned short int C1SYNC = 1;
    sbit  C1SYNC_bit at CM12CON.B1;
    const register unsigned short int C2HYS = 2;
    sbit  C2HYS_bit at CM12CON.B2;
    const register unsigned short int C1HYS = 3;
    sbit  C1HYS_bit at CM12CON.B3;
    const register unsigned short int C2RSEL = 4;
    sbit  C2RSEL_bit at CM12CON.B4;
    const register unsigned short int C1RSEL = 5;
    sbit  C1RSEL_bit at CM12CON.B5;
    const register unsigned short int MC2OUT = 6;
    sbit  MC2OUT_bit at CM12CON.B6;
    const register unsigned short int MC1OUT = 7;
    sbit  MC1OUT_bit at CM12CON.B7;

    // CM2CON1 bits
    sbit  C2SYNC_CM2CON1_bit at CM2CON1.B0;
    sbit  C1SYNC_CM2CON1_bit at CM2CON1.B1;
    sbit  C2HYS_CM2CON1_bit at CM2CON1.B2;
    sbit  C1HYS_CM2CON1_bit at CM2CON1.B3;
    sbit  C2RSEL_CM2CON1_bit at CM2CON1.B4;
    sbit  C1RSEL_CM2CON1_bit at CM2CON1.B5;
    sbit  MC2OUT_CM2CON1_bit at CM2CON1.B6;
    sbit  MC1OUT_CM2CON1_bit at CM2CON1.B7;

    // CM2CON, CM2CON0 bits
    const register unsigned short int C2R = 2;
    sbit  C2R_bit at CM2CON.B2;
    const register unsigned short int C2SP = 3;
    sbit  C2SP_bit at CM2CON.B3;
    const register unsigned short int C2POL = 4;
    sbit  C2POL_bit at CM2CON.B4;
    const register unsigned short int C2OE = 5;
    sbit  C2OE_bit at CM2CON.B5;
    const register unsigned short int C2OUT_CM2CON = 6;
    sbit  C2OUT_CM2CON_bit at CM2CON.B6;
    const register unsigned short int C2ON = 7;
    sbit  C2ON_bit at CM2CON.B7;
    const register unsigned short int C2CH0 = 0;
    sbit  C2CH0_bit at CM2CON.B0;
    const register unsigned short int C2CH1 = 1;
    sbit  C2CH1_bit at CM2CON.B1;

    // CM1CON, CM1CON0 bits
    const register unsigned short int C1R = 2;
    sbit  C1R_bit at CM1CON.B2;
    const register unsigned short int C1SP = 3;
    sbit  C1SP_bit at CM1CON.B3;
    const register unsigned short int C1POL = 4;
    sbit  C1POL_bit at CM1CON.B4;
    const register unsigned short int C1OE = 5;
    sbit  C1OE_bit at CM1CON.B5;
    const register unsigned short int C1OUT_CM1CON = 6;
    sbit  C1OUT_CM1CON_bit at CM1CON.B6;
    const register unsigned short int C1ON = 7;
    sbit  C1ON_bit at CM1CON.B7;
    const register unsigned short int C1CH0 = 0;
    sbit  C1CH0_bit at CM1CON.B0;
    const register unsigned short int C1CH1 = 1;
    sbit  C1CH1_bit at CM1CON.B1;

    // PIE4 bits
    const register unsigned short int CCP3IE = 0;
    sbit  CCP3IE_bit at PIE4.B0;
    const register unsigned short int CCP4IE = 1;
    sbit  CCP4IE_bit at PIE4.B1;
    const register unsigned short int CCP5IE = 2;
    sbit  CCP5IE_bit at PIE4.B2;

    // PIR4 bits
    const register unsigned short int CCP3IF = 0;
    sbit  CCP3IF_bit at PIR4.B0;
    const register unsigned short int CCP4IF = 1;
    sbit  CCP4IF_bit at PIR4.B1;
    const register unsigned short int CCP5IF = 2;
    sbit  CCP5IF_bit at PIR4.B2;

    // IPR4 bits
    const register unsigned short int CCP3IP = 0;
    sbit  CCP3IP_bit at IPR4.B0;
    const register unsigned short int CCP4IP = 1;
    sbit  CCP4IP_bit at IPR4.B1;
    const register unsigned short int CCP5IP = 2;
    sbit  CCP5IP_bit at IPR4.B2;

    // PIE5 bits
    const register unsigned short int TMR4IE = 0;
    sbit  TMR4IE_bit at PIE5.B0;
    const register unsigned short int TMR5IE = 1;
    sbit  TMR5IE_bit at PIE5.B1;
    const register unsigned short int TMR6IE = 2;
    sbit  TMR6IE_bit at PIE5.B2;

    // PIR5 bits
    const register unsigned short int TMR4IF = 0;
    sbit  TMR4IF_bit at PIR5.B0;
    const register unsigned short int TMR5IF = 1;
    sbit  TMR5IF_bit at PIR5.B1;
    const register unsigned short int TMR6IF = 2;
    sbit  TMR6IF_bit at PIR5.B2;

    // IPR5 bits
    const register unsigned short int TMR4IP = 0;
    sbit  TMR4IP_bit at IPR5.B0;
    const register unsigned short int TMR5IP = 1;
    sbit  TMR5IP_bit at IPR5.B1;
    const register unsigned short int TMR6IP = 2;
    sbit  TMR6IP_bit at IPR5.B2;

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
    const register unsigned short int C12IN0M = 0;
    sbit  C12IN0M_bit at PORTA.B0;

    // Alternative bit function
    const register unsigned short int C12IN1M = 1;
    sbit  C12IN1M_bit at PORTA.B1;

    // Alternative bit function
    const register unsigned short int C2INP = 2;
    sbit  C2INP_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int C1INP = 3;
    sbit  C1INP_bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int C1OUT_PORTA = 4;
    sbit  C1OUT_PORTA_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int C2OUT_PORTA = 5;
    sbit  C2OUT_PORTA_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int C12IN0N = 0;
    sbit  C12IN0N_bit at PORTA.B0;

    // Alternative bit function
    const register unsigned short int C12IN1N = 1;
    sbit  C12IN1N_bit at PORTA.B1;

    // Alternative bit function
    const register unsigned short int VREFM = 2;
    sbit  VREFM_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int VREFP = 3;
    sbit  VREFP_bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int T0CKI = 4;
    sbit  T0CKI_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int SS = 5;
    sbit  SS_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int VREFN = 2;
    sbit  VREFN_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int SRQ = 4;
    sbit  SRQ_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int NOT_SS = 5;
    sbit  NOT_SS_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int CVREF = 2;
    sbit  CVREF_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int CCP5 = 4;
    sbit  CCP5_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int LVDIN = 5;
    sbit  LVDIN_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int DACOUT = 2;
    sbit  DACOUT_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int HLVDIN = 5;
    sbit  HLVDIN_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int SS1 = 5;
    sbit  SS1_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int NOT_SS1 = 5;
    sbit  NOT_SS1_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int SRNQ = 5;
    sbit  SRNQ_bit at PORTA.B5;

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
    const register unsigned short int CCP2_PORTB = 3;
    sbit  CCP2_PORTB_bit at PORTB.B3;

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
    const register unsigned short int TX2 = 6;
    sbit  TX2_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int RX2 = 7;
    sbit  RX2_bit at PORTB.B7;

    // Alternative bit function
    const register unsigned short int FLT0 = 0;
    sbit  FLT0_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int C12IN3M = 1;
    sbit  C12IN3M_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int P1B = 2;
    sbit  P1B_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int C12IN2M = 3;
    sbit  C12IN2M_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int T5G = 4;
    sbit  T5G_bit at PORTB.B4;

    // Alternative bit function
    const register unsigned short int T1G = 5;
    sbit  T1G_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int CK2 = 6;
    sbit  CK2_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int DT2 = 7;
    sbit  DT2_bit at PORTB.B7;

    // Alternative bit function
    const register unsigned short int SRI = 0;
    sbit  SRI_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int C12IN3N = 1;
    sbit  C12IN3N_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int CTED1 = 2;
    sbit  CTED1_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int C12IN2N = 3;
    sbit  C12IN2N_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int P1D = 4;
    sbit  P1D_bit at PORTB.B4;

    // Alternative bit function
    const register unsigned short int CCP3_PORTB = 5;
    sbit  CCP3_PORTB_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int PGC = 6;
    sbit  PGC_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int PGD = 7;
    sbit  PGD_bit at PORTB.B7;

    // Alternative bit function
    const register unsigned short int CCP4 = 0;
    sbit  CCP4_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int P1C = 1;
    sbit  P1C_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int SDA2 = 2;
    sbit  SDA2_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int CTED2 = 3;
    sbit  CTED2_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int T3CKI_PORTB = 5;
    sbit  T3CKI_PORTB_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int SS2 = 0;
    sbit  SS2_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int SCL2 = 1;
    sbit  SCL2_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int SDI2 = 2;
    sbit  SDI2_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int P2A_PORTB = 3;
    sbit  P2A_PORTB_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int P3A_PORTB = 5;
    sbit  P3A_PORTB_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int NOT_SS2 = 0;
    sbit  NOT_SS2_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int SCK2 = 1;
    sbit  SCK2_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int SDO2 = 3;
    sbit  SDO2_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int P2B_PORTB = 5;
    sbit  P2B_PORTB_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int T1OSO = 0;
    sbit  T1OSO_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int T1OSI = 1;
    sbit  T1OSI_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int T5CKI = 2;
    sbit  T5CKI_bit at PORTC.B2;

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
    const register unsigned short int P2B_PORTC = 0;
    sbit  P2B_PORTC_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int P2A_PORTC = 1;
    sbit  P2A_PORTC_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int P1A = 2;
    sbit  P1A_bit at PORTC.B2;

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
    const register unsigned short int T1CKI = 0;
    sbit  T1CKI_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int CCP2_PORTC = 1;
    sbit  CCP2_PORTC_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int CCP1 = 2;
    sbit  CCP1_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int SCK1 = 3;
    sbit  SCK1_bit at PORTC.B3;

    // Alternative bit function
    const register unsigned short int SDI1 = 4;
    sbit  SDI1_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int SDO1 = 5;
    sbit  SDO1_bit at PORTC.B5;

    // Alternative bit function
    const register unsigned short int TX1 = 6;
    sbit  TX1_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int RX1 = 7;
    sbit  RX1_bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int T3CKI_PORTC = 0;
    sbit  T3CKI_PORTC_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int CTPLS = 2;
    sbit  CTPLS_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int SCL1 = 3;
    sbit  SCL1_bit at PORTC.B3;

    // Alternative bit function
    const register unsigned short int SDA1 = 4;
    sbit  SDA1_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int CK1 = 6;
    sbit  CK1_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int DT1 = 7;
    sbit  DT1_bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int T3G = 0;
    sbit  T3G_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int AN14 = 2;
    sbit  AN14_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int AN15 = 3;
    sbit  AN15_bit at PORTC.B3;

    // Alternative bit function
    const register unsigned short int AN16 = 4;
    sbit  AN16_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int AN17 = 5;
    sbit  AN17_bit at PORTC.B5;

    // Alternative bit function
    const register unsigned short int AN18 = 6;
    sbit  AN18_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int AN19 = 7;
    sbit  AN19_bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int CCP3_PORTC = 6;
    sbit  CCP3_PORTC_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int P3B = 7;
    sbit  P3B_bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int P3A_PORTC = 6;
    sbit  P3A_PORTC_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int MCLR = 3;
    sbit  MCLR_bit at PORTE.B3;

    // Alternative bit function
    const register unsigned short int NOT_MCLR = 3;
    sbit  NOT_MCLR_bit at PORTE.B3;

    // Alternative bit function
    const register unsigned short int VPP = 3;
    sbit  VPP_bit at PORTE.B3;

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

    // Alternative bit function
    const register unsigned short int WPUE3 = 7;
    sbit  WPUE3_bit at TRISE.B7;

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

    // HLVDCON, LVDCON bits
    const register unsigned short int HLVDEN = 4;
    sbit  HLVDEN_bit at HLVDCON.B4;
    const register unsigned short int IRVST = 5;
    sbit  IRVST_bit at HLVDCON.B5;
    const register unsigned short int BGVST = 6;
    sbit  BGVST_bit at HLVDCON.B6;
    const register unsigned short int VDIRMAG = 7;
    sbit  VDIRMAG_bit at HLVDCON.B7;
    const register unsigned short int HLVDL0 = 0;
    sbit  HLVDL0_bit at HLVDCON.B0;
    const register unsigned short int HLVDL1 = 1;
    sbit  HLVDL1_bit at HLVDCON.B1;
    const register unsigned short int HLVDL2 = 2;
    sbit  HLVDL2_bit at HLVDCON.B2;
    const register unsigned short int HLVDL3 = 3;
    sbit  HLVDL3_bit at HLVDCON.B3;
    const register unsigned short int LVDL0 = 0;
    sbit  LVDL0_bit at HLVDCON.B0;
    const register unsigned short int LVDL1 = 1;
    sbit  LVDL1_bit at HLVDCON.B1;
    const register unsigned short int LVDL2 = 2;
    sbit  LVDL2_bit at HLVDCON.B2;
    const register unsigned short int LVDL3 = 3;
    sbit  LVDL3_bit at HLVDCON.B3;
    const register unsigned short int LVDEN = 4;
    sbit  LVDEN_bit at HLVDCON.B4;
    const register unsigned short int IVRST = 5;
    sbit  IVRST_bit at HLVDCON.B5;
    const register unsigned short int LVV0 = 0;
    sbit  LVV0_bit at HLVDCON.B0;
    const register unsigned short int LVV1 = 1;
    sbit  LVV1_bit at HLVDCON.B1;
    const register unsigned short int LVV2 = 2;
    sbit  LVV2_bit at HLVDCON.B2;
    const register unsigned short int LVV3 = 3;
    sbit  LVV3_bit at HLVDCON.B3;
    const register unsigned short int BGST = 5;
    sbit  BGST_bit at HLVDCON.B5;

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
    const register unsigned short int SSPIE = 3;
    sbit  SSPIE_bit at PIE1.B3;
    const register unsigned short int TXIE = 4;
    sbit  TXIE_bit at PIE1.B4;
    const register unsigned short int RCIE = 5;
    sbit  RCIE_bit at PIE1.B5;

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
    const register unsigned short int SSPIF = 3;
    sbit  SSPIF_bit at PIR1.B3;
    const register unsigned short int TXIF = 4;
    sbit  TXIF_bit at PIR1.B4;
    const register unsigned short int RCIF = 5;
    sbit  RCIF_bit at PIR1.B5;

    // IPR1 bits
    const register unsigned short int TMR1IP = 0;
    sbit  TMR1IP_bit at IPR1.B0;
    const register unsigned short int TMR2IP = 1;
    sbit  TMR2IP_bit at IPR1.B1;
    const register unsigned short int CCP1IP = 2;
    sbit  CCP1IP_bit at IPR1.B2;
    const register unsigned short int SSP1IP = 3;
    sbit  SSP1IP_bit at IPR1.B3;
    const register unsigned short int TX1IP = 4;
    sbit  TX1IP_bit at IPR1.B4;
    const register unsigned short int RC1IP = 5;
    sbit  RC1IP_bit at IPR1.B5;
    const register unsigned short int ADIP = 6;
    sbit  ADIP_bit at IPR1.B6;
    const register unsigned short int SSPIP = 3;
    sbit  SSPIP_bit at IPR1.B3;
    const register unsigned short int TXIP = 4;
    sbit  TXIP_bit at IPR1.B4;
    const register unsigned short int RCIP = 5;
    sbit  RCIP_bit at IPR1.B5;

    // PIE2 bits
    const register unsigned short int CCP2IE = 0;
    sbit  CCP2IE_bit at PIE2.B0;
    const register unsigned short int TMR3IE = 1;
    sbit  TMR3IE_bit at PIE2.B1;
    const register unsigned short int HLVDIE = 2;
    sbit  HLVDIE_bit at PIE2.B2;
    const register unsigned short int BCL1IE = 3;
    sbit  BCL1IE_bit at PIE2.B3;
    const register unsigned short int EEIE = 4;
    sbit  EEIE_bit at PIE2.B4;
    const register unsigned short int C2IE = 5;
    sbit  C2IE_bit at PIE2.B5;
    const register unsigned short int C1IE = 6;
    sbit  C1IE_bit at PIE2.B6;
    const register unsigned short int OSCFIE = 7;
    sbit  OSCFIE_bit at PIE2.B7;
    const register unsigned short int LVDIE = 2;
    sbit  LVDIE_bit at PIE2.B2;
    const register unsigned short int BCLIE = 3;
    sbit  BCLIE_bit at PIE2.B3;

    // PIR2 bits
    const register unsigned short int CCP2IF = 0;
    sbit  CCP2IF_bit at PIR2.B0;
    const register unsigned short int TMR3IF = 1;
    sbit  TMR3IF_bit at PIR2.B1;
    const register unsigned short int HLVDIF = 2;
    sbit  HLVDIF_bit at PIR2.B2;
    const register unsigned short int BCL1IF = 3;
    sbit  BCL1IF_bit at PIR2.B3;
    const register unsigned short int EEIF = 4;
    sbit  EEIF_bit at PIR2.B4;
    const register unsigned short int C2IF = 5;
    sbit  C2IF_bit at PIR2.B5;
    const register unsigned short int C1IF = 6;
    sbit  C1IF_bit at PIR2.B6;
    const register unsigned short int OSCFIF = 7;
    sbit  OSCFIF_bit at PIR2.B7;
    const register unsigned short int LVDIF = 2;
    sbit  LVDIF_bit at PIR2.B2;
    const register unsigned short int BCLIF = 3;
    sbit  BCLIF_bit at PIR2.B3;

    // IPR2 bits
    const register unsigned short int CCP2IP = 0;
    sbit  CCP2IP_bit at IPR2.B0;
    const register unsigned short int TMR3IP = 1;
    sbit  TMR3IP_bit at IPR2.B1;
    const register unsigned short int HLVDIP = 2;
    sbit  HLVDIP_bit at IPR2.B2;
    const register unsigned short int BCL1IP = 3;
    sbit  BCL1IP_bit at IPR2.B3;
    const register unsigned short int EEIP = 4;
    sbit  EEIP_bit at IPR2.B4;
    const register unsigned short int C2IP = 5;
    sbit  C2IP_bit at IPR2.B5;
    const register unsigned short int C1IP = 6;
    sbit  C1IP_bit at IPR2.B6;
    const register unsigned short int OSCFIP = 7;
    sbit  OSCFIP_bit at IPR2.B7;
    const register unsigned short int LVDIP = 2;
    sbit  LVDIP_bit at IPR2.B2;
    const register unsigned short int BCLIP = 3;
    sbit  BCLIP_bit at IPR2.B3;

    // PIE3 bits
    const register unsigned short int TMR1GIE = 0;
    sbit  TMR1GIE_bit at PIE3.B0;
    const register unsigned short int TMR3GIE = 1;
    sbit  TMR3GIE_bit at PIE3.B1;
    const register unsigned short int TMR5GIE = 2;
    sbit  TMR5GIE_bit at PIE3.B2;
    const register unsigned short int CTMUIE = 3;
    sbit  CTMUIE_bit at PIE3.B3;
    const register unsigned short int TX2IE = 4;
    sbit  TX2IE_bit at PIE3.B4;
    const register unsigned short int RC2IE = 5;
    sbit  RC2IE_bit at PIE3.B5;
    const register unsigned short int BCL2IE = 6;
    sbit  BCL2IE_bit at PIE3.B6;
    const register unsigned short int SSP2IE = 7;
    sbit  SSP2IE_bit at PIE3.B7;

    // PIR3 bits
    const register unsigned short int TMR1GIF = 0;
    sbit  TMR1GIF_bit at PIR3.B0;
    const register unsigned short int TMR3GIF = 1;
    sbit  TMR3GIF_bit at PIR3.B1;
    const register unsigned short int TMR5GIF = 2;
    sbit  TMR5GIF_bit at PIR3.B2;
    const register unsigned short int CTMUIF = 3;
    sbit  CTMUIF_bit at PIR3.B3;
    const register unsigned short int TX2IF = 4;
    sbit  TX2IF_bit at PIR3.B4;
    const register unsigned short int RC2IF = 5;
    sbit  RC2IF_bit at PIR3.B5;
    const register unsigned short int BCL2IF = 6;
    sbit  BCL2IF_bit at PIR3.B6;
    const register unsigned short int SSP2IF = 7;
    sbit  SSP2IF_bit at PIR3.B7;

    // IPR3 bits
    const register unsigned short int TMR1GIP = 0;
    sbit  TMR1GIP_bit at IPR3.B0;
    const register unsigned short int TMR3GIP = 1;
    sbit  TMR3GIP_bit at IPR3.B1;
    const register unsigned short int TMR5GIP = 2;
    sbit  TMR5GIP_bit at IPR3.B2;
    const register unsigned short int CTMUIP = 3;
    sbit  CTMUIP_bit at IPR3.B3;
    const register unsigned short int TX2IP = 4;
    sbit  TX2IP_bit at IPR3.B4;
    const register unsigned short int RC2IP = 5;
    sbit  RC2IP_bit at IPR3.B5;
    const register unsigned short int BCL2IP = 6;
    sbit  BCL2IP_bit at IPR3.B6;
    const register unsigned short int SSP2IP = 7;
    sbit  SSP2IP_bit at IPR3.B7;

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
    const register unsigned short int CFGS = 6;
    sbit  CFGS_bit at EECON1.B6;
    const register unsigned short int EEPGD = 7;
    sbit  EEPGD_bit at EECON1.B7;

    // EEADR bits
    const register unsigned short int EEADR0 = 0;
    sbit  EEADR0_bit at EEADR.B0;
    const register unsigned short int EEADR1 = 1;
    sbit  EEADR1_bit at EEADR.B1;
    const register unsigned short int EEADR2 = 2;
    sbit  EEADR2_bit at EEADR.B2;
    const register unsigned short int EEADR3 = 3;
    sbit  EEADR3_bit at EEADR.B3;
    const register unsigned short int EEADR4 = 4;
    sbit  EEADR4_bit at EEADR.B4;
    const register unsigned short int EEADR5 = 5;
    sbit  EEADR5_bit at EEADR.B5;
    const register unsigned short int EEADR6 = 6;
    sbit  EEADR6_bit at EEADR.B6;
    const register unsigned short int EEADR7 = 7;
    sbit  EEADR7_bit at EEADR.B7;

    // RC1STA, RCSTA, RCSTA1 bits
    sbit  RX9D_RC1STA_bit at RC1STA.B0;
    sbit  OERR_RC1STA_bit at RC1STA.B1;
    sbit  FERR_RC1STA_bit at RC1STA.B2;
    sbit  ADDEN_RC1STA_bit at RC1STA.B3;
    sbit  CREN_RC1STA_bit at RC1STA.B4;
    sbit  SREN_RC1STA_bit at RC1STA.B5;
    sbit  RX9_RC1STA_bit at RC1STA.B6;
    sbit  SPEN_RC1STA_bit at RC1STA.B7;
    sbit  ADEN_RC1STA_bit at RC1STA.B3;
    const register unsigned short int RX9D1 = 0;
    sbit  RX9D1_bit at RC1STA.B0;
    const register unsigned short int OERR1 = 1;
    sbit  OERR1_bit at RC1STA.B1;
    const register unsigned short int FERR1 = 2;
    sbit  FERR1_bit at RC1STA.B2;
    const register unsigned short int ADDEN1 = 3;
    sbit  ADDEN1_bit at RC1STA.B3;
    const register unsigned short int CREN1 = 4;
    sbit  CREN1_bit at RC1STA.B4;
    const register unsigned short int SREN1 = 5;
    sbit  SREN1_bit at RC1STA.B5;
    const register unsigned short int RX91 = 6;
    sbit  RX91_bit at RC1STA.B6;
    const register unsigned short int SPEN1 = 7;
    sbit  SPEN1_bit at RC1STA.B7;

    // TX1STA, TXSTA, TXSTA1 bits
    sbit  TX9D_TX1STA_bit at TX1STA.B0;
    sbit  TRMT_TX1STA_bit at TX1STA.B1;
    sbit  BRGH_TX1STA_bit at TX1STA.B2;
    sbit  SENDB_TX1STA_bit at TX1STA.B3;
    sbit  SYNC_TX1STA_bit at TX1STA.B4;
    sbit  TXEN_TX1STA_bit at TX1STA.B5;
    sbit  TX9_TX1STA_bit at TX1STA.B6;
    sbit  CSRC_TX1STA_bit at TX1STA.B7;
    const register unsigned short int TX9D1 = 0;
    sbit  TX9D1_bit at TX1STA.B0;
    const register unsigned short int TRMT1 = 1;
    sbit  TRMT1_bit at TX1STA.B1;
    const register unsigned short int BRGH1 = 2;
    sbit  BRGH1_bit at TX1STA.B2;
    const register unsigned short int SENDB1 = 3;
    sbit  SENDB1_bit at TX1STA.B3;
    const register unsigned short int SYNC1 = 4;
    sbit  SYNC1_bit at TX1STA.B4;
    const register unsigned short int TXEN1 = 5;
    sbit  TXEN1_bit at TX1STA.B5;
    const register unsigned short int TX91 = 6;
    sbit  TX91_bit at TX1STA.B6;
    const register unsigned short int CSRC1 = 7;
    sbit  CSRC1_bit at TX1STA.B7;

    // T3CON bits
    const register unsigned short int TMR3ON = 0;
    sbit  TMR3ON_bit at T3CON.B0;
    const register unsigned short int T3RD16 = 1;
    sbit  T3RD16_bit at T3CON.B1;
    const register unsigned short int NOT_T3SYNC = 2;
    sbit  NOT_T3SYNC_bit at T3CON.B2;
    const register unsigned short int T3SOSCEN = 3;
    sbit  T3SOSCEN_bit at T3CON.B3;
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
    const register unsigned short int T3G_DONE = 3;
    sbit  T3G_DONE_bit at T3GCON.B3;
    const register unsigned short int T3GGO = 3;
    sbit  T3GGO_bit at T3GCON.B3;

    // ECCP1AS, ECCPAS bits
    const register unsigned short int CCP1ASE = 7;
    sbit  CCP1ASE_bit at ECCP1AS.B7;
    const register unsigned short int P1SSBD0 = 0;
    sbit  P1SSBD0_bit at ECCP1AS.B0;
    const register unsigned short int P1SSBD1 = 1;
    sbit  P1SSBD1_bit at ECCP1AS.B1;
    const register unsigned short int P1SSAC0 = 2;
    sbit  P1SSAC0_bit at ECCP1AS.B2;
    const register unsigned short int P1SSAC1 = 3;
    sbit  P1SSAC1_bit at ECCP1AS.B3;
    const register unsigned short int CCP1AS0 = 4;
    sbit  CCP1AS0_bit at ECCP1AS.B4;
    const register unsigned short int CCP1AS1 = 5;
    sbit  CCP1AS1_bit at ECCP1AS.B5;
    const register unsigned short int CCP1AS2 = 6;
    sbit  CCP1AS2_bit at ECCP1AS.B6;
    const register unsigned short int PSS1BD0 = 0;
    sbit  PSS1BD0_bit at ECCP1AS.B0;
    const register unsigned short int PSS1BD1 = 1;
    sbit  PSS1BD1_bit at ECCP1AS.B1;
    const register unsigned short int PSS1AC0 = 2;
    sbit  PSS1AC0_bit at ECCP1AS.B2;
    const register unsigned short int PSS1AC1 = 3;
    sbit  PSS1AC1_bit at ECCP1AS.B3;
    const register unsigned short int ECCPASE = 7;
    sbit  ECCPASE_bit at ECCP1AS.B7;
    const register unsigned short int PSSBD0 = 0;
    sbit  PSSBD0_bit at ECCP1AS.B0;
    const register unsigned short int PSSBD1 = 1;
    sbit  PSSBD1_bit at ECCP1AS.B1;
    const register unsigned short int PSSAC0 = 2;
    sbit  PSSAC0_bit at ECCP1AS.B2;
    const register unsigned short int PSSAC1 = 3;
    sbit  PSSAC1_bit at ECCP1AS.B3;
    const register unsigned short int ECCPAS0 = 4;
    sbit  ECCPAS0_bit at ECCP1AS.B4;
    const register unsigned short int ECCPAS1 = 5;
    sbit  ECCPAS1_bit at ECCP1AS.B5;
    const register unsigned short int ECCPAS2 = 6;
    sbit  ECCPAS2_bit at ECCP1AS.B6;

    // PWM1CON, PWMCON bits
    const register unsigned short int P1RSEN = 7;
    sbit  P1RSEN_bit at PWM1CON.B7;
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
    const register unsigned short int PRSEN = 7;
    sbit  PRSEN_bit at PWM1CON.B7;
    const register unsigned short int PDC0 = 0;
    sbit  PDC0_bit at PWM1CON.B0;
    const register unsigned short int PDC1 = 1;
    sbit  PDC1_bit at PWM1CON.B1;
    const register unsigned short int PDC2 = 2;
    sbit  PDC2_bit at PWM1CON.B2;
    const register unsigned short int PDC3 = 3;
    sbit  PDC3_bit at PWM1CON.B3;
    const register unsigned short int PDC4 = 4;
    sbit  PDC4_bit at PWM1CON.B4;
    const register unsigned short int PDC5 = 5;
    sbit  PDC5_bit at PWM1CON.B5;
    const register unsigned short int PDC6 = 6;
    sbit  PDC6_bit at PWM1CON.B6;

    // BAUD1CON, BAUDCON, BAUDCON1, BAUDCTL bits
    sbit  ABDEN_BAUD1CON_bit at BAUD1CON.B0;
    sbit  WUE_BAUD1CON_bit at BAUD1CON.B1;
    sbit  BRG16_BAUD1CON_bit at BAUD1CON.B3;
    sbit  CKTXP_BAUD1CON_bit at BAUD1CON.B4;
    sbit  DTRXP_BAUD1CON_bit at BAUD1CON.B5;
    sbit  RCIDL_BAUD1CON_bit at BAUD1CON.B6;
    sbit  ABDOVF_BAUD1CON_bit at BAUD1CON.B7;
    sbit  SCKP_BAUD1CON_bit at BAUD1CON.B4;

    // PSTR1CON, PSTRCON bits
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
    const register unsigned short int NVCFG0 = 0;
    sbit  NVCFG0_bit at ADCON1.B0;
    const register unsigned short int NVCFG1 = 1;
    sbit  NVCFG1_bit at ADCON1.B1;
    const register unsigned short int PVCFG0 = 2;
    sbit  PVCFG0_bit at ADCON1.B2;
    const register unsigned short int PVCFG1 = 3;
    sbit  PVCFG1_bit at ADCON1.B3;

    // ADCON0 bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON0.B0;
    const register unsigned short int GO_NOT_DONE = 1;
    sbit  GO_NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int GO = 1;
    sbit  GO_bit at ADCON0.B1;
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
    const register unsigned short int DONE = 1;
    sbit  DONE_bit at ADCON0.B1;
    const register unsigned short int NOT_DONE = 1;
    sbit  NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int GO_DONE = 1;
    sbit  GO_DONE_bit at ADCON0.B1;

    // SSP1CON2, SSPCON2 bits
    sbit  SEN_SSP1CON2_bit at SSP1CON2.B0;
    sbit  RSEN_SSP1CON2_bit at SSP1CON2.B1;
    sbit  PEN_SSP1CON2_bit at SSP1CON2.B2;
    sbit  RCEN_SSP1CON2_bit at SSP1CON2.B3;
    sbit  ACKEN_SSP1CON2_bit at SSP1CON2.B4;
    sbit  ACKDT_SSP1CON2_bit at SSP1CON2.B5;
    sbit  ACKSTAT_SSP1CON2_bit at SSP1CON2.B6;
    sbit  GCEN_SSP1CON2_bit at SSP1CON2.B7;

    // SSP1CON1, SSPCON1 bits
    sbit  CKP_SSP1CON1_bit at SSP1CON1.B4;
    sbit  SSPEN_SSP1CON1_bit at SSP1CON1.B5;
    sbit  SSPOV_SSP1CON1_bit at SSP1CON1.B6;
    sbit  WCOL_SSP1CON1_bit at SSP1CON1.B7;
    sbit  SSPM0_SSP1CON1_bit at SSP1CON1.B0;
    sbit  SSPM1_SSP1CON1_bit at SSP1CON1.B1;
    sbit  SSPM2_SSP1CON1_bit at SSP1CON1.B2;
    sbit  SSPM3_SSP1CON1_bit at SSP1CON1.B3;

    // SSP1STAT, SSPSTAT bits
    sbit  BF_SSP1STAT_bit at SSP1STAT.B0;
    sbit  UA_SSP1STAT_bit at SSP1STAT.B1;
    sbit  R_NOT_W_SSP1STAT_bit at SSP1STAT.B2;
    sbit  S_SSP1STAT_bit at SSP1STAT.B3;
    sbit  P_SSP1STAT_bit at SSP1STAT.B4;
    sbit  D_NOT_A_SSP1STAT_bit at SSP1STAT.B5;
    sbit  CKE_SSP1STAT_bit at SSP1STAT.B6;
    sbit  SMP_SSP1STAT_bit at SSP1STAT.B7;
    sbit  R_SSP1STAT_bit at SSP1STAT.B2;
    sbit  D_SSP1STAT_bit at SSP1STAT.B5;
    sbit  NOT_W_SSP1STAT_bit at SSP1STAT.B2;
    sbit  NOT_A_SSP1STAT_bit at SSP1STAT.B5;
    sbit  R_W_SSP1STAT_bit at SSP1STAT.B2;
    sbit  D_A_SSP1STAT_bit at SSP1STAT.B5;
    sbit  NOT_WRITE_SSP1STAT_bit at SSP1STAT.B2;
    sbit  NOT_ADDRESS_SSP1STAT_bit at SSP1STAT.B5;

    // SSP1MSK, SSPMSK bits
    sbit  MSK0_SSP1MSK_bit at SSP1MSK.B0;
    sbit  MSK1_SSP1MSK_bit at SSP1MSK.B1;
    sbit  MSK2_SSP1MSK_bit at SSP1MSK.B2;
    sbit  MSK3_SSP1MSK_bit at SSP1MSK.B3;
    sbit  MSK4_SSP1MSK_bit at SSP1MSK.B4;
    sbit  MSK5_SSP1MSK_bit at SSP1MSK.B5;
    sbit  MSK6_SSP1MSK_bit at SSP1MSK.B6;
    sbit  MSK7_SSP1MSK_bit at SSP1MSK.B7;

    // SSP1CON3, SSPCON3 bits
    sbit  DHEN_SSP1CON3_bit at SSP1CON3.B0;
    sbit  AHEN_SSP1CON3_bit at SSP1CON3.B1;
    sbit  SBCDE_SSP1CON3_bit at SSP1CON3.B2;
    sbit  SDAHT_SSP1CON3_bit at SSP1CON3.B3;
    sbit  BOEN_SSP1CON3_bit at SSP1CON3.B4;
    sbit  SCIE_SSP1CON3_bit at SSP1CON3.B5;
    sbit  PCIE_SSP1CON3_bit at SSP1CON3.B6;
    sbit  ACKTIM_SSP1CON3_bit at SSP1CON3.B7;

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
    const register unsigned short int T1G_DONE = 3;
    sbit  T1G_DONE_bit at T1GCON.B3;
    const register unsigned short int T1GGO = 3;
    sbit  T1GGO_bit at T1GCON.B3;

    // T1CON bits
    const register unsigned short int TMR1ON = 0;
    sbit  TMR1ON_bit at T1CON.B0;
    const register unsigned short int T1RD16 = 1;
    sbit  T1RD16_bit at T1CON.B1;
    const register unsigned short int NOT_T1SYNC = 2;
    sbit  NOT_T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1SOSCEN = 3;
    sbit  T1SOSCEN_bit at T1CON.B3;
    const register unsigned short int RD16 = 1;
    sbit  RD16_bit at T1CON.B1;
    const register unsigned short int T1SYNC = 2;
    sbit  T1SYNC_bit at T1CON.B2;
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
    const register unsigned short int SBOREN = 6;
    sbit  SBOREN_bit at RCON.B6;
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

    // WDTCON bits
    const register unsigned short int SWDTEN = 0;
    sbit  SWDTEN_bit at WDTCON.B0;
    const register unsigned short int SWDTE = 0;
    sbit  SWDTE_bit at WDTCON.B0;

    // OSCCON2 bits
    const register unsigned short int LFIOFS = 0;
    sbit  LFIOFS_bit at OSCCON2.B0;
    const register unsigned short int MFIOFS = 1;
    sbit  MFIOFS_bit at OSCCON2.B1;
    const register unsigned short int PRISD = 2;
    sbit  PRISD_bit at OSCCON2.B2;
    const register unsigned short int SOSCGO = 3;
    sbit  SOSCGO_bit at OSCCON2.B3;
    const register unsigned short int MFIOSEL = 4;
    sbit  MFIOSEL_bit at OSCCON2.B4;
    const register unsigned short int SOSCRUN = 6;
    sbit  SOSCRUN_bit at OSCCON2.B6;
    const register unsigned short int PLLRDY = 7;
    sbit  PLLRDY_bit at OSCCON2.B7;

    // OSCCON bits
    const register unsigned short int HFIOFS = 2;
    sbit  HFIOFS_bit at OSCCON.B2;
    const register unsigned short int OSTS = 3;
    sbit  OSTS_bit at OSCCON.B3;
    const register unsigned short int IDLEN = 7;
    sbit  IDLEN_bit at OSCCON.B7;
    const register unsigned short int SCS0 = 0;
    sbit  SCS0_bit at OSCCON.B0;
    const register unsigned short int SCS1 = 1;
    sbit  SCS1_bit at OSCCON.B1;
    const register unsigned short int IOFS = 2;
    sbit  IOFS_bit at OSCCON.B2;
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
    const register unsigned short int INT1IE = 3;
    sbit  INT1IE_bit at INTCON3.B3;
    const register unsigned short int INT2IE = 4;
    sbit  INT2IE_bit at INTCON3.B4;
    const register unsigned short int INT1IP = 6;
    sbit  INT1IP_bit at INTCON3.B6;
    const register unsigned short int INT2IP = 7;
    sbit  INT2IP_bit at INTCON3.B7;
    const register unsigned short int INT1F = 0;
    sbit  INT1F_bit at INTCON3.B0;
    const register unsigned short int INT2F = 1;
    sbit  INT2F_bit at INTCON3.B1;
    const register unsigned short int INT1E = 3;
    sbit  INT1E_bit at INTCON3.B3;
    const register unsigned short int INT2E = 4;
    sbit  INT2E_bit at INTCON3.B4;
    const register unsigned short int INT1P = 6;
    sbit  INT1P_bit at INTCON3.B6;
    const register unsigned short int INT2P = 7;
    sbit  INT2P_bit at INTCON3.B7;

    // INTCON2 bits
    const register unsigned short int RBIP = 0;
    sbit  RBIP_bit at INTCON2.B0;
    const register unsigned short int TMR0IP = 2;
    sbit  TMR0IP_bit at INTCON2.B2;
    const register unsigned short int INTEDG2 = 4;
    sbit  INTEDG2_bit at INTCON2.B4;
    const register unsigned short int INTEDG1 = 5;
    sbit  INTEDG1_bit at INTCON2.B5;
    const register unsigned short int INTEDG0 = 6;
    sbit  INTEDG0_bit at INTCON2.B6;
    const register unsigned short int NOT_RBPU = 7;
    sbit  NOT_RBPU_bit at INTCON2.B7;
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
    const register unsigned short int STKOVF = 7;
    sbit  STKOVF_bit at STKPTR.B7;
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
    sbit  WPUE3_TRISE_bit at TRISE.B7;

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
