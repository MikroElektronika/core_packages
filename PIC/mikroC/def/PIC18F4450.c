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

sfr unsigned short volatile UFRML            absolute 0x0F66;
sfr unsigned short volatile UFRMH            absolute 0x0F67;
sfr unsigned short volatile UIR              absolute 0x0F68;
sfr unsigned short volatile UIE              absolute 0x0F69;
sfr unsigned short volatile UEIR             absolute 0x0F6A;
sfr unsigned short volatile UEIE             absolute 0x0F6B;
sfr unsigned short volatile USTAT            absolute 0x0F6C;
sfr unsigned short volatile UCON             absolute 0x0F6D;
sfr unsigned short volatile UADDR            absolute 0x0F6E;
sfr unsigned short volatile UCFG             absolute 0x0F6F;
sfr unsigned short volatile UEP0             absolute 0x0F70;
sfr unsigned short volatile UEP1             absolute 0x0F71;
sfr unsigned short volatile UEP2             absolute 0x0F72;
sfr unsigned short volatile UEP3             absolute 0x0F73;
sfr unsigned short volatile UEP4             absolute 0x0F74;
sfr unsigned short volatile UEP5             absolute 0x0F75;
sfr unsigned short volatile UEP6             absolute 0x0F76;
sfr unsigned short volatile UEP7             absolute 0x0F77;
sfr unsigned short volatile UEP8             absolute 0x0F78;
sfr unsigned short volatile UEP9             absolute 0x0F79;
sfr unsigned short volatile UEP10            absolute 0x0F7A;
sfr unsigned short volatile UEP11            absolute 0x0F7B;
sfr unsigned short volatile UEP12            absolute 0x0F7C;
sfr unsigned short volatile UEP13            absolute 0x0F7D;
sfr unsigned short volatile UEP14            absolute 0x0F7E;
sfr unsigned short volatile UEP15            absolute 0x0F7F;
sfr unsigned short volatile LATA             absolute 0x0F89;
sfr unsigned short volatile LATB             absolute 0x0F8A;
sfr unsigned short volatile LATC             absolute 0x0F8B;
sfr unsigned short volatile LATD             absolute 0x0F8C;
sfr unsigned short volatile LATE             absolute 0x0F8D;
sfr unsigned short volatile PIE1             absolute 0x0F9D;
sfr unsigned short volatile PIR1             absolute 0x0F9E;
sfr unsigned short volatile IPR1             absolute 0x0F9F;
sfr unsigned short volatile PIE2             absolute 0x0FA0;
sfr unsigned short volatile PIR2             absolute 0x0FA1;
sfr unsigned short volatile IPR2             absolute 0x0FA2;
sfr unsigned short volatile EECON1           absolute 0x0FA6;
sfr unsigned short volatile EECON2           absolute 0x0FA7;
sfr unsigned short volatile RCSTA            absolute 0x0FAB;
sfr unsigned short volatile TXSTA            absolute 0x0FAC;
sfr unsigned short volatile TXREG            absolute 0x0FAD;
sfr unsigned short volatile RCREG            absolute 0x0FAE;
sfr unsigned short          SPBRG            absolute 0x0FAF;
sfr unsigned short          SPBRGH           absolute 0x0FB0;
sfr unsigned short          BAUDCON          absolute 0x0FB8;
sfr unsigned short          BAUDCTL          absolute 0x0FB8;
sfr unsigned short volatile CCP1CON          absolute 0x0FBD;
sfr unsigned int   volatile CCPR1            absolute 0x0FBE;
sfr unsigned short volatile CCPR1L           absolute 0x0FBE;
sfr unsigned short volatile CCPR1H           absolute 0x0FBF;
sfr unsigned short volatile ADCON2           absolute 0x0FC0;
sfr unsigned short volatile ADCON1           absolute 0x0FC1;
sfr unsigned short volatile ADCON0           absolute 0x0FC2;
sfr unsigned short volatile ADRESL           absolute 0x0FC3;
sfr unsigned short volatile ADRESH           absolute 0x0FC4;
sfr unsigned short volatile T2CON            absolute 0x0FCA;
sfr unsigned short volatile PR2              absolute 0x0FCB;
sfr unsigned short volatile TMR2             absolute 0x0FCC;
sfr unsigned short volatile T1CON            absolute 0x0FCD;
sfr unsigned short volatile TMR1L            absolute 0x0FCE;
sfr unsigned short volatile TMR1H            absolute 0x0FCF;
sfr unsigned short volatile RCON             absolute 0x0FD0;
sfr unsigned short          WDTCON           absolute 0x0FD1;
sfr unsigned short volatile HLVDCON          absolute 0x0FD2;
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
sfr unsigned short volatile PORTC            absolute 0x0F82;
sfr unsigned short volatile PORTD            absolute 0x0F83;
sfr unsigned short volatile PORTE            absolute 0x0F84;
sfr unsigned short volatile TRISA            absolute 0x0F92;
sfr unsigned short volatile TRISB            absolute 0x0F93;
sfr unsigned short volatile TRISC            absolute 0x0F94;
sfr unsigned short volatile TRISD            absolute 0x0F95;
sfr unsigned short volatile TRISE            absolute 0x0F96;
sfr unsigned int   volatile ADRES            absolute 0x0FC3;
sfr unsigned int            PROD             absolute 0x0FF3;
sfr unsigned short          PRODL            absolute 0x0FF3;
sfr unsigned short          PRODH            absolute 0x0FF4;
sfr unsigned short volatile TOSL             absolute 0x0FFD;
sfr unsigned short volatile TOSH             absolute 0x0FFE;
sfr unsigned short volatile TOSU             absolute 0x0FFF;

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
    const register unsigned short int RCV = 4;
    sbit  RCV_bit at PORTA.B4;

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
    const register unsigned short int PGM = 5;
    sbit  PGM_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int PGC = 6;
    sbit  PGC_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int PGD = 7;
    sbit  PGD_bit at PORTB.B7;

    // Alternative bit function
    const register unsigned short int VMO = 2;
    sbit  VMO_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int VPO = 3;
    sbit  VPO_bit at PORTB.B3;

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
    const register unsigned short int T1CKI = 0;
    sbit  T1CKI_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int NOT_UOE = 1;
    sbit  NOT_UOE_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int P1A = 2;
    sbit  P1A_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int CK = 6;
    sbit  CK_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int UOE = 1;
    sbit  UOE_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int AN5 = 0;
    sbit  AN5_bit at PORTE.B0;

    // Alternative bit function
    const register unsigned short int AN6 = 1;
    sbit  AN6_bit at PORTE.B1;

    // Alternative bit function
    const register unsigned short int AN7 = 2;
    sbit  AN7_bit at PORTE.B2;

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

    // PIE1 bits
    const register unsigned short int TMR1IE = 0;
    sbit  TMR1IE_bit at PIE1.B0;
    const register unsigned short int TMR2IE = 1;
    sbit  TMR2IE_bit at PIE1.B1;
    const register unsigned short int CCP1IE = 2;
    sbit  CCP1IE_bit at PIE1.B2;
    const register unsigned short int TXIE = 4;
    sbit  TXIE_bit at PIE1.B4;
    const register unsigned short int RCIE = 5;
    sbit  RCIE_bit at PIE1.B5;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;

    // PIR1 bits
    const register unsigned short int TMR1IF = 0;
    sbit  TMR1IF_bit at PIR1.B0;
    const register unsigned short int TMR2IF = 1;
    sbit  TMR2IF_bit at PIR1.B1;
    const register unsigned short int CCP1IF = 2;
    sbit  CCP1IF_bit at PIR1.B2;
    const register unsigned short int TXIF = 4;
    sbit  TXIF_bit at PIR1.B4;
    const register unsigned short int RCIF = 5;
    sbit  RCIF_bit at PIR1.B5;
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;

    // IPR1 bits
    const register unsigned short int TMR1IP = 0;
    sbit  TMR1IP_bit at IPR1.B0;
    const register unsigned short int TMR2IP = 1;
    sbit  TMR2IP_bit at IPR1.B1;
    const register unsigned short int CCP1IP = 2;
    sbit  CCP1IP_bit at IPR1.B2;
    const register unsigned short int TXIP = 4;
    sbit  TXIP_bit at IPR1.B4;
    const register unsigned short int RCIP = 5;
    sbit  RCIP_bit at IPR1.B5;
    const register unsigned short int ADIP = 6;
    sbit  ADIP_bit at IPR1.B6;

    // PIE2 bits
    const register unsigned short int HLVDIE = 2;
    sbit  HLVDIE_bit at PIE2.B2;
    const register unsigned short int USBIE = 5;
    sbit  USBIE_bit at PIE2.B5;
    const register unsigned short int OSCFIE = 7;
    sbit  OSCFIE_bit at PIE2.B7;
    const register unsigned short int LVDIE = 2;
    sbit  LVDIE_bit at PIE2.B2;

    // PIR2 bits
    const register unsigned short int HLVDIF = 2;
    sbit  HLVDIF_bit at PIR2.B2;
    const register unsigned short int USBIF = 5;
    sbit  USBIF_bit at PIR2.B5;
    const register unsigned short int OSCFIF = 7;
    sbit  OSCFIF_bit at PIR2.B7;
    const register unsigned short int LVDIF = 2;
    sbit  LVDIF_bit at PIR2.B2;

    // IPR2 bits
    const register unsigned short int HLVDIP = 2;
    sbit  HLVDIP_bit at IPR2.B2;
    const register unsigned short int USBIP = 5;
    sbit  USBIP_bit at IPR2.B5;
    const register unsigned short int OSCFIP = 7;
    sbit  OSCFIP_bit at IPR2.B7;
    const register unsigned short int LVDIP = 2;
    sbit  LVDIP_bit at IPR2.B2;

    // EECON1 bits
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
    const register unsigned short int ADEN = 3;
    sbit  ADEN_bit at RCSTA.B3;

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
    const register unsigned short int VCFG1 = 5;
    sbit  VCFG1_bit at ADCON1.B5;

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
    const register unsigned short int DONE = 1;
    sbit  DONE_bit at ADCON0.B1;
    const register unsigned short int GO = 1;
    sbit  GO_bit at ADCON0.B1;
    const register unsigned short int NOT_DONE = 1;
    sbit  NOT_DONE_bit at ADCON0.B1;

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
    const register unsigned short int T1SYNC = 2;
    sbit  T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1CKPS0 = 4;
    sbit  T1CKPS0_bit at T1CON.B4;
    const register unsigned short int T1CKPS1 = 5;
    sbit  T1CKPS1_bit at T1CON.B5;

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
    const register unsigned short int NOT_IPEN = 7;
    sbit  NOT_IPEN_bit at RCON.B7;

    // WDTCON bits
    const register unsigned short int SWDTEN = 0;
    sbit  SWDTEN_bit at WDTCON.B0;
    const register unsigned short int SWDTE = 0;
    sbit  SWDTE_bit at WDTCON.B0;

    // HLVDCON, LVDCON bits
    const register unsigned short int HLVDEN = 4;
    sbit  HLVDEN_bit at HLVDCON.B4;
    const register unsigned short int IRVST = 5;
    sbit  IRVST_bit at HLVDCON.B5;
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

    // OSCCON bits
    const register unsigned short int OSTS = 3;
    sbit  OSTS_bit at OSCCON.B3;
    const register unsigned short int IDLEN = 7;
    sbit  IDLEN_bit at OSCCON.B7;
    const register unsigned short int SCS0 = 0;
    sbit  SCS0_bit at OSCCON.B0;
    const register unsigned short int SCS1 = 1;
    sbit  SCS1_bit at OSCCON.B1;

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

    // PORTA bits
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
    const register unsigned short int RE3 = 3;
    sbit  RE3_bit at PORTE.B3;
    const register unsigned short int RE2 = 2;
    sbit  RE2_bit at PORTE.B2;
    const register unsigned short int RE1 = 1;
    sbit  RE1_bit at PORTE.B1;
    const register unsigned short int RE0 = 0;
    sbit  RE0_bit at PORTE.B0;

    // TRISA bits
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
    const register unsigned short int TRISE2 = 2;
    sbit  TRISE2_bit at TRISE.B2;
    const register unsigned short int TRISE1 = 1;
    sbit  TRISE1_bit at TRISE.B1;
    const register unsigned short int TRISE0 = 0;
    sbit  TRISE0_bit at TRISE.B0;

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
