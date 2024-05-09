// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x0001FFF8;

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

sfr unsigned short volatile ADCTRIG          absolute 0x0EB8;
sfr unsigned short volatile PD0              absolute 0x0EB9;
sfr unsigned short volatile PMDIS0           absolute 0x0EB9;
sfr unsigned short volatile PD1              absolute 0x0EBA;
sfr unsigned short volatile PMDIS1           absolute 0x0EBA;
sfr unsigned short volatile PD2              absolute 0x0EBB;
sfr unsigned short volatile PMDIS2           absolute 0x0EBB;
sfr unsigned short volatile PD3              absolute 0x0EBC;
sfr unsigned short volatile PMDIS3           absolute 0x0EBC;
sfr unsigned short volatile PPSCON           absolute 0x0EBF;
sfr unsigned short volatile RPOR0            absolute 0x0EC0;
sfr unsigned short volatile RPOR1            absolute 0x0EC1;
sfr unsigned short volatile RPOR2            absolute 0x0EC2;
sfr unsigned short volatile RPOR3            absolute 0x0EC3;
sfr unsigned short volatile RPOR4            absolute 0x0EC4;
sfr unsigned short volatile RPOR5            absolute 0x0EC5;
sfr unsigned short volatile RPOR6            absolute 0x0EC6;
sfr unsigned short volatile RPOR7            absolute 0x0EC7;
sfr unsigned short volatile RPOR8            absolute 0x0EC8;
sfr unsigned short volatile RPOR9            absolute 0x0EC9;
sfr unsigned short volatile RPOR10           absolute 0x0ECA;
sfr unsigned short volatile RPOR11           absolute 0x0ECB;
sfr unsigned short volatile RPOR12           absolute 0x0ECC;
sfr unsigned short volatile RPOR13           absolute 0x0ECD;
sfr unsigned short volatile RPOR17           absolute 0x0ED1;
sfr unsigned short volatile RPOR18           absolute 0x0ED2;
sfr unsigned short volatile RPINR1           absolute 0x0EE1;
sfr unsigned short volatile RPINR2           absolute 0x0EE2;
sfr unsigned short volatile RPINR3           absolute 0x0EE3;
sfr unsigned short volatile RPINR4           absolute 0x0EE4;
sfr unsigned short volatile RPINR6           absolute 0x0EE6;
sfr unsigned short volatile RPINR15          absolute 0x0EE7;
sfr unsigned short volatile RPINR7           absolute 0x0EE8;
sfr unsigned short volatile RPINR8           absolute 0x0EE9;
sfr unsigned short volatile RPINR9           absolute 0x0EEA;
sfr unsigned short volatile RPINR12          absolute 0x0EF2;
sfr unsigned short volatile RPINR13          absolute 0x0EF3;
sfr unsigned short volatile RPINR14          absolute 0x0EF4;
sfr unsigned short volatile RPINR16          absolute 0x0EF7;
sfr unsigned short volatile RPINR17          absolute 0x0EF8;
sfr unsigned short volatile RPINR21          absolute 0x0EFC;
sfr unsigned short volatile RPINR22          absolute 0x0EFD;
sfr unsigned short volatile RPINR23          absolute 0x0EFE;
sfr unsigned short volatile RPINR24          absolute 0x0EFF;
sfr unsigned short volatile CCP10CON         absolute 0x0F00;
sfr unsigned short volatile CCPR10L          absolute 0x0F01;
sfr unsigned short volatile CCPR10H          absolute 0x0F02;
sfr unsigned short volatile CCP9CON          absolute 0x0F03;
sfr unsigned short volatile CCP8CON          absolute 0x0F06;
sfr unsigned short volatile CCP7CON          absolute 0x0F09;
sfr unsigned short volatile CCP6CON          absolute 0x0F0C;
sfr unsigned short volatile CCP5CON          absolute 0x0F0F;
sfr unsigned short volatile CCP4CON          absolute 0x0F12;
sfr unsigned short volatile CCP3CON          absolute 0x0F15;
sfr unsigned short volatile ECCP3DEL         absolute 0x0F18;
sfr unsigned short volatile ECCP3AS          absolute 0x0F19;
sfr unsigned short volatile PSTR3CON         absolute 0x0F1A;
sfr unsigned short volatile T8CON            absolute 0x0F1B;
sfr unsigned short volatile PR8              absolute 0x0F1C;
sfr unsigned short volatile TMR8             absolute 0x0F1D;
sfr unsigned short volatile T6CON            absolute 0x0F1E;
sfr unsigned short volatile PR6              absolute 0x0F1F;
sfr unsigned short volatile TMR6             absolute 0x0F20;
sfr unsigned short volatile T5GCON           absolute 0x0F21;
sfr unsigned short volatile T5CON            absolute 0x0F22;
sfr unsigned short volatile TMR5L            absolute 0x0F23;
sfr unsigned short volatile TMR5H            absolute 0x0F24;
sfr unsigned short volatile CM3CON           absolute 0x0F25;
sfr unsigned short volatile UEP0             absolute 0x0F26;
sfr unsigned short volatile UEP1             absolute 0x0F27;
sfr unsigned short volatile UEP2             absolute 0x0F28;
sfr unsigned short volatile UEP3             absolute 0x0F29;
sfr unsigned short volatile UEP4             absolute 0x0F2A;
sfr unsigned short volatile UEP5             absolute 0x0F2B;
sfr unsigned short volatile UEP6             absolute 0x0F2C;
sfr unsigned short volatile UEP7             absolute 0x0F2D;
sfr unsigned short volatile UEP8             absolute 0x0F2E;
sfr unsigned short volatile UEP9             absolute 0x0F2F;
sfr unsigned short volatile UEP10            absolute 0x0F30;
sfr unsigned short volatile UEP11            absolute 0x0F31;
sfr unsigned short volatile UEP12            absolute 0x0F32;
sfr unsigned short volatile UEP13            absolute 0x0F33;
sfr unsigned short volatile UEP14            absolute 0x0F34;
sfr unsigned short volatile UEP15            absolute 0x0F35;
sfr unsigned short volatile UIE              absolute 0x0F36;
sfr unsigned short volatile UEIE             absolute 0x0F37;
sfr unsigned short volatile UADDR            absolute 0x0F38;
sfr unsigned short volatile UCFG             absolute 0x0F39;
sfr unsigned short volatile RTCVALL          absolute 0x0F3A;
sfr unsigned short volatile RTCVALH          absolute 0x0F3B;
sfr unsigned short volatile PADCFG1          absolute 0x0F3C;
sfr unsigned short volatile REFOCON          absolute 0x0F3D;
sfr unsigned short volatile RTCCAL           absolute 0x0F3E;
sfr unsigned short volatile RTCCFG           absolute 0x0F3F;
sfr unsigned short volatile ODCON3           absolute 0x0F40;
sfr unsigned short volatile ODCON2           absolute 0x0F41;
sfr unsigned short volatile ODCON1           absolute 0x0F42;
sfr unsigned short volatile ALRMVALL         absolute 0x0F44;
sfr unsigned short volatile ALRMVALH         absolute 0x0F45;
sfr unsigned short volatile ALRMRPT          absolute 0x0F46;
sfr unsigned short volatile ALRMCFG          absolute 0x0F47;
sfr unsigned short          ANCON0           absolute 0x0F48;
sfr unsigned short          ANCON1           absolute 0x0F49;
sfr unsigned short volatile DSWAKEL          absolute 0x0F4A;
sfr unsigned short volatile DSWAKEH          absolute 0x0F4B;
sfr unsigned short volatile DSCONL           absolute 0x0F4C;
sfr unsigned short volatile DSCONH           absolute 0x0F4D;
sfr unsigned short volatile DSGPR0           absolute 0x0F4E;
sfr unsigned short volatile DSGPR1           absolute 0x0F4F;
sfr unsigned short volatile CCPTMRS2         absolute 0x0F50;
sfr unsigned short volatile CCPTMRS1         absolute 0x0F51;
sfr unsigned short volatile CCPTMRS0         absolute 0x0F52;
sfr unsigned short volatile CVRCON           absolute 0x0F53;
sfr unsigned short volatile UFRML            absolute 0x0F60;
sfr unsigned short volatile UFRMH            absolute 0x0F61;
sfr unsigned short volatile UIR              absolute 0x0F62;
sfr unsigned short volatile UEIR             absolute 0x0F63;
sfr unsigned short volatile USTAT            absolute 0x0F64;
sfr unsigned short volatile UCON             absolute 0x0F65;
sfr unsigned short volatile DMABCH           absolute 0x0F66;
sfr unsigned short volatile DMABCL           absolute 0x0F67;
sfr unsigned short volatile RXADDRH          absolute 0x0F68;
sfr unsigned short volatile RXADDRL          absolute 0x0F69;
sfr unsigned short volatile TXADDRH          absolute 0x0F6A;
sfr unsigned short volatile TXADDRL          absolute 0x0F6B;
sfr unsigned short volatile CMSTAT           absolute 0x0F70;
sfr unsigned short volatile CMSTATUS         absolute 0x0F70;
sfr unsigned short volatile SSP2CON2         absolute 0x0F71;
sfr unsigned short volatile SSP2CON1         absolute 0x0F72;
sfr unsigned short volatile SSP2STAT         absolute 0x0F73;
sfr unsigned short volatile SSP2ADD          absolute 0x0F74;
sfr unsigned short volatile SSP2MSK          absolute 0x0F74;
sfr unsigned short volatile SSP2BUF          absolute 0x0F75;
sfr unsigned short volatile T4CON            absolute 0x0F76;
sfr unsigned short volatile PR4              absolute 0x0F77;
sfr unsigned short volatile TMR4             absolute 0x0F78;
sfr unsigned short volatile T3CON            absolute 0x0F79;
sfr unsigned short volatile TMR3L            absolute 0x0F7A;
sfr unsigned short volatile TMR3H            absolute 0x0F7B;
sfr unsigned short          BAUDCON2         absolute 0x0F7C;
sfr unsigned short          SPBRGH2          absolute 0x0F7D;
sfr unsigned short          BAUDCON          absolute 0x0F7E;
sfr unsigned short          BAUDCON1         absolute 0x0F7E;
sfr unsigned short          BAUDCTL          absolute 0x0F7E;
sfr unsigned short          SPBRGH           absolute 0x0F7F;
sfr unsigned short          SPBRGH1          absolute 0x0F7F;
sfr unsigned short volatile HLVDCON          absolute 0x0F85;
sfr unsigned short volatile DMACON2          absolute 0x0F86;
sfr unsigned short volatile OSCCON2          absolute 0x0F87;
sfr unsigned short volatile DMACON1          absolute 0x0F88;
sfr unsigned short volatile LATA             absolute 0x0F89;
sfr unsigned short volatile LATB             absolute 0x0F8A;
sfr unsigned short volatile LATC             absolute 0x0F8B;
sfr unsigned short volatile PIE4             absolute 0x0F8E;
sfr unsigned short volatile PIR4             absolute 0x0F8F;
sfr unsigned short volatile IPR4             absolute 0x0F90;
sfr unsigned short volatile PIE5             absolute 0x0F91;
sfr unsigned short volatile T3GCON           absolute 0x0F97;
sfr unsigned short volatile PIR5             absolute 0x0F98;
sfr unsigned short volatile IPR5             absolute 0x0F99;
sfr unsigned short volatile T1GCON           absolute 0x0F9A;
sfr unsigned short volatile OSCTUNE          absolute 0x0F9B;
sfr unsigned short volatile RCSTA2           absolute 0x0F9C;
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
sfr unsigned short volatile TXSTA2           absolute 0x0FA8;
sfr unsigned short volatile TXREG2           absolute 0x0FA9;
sfr unsigned short volatile RCREG2           absolute 0x0FAA;
sfr unsigned short          SPBRG2           absolute 0x0FAB;
sfr unsigned short volatile RCSTA            absolute 0x0FAC;
sfr unsigned short volatile RCSTA1           absolute 0x0FAC;
sfr unsigned short volatile TXSTA            absolute 0x0FAD;
sfr unsigned short volatile TXSTA1           absolute 0x0FAD;
sfr unsigned short volatile TXREG            absolute 0x0FAE;
sfr unsigned short volatile TXREG1           absolute 0x0FAE;
sfr unsigned short volatile RCREG            absolute 0x0FAF;
sfr unsigned short volatile RCREG1           absolute 0x0FAF;
sfr unsigned short          SPBRG            absolute 0x0FB0;
sfr unsigned short          SPBRG1           absolute 0x0FB0;
sfr unsigned short volatile CTMUICON         absolute 0x0FB1;
sfr unsigned short volatile CTMUCONL         absolute 0x0FB2;
sfr unsigned short volatile CTMUCONH         absolute 0x0FB3;
sfr unsigned short volatile CCP2CON          absolute 0x0FB4;
sfr unsigned short volatile ECCP2CON         absolute 0x0FB4;
sfr unsigned short volatile ECCP2DEL         absolute 0x0FB7;
sfr unsigned short          PWM2CON          absolute 0x0FB7;
sfr unsigned short volatile ECCP2AS          absolute 0x0FB8;
sfr unsigned short volatile PSTR2CON         absolute 0x0FB9;
sfr unsigned short volatile CCP1CON          absolute 0x0FBA;
sfr unsigned short volatile ECCP1CON         absolute 0x0FBA;
sfr unsigned int   volatile CCPR1            absolute 0x0FBB;
sfr unsigned short volatile CCPR1L           absolute 0x0FBB;
sfr unsigned short volatile CCPR1H           absolute 0x0FBC;
sfr unsigned short volatile ECCP1DEL         absolute 0x0FBD;
sfr unsigned short          PWM1CON          absolute 0x0FBD;
sfr unsigned short volatile ECCP1AS          absolute 0x0FBE;
sfr unsigned short volatile PSTR1CON         absolute 0x0FBF;
sfr unsigned short          WDTCON           absolute 0x0FC0;
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
sfr unsigned short volatile SSP1MSK          absolute 0x0FC8;
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
sfr unsigned short volatile CM2CON           absolute 0x0FD1;
sfr unsigned short volatile CM2CON1          absolute 0x0FD1;
sfr unsigned short volatile CM1CON           absolute 0x0FD2;
sfr unsigned short volatile CM1CON1          absolute 0x0FD2;
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
sfr unsigned short volatile CCPR9L           absolute 0x0F04;
sfr unsigned short volatile CCPR9H           absolute 0x0F05;
sfr unsigned short volatile CCPR8L           absolute 0x0F07;
sfr unsigned short volatile CCPR8H           absolute 0x0F08;
sfr unsigned short volatile CCPR7L           absolute 0x0F0A;
sfr unsigned short volatile CCPR7H           absolute 0x0F0B;
sfr unsigned short volatile CCPR6L           absolute 0x0F0D;
sfr unsigned short volatile CCPR6H           absolute 0x0F0E;
sfr unsigned short volatile CCPR5L           absolute 0x0F10;
sfr unsigned short volatile CCPR5H           absolute 0x0F11;
sfr unsigned short volatile CCPR4L           absolute 0x0F13;
sfr unsigned short volatile CCPR4H           absolute 0x0F14;
sfr unsigned short volatile CCPR3L           absolute 0x0F16;
sfr unsigned short volatile CCPR3H           absolute 0x0F17;
sfr unsigned short volatile PORTA            absolute 0x0F80;
sfr unsigned short volatile PORTB            absolute 0x0F81;
sfr unsigned short volatile PORTC            absolute 0x0F82;
sfr unsigned short volatile TRISA            absolute 0x0F92;
sfr unsigned short volatile TRISB            absolute 0x0F93;
sfr unsigned short volatile TRISC            absolute 0x0F94;
sfr unsigned int   volatile CCPR2            absolute 0x0FB5;
sfr unsigned short volatile CCPR2L           absolute 0x0FB5;
sfr unsigned short volatile CCPR2H           absolute 0x0FB6;
sfr unsigned int   volatile ADRES            absolute 0x0FC3;
sfr unsigned int            PROD             absolute 0x0FF3;
sfr unsigned short          PRODL            absolute 0x0FF3;
sfr unsigned short          PRODH            absolute 0x0FF4;
sfr unsigned short volatile TOSL             absolute 0x0FFD;
sfr unsigned short volatile TOSH             absolute 0x0FFE;
sfr unsigned short volatile TOSU             absolute 0x0FFF;

    // ADCTRIG bits
    const register unsigned short int SRC0 = 0;
    sbit  SRC0_bit at ADCTRIG.B0;
    const register unsigned short int SRC1 = 1;
    sbit  SRC1_bit at ADCTRIG.B1;
    const register unsigned short int TRIGSEL0 = 0;
    sbit  TRIGSEL0_bit at ADCTRIG.B0;
    const register unsigned short int TRIGSEL1 = 1;
    sbit  TRIGSEL1_bit at ADCTRIG.B1;

    // PD0, PMDIS0 bits
    const register unsigned short int ADCMD = 0;
    sbit  ADCMD_bit at PD0.B0;
    const register unsigned short int SPI1MD = 1;
    sbit  SPI1MD_bit at PD0.B1;
    const register unsigned short int SPI2MD = 2;
    sbit  SPI2MD_bit at PD0.B2;
    const register unsigned short int UART1MD = 3;
    sbit  UART1MD_bit at PD0.B3;
    const register unsigned short int UART2MD = 4;
    sbit  UART2MD_bit at PD0.B4;
    const register unsigned short int ECCP1MD = 5;
    sbit  ECCP1MD_bit at PD0.B5;
    const register unsigned short int ECCP2MD = 6;
    sbit  ECCP2MD_bit at PD0.B6;
    const register unsigned short int ECCP3MD = 7;
    sbit  ECCP3MD_bit at PD0.B7;
    const register unsigned short int PMDMSSP1 = 1;
    sbit  PMDMSSP1_bit at PD0.B1;
    const register unsigned short int PMDMSSP2 = 2;
    sbit  PMDMSSP2_bit at PD0.B2;
    const register unsigned short int PMDUART1 = 3;
    sbit  PMDUART1_bit at PD0.B3;
    const register unsigned short int PMDUART2 = 4;
    sbit  PMDUART2_bit at PD0.B4;
    const register unsigned short int PMDECCP1 = 5;
    sbit  PMDECCP1_bit at PD0.B5;
    const register unsigned short int PMDECCP2 = 6;
    sbit  PMDECCP2_bit at PD0.B6;
    const register unsigned short int PMDECCP3 = 7;
    sbit  PMDECCP3_bit at PD0.B7;
    const register unsigned short int PMDADC = 0;
    sbit  PMDADC_bit at PD0.B0;

    // PD1, PMDIS1 bits
    const register unsigned short int TMR1MD = 1;
    sbit  TMR1MD_bit at PD1.B1;
    const register unsigned short int TMR2MD = 2;
    sbit  TMR2MD_bit at PD1.B2;
    const register unsigned short int TMR3MD = 3;
    sbit  TMR3MD_bit at PD1.B3;
    const register unsigned short int TMR4MD = 4;
    sbit  TMR4MD_bit at PD1.B4;
    const register unsigned short int RTCCMD = 5;
    sbit  RTCCMD_bit at PD1.B5;
    const register unsigned short int CTMUMD = 6;
    sbit  CTMUMD_bit at PD1.B6;
    const register unsigned short int PMDTMR1 = 1;
    sbit  PMDTMR1_bit at PD1.B1;
    const register unsigned short int PMDTMR2 = 2;
    sbit  PMDTMR2_bit at PD1.B2;
    const register unsigned short int PMDTMR3 = 3;
    sbit  PMDTMR3_bit at PD1.B3;
    const register unsigned short int PMDTMR4 = 4;
    sbit  PMDTMR4_bit at PD1.B4;
    const register unsigned short int PMDRTCC = 5;
    sbit  PMDRTCC_bit at PD1.B5;
    const register unsigned short int PMDCTMU = 6;
    sbit  PMDCTMU_bit at PD1.B6;

    // PD2, PMDIS2 bits
    const register unsigned short int CMP1MD = 0;
    sbit  CMP1MD_bit at PD2.B0;
    const register unsigned short int CMP2MD = 1;
    sbit  CMP2MD_bit at PD2.B1;
    const register unsigned short int CMP3MD = 2;
    sbit  CMP3MD_bit at PD2.B2;
    const register unsigned short int TMR5MD = 3;
    sbit  TMR5MD_bit at PD2.B3;
    const register unsigned short int TMR6MD = 4;
    sbit  TMR6MD_bit at PD2.B4;
    const register unsigned short int TMR8MD = 6;
    sbit  TMR8MD_bit at PD2.B6;
    const register unsigned short int PMDCMP1 = 0;
    sbit  PMDCMP1_bit at PD2.B0;
    const register unsigned short int PMDCMP2 = 1;
    sbit  PMDCMP2_bit at PD2.B1;
    const register unsigned short int PMDCMP3 = 2;
    sbit  PMDCMP3_bit at PD2.B2;
    const register unsigned short int PMDTMR5 = 3;
    sbit  PMDTMR5_bit at PD2.B3;
    const register unsigned short int PMDTMR6 = 4;
    sbit  PMDTMR6_bit at PD2.B4;
    const register unsigned short int PMDTMR8 = 6;
    sbit  PMDTMR8_bit at PD2.B6;

    // PD3, PMDIS3 bits
    const register unsigned short int CCP4MD = 1;
    sbit  CCP4MD_bit at PD3.B1;
    const register unsigned short int CCP5MD = 2;
    sbit  CCP5MD_bit at PD3.B2;
    const register unsigned short int CCP6MD = 3;
    sbit  CCP6MD_bit at PD3.B3;
    const register unsigned short int CCP7MD = 4;
    sbit  CCP7MD_bit at PD3.B4;
    const register unsigned short int CCP8MD = 5;
    sbit  CCP8MD_bit at PD3.B5;
    const register unsigned short int CCP9MD = 6;
    sbit  CCP9MD_bit at PD3.B6;
    const register unsigned short int CCP10MD = 7;
    sbit  CCP10MD_bit at PD3.B7;
    const register unsigned short int PMDCCP4 = 1;
    sbit  PMDCCP4_bit at PD3.B1;
    const register unsigned short int PMDCCP5 = 2;
    sbit  PMDCCP5_bit at PD3.B2;
    const register unsigned short int PMDCCP6 = 3;
    sbit  PMDCCP6_bit at PD3.B3;
    const register unsigned short int PMDCCP7 = 4;
    sbit  PMDCCP7_bit at PD3.B4;
    const register unsigned short int PMDCCP8 = 5;
    sbit  PMDCCP8_bit at PD3.B5;
    const register unsigned short int PMDCCP9 = 6;
    sbit  PMDCCP9_bit at PD3.B6;
    const register unsigned short int PMDCCP10 = 7;
    sbit  PMDCCP10_bit at PD3.B7;

    // PPSCON bits
    const register unsigned short int IOLOCK = 0;
    sbit  IOLOCK_bit at PPSCON.B0;

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

    // ECCP3DEL bits
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
    const register unsigned short int T5DONE = 3;
    sbit  T5DONE_bit at T5GCON.B3;

    // T5CON bits
    const register unsigned short int TMR5ON = 0;
    sbit  TMR5ON_bit at T5CON.B0;
    const register unsigned short int RD16 = 1;
    sbit  RD16_bit at T5CON.B1;
    const register unsigned short int NOT_T5SYNC = 2;
    sbit  NOT_T5SYNC_bit at T5CON.B2;
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

    // CM3CON bits
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

    // UEP8 bits
    sbit  EPSTALL_UEP8_bit at UEP8.B0;
    sbit  EPINEN_UEP8_bit at UEP8.B1;
    sbit  EPOUTEN_UEP8_bit at UEP8.B2;
    sbit  EPCONDIS_UEP8_bit at UEP8.B3;
    sbit  EPHSHK_UEP8_bit at UEP8.B4;

    // UEP9 bits
    sbit  EPSTALL_UEP9_bit at UEP9.B0;
    sbit  EPINEN_UEP9_bit at UEP9.B1;
    sbit  EPOUTEN_UEP9_bit at UEP9.B2;
    sbit  EPCONDIS_UEP9_bit at UEP9.B3;
    sbit  EPHSHK_UEP9_bit at UEP9.B4;

    // UEP10 bits
    sbit  EPSTALL_UEP10_bit at UEP10.B0;
    sbit  EPINEN_UEP10_bit at UEP10.B1;
    sbit  EPOUTEN_UEP10_bit at UEP10.B2;
    sbit  EPCONDIS_UEP10_bit at UEP10.B3;
    sbit  EPHSHK_UEP10_bit at UEP10.B4;

    // UEP11 bits
    sbit  EPSTALL_UEP11_bit at UEP11.B0;
    sbit  EPINEN_UEP11_bit at UEP11.B1;
    sbit  EPOUTEN_UEP11_bit at UEP11.B2;
    sbit  EPCONDIS_UEP11_bit at UEP11.B3;
    sbit  EPHSHK_UEP11_bit at UEP11.B4;

    // UEP12 bits
    sbit  EPSTALL_UEP12_bit at UEP12.B0;
    sbit  EPINEN_UEP12_bit at UEP12.B1;
    sbit  EPOUTEN_UEP12_bit at UEP12.B2;
    sbit  EPCONDIS_UEP12_bit at UEP12.B3;
    sbit  EPHSHK_UEP12_bit at UEP12.B4;

    // UEP13 bits
    sbit  EPSTALL_UEP13_bit at UEP13.B0;
    sbit  EPINEN_UEP13_bit at UEP13.B1;
    sbit  EPOUTEN_UEP13_bit at UEP13.B2;
    sbit  EPCONDIS_UEP13_bit at UEP13.B3;
    sbit  EPHSHK_UEP13_bit at UEP13.B4;

    // UEP14 bits
    sbit  EPSTALL_UEP14_bit at UEP14.B0;
    sbit  EPINEN_UEP14_bit at UEP14.B1;
    sbit  EPOUTEN_UEP14_bit at UEP14.B2;
    sbit  EPCONDIS_UEP14_bit at UEP14.B3;
    sbit  EPHSHK_UEP14_bit at UEP14.B4;

    // UEP15 bits
    sbit  EPSTALL_UEP15_bit at UEP15.B0;
    sbit  EPINEN_UEP15_bit at UEP15.B1;
    sbit  EPOUTEN_UEP15_bit at UEP15.B2;
    sbit  EPCONDIS_UEP15_bit at UEP15.B3;
    sbit  EPHSHK_UEP15_bit at UEP15.B4;

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

    // UCFG bits
    const register unsigned short int PPB0 = 0;
    sbit  PPB0_bit at UCFG.B0;
    const register unsigned short int PPB1 = 1;
    sbit  PPB1_bit at UCFG.B1;
    const register unsigned short int FSEN = 2;
    sbit  FSEN_bit at UCFG.B2;
    const register unsigned short int UTRDIS = 3;
    sbit  UTRDIS_bit at UCFG.B3;
    const register unsigned short int UPUEN = 4;
    sbit  UPUEN_bit at UCFG.B4;
    const register unsigned short int UOEMON = 6;
    sbit  UOEMON_bit at UCFG.B6;
    const register unsigned short int UTEYE = 7;
    sbit  UTEYE_bit at UCFG.B7;

    // PADCFG1 bits
    const register unsigned short int RTSECSEL0 = 1;
    sbit  RTSECSEL0_bit at PADCFG1.B1;
    const register unsigned short int RTSECSEL1 = 2;
    sbit  RTSECSEL1_bit at PADCFG1.B2;

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
    const register unsigned short int RTCPTR0 = 0;
    sbit  RTCPTR0_bit at RTCCFG.B0;
    const register unsigned short int RTCPTR1 = 1;
    sbit  RTCPTR1_bit at RTCCFG.B1;
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

    // ODCON3 bits
    const register unsigned short int SPI1OD = 0;
    sbit  SPI1OD_bit at ODCON3.B0;
    const register unsigned short int SPI2OD = 1;
    sbit  SPI2OD_bit at ODCON3.B1;

    // ODCON2 bits
    const register unsigned short int U1OD = 0;
    sbit  U1OD_bit at ODCON2.B0;
    const register unsigned short int U2OD = 1;
    sbit  U2OD_bit at ODCON2.B1;
    const register unsigned short int CCP9OD = 2;
    sbit  CCP9OD_bit at ODCON2.B2;
    const register unsigned short int CCP10OD = 3;
    sbit  CCP10OD_bit at ODCON2.B3;

    // ODCON1 bits
    const register unsigned short int ECCP1OD = 0;
    sbit  ECCP1OD_bit at ODCON1.B0;
    const register unsigned short int ECCP2OD = 1;
    sbit  ECCP2OD_bit at ODCON1.B1;
    const register unsigned short int ECCP3OD = 2;
    sbit  ECCP3OD_bit at ODCON1.B2;
    const register unsigned short int CCP4OD = 3;
    sbit  CCP4OD_bit at ODCON1.B3;
    const register unsigned short int CCP5OD = 4;
    sbit  CCP5OD_bit at ODCON1.B4;
    const register unsigned short int CCP6OD = 5;
    sbit  CCP6OD_bit at ODCON1.B5;
    const register unsigned short int CCP7OD = 6;
    sbit  CCP7OD_bit at ODCON1.B6;
    const register unsigned short int CCP8OD = 7;
    sbit  CCP8OD_bit at ODCON1.B7;

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

    // ANCON0 bits
    const register unsigned short int PCFG0 = 0;
    sbit  PCFG0_bit at ANCON0.B0;
    const register unsigned short int PCFG1 = 1;
    sbit  PCFG1_bit at ANCON0.B1;
    const register unsigned short int PCFG2 = 2;
    sbit  PCFG2_bit at ANCON0.B2;
    const register unsigned short int PCFG3 = 3;
    sbit  PCFG3_bit at ANCON0.B3;
    const register unsigned short int PCFG4 = 4;
    sbit  PCFG4_bit at ANCON0.B4;

    // ANCON1 bits
    const register unsigned short int PCFG8 = 0;
    sbit  PCFG8_bit at ANCON1.B0;
    const register unsigned short int PCFG9 = 1;
    sbit  PCFG9_bit at ANCON1.B1;
    const register unsigned short int PCFG10 = 2;
    sbit  PCFG10_bit at ANCON1.B2;
    const register unsigned short int PCFG11 = 3;
    sbit  PCFG11_bit at ANCON1.B3;
    const register unsigned short int PCFG12 = 4;
    sbit  PCFG12_bit at ANCON1.B4;
    const register unsigned short int VBGEN = 7;
    sbit  VBGEN_bit at ANCON1.B7;

    // DSWAKEL bits
    const register unsigned short int DSPOR = 0;
    sbit  DSPOR_bit at DSWAKEL.B0;
    const register unsigned short int DSMCLR = 2;
    sbit  DSMCLR_bit at DSWAKEL.B2;
    const register unsigned short int DSRTC = 3;
    sbit  DSRTC_bit at DSWAKEL.B3;
    const register unsigned short int DSWDT = 4;
    sbit  DSWDT_bit at DSWAKEL.B4;
    const register unsigned short int DSULP = 5;
    sbit  DSULP_bit at DSWAKEL.B5;
    const register unsigned short int DSFLT = 7;
    sbit  DSFLT_bit at DSWAKEL.B7;

    // DSWAKEH bits
    const register unsigned short int DSINT0 = 0;
    sbit  DSINT0_bit at DSWAKEH.B0;

    // DSCONL bits
    const register unsigned short int RELEASE = 0;
    sbit  RELEASE_bit at DSCONL.B0;
    const register unsigned short int DSBOR = 1;
    sbit  DSBOR_bit at DSCONL.B1;
    const register unsigned short int ULPWDIS = 2;
    sbit  ULPWDIS_bit at DSCONL.B2;

    // DSCONH bits
    const register unsigned short int RTCWDIS = 0;
    sbit  RTCWDIS_bit at DSCONH.B0;
    const register unsigned short int DSULPEN = 1;
    sbit  DSULPEN_bit at DSCONH.B1;
    const register unsigned short int DSEN = 7;
    sbit  DSEN_bit at DSCONH.B7;

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

    // CVRCON bits
    const register unsigned short int CVRSS = 4;
    sbit  CVRSS_bit at CVRCON.B4;
    const register unsigned short int CVRR = 5;
    sbit  CVRR_bit at CVRCON.B5;
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

    // UFRMH bits
    const register unsigned short int FRM8 = 0;
    sbit  FRM8_bit at UFRMH.B0;
    const register unsigned short int FRM9 = 1;
    sbit  FRM9_bit at UFRMH.B1;
    const register unsigned short int FRM10 = 2;
    sbit  FRM10_bit at UFRMH.B2;

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

    // CMSTAT, CMSTATUS bits
    const register unsigned short int COUT1 = 0;
    sbit  COUT1_bit at CMSTAT.B0;
    const register unsigned short int COUT2 = 1;
    sbit  COUT2_bit at CMSTAT.B1;
    const register unsigned short int COUT3 = 2;
    sbit  COUT3_bit at CMSTAT.B2;

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

    // T3CON bits
    const register unsigned short int TMR3ON = 0;
    sbit  TMR3ON_bit at T3CON.B0;
    sbit  RD16_T3CON_bit at T3CON.B1;
    const register unsigned short int NOT_T3SYNC = 2;
    sbit  NOT_T3SYNC_bit at T3CON.B2;
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

    // BAUDCON, BAUDCON1, BAUDCTL bits
    sbit  ABDEN_BAUDCON_bit at BAUDCON.B0;
    sbit  WUE_BAUDCON_bit at BAUDCON.B1;
    sbit  BRG16_BAUDCON_bit at BAUDCON.B3;
    sbit  TXCKP_BAUDCON_bit at BAUDCON.B4;
    sbit  RXDTP_BAUDCON_bit at BAUDCON.B5;
    sbit  RCIDL_BAUDCON_bit at BAUDCON.B6;
    sbit  ABDOVF_BAUDCON_bit at BAUDCON.B7;

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
    const register unsigned short int C1INA = 0;
    sbit  C1INA_bit at PORTA.B0;

    // Alternative bit function
    const register unsigned short int C2INA = 1;
    sbit  C2INA_bit at PORTA.B1;

    // Alternative bit function
    const register unsigned short int VREF_MINUS = 2;
    sbit  VREF_MINUS_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int VREF_PLUS = 3;
    sbit  VREF_PLUS_bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int NOT_SS1 = 5;
    sbit  NOT_SS1_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int CLKO = 6;
    sbit  CLKO_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int CLKI = 7;
    sbit  CLKI_bit at PORTA.B7;

    // Alternative bit function
    const register unsigned short int CVREF = 2;
    sbit  CVREF_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int C1INB = 3;
    sbit  C1INB_bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int HLVDIN = 5;
    sbit  HLVDIN_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int RP0 = 0;
    sbit  RP0_bit at PORTA.B0;

    // Alternative bit function
    const register unsigned short int RP1 = 1;
    sbit  RP1_bit at PORTA.B1;

    // Alternative bit function
    const register unsigned short int C2INB = 2;
    sbit  C2INB_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int RCV = 5;
    sbit  RCV_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int ULPWU = 0;
    sbit  ULPWU_bit at PORTA.B0;

    // Alternative bit function
    const register unsigned short int VBG = 1;
    sbit  VBG_bit at PORTA.B1;

    // Alternative bit function
    const register unsigned short int C1IND = 2;
    sbit  C1IND_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int RP2 = 5;
    sbit  RP2_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int C3INB = 2;
    sbit  C3INB_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int C1INC = 5;
    sbit  C1INC_bit at PORTA.B5;

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
    const register unsigned short int KBI2 = 6;
    sbit  KBI2_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int KBI3 = 7;
    sbit  KBI3_bit at PORTB.B7;

    // Alternative bit function
    const register unsigned short int INT0 = 0;
    sbit  INT0_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int CTED1 = 2;
    sbit  CTED1_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int CTED2 = 3;
    sbit  CTED2_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int KBI0 = 4;
    sbit  KBI0_bit at PORTB.B4;

    // Alternative bit function
    const register unsigned short int KBI1 = 5;
    sbit  KBI1_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int PGC = 6;
    sbit  PGC_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int PGD = 7;
    sbit  PGD_bit at PORTB.B7;

    // Alternative bit function
    const register unsigned short int RP3 = 0;
    sbit  RP3_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int RTCC = 1;
    sbit  RTCC_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int SCK1 = 4;
    sbit  SCK1_bit at PORTB.B4;

    // Alternative bit function
    const register unsigned short int SDI1 = 5;
    sbit  SDI1_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int RP9 = 6;
    sbit  RP9_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int RP10 = 7;
    sbit  RP10_bit at PORTB.B7;

    // Alternative bit function
    const register unsigned short int RP4 = 1;
    sbit  RP4_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int VMO = 2;
    sbit  VMO_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int VPO = 3;
    sbit  VPO_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int SCL1 = 4;
    sbit  SCL1_bit at PORTB.B4;

    // Alternative bit function
    const register unsigned short int SDA1 = 5;
    sbit  SDA1_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int REFO = 2;
    sbit  REFO_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int RP6 = 3;
    sbit  RP6_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int RP7 = 4;
    sbit  RP7_bit at PORTB.B4;

    // Alternative bit function
    const register unsigned short int RP8 = 5;
    sbit  RP8_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int C3INC = 1;
    sbit  C3INC_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int RP5 = 2;
    sbit  RP5_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int C3INA = 3;
    sbit  C3INA_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int CCP4 = 4;
    sbit  CCP4_bit at PORTB.B4;

    // Alternative bit function
    const register unsigned short int CCP5 = 5;
    sbit  CCP5_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int CCP6 = 6;
    sbit  CCP6_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int CCP7 = 7;
    sbit  CCP7_bit at PORTB.B7;

    // Alternative bit function
    const register unsigned short int C3IND = 0;
    sbit  C3IND_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int C2INC = 2;
    sbit  C2INC_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int T1OSO = 0;
    sbit  T1OSO_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int T1OSI = 1;
    sbit  T1OSI_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int AN11 = 2;
    sbit  AN11_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int D_MINUS = 4;
    sbit  D_MINUS_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int D_PLUS = 5;
    sbit  D_PLUS_bit at PORTC.B5;

    // Alternative bit function
    const register unsigned short int T1CKI = 0;
    sbit  T1CKI_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int NOT_UOE = 1;
    sbit  NOT_UOE_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int CTPLS = 2;
    sbit  CTPLS_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int VM = 4;
    sbit  VM_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int VP = 5;
    sbit  VP_bit at PORTC.B5;

    // Alternative bit function
    const register unsigned short int TX1 = 6;
    sbit  TX1_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int RX1 = 7;
    sbit  RX1_bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int RP11 = 0;
    sbit  RP11_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int RP12 = 1;
    sbit  RP12_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int RP13 = 2;
    sbit  RP13_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int CK1 = 6;
    sbit  CK1_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int DT1 = 7;
    sbit  DT1_bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int RP17 = 6;
    sbit  RP17_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int SDO1 = 7;
    sbit  SDO1_bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int C2IND = 2;
    sbit  C2IND_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int RP18 = 7;
    sbit  RP18_bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int CCP8 = 1;
    sbit  CCP8_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int CCP9 = 6;
    sbit  CCP9_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int CCP10 = 7;
    sbit  CCP10_bit at PORTC.B7;

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

    // DMACON2 bits
    const register unsigned short int INTLVL0 = 0;
    sbit  INTLVL0_bit at DMACON2.B0;
    const register unsigned short int INTLVL1 = 1;
    sbit  INTLVL1_bit at DMACON2.B1;
    const register unsigned short int INTLVL2 = 2;
    sbit  INTLVL2_bit at DMACON2.B2;
    const register unsigned short int INTLVL3 = 3;
    sbit  INTLVL3_bit at DMACON2.B3;
    const register unsigned short int DLYCYC0 = 4;
    sbit  DLYCYC0_bit at DMACON2.B4;
    const register unsigned short int DLYCYC1 = 5;
    sbit  DLYCYC1_bit at DMACON2.B5;
    const register unsigned short int DLYCYC2 = 6;
    sbit  DLYCYC2_bit at DMACON2.B6;
    const register unsigned short int DLYCYC3 = 7;
    sbit  DLYCYC3_bit at DMACON2.B7;

    // OSCCON2 bits
    const register unsigned short int PRISD = 2;
    sbit  PRISD_bit at OSCCON2.B2;
    const register unsigned short int SOSCGO = 3;
    sbit  SOSCGO_bit at OSCCON2.B3;
    const register unsigned short int SOSCDRV = 4;
    sbit  SOSCDRV_bit at OSCCON2.B4;
    const register unsigned short int SOSCRUN = 6;
    sbit  SOSCRUN_bit at OSCCON2.B6;

    // DMACON1 bits
    const register unsigned short int DMAEN = 0;
    sbit  DMAEN_bit at DMACON1.B0;
    const register unsigned short int DLYINTEN = 1;
    sbit  DLYINTEN_bit at DMACON1.B1;
    const register unsigned short int DUPLEX0 = 2;
    sbit  DUPLEX0_bit at DMACON1.B2;
    const register unsigned short int DUPLEX1 = 3;
    sbit  DUPLEX1_bit at DMACON1.B3;
    const register unsigned short int RXINC = 4;
    sbit  RXINC_bit at DMACON1.B4;
    const register unsigned short int TXINC = 5;
    sbit  TXINC_bit at DMACON1.B5;
    const register unsigned short int SSCON0 = 6;
    sbit  SSCON0_bit at DMACON1.B6;
    const register unsigned short int SSCON1 = 7;
    sbit  SSCON1_bit at DMACON1.B7;

    // LATA bits
    const register unsigned short int LATA0 = 0;
    sbit  LATA0_bit at LATA.B0;
    const register unsigned short int LATA1 = 1;
    sbit  LATA1_bit at LATA.B1;
    const register unsigned short int LATA2 = 2;
    sbit  LATA2_bit at LATA.B2;
    const register unsigned short int LATA3 = 3;
    sbit  LATA3_bit at LATA.B3;
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
    const register unsigned short int LATC6 = 6;
    sbit  LATC6_bit at LATC.B6;
    const register unsigned short int LATC7 = 7;
    sbit  LATC7_bit at LATC.B7;

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
    const register unsigned short int TMR1GIE = 0;
    sbit  TMR1GIE_bit at PIE5.B0;
    const register unsigned short int TMR5GIE = 1;
    sbit  TMR5GIE_bit at PIE5.B1;
    const register unsigned short int TMR5IE = 2;
    sbit  TMR5IE_bit at PIE5.B2;
    const register unsigned short int TMR6IE = 3;
    sbit  TMR6IE_bit at PIE5.B3;
    const register unsigned short int TMR8IE = 4;
    sbit  TMR8IE_bit at PIE5.B4;
    const register unsigned short int CM3IE = 5;
    sbit  CM3IE_bit at PIE5.B5;

    // T3GCON bits
    const register unsigned short int T3GSS0 = 0;
    sbit  T3GSS0_bit at T3GCON.B0;
    const register unsigned short int T3GSS1 = 1;
    sbit  T3GSS1_bit at T3GCON.B1;
    const register unsigned short int T3GVAL = 2;
    sbit  T3GVAL_bit at T3GCON.B2;
    const register unsigned short int T3GGO_T3DONE = 3;
    sbit  T3GGO_T3DONE_bit at T3GCON.B3;
    const register unsigned short int T3GSPM = 4;
    sbit  T3GSPM_bit at T3GCON.B4;
    const register unsigned short int T3GTM = 5;
    sbit  T3GTM_bit at T3GCON.B5;
    const register unsigned short int T3GPOL = 6;
    sbit  T3GPOL_bit at T3GCON.B6;
    const register unsigned short int TMR3GE = 7;
    sbit  TMR3GE_bit at T3GCON.B7;
    const register unsigned short int T3GGO = 3;
    sbit  T3GGO_bit at T3GCON.B3;
    const register unsigned short int NOT_T3DONE = 3;
    sbit  NOT_T3DONE_bit at T3GCON.B3;

    // PIR5 bits
    const register unsigned short int TMR1GIF = 0;
    sbit  TMR1GIF_bit at PIR5.B0;
    const register unsigned short int TMR5GIF = 1;
    sbit  TMR5GIF_bit at PIR5.B1;
    const register unsigned short int TMR5IF = 2;
    sbit  TMR5IF_bit at PIR5.B2;
    const register unsigned short int TMR6IF = 3;
    sbit  TMR6IF_bit at PIR5.B3;
    const register unsigned short int TMR8IF = 4;
    sbit  TMR8IF_bit at PIR5.B4;
    const register unsigned short int CM3IF = 5;
    sbit  CM3IF_bit at PIR5.B5;

    // IPR5 bits
    const register unsigned short int TMR1GIP = 0;
    sbit  TMR1GIP_bit at IPR5.B0;
    const register unsigned short int TMR5GIP = 1;
    sbit  TMR5GIP_bit at IPR5.B1;
    const register unsigned short int TMR5IP = 2;
    sbit  TMR5IP_bit at IPR5.B2;
    const register unsigned short int TMR6IP = 3;
    sbit  TMR6IP_bit at IPR5.B3;
    const register unsigned short int TMR8IP = 4;
    sbit  TMR8IP_bit at IPR5.B4;
    const register unsigned short int CM3IP = 5;
    sbit  CM3IP_bit at IPR5.B5;

    // T1GCON bits
    const register unsigned short int T1GSS0 = 0;
    sbit  T1GSS0_bit at T1GCON.B0;
    const register unsigned short int T1GSS1 = 1;
    sbit  T1GSS1_bit at T1GCON.B1;
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
    const register unsigned short int T1GGO = 3;
    sbit  T1GGO_bit at T1GCON.B3;
    const register unsigned short int NOT_T1DONE = 3;
    sbit  NOT_T1DONE_bit at T1GCON.B3;
    const register unsigned short int T1DONE = 3;
    sbit  T1DONE_bit at T1GCON.B3;

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
    const register unsigned short int LVDIE = 2;
    sbit  LVDIE_bit at PIE2.B2;
    const register unsigned short int BCL1IE = 3;
    sbit  BCL1IE_bit at PIE2.B3;
    const register unsigned short int USBIE = 4;
    sbit  USBIE_bit at PIE2.B4;
    const register unsigned short int CM1IE = 5;
    sbit  CM1IE_bit at PIE2.B5;
    const register unsigned short int CM2IE = 6;
    sbit  CM2IE_bit at PIE2.B6;
    const register unsigned short int OSCFIE = 7;
    sbit  OSCFIE_bit at PIE2.B7;
    const register unsigned short int HLVDIE = 2;
    sbit  HLVDIE_bit at PIE2.B2;
    const register unsigned short int BCLIE = 3;
    sbit  BCLIE_bit at PIE2.B3;

    // PIR2 bits
    const register unsigned short int CCP2IF = 0;
    sbit  CCP2IF_bit at PIR2.B0;
    const register unsigned short int TMR3IF = 1;
    sbit  TMR3IF_bit at PIR2.B1;
    const register unsigned short int LVDIF = 2;
    sbit  LVDIF_bit at PIR2.B2;
    const register unsigned short int BCL1IF = 3;
    sbit  BCL1IF_bit at PIR2.B3;
    const register unsigned short int USBIF = 4;
    sbit  USBIF_bit at PIR2.B4;
    const register unsigned short int CM1IF = 5;
    sbit  CM1IF_bit at PIR2.B5;
    const register unsigned short int CM2IF = 6;
    sbit  CM2IF_bit at PIR2.B6;
    const register unsigned short int OSCFIF = 7;
    sbit  OSCFIF_bit at PIR2.B7;
    const register unsigned short int HLVDIF = 2;
    sbit  HLVDIF_bit at PIR2.B2;
    const register unsigned short int BCLIF = 3;
    sbit  BCLIF_bit at PIR2.B3;

    // IPR2 bits
    const register unsigned short int CCP2IP = 0;
    sbit  CCP2IP_bit at IPR2.B0;
    const register unsigned short int TMR3IP = 1;
    sbit  TMR3IP_bit at IPR2.B1;
    const register unsigned short int LVDIP = 2;
    sbit  LVDIP_bit at IPR2.B2;
    const register unsigned short int BCL1IP = 3;
    sbit  BCL1IP_bit at IPR2.B3;
    const register unsigned short int USBIP = 4;
    sbit  USBIP_bit at IPR2.B4;
    const register unsigned short int CM1IP = 5;
    sbit  CM1IP_bit at IPR2.B5;
    const register unsigned short int CM2IP = 6;
    sbit  CM2IP_bit at IPR2.B6;
    const register unsigned short int OSCFIP = 7;
    sbit  OSCFIP_bit at IPR2.B7;
    const register unsigned short int HLVDIP = 2;
    sbit  HLVDIP_bit at IPR2.B2;
    const register unsigned short int BCLIP = 3;
    sbit  BCLIP_bit at IPR2.B3;

    // PIE3 bits
    const register unsigned short int RTCCIE = 0;
    sbit  RTCCIE_bit at PIE3.B0;
    const register unsigned short int TMR3GIE = 1;
    sbit  TMR3GIE_bit at PIE3.B1;
    const register unsigned short int CTMUIE = 2;
    sbit  CTMUIE_bit at PIE3.B2;
    const register unsigned short int TMR4IE = 3;
    sbit  TMR4IE_bit at PIE3.B3;
    const register unsigned short int TX2IE = 4;
    sbit  TX2IE_bit at PIE3.B4;
    const register unsigned short int RC2IE = 5;
    sbit  RC2IE_bit at PIE3.B5;
    const register unsigned short int BCL2IE = 6;
    sbit  BCL2IE_bit at PIE3.B6;
    const register unsigned short int SSP2IE = 7;
    sbit  SSP2IE_bit at PIE3.B7;

    // PIR3 bits
    const register unsigned short int RTCCIF = 0;
    sbit  RTCCIF_bit at PIR3.B0;
    const register unsigned short int TMR3GIF = 1;
    sbit  TMR3GIF_bit at PIR3.B1;
    const register unsigned short int CTMUIF = 2;
    sbit  CTMUIF_bit at PIR3.B2;
    const register unsigned short int TMR4IF = 3;
    sbit  TMR4IF_bit at PIR3.B3;
    const register unsigned short int TX2IF = 4;
    sbit  TX2IF_bit at PIR3.B4;
    const register unsigned short int RC2IF = 5;
    sbit  RC2IF_bit at PIR3.B5;
    const register unsigned short int BCL2IF = 6;
    sbit  BCL2IF_bit at PIR3.B6;
    const register unsigned short int SSP2IF = 7;
    sbit  SSP2IF_bit at PIR3.B7;

    // IPR3 bits
    const register unsigned short int RTCCIP = 0;
    sbit  RTCCIP_bit at IPR3.B0;
    const register unsigned short int TMR3GIP = 1;
    sbit  TMR3GIP_bit at IPR3.B1;
    const register unsigned short int CTMUIP = 2;
    sbit  CTMUIP_bit at IPR3.B2;
    const register unsigned short int TMR4IP = 3;
    sbit  TMR4IP_bit at IPR3.B3;
    const register unsigned short int TX2IP = 4;
    sbit  TX2IP_bit at IPR3.B4;
    const register unsigned short int RC2IP = 5;
    sbit  RC2IP_bit at IPR3.B5;
    const register unsigned short int BCL2IP = 6;
    sbit  BCL2IP_bit at IPR3.B6;
    const register unsigned short int SSP2IP = 7;
    sbit  SSP2IP_bit at IPR3.B7;

    // EECON1 bits
    const register unsigned short int WR = 1;
    sbit  WR_bit at EECON1.B1;
    const register unsigned short int WREN = 2;
    sbit  WREN_bit at EECON1.B2;
    const register unsigned short int WRERR = 3;
    sbit  WRERR_bit at EECON1.B3;
    const register unsigned short int FREE = 4;
    sbit  FREE_bit at EECON1.B4;
    const register unsigned short int WPROG = 5;
    sbit  WPROG_bit at EECON1.B5;

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
    const register unsigned short int EDG1SEL0 = 2;
    sbit  EDG1SEL0_bit at CTMUCONL.B2;
    const register unsigned short int EDG1SEL1 = 3;
    sbit  EDG1SEL1_bit at CTMUCONL.B3;
    const register unsigned short int EDG1POL = 4;
    sbit  EDG1POL_bit at CTMUCONL.B4;
    const register unsigned short int EDG2SEL0 = 5;
    sbit  EDG2SEL0_bit at CTMUCONL.B5;
    const register unsigned short int EDG2SEL1 = 6;
    sbit  EDG2SEL1_bit at CTMUCONL.B6;
    const register unsigned short int EDG2POL = 7;
    sbit  EDG2POL_bit at CTMUCONL.B7;

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

    // PSTR2CON bits
    sbit  STRA_PSTR2CON_bit at PSTR2CON.B0;
    sbit  STRB_PSTR2CON_bit at PSTR2CON.B1;
    sbit  STRC_PSTR2CON_bit at PSTR2CON.B2;
    sbit  STRD_PSTR2CON_bit at PSTR2CON.B3;
    sbit  STRSYNC_PSTR2CON_bit at PSTR2CON.B4;
    sbit  CMPL0_PSTR2CON_bit at PSTR2CON.B6;
    sbit  CMPL1_PSTR2CON_bit at PSTR2CON.B7;
    sbit  P2DC0_PSTR2CON_bit at PSTR2CON.B0;
    sbit  P2DC1_PSTR2CON_bit at PSTR2CON.B1;
    sbit  P2DC2_PSTR2CON_bit at PSTR2CON.B2;
    sbit  P2DC3_PSTR2CON_bit at PSTR2CON.B3;
    sbit  P2DC4_PSTR2CON_bit at PSTR2CON.B4;
    sbit  P2DC5_PSTR2CON_bit at PSTR2CON.B5;
    sbit  P2DC6_PSTR2CON_bit at PSTR2CON.B6;

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

    // PSTR1CON bits
    sbit  STRA_PSTR1CON_bit at PSTR1CON.B0;
    sbit  STRB_PSTR1CON_bit at PSTR1CON.B1;
    sbit  STRC_PSTR1CON_bit at PSTR1CON.B2;
    sbit  STRD_PSTR1CON_bit at PSTR1CON.B3;
    sbit  STRSYNC_PSTR1CON_bit at PSTR1CON.B4;
    sbit  CMPL0_PSTR1CON_bit at PSTR1CON.B6;
    sbit  CMPL1_PSTR1CON_bit at PSTR1CON.B7;

    // WDTCON bits
    const register unsigned short int SWDTEN = 0;
    sbit  SWDTEN_bit at WDTCON.B0;
    const register unsigned short int ULPSINK = 1;
    sbit  ULPSINK_bit at WDTCON.B1;
    const register unsigned short int ULPEN = 2;
    sbit  ULPEN_bit at WDTCON.B2;
    const register unsigned short int DS = 3;
    sbit  DS_bit at WDTCON.B3;
    const register unsigned short int VBGOE = 4;
    sbit  VBGOE_bit at WDTCON.B4;
    const register unsigned short int ULPLVL = 5;
    sbit  ULPLVL_bit at WDTCON.B5;
    const register unsigned short int LVDSTAT = 6;
    sbit  LVDSTAT_bit at WDTCON.B6;
    const register unsigned short int REGSLP = 7;
    sbit  REGSLP_bit at WDTCON.B7;
    const register unsigned short int SWDTE = 0;
    sbit  SWDTE_bit at WDTCON.B0;

    // ADCON1 bits
    const register unsigned short int ADCAL = 6;
    sbit  ADCAL_bit at ADCON1.B6;
    const register unsigned short int ADFM = 7;
    sbit  ADFM_bit at ADCON1.B7;
    const register unsigned short int ADCS0 = 0;
    sbit  ADCS0_bit at ADCON1.B0;
    const register unsigned short int ADCS1 = 1;
    sbit  ADCS1_bit at ADCON1.B1;
    const register unsigned short int ADCS2 = 2;
    sbit  ADCS2_bit at ADCON1.B2;
    const register unsigned short int ACQT0 = 3;
    sbit  ACQT0_bit at ADCON1.B3;
    const register unsigned short int ACQT1 = 4;
    sbit  ACQT1_bit at ADCON1.B4;
    const register unsigned short int ACQT2 = 5;
    sbit  ACQT2_bit at ADCON1.B5;

    // ADCON0 bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON0.B0;
    const register unsigned short int GO_NOT_DONE = 1;
    sbit  GO_NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int GO_DONE = 1;
    sbit  GO_DONE_bit at ADCON0.B1;
    const register unsigned short int CHS0 = 2;
    sbit  CHS0_bit at ADCON0.B2;
    const register unsigned short int CHS1 = 3;
    sbit  CHS1_bit at ADCON0.B3;
    const register unsigned short int CHS2 = 4;
    sbit  CHS2_bit at ADCON0.B4;
    const register unsigned short int CHS3 = 5;
    sbit  CHS3_bit at ADCON0.B5;
    const register unsigned short int VCFG0 = 6;
    sbit  VCFG0_bit at ADCON0.B6;
    const register unsigned short int VCFG1 = 7;
    sbit  VCFG1_bit at ADCON0.B7;
    const register unsigned short int DONE = 1;
    sbit  DONE_bit at ADCON0.B1;
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
    const register unsigned short int R = 2;
    sbit  R_bit at SSP1STAT.B2;
    const register unsigned short int D = 5;
    sbit  D_bit at SSP1STAT.B5;
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at SSP1STAT.B2;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at SSP1STAT.B5;
    const register unsigned short int NOT_W = 2;
    sbit  NOT_W_bit at SSP1STAT.B2;
    const register unsigned short int NOT_A = 5;
    sbit  NOT_A_bit at SSP1STAT.B5;
    const register unsigned short int NOT_WRITE = 2;
    sbit  NOT_WRITE_bit at SSP1STAT.B2;
    const register unsigned short int NOT_ADDRESS = 5;
    sbit  NOT_ADDRESS_bit at SSP1STAT.B5;
    const register unsigned short int READ_WRITE = 2;
    sbit  READ_WRITE_bit at SSP1STAT.B2;
    const register unsigned short int DATA_ADDRESS = 5;
    sbit  DATA_ADDRESS_bit at SSP1STAT.B5;
    const register unsigned short int I2C_DAT = 5;
    sbit  I2C_DAT_bit at SSP1STAT.B5;

    // SSP1MSK bits
    sbit  MSK0_SSP1MSK_bit at SSP1MSK.B0;
    sbit  MSK1_SSP1MSK_bit at SSP1MSK.B1;
    sbit  MSK2_SSP1MSK_bit at SSP1MSK.B2;
    sbit  MSK3_SSP1MSK_bit at SSP1MSK.B3;
    sbit  MSK4_SSP1MSK_bit at SSP1MSK.B4;
    sbit  MSK5_SSP1MSK_bit at SSP1MSK.B5;
    sbit  MSK6_SSP1MSK_bit at SSP1MSK.B6;
    sbit  MSK7_SSP1MSK_bit at SSP1MSK.B7;

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
    const register unsigned short int NOT_CM = 5;
    sbit  NOT_CM_bit at RCON.B5;
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

    // OSCCON bits
    const register unsigned short int FLTS = 2;
    sbit  FLTS_bit at OSCCON.B2;
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

    // RPOR0 bits
    const register unsigned short int RPOR4_ = 4;
    sbit  RPOR4__bit at RPOR0.B4;
    const register unsigned short int RPOR3_ = 3;
    sbit  RPOR3__bit at RPOR0.B3;
    const register unsigned short int RPOR2_ = 2;
    sbit  RPOR2__bit at RPOR0.B2;
    const register unsigned short int RPOR1_ = 1;
    sbit  RPOR1__bit at RPOR0.B1;
    const register unsigned short int RPOR0_ = 0;
    sbit  RPOR0__bit at RPOR0.B0;

    // RPOR1 bits
    sbit  RPOR4__RPOR1_bit at RPOR1.B4;
    sbit  RPOR3__RPOR1_bit at RPOR1.B3;
    sbit  RPOR2__RPOR1_bit at RPOR1.B2;
    sbit  RPOR1__RPOR1_bit at RPOR1.B1;
    sbit  RPOR0__RPOR1_bit at RPOR1.B0;

    // RPOR2 bits
    sbit  RPOR4__RPOR2_bit at RPOR2.B4;
    sbit  RPOR3__RPOR2_bit at RPOR2.B3;
    sbit  RPOR2__RPOR2_bit at RPOR2.B2;
    sbit  RPOR1__RPOR2_bit at RPOR2.B1;
    sbit  RPOR0__RPOR2_bit at RPOR2.B0;

    // RPOR3 bits
    sbit  RPOR4__RPOR3_bit at RPOR3.B4;
    sbit  RPOR3__RPOR3_bit at RPOR3.B3;
    sbit  RPOR2__RPOR3_bit at RPOR3.B2;
    sbit  RPOR1__RPOR3_bit at RPOR3.B1;
    sbit  RPOR0__RPOR3_bit at RPOR3.B0;

    // RPOR4 bits
    sbit  RPOR4__RPOR4_bit at RPOR4.B4;
    sbit  RPOR3__RPOR4_bit at RPOR4.B3;
    sbit  RPOR2__RPOR4_bit at RPOR4.B2;
    sbit  RPOR1__RPOR4_bit at RPOR4.B1;
    sbit  RPOR0__RPOR4_bit at RPOR4.B0;

    // RPOR5 bits
    sbit  RPOR4__RPOR5_bit at RPOR5.B4;
    sbit  RPOR3__RPOR5_bit at RPOR5.B3;
    sbit  RPOR2__RPOR5_bit at RPOR5.B2;
    sbit  RPOR1__RPOR5_bit at RPOR5.B1;
    sbit  RPOR0__RPOR5_bit at RPOR5.B0;

    // RPOR6 bits
    sbit  RPOR4__RPOR6_bit at RPOR6.B4;
    sbit  RPOR3__RPOR6_bit at RPOR6.B3;
    sbit  RPOR2__RPOR6_bit at RPOR6.B2;
    sbit  RPOR1__RPOR6_bit at RPOR6.B1;
    sbit  RPOR0__RPOR6_bit at RPOR6.B0;

    // RPOR7 bits
    sbit  RPOR4__RPOR7_bit at RPOR7.B4;
    sbit  RPOR3__RPOR7_bit at RPOR7.B3;
    sbit  RPOR2__RPOR7_bit at RPOR7.B2;
    sbit  RPOR1__RPOR7_bit at RPOR7.B1;
    sbit  RPOR0__RPOR7_bit at RPOR7.B0;

    // RPOR8 bits
    sbit  RPOR4__RPOR8_bit at RPOR8.B4;
    sbit  RPOR3__RPOR8_bit at RPOR8.B3;
    sbit  RPOR2__RPOR8_bit at RPOR8.B2;
    sbit  RPOR1__RPOR8_bit at RPOR8.B1;
    sbit  RPOR0__RPOR8_bit at RPOR8.B0;

    // RPOR9 bits
    sbit  RPOR4__RPOR9_bit at RPOR9.B4;
    sbit  RPOR3__RPOR9_bit at RPOR9.B3;
    sbit  RPOR2__RPOR9_bit at RPOR9.B2;
    sbit  RPOR1__RPOR9_bit at RPOR9.B1;
    sbit  RPOR0__RPOR9_bit at RPOR9.B0;

    // RPOR10 bits
    sbit  RPOR4__RPOR10_bit at RPOR10.B4;
    sbit  RPOR3__RPOR10_bit at RPOR10.B3;
    sbit  RPOR2__RPOR10_bit at RPOR10.B2;
    sbit  RPOR1__RPOR10_bit at RPOR10.B1;
    sbit  RPOR0__RPOR10_bit at RPOR10.B0;

    // RPOR11 bits
    sbit  RPOR4__RPOR11_bit at RPOR11.B4;
    sbit  RPOR3__RPOR11_bit at RPOR11.B3;
    sbit  RPOR2__RPOR11_bit at RPOR11.B2;
    sbit  RPOR1__RPOR11_bit at RPOR11.B1;
    sbit  RPOR0__RPOR11_bit at RPOR11.B0;

    // RPOR12 bits
    sbit  RPOR4__RPOR12_bit at RPOR12.B4;
    sbit  RPOR3__RPOR12_bit at RPOR12.B3;
    sbit  RPOR2__RPOR12_bit at RPOR12.B2;
    sbit  RPOR1__RPOR12_bit at RPOR12.B1;
    sbit  RPOR0__RPOR12_bit at RPOR12.B0;

    // RPOR13 bits
    sbit  RPOR4__RPOR13_bit at RPOR13.B4;
    sbit  RPOR3__RPOR13_bit at RPOR13.B3;
    sbit  RPOR2__RPOR13_bit at RPOR13.B2;
    sbit  RPOR1__RPOR13_bit at RPOR13.B1;
    sbit  RPOR0__RPOR13_bit at RPOR13.B0;

    // RPOR17 bits
    sbit  RPOR4__RPOR17_bit at RPOR17.B4;
    sbit  RPOR3__RPOR17_bit at RPOR17.B3;
    sbit  RPOR2__RPOR17_bit at RPOR17.B2;
    sbit  RPOR1__RPOR17_bit at RPOR17.B1;
    sbit  RPOR0__RPOR17_bit at RPOR17.B0;

    // RPOR18 bits
    sbit  RPOR4__RPOR18_bit at RPOR18.B4;
    sbit  RPOR3__RPOR18_bit at RPOR18.B3;
    sbit  RPOR2__RPOR18_bit at RPOR18.B2;
    sbit  RPOR1__RPOR18_bit at RPOR18.B1;
    sbit  RPOR0__RPOR18_bit at RPOR18.B0;

    // RPINR1 bits
    const register unsigned short int INT14 = 4;
    sbit  INT14_bit at RPINR1.B4;
    const register unsigned short int INT13 = 3;
    sbit  INT13_bit at RPINR1.B3;
    const register unsigned short int INT12 = 2;
    sbit  INT12_bit at RPINR1.B2;
    const register unsigned short int INT11 = 1;
    sbit  INT11_bit at RPINR1.B1;
    const register unsigned short int INT10 = 0;
    sbit  INT10_bit at RPINR1.B0;

    // RPINR2 bits
    const register unsigned short int INT24 = 4;
    sbit  INT24_bit at RPINR2.B4;
    const register unsigned short int INT23 = 3;
    sbit  INT23_bit at RPINR2.B3;
    const register unsigned short int INT22 = 2;
    sbit  INT22_bit at RPINR2.B2;
    const register unsigned short int INT21 = 1;
    sbit  INT21_bit at RPINR2.B1;
    const register unsigned short int INT20 = 0;
    sbit  INT20_bit at RPINR2.B0;

    // RPINR3 bits
    const register unsigned short int INT34 = 4;
    sbit  INT34_bit at RPINR3.B4;
    const register unsigned short int INT33 = 3;
    sbit  INT33_bit at RPINR3.B3;
    const register unsigned short int INT32 = 2;
    sbit  INT32_bit at RPINR3.B2;
    const register unsigned short int INT31 = 1;
    sbit  INT31_bit at RPINR3.B1;
    const register unsigned short int INT30 = 0;
    sbit  INT30_bit at RPINR3.B0;

    // RPINR4 bits
    const register unsigned short int T0CKI4 = 4;
    sbit  T0CKI4_bit at RPINR4.B4;
    const register unsigned short int T0CKI3 = 3;
    sbit  T0CKI3_bit at RPINR4.B3;
    const register unsigned short int T0CKI2 = 2;
    sbit  T0CKI2_bit at RPINR4.B2;
    const register unsigned short int T0CKI1 = 1;
    sbit  T0CKI1_bit at RPINR4.B1;
    const register unsigned short int T0CKI0 = 0;
    sbit  T0CKI0_bit at RPINR4.B0;

    // RPINR6 bits
    const register unsigned short int T3CKI4 = 4;
    sbit  T3CKI4_bit at RPINR6.B4;
    const register unsigned short int T3CKI3 = 3;
    sbit  T3CKI3_bit at RPINR6.B3;
    const register unsigned short int T3CKI2 = 2;
    sbit  T3CKI2_bit at RPINR6.B2;
    const register unsigned short int T3CKI1 = 1;
    sbit  T3CKI1_bit at RPINR6.B1;
    const register unsigned short int T3CKI0 = 0;
    sbit  T3CKI0_bit at RPINR6.B0;

    // RPINR15 bits
    const register unsigned short int T5CKI4 = 4;
    sbit  T5CKI4_bit at RPINR15.B4;
    const register unsigned short int T5CKI3 = 3;
    sbit  T5CKI3_bit at RPINR15.B3;
    const register unsigned short int T5CKI2 = 2;
    sbit  T5CKI2_bit at RPINR15.B2;
    const register unsigned short int T5CKI1 = 1;
    sbit  T5CKI1_bit at RPINR15.B1;
    const register unsigned short int T5CKI0 = 0;
    sbit  T5CKI0_bit at RPINR15.B0;

    // RPINR7 bits
    const register unsigned short int IC14 = 4;
    sbit  IC14_bit at RPINR7.B4;
    const register unsigned short int IC13 = 3;
    sbit  IC13_bit at RPINR7.B3;
    const register unsigned short int IC12 = 2;
    sbit  IC12_bit at RPINR7.B2;
    const register unsigned short int IC11 = 1;
    sbit  IC11_bit at RPINR7.B1;
    const register unsigned short int IC10 = 0;
    sbit  IC10_bit at RPINR7.B0;

    // RPINR8 bits
    const register unsigned short int IC24 = 4;
    sbit  IC24_bit at RPINR8.B4;
    const register unsigned short int IC23 = 3;
    sbit  IC23_bit at RPINR8.B3;
    const register unsigned short int IC22 = 2;
    sbit  IC22_bit at RPINR8.B2;
    const register unsigned short int IC21 = 1;
    sbit  IC21_bit at RPINR8.B1;
    const register unsigned short int IC20 = 0;
    sbit  IC20_bit at RPINR8.B0;

    // RPINR9 bits
    const register unsigned short int IC34 = 4;
    sbit  IC34_bit at RPINR9.B4;
    const register unsigned short int IC33 = 3;
    sbit  IC33_bit at RPINR9.B3;
    const register unsigned short int IC32 = 2;
    sbit  IC32_bit at RPINR9.B2;
    const register unsigned short int IC31 = 1;
    sbit  IC31_bit at RPINR9.B1;
    const register unsigned short int IC30 = 0;
    sbit  IC30_bit at RPINR9.B0;

    // RPINR12 bits
    const register unsigned short int T1G4 = 4;
    sbit  T1G4_bit at RPINR12.B4;
    const register unsigned short int T1G3 = 3;
    sbit  T1G3_bit at RPINR12.B3;
    const register unsigned short int T1G2 = 2;
    sbit  T1G2_bit at RPINR12.B2;
    const register unsigned short int T1G1 = 1;
    sbit  T1G1_bit at RPINR12.B1;
    const register unsigned short int T1G0 = 0;
    sbit  T1G0_bit at RPINR12.B0;

    // RPINR13 bits
    const register unsigned short int T3G4 = 4;
    sbit  T3G4_bit at RPINR13.B4;
    const register unsigned short int T3G3 = 3;
    sbit  T3G3_bit at RPINR13.B3;
    const register unsigned short int T3G2 = 2;
    sbit  T3G2_bit at RPINR13.B2;
    const register unsigned short int T3G1 = 1;
    sbit  T3G1_bit at RPINR13.B1;
    const register unsigned short int T3G0 = 0;
    sbit  T3G0_bit at RPINR13.B0;

    // RPINR14 bits
    const register unsigned short int T5G4 = 4;
    sbit  T5G4_bit at RPINR14.B4;
    const register unsigned short int T5G3 = 3;
    sbit  T5G3_bit at RPINR14.B3;
    const register unsigned short int T5G2 = 2;
    sbit  T5G2_bit at RPINR14.B2;
    const register unsigned short int T5G1 = 1;
    sbit  T5G1_bit at RPINR14.B1;
    const register unsigned short int T5G0 = 0;
    sbit  T5G0_bit at RPINR14.B0;

    // RPINR16 bits
    const register unsigned short int RX2DT24 = 4;
    sbit  RX2DT24_bit at RPINR16.B4;
    const register unsigned short int RX2DT23 = 3;
    sbit  RX2DT23_bit at RPINR16.B3;
    const register unsigned short int RX2DT22 = 2;
    sbit  RX2DT22_bit at RPINR16.B2;
    const register unsigned short int RX2DT21 = 1;
    sbit  RX2DT21_bit at RPINR16.B1;
    const register unsigned short int RX2DT20 = 0;
    sbit  RX2DT20_bit at RPINR16.B0;

    // RPINR17 bits
    const register unsigned short int CK24 = 4;
    sbit  CK24_bit at RPINR17.B4;
    const register unsigned short int CK23 = 3;
    sbit  CK23_bit at RPINR17.B3;
    const register unsigned short int CK22 = 2;
    sbit  CK22_bit at RPINR17.B2;
    const register unsigned short int CK21 = 1;
    sbit  CK21_bit at RPINR17.B1;
    const register unsigned short int CK20 = 0;
    sbit  CK20_bit at RPINR17.B0;

    // RPINR21 bits
    const register unsigned short int SDI24 = 4;
    sbit  SDI24_bit at RPINR21.B4;
    const register unsigned short int SDI23 = 3;
    sbit  SDI23_bit at RPINR21.B3;
    const register unsigned short int SDI22 = 2;
    sbit  SDI22_bit at RPINR21.B2;
    const register unsigned short int SDI21 = 1;
    sbit  SDI21_bit at RPINR21.B1;
    const register unsigned short int SDI20 = 0;
    sbit  SDI20_bit at RPINR21.B0;

    // RPINR22 bits
    const register unsigned short int SCK24 = 4;
    sbit  SCK24_bit at RPINR22.B4;
    const register unsigned short int SCK23 = 3;
    sbit  SCK23_bit at RPINR22.B3;
    const register unsigned short int SCK22 = 2;
    sbit  SCK22_bit at RPINR22.B2;
    const register unsigned short int SCK21 = 1;
    sbit  SCK21_bit at RPINR22.B1;
    const register unsigned short int SCK20 = 0;
    sbit  SCK20_bit at RPINR22.B0;

    // RPINR23 bits
    const register unsigned short int SS24 = 4;
    sbit  SS24_bit at RPINR23.B4;
    const register unsigned short int SS23 = 3;
    sbit  SS23_bit at RPINR23.B3;
    const register unsigned short int SS22 = 2;
    sbit  SS22_bit at RPINR23.B2;
    const register unsigned short int SS21 = 1;
    sbit  SS21_bit at RPINR23.B1;
    const register unsigned short int SS20 = 0;
    sbit  SS20_bit at RPINR23.B0;

    // RPINR24 bits
    const register unsigned short int FLT04 = 4;
    sbit  FLT04_bit at RPINR24.B4;
    const register unsigned short int FLT03 = 3;
    sbit  FLT03_bit at RPINR24.B3;
    const register unsigned short int FLT02 = 2;
    sbit  FLT02_bit at RPINR24.B2;
    const register unsigned short int FLT01 = 1;
    sbit  FLT01_bit at RPINR24.B1;
    const register unsigned short int FLT00 = 0;
    sbit  FLT00_bit at RPINR24.B0;

    // DMABCH bits
    const register unsigned short int DMACNTHB1 = 1;
    sbit  DMACNTHB1_bit at DMABCH.B1;
    const register unsigned short int DMACNTHB0 = 0;
    sbit  DMACNTHB0_bit at DMABCH.B0;

    // RXADDRH bits
    const register unsigned short int DMARCVPTRHB3 = 3;
    sbit  DMARCVPTRHB3_bit at RXADDRH.B3;
    const register unsigned short int DMARCVPTRHB2 = 2;
    sbit  DMARCVPTRHB2_bit at RXADDRH.B2;
    const register unsigned short int DMARCVPTRHB1 = 1;
    sbit  DMARCVPTRHB1_bit at RXADDRH.B1;
    const register unsigned short int DMARCVPTRHB0 = 0;
    sbit  DMARCVPTRHB0_bit at RXADDRH.B0;

    // TXADDRH bits
    const register unsigned short int DMATXPTRHB3 = 3;
    sbit  DMATXPTRHB3_bit at TXADDRH.B3;
    const register unsigned short int DMATXPTRHB2 = 2;
    sbit  DMATXPTRHB2_bit at TXADDRH.B2;
    const register unsigned short int DMATXPTRHB1 = 1;
    sbit  DMATXPTRHB1_bit at TXADDRH.B1;
    const register unsigned short int DMATXPTRHB0 = 0;
    sbit  DMATXPTRHB0_bit at TXADDRH.B0;

    // PORTA bits
    const register unsigned short int RA7 = 7;
    sbit  RA7_bit at PORTA.B7;
    const register unsigned short int RA6 = 6;
    sbit  RA6_bit at PORTA.B6;
    const register unsigned short int RA5 = 5;
    sbit  RA5_bit at PORTA.B5;
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
    const register unsigned short int RC2 = 2;
    sbit  RC2_bit at PORTC.B2;
    const register unsigned short int RC1 = 1;
    sbit  RC1_bit at PORTC.B1;
    const register unsigned short int RC0 = 0;
    sbit  RC0_bit at PORTC.B0;

    // TRISA bits
    const register unsigned short int TRISA7 = 7;
    sbit  TRISA7_bit at TRISA.B7;
    const register unsigned short int TRISA6 = 6;
    sbit  TRISA6_bit at TRISA.B6;
    const register unsigned short int TRISA5 = 5;
    sbit  TRISA5_bit at TRISA.B5;
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
    const register unsigned short int TRISC2 = 2;
    sbit  TRISC2_bit at TRISC.B2;
    const register unsigned short int TRISC1 = 1;
    sbit  TRISC1_bit at TRISC.B1;
    const register unsigned short int TRISC0 = 0;
    sbit  TRISC0_bit at TRISC.B0;

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
