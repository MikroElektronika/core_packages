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
sfr unsigned short volatile PCLATH           absolute 0x000A;
sfr unsigned short volatile INTCON           absolute 0x000B;
sfr unsigned short volatile PIR1             absolute 0x000C;
sfr unsigned short volatile TMR1L            absolute 0x000E;
sfr unsigned short volatile TMR1H            absolute 0x000F;
sfr unsigned short volatile T1CON            absolute 0x0010;
sfr unsigned short volatile ADCON0           absolute 0x001F;
sfr unsigned short volatile OPTION_REG       absolute 0x0081;
sfr unsigned short volatile PIE1             absolute 0x008C;
sfr unsigned short volatile PCON             absolute 0x008E;
sfr unsigned short          WPUB             absolute 0x0095;
sfr unsigned short volatile IOCB             absolute 0x0096;
sfr unsigned short volatile REFCON           absolute 0x009B;
sfr unsigned short volatile LVDCON           absolute 0x009C;
sfr unsigned short          ANSEL            absolute 0x009D;
sfr unsigned short volatile ADCON1           absolute 0x009F;
sfr unsigned short volatile PMDATL           absolute 0x010C;
sfr unsigned short volatile PMADRL           absolute 0x010D;
sfr unsigned short volatile PMDATH           absolute 0x010E;
sfr unsigned short volatile PMADRH           absolute 0x010F;
sfr unsigned short          CALCON           absolute 0x0110;
sfr unsigned short volatile PSMCCON0         absolute 0x0111;
sfr unsigned short volatile PSMCCON1         absolute 0x0112;
sfr unsigned short volatile CM1CON0          absolute 0x0119;
sfr unsigned short volatile CM2CON0          absolute 0x011A;
sfr unsigned short volatile CM2CON1          absolute 0x011B;
sfr unsigned short volatile OPACON           absolute 0x011C;
sfr unsigned short volatile DAC              absolute 0x011E;
sfr unsigned short volatile DACON0           absolute 0x011F;
sfr unsigned short volatile PMCON1           absolute 0x018C;
sfr unsigned short volatile PORTA            absolute 0x0005;
sfr unsigned short volatile PORTB            absolute 0x0006;
sfr unsigned short volatile ADRES            absolute 0x001E;
sfr unsigned short volatile TRISA            absolute 0x0085;
sfr unsigned short volatile TRISB            absolute 0x0086;

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

    // PIR1 bits
    const register unsigned short int TMR1IF = 0;
    sbit  TMR1IF_bit at PIR1.B0;
    const register unsigned short int C1IF = 4;
    sbit  C1IF_bit at PIR1.B4;
    const register unsigned short int C2IF = 5;
    sbit  C2IF_bit at PIR1.B5;
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;
    const register unsigned short int LVDIF = 7;
    sbit  LVDIF_bit at PIR1.B7;

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
    const register unsigned short int T1INSYNC = 2;
    sbit  T1INSYNC_bit at T1CON.B2;
    const register unsigned short int T1CKPS0 = 4;
    sbit  T1CKPS0_bit at T1CON.B4;
    const register unsigned short int T1CKPS1 = 5;
    sbit  T1CKPS1_bit at T1CON.B5;

    // ADCON0 bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON0.B0;
    const register unsigned short int CHS3 = 1;
    sbit  CHS3_bit at ADCON0.B1;
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
    const register unsigned short int C1IE = 4;
    sbit  C1IE_bit at PIE1.B4;
    const register unsigned short int C2IE = 5;
    sbit  C2IE_bit at PIE1.B5;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;
    const register unsigned short int LVDIE = 7;
    sbit  LVDIE_bit at PIE1.B7;

    // PCON bits
    const register unsigned short int NOT_BOR = 0;
    sbit  NOT_BOR_bit at PCON.B0;
    const register unsigned short int NOT_POR = 1;
    sbit  NOT_POR_bit at PCON.B1;
    const register unsigned short int OSCF = 3;
    sbit  OSCF_bit at PCON.B3;
    const register unsigned short int WDTON = 4;
    sbit  WDTON_bit at PCON.B4;
    const register unsigned short int NOT_BO = 0;
    sbit  NOT_BO_bit at PCON.B0;

    // WPUB bits
    const register unsigned short int WPUB0 = 0;
    sbit  WPUB0_bit at WPUB.B0;
    const register unsigned short int WPUB1 = 1;
    sbit  WPUB1_bit at WPUB.B1;
    const register unsigned short int WPUB2 = 2;
    sbit  WPUB2_bit at WPUB.B2;
    const register unsigned short int WPUB3 = 3;
    sbit  WPUB3_bit at WPUB.B3;
    const register unsigned short int WPUB4 = 4;
    sbit  WPUB4_bit at WPUB.B4;
    const register unsigned short int WPUB5 = 5;
    sbit  WPUB5_bit at WPUB.B5;
    const register unsigned short int WPUB6 = 6;
    sbit  WPUB6_bit at WPUB.B6;
    const register unsigned short int WPUB7 = 7;
    sbit  WPUB7_bit at WPUB.B7;

    // IOCB bits
    const register unsigned short int IOCB0 = 0;
    sbit  IOCB0_bit at IOCB.B0;
    const register unsigned short int IOCB1 = 1;
    sbit  IOCB1_bit at IOCB.B1;
    const register unsigned short int IOCB2 = 2;
    sbit  IOCB2_bit at IOCB.B2;
    const register unsigned short int IOCB3 = 3;
    sbit  IOCB3_bit at IOCB.B3;
    const register unsigned short int IOCB4 = 4;
    sbit  IOCB4_bit at IOCB.B4;
    const register unsigned short int IOCB5 = 5;
    sbit  IOCB5_bit at IOCB.B5;
    const register unsigned short int IOCB6 = 6;
    sbit  IOCB6_bit at IOCB.B6;
    const register unsigned short int IOCB7 = 7;
    sbit  IOCB7_bit at IOCB.B7;

    // REFCON bits
    const register unsigned short int VROE = 2;
    sbit  VROE_bit at REFCON.B2;
    const register unsigned short int VREN = 3;
    sbit  VREN_bit at REFCON.B3;
    const register unsigned short int VREFOE = 2;
    sbit  VREFOE_bit at REFCON.B2;
    const register unsigned short int VREFEN = 3;
    sbit  VREFEN_bit at REFCON.B3;

    // LVDCON bits
    const register unsigned short int LVDEN = 4;
    sbit  LVDEN_bit at LVDCON.B4;
    const register unsigned short int BGST = 5;
    sbit  BGST_bit at LVDCON.B5;
    const register unsigned short int LV0 = 0;
    sbit  LV0_bit at LVDCON.B0;
    const register unsigned short int LV1 = 1;
    sbit  LV1_bit at LVDCON.B1;
    const register unsigned short int LV2 = 2;
    sbit  LV2_bit at LVDCON.B2;
    const register unsigned short int LV3 = 3;
    sbit  LV3_bit at LVDCON.B3;

    // ANSEL bits
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

    // ADCON1 bits
    const register unsigned short int VCFG0 = 4;
    sbit  VCFG0_bit at ADCON1.B4;
    const register unsigned short int VCFG1 = 5;
    sbit  VCFG1_bit at ADCON1.B5;

    // CALCON bits
    const register unsigned short int CALREF = 5;
    sbit  CALREF_bit at CALCON.B5;
    const register unsigned short int CALERR = 6;
    sbit  CALERR_bit at CALCON.B6;
    const register unsigned short int CAL = 7;
    sbit  CAL_bit at CALCON.B7;

    // PSMCCON0 bits
    const register unsigned short int DC0 = 0;
    sbit  DC0_bit at PSMCCON0.B0;
    const register unsigned short int DC1 = 1;
    sbit  DC1_bit at PSMCCON0.B1;
    const register unsigned short int MAXDC0 = 2;
    sbit  MAXDC0_bit at PSMCCON0.B2;
    const register unsigned short int MAXDC1 = 3;
    sbit  MAXDC1_bit at PSMCCON0.B3;
    const register unsigned short int MINDC0 = 4;
    sbit  MINDC0_bit at PSMCCON0.B4;
    const register unsigned short int MINDC1 = 5;
    sbit  MINDC1_bit at PSMCCON0.B5;
    const register unsigned short int SMCCL0 = 6;
    sbit  SMCCL0_bit at PSMCCON0.B6;
    const register unsigned short int SMCCL1 = 7;
    sbit  SMCCL1_bit at PSMCCON0.B7;

    // PSMCCON1 bits
    const register unsigned short int SMCCS = 0;
    sbit  SMCCS_bit at PSMCCON1.B0;
    const register unsigned short int PWM_NOT_PSM = 1;
    sbit  PWM_NOT_PSM_bit at PSMCCON1.B1;
    const register unsigned short int SMCOM = 2;
    sbit  SMCOM_bit at PSMCCON1.B2;
    const register unsigned short int SCEN = 3;
    sbit  SCEN_bit at PSMCCON1.B3;
    const register unsigned short int S1BPOL = 5;
    sbit  S1BPOL_bit at PSMCCON1.B5;
    const register unsigned short int S1APOL = 6;
    sbit  S1APOL_bit at PSMCCON1.B6;
    const register unsigned short int SMCON = 7;
    sbit  SMCON_bit at PSMCCON1.B7;
    const register unsigned short int PWM = 1;
    sbit  PWM_bit at PSMCCON1.B1;
    const register unsigned short int PSM = 1;
    sbit  PSM_bit at PSMCCON1.B1;
    const register unsigned short int NOT_PSM = 1;
    sbit  NOT_PSM_bit at PSMCCON1.B1;

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
    const register unsigned short int MC2OUT = 6;
    sbit  MC2OUT_bit at CM2CON1.B6;
    const register unsigned short int MC1OUT = 7;
    sbit  MC1OUT_bit at CM2CON1.B7;

    // OPACON bits
    const register unsigned short int GBWP = 0;
    sbit  GBWP_bit at OPACON.B0;
    const register unsigned short int CMPEN = 6;
    sbit  CMPEN_bit at OPACON.B6;
    const register unsigned short int OPAON = 7;
    sbit  OPAON_bit at OPACON.B7;

    // DAC bits
    const register unsigned short int DA0 = 0;
    sbit  DA0_bit at DAC.B0;
    const register unsigned short int DA1 = 1;
    sbit  DA1_bit at DAC.B1;
    const register unsigned short int DA2 = 2;
    sbit  DA2_bit at DAC.B2;
    const register unsigned short int DA3 = 3;
    sbit  DA3_bit at DAC.B3;
    const register unsigned short int DA4 = 4;
    sbit  DA4_bit at DAC.B4;
    const register unsigned short int DA5 = 5;
    sbit  DA5_bit at DAC.B5;
    const register unsigned short int DA6 = 6;
    sbit  DA6_bit at DAC.B6;
    const register unsigned short int DA7 = 7;
    sbit  DA7_bit at DAC.B7;

    // DACON0 bits
    const register unsigned short int DAOE = 6;
    sbit  DAOE_bit at DACON0.B6;
    const register unsigned short int DAON = 7;
    sbit  DAON_bit at DACON0.B7;
    const register unsigned short int DARS0 = 0;
    sbit  DARS0_bit at DACON0.B0;
    const register unsigned short int DARS1 = 1;
    sbit  DARS1_bit at DACON0.B1;

    // PMCON1 bits
    const register unsigned short int RD = 0;
    sbit  RD_bit at PMCON1.B0;

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
