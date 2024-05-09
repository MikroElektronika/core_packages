// Definition file for P24FJ32GA102

// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;
const char B8 = 8;
const char B9 = 9;
const char B10 = 10;
const char B11 = 11;
const char B12 = 12;
const char B13 = 13;
const char B14 = 14;
const char B15 = 15;

const unsigned long __FLASH_SIZE = 0x000083F4;
const unsigned long __XRAM_RAM_SIZE = 0x00001FFF;
const unsigned long __XRAM_RAM_START = 0x800;
const long __CONST_FAR_PREFIX = 0x0;
const char __FOSC_PER_CYC = 2;

// Primary Interrupt Vector Table Constants

const unsigned IVT_ADDR_RESERVEDTRAP0        = 0x0004;
const unsigned IVT_ADDR_OSCILLATORFAIL       = 0x0006;
const unsigned IVT_ADDR_ADDRESSERROR         = 0x0008;
const unsigned IVT_ADDR_STACKERROR           = 0x000A;
const unsigned IVT_ADDR_MATHERROR            = 0x000C;
const unsigned IVT_ADDR_RESERVEDTRAP5        = 0x000E;
const unsigned IVT_ADDR_RESERVEDTRAP6        = 0x0010;
const unsigned IVT_ADDR_RESERVEDTRAP7        = 0x0012;
const unsigned IVT_ADDR_INT0INTERRUPT        = 0x0014;
const unsigned IVT_ADDR_IC1INTERRUPT         = 0x0016;
const unsigned IVT_ADDR_OC1INTERRUPT         = 0x0018;
const unsigned IVT_ADDR_T1INTERRUPT          = 0x001A;
const unsigned IVT_ADDR_INTERRUPT4           = 0x001C;
const unsigned IVT_ADDR_IC2INTERRUPT         = 0x001E;
const unsigned IVT_ADDR_OC2INTERRUPT         = 0x0020;
const unsigned IVT_ADDR_T2INTERRUPT          = 0x0022;
const unsigned IVT_ADDR_T3INTERRUPT          = 0x0024;
const unsigned IVT_ADDR_SPI1ERRINTERRUPT     = 0x0026;
const unsigned IVT_ADDR_SPI1INTERRUPT        = 0x0028;
const unsigned IVT_ADDR_U1RXINTERRUPT        = 0x002A;
const unsigned IVT_ADDR_U1TXINTERRUPT        = 0x002C;
const unsigned IVT_ADDR_ADC1INTERRUPT        = 0x002E;
const unsigned IVT_ADDR_INTERRUPT14          = 0x0030;
const unsigned IVT_ADDR_INTERRUPT15          = 0x0032;
const unsigned IVT_ADDR_SI2C1INTERRUPT       = 0x0034;
const unsigned IVT_ADDR_MI2C1INTERRUPT       = 0x0036;
const unsigned IVT_ADDR_COMPINTERRUPT        = 0x0038;
const unsigned IVT_ADDR_CNINTERRUPT          = 0x003A;
const unsigned IVT_ADDR_INT1INTERRUPT        = 0x003C;
const unsigned IVT_ADDR_INTERRUPT21          = 0x003E;
const unsigned IVT_ADDR_INTERRUPT22          = 0x0040;
const unsigned IVT_ADDR_INTERRUPT23          = 0x0042;
const unsigned IVT_ADDR_INTERRUPT24          = 0x0044;
const unsigned IVT_ADDR_OC3INTERRUPT         = 0x0046;
const unsigned IVT_ADDR_OC4INTERRUPT         = 0x0048;
const unsigned IVT_ADDR_T4INTERRUPT          = 0x004A;
const unsigned IVT_ADDR_T5INTERRUPT          = 0x004C;
const unsigned IVT_ADDR_INT2INTERRUPT        = 0x004E;
const unsigned IVT_ADDR_U2RXINTERRUPT        = 0x0050;
const unsigned IVT_ADDR_U2TXINTERRUPT        = 0x0052;
const unsigned IVT_ADDR_SPI2ERRINTERRUPT     = 0x0054;
const unsigned IVT_ADDR_SPI2INTERRUPT        = 0x0056;
const unsigned IVT_ADDR_INTERRUPT34          = 0x0058;
const unsigned IVT_ADDR_INTERRUPT35          = 0x005A;
const unsigned IVT_ADDR_INTERRUPT36          = 0x005C;
const unsigned IVT_ADDR_IC3INTERRUPT         = 0x005E;
const unsigned IVT_ADDR_IC4INTERRUPT         = 0x0060;
const unsigned IVT_ADDR_IC5INTERRUPT         = 0x0062;
const unsigned IVT_ADDR_INTERRUPT40          = 0x0064;
const unsigned IVT_ADDR_OC5INTERRUPT         = 0x0066;
const unsigned IVT_ADDR_INTERRUPT42          = 0x0068;
const unsigned IVT_ADDR_INTERRUPT43          = 0x006A;
const unsigned IVT_ADDR_INTERRUPT44          = 0x006C;
const unsigned IVT_ADDR_PMPINTERRUPT         = 0x006E;
const unsigned IVT_ADDR_INTERRUPT46          = 0x0070;
const unsigned IVT_ADDR_INTERRUPT47          = 0x0072;
const unsigned IVT_ADDR_INTERRUPT48          = 0x0074;
const unsigned IVT_ADDR_SI2C2INTERRUPT       = 0x0076;
const unsigned IVT_ADDR_MI2C2INTERRUPT       = 0x0078;
const unsigned IVT_ADDR_INTERRUPT51          = 0x007A;
const unsigned IVT_ADDR_INTERRUPT52          = 0x007C;
const unsigned IVT_ADDR_INTERRUPT53          = 0x007E;
const unsigned IVT_ADDR_INTERRUPT54          = 0x0080;
const unsigned IVT_ADDR_INTERRUPT55          = 0x0082;
const unsigned IVT_ADDR_INTERRUPT56          = 0x0084;
const unsigned IVT_ADDR_INTERRUPT57          = 0x0086;
const unsigned IVT_ADDR_INTERRUPT58          = 0x0088;
const unsigned IVT_ADDR_INTERRUPT59          = 0x008A;
const unsigned IVT_ADDR_INTERRUPT60          = 0x008C;
const unsigned IVT_ADDR_INTERRUPT61          = 0x008E;
const unsigned IVT_ADDR_RTCCINTERRUPT        = 0x0090;
const unsigned IVT_ADDR_INTERRUPT63          = 0x0092;
const unsigned IVT_ADDR_INTERRUPT64          = 0x0094;
const unsigned IVT_ADDR_U1ERRINTERRUPT       = 0x0096;
const unsigned IVT_ADDR_U2ERRINTERRUPT       = 0x0098;
const unsigned IVT_ADDR_CRCINTERRUPT         = 0x009A;
const unsigned IVT_ADDR_INTERRUPT68          = 0x009C;
const unsigned IVT_ADDR_INTERRUPT69          = 0x009E;
const unsigned IVT_ADDR_INTERRUPT70          = 0x00A0;
const unsigned IVT_ADDR_INTERRUPT71          = 0x00A2;
const unsigned IVT_ADDR_LVDINTERRUPT         = 0x00A4;
const unsigned IVT_ADDR_INTERRUPT73          = 0x00A6;
const unsigned IVT_ADDR_INTERRUPT74          = 0x00A8;
const unsigned IVT_ADDR_INTERRUPT75          = 0x00AA;
const unsigned IVT_ADDR_INTERRUPT76          = 0x00AC;
const unsigned IVT_ADDR_CTMUINTERRUPT        = 0x00AE;
const unsigned IVT_ADDR_INTERRUPT78          = 0x00B0;
const unsigned IVT_ADDR_INTERRUPT79          = 0x00B2;
const unsigned IVT_ADDR_INTERRUPT80          = 0x00B4;
const unsigned IVT_ADDR_INTERRUPT81          = 0x00B6;
const unsigned IVT_ADDR_INTERRUPT82          = 0x00B8;
const unsigned IVT_ADDR_INTERRUPT83          = 0x00BA;
const unsigned IVT_ADDR_INTERRUPT84          = 0x00BC;
const unsigned IVT_ADDR_INTERRUPT85          = 0x00BE;
const unsigned IVT_ADDR_INTERRUPT86          = 0x00C0;
const unsigned IVT_ADDR_INTERRUPT87          = 0x00C2;
const unsigned IVT_ADDR_INTERRUPT88          = 0x00C4;
const unsigned IVT_ADDR_INTERRUPT89          = 0x00C6;
const unsigned IVT_ADDR_INTERRUPT90          = 0x00C8;
const unsigned IVT_ADDR_INTERRUPT91          = 0x00CA;
const unsigned IVT_ADDR_INTERRUPT92          = 0x00CC;
const unsigned IVT_ADDR_INTERRUPT93          = 0x00CE;
const unsigned IVT_ADDR_INTERRUPT94          = 0x00D0;
const unsigned IVT_ADDR_INTERRUPT95          = 0x00D2;
const unsigned IVT_ADDR_INTERRUPT96          = 0x00D4;
const unsigned IVT_ADDR_INTERRUPT97          = 0x00D6;
const unsigned IVT_ADDR_INTERRUPT98          = 0x00D8;
const unsigned IVT_ADDR_INTERRUPT99          = 0x00DA;
const unsigned IVT_ADDR_INTERRUPT100         = 0x00DC;
const unsigned IVT_ADDR_INTERRUPT101         = 0x00DE;
const unsigned IVT_ADDR_INTERRUPT102         = 0x00E0;
const unsigned IVT_ADDR_INTERRUPT103         = 0x00E2;
const unsigned IVT_ADDR_INTERRUPT104         = 0x00E4;
const unsigned IVT_ADDR_INTERRUPT105         = 0x00E6;
const unsigned IVT_ADDR_INTERRUPT106         = 0x00E8;
const unsigned IVT_ADDR_INTERRUPT107         = 0x00EA;
const unsigned IVT_ADDR_INTERRUPT108         = 0x00EC;
const unsigned IVT_ADDR_INTERRUPT109         = 0x00EE;
const unsigned IVT_ADDR_INTERRUPT110         = 0x00F0;
const unsigned IVT_ADDR_INTERRUPT111         = 0x00F2;
const unsigned IVT_ADDR_INTERRUPT112         = 0x00F4;
const unsigned IVT_ADDR_INTERRUPT113         = 0x00F6;
const unsigned IVT_ADDR_INTERRUPT114         = 0x00F8;
const unsigned IVT_ADDR_INTERRUPT115         = 0x00FA;
const unsigned IVT_ADDR_INTERRUPT116         = 0x00FC;
const unsigned IVT_ADDR_INTERRUPT117         = 0x00FE;

// Alternate Interrupt Vector Table Constants

const unsigned AIVT_ADDR_ALTRESERVEDTRAP0     = 0x0104;
const unsigned AIVT_ADDR_ALTOSCILLATORFAIL    = 0x0106;
const unsigned AIVT_ADDR_ALTADDRESSERROR      = 0x0108;
const unsigned AIVT_ADDR_ALTSTACKERROR        = 0x010A;
const unsigned AIVT_ADDR_ALTMATHERROR         = 0x010C;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP5     = 0x010E;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP6     = 0x0110;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP7     = 0x0112;
const unsigned AIVT_ADDR_ALTINT0INTERRUPT     = 0x0114;
const unsigned AIVT_ADDR_ALTIC1INTERRUPT      = 0x0116;
const unsigned AIVT_ADDR_ALTOC1INTERRUPT      = 0x0118;
const unsigned AIVT_ADDR_ALTT1INTERRUPT       = 0x011A;
const unsigned AIVT_ADDR_ALTINTERRUPT4        = 0x011C;
const unsigned AIVT_ADDR_ALTIC2INTERRUPT      = 0x011E;
const unsigned AIVT_ADDR_ALTOC2INTERRUPT      = 0x0120;
const unsigned AIVT_ADDR_ALTT2INTERRUPT       = 0x0122;
const unsigned AIVT_ADDR_ALTT3INTERRUPT       = 0x0124;
const unsigned AIVT_ADDR_ALTSPI1ERRINTERRUPT  = 0x0126;
const unsigned AIVT_ADDR_ALTSPI1INTERRUPT     = 0x0128;
const unsigned AIVT_ADDR_ALTU1RXINTERRUPT     = 0x012A;
const unsigned AIVT_ADDR_ALTU1TXINTERRUPT     = 0x012C;
const unsigned AIVT_ADDR_ALTADC1INTERRUPT     = 0x012E;
const unsigned AIVT_ADDR_ALTINTERRUPT14       = 0x0130;
const unsigned AIVT_ADDR_ALTINTERRUPT15       = 0x0132;
const unsigned AIVT_ADDR_ALTSI2C1INTERRUPT    = 0x0134;
const unsigned AIVT_ADDR_ALTMI2C1INTERRUPT    = 0x0136;
const unsigned AIVT_ADDR_ALTCOMPINTERRUPT     = 0x0138;
const unsigned AIVT_ADDR_ALTCNINTERRUPT       = 0x013A;
const unsigned AIVT_ADDR_ALTINT1INTERRUPT     = 0x013C;
const unsigned AIVT_ADDR_ALTINTERRUPT21       = 0x013E;
const unsigned AIVT_ADDR_ALTINTERRUPT22       = 0x0140;
const unsigned AIVT_ADDR_ALTINTERRUPT23       = 0x0142;
const unsigned AIVT_ADDR_ALTINTERRUPT24       = 0x0144;
const unsigned AIVT_ADDR_ALTOC3INTERRUPT      = 0x0146;
const unsigned AIVT_ADDR_ALTOC4INTERRUPT      = 0x0148;
const unsigned AIVT_ADDR_ALTT4INTERRUPT       = 0x014A;
const unsigned AIVT_ADDR_ALTT5INTERRUPT       = 0x014C;
const unsigned AIVT_ADDR_ALTINT2INTERRUPT     = 0x014E;
const unsigned AIVT_ADDR_ALTU2RXINTERRUPT     = 0x0150;
const unsigned AIVT_ADDR_ALTU2TXINTERRUPT     = 0x0152;
const unsigned AIVT_ADDR_ALTSPI2ERRINTERRUPT  = 0x0154;
const unsigned AIVT_ADDR_ALTSPI2INTERRUPT     = 0x0156;
const unsigned AIVT_ADDR_ALTINTERRUPT34       = 0x0158;
const unsigned AIVT_ADDR_ALTINTERRUPT35       = 0x015A;
const unsigned AIVT_ADDR_ALTINTERRUPT36       = 0x015C;
const unsigned AIVT_ADDR_ALTIC3INTERRUPT      = 0x015E;
const unsigned AIVT_ADDR_ALTIC4INTERRUPT      = 0x0160;
const unsigned AIVT_ADDR_ALTIC5INTERRUPT      = 0x0162;
const unsigned AIVT_ADDR_ALTINTERRUPT40       = 0x0164;
const unsigned AIVT_ADDR_ALTOC5INTERRUPT      = 0x0166;
const unsigned AIVT_ADDR_ALTINTERRUPT42       = 0x0168;
const unsigned AIVT_ADDR_ALTINTERRUPT43       = 0x016A;
const unsigned AIVT_ADDR_ALTINTERRUPT44       = 0x016C;
const unsigned AIVT_ADDR_ALTPMPINTERRUPT      = 0x016E;
const unsigned AIVT_ADDR_ALTINTERRUPT46       = 0x0170;
const unsigned AIVT_ADDR_ALTINTERRUPT47       = 0x0172;
const unsigned AIVT_ADDR_ALTINTERRUPT48       = 0x0174;
const unsigned AIVT_ADDR_ALTSI2C2INTERRUPT    = 0x0176;
const unsigned AIVT_ADDR_ALTMI2C2INTERRUPT    = 0x0178;
const unsigned AIVT_ADDR_ALTINTERRUPT51       = 0x017A;
const unsigned AIVT_ADDR_ALTINTERRUPT52       = 0x017C;
const unsigned AIVT_ADDR_ALTINTERRUPT53       = 0x017E;
const unsigned AIVT_ADDR_ALTINTERRUPT54       = 0x0180;
const unsigned AIVT_ADDR_ALTINTERRUPT55       = 0x0182;
const unsigned AIVT_ADDR_ALTINTERRUPT56       = 0x0184;
const unsigned AIVT_ADDR_ALTINTERRUPT57       = 0x0186;
const unsigned AIVT_ADDR_ALTINTERRUPT58       = 0x0188;
const unsigned AIVT_ADDR_ALTINTERRUPT59       = 0x018A;
const unsigned AIVT_ADDR_ALTINTERRUPT60       = 0x018C;
const unsigned AIVT_ADDR_ALTINTERRUPT61       = 0x018E;
const unsigned AIVT_ADDR_ALTRTCCINTERRUPT     = 0x0190;
const unsigned AIVT_ADDR_ALTINTERRUPT63       = 0x0192;
const unsigned AIVT_ADDR_ALTINTERRUPT64       = 0x0194;
const unsigned AIVT_ADDR_ALTU1ERRINTERRUPT    = 0x0196;
const unsigned AIVT_ADDR_ALTU2ERRINTERRUPT    = 0x0198;
const unsigned AIVT_ADDR_ALTCRCINTERRUPT      = 0x019A;
const unsigned AIVT_ADDR_ALTINTERRUPT68       = 0x019C;
const unsigned AIVT_ADDR_ALTINTERRUPT69       = 0x019E;
const unsigned AIVT_ADDR_ALTINTERRUPT70       = 0x01A0;
const unsigned AIVT_ADDR_ALTINTERRUPT71       = 0x01A2;
const unsigned AIVT_ADDR_ALTLVDINTERRUPT      = 0x01A4;
const unsigned AIVT_ADDR_ALTINTERRUPT73       = 0x01A6;
const unsigned AIVT_ADDR_ALTINTERRUPT74       = 0x01A8;
const unsigned AIVT_ADDR_ALTINTERRUPT75       = 0x01AA;
const unsigned AIVT_ADDR_ALTINTERRUPT76       = 0x01AC;
const unsigned AIVT_ADDR_ALTCTMUINTERRUPT     = 0x01AE;
const unsigned AIVT_ADDR_ALTINTERRUPT78       = 0x01B0;
const unsigned AIVT_ADDR_ALTINTERRUPT79       = 0x01B2;
const unsigned AIVT_ADDR_ALTINTERRUPT80       = 0x01B4;
const unsigned AIVT_ADDR_ALTINTERRUPT81       = 0x01B6;
const unsigned AIVT_ADDR_ALTINTERRUPT82       = 0x01B8;
const unsigned AIVT_ADDR_ALTINTERRUPT83       = 0x01BA;
const unsigned AIVT_ADDR_ALTINTERRUPT84       = 0x01BC;
const unsigned AIVT_ADDR_ALTINTERRUPT85       = 0x01BE;
const unsigned AIVT_ADDR_ALTINTERRUPT86       = 0x01C0;
const unsigned AIVT_ADDR_ALTINTERRUPT87       = 0x01C2;
const unsigned AIVT_ADDR_ALTINTERRUPT88       = 0x01C4;
const unsigned AIVT_ADDR_ALTINTERRUPT89       = 0x01C6;
const unsigned AIVT_ADDR_ALTINTERRUPT90       = 0x01C8;
const unsigned AIVT_ADDR_ALTINTERRUPT91       = 0x01CA;
const unsigned AIVT_ADDR_ALTINTERRUPT92       = 0x01CC;
const unsigned AIVT_ADDR_ALTINTERRUPT93       = 0x01CE;
const unsigned AIVT_ADDR_ALTINTERRUPT94       = 0x01D0;
const unsigned AIVT_ADDR_ALTINTERRUPT95       = 0x01D2;
const unsigned AIVT_ADDR_ALTINTERRUPT96       = 0x01D4;
const unsigned AIVT_ADDR_ALTINTERRUPT97       = 0x01D6;
const unsigned AIVT_ADDR_ALTINTERRUPT98       = 0x01D8;
const unsigned AIVT_ADDR_ALTINTERRUPT99       = 0x01DA;
const unsigned AIVT_ADDR_ALTINTERRUPT100      = 0x01DC;
const unsigned AIVT_ADDR_ALTINTERRUPT101      = 0x01DE;
const unsigned AIVT_ADDR_ALTINTERRUPT102      = 0x01E0;
const unsigned AIVT_ADDR_ALTINTERRUPT103      = 0x01E2;
const unsigned AIVT_ADDR_ALTINTERRUPT104      = 0x01E4;
const unsigned AIVT_ADDR_ALTINTERRUPT105      = 0x01E6;
const unsigned AIVT_ADDR_ALTINTERRUPT106      = 0x01E8;
const unsigned AIVT_ADDR_ALTINTERRUPT107      = 0x01EA;
const unsigned AIVT_ADDR_ALTINTERRUPT108      = 0x01EC;
const unsigned AIVT_ADDR_ALTINTERRUPT109      = 0x01EE;
const unsigned AIVT_ADDR_ALTINTERRUPT110      = 0x01F0;
const unsigned AIVT_ADDR_ALTINTERRUPT111      = 0x01F2;
const unsigned AIVT_ADDR_ALTINTERRUPT112      = 0x01F4;
const unsigned AIVT_ADDR_ALTINTERRUPT113      = 0x01F6;
const unsigned AIVT_ADDR_ALTINTERRUPT114      = 0x01F8;
const unsigned AIVT_ADDR_ALTINTERRUPT115      = 0x01FA;
const unsigned AIVT_ADDR_ALTINTERRUPT116      = 0x01FC;
const unsigned AIVT_ADDR_ALTINTERRUPT117      = 0x01FE;

// Working space registers
rx unsigned int W0  absolute 0x0000;
rx unsigned int W1  absolute 0x0002;
rx unsigned int W2  absolute 0x0004;
rx unsigned int W3  absolute 0x0006;
rx unsigned int W4  absolute 0x0008;
rx unsigned int W5  absolute 0x000A;
rx unsigned int W6  absolute 0x000C;
rx unsigned int W7  absolute 0x000E;
rx unsigned int W8  absolute 0x0010;
rx unsigned int W9  absolute 0x0012;
rx unsigned int W10 absolute 0x0014;
rx unsigned int W11 absolute 0x0016;
rx unsigned int W12 absolute 0x0018;
rx unsigned int W13 absolute 0x001A;
rx unsigned int W14 absolute 0x001C;
rx unsigned int W15 absolute 0x001E;

const register unsigned short int A      = 0;
const register unsigned short int B      = 1;

const unsigned short ICS_AUTO                  =     0;
const unsigned short ICS_OFF                   =     3;


// Special function registers (SFRs)
rx  unsigned int volatile WREG             absolute 0x0000;
rx  unsigned int volatile WREG0            absolute 0x0000;
rx  unsigned int volatile WREG1            absolute 0x0002;
rx  unsigned int volatile WREG2            absolute 0x0004;
rx  unsigned int volatile WREG3            absolute 0x0006;
rx  unsigned int volatile WREG4            absolute 0x0008;
rx  unsigned int volatile WREG5            absolute 0x000A;
rx  unsigned int volatile WREG6            absolute 0x000C;
rx  unsigned int volatile WREG7            absolute 0x000E;
rx  unsigned int volatile WREG8            absolute 0x0010;
rx  unsigned int volatile WREG9            absolute 0x0012;
rx  unsigned int volatile WREG10           absolute 0x0014;
rx  unsigned int volatile WREG11           absolute 0x0016;
rx  unsigned int volatile WREG12           absolute 0x0018;
rx  unsigned int volatile WREG13           absolute 0x001A;
rx  unsigned int volatile WREG14           absolute 0x001C;
rx  unsigned int volatile WREG15           absolute 0x001E;
sfr unsigned int volatile SPLIM            absolute 0x0020;
sfr unsigned int volatile PCL              absolute 0x002E;
sfr unsigned int volatile PCH              absolute 0x0030;
sfr unsigned int volatile TBLPAG           absolute 0x0032;
sfr unsigned int volatile PSVPAG           absolute 0x0034;
sfr unsigned int volatile RCOUNT           absolute 0x0036;
sfr unsigned int volatile SR               absolute 0x0042;
sfr unsigned int volatile CORCON           absolute 0x0044;
sfr unsigned int volatile DISICNT          absolute 0x0052;
sfr unsigned int volatile CNEN1            absolute 0x0060;
sfr unsigned int volatile CNEN2            absolute 0x0062;
sfr unsigned int volatile CNPU1            absolute 0x0068;
sfr unsigned int volatile CNPU2            absolute 0x006A;
sfr unsigned int volatile INTCON1          absolute 0x0080;
sfr unsigned int volatile INTCON2          absolute 0x0082;
sfr unsigned int volatile IFS0             absolute 0x0084;
sfr unsigned int volatile IFS1             absolute 0x0086;
sfr unsigned int volatile IFS2             absolute 0x0088;
sfr unsigned int volatile IFS3             absolute 0x008A;
sfr unsigned int volatile IFS4             absolute 0x008C;
sfr unsigned int          IEC0             absolute 0x0094;
sfr unsigned int          IEC1             absolute 0x0096;
sfr unsigned int          IEC2             absolute 0x0098;
sfr unsigned int          IEC3             absolute 0x009A;
sfr unsigned int          IEC4             absolute 0x009C;
sfr unsigned int          IPC0             absolute 0x00A4;
sfr unsigned int          IPC1             absolute 0x00A6;
sfr unsigned int          IPC2             absolute 0x00A8;
sfr unsigned int          IPC3             absolute 0x00AA;
sfr unsigned int          IPC4             absolute 0x00AC;
sfr unsigned int          IPC5             absolute 0x00AE;
sfr unsigned int          IPC6             absolute 0x00B0;
sfr unsigned int          IPC7             absolute 0x00B2;
sfr unsigned int          IPC8             absolute 0x00B4;
sfr unsigned int          IPC9             absolute 0x00B6;
sfr unsigned int          IPC10            absolute 0x00B8;
sfr unsigned int          IPC11            absolute 0x00BA;
sfr unsigned int          IPC12            absolute 0x00BC;
sfr unsigned int          IPC15            absolute 0x00C2;
sfr unsigned int          IPC16            absolute 0x00C4;
sfr unsigned int          IPC18            absolute 0x00C8;
sfr unsigned int          IPC19            absolute 0x00CA;
sfr unsigned int volatile INTTREG          absolute 0x00E0;
sfr unsigned int volatile TMR1             absolute 0x0100;
sfr unsigned int volatile PR1              absolute 0x0102;
sfr unsigned int volatile T1CON            absolute 0x0104;
sfr unsigned int volatile TMR2             absolute 0x0106;
sfr unsigned int volatile TMR3HLD          absolute 0x0108;
sfr unsigned int volatile TMR3             absolute 0x010A;
sfr unsigned int volatile PR2              absolute 0x010C;
sfr unsigned int volatile PR3              absolute 0x010E;
sfr unsigned int volatile T2CON            absolute 0x0110;
sfr unsigned int volatile T3CON            absolute 0x0112;
sfr unsigned int volatile TMR4             absolute 0x0114;
sfr unsigned int volatile TMR5HLD          absolute 0x0116;
sfr unsigned int volatile TMR5             absolute 0x0118;
sfr unsigned int volatile PR4              absolute 0x011A;
sfr unsigned int volatile PR5              absolute 0x011C;
sfr unsigned int volatile T4CON            absolute 0x011E;
sfr unsigned int volatile T5CON            absolute 0x0120;
sfr unsigned int volatile IC1CON1          absolute 0x0140;
sfr unsigned int volatile IC1CON2          absolute 0x0142;
sfr unsigned int volatile IC1BUF           absolute 0x0144;
sfr unsigned int volatile IC1TMR           absolute 0x0146;
sfr unsigned int volatile IC2CON1          absolute 0x0148;
sfr unsigned int volatile IC2CON2          absolute 0x014A;
sfr unsigned int volatile IC2BUF           absolute 0x014C;
sfr unsigned int volatile IC2TMR           absolute 0x014E;
sfr unsigned int volatile IC3CON1          absolute 0x0150;
sfr unsigned int volatile IC3CON2          absolute 0x0152;
sfr unsigned int volatile IC3BUF           absolute 0x0154;
sfr unsigned int volatile IC3TMR           absolute 0x0156;
sfr unsigned int volatile IC4CON1          absolute 0x0158;
sfr unsigned int volatile IC4CON2          absolute 0x015A;
sfr unsigned int volatile IC4BUF           absolute 0x015C;
sfr unsigned int volatile IC4TMR           absolute 0x015E;
sfr unsigned int volatile IC5CON1          absolute 0x0160;
sfr unsigned int volatile IC5CON2          absolute 0x0162;
sfr unsigned int volatile IC5BUF           absolute 0x0164;
sfr unsigned int volatile IC5TMR           absolute 0x0166;
sfr unsigned int volatile OC1CON1          absolute 0x0190;
sfr unsigned int volatile OC1CON2          absolute 0x0192;
sfr unsigned int          OC1RS            absolute 0x0194;
sfr unsigned int volatile OC1R             absolute 0x0196;
sfr unsigned int volatile OC1TMR           absolute 0x0198;
sfr unsigned int volatile OC2CON1          absolute 0x019A;
sfr unsigned int volatile OC2CON2          absolute 0x019C;
sfr unsigned int          OC2RS            absolute 0x019E;
sfr unsigned int volatile OC2R             absolute 0x01A0;
sfr unsigned int volatile OC2TMR           absolute 0x01A2;
sfr unsigned int volatile OC3CON1          absolute 0x01A4;
sfr unsigned int volatile OC3CON2          absolute 0x01A6;
sfr unsigned int          OC3RS            absolute 0x01A8;
sfr unsigned int volatile OC3R             absolute 0x01AA;
sfr unsigned int volatile OC3TMR           absolute 0x01AC;
sfr unsigned int volatile OC4CON1          absolute 0x01AE;
sfr unsigned int volatile OC4CON2          absolute 0x01B0;
sfr unsigned int          OC4RS            absolute 0x01B2;
sfr unsigned int volatile OC4R             absolute 0x01B4;
sfr unsigned int volatile OC4TMR           absolute 0x01B6;
sfr unsigned int volatile OC5CON1          absolute 0x01B8;
sfr unsigned int volatile OC5CON2          absolute 0x01BA;
sfr unsigned int          OC5RS            absolute 0x01BC;
sfr unsigned int volatile OC5R             absolute 0x01BE;
sfr unsigned int volatile OC5TMR           absolute 0x01C0;
sfr unsigned int volatile I2C1RCV          absolute 0x0200;
sfr unsigned int volatile I2C1TRN          absolute 0x0202;
sfr unsigned int          I2C1BRG          absolute 0x0204;
sfr unsigned int volatile I2C1CON          absolute 0x0206;
sfr unsigned int volatile I2C1STAT         absolute 0x0208;
sfr unsigned int volatile I2C1ADD          absolute 0x020A;
sfr unsigned int volatile I2C1MSK          absolute 0x020C;
sfr unsigned int volatile I2C2RCV          absolute 0x0210;
sfr unsigned int volatile I2C2TRN          absolute 0x0212;
sfr unsigned int          I2C2BRG          absolute 0x0214;
sfr unsigned int volatile I2C2CON          absolute 0x0216;
sfr unsigned int volatile I2C2STAT         absolute 0x0218;
sfr unsigned int volatile I2C2ADD          absolute 0x021A;
sfr unsigned int volatile I2C2MSK          absolute 0x021C;
sfr unsigned int volatile U1MODE           absolute 0x0220;
sfr unsigned int volatile U1STA            absolute 0x0222;
sfr unsigned int          U1TXREG          absolute 0x0224;
sfr unsigned int volatile U1RXREG          absolute 0x0226;
sfr unsigned int          U1BRG            absolute 0x0228;
sfr unsigned int volatile U2MODE           absolute 0x0230;
sfr unsigned int volatile U2STA            absolute 0x0232;
sfr unsigned int          U2TXREG          absolute 0x0234;
sfr unsigned int volatile U2RXREG          absolute 0x0236;
sfr unsigned int          U2BRG            absolute 0x0238;
sfr unsigned int volatile SPI1STAT         absolute 0x0240;
sfr unsigned int volatile SPI1CON1         absolute 0x0242;
sfr unsigned int volatile SPI1CON          absolute 0x0242;
sfr unsigned int volatile SPI1CON2         absolute 0x0244;
sfr unsigned int volatile SPI1BUF          absolute 0x0248;
sfr unsigned int volatile SPI2STAT         absolute 0x0260;
sfr unsigned int volatile SPI2CON1         absolute 0x0262;
sfr unsigned int volatile SPI2CON          absolute 0x0262;
sfr unsigned int volatile SPI2CON2         absolute 0x0264;
sfr unsigned int volatile SPI2BUF          absolute 0x0268;
sfr unsigned int volatile TRISA            absolute 0x02C0;
sfr unsigned int volatile PORTA            absolute 0x02C2;
sfr unsigned int volatile LATA             absolute 0x02C4;
sfr unsigned int volatile ODCA             absolute 0x02C6;
sfr unsigned int volatile TRISB            absolute 0x02C8;
sfr unsigned int volatile PORTB            absolute 0x02CA;
sfr unsigned int volatile LATB             absolute 0x02CC;
sfr unsigned int volatile ODCB             absolute 0x02CE;
sfr unsigned int          PADCFG1          absolute 0x02FC;
sfr unsigned int volatile ADC1BUF0         absolute 0x0300;
sfr unsigned int volatile ADCBUF0          absolute 0x0300;
sfr unsigned int volatile ADC1BUF1         absolute 0x0302;
sfr unsigned int volatile ADC1BUF2         absolute 0x0304;
sfr unsigned int volatile ADC1BUF3         absolute 0x0306;
sfr unsigned int volatile ADC1BUF4         absolute 0x0308;
sfr unsigned int volatile ADC1BUF5         absolute 0x030A;
sfr unsigned int volatile ADC1BUF6         absolute 0x030C;
sfr unsigned int volatile ADC1BUF7         absolute 0x030E;
sfr unsigned int volatile ADC1BUF8         absolute 0x0310;
sfr unsigned int volatile ADC1BUF9         absolute 0x0312;
sfr unsigned int volatile ADC1BUFA         absolute 0x0314;
sfr unsigned int volatile ADC1BUFB         absolute 0x0316;
sfr unsigned int volatile ADC1BUFC         absolute 0x0318;
sfr unsigned int volatile ADC1BUFD         absolute 0x031A;
sfr unsigned int volatile ADC1BUFE         absolute 0x031C;
sfr unsigned int volatile ADC1BUFF         absolute 0x031E;
sfr unsigned int volatile AD1CON1          absolute 0x0320;
sfr unsigned int volatile ADCON1           absolute 0x0320;
sfr unsigned int volatile AD1CON2          absolute 0x0322;
sfr unsigned int volatile ADCON2           absolute 0x0322;
sfr unsigned int volatile AD1CON3          absolute 0x0324;
sfr unsigned int volatile ADCON3           absolute 0x0324;
sfr unsigned int          AD1CHS           absolute 0x0328;
sfr unsigned int          ADCHS            absolute 0x0328;
sfr unsigned int          AD1CHS0          absolute 0x0328;
sfr unsigned int          AD1PCFG          absolute 0x032C;
sfr unsigned int          ADPCFG           absolute 0x032C;
sfr unsigned int          AD1PCFGL         absolute 0x032C;
sfr unsigned int          AD1CSSL          absolute 0x0330;
sfr unsigned int          ADCSSL           absolute 0x0330;
sfr unsigned int volatile CTMUCON          absolute 0x033C;
sfr unsigned int volatile CTMUICON         absolute 0x033E;
sfr unsigned int          PMCON            absolute 0x0600;
sfr unsigned int volatile PMMODE           absolute 0x0602;
sfr unsigned int volatile PMADDR           absolute 0x0604;
sfr unsigned int volatile PMDOUT1          absolute 0x0604;
sfr unsigned int volatile PMDOUT2          absolute 0x0606;
sfr unsigned int volatile PMDIN1           absolute 0x0608;
sfr unsigned int volatile PMDIN2           absolute 0x060A;
sfr unsigned int volatile PMAEN            absolute 0x060C;
sfr unsigned int volatile PMSTAT           absolute 0x060E;
sfr unsigned int volatile ALRMVAL          absolute 0x0620;
sfr unsigned int volatile ALCFGRPT         absolute 0x0622;
sfr unsigned int volatile RTCVAL           absolute 0x0624;
sfr unsigned int volatile RCFGCAL          absolute 0x0626;
sfr unsigned int volatile CRCCON           absolute 0x0640;
sfr unsigned int volatile CRCCON1          absolute 0x0640;
sfr unsigned int volatile CRCCON2          absolute 0x0642;
sfr unsigned int          CRCXOR           absolute 0x0644;
sfr unsigned int volatile CRCXORL          absolute 0x0644;
sfr unsigned int volatile CRCXORH          absolute 0x0646;
sfr unsigned int volatile CRCDAT           absolute 0x0648;
sfr unsigned int volatile CRCDAT32         absolute 0x0648;
sfr unsigned int volatile CRCDAT8          absolute 0x0648;
sfr unsigned int volatile CRCDATL          absolute 0x0648;
sfr unsigned int volatile CRCDATH          absolute 0x064A;
sfr unsigned int volatile CRCWDAT          absolute 0x064C;
sfr unsigned int volatile CRCWDATL         absolute 0x064C;
sfr unsigned int volatile CRCWDATH         absolute 0x064E;
sfr unsigned int volatile CMSTAT           absolute 0x0650;
sfr unsigned int          CVRCON           absolute 0x0652;
sfr unsigned int volatile CM1CON           absolute 0x0654;
sfr unsigned int volatile CM2CON           absolute 0x065C;
sfr unsigned int volatile CM3CON           absolute 0x0664;
sfr unsigned int          RPINR0           absolute 0x0680;
sfr unsigned int          RPINR1           absolute 0x0682;
sfr unsigned int          RPINR3           absolute 0x0686;
sfr unsigned int          RPINR4           absolute 0x0688;
sfr unsigned int          RPINR7           absolute 0x068E;
sfr unsigned int          RPINR8           absolute 0x0690;
sfr unsigned int          RPINR9           absolute 0x0692;
sfr unsigned int          RPINR11          absolute 0x0696;
sfr unsigned int          RPINR18          absolute 0x06A4;
sfr unsigned int          RPINR19          absolute 0x06A6;
sfr unsigned int          RPINR20          absolute 0x06A8;
sfr unsigned int          RPINR21          absolute 0x06AA;
sfr unsigned int          RPINR22          absolute 0x06AC;
sfr unsigned int          RPINR23          absolute 0x06AE;
sfr unsigned int          RPOR0            absolute 0x06C0;
sfr unsigned int          RPOR1            absolute 0x06C2;
sfr unsigned int          RPOR2            absolute 0x06C4;
sfr unsigned int          RPOR3            absolute 0x06C6;
sfr unsigned int          RPOR4            absolute 0x06C8;
sfr unsigned int          RPOR5            absolute 0x06CA;
sfr unsigned int          RPOR6            absolute 0x06CC;
sfr unsigned int          RPOR7            absolute 0x06CE;
sfr unsigned int          RCON             absolute 0x0740;
sfr unsigned int volatile OSCCON           absolute 0x0742;
sfr unsigned int volatile OSCCONL          absolute 0x0742;
sfr unsigned short volatile OSCCONH          absolute 0x0743;
sfr unsigned int volatile CLKDIV           absolute 0x0744;
sfr unsigned int volatile OSCTUN           absolute 0x0748;
sfr unsigned int          REFOCON          absolute 0x074E;
sfr unsigned int volatile DSCON            absolute 0x0758;
sfr unsigned int volatile DSWAKE           absolute 0x075A;
sfr unsigned int volatile DSGPR0           absolute 0x075C;
sfr unsigned int volatile DSGPR1           absolute 0x075E;
sfr unsigned int volatile NVMCON           absolute 0x0760;
sfr unsigned int          NVMKEY           absolute 0x0766;
sfr unsigned int          PMD1             absolute 0x0770;
sfr unsigned int          PMD2             absolute 0x0772;
sfr unsigned int          PMD3             absolute 0x0774;
sfr unsigned int volatile PMD4             absolute 0x0776;

    // WREG0 bits
    const register unsigned short int WREG0_15 = 15;
    sbit  WREG0_15_bit at WREG0.B15;
    const register unsigned short int WREG0_14 = 14;
    sbit  WREG0_14_bit at WREG0.B14;
    const register unsigned short int WREG0_13 = 13;
    sbit  WREG0_13_bit at WREG0.B13;
    const register unsigned short int WREG0_12 = 12;
    sbit  WREG0_12_bit at WREG0.B12;
    const register unsigned short int WREG0_11 = 11;
    sbit  WREG0_11_bit at WREG0.B11;
    const register unsigned short int WREG0_10 = 10;
    sbit  WREG0_10_bit at WREG0.B10;
    const register unsigned short int WREG0_9 = 9;
    sbit  WREG0_9_bit at WREG0.B9;
    const register unsigned short int WREG0_8 = 8;
    sbit  WREG0_8_bit at WREG0.B8;
    const register unsigned short int WREG0_7 = 7;
    sbit  WREG0_7_bit at WREG0.B7;
    const register unsigned short int WREG0_6 = 6;
    sbit  WREG0_6_bit at WREG0.B6;
    const register unsigned short int WREG0_5 = 5;
    sbit  WREG0_5_bit at WREG0.B5;
    const register unsigned short int WREG0_4 = 4;
    sbit  WREG0_4_bit at WREG0.B4;
    const register unsigned short int WREG0_3 = 3;
    sbit  WREG0_3_bit at WREG0.B3;
    const register unsigned short int WREG0_2 = 2;
    sbit  WREG0_2_bit at WREG0.B2;
    const register unsigned short int WREG0_1 = 1;
    sbit  WREG0_1_bit at WREG0.B1;
    const register unsigned short int WREG0_0 = 0;
    sbit  WREG0_0_bit at WREG0.B0;

    // WREG1 bits
    const register unsigned short int WREG1_15 = 15;
    sbit  WREG1_15_bit at WREG1.B15;
    const register unsigned short int WREG1_14 = 14;
    sbit  WREG1_14_bit at WREG1.B14;
    const register unsigned short int WREG1_13 = 13;
    sbit  WREG1_13_bit at WREG1.B13;
    const register unsigned short int WREG1_12 = 12;
    sbit  WREG1_12_bit at WREG1.B12;
    const register unsigned short int WREG1_11 = 11;
    sbit  WREG1_11_bit at WREG1.B11;
    const register unsigned short int WREG1_10 = 10;
    sbit  WREG1_10_bit at WREG1.B10;
    const register unsigned short int WREG1_9 = 9;
    sbit  WREG1_9_bit at WREG1.B9;
    const register unsigned short int WREG1_8 = 8;
    sbit  WREG1_8_bit at WREG1.B8;
    const register unsigned short int WREG1_7 = 7;
    sbit  WREG1_7_bit at WREG1.B7;
    const register unsigned short int WREG1_6 = 6;
    sbit  WREG1_6_bit at WREG1.B6;
    const register unsigned short int WREG1_5 = 5;
    sbit  WREG1_5_bit at WREG1.B5;
    const register unsigned short int WREG1_4 = 4;
    sbit  WREG1_4_bit at WREG1.B4;
    const register unsigned short int WREG1_3 = 3;
    sbit  WREG1_3_bit at WREG1.B3;
    const register unsigned short int WREG1_2 = 2;
    sbit  WREG1_2_bit at WREG1.B2;
    const register unsigned short int WREG1_1 = 1;
    sbit  WREG1_1_bit at WREG1.B1;
    const register unsigned short int WREG1_0 = 0;
    sbit  WREG1_0_bit at WREG1.B0;

    // WREG2 bits
    const register unsigned short int WREG2_15 = 15;
    sbit  WREG2_15_bit at WREG2.B15;
    const register unsigned short int WREG2_14 = 14;
    sbit  WREG2_14_bit at WREG2.B14;
    const register unsigned short int WREG2_13 = 13;
    sbit  WREG2_13_bit at WREG2.B13;
    const register unsigned short int WREG2_12 = 12;
    sbit  WREG2_12_bit at WREG2.B12;
    const register unsigned short int WREG2_11 = 11;
    sbit  WREG2_11_bit at WREG2.B11;
    const register unsigned short int WREG2_10 = 10;
    sbit  WREG2_10_bit at WREG2.B10;
    const register unsigned short int WREG2_9 = 9;
    sbit  WREG2_9_bit at WREG2.B9;
    const register unsigned short int WREG2_8 = 8;
    sbit  WREG2_8_bit at WREG2.B8;
    const register unsigned short int WREG2_7 = 7;
    sbit  WREG2_7_bit at WREG2.B7;
    const register unsigned short int WREG2_6 = 6;
    sbit  WREG2_6_bit at WREG2.B6;
    const register unsigned short int WREG2_5 = 5;
    sbit  WREG2_5_bit at WREG2.B5;
    const register unsigned short int WREG2_4 = 4;
    sbit  WREG2_4_bit at WREG2.B4;
    const register unsigned short int WREG2_3 = 3;
    sbit  WREG2_3_bit at WREG2.B3;
    const register unsigned short int WREG2_2 = 2;
    sbit  WREG2_2_bit at WREG2.B2;
    const register unsigned short int WREG2_1 = 1;
    sbit  WREG2_1_bit at WREG2.B1;
    const register unsigned short int WREG2_0 = 0;
    sbit  WREG2_0_bit at WREG2.B0;

    // WREG3 bits
    const register unsigned short int WREG3_15 = 15;
    sbit  WREG3_15_bit at WREG3.B15;
    const register unsigned short int WREG3_14 = 14;
    sbit  WREG3_14_bit at WREG3.B14;
    const register unsigned short int WREG3_13 = 13;
    sbit  WREG3_13_bit at WREG3.B13;
    const register unsigned short int WREG3_12 = 12;
    sbit  WREG3_12_bit at WREG3.B12;
    const register unsigned short int WREG3_11 = 11;
    sbit  WREG3_11_bit at WREG3.B11;
    const register unsigned short int WREG3_10 = 10;
    sbit  WREG3_10_bit at WREG3.B10;
    const register unsigned short int WREG3_9 = 9;
    sbit  WREG3_9_bit at WREG3.B9;
    const register unsigned short int WREG3_8 = 8;
    sbit  WREG3_8_bit at WREG3.B8;
    const register unsigned short int WREG3_7 = 7;
    sbit  WREG3_7_bit at WREG3.B7;
    const register unsigned short int WREG3_6 = 6;
    sbit  WREG3_6_bit at WREG3.B6;
    const register unsigned short int WREG3_5 = 5;
    sbit  WREG3_5_bit at WREG3.B5;
    const register unsigned short int WREG3_4 = 4;
    sbit  WREG3_4_bit at WREG3.B4;
    const register unsigned short int WREG3_3 = 3;
    sbit  WREG3_3_bit at WREG3.B3;
    const register unsigned short int WREG3_2 = 2;
    sbit  WREG3_2_bit at WREG3.B2;
    const register unsigned short int WREG3_1 = 1;
    sbit  WREG3_1_bit at WREG3.B1;
    const register unsigned short int WREG3_0 = 0;
    sbit  WREG3_0_bit at WREG3.B0;

    // WREG4 bits
    const register unsigned short int WREG4_15 = 15;
    sbit  WREG4_15_bit at WREG4.B15;
    const register unsigned short int WREG4_14 = 14;
    sbit  WREG4_14_bit at WREG4.B14;
    const register unsigned short int WREG4_13 = 13;
    sbit  WREG4_13_bit at WREG4.B13;
    const register unsigned short int WREG4_12 = 12;
    sbit  WREG4_12_bit at WREG4.B12;
    const register unsigned short int WREG4_11 = 11;
    sbit  WREG4_11_bit at WREG4.B11;
    const register unsigned short int WREG4_10 = 10;
    sbit  WREG4_10_bit at WREG4.B10;
    const register unsigned short int WREG4_9 = 9;
    sbit  WREG4_9_bit at WREG4.B9;
    const register unsigned short int WREG4_8 = 8;
    sbit  WREG4_8_bit at WREG4.B8;
    const register unsigned short int WREG4_7 = 7;
    sbit  WREG4_7_bit at WREG4.B7;
    const register unsigned short int WREG4_6 = 6;
    sbit  WREG4_6_bit at WREG4.B6;
    const register unsigned short int WREG4_5 = 5;
    sbit  WREG4_5_bit at WREG4.B5;
    const register unsigned short int WREG4_4 = 4;
    sbit  WREG4_4_bit at WREG4.B4;
    const register unsigned short int WREG4_3 = 3;
    sbit  WREG4_3_bit at WREG4.B3;
    const register unsigned short int WREG4_2 = 2;
    sbit  WREG4_2_bit at WREG4.B2;
    const register unsigned short int WREG4_1 = 1;
    sbit  WREG4_1_bit at WREG4.B1;
    const register unsigned short int WREG4_0 = 0;
    sbit  WREG4_0_bit at WREG4.B0;

    // WREG5 bits
    const register unsigned short int WREG5_15 = 15;
    sbit  WREG5_15_bit at WREG5.B15;
    const register unsigned short int WREG5_14 = 14;
    sbit  WREG5_14_bit at WREG5.B14;
    const register unsigned short int WREG5_13 = 13;
    sbit  WREG5_13_bit at WREG5.B13;
    const register unsigned short int WREG5_12 = 12;
    sbit  WREG5_12_bit at WREG5.B12;
    const register unsigned short int WREG5_11 = 11;
    sbit  WREG5_11_bit at WREG5.B11;
    const register unsigned short int WREG5_10 = 10;
    sbit  WREG5_10_bit at WREG5.B10;
    const register unsigned short int WREG5_9 = 9;
    sbit  WREG5_9_bit at WREG5.B9;
    const register unsigned short int WREG5_8 = 8;
    sbit  WREG5_8_bit at WREG5.B8;
    const register unsigned short int WREG5_7 = 7;
    sbit  WREG5_7_bit at WREG5.B7;
    const register unsigned short int WREG5_6 = 6;
    sbit  WREG5_6_bit at WREG5.B6;
    const register unsigned short int WREG5_5 = 5;
    sbit  WREG5_5_bit at WREG5.B5;
    const register unsigned short int WREG5_4 = 4;
    sbit  WREG5_4_bit at WREG5.B4;
    const register unsigned short int WREG5_3 = 3;
    sbit  WREG5_3_bit at WREG5.B3;
    const register unsigned short int WREG5_2 = 2;
    sbit  WREG5_2_bit at WREG5.B2;
    const register unsigned short int WREG5_1 = 1;
    sbit  WREG5_1_bit at WREG5.B1;
    const register unsigned short int WREG5_0 = 0;
    sbit  WREG5_0_bit at WREG5.B0;

    // WREG6 bits
    const register unsigned short int WREG6_15 = 15;
    sbit  WREG6_15_bit at WREG6.B15;
    const register unsigned short int WREG6_14 = 14;
    sbit  WREG6_14_bit at WREG6.B14;
    const register unsigned short int WREG6_13 = 13;
    sbit  WREG6_13_bit at WREG6.B13;
    const register unsigned short int WREG6_12 = 12;
    sbit  WREG6_12_bit at WREG6.B12;
    const register unsigned short int WREG6_11 = 11;
    sbit  WREG6_11_bit at WREG6.B11;
    const register unsigned short int WREG6_10 = 10;
    sbit  WREG6_10_bit at WREG6.B10;
    const register unsigned short int WREG6_9 = 9;
    sbit  WREG6_9_bit at WREG6.B9;
    const register unsigned short int WREG6_8 = 8;
    sbit  WREG6_8_bit at WREG6.B8;
    const register unsigned short int WREG6_7 = 7;
    sbit  WREG6_7_bit at WREG6.B7;
    const register unsigned short int WREG6_6 = 6;
    sbit  WREG6_6_bit at WREG6.B6;
    const register unsigned short int WREG6_5 = 5;
    sbit  WREG6_5_bit at WREG6.B5;
    const register unsigned short int WREG6_4 = 4;
    sbit  WREG6_4_bit at WREG6.B4;
    const register unsigned short int WREG6_3 = 3;
    sbit  WREG6_3_bit at WREG6.B3;
    const register unsigned short int WREG6_2 = 2;
    sbit  WREG6_2_bit at WREG6.B2;
    const register unsigned short int WREG6_1 = 1;
    sbit  WREG6_1_bit at WREG6.B1;
    const register unsigned short int WREG6_0 = 0;
    sbit  WREG6_0_bit at WREG6.B0;

    // WREG7 bits
    const register unsigned short int WREG7_15 = 15;
    sbit  WREG7_15_bit at WREG7.B15;
    const register unsigned short int WREG7_14 = 14;
    sbit  WREG7_14_bit at WREG7.B14;
    const register unsigned short int WREG7_13 = 13;
    sbit  WREG7_13_bit at WREG7.B13;
    const register unsigned short int WREG7_12 = 12;
    sbit  WREG7_12_bit at WREG7.B12;
    const register unsigned short int WREG7_11 = 11;
    sbit  WREG7_11_bit at WREG7.B11;
    const register unsigned short int WREG7_10 = 10;
    sbit  WREG7_10_bit at WREG7.B10;
    const register unsigned short int WREG7_9 = 9;
    sbit  WREG7_9_bit at WREG7.B9;
    const register unsigned short int WREG7_8 = 8;
    sbit  WREG7_8_bit at WREG7.B8;
    const register unsigned short int WREG7_7 = 7;
    sbit  WREG7_7_bit at WREG7.B7;
    const register unsigned short int WREG7_6 = 6;
    sbit  WREG7_6_bit at WREG7.B6;
    const register unsigned short int WREG7_5 = 5;
    sbit  WREG7_5_bit at WREG7.B5;
    const register unsigned short int WREG7_4 = 4;
    sbit  WREG7_4_bit at WREG7.B4;
    const register unsigned short int WREG7_3 = 3;
    sbit  WREG7_3_bit at WREG7.B3;
    const register unsigned short int WREG7_2 = 2;
    sbit  WREG7_2_bit at WREG7.B2;
    const register unsigned short int WREG7_1 = 1;
    sbit  WREG7_1_bit at WREG7.B1;
    const register unsigned short int WREG7_0 = 0;
    sbit  WREG7_0_bit at WREG7.B0;

    // WREG8 bits
    const register unsigned short int WREG8_15 = 15;
    sbit  WREG8_15_bit at WREG8.B15;
    const register unsigned short int WREG8_14 = 14;
    sbit  WREG8_14_bit at WREG8.B14;
    const register unsigned short int WREG8_13 = 13;
    sbit  WREG8_13_bit at WREG8.B13;
    const register unsigned short int WREG8_12 = 12;
    sbit  WREG8_12_bit at WREG8.B12;
    const register unsigned short int WREG8_11 = 11;
    sbit  WREG8_11_bit at WREG8.B11;
    const register unsigned short int WREG8_10 = 10;
    sbit  WREG8_10_bit at WREG8.B10;
    const register unsigned short int WREG8_9 = 9;
    sbit  WREG8_9_bit at WREG8.B9;
    const register unsigned short int WREG8_8 = 8;
    sbit  WREG8_8_bit at WREG8.B8;
    const register unsigned short int WREG8_7 = 7;
    sbit  WREG8_7_bit at WREG8.B7;
    const register unsigned short int WREG8_6 = 6;
    sbit  WREG8_6_bit at WREG8.B6;
    const register unsigned short int WREG8_5 = 5;
    sbit  WREG8_5_bit at WREG8.B5;
    const register unsigned short int WREG8_4 = 4;
    sbit  WREG8_4_bit at WREG8.B4;
    const register unsigned short int WREG8_3 = 3;
    sbit  WREG8_3_bit at WREG8.B3;
    const register unsigned short int WREG8_2 = 2;
    sbit  WREG8_2_bit at WREG8.B2;
    const register unsigned short int WREG8_1 = 1;
    sbit  WREG8_1_bit at WREG8.B1;
    const register unsigned short int WREG8_0 = 0;
    sbit  WREG8_0_bit at WREG8.B0;

    // WREG9 bits
    const register unsigned short int WREG9_15 = 15;
    sbit  WREG9_15_bit at WREG9.B15;
    const register unsigned short int WREG9_14 = 14;
    sbit  WREG9_14_bit at WREG9.B14;
    const register unsigned short int WREG9_13 = 13;
    sbit  WREG9_13_bit at WREG9.B13;
    const register unsigned short int WREG9_12 = 12;
    sbit  WREG9_12_bit at WREG9.B12;
    const register unsigned short int WREG9_11 = 11;
    sbit  WREG9_11_bit at WREG9.B11;
    const register unsigned short int WREG9_10 = 10;
    sbit  WREG9_10_bit at WREG9.B10;
    const register unsigned short int WREG9_9 = 9;
    sbit  WREG9_9_bit at WREG9.B9;
    const register unsigned short int WREG9_8 = 8;
    sbit  WREG9_8_bit at WREG9.B8;
    const register unsigned short int WREG9_7 = 7;
    sbit  WREG9_7_bit at WREG9.B7;
    const register unsigned short int WREG9_6 = 6;
    sbit  WREG9_6_bit at WREG9.B6;
    const register unsigned short int WREG9_5 = 5;
    sbit  WREG9_5_bit at WREG9.B5;
    const register unsigned short int WREG9_4 = 4;
    sbit  WREG9_4_bit at WREG9.B4;
    const register unsigned short int WREG9_3 = 3;
    sbit  WREG9_3_bit at WREG9.B3;
    const register unsigned short int WREG9_2 = 2;
    sbit  WREG9_2_bit at WREG9.B2;
    const register unsigned short int WREG9_1 = 1;
    sbit  WREG9_1_bit at WREG9.B1;
    const register unsigned short int WREG9_0 = 0;
    sbit  WREG9_0_bit at WREG9.B0;

    // WREG10 bits
    const register unsigned short int WREG10_15 = 15;
    sbit  WREG10_15_bit at WREG10.B15;
    const register unsigned short int WREG10_14 = 14;
    sbit  WREG10_14_bit at WREG10.B14;
    const register unsigned short int WREG10_13 = 13;
    sbit  WREG10_13_bit at WREG10.B13;
    const register unsigned short int WREG10_12 = 12;
    sbit  WREG10_12_bit at WREG10.B12;
    const register unsigned short int WREG10_11 = 11;
    sbit  WREG10_11_bit at WREG10.B11;
    const register unsigned short int WREG10_10 = 10;
    sbit  WREG10_10_bit at WREG10.B10;
    const register unsigned short int WREG10_9 = 9;
    sbit  WREG10_9_bit at WREG10.B9;
    const register unsigned short int WREG10_8 = 8;
    sbit  WREG10_8_bit at WREG10.B8;
    const register unsigned short int WREG10_7 = 7;
    sbit  WREG10_7_bit at WREG10.B7;
    const register unsigned short int WREG10_6 = 6;
    sbit  WREG10_6_bit at WREG10.B6;
    const register unsigned short int WREG10_5 = 5;
    sbit  WREG10_5_bit at WREG10.B5;
    const register unsigned short int WREG10_4 = 4;
    sbit  WREG10_4_bit at WREG10.B4;
    const register unsigned short int WREG10_3 = 3;
    sbit  WREG10_3_bit at WREG10.B3;
    const register unsigned short int WREG10_2 = 2;
    sbit  WREG10_2_bit at WREG10.B2;
    const register unsigned short int WREG10_1 = 1;
    sbit  WREG10_1_bit at WREG10.B1;
    const register unsigned short int WREG10_0 = 0;
    sbit  WREG10_0_bit at WREG10.B0;

    // WREG11 bits
    const register unsigned short int WREG11_15 = 15;
    sbit  WREG11_15_bit at WREG11.B15;
    const register unsigned short int WREG11_14 = 14;
    sbit  WREG11_14_bit at WREG11.B14;
    const register unsigned short int WREG11_13 = 13;
    sbit  WREG11_13_bit at WREG11.B13;
    const register unsigned short int WREG11_12 = 12;
    sbit  WREG11_12_bit at WREG11.B12;
    const register unsigned short int WREG11_11 = 11;
    sbit  WREG11_11_bit at WREG11.B11;
    const register unsigned short int WREG11_10 = 10;
    sbit  WREG11_10_bit at WREG11.B10;
    const register unsigned short int WREG11_9 = 9;
    sbit  WREG11_9_bit at WREG11.B9;
    const register unsigned short int WREG11_8 = 8;
    sbit  WREG11_8_bit at WREG11.B8;
    const register unsigned short int WREG11_7 = 7;
    sbit  WREG11_7_bit at WREG11.B7;
    const register unsigned short int WREG11_6 = 6;
    sbit  WREG11_6_bit at WREG11.B6;
    const register unsigned short int WREG11_5 = 5;
    sbit  WREG11_5_bit at WREG11.B5;
    const register unsigned short int WREG11_4 = 4;
    sbit  WREG11_4_bit at WREG11.B4;
    const register unsigned short int WREG11_3 = 3;
    sbit  WREG11_3_bit at WREG11.B3;
    const register unsigned short int WREG11_2 = 2;
    sbit  WREG11_2_bit at WREG11.B2;
    const register unsigned short int WREG11_1 = 1;
    sbit  WREG11_1_bit at WREG11.B1;
    const register unsigned short int WREG11_0 = 0;
    sbit  WREG11_0_bit at WREG11.B0;

    // WREG12 bits
    const register unsigned short int WREG12_15 = 15;
    sbit  WREG12_15_bit at WREG12.B15;
    const register unsigned short int WREG12_14 = 14;
    sbit  WREG12_14_bit at WREG12.B14;
    const register unsigned short int WREG12_13 = 13;
    sbit  WREG12_13_bit at WREG12.B13;
    const register unsigned short int WREG12_12 = 12;
    sbit  WREG12_12_bit at WREG12.B12;
    const register unsigned short int WREG12_11 = 11;
    sbit  WREG12_11_bit at WREG12.B11;
    const register unsigned short int WREG12_10 = 10;
    sbit  WREG12_10_bit at WREG12.B10;
    const register unsigned short int WREG12_9 = 9;
    sbit  WREG12_9_bit at WREG12.B9;
    const register unsigned short int WREG12_8 = 8;
    sbit  WREG12_8_bit at WREG12.B8;
    const register unsigned short int WREG12_7 = 7;
    sbit  WREG12_7_bit at WREG12.B7;
    const register unsigned short int WREG12_6 = 6;
    sbit  WREG12_6_bit at WREG12.B6;
    const register unsigned short int WREG12_5 = 5;
    sbit  WREG12_5_bit at WREG12.B5;
    const register unsigned short int WREG12_4 = 4;
    sbit  WREG12_4_bit at WREG12.B4;
    const register unsigned short int WREG12_3 = 3;
    sbit  WREG12_3_bit at WREG12.B3;
    const register unsigned short int WREG12_2 = 2;
    sbit  WREG12_2_bit at WREG12.B2;
    const register unsigned short int WREG12_1 = 1;
    sbit  WREG12_1_bit at WREG12.B1;
    const register unsigned short int WREG12_0 = 0;
    sbit  WREG12_0_bit at WREG12.B0;

    // WREG13 bits
    const register unsigned short int WREG13_15 = 15;
    sbit  WREG13_15_bit at WREG13.B15;
    const register unsigned short int WREG13_14 = 14;
    sbit  WREG13_14_bit at WREG13.B14;
    const register unsigned short int WREG13_13 = 13;
    sbit  WREG13_13_bit at WREG13.B13;
    const register unsigned short int WREG13_12 = 12;
    sbit  WREG13_12_bit at WREG13.B12;
    const register unsigned short int WREG13_11 = 11;
    sbit  WREG13_11_bit at WREG13.B11;
    const register unsigned short int WREG13_10 = 10;
    sbit  WREG13_10_bit at WREG13.B10;
    const register unsigned short int WREG13_9 = 9;
    sbit  WREG13_9_bit at WREG13.B9;
    const register unsigned short int WREG13_8 = 8;
    sbit  WREG13_8_bit at WREG13.B8;
    const register unsigned short int WREG13_7 = 7;
    sbit  WREG13_7_bit at WREG13.B7;
    const register unsigned short int WREG13_6 = 6;
    sbit  WREG13_6_bit at WREG13.B6;
    const register unsigned short int WREG13_5 = 5;
    sbit  WREG13_5_bit at WREG13.B5;
    const register unsigned short int WREG13_4 = 4;
    sbit  WREG13_4_bit at WREG13.B4;
    const register unsigned short int WREG13_3 = 3;
    sbit  WREG13_3_bit at WREG13.B3;
    const register unsigned short int WREG13_2 = 2;
    sbit  WREG13_2_bit at WREG13.B2;
    const register unsigned short int WREG13_1 = 1;
    sbit  WREG13_1_bit at WREG13.B1;
    const register unsigned short int WREG13_0 = 0;
    sbit  WREG13_0_bit at WREG13.B0;

    // WREG14 bits
    const register unsigned short int WREG14_15 = 15;
    sbit  WREG14_15_bit at WREG14.B15;
    const register unsigned short int WREG14_14 = 14;
    sbit  WREG14_14_bit at WREG14.B14;
    const register unsigned short int WREG14_13 = 13;
    sbit  WREG14_13_bit at WREG14.B13;
    const register unsigned short int WREG14_12 = 12;
    sbit  WREG14_12_bit at WREG14.B12;
    const register unsigned short int WREG14_11 = 11;
    sbit  WREG14_11_bit at WREG14.B11;
    const register unsigned short int WREG14_10 = 10;
    sbit  WREG14_10_bit at WREG14.B10;
    const register unsigned short int WREG14_9 = 9;
    sbit  WREG14_9_bit at WREG14.B9;
    const register unsigned short int WREG14_8 = 8;
    sbit  WREG14_8_bit at WREG14.B8;
    const register unsigned short int WREG14_7 = 7;
    sbit  WREG14_7_bit at WREG14.B7;
    const register unsigned short int WREG14_6 = 6;
    sbit  WREG14_6_bit at WREG14.B6;
    const register unsigned short int WREG14_5 = 5;
    sbit  WREG14_5_bit at WREG14.B5;
    const register unsigned short int WREG14_4 = 4;
    sbit  WREG14_4_bit at WREG14.B4;
    const register unsigned short int WREG14_3 = 3;
    sbit  WREG14_3_bit at WREG14.B3;
    const register unsigned short int WREG14_2 = 2;
    sbit  WREG14_2_bit at WREG14.B2;
    const register unsigned short int WREG14_1 = 1;
    sbit  WREG14_1_bit at WREG14.B1;
    const register unsigned short int WREG14_0 = 0;
    sbit  WREG14_0_bit at WREG14.B0;

    // WREG15 bits
    const register unsigned short int WREG15_15 = 15;
    sbit  WREG15_15_bit at WREG15.B15;
    const register unsigned short int WREG15_14 = 14;
    sbit  WREG15_14_bit at WREG15.B14;
    const register unsigned short int WREG15_13 = 13;
    sbit  WREG15_13_bit at WREG15.B13;
    const register unsigned short int WREG15_12 = 12;
    sbit  WREG15_12_bit at WREG15.B12;
    const register unsigned short int WREG15_11 = 11;
    sbit  WREG15_11_bit at WREG15.B11;
    const register unsigned short int WREG15_10 = 10;
    sbit  WREG15_10_bit at WREG15.B10;
    const register unsigned short int WREG15_9 = 9;
    sbit  WREG15_9_bit at WREG15.B9;
    const register unsigned short int WREG15_8 = 8;
    sbit  WREG15_8_bit at WREG15.B8;
    const register unsigned short int WREG15_7 = 7;
    sbit  WREG15_7_bit at WREG15.B7;
    const register unsigned short int WREG15_6 = 6;
    sbit  WREG15_6_bit at WREG15.B6;
    const register unsigned short int WREG15_5 = 5;
    sbit  WREG15_5_bit at WREG15.B5;
    const register unsigned short int WREG15_4 = 4;
    sbit  WREG15_4_bit at WREG15.B4;
    const register unsigned short int WREG15_3 = 3;
    sbit  WREG15_3_bit at WREG15.B3;
    const register unsigned short int WREG15_2 = 2;
    sbit  WREG15_2_bit at WREG15.B2;
    const register unsigned short int WREG15_1 = 1;
    sbit  WREG15_1_bit at WREG15.B1;
    const register unsigned short int WREG15_0 = 0;
    sbit  WREG15_0_bit at WREG15.B0;

    // SPLIM bits
    const register unsigned short int SPLIM_15 = 15;
    sbit  SPLIM_15_bit at SPLIM.B15;
    const register unsigned short int SPLIM_14 = 14;
    sbit  SPLIM_14_bit at SPLIM.B14;
    const register unsigned short int SPLIM_13 = 13;
    sbit  SPLIM_13_bit at SPLIM.B13;
    const register unsigned short int SPLIM_12 = 12;
    sbit  SPLIM_12_bit at SPLIM.B12;
    const register unsigned short int SPLIM_11 = 11;
    sbit  SPLIM_11_bit at SPLIM.B11;
    const register unsigned short int SPLIM_10 = 10;
    sbit  SPLIM_10_bit at SPLIM.B10;
    const register unsigned short int SPLIM_9 = 9;
    sbit  SPLIM_9_bit at SPLIM.B9;
    const register unsigned short int SPLIM_8 = 8;
    sbit  SPLIM_8_bit at SPLIM.B8;
    const register unsigned short int SPLIM_7 = 7;
    sbit  SPLIM_7_bit at SPLIM.B7;
    const register unsigned short int SPLIM_6 = 6;
    sbit  SPLIM_6_bit at SPLIM.B6;
    const register unsigned short int SPLIM_5 = 5;
    sbit  SPLIM_5_bit at SPLIM.B5;
    const register unsigned short int SPLIM_4 = 4;
    sbit  SPLIM_4_bit at SPLIM.B4;
    const register unsigned short int SPLIM_3 = 3;
    sbit  SPLIM_3_bit at SPLIM.B3;
    const register unsigned short int SPLIM_2 = 2;
    sbit  SPLIM_2_bit at SPLIM.B2;
    const register unsigned short int SPLIM_1 = 1;
    sbit  SPLIM_1_bit at SPLIM.B1;
    const register unsigned short int SPLIM_0 = 0;
    sbit  SPLIM_0_bit at SPLIM.B0;

    // PCL bits
    const register unsigned short int PCL_15 = 15;
    sbit  PCL_15_bit at PCL.B15;
    const register unsigned short int PCL_14 = 14;
    sbit  PCL_14_bit at PCL.B14;
    const register unsigned short int PCL_13 = 13;
    sbit  PCL_13_bit at PCL.B13;
    const register unsigned short int PCL_12 = 12;
    sbit  PCL_12_bit at PCL.B12;
    const register unsigned short int PCL_11 = 11;
    sbit  PCL_11_bit at PCL.B11;
    const register unsigned short int PCL_10 = 10;
    sbit  PCL_10_bit at PCL.B10;
    const register unsigned short int PCL_9 = 9;
    sbit  PCL_9_bit at PCL.B9;
    const register unsigned short int PCL_8 = 8;
    sbit  PCL_8_bit at PCL.B8;
    const register unsigned short int PCL_7 = 7;
    sbit  PCL_7_bit at PCL.B7;
    const register unsigned short int PCL_6 = 6;
    sbit  PCL_6_bit at PCL.B6;
    const register unsigned short int PCL_5 = 5;
    sbit  PCL_5_bit at PCL.B5;
    const register unsigned short int PCL_4 = 4;
    sbit  PCL_4_bit at PCL.B4;
    const register unsigned short int PCL_3 = 3;
    sbit  PCL_3_bit at PCL.B3;
    const register unsigned short int PCL_2 = 2;
    sbit  PCL_2_bit at PCL.B2;
    const register unsigned short int PCL_1 = 1;
    sbit  PCL_1_bit at PCL.B1;
    const register unsigned short int PCL_0 = 0;
    sbit  PCL_0_bit at PCL.B0;

    // PCH bits
    const register unsigned short int PCH_7 = 7;
    sbit  PCH_7_bit at PCH.B7;
    const register unsigned short int PCH_6 = 6;
    sbit  PCH_6_bit at PCH.B6;
    const register unsigned short int PCH_5 = 5;
    sbit  PCH_5_bit at PCH.B5;
    const register unsigned short int PCH_4 = 4;
    sbit  PCH_4_bit at PCH.B4;
    const register unsigned short int PCH_3 = 3;
    sbit  PCH_3_bit at PCH.B3;
    const register unsigned short int PCH_2 = 2;
    sbit  PCH_2_bit at PCH.B2;
    const register unsigned short int PCH_1 = 1;
    sbit  PCH_1_bit at PCH.B1;
    const register unsigned short int PCH_0 = 0;
    sbit  PCH_0_bit at PCH.B0;

    // TBLPAG bits
    const register unsigned short int TBLPAG_15 = 15;
    sbit  TBLPAG_15_bit at TBLPAG.B15;
    const register unsigned short int TBLPAG_14 = 14;
    sbit  TBLPAG_14_bit at TBLPAG.B14;
    const register unsigned short int TBLPAG_13 = 13;
    sbit  TBLPAG_13_bit at TBLPAG.B13;
    const register unsigned short int TBLPAG_12 = 12;
    sbit  TBLPAG_12_bit at TBLPAG.B12;
    const register unsigned short int TBLPAG_11 = 11;
    sbit  TBLPAG_11_bit at TBLPAG.B11;
    const register unsigned short int TBLPAG_10 = 10;
    sbit  TBLPAG_10_bit at TBLPAG.B10;
    const register unsigned short int TBLPAG_9 = 9;
    sbit  TBLPAG_9_bit at TBLPAG.B9;
    const register unsigned short int TBLPAG_8 = 8;
    sbit  TBLPAG_8_bit at TBLPAG.B8;
    const register unsigned short int TBLPAG_7 = 7;
    sbit  TBLPAG_7_bit at TBLPAG.B7;
    const register unsigned short int TBLPAG_6 = 6;
    sbit  TBLPAG_6_bit at TBLPAG.B6;
    const register unsigned short int TBLPAG_5 = 5;
    sbit  TBLPAG_5_bit at TBLPAG.B5;
    const register unsigned short int TBLPAG_4 = 4;
    sbit  TBLPAG_4_bit at TBLPAG.B4;
    const register unsigned short int TBLPAG_3 = 3;
    sbit  TBLPAG_3_bit at TBLPAG.B3;
    const register unsigned short int TBLPAG_2 = 2;
    sbit  TBLPAG_2_bit at TBLPAG.B2;
    const register unsigned short int TBLPAG_1 = 1;
    sbit  TBLPAG_1_bit at TBLPAG.B1;
    const register unsigned short int TBLPAG_0 = 0;
    sbit  TBLPAG_0_bit at TBLPAG.B0;

    // PSVPAG bits
    const register unsigned short int PSVPAG_15 = 15;
    sbit  PSVPAG_15_bit at PSVPAG.B15;
    const register unsigned short int PSVPAG_14 = 14;
    sbit  PSVPAG_14_bit at PSVPAG.B14;
    const register unsigned short int PSVPAG_13 = 13;
    sbit  PSVPAG_13_bit at PSVPAG.B13;
    const register unsigned short int PSVPAG_12 = 12;
    sbit  PSVPAG_12_bit at PSVPAG.B12;
    const register unsigned short int PSVPAG_11 = 11;
    sbit  PSVPAG_11_bit at PSVPAG.B11;
    const register unsigned short int PSVPAG_10 = 10;
    sbit  PSVPAG_10_bit at PSVPAG.B10;
    const register unsigned short int PSVPAG_9 = 9;
    sbit  PSVPAG_9_bit at PSVPAG.B9;
    const register unsigned short int PSVPAG_8 = 8;
    sbit  PSVPAG_8_bit at PSVPAG.B8;
    const register unsigned short int PSVPAG_7 = 7;
    sbit  PSVPAG_7_bit at PSVPAG.B7;
    const register unsigned short int PSVPAG_6 = 6;
    sbit  PSVPAG_6_bit at PSVPAG.B6;
    const register unsigned short int PSVPAG_5 = 5;
    sbit  PSVPAG_5_bit at PSVPAG.B5;
    const register unsigned short int PSVPAG_4 = 4;
    sbit  PSVPAG_4_bit at PSVPAG.B4;
    const register unsigned short int PSVPAG_3 = 3;
    sbit  PSVPAG_3_bit at PSVPAG.B3;
    const register unsigned short int PSVPAG_2 = 2;
    sbit  PSVPAG_2_bit at PSVPAG.B2;
    const register unsigned short int PSVPAG_1 = 1;
    sbit  PSVPAG_1_bit at PSVPAG.B1;
    const register unsigned short int PSVPAG_0 = 0;
    sbit  PSVPAG_0_bit at PSVPAG.B0;

    // RCOUNT bits
    const register unsigned short int RCOUNT_13 = 13;
    sbit  RCOUNT_13_bit at RCOUNT.B13;
    const register unsigned short int RCOUNT_12 = 12;
    sbit  RCOUNT_12_bit at RCOUNT.B12;
    const register unsigned short int RCOUNT_11 = 11;
    sbit  RCOUNT_11_bit at RCOUNT.B11;
    const register unsigned short int RCOUNT_10 = 10;
    sbit  RCOUNT_10_bit at RCOUNT.B10;
    const register unsigned short int RCOUNT_9 = 9;
    sbit  RCOUNT_9_bit at RCOUNT.B9;
    const register unsigned short int RCOUNT_8 = 8;
    sbit  RCOUNT_8_bit at RCOUNT.B8;
    const register unsigned short int RCOUNT_7 = 7;
    sbit  RCOUNT_7_bit at RCOUNT.B7;
    const register unsigned short int RCOUNT_6 = 6;
    sbit  RCOUNT_6_bit at RCOUNT.B6;
    const register unsigned short int RCOUNT_5 = 5;
    sbit  RCOUNT_5_bit at RCOUNT.B5;
    const register unsigned short int RCOUNT_4 = 4;
    sbit  RCOUNT_4_bit at RCOUNT.B4;
    const register unsigned short int RCOUNT_3 = 3;
    sbit  RCOUNT_3_bit at RCOUNT.B3;
    const register unsigned short int RCOUNT_2 = 2;
    sbit  RCOUNT_2_bit at RCOUNT.B2;
    const register unsigned short int RCOUNT_1 = 1;
    sbit  RCOUNT_1_bit at RCOUNT.B1;
    const register unsigned short int RCOUNT_0 = 0;
    sbit  RCOUNT_0_bit at RCOUNT.B0;

    // SR bits
    const register unsigned short int DC = 8;
    sbit  DC_bit at SR.B8;
    const register unsigned short int IPL_2 = 7;
    sbit  IPL_2_bit at SR.B7;
    const register unsigned short int IPL_1 = 6;
    sbit  IPL_1_bit at SR.B6;
    const register unsigned short int IPL_0 = 5;
    sbit  IPL_0_bit at SR.B5;
    const register unsigned short int RA = 4;
    sbit  RA_bit at SR.B4;
    const register unsigned short int N = 3;
    sbit  N_bit at SR.B3;
    const register unsigned short int OV = 2;
    sbit  OV_bit at SR.B2;
    const register unsigned short int Z = 1;
    sbit  Z_bit at SR.B1;
    const register unsigned short int C = 0;
    sbit  C_bit at SR.B0;

    // CORCON bits
    const register unsigned short int IPL3 = 3;
    sbit  IPL3_bit at CORCON.B3;
    const register unsigned short int PSV = 2;
    sbit  PSV_bit at CORCON.B2;

    // DISICNT bits
    const register unsigned short int DISICNT_15 = 15;
    sbit  DISICNT_15_bit at DISICNT.B15;
    const register unsigned short int DISICNT_14 = 14;
    sbit  DISICNT_14_bit at DISICNT.B14;
    const register unsigned short int DISICNT_13 = 13;
    sbit  DISICNT_13_bit at DISICNT.B13;
    const register unsigned short int DISICNT_12 = 12;
    sbit  DISICNT_12_bit at DISICNT.B12;
    const register unsigned short int DISICNT_11 = 11;
    sbit  DISICNT_11_bit at DISICNT.B11;
    const register unsigned short int DISICNT_10 = 10;
    sbit  DISICNT_10_bit at DISICNT.B10;
    const register unsigned short int DISICNT_9 = 9;
    sbit  DISICNT_9_bit at DISICNT.B9;
    const register unsigned short int DISICNT_8 = 8;
    sbit  DISICNT_8_bit at DISICNT.B8;
    const register unsigned short int DISICNT_7 = 7;
    sbit  DISICNT_7_bit at DISICNT.B7;
    const register unsigned short int DISICNT_6 = 6;
    sbit  DISICNT_6_bit at DISICNT.B6;
    const register unsigned short int DISICNT_5 = 5;
    sbit  DISICNT_5_bit at DISICNT.B5;
    const register unsigned short int DISICNT_4 = 4;
    sbit  DISICNT_4_bit at DISICNT.B4;
    const register unsigned short int DISICNT_3 = 3;
    sbit  DISICNT_3_bit at DISICNT.B3;
    const register unsigned short int DISICNT_2 = 2;
    sbit  DISICNT_2_bit at DISICNT.B2;
    const register unsigned short int DISICNT_1 = 1;
    sbit  DISICNT_1_bit at DISICNT.B1;
    const register unsigned short int DISICNT_0 = 0;
    sbit  DISICNT_0_bit at DISICNT.B0;

    // CNEN1 bits
    const register unsigned short int CN15IE = 15;
    sbit  CN15IE_bit at CNEN1.B15;
    const register unsigned short int CN14IE = 14;
    sbit  CN14IE_bit at CNEN1.B14;
    const register unsigned short int CN13IE = 13;
    sbit  CN13IE_bit at CNEN1.B13;
    const register unsigned short int CN12IE = 12;
    sbit  CN12IE_bit at CNEN1.B12;
    const register unsigned short int CN11IE = 11;
    sbit  CN11IE_bit at CNEN1.B11;
    const register unsigned short int CN7IE = 7;
    sbit  CN7IE_bit at CNEN1.B7;
    const register unsigned short int CN6IE = 6;
    sbit  CN6IE_bit at CNEN1.B6;
    const register unsigned short int CN5IE = 5;
    sbit  CN5IE_bit at CNEN1.B5;
    const register unsigned short int CN4IE = 4;
    sbit  CN4IE_bit at CNEN1.B4;
    const register unsigned short int CN3IE = 3;
    sbit  CN3IE_bit at CNEN1.B3;
    const register unsigned short int CN2IE = 2;
    sbit  CN2IE_bit at CNEN1.B2;
    const register unsigned short int CN1IE = 1;
    sbit  CN1IE_bit at CNEN1.B1;
    const register unsigned short int CN0IE = 0;
    sbit  CN0IE_bit at CNEN1.B0;

    // CNEN2 bits
    const register unsigned short int CN30IE = 14;
    sbit  CN30IE_bit at CNEN2.B14;
    const register unsigned short int CN29IE = 13;
    sbit  CN29IE_bit at CNEN2.B13;
    const register unsigned short int CN27IE = 11;
    sbit  CN27IE_bit at CNEN2.B11;
    const register unsigned short int CN24IE = 8;
    sbit  CN24IE_bit at CNEN2.B8;
    const register unsigned short int CN23IE = 7;
    sbit  CN23IE_bit at CNEN2.B7;
    const register unsigned short int CN22IE = 6;
    sbit  CN22IE_bit at CNEN2.B6;
    const register unsigned short int CN21IE = 5;
    sbit  CN21IE_bit at CNEN2.B5;
    const register unsigned short int CN16IE = 0;
    sbit  CN16IE_bit at CNEN2.B0;

    // CNPU1 bits
    const register unsigned short int CN15PUE = 15;
    sbit  CN15PUE_bit at CNPU1.B15;
    const register unsigned short int CN14PUE = 14;
    sbit  CN14PUE_bit at CNPU1.B14;
    const register unsigned short int CN13PUE = 13;
    sbit  CN13PUE_bit at CNPU1.B13;
    const register unsigned short int CN12PUE = 12;
    sbit  CN12PUE_bit at CNPU1.B12;
    const register unsigned short int CN11PUE = 11;
    sbit  CN11PUE_bit at CNPU1.B11;
    const register unsigned short int CN7PUE = 7;
    sbit  CN7PUE_bit at CNPU1.B7;
    const register unsigned short int CN6PUE = 6;
    sbit  CN6PUE_bit at CNPU1.B6;
    const register unsigned short int CN5PUE = 5;
    sbit  CN5PUE_bit at CNPU1.B5;
    const register unsigned short int CN4PUE = 4;
    sbit  CN4PUE_bit at CNPU1.B4;
    const register unsigned short int CN3PUE = 3;
    sbit  CN3PUE_bit at CNPU1.B3;
    const register unsigned short int CN2PUE = 2;
    sbit  CN2PUE_bit at CNPU1.B2;
    const register unsigned short int CN1PUE = 1;
    sbit  CN1PUE_bit at CNPU1.B1;
    const register unsigned short int CN0PUE = 0;
    sbit  CN0PUE_bit at CNPU1.B0;

    // CNPU2 bits
    const register unsigned short int CN30PUE = 14;
    sbit  CN30PUE_bit at CNPU2.B14;
    const register unsigned short int CN29PUE = 13;
    sbit  CN29PUE_bit at CNPU2.B13;
    const register unsigned short int CN27PUE = 11;
    sbit  CN27PUE_bit at CNPU2.B11;
    const register unsigned short int CN24PUE = 8;
    sbit  CN24PUE_bit at CNPU2.B8;
    const register unsigned short int CN23PUE = 7;
    sbit  CN23PUE_bit at CNPU2.B7;
    const register unsigned short int CN22PUE = 6;
    sbit  CN22PUE_bit at CNPU2.B6;
    const register unsigned short int CN21PUE = 5;
    sbit  CN21PUE_bit at CNPU2.B5;
    const register unsigned short int CN16PUE = 0;
    sbit  CN16PUE_bit at CNPU2.B0;

    // INTCON1 bits
    const register unsigned short int NSTDIS = 15;
    sbit  NSTDIS_bit at INTCON1.B15;
    const register unsigned short int MATHERR = 4;
    sbit  MATHERR_bit at INTCON1.B4;
    const register unsigned short int ADDRERR = 3;
    sbit  ADDRERR_bit at INTCON1.B3;
    const register unsigned short int STKERR = 2;
    sbit  STKERR_bit at INTCON1.B2;
    const register unsigned short int OSCFAIL = 1;
    sbit  OSCFAIL_bit at INTCON1.B1;

    // INTCON2 bits
    const register unsigned short int ALTIVT = 15;
    sbit  ALTIVT_bit at INTCON2.B15;
    const register unsigned short int DISI = 14;
    sbit  DISI_bit at INTCON2.B14;
    const register unsigned short int INT2EP = 2;
    sbit  INT2EP_bit at INTCON2.B2;
    const register unsigned short int INT1EP = 1;
    sbit  INT1EP_bit at INTCON2.B1;
    const register unsigned short int INT0EP = 0;
    sbit  INT0EP_bit at INTCON2.B0;

    // IFS0 bits
    const register unsigned short int AD1IF = 13;
    sbit  AD1IF_bit at IFS0.B13;
    const register unsigned short int U1TXIF = 12;
    sbit  U1TXIF_bit at IFS0.B12;
    const register unsigned short int U1RXIF = 11;
    sbit  U1RXIF_bit at IFS0.B11;
    const register unsigned short int SPI1IF = 10;
    sbit  SPI1IF_bit at IFS0.B10;
    const register unsigned short int SPF1IF = 9;
    sbit  SPF1IF_bit at IFS0.B9;
    const register unsigned short int T3IF = 8;
    sbit  T3IF_bit at IFS0.B8;
    const register unsigned short int T2IF = 7;
    sbit  T2IF_bit at IFS0.B7;
    const register unsigned short int OC2IF = 6;
    sbit  OC2IF_bit at IFS0.B6;
    const register unsigned short int IC2IF = 5;
    sbit  IC2IF_bit at IFS0.B5;
    const register unsigned short int T1IF = 3;
    sbit  T1IF_bit at IFS0.B3;
    const register unsigned short int OC1IF = 2;
    sbit  OC1IF_bit at IFS0.B2;
    const register unsigned short int IC1IF = 1;
    sbit  IC1IF_bit at IFS0.B1;
    const register unsigned short int INT0IF = 0;
    sbit  INT0IF_bit at IFS0.B0;

    // IFS1 bits
    const register unsigned short int U2TXIF = 15;
    sbit  U2TXIF_bit at IFS1.B15;
    const register unsigned short int U2RXIF = 14;
    sbit  U2RXIF_bit at IFS1.B14;
    const register unsigned short int INT2IF = 13;
    sbit  INT2IF_bit at IFS1.B13;
    const register unsigned short int T5IF = 12;
    sbit  T5IF_bit at IFS1.B12;
    const register unsigned short int T4IF = 11;
    sbit  T4IF_bit at IFS1.B11;
    const register unsigned short int OC4IF = 10;
    sbit  OC4IF_bit at IFS1.B10;
    const register unsigned short int OC3IF = 9;
    sbit  OC3IF_bit at IFS1.B9;
    const register unsigned short int INT1IF = 4;
    sbit  INT1IF_bit at IFS1.B4;
    const register unsigned short int CNIF = 3;
    sbit  CNIF_bit at IFS1.B3;
    const register unsigned short int CMIF = 2;
    sbit  CMIF_bit at IFS1.B2;
    const register unsigned short int MI2C1IF = 1;
    sbit  MI2C1IF_bit at IFS1.B1;
    const register unsigned short int SI2C1IF = 0;
    sbit  SI2C1IF_bit at IFS1.B0;

    // IFS2 bits
    const register unsigned short int PMPIF = 13;
    sbit  PMPIF_bit at IFS2.B13;
    const register unsigned short int OC5IF = 9;
    sbit  OC5IF_bit at IFS2.B9;
    const register unsigned short int IC5IF = 7;
    sbit  IC5IF_bit at IFS2.B7;
    const register unsigned short int IC4IF = 6;
    sbit  IC4IF_bit at IFS2.B6;
    const register unsigned short int IC3IF = 5;
    sbit  IC3IF_bit at IFS2.B5;
    const register unsigned short int SPI2IF = 1;
    sbit  SPI2IF_bit at IFS2.B1;
    const register unsigned short int SPF2IF = 0;
    sbit  SPF2IF_bit at IFS2.B0;

    // IFS3 bits
    const register unsigned short int RTCIF = 14;
    sbit  RTCIF_bit at IFS3.B14;
    const register unsigned short int MI2C2IF = 2;
    sbit  MI2C2IF_bit at IFS3.B2;
    const register unsigned short int SI2C2IF = 1;
    sbit  SI2C2IF_bit at IFS3.B1;

    // IFS4 bits
    const register unsigned short int CTMUIF = 13;
    sbit  CTMUIF_bit at IFS4.B13;
    const register unsigned short int LVDIF = 8;
    sbit  LVDIF_bit at IFS4.B8;
    const register unsigned short int CRCIF = 3;
    sbit  CRCIF_bit at IFS4.B3;
    const register unsigned short int U2ERIF = 2;
    sbit  U2ERIF_bit at IFS4.B2;
    const register unsigned short int U1ERIF = 1;
    sbit  U1ERIF_bit at IFS4.B1;

    // IEC0 bits
    const register unsigned short int AD1IE = 13;
    sbit  AD1IE_bit at IEC0.B13;
    const register unsigned short int U1TXIE = 12;
    sbit  U1TXIE_bit at IEC0.B12;
    const register unsigned short int U1RXIE = 11;
    sbit  U1RXIE_bit at IEC0.B11;
    const register unsigned short int SPI1IE = 10;
    sbit  SPI1IE_bit at IEC0.B10;
    const register unsigned short int SPF1IE = 9;
    sbit  SPF1IE_bit at IEC0.B9;
    const register unsigned short int T3IE = 8;
    sbit  T3IE_bit at IEC0.B8;
    const register unsigned short int T2IE = 7;
    sbit  T2IE_bit at IEC0.B7;
    const register unsigned short int OC2IE = 6;
    sbit  OC2IE_bit at IEC0.B6;
    const register unsigned short int IC2IE = 5;
    sbit  IC2IE_bit at IEC0.B5;
    const register unsigned short int T1IE = 3;
    sbit  T1IE_bit at IEC0.B3;
    const register unsigned short int OC1IE = 2;
    sbit  OC1IE_bit at IEC0.B2;
    const register unsigned short int IC1IE = 1;
    sbit  IC1IE_bit at IEC0.B1;
    const register unsigned short int INT0IE = 0;
    sbit  INT0IE_bit at IEC0.B0;

    // IEC1 bits
    const register unsigned short int U2TXIE = 15;
    sbit  U2TXIE_bit at IEC1.B15;
    const register unsigned short int U2RXIE = 14;
    sbit  U2RXIE_bit at IEC1.B14;
    const register unsigned short int INT2IE = 13;
    sbit  INT2IE_bit at IEC1.B13;
    const register unsigned short int T5IE = 12;
    sbit  T5IE_bit at IEC1.B12;
    const register unsigned short int T4IE = 11;
    sbit  T4IE_bit at IEC1.B11;
    const register unsigned short int OC4IE = 10;
    sbit  OC4IE_bit at IEC1.B10;
    const register unsigned short int OC3IE = 9;
    sbit  OC3IE_bit at IEC1.B9;
    const register unsigned short int INT1IE = 4;
    sbit  INT1IE_bit at IEC1.B4;
    const register unsigned short int CNIE = 3;
    sbit  CNIE_bit at IEC1.B3;
    const register unsigned short int CMIE = 2;
    sbit  CMIE_bit at IEC1.B2;
    const register unsigned short int MI2C1IE = 1;
    sbit  MI2C1IE_bit at IEC1.B1;
    const register unsigned short int SI2C1IE = 0;
    sbit  SI2C1IE_bit at IEC1.B0;

    // IEC2 bits
    const register unsigned short int PMPIE = 13;
    sbit  PMPIE_bit at IEC2.B13;
    const register unsigned short int OC5IE = 9;
    sbit  OC5IE_bit at IEC2.B9;
    const register unsigned short int IC5IE = 7;
    sbit  IC5IE_bit at IEC2.B7;
    const register unsigned short int IC4IE = 6;
    sbit  IC4IE_bit at IEC2.B6;
    const register unsigned short int IC3IE = 5;
    sbit  IC3IE_bit at IEC2.B5;
    const register unsigned short int SPI2IE = 1;
    sbit  SPI2IE_bit at IEC2.B1;
    const register unsigned short int SPF2IE = 0;
    sbit  SPF2IE_bit at IEC2.B0;

    // IEC3 bits
    const register unsigned short int RTCIE = 14;
    sbit  RTCIE_bit at IEC3.B14;
    const register unsigned short int MI2C2IE = 2;
    sbit  MI2C2IE_bit at IEC3.B2;
    const register unsigned short int SI2C2IE = 1;
    sbit  SI2C2IE_bit at IEC3.B1;

    // IEC4 bits
    const register unsigned short int CTMUIE = 13;
    sbit  CTMUIE_bit at IEC4.B13;
    const register unsigned short int LVDIE = 8;
    sbit  LVDIE_bit at IEC4.B8;
    const register unsigned short int CRCIE = 3;
    sbit  CRCIE_bit at IEC4.B3;
    const register unsigned short int U2ERIE = 2;
    sbit  U2ERIE_bit at IEC4.B2;
    const register unsigned short int U1ERIE = 1;
    sbit  U1ERIE_bit at IEC4.B1;

    // IPC0 bits
    const register unsigned short int T1IP_2 = 14;
    sbit  T1IP_2_bit at IPC0.B14;
    sbit  T1IP2_bit at IPC0.B14;
    const register unsigned short int T1IP_1 = 13;
    sbit  T1IP_1_bit at IPC0.B13;
    sbit  T1IP1_bit at IPC0.B13;
    const register unsigned short int T1IP_0 = 12;
    sbit  T1IP_0_bit at IPC0.B12;
    sbit  T1IP0_bit at IPC0.B12;
    const register unsigned short int OC1IP_2 = 10;
    sbit  OC1IP_2_bit at IPC0.B10;
    const register unsigned short int OC1IP_1 = 9;
    sbit  OC1IP_1_bit at IPC0.B9;
    const register unsigned short int OC1IP_0 = 8;
    sbit  OC1IP_0_bit at IPC0.B8;
    const register unsigned short int IC1IP_2 = 6;
    sbit  IC1IP_2_bit at IPC0.B6;
    const register unsigned short int IC1IP_1 = 5;
    sbit  IC1IP_1_bit at IPC0.B5;
    const register unsigned short int IC1IP_0 = 4;
    sbit  IC1IP_0_bit at IPC0.B4;
    const register unsigned short int INT0IP_2 = 2;
    sbit  INT0IP_2_bit at IPC0.B2;
    const register unsigned short int INT0IP_1 = 1;
    sbit  INT0IP_1_bit at IPC0.B1;
    const register unsigned short int INT0IP_0 = 0;
    sbit  INT0IP_0_bit at IPC0.B0;

    // IPC1 bits
    const register unsigned short int T2IP_2 = 14;
    sbit  T2IP_2_bit at IPC1.B14;
    const register unsigned short int T2IP_1 = 13;
    sbit  T2IP_1_bit at IPC1.B13;
    const register unsigned short int T2IP_0 = 12;
    sbit  T2IP_0_bit at IPC1.B12;
    const register unsigned short int OC2IP_2 = 10;
    sbit  OC2IP_2_bit at IPC1.B10;
    const register unsigned short int OC2IP_1 = 9;
    sbit  OC2IP_1_bit at IPC1.B9;
    const register unsigned short int OC2IP_0 = 8;
    sbit  OC2IP_0_bit at IPC1.B8;
    const register unsigned short int IC2IP_2 = 6;
    sbit  IC2IP_2_bit at IPC1.B6;
    const register unsigned short int IC2IP_1 = 5;
    sbit  IC2IP_1_bit at IPC1.B5;
    const register unsigned short int IC2IP_0 = 4;
    sbit  IC2IP_0_bit at IPC1.B4;

    // IPC2 bits
    const register unsigned short int U1RXIP_2 = 14;
    sbit  U1RXIP_2_bit at IPC2.B14;
    const register unsigned short int U1RXIP_1 = 13;
    sbit  U1RXIP_1_bit at IPC2.B13;
    const register unsigned short int U1RXIP_0 = 12;
    sbit  U1RXIP_0_bit at IPC2.B12;
    const register unsigned short int SPI1IP_2 = 10;
    sbit  SPI1IP_2_bit at IPC2.B10;
    const register unsigned short int SPI1IP_1 = 9;
    sbit  SPI1IP_1_bit at IPC2.B9;
    const register unsigned short int SPI1IP_0 = 8;
    sbit  SPI1IP_0_bit at IPC2.B8;
    const register unsigned short int SPF1IP_2 = 6;
    sbit  SPF1IP_2_bit at IPC2.B6;
    const register unsigned short int SPF1IP_1 = 5;
    sbit  SPF1IP_1_bit at IPC2.B5;
    const register unsigned short int SPF1IP_0 = 4;
    sbit  SPF1IP_0_bit at IPC2.B4;
    const register unsigned short int T3IP_2 = 2;
    sbit  T3IP_2_bit at IPC2.B2;
    const register unsigned short int T3IP_1 = 1;
    sbit  T3IP_1_bit at IPC2.B1;
    const register unsigned short int T3IP_0 = 0;
    sbit  T3IP_0_bit at IPC2.B0;

    // IPC3 bits
    const register unsigned short int AD1IP_2 = 6;
    sbit  AD1IP_2_bit at IPC3.B6;
    const register unsigned short int AD1IP_1 = 5;
    sbit  AD1IP_1_bit at IPC3.B5;
    const register unsigned short int AD1IP_0 = 4;
    sbit  AD1IP_0_bit at IPC3.B4;
    const register unsigned short int U1TXIP_2 = 2;
    sbit  U1TXIP_2_bit at IPC3.B2;
    const register unsigned short int U1TXIP_1 = 1;
    sbit  U1TXIP_1_bit at IPC3.B1;
    const register unsigned short int U1TXIP_0 = 0;
    sbit  U1TXIP_0_bit at IPC3.B0;

    // IPC4 bits
    const register unsigned short int CNIP_2 = 14;
    sbit  CNIP_2_bit at IPC4.B14;
    const register unsigned short int CNIP_1 = 13;
    sbit  CNIP_1_bit at IPC4.B13;
    const register unsigned short int CNIP_0 = 12;
    sbit  CNIP_0_bit at IPC4.B12;
    const register unsigned short int CMIP_2 = 10;
    sbit  CMIP_2_bit at IPC4.B10;
    const register unsigned short int CMIP_1 = 9;
    sbit  CMIP_1_bit at IPC4.B9;
    const register unsigned short int CMIP_0 = 8;
    sbit  CMIP_0_bit at IPC4.B8;
    const register unsigned short int MI2C1P_2 = 6;
    sbit  MI2C1P_2_bit at IPC4.B6;
    const register unsigned short int MI2C1P_1 = 5;
    sbit  MI2C1P_1_bit at IPC4.B5;
    const register unsigned short int MI2C1P_0 = 4;
    sbit  MI2C1P_0_bit at IPC4.B4;
    const register unsigned short int SI2C1P_2 = 2;
    sbit  SI2C1P_2_bit at IPC4.B2;
    const register unsigned short int SI2C1P_1 = 1;
    sbit  SI2C1P_1_bit at IPC4.B1;
    const register unsigned short int SI2C1P_0 = 0;
    sbit  SI2C1P_0_bit at IPC4.B0;

    // IPC5 bits
    const register unsigned short int INT1IP_2 = 2;
    const register unsigned short int INT1IP2 = 2;
    sbit  INT1IP_2_bit at IPC5.B2;
    const register unsigned short int INT1IP_1 = 1;
    const register unsigned short int INT1IP1 = 1;
    sbit  INT1IP_1_bit at IPC5.B1;
    const register unsigned short int INT1IP_0 = 0;
    const register unsigned short int INT1IP0 = 0;
    sbit  INT1IP_0_bit at IPC5.B0;

    // IPC6 bits
    const register unsigned short int T4IP_2 = 14;
    sbit  T4IP_2_bit at IPC6.B14;
    const register unsigned short int T4IP_1 = 13;
    sbit  T4IP_1_bit at IPC6.B13;
    const register unsigned short int T4IP_0 = 12;
    sbit  T4IP_0_bit at IPC6.B12;
    const register unsigned short int OC4IP_2 = 10;
    sbit  OC4IP_2_bit at IPC6.B10;
    const register unsigned short int OC4IP_1 = 9;
    sbit  OC4IP_1_bit at IPC6.B9;
    const register unsigned short int OC4IP_0 = 8;
    sbit  OC4IP_0_bit at IPC6.B8;
    const register unsigned short int OC3IP_2 = 6;
    sbit  OC3IP_2_bit at IPC6.B6;
    const register unsigned short int OC3IP_1 = 5;
    sbit  OC3IP_1_bit at IPC6.B5;
    const register unsigned short int OC3IP_0 = 4;
    sbit  OC3IP_0_bit at IPC6.B4;

    // IPC7 bits
    const register unsigned short int U2TXIP_2 = 14;
    sbit  U2TXIP_2_bit at IPC7.B14;
    const register unsigned short int U2TXIP_1 = 13;
    sbit  U2TXIP_1_bit at IPC7.B13;
    const register unsigned short int U2TXIP_0 = 12;
    sbit  U2TXIP_0_bit at IPC7.B12;
    const register unsigned short int U2RXIP_2 = 10;
    sbit  U2RXIP_2_bit at IPC7.B10;
    const register unsigned short int U2RXIP_1 = 9;
    sbit  U2RXIP_1_bit at IPC7.B9;
    const register unsigned short int U2RXIP_0 = 8;
    sbit  U2RXIP_0_bit at IPC7.B8;
    const register unsigned short int INT2IP_2 = 6;
    const register unsigned short int INT2IP2 = 6;
    sbit  INT2IP_2_bit at IPC7.B6;
    const register unsigned short int INT2IP_1 = 5;
    const register unsigned short int INT2IP1= 5;
    sbit  INT2IP_1_bit at IPC7.B5;
    const register unsigned short int INT2IP_0 = 4;
    const register unsigned short int INT2IP0= 4;
    sbit  INT2IP_0_bit at IPC7.B4;
    const register unsigned short int T5IP_2 = 2;
    sbit  T5IP_2_bit at IPC7.B2;
    const register unsigned short int T5IP_1 = 1;
    sbit  T5IP_1_bit at IPC7.B1;
    const register unsigned short int T5IP_0 = 0;
    sbit  T5IP_0_bit at IPC7.B0;

    // IPC8 bits
    const register unsigned short int SPI2IP_2 = 6;
    sbit  SPI2IP_2_bit at IPC8.B6;
    const register unsigned short int SPI2IP_1 = 5;
    sbit  SPI2IP_1_bit at IPC8.B5;
    const register unsigned short int SPI2IP_0 = 4;
    sbit  SPI2IP_0_bit at IPC8.B4;
    const register unsigned short int SPF2IP_2 = 2;
    sbit  SPF2IP_2_bit at IPC8.B2;
    const register unsigned short int SPF2IP_1 = 1;
    sbit  SPF2IP_1_bit at IPC8.B1;
    const register unsigned short int SPF2IP_0 = 0;
    sbit  SPF2IP_0_bit at IPC8.B0;

    // IPC9 bits
    const register unsigned short int IC5IP_2 = 14;
    sbit  IC5IP_2_bit at IPC9.B14;
    const register unsigned short int IC5IP_1 = 13;
    sbit  IC5IP_1_bit at IPC9.B13;
    const register unsigned short int IC5IP_0 = 12;
    sbit  IC5IP_0_bit at IPC9.B12;
    const register unsigned short int IC4IP_2 = 10;
    sbit  IC4IP_2_bit at IPC9.B10;
    const register unsigned short int IC4IP_1 = 9;
    sbit  IC4IP_1_bit at IPC9.B9;
    const register unsigned short int IC4IP_0 = 8;
    sbit  IC4IP_0_bit at IPC9.B8;
    const register unsigned short int IC3IP_2 = 6;
    sbit  IC3IP_2_bit at IPC9.B6;
    const register unsigned short int IC3IP_1 = 5;
    sbit  IC3IP_1_bit at IPC9.B5;
    const register unsigned short int IC3IP_0 = 4;
    sbit  IC3IP_0_bit at IPC9.B4;

    // IPC10 bits
    const register unsigned short int OC5IP_2 = 6;
    sbit  OC5IP_2_bit at IPC10.B6;
    const register unsigned short int OC5IP_1 = 5;
    sbit  OC5IP_1_bit at IPC10.B5;
    const register unsigned short int OC5IP_0 = 4;
    sbit  OC5IP_0_bit at IPC10.B4;

    // IPC11 bits
    const register unsigned short int PMPIP_2 = 6;
    sbit  PMPIP_2_bit at IPC11.B6;
    const register unsigned short int PMPIP_1 = 5;
    sbit  PMPIP_1_bit at IPC11.B5;
    const register unsigned short int PMPIP_0 = 4;
    sbit  PMPIP_0_bit at IPC11.B4;

    // IPC12 bits
    const register unsigned short int MI2C2P_2 = 10;
    sbit  MI2C2P_2_bit at IPC12.B10;
    const register unsigned short int MI2C2P_1 = 9;
    sbit  MI2C2P_1_bit at IPC12.B9;
    const register unsigned short int MI2C2P_0 = 8;
    sbit  MI2C2P_0_bit at IPC12.B8;
    const register unsigned short int SI2C2P_2 = 6;
    sbit  SI2C2P_2_bit at IPC12.B6;
    const register unsigned short int SI2C2P_1 = 5;
    sbit  SI2C2P_1_bit at IPC12.B5;
    const register unsigned short int SI2C2P_0 = 4;
    sbit  SI2C2P_0_bit at IPC12.B4;

    // IPC15 bits
    const register unsigned short int RTCIP_2 = 10;
    sbit  RTCIP_2_bit at IPC15.B10;
    const register unsigned short int RTCIP_1 = 9;
    sbit  RTCIP_1_bit at IPC15.B9;
    const register unsigned short int RTCIP_0 = 8;
    sbit  RTCIP_0_bit at IPC15.B8;

    // IPC16 bits
    const register unsigned short int CRCIP_2 = 14;
    sbit  CRCIP_2_bit at IPC16.B14;
    const register unsigned short int CRCIP_1 = 13;
    sbit  CRCIP_1_bit at IPC16.B13;
    const register unsigned short int CRCIP_0 = 12;
    sbit  CRCIP_0_bit at IPC16.B12;
    const register unsigned short int U2ERIP_2 = 10;
    sbit  U2ERIP_2_bit at IPC16.B10;
    const register unsigned short int U2ERIP_1 = 9;
    sbit  U2ERIP_1_bit at IPC16.B9;
    const register unsigned short int U2ERIP_0 = 8;
    sbit  U2ERIP_0_bit at IPC16.B8;
    const register unsigned short int U1ERIP_2 = 6;
    sbit  U1ERIP_2_bit at IPC16.B6;
    const register unsigned short int U1ERIP_1 = 5;
    sbit  U1ERIP_1_bit at IPC16.B5;
    const register unsigned short int U1ERIP_0 = 4;
    sbit  U1ERIP_0_bit at IPC16.B4;

    // IPC18 bits
    const register unsigned short int LVDIP_2 = 2;
    sbit  LVDIP_2_bit at IPC18.B2;
    const register unsigned short int LVDIP_1 = 1;
    sbit  LVDIP_1_bit at IPC18.B1;
    const register unsigned short int LVDIP_0 = 0;
    sbit  LVDIP_0_bit at IPC18.B0;

    // IPC19 bits
    const register unsigned short int CTMUIP_2 = 6;
    sbit  CTMUIP_2_bit at IPC19.B6;
    const register unsigned short int CTMUIP_1 = 5;
    sbit  CTMUIP_1_bit at IPC19.B5;
    const register unsigned short int CTMUIP_0 = 4;
    sbit  CTMUIP_0_bit at IPC19.B4;

    // INTTREG bits
    const register unsigned short int CPUIRQ = 15;
    sbit  CPUIRQ_bit at INTTREG.B15;
    const register unsigned short int VHOLD = 13;
    sbit  VHOLD_bit at INTTREG.B13;
    const register unsigned short int ILR_3 = 11;
    sbit  ILR_3_bit at INTTREG.B11;
    const register unsigned short int ILR_2 = 10;
    sbit  ILR_2_bit at INTTREG.B10;
    const register unsigned short int ILR_1 = 9;
    sbit  ILR_1_bit at INTTREG.B9;
    const register unsigned short int ILR_0 = 8;
    sbit  ILR_0_bit at INTTREG.B8;
    const register unsigned short int VECNUM_6 = 6;
    sbit  VECNUM_6_bit at INTTREG.B6;
    const register unsigned short int VECNUM_5 = 5;
    sbit  VECNUM_5_bit at INTTREG.B5;
    const register unsigned short int VECNUM_4 = 4;
    sbit  VECNUM_4_bit at INTTREG.B4;
    const register unsigned short int VECNUM_3 = 3;
    sbit  VECNUM_3_bit at INTTREG.B3;
    const register unsigned short int VECNUM_2 = 2;
    sbit  VECNUM_2_bit at INTTREG.B2;
    const register unsigned short int VECNUM_1 = 1;
    sbit  VECNUM_1_bit at INTTREG.B1;
    const register unsigned short int VECNUM_0 = 0;
    sbit  VECNUM_0_bit at INTTREG.B0;

    // TMR1 bits
    const register unsigned short int TMR1_15 = 15;
    sbit  TMR1_15_bit at TMR1.B15;
    const register unsigned short int TMR1_14 = 14;
    sbit  TMR1_14_bit at TMR1.B14;
    const register unsigned short int TMR1_13 = 13;
    sbit  TMR1_13_bit at TMR1.B13;
    const register unsigned short int TMR1_12 = 12;
    sbit  TMR1_12_bit at TMR1.B12;
    const register unsigned short int TMR1_11 = 11;
    sbit  TMR1_11_bit at TMR1.B11;
    const register unsigned short int TMR1_10 = 10;
    sbit  TMR1_10_bit at TMR1.B10;
    const register unsigned short int TMR1_9 = 9;
    sbit  TMR1_9_bit at TMR1.B9;
    const register unsigned short int TMR1_8 = 8;
    sbit  TMR1_8_bit at TMR1.B8;
    const register unsigned short int TMR1_7 = 7;
    sbit  TMR1_7_bit at TMR1.B7;
    const register unsigned short int TMR1_6 = 6;
    sbit  TMR1_6_bit at TMR1.B6;
    const register unsigned short int TMR1_5 = 5;
    sbit  TMR1_5_bit at TMR1.B5;
    const register unsigned short int TMR1_4 = 4;
    sbit  TMR1_4_bit at TMR1.B4;
    const register unsigned short int TMR1_3 = 3;
    sbit  TMR1_3_bit at TMR1.B3;
    const register unsigned short int TMR1_2 = 2;
    sbit  TMR1_2_bit at TMR1.B2;
    const register unsigned short int TMR1_1 = 1;
    sbit  TMR1_1_bit at TMR1.B1;
    const register unsigned short int TMR1_0 = 0;
    sbit  TMR1_0_bit at TMR1.B0;

    // PR1 bits
    const register unsigned short int PR1_15 = 15;
    sbit  PR1_15_bit at PR1.B15;
    const register unsigned short int PR1_14 = 14;
    sbit  PR1_14_bit at PR1.B14;
    const register unsigned short int PR1_13 = 13;
    sbit  PR1_13_bit at PR1.B13;
    const register unsigned short int PR1_12 = 12;
    sbit  PR1_12_bit at PR1.B12;
    const register unsigned short int PR1_11 = 11;
    sbit  PR1_11_bit at PR1.B11;
    const register unsigned short int PR1_10 = 10;
    sbit  PR1_10_bit at PR1.B10;
    const register unsigned short int PR1_9 = 9;
    sbit  PR1_9_bit at PR1.B9;
    const register unsigned short int PR1_8 = 8;
    sbit  PR1_8_bit at PR1.B8;
    const register unsigned short int PR1_7 = 7;
    sbit  PR1_7_bit at PR1.B7;
    const register unsigned short int PR1_6 = 6;
    sbit  PR1_6_bit at PR1.B6;
    const register unsigned short int PR1_5 = 5;
    sbit  PR1_5_bit at PR1.B5;
    const register unsigned short int PR1_4 = 4;
    sbit  PR1_4_bit at PR1.B4;
    const register unsigned short int PR1_3 = 3;
    sbit  PR1_3_bit at PR1.B3;
    const register unsigned short int PR1_2 = 2;
    sbit  PR1_2_bit at PR1.B2;
    const register unsigned short int PR1_1 = 1;
    sbit  PR1_1_bit at PR1.B1;
    const register unsigned short int PR1_0 = 0;
    sbit  PR1_0_bit at PR1.B0;

    // T1CON bits
    const register unsigned short int TON = 15;
    sbit  TON_bit at T1CON.B15;
    sbit  TON_T1CON_bit at T1CON.B15;
    const register unsigned short int TSIDL = 13;
    sbit  TSIDL_bit at T1CON.B13;
    sbit  TSIDL_T1CON_bit at T1CON.B13;
    const register unsigned short int TGATE = 6;
    sbit  TGATE_bit at T1CON.B6;
    sbit  TGATE_T1CON_bit at T1CON.B6;
    const register unsigned short int TCKPS_1 = 5;
    sbit  TCKPS_1_bit at T1CON.B5;
    sbit  TCKPS_1_T1CON_bit at T1CON.B5;
    const register unsigned short int TCKPS_0 = 4;
    sbit  TCKPS_0_bit at T1CON.B4;
    sbit  TCKPS_0_T1CON_bit at T1CON.B4;
    const register unsigned short int TSYNC = 2;
    sbit  TSYNC_bit at T1CON.B2;
    const register unsigned short int TCS = 1;
    sbit  TCS_bit at T1CON.B1;
    sbit  TCS_T1CON_bit at T1CON.B1;

    // TMR2 bits
    const register unsigned short int TMR2_15 = 15;
    sbit  TMR2_15_bit at TMR2.B15;
    const register unsigned short int TMR2_14 = 14;
    sbit  TMR2_14_bit at TMR2.B14;
    const register unsigned short int TMR2_13 = 13;
    sbit  TMR2_13_bit at TMR2.B13;
    const register unsigned short int TMR2_12 = 12;
    sbit  TMR2_12_bit at TMR2.B12;
    const register unsigned short int TMR2_11 = 11;
    sbit  TMR2_11_bit at TMR2.B11;
    const register unsigned short int TMR2_10 = 10;
    sbit  TMR2_10_bit at TMR2.B10;
    const register unsigned short int TMR2_9 = 9;
    sbit  TMR2_9_bit at TMR2.B9;
    const register unsigned short int TMR2_8 = 8;
    sbit  TMR2_8_bit at TMR2.B8;
    const register unsigned short int TMR2_7 = 7;
    sbit  TMR2_7_bit at TMR2.B7;
    const register unsigned short int TMR2_6 = 6;
    sbit  TMR2_6_bit at TMR2.B6;
    const register unsigned short int TMR2_5 = 5;
    sbit  TMR2_5_bit at TMR2.B5;
    const register unsigned short int TMR2_4 = 4;
    sbit  TMR2_4_bit at TMR2.B4;
    const register unsigned short int TMR2_3 = 3;
    sbit  TMR2_3_bit at TMR2.B3;
    const register unsigned short int TMR2_2 = 2;
    sbit  TMR2_2_bit at TMR2.B2;
    const register unsigned short int TMR2_1 = 1;
    sbit  TMR2_1_bit at TMR2.B1;
    const register unsigned short int TMR2_0 = 0;
    sbit  TMR2_0_bit at TMR2.B0;

    // TMR3HLD bits
    const register unsigned short int TMR3HLD_15 = 15;
    sbit  TMR3HLD_15_bit at TMR3HLD.B15;
    const register unsigned short int TMR3HLD_14 = 14;
    sbit  TMR3HLD_14_bit at TMR3HLD.B14;
    const register unsigned short int TMR3HLD_13 = 13;
    sbit  TMR3HLD_13_bit at TMR3HLD.B13;
    const register unsigned short int TMR3HLD_12 = 12;
    sbit  TMR3HLD_12_bit at TMR3HLD.B12;
    const register unsigned short int TMR3HLD_11 = 11;
    sbit  TMR3HLD_11_bit at TMR3HLD.B11;
    const register unsigned short int TMR3HLD_10 = 10;
    sbit  TMR3HLD_10_bit at TMR3HLD.B10;
    const register unsigned short int TMR3HLD_9 = 9;
    sbit  TMR3HLD_9_bit at TMR3HLD.B9;
    const register unsigned short int TMR3HLD_8 = 8;
    sbit  TMR3HLD_8_bit at TMR3HLD.B8;
    const register unsigned short int TMR3HLD_7 = 7;
    sbit  TMR3HLD_7_bit at TMR3HLD.B7;
    const register unsigned short int TMR3HLD_6 = 6;
    sbit  TMR3HLD_6_bit at TMR3HLD.B6;
    const register unsigned short int TMR3HLD_5 = 5;
    sbit  TMR3HLD_5_bit at TMR3HLD.B5;
    const register unsigned short int TMR3HLD_4 = 4;
    sbit  TMR3HLD_4_bit at TMR3HLD.B4;
    const register unsigned short int TMR3HLD_3 = 3;
    sbit  TMR3HLD_3_bit at TMR3HLD.B3;
    const register unsigned short int TMR3HLD_2 = 2;
    sbit  TMR3HLD_2_bit at TMR3HLD.B2;
    const register unsigned short int TMR3HLD_1 = 1;
    sbit  TMR3HLD_1_bit at TMR3HLD.B1;
    const register unsigned short int TMR3HLD_0 = 0;
    sbit  TMR3HLD_0_bit at TMR3HLD.B0;

    // TMR3 bits
    const register unsigned short int TMR3_15 = 15;
    sbit  TMR3_15_bit at TMR3.B15;
    const register unsigned short int TMR3_14 = 14;
    sbit  TMR3_14_bit at TMR3.B14;
    const register unsigned short int TMR3_13 = 13;
    sbit  TMR3_13_bit at TMR3.B13;
    const register unsigned short int TMR3_12 = 12;
    sbit  TMR3_12_bit at TMR3.B12;
    const register unsigned short int TMR3_11 = 11;
    sbit  TMR3_11_bit at TMR3.B11;
    const register unsigned short int TMR3_10 = 10;
    sbit  TMR3_10_bit at TMR3.B10;
    const register unsigned short int TMR3_9 = 9;
    sbit  TMR3_9_bit at TMR3.B9;
    const register unsigned short int TMR3_8 = 8;
    sbit  TMR3_8_bit at TMR3.B8;
    const register unsigned short int TMR3_7 = 7;
    sbit  TMR3_7_bit at TMR3.B7;
    const register unsigned short int TMR3_6 = 6;
    sbit  TMR3_6_bit at TMR3.B6;
    const register unsigned short int TMR3_5 = 5;
    sbit  TMR3_5_bit at TMR3.B5;
    const register unsigned short int TMR3_4 = 4;
    sbit  TMR3_4_bit at TMR3.B4;
    const register unsigned short int TMR3_3 = 3;
    sbit  TMR3_3_bit at TMR3.B3;
    const register unsigned short int TMR3_2 = 2;
    sbit  TMR3_2_bit at TMR3.B2;
    const register unsigned short int TMR3_1 = 1;
    sbit  TMR3_1_bit at TMR3.B1;
    const register unsigned short int TMR3_0 = 0;
    sbit  TMR3_0_bit at TMR3.B0;

    // PR2 bits
    const register unsigned short int PR2_15 = 15;
    sbit  PR2_15_bit at PR2.B15;
    const register unsigned short int PR2_14 = 14;
    sbit  PR2_14_bit at PR2.B14;
    const register unsigned short int PR2_13 = 13;
    sbit  PR2_13_bit at PR2.B13;
    const register unsigned short int PR2_12 = 12;
    sbit  PR2_12_bit at PR2.B12;
    const register unsigned short int PR2_11 = 11;
    sbit  PR2_11_bit at PR2.B11;
    const register unsigned short int PR2_10 = 10;
    sbit  PR2_10_bit at PR2.B10;
    const register unsigned short int PR2_9 = 9;
    sbit  PR2_9_bit at PR2.B9;
    const register unsigned short int PR2_8 = 8;
    sbit  PR2_8_bit at PR2.B8;
    const register unsigned short int PR2_7 = 7;
    sbit  PR2_7_bit at PR2.B7;
    const register unsigned short int PR2_6 = 6;
    sbit  PR2_6_bit at PR2.B6;
    const register unsigned short int PR2_5 = 5;
    sbit  PR2_5_bit at PR2.B5;
    const register unsigned short int PR2_4 = 4;
    sbit  PR2_4_bit at PR2.B4;
    const register unsigned short int PR2_3 = 3;
    sbit  PR2_3_bit at PR2.B3;
    const register unsigned short int PR2_2 = 2;
    sbit  PR2_2_bit at PR2.B2;
    const register unsigned short int PR2_1 = 1;
    sbit  PR2_1_bit at PR2.B1;
    const register unsigned short int PR2_0 = 0;
    sbit  PR2_0_bit at PR2.B0;

    // PR3 bits
    const register unsigned short int PR3_15 = 15;
    sbit  PR3_15_bit at PR3.B15;
    const register unsigned short int PR3_14 = 14;
    sbit  PR3_14_bit at PR3.B14;
    const register unsigned short int PR3_13 = 13;
    sbit  PR3_13_bit at PR3.B13;
    const register unsigned short int PR3_12 = 12;
    sbit  PR3_12_bit at PR3.B12;
    const register unsigned short int PR3_11 = 11;
    sbit  PR3_11_bit at PR3.B11;
    const register unsigned short int PR3_10 = 10;
    sbit  PR3_10_bit at PR3.B10;
    const register unsigned short int PR3_9 = 9;
    sbit  PR3_9_bit at PR3.B9;
    const register unsigned short int PR3_8 = 8;
    sbit  PR3_8_bit at PR3.B8;
    const register unsigned short int PR3_7 = 7;
    sbit  PR3_7_bit at PR3.B7;
    const register unsigned short int PR3_6 = 6;
    sbit  PR3_6_bit at PR3.B6;
    const register unsigned short int PR3_5 = 5;
    sbit  PR3_5_bit at PR3.B5;
    const register unsigned short int PR3_4 = 4;
    sbit  PR3_4_bit at PR3.B4;
    const register unsigned short int PR3_3 = 3;
    sbit  PR3_3_bit at PR3.B3;
    const register unsigned short int PR3_2 = 2;
    sbit  PR3_2_bit at PR3.B2;
    const register unsigned short int PR3_1 = 1;
    sbit  PR3_1_bit at PR3.B1;
    const register unsigned short int PR3_0 = 0;
    sbit  PR3_0_bit at PR3.B0;

    // T2CON bits
    sbit  TON_T2CON_bit at T2CON.B15;
    sbit  TSIDL_T2CON_bit at T2CON.B13;
    sbit  TGATE_T2CON_bit at T2CON.B6;
    sbit  TCKPS_1_T2CON_bit at T2CON.B5;
    sbit  TCKPS_0_T2CON_bit at T2CON.B4;
    const register unsigned short int T32 = 3;
    sbit  T32_bit at T2CON.B3;
    sbit  T32_T2CON_bit at T2CON.B3;
    sbit  TCS_T2CON_bit at T2CON.B1;

    // T3CON bits
    sbit  TON_T3CON_bit at T3CON.B15;
    sbit  TSIDL_T3CON_bit at T3CON.B13;
    sbit  TGATE_T3CON_bit at T3CON.B6;
    sbit  TCKPS_1_T3CON_bit at T3CON.B5;
    sbit  TCKPS_0_T3CON_bit at T3CON.B4;
    sbit  TCS_T3CON_bit at T3CON.B1;

    // TMR4 bits
    const register unsigned short int TMR4_15 = 15;
    sbit  TMR4_15_bit at TMR4.B15;
    const register unsigned short int TMR4_14 = 14;
    sbit  TMR4_14_bit at TMR4.B14;
    const register unsigned short int TMR4_13 = 13;
    sbit  TMR4_13_bit at TMR4.B13;
    const register unsigned short int TMR4_12 = 12;
    sbit  TMR4_12_bit at TMR4.B12;
    const register unsigned short int TMR4_11 = 11;
    sbit  TMR4_11_bit at TMR4.B11;
    const register unsigned short int TMR4_10 = 10;
    sbit  TMR4_10_bit at TMR4.B10;
    const register unsigned short int TMR4_9 = 9;
    sbit  TMR4_9_bit at TMR4.B9;
    const register unsigned short int TMR4_8 = 8;
    sbit  TMR4_8_bit at TMR4.B8;
    const register unsigned short int TMR4_7 = 7;
    sbit  TMR4_7_bit at TMR4.B7;
    const register unsigned short int TMR4_6 = 6;
    sbit  TMR4_6_bit at TMR4.B6;
    const register unsigned short int TMR4_5 = 5;
    sbit  TMR4_5_bit at TMR4.B5;
    const register unsigned short int TMR4_4 = 4;
    sbit  TMR4_4_bit at TMR4.B4;
    const register unsigned short int TMR4_3 = 3;
    sbit  TMR4_3_bit at TMR4.B3;
    const register unsigned short int TMR4_2 = 2;
    sbit  TMR4_2_bit at TMR4.B2;
    const register unsigned short int TMR4_1 = 1;
    sbit  TMR4_1_bit at TMR4.B1;
    const register unsigned short int TMR4_0 = 0;
    sbit  TMR4_0_bit at TMR4.B0;

    // TMR5HLD bits
    const register unsigned short int TMR5HLD_15 = 15;
    sbit  TMR5HLD_15_bit at TMR5HLD.B15;
    const register unsigned short int TMR5HLD_14 = 14;
    sbit  TMR5HLD_14_bit at TMR5HLD.B14;
    const register unsigned short int TMR5HLD_13 = 13;
    sbit  TMR5HLD_13_bit at TMR5HLD.B13;
    const register unsigned short int TMR5HLD_12 = 12;
    sbit  TMR5HLD_12_bit at TMR5HLD.B12;
    const register unsigned short int TMR5HLD_11 = 11;
    sbit  TMR5HLD_11_bit at TMR5HLD.B11;
    const register unsigned short int TMR5HLD_10 = 10;
    sbit  TMR5HLD_10_bit at TMR5HLD.B10;
    const register unsigned short int TMR5HLD_9 = 9;
    sbit  TMR5HLD_9_bit at TMR5HLD.B9;
    const register unsigned short int TMR5HLD_8 = 8;
    sbit  TMR5HLD_8_bit at TMR5HLD.B8;
    const register unsigned short int TMR5HLD_7 = 7;
    sbit  TMR5HLD_7_bit at TMR5HLD.B7;
    const register unsigned short int TMR5HLD_6 = 6;
    sbit  TMR5HLD_6_bit at TMR5HLD.B6;
    const register unsigned short int TMR5HLD_5 = 5;
    sbit  TMR5HLD_5_bit at TMR5HLD.B5;
    const register unsigned short int TMR5HLD_4 = 4;
    sbit  TMR5HLD_4_bit at TMR5HLD.B4;
    const register unsigned short int TMR5HLD_3 = 3;
    sbit  TMR5HLD_3_bit at TMR5HLD.B3;
    const register unsigned short int TMR5HLD_2 = 2;
    sbit  TMR5HLD_2_bit at TMR5HLD.B2;
    const register unsigned short int TMR5HLD_1 = 1;
    sbit  TMR5HLD_1_bit at TMR5HLD.B1;
    const register unsigned short int TMR5HLD_0 = 0;
    sbit  TMR5HLD_0_bit at TMR5HLD.B0;

    // TMR5 bits
    const register unsigned short int TMR5_15 = 15;
    sbit  TMR5_15_bit at TMR5.B15;
    const register unsigned short int TMR5_14 = 14;
    sbit  TMR5_14_bit at TMR5.B14;
    const register unsigned short int TMR5_13 = 13;
    sbit  TMR5_13_bit at TMR5.B13;
    const register unsigned short int TMR5_12 = 12;
    sbit  TMR5_12_bit at TMR5.B12;
    const register unsigned short int TMR5_11 = 11;
    sbit  TMR5_11_bit at TMR5.B11;
    const register unsigned short int TMR5_10 = 10;
    sbit  TMR5_10_bit at TMR5.B10;
    const register unsigned short int TMR5_9 = 9;
    sbit  TMR5_9_bit at TMR5.B9;
    const register unsigned short int TMR5_8 = 8;
    sbit  TMR5_8_bit at TMR5.B8;
    const register unsigned short int TMR5_7 = 7;
    sbit  TMR5_7_bit at TMR5.B7;
    const register unsigned short int TMR5_6 = 6;
    sbit  TMR5_6_bit at TMR5.B6;
    const register unsigned short int TMR5_5 = 5;
    sbit  TMR5_5_bit at TMR5.B5;
    const register unsigned short int TMR5_4 = 4;
    sbit  TMR5_4_bit at TMR5.B4;
    const register unsigned short int TMR5_3 = 3;
    sbit  TMR5_3_bit at TMR5.B3;
    const register unsigned short int TMR5_2 = 2;
    sbit  TMR5_2_bit at TMR5.B2;
    const register unsigned short int TMR5_1 = 1;
    sbit  TMR5_1_bit at TMR5.B1;
    const register unsigned short int TMR5_0 = 0;
    sbit  TMR5_0_bit at TMR5.B0;

    // PR4 bits
    const register unsigned short int PR4_15 = 15;
    sbit  PR4_15_bit at PR4.B15;
    const register unsigned short int PR4_14 = 14;
    sbit  PR4_14_bit at PR4.B14;
    const register unsigned short int PR4_13 = 13;
    sbit  PR4_13_bit at PR4.B13;
    const register unsigned short int PR4_12 = 12;
    sbit  PR4_12_bit at PR4.B12;
    const register unsigned short int PR4_11 = 11;
    sbit  PR4_11_bit at PR4.B11;
    const register unsigned short int PR4_10 = 10;
    sbit  PR4_10_bit at PR4.B10;
    const register unsigned short int PR4_9 = 9;
    sbit  PR4_9_bit at PR4.B9;
    const register unsigned short int PR4_8 = 8;
    sbit  PR4_8_bit at PR4.B8;
    const register unsigned short int PR4_7 = 7;
    sbit  PR4_7_bit at PR4.B7;
    const register unsigned short int PR4_6 = 6;
    sbit  PR4_6_bit at PR4.B6;
    const register unsigned short int PR4_5 = 5;
    sbit  PR4_5_bit at PR4.B5;
    const register unsigned short int PR4_4 = 4;
    sbit  PR4_4_bit at PR4.B4;
    const register unsigned short int PR4_3 = 3;
    sbit  PR4_3_bit at PR4.B3;
    const register unsigned short int PR4_2 = 2;
    sbit  PR4_2_bit at PR4.B2;
    const register unsigned short int PR4_1 = 1;
    sbit  PR4_1_bit at PR4.B1;
    const register unsigned short int PR4_0 = 0;
    sbit  PR4_0_bit at PR4.B0;

    // PR5 bits
    const register unsigned short int PR5_15 = 15;
    sbit  PR5_15_bit at PR5.B15;
    const register unsigned short int PR5_14 = 14;
    sbit  PR5_14_bit at PR5.B14;
    const register unsigned short int PR5_13 = 13;
    sbit  PR5_13_bit at PR5.B13;
    const register unsigned short int PR5_12 = 12;
    sbit  PR5_12_bit at PR5.B12;
    const register unsigned short int PR5_11 = 11;
    sbit  PR5_11_bit at PR5.B11;
    const register unsigned short int PR5_10 = 10;
    sbit  PR5_10_bit at PR5.B10;
    const register unsigned short int PR5_9 = 9;
    sbit  PR5_9_bit at PR5.B9;
    const register unsigned short int PR5_8 = 8;
    sbit  PR5_8_bit at PR5.B8;
    const register unsigned short int PR5_7 = 7;
    sbit  PR5_7_bit at PR5.B7;
    const register unsigned short int PR5_6 = 6;
    sbit  PR5_6_bit at PR5.B6;
    const register unsigned short int PR5_5 = 5;
    sbit  PR5_5_bit at PR5.B5;
    const register unsigned short int PR5_4 = 4;
    sbit  PR5_4_bit at PR5.B4;
    const register unsigned short int PR5_3 = 3;
    sbit  PR5_3_bit at PR5.B3;
    const register unsigned short int PR5_2 = 2;
    sbit  PR5_2_bit at PR5.B2;
    const register unsigned short int PR5_1 = 1;
    sbit  PR5_1_bit at PR5.B1;
    const register unsigned short int PR5_0 = 0;
    sbit  PR5_0_bit at PR5.B0;

    // T4CON bits
    sbit  TON_T4CON_bit at T4CON.B15;
    sbit  TSIDL_T4CON_bit at T4CON.B13;
    sbit  TGATE_T4CON_bit at T4CON.B6;
    sbit  TCKPS_1_T4CON_bit at T4CON.B5;
    sbit  TCKPS_0_T4CON_bit at T4CON.B4;
    sbit  T32_T4CON_bit at T4CON.B3;
    sbit  TCS_T4CON_bit at T4CON.B1;

    // T5CON bits
    sbit  TON_T5CON_bit at T5CON.B15;
    sbit  TSIDL_T5CON_bit at T5CON.B13;
    sbit  TGATE_T5CON_bit at T5CON.B6;
    sbit  TCKPS_1_T5CON_bit at T5CON.B5;
    sbit  TCKPS_0_T5CON_bit at T5CON.B4;
    sbit  TCS_T5CON_bit at T5CON.B1;

    // IC1CON1 bits
    const register unsigned short int ICSIDL = 13;
    sbit  ICSIDL_bit at IC1CON1.B13;
    sbit  ICSIDL_IC1CON1_bit at IC1CON1.B13;
    const register unsigned short int ICTSEL_2 = 12;
    sbit  ICTSEL_2_bit at IC1CON1.B12;
    sbit  ICTSEL_2_IC1CON1_bit at IC1CON1.B12;
    const register unsigned short int ICTSEL_1 = 11;
    sbit  ICTSEL_1_bit at IC1CON1.B11;
    sbit  ICTSEL_1_IC1CON1_bit at IC1CON1.B11;
    const register unsigned short int ICTSEL_0 = 10;
    sbit  ICTSEL_0_bit at IC1CON1.B10;
    sbit  ICTSEL_0_IC1CON1_bit at IC1CON1.B10;
    const register unsigned short int ICI_1 = 6;
    sbit  ICI_1_bit at IC1CON1.B6;
    sbit  ICI_1_IC1CON1_bit at IC1CON1.B6;
    const register unsigned short int ICI_0 = 5;
    sbit  ICI_0_bit at IC1CON1.B5;
    sbit  ICI_0_IC1CON1_bit at IC1CON1.B5;
    const register unsigned short int ICOV = 4;
    sbit  ICOV_bit at IC1CON1.B4;
    sbit  ICOV_IC1CON1_bit at IC1CON1.B4;
    const register unsigned short int ICBNE = 3;
    sbit  ICBNE_bit at IC1CON1.B3;
    sbit  ICBNE_IC1CON1_bit at IC1CON1.B3;
    const register unsigned short int ICM_2 = 2;
    sbit  ICM_2_bit at IC1CON1.B2;
    sbit  ICM_2_IC1CON1_bit at IC1CON1.B2;
    const register unsigned short int ICM_1 = 1;
    sbit  ICM_1_bit at IC1CON1.B1;
    sbit  ICM_1_IC1CON1_bit at IC1CON1.B1;
    const register unsigned short int ICM_0 = 0;
    sbit  ICM_0_bit at IC1CON1.B0;
    sbit  ICM_0_IC1CON1_bit at IC1CON1.B0;

    // IC1CON2 bits
    const register unsigned short int IC32 = 8;
    sbit  IC32_bit at IC1CON2.B8;
    sbit  IC32_IC1CON2_bit at IC1CON2.B8;
    const register unsigned short int ICTRIG = 7;
    sbit  ICTRIG_bit at IC1CON2.B7;
    sbit  ICTRIG_IC1CON2_bit at IC1CON2.B7;
    const register unsigned short int TRIGSTAT = 6;
    sbit  TRIGSTAT_bit at IC1CON2.B6;
    sbit  TRIGSTAT_IC1CON2_bit at IC1CON2.B6;
    const register unsigned short int SYNCSEL_4 = 4;
    sbit  SYNCSEL_4_bit at IC1CON2.B4;
    sbit  SYNCSEL_4_IC1CON2_bit at IC1CON2.B4;
    const register unsigned short int SYNCSEL_3 = 3;
    sbit  SYNCSEL_3_bit at IC1CON2.B3;
    sbit  SYNCSEL_3_IC1CON2_bit at IC1CON2.B3;
    const register unsigned short int SYNCSEL_2 = 2;
    sbit  SYNCSEL_2_bit at IC1CON2.B2;
    sbit  SYNCSEL_2_IC1CON2_bit at IC1CON2.B2;
    const register unsigned short int SYNCSEL_1 = 1;
    sbit  SYNCSEL_1_bit at IC1CON2.B1;
    sbit  SYNCSEL_1_IC1CON2_bit at IC1CON2.B1;
    const register unsigned short int SYNCSEL_0 = 0;
    sbit  SYNCSEL_0_bit at IC1CON2.B0;
    sbit  SYNCSEL_0_IC1CON2_bit at IC1CON2.B0;

    // IC1BUF bits
    const register unsigned short int IC1BUF_15 = 15;
    sbit  IC1BUF_15_bit at IC1BUF.B15;
    const register unsigned short int IC1BUF_14 = 14;
    sbit  IC1BUF_14_bit at IC1BUF.B14;
    const register unsigned short int IC1BUF_13 = 13;
    sbit  IC1BUF_13_bit at IC1BUF.B13;
    const register unsigned short int IC1BUF_12 = 12;
    sbit  IC1BUF_12_bit at IC1BUF.B12;
    const register unsigned short int IC1BUF_11 = 11;
    sbit  IC1BUF_11_bit at IC1BUF.B11;
    const register unsigned short int IC1BUF_10 = 10;
    sbit  IC1BUF_10_bit at IC1BUF.B10;
    const register unsigned short int IC1BUF_9 = 9;
    sbit  IC1BUF_9_bit at IC1BUF.B9;
    const register unsigned short int IC1BUF_8 = 8;
    sbit  IC1BUF_8_bit at IC1BUF.B8;
    const register unsigned short int IC1BUF_7 = 7;
    sbit  IC1BUF_7_bit at IC1BUF.B7;
    const register unsigned short int IC1BUF_6 = 6;
    sbit  IC1BUF_6_bit at IC1BUF.B6;
    const register unsigned short int IC1BUF_5 = 5;
    sbit  IC1BUF_5_bit at IC1BUF.B5;
    const register unsigned short int IC1BUF_4 = 4;
    sbit  IC1BUF_4_bit at IC1BUF.B4;
    const register unsigned short int IC1BUF_3 = 3;
    sbit  IC1BUF_3_bit at IC1BUF.B3;
    const register unsigned short int IC1BUF_2 = 2;
    sbit  IC1BUF_2_bit at IC1BUF.B2;
    const register unsigned short int IC1BUF_1 = 1;
    sbit  IC1BUF_1_bit at IC1BUF.B1;
    const register unsigned short int IC1BUF_0 = 0;
    sbit  IC1BUF_0_bit at IC1BUF.B0;

    // IC1TMR bits
    const register unsigned short int IC1TMR_15 = 15;
    sbit  IC1TMR_15_bit at IC1TMR.B15;
    const register unsigned short int IC1TMR_14 = 14;
    sbit  IC1TMR_14_bit at IC1TMR.B14;
    const register unsigned short int IC1TMR_13 = 13;
    sbit  IC1TMR_13_bit at IC1TMR.B13;
    const register unsigned short int IC1TMR_12 = 12;
    sbit  IC1TMR_12_bit at IC1TMR.B12;
    const register unsigned short int IC1TMR_11 = 11;
    sbit  IC1TMR_11_bit at IC1TMR.B11;
    const register unsigned short int IC1TMR_10 = 10;
    sbit  IC1TMR_10_bit at IC1TMR.B10;
    const register unsigned short int IC1TMR_9 = 9;
    sbit  IC1TMR_9_bit at IC1TMR.B9;
    const register unsigned short int IC1TMR_8 = 8;
    sbit  IC1TMR_8_bit at IC1TMR.B8;
    const register unsigned short int IC1TMR_7 = 7;
    sbit  IC1TMR_7_bit at IC1TMR.B7;
    const register unsigned short int IC1TMR_6 = 6;
    sbit  IC1TMR_6_bit at IC1TMR.B6;
    const register unsigned short int IC1TMR_5 = 5;
    sbit  IC1TMR_5_bit at IC1TMR.B5;
    const register unsigned short int IC1TMR_4 = 4;
    sbit  IC1TMR_4_bit at IC1TMR.B4;
    const register unsigned short int IC1TMR_3 = 3;
    sbit  IC1TMR_3_bit at IC1TMR.B3;
    const register unsigned short int IC1TMR_2 = 2;
    sbit  IC1TMR_2_bit at IC1TMR.B2;
    const register unsigned short int IC1TMR_1 = 1;
    sbit  IC1TMR_1_bit at IC1TMR.B1;
    const register unsigned short int IC1TMR_0 = 0;
    sbit  IC1TMR_0_bit at IC1TMR.B0;

    // IC2CON1 bits
    sbit  ICSIDL_IC2CON1_bit at IC2CON1.B13;
    sbit  ICTSEL_2_IC2CON1_bit at IC2CON1.B12;
    sbit  ICTSEL_1_IC2CON1_bit at IC2CON1.B11;
    sbit  ICTSEL_0_IC2CON1_bit at IC2CON1.B10;
    sbit  ICI_1_IC2CON1_bit at IC2CON1.B6;
    sbit  ICI_0_IC2CON1_bit at IC2CON1.B5;
    sbit  ICOV_IC2CON1_bit at IC2CON1.B4;
    sbit  ICBNE_IC2CON1_bit at IC2CON1.B3;
    sbit  ICM_2_IC2CON1_bit at IC2CON1.B2;
    sbit  ICM_1_IC2CON1_bit at IC2CON1.B1;
    sbit  ICM_0_IC2CON1_bit at IC2CON1.B0;

    // IC2CON2 bits
    sbit  IC32_IC2CON2_bit at IC2CON2.B8;
    sbit  ICTRIG_IC2CON2_bit at IC2CON2.B7;
    sbit  TRIGSTAT_IC2CON2_bit at IC2CON2.B6;
    sbit  SYNCSEL_4_IC2CON2_bit at IC2CON2.B4;
    sbit  SYNCSEL_3_IC2CON2_bit at IC2CON2.B3;
    sbit  SYNCSEL_2_IC2CON2_bit at IC2CON2.B2;
    sbit  SYNCSEL_1_IC2CON2_bit at IC2CON2.B1;
    sbit  SYNCSEL_0_IC2CON2_bit at IC2CON2.B0;

    // IC2BUF bits
    const register unsigned short int IC2BUF_15 = 15;
    sbit  IC2BUF_15_bit at IC2BUF.B15;
    const register unsigned short int IC2BUF_14 = 14;
    sbit  IC2BUF_14_bit at IC2BUF.B14;
    const register unsigned short int IC2BUF_13 = 13;
    sbit  IC2BUF_13_bit at IC2BUF.B13;
    const register unsigned short int IC2BUF_12 = 12;
    sbit  IC2BUF_12_bit at IC2BUF.B12;
    const register unsigned short int IC2BUF_11 = 11;
    sbit  IC2BUF_11_bit at IC2BUF.B11;
    const register unsigned short int IC2BUF_10 = 10;
    sbit  IC2BUF_10_bit at IC2BUF.B10;
    const register unsigned short int IC2BUF_9 = 9;
    sbit  IC2BUF_9_bit at IC2BUF.B9;
    const register unsigned short int IC2BUF_8 = 8;
    sbit  IC2BUF_8_bit at IC2BUF.B8;
    const register unsigned short int IC2BUF_7 = 7;
    sbit  IC2BUF_7_bit at IC2BUF.B7;
    const register unsigned short int IC2BUF_6 = 6;
    sbit  IC2BUF_6_bit at IC2BUF.B6;
    const register unsigned short int IC2BUF_5 = 5;
    sbit  IC2BUF_5_bit at IC2BUF.B5;
    const register unsigned short int IC2BUF_4 = 4;
    sbit  IC2BUF_4_bit at IC2BUF.B4;
    const register unsigned short int IC2BUF_3 = 3;
    sbit  IC2BUF_3_bit at IC2BUF.B3;
    const register unsigned short int IC2BUF_2 = 2;
    sbit  IC2BUF_2_bit at IC2BUF.B2;
    const register unsigned short int IC2BUF_1 = 1;
    sbit  IC2BUF_1_bit at IC2BUF.B1;
    const register unsigned short int IC2BUF_0 = 0;
    sbit  IC2BUF_0_bit at IC2BUF.B0;

    // IC2TMR bits
    const register unsigned short int IC2TMR_15 = 15;
    sbit  IC2TMR_15_bit at IC2TMR.B15;
    const register unsigned short int IC2TMR_14 = 14;
    sbit  IC2TMR_14_bit at IC2TMR.B14;
    const register unsigned short int IC2TMR_13 = 13;
    sbit  IC2TMR_13_bit at IC2TMR.B13;
    const register unsigned short int IC2TMR_12 = 12;
    sbit  IC2TMR_12_bit at IC2TMR.B12;
    const register unsigned short int IC2TMR_11 = 11;
    sbit  IC2TMR_11_bit at IC2TMR.B11;
    const register unsigned short int IC2TMR_10 = 10;
    sbit  IC2TMR_10_bit at IC2TMR.B10;
    const register unsigned short int IC2TMR_9 = 9;
    sbit  IC2TMR_9_bit at IC2TMR.B9;
    const register unsigned short int IC2TMR_8 = 8;
    sbit  IC2TMR_8_bit at IC2TMR.B8;
    const register unsigned short int IC2TMR_7 = 7;
    sbit  IC2TMR_7_bit at IC2TMR.B7;
    const register unsigned short int IC2TMR_6 = 6;
    sbit  IC2TMR_6_bit at IC2TMR.B6;
    const register unsigned short int IC2TMR_5 = 5;
    sbit  IC2TMR_5_bit at IC2TMR.B5;
    const register unsigned short int IC2TMR_4 = 4;
    sbit  IC2TMR_4_bit at IC2TMR.B4;
    const register unsigned short int IC2TMR_3 = 3;
    sbit  IC2TMR_3_bit at IC2TMR.B3;
    const register unsigned short int IC2TMR_2 = 2;
    sbit  IC2TMR_2_bit at IC2TMR.B2;
    const register unsigned short int IC2TMR_1 = 1;
    sbit  IC2TMR_1_bit at IC2TMR.B1;
    const register unsigned short int IC2TMR_0 = 0;
    sbit  IC2TMR_0_bit at IC2TMR.B0;

    // IC3CON1 bits
    sbit  ICSIDL_IC3CON1_bit at IC3CON1.B13;
    sbit  ICTSEL_2_IC3CON1_bit at IC3CON1.B12;
    sbit  ICTSEL_1_IC3CON1_bit at IC3CON1.B11;
    sbit  ICTSEL_0_IC3CON1_bit at IC3CON1.B10;
    sbit  ICI_1_IC3CON1_bit at IC3CON1.B6;
    sbit  ICI_0_IC3CON1_bit at IC3CON1.B5;
    sbit  ICOV_IC3CON1_bit at IC3CON1.B4;
    sbit  ICBNE_IC3CON1_bit at IC3CON1.B3;
    sbit  ICM_2_IC3CON1_bit at IC3CON1.B2;
    sbit  ICM_1_IC3CON1_bit at IC3CON1.B1;
    sbit  ICM_0_IC3CON1_bit at IC3CON1.B0;

    // IC3CON2 bits
    sbit  IC32_IC3CON2_bit at IC3CON2.B8;
    sbit  ICTRIG_IC3CON2_bit at IC3CON2.B7;
    sbit  TRIGSTAT_IC3CON2_bit at IC3CON2.B6;
    sbit  SYNCSEL_4_IC3CON2_bit at IC3CON2.B4;
    sbit  SYNCSEL_3_IC3CON2_bit at IC3CON2.B3;
    sbit  SYNCSEL_2_IC3CON2_bit at IC3CON2.B2;
    sbit  SYNCSEL_1_IC3CON2_bit at IC3CON2.B1;
    sbit  SYNCSEL_0_IC3CON2_bit at IC3CON2.B0;

    // IC3BUF bits
    const register unsigned short int IC3BUF_15 = 15;
    sbit  IC3BUF_15_bit at IC3BUF.B15;
    const register unsigned short int IC3BUF_14 = 14;
    sbit  IC3BUF_14_bit at IC3BUF.B14;
    const register unsigned short int IC3BUF_13 = 13;
    sbit  IC3BUF_13_bit at IC3BUF.B13;
    const register unsigned short int IC3BUF_12 = 12;
    sbit  IC3BUF_12_bit at IC3BUF.B12;
    const register unsigned short int IC3BUF_11 = 11;
    sbit  IC3BUF_11_bit at IC3BUF.B11;
    const register unsigned short int IC3BUF_10 = 10;
    sbit  IC3BUF_10_bit at IC3BUF.B10;
    const register unsigned short int IC3BUF_9 = 9;
    sbit  IC3BUF_9_bit at IC3BUF.B9;
    const register unsigned short int IC3BUF_8 = 8;
    sbit  IC3BUF_8_bit at IC3BUF.B8;
    const register unsigned short int IC3BUF_7 = 7;
    sbit  IC3BUF_7_bit at IC3BUF.B7;
    const register unsigned short int IC3BUF_6 = 6;
    sbit  IC3BUF_6_bit at IC3BUF.B6;
    const register unsigned short int IC3BUF_5 = 5;
    sbit  IC3BUF_5_bit at IC3BUF.B5;
    const register unsigned short int IC3BUF_4 = 4;
    sbit  IC3BUF_4_bit at IC3BUF.B4;
    const register unsigned short int IC3BUF_3 = 3;
    sbit  IC3BUF_3_bit at IC3BUF.B3;
    const register unsigned short int IC3BUF_2 = 2;
    sbit  IC3BUF_2_bit at IC3BUF.B2;
    const register unsigned short int IC3BUF_1 = 1;
    sbit  IC3BUF_1_bit at IC3BUF.B1;
    const register unsigned short int IC3BUF_0 = 0;
    sbit  IC3BUF_0_bit at IC3BUF.B0;

    // IC3TMR bits
    const register unsigned short int IC3TMR_15 = 15;
    sbit  IC3TMR_15_bit at IC3TMR.B15;
    const register unsigned short int IC3TMR_14 = 14;
    sbit  IC3TMR_14_bit at IC3TMR.B14;
    const register unsigned short int IC3TMR_13 = 13;
    sbit  IC3TMR_13_bit at IC3TMR.B13;
    const register unsigned short int IC3TMR_12 = 12;
    sbit  IC3TMR_12_bit at IC3TMR.B12;
    const register unsigned short int IC3TMR_11 = 11;
    sbit  IC3TMR_11_bit at IC3TMR.B11;
    const register unsigned short int IC3TMR_10 = 10;
    sbit  IC3TMR_10_bit at IC3TMR.B10;
    const register unsigned short int IC3TMR_9 = 9;
    sbit  IC3TMR_9_bit at IC3TMR.B9;
    const register unsigned short int IC3TMR_8 = 8;
    sbit  IC3TMR_8_bit at IC3TMR.B8;
    const register unsigned short int IC3TMR_7 = 7;
    sbit  IC3TMR_7_bit at IC3TMR.B7;
    const register unsigned short int IC3TMR_6 = 6;
    sbit  IC3TMR_6_bit at IC3TMR.B6;
    const register unsigned short int IC3TMR_5 = 5;
    sbit  IC3TMR_5_bit at IC3TMR.B5;
    const register unsigned short int IC3TMR_4 = 4;
    sbit  IC3TMR_4_bit at IC3TMR.B4;
    const register unsigned short int IC3TMR_3 = 3;
    sbit  IC3TMR_3_bit at IC3TMR.B3;
    const register unsigned short int IC3TMR_2 = 2;
    sbit  IC3TMR_2_bit at IC3TMR.B2;
    const register unsigned short int IC3TMR_1 = 1;
    sbit  IC3TMR_1_bit at IC3TMR.B1;
    const register unsigned short int IC3TMR_0 = 0;
    sbit  IC3TMR_0_bit at IC3TMR.B0;

    // IC4CON1 bits
    sbit  ICSIDL_IC4CON1_bit at IC4CON1.B13;
    sbit  ICTSEL_2_IC4CON1_bit at IC4CON1.B12;
    sbit  ICTSEL_1_IC4CON1_bit at IC4CON1.B11;
    sbit  ICTSEL_0_IC4CON1_bit at IC4CON1.B10;
    sbit  ICI_1_IC4CON1_bit at IC4CON1.B6;
    sbit  ICI_0_IC4CON1_bit at IC4CON1.B5;
    sbit  ICOV_IC4CON1_bit at IC4CON1.B4;
    sbit  ICBNE_IC4CON1_bit at IC4CON1.B3;
    sbit  ICM_2_IC4CON1_bit at IC4CON1.B2;
    sbit  ICM_1_IC4CON1_bit at IC4CON1.B1;
    sbit  ICM_0_IC4CON1_bit at IC4CON1.B0;

    // IC4CON2 bits
    sbit  IC32_IC4CON2_bit at IC4CON2.B8;
    sbit  ICTRIG_IC4CON2_bit at IC4CON2.B7;
    sbit  TRIGSTAT_IC4CON2_bit at IC4CON2.B6;
    sbit  SYNCSEL_4_IC4CON2_bit at IC4CON2.B4;
    sbit  SYNCSEL_3_IC4CON2_bit at IC4CON2.B3;
    sbit  SYNCSEL_2_IC4CON2_bit at IC4CON2.B2;
    sbit  SYNCSEL_1_IC4CON2_bit at IC4CON2.B1;
    sbit  SYNCSEL_0_IC4CON2_bit at IC4CON2.B0;

    // IC4BUF bits
    const register unsigned short int IC4BUF_15 = 15;
    sbit  IC4BUF_15_bit at IC4BUF.B15;
    const register unsigned short int IC4BUF_14 = 14;
    sbit  IC4BUF_14_bit at IC4BUF.B14;
    const register unsigned short int IC4BUF_13 = 13;
    sbit  IC4BUF_13_bit at IC4BUF.B13;
    const register unsigned short int IC4BUF_12 = 12;
    sbit  IC4BUF_12_bit at IC4BUF.B12;
    const register unsigned short int IC4BUF_11 = 11;
    sbit  IC4BUF_11_bit at IC4BUF.B11;
    const register unsigned short int IC4BUF_10 = 10;
    sbit  IC4BUF_10_bit at IC4BUF.B10;
    const register unsigned short int IC4BUF_9 = 9;
    sbit  IC4BUF_9_bit at IC4BUF.B9;
    const register unsigned short int IC4BUF_8 = 8;
    sbit  IC4BUF_8_bit at IC4BUF.B8;
    const register unsigned short int IC4BUF_7 = 7;
    sbit  IC4BUF_7_bit at IC4BUF.B7;
    const register unsigned short int IC4BUF_6 = 6;
    sbit  IC4BUF_6_bit at IC4BUF.B6;
    const register unsigned short int IC4BUF_5 = 5;
    sbit  IC4BUF_5_bit at IC4BUF.B5;
    const register unsigned short int IC4BUF_4 = 4;
    sbit  IC4BUF_4_bit at IC4BUF.B4;
    const register unsigned short int IC4BUF_3 = 3;
    sbit  IC4BUF_3_bit at IC4BUF.B3;
    const register unsigned short int IC4BUF_2 = 2;
    sbit  IC4BUF_2_bit at IC4BUF.B2;
    const register unsigned short int IC4BUF_1 = 1;
    sbit  IC4BUF_1_bit at IC4BUF.B1;
    const register unsigned short int IC4BUF_0 = 0;
    sbit  IC4BUF_0_bit at IC4BUF.B0;

    // IC4TMR bits
    const register unsigned short int IC4TMR_15 = 15;
    sbit  IC4TMR_15_bit at IC4TMR.B15;
    const register unsigned short int IC4TMR_14 = 14;
    sbit  IC4TMR_14_bit at IC4TMR.B14;
    const register unsigned short int IC4TMR_13 = 13;
    sbit  IC4TMR_13_bit at IC4TMR.B13;
    const register unsigned short int IC4TMR_12 = 12;
    sbit  IC4TMR_12_bit at IC4TMR.B12;
    const register unsigned short int IC4TMR_11 = 11;
    sbit  IC4TMR_11_bit at IC4TMR.B11;
    const register unsigned short int IC4TMR_10 = 10;
    sbit  IC4TMR_10_bit at IC4TMR.B10;
    const register unsigned short int IC4TMR_9 = 9;
    sbit  IC4TMR_9_bit at IC4TMR.B9;
    const register unsigned short int IC4TMR_8 = 8;
    sbit  IC4TMR_8_bit at IC4TMR.B8;
    const register unsigned short int IC4TMR_7 = 7;
    sbit  IC4TMR_7_bit at IC4TMR.B7;
    const register unsigned short int IC4TMR_6 = 6;
    sbit  IC4TMR_6_bit at IC4TMR.B6;
    const register unsigned short int IC4TMR_5 = 5;
    sbit  IC4TMR_5_bit at IC4TMR.B5;
    const register unsigned short int IC4TMR_4 = 4;
    sbit  IC4TMR_4_bit at IC4TMR.B4;
    const register unsigned short int IC4TMR_3 = 3;
    sbit  IC4TMR_3_bit at IC4TMR.B3;
    const register unsigned short int IC4TMR_2 = 2;
    sbit  IC4TMR_2_bit at IC4TMR.B2;
    const register unsigned short int IC4TMR_1 = 1;
    sbit  IC4TMR_1_bit at IC4TMR.B1;
    const register unsigned short int IC4TMR_0 = 0;
    sbit  IC4TMR_0_bit at IC4TMR.B0;

    // IC5CON1 bits
    sbit  ICSIDL_IC5CON1_bit at IC5CON1.B13;
    sbit  ICTSEL_2_IC5CON1_bit at IC5CON1.B12;
    sbit  ICTSEL_1_IC5CON1_bit at IC5CON1.B11;
    sbit  ICTSEL_0_IC5CON1_bit at IC5CON1.B10;
    sbit  ICI_1_IC5CON1_bit at IC5CON1.B6;
    sbit  ICI_0_IC5CON1_bit at IC5CON1.B5;
    sbit  ICOV_IC5CON1_bit at IC5CON1.B4;
    sbit  ICBNE_IC5CON1_bit at IC5CON1.B3;
    sbit  ICM_2_IC5CON1_bit at IC5CON1.B2;
    sbit  ICM_1_IC5CON1_bit at IC5CON1.B1;
    sbit  ICM_0_IC5CON1_bit at IC5CON1.B0;

    // IC5CON2 bits
    sbit  IC32_IC5CON2_bit at IC5CON2.B8;
    sbit  ICTRIG_IC5CON2_bit at IC5CON2.B7;
    sbit  TRIGSTAT_IC5CON2_bit at IC5CON2.B6;
    sbit  SYNCSEL_4_IC5CON2_bit at IC5CON2.B4;
    sbit  SYNCSEL_3_IC5CON2_bit at IC5CON2.B3;
    sbit  SYNCSEL_2_IC5CON2_bit at IC5CON2.B2;
    sbit  SYNCSEL_1_IC5CON2_bit at IC5CON2.B1;
    sbit  SYNCSEL_0_IC5CON2_bit at IC5CON2.B0;

    // IC5BUF bits
    const register unsigned short int IC5BUF_15 = 15;
    sbit  IC5BUF_15_bit at IC5BUF.B15;
    const register unsigned short int IC5BUF_14 = 14;
    sbit  IC5BUF_14_bit at IC5BUF.B14;
    const register unsigned short int IC5BUF_13 = 13;
    sbit  IC5BUF_13_bit at IC5BUF.B13;
    const register unsigned short int IC5BUF_12 = 12;
    sbit  IC5BUF_12_bit at IC5BUF.B12;
    const register unsigned short int IC5BUF_11 = 11;
    sbit  IC5BUF_11_bit at IC5BUF.B11;
    const register unsigned short int IC5BUF_10 = 10;
    sbit  IC5BUF_10_bit at IC5BUF.B10;
    const register unsigned short int IC5BUF_9 = 9;
    sbit  IC5BUF_9_bit at IC5BUF.B9;
    const register unsigned short int IC5BUF_8 = 8;
    sbit  IC5BUF_8_bit at IC5BUF.B8;
    const register unsigned short int IC5BUF_7 = 7;
    sbit  IC5BUF_7_bit at IC5BUF.B7;
    const register unsigned short int IC5BUF_6 = 6;
    sbit  IC5BUF_6_bit at IC5BUF.B6;
    const register unsigned short int IC5BUF_5 = 5;
    sbit  IC5BUF_5_bit at IC5BUF.B5;
    const register unsigned short int IC5BUF_4 = 4;
    sbit  IC5BUF_4_bit at IC5BUF.B4;
    const register unsigned short int IC5BUF_3 = 3;
    sbit  IC5BUF_3_bit at IC5BUF.B3;
    const register unsigned short int IC5BUF_2 = 2;
    sbit  IC5BUF_2_bit at IC5BUF.B2;
    const register unsigned short int IC5BUF_1 = 1;
    sbit  IC5BUF_1_bit at IC5BUF.B1;
    const register unsigned short int IC5BUF_0 = 0;
    sbit  IC5BUF_0_bit at IC5BUF.B0;

    // IC5TMR bits
    const register unsigned short int IC5TMR_15 = 15;
    sbit  IC5TMR_15_bit at IC5TMR.B15;
    const register unsigned short int IC5TMR_14 = 14;
    sbit  IC5TMR_14_bit at IC5TMR.B14;
    const register unsigned short int IC5TMR_13 = 13;
    sbit  IC5TMR_13_bit at IC5TMR.B13;
    const register unsigned short int IC5TMR_12 = 12;
    sbit  IC5TMR_12_bit at IC5TMR.B12;
    const register unsigned short int IC5TMR_11 = 11;
    sbit  IC5TMR_11_bit at IC5TMR.B11;
    const register unsigned short int IC5TMR_10 = 10;
    sbit  IC5TMR_10_bit at IC5TMR.B10;
    const register unsigned short int IC5TMR_9 = 9;
    sbit  IC5TMR_9_bit at IC5TMR.B9;
    const register unsigned short int IC5TMR_8 = 8;
    sbit  IC5TMR_8_bit at IC5TMR.B8;
    const register unsigned short int IC5TMR_7 = 7;
    sbit  IC5TMR_7_bit at IC5TMR.B7;
    const register unsigned short int IC5TMR_6 = 6;
    sbit  IC5TMR_6_bit at IC5TMR.B6;
    const register unsigned short int IC5TMR_5 = 5;
    sbit  IC5TMR_5_bit at IC5TMR.B5;
    const register unsigned short int IC5TMR_4 = 4;
    sbit  IC5TMR_4_bit at IC5TMR.B4;
    const register unsigned short int IC5TMR_3 = 3;
    sbit  IC5TMR_3_bit at IC5TMR.B3;
    const register unsigned short int IC5TMR_2 = 2;
    sbit  IC5TMR_2_bit at IC5TMR.B2;
    const register unsigned short int IC5TMR_1 = 1;
    sbit  IC5TMR_1_bit at IC5TMR.B1;
    const register unsigned short int IC5TMR_0 = 0;
    sbit  IC5TMR_0_bit at IC5TMR.B0;

    // OC1CON1 bits
    const register unsigned short int OCSIDL = 13;
    sbit  OCSIDL_bit at OC1CON1.B13;
    sbit  OCSIDL_OC1CON1_bit at OC1CON1.B13;
    const register unsigned short int OCTSEL_2 = 12;
    sbit  OCTSEL_2_bit at OC1CON1.B12;
    sbit  OCTSEL_2_OC1CON1_bit at OC1CON1.B12;
    const register unsigned short int OCTSEL_1 = 11;
    sbit  OCTSEL_1_bit at OC1CON1.B11;
    sbit  OCTSEL_1_OC1CON1_bit at OC1CON1.B11;
    const register unsigned short int OCTSEL_0 = 10;
    sbit  OCTSEL_0_bit at OC1CON1.B10;
    sbit  OCTSEL_0_OC1CON1_bit at OC1CON1.B10;
    const register unsigned short int ENFLT_2 = 9;
    sbit  ENFLT_2_bit at OC1CON1.B9;
    sbit  ENFLT_2_OC1CON1_bit at OC1CON1.B9;
    const register unsigned short int ENFLT_1 = 8;
    sbit  ENFLT_1_bit at OC1CON1.B8;
    sbit  ENFLT_1_OC1CON1_bit at OC1CON1.B8;
    const register unsigned short int ENFLT_0 = 7;
    sbit  ENFLT_0_bit at OC1CON1.B7;
    sbit  ENFLT_0_OC1CON1_bit at OC1CON1.B7;
    const register unsigned short int OCFLT_2 = 6;
    sbit  OCFLT_2_bit at OC1CON1.B6;
    sbit  OCFLT_2_OC1CON1_bit at OC1CON1.B6;
    const register unsigned short int OCFLT_1 = 5;
    sbit  OCFLT_1_bit at OC1CON1.B5;
    sbit  OCFLT_1_OC1CON1_bit at OC1CON1.B5;
    const register unsigned short int OCFLT_0 = 4;
    sbit  OCFLT_0_bit at OC1CON1.B4;
    sbit  OCFLT_0_OC1CON1_bit at OC1CON1.B4;
    const register unsigned short int TRIGMODE = 3;
    sbit  TRIGMODE_bit at OC1CON1.B3;
    sbit  TRIGMODE_OC1CON1_bit at OC1CON1.B3;
    const register unsigned short int OCM_2 = 2;
    sbit  OCM_2_bit at OC1CON1.B2;
    sbit  OCM_2_OC1CON1_bit at OC1CON1.B2;
    const register unsigned short int OCM_1 = 1;
    sbit  OCM_1_bit at OC1CON1.B1;
    sbit  OCM_1_OC1CON1_bit at OC1CON1.B1;
    const register unsigned short int OCM_0 = 0;
    sbit  OCM_0_bit at OC1CON1.B0;
    sbit  OCM_0_OC1CON1_bit at OC1CON1.B0;

    // OC1CON2 bits
    const register unsigned short int FLTMD = 15;
    sbit  FLTMD_bit at OC1CON2.B15;
    sbit  FLTMD_OC1CON2_bit at OC1CON2.B15;
    const register unsigned short int FLTOUT = 14;
    sbit  FLTOUT_bit at OC1CON2.B14;
    sbit  FLTOUT_OC1CON2_bit at OC1CON2.B14;
    const register unsigned short int FLTTRIEN = 13;
    sbit  FLTTRIEN_bit at OC1CON2.B13;
    sbit  FLTTRIEN_OC1CON2_bit at OC1CON2.B13;
    const register unsigned short int OCINV = 12;
    sbit  OCINV_bit at OC1CON2.B12;
    sbit  OCINV_OC1CON2_bit at OC1CON2.B12;
    const register unsigned short int DCB_1 = 10;
    sbit  DCB_1_bit at OC1CON2.B10;
    sbit  DCB_1_OC1CON2_bit at OC1CON2.B10;
    const register unsigned short int DCB_0 = 9;
    sbit  DCB_0_bit at OC1CON2.B9;
    sbit  DCB_0_OC1CON2_bit at OC1CON2.B9;
    const register unsigned short int OC32 = 8;
    sbit  OC32_bit at OC1CON2.B8;
    sbit  OC32_OC1CON2_bit at OC1CON2.B8;
    const register unsigned short int OCTRIG = 7;
    sbit  OCTRIG_bit at OC1CON2.B7;
    sbit  OCTRIG_OC1CON2_bit at OC1CON2.B7;
    sbit  TRIGSTAT_OC1CON2_bit at OC1CON2.B6;
    const register unsigned short int OCTRIS = 5;
    sbit  OCTRIS_bit at OC1CON2.B5;
    sbit  OCTRIS_OC1CON2_bit at OC1CON2.B5;
    sbit  SYNCSEL_4_OC1CON2_bit at OC1CON2.B4;
    sbit  SYNCSEL_3_OC1CON2_bit at OC1CON2.B3;
    sbit  SYNCSEL_2_OC1CON2_bit at OC1CON2.B2;
    sbit  SYNCSEL_1_OC1CON2_bit at OC1CON2.B1;
    sbit  SYNCSEL_0_OC1CON2_bit at OC1CON2.B0;

    // OC1RS bits
    const register unsigned short int OC1RS_15 = 15;
    sbit  OC1RS_15_bit at OC1RS.B15;
    const register unsigned short int OC1RS_14 = 14;
    sbit  OC1RS_14_bit at OC1RS.B14;
    const register unsigned short int OC1RS_13 = 13;
    sbit  OC1RS_13_bit at OC1RS.B13;
    const register unsigned short int OC1RS_12 = 12;
    sbit  OC1RS_12_bit at OC1RS.B12;
    const register unsigned short int OC1RS_11 = 11;
    sbit  OC1RS_11_bit at OC1RS.B11;
    const register unsigned short int OC1RS_10 = 10;
    sbit  OC1RS_10_bit at OC1RS.B10;
    const register unsigned short int OC1RS_9 = 9;
    sbit  OC1RS_9_bit at OC1RS.B9;
    const register unsigned short int OC1RS_8 = 8;
    sbit  OC1RS_8_bit at OC1RS.B8;
    const register unsigned short int OC1RS_7 = 7;
    sbit  OC1RS_7_bit at OC1RS.B7;
    const register unsigned short int OC1RS_6 = 6;
    sbit  OC1RS_6_bit at OC1RS.B6;
    const register unsigned short int OC1RS_5 = 5;
    sbit  OC1RS_5_bit at OC1RS.B5;
    const register unsigned short int OC1RS_4 = 4;
    sbit  OC1RS_4_bit at OC1RS.B4;
    const register unsigned short int OC1RS_3 = 3;
    sbit  OC1RS_3_bit at OC1RS.B3;
    const register unsigned short int OC1RS_2 = 2;
    sbit  OC1RS_2_bit at OC1RS.B2;
    const register unsigned short int OC1RS_1 = 1;
    sbit  OC1RS_1_bit at OC1RS.B1;
    const register unsigned short int OC1RS_0 = 0;
    sbit  OC1RS_0_bit at OC1RS.B0;

    // OC1R bits
    const register unsigned short int OC1R_15 = 15;
    sbit  OC1R_15_bit at OC1R.B15;
    const register unsigned short int OC1R_14 = 14;
    sbit  OC1R_14_bit at OC1R.B14;
    const register unsigned short int OC1R_13 = 13;
    sbit  OC1R_13_bit at OC1R.B13;
    const register unsigned short int OC1R_12 = 12;
    sbit  OC1R_12_bit at OC1R.B12;
    const register unsigned short int OC1R_11 = 11;
    sbit  OC1R_11_bit at OC1R.B11;
    const register unsigned short int OC1R_10 = 10;
    sbit  OC1R_10_bit at OC1R.B10;
    const register unsigned short int OC1R_9 = 9;
    sbit  OC1R_9_bit at OC1R.B9;
    const register unsigned short int OC1R_8 = 8;
    sbit  OC1R_8_bit at OC1R.B8;
    const register unsigned short int OC1R_7 = 7;
    sbit  OC1R_7_bit at OC1R.B7;
    const register unsigned short int OC1R_6 = 6;
    sbit  OC1R_6_bit at OC1R.B6;
    const register unsigned short int OC1R_5 = 5;
    sbit  OC1R_5_bit at OC1R.B5;
    const register unsigned short int OC1R_4 = 4;
    sbit  OC1R_4_bit at OC1R.B4;
    const register unsigned short int OC1R_3 = 3;
    sbit  OC1R_3_bit at OC1R.B3;
    const register unsigned short int OC1R_2 = 2;
    sbit  OC1R_2_bit at OC1R.B2;
    const register unsigned short int OC1R_1 = 1;
    sbit  OC1R_1_bit at OC1R.B1;
    const register unsigned short int OC1R_0 = 0;
    sbit  OC1R_0_bit at OC1R.B0;

    // OC1TMR bits
    const register unsigned short int OC1TMR_15 = 15;
    sbit  OC1TMR_15_bit at OC1TMR.B15;
    const register unsigned short int OC1TMR_14 = 14;
    sbit  OC1TMR_14_bit at OC1TMR.B14;
    const register unsigned short int OC1TMR_13 = 13;
    sbit  OC1TMR_13_bit at OC1TMR.B13;
    const register unsigned short int OC1TMR_12 = 12;
    sbit  OC1TMR_12_bit at OC1TMR.B12;
    const register unsigned short int OC1TMR_11 = 11;
    sbit  OC1TMR_11_bit at OC1TMR.B11;
    const register unsigned short int OC1TMR_10 = 10;
    sbit  OC1TMR_10_bit at OC1TMR.B10;
    const register unsigned short int OC1TMR_9 = 9;
    sbit  OC1TMR_9_bit at OC1TMR.B9;
    const register unsigned short int OC1TMR_8 = 8;
    sbit  OC1TMR_8_bit at OC1TMR.B8;
    const register unsigned short int OC1TMR_7 = 7;
    sbit  OC1TMR_7_bit at OC1TMR.B7;
    const register unsigned short int OC1TMR_6 = 6;
    sbit  OC1TMR_6_bit at OC1TMR.B6;
    const register unsigned short int OC1TMR_5 = 5;
    sbit  OC1TMR_5_bit at OC1TMR.B5;
    const register unsigned short int OC1TMR_4 = 4;
    sbit  OC1TMR_4_bit at OC1TMR.B4;
    const register unsigned short int OC1TMR_3 = 3;
    sbit  OC1TMR_3_bit at OC1TMR.B3;
    const register unsigned short int OC1TMR_2 = 2;
    sbit  OC1TMR_2_bit at OC1TMR.B2;
    const register unsigned short int OC1TMR_1 = 1;
    sbit  OC1TMR_1_bit at OC1TMR.B1;
    const register unsigned short int OC1TMR_0 = 0;
    sbit  OC1TMR_0_bit at OC1TMR.B0;

    // OC2CON1 bits
    sbit  OCSIDL_OC2CON1_bit at OC2CON1.B13;
    sbit  OCTSEL_2_OC2CON1_bit at OC2CON1.B12;
    sbit  OCTSEL_1_OC2CON1_bit at OC2CON1.B11;
    sbit  OCTSEL_0_OC2CON1_bit at OC2CON1.B10;
    sbit  ENFLT_2_OC2CON1_bit at OC2CON1.B9;
    sbit  ENFLT_1_OC2CON1_bit at OC2CON1.B8;
    sbit  ENFLT_0_OC2CON1_bit at OC2CON1.B7;
    sbit  OCFLT_2_OC2CON1_bit at OC2CON1.B6;
    sbit  OCFLT_1_OC2CON1_bit at OC2CON1.B5;
    sbit  OCFLT_0_OC2CON1_bit at OC2CON1.B4;
    sbit  TRIGMODE_OC2CON1_bit at OC2CON1.B3;
    sbit  OCM_2_OC2CON1_bit at OC2CON1.B2;
    sbit  OCM_1_OC2CON1_bit at OC2CON1.B1;
    sbit  OCM_0_OC2CON1_bit at OC2CON1.B0;

    // OC2CON2 bits
    sbit  FLTMD_OC2CON2_bit at OC2CON2.B15;
    sbit  FLTOUT_OC2CON2_bit at OC2CON2.B14;
    sbit  FLTTRIEN_OC2CON2_bit at OC2CON2.B13;
    sbit  OCINV_OC2CON2_bit at OC2CON2.B12;
    sbit  DCB_1_OC2CON2_bit at OC2CON2.B10;
    sbit  DCB_0_OC2CON2_bit at OC2CON2.B9;
    sbit  OC32_OC2CON2_bit at OC2CON2.B8;
    sbit  OCTRIG_OC2CON2_bit at OC2CON2.B7;
    sbit  TRIGSTAT_OC2CON2_bit at OC2CON2.B6;
    sbit  OCTRIS_OC2CON2_bit at OC2CON2.B5;
    sbit  SYNCSEL_4_OC2CON2_bit at OC2CON2.B4;
    sbit  SYNCSEL_3_OC2CON2_bit at OC2CON2.B3;
    sbit  SYNCSEL_2_OC2CON2_bit at OC2CON2.B2;
    sbit  SYNCSEL_1_OC2CON2_bit at OC2CON2.B1;
    sbit  SYNCSEL_0_OC2CON2_bit at OC2CON2.B0;

    // OC2RS bits
    const register unsigned short int OC2RS_15 = 15;
    sbit  OC2RS_15_bit at OC2RS.B15;
    const register unsigned short int OC2RS_14 = 14;
    sbit  OC2RS_14_bit at OC2RS.B14;
    const register unsigned short int OC2RS_13 = 13;
    sbit  OC2RS_13_bit at OC2RS.B13;
    const register unsigned short int OC2RS_12 = 12;
    sbit  OC2RS_12_bit at OC2RS.B12;
    const register unsigned short int OC2RS_11 = 11;
    sbit  OC2RS_11_bit at OC2RS.B11;
    const register unsigned short int OC2RS_10 = 10;
    sbit  OC2RS_10_bit at OC2RS.B10;
    const register unsigned short int OC2RS_9 = 9;
    sbit  OC2RS_9_bit at OC2RS.B9;
    const register unsigned short int OC2RS_8 = 8;
    sbit  OC2RS_8_bit at OC2RS.B8;
    const register unsigned short int OC2RS_7 = 7;
    sbit  OC2RS_7_bit at OC2RS.B7;
    const register unsigned short int OC2RS_6 = 6;
    sbit  OC2RS_6_bit at OC2RS.B6;
    const register unsigned short int OC2RS_5 = 5;
    sbit  OC2RS_5_bit at OC2RS.B5;
    const register unsigned short int OC2RS_4 = 4;
    sbit  OC2RS_4_bit at OC2RS.B4;
    const register unsigned short int OC2RS_3 = 3;
    sbit  OC2RS_3_bit at OC2RS.B3;
    const register unsigned short int OC2RS_2 = 2;
    sbit  OC2RS_2_bit at OC2RS.B2;
    const register unsigned short int OC2RS_1 = 1;
    sbit  OC2RS_1_bit at OC2RS.B1;
    const register unsigned short int OC2RS_0 = 0;
    sbit  OC2RS_0_bit at OC2RS.B0;

    // OC2R bits
    const register unsigned short int OC2R_15 = 15;
    sbit  OC2R_15_bit at OC2R.B15;
    const register unsigned short int OC2R_14 = 14;
    sbit  OC2R_14_bit at OC2R.B14;
    const register unsigned short int OC2R_13 = 13;
    sbit  OC2R_13_bit at OC2R.B13;
    const register unsigned short int OC2R_12 = 12;
    sbit  OC2R_12_bit at OC2R.B12;
    const register unsigned short int OC2R_11 = 11;
    sbit  OC2R_11_bit at OC2R.B11;
    const register unsigned short int OC2R_10 = 10;
    sbit  OC2R_10_bit at OC2R.B10;
    const register unsigned short int OC2R_9 = 9;
    sbit  OC2R_9_bit at OC2R.B9;
    const register unsigned short int OC2R_8 = 8;
    sbit  OC2R_8_bit at OC2R.B8;
    const register unsigned short int OC2R_7 = 7;
    sbit  OC2R_7_bit at OC2R.B7;
    const register unsigned short int OC2R_6 = 6;
    sbit  OC2R_6_bit at OC2R.B6;
    const register unsigned short int OC2R_5 = 5;
    sbit  OC2R_5_bit at OC2R.B5;
    const register unsigned short int OC2R_4 = 4;
    sbit  OC2R_4_bit at OC2R.B4;
    const register unsigned short int OC2R_3 = 3;
    sbit  OC2R_3_bit at OC2R.B3;
    const register unsigned short int OC2R_2 = 2;
    sbit  OC2R_2_bit at OC2R.B2;
    const register unsigned short int OC2R_1 = 1;
    sbit  OC2R_1_bit at OC2R.B1;
    const register unsigned short int OC2R_0 = 0;
    sbit  OC2R_0_bit at OC2R.B0;

    // OC2TMR bits
    const register unsigned short int OC2TMR_15 = 15;
    sbit  OC2TMR_15_bit at OC2TMR.B15;
    const register unsigned short int OC2TMR_14 = 14;
    sbit  OC2TMR_14_bit at OC2TMR.B14;
    const register unsigned short int OC2TMR_13 = 13;
    sbit  OC2TMR_13_bit at OC2TMR.B13;
    const register unsigned short int OC2TMR_12 = 12;
    sbit  OC2TMR_12_bit at OC2TMR.B12;
    const register unsigned short int OC2TMR_11 = 11;
    sbit  OC2TMR_11_bit at OC2TMR.B11;
    const register unsigned short int OC2TMR_10 = 10;
    sbit  OC2TMR_10_bit at OC2TMR.B10;
    const register unsigned short int OC2TMR_9 = 9;
    sbit  OC2TMR_9_bit at OC2TMR.B9;
    const register unsigned short int OC2TMR_8 = 8;
    sbit  OC2TMR_8_bit at OC2TMR.B8;
    const register unsigned short int OC2TMR_7 = 7;
    sbit  OC2TMR_7_bit at OC2TMR.B7;
    const register unsigned short int OC2TMR_6 = 6;
    sbit  OC2TMR_6_bit at OC2TMR.B6;
    const register unsigned short int OC2TMR_5 = 5;
    sbit  OC2TMR_5_bit at OC2TMR.B5;
    const register unsigned short int OC2TMR_4 = 4;
    sbit  OC2TMR_4_bit at OC2TMR.B4;
    const register unsigned short int OC2TMR_3 = 3;
    sbit  OC2TMR_3_bit at OC2TMR.B3;
    const register unsigned short int OC2TMR_2 = 2;
    sbit  OC2TMR_2_bit at OC2TMR.B2;
    const register unsigned short int OC2TMR_1 = 1;
    sbit  OC2TMR_1_bit at OC2TMR.B1;
    const register unsigned short int OC2TMR_0 = 0;
    sbit  OC2TMR_0_bit at OC2TMR.B0;

    // OC3CON1 bits
    sbit  OCSIDL_OC3CON1_bit at OC3CON1.B13;
    sbit  OCTSEL_2_OC3CON1_bit at OC3CON1.B12;
    sbit  OCTSEL_1_OC3CON1_bit at OC3CON1.B11;
    sbit  OCTSEL_0_OC3CON1_bit at OC3CON1.B10;
    sbit  ENFLT_2_OC3CON1_bit at OC3CON1.B9;
    sbit  ENFLT_1_OC3CON1_bit at OC3CON1.B8;
    sbit  ENFLT_0_OC3CON1_bit at OC3CON1.B7;
    sbit  OCFLT_2_OC3CON1_bit at OC3CON1.B6;
    sbit  OCFLT_1_OC3CON1_bit at OC3CON1.B5;
    sbit  OCFLT_0_OC3CON1_bit at OC3CON1.B4;
    sbit  TRIGMODE_OC3CON1_bit at OC3CON1.B3;
    sbit  OCM_2_OC3CON1_bit at OC3CON1.B2;
    sbit  OCM_1_OC3CON1_bit at OC3CON1.B1;
    sbit  OCM_0_OC3CON1_bit at OC3CON1.B0;

    // OC3CON2 bits
    sbit  FLTMD_OC3CON2_bit at OC3CON2.B15;
    sbit  FLTOUT_OC3CON2_bit at OC3CON2.B14;
    sbit  FLTTRIEN_OC3CON2_bit at OC3CON2.B13;
    sbit  OCINV_OC3CON2_bit at OC3CON2.B12;
    sbit  DCB_1_OC3CON2_bit at OC3CON2.B10;
    sbit  DCB_0_OC3CON2_bit at OC3CON2.B9;
    sbit  OC32_OC3CON2_bit at OC3CON2.B8;
    sbit  OCTRIG_OC3CON2_bit at OC3CON2.B7;
    sbit  TRIGSTAT_OC3CON2_bit at OC3CON2.B6;
    sbit  OCTRIS_OC3CON2_bit at OC3CON2.B5;
    sbit  SYNCSEL_4_OC3CON2_bit at OC3CON2.B4;
    sbit  SYNCSEL_3_OC3CON2_bit at OC3CON2.B3;
    sbit  SYNCSEL_2_OC3CON2_bit at OC3CON2.B2;
    sbit  SYNCSEL_1_OC3CON2_bit at OC3CON2.B1;
    sbit  SYNCSEL_0_OC3CON2_bit at OC3CON2.B0;

    // OC3RS bits
    const register unsigned short int OC3RS_15 = 15;
    sbit  OC3RS_15_bit at OC3RS.B15;
    const register unsigned short int OC3RS_14 = 14;
    sbit  OC3RS_14_bit at OC3RS.B14;
    const register unsigned short int OC3RS_13 = 13;
    sbit  OC3RS_13_bit at OC3RS.B13;
    const register unsigned short int OC3RS_12 = 12;
    sbit  OC3RS_12_bit at OC3RS.B12;
    const register unsigned short int OC3RS_11 = 11;
    sbit  OC3RS_11_bit at OC3RS.B11;
    const register unsigned short int OC3RS_10 = 10;
    sbit  OC3RS_10_bit at OC3RS.B10;
    const register unsigned short int OC3RS_9 = 9;
    sbit  OC3RS_9_bit at OC3RS.B9;
    const register unsigned short int OC3RS_8 = 8;
    sbit  OC3RS_8_bit at OC3RS.B8;
    const register unsigned short int OC3RS_7 = 7;
    sbit  OC3RS_7_bit at OC3RS.B7;
    const register unsigned short int OC3RS_6 = 6;
    sbit  OC3RS_6_bit at OC3RS.B6;
    const register unsigned short int OC3RS_5 = 5;
    sbit  OC3RS_5_bit at OC3RS.B5;
    const register unsigned short int OC3RS_4 = 4;
    sbit  OC3RS_4_bit at OC3RS.B4;
    const register unsigned short int OC3RS_3 = 3;
    sbit  OC3RS_3_bit at OC3RS.B3;
    const register unsigned short int OC3RS_2 = 2;
    sbit  OC3RS_2_bit at OC3RS.B2;
    const register unsigned short int OC3RS_1 = 1;
    sbit  OC3RS_1_bit at OC3RS.B1;
    const register unsigned short int OC3RS_0 = 0;
    sbit  OC3RS_0_bit at OC3RS.B0;

    // OC3R bits
    const register unsigned short int OC3R_15 = 15;
    sbit  OC3R_15_bit at OC3R.B15;
    const register unsigned short int OC3R_14 = 14;
    sbit  OC3R_14_bit at OC3R.B14;
    const register unsigned short int OC3R_13 = 13;
    sbit  OC3R_13_bit at OC3R.B13;
    const register unsigned short int OC3R_12 = 12;
    sbit  OC3R_12_bit at OC3R.B12;
    const register unsigned short int OC3R_11 = 11;
    sbit  OC3R_11_bit at OC3R.B11;
    const register unsigned short int OC3R_10 = 10;
    sbit  OC3R_10_bit at OC3R.B10;
    const register unsigned short int OC3R_9 = 9;
    sbit  OC3R_9_bit at OC3R.B9;
    const register unsigned short int OC3R_8 = 8;
    sbit  OC3R_8_bit at OC3R.B8;
    const register unsigned short int OC3R_7 = 7;
    sbit  OC3R_7_bit at OC3R.B7;
    const register unsigned short int OC3R_6 = 6;
    sbit  OC3R_6_bit at OC3R.B6;
    const register unsigned short int OC3R_5 = 5;
    sbit  OC3R_5_bit at OC3R.B5;
    const register unsigned short int OC3R_4 = 4;
    sbit  OC3R_4_bit at OC3R.B4;
    const register unsigned short int OC3R_3 = 3;
    sbit  OC3R_3_bit at OC3R.B3;
    const register unsigned short int OC3R_2 = 2;
    sbit  OC3R_2_bit at OC3R.B2;
    const register unsigned short int OC3R_1 = 1;
    sbit  OC3R_1_bit at OC3R.B1;
    const register unsigned short int OC3R_0 = 0;
    sbit  OC3R_0_bit at OC3R.B0;

    // OC3TMR bits
    const register unsigned short int OC3TMR_15 = 15;
    sbit  OC3TMR_15_bit at OC3TMR.B15;
    const register unsigned short int OC3TMR_14 = 14;
    sbit  OC3TMR_14_bit at OC3TMR.B14;
    const register unsigned short int OC3TMR_13 = 13;
    sbit  OC3TMR_13_bit at OC3TMR.B13;
    const register unsigned short int OC3TMR_12 = 12;
    sbit  OC3TMR_12_bit at OC3TMR.B12;
    const register unsigned short int OC3TMR_11 = 11;
    sbit  OC3TMR_11_bit at OC3TMR.B11;
    const register unsigned short int OC3TMR_10 = 10;
    sbit  OC3TMR_10_bit at OC3TMR.B10;
    const register unsigned short int OC3TMR_9 = 9;
    sbit  OC3TMR_9_bit at OC3TMR.B9;
    const register unsigned short int OC3TMR_8 = 8;
    sbit  OC3TMR_8_bit at OC3TMR.B8;
    const register unsigned short int OC3TMR_7 = 7;
    sbit  OC3TMR_7_bit at OC3TMR.B7;
    const register unsigned short int OC3TMR_6 = 6;
    sbit  OC3TMR_6_bit at OC3TMR.B6;
    const register unsigned short int OC3TMR_5 = 5;
    sbit  OC3TMR_5_bit at OC3TMR.B5;
    const register unsigned short int OC3TMR_4 = 4;
    sbit  OC3TMR_4_bit at OC3TMR.B4;
    const register unsigned short int OC3TMR_3 = 3;
    sbit  OC3TMR_3_bit at OC3TMR.B3;
    const register unsigned short int OC3TMR_2 = 2;
    sbit  OC3TMR_2_bit at OC3TMR.B2;
    const register unsigned short int OC3TMR_1 = 1;
    sbit  OC3TMR_1_bit at OC3TMR.B1;
    const register unsigned short int OC3TMR_0 = 0;
    sbit  OC3TMR_0_bit at OC3TMR.B0;

    // OC4CON1 bits
    sbit  OCSIDL_OC4CON1_bit at OC4CON1.B13;
    sbit  OCTSEL_2_OC4CON1_bit at OC4CON1.B12;
    sbit  OCTSEL_1_OC4CON1_bit at OC4CON1.B11;
    sbit  OCTSEL_0_OC4CON1_bit at OC4CON1.B10;
    sbit  ENFLT_2_OC4CON1_bit at OC4CON1.B9;
    sbit  ENFLT_1_OC4CON1_bit at OC4CON1.B8;
    sbit  ENFLT_0_OC4CON1_bit at OC4CON1.B7;
    sbit  OCFLT_2_OC4CON1_bit at OC4CON1.B6;
    sbit  OCFLT_1_OC4CON1_bit at OC4CON1.B5;
    sbit  OCFLT_0_OC4CON1_bit at OC4CON1.B4;
    sbit  TRIGMODE_OC4CON1_bit at OC4CON1.B3;
    sbit  OCM_2_OC4CON1_bit at OC4CON1.B2;
    sbit  OCM_1_OC4CON1_bit at OC4CON1.B1;
    sbit  OCM_0_OC4CON1_bit at OC4CON1.B0;

    // OC4CON2 bits
    sbit  FLTMD_OC4CON2_bit at OC4CON2.B15;
    sbit  FLTOUT_OC4CON2_bit at OC4CON2.B14;
    sbit  FLTTRIEN_OC4CON2_bit at OC4CON2.B13;
    sbit  OCINV_OC4CON2_bit at OC4CON2.B12;
    sbit  DCB_1_OC4CON2_bit at OC4CON2.B10;
    sbit  DCB_0_OC4CON2_bit at OC4CON2.B9;
    sbit  OC32_OC4CON2_bit at OC4CON2.B8;
    sbit  OCTRIG_OC4CON2_bit at OC4CON2.B7;
    sbit  TRIGSTAT_OC4CON2_bit at OC4CON2.B6;
    sbit  OCTRIS_OC4CON2_bit at OC4CON2.B5;
    sbit  SYNCSEL_4_OC4CON2_bit at OC4CON2.B4;
    sbit  SYNCSEL_3_OC4CON2_bit at OC4CON2.B3;
    sbit  SYNCSEL_2_OC4CON2_bit at OC4CON2.B2;
    sbit  SYNCSEL_1_OC4CON2_bit at OC4CON2.B1;
    sbit  SYNCSEL_0_OC4CON2_bit at OC4CON2.B0;

    // OC4RS bits
    const register unsigned short int OC4RS_15 = 15;
    sbit  OC4RS_15_bit at OC4RS.B15;
    const register unsigned short int OC4RS_14 = 14;
    sbit  OC4RS_14_bit at OC4RS.B14;
    const register unsigned short int OC4RS_13 = 13;
    sbit  OC4RS_13_bit at OC4RS.B13;
    const register unsigned short int OC4RS_12 = 12;
    sbit  OC4RS_12_bit at OC4RS.B12;
    const register unsigned short int OC4RS_11 = 11;
    sbit  OC4RS_11_bit at OC4RS.B11;
    const register unsigned short int OC4RS_10 = 10;
    sbit  OC4RS_10_bit at OC4RS.B10;
    const register unsigned short int OC4RS_9 = 9;
    sbit  OC4RS_9_bit at OC4RS.B9;
    const register unsigned short int OC4RS_8 = 8;
    sbit  OC4RS_8_bit at OC4RS.B8;
    const register unsigned short int OC4RS_7 = 7;
    sbit  OC4RS_7_bit at OC4RS.B7;
    const register unsigned short int OC4RS_6 = 6;
    sbit  OC4RS_6_bit at OC4RS.B6;
    const register unsigned short int OC4RS_5 = 5;
    sbit  OC4RS_5_bit at OC4RS.B5;
    const register unsigned short int OC4RS_4 = 4;
    sbit  OC4RS_4_bit at OC4RS.B4;
    const register unsigned short int OC4RS_3 = 3;
    sbit  OC4RS_3_bit at OC4RS.B3;
    const register unsigned short int OC4RS_2 = 2;
    sbit  OC4RS_2_bit at OC4RS.B2;
    const register unsigned short int OC4RS_1 = 1;
    sbit  OC4RS_1_bit at OC4RS.B1;
    const register unsigned short int OC4RS_0 = 0;
    sbit  OC4RS_0_bit at OC4RS.B0;

    // OC4R bits
    const register unsigned short int OC4R_15 = 15;
    sbit  OC4R_15_bit at OC4R.B15;
    const register unsigned short int OC4R_14 = 14;
    sbit  OC4R_14_bit at OC4R.B14;
    const register unsigned short int OC4R_13 = 13;
    sbit  OC4R_13_bit at OC4R.B13;
    const register unsigned short int OC4R_12 = 12;
    sbit  OC4R_12_bit at OC4R.B12;
    const register unsigned short int OC4R_11 = 11;
    sbit  OC4R_11_bit at OC4R.B11;
    const register unsigned short int OC4R_10 = 10;
    sbit  OC4R_10_bit at OC4R.B10;
    const register unsigned short int OC4R_9 = 9;
    sbit  OC4R_9_bit at OC4R.B9;
    const register unsigned short int OC4R_8 = 8;
    sbit  OC4R_8_bit at OC4R.B8;
    const register unsigned short int OC4R_7 = 7;
    sbit  OC4R_7_bit at OC4R.B7;
    const register unsigned short int OC4R_6 = 6;
    sbit  OC4R_6_bit at OC4R.B6;
    const register unsigned short int OC4R_5 = 5;
    sbit  OC4R_5_bit at OC4R.B5;
    const register unsigned short int OC4R_4 = 4;
    sbit  OC4R_4_bit at OC4R.B4;
    const register unsigned short int OC4R_3 = 3;
    sbit  OC4R_3_bit at OC4R.B3;
    const register unsigned short int OC4R_2 = 2;
    sbit  OC4R_2_bit at OC4R.B2;
    const register unsigned short int OC4R_1 = 1;
    sbit  OC4R_1_bit at OC4R.B1;
    const register unsigned short int OC4R_0 = 0;
    sbit  OC4R_0_bit at OC4R.B0;

    // OC4TMR bits
    const register unsigned short int OC4TMR_15 = 15;
    sbit  OC4TMR_15_bit at OC4TMR.B15;
    const register unsigned short int OC4TMR_14 = 14;
    sbit  OC4TMR_14_bit at OC4TMR.B14;
    const register unsigned short int OC4TMR_13 = 13;
    sbit  OC4TMR_13_bit at OC4TMR.B13;
    const register unsigned short int OC4TMR_12 = 12;
    sbit  OC4TMR_12_bit at OC4TMR.B12;
    const register unsigned short int OC4TMR_11 = 11;
    sbit  OC4TMR_11_bit at OC4TMR.B11;
    const register unsigned short int OC4TMR_10 = 10;
    sbit  OC4TMR_10_bit at OC4TMR.B10;
    const register unsigned short int OC4TMR_9 = 9;
    sbit  OC4TMR_9_bit at OC4TMR.B9;
    const register unsigned short int OC4TMR_8 = 8;
    sbit  OC4TMR_8_bit at OC4TMR.B8;
    const register unsigned short int OC4TMR_7 = 7;
    sbit  OC4TMR_7_bit at OC4TMR.B7;
    const register unsigned short int OC4TMR_6 = 6;
    sbit  OC4TMR_6_bit at OC4TMR.B6;
    const register unsigned short int OC4TMR_5 = 5;
    sbit  OC4TMR_5_bit at OC4TMR.B5;
    const register unsigned short int OC4TMR_4 = 4;
    sbit  OC4TMR_4_bit at OC4TMR.B4;
    const register unsigned short int OC4TMR_3 = 3;
    sbit  OC4TMR_3_bit at OC4TMR.B3;
    const register unsigned short int OC4TMR_2 = 2;
    sbit  OC4TMR_2_bit at OC4TMR.B2;
    const register unsigned short int OC4TMR_1 = 1;
    sbit  OC4TMR_1_bit at OC4TMR.B1;
    const register unsigned short int OC4TMR_0 = 0;
    sbit  OC4TMR_0_bit at OC4TMR.B0;

    // OC5CON1 bits
    sbit  OCSIDL_OC5CON1_bit at OC5CON1.B13;
    sbit  OCTSEL_2_OC5CON1_bit at OC5CON1.B12;
    sbit  OCTSEL_1_OC5CON1_bit at OC5CON1.B11;
    sbit  OCTSEL_0_OC5CON1_bit at OC5CON1.B10;
    sbit  ENFLT_2_OC5CON1_bit at OC5CON1.B9;
    sbit  ENFLT_1_OC5CON1_bit at OC5CON1.B8;
    sbit  ENFLT_0_OC5CON1_bit at OC5CON1.B7;
    sbit  OCFLT_2_OC5CON1_bit at OC5CON1.B6;
    sbit  OCFLT_1_OC5CON1_bit at OC5CON1.B5;
    sbit  OCFLT_0_OC5CON1_bit at OC5CON1.B4;
    sbit  TRIGMODE_OC5CON1_bit at OC5CON1.B3;
    sbit  OCM_2_OC5CON1_bit at OC5CON1.B2;
    sbit  OCM_1_OC5CON1_bit at OC5CON1.B1;
    sbit  OCM_0_OC5CON1_bit at OC5CON1.B0;

    // OC5CON2 bits
    sbit  FLTMD_OC5CON2_bit at OC5CON2.B15;
    sbit  FLTOUT_OC5CON2_bit at OC5CON2.B14;
    sbit  FLTTRIEN_OC5CON2_bit at OC5CON2.B13;
    sbit  OCINV_OC5CON2_bit at OC5CON2.B12;
    sbit  DCB_1_OC5CON2_bit at OC5CON2.B10;
    sbit  DCB_0_OC5CON2_bit at OC5CON2.B9;
    sbit  OC32_OC5CON2_bit at OC5CON2.B8;
    sbit  OCTRIG_OC5CON2_bit at OC5CON2.B7;
    sbit  TRIGSTAT_OC5CON2_bit at OC5CON2.B6;
    sbit  OCTRIS_OC5CON2_bit at OC5CON2.B5;
    sbit  SYNCSEL_4_OC5CON2_bit at OC5CON2.B4;
    sbit  SYNCSEL_3_OC5CON2_bit at OC5CON2.B3;
    sbit  SYNCSEL_2_OC5CON2_bit at OC5CON2.B2;
    sbit  SYNCSEL_1_OC5CON2_bit at OC5CON2.B1;
    sbit  SYNCSEL_0_OC5CON2_bit at OC5CON2.B0;

    // OC5RS bits
    const register unsigned short int OC5RS_15 = 15;
    sbit  OC5RS_15_bit at OC5RS.B15;
    const register unsigned short int OC5RS_14 = 14;
    sbit  OC5RS_14_bit at OC5RS.B14;
    const register unsigned short int OC5RS_13 = 13;
    sbit  OC5RS_13_bit at OC5RS.B13;
    const register unsigned short int OC5RS_12 = 12;
    sbit  OC5RS_12_bit at OC5RS.B12;
    const register unsigned short int OC5RS_11 = 11;
    sbit  OC5RS_11_bit at OC5RS.B11;
    const register unsigned short int OC5RS_10 = 10;
    sbit  OC5RS_10_bit at OC5RS.B10;
    const register unsigned short int OC5RS_9 = 9;
    sbit  OC5RS_9_bit at OC5RS.B9;
    const register unsigned short int OC5RS_8 = 8;
    sbit  OC5RS_8_bit at OC5RS.B8;
    const register unsigned short int OC5RS_7 = 7;
    sbit  OC5RS_7_bit at OC5RS.B7;
    const register unsigned short int OC5RS_6 = 6;
    sbit  OC5RS_6_bit at OC5RS.B6;
    const register unsigned short int OC5RS_5 = 5;
    sbit  OC5RS_5_bit at OC5RS.B5;
    const register unsigned short int OC5RS_4 = 4;
    sbit  OC5RS_4_bit at OC5RS.B4;
    const register unsigned short int OC5RS_3 = 3;
    sbit  OC5RS_3_bit at OC5RS.B3;
    const register unsigned short int OC5RS_2 = 2;
    sbit  OC5RS_2_bit at OC5RS.B2;
    const register unsigned short int OC5RS_1 = 1;
    sbit  OC5RS_1_bit at OC5RS.B1;
    const register unsigned short int OC5RS_0 = 0;
    sbit  OC5RS_0_bit at OC5RS.B0;

    // OC5R bits
    const register unsigned short int OC5R_15 = 15;
    sbit  OC5R_15_bit at OC5R.B15;
    const register unsigned short int OC5R_14 = 14;
    sbit  OC5R_14_bit at OC5R.B14;
    const register unsigned short int OC5R_13 = 13;
    sbit  OC5R_13_bit at OC5R.B13;
    const register unsigned short int OC5R_12 = 12;
    sbit  OC5R_12_bit at OC5R.B12;
    const register unsigned short int OC5R_11 = 11;
    sbit  OC5R_11_bit at OC5R.B11;
    const register unsigned short int OC5R_10 = 10;
    sbit  OC5R_10_bit at OC5R.B10;
    const register unsigned short int OC5R_9 = 9;
    sbit  OC5R_9_bit at OC5R.B9;
    const register unsigned short int OC5R_8 = 8;
    sbit  OC5R_8_bit at OC5R.B8;
    const register unsigned short int OC5R_7 = 7;
    sbit  OC5R_7_bit at OC5R.B7;
    const register unsigned short int OC5R_6 = 6;
    sbit  OC5R_6_bit at OC5R.B6;
    const register unsigned short int OC5R_5 = 5;
    sbit  OC5R_5_bit at OC5R.B5;
    const register unsigned short int OC5R_4 = 4;
    sbit  OC5R_4_bit at OC5R.B4;
    const register unsigned short int OC5R_3 = 3;
    sbit  OC5R_3_bit at OC5R.B3;
    const register unsigned short int OC5R_2 = 2;
    sbit  OC5R_2_bit at OC5R.B2;
    const register unsigned short int OC5R_1 = 1;
    sbit  OC5R_1_bit at OC5R.B1;
    const register unsigned short int OC5R_0 = 0;
    sbit  OC5R_0_bit at OC5R.B0;

    // OC5TMR bits
    const register unsigned short int OC5TMR_15 = 15;
    sbit  OC5TMR_15_bit at OC5TMR.B15;
    const register unsigned short int OC5TMR_14 = 14;
    sbit  OC5TMR_14_bit at OC5TMR.B14;
    const register unsigned short int OC5TMR_13 = 13;
    sbit  OC5TMR_13_bit at OC5TMR.B13;
    const register unsigned short int OC5TMR_12 = 12;
    sbit  OC5TMR_12_bit at OC5TMR.B12;
    const register unsigned short int OC5TMR_11 = 11;
    sbit  OC5TMR_11_bit at OC5TMR.B11;
    const register unsigned short int OC5TMR_10 = 10;
    sbit  OC5TMR_10_bit at OC5TMR.B10;
    const register unsigned short int OC5TMR_9 = 9;
    sbit  OC5TMR_9_bit at OC5TMR.B9;
    const register unsigned short int OC5TMR_8 = 8;
    sbit  OC5TMR_8_bit at OC5TMR.B8;
    const register unsigned short int OC5TMR_7 = 7;
    sbit  OC5TMR_7_bit at OC5TMR.B7;
    const register unsigned short int OC5TMR_6 = 6;
    sbit  OC5TMR_6_bit at OC5TMR.B6;
    const register unsigned short int OC5TMR_5 = 5;
    sbit  OC5TMR_5_bit at OC5TMR.B5;
    const register unsigned short int OC5TMR_4 = 4;
    sbit  OC5TMR_4_bit at OC5TMR.B4;
    const register unsigned short int OC5TMR_3 = 3;
    sbit  OC5TMR_3_bit at OC5TMR.B3;
    const register unsigned short int OC5TMR_2 = 2;
    sbit  OC5TMR_2_bit at OC5TMR.B2;
    const register unsigned short int OC5TMR_1 = 1;
    sbit  OC5TMR_1_bit at OC5TMR.B1;
    const register unsigned short int OC5TMR_0 = 0;
    sbit  OC5TMR_0_bit at OC5TMR.B0;

    // I2C1RCV bits
    const register unsigned short int I2CRCV_7 = 7;
    sbit  I2CRCV_7_bit at I2C1RCV.B7;
    sbit  I2CRCV_7_I2C1RCV_bit at I2C1RCV.B7;
    const register unsigned short int I2CRCV_6 = 6;
    sbit  I2CRCV_6_bit at I2C1RCV.B6;
    sbit  I2CRCV_6_I2C1RCV_bit at I2C1RCV.B6;
    const register unsigned short int I2CRCV_5 = 5;
    sbit  I2CRCV_5_bit at I2C1RCV.B5;
    sbit  I2CRCV_5_I2C1RCV_bit at I2C1RCV.B5;
    const register unsigned short int I2CRCV_4 = 4;
    sbit  I2CRCV_4_bit at I2C1RCV.B4;
    sbit  I2CRCV_4_I2C1RCV_bit at I2C1RCV.B4;
    const register unsigned short int I2CRCV_3 = 3;
    sbit  I2CRCV_3_bit at I2C1RCV.B3;
    sbit  I2CRCV_3_I2C1RCV_bit at I2C1RCV.B3;
    const register unsigned short int I2CRCV_2 = 2;
    sbit  I2CRCV_2_bit at I2C1RCV.B2;
    sbit  I2CRCV_2_I2C1RCV_bit at I2C1RCV.B2;
    const register unsigned short int I2CRCV_1 = 1;
    sbit  I2CRCV_1_bit at I2C1RCV.B1;
    sbit  I2CRCV_1_I2C1RCV_bit at I2C1RCV.B1;
    const register unsigned short int I2CRCV_0 = 0;
    sbit  I2CRCV_0_bit at I2C1RCV.B0;
    sbit  I2CRCV_0_I2C1RCV_bit at I2C1RCV.B0;

    // I2C1TRN bits
    const register unsigned short int I2CTRN_7 = 7;
    sbit  I2CTRN_7_bit at I2C1TRN.B7;
    sbit  I2CTRN_7_I2C1TRN_bit at I2C1TRN.B7;
    const register unsigned short int I2CTRN_6 = 6;
    sbit  I2CTRN_6_bit at I2C1TRN.B6;
    sbit  I2CTRN_6_I2C1TRN_bit at I2C1TRN.B6;
    const register unsigned short int I2CTRN_5 = 5;
    sbit  I2CTRN_5_bit at I2C1TRN.B5;
    sbit  I2CTRN_5_I2C1TRN_bit at I2C1TRN.B5;
    const register unsigned short int I2CTRN_4 = 4;
    sbit  I2CTRN_4_bit at I2C1TRN.B4;
    sbit  I2CTRN_4_I2C1TRN_bit at I2C1TRN.B4;
    const register unsigned short int I2CTRN_3 = 3;
    sbit  I2CTRN_3_bit at I2C1TRN.B3;
    sbit  I2CTRN_3_I2C1TRN_bit at I2C1TRN.B3;
    const register unsigned short int I2CTRN_2 = 2;
    sbit  I2CTRN_2_bit at I2C1TRN.B2;
    sbit  I2CTRN_2_I2C1TRN_bit at I2C1TRN.B2;
    const register unsigned short int I2CTRN_1 = 1;
    sbit  I2CTRN_1_bit at I2C1TRN.B1;
    sbit  I2CTRN_1_I2C1TRN_bit at I2C1TRN.B1;
    const register unsigned short int I2CTRN_0 = 0;
    sbit  I2CTRN_0_bit at I2C1TRN.B0;
    sbit  I2CTRN_0_I2C1TRN_bit at I2C1TRN.B0;

    // I2C1BRG bits
    const register unsigned short int I2CBRG_8 = 8;
    sbit  I2CBRG_8_bit at I2C1BRG.B8;
    sbit  I2CBRG_8_I2C1BRG_bit at I2C1BRG.B8;
    const register unsigned short int I2CBRG_7 = 7;
    sbit  I2CBRG_7_bit at I2C1BRG.B7;
    sbit  I2CBRG_7_I2C1BRG_bit at I2C1BRG.B7;
    const register unsigned short int I2CBRG_6 = 6;
    sbit  I2CBRG_6_bit at I2C1BRG.B6;
    sbit  I2CBRG_6_I2C1BRG_bit at I2C1BRG.B6;
    const register unsigned short int I2CBRG_5 = 5;
    sbit  I2CBRG_5_bit at I2C1BRG.B5;
    sbit  I2CBRG_5_I2C1BRG_bit at I2C1BRG.B5;
    const register unsigned short int I2CBRG_4 = 4;
    sbit  I2CBRG_4_bit at I2C1BRG.B4;
    sbit  I2CBRG_4_I2C1BRG_bit at I2C1BRG.B4;
    const register unsigned short int I2CBRG_3 = 3;
    sbit  I2CBRG_3_bit at I2C1BRG.B3;
    sbit  I2CBRG_3_I2C1BRG_bit at I2C1BRG.B3;
    const register unsigned short int I2CBRG_2 = 2;
    sbit  I2CBRG_2_bit at I2C1BRG.B2;
    sbit  I2CBRG_2_I2C1BRG_bit at I2C1BRG.B2;
    const register unsigned short int I2CBRG_1 = 1;
    sbit  I2CBRG_1_bit at I2C1BRG.B1;
    sbit  I2CBRG_1_I2C1BRG_bit at I2C1BRG.B1;
    const register unsigned short int I2CBRG_0 = 0;
    sbit  I2CBRG_0_bit at I2C1BRG.B0;
    sbit  I2CBRG_0_I2C1BRG_bit at I2C1BRG.B0;

    // I2C1CON bits
    const register unsigned short int I2CEN = 15;
    sbit  I2CEN_bit at I2C1CON.B15;
    sbit  I2CEN_I2C1CON_bit at I2C1CON.B15;
    const register unsigned short int I2CSIDL = 13;
    sbit  I2CSIDL_bit at I2C1CON.B13;
    sbit  I2CSIDL_I2C1CON_bit at I2C1CON.B13;
    const register unsigned short int SCLREL = 12;
    sbit  SCLREL_bit at I2C1CON.B12;
    sbit  SCLREL_I2C1CON_bit at I2C1CON.B12;
    const register unsigned short int IPMIEN = 11;
    sbit  IPMIEN_bit at I2C1CON.B11;
    sbit  IPMIEN_I2C1CON_bit at I2C1CON.B11;
    const register unsigned short int A10M = 10;
    sbit  A10M_bit at I2C1CON.B10;
    sbit  A10M_I2C1CON_bit at I2C1CON.B10;
    const register unsigned short int DISSLW = 9;
    sbit  DISSLW_bit at I2C1CON.B9;
    sbit  DISSLW_I2C1CON_bit at I2C1CON.B9;
    const register unsigned short int SMEN = 8;
    sbit  SMEN_bit at I2C1CON.B8;
    sbit  SMEN_I2C1CON_bit at I2C1CON.B8;
    const register unsigned short int GCEN = 7;
    sbit  GCEN_bit at I2C1CON.B7;
    sbit  GCEN_I2C1CON_bit at I2C1CON.B7;
    const register unsigned short int STREN = 6;
    sbit  STREN_bit at I2C1CON.B6;
    sbit  STREN_I2C1CON_bit at I2C1CON.B6;
    const register unsigned short int ACKDT = 5;
    sbit  ACKDT_bit at I2C1CON.B5;
    sbit  ACKDT_I2C1CON_bit at I2C1CON.B5;
    const register unsigned short int ACKEN = 4;
    sbit  ACKEN_bit at I2C1CON.B4;
    sbit  ACKEN_I2C1CON_bit at I2C1CON.B4;
    const register unsigned short int RCEN = 3;
    sbit  RCEN_bit at I2C1CON.B3;
    sbit  RCEN_I2C1CON_bit at I2C1CON.B3;
    const register unsigned short int PEN = 2;
    sbit  PEN_bit at I2C1CON.B2;
    sbit  PEN_I2C1CON_bit at I2C1CON.B2;
    const register unsigned short int RSEN = 1;
    sbit  RSEN_bit at I2C1CON.B1;
    sbit  RSEN_I2C1CON_bit at I2C1CON.B1;
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at I2C1CON.B0;
    sbit  SEN_I2C1CON_bit at I2C1CON.B0;

    // I2C1STAT bits
    const register unsigned short int ACKSTAT = 15;
    sbit  ACKSTAT_bit at I2C1STAT.B15;
    sbit  ACKSTAT_I2C1STAT_bit at I2C1STAT.B15;
    const register unsigned short int TRSTAT = 14;
    sbit  TRSTAT_bit at I2C1STAT.B14;
    sbit  TRSTAT_I2C1STAT_bit at I2C1STAT.B14;
    const register unsigned short int BCL = 10;
    sbit  BCL_bit at I2C1STAT.B10;
    sbit  BCL_I2C1STAT_bit at I2C1STAT.B10;
    const register unsigned short int GCSTAT = 9;
    sbit  GCSTAT_bit at I2C1STAT.B9;
    sbit  GCSTAT_I2C1STAT_bit at I2C1STAT.B9;
    const register unsigned short int ADD10 = 8;
    sbit  ADD10_bit at I2C1STAT.B8;
    sbit  ADD10_I2C1STAT_bit at I2C1STAT.B8;
    const register unsigned short int IWCOL = 7;
    sbit  IWCOL_bit at I2C1STAT.B7;
    sbit  IWCOL_I2C1STAT_bit at I2C1STAT.B7;
    const register unsigned short int I2COV = 6;
    sbit  I2COV_bit at I2C1STAT.B6;
    sbit  I2COV_I2C1STAT_bit at I2C1STAT.B6;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at I2C1STAT.B5;
    sbit  D_A_I2C1STAT_bit at I2C1STAT.B5;
    const register unsigned short int P = 4;
    sbit  P_bit at I2C1STAT.B4;
    sbit  P_I2C1STAT_bit at I2C1STAT.B4;
    const register unsigned short int S = 3;
    sbit  S_bit at I2C1STAT.B3;
    sbit  S_I2C1STAT_bit at I2C1STAT.B3;
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at I2C1STAT.B2;
    sbit  R_W_I2C1STAT_bit at I2C1STAT.B2;
    const register unsigned short int RBF = 1;
    sbit  RBF_bit at I2C1STAT.B1;
    sbit  RBF_I2C1STAT_bit at I2C1STAT.B1;
    const register unsigned short int TBF = 0;
    sbit  TBF_bit at I2C1STAT.B0;
    sbit  TBF_I2C1STAT_bit at I2C1STAT.B0;

    // I2C1ADD bits
    const register unsigned short int I2CADD_9 = 9;
    sbit  I2CADD_9_bit at I2C1ADD.B9;
    sbit  I2CADD_9_I2C1ADD_bit at I2C1ADD.B9;
    const register unsigned short int I2CADD_8 = 8;
    sbit  I2CADD_8_bit at I2C1ADD.B8;
    sbit  I2CADD_8_I2C1ADD_bit at I2C1ADD.B8;
    const register unsigned short int I2CADD_7 = 7;
    sbit  I2CADD_7_bit at I2C1ADD.B7;
    sbit  I2CADD_7_I2C1ADD_bit at I2C1ADD.B7;
    const register unsigned short int I2CADD_6 = 6;
    sbit  I2CADD_6_bit at I2C1ADD.B6;
    sbit  I2CADD_6_I2C1ADD_bit at I2C1ADD.B6;
    const register unsigned short int I2CADD_5 = 5;
    sbit  I2CADD_5_bit at I2C1ADD.B5;
    sbit  I2CADD_5_I2C1ADD_bit at I2C1ADD.B5;
    const register unsigned short int I2CADD_4 = 4;
    sbit  I2CADD_4_bit at I2C1ADD.B4;
    sbit  I2CADD_4_I2C1ADD_bit at I2C1ADD.B4;
    const register unsigned short int I2CADD_3 = 3;
    sbit  I2CADD_3_bit at I2C1ADD.B3;
    sbit  I2CADD_3_I2C1ADD_bit at I2C1ADD.B3;
    const register unsigned short int I2CADD_2 = 2;
    sbit  I2CADD_2_bit at I2C1ADD.B2;
    sbit  I2CADD_2_I2C1ADD_bit at I2C1ADD.B2;
    const register unsigned short int I2CADD_1 = 1;
    sbit  I2CADD_1_bit at I2C1ADD.B1;
    sbit  I2CADD_1_I2C1ADD_bit at I2C1ADD.B1;
    const register unsigned short int I2CADD_0 = 0;
    sbit  I2CADD_0_bit at I2C1ADD.B0;
    sbit  I2CADD_0_I2C1ADD_bit at I2C1ADD.B0;

    // I2C1MSK bits
    const register unsigned short int AMSK_9 = 9;
    sbit  AMSK_9_bit at I2C1MSK.B9;
    sbit  AMSK_9_I2C1MSK_bit at I2C1MSK.B9;
    const register unsigned short int AMSK_8 = 8;
    sbit  AMSK_8_bit at I2C1MSK.B8;
    sbit  AMSK_8_I2C1MSK_bit at I2C1MSK.B8;
    const register unsigned short int AMSK_7 = 7;
    sbit  AMSK_7_bit at I2C1MSK.B7;
    sbit  AMSK_7_I2C1MSK_bit at I2C1MSK.B7;
    const register unsigned short int AMSK_6 = 6;
    sbit  AMSK_6_bit at I2C1MSK.B6;
    sbit  AMSK_6_I2C1MSK_bit at I2C1MSK.B6;
    const register unsigned short int AMSK_5 = 5;
    sbit  AMSK_5_bit at I2C1MSK.B5;
    sbit  AMSK_5_I2C1MSK_bit at I2C1MSK.B5;
    const register unsigned short int AMSK_4 = 4;
    sbit  AMSK_4_bit at I2C1MSK.B4;
    sbit  AMSK_4_I2C1MSK_bit at I2C1MSK.B4;
    const register unsigned short int AMSK_3 = 3;
    sbit  AMSK_3_bit at I2C1MSK.B3;
    sbit  AMSK_3_I2C1MSK_bit at I2C1MSK.B3;
    const register unsigned short int AMSK_2 = 2;
    sbit  AMSK_2_bit at I2C1MSK.B2;
    sbit  AMSK_2_I2C1MSK_bit at I2C1MSK.B2;
    const register unsigned short int AMSK_1 = 1;
    sbit  AMSK_1_bit at I2C1MSK.B1;
    sbit  AMSK_1_I2C1MSK_bit at I2C1MSK.B1;
    const register unsigned short int AMSK_0 = 0;
    sbit  AMSK_0_bit at I2C1MSK.B0;
    sbit  AMSK_0_I2C1MSK_bit at I2C1MSK.B0;

    // I2C2RCV bits
    sbit  I2CRCV_7_I2C2RCV_bit at I2C2RCV.B7;
    sbit  I2CRCV_6_I2C2RCV_bit at I2C2RCV.B6;
    sbit  I2CRCV_5_I2C2RCV_bit at I2C2RCV.B5;
    sbit  I2CRCV_4_I2C2RCV_bit at I2C2RCV.B4;
    sbit  I2CRCV_3_I2C2RCV_bit at I2C2RCV.B3;
    sbit  I2CRCV_2_I2C2RCV_bit at I2C2RCV.B2;
    sbit  I2CRCV_1_I2C2RCV_bit at I2C2RCV.B1;
    sbit  I2CRCV_0_I2C2RCV_bit at I2C2RCV.B0;

    // I2C2TRN bits
    sbit  I2CTRN_7_I2C2TRN_bit at I2C2TRN.B7;
    sbit  I2CTRN_6_I2C2TRN_bit at I2C2TRN.B6;
    sbit  I2CTRN_5_I2C2TRN_bit at I2C2TRN.B5;
    sbit  I2CTRN_4_I2C2TRN_bit at I2C2TRN.B4;
    sbit  I2CTRN_3_I2C2TRN_bit at I2C2TRN.B3;
    sbit  I2CTRN_2_I2C2TRN_bit at I2C2TRN.B2;
    sbit  I2CTRN_1_I2C2TRN_bit at I2C2TRN.B1;
    sbit  I2CTRN_0_I2C2TRN_bit at I2C2TRN.B0;

    // I2C2BRG bits
    sbit  I2CBRG_8_I2C2BRG_bit at I2C2BRG.B8;
    sbit  I2CBRG_7_I2C2BRG_bit at I2C2BRG.B7;
    sbit  I2CBRG_6_I2C2BRG_bit at I2C2BRG.B6;
    sbit  I2CBRG_5_I2C2BRG_bit at I2C2BRG.B5;
    sbit  I2CBRG_4_I2C2BRG_bit at I2C2BRG.B4;
    sbit  I2CBRG_3_I2C2BRG_bit at I2C2BRG.B3;
    sbit  I2CBRG_2_I2C2BRG_bit at I2C2BRG.B2;
    sbit  I2CBRG_1_I2C2BRG_bit at I2C2BRG.B1;
    sbit  I2CBRG_0_I2C2BRG_bit at I2C2BRG.B0;

    // I2C2CON bits
    sbit  I2CEN_I2C2CON_bit at I2C2CON.B15;
    sbit  I2CSIDL_I2C2CON_bit at I2C2CON.B13;
    sbit  SCLREL_I2C2CON_bit at I2C2CON.B12;
    sbit  IPMIEN_I2C2CON_bit at I2C2CON.B11;
    sbit  A10M_I2C2CON_bit at I2C2CON.B10;
    sbit  DISSLW_I2C2CON_bit at I2C2CON.B9;
    sbit  SMEN_I2C2CON_bit at I2C2CON.B8;
    sbit  GCEN_I2C2CON_bit at I2C2CON.B7;
    sbit  STREN_I2C2CON_bit at I2C2CON.B6;
    sbit  ACKDT_I2C2CON_bit at I2C2CON.B5;
    sbit  ACKEN_I2C2CON_bit at I2C2CON.B4;
    sbit  RCEN_I2C2CON_bit at I2C2CON.B3;
    sbit  PEN_I2C2CON_bit at I2C2CON.B2;
    sbit  RSEN_I2C2CON_bit at I2C2CON.B1;
    sbit  SEN_I2C2CON_bit at I2C2CON.B0;

    // I2C2STAT bits
    sbit  ACKSTAT_I2C2STAT_bit at I2C2STAT.B15;
    sbit  TRSTAT_I2C2STAT_bit at I2C2STAT.B14;
    sbit  BCL_I2C2STAT_bit at I2C2STAT.B10;
    sbit  GCSTAT_I2C2STAT_bit at I2C2STAT.B9;
    sbit  ADD10_I2C2STAT_bit at I2C2STAT.B8;
    sbit  IWCOL_I2C2STAT_bit at I2C2STAT.B7;
    sbit  I2COV_I2C2STAT_bit at I2C2STAT.B6;
    sbit  D_A_I2C2STAT_bit at I2C2STAT.B5;
    sbit  P_I2C2STAT_bit at I2C2STAT.B4;
    sbit  S_I2C2STAT_bit at I2C2STAT.B3;
    sbit  R_W_I2C2STAT_bit at I2C2STAT.B2;
    sbit  RBF_I2C2STAT_bit at I2C2STAT.B1;
    sbit  TBF_I2C2STAT_bit at I2C2STAT.B0;

    // I2C2ADD bits
    sbit  I2CADD_9_I2C2ADD_bit at I2C2ADD.B9;
    sbit  I2CADD_8_I2C2ADD_bit at I2C2ADD.B8;
    sbit  I2CADD_7_I2C2ADD_bit at I2C2ADD.B7;
    sbit  I2CADD_6_I2C2ADD_bit at I2C2ADD.B6;
    sbit  I2CADD_5_I2C2ADD_bit at I2C2ADD.B5;
    sbit  I2CADD_4_I2C2ADD_bit at I2C2ADD.B4;
    sbit  I2CADD_3_I2C2ADD_bit at I2C2ADD.B3;
    sbit  I2CADD_2_I2C2ADD_bit at I2C2ADD.B2;
    sbit  I2CADD_1_I2C2ADD_bit at I2C2ADD.B1;
    sbit  I2CADD_0_I2C2ADD_bit at I2C2ADD.B0;

    // I2C2MSK bits
    sbit  AMSK_9_I2C2MSK_bit at I2C2MSK.B9;
    sbit  AMSK_8_I2C2MSK_bit at I2C2MSK.B8;
    sbit  AMSK_7_I2C2MSK_bit at I2C2MSK.B7;
    sbit  AMSK_6_I2C2MSK_bit at I2C2MSK.B6;
    sbit  AMSK_5_I2C2MSK_bit at I2C2MSK.B5;
    sbit  AMSK_4_I2C2MSK_bit at I2C2MSK.B4;
    sbit  AMSK_3_I2C2MSK_bit at I2C2MSK.B3;
    sbit  AMSK_2_I2C2MSK_bit at I2C2MSK.B2;
    sbit  AMSK_1_I2C2MSK_bit at I2C2MSK.B1;
    sbit  AMSK_0_I2C2MSK_bit at I2C2MSK.B0;

    // U1MODE bits
    const register unsigned short int UARTEN = 15;
    sbit  UARTEN_bit at U1MODE.B15;
    sbit  UARTEN_U1MODE_bit at U1MODE.B15;
    const register unsigned short int USIDL = 13;
    sbit  USIDL_bit at U1MODE.B13;
    sbit  USIDL_U1MODE_bit at U1MODE.B13;
    const register unsigned short int IREN = 12;
    sbit  IREN_bit at U1MODE.B12;
    sbit  IREN_U1MODE_bit at U1MODE.B12;
    const register unsigned short int RTSMD = 11;
    sbit  RTSMD_bit at U1MODE.B11;
    sbit  RTSMD_U1MODE_bit at U1MODE.B11;
    const register unsigned short int UEN_1 = 9;
    sbit  UEN_1_bit at U1MODE.B9;
    sbit  UEN_1_U1MODE_bit at U1MODE.B9;
    const register unsigned short int UEN_0 = 8;
    sbit  UEN_0_bit at U1MODE.B8;
    sbit  UEN_0_U1MODE_bit at U1MODE.B8;
    const register unsigned short int WAKE = 7;
    sbit  WAKE_bit at U1MODE.B7;
    sbit  WAKE_U1MODE_bit at U1MODE.B7;
    const register unsigned short int LPBACK = 6;
    sbit  LPBACK_bit at U1MODE.B6;
    sbit  LPBACK_U1MODE_bit at U1MODE.B6;
    const register unsigned short int ABAUD = 5;
    sbit  ABAUD_bit at U1MODE.B5;
    sbit  ABAUD_U1MODE_bit at U1MODE.B5;
    const register unsigned short int RXINV = 4;
    sbit  RXINV_bit at U1MODE.B4;
    sbit  RXINV_U1MODE_bit at U1MODE.B4;
    const register unsigned short int BRGH = 3;
    sbit  BRGH_bit at U1MODE.B3;
    sbit  BRGH_U1MODE_bit at U1MODE.B3;
    const register unsigned short int PDSEL_1 = 2;
    sbit  PDSEL_1_bit at U1MODE.B2;
    sbit  PDSEL_1_U1MODE_bit at U1MODE.B2;
    const register unsigned short int PDSEL_0 = 1;
    sbit  PDSEL_0_bit at U1MODE.B1;
    sbit  PDSEL_0_U1MODE_bit at U1MODE.B1;
    const register unsigned short int STSEL = 0;
    sbit  STSEL_bit at U1MODE.B0;
    sbit  STSEL_U1MODE_bit at U1MODE.B0;

    // U1STA bits
    const register unsigned short int UTXISEL1 = 15;
    sbit  UTXISEL1_bit at U1STA.B15;
    sbit  UTXISEL1_U1STA_bit at U1STA.B15;
    const register unsigned short int UTXINV = 14;
    sbit  UTXINV_bit at U1STA.B14;
    sbit  UTXINV_U1STA_bit at U1STA.B14;
    const register unsigned short int UTXISEL0 = 13;
    sbit  UTXISEL0_bit at U1STA.B13;
    sbit  UTXISEL0_U1STA_bit at U1STA.B13;
    const register unsigned short int UTXBRK = 11;
    sbit  UTXBRK_bit at U1STA.B11;
    sbit  UTXBRK_U1STA_bit at U1STA.B11;
    const register unsigned short int UTXEN = 10;
    sbit  UTXEN_bit at U1STA.B10;
    sbit  UTXEN_U1STA_bit at U1STA.B10;
    const register unsigned short int UTXBF = 9;
    sbit  UTXBF_bit at U1STA.B9;
    sbit  UTXBF_U1STA_bit at U1STA.B9;
    const register unsigned short int TRMT = 8;
    sbit  TRMT_bit at U1STA.B8;
    sbit  TRMT_U1STA_bit at U1STA.B8;
    const register unsigned short int URXISEL_1 = 7;
    sbit  URXISEL_1_bit at U1STA.B7;
    sbit  URXISEL_1_U1STA_bit at U1STA.B7;
    const register unsigned short int URXISEL_0 = 6;
    sbit  URXISEL_0_bit at U1STA.B6;
    sbit  URXISEL_0_U1STA_bit at U1STA.B6;
    const register unsigned short int ADDEN = 5;
    sbit  ADDEN_bit at U1STA.B5;
    sbit  ADDEN_U1STA_bit at U1STA.B5;
    const register unsigned short int RIDLE = 4;
    sbit  RIDLE_bit at U1STA.B4;
    sbit  RIDLE_U1STA_bit at U1STA.B4;
    const register unsigned short int PERR = 3;
    sbit  PERR_bit at U1STA.B3;
    sbit  PERR_U1STA_bit at U1STA.B3;
    const register unsigned short int FERR = 2;
    sbit  FERR_bit at U1STA.B2;
    sbit  FERR_U1STA_bit at U1STA.B2;
    const register unsigned short int OERR = 1;
    sbit  OERR_bit at U1STA.B1;
    sbit  OERR_U1STA_bit at U1STA.B1;
    const register unsigned short int URXDA = 0;
    sbit  URXDA_bit at U1STA.B0;
    sbit  URXDA_U1STA_bit at U1STA.B0;

    // U1TXREG bits
    const register unsigned short int U1TXREG_8 = 8;
    sbit  U1TXREG_8_bit at U1TXREG.B8;
    const register unsigned short int U1TXREG_7 = 7;
    sbit  U1TXREG_7_bit at U1TXREG.B7;
    const register unsigned short int U1TXREG_6 = 6;
    sbit  U1TXREG_6_bit at U1TXREG.B6;
    const register unsigned short int U1TXREG_5 = 5;
    sbit  U1TXREG_5_bit at U1TXREG.B5;
    const register unsigned short int U1TXREG_4 = 4;
    sbit  U1TXREG_4_bit at U1TXREG.B4;
    const register unsigned short int U1TXREG_3 = 3;
    sbit  U1TXREG_3_bit at U1TXREG.B3;
    const register unsigned short int U1TXREG_2 = 2;
    sbit  U1TXREG_2_bit at U1TXREG.B2;
    const register unsigned short int U1TXREG_1 = 1;
    sbit  U1TXREG_1_bit at U1TXREG.B1;
    const register unsigned short int U1TXREG_0 = 0;
    sbit  U1TXREG_0_bit at U1TXREG.B0;

    // U1RXREG bits
    const register unsigned short int U1RXREG_8 = 8;
    sbit  U1RXREG_8_bit at U1RXREG.B8;
    const register unsigned short int U1RXREG_7 = 7;
    sbit  U1RXREG_7_bit at U1RXREG.B7;
    const register unsigned short int U1RXREG_6 = 6;
    sbit  U1RXREG_6_bit at U1RXREG.B6;
    const register unsigned short int U1RXREG_5 = 5;
    sbit  U1RXREG_5_bit at U1RXREG.B5;
    const register unsigned short int U1RXREG_4 = 4;
    sbit  U1RXREG_4_bit at U1RXREG.B4;
    const register unsigned short int U1RXREG_3 = 3;
    sbit  U1RXREG_3_bit at U1RXREG.B3;
    const register unsigned short int U1RXREG_2 = 2;
    sbit  U1RXREG_2_bit at U1RXREG.B2;
    const register unsigned short int U1RXREG_1 = 1;
    sbit  U1RXREG_1_bit at U1RXREG.B1;
    const register unsigned short int U1RXREG_0 = 0;
    sbit  U1RXREG_0_bit at U1RXREG.B0;

    // U1BRG bits
    const register unsigned short int BRG_15 = 15;
    sbit  BRG_15_bit at U1BRG.B15;
    sbit  BRG_15_U1BRG_bit at U1BRG.B15;
    const register unsigned short int BRG_14 = 14;
    sbit  BRG_14_bit at U1BRG.B14;
    sbit  BRG_14_U1BRG_bit at U1BRG.B14;
    const register unsigned short int BRG_13 = 13;
    sbit  BRG_13_bit at U1BRG.B13;
    sbit  BRG_13_U1BRG_bit at U1BRG.B13;
    const register unsigned short int BRG_12 = 12;
    sbit  BRG_12_bit at U1BRG.B12;
    sbit  BRG_12_U1BRG_bit at U1BRG.B12;
    const register unsigned short int BRG_11 = 11;
    sbit  BRG_11_bit at U1BRG.B11;
    sbit  BRG_11_U1BRG_bit at U1BRG.B11;
    const register unsigned short int BRG_10 = 10;
    sbit  BRG_10_bit at U1BRG.B10;
    sbit  BRG_10_U1BRG_bit at U1BRG.B10;
    const register unsigned short int BRG_9 = 9;
    sbit  BRG_9_bit at U1BRG.B9;
    sbit  BRG_9_U1BRG_bit at U1BRG.B9;
    const register unsigned short int BRG_8 = 8;
    sbit  BRG_8_bit at U1BRG.B8;
    sbit  BRG_8_U1BRG_bit at U1BRG.B8;
    const register unsigned short int BRG_7 = 7;
    sbit  BRG_7_bit at U1BRG.B7;
    sbit  BRG_7_U1BRG_bit at U1BRG.B7;
    const register unsigned short int BRG_6 = 6;
    sbit  BRG_6_bit at U1BRG.B6;
    sbit  BRG_6_U1BRG_bit at U1BRG.B6;
    const register unsigned short int BRG_5 = 5;
    sbit  BRG_5_bit at U1BRG.B5;
    sbit  BRG_5_U1BRG_bit at U1BRG.B5;
    const register unsigned short int BRG_4 = 4;
    sbit  BRG_4_bit at U1BRG.B4;
    sbit  BRG_4_U1BRG_bit at U1BRG.B4;
    const register unsigned short int BRG_3 = 3;
    sbit  BRG_3_bit at U1BRG.B3;
    sbit  BRG_3_U1BRG_bit at U1BRG.B3;
    const register unsigned short int BRG_2 = 2;
    sbit  BRG_2_bit at U1BRG.B2;
    sbit  BRG_2_U1BRG_bit at U1BRG.B2;
    const register unsigned short int BRG_1 = 1;
    sbit  BRG_1_bit at U1BRG.B1;
    sbit  BRG_1_U1BRG_bit at U1BRG.B1;
    const register unsigned short int BRG_0 = 0;
    sbit  BRG_0_bit at U1BRG.B0;
    sbit  BRG_0_U1BRG_bit at U1BRG.B0;

    // U2MODE bits
    sbit  UARTEN_U2MODE_bit at U2MODE.B15;
    sbit  USIDL_U2MODE_bit at U2MODE.B13;
    sbit  IREN_U2MODE_bit at U2MODE.B12;
    sbit  RTSMD_U2MODE_bit at U2MODE.B11;
    sbit  UEN_1_U2MODE_bit at U2MODE.B9;
    sbit  UEN_0_U2MODE_bit at U2MODE.B8;
    sbit  WAKE_U2MODE_bit at U2MODE.B7;
    sbit  LPBACK_U2MODE_bit at U2MODE.B6;
    sbit  ABAUD_U2MODE_bit at U2MODE.B5;
    sbit  RXINV_U2MODE_bit at U2MODE.B4;
    sbit  BRGH_U2MODE_bit at U2MODE.B3;
    sbit  PDSEL_1_U2MODE_bit at U2MODE.B2;
    sbit  PDSEL_0_U2MODE_bit at U2MODE.B1;
    sbit  STSEL_U2MODE_bit at U2MODE.B0;

    // U2STA bits
    sbit  UTXISEL1_U2STA_bit at U2STA.B15;
    sbit  UTXINV_U2STA_bit at U2STA.B14;
    sbit  UTXISEL0_U2STA_bit at U2STA.B13;
    sbit  UTXBRK_U2STA_bit at U2STA.B11;
    sbit  UTXEN_U2STA_bit at U2STA.B10;
    sbit  UTXBF_U2STA_bit at U2STA.B9;
    sbit  TRMT_U2STA_bit at U2STA.B8;
    sbit  URXISEL_1_U2STA_bit at U2STA.B7;
    sbit  URXISEL_0_U2STA_bit at U2STA.B6;
    sbit  ADDEN_U2STA_bit at U2STA.B5;
    sbit  RIDLE_U2STA_bit at U2STA.B4;
    sbit  PERR_U2STA_bit at U2STA.B3;
    sbit  FERR_U2STA_bit at U2STA.B2;
    sbit  OERR_U2STA_bit at U2STA.B1;
    sbit  URXDA_U2STA_bit at U2STA.B0;

    // U2TXREG bits
    const register unsigned short int U2TXREG_8 = 8;
    sbit  U2TXREG_8_bit at U2TXREG.B8;
    const register unsigned short int U2TXREG_7 = 7;
    sbit  U2TXREG_7_bit at U2TXREG.B7;
    const register unsigned short int U2TXREG_6 = 6;
    sbit  U2TXREG_6_bit at U2TXREG.B6;
    const register unsigned short int U2TXREG_5 = 5;
    sbit  U2TXREG_5_bit at U2TXREG.B5;
    const register unsigned short int U2TXREG_4 = 4;
    sbit  U2TXREG_4_bit at U2TXREG.B4;
    const register unsigned short int U2TXREG_3 = 3;
    sbit  U2TXREG_3_bit at U2TXREG.B3;
    const register unsigned short int U2TXREG_2 = 2;
    sbit  U2TXREG_2_bit at U2TXREG.B2;
    const register unsigned short int U2TXREG_1 = 1;
    sbit  U2TXREG_1_bit at U2TXREG.B1;
    const register unsigned short int U2TXREG_0 = 0;
    sbit  U2TXREG_0_bit at U2TXREG.B0;

    // U2RXREG bits
    const register unsigned short int U2RXREG_8 = 8;
    sbit  U2RXREG_8_bit at U2RXREG.B8;
    const register unsigned short int U2RXREG_7 = 7;
    sbit  U2RXREG_7_bit at U2RXREG.B7;
    const register unsigned short int U2RXREG_6 = 6;
    sbit  U2RXREG_6_bit at U2RXREG.B6;
    const register unsigned short int U2RXREG_5 = 5;
    sbit  U2RXREG_5_bit at U2RXREG.B5;
    const register unsigned short int U2RXREG_4 = 4;
    sbit  U2RXREG_4_bit at U2RXREG.B4;
    const register unsigned short int U2RXREG_3 = 3;
    sbit  U2RXREG_3_bit at U2RXREG.B3;
    const register unsigned short int U2RXREG_2 = 2;
    sbit  U2RXREG_2_bit at U2RXREG.B2;
    const register unsigned short int U2RXREG_1 = 1;
    sbit  U2RXREG_1_bit at U2RXREG.B1;
    const register unsigned short int U2RXREG_0 = 0;
    sbit  U2RXREG_0_bit at U2RXREG.B0;

    // U2BRG bits
    sbit  BRG_15_U2BRG_bit at U2BRG.B15;
    sbit  BRG_14_U2BRG_bit at U2BRG.B14;
    sbit  BRG_13_U2BRG_bit at U2BRG.B13;
    sbit  BRG_12_U2BRG_bit at U2BRG.B12;
    sbit  BRG_11_U2BRG_bit at U2BRG.B11;
    sbit  BRG_10_U2BRG_bit at U2BRG.B10;
    sbit  BRG_9_U2BRG_bit at U2BRG.B9;
    sbit  BRG_8_U2BRG_bit at U2BRG.B8;
    sbit  BRG_7_U2BRG_bit at U2BRG.B7;
    sbit  BRG_6_U2BRG_bit at U2BRG.B6;
    sbit  BRG_5_U2BRG_bit at U2BRG.B5;
    sbit  BRG_4_U2BRG_bit at U2BRG.B4;
    sbit  BRG_3_U2BRG_bit at U2BRG.B3;
    sbit  BRG_2_U2BRG_bit at U2BRG.B2;
    sbit  BRG_1_U2BRG_bit at U2BRG.B1;
    sbit  BRG_0_U2BRG_bit at U2BRG.B0;

    // SPI1STAT bits
    const register unsigned short int SPIEN = 15;
    sbit  SPIEN_bit at SPI1STAT.B15;
    sbit  SPIEN_SPI1STAT_bit at SPI1STAT.B15;
    const register unsigned short int SPISIDL = 13;
    sbit  SPISIDL_bit at SPI1STAT.B13;
    sbit  SPISIDL_SPI1STAT_bit at SPI1STAT.B13;
    const register unsigned short int SPIBEC_2 = 10;
    sbit  SPIBEC_2_bit at SPI1STAT.B10;
    sbit  SPIBEC_2_SPI1STAT_bit at SPI1STAT.B10;
    const register unsigned short int SPIBEC_1 = 9;
    sbit  SPIBEC_1_bit at SPI1STAT.B9;
    sbit  SPIBEC_1_SPI1STAT_bit at SPI1STAT.B9;
    const register unsigned short int SPIBEC_0 = 8;
    sbit  SPIBEC_0_bit at SPI1STAT.B8;
    sbit  SPIBEC_0_SPI1STAT_bit at SPI1STAT.B8;
    const register unsigned short int SRMPT = 7;
    sbit  SRMPT_bit at SPI1STAT.B7;
    sbit  SRMPT_SPI1STAT_bit at SPI1STAT.B7;
    const register unsigned short int SPIROV = 6;
    sbit  SPIROV_bit at SPI1STAT.B6;
    sbit  SPIROV_SPI1STAT_bit at SPI1STAT.B6;
    const register unsigned short int SRXMPT = 5;
    sbit  SRXMPT_bit at SPI1STAT.B5;
    sbit  SRXMPT_SPI1STAT_bit at SPI1STAT.B5;
    const register unsigned short int SISEL_2 = 4;
    sbit  SISEL_2_bit at SPI1STAT.B4;
    sbit  SISEL_2_SPI1STAT_bit at SPI1STAT.B4;
    const register unsigned short int SISEL_1 = 3;
    sbit  SISEL_1_bit at SPI1STAT.B3;
    sbit  SISEL_1_SPI1STAT_bit at SPI1STAT.B3;
    const register unsigned short int SISEL_0 = 2;
    sbit  SISEL_0_bit at SPI1STAT.B2;
    sbit  SISEL_0_SPI1STAT_bit at SPI1STAT.B2;
    const register unsigned short int SPITBF = 1;
    sbit  SPITBF_bit at SPI1STAT.B1;
    sbit  SPITBF_SPI1STAT_bit at SPI1STAT.B1;
    const register unsigned short int SPIRBF = 0;
    sbit  SPIRBF_bit at SPI1STAT.B0;
    sbit  SPIRBF_SPI1STAT_bit at SPI1STAT.B0;

    // SPI1CON1 bits
    const register unsigned short int DISSCK = 12;
    sbit  DISSCK_bit at SPI1CON1.B12;
    sbit  DISSCK_SPI1CON1_bit at SPI1CON1.B12;
    const register unsigned short int DISSDO = 11;
    sbit  DISSDO_bit at SPI1CON1.B11;
    sbit  DISSDO_SPI1CON1_bit at SPI1CON1.B11;
    const register unsigned short int MODE16 = 10;
    sbit  MODE16_bit at SPI1CON1.B10;
    sbit  MODE16_SPI1CON1_bit at SPI1CON1.B10;
    const register unsigned short int SMP = 9;
    sbit  SMP_bit at SPI1CON1.B9;
    sbit  SMP_SPI1CON1_bit at SPI1CON1.B9;
    const register unsigned short int CKE = 8;
    sbit  CKE_bit at SPI1CON1.B8;
    sbit  CKE_SPI1CON1_bit at SPI1CON1.B8;
    const register unsigned short int SSEN = 7;
    sbit  SSEN_bit at SPI1CON1.B7;
    sbit  SSEN_SPI1CON1_bit at SPI1CON1.B7;
    const register unsigned short int CKP = 6;
    sbit  CKP_bit at SPI1CON1.B6;
    sbit  CKP_SPI1CON1_bit at SPI1CON1.B6;
    const register unsigned short int MSTEN = 5;
    sbit  MSTEN_bit at SPI1CON1.B5;
    sbit  MSTEN_SPI1CON1_bit at SPI1CON1.B5;
    const register unsigned short int SPRE_2 = 4;
    sbit  SPRE_2_bit at SPI1CON1.B4;
    sbit  SPRE_2_SPI1CON1_bit at SPI1CON1.B4;
    const register unsigned short int SPRE_1 = 3;
    sbit  SPRE_1_bit at SPI1CON1.B3;
    sbit  SPRE_1_SPI1CON1_bit at SPI1CON1.B3;
    const register unsigned short int SPRE_0 = 2;
    sbit  SPRE_0_bit at SPI1CON1.B2;
    sbit  SPRE_0_SPI1CON1_bit at SPI1CON1.B2;
    const register unsigned short int PPRE_1 = 1;
    sbit  PPRE_1_bit at SPI1CON1.B1;
    sbit  PPRE_1_SPI1CON1_bit at SPI1CON1.B1;
    const register unsigned short int PPRE_0 = 0;
    sbit  PPRE_0_bit at SPI1CON1.B0;
    sbit  PPRE_0_SPI1CON1_bit at SPI1CON1.B0;

    // SPI1CON2 bits
    const register unsigned short int FRMEN = 15;
    sbit  FRMEN_bit at SPI1CON2.B15;
    sbit  FRMEN_SPI1CON2_bit at SPI1CON2.B15;
    const register unsigned short int SPIFSD = 14;
    sbit  SPIFSD_bit at SPI1CON2.B14;
    sbit  SPIFSD_SPI1CON2_bit at SPI1CON2.B14;
    const register unsigned short int SPIFPOL = 13;
    sbit  SPIFPOL_bit at SPI1CON2.B13;
    sbit  SPIFPOL_SPI1CON2_bit at SPI1CON2.B13;
    const register unsigned short int SPIFE = 1;
    sbit  SPIFE_bit at SPI1CON2.B1;
    sbit  SPIFE_SPI1CON2_bit at SPI1CON2.B1;
    const register unsigned short int SPIBEN = 0;
    sbit  SPIBEN_bit at SPI1CON2.B0;
    sbit  SPIBEN_SPI1CON2_bit at SPI1CON2.B0;

    // SPI1BUF bits
    const register unsigned short int SPI1BUF_15 = 15;
    sbit  SPI1BUF_15_bit at SPI1BUF.B15;
    sbit  SPI1BUF_15_SPI1BUF_bit at SPI1BUF.B15;
    const register unsigned short int SPI1BUF_14 = 14;
    sbit  SPI1BUF_14_bit at SPI1BUF.B14;
    sbit  SPI1BUF_14_SPI1BUF_bit at SPI1BUF.B14;
    const register unsigned short int SPI1BUF_13 = 13;
    sbit  SPI1BUF_13_bit at SPI1BUF.B13;
    sbit  SPI1BUF_13_SPI1BUF_bit at SPI1BUF.B13;
    const register unsigned short int SPI1BUF_12 = 12;
    sbit  SPI1BUF_12_bit at SPI1BUF.B12;
    sbit  SPI1BUF_12_SPI1BUF_bit at SPI1BUF.B12;
    const register unsigned short int SPI1BUF_11 = 11;
    sbit  SPI1BUF_11_bit at SPI1BUF.B11;
    sbit  SPI1BUF_11_SPI1BUF_bit at SPI1BUF.B11;
    const register unsigned short int SPI1BUF_10 = 10;
    sbit  SPI1BUF_10_bit at SPI1BUF.B10;
    sbit  SPI1BUF_10_SPI1BUF_bit at SPI1BUF.B10;
    const register unsigned short int SPI1BUF_9 = 9;
    sbit  SPI1BUF_9_bit at SPI1BUF.B9;
    sbit  SPI1BUF_9_SPI1BUF_bit at SPI1BUF.B9;
    const register unsigned short int SPI1BUF_8 = 8;
    sbit  SPI1BUF_8_bit at SPI1BUF.B8;
    sbit  SPI1BUF_8_SPI1BUF_bit at SPI1BUF.B8;
    const register unsigned short int SPI1BUF_7 = 7;
    sbit  SPI1BUF_7_bit at SPI1BUF.B7;
    sbit  SPI1BUF_7_SPI1BUF_bit at SPI1BUF.B7;
    const register unsigned short int SPI1BUF_6 = 6;
    sbit  SPI1BUF_6_bit at SPI1BUF.B6;
    sbit  SPI1BUF_6_SPI1BUF_bit at SPI1BUF.B6;
    const register unsigned short int SPI1BUF_5 = 5;
    sbit  SPI1BUF_5_bit at SPI1BUF.B5;
    sbit  SPI1BUF_5_SPI1BUF_bit at SPI1BUF.B5;
    const register unsigned short int SPI1BUF_4 = 4;
    sbit  SPI1BUF_4_bit at SPI1BUF.B4;
    sbit  SPI1BUF_4_SPI1BUF_bit at SPI1BUF.B4;
    const register unsigned short int SPI1BUF_3 = 3;
    sbit  SPI1BUF_3_bit at SPI1BUF.B3;
    sbit  SPI1BUF_3_SPI1BUF_bit at SPI1BUF.B3;
    const register unsigned short int SPI1BUF_2 = 2;
    sbit  SPI1BUF_2_bit at SPI1BUF.B2;
    sbit  SPI1BUF_2_SPI1BUF_bit at SPI1BUF.B2;
    const register unsigned short int SPI1BUF_1 = 1;
    sbit  SPI1BUF_1_bit at SPI1BUF.B1;
    sbit  SPI1BUF_1_SPI1BUF_bit at SPI1BUF.B1;
    const register unsigned short int SPI1BUF_0 = 0;
    sbit  SPI1BUF_0_bit at SPI1BUF.B0;
    sbit  SPI1BUF_0_SPI1BUF_bit at SPI1BUF.B0;

    // SPI2STAT bits
    sbit  SPIEN_SPI2STAT_bit at SPI2STAT.B15;
    sbit  SPISIDL_SPI2STAT_bit at SPI2STAT.B13;
    sbit  SPIBEC_2_SPI2STAT_bit at SPI2STAT.B10;
    sbit  SPIBEC_1_SPI2STAT_bit at SPI2STAT.B9;
    sbit  SPIBEC_0_SPI2STAT_bit at SPI2STAT.B8;
    sbit  SRMPT_SPI2STAT_bit at SPI2STAT.B7;
    sbit  SPIROV_SPI2STAT_bit at SPI2STAT.B6;
    sbit  SRXMPT_SPI2STAT_bit at SPI2STAT.B5;
    sbit  SISEL_2_SPI2STAT_bit at SPI2STAT.B4;
    sbit  SISEL_1_SPI2STAT_bit at SPI2STAT.B3;
    sbit  SISEL_0_SPI2STAT_bit at SPI2STAT.B2;
    sbit  SPITBF_SPI2STAT_bit at SPI2STAT.B1;
    sbit  SPIRBF_SPI2STAT_bit at SPI2STAT.B0;

    // SPI2CON1 bits
    sbit  DISSCK_SPI2CON1_bit at SPI2CON1.B12;
    sbit  DISSDO_SPI2CON1_bit at SPI2CON1.B11;
    sbit  MODE16_SPI2CON1_bit at SPI2CON1.B10;
    sbit  SMP_SPI2CON1_bit at SPI2CON1.B9;
    sbit  CKE_SPI2CON1_bit at SPI2CON1.B8;
    sbit  SSEN_SPI2CON1_bit at SPI2CON1.B7;
    sbit  CKP_SPI2CON1_bit at SPI2CON1.B6;
    sbit  MSTEN_SPI2CON1_bit at SPI2CON1.B5;
    sbit  SPRE_2_SPI2CON1_bit at SPI2CON1.B4;
    sbit  SPRE_1_SPI2CON1_bit at SPI2CON1.B3;
    sbit  SPRE_0_SPI2CON1_bit at SPI2CON1.B2;
    sbit  PPRE_1_SPI2CON1_bit at SPI2CON1.B1;
    sbit  PPRE_0_SPI2CON1_bit at SPI2CON1.B0;

    // SPI2CON2 bits
    sbit  FRMEN_SPI2CON2_bit at SPI2CON2.B15;
    sbit  SPIFSD_SPI2CON2_bit at SPI2CON2.B14;
    sbit  SPIFPOL_SPI2CON2_bit at SPI2CON2.B13;
    sbit  SPIFE_SPI2CON2_bit at SPI2CON2.B1;
    sbit  SPIBEN_SPI2CON2_bit at SPI2CON2.B0;

    // SPI2BUF bits
    sbit  SPI1BUF_15_SPI2BUF_bit at SPI2BUF.B15;
    sbit  SPI1BUF_14_SPI2BUF_bit at SPI2BUF.B14;
    sbit  SPI1BUF_13_SPI2BUF_bit at SPI2BUF.B13;
    sbit  SPI1BUF_12_SPI2BUF_bit at SPI2BUF.B12;
    sbit  SPI1BUF_11_SPI2BUF_bit at SPI2BUF.B11;
    sbit  SPI1BUF_10_SPI2BUF_bit at SPI2BUF.B10;
    sbit  SPI1BUF_9_SPI2BUF_bit at SPI2BUF.B9;
    sbit  SPI1BUF_8_SPI2BUF_bit at SPI2BUF.B8;
    sbit  SPI1BUF_7_SPI2BUF_bit at SPI2BUF.B7;
    sbit  SPI1BUF_6_SPI2BUF_bit at SPI2BUF.B6;
    sbit  SPI1BUF_5_SPI2BUF_bit at SPI2BUF.B5;
    sbit  SPI1BUF_4_SPI2BUF_bit at SPI2BUF.B4;
    sbit  SPI1BUF_3_SPI2BUF_bit at SPI2BUF.B3;
    sbit  SPI1BUF_2_SPI2BUF_bit at SPI2BUF.B2;
    sbit  SPI1BUF_1_SPI2BUF_bit at SPI2BUF.B1;
    sbit  SPI1BUF_0_SPI2BUF_bit at SPI2BUF.B0;

    // TRISA bits
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

    // PORTA bits
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

    // LATA bits
    const register unsigned short int LATA4 = 4;
    sbit  LATA4_bit at LATA.B4;
    const register unsigned short int LATA3 = 3;
    sbit  LATA3_bit at LATA.B3;
    const register unsigned short int LATA2 = 2;
    sbit  LATA2_bit at LATA.B2;
    const register unsigned short int LATA1 = 1;
    sbit  LATA1_bit at LATA.B1;
    const register unsigned short int LATA0 = 0;
    sbit  LATA0_bit at LATA.B0;

    // ODCA bits
    const register unsigned short int ODA4 = 4;
    sbit  ODA4_bit at ODCA.B4;
    const register unsigned short int ODA3 = 3;
    sbit  ODA3_bit at ODCA.B3;
    const register unsigned short int ODA2 = 2;
    sbit  ODA2_bit at ODCA.B2;
    const register unsigned short int ODA1 = 1;
    sbit  ODA1_bit at ODCA.B1;
    const register unsigned short int ODA0 = 0;
    sbit  ODA0_bit at ODCA.B0;

    // TRISB bits
    const register unsigned short int TRISB15 = 15;
    sbit  TRISB15_bit at TRISB.B15;
    const register unsigned short int TRISB14 = 14;
    sbit  TRISB14_bit at TRISB.B14;
    const register unsigned short int TRISB13 = 13;
    sbit  TRISB13_bit at TRISB.B13;
    const register unsigned short int TRISB12 = 12;
    sbit  TRISB12_bit at TRISB.B12;
    const register unsigned short int TRISB11 = 11;
    sbit  TRISB11_bit at TRISB.B11;
    const register unsigned short int TRISB10 = 10;
    sbit  TRISB10_bit at TRISB.B10;
    const register unsigned short int TRISB9 = 9;
    sbit  TRISB9_bit at TRISB.B9;
    const register unsigned short int TRISB8 = 8;
    sbit  TRISB8_bit at TRISB.B8;
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

    // PORTB bits
    const register unsigned short int RB15 = 15;
    sbit  RB15_bit at PORTB.B15;
    const register unsigned short int RB14 = 14;
    sbit  RB14_bit at PORTB.B14;
    const register unsigned short int RB13 = 13;
    sbit  RB13_bit at PORTB.B13;
    const register unsigned short int RB12 = 12;
    sbit  RB12_bit at PORTB.B12;
    const register unsigned short int RB11 = 11;
    sbit  RB11_bit at PORTB.B11;
    const register unsigned short int RB10 = 10;
    sbit  RB10_bit at PORTB.B10;
    const register unsigned short int RB9 = 9;
    sbit  RB9_bit at PORTB.B9;
    const register unsigned short int RB8 = 8;
    sbit  RB8_bit at PORTB.B8;
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

    // LATB bits
    const register unsigned short int LATB15 = 15;
    sbit  LATB15_bit at LATB.B15;
    const register unsigned short int LATB14 = 14;
    sbit  LATB14_bit at LATB.B14;
    const register unsigned short int LATB13 = 13;
    sbit  LATB13_bit at LATB.B13;
    const register unsigned short int LATB12 = 12;
    sbit  LATB12_bit at LATB.B12;
    const register unsigned short int LATB11 = 11;
    sbit  LATB11_bit at LATB.B11;
    const register unsigned short int LATB10 = 10;
    sbit  LATB10_bit at LATB.B10;
    const register unsigned short int LATB9 = 9;
    sbit  LATB9_bit at LATB.B9;
    const register unsigned short int LATB8 = 8;
    sbit  LATB8_bit at LATB.B8;
    const register unsigned short int LATB7 = 7;
    sbit  LATB7_bit at LATB.B7;
    const register unsigned short int LATB6 = 6;
    sbit  LATB6_bit at LATB.B6;
    const register unsigned short int LATB5 = 5;
    sbit  LATB5_bit at LATB.B5;
    const register unsigned short int LATB4 = 4;
    sbit  LATB4_bit at LATB.B4;
    const register unsigned short int LATB3 = 3;
    sbit  LATB3_bit at LATB.B3;
    const register unsigned short int LATB2 = 2;
    sbit  LATB2_bit at LATB.B2;
    const register unsigned short int LATB1 = 1;
    sbit  LATB1_bit at LATB.B1;
    const register unsigned short int LATB0 = 0;
    sbit  LATB0_bit at LATB.B0;

    // ODCB bits
    const register unsigned short int ODB15 = 15;
    sbit  ODB15_bit at ODCB.B15;
    const register unsigned short int ODB14 = 14;
    sbit  ODB14_bit at ODCB.B14;
    const register unsigned short int ODB13 = 13;
    sbit  ODB13_bit at ODCB.B13;
    const register unsigned short int ODB12 = 12;
    sbit  ODB12_bit at ODCB.B12;
    const register unsigned short int ODB11 = 11;
    sbit  ODB11_bit at ODCB.B11;
    const register unsigned short int ODB10 = 10;
    sbit  ODB10_bit at ODCB.B10;
    const register unsigned short int ODB9 = 9;
    sbit  ODB9_bit at ODCB.B9;
    const register unsigned short int ODB8 = 8;
    sbit  ODB8_bit at ODCB.B8;
    const register unsigned short int ODB7 = 7;
    sbit  ODB7_bit at ODCB.B7;
    const register unsigned short int ODB6 = 6;
    sbit  ODB6_bit at ODCB.B6;
    const register unsigned short int ODB5 = 5;
    sbit  ODB5_bit at ODCB.B5;
    const register unsigned short int ODB4 = 4;
    sbit  ODB4_bit at ODCB.B4;
    const register unsigned short int ODB3 = 3;
    sbit  ODB3_bit at ODCB.B3;
    const register unsigned short int ODB2 = 2;
    sbit  ODB2_bit at ODCB.B2;
    const register unsigned short int ODB1 = 1;
    sbit  ODB1_bit at ODCB.B1;
    const register unsigned short int ODB0 = 0;
    sbit  ODB0_bit at ODCB.B0;

    // PADCFG1 bits
    const register unsigned short int RTSECSEL_1 = 2;
    sbit  RTSECSEL_1_bit at PADCFG1.B2;
    const register unsigned short int RTSECSEL_0 = 1;
    sbit  RTSECSEL_0_bit at PADCFG1.B1;
    const register unsigned short int PMPTTL = 0;
    sbit  PMPTTL_bit at PADCFG1.B0;

    // ADC1BUF0 bits
    const register unsigned short int ADC1BUF0_15 = 15;
    sbit  ADC1BUF0_15_bit at ADC1BUF0.B15;
    sbit  ADC1BUF0_15_ADC1BUF0_bit at ADC1BUF0.B15;
    sbit  ADC1BUF0_15_ADCBUF0_bit at ADCBUF0.B15;
    const register unsigned short int ADC1BUF0_14 = 14;
    sbit  ADC1BUF0_14_bit at ADC1BUF0.B14;
    sbit  ADC1BUF0_14_ADC1BUF0_bit at ADC1BUF0.B14;
    sbit  ADC1BUF0_14_ADCBUF0_bit at ADCBUF0.B14;
    const register unsigned short int ADC1BUF0_13 = 13;
    sbit  ADC1BUF0_13_bit at ADC1BUF0.B13;
    sbit  ADC1BUF0_13_ADC1BUF0_bit at ADC1BUF0.B13;
    sbit  ADC1BUF0_13_ADCBUF0_bit at ADCBUF0.B13;
    const register unsigned short int ADC1BUF0_12 = 12;
    sbit  ADC1BUF0_12_bit at ADC1BUF0.B12;
    sbit  ADC1BUF0_12_ADC1BUF0_bit at ADC1BUF0.B12;
    sbit  ADC1BUF0_12_ADCBUF0_bit at ADCBUF0.B12;
    const register unsigned short int ADC1BUF0_11 = 11;
    sbit  ADC1BUF0_11_bit at ADC1BUF0.B11;
    sbit  ADC1BUF0_11_ADC1BUF0_bit at ADC1BUF0.B11;
    sbit  ADC1BUF0_11_ADCBUF0_bit at ADCBUF0.B11;
    const register unsigned short int ADC1BUF0_10 = 10;
    sbit  ADC1BUF0_10_bit at ADC1BUF0.B10;
    sbit  ADC1BUF0_10_ADC1BUF0_bit at ADC1BUF0.B10;
    sbit  ADC1BUF0_10_ADCBUF0_bit at ADCBUF0.B10;
    const register unsigned short int ADC1BUF0_9 = 9;
    sbit  ADC1BUF0_9_bit at ADC1BUF0.B9;
    sbit  ADC1BUF0_9_ADC1BUF0_bit at ADC1BUF0.B9;
    sbit  ADC1BUF0_9_ADCBUF0_bit at ADCBUF0.B9;
    const register unsigned short int ADC1BUF0_8 = 8;
    sbit  ADC1BUF0_8_bit at ADC1BUF0.B8;
    sbit  ADC1BUF0_8_ADC1BUF0_bit at ADC1BUF0.B8;
    sbit  ADC1BUF0_8_ADCBUF0_bit at ADCBUF0.B8;
    const register unsigned short int ADC1BUF0_7 = 7;
    sbit  ADC1BUF0_7_bit at ADC1BUF0.B7;
    sbit  ADC1BUF0_7_ADC1BUF0_bit at ADC1BUF0.B7;
    sbit  ADC1BUF0_7_ADCBUF0_bit at ADCBUF0.B7;
    const register unsigned short int ADC1BUF0_6 = 6;
    sbit  ADC1BUF0_6_bit at ADC1BUF0.B6;
    sbit  ADC1BUF0_6_ADC1BUF0_bit at ADC1BUF0.B6;
    sbit  ADC1BUF0_6_ADCBUF0_bit at ADCBUF0.B6;
    const register unsigned short int ADC1BUF0_5 = 5;
    sbit  ADC1BUF0_5_bit at ADC1BUF0.B5;
    sbit  ADC1BUF0_5_ADC1BUF0_bit at ADC1BUF0.B5;
    sbit  ADC1BUF0_5_ADCBUF0_bit at ADCBUF0.B5;
    const register unsigned short int ADC1BUF0_4 = 4;
    sbit  ADC1BUF0_4_bit at ADC1BUF0.B4;
    sbit  ADC1BUF0_4_ADC1BUF0_bit at ADC1BUF0.B4;
    sbit  ADC1BUF0_4_ADCBUF0_bit at ADCBUF0.B4;
    const register unsigned short int ADC1BUF0_3 = 3;
    sbit  ADC1BUF0_3_bit at ADC1BUF0.B3;
    sbit  ADC1BUF0_3_ADC1BUF0_bit at ADC1BUF0.B3;
    sbit  ADC1BUF0_3_ADCBUF0_bit at ADCBUF0.B3;
    const register unsigned short int ADC1BUF0_2 = 2;
    sbit  ADC1BUF0_2_bit at ADC1BUF0.B2;
    sbit  ADC1BUF0_2_ADC1BUF0_bit at ADC1BUF0.B2;
    sbit  ADC1BUF0_2_ADCBUF0_bit at ADCBUF0.B2;
    const register unsigned short int ADC1BUF0_1 = 1;
    sbit  ADC1BUF0_1_bit at ADC1BUF0.B1;
    sbit  ADC1BUF0_1_ADC1BUF0_bit at ADC1BUF0.B1;
    sbit  ADC1BUF0_1_ADCBUF0_bit at ADCBUF0.B1;
    const register unsigned short int ADC1BUF0_0 = 0;
    sbit  ADC1BUF0_0_bit at ADC1BUF0.B0;
    sbit  ADC1BUF0_0_ADC1BUF0_bit at ADC1BUF0.B0;
    sbit  ADC1BUF0_0_ADCBUF0_bit at ADCBUF0.B0;

    // ADC1BUF1 bits
    const register unsigned short int ADC1BUF1_15 = 15;
    sbit  ADC1BUF1_15_bit at ADC1BUF1.B15;
    const register unsigned short int ADC1BUF1_14 = 14;
    sbit  ADC1BUF1_14_bit at ADC1BUF1.B14;
    const register unsigned short int ADC1BUF1_13 = 13;
    sbit  ADC1BUF1_13_bit at ADC1BUF1.B13;
    const register unsigned short int ADC1BUF1_12 = 12;
    sbit  ADC1BUF1_12_bit at ADC1BUF1.B12;
    const register unsigned short int ADC1BUF1_11 = 11;
    sbit  ADC1BUF1_11_bit at ADC1BUF1.B11;
    const register unsigned short int ADC1BUF1_10 = 10;
    sbit  ADC1BUF1_10_bit at ADC1BUF1.B10;
    const register unsigned short int ADC1BUF1_9 = 9;
    sbit  ADC1BUF1_9_bit at ADC1BUF1.B9;
    const register unsigned short int ADC1BUF1_8 = 8;
    sbit  ADC1BUF1_8_bit at ADC1BUF1.B8;
    const register unsigned short int ADC1BUF1_7 = 7;
    sbit  ADC1BUF1_7_bit at ADC1BUF1.B7;
    const register unsigned short int ADC1BUF1_6 = 6;
    sbit  ADC1BUF1_6_bit at ADC1BUF1.B6;
    const register unsigned short int ADC1BUF1_5 = 5;
    sbit  ADC1BUF1_5_bit at ADC1BUF1.B5;
    const register unsigned short int ADC1BUF1_4 = 4;
    sbit  ADC1BUF1_4_bit at ADC1BUF1.B4;
    const register unsigned short int ADC1BUF1_3 = 3;
    sbit  ADC1BUF1_3_bit at ADC1BUF1.B3;
    const register unsigned short int ADC1BUF1_2 = 2;
    sbit  ADC1BUF1_2_bit at ADC1BUF1.B2;
    const register unsigned short int ADC1BUF1_1 = 1;
    sbit  ADC1BUF1_1_bit at ADC1BUF1.B1;
    const register unsigned short int ADC1BUF1_0 = 0;
    sbit  ADC1BUF1_0_bit at ADC1BUF1.B0;

    // ADC1BUF2 bits
    const register unsigned short int ADC1BUF2_15 = 15;
    sbit  ADC1BUF2_15_bit at ADC1BUF2.B15;
    const register unsigned short int ADC1BUF2_14 = 14;
    sbit  ADC1BUF2_14_bit at ADC1BUF2.B14;
    const register unsigned short int ADC1BUF2_13 = 13;
    sbit  ADC1BUF2_13_bit at ADC1BUF2.B13;
    const register unsigned short int ADC1BUF2_12 = 12;
    sbit  ADC1BUF2_12_bit at ADC1BUF2.B12;
    const register unsigned short int ADC1BUF2_11 = 11;
    sbit  ADC1BUF2_11_bit at ADC1BUF2.B11;
    const register unsigned short int ADC1BUF2_10 = 10;
    sbit  ADC1BUF2_10_bit at ADC1BUF2.B10;
    const register unsigned short int ADC1BUF2_9 = 9;
    sbit  ADC1BUF2_9_bit at ADC1BUF2.B9;
    const register unsigned short int ADC1BUF2_8 = 8;
    sbit  ADC1BUF2_8_bit at ADC1BUF2.B8;
    const register unsigned short int ADC1BUF2_7 = 7;
    sbit  ADC1BUF2_7_bit at ADC1BUF2.B7;
    const register unsigned short int ADC1BUF2_6 = 6;
    sbit  ADC1BUF2_6_bit at ADC1BUF2.B6;
    const register unsigned short int ADC1BUF2_5 = 5;
    sbit  ADC1BUF2_5_bit at ADC1BUF2.B5;
    const register unsigned short int ADC1BUF2_4 = 4;
    sbit  ADC1BUF2_4_bit at ADC1BUF2.B4;
    const register unsigned short int ADC1BUF2_3 = 3;
    sbit  ADC1BUF2_3_bit at ADC1BUF2.B3;
    const register unsigned short int ADC1BUF2_2 = 2;
    sbit  ADC1BUF2_2_bit at ADC1BUF2.B2;
    const register unsigned short int ADC1BUF2_1 = 1;
    sbit  ADC1BUF2_1_bit at ADC1BUF2.B1;
    const register unsigned short int ADC1BUF2_0 = 0;
    sbit  ADC1BUF2_0_bit at ADC1BUF2.B0;

    // ADC1BUF3 bits
    const register unsigned short int ADC1BUF3_15 = 15;
    sbit  ADC1BUF3_15_bit at ADC1BUF3.B15;
    const register unsigned short int ADC1BUF3_14 = 14;
    sbit  ADC1BUF3_14_bit at ADC1BUF3.B14;
    const register unsigned short int ADC1BUF3_13 = 13;
    sbit  ADC1BUF3_13_bit at ADC1BUF3.B13;
    const register unsigned short int ADC1BUF3_12 = 12;
    sbit  ADC1BUF3_12_bit at ADC1BUF3.B12;
    const register unsigned short int ADC1BUF3_11 = 11;
    sbit  ADC1BUF3_11_bit at ADC1BUF3.B11;
    const register unsigned short int ADC1BUF3_10 = 10;
    sbit  ADC1BUF3_10_bit at ADC1BUF3.B10;
    const register unsigned short int ADC1BUF3_9 = 9;
    sbit  ADC1BUF3_9_bit at ADC1BUF3.B9;
    const register unsigned short int ADC1BUF3_8 = 8;
    sbit  ADC1BUF3_8_bit at ADC1BUF3.B8;
    const register unsigned short int ADC1BUF3_7 = 7;
    sbit  ADC1BUF3_7_bit at ADC1BUF3.B7;
    const register unsigned short int ADC1BUF3_6 = 6;
    sbit  ADC1BUF3_6_bit at ADC1BUF3.B6;
    const register unsigned short int ADC1BUF3_5 = 5;
    sbit  ADC1BUF3_5_bit at ADC1BUF3.B5;
    const register unsigned short int ADC1BUF3_4 = 4;
    sbit  ADC1BUF3_4_bit at ADC1BUF3.B4;
    const register unsigned short int ADC1BUF3_3 = 3;
    sbit  ADC1BUF3_3_bit at ADC1BUF3.B3;
    const register unsigned short int ADC1BUF3_2 = 2;
    sbit  ADC1BUF3_2_bit at ADC1BUF3.B2;
    const register unsigned short int ADC1BUF3_1 = 1;
    sbit  ADC1BUF3_1_bit at ADC1BUF3.B1;
    const register unsigned short int ADC1BUF3_0 = 0;
    sbit  ADC1BUF3_0_bit at ADC1BUF3.B0;

    // ADC1BUF4 bits
    const register unsigned short int ADC1BUF4_15 = 15;
    sbit  ADC1BUF4_15_bit at ADC1BUF4.B15;
    const register unsigned short int ADC1BUF4_14 = 14;
    sbit  ADC1BUF4_14_bit at ADC1BUF4.B14;
    const register unsigned short int ADC1BUF4_13 = 13;
    sbit  ADC1BUF4_13_bit at ADC1BUF4.B13;
    const register unsigned short int ADC1BUF4_12 = 12;
    sbit  ADC1BUF4_12_bit at ADC1BUF4.B12;
    const register unsigned short int ADC1BUF4_11 = 11;
    sbit  ADC1BUF4_11_bit at ADC1BUF4.B11;
    const register unsigned short int ADC1BUF4_10 = 10;
    sbit  ADC1BUF4_10_bit at ADC1BUF4.B10;
    const register unsigned short int ADC1BUF4_9 = 9;
    sbit  ADC1BUF4_9_bit at ADC1BUF4.B9;
    const register unsigned short int ADC1BUF4_8 = 8;
    sbit  ADC1BUF4_8_bit at ADC1BUF4.B8;
    const register unsigned short int ADC1BUF4_7 = 7;
    sbit  ADC1BUF4_7_bit at ADC1BUF4.B7;
    const register unsigned short int ADC1BUF4_6 = 6;
    sbit  ADC1BUF4_6_bit at ADC1BUF4.B6;
    const register unsigned short int ADC1BUF4_5 = 5;
    sbit  ADC1BUF4_5_bit at ADC1BUF4.B5;
    const register unsigned short int ADC1BUF4_4 = 4;
    sbit  ADC1BUF4_4_bit at ADC1BUF4.B4;
    const register unsigned short int ADC1BUF4_3 = 3;
    sbit  ADC1BUF4_3_bit at ADC1BUF4.B3;
    const register unsigned short int ADC1BUF4_2 = 2;
    sbit  ADC1BUF4_2_bit at ADC1BUF4.B2;
    const register unsigned short int ADC1BUF4_1 = 1;
    sbit  ADC1BUF4_1_bit at ADC1BUF4.B1;
    const register unsigned short int ADC1BUF4_0 = 0;
    sbit  ADC1BUF4_0_bit at ADC1BUF4.B0;

    // ADC1BUF5 bits
    const register unsigned short int ADC1BUF5_15 = 15;
    sbit  ADC1BUF5_15_bit at ADC1BUF5.B15;
    const register unsigned short int ADC1BUF5_14 = 14;
    sbit  ADC1BUF5_14_bit at ADC1BUF5.B14;
    const register unsigned short int ADC1BUF5_13 = 13;
    sbit  ADC1BUF5_13_bit at ADC1BUF5.B13;
    const register unsigned short int ADC1BUF5_12 = 12;
    sbit  ADC1BUF5_12_bit at ADC1BUF5.B12;
    const register unsigned short int ADC1BUF5_11 = 11;
    sbit  ADC1BUF5_11_bit at ADC1BUF5.B11;
    const register unsigned short int ADC1BUF5_10 = 10;
    sbit  ADC1BUF5_10_bit at ADC1BUF5.B10;
    const register unsigned short int ADC1BUF5_9 = 9;
    sbit  ADC1BUF5_9_bit at ADC1BUF5.B9;
    const register unsigned short int ADC1BUF5_8 = 8;
    sbit  ADC1BUF5_8_bit at ADC1BUF5.B8;
    const register unsigned short int ADC1BUF5_7 = 7;
    sbit  ADC1BUF5_7_bit at ADC1BUF5.B7;
    const register unsigned short int ADC1BUF5_6 = 6;
    sbit  ADC1BUF5_6_bit at ADC1BUF5.B6;
    const register unsigned short int ADC1BUF5_5 = 5;
    sbit  ADC1BUF5_5_bit at ADC1BUF5.B5;
    const register unsigned short int ADC1BUF5_4 = 4;
    sbit  ADC1BUF5_4_bit at ADC1BUF5.B4;
    const register unsigned short int ADC1BUF5_3 = 3;
    sbit  ADC1BUF5_3_bit at ADC1BUF5.B3;
    const register unsigned short int ADC1BUF5_2 = 2;
    sbit  ADC1BUF5_2_bit at ADC1BUF5.B2;
    const register unsigned short int ADC1BUF5_1 = 1;
    sbit  ADC1BUF5_1_bit at ADC1BUF5.B1;
    const register unsigned short int ADC1BUF5_0 = 0;
    sbit  ADC1BUF5_0_bit at ADC1BUF5.B0;

    // ADC1BUF6 bits
    const register unsigned short int ADC1BUF6_15 = 15;
    sbit  ADC1BUF6_15_bit at ADC1BUF6.B15;
    const register unsigned short int ADC1BUF6_14 = 14;
    sbit  ADC1BUF6_14_bit at ADC1BUF6.B14;
    const register unsigned short int ADC1BUF6_13 = 13;
    sbit  ADC1BUF6_13_bit at ADC1BUF6.B13;
    const register unsigned short int ADC1BUF6_12 = 12;
    sbit  ADC1BUF6_12_bit at ADC1BUF6.B12;
    const register unsigned short int ADC1BUF6_11 = 11;
    sbit  ADC1BUF6_11_bit at ADC1BUF6.B11;
    const register unsigned short int ADC1BUF6_10 = 10;
    sbit  ADC1BUF6_10_bit at ADC1BUF6.B10;
    const register unsigned short int ADC1BUF6_9 = 9;
    sbit  ADC1BUF6_9_bit at ADC1BUF6.B9;
    const register unsigned short int ADC1BUF6_8 = 8;
    sbit  ADC1BUF6_8_bit at ADC1BUF6.B8;
    const register unsigned short int ADC1BUF6_7 = 7;
    sbit  ADC1BUF6_7_bit at ADC1BUF6.B7;
    const register unsigned short int ADC1BUF6_6 = 6;
    sbit  ADC1BUF6_6_bit at ADC1BUF6.B6;
    const register unsigned short int ADC1BUF6_5 = 5;
    sbit  ADC1BUF6_5_bit at ADC1BUF6.B5;
    const register unsigned short int ADC1BUF6_4 = 4;
    sbit  ADC1BUF6_4_bit at ADC1BUF6.B4;
    const register unsigned short int ADC1BUF6_3 = 3;
    sbit  ADC1BUF6_3_bit at ADC1BUF6.B3;
    const register unsigned short int ADC1BUF6_2 = 2;
    sbit  ADC1BUF6_2_bit at ADC1BUF6.B2;
    const register unsigned short int ADC1BUF6_1 = 1;
    sbit  ADC1BUF6_1_bit at ADC1BUF6.B1;
    const register unsigned short int ADC1BUF6_0 = 0;
    sbit  ADC1BUF6_0_bit at ADC1BUF6.B0;

    // ADC1BUF7 bits
    const register unsigned short int ADC1BUF7_15 = 15;
    sbit  ADC1BUF7_15_bit at ADC1BUF7.B15;
    const register unsigned short int ADC1BUF7_14 = 14;
    sbit  ADC1BUF7_14_bit at ADC1BUF7.B14;
    const register unsigned short int ADC1BUF7_13 = 13;
    sbit  ADC1BUF7_13_bit at ADC1BUF7.B13;
    const register unsigned short int ADC1BUF7_12 = 12;
    sbit  ADC1BUF7_12_bit at ADC1BUF7.B12;
    const register unsigned short int ADC1BUF7_11 = 11;
    sbit  ADC1BUF7_11_bit at ADC1BUF7.B11;
    const register unsigned short int ADC1BUF7_10 = 10;
    sbit  ADC1BUF7_10_bit at ADC1BUF7.B10;
    const register unsigned short int ADC1BUF7_9 = 9;
    sbit  ADC1BUF7_9_bit at ADC1BUF7.B9;
    const register unsigned short int ADC1BUF7_8 = 8;
    sbit  ADC1BUF7_8_bit at ADC1BUF7.B8;
    const register unsigned short int ADC1BUF7_7 = 7;
    sbit  ADC1BUF7_7_bit at ADC1BUF7.B7;
    const register unsigned short int ADC1BUF7_6 = 6;
    sbit  ADC1BUF7_6_bit at ADC1BUF7.B6;
    const register unsigned short int ADC1BUF7_5 = 5;
    sbit  ADC1BUF7_5_bit at ADC1BUF7.B5;
    const register unsigned short int ADC1BUF7_4 = 4;
    sbit  ADC1BUF7_4_bit at ADC1BUF7.B4;
    const register unsigned short int ADC1BUF7_3 = 3;
    sbit  ADC1BUF7_3_bit at ADC1BUF7.B3;
    const register unsigned short int ADC1BUF7_2 = 2;
    sbit  ADC1BUF7_2_bit at ADC1BUF7.B2;
    const register unsigned short int ADC1BUF7_1 = 1;
    sbit  ADC1BUF7_1_bit at ADC1BUF7.B1;
    const register unsigned short int ADC1BUF7_0 = 0;
    sbit  ADC1BUF7_0_bit at ADC1BUF7.B0;

    // ADC1BUF8 bits
    const register unsigned short int ADC1BUF8_15 = 15;
    sbit  ADC1BUF8_15_bit at ADC1BUF8.B15;
    const register unsigned short int ADC1BUF8_14 = 14;
    sbit  ADC1BUF8_14_bit at ADC1BUF8.B14;
    const register unsigned short int ADC1BUF8_13 = 13;
    sbit  ADC1BUF8_13_bit at ADC1BUF8.B13;
    const register unsigned short int ADC1BUF8_12 = 12;
    sbit  ADC1BUF8_12_bit at ADC1BUF8.B12;
    const register unsigned short int ADC1BUF8_11 = 11;
    sbit  ADC1BUF8_11_bit at ADC1BUF8.B11;
    const register unsigned short int ADC1BUF8_10 = 10;
    sbit  ADC1BUF8_10_bit at ADC1BUF8.B10;
    const register unsigned short int ADC1BUF8_9 = 9;
    sbit  ADC1BUF8_9_bit at ADC1BUF8.B9;
    const register unsigned short int ADC1BUF8_8 = 8;
    sbit  ADC1BUF8_8_bit at ADC1BUF8.B8;
    const register unsigned short int ADC1BUF8_7 = 7;
    sbit  ADC1BUF8_7_bit at ADC1BUF8.B7;
    const register unsigned short int ADC1BUF8_6 = 6;
    sbit  ADC1BUF8_6_bit at ADC1BUF8.B6;
    const register unsigned short int ADC1BUF8_5 = 5;
    sbit  ADC1BUF8_5_bit at ADC1BUF8.B5;
    const register unsigned short int ADC1BUF8_4 = 4;
    sbit  ADC1BUF8_4_bit at ADC1BUF8.B4;
    const register unsigned short int ADC1BUF8_3 = 3;
    sbit  ADC1BUF8_3_bit at ADC1BUF8.B3;
    const register unsigned short int ADC1BUF8_2 = 2;
    sbit  ADC1BUF8_2_bit at ADC1BUF8.B2;
    const register unsigned short int ADC1BUF8_1 = 1;
    sbit  ADC1BUF8_1_bit at ADC1BUF8.B1;
    const register unsigned short int ADC1BUF8_0 = 0;
    sbit  ADC1BUF8_0_bit at ADC1BUF8.B0;

    // ADC1BUF9 bits
    const register unsigned short int ADC1BUF9_15 = 15;
    sbit  ADC1BUF9_15_bit at ADC1BUF9.B15;
    const register unsigned short int ADC1BUF9_14 = 14;
    sbit  ADC1BUF9_14_bit at ADC1BUF9.B14;
    const register unsigned short int ADC1BUF9_13 = 13;
    sbit  ADC1BUF9_13_bit at ADC1BUF9.B13;
    const register unsigned short int ADC1BUF9_12 = 12;
    sbit  ADC1BUF9_12_bit at ADC1BUF9.B12;
    const register unsigned short int ADC1BUF9_11 = 11;
    sbit  ADC1BUF9_11_bit at ADC1BUF9.B11;
    const register unsigned short int ADC1BUF9_10 = 10;
    sbit  ADC1BUF9_10_bit at ADC1BUF9.B10;
    const register unsigned short int ADC1BUF9_9 = 9;
    sbit  ADC1BUF9_9_bit at ADC1BUF9.B9;
    const register unsigned short int ADC1BUF9_8 = 8;
    sbit  ADC1BUF9_8_bit at ADC1BUF9.B8;
    const register unsigned short int ADC1BUF9_7 = 7;
    sbit  ADC1BUF9_7_bit at ADC1BUF9.B7;
    const register unsigned short int ADC1BUF9_6 = 6;
    sbit  ADC1BUF9_6_bit at ADC1BUF9.B6;
    const register unsigned short int ADC1BUF9_5 = 5;
    sbit  ADC1BUF9_5_bit at ADC1BUF9.B5;
    const register unsigned short int ADC1BUF9_4 = 4;
    sbit  ADC1BUF9_4_bit at ADC1BUF9.B4;
    const register unsigned short int ADC1BUF9_3 = 3;
    sbit  ADC1BUF9_3_bit at ADC1BUF9.B3;
    const register unsigned short int ADC1BUF9_2 = 2;
    sbit  ADC1BUF9_2_bit at ADC1BUF9.B2;
    const register unsigned short int ADC1BUF9_1 = 1;
    sbit  ADC1BUF9_1_bit at ADC1BUF9.B1;
    const register unsigned short int ADC1BUF9_0 = 0;
    sbit  ADC1BUF9_0_bit at ADC1BUF9.B0;

    // ADC1BUFA bits
    const register unsigned short int ADC1BUFA_15 = 15;
    sbit  ADC1BUFA_15_bit at ADC1BUFA.B15;
    const register unsigned short int ADC1BUFA_14 = 14;
    sbit  ADC1BUFA_14_bit at ADC1BUFA.B14;
    const register unsigned short int ADC1BUFA_13 = 13;
    sbit  ADC1BUFA_13_bit at ADC1BUFA.B13;
    const register unsigned short int ADC1BUFA_12 = 12;
    sbit  ADC1BUFA_12_bit at ADC1BUFA.B12;
    const register unsigned short int ADC1BUFA_11 = 11;
    sbit  ADC1BUFA_11_bit at ADC1BUFA.B11;
    const register unsigned short int ADC1BUFA_10 = 10;
    sbit  ADC1BUFA_10_bit at ADC1BUFA.B10;
    const register unsigned short int ADC1BUFA_9 = 9;
    sbit  ADC1BUFA_9_bit at ADC1BUFA.B9;
    const register unsigned short int ADC1BUFA_8 = 8;
    sbit  ADC1BUFA_8_bit at ADC1BUFA.B8;
    const register unsigned short int ADC1BUFA_7 = 7;
    sbit  ADC1BUFA_7_bit at ADC1BUFA.B7;
    const register unsigned short int ADC1BUFA_6 = 6;
    sbit  ADC1BUFA_6_bit at ADC1BUFA.B6;
    const register unsigned short int ADC1BUFA_5 = 5;
    sbit  ADC1BUFA_5_bit at ADC1BUFA.B5;
    const register unsigned short int ADC1BUFA_4 = 4;
    sbit  ADC1BUFA_4_bit at ADC1BUFA.B4;
    const register unsigned short int ADC1BUFA_3 = 3;
    sbit  ADC1BUFA_3_bit at ADC1BUFA.B3;
    const register unsigned short int ADC1BUFA_2 = 2;
    sbit  ADC1BUFA_2_bit at ADC1BUFA.B2;
    const register unsigned short int ADC1BUFA_1 = 1;
    sbit  ADC1BUFA_1_bit at ADC1BUFA.B1;
    const register unsigned short int ADC1BUFA_0 = 0;
    sbit  ADC1BUFA_0_bit at ADC1BUFA.B0;

    // ADC1BUFB bits
    const register unsigned short int ADC1BUFB_15 = 15;
    sbit  ADC1BUFB_15_bit at ADC1BUFB.B15;
    const register unsigned short int ADC1BUFB_14 = 14;
    sbit  ADC1BUFB_14_bit at ADC1BUFB.B14;
    const register unsigned short int ADC1BUFB_13 = 13;
    sbit  ADC1BUFB_13_bit at ADC1BUFB.B13;
    const register unsigned short int ADC1BUFB_12 = 12;
    sbit  ADC1BUFB_12_bit at ADC1BUFB.B12;
    const register unsigned short int ADC1BUFB_11 = 11;
    sbit  ADC1BUFB_11_bit at ADC1BUFB.B11;
    const register unsigned short int ADC1BUFB_10 = 10;
    sbit  ADC1BUFB_10_bit at ADC1BUFB.B10;
    const register unsigned short int ADC1BUFB_9 = 9;
    sbit  ADC1BUFB_9_bit at ADC1BUFB.B9;
    const register unsigned short int ADC1BUFB_8 = 8;
    sbit  ADC1BUFB_8_bit at ADC1BUFB.B8;
    const register unsigned short int ADC1BUFB_7 = 7;
    sbit  ADC1BUFB_7_bit at ADC1BUFB.B7;
    const register unsigned short int ADC1BUFB_6 = 6;
    sbit  ADC1BUFB_6_bit at ADC1BUFB.B6;
    const register unsigned short int ADC1BUFB_5 = 5;
    sbit  ADC1BUFB_5_bit at ADC1BUFB.B5;
    const register unsigned short int ADC1BUFB_4 = 4;
    sbit  ADC1BUFB_4_bit at ADC1BUFB.B4;
    const register unsigned short int ADC1BUFB_3 = 3;
    sbit  ADC1BUFB_3_bit at ADC1BUFB.B3;
    const register unsigned short int ADC1BUFB_2 = 2;
    sbit  ADC1BUFB_2_bit at ADC1BUFB.B2;
    const register unsigned short int ADC1BUFB_1 = 1;
    sbit  ADC1BUFB_1_bit at ADC1BUFB.B1;
    const register unsigned short int ADC1BUFB_0 = 0;
    sbit  ADC1BUFB_0_bit at ADC1BUFB.B0;

    // ADC1BUFC bits
    const register unsigned short int ADC1BUFC_15 = 15;
    sbit  ADC1BUFC_15_bit at ADC1BUFC.B15;
    const register unsigned short int ADC1BUFC_14 = 14;
    sbit  ADC1BUFC_14_bit at ADC1BUFC.B14;
    const register unsigned short int ADC1BUFC_13 = 13;
    sbit  ADC1BUFC_13_bit at ADC1BUFC.B13;
    const register unsigned short int ADC1BUFC_12 = 12;
    sbit  ADC1BUFC_12_bit at ADC1BUFC.B12;
    const register unsigned short int ADC1BUFC_11 = 11;
    sbit  ADC1BUFC_11_bit at ADC1BUFC.B11;
    const register unsigned short int ADC1BUFC_10 = 10;
    sbit  ADC1BUFC_10_bit at ADC1BUFC.B10;
    const register unsigned short int ADC1BUFC_9 = 9;
    sbit  ADC1BUFC_9_bit at ADC1BUFC.B9;
    const register unsigned short int ADC1BUFC_8 = 8;
    sbit  ADC1BUFC_8_bit at ADC1BUFC.B8;
    const register unsigned short int ADC1BUFC_7 = 7;
    sbit  ADC1BUFC_7_bit at ADC1BUFC.B7;
    const register unsigned short int ADC1BUFC_6 = 6;
    sbit  ADC1BUFC_6_bit at ADC1BUFC.B6;
    const register unsigned short int ADC1BUFC_5 = 5;
    sbit  ADC1BUFC_5_bit at ADC1BUFC.B5;
    const register unsigned short int ADC1BUFC_4 = 4;
    sbit  ADC1BUFC_4_bit at ADC1BUFC.B4;
    const register unsigned short int ADC1BUFC_3 = 3;
    sbit  ADC1BUFC_3_bit at ADC1BUFC.B3;
    const register unsigned short int ADC1BUFC_2 = 2;
    sbit  ADC1BUFC_2_bit at ADC1BUFC.B2;
    const register unsigned short int ADC1BUFC_1 = 1;
    sbit  ADC1BUFC_1_bit at ADC1BUFC.B1;
    const register unsigned short int ADC1BUFC_0 = 0;
    sbit  ADC1BUFC_0_bit at ADC1BUFC.B0;

    // ADC1BUFD bits
    const register unsigned short int ADC1BUFD_15 = 15;
    sbit  ADC1BUFD_15_bit at ADC1BUFD.B15;
    const register unsigned short int ADC1BUFD_14 = 14;
    sbit  ADC1BUFD_14_bit at ADC1BUFD.B14;
    const register unsigned short int ADC1BUFD_13 = 13;
    sbit  ADC1BUFD_13_bit at ADC1BUFD.B13;
    const register unsigned short int ADC1BUFD_12 = 12;
    sbit  ADC1BUFD_12_bit at ADC1BUFD.B12;
    const register unsigned short int ADC1BUFD_11 = 11;
    sbit  ADC1BUFD_11_bit at ADC1BUFD.B11;
    const register unsigned short int ADC1BUFD_10 = 10;
    sbit  ADC1BUFD_10_bit at ADC1BUFD.B10;
    const register unsigned short int ADC1BUFD_9 = 9;
    sbit  ADC1BUFD_9_bit at ADC1BUFD.B9;
    const register unsigned short int ADC1BUFD_8 = 8;
    sbit  ADC1BUFD_8_bit at ADC1BUFD.B8;
    const register unsigned short int ADC1BUFD_7 = 7;
    sbit  ADC1BUFD_7_bit at ADC1BUFD.B7;
    const register unsigned short int ADC1BUFD_6 = 6;
    sbit  ADC1BUFD_6_bit at ADC1BUFD.B6;
    const register unsigned short int ADC1BUFD_5 = 5;
    sbit  ADC1BUFD_5_bit at ADC1BUFD.B5;
    const register unsigned short int ADC1BUFD_4 = 4;
    sbit  ADC1BUFD_4_bit at ADC1BUFD.B4;
    const register unsigned short int ADC1BUFD_3 = 3;
    sbit  ADC1BUFD_3_bit at ADC1BUFD.B3;
    const register unsigned short int ADC1BUFD_2 = 2;
    sbit  ADC1BUFD_2_bit at ADC1BUFD.B2;
    const register unsigned short int ADC1BUFD_1 = 1;
    sbit  ADC1BUFD_1_bit at ADC1BUFD.B1;
    const register unsigned short int ADC1BUFD_0 = 0;
    sbit  ADC1BUFD_0_bit at ADC1BUFD.B0;

    // ADC1BUFE bits
    const register unsigned short int ADC1BUFE_15 = 15;
    sbit  ADC1BUFE_15_bit at ADC1BUFE.B15;
    const register unsigned short int ADC1BUFE_14 = 14;
    sbit  ADC1BUFE_14_bit at ADC1BUFE.B14;
    const register unsigned short int ADC1BUFE_13 = 13;
    sbit  ADC1BUFE_13_bit at ADC1BUFE.B13;
    const register unsigned short int ADC1BUFE_12 = 12;
    sbit  ADC1BUFE_12_bit at ADC1BUFE.B12;
    const register unsigned short int ADC1BUFE_11 = 11;
    sbit  ADC1BUFE_11_bit at ADC1BUFE.B11;
    const register unsigned short int ADC1BUFE_10 = 10;
    sbit  ADC1BUFE_10_bit at ADC1BUFE.B10;
    const register unsigned short int ADC1BUFE_9 = 9;
    sbit  ADC1BUFE_9_bit at ADC1BUFE.B9;
    const register unsigned short int ADC1BUFE_8 = 8;
    sbit  ADC1BUFE_8_bit at ADC1BUFE.B8;
    const register unsigned short int ADC1BUFE_7 = 7;
    sbit  ADC1BUFE_7_bit at ADC1BUFE.B7;
    const register unsigned short int ADC1BUFE_6 = 6;
    sbit  ADC1BUFE_6_bit at ADC1BUFE.B6;
    const register unsigned short int ADC1BUFE_5 = 5;
    sbit  ADC1BUFE_5_bit at ADC1BUFE.B5;
    const register unsigned short int ADC1BUFE_4 = 4;
    sbit  ADC1BUFE_4_bit at ADC1BUFE.B4;
    const register unsigned short int ADC1BUFE_3 = 3;
    sbit  ADC1BUFE_3_bit at ADC1BUFE.B3;
    const register unsigned short int ADC1BUFE_2 = 2;
    sbit  ADC1BUFE_2_bit at ADC1BUFE.B2;
    const register unsigned short int ADC1BUFE_1 = 1;
    sbit  ADC1BUFE_1_bit at ADC1BUFE.B1;
    const register unsigned short int ADC1BUFE_0 = 0;
    sbit  ADC1BUFE_0_bit at ADC1BUFE.B0;

    // ADC1BUFF bits
    const register unsigned short int ADC1BUFF_15 = 15;
    sbit  ADC1BUFF_15_bit at ADC1BUFF.B15;
    const register unsigned short int ADC1BUFF_14 = 14;
    sbit  ADC1BUFF_14_bit at ADC1BUFF.B14;
    const register unsigned short int ADC1BUFF_13 = 13;
    sbit  ADC1BUFF_13_bit at ADC1BUFF.B13;
    const register unsigned short int ADC1BUFF_12 = 12;
    sbit  ADC1BUFF_12_bit at ADC1BUFF.B12;
    const register unsigned short int ADC1BUFF_11 = 11;
    sbit  ADC1BUFF_11_bit at ADC1BUFF.B11;
    const register unsigned short int ADC1BUFF_10 = 10;
    sbit  ADC1BUFF_10_bit at ADC1BUFF.B10;
    const register unsigned short int ADC1BUFF_9 = 9;
    sbit  ADC1BUFF_9_bit at ADC1BUFF.B9;
    const register unsigned short int ADC1BUFF_8 = 8;
    sbit  ADC1BUFF_8_bit at ADC1BUFF.B8;
    const register unsigned short int ADC1BUFF_7 = 7;
    sbit  ADC1BUFF_7_bit at ADC1BUFF.B7;
    const register unsigned short int ADC1BUFF_6 = 6;
    sbit  ADC1BUFF_6_bit at ADC1BUFF.B6;
    const register unsigned short int ADC1BUFF_5 = 5;
    sbit  ADC1BUFF_5_bit at ADC1BUFF.B5;
    const register unsigned short int ADC1BUFF_4 = 4;
    sbit  ADC1BUFF_4_bit at ADC1BUFF.B4;
    const register unsigned short int ADC1BUFF_3 = 3;
    sbit  ADC1BUFF_3_bit at ADC1BUFF.B3;
    const register unsigned short int ADC1BUFF_2 = 2;
    sbit  ADC1BUFF_2_bit at ADC1BUFF.B2;
    const register unsigned short int ADC1BUFF_1 = 1;
    sbit  ADC1BUFF_1_bit at ADC1BUFF.B1;
    const register unsigned short int ADC1BUFF_0 = 0;
    sbit  ADC1BUFF_0_bit at ADC1BUFF.B0;

    // AD1CON1 bits
    const register unsigned short int ADON = 15;
    sbit  ADON_bit at AD1CON1.B15;
    sbit  ADON_AD1CON1_bit at AD1CON1.B15;
    const register unsigned short int ADSIDL = 13;
    sbit  ADSIDL_bit at AD1CON1.B13;
    sbit  ADSIDL_AD1CON1_bit at AD1CON1.B13;
    const register unsigned short int FORM_1 = 9;
    sbit  FORM_1_bit at AD1CON1.B9;
    sbit  FORM_1_AD1CON1_bit at AD1CON1.B9;
    const register unsigned short int FORM_0 = 8;
    sbit  FORM_0_bit at AD1CON1.B8;
    sbit  FORM_0_AD1CON1_bit at AD1CON1.B8;
    const register unsigned short int SSRC_2 = 7;
    sbit  SSRC_2_bit at AD1CON1.B7;
    sbit  SSRC_2_AD1CON1_bit at AD1CON1.B7;
    const register unsigned short int SSRC_1 = 6;
    sbit  SSRC_1_bit at AD1CON1.B6;
    sbit  SSRC_1_AD1CON1_bit at AD1CON1.B6;
    const register unsigned short int SSRC_0 = 5;
    sbit  SSRC_0_bit at AD1CON1.B5;
    sbit  SSRC_0_AD1CON1_bit at AD1CON1.B5;
    const register unsigned short int ASAM = 2;
    sbit  ASAM_bit at AD1CON1.B2;
    sbit  ASAM_AD1CON1_bit at AD1CON1.B2;
    const register unsigned short int SAMP = 1;
    sbit  SAMP_bit at AD1CON1.B1;
    sbit  SAMP_AD1CON1_bit at AD1CON1.B1;
    const register unsigned short int DONE = 0;
    sbit  DONE_bit at AD1CON1.B0;
    sbit  DONE_AD1CON1_bit at AD1CON1.B0;

    // AD1CON2 bits
    const register unsigned short int VCFG_2 = 15;
    sbit  VCFG_2_bit at AD1CON2.B15;
    sbit  VCFG_2_AD1CON2_bit at AD1CON2.B15;
    sbit  VCFG_2_ADCON2_bit at ADCON2.B15;
    const register unsigned short int VCFG_1 = 14;
    sbit  VCFG_1_bit at AD1CON2.B14;
    sbit  VCFG_1_AD1CON2_bit at AD1CON2.B14;
    sbit  VCFG_1_ADCON2_bit at ADCON2.B14;
    const register unsigned short int VCFG_0 = 13;
    sbit  VCFG_0_bit at AD1CON2.B13;
    sbit  VCFG_0_AD1CON2_bit at AD1CON2.B13;
    sbit  VCFG_0_ADCON2_bit at ADCON2.B13;
    const register unsigned short int CSCNA = 10;
    sbit  CSCNA_bit at AD1CON2.B10;
    sbit  CSCNA_AD1CON2_bit at AD1CON2.B10;
    sbit  CSCNA_ADCON2_bit at ADCON2.B10;
    const register unsigned short int BUFS = 7;
    sbit  BUFS_bit at AD1CON2.B7;
    sbit  BUFS_AD1CON2_bit at AD1CON2.B7;
    sbit  BUFS_ADCON2_bit at ADCON2.B7;
    const register unsigned short int SMPI_3 = 5;
    sbit  SMPI_3_bit at AD1CON2.B5;
    sbit  SMPI_3_AD1CON2_bit at AD1CON2.B5;
    sbit  SMPI_3_ADCON2_bit at ADCON2.B5;
    const register unsigned short int SMPI_2 = 4;
    sbit  SMPI_2_bit at AD1CON2.B4;
    sbit  SMPI_2_AD1CON2_bit at AD1CON2.B4;
    sbit  SMPI_2_ADCON2_bit at ADCON2.B4;
    const register unsigned short int SMPI_1 = 3;
    sbit  SMPI_1_bit at AD1CON2.B3;
    sbit  SMPI_1_AD1CON2_bit at AD1CON2.B3;
    sbit  SMPI_1_ADCON2_bit at ADCON2.B3;
    const register unsigned short int SMPI_0 = 2;
    sbit  SMPI_0_bit at AD1CON2.B2;
    sbit  SMPI_0_AD1CON2_bit at AD1CON2.B2;
    sbit  SMPI_0_ADCON2_bit at ADCON2.B2;
    const register unsigned short int BUFM = 1;
    sbit  BUFM_bit at AD1CON2.B1;
    sbit  BUFM_AD1CON2_bit at AD1CON2.B1;
    sbit  BUFM_ADCON2_bit at ADCON2.B1;
    const register unsigned short int ALTS = 0;
    sbit  ALTS_bit at AD1CON2.B0;
    sbit  ALTS_AD1CON2_bit at AD1CON2.B0;
    sbit  ALTS_ADCON2_bit at ADCON2.B0;

    // AD1CON3 bits
    const register unsigned short int ADRC = 15;
    sbit  ADRC_bit at AD1CON3.B15;
    sbit  ADRC_AD1CON3_bit at AD1CON3.B15;
    sbit  ADRC_ADCON3_bit at ADCON3.B15;
    const register unsigned short int SAMC_4 = 12;
    sbit  SAMC_4_bit at AD1CON3.B12;
    sbit  SAMC_4_AD1CON3_bit at AD1CON3.B12;
    sbit  SAMC_4_ADCON3_bit at ADCON3.B12;
    const register unsigned short int SAMC_3 = 11;
    sbit  SAMC_3_bit at AD1CON3.B11;
    sbit  SAMC_3_AD1CON3_bit at AD1CON3.B11;
    sbit  SAMC_3_ADCON3_bit at ADCON3.B11;
    const register unsigned short int SAMC_2 = 10;
    sbit  SAMC_2_bit at AD1CON3.B10;
    sbit  SAMC_2_AD1CON3_bit at AD1CON3.B10;
    sbit  SAMC_2_ADCON3_bit at ADCON3.B10;
    const register unsigned short int SAMC_1 = 9;
    sbit  SAMC_1_bit at AD1CON3.B9;
    sbit  SAMC_1_AD1CON3_bit at AD1CON3.B9;
    sbit  SAMC_1_ADCON3_bit at ADCON3.B9;
    const register unsigned short int SAMC_0 = 8;
    sbit  SAMC_0_bit at AD1CON3.B8;
    sbit  SAMC_0_AD1CON3_bit at AD1CON3.B8;
    sbit  SAMC_0_ADCON3_bit at ADCON3.B8;
    const register unsigned short int ADCS_7 = 7;
    sbit  ADCS_7_bit at AD1CON3.B7;
    sbit  ADCS_7_AD1CON3_bit at AD1CON3.B7;
    sbit  ADCS_7_ADCON3_bit at ADCON3.B7;
    const register unsigned short int ADCS_6 = 6;
    sbit  ADCS_6_bit at AD1CON3.B6;
    sbit  ADCS_6_AD1CON3_bit at AD1CON3.B6;
    sbit  ADCS_6_ADCON3_bit at ADCON3.B6;
    const register unsigned short int ADCS_5 = 5;
    sbit  ADCS_5_bit at AD1CON3.B5;
    sbit  ADCS_5_AD1CON3_bit at AD1CON3.B5;
    sbit  ADCS_5_ADCON3_bit at ADCON3.B5;
    const register unsigned short int ADCS_4 = 4;
    sbit  ADCS_4_bit at AD1CON3.B4;
    sbit  ADCS_4_AD1CON3_bit at AD1CON3.B4;
    sbit  ADCS_4_ADCON3_bit at ADCON3.B4;
    const register unsigned short int ADCS_3 = 3;
    sbit  ADCS_3_bit at AD1CON3.B3;
    sbit  ADCS_3_AD1CON3_bit at AD1CON3.B3;
    sbit  ADCS_3_ADCON3_bit at ADCON3.B3;
    const register unsigned short int ADCS_2 = 2;
    sbit  ADCS_2_bit at AD1CON3.B2;
    sbit  ADCS_2_AD1CON3_bit at AD1CON3.B2;
    sbit  ADCS_2_ADCON3_bit at ADCON3.B2;
    const register unsigned short int ADCS_1 = 1;
    sbit  ADCS_1_bit at AD1CON3.B1;
    sbit  ADCS_1_AD1CON3_bit at AD1CON3.B1;
    sbit  ADCS_1_ADCON3_bit at ADCON3.B1;
    const register unsigned short int ADCS_0 = 0;
    sbit  ADCS_0_bit at AD1CON3.B0;
    sbit  ADCS_0_AD1CON3_bit at AD1CON3.B0;
    sbit  ADCS_0_ADCON3_bit at ADCON3.B0;

    // AD1CHS bits
    const register unsigned short int CH0NB = 15;
    sbit  CH0NB_bit at AD1CHS.B15;
    sbit  CH0NB_AD1CHS_bit at AD1CHS.B15;
    sbit  CH0NB_ADCHS_bit at ADCHS.B15;
    const register unsigned short int CH0SB_4 = 12;
    sbit  CH0SB_4_bit at AD1CHS.B12;
    sbit  CH0SB_4_AD1CHS_bit at AD1CHS.B12;
    sbit  CH0SB_4_ADCHS_bit at ADCHS.B12;
    const register unsigned short int CH0SB_3 = 11;
    sbit  CH0SB_3_bit at AD1CHS.B11;
    sbit  CH0SB_3_AD1CHS_bit at AD1CHS.B11;
    sbit  CH0SB_3_ADCHS_bit at ADCHS.B11;
    const register unsigned short int CH0SB_2 = 10;
    sbit  CH0SB_2_bit at AD1CHS.B10;
    sbit  CH0SB_2_AD1CHS_bit at AD1CHS.B10;
    sbit  CH0SB_2_ADCHS_bit at ADCHS.B10;
    const register unsigned short int CH0SB_1 = 9;
    sbit  CH0SB_1_bit at AD1CHS.B9;
    sbit  CH0SB_1_AD1CHS_bit at AD1CHS.B9;
    sbit  CH0SB_1_ADCHS_bit at ADCHS.B9;
    const register unsigned short int CH0SB_0 = 8;
    sbit  CH0SB_0_bit at AD1CHS.B8;
    sbit  CH0SB_0_AD1CHS_bit at AD1CHS.B8;
    sbit  CH0SB_0_ADCHS_bit at ADCHS.B8;
    const register unsigned short int CH0NA = 7;
    sbit  CH0NA_bit at AD1CHS.B7;
    sbit  CH0NA_AD1CHS_bit at AD1CHS.B7;
    sbit  CH0NA_ADCHS_bit at ADCHS.B7;
    const register unsigned short int CH0SA_4 = 4;
    sbit  CH0SA_4_bit at AD1CHS.B4;
    sbit  CH0SA_4_AD1CHS_bit at AD1CHS.B4;
    sbit  CH0SA_4_ADCHS_bit at ADCHS.B4;
    const register unsigned short int CH0SA_3 = 3;
    sbit  CH0SA_3_bit at AD1CHS.B3;
    sbit  CH0SA_3_AD1CHS_bit at AD1CHS.B3;
    sbit  CH0SA_3_ADCHS_bit at ADCHS.B3;
    const register unsigned short int CH0SA_2 = 2;
    sbit  CH0SA_2_bit at AD1CHS.B2;
    sbit  CH0SA_2_AD1CHS_bit at AD1CHS.B2;
    sbit  CH0SA_2_ADCHS_bit at ADCHS.B2;
    const register unsigned short int CH0SA_1 = 1;
    sbit  CH0SA_1_bit at AD1CHS.B1;
    sbit  CH0SA_1_AD1CHS_bit at AD1CHS.B1;
    sbit  CH0SA_1_ADCHS_bit at ADCHS.B1;
    const register unsigned short int CH0SA_0 = 0;
    sbit  CH0SA_0_bit at AD1CHS.B0;
    sbit  CH0SA_0_AD1CHS_bit at AD1CHS.B0;
    sbit  CH0SA_0_ADCHS_bit at ADCHS.B0;

    // AD1PCFG bits
    const register unsigned short int PCFG_15 = 15;
    sbit  PCFG_15_bit at AD1PCFG.B15;
    sbit  PCFG_15_AD1PCFG_bit at AD1PCFG.B15;
    sbit  PCFG_15_ADPCFG_bit at ADPCFG.B15;
    const register unsigned short int PCFG_14 = 14;
    sbit  PCFG_14_bit at AD1PCFG.B14;
    sbit  PCFG_14_AD1PCFG_bit at AD1PCFG.B14;
    sbit  PCFG_14_ADPCFG_bit at ADPCFG.B14;
    const register unsigned short int PCFG_13 = 13;
    sbit  PCFG_13_bit at AD1PCFG.B13;
    sbit  PCFG_13_AD1PCFG_bit at AD1PCFG.B13;
    sbit  PCFG_13_ADPCFG_bit at ADPCFG.B13;
    const register unsigned short int PCFG_12 = 12;
    sbit  PCFG_12_bit at AD1PCFG.B12;
    sbit  PCFG_12_AD1PCFG_bit at AD1PCFG.B12;
    sbit  PCFG_12_ADPCFG_bit at ADPCFG.B12;
    const register unsigned short int PCFG_11 = 11;
    sbit  PCFG_11_bit at AD1PCFG.B11;
    sbit  PCFG_11_AD1PCFG_bit at AD1PCFG.B11;
    sbit  PCFG_11_ADPCFG_bit at ADPCFG.B11;
    const register unsigned short int PCFG_10 = 10;
    sbit  PCFG_10_bit at AD1PCFG.B10;
    sbit  PCFG_10_AD1PCFG_bit at AD1PCFG.B10;
    sbit  PCFG_10_ADPCFG_bit at ADPCFG.B10;
    const register unsigned short int PCFG_9 = 9;
    sbit  PCFG_9_bit at AD1PCFG.B9;
    sbit  PCFG_9_AD1PCFG_bit at AD1PCFG.B9;
    sbit  PCFG_9_ADPCFG_bit at ADPCFG.B9;
    const register unsigned short int PCFG_8 = 8;
    sbit  PCFG_8_bit at AD1PCFG.B8;
    sbit  PCFG_8_AD1PCFG_bit at AD1PCFG.B8;
    sbit  PCFG_8_ADPCFG_bit at ADPCFG.B8;
    const register unsigned short int PCFG_7 = 7;
    sbit  PCFG_7_bit at AD1PCFG.B7;
    sbit  PCFG_7_AD1PCFG_bit at AD1PCFG.B7;
    sbit  PCFG_7_ADPCFG_bit at ADPCFG.B7;
    const register unsigned short int PCFG_6 = 6;
    sbit  PCFG_6_bit at AD1PCFG.B6;
    sbit  PCFG_6_AD1PCFG_bit at AD1PCFG.B6;
    sbit  PCFG_6_ADPCFG_bit at ADPCFG.B6;
    const register unsigned short int PCFG_5 = 5;
    sbit  PCFG_5_bit at AD1PCFG.B5;
    sbit  PCFG_5_AD1PCFG_bit at AD1PCFG.B5;
    sbit  PCFG_5_ADPCFG_bit at ADPCFG.B5;
    const register unsigned short int PCFG_4 = 4;
    sbit  PCFG_4_bit at AD1PCFG.B4;
    sbit  PCFG_4_AD1PCFG_bit at AD1PCFG.B4;
    sbit  PCFG_4_ADPCFG_bit at ADPCFG.B4;
    const register unsigned short int PCFG_3 = 3;
    sbit  PCFG_3_bit at AD1PCFG.B3;
    sbit  PCFG_3_AD1PCFG_bit at AD1PCFG.B3;
    sbit  PCFG_3_ADPCFG_bit at ADPCFG.B3;
    const register unsigned short int PCFG_2 = 2;
    sbit  PCFG_2_bit at AD1PCFG.B2;
    sbit  PCFG_2_AD1PCFG_bit at AD1PCFG.B2;
    sbit  PCFG_2_ADPCFG_bit at ADPCFG.B2;
    const register unsigned short int PCFG_1 = 1;
    sbit  PCFG_1_bit at AD1PCFG.B1;
    sbit  PCFG_1_AD1PCFG_bit at AD1PCFG.B1;
    sbit  PCFG_1_ADPCFG_bit at ADPCFG.B1;
    const register unsigned short int PCFG_0 = 0;
    sbit  PCFG_0_bit at AD1PCFG.B0;
    sbit  PCFG_0_AD1PCFG_bit at AD1PCFG.B0;
    sbit  PCFG_0_ADPCFG_bit at ADPCFG.B0;

    // AD1CSSL bits
    const register unsigned short int CSSL_15 = 15;
    sbit  CSSL_15_bit at AD1CSSL.B15;
    sbit  CSSL_15_AD1CSSL_bit at AD1CSSL.B15;
    sbit  CSSL_15_ADCSSL_bit at ADCSSL.B15;
    const register unsigned short int CSSL_14 = 14;
    sbit  CSSL_14_bit at AD1CSSL.B14;
    sbit  CSSL_14_AD1CSSL_bit at AD1CSSL.B14;
    sbit  CSSL_14_ADCSSL_bit at ADCSSL.B14;
    const register unsigned short int CSSL_13 = 13;
    sbit  CSSL_13_bit at AD1CSSL.B13;
    sbit  CSSL_13_AD1CSSL_bit at AD1CSSL.B13;
    sbit  CSSL_13_ADCSSL_bit at ADCSSL.B13;
    const register unsigned short int CSSL_12 = 12;
    sbit  CSSL_12_bit at AD1CSSL.B12;
    sbit  CSSL_12_AD1CSSL_bit at AD1CSSL.B12;
    sbit  CSSL_12_ADCSSL_bit at ADCSSL.B12;
    const register unsigned short int CSSL_11 = 11;
    sbit  CSSL_11_bit at AD1CSSL.B11;
    sbit  CSSL_11_AD1CSSL_bit at AD1CSSL.B11;
    sbit  CSSL_11_ADCSSL_bit at ADCSSL.B11;
    const register unsigned short int CSSL_10 = 10;
    sbit  CSSL_10_bit at AD1CSSL.B10;
    sbit  CSSL_10_AD1CSSL_bit at AD1CSSL.B10;
    sbit  CSSL_10_ADCSSL_bit at ADCSSL.B10;
    const register unsigned short int CSSL_9 = 9;
    sbit  CSSL_9_bit at AD1CSSL.B9;
    sbit  CSSL_9_AD1CSSL_bit at AD1CSSL.B9;
    sbit  CSSL_9_ADCSSL_bit at ADCSSL.B9;
    const register unsigned short int CSSL_8 = 8;
    sbit  CSSL_8_bit at AD1CSSL.B8;
    sbit  CSSL_8_AD1CSSL_bit at AD1CSSL.B8;
    sbit  CSSL_8_ADCSSL_bit at ADCSSL.B8;
    const register unsigned short int CSSL_7 = 7;
    sbit  CSSL_7_bit at AD1CSSL.B7;
    sbit  CSSL_7_AD1CSSL_bit at AD1CSSL.B7;
    sbit  CSSL_7_ADCSSL_bit at ADCSSL.B7;
    const register unsigned short int CSSL_6 = 6;
    sbit  CSSL_6_bit at AD1CSSL.B6;
    sbit  CSSL_6_AD1CSSL_bit at AD1CSSL.B6;
    sbit  CSSL_6_ADCSSL_bit at ADCSSL.B6;
    const register unsigned short int CSSL_5 = 5;
    sbit  CSSL_5_bit at AD1CSSL.B5;
    sbit  CSSL_5_AD1CSSL_bit at AD1CSSL.B5;
    sbit  CSSL_5_ADCSSL_bit at ADCSSL.B5;
    const register unsigned short int CSSL_4 = 4;
    sbit  CSSL_4_bit at AD1CSSL.B4;
    sbit  CSSL_4_AD1CSSL_bit at AD1CSSL.B4;
    sbit  CSSL_4_ADCSSL_bit at ADCSSL.B4;
    const register unsigned short int CSSL_3 = 3;
    sbit  CSSL_3_bit at AD1CSSL.B3;
    sbit  CSSL_3_AD1CSSL_bit at AD1CSSL.B3;
    sbit  CSSL_3_ADCSSL_bit at ADCSSL.B3;
    const register unsigned short int CSSL_2 = 2;
    sbit  CSSL_2_bit at AD1CSSL.B2;
    sbit  CSSL_2_AD1CSSL_bit at AD1CSSL.B2;
    sbit  CSSL_2_ADCSSL_bit at ADCSSL.B2;
    const register unsigned short int CSSL_1 = 1;
    sbit  CSSL_1_bit at AD1CSSL.B1;
    sbit  CSSL_1_AD1CSSL_bit at AD1CSSL.B1;
    sbit  CSSL_1_ADCSSL_bit at ADCSSL.B1;
    const register unsigned short int CSSL_0 = 0;
    sbit  CSSL_0_bit at AD1CSSL.B0;
    sbit  CSSL_0_AD1CSSL_bit at AD1CSSL.B0;
    sbit  CSSL_0_ADCSSL_bit at ADCSSL.B0;

    // CTMUCON bits
    const register unsigned short int CTMUEN = 15;
    sbit  CTMUEN_bit at CTMUCON.B15;
    const register unsigned short int CTMUSIDL = 13;
    sbit  CTMUSIDL_bit at CTMUCON.B13;
    const register unsigned short int TGEN = 12;
    sbit  TGEN_bit at CTMUCON.B12;
    const register unsigned short int EDGEN = 11;
    sbit  EDGEN_bit at CTMUCON.B11;
    const register unsigned short int EDGSEQEN = 10;
    sbit  EDGSEQEN_bit at CTMUCON.B10;
    const register unsigned short int IDISSEN = 9;
    sbit  IDISSEN_bit at CTMUCON.B9;
    const register unsigned short int CTTRIG = 8;
    sbit  CTTRIG_bit at CTMUCON.B8;
    const register unsigned short int EDG2POL = 7;
    sbit  EDG2POL_bit at CTMUCON.B7;
    const register unsigned short int EDG2SEL_1 = 6;
    sbit  EDG2SEL_1_bit at CTMUCON.B6;
    const register unsigned short int EDG2SEL_0 = 5;
    sbit  EDG2SEL_0_bit at CTMUCON.B5;
    const register unsigned short int EDG1POL = 4;
    sbit  EDG1POL_bit at CTMUCON.B4;
    const register unsigned short int EDG1SEL_1 = 3;
    sbit  EDG1SEL_1_bit at CTMUCON.B3;
    const register unsigned short int EDG1SEL_0 = 2;
    sbit  EDG1SEL_0_bit at CTMUCON.B2;
    const register unsigned short int EDG2STAT = 1;
    sbit  EDG2STAT_bit at CTMUCON.B1;
    const register unsigned short int EDG1STAT = 0;
    sbit  EDG1STAT_bit at CTMUCON.B0;

    // CTMUICON bits
    const register unsigned short int ITRIM_5 = 15;
    sbit  ITRIM_5_bit at CTMUICON.B15;
    const register unsigned short int ITRIM_4 = 14;
    sbit  ITRIM_4_bit at CTMUICON.B14;
    const register unsigned short int ITRIM_3 = 13;
    sbit  ITRIM_3_bit at CTMUICON.B13;
    const register unsigned short int ITRIM_2 = 12;
    sbit  ITRIM_2_bit at CTMUICON.B12;
    const register unsigned short int ITRIM_1 = 11;
    sbit  ITRIM_1_bit at CTMUICON.B11;
    const register unsigned short int ITRIM_0 = 10;
    sbit  ITRIM_0_bit at CTMUICON.B10;
    const register unsigned short int IRNG_1 = 9;
    sbit  IRNG_1_bit at CTMUICON.B9;
    const register unsigned short int IRNG_0 = 8;
    sbit  IRNG_0_bit at CTMUICON.B8;

    // PMCON bits
    const register unsigned short int PMPEN = 15;
    sbit  PMPEN_bit at PMCON.B15;
    const register unsigned short int PSIDL = 13;
    sbit  PSIDL_bit at PMCON.B13;
    const register unsigned short int ADRMUX_1 = 12;
    sbit  ADRMUX_1_bit at PMCON.B12;
    const register unsigned short int ADRMUX_0 = 11;
    sbit  ADRMUX_0_bit at PMCON.B11;
    const register unsigned short int PTBEEN = 10;
    sbit  PTBEEN_bit at PMCON.B10;
    const register unsigned short int PTWREN = 9;
    sbit  PTWREN_bit at PMCON.B9;
    const register unsigned short int PTRDEN = 8;
    sbit  PTRDEN_bit at PMCON.B8;
    const register unsigned short int CSF_1 = 7;
    sbit  CSF_1_bit at PMCON.B7;
    const register unsigned short int CSF_0 = 6;
    sbit  CSF_0_bit at PMCON.B6;
    const register unsigned short int ALP = 5;
    sbit  ALP_bit at PMCON.B5;
    const register unsigned short int CS1P = 3;
    sbit  CS1P_bit at PMCON.B3;
    const register unsigned short int BEP = 2;
    sbit  BEP_bit at PMCON.B2;
    const register unsigned short int WRSP = 1;
    sbit  WRSP_bit at PMCON.B1;
    const register unsigned short int RDSP = 0;
    sbit  RDSP_bit at PMCON.B0;

    // PMMODE bits
    const register unsigned short int BUSY = 15;
    sbit  BUSY_bit at PMMODE.B15;
    const register unsigned short int IRQM_1 = 14;
    sbit  IRQM_1_bit at PMMODE.B14;
    const register unsigned short int IRQM_0 = 13;
    sbit  IRQM_0_bit at PMMODE.B13;
    const register unsigned short int INCM_1 = 12;
    sbit  INCM_1_bit at PMMODE.B12;
    const register unsigned short int INCM_0 = 11;
    sbit  INCM_0_bit at PMMODE.B11;
    sbit  MODE16_PMMODE_bit at PMMODE.B10;
    const register unsigned short int MODE_1 = 9;
    sbit  MODE_1_bit at PMMODE.B9;
    const register unsigned short int MODE_0 = 8;
    sbit  MODE_0_bit at PMMODE.B8;
    const register unsigned short int WAITB_1 = 7;
    sbit  WAITB_1_bit at PMMODE.B7;
    const register unsigned short int WAITB_0 = 6;
    sbit  WAITB_0_bit at PMMODE.B6;
    const register unsigned short int WAITM_3 = 5;
    sbit  WAITM_3_bit at PMMODE.B5;
    const register unsigned short int WAITM_2 = 4;
    sbit  WAITM_2_bit at PMMODE.B4;
    const register unsigned short int WAITM_1 = 3;
    sbit  WAITM_1_bit at PMMODE.B3;
    const register unsigned short int WAITM_0 = 2;
    sbit  WAITM_0_bit at PMMODE.B2;
    const register unsigned short int WAITE_1 = 1;
    sbit  WAITE_1_bit at PMMODE.B1;
    const register unsigned short int WAITE_0 = 0;
    sbit  WAITE_0_bit at PMMODE.B0;

    // PMADDR bits
    const register unsigned short int CS1 = 14;
    sbit  CS1_bit at PMADDR.B14;
    const register unsigned short int ADDR_10 = 10;
    sbit  ADDR_10_bit at PMADDR.B10;
    const register unsigned short int ADDR_9 = 9;
    sbit  ADDR_9_bit at PMADDR.B9;
    const register unsigned short int ADDR_8 = 8;
    sbit  ADDR_8_bit at PMADDR.B8;
    const register unsigned short int ADDR_7 = 7;
    sbit  ADDR_7_bit at PMADDR.B7;
    const register unsigned short int ADDR_6 = 6;
    sbit  ADDR_6_bit at PMADDR.B6;
    const register unsigned short int ADDR_5 = 5;
    sbit  ADDR_5_bit at PMADDR.B5;
    const register unsigned short int ADDR_4 = 4;
    sbit  ADDR_4_bit at PMADDR.B4;
    const register unsigned short int ADDR_3 = 3;
    sbit  ADDR_3_bit at PMADDR.B3;
    const register unsigned short int ADDR_2 = 2;
    sbit  ADDR_2_bit at PMADDR.B2;
    const register unsigned short int ADDR_1 = 1;
    sbit  ADDR_1_bit at PMADDR.B1;
    const register unsigned short int ADDR_0 = 0;
    sbit  ADDR_0_bit at PMADDR.B0;

    // PMDOUT2 bits
    const register unsigned short int PMDOUT2_15 = 15;
    sbit  PMDOUT2_15_bit at PMDOUT2.B15;
    const register unsigned short int PMDOUT2_14 = 14;
    sbit  PMDOUT2_14_bit at PMDOUT2.B14;
    const register unsigned short int PMDOUT2_13 = 13;
    sbit  PMDOUT2_13_bit at PMDOUT2.B13;
    const register unsigned short int PMDOUT2_12 = 12;
    sbit  PMDOUT2_12_bit at PMDOUT2.B12;
    const register unsigned short int PMDOUT2_11 = 11;
    sbit  PMDOUT2_11_bit at PMDOUT2.B11;
    const register unsigned short int PMDOUT2_10 = 10;
    sbit  PMDOUT2_10_bit at PMDOUT2.B10;
    const register unsigned short int PMDOUT2_9 = 9;
    sbit  PMDOUT2_9_bit at PMDOUT2.B9;
    const register unsigned short int PMDOUT2_8 = 8;
    sbit  PMDOUT2_8_bit at PMDOUT2.B8;
    const register unsigned short int PMDOUT2_7 = 7;
    sbit  PMDOUT2_7_bit at PMDOUT2.B7;
    const register unsigned short int PMDOUT2_6 = 6;
    sbit  PMDOUT2_6_bit at PMDOUT2.B6;
    const register unsigned short int PMDOUT2_5 = 5;
    sbit  PMDOUT2_5_bit at PMDOUT2.B5;
    const register unsigned short int PMDOUT2_4 = 4;
    sbit  PMDOUT2_4_bit at PMDOUT2.B4;
    const register unsigned short int PMDOUT2_3 = 3;
    sbit  PMDOUT2_3_bit at PMDOUT2.B3;
    const register unsigned short int PMDOUT2_2 = 2;
    sbit  PMDOUT2_2_bit at PMDOUT2.B2;
    const register unsigned short int PMDOUT2_1 = 1;
    sbit  PMDOUT2_1_bit at PMDOUT2.B1;
    const register unsigned short int PMDOUT2_0 = 0;
    sbit  PMDOUT2_0_bit at PMDOUT2.B0;

    // PMDIN1 bits
    const register unsigned short int PMDIN1_15 = 15;
    sbit  PMDIN1_15_bit at PMDIN1.B15;
    const register unsigned short int PMDIN1_14 = 14;
    sbit  PMDIN1_14_bit at PMDIN1.B14;
    const register unsigned short int PMDIN1_13 = 13;
    sbit  PMDIN1_13_bit at PMDIN1.B13;
    const register unsigned short int PMDIN1_12 = 12;
    sbit  PMDIN1_12_bit at PMDIN1.B12;
    const register unsigned short int PMDIN1_11 = 11;
    sbit  PMDIN1_11_bit at PMDIN1.B11;
    const register unsigned short int PMDIN1_10 = 10;
    sbit  PMDIN1_10_bit at PMDIN1.B10;
    const register unsigned short int PMDIN1_9 = 9;
    sbit  PMDIN1_9_bit at PMDIN1.B9;
    const register unsigned short int PMDIN1_8 = 8;
    sbit  PMDIN1_8_bit at PMDIN1.B8;
    const register unsigned short int PMDIN1_7 = 7;
    sbit  PMDIN1_7_bit at PMDIN1.B7;
    const register unsigned short int PMDIN1_6 = 6;
    sbit  PMDIN1_6_bit at PMDIN1.B6;
    const register unsigned short int PMDIN1_5 = 5;
    sbit  PMDIN1_5_bit at PMDIN1.B5;
    const register unsigned short int PMDIN1_4 = 4;
    sbit  PMDIN1_4_bit at PMDIN1.B4;
    const register unsigned short int PMDIN1_3 = 3;
    sbit  PMDIN1_3_bit at PMDIN1.B3;
    const register unsigned short int PMDIN1_2 = 2;
    sbit  PMDIN1_2_bit at PMDIN1.B2;
    const register unsigned short int PMDIN1_1 = 1;
    sbit  PMDIN1_1_bit at PMDIN1.B1;
    const register unsigned short int PMDIN1_0 = 0;
    sbit  PMDIN1_0_bit at PMDIN1.B0;

    // PMDIN2 bits
    const register unsigned short int PMDIN2_15 = 15;
    sbit  PMDIN2_15_bit at PMDIN2.B15;
    const register unsigned short int PMDIN2_14 = 14;
    sbit  PMDIN2_14_bit at PMDIN2.B14;
    const register unsigned short int PMDIN2_13 = 13;
    sbit  PMDIN2_13_bit at PMDIN2.B13;
    const register unsigned short int PMDIN2_12 = 12;
    sbit  PMDIN2_12_bit at PMDIN2.B12;
    const register unsigned short int PMDIN2_11 = 11;
    sbit  PMDIN2_11_bit at PMDIN2.B11;
    const register unsigned short int PMDIN2_10 = 10;
    sbit  PMDIN2_10_bit at PMDIN2.B10;
    const register unsigned short int PMDIN2_9 = 9;
    sbit  PMDIN2_9_bit at PMDIN2.B9;
    const register unsigned short int PMDIN2_8 = 8;
    sbit  PMDIN2_8_bit at PMDIN2.B8;
    const register unsigned short int PMDIN2_7 = 7;
    sbit  PMDIN2_7_bit at PMDIN2.B7;
    const register unsigned short int PMDIN2_6 = 6;
    sbit  PMDIN2_6_bit at PMDIN2.B6;
    const register unsigned short int PMDIN2_5 = 5;
    sbit  PMDIN2_5_bit at PMDIN2.B5;
    const register unsigned short int PMDIN2_4 = 4;
    sbit  PMDIN2_4_bit at PMDIN2.B4;
    const register unsigned short int PMDIN2_3 = 3;
    sbit  PMDIN2_3_bit at PMDIN2.B3;
    const register unsigned short int PMDIN2_2 = 2;
    sbit  PMDIN2_2_bit at PMDIN2.B2;
    const register unsigned short int PMDIN2_1 = 1;
    sbit  PMDIN2_1_bit at PMDIN2.B1;
    const register unsigned short int PMDIN2_0 = 0;
    sbit  PMDIN2_0_bit at PMDIN2.B0;

    // PMAEN bits
    const register unsigned short int PTEN14 = 14;
    sbit  PTEN14_bit at PMAEN.B14;
    const register unsigned short int PTEN_10 = 10;
    sbit  PTEN_10_bit at PMAEN.B10;
    const register unsigned short int PTEN_9 = 9;
    sbit  PTEN_9_bit at PMAEN.B9;
    const register unsigned short int PTEN_8 = 8;
    sbit  PTEN_8_bit at PMAEN.B8;
    const register unsigned short int PTEN_7 = 7;
    sbit  PTEN_7_bit at PMAEN.B7;
    const register unsigned short int PTEN_6 = 6;
    sbit  PTEN_6_bit at PMAEN.B6;
    const register unsigned short int PTEN_5 = 5;
    sbit  PTEN_5_bit at PMAEN.B5;
    const register unsigned short int PTEN_4 = 4;
    sbit  PTEN_4_bit at PMAEN.B4;
    const register unsigned short int PTEN_3 = 3;
    sbit  PTEN_3_bit at PMAEN.B3;
    const register unsigned short int PTEN_2 = 2;
    sbit  PTEN_2_bit at PMAEN.B2;
    const register unsigned short int PTEN_1 = 1;
    sbit  PTEN_1_bit at PMAEN.B1;
    const register unsigned short int PTEN_0 = 0;
    sbit  PTEN_0_bit at PMAEN.B0;

    // PMSTAT bits
    const register unsigned short int IBF = 15;
    sbit  IBF_bit at PMSTAT.B15;
    const register unsigned short int IBOV = 14;
    sbit  IBOV_bit at PMSTAT.B14;
    const register unsigned short int IB3F = 11;
    sbit  IB3F_bit at PMSTAT.B11;
    const register unsigned short int IB2F = 10;
    sbit  IB2F_bit at PMSTAT.B10;
    const register unsigned short int IB1F = 9;
    sbit  IB1F_bit at PMSTAT.B9;
    const register unsigned short int IB0F = 8;
    sbit  IB0F_bit at PMSTAT.B8;
    const register unsigned short int OBE = 7;
    sbit  OBE_bit at PMSTAT.B7;
    const register unsigned short int OBUF = 6;
    sbit  OBUF_bit at PMSTAT.B6;
    const register unsigned short int OB3E = 3;
    sbit  OB3E_bit at PMSTAT.B3;
    const register unsigned short int OB2E = 2;
    sbit  OB2E_bit at PMSTAT.B2;
    const register unsigned short int OB1E = 1;
    sbit  OB1E_bit at PMSTAT.B1;
    const register unsigned short int OB0E = 0;
    sbit  OB0E_bit at PMSTAT.B0;

    // ALRMVAL bits
    const register unsigned short int ALRMVAL_15 = 15;
    sbit  ALRMVAL_15_bit at ALRMVAL.B15;
    const register unsigned short int ALRMVAL_14 = 14;
    sbit  ALRMVAL_14_bit at ALRMVAL.B14;
    const register unsigned short int ALRMVAL_13 = 13;
    sbit  ALRMVAL_13_bit at ALRMVAL.B13;
    const register unsigned short int ALRMVAL_12 = 12;
    sbit  ALRMVAL_12_bit at ALRMVAL.B12;
    const register unsigned short int ALRMVAL_11 = 11;
    sbit  ALRMVAL_11_bit at ALRMVAL.B11;
    const register unsigned short int ALRMVAL_10 = 10;
    sbit  ALRMVAL_10_bit at ALRMVAL.B10;
    const register unsigned short int ALRMVAL_9 = 9;
    sbit  ALRMVAL_9_bit at ALRMVAL.B9;
    const register unsigned short int ALRMVAL_8 = 8;
    sbit  ALRMVAL_8_bit at ALRMVAL.B8;
    const register unsigned short int ALRMVAL_7 = 7;
    sbit  ALRMVAL_7_bit at ALRMVAL.B7;
    const register unsigned short int ALRMVAL_6 = 6;
    sbit  ALRMVAL_6_bit at ALRMVAL.B6;
    const register unsigned short int ALRMVAL_5 = 5;
    sbit  ALRMVAL_5_bit at ALRMVAL.B5;
    const register unsigned short int ALRMVAL_4 = 4;
    sbit  ALRMVAL_4_bit at ALRMVAL.B4;
    const register unsigned short int ALRMVAL_3 = 3;
    sbit  ALRMVAL_3_bit at ALRMVAL.B3;
    const register unsigned short int ALRMVAL_2 = 2;
    sbit  ALRMVAL_2_bit at ALRMVAL.B2;
    const register unsigned short int ALRMVAL_1 = 1;
    sbit  ALRMVAL_1_bit at ALRMVAL.B1;
    const register unsigned short int ALRMVAL_0 = 0;
    sbit  ALRMVAL_0_bit at ALRMVAL.B0;

    // ALCFGRPT bits
    const register unsigned short int ALRMEN = 15;
    sbit  ALRMEN_bit at ALCFGRPT.B15;
    const register unsigned short int CHIME = 14;
    sbit  CHIME_bit at ALCFGRPT.B14;
    const register unsigned short int AMASK_3 = 13;
    sbit  AMASK_3_bit at ALCFGRPT.B13;
    const register unsigned short int AMASK_2 = 12;
    sbit  AMASK_2_bit at ALCFGRPT.B12;
    const register unsigned short int AMASK_1 = 11;
    sbit  AMASK_1_bit at ALCFGRPT.B11;
    const register unsigned short int AMASK_0 = 10;
    sbit  AMASK_0_bit at ALCFGRPT.B10;
    const register unsigned short int ALRMPTR_1 = 9;
    sbit  ALRMPTR_1_bit at ALCFGRPT.B9;
    const register unsigned short int ALRMPTR_0 = 8;
    sbit  ALRMPTR_0_bit at ALCFGRPT.B8;
    const register unsigned short int ARPT_7 = 7;
    sbit  ARPT_7_bit at ALCFGRPT.B7;
    const register unsigned short int ARPT_6 = 6;
    sbit  ARPT_6_bit at ALCFGRPT.B6;
    const register unsigned short int ARPT_5 = 5;
    sbit  ARPT_5_bit at ALCFGRPT.B5;
    const register unsigned short int ARPT_4 = 4;
    sbit  ARPT_4_bit at ALCFGRPT.B4;
    const register unsigned short int ARPT_3 = 3;
    sbit  ARPT_3_bit at ALCFGRPT.B3;
    const register unsigned short int ARPT_2 = 2;
    sbit  ARPT_2_bit at ALCFGRPT.B2;
    const register unsigned short int ARPT_1 = 1;
    sbit  ARPT_1_bit at ALCFGRPT.B1;
    const register unsigned short int ARPT_0 = 0;
    sbit  ARPT_0_bit at ALCFGRPT.B0;

    // RTCVAL bits
    const register unsigned short int RTCVAL_15 = 15;
    sbit  RTCVAL_15_bit at RTCVAL.B15;
    const register unsigned short int RTCVAL_14 = 14;
    sbit  RTCVAL_14_bit at RTCVAL.B14;
    const register unsigned short int RTCVAL_13 = 13;
    sbit  RTCVAL_13_bit at RTCVAL.B13;
    const register unsigned short int RTCVAL_12 = 12;
    sbit  RTCVAL_12_bit at RTCVAL.B12;
    const register unsigned short int RTCVAL_11 = 11;
    sbit  RTCVAL_11_bit at RTCVAL.B11;
    const register unsigned short int RTCVAL_10 = 10;
    sbit  RTCVAL_10_bit at RTCVAL.B10;
    const register unsigned short int RTCVAL_9 = 9;
    sbit  RTCVAL_9_bit at RTCVAL.B9;
    const register unsigned short int RTCVAL_8 = 8;
    sbit  RTCVAL_8_bit at RTCVAL.B8;
    const register unsigned short int RTCVAL_7 = 7;
    sbit  RTCVAL_7_bit at RTCVAL.B7;
    const register unsigned short int RTCVAL_6 = 6;
    sbit  RTCVAL_6_bit at RTCVAL.B6;
    const register unsigned short int RTCVAL_5 = 5;
    sbit  RTCVAL_5_bit at RTCVAL.B5;
    const register unsigned short int RTCVAL_4 = 4;
    sbit  RTCVAL_4_bit at RTCVAL.B4;
    const register unsigned short int RTCVAL_3 = 3;
    sbit  RTCVAL_3_bit at RTCVAL.B3;
    const register unsigned short int RTCVAL_2 = 2;
    sbit  RTCVAL_2_bit at RTCVAL.B2;
    const register unsigned short int RTCVAL_1 = 1;
    sbit  RTCVAL_1_bit at RTCVAL.B1;
    const register unsigned short int RTCVAL_0 = 0;
    sbit  RTCVAL_0_bit at RTCVAL.B0;

    // RCFGCAL bits
    const register unsigned short int RTCEN = 15;
    sbit  RTCEN_bit at RCFGCAL.B15;
    const register unsigned short int RTCWREN = 13;
    sbit  RTCWREN_bit at RCFGCAL.B13;
    const register unsigned short int RTCSYNC = 12;
    sbit  RTCSYNC_bit at RCFGCAL.B12;
    const register unsigned short int HALFSEC = 11;
    sbit  HALFSEC_bit at RCFGCAL.B11;
    const register unsigned short int RTCOE = 10;
    sbit  RTCOE_bit at RCFGCAL.B10;
    const register unsigned short int RTCPTR_1 = 9;
    sbit  RTCPTR_1_bit at RCFGCAL.B9;
    const register unsigned short int RTCPTR_0 = 8;
    sbit  RTCPTR_0_bit at RCFGCAL.B8;
    const register unsigned short int CAL_7 = 7;
    sbit  CAL_7_bit at RCFGCAL.B7;
    const register unsigned short int CAL_6 = 6;
    sbit  CAL_6_bit at RCFGCAL.B6;
    const register unsigned short int CAL_5 = 5;
    sbit  CAL_5_bit at RCFGCAL.B5;
    const register unsigned short int CAL_4 = 4;
    sbit  CAL_4_bit at RCFGCAL.B4;
    const register unsigned short int CAL_3 = 3;
    sbit  CAL_3_bit at RCFGCAL.B3;
    const register unsigned short int CAL_2 = 2;
    sbit  CAL_2_bit at RCFGCAL.B2;
    const register unsigned short int CAL_1 = 1;
    sbit  CAL_1_bit at RCFGCAL.B1;
    const register unsigned short int CAL_0 = 0;
    sbit  CAL_0_bit at RCFGCAL.B0;

    // CRCCON1 bits
    const register unsigned short int CRCEN = 15;
    sbit  CRCEN_bit at CRCCON1.B15;
    const register unsigned short int CSIDL = 13;
    sbit  CSIDL_bit at CRCCON1.B13;
    const register unsigned short int VWORD_4 = 12;
    sbit  VWORD_4_bit at CRCCON1.B12;
    const register unsigned short int VWORD_3 = 11;
    sbit  VWORD_3_bit at CRCCON1.B11;
    const register unsigned short int VWORD_2 = 10;
    sbit  VWORD_2_bit at CRCCON1.B10;
    const register unsigned short int VWORD_1 = 9;
    sbit  VWORD_1_bit at CRCCON1.B9;
    const register unsigned short int VWORD_0 = 8;
    sbit  VWORD_0_bit at CRCCON1.B8;
    const register unsigned short int CRCFUL = 7;
    sbit  CRCFUL_bit at CRCCON1.B7;
    const register unsigned short int CRCMPT = 6;
    sbit  CRCMPT_bit at CRCCON1.B6;
    const register unsigned short int CRCISEL = 5;
    sbit  CRCISEL_bit at CRCCON1.B5;
    const register unsigned short int CRCGO = 4;
    sbit  CRCGO_bit at CRCCON1.B4;
    const register unsigned short int LENDIAN = 3;
    sbit  LENDIAN_bit at CRCCON1.B3;

    // CRCCON2 bits
    const register unsigned short int DWIDTH_4 = 12;
    sbit  DWIDTH_4_bit at CRCCON2.B12;
    const register unsigned short int DWIDTH_3 = 11;
    sbit  DWIDTH_3_bit at CRCCON2.B11;
    const register unsigned short int DWIDTH_2 = 10;
    sbit  DWIDTH_2_bit at CRCCON2.B10;
    const register unsigned short int DWIDTH_1 = 9;
    sbit  DWIDTH_1_bit at CRCCON2.B9;
    const register unsigned short int DWIDTH_0 = 8;
    sbit  DWIDTH_0_bit at CRCCON2.B8;
    const register unsigned short int PLEN_4 = 4;
    sbit  PLEN_4_bit at CRCCON2.B4;
    const register unsigned short int PLEN_3 = 3;
    sbit  PLEN_3_bit at CRCCON2.B3;
    const register unsigned short int PLEN_2 = 2;
    sbit  PLEN_2_bit at CRCCON2.B2;
    const register unsigned short int PLEN_1 = 1;
    sbit  PLEN_1_bit at CRCCON2.B1;
    const register unsigned short int PLEN_0 = 0;
    sbit  PLEN_0_bit at CRCCON2.B0;

    // CRCXORL bits
    const register unsigned short int X15 = 15;
    sbit  X15_bit at CRCXORL.B15;
    const register unsigned short int X14 = 14;
    sbit  X14_bit at CRCXORL.B14;
    const register unsigned short int X13 = 13;
    sbit  X13_bit at CRCXORL.B13;
    const register unsigned short int X12 = 12;
    sbit  X12_bit at CRCXORL.B12;
    const register unsigned short int X11 = 11;
    sbit  X11_bit at CRCXORL.B11;
    const register unsigned short int X10 = 10;
    sbit  X10_bit at CRCXORL.B10;
    const register unsigned short int X9 = 9;
    sbit  X9_bit at CRCXORL.B9;
    const register unsigned short int X8 = 8;
    sbit  X8_bit at CRCXORL.B8;
    const register unsigned short int X7 = 7;
    sbit  X7_bit at CRCXORL.B7;
    const register unsigned short int X6 = 6;
    sbit  X6_bit at CRCXORL.B6;
    const register unsigned short int X5 = 5;
    sbit  X5_bit at CRCXORL.B5;
    const register unsigned short int X4 = 4;
    sbit  X4_bit at CRCXORL.B4;
    const register unsigned short int X3 = 3;
    sbit  X3_bit at CRCXORL.B3;
    const register unsigned short int X2 = 2;
    sbit  X2_bit at CRCXORL.B2;
    const register unsigned short int X1 = 1;
    sbit  X1_bit at CRCXORL.B1;

    // CRCXORH bits
    const register unsigned short int X31 = 15;
    sbit  X31_bit at CRCXORH.B15;
    const register unsigned short int X30 = 14;
    sbit  X30_bit at CRCXORH.B14;
    const register unsigned short int X29 = 13;
    sbit  X29_bit at CRCXORH.B13;
    const register unsigned short int X28 = 12;
    sbit  X28_bit at CRCXORH.B12;
    const register unsigned short int X27 = 11;
    sbit  X27_bit at CRCXORH.B11;
    const register unsigned short int X26 = 10;
    sbit  X26_bit at CRCXORH.B10;
    const register unsigned short int X25 = 9;
    sbit  X25_bit at CRCXORH.B9;
    const register unsigned short int X24 = 8;
    sbit  X24_bit at CRCXORH.B8;
    const register unsigned short int X23 = 7;
    sbit  X23_bit at CRCXORH.B7;
    const register unsigned short int X22 = 6;
    sbit  X22_bit at CRCXORH.B6;
    const register unsigned short int X21 = 5;
    sbit  X21_bit at CRCXORH.B5;
    const register unsigned short int X20 = 4;
    sbit  X20_bit at CRCXORH.B4;
    const register unsigned short int X19 = 3;
    sbit  X19_bit at CRCXORH.B3;
    const register unsigned short int X18 = 2;
    sbit  X18_bit at CRCXORH.B2;
    const register unsigned short int X17 = 1;
    sbit  X17_bit at CRCXORH.B1;
    const register unsigned short int X16 = 0;
    sbit  X16_bit at CRCXORH.B0;

    // CRCDATL bits
    const register unsigned short int CRCDATL_15 = 15;
    sbit  CRCDATL_15_bit at CRCDATL.B15;
    const register unsigned short int CRCDATL_14 = 14;
    sbit  CRCDATL_14_bit at CRCDATL.B14;
    const register unsigned short int CRCDATL_13 = 13;
    sbit  CRCDATL_13_bit at CRCDATL.B13;
    const register unsigned short int CRCDATL_12 = 12;
    sbit  CRCDATL_12_bit at CRCDATL.B12;
    const register unsigned short int CRCDATL_11 = 11;
    sbit  CRCDATL_11_bit at CRCDATL.B11;
    const register unsigned short int CRCDATL_10 = 10;
    sbit  CRCDATL_10_bit at CRCDATL.B10;
    const register unsigned short int CRCDATL_9 = 9;
    sbit  CRCDATL_9_bit at CRCDATL.B9;
    const register unsigned short int CRCDATL_8 = 8;
    sbit  CRCDATL_8_bit at CRCDATL.B8;
    const register unsigned short int CRCDATL_7 = 7;
    sbit  CRCDATL_7_bit at CRCDATL.B7;
    const register unsigned short int CRCDATL_6 = 6;
    sbit  CRCDATL_6_bit at CRCDATL.B6;
    const register unsigned short int CRCDATL_5 = 5;
    sbit  CRCDATL_5_bit at CRCDATL.B5;
    const register unsigned short int CRCDATL_4 = 4;
    sbit  CRCDATL_4_bit at CRCDATL.B4;
    const register unsigned short int CRCDATL_3 = 3;
    sbit  CRCDATL_3_bit at CRCDATL.B3;
    const register unsigned short int CRCDATL_2 = 2;
    sbit  CRCDATL_2_bit at CRCDATL.B2;
    const register unsigned short int CRCDATL_1 = 1;
    sbit  CRCDATL_1_bit at CRCDATL.B1;
    const register unsigned short int CRCDATL_0 = 0;
    sbit  CRCDATL_0_bit at CRCDATL.B0;

    // CRCDATH bits
    const register unsigned short int CRCDATH_15 = 15;
    sbit  CRCDATH_15_bit at CRCDATH.B15;
    const register unsigned short int CRCDATH_14 = 14;
    sbit  CRCDATH_14_bit at CRCDATH.B14;
    const register unsigned short int CRCDATH_13 = 13;
    sbit  CRCDATH_13_bit at CRCDATH.B13;
    const register unsigned short int CRCDATH_12 = 12;
    sbit  CRCDATH_12_bit at CRCDATH.B12;
    const register unsigned short int CRCDATH_11 = 11;
    sbit  CRCDATH_11_bit at CRCDATH.B11;
    const register unsigned short int CRCDATH_10 = 10;
    sbit  CRCDATH_10_bit at CRCDATH.B10;
    const register unsigned short int CRCDATH_9 = 9;
    sbit  CRCDATH_9_bit at CRCDATH.B9;
    const register unsigned short int CRCDATH_8 = 8;
    sbit  CRCDATH_8_bit at CRCDATH.B8;
    const register unsigned short int CRCDATH_7 = 7;
    sbit  CRCDATH_7_bit at CRCDATH.B7;
    const register unsigned short int CRCDATH_6 = 6;
    sbit  CRCDATH_6_bit at CRCDATH.B6;
    const register unsigned short int CRCDATH_5 = 5;
    sbit  CRCDATH_5_bit at CRCDATH.B5;
    const register unsigned short int CRCDATH_4 = 4;
    sbit  CRCDATH_4_bit at CRCDATH.B4;
    const register unsigned short int CRCDATH_3 = 3;
    sbit  CRCDATH_3_bit at CRCDATH.B3;
    const register unsigned short int CRCDATH_2 = 2;
    sbit  CRCDATH_2_bit at CRCDATH.B2;
    const register unsigned short int CRCDATH_1 = 1;
    sbit  CRCDATH_1_bit at CRCDATH.B1;
    const register unsigned short int CRCDATH_0 = 0;
    sbit  CRCDATH_0_bit at CRCDATH.B0;

    // CRCWDATL bits
    const register unsigned short int CRCWDATL_15 = 15;
    sbit  CRCWDATL_15_bit at CRCWDATL.B15;
    const register unsigned short int CRCWDATL_14 = 14;
    sbit  CRCWDATL_14_bit at CRCWDATL.B14;
    const register unsigned short int CRCWDATL_13 = 13;
    sbit  CRCWDATL_13_bit at CRCWDATL.B13;
    const register unsigned short int CRCWDATL_12 = 12;
    sbit  CRCWDATL_12_bit at CRCWDATL.B12;
    const register unsigned short int CRCWDATL_11 = 11;
    sbit  CRCWDATL_11_bit at CRCWDATL.B11;
    const register unsigned short int CRCWDATL_10 = 10;
    sbit  CRCWDATL_10_bit at CRCWDATL.B10;
    const register unsigned short int CRCWDATL_9 = 9;
    sbit  CRCWDATL_9_bit at CRCWDATL.B9;
    const register unsigned short int CRCWDATL_8 = 8;
    sbit  CRCWDATL_8_bit at CRCWDATL.B8;
    const register unsigned short int CRCWDATL_7 = 7;
    sbit  CRCWDATL_7_bit at CRCWDATL.B7;
    const register unsigned short int CRCWDATL_6 = 6;
    sbit  CRCWDATL_6_bit at CRCWDATL.B6;
    const register unsigned short int CRCWDATL_5 = 5;
    sbit  CRCWDATL_5_bit at CRCWDATL.B5;
    const register unsigned short int CRCWDATL_4 = 4;
    sbit  CRCWDATL_4_bit at CRCWDATL.B4;
    const register unsigned short int CRCWDATL_3 = 3;
    sbit  CRCWDATL_3_bit at CRCWDATL.B3;
    const register unsigned short int CRCWDATL_2 = 2;
    sbit  CRCWDATL_2_bit at CRCWDATL.B2;
    const register unsigned short int CRCWDATL_1 = 1;
    sbit  CRCWDATL_1_bit at CRCWDATL.B1;
    const register unsigned short int CRCWDATL_0 = 0;
    sbit  CRCWDATL_0_bit at CRCWDATL.B0;

    // CRCWDATH bits
    const register unsigned short int CRCWDATH_15 = 15;
    sbit  CRCWDATH_15_bit at CRCWDATH.B15;
    const register unsigned short int CRCWDATH_14 = 14;
    sbit  CRCWDATH_14_bit at CRCWDATH.B14;
    const register unsigned short int CRCWDATH_13 = 13;
    sbit  CRCWDATH_13_bit at CRCWDATH.B13;
    const register unsigned short int CRCWDATH_12 = 12;
    sbit  CRCWDATH_12_bit at CRCWDATH.B12;
    const register unsigned short int CRCWDATH_11 = 11;
    sbit  CRCWDATH_11_bit at CRCWDATH.B11;
    const register unsigned short int CRCWDATH_10 = 10;
    sbit  CRCWDATH_10_bit at CRCWDATH.B10;
    const register unsigned short int CRCWDATH_9 = 9;
    sbit  CRCWDATH_9_bit at CRCWDATH.B9;
    const register unsigned short int CRCWDATH_8 = 8;
    sbit  CRCWDATH_8_bit at CRCWDATH.B8;
    const register unsigned short int CRCWDATH_7 = 7;
    sbit  CRCWDATH_7_bit at CRCWDATH.B7;
    const register unsigned short int CRCWDATH_6 = 6;
    sbit  CRCWDATH_6_bit at CRCWDATH.B6;
    const register unsigned short int CRCWDATH_5 = 5;
    sbit  CRCWDATH_5_bit at CRCWDATH.B5;
    const register unsigned short int CRCWDATH_4 = 4;
    sbit  CRCWDATH_4_bit at CRCWDATH.B4;
    const register unsigned short int CRCWDATH_3 = 3;
    sbit  CRCWDATH_3_bit at CRCWDATH.B3;
    const register unsigned short int CRCWDATH_2 = 2;
    sbit  CRCWDATH_2_bit at CRCWDATH.B2;
    const register unsigned short int CRCWDATH_1 = 1;
    sbit  CRCWDATH_1_bit at CRCWDATH.B1;
    const register unsigned short int CRCWDATH_0 = 0;
    sbit  CRCWDATH_0_bit at CRCWDATH.B0;

    // CMSTAT bits
    const register unsigned short int CMIDL = 15;
    sbit  CMIDL_bit at CMSTAT.B15;
    const register unsigned short int C3EVT = 10;
    sbit  C3EVT_bit at CMSTAT.B10;
    const register unsigned short int C2EVT = 9;
    sbit  C2EVT_bit at CMSTAT.B9;
    const register unsigned short int C1EVT = 8;
    sbit  C1EVT_bit at CMSTAT.B8;
    const register unsigned short int C3OUT = 2;
    sbit  C3OUT_bit at CMSTAT.B2;
    const register unsigned short int C2OUT = 1;
    sbit  C2OUT_bit at CMSTAT.B1;
    const register unsigned short int C1OUT = 0;
    sbit  C1OUT_bit at CMSTAT.B0;

    // CVRCON bits
    const register unsigned short int CVREFP = 10;
    sbit  CVREFP_bit at CVRCON.B10;
    const register unsigned short int CVREFM_1 = 9;
    sbit  CVREFM_1_bit at CVRCON.B9;
    const register unsigned short int CVREFM_0 = 8;
    sbit  CVREFM_0_bit at CVRCON.B8;
    const register unsigned short int CVREN = 7;
    sbit  CVREN_bit at CVRCON.B7;
    const register unsigned short int CVROE = 6;
    sbit  CVROE_bit at CVRCON.B6;
    const register unsigned short int CVRR = 5;
    sbit  CVRR_bit at CVRCON.B5;
    const register unsigned short int CVRSS = 4;
    sbit  CVRSS_bit at CVRCON.B4;
    const register unsigned short int CVR_3 = 3;
    sbit  CVR_3_bit at CVRCON.B3;
    const register unsigned short int CVR_2 = 2;
    sbit  CVR_2_bit at CVRCON.B2;
    const register unsigned short int CVR_1 = 1;
    sbit  CVR_1_bit at CVRCON.B1;
    const register unsigned short int CVR_0 = 0;
    sbit  CVR_0_bit at CVRCON.B0;

    // CM1CON bits
    const register unsigned short int CON = 15;
    sbit  CON_bit at CM1CON.B15;
    sbit  CON_CM1CON_bit at CM1CON.B15;
    const register unsigned short int COE = 14;
    sbit  COE_bit at CM1CON.B14;
    sbit  COE_CM1CON_bit at CM1CON.B14;
    const register unsigned short int CPOL = 13;
    sbit  CPOL_bit at CM1CON.B13;
    sbit  CPOL_CM1CON_bit at CM1CON.B13;
    const register unsigned short int CEVT = 9;
    sbit  CEVT_bit at CM1CON.B9;
    sbit  CEVT_CM1CON_bit at CM1CON.B9;
    const register unsigned short int COUT = 8;
    sbit  COUT_bit at CM1CON.B8;
    sbit  COUT_CM1CON_bit at CM1CON.B8;
    const register unsigned short int EVPOL_1 = 7;
    sbit  EVPOL_1_bit at CM1CON.B7;
    sbit  EVPOL_1_CM1CON_bit at CM1CON.B7;
    const register unsigned short int EVPOL_0 = 6;
    sbit  EVPOL_0_bit at CM1CON.B6;
    sbit  EVPOL_0_CM1CON_bit at CM1CON.B6;
    const register unsigned short int CREF = 4;
    sbit  CREF_bit at CM1CON.B4;
    sbit  CREF_CM1CON_bit at CM1CON.B4;
    const register unsigned short int CCH_1 = 1;
    sbit  CCH_1_bit at CM1CON.B1;
    sbit  CCH_1_CM1CON_bit at CM1CON.B1;
    const register unsigned short int CCH_0 = 0;
    sbit  CCH_0_bit at CM1CON.B0;
    sbit  CCH_0_CM1CON_bit at CM1CON.B0;

    // CM2CON bits
    sbit  CON_CM2CON_bit at CM2CON.B15;
    sbit  COE_CM2CON_bit at CM2CON.B14;
    sbit  CPOL_CM2CON_bit at CM2CON.B13;
    sbit  CEVT_CM2CON_bit at CM2CON.B9;
    sbit  COUT_CM2CON_bit at CM2CON.B8;
    sbit  EVPOL_1_CM2CON_bit at CM2CON.B7;
    sbit  EVPOL_0_CM2CON_bit at CM2CON.B6;
    sbit  CREF_CM2CON_bit at CM2CON.B4;
    sbit  CCH_1_CM2CON_bit at CM2CON.B1;
    sbit  CCH_0_CM2CON_bit at CM2CON.B0;

    // CM3CON bits
    sbit  CON_CM3CON_bit at CM3CON.B15;
    sbit  COE_CM3CON_bit at CM3CON.B14;
    sbit  CPOL_CM3CON_bit at CM3CON.B13;
    sbit  CEVT_CM3CON_bit at CM3CON.B9;
    sbit  COUT_CM3CON_bit at CM3CON.B8;
    const register unsigned short int EVPOL1 = 7;
    sbit  EVPOL1_bit at CM3CON.B7;
    const register unsigned short int EVPOL0 = 6;
    sbit  EVPOL0_bit at CM3CON.B6;
    sbit  CREF_CM3CON_bit at CM3CON.B4;
    const register unsigned short int CCH1 = 1;
    sbit  CCH1_bit at CM3CON.B1;
    const register unsigned short int CCH0 = 0;
    sbit  CCH0_bit at CM3CON.B0;

    // RPINR0 bits
    const register unsigned short int INT1R_4 = 12;
    sbit  INT1R_4_bit at RPINR0.B12;
    const register unsigned short int INT1R_3 = 11;
    sbit  INT1R_3_bit at RPINR0.B11;
    const register unsigned short int INT1R_2 = 10;
    sbit  INT1R_2_bit at RPINR0.B10;
    const register unsigned short int INT1R_1 = 9;
    sbit  INT1R_1_bit at RPINR0.B9;
    const register unsigned short int INT1R_0 = 8;
    sbit  INT1R_0_bit at RPINR0.B8;

    // RPINR1 bits
    const register unsigned short int INT2R_4 = 4;
    sbit  INT2R_4_bit at RPINR1.B4;
    const register unsigned short int INT2R_3 = 3;
    sbit  INT2R_3_bit at RPINR1.B3;
    const register unsigned short int INT2R_2 = 2;
    sbit  INT2R_2_bit at RPINR1.B2;
    const register unsigned short int INT2R_1 = 1;
    sbit  INT2R_1_bit at RPINR1.B1;
    const register unsigned short int INT2R_0 = 0;
    sbit  INT2R_0_bit at RPINR1.B0;

    // RPINR3 bits
    const register unsigned short int T3CKR_4 = 12;
    sbit  T3CKR_4_bit at RPINR3.B12;
    const register unsigned short int T3CKR_3 = 11;
    sbit  T3CKR_3_bit at RPINR3.B11;
    const register unsigned short int T3CKR_2 = 10;
    sbit  T3CKR_2_bit at RPINR3.B10;
    const register unsigned short int T3CKR_1 = 9;
    sbit  T3CKR_1_bit at RPINR3.B9;
    const register unsigned short int T3CKR_0 = 8;
    sbit  T3CKR_0_bit at RPINR3.B8;
    const register unsigned short int T2CKR_4 = 4;
    sbit  T2CKR_4_bit at RPINR3.B4;
    const register unsigned short int T2CKR_3 = 3;
    sbit  T2CKR_3_bit at RPINR3.B3;
    const register unsigned short int T2CKR_2 = 2;
    sbit  T2CKR_2_bit at RPINR3.B2;
    const register unsigned short int T2CKR_1 = 1;
    sbit  T2CKR_1_bit at RPINR3.B1;
    const register unsigned short int T2CKR_0 = 0;
    sbit  T2CKR_0_bit at RPINR3.B0;

    // RPINR4 bits
    const register unsigned short int T5CKR_4 = 12;
    sbit  T5CKR_4_bit at RPINR4.B12;
    const register unsigned short int T5CKR_3 = 11;
    sbit  T5CKR_3_bit at RPINR4.B11;
    const register unsigned short int T5CKR_2 = 10;
    sbit  T5CKR_2_bit at RPINR4.B10;
    const register unsigned short int T5CKR_1 = 9;
    sbit  T5CKR_1_bit at RPINR4.B9;
    const register unsigned short int T5CKR_0 = 8;
    sbit  T5CKR_0_bit at RPINR4.B8;
    const register unsigned short int T4CKR_4 = 4;
    sbit  T4CKR_4_bit at RPINR4.B4;
    const register unsigned short int T4CKR_3 = 3;
    sbit  T4CKR_3_bit at RPINR4.B3;
    const register unsigned short int T4CKR_2 = 2;
    sbit  T4CKR_2_bit at RPINR4.B2;
    const register unsigned short int T4CKR_1 = 1;
    sbit  T4CKR_1_bit at RPINR4.B1;
    const register unsigned short int T4CKR_0 = 0;
    sbit  T4CKR_0_bit at RPINR4.B0;

    // RPINR7 bits
    const register unsigned short int IC2R_4 = 12;
    sbit  IC2R_4_bit at RPINR7.B12;
    const register unsigned short int IC2R_3 = 11;
    sbit  IC2R_3_bit at RPINR7.B11;
    const register unsigned short int IC2R_2 = 10;
    sbit  IC2R_2_bit at RPINR7.B10;
    const register unsigned short int IC2R_1 = 9;
    sbit  IC2R_1_bit at RPINR7.B9;
    const register unsigned short int IC2R_0 = 8;
    sbit  IC2R_0_bit at RPINR7.B8;
    const register unsigned short int IC1R_4 = 4;
    sbit  IC1R_4_bit at RPINR7.B4;
    const register unsigned short int IC1R_3 = 3;
    sbit  IC1R_3_bit at RPINR7.B3;
    const register unsigned short int IC1R_2 = 2;
    sbit  IC1R_2_bit at RPINR7.B2;
    const register unsigned short int IC1R_1 = 1;
    sbit  IC1R_1_bit at RPINR7.B1;
    const register unsigned short int IC1R_0 = 0;
    sbit  IC1R_0_bit at RPINR7.B0;

    // RPINR8 bits
    const register unsigned short int IC4R_4 = 12;
    sbit  IC4R_4_bit at RPINR8.B12;
    const register unsigned short int IC4R_3 = 11;
    sbit  IC4R_3_bit at RPINR8.B11;
    const register unsigned short int IC4R_2 = 10;
    sbit  IC4R_2_bit at RPINR8.B10;
    const register unsigned short int IC4R_1 = 9;
    sbit  IC4R_1_bit at RPINR8.B9;
    const register unsigned short int IC4R_0 = 8;
    sbit  IC4R_0_bit at RPINR8.B8;
    const register unsigned short int IC3R_4 = 4;
    sbit  IC3R_4_bit at RPINR8.B4;
    const register unsigned short int IC3R_3 = 3;
    sbit  IC3R_3_bit at RPINR8.B3;
    const register unsigned short int IC3R_2 = 2;
    sbit  IC3R_2_bit at RPINR8.B2;
    const register unsigned short int IC3R_1 = 1;
    sbit  IC3R_1_bit at RPINR8.B1;
    const register unsigned short int IC3R_0 = 0;
    sbit  IC3R_0_bit at RPINR8.B0;

    // RPINR9 bits
    const register unsigned short int IC5R_4 = 4;
    sbit  IC5R_4_bit at RPINR9.B4;
    const register unsigned short int IC5R_3 = 3;
    sbit  IC5R_3_bit at RPINR9.B3;
    const register unsigned short int IC5R_2 = 2;
    sbit  IC5R_2_bit at RPINR9.B2;
    const register unsigned short int IC5R_1 = 1;
    sbit  IC5R_1_bit at RPINR9.B1;
    const register unsigned short int IC5R_0 = 0;
    sbit  IC5R_0_bit at RPINR9.B0;

    // RPINR11 bits
    const register unsigned short int OCFBR_4 = 12;
    sbit  OCFBR_4_bit at RPINR11.B12;
    const register unsigned short int OCFBR_3 = 11;
    sbit  OCFBR_3_bit at RPINR11.B11;
    const register unsigned short int OCFBR_2 = 10;
    sbit  OCFBR_2_bit at RPINR11.B10;
    const register unsigned short int OCFBR_1 = 9;
    sbit  OCFBR_1_bit at RPINR11.B9;
    const register unsigned short int OCFBR_0 = 8;
    sbit  OCFBR_0_bit at RPINR11.B8;
    const register unsigned short int OCFAR_4 = 4;
    sbit  OCFAR_4_bit at RPINR11.B4;
    const register unsigned short int OCFAR_3 = 3;
    sbit  OCFAR_3_bit at RPINR11.B3;
    const register unsigned short int OCFAR_2 = 2;
    sbit  OCFAR_2_bit at RPINR11.B2;
    const register unsigned short int OCFAR_1 = 1;
    sbit  OCFAR_1_bit at RPINR11.B1;
    const register unsigned short int OCFAR_0 = 0;
    sbit  OCFAR_0_bit at RPINR11.B0;

    // RPINR18 bits
    const register unsigned short int U1CTSR_4 = 12;
    sbit  U1CTSR_4_bit at RPINR18.B12;
    const register unsigned short int U1CTSR_3 = 11;
    sbit  U1CTSR_3_bit at RPINR18.B11;
    const register unsigned short int U1CTSR_2 = 10;
    sbit  U1CTSR_2_bit at RPINR18.B10;
    const register unsigned short int U1CTSR_1 = 9;
    sbit  U1CTSR_1_bit at RPINR18.B9;
    const register unsigned short int U1CTSR_0 = 8;
    sbit  U1CTSR_0_bit at RPINR18.B8;
    const register unsigned short int U1RXR_4 = 4;
    sbit  U1RXR_4_bit at RPINR18.B4;
    const register unsigned short int U1RXR_3 = 3;
    sbit  U1RXR_3_bit at RPINR18.B3;
    const register unsigned short int U1RXR_2 = 2;
    sbit  U1RXR_2_bit at RPINR18.B2;
    const register unsigned short int U1RXR_1 = 1;
    sbit  U1RXR_1_bit at RPINR18.B1;
    const register unsigned short int U1RXR_0 = 0;
    sbit  U1RXR_0_bit at RPINR18.B0;

    // RPINR19 bits
    const register unsigned short int U2CTSR_4 = 12;
    sbit  U2CTSR_4_bit at RPINR19.B12;
    const register unsigned short int U2CTSR_3 = 11;
    sbit  U2CTSR_3_bit at RPINR19.B11;
    const register unsigned short int U2CTSR_2 = 10;
    sbit  U2CTSR_2_bit at RPINR19.B10;
    const register unsigned short int U2CTSR_1 = 9;
    sbit  U2CTSR_1_bit at RPINR19.B9;
    const register unsigned short int U2CTSR_0 = 8;
    sbit  U2CTSR_0_bit at RPINR19.B8;
    const register unsigned short int U2RXR_4 = 4;
    sbit  U2RXR_4_bit at RPINR19.B4;
    const register unsigned short int U2RXR_3 = 3;
    sbit  U2RXR_3_bit at RPINR19.B3;
    const register unsigned short int U2RXR_2 = 2;
    sbit  U2RXR_2_bit at RPINR19.B2;
    const register unsigned short int U2RXR_1 = 1;
    sbit  U2RXR_1_bit at RPINR19.B1;
    const register unsigned short int U2RXR_0 = 0;
    sbit  U2RXR_0_bit at RPINR19.B0;

    // RPINR20 bits
    const register unsigned short int SCK1R_4 = 12;
    sbit  SCK1R_4_bit at RPINR20.B12;
    const register unsigned short int SCK1R_3 = 11;
    sbit  SCK1R_3_bit at RPINR20.B11;
    const register unsigned short int SCK1R_2 = 10;
    sbit  SCK1R_2_bit at RPINR20.B10;
    const register unsigned short int SCK1R_1 = 9;
    sbit  SCK1R_1_bit at RPINR20.B9;
    const register unsigned short int SCK1R_0 = 8;
    sbit  SCK1R_0_bit at RPINR20.B8;
    const register unsigned short int SDI1R_4 = 4;
    sbit  SDI1R_4_bit at RPINR20.B4;
    const register unsigned short int SDI1R_3 = 3;
    sbit  SDI1R_3_bit at RPINR20.B3;
    const register unsigned short int SDI1R_2 = 2;
    sbit  SDI1R_2_bit at RPINR20.B2;
    const register unsigned short int SDI1R_1 = 1;
    sbit  SDI1R_1_bit at RPINR20.B1;
    const register unsigned short int SDI1R_0 = 0;
    sbit  SDI1R_0_bit at RPINR20.B0;

    // RPINR21 bits
    const register unsigned short int SS1R_4 = 4;
    sbit  SS1R_4_bit at RPINR21.B4;
    const register unsigned short int SS1R_3 = 3;
    sbit  SS1R_3_bit at RPINR21.B3;
    const register unsigned short int SS1R_2 = 2;
    sbit  SS1R_2_bit at RPINR21.B2;
    const register unsigned short int SS1R_1 = 1;
    sbit  SS1R_1_bit at RPINR21.B1;
    const register unsigned short int SS1R_0 = 0;
    sbit  SS1R_0_bit at RPINR21.B0;

    // RPINR22 bits
    const register unsigned short int SCK2R_4 = 12;
    sbit  SCK2R_4_bit at RPINR22.B12;
    const register unsigned short int SCK2R_3 = 11;
    sbit  SCK2R_3_bit at RPINR22.B11;
    const register unsigned short int SCK2R_2 = 10;
    sbit  SCK2R_2_bit at RPINR22.B10;
    const register unsigned short int SCK2R_1 = 9;
    sbit  SCK2R_1_bit at RPINR22.B9;
    const register unsigned short int SCK2R_0 = 8;
    sbit  SCK2R_0_bit at RPINR22.B8;
    const register unsigned short int SDI2R_4 = 4;
    sbit  SDI2R_4_bit at RPINR22.B4;
    const register unsigned short int SDI2R_3 = 3;
    sbit  SDI2R_3_bit at RPINR22.B3;
    const register unsigned short int SDI2R_2 = 2;
    sbit  SDI2R_2_bit at RPINR22.B2;
    const register unsigned short int SDI2R_1 = 1;
    sbit  SDI2R_1_bit at RPINR22.B1;
    const register unsigned short int SDI2R_0 = 0;
    sbit  SDI2R_0_bit at RPINR22.B0;

    // RPINR23 bits
    const register unsigned short int SS2R_4 = 4;
    sbit  SS2R_4_bit at RPINR23.B4;
    const register unsigned short int SS2R_3 = 3;
    sbit  SS2R_3_bit at RPINR23.B3;
    const register unsigned short int SS2R_2 = 2;
    sbit  SS2R_2_bit at RPINR23.B2;
    const register unsigned short int SS2R_1 = 1;
    sbit  SS2R_1_bit at RPINR23.B1;
    const register unsigned short int SS2R_0 = 0;
    sbit  SS2R_0_bit at RPINR23.B0;

    // RPOR0 bits
    const register unsigned short int RP1R_4 = 12;
    sbit  RP1R_4_bit at RPOR0.B12;
    const register unsigned short int RP1R_3 = 11;
    sbit  RP1R_3_bit at RPOR0.B11;
    const register unsigned short int RP1R_2 = 10;
    sbit  RP1R_2_bit at RPOR0.B10;
    const register unsigned short int RP1R_1 = 9;
    sbit  RP1R_1_bit at RPOR0.B9;
    const register unsigned short int RP1R_0 = 8;
    sbit  RP1R_0_bit at RPOR0.B8;
    const register unsigned short int RP0R_4 = 4;
    sbit  RP0R_4_bit at RPOR0.B4;
    const register unsigned short int RP0R_3 = 3;
    sbit  RP0R_3_bit at RPOR0.B3;
    const register unsigned short int RP0R_2 = 2;
    sbit  RP0R_2_bit at RPOR0.B2;
    const register unsigned short int RP0R_1 = 1;
    sbit  RP0R_1_bit at RPOR0.B1;
    const register unsigned short int RP0R_0 = 0;
    sbit  RP0R_0_bit at RPOR0.B0;

    // RPOR1 bits
    const register unsigned short int RP3R_4 = 12;
    sbit  RP3R_4_bit at RPOR1.B12;
    const register unsigned short int RP3R_3 = 11;
    sbit  RP3R_3_bit at RPOR1.B11;
    const register unsigned short int RP3R_2 = 10;
    sbit  RP3R_2_bit at RPOR1.B10;
    const register unsigned short int RP3R_1 = 9;
    sbit  RP3R_1_bit at RPOR1.B9;
    const register unsigned short int RP3R_0 = 8;
    sbit  RP3R_0_bit at RPOR1.B8;
    const register unsigned short int RP2R_4 = 4;
    sbit  RP2R_4_bit at RPOR1.B4;
    const register unsigned short int RP2R_3 = 3;
    sbit  RP2R_3_bit at RPOR1.B3;
    const register unsigned short int RP2R_2 = 2;
    sbit  RP2R_2_bit at RPOR1.B2;
    const register unsigned short int RP2R_1 = 1;
    sbit  RP2R_1_bit at RPOR1.B1;
    const register unsigned short int RP2R_0 = 0;
    sbit  RP2R_0_bit at RPOR1.B0;

    // RPOR2 bits
    const register unsigned short int RP5R_4 = 12;
    sbit  RP5R_4_bit at RPOR2.B12;
    const register unsigned short int RP5R_3 = 11;
    sbit  RP5R_3_bit at RPOR2.B11;
    const register unsigned short int RP5R_2 = 10;
    sbit  RP5R_2_bit at RPOR2.B10;
    const register unsigned short int RP5R_1 = 9;
    sbit  RP5R_1_bit at RPOR2.B9;
    const register unsigned short int RP5R_0 = 8;
    sbit  RP5R_0_bit at RPOR2.B8;
    const register unsigned short int RP4R_4 = 4;
    sbit  RP4R_4_bit at RPOR2.B4;
    const register unsigned short int RP4R_3 = 3;
    sbit  RP4R_3_bit at RPOR2.B3;
    const register unsigned short int RP4R_2 = 2;
    sbit  RP4R_2_bit at RPOR2.B2;
    const register unsigned short int RP4R_1 = 1;
    sbit  RP4R_1_bit at RPOR2.B1;
    const register unsigned short int RP4R_0 = 0;
    sbit  RP4R_0_bit at RPOR2.B0;

    // RPOR3 bits
    const register unsigned short int RP7R_4 = 12;
    sbit  RP7R_4_bit at RPOR3.B12;
    const register unsigned short int RP7R_3 = 11;
    sbit  RP7R_3_bit at RPOR3.B11;
    const register unsigned short int RP7R_2 = 10;
    sbit  RP7R_2_bit at RPOR3.B10;
    const register unsigned short int RP7R_1 = 9;
    sbit  RP7R_1_bit at RPOR3.B9;
    const register unsigned short int RP7R_0 = 8;
    sbit  RP7R_0_bit at RPOR3.B8;
    const register unsigned short int RP6R_4 = 4;
    sbit  RP6R_4_bit at RPOR3.B4;
    const register unsigned short int RP6R_3 = 3;
    sbit  RP6R_3_bit at RPOR3.B3;
    const register unsigned short int RP6R_2 = 2;
    sbit  RP6R_2_bit at RPOR3.B2;
    const register unsigned short int RP6R_1 = 1;
    sbit  RP6R_1_bit at RPOR3.B1;
    const register unsigned short int RP6R_0 = 0;
    sbit  RP6R_0_bit at RPOR3.B0;

    // RPOR4 bits
    const register unsigned short int RP9R_4 = 12;
    sbit  RP9R_4_bit at RPOR4.B12;
    const register unsigned short int RP9R_3 = 11;
    sbit  RP9R_3_bit at RPOR4.B11;
    const register unsigned short int RP9R_2 = 10;
    sbit  RP9R_2_bit at RPOR4.B10;
    const register unsigned short int RP9R_1 = 9;
    sbit  RP9R_1_bit at RPOR4.B9;
    const register unsigned short int RP9R_0 = 8;
    sbit  RP9R_0_bit at RPOR4.B8;
    const register unsigned short int RP8R_4 = 4;
    sbit  RP8R_4_bit at RPOR4.B4;
    const register unsigned short int RP8R_3 = 3;
    sbit  RP8R_3_bit at RPOR4.B3;
    const register unsigned short int RP8R_2 = 2;
    sbit  RP8R_2_bit at RPOR4.B2;
    const register unsigned short int RP8R_1 = 1;
    sbit  RP8R_1_bit at RPOR4.B1;
    const register unsigned short int RP8R_0 = 0;
    sbit  RP8R_0_bit at RPOR4.B0;

    // RPOR5 bits
    const register unsigned short int RP11R_4 = 12;
    sbit  RP11R_4_bit at RPOR5.B12;
    const register unsigned short int RP11R_3 = 11;
    sbit  RP11R_3_bit at RPOR5.B11;
    const register unsigned short int RP11R_2 = 10;
    sbit  RP11R_2_bit at RPOR5.B10;
    const register unsigned short int RP11R_1 = 9;
    sbit  RP11R_1_bit at RPOR5.B9;
    const register unsigned short int RP11R_0 = 8;
    sbit  RP11R_0_bit at RPOR5.B8;
    const register unsigned short int RP10R_4 = 4;
    sbit  RP10R_4_bit at RPOR5.B4;
    const register unsigned short int RP10R_3 = 3;
    sbit  RP10R_3_bit at RPOR5.B3;
    const register unsigned short int RP10R_2 = 2;
    sbit  RP10R_2_bit at RPOR5.B2;
    const register unsigned short int RP10R_1 = 1;
    sbit  RP10R_1_bit at RPOR5.B1;
    const register unsigned short int RP10R_0 = 0;
    sbit  RP10R_0_bit at RPOR5.B0;

    // RPOR6 bits
    const register unsigned short int RP13R_4 = 12;
    sbit  RP13R_4_bit at RPOR6.B12;
    const register unsigned short int RP13R_3 = 11;
    sbit  RP13R_3_bit at RPOR6.B11;
    const register unsigned short int RP13R_2 = 10;
    sbit  RP13R_2_bit at RPOR6.B10;
    const register unsigned short int RP13R_1 = 9;
    sbit  RP13R_1_bit at RPOR6.B9;
    const register unsigned short int RP13R_0 = 8;
    sbit  RP13R_0_bit at RPOR6.B8;
    const register unsigned short int RP12R_4 = 4;
    sbit  RP12R_4_bit at RPOR6.B4;
    const register unsigned short int RP12R_3 = 3;
    sbit  RP12R_3_bit at RPOR6.B3;
    const register unsigned short int RP12R_2 = 2;
    sbit  RP12R_2_bit at RPOR6.B2;
    const register unsigned short int RP12R_1 = 1;
    sbit  RP12R_1_bit at RPOR6.B1;
    const register unsigned short int RP12R_0 = 0;
    sbit  RP12R_0_bit at RPOR6.B0;

    // RPOR7 bits
    const register unsigned short int RP15R_4 = 12;
    sbit  RP15R_4_bit at RPOR7.B12;
    const register unsigned short int RP15R_3 = 11;
    sbit  RP15R_3_bit at RPOR7.B11;
    const register unsigned short int RP15R_2 = 10;
    sbit  RP15R_2_bit at RPOR7.B10;
    const register unsigned short int RP15R_1 = 9;
    sbit  RP15R_1_bit at RPOR7.B9;
    const register unsigned short int RP15R_0 = 8;
    sbit  RP15R_0_bit at RPOR7.B8;
    const register unsigned short int RP14R_4 = 4;
    sbit  RP14R_4_bit at RPOR7.B4;
    const register unsigned short int RP14R_3 = 3;
    sbit  RP14R_3_bit at RPOR7.B3;
    const register unsigned short int RP14R_2 = 2;
    sbit  RP14R_2_bit at RPOR7.B2;
    const register unsigned short int RP14R_1 = 1;
    sbit  RP14R_1_bit at RPOR7.B1;
    const register unsigned short int RP14R_0 = 0;
    sbit  RP14R_0_bit at RPOR7.B0;

    // RCON bits
    const register unsigned short int TRAPR = 15;
    sbit  TRAPR_bit at RCON.B15;
    const register unsigned short int IOPUWR = 14;
    sbit  IOPUWR_bit at RCON.B14;
    const register unsigned short int DPSLP = 10;
    sbit  DPSLP_bit at RCON.B10;
    const register unsigned short int CM = 9;
    sbit  CM_bit at RCON.B9;
    const register unsigned short int VREGS = 8;
    sbit  VREGS_bit at RCON.B8;
    const register unsigned short int EXTR = 7;
    sbit  EXTR_bit at RCON.B7;
    const register unsigned short int SWR = 6;
    sbit  SWR_bit at RCON.B6;
    const register unsigned short int SWDTEN = 5;
    sbit  SWDTEN_bit at RCON.B5;
    const register unsigned short int WDTO = 4;
    sbit  WDTO_bit at RCON.B4;
    const register unsigned short int SLEEP = 3;
    sbit  SLEEP_bit at RCON.B3;
    const register unsigned short int IDLE = 2;
    sbit  IDLE_bit at RCON.B2;
    const register unsigned short int BOR = 1;
    sbit  BOR_bit at RCON.B1;
    const register unsigned short int POR = 0;
    sbit  POR_bit at RCON.B0;
    sbit  POR_RCON_bit at RCON.B0;

    // OSCCON bits
    const register unsigned short int COSC_2 = 14;
    sbit  COSC_2_bit at OSCCON.B14;
    const register unsigned short int COSC_1 = 13;
    sbit  COSC_1_bit at OSCCON.B13;
    const register unsigned short int COSC_0 = 12;
    sbit  COSC_0_bit at OSCCON.B12;
    const register unsigned short int NOSC_2 = 10;
    sbit  NOSC_2_bit at OSCCON.B10;
    const register unsigned short int NOSC_1 = 9;
    sbit  NOSC_1_bit at OSCCON.B9;
    const register unsigned short int NOSC_0 = 8;
    sbit  NOSC_0_bit at OSCCON.B8;
    const register unsigned short int CLKLOCK = 7;
    sbit  CLKLOCK_bit at OSCCON.B7;
    const register unsigned short int IOLOCK = 6;
    sbit  IOLOCK_bit at OSCCON.B6;
    const register unsigned short int LOCK_ = 5;
    sbit  LOCK_bit at OSCCON.B5;
    const register unsigned short int CF = 3;
    sbit  CF_bit at OSCCON.B3;
    const register unsigned short int POSCEN = 2;
    sbit  POSCEN_bit at OSCCON.B2;
    const register unsigned short int SOSCEN = 1;
    sbit  SOSCEN_bit at OSCCON.B1;
    const register unsigned short int OSWEN = 0;
    sbit  OSWEN_bit at OSCCON.B0;

    // CLKDIV bits
    const register unsigned short int ROI = 15;
    sbit  ROI_bit at CLKDIV.B15;
    const register unsigned short int DOZE_2 = 14;
    sbit  DOZE_2_bit at CLKDIV.B14;
    const register unsigned short int DOZE_1 = 13;
    sbit  DOZE_1_bit at CLKDIV.B13;
    const register unsigned short int DOZE_0 = 12;
    sbit  DOZE_0_bit at CLKDIV.B12;
    const register unsigned short int DOZEN = 11;
    sbit  DOZEN_bit at CLKDIV.B11;
    const register unsigned short int RCDIV_2 = 10;
    sbit  RCDIV_2_bit at CLKDIV.B10;
    const register unsigned short int RCDIV_1 = 9;
    sbit  RCDIV_1_bit at CLKDIV.B9;
    const register unsigned short int RCDIV_0 = 8;
    sbit  RCDIV_0_bit at CLKDIV.B8;

    // OSCTUN bits
    const register unsigned short int TUN_5 = 5;
    sbit  TUN_5_bit at OSCTUN.B5;
    const register unsigned short int TUN_4 = 4;
    sbit  TUN_4_bit at OSCTUN.B4;
    const register unsigned short int TUN_3 = 3;
    sbit  TUN_3_bit at OSCTUN.B3;
    const register unsigned short int TUN_2 = 2;
    sbit  TUN_2_bit at OSCTUN.B2;
    const register unsigned short int TUN_1 = 1;
    sbit  TUN_1_bit at OSCTUN.B1;
    const register unsigned short int TUN_0 = 0;
    sbit  TUN_0_bit at OSCTUN.B0;

    // REFOCON bits
    const register unsigned short int ROEN = 15;
    sbit  ROEN_bit at REFOCON.B15;
    const register unsigned short int ROSSLP = 13;
    sbit  ROSSLP_bit at REFOCON.B13;
    const register unsigned short int ROSEL = 12;
    sbit  ROSEL_bit at REFOCON.B12;
    const register unsigned short int RODIV_3 = 11;
    sbit  RODIV_3_bit at REFOCON.B11;
    const register unsigned short int RODIV_2 = 10;
    sbit  RODIV_2_bit at REFOCON.B10;
    const register unsigned short int RODIV_1 = 9;
    sbit  RODIV_1_bit at REFOCON.B9;
    const register unsigned short int RODIV_0 = 8;
    sbit  RODIV_0_bit at REFOCON.B8;

    // DSCON bits
    const register unsigned short int DSEN = 15;
    sbit  DSEN_bit at DSCON.B15;
    const register unsigned short int DSBOR = 1;
    sbit  DSBOR_bit at DSCON.B1;
    const register unsigned short int RELEASE = 0;
    sbit  RELEASE_bit at DSCON.B0;

    // DSWAKE bits
    const register unsigned short int INT0 = 8;
    sbit  INT0_bit at DSWAKE.B8;
    const register unsigned short int DSFLT = 7;
    sbit  DSFLT_bit at DSWAKE.B7;
    const register unsigned short int DSWDT = 4;
    sbit  DSWDT_bit at DSWAKE.B4;
    const register unsigned short int RTCC = 3;
    sbit  RTCC_bit at DSWAKE.B3;
    const register unsigned short int MCLR = 2;
    sbit  MCLR_bit at DSWAKE.B2;
    sbit  POR_DSWAKE_bit at DSWAKE.B0;

    // DSGPR0 bits
    const register unsigned short int DSGPR_15 = 15;
    sbit  DSGPR_15_bit at DSGPR0.B15;
    sbit  DSGPR_15_DSGPR0_bit at DSGPR0.B15;
    const register unsigned short int DSGPR_14 = 14;
    sbit  DSGPR_14_bit at DSGPR0.B14;
    sbit  DSGPR_14_DSGPR0_bit at DSGPR0.B14;
    const register unsigned short int DSGPR_13 = 13;
    sbit  DSGPR_13_bit at DSGPR0.B13;
    sbit  DSGPR_13_DSGPR0_bit at DSGPR0.B13;
    const register unsigned short int DSGPR_12 = 12;
    sbit  DSGPR_12_bit at DSGPR0.B12;
    sbit  DSGPR_12_DSGPR0_bit at DSGPR0.B12;
    const register unsigned short int DSGPR_11 = 11;
    sbit  DSGPR_11_bit at DSGPR0.B11;
    sbit  DSGPR_11_DSGPR0_bit at DSGPR0.B11;
    const register unsigned short int DSGPR_10 = 10;
    sbit  DSGPR_10_bit at DSGPR0.B10;
    sbit  DSGPR_10_DSGPR0_bit at DSGPR0.B10;
    const register unsigned short int DSGPR_9 = 9;
    sbit  DSGPR_9_bit at DSGPR0.B9;
    sbit  DSGPR_9_DSGPR0_bit at DSGPR0.B9;
    const register unsigned short int DSGPR_8 = 8;
    sbit  DSGPR_8_bit at DSGPR0.B8;
    sbit  DSGPR_8_DSGPR0_bit at DSGPR0.B8;
    const register unsigned short int DSGPR_7 = 7;
    sbit  DSGPR_7_bit at DSGPR0.B7;
    sbit  DSGPR_7_DSGPR0_bit at DSGPR0.B7;
    const register unsigned short int DSGPR_6 = 6;
    sbit  DSGPR_6_bit at DSGPR0.B6;
    sbit  DSGPR_6_DSGPR0_bit at DSGPR0.B6;
    const register unsigned short int DSGPR_5 = 5;
    sbit  DSGPR_5_bit at DSGPR0.B5;
    sbit  DSGPR_5_DSGPR0_bit at DSGPR0.B5;
    const register unsigned short int DSGPR_4 = 4;
    sbit  DSGPR_4_bit at DSGPR0.B4;
    sbit  DSGPR_4_DSGPR0_bit at DSGPR0.B4;
    const register unsigned short int DSGPR_3 = 3;
    sbit  DSGPR_3_bit at DSGPR0.B3;
    sbit  DSGPR_3_DSGPR0_bit at DSGPR0.B3;
    const register unsigned short int DSGPR_2 = 2;
    sbit  DSGPR_2_bit at DSGPR0.B2;
    sbit  DSGPR_2_DSGPR0_bit at DSGPR0.B2;
    const register unsigned short int DSGPR_1 = 1;
    sbit  DSGPR_1_bit at DSGPR0.B1;
    sbit  DSGPR_1_DSGPR0_bit at DSGPR0.B1;
    const register unsigned short int DSGPR_0 = 0;
    sbit  DSGPR_0_bit at DSGPR0.B0;
    sbit  DSGPR_0_DSGPR0_bit at DSGPR0.B0;

    // DSGPR1 bits
    sbit  DSGPR_15_DSGPR1_bit at DSGPR1.B15;
    sbit  DSGPR_14_DSGPR1_bit at DSGPR1.B14;
    sbit  DSGPR_13_DSGPR1_bit at DSGPR1.B13;
    sbit  DSGPR_12_DSGPR1_bit at DSGPR1.B12;
    sbit  DSGPR_11_DSGPR1_bit at DSGPR1.B11;
    sbit  DSGPR_10_DSGPR1_bit at DSGPR1.B10;
    sbit  DSGPR_9_DSGPR1_bit at DSGPR1.B9;
    sbit  DSGPR_8_DSGPR1_bit at DSGPR1.B8;
    sbit  DSGPR_7_DSGPR1_bit at DSGPR1.B7;
    sbit  DSGPR_6_DSGPR1_bit at DSGPR1.B6;
    sbit  DSGPR_5_DSGPR1_bit at DSGPR1.B5;
    sbit  DSGPR_4_DSGPR1_bit at DSGPR1.B4;
    sbit  DSGPR_3_DSGPR1_bit at DSGPR1.B3;
    sbit  DSGPR_2_DSGPR1_bit at DSGPR1.B2;
    sbit  DSGPR_1_DSGPR1_bit at DSGPR1.B1;
    sbit  DSGPR_0_DSGPR1_bit at DSGPR1.B0;

    // NVMCON bits
    const register unsigned short int WR = 15;
    sbit  WR_bit at NVMCON.B15;
    const register unsigned short int WREN = 14;
    sbit  WREN_bit at NVMCON.B14;
    const register unsigned short int WRERR = 13;
    sbit  WRERR_bit at NVMCON.B13;
    const register unsigned short int ERASE_ = 6;
    sbit  ERASE_bit at NVMCON.B6;
    const register unsigned short int NVMOP_3 = 3;
    sbit  NVMOP_3_bit at NVMCON.B3;
    const register unsigned short int NVMOP_2 = 2;
    sbit  NVMOP_2_bit at NVMCON.B2;
    const register unsigned short int NVMOP_1 = 1;
    sbit  NVMOP_1_bit at NVMCON.B1;
    const register unsigned short int NVMOP_0 = 0;
    sbit  NVMOP_0_bit at NVMCON.B0;

    // NVMKEY bits
    const register unsigned short int NVMKEY_7 = 7;
    sbit  NVMKEY_7_bit at NVMKEY.B7;
    const register unsigned short int NVMKEY_6 = 6;
    sbit  NVMKEY_6_bit at NVMKEY.B6;
    const register unsigned short int NVMKEY_5 = 5;
    sbit  NVMKEY_5_bit at NVMKEY.B5;
    const register unsigned short int NVMKEY_4 = 4;
    sbit  NVMKEY_4_bit at NVMKEY.B4;
    const register unsigned short int NVMKEY_3 = 3;
    sbit  NVMKEY_3_bit at NVMKEY.B3;
    const register unsigned short int NVMKEY_2 = 2;
    sbit  NVMKEY_2_bit at NVMKEY.B2;
    const register unsigned short int NVMKEY_1 = 1;
    sbit  NVMKEY_1_bit at NVMKEY.B1;
    const register unsigned short int NVMKEY_0 = 0;
    sbit  NVMKEY_0_bit at NVMKEY.B0;

    // PMD1 bits
    const register unsigned short int T5MD = 15;
    sbit  T5MD_bit at PMD1.B15;
    const register unsigned short int T4MD = 14;
    sbit  T4MD_bit at PMD1.B14;
    const register unsigned short int T3MD = 13;
    sbit  T3MD_bit at PMD1.B13;
    const register unsigned short int T2MD = 12;
    sbit  T2MD_bit at PMD1.B12;
    const register unsigned short int T1MD = 11;
    sbit  T1MD_bit at PMD1.B11;
    const register unsigned short int I2C1MD = 7;
    sbit  I2C1MD_bit at PMD1.B7;
    const register unsigned short int U2MD = 6;
    sbit  U2MD_bit at PMD1.B6;
    const register unsigned short int U1MD = 5;
    sbit  U1MD_bit at PMD1.B5;
    const register unsigned short int SPI2MD = 4;
    sbit  SPI2MD_bit at PMD1.B4;
    const register unsigned short int SPI1MD = 3;
    sbit  SPI1MD_bit at PMD1.B3;
    const register unsigned short int ADC1MD = 0;
    sbit  ADC1MD_bit at PMD1.B0;

    // PMD2 bits
    const register unsigned short int IC5MD = 12;
    sbit  IC5MD_bit at PMD2.B12;
    const register unsigned short int IC4MD = 11;
    sbit  IC4MD_bit at PMD2.B11;
    const register unsigned short int IC3MD = 10;
    sbit  IC3MD_bit at PMD2.B10;
    const register unsigned short int IC2MD = 9;
    sbit  IC2MD_bit at PMD2.B9;
    const register unsigned short int IC1MD = 8;
    sbit  IC1MD_bit at PMD2.B8;
    const register unsigned short int OC5MD = 4;
    sbit  OC5MD_bit at PMD2.B4;
    const register unsigned short int OC4MD = 3;
    sbit  OC4MD_bit at PMD2.B3;
    const register unsigned short int OC3MD = 2;
    sbit  OC3MD_bit at PMD2.B2;
    const register unsigned short int OC2MD = 1;
    sbit  OC2MD_bit at PMD2.B1;
    const register unsigned short int OC1MD = 0;
    sbit  OC1MD_bit at PMD2.B0;

    // PMD3 bits
    const register unsigned short int CMPMD = 10;
    sbit  CMPMD_bit at PMD3.B10;
    const register unsigned short int RTCCMD = 9;
    sbit  RTCCMD_bit at PMD3.B9;
    const register unsigned short int PMPMD = 8;
    sbit  PMPMD_bit at PMD3.B8;
    const register unsigned short int CRCMD = 7;
    sbit  CRCMD_bit at PMD3.B7;
    const register unsigned short int I2C2MD = 1;
    sbit  I2C2MD_bit at PMD3.B1;

    // PMD4 bits
    const register unsigned short int REFOMD = 3;
    sbit  REFOMD_bit at PMD4.B3;
    const register unsigned short int CTMUMD = 2;
    sbit  CTMUMD_bit at PMD4.B2;
    const register unsigned short int LVDMD = 1;
    sbit  LVDMD_bit at PMD4.B1;

    // Start of structures implementation for backward compatibility

// backward compatibility for SRBITS
    typedef struct tagSRBITS {
      union {
        struct {
          unsigned C:1;
          unsigned Z:1;
          unsigned OV:1;
          unsigned N:1;
          unsigned RA:1;
          unsigned IPL:3;
          unsigned DC:1;
        };
        struct {
          unsigned :5;
          unsigned IPL0:1;
          unsigned IPL1:1;
          unsigned IPL2:1;
        };
      };
} typeSRBITS;
sfr volatile typeSRBITS SRbits absolute 0x042;

// backward compatibility for CORCONBITS
    typedef struct tagCORCONBITS {
      unsigned :2;
      unsigned PSV:1;
      unsigned IPL3:1;
} typeCORCONBITS;
sfr volatile typeCORCONBITS CORCONbits absolute 0x044;

// backward compatibility for CNEN1BITS
    typedef struct tagCNEN1BITS {
      unsigned CN0IE:1;
      unsigned CN1IE:1;
      unsigned CN2IE:1;
      unsigned CN3IE:1;
      unsigned CN4IE:1;
      unsigned CN5IE:1;
      unsigned CN6IE:1;
      unsigned CN7IE:1;
      unsigned :3;
      unsigned CN11IE:1;
      unsigned CN12IE:1;
      unsigned CN13IE:1;
      unsigned CN14IE:1;
      unsigned CN15IE:1;
} typeCNEN1BITS;
sfr volatile typeCNEN1BITS CNEN1bits absolute 0x060;

// backward compatibility for CNEN2BITS
    typedef struct tagCNEN2BITS {
      unsigned CN16IE:1;
      unsigned :4;
      unsigned CN21IE:1;
      unsigned CN22IE:1;
      unsigned CN23IE:1;
      unsigned CN24IE:1;
      unsigned :2;
      unsigned CN27IE:1;
      unsigned :1;
      unsigned CN29IE:1;
      unsigned CN30IE:1;
} typeCNEN2BITS;
sfr volatile typeCNEN2BITS CNEN2bits absolute 0x062;

// backward compatibility for CNPU1BITS
    typedef struct tagCNPU1BITS {
      unsigned CN0PUE:1;
      unsigned CN1PUE:1;
      unsigned CN2PUE:1;
      unsigned CN3PUE:1;
      unsigned CN4PUE:1;
      unsigned CN5PUE:1;
      unsigned CN6PUE:1;
      unsigned CN7PUE:1;
      unsigned :3;
      unsigned CN11PUE:1;
      unsigned CN12PUE:1;
      unsigned CN13PUE:1;
      unsigned CN14PUE:1;
      unsigned CN15PUE:1;
} typeCNPU1BITS;
sfr volatile typeCNPU1BITS CNPU1bits absolute 0x068;

// backward compatibility for CNPU2BITS
    typedef struct tagCNPU2BITS {
      unsigned CN16PUE:1;
      unsigned :4;
      unsigned CN21PUE:1;
      unsigned CN22PUE:1;
      unsigned CN23PUE:1;
      unsigned CN24PUE:1;
      unsigned :2;
      unsigned CN27PUE:1;
      unsigned :1;
      unsigned CN29PUE:1;
      unsigned CN30PUE:1;
} typeCNPU2BITS;
sfr volatile typeCNPU2BITS CNPU2bits absolute 0x06A;

// backward compatibility for INTCON1BITS
    typedef struct tagINTCON1BITS {
      unsigned :1;
      unsigned OSCFAIL:1;
      unsigned STKERR:1;
      unsigned ADDRERR:1;
      unsigned MATHERR:1;
      unsigned :10;
      unsigned NSTDIS:1;
} typeINTCON1BITS;
sfr volatile typeINTCON1BITS INTCON1bits absolute 0x080;

// backward compatibility for INTCON2BITS
    typedef struct tagINTCON2BITS {
      unsigned INT0EP:1;
      unsigned INT1EP:1;
      unsigned INT2EP:1;
      unsigned :11;
      unsigned DISI:1;
      unsigned ALTIVT:1;
} typeINTCON2BITS;
sfr volatile typeINTCON2BITS INTCON2bits absolute 0x082;

// backward compatibility for IFS0BITS
    typedef struct tagIFS0BITS {
      unsigned INT0IF:1;
      unsigned IC1IF:1;
      unsigned OC1IF:1;
      unsigned T1IF:1;
      unsigned :1;
      unsigned IC2IF:1;
      unsigned OC2IF:1;
      unsigned T2IF:1;
      unsigned T3IF:1;
      unsigned SPF1IF:1;
      unsigned SPI1IF:1;
      unsigned U1RXIF:1;
      unsigned U1TXIF:1;
      unsigned AD1IF:1;
} typeIFS0BITS;
sfr volatile typeIFS0BITS IFS0bits absolute 0x084;

// backward compatibility for IFS1BITS
    typedef struct tagIFS1BITS {
      unsigned SI2C1IF:1;
      unsigned MI2C1IF:1;
      unsigned CMIF:1;
      unsigned CNIF:1;
      unsigned INT1IF:1;
      unsigned :4;
      unsigned OC3IF:1;
      unsigned OC4IF:1;
      unsigned T4IF:1;
      unsigned T5IF:1;
      unsigned INT2IF:1;
      unsigned U2RXIF:1;
      unsigned U2TXIF:1;
} typeIFS1BITS;
sfr volatile typeIFS1BITS IFS1bits absolute 0x086;

// backward compatibility for IFS2BITS
    typedef struct tagIFS2BITS {
      unsigned SPF2IF:1;
      unsigned SPI2IF:1;
      unsigned :3;
      unsigned IC3IF:1;
      unsigned IC4IF:1;
      unsigned IC5IF:1;
      unsigned :1;
      unsigned OC5IF:1;
      unsigned :3;
      unsigned PMPIF:1;
} typeIFS2BITS;
sfr volatile typeIFS2BITS IFS2bits absolute 0x088;

// backward compatibility for IFS3BITS
    typedef struct tagIFS3BITS {
      unsigned :1;
      unsigned SI2C2IF:1;
      unsigned MI2C2IF:1;
      unsigned :11;
      unsigned RTCIF:1;
} typeIFS3BITS;
sfr volatile typeIFS3BITS IFS3bits absolute 0x08A;

// backward compatibility for IFS4BITS
    typedef struct tagIFS4BITS {
      unsigned :1;
      unsigned U1ERIF:1;
      unsigned U2ERIF:1;
      unsigned CRCIF:1;
      unsigned :4;
      unsigned LVDIF:1;
      unsigned :4;
      unsigned CTMUIF:1;
} typeIFS4BITS;
sfr volatile typeIFS4BITS IFS4bits absolute 0x08C;

// backward compatibility for IEC0BITS
    typedef struct tagIEC0BITS {
      unsigned INT0IE:1;
      unsigned IC1IE:1;
      unsigned OC1IE:1;
      unsigned T1IE:1;
      unsigned :1;
      unsigned IC2IE:1;
      unsigned OC2IE:1;
      unsigned T2IE:1;
      unsigned T3IE:1;
      unsigned SPF1IE:1;
      unsigned SPI1IE:1;
      unsigned U1RXIE:1;
      unsigned U1TXIE:1;
      unsigned AD1IE:1;
} typeIEC0BITS;
sfr volatile typeIEC0BITS IEC0bits absolute 0x094;

// backward compatibility for IEC1BITS
    typedef struct tagIEC1BITS {
      unsigned SI2C1IE:1;
      unsigned MI2C1IE:1;
      unsigned CMIE:1;
      unsigned CNIE:1;
      unsigned INT1IE:1;
      unsigned :4;
      unsigned OC3IE:1;
      unsigned OC4IE:1;
      unsigned T4IE:1;
      unsigned T5IE:1;
      unsigned INT2IE:1;
      unsigned U2RXIE:1;
      unsigned U2TXIE:1;
} typeIEC1BITS;
sfr volatile typeIEC1BITS IEC1bits absolute 0x096;

// backward compatibility for IEC2BITS
    typedef struct tagIEC2BITS {
      unsigned SPF2IE:1;
      unsigned SPI2IE:1;
      unsigned :3;
      unsigned IC3IE:1;
      unsigned IC4IE:1;
      unsigned IC5IE:1;
      unsigned :1;
      unsigned OC5IE:1;
      unsigned :3;
      unsigned PMPIE:1;
} typeIEC2BITS;
sfr volatile typeIEC2BITS IEC2bits absolute 0x098;

// backward compatibility for IEC3BITS
    typedef struct tagIEC3BITS {
      unsigned :1;
      unsigned SI2C2IE:1;
      unsigned MI2C2IE:1;
      unsigned :11;
      unsigned RTCIE:1;
} typeIEC3BITS;
sfr volatile typeIEC3BITS IEC3bits absolute 0x09A;

// backward compatibility for IEC4BITS
    typedef struct tagIEC4BITS {
      unsigned :1;
      unsigned U1ERIE:1;
      unsigned U2ERIE:1;
      unsigned CRCIE:1;
      unsigned :4;
      unsigned LVDIE:1;
      unsigned :4;
      unsigned CTMUIE:1;
} typeIEC4BITS;
sfr volatile typeIEC4BITS IEC4bits absolute 0x09C;

// backward compatibility for IPC0BITS
    typedef struct tagIPC0BITS {
      union {
        struct {
          unsigned INT0IP:3;
          unsigned :1;
          unsigned IC1IP:3;
          unsigned :1;
          unsigned OC1IP:3;
          unsigned :1;
          unsigned T1IP:3;
        };
        struct {
          unsigned INT0IP0:1;
          unsigned INT0IP1:1;
          unsigned INT0IP2:1;
          unsigned :1;
          unsigned IC1IP0:1;
          unsigned IC1IP1:1;
          unsigned IC1IP2:1;
          unsigned :1;
          unsigned OC1IP0:1;
          unsigned OC1IP1:1;
          unsigned OC1IP2:1;
          unsigned :1;
          unsigned T1IP0:1;
          unsigned T1IP1:1;
          unsigned T1IP2:1;
        };
      };
} typeIPC0BITS;
sfr volatile typeIPC0BITS IPC0bits absolute 0x0A4;

// backward compatibility for IPC1BITS
    typedef struct tagIPC1BITS {
      union {
        struct {
          unsigned :4;
          unsigned IC2IP:3;
          unsigned :1;
          unsigned OC2IP:3;
          unsigned :1;
          unsigned T2IP:3;
        };
        struct {
          unsigned :4;
          unsigned IC2IP0:1;
          unsigned IC2IP1:1;
          unsigned IC2IP2:1;
          unsigned :1;
          unsigned OC2IP0:1;
          unsigned OC2IP1:1;
          unsigned OC2IP2:1;
          unsigned :1;
          unsigned T2IP0:1;
          unsigned T2IP1:1;
          unsigned T2IP2:1;
        };
      };
} typeIPC1BITS;
sfr volatile typeIPC1BITS IPC1bits absolute 0x0A6;

// backward compatibility for IPC2BITS
    typedef struct tagIPC2BITS {
      union {
        struct {
          unsigned T3IP:3;
          unsigned :1;
          unsigned SPF1IP:3;
          unsigned :1;
          unsigned SPI1IP:3;
          unsigned :1;
          unsigned U1RXIP:3;
        };
        struct {
          unsigned T3IP0:1;
          unsigned T3IP1:1;
          unsigned T3IP2:1;
          unsigned :1;
          unsigned SPF1IP0:1;
          unsigned SPF1IP1:1;
          unsigned SPF1IP2:1;
          unsigned :1;
          unsigned SPI1IP0:1;
          unsigned SPI1IP1:1;
          unsigned SPI1IP2:1;
          unsigned :1;
          unsigned U1RXIP0:1;
          unsigned U1RXIP1:1;
          unsigned U1RXIP2:1;
        };
      };
} typeIPC2BITS;
sfr volatile typeIPC2BITS IPC2bits absolute 0x0A8;

// backward compatibility for IPC3BITS
    typedef struct tagIPC3BITS {
      union {
        struct {
          unsigned U1TXIP:3;
          unsigned :1;
          unsigned AD1IP:3;
        };
        struct {
          unsigned U1TXIP0:1;
          unsigned U1TXIP1:1;
          unsigned U1TXIP2:1;
          unsigned :1;
          unsigned AD1IP0:1;
          unsigned AD1IP1:1;
          unsigned AD1IP2:1;
        };
      };
} typeIPC3BITS;
sfr volatile typeIPC3BITS IPC3bits absolute 0x0AA;

// backward compatibility for IPC4BITS
    typedef struct tagIPC4BITS {
      union {
        struct {
          unsigned SI2C1P:3;
          unsigned :1;
          unsigned MI2C1P:3;
          unsigned :1;
          unsigned CMIP:3;
          unsigned :1;
          unsigned CNIP:3;
        };
        struct {
          unsigned SI2C1P0:1;
          unsigned SI2C1P1:1;
          unsigned SI2C1P2:1;
          unsigned :1;
          unsigned MI2C1P0:1;
          unsigned MI2C1P1:1;
          unsigned MI2C1P2:1;
          unsigned :1;
          unsigned CMIP0:1;
          unsigned CMIP1:1;
          unsigned CMIP2:1;
          unsigned :1;
          unsigned CNIP0:1;
          unsigned CNIP1:1;
          unsigned CNIP2:1;
        };
        struct {
          unsigned SI2C1IP0:1;
          unsigned SI2C1IP1:1;
          unsigned SI2C1IP2:1;
          unsigned :1;
          unsigned MI2C1IP0:1;
          unsigned MI2C1IP1:1;
          unsigned MI2C1IP2:1;
        };
        struct {
          unsigned SI2C1IP:3;
          unsigned :1;
          unsigned MI2C1IP:3;
        };
      };
} typeIPC4BITS;
sfr volatile typeIPC4BITS IPC4bits absolute 0x0AC;

// backward compatibility for IPC5BITS
    typedef struct tagIPC5BITS {
      union {
        struct {
          unsigned INT1IP:3;
        };
        struct {
          unsigned INT1IP0:1;
          unsigned INT1IP1:1;
          unsigned INT1IP2:1;
        };
      };
} typeIPC5BITS;
sfr volatile typeIPC5BITS IPC5bits absolute 0x0AE;

// backward compatibility for IPC6BITS
    typedef struct tagIPC6BITS {
      union {
        struct {
          unsigned :4;
          unsigned OC3IP:3;
          unsigned :1;
          unsigned OC4IP:3;
          unsigned :1;
          unsigned T4IP:3;
        };
        struct {
          unsigned :4;
          unsigned OC3IP0:1;
          unsigned OC3IP1:1;
          unsigned OC3IP2:1;
          unsigned :1;
          unsigned OC4IP0:1;
          unsigned OC4IP1:1;
          unsigned OC4IP2:1;
          unsigned :1;
          unsigned T4IP0:1;
          unsigned T4IP1:1;
          unsigned T4IP2:1;
        };
      };
} typeIPC6BITS;
sfr volatile typeIPC6BITS IPC6bits absolute 0x0B0;

// backward compatibility for IPC7BITS
    typedef struct tagIPC7BITS {
      union {
        struct {
          unsigned T5IP:3;
          unsigned :1;
          unsigned INT2IP:3;
          unsigned :1;
          unsigned U2RXIP:3;
          unsigned :1;
          unsigned U2TXIP:3;
        };
        struct {
          unsigned T5IP0:1;
          unsigned T5IP1:1;
          unsigned T5IP2:1;
          unsigned :1;
          unsigned INT2IP0:1;
          unsigned INT2IP1:1;
          unsigned INT2IP2:1;
          unsigned :1;
          unsigned U2RXIP0:1;
          unsigned U2RXIP1:1;
          unsigned U2RXIP2:1;
          unsigned :1;
          unsigned U2TXIP0:1;
          unsigned U2TXIP1:1;
          unsigned U2TXIP2:1;
        };
      };
} typeIPC7BITS;
sfr volatile typeIPC7BITS IPC7bits absolute 0x0B2;

// backward compatibility for IPC8BITS
    typedef struct tagIPC8BITS {
      union {
        struct {
          unsigned SPF2IP:3;
          unsigned :1;
          unsigned SPI2IP:3;
        };
        struct {
          unsigned SPF2IP0:1;
          unsigned SPF2IP1:1;
          unsigned SPF2IP2:1;
          unsigned :1;
          unsigned SPI2IP0:1;
          unsigned SPI2IP1:1;
          unsigned SPI2IP2:1;
        };
      };
} typeIPC8BITS;
sfr volatile typeIPC8BITS IPC8bits absolute 0x0B4;

// backward compatibility for IPC9BITS
    typedef struct tagIPC9BITS {
      union {
        struct {
          unsigned :4;
          unsigned IC3IP:3;
          unsigned :1;
          unsigned IC4IP:3;
          unsigned :1;
          unsigned IC5IP:3;
        };
        struct {
          unsigned :4;
          unsigned IC3IP0:1;
          unsigned IC3IP1:1;
          unsigned IC3IP2:1;
          unsigned :1;
          unsigned IC4IP0:1;
          unsigned IC4IP1:1;
          unsigned IC4IP2:1;
          unsigned :1;
          unsigned IC5IP0:1;
          unsigned IC5IP1:1;
          unsigned IC5IP2:1;
        };
      };
} typeIPC9BITS;
sfr volatile typeIPC9BITS IPC9bits absolute 0x0B6;

// backward compatibility for IPC10BITS
    typedef struct tagIPC10BITS {
      union {
        struct {
          unsigned :4;
          unsigned OC5IP:3;
        };
        struct {
          unsigned :4;
          unsigned OC5IP0:1;
          unsigned OC5IP1:1;
          unsigned OC5IP2:1;
        };
      };
} typeIPC10BITS;
sfr volatile typeIPC10BITS IPC10bits absolute 0x0B8;

// backward compatibility for IPC11BITS
    typedef struct tagIPC11BITS {
      union {
        struct {
          unsigned :4;
          unsigned PMPIP:3;
        };
        struct {
          unsigned :4;
          unsigned PMPIP0:1;
          unsigned PMPIP1:1;
          unsigned PMPIP2:1;
        };
      };
} typeIPC11BITS;
sfr volatile typeIPC11BITS IPC11bits absolute 0x0BA;

// backward compatibility for IPC12BITS
    typedef struct tagIPC12BITS {
      union {
        struct {
          unsigned :4;
          unsigned SI2C2P:3;
          unsigned :1;
          unsigned MI2C2P:3;
        };
        struct {
          unsigned :4;
          unsigned SI2C2IP:3;
          unsigned :1;
          unsigned MI2C2IP:3;
        };
        struct {
          unsigned :4;
          unsigned SI2C2P0:1;
          unsigned SI2C2P1:1;
          unsigned SI2C2P2:1;
          unsigned :1;
          unsigned MI2C2P0:1;
          unsigned MI2C2P1:1;
          unsigned MI2C2P2:1;
        };
        struct {
          unsigned :4;
          unsigned SI2C2IP0:1;
          unsigned SI2C2IP1:1;
          unsigned SI2C2IP2:1;
          unsigned :1;
          unsigned MI2C2IP0:1;
          unsigned MI2C2IP1:1;
          unsigned MI2C2IP2:1;
        };
      };
} typeIPC12BITS;
sfr volatile typeIPC12BITS IPC12bits absolute 0x0BC;

// backward compatibility for IPC15BITS
    typedef struct tagIPC15BITS {
      union {
        struct {
          unsigned :8;
          unsigned RTCIP:3;
        };
        struct {
          unsigned :8;
          unsigned RTCIP0:1;
          unsigned RTCIP1:1;
          unsigned RTCIP2:1;
        };
      };
} typeIPC15BITS;
sfr volatile typeIPC15BITS IPC15bits absolute 0x0C2;

// backward compatibility for IPC16BITS
    typedef struct tagIPC16BITS {
      union {
        struct {
          unsigned :4;
          unsigned U1ERIP:3;
          unsigned :1;
          unsigned U2ERIP:3;
          unsigned :1;
          unsigned CRCIP:3;
        };
        struct {
          unsigned :4;
          unsigned U1ERIP0:1;
          unsigned U1ERIP1:1;
          unsigned U1ERIP2:1;
          unsigned :1;
          unsigned U2ERIP0:1;
          unsigned U2ERIP1:1;
          unsigned U2ERIP2:1;
          unsigned :1;
          unsigned CRCIP0:1;
          unsigned CRCIP1:1;
          unsigned CRCIP2:1;
        };
      };
} typeIPC16BITS;
sfr volatile typeIPC16BITS IPC16bits absolute 0x0C4;

// backward compatibility for IPC18BITS
    typedef struct tagIPC18BITS {
      union {
        struct {
          unsigned LVDIP:3;
        };
        struct {
          unsigned LVDIP0:1;
          unsigned LVDIP1:1;
          unsigned LVDIP2:1;
        };
      };
} typeIPC18BITS;
sfr volatile typeIPC18BITS IPC18bits absolute 0x0C8;

// backward compatibility for IPC19BITS
    typedef struct tagIPC19BITS {
      union {
        struct {
          unsigned :4;
          unsigned CTMUIP:3;
        };
        struct {
          unsigned :4;
          unsigned CTMUIP0:1;
          unsigned CTMUIP1:1;
          unsigned CTMUIP2:1;
        };
      };
} typeIPC19BITS;
sfr volatile typeIPC19BITS IPC19bits absolute 0x0CA;

// backward compatibility for INTTREGBITS
    typedef struct tagINTTREGBITS {
      union {
        struct {
          unsigned VECNUM:7;
          unsigned :1;
          unsigned ILR:4;
          unsigned :1;
          unsigned VHOLD:1;
          unsigned :1;
          unsigned CPUIRQ:1;
        };
        struct {
          unsigned VECNUM0:1;
          unsigned VECNUM1:1;
          unsigned VECNUM2:1;
          unsigned VECNUM3:1;
          unsigned VECNUM4:1;
          unsigned VECNUM5:1;
          unsigned VECNUM6:1;
          unsigned :1;
          unsigned ILR0:1;
          unsigned ILR1:1;
          unsigned ILR2:1;
          unsigned ILR3:1;
        };
      };
} typeINTTREGBITS;
sfr volatile typeINTTREGBITS INTTREGbits absolute 0x0E0;

// backward compatibility for T1CONBITS
    typedef struct tagT1CONBITS {
      union {
        struct {
          unsigned :1;
          unsigned TCS:1;
          unsigned TSYNC:1;
          unsigned :1;
          unsigned TCKPS:2;
          unsigned TGATE:1;
          unsigned :6;
          unsigned TSIDL:1;
          unsigned :1;
          unsigned TON:1;
        };
        struct {
          unsigned :4;
          unsigned TCKPS0:1;
          unsigned TCKPS1:1;
        };
      };
} typeT1CONBITS;
sfr volatile typeT1CONBITS T1CONbits absolute 0x104;

// backward compatibility for T2CONBITS
    typedef struct tagT2CONBITS {
      union {
        struct {
          unsigned :1;
          unsigned TCS:1;
          unsigned :1;
          unsigned T32:1;
          unsigned TCKPS:2;
          unsigned TGATE:1;
          unsigned :6;
          unsigned TSIDL:1;
          unsigned :1;
          unsigned TON:1;
        };
        struct {
          unsigned :4;
          unsigned TCKPS0:1;
          unsigned TCKPS1:1;
        };
      };
} typeT2CONBITS;
sfr volatile typeT2CONBITS T2CONbits absolute 0x110;

// backward compatibility for T3CONBITS
    typedef struct tagT3CONBITS {
      union {
        struct {
          unsigned :1;
          unsigned TCS:1;
          unsigned :2;
          unsigned TCKPS:2;
          unsigned TGATE:1;
          unsigned :6;
          unsigned TSIDL:1;
          unsigned :1;
          unsigned TON:1;
        };
        struct {
          unsigned :4;
          unsigned TCKPS0:1;
          unsigned TCKPS1:1;
        };
      };
} typeT3CONBITS;
sfr volatile typeT3CONBITS T3CONbits absolute 0x112;

// backward compatibility for T4CONBITS
    typedef struct tagT4CONBITS {
      union {
        struct {
          unsigned :1;
          unsigned TCS:1;
          unsigned :1;
          unsigned T32:1;
          unsigned TCKPS:2;
          unsigned TGATE:1;
          unsigned :6;
          unsigned TSIDL:1;
          unsigned :1;
          unsigned TON:1;
        };
        struct {
          unsigned :4;
          unsigned TCKPS0:1;
          unsigned TCKPS1:1;
        };
      };
} typeT4CONBITS;
sfr volatile typeT4CONBITS T4CONbits absolute 0x11E;

// backward compatibility for T5CONBITS
    typedef struct tagT5CONBITS {
      union {
        struct {
          unsigned :1;
          unsigned TCS:1;
          unsigned :2;
          unsigned TCKPS:2;
          unsigned TGATE:1;
          unsigned :6;
          unsigned TSIDL:1;
          unsigned :1;
          unsigned TON:1;
        };
        struct {
          unsigned :4;
          unsigned TCKPS0:1;
          unsigned TCKPS1:1;
        };
      };
} typeT5CONBITS;
sfr volatile typeT5CONBITS T5CONbits absolute 0x120;

// backward compatibility for IC1CON1BITS
    typedef struct tagIC1CON1BITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned :3;
          unsigned ICTSEL:3;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
          unsigned :3;
          unsigned ICTSEL0:1;
          unsigned ICTSEL1:1;
          unsigned ICTSEL2:1;
        };
      };
} typeIC1CON1BITS;
sfr volatile typeIC1CON1BITS IC1CON1bits absolute 0x140;

// backward compatibility for IC1CON2BITS
    typedef struct tagIC1CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned :1;
          unsigned TRIGSTAT:1;
          unsigned ICTRIG:1;
          unsigned IC32:1;
        };
        struct {
          unsigned SYNCSEL0:1;
          unsigned SYNCSEL1:1;
          unsigned SYNCSEL2:1;
          unsigned SYNCSEL3:1;
          unsigned SYNCSEL4:1;
        };
      };
} typeIC1CON2BITS;
sfr volatile typeIC1CON2BITS IC1CON2bits absolute 0x142;

// backward compatibility for IC
    typedef struct tagIC {
            unsigned int icxbuf;
            unsigned int icxcon;
} typeIC;
sfr volatile typeIC IC1 absolute 0x144;
sfr volatile typeIC IC2 absolute 0x14C;
sfr volatile typeIC IC3 absolute 0x154;
sfr volatile typeIC IC4 absolute 0x15C;
sfr volatile typeIC IC5 absolute 0x164;

// backward compatibility for IC2CON1BITS
    typedef struct tagIC2CON1BITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned :3;
          unsigned ICTSEL:3;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
          unsigned :3;
          unsigned ICTSEL0:1;
          unsigned ICTSEL1:1;
          unsigned ICTSEL2:1;
        };
      };
} typeIC2CON1BITS;
sfr volatile typeIC2CON1BITS IC2CON1bits absolute 0x148;

// backward compatibility for IC2CON2BITS
    typedef struct tagIC2CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned :1;
          unsigned TRIGSTAT:1;
          unsigned ICTRIG:1;
          unsigned IC32:1;
        };
        struct {
          unsigned SYNCSEL0:1;
          unsigned SYNCSEL1:1;
          unsigned SYNCSEL2:1;
          unsigned SYNCSEL3:1;
          unsigned SYNCSEL4:1;
        };
      };
} typeIC2CON2BITS;
sfr volatile typeIC2CON2BITS IC2CON2bits absolute 0x14A;

// backward compatibility for IC3CON1BITS
    typedef struct tagIC3CON1BITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned :3;
          unsigned ICTSEL:3;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
          unsigned :3;
          unsigned ICTSEL0:1;
          unsigned ICTSEL1:1;
          unsigned ICTSEL2:1;
        };
      };
} typeIC3CON1BITS;
sfr volatile typeIC3CON1BITS IC3CON1bits absolute 0x150;

// backward compatibility for IC3CON2BITS
    typedef struct tagIC3CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned :1;
          unsigned TRIGSTAT:1;
          unsigned ICTRIG:1;
          unsigned IC32:1;
        };
        struct {
          unsigned SYNCSEL0:1;
          unsigned SYNCSEL1:1;
          unsigned SYNCSEL2:1;
          unsigned SYNCSEL3:1;
          unsigned SYNCSEL4:1;
        };
      };
} typeIC3CON2BITS;
sfr volatile typeIC3CON2BITS IC3CON2bits absolute 0x152;

// backward compatibility for IC4CON1BITS
    typedef struct tagIC4CON1BITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned :3;
          unsigned ICTSEL:3;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
          unsigned :3;
          unsigned ICTSEL0:1;
          unsigned ICTSEL1:1;
          unsigned ICTSEL2:1;
        };
      };
} typeIC4CON1BITS;
sfr volatile typeIC4CON1BITS IC4CON1bits absolute 0x158;

// backward compatibility for IC4CON2BITS
    typedef struct tagIC4CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned :1;
          unsigned TRIGSTAT:1;
          unsigned ICTRIG:1;
          unsigned IC32:1;
        };
        struct {
          unsigned SYNCSEL0:1;
          unsigned SYNCSEL1:1;
          unsigned SYNCSEL2:1;
          unsigned SYNCSEL3:1;
          unsigned SYNCSEL4:1;
        };
      };
} typeIC4CON2BITS;
sfr volatile typeIC4CON2BITS IC4CON2bits absolute 0x15A;

// backward compatibility for IC5CON1BITS
    typedef struct tagIC5CON1BITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned :3;
          unsigned ICTSEL:3;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
          unsigned :3;
          unsigned ICTSEL0:1;
          unsigned ICTSEL1:1;
          unsigned ICTSEL2:1;
        };
      };
} typeIC5CON1BITS;
sfr volatile typeIC5CON1BITS IC5CON1bits absolute 0x160;

// backward compatibility for IC5CON2BITS
    typedef struct tagIC5CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned :1;
          unsigned TRIGSTAT:1;
          unsigned ICTRIG:1;
          unsigned IC32:1;
        };
        struct {
          unsigned SYNCSEL0:1;
          unsigned SYNCSEL1:1;
          unsigned SYNCSEL2:1;
          unsigned SYNCSEL3:1;
          unsigned SYNCSEL4:1;
        };
      };
} typeIC5CON2BITS;
sfr volatile typeIC5CON2BITS IC5CON2bits absolute 0x162;

// backward compatibility for OC1CON1BITS
    typedef struct tagOC1CON1BITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned TRIGMODE:1;
          unsigned OCFLT:3;
          unsigned ENFLT:3;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT0:1;
          unsigned OCFLT1:1;
          unsigned OCFLT2:1;
          unsigned ENFLT0:1;
          unsigned ENFLT1:1;
          unsigned ENFLT2:1;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
      };
} typeOC1CON1BITS;
sfr volatile typeOC1CON1BITS OC1CON1bits absolute 0x190;

// backward compatibility for OC1CON2BITS
    typedef struct tagOC1CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned OCTRIS:1;
          unsigned TRIGSTAT:1;
          unsigned OCTRIG:1;
          unsigned OC32:1;
          unsigned DCB:2;
          unsigned :1;
          unsigned OCINV:1;
          unsigned FLTTRIEN:1;
          unsigned FLTOUT:1;
          unsigned FLTMD:1;
        };
        struct {
          unsigned SYNCSEL0:1;
          unsigned SYNCSEL1:1;
          unsigned SYNCSEL2:1;
          unsigned SYNCSEL3:1;
          unsigned SYNCSEL4:1;
          unsigned :4;
          unsigned DCB0:1;
          unsigned DCB1:1;
          unsigned :4;
          unsigned FLTMODE:1;
        };
      };
} typeOC1CON2BITS;
sfr volatile typeOC1CON2BITS OC1CON2bits absolute 0x192;

// backward compatibility for OC
    typedef struct tagOC {
            unsigned int ocxrs;
            unsigned int ocxr;
            unsigned int ocxcon;
} typeOC;
sfr volatile typeOC OC1 absolute 0x194;
sfr volatile typeOC OC2 absolute 0x19E;
sfr volatile typeOC OC3 absolute 0x1A8;
sfr volatile typeOC OC4 absolute 0x1B2;
sfr volatile typeOC OC5 absolute 0x1BC;

// backward compatibility for OC2CON1BITS
    typedef struct tagOC2CON1BITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned TRIGMODE:1;
          unsigned OCFLT:3;
          unsigned ENFLT:3;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT0:1;
          unsigned OCFLT1:1;
          unsigned OCFLT2:1;
          unsigned ENFLT0:1;
          unsigned ENFLT1:1;
          unsigned ENFLT2:1;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
      };
} typeOC2CON1BITS;
sfr volatile typeOC2CON1BITS OC2CON1bits absolute 0x19A;

// backward compatibility for OC2CON2BITS
    typedef struct tagOC2CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned OCTRIS:1;
          unsigned TRIGSTAT:1;
          unsigned OCTRIG:1;
          unsigned OC32:1;
          unsigned DCB:2;
          unsigned :1;
          unsigned OCINV:1;
          unsigned FLTTRIEN:1;
          unsigned FLTOUT:1;
          unsigned FLTMD:1;
        };
        struct {
          unsigned SYNCSEL0:1;
          unsigned SYNCSEL1:1;
          unsigned SYNCSEL2:1;
          unsigned SYNCSEL3:1;
          unsigned SYNCSEL4:1;
          unsigned :4;
          unsigned DCB0:1;
          unsigned DCB1:1;
          unsigned :4;
          unsigned FLTMODE:1;
        };
      };
} typeOC2CON2BITS;
sfr volatile typeOC2CON2BITS OC2CON2bits absolute 0x19C;

// backward compatibility for OC3CON1BITS
    typedef struct tagOC3CON1BITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned TRIGMODE:1;
          unsigned OCFLT:3;
          unsigned ENFLT:3;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT0:1;
          unsigned OCFLT1:1;
          unsigned OCFLT2:1;
          unsigned ENFLT0:1;
          unsigned ENFLT1:1;
          unsigned ENFLT2:1;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
      };
} typeOC3CON1BITS;
sfr volatile typeOC3CON1BITS OC3CON1bits absolute 0x1A4;

// backward compatibility for OC3CON2BITS
    typedef struct tagOC3CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned OCTRIS:1;
          unsigned TRIGSTAT:1;
          unsigned OCTRIG:1;
          unsigned OC32:1;
          unsigned DCB:2;
          unsigned :1;
          unsigned OCINV:1;
          unsigned FLTTRIEN:1;
          unsigned FLTOUT:1;
          unsigned FLTMD:1;
        };
        struct {
          unsigned SYNCSEL0:1;
          unsigned SYNCSEL1:1;
          unsigned SYNCSEL2:1;
          unsigned SYNCSEL3:1;
          unsigned SYNCSEL4:1;
          unsigned :4;
          unsigned DCB0:1;
          unsigned DCB1:1;
          unsigned :4;
          unsigned FLTMODE:1;
        };
      };
} typeOC3CON2BITS;
sfr volatile typeOC3CON2BITS OC3CON2bits absolute 0x1A6;

// backward compatibility for OC4CON1BITS
    typedef struct tagOC4CON1BITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned TRIGMODE:1;
          unsigned OCFLT:3;
          unsigned ENFLT:3;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT0:1;
          unsigned OCFLT1:1;
          unsigned OCFLT2:1;
          unsigned ENFLT0:1;
          unsigned ENFLT1:1;
          unsigned ENFLT2:1;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
      };
} typeOC4CON1BITS;
sfr volatile typeOC4CON1BITS OC4CON1bits absolute 0x1AE;

// backward compatibility for OC4CON2BITS
    typedef struct tagOC4CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned OCTRIS:1;
          unsigned TRIGSTAT:1;
          unsigned OCTRIG:1;
          unsigned OC32:1;
          unsigned DCB:2;
          unsigned :1;
          unsigned OCINV:1;
          unsigned FLTTRIEN:1;
          unsigned FLTOUT:1;
          unsigned FLTMD:1;
        };
        struct {
          unsigned SYNCSEL0:1;
          unsigned SYNCSEL1:1;
          unsigned SYNCSEL2:1;
          unsigned SYNCSEL3:1;
          unsigned SYNCSEL4:1;
          unsigned :4;
          unsigned DCB0:1;
          unsigned DCB1:1;
          unsigned :4;
          unsigned FLTMODE:1;
        };
      };
} typeOC4CON2BITS;
sfr volatile typeOC4CON2BITS OC4CON2bits absolute 0x1B0;

// backward compatibility for OC5CON1BITS
    typedef struct tagOC5CON1BITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned TRIGMODE:1;
          unsigned OCFLT:3;
          unsigned ENFLT:3;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT0:1;
          unsigned OCFLT1:1;
          unsigned OCFLT2:1;
          unsigned ENFLT0:1;
          unsigned ENFLT1:1;
          unsigned ENFLT2:1;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
      };
} typeOC5CON1BITS;
sfr volatile typeOC5CON1BITS OC5CON1bits absolute 0x1B8;

// backward compatibility for OC5CON2BITS
    typedef struct tagOC5CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned OCTRIS:1;
          unsigned TRIGSTAT:1;
          unsigned OCTRIG:1;
          unsigned OC32:1;
          unsigned DCB:2;
          unsigned :1;
          unsigned OCINV:1;
          unsigned FLTTRIEN:1;
          unsigned FLTOUT:1;
          unsigned FLTMD:1;
        };
        struct {
          unsigned SYNCSEL0:1;
          unsigned SYNCSEL1:1;
          unsigned SYNCSEL2:1;
          unsigned SYNCSEL3:1;
          unsigned SYNCSEL4:1;
          unsigned :4;
          unsigned DCB0:1;
          unsigned DCB1:1;
          unsigned :4;
          unsigned FLTMODE:1;
        };
      };
} typeOC5CON2BITS;
sfr volatile typeOC5CON2BITS OC5CON2bits absolute 0x1BA;

// backward compatibility for I2C1CONBITS
    typedef struct tagI2C1CONBITS {
      unsigned SEN:1;
      unsigned RSEN:1;
      unsigned PEN:1;
      unsigned RCEN:1;
      unsigned ACKEN:1;
      unsigned ACKDT:1;
      unsigned STREN:1;
      unsigned GCEN:1;
      unsigned SMEN:1;
      unsigned DISSLW:1;
      unsigned A10M:1;
      unsigned IPMIEN:1;
      unsigned SCLREL:1;
      unsigned I2CSIDL:1;
      unsigned :1;
      unsigned I2CEN:1;
} typeI2C1CONBITS;
sfr volatile typeI2C1CONBITS I2C1CONbits absolute 0x206;

// backward compatibility for I2C1STATBITS
    typedef struct tagI2C1STATBITS {
      union {
        struct {
          unsigned TBF:1;
          unsigned RBF:1;
          unsigned R_NOT_W:1;
          unsigned S:1;
          unsigned P:1;
          unsigned D_NOT_A:1;
          unsigned I2COV:1;
          unsigned IWCOL:1;
          unsigned ADD10:1;
          unsigned GCSTAT:1;
          unsigned BCL:1;
          unsigned :3;
          unsigned TRSTAT:1;
          unsigned ACKSTAT:1;
        };
        struct {
          unsigned :2;
          unsigned R_W:1;
          unsigned :2;
          unsigned D_A:1;
        };
      };
} typeI2C1STATBITS;
sfr volatile typeI2C1STATBITS I2C1STATbits absolute 0x208;

// backward compatibility for I2C2CONBITS
    typedef struct tagI2C2CONBITS {
      unsigned SEN:1;
      unsigned RSEN:1;
      unsigned PEN:1;
      unsigned RCEN:1;
      unsigned ACKEN:1;
      unsigned ACKDT:1;
      unsigned STREN:1;
      unsigned GCEN:1;
      unsigned SMEN:1;
      unsigned DISSLW:1;
      unsigned A10M:1;
      unsigned IPMIEN:1;
      unsigned SCLREL:1;
      unsigned I2CSIDL:1;
      unsigned :1;
      unsigned I2CEN:1;
} typeI2C2CONBITS;
sfr volatile typeI2C2CONBITS I2C2CONbits absolute 0x216;

// backward compatibility for I2C2STATBITS
    typedef struct tagI2C2STATBITS {
      union {
        struct {
          unsigned TBF:1;
          unsigned RBF:1;
          unsigned R_NOT_W:1;
          unsigned S:1;
          unsigned P:1;
          unsigned D_NOT_A:1;
          unsigned I2COV:1;
          unsigned IWCOL:1;
          unsigned ADD10:1;
          unsigned GCSTAT:1;
          unsigned BCL:1;
          unsigned :3;
          unsigned TRSTAT:1;
          unsigned ACKSTAT:1;
        };
        struct {
          unsigned :2;
          unsigned R_W:1;
          unsigned :2;
          unsigned D_A:1;
        };
      };
} typeI2C2STATBITS;
sfr volatile typeI2C2STATBITS I2C2STATbits absolute 0x218;

// backward compatibility for UART
    typedef struct tagUART {
            unsigned int uxmode;
            unsigned int uxsta;
            unsigned int uxtxreg;
            unsigned int uxrxreg;
            unsigned int uxbrg;
} typeUART;
sfr volatile typeUART UART1 absolute 0x220;
sfr volatile typeUART UART2 absolute 0x230;

// backward compatibility for U1MODEBITS
    typedef struct tagU1MODEBITS {
      union {
        struct {
          unsigned STSEL:1;
          unsigned PDSEL:2;
          unsigned BRGH:1;
          unsigned RXINV:1;
          unsigned ABAUD:1;
          unsigned LPBACK:1;
          unsigned WAKE:1;
          unsigned UEN:2;
          unsigned :1;
          unsigned RTSMD:1;
          unsigned IREN:1;
          unsigned USIDL:1;
          unsigned :1;
          unsigned UARTEN:1;
        };
        struct {
          unsigned :1;
          unsigned PDSEL0:1;
          unsigned PDSEL1:1;
          unsigned :5;
          unsigned UEN0:1;
          unsigned UEN1:1;
        };
      };
} typeU1MODEBITS;
sfr volatile typeU1MODEBITS U1MODEbits absolute 0x220;

// backward compatibility for U1STABITS
    typedef struct tagU1STABITS {
      union {
        struct {
          unsigned URXDA:1;
          unsigned OERR:1;
          unsigned FERR:1;
          unsigned PERR:1;
          unsigned RIDLE:1;
          unsigned ADDEN:1;
          unsigned URXISEL:2;
          unsigned TRMT:1;
          unsigned UTXBF:1;
          unsigned UTXEN:1;
          unsigned UTXBRK:1;
          unsigned :1;
          unsigned UTXISEL0:1;
          unsigned UTXINV:1;
          unsigned UTXISEL1:1;
        };
        struct {
          unsigned :6;
          unsigned URXISEL0:1;
          unsigned URXISEL1:1;
        };
      };
} typeU1STABITS;
sfr volatile typeU1STABITS U1STAbits absolute 0x222;

// backward compatibility for U1TXREGBITS
    typedef struct tagU1TXREGBITS {
      unsigned UTXREG0:1;
      unsigned UTXREG1:1;
      unsigned UTXREG2:1;
      unsigned UTXREG3:1;
      unsigned UTXREG4:1;
      unsigned UTXREG5:1;
      unsigned UTXREG6:1;
      unsigned UTXREG7:1;
      unsigned UTXREG8:1;
} typeU1TXREGBITS;
sfr volatile typeU1TXREGBITS U1TXREGbits absolute 0x224;

// backward compatibility for U1RXREGBITS
    typedef struct tagU1RXREGBITS {
      unsigned URXREG0:1;
      unsigned URXREG1:1;
      unsigned URXREG2:1;
      unsigned URXREG3:1;
      unsigned URXREG4:1;
      unsigned URXREG5:1;
      unsigned URXREG6:1;
      unsigned URXREG7:1;
      unsigned URXREG8:1;
} typeU1RXREGBITS;
sfr volatile typeU1RXREGBITS U1RXREGbits absolute 0x226;

// backward compatibility for U2MODEBITS
    typedef struct tagU2MODEBITS {
      union {
        struct {
          unsigned STSEL:1;
          unsigned PDSEL:2;
          unsigned BRGH:1;
          unsigned RXINV:1;
          unsigned ABAUD:1;
          unsigned LPBACK:1;
          unsigned WAKE:1;
          unsigned UEN:2;
          unsigned :1;
          unsigned RTSMD:1;
          unsigned IREN:1;
          unsigned USIDL:1;
          unsigned :1;
          unsigned UARTEN:1;
        };
        struct {
          unsigned :1;
          unsigned PDSEL0:1;
          unsigned PDSEL1:1;
          unsigned :5;
          unsigned UEN0:1;
          unsigned UEN1:1;
        };
      };
} typeU2MODEBITS;
sfr volatile typeU2MODEBITS U2MODEbits absolute 0x230;

// backward compatibility for U2STABITS
    typedef struct tagU2STABITS {
      union {
        struct {
          unsigned URXDA:1;
          unsigned OERR:1;
          unsigned FERR:1;
          unsigned PERR:1;
          unsigned RIDLE:1;
          unsigned ADDEN:1;
          unsigned URXISEL:2;
          unsigned TRMT:1;
          unsigned UTXBF:1;
          unsigned UTXEN:1;
          unsigned UTXBRK:1;
          unsigned :1;
          unsigned UTXISEL0:1;
          unsigned UTXINV:1;
          unsigned UTXISEL1:1;
        };
        struct {
          unsigned :6;
          unsigned URXISEL0:1;
          unsigned URXISEL1:1;
        };
      };
} typeU2STABITS;
sfr volatile typeU2STABITS U2STAbits absolute 0x232;

// backward compatibility for U2TXREGBITS
    typedef struct tagU2TXREGBITS {
      unsigned UTXREG0:1;
      unsigned UTXREG1:1;
      unsigned UTXREG2:1;
      unsigned UTXREG3:1;
      unsigned UTXREG4:1;
      unsigned UTXREG5:1;
      unsigned UTXREG6:1;
      unsigned UTXREG7:1;
      unsigned UTXREG8:1;
} typeU2TXREGBITS;
sfr volatile typeU2TXREGBITS U2TXREGbits absolute 0x234;

// backward compatibility for U2RXREGBITS
    typedef struct tagU2RXREGBITS {
      unsigned URXREG0:1;
      unsigned URXREG1:1;
      unsigned URXREG2:1;
      unsigned URXREG3:1;
      unsigned URXREG4:1;
      unsigned URXREG5:1;
      unsigned URXREG6:1;
      unsigned URXREG7:1;
      unsigned URXREG8:1;
} typeU2RXREGBITS;
sfr volatile typeU2RXREGBITS U2RXREGbits absolute 0x236;

// backward compatibility for SPI
    typedef struct tagSPI {
            unsigned int spixstat;
            unsigned int spixcon1;
            unsigned int spixcon2;
            unsigned int unused;
            unsigned int spixbuf;
} typeSPI;
sfr volatile typeSPI SPI1 absolute 0x240;
sfr volatile typeSPI SPI2 absolute 0x260;

// backward compatibility for SPI1STATBITS
    typedef struct tagSPI1STATBITS {
      union {
        struct {
          unsigned SPIRBF:1;
          unsigned SPITBF:1;
          unsigned SISEL:3;
          unsigned SRXMPT:1;
          unsigned SPIROV:1;
          unsigned SRMPT:1;
          unsigned SPIBEC:3;
          unsigned :2;
          unsigned SPISIDL:1;
          unsigned :1;
          unsigned SPIEN:1;
        };
        struct {
          unsigned :2;
          unsigned SISEL0:1;
          unsigned SISEL1:1;
          unsigned SISEL2:1;
          unsigned :3;
          unsigned SPIBEC0:1;
          unsigned SPIBEC1:1;
          unsigned SPIBEC2:1;
        };
      };
} typeSPI1STATBITS;
sfr volatile typeSPI1STATBITS SPI1STATbits absolute 0x240;

// backward compatibility for SPI1CON1BITS
    typedef struct tagSPI1CON1BITS {
      union {
        struct {
          unsigned PPRE:2;
          unsigned SPRE:3;
          unsigned MSTEN:1;
          unsigned CKP:1;
          unsigned SSEN:1;
          unsigned CKE:1;
          unsigned SMP:1;
          unsigned MODE16:1;
          unsigned DISSDO:1;
          unsigned DISSCK:1;
        };
        struct {
          unsigned PPRE0:1;
          unsigned PPRE1:1;
          unsigned SPRE0:1;
          unsigned SPRE1:1;
          unsigned SPRE2:1;
        };
      };
} typeSPI1CON1BITS;
sfr volatile typeSPI1CON1BITS SPI1CON1bits absolute 0x242;

// backward compatibility for SPI1CON2BITS
    typedef struct tagSPI1CON2BITS {
      unsigned SPIBEN:1;
      unsigned SPIFE:1;
      unsigned :11;
      unsigned SPIFPOL:1;
      unsigned SPIFSD:1;
      unsigned FRMEN:1;
} typeSPI1CON2BITS;
sfr volatile typeSPI1CON2BITS SPI1CON2bits absolute 0x244;

// backward compatibility for SPI2STATBITS
    typedef struct tagSPI2STATBITS {
      union {
        struct {
          unsigned SPIRBF:1;
          unsigned SPITBF:1;
          unsigned SISEL:3;
          unsigned SRXMPT:1;
          unsigned SPIROV:1;
          unsigned SRMPT:1;
          unsigned SPIBEC:3;
          unsigned :2;
          unsigned SPISIDL:1;
          unsigned :1;
          unsigned SPIEN:1;
        };
        struct {
          unsigned :2;
          unsigned SISEL0:1;
          unsigned SISEL1:1;
          unsigned SISEL2:1;
          unsigned :3;
          unsigned SPIBEC0:1;
          unsigned SPIBEC1:1;
          unsigned SPIBEC2:1;
        };
      };
} typeSPI2STATBITS;
sfr volatile typeSPI2STATBITS SPI2STATbits absolute 0x260;

// backward compatibility for SPI2CON1BITS
    typedef struct tagSPI2CON1BITS {
      union {
        struct {
          unsigned PPRE:2;
          unsigned SPRE:3;
          unsigned MSTEN:1;
          unsigned CKP:1;
          unsigned SSEN:1;
          unsigned CKE:1;
          unsigned SMP:1;
          unsigned MODE16:1;
          unsigned DISSDO:1;
          unsigned DISSCK:1;
        };
        struct {
          unsigned PPRE0:1;
          unsigned PPRE1:1;
          unsigned SPRE0:1;
          unsigned SPRE1:1;
          unsigned SPRE2:1;
        };
      };
} typeSPI2CON1BITS;
sfr volatile typeSPI2CON1BITS SPI2CON1bits absolute 0x262;

// backward compatibility for SPI2CON2BITS
    typedef struct tagSPI2CON2BITS {
      unsigned SPIBEN:1;
      unsigned SPIFE:1;
      unsigned :11;
      unsigned SPIFPOL:1;
      unsigned SPIFSD:1;
      unsigned FRMEN:1;
} typeSPI2CON2BITS;
sfr volatile typeSPI2CON2BITS SPI2CON2bits absolute 0x264;

// backward compatibility for TRISABITS
    typedef struct tagTRISABITS {
      unsigned TRISA0:1;
      unsigned TRISA1:1;
      unsigned TRISA2:1;
      unsigned TRISA3:1;
      unsigned TRISA4:1;
} typeTRISABITS;
sfr volatile typeTRISABITS TRISAbits absolute 0x2C0;

// backward compatibility for PORTABITS
    typedef struct tagPORTABITS {
      unsigned RA0:1;
      unsigned RA1:1;
      unsigned RA2:1;
      unsigned RA3:1;
      unsigned RA4:1;
} typePORTABITS;
sfr volatile typePORTABITS PORTAbits absolute 0x2C2;

// backward compatibility for LATABITS
    typedef struct tagLATABITS {
      unsigned LATA0:1;
      unsigned LATA1:1;
      unsigned LATA2:1;
      unsigned LATA3:1;
      unsigned LATA4:1;
} typeLATABITS;
sfr volatile typeLATABITS LATAbits absolute 0x2C4;

// backward compatibility for ODCABITS
    typedef struct tagODCABITS {
      unsigned ODA0:1;
      unsigned ODA1:1;
      unsigned ODA2:1;
      unsigned ODA3:1;
      unsigned ODA4:1;
} typeODCABITS;
sfr volatile typeODCABITS ODCAbits absolute 0x2C6;

// backward compatibility for TRISBBITS
    typedef struct tagTRISBBITS {
      unsigned TRISB0:1;
      unsigned TRISB1:1;
      unsigned TRISB2:1;
      unsigned TRISB3:1;
      unsigned TRISB4:1;
      unsigned TRISB5:1;
      unsigned TRISB6:1;
      unsigned TRISB7:1;
      unsigned TRISB8:1;
      unsigned TRISB9:1;
      unsigned TRISB10:1;
      unsigned TRISB11:1;
      unsigned TRISB12:1;
      unsigned TRISB13:1;
      unsigned TRISB14:1;
      unsigned TRISB15:1;
} typeTRISBBITS;
sfr volatile typeTRISBBITS TRISBbits absolute 0x2C8;

// backward compatibility for PORTBBITS
    typedef struct tagPORTBBITS {
      unsigned RB0:1;
      unsigned RB1:1;
      unsigned RB2:1;
      unsigned RB3:1;
      unsigned RB4:1;
      unsigned RB5:1;
      unsigned RB6:1;
      unsigned RB7:1;
      unsigned RB8:1;
      unsigned RB9:1;
      unsigned RB10:1;
      unsigned RB11:1;
      unsigned RB12:1;
      unsigned RB13:1;
      unsigned RB14:1;
      unsigned RB15:1;
} typePORTBBITS;
sfr volatile typePORTBBITS PORTBbits absolute 0x2CA;

// backward compatibility for LATBBITS
    typedef struct tagLATBBITS {
      unsigned LATB0:1;
      unsigned LATB1:1;
      unsigned LATB2:1;
      unsigned LATB3:1;
      unsigned LATB4:1;
      unsigned LATB5:1;
      unsigned LATB6:1;
      unsigned LATB7:1;
      unsigned LATB8:1;
      unsigned LATB9:1;
      unsigned LATB10:1;
      unsigned LATB11:1;
      unsigned LATB12:1;
      unsigned LATB13:1;
      unsigned LATB14:1;
      unsigned LATB15:1;
} typeLATBBITS;
sfr volatile typeLATBBITS LATBbits absolute 0x2CC;

// backward compatibility for ODCBBITS
    typedef struct tagODCBBITS {
      unsigned ODB0:1;
      unsigned ODB1:1;
      unsigned ODB2:1;
      unsigned ODB3:1;
      unsigned ODB4:1;
      unsigned ODB5:1;
      unsigned ODB6:1;
      unsigned ODB7:1;
      unsigned ODB8:1;
      unsigned ODB9:1;
      unsigned ODB10:1;
      unsigned ODB11:1;
      unsigned ODB12:1;
      unsigned ODB13:1;
      unsigned ODB14:1;
      unsigned ODB15:1;
} typeODCBBITS;
sfr volatile typeODCBBITS ODCBbits absolute 0x2CE;

// backward compatibility for PADCFG1BITS
    typedef struct tagPADCFG1BITS {
      union {
        struct {
          unsigned PMPTTL:1;
          unsigned RTSECSEL:2;
        };
        struct {
          unsigned :1;
          unsigned RTSECSEL0:1;
          unsigned RTSECSEL1:1;
        };
      };
} typePADCFG1BITS;
sfr volatile typePADCFG1BITS PADCFG1bits absolute 0x2FC;

// backward compatibility for AD1CON1BITS
    typedef struct tagAD1CON1BITS {
      union {
        struct {
          unsigned DONE:1;
          unsigned SAMP:1;
          unsigned ASAM:1;
          unsigned :2;
          unsigned SSRC:3;
          unsigned FORM:2;
          unsigned :3;
          unsigned ADSIDL:1;
          unsigned :1;
          unsigned ADON:1;
        };
        struct {
          unsigned :5;
          unsigned SSRC0:1;
          unsigned SSRC1:1;
          unsigned SSRC2:1;
          unsigned FORM0:1;
          unsigned FORM1:1;
        };
      };
} typeAD1CON1BITS;
sfr volatile typeAD1CON1BITS AD1CON1bits absolute 0x320;

// backward compatibility for AD1CON2BITS
    typedef struct tagAD1CON2BITS {
      union {
        struct {
          unsigned ALTS:1;
          unsigned BUFM:1;
          unsigned SMPI:4;
          unsigned :1;
          unsigned BUFS:1;
          unsigned :2;
          unsigned CSCNA:1;
          unsigned :2;
          unsigned VCFG:3;
        };
        struct {
          unsigned :2;
          unsigned SMPI0:1;
          unsigned SMPI1:1;
          unsigned SMPI2:1;
          unsigned SMPI3:1;
          unsigned :7;
          unsigned VCFG0:1;
          unsigned VCFG1:1;
          unsigned VCFG2:1;
        };
      };
} typeAD1CON2BITS;
sfr volatile typeAD1CON2BITS AD1CON2bits absolute 0x322;

// backward compatibility for AD1CON3BITS
    typedef struct tagAD1CON3BITS {
      union {
        struct {
          unsigned ADCS:8;
          unsigned SAMC:5;
          unsigned :2;
          unsigned ADRC:1;
        };
        struct {
          unsigned ADCS0:1;
          unsigned ADCS1:1;
          unsigned ADCS2:1;
          unsigned ADCS3:1;
          unsigned ADCS4:1;
          unsigned ADCS5:1;
          unsigned ADCS6:1;
          unsigned ADCS7:1;
          unsigned SAMC0:1;
          unsigned SAMC1:1;
          unsigned SAMC2:1;
          unsigned SAMC3:1;
          unsigned SAMC4:1;
        };
      };
} typeAD1CON3BITS;
sfr volatile typeAD1CON3BITS AD1CON3bits absolute 0x324;

// backward compatibility for AD1CHSBITS
    typedef struct tagAD1CHSBITS {
      union {
        struct {
          unsigned CH0SA:5;
          unsigned :2;
          unsigned CH0NA:1;
          unsigned CH0SB:5;
          unsigned :2;
          unsigned CH0NB:1;
        };
        struct {
          unsigned CH0SA0:1;
          unsigned CH0SA1:1;
          unsigned CH0SA2:1;
          unsigned CH0SA3:1;
          unsigned CH0SA4:1;
          unsigned :3;
          unsigned CH0SB0:1;
          unsigned CH0SB1:1;
          unsigned CH0SB2:1;
          unsigned CH0SB3:1;
          unsigned CH0SB4:1;
        };
      };
} typeAD1CHSBITS;
sfr volatile typeAD1CHSBITS AD1CHSbits absolute 0x328;

// backward compatibility for AD1CHS0BITS
    typedef struct tagAD1CHS0BITS {
      union {
        struct {
          unsigned CH0SA:5;
          unsigned :2;
          unsigned CH0NA:1;
          unsigned CH0SB:5;
          unsigned :2;
          unsigned CH0NB:1;
        };
        struct {
          unsigned CH0SA0:1;
          unsigned CH0SA1:1;
          unsigned CH0SA2:1;
          unsigned CH0SA3:1;
          unsigned CH0SA4:1;
          unsigned :3;
          unsigned CH0SB0:1;
          unsigned CH0SB1:1;
          unsigned CH0SB2:1;
          unsigned CH0SB3:1;
          unsigned CH0SB4:1;
        };
      };
} typeAD1CHS0BITS;
sfr volatile typeAD1CHS0BITS AD1CHS0bits absolute 0x328;

// backward compatibility for AD1PCFGBITS
    typedef struct tagAD1PCFGBITS {
      union {
        struct {
          unsigned PCFG:16;
        };
        struct {
          unsigned PCFG0:1;
          unsigned PCFG1:1;
          unsigned PCFG2:1;
          unsigned PCFG3:1;
          unsigned PCFG4:1;
          unsigned PCFG5:1;
          unsigned PCFG6:1;
          unsigned PCFG7:1;
          unsigned PCFG8:1;
          unsigned PCFG9:1;
          unsigned PCFG10:1;
          unsigned PCFG11:1;
          unsigned PCFG12:1;
          unsigned PCFG13:1;
          unsigned PCFG14:1;
          unsigned PCFG15:1;
        };
      };
} typeAD1PCFGBITS;
sfr volatile typeAD1PCFGBITS AD1PCFGbits absolute 0x32C;

// backward compatibility for AD1PCFGLBITS
    typedef struct tagAD1PCFGLBITS {
      union {
        struct {
          unsigned PCFG:16;
        };
        struct {
          unsigned PCFG0:1;
          unsigned PCFG1:1;
          unsigned PCFG2:1;
          unsigned PCFG3:1;
          unsigned PCFG4:1;
          unsigned PCFG5:1;
          unsigned PCFG6:1;
          unsigned PCFG7:1;
          unsigned PCFG8:1;
          unsigned PCFG9:1;
          unsigned PCFG10:1;
          unsigned PCFG11:1;
          unsigned PCFG12:1;
          unsigned PCFG13:1;
          unsigned PCFG14:1;
          unsigned PCFG15:1;
        };
      };
} typeAD1PCFGLBITS;
sfr volatile typeAD1PCFGLBITS AD1PCFGLbits absolute 0x32C;

// backward compatibility for AD1CSSLBITS
    typedef struct tagAD1CSSLBITS {
      union {
        struct {
          unsigned CSSL:16;
        };
        struct {
          unsigned CSSL0:1;
          unsigned CSSL1:1;
          unsigned CSSL2:1;
          unsigned CSSL3:1;
          unsigned CSSL4:1;
          unsigned CSSL5:1;
          unsigned CSSL6:1;
          unsigned CSSL7:1;
          unsigned CSSL8:1;
          unsigned CSSL9:1;
          unsigned CSSL10:1;
          unsigned CSSL11:1;
          unsigned CSSL12:1;
          unsigned CSSL13:1;
          unsigned CSSL14:1;
          unsigned CSSL15:1;
        };
      };
} typeAD1CSSLBITS;
sfr volatile typeAD1CSSLBITS AD1CSSLbits absolute 0x330;

// backward compatibility for CTMUCONBITS
    typedef struct tagCTMUCONBITS {
      union {
        struct {
          unsigned EDG1STAT:1;
          unsigned EDG2STAT:1;
          unsigned EDG1SEL:2;
          unsigned EDG1POL:1;
          unsigned EDG2SEL:2;
          unsigned EDG2POL:1;
          unsigned CTTRIG:1;
          unsigned IDISSEN:1;
          unsigned EDGSEQEN:1;
          unsigned EDGEN:1;
          unsigned TGEN:1;
          unsigned CTMUSIDL:1;
          unsigned :1;
          unsigned CTMUEN:1;
        };
        struct {
          unsigned :2;
          unsigned EDG1SEL0:1;
          unsigned EDG1SEL1:1;
          unsigned :1;
          unsigned EDG2SEL0:1;
          unsigned EDG2SEL1:1;
        };
      };
} typeCTMUCONBITS;
sfr volatile typeCTMUCONBITS CTMUCONbits absolute 0x33C;

// backward compatibility for CTMUICONBITS
    typedef struct tagCTMUICONBITS {
      union {
        struct {
          unsigned :8;
          unsigned IRNG:2;
          unsigned ITRIM:6;
        };
        struct {
          unsigned :8;
          unsigned IRNG0:1;
          unsigned IRNG1:1;
          unsigned ITRIM0:1;
          unsigned ITRIM1:1;
          unsigned ITRIM2:1;
          unsigned ITRIM3:1;
          unsigned ITRIM4:1;
          unsigned ITRIM5:1;
        };
      };
} typeCTMUICONBITS;
sfr volatile typeCTMUICONBITS CTMUICONbits absolute 0x33E;

// backward compatibility for PMCONBITS
    typedef struct tagPMCONBITS {
      union {
        struct {
          unsigned RDSP:1;
          unsigned WRSP:1;
          unsigned BEP:1;
          unsigned CS1P:1;
          unsigned :1;
          unsigned ALP:1;
          unsigned CSF:2;
          unsigned PTRDEN:1;
          unsigned PTWREN:1;
          unsigned PTBEEN:1;
          unsigned ADRMUX:2;
          unsigned PSIDL:1;
          unsigned :1;
          unsigned PMPEN:1;
        };
        struct {
          unsigned :6;
          unsigned CSF0:1;
          unsigned CSF1:1;
          unsigned :3;
          unsigned ADRMUX0:1;
          unsigned ADRMUX1:1;
        };
      };
} typePMCONBITS;
sfr volatile typePMCONBITS PMCONbits absolute 0x600;

// backward compatibility for PMMODEBITS
    typedef struct tagPMMODEBITS {
      union {
        struct {
          unsigned WAITE:2;
          unsigned WAITM:4;
          unsigned WAITB:2;
          unsigned MODE:2;
          unsigned MODE16:1;
          unsigned INCM:2;
          unsigned IRQM:2;
          unsigned BUSY:1;
        };
        struct {
          unsigned WAITE0:1;
          unsigned WAITE1:1;
          unsigned WAITM0:1;
          unsigned WAITM1:1;
          unsigned WAITM2:1;
          unsigned WAITM3:1;
          unsigned WAITB0:1;
          unsigned WAITB1:1;
          unsigned MODE0:1;
          unsigned MODE1:1;
          unsigned :1;
          unsigned INCM0:1;
          unsigned INCM1:1;
          unsigned IRQM0:1;
          unsigned IRQM1:1;
        };
      };
} typePMMODEBITS;
sfr volatile typePMMODEBITS PMMODEbits absolute 0x602;

// backward compatibility for PMADDRBITS
    typedef struct tagPMADDRBITS {
      union {
        struct {
          unsigned ADDR:11;
          unsigned :3;
          unsigned CS1:1;
        };
        struct {
          unsigned ADDR0:1;
          unsigned ADDR1:1;
          unsigned ADDR2:1;
          unsigned ADDR3:1;
          unsigned ADDR4:1;
          unsigned ADDR5:1;
          unsigned ADDR6:1;
          unsigned ADDR7:1;
          unsigned ADDR8:1;
          unsigned ADDR9:1;
          unsigned ADDR10:1;
          unsigned :3;
          unsigned CS:1;
        };
      };
} typePMADDRBITS;
sfr volatile typePMADDRBITS PMADDRbits absolute 0x604;

// backward compatibility for PMAENBITS
    typedef struct tagPMAENBITS {
      union {
        struct {
          unsigned PTEN:11;
          unsigned :3;
          unsigned PTEN14:1;
        };
        struct {
          unsigned PTEN0:1;
          unsigned PTEN1:1;
          unsigned PTEN2:1;
          unsigned PTEN3:1;
          unsigned PTEN4:1;
          unsigned PTEN5:1;
          unsigned PTEN6:1;
          unsigned PTEN7:1;
          unsigned PTEN8:1;
          unsigned PTEN9:1;
          unsigned PTEN10:1;
        };
      };
} typePMAENBITS;
sfr volatile typePMAENBITS PMAENbits absolute 0x60C;

// backward compatibility for PMSTATBITS
    typedef struct tagPMSTATBITS {
      unsigned OB0E:1;
      unsigned OB1E:1;
      unsigned OB2E:1;
      unsigned OB3E:1;
      unsigned :2;
      unsigned OBUF:1;
      unsigned OBE:1;
      unsigned IB0F:1;
      unsigned IB1F:1;
      unsigned IB2F:1;
      unsigned IB3F:1;
      unsigned :2;
      unsigned IBOV:1;
      unsigned IBF:1;
} typePMSTATBITS;
sfr volatile typePMSTATBITS PMSTATbits absolute 0x60E;

// backward compatibility for ALCFGRPTBITS
    typedef struct tagALCFGRPTBITS {
      union {
        struct {
          unsigned ARPT:8;
          unsigned ALRMPTR:2;
          unsigned AMASK:4;
          unsigned CHIME:1;
          unsigned ALRMEN:1;
        };
        struct {
          unsigned ARPT0:1;
          unsigned ARPT1:1;
          unsigned ARPT2:1;
          unsigned ARPT3:1;
          unsigned ARPT4:1;
          unsigned ARPT5:1;
          unsigned ARPT6:1;
          unsigned ARPT7:1;
          unsigned ALRMPTR0:1;
          unsigned ALRMPTR1:1;
          unsigned AMASK0:1;
          unsigned AMASK1:1;
          unsigned AMASK2:1;
          unsigned AMASK3:1;
        };
      };
} typeALCFGRPTBITS;
sfr volatile typeALCFGRPTBITS ALCFGRPTbits absolute 0x622;

// backward compatibility for RCFGCALBITS
    typedef struct tagRCFGCALBITS {
      union {
        struct {
          unsigned CAL:8;
          unsigned RTCPTR:2;
          unsigned RTCOE:1;
          unsigned HALFSEC:1;
          unsigned RTCSYNC:1;
          unsigned RTCWREN:1;
          unsigned :1;
          unsigned RTCEN:1;
        };
        struct {
          unsigned CAL0:1;
          unsigned CAL1:1;
          unsigned CAL2:1;
          unsigned CAL3:1;
          unsigned CAL4:1;
          unsigned CAL5:1;
          unsigned CAL6:1;
          unsigned CAL7:1;
          unsigned RTCPTR0:1;
          unsigned RTCPTR1:1;
        };
      };
} typeRCFGCALBITS;
sfr volatile typeRCFGCALBITS RCFGCALbits absolute 0x626;

// backward compatibility for CRCCONBITS
    typedef struct tagCRCCONBITS {
      union {
        struct {
          unsigned :3;
          unsigned LENDIAN:1;
          unsigned CRCGO:1;
          unsigned CRCISEL:1;
          unsigned CRCMPT:1;
          unsigned CRCFUL:1;
          unsigned VWORD:5;
          unsigned CSIDL:1;
          unsigned :1;
          unsigned CRCEN:1;
        };
        struct {
          unsigned :8;
          unsigned VWORD0:1;
          unsigned VWORD1:1;
          unsigned VWORD2:1;
          unsigned VWORD3:1;
          unsigned VWORD4:1;
        };
      };
} typeCRCCONBITS;
sfr volatile typeCRCCONBITS CRCCONbits absolute 0x640;

// backward compatibility for CRCCON1BITS
    typedef struct tagCRCCON1BITS {
      union {
        struct {
          unsigned :3;
          unsigned LENDIAN:1;
          unsigned CRCGO:1;
          unsigned CRCISEL:1;
          unsigned CRCMPT:1;
          unsigned CRCFUL:1;
          unsigned VWORD:5;
          unsigned CSIDL:1;
          unsigned :1;
          unsigned CRCEN:1;
        };
        struct {
          unsigned :8;
          unsigned VWORD0:1;
          unsigned VWORD1:1;
          unsigned VWORD2:1;
          unsigned VWORD3:1;
          unsigned VWORD4:1;
        };
      };
} typeCRCCON1BITS;
sfr volatile typeCRCCON1BITS CRCCON1bits absolute 0x640;

// backward compatibility for CRCCON2BITS
    typedef struct tagCRCCON2BITS {
      union {
        struct {
          unsigned PLEN:5;
          unsigned :3;
          unsigned DWIDTH:5;
        };
        struct {
          unsigned PLEN0:1;
          unsigned PLEN1:1;
          unsigned PLEN2:1;
          unsigned PLEN3:1;
          unsigned PLEN4:1;
          unsigned :3;
          unsigned DWIDTH0:1;
          unsigned DWIDTH1:1;
          unsigned DWIDTH2:1;
          unsigned DWIDTH3:1;
          unsigned DWIDTH4:1;
        };
      };
} typeCRCCON2BITS;
sfr volatile typeCRCCON2BITS CRCCON2bits absolute 0x642;

// backward compatibility for CRCXORBITS
    typedef struct tagCRCXORBITS {
      unsigned :1;
      unsigned X1:1;
      unsigned X2:1;
      unsigned X3:1;
      unsigned X4:1;
      unsigned X5:1;
      unsigned X6:1;
      unsigned X7:1;
      unsigned X8:1;
      unsigned X9:1;
      unsigned X10:1;
      unsigned X11:1;
      unsigned X12:1;
      unsigned X13:1;
      unsigned X14:1;
      unsigned X15:1;
} typeCRCXORBITS;
sfr volatile typeCRCXORBITS CRCXORbits absolute 0x644;

// backward compatibility for CRCXORLBITS
    typedef struct tagCRCXORLBITS {
      unsigned :1;
      unsigned X1:1;
      unsigned X2:1;
      unsigned X3:1;
      unsigned X4:1;
      unsigned X5:1;
      unsigned X6:1;
      unsigned X7:1;
      unsigned X8:1;
      unsigned X9:1;
      unsigned X10:1;
      unsigned X11:1;
      unsigned X12:1;
      unsigned X13:1;
      unsigned X14:1;
      unsigned X15:1;
} typeCRCXORLBITS;
sfr volatile typeCRCXORLBITS CRCXORLbits absolute 0x644;

// backward compatibility for CRCXORHBITS
    typedef struct tagCRCXORHBITS {
      unsigned X16:1;
      unsigned X17:1;
      unsigned X18:1;
      unsigned X19:1;
      unsigned X20:1;
      unsigned X21:1;
      unsigned X22:1;
      unsigned X23:1;
      unsigned X24:1;
      unsigned X25:1;
      unsigned X26:1;
      unsigned X27:1;
      unsigned X28:1;
      unsigned X29:1;
      unsigned X30:1;
      unsigned X31:1;
} typeCRCXORHBITS;
sfr volatile typeCRCXORHBITS CRCXORHbits absolute 0x646;

// backward compatibility for CMSTATBITS
    typedef struct tagCMSTATBITS {
      unsigned C1OUT:1;
      unsigned C2OUT:1;
      unsigned C3OUT:1;
      unsigned :5;
      unsigned C1EVT:1;
      unsigned C2EVT:1;
      unsigned C3EVT:1;
      unsigned :4;
      unsigned CMIDL:1;
} typeCMSTATBITS;
sfr volatile typeCMSTATBITS CMSTATbits absolute 0x650;

// backward compatibility for CVRCONBITS
    typedef struct tagCVRCONBITS {
      union {
        struct {
          unsigned CVR:4;
          unsigned CVRSS:1;
          unsigned CVRR:1;
          unsigned CVROE:1;
          unsigned CVREN:1;
          unsigned CVREFM:2;
          unsigned CVREFP:1;
        };
        struct {
          unsigned CVR0:1;
          unsigned CVR1:1;
          unsigned CVR2:1;
          unsigned CVR3:1;
          unsigned :4;
          unsigned CVREFM0:1;
          unsigned CVREFM1:1;
        };
      };
} typeCVRCONBITS;
sfr volatile typeCVRCONBITS CVRCONbits absolute 0x652;

// backward compatibility for CM1CONBITS
    typedef struct tagCM1CONBITS {
      union {
        struct {
          unsigned CCH:2;
          unsigned :2;
          unsigned CREF:1;
          unsigned :1;
          unsigned EVPOL:2;
          unsigned COUT:1;
          unsigned CEVT:1;
          unsigned :3;
          unsigned CPOL:1;
          unsigned COE:1;
          unsigned CON:1;
        };
        struct {
          unsigned CCH0:1;
          unsigned CCH1:1;
          unsigned :4;
          unsigned EVPOL0:1;
          unsigned EVPOL1:1;
          unsigned :7;
          unsigned CEN:1;
        };
      };
} typeCM1CONBITS;
sfr volatile typeCM1CONBITS CM1CONbits absolute 0x654;

// backward compatibility for CM2CONBITS
    typedef struct tagCM2CONBITS {
      union {
        struct {
          unsigned CCH:2;
          unsigned :2;
          unsigned CREF:1;
          unsigned :1;
          unsigned EVPOL:2;
          unsigned COUT:1;
          unsigned CEVT:1;
          unsigned :3;
          unsigned CPOL:1;
          unsigned COE:1;
          unsigned CON:1;
        };
        struct {
          unsigned CCH0:1;
          unsigned CCH1:1;
          unsigned :4;
          unsigned EVPOL0:1;
          unsigned EVPOL1:1;
          unsigned :7;
          unsigned CEN:1;
        };
      };
} typeCM2CONBITS;
sfr volatile typeCM2CONBITS CM2CONbits absolute 0x65C;

// backward compatibility for CM3CONBITS
    typedef struct tagCM3CONBITS {
      union {
        struct {
          unsigned CCH0:1;
          unsigned CCH1:1;
          unsigned :2;
          unsigned CREF:1;
          unsigned :1;
          unsigned EVPOL0:1;
          unsigned EVPOL1:1;
          unsigned COUT:1;
          unsigned CEVT:1;
          unsigned :3;
          unsigned CPOL:1;
          unsigned COE:1;
          unsigned CON:1;
        };
        struct {
          unsigned CCH:2;
          unsigned :4;
          unsigned EVPOL:2;
          unsigned :7;
          unsigned CEN:1;
        };
      };
} typeCM3CONBITS;
sfr volatile typeCM3CONBITS CM3CONbits absolute 0x664;

// backward compatibility for RPINR0BITS
    typedef struct tagRPINR0BITS {
      union {
        struct {
          unsigned :8;
          unsigned INT1R:5;
        };
        struct {
          unsigned :8;
          unsigned INT1R0:1;
          unsigned INT1R1:1;
          unsigned INT1R2:1;
          unsigned INT1R3:1;
          unsigned INT1R4:1;
        };
      };
} typeRPINR0BITS;
sfr volatile typeRPINR0BITS RPINR0bits absolute 0x680;

// backward compatibility for RPINR1BITS
    typedef struct tagRPINR1BITS {
      union {
        struct {
          unsigned INT2R:5;
        };
        struct {
          unsigned INT2R0:1;
          unsigned INT2R1:1;
          unsigned INT2R2:1;
          unsigned INT2R3:1;
          unsigned INT2R4:1;
        };
      };
} typeRPINR1BITS;
sfr volatile typeRPINR1BITS RPINR1bits absolute 0x682;

// backward compatibility for RPINR3BITS
    typedef struct tagRPINR3BITS {
      union {
        struct {
          unsigned T2CKR:5;
          unsigned :3;
          unsigned T3CKR:5;
        };
        struct {
          unsigned T2CKR0:1;
          unsigned T2CKR1:1;
          unsigned T2CKR2:1;
          unsigned T2CKR3:1;
          unsigned T2CKR4:1;
          unsigned :3;
          unsigned T3CKR0:1;
          unsigned T3CKR1:1;
          unsigned T3CKR2:1;
          unsigned T3CKR3:1;
          unsigned T3CKR4:1;
        };
      };
} typeRPINR3BITS;
sfr volatile typeRPINR3BITS RPINR3bits absolute 0x686;

// backward compatibility for RPINR4BITS
    typedef struct tagRPINR4BITS {
      union {
        struct {
          unsigned T4CKR:5;
          unsigned :3;
          unsigned T5CKR:5;
        };
        struct {
          unsigned T4CKR0:1;
          unsigned T4CKR1:1;
          unsigned T4CKR2:1;
          unsigned T4CKR3:1;
          unsigned T4CKR4:1;
          unsigned :3;
          unsigned T5CKR0:1;
          unsigned T5CKR1:1;
          unsigned T5CKR2:1;
          unsigned T5CKR3:1;
          unsigned T5CKR4:1;
        };
      };
} typeRPINR4BITS;
sfr volatile typeRPINR4BITS RPINR4bits absolute 0x688;

// backward compatibility for RPINR7BITS
    typedef struct tagRPINR7BITS {
      union {
        struct {
          unsigned IC1R:5;
          unsigned :3;
          unsigned IC2R:5;
        };
        struct {
          unsigned IC1R0:1;
          unsigned IC1R1:1;
          unsigned IC1R2:1;
          unsigned IC1R3:1;
          unsigned IC1R4:1;
          unsigned :3;
          unsigned IC2R0:1;
          unsigned IC2R1:1;
          unsigned IC2R2:1;
          unsigned IC2R3:1;
          unsigned IC2R4:1;
        };
      };
} typeRPINR7BITS;
sfr volatile typeRPINR7BITS RPINR7bits absolute 0x68E;

// backward compatibility for RPINR8BITS
    typedef struct tagRPINR8BITS {
      union {
        struct {
          unsigned IC3R:5;
          unsigned :3;
          unsigned IC4R:5;
        };
        struct {
          unsigned IC3R0:1;
          unsigned IC3R1:1;
          unsigned IC3R2:1;
          unsigned IC3R3:1;
          unsigned IC3R4:1;
          unsigned :3;
          unsigned IC4R0:1;
          unsigned IC4R1:1;
          unsigned IC4R2:1;
          unsigned IC4R3:1;
          unsigned IC4R4:1;
        };
      };
} typeRPINR8BITS;
sfr volatile typeRPINR8BITS RPINR8bits absolute 0x690;

// backward compatibility for RPINR9BITS
    typedef struct tagRPINR9BITS {
      union {
        struct {
          unsigned IC5R:5;
        };
        struct {
          unsigned IC5R0:1;
          unsigned IC5R1:1;
          unsigned IC5R2:1;
          unsigned IC5R3:1;
          unsigned IC5R4:1;
        };
      };
} typeRPINR9BITS;
sfr volatile typeRPINR9BITS RPINR9bits absolute 0x692;

// backward compatibility for RPINR11BITS
    typedef struct tagRPINR11BITS {
      union {
        struct {
          unsigned OCFAR:5;
          unsigned :3;
          unsigned OCFBR:5;
        };
        struct {
          unsigned OCFAR0:1;
          unsigned OCFAR1:1;
          unsigned OCFAR2:1;
          unsigned OCFAR3:1;
          unsigned OCFAR4:1;
          unsigned :3;
          unsigned OCFBR0:1;
          unsigned OCFBR1:1;
          unsigned OCFBR2:1;
          unsigned OCFBR3:1;
          unsigned OCFBR4:1;
        };
      };
} typeRPINR11BITS;
sfr volatile typeRPINR11BITS RPINR11bits absolute 0x696;

// backward compatibility for RPINR18BITS
    typedef struct tagRPINR18BITS {
      union {
        struct {
          unsigned U1RXR:5;
          unsigned :3;
          unsigned U1CTSR:5;
        };
        struct {
          unsigned U1RXR0:1;
          unsigned U1RXR1:1;
          unsigned U1RXR2:1;
          unsigned U1RXR3:1;
          unsigned U1RXR4:1;
          unsigned :3;
          unsigned U1CTSR0:1;
          unsigned U1CTSR1:1;
          unsigned U1CTSR2:1;
          unsigned U1CTSR3:1;
          unsigned U1CTSR4:1;
        };
      };
} typeRPINR18BITS;
sfr volatile typeRPINR18BITS RPINR18bits absolute 0x6A4;

// backward compatibility for RPINR19BITS
    typedef struct tagRPINR19BITS {
      union {
        struct {
          unsigned U2RXR:5;
          unsigned :3;
          unsigned U2CTSR:5;
        };
        struct {
          unsigned U2RXR0:1;
          unsigned U2RXR1:1;
          unsigned U2RXR2:1;
          unsigned U2RXR3:1;
          unsigned U2RXR4:1;
          unsigned :3;
          unsigned U2CTSR0:1;
          unsigned U2CTSR1:1;
          unsigned U2CTSR2:1;
          unsigned U2CTSR3:1;
          unsigned U2CTSR4:1;
        };
      };
} typeRPINR19BITS;
sfr volatile typeRPINR19BITS RPINR19bits absolute 0x6A6;

// backward compatibility for RPINR20BITS
    typedef struct tagRPINR20BITS {
      union {
        struct {
          unsigned SDI1R:5;
          unsigned :3;
          unsigned SCK1R:5;
        };
        struct {
          unsigned SDI1R0:1;
          unsigned SDI1R1:1;
          unsigned SDI1R2:1;
          unsigned SDI1R3:1;
          unsigned SDI1R4:1;
          unsigned :3;
          unsigned SCK1R0:1;
          unsigned SCK1R1:1;
          unsigned SCK1R2:1;
          unsigned SCK1R3:1;
          unsigned SCK1R4:1;
        };
      };
} typeRPINR20BITS;
sfr volatile typeRPINR20BITS RPINR20bits absolute 0x6A8;

// backward compatibility for RPINR21BITS
    typedef struct tagRPINR21BITS {
      union {
        struct {
          unsigned SS1R:5;
        };
        struct {
          unsigned SS1R0:1;
          unsigned SS1R1:1;
          unsigned SS1R2:1;
          unsigned SS1R3:1;
          unsigned SS1R4:1;
        };
      };
} typeRPINR21BITS;
sfr volatile typeRPINR21BITS RPINR21bits absolute 0x6AA;

// backward compatibility for RPINR22BITS
    typedef struct tagRPINR22BITS {
      union {
        struct {
          unsigned SDI2R:5;
          unsigned :3;
          unsigned SCK2R:5;
        };
        struct {
          unsigned SDI2R0:1;
          unsigned SDI2R1:1;
          unsigned SDI2R2:1;
          unsigned SDI2R3:1;
          unsigned SDI2R4:1;
          unsigned :3;
          unsigned SCK2R0:1;
          unsigned SCK2R1:1;
          unsigned SCK2R2:1;
          unsigned SCK2R3:1;
          unsigned SCK2R4:1;
        };
      };
} typeRPINR22BITS;
sfr volatile typeRPINR22BITS RPINR22bits absolute 0x6AC;

// backward compatibility for RPINR23BITS
    typedef struct tagRPINR23BITS {
      union {
        struct {
          unsigned SS2R:5;
        };
        struct {
          unsigned SS2R0:1;
          unsigned SS2R1:1;
          unsigned SS2R2:1;
          unsigned SS2R3:1;
          unsigned SS2R4:1;
        };
      };
} typeRPINR23BITS;
sfr volatile typeRPINR23BITS RPINR23bits absolute 0x6AE;

// backward compatibility for RPOR0BITS
    typedef struct tagRPOR0BITS {
      union {
        struct {
          unsigned RP0R:5;
          unsigned :3;
          unsigned RP1R:5;
        };
        struct {
          unsigned RP0R0:1;
          unsigned RP0R1:1;
          unsigned RP0R2:1;
          unsigned RP0R3:1;
          unsigned RP0R4:1;
          unsigned :3;
          unsigned RP1R0:1;
          unsigned RP1R1:1;
          unsigned RP1R2:1;
          unsigned RP1R3:1;
          unsigned RP1R4:1;
        };
      };
} typeRPOR0BITS;
sfr volatile typeRPOR0BITS RPOR0bits absolute 0x6C0;

// backward compatibility for RPOR1BITS
    typedef struct tagRPOR1BITS {
      union {
        struct {
          unsigned RP2R:5;
          unsigned :3;
          unsigned RP3R:5;
        };
        struct {
          unsigned RP2R0:1;
          unsigned RP2R1:1;
          unsigned RP2R2:1;
          unsigned RP2R3:1;
          unsigned RP2R4:1;
          unsigned :3;
          unsigned RP3R0:1;
          unsigned RP3R1:1;
          unsigned RP3R2:1;
          unsigned RP3R3:1;
          unsigned RP3R4:1;
        };
      };
} typeRPOR1BITS;
sfr volatile typeRPOR1BITS RPOR1bits absolute 0x6C2;

// backward compatibility for RPOR2BITS
    typedef struct tagRPOR2BITS {
      union {
        struct {
          unsigned RP4R:5;
          unsigned :3;
          unsigned RP5R:5;
        };
        struct {
          unsigned RP4R0:1;
          unsigned RP4R1:1;
          unsigned RP4R2:1;
          unsigned RP4R3:1;
          unsigned RP4R4:1;
          unsigned :3;
          unsigned RP5R0:1;
          unsigned RP5R1:1;
          unsigned RP5R2:1;
          unsigned RP5R3:1;
          unsigned RP5R4:1;
        };
      };
} typeRPOR2BITS;
sfr volatile typeRPOR2BITS RPOR2bits absolute 0x6C4;

// backward compatibility for RPOR3BITS
    typedef struct tagRPOR3BITS {
      union {
        struct {
          unsigned RP6R:5;
          unsigned :3;
          unsigned RP7R:5;
        };
        struct {
          unsigned RP6R0:1;
          unsigned RP6R1:1;
          unsigned RP6R2:1;
          unsigned RP6R3:1;
          unsigned RP6R4:1;
          unsigned :3;
          unsigned RP7R0:1;
          unsigned RP7R1:1;
          unsigned RP7R2:1;
          unsigned RP7R3:1;
          unsigned RP7R4:1;
        };
      };
} typeRPOR3BITS;
sfr volatile typeRPOR3BITS RPOR3bits absolute 0x6C6;

// backward compatibility for RPOR4BITS
    typedef struct tagRPOR4BITS {
      union {
        struct {
          unsigned RP8R:5;
          unsigned :3;
          unsigned RP9R:5;
        };
        struct {
          unsigned RP8R0:1;
          unsigned RP8R1:1;
          unsigned RP8R2:1;
          unsigned RP8R3:1;
          unsigned RP8R4:1;
          unsigned :3;
          unsigned RP9R0:1;
          unsigned RP9R1:1;
          unsigned RP9R2:1;
          unsigned RP9R3:1;
          unsigned RP9R4:1;
        };
      };
} typeRPOR4BITS;
sfr volatile typeRPOR4BITS RPOR4bits absolute 0x6C8;

// backward compatibility for RPOR5BITS
    typedef struct tagRPOR5BITS {
      union {
        struct {
          unsigned RP10R:5;
          unsigned :3;
          unsigned RP11R:5;
        };
        struct {
          unsigned RP10R0:1;
          unsigned RP10R1:1;
          unsigned RP10R2:1;
          unsigned RP10R3:1;
          unsigned RP10R4:1;
          unsigned :3;
          unsigned RP11R0:1;
          unsigned RP11R1:1;
          unsigned RP11R2:1;
          unsigned RP11R3:1;
          unsigned RP11R4:1;
        };
      };
} typeRPOR5BITS;
sfr volatile typeRPOR5BITS RPOR5bits absolute 0x6CA;

// backward compatibility for RPOR6BITS
    typedef struct tagRPOR6BITS {
      union {
        struct {
          unsigned RP12R:5;
          unsigned :3;
          unsigned RP13R:5;
        };
        struct {
          unsigned RP12R0:1;
          unsigned RP12R1:1;
          unsigned RP12R2:1;
          unsigned RP12R3:1;
          unsigned RP12R4:1;
          unsigned :3;
          unsigned RP13R0:1;
          unsigned RP13R1:1;
          unsigned RP13R2:1;
          unsigned RP13R3:1;
          unsigned RP13R4:1;
        };
      };
} typeRPOR6BITS;
sfr volatile typeRPOR6BITS RPOR6bits absolute 0x6CC;

// backward compatibility for RPOR7BITS
    typedef struct tagRPOR7BITS {
      union {
        struct {
          unsigned RP14R:5;
          unsigned :3;
          unsigned RP15R:5;
        };
        struct {
          unsigned RP14R0:1;
          unsigned RP14R1:1;
          unsigned RP14R2:1;
          unsigned RP14R3:1;
          unsigned RP14R4:1;
          unsigned :3;
          unsigned RP15R0:1;
          unsigned RP15R1:1;
          unsigned RP15R2:1;
          unsigned RP15R3:1;
          unsigned RP15R4:1;
        };
      };
} typeRPOR7BITS;
sfr volatile typeRPOR7BITS RPOR7bits absolute 0x6CE;

// backward compatibility for RCONBITS
    typedef struct tagRCONBITS {
      union {
        struct {
          unsigned POR:1;
          unsigned BOR:1;
          unsigned IDLE:1;
          unsigned SLEEP:1;
          unsigned WDTO:1;
          unsigned SWDTEN:1;
          unsigned SWR:1;
          unsigned EXTR:1;
          unsigned VREGS:1;
          unsigned CM:1;
          unsigned DPSLP:1;
          unsigned :3;
          unsigned IOPUWR:1;
          unsigned TRAPR:1;
        };
        struct {
          unsigned :8;
          unsigned PMSLP:1;
        };
      };
} typeRCONBITS;
sfr volatile typeRCONBITS RCONbits absolute 0x740;

// backward compatibility for OSCCONBITS
    typedef struct tagOSCCONBITS {
      union {
        struct {
          unsigned OSWEN:1;
          unsigned SOSCEN:1;
          unsigned POSCEN:1;
          unsigned CF:1;
          unsigned :1;
          unsigned LOCK:1;
          unsigned IOLOCK:1;
          unsigned CLKLOCK:1;
          unsigned NOSC:3;
          unsigned :1;
          unsigned COSC:3;
        };
        struct {
          unsigned :1;
          unsigned LPOSCEN:1;
          unsigned :6;
          unsigned NOSC0:1;
          unsigned NOSC1:1;
          unsigned NOSC2:1;
          unsigned :1;
          unsigned COSC0:1;
          unsigned COSC1:1;
          unsigned COSC2:1;
        };
      };
} typeOSCCONBITS;
sfr volatile typeOSCCONBITS OSCCONbits absolute 0x742;

// backward compatibility for CLKDIVBITS
    typedef struct tagCLKDIVBITS {
      union {
        struct {
          unsigned :8;
          unsigned RCDIV:3;
          unsigned DOZEN:1;
          unsigned DOZE:3;
          unsigned ROI:1;
        };
        struct {
          unsigned :8;
          unsigned RCDIV0:1;
          unsigned RCDIV1:1;
          unsigned RCDIV2:1;
          unsigned :1;
          unsigned DOZE0:1;
          unsigned DOZE1:1;
          unsigned DOZE2:1;
        };
      };
} typeCLKDIVBITS;
sfr volatile typeCLKDIVBITS CLKDIVbits absolute 0x744;

// backward compatibility for OSCTUNBITS
    typedef struct tagOSCTUNBITS {
      union {
        struct {
          unsigned TUN:6;
        };
        struct {
          unsigned TUN0:1;
          unsigned TUN1:1;
          unsigned TUN2:1;
          unsigned TUN3:1;
          unsigned TUN4:1;
          unsigned TUN5:1;
        };
      };
} typeOSCTUNBITS;
sfr volatile typeOSCTUNBITS OSCTUNbits absolute 0x748;

// backward compatibility for REFOCONBITS
    typedef struct tagREFOCONBITS {
      union {
        struct {
          unsigned :8;
          unsigned RODIV:4;
          unsigned ROSEL:1;
          unsigned ROSSLP:1;
          unsigned :1;
          unsigned ROEN:1;
        };
        struct {
          unsigned :8;
          unsigned RODIV0:1;
          unsigned RODIV1:1;
          unsigned RODIV2:1;
          unsigned RODIV3:1;
          unsigned :3;
          unsigned ROON:1;
        };
      };
} typeREFOCONBITS;
sfr volatile typeREFOCONBITS REFOCONbits absolute 0x74E;

// backward compatibility for DSCONBITS
    typedef struct tagDSCONBITS {
      unsigned RELEASE:1;
      unsigned DSBOR:1;
      unsigned :13;
      unsigned DSEN:1;
} typeDSCONBITS;
sfr volatile typeDSCONBITS DSCONbits absolute 0x758;

// backward compatibility for DSWAKEBITS
    typedef struct tagDSWAKEBITS {
      unsigned DSPOR:1;
      unsigned :1;
      unsigned DSMCLR:1;
      unsigned DSRTC:1;
      unsigned DSWDT:1;
      unsigned :2;
      unsigned DSFLT:1;
      unsigned DSINT0:1;
} typeDSWAKEBITS;
sfr volatile typeDSWAKEBITS DSWAKEbits absolute 0x75A;

// backward compatibility for DSGPR0BITS
    typedef struct tagDSGPR0BITS {
      union {
        struct {
          unsigned DSGPR:16;
        };
        struct {
          unsigned DSGPR0:1;
          unsigned DSGPR1:1;
          unsigned DSGPR2:1;
          unsigned DSGPR3:1;
          unsigned DSGPR4:1;
          unsigned DSGPR5:1;
          unsigned DSGPR6:1;
          unsigned DSGPR7:1;
          unsigned DSGPR8:1;
          unsigned DSGPR9:1;
          unsigned DSGPR10:1;
          unsigned DSGPR11:1;
          unsigned DSGPR12:1;
          unsigned DSGPR13:1;
          unsigned DSGPR14:1;
          unsigned DSGPR15:1;
        };
      };
} typeDSGPR0BITS;
sfr volatile typeDSGPR0BITS DSGPR0bits absolute 0x75C;

// backward compatibility for DSGPR1BITS
    typedef struct tagDSGPR1BITS {
      union {
        struct {
          unsigned DSGPR:16;
        };
        struct {
          unsigned DSGPR0:1;
          unsigned DSGPR1:1;
          unsigned DSGPR2:1;
          unsigned DSGPR3:1;
          unsigned DSGPR4:1;
          unsigned DSGPR5:1;
          unsigned DSGPR6:1;
          unsigned DSGPR7:1;
          unsigned DSGPR8:1;
          unsigned DSGPR9:1;
          unsigned DSGPR10:1;
          unsigned DSGPR11:1;
          unsigned DSGPR12:1;
          unsigned DSGPR13:1;
          unsigned DSGPR14:1;
          unsigned DSGPR15:1;
        };
      };
} typeDSGPR1BITS;
sfr volatile typeDSGPR1BITS DSGPR1bits absolute 0x75E;

// backward compatibility for NVMCONBITS
    typedef struct tagNVMCONBITS {
      union {
        struct {
          unsigned NVMOP:4;
          unsigned :2;
          unsigned ERASE:1;
          unsigned :6;
          unsigned WRERR:1;
          unsigned WREN:1;
          unsigned WR:1;
        };
        struct {
          unsigned NVMOP0:1;
          unsigned NVMOP1:1;
          unsigned NVMOP2:1;
          unsigned NVMOP3:1;
        };
        struct {
          unsigned PROGOP0:1;
          unsigned PROGOP1:1;
          unsigned PROGOP2:1;
          unsigned PROGOP3:1;
        };
        struct {
          unsigned PROGOP:4;
        };
      };
} typeNVMCONBITS;
sfr volatile typeNVMCONBITS NVMCONbits absolute 0x760;

// backward compatibility for PMD1BITS
    typedef struct tagPMD1BITS {
      unsigned ADC1MD:1;
      unsigned :2;
      unsigned SPI1MD:1;
      unsigned SPI2MD:1;
      unsigned U1MD:1;
      unsigned U2MD:1;
      unsigned I2C1MD:1;
      unsigned :3;
      unsigned T1MD:1;
      unsigned T2MD:1;
      unsigned T3MD:1;
      unsigned T4MD:1;
      unsigned T5MD:1;
} typePMD1BITS;
sfr volatile typePMD1BITS PMD1bits absolute 0x770;

// backward compatibility for PMD2BITS
    typedef struct tagPMD2BITS {
      unsigned OC1MD:1;
      unsigned OC2MD:1;
      unsigned OC3MD:1;
      unsigned OC4MD:1;
      unsigned OC5MD:1;
      unsigned :3;
      unsigned IC1MD:1;
      unsigned IC2MD:1;
      unsigned IC3MD:1;
      unsigned IC4MD:1;
      unsigned IC5MD:1;
} typePMD2BITS;
sfr volatile typePMD2BITS PMD2bits absolute 0x772;

// backward compatibility for PMD3BITS
    typedef struct tagPMD3BITS {
      union {
        struct {
          unsigned :1;
          unsigned I2C2MD:1;
          unsigned :5;
          unsigned CRCMD:1;
          unsigned PMPMD:1;
          unsigned RTCCMD:1;
          unsigned CMPMD:1;
        };
        struct {
          unsigned :7;
          unsigned CRCPMD:1;
        };
      };
} typePMD3BITS;
sfr volatile typePMD3BITS PMD3bits absolute 0x774;

// backward compatibility for PMD4BITS
    typedef struct tagPMD4BITS {
      unsigned :1;
      unsigned LVDMD:1;
      unsigned CTMUMD:1;
      unsigned REFOMD:1;
} typePMD4BITS;
sfr volatile typePMD4BITS PMD4bits absolute 0x776;

