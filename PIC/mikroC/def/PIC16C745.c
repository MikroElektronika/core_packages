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
rx unsigned short R0 ;
rx unsigned short R1 ;
rx unsigned short R2 ;
rx unsigned short R3 ;
rx unsigned short R4 ;
rx unsigned short R5 ;
rx unsigned short R6 ;
rx unsigned short R7 ;
rx unsigned short R8 ;
rx unsigned short R9 ;
rx unsigned short R10;
rx unsigned short R11;
rx unsigned short R12;
rx unsigned short R13;
rx unsigned short R14;
rx unsigned short R15;

const register unsigned short int W = 0;
const register unsigned short int F = 1;

// Special function registers (SFRs)

const signed int   PORT_TO_TRIS_OFFSET    =     128;

const unsigned short ICS_AUTO                  =     0;
const unsigned short ICS_OFF                   =     3;

sfr unsigned short volatile INDF             absolute 0x0000;
sfr unsigned short volatile TMR0             absolute 0x0001;
sfr unsigned short volatile PCL              absolute 0x0002;
sfr unsigned short volatile STATUS           absolute 0x0003;
sfr unsigned short          FSR              absolute 0x0004;
register unsigned short     *FSRPTR          absolute 0x0004;
sfr unsigned short volatile PCLATH           absolute 0x000A;
sfr unsigned short volatile INTCON           absolute 0x000B;
sfr unsigned short volatile PIR1             absolute 0x000C;
sfr unsigned short volatile PIR2             absolute 0x000D;
sfr unsigned short volatile TMR1L            absolute 0x000E;
sfr unsigned short volatile TMR1H            absolute 0x000F;
sfr unsigned short volatile T1CON            absolute 0x0010;
sfr unsigned short volatile TMR2             absolute 0x0011;
sfr unsigned short volatile T2CON            absolute 0x0012;
sfr unsigned int   volatile CCPR1            absolute 0x0015;
sfr unsigned short volatile CCPR1L           absolute 0x0015;
sfr unsigned short volatile CCPR1H           absolute 0x0016;
sfr unsigned short volatile CCP1CON          absolute 0x0017;
sfr unsigned short volatile RCSTA            absolute 0x0018;
sfr unsigned short volatile TXREG            absolute 0x0019;
sfr unsigned short volatile RCREG            absolute 0x001A;
sfr unsigned short volatile CCP2CON          absolute 0x001D;
sfr unsigned short volatile ADCON0           absolute 0x001F;
sfr unsigned short volatile OPTION_REG       absolute 0x0081;
sfr unsigned short volatile PIE1             absolute 0x008C;
sfr unsigned short volatile PIE2             absolute 0x008D;
sfr unsigned short volatile PCON             absolute 0x008E;
sfr unsigned short volatile PR2              absolute 0x0092;
sfr unsigned short volatile TXSTA            absolute 0x0098;
sfr unsigned short          SPBRG            absolute 0x0099;
sfr unsigned short volatile ADCON1           absolute 0x009F;
sfr unsigned short volatile UIR              absolute 0x0190;
sfr unsigned short volatile UIE              absolute 0x0191;
sfr unsigned short volatile UEIR             absolute 0x0192;
sfr unsigned short volatile UEIE             absolute 0x0193;
sfr unsigned short volatile USTAT            absolute 0x0194;
sfr unsigned short volatile UCTRL            absolute 0x0195;
sfr unsigned short volatile UADDR            absolute 0x0196;
sfr unsigned short volatile USWSTAT          absolute 0x0197;
sfr unsigned short volatile UEP0             absolute 0x0198;
sfr unsigned short volatile UEP1             absolute 0x0199;
sfr unsigned short volatile UEP2             absolute 0x019A;
sfr unsigned short          BD0OST           absolute 0x01A0;
sfr unsigned short          BD0OBC           absolute 0x01A1;
sfr unsigned short          BD0OAL           absolute 0x01A2;
sfr unsigned short          BD0IST           absolute 0x01A4;
sfr unsigned short          BD0IBC           absolute 0x01A5;
sfr unsigned short          BD0IAL           absolute 0x01A6;
sfr unsigned short          BD1OST           absolute 0x01A8;
sfr unsigned short          BD1OBC           absolute 0x01A9;
sfr unsigned short          BD1OAL           absolute 0x01AA;
sfr unsigned short          BD1IST           absolute 0x01AC;
sfr unsigned short          BD1IBC           absolute 0x01AD;
sfr unsigned short          BD1IAL           absolute 0x01AE;
sfr unsigned short          BD2OST           absolute 0x01B0;
sfr unsigned short          BD2OBC           absolute 0x01B1;
sfr unsigned short          BD2OAL           absolute 0x01B2;
sfr unsigned short          BD2IST           absolute 0x01B4;
sfr unsigned short          BD2IBC           absolute 0x01B5;
sfr unsigned short volatile BD2IAL           absolute 0x01B6;
sfr unsigned short volatile PORTA            absolute 0x0005;
sfr unsigned short volatile PORTB            absolute 0x0006;
sfr unsigned short volatile PORTC            absolute 0x0007;
sfr unsigned int   volatile CCPR2            absolute 0x001B;
sfr unsigned short volatile CCPR2L           absolute 0x001B;
sfr unsigned short volatile CCPR2H           absolute 0x001C;
sfr unsigned short volatile ADRES            absolute 0x001E;
sfr unsigned short volatile TRISA            absolute 0x0085;
sfr unsigned short volatile TRISB            absolute 0x0086;
sfr unsigned short volatile TRISC            absolute 0x0087;

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
    const register unsigned short int IRP = 7;
    sbit  IRP_bit at STATUS.B7;
    const register unsigned short int RP0 = 5;
    sbit  RP0_bit at STATUS.B5;
    const register unsigned short int RP1 = 6;
    sbit  RP1_bit at STATUS.B6;

    // INTCON bits
    const register unsigned short int RBIF = 0;
    sbit  RBIF_bit at INTCON.B0;
    const register unsigned short int INTF = 1;
    sbit  INTF_bit at INTCON.B1;
    const register unsigned short int T0IF = 2;
    sbit  T0IF_bit at INTCON.B2;
    const register unsigned short int RBIE = 3;
    sbit  RBIE_bit at INTCON.B3;
    const register unsigned short int INTE = 4;
    sbit  INTE_bit at INTCON.B4;
    const register unsigned short int T0IE = 5;
    sbit  T0IE_bit at INTCON.B5;
    const register unsigned short int PEIE = 6;
    sbit  PEIE_bit at INTCON.B6;
    const register unsigned short int GIE = 7;
    sbit  GIE_bit at INTCON.B7;
    const register unsigned short int TMR0IF = 2;
    sbit  TMR0IF_bit at INTCON.B2;
    const register unsigned short int TMR0IE = 5;
    sbit  TMR0IE_bit at INTCON.B5;

    // PIR1 bits
    const register unsigned short int TMR1IF = 0;
    sbit  TMR1IF_bit at PIR1.B0;
    const register unsigned short int TMR2IF = 1;
    sbit  TMR2IF_bit at PIR1.B1;
    const register unsigned short int CCP1IF = 2;
    sbit  CCP1IF_bit at PIR1.B2;
    const register unsigned short int USBIF = 3;
    sbit  USBIF_bit at PIR1.B3;
    const register unsigned short int TXIF = 4;
    sbit  TXIF_bit at PIR1.B4;
    const register unsigned short int RCIF = 5;
    sbit  RCIF_bit at PIR1.B5;
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;

    // PIR2 bits
    const register unsigned short int CCP2IF = 0;
    sbit  CCP2IF_bit at PIR2.B0;

    // T1CON bits
    const register unsigned short int TMR1ON = 0;
    sbit  TMR1ON_bit at T1CON.B0;
    const register unsigned short int TMR1CS = 1;
    sbit  TMR1CS_bit at T1CON.B1;
    const register unsigned short int NOT_T1SYNC = 2;
    sbit  NOT_T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1OSCEN = 3;
    sbit  T1OSCEN_bit at T1CON.B3;
    const register unsigned short int T1INSYNC = 2;
    sbit  T1INSYNC_bit at T1CON.B2;
    const register unsigned short int T1CKPS0 = 4;
    sbit  T1CKPS0_bit at T1CON.B4;
    const register unsigned short int T1CKPS1 = 5;
    sbit  T1CKPS1_bit at T1CON.B5;

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

    // RCSTA bits
    const register unsigned short int RX9D = 0;
    sbit  RX9D_bit at RCSTA.B0;
    const register unsigned short int OERR = 1;
    sbit  OERR_bit at RCSTA.B1;
    const register unsigned short int FERR = 2;
    sbit  FERR_bit at RCSTA.B2;
    const register unsigned short int CREN = 4;
    sbit  CREN_bit at RCSTA.B4;
    const register unsigned short int SREN = 5;
    sbit  SREN_bit at RCSTA.B5;
    const register unsigned short int RX9 = 6;
    sbit  RX9_bit at RCSTA.B6;
    const register unsigned short int SPEN = 7;
    sbit  SPEN_bit at RCSTA.B7;
    const register unsigned short int RCD8 = 0;
    sbit  RCD8_bit at RCSTA.B0;
    const register unsigned short int RC9 = 6;
    sbit  RC9_bit at RCSTA.B6;
    const register unsigned short int NOT_RC8 = 6;
    sbit  NOT_RC8_bit at RCSTA.B6;
    const register unsigned short int RC8_9 = 6;
    sbit  RC8_9_bit at RCSTA.B6;

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

    // ADCON0 bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON0.B0;
    const register unsigned short int GO_NOT_DONE = 2;
    sbit  GO_NOT_DONE_bit at ADCON0.B2;
    const register unsigned short int GO = 2;
    sbit  GO_bit at ADCON0.B2;
    const register unsigned short int CHS0 = 3;
    sbit  CHS0_bit at ADCON0.B3;
    const register unsigned short int CHS1 = 4;
    sbit  CHS1_bit at ADCON0.B4;
    const register unsigned short int CHS2 = 5;
    sbit  CHS2_bit at ADCON0.B5;
    const register unsigned short int ADCS0 = 6;
    sbit  ADCS0_bit at ADCON0.B6;
    const register unsigned short int ADCS1 = 7;
    sbit  ADCS1_bit at ADCON0.B7;
    const register unsigned short int NOT_DONE = 2;
    sbit  NOT_DONE_bit at ADCON0.B2;
    const register unsigned short int GO_DONE = 2;
    sbit  GO_DONE_bit at ADCON0.B2;

    // OPTION_REG bits
    const register unsigned short int PSA = 3;
    sbit  PSA_bit at OPTION_REG.B3;
    const register unsigned short int T0SE = 4;
    sbit  T0SE_bit at OPTION_REG.B4;
    const register unsigned short int T0CS = 5;
    sbit  T0CS_bit at OPTION_REG.B5;
    const register unsigned short int INTEDG = 6;
    sbit  INTEDG_bit at OPTION_REG.B6;
    const register unsigned short int NOT_RBPU = 7;
    sbit  NOT_RBPU_bit at OPTION_REG.B7;
    const register unsigned short int PS0 = 0;
    sbit  PS0_bit at OPTION_REG.B0;
    const register unsigned short int PS1 = 1;
    sbit  PS1_bit at OPTION_REG.B1;
    const register unsigned short int PS2 = 2;
    sbit  PS2_bit at OPTION_REG.B2;

    // PIE1 bits
    const register unsigned short int TMR1IE = 0;
    sbit  TMR1IE_bit at PIE1.B0;
    const register unsigned short int TMR2IE = 1;
    sbit  TMR2IE_bit at PIE1.B1;
    const register unsigned short int CCP1IE = 2;
    sbit  CCP1IE_bit at PIE1.B2;
    const register unsigned short int USBIE = 3;
    sbit  USBIE_bit at PIE1.B3;
    const register unsigned short int TXIE = 4;
    sbit  TXIE_bit at PIE1.B4;
    const register unsigned short int RCIE = 5;
    sbit  RCIE_bit at PIE1.B5;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;

    // PIE2 bits
    const register unsigned short int CCP2IE = 0;
    sbit  CCP2IE_bit at PIE2.B0;

    // PCON bits
    const register unsigned short int NOT_BOR = 0;
    sbit  NOT_BOR_bit at PCON.B0;
    const register unsigned short int NOT_POR = 1;
    sbit  NOT_POR_bit at PCON.B1;
    const register unsigned short int NOT_BO = 0;
    sbit  NOT_BO_bit at PCON.B0;

    // TXSTA bits
    const register unsigned short int TX9D = 0;
    sbit  TX9D_bit at TXSTA.B0;
    const register unsigned short int TRMT = 1;
    sbit  TRMT_bit at TXSTA.B1;
    const register unsigned short int BRGH = 2;
    sbit  BRGH_bit at TXSTA.B2;
    const register unsigned short int SYNC = 4;
    sbit  SYNC_bit at TXSTA.B4;
    const register unsigned short int TXEN = 5;
    sbit  TXEN_bit at TXSTA.B5;
    const register unsigned short int TX9 = 6;
    sbit  TX9_bit at TXSTA.B6;
    const register unsigned short int CSRC = 7;
    sbit  CSRC_bit at TXSTA.B7;
    const register unsigned short int TXD8 = 0;
    sbit  TXD8_bit at TXSTA.B0;
    const register unsigned short int NOT_TX8 = 6;
    sbit  NOT_TX8_bit at TXSTA.B6;
    const register unsigned short int TX8_9 = 6;
    sbit  TX8_9_bit at TXSTA.B6;

    // ADCON1 bits
    const register unsigned short int PCFG0 = 0;
    sbit  PCFG0_bit at ADCON1.B0;
    const register unsigned short int PCFG1 = 1;
    sbit  PCFG1_bit at ADCON1.B1;
    const register unsigned short int PCFG2 = 2;
    sbit  PCFG2_bit at ADCON1.B2;

    // UIR bits
    const register unsigned short int USB_RST = 0;
    sbit  USB_RST_bit at UIR.B0;
    const register unsigned short int UERR = 1;
    sbit  UERR_bit at UIR.B1;
    const register unsigned short int ACTIVITY = 2;
    sbit  ACTIVITY_bit at UIR.B2;
    const register unsigned short int TOK_DNE = 3;
    sbit  TOK_DNE_bit at UIR.B3;
    const register unsigned short int UIDLE = 4;
    sbit  UIDLE_bit at UIR.B4;
    const register unsigned short int STALL = 5;
    sbit  STALL_bit at UIR.B5;

    // UIE bits
    sbit  USB_RST_UIE_bit at UIE.B0;
    sbit  UERR_UIE_bit at UIE.B1;
    sbit  ACTIVITY_UIE_bit at UIE.B2;
    sbit  TOK_DNE_UIE_bit at UIE.B3;
    sbit  UIDLE_UIE_bit at UIE.B4;
    sbit  STALL_UIE_bit at UIE.B5;

    // UEIR bits
    const register unsigned short int PID_ERR = 0;
    sbit  PID_ERR_bit at UEIR.B0;
    const register unsigned short int CRC5 = 1;
    sbit  CRC5_bit at UEIR.B1;
    const register unsigned short int CRC16 = 2;
    sbit  CRC16_bit at UEIR.B2;
    const register unsigned short int DFN8 = 3;
    sbit  DFN8_bit at UEIR.B3;
    const register unsigned short int BTO_ERR = 4;
    sbit  BTO_ERR_bit at UEIR.B4;
    const register unsigned short int WRT_ERR = 5;
    sbit  WRT_ERR_bit at UEIR.B5;
    const register unsigned short int OWN_ERR = 6;
    sbit  OWN_ERR_bit at UEIR.B6;
    const register unsigned short int BTS_ERR = 7;
    sbit  BTS_ERR_bit at UEIR.B7;

    // UEIE bits
    sbit  PID_ERR_UEIE_bit at UEIE.B0;
    sbit  CRC5_UEIE_bit at UEIE.B1;
    sbit  CRC16_UEIE_bit at UEIE.B2;
    sbit  DFN8_UEIE_bit at UEIE.B3;
    sbit  BTO_ERR_UEIE_bit at UEIE.B4;
    sbit  WRT_ERR_UEIE_bit at UEIE.B5;
    sbit  OWN_ERR_UEIE_bit at UEIE.B6;
    sbit  BTS_ERR_UEIE_bit at UEIE.B7;

    // USTAT bits
    const register unsigned short int IN_ = 2;
    sbit  IN__bit at USTAT.B2;
    const register unsigned short int ENDP0 = 3;
    sbit  ENDP0_bit at USTAT.B3;
    const register unsigned short int ENDP1 = 4;
    sbit  ENDP1_bit at USTAT.B4;

    // UCTRL bits
    const register unsigned short int SUSPND = 1;
    sbit  SUSPND_bit at UCTRL.B1;
    const register unsigned short int RESUME_ = 2;
    sbit  RESUME__bit at UCTRL.B2;
    const register unsigned short int DEV_ATT = 3;
    sbit  DEV_ATT_bit at UCTRL.B3;
    const register unsigned short int PKT_DIS = 4;
    sbit  PKT_DIS_bit at UCTRL.B4;
    const register unsigned short int SE0 = 5;
    sbit  SE0_bit at UCTRL.B5;

    // UEP0 bits
    const register unsigned short int EP_STALL = 0;
    sbit  EP_STALL_bit at UEP0.B0;
    const register unsigned short int EP_IN_EN = 1;
    sbit  EP_IN_EN_bit at UEP0.B1;
    const register unsigned short int EP_OUT_EN = 2;
    sbit  EP_OUT_EN_bit at UEP0.B2;
    const register unsigned short int EP_CTL_DIS = 3;
    sbit  EP_CTL_DIS_bit at UEP0.B3;

    // UEP1 bits
    sbit  EP_STALL_UEP1_bit at UEP1.B0;
    sbit  EP_IN_EN_UEP1_bit at UEP1.B1;
    sbit  EP_OUT_EN_UEP1_bit at UEP1.B2;
    sbit  EP_CTL_DIS_UEP1_bit at UEP1.B3;

    // UEP2 bits
    sbit  EP_STALL_UEP2_bit at UEP2.B0;
    sbit  EP_IN_EN_UEP2_bit at UEP2.B1;
    sbit  EP_OUT_EN_UEP2_bit at UEP2.B2;
    sbit  EP_CTL_DIS_UEP2_bit at UEP2.B3;

    // BD0OST bits
    const register unsigned short int PID0_BSTALL = 2;
    sbit  PID0_BSTALL_bit at BD0OST.B2;
    const register unsigned short int PID1_DTS = 3;
    sbit  PID1_DTS_bit at BD0OST.B3;
    const register unsigned short int PID2 = 4;
    sbit  PID2_bit at BD0OST.B4;
    const register unsigned short int PID3 = 5;
    sbit  PID3_bit at BD0OST.B5;
    const register unsigned short int DATA0_1 = 6;
    sbit  DATA0_1_bit at BD0OST.B6;
    const register unsigned short int UOWN = 7;
    sbit  UOWN_bit at BD0OST.B7;
    const register unsigned short int PID0 = 2;
    sbit  PID0_bit at BD0OST.B2;
    const register unsigned short int PID1 = 3;
    sbit  PID1_bit at BD0OST.B3;
    const register unsigned short int DATA01 = 6;
    sbit  DATA01_bit at BD0OST.B6;
    const register unsigned short int OWN = 7;
    sbit  OWN_bit at BD0OST.B7;
    const register unsigned short int BSTALL = 2;
    sbit  BSTALL_bit at BD0OST.B2;
    const register unsigned short int DTS = 3;
    sbit  DTS_bit at BD0OST.B3;

    // BD0IST bits
    sbit  PID0_BSTALL_BD0IST_bit at BD0IST.B2;
    sbit  PID1_DTS_BD0IST_bit at BD0IST.B3;
    sbit  PID2_BD0IST_bit at BD0IST.B4;
    sbit  PID3_BD0IST_bit at BD0IST.B5;
    sbit  DATA0_1_BD0IST_bit at BD0IST.B6;
    sbit  UOWN_BD0IST_bit at BD0IST.B7;
    sbit  PID0_BD0IST_bit at BD0IST.B2;
    sbit  PID1_BD0IST_bit at BD0IST.B3;
    sbit  DATA01_BD0IST_bit at BD0IST.B6;
    sbit  OWN_BD0IST_bit at BD0IST.B7;
    sbit  BSTALL_BD0IST_bit at BD0IST.B2;
    sbit  DTS_BD0IST_bit at BD0IST.B3;

    // BD0IBC bits
    const register unsigned short int BC0 = 0;
    sbit  BC0_bit at BD0IBC.B0;
    const register unsigned short int BC1 = 1;
    sbit  BC1_bit at BD0IBC.B1;
    const register unsigned short int BC2 = 2;
    sbit  BC2_bit at BD0IBC.B2;
    const register unsigned short int BC3 = 3;
    sbit  BC3_bit at BD0IBC.B3;

    // BD1OST bits
    sbit  PID0_BSTALL_BD1OST_bit at BD1OST.B2;
    sbit  PID1_DTS_BD1OST_bit at BD1OST.B3;
    sbit  PID2_BD1OST_bit at BD1OST.B4;
    sbit  PID3_BD1OST_bit at BD1OST.B5;
    sbit  DATA0_1_BD1OST_bit at BD1OST.B6;
    sbit  UOWN_BD1OST_bit at BD1OST.B7;
    sbit  PID0_BD1OST_bit at BD1OST.B2;
    sbit  PID1_BD1OST_bit at BD1OST.B3;
    sbit  DATA01_BD1OST_bit at BD1OST.B6;
    sbit  OWN_BD1OST_bit at BD1OST.B7;
    sbit  BSTALL_BD1OST_bit at BD1OST.B2;
    sbit  DTS_BD1OST_bit at BD1OST.B3;

    // BD1OBC bits
    sbit  BC0_BD1OBC_bit at BD1OBC.B0;
    sbit  BC1_BD1OBC_bit at BD1OBC.B1;
    sbit  BC2_BD1OBC_bit at BD1OBC.B2;
    sbit  BC3_BD1OBC_bit at BD1OBC.B3;

    // BD1IST bits
    sbit  PID0_BSTALL_BD1IST_bit at BD1IST.B2;
    sbit  PID1_DTS_BD1IST_bit at BD1IST.B3;
    sbit  PID2_BD1IST_bit at BD1IST.B4;
    sbit  PID3_BD1IST_bit at BD1IST.B5;
    sbit  DATA0_1_BD1IST_bit at BD1IST.B6;
    sbit  UOWN_BD1IST_bit at BD1IST.B7;
    sbit  PID0_BD1IST_bit at BD1IST.B2;
    sbit  PID1_BD1IST_bit at BD1IST.B3;
    sbit  DATA01_BD1IST_bit at BD1IST.B6;
    sbit  OWN_BD1IST_bit at BD1IST.B7;
    sbit  BSTALL_BD1IST_bit at BD1IST.B2;
    sbit  DTS_BD1IST_bit at BD1IST.B3;

    // BD1IBC bits
    sbit  BC0_BD1IBC_bit at BD1IBC.B0;
    sbit  BC1_BD1IBC_bit at BD1IBC.B1;
    sbit  BC2_BD1IBC_bit at BD1IBC.B2;
    sbit  BC3_BD1IBC_bit at BD1IBC.B3;

    // BD2OST bits
    sbit  PID0_BSTALL_BD2OST_bit at BD2OST.B2;
    sbit  PID1_DTS_BD2OST_bit at BD2OST.B3;
    sbit  PID2_BD2OST_bit at BD2OST.B4;
    sbit  PID3_BD2OST_bit at BD2OST.B5;
    sbit  DATA0_1_BD2OST_bit at BD2OST.B6;
    sbit  UOWN_BD2OST_bit at BD2OST.B7;
    sbit  PID0_BD2OST_bit at BD2OST.B2;
    sbit  PID1_BD2OST_bit at BD2OST.B3;
    sbit  DATA01_BD2OST_bit at BD2OST.B6;
    sbit  OWN_BD2OST_bit at BD2OST.B7;
    sbit  BSTALL_BD2OST_bit at BD2OST.B2;
    sbit  DTS_BD2OST_bit at BD2OST.B3;

    // BD2OBC bits
    sbit  BC0_BD2OBC_bit at BD2OBC.B0;
    sbit  BC1_BD2OBC_bit at BD2OBC.B1;
    sbit  BC2_BD2OBC_bit at BD2OBC.B2;
    sbit  BC3_BD2OBC_bit at BD2OBC.B3;

    // BD2IST bits
    sbit  PID0_BSTALL_BD2IST_bit at BD2IST.B2;
    sbit  PID1_DTS_BD2IST_bit at BD2IST.B3;
    sbit  PID2_BD2IST_bit at BD2IST.B4;
    sbit  PID3_BD2IST_bit at BD2IST.B5;
    sbit  DATA0_1_BD2IST_bit at BD2IST.B6;
    sbit  UOWN_BD2IST_bit at BD2IST.B7;
    sbit  PID0_BD2IST_bit at BD2IST.B2;
    sbit  PID1_BD2IST_bit at BD2IST.B3;
    sbit  DATA01_BD2IST_bit at BD2IST.B6;
    sbit  OWN_BD2IST_bit at BD2IST.B7;
    sbit  BSTALL_BD2IST_bit at BD2IST.B2;
    sbit  DTS_BD2IST_bit at BD2IST.B3;

    // BD2IBC bits
    sbit  BC0_BD2IBC_bit at BD2IBC.B0;
    sbit  BC1_BD2IBC_bit at BD2IBC.B1;
    sbit  BC2_BD2IBC_bit at BD2IBC.B2;
    sbit  BC3_BD2IBC_bit at BD2IBC.B3;

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

    // UADDR bits
    const register unsigned short int ADDR6 = 6;
    sbit  ADDR6_bit at UADDR.B6;
    const register unsigned short int ADDR5 = 5;
    sbit  ADDR5_bit at UADDR.B5;
    const register unsigned short int ADDR4 = 4;
    sbit  ADDR4_bit at UADDR.B4;
    const register unsigned short int ADDR3 = 3;
    sbit  ADDR3_bit at UADDR.B3;
    const register unsigned short int ADDR2 = 2;
    sbit  ADDR2_bit at UADDR.B2;
    const register unsigned short int ADDR1 = 1;
    sbit  ADDR1_bit at UADDR.B1;
    const register unsigned short int ADDR0 = 0;
    sbit  ADDR0_bit at UADDR.B0;

    // BD0OBC bits
    sbit  BC3_BD0OBC_bit at BD0OBC.B3;
    sbit  BC2_BD0OBC_bit at BD0OBC.B2;
    sbit  BC1_BD0OBC_bit at BD0OBC.B1;
    sbit  BC0_BD0OBC_bit at BD0OBC.B0;
