// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00000200;

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

const signed int   PORT_TO_TRIS_OFFSET    =     1;

const unsigned short ICS_AUTO                  =     0;
const unsigned short ICS_OFF                   =     3;

sfr unsigned short volatile INDF             absolute 0x0000;
sfr unsigned short volatile TMR0             absolute 0x0001;
sfr unsigned short volatile PCL              absolute 0x0002;
sfr unsigned short volatile STATUS           absolute 0x0003;
sfr unsigned short          FSR              absolute 0x0004;
register unsigned short     *FSRPTR          absolute 0x0004;
sfr unsigned short volatile LATA             absolute 0x0007;
sfr unsigned short volatile ANSELA           absolute 0x0008;
sfr unsigned short          WPUA             absolute 0x0009;
sfr unsigned short volatile PCLATH           absolute 0x000A;
sfr unsigned short volatile INTCON           absolute 0x000B;
sfr unsigned short volatile PIR1             absolute 0x000C;
sfr unsigned short volatile PIE1             absolute 0x000D;
sfr unsigned short volatile OPTION_REG       absolute 0x000E;
sfr unsigned short volatile PCON             absolute 0x000F;
sfr unsigned short volatile OSCCON           absolute 0x0010;
sfr unsigned short volatile TMR2             absolute 0x0011;
sfr unsigned short volatile PR2              absolute 0x0012;
sfr unsigned short volatile T2CON            absolute 0x0013;
sfr unsigned short volatile PWM1DCL          absolute 0x0014;
sfr unsigned short volatile PWM1DCH          absolute 0x0015;
sfr unsigned short          PWM1CON          absolute 0x0016;
sfr unsigned short volatile PWM1CON0         absolute 0x0016;
sfr unsigned short volatile PWM2DCL          absolute 0x0017;
sfr unsigned short volatile PWM2DCH          absolute 0x0018;
sfr unsigned short          PWM2CON          absolute 0x0019;
sfr unsigned short volatile PWM2CON0         absolute 0x0019;
sfr unsigned short volatile IOCAP            absolute 0x001A;
sfr unsigned short volatile IOCAN            absolute 0x001B;
sfr unsigned short volatile IOCAF            absolute 0x001C;
sfr unsigned short volatile FVRCON           absolute 0x001D;
sfr unsigned short volatile ADCON            absolute 0x001F;
sfr unsigned int   volatile PMADR            absolute 0x0020;
sfr unsigned short volatile PMADRL           absolute 0x0020;
sfr unsigned short volatile PMADRH           absolute 0x0021;
sfr unsigned int   volatile PMDAT            absolute 0x0022;
sfr unsigned short volatile PMDATL           absolute 0x0022;
sfr unsigned short volatile PMDATH           absolute 0x0023;
sfr unsigned short volatile PMCON1           absolute 0x0024;
sfr unsigned short volatile PMCON2           absolute 0x0025;
sfr unsigned short volatile CLKRCON          absolute 0x0026;
sfr unsigned int   volatile NCO1ACC          absolute 0x0027;
sfr unsigned short volatile NCO1ACCL         absolute 0x0027;
sfr unsigned short volatile NCO1ACCH         absolute 0x0028;
sfr unsigned short volatile NCO1ACCU         absolute 0x0029;
sfr unsigned int   volatile NCO1INC          absolute 0x002A;
sfr unsigned short volatile NCO1INCL         absolute 0x002A;
sfr unsigned short volatile NCO1INCH         absolute 0x002B;
sfr unsigned short volatile NCO1INCU         absolute 0x002C;
sfr unsigned short volatile NCO1CON          absolute 0x002D;
sfr unsigned short volatile NCO1CLK          absolute 0x002E;
sfr unsigned short          WDTCON           absolute 0x0030;
sfr unsigned short volatile CLC1CON          absolute 0x0031;
sfr unsigned short volatile CLC1SEL0         absolute 0x0032;
sfr unsigned short volatile CLC1SEL1         absolute 0x0033;
sfr unsigned short volatile CLC1POL          absolute 0x0034;
sfr unsigned short volatile CLC1GLS0         absolute 0x0035;
sfr unsigned short volatile CLC1GLS1         absolute 0x0036;
sfr unsigned short volatile CLC1GLS2         absolute 0x0037;
sfr unsigned short volatile CLC1GLS3         absolute 0x0038;
sfr unsigned short volatile CWG1CON0         absolute 0x0039;
sfr unsigned short volatile CWG1CON1         absolute 0x003A;
sfr unsigned short volatile CWG1CON2         absolute 0x003B;
sfr unsigned short volatile CWG1DBR          absolute 0x003C;
sfr unsigned short volatile CWG1DBF          absolute 0x003D;
sfr unsigned short volatile VREGCON          absolute 0x003E;
sfr unsigned short volatile BORCON           absolute 0x003F;
sfr unsigned short volatile PORTA            absolute 0x0005;
sfr unsigned short volatile TRISA            absolute 0x0006;
sfr unsigned short volatile ADRES            absolute 0x001E;

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

    // LATA bits
    const register unsigned short int LATA0 = 0;
    sbit  LATA0_bit at LATA.B0;
    const register unsigned short int LATA1 = 1;
    sbit  LATA1_bit at LATA.B1;
    const register unsigned short int LATA2 = 2;
    sbit  LATA2_bit at LATA.B2;

    // ANSELA bits
    const register unsigned short int ANSA0 = 0;
    sbit  ANSA0_bit at ANSELA.B0;
    const register unsigned short int ANSA1 = 1;
    sbit  ANSA1_bit at ANSELA.B1;
    const register unsigned short int ANSA2 = 2;
    sbit  ANSA2_bit at ANSELA.B2;

    // WPUA bits
    const register unsigned short int WPUA0 = 0;
    sbit  WPUA0_bit at WPUA.B0;
    const register unsigned short int WPUA1 = 1;
    sbit  WPUA1_bit at WPUA.B1;
    const register unsigned short int WPUA2 = 2;
    sbit  WPUA2_bit at WPUA.B2;
    const register unsigned short int WPUA3 = 3;
    sbit  WPUA3_bit at WPUA.B3;

    // PCLATH bits
    const register unsigned short int PCLH0 = 0;
    sbit  PCLH0_bit at PCLATH.B0;

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

    // PIR1 bits
    const register unsigned short int TMR2IF = 1;
    sbit  TMR2IF_bit at PIR1.B1;
    const register unsigned short int CLC1IF = 3;
    sbit  CLC1IF_bit at PIR1.B3;
    const register unsigned short int NCO1IF = 4;
    sbit  NCO1IF_bit at PIR1.B4;
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;

    // PIE1 bits
    const register unsigned short int TMR2IE = 1;
    sbit  TMR2IE_bit at PIE1.B1;
    const register unsigned short int CLC1IE = 3;
    sbit  CLC1IE_bit at PIE1.B3;
    const register unsigned short int NCO1IE = 4;
    sbit  NCO1IE_bit at PIE1.B4;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;

    // OPTION_REG bits
    const register unsigned short int PSA = 3;
    sbit  PSA_bit at OPTION_REG.B3;
    const register unsigned short int T0SE = 4;
    sbit  T0SE_bit at OPTION_REG.B4;
    const register unsigned short int T0CS = 5;
    sbit  T0CS_bit at OPTION_REG.B5;
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

    // PCON bits
    const register unsigned short int NOT_BOR = 0;
    sbit  NOT_BOR_bit at PCON.B0;
    const register unsigned short int NOT_POR = 1;
    sbit  NOT_POR_bit at PCON.B1;

    // OSCCON bits
    const register unsigned short int HFIOFS = 0;
    sbit  HFIOFS_bit at OSCCON.B0;
    const register unsigned short int LFIOFR = 1;
    sbit  LFIOFR_bit at OSCCON.B1;
    const register unsigned short int HFIOFR = 3;
    sbit  HFIOFR_bit at OSCCON.B3;
    const register unsigned short int IRCF0 = 4;
    sbit  IRCF0_bit at OSCCON.B4;
    const register unsigned short int IRCF1 = 5;
    sbit  IRCF1_bit at OSCCON.B5;
    const register unsigned short int IRCF2 = 6;
    sbit  IRCF2_bit at OSCCON.B6;

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

    // PWM1DCL bits
    const register unsigned short int PWM1DCL0 = 6;
    sbit  PWM1DCL0_bit at PWM1DCL.B6;
    const register unsigned short int PWM1DCL1 = 7;
    sbit  PWM1DCL1_bit at PWM1DCL.B7;

    // PWM1DCH bits
    const register unsigned short int PWM1DCH0 = 0;
    sbit  PWM1DCH0_bit at PWM1DCH.B0;
    const register unsigned short int PWM1DCH1 = 1;
    sbit  PWM1DCH1_bit at PWM1DCH.B1;
    const register unsigned short int PWM1DCH2 = 2;
    sbit  PWM1DCH2_bit at PWM1DCH.B2;
    const register unsigned short int PWM1DCH3 = 3;
    sbit  PWM1DCH3_bit at PWM1DCH.B3;
    const register unsigned short int PWM1DCH4 = 4;
    sbit  PWM1DCH4_bit at PWM1DCH.B4;
    const register unsigned short int PWM1DCH5 = 5;
    sbit  PWM1DCH5_bit at PWM1DCH.B5;
    const register unsigned short int PWM1DCH6 = 6;
    sbit  PWM1DCH6_bit at PWM1DCH.B6;
    const register unsigned short int PWM1DCH7 = 7;
    sbit  PWM1DCH7_bit at PWM1DCH.B7;

    // PWM1CON, PWM1CON0 bits
    const register unsigned short int PWM1POL = 4;
    sbit  PWM1POL_bit at PWM1CON.B4;
    const register unsigned short int PWM1OUT = 5;
    sbit  PWM1OUT_bit at PWM1CON.B5;
    const register unsigned short int PWM1OE = 6;
    sbit  PWM1OE_bit at PWM1CON.B6;
    const register unsigned short int PWM1EN = 7;
    sbit  PWM1EN_bit at PWM1CON.B7;

    // PWM2DCL bits
    const register unsigned short int PWM2DCL0 = 6;
    sbit  PWM2DCL0_bit at PWM2DCL.B6;
    const register unsigned short int PWM2DCL1 = 7;
    sbit  PWM2DCL1_bit at PWM2DCL.B7;

    // PWM2DCH bits
    const register unsigned short int PWM2DCH0 = 0;
    sbit  PWM2DCH0_bit at PWM2DCH.B0;
    const register unsigned short int PWM2DCH1 = 1;
    sbit  PWM2DCH1_bit at PWM2DCH.B1;
    const register unsigned short int PWM2DCH2 = 2;
    sbit  PWM2DCH2_bit at PWM2DCH.B2;
    const register unsigned short int PWM2DCH3 = 3;
    sbit  PWM2DCH3_bit at PWM2DCH.B3;
    const register unsigned short int PWM2DCH4 = 4;
    sbit  PWM2DCH4_bit at PWM2DCH.B4;
    const register unsigned short int PWM2DCH5 = 5;
    sbit  PWM2DCH5_bit at PWM2DCH.B5;
    const register unsigned short int PWM2DCH6 = 6;
    sbit  PWM2DCH6_bit at PWM2DCH.B6;
    const register unsigned short int PWM2DCH7 = 7;
    sbit  PWM2DCH7_bit at PWM2DCH.B7;

    // PWM2CON, PWM2CON0 bits
    const register unsigned short int PWM2POL = 4;
    sbit  PWM2POL_bit at PWM2CON.B4;
    const register unsigned short int PWM2OUT = 5;
    sbit  PWM2OUT_bit at PWM2CON.B5;
    const register unsigned short int PWM2OE = 6;
    sbit  PWM2OE_bit at PWM2CON.B6;
    const register unsigned short int PWM2EN = 7;
    sbit  PWM2EN_bit at PWM2CON.B7;

    // IOCAP bits
    const register unsigned short int IOCAP0 = 0;
    sbit  IOCAP0_bit at IOCAP.B0;
    const register unsigned short int IOCAP1 = 1;
    sbit  IOCAP1_bit at IOCAP.B1;
    const register unsigned short int IOCAP2 = 2;
    sbit  IOCAP2_bit at IOCAP.B2;
    const register unsigned short int IOCAP3 = 3;
    sbit  IOCAP3_bit at IOCAP.B3;

    // IOCAN bits
    const register unsigned short int IOCAN0 = 0;
    sbit  IOCAN0_bit at IOCAN.B0;
    const register unsigned short int IOCAN1 = 1;
    sbit  IOCAN1_bit at IOCAN.B1;
    const register unsigned short int IOCAN2 = 2;
    sbit  IOCAN2_bit at IOCAN.B2;
    const register unsigned short int IOCAN3 = 3;
    sbit  IOCAN3_bit at IOCAN.B3;

    // IOCAF bits
    const register unsigned short int IOCAF0 = 0;
    sbit  IOCAF0_bit at IOCAF.B0;
    const register unsigned short int IOCAF1 = 1;
    sbit  IOCAF1_bit at IOCAF.B1;
    const register unsigned short int IOCAF2 = 2;
    sbit  IOCAF2_bit at IOCAF.B2;
    const register unsigned short int IOCAF3 = 3;
    sbit  IOCAF3_bit at IOCAF.B3;

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

    // ADCON bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON.B0;
    const register unsigned short int GO_NOT_DONE = 1;
    sbit  GO_NOT_DONE_bit at ADCON.B1;
    const register unsigned short int CHS0 = 2;
    sbit  CHS0_bit at ADCON.B2;
    const register unsigned short int CHS1 = 3;
    sbit  CHS1_bit at ADCON.B3;
    const register unsigned short int CHS2 = 4;
    sbit  CHS2_bit at ADCON.B4;
    const register unsigned short int ADCS0 = 5;
    sbit  ADCS0_bit at ADCON.B5;
    const register unsigned short int ADCS1 = 6;
    sbit  ADCS1_bit at ADCON.B6;
    const register unsigned short int ADCS2 = 7;
    sbit  ADCS2_bit at ADCON.B7;

    // PMADRH bits
    const register unsigned short int PMADR8 = 0;
    sbit  PMADR8_bit at PMADRH.B0;

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

    // CLKRCON bits
    const register unsigned short int CLKROE = 6;
    sbit  CLKROE_bit at CLKRCON.B6;

    // NCO1ACCL bits
    const register unsigned short int NCO1ACC0 = 0;
    sbit  NCO1ACC0_bit at NCO1ACCL.B0;
    const register unsigned short int NCO1ACC1 = 1;
    sbit  NCO1ACC1_bit at NCO1ACCL.B1;
    const register unsigned short int NCO1ACC2 = 2;
    sbit  NCO1ACC2_bit at NCO1ACCL.B2;
    const register unsigned short int NCO1ACC3 = 3;
    sbit  NCO1ACC3_bit at NCO1ACCL.B3;
    const register unsigned short int NCO1ACC4 = 4;
    sbit  NCO1ACC4_bit at NCO1ACCL.B4;
    const register unsigned short int NCO1ACC5 = 5;
    sbit  NCO1ACC5_bit at NCO1ACCL.B5;
    const register unsigned short int NCO1ACC6 = 6;
    sbit  NCO1ACC6_bit at NCO1ACCL.B6;
    const register unsigned short int NCO1ACC7 = 7;
    sbit  NCO1ACC7_bit at NCO1ACCL.B7;

    // NCO1ACCH bits
    const register unsigned short int NCO1ACC8 = 0;
    sbit  NCO1ACC8_bit at NCO1ACCH.B0;
    const register unsigned short int NCO1ACC9 = 1;
    sbit  NCO1ACC9_bit at NCO1ACCH.B1;
    const register unsigned short int NCO1ACC10 = 2;
    sbit  NCO1ACC10_bit at NCO1ACCH.B2;
    const register unsigned short int NCO1ACC11 = 3;
    sbit  NCO1ACC11_bit at NCO1ACCH.B3;
    const register unsigned short int NCO1ACC12 = 4;
    sbit  NCO1ACC12_bit at NCO1ACCH.B4;
    const register unsigned short int NCO1ACC13 = 5;
    sbit  NCO1ACC13_bit at NCO1ACCH.B5;
    const register unsigned short int NCO1ACC14 = 6;
    sbit  NCO1ACC14_bit at NCO1ACCH.B6;
    const register unsigned short int NCO1ACC15 = 7;
    sbit  NCO1ACC15_bit at NCO1ACCH.B7;

    // NCO1ACCU bits
    const register unsigned short int NCO1ACC16 = 0;
    sbit  NCO1ACC16_bit at NCO1ACCU.B0;
    const register unsigned short int NCO1ACC17 = 1;
    sbit  NCO1ACC17_bit at NCO1ACCU.B1;
    const register unsigned short int NCO1ACC18 = 2;
    sbit  NCO1ACC18_bit at NCO1ACCU.B2;
    const register unsigned short int NCO1ACC19 = 3;
    sbit  NCO1ACC19_bit at NCO1ACCU.B3;

    // NCO1INCL bits
    const register unsigned short int NCO1INC0 = 0;
    sbit  NCO1INC0_bit at NCO1INCL.B0;
    const register unsigned short int NCO1INC1 = 1;
    sbit  NCO1INC1_bit at NCO1INCL.B1;
    const register unsigned short int NCO1INC2 = 2;
    sbit  NCO1INC2_bit at NCO1INCL.B2;
    const register unsigned short int NCO1INC3 = 3;
    sbit  NCO1INC3_bit at NCO1INCL.B3;
    const register unsigned short int NCO1INC4 = 4;
    sbit  NCO1INC4_bit at NCO1INCL.B4;
    const register unsigned short int NCO1INC5 = 5;
    sbit  NCO1INC5_bit at NCO1INCL.B5;
    const register unsigned short int NCO1INC6 = 6;
    sbit  NCO1INC6_bit at NCO1INCL.B6;
    const register unsigned short int NCO1INC7 = 7;
    sbit  NCO1INC7_bit at NCO1INCL.B7;

    // NCO1INCH bits
    const register unsigned short int NCO1INC8 = 0;
    sbit  NCO1INC8_bit at NCO1INCH.B0;
    const register unsigned short int NCO1INC9 = 1;
    sbit  NCO1INC9_bit at NCO1INCH.B1;
    const register unsigned short int NCO1INC10 = 2;
    sbit  NCO1INC10_bit at NCO1INCH.B2;
    const register unsigned short int NCO1INC11 = 3;
    sbit  NCO1INC11_bit at NCO1INCH.B3;
    const register unsigned short int NCO1INC12 = 4;
    sbit  NCO1INC12_bit at NCO1INCH.B4;
    const register unsigned short int NCO1INC13 = 5;
    sbit  NCO1INC13_bit at NCO1INCH.B5;
    const register unsigned short int NCO1INC14 = 6;
    sbit  NCO1INC14_bit at NCO1INCH.B6;
    const register unsigned short int NCO1INC15 = 7;
    sbit  NCO1INC15_bit at NCO1INCH.B7;

    // NCO1CON bits
    const register unsigned short int N1PFM = 0;
    sbit  N1PFM_bit at NCO1CON.B0;
    const register unsigned short int N1POL = 4;
    sbit  N1POL_bit at NCO1CON.B4;
    const register unsigned short int N1OUT = 5;
    sbit  N1OUT_bit at NCO1CON.B5;
    const register unsigned short int N1OE = 6;
    sbit  N1OE_bit at NCO1CON.B6;
    const register unsigned short int N1EN = 7;
    sbit  N1EN_bit at NCO1CON.B7;

    // NCO1CLK bits
    const register unsigned short int N1CKS0 = 0;
    sbit  N1CKS0_bit at NCO1CLK.B0;
    const register unsigned short int N1CKS1 = 1;
    sbit  N1CKS1_bit at NCO1CLK.B1;
    const register unsigned short int N1PWS0 = 5;
    sbit  N1PWS0_bit at NCO1CLK.B5;
    const register unsigned short int N1PWS1 = 6;
    sbit  N1PWS1_bit at NCO1CLK.B6;
    const register unsigned short int N1PWS2 = 7;
    sbit  N1PWS2_bit at NCO1CLK.B7;

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

    // CLC1CON bits
    const register unsigned short int LC1MODE0 = 0;
    sbit  LC1MODE0_bit at CLC1CON.B0;
    const register unsigned short int LC1MODE1 = 1;
    sbit  LC1MODE1_bit at CLC1CON.B1;
    const register unsigned short int LC1MODE2 = 2;
    sbit  LC1MODE2_bit at CLC1CON.B2;
    const register unsigned short int LC1INTN = 3;
    sbit  LC1INTN_bit at CLC1CON.B3;
    const register unsigned short int LC1INTP = 4;
    sbit  LC1INTP_bit at CLC1CON.B4;
    const register unsigned short int LC1OUT = 5;
    sbit  LC1OUT_bit at CLC1CON.B5;
    const register unsigned short int LC1OE = 6;
    sbit  LC1OE_bit at CLC1CON.B6;
    const register unsigned short int LC1EN = 7;
    sbit  LC1EN_bit at CLC1CON.B7;
    const register unsigned short int LCMODE0 = 0;
    sbit  LCMODE0_bit at CLC1CON.B0;
    const register unsigned short int LCMODE1 = 1;
    sbit  LCMODE1_bit at CLC1CON.B1;
    const register unsigned short int LCMODE2 = 2;
    sbit  LCMODE2_bit at CLC1CON.B2;
    const register unsigned short int LCINTN = 3;
    sbit  LCINTN_bit at CLC1CON.B3;
    const register unsigned short int LCINTP = 4;
    sbit  LCINTP_bit at CLC1CON.B4;
    const register unsigned short int LCOUT = 5;
    sbit  LCOUT_bit at CLC1CON.B5;
    const register unsigned short int LCOE = 6;
    sbit  LCOE_bit at CLC1CON.B6;
    const register unsigned short int LCEN = 7;
    sbit  LCEN_bit at CLC1CON.B7;

    // CLC1SEL0 bits
    const register unsigned short int LC1D1S0 = 0;
    sbit  LC1D1S0_bit at CLC1SEL0.B0;
    const register unsigned short int LC1D1S1 = 1;
    sbit  LC1D1S1_bit at CLC1SEL0.B1;
    const register unsigned short int LC1D1S2 = 2;
    sbit  LC1D1S2_bit at CLC1SEL0.B2;
    const register unsigned short int LC1D2S0 = 4;
    sbit  LC1D2S0_bit at CLC1SEL0.B4;
    const register unsigned short int LC1D2S1 = 5;
    sbit  LC1D2S1_bit at CLC1SEL0.B5;
    const register unsigned short int LC1D2S2 = 6;
    sbit  LC1D2S2_bit at CLC1SEL0.B6;
    const register unsigned short int D1S0 = 0;
    sbit  D1S0_bit at CLC1SEL0.B0;
    const register unsigned short int D1S1 = 1;
    sbit  D1S1_bit at CLC1SEL0.B1;
    const register unsigned short int D1S2 = 2;
    sbit  D1S2_bit at CLC1SEL0.B2;
    const register unsigned short int D2S0 = 4;
    sbit  D2S0_bit at CLC1SEL0.B4;
    const register unsigned short int D2S1 = 5;
    sbit  D2S1_bit at CLC1SEL0.B5;
    const register unsigned short int D2S2 = 6;
    sbit  D2S2_bit at CLC1SEL0.B6;

    // CLC1SEL1 bits
    const register unsigned short int LC1D3S0 = 0;
    sbit  LC1D3S0_bit at CLC1SEL1.B0;
    const register unsigned short int LC1D3S1 = 1;
    sbit  LC1D3S1_bit at CLC1SEL1.B1;
    const register unsigned short int LC1D3S2 = 2;
    sbit  LC1D3S2_bit at CLC1SEL1.B2;
    const register unsigned short int LC1D4S0 = 4;
    sbit  LC1D4S0_bit at CLC1SEL1.B4;
    const register unsigned short int LC1D4S1 = 5;
    sbit  LC1D4S1_bit at CLC1SEL1.B5;
    const register unsigned short int LC1D4S2 = 6;
    sbit  LC1D4S2_bit at CLC1SEL1.B6;
    const register unsigned short int D3S0 = 0;
    sbit  D3S0_bit at CLC1SEL1.B0;
    const register unsigned short int D3S1 = 1;
    sbit  D3S1_bit at CLC1SEL1.B1;
    const register unsigned short int D3S2 = 2;
    sbit  D3S2_bit at CLC1SEL1.B2;
    const register unsigned short int D4S0 = 4;
    sbit  D4S0_bit at CLC1SEL1.B4;
    const register unsigned short int D4S1 = 5;
    sbit  D4S1_bit at CLC1SEL1.B5;
    const register unsigned short int D4S2 = 6;
    sbit  D4S2_bit at CLC1SEL1.B6;

    // CLC1POL bits
    const register unsigned short int LC1G1POL = 0;
    sbit  LC1G1POL_bit at CLC1POL.B0;
    const register unsigned short int LC1G2POL = 1;
    sbit  LC1G2POL_bit at CLC1POL.B1;
    const register unsigned short int LC1G3POL = 2;
    sbit  LC1G3POL_bit at CLC1POL.B2;
    const register unsigned short int LC1G4POL = 3;
    sbit  LC1G4POL_bit at CLC1POL.B3;
    const register unsigned short int LC1POL = 7;
    sbit  LC1POL_bit at CLC1POL.B7;
    const register unsigned short int G1POL = 0;
    sbit  G1POL_bit at CLC1POL.B0;
    const register unsigned short int G2POL = 1;
    sbit  G2POL_bit at CLC1POL.B1;
    const register unsigned short int G3POL = 2;
    sbit  G3POL_bit at CLC1POL.B2;
    const register unsigned short int G4POL = 3;
    sbit  G4POL_bit at CLC1POL.B3;
    const register unsigned short int POL = 7;
    sbit  POL_bit at CLC1POL.B7;

    // CLC1GLS0 bits
    const register unsigned short int LC1G1D1N = 0;
    sbit  LC1G1D1N_bit at CLC1GLS0.B0;
    const register unsigned short int LC1G1D1T = 1;
    sbit  LC1G1D1T_bit at CLC1GLS0.B1;
    const register unsigned short int LC1G1D2N = 2;
    sbit  LC1G1D2N_bit at CLC1GLS0.B2;
    const register unsigned short int LC1G1D2T = 3;
    sbit  LC1G1D2T_bit at CLC1GLS0.B3;
    const register unsigned short int LC1G1D3N = 4;
    sbit  LC1G1D3N_bit at CLC1GLS0.B4;
    const register unsigned short int LC1G1D3T = 5;
    sbit  LC1G1D3T_bit at CLC1GLS0.B5;
    const register unsigned short int LC1G1D4N = 6;
    sbit  LC1G1D4N_bit at CLC1GLS0.B6;
    const register unsigned short int LC1G1D4T = 7;
    sbit  LC1G1D4T_bit at CLC1GLS0.B7;
    const register unsigned short int D1N = 0;
    sbit  D1N_bit at CLC1GLS0.B0;
    const register unsigned short int D1T = 1;
    sbit  D1T_bit at CLC1GLS0.B1;
    const register unsigned short int D2N = 2;
    sbit  D2N_bit at CLC1GLS0.B2;
    const register unsigned short int D2T = 3;
    sbit  D2T_bit at CLC1GLS0.B3;
    const register unsigned short int D3N = 4;
    sbit  D3N_bit at CLC1GLS0.B4;
    const register unsigned short int D3T = 5;
    sbit  D3T_bit at CLC1GLS0.B5;
    const register unsigned short int D4N = 6;
    sbit  D4N_bit at CLC1GLS0.B6;
    const register unsigned short int D4T = 7;
    sbit  D4T_bit at CLC1GLS0.B7;

    // CLC1GLS1 bits
    const register unsigned short int LC1G2D1N = 0;
    sbit  LC1G2D1N_bit at CLC1GLS1.B0;
    const register unsigned short int LC1G2D1T = 1;
    sbit  LC1G2D1T_bit at CLC1GLS1.B1;
    const register unsigned short int LC1G2D2N = 2;
    sbit  LC1G2D2N_bit at CLC1GLS1.B2;
    const register unsigned short int LC1G2D2T = 3;
    sbit  LC1G2D2T_bit at CLC1GLS1.B3;
    const register unsigned short int LC1G2D3N = 4;
    sbit  LC1G2D3N_bit at CLC1GLS1.B4;
    const register unsigned short int LC1G2D3T = 5;
    sbit  LC1G2D3T_bit at CLC1GLS1.B5;
    const register unsigned short int LC1G2D4N = 6;
    sbit  LC1G2D4N_bit at CLC1GLS1.B6;
    const register unsigned short int LC1G2D4T = 7;
    sbit  LC1G2D4T_bit at CLC1GLS1.B7;
    sbit  D1N_CLC1GLS1_bit at CLC1GLS1.B0;
    sbit  D1T_CLC1GLS1_bit at CLC1GLS1.B1;
    sbit  D2N_CLC1GLS1_bit at CLC1GLS1.B2;
    sbit  D2T_CLC1GLS1_bit at CLC1GLS1.B3;
    sbit  D3N_CLC1GLS1_bit at CLC1GLS1.B4;
    sbit  D3T_CLC1GLS1_bit at CLC1GLS1.B5;
    sbit  D4N_CLC1GLS1_bit at CLC1GLS1.B6;
    sbit  D4T_CLC1GLS1_bit at CLC1GLS1.B7;

    // CLC1GLS2 bits
    const register unsigned short int LC1G3D1N = 0;
    sbit  LC1G3D1N_bit at CLC1GLS2.B0;
    const register unsigned short int LC1G3D1T = 1;
    sbit  LC1G3D1T_bit at CLC1GLS2.B1;
    const register unsigned short int LC1G3D2N = 2;
    sbit  LC1G3D2N_bit at CLC1GLS2.B2;
    const register unsigned short int LC1G3D2T = 3;
    sbit  LC1G3D2T_bit at CLC1GLS2.B3;
    const register unsigned short int LC1G3D3N = 4;
    sbit  LC1G3D3N_bit at CLC1GLS2.B4;
    const register unsigned short int LC1G3D3T = 5;
    sbit  LC1G3D3T_bit at CLC1GLS2.B5;
    const register unsigned short int LC1G3D4N = 6;
    sbit  LC1G3D4N_bit at CLC1GLS2.B6;
    const register unsigned short int LC1G3D4T = 7;
    sbit  LC1G3D4T_bit at CLC1GLS2.B7;
    sbit  D1N_CLC1GLS2_bit at CLC1GLS2.B0;
    sbit  D1T_CLC1GLS2_bit at CLC1GLS2.B1;
    sbit  D2N_CLC1GLS2_bit at CLC1GLS2.B2;
    sbit  D2T_CLC1GLS2_bit at CLC1GLS2.B3;
    sbit  D3N_CLC1GLS2_bit at CLC1GLS2.B4;
    sbit  D3T_CLC1GLS2_bit at CLC1GLS2.B5;
    sbit  D4N_CLC1GLS2_bit at CLC1GLS2.B6;
    sbit  D4T_CLC1GLS2_bit at CLC1GLS2.B7;

    // CLC1GLS3 bits
    const register unsigned short int LC1G4D1N = 0;
    sbit  LC1G4D1N_bit at CLC1GLS3.B0;
    const register unsigned short int LC1G4D1T = 1;
    sbit  LC1G4D1T_bit at CLC1GLS3.B1;
    const register unsigned short int LC1G4D2N = 2;
    sbit  LC1G4D2N_bit at CLC1GLS3.B2;
    const register unsigned short int LC1G4D2T = 3;
    sbit  LC1G4D2T_bit at CLC1GLS3.B3;
    const register unsigned short int LC1G4D3N = 4;
    sbit  LC1G4D3N_bit at CLC1GLS3.B4;
    const register unsigned short int LC1G4D3T = 5;
    sbit  LC1G4D3T_bit at CLC1GLS3.B5;
    const register unsigned short int LC1G4D4N = 6;
    sbit  LC1G4D4N_bit at CLC1GLS3.B6;
    const register unsigned short int LC1G4D4T = 7;
    sbit  LC1G4D4T_bit at CLC1GLS3.B7;
    const register unsigned short int G4D1N = 0;
    sbit  G4D1N_bit at CLC1GLS3.B0;
    const register unsigned short int G4D1T = 1;
    sbit  G4D1T_bit at CLC1GLS3.B1;
    const register unsigned short int G4D2N = 2;
    sbit  G4D2N_bit at CLC1GLS3.B2;
    const register unsigned short int G4D2T = 3;
    sbit  G4D2T_bit at CLC1GLS3.B3;
    const register unsigned short int G4D3N = 4;
    sbit  G4D3N_bit at CLC1GLS3.B4;
    const register unsigned short int G4D3T = 5;
    sbit  G4D3T_bit at CLC1GLS3.B5;
    const register unsigned short int G4D4N = 6;
    sbit  G4D4N_bit at CLC1GLS3.B6;
    const register unsigned short int G4D4T = 7;
    sbit  G4D4T_bit at CLC1GLS3.B7;

    // CWG1CON0 bits
    const register unsigned short int G1CS0 = 0;
    sbit  G1CS0_bit at CWG1CON0.B0;
    const register unsigned short int G1POLA = 3;
    sbit  G1POLA_bit at CWG1CON0.B3;
    const register unsigned short int G1POLB = 4;
    sbit  G1POLB_bit at CWG1CON0.B4;
    const register unsigned short int G1OEA = 5;
    sbit  G1OEA_bit at CWG1CON0.B5;
    const register unsigned short int G1OEB = 6;
    sbit  G1OEB_bit at CWG1CON0.B6;
    const register unsigned short int G1EN = 7;
    sbit  G1EN_bit at CWG1CON0.B7;

    // CWG1CON1 bits
    const register unsigned short int G1IS0 = 0;
    sbit  G1IS0_bit at CWG1CON1.B0;
    const register unsigned short int G1IS1 = 1;
    sbit  G1IS1_bit at CWG1CON1.B1;
    const register unsigned short int G1ASDLA0 = 4;
    sbit  G1ASDLA0_bit at CWG1CON1.B4;
    const register unsigned short int G1ASDLA1 = 5;
    sbit  G1ASDLA1_bit at CWG1CON1.B5;
    const register unsigned short int G1ASDLB0 = 6;
    sbit  G1ASDLB0_bit at CWG1CON1.B6;
    const register unsigned short int G1ASDLB1 = 7;
    sbit  G1ASDLB1_bit at CWG1CON1.B7;

    // CWG1CON2 bits
    const register unsigned short int G1ASDSFLT = 0;
    sbit  G1ASDSFLT_bit at CWG1CON2.B0;
    const register unsigned short int G1ASDSCLC1 = 1;
    sbit  G1ASDSCLC1_bit at CWG1CON2.B1;
    const register unsigned short int G1ARSEN = 6;
    sbit  G1ARSEN_bit at CWG1CON2.B6;
    const register unsigned short int G1ASE = 7;
    sbit  G1ASE_bit at CWG1CON2.B7;

    // CWG1DBR bits
    const register unsigned short int CWG1DBR0 = 0;
    sbit  CWG1DBR0_bit at CWG1DBR.B0;
    const register unsigned short int CWG1DBR1 = 1;
    sbit  CWG1DBR1_bit at CWG1DBR.B1;
    const register unsigned short int CWG1DBR2 = 2;
    sbit  CWG1DBR2_bit at CWG1DBR.B2;
    const register unsigned short int CWG1DBR3 = 3;
    sbit  CWG1DBR3_bit at CWG1DBR.B3;
    const register unsigned short int CWG1DBR4 = 4;
    sbit  CWG1DBR4_bit at CWG1DBR.B4;
    const register unsigned short int CWG1DBR5 = 5;
    sbit  CWG1DBR5_bit at CWG1DBR.B5;

    // CWG1DBF bits
    const register unsigned short int CWG1DBF0 = 0;
    sbit  CWG1DBF0_bit at CWG1DBF.B0;
    const register unsigned short int CWG1DBF1 = 1;
    sbit  CWG1DBF1_bit at CWG1DBF.B1;
    const register unsigned short int CWG1DBF2 = 2;
    sbit  CWG1DBF2_bit at CWG1DBF.B2;
    const register unsigned short int CWG1DBF3 = 3;
    sbit  CWG1DBF3_bit at CWG1DBF.B3;
    const register unsigned short int CWG1DBF4 = 4;
    sbit  CWG1DBF4_bit at CWG1DBF.B4;
    const register unsigned short int CWG1DBF5 = 5;
    sbit  CWG1DBF5_bit at CWG1DBF.B5;

    // VREGCON bits
    const register unsigned short int VREGPM0 = 0;
    sbit  VREGPM0_bit at VREGCON.B0;
    const register unsigned short int VREGPM1 = 1;
    sbit  VREGPM1_bit at VREGCON.B1;

    // BORCON bits
    const register unsigned short int BORRDY = 0;
    sbit  BORRDY_bit at BORCON.B0;
    const register unsigned short int BORFS = 6;
    sbit  BORFS_bit at BORCON.B6;
    const register unsigned short int SBOREN = 7;
    sbit  SBOREN_bit at BORCON.B7;

    // PORTA bits
    const register unsigned short int RA3 = 3;
    sbit  RA3_bit at PORTA.B3;
    const register unsigned short int RA2 = 2;
    sbit  RA2_bit at PORTA.B2;
    const register unsigned short int RA1 = 1;
    sbit  RA1_bit at PORTA.B1;
    const register unsigned short int RA0 = 0;
    sbit  RA0_bit at PORTA.B0;

    // TRISA bits
    const register unsigned short int TRISA2 = 2;
    sbit  TRISA2_bit at TRISA.B2;
    const register unsigned short int TRISA1 = 1;
    sbit  TRISA1_bit at TRISA.B1;
    const register unsigned short int TRISA0 = 0;
    sbit  TRISA0_bit at TRISA.B0;

    // NCO1INCU bits
