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

sfr unsigned short volatile SRCON1           absolute 0x0F57;
sfr unsigned short volatile SRCON0           absolute 0x0F58;
sfr unsigned short volatile CCPTMRS          absolute 0x0F59;
sfr unsigned short volatile VREGCON          absolute 0x0F5A;
sfr unsigned short volatile ANSELA           absolute 0x0F5B;
sfr unsigned short volatile ANSELB           absolute 0x0F5C;
sfr unsigned short volatile ANSELC           absolute 0x0F5D;
sfr unsigned short volatile UCON             absolute 0x0F60;
sfr unsigned short volatile USTAT            absolute 0x0F61;
sfr unsigned short volatile UCFG             absolute 0x0F62;
sfr unsigned short volatile UADDR            absolute 0x0F63;
sfr unsigned short volatile UIE              absolute 0x0F64;
sfr unsigned short volatile UIR              absolute 0x0F65;
sfr unsigned short volatile UEIE             absolute 0x0F66;
sfr unsigned short volatile UEIR             absolute 0x0F67;
sfr unsigned short volatile UFRML            absolute 0x0F68;
sfr unsigned short volatile UFRMH            absolute 0x0F69;
sfr unsigned short volatile UEP0             absolute 0x0F6A;
sfr unsigned short volatile UEP1             absolute 0x0F6B;
sfr unsigned short volatile UEP2             absolute 0x0F6C;
sfr unsigned short volatile UEP3             absolute 0x0F6D;
sfr unsigned short volatile UEP4             absolute 0x0F6E;
sfr unsigned short volatile UEP5             absolute 0x0F6F;
sfr unsigned short volatile UEP6             absolute 0x0F70;
sfr unsigned short volatile UEP7             absolute 0x0F71;
sfr unsigned short volatile UEP8             absolute 0x0F72;
sfr unsigned short volatile UEP9             absolute 0x0F73;
sfr unsigned short volatile UEP10            absolute 0x0F74;
sfr unsigned short volatile UEP11            absolute 0x0F75;
sfr unsigned short volatile UEP12            absolute 0x0F76;
sfr unsigned short volatile UEP13            absolute 0x0F77;
sfr unsigned short volatile UEP14            absolute 0x0F78;
sfr unsigned short volatile UEP15            absolute 0x0F79;
sfr unsigned short volatile SLRCON           absolute 0x0F7A;
sfr unsigned short volatile VREFCON2         absolute 0x0F7B;
sfr unsigned short volatile VREFCON1         absolute 0x0F7C;
sfr unsigned short volatile VREFCON0         absolute 0x0F7D;
sfr unsigned short volatile PMD0             absolute 0x0F7E;
sfr unsigned short volatile PMD1             absolute 0x0F7F;
sfr unsigned short          WPUB             absolute 0x0F85;
sfr unsigned short volatile IOCB             absolute 0x0F86;
sfr unsigned short volatile IOCC             absolute 0x0F87;
sfr unsigned short volatile CTMUICON         absolute 0x0F88;
sfr unsigned short volatile LATA             absolute 0x0F89;
sfr unsigned short volatile LATB             absolute 0x0F8A;
sfr unsigned short volatile LATC             absolute 0x0F8B;
sfr unsigned short volatile CTMUCON1         absolute 0x0F8E;
sfr unsigned short volatile CTMUCONL         absolute 0x0F8E;
sfr unsigned short volatile CTMUCON0         absolute 0x0F8F;
sfr unsigned short volatile CTMUCONH         absolute 0x0F8F;
sfr unsigned short volatile CCP2CON          absolute 0x0F97;
sfr unsigned short volatile ECCP2CON         absolute 0x0F97;
sfr unsigned short volatile CM1CON0          absolute 0x0F98;
sfr unsigned short volatile CM2CON0          absolute 0x0F99;
sfr unsigned short volatile CM2CON1          absolute 0x0F9A;
sfr unsigned short volatile OSCTUNE          absolute 0x0F9B;
sfr unsigned short volatile HLVDCON          absolute 0x0F9C;
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
sfr unsigned short volatile RCSTA1           absolute 0x0FAB;
sfr unsigned short volatile TXSTA            absolute 0x0FAC;
sfr unsigned short volatile TXSTA1           absolute 0x0FAC;
sfr unsigned short volatile TXREG            absolute 0x0FAD;
sfr unsigned short volatile TXREG1           absolute 0x0FAD;
sfr unsigned short volatile RCREG            absolute 0x0FAE;
sfr unsigned short volatile RCREG1           absolute 0x0FAE;
sfr unsigned short          SPBRG            absolute 0x0FAF;
sfr unsigned short          SPBRG1           absolute 0x0FAF;
sfr unsigned short          SPBRGH           absolute 0x0FB0;
sfr unsigned short          SPBRGH1          absolute 0x0FB0;
sfr unsigned short volatile T3CON            absolute 0x0FB1;
sfr unsigned short volatile TMR3L            absolute 0x0FB2;
sfr unsigned short volatile TMR3H            absolute 0x0FB3;
sfr unsigned short volatile T3GCON           absolute 0x0FB4;
sfr unsigned short volatile ACTCON           absolute 0x0FB5;
sfr unsigned short volatile STCON            absolute 0x0FB5;
sfr unsigned short volatile ECCP1AS          absolute 0x0FB6;
sfr unsigned short volatile ECCP1DEL         absolute 0x0FB7;
sfr unsigned short          PWM1CON          absolute 0x0FB7;
sfr unsigned short          BAUDCON          absolute 0x0FB8;
sfr unsigned short          BAUDCON1         absolute 0x0FB8;
sfr unsigned short volatile PSTR1CON         absolute 0x0FB9;
sfr unsigned short volatile T2CON            absolute 0x0FBA;
sfr unsigned short volatile PR2              absolute 0x0FBB;
sfr unsigned short volatile TMR2             absolute 0x0FBC;
sfr unsigned short volatile CCP1CON          absolute 0x0FBD;
sfr unsigned short volatile ECCP1CON         absolute 0x0FBD;
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
sfr unsigned short volatile SSP1CON          absolute 0x0FC6;
sfr unsigned short volatile SSPCON1          absolute 0x0FC6;
sfr unsigned short volatile SSP1CON1         absolute 0x0FC6;
sfr unsigned short volatile SSPCON           absolute 0x0FC6;
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
sfr unsigned short volatile PORTA            absolute 0x0F80;
sfr unsigned short volatile PORTB            absolute 0x0F81;
sfr unsigned short volatile PORTC            absolute 0x0F82;
sfr unsigned short volatile PORTE            absolute 0x0F84;
sfr unsigned int   volatile CCPR2            absolute 0x0F90;
sfr unsigned short volatile CCPR2L           absolute 0x0F90;
sfr unsigned short volatile CCPR2H           absolute 0x0F91;
sfr unsigned short volatile TRISA            absolute 0x0F92;
sfr unsigned short volatile TRISB            absolute 0x0F93;
sfr unsigned short volatile TRISC            absolute 0x0F94;
sfr unsigned short          PRODL            absolute 0x0FF3;
sfr unsigned short          PRODH            absolute 0x0FF4;
sfr unsigned short volatile TOSL             absolute 0x0FFD;
sfr unsigned short volatile TOSH             absolute 0x0FFE;
sfr unsigned short volatile TOSU             absolute 0x0FFF;

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

    // CCPTMRS bits
    const register unsigned short int C1TSEL = 0;
    sbit  C1TSEL_bit at CCPTMRS.B0;
    const register unsigned short int C2TSEL = 3;
    sbit  C2TSEL_bit at CCPTMRS.B3;

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
    const register unsigned short int ANSC6 = 6;
    sbit  ANSC6_bit at ANSELC.B6;
    const register unsigned short int ANSC7 = 7;
    sbit  ANSC7_bit at ANSELC.B7;

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

    // UCFG bits
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
    const register unsigned short int PPB0 = 0;
    sbit  PPB0_bit at UCFG.B0;
    const register unsigned short int PPB1 = 1;
    sbit  PPB1_bit at UCFG.B1;

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

    // SLRCON bits
    const register unsigned short int SLRA = 0;
    sbit  SLRA_bit at SLRCON.B0;
    const register unsigned short int SLRB = 1;
    sbit  SLRB_bit at SLRCON.B1;
    const register unsigned short int SLRC = 2;
    sbit  SLRC_bit at SLRCON.B2;

    // VREFCON2 bits
    const register unsigned short int DACR0 = 0;
    sbit  DACR0_bit at VREFCON2.B0;
    const register unsigned short int DACR1 = 1;
    sbit  DACR1_bit at VREFCON2.B1;
    const register unsigned short int DACR2 = 2;
    sbit  DACR2_bit at VREFCON2.B2;
    const register unsigned short int DACR3 = 3;
    sbit  DACR3_bit at VREFCON2.B3;
    const register unsigned short int DACR4 = 4;
    sbit  DACR4_bit at VREFCON2.B4;

    // VREFCON1 bits
    const register unsigned short int DACNSS = 0;
    sbit  DACNSS_bit at VREFCON1.B0;
    const register unsigned short int DACOE = 5;
    sbit  DACOE_bit at VREFCON1.B5;
    const register unsigned short int DACLPS = 6;
    sbit  DACLPS_bit at VREFCON1.B6;
    const register unsigned short int DACEN = 7;
    sbit  DACEN_bit at VREFCON1.B7;
    const register unsigned short int DACPSS0 = 2;
    sbit  DACPSS0_bit at VREFCON1.B2;
    const register unsigned short int DACPSS1 = 3;
    sbit  DACPSS1_bit at VREFCON1.B3;

    // VREFCON0 bits
    const register unsigned short int TSRNG = 2;
    sbit  TSRNG_bit at VREFCON0.B2;
    const register unsigned short int TSEN = 3;
    sbit  TSEN_bit at VREFCON0.B3;
    const register unsigned short int FVRST = 6;
    sbit  FVRST_bit at VREFCON0.B6;
    const register unsigned short int FVREN = 7;
    sbit  FVREN_bit at VREFCON0.B7;
    const register unsigned short int FVRS0 = 4;
    sbit  FVRS0_bit at VREFCON0.B4;
    const register unsigned short int FVRS1 = 5;
    sbit  FVRS1_bit at VREFCON0.B5;

    // PMD0 bits
    const register unsigned short int TMR1MD = 0;
    sbit  TMR1MD_bit at PMD0.B0;
    const register unsigned short int TMR2MD = 1;
    sbit  TMR2MD_bit at PMD0.B1;
    const register unsigned short int TMR3MD = 2;
    sbit  TMR3MD_bit at PMD0.B2;
    const register unsigned short int ACTMD = 4;
    sbit  ACTMD_bit at PMD0.B4;
    const register unsigned short int USBMD = 5;
    sbit  USBMD_bit at PMD0.B5;
    const register unsigned short int UARTMD = 6;
    sbit  UARTMD_bit at PMD0.B6;
    const register unsigned short int STMD = 4;
    sbit  STMD_bit at PMD0.B4;
    const register unsigned short int UART1MD = 6;
    sbit  UART1MD_bit at PMD0.B6;

    // PMD1 bits
    const register unsigned short int CCP1MD = 0;
    sbit  CCP1MD_bit at PMD1.B0;
    const register unsigned short int CCP2MD = 1;
    sbit  CCP2MD_bit at PMD1.B1;
    const register unsigned short int ADCMD = 2;
    sbit  ADCMD_bit at PMD1.B2;
    const register unsigned short int CMP1MD = 3;
    sbit  CMP1MD_bit at PMD1.B3;
    const register unsigned short int CMP2MD = 4;
    sbit  CMP2MD_bit at PMD1.B4;
    const register unsigned short int CTMUMD = 5;
    sbit  CTMUMD_bit at PMD1.B5;
    const register unsigned short int MSSPMD = 6;
    sbit  MSSPMD_bit at PMD1.B6;
    const register unsigned short int SSP1MD = 6;
    sbit  SSP1MD_bit at PMD1.B6;
    const register unsigned short int MSSP1MD = 6;
    sbit  MSSP1MD_bit at PMD1.B6;

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
    const register unsigned short int T0CKI = 4;
    sbit  T0CKI_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int AN4 = 5;
    sbit  AN4_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int OSC2 = 6;
    sbit  OSC2_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int VREFM = 2;
    sbit  VREFM_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int VREFP = 3;
    sbit  VREFP_bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int LVDIN = 5;
    sbit  LVDIN_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int HLVDIN = 5;
    sbit  HLVDIN_bit at PORTA.B5;

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
    const register unsigned short int PGM = 5;
    sbit  PGM_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int PGC = 6;
    sbit  PGC_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int PGD = 7;
    sbit  PGD_bit at PORTB.B7;

    // Alternative bit function
    const register unsigned short int T1OSO = 0;
    sbit  T1OSO_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int T1OSI = 1;
    sbit  T1OSI_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int CCP1 = 2;
    sbit  CCP1_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int TX = 6;
    sbit  TX_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int RX_ = 7;
    sbit  RX__bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int T13CKI = 0;
    sbit  T13CKI_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int P1A = 2;
    sbit  P1A_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int CK = 6;
    sbit  CK_bit at PORTC.B6;

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

    // IOCC bits
    const register unsigned short int IOCC0 = 0;
    sbit  IOCC0_bit at IOCC.B0;
    const register unsigned short int IOCC1 = 1;
    sbit  IOCC1_bit at IOCC.B1;
    const register unsigned short int IOCC2 = 2;
    sbit  IOCC2_bit at IOCC.B2;
    const register unsigned short int IOCC4 = 4;
    sbit  IOCC4_bit at IOCC.B4;
    const register unsigned short int IOCC5 = 5;
    sbit  IOCC5_bit at IOCC.B5;
    const register unsigned short int IOCC6 = 6;
    sbit  IOCC6_bit at IOCC.B6;
    const register unsigned short int IOCC7 = 7;
    sbit  IOCC7_bit at IOCC.B7;

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
    const register unsigned short int LATC4 = 4;
    sbit  LATC4_bit at LATC.B4;
    const register unsigned short int LATC5 = 5;
    sbit  LATC5_bit at LATC.B5;
    const register unsigned short int LATC6 = 6;
    sbit  LATC6_bit at LATC.B6;
    const register unsigned short int LATC7 = 7;
    sbit  LATC7_bit at LATC.B7;

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
    const register unsigned short int TRIGEN = 0;
    sbit  TRIGEN_bit at CTMUCON0.B0;
    const register unsigned short int SIDL = 5;
    sbit  SIDL_bit at CTMUCON0.B5;
    const register unsigned short int ON_ = 7;
    sbit  ON__bit at CTMUCON0.B7;

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

    // CM1CON0 bits
    const register unsigned short int C1R = 2;
    sbit  C1R_bit at CM1CON0.B2;
    const register unsigned short int C1SP = 3;
    sbit  C1SP_bit at CM1CON0.B3;
    const register unsigned short int C1POL = 4;
    sbit  C1POL_bit at CM1CON0.B4;
    const register unsigned short int C1OE = 5;
    sbit  C1OE_bit at CM1CON0.B5;
    const register unsigned short int C1OUT = 6;
    sbit  C1OUT_bit at CM1CON0.B6;
    const register unsigned short int C1ON = 7;
    sbit  C1ON_bit at CM1CON0.B7;
    const register unsigned short int C1CH0 = 0;
    sbit  C1CH0_bit at CM1CON0.B0;
    const register unsigned short int C1CH1 = 1;
    sbit  C1CH1_bit at CM1CON0.B1;
    const register unsigned short int CREF = 2;
    sbit  CREF_bit at CM1CON0.B2;
    const register unsigned short int CPOL = 4;
    sbit  CPOL_bit at CM1CON0.B4;
    const register unsigned short int COE = 5;
    sbit  COE_bit at CM1CON0.B5;
    const register unsigned short int COUT1 = 6;
    sbit  COUT1_bit at CM1CON0.B6;
    const register unsigned short int CON = 7;
    sbit  CON_bit at CM1CON0.B7;
    const register unsigned short int CCH0 = 0;
    sbit  CCH0_bit at CM1CON0.B0;
    const register unsigned short int CCH1 = 1;
    sbit  CCH1_bit at CM1CON0.B1;

    // CM2CON0 bits
    const register unsigned short int C2R = 2;
    sbit  C2R_bit at CM2CON0.B2;
    const register unsigned short int C2SP = 3;
    sbit  C2SP_bit at CM2CON0.B3;
    const register unsigned short int C2POL = 4;
    sbit  C2POL_bit at CM2CON0.B4;
    const register unsigned short int C2OE = 5;
    sbit  C2OE_bit at CM2CON0.B5;
    const register unsigned short int C2OUT = 6;
    sbit  C2OUT_bit at CM2CON0.B6;
    const register unsigned short int C2ON = 7;
    sbit  C2ON_bit at CM2CON0.B7;
    const register unsigned short int C2CH0 = 0;
    sbit  C2CH0_bit at CM2CON0.B0;
    const register unsigned short int C2CH1 = 1;
    sbit  C2CH1_bit at CM2CON0.B1;
    sbit  CREF_CM2CON0_bit at CM2CON0.B2;
    sbit  CPOL_CM2CON0_bit at CM2CON0.B4;
    sbit  COE_CM2CON0_bit at CM2CON0.B5;
    const register unsigned short int COUT2 = 6;
    sbit  COUT2_bit at CM2CON0.B6;
    sbit  CON_CM2CON0_bit at CM2CON0.B7;
    sbit  CCH0_CM2CON0_bit at CM2CON0.B0;
    sbit  CCH1_CM2CON0_bit at CM2CON0.B1;

    // CM2CON1 bits
    const register unsigned short int C2SYNC = 0;
    sbit  C2SYNC_bit at CM2CON1.B0;
    const register unsigned short int C1SYNC = 1;
    sbit  C1SYNC_bit at CM2CON1.B1;
    const register unsigned short int C2HYS = 2;
    sbit  C2HYS_bit at CM2CON1.B2;
    const register unsigned short int C1HYS = 3;
    sbit  C1HYS_bit at CM2CON1.B3;
    const register unsigned short int C2RSEL = 4;
    sbit  C2RSEL_bit at CM2CON1.B4;
    const register unsigned short int C1RSEL = 5;
    sbit  C1RSEL_bit at CM2CON1.B5;
    const register unsigned short int MC2OUT = 6;
    sbit  MC2OUT_bit at CM2CON1.B6;
    const register unsigned short int MC1OUT = 7;
    sbit  MC1OUT_bit at CM2CON1.B7;

    // OSCTUNE bits
    const register unsigned short int SPLLMULT = 7;
    sbit  SPLLMULT_bit at OSCTUNE.B7;
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
    const register unsigned short int ACTIE = 7;
    sbit  ACTIE_bit at PIE1.B7;
    const register unsigned short int SSP1IE = 3;
    sbit  SSP1IE_bit at PIE1.B3;
    const register unsigned short int TX1IE = 4;
    sbit  TX1IE_bit at PIE1.B4;
    const register unsigned short int RC1IE = 5;
    sbit  RC1IE_bit at PIE1.B5;
    const register unsigned short int STIE = 7;
    sbit  STIE_bit at PIE1.B7;

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
    const register unsigned short int ACTIF = 7;
    sbit  ACTIF_bit at PIR1.B7;
    const register unsigned short int SSP1IF = 3;
    sbit  SSP1IF_bit at PIR1.B3;
    const register unsigned short int TX1IF = 4;
    sbit  TX1IF_bit at PIR1.B4;
    const register unsigned short int RC1IF = 5;
    sbit  RC1IF_bit at PIR1.B5;
    const register unsigned short int STIF = 7;
    sbit  STIF_bit at PIR1.B7;

    // IPR1 bits
    const register unsigned short int TMR1IP = 0;
    sbit  TMR1IP_bit at IPR1.B0;
    const register unsigned short int TMR2IP = 1;
    sbit  TMR2IP_bit at IPR1.B1;
    const register unsigned short int CCP1IP = 2;
    sbit  CCP1IP_bit at IPR1.B2;
    const register unsigned short int SSPIP = 3;
    sbit  SSPIP_bit at IPR1.B3;
    const register unsigned short int TXIP = 4;
    sbit  TXIP_bit at IPR1.B4;
    const register unsigned short int RCIP = 5;
    sbit  RCIP_bit at IPR1.B5;
    const register unsigned short int ADIP = 6;
    sbit  ADIP_bit at IPR1.B6;
    const register unsigned short int ACTIP = 7;
    sbit  ACTIP_bit at IPR1.B7;
    const register unsigned short int SSP1IP = 3;
    sbit  SSP1IP_bit at IPR1.B3;
    const register unsigned short int TX1IP = 4;
    sbit  TX1IP_bit at IPR1.B4;
    const register unsigned short int RC1IP = 5;
    sbit  RC1IP_bit at IPR1.B5;
    const register unsigned short int STIP = 7;
    sbit  STIP_bit at IPR1.B7;

    // PIE2 bits
    const register unsigned short int CCP2IE = 0;
    sbit  CCP2IE_bit at PIE2.B0;
    const register unsigned short int TMR3IE = 1;
    sbit  TMR3IE_bit at PIE2.B1;
    const register unsigned short int HLVDIE = 2;
    sbit  HLVDIE_bit at PIE2.B2;
    const register unsigned short int BCLIE = 3;
    sbit  BCLIE_bit at PIE2.B3;
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
    const register unsigned short int BCL1IE = 3;
    sbit  BCL1IE_bit at PIE2.B3;
    const register unsigned short int CM2IE = 5;
    sbit  CM2IE_bit at PIE2.B5;
    const register unsigned short int CM1IE = 6;
    sbit  CM1IE_bit at PIE2.B6;

    // PIR2 bits
    const register unsigned short int CCP2IF = 0;
    sbit  CCP2IF_bit at PIR2.B0;
    const register unsigned short int TMR3IF = 1;
    sbit  TMR3IF_bit at PIR2.B1;
    const register unsigned short int HLVDIF = 2;
    sbit  HLVDIF_bit at PIR2.B2;
    const register unsigned short int BCLIF = 3;
    sbit  BCLIF_bit at PIR2.B3;
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
    const register unsigned short int BCL1IF = 3;
    sbit  BCL1IF_bit at PIR2.B3;
    const register unsigned short int CM2IF = 5;
    sbit  CM2IF_bit at PIR2.B5;
    const register unsigned short int CM1IF = 6;
    sbit  CM1IF_bit at PIR2.B6;

    // IPR2 bits
    const register unsigned short int CCP2IP = 0;
    sbit  CCP2IP_bit at IPR2.B0;
    const register unsigned short int TMR3IP = 1;
    sbit  TMR3IP_bit at IPR2.B1;
    const register unsigned short int HLVDIP = 2;
    sbit  HLVDIP_bit at IPR2.B2;
    const register unsigned short int BCLIP = 3;
    sbit  BCLIP_bit at IPR2.B3;
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
    const register unsigned short int BCL1IP = 3;
    sbit  BCL1IP_bit at IPR2.B3;
    const register unsigned short int CM2IP = 5;
    sbit  CM2IP_bit at IPR2.B5;
    const register unsigned short int CM1IP = 6;
    sbit  CM1IP_bit at IPR2.B6;

    // PIE3 bits
    const register unsigned short int TMR1GIE = 0;
    sbit  TMR1GIE_bit at PIE3.B0;
    const register unsigned short int TMR3GIE = 1;
    sbit  TMR3GIE_bit at PIE3.B1;
    const register unsigned short int USBIE = 2;
    sbit  USBIE_bit at PIE3.B2;
    const register unsigned short int CTMUIE = 3;
    sbit  CTMUIE_bit at PIE3.B3;

    // PIR3 bits
    const register unsigned short int TMR1GIF = 0;
    sbit  TMR1GIF_bit at PIR3.B0;
    const register unsigned short int TMR3GIF = 1;
    sbit  TMR3GIF_bit at PIR3.B1;
    const register unsigned short int USBIF = 2;
    sbit  USBIF_bit at PIR3.B2;
    const register unsigned short int CTMUIF = 3;
    sbit  CTMUIF_bit at PIR3.B3;

    // IPR3 bits
    const register unsigned short int TMR1GIP = 0;
    sbit  TMR1GIP_bit at IPR3.B0;
    const register unsigned short int TMR3GIP = 1;
    sbit  TMR3GIP_bit at IPR3.B1;
    const register unsigned short int USBIP = 2;
    sbit  USBIP_bit at IPR3.B2;
    const register unsigned short int CTMUIP = 3;
    sbit  CTMUIP_bit at IPR3.B3;

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

    // RCSTA, RCSTA1 bits
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
    const register unsigned short int ADEN = 3;
    sbit  ADEN_bit at RCSTA.B3;

    // TXSTA, TXSTA1 bits
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

    // SPBRG, SPBRG1 bits
    const register unsigned short int BRG0 = 0;
    sbit  BRG0_bit at SPBRG.B0;
    const register unsigned short int BRG1 = 1;
    sbit  BRG1_bit at SPBRG.B1;
    const register unsigned short int BRG2 = 2;
    sbit  BRG2_bit at SPBRG.B2;
    const register unsigned short int BRG3 = 3;
    sbit  BRG3_bit at SPBRG.B3;
    const register unsigned short int BRG4 = 4;
    sbit  BRG4_bit at SPBRG.B4;
    const register unsigned short int BRG5 = 5;
    sbit  BRG5_bit at SPBRG.B5;
    const register unsigned short int BRG6 = 6;
    sbit  BRG6_bit at SPBRG.B6;
    const register unsigned short int BRG7 = 7;
    sbit  BRG7_bit at SPBRG.B7;

    // SPBRGH, SPBRGH1 bits
    const register unsigned short int BRG8 = 0;
    sbit  BRG8_bit at SPBRGH.B0;
    const register unsigned short int BRG9 = 1;
    sbit  BRG9_bit at SPBRGH.B1;
    const register unsigned short int BRG10 = 2;
    sbit  BRG10_bit at SPBRGH.B2;
    const register unsigned short int BRG11 = 3;
    sbit  BRG11_bit at SPBRGH.B3;
    const register unsigned short int BRG12 = 4;
    sbit  BRG12_bit at SPBRGH.B4;
    const register unsigned short int BRG13 = 5;
    sbit  BRG13_bit at SPBRGH.B5;
    const register unsigned short int BRG14 = 6;
    sbit  BRG14_bit at SPBRGH.B6;
    const register unsigned short int BRG15 = 7;
    sbit  BRG15_bit at SPBRGH.B7;

    // T3CON bits
    const register unsigned short int TMR3ON = 0;
    sbit  TMR3ON_bit at T3CON.B0;
    const register unsigned short int RD16 = 1;
    sbit  RD16_bit at T3CON.B1;
    const register unsigned short int NOT_T3SYNC = 2;
    sbit  NOT_T3SYNC_bit at T3CON.B2;
    const register unsigned short int SOSCEN = 3;
    sbit  SOSCEN_bit at T3CON.B3;
    const register unsigned short int T3RD16 = 1;
    sbit  T3RD16_bit at T3CON.B1;
    const register unsigned short int T3SYNC = 2;
    sbit  T3SYNC_bit at T3CON.B2;
    const register unsigned short int T3SOSCEN = 3;
    sbit  T3SOSCEN_bit at T3CON.B3;
    const register unsigned short int T3CKPS0 = 4;
    sbit  T3CKPS0_bit at T3CON.B4;
    const register unsigned short int T3CKPS1 = 5;
    sbit  T3CKPS1_bit at T3CON.B5;
    const register unsigned short int TMR3CS0 = 6;
    sbit  TMR3CS0_bit at T3CON.B6;
    const register unsigned short int TMR3CS1 = 7;
    sbit  TMR3CS1_bit at T3CON.B7;
    const register unsigned short int T3OSCEN = 3;
    sbit  T3OSCEN_bit at T3CON.B3;

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
    const register unsigned short int T3DONE = 3;
    sbit  T3DONE_bit at T3GCON.B3;
    const register unsigned short int T3GGO_NOT_DONE = 3;
    sbit  T3GGO_NOT_DONE_bit at T3GCON.B3;

    // ACTCON, STCON bits
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
    const register unsigned short int STOR = 1;
    sbit  STOR_bit at ACTCON.B1;
    const register unsigned short int STLOCK = 3;
    sbit  STLOCK_bit at ACTCON.B3;
    const register unsigned short int STSRC = 4;
    sbit  STSRC_bit at ACTCON.B4;
    const register unsigned short int STUD = 6;
    sbit  STUD_bit at ACTCON.B6;
    const register unsigned short int STEN = 7;
    sbit  STEN_bit at ACTCON.B7;
    const register unsigned short int ACTOR = 1;
    sbit  ACTOR_bit at ACTCON.B1;
    const register unsigned short int ACTD = 6;
    sbit  ACTD_bit at ACTCON.B6;
    const register unsigned short int ACTSEL = 7;
    sbit  ACTSEL_bit at ACTCON.B7;

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
    const register unsigned short int CCP1ASE = 7;
    sbit  CCP1ASE_bit at ECCP1AS.B7;
    const register unsigned short int PSSBD0 = 0;
    sbit  PSSBD0_bit at ECCP1AS.B0;
    const register unsigned short int PSSBD1 = 1;
    sbit  PSSBD1_bit at ECCP1AS.B1;
    const register unsigned short int PSSAC0 = 2;
    sbit  PSSAC0_bit at ECCP1AS.B2;
    const register unsigned short int PSSAC1 = 3;
    sbit  PSSAC1_bit at ECCP1AS.B3;

    // ECCP1DEL, PWM1CON bits
    const register unsigned short int P1RSEN = 7;
    sbit  P1RSEN_bit at ECCP1DEL.B7;
    const register unsigned short int PDC0 = 0;
    sbit  PDC0_bit at ECCP1DEL.B0;
    const register unsigned short int PDC1 = 1;
    sbit  PDC1_bit at ECCP1DEL.B1;
    const register unsigned short int PDC2 = 2;
    sbit  PDC2_bit at ECCP1DEL.B2;
    const register unsigned short int PDC3 = 3;
    sbit  PDC3_bit at ECCP1DEL.B3;
    const register unsigned short int PDC4 = 4;
    sbit  PDC4_bit at ECCP1DEL.B4;
    const register unsigned short int PDC5 = 5;
    sbit  PDC5_bit at ECCP1DEL.B5;
    const register unsigned short int PDC6 = 6;
    sbit  PDC6_bit at ECCP1DEL.B6;
    const register unsigned short int PR1SEN = 7;
    sbit  PR1SEN_bit at ECCP1DEL.B7;

    // BAUDCON, BAUDCON1 bits
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
    const register unsigned short int CKTXP = 4;
    sbit  CKTXP_bit at BAUDCON.B4;
    const register unsigned short int DTRXP = 5;
    sbit  DTRXP_bit at BAUDCON.B5;
    const register unsigned short int SCKP = 4;
    sbit  SCKP_bit at BAUDCON.B4;
    const register unsigned short int RCMT = 6;
    sbit  RCMT_bit at BAUDCON.B6;

    // PSTR1CON bits
    const register unsigned short int STRA = 0;
    sbit  STRA_bit at PSTR1CON.B0;
    const register unsigned short int STRB = 1;
    sbit  STRB_bit at PSTR1CON.B1;
    const register unsigned short int STRC = 2;
    sbit  STRC_bit at PSTR1CON.B2;
    const register unsigned short int STRD = 3;
    sbit  STRD_bit at PSTR1CON.B3;
    const register unsigned short int STRSYNC = 4;
    sbit  STRSYNC_bit at PSTR1CON.B4;
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
    const register unsigned short int DONE = 1;
    sbit  DONE_bit at ADCON0.B1;
    const register unsigned short int GO = 1;
    sbit  GO_bit at ADCON0.B1;
    const register unsigned short int NOT_DONE = 1;
    sbit  NOT_DONE_bit at ADCON0.B1;

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

    // SSP1CON, SSP1CON1, SSPCON bits
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
    const register unsigned short int T1DONE = 3;
    sbit  T1DONE_bit at T1GCON.B3;
    const register unsigned short int T1GGO_NOT_DONE = 3;
    sbit  T1GGO_NOT_DONE_bit at T1GCON.B3;

    // T1CON bits
    const register unsigned short int TMR1ON = 0;
    sbit  TMR1ON_bit at T1CON.B0;
    sbit  RD16_T1CON_bit at T1CON.B1;
    const register unsigned short int NOT_T1SYNC = 2;
    sbit  NOT_T1SYNC_bit at T1CON.B2;
    sbit  SOSCEN_T1CON_bit at T1CON.B3;
    const register unsigned short int T1RD16 = 1;
    sbit  T1RD16_bit at T1CON.B1;
    const register unsigned short int T1SYNC = 2;
    sbit  T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1SOSCEN = 3;
    sbit  T1SOSCEN_bit at T1CON.B3;
    const register unsigned short int T1CKPS0 = 4;
    sbit  T1CKPS0_bit at T1CON.B4;
    const register unsigned short int T1CKPS1 = 5;
    sbit  T1CKPS1_bit at T1CON.B5;
    const register unsigned short int TMR1CS0 = 6;
    sbit  TMR1CS0_bit at T1CON.B6;
    const register unsigned short int TMR1CS1 = 7;
    sbit  TMR1CS1_bit at T1CON.B7;
    const register unsigned short int T1OSCEN = 3;
    sbit  T1OSCEN_bit at T1CON.B3;

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
    const register unsigned short int HFIOFR = 1;
    sbit  HFIOFR_bit at OSCCON2.B1;
    const register unsigned short int PRISD = 2;
    sbit  PRISD_bit at OSCCON2.B2;
    const register unsigned short int SOSCGO = 3;
    sbit  SOSCGO_bit at OSCCON2.B3;
    const register unsigned short int PLLEN = 4;
    sbit  PLLEN_bit at OSCCON2.B4;
    const register unsigned short int INTSRC = 5;
    sbit  INTSRC_bit at OSCCON2.B5;
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
    const register unsigned short int IOCIP = 0;
    sbit  IOCIP_bit at INTCON2.B0;
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
    const register unsigned short int T0IP = 2;
    sbit  T0IP_bit at INTCON2.B2;
    const register unsigned short int RBPU = 7;
    sbit  RBPU_bit at INTCON2.B7;

    // INTCON bits
    const register unsigned short int IOCIF = 0;
    sbit  IOCIF_bit at INTCON.B0;
    const register unsigned short int INT0IF = 1;
    sbit  INT0IF_bit at INTCON.B1;
    const register unsigned short int TMR0IF = 2;
    sbit  TMR0IF_bit at INTCON.B2;
    const register unsigned short int IOCIE = 3;
    sbit  IOCIE_bit at INTCON.B3;
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

    // VREGCON bits
    const register unsigned short int VREGPM1 = 1;
    sbit  VREGPM1_bit at VREGCON.B1;
    const register unsigned short int VREGPM0 = 0;
    sbit  VREGPM0_bit at VREGCON.B0;

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
