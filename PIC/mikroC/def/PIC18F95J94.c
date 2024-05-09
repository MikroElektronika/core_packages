// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00007FF0;

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

sfr unsigned short volatile UEP0             absolute 0x0DFF;
sfr unsigned short volatile UEP1             absolute 0x0E00;
sfr unsigned short volatile UEP2             absolute 0x0E01;
sfr unsigned short volatile UEP3             absolute 0x0E02;
sfr unsigned short volatile UEP4             absolute 0x0E03;
sfr unsigned short volatile UEP5             absolute 0x0E04;
sfr unsigned short volatile UEP6             absolute 0x0E05;
sfr unsigned short volatile UEP7             absolute 0x0E06;
sfr unsigned short volatile UEP8             absolute 0x0E07;
sfr unsigned short volatile UEP9             absolute 0x0E08;
sfr unsigned short volatile UEP10            absolute 0x0E09;
sfr unsigned short volatile UEP11            absolute 0x0E0A;
sfr unsigned short volatile UEP12            absolute 0x0E0B;
sfr unsigned short volatile UEP13            absolute 0x0E0C;
sfr unsigned short volatile UEP14            absolute 0x0E0D;
sfr unsigned short volatile UEP15            absolute 0x0E0E;
sfr unsigned short volatile UEIE             absolute 0x0E0F;
sfr unsigned short volatile UIE              absolute 0x0E10;
sfr unsigned short volatile UCFG             absolute 0x0E11;
sfr unsigned short volatile RPOR0_1          absolute 0x0E12;
sfr unsigned short volatile RPOR2_3          absolute 0x0E13;
sfr unsigned short volatile RPOR4_5          absolute 0x0E14;
sfr unsigned short volatile RPOR6_7          absolute 0x0E15;
sfr unsigned short volatile RPOR8_9          absolute 0x0E16;
sfr unsigned short volatile RPOR10_11        absolute 0x0E17;
sfr unsigned short volatile RPOR12_13        absolute 0x0E18;
sfr unsigned short volatile RPOR14_15        absolute 0x0E19;
sfr unsigned short volatile RPOR16_17        absolute 0x0E1A;
sfr unsigned short volatile RPOR18_19        absolute 0x0E1B;
sfr unsigned short volatile RPOR20_21        absolute 0x0E1C;
sfr unsigned short volatile RPOR22_23        absolute 0x0E1D;
sfr unsigned short volatile RPOR24_25        absolute 0x0E1E;
sfr unsigned short volatile RPOR26_27        absolute 0x0E1F;
sfr unsigned short volatile RPOR28_29        absolute 0x0E20;
sfr unsigned short volatile RPOR30_31        absolute 0x0E21;
sfr unsigned short volatile RPOR32_33        absolute 0x0E22;
sfr unsigned short volatile RPOR34_35        absolute 0x0E23;
sfr unsigned short volatile RPOR36_37        absolute 0x0E24;
sfr unsigned short volatile RPOR38_39        absolute 0x0E25;
sfr unsigned short volatile RPOR40_41        absolute 0x0E26;
sfr unsigned short volatile RPOR42_43        absolute 0x0E27;
sfr unsigned short volatile RPOR44_45        absolute 0x0E28;
sfr unsigned short volatile RPOR46           absolute 0x0E29;
sfr unsigned short volatile RPINR0_1         absolute 0x0E2A;
sfr unsigned short volatile RPINR2_3         absolute 0x0E2B;
sfr unsigned short volatile RPINR4_5         absolute 0x0E2C;
sfr unsigned short volatile RPINR6_7         absolute 0x0E2D;
sfr unsigned short volatile RPINR8_9         absolute 0x0E2E;
sfr unsigned short volatile RPINR10_11       absolute 0x0E2F;
sfr unsigned short volatile RPINR12_13       absolute 0x0E30;
sfr unsigned short volatile RPINR14_15       absolute 0x0E31;
sfr unsigned short volatile RPINR16_17       absolute 0x0E32;
sfr unsigned short volatile RPINR18_19       absolute 0x0E33;
sfr unsigned short volatile RPINR20_21       absolute 0x0E34;
sfr unsigned short volatile RPINR22_23       absolute 0x0E35;
sfr unsigned short volatile RPINR24_25       absolute 0x0E36;
sfr unsigned short volatile RPINR26_27       absolute 0x0E37;
sfr unsigned short volatile RPINR28_29       absolute 0x0E38;
sfr unsigned short volatile RPINR30_31       absolute 0x0E39;
sfr unsigned short volatile RPINR32_33       absolute 0x0E3A;
sfr unsigned short volatile RPINR34_35       absolute 0x0E3B;
sfr unsigned short volatile RPINR36_37       absolute 0x0E3C;
sfr unsigned short volatile RPINR38_39       absolute 0x0E3D;
sfr unsigned short volatile RPINR40_41       absolute 0x0E3E;
sfr unsigned short volatile RPINR42_43       absolute 0x0E3F;
sfr unsigned short volatile RPINR44_45       absolute 0x0E40;
sfr unsigned short volatile RPINR46_47       absolute 0x0E41;
sfr unsigned short volatile RPINR48_49       absolute 0x0E42;
sfr unsigned short volatile RPINR50_51       absolute 0x0E43;
sfr unsigned short volatile RPINR52_53       absolute 0x0E44;
sfr unsigned short volatile ANCON3           absolute 0x0E45;
sfr unsigned short volatile ANCON2           absolute 0x0E46;
sfr unsigned short          ANCON1           absolute 0x0E47;
sfr unsigned int   volatile ADCBUF1          absolute 0x0E48;
sfr unsigned short volatile ADCBUF1L         absolute 0x0E48;
sfr unsigned short volatile ADCBUF1H         absolute 0x0E49;
sfr unsigned int   volatile ADCBUF2          absolute 0x0E4A;
sfr unsigned short volatile ADCBUF2L         absolute 0x0E4A;
sfr unsigned short volatile ADCBUF2H         absolute 0x0E4B;
sfr unsigned int   volatile ADCBUF3          absolute 0x0E4C;
sfr unsigned short volatile ADCBUF3L         absolute 0x0E4C;
sfr unsigned short volatile ADCBUF3H         absolute 0x0E4D;
sfr unsigned int   volatile ADCBUF4          absolute 0x0E4E;
sfr unsigned short volatile ADCBUF4L         absolute 0x0E4E;
sfr unsigned short volatile ADCBUF4H         absolute 0x0E4F;
sfr unsigned int   volatile ADCBUF5          absolute 0x0E50;
sfr unsigned short volatile ADCBUF5L         absolute 0x0E50;
sfr unsigned short volatile ADCBUF5H         absolute 0x0E51;
sfr unsigned int   volatile ADCBUF6          absolute 0x0E52;
sfr unsigned short volatile ADCBUF6L         absolute 0x0E52;
sfr unsigned short volatile ADCBUF6H         absolute 0x0E53;
sfr unsigned int   volatile ADCBUF7          absolute 0x0E54;
sfr unsigned short volatile ADCBUF7L         absolute 0x0E54;
sfr unsigned short volatile ADCBUF7H         absolute 0x0E55;
sfr unsigned int   volatile ADCBUF8          absolute 0x0E56;
sfr unsigned short volatile ADCBUF8L         absolute 0x0E56;
sfr unsigned short volatile ADCBUF8H         absolute 0x0E57;
sfr unsigned int   volatile ADCBUF9          absolute 0x0E58;
sfr unsigned short volatile ADCBUF9L         absolute 0x0E58;
sfr unsigned short volatile ADCBUF9H         absolute 0x0E59;
sfr unsigned int   volatile ADCBUF10         absolute 0x0E5A;
sfr unsigned short volatile ADCBUF10L        absolute 0x0E5A;
sfr unsigned short volatile ADCBUF10H        absolute 0x0E5B;
sfr unsigned int   volatile ADCBUF11         absolute 0x0E5C;
sfr unsigned short volatile ADCBUF11L        absolute 0x0E5C;
sfr unsigned short volatile ADCBUF11H        absolute 0x0E5D;
sfr unsigned int   volatile ADCBUF12         absolute 0x0E5E;
sfr unsigned short volatile ADCBUF12L        absolute 0x0E5E;
sfr unsigned short volatile ADCBUF12H        absolute 0x0E5F;
sfr unsigned int   volatile ADCBUF13         absolute 0x0E60;
sfr unsigned short volatile ADCBUF13L        absolute 0x0E60;
sfr unsigned short volatile ADCBUF13H        absolute 0x0E61;
sfr unsigned int   volatile ADCBUF14         absolute 0x0E62;
sfr unsigned short volatile ADCBUF14L        absolute 0x0E62;
sfr unsigned short volatile ADCBUF14H        absolute 0x0E63;
sfr unsigned int   volatile ADCBUF15         absolute 0x0E64;
sfr unsigned short volatile ADCBUF15L        absolute 0x0E64;
sfr unsigned short volatile ADCBUF15H        absolute 0x0E65;
sfr unsigned int   volatile ADCBUF16         absolute 0x0E66;
sfr unsigned short volatile ADCBUF16L        absolute 0x0E66;
sfr unsigned short volatile ADCBUF16H        absolute 0x0E67;
sfr unsigned int   volatile ADCBUF17         absolute 0x0E68;
sfr unsigned short volatile ADCBUF17L        absolute 0x0E68;
sfr unsigned short volatile ADCBUF17H        absolute 0x0E69;
sfr unsigned int   volatile ADCBUF18         absolute 0x0E6A;
sfr unsigned short volatile ADCBUF18L        absolute 0x0E6A;
sfr unsigned short volatile ADCBUF18H        absolute 0x0E6B;
sfr unsigned int   volatile ADCBUF19         absolute 0x0E6C;
sfr unsigned short volatile ADCBUF19L        absolute 0x0E6C;
sfr unsigned short volatile ADCBUF19H        absolute 0x0E6D;
sfr unsigned int   volatile ADCBUF20         absolute 0x0E6E;
sfr unsigned short volatile ADCBUF20L        absolute 0x0E6E;
sfr unsigned short volatile ADCBUF20H        absolute 0x0E6F;
sfr unsigned int   volatile ADCBUF21         absolute 0x0E70;
sfr unsigned short volatile ADCBUF21L        absolute 0x0E70;
sfr unsigned short volatile ADCBUF21H        absolute 0x0E71;
sfr unsigned int   volatile ADCBUF22         absolute 0x0E72;
sfr unsigned short volatile ADCBUF22L        absolute 0x0E72;
sfr unsigned short volatile ADCBUF22H        absolute 0x0E73;
sfr unsigned int   volatile ADCBUF23         absolute 0x0E74;
sfr unsigned short volatile ADCBUF23L        absolute 0x0E74;
sfr unsigned short volatile ADCBUF23H        absolute 0x0E75;
sfr unsigned int   volatile ADCBUF24         absolute 0x0E76;
sfr unsigned short volatile ADCBUF24L        absolute 0x0E76;
sfr unsigned short volatile ADCBUF24H        absolute 0x0E77;
sfr unsigned int   volatile ADCBUF25         absolute 0x0E78;
sfr unsigned short volatile ADCBUF25L        absolute 0x0E78;
sfr unsigned short volatile ADCBUF25H        absolute 0x0E79;
sfr unsigned short volatile ADCTMUEN0L       absolute 0x0E7A;
sfr unsigned short volatile ADCTMUEN0H       absolute 0x0E7B;
sfr unsigned short volatile ADCTMUEN1L       absolute 0x0E7C;
sfr unsigned short volatile ADCTMUEN1H       absolute 0x0E7D;
sfr unsigned short volatile ADCHIT0L         absolute 0x0E7E;
sfr unsigned short volatile ADCHIT0H         absolute 0x0E7F;
sfr unsigned short volatile ADCHIT1L         absolute 0x0E80;
sfr unsigned short volatile ADCHIT1H         absolute 0x0E81;
sfr unsigned short volatile ADCSS0L          absolute 0x0E82;
sfr unsigned short volatile ADCSS0H          absolute 0x0E83;
sfr unsigned short volatile ADCSS1L          absolute 0x0E84;
sfr unsigned short volatile ADCSS1H          absolute 0x0E85;
sfr unsigned short volatile ADCHS0L          absolute 0x0E86;
sfr unsigned short volatile ADCHS0H          absolute 0x0E87;
sfr unsigned short volatile ADCON5L          absolute 0x0E88;
sfr unsigned short volatile ADCON5H          absolute 0x0E89;
sfr unsigned short volatile ADCON3L          absolute 0x0E8A;
sfr unsigned short volatile ADCON3H          absolute 0x0E8B;
sfr unsigned short volatile ADCON2L          absolute 0x0E8C;
sfr unsigned short volatile ADCON2H          absolute 0x0E8D;
sfr unsigned short volatile LCDDATA0         absolute 0x0E8E;
sfr unsigned short volatile LCDDATA1         absolute 0x0E8F;
sfr unsigned short volatile LCDDATA2         absolute 0x0E90;
sfr unsigned short volatile LCDDATA3         absolute 0x0E91;
sfr unsigned short volatile LCDDATA4         absolute 0x0E92;
sfr unsigned short volatile LCDDATA5         absolute 0x0E93;
sfr unsigned short volatile LCDDATA6         absolute 0x0E94;
sfr unsigned short volatile LCDDATA7         absolute 0x0E95;
sfr unsigned short volatile LCDDATA8         absolute 0x0E96;
sfr unsigned short volatile LCDDATA9         absolute 0x0E97;
sfr unsigned short volatile LCDDATA10        absolute 0x0E98;
sfr unsigned short volatile LCDDATA11        absolute 0x0E99;
sfr unsigned short volatile LCDDATA12        absolute 0x0E9A;
sfr unsigned short volatile LCDDATA13        absolute 0x0E9B;
sfr unsigned short volatile LCDDATA14        absolute 0x0E9C;
sfr unsigned short volatile LCDDATA15        absolute 0x0E9D;
sfr unsigned short volatile LCDDATA16        absolute 0x0E9E;
sfr unsigned short volatile LCDDATA17        absolute 0x0E9F;
sfr unsigned short volatile LCDDATA18        absolute 0x0EA0;
sfr unsigned short volatile LCDDATA19        absolute 0x0EA1;
sfr unsigned short volatile LCDDATA20        absolute 0x0EA2;
sfr unsigned short volatile LCDDATA21        absolute 0x0EA3;
sfr unsigned short volatile LCDDATA22        absolute 0x0EA4;
sfr unsigned short volatile LCDDATA23        absolute 0x0EA5;
sfr unsigned short volatile LCDDATA24        absolute 0x0EA6;
sfr unsigned short volatile LCDDATA25        absolute 0x0EA7;
sfr unsigned short volatile LCDDATA26        absolute 0x0EA8;
sfr unsigned short volatile LCDDATA27        absolute 0x0EA9;
sfr unsigned short volatile LCDDATA28        absolute 0x0EAA;
sfr unsigned short volatile LCDDATA29        absolute 0x0EAB;
sfr unsigned short volatile LCDDATA30        absolute 0x0EAC;
sfr unsigned short volatile LCDDATA31        absolute 0x0EAD;
sfr unsigned short volatile LCDDATA32        absolute 0x0EAE;
sfr unsigned short volatile LCDDATA33        absolute 0x0EAF;
sfr unsigned short volatile LCDDATA34        absolute 0x0EB0;
sfr unsigned short volatile LCDDATA35        absolute 0x0EB1;
sfr unsigned short volatile LCDDATA36        absolute 0x0EB2;
sfr unsigned short volatile LCDDATA37        absolute 0x0EB3;
sfr unsigned short volatile LCDDATA38        absolute 0x0EB4;
sfr unsigned short volatile LCDDATA39        absolute 0x0EB5;
sfr unsigned short volatile LCDDATA40        absolute 0x0EB6;
sfr unsigned short volatile LCDDATA41        absolute 0x0EB7;
sfr unsigned short volatile LCDDATA42        absolute 0x0EB8;
sfr unsigned short volatile LCDDATA43        absolute 0x0EB9;
sfr unsigned short volatile LCDDATA44        absolute 0x0EBA;
sfr unsigned short volatile LCDDATA45        absolute 0x0EBB;
sfr unsigned short volatile LCDDATA46        absolute 0x0EBC;
sfr unsigned short volatile LCDDATA47        absolute 0x0EBD;
sfr unsigned short volatile LCDDATA48        absolute 0x0EBE;
sfr unsigned short volatile LCDDATA49        absolute 0x0EBF;
sfr unsigned short volatile LCDDATA50        absolute 0x0EC0;
sfr unsigned short volatile LCDDATA51        absolute 0x0EC1;
sfr unsigned short volatile LCDDATA52        absolute 0x0EC2;
sfr unsigned short volatile LCDDATA53        absolute 0x0EC3;
sfr unsigned short volatile LCDDATA54        absolute 0x0EC4;
sfr unsigned short volatile LCDDATA55        absolute 0x0EC5;
sfr unsigned short volatile LCDDATA56        absolute 0x0EC6;
sfr unsigned short volatile LCDDATA57        absolute 0x0EC7;
sfr unsigned short volatile LCDDATA58        absolute 0x0EC8;
sfr unsigned short volatile LCDDATA59        absolute 0x0EC9;
sfr unsigned short volatile LCDDATA60        absolute 0x0ECA;
sfr unsigned short volatile LCDDATA61        absolute 0x0ECB;
sfr unsigned short volatile LCDDATA62        absolute 0x0ECC;
sfr unsigned short volatile LCDDATA63        absolute 0x0ECD;
sfr unsigned short volatile LCDSE0           absolute 0x0ECE;
sfr unsigned short volatile LCDSE1           absolute 0x0ECF;
sfr unsigned short volatile LCDSE2           absolute 0x0ED0;
sfr unsigned short volatile LCDSE3           absolute 0x0ED1;
sfr unsigned short volatile LCDSE4           absolute 0x0ED2;
sfr unsigned short volatile LCDSE5           absolute 0x0ED3;
sfr unsigned short volatile LCDSE6           absolute 0x0ED4;
sfr unsigned short volatile LCDSE7           absolute 0x0ED5;
sfr unsigned short volatile LCDRL            absolute 0x0ED6;
sfr unsigned short volatile LCDREF           absolute 0x0ED7;
sfr unsigned short volatile LCDREG           absolute 0x0ED8;
sfr unsigned short volatile LCDCON           absolute 0x0ED9;
sfr unsigned short volatile LCDPS            absolute 0x0EDA;
sfr unsigned short volatile REFO2CON3        absolute 0x0EDB;
sfr unsigned short volatile REFO2CON2        absolute 0x0EDC;
sfr unsigned short volatile REFO2CON1        absolute 0x0EDD;
sfr unsigned short volatile REFO2CON         absolute 0x0EDE;
sfr unsigned short volatile REFO1CON3        absolute 0x0EDF;
sfr unsigned short volatile REFO1CON2        absolute 0x0EE0;
sfr unsigned short volatile REFO1CON1        absolute 0x0EE1;
sfr unsigned short volatile REFO1CON         absolute 0x0EE2;
sfr unsigned short volatile MEMCON           absolute 0x0EE3;
sfr unsigned short volatile LATL             absolute 0x0EE5;
sfr unsigned short volatile LATK             absolute 0x0EE8;
sfr unsigned short volatile ODCON2           absolute 0x0EEA;
sfr unsigned short volatile ODCON1           absolute 0x0EEB;
sfr unsigned short volatile MDCARL           absolute 0x0EEC;
sfr unsigned short volatile MDCARH           absolute 0x0EED;
sfr unsigned short volatile MDSRC            absolute 0x0EEE;
sfr unsigned short volatile MDCON            absolute 0x0EEF;
sfr unsigned short volatile PMD4             absolute 0x0EF0;
sfr unsigned short volatile PMD3             absolute 0x0EF1;
sfr unsigned short volatile PMD2             absolute 0x0EF2;
sfr unsigned short volatile PMD1             absolute 0x0EF3;
sfr unsigned short volatile PMD0             absolute 0x0EF4;
sfr unsigned short volatile CTMUCON4         absolute 0x0EF5;
sfr unsigned short volatile CTMUCON3         absolute 0x0EF6;
sfr unsigned short volatile CTMUCON2         absolute 0x0EF7;
sfr unsigned short volatile CTMUCON1         absolute 0x0EF8;
sfr unsigned short volatile TXREG4           absolute 0x0EF9;
sfr unsigned short volatile RCREG4           absolute 0x0EFA;
sfr unsigned short volatile SPBRG4           absolute 0x0EFB;
sfr unsigned short volatile SPBRGH4          absolute 0x0EFC;
sfr unsigned short volatile BAUDCON4         absolute 0x0EFD;
sfr unsigned short volatile TXSTA4           absolute 0x0EFE;
sfr unsigned short volatile RCSTA4           absolute 0x0EFF;
sfr unsigned short volatile DMACON2          absolute 0x0F00;
sfr unsigned short volatile ANCFG            absolute 0x0F01;
sfr unsigned short volatile SSP2ADD          absolute 0x0F02;
sfr unsigned short volatile SSP2BUF          absolute 0x0F03;
sfr unsigned short volatile T4CON            absolute 0x0F04;
sfr unsigned short volatile PR4              absolute 0x0F05;
sfr unsigned short volatile TMR4             absolute 0x0F06;
sfr unsigned short volatile CCP7CON          absolute 0x0F07;
sfr unsigned short volatile CCP6CON          absolute 0x0F0A;
sfr unsigned short volatile CCP5CON          absolute 0x0F0D;
sfr unsigned short volatile CCP4CON          absolute 0x0F10;
sfr unsigned short volatile T5GCON           absolute 0x0F13;
sfr unsigned short volatile T5CON            absolute 0x0F14;
sfr unsigned short volatile TMR5L            absolute 0x0F15;
sfr unsigned short volatile TMR5H            absolute 0x0F16;
sfr unsigned short volatile SSP2MSK          absolute 0x0F17;
sfr unsigned short volatile SSP2CON2         absolute 0x0F18;
sfr unsigned short volatile SSP2CON1         absolute 0x0F19;
sfr unsigned short volatile SSP2STAT         absolute 0x0F1A;
sfr unsigned short volatile PSTR3CON         absolute 0x0F1B;
sfr unsigned short volatile PSTR2CON         absolute 0x0F1C;
sfr unsigned short volatile TXREG2           absolute 0x0F1D;
sfr unsigned short volatile RCREG2           absolute 0x0F1E;
sfr unsigned short          SPBRG2           absolute 0x0F1F;
sfr unsigned short          SPBRGH2          absolute 0x0F20;
sfr unsigned short volatile DSGPR3           absolute 0x0F21;
sfr unsigned short volatile DSGPR2           absolute 0x0F22;
sfr unsigned short volatile DSGPR1           absolute 0x0F23;
sfr unsigned short volatile DSGPR0           absolute 0x0F24;
sfr unsigned short volatile DSWAKEH          absolute 0x0F25;
sfr unsigned short volatile DSWAKEL          absolute 0x0F26;
sfr unsigned short volatile DSCONH           absolute 0x0F27;
sfr unsigned short volatile DSCONL           absolute 0x0F28;
sfr unsigned short volatile TXREG3           absolute 0x0F29;
sfr unsigned short volatile RCREG3           absolute 0x0F2A;
sfr unsigned short volatile SPBRG3           absolute 0x0F2B;
sfr unsigned short volatile SPBRGH3          absolute 0x0F2C;
sfr unsigned short volatile BAUDCON3         absolute 0x0F2D;
sfr unsigned short volatile TXSTA3           absolute 0x0F2E;
sfr unsigned short volatile RCSTA3           absolute 0x0F2F;
sfr unsigned short          SPBRGH           absolute 0x0F30;
sfr unsigned short          SPBRGH1          absolute 0x0F30;
sfr unsigned short          BAUDCON2         absolute 0x0F31;
sfr unsigned short volatile TXSTA2           absolute 0x0F32;
sfr unsigned short volatile RCSTA2           absolute 0x0F33;
sfr unsigned short volatile CCPTMRS2         absolute 0x0F34;
sfr unsigned short volatile CCPTMRS1         absolute 0x0F35;
sfr unsigned short volatile CCPTMRS0         absolute 0x0F36;
sfr unsigned short volatile CM3CON           absolute 0x0F37;
sfr unsigned short volatile CM2CON           absolute 0x0F38;
sfr unsigned short volatile SSP2CON3         absolute 0x0F39;
sfr unsigned short volatile T8CON            absolute 0x0F3A;
sfr unsigned short volatile PR8              absolute 0x0F3B;
sfr unsigned short volatile TMR8             absolute 0x0F3C;
sfr unsigned short volatile T6CON            absolute 0x0F3D;
sfr unsigned short volatile PR6              absolute 0x0F3E;
sfr unsigned short volatile TMR6             absolute 0x0F3F;
sfr unsigned short volatile CCP10CON         absolute 0x0F40;
sfr unsigned int   volatile CCPR10           absolute 0x0F41;
sfr unsigned short volatile CCPR10L          absolute 0x0F41;
sfr unsigned short volatile CCPR10H          absolute 0x0F42;
sfr unsigned short volatile CCP9CON          absolute 0x0F43;
sfr unsigned short volatile CCP8CON          absolute 0x0F46;
sfr unsigned short volatile CCP3CON          absolute 0x0F49;
sfr unsigned short volatile ECCP3DEL         absolute 0x0F4C;
sfr unsigned short volatile ECCP3AS          absolute 0x0F4D;
sfr unsigned short volatile CCP2CON          absolute 0x0F4E;
sfr unsigned short volatile ECCP2DEL         absolute 0x0F51;
sfr unsigned short volatile ECCP2AS          absolute 0x0F52;
sfr unsigned short volatile CM1CON           absolute 0x0F53;
sfr unsigned short volatile PADCFG1          absolute 0x0F54;
sfr unsigned short volatile IOCN             absolute 0x0F55;
sfr unsigned short volatile IOCP             absolute 0x0F56;
sfr unsigned short volatile RTCCON2          absolute 0x0F57;
sfr unsigned short volatile ALRMVALL         absolute 0x0F58;
sfr unsigned short volatile ALRMVALH         absolute 0x0F59;
sfr unsigned short volatile ALRMRPT          absolute 0x0F5A;
sfr unsigned short volatile ALRMCFG          absolute 0x0F5B;
sfr unsigned short volatile RTCVALL          absolute 0x0F5C;
sfr unsigned short volatile RTCVALH          absolute 0x0F5D;
sfr unsigned short volatile RTCCAL           absolute 0x0F5E;
sfr unsigned short volatile RTCCON1          absolute 0x0F5F;
sfr unsigned short volatile DMACON1          absolute 0x0F60;
sfr unsigned short volatile PIE6             absolute 0x0F61;
sfr unsigned short          WPUB             absolute 0x0F62;
sfr unsigned short volatile ACTCON           absolute 0x0F63;
sfr unsigned short volatile OSCCON4          absolute 0x0F64;
sfr unsigned short volatile OSCCON3          absolute 0x0F65;
sfr unsigned short volatile OSCCON2          absolute 0x0F66;
sfr unsigned short          BAUDCON          absolute 0x0F67;
sfr unsigned short          BAUDCON1         absolute 0x0F67;
sfr unsigned short volatile SSP1MSK          absolute 0x0F68;
sfr unsigned short volatile SSP1CON3         absolute 0x0F69;
sfr unsigned short volatile TXBUF            absolute 0x0F6A;
sfr unsigned short volatile DMABCH           absolute 0x0F6B;
sfr unsigned short volatile DMABCL           absolute 0x0F6C;
sfr unsigned short volatile RXADDRH          absolute 0x0F6D;
sfr unsigned short volatile RXADDRL          absolute 0x0F6E;
sfr unsigned short volatile TXADDRH          absolute 0x0F6F;
sfr unsigned short volatile TXADDRL          absolute 0x0F70;
sfr unsigned short volatile LATVP            absolute 0x0F72;
sfr unsigned short volatile UADDR            absolute 0x0F74;
sfr unsigned short volatile UCON             absolute 0x0F75;
sfr unsigned short volatile USTAT            absolute 0x0F76;
sfr unsigned short volatile UEIR             absolute 0x0F77;
sfr unsigned short volatile UIR              absolute 0x0F78;
sfr unsigned short volatile UFRM             absolute 0x0F79;
sfr unsigned short volatile UFRMH            absolute 0x0F79;
sfr unsigned short volatile UFRML            absolute 0x0F7A;
sfr unsigned short volatile RCON4            absolute 0x0F7B;
sfr unsigned short volatile RCON3            absolute 0x0F7C;
sfr unsigned short volatile RCON2            absolute 0x0F7D;
sfr unsigned short volatile EECON2           absolute 0x0F7E;
sfr unsigned short volatile EECON1           absolute 0x0F7F;
sfr unsigned short volatile LATA             absolute 0x0F89;
sfr unsigned short volatile LATB             absolute 0x0F8A;
sfr unsigned short volatile LATC             absolute 0x0F8B;
sfr unsigned short volatile LATD             absolute 0x0F8C;
sfr unsigned short volatile LATE             absolute 0x0F8D;
sfr unsigned short volatile LATF             absolute 0x0F8E;
sfr unsigned short volatile LATG             absolute 0x0F8F;
sfr unsigned short volatile LATH             absolute 0x0F90;
sfr unsigned short volatile LATJ             absolute 0x0F91;
sfr unsigned short volatile OSCTUNE          absolute 0x0F9B;
sfr unsigned short volatile PSTR1CON         absolute 0x0F9C;
sfr unsigned short volatile PIE1             absolute 0x0F9D;
sfr unsigned short volatile PIR1             absolute 0x0F9E;
sfr unsigned short volatile IPR1             absolute 0x0F9F;
sfr unsigned short volatile PIE2             absolute 0x0FA0;
sfr unsigned short volatile PIR2             absolute 0x0FA1;
sfr unsigned short volatile IPR2             absolute 0x0FA2;
sfr unsigned short volatile PIE3             absolute 0x0FA3;
sfr unsigned short volatile PIR3             absolute 0x0FA4;
sfr unsigned short volatile IPR3             absolute 0x0FA5;
sfr unsigned short volatile PIR6             absolute 0x0FA6;
sfr unsigned short volatile PSPCON           absolute 0x0FA7;
sfr unsigned short volatile HLVDCON          absolute 0x0FA8;
sfr unsigned short volatile IPR6             absolute 0x0FA9;
sfr unsigned short volatile T1GCON           absolute 0x0FAA;
sfr unsigned short volatile RCSTA            absolute 0x0FAB;
sfr unsigned short volatile RCSTA1           absolute 0x0FAB;
sfr unsigned short volatile TXSTA            absolute 0x0FAC;
sfr unsigned short volatile TXSTA1           absolute 0x0FAC;
sfr unsigned short volatile TXREG            absolute 0x0FAD;
sfr unsigned short volatile TXREG1           absolute 0x0FAD;
sfr unsigned short volatile RCREG            absolute 0x0FAE;
sfr unsigned short volatile RCREG1           absolute 0x0FAE;
sfr unsigned short          SPBRG            absolute 0x0FAF;
sfr unsigned short          SPBRG1           absolute 0x0FAF;
sfr unsigned short volatile T3GCON           absolute 0x0FB0;
sfr unsigned short volatile T3CON            absolute 0x0FB1;
sfr unsigned short volatile TMR3L            absolute 0x0FB2;
sfr unsigned short volatile TMR3H            absolute 0x0FB3;
sfr unsigned short volatile PIE4             absolute 0x0FB4;
sfr unsigned short volatile PIR4             absolute 0x0FB5;
sfr unsigned short volatile IPR4             absolute 0x0FB6;
sfr unsigned short volatile PIE5             absolute 0x0FB7;
sfr unsigned short volatile PIR5             absolute 0x0FB8;
sfr unsigned short volatile CCP1CON          absolute 0x0FB9;
sfr unsigned int   volatile CCPR1            absolute 0x0FBA;
sfr unsigned short volatile CCPR1L           absolute 0x0FBA;
sfr unsigned short volatile CCPR1H           absolute 0x0FBB;
sfr unsigned short volatile ECCP1DEL         absolute 0x0FBC;
sfr unsigned short volatile ECCP1AS          absolute 0x0FBD;
sfr unsigned short volatile CVRCONL          absolute 0x0FBE;
sfr unsigned short volatile CVRCONH          absolute 0x0FBF;
sfr unsigned short volatile ADCON1L          absolute 0x0FC0;
sfr unsigned short volatile ADCON1H          absolute 0x0FC1;
sfr unsigned int   volatile ADCBUF0          absolute 0x0FC2;
sfr unsigned short volatile ADCBUF0L         absolute 0x0FC2;
sfr unsigned short volatile ADCBUF0H         absolute 0x0FC3;
sfr unsigned short volatile CMSTAT           absolute 0x0FC4;
sfr unsigned short volatile SSP1CON2         absolute 0x0FC5;
sfr unsigned short volatile SSP1CON1         absolute 0x0FC6;
sfr unsigned short volatile SSP1STAT         absolute 0x0FC7;
sfr unsigned short volatile SSP1ADD          absolute 0x0FC8;
sfr unsigned short volatile SSP1BUF          absolute 0x0FC9;
sfr unsigned short volatile T2CON            absolute 0x0FCA;
sfr unsigned short volatile PR2              absolute 0x0FCB;
sfr unsigned short volatile TMR2             absolute 0x0FCC;
sfr unsigned short volatile T1CON            absolute 0x0FCD;
sfr unsigned short volatile TMR1L            absolute 0x0FCE;
sfr unsigned short volatile TMR1H            absolute 0x0FCF;
sfr unsigned short volatile RCON             absolute 0x0FD0;
sfr unsigned short volatile IOCF             absolute 0x0FD1;
sfr unsigned short volatile IPR5             absolute 0x0FD2;
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
sfr unsigned short volatile PORTL            absolute 0x0EE4;
sfr unsigned short volatile TRISL            absolute 0x0EE6;
sfr unsigned short volatile PORTK            absolute 0x0EE7;
sfr unsigned short volatile TRISK            absolute 0x0EE9;
sfr unsigned int   volatile CCPR7            absolute 0x0F08;
sfr unsigned short volatile CCPR7L           absolute 0x0F08;
sfr unsigned short volatile CCPR7H           absolute 0x0F09;
sfr unsigned int   volatile CCPR6            absolute 0x0F0B;
sfr unsigned short volatile CCPR6L           absolute 0x0F0B;
sfr unsigned short volatile CCPR6H           absolute 0x0F0C;
sfr unsigned int   volatile CCPR5            absolute 0x0F0E;
sfr unsigned short volatile CCPR5L           absolute 0x0F0E;
sfr unsigned short volatile CCPR5H           absolute 0x0F0F;
sfr unsigned int   volatile CCPR4            absolute 0x0F11;
sfr unsigned short volatile CCPR4L           absolute 0x0F11;
sfr unsigned short volatile CCPR4H           absolute 0x0F12;
sfr unsigned int   volatile CCPR9            absolute 0x0F44;
sfr unsigned short volatile CCPR9L           absolute 0x0F44;
sfr unsigned short volatile CCPR9H           absolute 0x0F45;
sfr unsigned int   volatile CCPR8            absolute 0x0F47;
sfr unsigned short volatile CCPR8L           absolute 0x0F47;
sfr unsigned short volatile CCPR8H           absolute 0x0F48;
sfr unsigned int   volatile CCPR3            absolute 0x0F4A;
sfr unsigned short volatile CCPR3L           absolute 0x0F4A;
sfr unsigned short volatile CCPR3H           absolute 0x0F4B;
sfr unsigned int   volatile CCPR2            absolute 0x0F4F;
sfr unsigned short volatile CCPR2L           absolute 0x0F4F;
sfr unsigned short volatile CCPR2H           absolute 0x0F50;
sfr unsigned short volatile PORTVP           absolute 0x0F71;
sfr unsigned short volatile TRISVP           absolute 0x0F73;
sfr unsigned short volatile PORTA            absolute 0x0F80;
sfr unsigned short volatile PORTB            absolute 0x0F81;
sfr unsigned short volatile PORTC            absolute 0x0F82;
sfr unsigned short volatile PORTD            absolute 0x0F83;
sfr unsigned short volatile PORTE            absolute 0x0F84;
sfr unsigned short volatile PORTF            absolute 0x0F85;
sfr unsigned short volatile PORTG            absolute 0x0F86;
sfr unsigned short volatile PORTH            absolute 0x0F87;
sfr unsigned short volatile PORTJ            absolute 0x0F88;
sfr unsigned short volatile TRISA            absolute 0x0F92;
sfr unsigned short volatile TRISB            absolute 0x0F93;
sfr unsigned short volatile TRISC            absolute 0x0F94;
sfr unsigned short volatile TRISD            absolute 0x0F95;
sfr unsigned short volatile TRISE            absolute 0x0F96;
sfr unsigned short volatile TRISF            absolute 0x0F97;
sfr unsigned short volatile TRISG            absolute 0x0F98;
sfr unsigned short volatile TRISH            absolute 0x0F99;
sfr unsigned short volatile TRISJ            absolute 0x0F9A;
sfr unsigned short          PRODL            absolute 0x0FF3;
sfr unsigned short          PRODH            absolute 0x0FF4;
sfr unsigned short volatile TOSL             absolute 0x0FFD;
sfr unsigned short volatile TOSH             absolute 0x0FFE;
sfr unsigned short volatile TOSU             absolute 0x0FFF;

    // UEP0 bits
    const register unsigned short int EPSTALL = 0;
    sbit  EPSTALL_bit at UEP0.B0;
    const register unsigned short int EPINEN = 1;
    sbit  EPINEN_bit at UEP0.B1;
    const register unsigned short int EPOUTEN = 2;
    sbit  EPOUTEN_bit at UEP0.B2;
    const register unsigned short int EPCONDIS = 3;
    sbit  EPCONDIS_bit at UEP0.B3;
    const register unsigned short int EPHSHK = 4;
    sbit  EPHSHK_bit at UEP0.B4;

    // UEP1 bits
    sbit  EPSTALL_UEP1_bit at UEP1.B0;
    sbit  EPINEN_UEP1_bit at UEP1.B1;
    sbit  EPOUTEN_UEP1_bit at UEP1.B2;
    sbit  EPCONDIS_UEP1_bit at UEP1.B3;
    sbit  EPHSHK_UEP1_bit at UEP1.B4;

    // UEP2 bits
    sbit  EPSTALL_UEP2_bit at UEP2.B0;
    sbit  EPINEN_UEP2_bit at UEP2.B1;
    sbit  EPOUTEN_UEP2_bit at UEP2.B2;
    sbit  EPCONDIS_UEP2_bit at UEP2.B3;
    sbit  EPHSHK_UEP2_bit at UEP2.B4;

    // UEP3 bits
    sbit  EPSTALL_UEP3_bit at UEP3.B0;
    sbit  EPINEN_UEP3_bit at UEP3.B1;
    sbit  EPOUTEN_UEP3_bit at UEP3.B2;
    sbit  EPCONDIS_UEP3_bit at UEP3.B3;
    sbit  EPHSHK_UEP3_bit at UEP3.B4;

    // UEP4 bits
    sbit  EPSTALL_UEP4_bit at UEP4.B0;
    sbit  EPINEN_UEP4_bit at UEP4.B1;
    sbit  EPOUTEN_UEP4_bit at UEP4.B2;
    sbit  EPCONDIS_UEP4_bit at UEP4.B3;
    sbit  EPHSHK_UEP4_bit at UEP4.B4;

    // UEP5 bits
    sbit  EPSTALL_UEP5_bit at UEP5.B0;
    sbit  EPINEN_UEP5_bit at UEP5.B1;
    sbit  EPOUTEN_UEP5_bit at UEP5.B2;
    sbit  EPCONDIS_UEP5_bit at UEP5.B3;
    sbit  EPHSHK_UEP5_bit at UEP5.B4;

    // UEP6 bits
    sbit  EPSTALL_UEP6_bit at UEP6.B0;
    sbit  EPINEN_UEP6_bit at UEP6.B1;
    sbit  EPOUTEN_UEP6_bit at UEP6.B2;
    sbit  EPCONDIS_UEP6_bit at UEP6.B3;
    sbit  EPHSHK_UEP6_bit at UEP6.B4;

    // UEP7 bits
    sbit  EPSTALL_UEP7_bit at UEP7.B0;
    sbit  EPINEN_UEP7_bit at UEP7.B1;
    sbit  EPOUTEN_UEP7_bit at UEP7.B2;
    sbit  EPCONDIS_UEP7_bit at UEP7.B3;
    sbit  EPHSHK_UEP7_bit at UEP7.B4;

    // UEP8 bits
    sbit  EPSTALL_UEP8_bit at UEP8.B0;
    sbit  EPINEN_UEP8_bit at UEP8.B1;
    sbit  EPOUTEN_UEP8_bit at UEP8.B2;
    sbit  EPCONDIS_UEP8_bit at UEP8.B3;
    sbit  EPHSHK_UEP8_bit at UEP8.B4;

    // UEP9 bits
    sbit  EPSTALL_UEP9_bit at UEP9.B0;
    sbit  EPINEN_UEP9_bit at UEP9.B1;
    sbit  EPOUTEN_UEP9_bit at UEP9.B2;
    sbit  EPCONDIS_UEP9_bit at UEP9.B3;
    sbit  EPHSHK_UEP9_bit at UEP9.B4;

    // UEP10 bits
    sbit  EPSTALL_UEP10_bit at UEP10.B0;
    sbit  EPINEN_UEP10_bit at UEP10.B1;
    sbit  EPOUTEN_UEP10_bit at UEP10.B2;
    sbit  EPCONDIS_UEP10_bit at UEP10.B3;
    sbit  EPHSHK_UEP10_bit at UEP10.B4;

    // UEP11 bits
    sbit  EPSTALL_UEP11_bit at UEP11.B0;
    sbit  EPINEN_UEP11_bit at UEP11.B1;
    sbit  EPOUTEN_UEP11_bit at UEP11.B2;
    sbit  EPCONDIS_UEP11_bit at UEP11.B3;
    sbit  EPHSHK_UEP11_bit at UEP11.B4;

    // UEP12 bits
    sbit  EPSTALL_UEP12_bit at UEP12.B0;
    sbit  EPINEN_UEP12_bit at UEP12.B1;
    sbit  EPOUTEN_UEP12_bit at UEP12.B2;
    sbit  EPCONDIS_UEP12_bit at UEP12.B3;
    sbit  EPHSHK_UEP12_bit at UEP12.B4;

    // UEP13 bits
    sbit  EPSTALL_UEP13_bit at UEP13.B0;
    sbit  EPINEN_UEP13_bit at UEP13.B1;
    sbit  EPOUTEN_UEP13_bit at UEP13.B2;
    sbit  EPCONDIS_UEP13_bit at UEP13.B3;
    sbit  EPHSHK_UEP13_bit at UEP13.B4;

    // UEP14 bits
    sbit  EPSTALL_UEP14_bit at UEP14.B0;
    sbit  EPINEN_UEP14_bit at UEP14.B1;
    sbit  EPOUTEN_UEP14_bit at UEP14.B2;
    sbit  EPCONDIS_UEP14_bit at UEP14.B3;
    sbit  EPHSHK_UEP14_bit at UEP14.B4;

    // UEP15 bits
    sbit  EPSTALL_UEP15_bit at UEP15.B0;
    sbit  EPINEN_UEP15_bit at UEP15.B1;
    sbit  EPOUTEN_UEP15_bit at UEP15.B2;
    sbit  EPCONDIS_UEP15_bit at UEP15.B3;
    sbit  EPHSHK_UEP15_bit at UEP15.B4;

    // UEIE bits
    const register unsigned short int PIDEE = 0;
    sbit  PIDEE_bit at UEIE.B0;
    const register unsigned short int CRC5EE = 1;
    sbit  CRC5EE_bit at UEIE.B1;
    const register unsigned short int CRC16EE = 2;
    sbit  CRC16EE_bit at UEIE.B2;
    const register unsigned short int DFN8EE = 3;
    sbit  DFN8EE_bit at UEIE.B3;
    const register unsigned short int BTOEE = 4;
    sbit  BTOEE_bit at UEIE.B4;
    const register unsigned short int BTSEE = 7;
    sbit  BTSEE_bit at UEIE.B7;

    // UIE bits
    const register unsigned short int URSTIE = 0;
    sbit  URSTIE_bit at UIE.B0;
    const register unsigned short int UERRIE = 1;
    sbit  UERRIE_bit at UIE.B1;
    const register unsigned short int ACTVIE = 2;
    sbit  ACTVIE_bit at UIE.B2;
    const register unsigned short int TRNIE = 3;
    sbit  TRNIE_bit at UIE.B3;
    const register unsigned short int IDLEIE = 4;
    sbit  IDLEIE_bit at UIE.B4;
    const register unsigned short int STALLIE = 5;
    sbit  STALLIE_bit at UIE.B5;
    const register unsigned short int SOFIE = 6;
    sbit  SOFIE_bit at UIE.B6;

    // UCFG bits
    const register unsigned short int PPB0 = 0;
    sbit  PPB0_bit at UCFG.B0;
    const register unsigned short int PPB1 = 1;
    sbit  PPB1_bit at UCFG.B1;
    const register unsigned short int FSEN = 2;
    sbit  FSEN_bit at UCFG.B2;
    const register unsigned short int UTRDIS = 3;
    sbit  UTRDIS_bit at UCFG.B3;
    const register unsigned short int UPUEN = 4;
    sbit  UPUEN_bit at UCFG.B4;
    const register unsigned short int UOEMON = 6;
    sbit  UOEMON_bit at UCFG.B6;
    const register unsigned short int UTEYE = 7;
    sbit  UTEYE_bit at UCFG.B7;

    // RPOR0_1 bits
    const register unsigned short int RPO0R0 = 0;
    sbit  RPO0R0_bit at RPOR0_1.B0;
    const register unsigned short int RPO0R1 = 1;
    sbit  RPO0R1_bit at RPOR0_1.B1;
    const register unsigned short int RPO0R2 = 2;
    sbit  RPO0R2_bit at RPOR0_1.B2;
    const register unsigned short int RPO0R3 = 3;
    sbit  RPO0R3_bit at RPOR0_1.B3;
    const register unsigned short int RPO1R0 = 4;
    sbit  RPO1R0_bit at RPOR0_1.B4;
    const register unsigned short int RPO1R1 = 5;
    sbit  RPO1R1_bit at RPOR0_1.B5;
    const register unsigned short int RPO1R2 = 6;
    sbit  RPO1R2_bit at RPOR0_1.B6;
    const register unsigned short int RPO1R3 = 7;
    sbit  RPO1R3_bit at RPOR0_1.B7;

    // RPOR2_3 bits
    const register unsigned short int RPO2R0 = 0;
    sbit  RPO2R0_bit at RPOR2_3.B0;
    const register unsigned short int RPO2R1 = 1;
    sbit  RPO2R1_bit at RPOR2_3.B1;
    const register unsigned short int RPO2R2 = 2;
    sbit  RPO2R2_bit at RPOR2_3.B2;
    const register unsigned short int RPO2R3 = 3;
    sbit  RPO2R3_bit at RPOR2_3.B3;
    const register unsigned short int RPO3R0 = 4;
    sbit  RPO3R0_bit at RPOR2_3.B4;
    const register unsigned short int RPO3R1 = 5;
    sbit  RPO3R1_bit at RPOR2_3.B5;
    const register unsigned short int RPO3R2 = 6;
    sbit  RPO3R2_bit at RPOR2_3.B6;
    const register unsigned short int RPO3R3 = 7;
    sbit  RPO3R3_bit at RPOR2_3.B7;

    // RPOR4_5 bits
    const register unsigned short int RPO4R0 = 0;
    sbit  RPO4R0_bit at RPOR4_5.B0;
    const register unsigned short int RPO4R1 = 1;
    sbit  RPO4R1_bit at RPOR4_5.B1;
    const register unsigned short int RPO4R2 = 2;
    sbit  RPO4R2_bit at RPOR4_5.B2;
    const register unsigned short int RPO4R3 = 3;
    sbit  RPO4R3_bit at RPOR4_5.B3;
    const register unsigned short int RPO5R0 = 4;
    sbit  RPO5R0_bit at RPOR4_5.B4;
    const register unsigned short int RPO5R1 = 5;
    sbit  RPO5R1_bit at RPOR4_5.B5;
    const register unsigned short int RPO5R2 = 6;
    sbit  RPO5R2_bit at RPOR4_5.B6;
    const register unsigned short int RPO5R3 = 7;
    sbit  RPO5R3_bit at RPOR4_5.B7;

    // RPOR6_7 bits
    const register unsigned short int RPO6R0 = 0;
    sbit  RPO6R0_bit at RPOR6_7.B0;
    const register unsigned short int RPO6R1 = 1;
    sbit  RPO6R1_bit at RPOR6_7.B1;
    const register unsigned short int RPO6R2 = 2;
    sbit  RPO6R2_bit at RPOR6_7.B2;
    const register unsigned short int RPO6R3 = 3;
    sbit  RPO6R3_bit at RPOR6_7.B3;
    const register unsigned short int RPO7R0 = 4;
    sbit  RPO7R0_bit at RPOR6_7.B4;
    const register unsigned short int RPO7R1 = 5;
    sbit  RPO7R1_bit at RPOR6_7.B5;
    const register unsigned short int RPO7R2 = 6;
    sbit  RPO7R2_bit at RPOR6_7.B6;
    const register unsigned short int RPO7R3 = 7;
    sbit  RPO7R3_bit at RPOR6_7.B7;

    // RPOR8_9 bits
    const register unsigned short int RPO8R0 = 0;
    sbit  RPO8R0_bit at RPOR8_9.B0;
    const register unsigned short int RPO8R1 = 1;
    sbit  RPO8R1_bit at RPOR8_9.B1;
    const register unsigned short int RPO8R2 = 2;
    sbit  RPO8R2_bit at RPOR8_9.B2;
    const register unsigned short int RPO8R3 = 3;
    sbit  RPO8R3_bit at RPOR8_9.B3;
    const register unsigned short int RPO9R0 = 4;
    sbit  RPO9R0_bit at RPOR8_9.B4;
    const register unsigned short int RPO9R1 = 5;
    sbit  RPO9R1_bit at RPOR8_9.B5;
    const register unsigned short int RPO9R2 = 6;
    sbit  RPO9R2_bit at RPOR8_9.B6;
    const register unsigned short int RPO9R3 = 7;
    sbit  RPO9R3_bit at RPOR8_9.B7;

    // RPOR10_11 bits
    const register unsigned short int RPO10R0 = 0;
    sbit  RPO10R0_bit at RPOR10_11.B0;
    const register unsigned short int RPO10R1 = 1;
    sbit  RPO10R1_bit at RPOR10_11.B1;
    const register unsigned short int RPO10R2 = 2;
    sbit  RPO10R2_bit at RPOR10_11.B2;
    const register unsigned short int RPO10R3 = 3;
    sbit  RPO10R3_bit at RPOR10_11.B3;
    const register unsigned short int RPO11R0 = 4;
    sbit  RPO11R0_bit at RPOR10_11.B4;
    const register unsigned short int RPO11R1 = 5;
    sbit  RPO11R1_bit at RPOR10_11.B5;
    const register unsigned short int RPO11R2 = 6;
    sbit  RPO11R2_bit at RPOR10_11.B6;
    const register unsigned short int RPO11R3 = 7;
    sbit  RPO11R3_bit at RPOR10_11.B7;

    // RPOR12_13 bits
    const register unsigned short int RPO12R0 = 0;
    sbit  RPO12R0_bit at RPOR12_13.B0;
    const register unsigned short int RPO12R1 = 1;
    sbit  RPO12R1_bit at RPOR12_13.B1;
    const register unsigned short int RPO12R2 = 2;
    sbit  RPO12R2_bit at RPOR12_13.B2;
    const register unsigned short int RPO12R3 = 3;
    sbit  RPO12R3_bit at RPOR12_13.B3;
    const register unsigned short int RPO13R0 = 4;
    sbit  RPO13R0_bit at RPOR12_13.B4;
    const register unsigned short int RPO13R1 = 5;
    sbit  RPO13R1_bit at RPOR12_13.B5;
    const register unsigned short int RPO13R2 = 6;
    sbit  RPO13R2_bit at RPOR12_13.B6;
    const register unsigned short int RPO13R3 = 7;
    sbit  RPO13R3_bit at RPOR12_13.B7;

    // RPOR14_15 bits
    const register unsigned short int RPO14R0 = 0;
    sbit  RPO14R0_bit at RPOR14_15.B0;
    const register unsigned short int RPO14R1 = 1;
    sbit  RPO14R1_bit at RPOR14_15.B1;
    const register unsigned short int RPO14R2 = 2;
    sbit  RPO14R2_bit at RPOR14_15.B2;
    const register unsigned short int RPO14R3 = 3;
    sbit  RPO14R3_bit at RPOR14_15.B3;
    const register unsigned short int RPO15R0 = 4;
    sbit  RPO15R0_bit at RPOR14_15.B4;
    const register unsigned short int RPO15R1 = 5;
    sbit  RPO15R1_bit at RPOR14_15.B5;
    const register unsigned short int RPO15R2 = 6;
    sbit  RPO15R2_bit at RPOR14_15.B6;
    const register unsigned short int RPO15R3 = 7;
    sbit  RPO15R3_bit at RPOR14_15.B7;

    // RPOR16_17 bits
    const register unsigned short int RPO16R0 = 0;
    sbit  RPO16R0_bit at RPOR16_17.B0;
    const register unsigned short int RPO16R1 = 1;
    sbit  RPO16R1_bit at RPOR16_17.B1;
    const register unsigned short int RPO16R2 = 2;
    sbit  RPO16R2_bit at RPOR16_17.B2;
    const register unsigned short int RPO16R3 = 3;
    sbit  RPO16R3_bit at RPOR16_17.B3;
    const register unsigned short int RPO17R0 = 4;
    sbit  RPO17R0_bit at RPOR16_17.B4;
    const register unsigned short int RPO17R1 = 5;
    sbit  RPO17R1_bit at RPOR16_17.B5;
    const register unsigned short int RPO17R2 = 6;
    sbit  RPO17R2_bit at RPOR16_17.B6;
    const register unsigned short int RPO17R3 = 7;
    sbit  RPO17R3_bit at RPOR16_17.B7;

    // RPOR18_19 bits
    const register unsigned short int RPO18R0 = 0;
    sbit  RPO18R0_bit at RPOR18_19.B0;
    const register unsigned short int RPO18R1 = 1;
    sbit  RPO18R1_bit at RPOR18_19.B1;
    const register unsigned short int RPO18R2 = 2;
    sbit  RPO18R2_bit at RPOR18_19.B2;
    const register unsigned short int RPO18R3 = 3;
    sbit  RPO18R3_bit at RPOR18_19.B3;
    const register unsigned short int RPO19R0 = 4;
    sbit  RPO19R0_bit at RPOR18_19.B4;
    const register unsigned short int RPO19R1 = 5;
    sbit  RPO19R1_bit at RPOR18_19.B5;
    const register unsigned short int RPO19R2 = 6;
    sbit  RPO19R2_bit at RPOR18_19.B6;
    const register unsigned short int RPO19R3 = 7;
    sbit  RPO19R3_bit at RPOR18_19.B7;

    // RPOR20_21 bits
    const register unsigned short int RPO20R0 = 0;
    sbit  RPO20R0_bit at RPOR20_21.B0;
    const register unsigned short int RPO20R1 = 1;
    sbit  RPO20R1_bit at RPOR20_21.B1;
    const register unsigned short int RPO20R2 = 2;
    sbit  RPO20R2_bit at RPOR20_21.B2;
    const register unsigned short int RPO20R3 = 3;
    sbit  RPO20R3_bit at RPOR20_21.B3;
    const register unsigned short int RPO21R0 = 4;
    sbit  RPO21R0_bit at RPOR20_21.B4;
    const register unsigned short int RPO21R1 = 5;
    sbit  RPO21R1_bit at RPOR20_21.B5;
    const register unsigned short int RPO21R2 = 6;
    sbit  RPO21R2_bit at RPOR20_21.B6;
    const register unsigned short int RPO21R3 = 7;
    sbit  RPO21R3_bit at RPOR20_21.B7;

    // RPOR22_23 bits
    const register unsigned short int RPO22R0 = 0;
    sbit  RPO22R0_bit at RPOR22_23.B0;
    const register unsigned short int RPO22R1 = 1;
    sbit  RPO22R1_bit at RPOR22_23.B1;
    const register unsigned short int RPO22R2 = 2;
    sbit  RPO22R2_bit at RPOR22_23.B2;
    const register unsigned short int RPO22R3 = 3;
    sbit  RPO22R3_bit at RPOR22_23.B3;
    const register unsigned short int RPO23R0 = 4;
    sbit  RPO23R0_bit at RPOR22_23.B4;
    const register unsigned short int RPO23R1 = 5;
    sbit  RPO23R1_bit at RPOR22_23.B5;
    const register unsigned short int RPO23R2 = 6;
    sbit  RPO23R2_bit at RPOR22_23.B6;
    const register unsigned short int RPO23R3 = 7;
    sbit  RPO23R3_bit at RPOR22_23.B7;

    // RPOR24_25 bits
    const register unsigned short int RPO24R0 = 0;
    sbit  RPO24R0_bit at RPOR24_25.B0;
    const register unsigned short int RPO24R1 = 1;
    sbit  RPO24R1_bit at RPOR24_25.B1;
    const register unsigned short int RPO24R2 = 2;
    sbit  RPO24R2_bit at RPOR24_25.B2;
    const register unsigned short int RPO24R3 = 3;
    sbit  RPO24R3_bit at RPOR24_25.B3;
    const register unsigned short int RPO25R0 = 4;
    sbit  RPO25R0_bit at RPOR24_25.B4;
    const register unsigned short int RPO25R1 = 5;
    sbit  RPO25R1_bit at RPOR24_25.B5;
    const register unsigned short int RPO25R2 = 6;
    sbit  RPO25R2_bit at RPOR24_25.B6;
    const register unsigned short int RPO25R3 = 7;
    sbit  RPO25R3_bit at RPOR24_25.B7;

    // RPOR26_27 bits
    const register unsigned short int RPO26R0 = 0;
    sbit  RPO26R0_bit at RPOR26_27.B0;
    const register unsigned short int RPO26R1 = 1;
    sbit  RPO26R1_bit at RPOR26_27.B1;
    const register unsigned short int RPO26R2 = 2;
    sbit  RPO26R2_bit at RPOR26_27.B2;
    const register unsigned short int RPO26R3 = 3;
    sbit  RPO26R3_bit at RPOR26_27.B3;
    const register unsigned short int RPO27R0 = 4;
    sbit  RPO27R0_bit at RPOR26_27.B4;
    const register unsigned short int RPO27R1 = 5;
    sbit  RPO27R1_bit at RPOR26_27.B5;
    const register unsigned short int RPO27R2 = 6;
    sbit  RPO27R2_bit at RPOR26_27.B6;
    const register unsigned short int RPO27R3 = 7;
    sbit  RPO27R3_bit at RPOR26_27.B7;

    // RPOR28_29 bits
    const register unsigned short int RPO28R0 = 0;
    sbit  RPO28R0_bit at RPOR28_29.B0;
    const register unsigned short int RPO28R1 = 1;
    sbit  RPO28R1_bit at RPOR28_29.B1;
    const register unsigned short int RPO28R2 = 2;
    sbit  RPO28R2_bit at RPOR28_29.B2;
    const register unsigned short int RPO28R3 = 3;
    sbit  RPO28R3_bit at RPOR28_29.B3;
    const register unsigned short int RPO29R0 = 4;
    sbit  RPO29R0_bit at RPOR28_29.B4;
    const register unsigned short int RPO29R1 = 5;
    sbit  RPO29R1_bit at RPOR28_29.B5;
    const register unsigned short int RPO29R2 = 6;
    sbit  RPO29R2_bit at RPOR28_29.B6;
    const register unsigned short int RPO29R3 = 7;
    sbit  RPO29R3_bit at RPOR28_29.B7;

    // RPOR30_31 bits
    const register unsigned short int RPO30R0 = 0;
    sbit  RPO30R0_bit at RPOR30_31.B0;
    const register unsigned short int RPO30R1 = 1;
    sbit  RPO30R1_bit at RPOR30_31.B1;
    const register unsigned short int RPO30R2 = 2;
    sbit  RPO30R2_bit at RPOR30_31.B2;
    const register unsigned short int RPO30R3 = 3;
    sbit  RPO30R3_bit at RPOR30_31.B3;
    const register unsigned short int RPO31R0 = 4;
    sbit  RPO31R0_bit at RPOR30_31.B4;
    const register unsigned short int RPO31R1 = 5;
    sbit  RPO31R1_bit at RPOR30_31.B5;
    const register unsigned short int RPO31R2 = 6;
    sbit  RPO31R2_bit at RPOR30_31.B6;
    const register unsigned short int RPO31R3 = 7;
    sbit  RPO31R3_bit at RPOR30_31.B7;

    // RPOR32_33 bits
    const register unsigned short int RPO32R0 = 0;
    sbit  RPO32R0_bit at RPOR32_33.B0;
    const register unsigned short int RPO32R1 = 1;
    sbit  RPO32R1_bit at RPOR32_33.B1;
    const register unsigned short int RPO32R2 = 2;
    sbit  RPO32R2_bit at RPOR32_33.B2;
    const register unsigned short int RPO32R3 = 3;
    sbit  RPO32R3_bit at RPOR32_33.B3;
    const register unsigned short int RPO33R0 = 4;
    sbit  RPO33R0_bit at RPOR32_33.B4;
    const register unsigned short int RPO33R1 = 5;
    sbit  RPO33R1_bit at RPOR32_33.B5;
    const register unsigned short int RPO33R2 = 6;
    sbit  RPO33R2_bit at RPOR32_33.B6;
    const register unsigned short int RPO33R3 = 7;
    sbit  RPO33R3_bit at RPOR32_33.B7;

    // RPOR34_35 bits
    const register unsigned short int RPO34R0 = 0;
    sbit  RPO34R0_bit at RPOR34_35.B0;
    const register unsigned short int RPO34R1 = 1;
    sbit  RPO34R1_bit at RPOR34_35.B1;
    const register unsigned short int RPO34R2 = 2;
    sbit  RPO34R2_bit at RPOR34_35.B2;
    const register unsigned short int RPO34R3 = 3;
    sbit  RPO34R3_bit at RPOR34_35.B3;
    const register unsigned short int RPO35R0 = 4;
    sbit  RPO35R0_bit at RPOR34_35.B4;
    const register unsigned short int RPO35R1 = 5;
    sbit  RPO35R1_bit at RPOR34_35.B5;
    const register unsigned short int RPO35R2 = 6;
    sbit  RPO35R2_bit at RPOR34_35.B6;
    const register unsigned short int RPO35R3 = 7;
    sbit  RPO35R3_bit at RPOR34_35.B7;

    // RPOR36_37 bits
    const register unsigned short int RPO36R0 = 0;
    sbit  RPO36R0_bit at RPOR36_37.B0;
    const register unsigned short int RPO36R1 = 1;
    sbit  RPO36R1_bit at RPOR36_37.B1;
    const register unsigned short int RPO36R2 = 2;
    sbit  RPO36R2_bit at RPOR36_37.B2;
    const register unsigned short int RPO36R3 = 3;
    sbit  RPO36R3_bit at RPOR36_37.B3;
    const register unsigned short int RPO37R0 = 4;
    sbit  RPO37R0_bit at RPOR36_37.B4;
    const register unsigned short int RPO37R1 = 5;
    sbit  RPO37R1_bit at RPOR36_37.B5;
    const register unsigned short int RPO37R2 = 6;
    sbit  RPO37R2_bit at RPOR36_37.B6;
    const register unsigned short int RPO37R3 = 7;
    sbit  RPO37R3_bit at RPOR36_37.B7;

    // RPOR38_39 bits
    const register unsigned short int RPO38R0 = 0;
    sbit  RPO38R0_bit at RPOR38_39.B0;
    const register unsigned short int RPO38R1 = 1;
    sbit  RPO38R1_bit at RPOR38_39.B1;
    const register unsigned short int RPO38R2 = 2;
    sbit  RPO38R2_bit at RPOR38_39.B2;
    const register unsigned short int RPO38R3 = 3;
    sbit  RPO38R3_bit at RPOR38_39.B3;
    const register unsigned short int RPO39R0 = 4;
    sbit  RPO39R0_bit at RPOR38_39.B4;
    const register unsigned short int RPO39R1 = 5;
    sbit  RPO39R1_bit at RPOR38_39.B5;
    const register unsigned short int RPO39R2 = 6;
    sbit  RPO39R2_bit at RPOR38_39.B6;
    const register unsigned short int RPO39R3 = 7;
    sbit  RPO39R3_bit at RPOR38_39.B7;

    // RPOR40_41 bits
    const register unsigned short int RPO40R0 = 0;
    sbit  RPO40R0_bit at RPOR40_41.B0;
    const register unsigned short int RPO40R1 = 1;
    sbit  RPO40R1_bit at RPOR40_41.B1;
    const register unsigned short int RPO40R2 = 2;
    sbit  RPO40R2_bit at RPOR40_41.B2;
    const register unsigned short int RPO40R3 = 3;
    sbit  RPO40R3_bit at RPOR40_41.B3;
    const register unsigned short int RPO41R0 = 4;
    sbit  RPO41R0_bit at RPOR40_41.B4;
    const register unsigned short int RPO41R1 = 5;
    sbit  RPO41R1_bit at RPOR40_41.B5;
    const register unsigned short int RPO41R2 = 6;
    sbit  RPO41R2_bit at RPOR40_41.B6;
    const register unsigned short int RPO41R3 = 7;
    sbit  RPO41R3_bit at RPOR40_41.B7;

    // RPOR42_43 bits
    const register unsigned short int RPO42R0 = 0;
    sbit  RPO42R0_bit at RPOR42_43.B0;
    const register unsigned short int RPO42R1 = 1;
    sbit  RPO42R1_bit at RPOR42_43.B1;
    const register unsigned short int RPO42R2 = 2;
    sbit  RPO42R2_bit at RPOR42_43.B2;
    const register unsigned short int RPO42R3 = 3;
    sbit  RPO42R3_bit at RPOR42_43.B3;
    const register unsigned short int RPO43R0 = 4;
    sbit  RPO43R0_bit at RPOR42_43.B4;
    const register unsigned short int RPO43R1 = 5;
    sbit  RPO43R1_bit at RPOR42_43.B5;
    const register unsigned short int RPO43R2 = 6;
    sbit  RPO43R2_bit at RPOR42_43.B6;
    const register unsigned short int RPO43R3 = 7;
    sbit  RPO43R3_bit at RPOR42_43.B7;

    // RPOR44_45 bits
    const register unsigned short int RPO44R0 = 0;
    sbit  RPO44R0_bit at RPOR44_45.B0;
    const register unsigned short int RPO44R1 = 1;
    sbit  RPO44R1_bit at RPOR44_45.B1;
    const register unsigned short int RPO44R2 = 2;
    sbit  RPO44R2_bit at RPOR44_45.B2;
    const register unsigned short int RPO44R3 = 3;
    sbit  RPO44R3_bit at RPOR44_45.B3;
    const register unsigned short int RPO45R0 = 4;
    sbit  RPO45R0_bit at RPOR44_45.B4;
    const register unsigned short int RPO45R1 = 5;
    sbit  RPO45R1_bit at RPOR44_45.B5;
    const register unsigned short int RPO45R2 = 6;
    sbit  RPO45R2_bit at RPOR44_45.B6;
    const register unsigned short int RPO45R3 = 7;
    sbit  RPO45R3_bit at RPOR44_45.B7;

    // RPOR46 bits
    const register unsigned short int RPO46R0 = 0;
    sbit  RPO46R0_bit at RPOR46.B0;
    const register unsigned short int RPO46R1 = 1;
    sbit  RPO46R1_bit at RPOR46.B1;
    const register unsigned short int RPO46R2 = 2;
    sbit  RPO46R2_bit at RPOR46.B2;
    const register unsigned short int RPO46R3 = 3;
    sbit  RPO46R3_bit at RPOR46.B3;

    // RPINR0_1 bits
    const register unsigned short int U1RXR0 = 0;
    sbit  U1RXR0_bit at RPINR0_1.B0;
    const register unsigned short int U1RXR1 = 1;
    sbit  U1RXR1_bit at RPINR0_1.B1;
    const register unsigned short int U1RXR2 = 2;
    sbit  U1RXR2_bit at RPINR0_1.B2;
    const register unsigned short int U1RXR3 = 3;
    sbit  U1RXR3_bit at RPINR0_1.B3;
    const register unsigned short int U1TXR0 = 4;
    sbit  U1TXR0_bit at RPINR0_1.B4;
    const register unsigned short int U1TXR1 = 5;
    sbit  U1TXR1_bit at RPINR0_1.B5;
    const register unsigned short int U1TXR2 = 6;
    sbit  U1TXR2_bit at RPINR0_1.B6;
    const register unsigned short int U1TXR3 = 7;
    sbit  U1TXR3_bit at RPINR0_1.B7;

    // RPINR2_3 bits
    const register unsigned short int U2RXR0 = 0;
    sbit  U2RXR0_bit at RPINR2_3.B0;
    const register unsigned short int U2RXR1 = 1;
    sbit  U2RXR1_bit at RPINR2_3.B1;
    const register unsigned short int U2RXR2 = 2;
    sbit  U2RXR2_bit at RPINR2_3.B2;
    const register unsigned short int U2RXR3 = 3;
    sbit  U2RXR3_bit at RPINR2_3.B3;
    const register unsigned short int U2TXR0 = 4;
    sbit  U2TXR0_bit at RPINR2_3.B4;
    const register unsigned short int U2TXR1 = 5;
    sbit  U2TXR1_bit at RPINR2_3.B5;
    const register unsigned short int U2TXR2 = 6;
    sbit  U2TXR2_bit at RPINR2_3.B6;
    const register unsigned short int U2TXR3 = 7;
    sbit  U2TXR3_bit at RPINR2_3.B7;

    // RPINR4_5 bits
    const register unsigned short int U3RXR0 = 0;
    sbit  U3RXR0_bit at RPINR4_5.B0;
    const register unsigned short int U3RXR1 = 1;
    sbit  U3RXR1_bit at RPINR4_5.B1;
    const register unsigned short int U3RXR2 = 2;
    sbit  U3RXR2_bit at RPINR4_5.B2;
    const register unsigned short int U3RXR3 = 3;
    sbit  U3RXR3_bit at RPINR4_5.B3;
    const register unsigned short int U3TXR0 = 4;
    sbit  U3TXR0_bit at RPINR4_5.B4;
    const register unsigned short int U3TXR1 = 5;
    sbit  U3TXR1_bit at RPINR4_5.B5;
    const register unsigned short int U3TXR2 = 6;
    sbit  U3TXR2_bit at RPINR4_5.B6;
    const register unsigned short int U3TXR3 = 7;
    sbit  U3TXR3_bit at RPINR4_5.B7;

    // RPINR6_7 bits
    const register unsigned short int U4RXR0 = 0;
    sbit  U4RXR0_bit at RPINR6_7.B0;
    const register unsigned short int U4RXR1 = 1;
    sbit  U4RXR1_bit at RPINR6_7.B1;
    const register unsigned short int U4RXR2 = 2;
    sbit  U4RXR2_bit at RPINR6_7.B2;
    const register unsigned short int U4RXR3 = 3;
    sbit  U4RXR3_bit at RPINR6_7.B3;
    const register unsigned short int U4TXR0 = 4;
    sbit  U4TXR0_bit at RPINR6_7.B4;
    const register unsigned short int U4TXR1 = 5;
    sbit  U4TXR1_bit at RPINR6_7.B5;
    const register unsigned short int U4TXR2 = 6;
    sbit  U4TXR2_bit at RPINR6_7.B6;
    const register unsigned short int U4TXR3 = 7;
    sbit  U4TXR3_bit at RPINR6_7.B7;

    // RPINR8_9 bits
    const register unsigned short int SCK1R0 = 0;
    sbit  SCK1R0_bit at RPINR8_9.B0;
    const register unsigned short int SCK1R1 = 1;
    sbit  SCK1R1_bit at RPINR8_9.B1;
    const register unsigned short int SCK1R2 = 2;
    sbit  SCK1R2_bit at RPINR8_9.B2;
    const register unsigned short int SCK1R3 = 3;
    sbit  SCK1R3_bit at RPINR8_9.B3;
    const register unsigned short int SDI1R0 = 4;
    sbit  SDI1R0_bit at RPINR8_9.B4;
    const register unsigned short int SDI1R1 = 5;
    sbit  SDI1R1_bit at RPINR8_9.B5;
    const register unsigned short int SDI1R2 = 6;
    sbit  SDI1R2_bit at RPINR8_9.B6;
    const register unsigned short int SDI1R3 = 7;
    sbit  SDI1R3_bit at RPINR8_9.B7;

    // RPINR10_11 bits
    const register unsigned short int SS1R0 = 0;
    sbit  SS1R0_bit at RPINR10_11.B0;
    const register unsigned short int SS1R1 = 1;
    sbit  SS1R1_bit at RPINR10_11.B1;
    const register unsigned short int SS1R2 = 2;
    sbit  SS1R2_bit at RPINR10_11.B2;
    const register unsigned short int SS1R3 = 3;
    sbit  SS1R3_bit at RPINR10_11.B3;
    const register unsigned short int SCK2R0 = 4;
    sbit  SCK2R0_bit at RPINR10_11.B4;
    const register unsigned short int SCK2R1 = 5;
    sbit  SCK2R1_bit at RPINR10_11.B5;
    const register unsigned short int SCK2R2 = 6;
    sbit  SCK2R2_bit at RPINR10_11.B6;
    const register unsigned short int SCK2R3 = 7;
    sbit  SCK2R3_bit at RPINR10_11.B7;

    // RPINR12_13 bits
    const register unsigned short int SDI2R0 = 0;
    sbit  SDI2R0_bit at RPINR12_13.B0;
    const register unsigned short int SDI2R1 = 1;
    sbit  SDI2R1_bit at RPINR12_13.B1;
    const register unsigned short int SDI2R2 = 2;
    sbit  SDI2R2_bit at RPINR12_13.B2;
    const register unsigned short int SDI2R3 = 3;
    sbit  SDI2R3_bit at RPINR12_13.B3;
    const register unsigned short int SS2R0 = 4;
    sbit  SS2R0_bit at RPINR12_13.B4;
    const register unsigned short int SS2R1 = 5;
    sbit  SS2R1_bit at RPINR12_13.B5;
    const register unsigned short int SS2R2 = 6;
    sbit  SS2R2_bit at RPINR12_13.B6;
    const register unsigned short int SS2R3 = 7;
    sbit  SS2R3_bit at RPINR12_13.B7;

    // RPINR14_15 bits
    const register unsigned short int FLT0R0 = 0;
    sbit  FLT0R0_bit at RPINR14_15.B0;
    const register unsigned short int FLT0R1 = 1;
    sbit  FLT0R1_bit at RPINR14_15.B1;
    const register unsigned short int FLT0R2 = 2;
    sbit  FLT0R2_bit at RPINR14_15.B2;
    const register unsigned short int FLT0R3 = 3;
    sbit  FLT0R3_bit at RPINR14_15.B3;
    const register unsigned short int ECCP1R0 = 4;
    sbit  ECCP1R0_bit at RPINR14_15.B4;
    const register unsigned short int ECCP1R1 = 5;
    sbit  ECCP1R1_bit at RPINR14_15.B5;
    const register unsigned short int ECCP1R2 = 6;
    sbit  ECCP1R2_bit at RPINR14_15.B6;
    const register unsigned short int ECCP1R3 = 7;
    sbit  ECCP1R3_bit at RPINR14_15.B7;

    // RPINR16_17 bits
    const register unsigned short int ECCP2R0 = 0;
    sbit  ECCP2R0_bit at RPINR16_17.B0;
    const register unsigned short int ECCP2R1 = 1;
    sbit  ECCP2R1_bit at RPINR16_17.B1;
    const register unsigned short int ECCP2R2 = 2;
    sbit  ECCP2R2_bit at RPINR16_17.B2;
    const register unsigned short int ECCP2R3 = 3;
    sbit  ECCP2R3_bit at RPINR16_17.B3;
    const register unsigned short int ECCP3R0 = 4;
    sbit  ECCP3R0_bit at RPINR16_17.B4;
    const register unsigned short int ECCP3R1 = 5;
    sbit  ECCP3R1_bit at RPINR16_17.B5;
    const register unsigned short int ECCP3R2 = 6;
    sbit  ECCP3R2_bit at RPINR16_17.B6;
    const register unsigned short int ECCP3R3 = 7;
    sbit  ECCP3R3_bit at RPINR16_17.B7;

    // RPINR18_19 bits
    const register unsigned short int IOC0R0 = 0;
    sbit  IOC0R0_bit at RPINR18_19.B0;
    const register unsigned short int IOC0R1 = 1;
    sbit  IOC0R1_bit at RPINR18_19.B1;
    const register unsigned short int IOC0R2 = 2;
    sbit  IOC0R2_bit at RPINR18_19.B2;
    const register unsigned short int IOC0R3 = 3;
    sbit  IOC0R3_bit at RPINR18_19.B3;
    const register unsigned short int IOC1R0 = 4;
    sbit  IOC1R0_bit at RPINR18_19.B4;
    const register unsigned short int IOC1R1 = 5;
    sbit  IOC1R1_bit at RPINR18_19.B5;
    const register unsigned short int IOC1R2 = 6;
    sbit  IOC1R2_bit at RPINR18_19.B6;
    const register unsigned short int IOC1R3 = 7;
    sbit  IOC1R3_bit at RPINR18_19.B7;

    // RPINR20_21 bits
    const register unsigned short int IOC2R0 = 0;
    sbit  IOC2R0_bit at RPINR20_21.B0;
    const register unsigned short int IOC2R1 = 1;
    sbit  IOC2R1_bit at RPINR20_21.B1;
    const register unsigned short int IOC2R2 = 2;
    sbit  IOC2R2_bit at RPINR20_21.B2;
    const register unsigned short int IOC2R3 = 3;
    sbit  IOC2R3_bit at RPINR20_21.B3;
    const register unsigned short int IOC3R0 = 4;
    sbit  IOC3R0_bit at RPINR20_21.B4;
    const register unsigned short int IOC3R1 = 5;
    sbit  IOC3R1_bit at RPINR20_21.B5;
    const register unsigned short int IOC3R2 = 6;
    sbit  IOC3R2_bit at RPINR20_21.B6;
    const register unsigned short int IOC3R3 = 7;
    sbit  IOC3R3_bit at RPINR20_21.B7;

    // RPINR22_23 bits
    const register unsigned short int IOC4R0 = 0;
    sbit  IOC4R0_bit at RPINR22_23.B0;
    const register unsigned short int IOC4R1 = 1;
    sbit  IOC4R1_bit at RPINR22_23.B1;
    const register unsigned short int IOC4R2 = 2;
    sbit  IOC4R2_bit at RPINR22_23.B2;
    const register unsigned short int IOC4R3 = 3;
    sbit  IOC4R3_bit at RPINR22_23.B3;
    const register unsigned short int IOC5R0 = 4;
    sbit  IOC5R0_bit at RPINR22_23.B4;
    const register unsigned short int IOC5R1 = 5;
    sbit  IOC5R1_bit at RPINR22_23.B5;
    const register unsigned short int IOC5R2 = 6;
    sbit  IOC5R2_bit at RPINR22_23.B6;
    const register unsigned short int IOC5R3 = 7;
    sbit  IOC5R3_bit at RPINR22_23.B7;

    // RPINR24_25 bits
    const register unsigned short int IOC6R0 = 0;
    sbit  IOC6R0_bit at RPINR24_25.B0;
    const register unsigned short int IOC6R1 = 1;
    sbit  IOC6R1_bit at RPINR24_25.B1;
    const register unsigned short int IOC6R2 = 2;
    sbit  IOC6R2_bit at RPINR24_25.B2;
    const register unsigned short int IOC6R3 = 3;
    sbit  IOC6R3_bit at RPINR24_25.B3;
    const register unsigned short int IOC7R0 = 4;
    sbit  IOC7R0_bit at RPINR24_25.B4;
    const register unsigned short int IOC7R1 = 5;
    sbit  IOC7R1_bit at RPINR24_25.B5;
    const register unsigned short int IOC7R2 = 6;
    sbit  IOC7R2_bit at RPINR24_25.B6;
    const register unsigned short int IOC7R3 = 7;
    sbit  IOC7R3_bit at RPINR24_25.B7;

    // RPINR26_27 bits
    const register unsigned short int INT1R0 = 0;
    sbit  INT1R0_bit at RPINR26_27.B0;
    const register unsigned short int INT1R1 = 1;
    sbit  INT1R1_bit at RPINR26_27.B1;
    const register unsigned short int INT1R2 = 2;
    sbit  INT1R2_bit at RPINR26_27.B2;
    const register unsigned short int INT1R3 = 3;
    sbit  INT1R3_bit at RPINR26_27.B3;
    const register unsigned short int INT2R0 = 4;
    sbit  INT2R0_bit at RPINR26_27.B4;
    const register unsigned short int INT2R1 = 5;
    sbit  INT2R1_bit at RPINR26_27.B5;
    const register unsigned short int INT2R2 = 6;
    sbit  INT2R2_bit at RPINR26_27.B6;
    const register unsigned short int INT2R3 = 7;
    sbit  INT2R3_bit at RPINR26_27.B7;

    // RPINR28_29 bits
    const register unsigned short int INT3R0 = 0;
    sbit  INT3R0_bit at RPINR28_29.B0;
    const register unsigned short int INT3R1 = 1;
    sbit  INT3R1_bit at RPINR28_29.B1;
    const register unsigned short int INT3R2 = 2;
    sbit  INT3R2_bit at RPINR28_29.B2;
    const register unsigned short int INT3R3 = 3;
    sbit  INT3R3_bit at RPINR28_29.B3;
    const register unsigned short int MDMINR0 = 4;
    sbit  MDMINR0_bit at RPINR28_29.B4;
    const register unsigned short int MDMINR1 = 5;
    sbit  MDMINR1_bit at RPINR28_29.B5;
    const register unsigned short int MDMINR2 = 6;
    sbit  MDMINR2_bit at RPINR28_29.B6;
    const register unsigned short int MDMINR3 = 7;
    sbit  MDMINR3_bit at RPINR28_29.B7;

    // RPINR30_31 bits
    const register unsigned short int MDCIN1R0 = 0;
    sbit  MDCIN1R0_bit at RPINR30_31.B0;
    const register unsigned short int MDCIN1R1 = 1;
    sbit  MDCIN1R1_bit at RPINR30_31.B1;
    const register unsigned short int MDCIN1R2 = 2;
    sbit  MDCIN1R2_bit at RPINR30_31.B2;
    const register unsigned short int MDCIN1R3 = 3;
    sbit  MDCIN1R3_bit at RPINR30_31.B3;
    const register unsigned short int MDCIN2R0 = 4;
    sbit  MDCIN2R0_bit at RPINR30_31.B4;
    const register unsigned short int MDCIN2R1 = 5;
    sbit  MDCIN2R1_bit at RPINR30_31.B5;
    const register unsigned short int MDCIN2R2 = 6;
    sbit  MDCIN2R2_bit at RPINR30_31.B6;
    const register unsigned short int MDCIN2R3 = 7;
    sbit  MDCIN2R3_bit at RPINR30_31.B7;

    // RPINR32_33 bits
    const register unsigned short int CCP4R0 = 0;
    sbit  CCP4R0_bit at RPINR32_33.B0;
    const register unsigned short int CCP4R1 = 1;
    sbit  CCP4R1_bit at RPINR32_33.B1;
    const register unsigned short int CCP4R2 = 2;
    sbit  CCP4R2_bit at RPINR32_33.B2;
    const register unsigned short int CCP4R3 = 3;
    sbit  CCP4R3_bit at RPINR32_33.B3;
    const register unsigned short int CCP5R0 = 4;
    sbit  CCP5R0_bit at RPINR32_33.B4;
    const register unsigned short int CCP5R1 = 5;
    sbit  CCP5R1_bit at RPINR32_33.B5;
    const register unsigned short int CCP5R2 = 6;
    sbit  CCP5R2_bit at RPINR32_33.B6;
    const register unsigned short int CCP5R3 = 7;
    sbit  CCP5R3_bit at RPINR32_33.B7;

    // RPINR34_35 bits
    const register unsigned short int CCP6R0 = 0;
    sbit  CCP6R0_bit at RPINR34_35.B0;
    const register unsigned short int CCP6R1 = 1;
    sbit  CCP6R1_bit at RPINR34_35.B1;
    const register unsigned short int CCP6R2 = 2;
    sbit  CCP6R2_bit at RPINR34_35.B2;
    const register unsigned short int CCP6R3 = 3;
    sbit  CCP6R3_bit at RPINR34_35.B3;
    const register unsigned short int CCP7R0 = 4;
    sbit  CCP7R0_bit at RPINR34_35.B4;
    const register unsigned short int CCP7R1 = 5;
    sbit  CCP7R1_bit at RPINR34_35.B5;
    const register unsigned short int CCP7R2 = 6;
    sbit  CCP7R2_bit at RPINR34_35.B6;
    const register unsigned short int CCP7R3 = 7;
    sbit  CCP7R3_bit at RPINR34_35.B7;

    // RPINR36_37 bits
    const register unsigned short int CCP8R0 = 0;
    sbit  CCP8R0_bit at RPINR36_37.B0;
    const register unsigned short int CCP8R1 = 1;
    sbit  CCP8R1_bit at RPINR36_37.B1;
    const register unsigned short int CCP8R2 = 2;
    sbit  CCP8R2_bit at RPINR36_37.B2;
    const register unsigned short int CCP8R3 = 3;
    sbit  CCP8R3_bit at RPINR36_37.B3;
    const register unsigned short int CCP9R0 = 4;
    sbit  CCP9R0_bit at RPINR36_37.B4;
    const register unsigned short int CCP9R1 = 5;
    sbit  CCP9R1_bit at RPINR36_37.B5;
    const register unsigned short int CCP9R2 = 6;
    sbit  CCP9R2_bit at RPINR36_37.B6;
    const register unsigned short int CCP9R3 = 7;
    sbit  CCP9R3_bit at RPINR36_37.B7;

    // RPINR38_39 bits
    const register unsigned short int CCP10R0 = 0;
    sbit  CCP10R0_bit at RPINR38_39.B0;
    const register unsigned short int CCP10R1 = 1;
    sbit  CCP10R1_bit at RPINR38_39.B1;
    const register unsigned short int CCP10R2 = 2;
    sbit  CCP10R2_bit at RPINR38_39.B2;
    const register unsigned short int CCP10R3 = 3;
    sbit  CCP10R3_bit at RPINR38_39.B3;
    const register unsigned short int T0CKIR0 = 4;
    sbit  T0CKIR0_bit at RPINR38_39.B4;
    const register unsigned short int T0CKIR1 = 5;
    sbit  T0CKIR1_bit at RPINR38_39.B5;
    const register unsigned short int T0CKIR2 = 6;
    sbit  T0CKIR2_bit at RPINR38_39.B6;
    const register unsigned short int T0CKIR3 = 7;
    sbit  T0CKIR3_bit at RPINR38_39.B7;

    // RPINR40_41 bits
    const register unsigned short int T1GR0 = 0;
    sbit  T1GR0_bit at RPINR40_41.B0;
    const register unsigned short int T1GR1 = 1;
    sbit  T1GR1_bit at RPINR40_41.B1;
    const register unsigned short int T1GR2 = 2;
    sbit  T1GR2_bit at RPINR40_41.B2;
    const register unsigned short int T1GR3 = 3;
    sbit  T1GR3_bit at RPINR40_41.B3;
    const register unsigned short int T1CKIR0 = 4;
    sbit  T1CKIR0_bit at RPINR40_41.B4;
    const register unsigned short int T1CKIR1 = 5;
    sbit  T1CKIR1_bit at RPINR40_41.B5;
    const register unsigned short int T1CKIR2 = 6;
    sbit  T1CKIR2_bit at RPINR40_41.B6;
    const register unsigned short int T1CKIR3 = 7;
    sbit  T1CKIR3_bit at RPINR40_41.B7;

    // RPINR42_43 bits
    const register unsigned short int T3GR0 = 0;
    sbit  T3GR0_bit at RPINR42_43.B0;
    const register unsigned short int T3GR1 = 1;
    sbit  T3GR1_bit at RPINR42_43.B1;
    const register unsigned short int T3GR2 = 2;
    sbit  T3GR2_bit at RPINR42_43.B2;
    const register unsigned short int T3GR3 = 3;
    sbit  T3GR3_bit at RPINR42_43.B3;
    const register unsigned short int T3CKIR0 = 4;
    sbit  T3CKIR0_bit at RPINR42_43.B4;
    const register unsigned short int T3CKIR1 = 5;
    sbit  T3CKIR1_bit at RPINR42_43.B5;
    const register unsigned short int T3CKIR2 = 6;
    sbit  T3CKIR2_bit at RPINR42_43.B6;
    const register unsigned short int T3CKIR3 = 7;
    sbit  T3CKIR3_bit at RPINR42_43.B7;

    // RPINR44_45 bits
    const register unsigned short int T5GR0 = 0;
    sbit  T5GR0_bit at RPINR44_45.B0;
    const register unsigned short int T5GR1 = 1;
    sbit  T5GR1_bit at RPINR44_45.B1;
    const register unsigned short int T5GR2 = 2;
    sbit  T5GR2_bit at RPINR44_45.B2;
    const register unsigned short int T5GR3 = 3;
    sbit  T5GR3_bit at RPINR44_45.B3;
    const register unsigned short int T5CKIR0 = 4;
    sbit  T5CKIR0_bit at RPINR44_45.B4;
    const register unsigned short int T5CKIR1 = 5;
    sbit  T5CKIR1_bit at RPINR44_45.B5;
    const register unsigned short int T5CKIR2 = 6;
    sbit  T5CKIR2_bit at RPINR44_45.B6;
    const register unsigned short int T5CKIR3 = 7;
    sbit  T5CKIR3_bit at RPINR44_45.B7;

    // RPINR46_47 bits
    const register unsigned short int PBIO0R0 = 0;
    sbit  PBIO0R0_bit at RPINR46_47.B0;
    const register unsigned short int PBIO0R1 = 1;
    sbit  PBIO0R1_bit at RPINR46_47.B1;
    const register unsigned short int PBIO0R2 = 2;
    sbit  PBIO0R2_bit at RPINR46_47.B2;
    const register unsigned short int PBIO0R3 = 3;
    sbit  PBIO0R3_bit at RPINR46_47.B3;
    const register unsigned short int PBIO1R0 = 4;
    sbit  PBIO1R0_bit at RPINR46_47.B4;
    const register unsigned short int PBIO1R1 = 5;
    sbit  PBIO1R1_bit at RPINR46_47.B5;
    const register unsigned short int PBIO1R2 = 6;
    sbit  PBIO1R2_bit at RPINR46_47.B6;
    const register unsigned short int PBIO1R3 = 7;
    sbit  PBIO1R3_bit at RPINR46_47.B7;

    // RPINR48_49 bits
    const register unsigned short int PBIO2R0 = 0;
    sbit  PBIO2R0_bit at RPINR48_49.B0;
    const register unsigned short int PBIO2R1 = 1;
    sbit  PBIO2R1_bit at RPINR48_49.B1;
    const register unsigned short int PBIO2R2 = 2;
    sbit  PBIO2R2_bit at RPINR48_49.B2;
    const register unsigned short int PBIO2R3 = 3;
    sbit  PBIO2R3_bit at RPINR48_49.B3;
    const register unsigned short int PBIO3R0 = 4;
    sbit  PBIO3R0_bit at RPINR48_49.B4;
    const register unsigned short int PBIO3R1 = 5;
    sbit  PBIO3R1_bit at RPINR48_49.B5;
    const register unsigned short int PBIO3R2 = 6;
    sbit  PBIO3R2_bit at RPINR48_49.B6;
    const register unsigned short int PBIO3R3 = 7;
    sbit  PBIO3R3_bit at RPINR48_49.B7;

    // RPINR50_51 bits
    const register unsigned short int PBIO4R0 = 0;
    sbit  PBIO4R0_bit at RPINR50_51.B0;
    const register unsigned short int PBIO4R1 = 1;
    sbit  PBIO4R1_bit at RPINR50_51.B1;
    const register unsigned short int PBIO4R2 = 2;
    sbit  PBIO4R2_bit at RPINR50_51.B2;
    const register unsigned short int PBIO4R3 = 3;
    sbit  PBIO4R3_bit at RPINR50_51.B3;
    const register unsigned short int PBIO5R0 = 4;
    sbit  PBIO5R0_bit at RPINR50_51.B4;
    const register unsigned short int PBIO5R1 = 5;
    sbit  PBIO5R1_bit at RPINR50_51.B5;
    const register unsigned short int PBIO5R2 = 6;
    sbit  PBIO5R2_bit at RPINR50_51.B6;
    const register unsigned short int PBIO5R3 = 7;
    sbit  PBIO5R3_bit at RPINR50_51.B7;

    // RPINR52_53 bits
    const register unsigned short int PBIO6R0 = 0;
    sbit  PBIO6R0_bit at RPINR52_53.B0;
    const register unsigned short int PBIO6R1 = 1;
    sbit  PBIO6R1_bit at RPINR52_53.B1;
    const register unsigned short int PBIO6R2 = 2;
    sbit  PBIO6R2_bit at RPINR52_53.B2;
    const register unsigned short int PBIO6R3 = 3;
    sbit  PBIO6R3_bit at RPINR52_53.B3;
    const register unsigned short int PBIO7R0 = 4;
    sbit  PBIO7R0_bit at RPINR52_53.B4;
    const register unsigned short int PBIO7R1 = 5;
    sbit  PBIO7R1_bit at RPINR52_53.B5;
    const register unsigned short int PBIO7R2 = 6;
    sbit  PBIO7R2_bit at RPINR52_53.B6;
    const register unsigned short int PBIO7R3 = 7;
    sbit  PBIO7R3_bit at RPINR52_53.B7;

    // ANCON3 bits
    const register unsigned short int ANSEL16 = 0;
    sbit  ANSEL16_bit at ANCON3.B0;
    const register unsigned short int ANSEL17 = 1;
    sbit  ANSEL17_bit at ANCON3.B1;
    const register unsigned short int ANSEL18 = 2;
    sbit  ANSEL18_bit at ANCON3.B2;
    const register unsigned short int ANSEL19 = 3;
    sbit  ANSEL19_bit at ANCON3.B3;
    const register unsigned short int ANSEL20 = 4;
    sbit  ANSEL20_bit at ANCON3.B4;
    const register unsigned short int ANSEL21 = 5;
    sbit  ANSEL21_bit at ANCON3.B5;
    const register unsigned short int ANSEL22 = 6;
    sbit  ANSEL22_bit at ANCON3.B6;
    const register unsigned short int ANSEL23 = 7;
    sbit  ANSEL23_bit at ANCON3.B7;

    // ANCON2 bits
    const register unsigned short int ANSEL8 = 0;
    sbit  ANSEL8_bit at ANCON2.B0;
    const register unsigned short int ANSEL9 = 1;
    sbit  ANSEL9_bit at ANCON2.B1;
    const register unsigned short int ANSEL10 = 2;
    sbit  ANSEL10_bit at ANCON2.B2;
    const register unsigned short int ANSEL11 = 3;
    sbit  ANSEL11_bit at ANCON2.B3;
    const register unsigned short int ANSEL12 = 4;
    sbit  ANSEL12_bit at ANCON2.B4;
    const register unsigned short int ANSEL13 = 5;
    sbit  ANSEL13_bit at ANCON2.B5;
    const register unsigned short int ANSEL14 = 6;
    sbit  ANSEL14_bit at ANCON2.B6;
    const register unsigned short int ANSEL15 = 7;
    sbit  ANSEL15_bit at ANCON2.B7;

    // ANCON1 bits
    const register unsigned short int ANSEL0 = 0;
    sbit  ANSEL0_bit at ANCON1.B0;
    const register unsigned short int ANSEL1 = 1;
    sbit  ANSEL1_bit at ANCON1.B1;
    const register unsigned short int ANSEL2 = 2;
    sbit  ANSEL2_bit at ANCON1.B2;
    const register unsigned short int ANSEL3 = 3;
    sbit  ANSEL3_bit at ANCON1.B3;
    const register unsigned short int ANSEL4 = 4;
    sbit  ANSEL4_bit at ANCON1.B4;
    const register unsigned short int ANSEL5 = 5;
    sbit  ANSEL5_bit at ANCON1.B5;
    const register unsigned short int ANSEL6 = 6;
    sbit  ANSEL6_bit at ANCON1.B6;
    const register unsigned short int ANSEL7 = 7;
    sbit  ANSEL7_bit at ANCON1.B7;

    // ADCTMUEN0L bits
    const register unsigned short int CTMUEN0 = 0;
    sbit  CTMUEN0_bit at ADCTMUEN0L.B0;
    const register unsigned short int CTMUEN1 = 1;
    sbit  CTMUEN1_bit at ADCTMUEN0L.B1;
    const register unsigned short int CTMUEN2 = 2;
    sbit  CTMUEN2_bit at ADCTMUEN0L.B2;
    const register unsigned short int CTMUEN3 = 3;
    sbit  CTMUEN3_bit at ADCTMUEN0L.B3;
    const register unsigned short int CTMUEN4 = 4;
    sbit  CTMUEN4_bit at ADCTMUEN0L.B4;
    const register unsigned short int CTMUEN5 = 5;
    sbit  CTMUEN5_bit at ADCTMUEN0L.B5;
    const register unsigned short int CTMUEN6 = 6;
    sbit  CTMUEN6_bit at ADCTMUEN0L.B6;
    const register unsigned short int CTMUEN7 = 7;
    sbit  CTMUEN7_bit at ADCTMUEN0L.B7;

    // ADCTMUEN0H bits
    const register unsigned short int CTMUEN8 = 0;
    sbit  CTMUEN8_bit at ADCTMUEN0H.B0;
    const register unsigned short int CTMUEN9 = 1;
    sbit  CTMUEN9_bit at ADCTMUEN0H.B1;
    const register unsigned short int CTMUEN10 = 2;
    sbit  CTMUEN10_bit at ADCTMUEN0H.B2;
    const register unsigned short int CTMUEN11 = 3;
    sbit  CTMUEN11_bit at ADCTMUEN0H.B3;
    const register unsigned short int CTMUEN12 = 4;
    sbit  CTMUEN12_bit at ADCTMUEN0H.B4;
    const register unsigned short int CTMUEN13 = 5;
    sbit  CTMUEN13_bit at ADCTMUEN0H.B5;
    const register unsigned short int CTMUEN14 = 6;
    sbit  CTMUEN14_bit at ADCTMUEN0H.B6;
    const register unsigned short int CTMUEN15 = 7;
    sbit  CTMUEN15_bit at ADCTMUEN0H.B7;

    // ADCTMUEN1L bits
    const register unsigned short int CTUMEN16 = 0;
    sbit  CTUMEN16_bit at ADCTMUEN1L.B0;
    const register unsigned short int CTUMEN17 = 1;
    sbit  CTUMEN17_bit at ADCTMUEN1L.B1;
    const register unsigned short int CTUMEN18 = 2;
    sbit  CTUMEN18_bit at ADCTMUEN1L.B2;
    const register unsigned short int CTUMEN19 = 3;
    sbit  CTUMEN19_bit at ADCTMUEN1L.B3;
    const register unsigned short int CTMUEN20 = 4;
    sbit  CTMUEN20_bit at ADCTMUEN1L.B4;
    const register unsigned short int CTMUEN21 = 5;
    sbit  CTMUEN21_bit at ADCTMUEN1L.B5;
    const register unsigned short int CTMUEN22 = 6;
    sbit  CTMUEN22_bit at ADCTMUEN1L.B6;
    const register unsigned short int CTMUEN23 = 7;
    sbit  CTMUEN23_bit at ADCTMUEN1L.B7;

    // ADCTMUEN1H bits
    const register unsigned short int CTUMEN24 = 0;
    sbit  CTUMEN24_bit at ADCTMUEN1H.B0;
    const register unsigned short int CTUMEN25 = 1;
    sbit  CTUMEN25_bit at ADCTMUEN1H.B1;
    const register unsigned short int CTUMEN26 = 2;
    sbit  CTUMEN26_bit at ADCTMUEN1H.B2;
    const register unsigned short int CTUMEN27 = 3;
    sbit  CTUMEN27_bit at ADCTMUEN1H.B3;
    const register unsigned short int CTUMEN28 = 4;
    sbit  CTUMEN28_bit at ADCTMUEN1H.B4;
    const register unsigned short int CTUMEN29 = 5;
    sbit  CTUMEN29_bit at ADCTMUEN1H.B5;
    const register unsigned short int CTMUEN30 = 6;
    sbit  CTMUEN30_bit at ADCTMUEN1H.B6;

    // ADCHIT0L bits
    const register unsigned short int CHH0 = 0;
    sbit  CHH0_bit at ADCHIT0L.B0;
    const register unsigned short int CHH1 = 1;
    sbit  CHH1_bit at ADCHIT0L.B1;
    const register unsigned short int CHH2 = 2;
    sbit  CHH2_bit at ADCHIT0L.B2;
    const register unsigned short int CHH3 = 3;
    sbit  CHH3_bit at ADCHIT0L.B3;
    const register unsigned short int CHH4 = 4;
    sbit  CHH4_bit at ADCHIT0L.B4;
    const register unsigned short int CHH5 = 5;
    sbit  CHH5_bit at ADCHIT0L.B5;
    const register unsigned short int CHH6 = 6;
    sbit  CHH6_bit at ADCHIT0L.B6;
    const register unsigned short int CHH7 = 7;
    sbit  CHH7_bit at ADCHIT0L.B7;

    // ADCHIT0H bits
    const register unsigned short int CHH8 = 0;
    sbit  CHH8_bit at ADCHIT0H.B0;
    const register unsigned short int CHH9 = 1;
    sbit  CHH9_bit at ADCHIT0H.B1;
    const register unsigned short int CHH10 = 2;
    sbit  CHH10_bit at ADCHIT0H.B2;
    const register unsigned short int CHH11 = 3;
    sbit  CHH11_bit at ADCHIT0H.B3;
    const register unsigned short int CHH12 = 4;
    sbit  CHH12_bit at ADCHIT0H.B4;
    const register unsigned short int CHH13 = 5;
    sbit  CHH13_bit at ADCHIT0H.B5;
    const register unsigned short int CHH14 = 6;
    sbit  CHH14_bit at ADCHIT0H.B6;
    const register unsigned short int CHH15 = 7;
    sbit  CHH15_bit at ADCHIT0H.B7;

    // ADCHIT1L bits
    const register unsigned short int CHH16 = 0;
    sbit  CHH16_bit at ADCHIT1L.B0;
    const register unsigned short int CHH17 = 1;
    sbit  CHH17_bit at ADCHIT1L.B1;
    const register unsigned short int CHH18 = 2;
    sbit  CHH18_bit at ADCHIT1L.B2;
    const register unsigned short int CHH19 = 3;
    sbit  CHH19_bit at ADCHIT1L.B3;
    const register unsigned short int CHH20 = 4;
    sbit  CHH20_bit at ADCHIT1L.B4;
    const register unsigned short int CHH21 = 5;
    sbit  CHH21_bit at ADCHIT1L.B5;
    const register unsigned short int CHH22 = 6;
    sbit  CHH22_bit at ADCHIT1L.B6;
    const register unsigned short int CHH23 = 7;
    sbit  CHH23_bit at ADCHIT1L.B7;

    // ADCHIT1H bits
    const register unsigned short int CHH24 = 0;
    sbit  CHH24_bit at ADCHIT1H.B0;
    const register unsigned short int CHH25 = 1;
    sbit  CHH25_bit at ADCHIT1H.B1;
    const register unsigned short int CHH26 = 2;
    sbit  CHH26_bit at ADCHIT1H.B2;
    const register unsigned short int CHH27 = 3;
    sbit  CHH27_bit at ADCHIT1H.B3;
    const register unsigned short int CHH28 = 4;
    sbit  CHH28_bit at ADCHIT1H.B4;
    const register unsigned short int CHH29 = 5;
    sbit  CHH29_bit at ADCHIT1H.B5;
    const register unsigned short int CHH30 = 6;
    sbit  CHH30_bit at ADCHIT1H.B6;

    // ADCSS0L bits
    const register unsigned short int CSS0 = 0;
    sbit  CSS0_bit at ADCSS0L.B0;
    const register unsigned short int CSS1 = 1;
    sbit  CSS1_bit at ADCSS0L.B1;
    const register unsigned short int CSS2 = 2;
    sbit  CSS2_bit at ADCSS0L.B2;
    const register unsigned short int CSS3 = 3;
    sbit  CSS3_bit at ADCSS0L.B3;
    const register unsigned short int CSS4 = 4;
    sbit  CSS4_bit at ADCSS0L.B4;
    const register unsigned short int CSS5 = 5;
    sbit  CSS5_bit at ADCSS0L.B5;
    const register unsigned short int CSS6 = 6;
    sbit  CSS6_bit at ADCSS0L.B6;
    const register unsigned short int CSS7 = 7;
    sbit  CSS7_bit at ADCSS0L.B7;

    // ADCSS0H bits
    const register unsigned short int CSS8 = 0;
    sbit  CSS8_bit at ADCSS0H.B0;
    const register unsigned short int CSS9 = 1;
    sbit  CSS9_bit at ADCSS0H.B1;
    const register unsigned short int CSS10 = 2;
    sbit  CSS10_bit at ADCSS0H.B2;
    const register unsigned short int CSS11 = 3;
    sbit  CSS11_bit at ADCSS0H.B3;
    const register unsigned short int CSS12 = 4;
    sbit  CSS12_bit at ADCSS0H.B4;
    const register unsigned short int CSS13 = 5;
    sbit  CSS13_bit at ADCSS0H.B5;
    const register unsigned short int CSS14 = 6;
    sbit  CSS14_bit at ADCSS0H.B6;
    const register unsigned short int CSS15 = 7;
    sbit  CSS15_bit at ADCSS0H.B7;

    // ADCSS1L bits
    const register unsigned short int CSS16 = 0;
    sbit  CSS16_bit at ADCSS1L.B0;
    const register unsigned short int CSS17 = 1;
    sbit  CSS17_bit at ADCSS1L.B1;
    const register unsigned short int CSS18 = 2;
    sbit  CSS18_bit at ADCSS1L.B2;
    const register unsigned short int CSS19 = 3;
    sbit  CSS19_bit at ADCSS1L.B3;
    const register unsigned short int CSS20 = 4;
    sbit  CSS20_bit at ADCSS1L.B4;
    const register unsigned short int CSS21 = 5;
    sbit  CSS21_bit at ADCSS1L.B5;
    const register unsigned short int CSS22 = 6;
    sbit  CSS22_bit at ADCSS1L.B6;
    const register unsigned short int CSS23 = 7;
    sbit  CSS23_bit at ADCSS1L.B7;

    // ADCSS1H bits
    const register unsigned short int CSS24 = 0;
    sbit  CSS24_bit at ADCSS1H.B0;
    const register unsigned short int CSS25 = 1;
    sbit  CSS25_bit at ADCSS1H.B1;
    const register unsigned short int CSS26 = 2;
    sbit  CSS26_bit at ADCSS1H.B2;
    const register unsigned short int CSS27 = 3;
    sbit  CSS27_bit at ADCSS1H.B3;
    const register unsigned short int CSS28 = 4;
    sbit  CSS28_bit at ADCSS1H.B4;
    const register unsigned short int CSS29 = 5;
    sbit  CSS29_bit at ADCSS1H.B5;
    const register unsigned short int CSS30 = 6;
    sbit  CSS30_bit at ADCSS1H.B6;

    // ADCHS0L bits
    const register unsigned short int CH0SA0 = 0;
    sbit  CH0SA0_bit at ADCHS0L.B0;
    const register unsigned short int CH0SA1 = 1;
    sbit  CH0SA1_bit at ADCHS0L.B1;
    const register unsigned short int CH0SA2 = 2;
    sbit  CH0SA2_bit at ADCHS0L.B2;
    const register unsigned short int CH0SA3 = 3;
    sbit  CH0SA3_bit at ADCHS0L.B3;
    const register unsigned short int CH0SA4 = 4;
    sbit  CH0SA4_bit at ADCHS0L.B4;
    const register unsigned short int CH0NA0 = 5;
    sbit  CH0NA0_bit at ADCHS0L.B5;
    const register unsigned short int CH0NA1 = 6;
    sbit  CH0NA1_bit at ADCHS0L.B6;
    const register unsigned short int CH0NA2 = 7;
    sbit  CH0NA2_bit at ADCHS0L.B7;

    // ADCHS0H bits
    const register unsigned short int CH0SB0 = 0;
    sbit  CH0SB0_bit at ADCHS0H.B0;
    const register unsigned short int CH0SB1 = 1;
    sbit  CH0SB1_bit at ADCHS0H.B1;
    const register unsigned short int CH0SB2 = 2;
    sbit  CH0SB2_bit at ADCHS0H.B2;
    const register unsigned short int CH0SB3 = 3;
    sbit  CH0SB3_bit at ADCHS0H.B3;
    const register unsigned short int CH0SB4 = 4;
    sbit  CH0SB4_bit at ADCHS0H.B4;
    const register unsigned short int CH0NB0 = 5;
    sbit  CH0NB0_bit at ADCHS0H.B5;
    const register unsigned short int CH0NB1 = 6;
    sbit  CH0NB1_bit at ADCHS0H.B6;
    const register unsigned short int CH0NB2 = 7;
    sbit  CH0NB2_bit at ADCHS0H.B7;

    // ADCON5L bits
    const register unsigned short int CM0 = 0;
    sbit  CM0_bit at ADCON5L.B0;
    const register unsigned short int CM1 = 1;
    sbit  CM1_bit at ADCON5L.B1;
    const register unsigned short int WM0_ADCON5L = 2;
    sbit  WM0_ADCON5L_bit at ADCON5L.B2;
    const register unsigned short int WM1_ADCON5L = 3;
    sbit  WM1_ADCON5L_bit at ADCON5L.B3;

    // ADCON5H bits
    const register unsigned short int CTMUREQ = 5;
    sbit  CTMUREQ_bit at ADCON5H.B5;
    const register unsigned short int LPENA = 6;
    sbit  LPENA_bit at ADCON5H.B6;
    const register unsigned short int ASENA = 7;
    sbit  ASENA_bit at ADCON5H.B7;
    const register unsigned short int ASINTMD0 = 0;
    sbit  ASINTMD0_bit at ADCON5H.B0;
    const register unsigned short int ASINTMD1 = 1;
    sbit  ASINTMD1_bit at ADCON5H.B1;

    // ADCON3L bits
    const register unsigned short int ADCS0 = 0;
    sbit  ADCS0_bit at ADCON3L.B0;
    const register unsigned short int ADCS1 = 1;
    sbit  ADCS1_bit at ADCON3L.B1;
    const register unsigned short int ADCS2 = 2;
    sbit  ADCS2_bit at ADCON3L.B2;
    const register unsigned short int ADCS3 = 3;
    sbit  ADCS3_bit at ADCON3L.B3;
    const register unsigned short int ADCS4 = 4;
    sbit  ADCS4_bit at ADCON3L.B4;
    const register unsigned short int ADCS5 = 5;
    sbit  ADCS5_bit at ADCON3L.B5;
    const register unsigned short int ADCS6 = 6;
    sbit  ADCS6_bit at ADCON3L.B6;
    const register unsigned short int ADCS7 = 7;
    sbit  ADCS7_bit at ADCON3L.B7;

    // ADCON3H bits
    const register unsigned short int PUMPEN = 5;
    sbit  PUMPEN_bit at ADCON3H.B5;
    const register unsigned short int EXTSAM = 6;
    sbit  EXTSAM_bit at ADCON3H.B6;
    const register unsigned short int ADRC = 7;
    sbit  ADRC_bit at ADCON3H.B7;
    const register unsigned short int SAMC0 = 0;
    sbit  SAMC0_bit at ADCON3H.B0;
    const register unsigned short int SAMC1 = 1;
    sbit  SAMC1_bit at ADCON3H.B1;
    const register unsigned short int SAMC2 = 2;
    sbit  SAMC2_bit at ADCON3H.B2;
    const register unsigned short int SAMC3 = 3;
    sbit  SAMC3_bit at ADCON3H.B3;
    const register unsigned short int SAMC4 = 4;
    sbit  SAMC4_bit at ADCON3H.B4;

    // ADCON2L bits
    const register unsigned short int ALTS = 0;
    sbit  ALTS_bit at ADCON2L.B0;
    const register unsigned short int BUFM = 1;
    sbit  BUFM_bit at ADCON2L.B1;
    const register unsigned short int BUFS = 7;
    sbit  BUFS_bit at ADCON2L.B7;
    const register unsigned short int SMPI0 = 2;
    sbit  SMPI0_bit at ADCON2L.B2;
    const register unsigned short int SMPI1 = 3;
    sbit  SMPI1_bit at ADCON2L.B3;
    const register unsigned short int SMPI2 = 4;
    sbit  SMPI2_bit at ADCON2L.B4;
    const register unsigned short int SMPI3 = 5;
    sbit  SMPI3_bit at ADCON2L.B5;
    const register unsigned short int SMPI4 = 6;
    sbit  SMPI4_bit at ADCON2L.B6;

    // ADCON2H bits
    const register unsigned short int CSCNA = 2;
    sbit  CSCNA_bit at ADCON2H.B2;
    const register unsigned short int BUFREGEN = 3;
    sbit  BUFREGEN_bit at ADCON2H.B3;
    const register unsigned short int OFFCAL = 4;
    sbit  OFFCAL_bit at ADCON2H.B4;
    const register unsigned short int NVCFG0 = 5;
    sbit  NVCFG0_bit at ADCON2H.B5;
    const register unsigned short int PVCFG0 = 6;
    sbit  PVCFG0_bit at ADCON2H.B6;
    const register unsigned short int PVCFG1 = 7;
    sbit  PVCFG1_bit at ADCON2H.B7;

    // LCDDATA0 bits
    const register unsigned short int S00C0 = 0;
    sbit  S00C0_bit at LCDDATA0.B0;
    const register unsigned short int S01C0 = 1;
    sbit  S01C0_bit at LCDDATA0.B1;
    const register unsigned short int S02C0 = 2;
    sbit  S02C0_bit at LCDDATA0.B2;
    const register unsigned short int S03C0 = 3;
    sbit  S03C0_bit at LCDDATA0.B3;
    const register unsigned short int S04C0 = 4;
    sbit  S04C0_bit at LCDDATA0.B4;
    const register unsigned short int S05C0 = 5;
    sbit  S05C0_bit at LCDDATA0.B5;
    const register unsigned short int S06C0 = 6;
    sbit  S06C0_bit at LCDDATA0.B6;
    const register unsigned short int S07C0 = 7;
    sbit  S07C0_bit at LCDDATA0.B7;

    // LCDDATA1 bits
    const register unsigned short int S08C0 = 0;
    sbit  S08C0_bit at LCDDATA1.B0;
    const register unsigned short int S09C0 = 1;
    sbit  S09C0_bit at LCDDATA1.B1;
    const register unsigned short int S10C0 = 2;
    sbit  S10C0_bit at LCDDATA1.B2;
    const register unsigned short int S11C0 = 3;
    sbit  S11C0_bit at LCDDATA1.B3;
    const register unsigned short int S12C0 = 4;
    sbit  S12C0_bit at LCDDATA1.B4;
    const register unsigned short int S13C0 = 5;
    sbit  S13C0_bit at LCDDATA1.B5;
    const register unsigned short int S14C0 = 6;
    sbit  S14C0_bit at LCDDATA1.B6;
    const register unsigned short int S15C0 = 7;
    sbit  S15C0_bit at LCDDATA1.B7;

    // LCDDATA2 bits
    const register unsigned short int S16C0 = 0;
    sbit  S16C0_bit at LCDDATA2.B0;
    const register unsigned short int S17C0 = 1;
    sbit  S17C0_bit at LCDDATA2.B1;
    const register unsigned short int S18C0 = 2;
    sbit  S18C0_bit at LCDDATA2.B2;
    const register unsigned short int S19C0 = 3;
    sbit  S19C0_bit at LCDDATA2.B3;
    const register unsigned short int S20C0 = 4;
    sbit  S20C0_bit at LCDDATA2.B4;
    const register unsigned short int S21C0 = 5;
    sbit  S21C0_bit at LCDDATA2.B5;
    const register unsigned short int S22C0 = 6;
    sbit  S22C0_bit at LCDDATA2.B6;
    const register unsigned short int S23C0 = 7;
    sbit  S23C0_bit at LCDDATA2.B7;

    // LCDDATA3 bits
    const register unsigned short int S24C0 = 0;
    sbit  S24C0_bit at LCDDATA3.B0;
    const register unsigned short int S25C0 = 1;
    sbit  S25C0_bit at LCDDATA3.B1;
    const register unsigned short int S26C0 = 2;
    sbit  S26C0_bit at LCDDATA3.B2;
    const register unsigned short int S27C0 = 3;
    sbit  S27C0_bit at LCDDATA3.B3;
    const register unsigned short int S28C0 = 4;
    sbit  S28C0_bit at LCDDATA3.B4;
    const register unsigned short int S29C0 = 5;
    sbit  S29C0_bit at LCDDATA3.B5;
    const register unsigned short int S30C0 = 6;
    sbit  S30C0_bit at LCDDATA3.B6;
    const register unsigned short int S31C0 = 7;
    sbit  S31C0_bit at LCDDATA3.B7;

    // LCDDATA4 bits
    const register unsigned short int S32C0 = 0;
    sbit  S32C0_bit at LCDDATA4.B0;
    const register unsigned short int S33C0 = 1;
    sbit  S33C0_bit at LCDDATA4.B1;
    const register unsigned short int S34C0 = 2;
    sbit  S34C0_bit at LCDDATA4.B2;
    const register unsigned short int S35C0 = 3;
    sbit  S35C0_bit at LCDDATA4.B3;
    const register unsigned short int S36C0 = 4;
    sbit  S36C0_bit at LCDDATA4.B4;
    const register unsigned short int S37C0 = 5;
    sbit  S37C0_bit at LCDDATA4.B5;
    const register unsigned short int S38C0 = 6;
    sbit  S38C0_bit at LCDDATA4.B6;
    const register unsigned short int S39C0 = 7;
    sbit  S39C0_bit at LCDDATA4.B7;

    // LCDDATA5 bits
    const register unsigned short int S40C0 = 0;
    sbit  S40C0_bit at LCDDATA5.B0;
    const register unsigned short int S41C0 = 1;
    sbit  S41C0_bit at LCDDATA5.B1;
    const register unsigned short int S42C0 = 2;
    sbit  S42C0_bit at LCDDATA5.B2;
    const register unsigned short int S43C0 = 3;
    sbit  S43C0_bit at LCDDATA5.B3;
    const register unsigned short int S44C0 = 4;
    sbit  S44C0_bit at LCDDATA5.B4;
    const register unsigned short int S45C0 = 5;
    sbit  S45C0_bit at LCDDATA5.B5;
    const register unsigned short int S46C0 = 6;
    sbit  S46C0_bit at LCDDATA5.B6;
    const register unsigned short int S47C0 = 7;
    sbit  S47C0_bit at LCDDATA5.B7;

    // LCDDATA6 bits
    const register unsigned short int S48C0 = 0;
    sbit  S48C0_bit at LCDDATA6.B0;
    const register unsigned short int S49C0 = 1;
    sbit  S49C0_bit at LCDDATA6.B1;
    const register unsigned short int S50C0 = 2;
    sbit  S50C0_bit at LCDDATA6.B2;
    const register unsigned short int S51C0 = 3;
    sbit  S51C0_bit at LCDDATA6.B3;
    const register unsigned short int S52C0 = 4;
    sbit  S52C0_bit at LCDDATA6.B4;
    const register unsigned short int S53C0 = 5;
    sbit  S53C0_bit at LCDDATA6.B5;
    const register unsigned short int S54C0 = 6;
    sbit  S54C0_bit at LCDDATA6.B6;
    const register unsigned short int S55C0 = 7;
    sbit  S55C0_bit at LCDDATA6.B7;

    // LCDDATA7 bits
    const register unsigned short int S56C0 = 0;
    sbit  S56C0_bit at LCDDATA7.B0;
    const register unsigned short int S57C0 = 1;
    sbit  S57C0_bit at LCDDATA7.B1;
    const register unsigned short int S58C0 = 2;
    sbit  S58C0_bit at LCDDATA7.B2;
    const register unsigned short int S59C0 = 3;
    sbit  S59C0_bit at LCDDATA7.B3;
    const register unsigned short int S60C0 = 4;
    sbit  S60C0_bit at LCDDATA7.B4;
    const register unsigned short int S61C0 = 5;
    sbit  S61C0_bit at LCDDATA7.B5;
    const register unsigned short int S62C0 = 6;
    sbit  S62C0_bit at LCDDATA7.B6;
    const register unsigned short int S63C0 = 7;
    sbit  S63C0_bit at LCDDATA7.B7;

    // LCDDATA8 bits
    const register unsigned short int S00C1 = 0;
    sbit  S00C1_bit at LCDDATA8.B0;
    const register unsigned short int S01C1 = 1;
    sbit  S01C1_bit at LCDDATA8.B1;
    const register unsigned short int S02C1 = 2;
    sbit  S02C1_bit at LCDDATA8.B2;
    const register unsigned short int S03C1 = 3;
    sbit  S03C1_bit at LCDDATA8.B3;
    const register unsigned short int S04C1 = 4;
    sbit  S04C1_bit at LCDDATA8.B4;
    const register unsigned short int S05C1 = 5;
    sbit  S05C1_bit at LCDDATA8.B5;
    const register unsigned short int S06C1 = 6;
    sbit  S06C1_bit at LCDDATA8.B6;
    const register unsigned short int S07C1 = 7;
    sbit  S07C1_bit at LCDDATA8.B7;

    // LCDDATA9 bits
    const register unsigned short int S08C1 = 0;
    sbit  S08C1_bit at LCDDATA9.B0;
    const register unsigned short int S09C1 = 1;
    sbit  S09C1_bit at LCDDATA9.B1;
    const register unsigned short int S10C1 = 2;
    sbit  S10C1_bit at LCDDATA9.B2;
    const register unsigned short int S11C1 = 3;
    sbit  S11C1_bit at LCDDATA9.B3;
    const register unsigned short int S12C1 = 4;
    sbit  S12C1_bit at LCDDATA9.B4;
    const register unsigned short int S13C1 = 5;
    sbit  S13C1_bit at LCDDATA9.B5;
    const register unsigned short int S14C1 = 6;
    sbit  S14C1_bit at LCDDATA9.B6;
    const register unsigned short int S15C1 = 7;
    sbit  S15C1_bit at LCDDATA9.B7;

    // LCDDATA10 bits
    const register unsigned short int S16C1 = 0;
    sbit  S16C1_bit at LCDDATA10.B0;
    const register unsigned short int S17C1 = 1;
    sbit  S17C1_bit at LCDDATA10.B1;
    const register unsigned short int S18C1 = 2;
    sbit  S18C1_bit at LCDDATA10.B2;
    const register unsigned short int S19C1 = 3;
    sbit  S19C1_bit at LCDDATA10.B3;
    const register unsigned short int S20C1 = 4;
    sbit  S20C1_bit at LCDDATA10.B4;
    const register unsigned short int S21C1 = 5;
    sbit  S21C1_bit at LCDDATA10.B5;
    const register unsigned short int S22C1 = 6;
    sbit  S22C1_bit at LCDDATA10.B6;
    const register unsigned short int S23C1 = 7;
    sbit  S23C1_bit at LCDDATA10.B7;

    // LCDDATA11 bits
    const register unsigned short int S24C1 = 0;
    sbit  S24C1_bit at LCDDATA11.B0;
    const register unsigned short int S25C1 = 1;
    sbit  S25C1_bit at LCDDATA11.B1;
    const register unsigned short int S26C1 = 2;
    sbit  S26C1_bit at LCDDATA11.B2;
    const register unsigned short int S27C1 = 3;
    sbit  S27C1_bit at LCDDATA11.B3;
    const register unsigned short int S28C1 = 4;
    sbit  S28C1_bit at LCDDATA11.B4;
    const register unsigned short int S29C1 = 5;
    sbit  S29C1_bit at LCDDATA11.B5;
    const register unsigned short int S30C1 = 6;
    sbit  S30C1_bit at LCDDATA11.B6;
    const register unsigned short int S31C1 = 7;
    sbit  S31C1_bit at LCDDATA11.B7;

    // LCDDATA12 bits
    const register unsigned short int S32C1 = 0;
    sbit  S32C1_bit at LCDDATA12.B0;
    const register unsigned short int S33C1 = 1;
    sbit  S33C1_bit at LCDDATA12.B1;
    const register unsigned short int S34C1 = 2;
    sbit  S34C1_bit at LCDDATA12.B2;
    const register unsigned short int S35C1 = 3;
    sbit  S35C1_bit at LCDDATA12.B3;
    const register unsigned short int S36C1 = 4;
    sbit  S36C1_bit at LCDDATA12.B4;
    const register unsigned short int S37C1 = 5;
    sbit  S37C1_bit at LCDDATA12.B5;
    const register unsigned short int S38C1 = 6;
    sbit  S38C1_bit at LCDDATA12.B6;
    const register unsigned short int S39C1 = 7;
    sbit  S39C1_bit at LCDDATA12.B7;

    // LCDDATA13 bits
    const register unsigned short int S40C1 = 0;
    sbit  S40C1_bit at LCDDATA13.B0;
    const register unsigned short int S41C1 = 1;
    sbit  S41C1_bit at LCDDATA13.B1;
    const register unsigned short int S42C1 = 2;
    sbit  S42C1_bit at LCDDATA13.B2;
    const register unsigned short int S43C1 = 3;
    sbit  S43C1_bit at LCDDATA13.B3;
    const register unsigned short int S44C1 = 4;
    sbit  S44C1_bit at LCDDATA13.B4;
    const register unsigned short int S45C1 = 5;
    sbit  S45C1_bit at LCDDATA13.B5;
    const register unsigned short int S46C1 = 6;
    sbit  S46C1_bit at LCDDATA13.B6;
    const register unsigned short int S47C1 = 7;
    sbit  S47C1_bit at LCDDATA13.B7;

    // LCDDATA14 bits
    const register unsigned short int S48C1 = 0;
    sbit  S48C1_bit at LCDDATA14.B0;
    const register unsigned short int S49C1 = 1;
    sbit  S49C1_bit at LCDDATA14.B1;
    const register unsigned short int S50C1 = 2;
    sbit  S50C1_bit at LCDDATA14.B2;
    const register unsigned short int S51C1 = 3;
    sbit  S51C1_bit at LCDDATA14.B3;
    const register unsigned short int S52C1 = 4;
    sbit  S52C1_bit at LCDDATA14.B4;
    const register unsigned short int S53C1 = 5;
    sbit  S53C1_bit at LCDDATA14.B5;
    const register unsigned short int S54C1 = 6;
    sbit  S54C1_bit at LCDDATA14.B6;
    const register unsigned short int S55C1 = 7;
    sbit  S55C1_bit at LCDDATA14.B7;

    // LCDDATA15 bits
    const register unsigned short int S56C1 = 0;
    sbit  S56C1_bit at LCDDATA15.B0;
    const register unsigned short int S57C1 = 1;
    sbit  S57C1_bit at LCDDATA15.B1;
    const register unsigned short int S58C1 = 2;
    sbit  S58C1_bit at LCDDATA15.B2;
    const register unsigned short int S59C1 = 3;
    sbit  S59C1_bit at LCDDATA15.B3;
    const register unsigned short int S60C1 = 4;
    sbit  S60C1_bit at LCDDATA15.B4;
    const register unsigned short int S61C1 = 5;
    sbit  S61C1_bit at LCDDATA15.B5;
    const register unsigned short int S62C1 = 6;
    sbit  S62C1_bit at LCDDATA15.B6;
    const register unsigned short int S63C1 = 7;
    sbit  S63C1_bit at LCDDATA15.B7;

    // LCDDATA16 bits
    const register unsigned short int S00C2 = 0;
    sbit  S00C2_bit at LCDDATA16.B0;
    const register unsigned short int S01C2 = 1;
    sbit  S01C2_bit at LCDDATA16.B1;
    const register unsigned short int S02C2 = 2;
    sbit  S02C2_bit at LCDDATA16.B2;
    const register unsigned short int S03C2 = 3;
    sbit  S03C2_bit at LCDDATA16.B3;
    const register unsigned short int S04C2 = 4;
    sbit  S04C2_bit at LCDDATA16.B4;
    const register unsigned short int S05C2 = 5;
    sbit  S05C2_bit at LCDDATA16.B5;
    const register unsigned short int S06C2 = 6;
    sbit  S06C2_bit at LCDDATA16.B6;
    const register unsigned short int S07C2 = 7;
    sbit  S07C2_bit at LCDDATA16.B7;

    // LCDDATA17 bits
    const register unsigned short int S08C2 = 0;
    sbit  S08C2_bit at LCDDATA17.B0;
    const register unsigned short int S09C2 = 1;
    sbit  S09C2_bit at LCDDATA17.B1;
    const register unsigned short int S10C2 = 2;
    sbit  S10C2_bit at LCDDATA17.B2;
    const register unsigned short int S11C2 = 3;
    sbit  S11C2_bit at LCDDATA17.B3;
    const register unsigned short int S12C2 = 4;
    sbit  S12C2_bit at LCDDATA17.B4;
    const register unsigned short int S13C2 = 5;
    sbit  S13C2_bit at LCDDATA17.B5;
    const register unsigned short int S14C2 = 6;
    sbit  S14C2_bit at LCDDATA17.B6;
    const register unsigned short int S15C2 = 7;
    sbit  S15C2_bit at LCDDATA17.B7;

    // LCDDATA18 bits
    const register unsigned short int S16C2 = 0;
    sbit  S16C2_bit at LCDDATA18.B0;
    const register unsigned short int S17C2 = 1;
    sbit  S17C2_bit at LCDDATA18.B1;
    const register unsigned short int S18C2 = 2;
    sbit  S18C2_bit at LCDDATA18.B2;
    const register unsigned short int S19C2 = 3;
    sbit  S19C2_bit at LCDDATA18.B3;
    const register unsigned short int S20C2 = 4;
    sbit  S20C2_bit at LCDDATA18.B4;
    const register unsigned short int S21C2 = 5;
    sbit  S21C2_bit at LCDDATA18.B5;
    const register unsigned short int S22C2 = 6;
    sbit  S22C2_bit at LCDDATA18.B6;
    const register unsigned short int S23C2 = 7;
    sbit  S23C2_bit at LCDDATA18.B7;

    // LCDDATA19 bits
    const register unsigned short int S24C2 = 0;
    sbit  S24C2_bit at LCDDATA19.B0;
    const register unsigned short int S25C2 = 1;
    sbit  S25C2_bit at LCDDATA19.B1;
    const register unsigned short int S26C2 = 2;
    sbit  S26C2_bit at LCDDATA19.B2;
    const register unsigned short int S27C2 = 3;
    sbit  S27C2_bit at LCDDATA19.B3;
    const register unsigned short int S28C2 = 4;
    sbit  S28C2_bit at LCDDATA19.B4;
    const register unsigned short int S29C2 = 5;
    sbit  S29C2_bit at LCDDATA19.B5;
    const register unsigned short int S30C2 = 6;
    sbit  S30C2_bit at LCDDATA19.B6;
    const register unsigned short int S31C2 = 7;
    sbit  S31C2_bit at LCDDATA19.B7;

    // LCDDATA20 bits
    const register unsigned short int S32C2 = 0;
    sbit  S32C2_bit at LCDDATA20.B0;
    const register unsigned short int S33C2 = 1;
    sbit  S33C2_bit at LCDDATA20.B1;
    const register unsigned short int S34C2 = 2;
    sbit  S34C2_bit at LCDDATA20.B2;
    const register unsigned short int S35C2 = 3;
    sbit  S35C2_bit at LCDDATA20.B3;
    const register unsigned short int S36C2 = 4;
    sbit  S36C2_bit at LCDDATA20.B4;
    const register unsigned short int S37C2 = 5;
    sbit  S37C2_bit at LCDDATA20.B5;
    const register unsigned short int S38C2 = 6;
    sbit  S38C2_bit at LCDDATA20.B6;
    const register unsigned short int S39C2 = 7;
    sbit  S39C2_bit at LCDDATA20.B7;

    // LCDDATA21 bits
    const register unsigned short int S40C2 = 0;
    sbit  S40C2_bit at LCDDATA21.B0;
    const register unsigned short int S41C2 = 1;
    sbit  S41C2_bit at LCDDATA21.B1;
    const register unsigned short int S42C2 = 2;
    sbit  S42C2_bit at LCDDATA21.B2;
    const register unsigned short int S43C2 = 3;
    sbit  S43C2_bit at LCDDATA21.B3;
    const register unsigned short int S44C2 = 4;
    sbit  S44C2_bit at LCDDATA21.B4;
    const register unsigned short int S45C2 = 5;
    sbit  S45C2_bit at LCDDATA21.B5;
    const register unsigned short int S46C2 = 6;
    sbit  S46C2_bit at LCDDATA21.B6;
    const register unsigned short int S47C2 = 7;
    sbit  S47C2_bit at LCDDATA21.B7;

    // LCDDATA22 bits
    const register unsigned short int S48C2 = 0;
    sbit  S48C2_bit at LCDDATA22.B0;
    const register unsigned short int S49C2 = 1;
    sbit  S49C2_bit at LCDDATA22.B1;
    const register unsigned short int S50C2 = 2;
    sbit  S50C2_bit at LCDDATA22.B2;
    const register unsigned short int S51C2 = 3;
    sbit  S51C2_bit at LCDDATA22.B3;
    const register unsigned short int S52C2 = 4;
    sbit  S52C2_bit at LCDDATA22.B4;
    const register unsigned short int S53C2 = 5;
    sbit  S53C2_bit at LCDDATA22.B5;
    const register unsigned short int S54C2 = 6;
    sbit  S54C2_bit at LCDDATA22.B6;
    const register unsigned short int S55C2 = 7;
    sbit  S55C2_bit at LCDDATA22.B7;

    // LCDDATA23 bits
    const register unsigned short int S56C2 = 0;
    sbit  S56C2_bit at LCDDATA23.B0;
    const register unsigned short int S57C2 = 1;
    sbit  S57C2_bit at LCDDATA23.B1;
    const register unsigned short int S58C2 = 2;
    sbit  S58C2_bit at LCDDATA23.B2;
    const register unsigned short int S59C2 = 3;
    sbit  S59C2_bit at LCDDATA23.B3;
    const register unsigned short int S60C2 = 4;
    sbit  S60C2_bit at LCDDATA23.B4;
    const register unsigned short int S61C2 = 5;
    sbit  S61C2_bit at LCDDATA23.B5;
    const register unsigned short int S62C2 = 6;
    sbit  S62C2_bit at LCDDATA23.B6;
    const register unsigned short int S63C2 = 7;
    sbit  S63C2_bit at LCDDATA23.B7;

    // LCDDATA24 bits
    const register unsigned short int S00C3 = 0;
    sbit  S00C3_bit at LCDDATA24.B0;
    const register unsigned short int S01C3 = 1;
    sbit  S01C3_bit at LCDDATA24.B1;
    const register unsigned short int S02C3 = 2;
    sbit  S02C3_bit at LCDDATA24.B2;
    const register unsigned short int S03C3 = 3;
    sbit  S03C3_bit at LCDDATA24.B3;
    const register unsigned short int S04C3 = 4;
    sbit  S04C3_bit at LCDDATA24.B4;
    const register unsigned short int S05C3 = 5;
    sbit  S05C3_bit at LCDDATA24.B5;
    const register unsigned short int S06C3 = 6;
    sbit  S06C3_bit at LCDDATA24.B6;
    const register unsigned short int S07C3 = 7;
    sbit  S07C3_bit at LCDDATA24.B7;

    // LCDDATA25 bits
    const register unsigned short int S08C3 = 0;
    sbit  S08C3_bit at LCDDATA25.B0;
    const register unsigned short int S09C3 = 1;
    sbit  S09C3_bit at LCDDATA25.B1;
    const register unsigned short int S10C3 = 2;
    sbit  S10C3_bit at LCDDATA25.B2;
    const register unsigned short int S11C3 = 3;
    sbit  S11C3_bit at LCDDATA25.B3;
    const register unsigned short int S12C3 = 4;
    sbit  S12C3_bit at LCDDATA25.B4;
    const register unsigned short int S13C3 = 5;
    sbit  S13C3_bit at LCDDATA25.B5;
    const register unsigned short int S14C3 = 6;
    sbit  S14C3_bit at LCDDATA25.B6;
    const register unsigned short int S15C3 = 7;
    sbit  S15C3_bit at LCDDATA25.B7;

    // LCDDATA26 bits
    const register unsigned short int S16C3 = 0;
    sbit  S16C3_bit at LCDDATA26.B0;
    const register unsigned short int S17C3 = 1;
    sbit  S17C3_bit at LCDDATA26.B1;
    const register unsigned short int S18C3 = 2;
    sbit  S18C3_bit at LCDDATA26.B2;
    const register unsigned short int S19C3 = 3;
    sbit  S19C3_bit at LCDDATA26.B3;
    const register unsigned short int S20C3 = 4;
    sbit  S20C3_bit at LCDDATA26.B4;
    const register unsigned short int S21C3 = 5;
    sbit  S21C3_bit at LCDDATA26.B5;
    const register unsigned short int S22C3 = 6;
    sbit  S22C3_bit at LCDDATA26.B6;
    const register unsigned short int S23C3 = 7;
    sbit  S23C3_bit at LCDDATA26.B7;

    // LCDDATA27 bits
    const register unsigned short int S24C3 = 0;
    sbit  S24C3_bit at LCDDATA27.B0;
    const register unsigned short int S25C3 = 1;
    sbit  S25C3_bit at LCDDATA27.B1;
    const register unsigned short int S26C3 = 2;
    sbit  S26C3_bit at LCDDATA27.B2;
    const register unsigned short int S27C3 = 3;
    sbit  S27C3_bit at LCDDATA27.B3;
    const register unsigned short int S28C3 = 4;
    sbit  S28C3_bit at LCDDATA27.B4;
    const register unsigned short int S29C3 = 5;
    sbit  S29C3_bit at LCDDATA27.B5;
    const register unsigned short int S30C3 = 6;
    sbit  S30C3_bit at LCDDATA27.B6;
    const register unsigned short int S31C3 = 7;
    sbit  S31C3_bit at LCDDATA27.B7;

    // LCDDATA28 bits
    const register unsigned short int S32C3 = 0;
    sbit  S32C3_bit at LCDDATA28.B0;
    const register unsigned short int S33C3 = 1;
    sbit  S33C3_bit at LCDDATA28.B1;
    const register unsigned short int S34C3 = 2;
    sbit  S34C3_bit at LCDDATA28.B2;
    const register unsigned short int S35C3 = 3;
    sbit  S35C3_bit at LCDDATA28.B3;
    const register unsigned short int S36C3 = 4;
    sbit  S36C3_bit at LCDDATA28.B4;
    const register unsigned short int S37C3 = 5;
    sbit  S37C3_bit at LCDDATA28.B5;
    const register unsigned short int S38C3 = 6;
    sbit  S38C3_bit at LCDDATA28.B6;
    const register unsigned short int S39C3 = 7;
    sbit  S39C3_bit at LCDDATA28.B7;

    // LCDDATA29 bits
    const register unsigned short int S40C3 = 0;
    sbit  S40C3_bit at LCDDATA29.B0;
    const register unsigned short int S41C3 = 1;
    sbit  S41C3_bit at LCDDATA29.B1;
    const register unsigned short int S42C3 = 2;
    sbit  S42C3_bit at LCDDATA29.B2;
    const register unsigned short int S43C3 = 3;
    sbit  S43C3_bit at LCDDATA29.B3;
    const register unsigned short int S44C3 = 4;
    sbit  S44C3_bit at LCDDATA29.B4;
    const register unsigned short int S45C3 = 5;
    sbit  S45C3_bit at LCDDATA29.B5;
    const register unsigned short int S46C3 = 6;
    sbit  S46C3_bit at LCDDATA29.B6;
    const register unsigned short int S47C3 = 7;
    sbit  S47C3_bit at LCDDATA29.B7;

    // LCDDATA30 bits
    const register unsigned short int S48C3 = 0;
    sbit  S48C3_bit at LCDDATA30.B0;
    const register unsigned short int S49C3 = 1;
    sbit  S49C3_bit at LCDDATA30.B1;
    const register unsigned short int S50C3 = 2;
    sbit  S50C3_bit at LCDDATA30.B2;
    const register unsigned short int S51C3 = 3;
    sbit  S51C3_bit at LCDDATA30.B3;
    const register unsigned short int S52C3 = 4;
    sbit  S52C3_bit at LCDDATA30.B4;
    const register unsigned short int S53C3 = 5;
    sbit  S53C3_bit at LCDDATA30.B5;
    const register unsigned short int S54C3 = 6;
    sbit  S54C3_bit at LCDDATA30.B6;
    const register unsigned short int S55C3 = 7;
    sbit  S55C3_bit at LCDDATA30.B7;

    // LCDDATA31 bits
    const register unsigned short int S56C3 = 0;
    sbit  S56C3_bit at LCDDATA31.B0;
    const register unsigned short int S57C3 = 1;
    sbit  S57C3_bit at LCDDATA31.B1;
    const register unsigned short int S58C3 = 2;
    sbit  S58C3_bit at LCDDATA31.B2;
    const register unsigned short int S59C3 = 3;
    sbit  S59C3_bit at LCDDATA31.B3;
    const register unsigned short int S60C3 = 4;
    sbit  S60C3_bit at LCDDATA31.B4;
    const register unsigned short int S61C3 = 5;
    sbit  S61C3_bit at LCDDATA31.B5;
    const register unsigned short int S62C3 = 6;
    sbit  S62C3_bit at LCDDATA31.B6;
    const register unsigned short int S63C3 = 7;
    sbit  S63C3_bit at LCDDATA31.B7;

    // LCDDATA32 bits
    const register unsigned short int S00C4 = 0;
    sbit  S00C4_bit at LCDDATA32.B0;
    const register unsigned short int S01C4 = 1;
    sbit  S01C4_bit at LCDDATA32.B1;
    const register unsigned short int S02C4 = 2;
    sbit  S02C4_bit at LCDDATA32.B2;
    const register unsigned short int S03C4 = 3;
    sbit  S03C4_bit at LCDDATA32.B3;
    const register unsigned short int S04C4 = 4;
    sbit  S04C4_bit at LCDDATA32.B4;
    const register unsigned short int S05C4 = 5;
    sbit  S05C4_bit at LCDDATA32.B5;
    const register unsigned short int S06C4 = 6;
    sbit  S06C4_bit at LCDDATA32.B6;
    const register unsigned short int S07C4 = 7;
    sbit  S07C4_bit at LCDDATA32.B7;

    // LCDDATA33 bits
    const register unsigned short int S08C4 = 0;
    sbit  S08C4_bit at LCDDATA33.B0;
    const register unsigned short int S09C4 = 1;
    sbit  S09C4_bit at LCDDATA33.B1;
    const register unsigned short int S10C4 = 2;
    sbit  S10C4_bit at LCDDATA33.B2;
    const register unsigned short int S11C4 = 3;
    sbit  S11C4_bit at LCDDATA33.B3;
    const register unsigned short int S12C4 = 4;
    sbit  S12C4_bit at LCDDATA33.B4;
    const register unsigned short int S13C4 = 5;
    sbit  S13C4_bit at LCDDATA33.B5;
    const register unsigned short int S14C4 = 6;
    sbit  S14C4_bit at LCDDATA33.B6;
    const register unsigned short int S15C4 = 7;
    sbit  S15C4_bit at LCDDATA33.B7;

    // LCDDATA34 bits
    const register unsigned short int S16C4 = 0;
    sbit  S16C4_bit at LCDDATA34.B0;
    const register unsigned short int S17C4 = 1;
    sbit  S17C4_bit at LCDDATA34.B1;
    const register unsigned short int S18C4 = 2;
    sbit  S18C4_bit at LCDDATA34.B2;
    const register unsigned short int S19C4 = 3;
    sbit  S19C4_bit at LCDDATA34.B3;
    const register unsigned short int S20C4 = 4;
    sbit  S20C4_bit at LCDDATA34.B4;
    const register unsigned short int S21C4 = 5;
    sbit  S21C4_bit at LCDDATA34.B5;
    const register unsigned short int S22C4 = 6;
    sbit  S22C4_bit at LCDDATA34.B6;
    const register unsigned short int S23C4 = 7;
    sbit  S23C4_bit at LCDDATA34.B7;

    // LCDDATA35 bits
    const register unsigned short int S24C4 = 0;
    sbit  S24C4_bit at LCDDATA35.B0;
    const register unsigned short int S25C4 = 1;
    sbit  S25C4_bit at LCDDATA35.B1;
    const register unsigned short int S26C4 = 2;
    sbit  S26C4_bit at LCDDATA35.B2;
    const register unsigned short int S27C4 = 3;
    sbit  S27C4_bit at LCDDATA35.B3;
    const register unsigned short int S28C4 = 4;
    sbit  S28C4_bit at LCDDATA35.B4;
    const register unsigned short int S29C4 = 5;
    sbit  S29C4_bit at LCDDATA35.B5;
    const register unsigned short int S30C4 = 6;
    sbit  S30C4_bit at LCDDATA35.B6;
    const register unsigned short int S31C4 = 7;
    sbit  S31C4_bit at LCDDATA35.B7;

    // LCDDATA36 bits
    const register unsigned short int S32C4 = 0;
    sbit  S32C4_bit at LCDDATA36.B0;
    const register unsigned short int S33C4 = 1;
    sbit  S33C4_bit at LCDDATA36.B1;
    const register unsigned short int S34C4 = 2;
    sbit  S34C4_bit at LCDDATA36.B2;
    const register unsigned short int S35C4 = 3;
    sbit  S35C4_bit at LCDDATA36.B3;
    const register unsigned short int S36C4 = 4;
    sbit  S36C4_bit at LCDDATA36.B4;
    const register unsigned short int S37C4 = 5;
    sbit  S37C4_bit at LCDDATA36.B5;
    const register unsigned short int S38C4 = 6;
    sbit  S38C4_bit at LCDDATA36.B6;
    const register unsigned short int S39C4 = 7;
    sbit  S39C4_bit at LCDDATA36.B7;

    // LCDDATA37 bits
    const register unsigned short int S40C4 = 0;
    sbit  S40C4_bit at LCDDATA37.B0;
    const register unsigned short int S41C4 = 1;
    sbit  S41C4_bit at LCDDATA37.B1;
    const register unsigned short int S42C4 = 2;
    sbit  S42C4_bit at LCDDATA37.B2;
    const register unsigned short int S43C4 = 3;
    sbit  S43C4_bit at LCDDATA37.B3;
    const register unsigned short int S44C4 = 4;
    sbit  S44C4_bit at LCDDATA37.B4;
    const register unsigned short int S45C4 = 5;
    sbit  S45C4_bit at LCDDATA37.B5;
    const register unsigned short int S46C4 = 6;
    sbit  S46C4_bit at LCDDATA37.B6;
    const register unsigned short int S47C4 = 7;
    sbit  S47C4_bit at LCDDATA37.B7;

    // LCDDATA38 bits
    const register unsigned short int S48C4 = 0;
    sbit  S48C4_bit at LCDDATA38.B0;
    const register unsigned short int S49C4 = 1;
    sbit  S49C4_bit at LCDDATA38.B1;
    const register unsigned short int S50C4 = 2;
    sbit  S50C4_bit at LCDDATA38.B2;
    const register unsigned short int S51C4 = 3;
    sbit  S51C4_bit at LCDDATA38.B3;
    const register unsigned short int S52C4 = 4;
    sbit  S52C4_bit at LCDDATA38.B4;
    const register unsigned short int S53C4 = 5;
    sbit  S53C4_bit at LCDDATA38.B5;
    const register unsigned short int S54C4 = 6;
    sbit  S54C4_bit at LCDDATA38.B6;
    const register unsigned short int S55C4 = 7;
    sbit  S55C4_bit at LCDDATA38.B7;

    // LCDDATA39 bits
    const register unsigned short int S56C4 = 0;
    sbit  S56C4_bit at LCDDATA39.B0;
    const register unsigned short int S57C4 = 1;
    sbit  S57C4_bit at LCDDATA39.B1;
    const register unsigned short int S58C4 = 2;
    sbit  S58C4_bit at LCDDATA39.B2;
    const register unsigned short int S59C4 = 3;
    sbit  S59C4_bit at LCDDATA39.B3;
    const register unsigned short int S60C4 = 4;
    sbit  S60C4_bit at LCDDATA39.B4;
    const register unsigned short int S61C4 = 5;
    sbit  S61C4_bit at LCDDATA39.B5;
    const register unsigned short int S62C4 = 6;
    sbit  S62C4_bit at LCDDATA39.B6;
    const register unsigned short int S63C4 = 7;
    sbit  S63C4_bit at LCDDATA39.B7;

    // LCDDATA40 bits
    const register unsigned short int S00C5 = 0;
    sbit  S00C5_bit at LCDDATA40.B0;
    const register unsigned short int S01C5 = 1;
    sbit  S01C5_bit at LCDDATA40.B1;
    const register unsigned short int S02C5 = 2;
    sbit  S02C5_bit at LCDDATA40.B2;
    const register unsigned short int S03C5 = 3;
    sbit  S03C5_bit at LCDDATA40.B3;
    const register unsigned short int S04C5 = 4;
    sbit  S04C5_bit at LCDDATA40.B4;
    const register unsigned short int S05C5 = 5;
    sbit  S05C5_bit at LCDDATA40.B5;
    const register unsigned short int S06C5 = 6;
    sbit  S06C5_bit at LCDDATA40.B6;
    const register unsigned short int S07C5 = 7;
    sbit  S07C5_bit at LCDDATA40.B7;

    // LCDDATA41 bits
    const register unsigned short int S08C5 = 0;
    sbit  S08C5_bit at LCDDATA41.B0;
    const register unsigned short int S09C5 = 1;
    sbit  S09C5_bit at LCDDATA41.B1;
    const register unsigned short int S10C5 = 2;
    sbit  S10C5_bit at LCDDATA41.B2;
    const register unsigned short int S11C5 = 3;
    sbit  S11C5_bit at LCDDATA41.B3;
    const register unsigned short int S12C5 = 4;
    sbit  S12C5_bit at LCDDATA41.B4;
    const register unsigned short int S13C5 = 5;
    sbit  S13C5_bit at LCDDATA41.B5;
    const register unsigned short int S14C5 = 6;
    sbit  S14C5_bit at LCDDATA41.B6;
    const register unsigned short int S15C5 = 7;
    sbit  S15C5_bit at LCDDATA41.B7;

    // LCDDATA42 bits
    const register unsigned short int S16C5 = 0;
    sbit  S16C5_bit at LCDDATA42.B0;
    const register unsigned short int S17C5 = 1;
    sbit  S17C5_bit at LCDDATA42.B1;
    const register unsigned short int S18C5 = 2;
    sbit  S18C5_bit at LCDDATA42.B2;
    const register unsigned short int S19C5 = 3;
    sbit  S19C5_bit at LCDDATA42.B3;
    const register unsigned short int S20C5 = 4;
    sbit  S20C5_bit at LCDDATA42.B4;
    const register unsigned short int S21C5 = 5;
    sbit  S21C5_bit at LCDDATA42.B5;
    const register unsigned short int S22C5 = 6;
    sbit  S22C5_bit at LCDDATA42.B6;
    const register unsigned short int S23C5 = 7;
    sbit  S23C5_bit at LCDDATA42.B7;

    // LCDDATA43 bits
    const register unsigned short int S24C5 = 0;
    sbit  S24C5_bit at LCDDATA43.B0;
    const register unsigned short int S25C5 = 1;
    sbit  S25C5_bit at LCDDATA43.B1;
    const register unsigned short int S26C5 = 2;
    sbit  S26C5_bit at LCDDATA43.B2;
    const register unsigned short int S27C5 = 3;
    sbit  S27C5_bit at LCDDATA43.B3;
    const register unsigned short int S28C5 = 4;
    sbit  S28C5_bit at LCDDATA43.B4;
    const register unsigned short int S29C5 = 5;
    sbit  S29C5_bit at LCDDATA43.B5;
    const register unsigned short int S30C5 = 6;
    sbit  S30C5_bit at LCDDATA43.B6;
    const register unsigned short int S31C5 = 7;
    sbit  S31C5_bit at LCDDATA43.B7;

    // LCDDATA44 bits
    const register unsigned short int S32C5 = 0;
    sbit  S32C5_bit at LCDDATA44.B0;
    const register unsigned short int S33C5 = 1;
    sbit  S33C5_bit at LCDDATA44.B1;
    const register unsigned short int S34C5 = 2;
    sbit  S34C5_bit at LCDDATA44.B2;
    const register unsigned short int S35C5 = 3;
    sbit  S35C5_bit at LCDDATA44.B3;
    const register unsigned short int S36C5 = 4;
    sbit  S36C5_bit at LCDDATA44.B4;
    const register unsigned short int S37C5 = 5;
    sbit  S37C5_bit at LCDDATA44.B5;
    const register unsigned short int S38C5 = 6;
    sbit  S38C5_bit at LCDDATA44.B6;
    const register unsigned short int S39C5 = 7;
    sbit  S39C5_bit at LCDDATA44.B7;

    // LCDDATA45 bits
    const register unsigned short int S40C5 = 0;
    sbit  S40C5_bit at LCDDATA45.B0;
    const register unsigned short int S41C5 = 1;
    sbit  S41C5_bit at LCDDATA45.B1;
    const register unsigned short int S42C5 = 2;
    sbit  S42C5_bit at LCDDATA45.B2;
    const register unsigned short int S43C5 = 3;
    sbit  S43C5_bit at LCDDATA45.B3;
    const register unsigned short int S44C5 = 4;
    sbit  S44C5_bit at LCDDATA45.B4;
    const register unsigned short int S45C5 = 5;
    sbit  S45C5_bit at LCDDATA45.B5;
    const register unsigned short int S46C5 = 6;
    sbit  S46C5_bit at LCDDATA45.B6;
    const register unsigned short int S47C5 = 7;
    sbit  S47C5_bit at LCDDATA45.B7;

    // LCDDATA46 bits
    const register unsigned short int S48C5 = 0;
    sbit  S48C5_bit at LCDDATA46.B0;
    const register unsigned short int S49C5 = 1;
    sbit  S49C5_bit at LCDDATA46.B1;
    const register unsigned short int S50C5 = 2;
    sbit  S50C5_bit at LCDDATA46.B2;
    const register unsigned short int S51C5 = 3;
    sbit  S51C5_bit at LCDDATA46.B3;
    const register unsigned short int S52C5 = 4;
    sbit  S52C5_bit at LCDDATA46.B4;
    const register unsigned short int S53C5 = 5;
    sbit  S53C5_bit at LCDDATA46.B5;
    const register unsigned short int S54C5 = 6;
    sbit  S54C5_bit at LCDDATA46.B6;
    const register unsigned short int S55C5 = 7;
    sbit  S55C5_bit at LCDDATA46.B7;

    // LCDDATA47 bits
    const register unsigned short int S56C5 = 0;
    sbit  S56C5_bit at LCDDATA47.B0;
    const register unsigned short int S57C5 = 1;
    sbit  S57C5_bit at LCDDATA47.B1;
    const register unsigned short int S58C5 = 2;
    sbit  S58C5_bit at LCDDATA47.B2;
    const register unsigned short int S59C5 = 3;
    sbit  S59C5_bit at LCDDATA47.B3;
    const register unsigned short int S60C5 = 4;
    sbit  S60C5_bit at LCDDATA47.B4;
    const register unsigned short int S61C5 = 5;
    sbit  S61C5_bit at LCDDATA47.B5;
    const register unsigned short int S62C5 = 6;
    sbit  S62C5_bit at LCDDATA47.B6;
    const register unsigned short int S63C5 = 7;
    sbit  S63C5_bit at LCDDATA47.B7;

    // LCDDATA48 bits
    const register unsigned short int S00C6 = 0;
    sbit  S00C6_bit at LCDDATA48.B0;
    const register unsigned short int S01C6 = 1;
    sbit  S01C6_bit at LCDDATA48.B1;
    const register unsigned short int S02C6 = 2;
    sbit  S02C6_bit at LCDDATA48.B2;
    const register unsigned short int S03C6 = 3;
    sbit  S03C6_bit at LCDDATA48.B3;
    const register unsigned short int S04C6 = 4;
    sbit  S04C6_bit at LCDDATA48.B4;
    const register unsigned short int S05C6 = 5;
    sbit  S05C6_bit at LCDDATA48.B5;
    const register unsigned short int S06C6 = 6;
    sbit  S06C6_bit at LCDDATA48.B6;
    const register unsigned short int S07C6 = 7;
    sbit  S07C6_bit at LCDDATA48.B7;

    // LCDDATA49 bits
    const register unsigned short int S08C6 = 0;
    sbit  S08C6_bit at LCDDATA49.B0;
    const register unsigned short int S09C6 = 1;
    sbit  S09C6_bit at LCDDATA49.B1;
    const register unsigned short int S10C6 = 2;
    sbit  S10C6_bit at LCDDATA49.B2;
    const register unsigned short int S11C6 = 3;
    sbit  S11C6_bit at LCDDATA49.B3;
    const register unsigned short int S12C6 = 4;
    sbit  S12C6_bit at LCDDATA49.B4;
    const register unsigned short int S13C6 = 5;
    sbit  S13C6_bit at LCDDATA49.B5;
    const register unsigned short int S14C6 = 6;
    sbit  S14C6_bit at LCDDATA49.B6;
    const register unsigned short int S15C6 = 7;
    sbit  S15C6_bit at LCDDATA49.B7;

    // LCDDATA50 bits
    const register unsigned short int S16C6 = 0;
    sbit  S16C6_bit at LCDDATA50.B0;
    const register unsigned short int S17C6 = 1;
    sbit  S17C6_bit at LCDDATA50.B1;
    const register unsigned short int S18C6 = 2;
    sbit  S18C6_bit at LCDDATA50.B2;
    const register unsigned short int S19C6 = 3;
    sbit  S19C6_bit at LCDDATA50.B3;
    const register unsigned short int S20C6 = 4;
    sbit  S20C6_bit at LCDDATA50.B4;
    const register unsigned short int S21C6 = 5;
    sbit  S21C6_bit at LCDDATA50.B5;
    const register unsigned short int S22C6 = 6;
    sbit  S22C6_bit at LCDDATA50.B6;
    const register unsigned short int S23C6 = 7;
    sbit  S23C6_bit at LCDDATA50.B7;

    // LCDDATA51 bits
    const register unsigned short int S24C6 = 0;
    sbit  S24C6_bit at LCDDATA51.B0;
    const register unsigned short int S25C6 = 1;
    sbit  S25C6_bit at LCDDATA51.B1;
    const register unsigned short int S26C6 = 2;
    sbit  S26C6_bit at LCDDATA51.B2;
    const register unsigned short int S27C6 = 3;
    sbit  S27C6_bit at LCDDATA51.B3;
    const register unsigned short int S28C6 = 4;
    sbit  S28C6_bit at LCDDATA51.B4;
    const register unsigned short int S29C6 = 5;
    sbit  S29C6_bit at LCDDATA51.B5;
    const register unsigned short int S30C6 = 6;
    sbit  S30C6_bit at LCDDATA51.B6;
    const register unsigned short int S31C6 = 7;
    sbit  S31C6_bit at LCDDATA51.B7;

    // LCDDATA52 bits
    const register unsigned short int S32C6 = 0;
    sbit  S32C6_bit at LCDDATA52.B0;
    const register unsigned short int S33C6 = 1;
    sbit  S33C6_bit at LCDDATA52.B1;
    const register unsigned short int S34C6 = 2;
    sbit  S34C6_bit at LCDDATA52.B2;
    const register unsigned short int S35C6 = 3;
    sbit  S35C6_bit at LCDDATA52.B3;
    const register unsigned short int S36C6 = 4;
    sbit  S36C6_bit at LCDDATA52.B4;
    const register unsigned short int S37C6 = 5;
    sbit  S37C6_bit at LCDDATA52.B5;
    const register unsigned short int S38C6 = 6;
    sbit  S38C6_bit at LCDDATA52.B6;
    const register unsigned short int S39C6 = 7;
    sbit  S39C6_bit at LCDDATA52.B7;

    // LCDDATA53 bits
    const register unsigned short int S40C6 = 0;
    sbit  S40C6_bit at LCDDATA53.B0;
    const register unsigned short int S41C6 = 1;
    sbit  S41C6_bit at LCDDATA53.B1;
    const register unsigned short int S42C6 = 2;
    sbit  S42C6_bit at LCDDATA53.B2;
    const register unsigned short int S43C6 = 3;
    sbit  S43C6_bit at LCDDATA53.B3;
    const register unsigned short int S44C6 = 4;
    sbit  S44C6_bit at LCDDATA53.B4;
    const register unsigned short int S45C6 = 5;
    sbit  S45C6_bit at LCDDATA53.B5;
    const register unsigned short int S46C6 = 6;
    sbit  S46C6_bit at LCDDATA53.B6;
    const register unsigned short int S47C6 = 7;
    sbit  S47C6_bit at LCDDATA53.B7;

    // LCDDATA54 bits
    const register unsigned short int S48C6 = 0;
    sbit  S48C6_bit at LCDDATA54.B0;
    const register unsigned short int S49C6 = 1;
    sbit  S49C6_bit at LCDDATA54.B1;
    const register unsigned short int S50C6 = 2;
    sbit  S50C6_bit at LCDDATA54.B2;
    const register unsigned short int S51C6 = 3;
    sbit  S51C6_bit at LCDDATA54.B3;
    const register unsigned short int S52C6 = 4;
    sbit  S52C6_bit at LCDDATA54.B4;
    const register unsigned short int S53C6 = 5;
    sbit  S53C6_bit at LCDDATA54.B5;
    const register unsigned short int S54C6 = 6;
    sbit  S54C6_bit at LCDDATA54.B6;
    const register unsigned short int S55C6 = 7;
    sbit  S55C6_bit at LCDDATA54.B7;

    // LCDDATA55 bits
    const register unsigned short int S56C6 = 0;
    sbit  S56C6_bit at LCDDATA55.B0;
    const register unsigned short int S57C6 = 1;
    sbit  S57C6_bit at LCDDATA55.B1;
    const register unsigned short int S58C6 = 2;
    sbit  S58C6_bit at LCDDATA55.B2;
    const register unsigned short int S59C6 = 3;
    sbit  S59C6_bit at LCDDATA55.B3;
    const register unsigned short int S60C6 = 4;
    sbit  S60C6_bit at LCDDATA55.B4;
    const register unsigned short int S61C6 = 5;
    sbit  S61C6_bit at LCDDATA55.B5;
    const register unsigned short int S62C6 = 6;
    sbit  S62C6_bit at LCDDATA55.B6;
    const register unsigned short int S63C6 = 7;
    sbit  S63C6_bit at LCDDATA55.B7;

    // LCDDATA56 bits
    const register unsigned short int S00C7 = 0;
    sbit  S00C7_bit at LCDDATA56.B0;
    const register unsigned short int S01C7 = 1;
    sbit  S01C7_bit at LCDDATA56.B1;
    const register unsigned short int S02C7 = 2;
    sbit  S02C7_bit at LCDDATA56.B2;
    const register unsigned short int S03C7 = 3;
    sbit  S03C7_bit at LCDDATA56.B3;
    const register unsigned short int S04C7 = 4;
    sbit  S04C7_bit at LCDDATA56.B4;
    const register unsigned short int S05C7 = 5;
    sbit  S05C7_bit at LCDDATA56.B5;
    const register unsigned short int S06C7 = 6;
    sbit  S06C7_bit at LCDDATA56.B6;
    const register unsigned short int S07C7 = 7;
    sbit  S07C7_bit at LCDDATA56.B7;

    // LCDDATA57 bits
    const register unsigned short int S08C7 = 0;
    sbit  S08C7_bit at LCDDATA57.B0;
    const register unsigned short int S09C7 = 1;
    sbit  S09C7_bit at LCDDATA57.B1;
    const register unsigned short int S10C7 = 2;
    sbit  S10C7_bit at LCDDATA57.B2;
    const register unsigned short int S11C7 = 3;
    sbit  S11C7_bit at LCDDATA57.B3;
    const register unsigned short int S12C7 = 4;
    sbit  S12C7_bit at LCDDATA57.B4;
    const register unsigned short int S13C7 = 5;
    sbit  S13C7_bit at LCDDATA57.B5;
    const register unsigned short int S14C7 = 6;
    sbit  S14C7_bit at LCDDATA57.B6;
    const register unsigned short int S15C7 = 7;
    sbit  S15C7_bit at LCDDATA57.B7;

    // LCDDATA58 bits
    const register unsigned short int S16C7 = 0;
    sbit  S16C7_bit at LCDDATA58.B0;
    const register unsigned short int S17C7 = 1;
    sbit  S17C7_bit at LCDDATA58.B1;
    const register unsigned short int S18C7 = 2;
    sbit  S18C7_bit at LCDDATA58.B2;
    const register unsigned short int S19C7 = 3;
    sbit  S19C7_bit at LCDDATA58.B3;
    const register unsigned short int S20C7 = 4;
    sbit  S20C7_bit at LCDDATA58.B4;
    const register unsigned short int S21C7 = 5;
    sbit  S21C7_bit at LCDDATA58.B5;
    const register unsigned short int S22C7 = 6;
    sbit  S22C7_bit at LCDDATA58.B6;
    const register unsigned short int S23C7 = 7;
    sbit  S23C7_bit at LCDDATA58.B7;

    // LCDDATA59 bits
    const register unsigned short int S24C7 = 0;
    sbit  S24C7_bit at LCDDATA59.B0;
    const register unsigned short int S25C7 = 1;
    sbit  S25C7_bit at LCDDATA59.B1;
    const register unsigned short int S26C7 = 2;
    sbit  S26C7_bit at LCDDATA59.B2;
    const register unsigned short int S27C7 = 3;
    sbit  S27C7_bit at LCDDATA59.B3;
    const register unsigned short int S28C7 = 4;
    sbit  S28C7_bit at LCDDATA59.B4;
    const register unsigned short int S29C7 = 5;
    sbit  S29C7_bit at LCDDATA59.B5;
    const register unsigned short int S30C7 = 6;
    sbit  S30C7_bit at LCDDATA59.B6;
    const register unsigned short int S31C7 = 7;
    sbit  S31C7_bit at LCDDATA59.B7;

    // LCDDATA60 bits
    const register unsigned short int S32C7 = 0;
    sbit  S32C7_bit at LCDDATA60.B0;
    const register unsigned short int S33C7 = 1;
    sbit  S33C7_bit at LCDDATA60.B1;
    const register unsigned short int S34C7 = 2;
    sbit  S34C7_bit at LCDDATA60.B2;
    const register unsigned short int S35C7 = 3;
    sbit  S35C7_bit at LCDDATA60.B3;
    const register unsigned short int S36C7 = 4;
    sbit  S36C7_bit at LCDDATA60.B4;
    const register unsigned short int S37C7 = 5;
    sbit  S37C7_bit at LCDDATA60.B5;
    const register unsigned short int S38C7 = 6;
    sbit  S38C7_bit at LCDDATA60.B6;
    const register unsigned short int S39C7 = 7;
    sbit  S39C7_bit at LCDDATA60.B7;

    // LCDDATA61 bits
    const register unsigned short int S40C7 = 0;
    sbit  S40C7_bit at LCDDATA61.B0;
    const register unsigned short int S41C7 = 1;
    sbit  S41C7_bit at LCDDATA61.B1;
    const register unsigned short int S42C7 = 2;
    sbit  S42C7_bit at LCDDATA61.B2;
    const register unsigned short int S43C7 = 3;
    sbit  S43C7_bit at LCDDATA61.B3;
    const register unsigned short int S44C7 = 4;
    sbit  S44C7_bit at LCDDATA61.B4;
    const register unsigned short int S45C7 = 5;
    sbit  S45C7_bit at LCDDATA61.B5;
    const register unsigned short int S46C7 = 6;
    sbit  S46C7_bit at LCDDATA61.B6;
    const register unsigned short int S47C7 = 7;
    sbit  S47C7_bit at LCDDATA61.B7;

    // LCDDATA62 bits
    const register unsigned short int S48C7 = 0;
    sbit  S48C7_bit at LCDDATA62.B0;
    const register unsigned short int S49C7 = 1;
    sbit  S49C7_bit at LCDDATA62.B1;
    const register unsigned short int S50C7 = 2;
    sbit  S50C7_bit at LCDDATA62.B2;
    const register unsigned short int S51C7 = 3;
    sbit  S51C7_bit at LCDDATA62.B3;
    const register unsigned short int S52C7 = 4;
    sbit  S52C7_bit at LCDDATA62.B4;
    const register unsigned short int S53C7 = 5;
    sbit  S53C7_bit at LCDDATA62.B5;
    const register unsigned short int S54C7 = 6;
    sbit  S54C7_bit at LCDDATA62.B6;
    const register unsigned short int S55C7 = 7;
    sbit  S55C7_bit at LCDDATA62.B7;

    // LCDDATA63 bits
    const register unsigned short int S56C7 = 0;
    sbit  S56C7_bit at LCDDATA63.B0;
    const register unsigned short int S57C7 = 1;
    sbit  S57C7_bit at LCDDATA63.B1;
    const register unsigned short int S58C7 = 2;
    sbit  S58C7_bit at LCDDATA63.B2;
    const register unsigned short int S59C7 = 3;
    sbit  S59C7_bit at LCDDATA63.B3;
    const register unsigned short int S60C7 = 4;
    sbit  S60C7_bit at LCDDATA63.B4;
    const register unsigned short int S61C7 = 5;
    sbit  S61C7_bit at LCDDATA63.B5;
    const register unsigned short int S62C7 = 6;
    sbit  S62C7_bit at LCDDATA63.B6;
    const register unsigned short int S63C7 = 7;
    sbit  S63C7_bit at LCDDATA63.B7;

    // LCDSE0 bits
    const register unsigned short int SE00 = 0;
    sbit  SE00_bit at LCDSE0.B0;
    const register unsigned short int SE01 = 1;
    sbit  SE01_bit at LCDSE0.B1;
    const register unsigned short int SE02 = 2;
    sbit  SE02_bit at LCDSE0.B2;
    const register unsigned short int SE03 = 3;
    sbit  SE03_bit at LCDSE0.B3;
    const register unsigned short int SE04 = 4;
    sbit  SE04_bit at LCDSE0.B4;
    const register unsigned short int SE05 = 5;
    sbit  SE05_bit at LCDSE0.B5;
    const register unsigned short int SE06 = 6;
    sbit  SE06_bit at LCDSE0.B6;
    const register unsigned short int SE07 = 7;
    sbit  SE07_bit at LCDSE0.B7;

    // LCDSE1 bits
    const register unsigned short int SE08 = 0;
    sbit  SE08_bit at LCDSE1.B0;
    const register unsigned short int SE09 = 1;
    sbit  SE09_bit at LCDSE1.B1;
    const register unsigned short int SE10 = 2;
    sbit  SE10_bit at LCDSE1.B2;
    const register unsigned short int SE11 = 3;
    sbit  SE11_bit at LCDSE1.B3;
    const register unsigned short int SE12 = 4;
    sbit  SE12_bit at LCDSE1.B4;
    const register unsigned short int SE13 = 5;
    sbit  SE13_bit at LCDSE1.B5;
    const register unsigned short int SE14 = 6;
    sbit  SE14_bit at LCDSE1.B6;
    const register unsigned short int SE15 = 7;
    sbit  SE15_bit at LCDSE1.B7;

    // LCDSE2 bits
    const register unsigned short int SE16 = 0;
    sbit  SE16_bit at LCDSE2.B0;
    const register unsigned short int SE17 = 1;
    sbit  SE17_bit at LCDSE2.B1;
    const register unsigned short int SE18 = 2;
    sbit  SE18_bit at LCDSE2.B2;
    const register unsigned short int SE19 = 3;
    sbit  SE19_bit at LCDSE2.B3;
    const register unsigned short int SE20 = 4;
    sbit  SE20_bit at LCDSE2.B4;
    const register unsigned short int SE21 = 5;
    sbit  SE21_bit at LCDSE2.B5;
    const register unsigned short int SE22 = 6;
    sbit  SE22_bit at LCDSE2.B6;
    const register unsigned short int SE23 = 7;
    sbit  SE23_bit at LCDSE2.B7;

    // LCDSE3 bits
    const register unsigned short int SE24 = 0;
    sbit  SE24_bit at LCDSE3.B0;
    const register unsigned short int SE25 = 1;
    sbit  SE25_bit at LCDSE3.B1;
    const register unsigned short int SE26 = 2;
    sbit  SE26_bit at LCDSE3.B2;
    const register unsigned short int SE27 = 3;
    sbit  SE27_bit at LCDSE3.B3;
    const register unsigned short int SE28 = 4;
    sbit  SE28_bit at LCDSE3.B4;
    const register unsigned short int SE29 = 5;
    sbit  SE29_bit at LCDSE3.B5;
    const register unsigned short int SE30 = 6;
    sbit  SE30_bit at LCDSE3.B6;
    const register unsigned short int SE31 = 7;
    sbit  SE31_bit at LCDSE3.B7;

    // LCDSE4 bits
    const register unsigned short int SE32 = 0;
    sbit  SE32_bit at LCDSE4.B0;
    const register unsigned short int SE33 = 1;
    sbit  SE33_bit at LCDSE4.B1;
    const register unsigned short int SE34 = 2;
    sbit  SE34_bit at LCDSE4.B2;
    const register unsigned short int SE35 = 3;
    sbit  SE35_bit at LCDSE4.B3;
    const register unsigned short int SE36 = 4;
    sbit  SE36_bit at LCDSE4.B4;
    const register unsigned short int SE37 = 5;
    sbit  SE37_bit at LCDSE4.B5;
    const register unsigned short int SE38 = 6;
    sbit  SE38_bit at LCDSE4.B6;
    const register unsigned short int SE39 = 7;
    sbit  SE39_bit at LCDSE4.B7;

    // LCDSE5 bits
    const register unsigned short int SE40 = 0;
    sbit  SE40_bit at LCDSE5.B0;
    const register unsigned short int SE41 = 1;
    sbit  SE41_bit at LCDSE5.B1;
    const register unsigned short int SE42 = 2;
    sbit  SE42_bit at LCDSE5.B2;
    const register unsigned short int SE43 = 3;
    sbit  SE43_bit at LCDSE5.B3;
    const register unsigned short int SE44 = 4;
    sbit  SE44_bit at LCDSE5.B4;
    const register unsigned short int SE45 = 5;
    sbit  SE45_bit at LCDSE5.B5;
    const register unsigned short int SE46 = 6;
    sbit  SE46_bit at LCDSE5.B6;
    const register unsigned short int SE47 = 7;
    sbit  SE47_bit at LCDSE5.B7;

    // LCDSE6 bits
    const register unsigned short int SE48 = 0;
    sbit  SE48_bit at LCDSE6.B0;
    const register unsigned short int SE49 = 1;
    sbit  SE49_bit at LCDSE6.B1;
    const register unsigned short int SE50 = 2;
    sbit  SE50_bit at LCDSE6.B2;
    const register unsigned short int SE51 = 3;
    sbit  SE51_bit at LCDSE6.B3;
    const register unsigned short int SE52 = 4;
    sbit  SE52_bit at LCDSE6.B4;
    const register unsigned short int SE53 = 5;
    sbit  SE53_bit at LCDSE6.B5;
    const register unsigned short int SE54 = 6;
    sbit  SE54_bit at LCDSE6.B6;
    const register unsigned short int SE55 = 7;
    sbit  SE55_bit at LCDSE6.B7;

    // LCDSE7 bits
    const register unsigned short int SE56 = 0;
    sbit  SE56_bit at LCDSE7.B0;
    const register unsigned short int SE57 = 1;
    sbit  SE57_bit at LCDSE7.B1;
    const register unsigned short int SE58 = 2;
    sbit  SE58_bit at LCDSE7.B2;
    const register unsigned short int SE59 = 3;
    sbit  SE59_bit at LCDSE7.B3;
    const register unsigned short int SE60 = 4;
    sbit  SE60_bit at LCDSE7.B4;
    const register unsigned short int SE61 = 5;
    sbit  SE61_bit at LCDSE7.B5;
    const register unsigned short int SE62 = 6;
    sbit  SE62_bit at LCDSE7.B6;
    const register unsigned short int SE63 = 7;
    sbit  SE63_bit at LCDSE7.B7;

    // LCDRL bits
    const register unsigned short int LRLAT0 = 0;
    sbit  LRLAT0_bit at LCDRL.B0;
    const register unsigned short int LRLAT1 = 1;
    sbit  LRLAT1_bit at LCDRL.B1;
    const register unsigned short int LRLAT2 = 2;
    sbit  LRLAT2_bit at LCDRL.B2;
    const register unsigned short int LRLBP0 = 4;
    sbit  LRLBP0_bit at LCDRL.B4;
    const register unsigned short int LRLBP1 = 5;
    sbit  LRLBP1_bit at LCDRL.B5;
    const register unsigned short int LRLAP0 = 6;
    sbit  LRLAP0_bit at LCDRL.B6;
    const register unsigned short int LRLAP1 = 7;
    sbit  LRLAP1_bit at LCDRL.B7;

    // LCDREF bits
    const register unsigned short int VLCD1PE = 0;
    sbit  VLCD1PE_bit at LCDREF.B0;
    const register unsigned short int VLCD2PE = 1;
    sbit  VLCD2PE_bit at LCDREF.B1;
    const register unsigned short int VLCD3PE = 2;
    sbit  VLCD3PE_bit at LCDREF.B2;
    const register unsigned short int LCDIRE = 7;
    sbit  LCDIRE_bit at LCDREF.B7;
    const register unsigned short int LCDCST0 = 3;
    sbit  LCDCST0_bit at LCDREF.B3;
    const register unsigned short int LCDCST1 = 4;
    sbit  LCDCST1_bit at LCDREF.B4;
    const register unsigned short int LCDCST2 = 5;
    sbit  LCDCST2_bit at LCDREF.B5;

    // LCDREG bits
    const register unsigned short int MODE13 = 2;
    sbit  MODE13_bit at LCDREG.B2;
    const register unsigned short int CPEN = 7;
    sbit  CPEN_bit at LCDREG.B7;
    const register unsigned short int CLKSEL0 = 0;
    sbit  CLKSEL0_bit at LCDREG.B0;
    const register unsigned short int CLKSEL1 = 1;
    sbit  CLKSEL1_bit at LCDREG.B1;
    const register unsigned short int BIAS0 = 3;
    sbit  BIAS0_bit at LCDREG.B3;
    const register unsigned short int BIAS1 = 4;
    sbit  BIAS1_bit at LCDREG.B4;
    const register unsigned short int BIAS2 = 5;
    sbit  BIAS2_bit at LCDREG.B5;

    // LCDCON bits
    const register unsigned short int WERR = 5;
    sbit  WERR_bit at LCDCON.B5;
    const register unsigned short int SLPEN = 6;
    sbit  SLPEN_bit at LCDCON.B6;
    const register unsigned short int LCDEN = 7;
    sbit  LCDEN_bit at LCDCON.B7;
    const register unsigned short int LMUX0 = 0;
    sbit  LMUX0_bit at LCDCON.B0;
    const register unsigned short int LMUX1 = 1;
    sbit  LMUX1_bit at LCDCON.B1;
    const register unsigned short int LMUX2 = 2;
    sbit  LMUX2_bit at LCDCON.B2;
    const register unsigned short int CS0 = 3;
    sbit  CS0_bit at LCDCON.B3;
    const register unsigned short int CS1 = 4;
    sbit  CS1_bit at LCDCON.B4;

    // LCDPS bits
    const register unsigned short int WA = 4;
    sbit  WA_bit at LCDPS.B4;
    const register unsigned short int LCDA = 5;
    sbit  LCDA_bit at LCDPS.B5;
    const register unsigned short int BIASMD = 6;
    sbit  BIASMD_bit at LCDPS.B6;
    const register unsigned short int WFT = 7;
    sbit  WFT_bit at LCDPS.B7;
    const register unsigned short int LP0 = 0;
    sbit  LP0_bit at LCDPS.B0;
    const register unsigned short int LP1 = 1;
    sbit  LP1_bit at LCDPS.B1;
    const register unsigned short int LP2 = 2;
    sbit  LP2_bit at LCDPS.B2;
    const register unsigned short int LP3 = 3;
    sbit  LP3_bit at LCDPS.B3;

    // REFO2CON3 bits
    const register unsigned short int RODIV8 = 0;
    sbit  RODIV8_bit at REFO2CON3.B0;
    const register unsigned short int RODIV9 = 1;
    sbit  RODIV9_bit at REFO2CON3.B1;
    const register unsigned short int RODIV10 = 2;
    sbit  RODIV10_bit at REFO2CON3.B2;
    const register unsigned short int RODIV11 = 3;
    sbit  RODIV11_bit at REFO2CON3.B3;
    const register unsigned short int RODIV12 = 4;
    sbit  RODIV12_bit at REFO2CON3.B4;
    const register unsigned short int RODIV13 = 5;
    sbit  RODIV13_bit at REFO2CON3.B5;
    const register unsigned short int RODIV14 = 6;
    sbit  RODIV14_bit at REFO2CON3.B6;

    // REFO2CON2 bits
    const register unsigned short int RODIV0 = 0;
    sbit  RODIV0_bit at REFO2CON2.B0;
    const register unsigned short int RODIV1 = 1;
    sbit  RODIV1_bit at REFO2CON2.B1;
    const register unsigned short int RODIV2 = 2;
    sbit  RODIV2_bit at REFO2CON2.B2;
    const register unsigned short int RODIV3 = 3;
    sbit  RODIV3_bit at REFO2CON2.B3;
    const register unsigned short int RODIV4 = 4;
    sbit  RODIV4_bit at REFO2CON2.B4;
    const register unsigned short int RODIV5 = 5;
    sbit  RODIV5_bit at REFO2CON2.B5;
    const register unsigned short int RODIV6 = 6;
    sbit  RODIV6_bit at REFO2CON2.B6;
    const register unsigned short int RODIV7 = 7;
    sbit  RODIV7_bit at REFO2CON2.B7;

    // REFO2CON1 bits
    const register unsigned short int ROSEL0 = 0;
    sbit  ROSEL0_bit at REFO2CON1.B0;
    const register unsigned short int ROSEL1 = 1;
    sbit  ROSEL1_bit at REFO2CON1.B1;
    const register unsigned short int ROSEL2 = 2;
    sbit  ROSEL2_bit at REFO2CON1.B2;
    const register unsigned short int ROSEL3 = 3;
    sbit  ROSEL3_bit at REFO2CON1.B3;

    // REFO2CON bits
    const register unsigned short int ACTIVE = 0;
    sbit  ACTIVE_bit at REFO2CON.B0;
    const register unsigned short int DIVSWEN = 1;
    sbit  DIVSWEN_bit at REFO2CON.B1;
    const register unsigned short int ROSSLP = 3;
    sbit  ROSSLP_bit at REFO2CON.B3;
    const register unsigned short int ROOE = 4;
    sbit  ROOE_bit at REFO2CON.B4;
    const register unsigned short int ROSIDL = 5;
    sbit  ROSIDL_bit at REFO2CON.B5;
    const register unsigned short int ROON = 7;
    sbit  ROON_bit at REFO2CON.B7;

    // REFO1CON3 bits
    sbit  RODIV8_REFO1CON3_bit at REFO1CON3.B0;
    sbit  RODIV9_REFO1CON3_bit at REFO1CON3.B1;
    sbit  RODIV10_REFO1CON3_bit at REFO1CON3.B2;
    sbit  RODIV11_REFO1CON3_bit at REFO1CON3.B3;
    sbit  RODIV12_REFO1CON3_bit at REFO1CON3.B4;
    sbit  RODIV13_REFO1CON3_bit at REFO1CON3.B5;
    sbit  RODIV14_REFO1CON3_bit at REFO1CON3.B6;

    // REFO1CON2 bits
    sbit  RODIV0_REFO1CON2_bit at REFO1CON2.B0;
    sbit  RODIV1_REFO1CON2_bit at REFO1CON2.B1;
    sbit  RODIV2_REFO1CON2_bit at REFO1CON2.B2;
    sbit  RODIV3_REFO1CON2_bit at REFO1CON2.B3;
    sbit  RODIV4_REFO1CON2_bit at REFO1CON2.B4;
    sbit  RODIV5_REFO1CON2_bit at REFO1CON2.B5;
    sbit  RODIV6_REFO1CON2_bit at REFO1CON2.B6;
    sbit  RODIV7_REFO1CON2_bit at REFO1CON2.B7;

    // REFO1CON1 bits
    sbit  ROSEL0_REFO1CON1_bit at REFO1CON1.B0;
    sbit  ROSEL1_REFO1CON1_bit at REFO1CON1.B1;
    sbit  ROSEL2_REFO1CON1_bit at REFO1CON1.B2;
    sbit  ROSEL3_REFO1CON1_bit at REFO1CON1.B3;

    // REFO1CON bits
    sbit  ACTIVE_REFO1CON_bit at REFO1CON.B0;
    sbit  DIVSWEN_REFO1CON_bit at REFO1CON.B1;
    sbit  ROSSLP_REFO1CON_bit at REFO1CON.B3;
    sbit  ROOE_REFO1CON_bit at REFO1CON.B4;
    sbit  ROSIDL_REFO1CON_bit at REFO1CON.B5;
    sbit  ROON_REFO1CON_bit at REFO1CON.B7;

    // MEMCON bits
    const register unsigned short int EBDIS = 7;
    sbit  EBDIS_bit at MEMCON.B7;
    const register unsigned short int WM0_MEMCON = 0;
    sbit  WM0_MEMCON_bit at MEMCON.B0;
    const register unsigned short int WM1_MEMCON = 1;
    sbit  WM1_MEMCON_bit at MEMCON.B1;
    const register unsigned short int WAIT0 = 4;
    sbit  WAIT0_bit at MEMCON.B4;
    const register unsigned short int WAIT1 = 5;
    sbit  WAIT1_bit at MEMCON.B5;

    // Alternative bit function
    const register unsigned short int RL0 = 0;
    sbit  RL0_bit at PORTL.B0;

    // Alternative bit function
    const register unsigned short int RL1 = 1;
    sbit  RL1_bit at PORTL.B1;

    // Alternative bit function
    const register unsigned short int RL2 = 2;
    sbit  RL2_bit at PORTL.B2;

    // Alternative bit function
    const register unsigned short int RL3 = 3;
    sbit  RL3_bit at PORTL.B3;

    // Alternative bit function
    const register unsigned short int RL4 = 4;
    sbit  RL4_bit at PORTL.B4;

    // Alternative bit function
    const register unsigned short int RL5 = 5;
    sbit  RL5_bit at PORTL.B5;

    // Alternative bit function
    const register unsigned short int RL6 = 6;
    sbit  RL6_bit at PORTL.B6;

    // Alternative bit function
    const register unsigned short int RL7 = 7;
    sbit  RL7_bit at PORTL.B7;

    // LATL bits
    const register unsigned short int LATL0 = 0;
    sbit  LATL0_bit at LATL.B0;
    const register unsigned short int LATL1 = 1;
    sbit  LATL1_bit at LATL.B1;
    const register unsigned short int LATL2 = 2;
    sbit  LATL2_bit at LATL.B2;
    const register unsigned short int LATL3 = 3;
    sbit  LATL3_bit at LATL.B3;
    const register unsigned short int LATL4 = 4;
    sbit  LATL4_bit at LATL.B4;
    const register unsigned short int LATL5 = 5;
    sbit  LATL5_bit at LATL.B5;
    const register unsigned short int LATL6 = 6;
    sbit  LATL6_bit at LATL.B6;
    const register unsigned short int LATL7 = 7;
    sbit  LATL7_bit at LATL.B7;

    // LATK bits
    const register unsigned short int LATK0 = 0;
    sbit  LATK0_bit at LATK.B0;
    const register unsigned short int LATK1 = 1;
    sbit  LATK1_bit at LATK.B1;
    const register unsigned short int LATK2 = 2;
    sbit  LATK2_bit at LATK.B2;
    const register unsigned short int LATK3 = 3;
    sbit  LATK3_bit at LATK.B3;
    const register unsigned short int LATK4 = 4;
    sbit  LATK4_bit at LATK.B4;
    const register unsigned short int LATK5 = 5;
    sbit  LATK5_bit at LATK.B5;
    const register unsigned short int LATK6 = 6;
    sbit  LATK6_bit at LATK.B6;
    const register unsigned short int LATK7 = 7;
    sbit  LATK7_bit at LATK.B7;

    // ODCON2 bits
    const register unsigned short int ECCP3OD = 0;
    sbit  ECCP3OD_bit at ODCON2.B0;
    const register unsigned short int CCP4OD = 1;
    sbit  CCP4OD_bit at ODCON2.B1;
    const register unsigned short int CCP5OD = 2;
    sbit  CCP5OD_bit at ODCON2.B2;
    const register unsigned short int CCP6OD = 3;
    sbit  CCP6OD_bit at ODCON2.B3;
    const register unsigned short int CCP7OD = 4;
    sbit  CCP7OD_bit at ODCON2.B4;
    const register unsigned short int CCP8OD = 5;
    sbit  CCP8OD_bit at ODCON2.B5;
    const register unsigned short int CCP9OD = 6;
    sbit  CCP9OD_bit at ODCON2.B6;
    const register unsigned short int CCP10OD = 7;
    sbit  CCP10OD_bit at ODCON2.B7;

    // ODCON1 bits
    const register unsigned short int SSP1OD = 0;
    sbit  SSP1OD_bit at ODCON1.B0;
    const register unsigned short int SSP2OD = 1;
    sbit  SSP2OD_bit at ODCON1.B1;
    const register unsigned short int USART1OD = 2;
    sbit  USART1OD_bit at ODCON1.B2;
    const register unsigned short int USART2OD = 3;
    sbit  USART2OD_bit at ODCON1.B3;
    const register unsigned short int USART3OD = 4;
    sbit  USART3OD_bit at ODCON1.B4;
    const register unsigned short int USART4OD = 5;
    sbit  USART4OD_bit at ODCON1.B5;
    const register unsigned short int ECCP1OD = 6;
    sbit  ECCP1OD_bit at ODCON1.B6;
    const register unsigned short int ECCP2OD = 7;
    sbit  ECCP2OD_bit at ODCON1.B7;

    // MDCARL bits
    const register unsigned short int MDCLSYNC = 5;
    sbit  MDCLSYNC_bit at MDCARL.B5;
    const register unsigned short int MDCLPOL = 6;
    sbit  MDCLPOL_bit at MDCARL.B6;
    const register unsigned short int MDCLODIS = 7;
    sbit  MDCLODIS_bit at MDCARL.B7;
    const register unsigned short int MDCL0 = 0;
    sbit  MDCL0_bit at MDCARL.B0;
    const register unsigned short int MDCL1 = 1;
    sbit  MDCL1_bit at MDCARL.B1;
    const register unsigned short int MDCL2 = 2;
    sbit  MDCL2_bit at MDCARL.B2;
    const register unsigned short int MDCL3 = 3;
    sbit  MDCL3_bit at MDCARL.B3;

    // MDCARH bits
    const register unsigned short int MDCHSYNC = 5;
    sbit  MDCHSYNC_bit at MDCARH.B5;
    const register unsigned short int MDCHPOL = 6;
    sbit  MDCHPOL_bit at MDCARH.B6;
    const register unsigned short int MDCHODIS = 7;
    sbit  MDCHODIS_bit at MDCARH.B7;
    const register unsigned short int MDCH0 = 0;
    sbit  MDCH0_bit at MDCARH.B0;
    const register unsigned short int MDCH1 = 1;
    sbit  MDCH1_bit at MDCARH.B1;
    const register unsigned short int MDCH2 = 2;
    sbit  MDCH2_bit at MDCARH.B2;
    const register unsigned short int MDCH3 = 3;
    sbit  MDCH3_bit at MDCARH.B3;

    // MDSRC bits
    const register unsigned short int MDSODIS = 7;
    sbit  MDSODIS_bit at MDSRC.B7;
    const register unsigned short int MDSRC0 = 0;
    sbit  MDSRC0_bit at MDSRC.B0;
    const register unsigned short int MDSRC1 = 1;
    sbit  MDSRC1_bit at MDSRC.B1;
    const register unsigned short int MDSRC2 = 2;
    sbit  MDSRC2_bit at MDSRC.B2;
    const register unsigned short int MDSRC3 = 3;
    sbit  MDSRC3_bit at MDSRC.B3;

    // MDCON bits
    const register unsigned short int MDBIT = 0;
    sbit  MDBIT_bit at MDCON.B0;
    const register unsigned short int MDO = 3;
    sbit  MDO_bit at MDCON.B3;
    const register unsigned short int MDOPOL = 4;
    sbit  MDOPOL_bit at MDCON.B4;
    const register unsigned short int MDSLR = 5;
    sbit  MDSLR_bit at MDCON.B5;
    const register unsigned short int MDOE = 6;
    sbit  MDOE_bit at MDCON.B6;
    const register unsigned short int MDEN = 7;
    sbit  MDEN_bit at MDCON.B7;

    // PMD4 bits
    const register unsigned short int EMBMD = 0;
    sbit  EMBMD_bit at PMD4.B0;
    const register unsigned short int LVDMD = 2;
    sbit  LVDMD_bit at PMD4.B2;
    const register unsigned short int IOCMD = 3;
    sbit  IOCMD_bit at PMD4.B3;
    const register unsigned short int USBMD = 4;
    sbit  USBMD_bit at PMD4.B4;
    const register unsigned short int CMP3MD = 5;
    sbit  CMP3MD_bit at PMD4.B5;
    const register unsigned short int CMP2MD = 6;
    sbit  CMP2MD_bit at PMD4.B6;
    const register unsigned short int CMP1MD = 7;
    sbit  CMP1MD_bit at PMD4.B7;

    // PMD3 bits
    const register unsigned short int REFO2MD = 0;
    sbit  REFO2MD_bit at PMD3.B0;
    const register unsigned short int REFO1MD = 1;
    sbit  REFO1MD_bit at PMD3.B1;
    const register unsigned short int PSPMD = 2;
    sbit  PSPMD_bit at PMD3.B2;
    const register unsigned short int LCDMD = 3;
    sbit  LCDMD_bit at PMD3.B3;
    const register unsigned short int RTCCMD = 4;
    sbit  RTCCMD_bit at PMD3.B4;
    const register unsigned short int ADCMD = 5;
    sbit  ADCMD_bit at PMD3.B5;
    const register unsigned short int CTMUMD = 6;
    sbit  CTMUMD_bit at PMD3.B6;
    const register unsigned short int MODMD = 7;
    sbit  MODMD_bit at PMD3.B7;
    const register unsigned short int TXMMD = 7;
    sbit  TXMMD_bit at PMD3.B7;

    // PMD2 bits
    const register unsigned short int TMR0MD = 0;
    sbit  TMR0MD_bit at PMD2.B0;
    const register unsigned short int TMR1MD = 1;
    sbit  TMR1MD_bit at PMD2.B1;
    const register unsigned short int TMR2MD = 2;
    sbit  TMR2MD_bit at PMD2.B2;
    const register unsigned short int TMR3MD = 3;
    sbit  TMR3MD_bit at PMD2.B3;
    const register unsigned short int TMR4MD = 4;
    sbit  TMR4MD_bit at PMD2.B4;
    const register unsigned short int TMR5MD = 5;
    sbit  TMR5MD_bit at PMD2.B5;
    const register unsigned short int TMR6MD = 6;
    sbit  TMR6MD_bit at PMD2.B6;
    const register unsigned short int TMR8MD = 7;
    sbit  TMR8MD_bit at PMD2.B7;

    // PMD1 bits
    const register unsigned short int SSP1MD = 0;
    sbit  SSP1MD_bit at PMD1.B0;
    const register unsigned short int SSP2MD = 1;
    sbit  SSP2MD_bit at PMD1.B1;
    const register unsigned short int UART1MD = 2;
    sbit  UART1MD_bit at PMD1.B2;
    const register unsigned short int UART2MD = 3;
    sbit  UART2MD_bit at PMD1.B3;
    const register unsigned short int UART3MD = 4;
    sbit  UART3MD_bit at PMD1.B4;
    const register unsigned short int UART4MD = 5;
    sbit  UART4MD_bit at PMD1.B5;
    const register unsigned short int ECCP1MD = 6;
    sbit  ECCP1MD_bit at PMD1.B6;
    const register unsigned short int ECCP2MD = 7;
    sbit  ECCP2MD_bit at PMD1.B7;

    // PMD0 bits
    const register unsigned short int ECCP3MD = 0;
    sbit  ECCP3MD_bit at PMD0.B0;
    const register unsigned short int CCP4MD = 1;
    sbit  CCP4MD_bit at PMD0.B1;
    const register unsigned short int CCP5MD = 2;
    sbit  CCP5MD_bit at PMD0.B2;
    const register unsigned short int CCP6MD = 3;
    sbit  CCP6MD_bit at PMD0.B3;
    const register unsigned short int CCP7MD = 4;
    sbit  CCP7MD_bit at PMD0.B4;
    const register unsigned short int CCP8MD = 5;
    sbit  CCP8MD_bit at PMD0.B5;
    const register unsigned short int CCP9MD = 6;
    sbit  CCP9MD_bit at PMD0.B6;
    const register unsigned short int CCP10MD = 7;
    sbit  CCP10MD_bit at PMD0.B7;

    // CTMUCON4 bits
    const register unsigned short int EDG1STAT = 0;
    sbit  EDG1STAT_bit at CTMUCON4.B0;
    const register unsigned short int EDG2STAT = 1;
    sbit  EDG2STAT_bit at CTMUCON4.B1;
    const register unsigned short int EDG1POL = 6;
    sbit  EDG1POL_bit at CTMUCON4.B6;
    const register unsigned short int EDG1EN = 7;
    sbit  EDG1EN_bit at CTMUCON4.B7;
    const register unsigned short int EDG1SEL0 = 2;
    sbit  EDG1SEL0_bit at CTMUCON4.B2;
    const register unsigned short int EDG1SEL1 = 3;
    sbit  EDG1SEL1_bit at CTMUCON4.B3;
    const register unsigned short int EDG1SEL2 = 4;
    sbit  EDG1SEL2_bit at CTMUCON4.B4;
    const register unsigned short int EDG1SEL3 = 5;
    sbit  EDG1SEL3_bit at CTMUCON4.B5;

    // CTMUCON3 bits
    const register unsigned short int EDG2POL = 6;
    sbit  EDG2POL_bit at CTMUCON3.B6;
    const register unsigned short int EDG2EN = 7;
    sbit  EDG2EN_bit at CTMUCON3.B7;
    const register unsigned short int EDG2SEL0 = 2;
    sbit  EDG2SEL0_bit at CTMUCON3.B2;
    const register unsigned short int EDG2SEL1 = 3;
    sbit  EDG2SEL1_bit at CTMUCON3.B3;
    const register unsigned short int EDG2SEL2 = 4;
    sbit  EDG2SEL2_bit at CTMUCON3.B4;
    const register unsigned short int EDG2SEL3 = 5;
    sbit  EDG2SEL3_bit at CTMUCON3.B5;

    // CTMUCON2 bits
    const register unsigned short int IRNG0 = 0;
    sbit  IRNG0_bit at CTMUCON2.B0;
    const register unsigned short int IRNG1 = 1;
    sbit  IRNG1_bit at CTMUCON2.B1;
    const register unsigned short int ITRIM0 = 2;
    sbit  ITRIM0_bit at CTMUCON2.B2;
    const register unsigned short int ITRIM1 = 3;
    sbit  ITRIM1_bit at CTMUCON2.B3;
    const register unsigned short int ITRIM2 = 4;
    sbit  ITRIM2_bit at CTMUCON2.B4;
    const register unsigned short int ITRIM3 = 5;
    sbit  ITRIM3_bit at CTMUCON2.B5;
    const register unsigned short int ITRIM4 = 6;
    sbit  ITRIM4_bit at CTMUCON2.B6;
    const register unsigned short int ITRIM5 = 7;
    sbit  ITRIM5_bit at CTMUCON2.B7;

    // CTMUCON1 bits
    const register unsigned short int CTTRIG = 0;
    sbit  CTTRIG_bit at CTMUCON1.B0;
    const register unsigned short int IDISSEN = 1;
    sbit  IDISSEN_bit at CTMUCON1.B1;
    const register unsigned short int EDGSEQEN = 2;
    sbit  EDGSEQEN_bit at CTMUCON1.B2;
    const register unsigned short int EDGEN = 3;
    sbit  EDGEN_bit at CTMUCON1.B3;
    const register unsigned short int TGEN = 4;
    sbit  TGEN_bit at CTMUCON1.B4;
    const register unsigned short int CTMUSIDL = 5;
    sbit  CTMUSIDL_bit at CTMUCON1.B5;
    const register unsigned short int CTMUEN = 7;
    sbit  CTMUEN_bit at CTMUCON1.B7;

    // SPBRG4 bits
    const register unsigned short int BRG0 = 0;
    sbit  BRG0_bit at SPBRG4.B0;
    const register unsigned short int BRG1 = 1;
    sbit  BRG1_bit at SPBRG4.B1;
    const register unsigned short int BRG2 = 2;
    sbit  BRG2_bit at SPBRG4.B2;
    const register unsigned short int BRG3 = 3;
    sbit  BRG3_bit at SPBRG4.B3;
    const register unsigned short int BRG4 = 4;
    sbit  BRG4_bit at SPBRG4.B4;
    const register unsigned short int BRG5 = 5;
    sbit  BRG5_bit at SPBRG4.B5;
    const register unsigned short int BRG6 = 6;
    sbit  BRG6_bit at SPBRG4.B6;
    const register unsigned short int BRG7 = 7;
    sbit  BRG7_bit at SPBRG4.B7;

    // SPBRGH4 bits
    const register unsigned short int BRG8 = 0;
    sbit  BRG8_bit at SPBRGH4.B0;
    const register unsigned short int BRG9 = 1;
    sbit  BRG9_bit at SPBRGH4.B1;
    const register unsigned short int BRG10 = 2;
    sbit  BRG10_bit at SPBRGH4.B2;
    const register unsigned short int BRG11 = 3;
    sbit  BRG11_bit at SPBRGH4.B3;
    const register unsigned short int BRG12 = 4;
    sbit  BRG12_bit at SPBRGH4.B4;
    const register unsigned short int BRG13 = 5;
    sbit  BRG13_bit at SPBRGH4.B5;
    const register unsigned short int BRG14 = 6;
    sbit  BRG14_bit at SPBRGH4.B6;
    const register unsigned short int BRG15 = 7;
    sbit  BRG15_bit at SPBRGH4.B7;

    // BAUDCON4 bits
    const register unsigned short int ABDEN = 0;
    sbit  ABDEN_bit at BAUDCON4.B0;
    const register unsigned short int WUE = 1;
    sbit  WUE_bit at BAUDCON4.B1;
    const register unsigned short int IREN = 2;
    sbit  IREN_bit at BAUDCON4.B2;
    const register unsigned short int BRG16 = 3;
    sbit  BRG16_bit at BAUDCON4.B3;
    const register unsigned short int TXCKP = 4;
    sbit  TXCKP_bit at BAUDCON4.B4;
    const register unsigned short int RXDTP = 5;
    sbit  RXDTP_bit at BAUDCON4.B5;
    const register unsigned short int RCIDL = 6;
    sbit  RCIDL_bit at BAUDCON4.B6;
    const register unsigned short int ABDOVF = 7;
    sbit  ABDOVF_bit at BAUDCON4.B7;

    // TXSTA4 bits
    const register unsigned short int TX9D = 0;
    sbit  TX9D_bit at TXSTA4.B0;
    const register unsigned short int TRMT = 1;
    sbit  TRMT_bit at TXSTA4.B1;
    const register unsigned short int BRGH = 2;
    sbit  BRGH_bit at TXSTA4.B2;
    const register unsigned short int SENDB = 3;
    sbit  SENDB_bit at TXSTA4.B3;
    const register unsigned short int SYNC = 4;
    sbit  SYNC_bit at TXSTA4.B4;
    const register unsigned short int TXEN = 5;
    sbit  TXEN_bit at TXSTA4.B5;
    const register unsigned short int TX9 = 6;
    sbit  TX9_bit at TXSTA4.B6;
    const register unsigned short int CSRC = 7;
    sbit  CSRC_bit at TXSTA4.B7;

    // RCSTA4 bits
    const register unsigned short int RX9D = 0;
    sbit  RX9D_bit at RCSTA4.B0;
    const register unsigned short int OERR = 1;
    sbit  OERR_bit at RCSTA4.B1;
    const register unsigned short int FERR = 2;
    sbit  FERR_bit at RCSTA4.B2;
    const register unsigned short int ADDEN = 3;
    sbit  ADDEN_bit at RCSTA4.B3;
    const register unsigned short int CREN = 4;
    sbit  CREN_bit at RCSTA4.B4;
    const register unsigned short int SREN = 5;
    sbit  SREN_bit at RCSTA4.B5;
    const register unsigned short int RX9 = 6;
    sbit  RX9_bit at RCSTA4.B6;
    const register unsigned short int SPEN = 7;
    sbit  SPEN_bit at RCSTA4.B7;

    // DMACON2 bits
    const register unsigned short int INTLVL0 = 0;
    sbit  INTLVL0_bit at DMACON2.B0;
    const register unsigned short int INTLVL1 = 1;
    sbit  INTLVL1_bit at DMACON2.B1;
    const register unsigned short int INTLVL2 = 2;
    sbit  INTLVL2_bit at DMACON2.B2;
    const register unsigned short int INTLVL3 = 3;
    sbit  INTLVL3_bit at DMACON2.B3;
    const register unsigned short int DLYCYC0 = 4;
    sbit  DLYCYC0_bit at DMACON2.B4;
    const register unsigned short int DLYCYC1 = 5;
    sbit  DLYCYC1_bit at DMACON2.B5;
    const register unsigned short int DLYCYC2 = 6;
    sbit  DLYCYC2_bit at DMACON2.B6;
    const register unsigned short int DLYCYC3 = 7;
    sbit  DLYCYC3_bit at DMACON2.B7;

    // ANCFG bits
    const register unsigned short int VBGEN = 0;
    sbit  VBGEN_bit at ANCFG.B0;
    const register unsigned short int VBG2EN = 1;
    sbit  VBG2EN_bit at ANCFG.B1;
    const register unsigned short int VBG6EN = 2;
    sbit  VBG6EN_bit at ANCFG.B2;

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

    // CCP7CON bits
    const register unsigned short int CCP7M0 = 0;
    sbit  CCP7M0_bit at CCP7CON.B0;
    const register unsigned short int CCP7M1 = 1;
    sbit  CCP7M1_bit at CCP7CON.B1;
    const register unsigned short int CCP7M2 = 2;
    sbit  CCP7M2_bit at CCP7CON.B2;
    const register unsigned short int CCP7M3 = 3;
    sbit  CCP7M3_bit at CCP7CON.B3;
    const register unsigned short int DC7B0 = 4;
    sbit  DC7B0_bit at CCP7CON.B4;
    const register unsigned short int DC7B1 = 5;
    sbit  DC7B1_bit at CCP7CON.B5;
    const register unsigned short int CCP7Y = 4;
    sbit  CCP7Y_bit at CCP7CON.B4;
    const register unsigned short int CCP7X = 5;
    sbit  CCP7X_bit at CCP7CON.B5;

    // CCP6CON bits
    const register unsigned short int CCP6M0 = 0;
    sbit  CCP6M0_bit at CCP6CON.B0;
    const register unsigned short int CCP6M1 = 1;
    sbit  CCP6M1_bit at CCP6CON.B1;
    const register unsigned short int CCP6M2 = 2;
    sbit  CCP6M2_bit at CCP6CON.B2;
    const register unsigned short int CCP6M3 = 3;
    sbit  CCP6M3_bit at CCP6CON.B3;
    const register unsigned short int DC6B0 = 4;
    sbit  DC6B0_bit at CCP6CON.B4;
    const register unsigned short int DC6B1 = 5;
    sbit  DC6B1_bit at CCP6CON.B5;
    const register unsigned short int CCP6Y = 4;
    sbit  CCP6Y_bit at CCP6CON.B4;
    const register unsigned short int CCP6X = 5;
    sbit  CCP6X_bit at CCP6CON.B5;

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
    const register unsigned short int CCP5Y = 4;
    sbit  CCP5Y_bit at CCP5CON.B4;
    const register unsigned short int CCP5X = 5;
    sbit  CCP5X_bit at CCP5CON.B5;

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
    const register unsigned short int CCP4Y = 4;
    sbit  CCP4Y_bit at CCP4CON.B4;
    const register unsigned short int CCP4X = 5;
    sbit  CCP4X_bit at CCP4CON.B5;

    // T5GCON bits
    const register unsigned short int T5GVAL = 2;
    sbit  T5GVAL_bit at T5GCON.B2;
    const register unsigned short int T5GGO_NOT_T5DONE = 3;
    sbit  T5GGO_NOT_T5DONE_bit at T5GCON.B3;
    const register unsigned short int T5GSPM = 4;
    sbit  T5GSPM_bit at T5GCON.B4;
    const register unsigned short int T5GTM = 5;
    sbit  T5GTM_bit at T5GCON.B5;
    const register unsigned short int T5GPOL = 6;
    sbit  T5GPOL_bit at T5GCON.B6;
    const register unsigned short int TMR5GE = 7;
    sbit  TMR5GE_bit at T5GCON.B7;
    const register unsigned short int T5GSS0 = 0;
    sbit  T5GSS0_bit at T5GCON.B0;
    const register unsigned short int T5GSS1 = 1;
    sbit  T5GSS1_bit at T5GCON.B1;
    const register unsigned short int T5GGO = 3;
    sbit  T5GGO_bit at T5GCON.B3;
    const register unsigned short int NOT_T5DONE = 3;
    sbit  NOT_T5DONE_bit at T5GCON.B3;

    // T5CON bits
    const register unsigned short int TMR5ON = 0;
    sbit  TMR5ON_bit at T5CON.B0;
    const register unsigned short int RD16 = 1;
    sbit  RD16_bit at T5CON.B1;
    const register unsigned short int NOT_T5SYNC = 2;
    sbit  NOT_T5SYNC_bit at T5CON.B2;
    const register unsigned short int SOSCEN = 3;
    sbit  SOSCEN_bit at T5CON.B3;
    const register unsigned short int T5CKPS0 = 4;
    sbit  T5CKPS0_bit at T5CON.B4;
    const register unsigned short int T5CKPS1 = 5;
    sbit  T5CKPS1_bit at T5CON.B5;
    const register unsigned short int TMR5CS0 = 6;
    sbit  TMR5CS0_bit at T5CON.B6;
    const register unsigned short int TMR5CS1 = 7;
    sbit  TMR5CS1_bit at T5CON.B7;

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
    const register unsigned short int I2C_DAT = 5;
    sbit  I2C_DAT_bit at SSP2STAT.B5;

    // PSTR3CON bits
    const register unsigned short int STRA = 0;
    sbit  STRA_bit at PSTR3CON.B0;
    const register unsigned short int STRB = 1;
    sbit  STRB_bit at PSTR3CON.B1;
    const register unsigned short int STRC = 2;
    sbit  STRC_bit at PSTR3CON.B2;
    const register unsigned short int STRD = 3;
    sbit  STRD_bit at PSTR3CON.B3;
    const register unsigned short int STRSYNC = 4;
    sbit  STRSYNC_bit at PSTR3CON.B4;
    const register unsigned short int CMPL0 = 6;
    sbit  CMPL0_bit at PSTR3CON.B6;
    const register unsigned short int CMPL1 = 7;
    sbit  CMPL1_bit at PSTR3CON.B7;

    // PSTR2CON bits
    sbit  STRA_PSTR2CON_bit at PSTR2CON.B0;
    sbit  STRB_PSTR2CON_bit at PSTR2CON.B1;
    sbit  STRC_PSTR2CON_bit at PSTR2CON.B2;
    sbit  STRD_PSTR2CON_bit at PSTR2CON.B3;
    sbit  STRSYNC_PSTR2CON_bit at PSTR2CON.B4;
    sbit  CMPL0_PSTR2CON_bit at PSTR2CON.B6;
    sbit  CMPL1_PSTR2CON_bit at PSTR2CON.B7;

    // SPBRG2 bits
    sbit  BRG0_SPBRG2_bit at SPBRG2.B0;
    sbit  BRG1_SPBRG2_bit at SPBRG2.B1;
    sbit  BRG2_SPBRG2_bit at SPBRG2.B2;
    sbit  BRG3_SPBRG2_bit at SPBRG2.B3;
    sbit  BRG4_SPBRG2_bit at SPBRG2.B4;
    sbit  BRG5_SPBRG2_bit at SPBRG2.B5;
    sbit  BRG6_SPBRG2_bit at SPBRG2.B6;
    sbit  BRG7_SPBRG2_bit at SPBRG2.B7;

    // SPBRGH2 bits
    sbit  BRG8_SPBRGH2_bit at SPBRGH2.B0;
    sbit  BRG9_SPBRGH2_bit at SPBRGH2.B1;
    sbit  BRG10_SPBRGH2_bit at SPBRGH2.B2;
    sbit  BRG11_SPBRGH2_bit at SPBRGH2.B3;
    sbit  BRG12_SPBRGH2_bit at SPBRGH2.B4;
    sbit  BRG13_SPBRGH2_bit at SPBRGH2.B5;
    sbit  BRG14_SPBRGH2_bit at SPBRGH2.B6;
    sbit  BRG15_SPBRGH2_bit at SPBRGH2.B7;

    // DSWAKEH bits
    const register unsigned short int DSINT0 = 0;
    sbit  DSINT0_bit at DSWAKEH.B0;

    // DSWAKEL bits
    const register unsigned short int DSPOR = 0;
    sbit  DSPOR_bit at DSWAKEL.B0;
    const register unsigned short int DSICD = 1;
    sbit  DSICD_bit at DSWAKEL.B1;
    const register unsigned short int DSMCLR = 2;
    sbit  DSMCLR_bit at DSWAKEL.B2;
    const register unsigned short int DSRTC = 3;
    sbit  DSRTC_bit at DSWAKEL.B3;
    const register unsigned short int DSWDT = 4;
    sbit  DSWDT_bit at DSWAKEL.B4;
    const register unsigned short int DSULP = 5;
    sbit  DSULP_bit at DSWAKEL.B5;
    const register unsigned short int BOR_DSWAKEL = 6;
    sbit  BOR_DSWAKEL_bit at DSWAKEL.B6;
    const register unsigned short int DSFLT = 7;
    sbit  DSFLT_bit at DSWAKEL.B7;

    // DSCONH bits
    const register unsigned short int RTCWDIS = 0;
    sbit  RTCWDIS_bit at DSCONH.B0;
    const register unsigned short int DSEN = 7;
    sbit  DSEN_bit at DSCONH.B7;

    // DSCONL bits
    const register unsigned short int RELEASE = 0;
    sbit  RELEASE_bit at DSCONL.B0;
    const register unsigned short int DSBOR = 1;
    sbit  DSBOR_bit at DSCONL.B1;
    const register unsigned short int ULPWDIS = 2;
    sbit  ULPWDIS_bit at DSCONL.B2;

    // SPBRG3 bits
    sbit  BRG0_SPBRG3_bit at SPBRG3.B0;
    sbit  BRG1_SPBRG3_bit at SPBRG3.B1;
    sbit  BRG2_SPBRG3_bit at SPBRG3.B2;
    sbit  BRG3_SPBRG3_bit at SPBRG3.B3;
    sbit  BRG4_SPBRG3_bit at SPBRG3.B4;
    sbit  BRG5_SPBRG3_bit at SPBRG3.B5;
    sbit  BRG6_SPBRG3_bit at SPBRG3.B6;
    sbit  BRG7_SPBRG3_bit at SPBRG3.B7;

    // SPBRGH3 bits
    sbit  BRG8_SPBRGH3_bit at SPBRGH3.B0;
    sbit  BRG9_SPBRGH3_bit at SPBRGH3.B1;
    sbit  BRG10_SPBRGH3_bit at SPBRGH3.B2;
    sbit  BRG11_SPBRGH3_bit at SPBRGH3.B3;
    sbit  BRG12_SPBRGH3_bit at SPBRGH3.B4;
    sbit  BRG13_SPBRGH3_bit at SPBRGH3.B5;
    sbit  BRG14_SPBRGH3_bit at SPBRGH3.B6;
    sbit  BRG15_SPBRGH3_bit at SPBRGH3.B7;

    // BAUDCON3 bits
    sbit  ABDEN_BAUDCON3_bit at BAUDCON3.B0;
    sbit  WUE_BAUDCON3_bit at BAUDCON3.B1;
    sbit  IREN_BAUDCON3_bit at BAUDCON3.B2;
    sbit  BRG16_BAUDCON3_bit at BAUDCON3.B3;
    sbit  TXCKP_BAUDCON3_bit at BAUDCON3.B4;
    sbit  RXDTP_BAUDCON3_bit at BAUDCON3.B5;
    sbit  RCIDL_BAUDCON3_bit at BAUDCON3.B6;
    sbit  ABDOVF_BAUDCON3_bit at BAUDCON3.B7;

    // TXSTA3 bits
    sbit  TX9D_TXSTA3_bit at TXSTA3.B0;
    sbit  TRMT_TXSTA3_bit at TXSTA3.B1;
    sbit  BRGH_TXSTA3_bit at TXSTA3.B2;
    sbit  SENDB_TXSTA3_bit at TXSTA3.B3;
    sbit  SYNC_TXSTA3_bit at TXSTA3.B4;
    sbit  TXEN_TXSTA3_bit at TXSTA3.B5;
    sbit  TX9_TXSTA3_bit at TXSTA3.B6;
    sbit  CSRC_TXSTA3_bit at TXSTA3.B7;

    // RCSTA3 bits
    sbit  RX9D_RCSTA3_bit at RCSTA3.B0;
    sbit  OERR_RCSTA3_bit at RCSTA3.B1;
    sbit  FERR_RCSTA3_bit at RCSTA3.B2;
    sbit  ADDEN_RCSTA3_bit at RCSTA3.B3;
    sbit  CREN_RCSTA3_bit at RCSTA3.B4;
    sbit  SREN_RCSTA3_bit at RCSTA3.B5;
    sbit  RX9_RCSTA3_bit at RCSTA3.B6;
    sbit  SPEN_RCSTA3_bit at RCSTA3.B7;

    // SPBRGH, SPBRGH1 bits
    sbit  BRG8_SPBRGH_bit at SPBRGH.B0;
    sbit  BRG9_SPBRGH_bit at SPBRGH.B1;
    sbit  BRG10_SPBRGH_bit at SPBRGH.B2;
    sbit  BRG11_SPBRGH_bit at SPBRGH.B3;
    sbit  BRG12_SPBRGH_bit at SPBRGH.B4;
    sbit  BRG13_SPBRGH_bit at SPBRGH.B5;
    sbit  BRG14_SPBRGH_bit at SPBRGH.B6;
    sbit  BRG15_SPBRGH_bit at SPBRGH.B7;

    // BAUDCON2 bits
    sbit  ABDEN_BAUDCON2_bit at BAUDCON2.B0;
    sbit  WUE_BAUDCON2_bit at BAUDCON2.B1;
    sbit  IREN_BAUDCON2_bit at BAUDCON2.B2;
    sbit  BRG16_BAUDCON2_bit at BAUDCON2.B3;
    sbit  TXCKP_BAUDCON2_bit at BAUDCON2.B4;
    sbit  RXDTP_BAUDCON2_bit at BAUDCON2.B5;
    sbit  RCIDL_BAUDCON2_bit at BAUDCON2.B6;
    sbit  ABDOVF_BAUDCON2_bit at BAUDCON2.B7;

    // TXSTA2 bits
    sbit  TX9D_TXSTA2_bit at TXSTA2.B0;
    sbit  TRMT_TXSTA2_bit at TXSTA2.B1;
    sbit  BRGH_TXSTA2_bit at TXSTA2.B2;
    sbit  SENDB_TXSTA2_bit at TXSTA2.B3;
    sbit  SYNC_TXSTA2_bit at TXSTA2.B4;
    sbit  TXEN_TXSTA2_bit at TXSTA2.B5;
    sbit  TX9_TXSTA2_bit at TXSTA2.B6;
    sbit  CSRC_TXSTA2_bit at TXSTA2.B7;

    // RCSTA2 bits
    sbit  RX9D_RCSTA2_bit at RCSTA2.B0;
    sbit  OERR_RCSTA2_bit at RCSTA2.B1;
    sbit  FERR_RCSTA2_bit at RCSTA2.B2;
    sbit  ADDEN_RCSTA2_bit at RCSTA2.B3;
    sbit  CREN_RCSTA2_bit at RCSTA2.B4;
    sbit  SREN_RCSTA2_bit at RCSTA2.B5;
    sbit  RX9_RCSTA2_bit at RCSTA2.B6;
    sbit  SPEN_RCSTA2_bit at RCSTA2.B7;

    // CCPTMRS2 bits
    const register unsigned short int C9TSEL = 2;
    sbit  C9TSEL_bit at CCPTMRS2.B2;
    const register unsigned short int C10TSEL = 4;
    sbit  C10TSEL_bit at CCPTMRS2.B4;
    const register unsigned short int C8TSEL0 = 0;
    sbit  C8TSEL0_bit at CCPTMRS2.B0;
    const register unsigned short int C8TSEL1 = 1;
    sbit  C8TSEL1_bit at CCPTMRS2.B1;
    const register unsigned short int C9TSEL0 = 2;
    sbit  C9TSEL0_bit at CCPTMRS2.B2;
    const register unsigned short int C10TSEL0 = 4;
    sbit  C10TSEL0_bit at CCPTMRS2.B4;

    // CCPTMRS1 bits
    const register unsigned short int C5TSEL = 2;
    sbit  C5TSEL_bit at CCPTMRS1.B2;
    const register unsigned short int C6TSEL = 4;
    sbit  C6TSEL_bit at CCPTMRS1.B4;
    const register unsigned short int C4TSEL0 = 0;
    sbit  C4TSEL0_bit at CCPTMRS1.B0;
    const register unsigned short int C4TSEL1 = 1;
    sbit  C4TSEL1_bit at CCPTMRS1.B1;
    const register unsigned short int C5TSEL0 = 2;
    sbit  C5TSEL0_bit at CCPTMRS1.B2;
    const register unsigned short int C6TSEL0 = 4;
    sbit  C6TSEL0_bit at CCPTMRS1.B4;
    const register unsigned short int C7TSEL0 = 6;
    sbit  C7TSEL0_bit at CCPTMRS1.B6;
    const register unsigned short int C7TSEL1 = 7;
    sbit  C7TSEL1_bit at CCPTMRS1.B7;

    // CCPTMRS0 bits
    const register unsigned short int C1TSEL0 = 0;
    sbit  C1TSEL0_bit at CCPTMRS0.B0;
    const register unsigned short int C1TSEL1 = 1;
    sbit  C1TSEL1_bit at CCPTMRS0.B1;
    const register unsigned short int C1TSEL2 = 2;
    sbit  C1TSEL2_bit at CCPTMRS0.B2;
    const register unsigned short int C2TSEL0 = 3;
    sbit  C2TSEL0_bit at CCPTMRS0.B3;
    const register unsigned short int C2TSEL1 = 4;
    sbit  C2TSEL1_bit at CCPTMRS0.B4;
    const register unsigned short int C2TSEL2 = 5;
    sbit  C2TSEL2_bit at CCPTMRS0.B5;
    const register unsigned short int C3TSEL0 = 6;
    sbit  C3TSEL0_bit at CCPTMRS0.B6;
    const register unsigned short int C3TSEL1 = 7;
    sbit  C3TSEL1_bit at CCPTMRS0.B7;

    // CM3CON bits
    const register unsigned short int CREF = 2;
    sbit  CREF_bit at CM3CON.B2;
    const register unsigned short int CPOL = 5;
    sbit  CPOL_bit at CM3CON.B5;
    const register unsigned short int COE = 6;
    sbit  COE_bit at CM3CON.B6;
    const register unsigned short int CON = 7;
    sbit  CON_bit at CM3CON.B7;
    const register unsigned short int CCH0 = 0;
    sbit  CCH0_bit at CM3CON.B0;
    const register unsigned short int CCH1 = 1;
    sbit  CCH1_bit at CM3CON.B1;
    const register unsigned short int EVPOL0 = 3;
    sbit  EVPOL0_bit at CM3CON.B3;
    const register unsigned short int EVPOL1 = 4;
    sbit  EVPOL1_bit at CM3CON.B4;

    // CM2CON bits
    sbit  CREF_CM2CON_bit at CM2CON.B2;
    sbit  CPOL_CM2CON_bit at CM2CON.B5;
    sbit  COE_CM2CON_bit at CM2CON.B6;
    sbit  CON_CM2CON_bit at CM2CON.B7;
    sbit  CCH0_CM2CON_bit at CM2CON.B0;
    sbit  CCH1_CM2CON_bit at CM2CON.B1;
    sbit  EVPOL0_CM2CON_bit at CM2CON.B3;
    sbit  EVPOL1_CM2CON_bit at CM2CON.B4;

    // SSP2CON3 bits
    const register unsigned short int DHEN = 0;
    sbit  DHEN_bit at SSP2CON3.B0;
    const register unsigned short int AHEN = 1;
    sbit  AHEN_bit at SSP2CON3.B1;
    const register unsigned short int SBCDE = 2;
    sbit  SBCDE_bit at SSP2CON3.B2;
    const register unsigned short int SDAHT = 3;
    sbit  SDAHT_bit at SSP2CON3.B3;
    const register unsigned short int BOEN = 4;
    sbit  BOEN_bit at SSP2CON3.B4;
    const register unsigned short int SCIE = 5;
    sbit  SCIE_bit at SSP2CON3.B5;
    const register unsigned short int PCIE = 6;
    sbit  PCIE_bit at SSP2CON3.B6;
    const register unsigned short int ACKTIM = 7;
    sbit  ACKTIM_bit at SSP2CON3.B7;

    // T8CON bits
    const register unsigned short int TMR8ON = 2;
    sbit  TMR8ON_bit at T8CON.B2;
    const register unsigned short int T8CKPS0 = 0;
    sbit  T8CKPS0_bit at T8CON.B0;
    const register unsigned short int T8CKPS1 = 1;
    sbit  T8CKPS1_bit at T8CON.B1;
    const register unsigned short int T8OUTPS0 = 3;
    sbit  T8OUTPS0_bit at T8CON.B3;
    const register unsigned short int T8OUTPS1 = 4;
    sbit  T8OUTPS1_bit at T8CON.B4;
    const register unsigned short int T8OUTPS2 = 5;
    sbit  T8OUTPS2_bit at T8CON.B5;
    const register unsigned short int T8OUTPS3 = 6;
    sbit  T8OUTPS3_bit at T8CON.B6;

    // T6CON bits
    const register unsigned short int TMR6ON = 2;
    sbit  TMR6ON_bit at T6CON.B2;
    const register unsigned short int T6CKPS0 = 0;
    sbit  T6CKPS0_bit at T6CON.B0;
    const register unsigned short int T6CKPS1 = 1;
    sbit  T6CKPS1_bit at T6CON.B1;
    const register unsigned short int T6OUTPS0 = 3;
    sbit  T6OUTPS0_bit at T6CON.B3;
    const register unsigned short int T6OUTPS1 = 4;
    sbit  T6OUTPS1_bit at T6CON.B4;
    const register unsigned short int T6OUTPS2 = 5;
    sbit  T6OUTPS2_bit at T6CON.B5;
    const register unsigned short int T6OUTPS3 = 6;
    sbit  T6OUTPS3_bit at T6CON.B6;

    // CCP10CON bits
    const register unsigned short int CCP10M0 = 0;
    sbit  CCP10M0_bit at CCP10CON.B0;
    const register unsigned short int CCP10M1 = 1;
    sbit  CCP10M1_bit at CCP10CON.B1;
    const register unsigned short int CCP10M2 = 2;
    sbit  CCP10M2_bit at CCP10CON.B2;
    const register unsigned short int CCP10M3 = 3;
    sbit  CCP10M3_bit at CCP10CON.B3;
    const register unsigned short int DC10B0 = 4;
    sbit  DC10B0_bit at CCP10CON.B4;
    const register unsigned short int DC10B1 = 5;
    sbit  DC10B1_bit at CCP10CON.B5;
    const register unsigned short int CCP10Y = 4;
    sbit  CCP10Y_bit at CCP10CON.B4;
    const register unsigned short int CCP10X = 5;
    sbit  CCP10X_bit at CCP10CON.B5;

    // CCP9CON bits
    const register unsigned short int CCP9M0 = 0;
    sbit  CCP9M0_bit at CCP9CON.B0;
    const register unsigned short int CCP9M1 = 1;
    sbit  CCP9M1_bit at CCP9CON.B1;
    const register unsigned short int CCP9M2 = 2;
    sbit  CCP9M2_bit at CCP9CON.B2;
    const register unsigned short int CCP9M3 = 3;
    sbit  CCP9M3_bit at CCP9CON.B3;
    const register unsigned short int DC9B0 = 4;
    sbit  DC9B0_bit at CCP9CON.B4;
    const register unsigned short int DC9B1 = 5;
    sbit  DC9B1_bit at CCP9CON.B5;
    const register unsigned short int CCP9Y = 4;
    sbit  CCP9Y_bit at CCP9CON.B4;
    const register unsigned short int CCP9X = 5;
    sbit  CCP9X_bit at CCP9CON.B5;

    // CCP8CON bits
    const register unsigned short int CCP8M0 = 0;
    sbit  CCP8M0_bit at CCP8CON.B0;
    const register unsigned short int CCP8M1 = 1;
    sbit  CCP8M1_bit at CCP8CON.B1;
    const register unsigned short int CCP8M2 = 2;
    sbit  CCP8M2_bit at CCP8CON.B2;
    const register unsigned short int CCP8M3 = 3;
    sbit  CCP8M3_bit at CCP8CON.B3;
    const register unsigned short int DC8B0 = 4;
    sbit  DC8B0_bit at CCP8CON.B4;
    const register unsigned short int DC8B1 = 5;
    sbit  DC8B1_bit at CCP8CON.B5;
    const register unsigned short int CCP8Y = 4;
    sbit  CCP8Y_bit at CCP8CON.B4;
    const register unsigned short int CCP8X = 5;
    sbit  CCP8X_bit at CCP8CON.B5;

    // CCP3CON bits
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
    const register unsigned short int P3RSEN = 7;
    sbit  P3RSEN_bit at ECCP3DEL.B7;
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

    // ECCP3AS bits
    const register unsigned short int ECCP3ASE = 7;
    sbit  ECCP3ASE_bit at ECCP3AS.B7;
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

    // CCP2CON bits
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
    const register unsigned short int P2RSEN = 7;
    sbit  P2RSEN_bit at ECCP2DEL.B7;
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

    // ECCP2AS bits
    const register unsigned short int ECCP2ASE = 7;
    sbit  ECCP2ASE_bit at ECCP2AS.B7;
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

    // CM1CON bits
    sbit  CREF_CM1CON_bit at CM1CON.B2;
    sbit  CPOL_CM1CON_bit at CM1CON.B5;
    sbit  COE_CM1CON_bit at CM1CON.B6;
    sbit  CON_CM1CON_bit at CM1CON.B7;
    sbit  CCH0_CM1CON_bit at CM1CON.B0;
    sbit  CCH1_CM1CON_bit at CM1CON.B1;
    sbit  EVPOL0_CM1CON_bit at CM1CON.B3;
    sbit  EVPOL1_CM1CON_bit at CM1CON.B4;

    // PADCFG1 bits
    const register unsigned short int RLPU = 0;
    sbit  RLPU_bit at PADCFG1.B0;
    const register unsigned short int RKPU = 1;
    sbit  RKPU_bit at PADCFG1.B1;
    const register unsigned short int RJPU = 2;
    sbit  RJPU_bit at PADCFG1.B2;
    const register unsigned short int RHPU = 3;
    sbit  RHPU_bit at PADCFG1.B3;
    const register unsigned short int RGPU = 4;
    sbit  RGPU_bit at PADCFG1.B4;
    const register unsigned short int RFPU = 5;
    sbit  RFPU_bit at PADCFG1.B5;
    const register unsigned short int REPU = 6;
    sbit  REPU_bit at PADCFG1.B6;
    const register unsigned short int RDPU = 7;
    sbit  RDPU_bit at PADCFG1.B7;

    // IOCN bits
    const register unsigned short int IOCN0 = 0;
    sbit  IOCN0_bit at IOCN.B0;
    const register unsigned short int IOCN1 = 1;
    sbit  IOCN1_bit at IOCN.B1;
    const register unsigned short int IOCN2 = 2;
    sbit  IOCN2_bit at IOCN.B2;
    const register unsigned short int IOCN3 = 3;
    sbit  IOCN3_bit at IOCN.B3;
    const register unsigned short int IOCN4 = 4;
    sbit  IOCN4_bit at IOCN.B4;
    const register unsigned short int IOCN5 = 5;
    sbit  IOCN5_bit at IOCN.B5;
    const register unsigned short int IOCN6 = 6;
    sbit  IOCN6_bit at IOCN.B6;
    const register unsigned short int IOCN7 = 7;
    sbit  IOCN7_bit at IOCN.B7;

    // IOCP bits
    const register unsigned short int IOCP0 = 0;
    sbit  IOCP0_bit at IOCP.B0;
    const register unsigned short int IOCP1 = 1;
    sbit  IOCP1_bit at IOCP.B1;
    const register unsigned short int IOCP2 = 2;
    sbit  IOCP2_bit at IOCP.B2;
    const register unsigned short int IOCP3 = 3;
    sbit  IOCP3_bit at IOCP.B3;
    const register unsigned short int IOCP4 = 4;
    sbit  IOCP4_bit at IOCP.B4;
    const register unsigned short int IOCP5 = 5;
    sbit  IOCP5_bit at IOCP.B5;
    const register unsigned short int IOCP6 = 6;
    sbit  IOCP6_bit at IOCP.B6;
    const register unsigned short int IOCP7 = 7;
    sbit  IOCP7_bit at IOCP.B7;

    // RTCCON2 bits
    const register unsigned short int PWCSPRE = 4;
    sbit  PWCSPRE_bit at RTCCON2.B4;
    const register unsigned short int PWCCPRE = 5;
    sbit  PWCCPRE_bit at RTCCON2.B5;
    const register unsigned short int PWCPOL = 6;
    sbit  PWCPOL_bit at RTCCON2.B6;
    const register unsigned short int PWCEN = 7;
    sbit  PWCEN_bit at RTCCON2.B7;
    const register unsigned short int RTCSECSEL0 = 0;
    sbit  RTCSECSEL0_bit at RTCCON2.B0;
    const register unsigned short int RTCSECSEL1 = 1;
    sbit  RTCSECSEL1_bit at RTCCON2.B1;
    const register unsigned short int RTCCLKSEL0 = 2;
    sbit  RTCCLKSEL0_bit at RTCCON2.B2;
    const register unsigned short int RTCCLKSEL1 = 3;
    sbit  RTCCLKSEL1_bit at RTCCON2.B3;

    // ALRMRPT bits
    const register unsigned short int ARPT0 = 0;
    sbit  ARPT0_bit at ALRMRPT.B0;
    const register unsigned short int ARPT1 = 1;
    sbit  ARPT1_bit at ALRMRPT.B1;
    const register unsigned short int ARPT2 = 2;
    sbit  ARPT2_bit at ALRMRPT.B2;
    const register unsigned short int ARPT3 = 3;
    sbit  ARPT3_bit at ALRMRPT.B3;
    const register unsigned short int ARPT4 = 4;
    sbit  ARPT4_bit at ALRMRPT.B4;
    const register unsigned short int ARPT5 = 5;
    sbit  ARPT5_bit at ALRMRPT.B5;
    const register unsigned short int ARPT6 = 6;
    sbit  ARPT6_bit at ALRMRPT.B6;
    const register unsigned short int ARPT7 = 7;
    sbit  ARPT7_bit at ALRMRPT.B7;

    // ALRMCFG bits
    const register unsigned short int CHIME = 6;
    sbit  CHIME_bit at ALRMCFG.B6;
    const register unsigned short int ALRMEN = 7;
    sbit  ALRMEN_bit at ALRMCFG.B7;
    const register unsigned short int ALRMPTR0 = 0;
    sbit  ALRMPTR0_bit at ALRMCFG.B0;
    const register unsigned short int ALRMPTR1 = 1;
    sbit  ALRMPTR1_bit at ALRMCFG.B1;
    const register unsigned short int AMASK0 = 2;
    sbit  AMASK0_bit at ALRMCFG.B2;
    const register unsigned short int AMASK1 = 3;
    sbit  AMASK1_bit at ALRMCFG.B3;
    const register unsigned short int AMASK2 = 4;
    sbit  AMASK2_bit at ALRMCFG.B4;
    const register unsigned short int AMASK3 = 5;
    sbit  AMASK3_bit at ALRMCFG.B5;

    // RTCCAL bits
    const register unsigned short int CAL0 = 0;
    sbit  CAL0_bit at RTCCAL.B0;
    const register unsigned short int CAL1 = 1;
    sbit  CAL1_bit at RTCCAL.B1;
    const register unsigned short int CAL2 = 2;
    sbit  CAL2_bit at RTCCAL.B2;
    const register unsigned short int CAL3 = 3;
    sbit  CAL3_bit at RTCCAL.B3;
    const register unsigned short int CAL4 = 4;
    sbit  CAL4_bit at RTCCAL.B4;
    const register unsigned short int CAL5 = 5;
    sbit  CAL5_bit at RTCCAL.B5;
    const register unsigned short int CAL6 = 6;
    sbit  CAL6_bit at RTCCAL.B6;
    const register unsigned short int CAL7 = 7;
    sbit  CAL7_bit at RTCCAL.B7;

    // RTCCON1 bits
    const register unsigned short int RTCOE = 2;
    sbit  RTCOE_bit at RTCCON1.B2;
    const register unsigned short int HALFSEC = 3;
    sbit  HALFSEC_bit at RTCCON1.B3;
    const register unsigned short int RTCSYNC = 4;
    sbit  RTCSYNC_bit at RTCCON1.B4;
    const register unsigned short int RTCWREN = 5;
    sbit  RTCWREN_bit at RTCCON1.B5;
    const register unsigned short int RTCEN = 7;
    sbit  RTCEN_bit at RTCCON1.B7;
    const register unsigned short int RTCPTR0 = 0;
    sbit  RTCPTR0_bit at RTCCON1.B0;
    const register unsigned short int RTCPTR1 = 1;
    sbit  RTCPTR1_bit at RTCCON1.B1;

    // DMACON1 bits
    const register unsigned short int DMAEN = 0;
    sbit  DMAEN_bit at DMACON1.B0;
    const register unsigned short int DLYINTEN = 1;
    sbit  DLYINTEN_bit at DMACON1.B1;
    const register unsigned short int RXINC = 4;
    sbit  RXINC_bit at DMACON1.B4;
    const register unsigned short int TXINC = 5;
    sbit  TXINC_bit at DMACON1.B5;
    const register unsigned short int DUPLEX0 = 2;
    sbit  DUPLEX0_bit at DMACON1.B2;
    const register unsigned short int DUPLEX1 = 3;
    sbit  DUPLEX1_bit at DMACON1.B3;
    const register unsigned short int SSCON0 = 6;
    sbit  SSCON0_bit at DMACON1.B6;
    const register unsigned short int SSCON1 = 7;
    sbit  SSCON1_bit at DMACON1.B7;

    // PIE6 bits
    const register unsigned short int CMP1IE = 0;
    sbit  CMP1IE_bit at PIE6.B0;
    const register unsigned short int CMP2IE = 1;
    sbit  CMP2IE_bit at PIE6.B1;
    const register unsigned short int CMP3IE = 2;
    sbit  CMP3IE_bit at PIE6.B2;
    const register unsigned short int TX3IE = 4;
    sbit  TX3IE_bit at PIE6.B4;
    const register unsigned short int RC3IE = 5;
    sbit  RC3IE_bit at PIE6.B5;
    const register unsigned short int TX4IE = 6;
    sbit  TX4IE_bit at PIE6.B6;
    const register unsigned short int RC4IE = 7;
    sbit  RC4IE_bit at PIE6.B7;

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

    // ACTCON bits
    const register unsigned short int ACTORSPOL = 0;
    sbit  ACTORSPOL_bit at ACTCON.B0;
    const register unsigned short int ACTORS = 1;
    sbit  ACTORS_bit at ACTCON.B1;
    const register unsigned short int ACTLOCKPOL = 2;
    sbit  ACTLOCKPOL_bit at ACTCON.B2;
    const register unsigned short int ACTLOCK = 3;
    sbit  ACTLOCK_bit at ACTCON.B3;
    const register unsigned short int ACTSRC = 4;
    sbit  ACTSRC_bit at ACTCON.B4;
    const register unsigned short int ACTSIDL = 5;
    sbit  ACTSIDL_bit at ACTCON.B5;
    const register unsigned short int ACTEN = 7;
    sbit  ACTEN_bit at ACTCON.B7;

    // OSCCON4 bits
    const register unsigned short int PLLEN = 5;
    sbit  PLLEN_bit at OSCCON4.B5;
    const register unsigned short int CPDIV0 = 6;
    sbit  CPDIV0_bit at OSCCON4.B6;
    const register unsigned short int CPDIV1 = 7;
    sbit  CPDIV1_bit at OSCCON4.B7;

    // OSCCON3 bits
    const register unsigned short int IRCF0 = 0;
    sbit  IRCF0_bit at OSCCON3.B0;
    const register unsigned short int IRCF1 = 1;
    sbit  IRCF1_bit at OSCCON3.B1;
    const register unsigned short int IRCF2 = 2;
    sbit  IRCF2_bit at OSCCON3.B2;

    // OSCCON2 bits
    const register unsigned short int SOSCGO = 1;
    sbit  SOSCGO_bit at OSCCON2.B1;
    const register unsigned short int POSCEN = 2;
    sbit  POSCEN_bit at OSCCON2.B2;
    const register unsigned short int CF = 3;
    sbit  CF_bit at OSCCON2.B3;
    const register unsigned short int LOCK_ = 5;
    sbit  LOCK__bit at OSCCON2.B5;
    const register unsigned short int IOLOCK = 6;
    sbit  IOLOCK_bit at OSCCON2.B6;
    const register unsigned short int CLKLOCK = 7;
    sbit  CLKLOCK_bit at OSCCON2.B7;

    // BAUDCON, BAUDCON1 bits
    sbit  ABDEN_BAUDCON_bit at BAUDCON.B0;
    sbit  WUE_BAUDCON_bit at BAUDCON.B1;
    sbit  IREN_BAUDCON_bit at BAUDCON.B2;
    sbit  BRG16_BAUDCON_bit at BAUDCON.B3;
    sbit  TXCKP_BAUDCON_bit at BAUDCON.B4;
    sbit  RXDTP_BAUDCON_bit at BAUDCON.B5;
    sbit  RCIDL_BAUDCON_bit at BAUDCON.B6;
    sbit  ABDOVF_BAUDCON_bit at BAUDCON.B7;
    const register unsigned short int CKTXP = 4;
    sbit  CKTXP_bit at BAUDCON.B4;
    const register unsigned short int DTRXP = 5;
    sbit  DTRXP_bit at BAUDCON.B5;
    const register unsigned short int SCKP = 4;
    sbit  SCKP_bit at BAUDCON.B4;
    const register unsigned short int RCMT = 6;
    sbit  RCMT_bit at BAUDCON.B6;

    // SSP1MSK bits
    sbit  MSK0_SSP1MSK_bit at SSP1MSK.B0;
    sbit  MSK1_SSP1MSK_bit at SSP1MSK.B1;
    sbit  MSK2_SSP1MSK_bit at SSP1MSK.B2;
    sbit  MSK3_SSP1MSK_bit at SSP1MSK.B3;
    sbit  MSK4_SSP1MSK_bit at SSP1MSK.B4;
    sbit  MSK5_SSP1MSK_bit at SSP1MSK.B5;
    sbit  MSK6_SSP1MSK_bit at SSP1MSK.B6;
    sbit  MSK7_SSP1MSK_bit at SSP1MSK.B7;

    // SSP1CON3 bits
    sbit  DHEN_SSP1CON3_bit at SSP1CON3.B0;
    sbit  AHEN_SSP1CON3_bit at SSP1CON3.B1;
    sbit  SBCDE_SSP1CON3_bit at SSP1CON3.B2;
    sbit  SDAHT_SSP1CON3_bit at SSP1CON3.B3;
    sbit  BOEN_SSP1CON3_bit at SSP1CON3.B4;
    sbit  SCIE_SSP1CON3_bit at SSP1CON3.B5;
    sbit  PCIE_SSP1CON3_bit at SSP1CON3.B6;
    sbit  ACKTIM_SSP1CON3_bit at SSP1CON3.B7;

    // TXBUF bits
    const register unsigned short int TXBUF0 = 0;
    sbit  TXBUF0_bit at TXBUF.B0;
    const register unsigned short int TXBUF1 = 1;
    sbit  TXBUF1_bit at TXBUF.B1;
    const register unsigned short int TXBUF2 = 2;
    sbit  TXBUF2_bit at TXBUF.B2;
    const register unsigned short int TXBUF3 = 3;
    sbit  TXBUF3_bit at TXBUF.B3;
    const register unsigned short int TXBUF4 = 4;
    sbit  TXBUF4_bit at TXBUF.B4;
    const register unsigned short int TXBUF5 = 5;
    sbit  TXBUF5_bit at TXBUF.B5;
    const register unsigned short int TXBUF6 = 6;
    sbit  TXBUF6_bit at TXBUF.B6;
    const register unsigned short int TXBUF7 = 7;
    sbit  TXBUF7_bit at TXBUF.B7;

    // DMABCH bits
    const register unsigned short int BC8 = 0;
    sbit  BC8_bit at DMABCH.B0;
    const register unsigned short int BC9 = 1;
    sbit  BC9_bit at DMABCH.B1;

    // DMABCL bits
    const register unsigned short int BC0 = 0;
    sbit  BC0_bit at DMABCL.B0;
    const register unsigned short int BC1 = 1;
    sbit  BC1_bit at DMABCL.B1;
    const register unsigned short int BC2 = 2;
    sbit  BC2_bit at DMABCL.B2;
    const register unsigned short int BC3 = 3;
    sbit  BC3_bit at DMABCL.B3;
    const register unsigned short int BC4 = 4;
    sbit  BC4_bit at DMABCL.B4;
    const register unsigned short int BC5 = 5;
    sbit  BC5_bit at DMABCL.B5;
    const register unsigned short int BC6 = 6;
    sbit  BC6_bit at DMABCL.B6;
    const register unsigned short int BC7 = 7;
    sbit  BC7_bit at DMABCL.B7;

    // RXADDRH bits
    const register unsigned short int RXADDR8 = 0;
    sbit  RXADDR8_bit at RXADDRH.B0;
    const register unsigned short int RXADDR9 = 1;
    sbit  RXADDR9_bit at RXADDRH.B1;
    const register unsigned short int RXADDR10 = 2;
    sbit  RXADDR10_bit at RXADDRH.B2;
    const register unsigned short int RXADDR11 = 3;
    sbit  RXADDR11_bit at RXADDRH.B3;

    // RXADDRL bits
    const register unsigned short int RXADDR0 = 0;
    sbit  RXADDR0_bit at RXADDRL.B0;
    const register unsigned short int RXADDR1 = 1;
    sbit  RXADDR1_bit at RXADDRL.B1;
    const register unsigned short int RXADDR2 = 2;
    sbit  RXADDR2_bit at RXADDRL.B2;
    const register unsigned short int RXADDR3 = 3;
    sbit  RXADDR3_bit at RXADDRL.B3;
    const register unsigned short int RXADDR4 = 4;
    sbit  RXADDR4_bit at RXADDRL.B4;
    const register unsigned short int RXADDR5 = 5;
    sbit  RXADDR5_bit at RXADDRL.B5;
    const register unsigned short int RXADDR6 = 6;
    sbit  RXADDR6_bit at RXADDRL.B6;
    const register unsigned short int RXADDR7 = 7;
    sbit  RXADDR7_bit at RXADDRL.B7;

    // TXADDRH bits
    const register unsigned short int TXADDR8 = 0;
    sbit  TXADDR8_bit at TXADDRH.B0;
    const register unsigned short int TXADDR9 = 1;
    sbit  TXADDR9_bit at TXADDRH.B1;
    const register unsigned short int TXADDR10 = 2;
    sbit  TXADDR10_bit at TXADDRH.B2;
    const register unsigned short int TXADDR11 = 3;
    sbit  TXADDR11_bit at TXADDRH.B3;

    // TXADDRL bits
    const register unsigned short int TXADDR0 = 0;
    sbit  TXADDR0_bit at TXADDRL.B0;
    const register unsigned short int TXADDR1 = 1;
    sbit  TXADDR1_bit at TXADDRL.B1;
    const register unsigned short int TXADDR2 = 2;
    sbit  TXADDR2_bit at TXADDRL.B2;
    const register unsigned short int TXADDR3 = 3;
    sbit  TXADDR3_bit at TXADDRL.B3;
    const register unsigned short int TXADDR4 = 4;
    sbit  TXADDR4_bit at TXADDRL.B4;
    const register unsigned short int TXADDR5 = 5;
    sbit  TXADDR5_bit at TXADDRL.B5;
    const register unsigned short int TXADDR6 = 6;
    sbit  TXADDR6_bit at TXADDRL.B6;
    const register unsigned short int TXADDR7 = 7;
    sbit  TXADDR7_bit at TXADDRL.B7;

    // Alternative bit function
    const register unsigned short int RVP0 = 0;
    sbit  RVP0_bit at PORTVP.B0;

    // Alternative bit function
    const register unsigned short int RVP1 = 1;
    sbit  RVP1_bit at PORTVP.B1;

    // Alternative bit function
    const register unsigned short int RVP2 = 2;
    sbit  RVP2_bit at PORTVP.B2;

    // Alternative bit function
    const register unsigned short int RVP3 = 3;
    sbit  RVP3_bit at PORTVP.B3;

    // Alternative bit function
    const register unsigned short int RVP4 = 4;
    sbit  RVP4_bit at PORTVP.B4;

    // Alternative bit function
    const register unsigned short int RVP5 = 5;
    sbit  RVP5_bit at PORTVP.B5;

    // Alternative bit function
    const register unsigned short int RVP6 = 6;
    sbit  RVP6_bit at PORTVP.B6;

    // Alternative bit function
    const register unsigned short int RVP7 = 7;
    sbit  RVP7_bit at PORTVP.B7;

    // LATVP bits
    const register unsigned short int LATVP0 = 0;
    sbit  LATVP0_bit at LATVP.B0;
    const register unsigned short int LATVP1 = 1;
    sbit  LATVP1_bit at LATVP.B1;
    const register unsigned short int LATVP2 = 2;
    sbit  LATVP2_bit at LATVP.B2;
    const register unsigned short int LATVP3 = 3;
    sbit  LATVP3_bit at LATVP.B3;
    const register unsigned short int LATVP4 = 4;
    sbit  LATVP4_bit at LATVP.B4;
    const register unsigned short int LATVP5 = 5;
    sbit  LATVP5_bit at LATVP.B5;
    const register unsigned short int LATVP6 = 6;
    sbit  LATVP6_bit at LATVP.B6;
    const register unsigned short int LATVP7 = 7;
    sbit  LATVP7_bit at LATVP.B7;

    // UADDR bits
    const register unsigned short int ADDR0 = 0;
    sbit  ADDR0_bit at UADDR.B0;
    const register unsigned short int ADDR1 = 1;
    sbit  ADDR1_bit at UADDR.B1;
    const register unsigned short int ADDR2 = 2;
    sbit  ADDR2_bit at UADDR.B2;
    const register unsigned short int ADDR3 = 3;
    sbit  ADDR3_bit at UADDR.B3;
    const register unsigned short int ADDR4 = 4;
    sbit  ADDR4_bit at UADDR.B4;
    const register unsigned short int ADDR5 = 5;
    sbit  ADDR5_bit at UADDR.B5;
    const register unsigned short int ADDR6 = 6;
    sbit  ADDR6_bit at UADDR.B6;

    // UCON bits
    const register unsigned short int SUSPND = 1;
    sbit  SUSPND_bit at UCON.B1;
    const register unsigned short int RESUME_ = 2;
    sbit  RESUME__bit at UCON.B2;
    const register unsigned short int USBEN = 3;
    sbit  USBEN_bit at UCON.B3;
    const register unsigned short int PKTDIS = 4;
    sbit  PKTDIS_bit at UCON.B4;
    const register unsigned short int SE0 = 5;
    sbit  SE0_bit at UCON.B5;
    const register unsigned short int PPBRST = 6;
    sbit  PPBRST_bit at UCON.B6;

    // USTAT bits
    const register unsigned short int PPBI = 1;
    sbit  PPBI_bit at USTAT.B1;
    const register unsigned short int DIR_ = 2;
    sbit  DIR__bit at USTAT.B2;
    const register unsigned short int ENDP0 = 3;
    sbit  ENDP0_bit at USTAT.B3;
    const register unsigned short int ENDP1 = 4;
    sbit  ENDP1_bit at USTAT.B4;
    const register unsigned short int ENDP2 = 5;
    sbit  ENDP2_bit at USTAT.B5;
    const register unsigned short int ENDP3 = 6;
    sbit  ENDP3_bit at USTAT.B6;

    // UEIR bits
    const register unsigned short int PIDEF = 0;
    sbit  PIDEF_bit at UEIR.B0;
    const register unsigned short int CRC5EF = 1;
    sbit  CRC5EF_bit at UEIR.B1;
    const register unsigned short int CRC16EF = 2;
    sbit  CRC16EF_bit at UEIR.B2;
    const register unsigned short int DFN8EF = 3;
    sbit  DFN8EF_bit at UEIR.B3;
    const register unsigned short int BTOEF = 4;
    sbit  BTOEF_bit at UEIR.B4;
    const register unsigned short int BTSEF = 7;
    sbit  BTSEF_bit at UEIR.B7;

    // UIR bits
    const register unsigned short int URSTIF = 0;
    sbit  URSTIF_bit at UIR.B0;
    const register unsigned short int UERRIF = 1;
    sbit  UERRIF_bit at UIR.B1;
    const register unsigned short int ACTVIF = 2;
    sbit  ACTVIF_bit at UIR.B2;
    const register unsigned short int TRNIF = 3;
    sbit  TRNIF_bit at UIR.B3;
    const register unsigned short int IDLEIF = 4;
    sbit  IDLEIF_bit at UIR.B4;
    const register unsigned short int STALLIF = 5;
    sbit  STALLIF_bit at UIR.B5;
    const register unsigned short int SOFIF = 6;
    sbit  SOFIF_bit at UIR.B6;

    // UFRMH bits
    const register unsigned short int FRM8 = 0;
    sbit  FRM8_bit at UFRMH.B0;
    const register unsigned short int FRM9 = 1;
    sbit  FRM9_bit at UFRMH.B1;
    const register unsigned short int FRM10 = 2;
    sbit  FRM10_bit at UFRMH.B2;

    // UFRML bits
    const register unsigned short int FRM0 = 0;
    sbit  FRM0_bit at UFRML.B0;
    const register unsigned short int FRM1 = 1;
    sbit  FRM1_bit at UFRML.B1;
    const register unsigned short int FRM2 = 2;
    sbit  FRM2_bit at UFRML.B2;
    const register unsigned short int FRM3 = 3;
    sbit  FRM3_bit at UFRML.B3;
    const register unsigned short int FRM4 = 4;
    sbit  FRM4_bit at UFRML.B4;
    const register unsigned short int FRM5 = 5;
    sbit  FRM5_bit at UFRML.B5;
    const register unsigned short int FRM6 = 6;
    sbit  FRM6_bit at UFRML.B6;
    const register unsigned short int FRM7 = 7;
    sbit  FRM7_bit at UFRML.B7;

    // RCON4 bits
    const register unsigned short int PMSLP = 0;
    sbit  PMSLP_bit at RCON4.B0;
    const register unsigned short int DPSLP = 2;
    sbit  DPSLP_bit at RCON4.B2;
    const register unsigned short int SRETEN = 4;
    sbit  SRETEN_bit at RCON4.B4;

    // RCON3 bits
    const register unsigned short int VBAT = 0;
    sbit  VBAT_bit at RCON3.B0;
    const register unsigned short int VBPOR = 1;
    sbit  VBPOR_bit at RCON3.B1;
    const register unsigned short int VDDPOR = 2;
    sbit  VDDPOR_bit at RCON3.B2;
    const register unsigned short int VDDBOR = 3;
    sbit  VDDBOR_bit at RCON3.B3;
    const register unsigned short int STKERR = 7;
    sbit  STKERR_bit at RCON3.B7;

    // RCON2 bits
    const register unsigned short int SWDTEN = 5;
    sbit  SWDTEN_bit at RCON2.B5;
    const register unsigned short int EXTR = 7;
    sbit  EXTR_bit at RCON2.B7;

    // EECON1 bits
    const register unsigned short int WR = 1;
    sbit  WR_bit at EECON1.B1;
    const register unsigned short int WREN = 2;
    sbit  WREN_bit at EECON1.B2;
    const register unsigned short int WRERR = 3;
    sbit  WRERR_bit at EECON1.B3;
    const register unsigned short int FREE = 4;
    sbit  FREE_bit at EECON1.B4;
    const register unsigned short int WWPROG = 5;
    sbit  WWPROG_bit at EECON1.B5;

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
    const register unsigned short int LATG6 = 6;
    sbit  LATG6_bit at LATG.B6;
    const register unsigned short int LATG7 = 7;
    sbit  LATG7_bit at LATG.B7;

    // LATH bits
    const register unsigned short int LATH0 = 0;
    sbit  LATH0_bit at LATH.B0;
    const register unsigned short int LATH1 = 1;
    sbit  LATH1_bit at LATH.B1;
    const register unsigned short int LATH2 = 2;
    sbit  LATH2_bit at LATH.B2;
    const register unsigned short int LATH3 = 3;
    sbit  LATH3_bit at LATH.B3;
    const register unsigned short int LATH4 = 4;
    sbit  LATH4_bit at LATH.B4;
    const register unsigned short int LATH5 = 5;
    sbit  LATH5_bit at LATH.B5;
    const register unsigned short int LATH6 = 6;
    sbit  LATH6_bit at LATH.B6;
    const register unsigned short int LATH7 = 7;
    sbit  LATH7_bit at LATH.B7;

    // LATJ bits
    const register unsigned short int LATJ0 = 0;
    sbit  LATJ0_bit at LATJ.B0;
    const register unsigned short int LATJ1 = 1;
    sbit  LATJ1_bit at LATJ.B1;
    const register unsigned short int LATJ2 = 2;
    sbit  LATJ2_bit at LATJ.B2;
    const register unsigned short int LATJ3 = 3;
    sbit  LATJ3_bit at LATJ.B3;
    const register unsigned short int LATJ4 = 4;
    sbit  LATJ4_bit at LATJ.B4;
    const register unsigned short int LATJ5 = 5;
    sbit  LATJ5_bit at LATJ.B5;
    const register unsigned short int LATJ6 = 6;
    sbit  LATJ6_bit at LATJ.B6;
    const register unsigned short int LATJ7 = 7;
    sbit  LATJ7_bit at LATJ.B7;

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

    // PSTR1CON bits
    sbit  STRA_PSTR1CON_bit at PSTR1CON.B0;
    sbit  STRB_PSTR1CON_bit at PSTR1CON.B1;
    sbit  STRC_PSTR1CON_bit at PSTR1CON.B2;
    sbit  STRD_PSTR1CON_bit at PSTR1CON.B3;
    sbit  STRSYNC_PSTR1CON_bit at PSTR1CON.B4;
    sbit  CMPL0_PSTR1CON_bit at PSTR1CON.B6;
    sbit  CMPL1_PSTR1CON_bit at PSTR1CON.B7;

    // PIE1 bits
    const register unsigned short int TMR1IE = 0;
    sbit  TMR1IE_bit at PIE1.B0;
    const register unsigned short int TMR2IE = 1;
    sbit  TMR2IE_bit at PIE1.B1;
    const register unsigned short int TMR1GIE = 2;
    sbit  TMR1GIE_bit at PIE1.B2;
    const register unsigned short int SSP1IE = 3;
    sbit  SSP1IE_bit at PIE1.B3;
    const register unsigned short int TX1IE = 4;
    sbit  TX1IE_bit at PIE1.B4;
    const register unsigned short int RC1IE = 5;
    sbit  RC1IE_bit at PIE1.B5;
    const register unsigned short int ADIE = 6;
    sbit  ADIE_bit at PIE1.B6;
    const register unsigned short int PSPIE = 7;
    sbit  PSPIE_bit at PIE1.B7;

    // PIR1 bits
    const register unsigned short int TMR1IF = 0;
    sbit  TMR1IF_bit at PIR1.B0;
    const register unsigned short int TMR2IF = 1;
    sbit  TMR2IF_bit at PIR1.B1;
    const register unsigned short int TMR1GIF = 2;
    sbit  TMR1GIF_bit at PIR1.B2;
    const register unsigned short int SSP1IF = 3;
    sbit  SSP1IF_bit at PIR1.B3;
    const register unsigned short int TX1IF = 4;
    sbit  TX1IF_bit at PIR1.B4;
    const register unsigned short int RC1IF = 5;
    sbit  RC1IF_bit at PIR1.B5;
    const register unsigned short int ADIF = 6;
    sbit  ADIF_bit at PIR1.B6;
    const register unsigned short int PSPIF = 7;
    sbit  PSPIF_bit at PIR1.B7;

    // IPR1 bits
    const register unsigned short int TMR1IP = 0;
    sbit  TMR1IP_bit at IPR1.B0;
    const register unsigned short int TMR2IP = 1;
    sbit  TMR2IP_bit at IPR1.B1;
    const register unsigned short int TMR1GIP = 2;
    sbit  TMR1GIP_bit at IPR1.B2;
    const register unsigned short int SSP1IP = 3;
    sbit  SSP1IP_bit at IPR1.B3;
    const register unsigned short int TX1IP = 4;
    sbit  TX1IP_bit at IPR1.B4;
    const register unsigned short int RC1IP = 5;
    sbit  RC1IP_bit at IPR1.B5;
    const register unsigned short int ADIP = 6;
    sbit  ADIP_bit at IPR1.B6;
    const register unsigned short int PSPIP = 7;
    sbit  PSPIP_bit at IPR1.B7;

    // PIE2 bits
    const register unsigned short int TMR3GIE = 0;
    sbit  TMR3GIE_bit at PIE2.B0;
    const register unsigned short int TMR3IE = 1;
    sbit  TMR3IE_bit at PIE2.B1;
    const register unsigned short int HLVDIE = 2;
    sbit  HLVDIE_bit at PIE2.B2;
    const register unsigned short int BCL1IE = 3;
    sbit  BCL1IE_bit at PIE2.B3;
    const register unsigned short int USBIE = 4;
    sbit  USBIE_bit at PIE2.B4;
    const register unsigned short int BCL2IE = 5;
    sbit  BCL2IE_bit at PIE2.B5;
    const register unsigned short int SSP2IE = 6;
    sbit  SSP2IE_bit at PIE2.B6;
    const register unsigned short int OSCFIE = 7;
    sbit  OSCFIE_bit at PIE2.B7;

    // PIR2 bits
    const register unsigned short int TMR3GIF = 0;
    sbit  TMR3GIF_bit at PIR2.B0;
    const register unsigned short int TMR3IF = 1;
    sbit  TMR3IF_bit at PIR2.B1;
    const register unsigned short int HLVDIF = 2;
    sbit  HLVDIF_bit at PIR2.B2;
    const register unsigned short int BCL1IF = 3;
    sbit  BCL1IF_bit at PIR2.B3;
    const register unsigned short int USBIF = 4;
    sbit  USBIF_bit at PIR2.B4;
    const register unsigned short int BCL2IF = 5;
    sbit  BCL2IF_bit at PIR2.B5;
    const register unsigned short int SSP2IF = 6;
    sbit  SSP2IF_bit at PIR2.B6;
    const register unsigned short int OSCFIF = 7;
    sbit  OSCFIF_bit at PIR2.B7;
    const register unsigned short int LVDIF = 2;
    sbit  LVDIF_bit at PIR2.B2;

    // IPR2 bits
    const register unsigned short int TMR3GIP = 0;
    sbit  TMR3GIP_bit at IPR2.B0;
    const register unsigned short int TMR3IP = 1;
    sbit  TMR3IP_bit at IPR2.B1;
    const register unsigned short int HLVDIP = 2;
    sbit  HLVDIP_bit at IPR2.B2;
    const register unsigned short int BCL1IP = 3;
    sbit  BCL1IP_bit at IPR2.B3;
    const register unsigned short int USBIP = 4;
    sbit  USBIP_bit at IPR2.B4;
    const register unsigned short int BCL2IP = 5;
    sbit  BCL2IP_bit at IPR2.B5;
    const register unsigned short int SSP2IP = 6;
    sbit  SSP2IP_bit at IPR2.B6;
    const register unsigned short int OSCFIP = 7;
    sbit  OSCFIP_bit at IPR2.B7;

    // PIE3 bits
    const register unsigned short int RTCCIE = 0;
    sbit  RTCCIE_bit at PIE3.B0;
    const register unsigned short int CCP1IE = 1;
    sbit  CCP1IE_bit at PIE3.B1;
    const register unsigned short int CCP2IE = 2;
    sbit  CCP2IE_bit at PIE3.B2;
    const register unsigned short int CTMUIE = 3;
    sbit  CTMUIE_bit at PIE3.B3;
    const register unsigned short int TX2IE = 4;
    sbit  TX2IE_bit at PIE3.B4;
    const register unsigned short int RC2IE = 5;
    sbit  RC2IE_bit at PIE3.B5;
    const register unsigned short int LCDIE = 6;
    sbit  LCDIE_bit at PIE3.B6;
    const register unsigned short int TMR5GIE = 7;
    sbit  TMR5GIE_bit at PIE3.B7;

    // PIR3 bits
    const register unsigned short int RTCCIF = 0;
    sbit  RTCCIF_bit at PIR3.B0;
    const register unsigned short int CCP1IF = 1;
    sbit  CCP1IF_bit at PIR3.B1;
    const register unsigned short int CCP2IF = 2;
    sbit  CCP2IF_bit at PIR3.B2;
    const register unsigned short int CTMUIF = 3;
    sbit  CTMUIF_bit at PIR3.B3;
    const register unsigned short int TX2IF = 4;
    sbit  TX2IF_bit at PIR3.B4;
    const register unsigned short int RC2IF = 5;
    sbit  RC2IF_bit at PIR3.B5;
    const register unsigned short int LCDIF = 6;
    sbit  LCDIF_bit at PIR3.B6;
    const register unsigned short int TMR5GIF = 7;
    sbit  TMR5GIF_bit at PIR3.B7;

    // IPR3 bits
    const register unsigned short int RTCCIP = 0;
    sbit  RTCCIP_bit at IPR3.B0;
    const register unsigned short int CCP1IP = 1;
    sbit  CCP1IP_bit at IPR3.B1;
    const register unsigned short int CCP2IP = 2;
    sbit  CCP2IP_bit at IPR3.B2;
    const register unsigned short int CTMUIP = 3;
    sbit  CTMUIP_bit at IPR3.B3;
    const register unsigned short int TX2IP = 4;
    sbit  TX2IP_bit at IPR3.B4;
    const register unsigned short int RC2IP = 5;
    sbit  RC2IP_bit at IPR3.B5;
    const register unsigned short int LCDIP = 6;
    sbit  LCDIP_bit at IPR3.B6;
    const register unsigned short int TMR5GIP = 7;
    sbit  TMR5GIP_bit at IPR3.B7;

    // PIR6 bits
    const register unsigned short int CMP1IF = 0;
    sbit  CMP1IF_bit at PIR6.B0;
    const register unsigned short int CMP2IF = 1;
    sbit  CMP2IF_bit at PIR6.B1;
    const register unsigned short int CMP3IF = 2;
    sbit  CMP3IF_bit at PIR6.B2;
    const register unsigned short int TX3IF = 4;
    sbit  TX3IF_bit at PIR6.B4;
    const register unsigned short int RC3IF = 5;
    sbit  RC3IF_bit at PIR6.B5;
    const register unsigned short int TX4IF = 6;
    sbit  TX4IF_bit at PIR6.B6;
    const register unsigned short int RC4IF = 7;
    sbit  RC4IF_bit at PIR6.B7;

    // PSPCON bits
    const register unsigned short int PSPMODE = 4;
    sbit  PSPMODE_bit at PSPCON.B4;
    const register unsigned short int IBOV = 5;
    sbit  IBOV_bit at PSPCON.B5;
    const register unsigned short int OBF = 6;
    sbit  OBF_bit at PSPCON.B6;
    const register unsigned short int IBF = 7;
    sbit  IBF_bit at PSPCON.B7;

    // HLVDCON bits
    const register unsigned short int HLVDEN = 4;
    sbit  HLVDEN_bit at HLVDCON.B4;
    const register unsigned short int IRVST = 5;
    sbit  IRVST_bit at HLVDCON.B5;
    const register unsigned short int BGVST = 6;
    sbit  BGVST_bit at HLVDCON.B6;
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

    // IPR6 bits
    const register unsigned short int CMP1IP = 0;
    sbit  CMP1IP_bit at IPR6.B0;
    const register unsigned short int CMP2IP = 1;
    sbit  CMP2IP_bit at IPR6.B1;
    const register unsigned short int CMP3IP = 2;
    sbit  CMP3IP_bit at IPR6.B2;
    const register unsigned short int TX3IP = 4;
    sbit  TX3IP_bit at IPR6.B4;
    const register unsigned short int RC3IP = 5;
    sbit  RC3IP_bit at IPR6.B5;
    const register unsigned short int TX4IP = 6;
    sbit  TX4IP_bit at IPR6.B6;
    const register unsigned short int RC4IP = 7;
    sbit  RC4IP_bit at IPR6.B7;

    // T1GCON bits
    const register unsigned short int T1GVAL = 2;
    sbit  T1GVAL_bit at T1GCON.B2;
    const register unsigned short int T1GGO_NOT_T1DONE = 3;
    sbit  T1GGO_NOT_T1DONE_bit at T1GCON.B3;
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
    const register unsigned short int NOT_T1DONE = 3;
    sbit  NOT_T1DONE_bit at T1GCON.B3;

    // RCSTA, RCSTA1 bits
    sbit  RX9D_RCSTA_bit at RCSTA.B0;
    sbit  OERR_RCSTA_bit at RCSTA.B1;
    sbit  FERR_RCSTA_bit at RCSTA.B2;
    sbit  ADDEN_RCSTA_bit at RCSTA.B3;
    sbit  CREN_RCSTA_bit at RCSTA.B4;
    sbit  SREN_RCSTA_bit at RCSTA.B5;
    sbit  RX9_RCSTA_bit at RCSTA.B6;
    sbit  SPEN_RCSTA_bit at RCSTA.B7;
    const register unsigned short int ADEN = 3;
    sbit  ADEN_bit at RCSTA.B3;

    // TXSTA, TXSTA1 bits
    sbit  TX9D_TXSTA_bit at TXSTA.B0;
    sbit  TRMT_TXSTA_bit at TXSTA.B1;
    sbit  BRGH_TXSTA_bit at TXSTA.B2;
    sbit  SENDB_TXSTA_bit at TXSTA.B3;
    sbit  SYNC_TXSTA_bit at TXSTA.B4;
    sbit  TXEN_TXSTA_bit at TXSTA.B5;
    sbit  TX9_TXSTA_bit at TXSTA.B6;
    sbit  CSRC_TXSTA_bit at TXSTA.B7;

    // SPBRG, SPBRG1 bits
    sbit  BRG0_SPBRG_bit at SPBRG.B0;
    sbit  BRG1_SPBRG_bit at SPBRG.B1;
    sbit  BRG2_SPBRG_bit at SPBRG.B2;
    sbit  BRG3_SPBRG_bit at SPBRG.B3;
    sbit  BRG4_SPBRG_bit at SPBRG.B4;
    sbit  BRG5_SPBRG_bit at SPBRG.B5;
    sbit  BRG6_SPBRG_bit at SPBRG.B6;
    sbit  BRG7_SPBRG_bit at SPBRG.B7;

    // T3GCON bits
    const register unsigned short int T3GVAL = 2;
    sbit  T3GVAL_bit at T3GCON.B2;
    const register unsigned short int T3GGO_NOT_T3DONE = 3;
    sbit  T3GGO_NOT_T3DONE_bit at T3GCON.B3;
    const register unsigned short int T3GSPM = 4;
    sbit  T3GSPM_bit at T3GCON.B4;
    const register unsigned short int T3GTM = 5;
    sbit  T3GTM_bit at T3GCON.B5;
    const register unsigned short int T3GPOL = 6;
    sbit  T3GPOL_bit at T3GCON.B6;
    const register unsigned short int TMR3GE = 7;
    sbit  TMR3GE_bit at T3GCON.B7;
    const register unsigned short int T3GSS0 = 0;
    sbit  T3GSS0_bit at T3GCON.B0;
    const register unsigned short int T3GSS1 = 1;
    sbit  T3GSS1_bit at T3GCON.B1;
    const register unsigned short int T3GGO = 3;
    sbit  T3GGO_bit at T3GCON.B3;
    const register unsigned short int NOT_T3DONE = 3;
    sbit  NOT_T3DONE_bit at T3GCON.B3;

    // T3CON bits
    const register unsigned short int TMR3ON = 0;
    sbit  TMR3ON_bit at T3CON.B0;
    sbit  RD16_T3CON_bit at T3CON.B1;
    const register unsigned short int NOT_T3SYNC = 2;
    sbit  NOT_T3SYNC_bit at T3CON.B2;
    sbit  SOSCEN_T3CON_bit at T3CON.B3;
    const register unsigned short int T3CKPS0 = 4;
    sbit  T3CKPS0_bit at T3CON.B4;
    const register unsigned short int T3CKPS1 = 5;
    sbit  T3CKPS1_bit at T3CON.B5;
    const register unsigned short int TMR3CS0 = 6;
    sbit  TMR3CS0_bit at T3CON.B6;
    const register unsigned short int TMR3CS1 = 7;
    sbit  TMR3CS1_bit at T3CON.B7;

    // PIE4 bits
    const register unsigned short int ECCP3IE = 0;
    sbit  ECCP3IE_bit at PIE4.B0;
    const register unsigned short int CCP4IE = 1;
    sbit  CCP4IE_bit at PIE4.B1;
    const register unsigned short int CCP5IE = 2;
    sbit  CCP5IE_bit at PIE4.B2;
    const register unsigned short int CCP6IE = 3;
    sbit  CCP6IE_bit at PIE4.B3;
    const register unsigned short int CCP7IE = 4;
    sbit  CCP7IE_bit at PIE4.B4;
    const register unsigned short int CCP8IE = 5;
    sbit  CCP8IE_bit at PIE4.B5;
    const register unsigned short int CCP9IE = 6;
    sbit  CCP9IE_bit at PIE4.B6;
    const register unsigned short int CCP10IE = 7;
    sbit  CCP10IE_bit at PIE4.B7;

    // PIR4 bits
    const register unsigned short int ECCP3IF = 0;
    sbit  ECCP3IF_bit at PIR4.B0;
    const register unsigned short int CCP4IF = 1;
    sbit  CCP4IF_bit at PIR4.B1;
    const register unsigned short int CCP5IF = 2;
    sbit  CCP5IF_bit at PIR4.B2;
    const register unsigned short int CCP6IF = 3;
    sbit  CCP6IF_bit at PIR4.B3;
    const register unsigned short int CCP7IF = 4;
    sbit  CCP7IF_bit at PIR4.B4;
    const register unsigned short int CCP8IF = 5;
    sbit  CCP8IF_bit at PIR4.B5;
    const register unsigned short int CCP9IF = 6;
    sbit  CCP9IF_bit at PIR4.B6;
    const register unsigned short int CCP10IF = 7;
    sbit  CCP10IF_bit at PIR4.B7;

    // IPR4 bits
    const register unsigned short int ECCP3IP = 0;
    sbit  ECCP3IP_bit at IPR4.B0;
    const register unsigned short int CCP4IP = 1;
    sbit  CCP4IP_bit at IPR4.B1;
    const register unsigned short int CCP5IP = 2;
    sbit  CCP5IP_bit at IPR4.B2;
    const register unsigned short int CCP6IP = 3;
    sbit  CCP6IP_bit at IPR4.B3;
    const register unsigned short int CCP7IP = 4;
    sbit  CCP7IP_bit at IPR4.B4;
    const register unsigned short int CCP8IP = 5;
    sbit  CCP8IP_bit at IPR4.B5;
    const register unsigned short int CCP9IP = 6;
    sbit  CCP9IP_bit at IPR4.B6;
    const register unsigned short int CCP10IP = 7;
    sbit  CCP10IP_bit at IPR4.B7;

    // PIE5 bits
    const register unsigned short int TMR4IE = 0;
    sbit  TMR4IE_bit at PIE5.B0;
    const register unsigned short int TMR5IE = 1;
    sbit  TMR5IE_bit at PIE5.B1;
    const register unsigned short int TMR6IE = 2;
    sbit  TMR6IE_bit at PIE5.B2;
    const register unsigned short int TMR8IE = 4;
    sbit  TMR8IE_bit at PIE5.B4;
    const register unsigned short int ACTLOCKIE = 5;
    sbit  ACTLOCKIE_bit at PIE5.B5;
    const register unsigned short int ACTORSIE = 6;
    sbit  ACTORSIE_bit at PIE5.B6;

    // PIR5 bits
    const register unsigned short int TMR4IF = 0;
    sbit  TMR4IF_bit at PIR5.B0;
    const register unsigned short int TMR5IF = 1;
    sbit  TMR5IF_bit at PIR5.B1;
    const register unsigned short int TMR6IF = 2;
    sbit  TMR6IF_bit at PIR5.B2;
    const register unsigned short int TMR8IF = 4;
    sbit  TMR8IF_bit at PIR5.B4;
    const register unsigned short int ACTLOCKIF = 5;
    sbit  ACTLOCKIF_bit at PIR5.B5;
    const register unsigned short int ACTORSIF = 6;
    sbit  ACTORSIF_bit at PIR5.B6;

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
    const register unsigned short int P1M0 = 6;
    sbit  P1M0_bit at CCP1CON.B6;
    const register unsigned short int P1M1 = 7;
    sbit  P1M1_bit at CCP1CON.B7;
    const register unsigned short int CCP1Y = 4;
    sbit  CCP1Y_bit at CCP1CON.B4;
    const register unsigned short int CCP1X = 5;
    sbit  CCP1X_bit at CCP1CON.B5;

    // ECCP1DEL bits
    const register unsigned short int P1RSEN = 7;
    sbit  P1RSEN_bit at ECCP1DEL.B7;
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

    // ECCP1AS bits
    const register unsigned short int ECCP1ASE = 7;
    sbit  ECCP1ASE_bit at ECCP1AS.B7;
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

    // CVRCONL bits
    const register unsigned short int CVRNSS = 0;
    sbit  CVRNSS_bit at CVRCONL.B0;
    const register unsigned short int CVROE = 6;
    sbit  CVROE_bit at CVRCONL.B6;
    const register unsigned short int CVREN = 7;
    sbit  CVREN_bit at CVRCONL.B7;
    const register unsigned short int CVRPSS0 = 4;
    sbit  CVRPSS0_bit at CVRCONL.B4;
    const register unsigned short int CVRPSS1 = 5;
    sbit  CVRPSS1_bit at CVRCONL.B5;

    // CVRCONH bits
    const register unsigned short int CVR0 = 0;
    sbit  CVR0_bit at CVRCONH.B0;
    const register unsigned short int CVR1 = 1;
    sbit  CVR1_bit at CVRCONH.B1;
    const register unsigned short int CVR2 = 2;
    sbit  CVR2_bit at CVRCONH.B2;
    const register unsigned short int CVR3 = 3;
    sbit  CVR3_bit at CVRCONH.B3;
    const register unsigned short int CVR4 = 4;
    sbit  CVR4_bit at CVRCONH.B4;

    // ADCON1L bits
    const register unsigned short int DONE = 0;
    sbit  DONE_bit at ADCON1L.B0;
    const register unsigned short int SAMP = 1;
    sbit  SAMP_bit at ADCON1L.B1;
    const register unsigned short int ASAM = 2;
    sbit  ASAM_bit at ADCON1L.B2;
    const register unsigned short int SSRC0 = 4;
    sbit  SSRC0_bit at ADCON1L.B4;
    const register unsigned short int SSRC1 = 5;
    sbit  SSRC1_bit at ADCON1L.B5;
    const register unsigned short int SSRC2 = 6;
    sbit  SSRC2_bit at ADCON1L.B6;
    const register unsigned short int SSRC3 = 7;
    sbit  SSRC3_bit at ADCON1L.B7;

    // ADCON1H bits
    const register unsigned short int MODE12 = 2;
    sbit  MODE12_bit at ADCON1H.B2;
    const register unsigned short int ADON = 7;
    sbit  ADON_bit at ADCON1H.B7;
    const register unsigned short int FORM0 = 0;
    sbit  FORM0_bit at ADCON1H.B0;
    const register unsigned short int FORM1 = 1;
    sbit  FORM1_bit at ADCON1H.B1;

    // CMSTAT bits
    const register unsigned short int C1OUT = 0;
    sbit  C1OUT_bit at CMSTAT.B0;
    const register unsigned short int C2OUT = 1;
    sbit  C2OUT_bit at CMSTAT.B1;
    const register unsigned short int C3OUT = 2;
    sbit  C3OUT_bit at CMSTAT.B2;

    // SSP1CON2 bits
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

    // SSP1CON1 bits
    sbit  CKP_SSP1CON1_bit at SSP1CON1.B4;
    sbit  SSPEN_SSP1CON1_bit at SSP1CON1.B5;
    sbit  SSPOV_SSP1CON1_bit at SSP1CON1.B6;
    sbit  WCOL_SSP1CON1_bit at SSP1CON1.B7;
    sbit  SSPM0_SSP1CON1_bit at SSP1CON1.B0;
    sbit  SSPM1_SSP1CON1_bit at SSP1CON1.B1;
    sbit  SSPM2_SSP1CON1_bit at SSP1CON1.B2;
    sbit  SSPM3_SSP1CON1_bit at SSP1CON1.B3;

    // SSP1STAT bits
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
    sbit  NOT_W_SSP1STAT_bit at SSP1STAT.B2;
    sbit  NOT_A_SSP1STAT_bit at SSP1STAT.B5;
    sbit  NOT_WRITE_SSP1STAT_bit at SSP1STAT.B2;
    sbit  NOT_ADDRESS_SSP1STAT_bit at SSP1STAT.B5;
    sbit  READ_WRITE_SSP1STAT_bit at SSP1STAT.B2;
    sbit  DATA_ADDRESS_SSP1STAT_bit at SSP1STAT.B5;
    sbit  I2C_DAT_SSP1STAT_bit at SSP1STAT.B5;

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
    sbit  RD16_T1CON_bit at T1CON.B1;
    const register unsigned short int NOT_T1SYNC = 2;
    sbit  NOT_T1SYNC_bit at T1CON.B2;
    sbit  SOSCEN_T1CON_bit at T1CON.B3;
    const register unsigned short int T1CKPS0 = 4;
    sbit  T1CKPS0_bit at T1CON.B4;
    const register unsigned short int T1CKPS1 = 5;
    sbit  T1CKPS1_bit at T1CON.B5;
    const register unsigned short int TMR1CS0 = 6;
    sbit  TMR1CS0_bit at T1CON.B6;
    const register unsigned short int TMR1CS1 = 7;
    sbit  TMR1CS1_bit at T1CON.B7;

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
    const register unsigned short int BOR_RCON = 0;
    sbit  BOR_RCON_bit at RCON.B0;
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

    // IOCF bits
    const register unsigned short int IOCF0 = 0;
    sbit  IOCF0_bit at IOCF.B0;
    const register unsigned short int IOCF1 = 1;
    sbit  IOCF1_bit at IOCF.B1;
    const register unsigned short int IOCF2 = 2;
    sbit  IOCF2_bit at IOCF.B2;
    const register unsigned short int IOCF3 = 3;
    sbit  IOCF3_bit at IOCF.B3;
    const register unsigned short int IOCF4 = 4;
    sbit  IOCF4_bit at IOCF.B4;
    const register unsigned short int IOCF5 = 5;
    sbit  IOCF5_bit at IOCF.B5;
    const register unsigned short int IOCF6 = 6;
    sbit  IOCF6_bit at IOCF.B6;
    const register unsigned short int IOCF7 = 7;
    sbit  IOCF7_bit at IOCF.B7;

    // IPR5 bits
    const register unsigned short int TMR4IP = 0;
    sbit  TMR4IP_bit at IPR5.B0;
    const register unsigned short int TMR5IP = 1;
    sbit  TMR5IP_bit at IPR5.B1;
    const register unsigned short int TMR6IP = 2;
    sbit  TMR6IP_bit at IPR5.B2;
    const register unsigned short int TMR8IP = 4;
    sbit  TMR8IP_bit at IPR5.B4;
    const register unsigned short int ACTLOCKIP = 5;
    sbit  ACTLOCKIP_bit at IPR5.B5;
    const register unsigned short int ACTORSIP = 6;
    sbit  ACTORSIP_bit at IPR5.B6;

    // OSCCON bits
    const register unsigned short int IDLEN = 7;
    sbit  IDLEN_bit at OSCCON.B7;
    const register unsigned short int NOSC0 = 0;
    sbit  NOSC0_bit at OSCCON.B0;
    const register unsigned short int NOSC1 = 1;
    sbit  NOSC1_bit at OSCCON.B1;
    const register unsigned short int NOSC2 = 2;
    sbit  NOSC2_bit at OSCCON.B2;
    const register unsigned short int COSC0 = 4;
    sbit  COSC0_bit at OSCCON.B4;
    const register unsigned short int COSC1 = 5;
    sbit  COSC1_bit at OSCCON.B5;
    const register unsigned short int COSC2 = 6;
    sbit  COSC2_bit at OSCCON.B6;

    // T0CON bits
    const register unsigned short int PSA = 3;
    sbit  PSA_bit at T0CON.B3;
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
    const register unsigned short int T0CS0 = 4;
    sbit  T0CS0_bit at T0CON.B4;
    const register unsigned short int T0CS1 = 5;
    sbit  T0CS1_bit at T0CON.B5;

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
    const register unsigned short int IOCIP = 0;
    sbit  IOCIP_bit at INTCON2.B0;
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
    const register unsigned short int IOCIF = 0;
    sbit  IOCIF_bit at INTCON.B0;
    const register unsigned short int INT0IF = 1;
    sbit  INT0IF_bit at INTCON.B1;
    const register unsigned short int TMR0IF = 2;
    sbit  TMR0IF_bit at INTCON.B2;
    const register unsigned short int IOCIE = 3;
    sbit  IOCIE_bit at INTCON.B3;
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
    const register unsigned short int STKOVF = 7;
    sbit  STKOVF_bit at STKPTR.B7;

    // PORTL bits
    sbit  RL7_PORTL_bit at PORTL.B7;
    sbit  RL6_PORTL_bit at PORTL.B6;
    sbit  RL5_PORTL_bit at PORTL.B5;
    sbit  RL4_PORTL_bit at PORTL.B4;
    sbit  RL3_PORTL_bit at PORTL.B3;
    sbit  RL2_PORTL_bit at PORTL.B2;
    sbit  RL1_PORTL_bit at PORTL.B1;
    sbit  RL0_PORTL_bit at PORTL.B0;

    // TRISL bits
    const register unsigned short int TRISL7 = 7;
    sbit  TRISL7_bit at TRISL.B7;
    const register unsigned short int TRISL6 = 6;
    sbit  TRISL6_bit at TRISL.B6;
    const register unsigned short int TRISL5 = 5;
    sbit  TRISL5_bit at TRISL.B5;
    const register unsigned short int TRISL4 = 4;
    sbit  TRISL4_bit at TRISL.B4;
    const register unsigned short int TRISL3 = 3;
    sbit  TRISL3_bit at TRISL.B3;
    const register unsigned short int TRISL2 = 2;
    sbit  TRISL2_bit at TRISL.B2;
    const register unsigned short int TRISL1 = 1;
    sbit  TRISL1_bit at TRISL.B1;
    const register unsigned short int TRISL0 = 0;
    sbit  TRISL0_bit at TRISL.B0;

    // PORTK bits
    const register unsigned short int RK7 = 7;
    sbit  RK7_bit at PORTK.B7;
    const register unsigned short int RK6 = 6;
    sbit  RK6_bit at PORTK.B6;
    const register unsigned short int RK5 = 5;
    sbit  RK5_bit at PORTK.B5;
    const register unsigned short int RK4 = 4;
    sbit  RK4_bit at PORTK.B4;
    const register unsigned short int RK3 = 3;
    sbit  RK3_bit at PORTK.B3;
    const register unsigned short int RK2 = 2;
    sbit  RK2_bit at PORTK.B2;
    const register unsigned short int RK1 = 1;
    sbit  RK1_bit at PORTK.B1;
    const register unsigned short int RK0 = 0;
    sbit  RK0_bit at PORTK.B0;

    // TRISK bits
    const register unsigned short int TRISK7 = 7;
    sbit  TRISK7_bit at TRISK.B7;
    const register unsigned short int TRISK6 = 6;
    sbit  TRISK6_bit at TRISK.B6;
    const register unsigned short int TRISK5 = 5;
    sbit  TRISK5_bit at TRISK.B5;
    const register unsigned short int TRISK4 = 4;
    sbit  TRISK4_bit at TRISK.B4;
    const register unsigned short int TRISK3 = 3;
    sbit  TRISK3_bit at TRISK.B3;
    const register unsigned short int TRISK2 = 2;
    sbit  TRISK2_bit at TRISK.B2;
    const register unsigned short int TRISK1 = 1;
    sbit  TRISK1_bit at TRISK.B1;
    const register unsigned short int TRISK0 = 0;
    sbit  TRISK0_bit at TRISK.B0;

    // PORTVP bits
    sbit  RVP7_PORTVP_bit at PORTVP.B7;
    sbit  RVP6_PORTVP_bit at PORTVP.B6;
    sbit  RVP5_PORTVP_bit at PORTVP.B5;
    sbit  RVP4_PORTVP_bit at PORTVP.B4;
    sbit  RVP3_PORTVP_bit at PORTVP.B3;
    sbit  RVP2_PORTVP_bit at PORTVP.B2;
    sbit  RVP1_PORTVP_bit at PORTVP.B1;
    sbit  RVP0_PORTVP_bit at PORTVP.B0;

    // TRISVP bits
    const register unsigned short int TRISVP7 = 7;
    sbit  TRISVP7_bit at TRISVP.B7;
    const register unsigned short int TRISVP6 = 6;
    sbit  TRISVP6_bit at TRISVP.B6;
    const register unsigned short int TRISVP5 = 5;
    sbit  TRISVP5_bit at TRISVP.B5;
    const register unsigned short int TRISVP4 = 4;
    sbit  TRISVP4_bit at TRISVP.B4;
    const register unsigned short int TRISVP3 = 3;
    sbit  TRISVP3_bit at TRISVP.B3;
    const register unsigned short int TRISVP2 = 2;
    sbit  TRISVP2_bit at TRISVP.B2;
    const register unsigned short int TRISVP1 = 1;
    sbit  TRISVP1_bit at TRISVP.B1;
    const register unsigned short int TRISVP0 = 0;
    sbit  TRISVP0_bit at TRISVP.B0;

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

    // PORTG bits
    const register unsigned short int RG7 = 7;
    sbit  RG7_bit at PORTG.B7;
    const register unsigned short int RG6 = 6;
    sbit  RG6_bit at PORTG.B6;
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

    // PORTH bits
    const register unsigned short int RH7 = 7;
    sbit  RH7_bit at PORTH.B7;
    const register unsigned short int RH6 = 6;
    sbit  RH6_bit at PORTH.B6;
    const register unsigned short int RH5 = 5;
    sbit  RH5_bit at PORTH.B5;
    const register unsigned short int RH4 = 4;
    sbit  RH4_bit at PORTH.B4;
    const register unsigned short int RH3 = 3;
    sbit  RH3_bit at PORTH.B3;
    const register unsigned short int RH2 = 2;
    sbit  RH2_bit at PORTH.B2;
    const register unsigned short int RH1 = 1;
    sbit  RH1_bit at PORTH.B1;
    const register unsigned short int RH0 = 0;
    sbit  RH0_bit at PORTH.B0;

    // PORTJ bits
    const register unsigned short int RJ7 = 7;
    sbit  RJ7_bit at PORTJ.B7;
    const register unsigned short int RJ6 = 6;
    sbit  RJ6_bit at PORTJ.B6;
    const register unsigned short int RJ5 = 5;
    sbit  RJ5_bit at PORTJ.B5;
    const register unsigned short int RJ4 = 4;
    sbit  RJ4_bit at PORTJ.B4;
    const register unsigned short int RJ3 = 3;
    sbit  RJ3_bit at PORTJ.B3;
    const register unsigned short int RJ2 = 2;
    sbit  RJ2_bit at PORTJ.B2;
    const register unsigned short int RJ1 = 1;
    sbit  RJ1_bit at PORTJ.B1;
    const register unsigned short int RJ0 = 0;
    sbit  RJ0_bit at PORTJ.B0;

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

    // TRISG bits
    const register unsigned short int TRISG7 = 7;
    sbit  TRISG7_bit at TRISG.B7;
    const register unsigned short int TRISG6 = 6;
    sbit  TRISG6_bit at TRISG.B6;
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

    // TRISH bits
    const register unsigned short int TRISH7 = 7;
    sbit  TRISH7_bit at TRISH.B7;
    const register unsigned short int TRISH6 = 6;
    sbit  TRISH6_bit at TRISH.B6;
    const register unsigned short int TRISH5 = 5;
    sbit  TRISH5_bit at TRISH.B5;
    const register unsigned short int TRISH4 = 4;
    sbit  TRISH4_bit at TRISH.B4;
    const register unsigned short int TRISH3 = 3;
    sbit  TRISH3_bit at TRISH.B3;
    const register unsigned short int TRISH2 = 2;
    sbit  TRISH2_bit at TRISH.B2;
    const register unsigned short int TRISH1 = 1;
    sbit  TRISH1_bit at TRISH.B1;
    const register unsigned short int TRISH0 = 0;
    sbit  TRISH0_bit at TRISH.B0;

    // TRISJ bits
    const register unsigned short int TRISJ7 = 7;
    sbit  TRISJ7_bit at TRISJ.B7;
    const register unsigned short int TRISJ6 = 6;
    sbit  TRISJ6_bit at TRISJ.B6;
    const register unsigned short int TRISJ5 = 5;
    sbit  TRISJ5_bit at TRISJ.B5;
    const register unsigned short int TRISJ4 = 4;
    sbit  TRISJ4_bit at TRISJ.B4;
    const register unsigned short int TRISJ3 = 3;
    sbit  TRISJ3_bit at TRISJ.B3;
    const register unsigned short int TRISJ2 = 2;
    sbit  TRISJ2_bit at TRISJ.B2;
    const register unsigned short int TRISJ1 = 1;
    sbit  TRISJ1_bit at TRISJ.B1;
    const register unsigned short int TRISJ0 = 0;
    sbit  TRISJ0_bit at TRISJ.B0;

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
