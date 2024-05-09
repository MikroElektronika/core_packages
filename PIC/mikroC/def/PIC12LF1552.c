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
sfr unsigned short volatile TMR0             absolute 0x0015;
sfr unsigned short volatile PIE1             absolute 0x0091;
sfr unsigned short volatile PIE2             absolute 0x0092;
sfr unsigned short volatile OPTION_REG       absolute 0x0095;
sfr unsigned short volatile PCON             absolute 0x0096;
sfr unsigned short          WDTCON           absolute 0x0097;
sfr unsigned short volatile OSCCON           absolute 0x0099;
sfr unsigned short volatile OSCSTAT          absolute 0x009A;
sfr unsigned short volatile ADRESL           absolute 0x009B;
sfr unsigned short volatile ADRESH           absolute 0x009C;
sfr unsigned short volatile ADCON0           absolute 0x009D;
sfr unsigned short volatile ADCON1           absolute 0x009E;
sfr unsigned short volatile ADCON2           absolute 0x009F;
sfr unsigned short volatile LATA             absolute 0x010C;
sfr unsigned short volatile BORCON           absolute 0x0116;
sfr unsigned short volatile FVRCON           absolute 0x0117;
sfr unsigned short          APFCON           absolute 0x011D;
sfr unsigned short volatile APFCON0          absolute 0x011D;
sfr unsigned short volatile ANSELA           absolute 0x018C;
sfr unsigned int   volatile PMADR            absolute 0x0191;
sfr unsigned short volatile PMADRL           absolute 0x0191;
sfr unsigned short volatile PMADRH           absolute 0x0192;
sfr unsigned int   volatile PMDAT            absolute 0x0193;
sfr unsigned short volatile PMDATL           absolute 0x0193;
sfr unsigned short volatile PMDATH           absolute 0x0194;
sfr unsigned short volatile PMCON1           absolute 0x0195;
sfr unsigned short volatile PMCON2           absolute 0x0196;
sfr unsigned short          WPUA             absolute 0x020C;
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
sfr unsigned short volatile IOCAP            absolute 0x0391;
sfr unsigned short volatile IOCAN            absolute 0x0392;
sfr unsigned short volatile IOCAF            absolute 0x0393;
sfr unsigned short volatile AADCON0          absolute 0x0711;
sfr unsigned short volatile AADCON1          absolute 0x0712;
sfr unsigned short volatile AADCON2          absolute 0x0713;
sfr unsigned short volatile AADCON3          absolute 0x0714;
sfr unsigned short volatile AADSTAT          absolute 0x0715;
sfr unsigned short volatile AADPRE           absolute 0x0716;
sfr unsigned short volatile AADACQ           absolute 0x0717;
sfr unsigned short volatile AADGRD           absolute 0x0718;
sfr unsigned short volatile AADCAP           absolute 0x0719;
sfr unsigned int   volatile AADRES0          absolute 0x071A;
sfr unsigned short volatile AADRES0L         absolute 0x071A;
sfr unsigned short volatile AADRES0H         absolute 0x071B;
sfr unsigned int   volatile AADRES1          absolute 0x071C;
sfr unsigned short volatile AADRES1L         absolute 0x071C;
sfr unsigned short volatile AADRES1H         absolute 0x071D;
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
sfr unsigned short volatile TRISA            absolute 0x008C;
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
    const register unsigned short int SSP1IF = 3;
    sbit  SSP1IF_bit at PIR1.B3;
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;

    // PIR2 bits
    const register unsigned short int BCL1IF = 3;
    sbit  BCL1IF_bit at PIR2.B3;

    // PIE1 bits
    const register unsigned short int SSP1IE = 3;
    sbit  SSP1IE_bit at PIE1.B3;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;

    // PIE2 bits
    const register unsigned short int BCL1IE = 3;
    sbit  BCL1IE_bit at PIE2.B3;

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
    const register unsigned short int SPLLEN = 7;
    sbit  SPLLEN_bit at OSCCON.B7;
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
    const register unsigned short int PLLR = 6;
    sbit  PLLR_bit at OSCSTAT.B6;

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

    // ADCON2 bits
    const register unsigned short int TRIGSEL0 = 4;
    sbit  TRIGSEL0_bit at ADCON2.B4;
    const register unsigned short int TRIGSEL1 = 5;
    sbit  TRIGSEL1_bit at ADCON2.B5;
    const register unsigned short int TRIGSEL2 = 6;
    sbit  TRIGSEL2_bit at ADCON2.B6;

    // LATA bits
    const register unsigned short int LATA0 = 0;
    sbit  LATA0_bit at LATA.B0;
    const register unsigned short int LATA1 = 1;
    sbit  LATA1_bit at LATA.B1;
    const register unsigned short int LATA2 = 2;
    sbit  LATA2_bit at LATA.B2;
    const register unsigned short int LATA4 = 4;
    sbit  LATA4_bit at LATA.B4;
    const register unsigned short int LATA5 = 5;
    sbit  LATA5_bit at LATA.B5;

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
    const register unsigned short int TSRNG = 4;
    sbit  TSRNG_bit at FVRCON.B4;
    const register unsigned short int TSEN = 5;
    sbit  TSEN_bit at FVRCON.B5;
    const register unsigned short int FVRRDY = 6;
    sbit  FVRRDY_bit at FVRCON.B6;
    const register unsigned short int FVREN = 7;
    sbit  FVREN_bit at FVRCON.B7;

    // APFCON, APFCON0 bits
    const register unsigned short int SDSEL = 4;
    sbit  SDSEL_bit at APFCON.B4;
    const register unsigned short int SSSEL = 5;
    sbit  SSSEL_bit at APFCON.B5;
    const register unsigned short int SDOSEL = 6;
    sbit  SDOSEL_bit at APFCON.B6;
    const register unsigned short int SS1SEL = 5;
    sbit  SS1SEL_bit at APFCON.B5;
    const register unsigned short int SDO1SEL = 6;
    sbit  SDO1SEL_bit at APFCON.B6;

    // ANSELA bits
    const register unsigned short int ANSA0 = 0;
    sbit  ANSA0_bit at ANSELA.B0;
    const register unsigned short int ANSA1 = 1;
    sbit  ANSA1_bit at ANSELA.B1;
    const register unsigned short int ANSA2 = 2;
    sbit  ANSA2_bit at ANSELA.B2;
    const register unsigned short int ANSA4 = 4;
    sbit  ANSA4_bit at ANSELA.B4;
    const register unsigned short int ANSA5 = 5;
    sbit  ANSA5_bit at ANSELA.B5;

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

    // AADCON0 bits
    sbit  ADON_AADCON0_bit at AADCON0.B0;
    sbit  GO_NOT_DONE_AADCON0_bit at AADCON0.B1;
    sbit  CHS0_AADCON0_bit at AADCON0.B2;
    sbit  CHS1_AADCON0_bit at AADCON0.B3;
    sbit  CHS2_AADCON0_bit at AADCON0.B4;
    sbit  CHS3_AADCON0_bit at AADCON0.B5;
    sbit  CHS4_AADCON0_bit at AADCON0.B6;

    // AADCON1 bits
    sbit  ADPREF0_AADCON1_bit at AADCON1.B0;
    sbit  ADPREF1_AADCON1_bit at AADCON1.B1;
    sbit  ADCS0_AADCON1_bit at AADCON1.B4;
    sbit  ADCS1_AADCON1_bit at AADCON1.B5;
    sbit  ADCS2_AADCON1_bit at AADCON1.B6;

    // AADCON2 bits
    sbit  TRIGSEL0_AADCON2_bit at AADCON2.B4;
    sbit  TRIGSEL1_AADCON2_bit at AADCON2.B5;
    sbit  TRIGSEL2_AADCON2_bit at AADCON2.B6;

    // AADCON3 bits
    const register unsigned short int ADDSEN = 0;
    sbit  ADDSEN_bit at AADCON3.B0;
    const register unsigned short int ADIPEN = 1;
    sbit  ADIPEN_bit at AADCON3.B1;
    const register unsigned short int ADOOEN = 3;
    sbit  ADOOEN_bit at AADCON3.B3;
    const register unsigned short int ADOEN = 4;
    sbit  ADOEN_bit at AADCON3.B4;
    const register unsigned short int ADIPPOL = 6;
    sbit  ADIPPOL_bit at AADCON3.B6;
    const register unsigned short int ADEPPOL = 7;
    sbit  ADEPPOL_bit at AADCON3.B7;

    // AADSTAT bits
    const register unsigned short int ADCONV = 2;
    sbit  ADCONV_bit at AADSTAT.B2;
    const register unsigned short int ADSTG0 = 0;
    sbit  ADSTG0_bit at AADSTAT.B0;
    const register unsigned short int ADSTG1 = 1;
    sbit  ADSTG1_bit at AADSTAT.B1;

    // AADPRE bits
    const register unsigned short int ADPRE0 = 0;
    sbit  ADPRE0_bit at AADPRE.B0;
    const register unsigned short int ADPRE1 = 1;
    sbit  ADPRE1_bit at AADPRE.B1;
    const register unsigned short int ADPRE2 = 2;
    sbit  ADPRE2_bit at AADPRE.B2;
    const register unsigned short int ADPRE3 = 3;
    sbit  ADPRE3_bit at AADPRE.B3;
    const register unsigned short int ADPRE4 = 4;
    sbit  ADPRE4_bit at AADPRE.B4;
    const register unsigned short int ADPRE5 = 5;
    sbit  ADPRE5_bit at AADPRE.B5;
    const register unsigned short int ADPRE6 = 6;
    sbit  ADPRE6_bit at AADPRE.B6;

    // AADACQ bits
    const register unsigned short int ADACQ0 = 0;
    sbit  ADACQ0_bit at AADACQ.B0;
    const register unsigned short int ADACQ1 = 1;
    sbit  ADACQ1_bit at AADACQ.B1;
    const register unsigned short int ADACQ2 = 2;
    sbit  ADACQ2_bit at AADACQ.B2;
    const register unsigned short int ADACQ3 = 3;
    sbit  ADACQ3_bit at AADACQ.B3;
    const register unsigned short int ADACQ4 = 4;
    sbit  ADACQ4_bit at AADACQ.B4;
    const register unsigned short int ADACQ5 = 5;
    sbit  ADACQ5_bit at AADACQ.B5;
    const register unsigned short int ADACQ6 = 6;
    sbit  ADACQ6_bit at AADACQ.B6;

    // AADGRD bits
    const register unsigned short int GRDPOL = 5;
    sbit  GRDPOL_bit at AADGRD.B5;
    const register unsigned short int GRDAOE = 6;
    sbit  GRDAOE_bit at AADGRD.B6;
    const register unsigned short int GRDBOE = 7;
    sbit  GRDBOE_bit at AADGRD.B7;

    // AADCAP bits
    const register unsigned short int ADDCAP0 = 0;
    sbit  ADDCAP0_bit at AADCAP.B0;
    const register unsigned short int ADDCAP1 = 1;
    sbit  ADDCAP1_bit at AADCAP.B1;
    const register unsigned short int ADDCAP2 = 2;
    sbit  ADDCAP2_bit at AADCAP.B2;

    // STATUS_SHAD bits
    const register unsigned short int C_SHAD = 0;
    sbit  C_SHAD_bit at STATUS_SHAD.B0;
    const register unsigned short int DC_SHAD = 1;
    sbit  DC_SHAD_bit at STATUS_SHAD.B1;
    const register unsigned short int Z_SHAD = 2;
    sbit  Z_SHAD_bit at STATUS_SHAD.B2;

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
