// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00004000;

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

sfr unsigned short          RXF6SIDH         absolute 0x0D60;
sfr unsigned short          RXF6SIDL         absolute 0x0D61;
sfr unsigned short          RXF6EIDH         absolute 0x0D62;
sfr unsigned short          RXF6EIDL         absolute 0x0D63;
sfr unsigned short          RXF7SIDH         absolute 0x0D64;
sfr unsigned short          RXF7SIDL         absolute 0x0D65;
sfr unsigned short          RXF7EIDH         absolute 0x0D66;
sfr unsigned short          RXF7EIDL         absolute 0x0D67;
sfr unsigned short          RXF8SIDH         absolute 0x0D68;
sfr unsigned short          RXF8SIDL         absolute 0x0D69;
sfr unsigned short          RXF8EIDH         absolute 0x0D6A;
sfr unsigned short          RXF8EIDL         absolute 0x0D6B;
sfr unsigned short          RXF9SIDH         absolute 0x0D70;
sfr unsigned short          RXF9SIDL         absolute 0x0D71;
sfr unsigned short          RXF9EIDH         absolute 0x0D72;
sfr unsigned short          RXF9EIDL         absolute 0x0D73;
sfr unsigned short          RXF10SIDH        absolute 0x0D74;
sfr unsigned short          RXF10SIDL        absolute 0x0D75;
sfr unsigned short          RXF10EIDH        absolute 0x0D76;
sfr unsigned short          RXF10EIDL        absolute 0x0D77;
sfr unsigned short          RXF11SIDH        absolute 0x0D78;
sfr unsigned short          RXF11SIDL        absolute 0x0D79;
sfr unsigned short          RXF11EIDH        absolute 0x0D7A;
sfr unsigned short          RXF11EIDL        absolute 0x0D7B;
sfr unsigned short          RXF12SIDH        absolute 0x0D80;
sfr unsigned short          RXF12SIDL        absolute 0x0D81;
sfr unsigned short          RXF12EIDH        absolute 0x0D82;
sfr unsigned short          RXF12EIDL        absolute 0x0D83;
sfr unsigned short          RXF13SIDH        absolute 0x0D84;
sfr unsigned short          RXF13SIDL        absolute 0x0D85;
sfr unsigned short          RXF13EIDH        absolute 0x0D86;
sfr unsigned short          RXF13EIDL        absolute 0x0D87;
sfr unsigned short          RXF14SIDH        absolute 0x0D88;
sfr unsigned short          RXF14SIDL        absolute 0x0D89;
sfr unsigned short          RXF14EIDH        absolute 0x0D8A;
sfr unsigned short          RXF14EIDL        absolute 0x0D8B;
sfr unsigned short          RXF15SIDH        absolute 0x0D90;
sfr unsigned short          RXF15SIDL        absolute 0x0D91;
sfr unsigned short          RXF15EIDH        absolute 0x0D92;
sfr unsigned short          RXF15EIDL        absolute 0x0D93;
sfr unsigned short          RXFCON0          absolute 0x0DD4;
sfr unsigned short          RXFCON1          absolute 0x0DD5;
sfr unsigned short volatile SDFLC            absolute 0x0DD8;
sfr unsigned short          RXFBCON0         absolute 0x0DE0;
sfr unsigned short          RXFBCON1         absolute 0x0DE1;
sfr unsigned short          RXFBCON2         absolute 0x0DE2;
sfr unsigned short          RXFBCON3         absolute 0x0DE3;
sfr unsigned short          RXFBCON4         absolute 0x0DE4;
sfr unsigned short          RXFBCON5         absolute 0x0DE5;
sfr unsigned short          RXFBCON6         absolute 0x0DE6;
sfr unsigned short          RXFBCON7         absolute 0x0DE7;
sfr unsigned short volatile MSEL0            absolute 0x0DF0;
sfr unsigned short volatile MSEL1            absolute 0x0DF1;
sfr unsigned short volatile MSEL2            absolute 0x0DF2;
sfr unsigned short volatile MSEL3            absolute 0x0DF3;
sfr unsigned short          BSEL0            absolute 0x0DF8;
sfr unsigned short          BIE0             absolute 0x0DFA;
sfr unsigned short          TXBIE            absolute 0x0DFC;
sfr unsigned short          B0CON            absolute 0x0E20;
sfr unsigned short          B0SIDH           absolute 0x0E21;
sfr unsigned short          B0SIDL           absolute 0x0E22;
sfr unsigned short          B0EIDH           absolute 0x0E23;
sfr unsigned short          B0EIDL           absolute 0x0E24;
sfr unsigned short          B0DLC            absolute 0x0E25;
sfr unsigned short          B0D0             absolute 0x0E26;
sfr unsigned short          B0D1             absolute 0x0E27;
sfr unsigned short          B0D2             absolute 0x0E28;
sfr unsigned short          B0D3             absolute 0x0E29;
sfr unsigned short          B0D4             absolute 0x0E2A;
sfr unsigned short          B0D5             absolute 0x0E2B;
sfr unsigned short          B0D6             absolute 0x0E2C;
sfr unsigned short          B0D7             absolute 0x0E2D;
sfr unsigned short          CANSTAT_RO9      absolute 0x0E2E;
sfr unsigned short          CANCON_RO9       absolute 0x0E2F;
sfr unsigned short          B1CON            absolute 0x0E30;
sfr unsigned short          B1SIDH           absolute 0x0E31;
sfr unsigned short          B1SIDL           absolute 0x0E32;
sfr unsigned short          B1EIDH           absolute 0x0E33;
sfr unsigned short          B1EIDL           absolute 0x0E34;
sfr unsigned short          B1DLC            absolute 0x0E35;
sfr unsigned short          B1D0             absolute 0x0E36;
sfr unsigned short          B1D1             absolute 0x0E37;
sfr unsigned short          B1D2             absolute 0x0E38;
sfr unsigned short          B1D3             absolute 0x0E39;
sfr unsigned short          B1D4             absolute 0x0E3A;
sfr unsigned short          B1D5             absolute 0x0E3B;
sfr unsigned short          B1D6             absolute 0x0E3C;
sfr unsigned short          B1D7             absolute 0x0E3D;
sfr unsigned short          CANSTAT_RO8      absolute 0x0E3E;
sfr unsigned short          CANCON_RO8       absolute 0x0E3F;
sfr unsigned short          B2CON            absolute 0x0E40;
sfr unsigned short          B2SIDH           absolute 0x0E41;
sfr unsigned short          B2SIDL           absolute 0x0E42;
sfr unsigned short          B2EIDH           absolute 0x0E43;
sfr unsigned short          B2EIDL           absolute 0x0E44;
sfr unsigned short          B2DLC            absolute 0x0E45;
sfr unsigned short          B2D0             absolute 0x0E46;
sfr unsigned short          B2D1             absolute 0x0E47;
sfr unsigned short          B2D2             absolute 0x0E48;
sfr unsigned short          B2D3             absolute 0x0E49;
sfr unsigned short          B2D4             absolute 0x0E4A;
sfr unsigned short          B2D5             absolute 0x0E4B;
sfr unsigned short          B2D6             absolute 0x0E4C;
sfr unsigned short          B2D7             absolute 0x0E4D;
sfr unsigned short          CANSTAT_RO7      absolute 0x0E4E;
sfr unsigned short          CANCON_RO7       absolute 0x0E4F;
sfr unsigned short          B3CON            absolute 0x0E50;
sfr unsigned short          B3SIDH           absolute 0x0E51;
sfr unsigned short          B3SIDL           absolute 0x0E52;
sfr unsigned short          B3EIDH           absolute 0x0E53;
sfr unsigned short          B3EIDL           absolute 0x0E54;
sfr unsigned short          B3DLC            absolute 0x0E55;
sfr unsigned short          B3D0             absolute 0x0E56;
sfr unsigned short          B3D1             absolute 0x0E57;
sfr unsigned short          B3D2             absolute 0x0E58;
sfr unsigned short          B3D3             absolute 0x0E59;
sfr unsigned short          B3D4             absolute 0x0E5A;
sfr unsigned short          B3D5             absolute 0x0E5B;
sfr unsigned short          B3D6             absolute 0x0E5C;
sfr unsigned short          B3D7             absolute 0x0E5D;
sfr unsigned short          CANSTAT_RO6      absolute 0x0E5E;
sfr unsigned short          CANCON_RO6       absolute 0x0E5F;
sfr unsigned short          B4CON            absolute 0x0E60;
sfr unsigned short          B4SIDH           absolute 0x0E61;
sfr unsigned short          B4SIDL           absolute 0x0E62;
sfr unsigned short          B4EIDH           absolute 0x0E63;
sfr unsigned short          B4EIDL           absolute 0x0E64;
sfr unsigned short          B4DLC            absolute 0x0E65;
sfr unsigned short          B4D0             absolute 0x0E66;
sfr unsigned short          B4D1             absolute 0x0E67;
sfr unsigned short          B4D2             absolute 0x0E68;
sfr unsigned short          B4D3             absolute 0x0E69;
sfr unsigned short          B4D4             absolute 0x0E6A;
sfr unsigned short          B4D5             absolute 0x0E6B;
sfr unsigned short          B4D6             absolute 0x0E6C;
sfr unsigned short          B4D7             absolute 0x0E6D;
sfr unsigned short          CANSTAT_RO5      absolute 0x0E6E;
sfr unsigned short          CANCON_RO5       absolute 0x0E6F;
sfr unsigned short          B5CON            absolute 0x0E70;
sfr unsigned short          B5SIDH           absolute 0x0E71;
sfr unsigned short          B5SIDL           absolute 0x0E72;
sfr unsigned short          B5EIDH           absolute 0x0E73;
sfr unsigned short          B5EIDL           absolute 0x0E74;
sfr unsigned short          B5DLC            absolute 0x0E75;
sfr unsigned short          B5D0             absolute 0x0E76;
sfr unsigned short          B5D1             absolute 0x0E77;
sfr unsigned short          B5D2             absolute 0x0E78;
sfr unsigned short          B5D3             absolute 0x0E79;
sfr unsigned short          B5D4             absolute 0x0E7A;
sfr unsigned short          B5D5             absolute 0x0E7B;
sfr unsigned short          B5D6             absolute 0x0E7C;
sfr unsigned short          B5D7             absolute 0x0E7D;
sfr unsigned short          CANSTAT_RO4      absolute 0x0E7E;
sfr unsigned short          CANCON_RO4       absolute 0x0E7F;
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
sfr unsigned short          CANSTAT_RO3      absolute 0x0F2E;
sfr unsigned short          CANCON_RO3       absolute 0x0F2F;
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
sfr unsigned short          CANSTAT_RO2      absolute 0x0F3E;
sfr unsigned short          CANCON_RO2       absolute 0x0F3F;
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
sfr unsigned short          CANSTAT_RO1      absolute 0x0F4E;
sfr unsigned short          CANCON_RO1       absolute 0x0F4F;
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
sfr unsigned short          CANSTAT_RO0      absolute 0x0F5E;
sfr unsigned short          CANCON_RO0       absolute 0x0F5F;
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
sfr unsigned short          ECANCON          absolute 0x0F77;
sfr unsigned short volatile LATA             absolute 0x0F89;
sfr unsigned short volatile LATB             absolute 0x0F8A;
sfr unsigned short volatile LATC             absolute 0x0F8B;
sfr unsigned short volatile LATD             absolute 0x0F8C;
sfr unsigned short volatile LATE             absolute 0x0F8D;
sfr unsigned short volatile OSCTUNE          absolute 0x0F9B;
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
sfr unsigned short          SPBRGH           absolute 0x0FB0;
sfr unsigned short volatile T3CON            absolute 0x0FB1;
sfr unsigned short volatile TMR3L            absolute 0x0FB2;
sfr unsigned short volatile TMR3H            absolute 0x0FB3;
sfr unsigned short volatile CMCON            absolute 0x0FB4;
sfr unsigned short volatile CVRCON           absolute 0x0FB5;
sfr unsigned short volatile ECCP1AS          absolute 0x0FB6;
sfr unsigned short volatile ECCP1DEL         absolute 0x0FB7;
sfr unsigned short          BAUDCON          absolute 0x0FB8;
sfr unsigned short          BAUDCTL          absolute 0x0FB8;
sfr unsigned short volatile ECCP1CON         absolute 0x0FBA;
sfr unsigned int   volatile ECCPR1           absolute 0x0FBB;
sfr unsigned short volatile ECCPR1L          absolute 0x0FBB;
sfr unsigned short volatile ECCPR1H          absolute 0x0FBC;
sfr unsigned short volatile CCP1CON          absolute 0x0FBD;
sfr unsigned int   volatile CCPR1            absolute 0x0FBE;
sfr unsigned short volatile CCPR1L           absolute 0x0FBE;
sfr unsigned short volatile CCPR1H           absolute 0x0FBF;
sfr unsigned short volatile ADCON2           absolute 0x0FC0;
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
sfr unsigned short volatile HLVDCON          absolute 0x0FD2;
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
sfr unsigned short volatile PORTD            absolute 0x0F83;
sfr unsigned short volatile PORTE            absolute 0x0F84;
sfr unsigned short volatile TRISA            absolute 0x0F92;
sfr unsigned short volatile TRISB            absolute 0x0F93;
sfr unsigned short volatile TRISC            absolute 0x0F94;
sfr unsigned short volatile TRISD            absolute 0x0F95;
sfr unsigned short volatile TRISE            absolute 0x0F96;
sfr unsigned int   volatile ADRES            absolute 0x0FC3;
sfr unsigned int            PROD             absolute 0x0FF3;
sfr unsigned short          PRODL            absolute 0x0FF3;
sfr unsigned short          PRODH            absolute 0x0FF4;
sfr unsigned short volatile TOSL             absolute 0x0FFD;
sfr unsigned short volatile TOSH             absolute 0x0FFE;
sfr unsigned short volatile TOSU             absolute 0x0FFF;

    // RXF6SIDH bits
    const register unsigned short int SID3 = 0;
    sbit  SID3_bit at RXF6SIDH.B0;
    const register unsigned short int SID4 = 1;
    sbit  SID4_bit at RXF6SIDH.B1;
    const register unsigned short int SID5 = 2;
    sbit  SID5_bit at RXF6SIDH.B2;
    const register unsigned short int SID6 = 3;
    sbit  SID6_bit at RXF6SIDH.B3;
    const register unsigned short int SID7 = 4;
    sbit  SID7_bit at RXF6SIDH.B4;
    const register unsigned short int SID8 = 5;
    sbit  SID8_bit at RXF6SIDH.B5;
    const register unsigned short int SID9 = 6;
    sbit  SID9_bit at RXF6SIDH.B6;
    const register unsigned short int SID10 = 7;
    sbit  SID10_bit at RXF6SIDH.B7;

    // RXF6SIDL bits
    const register unsigned short int EID16 = 0;
    sbit  EID16_bit at RXF6SIDL.B0;
    const register unsigned short int EID17 = 1;
    sbit  EID17_bit at RXF6SIDL.B1;
    const register unsigned short int EXIDEN = 3;
    sbit  EXIDEN_bit at RXF6SIDL.B3;
    const register unsigned short int SID0 = 5;
    sbit  SID0_bit at RXF6SIDL.B5;
    const register unsigned short int SID1 = 6;
    sbit  SID1_bit at RXF6SIDL.B6;
    const register unsigned short int SID2 = 7;
    sbit  SID2_bit at RXF6SIDL.B7;
    const register unsigned short int EXIDE = 3;
    sbit  EXIDE_bit at RXF6SIDL.B3;

    // RXF6EIDH bits
    const register unsigned short int EID8 = 0;
    sbit  EID8_bit at RXF6EIDH.B0;
    const register unsigned short int EID9 = 1;
    sbit  EID9_bit at RXF6EIDH.B1;
    const register unsigned short int EID10 = 2;
    sbit  EID10_bit at RXF6EIDH.B2;
    const register unsigned short int EID11 = 3;
    sbit  EID11_bit at RXF6EIDH.B3;
    const register unsigned short int EID12 = 4;
    sbit  EID12_bit at RXF6EIDH.B4;
    const register unsigned short int EID13 = 5;
    sbit  EID13_bit at RXF6EIDH.B5;
    const register unsigned short int EID14 = 6;
    sbit  EID14_bit at RXF6EIDH.B6;
    const register unsigned short int EID15 = 7;
    sbit  EID15_bit at RXF6EIDH.B7;

    // RXF6EIDL bits
    const register unsigned short int EID0 = 0;
    sbit  EID0_bit at RXF6EIDL.B0;
    const register unsigned short int EID1 = 1;
    sbit  EID1_bit at RXF6EIDL.B1;
    const register unsigned short int EID2 = 2;
    sbit  EID2_bit at RXF6EIDL.B2;
    const register unsigned short int EID3 = 3;
    sbit  EID3_bit at RXF6EIDL.B3;
    const register unsigned short int EID4 = 4;
    sbit  EID4_bit at RXF6EIDL.B4;
    const register unsigned short int EID5 = 5;
    sbit  EID5_bit at RXF6EIDL.B5;
    const register unsigned short int EID6 = 6;
    sbit  EID6_bit at RXF6EIDL.B6;
    const register unsigned short int EID7 = 7;
    sbit  EID7_bit at RXF6EIDL.B7;

    // RXF7SIDH bits
    sbit  SID3_RXF7SIDH_bit at RXF7SIDH.B0;
    sbit  SID4_RXF7SIDH_bit at RXF7SIDH.B1;
    sbit  SID5_RXF7SIDH_bit at RXF7SIDH.B2;
    sbit  SID6_RXF7SIDH_bit at RXF7SIDH.B3;
    sbit  SID7_RXF7SIDH_bit at RXF7SIDH.B4;
    sbit  SID8_RXF7SIDH_bit at RXF7SIDH.B5;
    sbit  SID9_RXF7SIDH_bit at RXF7SIDH.B6;
    sbit  SID10_RXF7SIDH_bit at RXF7SIDH.B7;

    // RXF7SIDL bits
    sbit  EID16_RXF7SIDL_bit at RXF7SIDL.B0;
    sbit  EID17_RXF7SIDL_bit at RXF7SIDL.B1;
    sbit  EXIDEN_RXF7SIDL_bit at RXF7SIDL.B3;
    sbit  SID0_RXF7SIDL_bit at RXF7SIDL.B5;
    sbit  SID1_RXF7SIDL_bit at RXF7SIDL.B6;
    sbit  SID2_RXF7SIDL_bit at RXF7SIDL.B7;
    sbit  EXIDE_RXF7SIDL_bit at RXF7SIDL.B3;

    // RXF7EIDH bits
    sbit  EID8_RXF7EIDH_bit at RXF7EIDH.B0;
    sbit  EID9_RXF7EIDH_bit at RXF7EIDH.B1;
    sbit  EID10_RXF7EIDH_bit at RXF7EIDH.B2;
    sbit  EID11_RXF7EIDH_bit at RXF7EIDH.B3;
    sbit  EID12_RXF7EIDH_bit at RXF7EIDH.B4;
    sbit  EID13_RXF7EIDH_bit at RXF7EIDH.B5;
    sbit  EID14_RXF7EIDH_bit at RXF7EIDH.B6;
    sbit  EID15_RXF7EIDH_bit at RXF7EIDH.B7;

    // RXF7EIDL bits
    sbit  EID0_RXF7EIDL_bit at RXF7EIDL.B0;
    sbit  EID1_RXF7EIDL_bit at RXF7EIDL.B1;
    sbit  EID2_RXF7EIDL_bit at RXF7EIDL.B2;
    sbit  EID3_RXF7EIDL_bit at RXF7EIDL.B3;
    sbit  EID4_RXF7EIDL_bit at RXF7EIDL.B4;
    sbit  EID5_RXF7EIDL_bit at RXF7EIDL.B5;
    sbit  EID6_RXF7EIDL_bit at RXF7EIDL.B6;
    sbit  EID7_RXF7EIDL_bit at RXF7EIDL.B7;

    // RXF8SIDH bits
    sbit  SID3_RXF8SIDH_bit at RXF8SIDH.B0;
    sbit  SID4_RXF8SIDH_bit at RXF8SIDH.B1;
    sbit  SID5_RXF8SIDH_bit at RXF8SIDH.B2;
    sbit  SID6_RXF8SIDH_bit at RXF8SIDH.B3;
    sbit  SID7_RXF8SIDH_bit at RXF8SIDH.B4;
    sbit  SID8_RXF8SIDH_bit at RXF8SIDH.B5;
    sbit  SID9_RXF8SIDH_bit at RXF8SIDH.B6;
    sbit  SID10_RXF8SIDH_bit at RXF8SIDH.B7;

    // RXF8SIDL bits
    sbit  EID16_RXF8SIDL_bit at RXF8SIDL.B0;
    sbit  EID17_RXF8SIDL_bit at RXF8SIDL.B1;
    sbit  EXIDEN_RXF8SIDL_bit at RXF8SIDL.B3;
    sbit  SID0_RXF8SIDL_bit at RXF8SIDL.B5;
    sbit  SID1_RXF8SIDL_bit at RXF8SIDL.B6;
    sbit  SID2_RXF8SIDL_bit at RXF8SIDL.B7;
    sbit  EXIDE_RXF8SIDL_bit at RXF8SIDL.B3;

    // RXF8EIDH bits
    sbit  EID8_RXF8EIDH_bit at RXF8EIDH.B0;
    sbit  EID9_RXF8EIDH_bit at RXF8EIDH.B1;
    sbit  EID10_RXF8EIDH_bit at RXF8EIDH.B2;
    sbit  EID11_RXF8EIDH_bit at RXF8EIDH.B3;
    sbit  EID12_RXF8EIDH_bit at RXF8EIDH.B4;
    sbit  EID13_RXF8EIDH_bit at RXF8EIDH.B5;
    sbit  EID14_RXF8EIDH_bit at RXF8EIDH.B6;
    sbit  EID15_RXF8EIDH_bit at RXF8EIDH.B7;

    // RXF8EIDL bits
    sbit  EID0_RXF8EIDL_bit at RXF8EIDL.B0;
    sbit  EID1_RXF8EIDL_bit at RXF8EIDL.B1;
    sbit  EID2_RXF8EIDL_bit at RXF8EIDL.B2;
    sbit  EID3_RXF8EIDL_bit at RXF8EIDL.B3;
    sbit  EID4_RXF8EIDL_bit at RXF8EIDL.B4;
    sbit  EID5_RXF8EIDL_bit at RXF8EIDL.B5;
    sbit  EID6_RXF8EIDL_bit at RXF8EIDL.B6;
    sbit  EID7_RXF8EIDL_bit at RXF8EIDL.B7;

    // RXF9SIDH bits
    sbit  SID3_RXF9SIDH_bit at RXF9SIDH.B0;
    sbit  SID4_RXF9SIDH_bit at RXF9SIDH.B1;
    sbit  SID5_RXF9SIDH_bit at RXF9SIDH.B2;
    sbit  SID6_RXF9SIDH_bit at RXF9SIDH.B3;
    sbit  SID7_RXF9SIDH_bit at RXF9SIDH.B4;
    sbit  SID8_RXF9SIDH_bit at RXF9SIDH.B5;
    sbit  SID9_RXF9SIDH_bit at RXF9SIDH.B6;
    sbit  SID10_RXF9SIDH_bit at RXF9SIDH.B7;

    // RXF9SIDL bits
    sbit  EID16_RXF9SIDL_bit at RXF9SIDL.B0;
    sbit  EID17_RXF9SIDL_bit at RXF9SIDL.B1;
    sbit  EXIDEN_RXF9SIDL_bit at RXF9SIDL.B3;
    sbit  SID0_RXF9SIDL_bit at RXF9SIDL.B5;
    sbit  SID1_RXF9SIDL_bit at RXF9SIDL.B6;
    sbit  SID2_RXF9SIDL_bit at RXF9SIDL.B7;
    sbit  EXIDE_RXF9SIDL_bit at RXF9SIDL.B3;

    // RXF9EIDH bits
    sbit  EID8_RXF9EIDH_bit at RXF9EIDH.B0;
    sbit  EID9_RXF9EIDH_bit at RXF9EIDH.B1;
    sbit  EID10_RXF9EIDH_bit at RXF9EIDH.B2;
    sbit  EID11_RXF9EIDH_bit at RXF9EIDH.B3;
    sbit  EID12_RXF9EIDH_bit at RXF9EIDH.B4;
    sbit  EID13_RXF9EIDH_bit at RXF9EIDH.B5;
    sbit  EID14_RXF9EIDH_bit at RXF9EIDH.B6;
    sbit  EID15_RXF9EIDH_bit at RXF9EIDH.B7;

    // RXF9EIDL bits
    sbit  EID0_RXF9EIDL_bit at RXF9EIDL.B0;
    sbit  EID1_RXF9EIDL_bit at RXF9EIDL.B1;
    sbit  EID2_RXF9EIDL_bit at RXF9EIDL.B2;
    sbit  EID3_RXF9EIDL_bit at RXF9EIDL.B3;
    sbit  EID4_RXF9EIDL_bit at RXF9EIDL.B4;
    sbit  EID5_RXF9EIDL_bit at RXF9EIDL.B5;
    sbit  EID6_RXF9EIDL_bit at RXF9EIDL.B6;
    sbit  EID7_RXF9EIDL_bit at RXF9EIDL.B7;

    // RXF10SIDH bits
    sbit  SID3_RXF10SIDH_bit at RXF10SIDH.B0;
    sbit  SID4_RXF10SIDH_bit at RXF10SIDH.B1;
    sbit  SID5_RXF10SIDH_bit at RXF10SIDH.B2;
    sbit  SID6_RXF10SIDH_bit at RXF10SIDH.B3;
    sbit  SID7_RXF10SIDH_bit at RXF10SIDH.B4;
    sbit  SID8_RXF10SIDH_bit at RXF10SIDH.B5;
    sbit  SID9_RXF10SIDH_bit at RXF10SIDH.B6;
    sbit  SID10_RXF10SIDH_bit at RXF10SIDH.B7;

    // RXF10SIDL bits
    sbit  EID16_RXF10SIDL_bit at RXF10SIDL.B0;
    sbit  EID17_RXF10SIDL_bit at RXF10SIDL.B1;
    sbit  EXIDEN_RXF10SIDL_bit at RXF10SIDL.B3;
    sbit  SID0_RXF10SIDL_bit at RXF10SIDL.B5;
    sbit  SID1_RXF10SIDL_bit at RXF10SIDL.B6;
    sbit  SID2_RXF10SIDL_bit at RXF10SIDL.B7;
    sbit  EXIDE_RXF10SIDL_bit at RXF10SIDL.B3;

    // RXF10EIDH bits
    sbit  EID8_RXF10EIDH_bit at RXF10EIDH.B0;
    sbit  EID9_RXF10EIDH_bit at RXF10EIDH.B1;
    sbit  EID10_RXF10EIDH_bit at RXF10EIDH.B2;
    sbit  EID11_RXF10EIDH_bit at RXF10EIDH.B3;
    sbit  EID12_RXF10EIDH_bit at RXF10EIDH.B4;
    sbit  EID13_RXF10EIDH_bit at RXF10EIDH.B5;
    sbit  EID14_RXF10EIDH_bit at RXF10EIDH.B6;
    sbit  EID15_RXF10EIDH_bit at RXF10EIDH.B7;

    // RXF10EIDL bits
    sbit  EID0_RXF10EIDL_bit at RXF10EIDL.B0;
    sbit  EID1_RXF10EIDL_bit at RXF10EIDL.B1;
    sbit  EID2_RXF10EIDL_bit at RXF10EIDL.B2;
    sbit  EID3_RXF10EIDL_bit at RXF10EIDL.B3;
    sbit  EID4_RXF10EIDL_bit at RXF10EIDL.B4;
    sbit  EID5_RXF10EIDL_bit at RXF10EIDL.B5;
    sbit  EID6_RXF10EIDL_bit at RXF10EIDL.B6;
    sbit  EID7_RXF10EIDL_bit at RXF10EIDL.B7;

    // RXF11SIDH bits
    sbit  SID3_RXF11SIDH_bit at RXF11SIDH.B0;
    sbit  SID4_RXF11SIDH_bit at RXF11SIDH.B1;
    sbit  SID5_RXF11SIDH_bit at RXF11SIDH.B2;
    sbit  SID6_RXF11SIDH_bit at RXF11SIDH.B3;
    sbit  SID7_RXF11SIDH_bit at RXF11SIDH.B4;
    sbit  SID8_RXF11SIDH_bit at RXF11SIDH.B5;
    sbit  SID9_RXF11SIDH_bit at RXF11SIDH.B6;
    sbit  SID10_RXF11SIDH_bit at RXF11SIDH.B7;

    // RXF11SIDL bits
    sbit  EID16_RXF11SIDL_bit at RXF11SIDL.B0;
    sbit  EID17_RXF11SIDL_bit at RXF11SIDL.B1;
    sbit  EXIDEN_RXF11SIDL_bit at RXF11SIDL.B3;
    sbit  SID0_RXF11SIDL_bit at RXF11SIDL.B5;
    sbit  SID1_RXF11SIDL_bit at RXF11SIDL.B6;
    sbit  SID2_RXF11SIDL_bit at RXF11SIDL.B7;
    sbit  EXIDE_RXF11SIDL_bit at RXF11SIDL.B3;

    // RXF11EIDH bits
    sbit  EID8_RXF11EIDH_bit at RXF11EIDH.B0;
    sbit  EID9_RXF11EIDH_bit at RXF11EIDH.B1;
    sbit  EID10_RXF11EIDH_bit at RXF11EIDH.B2;
    sbit  EID11_RXF11EIDH_bit at RXF11EIDH.B3;
    sbit  EID12_RXF11EIDH_bit at RXF11EIDH.B4;
    sbit  EID13_RXF11EIDH_bit at RXF11EIDH.B5;
    sbit  EID14_RXF11EIDH_bit at RXF11EIDH.B6;
    sbit  EID15_RXF11EIDH_bit at RXF11EIDH.B7;

    // RXF11EIDL bits
    sbit  EID0_RXF11EIDL_bit at RXF11EIDL.B0;
    sbit  EID1_RXF11EIDL_bit at RXF11EIDL.B1;
    sbit  EID2_RXF11EIDL_bit at RXF11EIDL.B2;
    sbit  EID3_RXF11EIDL_bit at RXF11EIDL.B3;
    sbit  EID4_RXF11EIDL_bit at RXF11EIDL.B4;
    sbit  EID5_RXF11EIDL_bit at RXF11EIDL.B5;
    sbit  EID6_RXF11EIDL_bit at RXF11EIDL.B6;
    sbit  EID7_RXF11EIDL_bit at RXF11EIDL.B7;

    // RXF12SIDH bits
    sbit  SID3_RXF12SIDH_bit at RXF12SIDH.B0;
    sbit  SID4_RXF12SIDH_bit at RXF12SIDH.B1;
    sbit  SID5_RXF12SIDH_bit at RXF12SIDH.B2;
    sbit  SID6_RXF12SIDH_bit at RXF12SIDH.B3;
    sbit  SID7_RXF12SIDH_bit at RXF12SIDH.B4;
    sbit  SID8_RXF12SIDH_bit at RXF12SIDH.B5;
    sbit  SID9_RXF12SIDH_bit at RXF12SIDH.B6;
    sbit  SID10_RXF12SIDH_bit at RXF12SIDH.B7;

    // RXF12SIDL bits
    sbit  EID16_RXF12SIDL_bit at RXF12SIDL.B0;
    sbit  EID17_RXF12SIDL_bit at RXF12SIDL.B1;
    sbit  EXIDEN_RXF12SIDL_bit at RXF12SIDL.B3;
    sbit  SID0_RXF12SIDL_bit at RXF12SIDL.B5;
    sbit  SID1_RXF12SIDL_bit at RXF12SIDL.B6;
    sbit  SID2_RXF12SIDL_bit at RXF12SIDL.B7;
    sbit  EXIDE_RXF12SIDL_bit at RXF12SIDL.B3;

    // RXF12EIDH bits
    sbit  EID8_RXF12EIDH_bit at RXF12EIDH.B0;
    sbit  EID9_RXF12EIDH_bit at RXF12EIDH.B1;
    sbit  EID10_RXF12EIDH_bit at RXF12EIDH.B2;
    sbit  EID11_RXF12EIDH_bit at RXF12EIDH.B3;
    sbit  EID12_RXF12EIDH_bit at RXF12EIDH.B4;
    sbit  EID13_RXF12EIDH_bit at RXF12EIDH.B5;
    sbit  EID14_RXF12EIDH_bit at RXF12EIDH.B6;
    sbit  EID15_RXF12EIDH_bit at RXF12EIDH.B7;

    // RXF12EIDL bits
    sbit  EID0_RXF12EIDL_bit at RXF12EIDL.B0;
    sbit  EID1_RXF12EIDL_bit at RXF12EIDL.B1;
    sbit  EID2_RXF12EIDL_bit at RXF12EIDL.B2;
    sbit  EID3_RXF12EIDL_bit at RXF12EIDL.B3;
    sbit  EID4_RXF12EIDL_bit at RXF12EIDL.B4;
    sbit  EID5_RXF12EIDL_bit at RXF12EIDL.B5;
    sbit  EID6_RXF12EIDL_bit at RXF12EIDL.B6;
    sbit  EID7_RXF12EIDL_bit at RXF12EIDL.B7;

    // RXF13SIDH bits
    sbit  SID3_RXF13SIDH_bit at RXF13SIDH.B0;
    sbit  SID4_RXF13SIDH_bit at RXF13SIDH.B1;
    sbit  SID5_RXF13SIDH_bit at RXF13SIDH.B2;
    sbit  SID6_RXF13SIDH_bit at RXF13SIDH.B3;
    sbit  SID7_RXF13SIDH_bit at RXF13SIDH.B4;
    sbit  SID8_RXF13SIDH_bit at RXF13SIDH.B5;
    sbit  SID9_RXF13SIDH_bit at RXF13SIDH.B6;
    sbit  SID10_RXF13SIDH_bit at RXF13SIDH.B7;

    // RXF13SIDL bits
    sbit  EID16_RXF13SIDL_bit at RXF13SIDL.B0;
    sbit  EID17_RXF13SIDL_bit at RXF13SIDL.B1;
    sbit  EXIDEN_RXF13SIDL_bit at RXF13SIDL.B3;
    sbit  SID0_RXF13SIDL_bit at RXF13SIDL.B5;
    sbit  SID1_RXF13SIDL_bit at RXF13SIDL.B6;
    sbit  SID2_RXF13SIDL_bit at RXF13SIDL.B7;
    sbit  EXIDE_RXF13SIDL_bit at RXF13SIDL.B3;

    // RXF13EIDH bits
    sbit  EID8_RXF13EIDH_bit at RXF13EIDH.B0;
    sbit  EID9_RXF13EIDH_bit at RXF13EIDH.B1;
    sbit  EID10_RXF13EIDH_bit at RXF13EIDH.B2;
    sbit  EID11_RXF13EIDH_bit at RXF13EIDH.B3;
    sbit  EID12_RXF13EIDH_bit at RXF13EIDH.B4;
    sbit  EID13_RXF13EIDH_bit at RXF13EIDH.B5;
    sbit  EID14_RXF13EIDH_bit at RXF13EIDH.B6;
    sbit  EID15_RXF13EIDH_bit at RXF13EIDH.B7;

    // RXF13EIDL bits
    sbit  EID0_RXF13EIDL_bit at RXF13EIDL.B0;
    sbit  EID1_RXF13EIDL_bit at RXF13EIDL.B1;
    sbit  EID2_RXF13EIDL_bit at RXF13EIDL.B2;
    sbit  EID3_RXF13EIDL_bit at RXF13EIDL.B3;
    sbit  EID4_RXF13EIDL_bit at RXF13EIDL.B4;
    sbit  EID5_RXF13EIDL_bit at RXF13EIDL.B5;
    sbit  EID6_RXF13EIDL_bit at RXF13EIDL.B6;
    sbit  EID7_RXF13EIDL_bit at RXF13EIDL.B7;

    // RXF14SIDH bits
    sbit  SID3_RXF14SIDH_bit at RXF14SIDH.B0;
    sbit  SID4_RXF14SIDH_bit at RXF14SIDH.B1;
    sbit  SID5_RXF14SIDH_bit at RXF14SIDH.B2;
    sbit  SID6_RXF14SIDH_bit at RXF14SIDH.B3;
    sbit  SID7_RXF14SIDH_bit at RXF14SIDH.B4;
    sbit  SID8_RXF14SIDH_bit at RXF14SIDH.B5;
    sbit  SID9_RXF14SIDH_bit at RXF14SIDH.B6;
    sbit  SID10_RXF14SIDH_bit at RXF14SIDH.B7;

    // RXF14SIDL bits
    sbit  EID16_RXF14SIDL_bit at RXF14SIDL.B0;
    sbit  EID17_RXF14SIDL_bit at RXF14SIDL.B1;
    sbit  EXIDEN_RXF14SIDL_bit at RXF14SIDL.B3;
    sbit  SID0_RXF14SIDL_bit at RXF14SIDL.B5;
    sbit  SID1_RXF14SIDL_bit at RXF14SIDL.B6;
    sbit  SID2_RXF14SIDL_bit at RXF14SIDL.B7;
    sbit  EXIDE_RXF14SIDL_bit at RXF14SIDL.B3;

    // RXF14EIDH bits
    sbit  EID8_RXF14EIDH_bit at RXF14EIDH.B0;
    sbit  EID9_RXF14EIDH_bit at RXF14EIDH.B1;
    sbit  EID10_RXF14EIDH_bit at RXF14EIDH.B2;
    sbit  EID11_RXF14EIDH_bit at RXF14EIDH.B3;
    sbit  EID12_RXF14EIDH_bit at RXF14EIDH.B4;
    sbit  EID13_RXF14EIDH_bit at RXF14EIDH.B5;
    sbit  EID14_RXF14EIDH_bit at RXF14EIDH.B6;
    sbit  EID15_RXF14EIDH_bit at RXF14EIDH.B7;

    // RXF14EIDL bits
    sbit  EID0_RXF14EIDL_bit at RXF14EIDL.B0;
    sbit  EID1_RXF14EIDL_bit at RXF14EIDL.B1;
    sbit  EID2_RXF14EIDL_bit at RXF14EIDL.B2;
    sbit  EID3_RXF14EIDL_bit at RXF14EIDL.B3;
    sbit  EID4_RXF14EIDL_bit at RXF14EIDL.B4;
    sbit  EID5_RXF14EIDL_bit at RXF14EIDL.B5;
    sbit  EID6_RXF14EIDL_bit at RXF14EIDL.B6;
    sbit  EID7_RXF14EIDL_bit at RXF14EIDL.B7;

    // RXF15SIDH bits
    sbit  SID3_RXF15SIDH_bit at RXF15SIDH.B0;
    sbit  SID4_RXF15SIDH_bit at RXF15SIDH.B1;
    sbit  SID5_RXF15SIDH_bit at RXF15SIDH.B2;
    sbit  SID6_RXF15SIDH_bit at RXF15SIDH.B3;
    sbit  SID7_RXF15SIDH_bit at RXF15SIDH.B4;
    sbit  SID8_RXF15SIDH_bit at RXF15SIDH.B5;
    sbit  SID9_RXF15SIDH_bit at RXF15SIDH.B6;
    sbit  SID10_RXF15SIDH_bit at RXF15SIDH.B7;

    // RXF15SIDL bits
    sbit  EID16_RXF15SIDL_bit at RXF15SIDL.B0;
    sbit  EID17_RXF15SIDL_bit at RXF15SIDL.B1;
    sbit  EXIDEN_RXF15SIDL_bit at RXF15SIDL.B3;
    sbit  SID0_RXF15SIDL_bit at RXF15SIDL.B5;
    sbit  SID1_RXF15SIDL_bit at RXF15SIDL.B6;
    sbit  SID2_RXF15SIDL_bit at RXF15SIDL.B7;
    sbit  EXIDE_RXF15SIDL_bit at RXF15SIDL.B3;

    // RXF15EIDH bits
    sbit  EID8_RXF15EIDH_bit at RXF15EIDH.B0;
    sbit  EID9_RXF15EIDH_bit at RXF15EIDH.B1;
    sbit  EID10_RXF15EIDH_bit at RXF15EIDH.B2;
    sbit  EID11_RXF15EIDH_bit at RXF15EIDH.B3;
    sbit  EID12_RXF15EIDH_bit at RXF15EIDH.B4;
    sbit  EID13_RXF15EIDH_bit at RXF15EIDH.B5;
    sbit  EID14_RXF15EIDH_bit at RXF15EIDH.B6;
    sbit  EID15_RXF15EIDH_bit at RXF15EIDH.B7;

    // RXF15EIDL bits
    sbit  EID0_RXF15EIDL_bit at RXF15EIDL.B0;
    sbit  EID1_RXF15EIDL_bit at RXF15EIDL.B1;
    sbit  EID2_RXF15EIDL_bit at RXF15EIDL.B2;
    sbit  EID3_RXF15EIDL_bit at RXF15EIDL.B3;
    sbit  EID4_RXF15EIDL_bit at RXF15EIDL.B4;
    sbit  EID5_RXF15EIDL_bit at RXF15EIDL.B5;
    sbit  EID6_RXF15EIDL_bit at RXF15EIDL.B6;
    sbit  EID7_RXF15EIDL_bit at RXF15EIDL.B7;

    // RXFCON0 bits
    const register unsigned short int RXF0EN = 0;
    sbit  RXF0EN_bit at RXFCON0.B0;
    const register unsigned short int RXF1EN = 1;
    sbit  RXF1EN_bit at RXFCON0.B1;
    const register unsigned short int RXF2EN = 2;
    sbit  RXF2EN_bit at RXFCON0.B2;
    const register unsigned short int RXF3EN = 3;
    sbit  RXF3EN_bit at RXFCON0.B3;
    const register unsigned short int RXF4EN = 4;
    sbit  RXF4EN_bit at RXFCON0.B4;
    const register unsigned short int RXF5EN = 5;
    sbit  RXF5EN_bit at RXFCON0.B5;
    const register unsigned short int RXF6EN = 6;
    sbit  RXF6EN_bit at RXFCON0.B6;
    const register unsigned short int RXF7EN = 7;
    sbit  RXF7EN_bit at RXFCON0.B7;

    // RXFCON1 bits
    const register unsigned short int RXF8EN = 0;
    sbit  RXF8EN_bit at RXFCON1.B0;
    const register unsigned short int RXF9EN = 1;
    sbit  RXF9EN_bit at RXFCON1.B1;
    const register unsigned short int RXF10EN = 2;
    sbit  RXF10EN_bit at RXFCON1.B2;
    const register unsigned short int RXF11EN = 3;
    sbit  RXF11EN_bit at RXFCON1.B3;
    const register unsigned short int RXF12EN = 4;
    sbit  RXF12EN_bit at RXFCON1.B4;
    const register unsigned short int RXF13EN = 5;
    sbit  RXF13EN_bit at RXFCON1.B5;
    const register unsigned short int RXF14EN = 6;
    sbit  RXF14EN_bit at RXFCON1.B6;
    const register unsigned short int RXF15EN = 7;
    sbit  RXF15EN_bit at RXFCON1.B7;

    // SDFLC bits
    const register unsigned short int FLC0 = 0;
    sbit  FLC0_bit at SDFLC.B0;
    const register unsigned short int FLC1 = 1;
    sbit  FLC1_bit at SDFLC.B1;
    const register unsigned short int FLC2 = 2;
    sbit  FLC2_bit at SDFLC.B2;
    const register unsigned short int FLC3 = 3;
    sbit  FLC3_bit at SDFLC.B3;
    const register unsigned short int FLC4 = 4;
    sbit  FLC4_bit at SDFLC.B4;
    const register unsigned short int DFLC0 = 0;
    sbit  DFLC0_bit at SDFLC.B0;
    const register unsigned short int DFLC1 = 1;
    sbit  DFLC1_bit at SDFLC.B1;
    const register unsigned short int DFLC2 = 2;
    sbit  DFLC2_bit at SDFLC.B2;
    const register unsigned short int DFLC3 = 3;
    sbit  DFLC3_bit at SDFLC.B3;
    const register unsigned short int DFLC4 = 4;
    sbit  DFLC4_bit at SDFLC.B4;

    // RXFBCON0 bits
    const register unsigned short int F0BP_0 = 0;
    sbit  F0BP_0_bit at RXFBCON0.B0;
    const register unsigned short int F0BP_1 = 1;
    sbit  F0BP_1_bit at RXFBCON0.B1;
    const register unsigned short int F0BP_2 = 2;
    sbit  F0BP_2_bit at RXFBCON0.B2;
    const register unsigned short int F0BP_3 = 3;
    sbit  F0BP_3_bit at RXFBCON0.B3;
    const register unsigned short int F1BP_0 = 4;
    sbit  F1BP_0_bit at RXFBCON0.B4;
    const register unsigned short int F1BP_1 = 5;
    sbit  F1BP_1_bit at RXFBCON0.B5;
    const register unsigned short int F1BP_2 = 6;
    sbit  F1BP_2_bit at RXFBCON0.B6;
    const register unsigned short int F1BP_3 = 7;
    sbit  F1BP_3_bit at RXFBCON0.B7;

    // RXFBCON1 bits
    const register unsigned short int F2BP_0 = 0;
    sbit  F2BP_0_bit at RXFBCON1.B0;
    const register unsigned short int F2BP_1 = 1;
    sbit  F2BP_1_bit at RXFBCON1.B1;
    const register unsigned short int F2BP_2 = 2;
    sbit  F2BP_2_bit at RXFBCON1.B2;
    const register unsigned short int F2BP_3 = 3;
    sbit  F2BP_3_bit at RXFBCON1.B3;
    const register unsigned short int F3BP_0 = 4;
    sbit  F3BP_0_bit at RXFBCON1.B4;
    const register unsigned short int F3BP_1 = 5;
    sbit  F3BP_1_bit at RXFBCON1.B5;
    const register unsigned short int F3BP_2 = 6;
    sbit  F3BP_2_bit at RXFBCON1.B6;
    const register unsigned short int F3BP_3 = 7;
    sbit  F3BP_3_bit at RXFBCON1.B7;

    // RXFBCON2 bits
    const register unsigned short int F4BP_0 = 0;
    sbit  F4BP_0_bit at RXFBCON2.B0;
    const register unsigned short int F4BP_1 = 1;
    sbit  F4BP_1_bit at RXFBCON2.B1;
    const register unsigned short int F4BP_2 = 2;
    sbit  F4BP_2_bit at RXFBCON2.B2;
    const register unsigned short int F4BP_3 = 3;
    sbit  F4BP_3_bit at RXFBCON2.B3;
    const register unsigned short int F5BP_0 = 4;
    sbit  F5BP_0_bit at RXFBCON2.B4;
    const register unsigned short int F5BP_1 = 5;
    sbit  F5BP_1_bit at RXFBCON2.B5;
    const register unsigned short int F5BP_2 = 6;
    sbit  F5BP_2_bit at RXFBCON2.B6;
    const register unsigned short int F5BP_3 = 7;
    sbit  F5BP_3_bit at RXFBCON2.B7;

    // RXFBCON3 bits
    const register unsigned short int F6BP_0 = 0;
    sbit  F6BP_0_bit at RXFBCON3.B0;
    const register unsigned short int F6BP_1 = 1;
    sbit  F6BP_1_bit at RXFBCON3.B1;
    const register unsigned short int F6BP_2 = 2;
    sbit  F6BP_2_bit at RXFBCON3.B2;
    const register unsigned short int F6BP_3 = 3;
    sbit  F6BP_3_bit at RXFBCON3.B3;
    const register unsigned short int F7BP_0 = 4;
    sbit  F7BP_0_bit at RXFBCON3.B4;
    const register unsigned short int F7BP_1 = 5;
    sbit  F7BP_1_bit at RXFBCON3.B5;
    const register unsigned short int F7BP_2 = 6;
    sbit  F7BP_2_bit at RXFBCON3.B6;
    const register unsigned short int F7BP_3 = 7;
    sbit  F7BP_3_bit at RXFBCON3.B7;

    // RXFBCON4 bits
    const register unsigned short int F8BP_0 = 0;
    sbit  F8BP_0_bit at RXFBCON4.B0;
    const register unsigned short int F8BP_1 = 1;
    sbit  F8BP_1_bit at RXFBCON4.B1;
    const register unsigned short int F8BP_2 = 2;
    sbit  F8BP_2_bit at RXFBCON4.B2;
    const register unsigned short int F8BP_3 = 3;
    sbit  F8BP_3_bit at RXFBCON4.B3;
    const register unsigned short int F9BP_0 = 4;
    sbit  F9BP_0_bit at RXFBCON4.B4;
    const register unsigned short int F9BP_1 = 5;
    sbit  F9BP_1_bit at RXFBCON4.B5;
    const register unsigned short int F9BP_2 = 6;
    sbit  F9BP_2_bit at RXFBCON4.B6;
    const register unsigned short int F9BP_3 = 7;
    sbit  F9BP_3_bit at RXFBCON4.B7;

    // RXFBCON5 bits
    const register unsigned short int F10BP_0 = 0;
    sbit  F10BP_0_bit at RXFBCON5.B0;
    const register unsigned short int F10BP_1 = 1;
    sbit  F10BP_1_bit at RXFBCON5.B1;
    const register unsigned short int F10BP_2 = 2;
    sbit  F10BP_2_bit at RXFBCON5.B2;
    const register unsigned short int F10BP_3 = 3;
    sbit  F10BP_3_bit at RXFBCON5.B3;
    const register unsigned short int F11BP_0 = 4;
    sbit  F11BP_0_bit at RXFBCON5.B4;
    const register unsigned short int F11BP_1 = 5;
    sbit  F11BP_1_bit at RXFBCON5.B5;
    const register unsigned short int F11BP_2 = 6;
    sbit  F11BP_2_bit at RXFBCON5.B6;
    const register unsigned short int F11BP_3 = 7;
    sbit  F11BP_3_bit at RXFBCON5.B7;

    // RXFBCON6 bits
    const register unsigned short int F12BP_0 = 0;
    sbit  F12BP_0_bit at RXFBCON6.B0;
    const register unsigned short int F12BP_1 = 1;
    sbit  F12BP_1_bit at RXFBCON6.B1;
    const register unsigned short int F12BP_2 = 2;
    sbit  F12BP_2_bit at RXFBCON6.B2;
    const register unsigned short int F12BP_3 = 3;
    sbit  F12BP_3_bit at RXFBCON6.B3;
    const register unsigned short int F13BP_0 = 4;
    sbit  F13BP_0_bit at RXFBCON6.B4;
    const register unsigned short int F13BP_1 = 5;
    sbit  F13BP_1_bit at RXFBCON6.B5;
    const register unsigned short int F13BP_2 = 6;
    sbit  F13BP_2_bit at RXFBCON6.B6;
    const register unsigned short int F13BP_3 = 7;
    sbit  F13BP_3_bit at RXFBCON6.B7;

    // RXFBCON7 bits
    const register unsigned short int F14BP_0 = 0;
    sbit  F14BP_0_bit at RXFBCON7.B0;
    const register unsigned short int F14BP_1 = 1;
    sbit  F14BP_1_bit at RXFBCON7.B1;
    const register unsigned short int F14BP_2 = 2;
    sbit  F14BP_2_bit at RXFBCON7.B2;
    const register unsigned short int F14BP_3 = 3;
    sbit  F14BP_3_bit at RXFBCON7.B3;
    const register unsigned short int F15BP_0 = 4;
    sbit  F15BP_0_bit at RXFBCON7.B4;
    const register unsigned short int F15BP_1 = 5;
    sbit  F15BP_1_bit at RXFBCON7.B5;
    const register unsigned short int F15BP_2 = 6;
    sbit  F15BP_2_bit at RXFBCON7.B6;
    const register unsigned short int F15BP_3 = 7;
    sbit  F15BP_3_bit at RXFBCON7.B7;

    // MSEL0 bits
    const register unsigned short int FIL0_0 = 0;
    sbit  FIL0_0_bit at MSEL0.B0;
    const register unsigned short int FIL0_1 = 1;
    sbit  FIL0_1_bit at MSEL0.B1;
    const register unsigned short int FIL1_0 = 2;
    sbit  FIL1_0_bit at MSEL0.B2;
    const register unsigned short int FIL1_1 = 3;
    sbit  FIL1_1_bit at MSEL0.B3;
    const register unsigned short int FIL2_0 = 4;
    sbit  FIL2_0_bit at MSEL0.B4;
    const register unsigned short int FIL2_1 = 5;
    sbit  FIL2_1_bit at MSEL0.B5;
    const register unsigned short int FIL3_0 = 6;
    sbit  FIL3_0_bit at MSEL0.B6;
    const register unsigned short int FIL3_1 = 7;
    sbit  FIL3_1_bit at MSEL0.B7;

    // MSEL1 bits
    const register unsigned short int FIL4_0 = 0;
    sbit  FIL4_0_bit at MSEL1.B0;
    const register unsigned short int FIL4_1 = 1;
    sbit  FIL4_1_bit at MSEL1.B1;
    const register unsigned short int FIL5_0 = 2;
    sbit  FIL5_0_bit at MSEL1.B2;
    const register unsigned short int FIL5_1 = 3;
    sbit  FIL5_1_bit at MSEL1.B3;
    const register unsigned short int FIL6_0 = 4;
    sbit  FIL6_0_bit at MSEL1.B4;
    const register unsigned short int FIL6_1 = 5;
    sbit  FIL6_1_bit at MSEL1.B5;
    const register unsigned short int FIL7_0 = 6;
    sbit  FIL7_0_bit at MSEL1.B6;
    const register unsigned short int FIL7_1 = 7;
    sbit  FIL7_1_bit at MSEL1.B7;

    // MSEL2 bits
    const register unsigned short int FIL8_0 = 0;
    sbit  FIL8_0_bit at MSEL2.B0;
    const register unsigned short int FIL8_1 = 1;
    sbit  FIL8_1_bit at MSEL2.B1;
    const register unsigned short int FIL9_0 = 2;
    sbit  FIL9_0_bit at MSEL2.B2;
    const register unsigned short int FIL9_1 = 3;
    sbit  FIL9_1_bit at MSEL2.B3;
    const register unsigned short int FIL10_0 = 4;
    sbit  FIL10_0_bit at MSEL2.B4;
    const register unsigned short int FIL10_1 = 5;
    sbit  FIL10_1_bit at MSEL2.B5;
    const register unsigned short int FIL11_0 = 6;
    sbit  FIL11_0_bit at MSEL2.B6;
    const register unsigned short int FIL11_1 = 7;
    sbit  FIL11_1_bit at MSEL2.B7;

    // MSEL3 bits
    const register unsigned short int FIL12_0 = 0;
    sbit  FIL12_0_bit at MSEL3.B0;
    const register unsigned short int FIL12_1 = 1;
    sbit  FIL12_1_bit at MSEL3.B1;
    const register unsigned short int FIL13_0 = 2;
    sbit  FIL13_0_bit at MSEL3.B2;
    const register unsigned short int FIL13_1 = 3;
    sbit  FIL13_1_bit at MSEL3.B3;
    const register unsigned short int FIL14_0 = 4;
    sbit  FIL14_0_bit at MSEL3.B4;
    const register unsigned short int FIL14_1 = 5;
    sbit  FIL14_1_bit at MSEL3.B5;
    const register unsigned short int FIL15_0 = 6;
    sbit  FIL15_0_bit at MSEL3.B6;
    const register unsigned short int FIL15_1 = 7;
    sbit  FIL15_1_bit at MSEL3.B7;

    // BSEL0 bits
    const register unsigned short int B0TXEN = 2;
    sbit  B0TXEN_bit at BSEL0.B2;
    const register unsigned short int B1TXEN = 3;
    sbit  B1TXEN_bit at BSEL0.B3;
    const register unsigned short int B2TXEN = 4;
    sbit  B2TXEN_bit at BSEL0.B4;
    const register unsigned short int B3TXEN = 5;
    sbit  B3TXEN_bit at BSEL0.B5;
    const register unsigned short int B4TXEN = 6;
    sbit  B4TXEN_bit at BSEL0.B6;
    const register unsigned short int B5TXEN = 7;
    sbit  B5TXEN_bit at BSEL0.B7;

    // BIE0 bits
    const register unsigned short int RXB0IE = 0;
    sbit  RXB0IE_bit at BIE0.B0;
    const register unsigned short int RXB1IE = 1;
    sbit  RXB1IE_bit at BIE0.B1;
    const register unsigned short int B0IE = 2;
    sbit  B0IE_bit at BIE0.B2;
    const register unsigned short int B1IE = 3;
    sbit  B1IE_bit at BIE0.B3;
    const register unsigned short int B2IE = 4;
    sbit  B2IE_bit at BIE0.B4;
    const register unsigned short int B3IE = 5;
    sbit  B3IE_bit at BIE0.B5;
    const register unsigned short int B4IE = 6;
    sbit  B4IE_bit at BIE0.B6;
    const register unsigned short int B5IE = 7;
    sbit  B5IE_bit at BIE0.B7;

    // TXBIE bits
    const register unsigned short int TXB0IE = 2;
    sbit  TXB0IE_bit at TXBIE.B2;
    const register unsigned short int TXB1IE = 3;
    sbit  TXB1IE_bit at TXBIE.B3;
    const register unsigned short int TXB2IE = 4;
    sbit  TXB2IE_bit at TXBIE.B4;

    // B0CON bits
    const register unsigned short int FILHIT0_TXPRI0 = 0;
    sbit  FILHIT0_TXPRI0_bit at B0CON.B0;
    const register unsigned short int FILHIT1_TXPRI1 = 1;
    sbit  FILHIT1_TXPRI1_bit at B0CON.B1;
    const register unsigned short int FILHIT2_RTREN = 2;
    sbit  FILHIT2_RTREN_bit at B0CON.B2;
    const register unsigned short int FILHIT3_TXREQ = 3;
    sbit  FILHIT3_TXREQ_bit at B0CON.B3;
    const register unsigned short int FILHIT4_TXERR = 4;
    sbit  FILHIT4_TXERR_bit at B0CON.B4;
    const register unsigned short int RXRTRRO_TXLARB = 5;
    sbit  RXRTRRO_TXLARB_bit at B0CON.B5;
    const register unsigned short int RXM1_TXABT = 6;
    sbit  RXM1_TXABT_bit at B0CON.B6;
    const register unsigned short int RXFUL_TXBIF = 7;
    sbit  RXFUL_TXBIF_bit at B0CON.B7;
    const register unsigned short int FILHIT0 = 0;
    sbit  FILHIT0_bit at B0CON.B0;
    const register unsigned short int FILHIT1 = 1;
    sbit  FILHIT1_bit at B0CON.B1;
    const register unsigned short int FILHIT2 = 2;
    sbit  FILHIT2_bit at B0CON.B2;
    const register unsigned short int FILHIT3 = 3;
    sbit  FILHIT3_bit at B0CON.B3;
    const register unsigned short int FILHIT4 = 4;
    sbit  FILHIT4_bit at B0CON.B4;
    const register unsigned short int RTRRO = 5;
    sbit  RTRRO_bit at B0CON.B5;
    const register unsigned short int RXM1 = 6;
    sbit  RXM1_bit at B0CON.B6;
    const register unsigned short int RXFUL = 7;
    sbit  RXFUL_bit at B0CON.B7;
    const register unsigned short int TXPRI0 = 0;
    sbit  TXPRI0_bit at B0CON.B0;
    const register unsigned short int TXPRI1 = 1;
    sbit  TXPRI1_bit at B0CON.B1;
    const register unsigned short int RTREN = 2;
    sbit  RTREN_bit at B0CON.B2;
    const register unsigned short int TXREQ = 3;
    sbit  TXREQ_bit at B0CON.B3;
    const register unsigned short int TXERR = 4;
    sbit  TXERR_bit at B0CON.B4;
    const register unsigned short int TXLARB = 5;
    sbit  TXLARB_bit at B0CON.B5;
    const register unsigned short int TXABT = 6;
    sbit  TXABT_bit at B0CON.B6;
    const register unsigned short int TXBIF = 7;
    sbit  TXBIF_bit at B0CON.B7;
    const register unsigned short int RXRTRRO_B0CON = 5;
    sbit  RXRTRRO_B0CON_bit at B0CON.B5;

    // B0SIDH bits
    sbit  SID3_B0SIDH_bit at B0SIDH.B0;
    sbit  SID4_B0SIDH_bit at B0SIDH.B1;
    sbit  SID5_B0SIDH_bit at B0SIDH.B2;
    sbit  SID6_B0SIDH_bit at B0SIDH.B3;
    sbit  SID7_B0SIDH_bit at B0SIDH.B4;
    sbit  SID8_B0SIDH_bit at B0SIDH.B5;
    sbit  SID9_B0SIDH_bit at B0SIDH.B6;
    sbit  SID10_B0SIDH_bit at B0SIDH.B7;

    // B0SIDL bits
    sbit  EID16_B0SIDL_bit at B0SIDL.B0;
    sbit  EID17_B0SIDL_bit at B0SIDL.B1;
    sbit  EXIDE_B0SIDL_bit at B0SIDL.B3;
    const register unsigned short int SRR = 4;
    sbit  SRR_bit at B0SIDL.B4;
    sbit  SID0_B0SIDL_bit at B0SIDL.B5;
    sbit  SID1_B0SIDL_bit at B0SIDL.B6;
    sbit  SID2_B0SIDL_bit at B0SIDL.B7;
    const register unsigned short int EXID = 3;
    sbit  EXID_bit at B0SIDL.B3;

    // B0EIDH bits
    sbit  EID8_B0EIDH_bit at B0EIDH.B0;
    sbit  EID9_B0EIDH_bit at B0EIDH.B1;
    sbit  EID10_B0EIDH_bit at B0EIDH.B2;
    sbit  EID11_B0EIDH_bit at B0EIDH.B3;
    sbit  EID12_B0EIDH_bit at B0EIDH.B4;
    sbit  EID13_B0EIDH_bit at B0EIDH.B5;
    sbit  EID14_B0EIDH_bit at B0EIDH.B6;
    sbit  EID15_B0EIDH_bit at B0EIDH.B7;

    // B0EIDL bits
    sbit  EID0_B0EIDL_bit at B0EIDL.B0;
    sbit  EID1_B0EIDL_bit at B0EIDL.B1;
    sbit  EID2_B0EIDL_bit at B0EIDL.B2;
    sbit  EID3_B0EIDL_bit at B0EIDL.B3;
    sbit  EID4_B0EIDL_bit at B0EIDL.B4;
    sbit  EID5_B0EIDL_bit at B0EIDL.B5;
    sbit  EID6_B0EIDL_bit at B0EIDL.B6;
    sbit  EID7_B0EIDL_bit at B0EIDL.B7;

    // B0DLC bits
    const register unsigned short int DLC0 = 0;
    sbit  DLC0_bit at B0DLC.B0;
    const register unsigned short int DLC1 = 1;
    sbit  DLC1_bit at B0DLC.B1;
    const register unsigned short int DLC2 = 2;
    sbit  DLC2_bit at B0DLC.B2;
    const register unsigned short int DLC3 = 3;
    sbit  DLC3_bit at B0DLC.B3;
    const register unsigned short int RB0_B0DLC = 4;
    sbit  RB0_B0DLC_bit at B0DLC.B4;
    const register unsigned short int RB1_B0DLC = 5;
    sbit  RB1_B0DLC_bit at B0DLC.B5;
    const register unsigned short int RXRTR_TXRTR = 6;
    sbit  RXRTR_TXRTR_bit at B0DLC.B6;
    const register unsigned short int RESRB0 = 4;
    sbit  RESRB0_bit at B0DLC.B4;
    const register unsigned short int RESRB1 = 5;
    sbit  RESRB1_bit at B0DLC.B5;
    const register unsigned short int TXRTR = 6;
    sbit  TXRTR_bit at B0DLC.B6;
    const register unsigned short int RXRTR = 6;
    sbit  RXRTR_bit at B0DLC.B6;

    // B0D0 bits
    const register unsigned short int B0D00 = 0;
    sbit  B0D00_bit at B0D0.B0;
    const register unsigned short int B0D01 = 1;
    sbit  B0D01_bit at B0D0.B1;
    const register unsigned short int B0D02 = 2;
    sbit  B0D02_bit at B0D0.B2;
    const register unsigned short int B0D03 = 3;
    sbit  B0D03_bit at B0D0.B3;
    const register unsigned short int B0D04 = 4;
    sbit  B0D04_bit at B0D0.B4;
    const register unsigned short int B0D05 = 5;
    sbit  B0D05_bit at B0D0.B5;
    const register unsigned short int B0D06 = 6;
    sbit  B0D06_bit at B0D0.B6;
    const register unsigned short int B0D07 = 7;
    sbit  B0D07_bit at B0D0.B7;

    // B0D1 bits
    const register unsigned short int B0D10 = 0;
    sbit  B0D10_bit at B0D1.B0;
    const register unsigned short int B0D11 = 1;
    sbit  B0D11_bit at B0D1.B1;
    const register unsigned short int B0D12 = 2;
    sbit  B0D12_bit at B0D1.B2;
    const register unsigned short int B0D13 = 3;
    sbit  B0D13_bit at B0D1.B3;
    const register unsigned short int B0D14 = 4;
    sbit  B0D14_bit at B0D1.B4;
    const register unsigned short int B0D15 = 5;
    sbit  B0D15_bit at B0D1.B5;
    const register unsigned short int B0D16 = 6;
    sbit  B0D16_bit at B0D1.B6;
    const register unsigned short int B0D17 = 7;
    sbit  B0D17_bit at B0D1.B7;

    // B0D2 bits
    const register unsigned short int B0D20 = 0;
    sbit  B0D20_bit at B0D2.B0;
    const register unsigned short int B0D21 = 1;
    sbit  B0D21_bit at B0D2.B1;
    const register unsigned short int B0D22 = 2;
    sbit  B0D22_bit at B0D2.B2;
    const register unsigned short int B0D23 = 3;
    sbit  B0D23_bit at B0D2.B3;
    const register unsigned short int B0D24 = 4;
    sbit  B0D24_bit at B0D2.B4;
    const register unsigned short int B0D25 = 5;
    sbit  B0D25_bit at B0D2.B5;
    const register unsigned short int B0D26 = 6;
    sbit  B0D26_bit at B0D2.B6;
    const register unsigned short int B0D27 = 7;
    sbit  B0D27_bit at B0D2.B7;

    // B0D3 bits
    const register unsigned short int B0D30 = 0;
    sbit  B0D30_bit at B0D3.B0;
    const register unsigned short int B0D31 = 1;
    sbit  B0D31_bit at B0D3.B1;
    const register unsigned short int B0D32 = 2;
    sbit  B0D32_bit at B0D3.B2;
    const register unsigned short int B0D33 = 3;
    sbit  B0D33_bit at B0D3.B3;
    const register unsigned short int B0D34 = 4;
    sbit  B0D34_bit at B0D3.B4;
    const register unsigned short int B0D35 = 5;
    sbit  B0D35_bit at B0D3.B5;
    const register unsigned short int B0D36 = 6;
    sbit  B0D36_bit at B0D3.B6;
    const register unsigned short int B0D37 = 7;
    sbit  B0D37_bit at B0D3.B7;

    // B0D4 bits
    const register unsigned short int B0D40 = 0;
    sbit  B0D40_bit at B0D4.B0;
    const register unsigned short int B0D41 = 1;
    sbit  B0D41_bit at B0D4.B1;
    const register unsigned short int B0D42 = 2;
    sbit  B0D42_bit at B0D4.B2;
    const register unsigned short int B0D43 = 3;
    sbit  B0D43_bit at B0D4.B3;
    const register unsigned short int B0D44 = 4;
    sbit  B0D44_bit at B0D4.B4;
    const register unsigned short int B0D45 = 5;
    sbit  B0D45_bit at B0D4.B5;
    const register unsigned short int B0D46 = 6;
    sbit  B0D46_bit at B0D4.B6;
    const register unsigned short int B0D47 = 7;
    sbit  B0D47_bit at B0D4.B7;

    // B0D5 bits
    const register unsigned short int B0D50 = 0;
    sbit  B0D50_bit at B0D5.B0;
    const register unsigned short int B0D51 = 1;
    sbit  B0D51_bit at B0D5.B1;
    const register unsigned short int B0D52 = 2;
    sbit  B0D52_bit at B0D5.B2;
    const register unsigned short int B0D53 = 3;
    sbit  B0D53_bit at B0D5.B3;
    const register unsigned short int B0D54 = 4;
    sbit  B0D54_bit at B0D5.B4;
    const register unsigned short int B0D55 = 5;
    sbit  B0D55_bit at B0D5.B5;
    const register unsigned short int B0D56 = 6;
    sbit  B0D56_bit at B0D5.B6;
    const register unsigned short int B0D57 = 7;
    sbit  B0D57_bit at B0D5.B7;

    // B0D6 bits
    const register unsigned short int B0D60 = 0;
    sbit  B0D60_bit at B0D6.B0;
    const register unsigned short int B0D61 = 1;
    sbit  B0D61_bit at B0D6.B1;
    const register unsigned short int B0D62 = 2;
    sbit  B0D62_bit at B0D6.B2;
    const register unsigned short int B0D63 = 3;
    sbit  B0D63_bit at B0D6.B3;
    const register unsigned short int B0D64 = 4;
    sbit  B0D64_bit at B0D6.B4;
    const register unsigned short int B0D65 = 5;
    sbit  B0D65_bit at B0D6.B5;
    const register unsigned short int B0D66 = 6;
    sbit  B0D66_bit at B0D6.B6;
    const register unsigned short int B0D67 = 7;
    sbit  B0D67_bit at B0D6.B7;

    // B0D7 bits
    const register unsigned short int B0D70 = 0;
    sbit  B0D70_bit at B0D7.B0;
    const register unsigned short int B0D71 = 1;
    sbit  B0D71_bit at B0D7.B1;
    const register unsigned short int B0D72 = 2;
    sbit  B0D72_bit at B0D7.B2;
    const register unsigned short int B0D73 = 3;
    sbit  B0D73_bit at B0D7.B3;
    const register unsigned short int B0D74 = 4;
    sbit  B0D74_bit at B0D7.B4;
    const register unsigned short int B0D75 = 5;
    sbit  B0D75_bit at B0D7.B5;
    const register unsigned short int B0D76 = 6;
    sbit  B0D76_bit at B0D7.B6;
    const register unsigned short int B0D77 = 7;
    sbit  B0D77_bit at B0D7.B7;

    // CANSTAT_RO9 bits
    const register unsigned short int EICODE0 = 0;
    sbit  EICODE0_bit at CANSTAT_RO9.B0;
    const register unsigned short int EICODE1_ICODE0 = 1;
    sbit  EICODE1_ICODE0_bit at CANSTAT_RO9.B1;
    const register unsigned short int EICODE2_ICODE1 = 2;
    sbit  EICODE2_ICODE1_bit at CANSTAT_RO9.B2;
    const register unsigned short int EICODE3_ICODE2 = 3;
    sbit  EICODE3_ICODE2_bit at CANSTAT_RO9.B3;
    const register unsigned short int EICODE4 = 4;
    sbit  EICODE4_bit at CANSTAT_RO9.B4;
    const register unsigned short int OPMODE0 = 5;
    sbit  OPMODE0_bit at CANSTAT_RO9.B5;
    const register unsigned short int OPMODE1 = 6;
    sbit  OPMODE1_bit at CANSTAT_RO9.B6;
    const register unsigned short int OPMODE2 = 7;
    sbit  OPMODE2_bit at CANSTAT_RO9.B7;
    const register unsigned short int ICODE0 = 0;
    sbit  ICODE0_bit at CANSTAT_RO9.B0;
    const register unsigned short int ICODE1 = 1;
    sbit  ICODE1_bit at CANSTAT_RO9.B1;
    const register unsigned short int ICODE2 = 2;
    sbit  ICODE2_bit at CANSTAT_RO9.B2;
    const register unsigned short int ICODE3 = 3;
    sbit  ICODE3_bit at CANSTAT_RO9.B3;
    const register unsigned short int ICODE4 = 4;
    sbit  ICODE4_bit at CANSTAT_RO9.B4;

    // CANCON_RO9 bits
    const register unsigned short int FP0 = 0;
    sbit  FP0_bit at CANCON_RO9.B0;
    const register unsigned short int WIN0_FP1 = 1;
    sbit  WIN0_FP1_bit at CANCON_RO9.B1;
    const register unsigned short int WIN1_FP2 = 2;
    sbit  WIN1_FP2_bit at CANCON_RO9.B2;
    const register unsigned short int WIN2_FP3 = 3;
    sbit  WIN2_FP3_bit at CANCON_RO9.B3;
    const register unsigned short int ABAT = 4;
    sbit  ABAT_bit at CANCON_RO9.B4;
    const register unsigned short int REQOP0 = 5;
    sbit  REQOP0_bit at CANCON_RO9.B5;
    const register unsigned short int REQOP1 = 6;
    sbit  REQOP1_bit at CANCON_RO9.B6;
    const register unsigned short int REQOP2 = 7;
    sbit  REQOP2_bit at CANCON_RO9.B7;
    const register unsigned short int WIN0 = 1;
    sbit  WIN0_bit at CANCON_RO9.B1;
    const register unsigned short int WIN1 = 2;
    sbit  WIN1_bit at CANCON_RO9.B2;
    const register unsigned short int WIN2 = 3;
    sbit  WIN2_bit at CANCON_RO9.B3;

    // B1CON bits
    sbit  FILHIT0_TXPRI0_B1CON_bit at B1CON.B0;
    sbit  FILHIT1_TXPRI1_B1CON_bit at B1CON.B1;
    sbit  FILHIT2_RTREN_B1CON_bit at B1CON.B2;
    sbit  FILHIT3_TXREQ_B1CON_bit at B1CON.B3;
    sbit  FILHIT4_TXERR_B1CON_bit at B1CON.B4;
    sbit  RXRTRRO_TXLARB_B1CON_bit at B1CON.B5;
    sbit  RXM1_TXABT_B1CON_bit at B1CON.B6;
    sbit  RXFUL_TXBIF_B1CON_bit at B1CON.B7;
    sbit  FILHIT0_B1CON_bit at B1CON.B0;
    sbit  FILHIT1_B1CON_bit at B1CON.B1;
    sbit  FILHIT2_B1CON_bit at B1CON.B2;
    sbit  FILHIT3_B1CON_bit at B1CON.B3;
    sbit  FILHIT4_B1CON_bit at B1CON.B4;
    sbit  RTRRO_B1CON_bit at B1CON.B5;
    sbit  RXM1_B1CON_bit at B1CON.B6;
    sbit  RXFUL_B1CON_bit at B1CON.B7;
    sbit  TXPRI0_B1CON_bit at B1CON.B0;
    sbit  TXPRI1_B1CON_bit at B1CON.B1;
    sbit  RTREN_B1CON_bit at B1CON.B2;
    sbit  TXREQ_B1CON_bit at B1CON.B3;
    sbit  TXERR_B1CON_bit at B1CON.B4;
    sbit  TXLARB_B1CON_bit at B1CON.B5;
    sbit  TXABT_B1CON_bit at B1CON.B6;
    sbit  TXBIF_B1CON_bit at B1CON.B7;
    const register unsigned short int RXRTRRO_B1CON = 5;
    sbit  RXRTRRO_B1CON_bit at B1CON.B5;

    // B1SIDH bits
    sbit  SID3_B1SIDH_bit at B1SIDH.B0;
    sbit  SID4_B1SIDH_bit at B1SIDH.B1;
    sbit  SID5_B1SIDH_bit at B1SIDH.B2;
    sbit  SID6_B1SIDH_bit at B1SIDH.B3;
    sbit  SID7_B1SIDH_bit at B1SIDH.B4;
    sbit  SID8_B1SIDH_bit at B1SIDH.B5;
    sbit  SID9_B1SIDH_bit at B1SIDH.B6;
    sbit  SID10_B1SIDH_bit at B1SIDH.B7;

    // B1SIDL bits
    sbit  EID16_B1SIDL_bit at B1SIDL.B0;
    sbit  EID17_B1SIDL_bit at B1SIDL.B1;
    sbit  EXIDE_B1SIDL_bit at B1SIDL.B3;
    sbit  SRR_B1SIDL_bit at B1SIDL.B4;
    sbit  SID0_B1SIDL_bit at B1SIDL.B5;
    sbit  SID1_B1SIDL_bit at B1SIDL.B6;
    sbit  SID2_B1SIDL_bit at B1SIDL.B7;
    sbit  EXID_B1SIDL_bit at B1SIDL.B3;

    // B1EIDH bits
    sbit  EID8_B1EIDH_bit at B1EIDH.B0;
    sbit  EID9_B1EIDH_bit at B1EIDH.B1;
    sbit  EID10_B1EIDH_bit at B1EIDH.B2;
    sbit  EID11_B1EIDH_bit at B1EIDH.B3;
    sbit  EID12_B1EIDH_bit at B1EIDH.B4;
    sbit  EID13_B1EIDH_bit at B1EIDH.B5;
    sbit  EID14_B1EIDH_bit at B1EIDH.B6;
    sbit  EID15_B1EIDH_bit at B1EIDH.B7;

    // B1EIDL bits
    sbit  EID0_B1EIDL_bit at B1EIDL.B0;
    sbit  EID1_B1EIDL_bit at B1EIDL.B1;
    sbit  EID2_B1EIDL_bit at B1EIDL.B2;
    sbit  EID3_B1EIDL_bit at B1EIDL.B3;
    sbit  EID4_B1EIDL_bit at B1EIDL.B4;
    sbit  EID5_B1EIDL_bit at B1EIDL.B5;
    sbit  EID6_B1EIDL_bit at B1EIDL.B6;
    sbit  EID7_B1EIDL_bit at B1EIDL.B7;

    // B1DLC bits
    sbit  DLC0_B1DLC_bit at B1DLC.B0;
    sbit  DLC1_B1DLC_bit at B1DLC.B1;
    sbit  DLC2_B1DLC_bit at B1DLC.B2;
    sbit  DLC3_B1DLC_bit at B1DLC.B3;
    const register unsigned short int RB0_B1DLC = 4;
    sbit  RB0_B1DLC_bit at B1DLC.B4;
    const register unsigned short int RB1_B1DLC = 5;
    sbit  RB1_B1DLC_bit at B1DLC.B5;
    sbit  RXRTR_TXRTR_B1DLC_bit at B1DLC.B6;
    sbit  RESRB0_B1DLC_bit at B1DLC.B4;
    sbit  RESRB1_B1DLC_bit at B1DLC.B5;
    sbit  TXRTR_B1DLC_bit at B1DLC.B6;
    sbit  RXRTR_B1DLC_bit at B1DLC.B6;

    // B1D0 bits
    const register unsigned short int B1D00 = 0;
    sbit  B1D00_bit at B1D0.B0;
    const register unsigned short int B1D01 = 1;
    sbit  B1D01_bit at B1D0.B1;
    const register unsigned short int B1D02 = 2;
    sbit  B1D02_bit at B1D0.B2;
    const register unsigned short int B1D03 = 3;
    sbit  B1D03_bit at B1D0.B3;
    const register unsigned short int B1D04 = 4;
    sbit  B1D04_bit at B1D0.B4;
    const register unsigned short int B1D05 = 5;
    sbit  B1D05_bit at B1D0.B5;
    const register unsigned short int B1D06 = 6;
    sbit  B1D06_bit at B1D0.B6;
    const register unsigned short int B1D07 = 7;
    sbit  B1D07_bit at B1D0.B7;

    // B1D1 bits
    const register unsigned short int B1D10 = 0;
    sbit  B1D10_bit at B1D1.B0;
    const register unsigned short int B1D11 = 1;
    sbit  B1D11_bit at B1D1.B1;
    const register unsigned short int B1D12 = 2;
    sbit  B1D12_bit at B1D1.B2;
    const register unsigned short int B1D13 = 3;
    sbit  B1D13_bit at B1D1.B3;
    const register unsigned short int B1D14 = 4;
    sbit  B1D14_bit at B1D1.B4;
    const register unsigned short int B1D15 = 5;
    sbit  B1D15_bit at B1D1.B5;
    const register unsigned short int B1D16 = 6;
    sbit  B1D16_bit at B1D1.B6;
    const register unsigned short int B1D17 = 7;
    sbit  B1D17_bit at B1D1.B7;

    // B1D2 bits
    const register unsigned short int B1D20 = 0;
    sbit  B1D20_bit at B1D2.B0;
    const register unsigned short int B1D21 = 1;
    sbit  B1D21_bit at B1D2.B1;
    const register unsigned short int B1D22 = 2;
    sbit  B1D22_bit at B1D2.B2;
    const register unsigned short int B1D23 = 3;
    sbit  B1D23_bit at B1D2.B3;
    const register unsigned short int B1D24 = 4;
    sbit  B1D24_bit at B1D2.B4;
    const register unsigned short int B1D25 = 5;
    sbit  B1D25_bit at B1D2.B5;
    const register unsigned short int B1D26 = 6;
    sbit  B1D26_bit at B1D2.B6;
    const register unsigned short int B1D27 = 7;
    sbit  B1D27_bit at B1D2.B7;

    // B1D3 bits
    const register unsigned short int B1D30 = 0;
    sbit  B1D30_bit at B1D3.B0;
    const register unsigned short int B1D31 = 1;
    sbit  B1D31_bit at B1D3.B1;
    const register unsigned short int B1D32 = 2;
    sbit  B1D32_bit at B1D3.B2;
    const register unsigned short int B1D33 = 3;
    sbit  B1D33_bit at B1D3.B3;
    const register unsigned short int B1D34 = 4;
    sbit  B1D34_bit at B1D3.B4;
    const register unsigned short int B1D35 = 5;
    sbit  B1D35_bit at B1D3.B5;
    const register unsigned short int B1D36 = 6;
    sbit  B1D36_bit at B1D3.B6;
    const register unsigned short int B1D37 = 7;
    sbit  B1D37_bit at B1D3.B7;

    // B1D4 bits
    const register unsigned short int B1D40 = 0;
    sbit  B1D40_bit at B1D4.B0;
    const register unsigned short int B1D41 = 1;
    sbit  B1D41_bit at B1D4.B1;
    const register unsigned short int B1D42 = 2;
    sbit  B1D42_bit at B1D4.B2;
    const register unsigned short int B1D43 = 3;
    sbit  B1D43_bit at B1D4.B3;
    const register unsigned short int B1D44 = 4;
    sbit  B1D44_bit at B1D4.B4;
    const register unsigned short int B1D45 = 5;
    sbit  B1D45_bit at B1D4.B5;
    const register unsigned short int B1D46 = 6;
    sbit  B1D46_bit at B1D4.B6;
    const register unsigned short int B1D47 = 7;
    sbit  B1D47_bit at B1D4.B7;

    // B1D5 bits
    const register unsigned short int B1D50 = 0;
    sbit  B1D50_bit at B1D5.B0;
    const register unsigned short int B1D51 = 1;
    sbit  B1D51_bit at B1D5.B1;
    const register unsigned short int B1D52 = 2;
    sbit  B1D52_bit at B1D5.B2;
    const register unsigned short int B1D53 = 3;
    sbit  B1D53_bit at B1D5.B3;
    const register unsigned short int B1D54 = 4;
    sbit  B1D54_bit at B1D5.B4;
    const register unsigned short int B1D55 = 5;
    sbit  B1D55_bit at B1D5.B5;
    const register unsigned short int B1D56 = 6;
    sbit  B1D56_bit at B1D5.B6;
    const register unsigned short int B1D57 = 7;
    sbit  B1D57_bit at B1D5.B7;

    // B1D6 bits
    const register unsigned short int B1D60 = 0;
    sbit  B1D60_bit at B1D6.B0;
    const register unsigned short int B1D61 = 1;
    sbit  B1D61_bit at B1D6.B1;
    const register unsigned short int B1D62 = 2;
    sbit  B1D62_bit at B1D6.B2;
    const register unsigned short int B1D63 = 3;
    sbit  B1D63_bit at B1D6.B3;
    const register unsigned short int B1D64 = 4;
    sbit  B1D64_bit at B1D6.B4;
    const register unsigned short int B1D65 = 5;
    sbit  B1D65_bit at B1D6.B5;
    const register unsigned short int B1D66 = 6;
    sbit  B1D66_bit at B1D6.B6;
    const register unsigned short int B1D67 = 7;
    sbit  B1D67_bit at B1D6.B7;

    // B1D7 bits
    const register unsigned short int B1D70 = 0;
    sbit  B1D70_bit at B1D7.B0;
    const register unsigned short int B1D71 = 1;
    sbit  B1D71_bit at B1D7.B1;
    const register unsigned short int B1D72 = 2;
    sbit  B1D72_bit at B1D7.B2;
    const register unsigned short int B1D73 = 3;
    sbit  B1D73_bit at B1D7.B3;
    const register unsigned short int B1D74 = 4;
    sbit  B1D74_bit at B1D7.B4;
    const register unsigned short int B1D75 = 5;
    sbit  B1D75_bit at B1D7.B5;
    const register unsigned short int B1D76 = 6;
    sbit  B1D76_bit at B1D7.B6;
    const register unsigned short int B1D77 = 7;
    sbit  B1D77_bit at B1D7.B7;

    // CANSTAT_RO8 bits
    sbit  EICODE0_CANSTAT_RO8_bit at CANSTAT_RO8.B0;
    sbit  EICODE1_ICODE0_CANSTAT_RO8_bit at CANSTAT_RO8.B1;
    sbit  EICODE2_ICODE1_CANSTAT_RO8_bit at CANSTAT_RO8.B2;
    sbit  EICODE3_ICODE2_CANSTAT_RO8_bit at CANSTAT_RO8.B3;
    sbit  EICODE4_CANSTAT_RO8_bit at CANSTAT_RO8.B4;
    sbit  OPMODE0_CANSTAT_RO8_bit at CANSTAT_RO8.B5;
    sbit  OPMODE1_CANSTAT_RO8_bit at CANSTAT_RO8.B6;
    sbit  OPMODE2_CANSTAT_RO8_bit at CANSTAT_RO8.B7;
    sbit  ICODE0_CANSTAT_RO8_bit at CANSTAT_RO8.B0;
    sbit  ICODE1_CANSTAT_RO8_bit at CANSTAT_RO8.B1;
    sbit  ICODE2_CANSTAT_RO8_bit at CANSTAT_RO8.B2;
    sbit  ICODE3_CANSTAT_RO8_bit at CANSTAT_RO8.B3;
    sbit  ICODE4_CANSTAT_RO8_bit at CANSTAT_RO8.B4;

    // CANCON_RO8 bits
    sbit  FP0_CANCON_RO8_bit at CANCON_RO8.B0;
    sbit  WIN0_FP1_CANCON_RO8_bit at CANCON_RO8.B1;
    sbit  WIN1_FP2_CANCON_RO8_bit at CANCON_RO8.B2;
    sbit  WIN2_FP3_CANCON_RO8_bit at CANCON_RO8.B3;
    sbit  ABAT_CANCON_RO8_bit at CANCON_RO8.B4;
    sbit  REQOP0_CANCON_RO8_bit at CANCON_RO8.B5;
    sbit  REQOP1_CANCON_RO8_bit at CANCON_RO8.B6;
    sbit  REQOP2_CANCON_RO8_bit at CANCON_RO8.B7;
    sbit  WIN0_CANCON_RO8_bit at CANCON_RO8.B1;
    sbit  WIN1_CANCON_RO8_bit at CANCON_RO8.B2;
    sbit  WIN2_CANCON_RO8_bit at CANCON_RO8.B3;

    // B2CON bits
    sbit  FILHIT0_TXPRI0_B2CON_bit at B2CON.B0;
    sbit  FILHIT1_TXPRI1_B2CON_bit at B2CON.B1;
    sbit  FILHIT2_RTREN_B2CON_bit at B2CON.B2;
    sbit  FILHIT3_TXREQ_B2CON_bit at B2CON.B3;
    sbit  FILHIT4_TXERR_B2CON_bit at B2CON.B4;
    sbit  RXRTRRO_TXLARB_B2CON_bit at B2CON.B5;
    sbit  RXM1_TXABT_B2CON_bit at B2CON.B6;
    sbit  RXFUL_TXBIF_B2CON_bit at B2CON.B7;
    sbit  FILHIT0_B2CON_bit at B2CON.B0;
    sbit  FILHIT1_B2CON_bit at B2CON.B1;
    sbit  FILHIT2_B2CON_bit at B2CON.B2;
    sbit  FILHIT3_B2CON_bit at B2CON.B3;
    sbit  FILHIT4_B2CON_bit at B2CON.B4;
    sbit  RTRRO_B2CON_bit at B2CON.B5;
    sbit  RXM1_B2CON_bit at B2CON.B6;
    sbit  RXFUL_B2CON_bit at B2CON.B7;
    sbit  TXPRI0_B2CON_bit at B2CON.B0;
    sbit  TXPRI1_B2CON_bit at B2CON.B1;
    sbit  RTREN_B2CON_bit at B2CON.B2;
    sbit  TXREQ_B2CON_bit at B2CON.B3;
    sbit  TXERR_B2CON_bit at B2CON.B4;
    sbit  TXLARB_B2CON_bit at B2CON.B5;
    sbit  TXABT_B2CON_bit at B2CON.B6;
    sbit  TXBIF_B2CON_bit at B2CON.B7;
    const register unsigned short int RXRTRRO_B2CON = 5;
    sbit  RXRTRRO_B2CON_bit at B2CON.B5;

    // B2SIDH bits
    sbit  SID3_B2SIDH_bit at B2SIDH.B0;
    sbit  SID4_B2SIDH_bit at B2SIDH.B1;
    sbit  SID5_B2SIDH_bit at B2SIDH.B2;
    sbit  SID6_B2SIDH_bit at B2SIDH.B3;
    sbit  SID7_B2SIDH_bit at B2SIDH.B4;
    sbit  SID8_B2SIDH_bit at B2SIDH.B5;
    sbit  SID9_B2SIDH_bit at B2SIDH.B6;
    sbit  SID10_B2SIDH_bit at B2SIDH.B7;

    // B2SIDL bits
    sbit  EID16_B2SIDL_bit at B2SIDL.B0;
    sbit  EID17_B2SIDL_bit at B2SIDL.B1;
    sbit  EXIDE_B2SIDL_bit at B2SIDL.B3;
    sbit  SRR_B2SIDL_bit at B2SIDL.B4;
    sbit  SID0_B2SIDL_bit at B2SIDL.B5;
    sbit  SID1_B2SIDL_bit at B2SIDL.B6;
    sbit  SID2_B2SIDL_bit at B2SIDL.B7;
    sbit  EXID_B2SIDL_bit at B2SIDL.B3;

    // B2EIDH bits
    sbit  EID8_B2EIDH_bit at B2EIDH.B0;
    sbit  EID9_B2EIDH_bit at B2EIDH.B1;
    sbit  EID10_B2EIDH_bit at B2EIDH.B2;
    sbit  EID11_B2EIDH_bit at B2EIDH.B3;
    sbit  EID12_B2EIDH_bit at B2EIDH.B4;
    sbit  EID13_B2EIDH_bit at B2EIDH.B5;
    sbit  EID14_B2EIDH_bit at B2EIDH.B6;
    sbit  EID15_B2EIDH_bit at B2EIDH.B7;

    // B2EIDL bits
    sbit  EID0_B2EIDL_bit at B2EIDL.B0;
    sbit  EID1_B2EIDL_bit at B2EIDL.B1;
    sbit  EID2_B2EIDL_bit at B2EIDL.B2;
    sbit  EID3_B2EIDL_bit at B2EIDL.B3;
    sbit  EID4_B2EIDL_bit at B2EIDL.B4;
    sbit  EID5_B2EIDL_bit at B2EIDL.B5;
    sbit  EID6_B2EIDL_bit at B2EIDL.B6;
    sbit  EID7_B2EIDL_bit at B2EIDL.B7;

    // B2DLC bits
    sbit  DLC0_B2DLC_bit at B2DLC.B0;
    sbit  DLC1_B2DLC_bit at B2DLC.B1;
    sbit  DLC2_B2DLC_bit at B2DLC.B2;
    sbit  DLC3_B2DLC_bit at B2DLC.B3;
    const register unsigned short int RB0_B2DLC = 4;
    sbit  RB0_B2DLC_bit at B2DLC.B4;
    const register unsigned short int RB1_B2DLC = 5;
    sbit  RB1_B2DLC_bit at B2DLC.B5;
    sbit  RXRTR_TXRTR_B2DLC_bit at B2DLC.B6;
    sbit  RESRB0_B2DLC_bit at B2DLC.B4;
    sbit  RESRB1_B2DLC_bit at B2DLC.B5;
    sbit  TXRTR_B2DLC_bit at B2DLC.B6;
    sbit  RXRTR_B2DLC_bit at B2DLC.B6;

    // B2D0 bits
    const register unsigned short int B2D00 = 0;
    sbit  B2D00_bit at B2D0.B0;
    const register unsigned short int B2D01 = 1;
    sbit  B2D01_bit at B2D0.B1;
    const register unsigned short int B2D02 = 2;
    sbit  B2D02_bit at B2D0.B2;
    const register unsigned short int B2D03 = 3;
    sbit  B2D03_bit at B2D0.B3;
    const register unsigned short int B2D04 = 4;
    sbit  B2D04_bit at B2D0.B4;
    const register unsigned short int B2D05 = 5;
    sbit  B2D05_bit at B2D0.B5;
    const register unsigned short int B2D06 = 6;
    sbit  B2D06_bit at B2D0.B6;
    const register unsigned short int B2D07 = 7;
    sbit  B2D07_bit at B2D0.B7;

    // B2D1 bits
    const register unsigned short int B2D10 = 0;
    sbit  B2D10_bit at B2D1.B0;
    const register unsigned short int B2D11 = 1;
    sbit  B2D11_bit at B2D1.B1;
    const register unsigned short int B2D12 = 2;
    sbit  B2D12_bit at B2D1.B2;
    const register unsigned short int B2D13 = 3;
    sbit  B2D13_bit at B2D1.B3;
    const register unsigned short int B2D14 = 4;
    sbit  B2D14_bit at B2D1.B4;
    const register unsigned short int B2D15 = 5;
    sbit  B2D15_bit at B2D1.B5;
    const register unsigned short int B2D16 = 6;
    sbit  B2D16_bit at B2D1.B6;
    const register unsigned short int B2D17 = 7;
    sbit  B2D17_bit at B2D1.B7;

    // B2D2 bits
    const register unsigned short int B2D20 = 0;
    sbit  B2D20_bit at B2D2.B0;
    const register unsigned short int B2D21 = 1;
    sbit  B2D21_bit at B2D2.B1;
    const register unsigned short int B2D22 = 2;
    sbit  B2D22_bit at B2D2.B2;
    const register unsigned short int B2D23 = 3;
    sbit  B2D23_bit at B2D2.B3;
    const register unsigned short int B2D24 = 4;
    sbit  B2D24_bit at B2D2.B4;
    const register unsigned short int B2D25 = 5;
    sbit  B2D25_bit at B2D2.B5;
    const register unsigned short int B2D26 = 6;
    sbit  B2D26_bit at B2D2.B6;
    const register unsigned short int B2D27 = 7;
    sbit  B2D27_bit at B2D2.B7;

    // B2D3 bits
    const register unsigned short int B2D30 = 0;
    sbit  B2D30_bit at B2D3.B0;
    const register unsigned short int B2D31 = 1;
    sbit  B2D31_bit at B2D3.B1;
    const register unsigned short int B2D32 = 2;
    sbit  B2D32_bit at B2D3.B2;
    const register unsigned short int B2D33 = 3;
    sbit  B2D33_bit at B2D3.B3;
    const register unsigned short int B2D34 = 4;
    sbit  B2D34_bit at B2D3.B4;
    const register unsigned short int B2D35 = 5;
    sbit  B2D35_bit at B2D3.B5;
    const register unsigned short int B2D36 = 6;
    sbit  B2D36_bit at B2D3.B6;
    const register unsigned short int B2D37 = 7;
    sbit  B2D37_bit at B2D3.B7;

    // B2D4 bits
    const register unsigned short int B2D40 = 0;
    sbit  B2D40_bit at B2D4.B0;
    const register unsigned short int B2D41 = 1;
    sbit  B2D41_bit at B2D4.B1;
    const register unsigned short int B2D42 = 2;
    sbit  B2D42_bit at B2D4.B2;
    const register unsigned short int B2D43 = 3;
    sbit  B2D43_bit at B2D4.B3;
    const register unsigned short int B2D44 = 4;
    sbit  B2D44_bit at B2D4.B4;
    const register unsigned short int B2D45 = 5;
    sbit  B2D45_bit at B2D4.B5;
    const register unsigned short int B2D46 = 6;
    sbit  B2D46_bit at B2D4.B6;
    const register unsigned short int B2D47 = 7;
    sbit  B2D47_bit at B2D4.B7;

    // B2D5 bits
    const register unsigned short int B2D50 = 0;
    sbit  B2D50_bit at B2D5.B0;
    const register unsigned short int B2D51 = 1;
    sbit  B2D51_bit at B2D5.B1;
    const register unsigned short int B2D52 = 2;
    sbit  B2D52_bit at B2D5.B2;
    const register unsigned short int B2D53 = 3;
    sbit  B2D53_bit at B2D5.B3;
    const register unsigned short int B2D54 = 4;
    sbit  B2D54_bit at B2D5.B4;
    const register unsigned short int B2D55 = 5;
    sbit  B2D55_bit at B2D5.B5;
    const register unsigned short int B2D56 = 6;
    sbit  B2D56_bit at B2D5.B6;
    const register unsigned short int B2D57 = 7;
    sbit  B2D57_bit at B2D5.B7;

    // B2D6 bits
    const register unsigned short int B2D60 = 0;
    sbit  B2D60_bit at B2D6.B0;
    const register unsigned short int B2D61 = 1;
    sbit  B2D61_bit at B2D6.B1;
    const register unsigned short int B2D62 = 2;
    sbit  B2D62_bit at B2D6.B2;
    const register unsigned short int B2D63 = 3;
    sbit  B2D63_bit at B2D6.B3;
    const register unsigned short int B2D64 = 4;
    sbit  B2D64_bit at B2D6.B4;
    const register unsigned short int B2D65 = 5;
    sbit  B2D65_bit at B2D6.B5;
    const register unsigned short int B2D66 = 6;
    sbit  B2D66_bit at B2D6.B6;
    const register unsigned short int B2D67 = 7;
    sbit  B2D67_bit at B2D6.B7;

    // B2D7 bits
    const register unsigned short int B2D70 = 0;
    sbit  B2D70_bit at B2D7.B0;
    const register unsigned short int B2D71 = 1;
    sbit  B2D71_bit at B2D7.B1;
    const register unsigned short int B2D72 = 2;
    sbit  B2D72_bit at B2D7.B2;
    const register unsigned short int B2D73 = 3;
    sbit  B2D73_bit at B2D7.B3;
    const register unsigned short int B2D74 = 4;
    sbit  B2D74_bit at B2D7.B4;
    const register unsigned short int B2D75 = 5;
    sbit  B2D75_bit at B2D7.B5;
    const register unsigned short int B2D76 = 6;
    sbit  B2D76_bit at B2D7.B6;
    const register unsigned short int B2D77 = 7;
    sbit  B2D77_bit at B2D7.B7;

    // CANSTAT_RO7 bits
    sbit  EICODE0_CANSTAT_RO7_bit at CANSTAT_RO7.B0;
    sbit  EICODE1_ICODE0_CANSTAT_RO7_bit at CANSTAT_RO7.B1;
    sbit  EICODE2_ICODE1_CANSTAT_RO7_bit at CANSTAT_RO7.B2;
    sbit  EICODE3_ICODE2_CANSTAT_RO7_bit at CANSTAT_RO7.B3;
    sbit  EICODE4_CANSTAT_RO7_bit at CANSTAT_RO7.B4;
    sbit  OPMODE0_CANSTAT_RO7_bit at CANSTAT_RO7.B5;
    sbit  OPMODE1_CANSTAT_RO7_bit at CANSTAT_RO7.B6;
    sbit  OPMODE2_CANSTAT_RO7_bit at CANSTAT_RO7.B7;
    sbit  ICODE0_CANSTAT_RO7_bit at CANSTAT_RO7.B0;
    sbit  ICODE1_CANSTAT_RO7_bit at CANSTAT_RO7.B1;
    sbit  ICODE2_CANSTAT_RO7_bit at CANSTAT_RO7.B2;
    sbit  ICODE3_CANSTAT_RO7_bit at CANSTAT_RO7.B3;
    sbit  ICODE4_CANSTAT_RO7_bit at CANSTAT_RO7.B4;

    // CANCON_RO7 bits
    sbit  FP0_CANCON_RO7_bit at CANCON_RO7.B0;
    sbit  WIN0_FP1_CANCON_RO7_bit at CANCON_RO7.B1;
    sbit  WIN1_FP2_CANCON_RO7_bit at CANCON_RO7.B2;
    sbit  WIN2_FP3_CANCON_RO7_bit at CANCON_RO7.B3;
    sbit  ABAT_CANCON_RO7_bit at CANCON_RO7.B4;
    sbit  REQOP0_CANCON_RO7_bit at CANCON_RO7.B5;
    sbit  REQOP1_CANCON_RO7_bit at CANCON_RO7.B6;
    sbit  REQOP2_CANCON_RO7_bit at CANCON_RO7.B7;
    sbit  WIN0_CANCON_RO7_bit at CANCON_RO7.B1;
    sbit  WIN1_CANCON_RO7_bit at CANCON_RO7.B2;
    sbit  WIN2_CANCON_RO7_bit at CANCON_RO7.B3;

    // B3CON bits
    sbit  FILHIT0_TXPRI0_B3CON_bit at B3CON.B0;
    sbit  FILHIT1_TXPRI1_B3CON_bit at B3CON.B1;
    sbit  FILHIT2_RTREN_B3CON_bit at B3CON.B2;
    sbit  FILHIT3_TXREQ_B3CON_bit at B3CON.B3;
    sbit  FILHIT4_TXERR_B3CON_bit at B3CON.B4;
    sbit  RXRTRRO_TXLARB_B3CON_bit at B3CON.B5;
    sbit  RXM1_TXABT_B3CON_bit at B3CON.B6;
    sbit  RXFUL_TXBIF_B3CON_bit at B3CON.B7;
    sbit  FILHIT0_B3CON_bit at B3CON.B0;
    sbit  FILHIT1_B3CON_bit at B3CON.B1;
    sbit  FILHIT2_B3CON_bit at B3CON.B2;
    sbit  FILHIT3_B3CON_bit at B3CON.B3;
    sbit  FILHIT4_B3CON_bit at B3CON.B4;
    sbit  RTRRO_B3CON_bit at B3CON.B5;
    sbit  RXM1_B3CON_bit at B3CON.B6;
    sbit  RXFUL_B3CON_bit at B3CON.B7;
    sbit  TXPRI0_B3CON_bit at B3CON.B0;
    sbit  TXPRI1_B3CON_bit at B3CON.B1;
    sbit  RTREN_B3CON_bit at B3CON.B2;
    sbit  TXREQ_B3CON_bit at B3CON.B3;
    sbit  TXERR_B3CON_bit at B3CON.B4;
    sbit  TXLARB_B3CON_bit at B3CON.B5;
    sbit  TXABT_B3CON_bit at B3CON.B6;
    sbit  TXBIF_B3CON_bit at B3CON.B7;
    const register unsigned short int RXRTRRO_B3CON = 5;
    sbit  RXRTRRO_B3CON_bit at B3CON.B5;

    // B3SIDH bits
    sbit  SID3_B3SIDH_bit at B3SIDH.B0;
    sbit  SID4_B3SIDH_bit at B3SIDH.B1;
    sbit  SID5_B3SIDH_bit at B3SIDH.B2;
    sbit  SID6_B3SIDH_bit at B3SIDH.B3;
    sbit  SID7_B3SIDH_bit at B3SIDH.B4;
    sbit  SID8_B3SIDH_bit at B3SIDH.B5;
    sbit  SID9_B3SIDH_bit at B3SIDH.B6;
    sbit  SID10_B3SIDH_bit at B3SIDH.B7;

    // B3SIDL bits
    sbit  EID16_B3SIDL_bit at B3SIDL.B0;
    sbit  EID17_B3SIDL_bit at B3SIDL.B1;
    sbit  EXIDE_B3SIDL_bit at B3SIDL.B3;
    sbit  SRR_B3SIDL_bit at B3SIDL.B4;
    sbit  SID0_B3SIDL_bit at B3SIDL.B5;
    sbit  SID1_B3SIDL_bit at B3SIDL.B6;
    sbit  SID2_B3SIDL_bit at B3SIDL.B7;
    sbit  EXID_B3SIDL_bit at B3SIDL.B3;

    // B3EIDH bits
    sbit  EID8_B3EIDH_bit at B3EIDH.B0;
    sbit  EID9_B3EIDH_bit at B3EIDH.B1;
    sbit  EID10_B3EIDH_bit at B3EIDH.B2;
    sbit  EID11_B3EIDH_bit at B3EIDH.B3;
    sbit  EID12_B3EIDH_bit at B3EIDH.B4;
    sbit  EID13_B3EIDH_bit at B3EIDH.B5;
    sbit  EID14_B3EIDH_bit at B3EIDH.B6;
    sbit  EID15_B3EIDH_bit at B3EIDH.B7;

    // B3EIDL bits
    sbit  EID0_B3EIDL_bit at B3EIDL.B0;
    sbit  EID1_B3EIDL_bit at B3EIDL.B1;
    sbit  EID2_B3EIDL_bit at B3EIDL.B2;
    sbit  EID3_B3EIDL_bit at B3EIDL.B3;
    sbit  EID4_B3EIDL_bit at B3EIDL.B4;
    sbit  EID5_B3EIDL_bit at B3EIDL.B5;
    sbit  EID6_B3EIDL_bit at B3EIDL.B6;
    sbit  EID7_B3EIDL_bit at B3EIDL.B7;

    // B3DLC bits
    sbit  DLC0_B3DLC_bit at B3DLC.B0;
    sbit  DLC1_B3DLC_bit at B3DLC.B1;
    sbit  DLC2_B3DLC_bit at B3DLC.B2;
    sbit  DLC3_B3DLC_bit at B3DLC.B3;
    const register unsigned short int RB0_B3DLC = 4;
    sbit  RB0_B3DLC_bit at B3DLC.B4;
    const register unsigned short int RB1_B3DLC = 5;
    sbit  RB1_B3DLC_bit at B3DLC.B5;
    sbit  RXRTR_TXRTR_B3DLC_bit at B3DLC.B6;
    sbit  RESRB0_B3DLC_bit at B3DLC.B4;
    sbit  RESRB1_B3DLC_bit at B3DLC.B5;
    sbit  TXRTR_B3DLC_bit at B3DLC.B6;
    sbit  RXRTR_B3DLC_bit at B3DLC.B6;

    // B3D0 bits
    const register unsigned short int B3D00 = 0;
    sbit  B3D00_bit at B3D0.B0;
    const register unsigned short int B3D01 = 1;
    sbit  B3D01_bit at B3D0.B1;
    const register unsigned short int B3D02 = 2;
    sbit  B3D02_bit at B3D0.B2;
    const register unsigned short int B3D03 = 3;
    sbit  B3D03_bit at B3D0.B3;
    const register unsigned short int B3D04 = 4;
    sbit  B3D04_bit at B3D0.B4;
    const register unsigned short int B3D05 = 5;
    sbit  B3D05_bit at B3D0.B5;
    const register unsigned short int B3D06 = 6;
    sbit  B3D06_bit at B3D0.B6;
    const register unsigned short int B3D07 = 7;
    sbit  B3D07_bit at B3D0.B7;

    // B3D1 bits
    const register unsigned short int B3D10 = 0;
    sbit  B3D10_bit at B3D1.B0;
    const register unsigned short int B3D11 = 1;
    sbit  B3D11_bit at B3D1.B1;
    const register unsigned short int B3D12 = 2;
    sbit  B3D12_bit at B3D1.B2;
    const register unsigned short int B3D13 = 3;
    sbit  B3D13_bit at B3D1.B3;
    const register unsigned short int B3D14 = 4;
    sbit  B3D14_bit at B3D1.B4;
    const register unsigned short int B3D15 = 5;
    sbit  B3D15_bit at B3D1.B5;
    const register unsigned short int B3D16 = 6;
    sbit  B3D16_bit at B3D1.B6;
    const register unsigned short int B3D17 = 7;
    sbit  B3D17_bit at B3D1.B7;

    // B3D2 bits
    const register unsigned short int B3D20 = 0;
    sbit  B3D20_bit at B3D2.B0;
    const register unsigned short int B3D21 = 1;
    sbit  B3D21_bit at B3D2.B1;
    const register unsigned short int B3D22 = 2;
    sbit  B3D22_bit at B3D2.B2;
    const register unsigned short int B3D23 = 3;
    sbit  B3D23_bit at B3D2.B3;
    const register unsigned short int B3D24 = 4;
    sbit  B3D24_bit at B3D2.B4;
    const register unsigned short int B3D25 = 5;
    sbit  B3D25_bit at B3D2.B5;
    const register unsigned short int B3D26 = 6;
    sbit  B3D26_bit at B3D2.B6;
    const register unsigned short int B3D27 = 7;
    sbit  B3D27_bit at B3D2.B7;

    // B3D3 bits
    const register unsigned short int B3D30 = 0;
    sbit  B3D30_bit at B3D3.B0;
    const register unsigned short int B3D31 = 1;
    sbit  B3D31_bit at B3D3.B1;
    const register unsigned short int B3D32 = 2;
    sbit  B3D32_bit at B3D3.B2;
    const register unsigned short int B3D33 = 3;
    sbit  B3D33_bit at B3D3.B3;
    const register unsigned short int B3D34 = 4;
    sbit  B3D34_bit at B3D3.B4;
    const register unsigned short int B3D35 = 5;
    sbit  B3D35_bit at B3D3.B5;
    const register unsigned short int B3D36 = 6;
    sbit  B3D36_bit at B3D3.B6;
    const register unsigned short int B3D37 = 7;
    sbit  B3D37_bit at B3D3.B7;

    // B3D4 bits
    const register unsigned short int B3D40 = 0;
    sbit  B3D40_bit at B3D4.B0;
    const register unsigned short int B3D41 = 1;
    sbit  B3D41_bit at B3D4.B1;
    const register unsigned short int B3D42 = 2;
    sbit  B3D42_bit at B3D4.B2;
    const register unsigned short int B3D43 = 3;
    sbit  B3D43_bit at B3D4.B3;
    const register unsigned short int B3D44 = 4;
    sbit  B3D44_bit at B3D4.B4;
    const register unsigned short int B3D45 = 5;
    sbit  B3D45_bit at B3D4.B5;
    const register unsigned short int B3D46 = 6;
    sbit  B3D46_bit at B3D4.B6;
    const register unsigned short int B3D47 = 7;
    sbit  B3D47_bit at B3D4.B7;

    // B3D5 bits
    const register unsigned short int B3D50 = 0;
    sbit  B3D50_bit at B3D5.B0;
    const register unsigned short int B3D51 = 1;
    sbit  B3D51_bit at B3D5.B1;
    const register unsigned short int B3D52 = 2;
    sbit  B3D52_bit at B3D5.B2;
    const register unsigned short int B3D53 = 3;
    sbit  B3D53_bit at B3D5.B3;
    const register unsigned short int B3D54 = 4;
    sbit  B3D54_bit at B3D5.B4;
    const register unsigned short int B3D55 = 5;
    sbit  B3D55_bit at B3D5.B5;
    const register unsigned short int B3D56 = 6;
    sbit  B3D56_bit at B3D5.B6;
    const register unsigned short int B3D57 = 7;
    sbit  B3D57_bit at B3D5.B7;

    // B3D6 bits
    const register unsigned short int B3D60 = 0;
    sbit  B3D60_bit at B3D6.B0;
    const register unsigned short int B3D61 = 1;
    sbit  B3D61_bit at B3D6.B1;
    const register unsigned short int B3D62 = 2;
    sbit  B3D62_bit at B3D6.B2;
    const register unsigned short int B3D63 = 3;
    sbit  B3D63_bit at B3D6.B3;
    const register unsigned short int B3D64 = 4;
    sbit  B3D64_bit at B3D6.B4;
    const register unsigned short int B3D65 = 5;
    sbit  B3D65_bit at B3D6.B5;
    const register unsigned short int B3D66 = 6;
    sbit  B3D66_bit at B3D6.B6;
    const register unsigned short int B3D67 = 7;
    sbit  B3D67_bit at B3D6.B7;

    // B3D7 bits
    const register unsigned short int B3D70 = 0;
    sbit  B3D70_bit at B3D7.B0;
    const register unsigned short int B3D71 = 1;
    sbit  B3D71_bit at B3D7.B1;
    const register unsigned short int B3D72 = 2;
    sbit  B3D72_bit at B3D7.B2;
    const register unsigned short int B3D73 = 3;
    sbit  B3D73_bit at B3D7.B3;
    const register unsigned short int B3D74 = 4;
    sbit  B3D74_bit at B3D7.B4;
    const register unsigned short int B3D75 = 5;
    sbit  B3D75_bit at B3D7.B5;
    const register unsigned short int B3D76 = 6;
    sbit  B3D76_bit at B3D7.B6;
    const register unsigned short int B3D77 = 7;
    sbit  B3D77_bit at B3D7.B7;

    // CANSTAT_RO6 bits
    sbit  EICODE0_CANSTAT_RO6_bit at CANSTAT_RO6.B0;
    sbit  EICODE1_ICODE0_CANSTAT_RO6_bit at CANSTAT_RO6.B1;
    sbit  EICODE2_ICODE1_CANSTAT_RO6_bit at CANSTAT_RO6.B2;
    sbit  EICODE3_ICODE2_CANSTAT_RO6_bit at CANSTAT_RO6.B3;
    sbit  EICODE4_CANSTAT_RO6_bit at CANSTAT_RO6.B4;
    sbit  OPMODE0_CANSTAT_RO6_bit at CANSTAT_RO6.B5;
    sbit  OPMODE1_CANSTAT_RO6_bit at CANSTAT_RO6.B6;
    sbit  OPMODE2_CANSTAT_RO6_bit at CANSTAT_RO6.B7;
    sbit  ICODE0_CANSTAT_RO6_bit at CANSTAT_RO6.B0;
    sbit  ICODE1_CANSTAT_RO6_bit at CANSTAT_RO6.B1;
    sbit  ICODE2_CANSTAT_RO6_bit at CANSTAT_RO6.B2;
    sbit  ICODE3_CANSTAT_RO6_bit at CANSTAT_RO6.B3;
    sbit  ICODE4_CANSTAT_RO6_bit at CANSTAT_RO6.B4;

    // CANCON_RO6 bits
    sbit  FP0_CANCON_RO6_bit at CANCON_RO6.B0;
    sbit  WIN0_FP1_CANCON_RO6_bit at CANCON_RO6.B1;
    sbit  WIN1_FP2_CANCON_RO6_bit at CANCON_RO6.B2;
    sbit  WIN2_FP3_CANCON_RO6_bit at CANCON_RO6.B3;
    sbit  ABAT_CANCON_RO6_bit at CANCON_RO6.B4;
    sbit  REQOP0_CANCON_RO6_bit at CANCON_RO6.B5;
    sbit  REQOP1_CANCON_RO6_bit at CANCON_RO6.B6;
    sbit  REQOP2_CANCON_RO6_bit at CANCON_RO6.B7;
    sbit  WIN0_CANCON_RO6_bit at CANCON_RO6.B1;
    sbit  WIN1_CANCON_RO6_bit at CANCON_RO6.B2;
    sbit  WIN2_CANCON_RO6_bit at CANCON_RO6.B3;

    // B4CON bits
    sbit  FILHIT0_TXPRI0_B4CON_bit at B4CON.B0;
    sbit  FILHIT1_TXPRI1_B4CON_bit at B4CON.B1;
    sbit  FILHIT2_RTREN_B4CON_bit at B4CON.B2;
    sbit  FILHIT3_TXREQ_B4CON_bit at B4CON.B3;
    sbit  FILHIT4_TXERR_B4CON_bit at B4CON.B4;
    sbit  RXRTRRO_TXLARB_B4CON_bit at B4CON.B5;
    sbit  RXM1_TXABT_B4CON_bit at B4CON.B6;
    sbit  RXFUL_TXBIF_B4CON_bit at B4CON.B7;
    sbit  FILHIT0_B4CON_bit at B4CON.B0;
    sbit  FILHIT1_B4CON_bit at B4CON.B1;
    sbit  FILHIT2_B4CON_bit at B4CON.B2;
    sbit  FILHIT3_B4CON_bit at B4CON.B3;
    sbit  FILHIT4_B4CON_bit at B4CON.B4;
    sbit  RTRRO_B4CON_bit at B4CON.B5;
    sbit  RXM1_B4CON_bit at B4CON.B6;
    sbit  RXFUL_B4CON_bit at B4CON.B7;
    sbit  TXPRI0_B4CON_bit at B4CON.B0;
    sbit  TXPRI1_B4CON_bit at B4CON.B1;
    sbit  RTREN_B4CON_bit at B4CON.B2;
    sbit  TXREQ_B4CON_bit at B4CON.B3;
    sbit  TXERR_B4CON_bit at B4CON.B4;
    sbit  TXLARB_B4CON_bit at B4CON.B5;
    sbit  TXABT_B4CON_bit at B4CON.B6;
    sbit  TXBIF_B4CON_bit at B4CON.B7;
    const register unsigned short int RXRTRRO_B4CON = 5;
    sbit  RXRTRRO_B4CON_bit at B4CON.B5;

    // B4SIDH bits
    sbit  SID3_B4SIDH_bit at B4SIDH.B0;
    sbit  SID4_B4SIDH_bit at B4SIDH.B1;
    sbit  SID5_B4SIDH_bit at B4SIDH.B2;
    sbit  SID6_B4SIDH_bit at B4SIDH.B3;
    sbit  SID7_B4SIDH_bit at B4SIDH.B4;
    sbit  SID8_B4SIDH_bit at B4SIDH.B5;
    sbit  SID9_B4SIDH_bit at B4SIDH.B6;
    sbit  SID10_B4SIDH_bit at B4SIDH.B7;

    // B4SIDL bits
    sbit  EID16_B4SIDL_bit at B4SIDL.B0;
    sbit  EID17_B4SIDL_bit at B4SIDL.B1;
    sbit  EXIDE_B4SIDL_bit at B4SIDL.B3;
    sbit  SRR_B4SIDL_bit at B4SIDL.B4;
    sbit  SID0_B4SIDL_bit at B4SIDL.B5;
    sbit  SID1_B4SIDL_bit at B4SIDL.B6;
    sbit  SID2_B4SIDL_bit at B4SIDL.B7;
    sbit  EXID_B4SIDL_bit at B4SIDL.B3;

    // B4EIDH bits
    sbit  EID8_B4EIDH_bit at B4EIDH.B0;
    sbit  EID9_B4EIDH_bit at B4EIDH.B1;
    sbit  EID10_B4EIDH_bit at B4EIDH.B2;
    sbit  EID11_B4EIDH_bit at B4EIDH.B3;
    sbit  EID12_B4EIDH_bit at B4EIDH.B4;
    sbit  EID13_B4EIDH_bit at B4EIDH.B5;
    sbit  EID14_B4EIDH_bit at B4EIDH.B6;
    sbit  EID15_B4EIDH_bit at B4EIDH.B7;

    // B4EIDL bits
    sbit  EID0_B4EIDL_bit at B4EIDL.B0;
    sbit  EID1_B4EIDL_bit at B4EIDL.B1;
    sbit  EID2_B4EIDL_bit at B4EIDL.B2;
    sbit  EID3_B4EIDL_bit at B4EIDL.B3;
    sbit  EID4_B4EIDL_bit at B4EIDL.B4;
    sbit  EID5_B4EIDL_bit at B4EIDL.B5;
    sbit  EID6_B4EIDL_bit at B4EIDL.B6;
    sbit  EID7_B4EIDL_bit at B4EIDL.B7;

    // B4DLC bits
    sbit  DLC0_B4DLC_bit at B4DLC.B0;
    sbit  DLC1_B4DLC_bit at B4DLC.B1;
    sbit  DLC2_B4DLC_bit at B4DLC.B2;
    sbit  DLC3_B4DLC_bit at B4DLC.B3;
    const register unsigned short int RB0_B4DLC = 4;
    sbit  RB0_B4DLC_bit at B4DLC.B4;
    const register unsigned short int RB1_B4DLC = 5;
    sbit  RB1_B4DLC_bit at B4DLC.B5;
    sbit  RXRTR_TXRTR_B4DLC_bit at B4DLC.B6;
    sbit  RESRB0_B4DLC_bit at B4DLC.B4;
    sbit  RESRB1_B4DLC_bit at B4DLC.B5;
    sbit  TXRTR_B4DLC_bit at B4DLC.B6;
    sbit  RXRTR_B4DLC_bit at B4DLC.B6;

    // B4D0 bits
    const register unsigned short int B4D00 = 0;
    sbit  B4D00_bit at B4D0.B0;
    const register unsigned short int B4D01 = 1;
    sbit  B4D01_bit at B4D0.B1;
    const register unsigned short int B4D02 = 2;
    sbit  B4D02_bit at B4D0.B2;
    const register unsigned short int B4D03 = 3;
    sbit  B4D03_bit at B4D0.B3;
    const register unsigned short int B4D04 = 4;
    sbit  B4D04_bit at B4D0.B4;
    const register unsigned short int B4D05 = 5;
    sbit  B4D05_bit at B4D0.B5;
    const register unsigned short int B4D06 = 6;
    sbit  B4D06_bit at B4D0.B6;
    const register unsigned short int B4D07 = 7;
    sbit  B4D07_bit at B4D0.B7;

    // B4D1 bits
    const register unsigned short int B4D10 = 0;
    sbit  B4D10_bit at B4D1.B0;
    const register unsigned short int B4D11 = 1;
    sbit  B4D11_bit at B4D1.B1;
    const register unsigned short int B4D12 = 2;
    sbit  B4D12_bit at B4D1.B2;
    const register unsigned short int B4D13 = 3;
    sbit  B4D13_bit at B4D1.B3;
    const register unsigned short int B4D14 = 4;
    sbit  B4D14_bit at B4D1.B4;
    const register unsigned short int B4D15 = 5;
    sbit  B4D15_bit at B4D1.B5;
    const register unsigned short int B4D16 = 6;
    sbit  B4D16_bit at B4D1.B6;
    const register unsigned short int B4D17 = 7;
    sbit  B4D17_bit at B4D1.B7;

    // B4D2 bits
    const register unsigned short int B4D20 = 0;
    sbit  B4D20_bit at B4D2.B0;
    const register unsigned short int B4D21 = 1;
    sbit  B4D21_bit at B4D2.B1;
    const register unsigned short int B4D22 = 2;
    sbit  B4D22_bit at B4D2.B2;
    const register unsigned short int B4D23 = 3;
    sbit  B4D23_bit at B4D2.B3;
    const register unsigned short int B4D24 = 4;
    sbit  B4D24_bit at B4D2.B4;
    const register unsigned short int B4D25 = 5;
    sbit  B4D25_bit at B4D2.B5;
    const register unsigned short int B4D26 = 6;
    sbit  B4D26_bit at B4D2.B6;
    const register unsigned short int B4D27 = 7;
    sbit  B4D27_bit at B4D2.B7;

    // B4D3 bits
    const register unsigned short int B4D30 = 0;
    sbit  B4D30_bit at B4D3.B0;
    const register unsigned short int B4D31 = 1;
    sbit  B4D31_bit at B4D3.B1;
    const register unsigned short int B4D32 = 2;
    sbit  B4D32_bit at B4D3.B2;
    const register unsigned short int B4D33 = 3;
    sbit  B4D33_bit at B4D3.B3;
    const register unsigned short int B4D34 = 4;
    sbit  B4D34_bit at B4D3.B4;
    const register unsigned short int B4D35 = 5;
    sbit  B4D35_bit at B4D3.B5;
    const register unsigned short int B4D36 = 6;
    sbit  B4D36_bit at B4D3.B6;
    const register unsigned short int B4D37 = 7;
    sbit  B4D37_bit at B4D3.B7;

    // B4D4 bits
    const register unsigned short int B4D40 = 0;
    sbit  B4D40_bit at B4D4.B0;
    const register unsigned short int B4D41 = 1;
    sbit  B4D41_bit at B4D4.B1;
    const register unsigned short int B4D42 = 2;
    sbit  B4D42_bit at B4D4.B2;
    const register unsigned short int B4D43 = 3;
    sbit  B4D43_bit at B4D4.B3;
    const register unsigned short int B4D44 = 4;
    sbit  B4D44_bit at B4D4.B4;
    const register unsigned short int B4D45 = 5;
    sbit  B4D45_bit at B4D4.B5;
    const register unsigned short int B4D46 = 6;
    sbit  B4D46_bit at B4D4.B6;
    const register unsigned short int B4D47 = 7;
    sbit  B4D47_bit at B4D4.B7;

    // B4D5 bits
    const register unsigned short int B4D50 = 0;
    sbit  B4D50_bit at B4D5.B0;
    const register unsigned short int B4D51 = 1;
    sbit  B4D51_bit at B4D5.B1;
    const register unsigned short int B4D52 = 2;
    sbit  B4D52_bit at B4D5.B2;
    const register unsigned short int B4D53 = 3;
    sbit  B4D53_bit at B4D5.B3;
    const register unsigned short int B4D54 = 4;
    sbit  B4D54_bit at B4D5.B4;
    const register unsigned short int B4D55 = 5;
    sbit  B4D55_bit at B4D5.B5;
    const register unsigned short int B4D56 = 6;
    sbit  B4D56_bit at B4D5.B6;
    const register unsigned short int B4D57 = 7;
    sbit  B4D57_bit at B4D5.B7;

    // B4D6 bits
    const register unsigned short int B4D60 = 0;
    sbit  B4D60_bit at B4D6.B0;
    const register unsigned short int B4D61 = 1;
    sbit  B4D61_bit at B4D6.B1;
    const register unsigned short int B4D62 = 2;
    sbit  B4D62_bit at B4D6.B2;
    const register unsigned short int B4D63 = 3;
    sbit  B4D63_bit at B4D6.B3;
    const register unsigned short int B4D64 = 4;
    sbit  B4D64_bit at B4D6.B4;
    const register unsigned short int B4D65 = 5;
    sbit  B4D65_bit at B4D6.B5;
    const register unsigned short int B4D66 = 6;
    sbit  B4D66_bit at B4D6.B6;
    const register unsigned short int B4D67 = 7;
    sbit  B4D67_bit at B4D6.B7;

    // B4D7 bits
    const register unsigned short int B4D70 = 0;
    sbit  B4D70_bit at B4D7.B0;
    const register unsigned short int B4D71 = 1;
    sbit  B4D71_bit at B4D7.B1;
    const register unsigned short int B4D72 = 2;
    sbit  B4D72_bit at B4D7.B2;
    const register unsigned short int B4D73 = 3;
    sbit  B4D73_bit at B4D7.B3;
    const register unsigned short int B4D74 = 4;
    sbit  B4D74_bit at B4D7.B4;
    const register unsigned short int B4D75 = 5;
    sbit  B4D75_bit at B4D7.B5;
    const register unsigned short int B4D76 = 6;
    sbit  B4D76_bit at B4D7.B6;
    const register unsigned short int B4D77 = 7;
    sbit  B4D77_bit at B4D7.B7;
    const register unsigned short int B46D77 = 7;
    sbit  B46D77_bit at B4D7.B7;

    // CANSTAT_RO5 bits
    sbit  EICODE0_CANSTAT_RO5_bit at CANSTAT_RO5.B0;
    sbit  EICODE1_ICODE0_CANSTAT_RO5_bit at CANSTAT_RO5.B1;
    sbit  EICODE2_ICODE1_CANSTAT_RO5_bit at CANSTAT_RO5.B2;
    sbit  EICODE3_ICODE2_CANSTAT_RO5_bit at CANSTAT_RO5.B3;
    sbit  EICODE4_CANSTAT_RO5_bit at CANSTAT_RO5.B4;
    sbit  OPMODE0_CANSTAT_RO5_bit at CANSTAT_RO5.B5;
    sbit  OPMODE1_CANSTAT_RO5_bit at CANSTAT_RO5.B6;
    sbit  OPMODE2_CANSTAT_RO5_bit at CANSTAT_RO5.B7;
    sbit  ICODE0_CANSTAT_RO5_bit at CANSTAT_RO5.B0;
    sbit  ICODE1_CANSTAT_RO5_bit at CANSTAT_RO5.B1;
    sbit  ICODE2_CANSTAT_RO5_bit at CANSTAT_RO5.B2;
    sbit  ICODE3_CANSTAT_RO5_bit at CANSTAT_RO5.B3;
    sbit  ICODE4_CANSTAT_RO5_bit at CANSTAT_RO5.B4;

    // CANCON_RO5 bits
    sbit  FP0_CANCON_RO5_bit at CANCON_RO5.B0;
    sbit  WIN0_FP1_CANCON_RO5_bit at CANCON_RO5.B1;
    sbit  WIN1_FP2_CANCON_RO5_bit at CANCON_RO5.B2;
    sbit  WIN2_FP3_CANCON_RO5_bit at CANCON_RO5.B3;
    sbit  ABAT_CANCON_RO5_bit at CANCON_RO5.B4;
    sbit  REQOP0_CANCON_RO5_bit at CANCON_RO5.B5;
    sbit  REQOP1_CANCON_RO5_bit at CANCON_RO5.B6;
    sbit  REQOP2_CANCON_RO5_bit at CANCON_RO5.B7;
    sbit  WIN0_CANCON_RO5_bit at CANCON_RO5.B1;
    sbit  WIN1_CANCON_RO5_bit at CANCON_RO5.B2;
    sbit  WIN2_CANCON_RO5_bit at CANCON_RO5.B3;

    // B5CON bits
    sbit  FILHIT0_TXPRI0_B5CON_bit at B5CON.B0;
    sbit  FILHIT1_TXPRI1_B5CON_bit at B5CON.B1;
    sbit  FILHIT2_RTREN_B5CON_bit at B5CON.B2;
    sbit  FILHIT3_TXREQ_B5CON_bit at B5CON.B3;
    sbit  FILHIT4_TXERR_B5CON_bit at B5CON.B4;
    sbit  RXRTRRO_TXLARB_B5CON_bit at B5CON.B5;
    sbit  RXM1_TXABT_B5CON_bit at B5CON.B6;
    sbit  RXFUL_TXBIF_B5CON_bit at B5CON.B7;
    sbit  FILHIT0_B5CON_bit at B5CON.B0;
    sbit  FILHIT1_B5CON_bit at B5CON.B1;
    sbit  FILHIT2_B5CON_bit at B5CON.B2;
    sbit  FILHIT3_B5CON_bit at B5CON.B3;
    sbit  FILHIT4_B5CON_bit at B5CON.B4;
    sbit  RTRRO_B5CON_bit at B5CON.B5;
    sbit  RXM1_B5CON_bit at B5CON.B6;
    sbit  RXFUL_B5CON_bit at B5CON.B7;
    sbit  TXPRI0_B5CON_bit at B5CON.B0;
    sbit  TXPRI1_B5CON_bit at B5CON.B1;
    sbit  RTREN_B5CON_bit at B5CON.B2;
    sbit  TXREQ_B5CON_bit at B5CON.B3;
    sbit  TXERR_B5CON_bit at B5CON.B4;
    sbit  TXLARB_B5CON_bit at B5CON.B5;
    sbit  TXABT_B5CON_bit at B5CON.B6;
    sbit  TXBIF_B5CON_bit at B5CON.B7;
    const register unsigned short int RXRTRRO_B5CON = 5;
    sbit  RXRTRRO_B5CON_bit at B5CON.B5;

    // B5SIDH bits
    sbit  SID3_B5SIDH_bit at B5SIDH.B0;
    sbit  SID4_B5SIDH_bit at B5SIDH.B1;
    sbit  SID5_B5SIDH_bit at B5SIDH.B2;
    sbit  SID6_B5SIDH_bit at B5SIDH.B3;
    sbit  SID7_B5SIDH_bit at B5SIDH.B4;
    sbit  SID8_B5SIDH_bit at B5SIDH.B5;
    sbit  SID9_B5SIDH_bit at B5SIDH.B6;
    sbit  SID10_B5SIDH_bit at B5SIDH.B7;

    // B5SIDL bits
    sbit  EID16_B5SIDL_bit at B5SIDL.B0;
    sbit  EID17_B5SIDL_bit at B5SIDL.B1;
    sbit  EXIDE_B5SIDL_bit at B5SIDL.B3;
    sbit  SRR_B5SIDL_bit at B5SIDL.B4;
    sbit  SID0_B5SIDL_bit at B5SIDL.B5;
    sbit  SID1_B5SIDL_bit at B5SIDL.B6;
    sbit  SID2_B5SIDL_bit at B5SIDL.B7;
    sbit  EXID_B5SIDL_bit at B5SIDL.B3;
    sbit  EXIDEN_B5SIDL_bit at B5SIDL.B3;

    // B5EIDH bits
    sbit  EID8_B5EIDH_bit at B5EIDH.B0;
    sbit  EID9_B5EIDH_bit at B5EIDH.B1;
    sbit  EID10_B5EIDH_bit at B5EIDH.B2;
    sbit  EID11_B5EIDH_bit at B5EIDH.B3;
    sbit  EID12_B5EIDH_bit at B5EIDH.B4;
    sbit  EID13_B5EIDH_bit at B5EIDH.B5;
    sbit  EID14_B5EIDH_bit at B5EIDH.B6;
    sbit  EID15_B5EIDH_bit at B5EIDH.B7;

    // B5EIDL bits
    sbit  EID0_B5EIDL_bit at B5EIDL.B0;
    sbit  EID1_B5EIDL_bit at B5EIDL.B1;
    sbit  EID2_B5EIDL_bit at B5EIDL.B2;
    sbit  EID3_B5EIDL_bit at B5EIDL.B3;
    sbit  EID4_B5EIDL_bit at B5EIDL.B4;
    sbit  EID5_B5EIDL_bit at B5EIDL.B5;
    sbit  EID6_B5EIDL_bit at B5EIDL.B6;
    sbit  EID7_B5EIDL_bit at B5EIDL.B7;

    // B5DLC bits
    sbit  DLC0_B5DLC_bit at B5DLC.B0;
    sbit  DLC1_B5DLC_bit at B5DLC.B1;
    sbit  DLC2_B5DLC_bit at B5DLC.B2;
    sbit  DLC3_B5DLC_bit at B5DLC.B3;
    const register unsigned short int RB0_B5DLC = 4;
    sbit  RB0_B5DLC_bit at B5DLC.B4;
    const register unsigned short int RB1_B5DLC = 5;
    sbit  RB1_B5DLC_bit at B5DLC.B5;
    sbit  RXRTR_TXRTR_B5DLC_bit at B5DLC.B6;
    sbit  RESRB0_B5DLC_bit at B5DLC.B4;
    sbit  RESRB1_B5DLC_bit at B5DLC.B5;
    sbit  RXRTR_B5DLC_bit at B5DLC.B6;

    // B5D0 bits
    const register unsigned short int B5D00 = 0;
    sbit  B5D00_bit at B5D0.B0;
    const register unsigned short int B5D01 = 1;
    sbit  B5D01_bit at B5D0.B1;
    const register unsigned short int B5D02 = 2;
    sbit  B5D02_bit at B5D0.B2;
    const register unsigned short int B5D03 = 3;
    sbit  B5D03_bit at B5D0.B3;
    const register unsigned short int B5D04 = 4;
    sbit  B5D04_bit at B5D0.B4;
    const register unsigned short int B5D05 = 5;
    sbit  B5D05_bit at B5D0.B5;
    const register unsigned short int B5D06 = 6;
    sbit  B5D06_bit at B5D0.B6;
    const register unsigned short int B5D07 = 7;
    sbit  B5D07_bit at B5D0.B7;
    const register unsigned short int B57D07 = 7;
    sbit  B57D07_bit at B5D0.B7;

    // B5D1 bits
    const register unsigned short int B5D10 = 0;
    sbit  B5D10_bit at B5D1.B0;
    const register unsigned short int B5D11 = 1;
    sbit  B5D11_bit at B5D1.B1;
    const register unsigned short int B5D12 = 2;
    sbit  B5D12_bit at B5D1.B2;
    const register unsigned short int B5D13 = 3;
    sbit  B5D13_bit at B5D1.B3;
    const register unsigned short int B5D14 = 4;
    sbit  B5D14_bit at B5D1.B4;
    const register unsigned short int B5D15 = 5;
    sbit  B5D15_bit at B5D1.B5;
    const register unsigned short int B5D16 = 6;
    sbit  B5D16_bit at B5D1.B6;
    const register unsigned short int B5D17 = 7;
    sbit  B5D17_bit at B5D1.B7;

    // B5D2 bits
    const register unsigned short int B5D20 = 0;
    sbit  B5D20_bit at B5D2.B0;
    const register unsigned short int B5D21 = 1;
    sbit  B5D21_bit at B5D2.B1;
    const register unsigned short int B5D22 = 2;
    sbit  B5D22_bit at B5D2.B2;
    const register unsigned short int B5D23 = 3;
    sbit  B5D23_bit at B5D2.B3;
    const register unsigned short int B5D24 = 4;
    sbit  B5D24_bit at B5D2.B4;
    const register unsigned short int B5D25 = 5;
    sbit  B5D25_bit at B5D2.B5;
    const register unsigned short int B5D26 = 6;
    sbit  B5D26_bit at B5D2.B6;
    const register unsigned short int B5D27 = 7;
    sbit  B5D27_bit at B5D2.B7;
    const register unsigned short int B57D23 = 3;
    sbit  B57D23_bit at B5D2.B3;

    // B5D3 bits
    const register unsigned short int B5D30 = 0;
    sbit  B5D30_bit at B5D3.B0;
    const register unsigned short int B5D31 = 1;
    sbit  B5D31_bit at B5D3.B1;
    const register unsigned short int B5D32 = 2;
    sbit  B5D32_bit at B5D3.B2;
    const register unsigned short int B5D33 = 3;
    sbit  B5D33_bit at B5D3.B3;
    const register unsigned short int B5D34 = 4;
    sbit  B5D34_bit at B5D3.B4;
    const register unsigned short int B5D35 = 5;
    sbit  B5D35_bit at B5D3.B5;
    const register unsigned short int B5D36 = 6;
    sbit  B5D36_bit at B5D3.B6;
    const register unsigned short int B5D37 = 7;
    sbit  B5D37_bit at B5D3.B7;

    // B5D4 bits
    const register unsigned short int B5D40 = 0;
    sbit  B5D40_bit at B5D4.B0;
    const register unsigned short int B5D41 = 1;
    sbit  B5D41_bit at B5D4.B1;
    const register unsigned short int B5D42 = 2;
    sbit  B5D42_bit at B5D4.B2;
    const register unsigned short int B5D43 = 3;
    sbit  B5D43_bit at B5D4.B3;
    const register unsigned short int B5D44 = 4;
    sbit  B5D44_bit at B5D4.B4;
    const register unsigned short int B5D45 = 5;
    sbit  B5D45_bit at B5D4.B5;
    const register unsigned short int B5D46 = 6;
    sbit  B5D46_bit at B5D4.B6;
    const register unsigned short int B5D47 = 7;
    sbit  B5D47_bit at B5D4.B7;

    // B5D5 bits
    const register unsigned short int B5D50 = 0;
    sbit  B5D50_bit at B5D5.B0;
    const register unsigned short int B5D51 = 1;
    sbit  B5D51_bit at B5D5.B1;
    const register unsigned short int B5D52 = 2;
    sbit  B5D52_bit at B5D5.B2;
    const register unsigned short int B5D53 = 3;
    sbit  B5D53_bit at B5D5.B3;
    const register unsigned short int B5D54 = 4;
    sbit  B5D54_bit at B5D5.B4;
    const register unsigned short int B5D55 = 5;
    sbit  B5D55_bit at B5D5.B5;
    const register unsigned short int B5D56 = 6;
    sbit  B5D56_bit at B5D5.B6;
    const register unsigned short int B5D57 = 7;
    sbit  B5D57_bit at B5D5.B7;

    // B5D6 bits
    const register unsigned short int B5D60 = 0;
    sbit  B5D60_bit at B5D6.B0;
    const register unsigned short int B5D61 = 1;
    sbit  B5D61_bit at B5D6.B1;
    const register unsigned short int B5D62 = 2;
    sbit  B5D62_bit at B5D6.B2;
    const register unsigned short int B5D63 = 3;
    sbit  B5D63_bit at B5D6.B3;
    const register unsigned short int B5D64 = 4;
    sbit  B5D64_bit at B5D6.B4;
    const register unsigned short int B5D65 = 5;
    sbit  B5D65_bit at B5D6.B5;
    const register unsigned short int B5D66 = 6;
    sbit  B5D66_bit at B5D6.B6;
    const register unsigned short int B5D67 = 7;
    sbit  B5D67_bit at B5D6.B7;

    // B5D7 bits
    const register unsigned short int B5D70 = 0;
    sbit  B5D70_bit at B5D7.B0;
    const register unsigned short int B5D71 = 1;
    sbit  B5D71_bit at B5D7.B1;
    const register unsigned short int B5D72 = 2;
    sbit  B5D72_bit at B5D7.B2;
    const register unsigned short int B5D73 = 3;
    sbit  B5D73_bit at B5D7.B3;
    const register unsigned short int B5D74 = 4;
    sbit  B5D74_bit at B5D7.B4;
    const register unsigned short int B5D75 = 5;
    sbit  B5D75_bit at B5D7.B5;
    const register unsigned short int B5D76 = 6;
    sbit  B5D76_bit at B5D7.B6;
    const register unsigned short int B5D77 = 7;
    sbit  B5D77_bit at B5D7.B7;

    // CANSTAT_RO4 bits
    sbit  EICODE0_CANSTAT_RO4_bit at CANSTAT_RO4.B0;
    sbit  EICODE1_ICODE0_CANSTAT_RO4_bit at CANSTAT_RO4.B1;
    sbit  EICODE2_ICODE1_CANSTAT_RO4_bit at CANSTAT_RO4.B2;
    sbit  EICODE3_ICODE2_CANSTAT_RO4_bit at CANSTAT_RO4.B3;
    sbit  EICODE4_CANSTAT_RO4_bit at CANSTAT_RO4.B4;
    sbit  OPMODE0_CANSTAT_RO4_bit at CANSTAT_RO4.B5;
    sbit  OPMODE1_CANSTAT_RO4_bit at CANSTAT_RO4.B6;
    sbit  OPMODE2_CANSTAT_RO4_bit at CANSTAT_RO4.B7;
    sbit  ICODE0_CANSTAT_RO4_bit at CANSTAT_RO4.B0;
    sbit  ICODE1_CANSTAT_RO4_bit at CANSTAT_RO4.B1;
    sbit  ICODE2_CANSTAT_RO4_bit at CANSTAT_RO4.B2;
    sbit  ICODE3_CANSTAT_RO4_bit at CANSTAT_RO4.B3;
    sbit  ICODE4_CANSTAT_RO4_bit at CANSTAT_RO4.B4;

    // CANCON_RO4 bits
    sbit  FP0_CANCON_RO4_bit at CANCON_RO4.B0;
    sbit  WIN0_FP1_CANCON_RO4_bit at CANCON_RO4.B1;
    sbit  WIN1_FP2_CANCON_RO4_bit at CANCON_RO4.B2;
    sbit  WIN2_FP3_CANCON_RO4_bit at CANCON_RO4.B3;
    sbit  ABAT_CANCON_RO4_bit at CANCON_RO4.B4;
    sbit  REQOP0_CANCON_RO4_bit at CANCON_RO4.B5;
    sbit  REQOP1_CANCON_RO4_bit at CANCON_RO4.B6;
    sbit  REQOP2_CANCON_RO4_bit at CANCON_RO4.B7;
    sbit  WIN0_CANCON_RO4_bit at CANCON_RO4.B1;
    sbit  WIN1_CANCON_RO4_bit at CANCON_RO4.B2;
    sbit  WIN2_CANCON_RO4_bit at CANCON_RO4.B3;

    // RXF0SIDH bits
    sbit  SID3_RXF0SIDH_bit at RXF0SIDH.B0;
    sbit  SID4_RXF0SIDH_bit at RXF0SIDH.B1;
    sbit  SID5_RXF0SIDH_bit at RXF0SIDH.B2;
    sbit  SID6_RXF0SIDH_bit at RXF0SIDH.B3;
    sbit  SID7_RXF0SIDH_bit at RXF0SIDH.B4;
    sbit  SID8_RXF0SIDH_bit at RXF0SIDH.B5;
    sbit  SID9_RXF0SIDH_bit at RXF0SIDH.B6;
    sbit  SID10_RXF0SIDH_bit at RXF0SIDH.B7;

    // RXF0SIDL bits
    sbit  EID16_RXF0SIDL_bit at RXF0SIDL.B0;
    sbit  EID17_RXF0SIDL_bit at RXF0SIDL.B1;
    sbit  EXIDEN_RXF0SIDL_bit at RXF0SIDL.B3;
    sbit  SID0_RXF0SIDL_bit at RXF0SIDL.B5;
    sbit  SID1_RXF0SIDL_bit at RXF0SIDL.B6;
    sbit  SID2_RXF0SIDL_bit at RXF0SIDL.B7;
    sbit  EXIDE_RXF0SIDL_bit at RXF0SIDL.B3;

    // RXF0EIDH bits
    sbit  EID8_RXF0EIDH_bit at RXF0EIDH.B0;
    sbit  EID9_RXF0EIDH_bit at RXF0EIDH.B1;
    sbit  EID10_RXF0EIDH_bit at RXF0EIDH.B2;
    sbit  EID11_RXF0EIDH_bit at RXF0EIDH.B3;
    sbit  EID12_RXF0EIDH_bit at RXF0EIDH.B4;
    sbit  EID13_RXF0EIDH_bit at RXF0EIDH.B5;
    sbit  EID14_RXF0EIDH_bit at RXF0EIDH.B6;
    sbit  EID15_RXF0EIDH_bit at RXF0EIDH.B7;

    // RXF0EIDL bits
    sbit  EID0_RXF0EIDL_bit at RXF0EIDL.B0;
    sbit  EID1_RXF0EIDL_bit at RXF0EIDL.B1;
    sbit  EID2_RXF0EIDL_bit at RXF0EIDL.B2;
    sbit  EID3_RXF0EIDL_bit at RXF0EIDL.B3;
    sbit  EID4_RXF0EIDL_bit at RXF0EIDL.B4;
    sbit  EID5_RXF0EIDL_bit at RXF0EIDL.B5;
    sbit  EID6_RXF0EIDL_bit at RXF0EIDL.B6;
    sbit  EID7_RXF0EIDL_bit at RXF0EIDL.B7;

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
    sbit  EXIDE_RXF1SIDL_bit at RXF1SIDL.B3;

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
    sbit  EXIDE_RXF2SIDL_bit at RXF2SIDL.B3;

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
    sbit  EXIDE_RXF3SIDL_bit at RXF3SIDL.B3;

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
    sbit  EXIDE_RXF4SIDL_bit at RXF4SIDL.B3;

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
    sbit  EXIDE_RXF5SIDL_bit at RXF5SIDL.B3;

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
    sbit  EXIDEN_RXM0SIDL_bit at RXM0SIDL.B3;
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
    sbit  EXIDEN_RXM1SIDL_bit at RXM1SIDL.B3;
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
    sbit  TXPRI0_TXB2CON_bit at TXB2CON.B0;
    sbit  TXPRI1_TXB2CON_bit at TXB2CON.B1;
    sbit  TXREQ_TXB2CON_bit at TXB2CON.B3;
    sbit  TXERR_TXB2CON_bit at TXB2CON.B4;
    sbit  TXLARB_TXB2CON_bit at TXB2CON.B5;
    sbit  TXABT_TXB2CON_bit at TXB2CON.B6;
    sbit  TXBIF_TXB2CON_bit at TXB2CON.B7;
    const register unsigned short int TXBIFBXB2CON = 7;
    sbit  TXBIFBXB2CON_bit at TXB2CON.B7;

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
    sbit  EXIDE_TXB2SIDL_bit at TXB2SIDL.B3;
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
    sbit  DLC0_TXB2DLC_bit at TXB2DLC.B0;
    sbit  DLC1_TXB2DLC_bit at TXB2DLC.B1;
    sbit  DLC2_TXB2DLC_bit at TXB2DLC.B2;
    sbit  DLC3_TXB2DLC_bit at TXB2DLC.B3;
    sbit  TXRTR_TXB2DLC_bit at TXB2DLC.B6;

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

    // CANSTAT_RO3 bits
    sbit  EICODE0_CANSTAT_RO3_bit at CANSTAT_RO3.B0;
    sbit  EICODE1_ICODE0_CANSTAT_RO3_bit at CANSTAT_RO3.B1;
    sbit  EICODE2_ICODE1_CANSTAT_RO3_bit at CANSTAT_RO3.B2;
    sbit  EICODE3_ICODE2_CANSTAT_RO3_bit at CANSTAT_RO3.B3;
    sbit  EICODE4_CANSTAT_RO3_bit at CANSTAT_RO3.B4;
    sbit  OPMODE0_CANSTAT_RO3_bit at CANSTAT_RO3.B5;
    sbit  OPMODE1_CANSTAT_RO3_bit at CANSTAT_RO3.B6;
    sbit  OPMODE2_CANSTAT_RO3_bit at CANSTAT_RO3.B7;
    sbit  ICODE0_CANSTAT_RO3_bit at CANSTAT_RO3.B0;
    sbit  ICODE1_CANSTAT_RO3_bit at CANSTAT_RO3.B1;
    sbit  ICODE2_CANSTAT_RO3_bit at CANSTAT_RO3.B2;
    sbit  ICODE3_CANSTAT_RO3_bit at CANSTAT_RO3.B3;
    sbit  ICODE4_CANSTAT_RO3_bit at CANSTAT_RO3.B4;

    // CANCON_RO3 bits
    sbit  FP0_CANCON_RO3_bit at CANCON_RO3.B0;
    sbit  WIN0_FP1_CANCON_RO3_bit at CANCON_RO3.B1;
    sbit  WIN1_FP2_CANCON_RO3_bit at CANCON_RO3.B2;
    sbit  WIN2_FP3_CANCON_RO3_bit at CANCON_RO3.B3;
    sbit  ABAT_CANCON_RO3_bit at CANCON_RO3.B4;
    sbit  REQOP0_CANCON_RO3_bit at CANCON_RO3.B5;
    sbit  REQOP1_CANCON_RO3_bit at CANCON_RO3.B6;
    sbit  REQOP2_CANCON_RO3_bit at CANCON_RO3.B7;
    sbit  WIN0_CANCON_RO3_bit at CANCON_RO3.B1;
    sbit  WIN1_CANCON_RO3_bit at CANCON_RO3.B2;
    sbit  WIN2_CANCON_RO3_bit at CANCON_RO3.B3;

    // TXB1CON bits
    sbit  TXPRI0_TXB1CON_bit at TXB1CON.B0;
    sbit  TXPRI1_TXB1CON_bit at TXB1CON.B1;
    sbit  TXREQ_TXB1CON_bit at TXB1CON.B3;
    sbit  TXERR_TXB1CON_bit at TXB1CON.B4;
    sbit  TXLARB_TXB1CON_bit at TXB1CON.B5;
    sbit  TXABT_TXB1CON_bit at TXB1CON.B6;
    sbit  TXBIF_TXB1CON_bit at TXB1CON.B7;
    const register unsigned short int TXBIFTXB1CON = 7;
    sbit  TXBIFTXB1CON_bit at TXB1CON.B7;

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

    // CANSTAT_RO2 bits
    sbit  EICODE0_CANSTAT_RO2_bit at CANSTAT_RO2.B0;
    sbit  EICODE1_ICODE0_CANSTAT_RO2_bit at CANSTAT_RO2.B1;
    sbit  EICODE2_ICODE1_CANSTAT_RO2_bit at CANSTAT_RO2.B2;
    sbit  EICODE3_ICODE2_CANSTAT_RO2_bit at CANSTAT_RO2.B3;
    sbit  EICODE4_CANSTAT_RO2_bit at CANSTAT_RO2.B4;
    sbit  OPMODE0_CANSTAT_RO2_bit at CANSTAT_RO2.B5;
    sbit  OPMODE1_CANSTAT_RO2_bit at CANSTAT_RO2.B6;
    sbit  OPMODE2_CANSTAT_RO2_bit at CANSTAT_RO2.B7;
    sbit  ICODE0_CANSTAT_RO2_bit at CANSTAT_RO2.B0;
    sbit  ICODE1_CANSTAT_RO2_bit at CANSTAT_RO2.B1;
    sbit  ICODE2_CANSTAT_RO2_bit at CANSTAT_RO2.B2;
    sbit  ICODE3_CANSTAT_RO2_bit at CANSTAT_RO2.B3;
    sbit  ICODE4_CANSTAT_RO2_bit at CANSTAT_RO2.B4;

    // CANCON_RO2 bits
    sbit  FP0_CANCON_RO2_bit at CANCON_RO2.B0;
    sbit  WIN0_FP1_CANCON_RO2_bit at CANCON_RO2.B1;
    sbit  WIN1_FP2_CANCON_RO2_bit at CANCON_RO2.B2;
    sbit  WIN2_FP3_CANCON_RO2_bit at CANCON_RO2.B3;
    sbit  ABAT_CANCON_RO2_bit at CANCON_RO2.B4;
    sbit  REQOP0_CANCON_RO2_bit at CANCON_RO2.B5;
    sbit  REQOP1_CANCON_RO2_bit at CANCON_RO2.B6;
    sbit  REQOP2_CANCON_RO2_bit at CANCON_RO2.B7;
    sbit  WIN0_CANCON_RO2_bit at CANCON_RO2.B1;
    sbit  WIN1_CANCON_RO2_bit at CANCON_RO2.B2;
    sbit  WIN2_CANCON_RO2_bit at CANCON_RO2.B3;

    // TXB0CON bits
    sbit  TXPRI0_TXB0CON_bit at TXB0CON.B0;
    sbit  TXPRI1_TXB0CON_bit at TXB0CON.B1;
    sbit  TXREQ_TXB0CON_bit at TXB0CON.B3;
    sbit  TXERR_TXB0CON_bit at TXB0CON.B4;
    sbit  TXLARB_TXB0CON_bit at TXB0CON.B5;
    sbit  TXABT_TXB0CON_bit at TXB0CON.B6;
    sbit  TXBIF_TXB0CON_bit at TXB0CON.B7;

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

    // CANSTAT_RO1 bits
    sbit  EICODE0_CANSTAT_RO1_bit at CANSTAT_RO1.B0;
    sbit  EICODE1_ICODE0_CANSTAT_RO1_bit at CANSTAT_RO1.B1;
    sbit  EICODE2_ICODE1_CANSTAT_RO1_bit at CANSTAT_RO1.B2;
    sbit  EICODE3_ICODE2_CANSTAT_RO1_bit at CANSTAT_RO1.B3;
    sbit  EICODE4_CANSTAT_RO1_bit at CANSTAT_RO1.B4;
    sbit  OPMODE0_CANSTAT_RO1_bit at CANSTAT_RO1.B5;
    sbit  OPMODE1_CANSTAT_RO1_bit at CANSTAT_RO1.B6;
    sbit  OPMODE2_CANSTAT_RO1_bit at CANSTAT_RO1.B7;
    sbit  ICODE0_CANSTAT_RO1_bit at CANSTAT_RO1.B0;
    sbit  ICODE1_CANSTAT_RO1_bit at CANSTAT_RO1.B1;
    sbit  ICODE2_CANSTAT_RO1_bit at CANSTAT_RO1.B2;
    sbit  ICODE3_CANSTAT_RO1_bit at CANSTAT_RO1.B3;
    sbit  ICODE4_CANSTAT_RO1_bit at CANSTAT_RO1.B4;

    // CANCON_RO1 bits
    sbit  FP0_CANCON_RO1_bit at CANCON_RO1.B0;
    sbit  WIN0_FP1_CANCON_RO1_bit at CANCON_RO1.B1;
    sbit  WIN1_FP2_CANCON_RO1_bit at CANCON_RO1.B2;
    sbit  WIN2_FP3_CANCON_RO1_bit at CANCON_RO1.B3;
    sbit  ABAT_CANCON_RO1_bit at CANCON_RO1.B4;
    sbit  REQOP0_CANCON_RO1_bit at CANCON_RO1.B5;
    sbit  REQOP1_CANCON_RO1_bit at CANCON_RO1.B6;
    sbit  REQOP2_CANCON_RO1_bit at CANCON_RO1.B7;
    sbit  WIN0_CANCON_RO1_bit at CANCON_RO1.B1;
    sbit  WIN1_CANCON_RO1_bit at CANCON_RO1.B2;
    sbit  WIN2_CANCON_RO1_bit at CANCON_RO1.B3;

    // RXB1CON bits
    sbit  FILHIT0_RXB1CON_bit at RXB1CON.B0;
    sbit  FILHIT1_RXB1CON_bit at RXB1CON.B1;
    sbit  FILHIT2_RXB1CON_bit at RXB1CON.B2;
    const register unsigned short int RXRTRRO_FILHIT3 = 3;
    sbit  RXRTRRO_FILHIT3_bit at RXB1CON.B3;
    sbit  FILHIT4_RXB1CON_bit at RXB1CON.B4;
    const register unsigned short int RXM0_RTRRO = 5;
    sbit  RXM0_RTRRO_bit at RXB1CON.B5;
    sbit  RXM1_RXB1CON_bit at RXB1CON.B6;
    sbit  RXFUL_RXB1CON_bit at RXB1CON.B7;
    const register unsigned short int RXRTRRO_RXB1CON = 3;
    sbit  RXRTRRO_RXB1CON_bit at RXB1CON.B3;
    const register unsigned short int RXM0 = 5;
    sbit  RXM0_bit at RXB1CON.B5;
    sbit  FILHIT3_RXB1CON_bit at RXB1CON.B3;
    sbit  RTRRO_RXB1CON_bit at RXB1CON.B5;

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
    sbit  EXID_RXB1SIDL_bit at RXB1SIDL.B3;
    sbit  SRR_RXB1SIDL_bit at RXB1SIDL.B4;
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
    sbit  RXRTR_RXB1DLC_bit at RXB1DLC.B6;
    sbit  RESRB0_RXB1DLC_bit at RXB1DLC.B4;
    sbit  RESRB1_RXB1DLC_bit at RXB1DLC.B5;

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

    // CANSTAT_RO0 bits
    sbit  EICODE0_CANSTAT_RO0_bit at CANSTAT_RO0.B0;
    sbit  EICODE1_ICODE0_CANSTAT_RO0_bit at CANSTAT_RO0.B1;
    sbit  EICODE2_ICODE1_CANSTAT_RO0_bit at CANSTAT_RO0.B2;
    sbit  EICODE3_ICODE2_CANSTAT_RO0_bit at CANSTAT_RO0.B3;
    sbit  EICODE4_CANSTAT_RO0_bit at CANSTAT_RO0.B4;
    sbit  OPMODE0_CANSTAT_RO0_bit at CANSTAT_RO0.B5;
    sbit  OPMODE1_CANSTAT_RO0_bit at CANSTAT_RO0.B6;
    sbit  OPMODE2_CANSTAT_RO0_bit at CANSTAT_RO0.B7;
    sbit  ICODE0_CANSTAT_RO0_bit at CANSTAT_RO0.B0;
    sbit  ICODE1_CANSTAT_RO0_bit at CANSTAT_RO0.B1;
    sbit  ICODE2_CANSTAT_RO0_bit at CANSTAT_RO0.B2;
    sbit  ICODE3_CANSTAT_RO0_bit at CANSTAT_RO0.B3;
    sbit  ICODE4_CANSTAT_RO0_bit at CANSTAT_RO0.B4;

    // CANCON_RO0 bits
    sbit  FP0_CANCON_RO0_bit at CANCON_RO0.B0;
    sbit  WIN0_FP1_CANCON_RO0_bit at CANCON_RO0.B1;
    sbit  WIN1_FP2_CANCON_RO0_bit at CANCON_RO0.B2;
    sbit  WIN2_FP3_CANCON_RO0_bit at CANCON_RO0.B3;
    sbit  ABAT_CANCON_RO0_bit at CANCON_RO0.B4;
    sbit  REQOP0_CANCON_RO0_bit at CANCON_RO0.B5;
    sbit  REQOP1_CANCON_RO0_bit at CANCON_RO0.B6;
    sbit  REQOP2_CANCON_RO0_bit at CANCON_RO0.B7;
    sbit  WIN0_CANCON_RO0_bit at CANCON_RO0.B1;
    sbit  WIN1_CANCON_RO0_bit at CANCON_RO0.B2;
    sbit  WIN2_CANCON_RO0_bit at CANCON_RO0.B3;

    // RXB0CON bits
    sbit  FILHIT0_RXB0CON_bit at RXB0CON.B0;
    const register unsigned short int JTOFF_FILHIT1 = 1;
    sbit  JTOFF_FILHIT1_bit at RXB0CON.B1;
    const register unsigned short int RXB0DBEN_FILHIT2 = 2;
    sbit  RXB0DBEN_FILHIT2_bit at RXB0CON.B2;
    sbit  RXRTRRO_FILHIT3_RXB0CON_bit at RXB0CON.B3;
    sbit  FILHIT4_RXB0CON_bit at RXB0CON.B4;
    sbit  RXM0_RTRRO_RXB0CON_bit at RXB0CON.B5;
    sbit  RXM1_RXB0CON_bit at RXB0CON.B6;
    sbit  RXFUL_RXB0CON_bit at RXB0CON.B7;
    const register unsigned short int JTOFF = 1;
    sbit  JTOFF_bit at RXB0CON.B1;
    const register unsigned short int RXB0DBEN = 2;
    sbit  RXB0DBEN_bit at RXB0CON.B2;
    const register unsigned short int RXRTRRO_RXB0CON = 3;
    sbit  RXRTRRO_RXB0CON_bit at RXB0CON.B3;
    sbit  RXM0_RXB0CON_bit at RXB0CON.B5;
    sbit  FILHIT1_RXB0CON_bit at RXB0CON.B1;
    sbit  FILHIT2_RXB0CON_bit at RXB0CON.B2;
    sbit  FILHIT3_RXB0CON_bit at RXB0CON.B3;
    sbit  RTRRO_RXB0CON_bit at RXB0CON.B5;
    const register unsigned short int RXBODBEN = 2;
    sbit  RXBODBEN_bit at RXB0CON.B2;

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
    sbit  RESRB0_RXB0DLC_bit at RXB0DLC.B4;
    sbit  RESRB1_RXB0DLC_bit at RXB0DLC.B5;

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

    // CANSTAT bits
    sbit  EICODE0_CANSTAT_bit at CANSTAT.B0;
    sbit  EICODE1_ICODE0_CANSTAT_bit at CANSTAT.B1;
    sbit  EICODE2_ICODE1_CANSTAT_bit at CANSTAT.B2;
    sbit  EICODE3_ICODE2_CANSTAT_bit at CANSTAT.B3;
    sbit  EICODE4_CANSTAT_bit at CANSTAT.B4;
    sbit  OPMODE0_CANSTAT_bit at CANSTAT.B5;
    sbit  OPMODE1_CANSTAT_bit at CANSTAT.B6;
    sbit  OPMODE2_CANSTAT_bit at CANSTAT.B7;
    sbit  ICODE0_CANSTAT_bit at CANSTAT.B0;
    sbit  ICODE1_CANSTAT_bit at CANSTAT.B1;
    sbit  ICODE2_CANSTAT_bit at CANSTAT.B2;
    sbit  ICODE3_CANSTAT_bit at CANSTAT.B3;
    const register unsigned short int EICODE1 = 1;
    sbit  EICODE1_bit at CANSTAT.B1;
    const register unsigned short int EICODE2 = 2;
    sbit  EICODE2_bit at CANSTAT.B2;
    const register unsigned short int EICODE3 = 3;
    sbit  EICODE3_bit at CANSTAT.B3;

    // CANCON bits
    sbit  FP0_CANCON_bit at CANCON.B0;
    sbit  WIN0_FP1_CANCON_bit at CANCON.B1;
    sbit  WIN1_FP2_CANCON_bit at CANCON.B2;
    sbit  WIN2_FP3_CANCON_bit at CANCON.B3;
    sbit  ABAT_CANCON_bit at CANCON.B4;
    sbit  REQOP0_CANCON_bit at CANCON.B5;
    sbit  REQOP1_CANCON_bit at CANCON.B6;
    sbit  REQOP2_CANCON_bit at CANCON.B7;
    sbit  WIN0_CANCON_bit at CANCON.B1;
    sbit  WIN1_CANCON_bit at CANCON.B2;
    sbit  WIN2_CANCON_bit at CANCON.B3;
    const register unsigned short int FP1 = 1;
    sbit  FP1_bit at CANCON.B1;
    const register unsigned short int FP2 = 2;
    sbit  FP2_bit at CANCON.B2;
    const register unsigned short int FP3 = 3;
    sbit  FP3_bit at CANCON.B3;

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
    const register unsigned short int SEG2PHT = 7;
    sbit  SEG2PHT_bit at BRGCON2.B7;
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
    const register unsigned short int WAKDIS = 7;
    sbit  WAKDIS_bit at BRGCON3.B7;

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
    const register unsigned short int RXBnOVFL = 6;
    sbit  RXBnOVFL_bit at COMSTAT.B6;
    const register unsigned short int RXB0OVFL_NOT_FIFOEMPTY = 7;
    sbit  RXB0OVFL_NOT_FIFOEMPTY_bit at COMSTAT.B7;
    const register unsigned short int RXB1OVFL = 6;
    sbit  RXB1OVFL_bit at COMSTAT.B6;
    const register unsigned short int RXB0OVFL = 7;
    sbit  RXB0OVFL_bit at COMSTAT.B7;
    const register unsigned short int FIFOEMPTY = 7;
    sbit  FIFOEMPTY_bit at COMSTAT.B7;
    const register unsigned short int NOT_FIFOEMPTY = 7;
    sbit  NOT_FIFOEMPTY_bit at COMSTAT.B7;

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

    // ECANCON bits
    const register unsigned short int EWIN0 = 0;
    sbit  EWIN0_bit at ECANCON.B0;
    const register unsigned short int EWIN1 = 1;
    sbit  EWIN1_bit at ECANCON.B1;
    const register unsigned short int EWIN2 = 2;
    sbit  EWIN2_bit at ECANCON.B2;
    const register unsigned short int EWIN3 = 3;
    sbit  EWIN3_bit at ECANCON.B3;
    const register unsigned short int EWIN4 = 4;
    sbit  EWIN4_bit at ECANCON.B4;
    const register unsigned short int FIFOWM = 5;
    sbit  FIFOWM_bit at ECANCON.B5;
    const register unsigned short int MDSEL0 = 6;
    sbit  MDSEL0_bit at ECANCON.B6;
    const register unsigned short int MDSEL1 = 7;
    sbit  MDSEL1_bit at ECANCON.B7;
    const register unsigned short int F_ = 5;
    sbit  F__bit at ECANCON.B5;

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
    const register unsigned short int OSC1 = 7;
    sbit  OSC1_bit at PORTA.B7;

    // Alternative bit function
    const register unsigned short int CVREF_PORTA = 0;
    sbit  CVREF_PORTA_bit at PORTA.B0;

    // Alternative bit function
    const register unsigned short int VREFM = 2;
    sbit  VREFM_bit at PORTA.B2;

    // Alternative bit function
    const register unsigned short int VREFP = 3;
    sbit  VREFP_bit at PORTA.B3;

    // Alternative bit function
    const register unsigned short int HLVDIN = 5;
    sbit  HLVDIN_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int CLKO = 6;
    sbit  CLKO_bit at PORTA.B6;

    // Alternative bit function
    const register unsigned short int CLKI = 7;
    sbit  CLKI_bit at PORTA.B7;

    // Alternative bit function
    const register unsigned short int CVREFA = 0;
    sbit  CVREFA_bit at PORTA.B0;

    // Alternative bit function
    const register unsigned short int LVDIN = 5;
    sbit  LVDIN_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int SS = 5;
    sbit  SS_bit at PORTA.B5;

    // Alternative bit function
    const register unsigned short int NOT_SS = 5;
    sbit  NOT_SS_bit at PORTA.B5;

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
    const register unsigned short int INT2 = 2;
    sbit  INT2_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int CANRX = 3;
    sbit  CANRX_bit at PORTB.B3;

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
    const register unsigned short int AN10 = 0;
    sbit  AN10_bit at PORTB.B0;

    // Alternative bit function
    const register unsigned short int AN8 = 1;
    sbit  AN8_bit at PORTB.B1;

    // Alternative bit function
    const register unsigned short int CANTX = 2;
    sbit  CANTX_bit at PORTB.B2;

    // Alternative bit function
    const register unsigned short int AN9 = 4;
    sbit  AN9_bit at PORTB.B4;

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
    const register unsigned short int FLT0 = 0;
    sbit  FLT0_bit at PORTB.B0;

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
    const register unsigned short int SCL = 3;
    sbit  SCL_bit at PORTC.B3;

    // Alternative bit function
    const register unsigned short int SDA = 4;
    sbit  SDA_bit at PORTC.B4;

    // Alternative bit function
    const register unsigned short int CK = 6;
    sbit  CK_bit at PORTC.B6;

    // Alternative bit function
    const register unsigned short int PSP0 = 0;
    sbit  PSP0_bit at PORTD.B0;

    // Alternative bit function
    const register unsigned short int PSP1 = 1;
    sbit  PSP1_bit at PORTD.B1;

    // Alternative bit function
    const register unsigned short int PSP2 = 2;
    sbit  PSP2_bit at PORTD.B2;

    // Alternative bit function
    const register unsigned short int PSP3 = 3;
    sbit  PSP3_bit at PORTD.B3;

    // Alternative bit function
    const register unsigned short int PSP4 = 4;
    sbit  PSP4_bit at PORTD.B4;

    // Alternative bit function
    const register unsigned short int PSP5 = 5;
    sbit  PSP5_bit at PORTD.B5;

    // Alternative bit function
    const register unsigned short int PSP6 = 6;
    sbit  PSP6_bit at PORTD.B6;

    // Alternative bit function
    const register unsigned short int PSP7 = 7;
    sbit  PSP7_bit at PORTD.B7;

    // Alternative bit function
    const register unsigned short int C1INB = 0;
    sbit  C1INB_bit at PORTD.B0;

    // Alternative bit function
    const register unsigned short int C1INA = 1;
    sbit  C1INA_bit at PORTD.B1;

    // Alternative bit function
    const register unsigned short int C2INB = 2;
    sbit  C2INB_bit at PORTD.B2;

    // Alternative bit function
    const register unsigned short int C2INA = 3;
    sbit  C2INA_bit at PORTD.B3;

    // Alternative bit function
    const register unsigned short int P1A = 4;
    sbit  P1A_bit at PORTD.B4;

    // Alternative bit function
    const register unsigned short int P1B = 5;
    sbit  P1B_bit at PORTD.B5;

    // Alternative bit function
    const register unsigned short int P1C = 6;
    sbit  P1C_bit at PORTD.B6;

    // Alternative bit function
    const register unsigned short int P1D = 7;
    sbit  P1D_bit at PORTD.B7;

    // Alternative bit function
    const register unsigned short int ECCP1 = 4;
    sbit  ECCP1_bit at PORTD.B4;

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

    // Alternative bit function
    const register unsigned short int RB0_TRISB = 0;
    sbit  RB0_TRISB_bit at TRISB.B0;

    // Alternative bit function
    const register unsigned short int RB1_TRISB = 1;

    // Alternative bit function
    sbit  RB1_TRISB_bit at TRISB.B1;

    // Alternative bit function
    sbit  PSPMODE_TRISE_bit at TRISE.B4;

    // Alternative bit function
    sbit  IBOV_TRISE_bit at TRISE.B5;

    // Alternative bit function
    sbit  OBF_TRISE_bit at TRISE.B6;
    sbit  IBF_TRISE_bit at TRISE.B7;

    // OSCTUNE bits
    const register unsigned short int PLLEN = 6;
    sbit  PLLEN_bit at OSCTUNE.B6;
    const register unsigned short int INTSRC = 7;
    sbit  INTSRC_bit at OSCTUNE.B7;
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
    const register unsigned short int INTSCR = 7;
    sbit  INTSCR_bit at OSCTUNE.B7;

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
    const register unsigned short int PSPIE = 7;
    sbit  PSPIE_bit at PIE1.B7;

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
    const register unsigned short int PSPIF = 7;
    sbit  PSPIF_bit at PIR1.B7;

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
    const register unsigned short int PSPIP = 7;
    sbit  PSPIP_bit at IPR1.B7;
    const register unsigned short int TXBIP = 4;
    sbit  TXBIP_bit at IPR1.B4;

    // PIE2 bits
    const register unsigned short int ECCP1IE = 0;
    sbit  ECCP1IE_bit at PIE2.B0;
    const register unsigned short int TMR3IE = 1;
    sbit  TMR3IE_bit at PIE2.B1;
    const register unsigned short int HLVDIE = 2;
    sbit  HLVDIE_bit at PIE2.B2;
    const register unsigned short int BCLIE = 3;
    sbit  BCLIE_bit at PIE2.B3;
    const register unsigned short int EEIE = 4;
    sbit  EEIE_bit at PIE2.B4;
    const register unsigned short int CMIE = 6;
    sbit  CMIE_bit at PIE2.B6;
    const register unsigned short int OSCFIE = 7;
    sbit  OSCFIE_bit at PIE2.B7;
    const register unsigned short int LVDIE = 2;
    sbit  LVDIE_bit at PIE2.B2;

    // PIR2 bits
    const register unsigned short int ECCP1IF = 0;
    sbit  ECCP1IF_bit at PIR2.B0;
    const register unsigned short int TMR3IF = 1;
    sbit  TMR3IF_bit at PIR2.B1;
    const register unsigned short int HLVDIF = 2;
    sbit  HLVDIF_bit at PIR2.B2;
    const register unsigned short int BCLIF = 3;
    sbit  BCLIF_bit at PIR2.B3;
    const register unsigned short int EEIF = 4;
    sbit  EEIF_bit at PIR2.B4;
    const register unsigned short int CMIF = 6;
    sbit  CMIF_bit at PIR2.B6;
    const register unsigned short int OSCFIF = 7;
    sbit  OSCFIF_bit at PIR2.B7;
    const register unsigned short int LVDIF = 2;
    sbit  LVDIF_bit at PIR2.B2;

    // IPR2 bits
    const register unsigned short int ECCP1IP = 0;
    sbit  ECCP1IP_bit at IPR2.B0;
    const register unsigned short int TMR3IP = 1;
    sbit  TMR3IP_bit at IPR2.B1;
    const register unsigned short int HLVDIP = 2;
    sbit  HLVDIP_bit at IPR2.B2;
    const register unsigned short int BCLIP = 3;
    sbit  BCLIP_bit at IPR2.B3;
    const register unsigned short int EEIP = 4;
    sbit  EEIP_bit at IPR2.B4;
    const register unsigned short int CMIP = 6;
    sbit  CMIP_bit at IPR2.B6;
    const register unsigned short int OSCFIP = 7;
    sbit  OSCFIP_bit at IPR2.B7;
    const register unsigned short int LVDIP = 2;
    sbit  LVDIP_bit at IPR2.B2;

    // PIE3 bits
    sbit  RXB0IE_PIE3_bit at PIE3.B0;
    sbit  RXB1IE_PIE3_bit at PIE3.B1;
    sbit  TXB0IE_PIE3_bit at PIE3.B2;
    sbit  TXB1IE_PIE3_bit at PIE3.B3;
    sbit  TXB2IE_PIE3_bit at PIE3.B4;
    const register unsigned short int ERRIE = 5;
    sbit  ERRIE_bit at PIE3.B5;
    const register unsigned short int WAKIE = 6;
    sbit  WAKIE_bit at PIE3.B6;
    const register unsigned short int IRXIE = 7;
    sbit  IRXIE_bit at PIE3.B7;
    const register unsigned short int FIFOWMIE = 0;
    sbit  FIFOWMIE_bit at PIE3.B0;
    const register unsigned short int RXBnIE = 1;
    sbit  RXBnIE_bit at PIE3.B1;
    const register unsigned short int TXBnIE = 4;
    sbit  TXBnIE_bit at PIE3.B4;
    const register unsigned short int FIFOMWIE = 0;
    sbit  FIFOMWIE_bit at PIE3.B0;

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
    const register unsigned short int FIFOWMIF = 0;
    sbit  FIFOWMIF_bit at PIR3.B0;
    const register unsigned short int RXBnIF = 1;
    sbit  RXBnIF_bit at PIR3.B1;
    const register unsigned short int TXBnIF = 4;
    sbit  TXBnIF_bit at PIR3.B4;

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
    const register unsigned short int FIFOWMIP = 0;
    sbit  FIFOWMIP_bit at IPR3.B0;
    const register unsigned short int RXBnIP = 1;
    sbit  RXBnIP_bit at IPR3.B1;
    const register unsigned short int TXBnIP = 4;
    sbit  TXBnIP_bit at IPR3.B4;

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
    const register unsigned short int ADEN = 3;
    sbit  ADEN_bit at RCSTA.B3;

    // TXSTA bits
    const register unsigned short int TX9D = 0;
    sbit  TX9D_bit at TXSTA.B0;
    const register unsigned short int TRMT = 1;
    sbit  TRMT_bit at TXSTA.B1;
    const register unsigned short int BRGH = 2;
    sbit  BRGH_bit at TXSTA.B2;
    const register unsigned short int SENDB = 3;
    sbit  SENDB_bit at TXSTA.B3;
    const register unsigned short int SYNC = 4;
    sbit  SYNC_bit at TXSTA.B4;
    const register unsigned short int TXEN = 5;
    sbit  TXEN_bit at TXSTA.B5;
    const register unsigned short int TX9 = 6;
    sbit  TX9_bit at TXSTA.B6;
    const register unsigned short int CSRC = 7;
    sbit  CSRC_bit at TXSTA.B7;

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
    const register unsigned short int T3SYNC = 2;
    sbit  T3SYNC_bit at T3CON.B2;
    const register unsigned short int T3CKPS0 = 4;
    sbit  T3CKPS0_bit at T3CON.B4;
    const register unsigned short int T3CKPS1 = 5;
    sbit  T3CKPS1_bit at T3CON.B5;
    const register unsigned short int T3CCP2 = 6;
    sbit  T3CCP2_bit at T3CON.B6;
    const register unsigned short int T3NSYNC = 2;
    sbit  T3NSYNC_bit at T3CON.B2;

    // CMCON bits
    const register unsigned short int CIS = 3;
    sbit  CIS_bit at CMCON.B3;
    const register unsigned short int C1INV = 4;
    sbit  C1INV_bit at CMCON.B4;
    const register unsigned short int C2INV = 5;
    sbit  C2INV_bit at CMCON.B5;
    const register unsigned short int C1OUT = 6;
    sbit  C1OUT_bit at CMCON.B6;
    const register unsigned short int C2OUT = 7;
    sbit  C2OUT_bit at CMCON.B7;
    const register unsigned short int CM0 = 0;
    sbit  CM0_bit at CMCON.B0;
    const register unsigned short int CM1 = 1;
    sbit  CM1_bit at CMCON.B1;
    const register unsigned short int CM2 = 2;
    sbit  CM2_bit at CMCON.B2;

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
    const register unsigned short int CVREF_CVRCON = 4;
    sbit  CVREF_CVRCON_bit at CVRCON.B4;

    // ECCP1AS bits
    const register unsigned short int ECCPASE = 7;
    sbit  ECCPASE_bit at ECCP1AS.B7;
    const register unsigned short int PSSBD0 = 0;
    sbit  PSSBD0_bit at ECCP1AS.B0;
    const register unsigned short int PSSBD1 = 1;
    sbit  PSSBD1_bit at ECCP1AS.B1;
    const register unsigned short int PSSAC0 = 2;
    sbit  PSSAC0_bit at ECCP1AS.B2;
    const register unsigned short int PSSAC1 = 3;
    sbit  PSSAC1_bit at ECCP1AS.B3;
    const register unsigned short int ECCPAS0 = 4;
    sbit  ECCPAS0_bit at ECCP1AS.B4;
    const register unsigned short int ECCPAS1 = 5;
    sbit  ECCPAS1_bit at ECCP1AS.B5;
    const register unsigned short int ECCPAS2 = 6;
    sbit  ECCPAS2_bit at ECCP1AS.B6;

    // ECCP1DEL bits
    const register unsigned short int PRSEN = 7;
    sbit  PRSEN_bit at ECCP1DEL.B7;
    const register unsigned short int PDC0 = 0;
    sbit  PDC0_bit at ECCP1DEL.B0;
    const register unsigned short int PDC1 = 1;
    sbit  PDC1_bit at ECCP1DEL.B1;
    const register unsigned short int PDC2 = 2;
    sbit  PDC2_bit at ECCP1DEL.B2;
    const register unsigned short int PDC3 = 3;
    sbit  PDC3_bit at ECCP1DEL.B3;
    const register unsigned short int PDC4 = 4;
    sbit  PDC4_bit at ECCP1DEL.B4;
    const register unsigned short int PDC5 = 5;
    sbit  PDC5_bit at ECCP1DEL.B5;
    const register unsigned short int PDC6 = 6;
    sbit  PDC6_bit at ECCP1DEL.B6;

    // BAUDCON, BAUDCTL bits
    const register unsigned short int ABDEN = 0;
    sbit  ABDEN_bit at BAUDCON.B0;
    const register unsigned short int WUE = 1;
    sbit  WUE_bit at BAUDCON.B1;
    const register unsigned short int BRG16 = 3;
    sbit  BRG16_bit at BAUDCON.B3;
    const register unsigned short int TXCKP = 4;
    sbit  TXCKP_bit at BAUDCON.B4;
    const register unsigned short int RXDTP = 5;
    sbit  RXDTP_bit at BAUDCON.B5;
    const register unsigned short int RCIDL = 6;
    sbit  RCIDL_bit at BAUDCON.B6;
    const register unsigned short int ABDOVF = 7;
    sbit  ABDOVF_bit at BAUDCON.B7;
    const register unsigned short int SCKP = 4;
    sbit  SCKP_bit at BAUDCON.B4;

    // ECCP1CON bits
    const register unsigned short int ECCP1M0 = 0;
    sbit  ECCP1M0_bit at ECCP1CON.B0;
    const register unsigned short int ECCP1M1 = 1;
    sbit  ECCP1M1_bit at ECCP1CON.B1;
    const register unsigned short int ECCP1M2 = 2;
    sbit  ECCP1M2_bit at ECCP1CON.B2;
    const register unsigned short int ECCP1M3 = 3;
    sbit  ECCP1M3_bit at ECCP1CON.B3;
    const register unsigned short int EDC1B0 = 4;
    sbit  EDC1B0_bit at ECCP1CON.B4;
    const register unsigned short int EDC1B1 = 5;
    sbit  EDC1B1_bit at ECCP1CON.B5;
    const register unsigned short int EPWM1M0 = 6;
    sbit  EPWM1M0_bit at ECCP1CON.B6;
    const register unsigned short int EPWM1M1 = 7;
    sbit  EPWM1M1_bit at ECCP1CON.B7;

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

    // ADCON2 bits
    const register unsigned short int ADFM = 7;
    sbit  ADFM_bit at ADCON2.B7;
    const register unsigned short int ADCS0 = 0;
    sbit  ADCS0_bit at ADCON2.B0;
    const register unsigned short int ADCS1 = 1;
    sbit  ADCS1_bit at ADCON2.B1;
    const register unsigned short int ADCS2 = 2;
    sbit  ADCS2_bit at ADCON2.B2;
    const register unsigned short int ACQT0 = 3;
    sbit  ACQT0_bit at ADCON2.B3;
    const register unsigned short int ACQT1 = 4;
    sbit  ACQT1_bit at ADCON2.B4;
    const register unsigned short int ACQT2 = 5;
    sbit  ACQT2_bit at ADCON2.B5;

    // ADCON1 bits
    const register unsigned short int PCFG0 = 0;
    sbit  PCFG0_bit at ADCON1.B0;
    const register unsigned short int PCFG1 = 1;
    sbit  PCFG1_bit at ADCON1.B1;
    const register unsigned short int PCFG2 = 2;
    sbit  PCFG2_bit at ADCON1.B2;
    const register unsigned short int PCFG3 = 3;
    sbit  PCFG3_bit at ADCON1.B3;
    const register unsigned short int VCFG0 = 4;
    sbit  VCFG0_bit at ADCON1.B4;
    const register unsigned short int VCFG1 = 5;
    sbit  VCFG1_bit at ADCON1.B5;

    // ADCON0 bits
    const register unsigned short int ADON = 0;
    sbit  ADON_bit at ADCON0.B0;
    const register unsigned short int GO_NOT_DONE = 1;
    sbit  GO_NOT_DONE_bit at ADCON0.B1;
    const register unsigned short int GO_DONE = 1;
    sbit  GO_DONE_bit at ADCON0.B1;
    const register unsigned short int CHS0 = 2;
    sbit  CHS0_bit at ADCON0.B2;
    const register unsigned short int CHS1 = 3;
    sbit  CHS1_bit at ADCON0.B3;
    const register unsigned short int CHS2 = 4;
    sbit  CHS2_bit at ADCON0.B4;
    const register unsigned short int CHS3 = 5;
    sbit  CHS3_bit at ADCON0.B5;
    const register unsigned short int DONE = 1;
    sbit  DONE_bit at ADCON0.B1;
    const register unsigned short int GO = 1;
    sbit  GO_bit at ADCON0.B1;
    const register unsigned short int NOT_DONE = 1;
    sbit  NOT_DONE_bit at ADCON0.B1;

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
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at SSPSTAT.B2;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at SSPSTAT.B5;
    const register unsigned short int I2C_DAT = 5;
    sbit  I2C_DAT_bit at SSPSTAT.B5;
    const register unsigned short int NOT_W = 2;
    sbit  NOT_W_bit at SSPSTAT.B2;
    const register unsigned short int NOT_A = 5;
    sbit  NOT_A_bit at SSPSTAT.B5;
    const register unsigned short int NOT_WRITE = 2;
    sbit  NOT_WRITE_bit at SSPSTAT.B2;
    const register unsigned short int NOT_ADDRESS = 5;
    sbit  NOT_ADDRESS_bit at SSPSTAT.B5;
    const register unsigned short int READ_WRITE = 2;
    sbit  READ_WRITE_bit at SSPSTAT.B2;
    const register unsigned short int DATA_ADDRESS = 5;
    sbit  DATA_ADDRESS_bit at SSPSTAT.B5;
    const register unsigned short int R = 2;
    sbit  R_bit at SSPSTAT.B2;
    const register unsigned short int D = 5;
    sbit  D_bit at SSPSTAT.B5;

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
    const register unsigned short int SBOREN = 6;
    sbit  SBOREN_bit at RCON.B6;
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

    // WDTCON bits
    const register unsigned short int SWDTEN = 0;
    sbit  SWDTEN_bit at WDTCON.B0;
    const register unsigned short int SWDTE = 0;
    sbit  SWDTE_bit at WDTCON.B0;

    // HLVDCON, LVDCON bits
    const register unsigned short int HLVDEN = 4;
    sbit  HLVDEN_bit at HLVDCON.B4;
    const register unsigned short int IRVST = 5;
    sbit  IRVST_bit at HLVDCON.B5;
    const register unsigned short int VDIRMAG = 7;
    sbit  VDIRMAG_bit at HLVDCON.B7;
    const register unsigned short int HLVDL0 = 0;
    sbit  HLVDL0_bit at HLVDCON.B0;
    const register unsigned short int HLVDL1 = 1;
    sbit  HLVDL1_bit at HLVDCON.B1;
    const register unsigned short int HLVDL2 = 2;
    sbit  HLVDL2_bit at HLVDCON.B2;
    const register unsigned short int HLVDL3 = 3;
    sbit  HLVDL3_bit at HLVDCON.B3;
    const register unsigned short int LVDL0 = 0;
    sbit  LVDL0_bit at HLVDCON.B0;
    const register unsigned short int LVDL1 = 1;
    sbit  LVDL1_bit at HLVDCON.B1;
    const register unsigned short int LVDL2 = 2;
    sbit  LVDL2_bit at HLVDCON.B2;
    const register unsigned short int LVDL3 = 3;
    sbit  LVDL3_bit at HLVDCON.B3;
    const register unsigned short int LVDEN = 4;
    sbit  LVDEN_bit at HLVDCON.B4;
    const register unsigned short int IVRST = 5;
    sbit  IVRST_bit at HLVDCON.B5;
    const register unsigned short int LVV0 = 0;
    sbit  LVV0_bit at HLVDCON.B0;
    const register unsigned short int LVV1 = 1;
    sbit  LVV1_bit at HLVDCON.B1;
    const register unsigned short int LVV2 = 2;
    sbit  LVV2_bit at HLVDCON.B2;
    const register unsigned short int LVV3 = 3;
    sbit  LVV3_bit at HLVDCON.B3;
    const register unsigned short int BGST = 5;
    sbit  BGST_bit at HLVDCON.B5;

    // OSCCON bits
    const register unsigned short int IOFS = 2;
    sbit  IOFS_bit at OSCCON.B2;
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
    const register unsigned short int RE3 = 3;
    sbit  RE3_bit at PORTE.B3;
    const register unsigned short int RE2 = 2;
    sbit  RE2_bit at PORTE.B2;
    const register unsigned short int RE1 = 1;
    sbit  RE1_bit at PORTE.B1;
    const register unsigned short int RE0 = 0;
    sbit  RE0_bit at PORTE.B0;

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
    const register unsigned short int TRISE2 = 2;
    sbit  TRISE2_bit at TRISE.B2;
    const register unsigned short int TRISE1 = 1;
    sbit  TRISE1_bit at TRISE.B1;
    const register unsigned short int TRISE0 = 0;
    sbit  TRISE0_bit at TRISE.B0;

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
