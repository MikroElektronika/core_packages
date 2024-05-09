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
sfr unsigned short volatile IOCAF            absolute 0x0008;
sfr unsigned short volatile IOCCF            absolute 0x0009;
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
sfr unsigned short volatile IOCCP            absolute 0x0089;
sfr unsigned short volatile PIE1             absolute 0x008C;
sfr unsigned short volatile PIE2             absolute 0x008D;
sfr unsigned short volatile OSCCON           absolute 0x008F;
sfr unsigned short volatile FVR1CON0         absolute 0x0090;
sfr unsigned short volatile DAC1CON0         absolute 0x0091;
sfr unsigned short volatile DAC1CON1         absolute 0x0092;
sfr unsigned short volatile DAC1CON2         absolute 0x0093;
sfr unsigned short volatile OPA1CON          absolute 0x0096;
sfr unsigned short volatile OPA1CON0         absolute 0x0096;
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
sfr unsigned short volatile LATC             absolute 0x0107;
sfr unsigned short volatile IOCAN            absolute 0x0108;
sfr unsigned short volatile IOCCN            absolute 0x0109;
sfr unsigned short          WPUA             absolute 0x010C;
sfr unsigned short volatile WPUC             absolute 0x010D;
sfr unsigned short volatile SLRCONC          absolute 0x010E;
sfr unsigned short volatile PCON             absolute 0x010F;
sfr unsigned short volatile TMR2             absolute 0x0110;
sfr unsigned short volatile PR2              absolute 0x0111;
sfr unsigned short volatile T2CON            absolute 0x0112;
sfr unsigned short volatile TMR4A            absolute 0x0113;
sfr unsigned short volatile PR4A             absolute 0x0114;
sfr unsigned short volatile T4ACON0          absolute 0x0115;
sfr unsigned short volatile T4ACON1          absolute 0x0116;
sfr unsigned short volatile TMR6A            absolute 0x0117;
sfr unsigned short volatile PR6A             absolute 0x0118;
sfr unsigned short volatile T6ACON0          absolute 0x0119;
sfr unsigned short volatile T6ACON1          absolute 0x011A;
sfr unsigned short volatile SLPCCON0         absolute 0x011E;
sfr unsigned short volatile SLPCCON1         absolute 0x011F;
sfr unsigned short volatile ANSELA           absolute 0x0185;
sfr unsigned short volatile ANSELC           absolute 0x0187;
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
sfr unsigned short volatile COG1PHR          absolute 0x0192;
sfr unsigned short volatile COG1PHF          absolute 0x0193;
sfr unsigned short volatile COG1BKR          absolute 0x0194;
sfr unsigned short volatile COG1BKF          absolute 0x0195;
sfr unsigned short volatile COG1DBR          absolute 0x0196;
sfr unsigned short volatile COG1DBF          absolute 0x0197;
sfr unsigned short volatile COG1CON0         absolute 0x0198;
sfr unsigned short volatile COG1CON1         absolute 0x0199;
sfr unsigned short volatile COG1RIS          absolute 0x019A;
sfr unsigned short volatile COG1RSIM         absolute 0x019B;
sfr unsigned short volatile COG1FIS          absolute 0x019C;
sfr unsigned short volatile COG1FSIM         absolute 0x019D;
sfr unsigned short volatile COG1ASD0         absolute 0x019E;
sfr unsigned short volatile COG1ASD1         absolute 0x019F;
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

    // IOCCF bits
    const register unsigned short int IOCCF0 = 0;
    sbit  IOCCF0_bit at IOCCF.B0;
    const register unsigned short int IOCCF1 = 1;
    sbit  IOCCF1_bit at IOCCF.B1;
    const register unsigned short int IOCCF2 = 2;
    sbit  IOCCF2_bit at IOCCF.B2;
    const register unsigned short int IOCCF3 = 3;
    sbit  IOCCF3_bit at IOCCF.B3;
    const register unsigned short int IOCCF4 = 4;
    sbit  IOCCF4_bit at IOCCF.B4;
    const register unsigned short int IOCCF5 = 5;
    sbit  IOCCF5_bit at IOCCF.B5;

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
    const register unsigned short int TMR4AIF = 2;
    sbit  TMR4AIF_bit at PIR1.B2;
    const register unsigned short int TMR6AIF = 3;
    sbit  TMR6AIF_bit at PIR1.B3;
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
    const register unsigned short int ADPREF1 = 0;
    sbit  ADPREF1_bit at ADCON1.B0;
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

    // IOCCP bits
    const register unsigned short int IOCCP0 = 0;
    sbit  IOCCP0_bit at IOCCP.B0;
    const register unsigned short int IOCCP1 = 1;
    sbit  IOCCP1_bit at IOCCP.B1;
    const register unsigned short int IOCCP2 = 2;
    sbit  IOCCP2_bit at IOCCP.B2;
    const register unsigned short int IOCCP3 = 3;
    sbit  IOCCP3_bit at IOCCP.B3;
    const register unsigned short int IOCCP4 = 4;
    sbit  IOCCP4_bit at IOCCP.B4;
    const register unsigned short int IOCCP5 = 5;
    sbit  IOCCP5_bit at IOCCP.B5;

    // PIE1 bits
    const register unsigned short int TMR1IE = 0;
    sbit  TMR1IE_bit at PIE1.B0;
    const register unsigned short int TMR2IE = 1;
    sbit  TMR2IE_bit at PIE1.B1;
    const register unsigned short int TMR4AIE = 2;
    sbit  TMR4AIE_bit at PIE1.B2;
    const register unsigned short int TMR6AIE = 3;
    sbit  TMR6AIE_bit at PIE1.B3;
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

    // FVR1CON0 bits
    const register unsigned short int FVRBUFEN = 0;
    sbit  FVRBUFEN_bit at FVR1CON0.B0;
    const register unsigned short int FVRBUFSS0 = 3;
    sbit  FVRBUFSS0_bit at FVR1CON0.B3;
    const register unsigned short int FVRBUFSS1 = 4;
    sbit  FVRBUFSS1_bit at FVR1CON0.B4;
    const register unsigned short int FVROE = 5;
    sbit  FVROE_bit at FVR1CON0.B5;
    const register unsigned short int FVRRDY = 6;
    sbit  FVRRDY_bit at FVR1CON0.B6;
    const register unsigned short int FVREN = 7;
    sbit  FVREN_bit at FVR1CON0.B7;

    // DAC1CON0 bits
    const register unsigned short int DACPSS0 = 2;
    sbit  DACPSS0_bit at DAC1CON0.B2;
    const register unsigned short int DACPSS1 = 3;
    sbit  DACPSS1_bit at DAC1CON0.B3;
    const register unsigned short int DACOE = 5;
    sbit  DACOE_bit at DAC1CON0.B5;
    const register unsigned short int DACFM = 6;
    sbit  DACFM_bit at DAC1CON0.B6;
    const register unsigned short int DACEN = 7;
    sbit  DACEN_bit at DAC1CON0.B7;

    // OPA1CON bits
    const register unsigned short int OPAPCH0 = 0;
    sbit  OPAPCH0_bit at OPA1CON.B0;
    const register unsigned short int OPAPCH1 = 1;
    sbit  OPAPCH1_bit at OPA1CON.B1;
    const register unsigned short int OPANCH0 = 2;
    sbit  OPANCH0_bit at OPA1CON.B2;
    const register unsigned short int OPANCH1 = 3;
    sbit  OPANCH1_bit at OPA1CON.B3;
    const register unsigned short int OPAUGM = 4;
    sbit  OPAUGM_bit at OPA1CON.B4;
    const register unsigned short int OPAEN = 7;
    sbit  OPAEN_bit at OPA1CON.B7;

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
    const register unsigned short int C2INTN = 6;
    sbit  C2INTN_bit at C2CON1.B6;
    const register unsigned short int C2INTP = 7;
    sbit  C2INTP_bit at C2CON1.B7;
    const register unsigned short int C2NCH0 = 0;
    sbit  C2NCH0_bit at C2CON1.B0;
    const register unsigned short int C2NCH1 = 1;
    sbit  C2NCH1_bit at C2CON1.B1;
    const register unsigned short int C2NCH2 = 2;
    sbit  C2NCH2_bit at C2CON1.B2;
    const register unsigned short int C2PCH0 = 3;
    sbit  C2PCH0_bit at C2CON1.B3;
    const register unsigned short int C2PCH1 = 4;
    sbit  C2PCH1_bit at C2CON1.B4;
    const register unsigned short int C2PCH2 = 5;
    sbit  C2PCH2_bit at C2CON1.B5;

    // CM2CON1 bits
    sbit  C2INTN_CM2CON1_bit at CM2CON1.B6;
    sbit  C2INTP_CM2CON1_bit at CM2CON1.B7;
    sbit  C2NCH0_CM2CON1_bit at CM2CON1.B0;
    sbit  C2NCH1_CM2CON1_bit at CM2CON1.B1;
    sbit  C2NCH2_CM2CON1_bit at CM2CON1.B2;
    sbit  C2PCH0_CM2CON1_bit at CM2CON1.B3;
    sbit  C2PCH1_CM2CON1_bit at CM2CON1.B4;
    sbit  C2PCH2_CM2CON1_bit at CM2CON1.B5;

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
    const register unsigned short int C1INTN = 6;
    sbit  C1INTN_bit at C1CON1.B6;
    const register unsigned short int C1INTP = 7;
    sbit  C1INTP_bit at C1CON1.B7;
    const register unsigned short int C1NCH0 = 0;
    sbit  C1NCH0_bit at C1CON1.B0;
    const register unsigned short int C1NCH1 = 1;
    sbit  C1NCH1_bit at C1CON1.B1;
    const register unsigned short int C1NCH2 = 2;
    sbit  C1NCH2_bit at C1CON1.B2;
    const register unsigned short int C1PCH0 = 3;
    sbit  C1PCH0_bit at C1CON1.B3;
    const register unsigned short int C1PCH1 = 4;
    sbit  C1PCH1_bit at C1CON1.B4;
    const register unsigned short int C1PCH2 = 5;
    sbit  C1PCH2_bit at C1CON1.B5;

    // CM1CON1 bits
    sbit  C1INTN_CM1CON1_bit at CM1CON1.B6;
    sbit  C1INTP_CM1CON1_bit at CM1CON1.B7;
    sbit  C1NCH0_CM1CON1_bit at CM1CON1.B0;
    sbit  C1NCH1_CM1CON1_bit at CM1CON1.B1;
    sbit  C1NCH2_CM1CON1_bit at CM1CON1.B2;
    sbit  C1PCH0_CM1CON1_bit at CM1CON1.B3;
    sbit  C1PCH1_CM1CON1_bit at CM1CON1.B4;
    sbit  C1PCH2_CM1CON1_bit at CM1CON1.B5;

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

    // LATC bits
    const register unsigned short int LATC0 = 0;
    sbit  LATC0_bit at LATC.B0;
    const register unsigned short int LATC1 = 1;
    sbit  LATC1_bit at LATC.B1;
    const register unsigned short int LATC2 = 2;
    sbit  LATC2_bit at LATC.B2;
    const register unsigned short int LATC3 = 3;
    sbit  LATC3_bit at LATC.B3;
    const register unsigned short int LATC4 = 4;
    sbit  LATC4_bit at LATC.B4;
    const register unsigned short int LATC5 = 5;
    sbit  LATC5_bit at LATC.B5;

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

    // IOCCN bits
    const register unsigned short int IOCCN0 = 0;
    sbit  IOCCN0_bit at IOCCN.B0;
    const register unsigned short int IOCCN1 = 1;
    sbit  IOCCN1_bit at IOCCN.B1;
    const register unsigned short int IOCCN2 = 2;
    sbit  IOCCN2_bit at IOCCN.B2;
    const register unsigned short int IOCCN3 = 3;
    sbit  IOCCN3_bit at IOCCN.B3;
    const register unsigned short int IOCCN4 = 4;
    sbit  IOCCN4_bit at IOCCN.B4;
    const register unsigned short int IOCCN5 = 5;
    sbit  IOCCN5_bit at IOCCN.B5;

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

    // WPUC bits
    const register unsigned short int WPUC0 = 0;
    sbit  WPUC0_bit at WPUC.B0;
    const register unsigned short int WPUC1 = 1;
    sbit  WPUC1_bit at WPUC.B1;
    const register unsigned short int WPUC2 = 2;
    sbit  WPUC2_bit at WPUC.B2;
    const register unsigned short int WPUC3 = 3;
    sbit  WPUC3_bit at WPUC.B3;
    const register unsigned short int WPUC4 = 4;
    sbit  WPUC4_bit at WPUC.B4;
    const register unsigned short int WPUC5 = 5;
    sbit  WPUC5_bit at WPUC.B5;

    // SLRCONC bits
    const register unsigned short int SLRC4 = 4;
    sbit  SLRC4_bit at SLRCONC.B4;
    const register unsigned short int SLRC5 = 5;
    sbit  SLRC5_bit at SLRCONC.B5;

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

    // T4ACON0 bits
    const register unsigned short int TMR4AON = 2;
    sbit  TMR4AON_bit at T4ACON0.B2;
    const register unsigned short int T4ACKPS0 = 0;
    sbit  T4ACKPS0_bit at T4ACON0.B0;
    const register unsigned short int T4ACKPS1 = 1;
    sbit  T4ACKPS1_bit at T4ACON0.B1;
    const register unsigned short int T4OUTPS0 = 3;
    sbit  T4OUTPS0_bit at T4ACON0.B3;
    const register unsigned short int T4OUTPS1 = 4;
    sbit  T4OUTPS1_bit at T4ACON0.B4;
    const register unsigned short int T4OUTPS2 = 5;
    sbit  T4OUTPS2_bit at T4ACON0.B5;
    const register unsigned short int T4OUTPS3 = 6;
    sbit  T4OUTPS3_bit at T4ACON0.B6;

    // T4ACON1 bits
    const register unsigned short int T4ARIREN = 0;
    sbit  T4ARIREN_bit at T4ACON1.B0;
    const register unsigned short int T4AFIREN = 1;
    sbit  T4AFIREN_bit at T4ACON1.B1;
    const register unsigned short int T4ARIMS = 6;
    sbit  T4ARIMS_bit at T4ACON1.B6;
    const register unsigned short int T4AFIMS = 7;
    sbit  T4AFIMS_bit at T4ACON1.B7;
    const register unsigned short int T4AERS0 = 2;
    sbit  T4AERS0_bit at T4ACON1.B2;
    const register unsigned short int T4AERS1 = 3;
    sbit  T4AERS1_bit at T4ACON1.B3;
    const register unsigned short int T4AERS2 = 4;
    sbit  T4AERS2_bit at T4ACON1.B4;

    // T6ACON0 bits
    const register unsigned short int TMR6AON = 2;
    sbit  TMR6AON_bit at T6ACON0.B2;
    const register unsigned short int T6ACKPS0 = 0;
    sbit  T6ACKPS0_bit at T6ACON0.B0;
    const register unsigned short int T6ACKPS1 = 1;
    sbit  T6ACKPS1_bit at T6ACON0.B1;
    const register unsigned short int T6OUTPS0 = 3;
    sbit  T6OUTPS0_bit at T6ACON0.B3;
    const register unsigned short int T6OUTPS1 = 4;
    sbit  T6OUTPS1_bit at T6ACON0.B4;
    const register unsigned short int T6OUTPS2 = 5;
    sbit  T6OUTPS2_bit at T6ACON0.B5;
    const register unsigned short int T6OUTPS3 = 6;
    sbit  T6OUTPS3_bit at T6ACON0.B6;

    // T6ACON1 bits
    const register unsigned short int T6ARIREN = 0;
    sbit  T6ARIREN_bit at T6ACON1.B0;
    const register unsigned short int T6AFIREN = 1;
    sbit  T6AFIREN_bit at T6ACON1.B1;
    const register unsigned short int T6ERS0 = 2;
    sbit  T6ERS0_bit at T6ACON1.B2;
    const register unsigned short int T6ERS1 = 3;
    sbit  T6ERS1_bit at T6ACON1.B3;
    const register unsigned short int T6ERS2 = 4;
    sbit  T6ERS2_bit at T6ACON1.B4;
    const register unsigned short int T6ARIMS = 6;
    sbit  T6ARIMS_bit at T6ACON1.B6;
    const register unsigned short int T6AFIMS = 7;
    sbit  T6AFIMS_bit at T6ACON1.B7;

    // SLPCCON0 bits
    const register unsigned short int SC1INS = 0;
    sbit  SC1INS_bit at SLPCCON0.B0;
    const register unsigned short int SC1TSS0 = 2;
    sbit  SC1TSS0_bit at SLPCCON0.B2;
    const register unsigned short int SC1TSS1 = 3;
    sbit  SC1TSS1_bit at SLPCCON0.B3;
    const register unsigned short int SC1POL = 4;
    sbit  SC1POL_bit at SLPCCON0.B4;
    const register unsigned short int SC1MRPE = 5;
    sbit  SC1MRPE_bit at SLPCCON0.B5;
    const register unsigned short int SC1EN = 7;
    sbit  SC1EN_bit at SLPCCON0.B7;

    // SLPCCON1 bits
    const register unsigned short int SC1ISET0 = 0;
    sbit  SC1ISET0_bit at SLPCCON1.B0;
    const register unsigned short int SC1ISET1 = 1;
    sbit  SC1ISET1_bit at SLPCCON1.B1;
    const register unsigned short int SC1ISET2 = 2;
    sbit  SC1ISET2_bit at SLPCCON1.B2;
    const register unsigned short int SC1ISET3 = 3;
    sbit  SC1ISET3_bit at SLPCCON1.B3;
    const register unsigned short int SC1ISET4 = 4;
    sbit  SC1ISET4_bit at SLPCCON1.B4;

    // ANSELA bits
    const register unsigned short int ANSA0 = 0;
    sbit  ANSA0_bit at ANSELA.B0;
    const register unsigned short int ANSA1 = 1;
    sbit  ANSA1_bit at ANSELA.B1;
    const register unsigned short int ANSA2 = 2;
    sbit  ANSA2_bit at ANSELA.B2;
    const register unsigned short int ANSA4 = 4;
    sbit  ANSA4_bit at ANSELA.B4;

    // ANSELC bits
    const register unsigned short int ANSC0 = 0;
    sbit  ANSC0_bit at ANSELC.B0;
    const register unsigned short int ANSC1 = 1;
    sbit  ANSC1_bit at ANSELC.B1;
    const register unsigned short int ANSC2 = 2;
    sbit  ANSC2_bit at ANSELC.B2;
    const register unsigned short int ANSC3 = 3;
    sbit  ANSC3_bit at ANSELC.B3;

    // APFCON bits
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

    // COG1PHR bits
    const register unsigned short int PHR0 = 0;
    sbit  PHR0_bit at COG1PHR.B0;
    const register unsigned short int PHR1 = 1;
    sbit  PHR1_bit at COG1PHR.B1;
    const register unsigned short int PHR2 = 2;
    sbit  PHR2_bit at COG1PHR.B2;
    const register unsigned short int PHR3 = 3;
    sbit  PHR3_bit at COG1PHR.B3;

    // COG1PHF bits
    const register unsigned short int PHF0 = 0;
    sbit  PHF0_bit at COG1PHF.B0;
    const register unsigned short int PHF1 = 1;
    sbit  PHF1_bit at COG1PHF.B1;
    const register unsigned short int PHF2 = 2;
    sbit  PHF2_bit at COG1PHF.B2;
    const register unsigned short int PHF3 = 3;
    sbit  PHF3_bit at COG1PHF.B3;

    // COG1BKR bits
    const register unsigned short int BKR0 = 0;
    sbit  BKR0_bit at COG1BKR.B0;
    const register unsigned short int BKR1 = 1;
    sbit  BKR1_bit at COG1BKR.B1;
    const register unsigned short int BKR2 = 2;
    sbit  BKR2_bit at COG1BKR.B2;
    const register unsigned short int BKR3 = 3;
    sbit  BKR3_bit at COG1BKR.B3;

    // COG1BKF bits
    const register unsigned short int BKF0 = 0;
    sbit  BKF0_bit at COG1BKF.B0;
    const register unsigned short int BKF1 = 1;
    sbit  BKF1_bit at COG1BKF.B1;
    const register unsigned short int BKF2 = 2;
    sbit  BKF2_bit at COG1BKF.B2;
    const register unsigned short int BKF3 = 3;
    sbit  BKF3_bit at COG1BKF.B3;

    // COG1DBR bits
    const register unsigned short int DBR0 = 0;
    sbit  DBR0_bit at COG1DBR.B0;
    const register unsigned short int DBR1 = 1;
    sbit  DBR1_bit at COG1DBR.B1;
    const register unsigned short int DBR2 = 2;
    sbit  DBR2_bit at COG1DBR.B2;
    const register unsigned short int DBR3 = 3;
    sbit  DBR3_bit at COG1DBR.B3;

    // COG1DBF bits
    const register unsigned short int DBF0 = 0;
    sbit  DBF0_bit at COG1DBF.B0;
    const register unsigned short int DBF1 = 1;
    sbit  DBF1_bit at COG1DBF.B1;
    const register unsigned short int DBF2 = 2;
    sbit  DBF2_bit at COG1DBF.B2;
    const register unsigned short int DBF3 = 3;
    sbit  DBF3_bit at COG1DBF.B3;

    // COG1CON0 bits
    const register unsigned short int G1MD = 0;
    sbit  G1MD_bit at COG1CON0.B0;
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

    // COG1CON1 bits
    const register unsigned short int G1CS0 = 0;
    sbit  G1CS0_bit at COG1CON1.B0;
    const register unsigned short int G1CS1 = 1;
    sbit  G1CS1_bit at COG1CON1.B1;
    const register unsigned short int G1FDBTS = 6;
    sbit  G1FDBTS_bit at COG1CON1.B6;
    const register unsigned short int G1RDBTS = 7;
    sbit  G1RDBTS_bit at COG1CON1.B7;

    // COG1RIS bits
    const register unsigned short int G1RIS0 = 0;
    sbit  G1RIS0_bit at COG1RIS.B0;
    const register unsigned short int G1RIS1 = 1;
    sbit  G1RIS1_bit at COG1RIS.B1;
    const register unsigned short int G1RIS2 = 2;
    sbit  G1RIS2_bit at COG1RIS.B2;
    const register unsigned short int G1RIS3 = 3;
    sbit  G1RIS3_bit at COG1RIS.B3;
    const register unsigned short int G1RIS4 = 4;
    sbit  G1RIS4_bit at COG1RIS.B4;
    const register unsigned short int G1RIS5 = 5;
    sbit  G1RIS5_bit at COG1RIS.B5;
    const register unsigned short int G1RIS6 = 6;
    sbit  G1RIS6_bit at COG1RIS.B6;
    const register unsigned short int G1RIS7 = 7;
    sbit  G1RIS7_bit at COG1RIS.B7;

    // COG1RSIM bits
    const register unsigned short int G1RSIM0 = 0;
    sbit  G1RSIM0_bit at COG1RSIM.B0;
    const register unsigned short int G1RSIM1 = 1;
    sbit  G1RSIM1_bit at COG1RSIM.B1;
    const register unsigned short int G1RSIM2 = 2;
    sbit  G1RSIM2_bit at COG1RSIM.B2;
    const register unsigned short int G1RSIM3 = 3;
    sbit  G1RSIM3_bit at COG1RSIM.B3;
    const register unsigned short int G1RSIM4 = 4;
    sbit  G1RSIM4_bit at COG1RSIM.B4;
    const register unsigned short int G1RSIM5 = 5;
    sbit  G1RSIM5_bit at COG1RSIM.B5;
    const register unsigned short int G1RSIM6 = 6;
    sbit  G1RSIM6_bit at COG1RSIM.B6;
    const register unsigned short int G1RSIM7 = 7;
    sbit  G1RSIM7_bit at COG1RSIM.B7;

    // COG1FIS bits
    const register unsigned short int G1FIS0 = 0;
    sbit  G1FIS0_bit at COG1FIS.B0;
    const register unsigned short int G1FIS1 = 1;
    sbit  G1FIS1_bit at COG1FIS.B1;
    const register unsigned short int G1FIS2 = 2;
    sbit  G1FIS2_bit at COG1FIS.B2;
    const register unsigned short int G1FIS3 = 3;
    sbit  G1FIS3_bit at COG1FIS.B3;
    const register unsigned short int G1FIS4 = 4;
    sbit  G1FIS4_bit at COG1FIS.B4;
    const register unsigned short int G1FIS5 = 5;
    sbit  G1FIS5_bit at COG1FIS.B5;
    const register unsigned short int G1FIS6 = 6;
    sbit  G1FIS6_bit at COG1FIS.B6;
    const register unsigned short int G1FIS7 = 7;
    sbit  G1FIS7_bit at COG1FIS.B7;

    // COG1FSIM bits
    const register unsigned short int G1FSM0 = 0;
    sbit  G1FSM0_bit at COG1FSIM.B0;
    const register unsigned short int G1FSM1 = 1;
    sbit  G1FSM1_bit at COG1FSIM.B1;
    const register unsigned short int G1FSM2 = 2;
    sbit  G1FSM2_bit at COG1FSIM.B2;
    const register unsigned short int G1FSM3 = 3;
    sbit  G1FSM3_bit at COG1FSIM.B3;
    const register unsigned short int G1FSM4 = 4;
    sbit  G1FSM4_bit at COG1FSIM.B4;
    const register unsigned short int G1FSM5 = 5;
    sbit  G1FSM5_bit at COG1FSIM.B5;
    const register unsigned short int G1FSM6 = 6;
    sbit  G1FSM6_bit at COG1FSIM.B6;
    const register unsigned short int G1FSM7 = 7;
    sbit  G1FSM7_bit at COG1FSIM.B7;

    // COG1ASD0 bits
    const register unsigned short int G1ASD0L0 = 2;
    sbit  G1ASD0L0_bit at COG1ASD0.B2;
    const register unsigned short int G1ASD0L1 = 3;
    sbit  G1ASD0L1_bit at COG1ASD0.B3;
    const register unsigned short int G1ASD1L0 = 4;
    sbit  G1ASD1L0_bit at COG1ASD0.B4;
    const register unsigned short int G1ASD1L1 = 5;
    sbit  G1ASD1L1_bit at COG1ASD0.B5;
    const register unsigned short int C1ARSEN = 6;
    sbit  C1ARSEN_bit at COG1ASD0.B6;
    const register unsigned short int C1ASDE = 7;
    sbit  C1ASDE_bit at COG1ASD0.B7;

    // COG1ASD1 bits
    const register unsigned short int G1AS0E = 0;
    sbit  G1AS0E_bit at COG1ASD1.B0;
    const register unsigned short int G1AS1E = 1;
    sbit  G1AS1E_bit at COG1ASD1.B1;
    const register unsigned short int G1AS2E = 2;
    sbit  G1AS2E_bit at COG1ASD1.B2;
    const register unsigned short int G1AS3E = 3;
    sbit  G1AS3E_bit at COG1ASD1.B3;
    const register unsigned short int G1AS4E = 4;
    sbit  G1AS4E_bit at COG1ASD1.B4;
    const register unsigned short int G1AS5E = 5;
    sbit  G1AS5E_bit at COG1ASD1.B5;
    const register unsigned short int G1AS6E = 6;
    sbit  G1AS6E_bit at COG1ASD1.B6;
    const register unsigned short int G1AS7E = 7;
    sbit  G1AS7E_bit at COG1ASD1.B7;

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
