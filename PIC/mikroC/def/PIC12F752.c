// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00000400;

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
sfr unsigned short volatile IOCAF            absolute 0x0008;
sfr unsigned short volatile PCLATH           absolute 0x000A;
sfr unsigned short volatile INTCON           absolute 0x000B;
sfr unsigned short volatile PIR1             absolute 0x000C;
sfr unsigned short volatile PIR2             absolute 0x000D;
sfr unsigned short volatile TMR1L            absolute 0x000F;
sfr unsigned short volatile TMR1H            absolute 0x0010;
sfr unsigned short volatile T1CON            absolute 0x0011;
sfr unsigned short volatile T1GCON           absolute 0x0012;
sfr unsigned int   volatile CCPR1            absolute 0x0013;
sfr unsigned short volatile CCPR1L           absolute 0x0013;
sfr unsigned short volatile CCPR1H           absolute 0x0014;
sfr unsigned short volatile CCP1CON          absolute 0x0015;
sfr unsigned short volatile ADRESL           absolute 0x001C;
sfr unsigned short volatile ADRESH           absolute 0x001D;
sfr unsigned short volatile ADCON0           absolute 0x001E;
sfr unsigned short volatile ADCON1           absolute 0x001F;
sfr unsigned short volatile OPTION_REG       absolute 0x0081;
sfr unsigned short volatile IOCAP            absolute 0x0088;
sfr unsigned short volatile PIE1             absolute 0x008C;
sfr unsigned short volatile PIE2             absolute 0x008D;
sfr unsigned short volatile OSCCON           absolute 0x008F;
sfr unsigned short volatile FVRCON           absolute 0x0090;
sfr unsigned short volatile DACCON0          absolute 0x0091;
sfr unsigned short volatile DACCON1          absolute 0x0092;
sfr unsigned short volatile C2CON0           absolute 0x009B;
sfr unsigned short volatile CM2CON0          absolute 0x009B;
sfr unsigned short volatile C2CON1           absolute 0x009C;
sfr unsigned short volatile CM2CON1          absolute 0x009C;
sfr unsigned short volatile C1CON0           absolute 0x009D;
sfr unsigned short volatile CM1CON0          absolute 0x009D;
sfr unsigned short volatile C1CON1           absolute 0x009E;
sfr unsigned short volatile CM1CON1          absolute 0x009E;
sfr unsigned short volatile CMOUT            absolute 0x009F;
sfr unsigned short volatile MCOUT            absolute 0x009F;
sfr unsigned short volatile LATA             absolute 0x0105;
sfr unsigned short volatile IOCAN            absolute 0x0108;
sfr unsigned short          WPUA             absolute 0x010C;
sfr unsigned short volatile SLRCONA          absolute 0x010D;
sfr unsigned short volatile PCON             absolute 0x010F;
sfr unsigned short volatile TMR2             absolute 0x0110;
sfr unsigned short volatile PR2              absolute 0x0111;
sfr unsigned short volatile T2CON            absolute 0x0112;
sfr unsigned short volatile HLTMR1           absolute 0x0113;
sfr unsigned short volatile HLTPR1           absolute 0x0114;
sfr unsigned short volatile HLT1CON0         absolute 0x0115;
sfr unsigned short volatile HLT1CON1         absolute 0x0116;
sfr unsigned short volatile ANSELA           absolute 0x0185;
sfr unsigned short          APFCON           absolute 0x0188;
sfr unsigned short volatile OSCTUNE          absolute 0x0189;
sfr unsigned short volatile PMCON1           absolute 0x018C;
sfr unsigned short volatile PMCON2           absolute 0x018D;
sfr unsigned int   volatile PMADR            absolute 0x018E;
sfr unsigned short volatile PMADRL           absolute 0x018E;
sfr unsigned short volatile PMADRH           absolute 0x018F;
sfr unsigned int   volatile PMDAT            absolute 0x0190;
sfr unsigned short volatile PMDATL           absolute 0x0190;
sfr unsigned short volatile PMDATH           absolute 0x0191;
sfr unsigned short volatile COG1PH           absolute 0x0192;
sfr unsigned short volatile COG1BLK          absolute 0x0193;
sfr unsigned short volatile COG1DB           absolute 0x0194;
sfr unsigned short volatile COG1CON0         absolute 0x0195;
sfr unsigned short volatile COG1CON1         absolute 0x0196;
sfr unsigned short volatile COG1ASD          absolute 0x0197;
sfr unsigned short volatile PORTA            absolute 0x0005;
sfr unsigned short volatile TRISA            absolute 0x0085;

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
    const register unsigned short int RP0 = 5;
    sbit  RP0_bit at STATUS.B5;
    const register unsigned short int RP1 = 6;
    sbit  RP1_bit at STATUS.B6;
    const register unsigned short int IRP = 7;
    sbit  IRP_bit at STATUS.B7;

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

    // INTCON bits
    const register unsigned short int IOCIF = 0;
    sbit  IOCIF_bit at INTCON.B0;
    const register unsigned short int INTF = 1;
    sbit  INTF_bit at INTCON.B1;
    const register unsigned short int T0IF = 2;
    sbit  T0IF_bit at INTCON.B2;
    const register unsigned short int IOCIE = 3;
    sbit  IOCIE_bit at INTCON.B3;
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
    const register unsigned short int TMR2IF = 1;
    sbit  TMR2IF_bit at PIR1.B1;
    const register unsigned short int HLTMR1IF = 2;
    sbit  HLTMR1IF_bit at PIR1.B2;
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;
    const register unsigned short int TMR1GIF = 7;
    sbit  TMR1GIF_bit at PIR1.B7;

    // PIR2 bits
    const register unsigned short int CCP1IF = 0;
    sbit  CCP1IF_bit at PIR2.B0;
    const register unsigned short int COG1IF = 2;
    sbit  COG1IF_bit at PIR2.B2;
    const register unsigned short int C1IF = 4;
    sbit  C1IF_bit at PIR2.B4;
    const register unsigned short int C2IF = 5;
    sbit  C2IF_bit at PIR2.B5;

    // T1CON bits
    const register unsigned short int TMR1ON = 0;
    sbit  TMR1ON_bit at T1CON.B0;
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
    const register unsigned short int T1GGO = 3;
    sbit  T1GGO_bit at T1GCON.B3;

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

    // ADCON0 bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON0.B0;
    const register unsigned short int GO_NOT_DONE = 1;
    sbit  GO_NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int GO_DONE = 1;
    sbit  GO_DONE_bit at ADCON0.B1;
    const register unsigned short int VCFG = 6;
    sbit  VCFG_bit at ADCON0.B6;
    const register unsigned short int ADFM = 7;
    sbit  ADFM_bit at ADCON0.B7;
    const register unsigned short int CHS0 = 2;
    sbit  CHS0_bit at ADCON0.B2;
    const register unsigned short int CHS1 = 3;
    sbit  CHS1_bit at ADCON0.B3;
    const register unsigned short int CHS2 = 4;
    sbit  CHS2_bit at ADCON0.B4;
    const register unsigned short int CHS3 = 5;
    sbit  CHS3_bit at ADCON0.B5;

    // ADCON1 bits
    const register unsigned short int ADCS0 = 4;
    sbit  ADCS0_bit at ADCON1.B4;
    const register unsigned short int ADCS1 = 5;
    sbit  ADCS1_bit at ADCON1.B5;
    const register unsigned short int ADCS2 = 6;
    sbit  ADCS2_bit at ADCON1.B6;

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

    // PIE1 bits
    const register unsigned short int TMR1IE = 0;
    sbit  TMR1IE_bit at PIE1.B0;
    const register unsigned short int TMR2IE = 1;
    sbit  TMR2IE_bit at PIE1.B1;
    const register unsigned short int HLTMR1IE = 2;
    sbit  HLTMR1IE_bit at PIE1.B2;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;
    const register unsigned short int TMR1GIE = 7;
    sbit  TMR1GIE_bit at PIE1.B7;

    // PIE2 bits
    const register unsigned short int CCP1IE = 0;
    sbit  CCP1IE_bit at PIE2.B0;
    const register unsigned short int COG1IE = 2;
    sbit  COG1IE_bit at PIE2.B2;
    const register unsigned short int C1IE = 4;
    sbit  C1IE_bit at PIE2.B4;
    const register unsigned short int C2IE = 5;
    sbit  C2IE_bit at PIE2.B5;

    // OSCCON bits
    const register unsigned short int LTS = 1;
    sbit  LTS_bit at OSCCON.B1;
    const register unsigned short int HTS = 2;
    sbit  HTS_bit at OSCCON.B2;
    const register unsigned short int IRCF0 = 4;
    sbit  IRCF0_bit at OSCCON.B4;
    const register unsigned short int IRCF1 = 5;
    sbit  IRCF1_bit at OSCCON.B5;

    // FVRCON bits
    const register unsigned short int FVRBUFSS = 4;
    sbit  FVRBUFSS_bit at FVRCON.B4;
    const register unsigned short int FVRBUFEN = 5;
    sbit  FVRBUFEN_bit at FVRCON.B5;
    const register unsigned short int FVRRDY = 6;
    sbit  FVRRDY_bit at FVRCON.B6;
    const register unsigned short int FVREN = 7;
    sbit  FVREN_bit at FVRCON.B7;

    // DACCON0 bits
    const register unsigned short int DACPSS0 = 2;
    sbit  DACPSS0_bit at DACCON0.B2;
    const register unsigned short int DACOE = 5;
    sbit  DACOE_bit at DACCON0.B5;
    const register unsigned short int DACRNG = 6;
    sbit  DACRNG_bit at DACCON0.B6;
    const register unsigned short int DACEN = 7;
    sbit  DACEN_bit at DACCON0.B7;

    // DACCON1 bits
    const register unsigned short int DACR0 = 0;
    sbit  DACR0_bit at DACCON1.B0;
    const register unsigned short int DACR1 = 1;
    sbit  DACR1_bit at DACCON1.B1;
    const register unsigned short int DACR2 = 2;
    sbit  DACR2_bit at DACCON1.B2;
    const register unsigned short int DACR3 = 3;
    sbit  DACR3_bit at DACCON1.B3;
    const register unsigned short int DACR4 = 4;
    sbit  DACR4_bit at DACCON1.B4;

    // C2CON0, CM2CON0 bits
    const register unsigned short int C2SYNC = 0;
    sbit  C2SYNC_bit at C2CON0.B0;
    const register unsigned short int C2HYS = 1;
    sbit  C2HYS_bit at C2CON0.B1;
    const register unsigned short int C2SP = 2;
    sbit  C2SP_bit at C2CON0.B2;
    const register unsigned short int C2ZLF = 3;
    sbit  C2ZLF_bit at C2CON0.B3;
    const register unsigned short int C2POL = 4;
    sbit  C2POL_bit at C2CON0.B4;
    const register unsigned short int C2OE = 5;
    sbit  C2OE_bit at C2CON0.B5;
    const register unsigned short int C2OUT = 6;
    sbit  C2OUT_bit at C2CON0.B6;
    const register unsigned short int C2ON = 7;
    sbit  C2ON_bit at C2CON0.B7;

    // C2CON1 bits
    const register unsigned short int C2NCH0 = 0;
    sbit  C2NCH0_bit at C2CON1.B0;
    const register unsigned short int C2INTN = 6;
    sbit  C2INTN_bit at C2CON1.B6;
    const register unsigned short int C2INTP = 7;
    sbit  C2INTP_bit at C2CON1.B7;
    const register unsigned short int C2PCH0 = 4;
    sbit  C2PCH0_bit at C2CON1.B4;
    const register unsigned short int C2PCH1 = 5;
    sbit  C2PCH1_bit at C2CON1.B5;

    // CM2CON1 bits
    sbit  C2NCH0_CM2CON1_bit at CM2CON1.B0;
    sbit  C2INTN_CM2CON1_bit at CM2CON1.B6;
    sbit  C2INTP_CM2CON1_bit at CM2CON1.B7;
    sbit  C2PCH0_CM2CON1_bit at CM2CON1.B4;
    sbit  C2PCH1_CM2CON1_bit at CM2CON1.B5;

    // C1CON0, CM1CON0 bits
    const register unsigned short int C1SYNC = 0;
    sbit  C1SYNC_bit at C1CON0.B0;
    const register unsigned short int C1HYS = 1;
    sbit  C1HYS_bit at C1CON0.B1;
    const register unsigned short int C1SP = 2;
    sbit  C1SP_bit at C1CON0.B2;
    const register unsigned short int C1ZLF = 3;
    sbit  C1ZLF_bit at C1CON0.B3;
    const register unsigned short int C1POL = 4;
    sbit  C1POL_bit at C1CON0.B4;
    const register unsigned short int C1OE = 5;
    sbit  C1OE_bit at C1CON0.B5;
    const register unsigned short int C1OUT = 6;
    sbit  C1OUT_bit at C1CON0.B6;
    const register unsigned short int C1ON = 7;
    sbit  C1ON_bit at C1CON0.B7;

    // C1CON1 bits
    const register unsigned short int C1NCH0 = 0;
    sbit  C1NCH0_bit at C1CON1.B0;
    const register unsigned short int C1INTN = 6;
    sbit  C1INTN_bit at C1CON1.B6;
    const register unsigned short int C1INTP = 7;
    sbit  C1INTP_bit at C1CON1.B7;
    const register unsigned short int C1PCH0 = 4;
    sbit  C1PCH0_bit at C1CON1.B4;
    const register unsigned short int C1PCH1 = 5;
    sbit  C1PCH1_bit at C1CON1.B5;

    // CM1CON1 bits
    sbit  C1NCH0_CM1CON1_bit at CM1CON1.B0;
    sbit  C1INTN_CM1CON1_bit at CM1CON1.B6;
    sbit  C1INTP_CM1CON1_bit at CM1CON1.B7;
    sbit  C1PCH0_CM1CON1_bit at CM1CON1.B4;
    sbit  C1PCH1_CM1CON1_bit at CM1CON1.B5;

    // CMOUT, MCOUT bits
    const register unsigned short int MCOUT1 = 0;
    sbit  MCOUT1_bit at CMOUT.B0;
    const register unsigned short int MCOUT2 = 1;
    sbit  MCOUT2_bit at CMOUT.B1;

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

    // SLRCONA bits
    const register unsigned short int SLRA0 = 0;
    sbit  SLRA0_bit at SLRCONA.B0;
    const register unsigned short int SLRA2 = 2;
    sbit  SLRA2_bit at SLRCONA.B2;

    // PCON bits
    const register unsigned short int NOT_BOR = 0;
    sbit  NOT_BOR_bit at PCON.B0;
    const register unsigned short int NOT_POR = 1;
    sbit  NOT_POR_bit at PCON.B1;

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

    // HLT1CON0 bits
    const register unsigned short int H1ON = 2;
    sbit  H1ON_bit at HLT1CON0.B2;
    const register unsigned short int H1CKPS0 = 0;
    sbit  H1CKPS0_bit at HLT1CON0.B0;
    const register unsigned short int H1CKPS1 = 1;
    sbit  H1CKPS1_bit at HLT1CON0.B1;
    const register unsigned short int H1OUTPS0 = 3;
    sbit  H1OUTPS0_bit at HLT1CON0.B3;
    const register unsigned short int H1OUTPS1 = 4;
    sbit  H1OUTPS1_bit at HLT1CON0.B4;
    const register unsigned short int H1OUTPS2 = 5;
    sbit  H1OUTPS2_bit at HLT1CON0.B5;
    const register unsigned short int H1OUTPS3 = 6;
    sbit  H1OUTPS3_bit at HLT1CON0.B6;

    // HLT1CON1 bits
    const register unsigned short int H1REREN = 0;
    sbit  H1REREN_bit at HLT1CON1.B0;
    const register unsigned short int H1FEREN = 1;
    sbit  H1FEREN_bit at HLT1CON1.B1;
    const register unsigned short int H1ERS0 = 2;
    sbit  H1ERS0_bit at HLT1CON1.B2;
    const register unsigned short int H1ERS1 = 3;
    sbit  H1ERS1_bit at HLT1CON1.B3;
    const register unsigned short int H1ERS2 = 4;
    sbit  H1ERS2_bit at HLT1CON1.B4;

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

    // APFCON bits
    const register unsigned short int COG1O0SEL = 0;
    sbit  COG1O0SEL_bit at APFCON.B0;
    const register unsigned short int COG1O1SEL = 1;
    sbit  COG1O1SEL_bit at APFCON.B1;
    const register unsigned short int COG1FSEL = 2;
    sbit  COG1FSEL_bit at APFCON.B2;
    const register unsigned short int T1GSEL = 4;
    sbit  T1GSEL_bit at APFCON.B4;

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

    // PMCON1 bits
    const register unsigned short int RD = 0;
    sbit  RD_bit at PMCON1.B0;
    const register unsigned short int WR = 1;
    sbit  WR_bit at PMCON1.B1;
    const register unsigned short int WREN = 2;
    sbit  WREN_bit at PMCON1.B2;

    // COG1PH bits
    const register unsigned short int G1PH0 = 0;
    sbit  G1PH0_bit at COG1PH.B0;
    const register unsigned short int G1PH1 = 1;
    sbit  G1PH1_bit at COG1PH.B1;
    const register unsigned short int G1PH2 = 2;
    sbit  G1PH2_bit at COG1PH.B2;
    const register unsigned short int G1PH3 = 3;
    sbit  G1PH3_bit at COG1PH.B3;

    // COG1BLK bits
    const register unsigned short int G1BLKF0 = 0;
    sbit  G1BLKF0_bit at COG1BLK.B0;
    const register unsigned short int G1BLKF1 = 1;
    sbit  G1BLKF1_bit at COG1BLK.B1;
    const register unsigned short int G1BLKF2 = 2;
    sbit  G1BLKF2_bit at COG1BLK.B2;
    const register unsigned short int G1BLKF3 = 3;
    sbit  G1BLKF3_bit at COG1BLK.B3;
    const register unsigned short int G1BLKR0 = 4;
    sbit  G1BLKR0_bit at COG1BLK.B4;
    const register unsigned short int G1BLKR1 = 5;
    sbit  G1BLKR1_bit at COG1BLK.B5;
    const register unsigned short int G1BLKR2 = 6;
    sbit  G1BLKR2_bit at COG1BLK.B6;
    const register unsigned short int G1BLKR3 = 7;
    sbit  G1BLKR3_bit at COG1BLK.B7;

    // COG1DB bits
    const register unsigned short int G1DBF0 = 0;
    sbit  G1DBF0_bit at COG1DB.B0;
    const register unsigned short int G1DBF1 = 1;
    sbit  G1DBF1_bit at COG1DB.B1;
    const register unsigned short int G1DBF2 = 2;
    sbit  G1DBF2_bit at COG1DB.B2;
    const register unsigned short int G1DBF3 = 3;
    sbit  G1DBF3_bit at COG1DB.B3;
    const register unsigned short int G1BDR0 = 4;
    sbit  G1BDR0_bit at COG1DB.B4;
    const register unsigned short int G1BDR1 = 5;
    sbit  G1BDR1_bit at COG1DB.B5;
    const register unsigned short int G1BDR2 = 6;
    sbit  G1BDR2_bit at COG1DB.B6;
    const register unsigned short int G1BDR3 = 7;
    sbit  G1BDR3_bit at COG1DB.B7;

    // COG1CON0 bits
    const register unsigned short int G1LD = 2;
    sbit  G1LD_bit at COG1CON0.B2;
    const register unsigned short int G1POL0 = 3;
    sbit  G1POL0_bit at COG1CON0.B3;
    const register unsigned short int G1POL1 = 4;
    sbit  G1POL1_bit at COG1CON0.B4;
    const register unsigned short int G1OE0 = 5;
    sbit  G1OE0_bit at COG1CON0.B5;
    const register unsigned short int G1OE1 = 6;
    sbit  G1OE1_bit at COG1CON0.B6;
    const register unsigned short int G1EN = 7;
    sbit  G1EN_bit at COG1CON0.B7;
    const register unsigned short int G1CS0 = 0;
    sbit  G1CS0_bit at COG1CON0.B0;
    const register unsigned short int G1CS1 = 1;
    sbit  G1CS1_bit at COG1CON0.B1;

    // COG1CON1 bits
    const register unsigned short int G1RSIM = 6;
    sbit  G1RSIM_bit at COG1CON1.B6;
    const register unsigned short int G1FSIM = 7;
    sbit  G1FSIM_bit at COG1CON1.B7;
    const register unsigned short int G1RS0 = 0;
    sbit  G1RS0_bit at COG1CON1.B0;
    const register unsigned short int G1RS1 = 1;
    sbit  G1RS1_bit at COG1CON1.B1;
    const register unsigned short int G1RS2 = 2;
    sbit  G1RS2_bit at COG1CON1.B2;
    const register unsigned short int G1FS0 = 3;
    sbit  G1FS0_bit at COG1CON1.B3;
    const register unsigned short int G1FS1 = 4;
    sbit  G1FS1_bit at COG1CON1.B4;
    const register unsigned short int G1FS2 = 5;
    sbit  G1FS2_bit at COG1CON1.B5;

    // COG1ASD bits
    const register unsigned short int G1ASDSFLT = 0;
    sbit  G1ASDSFLT_bit at COG1ASD.B0;
    const register unsigned short int G1ASDSC1 = 1;
    sbit  G1ASDSC1_bit at COG1ASD.B1;
    const register unsigned short int G1ASDSC2 = 2;
    sbit  G1ASDSC2_bit at COG1ASD.B2;
    const register unsigned short int G1ASDSHLT = 3;
    sbit  G1ASDSHLT_bit at COG1ASD.B3;
    const register unsigned short int G1ASDL0 = 4;
    sbit  G1ASDL0_bit at COG1ASD.B4;
    const register unsigned short int G1ASDL1 = 5;
    sbit  G1ASDL1_bit at COG1ASD.B5;
    const register unsigned short int G1ARSEN = 6;
    sbit  G1ARSEN_bit at COG1ASD.B6;
    const register unsigned short int G1ASDE = 7;
    sbit  G1ASDE_bit at COG1ASD.B7;

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
