// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00000800;

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
sfr unsigned short volatile SSPBUF           absolute 0x0013;
sfr unsigned short volatile SSPCON           absolute 0x0014;
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
sfr unsigned short volatile T1GCON           absolute 0x008F;
sfr unsigned short volatile OSCCON           absolute 0x0090;
sfr unsigned short volatile OSCTUNE          absolute 0x0091;
sfr unsigned short volatile PR2              absolute 0x0092;
sfr unsigned short volatile SSPADD           absolute 0x0093;
sfr unsigned short volatile SSPMSK           absolute 0x0093;
sfr unsigned short volatile SSPSTAT          absolute 0x0094;
sfr unsigned short          WPU              absolute 0x0095;
sfr unsigned short          WPUB             absolute 0x0095;
sfr unsigned short volatile IOC              absolute 0x0096;
sfr unsigned short volatile IOCB             absolute 0x0096;
sfr unsigned short volatile TXSTA            absolute 0x0098;
sfr unsigned short          SPBRG            absolute 0x0099;
sfr unsigned short          APFCON           absolute 0x009C;
sfr unsigned short volatile FVRCON           absolute 0x009D;
sfr unsigned short volatile ADCON1           absolute 0x009F;
sfr unsigned short volatile CPSCON0          absolute 0x0108;
sfr unsigned short volatile CPSCON1          absolute 0x0109;
sfr unsigned short volatile PMDATA           absolute 0x010C;
sfr unsigned short volatile PMDATL           absolute 0x010C;
sfr unsigned short volatile PMADR            absolute 0x010D;
sfr unsigned short volatile PMADRL           absolute 0x010D;
sfr unsigned short volatile PMDATH           absolute 0x010E;
sfr unsigned short volatile PMADRH           absolute 0x010F;
sfr unsigned short volatile ANSELA           absolute 0x0185;
sfr unsigned short volatile ANSELB           absolute 0x0186;
sfr unsigned short volatile PMCON1           absolute 0x018C;
sfr unsigned short volatile PORTA            absolute 0x0005;
sfr unsigned short volatile PORTB            absolute 0x0006;
sfr unsigned short volatile PORTC            absolute 0x0007;
sfr unsigned short volatile PORTE            absolute 0x0009;
sfr unsigned int   volatile CCPR2            absolute 0x001B;
sfr unsigned short volatile CCPR2L           absolute 0x001B;
sfr unsigned short volatile CCPR2H           absolute 0x001C;
sfr unsigned short volatile ADRES            absolute 0x001E;
sfr unsigned short volatile TRISA            absolute 0x0085;
sfr unsigned short volatile TRISB            absolute 0x0086;
sfr unsigned short volatile TRISC            absolute 0x0087;
sfr unsigned short volatile TRISE            absolute 0x0089;

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
    const register unsigned short int IOCIF = 0;
    sbit  IOCIF_bit at INTCON.B0;
    const register unsigned short int TMR0IF = 2;
    sbit  TMR0IF_bit at INTCON.B2;
    const register unsigned short int IOCIE = 3;
    sbit  IOCIE_bit at INTCON.B3;
    const register unsigned short int TMR0IE = 5;
    sbit  TMR0IE_bit at INTCON.B5;

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
    const register unsigned short int TMR1GIF = 7;
    sbit  TMR1GIF_bit at PIR1.B7;

    // PIR2 bits
    const register unsigned short int CCP2IF = 0;
    sbit  CCP2IF_bit at PIR2.B0;

    // T1CON bits
    const register unsigned short int TMR1ON = 0;
    sbit  TMR1ON_bit at T1CON.B0;
    const register unsigned short int T1SYNC = 2;
    sbit  T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1OSCEN = 3;
    sbit  T1OSCEN_bit at T1CON.B3;
    const register unsigned short int NOT_T1SYNC = 2;
    sbit  NOT_T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1CKPS0 = 4;
    sbit  T1CKPS0_bit at T1CON.B4;
    const register unsigned short int T1CKPS1 = 5;
    sbit  T1CKPS1_bit at T1CON.B5;
    const register unsigned short int TMR1CS0 = 6;
    sbit  TMR1CS0_bit at T1CON.B6;
    const register unsigned short int TMR1CS1 = 7;
    sbit  TMR1CS1_bit at T1CON.B7;
    const register unsigned short int T1INSYNC = 2;
    sbit  T1INSYNC_bit at T1CON.B2;

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

    // SSPCON bits
    const register unsigned short int CKP = 4;
    sbit  CKP_bit at SSPCON.B4;
    const register unsigned short int SSPEN = 5;
    sbit  SSPEN_bit at SSPCON.B5;
    const register unsigned short int SSPOV = 6;
    sbit  SSPOV_bit at SSPCON.B6;
    const register unsigned short int WCOL = 7;
    sbit  WCOL_bit at SSPCON.B7;
    const register unsigned short int SSPM0 = 0;
    sbit  SSPM0_bit at SSPCON.B0;
    const register unsigned short int SSPM1 = 1;
    sbit  SSPM1_bit at SSPCON.B1;
    const register unsigned short int SSPM2 = 2;
    sbit  SSPM2_bit at SSPCON.B2;
    const register unsigned short int SSPM3 = 3;
    sbit  SSPM3_bit at SSPCON.B3;

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
    const register unsigned short int CCP1Y = 4;
    sbit  CCP1Y_bit at CCP1CON.B4;
    const register unsigned short int CCP1X = 5;
    sbit  CCP1X_bit at CCP1CON.B5;

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
    const register unsigned short int CCP2Y = 4;
    sbit  CCP2Y_bit at CCP2CON.B4;
    const register unsigned short int CCP2X = 5;
    sbit  CCP2X_bit at CCP2CON.B5;

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
    const register unsigned short int NOT_DONE = 1;
    sbit  NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int GO_DONE = 1;
    sbit  GO_DONE_bit at ADCON0.B1;

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
    const register unsigned short int SSPIE = 3;
    sbit  SSPIE_bit at PIE1.B3;
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

    // PCON bits
    const register unsigned short int NOT_BOR = 0;
    sbit  NOT_BOR_bit at PCON.B0;
    const register unsigned short int NOT_POR = 1;
    sbit  NOT_POR_bit at PCON.B1;
    const register unsigned short int NOT_BO = 0;
    sbit  NOT_BO_bit at PCON.B0;

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
    const register unsigned short int T1G_NOT_DONE = 3;
    sbit  T1G_NOT_DONE_bit at T1GCON.B3;
    const register unsigned short int T1GGO_DONE = 3;
    sbit  T1GGO_DONE_bit at T1GCON.B3;
    const register unsigned short int T1GGO = 3;
    sbit  T1GGO_bit at T1GCON.B3;

    // OSCCON bits
    const register unsigned short int ICSS = 2;
    sbit  ICSS_bit at OSCCON.B2;
    const register unsigned short int ICSL = 3;
    sbit  ICSL_bit at OSCCON.B3;
    const register unsigned short int IRCF0 = 4;
    sbit  IRCF0_bit at OSCCON.B4;
    const register unsigned short int IRCF1 = 5;
    sbit  IRCF1_bit at OSCCON.B5;

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

    // SSPSTAT bits
    const register unsigned short int BF = 0;
    sbit  BF_bit at SSPSTAT.B0;
    const register unsigned short int UA = 1;
    sbit  UA_bit at SSPSTAT.B1;
    const register unsigned short int R_NOT_W = 2;
    sbit  R_NOT_W_bit at SSPSTAT.B2;
    const register unsigned short int S = 3;
    sbit  S_bit at SSPSTAT.B3;
    const register unsigned short int P = 4;
    sbit  P_bit at SSPSTAT.B4;
    const register unsigned short int D_NOT_A = 5;
    sbit  D_NOT_A_bit at SSPSTAT.B5;
    const register unsigned short int CKE = 6;
    sbit  CKE_bit at SSPSTAT.B6;
    const register unsigned short int SMP = 7;
    sbit  SMP_bit at SSPSTAT.B7;
    const register unsigned short int R = 2;
    sbit  R_bit at SSPSTAT.B2;
    const register unsigned short int D = 5;
    sbit  D_bit at SSPSTAT.B5;
    const register unsigned short int NOT_W = 2;
    sbit  NOT_W_bit at SSPSTAT.B2;
    const register unsigned short int NOT_A = 5;
    sbit  NOT_A_bit at SSPSTAT.B5;
    const register unsigned short int NOT_WRITE = 2;
    sbit  NOT_WRITE_bit at SSPSTAT.B2;
    const register unsigned short int NOT_ADDRESS = 5;
    sbit  NOT_ADDRESS_bit at SSPSTAT.B5;
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at SSPSTAT.B2;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at SSPSTAT.B5;
    const register unsigned short int READ_WRITE = 2;
    sbit  READ_WRITE_bit at SSPSTAT.B2;
    const register unsigned short int DATA_ADDRESS = 5;
    sbit  DATA_ADDRESS_bit at SSPSTAT.B5;

    // WPU, WPUB bits
    const register unsigned short int WPUB0 = 0;
    sbit  WPUB0_bit at WPU.B0;
    const register unsigned short int WPUB1 = 1;
    sbit  WPUB1_bit at WPU.B1;
    const register unsigned short int WPUB2 = 2;
    sbit  WPUB2_bit at WPU.B2;
    const register unsigned short int WPUB3 = 3;
    sbit  WPUB3_bit at WPU.B3;
    const register unsigned short int WPUB4 = 4;
    sbit  WPUB4_bit at WPU.B4;
    const register unsigned short int WPUB5 = 5;
    sbit  WPUB5_bit at WPU.B5;
    const register unsigned short int WPUB6 = 6;
    sbit  WPUB6_bit at WPU.B6;
    const register unsigned short int WPUB7 = 7;
    sbit  WPUB7_bit at WPU.B7;
    const register unsigned short int WPU0 = 0;
    sbit  WPU0_bit at WPU.B0;
    const register unsigned short int WPU1 = 1;
    sbit  WPU1_bit at WPU.B1;
    const register unsigned short int WPU2 = 2;
    sbit  WPU2_bit at WPU.B2;
    const register unsigned short int WPU3 = 3;
    sbit  WPU3_bit at WPU.B3;
    const register unsigned short int WPU4 = 4;
    sbit  WPU4_bit at WPU.B4;
    const register unsigned short int WPU5 = 5;
    sbit  WPU5_bit at WPU.B5;
    const register unsigned short int WPU6 = 6;
    sbit  WPU6_bit at WPU.B6;
    const register unsigned short int WPU7 = 7;
    sbit  WPU7_bit at WPU.B7;

    // IOC, IOCB bits
    const register unsigned short int IOCB0 = 0;
    sbit  IOCB0_bit at IOC.B0;
    const register unsigned short int IOCB1 = 1;
    sbit  IOCB1_bit at IOC.B1;
    const register unsigned short int IOCB2 = 2;
    sbit  IOCB2_bit at IOC.B2;
    const register unsigned short int IOCB3 = 3;
    sbit  IOCB3_bit at IOC.B3;
    const register unsigned short int IOCB4 = 4;
    sbit  IOCB4_bit at IOC.B4;
    const register unsigned short int IOCB5 = 5;
    sbit  IOCB5_bit at IOC.B5;
    const register unsigned short int IOCB6 = 6;
    sbit  IOCB6_bit at IOC.B6;
    const register unsigned short int IOCB7 = 7;
    sbit  IOCB7_bit at IOC.B7;
    const register unsigned short int IOC0 = 0;
    sbit  IOC0_bit at IOC.B0;
    const register unsigned short int IOC1 = 1;
    sbit  IOC1_bit at IOC.B1;
    const register unsigned short int IOC2 = 2;
    sbit  IOC2_bit at IOC.B2;
    const register unsigned short int IOC3 = 3;
    sbit  IOC3_bit at IOC.B3;
    const register unsigned short int IOC4 = 4;
    sbit  IOC4_bit at IOC.B4;
    const register unsigned short int IOC5 = 5;
    sbit  IOC5_bit at IOC.B5;
    const register unsigned short int IOC6 = 6;
    sbit  IOC6_bit at IOC.B6;
    const register unsigned short int IOC7 = 7;
    sbit  IOC7_bit at IOC.B7;

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

    // APFCON bits
    const register unsigned short int CCP2SEL = 0;
    sbit  CCP2SEL_bit at APFCON.B0;
    const register unsigned short int SSSEL = 1;
    sbit  SSSEL_bit at APFCON.B1;

    // FVRCON bits
    const register unsigned short int ADFVR0 = 0;
    sbit  ADFVR0_bit at FVRCON.B0;
    const register unsigned short int ADFVR1 = 1;
    sbit  ADFVR1_bit at FVRCON.B1;
    const register unsigned short int FVREN = 6;
    sbit  FVREN_bit at FVRCON.B6;
    const register unsigned short int FVRRDY = 7;
    sbit  FVRRDY_bit at FVRCON.B7;
    const register unsigned short int FVRST = 7;
    sbit  FVRST_bit at FVRCON.B7;

    // ADCON1 bits
    const register unsigned short int ADREF0 = 0;
    sbit  ADREF0_bit at ADCON1.B0;
    const register unsigned short int ADREF1 = 1;
    sbit  ADREF1_bit at ADCON1.B1;
    const register unsigned short int ADCS0 = 4;
    sbit  ADCS0_bit at ADCON1.B4;
    const register unsigned short int ADCS1 = 5;
    sbit  ADCS1_bit at ADCON1.B5;
    const register unsigned short int ADCS2 = 6;
    sbit  ADCS2_bit at ADCON1.B6;

    // CPSCON0 bits
    const register unsigned short int T0XCS = 0;
    sbit  T0XCS_bit at CPSCON0.B0;
    const register unsigned short int CPSOUT = 1;
    sbit  CPSOUT_bit at CPSCON0.B1;
    const register unsigned short int CPSON = 7;
    sbit  CPSON_bit at CPSCON0.B7;
    const register unsigned short int CPSRNG0 = 2;
    sbit  CPSRNG0_bit at CPSCON0.B2;
    const register unsigned short int CPSRNG1 = 3;
    sbit  CPSRNG1_bit at CPSCON0.B3;

    // CPSCON1 bits
    const register unsigned short int CPSCH0 = 0;
    sbit  CPSCH0_bit at CPSCON1.B0;
    const register unsigned short int CPSCH1 = 1;
    sbit  CPSCH1_bit at CPSCON1.B1;
    const register unsigned short int CPSCH2 = 2;
    sbit  CPSCH2_bit at CPSCON1.B2;
    const register unsigned short int CPSCH3 = 3;
    sbit  CPSCH3_bit at CPSCON1.B3;

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

    // PMCON1 bits
    const register unsigned short int RD = 0;
    sbit  RD_bit at PMCON1.B0;
    const register unsigned short int PMRD = 0;
    sbit  PMRD_bit at PMCON1.B0;

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
