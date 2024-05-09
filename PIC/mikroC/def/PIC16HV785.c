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
sfr unsigned short volatile TMR1L            absolute 0x000E;
sfr unsigned short volatile TMR1H            absolute 0x000F;
sfr unsigned short volatile T1CON            absolute 0x0010;
sfr unsigned short volatile TMR2             absolute 0x0011;
sfr unsigned short volatile T2CON            absolute 0x0012;
sfr unsigned short volatile CCPR1L           absolute 0x0013;
sfr unsigned short volatile CCPR1H           absolute 0x0014;
sfr unsigned short volatile CCP1CON          absolute 0x0015;
sfr unsigned short          WDTCON           absolute 0x0018;
sfr unsigned short volatile ADRESH           absolute 0x001E;
sfr unsigned short volatile ADCON0           absolute 0x001F;
sfr unsigned short volatile OPTION_REG       absolute 0x0081;
sfr unsigned short volatile PIE1             absolute 0x008C;
sfr unsigned short volatile PCON             absolute 0x008E;
sfr unsigned short volatile OSCCON           absolute 0x008F;
sfr unsigned short volatile OSCTUNE          absolute 0x0090;
sfr unsigned short          ANSEL            absolute 0x0091;
sfr unsigned short          ANSEL0           absolute 0x0091;
sfr unsigned short volatile PR2              absolute 0x0092;
sfr unsigned short          ANSEL1           absolute 0x0093;
sfr unsigned short          WPU              absolute 0x0095;
sfr unsigned short          WPUA             absolute 0x0095;
sfr unsigned short volatile IOC              absolute 0x0096;
sfr unsigned short volatile IOCA             absolute 0x0096;
sfr unsigned short volatile REFCON           absolute 0x0098;
sfr unsigned short volatile VRCON            absolute 0x0099;
sfr unsigned short volatile EEDAT            absolute 0x009A;
sfr unsigned short volatile EEDATA           absolute 0x009A;
sfr unsigned short volatile EEADR            absolute 0x009B;
sfr unsigned short volatile EECON1           absolute 0x009C;
sfr unsigned short volatile EECON2           absolute 0x009D;
sfr unsigned short volatile ADRESL           absolute 0x009E;
sfr unsigned short volatile ADCON1           absolute 0x009F;
sfr unsigned short          PWMCON1          absolute 0x0110;
sfr unsigned short          PWMCON0          absolute 0x0111;
sfr unsigned short          PWMCLK           absolute 0x0112;
sfr unsigned short          PWMPH1           absolute 0x0113;
sfr unsigned short          PWMPH2           absolute 0x0114;
sfr unsigned short volatile CM1CON0          absolute 0x0119;
sfr unsigned short volatile CM2CON0          absolute 0x011A;
sfr unsigned short volatile CM2CON1          absolute 0x011B;
sfr unsigned short volatile OPA1CON          absolute 0x011C;
sfr unsigned short volatile OPA2CON          absolute 0x011D;
sfr unsigned short volatile PORTA            absolute 0x0005;
sfr unsigned short volatile PORTB            absolute 0x0006;
sfr unsigned short volatile PORTC            absolute 0x0007;
sfr unsigned int   volatile CCPR             absolute 0x0013;
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
    const register unsigned short int RAIF = 0;
    sbit  RAIF_bit at INTCON.B0;
    const register unsigned short int INTF = 1;
    sbit  INTF_bit at INTCON.B1;
    const register unsigned short int T0IF = 2;
    sbit  T0IF_bit at INTCON.B2;
    const register unsigned short int RAIE = 3;
    sbit  RAIE_bit at INTCON.B3;
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
    const register unsigned short int OSFIF = 2;
    sbit  OSFIF_bit at PIR1.B2;
    const register unsigned short int C1IF = 3;
    sbit  C1IF_bit at PIR1.B3;
    const register unsigned short int C2IF = 4;
    sbit  C2IF_bit at PIR1.B4;
    const register unsigned short int CCP1IF = 5;
    sbit  CCP1IF_bit at PIR1.B5;
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;
    const register unsigned short int EEIF = 7;
    sbit  EEIF_bit at PIR1.B7;
    const register unsigned short int T1IF = 0;
    sbit  T1IF_bit at PIR1.B0;
    const register unsigned short int T2IF = 1;
    sbit  T2IF_bit at PIR1.B1;

    // T1CON bits
    const register unsigned short int TMR1ON = 0;
    sbit  TMR1ON_bit at T1CON.B0;
    const register unsigned short int TMR1CS = 1;
    sbit  TMR1CS_bit at T1CON.B1;
    const register unsigned short int NOT_T1SYNC = 2;
    sbit  NOT_T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1OSCEN = 3;
    sbit  T1OSCEN_bit at T1CON.B3;
    const register unsigned short int TMR1GE = 6;
    sbit  TMR1GE_bit at T1CON.B6;
    const register unsigned short int T1GINV = 7;
    sbit  T1GINV_bit at T1CON.B7;
    const register unsigned short int T1CKPS0 = 4;
    sbit  T1CKPS0_bit at T1CON.B4;
    const register unsigned short int T1CKPS1 = 5;
    sbit  T1CKPS1_bit at T1CON.B5;
    const register unsigned short int T1GE = 6;
    sbit  T1GE_bit at T1CON.B6;

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

    // ADCON0 bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON0.B0;
    const register unsigned short int GO_NOT_DONE = 1;
    sbit  GO_NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int VCFG = 6;
    sbit  VCFG_bit at ADCON0.B6;
    const register unsigned short int ADFM = 7;
    sbit  ADFM_bit at ADCON0.B7;
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
    const register unsigned short int NOT_RAPU = 7;
    sbit  NOT_RAPU_bit at OPTION_REG.B7;
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
    const register unsigned short int OSFIE = 2;
    sbit  OSFIE_bit at PIE1.B2;
    const register unsigned short int C1IE = 3;
    sbit  C1IE_bit at PIE1.B3;
    const register unsigned short int C2IE = 4;
    sbit  C2IE_bit at PIE1.B4;
    const register unsigned short int CCP1IE = 5;
    sbit  CCP1IE_bit at PIE1.B5;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;
    const register unsigned short int EEIE = 7;
    sbit  EEIE_bit at PIE1.B7;
    const register unsigned short int T1IE = 0;
    sbit  T1IE_bit at PIE1.B0;
    const register unsigned short int T2IE = 1;
    sbit  T2IE_bit at PIE1.B1;

    // PCON bits
    const register unsigned short int NOT_BOR = 0;
    sbit  NOT_BOR_bit at PCON.B0;
    const register unsigned short int NOT_POR = 1;
    sbit  NOT_POR_bit at PCON.B1;
    const register unsigned short int SBOREN = 4;
    sbit  SBOREN_bit at PCON.B4;
    const register unsigned short int NOT_BOD = 0;
    sbit  NOT_BOD_bit at PCON.B0;
    const register unsigned short int SBODEN = 4;
    sbit  SBODEN_bit at PCON.B4;

    // OSCCON bits
    const register unsigned short int SCS = 0;
    sbit  SCS_bit at OSCCON.B0;
    const register unsigned short int LTS = 1;
    sbit  LTS_bit at OSCCON.B1;
    const register unsigned short int HTS = 2;
    sbit  HTS_bit at OSCCON.B2;
    const register unsigned short int OSTS = 3;
    sbit  OSTS_bit at OSCCON.B3;
    const register unsigned short int IRCF0 = 4;
    sbit  IRCF0_bit at OSCCON.B4;
    const register unsigned short int IRCF1 = 5;
    sbit  IRCF1_bit at OSCCON.B5;
    const register unsigned short int IRCF2 = 6;
    sbit  IRCF2_bit at OSCCON.B6;

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

    // ANSEL, ANSEL0 bits
    const register unsigned short int ANS0 = 0;
    sbit  ANS0_bit at ANSEL.B0;
    const register unsigned short int ANS1 = 1;
    sbit  ANS1_bit at ANSEL.B1;
    const register unsigned short int ANS2 = 2;
    sbit  ANS2_bit at ANSEL.B2;
    const register unsigned short int ANS3 = 3;
    sbit  ANS3_bit at ANSEL.B3;
    const register unsigned short int ANS4 = 4;
    sbit  ANS4_bit at ANSEL.B4;
    const register unsigned short int ANS5 = 5;
    sbit  ANS5_bit at ANSEL.B5;
    const register unsigned short int ANS6 = 6;
    sbit  ANS6_bit at ANSEL.B6;
    const register unsigned short int ANS7 = 7;
    sbit  ANS7_bit at ANSEL.B7;

    // ANSEL1 bits
    const register unsigned short int ANS8 = 0;
    sbit  ANS8_bit at ANSEL1.B0;
    const register unsigned short int ANS9 = 1;
    sbit  ANS9_bit at ANSEL1.B1;
    const register unsigned short int ANS10 = 2;
    sbit  ANS10_bit at ANSEL1.B2;
    const register unsigned short int ANS11 = 3;
    sbit  ANS11_bit at ANSEL1.B3;

    // WPU, WPUA bits
    const register unsigned short int WPUA0 = 0;
    sbit  WPUA0_bit at WPU.B0;
    const register unsigned short int WPUA1 = 1;
    sbit  WPUA1_bit at WPU.B1;
    const register unsigned short int WPUA2 = 2;
    sbit  WPUA2_bit at WPU.B2;
    const register unsigned short int WPUA3 = 3;
    sbit  WPUA3_bit at WPU.B3;
    const register unsigned short int WPUA4 = 4;
    sbit  WPUA4_bit at WPU.B4;
    const register unsigned short int WPUA5 = 5;
    sbit  WPUA5_bit at WPU.B5;
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

    // IOC bits
    const register unsigned short int IOCA0 = 0;
    sbit  IOCA0_bit at IOC.B0;
    const register unsigned short int IOCA1 = 1;
    sbit  IOCA1_bit at IOC.B1;
    const register unsigned short int IOCA2 = 2;
    sbit  IOCA2_bit at IOC.B2;
    const register unsigned short int IOCA3 = 3;
    sbit  IOCA3_bit at IOC.B3;
    const register unsigned short int IOCA4 = 4;
    sbit  IOCA4_bit at IOC.B4;
    const register unsigned short int IOCA5 = 5;
    sbit  IOCA5_bit at IOC.B5;
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

    // IOCA bits
    sbit  IOCA0_IOCA_bit at IOCA.B0;
    sbit  IOCA1_IOCA_bit at IOCA.B1;
    sbit  IOCA2_IOCA_bit at IOCA.B2;
    sbit  IOCA3_IOCA_bit at IOCA.B3;
    sbit  IOCA4_IOCA_bit at IOCA.B4;
    sbit  IOCA5_IOCA_bit at IOCA.B5;
    sbit  IOC0_IOCA_bit at IOCA.B0;
    sbit  IOC1_IOCA_bit at IOCA.B1;
    sbit  IOC2_IOCA_bit at IOCA.B2;
    sbit  IOC3_IOCA_bit at IOCA.B3;
    sbit  IOC4_IOCA_bit at IOCA.B4;
    sbit  IOC5_IOCA_bit at IOCA.B5;

    // REFCON bits
    const register unsigned short int CVROE = 1;
    sbit  CVROE_bit at REFCON.B1;
    const register unsigned short int VROE = 2;
    sbit  VROE_bit at REFCON.B2;
    const register unsigned short int VREN = 3;
    sbit  VREN_bit at REFCON.B3;
    const register unsigned short int VRBB = 4;
    sbit  VRBB_bit at REFCON.B4;
    const register unsigned short int BGST = 5;
    sbit  BGST_bit at REFCON.B5;

    // VRCON bits
    const register unsigned short int VR0 = 0;
    sbit  VR0_bit at VRCON.B0;
    const register unsigned short int VR1 = 1;
    sbit  VR1_bit at VRCON.B1;
    const register unsigned short int VR2 = 2;
    sbit  VR2_bit at VRCON.B2;
    const register unsigned short int VR3 = 3;
    sbit  VR3_bit at VRCON.B3;
    const register unsigned short int VRR = 5;
    sbit  VRR_bit at VRCON.B5;
    const register unsigned short int C2VREN = 6;
    sbit  C2VREN_bit at VRCON.B6;
    const register unsigned short int C1VREN = 7;
    sbit  C1VREN_bit at VRCON.B7;

    // EECON1 bits
    const register unsigned short int RD = 0;
    sbit  RD_bit at EECON1.B0;
    const register unsigned short int WR = 1;
    sbit  WR_bit at EECON1.B1;
    const register unsigned short int WREN = 2;
    sbit  WREN_bit at EECON1.B2;
    const register unsigned short int WRERR = 3;
    sbit  WRERR_bit at EECON1.B3;

    // ADCON1 bits
    const register unsigned short int ADCS0 = 4;
    sbit  ADCS0_bit at ADCON1.B4;
    const register unsigned short int ADCS1 = 5;
    sbit  ADCS1_bit at ADCON1.B5;
    const register unsigned short int ADCS2 = 6;
    sbit  ADCS2_bit at ADCON1.B6;

    // PWMCON1 bits
    const register unsigned short int OVRLP = 7;
    sbit  OVRLP_bit at PWMCON1.B7;
    const register unsigned short int CMDLY0 = 0;
    sbit  CMDLY0_bit at PWMCON1.B0;
    const register unsigned short int CMDLY1 = 1;
    sbit  CMDLY1_bit at PWMCON1.B1;
    const register unsigned short int CMDLY2 = 2;
    sbit  CMDLY2_bit at PWMCON1.B2;
    const register unsigned short int CMDLY3 = 3;
    sbit  CMDLY3_bit at PWMCON1.B3;
    const register unsigned short int CMDLY4 = 4;
    sbit  CMDLY4_bit at PWMCON1.B4;
    const register unsigned short int COMOD0 = 5;
    sbit  COMOD0_bit at PWMCON1.B5;
    const register unsigned short int COMOD1 = 6;
    sbit  COMOD1_bit at PWMCON1.B6;

    // PWMCON0 bits
    const register unsigned short int PH1EN = 0;
    sbit  PH1EN_bit at PWMCON0.B0;
    const register unsigned short int PH2EN = 1;
    sbit  PH2EN_bit at PWMCON0.B1;
    const register unsigned short int BLANK1 = 4;
    sbit  BLANK1_bit at PWMCON0.B4;
    const register unsigned short int BLANK2 = 5;
    sbit  BLANK2_bit at PWMCON0.B5;
    const register unsigned short int PASEN = 6;
    sbit  PASEN_bit at PWMCON0.B6;
    const register unsigned short int PRSEN = 7;
    sbit  PRSEN_bit at PWMCON0.B7;
    const register unsigned short int SYNC0 = 2;
    sbit  SYNC0_bit at PWMCON0.B2;
    const register unsigned short int SYNC1 = 3;
    sbit  SYNC1_bit at PWMCON0.B3;

    // PWMCLK bits
    const register unsigned short int PWMASE = 7;
    sbit  PWMASE_bit at PWMCLK.B7;
    const register unsigned short int PER0 = 0;
    sbit  PER0_bit at PWMCLK.B0;
    const register unsigned short int PER1 = 1;
    sbit  PER1_bit at PWMCLK.B1;
    const register unsigned short int PER2 = 2;
    sbit  PER2_bit at PWMCLK.B2;
    const register unsigned short int PER3 = 3;
    sbit  PER3_bit at PWMCLK.B3;
    const register unsigned short int PER4 = 4;
    sbit  PER4_bit at PWMCLK.B4;
    const register unsigned short int PWMP0 = 5;
    sbit  PWMP0_bit at PWMCLK.B5;
    const register unsigned short int PWMP1 = 6;
    sbit  PWMP1_bit at PWMCLK.B6;

    // PWMPH1 bits
    const register unsigned short int C1EN = 5;
    sbit  C1EN_bit at PWMPH1.B5;
    const register unsigned short int C2EN = 6;
    sbit  C2EN_bit at PWMPH1.B6;
    const register unsigned short int POL = 7;
    sbit  POL_bit at PWMPH1.B7;
    const register unsigned short int PH0 = 0;
    sbit  PH0_bit at PWMPH1.B0;
    const register unsigned short int PH1 = 1;
    sbit  PH1_bit at PWMPH1.B1;
    const register unsigned short int PH2 = 2;
    sbit  PH2_bit at PWMPH1.B2;
    const register unsigned short int PH3 = 3;
    sbit  PH3_bit at PWMPH1.B3;
    const register unsigned short int PH4 = 4;
    sbit  PH4_bit at PWMPH1.B4;

    // PWMPH2 bits
    sbit  C1EN_PWMPH2_bit at PWMPH2.B5;
    sbit  C2EN_PWMPH2_bit at PWMPH2.B6;
    sbit  POL_PWMPH2_bit at PWMPH2.B7;
    sbit  PH0_PWMPH2_bit at PWMPH2.B0;
    sbit  PH1_PWMPH2_bit at PWMPH2.B1;
    sbit  PH2_PWMPH2_bit at PWMPH2.B2;
    sbit  PH3_PWMPH2_bit at PWMPH2.B3;
    sbit  PH4_PWMPH2_bit at PWMPH2.B4;

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

    // CM2CON1 bits
    const register unsigned short int C2SYNC = 0;
    sbit  C2SYNC_bit at CM2CON1.B0;
    const register unsigned short int T1GSS = 1;
    sbit  T1GSS_bit at CM2CON1.B1;
    const register unsigned short int MC2OUT = 6;
    sbit  MC2OUT_bit at CM2CON1.B6;
    const register unsigned short int MC1OUT = 7;
    sbit  MC1OUT_bit at CM2CON1.B7;

    // OPA1CON bits
    const register unsigned short int OPAON = 7;
    sbit  OPAON_bit at OPA1CON.B7;

    // OPA2CON bits
    sbit  OPAON_OPA2CON_bit at OPA2CON.B7;

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
