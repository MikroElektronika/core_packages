// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00008000;

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

sfr unsigned short          RXF0SIDH         absolute 0x0F00;
sfr unsigned short          RXF0SIDL         absolute 0x0F01;
sfr unsigned short          RXF0EIDH         absolute 0x0F02;
sfr unsigned short          RXF0EIDL         absolute 0x0F03;
sfr unsigned short          RXF1SIDH         absolute 0x0F04;
sfr unsigned short          RXF1SIDL         absolute 0x0F05;
sfr unsigned short          RXF1EIDH         absolute 0x0F06;
sfr unsigned short          RXF1EIDL         absolute 0x0F07;
sfr unsigned short          RXF2SIDH         absolute 0x0F08;
sfr unsigned short          RXF2SIDL         absolute 0x0F09;
sfr unsigned short          RXF2EIDH         absolute 0x0F0A;
sfr unsigned short          RXF2EIDL         absolute 0x0F0B;
sfr unsigned short          RXF3SIDH         absolute 0x0F0C;
sfr unsigned short          RXF3SIDL         absolute 0x0F0D;
sfr unsigned short          RXF3EIDH         absolute 0x0F0E;
sfr unsigned short          RXF3EIDL         absolute 0x0F0F;
sfr unsigned short          RXF4SIDH         absolute 0x0F10;
sfr unsigned short          RXF4SIDL         absolute 0x0F11;
sfr unsigned short          RXF4EIDH         absolute 0x0F12;
sfr unsigned short          RXF4EIDL         absolute 0x0F13;
sfr unsigned short          RXF5SIDH         absolute 0x0F14;
sfr unsigned short          RXF5SIDL         absolute 0x0F15;
sfr unsigned short          RXF5EIDH         absolute 0x0F16;
sfr unsigned short          RXF5EIDL         absolute 0x0F17;
sfr unsigned short          RXM0SIDH         absolute 0x0F18;
sfr unsigned short          RXM0SIDL         absolute 0x0F19;
sfr unsigned short          RXM0EIDH         absolute 0x0F1A;
sfr unsigned short          RXM0EIDL         absolute 0x0F1B;
sfr unsigned short          RXM1SIDH         absolute 0x0F1C;
sfr unsigned short          RXM1SIDL         absolute 0x0F1D;
sfr unsigned short          RXM1EIDH         absolute 0x0F1E;
sfr unsigned short          RXM1EIDL         absolute 0x0F1F;
sfr unsigned short          TXB2CON          absolute 0x0F20;
sfr unsigned short          TXB2SIDH         absolute 0x0F21;
sfr unsigned short          TXB2SIDL         absolute 0x0F22;
sfr unsigned short          TXB2EIDH         absolute 0x0F23;
sfr unsigned short          TXB2EIDL         absolute 0x0F24;
sfr unsigned short          TXB2DLC          absolute 0x0F25;
sfr unsigned short          TXB2D0           absolute 0x0F26;
sfr unsigned short          TXB2D1           absolute 0x0F27;
sfr unsigned short          TXB2D2           absolute 0x0F28;
sfr unsigned short          TXB2D3           absolute 0x0F29;
sfr unsigned short          TXB2D4           absolute 0x0F2A;
sfr unsigned short          TXB2D5           absolute 0x0F2B;
sfr unsigned short          TXB2D6           absolute 0x0F2C;
sfr unsigned short          TXB2D7           absolute 0x0F2D;
sfr unsigned short          CANSTATRO4       absolute 0x0F2E;
sfr unsigned short          TXB1CON          absolute 0x0F30;
sfr unsigned short          TXB1SIDH         absolute 0x0F31;
sfr unsigned short          TXB1SIDL         absolute 0x0F32;
sfr unsigned short          TXB1EIDH         absolute 0x0F33;
sfr unsigned short          TXB1EIDL         absolute 0x0F34;
sfr unsigned short          TXB1DLC          absolute 0x0F35;
sfr unsigned short          TXB1D0           absolute 0x0F36;
sfr unsigned short          TXB1D1           absolute 0x0F37;
sfr unsigned short          TXB1D2           absolute 0x0F38;
sfr unsigned short          TXB1D3           absolute 0x0F39;
sfr unsigned short          TXB1D4           absolute 0x0F3A;
sfr unsigned short          TXB1D5           absolute 0x0F3B;
sfr unsigned short          TXB1D6           absolute 0x0F3C;
sfr unsigned short          TXB1D7           absolute 0x0F3D;
sfr unsigned short          CANSTATRO3       absolute 0x0F3E;
sfr unsigned short          TXB0CON          absolute 0x0F40;
sfr unsigned short          TXB0SIDH         absolute 0x0F41;
sfr unsigned short          TXB0SIDL         absolute 0x0F42;
sfr unsigned short          TXB0EIDH         absolute 0x0F43;
sfr unsigned short          TXB0EIDL         absolute 0x0F44;
sfr unsigned short          TXB0DLC          absolute 0x0F45;
sfr unsigned short          TXB0D0           absolute 0x0F46;
sfr unsigned short          TXB0D1           absolute 0x0F47;
sfr unsigned short          TXB0D2           absolute 0x0F48;
sfr unsigned short          TXB0D3           absolute 0x0F49;
sfr unsigned short          TXB0D4           absolute 0x0F4A;
sfr unsigned short          TXB0D5           absolute 0x0F4B;
sfr unsigned short          TXB0D6           absolute 0x0F4C;
sfr unsigned short          TXB0D7           absolute 0x0F4D;
sfr unsigned short          CANSTATRO2       absolute 0x0F4E;
sfr unsigned short          RXB1CON          absolute 0x0F50;
sfr unsigned short          RXB1SIDH         absolute 0x0F51;
sfr unsigned short          RXB1SIDL         absolute 0x0F52;
sfr unsigned short          RXB1EIDH         absolute 0x0F53;
sfr unsigned short          RXB1EIDL         absolute 0x0F54;
sfr unsigned short          RXB1DLC          absolute 0x0F55;
sfr unsigned short          RXB1D0           absolute 0x0F56;
sfr unsigned short          RXB1D1           absolute 0x0F57;
sfr unsigned short          RXB1D2           absolute 0x0F58;
sfr unsigned short          RXB1D3           absolute 0x0F59;
sfr unsigned short          RXB1D4           absolute 0x0F5A;
sfr unsigned short          RXB1D5           absolute 0x0F5B;
sfr unsigned short          RXB1D6           absolute 0x0F5C;
sfr unsigned short          RXB1D7           absolute 0x0F5D;
sfr unsigned short          CANSTATRO1       absolute 0x0F5E;
sfr unsigned short          RXB0CON          absolute 0x0F60;
sfr unsigned short          RXB0SIDH         absolute 0x0F61;
sfr unsigned short          RXB0SIDL         absolute 0x0F62;
sfr unsigned short          RXB0EIDH         absolute 0x0F63;
sfr unsigned short          RXB0EIDL         absolute 0x0F64;
sfr unsigned short          RXB0DLC          absolute 0x0F65;
sfr unsigned short          RXB0D0           absolute 0x0F66;
sfr unsigned short          RXB0D1           absolute 0x0F67;
sfr unsigned short          RXB0D2           absolute 0x0F68;
sfr unsigned short          RXB0D3           absolute 0x0F69;
sfr unsigned short          RXB0D4           absolute 0x0F6A;
sfr unsigned short          RXB0D5           absolute 0x0F6B;
sfr unsigned short          RXB0D6           absolute 0x0F6C;
sfr unsigned short          RXB0D7           absolute 0x0F6D;
sfr unsigned short          CANSTAT          absolute 0x0F6E;
sfr unsigned short          CANCON           absolute 0x0F6F;
sfr unsigned short          BRGCON1          absolute 0x0F70;
sfr unsigned short          BRGCON2          absolute 0x0F71;
sfr unsigned short          BRGCON3          absolute 0x0F72;
sfr unsigned short volatile CIOCON           absolute 0x0F73;
sfr unsigned short volatile COMSTAT          absolute 0x0F74;
sfr unsigned short          RXERRCNT         absolute 0x0F75;
sfr unsigned short volatile TXERRCNT         absolute 0x0F76;
sfr unsigned short volatile LATA             absolute 0x0F89;
sfr unsigned short volatile LATB             absolute 0x0F8A;
sfr unsigned short volatile LATC             absolute 0x0F8B;
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
sfr unsigned short volatile EEDATA           absolute 0x0FA8;
sfr unsigned short volatile EEADR            absolute 0x0FA9;
sfr unsigned short volatile RCSTA            absolute 0x0FAB;
sfr unsigned short volatile TXSTA            absolute 0x0FAC;
sfr unsigned short volatile TXREG            absolute 0x0FAD;
sfr unsigned short volatile RCREG            absolute 0x0FAE;
sfr unsigned short          SPBRG            absolute 0x0FAF;
sfr unsigned short volatile T3CON            absolute 0x0FB1;
sfr unsigned short volatile TMR3L            absolute 0x0FB2;
sfr unsigned short volatile TMR3H            absolute 0x0FB3;
sfr unsigned short volatile CCP1CON          absolute 0x0FBD;
sfr unsigned int   volatile CCPR1            absolute 0x0FBE;
sfr unsigned short volatile CCPR1L           absolute 0x0FBE;
sfr unsigned short volatile CCPR1H           absolute 0x0FBF;
sfr unsigned short volatile ADCON1           absolute 0x0FC1;
sfr unsigned short volatile ADCON0           absolute 0x0FC2;
sfr unsigned short volatile ADRESL           absolute 0x0FC3;
sfr unsigned short volatile ADRESH           absolute 0x0FC4;
sfr unsigned short volatile SSPCON2          absolute 0x0FC5;
sfr unsigned short volatile SSPCON1          absolute 0x0FC6;
sfr unsigned short volatile SSPSTAT          absolute 0x0FC7;
sfr unsigned short volatile SSPADD           absolute 0x0FC8;
sfr unsigned short volatile SSPBUF           absolute 0x0FC9;
sfr unsigned short volatile T2CON            absolute 0x0FCA;
sfr unsigned short volatile PR2              absolute 0x0FCB;
sfr unsigned short volatile TMR2             absolute 0x0FCC;
sfr unsigned short volatile T1CON            absolute 0x0FCD;
sfr unsigned short volatile TMR1L            absolute 0x0FCE;
sfr unsigned short volatile TMR1H            absolute 0x0FCF;
sfr unsigned short volatile RCON             absolute 0x0FD0;
sfr unsigned short          WDTCON           absolute 0x0FD1;
sfr unsigned short volatile LVDCON           absolute 0x0FD2;
sfr unsigned short volatile OSCCON           absolute 0x0FD3;
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
sfr unsigned short volatile INTCON1          absolute 0x0FF2;
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
sfr unsigned short volatile PORTA            absolute 0x0F80;
sfr unsigned short volatile PORTB            absolute 0x0F81;
sfr unsigned short volatile PORTC            absolute 0x0F82;
sfr unsigned short volatile TRISA            absolute 0x0F92;
sfr unsigned short volatile TRISB            absolute 0x0F93;
sfr unsigned short volatile TRISC            absolute 0x0F94;
sfr unsigned int   volatile ADRES            absolute 0x0FC3;
sfr unsigned int            PROD             absolute 0x0FF3;
sfr unsigned short          PRODL            absolute 0x0FF3;
sfr unsigned short          PRODH            absolute 0x0FF4;
sfr unsigned short volatile TOSL             absolute 0x0FFD;
sfr unsigned short volatile TOSH             absolute 0x0FFE;
sfr unsigned short volatile TOSU             absolute 0x0FFF;

    // RXF0SIDH bits
    const register unsigned short int SID3 = 0;
    sbit  SID3_bit at RXF0SIDH.B0;
    const register unsigned short int SID4 = 1;
    sbit  SID4_bit at RXF0SIDH.B1;
    const register unsigned short int SID5 = 2;
    sbit  SID5_bit at RXF0SIDH.B2;
    const register unsigned short int SID6 = 3;
    sbit  SID6_bit at RXF0SIDH.B3;
    const register unsigned short int SID7 = 4;
    sbit  SID7_bit at RXF0SIDH.B4;
    const register unsigned short int SID8 = 5;
    sbit  SID8_bit at RXF0SIDH.B5;
    const register unsigned short int SID9 = 6;
    sbit  SID9_bit at RXF0SIDH.B6;
    const register unsigned short int SID10 = 7;
    sbit  SID10_bit at RXF0SIDH.B7;

    // RXF0SIDL bits
    const register unsigned short int EID16 = 0;
    sbit  EID16_bit at RXF0SIDL.B0;
    const register unsigned short int EID17 = 1;
    sbit  EID17_bit at RXF0SIDL.B1;
    const register unsigned short int EXIDEN = 3;
    sbit  EXIDEN_bit at RXF0SIDL.B3;
    const register unsigned short int SID0 = 5;
    sbit  SID0_bit at RXF0SIDL.B5;
    const register unsigned short int SID1 = 6;
    sbit  SID1_bit at RXF0SIDL.B6;
    const register unsigned short int SID2 = 7;
    sbit  SID2_bit at RXF0SIDL.B7;

    // RXF0EIDH bits
    const register unsigned short int EID8 = 0;
    sbit  EID8_bit at RXF0EIDH.B0;
    const register unsigned short int EID9 = 1;
    sbit  EID9_bit at RXF0EIDH.B1;
    const register unsigned short int EID10 = 2;
    sbit  EID10_bit at RXF0EIDH.B2;
    const register unsigned short int EID11 = 3;
    sbit  EID11_bit at RXF0EIDH.B3;
    const register unsigned short int EID12 = 4;
    sbit  EID12_bit at RXF0EIDH.B4;
    const register unsigned short int EID13 = 5;
    sbit  EID13_bit at RXF0EIDH.B5;
    const register unsigned short int EID14 = 6;
    sbit  EID14_bit at RXF0EIDH.B6;
    const register unsigned short int EID15 = 7;
    sbit  EID15_bit at RXF0EIDH.B7;

    // RXF0EIDL bits
    const register unsigned short int EID0 = 0;
    sbit  EID0_bit at RXF0EIDL.B0;
    const register unsigned short int EID1 = 1;
    sbit  EID1_bit at RXF0EIDL.B1;
    const register unsigned short int EID2 = 2;
    sbit  EID2_bit at RXF0EIDL.B2;
    const register unsigned short int EID3 = 3;
    sbit  EID3_bit at RXF0EIDL.B3;
    const register unsigned short int EID4 = 4;
    sbit  EID4_bit at RXF0EIDL.B4;
    const register unsigned short int EID5 = 5;
    sbit  EID5_bit at RXF0EIDL.B5;
    const register unsigned short int EID6 = 6;
    sbit  EID6_bit at RXF0EIDL.B6;
    const register unsigned short int EID7 = 7;
    sbit  EID7_bit at RXF0EIDL.B7;

    // RXF1SIDH bits
    sbit  SID3_RXF1SIDH_bit at RXF1SIDH.B0;
    sbit  SID4_RXF1SIDH_bit at RXF1SIDH.B1;
    sbit  SID5_RXF1SIDH_bit at RXF1SIDH.B2;
    sbit  SID6_RXF1SIDH_bit at RXF1SIDH.B3;
    sbit  SID7_RXF1SIDH_bit at RXF1SIDH.B4;
    sbit  SID8_RXF1SIDH_bit at RXF1SIDH.B5;
    sbit  SID9_RXF1SIDH_bit at RXF1SIDH.B6;
    sbit  SID10_RXF1SIDH_bit at RXF1SIDH.B7;

    // RXF1SIDL bits
    sbit  EID16_RXF1SIDL_bit at RXF1SIDL.B0;
    sbit  EID17_RXF1SIDL_bit at RXF1SIDL.B1;
    sbit  EXIDEN_RXF1SIDL_bit at RXF1SIDL.B3;
    sbit  SID0_RXF1SIDL_bit at RXF1SIDL.B5;
    sbit  SID1_RXF1SIDL_bit at RXF1SIDL.B6;
    sbit  SID2_RXF1SIDL_bit at RXF1SIDL.B7;

    // RXF1EIDH bits
    sbit  EID8_RXF1EIDH_bit at RXF1EIDH.B0;
    sbit  EID9_RXF1EIDH_bit at RXF1EIDH.B1;
    sbit  EID10_RXF1EIDH_bit at RXF1EIDH.B2;
    sbit  EID11_RXF1EIDH_bit at RXF1EIDH.B3;
    sbit  EID12_RXF1EIDH_bit at RXF1EIDH.B4;
    sbit  EID13_RXF1EIDH_bit at RXF1EIDH.B5;
    sbit  EID14_RXF1EIDH_bit at RXF1EIDH.B6;
    sbit  EID15_RXF1EIDH_bit at RXF1EIDH.B7;

    // RXF1EIDL bits
    sbit  EID0_RXF1EIDL_bit at RXF1EIDL.B0;
    sbit  EID1_RXF1EIDL_bit at RXF1EIDL.B1;
    sbit  EID2_RXF1EIDL_bit at RXF1EIDL.B2;
    sbit  EID3_RXF1EIDL_bit at RXF1EIDL.B3;
    sbit  EID4_RXF1EIDL_bit at RXF1EIDL.B4;
    sbit  EID5_RXF1EIDL_bit at RXF1EIDL.B5;
    sbit  EID6_RXF1EIDL_bit at RXF1EIDL.B6;
    sbit  EID7_RXF1EIDL_bit at RXF1EIDL.B7;

    // RXF2SIDH bits
    sbit  SID3_RXF2SIDH_bit at RXF2SIDH.B0;
    sbit  SID4_RXF2SIDH_bit at RXF2SIDH.B1;
    sbit  SID5_RXF2SIDH_bit at RXF2SIDH.B2;
    sbit  SID6_RXF2SIDH_bit at RXF2SIDH.B3;
    sbit  SID7_RXF2SIDH_bit at RXF2SIDH.B4;
    sbit  SID8_RXF2SIDH_bit at RXF2SIDH.B5;
    sbit  SID9_RXF2SIDH_bit at RXF2SIDH.B6;
    sbit  SID10_RXF2SIDH_bit at RXF2SIDH.B7;

    // RXF2SIDL bits
    sbit  EID16_RXF2SIDL_bit at RXF2SIDL.B0;
    sbit  EID17_RXF2SIDL_bit at RXF2SIDL.B1;
    sbit  EXIDEN_RXF2SIDL_bit at RXF2SIDL.B3;
    sbit  SID0_RXF2SIDL_bit at RXF2SIDL.B5;
    sbit  SID1_RXF2SIDL_bit at RXF2SIDL.B6;
    sbit  SID2_RXF2SIDL_bit at RXF2SIDL.B7;

    // RXF2EIDH bits
    sbit  EID8_RXF2EIDH_bit at RXF2EIDH.B0;
    sbit  EID9_RXF2EIDH_bit at RXF2EIDH.B1;
    sbit  EID10_RXF2EIDH_bit at RXF2EIDH.B2;
    sbit  EID11_RXF2EIDH_bit at RXF2EIDH.B3;
    sbit  EID12_RXF2EIDH_bit at RXF2EIDH.B4;
    sbit  EID13_RXF2EIDH_bit at RXF2EIDH.B5;
    sbit  EID14_RXF2EIDH_bit at RXF2EIDH.B6;
    sbit  EID15_RXF2EIDH_bit at RXF2EIDH.B7;

    // RXF2EIDL bits
    sbit  EID0_RXF2EIDL_bit at RXF2EIDL.B0;
    sbit  EID1_RXF2EIDL_bit at RXF2EIDL.B1;
    sbit  EID2_RXF2EIDL_bit at RXF2EIDL.B2;
    sbit  EID3_RXF2EIDL_bit at RXF2EIDL.B3;
    sbit  EID4_RXF2EIDL_bit at RXF2EIDL.B4;
    sbit  EID5_RXF2EIDL_bit at RXF2EIDL.B5;
    sbit  EID6_RXF2EIDL_bit at RXF2EIDL.B6;
    sbit  EID7_RXF2EIDL_bit at RXF2EIDL.B7;

    // RXF3SIDH bits
    sbit  SID3_RXF3SIDH_bit at RXF3SIDH.B0;
    sbit  SID4_RXF3SIDH_bit at RXF3SIDH.B1;
    sbit  SID5_RXF3SIDH_bit at RXF3SIDH.B2;
    sbit  SID6_RXF3SIDH_bit at RXF3SIDH.B3;
    sbit  SID7_RXF3SIDH_bit at RXF3SIDH.B4;
    sbit  SID8_RXF3SIDH_bit at RXF3SIDH.B5;
    sbit  SID9_RXF3SIDH_bit at RXF3SIDH.B6;
    sbit  SID10_RXF3SIDH_bit at RXF3SIDH.B7;

    // RXF3SIDL bits
    sbit  EID16_RXF3SIDL_bit at RXF3SIDL.B0;
    sbit  EID17_RXF3SIDL_bit at RXF3SIDL.B1;
    sbit  EXIDEN_RXF3SIDL_bit at RXF3SIDL.B3;
    sbit  SID0_RXF3SIDL_bit at RXF3SIDL.B5;
    sbit  SID1_RXF3SIDL_bit at RXF3SIDL.B6;
    sbit  SID2_RXF3SIDL_bit at RXF3SIDL.B7;

    // RXF3EIDH bits
    sbit  EID8_RXF3EIDH_bit at RXF3EIDH.B0;
    sbit  EID9_RXF3EIDH_bit at RXF3EIDH.B1;
    sbit  EID10_RXF3EIDH_bit at RXF3EIDH.B2;
    sbit  EID11_RXF3EIDH_bit at RXF3EIDH.B3;
    sbit  EID12_RXF3EIDH_bit at RXF3EIDH.B4;
    sbit  EID13_RXF3EIDH_bit at RXF3EIDH.B5;
    sbit  EID14_RXF3EIDH_bit at RXF3EIDH.B6;
    sbit  EID15_RXF3EIDH_bit at RXF3EIDH.B7;

    // RXF3EIDL bits
    sbit  EID0_RXF3EIDL_bit at RXF3EIDL.B0;
    sbit  EID1_RXF3EIDL_bit at RXF3EIDL.B1;
    sbit  EID2_RXF3EIDL_bit at RXF3EIDL.B2;
    sbit  EID3_RXF3EIDL_bit at RXF3EIDL.B3;
    sbit  EID4_RXF3EIDL_bit at RXF3EIDL.B4;
    sbit  EID5_RXF3EIDL_bit at RXF3EIDL.B5;
    sbit  EID6_RXF3EIDL_bit at RXF3EIDL.B6;
    sbit  EID7_RXF3EIDL_bit at RXF3EIDL.B7;

    // RXF4SIDH bits
    sbit  SID3_RXF4SIDH_bit at RXF4SIDH.B0;
    sbit  SID4_RXF4SIDH_bit at RXF4SIDH.B1;
    sbit  SID5_RXF4SIDH_bit at RXF4SIDH.B2;
    sbit  SID6_RXF4SIDH_bit at RXF4SIDH.B3;
    sbit  SID7_RXF4SIDH_bit at RXF4SIDH.B4;
    sbit  SID8_RXF4SIDH_bit at RXF4SIDH.B5;
    sbit  SID9_RXF4SIDH_bit at RXF4SIDH.B6;
    sbit  SID10_RXF4SIDH_bit at RXF4SIDH.B7;

    // RXF4SIDL bits
    sbit  EID16_RXF4SIDL_bit at RXF4SIDL.B0;
    sbit  EID17_RXF4SIDL_bit at RXF4SIDL.B1;
    sbit  EXIDEN_RXF4SIDL_bit at RXF4SIDL.B3;
    sbit  SID0_RXF4SIDL_bit at RXF4SIDL.B5;
    sbit  SID1_RXF4SIDL_bit at RXF4SIDL.B6;
    sbit  SID2_RXF4SIDL_bit at RXF4SIDL.B7;

    // RXF4EIDH bits
    sbit  EID8_RXF4EIDH_bit at RXF4EIDH.B0;
    sbit  EID9_RXF4EIDH_bit at RXF4EIDH.B1;
    sbit  EID10_RXF4EIDH_bit at RXF4EIDH.B2;
    sbit  EID11_RXF4EIDH_bit at RXF4EIDH.B3;
    sbit  EID12_RXF4EIDH_bit at RXF4EIDH.B4;
    sbit  EID13_RXF4EIDH_bit at RXF4EIDH.B5;
    sbit  EID14_RXF4EIDH_bit at RXF4EIDH.B6;
    sbit  EID15_RXF4EIDH_bit at RXF4EIDH.B7;

    // RXF4EIDL bits
    sbit  EID0_RXF4EIDL_bit at RXF4EIDL.B0;
    sbit  EID1_RXF4EIDL_bit at RXF4EIDL.B1;
    sbit  EID2_RXF4EIDL_bit at RXF4EIDL.B2;
    sbit  EID3_RXF4EIDL_bit at RXF4EIDL.B3;
    sbit  EID4_RXF4EIDL_bit at RXF4EIDL.B4;
    sbit  EID5_RXF4EIDL_bit at RXF4EIDL.B5;
    sbit  EID6_RXF4EIDL_bit at RXF4EIDL.B6;
    sbit  EID7_RXF4EIDL_bit at RXF4EIDL.B7;

    // RXF5SIDH bits
    sbit  SID3_RXF5SIDH_bit at RXF5SIDH.B0;
    sbit  SID4_RXF5SIDH_bit at RXF5SIDH.B1;
    sbit  SID5_RXF5SIDH_bit at RXF5SIDH.B2;
    sbit  SID6_RXF5SIDH_bit at RXF5SIDH.B3;
    sbit  SID7_RXF5SIDH_bit at RXF5SIDH.B4;
    sbit  SID8_RXF5SIDH_bit at RXF5SIDH.B5;
    sbit  SID9_RXF5SIDH_bit at RXF5SIDH.B6;
    sbit  SID10_RXF5SIDH_bit at RXF5SIDH.B7;

    // RXF5SIDL bits
    sbit  EID16_RXF5SIDL_bit at RXF5SIDL.B0;
    sbit  EID17_RXF5SIDL_bit at RXF5SIDL.B1;
    sbit  EXIDEN_RXF5SIDL_bit at RXF5SIDL.B3;
    sbit  SID0_RXF5SIDL_bit at RXF5SIDL.B5;
    sbit  SID1_RXF5SIDL_bit at RXF5SIDL.B6;
    sbit  SID2_RXF5SIDL_bit at RXF5SIDL.B7;

    // RXF5EIDH bits
    sbit  EID8_RXF5EIDH_bit at RXF5EIDH.B0;
    sbit  EID9_RXF5EIDH_bit at RXF5EIDH.B1;
    sbit  EID10_RXF5EIDH_bit at RXF5EIDH.B2;
    sbit  EID11_RXF5EIDH_bit at RXF5EIDH.B3;
    sbit  EID12_RXF5EIDH_bit at RXF5EIDH.B4;
    sbit  EID13_RXF5EIDH_bit at RXF5EIDH.B5;
    sbit  EID14_RXF5EIDH_bit at RXF5EIDH.B6;
    sbit  EID15_RXF5EIDH_bit at RXF5EIDH.B7;

    // RXF5EIDL bits
    sbit  EID0_RXF5EIDL_bit at RXF5EIDL.B0;
    sbit  EID1_RXF5EIDL_bit at RXF5EIDL.B1;
    sbit  EID2_RXF5EIDL_bit at RXF5EIDL.B2;
    sbit  EID3_RXF5EIDL_bit at RXF5EIDL.B3;
    sbit  EID4_RXF5EIDL_bit at RXF5EIDL.B4;
    sbit  EID5_RXF5EIDL_bit at RXF5EIDL.B5;
    sbit  EID6_RXF5EIDL_bit at RXF5EIDL.B6;
    sbit  EID7_RXF5EIDL_bit at RXF5EIDL.B7;

    // RXM0SIDH bits
    sbit  SID3_RXM0SIDH_bit at RXM0SIDH.B0;
    sbit  SID4_RXM0SIDH_bit at RXM0SIDH.B1;
    sbit  SID5_RXM0SIDH_bit at RXM0SIDH.B2;
    sbit  SID6_RXM0SIDH_bit at RXM0SIDH.B3;
    sbit  SID7_RXM0SIDH_bit at RXM0SIDH.B4;
    sbit  SID8_RXM0SIDH_bit at RXM0SIDH.B5;
    sbit  SID9_RXM0SIDH_bit at RXM0SIDH.B6;
    sbit  SID10_RXM0SIDH_bit at RXM0SIDH.B7;

    // RXM0SIDL bits
    sbit  EID16_RXM0SIDL_bit at RXM0SIDL.B0;
    sbit  EID17_RXM0SIDL_bit at RXM0SIDL.B1;
    sbit  SID0_RXM0SIDL_bit at RXM0SIDL.B5;
    sbit  SID1_RXM0SIDL_bit at RXM0SIDL.B6;
    sbit  SID2_RXM0SIDL_bit at RXM0SIDL.B7;

    // RXM0EIDH bits
    sbit  EID8_RXM0EIDH_bit at RXM0EIDH.B0;
    sbit  EID9_RXM0EIDH_bit at RXM0EIDH.B1;
    sbit  EID10_RXM0EIDH_bit at RXM0EIDH.B2;
    sbit  EID11_RXM0EIDH_bit at RXM0EIDH.B3;
    sbit  EID12_RXM0EIDH_bit at RXM0EIDH.B4;
    sbit  EID13_RXM0EIDH_bit at RXM0EIDH.B5;
    sbit  EID14_RXM0EIDH_bit at RXM0EIDH.B6;
    sbit  EID15_RXM0EIDH_bit at RXM0EIDH.B7;

    // RXM0EIDL bits
    sbit  EID0_RXM0EIDL_bit at RXM0EIDL.B0;
    sbit  EID1_RXM0EIDL_bit at RXM0EIDL.B1;
    sbit  EID2_RXM0EIDL_bit at RXM0EIDL.B2;
    sbit  EID3_RXM0EIDL_bit at RXM0EIDL.B3;
    sbit  EID4_RXM0EIDL_bit at RXM0EIDL.B4;
    sbit  EID5_RXM0EIDL_bit at RXM0EIDL.B5;
    sbit  EID6_RXM0EIDL_bit at RXM0EIDL.B6;
    sbit  EID7_RXM0EIDL_bit at RXM0EIDL.B7;

    // RXM1SIDH bits
    sbit  SID3_RXM1SIDH_bit at RXM1SIDH.B0;
    sbit  SID4_RXM1SIDH_bit at RXM1SIDH.B1;
    sbit  SID5_RXM1SIDH_bit at RXM1SIDH.B2;
    sbit  SID6_RXM1SIDH_bit at RXM1SIDH.B3;
    sbit  SID7_RXM1SIDH_bit at RXM1SIDH.B4;
    sbit  SID8_RXM1SIDH_bit at RXM1SIDH.B5;
    sbit  SID9_RXM1SIDH_bit at RXM1SIDH.B6;
    sbit  SID10_RXM1SIDH_bit at RXM1SIDH.B7;

    // RXM1SIDL bits
    sbit  EID16_RXM1SIDL_bit at RXM1SIDL.B0;
    sbit  EID17_RXM1SIDL_bit at RXM1SIDL.B1;
    sbit  SID0_RXM1SIDL_bit at RXM1SIDL.B5;
    sbit  SID1_RXM1SIDL_bit at RXM1SIDL.B6;
    sbit  SID2_RXM1SIDL_bit at RXM1SIDL.B7;

    // RXM1EIDH bits
    sbit  EID8_RXM1EIDH_bit at RXM1EIDH.B0;
    sbit  EID9_RXM1EIDH_bit at RXM1EIDH.B1;
    sbit  EID10_RXM1EIDH_bit at RXM1EIDH.B2;
    sbit  EID11_RXM1EIDH_bit at RXM1EIDH.B3;
    sbit  EID12_RXM1EIDH_bit at RXM1EIDH.B4;
    sbit  EID13_RXM1EIDH_bit at RXM1EIDH.B5;
    sbit  EID14_RXM1EIDH_bit at RXM1EIDH.B6;
    sbit  EID15_RXM1EIDH_bit at RXM1EIDH.B7;

    // RXM1EIDL bits
    sbit  EID0_RXM1EIDL_bit at RXM1EIDL.B0;
    sbit  EID1_RXM1EIDL_bit at RXM1EIDL.B1;
    sbit  EID2_RXM1EIDL_bit at RXM1EIDL.B2;
    sbit  EID3_RXM1EIDL_bit at RXM1EIDL.B3;
    sbit  EID4_RXM1EIDL_bit at RXM1EIDL.B4;
    sbit  EID5_RXM1EIDL_bit at RXM1EIDL.B5;
    sbit  EID6_RXM1EIDL_bit at RXM1EIDL.B6;
    sbit  EID7_RXM1EIDL_bit at RXM1EIDL.B7;

    // TXB2CON bits
    const register unsigned short int TXPRI0 = 0;
    sbit  TXPRI0_bit at TXB2CON.B0;
    const register unsigned short int TXPRI1 = 1;
    sbit  TXPRI1_bit at TXB2CON.B1;
    const register unsigned short int TXREQ = 3;
    sbit  TXREQ_bit at TXB2CON.B3;
    const register unsigned short int TXERR = 4;
    sbit  TXERR_bit at TXB2CON.B4;
    const register unsigned short int TXLARB = 5;
    sbit  TXLARB_bit at TXB2CON.B5;
    const register unsigned short int TXABT = 6;
    sbit  TXABT_bit at TXB2CON.B6;

    // TXB2SIDH bits
    sbit  SID3_TXB2SIDH_bit at TXB2SIDH.B0;
    sbit  SID4_TXB2SIDH_bit at TXB2SIDH.B1;
    sbit  SID5_TXB2SIDH_bit at TXB2SIDH.B2;
    sbit  SID6_TXB2SIDH_bit at TXB2SIDH.B3;
    sbit  SID7_TXB2SIDH_bit at TXB2SIDH.B4;
    sbit  SID8_TXB2SIDH_bit at TXB2SIDH.B5;
    sbit  SID9_TXB2SIDH_bit at TXB2SIDH.B6;
    sbit  SID10_TXB2SIDH_bit at TXB2SIDH.B7;

    // TXB2SIDL bits
    sbit  EID16_TXB2SIDL_bit at TXB2SIDL.B0;
    sbit  EID17_TXB2SIDL_bit at TXB2SIDL.B1;
    const register unsigned short int EXIDE = 3;
    sbit  EXIDE_bit at TXB2SIDL.B3;
    sbit  SID0_TXB2SIDL_bit at TXB2SIDL.B5;
    sbit  SID1_TXB2SIDL_bit at TXB2SIDL.B6;
    sbit  SID2_TXB2SIDL_bit at TXB2SIDL.B7;

    // TXB2EIDH bits
    sbit  EID8_TXB2EIDH_bit at TXB2EIDH.B0;
    sbit  EID9_TXB2EIDH_bit at TXB2EIDH.B1;
    sbit  EID10_TXB2EIDH_bit at TXB2EIDH.B2;
    sbit  EID11_TXB2EIDH_bit at TXB2EIDH.B3;
    sbit  EID12_TXB2EIDH_bit at TXB2EIDH.B4;
    sbit  EID13_TXB2EIDH_bit at TXB2EIDH.B5;
    sbit  EID14_TXB2EIDH_bit at TXB2EIDH.B6;
    sbit  EID15_TXB2EIDH_bit at TXB2EIDH.B7;

    // TXB2EIDL bits
    sbit  EID0_TXB2EIDL_bit at TXB2EIDL.B0;
    sbit  EID1_TXB2EIDL_bit at TXB2EIDL.B1;
    sbit  EID2_TXB2EIDL_bit at TXB2EIDL.B2;
    sbit  EID3_TXB2EIDL_bit at TXB2EIDL.B3;
    sbit  EID4_TXB2EIDL_bit at TXB2EIDL.B4;
    sbit  EID5_TXB2EIDL_bit at TXB2EIDL.B5;
    sbit  EID6_TXB2EIDL_bit at TXB2EIDL.B6;
    sbit  EID7_TXB2EIDL_bit at TXB2EIDL.B7;

    // TXB2DLC bits
    const register unsigned short int DLC0 = 0;
    sbit  DLC0_bit at TXB2DLC.B0;
    const register unsigned short int DLC1 = 1;
    sbit  DLC1_bit at TXB2DLC.B1;
    const register unsigned short int DLC2 = 2;
    sbit  DLC2_bit at TXB2DLC.B2;
    const register unsigned short int DLC3 = 3;
    sbit  DLC3_bit at TXB2DLC.B3;
    const register unsigned short int TXRTR = 6;
    sbit  TXRTR_bit at TXB2DLC.B6;

    // TXB2D0 bits
    const register unsigned short int TXB2D00 = 0;
    sbit  TXB2D00_bit at TXB2D0.B0;
    const register unsigned short int TXB2D01 = 1;
    sbit  TXB2D01_bit at TXB2D0.B1;
    const register unsigned short int TXB2D02 = 2;
    sbit  TXB2D02_bit at TXB2D0.B2;
    const register unsigned short int TXB2D03 = 3;
    sbit  TXB2D03_bit at TXB2D0.B3;
    const register unsigned short int TXB2D04 = 4;
    sbit  TXB2D04_bit at TXB2D0.B4;
    const register unsigned short int TXB2D05 = 5;
    sbit  TXB2D05_bit at TXB2D0.B5;
    const register unsigned short int TXB2D06 = 6;
    sbit  TXB2D06_bit at TXB2D0.B6;
    const register unsigned short int TXB2D07 = 7;
    sbit  TXB2D07_bit at TXB2D0.B7;

    // TXB2D1 bits
    const register unsigned short int TXB2D10 = 0;
    sbit  TXB2D10_bit at TXB2D1.B0;
    const register unsigned short int TXB2D11 = 1;
    sbit  TXB2D11_bit at TXB2D1.B1;
    const register unsigned short int TXB2D12 = 2;
    sbit  TXB2D12_bit at TXB2D1.B2;
    const register unsigned short int TXB2D13 = 3;
    sbit  TXB2D13_bit at TXB2D1.B3;
    const register unsigned short int TXB2D14 = 4;
    sbit  TXB2D14_bit at TXB2D1.B4;
    const register unsigned short int TXB2D15 = 5;
    sbit  TXB2D15_bit at TXB2D1.B5;
    const register unsigned short int TXB2D16 = 6;
    sbit  TXB2D16_bit at TXB2D1.B6;
    const register unsigned short int TXB2D17 = 7;
    sbit  TXB2D17_bit at TXB2D1.B7;

    // TXB2D2 bits
    const register unsigned short int TXB2D20 = 0;
    sbit  TXB2D20_bit at TXB2D2.B0;
    const register unsigned short int TXB2D21 = 1;
    sbit  TXB2D21_bit at TXB2D2.B1;
    const register unsigned short int TXB2D22 = 2;
    sbit  TXB2D22_bit at TXB2D2.B2;
    const register unsigned short int TXB2D23 = 3;
    sbit  TXB2D23_bit at TXB2D2.B3;
    const register unsigned short int TXB2D24 = 4;
    sbit  TXB2D24_bit at TXB2D2.B4;
    const register unsigned short int TXB2D25 = 5;
    sbit  TXB2D25_bit at TXB2D2.B5;
    const register unsigned short int TXB2D26 = 6;
    sbit  TXB2D26_bit at TXB2D2.B6;
    const register unsigned short int TXB2D27 = 7;
    sbit  TXB2D27_bit at TXB2D2.B7;

    // TXB2D3 bits
    const register unsigned short int TXB2D30 = 0;
    sbit  TXB2D30_bit at TXB2D3.B0;
    const register unsigned short int TXB2D31 = 1;
    sbit  TXB2D31_bit at TXB2D3.B1;
    const register unsigned short int TXB2D32 = 2;
    sbit  TXB2D32_bit at TXB2D3.B2;
    const register unsigned short int TXB2D33 = 3;
    sbit  TXB2D33_bit at TXB2D3.B3;
    const register unsigned short int TXB2D34 = 4;
    sbit  TXB2D34_bit at TXB2D3.B4;
    const register unsigned short int TXB2D35 = 5;
    sbit  TXB2D35_bit at TXB2D3.B5;
    const register unsigned short int TXB2D36 = 6;
    sbit  TXB2D36_bit at TXB2D3.B6;
    const register unsigned short int TXB2D37 = 7;
    sbit  TXB2D37_bit at TXB2D3.B7;

    // TXB2D4 bits
    const register unsigned short int TXB2D40 = 0;
    sbit  TXB2D40_bit at TXB2D4.B0;
    const register unsigned short int TXB2D41 = 1;
    sbit  TXB2D41_bit at TXB2D4.B1;
    const register unsigned short int TXB2D42 = 2;
    sbit  TXB2D42_bit at TXB2D4.B2;
    const register unsigned short int TXB2D43 = 3;
    sbit  TXB2D43_bit at TXB2D4.B3;
    const register unsigned short int TXB2D44 = 4;
    sbit  TXB2D44_bit at TXB2D4.B4;
    const register unsigned short int TXB2D45 = 5;
    sbit  TXB2D45_bit at TXB2D4.B5;
    const register unsigned short int TXB2D46 = 6;
    sbit  TXB2D46_bit at TXB2D4.B6;
    const register unsigned short int TXB2D47 = 7;
    sbit  TXB2D47_bit at TXB2D4.B7;

    // TXB2D5 bits
    const register unsigned short int TXB2D50 = 0;
    sbit  TXB2D50_bit at TXB2D5.B0;
    const register unsigned short int TXB2D51 = 1;
    sbit  TXB2D51_bit at TXB2D5.B1;
    const register unsigned short int TXB2D52 = 2;
    sbit  TXB2D52_bit at TXB2D5.B2;
    const register unsigned short int TXB2D53 = 3;
    sbit  TXB2D53_bit at TXB2D5.B3;
    const register unsigned short int TXB2D54 = 4;
    sbit  TXB2D54_bit at TXB2D5.B4;
    const register unsigned short int TXB2D55 = 5;
    sbit  TXB2D55_bit at TXB2D5.B5;
    const register unsigned short int TXB2D56 = 6;
    sbit  TXB2D56_bit at TXB2D5.B6;
    const register unsigned short int TXB2D57 = 7;
    sbit  TXB2D57_bit at TXB2D5.B7;

    // TXB2D6 bits
    const register unsigned short int TXB2D60 = 0;
    sbit  TXB2D60_bit at TXB2D6.B0;
    const register unsigned short int TXB2D61 = 1;
    sbit  TXB2D61_bit at TXB2D6.B1;
    const register unsigned short int TXB2D62 = 2;
    sbit  TXB2D62_bit at TXB2D6.B2;
    const register unsigned short int TXB2D63 = 3;
    sbit  TXB2D63_bit at TXB2D6.B3;
    const register unsigned short int TXB2D64 = 4;
    sbit  TXB2D64_bit at TXB2D6.B4;
    const register unsigned short int TXB2D65 = 5;
    sbit  TXB2D65_bit at TXB2D6.B5;
    const register unsigned short int TXB2D66 = 6;
    sbit  TXB2D66_bit at TXB2D6.B6;
    const register unsigned short int TXB2D67 = 7;
    sbit  TXB2D67_bit at TXB2D6.B7;

    // TXB2D7 bits
    const register unsigned short int TXB2D70 = 0;
    sbit  TXB2D70_bit at TXB2D7.B0;
    const register unsigned short int TXB2D71 = 1;
    sbit  TXB2D71_bit at TXB2D7.B1;
    const register unsigned short int TXB2D72 = 2;
    sbit  TXB2D72_bit at TXB2D7.B2;
    const register unsigned short int TXB2D73 = 3;
    sbit  TXB2D73_bit at TXB2D7.B3;
    const register unsigned short int TXB2D74 = 4;
    sbit  TXB2D74_bit at TXB2D7.B4;
    const register unsigned short int TXB2D75 = 5;
    sbit  TXB2D75_bit at TXB2D7.B5;
    const register unsigned short int TXB2D76 = 6;
    sbit  TXB2D76_bit at TXB2D7.B6;
    const register unsigned short int TXB2D77 = 7;
    sbit  TXB2D77_bit at TXB2D7.B7;

    // CANSTATRO4 bits
    const register unsigned short int ICODE0 = 1;
    sbit  ICODE0_bit at CANSTATRO4.B1;
    const register unsigned short int ICODE1 = 2;
    sbit  ICODE1_bit at CANSTATRO4.B2;
    const register unsigned short int ICODE2 = 3;
    sbit  ICODE2_bit at CANSTATRO4.B3;
    const register unsigned short int OPMODE0 = 5;
    sbit  OPMODE0_bit at CANSTATRO4.B5;
    const register unsigned short int OPMODE1 = 6;
    sbit  OPMODE1_bit at CANSTATRO4.B6;
    const register unsigned short int OPMODE2 = 7;
    sbit  OPMODE2_bit at CANSTATRO4.B7;

    // TXB1CON bits
    sbit  TXPRI0_TXB1CON_bit at TXB1CON.B0;
    sbit  TXPRI1_TXB1CON_bit at TXB1CON.B1;
    sbit  TXREQ_TXB1CON_bit at TXB1CON.B3;
    sbit  TXERR_TXB1CON_bit at TXB1CON.B4;
    sbit  TXLARB_TXB1CON_bit at TXB1CON.B5;
    sbit  TXABT_TXB1CON_bit at TXB1CON.B6;

    // TXB1SIDH bits
    sbit  SID3_TXB1SIDH_bit at TXB1SIDH.B0;
    sbit  SID4_TXB1SIDH_bit at TXB1SIDH.B1;
    sbit  SID5_TXB1SIDH_bit at TXB1SIDH.B2;
    sbit  SID6_TXB1SIDH_bit at TXB1SIDH.B3;
    sbit  SID7_TXB1SIDH_bit at TXB1SIDH.B4;
    sbit  SID8_TXB1SIDH_bit at TXB1SIDH.B5;
    sbit  SID9_TXB1SIDH_bit at TXB1SIDH.B6;
    sbit  SID10_TXB1SIDH_bit at TXB1SIDH.B7;

    // TXB1SIDL bits
    sbit  EID16_TXB1SIDL_bit at TXB1SIDL.B0;
    sbit  EID17_TXB1SIDL_bit at TXB1SIDL.B1;
    sbit  EXIDE_TXB1SIDL_bit at TXB1SIDL.B3;
    sbit  SID0_TXB1SIDL_bit at TXB1SIDL.B5;
    sbit  SID1_TXB1SIDL_bit at TXB1SIDL.B6;
    sbit  SID2_TXB1SIDL_bit at TXB1SIDL.B7;

    // TXB1EIDH bits
    sbit  EID8_TXB1EIDH_bit at TXB1EIDH.B0;
    sbit  EID9_TXB1EIDH_bit at TXB1EIDH.B1;
    sbit  EID10_TXB1EIDH_bit at TXB1EIDH.B2;
    sbit  EID11_TXB1EIDH_bit at TXB1EIDH.B3;
    sbit  EID12_TXB1EIDH_bit at TXB1EIDH.B4;
    sbit  EID13_TXB1EIDH_bit at TXB1EIDH.B5;
    sbit  EID14_TXB1EIDH_bit at TXB1EIDH.B6;
    sbit  EID15_TXB1EIDH_bit at TXB1EIDH.B7;

    // TXB1EIDL bits
    sbit  EID0_TXB1EIDL_bit at TXB1EIDL.B0;
    sbit  EID1_TXB1EIDL_bit at TXB1EIDL.B1;
    sbit  EID2_TXB1EIDL_bit at TXB1EIDL.B2;
    sbit  EID3_TXB1EIDL_bit at TXB1EIDL.B3;
    sbit  EID4_TXB1EIDL_bit at TXB1EIDL.B4;
    sbit  EID5_TXB1EIDL_bit at TXB1EIDL.B5;
    sbit  EID6_TXB1EIDL_bit at TXB1EIDL.B6;
    sbit  EID7_TXB1EIDL_bit at TXB1EIDL.B7;

    // TXB1DLC bits
    sbit  DLC0_TXB1DLC_bit at TXB1DLC.B0;
    sbit  DLC1_TXB1DLC_bit at TXB1DLC.B1;
    sbit  DLC2_TXB1DLC_bit at TXB1DLC.B2;
    sbit  DLC3_TXB1DLC_bit at TXB1DLC.B3;
    sbit  TXRTR_TXB1DLC_bit at TXB1DLC.B6;

    // TXB1D0 bits
    const register unsigned short int TXB1D00 = 0;
    sbit  TXB1D00_bit at TXB1D0.B0;
    const register unsigned short int TXB1D01 = 1;
    sbit  TXB1D01_bit at TXB1D0.B1;
    const register unsigned short int TXB1D02 = 2;
    sbit  TXB1D02_bit at TXB1D0.B2;
    const register unsigned short int TXB1D03 = 3;
    sbit  TXB1D03_bit at TXB1D0.B3;
    const register unsigned short int TXB1D04 = 4;
    sbit  TXB1D04_bit at TXB1D0.B4;
    const register unsigned short int TXB1D05 = 5;
    sbit  TXB1D05_bit at TXB1D0.B5;
    const register unsigned short int TXB1D06 = 6;
    sbit  TXB1D06_bit at TXB1D0.B6;
    const register unsigned short int TXB1D07 = 7;
    sbit  TXB1D07_bit at TXB1D0.B7;

    // TXB1D1 bits
    const register unsigned short int TXB1D10 = 0;
    sbit  TXB1D10_bit at TXB1D1.B0;
    const register unsigned short int TXB1D11 = 1;
    sbit  TXB1D11_bit at TXB1D1.B1;
    const register unsigned short int TXB1D12 = 2;
    sbit  TXB1D12_bit at TXB1D1.B2;
    const register unsigned short int TXB1D13 = 3;
    sbit  TXB1D13_bit at TXB1D1.B3;
    const register unsigned short int TXB1D14 = 4;
    sbit  TXB1D14_bit at TXB1D1.B4;
    const register unsigned short int TXB1D15 = 5;
    sbit  TXB1D15_bit at TXB1D1.B5;
    const register unsigned short int TXB1D16 = 6;
    sbit  TXB1D16_bit at TXB1D1.B6;
    const register unsigned short int TXB1D17 = 7;
    sbit  TXB1D17_bit at TXB1D1.B7;

    // TXB1D2 bits
    const register unsigned short int TXB1D20 = 0;
    sbit  TXB1D20_bit at TXB1D2.B0;
    const register unsigned short int TXB1D21 = 1;
    sbit  TXB1D21_bit at TXB1D2.B1;
    const register unsigned short int TXB1D22 = 2;
    sbit  TXB1D22_bit at TXB1D2.B2;
    const register unsigned short int TXB1D23 = 3;
    sbit  TXB1D23_bit at TXB1D2.B3;
    const register unsigned short int TXB1D24 = 4;
    sbit  TXB1D24_bit at TXB1D2.B4;
    const register unsigned short int TXB1D25 = 5;
    sbit  TXB1D25_bit at TXB1D2.B5;
    const register unsigned short int TXB1D26 = 6;
    sbit  TXB1D26_bit at TXB1D2.B6;
    const register unsigned short int TXB1D27 = 7;
    sbit  TXB1D27_bit at TXB1D2.B7;
    const register unsigned short int TBB1D23 = 3;
    sbit  TBB1D23_bit at TXB1D2.B3;

    // TXB1D3 bits
    const register unsigned short int TXB1D30 = 0;
    sbit  TXB1D30_bit at TXB1D3.B0;
    const register unsigned short int TXB1D31 = 1;
    sbit  TXB1D31_bit at TXB1D3.B1;
    const register unsigned short int TXB1D32 = 2;
    sbit  TXB1D32_bit at TXB1D3.B2;
    const register unsigned short int TXB1D33 = 3;
    sbit  TXB1D33_bit at TXB1D3.B3;
    const register unsigned short int TXB1D34 = 4;
    sbit  TXB1D34_bit at TXB1D3.B4;
    const register unsigned short int TXB1D35 = 5;
    sbit  TXB1D35_bit at TXB1D3.B5;
    const register unsigned short int TXB1D36 = 6;
    sbit  TXB1D36_bit at TXB1D3.B6;
    const register unsigned short int TXB1D37 = 7;
    sbit  TXB1D37_bit at TXB1D3.B7;

    // TXB1D4 bits
    const register unsigned short int TXB1D40 = 0;
    sbit  TXB1D40_bit at TXB1D4.B0;
    const register unsigned short int TXB1D41 = 1;
    sbit  TXB1D41_bit at TXB1D4.B1;
    const register unsigned short int TXB1D42 = 2;
    sbit  TXB1D42_bit at TXB1D4.B2;
    const register unsigned short int TXB1D43 = 3;
    sbit  TXB1D43_bit at TXB1D4.B3;
    const register unsigned short int TXB1D44 = 4;
    sbit  TXB1D44_bit at TXB1D4.B4;
    const register unsigned short int TXB1D45 = 5;
    sbit  TXB1D45_bit at TXB1D4.B5;
    const register unsigned short int TXB1D46 = 6;
    sbit  TXB1D46_bit at TXB1D4.B6;
    const register unsigned short int TXB1D47 = 7;
    sbit  TXB1D47_bit at TXB1D4.B7;

    // TXB1D5 bits
    const register unsigned short int TXB1D50 = 0;
    sbit  TXB1D50_bit at TXB1D5.B0;
    const register unsigned short int TXB1D51 = 1;
    sbit  TXB1D51_bit at TXB1D5.B1;
    const register unsigned short int TXB1D52 = 2;
    sbit  TXB1D52_bit at TXB1D5.B2;
    const register unsigned short int TXB1D53 = 3;
    sbit  TXB1D53_bit at TXB1D5.B3;
    const register unsigned short int TXB1D54 = 4;
    sbit  TXB1D54_bit at TXB1D5.B4;
    const register unsigned short int TXB1D55 = 5;
    sbit  TXB1D55_bit at TXB1D5.B5;
    const register unsigned short int TXB1D56 = 6;
    sbit  TXB1D56_bit at TXB1D5.B6;
    const register unsigned short int TXB1D57 = 7;
    sbit  TXB1D57_bit at TXB1D5.B7;

    // TXB1D6 bits
    const register unsigned short int TXB1D60 = 0;
    sbit  TXB1D60_bit at TXB1D6.B0;
    const register unsigned short int TXB1D61 = 1;
    sbit  TXB1D61_bit at TXB1D6.B1;
    const register unsigned short int TXB1D62 = 2;
    sbit  TXB1D62_bit at TXB1D6.B2;
    const register unsigned short int TXB1D63 = 3;
    sbit  TXB1D63_bit at TXB1D6.B3;
    const register unsigned short int TXB1D64 = 4;
    sbit  TXB1D64_bit at TXB1D6.B4;
    const register unsigned short int TXB1D65 = 5;
    sbit  TXB1D65_bit at TXB1D6.B5;
    const register unsigned short int TXB1D66 = 6;
    sbit  TXB1D66_bit at TXB1D6.B6;
    const register unsigned short int TXB1D67 = 7;
    sbit  TXB1D67_bit at TXB1D6.B7;

    // TXB1D7 bits
    const register unsigned short int TXB1D70 = 0;
    sbit  TXB1D70_bit at TXB1D7.B0;
    const register unsigned short int TXB1D71 = 1;
    sbit  TXB1D71_bit at TXB1D7.B1;
    const register unsigned short int TXB1D72 = 2;
    sbit  TXB1D72_bit at TXB1D7.B2;
    const register unsigned short int TXB1D73 = 3;
    sbit  TXB1D73_bit at TXB1D7.B3;
    const register unsigned short int TXB1D74 = 4;
    sbit  TXB1D74_bit at TXB1D7.B4;
    const register unsigned short int TXB1D75 = 5;
    sbit  TXB1D75_bit at TXB1D7.B5;
    const register unsigned short int TXB1D76 = 6;
    sbit  TXB1D76_bit at TXB1D7.B6;
    const register unsigned short int TXB1D77 = 7;
    sbit  TXB1D77_bit at TXB1D7.B7;

    // CANSTATRO3 bits
    sbit  ICODE0_CANSTATRO3_bit at CANSTATRO3.B1;
    sbit  ICODE1_CANSTATRO3_bit at CANSTATRO3.B2;
    sbit  ICODE2_CANSTATRO3_bit at CANSTATRO3.B3;
    sbit  OPMODE0_CANSTATRO3_bit at CANSTATRO3.B5;
    sbit  OPMODE1_CANSTATRO3_bit at CANSTATRO3.B6;
    sbit  OPMODE2_CANSTATRO3_bit at CANSTATRO3.B7;

    // TXB0CON bits
    sbit  TXPRI0_TXB0CON_bit at TXB0CON.B0;
    sbit  TXPRI1_TXB0CON_bit at TXB0CON.B1;
    sbit  TXREQ_TXB0CON_bit at TXB0CON.B3;
    sbit  TXERR_TXB0CON_bit at TXB0CON.B4;
    sbit  TXLARB_TXB0CON_bit at TXB0CON.B5;
    sbit  TXABT_TXB0CON_bit at TXB0CON.B6;

    // TXB0SIDH bits
    sbit  SID3_TXB0SIDH_bit at TXB0SIDH.B0;
    sbit  SID4_TXB0SIDH_bit at TXB0SIDH.B1;
    sbit  SID5_TXB0SIDH_bit at TXB0SIDH.B2;
    sbit  SID6_TXB0SIDH_bit at TXB0SIDH.B3;
    sbit  SID7_TXB0SIDH_bit at TXB0SIDH.B4;
    sbit  SID8_TXB0SIDH_bit at TXB0SIDH.B5;
    sbit  SID9_TXB0SIDH_bit at TXB0SIDH.B6;
    sbit  SID10_TXB0SIDH_bit at TXB0SIDH.B7;

    // TXB0SIDL bits
    sbit  EID16_TXB0SIDL_bit at TXB0SIDL.B0;
    sbit  EID17_TXB0SIDL_bit at TXB0SIDL.B1;
    sbit  EXIDE_TXB0SIDL_bit at TXB0SIDL.B3;
    sbit  SID0_TXB0SIDL_bit at TXB0SIDL.B5;
    sbit  SID1_TXB0SIDL_bit at TXB0SIDL.B6;
    sbit  SID2_TXB0SIDL_bit at TXB0SIDL.B7;

    // TXB0EIDH bits
    sbit  EID8_TXB0EIDH_bit at TXB0EIDH.B0;
    sbit  EID9_TXB0EIDH_bit at TXB0EIDH.B1;
    sbit  EID10_TXB0EIDH_bit at TXB0EIDH.B2;
    sbit  EID11_TXB0EIDH_bit at TXB0EIDH.B3;
    sbit  EID12_TXB0EIDH_bit at TXB0EIDH.B4;
    sbit  EID13_TXB0EIDH_bit at TXB0EIDH.B5;
    sbit  EID14_TXB0EIDH_bit at TXB0EIDH.B6;
    sbit  EID15_TXB0EIDH_bit at TXB0EIDH.B7;

    // TXB0EIDL bits
    sbit  EID0_TXB0EIDL_bit at TXB0EIDL.B0;
    sbit  EID1_TXB0EIDL_bit at TXB0EIDL.B1;
    sbit  EID2_TXB0EIDL_bit at TXB0EIDL.B2;
    sbit  EID3_TXB0EIDL_bit at TXB0EIDL.B3;
    sbit  EID4_TXB0EIDL_bit at TXB0EIDL.B4;
    sbit  EID5_TXB0EIDL_bit at TXB0EIDL.B5;
    sbit  EID6_TXB0EIDL_bit at TXB0EIDL.B6;
    sbit  EID7_TXB0EIDL_bit at TXB0EIDL.B7;

    // TXB0DLC bits
    sbit  DLC0_TXB0DLC_bit at TXB0DLC.B0;
    sbit  DLC1_TXB0DLC_bit at TXB0DLC.B1;
    sbit  DLC2_TXB0DLC_bit at TXB0DLC.B2;
    sbit  DLC3_TXB0DLC_bit at TXB0DLC.B3;
    sbit  TXRTR_TXB0DLC_bit at TXB0DLC.B6;

    // TXB0D0 bits
    const register unsigned short int TXB0D00 = 0;
    sbit  TXB0D00_bit at TXB0D0.B0;
    const register unsigned short int TXB0D01 = 1;
    sbit  TXB0D01_bit at TXB0D0.B1;
    const register unsigned short int TXB0D02 = 2;
    sbit  TXB0D02_bit at TXB0D0.B2;
    const register unsigned short int TXB0D03 = 3;
    sbit  TXB0D03_bit at TXB0D0.B3;
    const register unsigned short int TXB0D04 = 4;
    sbit  TXB0D04_bit at TXB0D0.B4;
    const register unsigned short int TXB0D05 = 5;
    sbit  TXB0D05_bit at TXB0D0.B5;
    const register unsigned short int TXB0D06 = 6;
    sbit  TXB0D06_bit at TXB0D0.B6;
    const register unsigned short int TXB0D07 = 7;
    sbit  TXB0D07_bit at TXB0D0.B7;

    // TXB0D1 bits
    const register unsigned short int TXB0D10 = 0;
    sbit  TXB0D10_bit at TXB0D1.B0;
    const register unsigned short int TXB0D11 = 1;
    sbit  TXB0D11_bit at TXB0D1.B1;
    const register unsigned short int TXB0D12 = 2;
    sbit  TXB0D12_bit at TXB0D1.B2;
    const register unsigned short int TXB0D13 = 3;
    sbit  TXB0D13_bit at TXB0D1.B3;
    const register unsigned short int TXB0D14 = 4;
    sbit  TXB0D14_bit at TXB0D1.B4;
    const register unsigned short int TXB0D15 = 5;
    sbit  TXB0D15_bit at TXB0D1.B5;
    const register unsigned short int TXB0D16 = 6;
    sbit  TXB0D16_bit at TXB0D1.B6;
    const register unsigned short int TXB0D17 = 7;
    sbit  TXB0D17_bit at TXB0D1.B7;

    // TXB0D2 bits
    const register unsigned short int TXB0D20 = 0;
    sbit  TXB0D20_bit at TXB0D2.B0;
    const register unsigned short int TXB0D21 = 1;
    sbit  TXB0D21_bit at TXB0D2.B1;
    const register unsigned short int TXB0D22 = 2;
    sbit  TXB0D22_bit at TXB0D2.B2;
    const register unsigned short int TXB0D23 = 3;
    sbit  TXB0D23_bit at TXB0D2.B3;
    const register unsigned short int TXB0D24 = 4;
    sbit  TXB0D24_bit at TXB0D2.B4;
    const register unsigned short int TXB0D25 = 5;
    sbit  TXB0D25_bit at TXB0D2.B5;
    const register unsigned short int TXB0D26 = 6;
    sbit  TXB0D26_bit at TXB0D2.B6;
    const register unsigned short int TXB0D27 = 7;
    sbit  TXB0D27_bit at TXB0D2.B7;

    // TXB0D3 bits
    const register unsigned short int TXB0D30 = 0;
    sbit  TXB0D30_bit at TXB0D3.B0;
    const register unsigned short int TXB0D31 = 1;
    sbit  TXB0D31_bit at TXB0D3.B1;
    const register unsigned short int TXB0D32 = 2;
    sbit  TXB0D32_bit at TXB0D3.B2;
    const register unsigned short int TXB0D33 = 3;
    sbit  TXB0D33_bit at TXB0D3.B3;
    const register unsigned short int TXB0D34 = 4;
    sbit  TXB0D34_bit at TXB0D3.B4;
    const register unsigned short int TXB0D35 = 5;
    sbit  TXB0D35_bit at TXB0D3.B5;
    const register unsigned short int TXB0D36 = 6;
    sbit  TXB0D36_bit at TXB0D3.B6;
    const register unsigned short int TXB0D37 = 7;
    sbit  TXB0D37_bit at TXB0D3.B7;

    // TXB0D4 bits
    const register unsigned short int TXB0D40 = 0;
    sbit  TXB0D40_bit at TXB0D4.B0;
    const register unsigned short int TXB0D41 = 1;
    sbit  TXB0D41_bit at TXB0D4.B1;
    const register unsigned short int TXB0D42 = 2;
    sbit  TXB0D42_bit at TXB0D4.B2;
    const register unsigned short int TXB0D43 = 3;
    sbit  TXB0D43_bit at TXB0D4.B3;
    const register unsigned short int TXB0D44 = 4;
    sbit  TXB0D44_bit at TXB0D4.B4;
    const register unsigned short int TXB0D45 = 5;
    sbit  TXB0D45_bit at TXB0D4.B5;
    const register unsigned short int TXB0D46 = 6;
    sbit  TXB0D46_bit at TXB0D4.B6;
    const register unsigned short int TXB0D47 = 7;
    sbit  TXB0D47_bit at TXB0D4.B7;

    // TXB0D5 bits
    const register unsigned short int TXB0D50 = 0;
    sbit  TXB0D50_bit at TXB0D5.B0;
    const register unsigned short int TXB0D51 = 1;
    sbit  TXB0D51_bit at TXB0D5.B1;
    const register unsigned short int TXB0D52 = 2;
    sbit  TXB0D52_bit at TXB0D5.B2;
    const register unsigned short int TXB0D53 = 3;
    sbit  TXB0D53_bit at TXB0D5.B3;
    const register unsigned short int TXB0D54 = 4;
    sbit  TXB0D54_bit at TXB0D5.B4;
    const register unsigned short int TXB0D55 = 5;
    sbit  TXB0D55_bit at TXB0D5.B5;
    const register unsigned short int TXB0D56 = 6;
    sbit  TXB0D56_bit at TXB0D5.B6;
    const register unsigned short int TXB0D57 = 7;
    sbit  TXB0D57_bit at TXB0D5.B7;

    // TXB0D6 bits
    const register unsigned short int TXB0D60 = 0;
    sbit  TXB0D60_bit at TXB0D6.B0;
    const register unsigned short int TXB0D61 = 1;
    sbit  TXB0D61_bit at TXB0D6.B1;
    const register unsigned short int TXB0D62 = 2;
    sbit  TXB0D62_bit at TXB0D6.B2;
    const register unsigned short int TXB0D63 = 3;
    sbit  TXB0D63_bit at TXB0D6.B3;
    const register unsigned short int TXB0D64 = 4;
    sbit  TXB0D64_bit at TXB0D6.B4;
    const register unsigned short int TXB0D65 = 5;
    sbit  TXB0D65_bit at TXB0D6.B5;
    const register unsigned short int TXB0D66 = 6;
    sbit  TXB0D66_bit at TXB0D6.B6;
    const register unsigned short int TXB0D67 = 7;
    sbit  TXB0D67_bit at TXB0D6.B7;

    // TXB0D7 bits
    const register unsigned short int TXB0D70 = 0;
    sbit  TXB0D70_bit at TXB0D7.B0;
    const register unsigned short int TXB0D71 = 1;
    sbit  TXB0D71_bit at TXB0D7.B1;
    const register unsigned short int TXB0D72 = 2;
    sbit  TXB0D72_bit at TXB0D7.B2;
    const register unsigned short int TXB0D73 = 3;
    sbit  TXB0D73_bit at TXB0D7.B3;
    const register unsigned short int TXB0D74 = 4;
    sbit  TXB0D74_bit at TXB0D7.B4;
    const register unsigned short int TXB0D75 = 5;
    sbit  TXB0D75_bit at TXB0D7.B5;
    const register unsigned short int TXB0D76 = 6;
    sbit  TXB0D76_bit at TXB0D7.B6;
    const register unsigned short int TXB0D77 = 7;
    sbit  TXB0D77_bit at TXB0D7.B7;

    // CANSTATRO2 bits
    sbit  ICODE0_CANSTATRO2_bit at CANSTATRO2.B1;
    sbit  ICODE1_CANSTATRO2_bit at CANSTATRO2.B2;
    sbit  ICODE2_CANSTATRO2_bit at CANSTATRO2.B3;
    sbit  OPMODE0_CANSTATRO2_bit at CANSTATRO2.B5;
    sbit  OPMODE1_CANSTATRO2_bit at CANSTATRO2.B6;
    sbit  OPMODE2_CANSTATRO2_bit at CANSTATRO2.B7;

    // RXB1CON bits
    const register unsigned short int FILHIT0 = 0;
    sbit  FILHIT0_bit at RXB1CON.B0;
    const register unsigned short int FILHIT1 = 1;
    sbit  FILHIT1_bit at RXB1CON.B1;
    const register unsigned short int FILHIT2 = 2;
    sbit  FILHIT2_bit at RXB1CON.B2;
    const register unsigned short int RXRTRRO = 3;
    sbit  RXRTRRO_bit at RXB1CON.B3;
    const register unsigned short int RXM0 = 5;
    sbit  RXM0_bit at RXB1CON.B5;
    const register unsigned short int RXM1 = 6;
    sbit  RXM1_bit at RXB1CON.B6;
    const register unsigned short int RXFUL = 7;
    sbit  RXFUL_bit at RXB1CON.B7;

    // RXB1SIDH bits
    sbit  SID3_RXB1SIDH_bit at RXB1SIDH.B0;
    sbit  SID4_RXB1SIDH_bit at RXB1SIDH.B1;
    sbit  SID5_RXB1SIDH_bit at RXB1SIDH.B2;
    sbit  SID6_RXB1SIDH_bit at RXB1SIDH.B3;
    sbit  SID7_RXB1SIDH_bit at RXB1SIDH.B4;
    sbit  SID8_RXB1SIDH_bit at RXB1SIDH.B5;
    sbit  SID9_RXB1SIDH_bit at RXB1SIDH.B6;
    sbit  SID10_RXB1SIDH_bit at RXB1SIDH.B7;

    // RXB1SIDL bits
    sbit  EID16_RXB1SIDL_bit at RXB1SIDL.B0;
    sbit  EID17_RXB1SIDL_bit at RXB1SIDL.B1;
    const register unsigned short int EXID = 3;
    sbit  EXID_bit at RXB1SIDL.B3;
    const register unsigned short int SRR = 4;
    sbit  SRR_bit at RXB1SIDL.B4;
    sbit  SID0_RXB1SIDL_bit at RXB1SIDL.B5;
    sbit  SID1_RXB1SIDL_bit at RXB1SIDL.B6;
    sbit  SID2_RXB1SIDL_bit at RXB1SIDL.B7;

    // RXB1EIDH bits
    sbit  EID8_RXB1EIDH_bit at RXB1EIDH.B0;
    sbit  EID9_RXB1EIDH_bit at RXB1EIDH.B1;
    sbit  EID10_RXB1EIDH_bit at RXB1EIDH.B2;
    sbit  EID11_RXB1EIDH_bit at RXB1EIDH.B3;
    sbit  EID12_RXB1EIDH_bit at RXB1EIDH.B4;
    sbit  EID13_RXB1EIDH_bit at RXB1EIDH.B5;
    sbit  EID14_RXB1EIDH_bit at RXB1EIDH.B6;
    sbit  EID15_RXB1EIDH_bit at RXB1EIDH.B7;

    // RXB1EIDL bits
    sbit  EID0_RXB1EIDL_bit at RXB1EIDL.B0;
    sbit  EID1_RXB1EIDL_bit at RXB1EIDL.B1;
    sbit  EID2_RXB1EIDL_bit at RXB1EIDL.B2;
    sbit  EID3_RXB1EIDL_bit at RXB1EIDL.B3;
    sbit  EID4_RXB1EIDL_bit at RXB1EIDL.B4;
    sbit  EID5_RXB1EIDL_bit at RXB1EIDL.B5;
    sbit  EID6_RXB1EIDL_bit at RXB1EIDL.B6;
    sbit  EID7_RXB1EIDL_bit at RXB1EIDL.B7;

    // RXB1DLC bits
    sbit  DLC0_RXB1DLC_bit at RXB1DLC.B0;
    sbit  DLC1_RXB1DLC_bit at RXB1DLC.B1;
    sbit  DLC2_RXB1DLC_bit at RXB1DLC.B2;
    sbit  DLC3_RXB1DLC_bit at RXB1DLC.B3;
    const register unsigned short int RB0_RXB1DLC = 4;
    sbit  RB0_RXB1DLC_bit at RXB1DLC.B4;
    const register unsigned short int RB1_RXB1DLC = 5;
    sbit  RB1_RXB1DLC_bit at RXB1DLC.B5;
    const register unsigned short int RXRTR = 6;
    sbit  RXRTR_bit at RXB1DLC.B6;
    const register unsigned short int RESB0 = 4;
    sbit  RESB0_bit at RXB1DLC.B4;
    const register unsigned short int RESB1 = 5;
    sbit  RESB1_bit at RXB1DLC.B5;

    // RXB1D0 bits
    const register unsigned short int RXB1D00 = 0;
    sbit  RXB1D00_bit at RXB1D0.B0;
    const register unsigned short int RXB1D01 = 1;
    sbit  RXB1D01_bit at RXB1D0.B1;
    const register unsigned short int RXB1D02 = 2;
    sbit  RXB1D02_bit at RXB1D0.B2;
    const register unsigned short int RXB1D03 = 3;
    sbit  RXB1D03_bit at RXB1D0.B3;
    const register unsigned short int RXB1D04 = 4;
    sbit  RXB1D04_bit at RXB1D0.B4;
    const register unsigned short int RXB1D05 = 5;
    sbit  RXB1D05_bit at RXB1D0.B5;
    const register unsigned short int RXB1D06 = 6;
    sbit  RXB1D06_bit at RXB1D0.B6;
    const register unsigned short int RXB1D07 = 7;
    sbit  RXB1D07_bit at RXB1D0.B7;

    // RXB1D1 bits
    const register unsigned short int RXB1D10 = 0;
    sbit  RXB1D10_bit at RXB1D1.B0;
    const register unsigned short int RXB1D11 = 1;
    sbit  RXB1D11_bit at RXB1D1.B1;
    const register unsigned short int RXB1D12 = 2;
    sbit  RXB1D12_bit at RXB1D1.B2;
    const register unsigned short int RXB1D13 = 3;
    sbit  RXB1D13_bit at RXB1D1.B3;
    const register unsigned short int RXB1D14 = 4;
    sbit  RXB1D14_bit at RXB1D1.B4;
    const register unsigned short int RXB1D15 = 5;
    sbit  RXB1D15_bit at RXB1D1.B5;
    const register unsigned short int RXB1D16 = 6;
    sbit  RXB1D16_bit at RXB1D1.B6;
    const register unsigned short int RXB1D17 = 7;
    sbit  RXB1D17_bit at RXB1D1.B7;

    // RXB1D2 bits
    const register unsigned short int RXB1D20 = 0;
    sbit  RXB1D20_bit at RXB1D2.B0;
    const register unsigned short int RXB1D21 = 1;
    sbit  RXB1D21_bit at RXB1D2.B1;
    const register unsigned short int RXB1D22 = 2;
    sbit  RXB1D22_bit at RXB1D2.B2;
    const register unsigned short int RXB1D23 = 3;
    sbit  RXB1D23_bit at RXB1D2.B3;
    const register unsigned short int RXB1D24 = 4;
    sbit  RXB1D24_bit at RXB1D2.B4;
    const register unsigned short int RXB1D25 = 5;
    sbit  RXB1D25_bit at RXB1D2.B5;
    const register unsigned short int RXB1D26 = 6;
    sbit  RXB1D26_bit at RXB1D2.B6;
    const register unsigned short int RXB1D27 = 7;
    sbit  RXB1D27_bit at RXB1D2.B7;

    // RXB1D3 bits
    const register unsigned short int RXB1D30 = 0;
    sbit  RXB1D30_bit at RXB1D3.B0;
    const register unsigned short int RXB1D31 = 1;
    sbit  RXB1D31_bit at RXB1D3.B1;
    const register unsigned short int RXB1D32 = 2;
    sbit  RXB1D32_bit at RXB1D3.B2;
    const register unsigned short int RXB1D33 = 3;
    sbit  RXB1D33_bit at RXB1D3.B3;
    const register unsigned short int RXB1D34 = 4;
    sbit  RXB1D34_bit at RXB1D3.B4;
    const register unsigned short int RXB1D35 = 5;
    sbit  RXB1D35_bit at RXB1D3.B5;
    const register unsigned short int RXB1D36 = 6;
    sbit  RXB1D36_bit at RXB1D3.B6;
    const register unsigned short int RXB1D37 = 7;
    sbit  RXB1D37_bit at RXB1D3.B7;

    // RXB1D4 bits
    const register unsigned short int RXB1D40 = 0;
    sbit  RXB1D40_bit at RXB1D4.B0;
    const register unsigned short int RXB1D41 = 1;
    sbit  RXB1D41_bit at RXB1D4.B1;
    const register unsigned short int RXB1D42 = 2;
    sbit  RXB1D42_bit at RXB1D4.B2;
    const register unsigned short int RXB1D43 = 3;
    sbit  RXB1D43_bit at RXB1D4.B3;
    const register unsigned short int RXB1D44 = 4;
    sbit  RXB1D44_bit at RXB1D4.B4;
    const register unsigned short int RXB1D45 = 5;
    sbit  RXB1D45_bit at RXB1D4.B5;
    const register unsigned short int RXB1D46 = 6;
    sbit  RXB1D46_bit at RXB1D4.B6;
    const register unsigned short int RXB1D47 = 7;
    sbit  RXB1D47_bit at RXB1D4.B7;

    // RXB1D5 bits
    const register unsigned short int RXB1D50 = 0;
    sbit  RXB1D50_bit at RXB1D5.B0;
    const register unsigned short int RXB1D51 = 1;
    sbit  RXB1D51_bit at RXB1D5.B1;
    const register unsigned short int RXB1D52 = 2;
    sbit  RXB1D52_bit at RXB1D5.B2;
    const register unsigned short int RXB1D53 = 3;
    sbit  RXB1D53_bit at RXB1D5.B3;
    const register unsigned short int RXB1D54 = 4;
    sbit  RXB1D54_bit at RXB1D5.B4;
    const register unsigned short int RXB1D55 = 5;
    sbit  RXB1D55_bit at RXB1D5.B5;
    const register unsigned short int RXB1D56 = 6;
    sbit  RXB1D56_bit at RXB1D5.B6;
    const register unsigned short int RXB1D57 = 7;
    sbit  RXB1D57_bit at RXB1D5.B7;

    // RXB1D6 bits
    const register unsigned short int RXB1D60 = 0;
    sbit  RXB1D60_bit at RXB1D6.B0;
    const register unsigned short int RXB1D61 = 1;
    sbit  RXB1D61_bit at RXB1D6.B1;
    const register unsigned short int RXB1D62 = 2;
    sbit  RXB1D62_bit at RXB1D6.B2;
    const register unsigned short int RXB1D63 = 3;
    sbit  RXB1D63_bit at RXB1D6.B3;
    const register unsigned short int RXB1D64 = 4;
    sbit  RXB1D64_bit at RXB1D6.B4;
    const register unsigned short int RXB1D65 = 5;
    sbit  RXB1D65_bit at RXB1D6.B5;
    const register unsigned short int RXB1D66 = 6;
    sbit  RXB1D66_bit at RXB1D6.B6;
    const register unsigned short int RXB1D67 = 7;
    sbit  RXB1D67_bit at RXB1D6.B7;

    // RXB1D7 bits
    const register unsigned short int RXB1D70 = 0;
    sbit  RXB1D70_bit at RXB1D7.B0;
    const register unsigned short int RXB1D71 = 1;
    sbit  RXB1D71_bit at RXB1D7.B1;
    const register unsigned short int RXB1D72 = 2;
    sbit  RXB1D72_bit at RXB1D7.B2;
    const register unsigned short int RXB1D73 = 3;
    sbit  RXB1D73_bit at RXB1D7.B3;
    const register unsigned short int RXB1D74 = 4;
    sbit  RXB1D74_bit at RXB1D7.B4;
    const register unsigned short int RXB1D75 = 5;
    sbit  RXB1D75_bit at RXB1D7.B5;
    const register unsigned short int RXB1D76 = 6;
    sbit  RXB1D76_bit at RXB1D7.B6;
    const register unsigned short int RXB1D77 = 7;
    sbit  RXB1D77_bit at RXB1D7.B7;

    // CANSTATRO1 bits
    sbit  ICODE0_CANSTATRO1_bit at CANSTATRO1.B1;
    sbit  ICODE1_CANSTATRO1_bit at CANSTATRO1.B2;
    sbit  ICODE2_CANSTATRO1_bit at CANSTATRO1.B3;
    sbit  OPMODE0_CANSTATRO1_bit at CANSTATRO1.B5;
    sbit  OPMODE1_CANSTATRO1_bit at CANSTATRO1.B6;
    sbit  OPMODE2_CANSTATRO1_bit at CANSTATRO1.B7;

    // RXB0CON bits
    sbit  FILHIT0_RXB0CON_bit at RXB0CON.B0;
    const register unsigned short int JTOFF = 1;
    sbit  JTOFF_bit at RXB0CON.B1;
    const register unsigned short int RXB0DBEN = 2;
    sbit  RXB0DBEN_bit at RXB0CON.B2;
    sbit  RXRTRRO_RXB0CON_bit at RXB0CON.B3;
    sbit  RXM0_RXB0CON_bit at RXB0CON.B5;
    sbit  RXM1_RXB0CON_bit at RXB0CON.B6;
    sbit  RXFUL_RXB0CON_bit at RXB0CON.B7;

    // RXB0SIDH bits
    sbit  SID3_RXB0SIDH_bit at RXB0SIDH.B0;
    sbit  SID4_RXB0SIDH_bit at RXB0SIDH.B1;
    sbit  SID5_RXB0SIDH_bit at RXB0SIDH.B2;
    sbit  SID6_RXB0SIDH_bit at RXB0SIDH.B3;
    sbit  SID7_RXB0SIDH_bit at RXB0SIDH.B4;
    sbit  SID8_RXB0SIDH_bit at RXB0SIDH.B5;
    sbit  SID9_RXB0SIDH_bit at RXB0SIDH.B6;
    sbit  SID10_RXB0SIDH_bit at RXB0SIDH.B7;

    // RXB0SIDL bits
    sbit  EID16_RXB0SIDL_bit at RXB0SIDL.B0;
    sbit  EID17_RXB0SIDL_bit at RXB0SIDL.B1;
    sbit  EXID_RXB0SIDL_bit at RXB0SIDL.B3;
    sbit  SRR_RXB0SIDL_bit at RXB0SIDL.B4;
    sbit  SID0_RXB0SIDL_bit at RXB0SIDL.B5;
    sbit  SID1_RXB0SIDL_bit at RXB0SIDL.B6;
    sbit  SID2_RXB0SIDL_bit at RXB0SIDL.B7;

    // RXB0EIDH bits
    sbit  EID8_RXB0EIDH_bit at RXB0EIDH.B0;
    sbit  EID9_RXB0EIDH_bit at RXB0EIDH.B1;
    sbit  EID10_RXB0EIDH_bit at RXB0EIDH.B2;
    sbit  EID11_RXB0EIDH_bit at RXB0EIDH.B3;
    sbit  EID12_RXB0EIDH_bit at RXB0EIDH.B4;
    sbit  EID13_RXB0EIDH_bit at RXB0EIDH.B5;
    sbit  EID14_RXB0EIDH_bit at RXB0EIDH.B6;
    sbit  EID15_RXB0EIDH_bit at RXB0EIDH.B7;

    // RXB0EIDL bits
    sbit  EID0_RXB0EIDL_bit at RXB0EIDL.B0;
    sbit  EID1_RXB0EIDL_bit at RXB0EIDL.B1;
    sbit  EID2_RXB0EIDL_bit at RXB0EIDL.B2;
    sbit  EID3_RXB0EIDL_bit at RXB0EIDL.B3;
    sbit  EID4_RXB0EIDL_bit at RXB0EIDL.B4;
    sbit  EID5_RXB0EIDL_bit at RXB0EIDL.B5;
    sbit  EID6_RXB0EIDL_bit at RXB0EIDL.B6;
    sbit  EID7_RXB0EIDL_bit at RXB0EIDL.B7;

    // RXB0DLC bits
    sbit  DLC0_RXB0DLC_bit at RXB0DLC.B0;
    sbit  DLC1_RXB0DLC_bit at RXB0DLC.B1;
    sbit  DLC2_RXB0DLC_bit at RXB0DLC.B2;
    sbit  DLC3_RXB0DLC_bit at RXB0DLC.B3;
    const register unsigned short int RB0_RXB0DLC = 4;
    sbit  RB0_RXB0DLC_bit at RXB0DLC.B4;
    const register unsigned short int RB1_RXB0DLC = 5;
    sbit  RB1_RXB0DLC_bit at RXB0DLC.B5;
    sbit  RXRTR_RXB0DLC_bit at RXB0DLC.B6;
    sbit  RESB0_RXB0DLC_bit at RXB0DLC.B4;
    sbit  RESB1_RXB0DLC_bit at RXB0DLC.B5;

    // RXB0D0 bits
    const register unsigned short int RXB0D00 = 0;
    sbit  RXB0D00_bit at RXB0D0.B0;
    const register unsigned short int RXB0D01 = 1;
    sbit  RXB0D01_bit at RXB0D0.B1;
    const register unsigned short int RXB0D02 = 2;
    sbit  RXB0D02_bit at RXB0D0.B2;
    const register unsigned short int RXB0D03 = 3;
    sbit  RXB0D03_bit at RXB0D0.B3;
    const register unsigned short int RXB0D04 = 4;
    sbit  RXB0D04_bit at RXB0D0.B4;
    const register unsigned short int RXB0D05 = 5;
    sbit  RXB0D05_bit at RXB0D0.B5;
    const register unsigned short int RXB0D06 = 6;
    sbit  RXB0D06_bit at RXB0D0.B6;
    const register unsigned short int RXB0D07 = 7;
    sbit  RXB0D07_bit at RXB0D0.B7;
    const register unsigned short int RB0D00 = 0;
    sbit  RB0D00_bit at RXB0D0.B0;
    const register unsigned short int RB0D01 = 1;
    sbit  RB0D01_bit at RXB0D0.B1;
    const register unsigned short int RB0D02 = 2;
    sbit  RB0D02_bit at RXB0D0.B2;
    const register unsigned short int RB0D03 = 3;
    sbit  RB0D03_bit at RXB0D0.B3;
    const register unsigned short int RB0D04 = 4;
    sbit  RB0D04_bit at RXB0D0.B4;
    const register unsigned short int RB0D05 = 5;
    sbit  RB0D05_bit at RXB0D0.B5;
    const register unsigned short int RB0D06 = 6;
    sbit  RB0D06_bit at RXB0D0.B6;
    const register unsigned short int RB0D07 = 7;
    sbit  RB0D07_bit at RXB0D0.B7;

    // RXB0D1 bits
    const register unsigned short int RXB0D10 = 0;
    sbit  RXB0D10_bit at RXB0D1.B0;
    const register unsigned short int RXB0D11 = 1;
    sbit  RXB0D11_bit at RXB0D1.B1;
    const register unsigned short int RXB0D12 = 2;
    sbit  RXB0D12_bit at RXB0D1.B2;
    const register unsigned short int RXB0D13 = 3;
    sbit  RXB0D13_bit at RXB0D1.B3;
    const register unsigned short int RXB0D14 = 4;
    sbit  RXB0D14_bit at RXB0D1.B4;
    const register unsigned short int RXB0D15 = 5;
    sbit  RXB0D15_bit at RXB0D1.B5;
    const register unsigned short int RXB0D16 = 6;
    sbit  RXB0D16_bit at RXB0D1.B6;
    const register unsigned short int RXB0D17 = 7;
    sbit  RXB0D17_bit at RXB0D1.B7;
    const register unsigned short int RB0D10 = 0;
    sbit  RB0D10_bit at RXB0D1.B0;
    const register unsigned short int RB0D11 = 1;
    sbit  RB0D11_bit at RXB0D1.B1;
    const register unsigned short int RB0D12 = 2;
    sbit  RB0D12_bit at RXB0D1.B2;
    const register unsigned short int RB0D13 = 3;
    sbit  RB0D13_bit at RXB0D1.B3;
    const register unsigned short int RB0D14 = 4;
    sbit  RB0D14_bit at RXB0D1.B4;
    const register unsigned short int RB0D15 = 5;
    sbit  RB0D15_bit at RXB0D1.B5;
    const register unsigned short int RB0D16 = 6;
    sbit  RB0D16_bit at RXB0D1.B6;
    const register unsigned short int RB0D17 = 7;
    sbit  RB0D17_bit at RXB0D1.B7;

    // RXB0D2 bits
    const register unsigned short int RXB0D20 = 0;
    sbit  RXB0D20_bit at RXB0D2.B0;
    const register unsigned short int RXB0D21 = 1;
    sbit  RXB0D21_bit at RXB0D2.B1;
    const register unsigned short int RXB0D22 = 2;
    sbit  RXB0D22_bit at RXB0D2.B2;
    const register unsigned short int RXB0D23 = 3;
    sbit  RXB0D23_bit at RXB0D2.B3;
    const register unsigned short int RXB0D24 = 4;
    sbit  RXB0D24_bit at RXB0D2.B4;
    const register unsigned short int RXB0D25 = 5;
    sbit  RXB0D25_bit at RXB0D2.B5;
    const register unsigned short int RXB0D26 = 6;
    sbit  RXB0D26_bit at RXB0D2.B6;
    const register unsigned short int RXB0D27 = 7;
    sbit  RXB0D27_bit at RXB0D2.B7;
    const register unsigned short int RB0D20 = 0;
    sbit  RB0D20_bit at RXB0D2.B0;
    const register unsigned short int RB0D21 = 1;
    sbit  RB0D21_bit at RXB0D2.B1;
    const register unsigned short int RB0D22 = 2;
    sbit  RB0D22_bit at RXB0D2.B2;
    const register unsigned short int RB0D23 = 3;
    sbit  RB0D23_bit at RXB0D2.B3;
    const register unsigned short int RB0D24 = 4;
    sbit  RB0D24_bit at RXB0D2.B4;
    const register unsigned short int RB0D25 = 5;
    sbit  RB0D25_bit at RXB0D2.B5;
    const register unsigned short int RB0D26 = 6;
    sbit  RB0D26_bit at RXB0D2.B6;
    const register unsigned short int RB0D27 = 7;
    sbit  RB0D27_bit at RXB0D2.B7;

    // RXB0D3 bits
    const register unsigned short int RXB0D30 = 0;
    sbit  RXB0D30_bit at RXB0D3.B0;
    const register unsigned short int RXB0D31 = 1;
    sbit  RXB0D31_bit at RXB0D3.B1;
    const register unsigned short int RXB0D32 = 2;
    sbit  RXB0D32_bit at RXB0D3.B2;
    const register unsigned short int RXB0D33 = 3;
    sbit  RXB0D33_bit at RXB0D3.B3;
    const register unsigned short int RXB0D34 = 4;
    sbit  RXB0D34_bit at RXB0D3.B4;
    const register unsigned short int RXB0D35 = 5;
    sbit  RXB0D35_bit at RXB0D3.B5;
    const register unsigned short int RXB0D36 = 6;
    sbit  RXB0D36_bit at RXB0D3.B6;
    const register unsigned short int RXB0D37 = 7;
    sbit  RXB0D37_bit at RXB0D3.B7;
    const register unsigned short int RB0D30 = 0;
    sbit  RB0D30_bit at RXB0D3.B0;
    const register unsigned short int RB0D31 = 1;
    sbit  RB0D31_bit at RXB0D3.B1;
    const register unsigned short int RB0D32 = 2;
    sbit  RB0D32_bit at RXB0D3.B2;
    const register unsigned short int RB0D33 = 3;
    sbit  RB0D33_bit at RXB0D3.B3;
    const register unsigned short int RB0D34 = 4;
    sbit  RB0D34_bit at RXB0D3.B4;
    const register unsigned short int RB0D35 = 5;
    sbit  RB0D35_bit at RXB0D3.B5;
    const register unsigned short int RB0D36 = 6;
    sbit  RB0D36_bit at RXB0D3.B6;
    const register unsigned short int RB0D37 = 7;
    sbit  RB0D37_bit at RXB0D3.B7;

    // RXB0D4 bits
    const register unsigned short int RXB0D40 = 0;
    sbit  RXB0D40_bit at RXB0D4.B0;
    const register unsigned short int RXB0D41 = 1;
    sbit  RXB0D41_bit at RXB0D4.B1;
    const register unsigned short int RXB0D42 = 2;
    sbit  RXB0D42_bit at RXB0D4.B2;
    const register unsigned short int RXB0D43 = 3;
    sbit  RXB0D43_bit at RXB0D4.B3;
    const register unsigned short int RXB0D44 = 4;
    sbit  RXB0D44_bit at RXB0D4.B4;
    const register unsigned short int RXB0D45 = 5;
    sbit  RXB0D45_bit at RXB0D4.B5;
    const register unsigned short int RXB0D46 = 6;
    sbit  RXB0D46_bit at RXB0D4.B6;
    const register unsigned short int RXB0D47 = 7;
    sbit  RXB0D47_bit at RXB0D4.B7;
    const register unsigned short int RB0D40 = 0;
    sbit  RB0D40_bit at RXB0D4.B0;
    const register unsigned short int RB0D41 = 1;
    sbit  RB0D41_bit at RXB0D4.B1;
    const register unsigned short int RB0D42 = 2;
    sbit  RB0D42_bit at RXB0D4.B2;
    const register unsigned short int RB0D43 = 3;
    sbit  RB0D43_bit at RXB0D4.B3;
    const register unsigned short int RB0D44 = 4;
    sbit  RB0D44_bit at RXB0D4.B4;
    const register unsigned short int RB0D45 = 5;
    sbit  RB0D45_bit at RXB0D4.B5;
    const register unsigned short int RB0D46 = 6;
    sbit  RB0D46_bit at RXB0D4.B6;
    const register unsigned short int RB0D47 = 7;
    sbit  RB0D47_bit at RXB0D4.B7;

    // RXB0D5 bits
    const register unsigned short int RXB0D50 = 0;
    sbit  RXB0D50_bit at RXB0D5.B0;
    const register unsigned short int RXB0D51 = 1;
    sbit  RXB0D51_bit at RXB0D5.B1;
    const register unsigned short int RXB0D52 = 2;
    sbit  RXB0D52_bit at RXB0D5.B2;
    const register unsigned short int RXB0D53 = 3;
    sbit  RXB0D53_bit at RXB0D5.B3;
    const register unsigned short int RXB0D54 = 4;
    sbit  RXB0D54_bit at RXB0D5.B4;
    const register unsigned short int RXB0D55 = 5;
    sbit  RXB0D55_bit at RXB0D5.B5;
    const register unsigned short int RXB0D56 = 6;
    sbit  RXB0D56_bit at RXB0D5.B6;
    const register unsigned short int RXB0D57 = 7;
    sbit  RXB0D57_bit at RXB0D5.B7;
    const register unsigned short int RB0D50 = 0;
    sbit  RB0D50_bit at RXB0D5.B0;
    const register unsigned short int RB0D51 = 1;
    sbit  RB0D51_bit at RXB0D5.B1;
    const register unsigned short int RB0D52 = 2;
    sbit  RB0D52_bit at RXB0D5.B2;
    const register unsigned short int RB0D53 = 3;
    sbit  RB0D53_bit at RXB0D5.B3;
    const register unsigned short int RB0D54 = 4;
    sbit  RB0D54_bit at RXB0D5.B4;
    const register unsigned short int RB0D55 = 5;
    sbit  RB0D55_bit at RXB0D5.B5;
    const register unsigned short int RB0D56 = 6;
    sbit  RB0D56_bit at RXB0D5.B6;
    const register unsigned short int RB0D57 = 7;
    sbit  RB0D57_bit at RXB0D5.B7;

    // RXB0D6 bits
    const register unsigned short int RXB0D60 = 0;
    sbit  RXB0D60_bit at RXB0D6.B0;
    const register unsigned short int RXB0D61 = 1;
    sbit  RXB0D61_bit at RXB0D6.B1;
    const register unsigned short int RXB0D62 = 2;
    sbit  RXB0D62_bit at RXB0D6.B2;
    const register unsigned short int RXB0D63 = 3;
    sbit  RXB0D63_bit at RXB0D6.B3;
    const register unsigned short int RXB0D64 = 4;
    sbit  RXB0D64_bit at RXB0D6.B4;
    const register unsigned short int RXB0D65 = 5;
    sbit  RXB0D65_bit at RXB0D6.B5;
    const register unsigned short int RXB0D66 = 6;
    sbit  RXB0D66_bit at RXB0D6.B6;
    const register unsigned short int RXB0D67 = 7;
    sbit  RXB0D67_bit at RXB0D6.B7;
    const register unsigned short int RB0D60 = 0;
    sbit  RB0D60_bit at RXB0D6.B0;
    const register unsigned short int RB0D61 = 1;
    sbit  RB0D61_bit at RXB0D6.B1;
    const register unsigned short int RB0D62 = 2;
    sbit  RB0D62_bit at RXB0D6.B2;
    const register unsigned short int RB0D63 = 3;
    sbit  RB0D63_bit at RXB0D6.B3;
    const register unsigned short int RB0D64 = 4;
    sbit  RB0D64_bit at RXB0D6.B4;
    const register unsigned short int RB0D65 = 5;
    sbit  RB0D65_bit at RXB0D6.B5;
    const register unsigned short int RB0D66 = 6;
    sbit  RB0D66_bit at RXB0D6.B6;
    const register unsigned short int RB0D67 = 7;
    sbit  RB0D67_bit at RXB0D6.B7;

    // RXB0D7 bits
    const register unsigned short int RXB0D70 = 0;
    sbit  RXB0D70_bit at RXB0D7.B0;
    const register unsigned short int RXB0D71 = 1;
    sbit  RXB0D71_bit at RXB0D7.B1;
    const register unsigned short int RXB0D72 = 2;
    sbit  RXB0D72_bit at RXB0D7.B2;
    const register unsigned short int RXB0D73 = 3;
    sbit  RXB0D73_bit at RXB0D7.B3;
    const register unsigned short int RXB0D74 = 4;
    sbit  RXB0D74_bit at RXB0D7.B4;
    const register unsigned short int RXB0D75 = 5;
    sbit  RXB0D75_bit at RXB0D7.B5;
    const register unsigned short int RXB0D76 = 6;
    sbit  RXB0D76_bit at RXB0D7.B6;
    const register unsigned short int RXB0D77 = 7;
    sbit  RXB0D77_bit at RXB0D7.B7;
    const register unsigned short int RB0D70 = 0;
    sbit  RB0D70_bit at RXB0D7.B0;
    const register unsigned short int RB0D71 = 1;
    sbit  RB0D71_bit at RXB0D7.B1;
    const register unsigned short int RB0D72 = 2;
    sbit  RB0D72_bit at RXB0D7.B2;
    const register unsigned short int RB0D73 = 3;
    sbit  RB0D73_bit at RXB0D7.B3;
    const register unsigned short int RB0D74 = 4;
    sbit  RB0D74_bit at RXB0D7.B4;
    const register unsigned short int RB0D75 = 5;
    sbit  RB0D75_bit at RXB0D7.B5;
    const register unsigned short int RB0D76 = 6;
    sbit  RB0D76_bit at RXB0D7.B6;
    const register unsigned short int RB0D77 = 7;
    sbit  RB0D77_bit at RXB0D7.B7;

    // CANSTAT bits
    sbit  ICODE0_CANSTAT_bit at CANSTAT.B1;
    sbit  ICODE1_CANSTAT_bit at CANSTAT.B2;
    sbit  ICODE2_CANSTAT_bit at CANSTAT.B3;
    sbit  OPMODE0_CANSTAT_bit at CANSTAT.B5;
    sbit  OPMODE1_CANSTAT_bit at CANSTAT.B6;
    sbit  OPMODE2_CANSTAT_bit at CANSTAT.B7;

    // CANCON bits
    const register unsigned short int WIN0 = 1;
    sbit  WIN0_bit at CANCON.B1;
    const register unsigned short int WIN1 = 2;
    sbit  WIN1_bit at CANCON.B2;
    const register unsigned short int WIN2 = 3;
    sbit  WIN2_bit at CANCON.B3;
    const register unsigned short int ABAT = 4;
    sbit  ABAT_bit at CANCON.B4;
    const register unsigned short int REQOP0 = 5;
    sbit  REQOP0_bit at CANCON.B5;
    const register unsigned short int REQOP1 = 6;
    sbit  REQOP1_bit at CANCON.B6;
    const register unsigned short int REQOP2 = 7;
    sbit  REQOP2_bit at CANCON.B7;

    // BRGCON1 bits
    const register unsigned short int BRP0 = 0;
    sbit  BRP0_bit at BRGCON1.B0;
    const register unsigned short int BRP1 = 1;
    sbit  BRP1_bit at BRGCON1.B1;
    const register unsigned short int BRP2 = 2;
    sbit  BRP2_bit at BRGCON1.B2;
    const register unsigned short int BRP3 = 3;
    sbit  BRP3_bit at BRGCON1.B3;
    const register unsigned short int BRP4 = 4;
    sbit  BRP4_bit at BRGCON1.B4;
    const register unsigned short int BRP5 = 5;
    sbit  BRP5_bit at BRGCON1.B5;
    const register unsigned short int SJW0 = 6;
    sbit  SJW0_bit at BRGCON1.B6;
    const register unsigned short int SJW1 = 7;
    sbit  SJW1_bit at BRGCON1.B7;

    // BRGCON2 bits
    const register unsigned short int PRSEG0 = 0;
    sbit  PRSEG0_bit at BRGCON2.B0;
    const register unsigned short int PRSEG1 = 1;
    sbit  PRSEG1_bit at BRGCON2.B1;
    const register unsigned short int PRSEG2 = 2;
    sbit  PRSEG2_bit at BRGCON2.B2;
    const register unsigned short int SEG1PH0 = 3;
    sbit  SEG1PH0_bit at BRGCON2.B3;
    const register unsigned short int SEG1PH1 = 4;
    sbit  SEG1PH1_bit at BRGCON2.B4;
    const register unsigned short int SEG1PH2 = 5;
    sbit  SEG1PH2_bit at BRGCON2.B5;
    const register unsigned short int SAM = 6;
    sbit  SAM_bit at BRGCON2.B6;
    const register unsigned short int SEG2PHTS = 7;
    sbit  SEG2PHTS_bit at BRGCON2.B7;

    // BRGCON3 bits
    const register unsigned short int SEG2PH0 = 0;
    sbit  SEG2PH0_bit at BRGCON3.B0;
    const register unsigned short int SEG2PH1 = 1;
    sbit  SEG2PH1_bit at BRGCON3.B1;
    const register unsigned short int SEG2PH2 = 2;
    sbit  SEG2PH2_bit at BRGCON3.B2;
    const register unsigned short int WAKFIL = 6;
    sbit  WAKFIL_bit at BRGCON3.B6;

    // CIOCON bits
    const register unsigned short int CANCAP = 4;
    sbit  CANCAP_bit at CIOCON.B4;
    const register unsigned short int ENDRHI = 5;
    sbit  ENDRHI_bit at CIOCON.B5;

    // COMSTAT bits
    const register unsigned short int EWARN = 0;
    sbit  EWARN_bit at COMSTAT.B0;
    const register unsigned short int RXWARN = 1;
    sbit  RXWARN_bit at COMSTAT.B1;
    const register unsigned short int TXWARN = 2;
    sbit  TXWARN_bit at COMSTAT.B2;
    const register unsigned short int RXBP = 3;
    sbit  RXBP_bit at COMSTAT.B3;
    const register unsigned short int TXBP = 4;
    sbit  TXBP_bit at COMSTAT.B4;
    const register unsigned short int TXBO = 5;
    sbit  TXBO_bit at COMSTAT.B5;
    const register unsigned short int RXB1OVFL = 6;
    sbit  RXB1OVFL_bit at COMSTAT.B6;
    const register unsigned short int RXB0OVFL = 7;
    sbit  RXB0OVFL_bit at COMSTAT.B7;
    const register unsigned short int RX2OVFL = 6;
    sbit  RX2OVFL_bit at COMSTAT.B6;
    const register unsigned short int RX1OVFL = 7;
    sbit  RX1OVFL_bit at COMSTAT.B7;

    // RXERRCNT bits
    const register unsigned short int REC0 = 0;
    sbit  REC0_bit at RXERRCNT.B0;
    const register unsigned short int REC1 = 1;
    sbit  REC1_bit at RXERRCNT.B1;
    const register unsigned short int REC2 = 2;
    sbit  REC2_bit at RXERRCNT.B2;
    const register unsigned short int REC3 = 3;
    sbit  REC3_bit at RXERRCNT.B3;
    const register unsigned short int REC4 = 4;
    sbit  REC4_bit at RXERRCNT.B4;
    const register unsigned short int REC5 = 5;
    sbit  REC5_bit at RXERRCNT.B5;
    const register unsigned short int REC6 = 6;
    sbit  REC6_bit at RXERRCNT.B6;
    const register unsigned short int REC7 = 7;
    sbit  REC7_bit at RXERRCNT.B7;

    // TXERRCNT bits
    const register unsigned short int TEC0 = 0;
    sbit  TEC0_bit at TXERRCNT.B0;
    const register unsigned short int TEC1 = 1;
    sbit  TEC1_bit at TXERRCNT.B1;
    const register unsigned short int TEC2 = 2;
    sbit  TEC2_bit at TXERRCNT.B2;
    const register unsigned short int TEC3 = 3;
    sbit  TEC3_bit at TXERRCNT.B3;
    const register unsigned short int TEC4 = 4;
    sbit  TEC4_bit at TXERRCNT.B4;
    const register unsigned short int TEC5 = 5;
    sbit  TEC5_bit at TXERRCNT.B5;
    const register unsigned short int TEC6 = 6;
    sbit  TEC6_bit at TXERRCNT.B6;
    const register unsigned short int TEC7 = 7;
    sbit  TEC7_bit at TXERRCNT.B7;

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
    const register unsigned short int AN4 = 5;
    sbit  AN4_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int OSC2 = 6;
    sbit  OSC2_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int CVREF = 0;
    sbit  CVREF_bit at PORTA.B0;

    // Alternative bit function
    const register unsigned short int VREFM = 2;
    sbit  VREFM_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int VREFP = 3;
    sbit  VREFP_bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int T0CKI = 4;
    sbit  T0CKI_bit at PORTA.B4;

    // Alternative bit function
    const register unsigned short int NOT_SS = 5;
    sbit  NOT_SS_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int CLKO = 6;
    sbit  CLKO_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int SS = 5;
    sbit  SS_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int LVDIN = 5;
    sbit  LVDIN_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int RB0_PORTB = 0;
    sbit  RB0_PORTB_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int RB1_PORTB = 1;
    sbit  RB1_PORTB_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int INT0 = 0;
    sbit  INT0_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int INT1 = 1;
    sbit  INT1_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int CANTX = 2;
    sbit  CANTX_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int CANRX = 3;
    sbit  CANRX_bit at PORTB.B3;

    // Alternative bit function
    const register unsigned short int PGM = 5;
    sbit  PGM_bit at PORTB.B5;

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
    const register unsigned short int T1CKI = 0;
    sbit  T1CKI_bit at PORTC.B0;

    // Alternative bit function
    const register unsigned short int CCP1 = 2;
    sbit  CCP1_bit at PORTC.B2;

    // Alternative bit function
    const register unsigned short int SCL = 3;
    sbit  SCL_bit at PORTC.B3;

    // Alternative bit function
    const register unsigned short int SDA = 4;
    sbit  SDA_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int CK = 6;
    sbit  CK_bit at PORTC.B6;

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

    // Alternative bit function
    const register unsigned short int RB0_TRISB = 0;
    sbit  RB0_TRISB_bit at TRISB.B0;

    // Alternative bit function
    const register unsigned short int RB1_TRISB = 1;
    sbit  RB1_TRISB_bit at TRISB.B1;

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

    // IPR1 bits
    const register unsigned short int TMR1IP = 0;
    sbit  TMR1IP_bit at IPR1.B0;
    const register unsigned short int TMR2IP = 1;
    sbit  TMR2IP_bit at IPR1.B1;
    const register unsigned short int CCP1IP = 2;
    sbit  CCP1IP_bit at IPR1.B2;
    const register unsigned short int SSPIP = 3;
    sbit  SSPIP_bit at IPR1.B3;
    const register unsigned short int TXIP = 4;
    sbit  TXIP_bit at IPR1.B4;
    const register unsigned short int RCIP = 5;
    sbit  RCIP_bit at IPR1.B5;
    const register unsigned short int ADIP = 6;
    sbit  ADIP_bit at IPR1.B6;

    // PIE2 bits
    const register unsigned short int TMR3IE = 1;
    sbit  TMR3IE_bit at PIE2.B1;
    const register unsigned short int LVDIE = 2;
    sbit  LVDIE_bit at PIE2.B2;
    const register unsigned short int BCLIE = 3;
    sbit  BCLIE_bit at PIE2.B3;
    const register unsigned short int EEIE = 4;
    sbit  EEIE_bit at PIE2.B4;

    // PIR2 bits
    const register unsigned short int TMR3IF = 1;
    sbit  TMR3IF_bit at PIR2.B1;
    const register unsigned short int LVDIF = 2;
    sbit  LVDIF_bit at PIR2.B2;
    const register unsigned short int BCLIF = 3;
    sbit  BCLIF_bit at PIR2.B3;
    const register unsigned short int EEIF = 4;
    sbit  EEIF_bit at PIR2.B4;

    // IPR2 bits
    const register unsigned short int TMR3IP = 1;
    sbit  TMR3IP_bit at IPR2.B1;
    const register unsigned short int LVDIP = 2;
    sbit  LVDIP_bit at IPR2.B2;
    const register unsigned short int BCLIP = 3;
    sbit  BCLIP_bit at IPR2.B3;
    const register unsigned short int EEIP = 4;
    sbit  EEIP_bit at IPR2.B4;

    // PIE3 bits
    const register unsigned short int RXB0IE = 0;
    sbit  RXB0IE_bit at PIE3.B0;
    const register unsigned short int RXB1IE = 1;
    sbit  RXB1IE_bit at PIE3.B1;
    const register unsigned short int TXB0IE = 2;
    sbit  TXB0IE_bit at PIE3.B2;
    const register unsigned short int TXB1IE = 3;
    sbit  TXB1IE_bit at PIE3.B3;
    const register unsigned short int TXB2IE = 4;
    sbit  TXB2IE_bit at PIE3.B4;
    const register unsigned short int ERRIE = 5;
    sbit  ERRIE_bit at PIE3.B5;
    const register unsigned short int WAKIE = 6;
    sbit  WAKIE_bit at PIE3.B6;
    const register unsigned short int IRXIE = 7;
    sbit  IRXIE_bit at PIE3.B7;
    const register unsigned short int RX0IE = 0;
    sbit  RX0IE_bit at PIE3.B0;
    const register unsigned short int RX1IE = 1;
    sbit  RX1IE_bit at PIE3.B1;
    const register unsigned short int TX0IE = 2;
    sbit  TX0IE_bit at PIE3.B2;
    const register unsigned short int TX1IE = 3;
    sbit  TX1IE_bit at PIE3.B3;
    const register unsigned short int TX2IE = 4;
    sbit  TX2IE_bit at PIE3.B4;
    const register unsigned short int IVRE = 7;
    sbit  IVRE_bit at PIE3.B7;

    // PIR3 bits
    const register unsigned short int RXB0IF = 0;
    sbit  RXB0IF_bit at PIR3.B0;
    const register unsigned short int RXB1IF = 1;
    sbit  RXB1IF_bit at PIR3.B1;
    const register unsigned short int TXB0IF = 2;
    sbit  TXB0IF_bit at PIR3.B2;
    const register unsigned short int TXB1IF = 3;
    sbit  TXB1IF_bit at PIR3.B3;
    const register unsigned short int TXB2IF = 4;
    sbit  TXB2IF_bit at PIR3.B4;
    const register unsigned short int ERRIF = 5;
    sbit  ERRIF_bit at PIR3.B5;
    const register unsigned short int WAKIF = 6;
    sbit  WAKIF_bit at PIR3.B6;
    const register unsigned short int IRXIF = 7;
    sbit  IRXIF_bit at PIR3.B7;
    const register unsigned short int RX0IF = 0;
    sbit  RX0IF_bit at PIR3.B0;
    const register unsigned short int RX1IF = 1;
    sbit  RX1IF_bit at PIR3.B1;
    const register unsigned short int TX0IF = 2;
    sbit  TX0IF_bit at PIR3.B2;
    const register unsigned short int TX1IF = 3;
    sbit  TX1IF_bit at PIR3.B3;
    const register unsigned short int TX2IF = 4;
    sbit  TX2IF_bit at PIR3.B4;
    const register unsigned short int IVRF = 7;
    sbit  IVRF_bit at PIR3.B7;

    // IPR3 bits
    const register unsigned short int RXB0IP = 0;
    sbit  RXB0IP_bit at IPR3.B0;
    const register unsigned short int RXB1IP = 1;
    sbit  RXB1IP_bit at IPR3.B1;
    const register unsigned short int TXB0IP = 2;
    sbit  TXB0IP_bit at IPR3.B2;
    const register unsigned short int TXB1IP = 3;
    sbit  TXB1IP_bit at IPR3.B3;
    const register unsigned short int TXB2IP = 4;
    sbit  TXB2IP_bit at IPR3.B4;
    const register unsigned short int ERRIP = 5;
    sbit  ERRIP_bit at IPR3.B5;
    const register unsigned short int WAKIP = 6;
    sbit  WAKIP_bit at IPR3.B6;
    const register unsigned short int IRXIP = 7;
    sbit  IRXIP_bit at IPR3.B7;
    const register unsigned short int IVRP = 7;
    sbit  IVRP_bit at IPR3.B7;

    // EECON1 bits
    const register unsigned short int RD = 0;
    sbit  RD_bit at EECON1.B0;
    const register unsigned short int WR = 1;
    sbit  WR_bit at EECON1.B1;
    const register unsigned short int WREN = 2;
    sbit  WREN_bit at EECON1.B2;
    const register unsigned short int WRERR = 3;
    sbit  WRERR_bit at EECON1.B3;
    const register unsigned short int FREE = 4;
    sbit  FREE_bit at EECON1.B4;
    const register unsigned short int CFGS = 6;
    sbit  CFGS_bit at EECON1.B6;
    const register unsigned short int EEPGD = 7;
    sbit  EEPGD_bit at EECON1.B7;
    const register unsigned short int EEFS = 6;
    sbit  EEFS_bit at EECON1.B6;

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
    const register unsigned short int RC8_9 = 6;
    sbit  RC8_9_bit at RCSTA.B6;
    const register unsigned short int NOT_RC8 = 6;
    sbit  NOT_RC8_bit at RCSTA.B6;

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
    const register unsigned short int TX8_9 = 6;
    sbit  TX8_9_bit at TXSTA.B6;
    const register unsigned short int NOT_TX8 = 6;
    sbit  NOT_TX8_bit at TXSTA.B6;

    // T3CON bits
    const register unsigned short int TMR3ON = 0;
    sbit  TMR3ON_bit at T3CON.B0;
    const register unsigned short int TMR3CS = 1;
    sbit  TMR3CS_bit at T3CON.B1;
    const register unsigned short int NOT_T3SYNC = 2;
    sbit  NOT_T3SYNC_bit at T3CON.B2;
    const register unsigned short int T3CCP1 = 3;
    sbit  T3CCP1_bit at T3CON.B3;
    const register unsigned short int T3ECCP1 = 6;
    sbit  T3ECCP1_bit at T3CON.B6;
    const register unsigned short int RD16 = 7;
    sbit  RD16_bit at T3CON.B7;
    const register unsigned short int T3INSYNC = 2;
    sbit  T3INSYNC_bit at T3CON.B2;
    const register unsigned short int T3CKPS0 = 4;
    sbit  T3CKPS0_bit at T3CON.B4;
    const register unsigned short int T3CKPS1 = 5;
    sbit  T3CKPS1_bit at T3CON.B5;
    const register unsigned short int T3SYNC = 2;
    sbit  T3SYNC_bit at T3CON.B2;

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

    // ADCON1 bits
    const register unsigned short int ADCS2 = 6;
    sbit  ADCS2_bit at ADCON1.B6;
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

    // ADCON0 bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON0.B0;
    const register unsigned short int GO_NOT_DONE = 2;
    sbit  GO_NOT_DONE_bit at ADCON0.B2;
    const register unsigned short int DONE = 2;
    sbit  DONE_bit at ADCON0.B2;
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
    const register unsigned short int GO_DONE = 2;
    sbit  GO_DONE_bit at ADCON0.B2;
    const register unsigned short int GO = 2;
    sbit  GO_bit at ADCON0.B2;
    const register unsigned short int NOT_DONE = 2;
    sbit  NOT_DONE_bit at ADCON0.B2;

    // SSPCON2 bits
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at SSPCON2.B0;
    const register unsigned short int RSEN = 1;
    sbit  RSEN_bit at SSPCON2.B1;
    const register unsigned short int PEN = 2;
    sbit  PEN_bit at SSPCON2.B2;
    const register unsigned short int RCEN = 3;
    sbit  RCEN_bit at SSPCON2.B3;
    const register unsigned short int ACKEN = 4;
    sbit  ACKEN_bit at SSPCON2.B4;
    const register unsigned short int ACKDT = 5;
    sbit  ACKDT_bit at SSPCON2.B5;
    const register unsigned short int ACKSTAT = 6;
    sbit  ACKSTAT_bit at SSPCON2.B6;
    const register unsigned short int GCEN = 7;
    sbit  GCEN_bit at SSPCON2.B7;

    // SSPCON1 bits
    const register unsigned short int CKP = 4;
    sbit  CKP_bit at SSPCON1.B4;
    const register unsigned short int SSPEN = 5;
    sbit  SSPEN_bit at SSPCON1.B5;
    const register unsigned short int SSPOV = 6;
    sbit  SSPOV_bit at SSPCON1.B6;
    const register unsigned short int WCOL = 7;
    sbit  WCOL_bit at SSPCON1.B7;
    const register unsigned short int SSPM0 = 0;
    sbit  SSPM0_bit at SSPCON1.B0;
    const register unsigned short int SSPM1 = 1;
    sbit  SSPM1_bit at SSPCON1.B1;
    const register unsigned short int SSPM2 = 2;
    sbit  SSPM2_bit at SSPCON1.B2;
    const register unsigned short int SSPM3 = 3;
    sbit  SSPM3_bit at SSPCON1.B3;

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
    const register unsigned short int READ_WRITE = 2;
    sbit  READ_WRITE_bit at SSPSTAT.B2;
    const register unsigned short int DATA_ADDRESS = 5;
    sbit  DATA_ADDRESS_bit at SSPSTAT.B5;
    const register unsigned short int NOT_WRITE = 2;
    sbit  NOT_WRITE_bit at SSPSTAT.B2;
    const register unsigned short int NOT_ADDRESS = 5;
    sbit  NOT_ADDRESS_bit at SSPSTAT.B5;
    const register unsigned short int NOT_W = 2;
    sbit  NOT_W_bit at SSPSTAT.B2;
    const register unsigned short int NOT_A = 5;
    sbit  NOT_A_bit at SSPSTAT.B5;
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at SSPSTAT.B2;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at SSPSTAT.B5;
    const register unsigned short int I2C_DAT = 5;
    sbit  I2C_DAT_bit at SSPSTAT.B5;

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

    // T1CON bits
    const register unsigned short int TMR1ON = 0;
    sbit  TMR1ON_bit at T1CON.B0;
    const register unsigned short int TMR1CS = 1;
    sbit  TMR1CS_bit at T1CON.B1;
    const register unsigned short int NOT_T1SYNC = 2;
    sbit  NOT_T1SYNC_bit at T1CON.B2;
    const register unsigned short int T1OSCEN = 3;
    sbit  T1OSCEN_bit at T1CON.B3;
    sbit  RD16_T1CON_bit at T1CON.B7;
    const register unsigned short int T1INSYNC = 2;
    sbit  T1INSYNC_bit at T1CON.B2;
    const register unsigned short int T1CKPS0 = 4;
    sbit  T1CKPS0_bit at T1CON.B4;
    const register unsigned short int T1CKPS1 = 5;
    sbit  T1CKPS1_bit at T1CON.B5;
    const register unsigned short int T1SYNC = 2;
    sbit  T1SYNC_bit at T1CON.B2;

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
    const register unsigned short int NOT_IPEN = 7;
    sbit  NOT_IPEN_bit at RCON.B7;

    // WDTCON bits
    const register unsigned short int SWDTEN = 0;
    sbit  SWDTEN_bit at WDTCON.B0;
    const register unsigned short int SWDTE = 0;
    sbit  SWDTE_bit at WDTCON.B0;

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
    const register unsigned short int LVDL3 = 3;
    sbit  LVDL3_bit at LVDCON.B3;
    const register unsigned short int IVRST = 5;
    sbit  IVRST_bit at LVDCON.B5;

    // OSCCON bits
    const register unsigned short int SCS = 0;
    sbit  SCS_bit at OSCCON.B0;

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
    const register unsigned short int INT1IE = 3;
    sbit  INT1IE_bit at INTCON3.B3;
    const register unsigned short int INT2IE = 4;
    sbit  INT2IE_bit at INTCON3.B4;
    const register unsigned short int INT1IP = 6;
    sbit  INT1IP_bit at INTCON3.B6;
    const register unsigned short int INT2IP = 7;
    sbit  INT2IP_bit at INTCON3.B7;
    const register unsigned short int INT1F = 0;
    sbit  INT1F_bit at INTCON3.B0;
    const register unsigned short int INT2F = 1;
    sbit  INT2F_bit at INTCON3.B1;
    const register unsigned short int INT1E = 3;
    sbit  INT1E_bit at INTCON3.B3;
    const register unsigned short int INT2E = 4;
    sbit  INT2E_bit at INTCON3.B4;
    const register unsigned short int INT1P = 6;
    sbit  INT1P_bit at INTCON3.B6;
    const register unsigned short int INT2P = 7;
    sbit  INT2P_bit at INTCON3.B7;

    // INTCON2 bits
    const register unsigned short int RBIP = 0;
    sbit  RBIP_bit at INTCON2.B0;
    const register unsigned short int TMR0IP = 2;
    sbit  TMR0IP_bit at INTCON2.B2;
    const register unsigned short int INTEDG2 = 4;
    sbit  INTEDG2_bit at INTCON2.B4;
    const register unsigned short int INTEDG1 = 5;
    sbit  INTEDG1_bit at INTCON2.B5;
    const register unsigned short int INTEDG0 = 6;
    sbit  INTEDG0_bit at INTCON2.B6;
    const register unsigned short int NOT_RBPU = 7;
    sbit  NOT_RBPU_bit at INTCON2.B7;
    const register unsigned short int T0IP = 2;
    sbit  T0IP_bit at INTCON2.B2;
    const register unsigned short int RBPU = 7;
    sbit  RBPU_bit at INTCON2.B7;

    // INTCON, INTCON1 bits
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

    // TRISA bits
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
