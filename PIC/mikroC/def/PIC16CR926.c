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
sfr unsigned short volatile ADRESH           absolute 0x001E;
sfr unsigned short volatile ADCON0           absolute 0x001F;
sfr unsigned short volatile OPTION_REG       absolute 0x0081;
sfr unsigned short volatile PIE1             absolute 0x008C;
sfr unsigned short volatile PCON             absolute 0x008E;
sfr unsigned short volatile PR2              absolute 0x0092;
sfr unsigned short volatile SSPADD           absolute 0x0093;
sfr unsigned short volatile SSPSTAT          absolute 0x0094;
sfr unsigned short volatile ADRESL           absolute 0x009E;
sfr unsigned short volatile ADCON1           absolute 0x009F;
sfr unsigned short volatile PMCON1           absolute 0x010C;
sfr unsigned short volatile LCDSE            absolute 0x010D;
sfr unsigned short volatile LCDPS            absolute 0x010E;
sfr unsigned short volatile LCDCON           absolute 0x010F;
sfr unsigned short volatile LCDD00           absolute 0x0110;
sfr unsigned short volatile LCDD01           absolute 0x0111;
sfr unsigned short volatile LCDD02           absolute 0x0112;
sfr unsigned short volatile LCDD03           absolute 0x0113;
sfr unsigned short volatile LCDD04           absolute 0x0114;
sfr unsigned short volatile LCDD05           absolute 0x0115;
sfr unsigned short volatile LCDD06           absolute 0x0116;
sfr unsigned short volatile LCDD07           absolute 0x0117;
sfr unsigned short volatile LCDD08           absolute 0x0118;
sfr unsigned short volatile LCDD09           absolute 0x0119;
sfr unsigned short volatile LCDD10           absolute 0x011A;
sfr unsigned short volatile LCDD11           absolute 0x011B;
sfr unsigned short volatile LCDD12           absolute 0x011C;
sfr unsigned short volatile LCDD13           absolute 0x011D;
sfr unsigned short volatile LCDD14           absolute 0x011E;
sfr unsigned short volatile LCDD15           absolute 0x011F;
sfr unsigned short volatile PMDATA           absolute 0x018C;
sfr unsigned short volatile PMADR            absolute 0x018D;
sfr unsigned short volatile PMDATH           absolute 0x018E;
sfr unsigned short volatile PMADRH           absolute 0x018F;
sfr unsigned short volatile PORTA            absolute 0x0005;
sfr unsigned short volatile PORTB            absolute 0x0006;
sfr unsigned short volatile PORTC            absolute 0x0007;
sfr unsigned short volatile PORTD            absolute 0x0008;
sfr unsigned short volatile PORTE            absolute 0x0009;
sfr unsigned short volatile TRISA            absolute 0x0085;
sfr unsigned short volatile TRISB            absolute 0x0086;
sfr unsigned short volatile TRISC            absolute 0x0087;
sfr unsigned short volatile TRISD            absolute 0x0088;
sfr unsigned short volatile TRISE            absolute 0x0089;
sfr unsigned short volatile PORTF            absolute 0x0107;
sfr unsigned short volatile PORTG            absolute 0x0108;
sfr unsigned short volatile TRISF            absolute 0x0187;
sfr unsigned short volatile TRISG            absolute 0x0188;

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
    const register unsigned short int SSPIF = 3;
    sbit  SSPIF_bit at PIR1.B3;
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;
    const register unsigned short int LCDIF = 7;
    sbit  LCDIF_bit at PIR1.B7;

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
    const register unsigned short int CCP1Y = 4;
    sbit  CCP1Y_bit at CCP1CON.B4;
    const register unsigned short int CCP1X = 5;
    sbit  CCP1X_bit at CCP1CON.B5;

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

    // Alternative bit function
    const register unsigned short int PSPMODE = 4;
    sbit  PSPMODE_bit at TRISE.B4;

    // Alternative bit function
    const register unsigned short int IBOV = 5;
    sbit  IBOV_bit at TRISE.B5;

    // Alternative bit function
    const register unsigned short int OBF = 6;
    sbit  OBF_bit at TRISE.B6;

    // Alternative bit function
    const register unsigned short int IBF = 7;
    sbit  IBF_bit at TRISE.B7;

    // PIE1 bits
    const register unsigned short int TMR1IE = 0;
    sbit  TMR1IE_bit at PIE1.B0;
    const register unsigned short int TMR2IE = 1;
    sbit  TMR2IE_bit at PIE1.B1;
    const register unsigned short int CCP1IE = 2;
    sbit  CCP1IE_bit at PIE1.B2;
    const register unsigned short int SSPIE = 3;
    sbit  SSPIE_bit at PIE1.B3;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;
    const register unsigned short int LCDIE = 7;
    sbit  LCDIE_bit at PIE1.B7;

    // PCON bits
    const register unsigned short int NOT_BOR = 0;
    sbit  NOT_BOR_bit at PCON.B0;
    const register unsigned short int NOT_POR = 1;
    sbit  NOT_POR_bit at PCON.B1;

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
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at SSPSTAT.B2;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at SSPSTAT.B5;
    const register unsigned short int READ_WRITE = 2;
    sbit  READ_WRITE_bit at SSPSTAT.B2;
    const register unsigned short int DATA_ADDRESS = 5;
    sbit  DATA_ADDRESS_bit at SSPSTAT.B5;
    const register unsigned short int NOT_W = 2;
    sbit  NOT_W_bit at SSPSTAT.B2;
    const register unsigned short int NOT_A = 5;
    sbit  NOT_A_bit at SSPSTAT.B5;
    const register unsigned short int NOT_WRITE = 2;
    sbit  NOT_WRITE_bit at SSPSTAT.B2;
    const register unsigned short int NOT_ADDRESS = 5;
    sbit  NOT_ADDRESS_bit at SSPSTAT.B5;

    // ADCON1 bits
    const register unsigned short int ADFM = 7;
    sbit  ADFM_bit at ADCON1.B7;
    const register unsigned short int PCFG0 = 0;
    sbit  PCFG0_bit at ADCON1.B0;
    const register unsigned short int PCFG1 = 1;
    sbit  PCFG1_bit at ADCON1.B1;
    const register unsigned short int PCFG2 = 2;
    sbit  PCFG2_bit at ADCON1.B2;
    const register unsigned short int PCFG3 = 3;
    sbit  PCFG3_bit at ADCON1.B3;

    // PMCON1 bits
    const register unsigned short int RD = 0;
    sbit  RD_bit at PMCON1.B0;

    // LCDSE bits
    const register unsigned short int SE0 = 0;
    sbit  SE0_bit at LCDSE.B0;
    const register unsigned short int SE5 = 1;
    sbit  SE5_bit at LCDSE.B1;
    const register unsigned short int SE9 = 2;
    sbit  SE9_bit at LCDSE.B2;
    const register unsigned short int SE12 = 3;
    sbit  SE12_bit at LCDSE.B3;
    const register unsigned short int SE16 = 4;
    sbit  SE16_bit at LCDSE.B4;
    const register unsigned short int SE20 = 5;
    sbit  SE20_bit at LCDSE.B5;
    const register unsigned short int SE27 = 6;
    sbit  SE27_bit at LCDSE.B6;
    const register unsigned short int SE29 = 7;
    sbit  SE29_bit at LCDSE.B7;

    // LCDPS bits
    const register unsigned short int LP0 = 0;
    sbit  LP0_bit at LCDPS.B0;
    const register unsigned short int LP1 = 1;
    sbit  LP1_bit at LCDPS.B1;
    const register unsigned short int LP2 = 2;
    sbit  LP2_bit at LCDPS.B2;
    const register unsigned short int LP3 = 3;
    sbit  LP3_bit at LCDPS.B3;

    // LCDCON bits
    const register unsigned short int VGEN = 4;
    sbit  VGEN_bit at LCDCON.B4;
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
    const register unsigned short int BIAS = 4;
    sbit  BIAS_bit at LCDCON.B4;
    const register unsigned short int WERR = 5;
    sbit  WERR_bit at LCDCON.B5;

    // LCDD00 bits
    const register unsigned short int SEG00 = 0;
    sbit  SEG00_bit at LCDD00.B0;
    const register unsigned short int SEG01 = 1;
    sbit  SEG01_bit at LCDD00.B1;
    const register unsigned short int SEG02 = 2;
    sbit  SEG02_bit at LCDD00.B2;
    const register unsigned short int SEG03 = 3;
    sbit  SEG03_bit at LCDD00.B3;
    const register unsigned short int SEG04 = 4;
    sbit  SEG04_bit at LCDD00.B4;
    const register unsigned short int SEG05 = 5;
    sbit  SEG05_bit at LCDD00.B5;
    const register unsigned short int SEG06 = 6;
    sbit  SEG06_bit at LCDD00.B6;
    const register unsigned short int SEG07 = 7;
    sbit  SEG07_bit at LCDD00.B7;

    // LCDD01 bits
    const register unsigned short int SEG08 = 0;
    sbit  SEG08_bit at LCDD01.B0;
    const register unsigned short int SEG09 = 1;
    sbit  SEG09_bit at LCDD01.B1;
    const register unsigned short int SEG10 = 2;
    sbit  SEG10_bit at LCDD01.B2;
    const register unsigned short int SEG11 = 3;
    sbit  SEG11_bit at LCDD01.B3;
    const register unsigned short int SEG12 = 4;
    sbit  SEG12_bit at LCDD01.B4;
    const register unsigned short int SEG13 = 5;
    sbit  SEG13_bit at LCDD01.B5;
    const register unsigned short int SEG14 = 6;
    sbit  SEG14_bit at LCDD01.B6;
    const register unsigned short int SEG15 = 7;
    sbit  SEG15_bit at LCDD01.B7;

    // LCDD02 bits
    const register unsigned short int SEG16 = 0;
    sbit  SEG16_bit at LCDD02.B0;
    const register unsigned short int SEG17 = 1;
    sbit  SEG17_bit at LCDD02.B1;
    const register unsigned short int SEG18 = 2;
    sbit  SEG18_bit at LCDD02.B2;
    const register unsigned short int SEG19 = 3;
    sbit  SEG19_bit at LCDD02.B3;
    const register unsigned short int SEG20 = 4;
    sbit  SEG20_bit at LCDD02.B4;
    const register unsigned short int SEG21 = 5;
    sbit  SEG21_bit at LCDD02.B5;
    const register unsigned short int SEG22 = 6;
    sbit  SEG22_bit at LCDD02.B6;
    const register unsigned short int SEG23 = 7;
    sbit  SEG23_bit at LCDD02.B7;

    // LCDD03 bits
    const register unsigned short int SEG24 = 0;
    sbit  SEG24_bit at LCDD03.B0;
    const register unsigned short int SEG25 = 1;
    sbit  SEG25_bit at LCDD03.B1;
    const register unsigned short int SEG26 = 2;
    sbit  SEG26_bit at LCDD03.B2;
    const register unsigned short int SEG27 = 3;
    sbit  SEG27_bit at LCDD03.B3;
    const register unsigned short int SEG28 = 4;
    sbit  SEG28_bit at LCDD03.B4;
    const register unsigned short int SEG29 = 5;
    sbit  SEG29_bit at LCDD03.B5;
    const register unsigned short int SEG30 = 6;
    sbit  SEG30_bit at LCDD03.B6;
    const register unsigned short int SEG31 = 7;
    sbit  SEG31_bit at LCDD03.B7;

    // LCDD04 bits
    sbit  SEG00_LCDD04_bit at LCDD04.B0;
    sbit  SEG01_LCDD04_bit at LCDD04.B1;
    sbit  SEG02_LCDD04_bit at LCDD04.B2;
    sbit  SEG03_LCDD04_bit at LCDD04.B3;
    sbit  SEG04_LCDD04_bit at LCDD04.B4;
    sbit  SEG05_LCDD04_bit at LCDD04.B5;
    sbit  SEG06_LCDD04_bit at LCDD04.B6;
    sbit  SEG07_LCDD04_bit at LCDD04.B7;

    // LCDD05 bits
    sbit  SEG08_LCDD05_bit at LCDD05.B0;
    sbit  SEG09_LCDD05_bit at LCDD05.B1;
    sbit  SEG10_LCDD05_bit at LCDD05.B2;
    sbit  SEG11_LCDD05_bit at LCDD05.B3;
    sbit  SEG12_LCDD05_bit at LCDD05.B4;
    sbit  SEG13_LCDD05_bit at LCDD05.B5;
    sbit  SEG14_LCDD05_bit at LCDD05.B6;
    sbit  SEG15_LCDD05_bit at LCDD05.B7;

    // LCDD06 bits
    sbit  SEG16_LCDD06_bit at LCDD06.B0;
    sbit  SEG17_LCDD06_bit at LCDD06.B1;
    sbit  SEG18_LCDD06_bit at LCDD06.B2;
    sbit  SEG19_LCDD06_bit at LCDD06.B3;
    sbit  SEG20_LCDD06_bit at LCDD06.B4;
    sbit  SEG21_LCDD06_bit at LCDD06.B5;
    sbit  SEG22_LCDD06_bit at LCDD06.B6;
    sbit  SEG23_LCDD06_bit at LCDD06.B7;

    // LCDD07 bits
    sbit  SEG24_LCDD07_bit at LCDD07.B0;
    sbit  SEG25_LCDD07_bit at LCDD07.B1;
    sbit  SEG26_LCDD07_bit at LCDD07.B2;
    sbit  SEG27_LCDD07_bit at LCDD07.B3;
    sbit  SEG28_LCDD07_bit at LCDD07.B4;
    sbit  SEG29_LCDD07_bit at LCDD07.B5;
    sbit  SEG30_LCDD07_bit at LCDD07.B6;
    sbit  SEG31_LCDD07_bit at LCDD07.B7;

    // LCDD08 bits
    sbit  SEG00_LCDD08_bit at LCDD08.B0;
    sbit  SEG01_LCDD08_bit at LCDD08.B1;
    sbit  SEG02_LCDD08_bit at LCDD08.B2;
    sbit  SEG03_LCDD08_bit at LCDD08.B3;
    sbit  SEG04_LCDD08_bit at LCDD08.B4;
    sbit  SEG05_LCDD08_bit at LCDD08.B5;
    sbit  SEG06_LCDD08_bit at LCDD08.B6;
    sbit  SEG07_LCDD08_bit at LCDD08.B7;

    // LCDD09 bits
    sbit  SEG08_LCDD09_bit at LCDD09.B0;
    sbit  SEG09_LCDD09_bit at LCDD09.B1;
    sbit  SEG10_LCDD09_bit at LCDD09.B2;
    sbit  SEG11_LCDD09_bit at LCDD09.B3;
    sbit  SEG12_LCDD09_bit at LCDD09.B4;
    sbit  SEG13_LCDD09_bit at LCDD09.B5;
    sbit  SEG14_LCDD09_bit at LCDD09.B6;
    sbit  SEG15_LCDD09_bit at LCDD09.B7;

    // LCDD10 bits
    sbit  SEG16_LCDD10_bit at LCDD10.B0;
    sbit  SEG17_LCDD10_bit at LCDD10.B1;
    sbit  SEG18_LCDD10_bit at LCDD10.B2;
    sbit  SEG19_LCDD10_bit at LCDD10.B3;
    sbit  SEG20_LCDD10_bit at LCDD10.B4;
    sbit  SEG21_LCDD10_bit at LCDD10.B5;
    sbit  SEG22_LCDD10_bit at LCDD10.B6;
    sbit  SEG23_LCDD10_bit at LCDD10.B7;

    // LCDD11 bits
    sbit  SEG24_LCDD11_bit at LCDD11.B0;
    sbit  SEG25_LCDD11_bit at LCDD11.B1;
    sbit  SEG26_LCDD11_bit at LCDD11.B2;
    sbit  SEG27_LCDD11_bit at LCDD11.B3;
    sbit  SEG28_LCDD11_bit at LCDD11.B4;
    sbit  SEG29_LCDD11_bit at LCDD11.B5;
    sbit  SEG30_LCDD11_bit at LCDD11.B6;
    sbit  SEG31_LCDD11_bit at LCDD11.B7;

    // LCDD12 bits
    sbit  SEG00_LCDD12_bit at LCDD12.B0;
    sbit  SEG01_LCDD12_bit at LCDD12.B1;
    sbit  SEG02_LCDD12_bit at LCDD12.B2;
    sbit  SEG03_LCDD12_bit at LCDD12.B3;
    sbit  SEG04_LCDD12_bit at LCDD12.B4;
    sbit  SEG05_LCDD12_bit at LCDD12.B5;
    sbit  SEG06_LCDD12_bit at LCDD12.B6;
    sbit  SEG07_LCDD12_bit at LCDD12.B7;

    // LCDD13 bits
    sbit  SEG08_LCDD13_bit at LCDD13.B0;
    sbit  SEG09_LCDD13_bit at LCDD13.B1;
    sbit  SEG10_LCDD13_bit at LCDD13.B2;
    sbit  SEG11_LCDD13_bit at LCDD13.B3;
    sbit  SEG12_LCDD13_bit at LCDD13.B4;
    sbit  SEG13_LCDD13_bit at LCDD13.B5;
    sbit  SEG14_LCDD13_bit at LCDD13.B6;
    sbit  SEG15_LCDD13_bit at LCDD13.B7;

    // LCDD14 bits
    sbit  SEG16_LCDD14_bit at LCDD14.B0;
    sbit  SEG17_LCDD14_bit at LCDD14.B1;
    sbit  SEG18_LCDD14_bit at LCDD14.B2;
    sbit  SEG19_LCDD14_bit at LCDD14.B3;
    sbit  SEG20_LCDD14_bit at LCDD14.B4;
    sbit  SEG21_LCDD14_bit at LCDD14.B5;
    sbit  SEG22_LCDD14_bit at LCDD14.B6;
    sbit  SEG23_LCDD14_bit at LCDD14.B7;

    // LCDD15 bits
    sbit  SEG24_LCDD15_bit at LCDD15.B0;
    sbit  SEG25_LCDD15_bit at LCDD15.B1;
    sbit  SEG26_LCDD15_bit at LCDD15.B2;
    sbit  SEG27_LCDD15_bit at LCDD15.B3;
    sbit  SEG28_LCDD15_bit at LCDD15.B4;
    sbit  SEG29_LCDD15_bit at LCDD15.B5;
    sbit  SEG30_LCDD15_bit at LCDD15.B6;
    sbit  SEG31_LCDD15_bit at LCDD15.B7;

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
    const register unsigned short int RF0 = 0;
    sbit  RF0_bit at PORTF.B0;

    // PORTG bits
    const register unsigned short int RG7 = 7;
    sbit  RG7_bit at PORTG.B7;
    const register unsigned short int RG6 = 6;
    sbit  RG6_bit at PORTG.B6;
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
    const register unsigned short int TRISF0 = 0;
    sbit  TRISF0_bit at TRISF.B0;

    // TRISG bits
    const register unsigned short int TRISG7 = 7;
    sbit  TRISG7_bit at TRISG.B7;
    const register unsigned short int TRISG6 = 6;
    sbit  TRISG6_bit at TRISG.B6;
    const register unsigned short int TRISG5 = 5;
    sbit  TRISG5_bit at TRISG.B5;
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
