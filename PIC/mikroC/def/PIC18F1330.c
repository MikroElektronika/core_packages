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

sfr unsigned short volatile OVDCONS          absolute 0x0F82;
sfr unsigned short volatile OVDCOND          absolute 0x0F83;
sfr unsigned short volatile DTCON            absolute 0x0F84;
sfr unsigned short          PWMCON1          absolute 0x0F85;
sfr unsigned short          PWMCON0          absolute 0x0F86;
sfr unsigned short volatile SEVTCMPH         absolute 0x0F87;
sfr unsigned short volatile SEVTCMPL         absolute 0x0F88;
sfr unsigned short volatile LATA             absolute 0x0F89;
sfr unsigned short volatile LATB             absolute 0x0F8A;
sfr unsigned short volatile FLTCONFIG        absolute 0x0F8B;
sfr unsigned short volatile PDC2H            absolute 0x0F8C;
sfr unsigned short volatile PDC2L            absolute 0x0F8D;
sfr unsigned short volatile PDC1H            absolute 0x0F8E;
sfr unsigned short volatile PDC1L            absolute 0x0F8F;
sfr unsigned short volatile PDC0H            absolute 0x0F90;
sfr unsigned short volatile PDC0L            absolute 0x0F91;
sfr unsigned short volatile PTPERH           absolute 0x0F95;
sfr unsigned short volatile PTPERL           absolute 0x0F96;
sfr unsigned short volatile PTMRH            absolute 0x0F97;
sfr unsigned short volatile PTMRL            absolute 0x0F98;
sfr unsigned short volatile PTCON1           absolute 0x0F99;
sfr unsigned short volatile PTCON0           absolute 0x0F9A;
sfr unsigned short volatile OSCTUNE          absolute 0x0F9B;
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
sfr unsigned short volatile RCSTA            absolute 0x0FAB;
sfr unsigned short volatile TXSTA            absolute 0x0FAC;
sfr unsigned short volatile TXREG            absolute 0x0FAD;
sfr unsigned short volatile RCREG            absolute 0x0FAE;
sfr unsigned short          SPBRG            absolute 0x0FAF;
sfr unsigned short          SPBRGH           absolute 0x0FB0;
sfr unsigned short volatile CMCON            absolute 0x0FB4;
sfr unsigned short volatile CVRCON           absolute 0x0FB5;
sfr unsigned short          BAUDCON          absolute 0x0FB8;
sfr unsigned short          BAUDCTL          absolute 0x0FB8;
sfr unsigned short volatile ADCON2           absolute 0x0FC0;
sfr unsigned short volatile ADCON1           absolute 0x0FC1;
sfr unsigned short volatile ADCON0           absolute 0x0FC2;
sfr unsigned short volatile ADRESL           absolute 0x0FC3;
sfr unsigned short volatile ADRESH           absolute 0x0FC4;
sfr unsigned short volatile T1CON            absolute 0x0FCD;
sfr unsigned short volatile TMR1L            absolute 0x0FCE;
sfr unsigned short volatile TMR1H            absolute 0x0FCF;
sfr unsigned short volatile RCON             absolute 0x0FD0;
sfr unsigned short          WDTCON           absolute 0x0FD1;
sfr unsigned short volatile LVDCON           absolute 0x0FD2;
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
sfr unsigned short volatile PORTA            absolute 0x0F80;
sfr unsigned short volatile PORTB            absolute 0x0F81;
sfr unsigned short volatile TRISA            absolute 0x0F92;
sfr unsigned short volatile TRISB            absolute 0x0F93;
sfr unsigned int   volatile ADRES            absolute 0x0FC3;
sfr unsigned int            PROD             absolute 0x0FF3;
sfr unsigned short          PRODL            absolute 0x0FF3;
sfr unsigned short          PRODH            absolute 0x0FF4;
sfr unsigned short volatile TOSL             absolute 0x0FFD;
sfr unsigned short volatile TOSH             absolute 0x0FFE;
sfr unsigned short volatile TOSU             absolute 0x0FFF;

    // Alternative bit function
    const register unsigned short int AN0 = 0;
    sbit  AN0_bit at PORTA.B0;

    // Alternative bit function
    const register unsigned short int AN1 = 1;
    sbit  AN1_bit at PORTA.B1;

    // Alternative bit function
    const register unsigned short int TX = 2;
    sbit  TX_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int RX_ = 3;
    sbit  RX__bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int AN2 = 4;
    sbit  AN2_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int MCLR = 5;
    sbit  MCLR_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int OSC2 = 6;
    sbit  OSC2_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int OSC1 = 7;
    sbit  OSC1_bit at PORTA.B7;

    // Alternative bit function
    const register unsigned short int INT0 = 0;
    sbit  INT0_bit at PORTA.B0;

    // Alternative bit function
    const register unsigned short int INT1 = 1;
    sbit  INT1_bit at PORTA.B1;

    // Alternative bit function
    const register unsigned short int CK = 2;
    sbit  CK_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int T0CKI = 4;
    sbit  T0CKI_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int CLKO = 6;
    sbit  CLKO_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int CLKI = 7;
    sbit  CLKI_bit at PORTA.B7;

    // Alternative bit function
    const register unsigned short int KBI0 = 0;
    sbit  KBI0_bit at PORTA.B0;

    // Alternative bit function
    const register unsigned short int KBI1 = 1;
    sbit  KBI1_bit at PORTA.B1;

    // Alternative bit function
    const register unsigned short int VREFP = 4;
    sbit  VREFP_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int T1OSO_PORTA = 6;
    sbit  T1OSO_PORTA_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int T1OSI_PORTA = 7;
    sbit  T1OSI_PORTA_bit at PORTA.B7;

    // Alternative bit function
    const register unsigned short int CMP0 = 0;
    sbit  CMP0_bit at PORTA.B0;

    // Alternative bit function
    const register unsigned short int NOT_MCLR = 5;
    sbit  NOT_MCLR_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int AN3 = 6;
    sbit  AN3_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int T1CKI_PORTA = 6;
    sbit  T1CKI_PORTA_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int PWM0 = 0;
    sbit  PWM0_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int PWM1 = 1;
    sbit  PWM1_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int INT2 = 2;
    sbit  INT2_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int INT3 = 3;
    sbit  INT3_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int PWM2 = 4;
    sbit  PWM2_bit at PORTB.B4;

    // Alternative bit function
    const register unsigned short int PWM3 = 5;
    sbit  PWM3_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int PWM4 = 6;
    sbit  PWM4_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int PWM5 = 7;
    sbit  PWM5_bit at PORTB.B7;

    // Alternative bit function
    const register unsigned short int KBI2 = 2;
    sbit  KBI2_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int KBI3 = 3;
    sbit  KBI3_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int PGC = 6;
    sbit  PGC_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int PGD = 7;
    sbit  PGD_bit at PORTB.B7;

    // Alternative bit function
    const register unsigned short int CMP2 = 2;
    sbit  CMP2_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int CMP1 = 3;
    sbit  CMP1_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int T1OSO_PORTB = 2;
    sbit  T1OSO_PORTB_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int T1OSI_PORTB = 3;
    sbit  T1OSI_PORTB_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int T1CKI_PORTB = 2;
    sbit  T1CKI_PORTB_bit at PORTB.B2;

    // OVDCONS bits
    const register unsigned short int POUT0 = 0;
    sbit  POUT0_bit at OVDCONS.B0;
    const register unsigned short int POUT1 = 1;
    sbit  POUT1_bit at OVDCONS.B1;
    const register unsigned short int POUT2 = 2;
    sbit  POUT2_bit at OVDCONS.B2;
    const register unsigned short int POUT3 = 3;
    sbit  POUT3_bit at OVDCONS.B3;
    const register unsigned short int POUT4 = 4;
    sbit  POUT4_bit at OVDCONS.B4;
    const register unsigned short int POUT5 = 5;
    sbit  POUT5_bit at OVDCONS.B5;

    // OVDCOND bits
    const register unsigned short int POVD0 = 0;
    sbit  POVD0_bit at OVDCOND.B0;
    const register unsigned short int POVD1 = 1;
    sbit  POVD1_bit at OVDCOND.B1;
    const register unsigned short int POVD2 = 2;
    sbit  POVD2_bit at OVDCOND.B2;
    const register unsigned short int POVD3 = 3;
    sbit  POVD3_bit at OVDCOND.B3;
    const register unsigned short int POVD4 = 4;
    sbit  POVD4_bit at OVDCOND.B4;
    const register unsigned short int POVD5 = 5;
    sbit  POVD5_bit at OVDCOND.B5;

    // DTCON bits
    const register unsigned short int DT0 = 0;
    sbit  DT0_bit at DTCON.B0;
    const register unsigned short int DT1 = 1;
    sbit  DT1_bit at DTCON.B1;
    const register unsigned short int DT2 = 2;
    sbit  DT2_bit at DTCON.B2;
    const register unsigned short int DT3 = 3;
    sbit  DT3_bit at DTCON.B3;
    const register unsigned short int DT4 = 4;
    sbit  DT4_bit at DTCON.B4;
    const register unsigned short int DT5 = 5;
    sbit  DT5_bit at DTCON.B5;
    const register unsigned short int DTPS0 = 6;
    sbit  DTPS0_bit at DTCON.B6;
    const register unsigned short int DTPS1 = 7;
    sbit  DTPS1_bit at DTCON.B7;

    // PWMCON1 bits
    const register unsigned short int OSYNC = 0;
    sbit  OSYNC_bit at PWMCON1.B0;
    const register unsigned short int UDIS = 1;
    sbit  UDIS_bit at PWMCON1.B1;
    const register unsigned short int SEVTDIR = 3;
    sbit  SEVTDIR_bit at PWMCON1.B3;
    const register unsigned short int SEVOPS0 = 4;
    sbit  SEVOPS0_bit at PWMCON1.B4;
    const register unsigned short int SEVOPS1 = 5;
    sbit  SEVOPS1_bit at PWMCON1.B5;
    const register unsigned short int SEVOPS2 = 6;
    sbit  SEVOPS2_bit at PWMCON1.B6;
    const register unsigned short int SEVOPS3 = 7;
    sbit  SEVOPS3_bit at PWMCON1.B7;

    // PWMCON0 bits
    const register unsigned short int PMOD0 = 0;
    sbit  PMOD0_bit at PWMCON0.B0;
    const register unsigned short int PMOD1 = 1;
    sbit  PMOD1_bit at PWMCON0.B1;
    const register unsigned short int PMOD2 = 2;
    sbit  PMOD2_bit at PWMCON0.B2;
    const register unsigned short int PWMEN0 = 4;
    sbit  PWMEN0_bit at PWMCON0.B4;
    const register unsigned short int PWMEN1 = 5;
    sbit  PWMEN1_bit at PWMCON0.B5;
    const register unsigned short int PWMEN2 = 6;
    sbit  PWMEN2_bit at PWMCON0.B6;

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

    // FLTCONFIG bits
    const register unsigned short int FLTAEN = 0;
    sbit  FLTAEN_bit at FLTCONFIG.B0;
    const register unsigned short int FLTAMOD = 1;
    sbit  FLTAMOD_bit at FLTCONFIG.B1;
    const register unsigned short int FLTAS = 2;
    sbit  FLTAS_bit at FLTCONFIG.B2;
    const register unsigned short int BRFEN = 7;
    sbit  BRFEN_bit at FLTCONFIG.B7;

    // PTCON1 bits
    const register unsigned short int PTDIR = 6;
    sbit  PTDIR_bit at PTCON1.B6;
    const register unsigned short int PTEN = 7;
    sbit  PTEN_bit at PTCON1.B7;

    // PTCON0 bits
    const register unsigned short int PTMOD0 = 0;
    sbit  PTMOD0_bit at PTCON0.B0;
    const register unsigned short int PTMOD1 = 1;
    sbit  PTMOD1_bit at PTCON0.B1;
    const register unsigned short int PTCKPS0 = 2;
    sbit  PTCKPS0_bit at PTCON0.B2;
    const register unsigned short int PTCKPS1 = 3;
    sbit  PTCKPS1_bit at PTCON0.B3;
    const register unsigned short int PTOPS0 = 4;
    sbit  PTOPS0_bit at PTCON0.B4;
    const register unsigned short int PTOPS1 = 5;
    sbit  PTOPS1_bit at PTCON0.B5;
    const register unsigned short int PTOPS2 = 6;
    sbit  PTOPS2_bit at PTCON0.B6;
    const register unsigned short int PTOPS3 = 7;
    sbit  PTOPS3_bit at PTCON0.B7;

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

    // PIE1 bits
    const register unsigned short int TMR1IE = 0;
    sbit  TMR1IE_bit at PIE1.B0;
    const register unsigned short int CMP0IE = 1;
    sbit  CMP0IE_bit at PIE1.B1;
    const register unsigned short int CMP1IE = 2;
    sbit  CMP1IE_bit at PIE1.B2;
    const register unsigned short int CMP2IE = 3;
    sbit  CMP2IE_bit at PIE1.B3;
    const register unsigned short int TXIE = 4;
    sbit  TXIE_bit at PIE1.B4;
    const register unsigned short int RCIE = 5;
    sbit  RCIE_bit at PIE1.B5;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;

    // PIR1 bits
    const register unsigned short int TMR1IF = 0;
    sbit  TMR1IF_bit at PIR1.B0;
    const register unsigned short int CMP0IF = 1;
    sbit  CMP0IF_bit at PIR1.B1;
    const register unsigned short int CMP1IF = 2;
    sbit  CMP1IF_bit at PIR1.B2;
    const register unsigned short int CMP2IF = 3;
    sbit  CMP2IF_bit at PIR1.B3;
    const register unsigned short int TXIF = 4;
    sbit  TXIF_bit at PIR1.B4;
    const register unsigned short int RCIF = 5;
    sbit  RCIF_bit at PIR1.B5;
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;

    // IPR1 bits
    const register unsigned short int TMR1IP = 0;
    sbit  TMR1IP_bit at IPR1.B0;
    const register unsigned short int CMP0IP = 1;
    sbit  CMP0IP_bit at IPR1.B1;
    const register unsigned short int CMP1IP = 2;
    sbit  CMP1IP_bit at IPR1.B2;
    const register unsigned short int CMP2IP = 3;
    sbit  CMP2IP_bit at IPR1.B3;
    const register unsigned short int TXIP = 4;
    sbit  TXIP_bit at IPR1.B4;
    const register unsigned short int RCIP = 5;
    sbit  RCIP_bit at IPR1.B5;
    const register unsigned short int ADIP = 6;
    sbit  ADIP_bit at IPR1.B6;

    // PIE2 bits
    const register unsigned short int LVDIE = 2;
    sbit  LVDIE_bit at PIE2.B2;
    const register unsigned short int EEIE = 4;
    sbit  EEIE_bit at PIE2.B4;
    const register unsigned short int OSCFIE = 7;
    sbit  OSCFIE_bit at PIE2.B7;

    // PIR2 bits
    const register unsigned short int LVDIF = 2;
    sbit  LVDIF_bit at PIR2.B2;
    const register unsigned short int EEIF = 4;
    sbit  EEIF_bit at PIR2.B4;
    const register unsigned short int OSCFIF = 7;
    sbit  OSCFIF_bit at PIR2.B7;

    // IPR2 bits
    const register unsigned short int LVDIP = 2;
    sbit  LVDIP_bit at IPR2.B2;
    const register unsigned short int EEIP = 4;
    sbit  EEIP_bit at IPR2.B4;
    const register unsigned short int OSCFIP = 7;
    sbit  OSCFIP_bit at IPR2.B7;

    // PIE3 bits
    const register unsigned short int PTIE = 4;
    sbit  PTIE_bit at PIE3.B4;

    // PIR3 bits
    const register unsigned short int PTIF = 4;
    sbit  PTIF_bit at PIR3.B4;

    // IPR3 bits
    const register unsigned short int PTIP = 4;
    sbit  PTIP_bit at IPR3.B4;

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

    // RCSTA bits
    const register unsigned short int RX9D = 0;
    sbit  RX9D_bit at RCSTA.B0;
    const register unsigned short int OERR = 1;
    sbit  OERR_bit at RCSTA.B1;
    const register unsigned short int FERR = 2;
    sbit  FERR_bit at RCSTA.B2;
    const register unsigned short int ADEN = 3;
    sbit  ADEN_bit at RCSTA.B3;
    const register unsigned short int CREN = 4;
    sbit  CREN_bit at RCSTA.B4;
    const register unsigned short int SREN = 5;
    sbit  SREN_bit at RCSTA.B5;
    const register unsigned short int RX9 = 6;
    sbit  RX9_bit at RCSTA.B6;
    const register unsigned short int SPEN = 7;
    sbit  SPEN_bit at RCSTA.B7;
    const register unsigned short int ADDEN = 3;
    sbit  ADDEN_bit at RCSTA.B3;

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

    // CMCON bits
    const register unsigned short int C0OUT = 5;
    sbit  C0OUT_bit at CMCON.B5;
    const register unsigned short int C1OUT = 6;
    sbit  C1OUT_bit at CMCON.B6;
    const register unsigned short int C2OUT = 7;
    sbit  C2OUT_bit at CMCON.B7;
    const register unsigned short int CMEN0 = 0;
    sbit  CMEN0_bit at CMCON.B0;
    const register unsigned short int CMEN1 = 1;
    sbit  CMEN1_bit at CMCON.B1;
    const register unsigned short int CMEN2 = 2;
    sbit  CMEN2_bit at CMCON.B2;

    // CVRCON bits
    const register unsigned short int CVRSS = 4;
    sbit  CVRSS_bit at CVRCON.B4;
    const register unsigned short int CVRR = 5;
    sbit  CVRR_bit at CVRCON.B5;
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
    const register unsigned short int CVREF = 4;
    sbit  CVREF_bit at CVRCON.B4;

    // BAUDCON, BAUDCTL bits
    const register unsigned short int ABDEN = 0;
    sbit  ABDEN_bit at BAUDCON.B0;
    const register unsigned short int WUE = 1;
    sbit  WUE_bit at BAUDCON.B1;
    const register unsigned short int BRG16 = 3;
    sbit  BRG16_bit at BAUDCON.B3;
    const register unsigned short int TXCKP = 4;
    sbit  TXCKP_bit at BAUDCON.B4;
    const register unsigned short int RXDTP = 5;
    sbit  RXDTP_bit at BAUDCON.B5;
    const register unsigned short int RCIDL = 6;
    sbit  RCIDL_bit at BAUDCON.B6;
    const register unsigned short int ABDOVF = 7;
    sbit  ABDOVF_bit at BAUDCON.B7;
    const register unsigned short int SCKP = 4;
    sbit  SCKP_bit at BAUDCON.B4;
    const register unsigned short int RCMT = 6;
    sbit  RCMT_bit at BAUDCON.B6;

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
    const register unsigned short int VCFG = 4;
    sbit  VCFG_bit at ADCON1.B4;
    const register unsigned short int PCFG0 = 0;
    sbit  PCFG0_bit at ADCON1.B0;
    const register unsigned short int PCFG1 = 1;
    sbit  PCFG1_bit at ADCON1.B1;
    const register unsigned short int PCFG2 = 2;
    sbit  PCFG2_bit at ADCON1.B2;
    const register unsigned short int PCFG3 = 3;
    sbit  PCFG3_bit at ADCON1.B3;
    const register unsigned short int VCFG0 = 4;
    sbit  VCFG0_bit at ADCON1.B4;

    // ADCON0 bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON0.B0;
    const register unsigned short int GO_NOT_DONE = 1;
    sbit  GO_NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int SEVTEN = 7;
    sbit  SEVTEN_bit at ADCON0.B7;
    const register unsigned short int GO = 1;
    sbit  GO_bit at ADCON0.B1;
    const register unsigned short int CHS0 = 2;
    sbit  CHS0_bit at ADCON0.B2;
    const register unsigned short int CHS1 = 3;
    sbit  CHS1_bit at ADCON0.B3;
    const register unsigned short int DONE = 1;
    sbit  DONE_bit at ADCON0.B1;
    const register unsigned short int NOT_DONE = 1;
    sbit  NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int GO_DONE = 1;
    sbit  GO_DONE_bit at ADCON0.B1;

    // T1CON bits
    const register unsigned short int TMR1ON = 0;
    sbit  TMR1ON_bit at T1CON.B0;
    const register unsigned short int TMR1CS = 1;
    sbit  TMR1CS_bit at T1CON.B1;
    const register unsigned short int NOT_T1SYNC = 2;
    sbit  NOT_T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1OSCEN = 3;
    sbit  T1OSCEN_bit at T1CON.B3;
    const register unsigned short int T1RUN = 6;
    sbit  T1RUN_bit at T1CON.B6;
    const register unsigned short int RD16 = 7;
    sbit  RD16_bit at T1CON.B7;
    const register unsigned short int T1CKPS0 = 4;
    sbit  T1CKPS0_bit at T1CON.B4;
    const register unsigned short int T1CKPS1 = 5;
    sbit  T1CKPS1_bit at T1CON.B5;
    const register unsigned short int T1SYNC = 2;
    sbit  T1SYNC_bit at T1CON.B2;

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

    // LVDCON bits
    const register unsigned short int LVDEN = 4;
    sbit  LVDEN_bit at LVDCON.B4;
    const register unsigned short int IRVST = 5;
    sbit  IRVST_bit at LVDCON.B5;
    const register unsigned short int LVDL0 = 0;
    sbit  LVDL0_bit at LVDCON.B0;
    const register unsigned short int LVDL1 = 1;
    sbit  LVDL1_bit at LVDCON.B1;
    const register unsigned short int LVDL2 = 2;
    sbit  LVDL2_bit at LVDCON.B2;
    const register unsigned short int LVDL3 = 3;
    sbit  LVDL3_bit at LVDCON.B3;
    const register unsigned short int IVRST = 5;
    sbit  IVRST_bit at LVDCON.B5;

    // OSCCON bits
    const register unsigned short int IOFS = 2;
    sbit  IOFS_bit at OSCCON.B2;
    const register unsigned short int OSTS = 3;
    sbit  OSTS_bit at OSCCON.B3;
    const register unsigned short int IDLEN = 7;
    sbit  IDLEN_bit at OSCCON.B7;
    const register unsigned short int SCS0 = 0;
    sbit  SCS0_bit at OSCCON.B0;
    const register unsigned short int SCS1 = 1;
    sbit  SCS1_bit at OSCCON.B1;
    const register unsigned short int FLTS = 2;
    sbit  FLTS_bit at OSCCON.B2;
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
    const register unsigned short int T016BIT = 6;
    sbit  T016BIT_bit at T0CON.B6;
    const register unsigned short int TMR0ON = 7;
    sbit  TMR0ON_bit at T0CON.B7;
    const register unsigned short int T0PS0 = 0;
    sbit  T0PS0_bit at T0CON.B0;
    const register unsigned short int T0PS1 = 1;
    sbit  T0PS1_bit at T0CON.B1;
    const register unsigned short int T0PS2 = 2;
    sbit  T0PS2_bit at T0CON.B2;
    const register unsigned short int T08BIT = 6;
    sbit  T08BIT_bit at T0CON.B6;

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
