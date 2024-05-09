// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00017FF8;

// Working space registers
rx unsigned short R0;
rx unsigned short R1;
rx unsigned short R2;
rx unsigned short R3;
rx unsigned short R4;
rx unsigned short R5;
rx unsigned short R6;
rx unsigned short R7;
rx unsigned short R8;
rx unsigned short R9;
rx unsigned short R10;
rx unsigned short R11;
rx unsigned short R12;
rx unsigned short R13;
rx unsigned short R14;
rx unsigned short R15;
rx unsigned short R16;
rx unsigned short R17;
rx unsigned short R18;
rx unsigned short R19;
rx unsigned short R20;

const register unsigned short int W = 0;
const register unsigned short int F = 1;
const register unsigned short int FAST   = 1;
const register unsigned short int A      = 0;
const register unsigned short int ACCESS = 0;
const register unsigned short int BANKED = 1;

// Special function registers (SFRs)

const signed int   PORT_TO_TRIS_OFFSET    =     18;

const unsigned short ICS_AUTO                  =     0;
const unsigned short ICS_OFF                   =     3;

sfr unsigned int   volatile PMSTAT           absolute 0x0F5A;
sfr unsigned short volatile PMSTATL          absolute 0x0F5A;
sfr unsigned short volatile PMSTATH          absolute 0x0F5B;
sfr unsigned short volatile PMEL             absolute 0x0F5C;
sfr unsigned short volatile PMEN             absolute 0x0F5C;
sfr unsigned short volatile PMEH             absolute 0x0F5D;
sfr unsigned int   volatile PMDIN2           absolute 0x0F5E;
sfr unsigned short volatile PMDIN2L          absolute 0x0F5E;
sfr unsigned short volatile PMDIN2H          absolute 0x0F5F;
sfr unsigned int   volatile PMDOUT2          absolute 0x0F60;
sfr unsigned short volatile PMDOUT2L         absolute 0x0F60;
sfr unsigned short volatile PMDOUT2H         absolute 0x0F61;
sfr unsigned int   volatile PMMODE           absolute 0x0F62;
sfr unsigned short volatile PMMODEL          absolute 0x0F62;
sfr unsigned short volatile PMMODEH          absolute 0x0F63;
sfr unsigned int   volatile PMCON            absolute 0x0F64;
sfr unsigned short volatile PMCONL           absolute 0x0F64;
sfr unsigned short volatile PMCONH           absolute 0x0F65;
sfr unsigned int   volatile PMDIN1           absolute 0x0F66;
sfr unsigned short volatile PMDIN1L          absolute 0x0F66;
sfr unsigned short volatile PMDIN1H          absolute 0x0F67;
sfr unsigned short volatile PMADDR           absolute 0x0F68;
sfr unsigned short volatile PMADDRL          absolute 0x0F68;
sfr unsigned short volatile PMDOUT1          absolute 0x0F68;
sfr unsigned short volatile PMDOUT1L         absolute 0x0F68;
sfr unsigned short volatile PMADDRH          absolute 0x0F69;
sfr unsigned short volatile PMDOUT1H         absolute 0x0F69;
sfr unsigned short volatile CMSTAT           absolute 0x0F6A;
sfr unsigned short volatile CMSTATUS         absolute 0x0F6A;
sfr unsigned short volatile SSP2CON2         absolute 0x0F6B;
sfr unsigned short volatile SSP2CON1         absolute 0x0F6C;
sfr unsigned short volatile SSP2STAT         absolute 0x0F6D;
sfr unsigned short volatile SSP2ADD          absolute 0x0F6E;
sfr unsigned short volatile SSP2MSK          absolute 0x0F6E;
sfr unsigned short volatile SSP2BUF          absolute 0x0F6F;
sfr unsigned short volatile CCP5CON          absolute 0x0F70;
sfr unsigned short volatile CCP4CON          absolute 0x0F73;
sfr unsigned short volatile T4CON            absolute 0x0F76;
sfr unsigned short volatile CVRCON           absolute 0x0F77;
sfr unsigned short volatile PR4              absolute 0x0F77;
sfr unsigned short volatile TMR4             absolute 0x0F78;
sfr unsigned short volatile T3CON            absolute 0x0F79;
sfr unsigned short volatile TMR3L            absolute 0x0F7A;
sfr unsigned short volatile TMR3H            absolute 0x0F7B;
sfr unsigned short          BAUDCON2         absolute 0x0F7C;
sfr unsigned short          SPBRGH2          absolute 0x0F7D;
sfr unsigned short          BAUDCON          absolute 0x0F7E;
sfr unsigned short          BAUDCON1         absolute 0x0F7E;
sfr unsigned short          SPBRGH1          absolute 0x0F7F;
sfr unsigned short volatile LATA             absolute 0x0F89;
sfr unsigned short volatile LATB             absolute 0x0F8A;
sfr unsigned short volatile LATC             absolute 0x0F8B;
sfr unsigned short volatile LATD             absolute 0x0F8C;
sfr unsigned short volatile LATE             absolute 0x0F8D;
sfr unsigned short volatile LATF             absolute 0x0F8E;
sfr unsigned short volatile LATG             absolute 0x0F8F;
sfr unsigned short volatile OSCTUNE          absolute 0x0F9B;
sfr unsigned short volatile RCSTA2           absolute 0x0F9C;
sfr unsigned short volatile PIE1             absolute 0x0F9D;
sfr unsigned short volatile PIR1             absolute 0x0F9E;
sfr unsigned short volatile IPR1             absolute 0x0F9F;
sfr unsigned short volatile PIE2             absolute 0x0FA0;
sfr unsigned short volatile PIR2             absolute 0x0FA1;
sfr unsigned short volatile IPR2             absolute 0x0FA2;
sfr unsigned short volatile PIE3             absolute 0x0FA3;
sfr unsigned short volatile PIR3             absolute 0x0FA4;
sfr unsigned short volatile IPR3             absolute 0x0FA5;
sfr unsigned short volatile EECON1           absolute 0x0FA6;
sfr unsigned short volatile EECON2           absolute 0x0FA7;
sfr unsigned short volatile TXSTA2           absolute 0x0FA8;
sfr unsigned short volatile TXREG2           absolute 0x0FA9;
sfr unsigned short volatile RCREG2           absolute 0x0FAA;
sfr unsigned short          SPBRG2           absolute 0x0FAB;
sfr unsigned short volatile RCSTA            absolute 0x0FAC;
sfr unsigned short volatile RCSTA1           absolute 0x0FAC;
sfr unsigned short volatile TXSTA            absolute 0x0FAD;
sfr unsigned short volatile TXSTA1           absolute 0x0FAD;
sfr unsigned short volatile TXREG            absolute 0x0FAE;
sfr unsigned short volatile TXREG1           absolute 0x0FAE;
sfr unsigned short volatile RCREG            absolute 0x0FAF;
sfr unsigned short volatile RCREG1           absolute 0x0FAF;
sfr unsigned short          SPBRG            absolute 0x0FB0;
sfr unsigned short          SPBRG1           absolute 0x0FB0;
sfr unsigned short volatile CCP3CON          absolute 0x0FB1;
sfr unsigned short volatile ECCP3CON         absolute 0x0FB1;
sfr unsigned short volatile ECCP3DEL         absolute 0x0FB4;
sfr unsigned short volatile ECCP3AS          absolute 0x0FB5;
sfr unsigned short volatile CCP2CON          absolute 0x0FB6;
sfr unsigned short volatile ECCP2CON         absolute 0x0FB6;
sfr unsigned short volatile ECCP2DEL         absolute 0x0FB9;
sfr unsigned short volatile ECCP2AS          absolute 0x0FBA;
sfr unsigned short volatile CCP1CON          absolute 0x0FBB;
sfr unsigned short volatile ECCP1CON         absolute 0x0FBB;
sfr unsigned int   volatile CCPR1            absolute 0x0FBC;
sfr unsigned short volatile CCPR1L           absolute 0x0FBC;
sfr unsigned short volatile CCPR1H           absolute 0x0FBD;
sfr unsigned short volatile ECCP1DEL         absolute 0x0FBE;
sfr unsigned short volatile ECCP1AS          absolute 0x0FBF;
sfr unsigned short          WDTCON           absolute 0x0FC0;
sfr unsigned short volatile ADCON1           absolute 0x0FC1;
sfr unsigned short          ANCON0           absolute 0x0FC1;
sfr unsigned short volatile ADCON0           absolute 0x0FC2;
sfr unsigned short          ANCON1           absolute 0x0FC2;
sfr unsigned short volatile ADRESL           absolute 0x0FC3;
sfr unsigned short volatile ADRESH           absolute 0x0FC4;
sfr unsigned short volatile SSP1CON2         absolute 0x0FC5;
sfr unsigned short volatile SSPCON2          absolute 0x0FC5;
sfr unsigned short volatile SSP1CON1         absolute 0x0FC6;
sfr unsigned short volatile SSPCON1          absolute 0x0FC6;
sfr unsigned short volatile SSP1STAT         absolute 0x0FC7;
sfr unsigned short volatile SSPSTAT          absolute 0x0FC7;
sfr unsigned short volatile SSP1ADD          absolute 0x0FC8;
sfr unsigned short volatile SSP1MSK          absolute 0x0FC8;
sfr unsigned short volatile SSPADD           absolute 0x0FC8;
sfr unsigned short volatile SSP1BUF          absolute 0x0FC9;
sfr unsigned short volatile SSPBUF           absolute 0x0FC9;
sfr unsigned short volatile T2CON            absolute 0x0FCA;
sfr unsigned short volatile PR2              absolute 0x0FCB;
sfr unsigned short volatile PADCFG1          absolute 0x0FCC;
sfr unsigned short volatile TMR2             absolute 0x0FCC;
sfr unsigned short volatile ODCON3           absolute 0x0FCD;
sfr unsigned short volatile T1CON            absolute 0x0FCD;
sfr unsigned short volatile ODCON2           absolute 0x0FCE;
sfr unsigned short volatile TMR1             absolute 0x0FCE;
sfr unsigned short volatile TMR1L            absolute 0x0FCE;
sfr unsigned short volatile ODCON1           absolute 0x0FCF;
sfr unsigned short volatile TMR1H            absolute 0x0FCF;
sfr unsigned short volatile RCON             absolute 0x0FD0;
sfr unsigned short volatile CM2CON           absolute 0x0FD1;
sfr unsigned short volatile CM2CON1          absolute 0x0FD1;
sfr unsigned short volatile CM1CON           absolute 0x0FD2;
sfr unsigned short volatile CM1CON1          absolute 0x0FD2;
sfr unsigned short volatile OSCCON           absolute 0x0FD3;
sfr unsigned short volatile REFOCON          absolute 0x0FD3;
sfr unsigned short volatile T0CON            absolute 0x0FD5;
sfr unsigned short volatile TMR0L            absolute 0x0FD6;
sfr unsigned short volatile TMR0H            absolute 0x0FD7;
sfr unsigned short volatile STATUS           absolute 0x0FD8;
sfr unsigned short          FSR2L            absolute 0x0FD9;
register unsigned short     *FSR2PTR         absolute 0x0FD9;
sfr unsigned int            FSR2             absolute 0x0FD9;
sfr unsigned short          FSR2H            absolute 0x0FDA;
sfr unsigned short volatile PLUSW2           absolute 0x0FDB;
sfr unsigned short volatile PREINC2          absolute 0x0FDC;
sfr unsigned short volatile POSTDEC2         absolute 0x0FDD;
sfr unsigned short volatile POSTINC2         absolute 0x0FDE;
sfr unsigned short volatile INDF2            absolute 0x0FDF;
sfr unsigned short          BSR              absolute 0x0FE0;
sfr unsigned short          FSR1L            absolute 0x0FE1;
register unsigned short     *FSR1PTR         absolute 0x0FE1;
sfr unsigned int            FSR1             absolute 0x0FE1;
sfr unsigned short          FSR1H            absolute 0x0FE2;
sfr unsigned short volatile PLUSW1           absolute 0x0FE3;
sfr unsigned short volatile PREINC1          absolute 0x0FE4;
sfr unsigned short volatile POSTDEC1         absolute 0x0FE5;
sfr unsigned short volatile POSTINC1         absolute 0x0FE6;
sfr unsigned short volatile INDF1            absolute 0x0FE7;
sfr unsigned short volatile WREG             absolute 0x0FE8;
sfr unsigned short          FSR0L            absolute 0x0FE9;
register unsigned short     *FSR0PTR         absolute 0x0FE9;
sfr unsigned int            FSR0             absolute 0x0FE9;
sfr unsigned short          FSR0H            absolute 0x0FEA;
sfr unsigned short volatile PLUSW0           absolute 0x0FEB;
sfr unsigned short volatile PREINC0          absolute 0x0FEC;
sfr unsigned short volatile POSTDEC0         absolute 0x0FED;
sfr unsigned short volatile POSTINC0         absolute 0x0FEE;
sfr unsigned short volatile INDF0            absolute 0x0FEF;
sfr unsigned short volatile INTCON3          absolute 0x0FF0;
sfr unsigned short volatile INTCON2          absolute 0x0FF1;
sfr unsigned short volatile INTCON           absolute 0x0FF2;
sfr unsigned short volatile TABLAT           absolute 0x0FF5;
const register unsigned short *TBLPTR        absolute 0x0FF6;
sfr unsigned short          TBLPTRL          absolute 0x0FF6;
sfr unsigned short          TBLPTRH          absolute 0x0FF7;
sfr unsigned short          TBLPTRU          absolute 0x0FF8;
sfr unsigned short volatile PC               absolute 0x0FF9;
sfr unsigned short volatile PCL              absolute 0x0FF9;
sfr unsigned short volatile PCLATH           absolute 0x0FFA;
sfr unsigned short volatile PCLATU           absolute 0x0FFB;
sfr unsigned short volatile STKPTR           absolute 0x0FFC;
sfr unsigned int   volatile CCPR5            absolute 0x0F71;
sfr unsigned short volatile CCPR5L           absolute 0x0F71;
sfr unsigned short volatile CCPR5H           absolute 0x0F72;
sfr unsigned int   volatile CCPR4            absolute 0x0F74;
sfr unsigned short volatile CCPR4L           absolute 0x0F74;
sfr unsigned short volatile CCPR4H           absolute 0x0F75;
sfr unsigned short volatile PORTA            absolute 0x0F80;
sfr unsigned short volatile PORTB            absolute 0x0F81;
sfr unsigned short volatile PORTC            absolute 0x0F82;
sfr unsigned short volatile PORTD            absolute 0x0F83;
sfr unsigned short volatile PORTE            absolute 0x0F84;
sfr unsigned short volatile PORTF            absolute 0x0F85;
sfr unsigned short volatile PORTG            absolute 0x0F86;
sfr unsigned short volatile TRISA            absolute 0x0F92;
sfr unsigned short volatile TRISB            absolute 0x0F93;
sfr unsigned short volatile TRISC            absolute 0x0F94;
sfr unsigned short volatile TRISD            absolute 0x0F95;
sfr unsigned short volatile TRISE            absolute 0x0F96;
sfr unsigned short volatile TRISF            absolute 0x0F97;
sfr unsigned short volatile TRISG            absolute 0x0F98;
sfr unsigned int   volatile CCPR3            absolute 0x0FB2;
sfr unsigned short volatile CCPR3L           absolute 0x0FB2;
sfr unsigned short volatile CCPR3H           absolute 0x0FB3;
sfr unsigned int   volatile CCPR2            absolute 0x0FB7;
sfr unsigned short volatile CCPR2L           absolute 0x0FB7;
sfr unsigned short volatile CCPR2H           absolute 0x0FB8;
sfr unsigned int   volatile ADRES            absolute 0x0FC3;
sfr unsigned int            PROD             absolute 0x0FF3;
sfr unsigned short          PRODL            absolute 0x0FF3;
sfr unsigned short          PRODH            absolute 0x0FF4;
sfr unsigned short volatile TOSL             absolute 0x0FFD;
sfr unsigned short volatile TOSH             absolute 0x0FFE;
sfr unsigned short volatile TOSU             absolute 0x0FFF;

    // PMSTATL bits
    const register unsigned short int OB0E = 0;
    sbit  OB0E_bit at PMSTATL.B0;
    const register unsigned short int OB1E = 1;
    sbit  OB1E_bit at PMSTATL.B1;
    const register unsigned short int OB2E = 2;
    sbit  OB2E_bit at PMSTATL.B2;
    const register unsigned short int OB3E = 3;
    sbit  OB3E_bit at PMSTATL.B3;
    const register unsigned short int OBUF = 6;
    sbit  OBUF_bit at PMSTATL.B6;
    const register unsigned short int OBE = 7;
    sbit  OBE_bit at PMSTATL.B7;

    // PMSTATH bits
    const register unsigned short int IB0F = 0;
    sbit  IB0F_bit at PMSTATH.B0;
    const register unsigned short int IB1F = 1;
    sbit  IB1F_bit at PMSTATH.B1;
    const register unsigned short int IB2F = 2;
    sbit  IB2F_bit at PMSTATH.B2;
    const register unsigned short int IB3F = 3;
    sbit  IB3F_bit at PMSTATH.B3;
    const register unsigned short int IBOV = 6;
    sbit  IBOV_bit at PMSTATH.B6;
    const register unsigned short int IBF = 7;
    sbit  IBF_bit at PMSTATH.B7;

    // PMEL bits
    const register unsigned short int PTEN0 = 0;
    sbit  PTEN0_bit at PMEL.B0;
    const register unsigned short int PTEN1 = 1;
    sbit  PTEN1_bit at PMEL.B1;
    const register unsigned short int PTEN2 = 2;
    sbit  PTEN2_bit at PMEL.B2;
    const register unsigned short int PTEN3 = 3;
    sbit  PTEN3_bit at PMEL.B3;
    const register unsigned short int PTEN4 = 4;
    sbit  PTEN4_bit at PMEL.B4;
    const register unsigned short int PTEN5 = 5;
    sbit  PTEN5_bit at PMEL.B5;
    const register unsigned short int PTEN6 = 6;
    sbit  PTEN6_bit at PMEL.B6;
    const register unsigned short int PTEN7 = 7;
    sbit  PTEN7_bit at PMEL.B7;

    // PMEH bits
    const register unsigned short int PTEN8 = 0;
    sbit  PTEN8_bit at PMEH.B0;
    const register unsigned short int PTEN9 = 1;
    sbit  PTEN9_bit at PMEH.B1;
    const register unsigned short int PTEN10 = 2;
    sbit  PTEN10_bit at PMEH.B2;
    const register unsigned short int PTEN11 = 3;
    sbit  PTEN11_bit at PMEH.B3;
    const register unsigned short int PTEN12 = 4;
    sbit  PTEN12_bit at PMEH.B4;
    const register unsigned short int PTEN13 = 5;
    sbit  PTEN13_bit at PMEH.B5;
    const register unsigned short int PTEN14 = 6;
    sbit  PTEN14_bit at PMEH.B6;
    const register unsigned short int PTEN15 = 7;
    sbit  PTEN15_bit at PMEH.B7;

    // PMMODEL bits
    const register unsigned short int WAITE0 = 0;
    sbit  WAITE0_bit at PMMODEL.B0;
    const register unsigned short int WAITE1 = 1;
    sbit  WAITE1_bit at PMMODEL.B1;
    const register unsigned short int WAITM0 = 2;
    sbit  WAITM0_bit at PMMODEL.B2;
    const register unsigned short int WAITM1 = 3;
    sbit  WAITM1_bit at PMMODEL.B3;
    const register unsigned short int WAITM2 = 4;
    sbit  WAITM2_bit at PMMODEL.B4;
    const register unsigned short int WAITM3 = 5;
    sbit  WAITM3_bit at PMMODEL.B5;
    const register unsigned short int WAITB0 = 6;
    sbit  WAITB0_bit at PMMODEL.B6;
    const register unsigned short int WAITB1 = 7;
    sbit  WAITB1_bit at PMMODEL.B7;

    // PMMODEH bits
    const register unsigned short int MODE16 = 2;
    sbit  MODE16_bit at PMMODEH.B2;
    const register unsigned short int BUSY = 7;
    sbit  BUSY_bit at PMMODEH.B7;
    const register unsigned short int MODE0 = 0;
    sbit  MODE0_bit at PMMODEH.B0;
    const register unsigned short int MODE1 = 1;
    sbit  MODE1_bit at PMMODEH.B1;
    const register unsigned short int INCM0 = 3;
    sbit  INCM0_bit at PMMODEH.B3;
    const register unsigned short int INCM1 = 4;
    sbit  INCM1_bit at PMMODEH.B4;
    const register unsigned short int IRQM0 = 5;
    sbit  IRQM0_bit at PMMODEH.B5;
    const register unsigned short int IRQM1 = 6;
    sbit  IRQM1_bit at PMMODEH.B6;

    // PMCONL bits
    const register unsigned short int RDSP = 0;
    sbit  RDSP_bit at PMCONL.B0;
    const register unsigned short int WRSP = 1;
    sbit  WRSP_bit at PMCONL.B1;
    const register unsigned short int BEP = 2;
    sbit  BEP_bit at PMCONL.B2;
    const register unsigned short int CS1P = 3;
    sbit  CS1P_bit at PMCONL.B3;
    const register unsigned short int CS2P = 4;
    sbit  CS2P_bit at PMCONL.B4;
    const register unsigned short int ALP = 5;
    sbit  ALP_bit at PMCONL.B5;
    const register unsigned short int CSF0 = 6;
    sbit  CSF0_bit at PMCONL.B6;
    const register unsigned short int CSF1 = 7;
    sbit  CSF1_bit at PMCONL.B7;

    // PMCONH bits
    const register unsigned short int PTRDEN = 0;
    sbit  PTRDEN_bit at PMCONH.B0;
    const register unsigned short int PTWREN = 1;
    sbit  PTWREN_bit at PMCONH.B1;
    const register unsigned short int PTBEEN = 2;
    sbit  PTBEEN_bit at PMCONH.B2;
    const register unsigned short int ADRMUX0 = 3;
    sbit  ADRMUX0_bit at PMCONH.B3;
    const register unsigned short int ADRMUX1 = 4;
    sbit  ADRMUX1_bit at PMCONH.B4;
    const register unsigned short int PSIDL = 5;
    sbit  PSIDL_bit at PMCONH.B5;
    const register unsigned short int PMPEN = 7;
    sbit  PMPEN_bit at PMCONH.B7;

    // PMADDRH bits
    const register unsigned short int CS1 = 6;
    sbit  CS1_bit at PMADDRH.B6;
    const register unsigned short int CS2 = 7;
    sbit  CS2_bit at PMADDRH.B7;

    // CMSTAT, CMSTATUS bits
    const register unsigned short int COUT1 = 0;
    sbit  COUT1_bit at CMSTAT.B0;
    const register unsigned short int COUT2 = 1;
    sbit  COUT2_bit at CMSTAT.B1;

    // SSP2CON2 bits
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at SSP2CON2.B0;
    const register unsigned short int RSEN = 1;
    sbit  RSEN_bit at SSP2CON2.B1;
    const register unsigned short int PEN = 2;
    sbit  PEN_bit at SSP2CON2.B2;
    const register unsigned short int RCEN = 3;
    sbit  RCEN_bit at SSP2CON2.B3;
    const register unsigned short int ACKEN = 4;
    sbit  ACKEN_bit at SSP2CON2.B4;
    const register unsigned short int ACKDT = 5;
    sbit  ACKDT_bit at SSP2CON2.B5;
    const register unsigned short int ACKSTAT = 6;
    sbit  ACKSTAT_bit at SSP2CON2.B6;
    const register unsigned short int GCEN = 7;
    sbit  GCEN_bit at SSP2CON2.B7;
    const register unsigned short int ADMSK1 = 1;
    sbit  ADMSK1_bit at SSP2CON2.B1;
    const register unsigned short int ADMSK2 = 2;
    sbit  ADMSK2_bit at SSP2CON2.B2;
    const register unsigned short int ADMSK3 = 3;
    sbit  ADMSK3_bit at SSP2CON2.B3;
    const register unsigned short int ADMSK4 = 4;
    sbit  ADMSK4_bit at SSP2CON2.B4;
    const register unsigned short int ADMSK5 = 5;
    sbit  ADMSK5_bit at SSP2CON2.B5;

    // SSP2CON1 bits
    const register unsigned short int CKP = 4;
    sbit  CKP_bit at SSP2CON1.B4;
    const register unsigned short int SSPEN = 5;
    sbit  SSPEN_bit at SSP2CON1.B5;
    const register unsigned short int SSPOV = 6;
    sbit  SSPOV_bit at SSP2CON1.B6;
    const register unsigned short int WCOL = 7;
    sbit  WCOL_bit at SSP2CON1.B7;
    const register unsigned short int SSPM0 = 0;
    sbit  SSPM0_bit at SSP2CON1.B0;
    const register unsigned short int SSPM1 = 1;
    sbit  SSPM1_bit at SSP2CON1.B1;
    const register unsigned short int SSPM2 = 2;
    sbit  SSPM2_bit at SSP2CON1.B2;
    const register unsigned short int SSPM3 = 3;
    sbit  SSPM3_bit at SSP2CON1.B3;

    // SSP2STAT bits
    const register unsigned short int BF = 0;
    sbit  BF_bit at SSP2STAT.B0;
    const register unsigned short int UA = 1;
    sbit  UA_bit at SSP2STAT.B1;
    const register unsigned short int R_NOT_W = 2;
    sbit  R_NOT_W_bit at SSP2STAT.B2;
    const register unsigned short int S = 3;
    sbit  S_bit at SSP2STAT.B3;
    const register unsigned short int P = 4;
    sbit  P_bit at SSP2STAT.B4;
    const register unsigned short int D_NOT_A = 5;
    sbit  D_NOT_A_bit at SSP2STAT.B5;
    const register unsigned short int CKE = 6;
    sbit  CKE_bit at SSP2STAT.B6;
    const register unsigned short int SMP = 7;
    sbit  SMP_bit at SSP2STAT.B7;
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at SSP2STAT.B2;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at SSP2STAT.B5;
    const register unsigned short int I2C_DAT = 5;
    sbit  I2C_DAT_bit at SSP2STAT.B5;
    const register unsigned short int NOT_W = 2;
    sbit  NOT_W_bit at SSP2STAT.B2;
    const register unsigned short int NOT_A = 5;
    sbit  NOT_A_bit at SSP2STAT.B5;
    const register unsigned short int NOT_WRITE = 2;
    sbit  NOT_WRITE_bit at SSP2STAT.B2;
    const register unsigned short int NOT_ADDRESS = 5;
    sbit  NOT_ADDRESS_bit at SSP2STAT.B5;
    const register unsigned short int READ_WRITE = 2;
    sbit  READ_WRITE_bit at SSP2STAT.B2;
    const register unsigned short int DATA_ADDRESS = 5;
    sbit  DATA_ADDRESS_bit at SSP2STAT.B5;
    const register unsigned short int R = 2;
    sbit  R_bit at SSP2STAT.B2;
    const register unsigned short int D = 5;
    sbit  D_bit at SSP2STAT.B5;

    // SSP2MSK bits
    const register unsigned short int MSK0 = 0;
    sbit  MSK0_bit at SSP2MSK.B0;
    const register unsigned short int MSK1 = 1;
    sbit  MSK1_bit at SSP2MSK.B1;
    const register unsigned short int MSK2 = 2;
    sbit  MSK2_bit at SSP2MSK.B2;
    const register unsigned short int MSK3 = 3;
    sbit  MSK3_bit at SSP2MSK.B3;
    const register unsigned short int MSK4 = 4;
    sbit  MSK4_bit at SSP2MSK.B4;
    const register unsigned short int MSK5 = 5;
    sbit  MSK5_bit at SSP2MSK.B5;
    const register unsigned short int MSK6 = 6;
    sbit  MSK6_bit at SSP2MSK.B6;
    const register unsigned short int MSK7 = 7;
    sbit  MSK7_bit at SSP2MSK.B7;

    // CCP5CON bits
    const register unsigned short int CCP5M0 = 0;
    sbit  CCP5M0_bit at CCP5CON.B0;
    const register unsigned short int CCP5M1 = 1;
    sbit  CCP5M1_bit at CCP5CON.B1;
    const register unsigned short int CCP5M2 = 2;
    sbit  CCP5M2_bit at CCP5CON.B2;
    const register unsigned short int CCP5M3 = 3;
    sbit  CCP5M3_bit at CCP5CON.B3;
    const register unsigned short int DC5B0 = 4;
    sbit  DC5B0_bit at CCP5CON.B4;
    const register unsigned short int DC5B1 = 5;
    sbit  DC5B1_bit at CCP5CON.B5;
    const register unsigned short int DCCP5Y = 4;
    sbit  DCCP5Y_bit at CCP5CON.B4;
    const register unsigned short int DCCP5X = 5;
    sbit  DCCP5X_bit at CCP5CON.B5;

    // CCP4CON bits
    const register unsigned short int CCP4M0 = 0;
    sbit  CCP4M0_bit at CCP4CON.B0;
    const register unsigned short int CCP4M1 = 1;
    sbit  CCP4M1_bit at CCP4CON.B1;
    const register unsigned short int CCP4M2 = 2;
    sbit  CCP4M2_bit at CCP4CON.B2;
    const register unsigned short int CCP4M3 = 3;
    sbit  CCP4M3_bit at CCP4CON.B3;
    const register unsigned short int DC4B0 = 4;
    sbit  DC4B0_bit at CCP4CON.B4;
    const register unsigned short int DC4B1 = 5;
    sbit  DC4B1_bit at CCP4CON.B5;
    const register unsigned short int DCCP4Y = 4;
    sbit  DCCP4Y_bit at CCP4CON.B4;
    const register unsigned short int DCCP4X = 5;
    sbit  DCCP4X_bit at CCP4CON.B5;

    // T4CON bits
    const register unsigned short int TMR4ON = 2;
    sbit  TMR4ON_bit at T4CON.B2;
    const register unsigned short int T4CKPS0 = 0;
    sbit  T4CKPS0_bit at T4CON.B0;
    const register unsigned short int T4CKPS1 = 1;
    sbit  T4CKPS1_bit at T4CON.B1;
    const register unsigned short int T4OUTPS0 = 3;
    sbit  T4OUTPS0_bit at T4CON.B3;
    const register unsigned short int T4OUTPS1 = 4;
    sbit  T4OUTPS1_bit at T4CON.B4;
    const register unsigned short int T4OUTPS2 = 5;
    sbit  T4OUTPS2_bit at T4CON.B5;
    const register unsigned short int T4OUTPS3 = 6;
    sbit  T4OUTPS3_bit at T4CON.B6;

    // CVRCON bits
    const register unsigned short int CVRSS = 4;
    sbit  CVRSS_bit at CVRCON.B4;
    const register unsigned short int CVRR = 5;
    sbit  CVRR_bit at CVRCON.B5;
    const register unsigned short int CVROE = 6;
    sbit  CVROE_bit at CVRCON.B6;
    const register unsigned short int CVREN = 7;
    sbit  CVREN_bit at CVRCON.B7;
    const register unsigned short int CVR0 = 0;
    sbit  CVR0_bit at CVRCON.B0;
    const register unsigned short int CVR1 = 1;
    sbit  CVR1_bit at CVRCON.B1;
    const register unsigned short int CVR2 = 2;
    sbit  CVR2_bit at CVRCON.B2;
    const register unsigned short int CVR3 = 3;
    sbit  CVR3_bit at CVRCON.B3;

    // T3CON bits
    const register unsigned short int TMR3ON = 0;
    sbit  TMR3ON_bit at T3CON.B0;
    const register unsigned short int TMR3CS = 1;
    sbit  TMR3CS_bit at T3CON.B1;
    const register unsigned short int NOT_T3SYNC = 2;
    sbit  NOT_T3SYNC_bit at T3CON.B2;
    const register unsigned short int T3CCP1 = 3;
    sbit  T3CCP1_bit at T3CON.B3;
    const register unsigned short int T3CCP2 = 6;
    sbit  T3CCP2_bit at T3CON.B6;
    const register unsigned short int RD16 = 7;
    sbit  RD16_bit at T3CON.B7;
    const register unsigned short int T3SYNC = 2;
    sbit  T3SYNC_bit at T3CON.B2;
    const register unsigned short int T3CKPS0 = 4;
    sbit  T3CKPS0_bit at T3CON.B4;
    const register unsigned short int T3CKPS1 = 5;
    sbit  T3CKPS1_bit at T3CON.B5;
    const register unsigned short int T3INSYNC = 2;
    sbit  T3INSYNC_bit at T3CON.B2;

    // BAUDCON2 bits
    const register unsigned short int ABDEN = 0;
    sbit  ABDEN_bit at BAUDCON2.B0;
    const register unsigned short int WUE = 1;
    sbit  WUE_bit at BAUDCON2.B1;
    const register unsigned short int BRG16 = 3;
    sbit  BRG16_bit at BAUDCON2.B3;
    const register unsigned short int TXCKP = 4;
    sbit  TXCKP_bit at BAUDCON2.B4;
    const register unsigned short int RXDTP = 5;
    sbit  RXDTP_bit at BAUDCON2.B5;
    const register unsigned short int RCIDL = 6;
    sbit  RCIDL_bit at BAUDCON2.B6;
    const register unsigned short int ABDOVF = 7;
    sbit  ABDOVF_bit at BAUDCON2.B7;
    const register unsigned short int SCKP = 4;
    sbit  SCKP_bit at BAUDCON2.B4;
    const register unsigned short int DTRXP = 5;
    sbit  DTRXP_bit at BAUDCON2.B5;
    const register unsigned short int RCMT = 6;
    sbit  RCMT_bit at BAUDCON2.B6;

    // BAUDCON, BAUDCON1 bits
    sbit  ABDEN_BAUDCON_bit at BAUDCON.B0;
    sbit  WUE_BAUDCON_bit at BAUDCON.B1;
    sbit  BRG16_BAUDCON_bit at BAUDCON.B3;
    sbit  TXCKP_BAUDCON_bit at BAUDCON.B4;
    sbit  RXDTP_BAUDCON_bit at BAUDCON.B5;
    sbit  RCIDL_BAUDCON_bit at BAUDCON.B6;
    sbit  ABDOVF_BAUDCON_bit at BAUDCON.B7;
    sbit  SCKP_BAUDCON_bit at BAUDCON.B4;
    sbit  DTRXP_BAUDCON_bit at BAUDCON.B5;
    sbit  RCMT_BAUDCON_bit at BAUDCON.B6;

    // Alternative bit function
    const register unsigned short int AN0 = 0;
    sbit  AN0_bit at PORTA.B0;

    // Alternative bit function
    const register unsigned short int AN1 = 1;
    sbit  AN1_bit at PORTA.B1;

    // Alternative bit function
    const register unsigned short int AN2 = 2;
    sbit  AN2_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int AN3 = 3;
    sbit  AN3_bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int T0CKI = 4;
    sbit  T0CKI_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int AN4 = 5;
    sbit  AN4_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int OSC2 = 6;
    sbit  OSC2_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int VREFM = 2;
    sbit  VREFM_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int VREFP = 3;
    sbit  VREFP_bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int CLKO = 6;
    sbit  CLKO_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int INT0 = 0;
    sbit  INT0_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int INT1 = 1;
    sbit  INT1_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int INT2 = 2;
    sbit  INT2_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int INT3 = 3;
    sbit  INT3_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int KBI0 = 4;
    sbit  KBI0_bit at PORTB.B4;

    // Alternative bit function
    const register unsigned short int KBI1 = 5;
    sbit  KBI1_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int KBI2 = 6;
    sbit  KBI2_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int KBI3 = 7;
    sbit  KBI3_bit at PORTB.B7;

    // Alternative bit function
    const register unsigned short int PMA4 = 1;
    sbit  PMA4_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int PMA3 = 2;
    sbit  PMA3_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int PMA2 = 3;
    sbit  PMA2_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int PMA1 = 4;
    sbit  PMA1_bit at PORTB.B4;

    // Alternative bit function
    const register unsigned short int PMA0 = 5;
    sbit  PMA0_bit at PORTB.B5;

    // Alternative bit function
    const register unsigned short int FLT0 = 0;
    sbit  FLT0_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int PGC = 6;
    sbit  PGC_bit at PORTB.B6;

    // Alternative bit function
    const register unsigned short int PGD = 7;
    sbit  PGD_bit at PORTB.B7;

    // Alternative bit function
    const register unsigned short int T1OSO = 0;
    sbit  T1OSO_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int T1OSI = 1;
    sbit  T1OSI_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int CCP1 = 2;
    sbit  CCP1_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int SCK = 3;
    sbit  SCK_bit at PORTC.B3;

    // Alternative bit function
    const register unsigned short int SDI = 4;
    sbit  SDI_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int SDO = 5;
    sbit  SDO_bit at PORTC.B5;

    // Alternative bit function
    const register unsigned short int TX = 6;
    sbit  TX_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int RX_ = 7;
    sbit  RX__bit at PORTC.B7;

    // Alternative bit function
    const register unsigned short int T13CKI = 0;
    sbit  T13CKI_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int CCP2_PORTC = 1;
    sbit  CCP2_PORTC_bit at PORTC.B1;

    // Alternative bit function
    const register unsigned short int SCL = 3;
    sbit  SCL_bit at PORTC.B3;

    // Alternative bit function
    const register unsigned short int SDA = 4;
    sbit  SDA_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int CK = 6;
    sbit  CK_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int PMD0 = 0;
    sbit  PMD0_bit at PORTD.B0;

    // Alternative bit function
    const register unsigned short int PMD1 = 1;
    sbit  PMD1_bit at PORTD.B1;

    // Alternative bit function
    const register unsigned short int PMD2 = 2;
    sbit  PMD2_bit at PORTD.B2;

    // Alternative bit function
    const register unsigned short int PMD3 = 3;
    sbit  PMD3_bit at PORTD.B3;

    // Alternative bit function
    const register unsigned short int PMD4 = 4;
    sbit  PMD4_bit at PORTD.B4;

    // Alternative bit function
    const register unsigned short int PMD5 = 5;
    sbit  PMD5_bit at PORTD.B5;

    // Alternative bit function
    const register unsigned short int PMD6 = 6;
    sbit  PMD6_bit at PORTD.B6;

    // Alternative bit function
    const register unsigned short int PMD7 = 7;
    sbit  PMD7_bit at PORTD.B7;

    // Alternative bit function
    const register unsigned short int SDA2 = 5;
    sbit  SDA2_bit at PORTD.B5;

    // Alternative bit function
    const register unsigned short int SCL2 = 6;
    sbit  SCL2_bit at PORTD.B6;

    // Alternative bit function
    const register unsigned short int SS2 = 7;
    sbit  SS2_bit at PORTD.B7;

    // Alternative bit function
    const register unsigned short int SDO2 = 4;
    sbit  SDO2_bit at PORTD.B4;

    // Alternative bit function
    const register unsigned short int SDI2 = 5;
    sbit  SDI2_bit at PORTD.B5;

    // Alternative bit function
    const register unsigned short int SCK2 = 6;
    sbit  SCK2_bit at PORTD.B6;

    // Alternative bit function
    const register unsigned short int PMRD = 0;
    sbit  PMRD_bit at PORTE.B0;

    // Alternative bit function
    const register unsigned short int PMWR = 1;
    sbit  PMWR_bit at PORTE.B1;

    // Alternative bit function
    const register unsigned short int PMBE = 2;
    sbit  PMBE_bit at PORTE.B2;

    // Alternative bit function
    const register unsigned short int PMA13 = 3;
    sbit  PMA13_bit at PORTE.B3;

    // Alternative bit function
    const register unsigned short int PMA12 = 4;
    sbit  PMA12_bit at PORTE.B4;

    // Alternative bit function
    const register unsigned short int PMA11 = 5;
    sbit  PMA11_bit at PORTE.B5;

    // Alternative bit function
    const register unsigned short int PMA10 = 6;
    sbit  PMA10_bit at PORTE.B6;

    // Alternative bit function
    const register unsigned short int PMA9 = 7;
    sbit  PMA9_bit at PORTE.B7;

    // Alternative bit function
    const register unsigned short int REFO = 3;
    sbit  REFO_bit at PORTE.B3;

    // Alternative bit function
    const register unsigned short int CCP2_PORTE = 7;
    sbit  CCP2_PORTE_bit at PORTE.B7;

    // Alternative bit function
    const register unsigned short int AN6 = 1;
    sbit  AN6_bit at PORTF.B1;

    // Alternative bit function
    const register unsigned short int AN7 = 2;
    sbit  AN7_bit at PORTF.B2;

    // Alternative bit function
    const register unsigned short int AN8 = 3;
    sbit  AN8_bit at PORTF.B3;

    // Alternative bit function
    const register unsigned short int AN9 = 4;
    sbit  AN9_bit at PORTF.B4;

    // Alternative bit function
    const register unsigned short int AN10 = 5;
    sbit  AN10_bit at PORTF.B5;

    // Alternative bit function
    const register unsigned short int AN11 = 6;
    sbit  AN11_bit at PORTF.B6;

    // Alternative bit function
    const register unsigned short int SS = 7;
    sbit  SS_bit at PORTF.B7;

    // Alternative bit function
    const register unsigned short int CVREF = 5;
    sbit  CVREF_bit at PORTF.B5;

    // Alternative bit function
    const register unsigned short int C2OUT = 1;
    sbit  C2OUT_bit at PORTF.B1;

    // Alternative bit function
    const register unsigned short int C1OUT = 2;
    sbit  C1OUT_bit at PORTF.B2;

    // Alternative bit function
    const register unsigned short int C2INB = 3;
    sbit  C2INB_bit at PORTF.B3;

    // Alternative bit function
    const register unsigned short int C2INA = 4;
    sbit  C2INA_bit at PORTF.B4;

    // Alternative bit function
    const register unsigned short int C1INB = 5;
    sbit  C1INB_bit at PORTF.B5;

    // Alternative bit function
    const register unsigned short int C1INA = 6;
    sbit  C1INA_bit at PORTF.B6;

    // Alternative bit function
    const register unsigned short int PMA5 = 2;
    sbit  PMA5_bit at PORTF.B2;

    // Alternative bit function
    const register unsigned short int REPU = 6;
    sbit  REPU_bit at PORTG.B6;

    // Alternative bit function
    const register unsigned short int RDPU = 7;
    sbit  RDPU_bit at PORTG.B7;

    // Alternative bit function
    const register unsigned short int CCP3 = 0;
    sbit  CCP3_bit at PORTG.B0;

    // Alternative bit function
    const register unsigned short int TX2 = 1;
    sbit  TX2_bit at PORTG.B1;

    // Alternative bit function
    const register unsigned short int RX2 = 2;
    sbit  RX2_bit at PORTG.B2;

    // Alternative bit function
    const register unsigned short int CCP4 = 3;
    sbit  CCP4_bit at PORTG.B3;

    // Alternative bit function
    const register unsigned short int CCP5 = 4;
    sbit  CCP5_bit at PORTG.B4;

    // Alternative bit function
    const register unsigned short int CK2 = 1;
    sbit  CK2_bit at PORTG.B1;

    // Alternative bit function
    const register unsigned short int DT2 = 2;
    sbit  DT2_bit at PORTG.B2;

    // Alternative bit function
    const register unsigned short int PMA8 = 0;
    sbit  PMA8_bit at PORTG.B0;

    // Alternative bit function
    const register unsigned short int PMA7 = 1;
    sbit  PMA7_bit at PORTG.B1;

    // Alternative bit function
    const register unsigned short int PMA6 = 2;
    sbit  PMA6_bit at PORTG.B2;

    // Alternative bit function
    const register unsigned short int PMCS1 = 3;
    sbit  PMCS1_bit at PORTG.B3;

    // Alternative bit function
    const register unsigned short int PMCS2 = 4;
    sbit  PMCS2_bit at PORTG.B4;

    // LATA bits
    const register unsigned short int LATA0 = 0;
    sbit  LATA0_bit at LATA.B0;
    const register unsigned short int LATA1 = 1;
    sbit  LATA1_bit at LATA.B1;
    const register unsigned short int LATA2 = 2;
    sbit  LATA2_bit at LATA.B2;
    const register unsigned short int LATA3 = 3;
    sbit  LATA3_bit at LATA.B3;
    const register unsigned short int LATA4 = 4;
    sbit  LATA4_bit at LATA.B4;
    const register unsigned short int LATA5 = 5;
    sbit  LATA5_bit at LATA.B5;
    const register unsigned short int LATA6 = 6;
    sbit  LATA6_bit at LATA.B6;
    const register unsigned short int LATA7 = 7;
    sbit  LATA7_bit at LATA.B7;

    // LATB bits
    const register unsigned short int LATB0 = 0;
    sbit  LATB0_bit at LATB.B0;
    const register unsigned short int LATB1 = 1;
    sbit  LATB1_bit at LATB.B1;
    const register unsigned short int LATB2 = 2;
    sbit  LATB2_bit at LATB.B2;
    const register unsigned short int LATB3 = 3;
    sbit  LATB3_bit at LATB.B3;
    const register unsigned short int LATB4 = 4;
    sbit  LATB4_bit at LATB.B4;
    const register unsigned short int LATB5 = 5;
    sbit  LATB5_bit at LATB.B5;
    const register unsigned short int LATB6 = 6;
    sbit  LATB6_bit at LATB.B6;
    const register unsigned short int LATB7 = 7;
    sbit  LATB7_bit at LATB.B7;

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
    const register unsigned short int LATC6 = 6;
    sbit  LATC6_bit at LATC.B6;
    const register unsigned short int LATC7 = 7;
    sbit  LATC7_bit at LATC.B7;

    // LATD bits
    const register unsigned short int LATD0 = 0;
    sbit  LATD0_bit at LATD.B0;
    const register unsigned short int LATD1 = 1;
    sbit  LATD1_bit at LATD.B1;
    const register unsigned short int LATD2 = 2;
    sbit  LATD2_bit at LATD.B2;
    const register unsigned short int LATD3 = 3;
    sbit  LATD3_bit at LATD.B3;
    const register unsigned short int LATD4 = 4;
    sbit  LATD4_bit at LATD.B4;
    const register unsigned short int LATD5 = 5;
    sbit  LATD5_bit at LATD.B5;
    const register unsigned short int LATD6 = 6;
    sbit  LATD6_bit at LATD.B6;
    const register unsigned short int LATD7 = 7;
    sbit  LATD7_bit at LATD.B7;

    // LATE bits
    const register unsigned short int LATE0 = 0;
    sbit  LATE0_bit at LATE.B0;
    const register unsigned short int LATE1 = 1;
    sbit  LATE1_bit at LATE.B1;
    const register unsigned short int LATE2 = 2;
    sbit  LATE2_bit at LATE.B2;
    const register unsigned short int LATE3 = 3;
    sbit  LATE3_bit at LATE.B3;
    const register unsigned short int LATE4 = 4;
    sbit  LATE4_bit at LATE.B4;
    const register unsigned short int LATE5 = 5;
    sbit  LATE5_bit at LATE.B5;
    const register unsigned short int LATE6 = 6;
    sbit  LATE6_bit at LATE.B6;
    const register unsigned short int LATE7 = 7;
    sbit  LATE7_bit at LATE.B7;

    // LATF bits
    const register unsigned short int LATF1 = 1;
    sbit  LATF1_bit at LATF.B1;
    const register unsigned short int LATF2 = 2;
    sbit  LATF2_bit at LATF.B2;
    const register unsigned short int LATF3 = 3;
    sbit  LATF3_bit at LATF.B3;
    const register unsigned short int LATF4 = 4;
    sbit  LATF4_bit at LATF.B4;
    const register unsigned short int LATF5 = 5;
    sbit  LATF5_bit at LATF.B5;
    const register unsigned short int LATF6 = 6;
    sbit  LATF6_bit at LATF.B6;
    const register unsigned short int LATF7 = 7;
    sbit  LATF7_bit at LATF.B7;

    // LATG bits
    const register unsigned short int LATG0 = 0;
    sbit  LATG0_bit at LATG.B0;
    const register unsigned short int LATG1 = 1;
    sbit  LATG1_bit at LATG.B1;
    const register unsigned short int LATG2 = 2;
    sbit  LATG2_bit at LATG.B2;
    const register unsigned short int LATG3 = 3;
    sbit  LATG3_bit at LATG.B3;
    const register unsigned short int LATG4 = 4;
    sbit  LATG4_bit at LATG.B4;

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
    const register unsigned short int PLLEN = 6;
    sbit  PLLEN_bit at OSCTUNE.B6;
    const register unsigned short int INTSRC = 7;
    sbit  INTSRC_bit at OSCTUNE.B7;

    // RCSTA2 bits
    const register unsigned short int RX9D = 0;
    sbit  RX9D_bit at RCSTA2.B0;
    const register unsigned short int OERR = 1;
    sbit  OERR_bit at RCSTA2.B1;
    const register unsigned short int FERR = 2;
    sbit  FERR_bit at RCSTA2.B2;
    const register unsigned short int ADDEN = 3;
    sbit  ADDEN_bit at RCSTA2.B3;
    const register unsigned short int CREN = 4;
    sbit  CREN_bit at RCSTA2.B4;
    const register unsigned short int SREN = 5;
    sbit  SREN_bit at RCSTA2.B5;
    const register unsigned short int RX9 = 6;
    sbit  RX9_bit at RCSTA2.B6;
    const register unsigned short int SPEN = 7;
    sbit  SPEN_bit at RCSTA2.B7;
    const register unsigned short int RCD8 = 0;
    sbit  RCD8_bit at RCSTA2.B0;
    const register unsigned short int RC9 = 6;
    sbit  RC9_bit at RCSTA2.B6;
    const register unsigned short int NOT_RC8 = 6;
    sbit  NOT_RC8_bit at RCSTA2.B6;
    const register unsigned short int RC8_9 = 6;
    sbit  RC8_9_bit at RCSTA2.B6;
    const register unsigned short int RX9D2 = 0;
    sbit  RX9D2_bit at RCSTA2.B0;
    const register unsigned short int OERR2 = 1;
    sbit  OERR2_bit at RCSTA2.B1;
    const register unsigned short int FERR2 = 2;
    sbit  FERR2_bit at RCSTA2.B2;
    const register unsigned short int ADDEN2 = 3;
    sbit  ADDEN2_bit at RCSTA2.B3;
    const register unsigned short int CREN2 = 4;
    sbit  CREN2_bit at RCSTA2.B4;
    const register unsigned short int SREN2 = 5;
    sbit  SREN2_bit at RCSTA2.B5;
    const register unsigned short int RX92 = 6;
    sbit  RX92_bit at RCSTA2.B6;
    const register unsigned short int SPEN2 = 7;
    sbit  SPEN2_bit at RCSTA2.B7;

    // PIE1 bits
    const register unsigned short int TMR1IE = 0;
    sbit  TMR1IE_bit at PIE1.B0;
    const register unsigned short int TMR2IE = 1;
    sbit  TMR2IE_bit at PIE1.B1;
    const register unsigned short int CCP1IE = 2;
    sbit  CCP1IE_bit at PIE1.B2;
    const register unsigned short int SSP1IE = 3;
    sbit  SSP1IE_bit at PIE1.B3;
    const register unsigned short int TX1IE = 4;
    sbit  TX1IE_bit at PIE1.B4;
    const register unsigned short int RC1IE = 5;
    sbit  RC1IE_bit at PIE1.B5;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;
    const register unsigned short int PMPIE = 7;
    sbit  PMPIE_bit at PIE1.B7;
    const register unsigned short int SSPIE = 3;
    sbit  SSPIE_bit at PIE1.B3;
    const register unsigned short int TXIE = 4;
    sbit  TXIE_bit at PIE1.B4;
    const register unsigned short int RCIE = 5;
    sbit  RCIE_bit at PIE1.B5;

    // PIR1 bits
    const register unsigned short int TMR1IF = 0;
    sbit  TMR1IF_bit at PIR1.B0;
    const register unsigned short int TMR2IF = 1;
    sbit  TMR2IF_bit at PIR1.B1;
    const register unsigned short int CCP1IF = 2;
    sbit  CCP1IF_bit at PIR1.B2;
    const register unsigned short int SSP1IF = 3;
    sbit  SSP1IF_bit at PIR1.B3;
    const register unsigned short int TX1IF = 4;
    sbit  TX1IF_bit at PIR1.B4;
    const register unsigned short int RC1IF = 5;
    sbit  RC1IF_bit at PIR1.B5;
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;
    const register unsigned short int PMPIF = 7;
    sbit  PMPIF_bit at PIR1.B7;
    const register unsigned short int SSPIF = 3;
    sbit  SSPIF_bit at PIR1.B3;
    const register unsigned short int TXIF = 4;
    sbit  TXIF_bit at PIR1.B4;
    const register unsigned short int RCIF = 5;
    sbit  RCIF_bit at PIR1.B5;

    // IPR1 bits
    const register unsigned short int TMR1IP = 0;
    sbit  TMR1IP_bit at IPR1.B0;
    const register unsigned short int TMR2IP = 1;
    sbit  TMR2IP_bit at IPR1.B1;
    const register unsigned short int CCP1IP = 2;
    sbit  CCP1IP_bit at IPR1.B2;
    const register unsigned short int SSP1IP = 3;
    sbit  SSP1IP_bit at IPR1.B3;
    const register unsigned short int TX1IP = 4;
    sbit  TX1IP_bit at IPR1.B4;
    const register unsigned short int RC1IP = 5;
    sbit  RC1IP_bit at IPR1.B5;
    const register unsigned short int ADIP = 6;
    sbit  ADIP_bit at IPR1.B6;
    const register unsigned short int PMPIP = 7;
    sbit  PMPIP_bit at IPR1.B7;
    const register unsigned short int SSPIP = 3;
    sbit  SSPIP_bit at IPR1.B3;
    const register unsigned short int TXIP = 4;
    sbit  TXIP_bit at IPR1.B4;
    const register unsigned short int RCIP = 5;
    sbit  RCIP_bit at IPR1.B5;

    // PIE2 bits
    const register unsigned short int CCP2IE = 0;
    sbit  CCP2IE_bit at PIE2.B0;
    const register unsigned short int TMR3IE = 1;
    sbit  TMR3IE_bit at PIE2.B1;
    const register unsigned short int LVDIE = 2;
    sbit  LVDIE_bit at PIE2.B2;
    const register unsigned short int BCL1IE = 3;
    sbit  BCL1IE_bit at PIE2.B3;
    const register unsigned short int CM1IE = 5;
    sbit  CM1IE_bit at PIE2.B5;
    const register unsigned short int CM2IE = 6;
    sbit  CM2IE_bit at PIE2.B6;
    const register unsigned short int OSCFIE = 7;
    sbit  OSCFIE_bit at PIE2.B7;
    const register unsigned short int BCLIE = 3;
    sbit  BCLIE_bit at PIE2.B3;

    // PIR2 bits
    const register unsigned short int CCP2IF = 0;
    sbit  CCP2IF_bit at PIR2.B0;
    const register unsigned short int TMR3IF = 1;
    sbit  TMR3IF_bit at PIR2.B1;
    const register unsigned short int LVDIF = 2;
    sbit  LVDIF_bit at PIR2.B2;
    const register unsigned short int BCL1IF = 3;
    sbit  BCL1IF_bit at PIR2.B3;
    const register unsigned short int CM1IF = 5;
    sbit  CM1IF_bit at PIR2.B5;
    const register unsigned short int CM2IF = 6;
    sbit  CM2IF_bit at PIR2.B6;
    const register unsigned short int OSCFIF = 7;
    sbit  OSCFIF_bit at PIR2.B7;
    const register unsigned short int BCLIF = 3;
    sbit  BCLIF_bit at PIR2.B3;

    // IPR2 bits
    const register unsigned short int CCP2IP = 0;
    sbit  CCP2IP_bit at IPR2.B0;
    const register unsigned short int TMR3IP = 1;
    sbit  TMR3IP_bit at IPR2.B1;
    const register unsigned short int LVDIP = 2;
    sbit  LVDIP_bit at IPR2.B2;
    const register unsigned short int BCL1IP = 3;
    sbit  BCL1IP_bit at IPR2.B3;
    const register unsigned short int CM1IP = 5;
    sbit  CM1IP_bit at IPR2.B5;
    const register unsigned short int CM2IP = 6;
    sbit  CM2IP_bit at IPR2.B6;
    const register unsigned short int OSCFIP = 7;
    sbit  OSCFIP_bit at IPR2.B7;
    const register unsigned short int BCLIP = 3;
    sbit  BCLIP_bit at IPR2.B3;

    // PIE3 bits
    const register unsigned short int CCP3IE = 0;
    sbit  CCP3IE_bit at PIE3.B0;
    const register unsigned short int CCP4IE = 1;
    sbit  CCP4IE_bit at PIE3.B1;
    const register unsigned short int CCP5IE = 2;
    sbit  CCP5IE_bit at PIE3.B2;
    const register unsigned short int TMR4IE = 3;
    sbit  TMR4IE_bit at PIE3.B3;
    const register unsigned short int TX2IE = 4;
    sbit  TX2IE_bit at PIE3.B4;
    const register unsigned short int RC2IE = 5;
    sbit  RC2IE_bit at PIE3.B5;
    const register unsigned short int BCL2IE = 6;
    sbit  BCL2IE_bit at PIE3.B6;
    const register unsigned short int SSP2IE = 7;
    sbit  SSP2IE_bit at PIE3.B7;

    // PIR3 bits
    const register unsigned short int CCP3IF = 0;
    sbit  CCP3IF_bit at PIR3.B0;
    const register unsigned short int CCP4IF = 1;
    sbit  CCP4IF_bit at PIR3.B1;
    const register unsigned short int CCP5IF = 2;
    sbit  CCP5IF_bit at PIR3.B2;
    const register unsigned short int TMR4IF = 3;
    sbit  TMR4IF_bit at PIR3.B3;
    const register unsigned short int TX2IF = 4;
    sbit  TX2IF_bit at PIR3.B4;
    const register unsigned short int RC2IF = 5;
    sbit  RC2IF_bit at PIR3.B5;
    const register unsigned short int BCL2IF = 6;
    sbit  BCL2IF_bit at PIR3.B6;
    const register unsigned short int SSP2IF = 7;
    sbit  SSP2IF_bit at PIR3.B7;

    // IPR3 bits
    const register unsigned short int CCP3IP = 0;
    sbit  CCP3IP_bit at IPR3.B0;
    const register unsigned short int CCP4IP = 1;
    sbit  CCP4IP_bit at IPR3.B1;
    const register unsigned short int CCP5IP = 2;
    sbit  CCP5IP_bit at IPR3.B2;
    const register unsigned short int TMR4IP = 3;
    sbit  TMR4IP_bit at IPR3.B3;
    const register unsigned short int TX2IP = 4;
    sbit  TX2IP_bit at IPR3.B4;
    const register unsigned short int RC2IP = 5;
    sbit  RC2IP_bit at IPR3.B5;
    const register unsigned short int BCL2IP = 6;
    sbit  BCL2IP_bit at IPR3.B6;
    const register unsigned short int SSP2IP = 7;
    sbit  SSP2IP_bit at IPR3.B7;

    // EECON1 bits
    const register unsigned short int WR = 1;
    sbit  WR_bit at EECON1.B1;
    const register unsigned short int WREN = 2;
    sbit  WREN_bit at EECON1.B2;
    const register unsigned short int WRERR = 3;
    sbit  WRERR_bit at EECON1.B3;
    const register unsigned short int FREE = 4;
    sbit  FREE_bit at EECON1.B4;
    const register unsigned short int WPROG = 5;
    sbit  WPROG_bit at EECON1.B5;

    // TXSTA2 bits
    const register unsigned short int TX9D = 0;
    sbit  TX9D_bit at TXSTA2.B0;
    const register unsigned short int TRMT = 1;
    sbit  TRMT_bit at TXSTA2.B1;
    const register unsigned short int BRGH = 2;
    sbit  BRGH_bit at TXSTA2.B2;
    const register unsigned short int SENDB = 3;
    sbit  SENDB_bit at TXSTA2.B3;
    const register unsigned short int SYNC = 4;
    sbit  SYNC_bit at TXSTA2.B4;
    const register unsigned short int TXEN = 5;
    sbit  TXEN_bit at TXSTA2.B5;
    const register unsigned short int TX9 = 6;
    sbit  TX9_bit at TXSTA2.B6;
    const register unsigned short int CSRC = 7;
    sbit  CSRC_bit at TXSTA2.B7;
    const register unsigned short int TXD8 = 0;
    sbit  TXD8_bit at TXSTA2.B0;
    const register unsigned short int TX8_9 = 6;
    sbit  TX8_9_bit at TXSTA2.B6;
    const register unsigned short int NOT_TX8 = 6;
    sbit  NOT_TX8_bit at TXSTA2.B6;
    const register unsigned short int TX9D2 = 0;
    sbit  TX9D2_bit at TXSTA2.B0;
    const register unsigned short int TRMT2 = 1;
    sbit  TRMT2_bit at TXSTA2.B1;
    const register unsigned short int BRGH2 = 2;
    sbit  BRGH2_bit at TXSTA2.B2;
    const register unsigned short int SENDB2 = 3;
    sbit  SENDB2_bit at TXSTA2.B3;
    const register unsigned short int SYNC2 = 4;
    sbit  SYNC2_bit at TXSTA2.B4;
    const register unsigned short int TXEN2 = 5;
    sbit  TXEN2_bit at TXSTA2.B5;
    const register unsigned short int TX92 = 6;
    sbit  TX92_bit at TXSTA2.B6;
    const register unsigned short int CSRC2 = 7;
    sbit  CSRC2_bit at TXSTA2.B7;

    // RCSTA, RCSTA1 bits
    sbit  RX9D_RCSTA_bit at RCSTA.B0;
    sbit  OERR_RCSTA_bit at RCSTA.B1;
    sbit  FERR_RCSTA_bit at RCSTA.B2;
    sbit  ADDEN_RCSTA_bit at RCSTA.B3;
    sbit  CREN_RCSTA_bit at RCSTA.B4;
    sbit  SREN_RCSTA_bit at RCSTA.B5;
    sbit  RX9_RCSTA_bit at RCSTA.B6;
    sbit  SPEN_RCSTA_bit at RCSTA.B7;
    sbit  RCD8_RCSTA_bit at RCSTA.B0;
    sbit  RC9_RCSTA_bit at RCSTA.B6;
    sbit  NOT_RC8_RCSTA_bit at RCSTA.B6;
    sbit  RC8_9_RCSTA_bit at RCSTA.B6;
    const register unsigned short int RX9D1 = 0;
    sbit  RX9D1_bit at RCSTA.B0;
    const register unsigned short int OERR1 = 1;
    sbit  OERR1_bit at RCSTA.B1;
    const register unsigned short int FERR1 = 2;
    sbit  FERR1_bit at RCSTA.B2;
    const register unsigned short int ADDEN1 = 3;
    sbit  ADDEN1_bit at RCSTA.B3;
    const register unsigned short int CREN1 = 4;
    sbit  CREN1_bit at RCSTA.B4;
    const register unsigned short int SREN1 = 5;
    sbit  SREN1_bit at RCSTA.B5;
    const register unsigned short int RX91 = 6;
    sbit  RX91_bit at RCSTA.B6;
    const register unsigned short int SPEN1 = 7;
    sbit  SPEN1_bit at RCSTA.B7;

    // TXSTA, TXSTA1 bits
    sbit  TX9D_TXSTA_bit at TXSTA.B0;
    sbit  TRMT_TXSTA_bit at TXSTA.B1;
    sbit  BRGH_TXSTA_bit at TXSTA.B2;
    sbit  SENDB_TXSTA_bit at TXSTA.B3;
    sbit  SYNC_TXSTA_bit at TXSTA.B4;
    sbit  TXEN_TXSTA_bit at TXSTA.B5;
    sbit  TX9_TXSTA_bit at TXSTA.B6;
    sbit  CSRC_TXSTA_bit at TXSTA.B7;
    sbit  TXD8_TXSTA_bit at TXSTA.B0;
    sbit  TX8_9_TXSTA_bit at TXSTA.B6;
    sbit  NOT_TX8_TXSTA_bit at TXSTA.B6;
    const register unsigned short int TX9D1 = 0;
    sbit  TX9D1_bit at TXSTA.B0;
    const register unsigned short int TRMT1 = 1;
    sbit  TRMT1_bit at TXSTA.B1;
    const register unsigned short int BRGH1 = 2;
    sbit  BRGH1_bit at TXSTA.B2;
    const register unsigned short int SENDB1 = 3;
    sbit  SENDB1_bit at TXSTA.B3;
    const register unsigned short int SYNC1 = 4;
    sbit  SYNC1_bit at TXSTA.B4;
    const register unsigned short int TXEN1 = 5;
    sbit  TXEN1_bit at TXSTA.B5;
    const register unsigned short int TX91 = 6;
    sbit  TX91_bit at TXSTA.B6;
    const register unsigned short int CSRC1 = 7;
    sbit  CSRC1_bit at TXSTA.B7;

    // CCP3CON, ECCP3CON bits
    const register unsigned short int CCP3M0 = 0;
    sbit  CCP3M0_bit at CCP3CON.B0;
    const register unsigned short int CCP3M1 = 1;
    sbit  CCP3M1_bit at CCP3CON.B1;
    const register unsigned short int CCP3M2 = 2;
    sbit  CCP3M2_bit at CCP3CON.B2;
    const register unsigned short int CCP3M3 = 3;
    sbit  CCP3M3_bit at CCP3CON.B3;
    const register unsigned short int DC3B0 = 4;
    sbit  DC3B0_bit at CCP3CON.B4;
    const register unsigned short int DC3B1 = 5;
    sbit  DC3B1_bit at CCP3CON.B5;
    const register unsigned short int P3M0 = 6;
    sbit  P3M0_bit at CCP3CON.B6;
    const register unsigned short int P3M1 = 7;
    sbit  P3M1_bit at CCP3CON.B7;
    const register unsigned short int CCP3Y = 4;
    sbit  CCP3Y_bit at CCP3CON.B4;
    const register unsigned short int CCP3X = 5;
    sbit  CCP3X_bit at CCP3CON.B5;

    // ECCP3DEL bits
    const register unsigned short int PRSEN = 7;
    sbit  PRSEN_bit at ECCP3DEL.B7;
    const register unsigned short int PDC0 = 0;
    sbit  PDC0_bit at ECCP3DEL.B0;
    const register unsigned short int PDC1 = 1;
    sbit  PDC1_bit at ECCP3DEL.B1;
    const register unsigned short int PDC2 = 2;
    sbit  PDC2_bit at ECCP3DEL.B2;
    const register unsigned short int PDC3 = 3;
    sbit  PDC3_bit at ECCP3DEL.B3;
    const register unsigned short int PDC4 = 4;
    sbit  PDC4_bit at ECCP3DEL.B4;
    const register unsigned short int PDC5 = 5;
    sbit  PDC5_bit at ECCP3DEL.B5;
    const register unsigned short int PDC6 = 6;
    sbit  PDC6_bit at ECCP3DEL.B6;
    const register unsigned short int P3DC0 = 0;
    sbit  P3DC0_bit at ECCP3DEL.B0;
    const register unsigned short int P3DC1 = 1;
    sbit  P3DC1_bit at ECCP3DEL.B1;
    const register unsigned short int P3DC2 = 2;
    sbit  P3DC2_bit at ECCP3DEL.B2;
    const register unsigned short int P3DC3 = 3;
    sbit  P3DC3_bit at ECCP3DEL.B3;
    const register unsigned short int P3DC4 = 4;
    sbit  P3DC4_bit at ECCP3DEL.B4;
    const register unsigned short int P3DC5 = 5;
    sbit  P3DC5_bit at ECCP3DEL.B5;
    const register unsigned short int P3DC6 = 6;
    sbit  P3DC6_bit at ECCP3DEL.B6;
    const register unsigned short int P3RSEN = 7;
    sbit  P3RSEN_bit at ECCP3DEL.B7;

    // ECCP3AS bits
    const register unsigned short int ECCPASE = 7;
    sbit  ECCPASE_bit at ECCP3AS.B7;
    const register unsigned short int PSSBD0 = 0;
    sbit  PSSBD0_bit at ECCP3AS.B0;
    const register unsigned short int PSSBD1 = 1;
    sbit  PSSBD1_bit at ECCP3AS.B1;
    const register unsigned short int PSSAC0 = 2;
    sbit  PSSAC0_bit at ECCP3AS.B2;
    const register unsigned short int PSSAC1 = 3;
    sbit  PSSAC1_bit at ECCP3AS.B3;
    const register unsigned short int ECCPAS0 = 4;
    sbit  ECCPAS0_bit at ECCP3AS.B4;
    const register unsigned short int ECCPAS1 = 5;
    sbit  ECCPAS1_bit at ECCP3AS.B5;
    const register unsigned short int ECCPAS2 = 6;
    sbit  ECCPAS2_bit at ECCP3AS.B6;
    const register unsigned short int PSS3BD0 = 0;
    sbit  PSS3BD0_bit at ECCP3AS.B0;
    const register unsigned short int PSS3BD1 = 1;
    sbit  PSS3BD1_bit at ECCP3AS.B1;
    const register unsigned short int PSS3AC0 = 2;
    sbit  PSS3AC0_bit at ECCP3AS.B2;
    const register unsigned short int PSS3AC1 = 3;
    sbit  PSS3AC1_bit at ECCP3AS.B3;
    const register unsigned short int ECCP3AS0 = 4;
    sbit  ECCP3AS0_bit at ECCP3AS.B4;
    const register unsigned short int ECCP3AS1 = 5;
    sbit  ECCP3AS1_bit at ECCP3AS.B5;
    const register unsigned short int ECCP3AS2 = 6;
    sbit  ECCP3AS2_bit at ECCP3AS.B6;
    const register unsigned short int ECCP3ASE = 7;
    sbit  ECCP3ASE_bit at ECCP3AS.B7;

    // CCP2CON, ECCP2CON bits
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
    const register unsigned short int P2M0 = 6;
    sbit  P2M0_bit at CCP2CON.B6;
    const register unsigned short int P2M1 = 7;
    sbit  P2M1_bit at CCP2CON.B7;
    const register unsigned short int CCP2Y = 4;
    sbit  CCP2Y_bit at CCP2CON.B4;
    const register unsigned short int CCP2X = 5;
    sbit  CCP2X_bit at CCP2CON.B5;

    // ECCP2DEL bits
    sbit  PRSEN_ECCP2DEL_bit at ECCP2DEL.B7;
    sbit  PDC0_ECCP2DEL_bit at ECCP2DEL.B0;
    sbit  PDC1_ECCP2DEL_bit at ECCP2DEL.B1;
    sbit  PDC2_ECCP2DEL_bit at ECCP2DEL.B2;
    sbit  PDC3_ECCP2DEL_bit at ECCP2DEL.B3;
    sbit  PDC4_ECCP2DEL_bit at ECCP2DEL.B4;
    sbit  PDC5_ECCP2DEL_bit at ECCP2DEL.B5;
    sbit  PDC6_ECCP2DEL_bit at ECCP2DEL.B6;
    const register unsigned short int P2DC0 = 0;
    sbit  P2DC0_bit at ECCP2DEL.B0;
    const register unsigned short int P2DC1 = 1;
    sbit  P2DC1_bit at ECCP2DEL.B1;
    const register unsigned short int P2DC2 = 2;
    sbit  P2DC2_bit at ECCP2DEL.B2;
    const register unsigned short int P2DC3 = 3;
    sbit  P2DC3_bit at ECCP2DEL.B3;
    const register unsigned short int P2DC4 = 4;
    sbit  P2DC4_bit at ECCP2DEL.B4;
    const register unsigned short int P2DC5 = 5;
    sbit  P2DC5_bit at ECCP2DEL.B5;
    const register unsigned short int P2DC6 = 6;
    sbit  P2DC6_bit at ECCP2DEL.B6;
    const register unsigned short int P2RSEN = 7;
    sbit  P2RSEN_bit at ECCP2DEL.B7;

    // ECCP2AS bits
    sbit  ECCPASE_ECCP2AS_bit at ECCP2AS.B7;
    sbit  PSSBD0_ECCP2AS_bit at ECCP2AS.B0;
    sbit  PSSBD1_ECCP2AS_bit at ECCP2AS.B1;
    sbit  PSSAC0_ECCP2AS_bit at ECCP2AS.B2;
    sbit  PSSAC1_ECCP2AS_bit at ECCP2AS.B3;
    sbit  ECCPAS0_ECCP2AS_bit at ECCP2AS.B4;
    sbit  ECCPAS1_ECCP2AS_bit at ECCP2AS.B5;
    sbit  ECCPAS2_ECCP2AS_bit at ECCP2AS.B6;
    const register unsigned short int PSS2BD0 = 0;
    sbit  PSS2BD0_bit at ECCP2AS.B0;
    const register unsigned short int PSS2BD1 = 1;
    sbit  PSS2BD1_bit at ECCP2AS.B1;
    const register unsigned short int PSS2AC0 = 2;
    sbit  PSS2AC0_bit at ECCP2AS.B2;
    const register unsigned short int PSS2AC1 = 3;
    sbit  PSS2AC1_bit at ECCP2AS.B3;
    const register unsigned short int ECCP2AS0 = 4;
    sbit  ECCP2AS0_bit at ECCP2AS.B4;
    const register unsigned short int ECCP2AS1 = 5;
    sbit  ECCP2AS1_bit at ECCP2AS.B5;
    const register unsigned short int ECCP2AS2 = 6;
    sbit  ECCP2AS2_bit at ECCP2AS.B6;
    const register unsigned short int ECCP2ASE = 7;
    sbit  ECCP2ASE_bit at ECCP2AS.B7;

    // CCP1CON, ECCP1CON bits
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
    const register unsigned short int P1M0 = 6;
    sbit  P1M0_bit at CCP1CON.B6;
    const register unsigned short int P1M1 = 7;
    sbit  P1M1_bit at CCP1CON.B7;
    const register unsigned short int CCP1Y = 4;
    sbit  CCP1Y_bit at CCP1CON.B4;
    const register unsigned short int CCP1X = 5;
    sbit  CCP1X_bit at CCP1CON.B5;

    // ECCP1DEL bits
    sbit  PRSEN_ECCP1DEL_bit at ECCP1DEL.B7;
    sbit  PDC0_ECCP1DEL_bit at ECCP1DEL.B0;
    sbit  PDC1_ECCP1DEL_bit at ECCP1DEL.B1;
    sbit  PDC2_ECCP1DEL_bit at ECCP1DEL.B2;
    sbit  PDC3_ECCP1DEL_bit at ECCP1DEL.B3;
    sbit  PDC4_ECCP1DEL_bit at ECCP1DEL.B4;
    sbit  PDC5_ECCP1DEL_bit at ECCP1DEL.B5;
    sbit  PDC6_ECCP1DEL_bit at ECCP1DEL.B6;
    const register unsigned short int P1DC0 = 0;
    sbit  P1DC0_bit at ECCP1DEL.B0;
    const register unsigned short int P1DC1 = 1;
    sbit  P1DC1_bit at ECCP1DEL.B1;
    const register unsigned short int P1DC2 = 2;
    sbit  P1DC2_bit at ECCP1DEL.B2;
    const register unsigned short int P1DC3 = 3;
    sbit  P1DC3_bit at ECCP1DEL.B3;
    const register unsigned short int P1DC4 = 4;
    sbit  P1DC4_bit at ECCP1DEL.B4;
    const register unsigned short int P1DC5 = 5;
    sbit  P1DC5_bit at ECCP1DEL.B5;
    const register unsigned short int P1DC6 = 6;
    sbit  P1DC6_bit at ECCP1DEL.B6;
    const register unsigned short int P1RSEN = 7;
    sbit  P1RSEN_bit at ECCP1DEL.B7;

    // ECCP1AS bits
    sbit  ECCPASE_ECCP1AS_bit at ECCP1AS.B7;
    sbit  PSSBD0_ECCP1AS_bit at ECCP1AS.B0;
    sbit  PSSBD1_ECCP1AS_bit at ECCP1AS.B1;
    sbit  PSSAC0_ECCP1AS_bit at ECCP1AS.B2;
    sbit  PSSAC1_ECCP1AS_bit at ECCP1AS.B3;
    sbit  ECCPAS0_ECCP1AS_bit at ECCP1AS.B4;
    sbit  ECCPAS1_ECCP1AS_bit at ECCP1AS.B5;
    sbit  ECCPAS2_ECCP1AS_bit at ECCP1AS.B6;
    const register unsigned short int PSS1BD0 = 0;
    sbit  PSS1BD0_bit at ECCP1AS.B0;
    const register unsigned short int PSS1BD1 = 1;
    sbit  PSS1BD1_bit at ECCP1AS.B1;
    const register unsigned short int PSS1AC0 = 2;
    sbit  PSS1AC0_bit at ECCP1AS.B2;
    const register unsigned short int PSS1AC1 = 3;
    sbit  PSS1AC1_bit at ECCP1AS.B3;
    const register unsigned short int ECCP1AS0 = 4;
    sbit  ECCP1AS0_bit at ECCP1AS.B4;
    const register unsigned short int ECCP1AS1 = 5;
    sbit  ECCP1AS1_bit at ECCP1AS.B5;
    const register unsigned short int ECCP1AS2 = 6;
    sbit  ECCP1AS2_bit at ECCP1AS.B6;
    const register unsigned short int ECCP1ASE = 7;
    sbit  ECCP1ASE_bit at ECCP1AS.B7;

    // WDTCON bits
    const register unsigned short int SWDTEN = 0;
    sbit  SWDTEN_bit at WDTCON.B0;
    const register unsigned short int ADSHR = 4;
    sbit  ADSHR_bit at WDTCON.B4;
    const register unsigned short int LVDSTAT = 6;
    sbit  LVDSTAT_bit at WDTCON.B6;
    const register unsigned short int REGSLP = 7;
    sbit  REGSLP_bit at WDTCON.B7;
    const register unsigned short int SWDTE = 0;
    sbit  SWDTE_bit at WDTCON.B0;
    const register unsigned short int DEVCFG = 4;
    sbit  DEVCFG_bit at WDTCON.B4;

    // ADCON1, ANCON0 bits
    const register unsigned short int ACQT0 = 3;
    sbit  ACQT0_bit at ADCON1.B3;
    const register unsigned short int ACQT1 = 4;
    sbit  ACQT1_bit at ADCON1.B4;
    const register unsigned short int ACQT2 = 5;
    sbit  ACQT2_bit at ADCON1.B5;
    const register unsigned short int ADCAL = 6;
    sbit  ADCAL_bit at ADCON1.B6;
    const register unsigned short int ADFM = 7;
    sbit  ADFM_bit at ADCON1.B7;
    const register unsigned short int ADCS0 = 0;
    sbit  ADCS0_bit at ADCON1.B0;
    const register unsigned short int ADCS1 = 1;
    sbit  ADCS1_bit at ADCON1.B1;
    const register unsigned short int ADCS2 = 2;
    sbit  ADCS2_bit at ADCON1.B2;

    // ADCON0, ANCON1 bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON0.B0;
    const register unsigned short int GO_NOT_DONE = 1;
    sbit  GO_NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int DONE = 1;
    sbit  DONE_bit at ADCON0.B1;
    const register unsigned short int CHS0 = 2;
    sbit  CHS0_bit at ADCON0.B2;
    const register unsigned short int CHS1 = 3;
    sbit  CHS1_bit at ADCON0.B3;
    const register unsigned short int CHS2 = 4;
    sbit  CHS2_bit at ADCON0.B4;
    const register unsigned short int CHS3 = 5;
    sbit  CHS3_bit at ADCON0.B5;
    const register unsigned short int VCFG0 = 6;
    sbit  VCFG0_bit at ADCON0.B6;
    const register unsigned short int VCFG1 = 7;
    sbit  VCFG1_bit at ADCON0.B7;
    const register unsigned short int GO_DONE = 1;
    sbit  GO_DONE_bit at ADCON0.B1;
    const register unsigned short int GO = 1;
    sbit  GO_bit at ADCON0.B1;
    const register unsigned short int NOT_DONE = 1;
    sbit  NOT_DONE_bit at ADCON0.B1;

    // SSP1CON2, SSPCON2 bits
    sbit  SEN_SSP1CON2_bit at SSP1CON2.B0;
    sbit  RSEN_SSP1CON2_bit at SSP1CON2.B1;
    sbit  PEN_SSP1CON2_bit at SSP1CON2.B2;
    sbit  RCEN_SSP1CON2_bit at SSP1CON2.B3;
    sbit  ACKEN_SSP1CON2_bit at SSP1CON2.B4;
    sbit  ACKDT_SSP1CON2_bit at SSP1CON2.B5;
    sbit  ACKSTAT_SSP1CON2_bit at SSP1CON2.B6;
    sbit  GCEN_SSP1CON2_bit at SSP1CON2.B7;
    sbit  ADMSK1_SSP1CON2_bit at SSP1CON2.B1;
    sbit  ADMSK2_SSP1CON2_bit at SSP1CON2.B2;
    sbit  ADMSK3_SSP1CON2_bit at SSP1CON2.B3;
    sbit  ADMSK4_SSP1CON2_bit at SSP1CON2.B4;
    sbit  ADMSK5_SSP1CON2_bit at SSP1CON2.B5;

    // SSP1CON1, SSPCON1 bits
    sbit  CKP_SSP1CON1_bit at SSP1CON1.B4;
    sbit  SSPEN_SSP1CON1_bit at SSP1CON1.B5;
    sbit  SSPOV_SSP1CON1_bit at SSP1CON1.B6;
    sbit  WCOL_SSP1CON1_bit at SSP1CON1.B7;
    sbit  SSPM0_SSP1CON1_bit at SSP1CON1.B0;
    sbit  SSPM1_SSP1CON1_bit at SSP1CON1.B1;
    sbit  SSPM2_SSP1CON1_bit at SSP1CON1.B2;
    sbit  SSPM3_SSP1CON1_bit at SSP1CON1.B3;

    // SSP1STAT, SSPSTAT bits
    sbit  BF_SSP1STAT_bit at SSP1STAT.B0;
    sbit  UA_SSP1STAT_bit at SSP1STAT.B1;
    sbit  R_NOT_W_SSP1STAT_bit at SSP1STAT.B2;
    sbit  S_SSP1STAT_bit at SSP1STAT.B3;
    sbit  P_SSP1STAT_bit at SSP1STAT.B4;
    sbit  D_NOT_A_SSP1STAT_bit at SSP1STAT.B5;
    sbit  CKE_SSP1STAT_bit at SSP1STAT.B6;
    sbit  SMP_SSP1STAT_bit at SSP1STAT.B7;
    sbit  R_W_SSP1STAT_bit at SSP1STAT.B2;
    sbit  D_A_SSP1STAT_bit at SSP1STAT.B5;
    sbit  I2C_DAT_SSP1STAT_bit at SSP1STAT.B5;
    sbit  NOT_W_SSP1STAT_bit at SSP1STAT.B2;
    sbit  NOT_A_SSP1STAT_bit at SSP1STAT.B5;
    sbit  NOT_WRITE_SSP1STAT_bit at SSP1STAT.B2;
    sbit  NOT_ADDRESS_SSP1STAT_bit at SSP1STAT.B5;
    sbit  READ_WRITE_SSP1STAT_bit at SSP1STAT.B2;
    sbit  DATA_ADDRESS_SSP1STAT_bit at SSP1STAT.B5;
    sbit  R_SSP1STAT_bit at SSP1STAT.B2;
    sbit  D_SSP1STAT_bit at SSP1STAT.B5;

    // SSP1MSK bits
    sbit  MSK0_SSP1MSK_bit at SSP1MSK.B0;
    sbit  MSK1_SSP1MSK_bit at SSP1MSK.B1;
    sbit  MSK2_SSP1MSK_bit at SSP1MSK.B2;
    sbit  MSK3_SSP1MSK_bit at SSP1MSK.B3;
    sbit  MSK4_SSP1MSK_bit at SSP1MSK.B4;
    sbit  MSK5_SSP1MSK_bit at SSP1MSK.B5;
    sbit  MSK6_SSP1MSK_bit at SSP1MSK.B6;
    sbit  MSK7_SSP1MSK_bit at SSP1MSK.B7;

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

    // PADCFG1 bits
    const register unsigned short int PMPTL = 0;
    sbit  PMPTL_bit at PADCFG1.B0;
    const register unsigned short int PMPTTL = 0;
    sbit  PMPTTL_bit at PADCFG1.B0;

    // ODCON3 bits
    const register unsigned short int SPI1OD = 0;
    sbit  SPI1OD_bit at ODCON3.B0;
    const register unsigned short int SPI2OD = 1;
    sbit  SPI2OD_bit at ODCON3.B1;

    // T1CON bits
    const register unsigned short int TMR1ON = 0;
    sbit  TMR1ON_bit at T1CON.B0;
    const register unsigned short int TMR1CS = 1;
    sbit  TMR1CS_bit at T1CON.B1;
    const register unsigned short int NOT_T1SYNC = 2;
    sbit  NOT_T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1OSCEN = 3;
    sbit  T1OSCEN_bit at T1CON.B3;
    const register unsigned short int T1RUN = 6;
    sbit  T1RUN_bit at T1CON.B6;
    sbit  RD16_T1CON_bit at T1CON.B7;
    const register unsigned short int T1SYNC = 2;
    sbit  T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1CKPS0 = 4;
    sbit  T1CKPS0_bit at T1CON.B4;
    const register unsigned short int T1CKPS1 = 5;
    sbit  T1CKPS1_bit at T1CON.B5;
    const register unsigned short int T1INSYNC = 2;
    sbit  T1INSYNC_bit at T1CON.B2;

    // ODCON2 bits
    const register unsigned short int USART1OD = 0;
    sbit  USART1OD_bit at ODCON2.B0;
    const register unsigned short int USART2OD = 1;
    sbit  USART2OD_bit at ODCON2.B1;
    const register unsigned short int U1OD = 0;
    sbit  U1OD_bit at ODCON2.B0;
    const register unsigned short int U2OD = 1;
    sbit  U2OD_bit at ODCON2.B1;

    // ODCON1 bits
    const register unsigned short int ECCP1OD = 0;
    sbit  ECCP1OD_bit at ODCON1.B0;
    const register unsigned short int ECCP2OD = 1;
    sbit  ECCP2OD_bit at ODCON1.B1;
    const register unsigned short int ECCP3OD = 2;
    sbit  ECCP3OD_bit at ODCON1.B2;
    const register unsigned short int CCP4OD = 3;
    sbit  CCP4OD_bit at ODCON1.B3;
    const register unsigned short int CCP5OD = 4;
    sbit  CCP5OD_bit at ODCON1.B4;

    // RCON bits
    const register unsigned short int NOT_BOR = 0;
    sbit  NOT_BOR_bit at RCON.B0;
    const register unsigned short int NOT_POR = 1;
    sbit  NOT_POR_bit at RCON.B1;
    const register unsigned short int NOT_PD = 2;
    sbit  NOT_PD_bit at RCON.B2;
    const register unsigned short int NOT_TO = 3;
    sbit  NOT_TO_bit at RCON.B3;
    const register unsigned short int NOT_RI = 4;
    sbit  NOT_RI_bit at RCON.B4;
    const register unsigned short int NOT_CM = 5;
    sbit  NOT_CM_bit at RCON.B5;
    const register unsigned short int IPEN = 7;
    sbit  IPEN_bit at RCON.B7;
    const register unsigned short int BOR = 0;
    sbit  BOR_bit at RCON.B0;
    const register unsigned short int POR = 1;
    sbit  POR_bit at RCON.B1;
    const register unsigned short int PD = 2;
    sbit  PD_bit at RCON.B2;
    const register unsigned short int TO_ = 3;
    sbit  TO__bit at RCON.B3;
    const register unsigned short int RI = 4;
    sbit  RI_bit at RCON.B4;
    const register unsigned short int CM = 5;
    sbit  CM_bit at RCON.B5;

    // CM2CON bits
    const register unsigned short int CREF = 2;
    sbit  CREF_bit at CM2CON.B2;
    const register unsigned short int CPOL = 5;
    sbit  CPOL_bit at CM2CON.B5;
    const register unsigned short int COE = 6;
    sbit  COE_bit at CM2CON.B6;
    const register unsigned short int CON = 7;
    sbit  CON_bit at CM2CON.B7;
    const register unsigned short int C1CH0 = 0;
    sbit  C1CH0_bit at CM2CON.B0;
    const register unsigned short int C1CH1 = 1;
    sbit  C1CH1_bit at CM2CON.B1;
    const register unsigned short int EVPOL0 = 3;
    sbit  EVPOL0_bit at CM2CON.B3;
    const register unsigned short int EVPOL1 = 4;
    sbit  EVPOL1_bit at CM2CON.B4;
    const register unsigned short int CCH0 = 0;
    sbit  CCH0_bit at CM2CON.B0;
    const register unsigned short int CCH1 = 1;
    sbit  CCH1_bit at CM2CON.B1;

    // CM2CON1 bits
    sbit  CREF_CM2CON1_bit at CM2CON1.B2;
    sbit  CPOL_CM2CON1_bit at CM2CON1.B5;
    sbit  COE_CM2CON1_bit at CM2CON1.B6;
    sbit  CON_CM2CON1_bit at CM2CON1.B7;
    sbit  C1CH0_CM2CON1_bit at CM2CON1.B0;
    sbit  C1CH1_CM2CON1_bit at CM2CON1.B1;
    sbit  EVPOL0_CM2CON1_bit at CM2CON1.B3;
    sbit  EVPOL1_CM2CON1_bit at CM2CON1.B4;
    sbit  CCH0_CM2CON1_bit at CM2CON1.B0;
    sbit  CCH1_CM2CON1_bit at CM2CON1.B1;

    // CM1CON bits
    sbit  CREF_CM1CON_bit at CM1CON.B2;
    sbit  CPOL_CM1CON_bit at CM1CON.B5;
    sbit  COE_CM1CON_bit at CM1CON.B6;
    sbit  CON_CM1CON_bit at CM1CON.B7;
    sbit  C1CH0_CM1CON_bit at CM1CON.B0;
    sbit  C1CH1_CM1CON_bit at CM1CON.B1;
    sbit  EVPOL0_CM1CON_bit at CM1CON.B3;
    sbit  EVPOL1_CM1CON_bit at CM1CON.B4;
    sbit  CCH0_CM1CON_bit at CM1CON.B0;
    sbit  CCH1_CM1CON_bit at CM1CON.B1;

    // CM1CON1 bits
    sbit  CREF_CM1CON1_bit at CM1CON1.B2;
    sbit  CPOL_CM1CON1_bit at CM1CON1.B5;
    sbit  COE_CM1CON1_bit at CM1CON1.B6;
    sbit  CON_CM1CON1_bit at CM1CON1.B7;
    sbit  C1CH0_CM1CON1_bit at CM1CON1.B0;
    sbit  C1CH1_CM1CON1_bit at CM1CON1.B1;
    sbit  EVPOL0_CM1CON1_bit at CM1CON1.B3;
    sbit  EVPOL1_CM1CON1_bit at CM1CON1.B4;
    sbit  CCH0_CM1CON1_bit at CM1CON1.B0;
    sbit  CCH1_CM1CON1_bit at CM1CON1.B1;

    // OSCCON, REFOCON bits
    const register unsigned short int OSTS = 3;
    sbit  OSTS_bit at OSCCON.B3;
    const register unsigned short int IDLEN = 7;
    sbit  IDLEN_bit at OSCCON.B7;
    const register unsigned short int SCS0 = 0;
    sbit  SCS0_bit at OSCCON.B0;
    const register unsigned short int SCS1 = 1;
    sbit  SCS1_bit at OSCCON.B1;
    const register unsigned short int IRCF0 = 4;
    sbit  IRCF0_bit at OSCCON.B4;
    const register unsigned short int IRCF1 = 5;
    sbit  IRCF1_bit at OSCCON.B5;
    const register unsigned short int IRCF2 = 6;
    sbit  IRCF2_bit at OSCCON.B6;

    // T0CON bits
    const register unsigned short int PSA = 3;
    sbit  PSA_bit at T0CON.B3;
    const register unsigned short int T0SE = 4;
    sbit  T0SE_bit at T0CON.B4;
    const register unsigned short int T0CS = 5;
    sbit  T0CS_bit at T0CON.B5;
    const register unsigned short int T08BIT = 6;
    sbit  T08BIT_bit at T0CON.B6;
    const register unsigned short int TMR0ON = 7;
    sbit  TMR0ON_bit at T0CON.B7;
    const register unsigned short int T0PS0 = 0;
    sbit  T0PS0_bit at T0CON.B0;
    const register unsigned short int T0PS1 = 1;
    sbit  T0PS1_bit at T0CON.B1;
    const register unsigned short int T0PS2 = 2;
    sbit  T0PS2_bit at T0CON.B2;
    const register unsigned short int T0PS3 = 3;
    sbit  T0PS3_bit at T0CON.B3;

    // STATUS bits
    const register unsigned short int C = 0;
    sbit  C_bit at STATUS.B0;
    const register unsigned short int DC = 1;
    sbit  DC_bit at STATUS.B1;
    const register unsigned short int Z = 2;
    sbit  Z_bit at STATUS.B2;
    const register unsigned short int OV = 3;
    sbit  OV_bit at STATUS.B3;
    const register unsigned short int N = 4;
    sbit  N_bit at STATUS.B4;

    // INTCON3 bits
    const register unsigned short int INT1IF = 0;
    sbit  INT1IF_bit at INTCON3.B0;
    const register unsigned short int INT2IF = 1;
    sbit  INT2IF_bit at INTCON3.B1;
    const register unsigned short int INT3IF = 2;
    sbit  INT3IF_bit at INTCON3.B2;
    const register unsigned short int INT1IE = 3;
    sbit  INT1IE_bit at INTCON3.B3;
    const register unsigned short int INT2IE = 4;
    sbit  INT2IE_bit at INTCON3.B4;
    const register unsigned short int INT3IE = 5;
    sbit  INT3IE_bit at INTCON3.B5;
    const register unsigned short int INT1IP = 6;
    sbit  INT1IP_bit at INTCON3.B6;
    const register unsigned short int INT2IP = 7;
    sbit  INT2IP_bit at INTCON3.B7;
    const register unsigned short int INT1F = 0;
    sbit  INT1F_bit at INTCON3.B0;
    const register unsigned short int INT2F = 1;
    sbit  INT2F_bit at INTCON3.B1;
    const register unsigned short int INT3F = 2;
    sbit  INT3F_bit at INTCON3.B2;
    const register unsigned short int INT1E = 3;
    sbit  INT1E_bit at INTCON3.B3;
    const register unsigned short int INT2E = 4;
    sbit  INT2E_bit at INTCON3.B4;
    const register unsigned short int INT3E = 5;
    sbit  INT3E_bit at INTCON3.B5;
    const register unsigned short int INT1P = 6;
    sbit  INT1P_bit at INTCON3.B6;
    const register unsigned short int INT2P = 7;
    sbit  INT2P_bit at INTCON3.B7;

    // INTCON2 bits
    const register unsigned short int RBIP = 0;
    sbit  RBIP_bit at INTCON2.B0;
    const register unsigned short int INT3IP = 1;
    sbit  INT3IP_bit at INTCON2.B1;
    const register unsigned short int TMR0IP = 2;
    sbit  TMR0IP_bit at INTCON2.B2;
    const register unsigned short int INTEDG3 = 3;
    sbit  INTEDG3_bit at INTCON2.B3;
    const register unsigned short int INTEDG2 = 4;
    sbit  INTEDG2_bit at INTCON2.B4;
    const register unsigned short int INTEDG1 = 5;
    sbit  INTEDG1_bit at INTCON2.B5;
    const register unsigned short int INTEDG0 = 6;
    sbit  INTEDG0_bit at INTCON2.B6;
    const register unsigned short int NOT_RBPU = 7;
    sbit  NOT_RBPU_bit at INTCON2.B7;
    const register unsigned short int INT3P = 1;
    sbit  INT3P_bit at INTCON2.B1;
    const register unsigned short int T0IP = 2;
    sbit  T0IP_bit at INTCON2.B2;
    const register unsigned short int RBPU = 7;
    sbit  RBPU_bit at INTCON2.B7;

    // INTCON bits
    const register unsigned short int RBIF = 0;
    sbit  RBIF_bit at INTCON.B0;
    const register unsigned short int INT0IF = 1;
    sbit  INT0IF_bit at INTCON.B1;
    const register unsigned short int TMR0IF = 2;
    sbit  TMR0IF_bit at INTCON.B2;
    const register unsigned short int RBIE = 3;
    sbit  RBIE_bit at INTCON.B3;
    const register unsigned short int INT0IE = 4;
    sbit  INT0IE_bit at INTCON.B4;
    const register unsigned short int TMR0IE = 5;
    sbit  TMR0IE_bit at INTCON.B5;
    const register unsigned short int PEIE_GIEL = 6;
    sbit  PEIE_GIEL_bit at INTCON.B6;
    const register unsigned short int GIE_GIEH = 7;
    sbit  GIE_GIEH_bit at INTCON.B7;
    const register unsigned short int INT0F = 1;
    sbit  INT0F_bit at INTCON.B1;
    const register unsigned short int T0IF = 2;
    sbit  T0IF_bit at INTCON.B2;
    const register unsigned short int INT0E = 4;
    sbit  INT0E_bit at INTCON.B4;
    const register unsigned short int T0IE = 5;
    sbit  T0IE_bit at INTCON.B5;
    const register unsigned short int PEIE = 6;
    sbit  PEIE_bit at INTCON.B6;
    const register unsigned short int GIE = 7;
    sbit  GIE_bit at INTCON.B7;
    const register unsigned short int GIEL = 6;
    sbit  GIEL_bit at INTCON.B6;
    const register unsigned short int GIEH = 7;
    sbit  GIEH_bit at INTCON.B7;

    // STKPTR bits
    const register unsigned short int STKUNF = 6;
    sbit  STKUNF_bit at STKPTR.B6;
    const register unsigned short int STKFUL = 7;
    sbit  STKFUL_bit at STKPTR.B7;
    const register unsigned short int STKPTR0 = 0;
    sbit  STKPTR0_bit at STKPTR.B0;
    const register unsigned short int STKPTR1 = 1;
    sbit  STKPTR1_bit at STKPTR.B1;
    const register unsigned short int STKPTR2 = 2;
    sbit  STKPTR2_bit at STKPTR.B2;
    const register unsigned short int STKPTR3 = 3;
    sbit  STKPTR3_bit at STKPTR.B3;
    const register unsigned short int STKPTR4 = 4;
    sbit  STKPTR4_bit at STKPTR.B4;
    const register unsigned short int STKOVF = 7;
    sbit  STKOVF_bit at STKPTR.B7;
    const register unsigned short int SP0 = 0;
    sbit  SP0_bit at STKPTR.B0;
    const register unsigned short int SP1 = 1;
    sbit  SP1_bit at STKPTR.B1;
    const register unsigned short int SP2 = 2;
    sbit  SP2_bit at STKPTR.B2;
    const register unsigned short int SP3 = 3;
    sbit  SP3_bit at STKPTR.B3;
    const register unsigned short int SP4 = 4;
    sbit  SP4_bit at STKPTR.B4;

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

    // PORTG bits
    sbit  RDPU_PORTG_bit at PORTG.B7;
    sbit  REPU_PORTG_bit at PORTG.B6;
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

    // TRISG bits
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

    // TBLPTRU bits
    const register unsigned short int ACSS = 5;
    sbit  ACSS_bit at TBLPTRU.B5;
    const register unsigned short int TBLPTRU4 = 4;
    sbit  TBLPTRU4_bit at TBLPTRU.B4;
    const register unsigned short int TBLPTRU3 = 3;
    sbit  TBLPTRU3_bit at TBLPTRU.B3;
    const register unsigned short int TBLPTRU2 = 2;
    sbit  TBLPTRU2_bit at TBLPTRU.B2;
    const register unsigned short int TBLPTRU1 = 1;
    sbit  TBLPTRU1_bit at TBLPTRU.B1;
    const register unsigned short int TBLPTRU0 = 0;
    sbit  TBLPTRU0_bit at TBLPTRU.B0;

    // PCLATU bits
    const register unsigned short int PCU4 = 4;
    sbit  PCU4_bit at PCLATU.B4;
    const register unsigned short int PCU3 = 3;
    sbit  PCU3_bit at PCLATU.B3;
    const register unsigned short int PCU2 = 2;
    sbit  PCU2_bit at PCLATU.B2;
    const register unsigned short int PCU1 = 1;
    sbit  PCU1_bit at PCLATU.B1;
    const register unsigned short int PCU0 = 0;
    sbit  PCU0_bit at PCLATU.B0;
