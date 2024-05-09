// Definition file for P24FJ128GB108

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

const unsigned long __FLASH_SIZE = 0x000203F4;
const unsigned long __XRAM_RAM_SIZE = 0x00003FFF;
const unsigned long __XRAM_RAM_START = 0x800;
const long __CONST_FAR_PREFIX = 0x0;
const char __FOSC_PER_CYC = 2;

// Primary Interrupt Vector Table Constants

const unsigned IVT_ADDR_RESERVEDTRAP0        = 0x0004;
const unsigned IVT_ADDR_OSCILLATORFAIL       = 0x0006;
const unsigned IVT_ADDR_ADDRESSERROR         = 0x0008;
const unsigned IVT_ADDR_STACKERROR           = 0x000A;
const unsigned IVT_ADDR_MATHERROR            = 0x000C;
const unsigned IVT_ADDR_DMACERROR            = 0x000E;
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
const unsigned IVT_ADDR_IC7INTERRUPT         = 0x0040;
const unsigned IVT_ADDR_IC8INTERRUPT         = 0x0042;
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
const unsigned IVT_ADDR_IC6INTERRUPT         = 0x0064;
const unsigned IVT_ADDR_OC5INTERRUPT         = 0x0066;
const unsigned IVT_ADDR_OC6INTERRUPT         = 0x0068;
const unsigned IVT_ADDR_OC7INTERRUPT         = 0x006A;
const unsigned IVT_ADDR_OC8INTERRUPT         = 0x006C;
const unsigned IVT_ADDR_PMPINTERRUPT         = 0x006E;
const unsigned IVT_ADDR_INTERRUPT46          = 0x0070;
const unsigned IVT_ADDR_INTERRUPT47          = 0x0072;
const unsigned IVT_ADDR_INTERRUPT48          = 0x0074;
const unsigned IVT_ADDR_SI2C2INTERRUPT       = 0x0076;
const unsigned IVT_ADDR_MI2C2INTERRUPT       = 0x0078;
const unsigned IVT_ADDR_INTERRUPT51          = 0x007A;
const unsigned IVT_ADDR_INTERRUPT52          = 0x007C;
const unsigned IVT_ADDR_INT3INTERRUPT        = 0x007E;
const unsigned IVT_ADDR_INT4INTERRUPT        = 0x0080;
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
const unsigned IVT_ADDR_U3ERRINTERRUPT       = 0x00B6;
const unsigned IVT_ADDR_U3RXINTERRUPT        = 0x00B8;
const unsigned IVT_ADDR_U3TXINTERRUPT        = 0x00BA;
const unsigned IVT_ADDR_SI2C3INTERRUPT       = 0x00BC;
const unsigned IVT_ADDR_MI2C3INTERRUPT       = 0x00BE;
const unsigned IVT_ADDR_USB1INTERRUPT        = 0x00C0;
const unsigned IVT_ADDR_U4ERRINTERRUPT       = 0x00C2;
const unsigned IVT_ADDR_U4RXINTERRUPT        = 0x00C4;
const unsigned IVT_ADDR_U4TXINTERRUPT        = 0x00C6;
const unsigned IVT_ADDR_SPI3ERRINTERRUPT     = 0x00C8;
const unsigned IVT_ADDR_SPI3INTERRUPT        = 0x00CA;
const unsigned IVT_ADDR_OC9INTERRUPT         = 0x00CC;
const unsigned IVT_ADDR_IC9INTERRUPT         = 0x00CE;
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
const unsigned AIVT_ADDR_ALTDMACERROR         = 0x010E;
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
const unsigned AIVT_ADDR_ALTIC7INTERRUPT      = 0x0140;
const unsigned AIVT_ADDR_ALTIC8INTERRUPT      = 0x0142;
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
const unsigned AIVT_ADDR_ALTIC6INTERRUPT      = 0x0164;
const unsigned AIVT_ADDR_ALTOC5INTERRUPT      = 0x0166;
const unsigned AIVT_ADDR_ALTOC6INTERRUPT      = 0x0168;
const unsigned AIVT_ADDR_ALTOC7INTERRUPT      = 0x016A;
const unsigned AIVT_ADDR_ALTOC8INTERRUPT      = 0x016C;
const unsigned AIVT_ADDR_ALTPMPINTERRUPT      = 0x016E;
const unsigned AIVT_ADDR_ALTINTERRUPT46       = 0x0170;
const unsigned AIVT_ADDR_ALTINTERRUPT47       = 0x0172;
const unsigned AIVT_ADDR_ALTINTERRUPT48       = 0x0174;
const unsigned AIVT_ADDR_ALTSI2C2INTERRUPT    = 0x0176;
const unsigned AIVT_ADDR_ALTMI2C2INTERRUPT    = 0x0178;
const unsigned AIVT_ADDR_ALTINTERRUPT51       = 0x017A;
const unsigned AIVT_ADDR_ALTINTERRUPT52       = 0x017C;
const unsigned AIVT_ADDR_ALTINT3INTERRUPT     = 0x017E;
const unsigned AIVT_ADDR_ALTINT4INTERRUPT     = 0x0180;
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
const unsigned AIVT_ADDR_ALTU3ERRINTERRUPT    = 0x01B6;
const unsigned AIVT_ADDR_ALTU3RXINTERRUPT     = 0x01B8;
const unsigned AIVT_ADDR_ALTU3TXINTERRUPT     = 0x01BA;
const unsigned AIVT_ADDR_ALTSI2C3INTERRUPT    = 0x01BC;
const unsigned AIVT_ADDR_ALTMI2C3INTERRUPT    = 0x01BE;
const unsigned AIVT_ADDR_ALTUSB1INTERRUPT     = 0x01C0;
const unsigned AIVT_ADDR_ALTU4ERRINTERRUPT    = 0x01C2;
const unsigned AIVT_ADDR_ALTU4RXINTERRUPT     = 0x01C4;
const unsigned AIVT_ADDR_ALTU4TXINTERRUPT     = 0x01C6;
const unsigned AIVT_ADDR_ALTSPI3ERRINTERRUPT  = 0x01C8;
const unsigned AIVT_ADDR_ALTSPI3INTERRUPT     = 0x01CA;
const unsigned AIVT_ADDR_ALTOC9INTERRUPT      = 0x01CC;
const unsigned AIVT_ADDR_ALTIC9INTERRUPT      = 0x01CE;
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
sfr unsigned int volatile CNPD1            absolute 0x0054;
sfr unsigned int volatile CNPD2            absolute 0x0056;
sfr unsigned int volatile CNPD3            absolute 0x0058;
sfr unsigned int volatile CNPD4            absolute 0x005A;
sfr unsigned int volatile CNPD5            absolute 0x005C;
sfr unsigned int volatile CNEN1            absolute 0x0060;
sfr unsigned int volatile CNEN2            absolute 0x0062;
sfr unsigned int volatile CNEN3            absolute 0x0064;
sfr unsigned int volatile CNEN4            absolute 0x0066;
sfr unsigned int volatile CNEN5            absolute 0x0068;
sfr unsigned int volatile CNPU1            absolute 0x006C;
sfr unsigned int volatile CNPU2            absolute 0x006E;
sfr unsigned int volatile CNPU3            absolute 0x0070;
sfr unsigned int volatile CNPU4            absolute 0x0072;
sfr unsigned int volatile CNPU5            absolute 0x0074;
sfr unsigned int volatile INTCON1          absolute 0x0080;
sfr unsigned int volatile INTCON2          absolute 0x0082;
sfr unsigned int volatile IFS0             absolute 0x0084;
sfr unsigned int volatile IFS1             absolute 0x0086;
sfr unsigned int volatile IFS2             absolute 0x0088;
sfr unsigned int volatile IFS3             absolute 0x008A;
sfr unsigned int volatile IFS4             absolute 0x008C;
sfr unsigned int volatile IFS5             absolute 0x008E;
sfr unsigned int          IEC0             absolute 0x0094;
sfr unsigned int          IEC1             absolute 0x0096;
sfr unsigned int          IEC2             absolute 0x0098;
sfr unsigned int          IEC3             absolute 0x009A;
sfr unsigned int          IEC4             absolute 0x009C;
sfr unsigned int          IEC5             absolute 0x009E;
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
sfr unsigned int          IPC13            absolute 0x00BE;
sfr unsigned int          IPC15            absolute 0x00C2;
sfr unsigned int          IPC16            absolute 0x00C4;
sfr unsigned int          IPC18            absolute 0x00C8;
sfr unsigned int          IPC19            absolute 0x00CA;
sfr unsigned int          IPC20            absolute 0x00CC;
sfr unsigned int          IPC21            absolute 0x00CE;
sfr unsigned int          IPC22            absolute 0x00D0;
sfr unsigned int          IPC23            absolute 0x00D2;
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
sfr unsigned int volatile IC6CON1          absolute 0x0168;
sfr unsigned int volatile IC6CON2          absolute 0x016A;
sfr unsigned int volatile IC6BUF           absolute 0x016C;
sfr unsigned int volatile IC6TMR           absolute 0x016E;
sfr unsigned int volatile IC7CON1          absolute 0x0170;
sfr unsigned int volatile IC7CON2          absolute 0x0172;
sfr unsigned int volatile IC7BUF           absolute 0x0174;
sfr unsigned int volatile IC7TMR           absolute 0x0176;
sfr unsigned int volatile IC8CON1          absolute 0x0178;
sfr unsigned int volatile IC8CON2          absolute 0x017A;
sfr unsigned int volatile IC8BUF           absolute 0x017C;
sfr unsigned int volatile IC8TMR           absolute 0x017E;
sfr unsigned int volatile IC9CON1          absolute 0x0180;
sfr unsigned int volatile IC9CON2          absolute 0x0182;
sfr unsigned int volatile IC9BUF           absolute 0x0184;
sfr unsigned int volatile IC9TMR           absolute 0x0186;
sfr unsigned int volatile OC1CON1          absolute 0x0190;
sfr unsigned int volatile OC1CON2          absolute 0x0192;
sfr unsigned int          OC1RS            absolute 0x0194;
sfr unsigned int          OC1R             absolute 0x0196;
sfr unsigned int volatile OC1TMR           absolute 0x0198;
sfr unsigned int volatile OC2CON1          absolute 0x019A;
sfr unsigned int volatile OC2CON2          absolute 0x019C;
sfr unsigned int          OC2RS            absolute 0x019E;
sfr unsigned int          OC2R             absolute 0x01A0;
sfr unsigned int volatile OC2TMR           absolute 0x01A2;
sfr unsigned int volatile OC3CON1          absolute 0x01A4;
sfr unsigned int volatile OC3CON2          absolute 0x01A6;
sfr unsigned int          OC3RS            absolute 0x01A8;
sfr unsigned int          OC3R             absolute 0x01AA;
sfr unsigned int volatile OC3TMR           absolute 0x01AC;
sfr unsigned int volatile OC4CON1          absolute 0x01AE;
sfr unsigned int volatile OC4CON2          absolute 0x01B0;
sfr unsigned int          OC4RS            absolute 0x01B2;
sfr unsigned int          OC4R             absolute 0x01B4;
sfr unsigned int volatile OC4TMR           absolute 0x01B6;
sfr unsigned int volatile OC5CON1          absolute 0x01B8;
sfr unsigned int volatile OC5CON2          absolute 0x01BA;
sfr unsigned int          OC5RS            absolute 0x01BC;
sfr unsigned int          OC5R             absolute 0x01BE;
sfr unsigned int volatile OC5TMR           absolute 0x01C0;
sfr unsigned int volatile OC6CON1          absolute 0x01C2;
sfr unsigned int volatile OC6CON2          absolute 0x01C4;
sfr unsigned int          OC6RS            absolute 0x01C6;
sfr unsigned int          OC6R             absolute 0x01C8;
sfr unsigned int volatile OC6TMR           absolute 0x01CA;
sfr unsigned int volatile OC7CON1          absolute 0x01CC;
sfr unsigned int volatile OC7CON2          absolute 0x01CE;
sfr unsigned int          OC7RS            absolute 0x01D0;
sfr unsigned int          OC7R             absolute 0x01D2;
sfr unsigned int volatile OC7TMR           absolute 0x01D4;
sfr unsigned int volatile OC8CON1          absolute 0x01D6;
sfr unsigned int volatile OC8CON2          absolute 0x01D8;
sfr unsigned int          OC8RS            absolute 0x01DA;
sfr unsigned int          OC8R             absolute 0x01DC;
sfr unsigned int volatile OC8TMR           absolute 0x01DE;
sfr unsigned int volatile OC9CON1          absolute 0x01E0;
sfr unsigned int volatile OC9CON2          absolute 0x01E2;
sfr unsigned int          OC9RS            absolute 0x01E4;
sfr unsigned int          OC9R             absolute 0x01E6;
sfr unsigned int volatile OC9TMR           absolute 0x01E8;
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
sfr unsigned int volatile U3MODE           absolute 0x0250;
sfr unsigned int volatile U3STA            absolute 0x0252;
sfr unsigned int          U3TXREG          absolute 0x0254;
sfr unsigned int volatile U3RXREG          absolute 0x0256;
sfr unsigned int          U3BRG            absolute 0x0258;
sfr unsigned int volatile SPI2STAT         absolute 0x0260;
sfr unsigned int volatile SPI2CON1         absolute 0x0262;
sfr unsigned int volatile SPI2CON          absolute 0x0262;
sfr unsigned int volatile SPI2CON2         absolute 0x0264;
sfr unsigned int volatile SPI2BUF          absolute 0x0268;
sfr unsigned int volatile I2C3RCV          absolute 0x0270;
sfr unsigned int volatile I2C3TRN          absolute 0x0272;
sfr unsigned int          I2C3BRG          absolute 0x0274;
sfr unsigned int volatile I2C3CON          absolute 0x0276;
sfr unsigned int volatile I2C3STAT         absolute 0x0278;
sfr unsigned int volatile I2C3ADD          absolute 0x027A;
sfr unsigned int volatile I2C3MSK          absolute 0x027C;
sfr unsigned int volatile SPI3STAT         absolute 0x0280;
sfr unsigned int volatile SPI3CON1         absolute 0x0282;
sfr unsigned int volatile SPI3CON2         absolute 0x0284;
sfr unsigned int volatile SPI3BUF          absolute 0x0288;
sfr unsigned int volatile U4MODE           absolute 0x02B0;
sfr unsigned int volatile U4STA            absolute 0x02B2;
sfr unsigned int          U4TXREG          absolute 0x02B4;
sfr unsigned int volatile U4RXREG          absolute 0x02B6;
sfr unsigned int          U4BRG            absolute 0x02B8;
sfr unsigned int volatile TRISA            absolute 0x02C0;
sfr unsigned int volatile PORTA            absolute 0x02C2;
sfr unsigned int volatile LATA             absolute 0x02C4;
sfr unsigned int volatile ODCA             absolute 0x02C6;
sfr unsigned int volatile TRISB            absolute 0x02C8;
sfr unsigned int volatile PORTB            absolute 0x02CA;
sfr unsigned int volatile LATB             absolute 0x02CC;
sfr unsigned int volatile ODCB             absolute 0x02CE;
sfr unsigned int volatile TRISC            absolute 0x02D0;
sfr unsigned int volatile PORTC            absolute 0x02D2;
sfr unsigned int volatile LATC             absolute 0x02D4;
sfr unsigned int volatile ODCC             absolute 0x02D6;
sfr unsigned int volatile TRISD            absolute 0x02D8;
sfr unsigned int volatile PORTD            absolute 0x02DA;
sfr unsigned int volatile LATD             absolute 0x02DC;
sfr unsigned int volatile ODCD             absolute 0x02DE;
sfr unsigned int volatile TRISE            absolute 0x02E0;
sfr unsigned int volatile PORTE            absolute 0x02E2;
sfr unsigned int volatile LATE             absolute 0x02E4;
sfr unsigned int volatile ODCE             absolute 0x02E6;
sfr unsigned int volatile TRISF            absolute 0x02E8;
sfr unsigned int volatile PORTF            absolute 0x02EA;
sfr unsigned int volatile LATF             absolute 0x02EC;
sfr unsigned int volatile ODCF             absolute 0x02EE;
sfr unsigned int volatile TRISG            absolute 0x02F0;
sfr unsigned int volatile PORTG            absolute 0x02F2;
sfr unsigned int volatile LATG             absolute 0x02F4;
sfr unsigned int volatile ODCG             absolute 0x02F6;
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
sfr unsigned int          AD1PCFGH         absolute 0x032A;
sfr unsigned int          AD1PCFG          absolute 0x032C;
sfr unsigned int          ADPCFG           absolute 0x032C;
sfr unsigned int          AD1PCFGL         absolute 0x032C;
sfr unsigned int          AD1CSSL          absolute 0x0330;
sfr unsigned int          ADCSSL           absolute 0x0330;
sfr unsigned int          AD1CSSH          absolute 0x0332;
sfr unsigned int volatile CTMUCON          absolute 0x033C;
sfr unsigned int volatile CTMUICON         absolute 0x033E;
sfr unsigned int volatile U1OTGIR          absolute 0x0480;
sfr unsigned int volatile U1OTGIE          absolute 0x0482;
sfr unsigned int volatile U1OTGSTAT        absolute 0x0484;
sfr unsigned int volatile U1OTGCON         absolute 0x0486;
sfr unsigned int volatile U1PWRC           absolute 0x0488;
sfr unsigned int volatile U1IR             absolute 0x048A;
sfr unsigned int volatile U1IE             absolute 0x048C;
sfr unsigned int volatile U1EIR            absolute 0x048E;
sfr unsigned int volatile U1EIE            absolute 0x0490;
sfr unsigned int volatile U1STAT           absolute 0x0492;
sfr unsigned int volatile U1CON            absolute 0x0494;
sfr unsigned int volatile U1ADDR           absolute 0x0496;
sfr unsigned int volatile U1BDTP1          absolute 0x0498;
sfr unsigned int volatile U1FRML           absolute 0x049A;
sfr unsigned int volatile U1FRMH           absolute 0x049C;
sfr unsigned int volatile U1TOK            absolute 0x049E;
sfr unsigned int volatile U1SOF            absolute 0x04A0;
sfr unsigned int volatile U1CNFG1          absolute 0x04A6;
sfr unsigned int volatile U1CNFG2          absolute 0x04A8;
sfr unsigned int volatile U1EP0            absolute 0x04AA;
sfr unsigned int volatile U1EP1            absolute 0x04AC;
sfr unsigned int volatile U1EP2            absolute 0x04AE;
sfr unsigned int volatile U1EP3            absolute 0x04B0;
sfr unsigned int volatile U1EP4            absolute 0x04B2;
sfr unsigned int volatile U1EP5            absolute 0x04B4;
sfr unsigned int volatile U1EP6            absolute 0x04B6;
sfr unsigned int volatile U1EP7            absolute 0x04B8;
sfr unsigned int volatile U1EP8            absolute 0x04BA;
sfr unsigned int volatile U1EP9            absolute 0x04BC;
sfr unsigned int volatile U1EP10           absolute 0x04BE;
sfr unsigned int volatile U1EP11           absolute 0x04C0;
sfr unsigned int volatile U1EP12           absolute 0x04C2;
sfr unsigned int volatile U1EP13           absolute 0x04C4;
sfr unsigned int volatile U1EP14           absolute 0x04C6;
sfr unsigned int volatile U1EP15           absolute 0x04C8;
sfr unsigned int volatile U1PWMRRS         absolute 0x04CC;
sfr unsigned int volatile U1PWMCON         absolute 0x04CE;
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
sfr unsigned int volatile CMSTAT           absolute 0x0630;
sfr unsigned int          CVRCON           absolute 0x0632;
sfr unsigned int volatile CM1CON           absolute 0x0634;
sfr unsigned int volatile CM2CON           absolute 0x0636;
sfr unsigned int volatile CM3CON           absolute 0x0638;
sfr unsigned int volatile CRCCON           absolute 0x0640;
sfr unsigned int          CRCXOR           absolute 0x0642;
sfr unsigned int volatile CRCDAT           absolute 0x0644;
sfr unsigned int volatile CRCWDAT          absolute 0x0646;
sfr unsigned int          RPINR0           absolute 0x0680;
sfr unsigned int          RPINR1           absolute 0x0682;
sfr unsigned int          RPINR2           absolute 0x0684;
sfr unsigned int          RPINR3           absolute 0x0686;
sfr unsigned int          RPINR4           absolute 0x0688;
sfr unsigned int          RPINR7           absolute 0x068E;
sfr unsigned int          RPINR8           absolute 0x0690;
sfr unsigned int          RPINR9           absolute 0x0692;
sfr unsigned int          RPINR10          absolute 0x0694;
sfr unsigned int          RPINR11          absolute 0x0696;
sfr unsigned int          RPINR15          absolute 0x069E;
sfr unsigned int          RPINR17          absolute 0x06A2;
sfr unsigned int          RPINR18          absolute 0x06A4;
sfr unsigned int          RPINR19          absolute 0x06A6;
sfr unsigned int          RPINR20          absolute 0x06A8;
sfr unsigned int          RPINR21          absolute 0x06AA;
sfr unsigned int          RPINR22          absolute 0x06AC;
sfr unsigned int          RPINR23          absolute 0x06AE;
sfr unsigned int          RPINR27          absolute 0x06B6;
sfr unsigned int          RPINR28          absolute 0x06B8;
sfr unsigned int          RPINR29          absolute 0x06BA;
sfr unsigned int          RPOR0            absolute 0x06C0;
sfr unsigned int          RPOR1            absolute 0x06C2;
sfr unsigned int          RPOR2            absolute 0x06C4;
sfr unsigned int          RPOR3            absolute 0x06C6;
sfr unsigned int          RPOR4            absolute 0x06C8;
sfr unsigned int          RPOR5            absolute 0x06CA;
sfr unsigned int          RPOR6            absolute 0x06CC;
sfr unsigned int          RPOR7            absolute 0x06CE;
sfr unsigned int          RPOR8            absolute 0x06D0;
sfr unsigned int          RPOR9            absolute 0x06D2;
sfr unsigned int          RPOR10           absolute 0x06D4;
sfr unsigned int          RPOR11           absolute 0x06D6;
sfr unsigned int          RPOR12           absolute 0x06D8;
sfr unsigned int          RPOR13           absolute 0x06DA;
sfr unsigned int          RPOR14           absolute 0x06DC;
sfr unsigned int          RPOR15           absolute 0x06DE;
sfr unsigned int          RCON             absolute 0x0740;
sfr unsigned int volatile OSCCON           absolute 0x0742;
sfr unsigned int volatile OSCCONL          absolute 0x0742;
sfr unsigned short volatile OSCCONH          absolute 0x0743;
sfr unsigned int volatile CLKDIV           absolute 0x0744;
sfr unsigned int volatile OSCTUN           absolute 0x0748;
sfr unsigned int          REFOCON          absolute 0x074E;
sfr unsigned int volatile NVMCON           absolute 0x0760;
sfr unsigned int          NVMKEY           absolute 0x0766;
sfr unsigned int          PMD1             absolute 0x0770;
sfr unsigned int          PMD2             absolute 0x0772;
sfr unsigned int          PMD3             absolute 0x0774;
sfr unsigned int volatile PMD4             absolute 0x0776;
sfr unsigned int volatile PMD5             absolute 0x0778;
sfr unsigned int volatile PMD6             absolute 0x077A;

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

    // CNPD1 bits
    const register unsigned short int CN15PDE = 15;
    sbit  CN15PDE_bit at CNPD1.B15;
    const register unsigned short int CN14PDE = 14;
    sbit  CN14PDE_bit at CNPD1.B14;
    const register unsigned short int CN13PDE = 13;
    sbit  CN13PDE_bit at CNPD1.B13;
    const register unsigned short int CN12PDE = 12;
    sbit  CN12PDE_bit at CNPD1.B12;
    const register unsigned short int CN11PDE = 11;
    sbit  CN11PDE_bit at CNPD1.B11;
    const register unsigned short int CN10PDE = 10;
    sbit  CN10PDE_bit at CNPD1.B10;
    const register unsigned short int CN9PDE = 9;
    sbit  CN9PDE_bit at CNPD1.B9;
    const register unsigned short int CN8PDE = 8;
    sbit  CN8PDE_bit at CNPD1.B8;
    const register unsigned short int CN7PDE = 7;
    sbit  CN7PDE_bit at CNPD1.B7;
    const register unsigned short int CN6PDE = 6;
    sbit  CN6PDE_bit at CNPD1.B6;
    const register unsigned short int CN5PDE = 5;
    sbit  CN5PDE_bit at CNPD1.B5;
    const register unsigned short int CN4PDE = 4;
    sbit  CN4PDE_bit at CNPD1.B4;
    const register unsigned short int CN3PDE = 3;
    sbit  CN3PDE_bit at CNPD1.B3;
    const register unsigned short int CN2PDE = 2;
    sbit  CN2PDE_bit at CNPD1.B2;
    const register unsigned short int CN1PDE = 1;
    sbit  CN1PDE_bit at CNPD1.B1;
    const register unsigned short int CN0PDE = 0;
    sbit  CN0PDE_bit at CNPD1.B0;

    // CNPD2 bits
    const register unsigned short int CN31PDE = 15;
    sbit  CN31PDE_bit at CNPD2.B15;
    const register unsigned short int CN30PDE = 14;
    sbit  CN30PDE_bit at CNPD2.B14;
    const register unsigned short int CN29PDE = 13;
    sbit  CN29PDE_bit at CNPD2.B13;
    const register unsigned short int CN28PDE = 12;
    sbit  CN28PDE_bit at CNPD2.B12;
    const register unsigned short int CN27PDE = 11;
    sbit  CN27PDE_bit at CNPD2.B11;
    const register unsigned short int CN26PDE = 10;
    sbit  CN26PDE_bit at CNPD2.B10;
    const register unsigned short int CN25PDE = 9;
    sbit  CN25PDE_bit at CNPD2.B9;
    const register unsigned short int CN24PDE = 8;
    sbit  CN24PDE_bit at CNPD2.B8;
    const register unsigned short int CN23PDE = 7;
    sbit  CN23PDE_bit at CNPD2.B7;
    const register unsigned short int CN22PDE = 6;
    sbit  CN22PDE_bit at CNPD2.B6;
    const register unsigned short int CN21PDE = 5;
    sbit  CN21PDE_bit at CNPD2.B5;
    const register unsigned short int CN20PDE = 4;
    sbit  CN20PDE_bit at CNPD2.B4;
    const register unsigned short int CN19PDE = 3;
    sbit  CN19PDE_bit at CNPD2.B3;
    const register unsigned short int CN18PDE = 2;
    sbit  CN18PDE_bit at CNPD2.B2;
    const register unsigned short int CN17PDE = 1;
    sbit  CN17PDE_bit at CNPD2.B1;
    const register unsigned short int CN16PDE = 0;
    sbit  CN16PDE_bit at CNPD2.B0;

    // CNPD3 bits
    const register unsigned short int CN47PDE = 15;
    sbit  CN47PDE_bit at CNPD3.B15;
    const register unsigned short int CN45PDE = 13;
    sbit  CN45PDE_bit at CNPD3.B13;
    const register unsigned short int CN44PDE = 12;
    sbit  CN44PDE_bit at CNPD3.B12;
    const register unsigned short int CN43PDE = 11;
    sbit  CN43PDE_bit at CNPD3.B11;
    const register unsigned short int CN42PDE = 10;
    sbit  CN42PDE_bit at CNPD3.B10;
    const register unsigned short int CN41PDE = 9;
    sbit  CN41PDE_bit at CNPD3.B9;
    const register unsigned short int CN32PDE = 0;
    sbit  CN32PDE_bit at CNPD3.B0;

    // CNPD4 bits
    const register unsigned short int CN63PDE = 15;
    sbit  CN63PDE_bit at CNPD4.B15;
    const register unsigned short int CN62PDE = 14;
    sbit  CN62PDE_bit at CNPD4.B14;
    const register unsigned short int CN61PDE = 13;
    sbit  CN61PDE_bit at CNPD4.B13;
    const register unsigned short int CN60PDE = 12;
    sbit  CN60PDE_bit at CNPD4.B12;
    const register unsigned short int CN59PDE = 11;
    sbit  CN59PDE_bit at CNPD4.B11;
    const register unsigned short int CN58PDE = 10;
    sbit  CN58PDE_bit at CNPD4.B10;
    const register unsigned short int CN57PDE = 9;
    sbit  CN57PDE_bit at CNPD4.B9;
    const register unsigned short int CN56PDE = 8;
    sbit  CN56PDE_bit at CNPD4.B8;
    const register unsigned short int CN55PDE = 7;
    sbit  CN55PDE_bit at CNPD4.B7;
    const register unsigned short int CN54PDE = 6;
    sbit  CN54PDE_bit at CNPD4.B6;
    const register unsigned short int CN53PDE = 5;
    sbit  CN53PDE_bit at CNPD4.B5;
    const register unsigned short int CN52PDE = 4;
    sbit  CN52PDE_bit at CNPD4.B4;
    const register unsigned short int CN51PDE = 3;
    sbit  CN51PDE_bit at CNPD4.B3;
    const register unsigned short int CN50PDE = 2;
    sbit  CN50PDE_bit at CNPD4.B2;
    const register unsigned short int CN49PDE = 1;
    sbit  CN49PDE_bit at CNPD4.B1;

    // CNPD5 bits
    const register unsigned short int CN78PDE = 14;
    sbit  CN78PDE_bit at CNPD5.B14;
    const register unsigned short int CN77PDE = 13;
    sbit  CN77PDE_bit at CNPD5.B13;
    const register unsigned short int CN74PDE = 10;
    sbit  CN74PDE_bit at CNPD5.B10;
    const register unsigned short int CN71PDE = 7;
    sbit  CN71PDE_bit at CNPD5.B7;
    const register unsigned short int CN70PDE = 6;
    sbit  CN70PDE_bit at CNPD5.B6;
    const register unsigned short int CN69PDE = 5;
    sbit  CN69PDE_bit at CNPD5.B5;
    const register unsigned short int CN68PDE = 4;
    sbit  CN68PDE_bit at CNPD5.B4;
    const register unsigned short int CN67PDE = 3;
    sbit  CN67PDE_bit at CNPD5.B3;
    const register unsigned short int CN66PDE = 2;
    sbit  CN66PDE_bit at CNPD5.B2;
    const register unsigned short int CN65PDE = 1;
    sbit  CN65PDE_bit at CNPD5.B1;
    const register unsigned short int CN64PDE = 0;
    sbit  CN64PDE_bit at CNPD5.B0;

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
    const register unsigned short int CN10IE = 10;
    sbit  CN10IE_bit at CNEN1.B10;
    const register unsigned short int CN9IE = 9;
    sbit  CN9IE_bit at CNEN1.B9;
    const register unsigned short int CN8IE = 8;
    sbit  CN8IE_bit at CNEN1.B8;
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
    const register unsigned short int CN31IE = 15;
    sbit  CN31IE_bit at CNEN2.B15;
    const register unsigned short int CN30IE = 14;
    sbit  CN30IE_bit at CNEN2.B14;
    const register unsigned short int CN29IE = 13;
    sbit  CN29IE_bit at CNEN2.B13;
    const register unsigned short int CN28IE = 12;
    sbit  CN28IE_bit at CNEN2.B12;
    const register unsigned short int CN27IE = 11;
    sbit  CN27IE_bit at CNEN2.B11;
    const register unsigned short int CN26IE = 10;
    sbit  CN26IE_bit at CNEN2.B10;
    const register unsigned short int CN25IE = 9;
    sbit  CN25IE_bit at CNEN2.B9;
    const register unsigned short int CN24IE = 8;
    sbit  CN24IE_bit at CNEN2.B8;
    const register unsigned short int CN23IE = 7;
    sbit  CN23IE_bit at CNEN2.B7;
    const register unsigned short int CN22IE = 6;
    sbit  CN22IE_bit at CNEN2.B6;
    const register unsigned short int CN21IE = 5;
    sbit  CN21IE_bit at CNEN2.B5;
    const register unsigned short int CN20IE = 4;
    sbit  CN20IE_bit at CNEN2.B4;
    const register unsigned short int CN19IE = 3;
    sbit  CN19IE_bit at CNEN2.B3;
    const register unsigned short int CN18IE = 2;
    sbit  CN18IE_bit at CNEN2.B2;
    const register unsigned short int CN17IE = 1;
    sbit  CN17IE_bit at CNEN2.B1;
    const register unsigned short int CN16IE = 0;
    sbit  CN16IE_bit at CNEN2.B0;

    // CNEN3 bits
    const register unsigned short int CN47IE = 15;
    sbit  CN47IE_bit at CNEN3.B15;
    const register unsigned short int CN45IE = 13;
    sbit  CN45IE_bit at CNEN3.B13;
    const register unsigned short int CN44IE = 12;
    sbit  CN44IE_bit at CNEN3.B12;
    const register unsigned short int CN43IE = 11;
    sbit  CN43IE_bit at CNEN3.B11;
    const register unsigned short int CN42IE = 10;
    sbit  CN42IE_bit at CNEN3.B10;
    const register unsigned short int CN41IE = 9;
    sbit  CN41IE_bit at CNEN3.B9;
    const register unsigned short int CN32IE = 0;
    sbit  CN32IE_bit at CNEN3.B0;

    // CNEN4 bits
    const register unsigned short int CN63IE = 15;
    sbit  CN63IE_bit at CNEN4.B15;
    const register unsigned short int CN62IE = 14;
    sbit  CN62IE_bit at CNEN4.B14;
    const register unsigned short int CN61IE = 13;
    sbit  CN61IE_bit at CNEN4.B13;
    const register unsigned short int CN60IE = 12;
    sbit  CN60IE_bit at CNEN4.B12;
    const register unsigned short int CN59IE = 11;
    sbit  CN59IE_bit at CNEN4.B11;
    const register unsigned short int CN58IE = 10;
    sbit  CN58IE_bit at CNEN4.B10;
    const register unsigned short int CN57IE = 9;
    sbit  CN57IE_bit at CNEN4.B9;
    const register unsigned short int CN56IE = 8;
    sbit  CN56IE_bit at CNEN4.B8;
    const register unsigned short int CN55IE = 7;
    sbit  CN55IE_bit at CNEN4.B7;
    const register unsigned short int CN54IE = 6;
    sbit  CN54IE_bit at CNEN4.B6;
    const register unsigned short int CN53IE = 5;
    sbit  CN53IE_bit at CNEN4.B5;
    const register unsigned short int CN52IE = 4;
    sbit  CN52IE_bit at CNEN4.B4;
    const register unsigned short int CN51IE = 3;
    sbit  CN51IE_bit at CNEN4.B3;
    const register unsigned short int CN50IE = 2;
    sbit  CN50IE_bit at CNEN4.B2;
    const register unsigned short int CN49IE = 1;
    sbit  CN49IE_bit at CNEN4.B1;

    // CNEN5 bits
    const register unsigned short int CN78IE = 14;
    sbit  CN78IE_bit at CNEN5.B14;
    const register unsigned short int CN77IE = 13;
    sbit  CN77IE_bit at CNEN5.B13;
    const register unsigned short int CN74IE = 10;
    sbit  CN74IE_bit at CNEN5.B10;
    const register unsigned short int CN71IE = 7;
    sbit  CN71IE_bit at CNEN5.B7;
    const register unsigned short int CN70IE = 6;
    sbit  CN70IE_bit at CNEN5.B6;
    const register unsigned short int CN69IE = 5;
    sbit  CN69IE_bit at CNEN5.B5;
    const register unsigned short int CN68IE = 4;
    sbit  CN68IE_bit at CNEN5.B4;
    const register unsigned short int CN67IE = 3;
    sbit  CN67IE_bit at CNEN5.B3;
    const register unsigned short int CN66IE = 2;
    sbit  CN66IE_bit at CNEN5.B2;
    const register unsigned short int CN65IE = 1;
    sbit  CN65IE_bit at CNEN5.B1;
    const register unsigned short int CN64IE = 0;
    sbit  CN64IE_bit at CNEN5.B0;

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
    const register unsigned short int CN10PUE = 10;
    sbit  CN10PUE_bit at CNPU1.B10;
    const register unsigned short int CN9PUE = 9;
    sbit  CN9PUE_bit at CNPU1.B9;
    const register unsigned short int CN8PUE = 8;
    sbit  CN8PUE_bit at CNPU1.B8;
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
    const register unsigned short int CN31PUE = 15;
    sbit  CN31PUE_bit at CNPU2.B15;
    const register unsigned short int CN30PUE = 14;
    sbit  CN30PUE_bit at CNPU2.B14;
    const register unsigned short int CN29PUE = 13;
    sbit  CN29PUE_bit at CNPU2.B13;
    const register unsigned short int CN28PUE = 12;
    sbit  CN28PUE_bit at CNPU2.B12;
    const register unsigned short int CN27PUE = 11;
    sbit  CN27PUE_bit at CNPU2.B11;
    const register unsigned short int CN26PUE = 10;
    sbit  CN26PUE_bit at CNPU2.B10;
    const register unsigned short int CN25PUE = 9;
    sbit  CN25PUE_bit at CNPU2.B9;
    const register unsigned short int CN24PUE = 8;
    sbit  CN24PUE_bit at CNPU2.B8;
    const register unsigned short int CN23PUE = 7;
    sbit  CN23PUE_bit at CNPU2.B7;
    const register unsigned short int CN22PUE = 6;
    sbit  CN22PUE_bit at CNPU2.B6;
    const register unsigned short int CN21PUE = 5;
    sbit  CN21PUE_bit at CNPU2.B5;
    const register unsigned short int CN20PUE = 4;
    sbit  CN20PUE_bit at CNPU2.B4;
    const register unsigned short int CN19PUE = 3;
    sbit  CN19PUE_bit at CNPU2.B3;
    const register unsigned short int CN18PUE = 2;
    sbit  CN18PUE_bit at CNPU2.B2;
    const register unsigned short int CN17PUE = 1;
    sbit  CN17PUE_bit at CNPU2.B1;
    const register unsigned short int CN16PUE = 0;
    sbit  CN16PUE_bit at CNPU2.B0;

    // CNPU3 bits
    const register unsigned short int CN47PUE = 15;
    sbit  CN47PUE_bit at CNPU3.B15;
    const register unsigned short int CN45PUE = 13;
    sbit  CN45PUE_bit at CNPU3.B13;
    const register unsigned short int CN44PUE = 12;
    sbit  CN44PUE_bit at CNPU3.B12;
    const register unsigned short int CN43PUE = 11;
    sbit  CN43PUE_bit at CNPU3.B11;
    const register unsigned short int CN42PUE = 10;
    sbit  CN42PUE_bit at CNPU3.B10;
    const register unsigned short int CN41PUE = 9;
    sbit  CN41PUE_bit at CNPU3.B9;
    const register unsigned short int CN32PUE = 0;
    sbit  CN32PUE_bit at CNPU3.B0;

    // CNPU4 bits
    const register unsigned short int CN63PUE = 15;
    sbit  CN63PUE_bit at CNPU4.B15;
    const register unsigned short int CN62PUE = 14;
    sbit  CN62PUE_bit at CNPU4.B14;
    const register unsigned short int CN61PUE = 13;
    sbit  CN61PUE_bit at CNPU4.B13;
    const register unsigned short int CN60PUE = 12;
    sbit  CN60PUE_bit at CNPU4.B12;
    const register unsigned short int CN59PUE = 11;
    sbit  CN59PUE_bit at CNPU4.B11;
    const register unsigned short int CN58PUE = 10;
    sbit  CN58PUE_bit at CNPU4.B10;
    const register unsigned short int CN57PUE = 9;
    sbit  CN57PUE_bit at CNPU4.B9;
    const register unsigned short int CN56PUE = 8;
    sbit  CN56PUE_bit at CNPU4.B8;
    const register unsigned short int CN55PUE = 7;
    sbit  CN55PUE_bit at CNPU4.B7;
    const register unsigned short int CN54PUE = 6;
    sbit  CN54PUE_bit at CNPU4.B6;
    const register unsigned short int CN53PUE = 5;
    sbit  CN53PUE_bit at CNPU4.B5;
    const register unsigned short int CN52PUE = 4;
    sbit  CN52PUE_bit at CNPU4.B4;
    const register unsigned short int CN51PUE = 3;
    sbit  CN51PUE_bit at CNPU4.B3;
    const register unsigned short int CN50PUE = 2;
    sbit  CN50PUE_bit at CNPU4.B2;
    const register unsigned short int CN49PUE = 1;
    sbit  CN49PUE_bit at CNPU4.B1;

    // CNPU5 bits
    const register unsigned short int CN78PUE = 14;
    sbit  CN78PUE_bit at CNPU5.B14;
    const register unsigned short int CN77PUE = 13;
    sbit  CN77PUE_bit at CNPU5.B13;
    const register unsigned short int CN74PUE = 10;
    sbit  CN74PUE_bit at CNPU5.B10;
    const register unsigned short int CN71PUE = 7;
    sbit  CN71PUE_bit at CNPU5.B7;
    const register unsigned short int CN70PUE = 6;
    sbit  CN70PUE_bit at CNPU5.B6;
    const register unsigned short int CN69PUE = 5;
    sbit  CN69PUE_bit at CNPU5.B5;
    const register unsigned short int CN68PUE = 4;
    sbit  CN68PUE_bit at CNPU5.B4;
    const register unsigned short int CN67PUE = 3;
    sbit  CN67PUE_bit at CNPU5.B3;
    const register unsigned short int CN66PUE = 2;
    sbit  CN66PUE_bit at CNPU5.B2;
    const register unsigned short int CN65PUE = 1;
    sbit  CN65PUE_bit at CNPU5.B1;
    const register unsigned short int CN64PUE = 0;
    sbit  CN64PUE_bit at CNPU5.B0;

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
    const register unsigned short int INT4EP = 4;
    sbit  INT4EP_bit at INTCON2.B4;
    const register unsigned short int INT3EP = 3;
    sbit  INT3EP_bit at INTCON2.B3;
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
    const register unsigned short int IC8IF = 7;
    sbit  IC8IF_bit at IFS1.B7;
    const register unsigned short int IC7IF = 6;
    sbit  IC7IF_bit at IFS1.B6;
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
    const register unsigned short int OC8IF = 12;
    sbit  OC8IF_bit at IFS2.B12;
    const register unsigned short int OC7IF = 11;
    sbit  OC7IF_bit at IFS2.B11;
    const register unsigned short int OC6IF = 10;
    sbit  OC6IF_bit at IFS2.B10;
    const register unsigned short int OC5IF = 9;
    sbit  OC5IF_bit at IFS2.B9;
    const register unsigned short int IC6IF = 8;
    sbit  IC6IF_bit at IFS2.B8;
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
    const register unsigned short int INT4IF = 6;
    sbit  INT4IF_bit at IFS3.B6;
    const register unsigned short int INT3IF = 5;
    sbit  INT3IF_bit at IFS3.B5;
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

    // IFS5 bits
    const register unsigned short int IC9IF = 13;
    sbit  IC9IF_bit at IFS5.B13;
    const register unsigned short int OC9IF = 12;
    sbit  OC9IF_bit at IFS5.B12;
    const register unsigned short int SPI3IF = 11;
    sbit  SPI3IF_bit at IFS5.B11;
    const register unsigned short int SPF3IF = 10;
    sbit  SPF3IF_bit at IFS5.B10;
    const register unsigned short int U4TXIF = 9;
    sbit  U4TXIF_bit at IFS5.B9;
    const register unsigned short int U4RXIF = 8;
    sbit  U4RXIF_bit at IFS5.B8;
    const register unsigned short int U4ERIF = 7;
    sbit  U4ERIF_bit at IFS5.B7;
    const register unsigned short int USB1IF = 6;
    sbit  USB1IF_bit at IFS5.B6;
    const register unsigned short int MI2C3IF = 5;
    sbit  MI2C3IF_bit at IFS5.B5;
    const register unsigned short int SI2C3IF = 4;
    sbit  SI2C3IF_bit at IFS5.B4;
    const register unsigned short int U3TXIF = 3;
    sbit  U3TXIF_bit at IFS5.B3;
    const register unsigned short int U3RXIF = 2;
    sbit  U3RXIF_bit at IFS5.B2;
    const register unsigned short int U3ERIF = 1;
    sbit  U3ERIF_bit at IFS5.B1;

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
    const register unsigned short int IC8IE = 7;
    sbit  IC8IE_bit at IEC1.B7;
    const register unsigned short int IC7IE = 6;
    sbit  IC7IE_bit at IEC1.B6;
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
    const register unsigned short int OC8IE = 12;
    sbit  OC8IE_bit at IEC2.B12;
    const register unsigned short int OC7IE = 11;
    sbit  OC7IE_bit at IEC2.B11;
    const register unsigned short int OC6IE = 10;
    sbit  OC6IE_bit at IEC2.B10;
    const register unsigned short int OC5IE = 9;
    sbit  OC5IE_bit at IEC2.B9;
    const register unsigned short int IC6IE = 8;
    sbit  IC6IE_bit at IEC2.B8;
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
    const register unsigned short int INT4IE = 6;
    sbit  INT4IE_bit at IEC3.B6;
    const register unsigned short int INT3IE = 5;
    sbit  INT3IE_bit at IEC3.B5;
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

    // IEC5 bits
    const register unsigned short int IC9IE = 13;
    sbit  IC9IE_bit at IEC5.B13;
    const register unsigned short int OC9IE = 12;
    sbit  OC9IE_bit at IEC5.B12;
    const register unsigned short int SPI3IE = 11;
    sbit  SPI3IE_bit at IEC5.B11;
    const register unsigned short int SPF3IE = 10;
    sbit  SPF3IE_bit at IEC5.B10;
    const register unsigned short int U4TXIE = 9;
    sbit  U4TXIE_bit at IEC5.B9;
    const register unsigned short int U4RXIE = 8;
    sbit  U4RXIE_bit at IEC5.B8;
    const register unsigned short int U4ERIE = 7;
    sbit  U4ERIE_bit at IEC5.B7;
    const register unsigned short int USB1IE = 6;
    sbit  USB1IE_bit at IEC5.B6;
    const register unsigned short int MI2C3IE = 5;
    sbit  MI2C3IE_bit at IEC5.B5;
    const register unsigned short int SI2C3IE = 4;
    sbit  SI2C3IE_bit at IEC5.B4;
    const register unsigned short int U3TXIE = 3;
    sbit  U3TXIE_bit at IEC5.B3;
    const register unsigned short int U3RXIE = 2;
    sbit  U3RXIE_bit at IEC5.B2;
    const register unsigned short int U3ERIE = 1;
    sbit  U3ERIE_bit at IEC5.B1;

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
    const register unsigned short int IC8IP_2 = 14;
    sbit  IC8IP_2_bit at IPC5.B14;
    const register unsigned short int IC8IP_1 = 13;
    sbit  IC8IP_1_bit at IPC5.B13;
    const register unsigned short int IC8IP_0 = 12;
    sbit  IC8IP_0_bit at IPC5.B12;
    const register unsigned short int IC7IP_2 = 10;
    sbit  IC7IP_2_bit at IPC5.B10;
    const register unsigned short int IC7IP_1 = 9;
    sbit  IC7IP_1_bit at IPC5.B9;
    const register unsigned short int IC7IP_0 = 8;
    sbit  IC7IP_0_bit at IPC5.B8;
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
    const register unsigned short int OC7IP_2 = 14;
    sbit  OC7IP_2_bit at IPC10.B14;
    const register unsigned short int OC7IP_1 = 13;
    sbit  OC7IP_1_bit at IPC10.B13;
    const register unsigned short int OC7IP_0 = 12;
    sbit  OC7IP_0_bit at IPC10.B12;
    const register unsigned short int OC6IP_2 = 10;
    sbit  OC6IP_2_bit at IPC10.B10;
    const register unsigned short int OC6IP_1 = 9;
    sbit  OC6IP_1_bit at IPC10.B9;
    const register unsigned short int OC6IP_0 = 8;
    sbit  OC6IP_0_bit at IPC10.B8;
    const register unsigned short int OC5IP_2 = 6;
    sbit  OC5IP_2_bit at IPC10.B6;
    const register unsigned short int OC5IP_1 = 5;
    sbit  OC5IP_1_bit at IPC10.B5;
    const register unsigned short int OC5IP_0 = 4;
    sbit  OC5IP_0_bit at IPC10.B4;
    const register unsigned short int IC6IP_2 = 2;
    sbit  IC6IP_2_bit at IPC10.B2;
    const register unsigned short int IC6IP_1 = 1;
    sbit  IC6IP_1_bit at IPC10.B1;
    const register unsigned short int IC6IP_0 = 0;
    sbit  IC6IP_0_bit at IPC10.B0;

    // IPC11 bits
    const register unsigned short int PMPIP_2 = 6;
    sbit  PMPIP_2_bit at IPC11.B6;
    const register unsigned short int PMPIP_1 = 5;
    sbit  PMPIP_1_bit at IPC11.B5;
    const register unsigned short int PMPIP_0 = 4;
    sbit  PMPIP_0_bit at IPC11.B4;
    const register unsigned short int OC8IP_2 = 2;
    sbit  OC8IP_2_bit at IPC11.B2;
    const register unsigned short int OC8IP_1 = 1;
    sbit  OC8IP_1_bit at IPC11.B1;
    const register unsigned short int OC8IP_0 = 0;
    sbit  OC8IP_0_bit at IPC11.B0;

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

    // IPC13 bits
    const register unsigned short int INT4IP_2 = 10;
    sbit  INT4IP_2_bit at IPC13.B10;
    const register unsigned short int INT4IP_1 = 9;
    sbit  INT4IP_1_bit at IPC13.B9;
    const register unsigned short int INT4IP_0 = 8;
    sbit  INT4IP_0_bit at IPC13.B8;
    const register unsigned short int INT3IP_2 = 6;
    sbit  INT3IP_2_bit at IPC13.B6;
    const register unsigned short int INT3IP_1 = 5;
    sbit  INT3IP_1_bit at IPC13.B5;
    const register unsigned short int INT3IP_0 = 4;
    sbit  INT3IP_0_bit at IPC13.B4;

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

    // IPC20 bits
    const register unsigned short int U3TXIP_2 = 14;
    sbit  U3TXIP_2_bit at IPC20.B14;
    const register unsigned short int U3TXIP_1 = 13;
    sbit  U3TXIP_1_bit at IPC20.B13;
    const register unsigned short int U3TXIP_0 = 12;
    sbit  U3TXIP_0_bit at IPC20.B12;
    const register unsigned short int U3RXIP_2 = 10;
    sbit  U3RXIP_2_bit at IPC20.B10;
    const register unsigned short int U3RXIP_1 = 9;
    sbit  U3RXIP_1_bit at IPC20.B9;
    const register unsigned short int U3RXIP_0 = 8;
    sbit  U3RXIP_0_bit at IPC20.B8;
    const register unsigned short int U3ERIP_2 = 6;
    sbit  U3ERIP_2_bit at IPC20.B6;
    const register unsigned short int U3ERIP_1 = 5;
    sbit  U3ERIP_1_bit at IPC20.B5;
    const register unsigned short int U3ERIP_0 = 4;
    sbit  U3ERIP_0_bit at IPC20.B4;

    // IPC21 bits
    const register unsigned short int U4ERIP_2 = 14;
    sbit  U4ERIP_2_bit at IPC21.B14;
    const register unsigned short int U4ERIP_1 = 13;
    sbit  U4ERIP_1_bit at IPC21.B13;
    const register unsigned short int U4ERIP_0 = 12;
    sbit  U4ERIP_0_bit at IPC21.B12;
    const register unsigned short int USB1IP_2 = 10;
    sbit  USB1IP_2_bit at IPC21.B10;
    const register unsigned short int USB1IP_1 = 9;
    sbit  USB1IP_1_bit at IPC21.B9;
    const register unsigned short int USB1IP_0 = 8;
    sbit  USB1IP_0_bit at IPC21.B8;
    const register unsigned short int MI2C3P_2 = 6;
    sbit  MI2C3P_2_bit at IPC21.B6;
    const register unsigned short int MI2C3P_1 = 5;
    sbit  MI2C3P_1_bit at IPC21.B5;
    const register unsigned short int MI2C3P_0 = 4;
    sbit  MI2C3P_0_bit at IPC21.B4;
    const register unsigned short int SI2C3P_2 = 2;
    sbit  SI2C3P_2_bit at IPC21.B2;
    const register unsigned short int SI2C3P_1 = 1;
    sbit  SI2C3P_1_bit at IPC21.B1;
    const register unsigned short int SI2C3P_0 = 0;
    sbit  SI2C3P_0_bit at IPC21.B0;

    // IPC22 bits
    const register unsigned short int SPI3IP_2 = 14;
    sbit  SPI3IP_2_bit at IPC22.B14;
    const register unsigned short int SPI3IP_1 = 13;
    sbit  SPI3IP_1_bit at IPC22.B13;
    const register unsigned short int SPI3IP_0 = 12;
    sbit  SPI3IP_0_bit at IPC22.B12;
    const register unsigned short int SPF3IP_2 = 10;
    sbit  SPF3IP_2_bit at IPC22.B10;
    const register unsigned short int SPF3IP_1 = 9;
    sbit  SPF3IP_1_bit at IPC22.B9;
    const register unsigned short int SPF3IP_0 = 8;
    sbit  SPF3IP_0_bit at IPC22.B8;
    const register unsigned short int U4TXIP_2 = 6;
    sbit  U4TXIP_2_bit at IPC22.B6;
    const register unsigned short int U4TXIP_1 = 5;
    sbit  U4TXIP_1_bit at IPC22.B5;
    const register unsigned short int U4TXIP_0 = 4;
    sbit  U4TXIP_0_bit at IPC22.B4;
    const register unsigned short int U4RXIP_2 = 2;
    sbit  U4RXIP_2_bit at IPC22.B2;
    const register unsigned short int U4RXIP_1 = 1;
    sbit  U4RXIP_1_bit at IPC22.B1;
    const register unsigned short int U4RXIP_0 = 0;
    sbit  U4RXIP_0_bit at IPC22.B0;

    // IPC23 bits
    const register unsigned short int IC9IP_2 = 6;
    sbit  IC9IP_2_bit at IPC23.B6;
    const register unsigned short int IC9IP_1 = 5;
    sbit  IC9IP_1_bit at IPC23.B5;
    const register unsigned short int IC9IP_0 = 4;
    sbit  IC9IP_0_bit at IPC23.B4;
    const register unsigned short int OC9IP_2 = 2;
    sbit  OC9IP_2_bit at IPC23.B2;
    const register unsigned short int OC9IP_1 = 1;
    sbit  OC9IP_1_bit at IPC23.B1;
    const register unsigned short int OC9IP_0 = 0;
    sbit  OC9IP_0_bit at IPC23.B0;

    // INTTREG bits
    const register unsigned short int IRQtoCPU = 15;
    sbit  IRQtoCPU_bit at INTTREG.B15;
    const register unsigned short int TMODE = 14;
    sbit  TMODE_bit at INTTREG.B14;
    const register unsigned short int ILR_3 = 11;
    sbit  ILR_3_bit at INTTREG.B11;
    const register unsigned short int ILR_2 = 10;
    sbit  ILR_2_bit at INTTREG.B10;
    const register unsigned short int ILR_1 = 9;
    sbit  ILR_1_bit at INTTREG.B9;
    const register unsigned short int ILR_0 = 8;
    sbit  ILR_0_bit at INTTREG.B8;
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

    // IC6CON1 bits
    sbit  ICSIDL_IC6CON1_bit at IC6CON1.B13;
    sbit  ICTSEL_2_IC6CON1_bit at IC6CON1.B12;
    sbit  ICTSEL_1_IC6CON1_bit at IC6CON1.B11;
    sbit  ICTSEL_0_IC6CON1_bit at IC6CON1.B10;
    sbit  ICI_1_IC6CON1_bit at IC6CON1.B6;
    sbit  ICI_0_IC6CON1_bit at IC6CON1.B5;
    sbit  ICOV_IC6CON1_bit at IC6CON1.B4;
    sbit  ICBNE_IC6CON1_bit at IC6CON1.B3;
    sbit  ICM_2_IC6CON1_bit at IC6CON1.B2;
    sbit  ICM_1_IC6CON1_bit at IC6CON1.B1;
    sbit  ICM_0_IC6CON1_bit at IC6CON1.B0;

    // IC6CON2 bits
    sbit  IC32_IC6CON2_bit at IC6CON2.B8;
    sbit  ICTRIG_IC6CON2_bit at IC6CON2.B7;
    sbit  TRIGSTAT_IC6CON2_bit at IC6CON2.B6;
    sbit  SYNCSEL_4_IC6CON2_bit at IC6CON2.B4;
    sbit  SYNCSEL_3_IC6CON2_bit at IC6CON2.B3;
    sbit  SYNCSEL_2_IC6CON2_bit at IC6CON2.B2;
    sbit  SYNCSEL_1_IC6CON2_bit at IC6CON2.B1;
    sbit  SYNCSEL_0_IC6CON2_bit at IC6CON2.B0;

    // IC6BUF bits
    const register unsigned short int IC6BUF_15 = 15;
    sbit  IC6BUF_15_bit at IC6BUF.B15;
    const register unsigned short int IC6BUF_14 = 14;
    sbit  IC6BUF_14_bit at IC6BUF.B14;
    const register unsigned short int IC6BUF_13 = 13;
    sbit  IC6BUF_13_bit at IC6BUF.B13;
    const register unsigned short int IC6BUF_12 = 12;
    sbit  IC6BUF_12_bit at IC6BUF.B12;
    const register unsigned short int IC6BUF_11 = 11;
    sbit  IC6BUF_11_bit at IC6BUF.B11;
    const register unsigned short int IC6BUF_10 = 10;
    sbit  IC6BUF_10_bit at IC6BUF.B10;
    const register unsigned short int IC6BUF_9 = 9;
    sbit  IC6BUF_9_bit at IC6BUF.B9;
    const register unsigned short int IC6BUF_8 = 8;
    sbit  IC6BUF_8_bit at IC6BUF.B8;
    const register unsigned short int IC6BUF_7 = 7;
    sbit  IC6BUF_7_bit at IC6BUF.B7;
    const register unsigned short int IC6BUF_6 = 6;
    sbit  IC6BUF_6_bit at IC6BUF.B6;
    const register unsigned short int IC6BUF_5 = 5;
    sbit  IC6BUF_5_bit at IC6BUF.B5;
    const register unsigned short int IC6BUF_4 = 4;
    sbit  IC6BUF_4_bit at IC6BUF.B4;
    const register unsigned short int IC6BUF_3 = 3;
    sbit  IC6BUF_3_bit at IC6BUF.B3;
    const register unsigned short int IC6BUF_2 = 2;
    sbit  IC6BUF_2_bit at IC6BUF.B2;
    const register unsigned short int IC6BUF_1 = 1;
    sbit  IC6BUF_1_bit at IC6BUF.B1;
    const register unsigned short int IC6BUF_0 = 0;
    sbit  IC6BUF_0_bit at IC6BUF.B0;

    // IC6TMR bits
    const register unsigned short int IC6TMR_15 = 15;
    sbit  IC6TMR_15_bit at IC6TMR.B15;
    const register unsigned short int IC6TMR_14 = 14;
    sbit  IC6TMR_14_bit at IC6TMR.B14;
    const register unsigned short int IC6TMR_13 = 13;
    sbit  IC6TMR_13_bit at IC6TMR.B13;
    const register unsigned short int IC6TMR_12 = 12;
    sbit  IC6TMR_12_bit at IC6TMR.B12;
    const register unsigned short int IC6TMR_11 = 11;
    sbit  IC6TMR_11_bit at IC6TMR.B11;
    const register unsigned short int IC6TMR_10 = 10;
    sbit  IC6TMR_10_bit at IC6TMR.B10;
    const register unsigned short int IC6TMR_9 = 9;
    sbit  IC6TMR_9_bit at IC6TMR.B9;
    const register unsigned short int IC6TMR_8 = 8;
    sbit  IC6TMR_8_bit at IC6TMR.B8;
    const register unsigned short int IC6TMR_7 = 7;
    sbit  IC6TMR_7_bit at IC6TMR.B7;
    const register unsigned short int IC6TMR_6 = 6;
    sbit  IC6TMR_6_bit at IC6TMR.B6;
    const register unsigned short int IC6TMR_5 = 5;
    sbit  IC6TMR_5_bit at IC6TMR.B5;
    const register unsigned short int IC6TMR_4 = 4;
    sbit  IC6TMR_4_bit at IC6TMR.B4;
    const register unsigned short int IC6TMR_3 = 3;
    sbit  IC6TMR_3_bit at IC6TMR.B3;
    const register unsigned short int IC6TMR_2 = 2;
    sbit  IC6TMR_2_bit at IC6TMR.B2;
    const register unsigned short int IC6TMR_1 = 1;
    sbit  IC6TMR_1_bit at IC6TMR.B1;
    const register unsigned short int IC6TMR_0 = 0;
    sbit  IC6TMR_0_bit at IC6TMR.B0;

    // IC7CON1 bits
    sbit  ICSIDL_IC7CON1_bit at IC7CON1.B13;
    sbit  ICTSEL_2_IC7CON1_bit at IC7CON1.B12;
    sbit  ICTSEL_1_IC7CON1_bit at IC7CON1.B11;
    sbit  ICTSEL_0_IC7CON1_bit at IC7CON1.B10;
    sbit  ICI_1_IC7CON1_bit at IC7CON1.B6;
    sbit  ICI_0_IC7CON1_bit at IC7CON1.B5;
    sbit  ICOV_IC7CON1_bit at IC7CON1.B4;
    sbit  ICBNE_IC7CON1_bit at IC7CON1.B3;
    sbit  ICM_2_IC7CON1_bit at IC7CON1.B2;
    sbit  ICM_1_IC7CON1_bit at IC7CON1.B1;
    sbit  ICM_0_IC7CON1_bit at IC7CON1.B0;

    // IC7CON2 bits
    sbit  IC32_IC7CON2_bit at IC7CON2.B8;
    sbit  ICTRIG_IC7CON2_bit at IC7CON2.B7;
    sbit  TRIGSTAT_IC7CON2_bit at IC7CON2.B6;
    sbit  SYNCSEL_4_IC7CON2_bit at IC7CON2.B4;
    sbit  SYNCSEL_3_IC7CON2_bit at IC7CON2.B3;
    sbit  SYNCSEL_2_IC7CON2_bit at IC7CON2.B2;
    sbit  SYNCSEL_1_IC7CON2_bit at IC7CON2.B1;
    sbit  SYNCSEL_0_IC7CON2_bit at IC7CON2.B0;

    // IC7BUF bits
    const register unsigned short int IC7BUF_15 = 15;
    sbit  IC7BUF_15_bit at IC7BUF.B15;
    const register unsigned short int IC7BUF_14 = 14;
    sbit  IC7BUF_14_bit at IC7BUF.B14;
    const register unsigned short int IC7BUF_13 = 13;
    sbit  IC7BUF_13_bit at IC7BUF.B13;
    const register unsigned short int IC7BUF_12 = 12;
    sbit  IC7BUF_12_bit at IC7BUF.B12;
    const register unsigned short int IC7BUF_11 = 11;
    sbit  IC7BUF_11_bit at IC7BUF.B11;
    const register unsigned short int IC7BUF_10 = 10;
    sbit  IC7BUF_10_bit at IC7BUF.B10;
    const register unsigned short int IC7BUF_9 = 9;
    sbit  IC7BUF_9_bit at IC7BUF.B9;
    const register unsigned short int IC7BUF_8 = 8;
    sbit  IC7BUF_8_bit at IC7BUF.B8;
    const register unsigned short int IC7BUF_7 = 7;
    sbit  IC7BUF_7_bit at IC7BUF.B7;
    const register unsigned short int IC7BUF_6 = 6;
    sbit  IC7BUF_6_bit at IC7BUF.B6;
    const register unsigned short int IC7BUF_5 = 5;
    sbit  IC7BUF_5_bit at IC7BUF.B5;
    const register unsigned short int IC7BUF_4 = 4;
    sbit  IC7BUF_4_bit at IC7BUF.B4;
    const register unsigned short int IC7BUF_3 = 3;
    sbit  IC7BUF_3_bit at IC7BUF.B3;
    const register unsigned short int IC7BUF_2 = 2;
    sbit  IC7BUF_2_bit at IC7BUF.B2;
    const register unsigned short int IC7BUF_1 = 1;
    sbit  IC7BUF_1_bit at IC7BUF.B1;
    const register unsigned short int IC7BUF_0 = 0;
    sbit  IC7BUF_0_bit at IC7BUF.B0;

    // IC7TMR bits
    const register unsigned short int IC7TMR_15 = 15;
    sbit  IC7TMR_15_bit at IC7TMR.B15;
    const register unsigned short int IC7TMR_14 = 14;
    sbit  IC7TMR_14_bit at IC7TMR.B14;
    const register unsigned short int IC7TMR_13 = 13;
    sbit  IC7TMR_13_bit at IC7TMR.B13;
    const register unsigned short int IC7TMR_12 = 12;
    sbit  IC7TMR_12_bit at IC7TMR.B12;
    const register unsigned short int IC7TMR_11 = 11;
    sbit  IC7TMR_11_bit at IC7TMR.B11;
    const register unsigned short int IC7TMR_10 = 10;
    sbit  IC7TMR_10_bit at IC7TMR.B10;
    const register unsigned short int IC7TMR_9 = 9;
    sbit  IC7TMR_9_bit at IC7TMR.B9;
    const register unsigned short int IC7TMR_8 = 8;
    sbit  IC7TMR_8_bit at IC7TMR.B8;
    const register unsigned short int IC7TMR_7 = 7;
    sbit  IC7TMR_7_bit at IC7TMR.B7;
    const register unsigned short int IC7TMR_6 = 6;
    sbit  IC7TMR_6_bit at IC7TMR.B6;
    const register unsigned short int IC7TMR_5 = 5;
    sbit  IC7TMR_5_bit at IC7TMR.B5;
    const register unsigned short int IC7TMR_4 = 4;
    sbit  IC7TMR_4_bit at IC7TMR.B4;
    const register unsigned short int IC7TMR_3 = 3;
    sbit  IC7TMR_3_bit at IC7TMR.B3;
    const register unsigned short int IC7TMR_2 = 2;
    sbit  IC7TMR_2_bit at IC7TMR.B2;
    const register unsigned short int IC7TMR_1 = 1;
    sbit  IC7TMR_1_bit at IC7TMR.B1;
    const register unsigned short int IC7TMR_0 = 0;
    sbit  IC7TMR_0_bit at IC7TMR.B0;

    // IC8CON1 bits
    sbit  ICSIDL_IC8CON1_bit at IC8CON1.B13;
    sbit  ICTSEL_2_IC8CON1_bit at IC8CON1.B12;
    sbit  ICTSEL_1_IC8CON1_bit at IC8CON1.B11;
    sbit  ICTSEL_0_IC8CON1_bit at IC8CON1.B10;
    sbit  ICI_1_IC8CON1_bit at IC8CON1.B6;
    sbit  ICI_0_IC8CON1_bit at IC8CON1.B5;
    sbit  ICOV_IC8CON1_bit at IC8CON1.B4;
    sbit  ICBNE_IC8CON1_bit at IC8CON1.B3;
    sbit  ICM_2_IC8CON1_bit at IC8CON1.B2;
    sbit  ICM_1_IC8CON1_bit at IC8CON1.B1;
    sbit  ICM_0_IC8CON1_bit at IC8CON1.B0;

    // IC8CON2 bits
    sbit  IC32_IC8CON2_bit at IC8CON2.B8;
    sbit  ICTRIG_IC8CON2_bit at IC8CON2.B7;
    sbit  TRIGSTAT_IC8CON2_bit at IC8CON2.B6;
    sbit  SYNCSEL_4_IC8CON2_bit at IC8CON2.B4;
    sbit  SYNCSEL_3_IC8CON2_bit at IC8CON2.B3;
    sbit  SYNCSEL_2_IC8CON2_bit at IC8CON2.B2;
    sbit  SYNCSEL_1_IC8CON2_bit at IC8CON2.B1;
    sbit  SYNCSEL_0_IC8CON2_bit at IC8CON2.B0;

    // IC8BUF bits
    const register unsigned short int IC8BUF_15 = 15;
    sbit  IC8BUF_15_bit at IC8BUF.B15;
    const register unsigned short int IC8BUF_14 = 14;
    sbit  IC8BUF_14_bit at IC8BUF.B14;
    const register unsigned short int IC8BUF_13 = 13;
    sbit  IC8BUF_13_bit at IC8BUF.B13;
    const register unsigned short int IC8BUF_12 = 12;
    sbit  IC8BUF_12_bit at IC8BUF.B12;
    const register unsigned short int IC8BUF_11 = 11;
    sbit  IC8BUF_11_bit at IC8BUF.B11;
    const register unsigned short int IC8BUF_10 = 10;
    sbit  IC8BUF_10_bit at IC8BUF.B10;
    const register unsigned short int IC8BUF_9 = 9;
    sbit  IC8BUF_9_bit at IC8BUF.B9;
    const register unsigned short int IC8BUF_8 = 8;
    sbit  IC8BUF_8_bit at IC8BUF.B8;
    const register unsigned short int IC8BUF_7 = 7;
    sbit  IC8BUF_7_bit at IC8BUF.B7;
    const register unsigned short int IC8BUF_6 = 6;
    sbit  IC8BUF_6_bit at IC8BUF.B6;
    const register unsigned short int IC8BUF_5 = 5;
    sbit  IC8BUF_5_bit at IC8BUF.B5;
    const register unsigned short int IC8BUF_4 = 4;
    sbit  IC8BUF_4_bit at IC8BUF.B4;
    const register unsigned short int IC8BUF_3 = 3;
    sbit  IC8BUF_3_bit at IC8BUF.B3;
    const register unsigned short int IC8BUF_2 = 2;
    sbit  IC8BUF_2_bit at IC8BUF.B2;
    const register unsigned short int IC8BUF_1 = 1;
    sbit  IC8BUF_1_bit at IC8BUF.B1;
    const register unsigned short int IC8BUF_0 = 0;
    sbit  IC8BUF_0_bit at IC8BUF.B0;

    // IC8TMR bits
    const register unsigned short int IC8TMR_15 = 15;
    sbit  IC8TMR_15_bit at IC8TMR.B15;
    const register unsigned short int IC8TMR_14 = 14;
    sbit  IC8TMR_14_bit at IC8TMR.B14;
    const register unsigned short int IC8TMR_13 = 13;
    sbit  IC8TMR_13_bit at IC8TMR.B13;
    const register unsigned short int IC8TMR_12 = 12;
    sbit  IC8TMR_12_bit at IC8TMR.B12;
    const register unsigned short int IC8TMR_11 = 11;
    sbit  IC8TMR_11_bit at IC8TMR.B11;
    const register unsigned short int IC8TMR_10 = 10;
    sbit  IC8TMR_10_bit at IC8TMR.B10;
    const register unsigned short int IC8TMR_9 = 9;
    sbit  IC8TMR_9_bit at IC8TMR.B9;
    const register unsigned short int IC8TMR_8 = 8;
    sbit  IC8TMR_8_bit at IC8TMR.B8;
    const register unsigned short int IC8TMR_7 = 7;
    sbit  IC8TMR_7_bit at IC8TMR.B7;
    const register unsigned short int IC8TMR_6 = 6;
    sbit  IC8TMR_6_bit at IC8TMR.B6;
    const register unsigned short int IC8TMR_5 = 5;
    sbit  IC8TMR_5_bit at IC8TMR.B5;
    const register unsigned short int IC8TMR_4 = 4;
    sbit  IC8TMR_4_bit at IC8TMR.B4;
    const register unsigned short int IC8TMR_3 = 3;
    sbit  IC8TMR_3_bit at IC8TMR.B3;
    const register unsigned short int IC8TMR_2 = 2;
    sbit  IC8TMR_2_bit at IC8TMR.B2;
    const register unsigned short int IC8TMR_1 = 1;
    sbit  IC8TMR_1_bit at IC8TMR.B1;
    const register unsigned short int IC8TMR_0 = 0;
    sbit  IC8TMR_0_bit at IC8TMR.B0;

    // IC9CON1 bits
    sbit  ICSIDL_IC9CON1_bit at IC9CON1.B13;
    sbit  ICTSEL_2_IC9CON1_bit at IC9CON1.B12;
    sbit  ICTSEL_1_IC9CON1_bit at IC9CON1.B11;
    sbit  ICTSEL_0_IC9CON1_bit at IC9CON1.B10;
    sbit  ICI_1_IC9CON1_bit at IC9CON1.B6;
    sbit  ICI_0_IC9CON1_bit at IC9CON1.B5;
    sbit  ICOV_IC9CON1_bit at IC9CON1.B4;
    sbit  ICBNE_IC9CON1_bit at IC9CON1.B3;
    sbit  ICM_2_IC9CON1_bit at IC9CON1.B2;
    sbit  ICM_1_IC9CON1_bit at IC9CON1.B1;
    sbit  ICM_0_IC9CON1_bit at IC9CON1.B0;

    // IC9CON2 bits
    sbit  IC32_IC9CON2_bit at IC9CON2.B8;
    sbit  ICTRIG_IC9CON2_bit at IC9CON2.B7;
    sbit  TRIGSTAT_IC9CON2_bit at IC9CON2.B6;
    sbit  SYNCSEL_4_IC9CON2_bit at IC9CON2.B4;
    sbit  SYNCSEL_3_IC9CON2_bit at IC9CON2.B3;
    sbit  SYNCSEL_2_IC9CON2_bit at IC9CON2.B2;
    sbit  SYNCSEL_1_IC9CON2_bit at IC9CON2.B1;
    sbit  SYNCSEL_0_IC9CON2_bit at IC9CON2.B0;

    // IC9BUF bits
    const register unsigned short int IC9BUF_15 = 15;
    sbit  IC9BUF_15_bit at IC9BUF.B15;
    const register unsigned short int IC9BUF_14 = 14;
    sbit  IC9BUF_14_bit at IC9BUF.B14;
    const register unsigned short int IC9BUF_13 = 13;
    sbit  IC9BUF_13_bit at IC9BUF.B13;
    const register unsigned short int IC9BUF_12 = 12;
    sbit  IC9BUF_12_bit at IC9BUF.B12;
    const register unsigned short int IC9BUF_11 = 11;
    sbit  IC9BUF_11_bit at IC9BUF.B11;
    const register unsigned short int IC9BUF_10 = 10;
    sbit  IC9BUF_10_bit at IC9BUF.B10;
    const register unsigned short int IC9BUF_9 = 9;
    sbit  IC9BUF_9_bit at IC9BUF.B9;
    const register unsigned short int IC9BUF_8 = 8;
    sbit  IC9BUF_8_bit at IC9BUF.B8;
    const register unsigned short int IC9BUF_7 = 7;
    sbit  IC9BUF_7_bit at IC9BUF.B7;
    const register unsigned short int IC9BUF_6 = 6;
    sbit  IC9BUF_6_bit at IC9BUF.B6;
    const register unsigned short int IC9BUF_5 = 5;
    sbit  IC9BUF_5_bit at IC9BUF.B5;
    const register unsigned short int IC9BUF_4 = 4;
    sbit  IC9BUF_4_bit at IC9BUF.B4;
    const register unsigned short int IC9BUF_3 = 3;
    sbit  IC9BUF_3_bit at IC9BUF.B3;
    const register unsigned short int IC9BUF_2 = 2;
    sbit  IC9BUF_2_bit at IC9BUF.B2;
    const register unsigned short int IC9BUF_1 = 1;
    sbit  IC9BUF_1_bit at IC9BUF.B1;
    const register unsigned short int IC9BUF_0 = 0;
    sbit  IC9BUF_0_bit at IC9BUF.B0;

    // IC9TMR bits
    const register unsigned short int IC9TMR_15 = 15;
    sbit  IC9TMR_15_bit at IC9TMR.B15;
    const register unsigned short int IC9TMR_14 = 14;
    sbit  IC9TMR_14_bit at IC9TMR.B14;
    const register unsigned short int IC9TMR_13 = 13;
    sbit  IC9TMR_13_bit at IC9TMR.B13;
    const register unsigned short int IC9TMR_12 = 12;
    sbit  IC9TMR_12_bit at IC9TMR.B12;
    const register unsigned short int IC9TMR_11 = 11;
    sbit  IC9TMR_11_bit at IC9TMR.B11;
    const register unsigned short int IC9TMR_10 = 10;
    sbit  IC9TMR_10_bit at IC9TMR.B10;
    const register unsigned short int IC9TMR_9 = 9;
    sbit  IC9TMR_9_bit at IC9TMR.B9;
    const register unsigned short int IC9TMR_8 = 8;
    sbit  IC9TMR_8_bit at IC9TMR.B8;
    const register unsigned short int IC9TMR_7 = 7;
    sbit  IC9TMR_7_bit at IC9TMR.B7;
    const register unsigned short int IC9TMR_6 = 6;
    sbit  IC9TMR_6_bit at IC9TMR.B6;
    const register unsigned short int IC9TMR_5 = 5;
    sbit  IC9TMR_5_bit at IC9TMR.B5;
    const register unsigned short int IC9TMR_4 = 4;
    sbit  IC9TMR_4_bit at IC9TMR.B4;
    const register unsigned short int IC9TMR_3 = 3;
    sbit  IC9TMR_3_bit at IC9TMR.B3;
    const register unsigned short int IC9TMR_2 = 2;
    sbit  IC9TMR_2_bit at IC9TMR.B2;
    const register unsigned short int IC9TMR_1 = 1;
    sbit  IC9TMR_1_bit at IC9TMR.B1;
    const register unsigned short int IC9TMR_0 = 0;
    sbit  IC9TMR_0_bit at IC9TMR.B0;

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
    const register unsigned short int ENFLT0 = 7;
    sbit  ENFLT0_bit at OC1CON1.B7;
    sbit  ENFLT0_OC1CON1_bit at OC1CON1.B7;
    const register unsigned short int OCFLT0 = 4;
    sbit  OCFLT0_bit at OC1CON1.B4;
    sbit  OCFLT0_OC1CON1_bit at OC1CON1.B4;
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
    const register unsigned short int CMP2B_15 = 15;
    sbit  CMP2B_15_bit at OC1RS.B15;
    sbit  CMP2B_15_OC1RS_bit at OC1RS.B15;
    const register unsigned short int CMP2B_14 = 14;
    sbit  CMP2B_14_bit at OC1RS.B14;
    sbit  CMP2B_14_OC1RS_bit at OC1RS.B14;
    const register unsigned short int CMP2B_13 = 13;
    sbit  CMP2B_13_bit at OC1RS.B13;
    sbit  CMP2B_13_OC1RS_bit at OC1RS.B13;
    const register unsigned short int CMP2B_12 = 12;
    sbit  CMP2B_12_bit at OC1RS.B12;
    sbit  CMP2B_12_OC1RS_bit at OC1RS.B12;
    const register unsigned short int CMP2B_11 = 11;
    sbit  CMP2B_11_bit at OC1RS.B11;
    sbit  CMP2B_11_OC1RS_bit at OC1RS.B11;
    const register unsigned short int CMP2B_10 = 10;
    sbit  CMP2B_10_bit at OC1RS.B10;
    sbit  CMP2B_10_OC1RS_bit at OC1RS.B10;
    const register unsigned short int CMP2B_9 = 9;
    sbit  CMP2B_9_bit at OC1RS.B9;
    sbit  CMP2B_9_OC1RS_bit at OC1RS.B9;
    const register unsigned short int CMP2B_8 = 8;
    sbit  CMP2B_8_bit at OC1RS.B8;
    sbit  CMP2B_8_OC1RS_bit at OC1RS.B8;
    const register unsigned short int CMP2B_7 = 7;
    sbit  CMP2B_7_bit at OC1RS.B7;
    sbit  CMP2B_7_OC1RS_bit at OC1RS.B7;
    const register unsigned short int CMP2B_6 = 6;
    sbit  CMP2B_6_bit at OC1RS.B6;
    sbit  CMP2B_6_OC1RS_bit at OC1RS.B6;
    const register unsigned short int CMP2B_5 = 5;
    sbit  CMP2B_5_bit at OC1RS.B5;
    sbit  CMP2B_5_OC1RS_bit at OC1RS.B5;
    const register unsigned short int CMP2B_4 = 4;
    sbit  CMP2B_4_bit at OC1RS.B4;
    sbit  CMP2B_4_OC1RS_bit at OC1RS.B4;
    const register unsigned short int CMP2B_3 = 3;
    sbit  CMP2B_3_bit at OC1RS.B3;
    sbit  CMP2B_3_OC1RS_bit at OC1RS.B3;
    const register unsigned short int CMP2B_2 = 2;
    sbit  CMP2B_2_bit at OC1RS.B2;
    sbit  CMP2B_2_OC1RS_bit at OC1RS.B2;
    const register unsigned short int CMP2B_1 = 1;
    sbit  CMP2B_1_bit at OC1RS.B1;
    sbit  CMP2B_1_OC1RS_bit at OC1RS.B1;
    const register unsigned short int CMP2B_0 = 0;
    sbit  CMP2B_0_bit at OC1RS.B0;
    sbit  CMP2B_0_OC1RS_bit at OC1RS.B0;

    // OC1R bits
    const register unsigned short int CMP1B_15 = 15;
    sbit  CMP1B_15_bit at OC1R.B15;
    sbit  CMP1B_15_OC1R_bit at OC1R.B15;
    const register unsigned short int CMP1B_14 = 14;
    sbit  CMP1B_14_bit at OC1R.B14;
    sbit  CMP1B_14_OC1R_bit at OC1R.B14;
    const register unsigned short int CMP1B_13 = 13;
    sbit  CMP1B_13_bit at OC1R.B13;
    sbit  CMP1B_13_OC1R_bit at OC1R.B13;
    const register unsigned short int CMP1B_12 = 12;
    sbit  CMP1B_12_bit at OC1R.B12;
    sbit  CMP1B_12_OC1R_bit at OC1R.B12;
    const register unsigned short int CMP1B_11 = 11;
    sbit  CMP1B_11_bit at OC1R.B11;
    sbit  CMP1B_11_OC1R_bit at OC1R.B11;
    const register unsigned short int CMP1B_10 = 10;
    sbit  CMP1B_10_bit at OC1R.B10;
    sbit  CMP1B_10_OC1R_bit at OC1R.B10;
    const register unsigned short int CMP1B_9 = 9;
    sbit  CMP1B_9_bit at OC1R.B9;
    sbit  CMP1B_9_OC1R_bit at OC1R.B9;
    const register unsigned short int CMP1B_8 = 8;
    sbit  CMP1B_8_bit at OC1R.B8;
    sbit  CMP1B_8_OC1R_bit at OC1R.B8;
    const register unsigned short int CMP1B_7 = 7;
    sbit  CMP1B_7_bit at OC1R.B7;
    sbit  CMP1B_7_OC1R_bit at OC1R.B7;
    const register unsigned short int CMP1B_6 = 6;
    sbit  CMP1B_6_bit at OC1R.B6;
    sbit  CMP1B_6_OC1R_bit at OC1R.B6;
    const register unsigned short int CMP1B_5 = 5;
    sbit  CMP1B_5_bit at OC1R.B5;
    sbit  CMP1B_5_OC1R_bit at OC1R.B5;
    const register unsigned short int CMP1B_4 = 4;
    sbit  CMP1B_4_bit at OC1R.B4;
    sbit  CMP1B_4_OC1R_bit at OC1R.B4;
    const register unsigned short int CMP1B_3 = 3;
    sbit  CMP1B_3_bit at OC1R.B3;
    sbit  CMP1B_3_OC1R_bit at OC1R.B3;
    const register unsigned short int CMP1B_2 = 2;
    sbit  CMP1B_2_bit at OC1R.B2;
    sbit  CMP1B_2_OC1R_bit at OC1R.B2;
    const register unsigned short int CMP1B_1 = 1;
    sbit  CMP1B_1_bit at OC1R.B1;
    sbit  CMP1B_1_OC1R_bit at OC1R.B1;
    const register unsigned short int CMP1B_0 = 0;
    sbit  CMP1B_0_bit at OC1R.B0;
    sbit  CMP1B_0_OC1R_bit at OC1R.B0;

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
    sbit  ENFLT0_OC2CON1_bit at OC2CON1.B7;
    sbit  OCFLT0_OC2CON1_bit at OC2CON1.B4;
    sbit  TRIGMODE_OC2CON1_bit at OC2CON1.B3;
    sbit  OCM_2_OC2CON1_bit at OC2CON1.B2;
    sbit  OCM_1_OC2CON1_bit at OC2CON1.B1;
    sbit  OCM_0_OC2CON1_bit at OC2CON1.B0;

    // OC2CON2 bits
    sbit  FLTMD_OC2CON2_bit at OC2CON2.B15;
    sbit  FLTOUT_OC2CON2_bit at OC2CON2.B14;
    sbit  FLTTRIEN_OC2CON2_bit at OC2CON2.B13;
    sbit  OCINV_OC2CON2_bit at OC2CON2.B12;
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
    sbit  CMP2B_15_OC2RS_bit at OC2RS.B15;
    sbit  CMP2B_14_OC2RS_bit at OC2RS.B14;
    sbit  CMP2B_13_OC2RS_bit at OC2RS.B13;
    sbit  CMP2B_12_OC2RS_bit at OC2RS.B12;
    sbit  CMP2B_11_OC2RS_bit at OC2RS.B11;
    sbit  CMP2B_10_OC2RS_bit at OC2RS.B10;
    sbit  CMP2B_9_OC2RS_bit at OC2RS.B9;
    sbit  CMP2B_8_OC2RS_bit at OC2RS.B8;
    sbit  CMP2B_7_OC2RS_bit at OC2RS.B7;
    sbit  CMP2B_6_OC2RS_bit at OC2RS.B6;
    sbit  CMP2B_5_OC2RS_bit at OC2RS.B5;
    sbit  CMP2B_4_OC2RS_bit at OC2RS.B4;
    sbit  CMP2B_3_OC2RS_bit at OC2RS.B3;
    sbit  CMP2B_2_OC2RS_bit at OC2RS.B2;
    sbit  CMP2B_1_OC2RS_bit at OC2RS.B1;
    sbit  CMP2B_0_OC2RS_bit at OC2RS.B0;

    // OC2R bits
    sbit  CMP1B_15_OC2R_bit at OC2R.B15;
    sbit  CMP1B_14_OC2R_bit at OC2R.B14;
    sbit  CMP1B_13_OC2R_bit at OC2R.B13;
    sbit  CMP1B_12_OC2R_bit at OC2R.B12;
    sbit  CMP1B_11_OC2R_bit at OC2R.B11;
    sbit  CMP1B_10_OC2R_bit at OC2R.B10;
    sbit  CMP1B_9_OC2R_bit at OC2R.B9;
    sbit  CMP1B_8_OC2R_bit at OC2R.B8;
    sbit  CMP1B_7_OC2R_bit at OC2R.B7;
    sbit  CMP1B_6_OC2R_bit at OC2R.B6;
    sbit  CMP1B_5_OC2R_bit at OC2R.B5;
    sbit  CMP1B_4_OC2R_bit at OC2R.B4;
    sbit  CMP1B_3_OC2R_bit at OC2R.B3;
    sbit  CMP1B_2_OC2R_bit at OC2R.B2;
    sbit  CMP1B_1_OC2R_bit at OC2R.B1;
    sbit  CMP1B_0_OC2R_bit at OC2R.B0;

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
    sbit  ENFLT0_OC3CON1_bit at OC3CON1.B7;
    sbit  OCFLT0_OC3CON1_bit at OC3CON1.B4;
    sbit  TRIGMODE_OC3CON1_bit at OC3CON1.B3;
    sbit  OCM_2_OC3CON1_bit at OC3CON1.B2;
    sbit  OCM_1_OC3CON1_bit at OC3CON1.B1;
    sbit  OCM_0_OC3CON1_bit at OC3CON1.B0;

    // OC3CON2 bits
    sbit  FLTMD_OC3CON2_bit at OC3CON2.B15;
    sbit  FLTOUT_OC3CON2_bit at OC3CON2.B14;
    sbit  FLTTRIEN_OC3CON2_bit at OC3CON2.B13;
    sbit  OCINV_OC3CON2_bit at OC3CON2.B12;
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
    sbit  CMP2B_15_OC3RS_bit at OC3RS.B15;
    sbit  CMP2B_14_OC3RS_bit at OC3RS.B14;
    sbit  CMP2B_13_OC3RS_bit at OC3RS.B13;
    sbit  CMP2B_12_OC3RS_bit at OC3RS.B12;
    sbit  CMP2B_11_OC3RS_bit at OC3RS.B11;
    sbit  CMP2B_10_OC3RS_bit at OC3RS.B10;
    sbit  CMP2B_9_OC3RS_bit at OC3RS.B9;
    sbit  CMP2B_8_OC3RS_bit at OC3RS.B8;
    sbit  CMP2B_7_OC3RS_bit at OC3RS.B7;
    sbit  CMP2B_6_OC3RS_bit at OC3RS.B6;
    sbit  CMP2B_5_OC3RS_bit at OC3RS.B5;
    sbit  CMP2B_4_OC3RS_bit at OC3RS.B4;
    sbit  CMP2B_3_OC3RS_bit at OC3RS.B3;
    sbit  CMP2B_2_OC3RS_bit at OC3RS.B2;
    sbit  CMP2B_1_OC3RS_bit at OC3RS.B1;
    sbit  CMP2B_0_OC3RS_bit at OC3RS.B0;

    // OC3R bits
    sbit  CMP1B_15_OC3R_bit at OC3R.B15;
    sbit  CMP1B_14_OC3R_bit at OC3R.B14;
    sbit  CMP1B_13_OC3R_bit at OC3R.B13;
    sbit  CMP1B_12_OC3R_bit at OC3R.B12;
    sbit  CMP1B_11_OC3R_bit at OC3R.B11;
    sbit  CMP1B_10_OC3R_bit at OC3R.B10;
    sbit  CMP1B_9_OC3R_bit at OC3R.B9;
    sbit  CMP1B_8_OC3R_bit at OC3R.B8;
    sbit  CMP1B_7_OC3R_bit at OC3R.B7;
    sbit  CMP1B_6_OC3R_bit at OC3R.B6;
    sbit  CMP1B_5_OC3R_bit at OC3R.B5;
    sbit  CMP1B_4_OC3R_bit at OC3R.B4;
    sbit  CMP1B_3_OC3R_bit at OC3R.B3;
    sbit  CMP1B_2_OC3R_bit at OC3R.B2;
    sbit  CMP1B_1_OC3R_bit at OC3R.B1;
    sbit  CMP1B_0_OC3R_bit at OC3R.B0;

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
    sbit  ENFLT0_OC4CON1_bit at OC4CON1.B7;
    sbit  OCFLT0_OC4CON1_bit at OC4CON1.B4;
    sbit  TRIGMODE_OC4CON1_bit at OC4CON1.B3;
    sbit  OCM_2_OC4CON1_bit at OC4CON1.B2;
    sbit  OCM_1_OC4CON1_bit at OC4CON1.B1;
    sbit  OCM_0_OC4CON1_bit at OC4CON1.B0;

    // OC4CON2 bits
    sbit  FLTMD_OC4CON2_bit at OC4CON2.B15;
    sbit  FLTOUT_OC4CON2_bit at OC4CON2.B14;
    sbit  FLTTRIEN_OC4CON2_bit at OC4CON2.B13;
    sbit  OCINV_OC4CON2_bit at OC4CON2.B12;
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
    sbit  CMP2B_15_OC4RS_bit at OC4RS.B15;
    sbit  CMP2B_14_OC4RS_bit at OC4RS.B14;
    sbit  CMP2B_13_OC4RS_bit at OC4RS.B13;
    sbit  CMP2B_12_OC4RS_bit at OC4RS.B12;
    sbit  CMP2B_11_OC4RS_bit at OC4RS.B11;
    sbit  CMP2B_10_OC4RS_bit at OC4RS.B10;
    sbit  CMP2B_9_OC4RS_bit at OC4RS.B9;
    sbit  CMP2B_8_OC4RS_bit at OC4RS.B8;
    sbit  CMP2B_7_OC4RS_bit at OC4RS.B7;
    sbit  CMP2B_6_OC4RS_bit at OC4RS.B6;
    sbit  CMP2B_5_OC4RS_bit at OC4RS.B5;
    sbit  CMP2B_4_OC4RS_bit at OC4RS.B4;
    sbit  CMP2B_3_OC4RS_bit at OC4RS.B3;
    sbit  CMP2B_2_OC4RS_bit at OC4RS.B2;
    sbit  CMP2B_1_OC4RS_bit at OC4RS.B1;
    sbit  CMP2B_0_OC4RS_bit at OC4RS.B0;

    // OC4R bits
    sbit  CMP1B_15_OC4R_bit at OC4R.B15;
    sbit  CMP1B_14_OC4R_bit at OC4R.B14;
    sbit  CMP1B_13_OC4R_bit at OC4R.B13;
    sbit  CMP1B_12_OC4R_bit at OC4R.B12;
    sbit  CMP1B_11_OC4R_bit at OC4R.B11;
    sbit  CMP1B_10_OC4R_bit at OC4R.B10;
    sbit  CMP1B_9_OC4R_bit at OC4R.B9;
    sbit  CMP1B_8_OC4R_bit at OC4R.B8;
    sbit  CMP1B_7_OC4R_bit at OC4R.B7;
    sbit  CMP1B_6_OC4R_bit at OC4R.B6;
    sbit  CMP1B_5_OC4R_bit at OC4R.B5;
    sbit  CMP1B_4_OC4R_bit at OC4R.B4;
    sbit  CMP1B_3_OC4R_bit at OC4R.B3;
    sbit  CMP1B_2_OC4R_bit at OC4R.B2;
    sbit  CMP1B_1_OC4R_bit at OC4R.B1;
    sbit  CMP1B_0_OC4R_bit at OC4R.B0;

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
    sbit  ENFLT0_OC5CON1_bit at OC5CON1.B7;
    sbit  OCFLT0_OC5CON1_bit at OC5CON1.B4;
    sbit  TRIGMODE_OC5CON1_bit at OC5CON1.B3;
    sbit  OCM_2_OC5CON1_bit at OC5CON1.B2;
    sbit  OCM_1_OC5CON1_bit at OC5CON1.B1;
    sbit  OCM_0_OC5CON1_bit at OC5CON1.B0;

    // OC5CON2 bits
    sbit  FLTMD_OC5CON2_bit at OC5CON2.B15;
    sbit  FLTOUT_OC5CON2_bit at OC5CON2.B14;
    sbit  FLTTRIEN_OC5CON2_bit at OC5CON2.B13;
    sbit  OCINV_OC5CON2_bit at OC5CON2.B12;
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
    sbit  CMP2B_15_OC5RS_bit at OC5RS.B15;
    sbit  CMP2B_14_OC5RS_bit at OC5RS.B14;
    sbit  CMP2B_13_OC5RS_bit at OC5RS.B13;
    sbit  CMP2B_12_OC5RS_bit at OC5RS.B12;
    sbit  CMP2B_11_OC5RS_bit at OC5RS.B11;
    sbit  CMP2B_10_OC5RS_bit at OC5RS.B10;
    sbit  CMP2B_9_OC5RS_bit at OC5RS.B9;
    sbit  CMP2B_8_OC5RS_bit at OC5RS.B8;
    sbit  CMP2B_7_OC5RS_bit at OC5RS.B7;
    sbit  CMP2B_6_OC5RS_bit at OC5RS.B6;
    sbit  CMP2B_5_OC5RS_bit at OC5RS.B5;
    sbit  CMP2B_4_OC5RS_bit at OC5RS.B4;
    sbit  CMP2B_3_OC5RS_bit at OC5RS.B3;
    sbit  CMP2B_2_OC5RS_bit at OC5RS.B2;
    sbit  CMP2B_1_OC5RS_bit at OC5RS.B1;
    sbit  CMP2B_0_OC5RS_bit at OC5RS.B0;

    // OC5R bits
    sbit  CMP1B_15_OC5R_bit at OC5R.B15;
    sbit  CMP1B_14_OC5R_bit at OC5R.B14;
    sbit  CMP1B_13_OC5R_bit at OC5R.B13;
    sbit  CMP1B_12_OC5R_bit at OC5R.B12;
    sbit  CMP1B_11_OC5R_bit at OC5R.B11;
    sbit  CMP1B_10_OC5R_bit at OC5R.B10;
    sbit  CMP1B_9_OC5R_bit at OC5R.B9;
    sbit  CMP1B_8_OC5R_bit at OC5R.B8;
    sbit  CMP1B_7_OC5R_bit at OC5R.B7;
    sbit  CMP1B_6_OC5R_bit at OC5R.B6;
    sbit  CMP1B_5_OC5R_bit at OC5R.B5;
    sbit  CMP1B_4_OC5R_bit at OC5R.B4;
    sbit  CMP1B_3_OC5R_bit at OC5R.B3;
    sbit  CMP1B_2_OC5R_bit at OC5R.B2;
    sbit  CMP1B_1_OC5R_bit at OC5R.B1;
    sbit  CMP1B_0_OC5R_bit at OC5R.B0;

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

    // OC6CON1 bits
    sbit  OCSIDL_OC6CON1_bit at OC6CON1.B13;
    sbit  OCTSEL_2_OC6CON1_bit at OC6CON1.B12;
    sbit  OCTSEL_1_OC6CON1_bit at OC6CON1.B11;
    sbit  OCTSEL_0_OC6CON1_bit at OC6CON1.B10;
    sbit  ENFLT0_OC6CON1_bit at OC6CON1.B7;
    sbit  OCFLT0_OC6CON1_bit at OC6CON1.B4;
    sbit  TRIGMODE_OC6CON1_bit at OC6CON1.B3;
    sbit  OCM_2_OC6CON1_bit at OC6CON1.B2;
    sbit  OCM_1_OC6CON1_bit at OC6CON1.B1;
    sbit  OCM_0_OC6CON1_bit at OC6CON1.B0;

    // OC6CON2 bits
    sbit  FLTMD_OC6CON2_bit at OC6CON2.B15;
    sbit  FLTOUT_OC6CON2_bit at OC6CON2.B14;
    sbit  FLTTRIEN_OC6CON2_bit at OC6CON2.B13;
    sbit  OCINV_OC6CON2_bit at OC6CON2.B12;
    sbit  OC32_OC6CON2_bit at OC6CON2.B8;
    sbit  OCTRIG_OC6CON2_bit at OC6CON2.B7;
    sbit  TRIGSTAT_OC6CON2_bit at OC6CON2.B6;
    sbit  OCTRIS_OC6CON2_bit at OC6CON2.B5;
    sbit  SYNCSEL_4_OC6CON2_bit at OC6CON2.B4;
    sbit  SYNCSEL_3_OC6CON2_bit at OC6CON2.B3;
    sbit  SYNCSEL_2_OC6CON2_bit at OC6CON2.B2;
    sbit  SYNCSEL_1_OC6CON2_bit at OC6CON2.B1;
    sbit  SYNCSEL_0_OC6CON2_bit at OC6CON2.B0;

    // OC6RS bits
    sbit  CMP2B_15_OC6RS_bit at OC6RS.B15;
    sbit  CMP2B_14_OC6RS_bit at OC6RS.B14;
    sbit  CMP2B_13_OC6RS_bit at OC6RS.B13;
    sbit  CMP2B_12_OC6RS_bit at OC6RS.B12;
    sbit  CMP2B_11_OC6RS_bit at OC6RS.B11;
    sbit  CMP2B_10_OC6RS_bit at OC6RS.B10;
    sbit  CMP2B_9_OC6RS_bit at OC6RS.B9;
    sbit  CMP2B_8_OC6RS_bit at OC6RS.B8;
    sbit  CMP2B_7_OC6RS_bit at OC6RS.B7;
    sbit  CMP2B_6_OC6RS_bit at OC6RS.B6;
    sbit  CMP2B_5_OC6RS_bit at OC6RS.B5;
    sbit  CMP2B_4_OC6RS_bit at OC6RS.B4;
    sbit  CMP2B_3_OC6RS_bit at OC6RS.B3;
    sbit  CMP2B_2_OC6RS_bit at OC6RS.B2;
    sbit  CMP2B_1_OC6RS_bit at OC6RS.B1;
    sbit  CMP2B_0_OC6RS_bit at OC6RS.B0;

    // OC6R bits
    sbit  CMP1B_15_OC6R_bit at OC6R.B15;
    sbit  CMP1B_14_OC6R_bit at OC6R.B14;
    sbit  CMP1B_13_OC6R_bit at OC6R.B13;
    sbit  CMP1B_12_OC6R_bit at OC6R.B12;
    sbit  CMP1B_11_OC6R_bit at OC6R.B11;
    sbit  CMP1B_10_OC6R_bit at OC6R.B10;
    sbit  CMP1B_9_OC6R_bit at OC6R.B9;
    sbit  CMP1B_8_OC6R_bit at OC6R.B8;
    sbit  CMP1B_7_OC6R_bit at OC6R.B7;
    sbit  CMP1B_6_OC6R_bit at OC6R.B6;
    sbit  CMP1B_5_OC6R_bit at OC6R.B5;
    sbit  CMP1B_4_OC6R_bit at OC6R.B4;
    sbit  CMP1B_3_OC6R_bit at OC6R.B3;
    sbit  CMP1B_2_OC6R_bit at OC6R.B2;
    sbit  CMP1B_1_OC6R_bit at OC6R.B1;
    sbit  CMP1B_0_OC6R_bit at OC6R.B0;

    // OC6TMR bits
    const register unsigned short int OC6TMR_15 = 15;
    sbit  OC6TMR_15_bit at OC6TMR.B15;
    const register unsigned short int OC6TMR_14 = 14;
    sbit  OC6TMR_14_bit at OC6TMR.B14;
    const register unsigned short int OC6TMR_13 = 13;
    sbit  OC6TMR_13_bit at OC6TMR.B13;
    const register unsigned short int OC6TMR_12 = 12;
    sbit  OC6TMR_12_bit at OC6TMR.B12;
    const register unsigned short int OC6TMR_11 = 11;
    sbit  OC6TMR_11_bit at OC6TMR.B11;
    const register unsigned short int OC6TMR_10 = 10;
    sbit  OC6TMR_10_bit at OC6TMR.B10;
    const register unsigned short int OC6TMR_9 = 9;
    sbit  OC6TMR_9_bit at OC6TMR.B9;
    const register unsigned short int OC6TMR_8 = 8;
    sbit  OC6TMR_8_bit at OC6TMR.B8;
    const register unsigned short int OC6TMR_7 = 7;
    sbit  OC6TMR_7_bit at OC6TMR.B7;
    const register unsigned short int OC6TMR_6 = 6;
    sbit  OC6TMR_6_bit at OC6TMR.B6;
    const register unsigned short int OC6TMR_5 = 5;
    sbit  OC6TMR_5_bit at OC6TMR.B5;
    const register unsigned short int OC6TMR_4 = 4;
    sbit  OC6TMR_4_bit at OC6TMR.B4;
    const register unsigned short int OC6TMR_3 = 3;
    sbit  OC6TMR_3_bit at OC6TMR.B3;
    const register unsigned short int OC6TMR_2 = 2;
    sbit  OC6TMR_2_bit at OC6TMR.B2;
    const register unsigned short int OC6TMR_1 = 1;
    sbit  OC6TMR_1_bit at OC6TMR.B1;
    const register unsigned short int OC6TMR_0 = 0;
    sbit  OC6TMR_0_bit at OC6TMR.B0;

    // OC7CON1 bits
    sbit  OCSIDL_OC7CON1_bit at OC7CON1.B13;
    sbit  OCTSEL_2_OC7CON1_bit at OC7CON1.B12;
    sbit  OCTSEL_1_OC7CON1_bit at OC7CON1.B11;
    sbit  OCTSEL_0_OC7CON1_bit at OC7CON1.B10;
    sbit  ENFLT0_OC7CON1_bit at OC7CON1.B7;
    sbit  OCFLT0_OC7CON1_bit at OC7CON1.B4;
    sbit  TRIGMODE_OC7CON1_bit at OC7CON1.B3;
    sbit  OCM_2_OC7CON1_bit at OC7CON1.B2;
    sbit  OCM_1_OC7CON1_bit at OC7CON1.B1;
    sbit  OCM_0_OC7CON1_bit at OC7CON1.B0;

    // OC7CON2 bits
    sbit  FLTMD_OC7CON2_bit at OC7CON2.B15;
    sbit  FLTOUT_OC7CON2_bit at OC7CON2.B14;
    sbit  FLTTRIEN_OC7CON2_bit at OC7CON2.B13;
    sbit  OCINV_OC7CON2_bit at OC7CON2.B12;
    sbit  OC32_OC7CON2_bit at OC7CON2.B8;
    sbit  OCTRIG_OC7CON2_bit at OC7CON2.B7;
    sbit  TRIGSTAT_OC7CON2_bit at OC7CON2.B6;
    sbit  OCTRIS_OC7CON2_bit at OC7CON2.B5;
    sbit  SYNCSEL_4_OC7CON2_bit at OC7CON2.B4;
    sbit  SYNCSEL_3_OC7CON2_bit at OC7CON2.B3;
    sbit  SYNCSEL_2_OC7CON2_bit at OC7CON2.B2;
    sbit  SYNCSEL_1_OC7CON2_bit at OC7CON2.B1;
    sbit  SYNCSEL_0_OC7CON2_bit at OC7CON2.B0;

    // OC7RS bits
    sbit  CMP2B_15_OC7RS_bit at OC7RS.B15;
    sbit  CMP2B_14_OC7RS_bit at OC7RS.B14;
    sbit  CMP2B_13_OC7RS_bit at OC7RS.B13;
    sbit  CMP2B_12_OC7RS_bit at OC7RS.B12;
    sbit  CMP2B_11_OC7RS_bit at OC7RS.B11;
    sbit  CMP2B_10_OC7RS_bit at OC7RS.B10;
    sbit  CMP2B_9_OC7RS_bit at OC7RS.B9;
    sbit  CMP2B_8_OC7RS_bit at OC7RS.B8;
    sbit  CMP2B_7_OC7RS_bit at OC7RS.B7;
    sbit  CMP2B_6_OC7RS_bit at OC7RS.B6;
    sbit  CMP2B_5_OC7RS_bit at OC7RS.B5;
    sbit  CMP2B_4_OC7RS_bit at OC7RS.B4;
    sbit  CMP2B_3_OC7RS_bit at OC7RS.B3;
    sbit  CMP2B_2_OC7RS_bit at OC7RS.B2;
    sbit  CMP2B_1_OC7RS_bit at OC7RS.B1;
    sbit  CMP2B_0_OC7RS_bit at OC7RS.B0;

    // OC7R bits
    sbit  CMP1B_15_OC7R_bit at OC7R.B15;
    sbit  CMP1B_14_OC7R_bit at OC7R.B14;
    sbit  CMP1B_13_OC7R_bit at OC7R.B13;
    sbit  CMP1B_12_OC7R_bit at OC7R.B12;
    sbit  CMP1B_11_OC7R_bit at OC7R.B11;
    sbit  CMP1B_10_OC7R_bit at OC7R.B10;
    sbit  CMP1B_9_OC7R_bit at OC7R.B9;
    sbit  CMP1B_8_OC7R_bit at OC7R.B8;
    sbit  CMP1B_7_OC7R_bit at OC7R.B7;
    sbit  CMP1B_6_OC7R_bit at OC7R.B6;
    sbit  CMP1B_5_OC7R_bit at OC7R.B5;
    sbit  CMP1B_4_OC7R_bit at OC7R.B4;
    sbit  CMP1B_3_OC7R_bit at OC7R.B3;
    sbit  CMP1B_2_OC7R_bit at OC7R.B2;
    sbit  CMP1B_1_OC7R_bit at OC7R.B1;
    sbit  CMP1B_0_OC7R_bit at OC7R.B0;

    // OC7TMR bits
    const register unsigned short int OC7TMR_15 = 15;
    sbit  OC7TMR_15_bit at OC7TMR.B15;
    const register unsigned short int OC7TMR_14 = 14;
    sbit  OC7TMR_14_bit at OC7TMR.B14;
    const register unsigned short int OC7TMR_13 = 13;
    sbit  OC7TMR_13_bit at OC7TMR.B13;
    const register unsigned short int OC7TMR_12 = 12;
    sbit  OC7TMR_12_bit at OC7TMR.B12;
    const register unsigned short int OC7TMR_11 = 11;
    sbit  OC7TMR_11_bit at OC7TMR.B11;
    const register unsigned short int OC7TMR_10 = 10;
    sbit  OC7TMR_10_bit at OC7TMR.B10;
    const register unsigned short int OC7TMR_9 = 9;
    sbit  OC7TMR_9_bit at OC7TMR.B9;
    const register unsigned short int OC7TMR_8 = 8;
    sbit  OC7TMR_8_bit at OC7TMR.B8;
    const register unsigned short int OC7TMR_7 = 7;
    sbit  OC7TMR_7_bit at OC7TMR.B7;
    const register unsigned short int OC7TMR_6 = 6;
    sbit  OC7TMR_6_bit at OC7TMR.B6;
    const register unsigned short int OC7TMR_5 = 5;
    sbit  OC7TMR_5_bit at OC7TMR.B5;
    const register unsigned short int OC7TMR_4 = 4;
    sbit  OC7TMR_4_bit at OC7TMR.B4;
    const register unsigned short int OC7TMR_3 = 3;
    sbit  OC7TMR_3_bit at OC7TMR.B3;
    const register unsigned short int OC7TMR_2 = 2;
    sbit  OC7TMR_2_bit at OC7TMR.B2;
    const register unsigned short int OC7TMR_1 = 1;
    sbit  OC7TMR_1_bit at OC7TMR.B1;
    const register unsigned short int OC7TMR_0 = 0;
    sbit  OC7TMR_0_bit at OC7TMR.B0;

    // OC8CON1 bits
    sbit  OCSIDL_OC8CON1_bit at OC8CON1.B13;
    sbit  OCTSEL_2_OC8CON1_bit at OC8CON1.B12;
    sbit  OCTSEL_1_OC8CON1_bit at OC8CON1.B11;
    sbit  OCTSEL_0_OC8CON1_bit at OC8CON1.B10;
    sbit  ENFLT0_OC8CON1_bit at OC8CON1.B7;
    sbit  OCFLT0_OC8CON1_bit at OC8CON1.B4;
    sbit  TRIGMODE_OC8CON1_bit at OC8CON1.B3;
    sbit  OCM_2_OC8CON1_bit at OC8CON1.B2;
    sbit  OCM_1_OC8CON1_bit at OC8CON1.B1;
    sbit  OCM_0_OC8CON1_bit at OC8CON1.B0;

    // OC8CON2 bits
    sbit  FLTMD_OC8CON2_bit at OC8CON2.B15;
    sbit  FLTOUT_OC8CON2_bit at OC8CON2.B14;
    sbit  FLTTRIEN_OC8CON2_bit at OC8CON2.B13;
    sbit  OCINV_OC8CON2_bit at OC8CON2.B12;
    sbit  OC32_OC8CON2_bit at OC8CON2.B8;
    sbit  OCTRIG_OC8CON2_bit at OC8CON2.B7;
    sbit  TRIGSTAT_OC8CON2_bit at OC8CON2.B6;
    sbit  OCTRIS_OC8CON2_bit at OC8CON2.B5;
    sbit  SYNCSEL_4_OC8CON2_bit at OC8CON2.B4;
    sbit  SYNCSEL_3_OC8CON2_bit at OC8CON2.B3;
    sbit  SYNCSEL_2_OC8CON2_bit at OC8CON2.B2;
    sbit  SYNCSEL_1_OC8CON2_bit at OC8CON2.B1;
    sbit  SYNCSEL_0_OC8CON2_bit at OC8CON2.B0;

    // OC8RS bits
    sbit  CMP2B_15_OC8RS_bit at OC8RS.B15;
    sbit  CMP2B_14_OC8RS_bit at OC8RS.B14;
    sbit  CMP2B_13_OC8RS_bit at OC8RS.B13;
    sbit  CMP2B_12_OC8RS_bit at OC8RS.B12;
    sbit  CMP2B_11_OC8RS_bit at OC8RS.B11;
    sbit  CMP2B_10_OC8RS_bit at OC8RS.B10;
    sbit  CMP2B_9_OC8RS_bit at OC8RS.B9;
    sbit  CMP2B_8_OC8RS_bit at OC8RS.B8;
    sbit  CMP2B_7_OC8RS_bit at OC8RS.B7;
    sbit  CMP2B_6_OC8RS_bit at OC8RS.B6;
    sbit  CMP2B_5_OC8RS_bit at OC8RS.B5;
    sbit  CMP2B_4_OC8RS_bit at OC8RS.B4;
    sbit  CMP2B_3_OC8RS_bit at OC8RS.B3;
    sbit  CMP2B_2_OC8RS_bit at OC8RS.B2;
    sbit  CMP2B_1_OC8RS_bit at OC8RS.B1;
    sbit  CMP2B_0_OC8RS_bit at OC8RS.B0;

    // OC8R bits
    sbit  CMP1B_15_OC8R_bit at OC8R.B15;
    sbit  CMP1B_14_OC8R_bit at OC8R.B14;
    sbit  CMP1B_13_OC8R_bit at OC8R.B13;
    sbit  CMP1B_12_OC8R_bit at OC8R.B12;
    sbit  CMP1B_11_OC8R_bit at OC8R.B11;
    sbit  CMP1B_10_OC8R_bit at OC8R.B10;
    sbit  CMP1B_9_OC8R_bit at OC8R.B9;
    sbit  CMP1B_8_OC8R_bit at OC8R.B8;
    sbit  CMP1B_7_OC8R_bit at OC8R.B7;
    sbit  CMP1B_6_OC8R_bit at OC8R.B6;
    sbit  CMP1B_5_OC8R_bit at OC8R.B5;
    sbit  CMP1B_4_OC8R_bit at OC8R.B4;
    sbit  CMP1B_3_OC8R_bit at OC8R.B3;
    sbit  CMP1B_2_OC8R_bit at OC8R.B2;
    sbit  CMP1B_1_OC8R_bit at OC8R.B1;
    sbit  CMP1B_0_OC8R_bit at OC8R.B0;

    // OC8TMR bits
    const register unsigned short int OC8TMR_15 = 15;
    sbit  OC8TMR_15_bit at OC8TMR.B15;
    const register unsigned short int OC8TMR_14 = 14;
    sbit  OC8TMR_14_bit at OC8TMR.B14;
    const register unsigned short int OC8TMR_13 = 13;
    sbit  OC8TMR_13_bit at OC8TMR.B13;
    const register unsigned short int OC8TMR_12 = 12;
    sbit  OC8TMR_12_bit at OC8TMR.B12;
    const register unsigned short int OC8TMR_11 = 11;
    sbit  OC8TMR_11_bit at OC8TMR.B11;
    const register unsigned short int OC8TMR_10 = 10;
    sbit  OC8TMR_10_bit at OC8TMR.B10;
    const register unsigned short int OC8TMR_9 = 9;
    sbit  OC8TMR_9_bit at OC8TMR.B9;
    const register unsigned short int OC8TMR_8 = 8;
    sbit  OC8TMR_8_bit at OC8TMR.B8;
    const register unsigned short int OC8TMR_7 = 7;
    sbit  OC8TMR_7_bit at OC8TMR.B7;
    const register unsigned short int OC8TMR_6 = 6;
    sbit  OC8TMR_6_bit at OC8TMR.B6;
    const register unsigned short int OC8TMR_5 = 5;
    sbit  OC8TMR_5_bit at OC8TMR.B5;
    const register unsigned short int OC8TMR_4 = 4;
    sbit  OC8TMR_4_bit at OC8TMR.B4;
    const register unsigned short int OC8TMR_3 = 3;
    sbit  OC8TMR_3_bit at OC8TMR.B3;
    const register unsigned short int OC8TMR_2 = 2;
    sbit  OC8TMR_2_bit at OC8TMR.B2;
    const register unsigned short int OC8TMR_1 = 1;
    sbit  OC8TMR_1_bit at OC8TMR.B1;
    const register unsigned short int OC8TMR_0 = 0;
    sbit  OC8TMR_0_bit at OC8TMR.B0;

    // OC9CON1 bits
    sbit  OCSIDL_OC9CON1_bit at OC9CON1.B13;
    sbit  OCTSEL_2_OC9CON1_bit at OC9CON1.B12;
    sbit  OCTSEL_1_OC9CON1_bit at OC9CON1.B11;
    sbit  OCTSEL_0_OC9CON1_bit at OC9CON1.B10;
    sbit  ENFLT0_OC9CON1_bit at OC9CON1.B7;
    sbit  OCFLT0_OC9CON1_bit at OC9CON1.B4;
    sbit  TRIGMODE_OC9CON1_bit at OC9CON1.B3;
    sbit  OCM_2_OC9CON1_bit at OC9CON1.B2;
    sbit  OCM_1_OC9CON1_bit at OC9CON1.B1;
    sbit  OCM_0_OC9CON1_bit at OC9CON1.B0;

    // OC9CON2 bits
    sbit  FLTMD_OC9CON2_bit at OC9CON2.B15;
    sbit  FLTOUT_OC9CON2_bit at OC9CON2.B14;
    sbit  FLTTRIEN_OC9CON2_bit at OC9CON2.B13;
    sbit  OCINV_OC9CON2_bit at OC9CON2.B12;
    sbit  OC32_OC9CON2_bit at OC9CON2.B8;
    sbit  OCTRIG_OC9CON2_bit at OC9CON2.B7;
    sbit  TRIGSTAT_OC9CON2_bit at OC9CON2.B6;
    sbit  OCTRIS_OC9CON2_bit at OC9CON2.B5;
    sbit  SYNCSEL_4_OC9CON2_bit at OC9CON2.B4;
    sbit  SYNCSEL_3_OC9CON2_bit at OC9CON2.B3;
    sbit  SYNCSEL_2_OC9CON2_bit at OC9CON2.B2;
    sbit  SYNCSEL_1_OC9CON2_bit at OC9CON2.B1;
    sbit  SYNCSEL_0_OC9CON2_bit at OC9CON2.B0;

    // OC9RS bits
    sbit  CMP2B_15_OC9RS_bit at OC9RS.B15;
    sbit  CMP2B_14_OC9RS_bit at OC9RS.B14;
    sbit  CMP2B_13_OC9RS_bit at OC9RS.B13;
    sbit  CMP2B_12_OC9RS_bit at OC9RS.B12;
    sbit  CMP2B_11_OC9RS_bit at OC9RS.B11;
    sbit  CMP2B_10_OC9RS_bit at OC9RS.B10;
    sbit  CMP2B_9_OC9RS_bit at OC9RS.B9;
    sbit  CMP2B_8_OC9RS_bit at OC9RS.B8;
    sbit  CMP2B_7_OC9RS_bit at OC9RS.B7;
    sbit  CMP2B_6_OC9RS_bit at OC9RS.B6;
    sbit  CMP2B_5_OC9RS_bit at OC9RS.B5;
    sbit  CMP2B_4_OC9RS_bit at OC9RS.B4;
    sbit  CMP2B_3_OC9RS_bit at OC9RS.B3;
    sbit  CMP2B_2_OC9RS_bit at OC9RS.B2;
    sbit  CMP2B_1_OC9RS_bit at OC9RS.B1;
    sbit  CMP2B_0_OC9RS_bit at OC9RS.B0;

    // OC9R bits
    sbit  CMP1B_15_OC9R_bit at OC9R.B15;
    sbit  CMP1B_14_OC9R_bit at OC9R.B14;
    sbit  CMP1B_13_OC9R_bit at OC9R.B13;
    sbit  CMP1B_12_OC9R_bit at OC9R.B12;
    sbit  CMP1B_11_OC9R_bit at OC9R.B11;
    sbit  CMP1B_10_OC9R_bit at OC9R.B10;
    sbit  CMP1B_9_OC9R_bit at OC9R.B9;
    sbit  CMP1B_8_OC9R_bit at OC9R.B8;
    sbit  CMP1B_7_OC9R_bit at OC9R.B7;
    sbit  CMP1B_6_OC9R_bit at OC9R.B6;
    sbit  CMP1B_5_OC9R_bit at OC9R.B5;
    sbit  CMP1B_4_OC9R_bit at OC9R.B4;
    sbit  CMP1B_3_OC9R_bit at OC9R.B3;
    sbit  CMP1B_2_OC9R_bit at OC9R.B2;
    sbit  CMP1B_1_OC9R_bit at OC9R.B1;
    sbit  CMP1B_0_OC9R_bit at OC9R.B0;

    // OC9TMR bits
    const register unsigned short int OC9TMR_15 = 15;
    sbit  OC9TMR_15_bit at OC9TMR.B15;
    const register unsigned short int OC9TMR_14 = 14;
    sbit  OC9TMR_14_bit at OC9TMR.B14;
    const register unsigned short int OC9TMR_13 = 13;
    sbit  OC9TMR_13_bit at OC9TMR.B13;
    const register unsigned short int OC9TMR_12 = 12;
    sbit  OC9TMR_12_bit at OC9TMR.B12;
    const register unsigned short int OC9TMR_11 = 11;
    sbit  OC9TMR_11_bit at OC9TMR.B11;
    const register unsigned short int OC9TMR_10 = 10;
    sbit  OC9TMR_10_bit at OC9TMR.B10;
    const register unsigned short int OC9TMR_9 = 9;
    sbit  OC9TMR_9_bit at OC9TMR.B9;
    const register unsigned short int OC9TMR_8 = 8;
    sbit  OC9TMR_8_bit at OC9TMR.B8;
    const register unsigned short int OC9TMR_7 = 7;
    sbit  OC9TMR_7_bit at OC9TMR.B7;
    const register unsigned short int OC9TMR_6 = 6;
    sbit  OC9TMR_6_bit at OC9TMR.B6;
    const register unsigned short int OC9TMR_5 = 5;
    sbit  OC9TMR_5_bit at OC9TMR.B5;
    const register unsigned short int OC9TMR_4 = 4;
    sbit  OC9TMR_4_bit at OC9TMR.B4;
    const register unsigned short int OC9TMR_3 = 3;
    sbit  OC9TMR_3_bit at OC9TMR.B3;
    const register unsigned short int OC9TMR_2 = 2;
    sbit  OC9TMR_2_bit at OC9TMR.B2;
    const register unsigned short int OC9TMR_1 = 1;
    sbit  OC9TMR_1_bit at OC9TMR.B1;
    const register unsigned short int OC9TMR_0 = 0;
    sbit  OC9TMR_0_bit at OC9TMR.B0;

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

    // U3MODE bits
    sbit  UARTEN_U3MODE_bit at U3MODE.B15;
    sbit  USIDL_U3MODE_bit at U3MODE.B13;
    sbit  IREN_U3MODE_bit at U3MODE.B12;
    sbit  RTSMD_U3MODE_bit at U3MODE.B11;
    sbit  UEN_1_U3MODE_bit at U3MODE.B9;
    sbit  UEN_0_U3MODE_bit at U3MODE.B8;
    sbit  WAKE_U3MODE_bit at U3MODE.B7;
    sbit  LPBACK_U3MODE_bit at U3MODE.B6;
    sbit  ABAUD_U3MODE_bit at U3MODE.B5;
    sbit  RXINV_U3MODE_bit at U3MODE.B4;
    sbit  BRGH_U3MODE_bit at U3MODE.B3;
    sbit  PDSEL_1_U3MODE_bit at U3MODE.B2;
    sbit  PDSEL_0_U3MODE_bit at U3MODE.B1;
    sbit  STSEL_U3MODE_bit at U3MODE.B0;

    // U3STA bits
    sbit  UTXISEL1_U3STA_bit at U3STA.B15;
    sbit  UTXINV_U3STA_bit at U3STA.B14;
    sbit  UTXISEL0_U3STA_bit at U3STA.B13;
    sbit  UTXBRK_U3STA_bit at U3STA.B11;
    sbit  UTXEN_U3STA_bit at U3STA.B10;
    sbit  UTXBF_U3STA_bit at U3STA.B9;
    sbit  TRMT_U3STA_bit at U3STA.B8;
    sbit  URXISEL_1_U3STA_bit at U3STA.B7;
    sbit  URXISEL_0_U3STA_bit at U3STA.B6;
    sbit  ADDEN_U3STA_bit at U3STA.B5;
    sbit  RIDLE_U3STA_bit at U3STA.B4;
    sbit  PERR_U3STA_bit at U3STA.B3;
    sbit  FERR_U3STA_bit at U3STA.B2;
    sbit  OERR_U3STA_bit at U3STA.B1;
    sbit  URXDA_U3STA_bit at U3STA.B0;

    // U3TXREG bits
    const register unsigned short int U3TXREG_8 = 8;
    sbit  U3TXREG_8_bit at U3TXREG.B8;
    const register unsigned short int U3TXREG_7 = 7;
    sbit  U3TXREG_7_bit at U3TXREG.B7;
    const register unsigned short int U3TXREG_6 = 6;
    sbit  U3TXREG_6_bit at U3TXREG.B6;
    const register unsigned short int U3TXREG_5 = 5;
    sbit  U3TXREG_5_bit at U3TXREG.B5;
    const register unsigned short int U3TXREG_4 = 4;
    sbit  U3TXREG_4_bit at U3TXREG.B4;
    const register unsigned short int U3TXREG_3 = 3;
    sbit  U3TXREG_3_bit at U3TXREG.B3;
    const register unsigned short int U3TXREG_2 = 2;
    sbit  U3TXREG_2_bit at U3TXREG.B2;
    const register unsigned short int U3TXREG_1 = 1;
    sbit  U3TXREG_1_bit at U3TXREG.B1;
    const register unsigned short int U3TXREG_0 = 0;
    sbit  U3TXREG_0_bit at U3TXREG.B0;

    // U3RXREG bits
    const register unsigned short int U3RXREG_8 = 8;
    sbit  U3RXREG_8_bit at U3RXREG.B8;
    const register unsigned short int U3RXREG_7 = 7;
    sbit  U3RXREG_7_bit at U3RXREG.B7;
    const register unsigned short int U3RXREG_6 = 6;
    sbit  U3RXREG_6_bit at U3RXREG.B6;
    const register unsigned short int U3RXREG_5 = 5;
    sbit  U3RXREG_5_bit at U3RXREG.B5;
    const register unsigned short int U3RXREG_4 = 4;
    sbit  U3RXREG_4_bit at U3RXREG.B4;
    const register unsigned short int U3RXREG_3 = 3;
    sbit  U3RXREG_3_bit at U3RXREG.B3;
    const register unsigned short int U3RXREG_2 = 2;
    sbit  U3RXREG_2_bit at U3RXREG.B2;
    const register unsigned short int U3RXREG_1 = 1;
    sbit  U3RXREG_1_bit at U3RXREG.B1;
    const register unsigned short int U3RXREG_0 = 0;
    sbit  U3RXREG_0_bit at U3RXREG.B0;

    // U3BRG bits
    sbit  BRG_15_U3BRG_bit at U3BRG.B15;
    sbit  BRG_14_U3BRG_bit at U3BRG.B14;
    sbit  BRG_13_U3BRG_bit at U3BRG.B13;
    sbit  BRG_12_U3BRG_bit at U3BRG.B12;
    sbit  BRG_11_U3BRG_bit at U3BRG.B11;
    sbit  BRG_10_U3BRG_bit at U3BRG.B10;
    sbit  BRG_9_U3BRG_bit at U3BRG.B9;
    sbit  BRG_8_U3BRG_bit at U3BRG.B8;
    sbit  BRG_7_U3BRG_bit at U3BRG.B7;
    sbit  BRG_6_U3BRG_bit at U3BRG.B6;
    sbit  BRG_5_U3BRG_bit at U3BRG.B5;
    sbit  BRG_4_U3BRG_bit at U3BRG.B4;
    sbit  BRG_3_U3BRG_bit at U3BRG.B3;
    sbit  BRG_2_U3BRG_bit at U3BRG.B2;
    sbit  BRG_1_U3BRG_bit at U3BRG.B1;
    sbit  BRG_0_U3BRG_bit at U3BRG.B0;

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

    // I2C3RCV bits
    sbit  I2CRCV_7_I2C3RCV_bit at I2C3RCV.B7;
    sbit  I2CRCV_6_I2C3RCV_bit at I2C3RCV.B6;
    sbit  I2CRCV_5_I2C3RCV_bit at I2C3RCV.B5;
    sbit  I2CRCV_4_I2C3RCV_bit at I2C3RCV.B4;
    sbit  I2CRCV_3_I2C3RCV_bit at I2C3RCV.B3;
    sbit  I2CRCV_2_I2C3RCV_bit at I2C3RCV.B2;
    sbit  I2CRCV_1_I2C3RCV_bit at I2C3RCV.B1;
    sbit  I2CRCV_0_I2C3RCV_bit at I2C3RCV.B0;

    // I2C3TRN bits
    sbit  I2CTRN_7_I2C3TRN_bit at I2C3TRN.B7;
    sbit  I2CTRN_6_I2C3TRN_bit at I2C3TRN.B6;
    sbit  I2CTRN_5_I2C3TRN_bit at I2C3TRN.B5;
    sbit  I2CTRN_4_I2C3TRN_bit at I2C3TRN.B4;
    sbit  I2CTRN_3_I2C3TRN_bit at I2C3TRN.B3;
    sbit  I2CTRN_2_I2C3TRN_bit at I2C3TRN.B2;
    sbit  I2CTRN_1_I2C3TRN_bit at I2C3TRN.B1;
    sbit  I2CTRN_0_I2C3TRN_bit at I2C3TRN.B0;

    // I2C3BRG bits
    sbit  I2CBRG_8_I2C3BRG_bit at I2C3BRG.B8;
    sbit  I2CBRG_7_I2C3BRG_bit at I2C3BRG.B7;
    sbit  I2CBRG_6_I2C3BRG_bit at I2C3BRG.B6;
    sbit  I2CBRG_5_I2C3BRG_bit at I2C3BRG.B5;
    sbit  I2CBRG_4_I2C3BRG_bit at I2C3BRG.B4;
    sbit  I2CBRG_3_I2C3BRG_bit at I2C3BRG.B3;
    sbit  I2CBRG_2_I2C3BRG_bit at I2C3BRG.B2;
    sbit  I2CBRG_1_I2C3BRG_bit at I2C3BRG.B1;
    sbit  I2CBRG_0_I2C3BRG_bit at I2C3BRG.B0;

    // I2C3CON bits
    sbit  I2CEN_I2C3CON_bit at I2C3CON.B15;
    sbit  I2CSIDL_I2C3CON_bit at I2C3CON.B13;
    sbit  SCLREL_I2C3CON_bit at I2C3CON.B12;
    sbit  IPMIEN_I2C3CON_bit at I2C3CON.B11;
    sbit  A10M_I2C3CON_bit at I2C3CON.B10;
    sbit  DISSLW_I2C3CON_bit at I2C3CON.B9;
    sbit  SMEN_I2C3CON_bit at I2C3CON.B8;
    sbit  GCEN_I2C3CON_bit at I2C3CON.B7;
    sbit  STREN_I2C3CON_bit at I2C3CON.B6;
    sbit  ACKDT_I2C3CON_bit at I2C3CON.B5;
    sbit  ACKEN_I2C3CON_bit at I2C3CON.B4;
    sbit  RCEN_I2C3CON_bit at I2C3CON.B3;
    sbit  PEN_I2C3CON_bit at I2C3CON.B2;
    sbit  RSEN_I2C3CON_bit at I2C3CON.B1;
    sbit  SEN_I2C3CON_bit at I2C3CON.B0;

    // I2C3STAT bits
    sbit  ACKSTAT_I2C3STAT_bit at I2C3STAT.B15;
    sbit  TRSTAT_I2C3STAT_bit at I2C3STAT.B14;
    sbit  BCL_I2C3STAT_bit at I2C3STAT.B10;
    sbit  GCSTAT_I2C3STAT_bit at I2C3STAT.B9;
    sbit  ADD10_I2C3STAT_bit at I2C3STAT.B8;
    sbit  IWCOL_I2C3STAT_bit at I2C3STAT.B7;
    sbit  I2COV_I2C3STAT_bit at I2C3STAT.B6;
    sbit  D_A_I2C3STAT_bit at I2C3STAT.B5;
    sbit  P_I2C3STAT_bit at I2C3STAT.B4;
    sbit  S_I2C3STAT_bit at I2C3STAT.B3;
    sbit  R_W_I2C3STAT_bit at I2C3STAT.B2;
    sbit  RBF_I2C3STAT_bit at I2C3STAT.B1;
    sbit  TBF_I2C3STAT_bit at I2C3STAT.B0;

    // I2C3ADD bits
    sbit  I2CADD_9_I2C3ADD_bit at I2C3ADD.B9;
    sbit  I2CADD_8_I2C3ADD_bit at I2C3ADD.B8;
    sbit  I2CADD_7_I2C3ADD_bit at I2C3ADD.B7;
    sbit  I2CADD_6_I2C3ADD_bit at I2C3ADD.B6;
    sbit  I2CADD_5_I2C3ADD_bit at I2C3ADD.B5;
    sbit  I2CADD_4_I2C3ADD_bit at I2C3ADD.B4;
    sbit  I2CADD_3_I2C3ADD_bit at I2C3ADD.B3;
    sbit  I2CADD_2_I2C3ADD_bit at I2C3ADD.B2;
    sbit  I2CADD_1_I2C3ADD_bit at I2C3ADD.B1;
    sbit  I2CADD_0_I2C3ADD_bit at I2C3ADD.B0;

    // I2C3MSK bits
    sbit  AMSK_9_I2C3MSK_bit at I2C3MSK.B9;
    sbit  AMSK_8_I2C3MSK_bit at I2C3MSK.B8;
    sbit  AMSK_7_I2C3MSK_bit at I2C3MSK.B7;
    sbit  AMSK_6_I2C3MSK_bit at I2C3MSK.B6;
    sbit  AMSK_5_I2C3MSK_bit at I2C3MSK.B5;
    sbit  AMSK_4_I2C3MSK_bit at I2C3MSK.B4;
    sbit  AMSK_3_I2C3MSK_bit at I2C3MSK.B3;
    sbit  AMSK_2_I2C3MSK_bit at I2C3MSK.B2;
    sbit  AMSK_1_I2C3MSK_bit at I2C3MSK.B1;
    sbit  AMSK_0_I2C3MSK_bit at I2C3MSK.B0;

    // SPI3STAT bits
    sbit  SPIEN_SPI3STAT_bit at SPI3STAT.B15;
    sbit  SPISIDL_SPI3STAT_bit at SPI3STAT.B13;
    sbit  SPIBEC_2_SPI3STAT_bit at SPI3STAT.B10;
    sbit  SPIBEC_1_SPI3STAT_bit at SPI3STAT.B9;
    sbit  SPIBEC_0_SPI3STAT_bit at SPI3STAT.B8;
    sbit  SRMPT_SPI3STAT_bit at SPI3STAT.B7;
    sbit  SPIROV_SPI3STAT_bit at SPI3STAT.B6;
    sbit  SRXMPT_SPI3STAT_bit at SPI3STAT.B5;
    sbit  SISEL_2_SPI3STAT_bit at SPI3STAT.B4;
    sbit  SISEL_1_SPI3STAT_bit at SPI3STAT.B3;
    sbit  SISEL_0_SPI3STAT_bit at SPI3STAT.B2;
    sbit  SPITBF_SPI3STAT_bit at SPI3STAT.B1;
    sbit  SPIRBF_SPI3STAT_bit at SPI3STAT.B0;

    // SPI3CON1 bits
    sbit  DISSCK_SPI3CON1_bit at SPI3CON1.B12;
    sbit  DISSDO_SPI3CON1_bit at SPI3CON1.B11;
    sbit  MODE16_SPI3CON1_bit at SPI3CON1.B10;
    sbit  SMP_SPI3CON1_bit at SPI3CON1.B9;
    sbit  CKE_SPI3CON1_bit at SPI3CON1.B8;
    sbit  SSEN_SPI3CON1_bit at SPI3CON1.B7;
    sbit  CKP_SPI3CON1_bit at SPI3CON1.B6;
    sbit  MSTEN_SPI3CON1_bit at SPI3CON1.B5;
    sbit  SPRE_2_SPI3CON1_bit at SPI3CON1.B4;
    sbit  SPRE_1_SPI3CON1_bit at SPI3CON1.B3;
    sbit  SPRE_0_SPI3CON1_bit at SPI3CON1.B2;
    sbit  PPRE_1_SPI3CON1_bit at SPI3CON1.B1;
    sbit  PPRE_0_SPI3CON1_bit at SPI3CON1.B0;

    // SPI3CON2 bits
    sbit  FRMEN_SPI3CON2_bit at SPI3CON2.B15;
    sbit  SPIFSD_SPI3CON2_bit at SPI3CON2.B14;
    sbit  SPIFPOL_SPI3CON2_bit at SPI3CON2.B13;
    sbit  SPIFE_SPI3CON2_bit at SPI3CON2.B1;
    sbit  SPIBEN_SPI3CON2_bit at SPI3CON2.B0;

    // SPI3BUF bits
    sbit  SPI1BUF_15_SPI3BUF_bit at SPI3BUF.B15;
    sbit  SPI1BUF_14_SPI3BUF_bit at SPI3BUF.B14;
    sbit  SPI1BUF_13_SPI3BUF_bit at SPI3BUF.B13;
    sbit  SPI1BUF_12_SPI3BUF_bit at SPI3BUF.B12;
    sbit  SPI1BUF_11_SPI3BUF_bit at SPI3BUF.B11;
    sbit  SPI1BUF_10_SPI3BUF_bit at SPI3BUF.B10;
    sbit  SPI1BUF_9_SPI3BUF_bit at SPI3BUF.B9;
    sbit  SPI1BUF_8_SPI3BUF_bit at SPI3BUF.B8;
    sbit  SPI1BUF_7_SPI3BUF_bit at SPI3BUF.B7;
    sbit  SPI1BUF_6_SPI3BUF_bit at SPI3BUF.B6;
    sbit  SPI1BUF_5_SPI3BUF_bit at SPI3BUF.B5;
    sbit  SPI1BUF_4_SPI3BUF_bit at SPI3BUF.B4;
    sbit  SPI1BUF_3_SPI3BUF_bit at SPI3BUF.B3;
    sbit  SPI1BUF_2_SPI3BUF_bit at SPI3BUF.B2;
    sbit  SPI1BUF_1_SPI3BUF_bit at SPI3BUF.B1;
    sbit  SPI1BUF_0_SPI3BUF_bit at SPI3BUF.B0;

    // U4MODE bits
    sbit  UARTEN_U4MODE_bit at U4MODE.B15;
    sbit  USIDL_U4MODE_bit at U4MODE.B13;
    sbit  IREN_U4MODE_bit at U4MODE.B12;
    sbit  RTSMD_U4MODE_bit at U4MODE.B11;
    sbit  UEN_1_U4MODE_bit at U4MODE.B9;
    sbit  UEN_0_U4MODE_bit at U4MODE.B8;
    sbit  WAKE_U4MODE_bit at U4MODE.B7;
    sbit  LPBACK_U4MODE_bit at U4MODE.B6;
    sbit  ABAUD_U4MODE_bit at U4MODE.B5;
    sbit  RXINV_U4MODE_bit at U4MODE.B4;
    sbit  BRGH_U4MODE_bit at U4MODE.B3;
    sbit  PDSEL_1_U4MODE_bit at U4MODE.B2;
    sbit  PDSEL_0_U4MODE_bit at U4MODE.B1;
    sbit  STSEL_U4MODE_bit at U4MODE.B0;

    // U4STA bits
    sbit  UTXISEL1_U4STA_bit at U4STA.B15;
    sbit  UTXINV_U4STA_bit at U4STA.B14;
    sbit  UTXISEL0_U4STA_bit at U4STA.B13;
    sbit  UTXBRK_U4STA_bit at U4STA.B11;
    sbit  UTXEN_U4STA_bit at U4STA.B10;
    sbit  UTXBF_U4STA_bit at U4STA.B9;
    sbit  TRMT_U4STA_bit at U4STA.B8;
    sbit  URXISEL_1_U4STA_bit at U4STA.B7;
    sbit  URXISEL_0_U4STA_bit at U4STA.B6;
    sbit  ADDEN_U4STA_bit at U4STA.B5;
    sbit  RIDLE_U4STA_bit at U4STA.B4;
    sbit  PERR_U4STA_bit at U4STA.B3;
    sbit  FERR_U4STA_bit at U4STA.B2;
    sbit  OERR_U4STA_bit at U4STA.B1;
    sbit  URXDA_U4STA_bit at U4STA.B0;

    // U4TXREG bits
    const register unsigned short int U4TXREG_8 = 8;
    sbit  U4TXREG_8_bit at U4TXREG.B8;
    const register unsigned short int U4TXREG_7 = 7;
    sbit  U4TXREG_7_bit at U4TXREG.B7;
    const register unsigned short int U4TXREG_6 = 6;
    sbit  U4TXREG_6_bit at U4TXREG.B6;
    const register unsigned short int U4TXREG_5 = 5;
    sbit  U4TXREG_5_bit at U4TXREG.B5;
    const register unsigned short int U4TXREG_4 = 4;
    sbit  U4TXREG_4_bit at U4TXREG.B4;
    const register unsigned short int U4TXREG_3 = 3;
    sbit  U4TXREG_3_bit at U4TXREG.B3;
    const register unsigned short int U4TXREG_2 = 2;
    sbit  U4TXREG_2_bit at U4TXREG.B2;
    const register unsigned short int U4TXREG_1 = 1;
    sbit  U4TXREG_1_bit at U4TXREG.B1;
    const register unsigned short int U4TXREG_0 = 0;
    sbit  U4TXREG_0_bit at U4TXREG.B0;

    // U4RXREG bits
    const register unsigned short int U4RXREG_8 = 8;
    sbit  U4RXREG_8_bit at U4RXREG.B8;
    const register unsigned short int U4RXREG_7 = 7;
    sbit  U4RXREG_7_bit at U4RXREG.B7;
    const register unsigned short int U4RXREG_6 = 6;
    sbit  U4RXREG_6_bit at U4RXREG.B6;
    const register unsigned short int U4RXREG_5 = 5;
    sbit  U4RXREG_5_bit at U4RXREG.B5;
    const register unsigned short int U4RXREG_4 = 4;
    sbit  U4RXREG_4_bit at U4RXREG.B4;
    const register unsigned short int U4RXREG_3 = 3;
    sbit  U4RXREG_3_bit at U4RXREG.B3;
    const register unsigned short int U4RXREG_2 = 2;
    sbit  U4RXREG_2_bit at U4RXREG.B2;
    const register unsigned short int U4RXREG_1 = 1;
    sbit  U4RXREG_1_bit at U4RXREG.B1;
    const register unsigned short int U4RXREG_0 = 0;
    sbit  U4RXREG_0_bit at U4RXREG.B0;

    // U4BRG bits
    sbit  BRG_15_U4BRG_bit at U4BRG.B15;
    sbit  BRG_14_U4BRG_bit at U4BRG.B14;
    sbit  BRG_13_U4BRG_bit at U4BRG.B13;
    sbit  BRG_12_U4BRG_bit at U4BRG.B12;
    sbit  BRG_11_U4BRG_bit at U4BRG.B11;
    sbit  BRG_10_U4BRG_bit at U4BRG.B10;
    sbit  BRG_9_U4BRG_bit at U4BRG.B9;
    sbit  BRG_8_U4BRG_bit at U4BRG.B8;
    sbit  BRG_7_U4BRG_bit at U4BRG.B7;
    sbit  BRG_6_U4BRG_bit at U4BRG.B6;
    sbit  BRG_5_U4BRG_bit at U4BRG.B5;
    sbit  BRG_4_U4BRG_bit at U4BRG.B4;
    sbit  BRG_3_U4BRG_bit at U4BRG.B3;
    sbit  BRG_2_U4BRG_bit at U4BRG.B2;
    sbit  BRG_1_U4BRG_bit at U4BRG.B1;
    sbit  BRG_0_U4BRG_bit at U4BRG.B0;

    // TRISA bits
    const register unsigned short int TRISA15 = 15;
    sbit  TRISA15_bit at TRISA.B15;
    const register unsigned short int TRISA14 = 14;
    sbit  TRISA14_bit at TRISA.B14;
    const register unsigned short int TRISA10 = 10;
    sbit  TRISA10_bit at TRISA.B10;
    const register unsigned short int TRISA9 = 9;
    sbit  TRISA9_bit at TRISA.B9;

    // PORTA bits
    const register unsigned short int RA15 = 15;
    sbit  RA15_bit at PORTA.B15;
    const register unsigned short int RA14 = 14;
    sbit  RA14_bit at PORTA.B14;
    const register unsigned short int RA10 = 10;
    sbit  RA10_bit at PORTA.B10;
    const register unsigned short int RA9 = 9;
    sbit  RA9_bit at PORTA.B9;

    // LATA bits
    const register unsigned short int LATA15 = 15;
    sbit  LATA15_bit at LATA.B15;
    const register unsigned short int LATA14 = 14;
    sbit  LATA14_bit at LATA.B14;
    const register unsigned short int LATA10 = 10;
    sbit  LATA10_bit at LATA.B10;
    const register unsigned short int LATA9 = 9;
    sbit  LATA9_bit at LATA.B9;

    // ODCA bits
    const register unsigned short int ODA15 = 15;
    sbit  ODA15_bit at ODCA.B15;
    const register unsigned short int ODA14 = 14;
    sbit  ODA14_bit at ODCA.B14;
    const register unsigned short int ODA10 = 10;
    sbit  ODA10_bit at ODCA.B10;
    const register unsigned short int ODA9 = 9;
    sbit  ODA9_bit at ODCA.B9;

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

    // TRISC bits
    const register unsigned short int TRISC15 = 15;
    sbit  TRISC15_bit at TRISC.B15;
    const register unsigned short int TRISC14 = 14;
    sbit  TRISC14_bit at TRISC.B14;
    const register unsigned short int TRISC13 = 13;
    sbit  TRISC13_bit at TRISC.B13;
    const register unsigned short int TRISC12 = 12;
    sbit  TRISC12_bit at TRISC.B12;
    const register unsigned short int TRISC3 = 3;
    sbit  TRISC3_bit at TRISC.B3;
    const register unsigned short int TRISC1 = 1;
    sbit  TRISC1_bit at TRISC.B1;

    // PORTC bits
    const register unsigned short int RC15 = 15;
    sbit  RC15_bit at PORTC.B15;
    const register unsigned short int RC14 = 14;
    sbit  RC14_bit at PORTC.B14;
    const register unsigned short int RC13 = 13;
    sbit  RC13_bit at PORTC.B13;
    const register unsigned short int RC12 = 12;
    sbit  RC12_bit at PORTC.B12;
    const register unsigned short int RC3 = 3;
    sbit  RC3_bit at PORTC.B3;
    const register unsigned short int RC1 = 1;
    sbit  RC1_bit at PORTC.B1;

    // LATC bits
    const register unsigned short int LATC15 = 15;
    sbit  LATC15_bit at LATC.B15;
    const register unsigned short int LATC14 = 14;
    sbit  LATC14_bit at LATC.B14;
    const register unsigned short int LATC13 = 13;
    sbit  LATC13_bit at LATC.B13;
    const register unsigned short int LATC12 = 12;
    sbit  LATC12_bit at LATC.B12;
    const register unsigned short int LATC3 = 3;
    sbit  LATC3_bit at LATC.B3;
    const register unsigned short int LATC1 = 1;
    sbit  LATC1_bit at LATC.B1;

    // ODCC bits
    const register unsigned short int ODC15 = 15;
    sbit  ODC15_bit at ODCC.B15;
    const register unsigned short int ODC14 = 14;
    sbit  ODC14_bit at ODCC.B14;
    const register unsigned short int ODC13 = 13;
    sbit  ODC13_bit at ODCC.B13;
    const register unsigned short int ODC12 = 12;
    sbit  ODC12_bit at ODCC.B12;
    const register unsigned short int ODC3 = 3;
    sbit  ODC3_bit at ODCC.B3;
    const register unsigned short int ODC1 = 1;
    sbit  ODC1_bit at ODCC.B1;

    // TRISD bits
    const register unsigned short int TRISD15 = 15;
    sbit  TRISD15_bit at TRISD.B15;
    const register unsigned short int TRISD14 = 14;
    sbit  TRISD14_bit at TRISD.B14;
    const register unsigned short int TRISD13 = 13;
    sbit  TRISD13_bit at TRISD.B13;
    const register unsigned short int TRISD12 = 12;
    sbit  TRISD12_bit at TRISD.B12;
    const register unsigned short int TRISD11 = 11;
    sbit  TRISD11_bit at TRISD.B11;
    const register unsigned short int TRISD10 = 10;
    sbit  TRISD10_bit at TRISD.B10;
    const register unsigned short int TRISD9 = 9;
    sbit  TRISD9_bit at TRISD.B9;
    const register unsigned short int TRISD8 = 8;
    sbit  TRISD8_bit at TRISD.B8;
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

    // PORTD bits
    const register unsigned short int RD15 = 15;
    sbit  RD15_bit at PORTD.B15;
    const register unsigned short int RD14 = 14;
    sbit  RD14_bit at PORTD.B14;
    const register unsigned short int RD13 = 13;
    sbit  RD13_bit at PORTD.B13;
    const register unsigned short int RD12 = 12;
    sbit  RD12_bit at PORTD.B12;
    const register unsigned short int RD11 = 11;
    sbit  RD11_bit at PORTD.B11;
    const register unsigned short int RD10 = 10;
    sbit  RD10_bit at PORTD.B10;
    const register unsigned short int RD9 = 9;
    sbit  RD9_bit at PORTD.B9;
    const register unsigned short int RD8 = 8;
    sbit  RD8_bit at PORTD.B8;
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

    // LATD bits
    const register unsigned short int LATD15 = 15;
    sbit  LATD15_bit at LATD.B15;
    const register unsigned short int LATD14 = 14;
    sbit  LATD14_bit at LATD.B14;
    const register unsigned short int LATD13 = 13;
    sbit  LATD13_bit at LATD.B13;
    const register unsigned short int LATD12 = 12;
    sbit  LATD12_bit at LATD.B12;
    const register unsigned short int LATD11 = 11;
    sbit  LATD11_bit at LATD.B11;
    const register unsigned short int LATD10 = 10;
    sbit  LATD10_bit at LATD.B10;
    const register unsigned short int LATD9 = 9;
    sbit  LATD9_bit at LATD.B9;
    const register unsigned short int LATD8 = 8;
    sbit  LATD8_bit at LATD.B8;
    const register unsigned short int LATD7 = 7;
    sbit  LATD7_bit at LATD.B7;
    const register unsigned short int LATD6 = 6;
    sbit  LATD6_bit at LATD.B6;
    const register unsigned short int LATD5 = 5;
    sbit  LATD5_bit at LATD.B5;
    const register unsigned short int LATD4 = 4;
    sbit  LATD4_bit at LATD.B4;
    const register unsigned short int LATD3 = 3;
    sbit  LATD3_bit at LATD.B3;
    const register unsigned short int LATD2 = 2;
    sbit  LATD2_bit at LATD.B2;
    const register unsigned short int LATD1 = 1;
    sbit  LATD1_bit at LATD.B1;
    const register unsigned short int LATD0 = 0;
    sbit  LATD0_bit at LATD.B0;

    // ODCD bits
    const register unsigned short int ODD15 = 15;
    sbit  ODD15_bit at ODCD.B15;
    const register unsigned short int ODD14 = 14;
    sbit  ODD14_bit at ODCD.B14;
    const register unsigned short int ODD13 = 13;
    sbit  ODD13_bit at ODCD.B13;
    const register unsigned short int ODD12 = 12;
    sbit  ODD12_bit at ODCD.B12;
    const register unsigned short int ODD11 = 11;
    sbit  ODD11_bit at ODCD.B11;
    const register unsigned short int ODD10 = 10;
    sbit  ODD10_bit at ODCD.B10;
    const register unsigned short int ODD9 = 9;
    sbit  ODD9_bit at ODCD.B9;
    const register unsigned short int ODD8 = 8;
    sbit  ODD8_bit at ODCD.B8;
    const register unsigned short int ODD7 = 7;
    sbit  ODD7_bit at ODCD.B7;
    const register unsigned short int ODD6 = 6;
    sbit  ODD6_bit at ODCD.B6;
    const register unsigned short int ODD5 = 5;
    sbit  ODD5_bit at ODCD.B5;
    const register unsigned short int ODD4 = 4;
    sbit  ODD4_bit at ODCD.B4;
    const register unsigned short int ODD3 = 3;
    sbit  ODD3_bit at ODCD.B3;
    const register unsigned short int ODD2 = 2;
    sbit  ODD2_bit at ODCD.B2;
    const register unsigned short int ODD1 = 1;
    sbit  ODD1_bit at ODCD.B1;
    const register unsigned short int ODD0 = 0;
    sbit  ODD0_bit at ODCD.B0;

    // TRISE bits
    const register unsigned short int TRISE9 = 9;
    sbit  TRISE9_bit at TRISE.B9;
    const register unsigned short int TRISE8 = 8;
    sbit  TRISE8_bit at TRISE.B8;
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

    // PORTE bits
    const register unsigned short int RE9 = 9;
    sbit  RE9_bit at PORTE.B9;
    const register unsigned short int RE8 = 8;
    sbit  RE8_bit at PORTE.B8;
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

    // LATE bits
    const register unsigned short int LATE9 = 9;
    sbit  LATE9_bit at LATE.B9;
    const register unsigned short int LATE8 = 8;
    sbit  LATE8_bit at LATE.B8;
    const register unsigned short int LATE7 = 7;
    sbit  LATE7_bit at LATE.B7;
    const register unsigned short int LATE6 = 6;
    sbit  LATE6_bit at LATE.B6;
    const register unsigned short int LATE5 = 5;
    sbit  LATE5_bit at LATE.B5;
    const register unsigned short int LATE4 = 4;
    sbit  LATE4_bit at LATE.B4;
    const register unsigned short int LATE3 = 3;
    sbit  LATE3_bit at LATE.B3;
    const register unsigned short int LATE2 = 2;
    sbit  LATE2_bit at LATE.B2;
    const register unsigned short int LATE1 = 1;
    sbit  LATE1_bit at LATE.B1;
    const register unsigned short int LATE0 = 0;
    sbit  LATE0_bit at LATE.B0;

    // ODCE bits
    const register unsigned short int ODE9 = 9;
    sbit  ODE9_bit at ODCE.B9;
    const register unsigned short int ODE8 = 8;
    sbit  ODE8_bit at ODCE.B8;
    const register unsigned short int ODE7 = 7;
    sbit  ODE7_bit at ODCE.B7;
    const register unsigned short int ODE6 = 6;
    sbit  ODE6_bit at ODCE.B6;
    const register unsigned short int ODE5 = 5;
    sbit  ODE5_bit at ODCE.B5;
    const register unsigned short int ODE4 = 4;
    sbit  ODE4_bit at ODCE.B4;
    const register unsigned short int ODE3 = 3;
    sbit  ODE3_bit at ODCE.B3;
    const register unsigned short int ODE2 = 2;
    sbit  ODE2_bit at ODCE.B2;
    const register unsigned short int ODE1 = 1;
    sbit  ODE1_bit at ODCE.B1;
    const register unsigned short int ODE0 = 0;
    sbit  ODE0_bit at ODCE.B0;

    // TRISF bits
    const register unsigned short int TRISF8 = 8;
    sbit  TRISF8_bit at TRISF.B8;
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
    const register unsigned short int TRISF0 = 0;
    sbit  TRISF0_bit at TRISF.B0;

    // PORTF bits
    const register unsigned short int RF8 = 8;
    sbit  RF8_bit at PORTF.B8;
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
    const register unsigned short int RF0 = 0;
    sbit  RF0_bit at PORTF.B0;

    // LATF bits
    const register unsigned short int LATF8 = 8;
    sbit  LATF8_bit at LATF.B8;
    const register unsigned short int LATF5 = 5;
    sbit  LATF5_bit at LATF.B5;
    const register unsigned short int LATF4 = 4;
    sbit  LATF4_bit at LATF.B4;
    const register unsigned short int LATF3 = 3;
    sbit  LATF3_bit at LATF.B3;
    const register unsigned short int LATF2 = 2;
    sbit  LATF2_bit at LATF.B2;
    const register unsigned short int LATF1 = 1;
    sbit  LATF1_bit at LATF.B1;
    const register unsigned short int LATF0 = 0;
    sbit  LATF0_bit at LATF.B0;

    // ODCF bits
    const register unsigned short int ODF8 = 8;
    sbit  ODF8_bit at ODCF.B8;
    const register unsigned short int ODF5 = 5;
    sbit  ODF5_bit at ODCF.B5;
    const register unsigned short int ODF4 = 4;
    sbit  ODF4_bit at ODCF.B4;
    const register unsigned short int ODF3 = 3;
    sbit  ODF3_bit at ODCF.B3;
    const register unsigned short int ODF2 = 2;
    sbit  ODF2_bit at ODCF.B2;
    const register unsigned short int ODF1 = 1;
    sbit  ODF1_bit at ODCF.B1;
    const register unsigned short int ODF0 = 0;
    sbit  ODF0_bit at ODCF.B0;

    // TRISG bits
    const register unsigned short int TRISG9 = 9;
    sbit  TRISG9_bit at TRISG.B9;
    const register unsigned short int TRISG8 = 8;
    sbit  TRISG8_bit at TRISG.B8;
    const register unsigned short int TRISG7 = 7;
    sbit  TRISG7_bit at TRISG.B7;
    const register unsigned short int TRISG6 = 6;
    sbit  TRISG6_bit at TRISG.B6;
    const register unsigned short int TRISG3 = 3;
    sbit  TRISG3_bit at TRISG.B3;
    const register unsigned short int TRISG2 = 2;
    sbit  TRISG2_bit at TRISG.B2;
    const register unsigned short int TRISG1 = 1;
    sbit  TRISG1_bit at TRISG.B1;
    const register unsigned short int TRISG0 = 0;
    sbit  TRISG0_bit at TRISG.B0;

    // PORTG bits
    const register unsigned short int RG9 = 9;
    sbit  RG9_bit at PORTG.B9;
    const register unsigned short int RG8 = 8;
    sbit  RG8_bit at PORTG.B8;
    const register unsigned short int RG7 = 7;
    sbit  RG7_bit at PORTG.B7;
    const register unsigned short int RG6 = 6;
    sbit  RG6_bit at PORTG.B6;
    const register unsigned short int RG3 = 3;
    sbit  RG3_bit at PORTG.B3;
    const register unsigned short int RG2 = 2;
    sbit  RG2_bit at PORTG.B2;
    const register unsigned short int RG1 = 1;
    sbit  RG1_bit at PORTG.B1;
    const register unsigned short int RG0 = 0;
    sbit  RG0_bit at PORTG.B0;

    // LATG bits
    const register unsigned short int LATG9 = 9;
    sbit  LATG9_bit at LATG.B9;
    const register unsigned short int LATG8 = 8;
    sbit  LATG8_bit at LATG.B8;
    const register unsigned short int LATG7 = 7;
    sbit  LATG7_bit at LATG.B7;
    const register unsigned short int LATG6 = 6;
    sbit  LATG6_bit at LATG.B6;
    const register unsigned short int LATG3 = 3;
    sbit  LATG3_bit at LATG.B3;
    const register unsigned short int LATG2 = 2;
    sbit  LATG2_bit at LATG.B2;
    const register unsigned short int LATG1 = 1;
    sbit  LATG1_bit at LATG.B1;
    const register unsigned short int LATG0 = 0;
    sbit  LATG0_bit at LATG.B0;

    // ODCG bits
    const register unsigned short int ODG9 = 9;
    sbit  ODG9_bit at ODCG.B9;
    const register unsigned short int ODG8 = 8;
    sbit  ODG8_bit at ODCG.B8;
    const register unsigned short int ODG7 = 7;
    sbit  ODG7_bit at ODCG.B7;
    const register unsigned short int ODG6 = 6;
    sbit  ODG6_bit at ODCG.B6;
    const register unsigned short int ODG3 = 3;
    sbit  ODG3_bit at ODCG.B3;
    const register unsigned short int ODG2 = 2;
    sbit  ODG2_bit at ODCG.B2;
    const register unsigned short int ODG1 = 1;
    sbit  ODG1_bit at ODCG.B1;
    const register unsigned short int ODG0 = 0;
    sbit  ODG0_bit at ODCG.B0;

    // PADCFG1 bits
    const register unsigned short int RTSECSEL = 1;
    sbit  RTSECSEL_bit at PADCFG1.B1;
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

    // AD1PCFGH bits
    const register unsigned short int PCFGH_1 = 1;
    sbit  PCFGH_1_bit at AD1PCFGH.B1;
    const register unsigned short int PCFGH_0 = 0;
    sbit  PCFGH_0_bit at AD1PCFGH.B0;

    // AD1PCFGL bits
    const register unsigned short int PCFGL_15 = 15;
    sbit  PCFGL_15_bit at AD1PCFGL.B15;
    const register unsigned short int PCFGL_14 = 14;
    sbit  PCFGL_14_bit at AD1PCFGL.B14;
    const register unsigned short int PCFGL_13 = 13;
    sbit  PCFGL_13_bit at AD1PCFGL.B13;
    const register unsigned short int PCFGL_12 = 12;
    sbit  PCFGL_12_bit at AD1PCFGL.B12;
    const register unsigned short int PCFGL_11 = 11;
    sbit  PCFGL_11_bit at AD1PCFGL.B11;
    const register unsigned short int PCFGL_10 = 10;
    sbit  PCFGL_10_bit at AD1PCFGL.B10;
    const register unsigned short int PCFGL_9 = 9;
    sbit  PCFGL_9_bit at AD1PCFGL.B9;
    const register unsigned short int PCFGL_8 = 8;
    sbit  PCFGL_8_bit at AD1PCFGL.B8;
    const register unsigned short int PCFGL_7 = 7;
    sbit  PCFGL_7_bit at AD1PCFGL.B7;
    const register unsigned short int PCFGL_6 = 6;
    sbit  PCFGL_6_bit at AD1PCFGL.B6;
    const register unsigned short int PCFGL_5 = 5;
    sbit  PCFGL_5_bit at AD1PCFGL.B5;
    const register unsigned short int PCFGL_4 = 4;
    sbit  PCFGL_4_bit at AD1PCFGL.B4;
    const register unsigned short int PCFGL_3 = 3;
    sbit  PCFGL_3_bit at AD1PCFGL.B3;
    const register unsigned short int PCFGL_2 = 2;
    sbit  PCFGL_2_bit at AD1PCFGL.B2;
    const register unsigned short int PCFGL_1 = 1;
    sbit  PCFGL_1_bit at AD1PCFGL.B1;
    const register unsigned short int PCFGL_0 = 0;
    sbit  PCFGL_0_bit at AD1PCFGL.B0;

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

    // AD1CSSH bits
    const register unsigned short int CSSH_1 = 1;
    sbit  CSSH_1_bit at AD1CSSH.B1;
    const register unsigned short int CSSH_0 = 0;
    sbit  CSSH_0_bit at AD1CSSH.B0;

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

    // U1OTGIR bits
    const register unsigned short int IDIF = 7;
    sbit  IDIF_bit at U1OTGIR.B7;
    const register unsigned short int T1MSECIF = 6;
    sbit  T1MSECIF_bit at U1OTGIR.B6;
    const register unsigned short int LSTATEIF = 5;
    sbit  LSTATEIF_bit at U1OTGIR.B5;
    const register unsigned short int ACTVIF = 4;
    sbit  ACTVIF_bit at U1OTGIR.B4;
    const register unsigned short int SESVDIF = 3;
    sbit  SESVDIF_bit at U1OTGIR.B3;
    const register unsigned short int SESENDIF = 2;
    sbit  SESENDIF_bit at U1OTGIR.B2;
    const register unsigned short int VBUSVDIF = 0;
    sbit  VBUSVDIF_bit at U1OTGIR.B0;

    // U1OTGIE bits
    const register unsigned short int IDIE = 7;
    sbit  IDIE_bit at U1OTGIE.B7;
    const register unsigned short int T1MSECIE = 6;
    sbit  T1MSECIE_bit at U1OTGIE.B6;
    const register unsigned short int LSTATEIE = 5;
    sbit  LSTATEIE_bit at U1OTGIE.B5;
    const register unsigned short int ACTVIE = 4;
    sbit  ACTVIE_bit at U1OTGIE.B4;
    const register unsigned short int SESVIE = 3;
    sbit  SESVIE_bit at U1OTGIE.B3;
    const register unsigned short int SESENDIE = 2;
    sbit  SESENDIE_bit at U1OTGIE.B2;
    const register unsigned short int VBUSVDIE = 0;
    sbit  VBUSVDIE_bit at U1OTGIE.B0;

    // U1OTGSTAT bits
    const register unsigned short int ID = 7;
    sbit  ID_bit at U1OTGSTAT.B7;
    const register unsigned short int LSTATE = 5;
    sbit  LSTATE_bit at U1OTGSTAT.B5;
    const register unsigned short int SESVD = 3;
    sbit  SESVD_bit at U1OTGSTAT.B3;
    const register unsigned short int SESEND = 2;
    sbit  SESEND_bit at U1OTGSTAT.B2;
    const register unsigned short int VBUSVD = 0;
    sbit  VBUSVD_bit at U1OTGSTAT.B0;

    // U1OTGCON bits
    const register unsigned short int DPPULUP = 7;
    sbit  DPPULUP_bit at U1OTGCON.B7;
    const register unsigned short int DMPULUP = 6;
    sbit  DMPULUP_bit at U1OTGCON.B6;
    const register unsigned short int DPPULDWN = 5;
    sbit  DPPULDWN_bit at U1OTGCON.B5;
    const register unsigned short int DMPULDWN = 4;
    sbit  DMPULDWN_bit at U1OTGCON.B4;
    const register unsigned short int VBUSON = 3;
    sbit  VBUSON_bit at U1OTGCON.B3;
    const register unsigned short int OTGEN = 2;
    sbit  OTGEN_bit at U1OTGCON.B2;
    const register unsigned short int VBUSCHG = 1;
    sbit  VBUSCHG_bit at U1OTGCON.B1;
    const register unsigned short int VBUSDIS = 0;
    sbit  VBUSDIS_bit at U1OTGCON.B0;

    // U1PWRC bits
    const register unsigned short int UACTPND = 7;
    sbit  UACTPND_bit at U1PWRC.B7;
    const register unsigned short int USLPGRD = 4;
    sbit  USLPGRD_bit at U1PWRC.B4;
    const register unsigned short int USUSPEND = 1;
    const register unsigned short int USUSPND = 1;
    sbit  USUSPND_bit at U1PWRC.B1;
    sbit  USUSPEND_bit at U1PWRC.B1;
    const register unsigned short int USBPWR = 0;
    sbit  USBPWR_bit at U1PWRC.B0;

    // U1IR bits
    const register unsigned short int STALLIF = 7;
    sbit  STALLIF_bit at U1IR.B7;
    const register unsigned short int ATTACHIF = 6;
    sbit  ATTACHIF_bit at U1IR.B6;
    const register unsigned short int RESUMEIF = 5;
    sbit  RESUMEIF_bit at U1IR.B5;
    const register unsigned short int IDLEIF = 4;
    sbit  IDLEIF_bit at U1IR.B4;
    const register unsigned short int TRNIF = 3;
    sbit  TRNIF_bit at U1IR.B3;
    const register unsigned short int SOFIF = 2;
    sbit  SOFIF_bit at U1IR.B2;
    const register unsigned short int UERRIF = 1;
    sbit  UERRIF_bit at U1IR.B1;
    const register unsigned short int URSTIF = 0;
    sbit  URSTIF_bit at U1IR.B0;

    // U1IE bits
    const register unsigned short int STALLIE = 7;
    sbit  STALLIE_bit at U1IE.B7;
    const register unsigned short int ATTACHIE = 6;
    sbit  ATTACHIE_bit at U1IE.B6;
    const register unsigned short int RESUMEIE = 5;
    sbit  RESUMEIE_bit at U1IE.B5;
    const register unsigned short int IDLEIE = 4;
    sbit  IDLEIE_bit at U1IE.B4;
    const register unsigned short int TRNIE = 3;
    sbit  TRNIE_bit at U1IE.B3;
    const register unsigned short int SOFIE = 2;
    sbit  SOFIE_bit at U1IE.B2;
    const register unsigned short int UERRIE = 1;
    sbit  UERRIE_bit at U1IE.B1;
    const register unsigned short int URSTIE = 0;
    sbit  URSTIE_bit at U1IE.B0;

    // U1EIR bits
    const register unsigned short int BTSEF = 7;
    sbit  BTSEF_bit at U1EIR.B7;
    const register unsigned short int DMAEF = 5;
    sbit  DMAEF_bit at U1EIR.B5;
    const register unsigned short int BTOEF = 4;
    sbit  BTOEF_bit at U1EIR.B4;
    const register unsigned short int DFN8EF = 3;
    sbit  DFN8EF_bit at U1EIR.B3;
    const register unsigned short int CRC16EF = 2;
    sbit  CRC16EF_bit at U1EIR.B2;
    const register unsigned short int CRC5EF = 1;
    sbit  CRC5EF_bit at U1EIR.B1;
    const register unsigned short int PIDEF = 0;
    sbit  PIDEF_bit at U1EIR.B0;

    // U1EIE bits
    const register unsigned short int BTSEE = 7;
    sbit  BTSEE_bit at U1EIE.B7;
    const register unsigned short int DMAEE = 5;
    sbit  DMAEE_bit at U1EIE.B5;
    const register unsigned short int BTOEE = 4;
    sbit  BTOEE_bit at U1EIE.B4;
    const register unsigned short int DFN8EE = 3;
    sbit  DFN8EE_bit at U1EIE.B3;
    const register unsigned short int CRC16EE = 2;
    sbit  CRC16EE_bit at U1EIE.B2;
    const register unsigned short int CRC5EE = 1;
    sbit  CRC5EE_bit at U1EIE.B1;
    const register unsigned short int PIDEE = 0;
    sbit  PIDEE_bit at U1EIE.B0;

    // U1STAT bits
    const register unsigned short int ENDPT3 = 7;
    sbit  ENDPT3_bit at U1STAT.B7;
    const register unsigned short int ENDPT2 = 6;
    sbit  ENDPT2_bit at U1STAT.B6;
    const register unsigned short int ENDPT1 = 5;
    sbit  ENDPT1_bit at U1STAT.B5;
    const register unsigned short int ENDPT0 = 4;
    sbit  ENDPT0_bit at U1STAT.B4;
    const register unsigned short int DIR_ = 3;
    sbit  DIR_bit at U1STAT.B3;
    const register unsigned short int PPBI = 2;
    sbit  PPBI_bit at U1STAT.B2;

    // U1CON bits
    const register unsigned short int JSTATE = 7;
    sbit  JSTATE_bit at U1CON.B7;
    const register unsigned short int SE0 = 6;
    sbit  SE0_bit at U1CON.B6;
    const register unsigned short int PKTDIS = 5;
    sbit  PKTDIS_bit at U1CON.B5;
    const register unsigned short int RESET_ = 4;
    sbit  RESET_bit at U1CON.B4;
    const register unsigned short int HOSTEN = 3;
    sbit  HOSTEN_bit at U1CON.B3;
    const register unsigned short int RESUME_ = 2;
    sbit  RESUME_bit at U1CON.B2;
    const register unsigned short int PPBRST = 1;
    sbit  PPBRST_bit at U1CON.B1;
    const register unsigned short int USBEN = 0;
    sbit  USBEN_bit at U1CON.B0;

    // U1ADDR bits
    const register unsigned short int LSPDEN = 7;
    sbit  LSPDEN_bit at U1ADDR.B7;
    const register unsigned short int ADDR6 = 6;
    sbit  ADDR6_bit at U1ADDR.B6;
    const register unsigned short int ADDR5 = 5;
    sbit  ADDR5_bit at U1ADDR.B5;
    const register unsigned short int ADDR4 = 4;
    sbit  ADDR4_bit at U1ADDR.B4;
    const register unsigned short int ADDR3 = 3;
    sbit  ADDR3_bit at U1ADDR.B3;
    const register unsigned short int ADDR2 = 2;
    sbit  ADDR2_bit at U1ADDR.B2;
    const register unsigned short int ADDR1 = 1;
    sbit  ADDR1_bit at U1ADDR.B1;
    const register unsigned short int ADDR0 = 0;
    sbit  ADDR0_bit at U1ADDR.B0;

    // U1BDTP1 bits
    const register unsigned short int BDTBA15 = 7;
    sbit  BDTBA15_bit at U1BDTP1.B7;
    const register unsigned short int BDTBA14 = 6;
    sbit  BDTBA14_bit at U1BDTP1.B6;
    const register unsigned short int BDTBA13 = 5;
    sbit  BDTBA13_bit at U1BDTP1.B5;
    const register unsigned short int BDTBA12 = 4;
    sbit  BDTBA12_bit at U1BDTP1.B4;
    const register unsigned short int BDTBA11 = 3;
    sbit  BDTBA11_bit at U1BDTP1.B3;
    const register unsigned short int BDTBA10 = 2;
    sbit  BDTBA10_bit at U1BDTP1.B2;
    const register unsigned short int BDTBA9 = 1;
    sbit  BDTBA9_bit at U1BDTP1.B1;

    // U1FRML bits
    const register unsigned short int FRM7 = 7;
    sbit  FRM7_bit at U1FRML.B7;
    const register unsigned short int FRM6 = 6;
    sbit  FRM6_bit at U1FRML.B6;
    const register unsigned short int FRM5 = 5;
    sbit  FRM5_bit at U1FRML.B5;
    const register unsigned short int FRM4 = 4;
    sbit  FRM4_bit at U1FRML.B4;
    const register unsigned short int FRM3 = 3;
    sbit  FRM3_bit at U1FRML.B3;
    const register unsigned short int FRM2 = 2;
    sbit  FRM2_bit at U1FRML.B2;
    const register unsigned short int FRM1 = 1;
    sbit  FRM1_bit at U1FRML.B1;
    const register unsigned short int FRM0 = 0;
    sbit  FRM0_bit at U1FRML.B0;

    // U1FRMH bits
    const register unsigned short int FRM15 = 7;
    sbit  FRM15_bit at U1FRMH.B7;
    const register unsigned short int FRM14 = 6;
    sbit  FRM14_bit at U1FRMH.B6;
    const register unsigned short int FRM13 = 5;
    sbit  FRM13_bit at U1FRMH.B5;
    const register unsigned short int FRM12 = 4;
    sbit  FRM12_bit at U1FRMH.B4;
    const register unsigned short int FRM11 = 3;
    sbit  FRM11_bit at U1FRMH.B3;
    const register unsigned short int FRM10 = 2;
    sbit  FRM10_bit at U1FRMH.B2;
    const register unsigned short int FRM9 = 1;
    sbit  FRM9_bit at U1FRMH.B1;
    const register unsigned short int FRM8 = 0;
    sbit  FRM8_bit at U1FRMH.B0;

    // U1TOK bits
    const register unsigned short int PID3 = 7;
    sbit  PID3_bit at U1TOK.B7;
    const register unsigned short int PID2 = 6;
    sbit  PID2_bit at U1TOK.B6;
    const register unsigned short int PID1 = 5;
    sbit  PID1_bit at U1TOK.B5;
    const register unsigned short int PID0 = 4;
    sbit  PID0_bit at U1TOK.B4;
    const register unsigned short int EP3 = 3;
    sbit  EP3_bit at U1TOK.B3;
    const register unsigned short int EP2 = 2;
    sbit  EP2_bit at U1TOK.B2;
    const register unsigned short int EP1 = 1;
    sbit  EP1_bit at U1TOK.B1;
    const register unsigned short int EP0 = 0;
    sbit  EP0_bit at U1TOK.B0;

    // U1SOF bits
    const register unsigned short int CNT7 = 7;
    sbit  CNT7_bit at U1SOF.B7;
    const register unsigned short int CNT6 = 6;
    sbit  CNT6_bit at U1SOF.B6;
    const register unsigned short int CNT5 = 5;
    sbit  CNT5_bit at U1SOF.B5;
    const register unsigned short int CNT4 = 4;
    sbit  CNT4_bit at U1SOF.B4;
    const register unsigned short int CNT3 = 3;
    sbit  CNT3_bit at U1SOF.B3;
    const register unsigned short int CNT2 = 2;
    sbit  CNT2_bit at U1SOF.B2;
    const register unsigned short int CNT1 = 1;
    sbit  CNT1_bit at U1SOF.B1;
    const register unsigned short int CNT0 = 0;
    sbit  CNT0_bit at U1SOF.B0;

    // U1CNFG1 bits
    const register unsigned short int UTEYE = 7;
    sbit  UTEYE_bit at U1CNFG1.B7;
    const register unsigned short int UOEMON = 6;
    sbit  UOEMON_bit at U1CNFG1.B6;
    const register unsigned short int USBSIDL = 4;
    sbit  USBSIDL_bit at U1CNFG1.B4;
    const register unsigned short int PPB1 = 1;
    sbit  PPB1_bit at U1CNFG1.B1;
    const register unsigned short int PPB0 = 0;
    sbit  PPB0_bit at U1CNFG1.B0;

    // U1CNFG2 bits
    const register unsigned short int PUVBUS = 4;
    sbit  PUVBUS_bit at U1CNFG2.B4;
    const register unsigned short int EXTI2CEN = 3;
    sbit  EXTI2CEN_bit at U1CNFG2.B3;
    const register unsigned short int UVBUSDIS = 2;
    sbit  UVBUSDIS_bit at U1CNFG2.B2;
    const register unsigned short int UVCMPDIS = 1;
    sbit  UVCMPDIS_bit at U1CNFG2.B1;
    const register unsigned short int UTRDIS = 0;
    sbit  UTRDIS_bit at U1CNFG2.B0;

    // U1EP0 bits
    const register unsigned short int LSPD = 7;
    sbit  LSPD_bit at U1EP0.B7;
    const register unsigned short int RETRYDIS = 6;
    sbit  RETRYDIS_bit at U1EP0.B6;
    const register unsigned short int EPCONDIS = 4;
    sbit  EPCONDIS_bit at U1EP0.B4;
    sbit  EPCONDIS_U1EP0_bit at U1EP0.B4;
    const register unsigned short int EPRXEN = 3;
    sbit  EPRXEN_bit at U1EP0.B3;
    sbit  EPRXEN_U1EP0_bit at U1EP0.B3;
    const register unsigned short int EPTXEN = 2;
    sbit  EPTXEN_bit at U1EP0.B2;
    sbit  EPTXEN_U1EP0_bit at U1EP0.B2;
    const register unsigned short int EPSTALL = 1;
    sbit  EPSTALL_bit at U1EP0.B1;
    sbit  EPSTALL_U1EP0_bit at U1EP0.B1;
    const register unsigned short int EPHSHK = 0;
    sbit  EPHSHK_bit at U1EP0.B0;
    sbit  EPHSHK_U1EP0_bit at U1EP0.B0;

    // U1EP1 bits
    sbit  EPCONDIS_U1EP1_bit at U1EP1.B4;
    sbit  EPRXEN_U1EP1_bit at U1EP1.B3;
    sbit  EPTXEN_U1EP1_bit at U1EP1.B2;
    sbit  EPSTALL_U1EP1_bit at U1EP1.B1;
    sbit  EPHSHK_U1EP1_bit at U1EP1.B0;

    // U1EP2 bits
    sbit  EPCONDIS_U1EP2_bit at U1EP2.B4;
    sbit  EPRXEN_U1EP2_bit at U1EP2.B3;
    sbit  EPTXEN_U1EP2_bit at U1EP2.B2;
    sbit  EPSTALL_U1EP2_bit at U1EP2.B1;
    sbit  EPHSHK_U1EP2_bit at U1EP2.B0;

    // U1EP3 bits
    sbit  EPCONDIS_U1EP3_bit at U1EP3.B4;
    sbit  EPRXEN_U1EP3_bit at U1EP3.B3;
    sbit  EPTXEN_U1EP3_bit at U1EP3.B2;
    sbit  EPSTALL_U1EP3_bit at U1EP3.B1;
    sbit  EPHSHK_U1EP3_bit at U1EP3.B0;

    // U1EP4 bits
    sbit  EPCONDIS_U1EP4_bit at U1EP4.B4;
    sbit  EPRXEN_U1EP4_bit at U1EP4.B3;
    sbit  EPTXEN_U1EP4_bit at U1EP4.B2;
    sbit  EPSTALL_U1EP4_bit at U1EP4.B1;
    sbit  EPHSHK_U1EP4_bit at U1EP4.B0;

    // U1EP5 bits
    sbit  EPCONDIS_U1EP5_bit at U1EP5.B4;
    sbit  EPRXEN_U1EP5_bit at U1EP5.B3;
    sbit  EPTXEN_U1EP5_bit at U1EP5.B2;
    sbit  EPSTALL_U1EP5_bit at U1EP5.B1;
    sbit  EPHSHK_U1EP5_bit at U1EP5.B0;

    // U1EP6 bits
    sbit  EPCONDIS_U1EP6_bit at U1EP6.B4;
    sbit  EPRXEN_U1EP6_bit at U1EP6.B3;
    sbit  EPTXEN_U1EP6_bit at U1EP6.B2;
    sbit  EPSTALL_U1EP6_bit at U1EP6.B1;
    sbit  EPHSHK_U1EP6_bit at U1EP6.B0;

    // U1EP7 bits
    sbit  EPCONDIS_U1EP7_bit at U1EP7.B4;
    sbit  EPRXEN_U1EP7_bit at U1EP7.B3;
    sbit  EPTXEN_U1EP7_bit at U1EP7.B2;
    sbit  EPSTALL_U1EP7_bit at U1EP7.B1;
    sbit  EPHSHK_U1EP7_bit at U1EP7.B0;

    // U1EP8 bits
    sbit  EPCONDIS_U1EP8_bit at U1EP8.B4;
    sbit  EPRXEN_U1EP8_bit at U1EP8.B3;
    sbit  EPTXEN_U1EP8_bit at U1EP8.B2;
    sbit  EPSTALL_U1EP8_bit at U1EP8.B1;
    sbit  EPHSHK_U1EP8_bit at U1EP8.B0;

    // U1EP9 bits
    sbit  EPCONDIS_U1EP9_bit at U1EP9.B4;
    sbit  EPRXEN_U1EP9_bit at U1EP9.B3;
    sbit  EPTXEN_U1EP9_bit at U1EP9.B2;
    sbit  EPSTALL_U1EP9_bit at U1EP9.B1;
    sbit  EPHSHK_U1EP9_bit at U1EP9.B0;

    // U1EP10 bits
    sbit  EPCONDIS_U1EP10_bit at U1EP10.B4;
    sbit  EPRXEN_U1EP10_bit at U1EP10.B3;
    sbit  EPTXEN_U1EP10_bit at U1EP10.B2;
    sbit  EPSTALL_U1EP10_bit at U1EP10.B1;
    sbit  EPHSHK_U1EP10_bit at U1EP10.B0;

    // U1EP11 bits
    sbit  EPCONDIS_U1EP11_bit at U1EP11.B4;
    sbit  EPRXEN_U1EP11_bit at U1EP11.B3;
    sbit  EPTXEN_U1EP11_bit at U1EP11.B2;
    sbit  EPSTALL_U1EP11_bit at U1EP11.B1;
    sbit  EPHSHK_U1EP11_bit at U1EP11.B0;

    // U1EP12 bits
    sbit  EPCONDIS_U1EP12_bit at U1EP12.B4;
    sbit  EPRXEN_U1EP12_bit at U1EP12.B3;
    sbit  EPTXEN_U1EP12_bit at U1EP12.B2;
    sbit  EPSTALL_U1EP12_bit at U1EP12.B1;
    sbit  EPHSHK_U1EP12_bit at U1EP12.B0;

    // U1EP13 bits
    sbit  EPCONDIS_U1EP13_bit at U1EP13.B4;
    sbit  EPRXEN_U1EP13_bit at U1EP13.B3;
    sbit  EPTXEN_U1EP13_bit at U1EP13.B2;
    sbit  EPSTALL_U1EP13_bit at U1EP13.B1;
    sbit  EPHSHK_U1EP13_bit at U1EP13.B0;

    // U1EP14 bits
    sbit  EPCONDIS_U1EP14_bit at U1EP14.B4;
    sbit  EPRXEN_U1EP14_bit at U1EP14.B3;
    sbit  EPTXEN_U1EP14_bit at U1EP14.B2;
    sbit  EPSTALL_U1EP14_bit at U1EP14.B1;
    sbit  EPHSHK_U1EP14_bit at U1EP14.B0;

    // U1EP15 bits
    sbit  EPCONDIS_U1EP15_bit at U1EP15.B4;
    sbit  EPRXEN_U1EP15_bit at U1EP15.B3;
    sbit  EPTXEN_U1EP15_bit at U1EP15.B2;
    sbit  EPSTALL_U1EP15_bit at U1EP15.B1;
    sbit  EPHSHK_U1EP15_bit at U1EP15.B0;

    // U1PWMRRS bits
    const register unsigned short int DC7 = 15;
    sbit  DC7_bit at U1PWMRRS.B15;
    const register unsigned short int DC6 = 14;
    sbit  DC6_bit at U1PWMRRS.B14;
    const register unsigned short int DC5 = 13;
    sbit  DC5_bit at U1PWMRRS.B13;
    const register unsigned short int DC4 = 12;
    sbit  DC4_bit at U1PWMRRS.B12;
    const register unsigned short int DC3 = 11;
    sbit  DC3_bit at U1PWMRRS.B11;
    const register unsigned short int DC2 = 10;
    sbit  DC2_bit at U1PWMRRS.B10;
    const register unsigned short int DC1 = 9;
    sbit  DC1_bit at U1PWMRRS.B9;
    const register unsigned short int DC0 = 8;
    sbit  DC0_bit at U1PWMRRS.B8;
    const register unsigned short int PER7 = 7;
    sbit  PER7_bit at U1PWMRRS.B7;
    const register unsigned short int PER6 = 6;
    sbit  PER6_bit at U1PWMRRS.B6;
    const register unsigned short int PER5 = 5;
    sbit  PER5_bit at U1PWMRRS.B5;
    const register unsigned short int PER4 = 4;
    sbit  PER4_bit at U1PWMRRS.B4;
    const register unsigned short int PER3 = 3;
    sbit  PER3_bit at U1PWMRRS.B3;
    const register unsigned short int PER2 = 2;
    sbit  PER2_bit at U1PWMRRS.B2;
    const register unsigned short int PER1 = 1;
    sbit  PER1_bit at U1PWMRRS.B1;
    const register unsigned short int PER0 = 0;
    sbit  PER0_bit at U1PWMRRS.B0;

    // U1PWMCON bits
    const register unsigned short int PWMEN = 15;
    sbit  PWMEN_bit at U1PWMCON.B15;
    const register unsigned short int USBTSEL_2 = 12;
    sbit  USBTSEL_2_bit at U1PWMCON.B12;
    const register unsigned short int USBTSEL_1 = 11;
    sbit  USBTSEL_1_bit at U1PWMCON.B11;
    const register unsigned short int USBTSEL_0 = 10;
    sbit  USBTSEL_0_bit at U1PWMCON.B10;
    const register unsigned short int PWMPOL = 9;
    sbit  PWMPOL_bit at U1PWMCON.B9;
    const register unsigned short int CNTEN = 8;
    sbit  CNTEN_bit at U1PWMCON.B8;

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
    const register unsigned short int CS2P = 4;
    sbit  CS2P_bit at PMCON.B4;
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
    const register unsigned short int MODE1 = 9;
    sbit  MODE1_bit at PMMODE.B9;
    const register unsigned short int MODE0 = 8;
    sbit  MODE0_bit at PMMODE.B8;
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
    const register unsigned short int CS_1 = 15;
    sbit  CS_1_bit at PMADDR.B15;
    const register unsigned short int CS_0 = 14;
    sbit  CS_0_bit at PMADDR.B14;
    const register unsigned short int ADDR_13 = 13;
    sbit  ADDR_13_bit at PMADDR.B13;
    const register unsigned short int ADDR_12 = 12;
    sbit  ADDR_12_bit at PMADDR.B12;
    const register unsigned short int ADDR_11 = 11;
    sbit  ADDR_11_bit at PMADDR.B11;
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
    const register unsigned short int DATA_15 = 15;
    sbit  DATA_15_bit at PMDOUT2.B15;
    sbit  DATA_15_PMDOUT2_bit at PMDOUT2.B15;
    const register unsigned short int DATA_14 = 14;
    sbit  DATA_14_bit at PMDOUT2.B14;
    sbit  DATA_14_PMDOUT2_bit at PMDOUT2.B14;
    const register unsigned short int DATA_13 = 13;
    sbit  DATA_13_bit at PMDOUT2.B13;
    sbit  DATA_13_PMDOUT2_bit at PMDOUT2.B13;
    const register unsigned short int DATA_12 = 12;
    sbit  DATA_12_bit at PMDOUT2.B12;
    sbit  DATA_12_PMDOUT2_bit at PMDOUT2.B12;
    const register unsigned short int DATA_11 = 11;
    sbit  DATA_11_bit at PMDOUT2.B11;
    sbit  DATA_11_PMDOUT2_bit at PMDOUT2.B11;
    const register unsigned short int DATA_10 = 10;
    sbit  DATA_10_bit at PMDOUT2.B10;
    sbit  DATA_10_PMDOUT2_bit at PMDOUT2.B10;
    const register unsigned short int DATA_9 = 9;
    sbit  DATA_9_bit at PMDOUT2.B9;
    sbit  DATA_9_PMDOUT2_bit at PMDOUT2.B9;
    const register unsigned short int DATA_8 = 8;
    sbit  DATA_8_bit at PMDOUT2.B8;
    sbit  DATA_8_PMDOUT2_bit at PMDOUT2.B8;
    const register unsigned short int DATA_7 = 7;
    sbit  DATA_7_bit at PMDOUT2.B7;
    sbit  DATA_7_PMDOUT2_bit at PMDOUT2.B7;
    const register unsigned short int DATA_6 = 6;
    sbit  DATA_6_bit at PMDOUT2.B6;
    sbit  DATA_6_PMDOUT2_bit at PMDOUT2.B6;
    const register unsigned short int DATA_5 = 5;
    sbit  DATA_5_bit at PMDOUT2.B5;
    sbit  DATA_5_PMDOUT2_bit at PMDOUT2.B5;
    const register unsigned short int DATA_4 = 4;
    sbit  DATA_4_bit at PMDOUT2.B4;
    sbit  DATA_4_PMDOUT2_bit at PMDOUT2.B4;
    const register unsigned short int DATA_3 = 3;
    sbit  DATA_3_bit at PMDOUT2.B3;
    sbit  DATA_3_PMDOUT2_bit at PMDOUT2.B3;
    const register unsigned short int DATA_2 = 2;
    sbit  DATA_2_bit at PMDOUT2.B2;
    sbit  DATA_2_PMDOUT2_bit at PMDOUT2.B2;
    const register unsigned short int DATA_1 = 1;
    sbit  DATA_1_bit at PMDOUT2.B1;
    sbit  DATA_1_PMDOUT2_bit at PMDOUT2.B1;
    const register unsigned short int DATA_0 = 0;
    sbit  DATA_0_bit at PMDOUT2.B0;
    sbit  DATA_0_PMDOUT2_bit at PMDOUT2.B0;

    // PMDIN1 bits
    sbit  DATA_15_PMDIN1_bit at PMDIN1.B15;
    sbit  DATA_14_PMDIN1_bit at PMDIN1.B14;
    sbit  DATA_13_PMDIN1_bit at PMDIN1.B13;
    sbit  DATA_12_PMDIN1_bit at PMDIN1.B12;
    sbit  DATA_11_PMDIN1_bit at PMDIN1.B11;
    sbit  DATA_10_PMDIN1_bit at PMDIN1.B10;
    sbit  DATA_9_PMDIN1_bit at PMDIN1.B9;
    sbit  DATA_8_PMDIN1_bit at PMDIN1.B8;
    sbit  DATA_7_PMDIN1_bit at PMDIN1.B7;
    sbit  DATA_6_PMDIN1_bit at PMDIN1.B6;
    sbit  DATA_5_PMDIN1_bit at PMDIN1.B5;
    sbit  DATA_4_PMDIN1_bit at PMDIN1.B4;
    sbit  DATA_3_PMDIN1_bit at PMDIN1.B3;
    sbit  DATA_2_PMDIN1_bit at PMDIN1.B2;
    sbit  DATA_1_PMDIN1_bit at PMDIN1.B1;
    sbit  DATA_0_PMDIN1_bit at PMDIN1.B0;

    // PMDIN2 bits
    sbit  DATA_15_PMDIN2_bit at PMDIN2.B15;
    sbit  DATA_14_PMDIN2_bit at PMDIN2.B14;
    sbit  DATA_13_PMDIN2_bit at PMDIN2.B13;
    sbit  DATA_12_PMDIN2_bit at PMDIN2.B12;
    sbit  DATA_11_PMDIN2_bit at PMDIN2.B11;
    sbit  DATA_10_PMDIN2_bit at PMDIN2.B10;
    sbit  DATA_9_PMDIN2_bit at PMDIN2.B9;
    sbit  DATA_8_PMDIN2_bit at PMDIN2.B8;
    sbit  DATA_7_PMDIN2_bit at PMDIN2.B7;
    sbit  DATA_6_PMDIN2_bit at PMDIN2.B6;
    sbit  DATA_5_PMDIN2_bit at PMDIN2.B5;
    sbit  DATA_4_PMDIN2_bit at PMDIN2.B4;
    sbit  DATA_3_PMDIN2_bit at PMDIN2.B3;
    sbit  DATA_2_PMDIN2_bit at PMDIN2.B2;
    sbit  DATA_1_PMDIN2_bit at PMDIN2.B1;
    sbit  DATA_0_PMDIN2_bit at PMDIN2.B0;

    // PMAEN bits
    const register unsigned short int PTEN_15 = 15;
    sbit  PTEN_15_bit at PMAEN.B15;
    const register unsigned short int PTEN_14 = 14;
    sbit  PTEN_14_bit at PMAEN.B14;
    const register unsigned short int PTEN_13 = 13;
    sbit  PTEN_13_bit at PMAEN.B13;
    const register unsigned short int PTEN_12 = 12;
    sbit  PTEN_12_bit at PMAEN.B12;
    const register unsigned short int PTEN_11 = 11;
    sbit  PTEN_11_bit at PMAEN.B11;
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

    // CMSTAT bits
    const register unsigned short int CMIDL = 15;
    sbit  CMIDL_bit at CMSTAT.B15;
    const register unsigned short int C6EVT = 13;
    sbit  C6EVT_bit at CMSTAT.B13;
    const register unsigned short int C5EVT = 12;
    sbit  C5EVT_bit at CMSTAT.B12;
    const register unsigned short int C4EVT = 11;
    sbit  C4EVT_bit at CMSTAT.B11;
    const register unsigned short int C3EVT = 10;
    sbit  C3EVT_bit at CMSTAT.B10;
    const register unsigned short int C2EVT = 9;
    sbit  C2EVT_bit at CMSTAT.B9;
    const register unsigned short int C1EVT = 8;
    sbit  C1EVT_bit at CMSTAT.B8;
    const register unsigned short int C6OUT = 5;
    sbit  C6OUT_bit at CMSTAT.B5;
    const register unsigned short int C5OUT = 4;
    sbit  C5OUT_bit at CMSTAT.B4;
    const register unsigned short int C4OUT = 3;
    sbit  C4OUT_bit at CMSTAT.B3;
    const register unsigned short int C3OUT = 2;
    sbit  C3OUT_bit at CMSTAT.B2;
    const register unsigned short int C2OUT = 1;
    sbit  C2OUT_bit at CMSTAT.B1;
    const register unsigned short int C1OUT = 0;
    sbit  C1OUT_bit at CMSTAT.B0;

    // CVRCON bits
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
    const register unsigned short int EVPOL1 = 7;
    sbit  EVPOL1_bit at CM1CON.B7;
    sbit  EVPOL1_CM1CON_bit at CM1CON.B7;
    const register unsigned short int EVPOL0 = 6;
    sbit  EVPOL0_bit at CM1CON.B6;
    sbit  EVPOL0_CM1CON_bit at CM1CON.B6;
    const register unsigned short int CREF = 4;
    sbit  CREF_bit at CM1CON.B4;
    sbit  CREF_CM1CON_bit at CM1CON.B4;
    const register unsigned short int CCH1 = 1;
    sbit  CCH1_bit at CM1CON.B1;
    sbit  CCH1_CM1CON_bit at CM1CON.B1;
    const register unsigned short int CCH0 = 0;
    sbit  CCH0_bit at CM1CON.B0;
    sbit  CCH0_CM1CON_bit at CM1CON.B0;

    // CM2CON bits
    sbit  CON_CM2CON_bit at CM2CON.B15;
    sbit  COE_CM2CON_bit at CM2CON.B14;
    sbit  CPOL_CM2CON_bit at CM2CON.B13;
    sbit  CEVT_CM2CON_bit at CM2CON.B9;
    sbit  COUT_CM2CON_bit at CM2CON.B8;
    sbit  EVPOL1_CM2CON_bit at CM2CON.B7;
    sbit  EVPOL0_CM2CON_bit at CM2CON.B6;
    sbit  CREF_CM2CON_bit at CM2CON.B4;
    sbit  CCH1_CM2CON_bit at CM2CON.B1;
    sbit  CCH0_CM2CON_bit at CM2CON.B0;

    // CM3CON bits
    sbit  CON_CM3CON_bit at CM3CON.B15;
    sbit  COE_CM3CON_bit at CM3CON.B14;
    sbit  CPOL_CM3CON_bit at CM3CON.B13;
    sbit  CEVT_CM3CON_bit at CM3CON.B9;
    sbit  COUT_CM3CON_bit at CM3CON.B8;
    sbit  EVPOL1_CM3CON_bit at CM3CON.B7;
    sbit  EVPOL0_CM3CON_bit at CM3CON.B6;
    sbit  CREF_CM3CON_bit at CM3CON.B4;
    sbit  CCH1_CM3CON_bit at CM3CON.B1;
    sbit  CCH0_CM3CON_bit at CM3CON.B0;

    // CRCCON bits
    const register unsigned short int CSIDL = 13;
    sbit  CSIDL_bit at CRCCON.B13;
    const register unsigned short int VWORD_4 = 12;
    sbit  VWORD_4_bit at CRCCON.B12;
    const register unsigned short int VWORD_3 = 11;
    sbit  VWORD_3_bit at CRCCON.B11;
    const register unsigned short int VWORD_2 = 10;
    sbit  VWORD_2_bit at CRCCON.B10;
    const register unsigned short int VWORD_1 = 9;
    sbit  VWORD_1_bit at CRCCON.B9;
    const register unsigned short int VWORD_0 = 8;
    sbit  VWORD_0_bit at CRCCON.B8;
    const register unsigned short int CRCFUL = 7;
    sbit  CRCFUL_bit at CRCCON.B7;
    const register unsigned short int CRCMPT = 6;
    sbit  CRCMPT_bit at CRCCON.B6;
    const register unsigned short int CRCGO = 4;
    sbit  CRCGO_bit at CRCCON.B4;
    const register unsigned short int PLEN_3 = 3;
    sbit  PLEN_3_bit at CRCCON.B3;
    const register unsigned short int PLEN_2 = 2;
    sbit  PLEN_2_bit at CRCCON.B2;
    const register unsigned short int PLEN_1 = 1;
    sbit  PLEN_1_bit at CRCCON.B1;
    const register unsigned short int PLEN_0 = 0;
    sbit  PLEN_0_bit at CRCCON.B0;

    // CRCXOR bits
    const register unsigned short int CRCXOR_15 = 15;
    sbit  CRCXOR_15_bit at CRCXOR.B15;
    const register unsigned short int CRCXOR_14 = 14;
    sbit  CRCXOR_14_bit at CRCXOR.B14;
    const register unsigned short int CRCXOR_13 = 13;
    sbit  CRCXOR_13_bit at CRCXOR.B13;
    const register unsigned short int CRCXOR_12 = 12;
    sbit  CRCXOR_12_bit at CRCXOR.B12;
    const register unsigned short int CRCXOR_11 = 11;
    sbit  CRCXOR_11_bit at CRCXOR.B11;
    const register unsigned short int CRCXOR_10 = 10;
    sbit  CRCXOR_10_bit at CRCXOR.B10;
    const register unsigned short int CRCXOR_9 = 9;
    sbit  CRCXOR_9_bit at CRCXOR.B9;
    const register unsigned short int CRCXOR_8 = 8;
    sbit  CRCXOR_8_bit at CRCXOR.B8;
    const register unsigned short int CRCXOR_7 = 7;
    sbit  CRCXOR_7_bit at CRCXOR.B7;
    const register unsigned short int CRCXOR_6 = 6;
    sbit  CRCXOR_6_bit at CRCXOR.B6;
    const register unsigned short int CRCXOR_5 = 5;
    sbit  CRCXOR_5_bit at CRCXOR.B5;
    const register unsigned short int CRCXOR_4 = 4;
    sbit  CRCXOR_4_bit at CRCXOR.B4;
    const register unsigned short int CRCXOR_3 = 3;
    sbit  CRCXOR_3_bit at CRCXOR.B3;
    const register unsigned short int CRCXOR_2 = 2;
    sbit  CRCXOR_2_bit at CRCXOR.B2;
    const register unsigned short int CRCXOR_1 = 1;
    sbit  CRCXOR_1_bit at CRCXOR.B1;
    const register unsigned short int CRCXOR_0 = 0;
    sbit  CRCXOR_0_bit at CRCXOR.B0;

    // CRCDAT bits
    const register unsigned short int CRCDAT_15 = 15;
    sbit  CRCDAT_15_bit at CRCDAT.B15;
    const register unsigned short int CRCDAT_14 = 14;
    sbit  CRCDAT_14_bit at CRCDAT.B14;
    const register unsigned short int CRCDAT_13 = 13;
    sbit  CRCDAT_13_bit at CRCDAT.B13;
    const register unsigned short int CRCDAT_12 = 12;
    sbit  CRCDAT_12_bit at CRCDAT.B12;
    const register unsigned short int CRCDAT_11 = 11;
    sbit  CRCDAT_11_bit at CRCDAT.B11;
    const register unsigned short int CRCDAT_10 = 10;
    sbit  CRCDAT_10_bit at CRCDAT.B10;
    const register unsigned short int CRCDAT_9 = 9;
    sbit  CRCDAT_9_bit at CRCDAT.B9;
    const register unsigned short int CRCDAT_8 = 8;
    sbit  CRCDAT_8_bit at CRCDAT.B8;
    const register unsigned short int CRCDAT_7 = 7;
    sbit  CRCDAT_7_bit at CRCDAT.B7;
    const register unsigned short int CRCDAT_6 = 6;
    sbit  CRCDAT_6_bit at CRCDAT.B6;
    const register unsigned short int CRCDAT_5 = 5;
    sbit  CRCDAT_5_bit at CRCDAT.B5;
    const register unsigned short int CRCDAT_4 = 4;
    sbit  CRCDAT_4_bit at CRCDAT.B4;
    const register unsigned short int CRCDAT_3 = 3;
    sbit  CRCDAT_3_bit at CRCDAT.B3;
    const register unsigned short int CRCDAT_2 = 2;
    sbit  CRCDAT_2_bit at CRCDAT.B2;
    const register unsigned short int CRCDAT_1 = 1;
    sbit  CRCDAT_1_bit at CRCDAT.B1;
    const register unsigned short int CRCDAT_0 = 0;
    sbit  CRCDAT_0_bit at CRCDAT.B0;

    // CRCWDAT bits
    const register unsigned short int CRCWDAT_15 = 15;
    sbit  CRCWDAT_15_bit at CRCWDAT.B15;
    const register unsigned short int CRCWDAT_14 = 14;
    sbit  CRCWDAT_14_bit at CRCWDAT.B14;
    const register unsigned short int CRCWDAT_13 = 13;
    sbit  CRCWDAT_13_bit at CRCWDAT.B13;
    const register unsigned short int CRCWDAT_12 = 12;
    sbit  CRCWDAT_12_bit at CRCWDAT.B12;
    const register unsigned short int CRCWDAT_11 = 11;
    sbit  CRCWDAT_11_bit at CRCWDAT.B11;
    const register unsigned short int CRCWDAT_10 = 10;
    sbit  CRCWDAT_10_bit at CRCWDAT.B10;
    const register unsigned short int CRCWDAT_9 = 9;
    sbit  CRCWDAT_9_bit at CRCWDAT.B9;
    const register unsigned short int CRCWDAT_8 = 8;
    sbit  CRCWDAT_8_bit at CRCWDAT.B8;
    const register unsigned short int CRCWDAT_7 = 7;
    sbit  CRCWDAT_7_bit at CRCWDAT.B7;
    const register unsigned short int CRCWDAT_6 = 6;
    sbit  CRCWDAT_6_bit at CRCWDAT.B6;
    const register unsigned short int CRCWDAT_5 = 5;
    sbit  CRCWDAT_5_bit at CRCWDAT.B5;
    const register unsigned short int CRCWDAT_4 = 4;
    sbit  CRCWDAT_4_bit at CRCWDAT.B4;
    const register unsigned short int CRCWDAT_3 = 3;
    sbit  CRCWDAT_3_bit at CRCWDAT.B3;
    const register unsigned short int CRCWDAT_2 = 2;
    sbit  CRCWDAT_2_bit at CRCWDAT.B2;
    const register unsigned short int CRCWDAT_1 = 1;
    sbit  CRCWDAT_1_bit at CRCWDAT.B1;
    const register unsigned short int CRCWDAT_0 = 0;
    sbit  CRCWDAT_0_bit at CRCWDAT.B0;

    // RPINR0 bits
    const register unsigned short int INT1R_5 = 13;
    sbit  INT1R_5_bit at RPINR0.B13;
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
    const register unsigned short int INT3R_5 = 13;
    sbit  INT3R_5_bit at RPINR1.B13;
    const register unsigned short int INT3R_4 = 12;
    sbit  INT3R_4_bit at RPINR1.B12;
    const register unsigned short int INT3R_3 = 11;
    sbit  INT3R_3_bit at RPINR1.B11;
    const register unsigned short int INT3R_2 = 10;
    sbit  INT3R_2_bit at RPINR1.B10;
    const register unsigned short int INT3R_1 = 9;
    sbit  INT3R_1_bit at RPINR1.B9;
    const register unsigned short int INT3R_0 = 8;
    sbit  INT3R_0_bit at RPINR1.B8;
    const register unsigned short int INT2R_5 = 5;
    sbit  INT2R_5_bit at RPINR1.B5;
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

    // RPINR2 bits
    const register unsigned short int T1CKR_5 = 13;
    sbit  T1CKR_5_bit at RPINR2.B13;
    const register unsigned short int T1CKR_4 = 12;
    sbit  T1CKR_4_bit at RPINR2.B12;
    const register unsigned short int T1CKR_3 = 11;
    sbit  T1CKR_3_bit at RPINR2.B11;
    const register unsigned short int T1CKR_2 = 10;
    sbit  T1CKR_2_bit at RPINR2.B10;
    const register unsigned short int T1CKR_1 = 9;
    sbit  T1CKR_1_bit at RPINR2.B9;
    const register unsigned short int T1CKR_0 = 8;
    sbit  T1CKR_0_bit at RPINR2.B8;
    const register unsigned short int INT4R_5 = 5;
    sbit  INT4R_5_bit at RPINR2.B5;
    const register unsigned short int INT4R_4 = 4;
    sbit  INT4R_4_bit at RPINR2.B4;
    const register unsigned short int INT4R_3 = 3;
    sbit  INT4R_3_bit at RPINR2.B3;
    const register unsigned short int INT4R_2 = 2;
    sbit  INT4R_2_bit at RPINR2.B2;
    const register unsigned short int INT4R_1 = 1;
    sbit  INT4R_1_bit at RPINR2.B1;
    const register unsigned short int INT4R_0 = 0;
    sbit  INT4R_0_bit at RPINR2.B0;

    // RPINR3 bits
    const register unsigned short int T3CKR_5 = 13;
    sbit  T3CKR_5_bit at RPINR3.B13;
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
    const register unsigned short int T2CKR_5 = 5;
    sbit  T2CKR_5_bit at RPINR3.B5;
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
    const register unsigned short int T5CKR_5 = 13;
    sbit  T5CKR_5_bit at RPINR4.B13;
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
    const register unsigned short int T4CKR_5 = 5;
    sbit  T4CKR_5_bit at RPINR4.B5;
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
    const register unsigned short int IC2R_5 = 13;
    sbit  IC2R_5_bit at RPINR7.B13;
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
    const register unsigned short int IC1R_5 = 5;
    sbit  IC1R_5_bit at RPINR7.B5;
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
    const register unsigned short int IC4R_5 = 13;
    sbit  IC4R_5_bit at RPINR8.B13;
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
    const register unsigned short int IC3R_5 = 5;
    sbit  IC3R_5_bit at RPINR8.B5;
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
    const register unsigned short int IC6R_5 = 13;
    sbit  IC6R_5_bit at RPINR9.B13;
    const register unsigned short int IC6R_4 = 12;
    sbit  IC6R_4_bit at RPINR9.B12;
    const register unsigned short int IC6R_3 = 11;
    sbit  IC6R_3_bit at RPINR9.B11;
    const register unsigned short int IC6R_2 = 10;
    sbit  IC6R_2_bit at RPINR9.B10;
    const register unsigned short int IC6R_1 = 9;
    sbit  IC6R_1_bit at RPINR9.B9;
    const register unsigned short int IC6R_0 = 8;
    sbit  IC6R_0_bit at RPINR9.B8;
    const register unsigned short int IC5R_5 = 5;
    sbit  IC5R_5_bit at RPINR9.B5;
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

    // RPINR10 bits
    const register unsigned short int IC8R_5 = 13;
    sbit  IC8R_5_bit at RPINR10.B13;
    const register unsigned short int IC8R_4 = 12;
    sbit  IC8R_4_bit at RPINR10.B12;
    const register unsigned short int IC8R_3 = 11;
    sbit  IC8R_3_bit at RPINR10.B11;
    const register unsigned short int IC8R_2 = 10;
    sbit  IC8R_2_bit at RPINR10.B10;
    const register unsigned short int IC8R_1 = 9;
    sbit  IC8R_1_bit at RPINR10.B9;
    const register unsigned short int IC8R_0 = 8;
    sbit  IC8R_0_bit at RPINR10.B8;
    const register unsigned short int IC7R_5 = 5;
    sbit  IC7R_5_bit at RPINR10.B5;
    const register unsigned short int IC7R_4 = 4;
    sbit  IC7R_4_bit at RPINR10.B4;
    const register unsigned short int IC7R_3 = 3;
    sbit  IC7R_3_bit at RPINR10.B3;
    const register unsigned short int IC7R_2 = 2;
    sbit  IC7R_2_bit at RPINR10.B2;
    const register unsigned short int IC7R_1 = 1;
    sbit  IC7R_1_bit at RPINR10.B1;
    const register unsigned short int IC7R_0 = 0;
    sbit  IC7R_0_bit at RPINR10.B0;

    // RPINR11 bits
    const register unsigned short int OCFBR_5 = 13;
    sbit  OCFBR_5_bit at RPINR11.B13;
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
    const register unsigned short int OCFAR_5 = 5;
    sbit  OCFAR_5_bit at RPINR11.B5;
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

    // RPINR15 bits
    const register unsigned short int IC9R_5 = 13;
    sbit  IC9R_5_bit at RPINR15.B13;
    const register unsigned short int IC9R_4 = 12;
    sbit  IC9R_4_bit at RPINR15.B12;
    const register unsigned short int IC9R_3 = 11;
    sbit  IC9R_3_bit at RPINR15.B11;
    const register unsigned short int IC9R_2 = 10;
    sbit  IC9R_2_bit at RPINR15.B10;
    const register unsigned short int IC9R_1 = 9;
    sbit  IC9R_1_bit at RPINR15.B9;
    const register unsigned short int IC9R_0 = 8;
    sbit  IC9R_0_bit at RPINR15.B8;

    // RPINR17 bits
    const register unsigned short int U3RXR_5 = 13;
    sbit  U3RXR_5_bit at RPINR17.B13;
    const register unsigned short int U3RXR_4 = 12;
    sbit  U3RXR_4_bit at RPINR17.B12;
    const register unsigned short int U3RXR_3 = 11;
    sbit  U3RXR_3_bit at RPINR17.B11;
    const register unsigned short int U3RXR_2 = 10;
    sbit  U3RXR_2_bit at RPINR17.B10;
    const register unsigned short int U3RXR_1 = 9;
    sbit  U3RXR_1_bit at RPINR17.B9;
    const register unsigned short int U3RXR_0 = 8;
    sbit  U3RXR_0_bit at RPINR17.B8;

    // RPINR18 bits
    const register unsigned short int U1CTSR_5 = 13;
    sbit  U1CTSR_5_bit at RPINR18.B13;
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
    const register unsigned short int U1RXR_5 = 5;
    sbit  U1RXR_5_bit at RPINR18.B5;
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
    const register unsigned short int U2CTSR_5 = 13;
    sbit  U2CTSR_5_bit at RPINR19.B13;
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
    const register unsigned short int U2RXR_5 = 5;
    sbit  U2RXR_5_bit at RPINR19.B5;
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
    const register unsigned short int SCK1R_5 = 13;
    sbit  SCK1R_5_bit at RPINR20.B13;
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
    const register unsigned short int SDI1R_5 = 5;
    sbit  SDI1R_5_bit at RPINR20.B5;
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
    const register unsigned short int U3CTSR_5 = 13;
    sbit  U3CTSR_5_bit at RPINR21.B13;
    const register unsigned short int U3CTSR_4 = 12;
    sbit  U3CTSR_4_bit at RPINR21.B12;
    const register unsigned short int U3CTSR_3 = 11;
    sbit  U3CTSR_3_bit at RPINR21.B11;
    const register unsigned short int U3CTSR_2 = 10;
    sbit  U3CTSR_2_bit at RPINR21.B10;
    const register unsigned short int U3CTSR_1 = 9;
    sbit  U3CTSR_1_bit at RPINR21.B9;
    const register unsigned short int U3CTSR_0 = 8;
    sbit  U3CTSR_0_bit at RPINR21.B8;
    const register unsigned short int SS1R_5 = 5;
    sbit  SS1R_5_bit at RPINR21.B5;
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
    const register unsigned short int SCK2R_5 = 13;
    sbit  SCK2R_5_bit at RPINR22.B13;
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
    const register unsigned short int SDI2R_5 = 5;
    sbit  SDI2R_5_bit at RPINR22.B5;
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
    const register unsigned short int SS2R_5 = 5;
    sbit  SS2R_5_bit at RPINR23.B5;
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

    // RPINR27 bits
    const register unsigned short int U4CTSR_5 = 13;
    sbit  U4CTSR_5_bit at RPINR27.B13;
    const register unsigned short int U4CTSR_4 = 12;
    sbit  U4CTSR_4_bit at RPINR27.B12;
    const register unsigned short int U4CTSR_3 = 11;
    sbit  U4CTSR_3_bit at RPINR27.B11;
    const register unsigned short int U4CTSR_2 = 10;
    sbit  U4CTSR_2_bit at RPINR27.B10;
    const register unsigned short int U4CTSR_1 = 9;
    sbit  U4CTSR_1_bit at RPINR27.B9;
    const register unsigned short int U4CTSR_0 = 8;
    sbit  U4CTSR_0_bit at RPINR27.B8;
    const register unsigned short int U4RXR_5 = 5;
    sbit  U4RXR_5_bit at RPINR27.B5;
    const register unsigned short int U4RXR_4 = 4;
    sbit  U4RXR_4_bit at RPINR27.B4;
    const register unsigned short int U4RXR_3 = 3;
    sbit  U4RXR_3_bit at RPINR27.B3;
    const register unsigned short int U4RXR_2 = 2;
    sbit  U4RXR_2_bit at RPINR27.B2;
    const register unsigned short int U4RXR_1 = 1;
    sbit  U4RXR_1_bit at RPINR27.B1;
    const register unsigned short int U4RXR_0 = 0;
    sbit  U4RXR_0_bit at RPINR27.B0;

    // RPINR28 bits
    const register unsigned short int SCK3R_5 = 13;
    sbit  SCK3R_5_bit at RPINR28.B13;
    const register unsigned short int SCK3R_4 = 12;
    sbit  SCK3R_4_bit at RPINR28.B12;
    const register unsigned short int SCK3R_3 = 11;
    sbit  SCK3R_3_bit at RPINR28.B11;
    const register unsigned short int SCK3R_2 = 10;
    sbit  SCK3R_2_bit at RPINR28.B10;
    const register unsigned short int SCK3R_1 = 9;
    sbit  SCK3R_1_bit at RPINR28.B9;
    const register unsigned short int SCK3R_0 = 8;
    sbit  SCK3R_0_bit at RPINR28.B8;
    const register unsigned short int SDI3R_5 = 5;
    sbit  SDI3R_5_bit at RPINR28.B5;
    const register unsigned short int SDI3R_4 = 4;
    sbit  SDI3R_4_bit at RPINR28.B4;
    const register unsigned short int SDI3R_3 = 3;
    sbit  SDI3R_3_bit at RPINR28.B3;
    const register unsigned short int SDI3R_2 = 2;
    sbit  SDI3R_2_bit at RPINR28.B2;
    const register unsigned short int SDI3R_1 = 1;
    sbit  SDI3R_1_bit at RPINR28.B1;
    const register unsigned short int SDI3R_0 = 0;
    sbit  SDI3R_0_bit at RPINR28.B0;

    // RPINR29 bits
    const register unsigned short int SS3R_5 = 5;
    sbit  SS3R_5_bit at RPINR29.B5;
    const register unsigned short int SS3R_4 = 4;
    sbit  SS3R_4_bit at RPINR29.B4;
    const register unsigned short int SS3R_3 = 3;
    sbit  SS3R_3_bit at RPINR29.B3;
    const register unsigned short int SS3R_2 = 2;
    sbit  SS3R_2_bit at RPINR29.B2;
    const register unsigned short int SS3R_1 = 1;
    sbit  SS3R_1_bit at RPINR29.B1;
    const register unsigned short int SS3R_0 = 0;
    sbit  SS3R_0_bit at RPINR29.B0;

    // RPOR0 bits
    const register unsigned short int RP1R_5 = 13;
    sbit  RP1R_5_bit at RPOR0.B13;
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
    const register unsigned short int RP0R_5 = 5;
    sbit  RP0R_5_bit at RPOR0.B5;
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
    const register unsigned short int RP3R_5 = 13;
    sbit  RP3R_5_bit at RPOR1.B13;
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
    const register unsigned short int RP2R_5 = 5;
    sbit  RP2R_5_bit at RPOR1.B5;
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
    const register unsigned short int RP5R_5 = 13;
    sbit  RP5R_5_bit at RPOR2.B13;
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
    const register unsigned short int RP4R_5 = 5;
    sbit  RP4R_5_bit at RPOR2.B5;
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
    const register unsigned short int RP7R_5 = 13;
    sbit  RP7R_5_bit at RPOR3.B13;
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
    const register unsigned short int RP6R_5 = 5;
    sbit  RP6R_5_bit at RPOR3.B5;
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
    const register unsigned short int RP9R_5 = 13;
    sbit  RP9R_5_bit at RPOR4.B13;
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
    const register unsigned short int RP8R_5 = 5;
    sbit  RP8R_5_bit at RPOR4.B5;
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
    const register unsigned short int RP11R_5 = 13;
    sbit  RP11R_5_bit at RPOR5.B13;
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
    const register unsigned short int RP10R_5 = 5;
    sbit  RP10R_5_bit at RPOR5.B5;
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
    const register unsigned short int RP13R_5 = 13;
    sbit  RP13R_5_bit at RPOR6.B13;
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
    const register unsigned short int RP12R_5 = 5;
    sbit  RP12R_5_bit at RPOR6.B5;
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
    const register unsigned short int RP15R_5 = 13;
    sbit  RP15R_5_bit at RPOR7.B13;
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
    const register unsigned short int RP14R_5 = 5;
    sbit  RP14R_5_bit at RPOR7.B5;
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

    // RPOR8 bits
    const register unsigned short int RP17R_5 = 13;
    sbit  RP17R_5_bit at RPOR8.B13;
    const register unsigned short int RP17R_4 = 12;
    sbit  RP17R_4_bit at RPOR8.B12;
    const register unsigned short int RP17R_3 = 11;
    sbit  RP17R_3_bit at RPOR8.B11;
    const register unsigned short int RP17R_2 = 10;
    sbit  RP17R_2_bit at RPOR8.B10;
    const register unsigned short int RP17R_1 = 9;
    sbit  RP17R_1_bit at RPOR8.B9;
    const register unsigned short int RP17R_0 = 8;
    sbit  RP17R_0_bit at RPOR8.B8;
    const register unsigned short int RP16R_5 = 5;
    sbit  RP16R_5_bit at RPOR8.B5;
    const register unsigned short int RP16R_4 = 4;
    sbit  RP16R_4_bit at RPOR8.B4;
    const register unsigned short int RP16R_3 = 3;
    sbit  RP16R_3_bit at RPOR8.B3;
    const register unsigned short int RP16R_2 = 2;
    sbit  RP16R_2_bit at RPOR8.B2;
    const register unsigned short int RP16R_1 = 1;
    sbit  RP16R_1_bit at RPOR8.B1;
    const register unsigned short int RP16R_0 = 0;
    sbit  RP16R_0_bit at RPOR8.B0;

    // RPOR9 bits
    const register unsigned short int RP19R_5 = 13;
    sbit  RP19R_5_bit at RPOR9.B13;
    const register unsigned short int RP19R_4 = 12;
    sbit  RP19R_4_bit at RPOR9.B12;
    const register unsigned short int RP19R_3 = 11;
    sbit  RP19R_3_bit at RPOR9.B11;
    const register unsigned short int RP19R_2 = 10;
    sbit  RP19R_2_bit at RPOR9.B10;
    const register unsigned short int RP19R_1 = 9;
    sbit  RP19R_1_bit at RPOR9.B9;
    const register unsigned short int RP19R_0 = 8;
    sbit  RP19R_0_bit at RPOR9.B8;
    const register unsigned short int RP18R_5 = 5;
    sbit  RP18R_5_bit at RPOR9.B5;
    const register unsigned short int RP18R_4 = 4;
    sbit  RP18R_4_bit at RPOR9.B4;
    const register unsigned short int RP18R_3 = 3;
    sbit  RP18R_3_bit at RPOR9.B3;
    const register unsigned short int RP18R_2 = 2;
    sbit  RP18R_2_bit at RPOR9.B2;
    const register unsigned short int RP18R_1 = 1;
    sbit  RP18R_1_bit at RPOR9.B1;
    const register unsigned short int RP18R_0 = 0;
    sbit  RP18R_0_bit at RPOR9.B0;

    // RPOR10 bits
    const register unsigned short int RP21R_5 = 13;
    sbit  RP21R_5_bit at RPOR10.B13;
    const register unsigned short int RP21R_4 = 12;
    sbit  RP21R_4_bit at RPOR10.B12;
    const register unsigned short int RP21R_3 = 11;
    sbit  RP21R_3_bit at RPOR10.B11;
    const register unsigned short int RP21R_2 = 10;
    sbit  RP21R_2_bit at RPOR10.B10;
    const register unsigned short int RP21R_1 = 9;
    sbit  RP21R_1_bit at RPOR10.B9;
    const register unsigned short int RP21R_0 = 8;
    sbit  RP21R_0_bit at RPOR10.B8;
    const register unsigned short int RP20R_5 = 5;
    sbit  RP20R_5_bit at RPOR10.B5;
    const register unsigned short int RP20R_4 = 4;
    sbit  RP20R_4_bit at RPOR10.B4;
    const register unsigned short int RP20R_3 = 3;
    sbit  RP20R_3_bit at RPOR10.B3;
    const register unsigned short int RP20R_2 = 2;
    sbit  RP20R_2_bit at RPOR10.B2;
    const register unsigned short int RP20R_1 = 1;
    sbit  RP20R_1_bit at RPOR10.B1;
    const register unsigned short int RP20R_0 = 0;
    sbit  RP20R_0_bit at RPOR10.B0;

    // RPOR11 bits
    const register unsigned short int RP23R_5 = 13;
    sbit  RP23R_5_bit at RPOR11.B13;
    const register unsigned short int RP23R_4 = 12;
    sbit  RP23R_4_bit at RPOR11.B12;
    const register unsigned short int RP23R_3 = 11;
    sbit  RP23R_3_bit at RPOR11.B11;
    const register unsigned short int RP23R_2 = 10;
    sbit  RP23R_2_bit at RPOR11.B10;
    const register unsigned short int RP23R_1 = 9;
    sbit  RP23R_1_bit at RPOR11.B9;
    const register unsigned short int RP23R_0 = 8;
    sbit  RP23R_0_bit at RPOR11.B8;
    const register unsigned short int RP22R_5 = 5;
    sbit  RP22R_5_bit at RPOR11.B5;
    const register unsigned short int RP22R_4 = 4;
    sbit  RP22R_4_bit at RPOR11.B4;
    const register unsigned short int RP22R_3 = 3;
    sbit  RP22R_3_bit at RPOR11.B3;
    const register unsigned short int RP22R_2 = 2;
    sbit  RP22R_2_bit at RPOR11.B2;
    const register unsigned short int RP22R_1 = 1;
    sbit  RP22R_1_bit at RPOR11.B1;
    const register unsigned short int RP22R_0 = 0;
    sbit  RP22R_0_bit at RPOR11.B0;

    // RPOR12 bits
    const register unsigned short int RP25R_5 = 13;
    sbit  RP25R_5_bit at RPOR12.B13;
    const register unsigned short int RP25R_4 = 12;
    sbit  RP25R_4_bit at RPOR12.B12;
    const register unsigned short int RP25R_3 = 11;
    sbit  RP25R_3_bit at RPOR12.B11;
    const register unsigned short int RP25R_2 = 10;
    sbit  RP25R_2_bit at RPOR12.B10;
    const register unsigned short int RP25R_1 = 9;
    sbit  RP25R_1_bit at RPOR12.B9;
    const register unsigned short int RP25R_0 = 8;
    sbit  RP25R_0_bit at RPOR12.B8;
    const register unsigned short int RP24R_5 = 5;
    sbit  RP24R_5_bit at RPOR12.B5;
    const register unsigned short int RP24R_4 = 4;
    sbit  RP24R_4_bit at RPOR12.B4;
    const register unsigned short int RP24R_3 = 3;
    sbit  RP24R_3_bit at RPOR12.B3;
    const register unsigned short int RP24R_2 = 2;
    sbit  RP24R_2_bit at RPOR12.B2;
    const register unsigned short int RP24R_1 = 1;
    sbit  RP24R_1_bit at RPOR12.B1;
    const register unsigned short int RP24R_0 = 0;
    sbit  RP24R_0_bit at RPOR12.B0;

    // RPOR13 bits
    const register unsigned short int RP27R_5 = 13;
    sbit  RP27R_5_bit at RPOR13.B13;
    const register unsigned short int RP27R_4 = 12;
    sbit  RP27R_4_bit at RPOR13.B12;
    const register unsigned short int RP27R_3 = 11;
    sbit  RP27R_3_bit at RPOR13.B11;
    const register unsigned short int RP27R_2 = 10;
    sbit  RP27R_2_bit at RPOR13.B10;
    const register unsigned short int RP27R_1 = 9;
    sbit  RP27R_1_bit at RPOR13.B9;
    const register unsigned short int RP27R_0 = 8;
    sbit  RP27R_0_bit at RPOR13.B8;
    const register unsigned short int RP26R_5 = 5;
    sbit  RP26R_5_bit at RPOR13.B5;
    const register unsigned short int RP26R_4 = 4;
    sbit  RP26R_4_bit at RPOR13.B4;
    const register unsigned short int RP26R_3 = 3;
    sbit  RP26R_3_bit at RPOR13.B3;
    const register unsigned short int RP26R_2 = 2;
    sbit  RP26R_2_bit at RPOR13.B2;
    const register unsigned short int RP26R_1 = 1;
    sbit  RP26R_1_bit at RPOR13.B1;
    const register unsigned short int RP26R_0 = 0;
    sbit  RP26R_0_bit at RPOR13.B0;

    // RPOR14 bits
    const register unsigned short int RP29R_5 = 13;
    sbit  RP29R_5_bit at RPOR14.B13;
    const register unsigned short int RP29R_4 = 12;
    sbit  RP29R_4_bit at RPOR14.B12;
    const register unsigned short int RP29R_3 = 11;
    sbit  RP29R_3_bit at RPOR14.B11;
    const register unsigned short int RP29R_2 = 10;
    sbit  RP29R_2_bit at RPOR14.B10;
    const register unsigned short int RP29R_1 = 9;
    sbit  RP29R_1_bit at RPOR14.B9;
    const register unsigned short int RP29R_0 = 8;
    sbit  RP29R_0_bit at RPOR14.B8;
    const register unsigned short int RP28R_5 = 5;
    sbit  RP28R_5_bit at RPOR14.B5;
    const register unsigned short int RP28R_4 = 4;
    sbit  RP28R_4_bit at RPOR14.B4;
    const register unsigned short int RP28R_3 = 3;
    sbit  RP28R_3_bit at RPOR14.B3;
    const register unsigned short int RP28R_2 = 2;
    sbit  RP28R_2_bit at RPOR14.B2;
    const register unsigned short int RP28R_1 = 1;
    sbit  RP28R_1_bit at RPOR14.B1;
    const register unsigned short int RP28R_0 = 0;
    sbit  RP28R_0_bit at RPOR14.B0;

    // RPOR15 bits
    const register unsigned short int RP30R_5 = 5;
    sbit  RP30R_5_bit at RPOR15.B5;
    const register unsigned short int RP30R_4 = 4;
    sbit  RP30R_4_bit at RPOR15.B4;
    const register unsigned short int RP30R_3 = 3;
    sbit  RP30R_3_bit at RPOR15.B3;
    const register unsigned short int RP30R_2 = 2;
    sbit  RP30R_2_bit at RPOR15.B2;
    const register unsigned short int RP30R_1 = 1;
    sbit  RP30R_1_bit at RPOR15.B1;
    const register unsigned short int RP30R_0 = 0;
    sbit  RP30R_0_bit at RPOR15.B0;

    // RCON bits
    const register unsigned short int TRAPR = 15;
    sbit  TRAPR_bit at RCON.B15;
    const register unsigned short int IOPUWR = 14;
    sbit  IOPUWR_bit at RCON.B14;
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
    const register unsigned short int CPDIV_1 = 7;
    sbit  CPDIV_1_bit at CLKDIV.B7;
    const register unsigned short int CPDIV_0 = 6;
    sbit  CPDIV_0_bit at CLKDIV.B6;

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
    const register unsigned short int IC8MD = 15;
    sbit  IC8MD_bit at PMD2.B15;
    const register unsigned short int IC7MD = 14;
    sbit  IC7MD_bit at PMD2.B14;
    const register unsigned short int IC6MD = 13;
    sbit  IC6MD_bit at PMD2.B13;
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
    const register unsigned short int OC8MD = 7;
    sbit  OC8MD_bit at PMD2.B7;
    const register unsigned short int OC7MD = 6;
    sbit  OC7MD_bit at PMD2.B6;
    const register unsigned short int OC6MD = 5;
    sbit  OC6MD_bit at PMD2.B5;
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
    const register unsigned short int U3MD = 3;
    sbit  U3MD_bit at PMD3.B3;
    const register unsigned short int I2C3MD = 2;
    sbit  I2C3MD_bit at PMD3.B2;
    const register unsigned short int I2CMD = 1;
    sbit  I2CMD_bit at PMD3.B1;

    // PMD4 bits
    const register unsigned short int UPWMMD = 6;
    sbit  UPWMMD_bit at PMD4.B6;
    const register unsigned short int U4MD = 5;
    sbit  U4MD_bit at PMD4.B5;
    const register unsigned short int REFOMD = 3;
    sbit  REFOMD_bit at PMD4.B3;
    const register unsigned short int CTMUMD = 2;
    sbit  CTMUMD_bit at PMD4.B2;
    const register unsigned short int LVDMD = 1;
    sbit  LVDMD_bit at PMD4.B1;
    const register unsigned short int USB1MD = 0;
    sbit  USB1MD_bit at PMD4.B0;

    // PMD5 bits
    const register unsigned short int IC9MD = 8;
    sbit  IC9MD_bit at PMD5.B8;
    const register unsigned short int OC9MD = 0;
    sbit  OC9MD_bit at PMD5.B0;

    // PMD6 bits
    const register unsigned short int SPI3MD = 0;
    sbit  SPI3MD_bit at PMD6.B0;

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

// backward compatibility for CNPD1BITS
    typedef struct tagCNPD1BITS {
      unsigned CN0PDE:1;
      unsigned CN1PDE:1;
      unsigned CN2PDE:1;
      unsigned CN3PDE:1;
      unsigned CN4PDE:1;
      unsigned CN5PDE:1;
      unsigned CN6PDE:1;
      unsigned CN7PDE:1;
      unsigned CN8PDE:1;
      unsigned CN9PDE:1;
      unsigned CN10PDE:1;
      unsigned CN11PDE:1;
      unsigned CN12PDE:1;
      unsigned CN13PDE:1;
      unsigned CN14PDE:1;
      unsigned CN15PDE:1;
} typeCNPD1BITS;
sfr volatile typeCNPD1BITS CNPD1bits absolute 0x054;

// backward compatibility for CNPD2BITS
    typedef struct tagCNPD2BITS {
      unsigned CN16PDE:1;
      unsigned CN17PDE:1;
      unsigned CN18PDE:1;
      unsigned CN19PDE:1;
      unsigned CN20PDE:1;
      unsigned CN21PDE:1;
      unsigned CN22PDE:1;
      unsigned CN23PDE:1;
      unsigned CN24PDE:1;
      unsigned CN25PDE:1;
      unsigned CN26PDE:1;
      unsigned CN27PDE:1;
      unsigned CN28PDE:1;
      unsigned CN29PDE:1;
      unsigned CN30PDE:1;
      unsigned CN31PDE:1;
} typeCNPD2BITS;
sfr volatile typeCNPD2BITS CNPD2bits absolute 0x056;

// backward compatibility for CNPD3BITS
    typedef struct tagCNPD3BITS {
      unsigned CN32PDE:1;
      unsigned :8;
      unsigned CN41PDE:1;
      unsigned CN42PDE:1;
      unsigned CN43PDE:1;
      unsigned CN44PDE:1;
      unsigned CN45PDE:1;
      unsigned :1;
      unsigned CN47PDE:1;
} typeCNPD3BITS;
sfr volatile typeCNPD3BITS CNPD3bits absolute 0x058;

// backward compatibility for CNPD4BITS
    typedef struct tagCNPD4BITS {
      unsigned :1;
      unsigned CN49PDE:1;
      unsigned CN50PDE:1;
      unsigned CN51PDE:1;
      unsigned CN52PDE:1;
      unsigned CN53PDE:1;
      unsigned CN54PDE:1;
      unsigned CN55PDE:1;
      unsigned CN56PDE:1;
      unsigned CN57PDE:1;
      unsigned CN58PDE:1;
      unsigned CN59PDE:1;
      unsigned CN60PDE:1;
      unsigned CN61PDE:1;
      unsigned CN62PDE:1;
      unsigned CN63PDE:1;
} typeCNPD4BITS;
sfr volatile typeCNPD4BITS CNPD4bits absolute 0x05A;

// backward compatibility for CNPD5BITS
    typedef struct tagCNPD5BITS {
      unsigned CN64PDE:1;
      unsigned CN65PDE:1;
      unsigned CN66PDE:1;
      unsigned CN67PDE:1;
      unsigned CN68PDE:1;
      unsigned CN69PDE:1;
      unsigned CN70PDE:1;
      unsigned CN71PDE:1;
      unsigned :2;
      unsigned CN74PDE:1;
      unsigned :2;
      unsigned CN77PDE:1;
      unsigned CN78PDE:1;
} typeCNPD5BITS;
sfr volatile typeCNPD5BITS CNPD5bits absolute 0x05C;

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
      unsigned CN8IE:1;
      unsigned CN9IE:1;
      unsigned CN10IE:1;
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
      unsigned CN17IE:1;
      unsigned CN18IE:1;
      unsigned CN19IE:1;
      unsigned CN20IE:1;
      unsigned CN21IE:1;
      unsigned CN22IE:1;
      unsigned CN23IE:1;
      unsigned CN24IE:1;
      unsigned CN25IE:1;
      unsigned CN26IE:1;
      unsigned CN27IE:1;
      unsigned CN28IE:1;
      unsigned CN29IE:1;
      unsigned CN30IE:1;
      unsigned CN31IE:1;
} typeCNEN2BITS;
sfr volatile typeCNEN2BITS CNEN2bits absolute 0x062;

// backward compatibility for CNEN3BITS
    typedef struct tagCNEN3BITS {
      unsigned CN32IE:1;
      unsigned :8;
      unsigned CN41IE:1;
      unsigned CN42IE:1;
      unsigned CN43IE:1;
      unsigned CN44IE:1;
      unsigned CN45IE:1;
      unsigned :1;
      unsigned CN47IE:1;
} typeCNEN3BITS;
sfr volatile typeCNEN3BITS CNEN3bits absolute 0x064;

// backward compatibility for CNEN4BITS
    typedef struct tagCNEN4BITS {
      unsigned :1;
      unsigned CN49IE:1;
      unsigned CN50IE:1;
      unsigned CN51IE:1;
      unsigned CN52IE:1;
      unsigned CN53IE:1;
      unsigned CN54IE:1;
      unsigned CN55IE:1;
      unsigned CN56IE:1;
      unsigned CN57IE:1;
      unsigned CN58IE:1;
      unsigned CN59IE:1;
      unsigned CN60IE:1;
      unsigned CN61IE:1;
      unsigned CN62IE:1;
      unsigned CN63IE:1;
} typeCNEN4BITS;
sfr volatile typeCNEN4BITS CNEN4bits absolute 0x066;

// backward compatibility for CNEN5BITS
    typedef struct tagCNEN5BITS {
      unsigned CN64IE:1;
      unsigned CN65IE:1;
      unsigned CN66IE:1;
      unsigned CN67IE:1;
      unsigned CN68IE:1;
      unsigned CN69IE:1;
      unsigned CN70IE:1;
      unsigned CN71IE:1;
      unsigned :2;
      unsigned CN74IE:1;
      unsigned :2;
      unsigned CN77IE:1;
      unsigned CN78IE:1;
} typeCNEN5BITS;
sfr volatile typeCNEN5BITS CNEN5bits absolute 0x068;

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
      unsigned CN8PUE:1;
      unsigned CN9PUE:1;
      unsigned CN10PUE:1;
      unsigned CN11PUE:1;
      unsigned CN12PUE:1;
      unsigned CN13PUE:1;
      unsigned CN14PUE:1;
      unsigned CN15PUE:1;
} typeCNPU1BITS;
sfr volatile typeCNPU1BITS CNPU1bits absolute 0x06C;

// backward compatibility for CNPU2BITS
    typedef struct tagCNPU2BITS {
      unsigned CN16PUE:1;
      unsigned CN17PUE:1;
      unsigned CN18PUE:1;
      unsigned CN19PUE:1;
      unsigned CN20PUE:1;
      unsigned CN21PUE:1;
      unsigned CN22PUE:1;
      unsigned CN23PUE:1;
      unsigned CN24PUE:1;
      unsigned CN25PUE:1;
      unsigned CN26PUE:1;
      unsigned CN27PUE:1;
      unsigned CN28PUE:1;
      unsigned CN29PUE:1;
      unsigned CN30PUE:1;
      unsigned CN31PUE:1;
} typeCNPU2BITS;
sfr volatile typeCNPU2BITS CNPU2bits absolute 0x06E;

// backward compatibility for CNPU3BITS
    typedef struct tagCNPU3BITS {
      unsigned CN32PUE:1;
      unsigned :8;
      unsigned CN41PUE:1;
      unsigned CN42PUE:1;
      unsigned CN43PUE:1;
      unsigned CN44PUE:1;
      unsigned CN45PUE:1;
      unsigned :1;
      unsigned CN47PUE:1;
} typeCNPU3BITS;
sfr volatile typeCNPU3BITS CNPU3bits absolute 0x070;

// backward compatibility for CNPU4BITS
    typedef struct tagCNPU4BITS {
      unsigned :1;
      unsigned CN49PUE:1;
      unsigned CN50PUE:1;
      unsigned CN51PUE:1;
      unsigned CN52PUE:1;
      unsigned CN53PUE:1;
      unsigned CN54PUE:1;
      unsigned CN55PUE:1;
      unsigned CN56PUE:1;
      unsigned CN57PUE:1;
      unsigned CN58PUE:1;
      unsigned CN59PUE:1;
      unsigned CN60PUE:1;
      unsigned CN61PUE:1;
      unsigned CN62PUE:1;
      unsigned CN63PUE:1;
} typeCNPU4BITS;
sfr volatile typeCNPU4BITS CNPU4bits absolute 0x072;

// backward compatibility for CNPU5BITS
    typedef struct tagCNPU5BITS {
      unsigned CN64PUE:1;
      unsigned CN65PUE:1;
      unsigned CN66PUE:1;
      unsigned CN67PUE:1;
      unsigned CN68PUE:1;
      unsigned CN69PUE:1;
      unsigned CN70PUE:1;
      unsigned CN71PUE:1;
      unsigned :2;
      unsigned CN74PUE:1;
      unsigned :2;
      unsigned CN77PUE:1;
      unsigned CN78PUE:1;
} typeCNPU5BITS;
sfr volatile typeCNPU5BITS CNPU5bits absolute 0x074;

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
      unsigned INT3EP:1;
      unsigned INT4EP:1;
      unsigned :9;
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
      unsigned :1;
      unsigned IC7IF:1;
      unsigned IC8IF:1;
      unsigned :1;
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
      unsigned IC6IF:1;
      unsigned OC5IF:1;
      unsigned OC6IF:1;
      unsigned OC7IF:1;
      unsigned OC8IF:1;
      unsigned PMPIF:1;
} typeIFS2BITS;
sfr volatile typeIFS2BITS IFS2bits absolute 0x088;

// backward compatibility for IFS3BITS
    typedef struct tagIFS3BITS {
      unsigned :1;
      unsigned SI2C2IF:1;
      unsigned MI2C2IF:1;
      unsigned :2;
      unsigned INT3IF:1;
      unsigned INT4IF:1;
      unsigned :7;
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

// backward compatibility for IFS5BITS
    typedef struct tagIFS5BITS {
      unsigned :1;
      unsigned U3ERIF:1;
      unsigned U3RXIF:1;
      unsigned U3TXIF:1;
      unsigned SI2C3IF:1;
      unsigned MI2C3IF:1;
      unsigned USB1IF:1;
      unsigned U4ERIF:1;
      unsigned U4RXIF:1;
      unsigned U4TXIF:1;
      unsigned SPF3IF:1;
      unsigned SPI3IF:1;
      unsigned OC9IF:1;
      unsigned IC9IF:1;
} typeIFS5BITS;
sfr volatile typeIFS5BITS IFS5bits absolute 0x08E;

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
      unsigned :1;
      unsigned IC7IE:1;
      unsigned IC8IE:1;
      unsigned :1;
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
      unsigned IC6IE:1;
      unsigned OC5IE:1;
      unsigned OC6IE:1;
      unsigned OC7IE:1;
      unsigned OC8IE:1;
      unsigned PMPIE:1;
} typeIEC2BITS;
sfr volatile typeIEC2BITS IEC2bits absolute 0x098;

// backward compatibility for IEC3BITS
    typedef struct tagIEC3BITS {
      unsigned :1;
      unsigned SI2C2IE:1;
      unsigned MI2C2IE:1;
      unsigned :2;
      unsigned INT3IE:1;
      unsigned INT4IE:1;
      unsigned :7;
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

// backward compatibility for IEC5BITS
    typedef struct tagIEC5BITS {
      unsigned :1;
      unsigned U3ERIE:1;
      unsigned U3RXIE:1;
      unsigned U3TXIE:1;
      unsigned SI2C3IE:1;
      unsigned MI2C3IE:1;
      unsigned USB1IE:1;
      unsigned U4ERIE:1;
      unsigned U4RXIE:1;
      unsigned U4TXIE:1;
      unsigned SPF3IE:1;
      unsigned SPI3IE:1;
      unsigned OC9IE:1;
      unsigned IC9IE:1;
} typeIEC5BITS;
sfr volatile typeIEC5BITS IEC5bits absolute 0x09E;

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
          unsigned SI2C1IP:3;
          unsigned :1;
          unsigned MI2C1IP:3;
        };
        struct {
          unsigned SI2C1IP0:1;
          unsigned SI2C1IP1:1;
          unsigned SI2C1IP2:1;
          unsigned :1;
          unsigned MI2C1IP0:1;
          unsigned MI2C1IP1:1;
          unsigned MI2C1IP2:1;
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
          unsigned SI2C1P0:1;
          unsigned SI2C1P1:1;
          unsigned SI2C1P2:1;
          unsigned :1;
          unsigned MI2C1P0:1;
          unsigned MI2C1P1:1;
          unsigned MI2C1P2:1;
        };
      };
} typeIPC4BITS;
sfr volatile typeIPC4BITS IPC4bits absolute 0x0AC;

// backward compatibility for IPC5BITS
    typedef struct tagIPC5BITS {
      union {
        struct {
          unsigned INT1IP:3;
          unsigned :5;
          unsigned IC7IP:3;
          unsigned :1;
          unsigned IC8IP:3;
        };
        struct {
          unsigned INT1IP0:1;
          unsigned INT1IP1:1;
          unsigned INT1IP2:1;
          unsigned :5;
          unsigned IC7IP0:1;
          unsigned IC7IP1:1;
          unsigned IC7IP2:1;
          unsigned :1;
          unsigned IC8IP0:1;
          unsigned IC8IP1:1;
          unsigned IC8IP2:1;
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
          unsigned IC6IP:3;
          unsigned :1;
          unsigned OC5IP:3;
          unsigned :1;
          unsigned OC6IP:3;
          unsigned :1;
          unsigned OC7IP:3;
        };
        struct {
          unsigned IC6IP0:1;
          unsigned IC6IP1:1;
          unsigned IC6IP2:1;
          unsigned :1;
          unsigned OC5IP0:1;
          unsigned OC5IP1:1;
          unsigned OC5IP2:1;
          unsigned :1;
          unsigned OC6IP0:1;
          unsigned OC6IP1:1;
          unsigned OC6IP2:1;
          unsigned :1;
          unsigned OC7IP0:1;
          unsigned OC7IP1:1;
          unsigned OC7IP2:1;
        };
      };
} typeIPC10BITS;
sfr volatile typeIPC10BITS IPC10bits absolute 0x0B8;

// backward compatibility for IPC11BITS
    typedef struct tagIPC11BITS {
      union {
        struct {
          unsigned OC8IP:3;
          unsigned :1;
          unsigned PMPIP:3;
        };
        struct {
          unsigned OC8IP0:1;
          unsigned OC8IP1:1;
          unsigned OC8IP2:1;
          unsigned :1;
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

// backward compatibility for IPC13BITS
    typedef struct tagIPC13BITS {
      union {
        struct {
          unsigned :4;
          unsigned INT3IP:3;
          unsigned :1;
          unsigned INT4IP:3;
        };
        struct {
          unsigned :4;
          unsigned INT3IP0:1;
          unsigned INT3IP1:1;
          unsigned INT3IP2:1;
          unsigned :1;
          unsigned INT4IP0:1;
          unsigned INT4IP1:1;
          unsigned INT4IP2:1;
        };
      };
} typeIPC13BITS;
sfr volatile typeIPC13BITS IPC13bits absolute 0x0BE;

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

// backward compatibility for IPC20BITS
    typedef struct tagIPC20BITS {
      union {
        struct {
          unsigned :4;
          unsigned U3ERIP:3;
          unsigned :1;
          unsigned U3RXIP:3;
          unsigned :1;
          unsigned U3TXIP:3;
        };
        struct {
          unsigned :4;
          unsigned U3ERIP0:1;
          unsigned U3ERIP1:1;
          unsigned U3ERIP2:1;
          unsigned :1;
          unsigned U3RXIP0:1;
          unsigned U3RXIP1:1;
          unsigned U3RXIP2:1;
          unsigned :1;
          unsigned U3TXIP0:1;
          unsigned U3TXIP1:1;
          unsigned U3TXIP2:1;
        };
      };
} typeIPC20BITS;
sfr volatile typeIPC20BITS IPC20bits absolute 0x0CC;

// backward compatibility for IPC21BITS
    typedef struct tagIPC21BITS {
      union {
        struct {
          unsigned SI2C3P:3;
          unsigned :1;
          unsigned MI2C3P:3;
          unsigned :1;
          unsigned USB1IP:3;
          unsigned :1;
          unsigned U4ERIP:3;
        };
        struct {
          unsigned SI2C3P0:1;
          unsigned SI2C3P1:1;
          unsigned SI2C3P2:1;
          unsigned :1;
          unsigned MI2C3P0:1;
          unsigned MI2C3P1:1;
          unsigned MI2C3P2:1;
          unsigned :1;
          unsigned USB1IP0:1;
          unsigned USB1IP1:1;
          unsigned USB1IP2:1;
          unsigned :1;
          unsigned U4ERIP0:1;
          unsigned U4ERIP1:1;
          unsigned U4ERIP2:1;
        };
      };
} typeIPC21BITS;
sfr volatile typeIPC21BITS IPC21bits absolute 0x0CE;

// backward compatibility for IPC22BITS
    typedef struct tagIPC22BITS {
      union {
        struct {
          unsigned U4RXIP:3;
          unsigned :1;
          unsigned U4TXIP:3;
          unsigned :1;
          unsigned SPF3IP:3;
          unsigned :1;
          unsigned SPI3IP:3;
        };
        struct {
          unsigned U4RXIP0:1;
          unsigned U4RXIP1:1;
          unsigned U4RXIP2:1;
          unsigned :1;
          unsigned U4TXIP0:1;
          unsigned U4TXIP1:1;
          unsigned U4TXIP2:1;
          unsigned :1;
          unsigned SPF3IP0:1;
          unsigned SPF3IP1:1;
          unsigned SPF3IP2:1;
          unsigned :1;
          unsigned SPI3IP0:1;
          unsigned SPI3IP1:1;
          unsigned SPI3IP2:1;
        };
      };
} typeIPC22BITS;
sfr volatile typeIPC22BITS IPC22bits absolute 0x0D0;

// backward compatibility for IPC23BITS
    typedef struct tagIPC23BITS {
      union {
        struct {
          unsigned OC9IP:3;
          unsigned :1;
          unsigned IC9IP:3;
        };
        struct {
          unsigned OC9IP0:1;
          unsigned OC9IP1:1;
          unsigned OC9IP2:1;
          unsigned :1;
          unsigned IC9IP0:1;
          unsigned IC9IP1:1;
          unsigned IC9IP2:1;
        };
      };
} typeIPC23BITS;
sfr volatile typeIPC23BITS IPC23bits absolute 0x0D2;

// backward compatibility for INTTREGBITS
    typedef struct tagINTTREGBITS {
      union {
        struct {
          unsigned VECNUM:6;
          unsigned :2;
          unsigned ILR:4;
          unsigned :2;
          unsigned TMODE:1;
          unsigned IRQtoCPU:1;
        };
        struct {
          unsigned VECNUM0:1;
          unsigned VECNUM1:1;
          unsigned VECNUM2:1;
          unsigned VECNUM3:1;
          unsigned VECNUM4:1;
          unsigned VECNUM5:1;
          unsigned :2;
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

// backward compatibility for IC6CON1BITS
    typedef struct tagIC6CON1BITS {
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
} typeIC6CON1BITS;
sfr volatile typeIC6CON1BITS IC6CON1bits absolute 0x168;

// backward compatibility for IC6CON2BITS
    typedef struct tagIC6CON2BITS {
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
} typeIC6CON2BITS;
sfr volatile typeIC6CON2BITS IC6CON2bits absolute 0x16A;

// backward compatibility for IC7CON1BITS
    typedef struct tagIC7CON1BITS {
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
} typeIC7CON1BITS;
sfr volatile typeIC7CON1BITS IC7CON1bits absolute 0x170;

// backward compatibility for IC7CON2BITS
    typedef struct tagIC7CON2BITS {
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
} typeIC7CON2BITS;
sfr volatile typeIC7CON2BITS IC7CON2bits absolute 0x172;

// backward compatibility for IC8CON1BITS
    typedef struct tagIC8CON1BITS {
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
} typeIC8CON1BITS;
sfr volatile typeIC8CON1BITS IC8CON1bits absolute 0x178;

// backward compatibility for IC8CON2BITS
    typedef struct tagIC8CON2BITS {
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
} typeIC8CON2BITS;
sfr volatile typeIC8CON2BITS IC8CON2bits absolute 0x17A;

// backward compatibility for IC9CON1BITS
    typedef struct tagIC9CON1BITS {
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
} typeIC9CON1BITS;
sfr volatile typeIC9CON1BITS IC9CON1bits absolute 0x180;

// backward compatibility for IC9CON2BITS
    typedef struct tagIC9CON2BITS {
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
} typeIC9CON2BITS;
sfr volatile typeIC9CON2BITS IC9CON2bits absolute 0x182;

// backward compatibility for OC1CON1BITS
    typedef struct tagOC1CON1BITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned TRIGMODE:1;
          unsigned OCFLT0:1;
          unsigned :2;
          unsigned ENFLT0:1;
          unsigned :2;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:1;
          unsigned :2;
          unsigned ENFLT:1;
          unsigned :2;
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
          unsigned :3;
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
          unsigned :10;
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
          unsigned OCFLT0:1;
          unsigned :2;
          unsigned ENFLT0:1;
          unsigned :2;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:1;
          unsigned :2;
          unsigned ENFLT:1;
          unsigned :2;
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
          unsigned :3;
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
          unsigned :10;
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
          unsigned OCFLT0:1;
          unsigned :2;
          unsigned ENFLT0:1;
          unsigned :2;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:1;
          unsigned :2;
          unsigned ENFLT:1;
          unsigned :2;
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
          unsigned :3;
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
          unsigned :10;
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
          unsigned OCFLT0:1;
          unsigned :2;
          unsigned ENFLT0:1;
          unsigned :2;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:1;
          unsigned :2;
          unsigned ENFLT:1;
          unsigned :2;
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
          unsigned :3;
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
          unsigned :10;
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
          unsigned OCFLT0:1;
          unsigned :2;
          unsigned ENFLT0:1;
          unsigned :2;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:1;
          unsigned :2;
          unsigned ENFLT:1;
          unsigned :2;
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
          unsigned :3;
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
          unsigned :10;
          unsigned FLTMODE:1;
        };
      };
} typeOC5CON2BITS;
sfr volatile typeOC5CON2BITS OC5CON2bits absolute 0x1BA;

// backward compatibility for OC6CON1BITS
    typedef struct tagOC6CON1BITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned TRIGMODE:1;
          unsigned OCFLT0:1;
          unsigned :2;
          unsigned ENFLT0:1;
          unsigned :2;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:1;
          unsigned :2;
          unsigned ENFLT:1;
          unsigned :2;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
      };
} typeOC6CON1BITS;
sfr volatile typeOC6CON1BITS OC6CON1bits absolute 0x1C2;

// backward compatibility for OC6CON2BITS
    typedef struct tagOC6CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned OCTRIS:1;
          unsigned TRIGSTAT:1;
          unsigned OCTRIG:1;
          unsigned OC32:1;
          unsigned :3;
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
          unsigned :10;
          unsigned FLTMODE:1;
        };
      };
} typeOC6CON2BITS;
sfr volatile typeOC6CON2BITS OC6CON2bits absolute 0x1C4;

// backward compatibility for OC7CON1BITS
    typedef struct tagOC7CON1BITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned TRIGMODE:1;
          unsigned OCFLT0:1;
          unsigned :2;
          unsigned ENFLT0:1;
          unsigned :2;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:1;
          unsigned :2;
          unsigned ENFLT:1;
          unsigned :2;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
      };
} typeOC7CON1BITS;
sfr volatile typeOC7CON1BITS OC7CON1bits absolute 0x1CC;

// backward compatibility for OC7CON2BITS
    typedef struct tagOC7CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned OCTRIS:1;
          unsigned TRIGSTAT:1;
          unsigned OCTRIG:1;
          unsigned OC32:1;
          unsigned :3;
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
          unsigned :10;
          unsigned FLTMODE:1;
        };
      };
} typeOC7CON2BITS;
sfr volatile typeOC7CON2BITS OC7CON2bits absolute 0x1CE;

// backward compatibility for OC8CON1BITS
    typedef struct tagOC8CON1BITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned TRIGMODE:1;
          unsigned OCFLT0:1;
          unsigned :2;
          unsigned ENFLT0:1;
          unsigned :2;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:1;
          unsigned :2;
          unsigned ENFLT:1;
          unsigned :2;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
      };
} typeOC8CON1BITS;
sfr volatile typeOC8CON1BITS OC8CON1bits absolute 0x1D6;

// backward compatibility for OC8CON2BITS
    typedef struct tagOC8CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned OCTRIS:1;
          unsigned TRIGSTAT:1;
          unsigned OCTRIG:1;
          unsigned OC32:1;
          unsigned :3;
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
          unsigned :10;
          unsigned FLTMODE:1;
        };
      };
} typeOC8CON2BITS;
sfr volatile typeOC8CON2BITS OC8CON2bits absolute 0x1D8;

// backward compatibility for OC9CON1BITS
    typedef struct tagOC9CON1BITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned TRIGMODE:1;
          unsigned OCFLT0:1;
          unsigned :2;
          unsigned ENFLT0:1;
          unsigned :2;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:1;
          unsigned :2;
          unsigned ENFLT:1;
          unsigned :2;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
      };
} typeOC9CON1BITS;
sfr volatile typeOC9CON1BITS OC9CON1bits absolute 0x1E0;

// backward compatibility for OC9CON2BITS
    typedef struct tagOC9CON2BITS {
      union {
        struct {
          unsigned SYNCSEL:5;
          unsigned OCTRIS:1;
          unsigned TRIGSTAT:1;
          unsigned OCTRIG:1;
          unsigned OC32:1;
          unsigned :3;
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
          unsigned :10;
          unsigned FLTMODE:1;
        };
      };
} typeOC9CON2BITS;
sfr volatile typeOC9CON2BITS OC9CON2bits absolute 0x1E2;

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

// backward compatibility for U3MODEBITS
    typedef struct tagU3MODEBITS {
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
} typeU3MODEBITS;
sfr volatile typeU3MODEBITS U3MODEbits absolute 0x250;

// backward compatibility for U3STABITS
    typedef struct tagU3STABITS {
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
} typeU3STABITS;
sfr volatile typeU3STABITS U3STAbits absolute 0x252;

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

// backward compatibility for I2C3CONBITS
    typedef struct tagI2C3CONBITS {
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
} typeI2C3CONBITS;
sfr volatile typeI2C3CONBITS I2C3CONbits absolute 0x276;

// backward compatibility for I2C3STATBITS
    typedef struct tagI2C3STATBITS {
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
} typeI2C3STATBITS;
sfr volatile typeI2C3STATBITS I2C3STATbits absolute 0x278;

// backward compatibility for SPI3STATBITS
    typedef struct tagSPI3STATBITS {
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
} typeSPI3STATBITS;
sfr volatile typeSPI3STATBITS SPI3STATbits absolute 0x280;

// backward compatibility for SPI3CON1BITS
    typedef struct tagSPI3CON1BITS {
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
} typeSPI3CON1BITS;
sfr volatile typeSPI3CON1BITS SPI3CON1bits absolute 0x282;

// backward compatibility for SPI3CON2BITS
    typedef struct tagSPI3CON2BITS {
      unsigned SPIBEN:1;
      unsigned SPIFE:1;
      unsigned :11;
      unsigned SPIFPOL:1;
      unsigned SPIFSD:1;
      unsigned FRMEN:1;
} typeSPI3CON2BITS;
sfr volatile typeSPI3CON2BITS SPI3CON2bits absolute 0x284;

// backward compatibility for U4MODEBITS
    typedef struct tagU4MODEBITS {
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
} typeU4MODEBITS;
sfr volatile typeU4MODEBITS U4MODEbits absolute 0x2B0;

// backward compatibility for U4STABITS
    typedef struct tagU4STABITS {
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
} typeU4STABITS;
sfr volatile typeU4STABITS U4STAbits absolute 0x2B2;

// backward compatibility for TRISABITS
    typedef struct tagTRISABITS {
      unsigned :9;
      unsigned TRISA9:1;
      unsigned TRISA10:1;
      unsigned :3;
      unsigned TRISA14:1;
      unsigned TRISA15:1;
} typeTRISABITS;
sfr volatile typeTRISABITS TRISAbits absolute 0x2C0;

// backward compatibility for PORTABITS
    typedef struct tagPORTABITS {
      unsigned :9;
      unsigned RA9:1;
      unsigned RA10:1;
      unsigned :3;
      unsigned RA14:1;
      unsigned RA15:1;
} typePORTABITS;
sfr volatile typePORTABITS PORTAbits absolute 0x2C2;

// backward compatibility for LATABITS
    typedef struct tagLATABITS {
      unsigned :9;
      unsigned LATA9:1;
      unsigned LATA10:1;
      unsigned :3;
      unsigned LATA14:1;
      unsigned LATA15:1;
} typeLATABITS;
sfr volatile typeLATABITS LATAbits absolute 0x2C4;

// backward compatibility for ODCABITS
    typedef struct tagODCABITS {
      unsigned :9;
      unsigned ODA9:1;
      unsigned ODA10:1;
      unsigned :3;
      unsigned ODA14:1;
      unsigned ODA15:1;
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

// backward compatibility for TRISCBITS
    typedef struct tagTRISCBITS {
      unsigned :1;
      unsigned TRISC1:1;
      unsigned :1;
      unsigned TRISC3:1;
      unsigned :8;
      unsigned TRISC12:1;
      unsigned TRISC13:1;
      unsigned TRISC14:1;
      unsigned TRISC15:1;
} typeTRISCBITS;
sfr volatile typeTRISCBITS TRISCbits absolute 0x2D0;

// backward compatibility for PORTCBITS
    typedef struct tagPORTCBITS {
      unsigned :1;
      unsigned RC1:1;
      unsigned :1;
      unsigned RC3:1;
      unsigned :8;
      unsigned RC12:1;
      unsigned RC13:1;
      unsigned RC14:1;
      unsigned RC15:1;
} typePORTCBITS;
sfr volatile typePORTCBITS PORTCbits absolute 0x2D2;

// backward compatibility for LATCBITS
    typedef struct tagLATCBITS {
      unsigned :1;
      unsigned LATC1:1;
      unsigned :1;
      unsigned LATC3:1;
      unsigned :8;
      unsigned LATC12:1;
      unsigned LATC13:1;
      unsigned LATC14:1;
      unsigned LATC15:1;
} typeLATCBITS;
sfr volatile typeLATCBITS LATCbits absolute 0x2D4;

// backward compatibility for ODCCBITS
    typedef struct tagODCCBITS {
      unsigned :1;
      unsigned ODC1:1;
      unsigned :1;
      unsigned ODC3:1;
      unsigned :8;
      unsigned ODC12:1;
      unsigned ODC13:1;
      unsigned ODC14:1;
      unsigned ODC15:1;
} typeODCCBITS;
sfr volatile typeODCCBITS ODCCbits absolute 0x2D6;

// backward compatibility for TRISDBITS
    typedef struct tagTRISDBITS {
      unsigned TRISD0:1;
      unsigned TRISD1:1;
      unsigned TRISD2:1;
      unsigned TRISD3:1;
      unsigned TRISD4:1;
      unsigned TRISD5:1;
      unsigned TRISD6:1;
      unsigned TRISD7:1;
      unsigned TRISD8:1;
      unsigned TRISD9:1;
      unsigned TRISD10:1;
      unsigned TRISD11:1;
      unsigned TRISD12:1;
      unsigned TRISD13:1;
      unsigned TRISD14:1;
      unsigned TRISD15:1;
} typeTRISDBITS;
sfr volatile typeTRISDBITS TRISDbits absolute 0x2D8;

// backward compatibility for PORTDBITS
    typedef struct tagPORTDBITS {
      unsigned RD0:1;
      unsigned RD1:1;
      unsigned RD2:1;
      unsigned RD3:1;
      unsigned RD4:1;
      unsigned RD5:1;
      unsigned RD6:1;
      unsigned RD7:1;
      unsigned RD8:1;
      unsigned RD9:1;
      unsigned RD10:1;
      unsigned RD11:1;
      unsigned RD12:1;
      unsigned RD13:1;
      unsigned RD14:1;
      unsigned RD15:1;
} typePORTDBITS;
sfr volatile typePORTDBITS PORTDbits absolute 0x2DA;

// backward compatibility for LATDBITS
    typedef struct tagLATDBITS {
      unsigned LATD0:1;
      unsigned LATD1:1;
      unsigned LATD2:1;
      unsigned LATD3:1;
      unsigned LATD4:1;
      unsigned LATD5:1;
      unsigned LATD6:1;
      unsigned LATD7:1;
      unsigned LATD8:1;
      unsigned LATD9:1;
      unsigned LATD10:1;
      unsigned LATD11:1;
      unsigned LATD12:1;
      unsigned LATD13:1;
      unsigned LATD14:1;
      unsigned LATD15:1;
} typeLATDBITS;
sfr volatile typeLATDBITS LATDbits absolute 0x2DC;

// backward compatibility for ODCDBITS
    typedef struct tagODCDBITS {
      unsigned ODD0:1;
      unsigned ODD1:1;
      unsigned ODD2:1;
      unsigned ODD3:1;
      unsigned ODD4:1;
      unsigned ODD5:1;
      unsigned ODD6:1;
      unsigned ODD7:1;
      unsigned ODD8:1;
      unsigned ODD9:1;
      unsigned ODD10:1;
      unsigned ODD11:1;
      unsigned ODD12:1;
      unsigned ODD13:1;
      unsigned ODD14:1;
      unsigned ODD15:1;
} typeODCDBITS;
sfr volatile typeODCDBITS ODCDbits absolute 0x2DE;

// backward compatibility for TRISEBITS
    typedef struct tagTRISEBITS {
      unsigned TRISE0:1;
      unsigned TRISE1:1;
      unsigned TRISE2:1;
      unsigned TRISE3:1;
      unsigned TRISE4:1;
      unsigned TRISE5:1;
      unsigned TRISE6:1;
      unsigned TRISE7:1;
      unsigned TRISE8:1;
      unsigned TRISE9:1;
} typeTRISEBITS;
sfr volatile typeTRISEBITS TRISEbits absolute 0x2E0;

// backward compatibility for PORTEBITS
    typedef struct tagPORTEBITS {
      unsigned RE0:1;
      unsigned RE1:1;
      unsigned RE2:1;
      unsigned RE3:1;
      unsigned RE4:1;
      unsigned RE5:1;
      unsigned RE6:1;
      unsigned RE7:1;
      unsigned RE8:1;
      unsigned RE9:1;
} typePORTEBITS;
sfr volatile typePORTEBITS PORTEbits absolute 0x2E2;

// backward compatibility for LATEBITS
    typedef struct tagLATEBITS {
      unsigned LATE0:1;
      unsigned LATE1:1;
      unsigned LATE2:1;
      unsigned LATE3:1;
      unsigned LATE4:1;
      unsigned LATE5:1;
      unsigned LATE6:1;
      unsigned LATE7:1;
      unsigned LATE8:1;
      unsigned LATE9:1;
} typeLATEBITS;
sfr volatile typeLATEBITS LATEbits absolute 0x2E4;

// backward compatibility for ODCEBITS
    typedef struct tagODCEBITS {
      unsigned ODE0:1;
      unsigned ODE1:1;
      unsigned ODE2:1;
      unsigned ODE3:1;
      unsigned ODE4:1;
      unsigned ODE5:1;
      unsigned ODE6:1;
      unsigned ODE7:1;
      unsigned ODE8:1;
      unsigned ODE9:1;
} typeODCEBITS;
sfr volatile typeODCEBITS ODCEbits absolute 0x2E6;

// backward compatibility for TRISFBITS
    typedef struct tagTRISFBITS {
      unsigned TRISF0:1;
      unsigned TRISF1:1;
      unsigned TRISF2:1;
      unsigned TRISF3:1;
      unsigned TRISF4:1;
      unsigned TRISF5:1;
      unsigned :2;
      unsigned TRISF8:1;
} typeTRISFBITS;
sfr volatile typeTRISFBITS TRISFbits absolute 0x2E8;

// backward compatibility for PORTFBITS
    typedef struct tagPORTFBITS {
      unsigned RF0:1;
      unsigned RF1:1;
      unsigned RF2:1;
      unsigned RF3:1;
      unsigned RF4:1;
      unsigned RF5:1;
      unsigned :2;
      unsigned RF8:1;
} typePORTFBITS;
sfr volatile typePORTFBITS PORTFbits absolute 0x2EA;

// backward compatibility for LATFBITS
    typedef struct tagLATFBITS {
      unsigned LATF0:1;
      unsigned LATF1:1;
      unsigned LATF2:1;
      unsigned LATF3:1;
      unsigned LATF4:1;
      unsigned LATF5:1;
      unsigned :2;
      unsigned LATF8:1;
} typeLATFBITS;
sfr volatile typeLATFBITS LATFbits absolute 0x2EC;

// backward compatibility for ODCFBITS
    typedef struct tagODCFBITS {
      unsigned ODF0:1;
      unsigned ODF1:1;
      unsigned ODF2:1;
      unsigned ODF3:1;
      unsigned ODF4:1;
      unsigned ODF5:1;
      unsigned :2;
      unsigned ODF8:1;
} typeODCFBITS;
sfr volatile typeODCFBITS ODCFbits absolute 0x2EE;

// backward compatibility for TRISGBITS
    typedef struct tagTRISGBITS {
      unsigned TRISG0:1;
      unsigned TRISG1:1;
      unsigned TRISG2:1;
      unsigned TRISG3:1;
      unsigned :2;
      unsigned TRISG6:1;
      unsigned TRISG7:1;
      unsigned TRISG8:1;
      unsigned TRISG9:1;
} typeTRISGBITS;
sfr volatile typeTRISGBITS TRISGbits absolute 0x2F0;

// backward compatibility for PORTGBITS
    typedef struct tagPORTGBITS {
      unsigned RG0:1;
      unsigned RG1:1;
      unsigned RG2:1;
      unsigned RG3:1;
      unsigned :2;
      unsigned RG6:1;
      unsigned RG7:1;
      unsigned RG8:1;
      unsigned RG9:1;
} typePORTGBITS;
sfr volatile typePORTGBITS PORTGbits absolute 0x2F2;

// backward compatibility for LATGBITS
    typedef struct tagLATGBITS {
      unsigned LATG0:1;
      unsigned LATG1:1;
      unsigned LATG2:1;
      unsigned LATG3:1;
      unsigned :2;
      unsigned LATG6:1;
      unsigned LATG7:1;
      unsigned LATG8:1;
      unsigned LATG9:1;
} typeLATGBITS;
sfr volatile typeLATGBITS LATGbits absolute 0x2F4;

// backward compatibility for ODCGBITS
    typedef struct tagODCGBITS {
      unsigned ODG0:1;
      unsigned ODG1:1;
      unsigned ODG2:1;
      unsigned ODG3:1;
      unsigned :2;
      unsigned ODG6:1;
      unsigned ODG7:1;
      unsigned ODG8:1;
      unsigned ODG9:1;
} typeODCGBITS;
sfr volatile typeODCGBITS ODCGbits absolute 0x2F6;

// backward compatibility for PADCFG1BITS
    typedef struct tagPADCFG1BITS {
      union {
        struct {
          unsigned PMPTTL:1;
          unsigned RTSECSEL:1;
        };
        struct {
          unsigned :1;
          unsigned RTSECSEL0:1;
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

// backward compatibility for AD1PCFGHBITS
    typedef struct tagAD1PCFGHBITS {
      unsigned PCFG16:1;
      unsigned PCFG17:1;
} typeAD1PCFGHBITS;
sfr volatile typeAD1PCFGHBITS AD1PCFGHbits absolute 0x32A;

// backward compatibility for AD1PCFGBITS
    typedef struct tagAD1PCFGBITS {
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
} typeAD1PCFGBITS;
sfr volatile typeAD1PCFGBITS AD1PCFGbits absolute 0x32C;

// backward compatibility for AD1PCFGLBITS
    typedef struct tagAD1PCFGLBITS {
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
} typeAD1PCFGLBITS;
sfr volatile typeAD1PCFGLBITS AD1PCFGLbits absolute 0x32C;

// backward compatibility for AD1CSSLBITS
    typedef struct tagAD1CSSLBITS {
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
} typeAD1CSSLBITS;
sfr volatile typeAD1CSSLBITS AD1CSSLbits absolute 0x330;

// backward compatibility for AD1CSSHBITS
    typedef struct tagAD1CSSHBITS {
      unsigned CSSL16:1;
      unsigned CSSL17:1;
} typeAD1CSSHBITS;
sfr volatile typeAD1CSSHBITS AD1CSSHbits absolute 0x332;

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

// backward compatibility for U1OTGIRBITS
    typedef struct tagU1OTGIRBITS {
      unsigned VBUSVDIF:1;
      unsigned :1;
      unsigned SESENDIF:1;
      unsigned SESVDIF:1;
      unsigned ACTVIF:1;
      unsigned LSTATEIF:1;
      unsigned T1MSECIF:1;
      unsigned IDIF:1;
} typeU1OTGIRBITS;
sfr volatile typeU1OTGIRBITS U1OTGIRbits absolute 0x480;

// backward compatibility for U1OTGIEBITS
    typedef struct tagU1OTGIEBITS {
      unsigned VBUSVDIE:1;
      unsigned :1;
      unsigned SESENDIE:1;
      unsigned SESVDIE:1;
      unsigned ACTVIE:1;
      unsigned LSTATEIE:1;
      unsigned T1MSECIE:1;
      unsigned IDIE:1;
} typeU1OTGIEBITS;
sfr volatile typeU1OTGIEBITS U1OTGIEbits absolute 0x482;

// backward compatibility for U1OTGSTATBITS
    typedef struct tagU1OTGSTATBITS {
      unsigned VBUSVD:1;
      unsigned :1;
      unsigned SESEND:1;
      unsigned SESVD:1;
      unsigned :1;
      unsigned LSTATE:1;
      unsigned :1;
      unsigned ID:1;
} typeU1OTGSTATBITS;
sfr volatile typeU1OTGSTATBITS U1OTGSTATbits absolute 0x484;

// backward compatibility for U1OTGCONBITS
    typedef struct tagU1OTGCONBITS {
      unsigned VBUSDIS:1;
      unsigned VBUSCHG:1;
      unsigned OTGEN:1;
      unsigned VBUSON:1;
      unsigned DMPULDWN:1;
      unsigned DPPULDWN:1;
      unsigned DMPULUP:1;
      unsigned DPPULUP:1;
} typeU1OTGCONBITS;
sfr volatile typeU1OTGCONBITS U1OTGCONbits absolute 0x486;

// backward compatibility for U1PWRCBITS
    typedef struct tagU1PWRCBITS {
      union {
        struct {
          unsigned USBPWR:1;
          unsigned USUSPEND:1;
          unsigned :2;
          unsigned USLPGRD:1;
          unsigned :2;
          unsigned UACTPND:1;
        };
        struct {
          unsigned :1;
          unsigned USUSPND:1;
        };
      };
} typeU1PWRCBITS;
sfr volatile typeU1PWRCBITS U1PWRCbits absolute 0x488;

// backward compatibility for U1IRBITS
    typedef struct tagU1IRBITS {
      union {
        struct {
          unsigned URSTIF:1;
          unsigned UERRIF:1;
          unsigned SOFIF:1;
          unsigned TRNIF:1;
          unsigned IDLEIF:1;
          unsigned RESUMEIF:1;
          unsigned ATTACHIF:1;
          unsigned STALLIF:1;
        };
        struct {
          unsigned DETACHIF:1;
        };
      };
} typeU1IRBITS;
sfr volatile typeU1IRBITS U1IRbits absolute 0x48A;

// backward compatibility for U1IEBITS
    typedef struct tagU1IEBITS {
      union {
        struct {
          unsigned URSTIE:1;
          unsigned UERRIE:1;
          unsigned SOFIE:1;
          unsigned TRNIE:1;
          unsigned IDLEIE:1;
          unsigned RESUMEIE:1;
          unsigned ATTACHIE:1;
          unsigned STALLIE:1;
        };
        struct {
          unsigned DETACHIE:1;
        };
      };
} typeU1IEBITS;
sfr volatile typeU1IEBITS U1IEbits absolute 0x48C;

// backward compatibility for U1EIRBITS
    typedef struct tagU1EIRBITS {
      union {
        struct {
          unsigned PIDEF:1;
          unsigned CRC5EF:1;
          unsigned CRC16EF:1;
          unsigned DFN8EF:1;
          unsigned BTOEF:1;
          unsigned DMAEF:1;
          unsigned :1;
          unsigned BTSEF:1;
        };
        struct {
          unsigned :1;
          unsigned EOFEF:1;
        };
      };
} typeU1EIRBITS;
sfr volatile typeU1EIRBITS U1EIRbits absolute 0x48E;

// backward compatibility for U1EIEBITS
    typedef struct tagU1EIEBITS {
      union {
        struct {
          unsigned PIDEE:1;
          unsigned CRC5EE:1;
          unsigned CRC16EE:1;
          unsigned DFN8EE:1;
          unsigned BTOEE:1;
          unsigned DMAEE:1;
          unsigned :1;
          unsigned BTSEE:1;
        };
        struct {
          unsigned :1;
          unsigned EOFEE:1;
        };
      };
} typeU1EIEBITS;
sfr volatile typeU1EIEBITS U1EIEbits absolute 0x490;

// backward compatibility for U1STATBITS
    typedef struct tagU1STATBITS {
      union {
        struct {
          unsigned :2;
          unsigned PPBI:1;
          unsigned DIR:1;
          unsigned ENDPT0:1;
          unsigned ENDPT1:1;
          unsigned ENDPT2:1;
          unsigned ENDPT3:1;
        };
        struct {
          unsigned :4;
          unsigned ENDPT:4;
        };
      };
} typeU1STATBITS;
sfr volatile typeU1STATBITS U1STATbits absolute 0x492;

// backward compatibility for U1CONBITS
    typedef struct tagU1CONBITS {
      union {
        struct {
          unsigned USBEN:1;
          unsigned PPBRST:1;
          unsigned RESUME:1;
          unsigned HOSTEN:1;
          unsigned RESET:1;
          unsigned PKTDIS:1;
          unsigned SE0:1;
          unsigned JSTATE:1;
        };
        struct {
          unsigned SOFEN:1;
          unsigned :3;
          unsigned USBRST:1;
          unsigned TOKBUSY:1;
        };
      };
} typeU1CONBITS;
sfr volatile typeU1CONBITS U1CONbits absolute 0x494;

// backward compatibility for U1ADDRBITS
    typedef struct tagU1ADDRBITS {
      union {
        struct {
          unsigned ADDR0:1;
          unsigned ADDR1:1;
          unsigned ADDR2:1;
          unsigned ADDR3:1;
          unsigned ADDR4:1;
          unsigned ADDR5:1;
          unsigned ADDR6:1;
          unsigned LSPDEN:1;
        };
        struct {
          unsigned DEVADDR0:1;
          unsigned DEVADDR1:1;
          unsigned DEVADDR2:1;
          unsigned DEVADDR3:1;
          unsigned DEVADDR4:1;
          unsigned DEVADDR5:1;
          unsigned DEVADDR6:1;
          unsigned LOWSPDEN:1;
        };
        struct {
          unsigned DEVADDR:7;
        };
      };
} typeU1ADDRBITS;
sfr volatile typeU1ADDRBITS U1ADDRbits absolute 0x496;

// backward compatibility for U1BDTP1BITS
    typedef struct tagU1BDTP1BITS {
      unsigned :1;
      unsigned BDTPTRL:7;
} typeU1BDTP1BITS;
sfr volatile typeU1BDTP1BITS U1BDTP1bits absolute 0x498;

// backward compatibility for U1FRMLBITS
    typedef struct tagU1FRMLBITS {
      unsigned FRM0:1;
      unsigned FRM1:1;
      unsigned FRM2:1;
      unsigned FRM3:1;
      unsigned FRM4:1;
      unsigned FRM5:1;
      unsigned FRM6:1;
      unsigned FRM7:1;
} typeU1FRMLBITS;
sfr volatile typeU1FRMLBITS U1FRMLbits absolute 0x49A;

// backward compatibility for U1FRMHBITS
    typedef struct tagU1FRMHBITS {
      unsigned FRM8:1;
      unsigned FRM9:1;
      unsigned FRM10:1;
      unsigned FRM11:1;
      unsigned FRM12:1;
      unsigned FRM13:1;
      unsigned FRM14:1;
      unsigned FRM15:1;
} typeU1FRMHBITS;
sfr volatile typeU1FRMHBITS U1FRMHbits absolute 0x49C;

// backward compatibility for U1TOKBITS
    typedef struct tagU1TOKBITS {
      union {
        struct {
          unsigned EP0:1;
          unsigned EP1:1;
          unsigned EP2:1;
          unsigned EP3:1;
          unsigned PID0:1;
          unsigned PID1:1;
          unsigned PID2:1;
          unsigned PID3:1;
        };
        struct {
          unsigned EP:4;
          unsigned PID:4;
        };
      };
} typeU1TOKBITS;
sfr volatile typeU1TOKBITS U1TOKbits absolute 0x49E;

// backward compatibility for U1SOFBITS
    typedef struct tagU1SOFBITS {
      unsigned CNT:8;
} typeU1SOFBITS;
sfr volatile typeU1SOFBITS U1SOFbits absolute 0x4A0;

// backward compatibility for U1CNFG1BITS
    typedef struct tagU1CNFG1BITS {
      union {
        struct {
          unsigned PPB0:1;
          unsigned PPB1:1;
          unsigned :2;
          unsigned USBSIDL:1;
          unsigned :1;
          unsigned UOEMON:1;
          unsigned UTEYE:1;
        };
        struct {
          unsigned PPB:2;
        };
      };
} typeU1CNFG1BITS;
sfr volatile typeU1CNFG1BITS U1CNFG1bits absolute 0x4A6;

// backward compatibility for U1CNFG2BITS
    typedef struct tagU1CNFG2BITS {
      unsigned UTRDIS:1;
      unsigned UVCMPDIS:1;
      unsigned UVBUSDIS:1;
      unsigned EXTI2CEN:1;
} typeU1CNFG2BITS;
sfr volatile typeU1CNFG2BITS U1CNFG2bits absolute 0x4A8;

// backward compatibility for U1EP0BITS
    typedef struct tagU1EP0BITS {
      union {
        struct {
          unsigned EPHSHK:1;
          unsigned EPSTALL:1;
          unsigned EPTXEN:1;
          unsigned EPRXEN:1;
          unsigned EPCONDIS:1;
          unsigned :1;
          unsigned RETRYDIS:1;
          unsigned LSPD:1;
        };
        struct {
          unsigned :2;
          unsigned EPINEN:1;
          unsigned EPOUTEN:1;
        };
        struct {
          unsigned :7;
          unsigned LOWSPD:1;
        };
      };
} typeU1EP0BITS;
sfr volatile typeU1EP0BITS U1EP0bits absolute 0x4AA;

// backward compatibility for U1EP1BITS
    typedef struct tagU1EP1BITS {
      union {
        struct {
          unsigned EPHSHK:1;
          unsigned EPSTALL:1;
          unsigned EPTXEN:1;
          unsigned EPRXEN:1;
          unsigned EPCONDIS:1;
        };
        struct {
          unsigned :2;
          unsigned EPINEN:1;
          unsigned EPOUTEN:1;
        };
      };
} typeU1EP1BITS;
sfr volatile typeU1EP1BITS U1EP1bits absolute 0x4AC;

// backward compatibility for U1EP2BITS
    typedef struct tagU1EP2BITS {
      union {
        struct {
          unsigned EPHSHK:1;
          unsigned EPSTALL:1;
          unsigned EPTXEN:1;
          unsigned EPRXEN:1;
          unsigned EPCONDIS:1;
        };
        struct {
          unsigned :2;
          unsigned EPINEN:1;
          unsigned EPOUTEN:1;
        };
      };
} typeU1EP2BITS;
sfr volatile typeU1EP2BITS U1EP2bits absolute 0x4AE;

// backward compatibility for U1EP3BITS
    typedef struct tagU1EP3BITS {
      union {
        struct {
          unsigned EPHSHK:1;
          unsigned EPSTALL:1;
          unsigned EPTXEN:1;
          unsigned EPRXEN:1;
          unsigned EPCONDIS:1;
        };
        struct {
          unsigned :2;
          unsigned EPINEN:1;
          unsigned EPOUTEN:1;
        };
      };
} typeU1EP3BITS;
sfr volatile typeU1EP3BITS U1EP3bits absolute 0x4B0;

// backward compatibility for U1EP4BITS
    typedef struct tagU1EP4BITS {
      union {
        struct {
          unsigned EPHSHK:1;
          unsigned EPSTALL:1;
          unsigned EPTXEN:1;
          unsigned EPRXEN:1;
          unsigned EPCONDIS:1;
        };
        struct {
          unsigned :2;
          unsigned EPINEN:1;
          unsigned EPOUTEN:1;
        };
      };
} typeU1EP4BITS;
sfr volatile typeU1EP4BITS U1EP4bits absolute 0x4B2;

// backward compatibility for U1EP5BITS
    typedef struct tagU1EP5BITS {
      union {
        struct {
          unsigned EPHSHK:1;
          unsigned EPSTALL:1;
          unsigned EPTXEN:1;
          unsigned EPRXEN:1;
          unsigned EPCONDIS:1;
        };
        struct {
          unsigned :2;
          unsigned EPINEN:1;
          unsigned EPOUTEN:1;
        };
      };
} typeU1EP5BITS;
sfr volatile typeU1EP5BITS U1EP5bits absolute 0x4B4;

// backward compatibility for U1EP6BITS
    typedef struct tagU1EP6BITS {
      union {
        struct {
          unsigned EPHSHK:1;
          unsigned EPSTALL:1;
          unsigned EPTXEN:1;
          unsigned EPRXEN:1;
          unsigned EPCONDIS:1;
        };
        struct {
          unsigned :2;
          unsigned EPINEN:1;
          unsigned EPOUTEN:1;
        };
      };
} typeU1EP6BITS;
sfr volatile typeU1EP6BITS U1EP6bits absolute 0x4B6;

// backward compatibility for U1EP7BITS
    typedef struct tagU1EP7BITS {
      union {
        struct {
          unsigned EPHSHK:1;
          unsigned EPSTALL:1;
          unsigned EPTXEN:1;
          unsigned EPRXEN:1;
          unsigned EPCONDIS:1;
        };
        struct {
          unsigned :2;
          unsigned EPINEN:1;
          unsigned EPOUTEN:1;
        };
      };
} typeU1EP7BITS;
sfr volatile typeU1EP7BITS U1EP7bits absolute 0x4B8;

// backward compatibility for U1EP8BITS
    typedef struct tagU1EP8BITS {
      union {
        struct {
          unsigned EPHSHK:1;
          unsigned EPSTALL:1;
          unsigned EPTXEN:1;
          unsigned EPRXEN:1;
          unsigned EPCONDIS:1;
        };
        struct {
          unsigned :2;
          unsigned EPINEN:1;
          unsigned EPOUTEN:1;
        };
      };
} typeU1EP8BITS;
sfr volatile typeU1EP8BITS U1EP8bits absolute 0x4BA;

// backward compatibility for U1EP9BITS
    typedef struct tagU1EP9BITS {
      union {
        struct {
          unsigned EPHSHK:1;
          unsigned EPSTALL:1;
          unsigned EPTXEN:1;
          unsigned EPRXEN:1;
          unsigned EPCONDIS:1;
        };
        struct {
          unsigned :2;
          unsigned EPINEN:1;
          unsigned EPOUTEN:1;
        };
      };
} typeU1EP9BITS;
sfr volatile typeU1EP9BITS U1EP9bits absolute 0x4BC;

// backward compatibility for U1EP10BITS
    typedef struct tagU1EP10BITS {
      union {
        struct {
          unsigned EPHSHK:1;
          unsigned EPSTALL:1;
          unsigned EPTXEN:1;
          unsigned EPRXEN:1;
          unsigned EPCONDIS:1;
        };
        struct {
          unsigned :2;
          unsigned EPINEN:1;
          unsigned EPOUTEN:1;
        };
      };
} typeU1EP10BITS;
sfr volatile typeU1EP10BITS U1EP10bits absolute 0x4BE;

// backward compatibility for U1EP11BITS
    typedef struct tagU1EP11BITS {
      union {
        struct {
          unsigned EPHSHK:1;
          unsigned EPSTALL:1;
          unsigned EPTXEN:1;
          unsigned EPRXEN:1;
          unsigned EPCONDIS:1;
        };
        struct {
          unsigned :2;
          unsigned EPINEN:1;
          unsigned EPOUTEN:1;
        };
      };
} typeU1EP11BITS;
sfr volatile typeU1EP11BITS U1EP11bits absolute 0x4C0;

// backward compatibility for U1EP12BITS
    typedef struct tagU1EP12BITS {
      union {
        struct {
          unsigned EPHSHK:1;
          unsigned EPSTALL:1;
          unsigned EPTXEN:1;
          unsigned EPRXEN:1;
          unsigned EPCONDIS:1;
        };
        struct {
          unsigned :2;
          unsigned EPINEN:1;
          unsigned EPOUTEN:1;
        };
      };
} typeU1EP12BITS;
sfr volatile typeU1EP12BITS U1EP12bits absolute 0x4C2;

// backward compatibility for U1EP13BITS
    typedef struct tagU1EP13BITS {
      union {
        struct {
          unsigned EPHSHK:1;
          unsigned EPSTALL:1;
          unsigned EPTXEN:1;
          unsigned EPRXEN:1;
          unsigned EPCONDIS:1;
        };
        struct {
          unsigned :2;
          unsigned EPINEN:1;
          unsigned EPOUTEN:1;
        };
      };
} typeU1EP13BITS;
sfr volatile typeU1EP13BITS U1EP13bits absolute 0x4C4;

// backward compatibility for U1EP14BITS
    typedef struct tagU1EP14BITS {
      union {
        struct {
          unsigned EPHSHK:1;
          unsigned EPSTALL:1;
          unsigned EPTXEN:1;
          unsigned EPRXEN:1;
          unsigned EPCONDIS:1;
        };
        struct {
          unsigned :2;
          unsigned EPINEN:1;
          unsigned EPOUTEN:1;
        };
      };
} typeU1EP14BITS;
sfr volatile typeU1EP14BITS U1EP14bits absolute 0x4C6;

// backward compatibility for U1EP15BITS
    typedef struct tagU1EP15BITS {
      union {
        struct {
          unsigned EPHSHK:1;
          unsigned EPSTALL:1;
          unsigned EPTXEN:1;
          unsigned EPRXEN:1;
          unsigned EPCONDIS:1;
        };
        struct {
          unsigned :2;
          unsigned EPINEN:1;
          unsigned EPOUTEN:1;
        };
      };
} typeU1EP15BITS;
sfr volatile typeU1EP15BITS U1EP15bits absolute 0x4C8;

// backward compatibility for U1PWMRRSBITS
    typedef struct tagU1PWMRRSBITS {
      union {
        struct {
          unsigned PER0:1;
          unsigned PER1:1;
          unsigned PER2:1;
          unsigned PER3:1;
          unsigned PER4:1;
          unsigned PER5:1;
          unsigned PER6:1;
          unsigned PER7:1;
          unsigned DC0:1;
          unsigned DC1:1;
          unsigned DC2:1;
          unsigned DC3:1;
          unsigned DC4:1;
          unsigned DC5:1;
          unsigned DC6:1;
          unsigned DC7:1;
        };
        struct {
          unsigned USBRS0:1;
          unsigned USBRS1:1;
          unsigned USBRS2:1;
          unsigned USBRS3:1;
          unsigned USBRS4:1;
          unsigned USBRS5:1;
          unsigned USBRS6:1;
          unsigned USBRS7:1;
          unsigned USBR0:1;
          unsigned USBR1:1;
          unsigned USBR2:1;
          unsigned USBR3:1;
          unsigned USBR4:1;
          unsigned USBR5:1;
          unsigned USBR6:1;
          unsigned USBR7:1;
        };
        struct {
          unsigned USBRS:8;
          unsigned USBR:8;
        };
        struct {
          unsigned PER:8;
          unsigned DC:8;
        };
      };
} typeU1PWMRRSBITS;
sfr volatile typeU1PWMRRSBITS U1PWMRRSbits absolute 0x4CC;

// backward compatibility for U1PWMCONBITS
    typedef struct tagU1PWMCONBITS {
      union {
        struct {
          unsigned :8;
          unsigned CNTEN:1;
          unsigned PWMPOL:1;
          unsigned USBTSEL:3;
          unsigned :2;
          unsigned PWMEN:1;
        };
        struct {
          unsigned :10;
          unsigned USBTSEL0:1;
          unsigned USBTSEL1:1;
          unsigned USBTSEL2:1;
        };
      };
} typeU1PWMCONBITS;
sfr volatile typeU1PWMCONBITS U1PWMCONbits absolute 0x4CE;

// backward compatibility for PMCONBITS
    typedef struct tagPMCONBITS {
      union {
        struct {
          unsigned RDSP:1;
          unsigned WRSP:1;
          unsigned BEP:1;
          unsigned CS1P:1;
          unsigned CS2P:1;
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
          unsigned MODE0:1;
          unsigned MODE1:1;
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
          unsigned MODE:2;
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
          unsigned ADDR:14;
          unsigned CS:2;
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
          unsigned ADDR11:1;
          unsigned ADDR12:1;
          unsigned ADDR13:1;
          unsigned CS1:1;
          unsigned CS2:1;
        };
      };
} typePMADDRBITS;
sfr volatile typePMADDRBITS PMADDRbits absolute 0x604;

// backward compatibility for PMDOUT1BITS
    typedef struct tagPMDOUT1BITS {
      union {
        struct {
          unsigned ADDR:14;
          unsigned CS:2;
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
          unsigned ADDR11:1;
          unsigned ADDR12:1;
          unsigned ADDR13:1;
          unsigned CS1:1;
          unsigned CS2:1;
        };
      };
} typePMDOUT1BITS;
sfr volatile typePMDOUT1BITS PMDOUT1bits absolute 0x604;

// backward compatibility for PMAENBITS
    typedef struct tagPMAENBITS {
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
      unsigned PTEN11:1;
      unsigned PTEN12:1;
      unsigned PTEN13:1;
      unsigned PTEN14:1;
      unsigned PTEN15:1;
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

// backward compatibility for CMSTATBITS
    typedef struct tagCMSTATBITS {
      unsigned C1OUT:1;
      unsigned C2OUT:1;
      unsigned C3OUT:1;
      unsigned C4OUT:1;
      unsigned C5OUT:1;
      unsigned C6OUT:1;
      unsigned :2;
      unsigned C1EVT:1;
      unsigned C2EVT:1;
      unsigned C3EVT:1;
      unsigned C4EVT:1;
      unsigned C5EVT:1;
      unsigned C6EVT:1;
      unsigned :1;
      unsigned CMIDL:1;
} typeCMSTATBITS;
sfr volatile typeCMSTATBITS CMSTATbits absolute 0x630;

// backward compatibility for CVRCONBITS
    typedef struct tagCVRCONBITS {
      union {
        struct {
          unsigned CVR:4;
          unsigned CVRSS:1;
          unsigned CVRR:1;
          unsigned CVROE:1;
          unsigned CVREN:1;
        };
        struct {
          unsigned CVR0:1;
          unsigned CVR1:1;
          unsigned CVR2:1;
          unsigned CVR3:1;
        };
      };
} typeCVRCONBITS;
sfr volatile typeCVRCONBITS CVRCONbits absolute 0x632;

// backward compatibility for CM1CONBITS
    typedef struct tagCM1CONBITS {
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
} typeCM1CONBITS;
sfr volatile typeCM1CONBITS CM1CONbits absolute 0x634;

// backward compatibility for CM2CONBITS
    typedef struct tagCM2CONBITS {
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
} typeCM2CONBITS;
sfr volatile typeCM2CONBITS CM2CONbits absolute 0x636;

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
sfr volatile typeCM3CONBITS CM3CONbits absolute 0x638;

// backward compatibility for CRCCONBITS
    typedef struct tagCRCCONBITS {
      union {
        struct {
          unsigned PLEN:4;
          unsigned CRCGO:1;
          unsigned :1;
          unsigned CRCMPT:1;
          unsigned CRCFUL:1;
          unsigned VWORD:5;
          unsigned CSIDL:1;
        };
        struct {
          unsigned PLEN0:1;
          unsigned PLEN1:1;
          unsigned PLEN2:1;
          unsigned PLEN3:1;
          unsigned :4;
          unsigned VWORD0:1;
          unsigned VWORD1:1;
          unsigned VWORD2:1;
          unsigned VWORD3:1;
          unsigned VWORD4:1;
        };
      };
} typeCRCCONBITS;
sfr volatile typeCRCCONBITS CRCCONbits absolute 0x640;

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
sfr volatile typeCRCXORBITS CRCXORbits absolute 0x642;

// backward compatibility for RPINR0BITS
    typedef struct tagRPINR0BITS {
      union {
        struct {
          unsigned :8;
          unsigned INT1R:6;
        };
        struct {
          unsigned :8;
          unsigned INT1R0:1;
          unsigned INT1R1:1;
          unsigned INT1R2:1;
          unsigned INT1R3:1;
          unsigned INT1R4:1;
          unsigned INT1R5:1;
        };
      };
} typeRPINR0BITS;
sfr volatile typeRPINR0BITS RPINR0bits absolute 0x680;

// backward compatibility for RPINR1BITS
    typedef struct tagRPINR1BITS {
      union {
        struct {
          unsigned INT2R:6;
          unsigned :2;
          unsigned INT3R:6;
        };
        struct {
          unsigned INT2R0:1;
          unsigned INT2R1:1;
          unsigned INT2R2:1;
          unsigned INT2R3:1;
          unsigned INT2R4:1;
          unsigned INT2R5:1;
          unsigned :2;
          unsigned INT3R0:1;
          unsigned INT3R1:1;
          unsigned INT3R2:1;
          unsigned INT3R3:1;
          unsigned INT3R4:1;
          unsigned INT3R5:1;
        };
      };
} typeRPINR1BITS;
sfr volatile typeRPINR1BITS RPINR1bits absolute 0x682;

// backward compatibility for RPINR2BITS
    typedef struct tagRPINR2BITS {
      union {
        struct {
          unsigned INT4R:6;
          unsigned :2;
          unsigned T1CKR:6;
        };
        struct {
          unsigned INT4R0:1;
          unsigned INT4R1:1;
          unsigned INT4R2:1;
          unsigned INT4R3:1;
          unsigned INT4R4:1;
          unsigned INT4R5:1;
          unsigned :2;
          unsigned T1CKR0:1;
          unsigned T1CKR1:1;
          unsigned T1CKR2:1;
          unsigned T1CKR3:1;
          unsigned T1CKR4:1;
          unsigned T1CKR5:1;
        };
      };
} typeRPINR2BITS;
sfr volatile typeRPINR2BITS RPINR2bits absolute 0x684;

// backward compatibility for RPINR3BITS
    typedef struct tagRPINR3BITS {
      union {
        struct {
          unsigned T2CKR:6;
          unsigned :2;
          unsigned T3CKR:6;
        };
        struct {
          unsigned T2CKR0:1;
          unsigned T2CKR1:1;
          unsigned T2CKR2:1;
          unsigned T2CKR3:1;
          unsigned T2CKR4:1;
          unsigned T2CKR5:1;
          unsigned :2;
          unsigned T3CKR0:1;
          unsigned T3CKR1:1;
          unsigned T3CKR2:1;
          unsigned T3CKR3:1;
          unsigned T3CKR4:1;
          unsigned T3CKR5:1;
        };
      };
} typeRPINR3BITS;
sfr volatile typeRPINR3BITS RPINR3bits absolute 0x686;

// backward compatibility for RPINR4BITS
    typedef struct tagRPINR4BITS {
      union {
        struct {
          unsigned T4CKR:6;
          unsigned :2;
          unsigned T5CKR:6;
        };
        struct {
          unsigned T4CKR0:1;
          unsigned T4CKR1:1;
          unsigned T4CKR2:1;
          unsigned T4CKR3:1;
          unsigned T4CKR4:1;
          unsigned T4CKR5:1;
          unsigned :2;
          unsigned T5CKR0:1;
          unsigned T5CKR1:1;
          unsigned T5CKR2:1;
          unsigned T5CKR3:1;
          unsigned T5CKR4:1;
          unsigned T5CKR5:1;
        };
      };
} typeRPINR4BITS;
sfr volatile typeRPINR4BITS RPINR4bits absolute 0x688;

// backward compatibility for RPINR7BITS
    typedef struct tagRPINR7BITS {
      union {
        struct {
          unsigned IC1R:6;
          unsigned :2;
          unsigned IC2R:6;
        };
        struct {
          unsigned IC1R0:1;
          unsigned IC1R1:1;
          unsigned IC1R2:1;
          unsigned IC1R3:1;
          unsigned IC1R4:1;
          unsigned IC1R5:1;
          unsigned :2;
          unsigned IC2R0:1;
          unsigned IC2R1:1;
          unsigned IC2R2:1;
          unsigned IC2R3:1;
          unsigned IC2R4:1;
          unsigned IC2R5:1;
        };
      };
} typeRPINR7BITS;
sfr volatile typeRPINR7BITS RPINR7bits absolute 0x68E;

// backward compatibility for RPINR8BITS
    typedef struct tagRPINR8BITS {
      union {
        struct {
          unsigned IC3R:6;
          unsigned :2;
          unsigned IC4R:6;
        };
        struct {
          unsigned IC3R0:1;
          unsigned IC3R1:1;
          unsigned IC3R2:1;
          unsigned IC3R3:1;
          unsigned IC3R4:1;
          unsigned IC3R5:1;
          unsigned :2;
          unsigned IC4R0:1;
          unsigned IC4R1:1;
          unsigned IC4R2:1;
          unsigned IC4R3:1;
          unsigned IC4R4:1;
          unsigned IC4R5:1;
        };
      };
} typeRPINR8BITS;
sfr volatile typeRPINR8BITS RPINR8bits absolute 0x690;

// backward compatibility for RPINR9BITS
    typedef struct tagRPINR9BITS {
      union {
        struct {
          unsigned IC5R:6;
          unsigned :2;
          unsigned IC6R:6;
        };
        struct {
          unsigned IC5R0:1;
          unsigned IC5R1:1;
          unsigned IC5R2:1;
          unsigned IC5R3:1;
          unsigned IC5R4:1;
          unsigned IC5R5:1;
          unsigned :2;
          unsigned IC6R0:1;
          unsigned IC6R1:1;
          unsigned IC6R2:1;
          unsigned IC6R3:1;
          unsigned IC6R4:1;
          unsigned IC6R5:1;
        };
      };
} typeRPINR9BITS;
sfr volatile typeRPINR9BITS RPINR9bits absolute 0x692;

// backward compatibility for RPINR10BITS
    typedef struct tagRPINR10BITS {
      union {
        struct {
          unsigned IC7R:6;
          unsigned :2;
          unsigned IC8R:6;
        };
        struct {
          unsigned IC7R0:1;
          unsigned IC7R1:1;
          unsigned IC7R2:1;
          unsigned IC7R3:1;
          unsigned IC7R4:1;
          unsigned IC7R5:1;
          unsigned :2;
          unsigned IC8R0:1;
          unsigned IC8R1:1;
          unsigned IC8R2:1;
          unsigned IC8R3:1;
          unsigned IC8R4:1;
          unsigned IC8R5:1;
        };
      };
} typeRPINR10BITS;
sfr volatile typeRPINR10BITS RPINR10bits absolute 0x694;

// backward compatibility for RPINR11BITS
    typedef struct tagRPINR11BITS {
      union {
        struct {
          unsigned OCFAR:6;
          unsigned :2;
          unsigned OCFBR:6;
        };
        struct {
          unsigned OCFAR0:1;
          unsigned OCFAR1:1;
          unsigned OCFAR2:1;
          unsigned OCFAR3:1;
          unsigned OCFAR4:1;
          unsigned OCFAR5:1;
          unsigned :2;
          unsigned OCFBR0:1;
          unsigned OCFBR1:1;
          unsigned OCFBR2:1;
          unsigned OCFBR3:1;
          unsigned OCFBR4:1;
          unsigned OCFBR5:1;
        };
      };
} typeRPINR11BITS;
sfr volatile typeRPINR11BITS RPINR11bits absolute 0x696;

// backward compatibility for RPINR15BITS
    typedef struct tagRPINR15BITS {
      union {
        struct {
          unsigned :8;
          unsigned IC9R:6;
        };
        struct {
          unsigned :8;
          unsigned IC9R0:1;
          unsigned IC9R1:1;
          unsigned IC9R2:1;
          unsigned IC9R3:1;
          unsigned IC9R4:1;
          unsigned IC9R5:1;
        };
      };
} typeRPINR15BITS;
sfr volatile typeRPINR15BITS RPINR15bits absolute 0x69E;

// backward compatibility for RPINR17BITS
    typedef struct tagRPINR17BITS {
      union {
        struct {
          unsigned :8;
          unsigned U3RXR:6;
        };
        struct {
          unsigned :8;
          unsigned U3RXR0:1;
          unsigned U3RXR1:1;
          unsigned U3RXR2:1;
          unsigned U3RXR3:1;
          unsigned U3RXR4:1;
          unsigned U3RXR5:1;
        };
      };
} typeRPINR17BITS;
sfr volatile typeRPINR17BITS RPINR17bits absolute 0x6A2;

// backward compatibility for RPINR18BITS
    typedef struct tagRPINR18BITS {
      union {
        struct {
          unsigned U1RXR:6;
          unsigned :2;
          unsigned U1CTSR:6;
        };
        struct {
          unsigned U1RXR0:1;
          unsigned U1RXR1:1;
          unsigned U1RXR2:1;
          unsigned U1RXR3:1;
          unsigned U1RXR4:1;
          unsigned U1RXR5:1;
          unsigned :2;
          unsigned U1CTSR0:1;
          unsigned U1CTSR1:1;
          unsigned U1CTSR2:1;
          unsigned U1CTSR3:1;
          unsigned U1CTSR4:1;
          unsigned U1CTSR5:1;
        };
      };
} typeRPINR18BITS;
sfr volatile typeRPINR18BITS RPINR18bits absolute 0x6A4;

// backward compatibility for RPINR19BITS
    typedef struct tagRPINR19BITS {
      union {
        struct {
          unsigned U2RXR:6;
          unsigned :2;
          unsigned U2CTSR:6;
        };
        struct {
          unsigned U2RXR0:1;
          unsigned U2RXR1:1;
          unsigned U2RXR2:1;
          unsigned U2RXR3:1;
          unsigned U2RXR4:1;
          unsigned U2RXR5:1;
          unsigned :2;
          unsigned U2CTSR0:1;
          unsigned U2CTSR1:1;
          unsigned U2CTSR2:1;
          unsigned U2CTSR3:1;
          unsigned U2CTSR4:1;
          unsigned U2CTSR5:1;
        };
      };
} typeRPINR19BITS;
sfr volatile typeRPINR19BITS RPINR19bits absolute 0x6A6;

// backward compatibility for RPINR20BITS
    typedef struct tagRPINR20BITS {
      union {
        struct {
          unsigned SDI1R:6;
          unsigned :2;
          unsigned SCK1R:6;
        };
        struct {
          unsigned SDI1R0:1;
          unsigned SDI1R1:1;
          unsigned SDI1R2:1;
          unsigned SDI1R3:1;
          unsigned SDI1R4:1;
          unsigned SDI1R5:1;
          unsigned :2;
          unsigned SCK1R0:1;
          unsigned SCK1R1:1;
          unsigned SCK1R2:1;
          unsigned SCK1R3:1;
          unsigned SCK1R4:1;
          unsigned SCK1R5:1;
        };
      };
} typeRPINR20BITS;
sfr volatile typeRPINR20BITS RPINR20bits absolute 0x6A8;

// backward compatibility for RPINR21BITS
    typedef struct tagRPINR21BITS {
      union {
        struct {
          unsigned SS1R:6;
          unsigned :2;
          unsigned U3CTSR:6;
        };
        struct {
          unsigned SS1R0:1;
          unsigned SS1R1:1;
          unsigned SS1R2:1;
          unsigned SS1R3:1;
          unsigned SS1R4:1;
          unsigned SS1R5:1;
          unsigned :2;
          unsigned U3CTSR0:1;
          unsigned U3CTSR1:1;
          unsigned U3CTSR2:1;
          unsigned U3CTSR3:1;
          unsigned U3CTSR4:1;
          unsigned U3CTSR5:1;
        };
      };
} typeRPINR21BITS;
sfr volatile typeRPINR21BITS RPINR21bits absolute 0x6AA;

// backward compatibility for RPINR22BITS
    typedef struct tagRPINR22BITS {
      union {
        struct {
          unsigned SDI2R:6;
          unsigned :2;
          unsigned SCK2R:6;
        };
        struct {
          unsigned SDI2R0:1;
          unsigned SDI2R1:1;
          unsigned SDI2R2:1;
          unsigned SDI2R3:1;
          unsigned SDI2R4:1;
          unsigned SDI2R5:1;
          unsigned :2;
          unsigned SCK2R0:1;
          unsigned SCK2R1:1;
          unsigned SCK2R2:1;
          unsigned SCK2R3:1;
          unsigned SCK2R4:1;
          unsigned SCK2R5:1;
        };
      };
} typeRPINR22BITS;
sfr volatile typeRPINR22BITS RPINR22bits absolute 0x6AC;

// backward compatibility for RPINR23BITS
    typedef struct tagRPINR23BITS {
      union {
        struct {
          unsigned SS2R:6;
        };
        struct {
          unsigned SS2R0:1;
          unsigned SS2R1:1;
          unsigned SS2R2:1;
          unsigned SS2R3:1;
          unsigned SS2R4:1;
          unsigned SS2R5:1;
        };
      };
} typeRPINR23BITS;
sfr volatile typeRPINR23BITS RPINR23bits absolute 0x6AE;

// backward compatibility for RPINR27BITS
    typedef struct tagRPINR27BITS {
      union {
        struct {
          unsigned U4RXR:6;
          unsigned :2;
          unsigned U4CTSR:6;
        };
        struct {
          unsigned U4RXR0:1;
          unsigned U4RXR1:1;
          unsigned U4RXR2:1;
          unsigned U4RXR3:1;
          unsigned U4RXR4:1;
          unsigned U4RXR5:1;
          unsigned :2;
          unsigned U4CTSR0:1;
          unsigned U4CTSR1:1;
          unsigned U4CTSR2:1;
          unsigned U4CTSR3:1;
          unsigned U4CTSR4:1;
          unsigned U4CTSR5:1;
        };
      };
} typeRPINR27BITS;
sfr volatile typeRPINR27BITS RPINR27bits absolute 0x6B6;

// backward compatibility for RPINR28BITS
    typedef struct tagRPINR28BITS {
      union {
        struct {
          unsigned SDI3R:6;
          unsigned :2;
          unsigned SCK3R:6;
        };
        struct {
          unsigned SDI3R0:1;
          unsigned SDI3R1:1;
          unsigned SDI3R2:1;
          unsigned SDI3R3:1;
          unsigned SDI3R4:1;
          unsigned SDI3R5:1;
          unsigned :2;
          unsigned SCK3R0:1;
          unsigned SCK3R1:1;
          unsigned SCK3R2:1;
          unsigned SCK3R3:1;
          unsigned SCK3R4:1;
          unsigned SCK3R5:1;
        };
      };
} typeRPINR28BITS;
sfr volatile typeRPINR28BITS RPINR28bits absolute 0x6B8;

// backward compatibility for RPINR29BITS
    typedef struct tagRPINR29BITS {
      union {
        struct {
          unsigned SS3R:6;
        };
        struct {
          unsigned SS3R0:1;
          unsigned SS3R1:1;
          unsigned SS3R2:1;
          unsigned SS3R3:1;
          unsigned SS3R4:1;
          unsigned SS3R5:1;
        };
      };
} typeRPINR29BITS;
sfr volatile typeRPINR29BITS RPINR29bits absolute 0x6BA;

// backward compatibility for RPOR0BITS
    typedef struct tagRPOR0BITS {
      union {
        struct {
          unsigned RP0R:6;
          unsigned :2;
          unsigned RP1R:6;
        };
        struct {
          unsigned RP0R0:1;
          unsigned RP0R1:1;
          unsigned RP0R2:1;
          unsigned RP0R3:1;
          unsigned RP0R4:1;
          unsigned RP0R5:1;
          unsigned :2;
          unsigned RP1R0:1;
          unsigned RP1R1:1;
          unsigned RP1R2:1;
          unsigned RP1R3:1;
          unsigned RP1R4:1;
          unsigned RP1R5:1;
        };
      };
} typeRPOR0BITS;
sfr volatile typeRPOR0BITS RPOR0bits absolute 0x6C0;

// backward compatibility for RPOR1BITS
    typedef struct tagRPOR1BITS {
      union {
        struct {
          unsigned RP2R:6;
          unsigned :2;
          unsigned RP3R:6;
        };
        struct {
          unsigned RP2R0:1;
          unsigned RP2R1:1;
          unsigned RP2R2:1;
          unsigned RP2R3:1;
          unsigned RP2R4:1;
          unsigned RP2R5:1;
          unsigned :2;
          unsigned RP3R0:1;
          unsigned RP3R1:1;
          unsigned RP3R2:1;
          unsigned RP3R3:1;
          unsigned RP3R4:1;
          unsigned RP3R5:1;
        };
      };
} typeRPOR1BITS;
sfr volatile typeRPOR1BITS RPOR1bits absolute 0x6C2;

// backward compatibility for RPOR2BITS
    typedef struct tagRPOR2BITS {
      union {
        struct {
          unsigned RP4R:6;
          unsigned :2;
          unsigned RP5R:6;
        };
        struct {
          unsigned RP4R0:1;
          unsigned RP4R1:1;
          unsigned RP4R2:1;
          unsigned RP4R3:1;
          unsigned RP4R4:1;
          unsigned RP4R5:1;
          unsigned :2;
          unsigned RP5R0:1;
          unsigned RP5R1:1;
          unsigned RP5R2:1;
          unsigned RP5R3:1;
          unsigned RP5R4:1;
          unsigned RP5R5:1;
        };
      };
} typeRPOR2BITS;
sfr volatile typeRPOR2BITS RPOR2bits absolute 0x6C4;

// backward compatibility for RPOR3BITS
    typedef struct tagRPOR3BITS {
      union {
        struct {
          unsigned RP6R:6;
          unsigned :2;
          unsigned RP7R:6;
        };
        struct {
          unsigned RP6R0:1;
          unsigned RP6R1:1;
          unsigned RP6R2:1;
          unsigned RP6R3:1;
          unsigned RP6R4:1;
          unsigned RP6R5:1;
          unsigned :2;
          unsigned RP7R0:1;
          unsigned RP7R1:1;
          unsigned RP7R2:1;
          unsigned RP7R3:1;
          unsigned RP7R4:1;
          unsigned RP7R5:1;
        };
      };
} typeRPOR3BITS;
sfr volatile typeRPOR3BITS RPOR3bits absolute 0x6C6;

// backward compatibility for RPOR4BITS
    typedef struct tagRPOR4BITS {
      union {
        struct {
          unsigned RP8R:6;
          unsigned :2;
          unsigned RP9R:6;
        };
        struct {
          unsigned RP8R0:1;
          unsigned RP8R1:1;
          unsigned RP8R2:1;
          unsigned RP8R3:1;
          unsigned RP8R4:1;
          unsigned RP8R5:1;
          unsigned :2;
          unsigned RP9R0:1;
          unsigned RP9R1:1;
          unsigned RP9R2:1;
          unsigned RP9R3:1;
          unsigned RP9R4:1;
          unsigned RP9R5:1;
        };
      };
} typeRPOR4BITS;
sfr volatile typeRPOR4BITS RPOR4bits absolute 0x6C8;

// backward compatibility for RPOR5BITS
    typedef struct tagRPOR5BITS {
      union {
        struct {
          unsigned RP10R:6;
          unsigned :2;
          unsigned RP11R:6;
        };
        struct {
          unsigned RP10R0:1;
          unsigned RP10R1:1;
          unsigned RP10R2:1;
          unsigned RP10R3:1;
          unsigned RP10R4:1;
          unsigned RP10R5:1;
          unsigned :2;
          unsigned RP11R0:1;
          unsigned RP11R1:1;
          unsigned RP11R2:1;
          unsigned RP11R3:1;
          unsigned RP11R4:1;
          unsigned RP11R5:1;
        };
      };
} typeRPOR5BITS;
sfr volatile typeRPOR5BITS RPOR5bits absolute 0x6CA;

// backward compatibility for RPOR6BITS
    typedef struct tagRPOR6BITS {
      union {
        struct {
          unsigned RP12R:6;
          unsigned :2;
          unsigned RP13R:6;
        };
        struct {
          unsigned RP12R0:1;
          unsigned RP12R1:1;
          unsigned RP12R2:1;
          unsigned RP12R3:1;
          unsigned RP12R4:1;
          unsigned RP12R5:1;
          unsigned :2;
          unsigned RP13R0:1;
          unsigned RP13R1:1;
          unsigned RP13R2:1;
          unsigned RP13R3:1;
          unsigned RP13R4:1;
          unsigned RP13R5:1;
        };
      };
} typeRPOR6BITS;
sfr volatile typeRPOR6BITS RPOR6bits absolute 0x6CC;

// backward compatibility for RPOR7BITS
    typedef struct tagRPOR7BITS {
      union {
        struct {
          unsigned RP14R:6;
          unsigned :2;
          unsigned RP15R:6;
        };
        struct {
          unsigned RP14R0:1;
          unsigned RP14R1:1;
          unsigned RP14R2:1;
          unsigned RP14R3:1;
          unsigned RP14R4:1;
          unsigned RP14R5:1;
          unsigned :2;
          unsigned RP15R0:1;
          unsigned RP15R1:1;
          unsigned RP15R2:1;
          unsigned RP15R3:1;
          unsigned RP15R4:1;
          unsigned RP15R5:1;
        };
      };
} typeRPOR7BITS;
sfr volatile typeRPOR7BITS RPOR7bits absolute 0x6CE;

// backward compatibility for RPOR8BITS
    typedef struct tagRPOR8BITS {
      union {
        struct {
          unsigned RP16R:6;
          unsigned :2;
          unsigned RP17R:6;
        };
        struct {
          unsigned RP16R0:1;
          unsigned RP16R1:1;
          unsigned RP16R2:1;
          unsigned RP16R3:1;
          unsigned RP16R4:1;
          unsigned RP16R5:1;
          unsigned :2;
          unsigned RP17R0:1;
          unsigned RP17R1:1;
          unsigned RP17R2:1;
          unsigned RP17R3:1;
          unsigned RP17R4:1;
          unsigned RP17R5:1;
        };
      };
} typeRPOR8BITS;
sfr volatile typeRPOR8BITS RPOR8bits absolute 0x6D0;

// backward compatibility for RPOR9BITS
    typedef struct tagRPOR9BITS {
      union {
        struct {
          unsigned RP18R:6;
          unsigned :2;
          unsigned RP19R:6;
        };
        struct {
          unsigned RP18R0:1;
          unsigned RP18R1:1;
          unsigned RP18R2:1;
          unsigned RP18R3:1;
          unsigned RP18R4:1;
          unsigned RP18R5:1;
          unsigned :2;
          unsigned RP19R0:1;
          unsigned RP19R1:1;
          unsigned RP19R2:1;
          unsigned RP19R3:1;
          unsigned RP19R4:1;
          unsigned RP19R5:1;
        };
      };
} typeRPOR9BITS;
sfr volatile typeRPOR9BITS RPOR9bits absolute 0x6D2;

// backward compatibility for RPOR10BITS
    typedef struct tagRPOR10BITS {
      union {
        struct {
          unsigned RP20R:6;
          unsigned :2;
          unsigned RP21R:6;
        };
        struct {
          unsigned RP20R0:1;
          unsigned RP20R1:1;
          unsigned RP20R2:1;
          unsigned RP20R3:1;
          unsigned RP20R4:1;
          unsigned RP20R5:1;
          unsigned :2;
          unsigned RP21R0:1;
          unsigned RP21R1:1;
          unsigned RP21R2:1;
          unsigned RP21R3:1;
          unsigned RP21R4:1;
          unsigned RP21R5:1;
        };
      };
} typeRPOR10BITS;
sfr volatile typeRPOR10BITS RPOR10bits absolute 0x6D4;

// backward compatibility for RPOR11BITS
    typedef struct tagRPOR11BITS {
      union {
        struct {
          unsigned RP22R:6;
          unsigned :2;
          unsigned RP23R:6;
        };
        struct {
          unsigned RP22R0:1;
          unsigned RP22R1:1;
          unsigned RP22R2:1;
          unsigned RP22R3:1;
          unsigned RP22R4:1;
          unsigned RP22R5:1;
          unsigned :2;
          unsigned RP23R0:1;
          unsigned RP23R1:1;
          unsigned RP23R2:1;
          unsigned RP23R3:1;
          unsigned RP23R4:1;
          unsigned RP23R5:1;
        };
      };
} typeRPOR11BITS;
sfr volatile typeRPOR11BITS RPOR11bits absolute 0x6D6;

// backward compatibility for RPOR12BITS
    typedef struct tagRPOR12BITS {
      union {
        struct {
          unsigned RP24R:6;
          unsigned :2;
          unsigned RP25R:6;
        };
        struct {
          unsigned RP24R0:1;
          unsigned RP24R1:1;
          unsigned RP24R2:1;
          unsigned RP24R3:1;
          unsigned RP24R4:1;
          unsigned RP24R5:1;
          unsigned :2;
          unsigned RP25R0:1;
          unsigned RP25R1:1;
          unsigned RP25R2:1;
          unsigned RP25R3:1;
          unsigned RP25R4:1;
          unsigned RP25R5:1;
        };
      };
} typeRPOR12BITS;
sfr volatile typeRPOR12BITS RPOR12bits absolute 0x6D8;

// backward compatibility for RPOR13BITS
    typedef struct tagRPOR13BITS {
      union {
        struct {
          unsigned RP26R:6;
          unsigned :2;
          unsigned RP27R:6;
        };
        struct {
          unsigned RP26R0:1;
          unsigned RP26R1:1;
          unsigned RP26R2:1;
          unsigned RP26R3:1;
          unsigned RP26R4:1;
          unsigned RP26R5:1;
          unsigned :2;
          unsigned RP27R0:1;
          unsigned RP27R1:1;
          unsigned RP27R2:1;
          unsigned RP27R3:1;
          unsigned RP27R4:1;
          unsigned RP27R5:1;
        };
      };
} typeRPOR13BITS;
sfr volatile typeRPOR13BITS RPOR13bits absolute 0x6DA;

// backward compatibility for RPOR14BITS
    typedef struct tagRPOR14BITS {
      union {
        struct {
          unsigned RP28R:6;
          unsigned :2;
          unsigned RP29R:6;
        };
        struct {
          unsigned RP28R0:1;
          unsigned RP28R1:1;
          unsigned RP28R2:1;
          unsigned RP28R3:1;
          unsigned RP28R4:1;
          unsigned RP28R5:1;
          unsigned :2;
          unsigned RP29R0:1;
          unsigned RP29R1:1;
          unsigned RP29R2:1;
          unsigned RP29R3:1;
          unsigned RP29R4:1;
          unsigned RP29R5:1;
        };
      };
} typeRPOR14BITS;
sfr volatile typeRPOR14BITS RPOR14bits absolute 0x6DC;

// backward compatibility for RPOR15BITS
    typedef struct tagRPOR15BITS {
      union {
        struct {
          unsigned RP30R:6;
        };
        struct {
          unsigned RP30R0:1;
          unsigned RP30R1:1;
          unsigned RP30R2:1;
          unsigned RP30R3:1;
          unsigned RP30R4:1;
          unsigned RP30R5:1;
        };
      };
} typeRPOR15BITS;
sfr volatile typeRPOR15BITS RPOR15bits absolute 0x6DE;

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
          unsigned :4;
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
          unsigned :6;
          unsigned CPDIV:2;
          unsigned RCDIV:3;
          unsigned DOZEN:1;
          unsigned DOZE:3;
          unsigned ROI:1;
        };
        struct {
          unsigned :6;
          unsigned CPDIV0:1;
          unsigned CPDIV1:1;
          unsigned RCDIV0:1;
          unsigned RCDIV1:1;
          unsigned RCDIV2:1;
          unsigned :1;
          unsigned DOZE0:1;
          unsigned DOZE1:1;
          unsigned DOZE2:1;
        };
        struct {
          unsigned :6;
          unsigned USBDOZE0:1;
          unsigned USBDOZE1:1;
        };
        struct {
          unsigned :6;
          unsigned USBDOZE:2;
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
      unsigned OC6MD:1;
      unsigned OC7MD:1;
      unsigned OC8MD:1;
      unsigned IC1MD:1;
      unsigned IC2MD:1;
      unsigned IC3MD:1;
      unsigned IC4MD:1;
      unsigned IC5MD:1;
      unsigned IC6MD:1;
      unsigned IC7MD:1;
      unsigned IC8MD:1;
} typePMD2BITS;
sfr volatile typePMD2BITS PMD2bits absolute 0x772;

// backward compatibility for PMD3BITS
    typedef struct tagPMD3BITS {
      union {
        struct {
          unsigned :1;
          unsigned I2C2MD:1;
          unsigned I2C3MD:1;
          unsigned U3MD:1;
          unsigned :3;
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
      unsigned USB1MD:1;
      unsigned LVDMD:1;
      unsigned CTMUMD:1;
      unsigned REFOMD:1;
      unsigned :1;
      unsigned U4MD:1;
      unsigned UPWMMD:1;
} typePMD4BITS;
sfr volatile typePMD4BITS PMD4bits absolute 0x776;

// backward compatibility for PMD5BITS
    typedef struct tagPMD5BITS {
      unsigned OC9MD:1;
      unsigned :7;
      unsigned IC9MD:1;
} typePMD5BITS;
sfr volatile typePMD5BITS PMD5bits absolute 0x778;

// backward compatibility for PMD6BITS
    typedef struct tagPMD6BITS {
      unsigned SPI3MD:1;
} typePMD6BITS;
sfr volatile typePMD6BITS PMD6bits absolute 0x77A;

