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
sfr unsigned short          WDTCON           absolute 0x0018;
sfr unsigned short volatile CMCON0           absolute 0x0019;
sfr unsigned short volatile CMCON1           absolute 0x001A;
sfr unsigned short volatile OPTION_REG       absolute 0x0081;
sfr unsigned short volatile PIE1             absolute 0x008C;
sfr unsigned short volatile PCON             absolute 0x008E;
sfr unsigned short volatile OSCCON           absolute 0x008F;
sfr unsigned short volatile OSCTUNE          absolute 0x0090;
sfr unsigned short volatile LVDCON           absolute 0x0094;
sfr unsigned short volatile WPUDA            absolute 0x0095;
sfr unsigned short volatile IOCA             absolute 0x0096;
sfr unsigned short volatile WDA              absolute 0x0097;
sfr unsigned short volatile VRCON            absolute 0x0099;
sfr unsigned short volatile EEDAT            absolute 0x009A;
sfr unsigned short volatile EEDATA           absolute 0x009A;
sfr unsigned short volatile EEADR            absolute 0x009B;
sfr unsigned short volatile EECON1           absolute 0x009C;
sfr unsigned short volatile EECON2           absolute 0x009D;
sfr unsigned short volatile CRCON            absolute 0x0110;
sfr unsigned short volatile CRDAT0           absolute 0x0111;
sfr unsigned short volatile CRDAT1           absolute 0x0112;
sfr unsigned short volatile CRDAT2           absolute 0x0113;
sfr unsigned short volatile CRDAT3           absolute 0x0114;
sfr unsigned short volatile PORTA            absolute 0x0005;
sfr unsigned short volatile PORTC            absolute 0x0007;
sfr unsigned short volatile TRISA            absolute 0x0085;
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

    // PIR1 bits
    const register unsigned short int TMR1IF = 0;
    sbit  TMR1IF_bit at PIR1.B0;
    const register unsigned short int OSFIF = 2;
    sbit  OSFIF_bit at PIR1.B2;
    const register unsigned short int C1IF = 3;
    sbit  C1IF_bit at PIR1.B3;
    const register unsigned short int C2IF = 4;
    sbit  C2IF_bit at PIR1.B4;
    const register unsigned short int CRIF = 5;
    sbit  CRIF_bit at PIR1.B5;
    const register unsigned short int LVDIF = 6;
    sbit  LVDIF_bit at PIR1.B6;
    const register unsigned short int EEIF = 7;
    sbit  EEIF_bit at PIR1.B7;

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

    // CMCON0 bits
    const register unsigned short int CIS = 3;
    sbit  CIS_bit at CMCON0.B3;
    const register unsigned short int C1INV = 4;
    sbit  C1INV_bit at CMCON0.B4;
    const register unsigned short int C2INV = 5;
    sbit  C2INV_bit at CMCON0.B5;
    const register unsigned short int C1OUT = 6;
    sbit  C1OUT_bit at CMCON0.B6;
    const register unsigned short int C2OUT = 7;
    sbit  C2OUT_bit at CMCON0.B7;
    const register unsigned short int CM0 = 0;
    sbit  CM0_bit at CMCON0.B0;
    const register unsigned short int CM1 = 1;
    sbit  CM1_bit at CMCON0.B1;
    const register unsigned short int CM2 = 2;
    sbit  CM2_bit at CMCON0.B2;

    // CMCON1 bits
    const register unsigned short int C2SYNC = 0;
    sbit  C2SYNC_bit at CMCON1.B0;
    const register unsigned short int T1GSS = 1;
    sbit  T1GSS_bit at CMCON1.B1;

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
    const register unsigned short int OSFIE = 2;
    sbit  OSFIE_bit at PIE1.B2;
    const register unsigned short int C1IE = 3;
    sbit  C1IE_bit at PIE1.B3;
    const register unsigned short int C2IE = 4;
    sbit  C2IE_bit at PIE1.B4;
    const register unsigned short int CRIE = 5;
    sbit  CRIE_bit at PIE1.B5;
    const register unsigned short int LVDIE = 6;
    sbit  LVDIE_bit at PIE1.B6;
    const register unsigned short int EEIE = 7;
    sbit  EEIE_bit at PIE1.B7;

    // PCON bits
    const register unsigned short int NOT_BOR = 0;
    sbit  NOT_BOR_bit at PCON.B0;
    const register unsigned short int NOT_POR = 1;
    sbit  NOT_POR_bit at PCON.B1;
    const register unsigned short int NOT_WUR = 3;
    sbit  NOT_WUR_bit at PCON.B3;
    const register unsigned short int SBOREN = 4;
    sbit  SBOREN_bit at PCON.B4;
    const register unsigned short int ULPWUE = 5;
    sbit  ULPWUE_bit at PCON.B5;
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

    // WPUDA bits
    const register unsigned short int WPUDA0 = 0;
    sbit  WPUDA0_bit at WPUDA.B0;
    const register unsigned short int WPUDA1 = 1;
    sbit  WPUDA1_bit at WPUDA.B1;
    const register unsigned short int WPUDA2 = 2;
    sbit  WPUDA2_bit at WPUDA.B2;
    const register unsigned short int WPUDA4 = 4;
    sbit  WPUDA4_bit at WPUDA.B4;
    const register unsigned short int WPUDA5 = 5;
    sbit  WPUDA5_bit at WPUDA.B5;

    // IOCA bits
    const register unsigned short int IOCA0 = 0;
    sbit  IOCA0_bit at IOCA.B0;
    const register unsigned short int IOCA1 = 1;
    sbit  IOCA1_bit at IOCA.B1;
    const register unsigned short int IOCA2 = 2;
    sbit  IOCA2_bit at IOCA.B2;
    const register unsigned short int IOCA3 = 3;
    sbit  IOCA3_bit at IOCA.B3;
    const register unsigned short int IOCA4 = 4;
    sbit  IOCA4_bit at IOCA.B4;
    const register unsigned short int IOCA5 = 5;
    sbit  IOCA5_bit at IOCA.B5;

    // WDA bits
    const register unsigned short int WDA0 = 0;
    sbit  WDA0_bit at WDA.B0;
    const register unsigned short int WDA1 = 1;
    sbit  WDA1_bit at WDA.B1;
    const register unsigned short int WDA2 = 2;
    sbit  WDA2_bit at WDA.B2;
    const register unsigned short int WDA4 = 4;
    sbit  WDA4_bit at WDA.B4;
    const register unsigned short int WDA5 = 5;
    sbit  WDA5_bit at WDA.B5;

    // VRCON bits
    const register unsigned short int VRR = 5;
    sbit  VRR_bit at VRCON.B5;
    const register unsigned short int VREN = 7;
    sbit  VREN_bit at VRCON.B7;
    const register unsigned short int VR0 = 0;
    sbit  VR0_bit at VRCON.B0;
    const register unsigned short int VR1 = 1;
    sbit  VR1_bit at VRCON.B1;
    const register unsigned short int VR2 = 2;
    sbit  VR2_bit at VRCON.B2;
    const register unsigned short int VR3 = 3;
    sbit  VR3_bit at VRCON.B3;

    // EECON1 bits
    const register unsigned short int RD = 0;
    sbit  RD_bit at EECON1.B0;
    const register unsigned short int WR = 1;
    sbit  WR_bit at EECON1.B1;
    const register unsigned short int WREN = 2;
    sbit  WREN_bit at EECON1.B2;
    const register unsigned short int WRERR = 3;
    sbit  WRERR_bit at EECON1.B3;

    // CRCON bits
    const register unsigned short int ENC_NOT_DEC = 6;
    sbit  ENC_NOT_DEC_bit at CRCON.B6;
    const register unsigned short int GO_NOT_DONE = 7;
    sbit  GO_NOT_DONE_bit at CRCON.B7;
    const register unsigned short int CRREG0 = 0;
    sbit  CRREG0_bit at CRCON.B0;
    const register unsigned short int CRREG1 = 1;
    sbit  CRREG1_bit at CRCON.B1;
    const register unsigned short int ENC_DEC = 6;
    sbit  ENC_DEC_bit at CRCON.B6;
    const register unsigned short int GO = 7;
    sbit  GO_bit at CRCON.B7;

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
