// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00020000;

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

sfr unsigned short volatile LCDCON           absolute 0x0EF4;
sfr unsigned short volatile LCDPS            absolute 0x0EF5;
sfr unsigned short volatile LCDSE0           absolute 0x0EF6;
sfr unsigned short volatile LCDSE1           absolute 0x0EF7;
sfr unsigned short volatile LCDSE2           absolute 0x0EF8;
sfr unsigned short volatile LCDSE3           absolute 0x0EF9;
sfr unsigned short volatile LCDSE4           absolute 0x0EFA;
sfr unsigned short volatile LCDSE5           absolute 0x0EFB;
sfr unsigned short volatile LCDRL            absolute 0x0EFC;
sfr unsigned short volatile LCDREF           absolute 0x0EFD;
sfr unsigned short volatile SSP2CON2         absolute 0x0EFE;
sfr unsigned short volatile SSP2CON1         absolute 0x0EFF;
sfr unsigned short volatile SSP2STAT         absolute 0x0F00;
sfr unsigned short volatile SSP2ADD          absolute 0x0F01;
sfr unsigned short volatile SSP2BUF          absolute 0x0F02;
sfr unsigned short volatile T4CON            absolute 0x0F03;
sfr unsigned short volatile PR4              absolute 0x0F04;
sfr unsigned short volatile TMR4             absolute 0x0F05;
sfr unsigned short volatile CCP7CON          absolute 0x0F06;
sfr unsigned short volatile CCP6CON          absolute 0x0F09;
sfr unsigned short volatile CCP5CON          absolute 0x0F0C;
sfr unsigned short volatile CCP4CON          absolute 0x0F0F;
sfr unsigned short volatile T5GCON           absolute 0x0F12;
sfr unsigned short volatile T5CON            absolute 0x0F13;
sfr unsigned short volatile TMR5L            absolute 0x0F14;
sfr unsigned short volatile TMR5H            absolute 0x0F15;
sfr unsigned short volatile PMD3             absolute 0x0F16;
sfr unsigned short volatile PMD2             absolute 0x0F17;
sfr unsigned short volatile PMD1             absolute 0x0F18;
sfr unsigned short volatile PMD0             absolute 0x0F19;
sfr unsigned short volatile PSTR3CON         absolute 0x0F1A;
sfr unsigned short volatile PSTR2CON         absolute 0x0F1B;
sfr unsigned short volatile TXREG2           absolute 0x0F1C;
sfr unsigned short volatile RCREG2           absolute 0x0F1D;
sfr unsigned short          SPBRG2           absolute 0x0F1E;
sfr unsigned short          SPBRGH2          absolute 0x0F1F;
sfr unsigned short          BAUDCON2         absolute 0x0F20;
sfr unsigned short volatile TXSTA2           absolute 0x0F21;
sfr unsigned short volatile RCSTA2           absolute 0x0F22;
sfr unsigned short volatile ANCON2           absolute 0x0F23;
sfr unsigned short          ANCON1           absolute 0x0F24;
sfr unsigned short          ANCON0           absolute 0x0F25;
sfr unsigned short volatile ODCON3           absolute 0x0F27;
sfr unsigned short volatile ODCON2           absolute 0x0F28;
sfr unsigned short volatile ODCON1           absolute 0x0F29;
sfr unsigned short volatile REFOCON          absolute 0x0F2A;
sfr unsigned short volatile CCPTMRS2         absolute 0x0F2B;
sfr unsigned short volatile CCPTMRS1         absolute 0x0F2C;
sfr unsigned short volatile CCPTMRS0         absolute 0x0F2D;
sfr unsigned short volatile CM3CON           absolute 0x0F2E;
sfr unsigned short volatile CM3CON1          absolute 0x0F2E;
sfr unsigned short volatile CM2CON           absolute 0x0F2F;
sfr unsigned short volatile CM2CON1          absolute 0x0F2F;
sfr unsigned short volatile T12CON           absolute 0x0F30;
sfr unsigned short volatile PR12             absolute 0x0F31;
sfr unsigned short volatile TMR12            absolute 0x0F32;
sfr unsigned short volatile T10CON           absolute 0x0F33;
sfr unsigned short volatile PR10             absolute 0x0F34;
sfr unsigned short volatile TMR10            absolute 0x0F35;
sfr unsigned short volatile T8CON            absolute 0x0F36;
sfr unsigned short volatile PR8              absolute 0x0F37;
sfr unsigned short volatile TMR8             absolute 0x0F38;
sfr unsigned short volatile T6CON            absolute 0x0F39;
sfr unsigned short volatile PR6              absolute 0x0F3A;
sfr unsigned short volatile TMR6             absolute 0x0F3B;
sfr unsigned short volatile T7GCON           absolute 0x0F3C;
sfr unsigned short volatile T7CON            absolute 0x0F3D;
sfr unsigned short volatile TMR7L            absolute 0x0F3E;
sfr unsigned short volatile TMR7H            absolute 0x0F3F;
sfr unsigned short volatile CCP10CON         absolute 0x0F40;
sfr unsigned int   volatile CCPR10           absolute 0x0F41;
sfr unsigned short volatile CCPR10L          absolute 0x0F41;
sfr unsigned short volatile CCPR10H          absolute 0x0F42;
sfr unsigned short volatile CCP9CON          absolute 0x0F43;
sfr unsigned short volatile CCP8CON          absolute 0x0F46;
sfr unsigned short volatile CCP3CON          absolute 0x0F49;
sfr unsigned short volatile ECCP3DEL         absolute 0x0F4C;
sfr unsigned short          PWM3CON          absolute 0x0F4C;
sfr unsigned short volatile ECCP3AS          absolute 0x0F4D;
sfr unsigned short volatile CCP2CON          absolute 0x0F4E;
sfr unsigned short volatile ECCP2CON         absolute 0x0F4E;
sfr unsigned short volatile ECCP2DEL         absolute 0x0F51;
sfr unsigned short          PWM2CON          absolute 0x0F51;
sfr unsigned short volatile ECCP2AS          absolute 0x0F52;
sfr unsigned short volatile PADCFG1          absolute 0x0F53;
sfr unsigned short volatile CM1CON           absolute 0x0F54;
sfr unsigned short volatile CM1CON1          absolute 0x0F54;
sfr unsigned short volatile CTMUICON         absolute 0x0F55;
sfr unsigned short volatile CTMUCONL         absolute 0x0F56;
sfr unsigned short volatile CTMUCONH         absolute 0x0F57;
sfr unsigned int   volatile ALRMVAL          absolute 0x0F58;
sfr unsigned short volatile ALRMVALL         absolute 0x0F58;
sfr unsigned short volatile ALRMVALH         absolute 0x0F59;
sfr unsigned short volatile ALRMRPT          absolute 0x0F5A;
sfr unsigned short volatile ALRMCFG          absolute 0x0F5B;
sfr unsigned int   volatile RTCVAL           absolute 0x0F5C;
sfr unsigned short volatile RTCVALL          absolute 0x0F5C;
sfr unsigned short volatile RTCVALH          absolute 0x0F5D;
sfr unsigned short volatile RTCCAL           absolute 0x0F5E;
sfr unsigned short volatile RTCCFG           absolute 0x0F5F;
sfr unsigned short volatile PIE6             absolute 0x0F60;
sfr unsigned short volatile EEDATA           absolute 0x0F61;
sfr unsigned short volatile EEADR            absolute 0x0F62;
sfr unsigned short volatile EEADRH           absolute 0x0F63;
sfr unsigned short volatile OSCCON2          absolute 0x0F64;
sfr unsigned short          BAUDCON          absolute 0x0F65;
sfr unsigned short          BAUDCON1         absolute 0x0F65;
sfr unsigned short          BAUDCTL          absolute 0x0F65;
sfr unsigned short volatile LCDDATA0         absolute 0x0F66;
sfr unsigned short volatile LCDDATA1         absolute 0x0F67;
sfr unsigned short volatile LCDDATA2         absolute 0x0F68;
sfr unsigned short volatile LCDDATA3         absolute 0x0F69;
sfr unsigned short volatile LCDDATA4         absolute 0x0F6A;
sfr unsigned short volatile LCDDATA5         absolute 0x0F6B;
sfr unsigned short volatile LCDDATA6         absolute 0x0F6C;
sfr unsigned short volatile LCDDATA7         absolute 0x0F6D;
sfr unsigned short volatile LCDDATA8         absolute 0x0F6E;
sfr unsigned short volatile LCDDATA9         absolute 0x0F6F;
sfr unsigned short volatile LCDDATA10        absolute 0x0F70;
sfr unsigned short volatile LCDDATA11        absolute 0x0F71;
sfr unsigned short volatile LCDDATA12        absolute 0x0F72;
sfr unsigned short volatile LCDDATA13        absolute 0x0F73;
sfr unsigned short volatile LCDDATA14        absolute 0x0F74;
sfr unsigned short volatile LCDDATA15        absolute 0x0F75;
sfr unsigned short volatile LCDDATA16        absolute 0x0F76;
sfr unsigned short volatile LCDDATA17        absolute 0x0F77;
sfr unsigned short volatile LCDDATA18        absolute 0x0F78;
sfr unsigned short volatile LCDDATA19        absolute 0x0F79;
sfr unsigned short volatile LCDDATA20        absolute 0x0F7A;
sfr unsigned short volatile LCDDATA21        absolute 0x0F7B;
sfr unsigned short volatile LCDDATA22        absolute 0x0F7C;
sfr unsigned short volatile LCDDATA23        absolute 0x0F7D;
sfr unsigned short volatile EECON2           absolute 0x0F7E;
sfr unsigned short volatile EECON1           absolute 0x0F7F;
sfr unsigned short volatile LATA             absolute 0x0F89;
sfr unsigned short volatile LATB             absolute 0x0F8A;
sfr unsigned short volatile LATC             absolute 0x0F8B;
sfr unsigned short volatile LATD             absolute 0x0F8C;
sfr unsigned short volatile LATE             absolute 0x0F8D;
sfr unsigned short volatile LATF             absolute 0x0F8E;
sfr unsigned short volatile LATG             absolute 0x0F8F;
sfr unsigned short volatile LATH             absolute 0x0F90;
sfr unsigned short volatile LATJ             absolute 0x0F91;
sfr unsigned short volatile OSCTUNE          absolute 0x0F9B;
sfr unsigned short volatile PSTR1CON         absolute 0x0F9C;
sfr unsigned short volatile PIE1             absolute 0x0F9D;
sfr unsigned short volatile PIR1             absolute 0x0F9E;
sfr unsigned short volatile IPR1             absolute 0x0F9F;
sfr unsigned short volatile PIE2             absolute 0x0FA0;
sfr unsigned short volatile PIR2             absolute 0x0FA1;
sfr unsigned short volatile IPR2             absolute 0x0FA2;
sfr unsigned short volatile PIE3             absolute 0x0FA3;
sfr unsigned short volatile PIR3             absolute 0x0FA4;
sfr unsigned short volatile IPR3             absolute 0x0FA5;
sfr unsigned short volatile PIR6             absolute 0x0FA6;
sfr unsigned short volatile HLVDCON          absolute 0x0FA8;
sfr unsigned short volatile IPR6             absolute 0x0FA9;
sfr unsigned short volatile T1GCON           absolute 0x0FAA;
sfr unsigned short volatile RCSTA            absolute 0x0FAB;
sfr unsigned short volatile RCSTA1           absolute 0x0FAB;
sfr unsigned short volatile TXSTA            absolute 0x0FAC;
sfr unsigned short volatile TXSTA1           absolute 0x0FAC;
sfr unsigned short volatile TXREG            absolute 0x0FAD;
sfr unsigned short volatile TXREG1           absolute 0x0FAD;
sfr unsigned short volatile RCREG            absolute 0x0FAE;
sfr unsigned short volatile RCREG1           absolute 0x0FAE;
sfr unsigned short          SPBRG            absolute 0x0FAF;
sfr unsigned short          SPBRG1           absolute 0x0FAF;
sfr unsigned short volatile T3GCON           absolute 0x0FB0;
sfr unsigned short volatile T3CON            absolute 0x0FB1;
sfr unsigned short volatile TMR3L            absolute 0x0FB2;
sfr unsigned short volatile TMR3H            absolute 0x0FB3;
sfr unsigned short volatile CMSTAT           absolute 0x0FB4;
sfr unsigned short volatile CMSTATUS         absolute 0x0FB4;
sfr unsigned short volatile CVRCON           absolute 0x0FB5;
sfr unsigned short volatile PIE4             absolute 0x0FB6;
sfr unsigned short volatile PIR4             absolute 0x0FB7;
sfr unsigned short volatile IPR4             absolute 0x0FB8;
sfr unsigned short volatile PIE5             absolute 0x0FB9;
sfr unsigned short volatile PIR5             absolute 0x0FBA;
sfr unsigned short volatile CCP1CON          absolute 0x0FBB;
sfr unsigned short volatile ECCP1CON         absolute 0x0FBB;
sfr unsigned int   volatile CCPR1            absolute 0x0FBC;
sfr unsigned short volatile CCPR1L           absolute 0x0FBC;
sfr unsigned short volatile CCPR1H           absolute 0x0FBD;
sfr unsigned short volatile ECCP1DEL         absolute 0x0FBE;
sfr unsigned short          PWM1CON          absolute 0x0FBE;
sfr unsigned short volatile ECCP1AS          absolute 0x0FBF;
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
sfr unsigned short volatile T2CON            absolute 0x0FCA;
sfr unsigned short volatile PR2              absolute 0x0FCB;
sfr unsigned short volatile TMR2             absolute 0x0FCC;
sfr unsigned short volatile T1CON            absolute 0x0FCD;
sfr unsigned short volatile TMR1L            absolute 0x0FCE;
sfr unsigned short volatile TMR1H            absolute 0x0FCF;
sfr unsigned short volatile RCON             absolute 0x0FD0;
sfr unsigned short          WDTCON           absolute 0x0FD1;
sfr unsigned short volatile IPR5             absolute 0x0FD2;
sfr unsigned short volatile OSCCON           absolute 0x0FD3;
sfr unsigned short          SPBRGH1          absolute 0x0FD4;
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
sfr unsigned short volatile CCPR7L           absolute 0x0F07;
sfr unsigned short volatile CCPR7H           absolute 0x0F08;
sfr unsigned short volatile CCPR6L           absolute 0x0F0A;
sfr unsigned short volatile CCPR6H           absolute 0x0F0B;
sfr unsigned short volatile CCPR5L           absolute 0x0F0D;
sfr unsigned short volatile CCPR5H           absolute 0x0F0E;
sfr unsigned short volatile CCPR4L           absolute 0x0F10;
sfr unsigned short volatile CCPR4H           absolute 0x0F11;
sfr unsigned short volatile CCPR9L           absolute 0x0F44;
sfr unsigned short volatile CCPR9H           absolute 0x0F45;
sfr unsigned short volatile CCPR8L           absolute 0x0F47;
sfr unsigned short volatile CCPR8H           absolute 0x0F48;
sfr unsigned short volatile CCPR3L           absolute 0x0F4A;
sfr unsigned short volatile CCPR3H           absolute 0x0F4B;
sfr unsigned short volatile CCPR2L           absolute 0x0F4F;
sfr unsigned short volatile CCPR2H           absolute 0x0F50;
sfr unsigned short volatile PORTA            absolute 0x0F80;
sfr unsigned short volatile PORTB            absolute 0x0F81;
sfr unsigned short volatile PORTC            absolute 0x0F82;
sfr unsigned short volatile PORTD            absolute 0x0F83;
sfr unsigned short volatile PORTE            absolute 0x0F84;
sfr unsigned short volatile PORTF            absolute 0x0F85;
sfr unsigned short volatile PORTG            absolute 0x0F86;
sfr unsigned short volatile PORTH            absolute 0x0F87;
sfr unsigned short volatile PORTJ            absolute 0x0F88;
sfr unsigned short volatile TRISA            absolute 0x0F92;
sfr unsigned short volatile TRISB            absolute 0x0F93;
sfr unsigned short volatile TRISC            absolute 0x0F94;
sfr unsigned short volatile TRISD            absolute 0x0F95;
sfr unsigned short volatile TRISE            absolute 0x0F96;
sfr unsigned short volatile TRISF            absolute 0x0F97;
sfr unsigned short volatile TRISG            absolute 0x0F98;
sfr unsigned short volatile TRISH            absolute 0x0F99;
sfr unsigned short volatile TRISJ            absolute 0x0F9A;
sfr unsigned int   volatile ADRES            absolute 0x0FC3;
sfr unsigned int            PROD             absolute 0x0FF3;
sfr unsigned short          PRODL            absolute 0x0FF3;
sfr unsigned short          PRODH            absolute 0x0FF4;
sfr unsigned short volatile TOSL             absolute 0x0FFD;
sfr unsigned short volatile TOSH             absolute 0x0FFE;
sfr unsigned short volatile TOSU             absolute 0x0FFF;

    // LCDCON bits
    const register unsigned short int WERR = 5;
    sbit  WERR_bit at LCDCON.B5;
    const register unsigned short int SLPEN = 6;
    sbit  SLPEN_bit at LCDCON.B6;
    const register unsigned short int LCDEN = 7;
    sbit  LCDEN_bit at LCDCON.B7;
    const register unsigned short int LMUX0 = 0;
    sbit  LMUX0_bit at LCDCON.B0;
    const register unsigned short int LMUX1 = 1;
    sbit  LMUX1_bit at LCDCON.B1;
    const register unsigned short int CS0 = 2;
    sbit  CS0_bit at LCDCON.B2;
    const register unsigned short int CS1 = 3;
    sbit  CS1_bit at LCDCON.B3;

    // LCDPS bits
    const register unsigned short int WA = 4;
    sbit  WA_bit at LCDPS.B4;
    const register unsigned short int LCDA = 5;
    sbit  LCDA_bit at LCDPS.B5;
    const register unsigned short int BIASMD = 6;
    sbit  BIASMD_bit at LCDPS.B6;
    const register unsigned short int WFT = 7;
    sbit  WFT_bit at LCDPS.B7;
    const register unsigned short int LP0 = 0;
    sbit  LP0_bit at LCDPS.B0;
    const register unsigned short int LP1 = 1;
    sbit  LP1_bit at LCDPS.B1;
    const register unsigned short int LP2 = 2;
    sbit  LP2_bit at LCDPS.B2;
    const register unsigned short int LP3 = 3;
    sbit  LP3_bit at LCDPS.B3;

    // LCDSE0 bits
    const register unsigned short int SE00 = 0;
    sbit  SE00_bit at LCDSE0.B0;
    const register unsigned short int SE01 = 1;
    sbit  SE01_bit at LCDSE0.B1;
    const register unsigned short int SE02 = 2;
    sbit  SE02_bit at LCDSE0.B2;
    const register unsigned short int SE03 = 3;
    sbit  SE03_bit at LCDSE0.B3;
    const register unsigned short int SE04 = 4;
    sbit  SE04_bit at LCDSE0.B4;
    const register unsigned short int SE05 = 5;
    sbit  SE05_bit at LCDSE0.B5;
    const register unsigned short int SE06 = 6;
    sbit  SE06_bit at LCDSE0.B6;
    const register unsigned short int SE07 = 7;
    sbit  SE07_bit at LCDSE0.B7;

    // LCDSE1 bits
    const register unsigned short int SE08 = 0;
    sbit  SE08_bit at LCDSE1.B0;
    const register unsigned short int SE09 = 1;
    sbit  SE09_bit at LCDSE1.B1;
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
    const register unsigned short int SE29 = 5;
    sbit  SE29_bit at LCDSE3.B5;
    const register unsigned short int SE30 = 6;
    sbit  SE30_bit at LCDSE3.B6;
    const register unsigned short int SE31 = 7;
    sbit  SE31_bit at LCDSE3.B7;

    // LCDSE4 bits
    const register unsigned short int SE32 = 0;
    sbit  SE32_bit at LCDSE4.B0;
    const register unsigned short int SE33 = 1;
    sbit  SE33_bit at LCDSE4.B1;
    const register unsigned short int SE34 = 2;
    sbit  SE34_bit at LCDSE4.B2;
    const register unsigned short int SE35 = 3;
    sbit  SE35_bit at LCDSE4.B3;
    const register unsigned short int SE36 = 4;
    sbit  SE36_bit at LCDSE4.B4;
    const register unsigned short int SE37 = 5;
    sbit  SE37_bit at LCDSE4.B5;
    const register unsigned short int SE38 = 6;
    sbit  SE38_bit at LCDSE4.B6;
    const register unsigned short int SE39 = 7;
    sbit  SE39_bit at LCDSE4.B7;

    // LCDSE5 bits
    const register unsigned short int SE40 = 0;
    sbit  SE40_bit at LCDSE5.B0;
    const register unsigned short int SE41 = 1;
    sbit  SE41_bit at LCDSE5.B1;
    const register unsigned short int SE42 = 2;
    sbit  SE42_bit at LCDSE5.B2;
    const register unsigned short int SE43 = 3;
    sbit  SE43_bit at LCDSE5.B3;
    const register unsigned short int SE44 = 4;
    sbit  SE44_bit at LCDSE5.B4;
    const register unsigned short int SE45 = 5;
    sbit  SE45_bit at LCDSE5.B5;
    const register unsigned short int SE46 = 6;
    sbit  SE46_bit at LCDSE5.B6;
    const register unsigned short int SE47 = 7;
    sbit  SE47_bit at LCDSE5.B7;

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

    // LCDREF bits
    const register unsigned short int VLCD1PE = 0;
    sbit  VLCD1PE_bit at LCDREF.B0;
    const register unsigned short int VLCD2PE = 1;
    sbit  VLCD2PE_bit at LCDREF.B1;
    const register unsigned short int VLCD3PE = 2;
    sbit  VLCD3PE_bit at LCDREF.B2;
    const register unsigned short int LCDIRS = 6;
    sbit  LCDIRS_bit at LCDREF.B6;
    const register unsigned short int LCDIRE = 7;
    sbit  LCDIRE_bit at LCDREF.B7;
    const register unsigned short int LCDCST0 = 3;
    sbit  LCDCST0_bit at LCDREF.B3;
    const register unsigned short int LCDCST1 = 4;
    sbit  LCDCST1_bit at LCDREF.B4;
    const register unsigned short int LCDCST2 = 5;
    sbit  LCDCST2_bit at LCDREF.B5;

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
    const register unsigned short int ADMSK1 = 1;
    sbit  ADMSK1_bit at SSP2CON2.B1;
    const register unsigned short int ADMSK2 = 2;
    sbit  ADMSK2_bit at SSP2CON2.B2;
    const register unsigned short int ADMSK3 = 3;
    sbit  ADMSK3_bit at SSP2CON2.B3;
    const register unsigned short int ADMSK4 = 4;
    sbit  ADMSK4_bit at SSP2CON2.B4;
    const register unsigned short int ADMSK5 = 5;
    sbit  ADMSK5_bit at SSP2CON2.B5;

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
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at SSP2STAT.B2;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at SSP2STAT.B5;
    const register unsigned short int NOT_W = 2;
    sbit  NOT_W_bit at SSP2STAT.B2;
    const register unsigned short int NOT_A = 5;
    sbit  NOT_A_bit at SSP2STAT.B5;
    const register unsigned short int NOT_WRITE = 2;
    sbit  NOT_WRITE_bit at SSP2STAT.B2;
    const register unsigned short int NOT_ADDRESS = 5;
    sbit  NOT_ADDRESS_bit at SSP2STAT.B5;
    const register unsigned short int READ_WRITE = 2;
    sbit  READ_WRITE_bit at SSP2STAT.B2;
    const register unsigned short int DATA_ADDRESS = 5;
    sbit  DATA_ADDRESS_bit at SSP2STAT.B5;
    const register unsigned short int I2C_DAT = 5;
    sbit  I2C_DAT_bit at SSP2STAT.B5;

    // SSP2ADD bits
    const register unsigned short int MSK0 = 0;
    sbit  MSK0_bit at SSP2ADD.B0;
    const register unsigned short int MSK1 = 1;
    sbit  MSK1_bit at SSP2ADD.B1;
    const register unsigned short int MSK2 = 2;
    sbit  MSK2_bit at SSP2ADD.B2;
    const register unsigned short int MSK3 = 3;
    sbit  MSK3_bit at SSP2ADD.B3;
    const register unsigned short int MSK4 = 4;
    sbit  MSK4_bit at SSP2ADD.B4;
    const register unsigned short int MSK5 = 5;
    sbit  MSK5_bit at SSP2ADD.B5;
    const register unsigned short int MSK6 = 6;
    sbit  MSK6_bit at SSP2ADD.B6;
    const register unsigned short int MSK7 = 7;
    sbit  MSK7_bit at SSP2ADD.B7;

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
    const register unsigned short int CCP7Y = 4;
    sbit  CCP7Y_bit at CCP7CON.B4;
    const register unsigned short int CCP7X = 5;
    sbit  CCP7X_bit at CCP7CON.B5;

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
    const register unsigned short int CCP6Y = 4;
    sbit  CCP6Y_bit at CCP6CON.B4;
    const register unsigned short int CCP6X = 5;
    sbit  CCP6X_bit at CCP6CON.B5;

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
    const register unsigned short int CCP5Y = 4;
    sbit  CCP5Y_bit at CCP5CON.B4;
    const register unsigned short int CCP5X = 5;
    sbit  CCP5X_bit at CCP5CON.B5;

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
    const register unsigned short int CCP4Y = 4;
    sbit  CCP4Y_bit at CCP4CON.B4;
    const register unsigned short int CCP4X = 5;
    sbit  CCP4X_bit at CCP4CON.B5;

    // T5GCON bits
    const register unsigned short int T5GVAL = 2;
    sbit  T5GVAL_bit at T5GCON.B2;
    const register unsigned short int T5GGO_NOT_T5DONE = 3;
    sbit  T5GGO_NOT_T5DONE_bit at T5GCON.B3;
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
    const register unsigned short int NOT_T5DONE = 3;
    sbit  NOT_T5DONE_bit at T5GCON.B3;

    // T5CON bits
    const register unsigned short int TMR5ON = 0;
    sbit  TMR5ON_bit at T5CON.B0;
    const register unsigned short int RD16 = 1;
    sbit  RD16_bit at T5CON.B1;
    const register unsigned short int NOT_T5SYNC = 2;
    sbit  NOT_T5SYNC_bit at T5CON.B2;
    const register unsigned short int SOSCEN = 3;
    sbit  SOSCEN_bit at T5CON.B3;
    const register unsigned short int T5CKPS0 = 4;
    sbit  T5CKPS0_bit at T5CON.B4;
    const register unsigned short int T5CKPS1 = 5;
    sbit  T5CKPS1_bit at T5CON.B5;
    const register unsigned short int TMR5CS0 = 6;
    sbit  TMR5CS0_bit at T5CON.B6;
    const register unsigned short int TMR5CS1 = 7;
    sbit  TMR5CS1_bit at T5CON.B7;

    // PMD3 bits
    const register unsigned short int TMR12MD = 0;
    sbit  TMR12MD_bit at PMD3.B0;
    const register unsigned short int CCP4MD = 1;
    sbit  CCP4MD_bit at PMD3.B1;
    const register unsigned short int CCP5MD = 2;
    sbit  CCP5MD_bit at PMD3.B2;
    const register unsigned short int CCP6MD = 3;
    sbit  CCP6MD_bit at PMD3.B3;
    const register unsigned short int CCP7MD = 4;
    sbit  CCP7MD_bit at PMD3.B4;
    const register unsigned short int CCP8MD = 5;
    sbit  CCP8MD_bit at PMD3.B5;
    const register unsigned short int CCP9MD = 6;
    sbit  CCP9MD_bit at PMD3.B6;
    const register unsigned short int CCP10MD = 7;
    sbit  CCP10MD_bit at PMD3.B7;

    // PMD2 bits
    const register unsigned short int CMP1MD = 0;
    sbit  CMP1MD_bit at PMD2.B0;
    const register unsigned short int CMP2MD = 1;
    sbit  CMP2MD_bit at PMD2.B1;
    const register unsigned short int CMP3MD = 2;
    sbit  CMP3MD_bit at PMD2.B2;
    const register unsigned short int TMR5MD = 3;
    sbit  TMR5MD_bit at PMD2.B3;
    const register unsigned short int TMR6MD = 4;
    sbit  TMR6MD_bit at PMD2.B4;
    const register unsigned short int TMR7MD = 5;
    sbit  TMR7MD_bit at PMD2.B5;
    const register unsigned short int TMR8MD = 6;
    sbit  TMR8MD_bit at PMD2.B6;
    const register unsigned short int TMR10MD = 7;
    sbit  TMR10MD_bit at PMD2.B7;

    // PMD1 bits
    const register unsigned short int TMR1MD = 1;
    sbit  TMR1MD_bit at PMD1.B1;
    const register unsigned short int TMR2MD = 2;
    sbit  TMR2MD_bit at PMD1.B2;
    const register unsigned short int TMR3MD = 3;
    sbit  TMR3MD_bit at PMD1.B3;
    const register unsigned short int TMR4MD = 4;
    sbit  TMR4MD_bit at PMD1.B4;
    const register unsigned short int RTCCMD = 5;
    sbit  RTCCMD_bit at PMD1.B5;
    const register unsigned short int CTMUMD = 6;
    sbit  CTMUMD_bit at PMD1.B6;

    // PMD0 bits
    const register unsigned short int ADCMD = 0;
    sbit  ADCMD_bit at PMD0.B0;
    const register unsigned short int SSP1MD = 1;
    sbit  SSP1MD_bit at PMD0.B1;
    const register unsigned short int SSP2MD = 2;
    sbit  SSP2MD_bit at PMD0.B2;
    const register unsigned short int UART1MD = 3;
    sbit  UART1MD_bit at PMD0.B3;
    const register unsigned short int UART2MD = 4;
    sbit  UART2MD_bit at PMD0.B4;
    const register unsigned short int CCP1MD = 5;
    sbit  CCP1MD_bit at PMD0.B5;
    const register unsigned short int CCP2MD = 6;
    sbit  CCP2MD_bit at PMD0.B6;
    const register unsigned short int CCP3MD = 7;
    sbit  CCP3MD_bit at PMD0.B7;

    // PSTR3CON bits
    const register unsigned short int STRA = 0;
    sbit  STRA_bit at PSTR3CON.B0;
    const register unsigned short int STRB = 1;
    sbit  STRB_bit at PSTR3CON.B1;
    const register unsigned short int STRC = 2;
    sbit  STRC_bit at PSTR3CON.B2;
    const register unsigned short int STRD = 3;
    sbit  STRD_bit at PSTR3CON.B3;
    const register unsigned short int STRSYNC = 4;
    sbit  STRSYNC_bit at PSTR3CON.B4;
    const register unsigned short int CMPL0 = 6;
    sbit  CMPL0_bit at PSTR3CON.B6;
    const register unsigned short int CMPL1 = 7;
    sbit  CMPL1_bit at PSTR3CON.B7;

    // PSTR2CON bits
    sbit  STRA_PSTR2CON_bit at PSTR2CON.B0;
    sbit  STRB_PSTR2CON_bit at PSTR2CON.B1;
    sbit  STRC_PSTR2CON_bit at PSTR2CON.B2;
    sbit  STRD_PSTR2CON_bit at PSTR2CON.B3;
    sbit  STRSYNC_PSTR2CON_bit at PSTR2CON.B4;
    sbit  CMPL0_PSTR2CON_bit at PSTR2CON.B6;
    sbit  CMPL1_PSTR2CON_bit at PSTR2CON.B7;

    // BAUDCON2 bits
    const register unsigned short int ABDEN = 0;
    sbit  ABDEN_bit at BAUDCON2.B0;
    const register unsigned short int WUE = 1;
    sbit  WUE_bit at BAUDCON2.B1;
    const register unsigned short int BRG16 = 3;
    sbit  BRG16_bit at BAUDCON2.B3;
    const register unsigned short int TXCKP = 4;
    sbit  TXCKP_bit at BAUDCON2.B4;
    const register unsigned short int RXDTP = 5;
    sbit  RXDTP_bit at BAUDCON2.B5;
    const register unsigned short int RCIDL = 6;
    sbit  RCIDL_bit at BAUDCON2.B6;
    const register unsigned short int ABDOVF = 7;
    sbit  ABDOVF_bit at BAUDCON2.B7;

    // TXSTA2 bits
    const register unsigned short int TX9D = 0;
    sbit  TX9D_bit at TXSTA2.B0;
    const register unsigned short int TRMT = 1;
    sbit  TRMT_bit at TXSTA2.B1;
    const register unsigned short int BRGH = 2;
    sbit  BRGH_bit at TXSTA2.B2;
    const register unsigned short int SENDB = 3;
    sbit  SENDB_bit at TXSTA2.B3;
    const register unsigned short int SYNC = 4;
    sbit  SYNC_bit at TXSTA2.B4;
    const register unsigned short int TXEN = 5;
    sbit  TXEN_bit at TXSTA2.B5;
    const register unsigned short int TX9 = 6;
    sbit  TX9_bit at TXSTA2.B6;
    const register unsigned short int CSRC = 7;
    sbit  CSRC_bit at TXSTA2.B7;
    const register unsigned short int TX9D2 = 0;
    sbit  TX9D2_bit at TXSTA2.B0;
    const register unsigned short int TRMT2 = 1;
    sbit  TRMT2_bit at TXSTA2.B1;
    const register unsigned short int BRGH2 = 2;
    sbit  BRGH2_bit at TXSTA2.B2;
    const register unsigned short int SENDB2 = 3;
    sbit  SENDB2_bit at TXSTA2.B3;
    const register unsigned short int SYNC2 = 4;
    sbit  SYNC2_bit at TXSTA2.B4;
    const register unsigned short int TXEN2 = 5;
    sbit  TXEN2_bit at TXSTA2.B5;
    const register unsigned short int TX92 = 6;
    sbit  TX92_bit at TXSTA2.B6;
    const register unsigned short int CSRC2 = 7;
    sbit  CSRC2_bit at TXSTA2.B7;

    // RCSTA2 bits
    const register unsigned short int RX9D = 0;
    sbit  RX9D_bit at RCSTA2.B0;
    const register unsigned short int OERR = 1;
    sbit  OERR_bit at RCSTA2.B1;
    const register unsigned short int FERR = 2;
    sbit  FERR_bit at RCSTA2.B2;
    const register unsigned short int ADDEN = 3;
    sbit  ADDEN_bit at RCSTA2.B3;
    const register unsigned short int CREN = 4;
    sbit  CREN_bit at RCSTA2.B4;
    const register unsigned short int SREN = 5;
    sbit  SREN_bit at RCSTA2.B5;
    const register unsigned short int RX9 = 6;
    sbit  RX9_bit at RCSTA2.B6;
    const register unsigned short int SPEN = 7;
    sbit  SPEN_bit at RCSTA2.B7;
    const register unsigned short int RX9D2 = 0;
    sbit  RX9D2_bit at RCSTA2.B0;
    const register unsigned short int OERR2 = 1;
    sbit  OERR2_bit at RCSTA2.B1;
    const register unsigned short int FERR2 = 2;
    sbit  FERR2_bit at RCSTA2.B2;
    const register unsigned short int ADDEN2 = 3;
    sbit  ADDEN2_bit at RCSTA2.B3;
    const register unsigned short int CREN2 = 4;
    sbit  CREN2_bit at RCSTA2.B4;
    const register unsigned short int SREN2 = 5;
    sbit  SREN2_bit at RCSTA2.B5;
    const register unsigned short int RX92 = 6;
    sbit  RX92_bit at RCSTA2.B6;
    const register unsigned short int SPEN2 = 7;
    sbit  SPEN2_bit at RCSTA2.B7;

    // ANCON2 bits
    const register unsigned short int ANSEL16 = 0;
    sbit  ANSEL16_bit at ANCON2.B0;
    const register unsigned short int ANSEL17 = 1;
    sbit  ANSEL17_bit at ANCON2.B1;
    const register unsigned short int ANSEL18 = 2;
    sbit  ANSEL18_bit at ANCON2.B2;
    const register unsigned short int ANSEL19 = 3;
    sbit  ANSEL19_bit at ANCON2.B3;
    const register unsigned short int ANSEL20 = 4;
    sbit  ANSEL20_bit at ANCON2.B4;
    const register unsigned short int ANSEL21 = 5;
    sbit  ANSEL21_bit at ANCON2.B5;
    const register unsigned short int ANSEL22 = 6;
    sbit  ANSEL22_bit at ANCON2.B6;
    const register unsigned short int ANSEL23 = 7;
    sbit  ANSEL23_bit at ANCON2.B7;

    // ANCON1 bits
    const register unsigned short int ANSEL8 = 0;
    sbit  ANSEL8_bit at ANCON1.B0;
    const register unsigned short int ANSEL9 = 1;
    sbit  ANSEL9_bit at ANCON1.B1;
    const register unsigned short int ANSEL10 = 2;
    sbit  ANSEL10_bit at ANCON1.B2;
    const register unsigned short int ANSEL11 = 3;
    sbit  ANSEL11_bit at ANCON1.B3;
    const register unsigned short int ANSEL12 = 4;
    sbit  ANSEL12_bit at ANCON1.B4;
    const register unsigned short int ANSEL13 = 5;
    sbit  ANSEL13_bit at ANCON1.B5;
    const register unsigned short int ANSEL14 = 6;
    sbit  ANSEL14_bit at ANCON1.B6;
    const register unsigned short int ANSEL15 = 7;
    sbit  ANSEL15_bit at ANCON1.B7;

    // ANCON0 bits
    const register unsigned short int ANSEL0 = 0;
    sbit  ANSEL0_bit at ANCON0.B0;
    const register unsigned short int ANSEL1 = 1;
    sbit  ANSEL1_bit at ANCON0.B1;
    const register unsigned short int ANSEL2 = 2;
    sbit  ANSEL2_bit at ANCON0.B2;
    const register unsigned short int ANSEL3 = 3;
    sbit  ANSEL3_bit at ANCON0.B3;
    const register unsigned short int ANSEL4 = 4;
    sbit  ANSEL4_bit at ANCON0.B4;
    const register unsigned short int ANSEL5 = 5;
    sbit  ANSEL5_bit at ANCON0.B5;
    const register unsigned short int ANSEL6 = 6;
    sbit  ANSEL6_bit at ANCON0.B6;
    const register unsigned short int ANSEL7 = 7;
    sbit  ANSEL7_bit at ANCON0.B7;

    // ODCON3 bits
    const register unsigned short int CTMUDS = 0;
    sbit  CTMUDS_bit at ODCON3.B0;
    const register unsigned short int U1OD = 6;
    sbit  U1OD_bit at ODCON3.B6;
    const register unsigned short int U2OD = 7;
    sbit  U2OD_bit at ODCON3.B7;

    // ODCON2 bits
    const register unsigned short int CCP3OD = 0;
    sbit  CCP3OD_bit at ODCON2.B0;
    const register unsigned short int CCP4OD = 1;
    sbit  CCP4OD_bit at ODCON2.B1;
    const register unsigned short int CCP5OD = 2;
    sbit  CCP5OD_bit at ODCON2.B2;
    const register unsigned short int CCP6OD = 3;
    sbit  CCP6OD_bit at ODCON2.B3;
    const register unsigned short int CCP7OD = 4;
    sbit  CCP7OD_bit at ODCON2.B4;
    const register unsigned short int CCP8OD = 5;
    sbit  CCP8OD_bit at ODCON2.B5;
    const register unsigned short int CCP9OD = 6;
    sbit  CCP9OD_bit at ODCON2.B6;
    const register unsigned short int CCP10OD = 7;
    sbit  CCP10OD_bit at ODCON2.B7;

    // ODCON1 bits
    const register unsigned short int SPI2OD = 0;
    sbit  SPI2OD_bit at ODCON1.B0;
    const register unsigned short int CCP1OD = 5;
    sbit  CCP1OD_bit at ODCON1.B5;
    const register unsigned short int CCP2OD = 6;
    sbit  CCP2OD_bit at ODCON1.B6;
    const register unsigned short int SPI1OD = 7;
    sbit  SPI1OD_bit at ODCON1.B7;

    // REFOCON bits
    const register unsigned short int ROSEL = 4;
    sbit  ROSEL_bit at REFOCON.B4;
    const register unsigned short int ROSSLP = 5;
    sbit  ROSSLP_bit at REFOCON.B5;
    const register unsigned short int ROON = 7;
    sbit  ROON_bit at REFOCON.B7;
    const register unsigned short int RODIV0 = 0;
    sbit  RODIV0_bit at REFOCON.B0;
    const register unsigned short int RODIV1 = 1;
    sbit  RODIV1_bit at REFOCON.B1;
    const register unsigned short int RODIV2 = 2;
    sbit  RODIV2_bit at REFOCON.B2;
    const register unsigned short int RODIV3 = 3;
    sbit  RODIV3_bit at REFOCON.B3;

    // CCPTMRS2 bits
    const register unsigned short int C9TSEL0 = 2;
    sbit  C9TSEL0_bit at CCPTMRS2.B2;
    const register unsigned short int C10TSEL0 = 4;
    sbit  C10TSEL0_bit at CCPTMRS2.B4;
    const register unsigned short int C8TSEL0 = 0;
    sbit  C8TSEL0_bit at CCPTMRS2.B0;
    const register unsigned short int C8TSEL1 = 1;
    sbit  C8TSEL1_bit at CCPTMRS2.B1;

    // CCPTMRS1 bits
    const register unsigned short int C5TSEL0 = 2;
    sbit  C5TSEL0_bit at CCPTMRS1.B2;
    const register unsigned short int C6TSEL0 = 4;
    sbit  C6TSEL0_bit at CCPTMRS1.B4;
    const register unsigned short int C4TSEL0 = 0;
    sbit  C4TSEL0_bit at CCPTMRS1.B0;
    const register unsigned short int C4TSEL1 = 1;
    sbit  C4TSEL1_bit at CCPTMRS1.B1;
    const register unsigned short int C7TSEL0 = 6;
    sbit  C7TSEL0_bit at CCPTMRS1.B6;
    const register unsigned short int C7TSEL1 = 7;
    sbit  C7TSEL1_bit at CCPTMRS1.B7;

    // CCPTMRS0 bits
    const register unsigned short int C1TSEL0 = 0;
    sbit  C1TSEL0_bit at CCPTMRS0.B0;
    const register unsigned short int C1TSEL1 = 1;
    sbit  C1TSEL1_bit at CCPTMRS0.B1;
    const register unsigned short int C1TSEL2 = 2;
    sbit  C1TSEL2_bit at CCPTMRS0.B2;
    const register unsigned short int C2TSEL0 = 3;
    sbit  C2TSEL0_bit at CCPTMRS0.B3;
    const register unsigned short int C2TSEL1 = 4;
    sbit  C2TSEL1_bit at CCPTMRS0.B4;
    const register unsigned short int C2TSEL2 = 5;
    sbit  C2TSEL2_bit at CCPTMRS0.B5;
    const register unsigned short int C3TSEL0 = 6;
    sbit  C3TSEL0_bit at CCPTMRS0.B6;
    const register unsigned short int C3TSEL1 = 7;
    sbit  C3TSEL1_bit at CCPTMRS0.B7;

    // CM3CON, CM3CON1 bits
    const register unsigned short int CREF = 2;
    sbit  CREF_bit at CM3CON.B2;
    const register unsigned short int CPOL = 5;
    sbit  CPOL_bit at CM3CON.B5;
    const register unsigned short int COE = 6;
    sbit  COE_bit at CM3CON.B6;
    const register unsigned short int CON = 7;
    sbit  CON_bit at CM3CON.B7;
    const register unsigned short int CCH0 = 0;
    sbit  CCH0_bit at CM3CON.B0;
    const register unsigned short int CCH1 = 1;
    sbit  CCH1_bit at CM3CON.B1;
    const register unsigned short int EVPOL0 = 3;
    sbit  EVPOL0_bit at CM3CON.B3;
    const register unsigned short int EVPOL1 = 4;
    sbit  EVPOL1_bit at CM3CON.B4;

    // CM2CON bits
    sbit  CREF_CM2CON_bit at CM2CON.B2;
    sbit  CPOL_CM2CON_bit at CM2CON.B5;
    sbit  COE_CM2CON_bit at CM2CON.B6;
    sbit  CON_CM2CON_bit at CM2CON.B7;
    sbit  CCH0_CM2CON_bit at CM2CON.B0;
    sbit  CCH1_CM2CON_bit at CM2CON.B1;
    sbit  EVPOL0_CM2CON_bit at CM2CON.B3;
    sbit  EVPOL1_CM2CON_bit at CM2CON.B4;

    // CM2CON1 bits
    sbit  CREF_CM2CON1_bit at CM2CON1.B2;
    sbit  CPOL_CM2CON1_bit at CM2CON1.B5;
    sbit  COE_CM2CON1_bit at CM2CON1.B6;
    sbit  CON_CM2CON1_bit at CM2CON1.B7;
    sbit  CCH0_CM2CON1_bit at CM2CON1.B0;
    sbit  CCH1_CM2CON1_bit at CM2CON1.B1;
    sbit  EVPOL0_CM2CON1_bit at CM2CON1.B3;
    sbit  EVPOL1_CM2CON1_bit at CM2CON1.B4;

    // T12CON bits
    const register unsigned short int TMR12ON = 2;
    sbit  TMR12ON_bit at T12CON.B2;
    const register unsigned short int T12CKPS0 = 0;
    sbit  T12CKPS0_bit at T12CON.B0;
    const register unsigned short int T12CKPS1 = 1;
    sbit  T12CKPS1_bit at T12CON.B1;
    const register unsigned short int T12OUTPS0 = 3;
    sbit  T12OUTPS0_bit at T12CON.B3;
    const register unsigned short int T12OUTPS1 = 4;
    sbit  T12OUTPS1_bit at T12CON.B4;
    const register unsigned short int T12OUTPS2 = 5;
    sbit  T12OUTPS2_bit at T12CON.B5;
    const register unsigned short int T12OUTPS3 = 6;
    sbit  T12OUTPS3_bit at T12CON.B6;

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

    // T7GCON bits
    const register unsigned short int T7GVAL = 2;
    sbit  T7GVAL_bit at T7GCON.B2;
    const register unsigned short int T7GGO_NOT_T7DONE = 3;
    sbit  T7GGO_NOT_T7DONE_bit at T7GCON.B3;
    const register unsigned short int T7GSPM = 4;
    sbit  T7GSPM_bit at T7GCON.B4;
    const register unsigned short int T7GTM = 5;
    sbit  T7GTM_bit at T7GCON.B5;
    const register unsigned short int T7GPOL = 6;
    sbit  T7GPOL_bit at T7GCON.B6;
    const register unsigned short int TMR7GE = 7;
    sbit  TMR7GE_bit at T7GCON.B7;
    const register unsigned short int T7GSS0 = 0;
    sbit  T7GSS0_bit at T7GCON.B0;
    const register unsigned short int T7GSS1 = 1;
    sbit  T7GSS1_bit at T7GCON.B1;
    const register unsigned short int T7GGO = 3;
    sbit  T7GGO_bit at T7GCON.B3;
    const register unsigned short int NOT_T7DONE = 3;
    sbit  NOT_T7DONE_bit at T7GCON.B3;

    // T7CON bits
    const register unsigned short int TMR7ON = 0;
    sbit  TMR7ON_bit at T7CON.B0;
    sbit  RD16_T7CON_bit at T7CON.B1;
    const register unsigned short int NOT_T7SYNC = 2;
    sbit  NOT_T7SYNC_bit at T7CON.B2;
    sbit  SOSCEN_T7CON_bit at T7CON.B3;
    const register unsigned short int T7CKPS0 = 4;
    sbit  T7CKPS0_bit at T7CON.B4;
    const register unsigned short int T7CKPS1 = 5;
    sbit  T7CKPS1_bit at T7CON.B5;
    const register unsigned short int TMR7CS0 = 6;
    sbit  TMR7CS0_bit at T7CON.B6;
    const register unsigned short int TMR7CS1 = 7;
    sbit  TMR7CS1_bit at T7CON.B7;

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
    const register unsigned short int CCP10Y = 4;
    sbit  CCP10Y_bit at CCP10CON.B4;
    const register unsigned short int CCP10X = 5;
    sbit  CCP10X_bit at CCP10CON.B5;

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
    const register unsigned short int CCP9Y = 4;
    sbit  CCP9Y_bit at CCP9CON.B4;
    const register unsigned short int CCP9X = 5;
    sbit  CCP9X_bit at CCP9CON.B5;

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
    const register unsigned short int CCP8Y = 4;
    sbit  CCP8Y_bit at CCP8CON.B4;
    const register unsigned short int CCP8X = 5;
    sbit  CCP8X_bit at CCP8CON.B5;

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
    const register unsigned short int CCP3Y = 4;
    sbit  CCP3Y_bit at CCP3CON.B4;
    const register unsigned short int CCP3X = 5;
    sbit  CCP3X_bit at CCP3CON.B5;

    // ECCP3DEL, PWM3CON bits
    const register unsigned short int P3RSEN = 7;
    sbit  P3RSEN_bit at ECCP3DEL.B7;
    const register unsigned short int P3DC0 = 0;
    sbit  P3DC0_bit at ECCP3DEL.B0;
    const register unsigned short int P3DC1 = 1;
    sbit  P3DC1_bit at ECCP3DEL.B1;
    const register unsigned short int P3DC2 = 2;
    sbit  P3DC2_bit at ECCP3DEL.B2;
    const register unsigned short int P3DC3 = 3;
    sbit  P3DC3_bit at ECCP3DEL.B3;
    const register unsigned short int P3DC4 = 4;
    sbit  P3DC4_bit at ECCP3DEL.B4;
    const register unsigned short int P3DC5 = 5;
    sbit  P3DC5_bit at ECCP3DEL.B5;
    const register unsigned short int P3DC6 = 6;
    sbit  P3DC6_bit at ECCP3DEL.B6;

    // ECCP3AS bits
    const register unsigned short int ECCP3ASE = 7;
    sbit  ECCP3ASE_bit at ECCP3AS.B7;
    const register unsigned short int PSS3BD0 = 0;
    sbit  PSS3BD0_bit at ECCP3AS.B0;
    const register unsigned short int PSS3BD1 = 1;
    sbit  PSS3BD1_bit at ECCP3AS.B1;
    const register unsigned short int PSS3AC0 = 2;
    sbit  PSS3AC0_bit at ECCP3AS.B2;
    const register unsigned short int PSS3AC1 = 3;
    sbit  PSS3AC1_bit at ECCP3AS.B3;
    const register unsigned short int ECCP3AS0 = 4;
    sbit  ECCP3AS0_bit at ECCP3AS.B4;
    const register unsigned short int ECCP3AS1 = 5;
    sbit  ECCP3AS1_bit at ECCP3AS.B5;
    const register unsigned short int ECCP3AS2 = 6;
    sbit  ECCP3AS2_bit at ECCP3AS.B6;

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
    const register unsigned short int P2M0 = 6;
    sbit  P2M0_bit at CCP2CON.B6;
    const register unsigned short int P2M1 = 7;
    sbit  P2M1_bit at CCP2CON.B7;
    const register unsigned short int CCP2Y = 4;
    sbit  CCP2Y_bit at CCP2CON.B4;
    const register unsigned short int CCP2X = 5;
    sbit  CCP2X_bit at CCP2CON.B5;

    // ECCP2DEL, PWM2CON bits
    const register unsigned short int P2RSEN = 7;
    sbit  P2RSEN_bit at ECCP2DEL.B7;
    const register unsigned short int P2DC0 = 0;
    sbit  P2DC0_bit at ECCP2DEL.B0;
    const register unsigned short int P2DC1 = 1;
    sbit  P2DC1_bit at ECCP2DEL.B1;
    const register unsigned short int P2DC2 = 2;
    sbit  P2DC2_bit at ECCP2DEL.B2;
    const register unsigned short int P2DC3 = 3;
    sbit  P2DC3_bit at ECCP2DEL.B3;
    const register unsigned short int P2DC4 = 4;
    sbit  P2DC4_bit at ECCP2DEL.B4;
    const register unsigned short int P2DC5 = 5;
    sbit  P2DC5_bit at ECCP2DEL.B5;
    const register unsigned short int P2DC6 = 6;
    sbit  P2DC6_bit at ECCP2DEL.B6;

    // ECCP2AS bits
    const register unsigned short int ECCP2ASE = 7;
    sbit  ECCP2ASE_bit at ECCP2AS.B7;
    const register unsigned short int PSS2BD0 = 0;
    sbit  PSS2BD0_bit at ECCP2AS.B0;
    const register unsigned short int PSS2BD1 = 1;
    sbit  PSS2BD1_bit at ECCP2AS.B1;
    const register unsigned short int PSS2AC0 = 2;
    sbit  PSS2AC0_bit at ECCP2AS.B2;
    const register unsigned short int PSS2AC1 = 3;
    sbit  PSS2AC1_bit at ECCP2AS.B3;
    const register unsigned short int ECCP2AS0 = 4;
    sbit  ECCP2AS0_bit at ECCP2AS.B4;
    const register unsigned short int ECCP2AS1 = 5;
    sbit  ECCP2AS1_bit at ECCP2AS.B5;
    const register unsigned short int ECCP2AS2 = 6;
    sbit  ECCP2AS2_bit at ECCP2AS.B6;

    // PADCFG1 bits
    const register unsigned short int RJPU = 5;
    sbit  RJPU_bit at PADCFG1.B5;
    const register unsigned short int REPU = 6;
    sbit  REPU_bit at PADCFG1.B6;
    const register unsigned short int RDPU = 7;
    sbit  RDPU_bit at PADCFG1.B7;
    const register unsigned short int RTSECSEL0 = 1;
    sbit  RTSECSEL0_bit at PADCFG1.B1;
    const register unsigned short int RTSECSEL1 = 2;
    sbit  RTSECSEL1_bit at PADCFG1.B2;

    // CM1CON bits
    sbit  CREF_CM1CON_bit at CM1CON.B2;
    sbit  CPOL_CM1CON_bit at CM1CON.B5;
    sbit  COE_CM1CON_bit at CM1CON.B6;
    sbit  CON_CM1CON_bit at CM1CON.B7;
    sbit  CCH0_CM1CON_bit at CM1CON.B0;
    sbit  CCH1_CM1CON_bit at CM1CON.B1;
    sbit  EVPOL0_CM1CON_bit at CM1CON.B3;
    sbit  EVPOL1_CM1CON_bit at CM1CON.B4;

    // CM1CON1 bits
    sbit  CREF_CM1CON1_bit at CM1CON1.B2;
    sbit  CPOL_CM1CON1_bit at CM1CON1.B5;
    sbit  COE_CM1CON1_bit at CM1CON1.B6;
    sbit  CON_CM1CON1_bit at CM1CON1.B7;
    sbit  CCH0_CM1CON1_bit at CM1CON1.B0;
    sbit  CCH1_CM1CON1_bit at CM1CON1.B1;
    sbit  EVPOL0_CM1CON1_bit at CM1CON1.B3;
    sbit  EVPOL1_CM1CON1_bit at CM1CON1.B4;

    // CTMUICON bits
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

    // CTMUCONL bits
    const register unsigned short int EDG1STAT = 0;
    sbit  EDG1STAT_bit at CTMUCONL.B0;
    const register unsigned short int EDG2STAT = 1;
    sbit  EDG2STAT_bit at CTMUCONL.B1;
    const register unsigned short int EDG1POL = 4;
    sbit  EDG1POL_bit at CTMUCONL.B4;
    const register unsigned short int EDG2POL = 7;
    sbit  EDG2POL_bit at CTMUCONL.B7;
    const register unsigned short int EDG1SEL0 = 2;
    sbit  EDG1SEL0_bit at CTMUCONL.B2;
    const register unsigned short int EDG1SEL1 = 3;
    sbit  EDG1SEL1_bit at CTMUCONL.B3;
    const register unsigned short int EDG2SEL0 = 5;
    sbit  EDG2SEL0_bit at CTMUCONL.B5;
    const register unsigned short int EDG2SEL1 = 6;
    sbit  EDG2SEL1_bit at CTMUCONL.B6;

    // CTMUCONH bits
    const register unsigned short int CTTRIG = 0;
    sbit  CTTRIG_bit at CTMUCONH.B0;
    const register unsigned short int IDISSEN = 1;
    sbit  IDISSEN_bit at CTMUCONH.B1;
    const register unsigned short int EDGSEQEN = 2;
    sbit  EDGSEQEN_bit at CTMUCONH.B2;
    const register unsigned short int EDGEN = 3;
    sbit  EDGEN_bit at CTMUCONH.B3;
    const register unsigned short int TGEN = 4;
    sbit  TGEN_bit at CTMUCONH.B4;
    const register unsigned short int CTMUSIDL = 5;
    sbit  CTMUSIDL_bit at CTMUCONH.B5;
    const register unsigned short int CTMUEN = 7;
    sbit  CTMUEN_bit at CTMUCONH.B7;

    // ALRMRPT bits
    const register unsigned short int ARPT0 = 0;
    sbit  ARPT0_bit at ALRMRPT.B0;
    const register unsigned short int ARPT1 = 1;
    sbit  ARPT1_bit at ALRMRPT.B1;
    const register unsigned short int ARPT2 = 2;
    sbit  ARPT2_bit at ALRMRPT.B2;
    const register unsigned short int ARPT3 = 3;
    sbit  ARPT3_bit at ALRMRPT.B3;
    const register unsigned short int ARPT4 = 4;
    sbit  ARPT4_bit at ALRMRPT.B4;
    const register unsigned short int ARPT5 = 5;
    sbit  ARPT5_bit at ALRMRPT.B5;
    const register unsigned short int ARPT6 = 6;
    sbit  ARPT6_bit at ALRMRPT.B6;
    const register unsigned short int ARPT7 = 7;
    sbit  ARPT7_bit at ALRMRPT.B7;

    // ALRMCFG bits
    const register unsigned short int CHIME = 6;
    sbit  CHIME_bit at ALRMCFG.B6;
    const register unsigned short int ALRMEN = 7;
    sbit  ALRMEN_bit at ALRMCFG.B7;
    const register unsigned short int ALRMPTR0 = 0;
    sbit  ALRMPTR0_bit at ALRMCFG.B0;
    const register unsigned short int ALRMPTR1 = 1;
    sbit  ALRMPTR1_bit at ALRMCFG.B1;
    const register unsigned short int AMASK0 = 2;
    sbit  AMASK0_bit at ALRMCFG.B2;
    const register unsigned short int AMASK1 = 3;
    sbit  AMASK1_bit at ALRMCFG.B3;
    const register unsigned short int AMASK2 = 4;
    sbit  AMASK2_bit at ALRMCFG.B4;
    const register unsigned short int AMASK3 = 5;
    sbit  AMASK3_bit at ALRMCFG.B5;

    // RTCVALH bits
    const register unsigned short int WAITE0 = 0;
    sbit  WAITE0_bit at RTCVALH.B0;
    const register unsigned short int WAITE1 = 1;
    sbit  WAITE1_bit at RTCVALH.B1;
    const register unsigned short int WAITM0 = 2;
    sbit  WAITM0_bit at RTCVALH.B2;
    const register unsigned short int WAITM1 = 3;
    sbit  WAITM1_bit at RTCVALH.B3;
    const register unsigned short int WAITM2 = 4;
    sbit  WAITM2_bit at RTCVALH.B4;
    const register unsigned short int WAITM3 = 5;
    sbit  WAITM3_bit at RTCVALH.B5;
    const register unsigned short int WAITB0 = 6;
    sbit  WAITB0_bit at RTCVALH.B6;
    const register unsigned short int WAITB1 = 7;
    sbit  WAITB1_bit at RTCVALH.B7;

    // RTCCAL bits
    const register unsigned short int CAL0 = 0;
    sbit  CAL0_bit at RTCCAL.B0;
    const register unsigned short int CAL1 = 1;
    sbit  CAL1_bit at RTCCAL.B1;
    const register unsigned short int CAL2 = 2;
    sbit  CAL2_bit at RTCCAL.B2;
    const register unsigned short int CAL3 = 3;
    sbit  CAL3_bit at RTCCAL.B3;
    const register unsigned short int CAL4 = 4;
    sbit  CAL4_bit at RTCCAL.B4;
    const register unsigned short int CAL5 = 5;
    sbit  CAL5_bit at RTCCAL.B5;
    const register unsigned short int CAL6 = 6;
    sbit  CAL6_bit at RTCCAL.B6;
    const register unsigned short int CAL7 = 7;
    sbit  CAL7_bit at RTCCAL.B7;

    // RTCCFG bits
    const register unsigned short int RTCOE = 2;
    sbit  RTCOE_bit at RTCCFG.B2;
    const register unsigned short int HALFSEC = 3;
    sbit  HALFSEC_bit at RTCCFG.B3;
    const register unsigned short int RTCSYNC = 4;
    sbit  RTCSYNC_bit at RTCCFG.B4;
    const register unsigned short int RTCWREN = 5;
    sbit  RTCWREN_bit at RTCCFG.B5;
    const register unsigned short int RTCEN = 7;
    sbit  RTCEN_bit at RTCCFG.B7;
    const register unsigned short int RTCPTR0 = 0;
    sbit  RTCPTR0_bit at RTCCFG.B0;
    const register unsigned short int RTCPTR1 = 1;
    sbit  RTCPTR1_bit at RTCCFG.B1;

    // PIE6 bits
    const register unsigned short int CMP1IE = 0;
    sbit  CMP1IE_bit at PIE6.B0;
    const register unsigned short int CMP2IE = 1;
    sbit  CMP2IE_bit at PIE6.B1;
    const register unsigned short int CMP3IE = 2;
    sbit  CMP3IE_bit at PIE6.B2;
    const register unsigned short int EEIE = 4;
    sbit  EEIE_bit at PIE6.B4;

    // OSCCON2 bits
    const register unsigned short int MFIOSEL = 0;
    sbit  MFIOSEL_bit at OSCCON2.B0;
    const register unsigned short int MFIOFS = 1;
    sbit  MFIOFS_bit at OSCCON2.B1;
    const register unsigned short int SOSCGO = 3;
    sbit  SOSCGO_bit at OSCCON2.B3;
    const register unsigned short int SOSCRUN = 6;
    sbit  SOSCRUN_bit at OSCCON2.B6;

    // BAUDCON, BAUDCON1, BAUDCTL bits
    sbit  ABDEN_BAUDCON_bit at BAUDCON.B0;
    sbit  WUE_BAUDCON_bit at BAUDCON.B1;
    sbit  BRG16_BAUDCON_bit at BAUDCON.B3;
    sbit  TXCKP_BAUDCON_bit at BAUDCON.B4;
    sbit  RXDTP_BAUDCON_bit at BAUDCON.B5;
    sbit  RCIDL_BAUDCON_bit at BAUDCON.B6;
    sbit  ABDOVF_BAUDCON_bit at BAUDCON.B7;

    // LCDDATA0 bits
    const register unsigned short int S00C0 = 0;
    sbit  S00C0_bit at LCDDATA0.B0;
    const register unsigned short int S01C0 = 1;
    sbit  S01C0_bit at LCDDATA0.B1;
    const register unsigned short int S02C0 = 2;
    sbit  S02C0_bit at LCDDATA0.B2;
    const register unsigned short int S03C0 = 3;
    sbit  S03C0_bit at LCDDATA0.B3;
    const register unsigned short int S04C0 = 4;
    sbit  S04C0_bit at LCDDATA0.B4;
    const register unsigned short int S05C0 = 5;
    sbit  S05C0_bit at LCDDATA0.B5;
    const register unsigned short int S06C0 = 6;
    sbit  S06C0_bit at LCDDATA0.B6;
    const register unsigned short int S07C0 = 7;
    sbit  S07C0_bit at LCDDATA0.B7;

    // LCDDATA1 bits
    const register unsigned short int S08C0 = 0;
    sbit  S08C0_bit at LCDDATA1.B0;
    const register unsigned short int S09C0 = 1;
    sbit  S09C0_bit at LCDDATA1.B1;
    const register unsigned short int S10C0 = 2;
    sbit  S10C0_bit at LCDDATA1.B2;
    const register unsigned short int S11C0 = 3;
    sbit  S11C0_bit at LCDDATA1.B3;
    const register unsigned short int S12C0 = 4;
    sbit  S12C0_bit at LCDDATA1.B4;
    const register unsigned short int S13C0 = 5;
    sbit  S13C0_bit at LCDDATA1.B5;
    const register unsigned short int S14C0 = 6;
    sbit  S14C0_bit at LCDDATA1.B6;
    const register unsigned short int S15C0 = 7;
    sbit  S15C0_bit at LCDDATA1.B7;

    // LCDDATA2 bits
    const register unsigned short int S16C0 = 0;
    sbit  S16C0_bit at LCDDATA2.B0;
    const register unsigned short int S17C0 = 1;
    sbit  S17C0_bit at LCDDATA2.B1;
    const register unsigned short int S18C0 = 2;
    sbit  S18C0_bit at LCDDATA2.B2;
    const register unsigned short int S19C0 = 3;
    sbit  S19C0_bit at LCDDATA2.B3;
    const register unsigned short int S20C0 = 4;
    sbit  S20C0_bit at LCDDATA2.B4;
    const register unsigned short int S21C0 = 5;
    sbit  S21C0_bit at LCDDATA2.B5;
    const register unsigned short int S22C0 = 6;
    sbit  S22C0_bit at LCDDATA2.B6;
    const register unsigned short int S23C0 = 7;
    sbit  S23C0_bit at LCDDATA2.B7;

    // LCDDATA3 bits
    const register unsigned short int S24C0 = 0;
    sbit  S24C0_bit at LCDDATA3.B0;
    const register unsigned short int S25C0 = 1;
    sbit  S25C0_bit at LCDDATA3.B1;
    const register unsigned short int S26C0 = 2;
    sbit  S26C0_bit at LCDDATA3.B2;
    const register unsigned short int S27C0 = 3;
    sbit  S27C0_bit at LCDDATA3.B3;
    const register unsigned short int S28C0 = 4;
    sbit  S28C0_bit at LCDDATA3.B4;
    const register unsigned short int S29C0 = 5;
    sbit  S29C0_bit at LCDDATA3.B5;
    const register unsigned short int S30C0 = 6;
    sbit  S30C0_bit at LCDDATA3.B6;
    const register unsigned short int S31C0 = 7;
    sbit  S31C0_bit at LCDDATA3.B7;

    // LCDDATA4 bits
    const register unsigned short int S32C0 = 0;
    sbit  S32C0_bit at LCDDATA4.B0;
    const register unsigned short int S33C0 = 1;
    sbit  S33C0_bit at LCDDATA4.B1;
    const register unsigned short int S34C0 = 2;
    sbit  S34C0_bit at LCDDATA4.B2;
    const register unsigned short int S35C0 = 3;
    sbit  S35C0_bit at LCDDATA4.B3;
    const register unsigned short int S36C0 = 4;
    sbit  S36C0_bit at LCDDATA4.B4;
    const register unsigned short int S37C0 = 5;
    sbit  S37C0_bit at LCDDATA4.B5;
    const register unsigned short int S38C0 = 6;
    sbit  S38C0_bit at LCDDATA4.B6;
    const register unsigned short int S39C0 = 7;
    sbit  S39C0_bit at LCDDATA4.B7;

    // LCDDATA5 bits
    const register unsigned short int S40C0 = 0;
    sbit  S40C0_bit at LCDDATA5.B0;
    const register unsigned short int S41C0 = 1;
    sbit  S41C0_bit at LCDDATA5.B1;
    const register unsigned short int S42C0 = 2;
    sbit  S42C0_bit at LCDDATA5.B2;
    const register unsigned short int S43C0 = 3;
    sbit  S43C0_bit at LCDDATA5.B3;
    const register unsigned short int S44C0 = 4;
    sbit  S44C0_bit at LCDDATA5.B4;
    const register unsigned short int S45C0 = 5;
    sbit  S45C0_bit at LCDDATA5.B5;
    const register unsigned short int S46C0 = 6;
    sbit  S46C0_bit at LCDDATA5.B6;
    const register unsigned short int S47C0 = 7;
    sbit  S47C0_bit at LCDDATA5.B7;

    // LCDDATA6 bits
    const register unsigned short int S00C1 = 0;
    sbit  S00C1_bit at LCDDATA6.B0;
    const register unsigned short int S01C1 = 1;
    sbit  S01C1_bit at LCDDATA6.B1;
    const register unsigned short int S02C1 = 2;
    sbit  S02C1_bit at LCDDATA6.B2;
    const register unsigned short int S03C1 = 3;
    sbit  S03C1_bit at LCDDATA6.B3;
    const register unsigned short int S04C1 = 4;
    sbit  S04C1_bit at LCDDATA6.B4;
    const register unsigned short int S05C1 = 5;
    sbit  S05C1_bit at LCDDATA6.B5;
    const register unsigned short int S06C1 = 6;
    sbit  S06C1_bit at LCDDATA6.B6;
    const register unsigned short int S07C1 = 7;
    sbit  S07C1_bit at LCDDATA6.B7;

    // LCDDATA7 bits
    const register unsigned short int S08C1 = 0;
    sbit  S08C1_bit at LCDDATA7.B0;
    const register unsigned short int S09C1 = 1;
    sbit  S09C1_bit at LCDDATA7.B1;
    const register unsigned short int S10C1 = 2;
    sbit  S10C1_bit at LCDDATA7.B2;
    const register unsigned short int S11C1 = 3;
    sbit  S11C1_bit at LCDDATA7.B3;
    const register unsigned short int S12C1 = 4;
    sbit  S12C1_bit at LCDDATA7.B4;
    const register unsigned short int S13C1 = 5;
    sbit  S13C1_bit at LCDDATA7.B5;
    const register unsigned short int S14C1 = 6;
    sbit  S14C1_bit at LCDDATA7.B6;
    const register unsigned short int S15C1 = 7;
    sbit  S15C1_bit at LCDDATA7.B7;

    // LCDDATA8 bits
    const register unsigned short int S16C1 = 0;
    sbit  S16C1_bit at LCDDATA8.B0;
    const register unsigned short int S17C1 = 1;
    sbit  S17C1_bit at LCDDATA8.B1;
    const register unsigned short int S18C1 = 2;
    sbit  S18C1_bit at LCDDATA8.B2;
    const register unsigned short int S19C1 = 3;
    sbit  S19C1_bit at LCDDATA8.B3;
    const register unsigned short int S20C1 = 4;
    sbit  S20C1_bit at LCDDATA8.B4;
    const register unsigned short int S21C1 = 5;
    sbit  S21C1_bit at LCDDATA8.B5;
    const register unsigned short int S22C1 = 6;
    sbit  S22C1_bit at LCDDATA8.B6;
    const register unsigned short int S23C1 = 7;
    sbit  S23C1_bit at LCDDATA8.B7;

    // LCDDATA9 bits
    const register unsigned short int S24C1 = 0;
    sbit  S24C1_bit at LCDDATA9.B0;
    const register unsigned short int S25C1 = 1;
    sbit  S25C1_bit at LCDDATA9.B1;
    const register unsigned short int S26C1 = 2;
    sbit  S26C1_bit at LCDDATA9.B2;
    const register unsigned short int S27C1 = 3;
    sbit  S27C1_bit at LCDDATA9.B3;
    const register unsigned short int S28C1 = 4;
    sbit  S28C1_bit at LCDDATA9.B4;
    const register unsigned short int S29C1 = 5;
    sbit  S29C1_bit at LCDDATA9.B5;
    const register unsigned short int S30C1 = 6;
    sbit  S30C1_bit at LCDDATA9.B6;
    const register unsigned short int S31C1 = 7;
    sbit  S31C1_bit at LCDDATA9.B7;

    // LCDDATA10 bits
    const register unsigned short int S32C1 = 0;
    sbit  S32C1_bit at LCDDATA10.B0;
    const register unsigned short int S33C1 = 1;
    sbit  S33C1_bit at LCDDATA10.B1;
    const register unsigned short int S34C1 = 2;
    sbit  S34C1_bit at LCDDATA10.B2;
    const register unsigned short int S35C1 = 3;
    sbit  S35C1_bit at LCDDATA10.B3;
    const register unsigned short int S36C1 = 4;
    sbit  S36C1_bit at LCDDATA10.B4;
    const register unsigned short int S37C1 = 5;
    sbit  S37C1_bit at LCDDATA10.B5;
    const register unsigned short int S38C1 = 6;
    sbit  S38C1_bit at LCDDATA10.B6;
    const register unsigned short int S39C1 = 7;
    sbit  S39C1_bit at LCDDATA10.B7;

    // LCDDATA11 bits
    const register unsigned short int S40C1 = 0;
    sbit  S40C1_bit at LCDDATA11.B0;
    const register unsigned short int S41C1 = 1;
    sbit  S41C1_bit at LCDDATA11.B1;
    const register unsigned short int S42C1 = 2;
    sbit  S42C1_bit at LCDDATA11.B2;
    const register unsigned short int S43C1 = 3;
    sbit  S43C1_bit at LCDDATA11.B3;
    const register unsigned short int S44C1 = 4;
    sbit  S44C1_bit at LCDDATA11.B4;
    const register unsigned short int S45C1 = 5;
    sbit  S45C1_bit at LCDDATA11.B5;
    const register unsigned short int S46C1 = 6;
    sbit  S46C1_bit at LCDDATA11.B6;
    const register unsigned short int S47C1 = 7;
    sbit  S47C1_bit at LCDDATA11.B7;

    // LCDDATA12 bits
    const register unsigned short int S00C2 = 0;
    sbit  S00C2_bit at LCDDATA12.B0;
    const register unsigned short int S01C2 = 1;
    sbit  S01C2_bit at LCDDATA12.B1;
    const register unsigned short int S02C2 = 2;
    sbit  S02C2_bit at LCDDATA12.B2;
    const register unsigned short int S03C2 = 3;
    sbit  S03C2_bit at LCDDATA12.B3;
    const register unsigned short int S04C2 = 4;
    sbit  S04C2_bit at LCDDATA12.B4;
    const register unsigned short int S05C2 = 5;
    sbit  S05C2_bit at LCDDATA12.B5;
    const register unsigned short int S06C2 = 6;
    sbit  S06C2_bit at LCDDATA12.B6;
    const register unsigned short int S07C2 = 7;
    sbit  S07C2_bit at LCDDATA12.B7;

    // LCDDATA13 bits
    const register unsigned short int S08C2 = 0;
    sbit  S08C2_bit at LCDDATA13.B0;
    const register unsigned short int S09C2 = 1;
    sbit  S09C2_bit at LCDDATA13.B1;
    const register unsigned short int S10C2 = 2;
    sbit  S10C2_bit at LCDDATA13.B2;
    const register unsigned short int S11C2 = 3;
    sbit  S11C2_bit at LCDDATA13.B3;
    const register unsigned short int S12C2 = 4;
    sbit  S12C2_bit at LCDDATA13.B4;
    const register unsigned short int S13C2 = 5;
    sbit  S13C2_bit at LCDDATA13.B5;
    const register unsigned short int S14C2 = 6;
    sbit  S14C2_bit at LCDDATA13.B6;
    const register unsigned short int S15C2 = 7;
    sbit  S15C2_bit at LCDDATA13.B7;

    // LCDDATA14 bits
    const register unsigned short int S16C2 = 0;
    sbit  S16C2_bit at LCDDATA14.B0;
    const register unsigned short int S17C2 = 1;
    sbit  S17C2_bit at LCDDATA14.B1;
    const register unsigned short int S18C2 = 2;
    sbit  S18C2_bit at LCDDATA14.B2;
    const register unsigned short int S19C2 = 3;
    sbit  S19C2_bit at LCDDATA14.B3;
    const register unsigned short int S20C2 = 4;
    sbit  S20C2_bit at LCDDATA14.B4;
    const register unsigned short int S21C2 = 5;
    sbit  S21C2_bit at LCDDATA14.B5;
    const register unsigned short int S22C2 = 6;
    sbit  S22C2_bit at LCDDATA14.B6;
    const register unsigned short int S23C2 = 7;
    sbit  S23C2_bit at LCDDATA14.B7;

    // LCDDATA15 bits
    const register unsigned short int S24C2 = 0;
    sbit  S24C2_bit at LCDDATA15.B0;
    const register unsigned short int S25C2 = 1;
    sbit  S25C2_bit at LCDDATA15.B1;
    const register unsigned short int S26C2 = 2;
    sbit  S26C2_bit at LCDDATA15.B2;
    const register unsigned short int S27C2 = 3;
    sbit  S27C2_bit at LCDDATA15.B3;
    const register unsigned short int S28C2 = 4;
    sbit  S28C2_bit at LCDDATA15.B4;
    const register unsigned short int S29C2 = 5;
    sbit  S29C2_bit at LCDDATA15.B5;
    const register unsigned short int S30C2 = 6;
    sbit  S30C2_bit at LCDDATA15.B6;
    const register unsigned short int S31C2 = 7;
    sbit  S31C2_bit at LCDDATA15.B7;

    // LCDDATA16 bits
    const register unsigned short int S32C2 = 0;
    sbit  S32C2_bit at LCDDATA16.B0;
    const register unsigned short int S33C2 = 1;
    sbit  S33C2_bit at LCDDATA16.B1;
    const register unsigned short int S34C2 = 2;
    sbit  S34C2_bit at LCDDATA16.B2;
    const register unsigned short int S35C2 = 3;
    sbit  S35C2_bit at LCDDATA16.B3;
    const register unsigned short int S36C2 = 4;
    sbit  S36C2_bit at LCDDATA16.B4;
    const register unsigned short int S37C2 = 5;
    sbit  S37C2_bit at LCDDATA16.B5;
    const register unsigned short int S38C2 = 6;
    sbit  S38C2_bit at LCDDATA16.B6;
    const register unsigned short int S39C2 = 7;
    sbit  S39C2_bit at LCDDATA16.B7;

    // LCDDATA17 bits
    const register unsigned short int S40C2 = 0;
    sbit  S40C2_bit at LCDDATA17.B0;
    const register unsigned short int S41C2 = 1;
    sbit  S41C2_bit at LCDDATA17.B1;
    const register unsigned short int S42C2 = 2;
    sbit  S42C2_bit at LCDDATA17.B2;
    const register unsigned short int S43C2 = 3;
    sbit  S43C2_bit at LCDDATA17.B3;
    const register unsigned short int S44C2 = 4;
    sbit  S44C2_bit at LCDDATA17.B4;
    const register unsigned short int S45C2 = 5;
    sbit  S45C2_bit at LCDDATA17.B5;
    const register unsigned short int S46C2 = 6;
    sbit  S46C2_bit at LCDDATA17.B6;
    const register unsigned short int S47C2 = 7;
    sbit  S47C2_bit at LCDDATA17.B7;

    // LCDDATA18 bits
    const register unsigned short int S00C3 = 0;
    sbit  S00C3_bit at LCDDATA18.B0;
    const register unsigned short int S01C3 = 1;
    sbit  S01C3_bit at LCDDATA18.B1;
    const register unsigned short int S02C3 = 2;
    sbit  S02C3_bit at LCDDATA18.B2;
    const register unsigned short int S03C3 = 3;
    sbit  S03C3_bit at LCDDATA18.B3;
    const register unsigned short int S04C3 = 4;
    sbit  S04C3_bit at LCDDATA18.B4;
    const register unsigned short int S05C3 = 5;
    sbit  S05C3_bit at LCDDATA18.B5;
    const register unsigned short int S06C3 = 6;
    sbit  S06C3_bit at LCDDATA18.B6;
    const register unsigned short int S07C3 = 7;
    sbit  S07C3_bit at LCDDATA18.B7;

    // LCDDATA19 bits
    const register unsigned short int S08C3 = 0;
    sbit  S08C3_bit at LCDDATA19.B0;
    const register unsigned short int S09C3 = 1;
    sbit  S09C3_bit at LCDDATA19.B1;
    const register unsigned short int S10C3 = 2;
    sbit  S10C3_bit at LCDDATA19.B2;
    const register unsigned short int S11C3 = 3;
    sbit  S11C3_bit at LCDDATA19.B3;
    const register unsigned short int S12C3 = 4;
    sbit  S12C3_bit at LCDDATA19.B4;
    const register unsigned short int S13C3 = 5;
    sbit  S13C3_bit at LCDDATA19.B5;
    const register unsigned short int S14C3 = 6;
    sbit  S14C3_bit at LCDDATA19.B6;
    const register unsigned short int S15C3 = 7;
    sbit  S15C3_bit at LCDDATA19.B7;

    // LCDDATA20 bits
    const register unsigned short int S16C3 = 0;
    sbit  S16C3_bit at LCDDATA20.B0;
    const register unsigned short int S17C3 = 1;
    sbit  S17C3_bit at LCDDATA20.B1;
    const register unsigned short int S18C3 = 2;
    sbit  S18C3_bit at LCDDATA20.B2;
    const register unsigned short int S19C3 = 3;
    sbit  S19C3_bit at LCDDATA20.B3;
    const register unsigned short int S20C3 = 4;
    sbit  S20C3_bit at LCDDATA20.B4;
    const register unsigned short int S21C3 = 5;
    sbit  S21C3_bit at LCDDATA20.B5;
    const register unsigned short int S22C3 = 6;
    sbit  S22C3_bit at LCDDATA20.B6;
    const register unsigned short int S23C3 = 7;
    sbit  S23C3_bit at LCDDATA20.B7;

    // LCDDATA21 bits
    const register unsigned short int S24C3 = 0;
    sbit  S24C3_bit at LCDDATA21.B0;
    const register unsigned short int S25C3 = 1;
    sbit  S25C3_bit at LCDDATA21.B1;
    const register unsigned short int S26C3 = 2;
    sbit  S26C3_bit at LCDDATA21.B2;
    const register unsigned short int S27C3 = 3;
    sbit  S27C3_bit at LCDDATA21.B3;
    const register unsigned short int S28C3 = 4;
    sbit  S28C3_bit at LCDDATA21.B4;
    const register unsigned short int S29C3 = 5;
    sbit  S29C3_bit at LCDDATA21.B5;
    const register unsigned short int S30C3 = 6;
    sbit  S30C3_bit at LCDDATA21.B6;
    const register unsigned short int S31C3 = 7;
    sbit  S31C3_bit at LCDDATA21.B7;

    // LCDDATA22 bits
    const register unsigned short int S32C3 = 0;
    sbit  S32C3_bit at LCDDATA22.B0;
    const register unsigned short int S33C3 = 1;
    sbit  S33C3_bit at LCDDATA22.B1;
    const register unsigned short int S34C3 = 2;
    sbit  S34C3_bit at LCDDATA22.B2;
    const register unsigned short int S35C3 = 3;
    sbit  S35C3_bit at LCDDATA22.B3;
    const register unsigned short int S36C3 = 4;
    sbit  S36C3_bit at LCDDATA22.B4;
    const register unsigned short int S37C3 = 5;
    sbit  S37C3_bit at LCDDATA22.B5;
    const register unsigned short int S38C3 = 6;
    sbit  S38C3_bit at LCDDATA22.B6;
    const register unsigned short int S39C3 = 7;
    sbit  S39C3_bit at LCDDATA22.B7;

    // LCDDATA23 bits
    const register unsigned short int S40C3 = 0;
    sbit  S40C3_bit at LCDDATA23.B0;
    const register unsigned short int S41C3 = 1;
    sbit  S41C3_bit at LCDDATA23.B1;
    const register unsigned short int S42C3 = 2;
    sbit  S42C3_bit at LCDDATA23.B2;
    const register unsigned short int S43C3 = 3;
    sbit  S43C3_bit at LCDDATA23.B3;
    const register unsigned short int S44C3 = 4;
    sbit  S44C3_bit at LCDDATA23.B4;
    const register unsigned short int S45C3 = 5;
    sbit  S45C3_bit at LCDDATA23.B5;
    const register unsigned short int S46C3 = 6;
    sbit  S46C3_bit at LCDDATA23.B6;
    const register unsigned short int S47C3 = 7;
    sbit  S47C3_bit at LCDDATA23.B7;

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
    const register unsigned short int ULPWUIN = 0;
    sbit  ULPWUIN_bit at PORTA.B0;

    // Alternative bit function
    const register unsigned short int SEG18 = 1;
    sbit  SEG18_bit at PORTA.B1;

    // Alternative bit function
    const register unsigned short int VREF_MINUS = 2;
    sbit  VREF_MINUS_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int VREF_PLUS = 3;
    sbit  VREF_PLUS_bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int SEG14 = 4;
    sbit  SEG14_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int SEG15 = 5;
    sbit  SEG15_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int CLKO = 6;
    sbit  CLKO_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int CLKI = 7;
    sbit  CLKI_bit at PORTA.B7;

    // Alternative bit function
    const register unsigned short int T0CKI = 4;
    sbit  T0CKI_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int T1CKI = 5;
    sbit  T1CKI_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int T3G = 5;
    sbit  T3G_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int LVDIN = 5;
    sbit  LVDIN_bit at PORTA.B5;

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
    const register unsigned short int INT3 = 3;
    sbit  INT3_bit at PORTB.B3;

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
    const register unsigned short int SEG30 = 0;
    sbit  SEG30_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int SEG8 = 1;
    sbit  SEG8_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int SEG9 = 2;
    sbit  SEG9_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int SEG10 = 3;
    sbit  SEG10_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int SEG11 = 4;
    sbit  SEG11_bit at PORTB.B4;

    // Alternative bit function
    const register unsigned short int SEG29 = 5;
    sbit  SEG29_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int FLT0 = 0;
    sbit  FLT0_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int CTED1 = 2;
    sbit  CTED1_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int CTED2 = 3;
    sbit  CTED2_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int T3CKI = 5;
    sbit  T3CKI_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int CCP2_PA2 = 3;
    sbit  CCP2_PA2_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int T1G = 5;
    sbit  T1G_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int PGM = 5;
    sbit  PGM_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int PGC = 6;
    sbit  PGC_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int PGD = 7;
    sbit  PGD_bit at PORTB.B7;

    // Alternative bit function
    const register unsigned short int SEG32 = 1;
    sbit  SEG32_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int SEG13 = 2;
    sbit  SEG13_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int SEG17 = 3;
    sbit  SEG17_bit at PORTC.B3;

    // Alternative bit function
    const register unsigned short int SEG16 = 4;
    sbit  SEG16_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int SEG12 = 5;
    sbit  SEG12_bit at PORTC.B5;

    // Alternative bit function
    const register unsigned short int SEG27 = 6;
    sbit  SEG27_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int SEG28 = 7;
    sbit  SEG28_bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int SOSCO = 0;
    sbit  SOSCO_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int SOSCI = 1;
    sbit  SOSCI_bit at PORTC.B1;

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
    const register unsigned short int SCKLI = 0;
    sbit  SCKLI_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int CCP2_PORTC = 1;
    sbit  CCP2_PORTC_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int CCP1 = 2;
    sbit  CCP1_bit at PORTC.B2;

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
    const register unsigned short int PA2_PORTC = 1;
    sbit  PA2_PORTC_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int PA1 = 2;
    sbit  PA1_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int AD0 = 0;
    sbit  AD0_bit at PORTD.B0;

    // Alternative bit function
    const register unsigned short int AD1 = 1;
    sbit  AD1_bit at PORTD.B1;

    // Alternative bit function
    const register unsigned short int AD2 = 2;
    sbit  AD2_bit at PORTD.B2;

    // Alternative bit function
    const register unsigned short int AD3 = 3;
    sbit  AD3_bit at PORTD.B3;

    // Alternative bit function
    const register unsigned short int AD4 = 4;
    sbit  AD4_bit at PORTD.B4;

    // Alternative bit function
    const register unsigned short int AD5 = 5;
    sbit  AD5_bit at PORTD.B5;

    // Alternative bit function
    const register unsigned short int AD6 = 6;
    sbit  AD6_bit at PORTD.B6;

    // Alternative bit function
    const register unsigned short int AD7 = 7;
    sbit  AD7_bit at PORTD.B7;

    // Alternative bit function
    const register unsigned short int PSP0 = 0;
    sbit  PSP0_bit at PORTD.B0;

    // Alternative bit function
    const register unsigned short int PSP1 = 1;
    sbit  PSP1_bit at PORTD.B1;

    // Alternative bit function
    const register unsigned short int PSP2 = 2;
    sbit  PSP2_bit at PORTD.B2;

    // Alternative bit function
    const register unsigned short int PSP3 = 3;
    sbit  PSP3_bit at PORTD.B3;

    // Alternative bit function
    const register unsigned short int PSP4 = 4;
    sbit  PSP4_bit at PORTD.B4;

    // Alternative bit function
    const register unsigned short int PSP5 = 5;
    sbit  PSP5_bit at PORTD.B5;

    // Alternative bit function
    const register unsigned short int PSP6 = 6;
    sbit  PSP6_bit at PORTD.B6;

    // Alternative bit function
    const register unsigned short int PSP7 = 7;
    sbit  PSP7_bit at PORTD.B7;

    // Alternative bit function
    const register unsigned short int SEG0 = 0;
    sbit  SEG0_bit at PORTD.B0;

    // Alternative bit function
    const register unsigned short int SEG1 = 1;
    sbit  SEG1_bit at PORTD.B1;

    // Alternative bit function
    const register unsigned short int SEG2 = 2;
    sbit  SEG2_bit at PORTD.B2;

    // Alternative bit function
    const register unsigned short int SEG3 = 3;
    sbit  SEG3_bit at PORTD.B3;

    // Alternative bit function
    const register unsigned short int SEG4 = 4;
    sbit  SEG4_bit at PORTD.B4;

    // Alternative bit function
    const register unsigned short int SEG5 = 5;
    sbit  SEG5_bit at PORTD.B5;

    // Alternative bit function
    const register unsigned short int SEG6 = 6;
    sbit  SEG6_bit at PORTD.B6;

    // Alternative bit function
    const register unsigned short int SEG7 = 7;
    sbit  SEG7_bit at PORTD.B7;

    // Alternative bit function
    const register unsigned short int CTPLS = 0;
    sbit  CTPLS_bit at PORTD.B0;

    // Alternative bit function
    const register unsigned short int T5CKI = 1;
    sbit  T5CKI_bit at PORTD.B1;

    // Alternative bit function
    const register unsigned short int SDO2 = 4;
    sbit  SDO2_bit at PORTD.B4;

    // Alternative bit function
    const register unsigned short int SDI2 = 5;
    sbit  SDI2_bit at PORTD.B5;

    // Alternative bit function
    const register unsigned short int SCK2 = 6;
    sbit  SCK2_bit at PORTD.B6;

    // Alternative bit function
    const register unsigned short int SS2 = 7;
    sbit  SS2_bit at PORTD.B7;

    // Alternative bit function
    const register unsigned short int T7G = 1;
    sbit  T7G_bit at PORTD.B1;

    // Alternative bit function
    const register unsigned short int SDA2 = 5;
    sbit  SDA2_bit at PORTD.B5;

    // Alternative bit function
    const register unsigned short int SCL2 = 6;
    sbit  SCL2_bit at PORTD.B6;

    // Alternative bit function
    const register unsigned short int AD8 = 0;
    sbit  AD8_bit at PORTE.B0;

    // Alternative bit function
    const register unsigned short int AD9 = 1;
    sbit  AD9_bit at PORTE.B1;

    // Alternative bit function
    const register unsigned short int AD10 = 2;
    sbit  AD10_bit at PORTE.B2;

    // Alternative bit function
    const register unsigned short int AD11 = 3;
    sbit  AD11_bit at PORTE.B3;

    // Alternative bit function
    const register unsigned short int AD12 = 4;
    sbit  AD12_bit at PORTE.B4;

    // Alternative bit function
    const register unsigned short int AD13 = 5;
    sbit  AD13_bit at PORTE.B5;

    // Alternative bit function
    const register unsigned short int AD14 = 6;
    sbit  AD14_bit at PORTE.B6;

    // Alternative bit function
    const register unsigned short int AD15 = 7;
    sbit  AD15_bit at PORTE.B7;

    // Alternative bit function
    const register unsigned short int PD2 = 0;
    sbit  PD2_bit at PORTE.B0;

    // Alternative bit function
    const register unsigned short int PC2 = 1;
    sbit  PC2_bit at PORTE.B1;

    // Alternative bit function
    const register unsigned short int PB2 = 2;
    sbit  PB2_bit at PORTE.B2;

    // Alternative bit function
    const register unsigned short int PC3_PORTE = 3;
    sbit  PC3_PORTE_bit at PORTE.B3;

    // Alternative bit function
    const register unsigned short int PB3_PORTE = 4;
    sbit  PB3_PORTE_bit at PORTE.B4;

    // Alternative bit function
    const register unsigned short int PC1_PORTE = 5;
    sbit  PC1_PORTE_bit at PORTE.B5;

    // Alternative bit function
    const register unsigned short int PB1_PORTE = 6;
    sbit  PB1_PORTE_bit at PORTE.B6;

    // Alternative bit function
    const register unsigned short int PA2_PORTE = 7;
    sbit  PA2_PORTE_bit at PORTE.B7;

    // Alternative bit function
    const register unsigned short int CCP10 = 2;
    sbit  CCP10_bit at PORTE.B2;

    // Alternative bit function
    const register unsigned short int CCP9_PORTE = 3;
    sbit  CCP9_PORTE_bit at PORTE.B3;

    // Alternative bit function
    const register unsigned short int CCP8_PORTE = 4;
    sbit  CCP8_PORTE_bit at PORTE.B4;

    // Alternative bit function
    const register unsigned short int CCP7_PORTE = 5;
    sbit  CCP7_PORTE_bit at PORTE.B5;

    // Alternative bit function
    const register unsigned short int CCP6_PORTE = 6;
    sbit  CCP6_PORTE_bit at PORTE.B6;

    // Alternative bit function
    const register unsigned short int CCP2_PORTE = 7;

    // Alternative bit function
    sbit  CCP2_PORTE_bit at PORTE.B7;

    // Alternative bit function
    sbit  RD_PORTE_bit at PORTE.B0;
    sbit  WR_PORTE_bit at PORTE.B1;

    // Alternative bit function
    const register unsigned short int CS = 2;
    sbit  CS_bit at PORTE.B2;

    // Alternative bit function
    const register unsigned short int COM0 = 3;
    sbit  COM0_bit at PORTE.B3;

    // Alternative bit function
    const register unsigned short int COM1 = 4;
    sbit  COM1_bit at PORTE.B4;

    // Alternative bit function
    const register unsigned short int COM2 = 5;
    sbit  COM2_bit at PORTE.B5;

    // Alternative bit function
    const register unsigned short int COM3 = 6;
    sbit  COM3_bit at PORTE.B6;

    // Alternative bit function
    const register unsigned short int SEG31 = 7;
    sbit  SEG31_bit at PORTE.B7;

    // Alternative bit function
    const register unsigned short int LCDBIAS1 = 0;
    sbit  LCDBIAS1_bit at PORTE.B0;

    // Alternative bit function
    const register unsigned short int LCDBIAS2 = 1;
    sbit  LCDBIAS2_bit at PORTE.B1;

    // Alternative bit function
    const register unsigned short int LCDBIAS3 = 2;
    sbit  LCDBIAS3_bit at PORTE.B2;

    // Alternative bit function
    const register unsigned short int REFO = 4;
    sbit  REFO_bit at PORTE.B4;

    // Alternative bit function
    const register unsigned short int AN6 = 1;
    sbit  AN6_bit at PORTF.B1;

    // Alternative bit function
    const register unsigned short int AN7 = 2;
    sbit  AN7_bit at PORTF.B2;

    // Alternative bit function
    const register unsigned short int AN8 = 3;
    sbit  AN8_bit at PORTF.B3;

    // Alternative bit function
    const register unsigned short int AN9 = 4;
    sbit  AN9_bit at PORTF.B4;

    // Alternative bit function
    const register unsigned short int AN10 = 5;
    sbit  AN10_bit at PORTF.B5;

    // Alternative bit function
    const register unsigned short int AN11 = 6;
    sbit  AN11_bit at PORTF.B6;

    // Alternative bit function
    const register unsigned short int AN5 = 7;
    sbit  AN5_bit at PORTF.B7;

    // Alternative bit function
    const register unsigned short int SEG19 = 1;
    sbit  SEG19_bit at PORTF.B1;

    // Alternative bit function
    const register unsigned short int SEG20 = 2;
    sbit  SEG20_bit at PORTF.B2;

    // Alternative bit function
    const register unsigned short int SEG21 = 3;
    sbit  SEG21_bit at PORTF.B3;

    // Alternative bit function
    const register unsigned short int SEG22 = 4;
    sbit  SEG22_bit at PORTF.B4;

    // Alternative bit function
    const register unsigned short int SEG23 = 5;
    sbit  SEG23_bit at PORTF.B5;

    // Alternative bit function
    const register unsigned short int SEG24 = 6;
    sbit  SEG24_bit at PORTF.B6;

    // Alternative bit function
    const register unsigned short int SEG25 = 7;
    sbit  SEG25_bit at PORTF.B7;

    // Alternative bit function
    const register unsigned short int C2OUT_PORTF = 1;
    sbit  C2OUT_PORTF_bit at PORTF.B1;

    // Alternative bit function
    const register unsigned short int C1OUT_PORTF = 2;
    sbit  C1OUT_PORTF_bit at PORTF.B2;

    // Alternative bit function
    const register unsigned short int C2INB = 3;
    sbit  C2INB_bit at PORTF.B3;

    // Alternative bit function
    const register unsigned short int C2INA = 4;
    sbit  C2INA_bit at PORTF.B4;

    // Alternative bit function
    const register unsigned short int C1INB = 5;
    sbit  C1INB_bit at PORTF.B5;

    // Alternative bit function
    const register unsigned short int C1INA = 6;
    sbit  C1INA_bit at PORTF.B6;

    // Alternative bit function
    const register unsigned short int SS1 = 7;
    sbit  SS1_bit at PORTF.B7;

    // Alternative bit function
    const register unsigned short int CTDIN = 1;
    sbit  CTDIN_bit at PORTF.B1;

    // Alternative bit function
    const register unsigned short int CTMUI = 3;
    sbit  CTMUI_bit at PORTF.B3;

    // Alternative bit function
    const register unsigned short int CVREF = 5;
    sbit  CVREF_bit at PORTF.B5;

    // Alternative bit function
    const register unsigned short int CCP3 = 0;
    sbit  CCP3_bit at PORTG.B0;

    // Alternative bit function
    const register unsigned short int C3OUT_PORTG = 1;
    sbit  C3OUT_PORTG_bit at PORTG.B1;

    // Alternative bit function
    const register unsigned short int C3INA = 2;
    sbit  C3INA_bit at PORTG.B2;

    // Alternative bit function
    const register unsigned short int C3INB = 3;
    sbit  C3INB_bit at PORTG.B3;

    // Alternative bit function
    const register unsigned short int C3INC = 4;
    sbit  C3INC_bit at PORTG.B4;

    // Alternative bit function
    const register unsigned short int PA3 = 0;
    sbit  PA3_bit at PORTG.B0;

    // Alternative bit function
    const register unsigned short int TX2 = 1;
    sbit  TX2_bit at PORTG.B1;

    // Alternative bit function
    const register unsigned short int RX2 = 2;
    sbit  RX2_bit at PORTG.B2;

    // Alternative bit function
    const register unsigned short int PD3 = 3;
    sbit  PD3_bit at PORTG.B3;

    // Alternative bit function
    const register unsigned short int PD1 = 4;
    sbit  PD1_bit at PORTG.B4;

    // Alternative bit function
    const register unsigned short int AN19 = 1;
    sbit  AN19_bit at PORTG.B1;

    // Alternative bit function
    const register unsigned short int AN18 = 2;
    sbit  AN18_bit at PORTG.B2;

    // Alternative bit function
    const register unsigned short int AN17 = 3;
    sbit  AN17_bit at PORTG.B3;

    // Alternative bit function
    const register unsigned short int AN16 = 4;
    sbit  AN16_bit at PORTG.B4;

    // Alternative bit function
    const register unsigned short int CK2 = 1;
    sbit  CK2_bit at PORTG.B1;

    // Alternative bit function
    const register unsigned short int DT2 = 2;
    sbit  DT2_bit at PORTG.B2;

    // Alternative bit function
    const register unsigned short int CCP4 = 3;
    sbit  CCP4_bit at PORTG.B3;

    // Alternative bit function
    const register unsigned short int CCP5 = 4;
    sbit  CCP5_bit at PORTG.B4;

    // Alternative bit function
    const register unsigned short int SEG26 = 4;
    sbit  SEG26_bit at PORTG.B4;

    // Alternative bit function
    const register unsigned short int T7CKI = 4;
    sbit  T7CKI_bit at PORTG.B4;

    // Alternative bit function
    const register unsigned short int T5G = 4;
    sbit  T5G_bit at PORTG.B4;

    // Alternative bit function
    const register unsigned short int RTCC = 4;
    sbit  RTCC_bit at PORTG.B4;

    // Alternative bit function
    const register unsigned short int SEG47 = 0;
    sbit  SEG47_bit at PORTH.B0;

    // Alternative bit function
    const register unsigned short int SEG46 = 1;
    sbit  SEG46_bit at PORTH.B1;

    // Alternative bit function
    const register unsigned short int SEG45 = 2;
    sbit  SEG45_bit at PORTH.B2;

    // Alternative bit function
    const register unsigned short int SEG44 = 3;
    sbit  SEG44_bit at PORTH.B3;

    // Alternative bit function
    const register unsigned short int SEG40 = 4;
    sbit  SEG40_bit at PORTH.B4;

    // Alternative bit function
    const register unsigned short int SEG41 = 5;
    sbit  SEG41_bit at PORTH.B5;

    // Alternative bit function
    const register unsigned short int SEG42 = 6;
    sbit  SEG42_bit at PORTH.B6;

    // Alternative bit function
    const register unsigned short int SEG43 = 7;
    sbit  SEG43_bit at PORTH.B7;

    // Alternative bit function
    const register unsigned short int AN23 = 0;
    sbit  AN23_bit at PORTH.B0;

    // Alternative bit function
    const register unsigned short int AN22 = 1;
    sbit  AN22_bit at PORTH.B1;

    // Alternative bit function
    const register unsigned short int AN21 = 2;
    sbit  AN21_bit at PORTH.B2;

    // Alternative bit function
    const register unsigned short int AN20 = 3;
    sbit  AN20_bit at PORTH.B3;

    // Alternative bit function
    const register unsigned short int AN12 = 4;
    sbit  AN12_bit at PORTH.B4;

    // Alternative bit function
    const register unsigned short int AN13 = 5;
    sbit  AN13_bit at PORTH.B5;

    // Alternative bit function
    const register unsigned short int AN14 = 6;
    sbit  AN14_bit at PORTH.B6;

    // Alternative bit function
    const register unsigned short int AN15 = 7;
    sbit  AN15_bit at PORTH.B7;

    // Alternative bit function
    const register unsigned short int A16 = 0;
    sbit  A16_bit at PORTH.B0;

    // Alternative bit function
    const register unsigned short int A17 = 1;
    sbit  A17_bit at PORTH.B1;

    // Alternative bit function
    const register unsigned short int A18 = 2;
    sbit  A18_bit at PORTH.B2;

    // Alternative bit function
    const register unsigned short int A19 = 3;
    sbit  A19_bit at PORTH.B3;

    // Alternative bit function
    const register unsigned short int CCP9_PORTH = 4;
    sbit  CCP9_PORTH_bit at PORTH.B4;

    // Alternative bit function
    const register unsigned short int CCP8_PORTH = 5;
    sbit  CCP8_PORTH_bit at PORTH.B5;

    // Alternative bit function
    const register unsigned short int CCP7_PORTH = 6;
    sbit  CCP7_PORTH_bit at PORTH.B6;

    // Alternative bit function
    const register unsigned short int CCP6_PORTH = 7;
    sbit  CCP6_PORTH_bit at PORTH.B7;

    // Alternative bit function
    const register unsigned short int PC3_PORTH = 4;
    sbit  PC3_PORTH_bit at PORTH.B4;

    // Alternative bit function
    const register unsigned short int PB3_PORTH = 5;
    sbit  PB3_PORTH_bit at PORTH.B5;

    // Alternative bit function
    const register unsigned short int PC1_PORTH = 6;
    sbit  PC1_PORTH_bit at PORTH.B6;

    // Alternative bit function
    const register unsigned short int PB1_PORTH = 7;
    sbit  PB1_PORTH_bit at PORTH.B7;

    // Alternative bit function
    const register unsigned short int C2INC = 4;
    sbit  C2INC_bit at PORTH.B4;

    // Alternative bit function
    const register unsigned short int C2IND = 5;
    sbit  C2IND_bit at PORTH.B5;

    // Alternative bit function
    const register unsigned short int C1INC = 6;
    sbit  C1INC_bit at PORTH.B6;

    // Alternative bit function
    const register unsigned short int ALE = 0;
    sbit  ALE_bit at PORTJ.B0;

    // Alternative bit function
    const register unsigned short int OE = 1;
    sbit  OE_bit at PORTJ.B1;

    // Alternative bit function
    const register unsigned short int WRL = 2;
    sbit  WRL_bit at PORTJ.B2;

    // Alternative bit function
    const register unsigned short int WRH = 3;
    sbit  WRH_bit at PORTJ.B3;

    // Alternative bit function
    const register unsigned short int BA0 = 4;
    sbit  BA0_bit at PORTJ.B4;

    // Alternative bit function
    const register unsigned short int CE = 5;
    sbit  CE_bit at PORTJ.B5;

    // Alternative bit function
    const register unsigned short int LB = 6;
    sbit  LB_bit at PORTJ.B6;

    // Alternative bit function
    const register unsigned short int UB = 7;
    sbit  UB_bit at PORTJ.B7;

    // Alternative bit function
    const register unsigned short int SEG33 = 1;
    sbit  SEG33_bit at PORTJ.B1;

    // Alternative bit function
    const register unsigned short int SEG34 = 2;
    sbit  SEG34_bit at PORTJ.B2;

    // Alternative bit function
    const register unsigned short int SEG35 = 3;
    sbit  SEG35_bit at PORTJ.B3;

    // Alternative bit function
    const register unsigned short int SEG39 = 4;
    sbit  SEG39_bit at PORTJ.B4;

    // Alternative bit function
    const register unsigned short int SEG38 = 5;
    sbit  SEG38_bit at PORTJ.B5;

    // Alternative bit function
    const register unsigned short int SEG37 = 6;
    sbit  SEG37_bit at PORTJ.B6;

    // Alternative bit function
    const register unsigned short int SEG36 = 7;
    sbit  SEG36_bit at PORTJ.B7;

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

    // LATF bits
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

    // LATH bits
    const register unsigned short int LATH0 = 0;
    sbit  LATH0_bit at LATH.B0;
    const register unsigned short int LATH1 = 1;
    sbit  LATH1_bit at LATH.B1;
    const register unsigned short int LATH2 = 2;
    sbit  LATH2_bit at LATH.B2;
    const register unsigned short int LATH3 = 3;
    sbit  LATH3_bit at LATH.B3;
    const register unsigned short int LATH4 = 4;
    sbit  LATH4_bit at LATH.B4;
    const register unsigned short int LATH5 = 5;
    sbit  LATH5_bit at LATH.B5;
    const register unsigned short int LATH6 = 6;
    sbit  LATH6_bit at LATH.B6;
    const register unsigned short int LATH7 = 7;
    sbit  LATH7_bit at LATH.B7;

    // LATJ bits
    const register unsigned short int LATJ0 = 0;
    sbit  LATJ0_bit at LATJ.B0;
    const register unsigned short int LATJ1 = 1;
    sbit  LATJ1_bit at LATJ.B1;
    const register unsigned short int LATJ2 = 2;
    sbit  LATJ2_bit at LATJ.B2;
    const register unsigned short int LATJ3 = 3;
    sbit  LATJ3_bit at LATJ.B3;
    const register unsigned short int LATJ4 = 4;
    sbit  LATJ4_bit at LATJ.B4;
    const register unsigned short int LATJ5 = 5;
    sbit  LATJ5_bit at LATJ.B5;
    const register unsigned short int LATJ6 = 6;
    sbit  LATJ6_bit at LATJ.B6;
    const register unsigned short int LATJ7 = 7;
    sbit  LATJ7_bit at LATJ.B7;

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

    // PSTR1CON bits
    sbit  STRA_PSTR1CON_bit at PSTR1CON.B0;
    sbit  STRB_PSTR1CON_bit at PSTR1CON.B1;
    sbit  STRC_PSTR1CON_bit at PSTR1CON.B2;
    sbit  STRD_PSTR1CON_bit at PSTR1CON.B3;
    sbit  STRSYNC_PSTR1CON_bit at PSTR1CON.B4;
    sbit  CMPL0_PSTR1CON_bit at PSTR1CON.B6;
    sbit  CMPL1_PSTR1CON_bit at PSTR1CON.B7;

    // PIE1 bits
    const register unsigned short int TMR1IE = 0;
    sbit  TMR1IE_bit at PIE1.B0;
    const register unsigned short int TMR2IE = 1;
    sbit  TMR2IE_bit at PIE1.B1;
    const register unsigned short int TMR1GIE = 2;
    sbit  TMR1GIE_bit at PIE1.B2;
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
    const register unsigned short int TMR1GIF = 2;
    sbit  TMR1GIF_bit at PIR1.B2;
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
    const register unsigned short int TMR1GIP = 2;
    sbit  TMR1GIP_bit at IPR1.B2;
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
    const register unsigned short int TMR3GIE = 0;
    sbit  TMR3GIE_bit at PIE2.B0;
    const register unsigned short int TMR3IE = 1;
    sbit  TMR3IE_bit at PIE2.B1;
    const register unsigned short int HLVDIE = 2;
    sbit  HLVDIE_bit at PIE2.B2;
    const register unsigned short int BCL1IE = 3;
    sbit  BCL1IE_bit at PIE2.B3;
    const register unsigned short int BCL2IE = 4;
    sbit  BCL2IE_bit at PIE2.B4;
    const register unsigned short int SSP2IE = 5;
    sbit  SSP2IE_bit at PIE2.B5;
    const register unsigned short int OSCFIE = 7;
    sbit  OSCFIE_bit at PIE2.B7;
    const register unsigned short int LVDIE = 2;
    sbit  LVDIE_bit at PIE2.B2;
    const register unsigned short int BCLIE = 3;
    sbit  BCLIE_bit at PIE2.B3;

    // PIR2 bits
    const register unsigned short int TMR3GIF = 0;
    sbit  TMR3GIF_bit at PIR2.B0;
    const register unsigned short int TMR3IF = 1;
    sbit  TMR3IF_bit at PIR2.B1;
    const register unsigned short int HLVDIF = 2;
    sbit  HLVDIF_bit at PIR2.B2;
    const register unsigned short int BCL1IF = 3;
    sbit  BCL1IF_bit at PIR2.B3;
    const register unsigned short int BCL2IF = 4;
    sbit  BCL2IF_bit at PIR2.B4;
    const register unsigned short int SSP2IF = 5;
    sbit  SSP2IF_bit at PIR2.B5;
    const register unsigned short int OSCFIF = 7;
    sbit  OSCFIF_bit at PIR2.B7;
    const register unsigned short int LVDIF = 2;
    sbit  LVDIF_bit at PIR2.B2;
    const register unsigned short int BCLIF = 3;
    sbit  BCLIF_bit at PIR2.B3;

    // IPR2 bits
    const register unsigned short int TMR3GIP = 0;
    sbit  TMR3GIP_bit at IPR2.B0;
    const register unsigned short int TMR3IP = 1;
    sbit  TMR3IP_bit at IPR2.B1;
    const register unsigned short int HLVDIP = 2;
    sbit  HLVDIP_bit at IPR2.B2;
    const register unsigned short int BCL1IP = 3;
    sbit  BCL1IP_bit at IPR2.B3;
    const register unsigned short int BCL2IP = 4;
    sbit  BCL2IP_bit at IPR2.B4;
    const register unsigned short int SSP2IP = 5;
    sbit  SSP2IP_bit at IPR2.B5;
    const register unsigned short int OSCFIP = 7;
    sbit  OSCFIP_bit at IPR2.B7;
    const register unsigned short int LVDIP = 2;
    sbit  LVDIP_bit at IPR2.B2;
    const register unsigned short int BCLIP = 3;
    sbit  BCLIP_bit at IPR2.B3;

    // PIE3 bits
    const register unsigned short int RTCCIE = 0;
    sbit  RTCCIE_bit at PIE3.B0;
    const register unsigned short int CCP1IE = 1;
    sbit  CCP1IE_bit at PIE3.B1;
    const register unsigned short int CCP2IE = 2;
    sbit  CCP2IE_bit at PIE3.B2;
    const register unsigned short int CTMUIE = 3;
    sbit  CTMUIE_bit at PIE3.B3;
    const register unsigned short int TX2IE = 4;
    sbit  TX2IE_bit at PIE3.B4;
    const register unsigned short int RC2IE = 5;
    sbit  RC2IE_bit at PIE3.B5;
    const register unsigned short int LCDIE = 6;
    sbit  LCDIE_bit at PIE3.B6;
    const register unsigned short int TMR5GIE = 7;
    sbit  TMR5GIE_bit at PIE3.B7;

    // PIR3 bits
    const register unsigned short int RTCCIF = 0;
    sbit  RTCCIF_bit at PIR3.B0;
    const register unsigned short int CCP1IF = 1;
    sbit  CCP1IF_bit at PIR3.B1;
    const register unsigned short int CCP2IF = 2;
    sbit  CCP2IF_bit at PIR3.B2;
    const register unsigned short int CTMUIF = 3;
    sbit  CTMUIF_bit at PIR3.B3;
    const register unsigned short int TX2IF = 4;
    sbit  TX2IF_bit at PIR3.B4;
    const register unsigned short int RC2IF = 5;
    sbit  RC2IF_bit at PIR3.B5;
    const register unsigned short int LCDIF = 6;
    sbit  LCDIF_bit at PIR3.B6;
    const register unsigned short int TMR5GIF = 7;
    sbit  TMR5GIF_bit at PIR3.B7;

    // IPR3 bits
    const register unsigned short int RTCCIP = 0;
    sbit  RTCCIP_bit at IPR3.B0;
    const register unsigned short int CCP1IP = 1;
    sbit  CCP1IP_bit at IPR3.B1;
    const register unsigned short int CCP2IP = 2;
    sbit  CCP2IP_bit at IPR3.B2;
    const register unsigned short int CTMUIP = 3;
    sbit  CTMUIP_bit at IPR3.B3;
    const register unsigned short int TX2IP = 4;
    sbit  TX2IP_bit at IPR3.B4;
    const register unsigned short int RC2IP = 5;
    sbit  RC2IP_bit at IPR3.B5;
    const register unsigned short int LCDIP = 6;
    sbit  LCDIP_bit at IPR3.B6;
    const register unsigned short int TMR5GIP = 7;
    sbit  TMR5GIP_bit at IPR3.B7;

    // PIR6 bits
    const register unsigned short int CMP1IF = 0;
    sbit  CMP1IF_bit at PIR6.B0;
    const register unsigned short int CMP2IF = 1;
    sbit  CMP2IF_bit at PIR6.B1;
    const register unsigned short int CMP3IF = 2;
    sbit  CMP3IF_bit at PIR6.B2;
    const register unsigned short int EEIF = 4;
    sbit  EEIF_bit at PIR6.B4;

    // HLVDCON bits
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

    // IPR6 bits
    const register unsigned short int CMP1IP = 0;
    sbit  CMP1IP_bit at IPR6.B0;
    const register unsigned short int CMP2IP = 1;
    sbit  CMP2IP_bit at IPR6.B1;
    const register unsigned short int CMP3IP = 2;
    sbit  CMP3IP_bit at IPR6.B2;
    const register unsigned short int EEIP = 4;
    sbit  EEIP_bit at IPR6.B4;

    // T1GCON bits
    const register unsigned short int T1GVAL = 2;
    sbit  T1GVAL_bit at T1GCON.B2;
    const register unsigned short int T1GGO_NOT_T1DONE = 3;
    sbit  T1GGO_NOT_T1DONE_bit at T1GCON.B3;
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
    const register unsigned short int T1GGO = 3;
    sbit  T1GGO_bit at T1GCON.B3;
    const register unsigned short int NOT_T1DONE = 3;
    sbit  NOT_T1DONE_bit at T1GCON.B3;

    // RCSTA, RCSTA1 bits
    sbit  RX9D_RCSTA_bit at RCSTA.B0;
    sbit  OERR_RCSTA_bit at RCSTA.B1;
    sbit  FERR_RCSTA_bit at RCSTA.B2;
    sbit  ADDEN_RCSTA_bit at RCSTA.B3;
    sbit  CREN_RCSTA_bit at RCSTA.B4;
    sbit  SREN_RCSTA_bit at RCSTA.B5;
    sbit  RX9_RCSTA_bit at RCSTA.B6;
    sbit  SPEN_RCSTA_bit at RCSTA.B7;
    const register unsigned short int RCD8 = 0;
    sbit  RCD8_bit at RCSTA.B0;
    const register unsigned short int ADEN = 3;
    sbit  ADEN_bit at RCSTA.B3;
    const register unsigned short int RC9 = 6;
    sbit  RC9_bit at RCSTA.B6;
    const register unsigned short int NOT_RC8 = 6;
    sbit  NOT_RC8_bit at RCSTA.B6;
    const register unsigned short int RC8_9 = 6;
    sbit  RC8_9_bit at RCSTA.B6;
    const register unsigned short int RX9D1 = 0;
    sbit  RX9D1_bit at RCSTA.B0;
    const register unsigned short int OERR1 = 1;
    sbit  OERR1_bit at RCSTA.B1;
    const register unsigned short int FERR1 = 2;
    sbit  FERR1_bit at RCSTA.B2;
    const register unsigned short int ADDEN1 = 3;
    sbit  ADDEN1_bit at RCSTA.B3;
    const register unsigned short int CREN1 = 4;
    sbit  CREN1_bit at RCSTA.B4;
    const register unsigned short int SREN1 = 5;
    sbit  SREN1_bit at RCSTA.B5;
    const register unsigned short int RX91 = 6;
    sbit  RX91_bit at RCSTA.B6;
    const register unsigned short int SPEN1 = 7;
    sbit  SPEN1_bit at RCSTA.B7;

    // TXSTA, TXSTA1 bits
    sbit  TX9D_TXSTA_bit at TXSTA.B0;
    sbit  TRMT_TXSTA_bit at TXSTA.B1;
    sbit  BRGH_TXSTA_bit at TXSTA.B2;
    sbit  SENDB_TXSTA_bit at TXSTA.B3;
    sbit  SYNC_TXSTA_bit at TXSTA.B4;
    sbit  TXEN_TXSTA_bit at TXSTA.B5;
    sbit  TX9_TXSTA_bit at TXSTA.B6;
    sbit  CSRC_TXSTA_bit at TXSTA.B7;
    const register unsigned short int TXD8 = 0;
    sbit  TXD8_bit at TXSTA.B0;
    const register unsigned short int TX8_9 = 6;
    sbit  TX8_9_bit at TXSTA.B6;
    const register unsigned short int NOT_TX8 = 6;
    sbit  NOT_TX8_bit at TXSTA.B6;
    const register unsigned short int TX9D1 = 0;
    sbit  TX9D1_bit at TXSTA.B0;
    const register unsigned short int TRMT1 = 1;
    sbit  TRMT1_bit at TXSTA.B1;
    const register unsigned short int BRGH1 = 2;
    sbit  BRGH1_bit at TXSTA.B2;
    const register unsigned short int SENDB1 = 3;
    sbit  SENDB1_bit at TXSTA.B3;
    const register unsigned short int SYNC1 = 4;
    sbit  SYNC1_bit at TXSTA.B4;
    const register unsigned short int TXEN1 = 5;
    sbit  TXEN1_bit at TXSTA.B5;
    const register unsigned short int TX91 = 6;
    sbit  TX91_bit at TXSTA.B6;
    const register unsigned short int CSRC1 = 7;
    sbit  CSRC1_bit at TXSTA.B7;

    // T3GCON bits
    const register unsigned short int T3GVAL = 2;
    sbit  T3GVAL_bit at T3GCON.B2;
    const register unsigned short int T3GGO_NOT_T3DONE = 3;
    sbit  T3GGO_NOT_T3DONE_bit at T3GCON.B3;
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
    const register unsigned short int T3GGO = 3;
    sbit  T3GGO_bit at T3GCON.B3;
    const register unsigned short int NOT_T3DONE = 3;
    sbit  NOT_T3DONE_bit at T3GCON.B3;

    // T3CON bits
    const register unsigned short int TMR3ON = 0;
    sbit  TMR3ON_bit at T3CON.B0;
    sbit  RD16_T3CON_bit at T3CON.B1;
    const register unsigned short int NOT_T3SYNC = 2;
    sbit  NOT_T3SYNC_bit at T3CON.B2;
    sbit  SOSCEN_T3CON_bit at T3CON.B3;
    const register unsigned short int T3CKPS0 = 4;
    sbit  T3CKPS0_bit at T3CON.B4;
    const register unsigned short int T3CKPS1 = 5;
    sbit  T3CKPS1_bit at T3CON.B5;
    const register unsigned short int TMR3CS0 = 6;
    sbit  TMR3CS0_bit at T3CON.B6;
    const register unsigned short int TMR3CS1 = 7;
    sbit  TMR3CS1_bit at T3CON.B7;

    // CMSTAT, CMSTATUS bits
    const register unsigned short int CMP1OUT = 5;
    sbit  CMP1OUT_bit at CMSTAT.B5;
    const register unsigned short int CMP2OUT = 6;
    sbit  CMP2OUT_bit at CMSTAT.B6;
    const register unsigned short int CMP3OUT = 7;
    sbit  CMP3OUT_bit at CMSTAT.B7;
    const register unsigned short int C1OUT_CMSTAT = 5;
    sbit  C1OUT_CMSTAT_bit at CMSTAT.B5;
    const register unsigned short int C2OUT_CMSTAT = 6;
    sbit  C2OUT_CMSTAT_bit at CMSTAT.B6;
    const register unsigned short int C3OUT_CMSTAT = 7;
    sbit  C3OUT_CMSTAT_bit at CMSTAT.B7;

    // CVRCON bits
    const register unsigned short int CVRSS = 5;
    sbit  CVRSS_bit at CVRCON.B5;
    const register unsigned short int CVROE = 6;
    sbit  CVROE_bit at CVRCON.B6;
    const register unsigned short int CVREN = 7;
    sbit  CVREN_bit at CVRCON.B7;
    const register unsigned short int CVR0 = 0;
    sbit  CVR0_bit at CVRCON.B0;
    const register unsigned short int CVR1 = 1;
    sbit  CVR1_bit at CVRCON.B1;
    const register unsigned short int CVR2 = 2;
    sbit  CVR2_bit at CVRCON.B2;
    const register unsigned short int CVR3 = 3;
    sbit  CVR3_bit at CVRCON.B3;
    const register unsigned short int CVR4 = 4;
    sbit  CVR4_bit at CVRCON.B4;

    // PIE4 bits
    const register unsigned short int CCP3IE = 0;
    sbit  CCP3IE_bit at PIE4.B0;
    const register unsigned short int CCP4IE = 1;
    sbit  CCP4IE_bit at PIE4.B1;
    const register unsigned short int CCP5IE = 2;
    sbit  CCP5IE_bit at PIE4.B2;
    const register unsigned short int CCP6IE = 3;
    sbit  CCP6IE_bit at PIE4.B3;
    const register unsigned short int CCP7IE = 4;
    sbit  CCP7IE_bit at PIE4.B4;
    const register unsigned short int CCP8IE = 5;
    sbit  CCP8IE_bit at PIE4.B5;
    const register unsigned short int CCP9IE = 6;
    sbit  CCP9IE_bit at PIE4.B6;
    const register unsigned short int CCP10IE = 7;
    sbit  CCP10IE_bit at PIE4.B7;

    // PIR4 bits
    const register unsigned short int CCP3IF = 0;
    sbit  CCP3IF_bit at PIR4.B0;
    const register unsigned short int CCP4IF = 1;
    sbit  CCP4IF_bit at PIR4.B1;
    const register unsigned short int CCP5IF = 2;
    sbit  CCP5IF_bit at PIR4.B2;
    const register unsigned short int CCP6IF = 3;
    sbit  CCP6IF_bit at PIR4.B3;
    const register unsigned short int CCP7IF = 4;
    sbit  CCP7IF_bit at PIR4.B4;
    const register unsigned short int CCP8IF = 5;
    sbit  CCP8IF_bit at PIR4.B5;
    const register unsigned short int CCP9IF = 6;
    sbit  CCP9IF_bit at PIR4.B6;
    const register unsigned short int CCP10IF = 7;
    sbit  CCP10IF_bit at PIR4.B7;

    // IPR4 bits
    const register unsigned short int CCP3IP = 0;
    sbit  CCP3IP_bit at IPR4.B0;
    const register unsigned short int CCP4IP = 1;
    sbit  CCP4IP_bit at IPR4.B1;
    const register unsigned short int CCP5IP = 2;
    sbit  CCP5IP_bit at IPR4.B2;
    const register unsigned short int CCP6IP = 3;
    sbit  CCP6IP_bit at IPR4.B3;
    const register unsigned short int CCP7IP = 4;
    sbit  CCP7IP_bit at IPR4.B4;
    const register unsigned short int CCP8IP = 5;
    sbit  CCP8IP_bit at IPR4.B5;
    const register unsigned short int CCP9IP = 6;
    sbit  CCP9IP_bit at IPR4.B6;
    const register unsigned short int CCP10IP = 7;
    sbit  CCP10IP_bit at IPR4.B7;

    // PIE5 bits
    const register unsigned short int TMR4IE = 0;
    sbit  TMR4IE_bit at PIE5.B0;
    const register unsigned short int TMR5IE = 1;
    sbit  TMR5IE_bit at PIE5.B1;
    const register unsigned short int TMR6IE = 2;
    sbit  TMR6IE_bit at PIE5.B2;
    const register unsigned short int TMR7IE = 3;
    sbit  TMR7IE_bit at PIE5.B3;
    const register unsigned short int TMR8IE = 4;
    sbit  TMR8IE_bit at PIE5.B4;
    const register unsigned short int TMR10IE = 5;
    sbit  TMR10IE_bit at PIE5.B5;
    const register unsigned short int TMR12IE = 6;
    sbit  TMR12IE_bit at PIE5.B6;
    const register unsigned short int TMR7GIE = 7;
    sbit  TMR7GIE_bit at PIE5.B7;

    // PIR5 bits
    const register unsigned short int TMR4IF = 0;
    sbit  TMR4IF_bit at PIR5.B0;
    const register unsigned short int TMR5IF = 1;
    sbit  TMR5IF_bit at PIR5.B1;
    const register unsigned short int TMR6IF = 2;
    sbit  TMR6IF_bit at PIR5.B2;
    const register unsigned short int TMR7IF = 3;
    sbit  TMR7IF_bit at PIR5.B3;
    const register unsigned short int TMR8IF = 4;
    sbit  TMR8IF_bit at PIR5.B4;
    const register unsigned short int TMR10IF = 5;
    sbit  TMR10IF_bit at PIR5.B5;
    const register unsigned short int TMR12IF = 6;
    sbit  TMR12IF_bit at PIR5.B6;
    const register unsigned short int TMR7GIF = 7;
    sbit  TMR7GIF_bit at PIR5.B7;

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
    const register unsigned short int P1M0 = 6;
    sbit  P1M0_bit at CCP1CON.B6;
    const register unsigned short int P1M1 = 7;
    sbit  P1M1_bit at CCP1CON.B7;
    const register unsigned short int CCP1Y = 4;
    sbit  CCP1Y_bit at CCP1CON.B4;
    const register unsigned short int CCP1X = 5;
    sbit  CCP1X_bit at CCP1CON.B5;

    // ECCP1DEL, PWM1CON bits
    const register unsigned short int P1RSEN = 7;
    sbit  P1RSEN_bit at ECCP1DEL.B7;
    const register unsigned short int P1DC0 = 0;
    sbit  P1DC0_bit at ECCP1DEL.B0;
    const register unsigned short int P1DC1 = 1;
    sbit  P1DC1_bit at ECCP1DEL.B1;
    const register unsigned short int P1DC2 = 2;
    sbit  P1DC2_bit at ECCP1DEL.B2;
    const register unsigned short int P1DC3 = 3;
    sbit  P1DC3_bit at ECCP1DEL.B3;
    const register unsigned short int P1DC4 = 4;
    sbit  P1DC4_bit at ECCP1DEL.B4;
    const register unsigned short int P1DC5 = 5;
    sbit  P1DC5_bit at ECCP1DEL.B5;
    const register unsigned short int P1DC6 = 6;
    sbit  P1DC6_bit at ECCP1DEL.B6;

    // ECCP1AS bits
    const register unsigned short int ECCP1ASE = 7;
    sbit  ECCP1ASE_bit at ECCP1AS.B7;
    const register unsigned short int PSS1BD0 = 0;
    sbit  PSS1BD0_bit at ECCP1AS.B0;
    const register unsigned short int PSS1BD1 = 1;
    sbit  PSS1BD1_bit at ECCP1AS.B1;
    const register unsigned short int PSS1AC0 = 2;
    sbit  PSS1AC0_bit at ECCP1AS.B2;
    const register unsigned short int PSS1AC1 = 3;
    sbit  PSS1AC1_bit at ECCP1AS.B3;
    const register unsigned short int ECCP1AS0 = 4;
    sbit  ECCP1AS0_bit at ECCP1AS.B4;
    const register unsigned short int ECCP1AS1 = 5;
    sbit  ECCP1AS1_bit at ECCP1AS.B5;
    const register unsigned short int ECCP1AS2 = 6;
    sbit  ECCP1AS2_bit at ECCP1AS.B6;

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
    const register unsigned short int VNCFG = 3;
    sbit  VNCFG_bit at ADCON1.B3;
    const register unsigned short int CHSN0 = 0;
    sbit  CHSN0_bit at ADCON1.B0;
    const register unsigned short int CHSN1 = 1;
    sbit  CHSN1_bit at ADCON1.B1;
    const register unsigned short int CHSN2 = 2;
    sbit  CHSN2_bit at ADCON1.B2;
    const register unsigned short int VCFG0 = 4;
    sbit  VCFG0_bit at ADCON1.B4;
    const register unsigned short int VCFG1 = 5;
    sbit  VCFG1_bit at ADCON1.B5;
    const register unsigned short int TRIGSEL0 = 6;
    sbit  TRIGSEL0_bit at ADCON1.B6;
    const register unsigned short int TRIGSEL1 = 7;
    sbit  TRIGSEL1_bit at ADCON1.B7;

    // ADCON0 bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON0.B0;
    const register unsigned short int GO_NOT_DONE = 1;
    sbit  GO_NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int DONE = 1;
    sbit  DONE_bit at ADCON0.B1;
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
    const register unsigned short int NOT_DONE = 1;
    sbit  NOT_DONE_bit at ADCON0.B1;

    // SSP1CON2, SSPCON2 bits
    sbit  SEN_SSP1CON2_bit at SSP1CON2.B0;
    sbit  RSEN_SSP1CON2_bit at SSP1CON2.B1;
    sbit  PEN_SSP1CON2_bit at SSP1CON2.B2;
    sbit  RCEN_SSP1CON2_bit at SSP1CON2.B3;
    sbit  ACKEN_SSP1CON2_bit at SSP1CON2.B4;
    sbit  ACKDT_SSP1CON2_bit at SSP1CON2.B5;
    sbit  ACKSTAT_SSP1CON2_bit at SSP1CON2.B6;
    sbit  GCEN_SSP1CON2_bit at SSP1CON2.B7;
    sbit  ADMSK1_SSP1CON2_bit at SSP1CON2.B1;
    sbit  ADMSK2_SSP1CON2_bit at SSP1CON2.B2;
    sbit  ADMSK3_SSP1CON2_bit at SSP1CON2.B3;
    sbit  ADMSK4_SSP1CON2_bit at SSP1CON2.B4;
    sbit  ADMSK5_SSP1CON2_bit at SSP1CON2.B5;

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
    sbit  R_W_SSP1STAT_bit at SSP1STAT.B2;
    sbit  D_A_SSP1STAT_bit at SSP1STAT.B5;
    sbit  NOT_W_SSP1STAT_bit at SSP1STAT.B2;
    sbit  NOT_A_SSP1STAT_bit at SSP1STAT.B5;
    sbit  NOT_WRITE_SSP1STAT_bit at SSP1STAT.B2;
    sbit  NOT_ADDRESS_SSP1STAT_bit at SSP1STAT.B5;
    sbit  READ_WRITE_SSP1STAT_bit at SSP1STAT.B2;
    sbit  DATA_ADDRESS_SSP1STAT_bit at SSP1STAT.B5;
    sbit  I2C_DAT_SSP1STAT_bit at SSP1STAT.B5;

    // SSP1ADD, SSPADD bits
    sbit  MSK0_SSP1ADD_bit at SSP1ADD.B0;
    sbit  MSK1_SSP1ADD_bit at SSP1ADD.B1;
    sbit  MSK2_SSP1ADD_bit at SSP1ADD.B2;
    sbit  MSK3_SSP1ADD_bit at SSP1ADD.B3;
    sbit  MSK4_SSP1ADD_bit at SSP1ADD.B4;
    sbit  MSK5_SSP1ADD_bit at SSP1ADD.B5;
    sbit  MSK6_SSP1ADD_bit at SSP1ADD.B6;
    sbit  MSK7_SSP1ADD_bit at SSP1ADD.B7;

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

    // T1CON bits
    const register unsigned short int TMR1ON = 0;
    sbit  TMR1ON_bit at T1CON.B0;
    sbit  RD16_T1CON_bit at T1CON.B1;
    const register unsigned short int NOT_T1SYNC = 2;
    sbit  NOT_T1SYNC_bit at T1CON.B2;
    sbit  SOSCEN_T1CON_bit at T1CON.B3;
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
    const register unsigned short int NOT_CM = 5;
    sbit  NOT_CM_bit at RCON.B5;
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
    const register unsigned short int CM = 5;
    sbit  CM_bit at RCON.B5;

    // WDTCON bits
    const register unsigned short int SWDTEN = 0;
    sbit  SWDTEN_bit at WDTCON.B0;
    const register unsigned short int ULPSINK = 1;
    sbit  ULPSINK_bit at WDTCON.B1;
    const register unsigned short int ULPEN = 2;
    sbit  ULPEN_bit at WDTCON.B2;
    const register unsigned short int SRETEN = 4;
    sbit  SRETEN_bit at WDTCON.B4;
    const register unsigned short int ULPLVL = 5;
    sbit  ULPLVL_bit at WDTCON.B5;
    const register unsigned short int REGSLP = 7;
    sbit  REGSLP_bit at WDTCON.B7;
    const register unsigned short int SWDTE = 0;
    sbit  SWDTE_bit at WDTCON.B0;

    // IPR5 bits
    const register unsigned short int TMR4IP = 0;
    sbit  TMR4IP_bit at IPR5.B0;
    const register unsigned short int TMR5IP = 1;
    sbit  TMR5IP_bit at IPR5.B1;
    const register unsigned short int TMR6IP = 2;
    sbit  TMR6IP_bit at IPR5.B2;
    const register unsigned short int TMR7IP = 3;
    sbit  TMR7IP_bit at IPR5.B3;
    const register unsigned short int TMR8IP = 4;
    sbit  TMR8IP_bit at IPR5.B4;
    const register unsigned short int TMR10IP = 5;
    sbit  TMR10IP_bit at IPR5.B5;
    const register unsigned short int TMR12IP = 6;
    sbit  TMR12IP_bit at IPR5.B6;
    const register unsigned short int TMR7GIP = 7;
    sbit  TMR7GIP_bit at IPR5.B7;

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
    const register unsigned short int INT3IF = 2;
    sbit  INT3IF_bit at INTCON3.B2;
    const register unsigned short int INT1IE = 3;
    sbit  INT1IE_bit at INTCON3.B3;
    const register unsigned short int INT2IE = 4;
    sbit  INT2IE_bit at INTCON3.B4;
    const register unsigned short int INT3IE = 5;
    sbit  INT3IE_bit at INTCON3.B5;
    const register unsigned short int INT1IP = 6;
    sbit  INT1IP_bit at INTCON3.B6;
    const register unsigned short int INT2IP = 7;
    sbit  INT2IP_bit at INTCON3.B7;
    const register unsigned short int INT1F = 0;
    sbit  INT1F_bit at INTCON3.B0;
    const register unsigned short int INT2F = 1;
    sbit  INT2F_bit at INTCON3.B1;
    const register unsigned short int INT3F = 2;
    sbit  INT3F_bit at INTCON3.B2;
    const register unsigned short int INT1E = 3;
    sbit  INT1E_bit at INTCON3.B3;
    const register unsigned short int INT2E = 4;
    sbit  INT2E_bit at INTCON3.B4;
    const register unsigned short int INT3E = 5;
    sbit  INT3E_bit at INTCON3.B5;
    const register unsigned short int INT1P = 6;
    sbit  INT1P_bit at INTCON3.B6;
    const register unsigned short int INT2P = 7;
    sbit  INT2P_bit at INTCON3.B7;

    // INTCON2 bits
    const register unsigned short int RBIP = 0;
    sbit  RBIP_bit at INTCON2.B0;
    const register unsigned short int INT3IP = 1;
    sbit  INT3IP_bit at INTCON2.B1;
    const register unsigned short int TMR0IP = 2;
    sbit  TMR0IP_bit at INTCON2.B2;
    const register unsigned short int INTEDG3 = 3;
    sbit  INTEDG3_bit at INTCON2.B3;
    const register unsigned short int INTEDG2 = 4;
    sbit  INTEDG2_bit at INTCON2.B4;
    const register unsigned short int INTEDG1 = 5;
    sbit  INTEDG1_bit at INTCON2.B5;
    const register unsigned short int INTEDG0 = 6;
    sbit  INTEDG0_bit at INTCON2.B6;
    const register unsigned short int NOT_RBPU = 7;
    sbit  NOT_RBPU_bit at INTCON2.B7;
    const register unsigned short int INT3P = 1;
    sbit  INT3P_bit at INTCON2.B1;
    const register unsigned short int T0IP = 2;
    sbit  T0IP_bit at INTCON2.B2;
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
    const register unsigned short int STKOVF = 7;
    sbit  STKOVF_bit at STKPTR.B7;

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

    // PORTH bits
    const register unsigned short int RH7 = 7;
    sbit  RH7_bit at PORTH.B7;
    const register unsigned short int RH6 = 6;
    sbit  RH6_bit at PORTH.B6;
    const register unsigned short int RH5 = 5;
    sbit  RH5_bit at PORTH.B5;
    const register unsigned short int RH4 = 4;
    sbit  RH4_bit at PORTH.B4;
    const register unsigned short int RH3 = 3;
    sbit  RH3_bit at PORTH.B3;
    const register unsigned short int RH2 = 2;
    sbit  RH2_bit at PORTH.B2;
    const register unsigned short int RH1 = 1;
    sbit  RH1_bit at PORTH.B1;
    const register unsigned short int RH0 = 0;
    sbit  RH0_bit at PORTH.B0;

    // PORTJ bits
    const register unsigned short int RJ7 = 7;
    sbit  RJ7_bit at PORTJ.B7;
    const register unsigned short int RJ6 = 6;
    sbit  RJ6_bit at PORTJ.B6;
    const register unsigned short int RJ5 = 5;
    sbit  RJ5_bit at PORTJ.B5;
    const register unsigned short int RJ4 = 4;
    sbit  RJ4_bit at PORTJ.B4;
    const register unsigned short int RJ3 = 3;
    sbit  RJ3_bit at PORTJ.B3;
    const register unsigned short int RJ2 = 2;
    sbit  RJ2_bit at PORTJ.B2;
    const register unsigned short int RJ1 = 1;
    sbit  RJ1_bit at PORTJ.B1;
    const register unsigned short int RJ0 = 0;
    sbit  RJ0_bit at PORTJ.B0;

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

    // TRISH bits
    const register unsigned short int TRISH7 = 7;
    sbit  TRISH7_bit at TRISH.B7;
    const register unsigned short int TRISH6 = 6;
    sbit  TRISH6_bit at TRISH.B6;
    const register unsigned short int TRISH5 = 5;
    sbit  TRISH5_bit at TRISH.B5;
    const register unsigned short int TRISH4 = 4;
    sbit  TRISH4_bit at TRISH.B4;
    const register unsigned short int TRISH3 = 3;
    sbit  TRISH3_bit at TRISH.B3;
    const register unsigned short int TRISH2 = 2;
    sbit  TRISH2_bit at TRISH.B2;
    const register unsigned short int TRISH1 = 1;
    sbit  TRISH1_bit at TRISH.B1;
    const register unsigned short int TRISH0 = 0;
    sbit  TRISH0_bit at TRISH.B0;

    // TRISJ bits
    const register unsigned short int TRISJ7 = 7;
    sbit  TRISJ7_bit at TRISJ.B7;
    const register unsigned short int TRISJ6 = 6;
    sbit  TRISJ6_bit at TRISJ.B6;
    const register unsigned short int TRISJ5 = 5;
    sbit  TRISJ5_bit at TRISJ.B5;
    const register unsigned short int TRISJ4 = 4;
    sbit  TRISJ4_bit at TRISJ.B4;
    const register unsigned short int TRISJ3 = 3;
    sbit  TRISJ3_bit at TRISJ.B3;
    const register unsigned short int TRISJ2 = 2;
    sbit  TRISJ2_bit at TRISJ.B2;
    const register unsigned short int TRISJ1 = 1;
    sbit  TRISJ1_bit at TRISJ.B1;
    const register unsigned short int TRISJ0 = 0;
    sbit  TRISJ0_bit at TRISJ.B0;

    // TBLPTRU bits
    const register unsigned short int ACSS = 5;
    sbit  ACSS_bit at TBLPTRU.B5;
    const register unsigned short int TBLPTRU4 = 4;
    sbit  TBLPTRU4_bit at TBLPTRU.B4;
    const register unsigned short int TBLPTRU3 = 3;
    sbit  TBLPTRU3_bit at TBLPTRU.B3;
    const register unsigned short int TBLPTRU2 = 2;
    sbit  TBLPTRU2_bit at TBLPTRU.B2;
    const register unsigned short int TBLPTRU1 = 1;
    sbit  TBLPTRU1_bit at TBLPTRU.B1;
    const register unsigned short int TBLPTRU0 = 0;
    sbit  TBLPTRU0_bit at TBLPTRU.B0;

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
