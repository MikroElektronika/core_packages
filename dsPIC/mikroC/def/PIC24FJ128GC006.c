// Definition file for P24FJ128GC006

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
const unsigned long __XRAM_RAM_SIZE = 0x00001FFF;
const unsigned long __XRAM_RAM_START = 0x800;
const long __CONST_FAR_PREFIX = 0x200;
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
const unsigned IVT_ADDR_DMA0INTERRUPT        = 0x001C;
const unsigned IVT_ADDR_IC2INTERRUPT         = 0x001E;
const unsigned IVT_ADDR_OC2INTERRUPT         = 0x0020;
const unsigned IVT_ADDR_T2INTERRUPT          = 0x0022;
const unsigned IVT_ADDR_T3INTERRUPT          = 0x0024;
const unsigned IVT_ADDR_SPI1ERRINTERRUPT     = 0x0026;
const unsigned IVT_ADDR_SPI1INTERRUPT        = 0x0028;
const unsigned IVT_ADDR_U1RXINTERRUPT        = 0x002A;
const unsigned IVT_ADDR_U1TXINTERRUPT        = 0x002C;
const unsigned IVT_ADDR_ADC1INTERRUPT        = 0x002E;
const unsigned IVT_ADDR_DMA1INTERRUPT        = 0x0030;
const unsigned IVT_ADDR_INTERRUPT15          = 0x0032;
const unsigned IVT_ADDR_SI2C1INTERRUPT       = 0x0034;
const unsigned IVT_ADDR_MI2C1INTERRUPT       = 0x0036;
const unsigned IVT_ADDR_COMPINTERRUPT        = 0x0038;
const unsigned IVT_ADDR_CNINTERRUPT          = 0x003A;
const unsigned IVT_ADDR_INT1INTERRUPT        = 0x003C;
const unsigned IVT_ADDR_INTERRUPT21          = 0x003E;
const unsigned IVT_ADDR_IC7INTERRUPT         = 0x0040;
const unsigned IVT_ADDR_IC8INTERRUPT         = 0x0042;
const unsigned IVT_ADDR_DMA2INTERRUPT        = 0x0044;
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
const unsigned IVT_ADDR_DMA3INTERRUPT        = 0x005C;
const unsigned IVT_ADDR_IC3INTERRUPT         = 0x005E;
const unsigned IVT_ADDR_IC4INTERRUPT         = 0x0060;
const unsigned IVT_ADDR_IC5INTERRUPT         = 0x0062;
const unsigned IVT_ADDR_IC6INTERRUPT         = 0x0064;
const unsigned IVT_ADDR_OC5INTERRUPT         = 0x0066;
const unsigned IVT_ADDR_OC6INTERRUPT         = 0x0068;
const unsigned IVT_ADDR_OC7INTERRUPT         = 0x006A;
const unsigned IVT_ADDR_OC8INTERRUPT         = 0x006C;
const unsigned IVT_ADDR_PMPINTERRUPT         = 0x006E;
const unsigned IVT_ADDR_DMA4INTERRUPT        = 0x0070;
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
const unsigned IVT_ADDR_DMA5INTERRUPT        = 0x008E;
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
const unsigned IVT_ADDR_DAC1INTERRUPT        = 0x00B0;
const unsigned IVT_ADDR_DAC2INTERRUPT        = 0x00B2;
const unsigned IVT_ADDR_INTERRUPT80          = 0x00B4;
const unsigned IVT_ADDR_U3ERRINTERRUPT       = 0x00B6;
const unsigned IVT_ADDR_U3RXINTERRUPT        = 0x00B8;
const unsigned IVT_ADDR_U3TXINTERRUPT        = 0x00BA;
const unsigned IVT_ADDR_INTERRUPT84          = 0x00BC;
const unsigned IVT_ADDR_INTERRUPT85          = 0x00BE;
const unsigned IVT_ADDR_USB1INTERRUPT        = 0x00C0;
const unsigned IVT_ADDR_U4ERRINTERRUPT       = 0x00C2;
const unsigned IVT_ADDR_U4RXINTERRUPT        = 0x00C4;
const unsigned IVT_ADDR_U4TXINTERRUPT        = 0x00C6;
const unsigned IVT_ADDR_INTERRUPT90          = 0x00C8;
const unsigned IVT_ADDR_INTERRUPT91          = 0x00CA;
const unsigned IVT_ADDR_OC9INTERRUPT         = 0x00CC;
const unsigned IVT_ADDR_IC9INTERRUPT         = 0x00CE;
const unsigned IVT_ADDR_INTERRUPT94          = 0x00D0;
const unsigned IVT_ADDR_INTERRUPT95          = 0x00D2;
const unsigned IVT_ADDR_INTERRUPT96          = 0x00D4;
const unsigned IVT_ADDR_INTERRUPT97          = 0x00D6;
const unsigned IVT_ADDR_INTERRUPT98          = 0x00D8;
const unsigned IVT_ADDR_INTERRUPT99          = 0x00DA;
const unsigned IVT_ADDR_LCDINTERRUPT         = 0x00DC;
const unsigned IVT_ADDR_INTERRUPT101         = 0x00DE;
const unsigned IVT_ADDR_INTERRUPT102         = 0x00E0;
const unsigned IVT_ADDR_AMP1INTERRUPT        = 0x00E2;
const unsigned IVT_ADDR_AMP2INTERRUPT        = 0x00E4;
const unsigned IVT_ADDR_SDA1INTERRUPT        = 0x00E6;
const unsigned IVT_ADDR_FSTINTERRUPT         = 0x00E8;
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
const unsigned IVT_ADDR_JTAGINTERRUPT        = 0x00FE;

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
const unsigned AIVT_ADDR_ALTDMA0INTERRUPT     = 0x011C;
const unsigned AIVT_ADDR_ALTIC2INTERRUPT      = 0x011E;
const unsigned AIVT_ADDR_ALTOC2INTERRUPT      = 0x0120;
const unsigned AIVT_ADDR_ALTT2INTERRUPT       = 0x0122;
const unsigned AIVT_ADDR_ALTT3INTERRUPT       = 0x0124;
const unsigned AIVT_ADDR_ALTSPI1ERRINTERRUPT  = 0x0126;
const unsigned AIVT_ADDR_ALTSPI1INTERRUPT     = 0x0128;
const unsigned AIVT_ADDR_ALTU1RXINTERRUPT     = 0x012A;
const unsigned AIVT_ADDR_ALTU1TXINTERRUPT     = 0x012C;
const unsigned AIVT_ADDR_ALTADC1INTERRUPT     = 0x012E;
const unsigned AIVT_ADDR_ALTDMA1INTERRUPT     = 0x0130;
const unsigned AIVT_ADDR_ALTINTERRUPT15       = 0x0132;
const unsigned AIVT_ADDR_ALTSI2C1INTERRUPT    = 0x0134;
const unsigned AIVT_ADDR_ALTMI2C1INTERRUPT    = 0x0136;
const unsigned AIVT_ADDR_ALTCOMPINTERRUPT     = 0x0138;
const unsigned AIVT_ADDR_ALTCNINTERRUPT       = 0x013A;
const unsigned AIVT_ADDR_ALTINT1INTERRUPT     = 0x013C;
const unsigned AIVT_ADDR_ALTINTERRUPT21       = 0x013E;
const unsigned AIVT_ADDR_ALTIC7INTERRUPT      = 0x0140;
const unsigned AIVT_ADDR_ALTIC8INTERRUPT      = 0x0142;
const unsigned AIVT_ADDR_ALTDMA2INTERRUPT     = 0x0144;
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
const unsigned AIVT_ADDR_ALTDMA3INTERRUPT     = 0x015C;
const unsigned AIVT_ADDR_ALTIC3INTERRUPT      = 0x015E;
const unsigned AIVT_ADDR_ALTIC4INTERRUPT      = 0x0160;
const unsigned AIVT_ADDR_ALTIC5INTERRUPT      = 0x0162;
const unsigned AIVT_ADDR_ALTIC6INTERRUPT      = 0x0164;
const unsigned AIVT_ADDR_ALTOC5INTERRUPT      = 0x0166;
const unsigned AIVT_ADDR_ALTOC6INTERRUPT      = 0x0168;
const unsigned AIVT_ADDR_ALTOC7INTERRUPT      = 0x016A;
const unsigned AIVT_ADDR_ALTOC8INTERRUPT      = 0x016C;
const unsigned AIVT_ADDR_ALTPMPINTERRUPT      = 0x016E;
const unsigned AIVT_ADDR_ALTDMA4INTERRUPT     = 0x0170;
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
const unsigned AIVT_ADDR_ALTDMA5INTERRUPT     = 0x018E;
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
const unsigned AIVT_ADDR_ALTDAC1INTERRUPT     = 0x01B0;
const unsigned AIVT_ADDR_ALTDAC2INTERRUPT     = 0x01B2;
const unsigned AIVT_ADDR_ALTINTERRUPT80       = 0x01B4;
const unsigned AIVT_ADDR_ALTU3ERRINTERRUPT    = 0x01B6;
const unsigned AIVT_ADDR_ALTU3RXINTERRUPT     = 0x01B8;
const unsigned AIVT_ADDR_ALTU3TXINTERRUPT     = 0x01BA;
const unsigned AIVT_ADDR_ALTINTERRUPT84       = 0x01BC;
const unsigned AIVT_ADDR_ALTINTERRUPT85       = 0x01BE;
const unsigned AIVT_ADDR_ALTUSB1INTERRUPT     = 0x01C0;
const unsigned AIVT_ADDR_ALTU4ERRINTERRUPT    = 0x01C2;
const unsigned AIVT_ADDR_ALTU4RXINTERRUPT     = 0x01C4;
const unsigned AIVT_ADDR_ALTU4TXINTERRUPT     = 0x01C6;
const unsigned AIVT_ADDR_ALTINTERRUPT90       = 0x01C8;
const unsigned AIVT_ADDR_ALTINTERRUPT91       = 0x01CA;
const unsigned AIVT_ADDR_ALTOC9INTERRUPT      = 0x01CC;
const unsigned AIVT_ADDR_ALTIC9INTERRUPT      = 0x01CE;
const unsigned AIVT_ADDR_ALTINTERRUPT94       = 0x01D0;
const unsigned AIVT_ADDR_ALTINTERRUPT95       = 0x01D2;
const unsigned AIVT_ADDR_ALTINTERRUPT96       = 0x01D4;
const unsigned AIVT_ADDR_ALTINTERRUPT97       = 0x01D6;
const unsigned AIVT_ADDR_ALTINTERRUPT98       = 0x01D8;
const unsigned AIVT_ADDR_ALTINTERRUPT99       = 0x01DA;
const unsigned AIVT_ADDR_ALTLCDINTERRUPT      = 0x01DC;
const unsigned AIVT_ADDR_ALTINTERRUPT101      = 0x01DE;
const unsigned AIVT_ADDR_ALTINTERRUPT102      = 0x01E0;
const unsigned AIVT_ADDR_ALTAMP1INTERRUPT     = 0x01E2;
const unsigned AIVT_ADDR_ALTAMP2INTERRUPT     = 0x01E4;
const unsigned AIVT_ADDR_ALTSDA1INTERRUPT     = 0x01E6;
const unsigned AIVT_ADDR_ALTFSTINTERRUPT      = 0x01E8;
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
const unsigned AIVT_ADDR_ALTJTAGINTERRUPT     = 0x01FE;

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
sfr unsigned int volatile DSRPAG           absolute 0x0032;
sfr unsigned int volatile DSWPAG           absolute 0x0034;
sfr unsigned int volatile RCOUNT           absolute 0x0036;
sfr unsigned int volatile SR               absolute 0x0042;
sfr unsigned int volatile CORCON           absolute 0x0044;
sfr unsigned int volatile DISICNT          absolute 0x0052;
sfr unsigned int volatile TBLPAG           absolute 0x0054;
sfr unsigned int volatile CNPD1            absolute 0x0056;
sfr unsigned int volatile CNPD2            absolute 0x0058;
sfr unsigned int volatile CNPD3            absolute 0x005A;
sfr unsigned int volatile CNPD4            absolute 0x005C;
sfr unsigned int volatile CNPD5            absolute 0x005E;
sfr unsigned int volatile CNPD6            absolute 0x0060;
sfr unsigned int volatile CNEN1            absolute 0x0062;
sfr unsigned int volatile CNEN2            absolute 0x0064;
sfr unsigned int volatile CNEN3            absolute 0x0066;
sfr unsigned int volatile CNEN4            absolute 0x0068;
sfr unsigned int volatile CNEN5            absolute 0x006A;
sfr unsigned int volatile CNEN6            absolute 0x006C;
sfr unsigned int volatile CNPU1            absolute 0x006E;
sfr unsigned int volatile CNPU2            absolute 0x0070;
sfr unsigned int volatile CNPU3            absolute 0x0072;
sfr unsigned int volatile CNPU4            absolute 0x0074;
sfr unsigned int volatile CNPU5            absolute 0x0076;
sfr unsigned int volatile CNPU6            absolute 0x0078;
sfr unsigned int volatile INTCON1          absolute 0x0080;
sfr unsigned int volatile INTCON2          absolute 0x0082;
sfr unsigned int volatile IFS0             absolute 0x0084;
sfr unsigned int volatile IFS1             absolute 0x0086;
sfr unsigned int volatile IFS2             absolute 0x0088;
sfr unsigned int volatile IFS3             absolute 0x008A;
sfr unsigned int volatile IFS4             absolute 0x008C;
sfr unsigned int volatile IFS5             absolute 0x008E;
sfr unsigned int volatile IFS6             absolute 0x0090;
sfr unsigned int volatile IFS7             absolute 0x0092;
sfr unsigned int          IEC0             absolute 0x0094;
sfr unsigned int          IEC1             absolute 0x0096;
sfr unsigned int          IEC2             absolute 0x0098;
sfr unsigned int          IEC3             absolute 0x009A;
sfr unsigned int          IEC4             absolute 0x009C;
sfr unsigned int          IEC5             absolute 0x009E;
sfr unsigned int volatile IEC6             absolute 0x00A0;
sfr unsigned int volatile IEC7             absolute 0x00A2;
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
sfr unsigned int volatile IPC25            absolute 0x00D6;
sfr unsigned int volatile IPC26            absolute 0x00D8;
sfr unsigned int volatile IPC29            absolute 0x00DE;
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
sfr unsigned int volatile OC6CON1          absolute 0x01C2;
sfr unsigned int volatile OC6CON2          absolute 0x01C4;
sfr unsigned int          OC6RS            absolute 0x01C6;
sfr unsigned int volatile OC6R             absolute 0x01C8;
sfr unsigned int volatile OC6TMR           absolute 0x01CA;
sfr unsigned int volatile OC7CON1          absolute 0x01CC;
sfr unsigned int volatile OC7CON2          absolute 0x01CE;
sfr unsigned int          OC7RS            absolute 0x01D0;
sfr unsigned int volatile OC7R             absolute 0x01D2;
sfr unsigned int volatile OC7TMR           absolute 0x01D4;
sfr unsigned int volatile OC8CON1          absolute 0x01D6;
sfr unsigned int volatile OC8CON2          absolute 0x01D8;
sfr unsigned int          OC8RS            absolute 0x01DA;
sfr unsigned int volatile OC8R             absolute 0x01DC;
sfr unsigned int volatile OC8TMR           absolute 0x01DE;
sfr unsigned int volatile OC9CON1          absolute 0x01E0;
sfr unsigned int volatile OC9CON2          absolute 0x01E2;
sfr unsigned int          OC9RS            absolute 0x01E4;
sfr unsigned int volatile OC9R             absolute 0x01E6;
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
sfr unsigned int volatile AMP1CON          absolute 0x024A;
sfr unsigned int volatile AMP2CON          absolute 0x024C;
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
sfr unsigned int volatile U4MODE           absolute 0x02B0;
sfr unsigned int volatile U4STA            absolute 0x02B2;
sfr unsigned int          U4TXREG          absolute 0x02B4;
sfr unsigned int volatile U4RXREG          absolute 0x02B6;
sfr unsigned int          U4BRG            absolute 0x02B8;
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
sfr unsigned int volatile ADTBL0           absolute 0x0300;
sfr unsigned int volatile ADTBL1           absolute 0x0302;
sfr unsigned int volatile ADTBL2           absolute 0x0304;
sfr unsigned int volatile ADTBL3           absolute 0x0306;
sfr unsigned int volatile ADTBL4           absolute 0x0308;
sfr unsigned int volatile ADTBL5           absolute 0x030A;
sfr unsigned int volatile ADTBL6           absolute 0x030C;
sfr unsigned int volatile ADTBL7           absolute 0x030E;
sfr unsigned int volatile ADTBL8           absolute 0x0310;
sfr unsigned int volatile ADTBL9           absolute 0x0312;
sfr unsigned int volatile ADTBL10          absolute 0x0314;
sfr unsigned int volatile ADTBL11          absolute 0x0316;
sfr unsigned int volatile ADTBL12          absolute 0x0318;
sfr unsigned int volatile ADTBL13          absolute 0x031A;
sfr unsigned int volatile ADTBL14          absolute 0x031C;
sfr unsigned int volatile ADTBL15          absolute 0x031E;
sfr unsigned int volatile ADTBL16          absolute 0x0320;
sfr unsigned int volatile ADTBL17          absolute 0x0322;
sfr unsigned int volatile ADTBL18          absolute 0x0324;
sfr unsigned int volatile ADTBL19          absolute 0x0326;
sfr unsigned int volatile ADTBL20          absolute 0x0328;
sfr unsigned int volatile ADTBL21          absolute 0x032A;
sfr unsigned int volatile ADTBL22          absolute 0x032C;
sfr unsigned int volatile ADTBL23          absolute 0x032E;
sfr unsigned int volatile ADTBL24          absolute 0x0330;
sfr unsigned int volatile ADTBL25          absolute 0x0332;
sfr unsigned int volatile ADTBL26          absolute 0x0334;
sfr unsigned int volatile ADTBL27          absolute 0x0336;
sfr unsigned int volatile ADTBL28          absolute 0x0338;
sfr unsigned int volatile ADTBL29          absolute 0x033A;
sfr unsigned int volatile ADTBL30          absolute 0x033C;
sfr unsigned int volatile ADTBL31          absolute 0x033E;
sfr unsigned int volatile ADRES0           absolute 0x0340;
sfr unsigned int volatile ADRES1           absolute 0x0342;
sfr unsigned int volatile ADRES2           absolute 0x0344;
sfr unsigned int volatile ADRES3           absolute 0x0346;
sfr unsigned int volatile ADRES4           absolute 0x0348;
sfr unsigned int volatile ADRES5           absolute 0x034A;
sfr unsigned int volatile ADRES6           absolute 0x034C;
sfr unsigned int volatile ADRES7           absolute 0x034E;
sfr unsigned int volatile ADRES8           absolute 0x0350;
sfr unsigned int volatile ADRES9           absolute 0x0352;
sfr unsigned int volatile ADRES10          absolute 0x0354;
sfr unsigned int volatile ADRES11          absolute 0x0356;
sfr unsigned int volatile ADRES12          absolute 0x0358;
sfr unsigned int volatile ADRES13          absolute 0x035A;
sfr unsigned int volatile ADRES14          absolute 0x035C;
sfr unsigned int volatile ADRES15          absolute 0x035E;
sfr unsigned int volatile ADRES16          absolute 0x0360;
sfr unsigned int volatile ADRES17          absolute 0x0362;
sfr unsigned int volatile ADRES18          absolute 0x0364;
sfr unsigned int volatile ADRES19          absolute 0x0366;
sfr unsigned int volatile ADRES20          absolute 0x0368;
sfr unsigned int volatile ADRES21          absolute 0x036A;
sfr unsigned int volatile ADRES22          absolute 0x036C;
sfr unsigned int volatile ADRES23          absolute 0x036E;
sfr unsigned int volatile ADRES24          absolute 0x0370;
sfr unsigned int volatile ADRES25          absolute 0x0372;
sfr unsigned int volatile ADRES26          absolute 0x0374;
sfr unsigned int volatile ADRES27          absolute 0x0376;
sfr unsigned int volatile ADRES28          absolute 0x0378;
sfr unsigned int volatile ADRES29          absolute 0x037A;
sfr unsigned int volatile ADRES30          absolute 0x037C;
sfr unsigned int volatile ADRES31          absolute 0x037E;
sfr unsigned int volatile DMACON           absolute 0x0380;
sfr unsigned int volatile DMABUF           absolute 0x0382;
sfr unsigned int volatile DMAL             absolute 0x0384;
sfr unsigned int volatile DMAH             absolute 0x0386;
sfr unsigned int volatile DMACH0           absolute 0x0388;
sfr unsigned int volatile DMAINT0          absolute 0x038A;
sfr unsigned int volatile DMASRC0          absolute 0x038C;
sfr unsigned int volatile DMADST0          absolute 0x038E;
sfr unsigned int volatile DMACNT0          absolute 0x0390;
sfr unsigned int volatile DMACH1           absolute 0x0392;
sfr unsigned int volatile DMAINT1          absolute 0x0394;
sfr unsigned int volatile DMASRC1          absolute 0x0396;
sfr unsigned int volatile DMADST1          absolute 0x0398;
sfr unsigned int volatile DMACNT1          absolute 0x039A;
sfr unsigned int volatile DMACH2           absolute 0x039C;
sfr unsigned int volatile DMAINT2          absolute 0x039E;
sfr unsigned int volatile DMASRC2          absolute 0x03A0;
sfr unsigned int volatile DMADST2          absolute 0x03A2;
sfr unsigned int volatile DMACNT2          absolute 0x03A4;
sfr unsigned int volatile DMACH3           absolute 0x03A6;
sfr unsigned int volatile DMAINT3          absolute 0x03A8;
sfr unsigned int volatile DMASRC3          absolute 0x03AA;
sfr unsigned int volatile DMADST3          absolute 0x03AC;
sfr unsigned int volatile DMACNT3          absolute 0x03AE;
sfr unsigned int volatile DMACH4           absolute 0x03B0;
sfr unsigned int volatile DMAINT4          absolute 0x03B2;
sfr unsigned int volatile DMASRC4          absolute 0x03B4;
sfr unsigned int volatile DMADST4          absolute 0x03B6;
sfr unsigned int volatile DMACNT4          absolute 0x03B8;
sfr unsigned int volatile DMACH5           absolute 0x03BA;
sfr unsigned int volatile DMAINT5          absolute 0x03BC;
sfr unsigned int volatile DMASRC5          absolute 0x03BE;
sfr unsigned int volatile DMADST5          absolute 0x03C0;
sfr unsigned int volatile DMACNT5          absolute 0x03C2;
sfr unsigned int volatile ADL3CON          absolute 0x0400;
sfr unsigned int volatile ADL3CONL         absolute 0x0400;
sfr unsigned int volatile ADL3CONH         absolute 0x0402;
sfr unsigned int volatile ADL3PTR          absolute 0x0404;
sfr unsigned int volatile ADL3STAT         absolute 0x0406;
sfr unsigned int volatile ADTH3L           absolute 0x0408;
sfr unsigned int volatile ADTH3H           absolute 0x040A;
sfr unsigned int volatile ADL3MSEL         absolute 0x040C;
sfr unsigned int volatile ADL3MSEL0        absolute 0x040C;
sfr unsigned int volatile ADL3MSEL1        absolute 0x040E;
sfr unsigned int volatile ADL3MSEL2        absolute 0x0410;
sfr unsigned int volatile ADL3MSEL3        absolute 0x0412;
sfr unsigned int          DAC1CON          absolute 0x0440;
sfr unsigned int volatile DAC1DAT          absolute 0x0442;
sfr unsigned int volatile DAC2CON          absolute 0x0444;
sfr unsigned int volatile DAC2DAT          absolute 0x0446;
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
sfr unsigned int volatile U1BDTP2          absolute 0x04A2;
sfr unsigned int volatile U1BDTP3          absolute 0x04A4;
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
sfr unsigned int volatile SD1CON1          absolute 0x04D0;
sfr unsigned int volatile SD1CON2          absolute 0x04D2;
sfr unsigned int volatile SD1CON3          absolute 0x04D4;
sfr unsigned int volatile SD1RESH          absolute 0x04D6;
sfr unsigned int volatile SD1RESL          absolute 0x04D8;
sfr unsigned int volatile ANCFG            absolute 0x04DE;
sfr unsigned int volatile ANSA             absolute 0x04E0;
sfr unsigned int volatile ANSB             absolute 0x04E2;
sfr unsigned int volatile ANSC             absolute 0x04E4;
sfr unsigned int volatile ANSD             absolute 0x04E6;
sfr unsigned int volatile ANSE             absolute 0x04E8;
sfr unsigned int volatile ANSF             absolute 0x04EA;
sfr unsigned int volatile ANSG             absolute 0x04EC;
sfr unsigned int volatile ADCON1           absolute 0x0500;
sfr unsigned int volatile ADCON2           absolute 0x0502;
sfr unsigned int volatile ADCON3           absolute 0x0504;
sfr unsigned int volatile ADTMRPR          absolute 0x0506;
sfr unsigned int volatile ADSTAT           absolute 0x0508;
sfr unsigned int volatile ADSTATL          absolute 0x0508;
sfr unsigned int volatile ADSTATH          absolute 0x050A;
sfr unsigned int volatile ACCON            absolute 0x050C;
sfr unsigned int volatile ACCONL           absolute 0x050C;
sfr unsigned int volatile ACCONH           absolute 0x050E;
sfr unsigned int volatile ACRES            absolute 0x0510;
sfr unsigned int volatile ACRESL           absolute 0x0510;
sfr unsigned int volatile ACRESH           absolute 0x0512;
sfr unsigned int volatile ADCHIT           absolute 0x0514;
sfr unsigned int volatile ADCHITL          absolute 0x0514;
sfr unsigned int volatile ADCHITH          absolute 0x0516;
sfr unsigned int volatile ADL0CON          absolute 0x051C;
sfr unsigned int volatile ADL0CONL         absolute 0x051C;
sfr unsigned int volatile ADL0CONH         absolute 0x051E;
sfr unsigned int volatile ADL0PTR          absolute 0x0520;
sfr unsigned int volatile ADL0STAT         absolute 0x0522;
sfr unsigned int volatile ADTH0L           absolute 0x0524;
sfr unsigned int volatile ADTH0H           absolute 0x0526;
sfr unsigned int volatile ADL0MSEL         absolute 0x0528;
sfr unsigned int volatile ADL0MSEL0        absolute 0x0528;
sfr unsigned int volatile ADL0MSEL1        absolute 0x052A;
sfr unsigned int volatile ADL0MSEL2        absolute 0x052C;
sfr unsigned int volatile ADL0MSEL3        absolute 0x052E;
sfr unsigned int volatile ADL1CON          absolute 0x0538;
sfr unsigned int volatile ADL1CONL         absolute 0x0538;
sfr unsigned int volatile ADL1CONH         absolute 0x053A;
sfr unsigned int volatile ADL1PTR          absolute 0x053C;
sfr unsigned int volatile ADL1STAT         absolute 0x053E;
sfr unsigned int volatile ADTH1L           absolute 0x0540;
sfr unsigned int volatile ADTH1H           absolute 0x0542;
sfr unsigned int volatile ADL1MSEL         absolute 0x0544;
sfr unsigned int volatile ADL1MSEL0        absolute 0x0544;
sfr unsigned int volatile ADL1MSEL1        absolute 0x0546;
sfr unsigned int volatile ADL1MSEL2        absolute 0x0548;
sfr unsigned int volatile ADL1MSEL3        absolute 0x054A;
sfr unsigned int volatile ADL2CON          absolute 0x0554;
sfr unsigned int volatile ADL2CONL         absolute 0x0554;
sfr unsigned int volatile ADL2CONH         absolute 0x0556;
sfr unsigned int volatile ADL2PTR          absolute 0x0558;
sfr unsigned int volatile ADL2STAT         absolute 0x055A;
sfr unsigned int volatile ADTH2L           absolute 0x055C;
sfr unsigned int volatile ADTH2H           absolute 0x055E;
sfr unsigned int volatile ADL2MSEL         absolute 0x0560;
sfr unsigned int volatile ADL2MSEL0        absolute 0x0560;
sfr unsigned int volatile ADL2MSEL1        absolute 0x0562;
sfr unsigned int volatile ADL2MSEL2        absolute 0x0564;
sfr unsigned int volatile ADL2MSEL3        absolute 0x0566;
sfr unsigned int volatile LCDREG           absolute 0x0580;
sfr unsigned int volatile LCDREF           absolute 0x0582;
sfr unsigned int volatile LCDCON           absolute 0x0584;
sfr unsigned int volatile LCDPS            absolute 0x0586;
sfr unsigned int volatile LCDSE0           absolute 0x0588;
sfr unsigned int volatile LCDSE1           absolute 0x058A;
sfr unsigned int volatile LCDSE2           absolute 0x058C;
sfr unsigned int volatile LCDSE3           absolute 0x058E;
sfr unsigned int volatile LCDDATA0         absolute 0x0590;
sfr unsigned int volatile LCDDATA1         absolute 0x0592;
sfr unsigned int volatile LCDDATA2         absolute 0x0594;
sfr unsigned int volatile LCDDATA3         absolute 0x0596;
sfr unsigned int volatile LCDDATA4         absolute 0x0598;
sfr unsigned int volatile LCDDATA5         absolute 0x059A;
sfr unsigned int volatile LCDDATA6         absolute 0x059C;
sfr unsigned int volatile LCDDATA7         absolute 0x059E;
sfr unsigned int volatile LCDDATA8         absolute 0x05A0;
sfr unsigned int volatile LCDDATA9         absolute 0x05A2;
sfr unsigned int volatile LCDDATA10        absolute 0x05A4;
sfr unsigned int volatile LCDDATA11        absolute 0x05A6;
sfr unsigned int volatile LCDDATA12        absolute 0x05A8;
sfr unsigned int volatile LCDDATA13        absolute 0x05AA;
sfr unsigned int volatile LCDDATA14        absolute 0x05AC;
sfr unsigned int volatile LCDDATA15        absolute 0x05AE;
sfr unsigned int volatile LCDDATA16        absolute 0x05B0;
sfr unsigned int volatile LCDDATA17        absolute 0x05B2;
sfr unsigned int volatile LCDDATA18        absolute 0x05B4;
sfr unsigned int volatile LCDDATA19        absolute 0x05B6;
sfr unsigned int volatile LCDDATA20        absolute 0x05B8;
sfr unsigned int volatile LCDDATA21        absolute 0x05BA;
sfr unsigned int volatile LCDDATA22        absolute 0x05BC;
sfr unsigned int volatile LCDDATA23        absolute 0x05BE;
sfr unsigned int volatile LCDDATA24        absolute 0x05C0;
sfr unsigned int volatile LCDDATA25        absolute 0x05C2;
sfr unsigned int volatile LCDDATA26        absolute 0x05C4;
sfr unsigned int volatile LCDDATA27        absolute 0x05C6;
sfr unsigned int volatile LCDDATA28        absolute 0x05C8;
sfr unsigned int volatile LCDDATA29        absolute 0x05CA;
sfr unsigned int volatile LCDDATA30        absolute 0x05CC;
sfr unsigned int volatile LCDDATA31        absolute 0x05CE;
sfr unsigned int volatile PMCON1           absolute 0x0600;
sfr unsigned int volatile PMCON2           absolute 0x0602;
sfr unsigned int volatile PMCON3           absolute 0x0604;
sfr unsigned int volatile PMCON4           absolute 0x0606;
sfr unsigned int volatile PMCS1CF          absolute 0x0608;
sfr unsigned int volatile PMCS1BS          absolute 0x060A;
sfr unsigned int volatile PMCS1MD          absolute 0x060C;
sfr unsigned int volatile PMCS2CF          absolute 0x060E;
sfr unsigned int volatile PMCS2BS          absolute 0x0610;
sfr unsigned int volatile PMCS2MD          absolute 0x0612;
sfr unsigned int volatile PMDOUT1          absolute 0x0614;
sfr unsigned int volatile PMDOUT2          absolute 0x0616;
sfr unsigned int volatile PMDIN1           absolute 0x0618;
sfr unsigned int volatile PMDIN2           absolute 0x061A;
sfr unsigned int volatile PMSTAT           absolute 0x061C;
sfr unsigned int volatile ALRMVAL          absolute 0x0620;
sfr unsigned int volatile ALCFGRPT         absolute 0x0622;
sfr unsigned int volatile RTCVAL           absolute 0x0624;
sfr unsigned int volatile RCFGCAL          absolute 0x0626;
sfr unsigned int volatile RTCPWC           absolute 0x0628;
sfr unsigned int volatile MDCON            absolute 0x062A;
sfr unsigned int volatile MDSRC            absolute 0x062C;
sfr unsigned int volatile MDCAR            absolute 0x062E;
sfr unsigned int volatile CMSTAT           absolute 0x0630;
sfr unsigned int          CVRCON           absolute 0x0632;
sfr unsigned int volatile CM1CON           absolute 0x0634;
sfr unsigned int volatile CM2CON           absolute 0x0636;
sfr unsigned int volatile CM3CON           absolute 0x0638;
sfr unsigned int volatile CRCCON1          absolute 0x0640;
sfr unsigned int volatile CRCCON2          absolute 0x0642;
sfr unsigned int volatile CRCXORL          absolute 0x0644;
sfr unsigned int volatile CRCXORH          absolute 0x0646;
sfr unsigned int volatile CRCDAT           absolute 0x0648;
sfr unsigned int volatile CRCDATL          absolute 0x0648;
sfr unsigned int volatile CRCDATH          absolute 0x064A;
sfr unsigned int volatile CRCWDAT          absolute 0x064C;
sfr unsigned int volatile CRCWDATL         absolute 0x064C;
sfr unsigned int volatile CRCWDATH         absolute 0x064E;
sfr unsigned int volatile BUFCON0          absolute 0x0670;
sfr unsigned int volatile BUFCON1          absolute 0x0672;
sfr unsigned int volatile BUFCON2          absolute 0x0674;
sfr unsigned int          RPINR0           absolute 0x0680;
sfr unsigned int          RPINR1           absolute 0x0682;
sfr unsigned int          RPINR2           absolute 0x0684;
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
sfr unsigned int volatile RPINR30          absolute 0x06BC;
sfr unsigned int volatile RPINR31          absolute 0x06BE;
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
sfr unsigned int volatile RPOR17           absolute 0x06E2;
sfr unsigned int volatile RPOR18           absolute 0x06E4;
sfr unsigned int          RCON             absolute 0x0740;
sfr unsigned int volatile OSCCON           absolute 0x0742;
sfr unsigned int volatile OSCCONL          absolute 0x0742;
sfr unsigned short volatile OSCCONH          absolute 0x0743;
sfr unsigned int volatile CLKDIV           absolute 0x0746;
sfr unsigned int volatile OSCTUN           absolute 0x0748;
sfr unsigned int          REFOCON          absolute 0x074E;
sfr unsigned int volatile HLVDCON          absolute 0x0756;
sfr unsigned int volatile DSCON            absolute 0x0758;
sfr unsigned int volatile DSWAKE           absolute 0x075A;
sfr unsigned int volatile DSGPR0           absolute 0x075C;
sfr unsigned int volatile DSGPR1           absolute 0x075E;
sfr unsigned int volatile NVMCON           absolute 0x0760;
sfr unsigned int volatile RCON2            absolute 0x0762;
sfr unsigned int          NVMKEY           absolute 0x0766;
sfr unsigned int          PMD1             absolute 0x0770;
sfr unsigned int          PMD2             absolute 0x0772;
sfr unsigned int          PMD3             absolute 0x0774;
sfr unsigned int volatile PMD4             absolute 0x0776;
sfr unsigned int volatile PMD5             absolute 0x0778;
sfr unsigned int volatile PMD6             absolute 0x077A;
sfr unsigned int volatile PMD7             absolute 0x077C;
sfr unsigned int volatile CTMUCON1         absolute 0x078A;
sfr unsigned int volatile CTMUCON2         absolute 0x078C;
sfr unsigned int volatile CTMUICON         absolute 0x078E;

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

    // DSRPAG bits
    const register unsigned short int DSRPAG_9 = 9;
    sbit  DSRPAG_9_bit at DSRPAG.B9;
    const register unsigned short int DSRPAG_8 = 8;
    sbit  DSRPAG_8_bit at DSRPAG.B8;
    const register unsigned short int DSRPAG_7 = 7;
    sbit  DSRPAG_7_bit at DSRPAG.B7;
    const register unsigned short int DSRPAG_6 = 6;
    sbit  DSRPAG_6_bit at DSRPAG.B6;
    const register unsigned short int DSRPAG_5 = 5;
    sbit  DSRPAG_5_bit at DSRPAG.B5;
    const register unsigned short int DSRPAG_4 = 4;
    sbit  DSRPAG_4_bit at DSRPAG.B4;
    const register unsigned short int DSRPAG_3 = 3;
    sbit  DSRPAG_3_bit at DSRPAG.B3;
    const register unsigned short int DSRPAG_2 = 2;
    sbit  DSRPAG_2_bit at DSRPAG.B2;
    const register unsigned short int DSRPAG_1 = 1;
    sbit  DSRPAG_1_bit at DSRPAG.B1;
    const register unsigned short int DSRPAG_0 = 0;
    sbit  DSRPAG_0_bit at DSRPAG.B0;

    // DSWPAG bits
    const register unsigned short int DSWPAG_8 = 8;
    sbit  DSWPAG_8_bit at DSWPAG.B8;
    const register unsigned short int DSWPAG_7 = 7;
    sbit  DSWPAG_7_bit at DSWPAG.B7;
    const register unsigned short int DSWPAG_6 = 6;
    sbit  DSWPAG_6_bit at DSWPAG.B6;
    const register unsigned short int DSWPAG_5 = 5;
    sbit  DSWPAG_5_bit at DSWPAG.B5;
    const register unsigned short int DSWPAG_4 = 4;
    sbit  DSWPAG_4_bit at DSWPAG.B4;
    const register unsigned short int DSWPAG_3 = 3;
    sbit  DSWPAG_3_bit at DSWPAG.B3;
    const register unsigned short int DSWPAG_2 = 2;
    sbit  DSWPAG_2_bit at DSWPAG.B2;
    const register unsigned short int DSWPAG_1 = 1;
    sbit  DSWPAG_1_bit at DSWPAG.B1;
    const register unsigned short int DSWPAG_0 = 0;
    sbit  DSWPAG_0_bit at DSWPAG.B0;

    // RCOUNT bits
    const register unsigned short int RCOUNT_15 = 15;
    sbit  RCOUNT_15_bit at RCOUNT.B15;
    const register unsigned short int RCOUNT_14 = 14;
    sbit  RCOUNT_14_bit at RCOUNT.B14;
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
    const register unsigned short int IPL2 = 7;
    sbit  IPL2_bit at SR.B7;
    const register unsigned short int IPL1 = 6;
    sbit  IPL1_bit at SR.B6;
    const register unsigned short int IPL0 = 5;
    sbit  IPL0_bit at SR.B5;
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

    // DISICNT bits
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

    // CNPD2 bits
    const register unsigned short int CN31PDE = 15;
    sbit  CN31PDE_bit at CNPD2.B15;
    const register unsigned short int CN30PDE = 14;
    sbit  CN30PDE_bit at CNPD2.B14;
    const register unsigned short int CN25PDE = 9;
    sbit  CN25PDE_bit at CNPD2.B9;
    const register unsigned short int CN24PDE = 8;
    sbit  CN24PDE_bit at CNPD2.B8;
    const register unsigned short int CN23PDE = 7;
    sbit  CN23PDE_bit at CNPD2.B7;
    const register unsigned short int CN22PDE = 6;
    sbit  CN22PDE_bit at CNPD2.B6;
    const register unsigned short int CN18PDE = 2;
    sbit  CN18PDE_bit at CNPD2.B2;
    const register unsigned short int CN17PDE = 1;
    sbit  CN17PDE_bit at CNPD2.B1;
    const register unsigned short int CN16PDE = 0;
    sbit  CN16PDE_bit at CNPD2.B0;

    // CNPD3 bits
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
    const register unsigned short int CN73PDE = 9;
    sbit  CN73PDE_bit at CNPD5.B9;
    const register unsigned short int CN72PDE = 8;
    sbit  CN72PDE_bit at CNPD5.B8;
    const register unsigned short int CN71PDE = 7;
    sbit  CN71PDE_bit at CNPD5.B7;
    const register unsigned short int CN69PDE = 5;
    sbit  CN69PDE_bit at CNPD5.B5;
    const register unsigned short int CN68PDE = 4;
    sbit  CN68PDE_bit at CNPD5.B4;
    const register unsigned short int CN65PDE = 1;
    sbit  CN65PDE_bit at CNPD5.B1;
    const register unsigned short int CN64PDE = 0;
    sbit  CN64PDE_bit at CNPD5.B0;

    // CNPD6 bits
    const register unsigned short int CN83PDE = 3;
    sbit  CN83PDE_bit at CNPD6.B3;

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

    // CNEN2 bits
    const register unsigned short int CN31IE = 15;
    sbit  CN31IE_bit at CNEN2.B15;
    const register unsigned short int CN30IE = 14;
    sbit  CN30IE_bit at CNEN2.B14;
    const register unsigned short int CN25IE = 9;
    sbit  CN25IE_bit at CNEN2.B9;
    const register unsigned short int CN24IE = 8;
    sbit  CN24IE_bit at CNEN2.B8;
    const register unsigned short int CN23IE = 7;
    sbit  CN23IE_bit at CNEN2.B7;
    const register unsigned short int CN22IE = 6;
    sbit  CN22IE_bit at CNEN2.B6;
    const register unsigned short int CN18IE = 2;
    sbit  CN18IE_bit at CNEN2.B2;
    const register unsigned short int CN17IE = 1;
    sbit  CN17IE_bit at CNEN2.B1;
    const register unsigned short int CN16IE = 0;
    sbit  CN16IE_bit at CNEN2.B0;

    // CNEN3 bits
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
    const register unsigned short int CN73IE = 9;
    sbit  CN73IE_bit at CNEN5.B9;
    const register unsigned short int CN72IE = 8;
    sbit  CN72IE_bit at CNEN5.B8;
    const register unsigned short int CN71IE = 7;
    sbit  CN71IE_bit at CNEN5.B7;
    const register unsigned short int CN69IE = 5;
    sbit  CN69IE_bit at CNEN5.B5;
    const register unsigned short int CN68IE = 4;
    sbit  CN68IE_bit at CNEN5.B4;
    const register unsigned short int CN65IE = 1;
    sbit  CN65IE_bit at CNEN5.B1;
    const register unsigned short int CN64IE = 0;
    sbit  CN64IE_bit at CNEN5.B0;

    // CNEN6 bits
    const register unsigned short int CN83IE = 3;
    sbit  CN83IE_bit at CNEN6.B3;

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

    // CNPU2 bits
    const register unsigned short int CN31PUE = 15;
    sbit  CN31PUE_bit at CNPU2.B15;
    const register unsigned short int CN30PUE = 14;
    sbit  CN30PUE_bit at CNPU2.B14;
    const register unsigned short int CN25PUE = 9;
    sbit  CN25PUE_bit at CNPU2.B9;
    const register unsigned short int CN24PUE = 8;
    sbit  CN24PUE_bit at CNPU2.B8;
    const register unsigned short int CN23PUE = 7;
    sbit  CN23PUE_bit at CNPU2.B7;
    const register unsigned short int CN22PUE = 6;
    sbit  CN22PUE_bit at CNPU2.B6;
    const register unsigned short int CN18PUE = 2;
    sbit  CN18PUE_bit at CNPU2.B2;
    const register unsigned short int CN17PUE = 1;
    sbit  CN17PUE_bit at CNPU2.B1;
    const register unsigned short int CN16PUE = 0;
    sbit  CN16PUE_bit at CNPU2.B0;

    // CNPU3 bits
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
    const register unsigned short int CN73PUE = 9;
    sbit  CN73PUE_bit at CNPU5.B9;
    const register unsigned short int CN72PUE = 8;
    sbit  CN72PUE_bit at CNPU5.B8;
    const register unsigned short int CN71PUE = 7;
    sbit  CN71PUE_bit at CNPU5.B7;
    const register unsigned short int CN69PUE = 5;
    sbit  CN69PUE_bit at CNPU5.B5;
    const register unsigned short int CN68PUE = 4;
    sbit  CN68PUE_bit at CNPU5.B4;
    const register unsigned short int CN65PUE = 1;
    sbit  CN65PUE_bit at CNPU5.B1;
    const register unsigned short int CN64PUE = 0;
    sbit  CN64PUE_bit at CNPU5.B0;

    // CNPU6 bits
    const register unsigned short int CN83PUE = 3;
    sbit  CN83PUE_bit at CNPU6.B3;

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
    const register unsigned short int DMA1IF = 14;
    sbit  DMA1IF_bit at IFS0.B14;
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
    const register unsigned short int DMA0IF = 4;
    sbit  DMA0IF_bit at IFS0.B4;
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
    const register unsigned short int DMA2IF = 8;
    sbit  DMA2IF_bit at IFS1.B8;
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
    const register unsigned short int DMA4IF = 14;
    sbit  DMA4IF_bit at IFS2.B14;
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
    const register unsigned short int DMA3IF = 4;
    sbit  DMA3IF_bit at IFS2.B4;
    const register unsigned short int SPI2IF = 1;
    sbit  SPI2IF_bit at IFS2.B1;
    const register unsigned short int SPF2IF = 0;
    sbit  SPF2IF_bit at IFS2.B0;

    // IFS3 bits
    const register unsigned short int RTCIF = 14;
    sbit  RTCIF_bit at IFS3.B14;
    const register unsigned short int DMA5IF = 13;
    sbit  DMA5IF_bit at IFS3.B13;
    const register unsigned short int INT4IF = 6;
    sbit  INT4IF_bit at IFS3.B6;
    const register unsigned short int INT3IF = 5;
    sbit  INT3IF_bit at IFS3.B5;
    const register unsigned short int MI2C2IF = 2;
    sbit  MI2C2IF_bit at IFS3.B2;
    const register unsigned short int SI2C2IF = 1;
    sbit  SI2C2IF_bit at IFS3.B1;

    // IFS4 bits
    const register unsigned short int DAC2IF = 15;
    sbit  DAC2IF_bit at IFS4.B15;
    const register unsigned short int DAC1IF = 14;
    sbit  DAC1IF_bit at IFS4.B14;
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
    const register unsigned short int U4TXIF = 9;
    sbit  U4TXIF_bit at IFS5.B9;
    const register unsigned short int U4RXIF = 8;
    sbit  U4RXIF_bit at IFS5.B8;
    const register unsigned short int U4ERIF = 7;
    sbit  U4ERIF_bit at IFS5.B7;
    const register unsigned short int USB1IF = 6;
    sbit  USB1IF_bit at IFS5.B6;
    const register unsigned short int U3TXIF = 3;
    sbit  U3TXIF_bit at IFS5.B3;
    const register unsigned short int U3RXIF = 2;
    sbit  U3RXIF_bit at IFS5.B2;
    const register unsigned short int U3ERIF = 1;
    sbit  U3ERIF_bit at IFS5.B1;

    // IFS6 bits
    const register unsigned short int FSTIF = 10;
    sbit  FSTIF_bit at IFS6.B10;
    const register unsigned short int SDA1IF = 9;
    sbit  SDA1IF_bit at IFS6.B9;
    const register unsigned short int AMP2IF = 8;
    sbit  AMP2IF_bit at IFS6.B8;
    const register unsigned short int AMP1IF = 7;
    sbit  AMP1IF_bit at IFS6.B7;
    const register unsigned short int LCDIF = 4;
    sbit  LCDIF_bit at IFS6.B4;

    // IFS7 bits
    const register unsigned short int JTAGIF = 5;
    sbit  JTAGIF_bit at IFS7.B5;

    // IEC0 bits
    const register unsigned short int DMA1IE = 14;
    sbit  DMA1IE_bit at IEC0.B14;
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
    const register unsigned short int DMA0IE = 4;
    sbit  DMA0IE_bit at IEC0.B4;
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
    const register unsigned short int DMA2IE = 8;
    sbit  DMA2IE_bit at IEC1.B8;
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
    const register unsigned short int DMA4IE = 14;
    sbit  DMA4IE_bit at IEC2.B14;
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
    const register unsigned short int DMA3IE = 4;
    sbit  DMA3IE_bit at IEC2.B4;
    const register unsigned short int SPI2IE = 1;
    sbit  SPI2IE_bit at IEC2.B1;
    const register unsigned short int SPF2IE = 0;
    sbit  SPF2IE_bit at IEC2.B0;

    // IEC3 bits
    const register unsigned short int RTCIE = 14;
    sbit  RTCIE_bit at IEC3.B14;
    const register unsigned short int DMA5IE = 13;
    sbit  DMA5IE_bit at IEC3.B13;
    const register unsigned short int INT4IE = 6;
    sbit  INT4IE_bit at IEC3.B6;
    const register unsigned short int INT3IE = 5;
    sbit  INT3IE_bit at IEC3.B5;
    const register unsigned short int MI2C2IE = 2;
    sbit  MI2C2IE_bit at IEC3.B2;
    const register unsigned short int SI2C2IE = 1;
    sbit  SI2C2IE_bit at IEC3.B1;

    // IEC4 bits
    const register unsigned short int DAC2IE = 15;
    sbit  DAC2IE_bit at IEC4.B15;
    const register unsigned short int DAC1IE = 14;
    sbit  DAC1IE_bit at IEC4.B14;
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
    const register unsigned short int U4TXIE = 9;
    sbit  U4TXIE_bit at IEC5.B9;
    const register unsigned short int U4RXIE = 8;
    sbit  U4RXIE_bit at IEC5.B8;
    const register unsigned short int U4ERIE = 7;
    sbit  U4ERIE_bit at IEC5.B7;
    const register unsigned short int USB1IE = 6;
    sbit  USB1IE_bit at IEC5.B6;
    const register unsigned short int U3TXIE = 3;
    sbit  U3TXIE_bit at IEC5.B3;
    const register unsigned short int U3RXIE = 2;
    sbit  U3RXIE_bit at IEC5.B2;
    const register unsigned short int U3ERIE = 1;
    sbit  U3ERIE_bit at IEC5.B1;

    // IEC6 bits
    const register unsigned short int FSTIE = 10;
    sbit  FSTIE_bit at IEC6.B10;
    const register unsigned short int SDA1IE = 9;
    sbit  SDA1IE_bit at IEC6.B9;
    const register unsigned short int AMP2IE = 8;
    sbit  AMP2IE_bit at IEC6.B8;
    const register unsigned short int AMP1IE = 7;
    sbit  AMP1IE_bit at IEC6.B7;
    const register unsigned short int LCDIE = 4;
    sbit  LCDIE_bit at IEC6.B4;

    // IEC7 bits
    const register unsigned short int JTAGIE = 5;
    sbit  JTAGIE_bit at IEC7.B5;

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
    const register unsigned short int DMA0IP_2 = 2;
    sbit  DMA0IP_2_bit at IPC1.B2;
    const register unsigned short int DMA0IP_1 = 1;
    sbit  DMA0IP_1_bit at IPC1.B1;
    const register unsigned short int DMA0IP_0 = 0;
    sbit  DMA0IP_0_bit at IPC1.B0;

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
    const register unsigned short int DMA1IP_2 = 10;
    sbit  DMA1IP_2_bit at IPC3.B10;
    const register unsigned short int DMA1IP_1 = 9;
    sbit  DMA1IP_1_bit at IPC3.B9;
    const register unsigned short int DMA1IP_0 = 8;
    sbit  DMA1IP_0_bit at IPC3.B8;
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
    const register unsigned short int MI2C1IP_2 = 6;
    sbit  MI2C1IP_2_bit at IPC4.B6;
    const register unsigned short int MI2C1IP_1 = 5;
    sbit  MI2C1IP_1_bit at IPC4.B5;
    const register unsigned short int MI2C1IP_0 = 4;
    sbit  MI2C1IP_0_bit at IPC4.B4;
    const register unsigned short int SI2C1IP_2 = 2;
    sbit  SI2C1IP_2_bit at IPC4.B2;
    const register unsigned short int SI2C1IP_1 = 1;
    sbit  SI2C1IP_1_bit at IPC4.B1;
    const register unsigned short int SI2C1IP_0 = 0;
    sbit  SI2C1IP_0_bit at IPC4.B0;

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
    const register unsigned short int DMA2IP_2 = 2;
    sbit  DMA2IP_2_bit at IPC6.B2;
    const register unsigned short int DMA2IP_1 = 1;
    sbit  DMA2IP_1_bit at IPC6.B1;
    const register unsigned short int DMA2IP_0 = 0;
    sbit  DMA2IP_0_bit at IPC6.B0;

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
    const register unsigned short int DMA3IP_2 = 2;
    sbit  DMA3IP_2_bit at IPC9.B2;
    const register unsigned short int DMA3IP_1 = 1;
    sbit  DMA3IP_1_bit at IPC9.B1;
    const register unsigned short int DMA3IP_0 = 0;
    sbit  DMA3IP_0_bit at IPC9.B0;

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
    const register unsigned short int DMA4IP_2 = 10;
    sbit  DMA4IP_2_bit at IPC11.B10;
    const register unsigned short int DMA4IP_1 = 9;
    sbit  DMA4IP_1_bit at IPC11.B9;
    const register unsigned short int DMA4IP_0 = 8;
    sbit  DMA4IP_0_bit at IPC11.B8;
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
    const register unsigned short int MI2C2IP_2 = 10;
    sbit  MI2C2IP_2_bit at IPC12.B10;
    const register unsigned short int MI2C2IP_1 = 9;
    sbit  MI2C2IP_1_bit at IPC12.B9;
    const register unsigned short int MI2C2IP_0 = 8;
    sbit  MI2C2IP_0_bit at IPC12.B8;
    const register unsigned short int SI2C2IP_2 = 6;
    sbit  SI2C2IP_2_bit at IPC12.B6;
    const register unsigned short int SI2C2IP_1 = 5;
    sbit  SI2C2IP_1_bit at IPC12.B5;
    const register unsigned short int SI2C2IP_0 = 4;
    sbit  SI2C2IP_0_bit at IPC12.B4;

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
    const register unsigned short int DMA5IP_2 = 6;
    sbit  DMA5IP_2_bit at IPC15.B6;
    const register unsigned short int DMA5IP_1 = 5;
    sbit  DMA5IP_1_bit at IPC15.B5;
    const register unsigned short int DMA5IP_0 = 4;
    sbit  DMA5IP_0_bit at IPC15.B4;

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
    const register unsigned short int DAC2IP_2 = 14;
    sbit  DAC2IP_2_bit at IPC19.B14;
    const register unsigned short int DAC2IP_1 = 13;
    sbit  DAC2IP_1_bit at IPC19.B13;
    const register unsigned short int DAC2IP_0 = 12;
    sbit  DAC2IP_0_bit at IPC19.B12;
    const register unsigned short int DAC1IP_2 = 10;
    sbit  DAC1IP_2_bit at IPC19.B10;
    const register unsigned short int DAC1IP_1 = 9;
    sbit  DAC1IP_1_bit at IPC19.B9;
    const register unsigned short int DAC1IP_0 = 8;
    sbit  DAC1IP_0_bit at IPC19.B8;
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

    // IPC22 bits
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

    // IPC25 bits
    const register unsigned short int AMP1IP_2 = 14;
    sbit  AMP1IP_2_bit at IPC25.B14;
    const register unsigned short int AMP1IP_1 = 13;
    sbit  AMP1IP_1_bit at IPC25.B13;
    const register unsigned short int AMP1IP_0 = 12;
    sbit  AMP1IP_0_bit at IPC25.B12;
    const register unsigned short int LCDIP_2 = 2;
    sbit  LCDIP_2_bit at IPC25.B2;
    const register unsigned short int LCDIP_1 = 1;
    sbit  LCDIP_1_bit at IPC25.B1;
    const register unsigned short int LCDIP_0 = 0;
    sbit  LCDIP_0_bit at IPC25.B0;

    // IPC26 bits
    const register unsigned short int FSTIP_2 = 10;
    sbit  FSTIP_2_bit at IPC26.B10;
    const register unsigned short int FSTIP_1 = 9;
    sbit  FSTIP_1_bit at IPC26.B9;
    const register unsigned short int FSTIP_0 = 8;
    sbit  FSTIP_0_bit at IPC26.B8;
    const register unsigned short int SDA1IP_2 = 6;
    sbit  SDA1IP_2_bit at IPC26.B6;
    const register unsigned short int SDA1IP_1 = 5;
    sbit  SDA1IP_1_bit at IPC26.B5;
    const register unsigned short int SDA1IP_0 = 4;
    sbit  SDA1IP_0_bit at IPC26.B4;
    const register unsigned short int AMP2IP_2 = 2;
    sbit  AMP2IP_2_bit at IPC26.B2;
    const register unsigned short int AMP2IP_1 = 1;
    sbit  AMP2IP_1_bit at IPC26.B1;
    const register unsigned short int AMP2IP_0 = 0;
    sbit  AMP2IP_0_bit at IPC26.B0;

    // IPC29 bits
    const register unsigned short int JTAGIP_2 = 6;
    sbit  JTAGIP_2_bit at IPC29.B6;
    const register unsigned short int JTAGIP_1 = 5;
    sbit  JTAGIP_1_bit at IPC29.B5;
    const register unsigned short int JTAGIP_0 = 4;
    sbit  JTAGIP_0_bit at IPC29.B4;

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
    const register unsigned short int TECS_1 = 9;
    sbit  TECS_1_bit at T1CON.B9;
    sbit  TECS_1_T1CON_bit at T1CON.B9;
    const register unsigned short int TECS_0 = 8;
    sbit  TECS_0_bit at T1CON.B8;
    sbit  TECS_0_T1CON_bit at T1CON.B8;
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
    sbit  TECS_1_T2CON_bit at T2CON.B9;
    sbit  TECS_0_T2CON_bit at T2CON.B8;
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
    sbit  TECS_1_T3CON_bit at T3CON.B9;
    sbit  TECS_0_T3CON_bit at T3CON.B8;
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
    sbit  TECS_1_T4CON_bit at T4CON.B9;
    sbit  TECS_0_T4CON_bit at T4CON.B8;
    sbit  TGATE_T4CON_bit at T4CON.B6;
    sbit  TCKPS_1_T4CON_bit at T4CON.B5;
    sbit  TCKPS_0_T4CON_bit at T4CON.B4;
    sbit  T32_T4CON_bit at T4CON.B3;
    sbit  TCS_T4CON_bit at T4CON.B1;

    // T5CON bits
    sbit  TON_T5CON_bit at T5CON.B15;
    sbit  TSIDL_T5CON_bit at T5CON.B13;
    sbit  TECS_1_T5CON_bit at T5CON.B9;
    sbit  TECS_0_T5CON_bit at T5CON.B8;
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
    const register unsigned short int ENFLTC = 9;
    sbit  ENFLTC_bit at OC1CON1.B9;
    sbit  ENFLTC_OC1CON1_bit at OC1CON1.B9;
    const register unsigned short int ENFLTB = 8;
    sbit  ENFLTB_bit at OC1CON1.B8;
    sbit  ENFLTB_OC1CON1_bit at OC1CON1.B8;
    const register unsigned short int ENFLTA = 7;
    sbit  ENFLTA_bit at OC1CON1.B7;
    sbit  ENFLTA_OC1CON1_bit at OC1CON1.B7;
    const register unsigned short int OCFLTC = 6;
    sbit  OCFLTC_bit at OC1CON1.B6;
    sbit  OCFLTC_OC1CON1_bit at OC1CON1.B6;
    const register unsigned short int OCFLTB = 5;
    sbit  OCFLTB_bit at OC1CON1.B5;
    sbit  OCFLTB_OC1CON1_bit at OC1CON1.B5;
    const register unsigned short int OCFLTA = 4;
    sbit  OCFLTA_bit at OC1CON1.B4;
    sbit  OCFLTA_OC1CON1_bit at OC1CON1.B4;
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
    sbit  ENFLTC_OC2CON1_bit at OC2CON1.B9;
    sbit  ENFLTB_OC2CON1_bit at OC2CON1.B8;
    sbit  ENFLTA_OC2CON1_bit at OC2CON1.B7;
    sbit  OCFLTC_OC2CON1_bit at OC2CON1.B6;
    sbit  OCFLTB_OC2CON1_bit at OC2CON1.B5;
    sbit  OCFLTA_OC2CON1_bit at OC2CON1.B4;
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
    sbit  ENFLTC_OC3CON1_bit at OC3CON1.B9;
    sbit  ENFLTB_OC3CON1_bit at OC3CON1.B8;
    sbit  ENFLTA_OC3CON1_bit at OC3CON1.B7;
    sbit  OCFLTC_OC3CON1_bit at OC3CON1.B6;
    sbit  OCFLTB_OC3CON1_bit at OC3CON1.B5;
    sbit  OCFLTA_OC3CON1_bit at OC3CON1.B4;
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
    sbit  ENFLTC_OC4CON1_bit at OC4CON1.B9;
    sbit  ENFLTB_OC4CON1_bit at OC4CON1.B8;
    sbit  ENFLTA_OC4CON1_bit at OC4CON1.B7;
    sbit  OCFLTC_OC4CON1_bit at OC4CON1.B6;
    sbit  OCFLTB_OC4CON1_bit at OC4CON1.B5;
    sbit  OCFLTA_OC4CON1_bit at OC4CON1.B4;
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
    sbit  ENFLTC_OC5CON1_bit at OC5CON1.B9;
    sbit  ENFLTB_OC5CON1_bit at OC5CON1.B8;
    sbit  ENFLTA_OC5CON1_bit at OC5CON1.B7;
    sbit  OCFLTC_OC5CON1_bit at OC5CON1.B6;
    sbit  OCFLTB_OC5CON1_bit at OC5CON1.B5;
    sbit  OCFLTA_OC5CON1_bit at OC5CON1.B4;
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

    // OC6CON1 bits
    sbit  OCSIDL_OC6CON1_bit at OC6CON1.B13;
    sbit  OCTSEL_2_OC6CON1_bit at OC6CON1.B12;
    sbit  OCTSEL_1_OC6CON1_bit at OC6CON1.B11;
    sbit  OCTSEL_0_OC6CON1_bit at OC6CON1.B10;
    sbit  ENFLTC_OC6CON1_bit at OC6CON1.B9;
    sbit  ENFLTB_OC6CON1_bit at OC6CON1.B8;
    sbit  ENFLTA_OC6CON1_bit at OC6CON1.B7;
    sbit  OCFLTC_OC6CON1_bit at OC6CON1.B6;
    sbit  OCFLTB_OC6CON1_bit at OC6CON1.B5;
    sbit  OCFLTA_OC6CON1_bit at OC6CON1.B4;
    sbit  TRIGMODE_OC6CON1_bit at OC6CON1.B3;
    sbit  OCM_2_OC6CON1_bit at OC6CON1.B2;
    sbit  OCM_1_OC6CON1_bit at OC6CON1.B1;
    sbit  OCM_0_OC6CON1_bit at OC6CON1.B0;

    // OC6CON2 bits
    sbit  FLTMD_OC6CON2_bit at OC6CON2.B15;
    sbit  FLTOUT_OC6CON2_bit at OC6CON2.B14;
    sbit  FLTTRIEN_OC6CON2_bit at OC6CON2.B13;
    sbit  OCINV_OC6CON2_bit at OC6CON2.B12;
    sbit  DCB_1_OC6CON2_bit at OC6CON2.B10;
    sbit  DCB_0_OC6CON2_bit at OC6CON2.B9;
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
    const register unsigned short int OC6RS_15 = 15;
    sbit  OC6RS_15_bit at OC6RS.B15;
    const register unsigned short int OC6RS_14 = 14;
    sbit  OC6RS_14_bit at OC6RS.B14;
    const register unsigned short int OC6RS_13 = 13;
    sbit  OC6RS_13_bit at OC6RS.B13;
    const register unsigned short int OC6RS_12 = 12;
    sbit  OC6RS_12_bit at OC6RS.B12;
    const register unsigned short int OC6RS_11 = 11;
    sbit  OC6RS_11_bit at OC6RS.B11;
    const register unsigned short int OC6RS_10 = 10;
    sbit  OC6RS_10_bit at OC6RS.B10;
    const register unsigned short int OC6RS_9 = 9;
    sbit  OC6RS_9_bit at OC6RS.B9;
    const register unsigned short int OC6RS_8 = 8;
    sbit  OC6RS_8_bit at OC6RS.B8;
    const register unsigned short int OC6RS_7 = 7;
    sbit  OC6RS_7_bit at OC6RS.B7;
    const register unsigned short int OC6RS_6 = 6;
    sbit  OC6RS_6_bit at OC6RS.B6;
    const register unsigned short int OC6RS_5 = 5;
    sbit  OC6RS_5_bit at OC6RS.B5;
    const register unsigned short int OC6RS_4 = 4;
    sbit  OC6RS_4_bit at OC6RS.B4;
    const register unsigned short int OC6RS_3 = 3;
    sbit  OC6RS_3_bit at OC6RS.B3;
    const register unsigned short int OC6RS_2 = 2;
    sbit  OC6RS_2_bit at OC6RS.B2;
    const register unsigned short int OC6RS_1 = 1;
    sbit  OC6RS_1_bit at OC6RS.B1;
    const register unsigned short int OC6RS_0 = 0;
    sbit  OC6RS_0_bit at OC6RS.B0;

    // OC6R bits
    const register unsigned short int OC6R_15 = 15;
    sbit  OC6R_15_bit at OC6R.B15;
    const register unsigned short int OC6R_14 = 14;
    sbit  OC6R_14_bit at OC6R.B14;
    const register unsigned short int OC6R_13 = 13;
    sbit  OC6R_13_bit at OC6R.B13;
    const register unsigned short int OC6R_12 = 12;
    sbit  OC6R_12_bit at OC6R.B12;
    const register unsigned short int OC6R_11 = 11;
    sbit  OC6R_11_bit at OC6R.B11;
    const register unsigned short int OC6R_10 = 10;
    sbit  OC6R_10_bit at OC6R.B10;
    const register unsigned short int OC6R_9 = 9;
    sbit  OC6R_9_bit at OC6R.B9;
    const register unsigned short int OC6R_8 = 8;
    sbit  OC6R_8_bit at OC6R.B8;
    const register unsigned short int OC6R_7 = 7;
    sbit  OC6R_7_bit at OC6R.B7;
    const register unsigned short int OC6R_6 = 6;
    sbit  OC6R_6_bit at OC6R.B6;
    const register unsigned short int OC6R_5 = 5;
    sbit  OC6R_5_bit at OC6R.B5;
    const register unsigned short int OC6R_4 = 4;
    sbit  OC6R_4_bit at OC6R.B4;
    const register unsigned short int OC6R_3 = 3;
    sbit  OC6R_3_bit at OC6R.B3;
    const register unsigned short int OC6R_2 = 2;
    sbit  OC6R_2_bit at OC6R.B2;
    const register unsigned short int OC6R_1 = 1;
    sbit  OC6R_1_bit at OC6R.B1;
    const register unsigned short int OC6R_0 = 0;
    sbit  OC6R_0_bit at OC6R.B0;

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
    sbit  ENFLTC_OC7CON1_bit at OC7CON1.B9;
    sbit  ENFLTB_OC7CON1_bit at OC7CON1.B8;
    sbit  ENFLTA_OC7CON1_bit at OC7CON1.B7;
    sbit  OCFLTC_OC7CON1_bit at OC7CON1.B6;
    sbit  OCFLTB_OC7CON1_bit at OC7CON1.B5;
    sbit  OCFLTA_OC7CON1_bit at OC7CON1.B4;
    sbit  TRIGMODE_OC7CON1_bit at OC7CON1.B3;
    sbit  OCM_2_OC7CON1_bit at OC7CON1.B2;
    sbit  OCM_1_OC7CON1_bit at OC7CON1.B1;
    sbit  OCM_0_OC7CON1_bit at OC7CON1.B0;

    // OC7CON2 bits
    sbit  FLTMD_OC7CON2_bit at OC7CON2.B15;
    sbit  FLTOUT_OC7CON2_bit at OC7CON2.B14;
    sbit  FLTTRIEN_OC7CON2_bit at OC7CON2.B13;
    sbit  OCINV_OC7CON2_bit at OC7CON2.B12;
    sbit  DCB_1_OC7CON2_bit at OC7CON2.B10;
    sbit  DCB_0_OC7CON2_bit at OC7CON2.B9;
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
    const register unsigned short int OC7RS_15 = 15;
    sbit  OC7RS_15_bit at OC7RS.B15;
    const register unsigned short int OC7RS_14 = 14;
    sbit  OC7RS_14_bit at OC7RS.B14;
    const register unsigned short int OC7RS_13 = 13;
    sbit  OC7RS_13_bit at OC7RS.B13;
    const register unsigned short int OC7RS_12 = 12;
    sbit  OC7RS_12_bit at OC7RS.B12;
    const register unsigned short int OC7RS_11 = 11;
    sbit  OC7RS_11_bit at OC7RS.B11;
    const register unsigned short int OC7RS_10 = 10;
    sbit  OC7RS_10_bit at OC7RS.B10;
    const register unsigned short int OC7RS_9 = 9;
    sbit  OC7RS_9_bit at OC7RS.B9;
    const register unsigned short int OC7RS_8 = 8;
    sbit  OC7RS_8_bit at OC7RS.B8;
    const register unsigned short int OC7RS_7 = 7;
    sbit  OC7RS_7_bit at OC7RS.B7;
    const register unsigned short int OC7RS_6 = 6;
    sbit  OC7RS_6_bit at OC7RS.B6;
    const register unsigned short int OC7RS_5 = 5;
    sbit  OC7RS_5_bit at OC7RS.B5;
    const register unsigned short int OC7RS_4 = 4;
    sbit  OC7RS_4_bit at OC7RS.B4;
    const register unsigned short int OC7RS_3 = 3;
    sbit  OC7RS_3_bit at OC7RS.B3;
    const register unsigned short int OC7RS_2 = 2;
    sbit  OC7RS_2_bit at OC7RS.B2;
    const register unsigned short int OC7RS_1 = 1;
    sbit  OC7RS_1_bit at OC7RS.B1;
    const register unsigned short int OC7RS_0 = 0;
    sbit  OC7RS_0_bit at OC7RS.B0;

    // OC7R bits
    const register unsigned short int OC7R_15 = 15;
    sbit  OC7R_15_bit at OC7R.B15;
    const register unsigned short int OC7R_14 = 14;
    sbit  OC7R_14_bit at OC7R.B14;
    const register unsigned short int OC7R_13 = 13;
    sbit  OC7R_13_bit at OC7R.B13;
    const register unsigned short int OC7R_12 = 12;
    sbit  OC7R_12_bit at OC7R.B12;
    const register unsigned short int OC7R_11 = 11;
    sbit  OC7R_11_bit at OC7R.B11;
    const register unsigned short int OC7R_10 = 10;
    sbit  OC7R_10_bit at OC7R.B10;
    const register unsigned short int OC7R_9 = 9;
    sbit  OC7R_9_bit at OC7R.B9;
    const register unsigned short int OC7R_8 = 8;
    sbit  OC7R_8_bit at OC7R.B8;
    const register unsigned short int OC7R_7 = 7;
    sbit  OC7R_7_bit at OC7R.B7;
    const register unsigned short int OC7R_6 = 6;
    sbit  OC7R_6_bit at OC7R.B6;
    const register unsigned short int OC7R_5 = 5;
    sbit  OC7R_5_bit at OC7R.B5;
    const register unsigned short int OC7R_4 = 4;
    sbit  OC7R_4_bit at OC7R.B4;
    const register unsigned short int OC7R_3 = 3;
    sbit  OC7R_3_bit at OC7R.B3;
    const register unsigned short int OC7R_2 = 2;
    sbit  OC7R_2_bit at OC7R.B2;
    const register unsigned short int OC7R_1 = 1;
    sbit  OC7R_1_bit at OC7R.B1;
    const register unsigned short int OC7R_0 = 0;
    sbit  OC7R_0_bit at OC7R.B0;

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
    sbit  ENFLTC_OC8CON1_bit at OC8CON1.B9;
    sbit  ENFLTB_OC8CON1_bit at OC8CON1.B8;
    sbit  ENFLTA_OC8CON1_bit at OC8CON1.B7;
    sbit  OCFLTC_OC8CON1_bit at OC8CON1.B6;
    sbit  OCFLTB_OC8CON1_bit at OC8CON1.B5;
    sbit  OCFLTA_OC8CON1_bit at OC8CON1.B4;
    sbit  TRIGMODE_OC8CON1_bit at OC8CON1.B3;
    sbit  OCM_2_OC8CON1_bit at OC8CON1.B2;
    sbit  OCM_1_OC8CON1_bit at OC8CON1.B1;
    sbit  OCM_0_OC8CON1_bit at OC8CON1.B0;

    // OC8CON2 bits
    sbit  FLTMD_OC8CON2_bit at OC8CON2.B15;
    sbit  FLTOUT_OC8CON2_bit at OC8CON2.B14;
    sbit  FLTTRIEN_OC8CON2_bit at OC8CON2.B13;
    sbit  OCINV_OC8CON2_bit at OC8CON2.B12;
    sbit  DCB_1_OC8CON2_bit at OC8CON2.B10;
    sbit  DCB_0_OC8CON2_bit at OC8CON2.B9;
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
    const register unsigned short int OC8RS_15 = 15;
    sbit  OC8RS_15_bit at OC8RS.B15;
    const register unsigned short int OC8RS_14 = 14;
    sbit  OC8RS_14_bit at OC8RS.B14;
    const register unsigned short int OC8RS_13 = 13;
    sbit  OC8RS_13_bit at OC8RS.B13;
    const register unsigned short int OC8RS_12 = 12;
    sbit  OC8RS_12_bit at OC8RS.B12;
    const register unsigned short int OC8RS_11 = 11;
    sbit  OC8RS_11_bit at OC8RS.B11;
    const register unsigned short int OC8RS_10 = 10;
    sbit  OC8RS_10_bit at OC8RS.B10;
    const register unsigned short int OC8RS_9 = 9;
    sbit  OC8RS_9_bit at OC8RS.B9;
    const register unsigned short int OC8RS_8 = 8;
    sbit  OC8RS_8_bit at OC8RS.B8;
    const register unsigned short int OC8RS_7 = 7;
    sbit  OC8RS_7_bit at OC8RS.B7;
    const register unsigned short int OC8RS_6 = 6;
    sbit  OC8RS_6_bit at OC8RS.B6;
    const register unsigned short int OC8RS_5 = 5;
    sbit  OC8RS_5_bit at OC8RS.B5;
    const register unsigned short int OC8RS_4 = 4;
    sbit  OC8RS_4_bit at OC8RS.B4;
    const register unsigned short int OC8RS_3 = 3;
    sbit  OC8RS_3_bit at OC8RS.B3;
    const register unsigned short int OC8RS_2 = 2;
    sbit  OC8RS_2_bit at OC8RS.B2;
    const register unsigned short int OC8RS_1 = 1;
    sbit  OC8RS_1_bit at OC8RS.B1;
    const register unsigned short int OC8RS_0 = 0;
    sbit  OC8RS_0_bit at OC8RS.B0;

    // OC8R bits
    const register unsigned short int OC8R_15 = 15;
    sbit  OC8R_15_bit at OC8R.B15;
    const register unsigned short int OC8R_14 = 14;
    sbit  OC8R_14_bit at OC8R.B14;
    const register unsigned short int OC8R_13 = 13;
    sbit  OC8R_13_bit at OC8R.B13;
    const register unsigned short int OC8R_12 = 12;
    sbit  OC8R_12_bit at OC8R.B12;
    const register unsigned short int OC8R_11 = 11;
    sbit  OC8R_11_bit at OC8R.B11;
    const register unsigned short int OC8R_10 = 10;
    sbit  OC8R_10_bit at OC8R.B10;
    const register unsigned short int OC8R_9 = 9;
    sbit  OC8R_9_bit at OC8R.B9;
    const register unsigned short int OC8R_8 = 8;
    sbit  OC8R_8_bit at OC8R.B8;
    const register unsigned short int OC8R_7 = 7;
    sbit  OC8R_7_bit at OC8R.B7;
    const register unsigned short int OC8R_6 = 6;
    sbit  OC8R_6_bit at OC8R.B6;
    const register unsigned short int OC8R_5 = 5;
    sbit  OC8R_5_bit at OC8R.B5;
    const register unsigned short int OC8R_4 = 4;
    sbit  OC8R_4_bit at OC8R.B4;
    const register unsigned short int OC8R_3 = 3;
    sbit  OC8R_3_bit at OC8R.B3;
    const register unsigned short int OC8R_2 = 2;
    sbit  OC8R_2_bit at OC8R.B2;
    const register unsigned short int OC8R_1 = 1;
    sbit  OC8R_1_bit at OC8R.B1;
    const register unsigned short int OC8R_0 = 0;
    sbit  OC8R_0_bit at OC8R.B0;

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
    sbit  ENFLTC_OC9CON1_bit at OC9CON1.B9;
    sbit  ENFLTB_OC9CON1_bit at OC9CON1.B8;
    sbit  ENFLTA_OC9CON1_bit at OC9CON1.B7;
    sbit  OCFLTC_OC9CON1_bit at OC9CON1.B6;
    sbit  OCFLTB_OC9CON1_bit at OC9CON1.B5;
    sbit  OCFLTA_OC9CON1_bit at OC9CON1.B4;
    sbit  TRIGMODE_OC9CON1_bit at OC9CON1.B3;
    sbit  OCM_2_OC9CON1_bit at OC9CON1.B2;
    sbit  OCM_1_OC9CON1_bit at OC9CON1.B1;
    sbit  OCM_0_OC9CON1_bit at OC9CON1.B0;

    // OC9CON2 bits
    sbit  FLTMD_OC9CON2_bit at OC9CON2.B15;
    sbit  FLTOUT_OC9CON2_bit at OC9CON2.B14;
    sbit  FLTTRIEN_OC9CON2_bit at OC9CON2.B13;
    sbit  OCINV_OC9CON2_bit at OC9CON2.B12;
    sbit  DCB_1_OC9CON2_bit at OC9CON2.B10;
    sbit  DCB_0_OC9CON2_bit at OC9CON2.B9;
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
    const register unsigned short int OC9RS_15 = 15;
    sbit  OC9RS_15_bit at OC9RS.B15;
    const register unsigned short int OC9RS_14 = 14;
    sbit  OC9RS_14_bit at OC9RS.B14;
    const register unsigned short int OC9RS_13 = 13;
    sbit  OC9RS_13_bit at OC9RS.B13;
    const register unsigned short int OC9RS_12 = 12;
    sbit  OC9RS_12_bit at OC9RS.B12;
    const register unsigned short int OC9RS_11 = 11;
    sbit  OC9RS_11_bit at OC9RS.B11;
    const register unsigned short int OC9RS_10 = 10;
    sbit  OC9RS_10_bit at OC9RS.B10;
    const register unsigned short int OC9RS_9 = 9;
    sbit  OC9RS_9_bit at OC9RS.B9;
    const register unsigned short int OC9RS_8 = 8;
    sbit  OC9RS_8_bit at OC9RS.B8;
    const register unsigned short int OC9RS_7 = 7;
    sbit  OC9RS_7_bit at OC9RS.B7;
    const register unsigned short int OC9RS_6 = 6;
    sbit  OC9RS_6_bit at OC9RS.B6;
    const register unsigned short int OC9RS_5 = 5;
    sbit  OC9RS_5_bit at OC9RS.B5;
    const register unsigned short int OC9RS_4 = 4;
    sbit  OC9RS_4_bit at OC9RS.B4;
    const register unsigned short int OC9RS_3 = 3;
    sbit  OC9RS_3_bit at OC9RS.B3;
    const register unsigned short int OC9RS_2 = 2;
    sbit  OC9RS_2_bit at OC9RS.B2;
    const register unsigned short int OC9RS_1 = 1;
    sbit  OC9RS_1_bit at OC9RS.B1;
    const register unsigned short int OC9RS_0 = 0;
    sbit  OC9RS_0_bit at OC9RS.B0;

    // OC9R bits
    const register unsigned short int OC9R_15 = 15;
    sbit  OC9R_15_bit at OC9R.B15;
    const register unsigned short int OC9R_14 = 14;
    sbit  OC9R_14_bit at OC9R.B14;
    const register unsigned short int OC9R_13 = 13;
    sbit  OC9R_13_bit at OC9R.B13;
    const register unsigned short int OC9R_12 = 12;
    sbit  OC9R_12_bit at OC9R.B12;
    const register unsigned short int OC9R_11 = 11;
    sbit  OC9R_11_bit at OC9R.B11;
    const register unsigned short int OC9R_10 = 10;
    sbit  OC9R_10_bit at OC9R.B10;
    const register unsigned short int OC9R_9 = 9;
    sbit  OC9R_9_bit at OC9R.B9;
    const register unsigned short int OC9R_8 = 8;
    sbit  OC9R_8_bit at OC9R.B8;
    const register unsigned short int OC9R_7 = 7;
    sbit  OC9R_7_bit at OC9R.B7;
    const register unsigned short int OC9R_6 = 6;
    sbit  OC9R_6_bit at OC9R.B6;
    const register unsigned short int OC9R_5 = 5;
    sbit  OC9R_5_bit at OC9R.B5;
    const register unsigned short int OC9R_4 = 4;
    sbit  OC9R_4_bit at OC9R.B4;
    const register unsigned short int OC9R_3 = 3;
    sbit  OC9R_3_bit at OC9R.B3;
    const register unsigned short int OC9R_2 = 2;
    sbit  OC9R_2_bit at OC9R.B2;
    const register unsigned short int OC9R_1 = 1;
    sbit  OC9R_1_bit at OC9R.B1;
    const register unsigned short int OC9R_0 = 0;
    sbit  OC9R_0_bit at OC9R.B0;

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
    const register unsigned short int URXINV = 4;
    sbit  URXINV_bit at U1MODE.B4;
    sbit  URXINV_U1MODE_bit at U1MODE.B4;
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
    sbit  URXINV_U2MODE_bit at U2MODE.B4;
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
    const register unsigned short int SPI1BUF_14 = 14;
    sbit  SPI1BUF_14_bit at SPI1BUF.B14;
    const register unsigned short int SPI1BUF_13 = 13;
    sbit  SPI1BUF_13_bit at SPI1BUF.B13;
    const register unsigned short int SPI1BUF_12 = 12;
    sbit  SPI1BUF_12_bit at SPI1BUF.B12;
    const register unsigned short int SPI1BUF_11 = 11;
    sbit  SPI1BUF_11_bit at SPI1BUF.B11;
    const register unsigned short int SPI1BUF_10 = 10;
    sbit  SPI1BUF_10_bit at SPI1BUF.B10;
    const register unsigned short int SPI1BUF_9 = 9;
    sbit  SPI1BUF_9_bit at SPI1BUF.B9;
    const register unsigned short int SPI1BUF_8 = 8;
    sbit  SPI1BUF_8_bit at SPI1BUF.B8;
    const register unsigned short int SPI1BUF_7 = 7;
    sbit  SPI1BUF_7_bit at SPI1BUF.B7;
    const register unsigned short int SPI1BUF_6 = 6;
    sbit  SPI1BUF_6_bit at SPI1BUF.B6;
    const register unsigned short int SPI1BUF_5 = 5;
    sbit  SPI1BUF_5_bit at SPI1BUF.B5;
    const register unsigned short int SPI1BUF_4 = 4;
    sbit  SPI1BUF_4_bit at SPI1BUF.B4;
    const register unsigned short int SPI1BUF_3 = 3;
    sbit  SPI1BUF_3_bit at SPI1BUF.B3;
    const register unsigned short int SPI1BUF_2 = 2;
    sbit  SPI1BUF_2_bit at SPI1BUF.B2;
    const register unsigned short int SPI1BUF_1 = 1;
    sbit  SPI1BUF_1_bit at SPI1BUF.B1;
    const register unsigned short int SPI1BUF_0 = 0;
    sbit  SPI1BUF_0_bit at SPI1BUF.B0;

    // AMP1CON bits
    const register unsigned short int AMPEN = 15;
    sbit  AMPEN_bit at AMP1CON.B15;
    sbit  AMPEN_AMP1CON_bit at AMP1CON.B15;
    const register unsigned short int AMPSIDL = 13;
    sbit  AMPSIDL_bit at AMP1CON.B13;
    sbit  AMPSIDL_AMP1CON_bit at AMP1CON.B13;
    const register unsigned short int AMPSLP = 12;
    sbit  AMPSLP_bit at AMP1CON.B12;
    sbit  AMPSLP_AMP1CON_bit at AMP1CON.B12;
    const register unsigned short int INTPOL_1 = 11;
    sbit  INTPOL_1_bit at AMP1CON.B11;
    sbit  INTPOL_1_AMP1CON_bit at AMP1CON.B11;
    const register unsigned short int INTPOL_0 = 10;
    sbit  INTPOL_0_bit at AMP1CON.B10;
    sbit  INTPOL_0_AMP1CON_bit at AMP1CON.B10;
    const register unsigned short int CMOUT = 9;
    sbit  CMOUT_bit at AMP1CON.B9;
    sbit  CMOUT_AMP1CON_bit at AMP1CON.B9;
    const register unsigned short int CMPSEL = 8;
    sbit  CMPSEL_bit at AMP1CON.B8;
    sbit  CMPSEL_AMP1CON_bit at AMP1CON.B8;
    const register unsigned short int SPDSEL = 7;
    sbit  SPDSEL_bit at AMP1CON.B7;
    sbit  SPDSEL_AMP1CON_bit at AMP1CON.B7;
    const register unsigned short int AMPOE = 6;
    sbit  AMPOE_bit at AMP1CON.B6;
    sbit  AMPOE_AMP1CON_bit at AMP1CON.B6;
    const register unsigned short int NINSEL_2 = 5;
    sbit  NINSEL_2_bit at AMP1CON.B5;
    sbit  NINSEL_2_AMP1CON_bit at AMP1CON.B5;
    const register unsigned short int NINSEL_1 = 4;
    sbit  NINSEL_1_bit at AMP1CON.B4;
    sbit  NINSEL_1_AMP1CON_bit at AMP1CON.B4;
    const register unsigned short int NINSEL_0 = 3;
    sbit  NINSEL_0_bit at AMP1CON.B3;
    sbit  NINSEL_0_AMP1CON_bit at AMP1CON.B3;
    const register unsigned short int PINSEL_2 = 2;
    sbit  PINSEL_2_bit at AMP1CON.B2;
    sbit  PINSEL_2_AMP1CON_bit at AMP1CON.B2;
    const register unsigned short int PINSEL_1 = 1;
    sbit  PINSEL_1_bit at AMP1CON.B1;
    sbit  PINSEL_1_AMP1CON_bit at AMP1CON.B1;
    const register unsigned short int PINSEL_0 = 0;
    sbit  PINSEL_0_bit at AMP1CON.B0;
    sbit  PINSEL_0_AMP1CON_bit at AMP1CON.B0;

    // AMP2CON bits
    sbit  AMPEN_AMP2CON_bit at AMP2CON.B15;
    sbit  AMPSIDL_AMP2CON_bit at AMP2CON.B13;
    sbit  AMPSLP_AMP2CON_bit at AMP2CON.B12;
    sbit  INTPOL_1_AMP2CON_bit at AMP2CON.B11;
    sbit  INTPOL_0_AMP2CON_bit at AMP2CON.B10;
    sbit  CMOUT_AMP2CON_bit at AMP2CON.B9;
    sbit  CMPSEL_AMP2CON_bit at AMP2CON.B8;
    sbit  SPDSEL_AMP2CON_bit at AMP2CON.B7;
    sbit  AMPOE_AMP2CON_bit at AMP2CON.B6;
    sbit  NINSEL_2_AMP2CON_bit at AMP2CON.B5;
    sbit  NINSEL_1_AMP2CON_bit at AMP2CON.B4;
    sbit  NINSEL_0_AMP2CON_bit at AMP2CON.B3;
    sbit  PINSEL_2_AMP2CON_bit at AMP2CON.B2;
    sbit  PINSEL_1_AMP2CON_bit at AMP2CON.B1;
    sbit  PINSEL_0_AMP2CON_bit at AMP2CON.B0;

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
    sbit  URXINV_U3MODE_bit at U3MODE.B4;
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
    const register unsigned short int SPI2BUF_15 = 15;
    sbit  SPI2BUF_15_bit at SPI2BUF.B15;
    const register unsigned short int SPI2BUF_14 = 14;
    sbit  SPI2BUF_14_bit at SPI2BUF.B14;
    const register unsigned short int SPI2BUF_13 = 13;
    sbit  SPI2BUF_13_bit at SPI2BUF.B13;
    const register unsigned short int SPI2BUF_12 = 12;
    sbit  SPI2BUF_12_bit at SPI2BUF.B12;
    const register unsigned short int SPI2BUF_11 = 11;
    sbit  SPI2BUF_11_bit at SPI2BUF.B11;
    const register unsigned short int SPI2BUF_10 = 10;
    sbit  SPI2BUF_10_bit at SPI2BUF.B10;
    const register unsigned short int SPI2BUF_9 = 9;
    sbit  SPI2BUF_9_bit at SPI2BUF.B9;
    const register unsigned short int SPI2BUF_8 = 8;
    sbit  SPI2BUF_8_bit at SPI2BUF.B8;
    const register unsigned short int SPI2BUF_7 = 7;
    sbit  SPI2BUF_7_bit at SPI2BUF.B7;
    const register unsigned short int SPI2BUF_6 = 6;
    sbit  SPI2BUF_6_bit at SPI2BUF.B6;
    const register unsigned short int SPI2BUF_5 = 5;
    sbit  SPI2BUF_5_bit at SPI2BUF.B5;
    const register unsigned short int SPI2BUF_4 = 4;
    sbit  SPI2BUF_4_bit at SPI2BUF.B4;
    const register unsigned short int SPI2BUF_3 = 3;
    sbit  SPI2BUF_3_bit at SPI2BUF.B3;
    const register unsigned short int SPI2BUF_2 = 2;
    sbit  SPI2BUF_2_bit at SPI2BUF.B2;
    const register unsigned short int SPI2BUF_1 = 1;
    sbit  SPI2BUF_1_bit at SPI2BUF.B1;
    const register unsigned short int SPI2BUF_0 = 0;
    sbit  SPI2BUF_0_bit at SPI2BUF.B0;

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
    sbit  URXINV_U4MODE_bit at U4MODE.B4;
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

    // TRISB bits
    const register unsigned short int TRISB15 = 15;
    sbit  TRISB15_bit at TRISB.B15;
    const register unsigned short int TRISB14 = 14;
    sbit  TRISB14_bit at TRISB.B14;
    const register unsigned short int TRISB13 = 13;
    sbit  TRISB13_bit at TRISB.B13;
    const register unsigned short int TRISB12 = 12;
    sbit  TRISB12_bit at TRISB.B12;
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
    const register unsigned short int TRISC12 = 12;
    sbit  TRISC12_bit at TRISC.B12;

    // PORTC bits
    const register unsigned short int RC15 = 15;
    sbit  RC15_bit at PORTC.B15;
    const register unsigned short int RC14 = 14;
    sbit  RC14_bit at PORTC.B14;
    const register unsigned short int RC13 = 13;
    sbit  RC13_bit at PORTC.B13;
    const register unsigned short int RC12 = 12;
    sbit  RC12_bit at PORTC.B12;

    // LATC bits
    const register unsigned short int LATC15 = 15;
    sbit  LATC15_bit at LATC.B15;
    const register unsigned short int LATC14 = 14;
    sbit  LATC14_bit at LATC.B14;
    const register unsigned short int LATC13 = 13;
    sbit  LATC13_bit at LATC.B13;
    const register unsigned short int LATC12 = 12;
    sbit  LATC12_bit at LATC.B12;

    // ODCC bits
    const register unsigned short int ODC15 = 15;
    sbit  ODC15_bit at ODCC.B15;
    const register unsigned short int ODC14 = 14;
    sbit  ODC14_bit at ODCC.B14;
    const register unsigned short int ODC13 = 13;
    sbit  ODC13_bit at ODCC.B13;
    const register unsigned short int ODC12 = 12;
    sbit  ODC12_bit at ODCC.B12;

    // TRISD bits
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
    const register unsigned short int TRISF0 = 0;
    sbit  TRISF0_bit at TRISF.B0;

    // PORTF bits
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
    const register unsigned short int RF0 = 0;
    sbit  RF0_bit at PORTF.B0;

    // LATF bits
    const register unsigned short int LATF6 = 6;
    sbit  LATF6_bit at LATF.B6;
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
    const register unsigned short int ODF6 = 6;
    sbit  ODF6_bit at ODCF.B6;
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

    // PADCFG1 bits
    const register unsigned short int PMPTTL = 0;
    sbit  PMPTTL_bit at PADCFG1.B0;

    // ADTBL0 bits
    const register unsigned short int UCTMU = 15;
    sbit  UCTMU_bit at ADTBL0.B15;
    sbit  UCTMU_ADTBL0_bit at ADTBL0.B15;
    const register unsigned short int DIFF = 14;
    sbit  DIFF_bit at ADTBL0.B14;
    sbit  DIFF_ADTBL0_bit at ADTBL0.B14;
    const register unsigned short int ADCH_6 = 6;
    sbit  ADCH_6_bit at ADTBL0.B6;
    sbit  ADCH_6_ADTBL0_bit at ADTBL0.B6;
    const register unsigned short int ADCH_5 = 5;
    sbit  ADCH_5_bit at ADTBL0.B5;
    sbit  ADCH_5_ADTBL0_bit at ADTBL0.B5;
    const register unsigned short int ADCH_4 = 4;
    sbit  ADCH_4_bit at ADTBL0.B4;
    sbit  ADCH_4_ADTBL0_bit at ADTBL0.B4;
    const register unsigned short int ADCH_3 = 3;
    sbit  ADCH_3_bit at ADTBL0.B3;
    sbit  ADCH_3_ADTBL0_bit at ADTBL0.B3;
    const register unsigned short int ADCH_2 = 2;
    sbit  ADCH_2_bit at ADTBL0.B2;
    sbit  ADCH_2_ADTBL0_bit at ADTBL0.B2;
    const register unsigned short int ADCH_1 = 1;
    sbit  ADCH_1_bit at ADTBL0.B1;
    sbit  ADCH_1_ADTBL0_bit at ADTBL0.B1;
    const register unsigned short int ADCH_0 = 0;
    sbit  ADCH_0_bit at ADTBL0.B0;
    sbit  ADCH_0_ADTBL0_bit at ADTBL0.B0;

    // ADTBL1 bits
    sbit  UCTMU_ADTBL1_bit at ADTBL1.B15;
    sbit  DIFF_ADTBL1_bit at ADTBL1.B14;
    sbit  ADCH_6_ADTBL1_bit at ADTBL1.B6;
    sbit  ADCH_5_ADTBL1_bit at ADTBL1.B5;
    sbit  ADCH_4_ADTBL1_bit at ADTBL1.B4;
    sbit  ADCH_3_ADTBL1_bit at ADTBL1.B3;
    sbit  ADCH_2_ADTBL1_bit at ADTBL1.B2;
    sbit  ADCH_1_ADTBL1_bit at ADTBL1.B1;
    sbit  ADCH_0_ADTBL1_bit at ADTBL1.B0;

    // ADTBL2 bits
    sbit  UCTMU_ADTBL2_bit at ADTBL2.B15;
    sbit  DIFF_ADTBL2_bit at ADTBL2.B14;
    sbit  ADCH_6_ADTBL2_bit at ADTBL2.B6;
    sbit  ADCH_5_ADTBL2_bit at ADTBL2.B5;
    sbit  ADCH_4_ADTBL2_bit at ADTBL2.B4;
    sbit  ADCH_3_ADTBL2_bit at ADTBL2.B3;
    sbit  ADCH_2_ADTBL2_bit at ADTBL2.B2;
    sbit  ADCH_1_ADTBL2_bit at ADTBL2.B1;
    sbit  ADCH_0_ADTBL2_bit at ADTBL2.B0;

    // ADTBL3 bits
    sbit  UCTMU_ADTBL3_bit at ADTBL3.B15;
    sbit  DIFF_ADTBL3_bit at ADTBL3.B14;
    sbit  ADCH_6_ADTBL3_bit at ADTBL3.B6;
    sbit  ADCH_5_ADTBL3_bit at ADTBL3.B5;
    sbit  ADCH_4_ADTBL3_bit at ADTBL3.B4;
    sbit  ADCH_3_ADTBL3_bit at ADTBL3.B3;
    sbit  ADCH_2_ADTBL3_bit at ADTBL3.B2;
    sbit  ADCH_1_ADTBL3_bit at ADTBL3.B1;
    sbit  ADCH_0_ADTBL3_bit at ADTBL3.B0;

    // ADTBL4 bits
    sbit  UCTMU_ADTBL4_bit at ADTBL4.B15;
    sbit  DIFF_ADTBL4_bit at ADTBL4.B14;
    sbit  ADCH_6_ADTBL4_bit at ADTBL4.B6;
    sbit  ADCH_5_ADTBL4_bit at ADTBL4.B5;
    sbit  ADCH_4_ADTBL4_bit at ADTBL4.B4;
    sbit  ADCH_3_ADTBL4_bit at ADTBL4.B3;
    sbit  ADCH_2_ADTBL4_bit at ADTBL4.B2;
    sbit  ADCH_1_ADTBL4_bit at ADTBL4.B1;
    sbit  ADCH_0_ADTBL4_bit at ADTBL4.B0;

    // ADTBL5 bits
    sbit  UCTMU_ADTBL5_bit at ADTBL5.B15;
    sbit  DIFF_ADTBL5_bit at ADTBL5.B14;
    sbit  ADCH_6_ADTBL5_bit at ADTBL5.B6;
    sbit  ADCH_5_ADTBL5_bit at ADTBL5.B5;
    sbit  ADCH_4_ADTBL5_bit at ADTBL5.B4;
    sbit  ADCH_3_ADTBL5_bit at ADTBL5.B3;
    sbit  ADCH_2_ADTBL5_bit at ADTBL5.B2;
    sbit  ADCH_1_ADTBL5_bit at ADTBL5.B1;
    sbit  ADCH_0_ADTBL5_bit at ADTBL5.B0;

    // ADTBL6 bits
    sbit  UCTMU_ADTBL6_bit at ADTBL6.B15;
    sbit  DIFF_ADTBL6_bit at ADTBL6.B14;
    sbit  ADCH_6_ADTBL6_bit at ADTBL6.B6;
    sbit  ADCH_5_ADTBL6_bit at ADTBL6.B5;
    sbit  ADCH_4_ADTBL6_bit at ADTBL6.B4;
    sbit  ADCH_3_ADTBL6_bit at ADTBL6.B3;
    sbit  ADCH_2_ADTBL6_bit at ADTBL6.B2;
    sbit  ADCH_1_ADTBL6_bit at ADTBL6.B1;
    sbit  ADCH_0_ADTBL6_bit at ADTBL6.B0;

    // ADTBL7 bits
    sbit  UCTMU_ADTBL7_bit at ADTBL7.B15;
    sbit  DIFF_ADTBL7_bit at ADTBL7.B14;
    sbit  ADCH_6_ADTBL7_bit at ADTBL7.B6;
    sbit  ADCH_5_ADTBL7_bit at ADTBL7.B5;
    sbit  ADCH_4_ADTBL7_bit at ADTBL7.B4;
    sbit  ADCH_3_ADTBL7_bit at ADTBL7.B3;
    sbit  ADCH_2_ADTBL7_bit at ADTBL7.B2;
    sbit  ADCH_1_ADTBL7_bit at ADTBL7.B1;
    sbit  ADCH_0_ADTBL7_bit at ADTBL7.B0;

    // ADTBL8 bits
    sbit  UCTMU_ADTBL8_bit at ADTBL8.B15;
    sbit  DIFF_ADTBL8_bit at ADTBL8.B14;
    sbit  ADCH_6_ADTBL8_bit at ADTBL8.B6;
    sbit  ADCH_5_ADTBL8_bit at ADTBL8.B5;
    sbit  ADCH_4_ADTBL8_bit at ADTBL8.B4;
    sbit  ADCH_3_ADTBL8_bit at ADTBL8.B3;
    sbit  ADCH_2_ADTBL8_bit at ADTBL8.B2;
    sbit  ADCH_1_ADTBL8_bit at ADTBL8.B1;
    sbit  ADCH_0_ADTBL8_bit at ADTBL8.B0;

    // ADTBL9 bits
    sbit  UCTMU_ADTBL9_bit at ADTBL9.B15;
    sbit  DIFF_ADTBL9_bit at ADTBL9.B14;
    sbit  ADCH_6_ADTBL9_bit at ADTBL9.B6;
    sbit  ADCH_5_ADTBL9_bit at ADTBL9.B5;
    sbit  ADCH_4_ADTBL9_bit at ADTBL9.B4;
    sbit  ADCH_3_ADTBL9_bit at ADTBL9.B3;
    sbit  ADCH_2_ADTBL9_bit at ADTBL9.B2;
    sbit  ADCH_1_ADTBL9_bit at ADTBL9.B1;
    sbit  ADCH_0_ADTBL9_bit at ADTBL9.B0;

    // ADTBL10 bits
    sbit  UCTMU_ADTBL10_bit at ADTBL10.B15;
    sbit  DIFF_ADTBL10_bit at ADTBL10.B14;
    sbit  ADCH_6_ADTBL10_bit at ADTBL10.B6;
    sbit  ADCH_5_ADTBL10_bit at ADTBL10.B5;
    sbit  ADCH_4_ADTBL10_bit at ADTBL10.B4;
    sbit  ADCH_3_ADTBL10_bit at ADTBL10.B3;
    sbit  ADCH_2_ADTBL10_bit at ADTBL10.B2;
    sbit  ADCH_1_ADTBL10_bit at ADTBL10.B1;
    sbit  ADCH_0_ADTBL10_bit at ADTBL10.B0;

    // ADTBL11 bits
    sbit  UCTMU_ADTBL11_bit at ADTBL11.B15;
    sbit  DIFF_ADTBL11_bit at ADTBL11.B14;
    sbit  ADCH_6_ADTBL11_bit at ADTBL11.B6;
    sbit  ADCH_5_ADTBL11_bit at ADTBL11.B5;
    sbit  ADCH_4_ADTBL11_bit at ADTBL11.B4;
    sbit  ADCH_3_ADTBL11_bit at ADTBL11.B3;
    sbit  ADCH_2_ADTBL11_bit at ADTBL11.B2;
    sbit  ADCH_1_ADTBL11_bit at ADTBL11.B1;
    sbit  ADCH_0_ADTBL11_bit at ADTBL11.B0;

    // ADTBL12 bits
    sbit  UCTMU_ADTBL12_bit at ADTBL12.B15;
    sbit  DIFF_ADTBL12_bit at ADTBL12.B14;
    sbit  ADCH_6_ADTBL12_bit at ADTBL12.B6;
    sbit  ADCH_5_ADTBL12_bit at ADTBL12.B5;
    sbit  ADCH_4_ADTBL12_bit at ADTBL12.B4;
    sbit  ADCH_3_ADTBL12_bit at ADTBL12.B3;
    sbit  ADCH_2_ADTBL12_bit at ADTBL12.B2;
    sbit  ADCH_1_ADTBL12_bit at ADTBL12.B1;
    sbit  ADCH_0_ADTBL12_bit at ADTBL12.B0;

    // ADTBL13 bits
    sbit  UCTMU_ADTBL13_bit at ADTBL13.B15;
    sbit  DIFF_ADTBL13_bit at ADTBL13.B14;
    sbit  ADCH_6_ADTBL13_bit at ADTBL13.B6;
    sbit  ADCH_5_ADTBL13_bit at ADTBL13.B5;
    sbit  ADCH_4_ADTBL13_bit at ADTBL13.B4;
    sbit  ADCH_3_ADTBL13_bit at ADTBL13.B3;
    sbit  ADCH_2_ADTBL13_bit at ADTBL13.B2;
    sbit  ADCH_1_ADTBL13_bit at ADTBL13.B1;
    sbit  ADCH_0_ADTBL13_bit at ADTBL13.B0;

    // ADTBL14 bits
    sbit  UCTMU_ADTBL14_bit at ADTBL14.B15;
    sbit  DIFF_ADTBL14_bit at ADTBL14.B14;
    sbit  ADCH_6_ADTBL14_bit at ADTBL14.B6;
    sbit  ADCH_5_ADTBL14_bit at ADTBL14.B5;
    sbit  ADCH_4_ADTBL14_bit at ADTBL14.B4;
    sbit  ADCH_3_ADTBL14_bit at ADTBL14.B3;
    sbit  ADCH_2_ADTBL14_bit at ADTBL14.B2;
    sbit  ADCH_1_ADTBL14_bit at ADTBL14.B1;
    sbit  ADCH_0_ADTBL14_bit at ADTBL14.B0;

    // ADTBL15 bits
    sbit  UCTMU_ADTBL15_bit at ADTBL15.B15;
    sbit  DIFF_ADTBL15_bit at ADTBL15.B14;
    sbit  ADCH_6_ADTBL15_bit at ADTBL15.B6;
    sbit  ADCH_5_ADTBL15_bit at ADTBL15.B5;
    sbit  ADCH_4_ADTBL15_bit at ADTBL15.B4;
    sbit  ADCH_3_ADTBL15_bit at ADTBL15.B3;
    sbit  ADCH_2_ADTBL15_bit at ADTBL15.B2;
    sbit  ADCH_1_ADTBL15_bit at ADTBL15.B1;
    sbit  ADCH_0_ADTBL15_bit at ADTBL15.B0;

    // ADTBL16 bits
    sbit  UCTMU_ADTBL16_bit at ADTBL16.B15;
    sbit  DIFF_ADTBL16_bit at ADTBL16.B14;
    sbit  ADCH_6_ADTBL16_bit at ADTBL16.B6;
    sbit  ADCH_5_ADTBL16_bit at ADTBL16.B5;
    sbit  ADCH_4_ADTBL16_bit at ADTBL16.B4;
    sbit  ADCH_3_ADTBL16_bit at ADTBL16.B3;
    sbit  ADCH_2_ADTBL16_bit at ADTBL16.B2;
    sbit  ADCH_1_ADTBL16_bit at ADTBL16.B1;
    sbit  ADCH_0_ADTBL16_bit at ADTBL16.B0;

    // ADTBL17 bits
    sbit  UCTMU_ADTBL17_bit at ADTBL17.B15;
    sbit  DIFF_ADTBL17_bit at ADTBL17.B14;
    sbit  ADCH_6_ADTBL17_bit at ADTBL17.B6;
    sbit  ADCH_5_ADTBL17_bit at ADTBL17.B5;
    sbit  ADCH_4_ADTBL17_bit at ADTBL17.B4;
    sbit  ADCH_3_ADTBL17_bit at ADTBL17.B3;
    sbit  ADCH_2_ADTBL17_bit at ADTBL17.B2;
    sbit  ADCH_1_ADTBL17_bit at ADTBL17.B1;
    sbit  ADCH_0_ADTBL17_bit at ADTBL17.B0;

    // ADTBL18 bits
    sbit  UCTMU_ADTBL18_bit at ADTBL18.B15;
    sbit  DIFF_ADTBL18_bit at ADTBL18.B14;
    sbit  ADCH_6_ADTBL18_bit at ADTBL18.B6;
    sbit  ADCH_5_ADTBL18_bit at ADTBL18.B5;
    sbit  ADCH_4_ADTBL18_bit at ADTBL18.B4;
    sbit  ADCH_3_ADTBL18_bit at ADTBL18.B3;
    sbit  ADCH_2_ADTBL18_bit at ADTBL18.B2;
    sbit  ADCH_1_ADTBL18_bit at ADTBL18.B1;
    sbit  ADCH_0_ADTBL18_bit at ADTBL18.B0;

    // ADTBL19 bits
    sbit  UCTMU_ADTBL19_bit at ADTBL19.B15;
    sbit  DIFF_ADTBL19_bit at ADTBL19.B14;
    sbit  ADCH_6_ADTBL19_bit at ADTBL19.B6;
    sbit  ADCH_5_ADTBL19_bit at ADTBL19.B5;
    sbit  ADCH_4_ADTBL19_bit at ADTBL19.B4;
    sbit  ADCH_3_ADTBL19_bit at ADTBL19.B3;
    sbit  ADCH_2_ADTBL19_bit at ADTBL19.B2;
    sbit  ADCH_1_ADTBL19_bit at ADTBL19.B1;
    sbit  ADCH_0_ADTBL19_bit at ADTBL19.B0;

    // ADTBL20 bits
    sbit  UCTMU_ADTBL20_bit at ADTBL20.B15;
    sbit  DIFF_ADTBL20_bit at ADTBL20.B14;
    sbit  ADCH_6_ADTBL20_bit at ADTBL20.B6;
    sbit  ADCH_5_ADTBL20_bit at ADTBL20.B5;
    sbit  ADCH_4_ADTBL20_bit at ADTBL20.B4;
    sbit  ADCH_3_ADTBL20_bit at ADTBL20.B3;
    sbit  ADCH_2_ADTBL20_bit at ADTBL20.B2;
    sbit  ADCH_1_ADTBL20_bit at ADTBL20.B1;
    sbit  ADCH_0_ADTBL20_bit at ADTBL20.B0;

    // ADTBL21 bits
    sbit  UCTMU_ADTBL21_bit at ADTBL21.B15;
    sbit  DIFF_ADTBL21_bit at ADTBL21.B14;
    sbit  ADCH_6_ADTBL21_bit at ADTBL21.B6;
    sbit  ADCH_5_ADTBL21_bit at ADTBL21.B5;
    sbit  ADCH_4_ADTBL21_bit at ADTBL21.B4;
    sbit  ADCH_3_ADTBL21_bit at ADTBL21.B3;
    sbit  ADCH_2_ADTBL21_bit at ADTBL21.B2;
    sbit  ADCH_1_ADTBL21_bit at ADTBL21.B1;
    sbit  ADCH_0_ADTBL21_bit at ADTBL21.B0;

    // ADTBL22 bits
    sbit  UCTMU_ADTBL22_bit at ADTBL22.B15;
    sbit  DIFF_ADTBL22_bit at ADTBL22.B14;
    sbit  ADCH_6_ADTBL22_bit at ADTBL22.B6;
    sbit  ADCH_5_ADTBL22_bit at ADTBL22.B5;
    sbit  ADCH_4_ADTBL22_bit at ADTBL22.B4;
    sbit  ADCH_3_ADTBL22_bit at ADTBL22.B3;
    sbit  ADCH_2_ADTBL22_bit at ADTBL22.B2;
    sbit  ADCH_1_ADTBL22_bit at ADTBL22.B1;
    sbit  ADCH_0_ADTBL22_bit at ADTBL22.B0;

    // ADTBL23 bits
    sbit  UCTMU_ADTBL23_bit at ADTBL23.B15;
    sbit  DIFF_ADTBL23_bit at ADTBL23.B14;
    sbit  ADCH_6_ADTBL23_bit at ADTBL23.B6;
    sbit  ADCH_5_ADTBL23_bit at ADTBL23.B5;
    sbit  ADCH_4_ADTBL23_bit at ADTBL23.B4;
    sbit  ADCH_3_ADTBL23_bit at ADTBL23.B3;
    sbit  ADCH_2_ADTBL23_bit at ADTBL23.B2;
    sbit  ADCH_1_ADTBL23_bit at ADTBL23.B1;
    sbit  ADCH_0_ADTBL23_bit at ADTBL23.B0;

    // ADTBL24 bits
    sbit  UCTMU_ADTBL24_bit at ADTBL24.B15;
    sbit  DIFF_ADTBL24_bit at ADTBL24.B14;
    sbit  ADCH_6_ADTBL24_bit at ADTBL24.B6;
    sbit  ADCH_5_ADTBL24_bit at ADTBL24.B5;
    sbit  ADCH_4_ADTBL24_bit at ADTBL24.B4;
    sbit  ADCH_3_ADTBL24_bit at ADTBL24.B3;
    sbit  ADCH_2_ADTBL24_bit at ADTBL24.B2;
    sbit  ADCH_1_ADTBL24_bit at ADTBL24.B1;
    sbit  ADCH_0_ADTBL24_bit at ADTBL24.B0;

    // ADTBL25 bits
    sbit  UCTMU_ADTBL25_bit at ADTBL25.B15;
    sbit  DIFF_ADTBL25_bit at ADTBL25.B14;
    sbit  ADCH_6_ADTBL25_bit at ADTBL25.B6;
    sbit  ADCH_5_ADTBL25_bit at ADTBL25.B5;
    sbit  ADCH_4_ADTBL25_bit at ADTBL25.B4;
    sbit  ADCH_3_ADTBL25_bit at ADTBL25.B3;
    sbit  ADCH_2_ADTBL25_bit at ADTBL25.B2;
    sbit  ADCH_1_ADTBL25_bit at ADTBL25.B1;
    sbit  ADCH_0_ADTBL25_bit at ADTBL25.B0;

    // ADTBL26 bits
    sbit  UCTMU_ADTBL26_bit at ADTBL26.B15;
    sbit  DIFF_ADTBL26_bit at ADTBL26.B14;
    sbit  ADCH_6_ADTBL26_bit at ADTBL26.B6;
    sbit  ADCH_5_ADTBL26_bit at ADTBL26.B5;
    sbit  ADCH_4_ADTBL26_bit at ADTBL26.B4;
    sbit  ADCH_3_ADTBL26_bit at ADTBL26.B3;
    sbit  ADCH_2_ADTBL26_bit at ADTBL26.B2;
    sbit  ADCH_1_ADTBL26_bit at ADTBL26.B1;
    sbit  ADCH_0_ADTBL26_bit at ADTBL26.B0;

    // ADTBL27 bits
    sbit  UCTMU_ADTBL27_bit at ADTBL27.B15;
    sbit  DIFF_ADTBL27_bit at ADTBL27.B14;
    sbit  ADCH_6_ADTBL27_bit at ADTBL27.B6;
    sbit  ADCH_5_ADTBL27_bit at ADTBL27.B5;
    sbit  ADCH_4_ADTBL27_bit at ADTBL27.B4;
    sbit  ADCH_3_ADTBL27_bit at ADTBL27.B3;
    sbit  ADCH_2_ADTBL27_bit at ADTBL27.B2;
    sbit  ADCH_1_ADTBL27_bit at ADTBL27.B1;
    sbit  ADCH_0_ADTBL27_bit at ADTBL27.B0;

    // ADTBL28 bits
    sbit  UCTMU_ADTBL28_bit at ADTBL28.B15;
    sbit  DIFF_ADTBL28_bit at ADTBL28.B14;
    sbit  ADCH_6_ADTBL28_bit at ADTBL28.B6;
    sbit  ADCH_5_ADTBL28_bit at ADTBL28.B5;
    sbit  ADCH_4_ADTBL28_bit at ADTBL28.B4;
    sbit  ADCH_3_ADTBL28_bit at ADTBL28.B3;
    sbit  ADCH_2_ADTBL28_bit at ADTBL28.B2;
    sbit  ADCH_1_ADTBL28_bit at ADTBL28.B1;
    sbit  ADCH_0_ADTBL28_bit at ADTBL28.B0;

    // ADTBL29 bits
    sbit  UCTMU_ADTBL29_bit at ADTBL29.B15;
    sbit  DIFF_ADTBL29_bit at ADTBL29.B14;
    sbit  ADCH_6_ADTBL29_bit at ADTBL29.B6;
    sbit  ADCH_5_ADTBL29_bit at ADTBL29.B5;
    sbit  ADCH_4_ADTBL29_bit at ADTBL29.B4;
    sbit  ADCH_3_ADTBL29_bit at ADTBL29.B3;
    sbit  ADCH_2_ADTBL29_bit at ADTBL29.B2;
    sbit  ADCH_1_ADTBL29_bit at ADTBL29.B1;
    sbit  ADCH_0_ADTBL29_bit at ADTBL29.B0;

    // ADTBL30 bits
    sbit  UCTMU_ADTBL30_bit at ADTBL30.B15;
    sbit  DIFF_ADTBL30_bit at ADTBL30.B14;
    sbit  ADCH_6_ADTBL30_bit at ADTBL30.B6;
    sbit  ADCH_5_ADTBL30_bit at ADTBL30.B5;
    sbit  ADCH_4_ADTBL30_bit at ADTBL30.B4;
    sbit  ADCH_3_ADTBL30_bit at ADTBL30.B3;
    sbit  ADCH_2_ADTBL30_bit at ADTBL30.B2;
    sbit  ADCH_1_ADTBL30_bit at ADTBL30.B1;
    sbit  ADCH_0_ADTBL30_bit at ADTBL30.B0;

    // ADTBL31 bits
    sbit  UCTMU_ADTBL31_bit at ADTBL31.B15;
    sbit  DIFF_ADTBL31_bit at ADTBL31.B14;
    sbit  ADCH_6_ADTBL31_bit at ADTBL31.B6;
    sbit  ADCH_5_ADTBL31_bit at ADTBL31.B5;
    sbit  ADCH_4_ADTBL31_bit at ADTBL31.B4;
    sbit  ADCH_3_ADTBL31_bit at ADTBL31.B3;
    sbit  ADCH_2_ADTBL31_bit at ADTBL31.B2;
    sbit  ADCH_1_ADTBL31_bit at ADTBL31.B1;
    sbit  ADCH_0_ADTBL31_bit at ADTBL31.B0;

    // ADRES0 bits
    const register unsigned short int ADRES_15 = 15;
    sbit  ADRES_15_bit at ADRES0.B15;
    sbit  ADRES_15_ADRES0_bit at ADRES0.B15;
    const register unsigned short int ADRES_14 = 14;
    sbit  ADRES_14_bit at ADRES0.B14;
    sbit  ADRES_14_ADRES0_bit at ADRES0.B14;
    const register unsigned short int ADRES_13 = 13;
    sbit  ADRES_13_bit at ADRES0.B13;
    sbit  ADRES_13_ADRES0_bit at ADRES0.B13;
    const register unsigned short int ADRES_12 = 12;
    sbit  ADRES_12_bit at ADRES0.B12;
    sbit  ADRES_12_ADRES0_bit at ADRES0.B12;
    const register unsigned short int ADRES_11 = 11;
    sbit  ADRES_11_bit at ADRES0.B11;
    sbit  ADRES_11_ADRES0_bit at ADRES0.B11;
    const register unsigned short int ADRES_10 = 10;
    sbit  ADRES_10_bit at ADRES0.B10;
    sbit  ADRES_10_ADRES0_bit at ADRES0.B10;
    const register unsigned short int ADRES_9 = 9;
    sbit  ADRES_9_bit at ADRES0.B9;
    sbit  ADRES_9_ADRES0_bit at ADRES0.B9;
    const register unsigned short int ADRES_8 = 8;
    sbit  ADRES_8_bit at ADRES0.B8;
    sbit  ADRES_8_ADRES0_bit at ADRES0.B8;
    const register unsigned short int ADRES_7 = 7;
    sbit  ADRES_7_bit at ADRES0.B7;
    sbit  ADRES_7_ADRES0_bit at ADRES0.B7;
    const register unsigned short int ADRES_6 = 6;
    sbit  ADRES_6_bit at ADRES0.B6;
    sbit  ADRES_6_ADRES0_bit at ADRES0.B6;
    const register unsigned short int ADRES_5 = 5;
    sbit  ADRES_5_bit at ADRES0.B5;
    sbit  ADRES_5_ADRES0_bit at ADRES0.B5;
    const register unsigned short int ADRES_4 = 4;
    sbit  ADRES_4_bit at ADRES0.B4;
    sbit  ADRES_4_ADRES0_bit at ADRES0.B4;
    const register unsigned short int ADRES_3 = 3;
    sbit  ADRES_3_bit at ADRES0.B3;
    sbit  ADRES_3_ADRES0_bit at ADRES0.B3;
    const register unsigned short int ADRES_2 = 2;
    sbit  ADRES_2_bit at ADRES0.B2;
    sbit  ADRES_2_ADRES0_bit at ADRES0.B2;
    const register unsigned short int ADRES_1 = 1;
    sbit  ADRES_1_bit at ADRES0.B1;
    sbit  ADRES_1_ADRES0_bit at ADRES0.B1;
    const register unsigned short int ADRES_0 = 0;
    sbit  ADRES_0_bit at ADRES0.B0;
    sbit  ADRES_0_ADRES0_bit at ADRES0.B0;

    // ADRES1 bits
    sbit  ADRES_15_ADRES1_bit at ADRES1.B15;
    sbit  ADRES_14_ADRES1_bit at ADRES1.B14;
    sbit  ADRES_13_ADRES1_bit at ADRES1.B13;
    sbit  ADRES_12_ADRES1_bit at ADRES1.B12;
    sbit  ADRES_11_ADRES1_bit at ADRES1.B11;
    sbit  ADRES_10_ADRES1_bit at ADRES1.B10;
    sbit  ADRES_9_ADRES1_bit at ADRES1.B9;
    sbit  ADRES_8_ADRES1_bit at ADRES1.B8;
    sbit  ADRES_7_ADRES1_bit at ADRES1.B7;
    sbit  ADRES_6_ADRES1_bit at ADRES1.B6;
    sbit  ADRES_5_ADRES1_bit at ADRES1.B5;
    sbit  ADRES_4_ADRES1_bit at ADRES1.B4;
    sbit  ADRES_3_ADRES1_bit at ADRES1.B3;
    sbit  ADRES_2_ADRES1_bit at ADRES1.B2;
    sbit  ADRES_1_ADRES1_bit at ADRES1.B1;
    sbit  ADRES_0_ADRES1_bit at ADRES1.B0;

    // ADRES2 bits
    sbit  ADRES_15_ADRES2_bit at ADRES2.B15;
    sbit  ADRES_14_ADRES2_bit at ADRES2.B14;
    sbit  ADRES_13_ADRES2_bit at ADRES2.B13;
    sbit  ADRES_12_ADRES2_bit at ADRES2.B12;
    sbit  ADRES_11_ADRES2_bit at ADRES2.B11;
    sbit  ADRES_10_ADRES2_bit at ADRES2.B10;
    sbit  ADRES_9_ADRES2_bit at ADRES2.B9;
    sbit  ADRES_8_ADRES2_bit at ADRES2.B8;
    sbit  ADRES_7_ADRES2_bit at ADRES2.B7;
    sbit  ADRES_6_ADRES2_bit at ADRES2.B6;
    sbit  ADRES_5_ADRES2_bit at ADRES2.B5;
    sbit  ADRES_4_ADRES2_bit at ADRES2.B4;
    sbit  ADRES_3_ADRES2_bit at ADRES2.B3;
    sbit  ADRES_2_ADRES2_bit at ADRES2.B2;
    sbit  ADRES_1_ADRES2_bit at ADRES2.B1;
    sbit  ADRES_0_ADRES2_bit at ADRES2.B0;

    // ADRES3 bits
    sbit  ADRES_15_ADRES3_bit at ADRES3.B15;
    sbit  ADRES_14_ADRES3_bit at ADRES3.B14;
    sbit  ADRES_13_ADRES3_bit at ADRES3.B13;
    sbit  ADRES_12_ADRES3_bit at ADRES3.B12;
    sbit  ADRES_11_ADRES3_bit at ADRES3.B11;
    sbit  ADRES_10_ADRES3_bit at ADRES3.B10;
    sbit  ADRES_9_ADRES3_bit at ADRES3.B9;
    sbit  ADRES_8_ADRES3_bit at ADRES3.B8;
    sbit  ADRES_7_ADRES3_bit at ADRES3.B7;
    sbit  ADRES_6_ADRES3_bit at ADRES3.B6;
    sbit  ADRES_5_ADRES3_bit at ADRES3.B5;
    sbit  ADRES_4_ADRES3_bit at ADRES3.B4;
    sbit  ADRES_3_ADRES3_bit at ADRES3.B3;
    sbit  ADRES_2_ADRES3_bit at ADRES3.B2;
    sbit  ADRES_1_ADRES3_bit at ADRES3.B1;
    sbit  ADRES_0_ADRES3_bit at ADRES3.B0;

    // ADRES4 bits
    sbit  ADRES_15_ADRES4_bit at ADRES4.B15;
    sbit  ADRES_14_ADRES4_bit at ADRES4.B14;
    sbit  ADRES_13_ADRES4_bit at ADRES4.B13;
    sbit  ADRES_12_ADRES4_bit at ADRES4.B12;
    sbit  ADRES_11_ADRES4_bit at ADRES4.B11;
    sbit  ADRES_10_ADRES4_bit at ADRES4.B10;
    sbit  ADRES_9_ADRES4_bit at ADRES4.B9;
    sbit  ADRES_8_ADRES4_bit at ADRES4.B8;
    sbit  ADRES_7_ADRES4_bit at ADRES4.B7;
    sbit  ADRES_6_ADRES4_bit at ADRES4.B6;
    sbit  ADRES_5_ADRES4_bit at ADRES4.B5;
    sbit  ADRES_4_ADRES4_bit at ADRES4.B4;
    sbit  ADRES_3_ADRES4_bit at ADRES4.B3;
    sbit  ADRES_2_ADRES4_bit at ADRES4.B2;
    sbit  ADRES_1_ADRES4_bit at ADRES4.B1;
    sbit  ADRES_0_ADRES4_bit at ADRES4.B0;

    // ADRES5 bits
    sbit  ADRES_15_ADRES5_bit at ADRES5.B15;
    sbit  ADRES_14_ADRES5_bit at ADRES5.B14;
    sbit  ADRES_13_ADRES5_bit at ADRES5.B13;
    sbit  ADRES_12_ADRES5_bit at ADRES5.B12;
    sbit  ADRES_11_ADRES5_bit at ADRES5.B11;
    sbit  ADRES_10_ADRES5_bit at ADRES5.B10;
    sbit  ADRES_9_ADRES5_bit at ADRES5.B9;
    sbit  ADRES_8_ADRES5_bit at ADRES5.B8;
    sbit  ADRES_7_ADRES5_bit at ADRES5.B7;
    sbit  ADRES_6_ADRES5_bit at ADRES5.B6;
    sbit  ADRES_5_ADRES5_bit at ADRES5.B5;
    sbit  ADRES_4_ADRES5_bit at ADRES5.B4;
    sbit  ADRES_3_ADRES5_bit at ADRES5.B3;
    sbit  ADRES_2_ADRES5_bit at ADRES5.B2;
    sbit  ADRES_1_ADRES5_bit at ADRES5.B1;
    sbit  ADRES_0_ADRES5_bit at ADRES5.B0;

    // ADRES6 bits
    sbit  ADRES_15_ADRES6_bit at ADRES6.B15;
    sbit  ADRES_14_ADRES6_bit at ADRES6.B14;
    sbit  ADRES_13_ADRES6_bit at ADRES6.B13;
    sbit  ADRES_12_ADRES6_bit at ADRES6.B12;
    sbit  ADRES_11_ADRES6_bit at ADRES6.B11;
    sbit  ADRES_10_ADRES6_bit at ADRES6.B10;
    sbit  ADRES_9_ADRES6_bit at ADRES6.B9;
    sbit  ADRES_8_ADRES6_bit at ADRES6.B8;
    sbit  ADRES_7_ADRES6_bit at ADRES6.B7;
    sbit  ADRES_6_ADRES6_bit at ADRES6.B6;
    sbit  ADRES_5_ADRES6_bit at ADRES6.B5;
    sbit  ADRES_4_ADRES6_bit at ADRES6.B4;
    sbit  ADRES_3_ADRES6_bit at ADRES6.B3;
    sbit  ADRES_2_ADRES6_bit at ADRES6.B2;
    sbit  ADRES_1_ADRES6_bit at ADRES6.B1;
    sbit  ADRES_0_ADRES6_bit at ADRES6.B0;

    // ADRES7 bits
    sbit  ADRES_15_ADRES7_bit at ADRES7.B15;
    sbit  ADRES_14_ADRES7_bit at ADRES7.B14;
    sbit  ADRES_13_ADRES7_bit at ADRES7.B13;
    sbit  ADRES_12_ADRES7_bit at ADRES7.B12;
    sbit  ADRES_11_ADRES7_bit at ADRES7.B11;
    sbit  ADRES_10_ADRES7_bit at ADRES7.B10;
    sbit  ADRES_9_ADRES7_bit at ADRES7.B9;
    sbit  ADRES_8_ADRES7_bit at ADRES7.B8;
    sbit  ADRES_7_ADRES7_bit at ADRES7.B7;
    sbit  ADRES_6_ADRES7_bit at ADRES7.B6;
    sbit  ADRES_5_ADRES7_bit at ADRES7.B5;
    sbit  ADRES_4_ADRES7_bit at ADRES7.B4;
    sbit  ADRES_3_ADRES7_bit at ADRES7.B3;
    sbit  ADRES_2_ADRES7_bit at ADRES7.B2;
    sbit  ADRES_1_ADRES7_bit at ADRES7.B1;
    sbit  ADRES_0_ADRES7_bit at ADRES7.B0;

    // ADRES8 bits
    sbit  ADRES_15_ADRES8_bit at ADRES8.B15;
    sbit  ADRES_14_ADRES8_bit at ADRES8.B14;
    sbit  ADRES_13_ADRES8_bit at ADRES8.B13;
    sbit  ADRES_12_ADRES8_bit at ADRES8.B12;
    sbit  ADRES_11_ADRES8_bit at ADRES8.B11;
    sbit  ADRES_10_ADRES8_bit at ADRES8.B10;
    sbit  ADRES_9_ADRES8_bit at ADRES8.B9;
    sbit  ADRES_8_ADRES8_bit at ADRES8.B8;
    sbit  ADRES_7_ADRES8_bit at ADRES8.B7;
    sbit  ADRES_6_ADRES8_bit at ADRES8.B6;
    sbit  ADRES_5_ADRES8_bit at ADRES8.B5;
    sbit  ADRES_4_ADRES8_bit at ADRES8.B4;
    sbit  ADRES_3_ADRES8_bit at ADRES8.B3;
    sbit  ADRES_2_ADRES8_bit at ADRES8.B2;
    sbit  ADRES_1_ADRES8_bit at ADRES8.B1;
    sbit  ADRES_0_ADRES8_bit at ADRES8.B0;

    // ADRES9 bits
    sbit  ADRES_15_ADRES9_bit at ADRES9.B15;
    sbit  ADRES_14_ADRES9_bit at ADRES9.B14;
    sbit  ADRES_13_ADRES9_bit at ADRES9.B13;
    sbit  ADRES_12_ADRES9_bit at ADRES9.B12;
    sbit  ADRES_11_ADRES9_bit at ADRES9.B11;
    sbit  ADRES_10_ADRES9_bit at ADRES9.B10;
    sbit  ADRES_9_ADRES9_bit at ADRES9.B9;
    sbit  ADRES_8_ADRES9_bit at ADRES9.B8;
    sbit  ADRES_7_ADRES9_bit at ADRES9.B7;
    sbit  ADRES_6_ADRES9_bit at ADRES9.B6;
    sbit  ADRES_5_ADRES9_bit at ADRES9.B5;
    sbit  ADRES_4_ADRES9_bit at ADRES9.B4;
    sbit  ADRES_3_ADRES9_bit at ADRES9.B3;
    sbit  ADRES_2_ADRES9_bit at ADRES9.B2;
    sbit  ADRES_1_ADRES9_bit at ADRES9.B1;
    sbit  ADRES_0_ADRES9_bit at ADRES9.B0;

    // ADRES10 bits
    sbit  ADRES_15_ADRES10_bit at ADRES10.B15;
    sbit  ADRES_14_ADRES10_bit at ADRES10.B14;
    sbit  ADRES_13_ADRES10_bit at ADRES10.B13;
    sbit  ADRES_12_ADRES10_bit at ADRES10.B12;
    sbit  ADRES_11_ADRES10_bit at ADRES10.B11;
    sbit  ADRES_10_ADRES10_bit at ADRES10.B10;
    sbit  ADRES_9_ADRES10_bit at ADRES10.B9;
    sbit  ADRES_8_ADRES10_bit at ADRES10.B8;
    sbit  ADRES_7_ADRES10_bit at ADRES10.B7;
    sbit  ADRES_6_ADRES10_bit at ADRES10.B6;
    sbit  ADRES_5_ADRES10_bit at ADRES10.B5;
    sbit  ADRES_4_ADRES10_bit at ADRES10.B4;
    sbit  ADRES_3_ADRES10_bit at ADRES10.B3;
    sbit  ADRES_2_ADRES10_bit at ADRES10.B2;
    sbit  ADRES_1_ADRES10_bit at ADRES10.B1;
    sbit  ADRES_0_ADRES10_bit at ADRES10.B0;

    // ADRES11 bits
    sbit  ADRES_15_ADRES11_bit at ADRES11.B15;
    sbit  ADRES_14_ADRES11_bit at ADRES11.B14;
    sbit  ADRES_13_ADRES11_bit at ADRES11.B13;
    sbit  ADRES_12_ADRES11_bit at ADRES11.B12;
    sbit  ADRES_11_ADRES11_bit at ADRES11.B11;
    sbit  ADRES_10_ADRES11_bit at ADRES11.B10;
    sbit  ADRES_9_ADRES11_bit at ADRES11.B9;
    sbit  ADRES_8_ADRES11_bit at ADRES11.B8;
    sbit  ADRES_7_ADRES11_bit at ADRES11.B7;
    sbit  ADRES_6_ADRES11_bit at ADRES11.B6;
    sbit  ADRES_5_ADRES11_bit at ADRES11.B5;
    sbit  ADRES_4_ADRES11_bit at ADRES11.B4;
    sbit  ADRES_3_ADRES11_bit at ADRES11.B3;
    sbit  ADRES_2_ADRES11_bit at ADRES11.B2;
    sbit  ADRES_1_ADRES11_bit at ADRES11.B1;
    sbit  ADRES_0_ADRES11_bit at ADRES11.B0;

    // ADRES12 bits
    sbit  ADRES_15_ADRES12_bit at ADRES12.B15;
    sbit  ADRES_14_ADRES12_bit at ADRES12.B14;
    sbit  ADRES_13_ADRES12_bit at ADRES12.B13;
    sbit  ADRES_12_ADRES12_bit at ADRES12.B12;
    sbit  ADRES_11_ADRES12_bit at ADRES12.B11;
    sbit  ADRES_10_ADRES12_bit at ADRES12.B10;
    sbit  ADRES_9_ADRES12_bit at ADRES12.B9;
    sbit  ADRES_8_ADRES12_bit at ADRES12.B8;
    sbit  ADRES_7_ADRES12_bit at ADRES12.B7;
    sbit  ADRES_6_ADRES12_bit at ADRES12.B6;
    sbit  ADRES_5_ADRES12_bit at ADRES12.B5;
    sbit  ADRES_4_ADRES12_bit at ADRES12.B4;
    sbit  ADRES_3_ADRES12_bit at ADRES12.B3;
    sbit  ADRES_2_ADRES12_bit at ADRES12.B2;
    sbit  ADRES_1_ADRES12_bit at ADRES12.B1;
    sbit  ADRES_0_ADRES12_bit at ADRES12.B0;

    // ADRES13 bits
    sbit  ADRES_15_ADRES13_bit at ADRES13.B15;
    sbit  ADRES_14_ADRES13_bit at ADRES13.B14;
    sbit  ADRES_13_ADRES13_bit at ADRES13.B13;
    sbit  ADRES_12_ADRES13_bit at ADRES13.B12;
    sbit  ADRES_11_ADRES13_bit at ADRES13.B11;
    sbit  ADRES_10_ADRES13_bit at ADRES13.B10;
    sbit  ADRES_9_ADRES13_bit at ADRES13.B9;
    sbit  ADRES_8_ADRES13_bit at ADRES13.B8;
    sbit  ADRES_7_ADRES13_bit at ADRES13.B7;
    sbit  ADRES_6_ADRES13_bit at ADRES13.B6;
    sbit  ADRES_5_ADRES13_bit at ADRES13.B5;
    sbit  ADRES_4_ADRES13_bit at ADRES13.B4;
    sbit  ADRES_3_ADRES13_bit at ADRES13.B3;
    sbit  ADRES_2_ADRES13_bit at ADRES13.B2;
    sbit  ADRES_1_ADRES13_bit at ADRES13.B1;
    sbit  ADRES_0_ADRES13_bit at ADRES13.B0;

    // ADRES14 bits
    sbit  ADRES_15_ADRES14_bit at ADRES14.B15;
    sbit  ADRES_14_ADRES14_bit at ADRES14.B14;
    sbit  ADRES_13_ADRES14_bit at ADRES14.B13;
    sbit  ADRES_12_ADRES14_bit at ADRES14.B12;
    sbit  ADRES_11_ADRES14_bit at ADRES14.B11;
    sbit  ADRES_10_ADRES14_bit at ADRES14.B10;
    sbit  ADRES_9_ADRES14_bit at ADRES14.B9;
    sbit  ADRES_8_ADRES14_bit at ADRES14.B8;
    sbit  ADRES_7_ADRES14_bit at ADRES14.B7;
    sbit  ADRES_6_ADRES14_bit at ADRES14.B6;
    sbit  ADRES_5_ADRES14_bit at ADRES14.B5;
    sbit  ADRES_4_ADRES14_bit at ADRES14.B4;
    sbit  ADRES_3_ADRES14_bit at ADRES14.B3;
    sbit  ADRES_2_ADRES14_bit at ADRES14.B2;
    sbit  ADRES_1_ADRES14_bit at ADRES14.B1;
    sbit  ADRES_0_ADRES14_bit at ADRES14.B0;

    // ADRES15 bits
    sbit  ADRES_15_ADRES15_bit at ADRES15.B15;
    sbit  ADRES_14_ADRES15_bit at ADRES15.B14;
    sbit  ADRES_13_ADRES15_bit at ADRES15.B13;
    sbit  ADRES_12_ADRES15_bit at ADRES15.B12;
    sbit  ADRES_11_ADRES15_bit at ADRES15.B11;
    sbit  ADRES_10_ADRES15_bit at ADRES15.B10;
    sbit  ADRES_9_ADRES15_bit at ADRES15.B9;
    sbit  ADRES_8_ADRES15_bit at ADRES15.B8;
    sbit  ADRES_7_ADRES15_bit at ADRES15.B7;
    sbit  ADRES_6_ADRES15_bit at ADRES15.B6;
    sbit  ADRES_5_ADRES15_bit at ADRES15.B5;
    sbit  ADRES_4_ADRES15_bit at ADRES15.B4;
    sbit  ADRES_3_ADRES15_bit at ADRES15.B3;
    sbit  ADRES_2_ADRES15_bit at ADRES15.B2;
    sbit  ADRES_1_ADRES15_bit at ADRES15.B1;
    sbit  ADRES_0_ADRES15_bit at ADRES15.B0;

    // ADRES16 bits
    sbit  ADRES_15_ADRES16_bit at ADRES16.B15;
    sbit  ADRES_14_ADRES16_bit at ADRES16.B14;
    sbit  ADRES_13_ADRES16_bit at ADRES16.B13;
    sbit  ADRES_12_ADRES16_bit at ADRES16.B12;
    sbit  ADRES_11_ADRES16_bit at ADRES16.B11;
    sbit  ADRES_10_ADRES16_bit at ADRES16.B10;
    sbit  ADRES_9_ADRES16_bit at ADRES16.B9;
    sbit  ADRES_8_ADRES16_bit at ADRES16.B8;
    sbit  ADRES_7_ADRES16_bit at ADRES16.B7;
    sbit  ADRES_6_ADRES16_bit at ADRES16.B6;
    sbit  ADRES_5_ADRES16_bit at ADRES16.B5;
    sbit  ADRES_4_ADRES16_bit at ADRES16.B4;
    sbit  ADRES_3_ADRES16_bit at ADRES16.B3;
    sbit  ADRES_2_ADRES16_bit at ADRES16.B2;
    sbit  ADRES_1_ADRES16_bit at ADRES16.B1;
    sbit  ADRES_0_ADRES16_bit at ADRES16.B0;

    // ADRES17 bits
    sbit  ADRES_15_ADRES17_bit at ADRES17.B15;
    sbit  ADRES_14_ADRES17_bit at ADRES17.B14;
    sbit  ADRES_13_ADRES17_bit at ADRES17.B13;
    sbit  ADRES_12_ADRES17_bit at ADRES17.B12;
    sbit  ADRES_11_ADRES17_bit at ADRES17.B11;
    sbit  ADRES_10_ADRES17_bit at ADRES17.B10;
    sbit  ADRES_9_ADRES17_bit at ADRES17.B9;
    sbit  ADRES_8_ADRES17_bit at ADRES17.B8;
    sbit  ADRES_7_ADRES17_bit at ADRES17.B7;
    sbit  ADRES_6_ADRES17_bit at ADRES17.B6;
    sbit  ADRES_5_ADRES17_bit at ADRES17.B5;
    sbit  ADRES_4_ADRES17_bit at ADRES17.B4;
    sbit  ADRES_3_ADRES17_bit at ADRES17.B3;
    sbit  ADRES_2_ADRES17_bit at ADRES17.B2;
    sbit  ADRES_1_ADRES17_bit at ADRES17.B1;
    sbit  ADRES_0_ADRES17_bit at ADRES17.B0;

    // ADRES18 bits
    sbit  ADRES_15_ADRES18_bit at ADRES18.B15;
    sbit  ADRES_14_ADRES18_bit at ADRES18.B14;
    sbit  ADRES_13_ADRES18_bit at ADRES18.B13;
    sbit  ADRES_12_ADRES18_bit at ADRES18.B12;
    sbit  ADRES_11_ADRES18_bit at ADRES18.B11;
    sbit  ADRES_10_ADRES18_bit at ADRES18.B10;
    sbit  ADRES_9_ADRES18_bit at ADRES18.B9;
    sbit  ADRES_8_ADRES18_bit at ADRES18.B8;
    sbit  ADRES_7_ADRES18_bit at ADRES18.B7;
    sbit  ADRES_6_ADRES18_bit at ADRES18.B6;
    sbit  ADRES_5_ADRES18_bit at ADRES18.B5;
    sbit  ADRES_4_ADRES18_bit at ADRES18.B4;
    sbit  ADRES_3_ADRES18_bit at ADRES18.B3;
    sbit  ADRES_2_ADRES18_bit at ADRES18.B2;
    sbit  ADRES_1_ADRES18_bit at ADRES18.B1;
    sbit  ADRES_0_ADRES18_bit at ADRES18.B0;

    // ADRES19 bits
    sbit  ADRES_15_ADRES19_bit at ADRES19.B15;
    sbit  ADRES_14_ADRES19_bit at ADRES19.B14;
    sbit  ADRES_13_ADRES19_bit at ADRES19.B13;
    sbit  ADRES_12_ADRES19_bit at ADRES19.B12;
    sbit  ADRES_11_ADRES19_bit at ADRES19.B11;
    sbit  ADRES_10_ADRES19_bit at ADRES19.B10;
    sbit  ADRES_9_ADRES19_bit at ADRES19.B9;
    sbit  ADRES_8_ADRES19_bit at ADRES19.B8;
    sbit  ADRES_7_ADRES19_bit at ADRES19.B7;
    sbit  ADRES_6_ADRES19_bit at ADRES19.B6;
    sbit  ADRES_5_ADRES19_bit at ADRES19.B5;
    sbit  ADRES_4_ADRES19_bit at ADRES19.B4;
    sbit  ADRES_3_ADRES19_bit at ADRES19.B3;
    sbit  ADRES_2_ADRES19_bit at ADRES19.B2;
    sbit  ADRES_1_ADRES19_bit at ADRES19.B1;
    sbit  ADRES_0_ADRES19_bit at ADRES19.B0;

    // ADRES20 bits
    sbit  ADRES_15_ADRES20_bit at ADRES20.B15;
    sbit  ADRES_14_ADRES20_bit at ADRES20.B14;
    sbit  ADRES_13_ADRES20_bit at ADRES20.B13;
    sbit  ADRES_12_ADRES20_bit at ADRES20.B12;
    sbit  ADRES_11_ADRES20_bit at ADRES20.B11;
    sbit  ADRES_10_ADRES20_bit at ADRES20.B10;
    sbit  ADRES_9_ADRES20_bit at ADRES20.B9;
    sbit  ADRES_8_ADRES20_bit at ADRES20.B8;
    sbit  ADRES_7_ADRES20_bit at ADRES20.B7;
    sbit  ADRES_6_ADRES20_bit at ADRES20.B6;
    sbit  ADRES_5_ADRES20_bit at ADRES20.B5;
    sbit  ADRES_4_ADRES20_bit at ADRES20.B4;
    sbit  ADRES_3_ADRES20_bit at ADRES20.B3;
    sbit  ADRES_2_ADRES20_bit at ADRES20.B2;
    sbit  ADRES_1_ADRES20_bit at ADRES20.B1;
    sbit  ADRES_0_ADRES20_bit at ADRES20.B0;

    // ADRES21 bits
    sbit  ADRES_15_ADRES21_bit at ADRES21.B15;
    sbit  ADRES_14_ADRES21_bit at ADRES21.B14;
    sbit  ADRES_13_ADRES21_bit at ADRES21.B13;
    sbit  ADRES_12_ADRES21_bit at ADRES21.B12;
    sbit  ADRES_11_ADRES21_bit at ADRES21.B11;
    sbit  ADRES_10_ADRES21_bit at ADRES21.B10;
    sbit  ADRES_9_ADRES21_bit at ADRES21.B9;
    sbit  ADRES_8_ADRES21_bit at ADRES21.B8;
    sbit  ADRES_7_ADRES21_bit at ADRES21.B7;
    sbit  ADRES_6_ADRES21_bit at ADRES21.B6;
    sbit  ADRES_5_ADRES21_bit at ADRES21.B5;
    sbit  ADRES_4_ADRES21_bit at ADRES21.B4;
    sbit  ADRES_3_ADRES21_bit at ADRES21.B3;
    sbit  ADRES_2_ADRES21_bit at ADRES21.B2;
    sbit  ADRES_1_ADRES21_bit at ADRES21.B1;
    sbit  ADRES_0_ADRES21_bit at ADRES21.B0;

    // ADRES22 bits
    sbit  ADRES_15_ADRES22_bit at ADRES22.B15;
    sbit  ADRES_14_ADRES22_bit at ADRES22.B14;
    sbit  ADRES_13_ADRES22_bit at ADRES22.B13;
    sbit  ADRES_12_ADRES22_bit at ADRES22.B12;
    sbit  ADRES_11_ADRES22_bit at ADRES22.B11;
    sbit  ADRES_10_ADRES22_bit at ADRES22.B10;
    sbit  ADRES_9_ADRES22_bit at ADRES22.B9;
    sbit  ADRES_8_ADRES22_bit at ADRES22.B8;
    sbit  ADRES_7_ADRES22_bit at ADRES22.B7;
    sbit  ADRES_6_ADRES22_bit at ADRES22.B6;
    sbit  ADRES_5_ADRES22_bit at ADRES22.B5;
    sbit  ADRES_4_ADRES22_bit at ADRES22.B4;
    sbit  ADRES_3_ADRES22_bit at ADRES22.B3;
    sbit  ADRES_2_ADRES22_bit at ADRES22.B2;
    sbit  ADRES_1_ADRES22_bit at ADRES22.B1;
    sbit  ADRES_0_ADRES22_bit at ADRES22.B0;

    // ADRES23 bits
    sbit  ADRES_15_ADRES23_bit at ADRES23.B15;
    sbit  ADRES_14_ADRES23_bit at ADRES23.B14;
    sbit  ADRES_13_ADRES23_bit at ADRES23.B13;
    sbit  ADRES_12_ADRES23_bit at ADRES23.B12;
    sbit  ADRES_11_ADRES23_bit at ADRES23.B11;
    sbit  ADRES_10_ADRES23_bit at ADRES23.B10;
    sbit  ADRES_9_ADRES23_bit at ADRES23.B9;
    sbit  ADRES_8_ADRES23_bit at ADRES23.B8;
    sbit  ADRES_7_ADRES23_bit at ADRES23.B7;
    sbit  ADRES_6_ADRES23_bit at ADRES23.B6;
    sbit  ADRES_5_ADRES23_bit at ADRES23.B5;
    sbit  ADRES_4_ADRES23_bit at ADRES23.B4;
    sbit  ADRES_3_ADRES23_bit at ADRES23.B3;
    sbit  ADRES_2_ADRES23_bit at ADRES23.B2;
    sbit  ADRES_1_ADRES23_bit at ADRES23.B1;
    sbit  ADRES_0_ADRES23_bit at ADRES23.B0;

    // ADRES24 bits
    sbit  ADRES_15_ADRES24_bit at ADRES24.B15;
    sbit  ADRES_14_ADRES24_bit at ADRES24.B14;
    sbit  ADRES_13_ADRES24_bit at ADRES24.B13;
    sbit  ADRES_12_ADRES24_bit at ADRES24.B12;
    sbit  ADRES_11_ADRES24_bit at ADRES24.B11;
    sbit  ADRES_10_ADRES24_bit at ADRES24.B10;
    sbit  ADRES_9_ADRES24_bit at ADRES24.B9;
    sbit  ADRES_8_ADRES24_bit at ADRES24.B8;
    sbit  ADRES_7_ADRES24_bit at ADRES24.B7;
    sbit  ADRES_6_ADRES24_bit at ADRES24.B6;
    sbit  ADRES_5_ADRES24_bit at ADRES24.B5;
    sbit  ADRES_4_ADRES24_bit at ADRES24.B4;
    sbit  ADRES_3_ADRES24_bit at ADRES24.B3;
    sbit  ADRES_2_ADRES24_bit at ADRES24.B2;
    sbit  ADRES_1_ADRES24_bit at ADRES24.B1;
    sbit  ADRES_0_ADRES24_bit at ADRES24.B0;

    // ADRES25 bits
    sbit  ADRES_15_ADRES25_bit at ADRES25.B15;
    sbit  ADRES_14_ADRES25_bit at ADRES25.B14;
    sbit  ADRES_13_ADRES25_bit at ADRES25.B13;
    sbit  ADRES_12_ADRES25_bit at ADRES25.B12;
    sbit  ADRES_11_ADRES25_bit at ADRES25.B11;
    sbit  ADRES_10_ADRES25_bit at ADRES25.B10;
    sbit  ADRES_9_ADRES25_bit at ADRES25.B9;
    sbit  ADRES_8_ADRES25_bit at ADRES25.B8;
    sbit  ADRES_7_ADRES25_bit at ADRES25.B7;
    sbit  ADRES_6_ADRES25_bit at ADRES25.B6;
    sbit  ADRES_5_ADRES25_bit at ADRES25.B5;
    sbit  ADRES_4_ADRES25_bit at ADRES25.B4;
    sbit  ADRES_3_ADRES25_bit at ADRES25.B3;
    sbit  ADRES_2_ADRES25_bit at ADRES25.B2;
    sbit  ADRES_1_ADRES25_bit at ADRES25.B1;
    sbit  ADRES_0_ADRES25_bit at ADRES25.B0;

    // ADRES26 bits
    sbit  ADRES_15_ADRES26_bit at ADRES26.B15;
    sbit  ADRES_14_ADRES26_bit at ADRES26.B14;
    sbit  ADRES_13_ADRES26_bit at ADRES26.B13;
    sbit  ADRES_12_ADRES26_bit at ADRES26.B12;
    sbit  ADRES_11_ADRES26_bit at ADRES26.B11;
    sbit  ADRES_10_ADRES26_bit at ADRES26.B10;
    sbit  ADRES_9_ADRES26_bit at ADRES26.B9;
    sbit  ADRES_8_ADRES26_bit at ADRES26.B8;
    sbit  ADRES_7_ADRES26_bit at ADRES26.B7;
    sbit  ADRES_6_ADRES26_bit at ADRES26.B6;
    sbit  ADRES_5_ADRES26_bit at ADRES26.B5;
    sbit  ADRES_4_ADRES26_bit at ADRES26.B4;
    sbit  ADRES_3_ADRES26_bit at ADRES26.B3;
    sbit  ADRES_2_ADRES26_bit at ADRES26.B2;
    sbit  ADRES_1_ADRES26_bit at ADRES26.B1;
    sbit  ADRES_0_ADRES26_bit at ADRES26.B0;

    // ADRES27 bits
    sbit  ADRES_15_ADRES27_bit at ADRES27.B15;
    sbit  ADRES_14_ADRES27_bit at ADRES27.B14;
    sbit  ADRES_13_ADRES27_bit at ADRES27.B13;
    sbit  ADRES_12_ADRES27_bit at ADRES27.B12;
    sbit  ADRES_11_ADRES27_bit at ADRES27.B11;
    sbit  ADRES_10_ADRES27_bit at ADRES27.B10;
    sbit  ADRES_9_ADRES27_bit at ADRES27.B9;
    sbit  ADRES_8_ADRES27_bit at ADRES27.B8;
    sbit  ADRES_7_ADRES27_bit at ADRES27.B7;
    sbit  ADRES_6_ADRES27_bit at ADRES27.B6;
    sbit  ADRES_5_ADRES27_bit at ADRES27.B5;
    sbit  ADRES_4_ADRES27_bit at ADRES27.B4;
    sbit  ADRES_3_ADRES27_bit at ADRES27.B3;
    sbit  ADRES_2_ADRES27_bit at ADRES27.B2;
    sbit  ADRES_1_ADRES27_bit at ADRES27.B1;
    sbit  ADRES_0_ADRES27_bit at ADRES27.B0;

    // ADRES28 bits
    sbit  ADRES_15_ADRES28_bit at ADRES28.B15;
    sbit  ADRES_14_ADRES28_bit at ADRES28.B14;
    sbit  ADRES_13_ADRES28_bit at ADRES28.B13;
    sbit  ADRES_12_ADRES28_bit at ADRES28.B12;
    sbit  ADRES_11_ADRES28_bit at ADRES28.B11;
    sbit  ADRES_10_ADRES28_bit at ADRES28.B10;
    sbit  ADRES_9_ADRES28_bit at ADRES28.B9;
    sbit  ADRES_8_ADRES28_bit at ADRES28.B8;
    sbit  ADRES_7_ADRES28_bit at ADRES28.B7;
    sbit  ADRES_6_ADRES28_bit at ADRES28.B6;
    sbit  ADRES_5_ADRES28_bit at ADRES28.B5;
    sbit  ADRES_4_ADRES28_bit at ADRES28.B4;
    sbit  ADRES_3_ADRES28_bit at ADRES28.B3;
    sbit  ADRES_2_ADRES28_bit at ADRES28.B2;
    sbit  ADRES_1_ADRES28_bit at ADRES28.B1;
    sbit  ADRES_0_ADRES28_bit at ADRES28.B0;

    // ADRES29 bits
    sbit  ADRES_15_ADRES29_bit at ADRES29.B15;
    sbit  ADRES_14_ADRES29_bit at ADRES29.B14;
    sbit  ADRES_13_ADRES29_bit at ADRES29.B13;
    sbit  ADRES_12_ADRES29_bit at ADRES29.B12;
    sbit  ADRES_11_ADRES29_bit at ADRES29.B11;
    sbit  ADRES_10_ADRES29_bit at ADRES29.B10;
    sbit  ADRES_9_ADRES29_bit at ADRES29.B9;
    sbit  ADRES_8_ADRES29_bit at ADRES29.B8;
    sbit  ADRES_7_ADRES29_bit at ADRES29.B7;
    sbit  ADRES_6_ADRES29_bit at ADRES29.B6;
    sbit  ADRES_5_ADRES29_bit at ADRES29.B5;
    sbit  ADRES_4_ADRES29_bit at ADRES29.B4;
    sbit  ADRES_3_ADRES29_bit at ADRES29.B3;
    sbit  ADRES_2_ADRES29_bit at ADRES29.B2;
    sbit  ADRES_1_ADRES29_bit at ADRES29.B1;
    sbit  ADRES_0_ADRES29_bit at ADRES29.B0;

    // ADRES30 bits
    sbit  ADRES_15_ADRES30_bit at ADRES30.B15;
    sbit  ADRES_14_ADRES30_bit at ADRES30.B14;
    sbit  ADRES_13_ADRES30_bit at ADRES30.B13;
    sbit  ADRES_12_ADRES30_bit at ADRES30.B12;
    sbit  ADRES_11_ADRES30_bit at ADRES30.B11;
    sbit  ADRES_10_ADRES30_bit at ADRES30.B10;
    sbit  ADRES_9_ADRES30_bit at ADRES30.B9;
    sbit  ADRES_8_ADRES30_bit at ADRES30.B8;
    sbit  ADRES_7_ADRES30_bit at ADRES30.B7;
    sbit  ADRES_6_ADRES30_bit at ADRES30.B6;
    sbit  ADRES_5_ADRES30_bit at ADRES30.B5;
    sbit  ADRES_4_ADRES30_bit at ADRES30.B4;
    sbit  ADRES_3_ADRES30_bit at ADRES30.B3;
    sbit  ADRES_2_ADRES30_bit at ADRES30.B2;
    sbit  ADRES_1_ADRES30_bit at ADRES30.B1;
    sbit  ADRES_0_ADRES30_bit at ADRES30.B0;

    // ADRES31 bits
    sbit  ADRES_15_ADRES31_bit at ADRES31.B15;
    sbit  ADRES_14_ADRES31_bit at ADRES31.B14;
    sbit  ADRES_13_ADRES31_bit at ADRES31.B13;
    sbit  ADRES_12_ADRES31_bit at ADRES31.B12;
    sbit  ADRES_11_ADRES31_bit at ADRES31.B11;
    sbit  ADRES_10_ADRES31_bit at ADRES31.B10;
    sbit  ADRES_9_ADRES31_bit at ADRES31.B9;
    sbit  ADRES_8_ADRES31_bit at ADRES31.B8;
    sbit  ADRES_7_ADRES31_bit at ADRES31.B7;
    sbit  ADRES_6_ADRES31_bit at ADRES31.B6;
    sbit  ADRES_5_ADRES31_bit at ADRES31.B5;
    sbit  ADRES_4_ADRES31_bit at ADRES31.B4;
    sbit  ADRES_3_ADRES31_bit at ADRES31.B3;
    sbit  ADRES_2_ADRES31_bit at ADRES31.B2;
    sbit  ADRES_1_ADRES31_bit at ADRES31.B1;
    sbit  ADRES_0_ADRES31_bit at ADRES31.B0;

    // DMACON bits
    const register unsigned short int DMAEN = 15;
    sbit  DMAEN_bit at DMACON.B15;
    const register unsigned short int DMASIDL = 13;
    sbit  DMASIDL_bit at DMACON.B13;
    const register unsigned short int PRSSEL = 0;
    sbit  PRSSEL_bit at DMACON.B0;

    // DMABUF bits
    const register unsigned short int DMABUF_15 = 15;
    sbit  DMABUF_15_bit at DMABUF.B15;
    const register unsigned short int DMABUF_14 = 14;
    sbit  DMABUF_14_bit at DMABUF.B14;
    const register unsigned short int DMABUF_13 = 13;
    sbit  DMABUF_13_bit at DMABUF.B13;
    const register unsigned short int DMABUF_12 = 12;
    sbit  DMABUF_12_bit at DMABUF.B12;
    const register unsigned short int DMABUF_11 = 11;
    sbit  DMABUF_11_bit at DMABUF.B11;
    const register unsigned short int DMABUF_10 = 10;
    sbit  DMABUF_10_bit at DMABUF.B10;
    const register unsigned short int DMABUF_9 = 9;
    sbit  DMABUF_9_bit at DMABUF.B9;
    const register unsigned short int DMABUF_8 = 8;
    sbit  DMABUF_8_bit at DMABUF.B8;
    const register unsigned short int DMABUF_7 = 7;
    sbit  DMABUF_7_bit at DMABUF.B7;
    const register unsigned short int DMABUF_6 = 6;
    sbit  DMABUF_6_bit at DMABUF.B6;
    const register unsigned short int DMABUF_5 = 5;
    sbit  DMABUF_5_bit at DMABUF.B5;
    const register unsigned short int DMABUF_4 = 4;
    sbit  DMABUF_4_bit at DMABUF.B4;
    const register unsigned short int DMABUF_3 = 3;
    sbit  DMABUF_3_bit at DMABUF.B3;
    const register unsigned short int DMABUF_2 = 2;
    sbit  DMABUF_2_bit at DMABUF.B2;
    const register unsigned short int DMABUF_1 = 1;
    sbit  DMABUF_1_bit at DMABUF.B1;
    const register unsigned short int DMABUF_0 = 0;
    sbit  DMABUF_0_bit at DMABUF.B0;

    // DMAL bits
    const register unsigned short int LADDR_15 = 15;
    sbit  LADDR_15_bit at DMAL.B15;
    const register unsigned short int LADDR_14 = 14;
    sbit  LADDR_14_bit at DMAL.B14;
    const register unsigned short int LADDR_13 = 13;
    sbit  LADDR_13_bit at DMAL.B13;
    const register unsigned short int LADDR_12 = 12;
    sbit  LADDR_12_bit at DMAL.B12;
    const register unsigned short int LADDR_11 = 11;
    sbit  LADDR_11_bit at DMAL.B11;
    const register unsigned short int LADDR_10 = 10;
    sbit  LADDR_10_bit at DMAL.B10;
    const register unsigned short int LADDR_9 = 9;
    sbit  LADDR_9_bit at DMAL.B9;
    const register unsigned short int LADDR_8 = 8;
    sbit  LADDR_8_bit at DMAL.B8;
    const register unsigned short int LADDR_7 = 7;
    sbit  LADDR_7_bit at DMAL.B7;
    const register unsigned short int LADDR_6 = 6;
    sbit  LADDR_6_bit at DMAL.B6;
    const register unsigned short int LADDR_5 = 5;
    sbit  LADDR_5_bit at DMAL.B5;
    const register unsigned short int LADDR_4 = 4;
    sbit  LADDR_4_bit at DMAL.B4;
    const register unsigned short int LADDR_3 = 3;
    sbit  LADDR_3_bit at DMAL.B3;
    const register unsigned short int LADDR_2 = 2;
    sbit  LADDR_2_bit at DMAL.B2;
    const register unsigned short int LADDR_1 = 1;
    sbit  LADDR_1_bit at DMAL.B1;
    const register unsigned short int LADDR_0 = 0;
    sbit  LADDR_0_bit at DMAL.B0;

    // DMAH bits
    const register unsigned short int HADDR_15 = 15;
    sbit  HADDR_15_bit at DMAH.B15;
    const register unsigned short int HADDR_14 = 14;
    sbit  HADDR_14_bit at DMAH.B14;
    const register unsigned short int HADDR_13 = 13;
    sbit  HADDR_13_bit at DMAH.B13;
    const register unsigned short int HADDR_12 = 12;
    sbit  HADDR_12_bit at DMAH.B12;
    const register unsigned short int HADDR_11 = 11;
    sbit  HADDR_11_bit at DMAH.B11;
    const register unsigned short int HADDR_10 = 10;
    sbit  HADDR_10_bit at DMAH.B10;
    const register unsigned short int HADDR_9 = 9;
    sbit  HADDR_9_bit at DMAH.B9;
    const register unsigned short int HADDR_8 = 8;
    sbit  HADDR_8_bit at DMAH.B8;
    const register unsigned short int HADDR_7 = 7;
    sbit  HADDR_7_bit at DMAH.B7;
    const register unsigned short int HADDR_6 = 6;
    sbit  HADDR_6_bit at DMAH.B6;
    const register unsigned short int HADDR_5 = 5;
    sbit  HADDR_5_bit at DMAH.B5;
    const register unsigned short int HADDR_4 = 4;
    sbit  HADDR_4_bit at DMAH.B4;
    const register unsigned short int HADDR_3 = 3;
    sbit  HADDR_3_bit at DMAH.B3;
    const register unsigned short int HADDR_2 = 2;
    sbit  HADDR_2_bit at DMAH.B2;
    const register unsigned short int HADDR_1 = 1;
    sbit  HADDR_1_bit at DMAH.B1;
    const register unsigned short int HADDR_0 = 0;
    sbit  HADDR_0_bit at DMAH.B0;

    // DMACH0 bits
    const register unsigned short int NULLW = 10;
    sbit  NULLW_bit at DMACH0.B10;
    sbit  NULLW_DMACH0_bit at DMACH0.B10;
    const register unsigned short int RELOAD = 9;
    sbit  RELOAD_bit at DMACH0.B9;
    sbit  RELOAD_DMACH0_bit at DMACH0.B9;
    const register unsigned short int CHREQ = 8;
    sbit  CHREQ_bit at DMACH0.B8;
    sbit  CHREQ_DMACH0_bit at DMACH0.B8;
    const register unsigned short int SAMODE_1 = 7;
    sbit  SAMODE_1_bit at DMACH0.B7;
    sbit  SAMODE_1_DMACH0_bit at DMACH0.B7;
    const register unsigned short int SAMODE_0 = 6;
    sbit  SAMODE_0_bit at DMACH0.B6;
    sbit  SAMODE_0_DMACH0_bit at DMACH0.B6;
    const register unsigned short int DAMODE_1 = 5;
    sbit  DAMODE_1_bit at DMACH0.B5;
    sbit  DAMODE_1_DMACH0_bit at DMACH0.B5;
    const register unsigned short int DAMODE_0 = 4;
    sbit  DAMODE_0_bit at DMACH0.B4;
    sbit  DAMODE_0_DMACH0_bit at DMACH0.B4;
    const register unsigned short int TRMODE_1 = 3;
    sbit  TRMODE_1_bit at DMACH0.B3;
    sbit  TRMODE_1_DMACH0_bit at DMACH0.B3;
    const register unsigned short int TRMODE_0 = 2;
    sbit  TRMODE_0_bit at DMACH0.B2;
    sbit  TRMODE_0_DMACH0_bit at DMACH0.B2;
    const register unsigned short int SIZE = 1;
    sbit  SIZE_bit at DMACH0.B1;
    sbit  SIZE_DMACH0_bit at DMACH0.B1;
    const register unsigned short int CHEN = 0;
    sbit  CHEN_bit at DMACH0.B0;
    sbit  CHEN_DMACH0_bit at DMACH0.B0;

    // DMAINT0 bits
    const register unsigned short int DBUFWF = 15;
    sbit  DBUFWF_bit at DMAINT0.B15;
    sbit  DBUFWF_DMAINT0_bit at DMAINT0.B15;
    const register unsigned short int CHSEL_5 = 13;
    sbit  CHSEL_5_bit at DMAINT0.B13;
    sbit  CHSEL_5_DMAINT0_bit at DMAINT0.B13;
    const register unsigned short int CHSEL_4 = 12;
    sbit  CHSEL_4_bit at DMAINT0.B12;
    sbit  CHSEL_4_DMAINT0_bit at DMAINT0.B12;
    const register unsigned short int CHSEL_3 = 11;
    sbit  CHSEL_3_bit at DMAINT0.B11;
    sbit  CHSEL_3_DMAINT0_bit at DMAINT0.B11;
    const register unsigned short int CHSEL_2 = 10;
    sbit  CHSEL_2_bit at DMAINT0.B10;
    sbit  CHSEL_2_DMAINT0_bit at DMAINT0.B10;
    const register unsigned short int CHSEL_1 = 9;
    sbit  CHSEL_1_bit at DMAINT0.B9;
    sbit  CHSEL_1_DMAINT0_bit at DMAINT0.B9;
    const register unsigned short int CHSEL_0 = 8;
    sbit  CHSEL_0_bit at DMAINT0.B8;
    sbit  CHSEL_0_DMAINT0_bit at DMAINT0.B8;
    const register unsigned short int HIGHIF = 7;
    sbit  HIGHIF_bit at DMAINT0.B7;
    sbit  HIGHIF_DMAINT0_bit at DMAINT0.B7;
    const register unsigned short int LOWIF = 6;
    sbit  LOWIF_bit at DMAINT0.B6;
    sbit  LOWIF_DMAINT0_bit at DMAINT0.B6;
    const register unsigned short int DONEIF = 5;
    sbit  DONEIF_bit at DMAINT0.B5;
    sbit  DONEIF_DMAINT0_bit at DMAINT0.B5;
    const register unsigned short int HALFIF = 4;
    sbit  HALFIF_bit at DMAINT0.B4;
    sbit  HALFIF_DMAINT0_bit at DMAINT0.B4;
    const register unsigned short int OVRUNIF = 3;
    sbit  OVRUNIF_bit at DMAINT0.B3;
    sbit  OVRUNIF_DMAINT0_bit at DMAINT0.B3;
    const register unsigned short int HALFEN = 0;
    sbit  HALFEN_bit at DMAINT0.B0;
    sbit  HALFEN_DMAINT0_bit at DMAINT0.B0;

    // DMASRC0 bits
    const register unsigned short int SADDR_15 = 15;
    sbit  SADDR_15_bit at DMASRC0.B15;
    sbit  SADDR_15_DMASRC0_bit at DMASRC0.B15;
    const register unsigned short int SADDR_14 = 14;
    sbit  SADDR_14_bit at DMASRC0.B14;
    sbit  SADDR_14_DMASRC0_bit at DMASRC0.B14;
    const register unsigned short int SADDR_13 = 13;
    sbit  SADDR_13_bit at DMASRC0.B13;
    sbit  SADDR_13_DMASRC0_bit at DMASRC0.B13;
    const register unsigned short int SADDR_12 = 12;
    sbit  SADDR_12_bit at DMASRC0.B12;
    sbit  SADDR_12_DMASRC0_bit at DMASRC0.B12;
    const register unsigned short int SADDR_11 = 11;
    sbit  SADDR_11_bit at DMASRC0.B11;
    sbit  SADDR_11_DMASRC0_bit at DMASRC0.B11;
    const register unsigned short int SADDR_10 = 10;
    sbit  SADDR_10_bit at DMASRC0.B10;
    sbit  SADDR_10_DMASRC0_bit at DMASRC0.B10;
    const register unsigned short int SADDR_9 = 9;
    sbit  SADDR_9_bit at DMASRC0.B9;
    sbit  SADDR_9_DMASRC0_bit at DMASRC0.B9;
    const register unsigned short int SADDR_8 = 8;
    sbit  SADDR_8_bit at DMASRC0.B8;
    sbit  SADDR_8_DMASRC0_bit at DMASRC0.B8;
    const register unsigned short int SADDR_7 = 7;
    sbit  SADDR_7_bit at DMASRC0.B7;
    sbit  SADDR_7_DMASRC0_bit at DMASRC0.B7;
    const register unsigned short int SADDR_6 = 6;
    sbit  SADDR_6_bit at DMASRC0.B6;
    sbit  SADDR_6_DMASRC0_bit at DMASRC0.B6;
    const register unsigned short int SADDR_5 = 5;
    sbit  SADDR_5_bit at DMASRC0.B5;
    sbit  SADDR_5_DMASRC0_bit at DMASRC0.B5;
    const register unsigned short int SADDR_4 = 4;
    sbit  SADDR_4_bit at DMASRC0.B4;
    sbit  SADDR_4_DMASRC0_bit at DMASRC0.B4;
    const register unsigned short int SADDR_3 = 3;
    sbit  SADDR_3_bit at DMASRC0.B3;
    sbit  SADDR_3_DMASRC0_bit at DMASRC0.B3;
    const register unsigned short int SADDR_2 = 2;
    sbit  SADDR_2_bit at DMASRC0.B2;
    sbit  SADDR_2_DMASRC0_bit at DMASRC0.B2;
    const register unsigned short int SADDR_1 = 1;
    sbit  SADDR_1_bit at DMASRC0.B1;
    sbit  SADDR_1_DMASRC0_bit at DMASRC0.B1;
    const register unsigned short int SADDR_0 = 0;
    sbit  SADDR_0_bit at DMASRC0.B0;
    sbit  SADDR_0_DMASRC0_bit at DMASRC0.B0;

    // DMADST0 bits
    const register unsigned short int DADDR_15 = 15;
    sbit  DADDR_15_bit at DMADST0.B15;
    sbit  DADDR_15_DMADST0_bit at DMADST0.B15;
    const register unsigned short int DADDR_14 = 14;
    sbit  DADDR_14_bit at DMADST0.B14;
    sbit  DADDR_14_DMADST0_bit at DMADST0.B14;
    const register unsigned short int DADDR_13 = 13;
    sbit  DADDR_13_bit at DMADST0.B13;
    sbit  DADDR_13_DMADST0_bit at DMADST0.B13;
    const register unsigned short int DADDR_12 = 12;
    sbit  DADDR_12_bit at DMADST0.B12;
    sbit  DADDR_12_DMADST0_bit at DMADST0.B12;
    const register unsigned short int DADDR_11 = 11;
    sbit  DADDR_11_bit at DMADST0.B11;
    sbit  DADDR_11_DMADST0_bit at DMADST0.B11;
    const register unsigned short int DADDR_10 = 10;
    sbit  DADDR_10_bit at DMADST0.B10;
    sbit  DADDR_10_DMADST0_bit at DMADST0.B10;
    const register unsigned short int DADDR_9 = 9;
    sbit  DADDR_9_bit at DMADST0.B9;
    sbit  DADDR_9_DMADST0_bit at DMADST0.B9;
    const register unsigned short int DADDR_8 = 8;
    sbit  DADDR_8_bit at DMADST0.B8;
    sbit  DADDR_8_DMADST0_bit at DMADST0.B8;
    const register unsigned short int DADDR_7 = 7;
    sbit  DADDR_7_bit at DMADST0.B7;
    sbit  DADDR_7_DMADST0_bit at DMADST0.B7;
    const register unsigned short int DADDR_6 = 6;
    sbit  DADDR_6_bit at DMADST0.B6;
    sbit  DADDR_6_DMADST0_bit at DMADST0.B6;
    const register unsigned short int DADDR_5 = 5;
    sbit  DADDR_5_bit at DMADST0.B5;
    sbit  DADDR_5_DMADST0_bit at DMADST0.B5;
    const register unsigned short int DADDR_4 = 4;
    sbit  DADDR_4_bit at DMADST0.B4;
    sbit  DADDR_4_DMADST0_bit at DMADST0.B4;
    const register unsigned short int DADDR_3 = 3;
    sbit  DADDR_3_bit at DMADST0.B3;
    sbit  DADDR_3_DMADST0_bit at DMADST0.B3;
    const register unsigned short int DADDR_2 = 2;
    sbit  DADDR_2_bit at DMADST0.B2;
    sbit  DADDR_2_DMADST0_bit at DMADST0.B2;
    const register unsigned short int DADDR_1 = 1;
    sbit  DADDR_1_bit at DMADST0.B1;
    sbit  DADDR_1_DMADST0_bit at DMADST0.B1;
    const register unsigned short int DADDR_0 = 0;
    sbit  DADDR_0_bit at DMADST0.B0;
    sbit  DADDR_0_DMADST0_bit at DMADST0.B0;

    // DMACNT0 bits
    const register unsigned short int CNT_15 = 15;
    sbit  CNT_15_bit at DMACNT0.B15;
    sbit  CNT_15_DMACNT0_bit at DMACNT0.B15;
    const register unsigned short int CNT_14 = 14;
    sbit  CNT_14_bit at DMACNT0.B14;
    sbit  CNT_14_DMACNT0_bit at DMACNT0.B14;
    const register unsigned short int CNT_13 = 13;
    sbit  CNT_13_bit at DMACNT0.B13;
    sbit  CNT_13_DMACNT0_bit at DMACNT0.B13;
    const register unsigned short int CNT_12 = 12;
    sbit  CNT_12_bit at DMACNT0.B12;
    sbit  CNT_12_DMACNT0_bit at DMACNT0.B12;
    const register unsigned short int CNT_11 = 11;
    sbit  CNT_11_bit at DMACNT0.B11;
    sbit  CNT_11_DMACNT0_bit at DMACNT0.B11;
    const register unsigned short int CNT_10 = 10;
    sbit  CNT_10_bit at DMACNT0.B10;
    sbit  CNT_10_DMACNT0_bit at DMACNT0.B10;
    const register unsigned short int CNT_9 = 9;
    sbit  CNT_9_bit at DMACNT0.B9;
    sbit  CNT_9_DMACNT0_bit at DMACNT0.B9;
    const register unsigned short int CNT_8 = 8;
    sbit  CNT_8_bit at DMACNT0.B8;
    sbit  CNT_8_DMACNT0_bit at DMACNT0.B8;
    const register unsigned short int CNT_7 = 7;
    sbit  CNT_7_bit at DMACNT0.B7;
    sbit  CNT_7_DMACNT0_bit at DMACNT0.B7;
    const register unsigned short int CNT_6 = 6;
    sbit  CNT_6_bit at DMACNT0.B6;
    sbit  CNT_6_DMACNT0_bit at DMACNT0.B6;
    const register unsigned short int CNT_5 = 5;
    sbit  CNT_5_bit at DMACNT0.B5;
    sbit  CNT_5_DMACNT0_bit at DMACNT0.B5;
    const register unsigned short int CNT_4 = 4;
    sbit  CNT_4_bit at DMACNT0.B4;
    sbit  CNT_4_DMACNT0_bit at DMACNT0.B4;
    const register unsigned short int CNT_3 = 3;
    sbit  CNT_3_bit at DMACNT0.B3;
    sbit  CNT_3_DMACNT0_bit at DMACNT0.B3;
    const register unsigned short int CNT_2 = 2;
    sbit  CNT_2_bit at DMACNT0.B2;
    sbit  CNT_2_DMACNT0_bit at DMACNT0.B2;
    const register unsigned short int CNT_1 = 1;
    sbit  CNT_1_bit at DMACNT0.B1;
    sbit  CNT_1_DMACNT0_bit at DMACNT0.B1;
    const register unsigned short int CNT_0 = 0;
    sbit  CNT_0_bit at DMACNT0.B0;
    sbit  CNT_0_DMACNT0_bit at DMACNT0.B0;

    // DMACH1 bits
    sbit  NULLW_DMACH1_bit at DMACH1.B10;
    sbit  RELOAD_DMACH1_bit at DMACH1.B9;
    sbit  CHREQ_DMACH1_bit at DMACH1.B8;
    sbit  SAMODE_1_DMACH1_bit at DMACH1.B7;
    sbit  SAMODE_0_DMACH1_bit at DMACH1.B6;
    sbit  DAMODE_1_DMACH1_bit at DMACH1.B5;
    sbit  DAMODE_0_DMACH1_bit at DMACH1.B4;
    sbit  TRMODE_1_DMACH1_bit at DMACH1.B3;
    sbit  TRMODE_0_DMACH1_bit at DMACH1.B2;
    sbit  SIZE_DMACH1_bit at DMACH1.B1;
    sbit  CHEN_DMACH1_bit at DMACH1.B0;

    // DMAINT1 bits
    sbit  DBUFWF_DMAINT1_bit at DMAINT1.B15;
    sbit  CHSEL_5_DMAINT1_bit at DMAINT1.B13;
    sbit  CHSEL_4_DMAINT1_bit at DMAINT1.B12;
    sbit  CHSEL_3_DMAINT1_bit at DMAINT1.B11;
    sbit  CHSEL_2_DMAINT1_bit at DMAINT1.B10;
    sbit  CHSEL_1_DMAINT1_bit at DMAINT1.B9;
    sbit  CHSEL_0_DMAINT1_bit at DMAINT1.B8;
    sbit  HIGHIF_DMAINT1_bit at DMAINT1.B7;
    sbit  LOWIF_DMAINT1_bit at DMAINT1.B6;
    sbit  DONEIF_DMAINT1_bit at DMAINT1.B5;
    sbit  HALFIF_DMAINT1_bit at DMAINT1.B4;
    sbit  OVRUNIF_DMAINT1_bit at DMAINT1.B3;
    sbit  HALFEN_DMAINT1_bit at DMAINT1.B0;

    // DMASRC1 bits
    sbit  SADDR_15_DMASRC1_bit at DMASRC1.B15;
    sbit  SADDR_14_DMASRC1_bit at DMASRC1.B14;
    sbit  SADDR_13_DMASRC1_bit at DMASRC1.B13;
    sbit  SADDR_12_DMASRC1_bit at DMASRC1.B12;
    sbit  SADDR_11_DMASRC1_bit at DMASRC1.B11;
    sbit  SADDR_10_DMASRC1_bit at DMASRC1.B10;
    sbit  SADDR_9_DMASRC1_bit at DMASRC1.B9;
    sbit  SADDR_8_DMASRC1_bit at DMASRC1.B8;
    sbit  SADDR_7_DMASRC1_bit at DMASRC1.B7;
    sbit  SADDR_6_DMASRC1_bit at DMASRC1.B6;
    sbit  SADDR_5_DMASRC1_bit at DMASRC1.B5;
    sbit  SADDR_4_DMASRC1_bit at DMASRC1.B4;
    sbit  SADDR_3_DMASRC1_bit at DMASRC1.B3;
    sbit  SADDR_2_DMASRC1_bit at DMASRC1.B2;
    sbit  SADDR_1_DMASRC1_bit at DMASRC1.B1;
    sbit  SADDR_0_DMASRC1_bit at DMASRC1.B0;

    // DMADST1 bits
    sbit  DADDR_15_DMADST1_bit at DMADST1.B15;
    sbit  DADDR_14_DMADST1_bit at DMADST1.B14;
    sbit  DADDR_13_DMADST1_bit at DMADST1.B13;
    sbit  DADDR_12_DMADST1_bit at DMADST1.B12;
    sbit  DADDR_11_DMADST1_bit at DMADST1.B11;
    sbit  DADDR_10_DMADST1_bit at DMADST1.B10;
    sbit  DADDR_9_DMADST1_bit at DMADST1.B9;
    sbit  DADDR_8_DMADST1_bit at DMADST1.B8;
    sbit  DADDR_7_DMADST1_bit at DMADST1.B7;
    sbit  DADDR_6_DMADST1_bit at DMADST1.B6;
    sbit  DADDR_5_DMADST1_bit at DMADST1.B5;
    sbit  DADDR_4_DMADST1_bit at DMADST1.B4;
    sbit  DADDR_3_DMADST1_bit at DMADST1.B3;
    sbit  DADDR_2_DMADST1_bit at DMADST1.B2;
    sbit  DADDR_1_DMADST1_bit at DMADST1.B1;
    sbit  DADDR_0_DMADST1_bit at DMADST1.B0;

    // DMACNT1 bits
    sbit  CNT_15_DMACNT1_bit at DMACNT1.B15;
    sbit  CNT_14_DMACNT1_bit at DMACNT1.B14;
    sbit  CNT_13_DMACNT1_bit at DMACNT1.B13;
    sbit  CNT_12_DMACNT1_bit at DMACNT1.B12;
    sbit  CNT_11_DMACNT1_bit at DMACNT1.B11;
    sbit  CNT_10_DMACNT1_bit at DMACNT1.B10;
    sbit  CNT_9_DMACNT1_bit at DMACNT1.B9;
    sbit  CNT_8_DMACNT1_bit at DMACNT1.B8;
    sbit  CNT_7_DMACNT1_bit at DMACNT1.B7;
    sbit  CNT_6_DMACNT1_bit at DMACNT1.B6;
    sbit  CNT_5_DMACNT1_bit at DMACNT1.B5;
    sbit  CNT_4_DMACNT1_bit at DMACNT1.B4;
    sbit  CNT_3_DMACNT1_bit at DMACNT1.B3;
    sbit  CNT_2_DMACNT1_bit at DMACNT1.B2;
    sbit  CNT_1_DMACNT1_bit at DMACNT1.B1;
    sbit  CNT_0_DMACNT1_bit at DMACNT1.B0;

    // DMACH2 bits
    sbit  NULLW_DMACH2_bit at DMACH2.B10;
    sbit  RELOAD_DMACH2_bit at DMACH2.B9;
    sbit  CHREQ_DMACH2_bit at DMACH2.B8;
    sbit  SAMODE_1_DMACH2_bit at DMACH2.B7;
    sbit  SAMODE_0_DMACH2_bit at DMACH2.B6;
    sbit  DAMODE_1_DMACH2_bit at DMACH2.B5;
    sbit  DAMODE_0_DMACH2_bit at DMACH2.B4;
    sbit  TRMODE_1_DMACH2_bit at DMACH2.B3;
    sbit  TRMODE_0_DMACH2_bit at DMACH2.B2;
    sbit  SIZE_DMACH2_bit at DMACH2.B1;
    sbit  CHEN_DMACH2_bit at DMACH2.B0;

    // DMAINT2 bits
    sbit  DBUFWF_DMAINT2_bit at DMAINT2.B15;
    sbit  CHSEL_5_DMAINT2_bit at DMAINT2.B13;
    sbit  CHSEL_4_DMAINT2_bit at DMAINT2.B12;
    sbit  CHSEL_3_DMAINT2_bit at DMAINT2.B11;
    sbit  CHSEL_2_DMAINT2_bit at DMAINT2.B10;
    sbit  CHSEL_1_DMAINT2_bit at DMAINT2.B9;
    sbit  CHSEL_0_DMAINT2_bit at DMAINT2.B8;
    sbit  HIGHIF_DMAINT2_bit at DMAINT2.B7;
    sbit  LOWIF_DMAINT2_bit at DMAINT2.B6;
    sbit  DONEIF_DMAINT2_bit at DMAINT2.B5;
    sbit  HALFIF_DMAINT2_bit at DMAINT2.B4;
    sbit  OVRUNIF_DMAINT2_bit at DMAINT2.B3;
    sbit  HALFEN_DMAINT2_bit at DMAINT2.B0;

    // DMASRC2 bits
    sbit  SADDR_15_DMASRC2_bit at DMASRC2.B15;
    sbit  SADDR_14_DMASRC2_bit at DMASRC2.B14;
    sbit  SADDR_13_DMASRC2_bit at DMASRC2.B13;
    sbit  SADDR_12_DMASRC2_bit at DMASRC2.B12;
    sbit  SADDR_11_DMASRC2_bit at DMASRC2.B11;
    sbit  SADDR_10_DMASRC2_bit at DMASRC2.B10;
    sbit  SADDR_9_DMASRC2_bit at DMASRC2.B9;
    sbit  SADDR_8_DMASRC2_bit at DMASRC2.B8;
    sbit  SADDR_7_DMASRC2_bit at DMASRC2.B7;
    sbit  SADDR_6_DMASRC2_bit at DMASRC2.B6;
    sbit  SADDR_5_DMASRC2_bit at DMASRC2.B5;
    sbit  SADDR_4_DMASRC2_bit at DMASRC2.B4;
    sbit  SADDR_3_DMASRC2_bit at DMASRC2.B3;
    sbit  SADDR_2_DMASRC2_bit at DMASRC2.B2;
    sbit  SADDR_1_DMASRC2_bit at DMASRC2.B1;
    sbit  SADDR_0_DMASRC2_bit at DMASRC2.B0;

    // DMADST2 bits
    sbit  DADDR_15_DMADST2_bit at DMADST2.B15;
    sbit  DADDR_14_DMADST2_bit at DMADST2.B14;
    sbit  DADDR_13_DMADST2_bit at DMADST2.B13;
    sbit  DADDR_12_DMADST2_bit at DMADST2.B12;
    sbit  DADDR_11_DMADST2_bit at DMADST2.B11;
    sbit  DADDR_10_DMADST2_bit at DMADST2.B10;
    sbit  DADDR_9_DMADST2_bit at DMADST2.B9;
    sbit  DADDR_8_DMADST2_bit at DMADST2.B8;
    sbit  DADDR_7_DMADST2_bit at DMADST2.B7;
    sbit  DADDR_6_DMADST2_bit at DMADST2.B6;
    sbit  DADDR_5_DMADST2_bit at DMADST2.B5;
    sbit  DADDR_4_DMADST2_bit at DMADST2.B4;
    sbit  DADDR_3_DMADST2_bit at DMADST2.B3;
    sbit  DADDR_2_DMADST2_bit at DMADST2.B2;
    sbit  DADDR_1_DMADST2_bit at DMADST2.B1;
    sbit  DADDR_0_DMADST2_bit at DMADST2.B0;

    // DMACNT2 bits
    sbit  CNT_15_DMACNT2_bit at DMACNT2.B15;
    sbit  CNT_14_DMACNT2_bit at DMACNT2.B14;
    sbit  CNT_13_DMACNT2_bit at DMACNT2.B13;
    sbit  CNT_12_DMACNT2_bit at DMACNT2.B12;
    sbit  CNT_11_DMACNT2_bit at DMACNT2.B11;
    sbit  CNT_10_DMACNT2_bit at DMACNT2.B10;
    sbit  CNT_9_DMACNT2_bit at DMACNT2.B9;
    sbit  CNT_8_DMACNT2_bit at DMACNT2.B8;
    sbit  CNT_7_DMACNT2_bit at DMACNT2.B7;
    sbit  CNT_6_DMACNT2_bit at DMACNT2.B6;
    sbit  CNT_5_DMACNT2_bit at DMACNT2.B5;
    sbit  CNT_4_DMACNT2_bit at DMACNT2.B4;
    sbit  CNT_3_DMACNT2_bit at DMACNT2.B3;
    sbit  CNT_2_DMACNT2_bit at DMACNT2.B2;
    sbit  CNT_1_DMACNT2_bit at DMACNT2.B1;
    sbit  CNT_0_DMACNT2_bit at DMACNT2.B0;

    // DMACH3 bits
    sbit  NULLW_DMACH3_bit at DMACH3.B10;
    sbit  RELOAD_DMACH3_bit at DMACH3.B9;
    sbit  CHREQ_DMACH3_bit at DMACH3.B8;
    sbit  SAMODE_1_DMACH3_bit at DMACH3.B7;
    sbit  SAMODE_0_DMACH3_bit at DMACH3.B6;
    sbit  DAMODE_1_DMACH3_bit at DMACH3.B5;
    sbit  DAMODE_0_DMACH3_bit at DMACH3.B4;
    sbit  TRMODE_1_DMACH3_bit at DMACH3.B3;
    sbit  TRMODE_0_DMACH3_bit at DMACH3.B2;
    sbit  SIZE_DMACH3_bit at DMACH3.B1;
    sbit  CHEN_DMACH3_bit at DMACH3.B0;

    // DMAINT3 bits
    sbit  DBUFWF_DMAINT3_bit at DMAINT3.B15;
    sbit  CHSEL_5_DMAINT3_bit at DMAINT3.B13;
    sbit  CHSEL_4_DMAINT3_bit at DMAINT3.B12;
    sbit  CHSEL_3_DMAINT3_bit at DMAINT3.B11;
    sbit  CHSEL_2_DMAINT3_bit at DMAINT3.B10;
    sbit  CHSEL_1_DMAINT3_bit at DMAINT3.B9;
    sbit  CHSEL_0_DMAINT3_bit at DMAINT3.B8;
    sbit  HIGHIF_DMAINT3_bit at DMAINT3.B7;
    sbit  LOWIF_DMAINT3_bit at DMAINT3.B6;
    sbit  DONEIF_DMAINT3_bit at DMAINT3.B5;
    sbit  HALFIF_DMAINT3_bit at DMAINT3.B4;
    sbit  OVRUNIF_DMAINT3_bit at DMAINT3.B3;
    sbit  HALFEN_DMAINT3_bit at DMAINT3.B0;

    // DMASRC3 bits
    sbit  SADDR_15_DMASRC3_bit at DMASRC3.B15;
    sbit  SADDR_14_DMASRC3_bit at DMASRC3.B14;
    sbit  SADDR_13_DMASRC3_bit at DMASRC3.B13;
    sbit  SADDR_12_DMASRC3_bit at DMASRC3.B12;
    sbit  SADDR_11_DMASRC3_bit at DMASRC3.B11;
    sbit  SADDR_10_DMASRC3_bit at DMASRC3.B10;
    sbit  SADDR_9_DMASRC3_bit at DMASRC3.B9;
    sbit  SADDR_8_DMASRC3_bit at DMASRC3.B8;
    sbit  SADDR_7_DMASRC3_bit at DMASRC3.B7;
    sbit  SADDR_6_DMASRC3_bit at DMASRC3.B6;
    sbit  SADDR_5_DMASRC3_bit at DMASRC3.B5;
    sbit  SADDR_4_DMASRC3_bit at DMASRC3.B4;
    sbit  SADDR_3_DMASRC3_bit at DMASRC3.B3;
    sbit  SADDR_2_DMASRC3_bit at DMASRC3.B2;
    sbit  SADDR_1_DMASRC3_bit at DMASRC3.B1;
    sbit  SADDR_0_DMASRC3_bit at DMASRC3.B0;

    // DMADST3 bits
    sbit  DADDR_15_DMADST3_bit at DMADST3.B15;
    sbit  DADDR_14_DMADST3_bit at DMADST3.B14;
    sbit  DADDR_13_DMADST3_bit at DMADST3.B13;
    sbit  DADDR_12_DMADST3_bit at DMADST3.B12;
    sbit  DADDR_11_DMADST3_bit at DMADST3.B11;
    sbit  DADDR_10_DMADST3_bit at DMADST3.B10;
    sbit  DADDR_9_DMADST3_bit at DMADST3.B9;
    sbit  DADDR_8_DMADST3_bit at DMADST3.B8;
    sbit  DADDR_7_DMADST3_bit at DMADST3.B7;
    sbit  DADDR_6_DMADST3_bit at DMADST3.B6;
    sbit  DADDR_5_DMADST3_bit at DMADST3.B5;
    sbit  DADDR_4_DMADST3_bit at DMADST3.B4;
    sbit  DADDR_3_DMADST3_bit at DMADST3.B3;
    sbit  DADDR_2_DMADST3_bit at DMADST3.B2;
    sbit  DADDR_1_DMADST3_bit at DMADST3.B1;
    sbit  DADDR_0_DMADST3_bit at DMADST3.B0;

    // DMACNT3 bits
    sbit  CNT_15_DMACNT3_bit at DMACNT3.B15;
    sbit  CNT_14_DMACNT3_bit at DMACNT3.B14;
    sbit  CNT_13_DMACNT3_bit at DMACNT3.B13;
    sbit  CNT_12_DMACNT3_bit at DMACNT3.B12;
    sbit  CNT_11_DMACNT3_bit at DMACNT3.B11;
    sbit  CNT_10_DMACNT3_bit at DMACNT3.B10;
    sbit  CNT_9_DMACNT3_bit at DMACNT3.B9;
    sbit  CNT_8_DMACNT3_bit at DMACNT3.B8;
    sbit  CNT_7_DMACNT3_bit at DMACNT3.B7;
    sbit  CNT_6_DMACNT3_bit at DMACNT3.B6;
    sbit  CNT_5_DMACNT3_bit at DMACNT3.B5;
    sbit  CNT_4_DMACNT3_bit at DMACNT3.B4;
    sbit  CNT_3_DMACNT3_bit at DMACNT3.B3;
    sbit  CNT_2_DMACNT3_bit at DMACNT3.B2;
    sbit  CNT_1_DMACNT3_bit at DMACNT3.B1;
    sbit  CNT_0_DMACNT3_bit at DMACNT3.B0;

    // DMACH4 bits
    sbit  NULLW_DMACH4_bit at DMACH4.B10;
    sbit  RELOAD_DMACH4_bit at DMACH4.B9;
    sbit  CHREQ_DMACH4_bit at DMACH4.B8;
    sbit  SAMODE_1_DMACH4_bit at DMACH4.B7;
    sbit  SAMODE_0_DMACH4_bit at DMACH4.B6;
    sbit  DAMODE_1_DMACH4_bit at DMACH4.B5;
    sbit  DAMODE_0_DMACH4_bit at DMACH4.B4;
    sbit  TRMODE_1_DMACH4_bit at DMACH4.B3;
    sbit  TRMODE_0_DMACH4_bit at DMACH4.B2;
    sbit  SIZE_DMACH4_bit at DMACH4.B1;
    sbit  CHEN_DMACH4_bit at DMACH4.B0;

    // DMAINT4 bits
    sbit  DBUFWF_DMAINT4_bit at DMAINT4.B15;
    sbit  CHSEL_5_DMAINT4_bit at DMAINT4.B13;
    sbit  CHSEL_4_DMAINT4_bit at DMAINT4.B12;
    sbit  CHSEL_3_DMAINT4_bit at DMAINT4.B11;
    sbit  CHSEL_2_DMAINT4_bit at DMAINT4.B10;
    sbit  CHSEL_1_DMAINT4_bit at DMAINT4.B9;
    sbit  CHSEL_0_DMAINT4_bit at DMAINT4.B8;
    sbit  HIGHIF_DMAINT4_bit at DMAINT4.B7;
    sbit  LOWIF_DMAINT4_bit at DMAINT4.B6;
    sbit  DONEIF_DMAINT4_bit at DMAINT4.B5;
    sbit  HALFIF_DMAINT4_bit at DMAINT4.B4;
    sbit  OVRUNIF_DMAINT4_bit at DMAINT4.B3;
    sbit  HALFEN_DMAINT4_bit at DMAINT4.B0;

    // DMASRC4 bits
    sbit  SADDR_15_DMASRC4_bit at DMASRC4.B15;
    sbit  SADDR_14_DMASRC4_bit at DMASRC4.B14;
    sbit  SADDR_13_DMASRC4_bit at DMASRC4.B13;
    sbit  SADDR_12_DMASRC4_bit at DMASRC4.B12;
    sbit  SADDR_11_DMASRC4_bit at DMASRC4.B11;
    sbit  SADDR_10_DMASRC4_bit at DMASRC4.B10;
    sbit  SADDR_9_DMASRC4_bit at DMASRC4.B9;
    sbit  SADDR_8_DMASRC4_bit at DMASRC4.B8;
    sbit  SADDR_7_DMASRC4_bit at DMASRC4.B7;
    sbit  SADDR_6_DMASRC4_bit at DMASRC4.B6;
    sbit  SADDR_5_DMASRC4_bit at DMASRC4.B5;
    sbit  SADDR_4_DMASRC4_bit at DMASRC4.B4;
    sbit  SADDR_3_DMASRC4_bit at DMASRC4.B3;
    sbit  SADDR_2_DMASRC4_bit at DMASRC4.B2;
    sbit  SADDR_1_DMASRC4_bit at DMASRC4.B1;
    sbit  SADDR_0_DMASRC4_bit at DMASRC4.B0;

    // DMADST4 bits
    sbit  DADDR_15_DMADST4_bit at DMADST4.B15;
    sbit  DADDR_14_DMADST4_bit at DMADST4.B14;
    sbit  DADDR_13_DMADST4_bit at DMADST4.B13;
    sbit  DADDR_12_DMADST4_bit at DMADST4.B12;
    sbit  DADDR_11_DMADST4_bit at DMADST4.B11;
    sbit  DADDR_10_DMADST4_bit at DMADST4.B10;
    sbit  DADDR_9_DMADST4_bit at DMADST4.B9;
    sbit  DADDR_8_DMADST4_bit at DMADST4.B8;
    sbit  DADDR_7_DMADST4_bit at DMADST4.B7;
    sbit  DADDR_6_DMADST4_bit at DMADST4.B6;
    sbit  DADDR_5_DMADST4_bit at DMADST4.B5;
    sbit  DADDR_4_DMADST4_bit at DMADST4.B4;
    sbit  DADDR_3_DMADST4_bit at DMADST4.B3;
    sbit  DADDR_2_DMADST4_bit at DMADST4.B2;
    sbit  DADDR_1_DMADST4_bit at DMADST4.B1;
    sbit  DADDR_0_DMADST4_bit at DMADST4.B0;

    // DMACNT4 bits
    sbit  CNT_15_DMACNT4_bit at DMACNT4.B15;
    sbit  CNT_14_DMACNT4_bit at DMACNT4.B14;
    sbit  CNT_13_DMACNT4_bit at DMACNT4.B13;
    sbit  CNT_12_DMACNT4_bit at DMACNT4.B12;
    sbit  CNT_11_DMACNT4_bit at DMACNT4.B11;
    sbit  CNT_10_DMACNT4_bit at DMACNT4.B10;
    sbit  CNT_9_DMACNT4_bit at DMACNT4.B9;
    sbit  CNT_8_DMACNT4_bit at DMACNT4.B8;
    sbit  CNT_7_DMACNT4_bit at DMACNT4.B7;
    sbit  CNT_6_DMACNT4_bit at DMACNT4.B6;
    sbit  CNT_5_DMACNT4_bit at DMACNT4.B5;
    sbit  CNT_4_DMACNT4_bit at DMACNT4.B4;
    sbit  CNT_3_DMACNT4_bit at DMACNT4.B3;
    sbit  CNT_2_DMACNT4_bit at DMACNT4.B2;
    sbit  CNT_1_DMACNT4_bit at DMACNT4.B1;
    sbit  CNT_0_DMACNT4_bit at DMACNT4.B0;

    // DMACH5 bits
    sbit  NULLW_DMACH5_bit at DMACH5.B10;
    sbit  RELOAD_DMACH5_bit at DMACH5.B9;
    sbit  CHREQ_DMACH5_bit at DMACH5.B8;
    sbit  SAMODE_1_DMACH5_bit at DMACH5.B7;
    sbit  SAMODE_0_DMACH5_bit at DMACH5.B6;
    sbit  DAMODE_1_DMACH5_bit at DMACH5.B5;
    sbit  DAMODE_0_DMACH5_bit at DMACH5.B4;
    sbit  TRMODE_1_DMACH5_bit at DMACH5.B3;
    sbit  TRMODE_0_DMACH5_bit at DMACH5.B2;
    sbit  SIZE_DMACH5_bit at DMACH5.B1;
    sbit  CHEN_DMACH5_bit at DMACH5.B0;

    // DMAINT5 bits
    sbit  DBUFWF_DMAINT5_bit at DMAINT5.B15;
    sbit  CHSEL_5_DMAINT5_bit at DMAINT5.B13;
    sbit  CHSEL_4_DMAINT5_bit at DMAINT5.B12;
    sbit  CHSEL_3_DMAINT5_bit at DMAINT5.B11;
    sbit  CHSEL_2_DMAINT5_bit at DMAINT5.B10;
    sbit  CHSEL_1_DMAINT5_bit at DMAINT5.B9;
    sbit  CHSEL_0_DMAINT5_bit at DMAINT5.B8;
    sbit  HIGHIF_DMAINT5_bit at DMAINT5.B7;
    sbit  LOWIF_DMAINT5_bit at DMAINT5.B6;
    sbit  DONEIF_DMAINT5_bit at DMAINT5.B5;
    sbit  HALFIF_DMAINT5_bit at DMAINT5.B4;
    sbit  OVRUNIF_DMAINT5_bit at DMAINT5.B3;
    sbit  HALFEN_DMAINT5_bit at DMAINT5.B0;

    // DMASRC5 bits
    sbit  SADDR_15_DMASRC5_bit at DMASRC5.B15;
    sbit  SADDR_14_DMASRC5_bit at DMASRC5.B14;
    sbit  SADDR_13_DMASRC5_bit at DMASRC5.B13;
    sbit  SADDR_12_DMASRC5_bit at DMASRC5.B12;
    sbit  SADDR_11_DMASRC5_bit at DMASRC5.B11;
    sbit  SADDR_10_DMASRC5_bit at DMASRC5.B10;
    sbit  SADDR_9_DMASRC5_bit at DMASRC5.B9;
    sbit  SADDR_8_DMASRC5_bit at DMASRC5.B8;
    sbit  SADDR_7_DMASRC5_bit at DMASRC5.B7;
    sbit  SADDR_6_DMASRC5_bit at DMASRC5.B6;
    sbit  SADDR_5_DMASRC5_bit at DMASRC5.B5;
    sbit  SADDR_4_DMASRC5_bit at DMASRC5.B4;
    sbit  SADDR_3_DMASRC5_bit at DMASRC5.B3;
    sbit  SADDR_2_DMASRC5_bit at DMASRC5.B2;
    sbit  SADDR_1_DMASRC5_bit at DMASRC5.B1;
    sbit  SADDR_0_DMASRC5_bit at DMASRC5.B0;

    // DMADST5 bits
    sbit  DADDR_15_DMADST5_bit at DMADST5.B15;
    sbit  DADDR_14_DMADST5_bit at DMADST5.B14;
    sbit  DADDR_13_DMADST5_bit at DMADST5.B13;
    sbit  DADDR_12_DMADST5_bit at DMADST5.B12;
    sbit  DADDR_11_DMADST5_bit at DMADST5.B11;
    sbit  DADDR_10_DMADST5_bit at DMADST5.B10;
    sbit  DADDR_9_DMADST5_bit at DMADST5.B9;
    sbit  DADDR_8_DMADST5_bit at DMADST5.B8;
    sbit  DADDR_7_DMADST5_bit at DMADST5.B7;
    sbit  DADDR_6_DMADST5_bit at DMADST5.B6;
    sbit  DADDR_5_DMADST5_bit at DMADST5.B5;
    sbit  DADDR_4_DMADST5_bit at DMADST5.B4;
    sbit  DADDR_3_DMADST5_bit at DMADST5.B3;
    sbit  DADDR_2_DMADST5_bit at DMADST5.B2;
    sbit  DADDR_1_DMADST5_bit at DMADST5.B1;
    sbit  DADDR_0_DMADST5_bit at DMADST5.B0;

    // DMACNT5 bits
    sbit  CNT_15_DMACNT5_bit at DMACNT5.B15;
    sbit  CNT_14_DMACNT5_bit at DMACNT5.B14;
    sbit  CNT_13_DMACNT5_bit at DMACNT5.B13;
    sbit  CNT_12_DMACNT5_bit at DMACNT5.B12;
    sbit  CNT_11_DMACNT5_bit at DMACNT5.B11;
    sbit  CNT_10_DMACNT5_bit at DMACNT5.B10;
    sbit  CNT_9_DMACNT5_bit at DMACNT5.B9;
    sbit  CNT_8_DMACNT5_bit at DMACNT5.B8;
    sbit  CNT_7_DMACNT5_bit at DMACNT5.B7;
    sbit  CNT_6_DMACNT5_bit at DMACNT5.B6;
    sbit  CNT_5_DMACNT5_bit at DMACNT5.B5;
    sbit  CNT_4_DMACNT5_bit at DMACNT5.B4;
    sbit  CNT_3_DMACNT5_bit at DMACNT5.B3;
    sbit  CNT_2_DMACNT5_bit at DMACNT5.B2;
    sbit  CNT_1_DMACNT5_bit at DMACNT5.B1;
    sbit  CNT_0_DMACNT5_bit at DMACNT5.B0;

    // ADL3CONL bits
    const register unsigned short int SLEN = 15;
    sbit  SLEN_bit at ADL3CONL.B15;
    sbit  SLEN_ADL3CONL_bit at ADL3CONL.B15;
    const register unsigned short int SAMP = 14;
    sbit  SAMP_bit at ADL3CONL.B14;
    sbit  SAMP_ADL3CONL_bit at ADL3CONL.B14;
    const register unsigned short int SLENCLR = 13;
    sbit  SLENCLR_bit at ADL3CONL.B13;
    sbit  SLENCLR_ADL3CONL_bit at ADL3CONL.B13;
    const register unsigned short int SLTSRC_4 = 12;
    sbit  SLTSRC_4_bit at ADL3CONL.B12;
    sbit  SLTSRC_4_ADL3CONL_bit at ADL3CONL.B12;
    const register unsigned short int SLTSRC_3 = 11;
    sbit  SLTSRC_3_bit at ADL3CONL.B11;
    sbit  SLTSRC_3_ADL3CONL_bit at ADL3CONL.B11;
    const register unsigned short int SLTSRC_2 = 10;
    sbit  SLTSRC_2_bit at ADL3CONL.B10;
    sbit  SLTSRC_2_ADL3CONL_bit at ADL3CONL.B10;
    const register unsigned short int SLTSRC_1 = 9;
    sbit  SLTSRC_1_bit at ADL3CONL.B9;
    sbit  SLTSRC_1_ADL3CONL_bit at ADL3CONL.B9;
    const register unsigned short int SLTSRC_0 = 8;
    sbit  SLTSRC_0_bit at ADL3CONL.B8;
    sbit  SLTSRC_0_ADL3CONL_bit at ADL3CONL.B8;
    const register unsigned short int THSRC = 7;
    sbit  THSRC_bit at ADL3CONL.B7;
    sbit  THSRC_ADL3CONL_bit at ADL3CONL.B7;
    const register unsigned short int SLSIZE_5 = 5;
    sbit  SLSIZE_5_bit at ADL3CONL.B5;
    sbit  SLSIZE_5_ADL3CONL_bit at ADL3CONL.B5;
    const register unsigned short int SLSIZE_4 = 4;
    sbit  SLSIZE_4_bit at ADL3CONL.B4;
    sbit  SLSIZE_4_ADL3CONL_bit at ADL3CONL.B4;
    const register unsigned short int SLSIZE_3 = 3;
    sbit  SLSIZE_3_bit at ADL3CONL.B3;
    sbit  SLSIZE_3_ADL3CONL_bit at ADL3CONL.B3;
    const register unsigned short int SLSIZE_2 = 2;
    sbit  SLSIZE_2_bit at ADL3CONL.B2;
    sbit  SLSIZE_2_ADL3CONL_bit at ADL3CONL.B2;
    const register unsigned short int SLSIZE_1 = 1;
    sbit  SLSIZE_1_bit at ADL3CONL.B1;
    sbit  SLSIZE_1_ADL3CONL_bit at ADL3CONL.B1;
    const register unsigned short int SLSIZE_0 = 0;
    sbit  SLSIZE_0_bit at ADL3CONL.B0;
    sbit  SLSIZE_0_ADL3CONL_bit at ADL3CONL.B0;

    // ADL3CONH bits
    const register unsigned short int ASEN = 15;
    sbit  ASEN_bit at ADL3CONH.B15;
    sbit  ASEN_ADL3CONH_bit at ADL3CONH.B15;
    const register unsigned short int SLINT_1 = 14;
    sbit  SLINT_1_bit at ADL3CONH.B14;
    sbit  SLINT_1_ADL3CONH_bit at ADL3CONH.B14;
    const register unsigned short int SLINT_0 = 13;
    sbit  SLINT_0_bit at ADL3CONH.B13;
    sbit  SLINT_0_ADL3CONH_bit at ADL3CONH.B13;
    const register unsigned short int WM_1 = 12;
    sbit  WM_1_bit at ADL3CONH.B12;
    sbit  WM_1_ADL3CONH_bit at ADL3CONH.B12;
    const register unsigned short int WM_0 = 11;
    sbit  WM_0_bit at ADL3CONH.B11;
    sbit  WM_0_ADL3CONH_bit at ADL3CONH.B11;
    const register unsigned short int CM_2 = 10;
    sbit  CM_2_bit at ADL3CONH.B10;
    sbit  CM_2_ADL3CONH_bit at ADL3CONH.B10;
    const register unsigned short int CM_1 = 9;
    sbit  CM_1_bit at ADL3CONH.B9;
    sbit  CM_1_ADL3CONH_bit at ADL3CONH.B9;
    const register unsigned short int CM_0 = 8;
    sbit  CM_0_bit at ADL3CONH.B8;
    sbit  CM_0_ADL3CONH_bit at ADL3CONH.B8;
    const register unsigned short int CTMEN = 7;
    sbit  CTMEN_bit at ADL3CONH.B7;
    sbit  CTMEN_ADL3CONH_bit at ADL3CONH.B7;
    const register unsigned short int PINTRIS = 6;
    sbit  PINTRIS_bit at ADL3CONH.B6;
    sbit  PINTRIS_ADL3CONH_bit at ADL3CONH.B6;
    const register unsigned short int MULCHEN = 5;
    sbit  MULCHEN_bit at ADL3CONH.B5;
    sbit  MULCHEN_ADL3CONH_bit at ADL3CONH.B5;
    const register unsigned short int SAMC_4 = 4;
    sbit  SAMC_4_bit at ADL3CONH.B4;
    sbit  SAMC_4_ADL3CONH_bit at ADL3CONH.B4;
    const register unsigned short int SAMC_3 = 3;
    sbit  SAMC_3_bit at ADL3CONH.B3;
    sbit  SAMC_3_ADL3CONH_bit at ADL3CONH.B3;
    const register unsigned short int SAMC_2 = 2;
    sbit  SAMC_2_bit at ADL3CONH.B2;
    sbit  SAMC_2_ADL3CONH_bit at ADL3CONH.B2;
    const register unsigned short int SAMC_1 = 1;
    sbit  SAMC_1_bit at ADL3CONH.B1;
    sbit  SAMC_1_ADL3CONH_bit at ADL3CONH.B1;
    const register unsigned short int SAMC_0 = 0;
    sbit  SAMC_0_bit at ADL3CONH.B0;
    sbit  SAMC_0_ADL3CONH_bit at ADL3CONH.B0;

    // ADL3PTR bits
    const register unsigned short int ADNEXT_6 = 14;
    sbit  ADNEXT_6_bit at ADL3PTR.B14;
    sbit  ADNEXT_6_ADL3PTR_bit at ADL3PTR.B14;
    const register unsigned short int ADNEXT_5 = 13;
    sbit  ADNEXT_5_bit at ADL3PTR.B13;
    sbit  ADNEXT_5_ADL3PTR_bit at ADL3PTR.B13;
    const register unsigned short int ADNEXT_4 = 12;
    sbit  ADNEXT_4_bit at ADL3PTR.B12;
    sbit  ADNEXT_4_ADL3PTR_bit at ADL3PTR.B12;
    const register unsigned short int ADNEXT_3 = 11;
    sbit  ADNEXT_3_bit at ADL3PTR.B11;
    sbit  ADNEXT_3_ADL3PTR_bit at ADL3PTR.B11;
    const register unsigned short int ADNEXT_2 = 10;
    sbit  ADNEXT_2_bit at ADL3PTR.B10;
    sbit  ADNEXT_2_ADL3PTR_bit at ADL3PTR.B10;
    const register unsigned short int ADNEXT_1 = 9;
    sbit  ADNEXT_1_bit at ADL3PTR.B9;
    sbit  ADNEXT_1_ADL3PTR_bit at ADL3PTR.B9;
    const register unsigned short int ADNEXT_0 = 8;
    sbit  ADNEXT_0_bit at ADL3PTR.B8;
    sbit  ADNEXT_0_ADL3PTR_bit at ADL3PTR.B8;

    // ADL3STAT bits
    const register unsigned short int ADTACT = 15;
    sbit  ADTACT_bit at ADL3STAT.B15;
    sbit  ADTACT_ADL3STAT_bit at ADL3STAT.B15;
    const register unsigned short int LBUSY = 14;
    sbit  LBUSY_bit at ADL3STAT.B14;
    sbit  LBUSY_ADL3STAT_bit at ADL3STAT.B14;
    const register unsigned short int ADTDLY = 7;
    sbit  ADTDLY_bit at ADL3STAT.B7;
    sbit  ADTDLY_ADL3STAT_bit at ADL3STAT.B7;
    const register unsigned short int ADLIF = 5;
    sbit  ADLIF_bit at ADL3STAT.B5;
    sbit  ADLIF_ADL3STAT_bit at ADL3STAT.B5;

    // ADTH3L bits
    const register unsigned short int TH15 = 15;
    sbit  TH15_bit at ADTH3L.B15;
    sbit  TH15_ADTH3L_bit at ADTH3L.B15;
    const register unsigned short int TH14 = 14;
    sbit  TH14_bit at ADTH3L.B14;
    sbit  TH14_ADTH3L_bit at ADTH3L.B14;
    const register unsigned short int TH13 = 13;
    sbit  TH13_bit at ADTH3L.B13;
    sbit  TH13_ADTH3L_bit at ADTH3L.B13;
    const register unsigned short int TH12 = 12;
    sbit  TH12_bit at ADTH3L.B12;
    sbit  TH12_ADTH3L_bit at ADTH3L.B12;
    const register unsigned short int TH11 = 11;
    sbit  TH11_bit at ADTH3L.B11;
    sbit  TH11_ADTH3L_bit at ADTH3L.B11;
    const register unsigned short int TH10 = 10;
    sbit  TH10_bit at ADTH3L.B10;
    sbit  TH10_ADTH3L_bit at ADTH3L.B10;
    const register unsigned short int TH9 = 9;
    sbit  TH9_bit at ADTH3L.B9;
    sbit  TH9_ADTH3L_bit at ADTH3L.B9;
    const register unsigned short int TH8 = 8;
    sbit  TH8_bit at ADTH3L.B8;
    sbit  TH8_ADTH3L_bit at ADTH3L.B8;
    const register unsigned short int TH7 = 7;
    sbit  TH7_bit at ADTH3L.B7;
    sbit  TH7_ADTH3L_bit at ADTH3L.B7;
    const register unsigned short int TH6 = 6;
    sbit  TH6_bit at ADTH3L.B6;
    sbit  TH6_ADTH3L_bit at ADTH3L.B6;
    const register unsigned short int TH5 = 5;
    sbit  TH5_bit at ADTH3L.B5;
    sbit  TH5_ADTH3L_bit at ADTH3L.B5;
    const register unsigned short int TH4 = 4;
    sbit  TH4_bit at ADTH3L.B4;
    sbit  TH4_ADTH3L_bit at ADTH3L.B4;
    const register unsigned short int TH3 = 3;
    sbit  TH3_bit at ADTH3L.B3;
    sbit  TH3_ADTH3L_bit at ADTH3L.B3;
    const register unsigned short int TH2 = 2;
    sbit  TH2_bit at ADTH3L.B2;
    sbit  TH2_ADTH3L_bit at ADTH3L.B2;
    const register unsigned short int TH1 = 1;
    sbit  TH1_bit at ADTH3L.B1;
    sbit  TH1_ADTH3L_bit at ADTH3L.B1;
    const register unsigned short int TH0 = 0;
    sbit  TH0_bit at ADTH3L.B0;
    sbit  TH0_ADTH3L_bit at ADTH3L.B0;

    // ADTH3H bits
    sbit  TH15_ADTH3H_bit at ADTH3H.B15;
    sbit  TH14_ADTH3H_bit at ADTH3H.B14;
    sbit  TH13_ADTH3H_bit at ADTH3H.B13;
    sbit  TH12_ADTH3H_bit at ADTH3H.B12;
    sbit  TH11_ADTH3H_bit at ADTH3H.B11;
    sbit  TH10_ADTH3H_bit at ADTH3H.B10;
    sbit  TH9_ADTH3H_bit at ADTH3H.B9;
    sbit  TH8_ADTH3H_bit at ADTH3H.B8;
    sbit  TH7_ADTH3H_bit at ADTH3H.B7;
    sbit  TH6_ADTH3H_bit at ADTH3H.B6;
    sbit  TH5_ADTH3H_bit at ADTH3H.B5;
    sbit  TH4_ADTH3H_bit at ADTH3H.B4;
    sbit  TH3_ADTH3H_bit at ADTH3H.B3;
    sbit  TH2_ADTH3H_bit at ADTH3H.B2;
    sbit  TH1_ADTH3H_bit at ADTH3H.B1;
    sbit  TH0_ADTH3H_bit at ADTH3H.B0;

    // ADL3MSEL0 bits
    const register unsigned short int MSEL15 = 15;
    sbit  MSEL15_bit at ADL3MSEL0.B15;
    sbit  MSEL15_ADL3MSEL0_bit at ADL3MSEL0.B15;

    // ADL3MSEL1 bits
    const register unsigned short int MSEL31 = 15;
    sbit  MSEL31_bit at ADL3MSEL1.B15;
    sbit  MSEL31_ADL3MSEL1_bit at ADL3MSEL1.B15;
    const register unsigned short int MSEL30 = 14;
    sbit  MSEL30_bit at ADL3MSEL1.B14;
    sbit  MSEL30_ADL3MSEL1_bit at ADL3MSEL1.B14;
    const register unsigned short int MSEL29 = 13;
    sbit  MSEL29_bit at ADL3MSEL1.B13;
    sbit  MSEL29_ADL3MSEL1_bit at ADL3MSEL1.B13;
    const register unsigned short int MSEL28 = 12;
    sbit  MSEL28_bit at ADL3MSEL1.B12;
    sbit  MSEL28_ADL3MSEL1_bit at ADL3MSEL1.B12;
    const register unsigned short int MSEL27 = 11;
    sbit  MSEL27_bit at ADL3MSEL1.B11;
    sbit  MSEL27_ADL3MSEL1_bit at ADL3MSEL1.B11;
    const register unsigned short int MSEL26 = 10;
    sbit  MSEL26_bit at ADL3MSEL1.B10;
    sbit  MSEL26_ADL3MSEL1_bit at ADL3MSEL1.B10;
    const register unsigned short int MSEL25 = 9;
    sbit  MSEL25_bit at ADL3MSEL1.B9;
    sbit  MSEL25_ADL3MSEL1_bit at ADL3MSEL1.B9;
    const register unsigned short int MSEL24 = 8;
    sbit  MSEL24_bit at ADL3MSEL1.B8;
    sbit  MSEL24_ADL3MSEL1_bit at ADL3MSEL1.B8;
    const register unsigned short int MSEL23 = 7;
    sbit  MSEL23_bit at ADL3MSEL1.B7;
    sbit  MSEL23_ADL3MSEL1_bit at ADL3MSEL1.B7;
    const register unsigned short int MSEL22 = 6;
    sbit  MSEL22_bit at ADL3MSEL1.B6;
    sbit  MSEL22_ADL3MSEL1_bit at ADL3MSEL1.B6;
    const register unsigned short int MSEL21 = 5;
    sbit  MSEL21_bit at ADL3MSEL1.B5;
    sbit  MSEL21_ADL3MSEL1_bit at ADL3MSEL1.B5;
    const register unsigned short int MSEL20 = 4;
    sbit  MSEL20_bit at ADL3MSEL1.B4;
    sbit  MSEL20_ADL3MSEL1_bit at ADL3MSEL1.B4;
    const register unsigned short int MSEL19 = 3;
    sbit  MSEL19_bit at ADL3MSEL1.B3;
    sbit  MSEL19_ADL3MSEL1_bit at ADL3MSEL1.B3;
    const register unsigned short int MSEL18 = 2;
    sbit  MSEL18_bit at ADL3MSEL1.B2;
    sbit  MSEL18_ADL3MSEL1_bit at ADL3MSEL1.B2;
    const register unsigned short int MSEL17 = 1;
    sbit  MSEL17_bit at ADL3MSEL1.B1;
    sbit  MSEL17_ADL3MSEL1_bit at ADL3MSEL1.B1;
    const register unsigned short int MSEL16 = 0;
    sbit  MSEL16_bit at ADL3MSEL1.B0;
    sbit  MSEL16_ADL3MSEL1_bit at ADL3MSEL1.B0;

    // ADL3MSEL2 bits
    const register unsigned short int MSEL47 = 15;
    sbit  MSEL47_bit at ADL3MSEL2.B15;
    sbit  MSEL47_ADL3MSEL2_bit at ADL3MSEL2.B15;
    const register unsigned short int MSEL46 = 14;
    sbit  MSEL46_bit at ADL3MSEL2.B14;
    sbit  MSEL46_ADL3MSEL2_bit at ADL3MSEL2.B14;
    const register unsigned short int MSEL45 = 13;
    sbit  MSEL45_bit at ADL3MSEL2.B13;
    sbit  MSEL45_ADL3MSEL2_bit at ADL3MSEL2.B13;
    const register unsigned short int MSEL44 = 12;
    sbit  MSEL44_bit at ADL3MSEL2.B12;
    sbit  MSEL44_ADL3MSEL2_bit at ADL3MSEL2.B12;
    const register unsigned short int MSEL43 = 11;
    sbit  MSEL43_bit at ADL3MSEL2.B11;
    sbit  MSEL43_ADL3MSEL2_bit at ADL3MSEL2.B11;
    const register unsigned short int MSEL42 = 10;
    sbit  MSEL42_bit at ADL3MSEL2.B10;
    sbit  MSEL42_ADL3MSEL2_bit at ADL3MSEL2.B10;
    const register unsigned short int MSEL41 = 9;
    sbit  MSEL41_bit at ADL3MSEL2.B9;
    sbit  MSEL41_ADL3MSEL2_bit at ADL3MSEL2.B9;
    const register unsigned short int MSEL40 = 8;
    sbit  MSEL40_bit at ADL3MSEL2.B8;
    sbit  MSEL40_ADL3MSEL2_bit at ADL3MSEL2.B8;
    const register unsigned short int MSEL39 = 7;
    sbit  MSEL39_bit at ADL3MSEL2.B7;
    sbit  MSEL39_ADL3MSEL2_bit at ADL3MSEL2.B7;
    const register unsigned short int MSEL38 = 6;
    sbit  MSEL38_bit at ADL3MSEL2.B6;
    sbit  MSEL38_ADL3MSEL2_bit at ADL3MSEL2.B6;
    const register unsigned short int MSEL37 = 5;
    sbit  MSEL37_bit at ADL3MSEL2.B5;
    sbit  MSEL37_ADL3MSEL2_bit at ADL3MSEL2.B5;
    const register unsigned short int MSEL36 = 4;
    sbit  MSEL36_bit at ADL3MSEL2.B4;
    sbit  MSEL36_ADL3MSEL2_bit at ADL3MSEL2.B4;
    const register unsigned short int MSEL35 = 3;
    sbit  MSEL35_bit at ADL3MSEL2.B3;
    sbit  MSEL35_ADL3MSEL2_bit at ADL3MSEL2.B3;
    const register unsigned short int MSEL34 = 2;
    sbit  MSEL34_bit at ADL3MSEL2.B2;
    sbit  MSEL34_ADL3MSEL2_bit at ADL3MSEL2.B2;
    const register unsigned short int MSEL33 = 1;
    sbit  MSEL33_bit at ADL3MSEL2.B1;
    sbit  MSEL33_ADL3MSEL2_bit at ADL3MSEL2.B1;
    const register unsigned short int MSEL32 = 0;
    sbit  MSEL32_bit at ADL3MSEL2.B0;
    sbit  MSEL32_ADL3MSEL2_bit at ADL3MSEL2.B0;

    // ADL3MSEL3 bits
    const register unsigned short int MSEL49 = 1;
    sbit  MSEL49_bit at ADL3MSEL3.B1;
    sbit  MSEL49_ADL3MSEL3_bit at ADL3MSEL3.B1;
    const register unsigned short int MSEL48 = 0;
    sbit  MSEL48_bit at ADL3MSEL3.B0;
    sbit  MSEL48_ADL3MSEL3_bit at ADL3MSEL3.B0;

    // DAC1CON bits
    const register unsigned short int DACEN = 15;
    sbit  DACEN_bit at DAC1CON.B15;
    sbit  DACEN_DAC1CON_bit at DAC1CON.B15;
    const register unsigned short int DACSIDL = 13;
    sbit  DACSIDL_bit at DAC1CON.B13;
    sbit  DACSIDL_DAC1CON_bit at DAC1CON.B13;
    const register unsigned short int DACSLP = 12;
    sbit  DACSLP_bit at DAC1CON.B12;
    sbit  DACSLP_DAC1CON_bit at DAC1CON.B12;
    const register unsigned short int DACFM = 11;
    sbit  DACFM_bit at DAC1CON.B11;
    sbit  DACFM_DAC1CON_bit at DAC1CON.B11;
    const register unsigned short int DACTRIG = 8;
    sbit  DACTRIG_bit at DAC1CON.B8;
    sbit  DACTRIG_DAC1CON_bit at DAC1CON.B8;
    const register unsigned short int DACOE = 7;
    sbit  DACOE_bit at DAC1CON.B7;
    sbit  DACOE_DAC1CON_bit at DAC1CON.B7;
    const register unsigned short int DACTSEL_4 = 6;
    sbit  DACTSEL_4_bit at DAC1CON.B6;
    sbit  DACTSEL_4_DAC1CON_bit at DAC1CON.B6;
    const register unsigned short int DACTSEL_3 = 5;
    sbit  DACTSEL_3_bit at DAC1CON.B5;
    sbit  DACTSEL_3_DAC1CON_bit at DAC1CON.B5;
    const register unsigned short int DACTSEL_2 = 4;
    sbit  DACTSEL_2_bit at DAC1CON.B4;
    sbit  DACTSEL_2_DAC1CON_bit at DAC1CON.B4;
    const register unsigned short int DACTSEL_1 = 3;
    sbit  DACTSEL_1_bit at DAC1CON.B3;
    sbit  DACTSEL_1_DAC1CON_bit at DAC1CON.B3;
    const register unsigned short int DACTSEL_0 = 2;
    sbit  DACTSEL_0_bit at DAC1CON.B2;
    sbit  DACTSEL_0_DAC1CON_bit at DAC1CON.B2;
    const register unsigned short int DACREF_1 = 1;
    sbit  DACREF_1_bit at DAC1CON.B1;
    sbit  DACREF_1_DAC1CON_bit at DAC1CON.B1;
    const register unsigned short int DACREF_0 = 0;
    sbit  DACREF_0_bit at DAC1CON.B0;
    sbit  DACREF_0_DAC1CON_bit at DAC1CON.B0;

    // DAC1DAT bits
    const register unsigned short int DACDAT_15 = 15;
    sbit  DACDAT_15_bit at DAC1DAT.B15;
    sbit  DACDAT_15_DAC1DAT_bit at DAC1DAT.B15;
    const register unsigned short int DACDAT_14 = 14;
    sbit  DACDAT_14_bit at DAC1DAT.B14;
    sbit  DACDAT_14_DAC1DAT_bit at DAC1DAT.B14;
    const register unsigned short int DACDAT_13 = 13;
    sbit  DACDAT_13_bit at DAC1DAT.B13;
    sbit  DACDAT_13_DAC1DAT_bit at DAC1DAT.B13;
    const register unsigned short int DACDAT_12 = 12;
    sbit  DACDAT_12_bit at DAC1DAT.B12;
    sbit  DACDAT_12_DAC1DAT_bit at DAC1DAT.B12;
    const register unsigned short int DACDAT_11 = 11;
    sbit  DACDAT_11_bit at DAC1DAT.B11;
    sbit  DACDAT_11_DAC1DAT_bit at DAC1DAT.B11;
    const register unsigned short int DACDAT_10 = 10;
    sbit  DACDAT_10_bit at DAC1DAT.B10;
    sbit  DACDAT_10_DAC1DAT_bit at DAC1DAT.B10;
    const register unsigned short int DACDAT_9 = 9;
    sbit  DACDAT_9_bit at DAC1DAT.B9;
    sbit  DACDAT_9_DAC1DAT_bit at DAC1DAT.B9;
    const register unsigned short int DACDAT_8 = 8;
    sbit  DACDAT_8_bit at DAC1DAT.B8;
    sbit  DACDAT_8_DAC1DAT_bit at DAC1DAT.B8;
    const register unsigned short int DACDAT_7 = 7;
    sbit  DACDAT_7_bit at DAC1DAT.B7;
    sbit  DACDAT_7_DAC1DAT_bit at DAC1DAT.B7;
    const register unsigned short int DACDAT_6 = 6;
    sbit  DACDAT_6_bit at DAC1DAT.B6;
    sbit  DACDAT_6_DAC1DAT_bit at DAC1DAT.B6;
    const register unsigned short int DACDAT_5 = 5;
    sbit  DACDAT_5_bit at DAC1DAT.B5;
    sbit  DACDAT_5_DAC1DAT_bit at DAC1DAT.B5;
    const register unsigned short int DACDAT_4 = 4;
    sbit  DACDAT_4_bit at DAC1DAT.B4;
    sbit  DACDAT_4_DAC1DAT_bit at DAC1DAT.B4;
    const register unsigned short int DACDAT_3 = 3;
    sbit  DACDAT_3_bit at DAC1DAT.B3;
    sbit  DACDAT_3_DAC1DAT_bit at DAC1DAT.B3;
    const register unsigned short int DACDAT_2 = 2;
    sbit  DACDAT_2_bit at DAC1DAT.B2;
    sbit  DACDAT_2_DAC1DAT_bit at DAC1DAT.B2;
    const register unsigned short int DACDAT_1 = 1;
    sbit  DACDAT_1_bit at DAC1DAT.B1;
    sbit  DACDAT_1_DAC1DAT_bit at DAC1DAT.B1;
    const register unsigned short int DACDAT_0 = 0;
    sbit  DACDAT_0_bit at DAC1DAT.B0;
    sbit  DACDAT_0_DAC1DAT_bit at DAC1DAT.B0;

    // DAC2CON bits
    sbit  DACEN_DAC2CON_bit at DAC2CON.B15;
    sbit  DACSIDL_DAC2CON_bit at DAC2CON.B13;
    sbit  DACSLP_DAC2CON_bit at DAC2CON.B12;
    sbit  DACFM_DAC2CON_bit at DAC2CON.B11;
    sbit  DACTRIG_DAC2CON_bit at DAC2CON.B8;
    sbit  DACOE_DAC2CON_bit at DAC2CON.B7;
    sbit  DACTSEL_4_DAC2CON_bit at DAC2CON.B6;
    sbit  DACTSEL_3_DAC2CON_bit at DAC2CON.B5;
    sbit  DACTSEL_2_DAC2CON_bit at DAC2CON.B4;
    sbit  DACTSEL_1_DAC2CON_bit at DAC2CON.B3;
    sbit  DACTSEL_0_DAC2CON_bit at DAC2CON.B2;
    sbit  DACREF_1_DAC2CON_bit at DAC2CON.B1;
    sbit  DACREF_0_DAC2CON_bit at DAC2CON.B0;

    // DAC2DAT bits
    sbit  DACDAT_15_DAC2DAT_bit at DAC2DAT.B15;
    sbit  DACDAT_14_DAC2DAT_bit at DAC2DAT.B14;
    sbit  DACDAT_13_DAC2DAT_bit at DAC2DAT.B13;
    sbit  DACDAT_12_DAC2DAT_bit at DAC2DAT.B12;
    sbit  DACDAT_11_DAC2DAT_bit at DAC2DAT.B11;
    sbit  DACDAT_10_DAC2DAT_bit at DAC2DAT.B10;
    sbit  DACDAT_9_DAC2DAT_bit at DAC2DAT.B9;
    sbit  DACDAT_8_DAC2DAT_bit at DAC2DAT.B8;
    sbit  DACDAT_7_DAC2DAT_bit at DAC2DAT.B7;
    sbit  DACDAT_6_DAC2DAT_bit at DAC2DAT.B6;
    sbit  DACDAT_5_DAC2DAT_bit at DAC2DAT.B5;
    sbit  DACDAT_4_DAC2DAT_bit at DAC2DAT.B4;
    sbit  DACDAT_3_DAC2DAT_bit at DAC2DAT.B3;
    sbit  DACDAT_2_DAC2DAT_bit at DAC2DAT.B2;
    sbit  DACDAT_1_DAC2DAT_bit at DAC2DAT.B1;
    sbit  DACDAT_0_DAC2DAT_bit at DAC2DAT.B0;

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
    const register unsigned short int SESVDIE = 3;
    sbit  SESVDIE_bit at U1OTGIE.B3;
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
    const register unsigned short int USUSPND = 1;
    const register unsigned short int USUSPEND = 1;
    sbit  USUSPEND_bit at U1PWRC.B1;
    sbit  USUSPND_bit at U1PWRC.B1;
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
    const register unsigned short int ENDPT_3 = 7;
    sbit  ENDPT_3_bit at U1STAT.B7;
    const register unsigned short int ENDPT_2 = 6;
    sbit  ENDPT_2_bit at U1STAT.B6;
    const register unsigned short int ENDPT_1 = 5;
    sbit  ENDPT_1_bit at U1STAT.B5;
    const register unsigned short int ENDPT_0 = 4;
    sbit  ENDPT_0_bit at U1STAT.B4;
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
    const register unsigned short int USBRST = 4;
    sbit  USBRST_bit at U1CON.B4;
    const register unsigned short int HOSTEN = 3;
    sbit  HOSTEN_bit at U1CON.B3;
    const register unsigned short int RESUME_ = 2;
    sbit  RESUME_bit at U1CON.B2;
    const register unsigned short int PPBRST = 1;
    sbit  PPBRST_bit at U1CON.B1;
    const register unsigned short int USBEN = 0;
    sbit  USBEN_bit at U1CON.B0;

    // U1ADDR bits
    const register unsigned short int LOWSPDEN = 7;
    sbit  LOWSPDEN_bit at U1ADDR.B7;
    const register unsigned short int DEVADDR_6 = 6;
    sbit  DEVADDR_6_bit at U1ADDR.B6;
    const register unsigned short int DEVADDR_5 = 5;
    sbit  DEVADDR_5_bit at U1ADDR.B5;
    const register unsigned short int DEVADDR_4 = 4;
    sbit  DEVADDR_4_bit at U1ADDR.B4;
    const register unsigned short int DEVADDR_3 = 3;
    sbit  DEVADDR_3_bit at U1ADDR.B3;
    const register unsigned short int DEVADDR_2 = 2;
    sbit  DEVADDR_2_bit at U1ADDR.B2;
    const register unsigned short int DEVADDR_1 = 1;
    sbit  DEVADDR_1_bit at U1ADDR.B1;
    const register unsigned short int DEVADDR_0 = 0;
    sbit  DEVADDR_0_bit at U1ADDR.B0;

    // U1BDTP1 bits
    const register unsigned short int BDTPTRL_6 = 7;
    sbit  BDTPTRL_6_bit at U1BDTP1.B7;
    const register unsigned short int BDTPTRL_5 = 6;
    sbit  BDTPTRL_5_bit at U1BDTP1.B6;
    const register unsigned short int BDTPTRL_4 = 5;
    sbit  BDTPTRL_4_bit at U1BDTP1.B5;
    const register unsigned short int BDTPTRL_3 = 4;
    sbit  BDTPTRL_3_bit at U1BDTP1.B4;
    const register unsigned short int BDTPTRL_2 = 3;
    sbit  BDTPTRL_2_bit at U1BDTP1.B3;
    const register unsigned short int BDTPTRL_1 = 2;
    sbit  BDTPTRL_1_bit at U1BDTP1.B2;
    const register unsigned short int BDTPTRL_0 = 1;
    sbit  BDTPTRL_0_bit at U1BDTP1.B1;

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
    const register unsigned short int FRM10 = 2;
    sbit  FRM10_bit at U1FRMH.B2;
    const register unsigned short int FRM9 = 1;
    sbit  FRM9_bit at U1FRMH.B1;
    const register unsigned short int FRM8 = 0;
    sbit  FRM8_bit at U1FRMH.B0;

    // U1TOK bits
    const register unsigned short int PID_3 = 7;
    sbit  PID_3_bit at U1TOK.B7;
    const register unsigned short int PID_2 = 6;
    sbit  PID_2_bit at U1TOK.B6;
    const register unsigned short int PID_1 = 5;
    sbit  PID_1_bit at U1TOK.B5;
    const register unsigned short int PID_0 = 4;
    sbit  PID_0_bit at U1TOK.B4;
    const register unsigned short int EP_3 = 3;
    sbit  EP_3_bit at U1TOK.B3;
    const register unsigned short int EP_2 = 2;
    sbit  EP_2_bit at U1TOK.B2;
    const register unsigned short int EP_1 = 1;
    sbit  EP_1_bit at U1TOK.B1;
    const register unsigned short int EP_0 = 0;
    sbit  EP_0_bit at U1TOK.B0;

    // U1SOF bits
    sbit  CNT_7_U1SOF_bit at U1SOF.B7;
    sbit  CNT_6_U1SOF_bit at U1SOF.B6;
    sbit  CNT_5_U1SOF_bit at U1SOF.B5;
    sbit  CNT_4_U1SOF_bit at U1SOF.B4;
    sbit  CNT_3_U1SOF_bit at U1SOF.B3;
    sbit  CNT_2_U1SOF_bit at U1SOF.B2;
    sbit  CNT_1_U1SOF_bit at U1SOF.B1;
    sbit  CNT_0_U1SOF_bit at U1SOF.B0;

    // U1BDTP2 bits
    const register unsigned short int BDTPTRH_7 = 7;
    sbit  BDTPTRH_7_bit at U1BDTP2.B7;
    const register unsigned short int BDTPTRH_6 = 6;
    sbit  BDTPTRH_6_bit at U1BDTP2.B6;
    const register unsigned short int BDTPTRH_5 = 5;
    sbit  BDTPTRH_5_bit at U1BDTP2.B5;
    const register unsigned short int BDTPTRH_4 = 4;
    sbit  BDTPTRH_4_bit at U1BDTP2.B4;
    const register unsigned short int BDTPTRH_3 = 3;
    sbit  BDTPTRH_3_bit at U1BDTP2.B3;
    const register unsigned short int BDTPTRH_2 = 2;
    sbit  BDTPTRH_2_bit at U1BDTP2.B2;
    const register unsigned short int BDTPTRH_1 = 1;
    sbit  BDTPTRH_1_bit at U1BDTP2.B1;
    const register unsigned short int BDTPTRH_0 = 0;
    sbit  BDTPTRH_0_bit at U1BDTP2.B0;

    // U1BDTP3 bits
    const register unsigned short int BDTPTRU_7 = 7;
    sbit  BDTPTRU_7_bit at U1BDTP3.B7;
    const register unsigned short int BDTPTRU_6 = 6;
    sbit  BDTPTRU_6_bit at U1BDTP3.B6;
    const register unsigned short int BDTPTRU_5 = 5;
    sbit  BDTPTRU_5_bit at U1BDTP3.B5;
    const register unsigned short int BDTPTRU_4 = 4;
    sbit  BDTPTRU_4_bit at U1BDTP3.B4;
    const register unsigned short int BDTPTRU_3 = 3;
    sbit  BDTPTRU_3_bit at U1BDTP3.B3;
    const register unsigned short int BDTPTRU_2 = 2;
    sbit  BDTPTRU_2_bit at U1BDTP3.B2;
    const register unsigned short int BDTPTRU_1 = 1;
    sbit  BDTPTRU_1_bit at U1BDTP3.B1;
    const register unsigned short int BDTPTRU_0 = 0;
    sbit  BDTPTRU_0_bit at U1BDTP3.B0;

    // U1CNFG1 bits
    const register unsigned short int UTEYE = 7;
    sbit  UTEYE_bit at U1CNFG1.B7;
    const register unsigned short int UOEMON = 6;
    sbit  UOEMON_bit at U1CNFG1.B6;
    const register unsigned short int USBSIDL = 4;
    sbit  USBSIDL_bit at U1CNFG1.B4;
    const register unsigned short int PPB_1 = 1;
    sbit  PPB_1_bit at U1CNFG1.B1;
    const register unsigned short int PPB_0 = 0;
    sbit  PPB_0_bit at U1CNFG1.B0;

    // U1CNFG2 bits
    const register unsigned short int UVCMPSEL = 5;
    sbit  UVCMPSEL_bit at U1CNFG2.B5;
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

    // SD1CON1 bits
    const register unsigned short int SDON = 15;
    sbit  SDON_bit at SD1CON1.B15;
    const register unsigned short int SDSIDL = 13;
    sbit  SDSIDL_bit at SD1CON1.B13;
    const register unsigned short int SDRST = 12;
    sbit  SDRST_bit at SD1CON1.B12;
    const register unsigned short int FILTDIS = 11;
    sbit  FILTDIS_bit at SD1CON1.B11;
    const register unsigned short int SDGAIN_2 = 10;
    sbit  SDGAIN_2_bit at SD1CON1.B10;
    const register unsigned short int SDGAIN_1 = 9;
    sbit  SDGAIN_1_bit at SD1CON1.B9;
    const register unsigned short int SDGAIN_0 = 8;
    sbit  SDGAIN_0_bit at SD1CON1.B8;
    const register unsigned short int DITHER_1 = 7;
    sbit  DITHER_1_bit at SD1CON1.B7;
    const register unsigned short int DITHER_0 = 6;
    sbit  DITHER_0_bit at SD1CON1.B6;
    const register unsigned short int VOSCAL = 4;
    sbit  VOSCAL_bit at SD1CON1.B4;
    const register unsigned short int SDREFN = 2;
    sbit  SDREFN_bit at SD1CON1.B2;
    const register unsigned short int SDREFP = 1;
    sbit  SDREFP_bit at SD1CON1.B1;
    const register unsigned short int PWRLVL = 0;
    sbit  PWRLVL_bit at SD1CON1.B0;
    sbit  PWRLVL_SD1CON1_bit at SD1CON1.B0;

    // SD1CON2 bits
    const register unsigned short int CHOP_1 = 15;
    sbit  CHOP_1_bit at SD1CON2.B15;
    const register unsigned short int CHOP_0 = 14;
    sbit  CHOP_0_bit at SD1CON2.B14;
    const register unsigned short int SDINT_1 = 13;
    sbit  SDINT_1_bit at SD1CON2.B13;
    const register unsigned short int SDINT_0 = 12;
    sbit  SDINT_0_bit at SD1CON2.B12;
    const register unsigned short int SDWM_1 = 9;
    sbit  SDWM_1_bit at SD1CON2.B9;
    const register unsigned short int SDWM_0 = 8;
    sbit  SDWM_0_bit at SD1CON2.B8;
    const register unsigned short int RNDRES_1 = 4;
    sbit  RNDRES_1_bit at SD1CON2.B4;
    const register unsigned short int RNDRES_0 = 3;
    sbit  RNDRES_0_bit at SD1CON2.B3;
    const register unsigned short int SDRDY = 0;
    sbit  SDRDY_bit at SD1CON2.B0;

    // SD1CON3 bits
    const register unsigned short int SDDIV_2 = 15;
    sbit  SDDIV_2_bit at SD1CON3.B15;
    const register unsigned short int SDDIV_1 = 14;
    sbit  SDDIV_1_bit at SD1CON3.B14;
    const register unsigned short int SDDIV_0 = 13;
    sbit  SDDIV_0_bit at SD1CON3.B13;
    const register unsigned short int SDOSR_2 = 12;
    sbit  SDOSR_2_bit at SD1CON3.B12;
    const register unsigned short int SDOSR_1 = 11;
    sbit  SDOSR_1_bit at SD1CON3.B11;
    const register unsigned short int SDOSR_0 = 10;
    sbit  SDOSR_0_bit at SD1CON3.B10;
    const register unsigned short int SDCS_1 = 9;
    sbit  SDCS_1_bit at SD1CON3.B9;
    const register unsigned short int SDCS_0 = 8;
    sbit  SDCS_0_bit at SD1CON3.B8;
    const register unsigned short int SDCH_2 = 2;
    sbit  SDCH_2_bit at SD1CON3.B2;
    const register unsigned short int SDCH_1 = 1;
    sbit  SDCH_1_bit at SD1CON3.B1;
    const register unsigned short int SDCH_0 = 0;
    sbit  SDCH_0_bit at SD1CON3.B0;

    // SD1RESH bits
    const register unsigned short int SDRESH_15 = 15;
    sbit  SDRESH_15_bit at SD1RESH.B15;
    const register unsigned short int SDRESH_14 = 14;
    sbit  SDRESH_14_bit at SD1RESH.B14;
    const register unsigned short int SDRESH_13 = 13;
    sbit  SDRESH_13_bit at SD1RESH.B13;
    const register unsigned short int SDRESH_12 = 12;
    sbit  SDRESH_12_bit at SD1RESH.B12;
    const register unsigned short int SDRESH_11 = 11;
    sbit  SDRESH_11_bit at SD1RESH.B11;
    const register unsigned short int SDRESH_10 = 10;
    sbit  SDRESH_10_bit at SD1RESH.B10;
    const register unsigned short int SDRESH_9 = 9;
    sbit  SDRESH_9_bit at SD1RESH.B9;
    const register unsigned short int SDRESH_8 = 8;
    sbit  SDRESH_8_bit at SD1RESH.B8;
    const register unsigned short int SDRESH_7 = 7;
    sbit  SDRESH_7_bit at SD1RESH.B7;
    const register unsigned short int SDRESH_6 = 6;
    sbit  SDRESH_6_bit at SD1RESH.B6;
    const register unsigned short int SDRESH_5 = 5;
    sbit  SDRESH_5_bit at SD1RESH.B5;
    const register unsigned short int SDRESH_4 = 4;
    sbit  SDRESH_4_bit at SD1RESH.B4;
    const register unsigned short int SDRESH_3 = 3;
    sbit  SDRESH_3_bit at SD1RESH.B3;
    const register unsigned short int SDRESH_2 = 2;
    sbit  SDRESH_2_bit at SD1RESH.B2;
    const register unsigned short int SDRESH_1 = 1;
    sbit  SDRESH_1_bit at SD1RESH.B1;
    const register unsigned short int SDRESH_0 = 0;
    sbit  SDRESH_0_bit at SD1RESH.B0;

    // SD1RESL bits
    const register unsigned short int SDRESL_15 = 15;
    sbit  SDRESL_15_bit at SD1RESL.B15;
    const register unsigned short int SDRESL_14 = 14;
    sbit  SDRESL_14_bit at SD1RESL.B14;
    const register unsigned short int SDRESL_13 = 13;
    sbit  SDRESL_13_bit at SD1RESL.B13;
    const register unsigned short int SDRESL_12 = 12;
    sbit  SDRESL_12_bit at SD1RESL.B12;
    const register unsigned short int SDRESL_11 = 11;
    sbit  SDRESL_11_bit at SD1RESL.B11;
    const register unsigned short int SDRESL_10 = 10;
    sbit  SDRESL_10_bit at SD1RESL.B10;
    const register unsigned short int SDRESL_9 = 9;
    sbit  SDRESL_9_bit at SD1RESL.B9;
    const register unsigned short int SDRESL_8 = 8;
    sbit  SDRESL_8_bit at SD1RESL.B8;
    const register unsigned short int SDRESL_7 = 7;
    sbit  SDRESL_7_bit at SD1RESL.B7;
    const register unsigned short int SDRESL_6 = 6;
    sbit  SDRESL_6_bit at SD1RESL.B6;
    const register unsigned short int SDRESL_5 = 5;
    sbit  SDRESL_5_bit at SD1RESL.B5;
    const register unsigned short int SDRESL_4 = 4;
    sbit  SDRESL_4_bit at SD1RESL.B4;
    const register unsigned short int SDRESL_3 = 3;
    sbit  SDRESL_3_bit at SD1RESL.B3;
    const register unsigned short int SDRESL_2 = 2;
    sbit  SDRESL_2_bit at SD1RESL.B2;
    const register unsigned short int SDRESL_1 = 1;
    sbit  SDRESL_1_bit at SD1RESL.B1;
    const register unsigned short int SDRESL_0 = 0;
    sbit  SDRESL_0_bit at SD1RESL.B0;

    // ANCFG bits
    const register unsigned short int VBG2EN = 2;
    sbit  VBG2EN_bit at ANCFG.B2;

    // ANSA bits

    // ANSB bits
    const register unsigned short int ANSB15 = 15;
    sbit  ANSB15_bit at ANSB.B15;
    const register unsigned short int ANSB14 = 14;
    sbit  ANSB14_bit at ANSB.B14;
    const register unsigned short int ANSB13 = 13;
    sbit  ANSB13_bit at ANSB.B13;
    const register unsigned short int ANSB12 = 12;
    sbit  ANSB12_bit at ANSB.B12;
    const register unsigned short int ANSB7 = 7;
    sbit  ANSB7_bit at ANSB.B7;
    const register unsigned short int ANSB6 = 6;
    sbit  ANSB6_bit at ANSB.B6;
    const register unsigned short int ANSB5 = 5;
    sbit  ANSB5_bit at ANSB.B5;
    const register unsigned short int ANSB4 = 4;
    sbit  ANSB4_bit at ANSB.B4;
    const register unsigned short int ANSB3 = 3;
    sbit  ANSB3_bit at ANSB.B3;
    const register unsigned short int ANSB2 = 2;
    sbit  ANSB2_bit at ANSB.B2;
    const register unsigned short int ANSB1 = 1;
    sbit  ANSB1_bit at ANSB.B1;
    const register unsigned short int ANSB0 = 0;
    sbit  ANSB0_bit at ANSB.B0;

    // ANSC bits

    // ANSD bits
    const register unsigned short int ANSD15 = 15;
    sbit  ANSD15_bit at ANSD.B15;
    const register unsigned short int ANSD14 = 14;
    sbit  ANSD14_bit at ANSD.B14;
    const register unsigned short int ANSD13 = 13;
    sbit  ANSD13_bit at ANSD.B13;
    const register unsigned short int ANSD12 = 12;
    sbit  ANSD12_bit at ANSD.B12;
    const register unsigned short int ANSD11 = 11;
    sbit  ANSD11_bit at ANSD.B11;
    const register unsigned short int ANSD10 = 10;
    sbit  ANSD10_bit at ANSD.B10;
    const register unsigned short int ANSD9 = 9;
    sbit  ANSD9_bit at ANSD.B9;
    const register unsigned short int ANSD8 = 8;
    sbit  ANSD8_bit at ANSD.B8;
    const register unsigned short int ANSD7 = 7;
    sbit  ANSD7_bit at ANSD.B7;
    const register unsigned short int ANSD6 = 6;
    sbit  ANSD6_bit at ANSD.B6;
    const register unsigned short int ANSD5 = 5;
    sbit  ANSD5_bit at ANSD.B5;
    const register unsigned short int ANSD4 = 4;
    sbit  ANSD4_bit at ANSD.B4;
    const register unsigned short int ANSD3 = 3;
    sbit  ANSD3_bit at ANSD.B3;
    const register unsigned short int ANSD2 = 2;
    sbit  ANSD2_bit at ANSD.B2;
    const register unsigned short int ANSD1 = 1;
    sbit  ANSD1_bit at ANSD.B1;
    const register unsigned short int ANSD0 = 0;
    sbit  ANSD0_bit at ANSD.B0;

    // ANSE bits
    const register unsigned short int ANSE7 = 7;
    sbit  ANSE7_bit at ANSE.B7;
    const register unsigned short int ANSE6 = 6;
    sbit  ANSE6_bit at ANSE.B6;
    const register unsigned short int ANSE5 = 5;
    sbit  ANSE5_bit at ANSE.B5;
    const register unsigned short int ANSE4 = 4;
    sbit  ANSE4_bit at ANSE.B4;

    // ANSF bits
    const register unsigned short int ANSF7 = 7;
    sbit  ANSF7_bit at ANSF.B7;
    const register unsigned short int ANSF5 = 5;
    sbit  ANSF5_bit at ANSF.B5;
    const register unsigned short int ANSF4 = 4;
    sbit  ANSF4_bit at ANSF.B4;
    const register unsigned short int ANSF3 = 3;
    sbit  ANSF3_bit at ANSF.B3;
    const register unsigned short int ANSF0 = 0;
    sbit  ANSF0_bit at ANSF.B0;

    // ANSG bits
    const register unsigned short int ANSG9 = 9;
    sbit  ANSG9_bit at ANSG.B9;
    const register unsigned short int ANSG8 = 8;
    sbit  ANSG8_bit at ANSG.B8;
    const register unsigned short int ANSG7 = 7;
    sbit  ANSG7_bit at ANSG.B7;
    const register unsigned short int ANSG6 = 6;
    sbit  ANSG6_bit at ANSG.B6;

    // ADCON1 bits
    const register unsigned short int ADON = 15;
    sbit  ADON_bit at ADCON1.B15;
    const register unsigned short int ADSIDL = 13;
    sbit  ADSIDL_bit at ADCON1.B13;
    const register unsigned short int ADSLP = 12;
    sbit  ADSLP_bit at ADCON1.B12;
    const register unsigned short int FORM_3 = 11;
    sbit  FORM_3_bit at ADCON1.B11;
    const register unsigned short int FORM_2 = 10;
    sbit  FORM_2_bit at ADCON1.B10;
    const register unsigned short int FORM_1 = 9;
    sbit  FORM_1_bit at ADCON1.B9;
    const register unsigned short int FORM_0 = 8;
    sbit  FORM_0_bit at ADCON1.B8;
    const register unsigned short int PUMPEN = 7;
    sbit  PUMPEN_bit at ADCON1.B7;
    const register unsigned short int ADCAL = 6;
    sbit  ADCAL_bit at ADCON1.B6;
    sbit  PWRLVL_ADCON1_bit at ADCON1.B0;

    // ADCON2 bits
    const register unsigned short int PVCFG_1 = 15;
    sbit  PVCFG_1_bit at ADCON2.B15;
    const register unsigned short int PVCFG_0 = 14;
    sbit  PVCFG_0_bit at ADCON2.B14;
    const register unsigned short int NVCFG0 = 12;
    sbit  NVCFG0_bit at ADCON2.B12;
    const register unsigned short int BUFORG = 10;
    sbit  BUFORG_bit at ADCON2.B10;
    const register unsigned short int ADPWR_1 = 9;
    sbit  ADPWR_1_bit at ADCON2.B9;
    const register unsigned short int ADPWR_0 = 8;
    sbit  ADPWR_0_bit at ADCON2.B8;
    const register unsigned short int BUFINT_1 = 7;
    sbit  BUFINT_1_bit at ADCON2.B7;
    const register unsigned short int BUFINT_0 = 6;
    sbit  BUFINT_0_bit at ADCON2.B6;
    const register unsigned short int REFPUMP = 1;
    sbit  REFPUMP_bit at ADCON2.B1;
    const register unsigned short int ADHALT = 0;
    sbit  ADHALT_bit at ADCON2.B0;

    // ADCON3 bits
    const register unsigned short int ADRC = 15;
    sbit  ADRC_bit at ADCON3.B15;
    const register unsigned short int ADCS_7 = 7;
    sbit  ADCS_7_bit at ADCON3.B7;
    const register unsigned short int ADCS_6 = 6;
    sbit  ADCS_6_bit at ADCON3.B6;
    const register unsigned short int ADCS_5 = 5;
    sbit  ADCS_5_bit at ADCON3.B5;
    const register unsigned short int ADCS_4 = 4;
    sbit  ADCS_4_bit at ADCON3.B4;
    const register unsigned short int ADCS_3 = 3;
    sbit  ADCS_3_bit at ADCON3.B3;
    const register unsigned short int ADCS_2 = 2;
    sbit  ADCS_2_bit at ADCON3.B2;
    const register unsigned short int ADCS_1 = 1;
    sbit  ADCS_1_bit at ADCON3.B1;
    const register unsigned short int ADCS_0 = 0;
    sbit  ADCS_0_bit at ADCON3.B0;

    // ADTMRPR bits
    const register unsigned short int ADTMRPR_15 = 15;
    sbit  ADTMRPR_15_bit at ADTMRPR.B15;
    const register unsigned short int ADTMRPR_14 = 14;
    sbit  ADTMRPR_14_bit at ADTMRPR.B14;
    const register unsigned short int ADTMRPR_13 = 13;
    sbit  ADTMRPR_13_bit at ADTMRPR.B13;
    const register unsigned short int ADTMRPR_12 = 12;
    sbit  ADTMRPR_12_bit at ADTMRPR.B12;
    const register unsigned short int ADTMRPR_11 = 11;
    sbit  ADTMRPR_11_bit at ADTMRPR.B11;
    const register unsigned short int ADTMRPR_10 = 10;
    sbit  ADTMRPR_10_bit at ADTMRPR.B10;
    const register unsigned short int ADTMRPR_9 = 9;
    sbit  ADTMRPR_9_bit at ADTMRPR.B9;
    const register unsigned short int ADTMRPR_8 = 8;
    sbit  ADTMRPR_8_bit at ADTMRPR.B8;
    const register unsigned short int ADTMRPR_7 = 7;
    sbit  ADTMRPR_7_bit at ADTMRPR.B7;
    const register unsigned short int ADTMRPR_6 = 6;
    sbit  ADTMRPR_6_bit at ADTMRPR.B6;
    const register unsigned short int ADTMRPR_5 = 5;
    sbit  ADTMRPR_5_bit at ADTMRPR.B5;
    const register unsigned short int ADTMRPR_4 = 4;
    sbit  ADTMRPR_4_bit at ADTMRPR.B4;
    const register unsigned short int ADTMRPR_3 = 3;
    sbit  ADTMRPR_3_bit at ADTMRPR.B3;
    const register unsigned short int ADTMRPR_2 = 2;
    sbit  ADTMRPR_2_bit at ADTMRPR.B2;
    const register unsigned short int ADTMRPR_1 = 1;
    sbit  ADTMRPR_1_bit at ADTMRPR.B1;
    const register unsigned short int ADTMRPR_0 = 0;
    sbit  ADTMRPR_0_bit at ADTMRPR.B0;

    // ADSTATL bits
    const register unsigned short int SLERR_3 = 11;
    sbit  SLERR_3_bit at ADSTATL.B11;
    const register unsigned short int SLERR_2 = 10;
    sbit  SLERR_2_bit at ADSTATL.B10;
    const register unsigned short int SLERR_1 = 9;
    sbit  SLERR_1_bit at ADSTATL.B9;
    const register unsigned short int SLERR_0 = 8;
    sbit  SLERR_0_bit at ADSTATL.B8;
    const register unsigned short int BUFIF = 5;
    sbit  BUFIF_bit at ADSTATL.B5;
    const register unsigned short int ACCIF = 4;
    sbit  ACCIF_bit at ADSTATL.B4;
    const register unsigned short int SL3IF = 3;
    sbit  SL3IF_bit at ADSTATL.B3;
    const register unsigned short int SL2IF = 2;
    sbit  SL2IF_bit at ADSTATL.B2;
    const register unsigned short int SL1IF = 1;
    sbit  SL1IF_bit at ADSTATL.B1;
    const register unsigned short int SL0IF = 0;
    sbit  SL0IF_bit at ADSTATL.B0;

    // ADSTATH bits
    const register unsigned short int PUMPST = 2;
    sbit  PUMPST_bit at ADSTATH.B2;
    const register unsigned short int ADREADY = 1;
    sbit  ADREADY_bit at ADSTATH.B1;
    const register unsigned short int ADBUSY = 0;
    sbit  ADBUSY_bit at ADSTATH.B0;

    // ACCONL bits
    const register unsigned short int TBLSEL_5 = 13;
    sbit  TBLSEL_5_bit at ACCONL.B13;
    const register unsigned short int TBLSEL_4 = 12;
    sbit  TBLSEL_4_bit at ACCONL.B12;
    const register unsigned short int TBLSEL_3 = 11;
    sbit  TBLSEL_3_bit at ACCONL.B11;
    const register unsigned short int TBLSEL_2 = 10;
    sbit  TBLSEL_2_bit at ACCONL.B10;
    const register unsigned short int TBLSEL_1 = 9;
    sbit  TBLSEL_1_bit at ACCONL.B9;
    const register unsigned short int TBLSEL_0 = 8;
    sbit  TBLSEL_0_bit at ACCONL.B8;
    const register unsigned short int COUNT_7 = 7;
    sbit  COUNT_7_bit at ACCONL.B7;
    const register unsigned short int COUNT_6 = 6;
    sbit  COUNT_6_bit at ACCONL.B6;
    const register unsigned short int COUNT_5 = 5;
    sbit  COUNT_5_bit at ACCONL.B5;
    const register unsigned short int COUNT_4 = 4;
    sbit  COUNT_4_bit at ACCONL.B4;
    const register unsigned short int COUNT_3 = 3;
    sbit  COUNT_3_bit at ACCONL.B3;
    const register unsigned short int COUNT_2 = 2;
    sbit  COUNT_2_bit at ACCONL.B2;
    const register unsigned short int COUNT_1 = 1;
    sbit  COUNT_1_bit at ACCONL.B1;
    const register unsigned short int COUNT_0 = 0;
    sbit  COUNT_0_bit at ACCONL.B0;

    // ACCONH bits
    const register unsigned short int ACEN = 7;
    sbit  ACEN_bit at ACCONH.B7;
    const register unsigned short int ACIE = 6;
    sbit  ACIE_bit at ACCONH.B6;

    // ACRESL bits
    const register unsigned short int ACRESL_15 = 15;
    sbit  ACRESL_15_bit at ACRESL.B15;
    const register unsigned short int ACRESL_14 = 14;
    sbit  ACRESL_14_bit at ACRESL.B14;
    const register unsigned short int ACRESL_13 = 13;
    sbit  ACRESL_13_bit at ACRESL.B13;
    const register unsigned short int ACRESL_12 = 12;
    sbit  ACRESL_12_bit at ACRESL.B12;
    const register unsigned short int ACRESL_11 = 11;
    sbit  ACRESL_11_bit at ACRESL.B11;
    const register unsigned short int ACRESL_10 = 10;
    sbit  ACRESL_10_bit at ACRESL.B10;
    const register unsigned short int ACRESL_9 = 9;
    sbit  ACRESL_9_bit at ACRESL.B9;
    const register unsigned short int ACRESL_8 = 8;
    sbit  ACRESL_8_bit at ACRESL.B8;
    const register unsigned short int ACRESL_7 = 7;
    sbit  ACRESL_7_bit at ACRESL.B7;
    const register unsigned short int ACRESL_6 = 6;
    sbit  ACRESL_6_bit at ACRESL.B6;
    const register unsigned short int ACRESL_5 = 5;
    sbit  ACRESL_5_bit at ACRESL.B5;
    const register unsigned short int ACRESL_4 = 4;
    sbit  ACRESL_4_bit at ACRESL.B4;
    const register unsigned short int ACRESL_3 = 3;
    sbit  ACRESL_3_bit at ACRESL.B3;
    const register unsigned short int ACRESL_2 = 2;
    sbit  ACRESL_2_bit at ACRESL.B2;
    const register unsigned short int ACRESL_1 = 1;
    sbit  ACRESL_1_bit at ACRESL.B1;
    const register unsigned short int ACRESL_0 = 0;
    sbit  ACRESL_0_bit at ACRESL.B0;

    // ACRESH bits
    const register unsigned short int ACRESH_15 = 15;
    sbit  ACRESH_15_bit at ACRESH.B15;
    const register unsigned short int ACRESH_14 = 14;
    sbit  ACRESH_14_bit at ACRESH.B14;
    const register unsigned short int ACRESH_13 = 13;
    sbit  ACRESH_13_bit at ACRESH.B13;
    const register unsigned short int ACRESH_12 = 12;
    sbit  ACRESH_12_bit at ACRESH.B12;
    const register unsigned short int ACRESH_11 = 11;
    sbit  ACRESH_11_bit at ACRESH.B11;
    const register unsigned short int ACRESH_10 = 10;
    sbit  ACRESH_10_bit at ACRESH.B10;
    const register unsigned short int ACRESH_9 = 9;
    sbit  ACRESH_9_bit at ACRESH.B9;
    const register unsigned short int ACRESH_8 = 8;
    sbit  ACRESH_8_bit at ACRESH.B8;
    const register unsigned short int ACRESH_7 = 7;
    sbit  ACRESH_7_bit at ACRESH.B7;
    const register unsigned short int ACRESH_6 = 6;
    sbit  ACRESH_6_bit at ACRESH.B6;
    const register unsigned short int ACRESH_5 = 5;
    sbit  ACRESH_5_bit at ACRESH.B5;
    const register unsigned short int ACRESH_4 = 4;
    sbit  ACRESH_4_bit at ACRESH.B4;
    const register unsigned short int ACRESH_3 = 3;
    sbit  ACRESH_3_bit at ACRESH.B3;
    const register unsigned short int ACRESH_2 = 2;
    sbit  ACRESH_2_bit at ACRESH.B2;
    const register unsigned short int ACRESH_1 = 1;
    sbit  ACRESH_1_bit at ACRESH.B1;
    const register unsigned short int ACRESH_0 = 0;
    sbit  ACRESH_0_bit at ACRESH.B0;

    // ADCHITL bits
    const register unsigned short int CHH15 = 15;
    sbit  CHH15_bit at ADCHITL.B15;
    const register unsigned short int CHH14 = 14;
    sbit  CHH14_bit at ADCHITL.B14;
    const register unsigned short int CHH13 = 13;
    sbit  CHH13_bit at ADCHITL.B13;
    const register unsigned short int CHH12 = 12;
    sbit  CHH12_bit at ADCHITL.B12;
    const register unsigned short int CHH11 = 11;
    sbit  CHH11_bit at ADCHITL.B11;
    const register unsigned short int CHH10 = 10;
    sbit  CHH10_bit at ADCHITL.B10;
    const register unsigned short int CHH9 = 9;
    sbit  CHH9_bit at ADCHITL.B9;
    const register unsigned short int CHH8 = 8;
    sbit  CHH8_bit at ADCHITL.B8;
    const register unsigned short int CHH7 = 7;
    sbit  CHH7_bit at ADCHITL.B7;
    const register unsigned short int CHH6 = 6;
    sbit  CHH6_bit at ADCHITL.B6;
    const register unsigned short int CHH5 = 5;
    sbit  CHH5_bit at ADCHITL.B5;
    const register unsigned short int CHH4 = 4;
    sbit  CHH4_bit at ADCHITL.B4;
    const register unsigned short int CHH3 = 3;
    sbit  CHH3_bit at ADCHITL.B3;
    const register unsigned short int CHH2 = 2;
    sbit  CHH2_bit at ADCHITL.B2;
    const register unsigned short int CHH1 = 1;
    sbit  CHH1_bit at ADCHITL.B1;
    const register unsigned short int CHH0 = 0;
    sbit  CHH0_bit at ADCHITL.B0;

    // ADCHITH bits
    const register unsigned short int CHH31 = 15;
    sbit  CHH31_bit at ADCHITH.B15;
    const register unsigned short int CHH30 = 14;
    sbit  CHH30_bit at ADCHITH.B14;
    const register unsigned short int CHH29 = 13;
    sbit  CHH29_bit at ADCHITH.B13;
    const register unsigned short int CHH28 = 12;
    sbit  CHH28_bit at ADCHITH.B12;
    const register unsigned short int CHH27 = 11;
    sbit  CHH27_bit at ADCHITH.B11;
    const register unsigned short int CHH26 = 10;
    sbit  CHH26_bit at ADCHITH.B10;
    const register unsigned short int CHH25 = 9;
    sbit  CHH25_bit at ADCHITH.B9;
    const register unsigned short int CHH24 = 8;
    sbit  CHH24_bit at ADCHITH.B8;
    const register unsigned short int CHH23 = 7;
    sbit  CHH23_bit at ADCHITH.B7;
    const register unsigned short int CHH22 = 6;
    sbit  CHH22_bit at ADCHITH.B6;
    const register unsigned short int CHH21 = 5;
    sbit  CHH21_bit at ADCHITH.B5;
    const register unsigned short int CHH20 = 4;
    sbit  CHH20_bit at ADCHITH.B4;
    const register unsigned short int CHH19 = 3;
    sbit  CHH19_bit at ADCHITH.B3;
    const register unsigned short int CHH18 = 2;
    sbit  CHH18_bit at ADCHITH.B2;
    const register unsigned short int CHH17 = 1;
    sbit  CHH17_bit at ADCHITH.B1;
    const register unsigned short int CHH16 = 0;
    sbit  CHH16_bit at ADCHITH.B0;

    // ADL0CONL bits
    sbit  SLEN_ADL0CONL_bit at ADL0CONL.B15;
    sbit  SAMP_ADL0CONL_bit at ADL0CONL.B14;
    sbit  SLENCLR_ADL0CONL_bit at ADL0CONL.B13;
    sbit  SLTSRC_4_ADL0CONL_bit at ADL0CONL.B12;
    sbit  SLTSRC_3_ADL0CONL_bit at ADL0CONL.B11;
    sbit  SLTSRC_2_ADL0CONL_bit at ADL0CONL.B10;
    sbit  SLTSRC_1_ADL0CONL_bit at ADL0CONL.B9;
    sbit  SLTSRC_0_ADL0CONL_bit at ADL0CONL.B8;
    sbit  THSRC_ADL0CONL_bit at ADL0CONL.B7;
    sbit  SLSIZE_5_ADL0CONL_bit at ADL0CONL.B5;
    sbit  SLSIZE_4_ADL0CONL_bit at ADL0CONL.B4;
    sbit  SLSIZE_3_ADL0CONL_bit at ADL0CONL.B3;
    sbit  SLSIZE_2_ADL0CONL_bit at ADL0CONL.B2;
    sbit  SLSIZE_1_ADL0CONL_bit at ADL0CONL.B1;
    sbit  SLSIZE_0_ADL0CONL_bit at ADL0CONL.B0;

    // ADL0CONH bits
    sbit  ASEN_ADL0CONH_bit at ADL0CONH.B15;
    sbit  SLINT_1_ADL0CONH_bit at ADL0CONH.B14;
    sbit  SLINT_0_ADL0CONH_bit at ADL0CONH.B13;
    sbit  WM_1_ADL0CONH_bit at ADL0CONH.B12;
    sbit  WM_0_ADL0CONH_bit at ADL0CONH.B11;
    sbit  CM_2_ADL0CONH_bit at ADL0CONH.B10;
    sbit  CM_1_ADL0CONH_bit at ADL0CONH.B9;
    sbit  CM_0_ADL0CONH_bit at ADL0CONH.B8;
    sbit  CTMEN_ADL0CONH_bit at ADL0CONH.B7;
    sbit  PINTRIS_ADL0CONH_bit at ADL0CONH.B6;
    sbit  MULCHEN_ADL0CONH_bit at ADL0CONH.B5;
    sbit  SAMC_4_ADL0CONH_bit at ADL0CONH.B4;
    sbit  SAMC_3_ADL0CONH_bit at ADL0CONH.B3;
    sbit  SAMC_2_ADL0CONH_bit at ADL0CONH.B2;
    sbit  SAMC_1_ADL0CONH_bit at ADL0CONH.B1;
    sbit  SAMC_0_ADL0CONH_bit at ADL0CONH.B0;

    // ADL0PTR bits
    sbit  ADNEXT_6_ADL0PTR_bit at ADL0PTR.B14;
    sbit  ADNEXT_5_ADL0PTR_bit at ADL0PTR.B13;
    sbit  ADNEXT_4_ADL0PTR_bit at ADL0PTR.B12;
    sbit  ADNEXT_3_ADL0PTR_bit at ADL0PTR.B11;
    sbit  ADNEXT_2_ADL0PTR_bit at ADL0PTR.B10;
    sbit  ADNEXT_1_ADL0PTR_bit at ADL0PTR.B9;
    sbit  ADNEXT_0_ADL0PTR_bit at ADL0PTR.B8;

    // ADL0STAT bits
    sbit  ADTACT_ADL0STAT_bit at ADL0STAT.B15;
    sbit  LBUSY_ADL0STAT_bit at ADL0STAT.B14;
    sbit  ADTDLY_ADL0STAT_bit at ADL0STAT.B7;
    sbit  ADLIF_ADL0STAT_bit at ADL0STAT.B5;

    // ADTH0L bits
    sbit  TH15_ADTH0L_bit at ADTH0L.B15;
    sbit  TH14_ADTH0L_bit at ADTH0L.B14;
    sbit  TH13_ADTH0L_bit at ADTH0L.B13;
    sbit  TH12_ADTH0L_bit at ADTH0L.B12;
    sbit  TH11_ADTH0L_bit at ADTH0L.B11;
    sbit  TH10_ADTH0L_bit at ADTH0L.B10;
    sbit  TH9_ADTH0L_bit at ADTH0L.B9;
    sbit  TH8_ADTH0L_bit at ADTH0L.B8;
    sbit  TH7_ADTH0L_bit at ADTH0L.B7;
    sbit  TH6_ADTH0L_bit at ADTH0L.B6;
    sbit  TH5_ADTH0L_bit at ADTH0L.B5;
    sbit  TH4_ADTH0L_bit at ADTH0L.B4;
    sbit  TH3_ADTH0L_bit at ADTH0L.B3;
    sbit  TH2_ADTH0L_bit at ADTH0L.B2;
    sbit  TH1_ADTH0L_bit at ADTH0L.B1;
    sbit  TH0_ADTH0L_bit at ADTH0L.B0;

    // ADTH0H bits
    sbit  TH15_ADTH0H_bit at ADTH0H.B15;
    sbit  TH14_ADTH0H_bit at ADTH0H.B14;
    sbit  TH13_ADTH0H_bit at ADTH0H.B13;
    sbit  TH12_ADTH0H_bit at ADTH0H.B12;
    sbit  TH11_ADTH0H_bit at ADTH0H.B11;
    sbit  TH10_ADTH0H_bit at ADTH0H.B10;
    sbit  TH9_ADTH0H_bit at ADTH0H.B9;
    sbit  TH8_ADTH0H_bit at ADTH0H.B8;
    sbit  TH7_ADTH0H_bit at ADTH0H.B7;
    sbit  TH6_ADTH0H_bit at ADTH0H.B6;
    sbit  TH5_ADTH0H_bit at ADTH0H.B5;
    sbit  TH4_ADTH0H_bit at ADTH0H.B4;
    sbit  TH3_ADTH0H_bit at ADTH0H.B3;
    sbit  TH2_ADTH0H_bit at ADTH0H.B2;
    sbit  TH1_ADTH0H_bit at ADTH0H.B1;
    sbit  TH0_ADTH0H_bit at ADTH0H.B0;

    // ADL0MSEL0 bits
    sbit  MSEL15_ADL0MSEL0_bit at ADL0MSEL0.B15;

    // ADL0MSEL1 bits
    sbit  MSEL31_ADL0MSEL1_bit at ADL0MSEL1.B15;
    sbit  MSEL30_ADL0MSEL1_bit at ADL0MSEL1.B14;
    sbit  MSEL29_ADL0MSEL1_bit at ADL0MSEL1.B13;
    sbit  MSEL28_ADL0MSEL1_bit at ADL0MSEL1.B12;
    sbit  MSEL27_ADL0MSEL1_bit at ADL0MSEL1.B11;
    sbit  MSEL26_ADL0MSEL1_bit at ADL0MSEL1.B10;
    sbit  MSEL25_ADL0MSEL1_bit at ADL0MSEL1.B9;
    sbit  MSEL24_ADL0MSEL1_bit at ADL0MSEL1.B8;
    sbit  MSEL23_ADL0MSEL1_bit at ADL0MSEL1.B7;
    sbit  MSEL22_ADL0MSEL1_bit at ADL0MSEL1.B6;
    sbit  MSEL21_ADL0MSEL1_bit at ADL0MSEL1.B5;
    sbit  MSEL20_ADL0MSEL1_bit at ADL0MSEL1.B4;
    sbit  MSEL19_ADL0MSEL1_bit at ADL0MSEL1.B3;
    sbit  MSEL18_ADL0MSEL1_bit at ADL0MSEL1.B2;
    sbit  MSEL17_ADL0MSEL1_bit at ADL0MSEL1.B1;
    sbit  MSEL16_ADL0MSEL1_bit at ADL0MSEL1.B0;

    // ADL0MSEL2 bits
    sbit  MSEL47_ADL0MSEL2_bit at ADL0MSEL2.B15;
    sbit  MSEL46_ADL0MSEL2_bit at ADL0MSEL2.B14;
    sbit  MSEL45_ADL0MSEL2_bit at ADL0MSEL2.B13;
    sbit  MSEL44_ADL0MSEL2_bit at ADL0MSEL2.B12;
    sbit  MSEL43_ADL0MSEL2_bit at ADL0MSEL2.B11;
    sbit  MSEL42_ADL0MSEL2_bit at ADL0MSEL2.B10;
    sbit  MSEL41_ADL0MSEL2_bit at ADL0MSEL2.B9;
    sbit  MSEL40_ADL0MSEL2_bit at ADL0MSEL2.B8;
    sbit  MSEL39_ADL0MSEL2_bit at ADL0MSEL2.B7;
    sbit  MSEL38_ADL0MSEL2_bit at ADL0MSEL2.B6;
    sbit  MSEL37_ADL0MSEL2_bit at ADL0MSEL2.B5;
    sbit  MSEL36_ADL0MSEL2_bit at ADL0MSEL2.B4;
    sbit  MSEL35_ADL0MSEL2_bit at ADL0MSEL2.B3;
    sbit  MSEL34_ADL0MSEL2_bit at ADL0MSEL2.B2;
    sbit  MSEL33_ADL0MSEL2_bit at ADL0MSEL2.B1;
    sbit  MSEL32_ADL0MSEL2_bit at ADL0MSEL2.B0;

    // ADL0MSEL3 bits
    sbit  MSEL49_ADL0MSEL3_bit at ADL0MSEL3.B1;
    sbit  MSEL48_ADL0MSEL3_bit at ADL0MSEL3.B0;

    // ADL1CONL bits
    sbit  SLEN_ADL1CONL_bit at ADL1CONL.B15;
    sbit  SAMP_ADL1CONL_bit at ADL1CONL.B14;
    sbit  SLENCLR_ADL1CONL_bit at ADL1CONL.B13;
    sbit  SLTSRC_4_ADL1CONL_bit at ADL1CONL.B12;
    sbit  SLTSRC_3_ADL1CONL_bit at ADL1CONL.B11;
    sbit  SLTSRC_2_ADL1CONL_bit at ADL1CONL.B10;
    sbit  SLTSRC_1_ADL1CONL_bit at ADL1CONL.B9;
    sbit  SLTSRC_0_ADL1CONL_bit at ADL1CONL.B8;
    sbit  THSRC_ADL1CONL_bit at ADL1CONL.B7;
    sbit  SLSIZE_5_ADL1CONL_bit at ADL1CONL.B5;
    sbit  SLSIZE_4_ADL1CONL_bit at ADL1CONL.B4;
    sbit  SLSIZE_3_ADL1CONL_bit at ADL1CONL.B3;
    sbit  SLSIZE_2_ADL1CONL_bit at ADL1CONL.B2;
    sbit  SLSIZE_1_ADL1CONL_bit at ADL1CONL.B1;
    sbit  SLSIZE_0_ADL1CONL_bit at ADL1CONL.B0;

    // ADL1CONH bits
    sbit  ASEN_ADL1CONH_bit at ADL1CONH.B15;
    sbit  SLINT_1_ADL1CONH_bit at ADL1CONH.B14;
    sbit  SLINT_0_ADL1CONH_bit at ADL1CONH.B13;
    sbit  WM_1_ADL1CONH_bit at ADL1CONH.B12;
    sbit  WM_0_ADL1CONH_bit at ADL1CONH.B11;
    sbit  CM_2_ADL1CONH_bit at ADL1CONH.B10;
    sbit  CM_1_ADL1CONH_bit at ADL1CONH.B9;
    sbit  CM_0_ADL1CONH_bit at ADL1CONH.B8;
    sbit  CTMEN_ADL1CONH_bit at ADL1CONH.B7;
    sbit  PINTRIS_ADL1CONH_bit at ADL1CONH.B6;
    sbit  MULCHEN_ADL1CONH_bit at ADL1CONH.B5;
    sbit  SAMC_4_ADL1CONH_bit at ADL1CONH.B4;
    sbit  SAMC_3_ADL1CONH_bit at ADL1CONH.B3;
    sbit  SAMC_2_ADL1CONH_bit at ADL1CONH.B2;
    sbit  SAMC_1_ADL1CONH_bit at ADL1CONH.B1;
    sbit  SAMC_0_ADL1CONH_bit at ADL1CONH.B0;

    // ADL1PTR bits
    sbit  ADNEXT_6_ADL1PTR_bit at ADL1PTR.B14;
    sbit  ADNEXT_5_ADL1PTR_bit at ADL1PTR.B13;
    sbit  ADNEXT_4_ADL1PTR_bit at ADL1PTR.B12;
    sbit  ADNEXT_3_ADL1PTR_bit at ADL1PTR.B11;
    sbit  ADNEXT_2_ADL1PTR_bit at ADL1PTR.B10;
    sbit  ADNEXT_1_ADL1PTR_bit at ADL1PTR.B9;
    sbit  ADNEXT_0_ADL1PTR_bit at ADL1PTR.B8;

    // ADL1STAT bits
    sbit  ADTACT_ADL1STAT_bit at ADL1STAT.B15;
    sbit  LBUSY_ADL1STAT_bit at ADL1STAT.B14;
    sbit  ADTDLY_ADL1STAT_bit at ADL1STAT.B7;
    sbit  ADLIF_ADL1STAT_bit at ADL1STAT.B5;

    // ADTH1L bits
    sbit  TH15_ADTH1L_bit at ADTH1L.B15;
    sbit  TH14_ADTH1L_bit at ADTH1L.B14;
    sbit  TH13_ADTH1L_bit at ADTH1L.B13;
    sbit  TH12_ADTH1L_bit at ADTH1L.B12;
    sbit  TH11_ADTH1L_bit at ADTH1L.B11;
    sbit  TH10_ADTH1L_bit at ADTH1L.B10;
    sbit  TH9_ADTH1L_bit at ADTH1L.B9;
    sbit  TH8_ADTH1L_bit at ADTH1L.B8;
    sbit  TH7_ADTH1L_bit at ADTH1L.B7;
    sbit  TH6_ADTH1L_bit at ADTH1L.B6;
    sbit  TH5_ADTH1L_bit at ADTH1L.B5;
    sbit  TH4_ADTH1L_bit at ADTH1L.B4;
    sbit  TH3_ADTH1L_bit at ADTH1L.B3;
    sbit  TH2_ADTH1L_bit at ADTH1L.B2;
    sbit  TH1_ADTH1L_bit at ADTH1L.B1;
    sbit  TH0_ADTH1L_bit at ADTH1L.B0;

    // ADTH1H bits
    sbit  TH15_ADTH1H_bit at ADTH1H.B15;
    sbit  TH14_ADTH1H_bit at ADTH1H.B14;
    sbit  TH13_ADTH1H_bit at ADTH1H.B13;
    sbit  TH12_ADTH1H_bit at ADTH1H.B12;
    sbit  TH11_ADTH1H_bit at ADTH1H.B11;
    sbit  TH10_ADTH1H_bit at ADTH1H.B10;
    sbit  TH9_ADTH1H_bit at ADTH1H.B9;
    sbit  TH8_ADTH1H_bit at ADTH1H.B8;
    sbit  TH7_ADTH1H_bit at ADTH1H.B7;
    sbit  TH6_ADTH1H_bit at ADTH1H.B6;
    sbit  TH5_ADTH1H_bit at ADTH1H.B5;
    sbit  TH4_ADTH1H_bit at ADTH1H.B4;
    sbit  TH3_ADTH1H_bit at ADTH1H.B3;
    sbit  TH2_ADTH1H_bit at ADTH1H.B2;
    sbit  TH1_ADTH1H_bit at ADTH1H.B1;
    sbit  TH0_ADTH1H_bit at ADTH1H.B0;

    // ADL1MSEL0 bits
    sbit  MSEL15_ADL1MSEL0_bit at ADL1MSEL0.B15;

    // ADL1MSEL1 bits
    sbit  MSEL31_ADL1MSEL1_bit at ADL1MSEL1.B15;
    sbit  MSEL30_ADL1MSEL1_bit at ADL1MSEL1.B14;
    sbit  MSEL29_ADL1MSEL1_bit at ADL1MSEL1.B13;
    sbit  MSEL28_ADL1MSEL1_bit at ADL1MSEL1.B12;
    sbit  MSEL27_ADL1MSEL1_bit at ADL1MSEL1.B11;
    sbit  MSEL26_ADL1MSEL1_bit at ADL1MSEL1.B10;
    sbit  MSEL25_ADL1MSEL1_bit at ADL1MSEL1.B9;
    sbit  MSEL24_ADL1MSEL1_bit at ADL1MSEL1.B8;
    sbit  MSEL23_ADL1MSEL1_bit at ADL1MSEL1.B7;
    sbit  MSEL22_ADL1MSEL1_bit at ADL1MSEL1.B6;
    sbit  MSEL21_ADL1MSEL1_bit at ADL1MSEL1.B5;
    sbit  MSEL20_ADL1MSEL1_bit at ADL1MSEL1.B4;
    sbit  MSEL19_ADL1MSEL1_bit at ADL1MSEL1.B3;
    sbit  MSEL18_ADL1MSEL1_bit at ADL1MSEL1.B2;
    sbit  MSEL17_ADL1MSEL1_bit at ADL1MSEL1.B1;
    sbit  MSEL16_ADL1MSEL1_bit at ADL1MSEL1.B0;

    // ADL1MSEL2 bits
    sbit  MSEL47_ADL1MSEL2_bit at ADL1MSEL2.B15;
    sbit  MSEL46_ADL1MSEL2_bit at ADL1MSEL2.B14;
    sbit  MSEL45_ADL1MSEL2_bit at ADL1MSEL2.B13;
    sbit  MSEL44_ADL1MSEL2_bit at ADL1MSEL2.B12;
    sbit  MSEL43_ADL1MSEL2_bit at ADL1MSEL2.B11;
    sbit  MSEL42_ADL1MSEL2_bit at ADL1MSEL2.B10;
    sbit  MSEL41_ADL1MSEL2_bit at ADL1MSEL2.B9;
    sbit  MSEL40_ADL1MSEL2_bit at ADL1MSEL2.B8;
    sbit  MSEL39_ADL1MSEL2_bit at ADL1MSEL2.B7;
    sbit  MSEL38_ADL1MSEL2_bit at ADL1MSEL2.B6;
    sbit  MSEL37_ADL1MSEL2_bit at ADL1MSEL2.B5;
    sbit  MSEL36_ADL1MSEL2_bit at ADL1MSEL2.B4;
    sbit  MSEL35_ADL1MSEL2_bit at ADL1MSEL2.B3;
    sbit  MSEL34_ADL1MSEL2_bit at ADL1MSEL2.B2;
    sbit  MSEL33_ADL1MSEL2_bit at ADL1MSEL2.B1;
    sbit  MSEL32_ADL1MSEL2_bit at ADL1MSEL2.B0;

    // ADL1MSEL3 bits
    sbit  MSEL49_ADL1MSEL3_bit at ADL1MSEL3.B1;
    sbit  MSEL48_ADL1MSEL3_bit at ADL1MSEL3.B0;

    // ADL2CONL bits
    sbit  SLEN_ADL2CONL_bit at ADL2CONL.B15;
    sbit  SAMP_ADL2CONL_bit at ADL2CONL.B14;
    sbit  SLENCLR_ADL2CONL_bit at ADL2CONL.B13;
    sbit  SLTSRC_4_ADL2CONL_bit at ADL2CONL.B12;
    sbit  SLTSRC_3_ADL2CONL_bit at ADL2CONL.B11;
    sbit  SLTSRC_2_ADL2CONL_bit at ADL2CONL.B10;
    sbit  SLTSRC_1_ADL2CONL_bit at ADL2CONL.B9;
    sbit  SLTSRC_0_ADL2CONL_bit at ADL2CONL.B8;
    sbit  THSRC_ADL2CONL_bit at ADL2CONL.B7;
    sbit  SLSIZE_5_ADL2CONL_bit at ADL2CONL.B5;
    sbit  SLSIZE_4_ADL2CONL_bit at ADL2CONL.B4;
    sbit  SLSIZE_3_ADL2CONL_bit at ADL2CONL.B3;
    sbit  SLSIZE_2_ADL2CONL_bit at ADL2CONL.B2;
    sbit  SLSIZE_1_ADL2CONL_bit at ADL2CONL.B1;
    sbit  SLSIZE_0_ADL2CONL_bit at ADL2CONL.B0;

    // ADL2CONH bits
    sbit  ASEN_ADL2CONH_bit at ADL2CONH.B15;
    sbit  SLINT_1_ADL2CONH_bit at ADL2CONH.B14;
    sbit  SLINT_0_ADL2CONH_bit at ADL2CONH.B13;
    sbit  WM_1_ADL2CONH_bit at ADL2CONH.B12;
    sbit  WM_0_ADL2CONH_bit at ADL2CONH.B11;
    sbit  CM_2_ADL2CONH_bit at ADL2CONH.B10;
    sbit  CM_1_ADL2CONH_bit at ADL2CONH.B9;
    sbit  CM_0_ADL2CONH_bit at ADL2CONH.B8;
    sbit  CTMEN_ADL2CONH_bit at ADL2CONH.B7;
    sbit  PINTRIS_ADL2CONH_bit at ADL2CONH.B6;
    sbit  MULCHEN_ADL2CONH_bit at ADL2CONH.B5;
    sbit  SAMC_4_ADL2CONH_bit at ADL2CONH.B4;
    sbit  SAMC_3_ADL2CONH_bit at ADL2CONH.B3;
    sbit  SAMC_2_ADL2CONH_bit at ADL2CONH.B2;
    sbit  SAMC_1_ADL2CONH_bit at ADL2CONH.B1;
    sbit  SAMC_0_ADL2CONH_bit at ADL2CONH.B0;

    // ADL2PTR bits
    sbit  ADNEXT_6_ADL2PTR_bit at ADL2PTR.B14;
    sbit  ADNEXT_5_ADL2PTR_bit at ADL2PTR.B13;
    sbit  ADNEXT_4_ADL2PTR_bit at ADL2PTR.B12;
    sbit  ADNEXT_3_ADL2PTR_bit at ADL2PTR.B11;
    sbit  ADNEXT_2_ADL2PTR_bit at ADL2PTR.B10;
    sbit  ADNEXT_1_ADL2PTR_bit at ADL2PTR.B9;
    sbit  ADNEXT_0_ADL2PTR_bit at ADL2PTR.B8;

    // ADL2STAT bits
    sbit  ADTACT_ADL2STAT_bit at ADL2STAT.B15;
    sbit  LBUSY_ADL2STAT_bit at ADL2STAT.B14;
    sbit  ADTDLY_ADL2STAT_bit at ADL2STAT.B7;
    sbit  ADLIF_ADL2STAT_bit at ADL2STAT.B5;

    // ADTH2L bits
    sbit  TH15_ADTH2L_bit at ADTH2L.B15;
    sbit  TH14_ADTH2L_bit at ADTH2L.B14;
    sbit  TH13_ADTH2L_bit at ADTH2L.B13;
    sbit  TH12_ADTH2L_bit at ADTH2L.B12;
    sbit  TH11_ADTH2L_bit at ADTH2L.B11;
    sbit  TH10_ADTH2L_bit at ADTH2L.B10;
    sbit  TH9_ADTH2L_bit at ADTH2L.B9;
    sbit  TH8_ADTH2L_bit at ADTH2L.B8;
    sbit  TH7_ADTH2L_bit at ADTH2L.B7;
    sbit  TH6_ADTH2L_bit at ADTH2L.B6;
    sbit  TH5_ADTH2L_bit at ADTH2L.B5;
    sbit  TH4_ADTH2L_bit at ADTH2L.B4;
    sbit  TH3_ADTH2L_bit at ADTH2L.B3;
    sbit  TH2_ADTH2L_bit at ADTH2L.B2;
    sbit  TH1_ADTH2L_bit at ADTH2L.B1;
    sbit  TH0_ADTH2L_bit at ADTH2L.B0;

    // ADTH2H bits
    sbit  TH15_ADTH2H_bit at ADTH2H.B15;
    sbit  TH14_ADTH2H_bit at ADTH2H.B14;
    sbit  TH13_ADTH2H_bit at ADTH2H.B13;
    sbit  TH12_ADTH2H_bit at ADTH2H.B12;
    sbit  TH11_ADTH2H_bit at ADTH2H.B11;
    sbit  TH10_ADTH2H_bit at ADTH2H.B10;
    sbit  TH9_ADTH2H_bit at ADTH2H.B9;
    sbit  TH8_ADTH2H_bit at ADTH2H.B8;
    sbit  TH7_ADTH2H_bit at ADTH2H.B7;
    sbit  TH6_ADTH2H_bit at ADTH2H.B6;
    sbit  TH5_ADTH2H_bit at ADTH2H.B5;
    sbit  TH4_ADTH2H_bit at ADTH2H.B4;
    sbit  TH3_ADTH2H_bit at ADTH2H.B3;
    sbit  TH2_ADTH2H_bit at ADTH2H.B2;
    sbit  TH1_ADTH2H_bit at ADTH2H.B1;
    sbit  TH0_ADTH2H_bit at ADTH2H.B0;

    // ADL2MSEL0 bits
    sbit  MSEL15_ADL2MSEL0_bit at ADL2MSEL0.B15;

    // ADL2MSEL1 bits
    sbit  MSEL31_ADL2MSEL1_bit at ADL2MSEL1.B15;
    sbit  MSEL30_ADL2MSEL1_bit at ADL2MSEL1.B14;
    sbit  MSEL29_ADL2MSEL1_bit at ADL2MSEL1.B13;
    sbit  MSEL28_ADL2MSEL1_bit at ADL2MSEL1.B12;
    sbit  MSEL27_ADL2MSEL1_bit at ADL2MSEL1.B11;
    sbit  MSEL26_ADL2MSEL1_bit at ADL2MSEL1.B10;
    sbit  MSEL25_ADL2MSEL1_bit at ADL2MSEL1.B9;
    sbit  MSEL24_ADL2MSEL1_bit at ADL2MSEL1.B8;
    sbit  MSEL23_ADL2MSEL1_bit at ADL2MSEL1.B7;
    sbit  MSEL22_ADL2MSEL1_bit at ADL2MSEL1.B6;
    sbit  MSEL21_ADL2MSEL1_bit at ADL2MSEL1.B5;
    sbit  MSEL20_ADL2MSEL1_bit at ADL2MSEL1.B4;
    sbit  MSEL19_ADL2MSEL1_bit at ADL2MSEL1.B3;
    sbit  MSEL18_ADL2MSEL1_bit at ADL2MSEL1.B2;
    sbit  MSEL17_ADL2MSEL1_bit at ADL2MSEL1.B1;
    sbit  MSEL16_ADL2MSEL1_bit at ADL2MSEL1.B0;

    // ADL2MSEL2 bits
    sbit  MSEL47_ADL2MSEL2_bit at ADL2MSEL2.B15;
    sbit  MSEL46_ADL2MSEL2_bit at ADL2MSEL2.B14;
    sbit  MSEL45_ADL2MSEL2_bit at ADL2MSEL2.B13;
    sbit  MSEL44_ADL2MSEL2_bit at ADL2MSEL2.B12;
    sbit  MSEL43_ADL2MSEL2_bit at ADL2MSEL2.B11;
    sbit  MSEL42_ADL2MSEL2_bit at ADL2MSEL2.B10;
    sbit  MSEL41_ADL2MSEL2_bit at ADL2MSEL2.B9;
    sbit  MSEL40_ADL2MSEL2_bit at ADL2MSEL2.B8;
    sbit  MSEL39_ADL2MSEL2_bit at ADL2MSEL2.B7;
    sbit  MSEL38_ADL2MSEL2_bit at ADL2MSEL2.B6;
    sbit  MSEL37_ADL2MSEL2_bit at ADL2MSEL2.B5;
    sbit  MSEL36_ADL2MSEL2_bit at ADL2MSEL2.B4;
    sbit  MSEL35_ADL2MSEL2_bit at ADL2MSEL2.B3;
    sbit  MSEL34_ADL2MSEL2_bit at ADL2MSEL2.B2;
    sbit  MSEL33_ADL2MSEL2_bit at ADL2MSEL2.B1;
    sbit  MSEL32_ADL2MSEL2_bit at ADL2MSEL2.B0;

    // ADL2MSEL3 bits
    sbit  MSEL49_ADL2MSEL3_bit at ADL2MSEL3.B1;
    sbit  MSEL48_ADL2MSEL3_bit at ADL2MSEL3.B0;

    // LCDREG bits
    const register unsigned short int CPEN = 15;
    sbit  CPEN_bit at LCDREG.B15;
    const register unsigned short int BIAS_2 = 5;
    sbit  BIAS_2_bit at LCDREG.B5;
    const register unsigned short int BIAS_1 = 4;
    sbit  BIAS_1_bit at LCDREG.B4;
    const register unsigned short int BIAS_0 = 3;
    sbit  BIAS_0_bit at LCDREG.B3;
    const register unsigned short int MODE13 = 2;
    sbit  MODE13_bit at LCDREG.B2;
    const register unsigned short int CKSEL_1 = 1;
    sbit  CKSEL_1_bit at LCDREG.B1;
    const register unsigned short int CKSEL_0 = 0;
    sbit  CKSEL_0_bit at LCDREG.B0;

    // LCDREF bits
    const register unsigned short int LCDIRE = 15;
    sbit  LCDIRE_bit at LCDREF.B15;
    const register unsigned short int LCDCST_2 = 13;
    sbit  LCDCST_2_bit at LCDREF.B13;
    const register unsigned short int LCDCST_1 = 12;
    sbit  LCDCST_1_bit at LCDREF.B12;
    const register unsigned short int LCDCST_0 = 11;
    sbit  LCDCST_0_bit at LCDREF.B11;
    const register unsigned short int VLCD3PE = 10;
    sbit  VLCD3PE_bit at LCDREF.B10;
    const register unsigned short int VLCD2PE = 9;
    sbit  VLCD2PE_bit at LCDREF.B9;
    const register unsigned short int VLCD1PE = 8;
    sbit  VLCD1PE_bit at LCDREF.B8;
    const register unsigned short int LRLAP_1 = 7;
    sbit  LRLAP_1_bit at LCDREF.B7;
    const register unsigned short int LRLAP_0 = 6;
    sbit  LRLAP_0_bit at LCDREF.B6;
    const register unsigned short int LRLBP_1 = 5;
    sbit  LRLBP_1_bit at LCDREF.B5;
    const register unsigned short int LRLBP_0 = 4;
    sbit  LRLBP_0_bit at LCDREF.B4;
    const register unsigned short int LRLAT_2 = 2;
    sbit  LRLAT_2_bit at LCDREF.B2;
    const register unsigned short int LRLAT_1 = 1;
    sbit  LRLAT_1_bit at LCDREF.B1;
    const register unsigned short int LRLAT_0 = 0;
    sbit  LRLAT_0_bit at LCDREF.B0;

    // LCDCON bits
    const register unsigned short int LCDEN = 15;
    sbit  LCDEN_bit at LCDCON.B15;
    const register unsigned short int LCDSIDL = 13;
    sbit  LCDSIDL_bit at LCDCON.B13;
    const register unsigned short int SLPEN = 6;
    sbit  SLPEN_bit at LCDCON.B6;
    const register unsigned short int WERR = 5;
    sbit  WERR_bit at LCDCON.B5;
    const register unsigned short int CS_1 = 4;
    sbit  CS_1_bit at LCDCON.B4;
    const register unsigned short int CS_0 = 3;
    sbit  CS_0_bit at LCDCON.B3;
    const register unsigned short int LMUX_2 = 2;
    sbit  LMUX_2_bit at LCDCON.B2;
    const register unsigned short int LMUX_1 = 1;
    sbit  LMUX_1_bit at LCDCON.B1;
    const register unsigned short int LMUX_0 = 0;
    sbit  LMUX_0_bit at LCDCON.B0;

    // LCDPS bits
    const register unsigned short int WFT = 7;
    sbit  WFT_bit at LCDPS.B7;
    const register unsigned short int BIASMD = 6;
    sbit  BIASMD_bit at LCDPS.B6;
    const register unsigned short int LCDA = 5;
    sbit  LCDA_bit at LCDPS.B5;
    const register unsigned short int WA = 4;
    sbit  WA_bit at LCDPS.B4;
    const register unsigned short int LP_3 = 3;
    sbit  LP_3_bit at LCDPS.B3;
    const register unsigned short int LP_2 = 2;
    sbit  LP_2_bit at LCDPS.B2;
    const register unsigned short int LP_1 = 1;
    sbit  LP_1_bit at LCDPS.B1;
    const register unsigned short int LP_0 = 0;
    sbit  LP_0_bit at LCDPS.B0;

    // LCDSE0 bits
    const register unsigned short int SE15 = 15;
    sbit  SE15_bit at LCDSE0.B15;
    const register unsigned short int SE14 = 14;
    sbit  SE14_bit at LCDSE0.B14;
    const register unsigned short int SE13 = 13;
    sbit  SE13_bit at LCDSE0.B13;
    const register unsigned short int SE12 = 12;
    sbit  SE12_bit at LCDSE0.B12;
    const register unsigned short int SE11 = 11;
    sbit  SE11_bit at LCDSE0.B11;
    const register unsigned short int SE10 = 10;
    sbit  SE10_bit at LCDSE0.B10;
    const register unsigned short int SE09 = 9;
    sbit  SE09_bit at LCDSE0.B9;
    const register unsigned short int SE08 = 8;
    sbit  SE08_bit at LCDSE0.B8;
    const register unsigned short int SE07 = 7;
    sbit  SE07_bit at LCDSE0.B7;
    const register unsigned short int SE06 = 6;
    sbit  SE06_bit at LCDSE0.B6;
    const register unsigned short int SE05 = 5;
    sbit  SE05_bit at LCDSE0.B5;
    const register unsigned short int SE04 = 4;
    sbit  SE04_bit at LCDSE0.B4;
    const register unsigned short int SE03 = 3;
    sbit  SE03_bit at LCDSE0.B3;
    const register unsigned short int SE02 = 2;
    sbit  SE02_bit at LCDSE0.B2;
    const register unsigned short int SE01 = 1;
    sbit  SE01_bit at LCDSE0.B1;
    const register unsigned short int SE00 = 0;
    sbit  SE00_bit at LCDSE0.B0;

    // LCDSE1 bits
    const register unsigned short int SE30 = 14;
    sbit  SE30_bit at LCDSE1.B14;
    const register unsigned short int SE27 = 11;
    sbit  SE27_bit at LCDSE1.B11;
    const register unsigned short int SE26 = 10;
    sbit  SE26_bit at LCDSE1.B10;
    const register unsigned short int SE25 = 9;
    sbit  SE25_bit at LCDSE1.B9;
    const register unsigned short int SE24 = 8;
    sbit  SE24_bit at LCDSE1.B8;
    const register unsigned short int SE23 = 7;
    sbit  SE23_bit at LCDSE1.B7;
    const register unsigned short int SE22 = 6;
    sbit  SE22_bit at LCDSE1.B6;
    const register unsigned short int SE21 = 5;
    sbit  SE21_bit at LCDSE1.B5;
    const register unsigned short int SE20 = 4;
    sbit  SE20_bit at LCDSE1.B4;
    const register unsigned short int SE19 = 3;
    sbit  SE19_bit at LCDSE1.B3;
    const register unsigned short int SE18 = 2;
    sbit  SE18_bit at LCDSE1.B2;
    const register unsigned short int SE17 = 1;
    sbit  SE17_bit at LCDSE1.B1;
    const register unsigned short int SE16 = 0;
    sbit  SE16_bit at LCDSE1.B0;

    // LCDSE2 bits
    const register unsigned short int SE47 = 15;
    sbit  SE47_bit at LCDSE2.B15;

    // LCDSE3 bits
    const register unsigned short int SE62 = 14;
    sbit  SE62_bit at LCDSE3.B14;
    const register unsigned short int SE48 = 0;
    sbit  SE48_bit at LCDSE3.B0;

    // LCDDATA0 bits
    const register unsigned short int S15C0 = 15;
    sbit  S15C0_bit at LCDDATA0.B15;
    const register unsigned short int S14C0 = 14;
    sbit  S14C0_bit at LCDDATA0.B14;
    const register unsigned short int S13C0 = 13;
    sbit  S13C0_bit at LCDDATA0.B13;
    const register unsigned short int S12C0 = 12;
    sbit  S12C0_bit at LCDDATA0.B12;
    const register unsigned short int S11C0 = 11;
    sbit  S11C0_bit at LCDDATA0.B11;
    const register unsigned short int S10C0 = 10;
    sbit  S10C0_bit at LCDDATA0.B10;
    const register unsigned short int S9C0 = 9;
    sbit  S9C0_bit at LCDDATA0.B9;
    const register unsigned short int S8C0 = 8;
    sbit  S8C0_bit at LCDDATA0.B8;
    const register unsigned short int S7C0 = 7;
    sbit  S7C0_bit at LCDDATA0.B7;
    const register unsigned short int S6C0 = 6;
    sbit  S6C0_bit at LCDDATA0.B6;
    const register unsigned short int S5C0 = 5;
    sbit  S5C0_bit at LCDDATA0.B5;
    const register unsigned short int S4C0 = 4;
    sbit  S4C0_bit at LCDDATA0.B4;
    const register unsigned short int S3C0 = 3;
    sbit  S3C0_bit at LCDDATA0.B3;
    const register unsigned short int S2C0 = 2;
    sbit  S2C0_bit at LCDDATA0.B2;
    const register unsigned short int S1C0 = 1;
    sbit  S1C0_bit at LCDDATA0.B1;
    const register unsigned short int S0C0 = 0;
    sbit  S0C0_bit at LCDDATA0.B0;

    // LCDDATA1 bits
    const register unsigned short int S30C0 = 14;
    sbit  S30C0_bit at LCDDATA1.B14;
    const register unsigned short int S27C0 = 11;
    sbit  S27C0_bit at LCDDATA1.B11;
    const register unsigned short int S26C0 = 10;
    sbit  S26C0_bit at LCDDATA1.B10;
    const register unsigned short int S25C0 = 9;
    sbit  S25C0_bit at LCDDATA1.B9;
    const register unsigned short int S24C0 = 8;
    sbit  S24C0_bit at LCDDATA1.B8;
    const register unsigned short int S23C0 = 7;
    sbit  S23C0_bit at LCDDATA1.B7;
    const register unsigned short int S22C0 = 6;
    sbit  S22C0_bit at LCDDATA1.B6;
    const register unsigned short int S21C0 = 5;
    sbit  S21C0_bit at LCDDATA1.B5;
    const register unsigned short int S20C0 = 4;
    sbit  S20C0_bit at LCDDATA1.B4;
    const register unsigned short int S19C0 = 3;
    sbit  S19C0_bit at LCDDATA1.B3;
    const register unsigned short int S18C0 = 2;
    sbit  S18C0_bit at LCDDATA1.B2;
    const register unsigned short int S17C0 = 1;
    sbit  S17C0_bit at LCDDATA1.B1;
    const register unsigned short int S16C0 = 0;
    sbit  S16C0_bit at LCDDATA1.B0;

    // LCDDATA2 bits
    const register unsigned short int S47C0 = 15;
    sbit  S47C0_bit at LCDDATA2.B15;

    // LCDDATA3 bits
    const register unsigned short int S62C0 = 14;
    sbit  S62C0_bit at LCDDATA3.B14;
    const register unsigned short int S48C0 = 0;
    sbit  S48C0_bit at LCDDATA3.B0;

    // LCDDATA4 bits
    const register unsigned short int S15C1 = 15;
    sbit  S15C1_bit at LCDDATA4.B15;
    const register unsigned short int S14C1 = 14;
    sbit  S14C1_bit at LCDDATA4.B14;
    const register unsigned short int S13C1 = 13;
    sbit  S13C1_bit at LCDDATA4.B13;
    const register unsigned short int S12C1 = 12;
    sbit  S12C1_bit at LCDDATA4.B12;
    const register unsigned short int S11C1 = 11;
    sbit  S11C1_bit at LCDDATA4.B11;
    const register unsigned short int S10C1 = 10;
    sbit  S10C1_bit at LCDDATA4.B10;
    const register unsigned short int S9C1 = 9;
    sbit  S9C1_bit at LCDDATA4.B9;
    const register unsigned short int S8C1 = 8;
    sbit  S8C1_bit at LCDDATA4.B8;
    const register unsigned short int S7C1 = 7;
    sbit  S7C1_bit at LCDDATA4.B7;
    const register unsigned short int S6C1 = 6;
    sbit  S6C1_bit at LCDDATA4.B6;
    const register unsigned short int S5C1 = 5;
    sbit  S5C1_bit at LCDDATA4.B5;
    const register unsigned short int S4C1 = 4;
    sbit  S4C1_bit at LCDDATA4.B4;
    const register unsigned short int S3C1 = 3;
    sbit  S3C1_bit at LCDDATA4.B3;
    const register unsigned short int S2C1 = 2;
    sbit  S2C1_bit at LCDDATA4.B2;
    const register unsigned short int S1C1 = 1;
    sbit  S1C1_bit at LCDDATA4.B1;
    const register unsigned short int S0C1 = 0;
    sbit  S0C1_bit at LCDDATA4.B0;

    // LCDDATA5 bits
    const register unsigned short int S30C1 = 14;
    sbit  S30C1_bit at LCDDATA5.B14;
    const register unsigned short int S27C1 = 11;
    sbit  S27C1_bit at LCDDATA5.B11;
    const register unsigned short int S26C1 = 10;
    sbit  S26C1_bit at LCDDATA5.B10;
    const register unsigned short int S25C1 = 9;
    sbit  S25C1_bit at LCDDATA5.B9;
    const register unsigned short int S24C1 = 8;
    sbit  S24C1_bit at LCDDATA5.B8;
    const register unsigned short int S23C1 = 7;
    sbit  S23C1_bit at LCDDATA5.B7;
    const register unsigned short int S22C1 = 6;
    sbit  S22C1_bit at LCDDATA5.B6;
    const register unsigned short int S21C1 = 5;
    sbit  S21C1_bit at LCDDATA5.B5;
    const register unsigned short int S20C1 = 4;
    sbit  S20C1_bit at LCDDATA5.B4;
    const register unsigned short int S19C1 = 3;
    sbit  S19C1_bit at LCDDATA5.B3;
    const register unsigned short int S18C1 = 2;
    sbit  S18C1_bit at LCDDATA5.B2;
    const register unsigned short int S17C1 = 1;
    sbit  S17C1_bit at LCDDATA5.B1;
    const register unsigned short int S16C1 = 0;
    sbit  S16C1_bit at LCDDATA5.B0;

    // LCDDATA6 bits
    const register unsigned short int S47C1 = 15;
    sbit  S47C1_bit at LCDDATA6.B15;

    // LCDDATA7 bits
    const register unsigned short int S62C1 = 14;
    sbit  S62C1_bit at LCDDATA7.B14;
    const register unsigned short int S48C1 = 0;
    sbit  S48C1_bit at LCDDATA7.B0;

    // LCDDATA8 bits
    const register unsigned short int S15C2 = 15;
    sbit  S15C2_bit at LCDDATA8.B15;
    const register unsigned short int S14C2 = 14;
    sbit  S14C2_bit at LCDDATA8.B14;
    const register unsigned short int S13C2 = 13;
    sbit  S13C2_bit at LCDDATA8.B13;
    const register unsigned short int S12C2 = 12;
    sbit  S12C2_bit at LCDDATA8.B12;
    const register unsigned short int S11C2 = 11;
    sbit  S11C2_bit at LCDDATA8.B11;
    const register unsigned short int S10C2 = 10;
    sbit  S10C2_bit at LCDDATA8.B10;
    const register unsigned short int S9C2 = 9;
    sbit  S9C2_bit at LCDDATA8.B9;
    const register unsigned short int S8C2 = 8;
    sbit  S8C2_bit at LCDDATA8.B8;
    const register unsigned short int S7C2 = 7;
    sbit  S7C2_bit at LCDDATA8.B7;
    const register unsigned short int S6C2 = 6;
    sbit  S6C2_bit at LCDDATA8.B6;
    const register unsigned short int S5C2 = 5;
    sbit  S5C2_bit at LCDDATA8.B5;
    const register unsigned short int S4C2 = 4;
    sbit  S4C2_bit at LCDDATA8.B4;
    const register unsigned short int S3C2 = 3;
    sbit  S3C2_bit at LCDDATA8.B3;
    const register unsigned short int S2C2 = 2;
    sbit  S2C2_bit at LCDDATA8.B2;
    const register unsigned short int S1C2 = 1;
    sbit  S1C2_bit at LCDDATA8.B1;
    const register unsigned short int S0C2 = 0;
    sbit  S0C2_bit at LCDDATA8.B0;

    // LCDDATA9 bits
    const register unsigned short int S30C2 = 14;
    sbit  S30C2_bit at LCDDATA9.B14;
    const register unsigned short int S27C2 = 11;
    sbit  S27C2_bit at LCDDATA9.B11;
    const register unsigned short int S26C2 = 10;
    sbit  S26C2_bit at LCDDATA9.B10;
    const register unsigned short int S25C2 = 9;
    sbit  S25C2_bit at LCDDATA9.B9;
    const register unsigned short int S24C2 = 8;
    sbit  S24C2_bit at LCDDATA9.B8;
    const register unsigned short int S23C2 = 7;
    sbit  S23C2_bit at LCDDATA9.B7;
    const register unsigned short int S22C2 = 6;
    sbit  S22C2_bit at LCDDATA9.B6;
    const register unsigned short int S21C2 = 5;
    sbit  S21C2_bit at LCDDATA9.B5;
    const register unsigned short int S20C2 = 4;
    sbit  S20C2_bit at LCDDATA9.B4;
    const register unsigned short int S19C2 = 3;
    sbit  S19C2_bit at LCDDATA9.B3;
    const register unsigned short int S18C2 = 2;
    sbit  S18C2_bit at LCDDATA9.B2;
    const register unsigned short int S17C2 = 1;
    sbit  S17C2_bit at LCDDATA9.B1;
    const register unsigned short int S16C2 = 0;
    sbit  S16C2_bit at LCDDATA9.B0;

    // LCDDATA10 bits
    const register unsigned short int S47C2 = 15;
    sbit  S47C2_bit at LCDDATA10.B15;

    // LCDDATA11 bits
    const register unsigned short int S62C2 = 14;
    sbit  S62C2_bit at LCDDATA11.B14;
    const register unsigned short int S48C2 = 0;
    sbit  S48C2_bit at LCDDATA11.B0;

    // LCDDATA12 bits
    const register unsigned short int S15C3 = 15;
    sbit  S15C3_bit at LCDDATA12.B15;
    const register unsigned short int S14C3 = 14;
    sbit  S14C3_bit at LCDDATA12.B14;
    const register unsigned short int S13C3 = 13;
    sbit  S13C3_bit at LCDDATA12.B13;
    const register unsigned short int S12C3 = 12;
    sbit  S12C3_bit at LCDDATA12.B12;
    const register unsigned short int S11C3 = 11;
    sbit  S11C3_bit at LCDDATA12.B11;
    const register unsigned short int S10C3 = 10;
    sbit  S10C3_bit at LCDDATA12.B10;
    const register unsigned short int S9C3 = 9;
    sbit  S9C3_bit at LCDDATA12.B9;
    const register unsigned short int S8C3 = 8;
    sbit  S8C3_bit at LCDDATA12.B8;
    const register unsigned short int S7C3 = 7;
    sbit  S7C3_bit at LCDDATA12.B7;
    const register unsigned short int S6C3 = 6;
    sbit  S6C3_bit at LCDDATA12.B6;
    const register unsigned short int S5C3 = 5;
    sbit  S5C3_bit at LCDDATA12.B5;
    const register unsigned short int S4C3 = 4;
    sbit  S4C3_bit at LCDDATA12.B4;
    const register unsigned short int S3C3 = 3;
    sbit  S3C3_bit at LCDDATA12.B3;
    const register unsigned short int S2C3 = 2;
    sbit  S2C3_bit at LCDDATA12.B2;
    const register unsigned short int S1C3 = 1;
    sbit  S1C3_bit at LCDDATA12.B1;
    const register unsigned short int S0C3 = 0;
    sbit  S0C3_bit at LCDDATA12.B0;

    // LCDDATA13 bits
    const register unsigned short int S30C3 = 14;
    sbit  S30C3_bit at LCDDATA13.B14;
    const register unsigned short int S27C3 = 11;
    sbit  S27C3_bit at LCDDATA13.B11;
    const register unsigned short int S26C3 = 10;
    sbit  S26C3_bit at LCDDATA13.B10;
    const register unsigned short int S25C3 = 9;
    sbit  S25C3_bit at LCDDATA13.B9;
    const register unsigned short int S24C3 = 8;
    sbit  S24C3_bit at LCDDATA13.B8;
    const register unsigned short int S23C3 = 7;
    sbit  S23C3_bit at LCDDATA13.B7;
    const register unsigned short int S22C3 = 6;
    sbit  S22C3_bit at LCDDATA13.B6;
    const register unsigned short int S21C3 = 5;
    sbit  S21C3_bit at LCDDATA13.B5;
    const register unsigned short int S20C3 = 4;
    sbit  S20C3_bit at LCDDATA13.B4;
    const register unsigned short int S19C3 = 3;
    sbit  S19C3_bit at LCDDATA13.B3;
    const register unsigned short int S18C3 = 2;
    sbit  S18C3_bit at LCDDATA13.B2;
    const register unsigned short int S17C3 = 1;
    sbit  S17C3_bit at LCDDATA13.B1;
    const register unsigned short int S16C3 = 0;
    sbit  S16C3_bit at LCDDATA13.B0;

    // LCDDATA14 bits
    const register unsigned short int S47C3 = 15;
    sbit  S47C3_bit at LCDDATA14.B15;

    // LCDDATA15 bits
    const register unsigned short int S62C3 = 14;
    sbit  S62C3_bit at LCDDATA15.B14;
    const register unsigned short int S48C3 = 0;
    sbit  S48C3_bit at LCDDATA15.B0;

    // LCDDATA16 bits
    const register unsigned short int S15C4 = 15;
    sbit  S15C4_bit at LCDDATA16.B15;
    const register unsigned short int S14C4 = 14;
    sbit  S14C4_bit at LCDDATA16.B14;
    const register unsigned short int S13C4 = 13;
    sbit  S13C4_bit at LCDDATA16.B13;
    const register unsigned short int S12C4 = 12;
    sbit  S12C4_bit at LCDDATA16.B12;
    const register unsigned short int S11C4 = 11;
    sbit  S11C4_bit at LCDDATA16.B11;
    const register unsigned short int S10C4 = 10;
    sbit  S10C4_bit at LCDDATA16.B10;
    const register unsigned short int S9C4 = 9;
    sbit  S9C4_bit at LCDDATA16.B9;
    const register unsigned short int S8C4 = 8;
    sbit  S8C4_bit at LCDDATA16.B8;
    const register unsigned short int S7C4 = 7;
    sbit  S7C4_bit at LCDDATA16.B7;
    const register unsigned short int S6C4 = 6;
    sbit  S6C4_bit at LCDDATA16.B6;
    const register unsigned short int S5C4 = 5;
    sbit  S5C4_bit at LCDDATA16.B5;
    const register unsigned short int S4C4 = 4;
    sbit  S4C4_bit at LCDDATA16.B4;
    const register unsigned short int S3C4 = 3;
    sbit  S3C4_bit at LCDDATA16.B3;
    const register unsigned short int S2C4 = 2;
    sbit  S2C4_bit at LCDDATA16.B2;
    const register unsigned short int S1C4 = 1;
    sbit  S1C4_bit at LCDDATA16.B1;
    const register unsigned short int S0C4 = 0;
    sbit  S0C4_bit at LCDDATA16.B0;

    // LCDDATA17 bits
    const register unsigned short int S30C4 = 14;
    sbit  S30C4_bit at LCDDATA17.B14;
    const register unsigned short int S27C4 = 11;
    sbit  S27C4_bit at LCDDATA17.B11;
    const register unsigned short int S26C4 = 10;
    sbit  S26C4_bit at LCDDATA17.B10;
    const register unsigned short int S25C4 = 9;
    sbit  S25C4_bit at LCDDATA17.B9;
    const register unsigned short int S24C4 = 8;
    sbit  S24C4_bit at LCDDATA17.B8;
    const register unsigned short int S23C4 = 7;
    sbit  S23C4_bit at LCDDATA17.B7;
    const register unsigned short int S22C4 = 6;
    sbit  S22C4_bit at LCDDATA17.B6;
    const register unsigned short int S21C4 = 5;
    sbit  S21C4_bit at LCDDATA17.B5;
    const register unsigned short int S20C4 = 4;
    sbit  S20C4_bit at LCDDATA17.B4;
    const register unsigned short int S19C4 = 3;
    sbit  S19C4_bit at LCDDATA17.B3;
    const register unsigned short int S18C4 = 2;
    sbit  S18C4_bit at LCDDATA17.B2;
    const register unsigned short int S17C4 = 1;
    sbit  S17C4_bit at LCDDATA17.B1;
    const register unsigned short int S16C4 = 0;
    sbit  S16C4_bit at LCDDATA17.B0;

    // LCDDATA18 bits
    const register unsigned short int S47C4 = 15;
    sbit  S47C4_bit at LCDDATA18.B15;

    // LCDDATA19 bits
    const register unsigned short int S62C4 = 14;
    sbit  S62C4_bit at LCDDATA19.B14;
    const register unsigned short int S48C4 = 0;
    sbit  S48C4_bit at LCDDATA19.B0;

    // LCDDATA20 bits
    const register unsigned short int S15C5 = 15;
    sbit  S15C5_bit at LCDDATA20.B15;
    const register unsigned short int S14C5 = 14;
    sbit  S14C5_bit at LCDDATA20.B14;
    const register unsigned short int S13C5 = 13;
    sbit  S13C5_bit at LCDDATA20.B13;
    const register unsigned short int S12C5 = 12;
    sbit  S12C5_bit at LCDDATA20.B12;
    const register unsigned short int S11C5 = 11;
    sbit  S11C5_bit at LCDDATA20.B11;
    const register unsigned short int S10C5 = 10;
    sbit  S10C5_bit at LCDDATA20.B10;
    const register unsigned short int S9C5 = 9;
    sbit  S9C5_bit at LCDDATA20.B9;
    const register unsigned short int S8C5 = 8;
    sbit  S8C5_bit at LCDDATA20.B8;
    const register unsigned short int S7C5 = 7;
    sbit  S7C5_bit at LCDDATA20.B7;
    const register unsigned short int S6C5 = 6;
    sbit  S6C5_bit at LCDDATA20.B6;
    const register unsigned short int S5C5 = 5;
    sbit  S5C5_bit at LCDDATA20.B5;
    const register unsigned short int S4C5 = 4;
    sbit  S4C5_bit at LCDDATA20.B4;
    const register unsigned short int S3C5 = 3;
    sbit  S3C5_bit at LCDDATA20.B3;
    const register unsigned short int S2C5 = 2;
    sbit  S2C5_bit at LCDDATA20.B2;
    const register unsigned short int S1C5 = 1;
    sbit  S1C5_bit at LCDDATA20.B1;
    const register unsigned short int S0C5 = 0;
    sbit  S0C5_bit at LCDDATA20.B0;

    // LCDDATA21 bits
    const register unsigned short int S30C5 = 14;
    sbit  S30C5_bit at LCDDATA21.B14;
    const register unsigned short int S27C5 = 11;
    sbit  S27C5_bit at LCDDATA21.B11;
    const register unsigned short int S26C5 = 10;
    sbit  S26C5_bit at LCDDATA21.B10;
    const register unsigned short int S25C5 = 9;
    sbit  S25C5_bit at LCDDATA21.B9;
    const register unsigned short int S24C5 = 8;
    sbit  S24C5_bit at LCDDATA21.B8;
    const register unsigned short int S23C5 = 7;
    sbit  S23C5_bit at LCDDATA21.B7;
    const register unsigned short int S22C5 = 6;
    sbit  S22C5_bit at LCDDATA21.B6;
    const register unsigned short int S21C5 = 5;
    sbit  S21C5_bit at LCDDATA21.B5;
    const register unsigned short int S20C5 = 4;
    sbit  S20C5_bit at LCDDATA21.B4;
    const register unsigned short int S19C5 = 3;
    sbit  S19C5_bit at LCDDATA21.B3;
    const register unsigned short int S18C5 = 2;
    sbit  S18C5_bit at LCDDATA21.B2;
    const register unsigned short int S17C5 = 1;
    sbit  S17C5_bit at LCDDATA21.B1;
    const register unsigned short int S16C5 = 0;
    sbit  S16C5_bit at LCDDATA21.B0;

    // LCDDATA22 bits
    const register unsigned short int S47C5 = 15;
    sbit  S47C5_bit at LCDDATA22.B15;

    // LCDDATA23 bits
    const register unsigned short int S62C5 = 14;
    sbit  S62C5_bit at LCDDATA23.B14;
    const register unsigned short int S48C5 = 0;
    sbit  S48C5_bit at LCDDATA23.B0;

    // LCDDATA24 bits
    const register unsigned short int S15C6 = 15;
    sbit  S15C6_bit at LCDDATA24.B15;
    const register unsigned short int S14C6 = 14;
    sbit  S14C6_bit at LCDDATA24.B14;
    const register unsigned short int S13C6 = 13;
    sbit  S13C6_bit at LCDDATA24.B13;
    const register unsigned short int S12C6 = 12;
    sbit  S12C6_bit at LCDDATA24.B12;
    const register unsigned short int S11C6 = 11;
    sbit  S11C6_bit at LCDDATA24.B11;
    const register unsigned short int S10C6 = 10;
    sbit  S10C6_bit at LCDDATA24.B10;
    const register unsigned short int S9C6 = 9;
    sbit  S9C6_bit at LCDDATA24.B9;
    const register unsigned short int S8C6 = 8;
    sbit  S8C6_bit at LCDDATA24.B8;
    const register unsigned short int S7C6 = 7;
    sbit  S7C6_bit at LCDDATA24.B7;
    const register unsigned short int S6C6 = 6;
    sbit  S6C6_bit at LCDDATA24.B6;
    const register unsigned short int S5C6 = 5;
    sbit  S5C6_bit at LCDDATA24.B5;
    const register unsigned short int S4C6 = 4;
    sbit  S4C6_bit at LCDDATA24.B4;
    const register unsigned short int S3C6 = 3;
    sbit  S3C6_bit at LCDDATA24.B3;
    const register unsigned short int S2C6 = 2;
    sbit  S2C6_bit at LCDDATA24.B2;
    const register unsigned short int S1C6 = 1;
    sbit  S1C6_bit at LCDDATA24.B1;
    const register unsigned short int S0C6 = 0;
    sbit  S0C6_bit at LCDDATA24.B0;

    // LCDDATA25 bits
    const register unsigned short int S30C6 = 14;
    sbit  S30C6_bit at LCDDATA25.B14;
    const register unsigned short int S27C6 = 11;
    sbit  S27C6_bit at LCDDATA25.B11;
    const register unsigned short int S26C6 = 10;
    sbit  S26C6_bit at LCDDATA25.B10;
    const register unsigned short int S25C6 = 9;
    sbit  S25C6_bit at LCDDATA25.B9;
    const register unsigned short int S24C6 = 8;
    sbit  S24C6_bit at LCDDATA25.B8;
    const register unsigned short int S23C6 = 7;
    sbit  S23C6_bit at LCDDATA25.B7;
    const register unsigned short int S22C6 = 6;
    sbit  S22C6_bit at LCDDATA25.B6;
    const register unsigned short int S21C6 = 5;
    sbit  S21C6_bit at LCDDATA25.B5;
    const register unsigned short int S20C6 = 4;
    sbit  S20C6_bit at LCDDATA25.B4;
    const register unsigned short int S19C6 = 3;
    sbit  S19C6_bit at LCDDATA25.B3;
    const register unsigned short int S18C6 = 2;
    sbit  S18C6_bit at LCDDATA25.B2;
    const register unsigned short int S17C6 = 1;
    sbit  S17C6_bit at LCDDATA25.B1;
    const register unsigned short int S16C6 = 0;
    sbit  S16C6_bit at LCDDATA25.B0;

    // LCDDATA26 bits
    const register unsigned short int S47C6 = 15;
    sbit  S47C6_bit at LCDDATA26.B15;

    // LCDDATA27 bits
    const register unsigned short int S62C6 = 14;
    sbit  S62C6_bit at LCDDATA27.B14;
    const register unsigned short int S48C6 = 0;
    sbit  S48C6_bit at LCDDATA27.B0;

    // LCDDATA28 bits
    const register unsigned short int S15C7 = 15;
    sbit  S15C7_bit at LCDDATA28.B15;
    const register unsigned short int S14C7 = 14;
    sbit  S14C7_bit at LCDDATA28.B14;
    const register unsigned short int S13C7 = 13;
    sbit  S13C7_bit at LCDDATA28.B13;
    const register unsigned short int S12C7 = 12;
    sbit  S12C7_bit at LCDDATA28.B12;
    const register unsigned short int S11C7 = 11;
    sbit  S11C7_bit at LCDDATA28.B11;
    const register unsigned short int S10C7 = 10;
    sbit  S10C7_bit at LCDDATA28.B10;
    const register unsigned short int S9C7 = 9;
    sbit  S9C7_bit at LCDDATA28.B9;
    const register unsigned short int S8C7 = 8;
    sbit  S8C7_bit at LCDDATA28.B8;
    const register unsigned short int S7C7 = 7;
    sbit  S7C7_bit at LCDDATA28.B7;
    const register unsigned short int S6C7 = 6;
    sbit  S6C7_bit at LCDDATA28.B6;
    const register unsigned short int S5C7 = 5;
    sbit  S5C7_bit at LCDDATA28.B5;
    const register unsigned short int S4C7 = 4;
    sbit  S4C7_bit at LCDDATA28.B4;
    const register unsigned short int S3C7 = 3;
    sbit  S3C7_bit at LCDDATA28.B3;
    const register unsigned short int S2C7 = 2;
    sbit  S2C7_bit at LCDDATA28.B2;
    const register unsigned short int S1C7 = 1;
    sbit  S1C7_bit at LCDDATA28.B1;
    const register unsigned short int S0C7 = 0;
    sbit  S0C7_bit at LCDDATA28.B0;

    // LCDDATA29 bits
    const register unsigned short int S30C7 = 14;
    sbit  S30C7_bit at LCDDATA29.B14;
    const register unsigned short int S27C7 = 11;
    sbit  S27C7_bit at LCDDATA29.B11;
    const register unsigned short int S26C7 = 10;
    sbit  S26C7_bit at LCDDATA29.B10;
    const register unsigned short int S25C7 = 9;
    sbit  S25C7_bit at LCDDATA29.B9;
    const register unsigned short int S24C7 = 8;
    sbit  S24C7_bit at LCDDATA29.B8;
    const register unsigned short int S23C7 = 7;
    sbit  S23C7_bit at LCDDATA29.B7;
    const register unsigned short int S22C7 = 6;
    sbit  S22C7_bit at LCDDATA29.B6;
    const register unsigned short int S21C7 = 5;
    sbit  S21C7_bit at LCDDATA29.B5;
    const register unsigned short int S20C7 = 4;
    sbit  S20C7_bit at LCDDATA29.B4;
    const register unsigned short int S19C7 = 3;
    sbit  S19C7_bit at LCDDATA29.B3;
    const register unsigned short int S18C7 = 2;
    sbit  S18C7_bit at LCDDATA29.B2;
    const register unsigned short int S17C7 = 1;
    sbit  S17C7_bit at LCDDATA29.B1;
    const register unsigned short int S16C7 = 0;
    sbit  S16C7_bit at LCDDATA29.B0;

    // LCDDATA30 bits
    const register unsigned short int S47C7 = 15;
    sbit  S47C7_bit at LCDDATA30.B15;

    // LCDDATA31 bits
    const register unsigned short int S62C7 = 14;
    sbit  S62C7_bit at LCDDATA31.B14;
    const register unsigned short int S48C7 = 0;
    sbit  S48C7_bit at LCDDATA31.B0;

    // PMCON1 bits
    const register unsigned short int PMPEN = 15;
    sbit  PMPEN_bit at PMCON1.B15;
    const register unsigned short int PSIDL = 13;
    sbit  PSIDL_bit at PMCON1.B13;
    const register unsigned short int ADRMUX_1 = 12;
    sbit  ADRMUX_1_bit at PMCON1.B12;
    const register unsigned short int ADRMUX_0 = 11;
    sbit  ADRMUX_0_bit at PMCON1.B11;
    const register unsigned short int MODE_1 = 9;
    sbit  MODE_1_bit at PMCON1.B9;
    const register unsigned short int MODE_0 = 8;
    sbit  MODE_0_bit at PMCON1.B8;
    const register unsigned short int CSF_1 = 7;
    sbit  CSF_1_bit at PMCON1.B7;
    const register unsigned short int CSF_0 = 6;
    sbit  CSF_0_bit at PMCON1.B6;
    const register unsigned short int ALP = 5;
    sbit  ALP_bit at PMCON1.B5;
    const register unsigned short int ALMODE = 4;
    sbit  ALMODE_bit at PMCON1.B4;
    const register unsigned short int BUSKEEP = 2;
    sbit  BUSKEEP_bit at PMCON1.B2;
    const register unsigned short int IRQM_1 = 1;
    sbit  IRQM_1_bit at PMCON1.B1;
    const register unsigned short int IRQM_0 = 0;
    sbit  IRQM_0_bit at PMCON1.B0;

    // PMCON2 bits
    const register unsigned short int BUSY = 15;
    sbit  BUSY_bit at PMCON2.B15;
    const register unsigned short int ERROR_ = 13;
    sbit  ERROR_bit at PMCON2.B13;
    const register unsigned short int TIMEOUT = 12;
    sbit  TIMEOUT_bit at PMCON2.B12;
    const register unsigned short int RADDR_7 = 7;
    sbit  RADDR_7_bit at PMCON2.B7;
    const register unsigned short int RADDR_6 = 6;
    sbit  RADDR_6_bit at PMCON2.B6;
    const register unsigned short int RADDR_5 = 5;
    sbit  RADDR_5_bit at PMCON2.B5;
    const register unsigned short int RADDR_4 = 4;
    sbit  RADDR_4_bit at PMCON2.B4;
    const register unsigned short int RADDR_3 = 3;
    sbit  RADDR_3_bit at PMCON2.B3;
    const register unsigned short int RADDR_2 = 2;
    sbit  RADDR_2_bit at PMCON2.B2;
    const register unsigned short int RADDR_1 = 1;
    sbit  RADDR_1_bit at PMCON2.B1;
    const register unsigned short int RADDR_0 = 0;
    sbit  RADDR_0_bit at PMCON2.B0;

    // PMCON3 bits
    const register unsigned short int PTWREN = 15;
    sbit  PTWREN_bit at PMCON3.B15;
    const register unsigned short int PTRDEN = 14;
    sbit  PTRDEN_bit at PMCON3.B14;
    const register unsigned short int PTBE1EN = 13;
    sbit  PTBE1EN_bit at PMCON3.B13;
    const register unsigned short int PTBE0EN = 12;
    sbit  PTBE0EN_bit at PMCON3.B12;
    const register unsigned short int AWAITM_1 = 10;
    sbit  AWAITM_1_bit at PMCON3.B10;
    const register unsigned short int AWAITM_0 = 9;
    sbit  AWAITM_0_bit at PMCON3.B9;
    const register unsigned short int AWAITE = 8;
    sbit  AWAITE_bit at PMCON3.B8;
    const register unsigned short int PTEN22 = 6;
    sbit  PTEN22_bit at PMCON3.B6;
    const register unsigned short int PTEN21 = 5;
    sbit  PTEN21_bit at PMCON3.B5;
    const register unsigned short int PTEN20 = 4;
    sbit  PTEN20_bit at PMCON3.B4;
    const register unsigned short int PTEN19 = 3;
    sbit  PTEN19_bit at PMCON3.B3;
    const register unsigned short int PTEN18 = 2;
    sbit  PTEN18_bit at PMCON3.B2;
    const register unsigned short int PTEN17 = 1;
    sbit  PTEN17_bit at PMCON3.B1;
    const register unsigned short int PTEN16 = 0;
    sbit  PTEN16_bit at PMCON3.B0;

    // PMCON4 bits
    const register unsigned short int PTEN15 = 15;
    sbit  PTEN15_bit at PMCON4.B15;
    const register unsigned short int PTEN14 = 14;
    sbit  PTEN14_bit at PMCON4.B14;
    const register unsigned short int PTEN13 = 13;
    sbit  PTEN13_bit at PMCON4.B13;
    const register unsigned short int PTEN12 = 12;
    sbit  PTEN12_bit at PMCON4.B12;
    const register unsigned short int PTEN11 = 11;
    sbit  PTEN11_bit at PMCON4.B11;
    const register unsigned short int PTEN10 = 10;
    sbit  PTEN10_bit at PMCON4.B10;
    const register unsigned short int PTEN9 = 9;
    sbit  PTEN9_bit at PMCON4.B9;
    const register unsigned short int PTEN8 = 8;
    sbit  PTEN8_bit at PMCON4.B8;
    const register unsigned short int PTEN7 = 7;
    sbit  PTEN7_bit at PMCON4.B7;
    const register unsigned short int PTEN6 = 6;
    sbit  PTEN6_bit at PMCON4.B6;
    const register unsigned short int PTEN5 = 5;
    sbit  PTEN5_bit at PMCON4.B5;
    const register unsigned short int PTEN4 = 4;
    sbit  PTEN4_bit at PMCON4.B4;
    const register unsigned short int PTEN3 = 3;
    sbit  PTEN3_bit at PMCON4.B3;
    const register unsigned short int PTEN2 = 2;
    sbit  PTEN2_bit at PMCON4.B2;
    const register unsigned short int PTEN1 = 1;
    sbit  PTEN1_bit at PMCON4.B1;
    const register unsigned short int PTEN0 = 0;
    sbit  PTEN0_bit at PMCON4.B0;

    // PMCS1CF bits
    const register unsigned short int CSDIS = 15;
    sbit  CSDIS_bit at PMCS1CF.B15;
    sbit  CSDIS_PMCS1CF_bit at PMCS1CF.B15;
    const register unsigned short int CSP = 14;
    sbit  CSP_bit at PMCS1CF.B14;
    sbit  CSP_PMCS1CF_bit at PMCS1CF.B14;
    const register unsigned short int CSPTEN = 13;
    sbit  CSPTEN_bit at PMCS1CF.B13;
    sbit  CSPTEN_PMCS1CF_bit at PMCS1CF.B13;
    const register unsigned short int BEP = 12;
    sbit  BEP_bit at PMCS1CF.B12;
    sbit  BEP_PMCS1CF_bit at PMCS1CF.B12;
    const register unsigned short int WRSP = 10;
    sbit  WRSP_bit at PMCS1CF.B10;
    sbit  WRSP_PMCS1CF_bit at PMCS1CF.B10;
    const register unsigned short int RDSP = 9;
    sbit  RDSP_bit at PMCS1CF.B9;
    sbit  RDSP_PMCS1CF_bit at PMCS1CF.B9;
    const register unsigned short int SM = 8;
    sbit  SM_bit at PMCS1CF.B8;
    sbit  SM_PMCS1CF_bit at PMCS1CF.B8;
    const register unsigned short int ACKP = 7;
    sbit  ACKP_bit at PMCS1CF.B7;
    sbit  ACKP_PMCS1CF_bit at PMCS1CF.B7;
    const register unsigned short int PTSZ_1 = 6;
    sbit  PTSZ_1_bit at PMCS1CF.B6;
    sbit  PTSZ_1_PMCS1CF_bit at PMCS1CF.B6;
    const register unsigned short int PTSZ_0 = 5;
    sbit  PTSZ_0_bit at PMCS1CF.B5;
    sbit  PTSZ_0_PMCS1CF_bit at PMCS1CF.B5;

    // PMCS1BS bits
    const register unsigned short int BASE23 = 15;
    sbit  BASE23_bit at PMCS1BS.B15;
    sbit  BASE23_PMCS1BS_bit at PMCS1BS.B15;
    const register unsigned short int BASE22 = 14;
    sbit  BASE22_bit at PMCS1BS.B14;
    sbit  BASE22_PMCS1BS_bit at PMCS1BS.B14;
    const register unsigned short int BASE21 = 13;
    sbit  BASE21_bit at PMCS1BS.B13;
    sbit  BASE21_PMCS1BS_bit at PMCS1BS.B13;
    const register unsigned short int BASE20 = 12;
    sbit  BASE20_bit at PMCS1BS.B12;
    sbit  BASE20_PMCS1BS_bit at PMCS1BS.B12;
    const register unsigned short int BASE19 = 11;
    sbit  BASE19_bit at PMCS1BS.B11;
    sbit  BASE19_PMCS1BS_bit at PMCS1BS.B11;
    const register unsigned short int BASE18 = 10;
    sbit  BASE18_bit at PMCS1BS.B10;
    sbit  BASE18_PMCS1BS_bit at PMCS1BS.B10;
    const register unsigned short int BASE17 = 9;
    sbit  BASE17_bit at PMCS1BS.B9;
    sbit  BASE17_PMCS1BS_bit at PMCS1BS.B9;
    const register unsigned short int BASE16 = 8;
    sbit  BASE16_bit at PMCS1BS.B8;
    sbit  BASE16_PMCS1BS_bit at PMCS1BS.B8;
    const register unsigned short int BASE15 = 7;
    sbit  BASE15_bit at PMCS1BS.B7;
    sbit  BASE15_PMCS1BS_bit at PMCS1BS.B7;
    const register unsigned short int BASE11 = 3;
    sbit  BASE11_bit at PMCS1BS.B3;
    sbit  BASE11_PMCS1BS_bit at PMCS1BS.B3;

    // PMCS1MD bits
    const register unsigned short int ACKM_1 = 15;
    sbit  ACKM_1_bit at PMCS1MD.B15;
    sbit  ACKM_1_PMCS1MD_bit at PMCS1MD.B15;
    const register unsigned short int ACKM_0 = 14;
    sbit  ACKM_0_bit at PMCS1MD.B14;
    sbit  ACKM_0_PMCS1MD_bit at PMCS1MD.B14;
    const register unsigned short int AMWAIT_2 = 13;
    sbit  AMWAIT_2_bit at PMCS1MD.B13;
    sbit  AMWAIT_2_PMCS1MD_bit at PMCS1MD.B13;
    const register unsigned short int AMWAIT_1 = 12;
    sbit  AMWAIT_1_bit at PMCS1MD.B12;
    sbit  AMWAIT_1_PMCS1MD_bit at PMCS1MD.B12;
    const register unsigned short int AMWAIT_0 = 11;
    sbit  AMWAIT_0_bit at PMCS1MD.B11;
    sbit  AMWAIT_0_PMCS1MD_bit at PMCS1MD.B11;
    const register unsigned short int DWAITB_1 = 7;
    sbit  DWAITB_1_bit at PMCS1MD.B7;
    sbit  DWAITB_1_PMCS1MD_bit at PMCS1MD.B7;
    const register unsigned short int DWAITB_0 = 6;
    sbit  DWAITB_0_bit at PMCS1MD.B6;
    sbit  DWAITB_0_PMCS1MD_bit at PMCS1MD.B6;
    const register unsigned short int DWAITM_3 = 5;
    sbit  DWAITM_3_bit at PMCS1MD.B5;
    sbit  DWAITM_3_PMCS1MD_bit at PMCS1MD.B5;
    const register unsigned short int DWAITM_2 = 4;
    sbit  DWAITM_2_bit at PMCS1MD.B4;
    sbit  DWAITM_2_PMCS1MD_bit at PMCS1MD.B4;
    const register unsigned short int DWAITM_1 = 3;
    sbit  DWAITM_1_bit at PMCS1MD.B3;
    sbit  DWAITM_1_PMCS1MD_bit at PMCS1MD.B3;
    const register unsigned short int DWAITM_0 = 2;
    sbit  DWAITM_0_bit at PMCS1MD.B2;
    sbit  DWAITM_0_PMCS1MD_bit at PMCS1MD.B2;
    const register unsigned short int DWAITE_1 = 1;
    sbit  DWAITE_1_bit at PMCS1MD.B1;
    sbit  DWAITE_1_PMCS1MD_bit at PMCS1MD.B1;
    const register unsigned short int DWAITE_0 = 0;
    sbit  DWAITE_0_bit at PMCS1MD.B0;
    sbit  DWAITE_0_PMCS1MD_bit at PMCS1MD.B0;

    // PMCS2CF bits
    sbit  CSDIS_PMCS2CF_bit at PMCS2CF.B15;
    sbit  CSP_PMCS2CF_bit at PMCS2CF.B14;
    sbit  CSPTEN_PMCS2CF_bit at PMCS2CF.B13;
    sbit  BEP_PMCS2CF_bit at PMCS2CF.B12;
    sbit  WRSP_PMCS2CF_bit at PMCS2CF.B10;
    sbit  RDSP_PMCS2CF_bit at PMCS2CF.B9;
    sbit  SM_PMCS2CF_bit at PMCS2CF.B8;
    sbit  ACKP_PMCS2CF_bit at PMCS2CF.B7;
    sbit  PTSZ_1_PMCS2CF_bit at PMCS2CF.B6;
    sbit  PTSZ_0_PMCS2CF_bit at PMCS2CF.B5;

    // PMCS2BS bits
    sbit  BASE23_PMCS2BS_bit at PMCS2BS.B15;
    sbit  BASE22_PMCS2BS_bit at PMCS2BS.B14;
    sbit  BASE21_PMCS2BS_bit at PMCS2BS.B13;
    sbit  BASE20_PMCS2BS_bit at PMCS2BS.B12;
    sbit  BASE19_PMCS2BS_bit at PMCS2BS.B11;
    sbit  BASE18_PMCS2BS_bit at PMCS2BS.B10;
    sbit  BASE17_PMCS2BS_bit at PMCS2BS.B9;
    sbit  BASE16_PMCS2BS_bit at PMCS2BS.B8;
    sbit  BASE15_PMCS2BS_bit at PMCS2BS.B7;
    sbit  BASE11_PMCS2BS_bit at PMCS2BS.B3;

    // PMCS2MD bits
    sbit  ACKM_1_PMCS2MD_bit at PMCS2MD.B15;
    sbit  ACKM_0_PMCS2MD_bit at PMCS2MD.B14;
    sbit  AMWAIT_2_PMCS2MD_bit at PMCS2MD.B13;
    sbit  AMWAIT_1_PMCS2MD_bit at PMCS2MD.B12;
    sbit  AMWAIT_0_PMCS2MD_bit at PMCS2MD.B11;
    sbit  DWAITB_1_PMCS2MD_bit at PMCS2MD.B7;
    sbit  DWAITB_0_PMCS2MD_bit at PMCS2MD.B6;
    sbit  DWAITM_3_PMCS2MD_bit at PMCS2MD.B5;
    sbit  DWAITM_2_PMCS2MD_bit at PMCS2MD.B4;
    sbit  DWAITM_1_PMCS2MD_bit at PMCS2MD.B3;
    sbit  DWAITM_0_PMCS2MD_bit at PMCS2MD.B2;
    sbit  DWAITE_1_PMCS2MD_bit at PMCS2MD.B1;
    sbit  DWAITE_0_PMCS2MD_bit at PMCS2MD.B0;

    // PMDOUT1 bits
    const register unsigned short int PMDOUT1_15 = 15;
    sbit  PMDOUT1_15_bit at PMDOUT1.B15;
    const register unsigned short int PMDOUT1_14 = 14;
    sbit  PMDOUT1_14_bit at PMDOUT1.B14;
    const register unsigned short int PMDOUT1_13 = 13;
    sbit  PMDOUT1_13_bit at PMDOUT1.B13;
    const register unsigned short int PMDOUT1_12 = 12;
    sbit  PMDOUT1_12_bit at PMDOUT1.B12;
    const register unsigned short int PMDOUT1_11 = 11;
    sbit  PMDOUT1_11_bit at PMDOUT1.B11;
    const register unsigned short int PMDOUT1_10 = 10;
    sbit  PMDOUT1_10_bit at PMDOUT1.B10;
    const register unsigned short int PMDOUT1_9 = 9;
    sbit  PMDOUT1_9_bit at PMDOUT1.B9;
    const register unsigned short int PMDOUT1_8 = 8;
    sbit  PMDOUT1_8_bit at PMDOUT1.B8;
    const register unsigned short int PMDOUT1_7 = 7;
    sbit  PMDOUT1_7_bit at PMDOUT1.B7;
    const register unsigned short int PMDOUT1_6 = 6;
    sbit  PMDOUT1_6_bit at PMDOUT1.B6;
    const register unsigned short int PMDOUT1_5 = 5;
    sbit  PMDOUT1_5_bit at PMDOUT1.B5;
    const register unsigned short int PMDOUT1_4 = 4;
    sbit  PMDOUT1_4_bit at PMDOUT1.B4;
    const register unsigned short int PMDOUT1_3 = 3;
    sbit  PMDOUT1_3_bit at PMDOUT1.B3;
    const register unsigned short int PMDOUT1_2 = 2;
    sbit  PMDOUT1_2_bit at PMDOUT1.B2;
    const register unsigned short int PMDOUT1_1 = 1;
    sbit  PMDOUT1_1_bit at PMDOUT1.B1;
    const register unsigned short int PMDOUT1_0 = 0;
    sbit  PMDOUT1_0_bit at PMDOUT1.B0;

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

    // RTCPWC bits
    const register unsigned short int PWCEN = 15;
    sbit  PWCEN_bit at RTCPWC.B15;
    const register unsigned short int PWCPOL = 14;
    sbit  PWCPOL_bit at RTCPWC.B14;
    const register unsigned short int PWCPRE = 13;
    sbit  PWCPRE_bit at RTCPWC.B13;
    const register unsigned short int PWSPRE = 12;
    sbit  PWSPRE_bit at RTCPWC.B12;
    const register unsigned short int RTCLK_1 = 11;
    sbit  RTCLK_1_bit at RTCPWC.B11;
    const register unsigned short int RTCLK_0 = 10;
    sbit  RTCLK_0_bit at RTCPWC.B10;
    const register unsigned short int RTCOUT_1 = 9;
    sbit  RTCOUT_1_bit at RTCPWC.B9;
    const register unsigned short int RTCOUT_0 = 8;
    sbit  RTCOUT_0_bit at RTCPWC.B8;

    // MDCON bits
    const register unsigned short int MDEN = 15;
    sbit  MDEN_bit at MDCON.B15;
    const register unsigned short int MDSIDL = 13;
    sbit  MDSIDL_bit at MDCON.B13;
    const register unsigned short int MDOE = 6;
    sbit  MDOE_bit at MDCON.B6;
    const register unsigned short int MDSLR = 5;
    sbit  MDSLR_bit at MDCON.B5;
    const register unsigned short int MDOPOL = 4;
    sbit  MDOPOL_bit at MDCON.B4;
    const register unsigned short int MDBIT = 0;
    sbit  MDBIT_bit at MDCON.B0;

    // MDSRC bits
    const register unsigned short int SODIS = 7;
    sbit  SODIS_bit at MDSRC.B7;
    const register unsigned short int MS_3 = 3;
    sbit  MS_3_bit at MDSRC.B3;
    const register unsigned short int MS_2 = 2;
    sbit  MS_2_bit at MDSRC.B2;
    const register unsigned short int MS_1 = 1;
    sbit  MS_1_bit at MDSRC.B1;
    const register unsigned short int MS_0 = 0;
    sbit  MS_0_bit at MDSRC.B0;

    // MDCAR bits
    const register unsigned short int CHODIS = 15;
    sbit  CHODIS_bit at MDCAR.B15;
    const register unsigned short int CHPOL = 14;
    sbit  CHPOL_bit at MDCAR.B14;
    const register unsigned short int CHSYNC = 13;
    sbit  CHSYNC_bit at MDCAR.B13;
    const register unsigned short int CH_3 = 11;
    sbit  CH_3_bit at MDCAR.B11;
    const register unsigned short int CH_2 = 10;
    sbit  CH_2_bit at MDCAR.B10;
    const register unsigned short int CH_1 = 9;
    sbit  CH_1_bit at MDCAR.B9;
    const register unsigned short int CH_0 = 8;
    sbit  CH_0_bit at MDCAR.B8;
    const register unsigned short int CLODIS = 7;
    sbit  CLODIS_bit at MDCAR.B7;
    const register unsigned short int CLPOL = 6;
    sbit  CLPOL_bit at MDCAR.B6;
    const register unsigned short int CLSYNC = 5;
    sbit  CLSYNC_bit at MDCAR.B5;
    const register unsigned short int CL_3 = 3;
    sbit  CL_3_bit at MDCAR.B3;
    const register unsigned short int CL_2 = 2;
    sbit  CL_2_bit at MDCAR.B2;
    const register unsigned short int CL_1 = 1;
    sbit  CL_1_bit at MDCAR.B1;
    const register unsigned short int CL_0 = 0;
    sbit  CL_0_bit at MDCAR.B0;

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
    const register unsigned short int CVRSS = 5;
    sbit  CVRSS_bit at CVRCON.B5;
    const register unsigned short int CVR_4 = 4;
    sbit  CVR_4_bit at CVRCON.B4;
    const register unsigned short int CVR_3 = 3;
    sbit  CVR_3_bit at CVRCON.B3;
    const register unsigned short int CVR_2 = 2;
    sbit  CVR_2_bit at CVRCON.B2;
    const register unsigned short int CVR_1 = 1;
    sbit  CVR_1_bit at CVRCON.B1;
    const register unsigned short int CVR_0 = 0;
    sbit  CVR_0_bit at CVRCON.B0;

    // CM1CON bits
    const register unsigned short int CEN = 15;
    sbit  CEN_bit at CM1CON.B15;
    sbit  CEN_CM1CON_bit at CM1CON.B15;
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
    sbit  CEN_CM2CON_bit at CM2CON.B15;
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
    sbit  CEN_CM3CON_bit at CM3CON.B15;
    sbit  COE_CM3CON_bit at CM3CON.B14;
    sbit  CPOL_CM3CON_bit at CM3CON.B13;
    sbit  CEVT_CM3CON_bit at CM3CON.B9;
    sbit  COUT_CM3CON_bit at CM3CON.B8;
    sbit  EVPOL_1_CM3CON_bit at CM3CON.B7;
    sbit  EVPOL_0_CM3CON_bit at CM3CON.B6;
    sbit  CREF_CM3CON_bit at CM3CON.B4;
    sbit  CCH_1_CM3CON_bit at CM3CON.B1;
    sbit  CCH_0_CM3CON_bit at CM3CON.B0;

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

    // BUFCON0 bits
    const register unsigned short int BUFEN = 15;
    sbit  BUFEN_bit at BUFCON0.B15;
    sbit  BUFEN_BUFCON0_bit at BUFCON0.B15;
    const register unsigned short int BUFSIDL = 13;
    sbit  BUFSIDL_bit at BUFCON0.B13;
    sbit  BUFSIDL_BUFCON0_bit at BUFCON0.B13;
    const register unsigned short int BUFSLP = 12;
    sbit  BUFSLP_bit at BUFCON0.B12;
    sbit  BUFSLP_BUFCON0_bit at BUFCON0.B12;
    const register unsigned short int BUFSTBY = 6;
    sbit  BUFSTBY_bit at BUFCON0.B6;
    sbit  BUFSTBY_BUFCON0_bit at BUFCON0.B6;
    const register unsigned short int BUFREF_1 = 1;
    sbit  BUFREF_1_bit at BUFCON0.B1;
    sbit  BUFREF_1_BUFCON0_bit at BUFCON0.B1;
    const register unsigned short int BUFREF_0 = 0;
    sbit  BUFREF_0_bit at BUFCON0.B0;
    sbit  BUFREF_0_BUFCON0_bit at BUFCON0.B0;

    // BUFCON1 bits
    sbit  BUFEN_BUFCON1_bit at BUFCON1.B15;
    sbit  BUFSIDL_BUFCON1_bit at BUFCON1.B13;
    sbit  BUFSLP_BUFCON1_bit at BUFCON1.B12;
    const register unsigned short int BUFOE = 7;
    sbit  BUFOE_bit at BUFCON1.B7;
    sbit  BUFOE_BUFCON1_bit at BUFCON1.B7;
    sbit  BUFSTBY_BUFCON1_bit at BUFCON1.B6;
    sbit  BUFREF_1_BUFCON1_bit at BUFCON1.B1;
    sbit  BUFREF_0_BUFCON1_bit at BUFCON1.B0;

    // BUFCON2 bits
    sbit  BUFEN_BUFCON2_bit at BUFCON2.B15;
    sbit  BUFSIDL_BUFCON2_bit at BUFCON2.B13;
    sbit  BUFSLP_BUFCON2_bit at BUFCON2.B12;
    sbit  BUFOE_BUFCON2_bit at BUFCON2.B7;
    sbit  BUFSTBY_BUFCON2_bit at BUFCON2.B6;
    sbit  BUFREF_1_BUFCON2_bit at BUFCON2.B1;
    sbit  BUFREF_0_BUFCON2_bit at BUFCON2.B0;

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
    const register unsigned short int OCTRIG1R_5 = 5;
    sbit  OCTRIG1R_5_bit at RPINR0.B5;
    const register unsigned short int OCTRIG1R_4 = 4;
    sbit  OCTRIG1R_4_bit at RPINR0.B4;
    const register unsigned short int OCTRIG1R_3 = 3;
    sbit  OCTRIG1R_3_bit at RPINR0.B3;
    const register unsigned short int OCTRIG1R_2 = 2;
    sbit  OCTRIG1R_2_bit at RPINR0.B2;
    const register unsigned short int OCTRIG1R_1 = 1;
    sbit  OCTRIG1R_1_bit at RPINR0.B1;
    const register unsigned short int OCTRIG1R_0 = 0;
    sbit  OCTRIG1R_0_bit at RPINR0.B0;

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
    const register unsigned short int OCTRIG2R_5 = 13;
    sbit  OCTRIG2R_5_bit at RPINR2.B13;
    const register unsigned short int OCTRIG2R_4 = 12;
    sbit  OCTRIG2R_4_bit at RPINR2.B12;
    const register unsigned short int OCTRIG2R_3 = 11;
    sbit  OCTRIG2R_3_bit at RPINR2.B11;
    const register unsigned short int OCTRIG2R_2 = 10;
    sbit  OCTRIG2R_2_bit at RPINR2.B10;
    const register unsigned short int OCTRIG2R_1 = 9;
    sbit  OCTRIG2R_1_bit at RPINR2.B9;
    const register unsigned short int OCTRIG2R_0 = 8;
    sbit  OCTRIG2R_0_bit at RPINR2.B8;
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
    const register unsigned short int TMRCKR_5 = 13;
    sbit  TMRCKR_5_bit at RPINR23.B13;
    const register unsigned short int TMRCKR_4 = 12;
    sbit  TMRCKR_4_bit at RPINR23.B12;
    const register unsigned short int TMRCKR_3 = 11;
    sbit  TMRCKR_3_bit at RPINR23.B11;
    const register unsigned short int TMRCKR_2 = 10;
    sbit  TMRCKR_2_bit at RPINR23.B10;
    const register unsigned short int TMRCKR_1 = 9;
    sbit  TMRCKR_1_bit at RPINR23.B9;
    const register unsigned short int TMRCKR_0 = 8;
    sbit  TMRCKR_0_bit at RPINR23.B8;
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

    // RPINR30 bits
    const register unsigned short int MDMIR_5 = 5;
    sbit  MDMIR_5_bit at RPINR30.B5;
    const register unsigned short int MDMIR_4 = 4;
    sbit  MDMIR_4_bit at RPINR30.B4;
    const register unsigned short int MDMIR_3 = 3;
    sbit  MDMIR_3_bit at RPINR30.B3;
    const register unsigned short int MDMIR_2 = 2;
    sbit  MDMIR_2_bit at RPINR30.B2;
    const register unsigned short int MDMIR_1 = 1;
    sbit  MDMIR_1_bit at RPINR30.B1;
    const register unsigned short int MDMIR_0 = 0;
    sbit  MDMIR_0_bit at RPINR30.B0;

    // RPINR31 bits
    const register unsigned short int MDC2R_5 = 13;
    sbit  MDC2R_5_bit at RPINR31.B13;
    const register unsigned short int MDC2R_4 = 12;
    sbit  MDC2R_4_bit at RPINR31.B12;
    const register unsigned short int MDC2R_3 = 11;
    sbit  MDC2R_3_bit at RPINR31.B11;
    const register unsigned short int MDC2R_2 = 10;
    sbit  MDC2R_2_bit at RPINR31.B10;
    const register unsigned short int MDC2R_1 = 9;
    sbit  MDC2R_1_bit at RPINR31.B9;
    const register unsigned short int MDC2R_0 = 8;
    sbit  MDC2R_0_bit at RPINR31.B8;
    const register unsigned short int MDC1R_5 = 5;
    sbit  MDC1R_5_bit at RPINR31.B5;
    const register unsigned short int MDC1R_4 = 4;
    sbit  MDC1R_4_bit at RPINR31.B4;
    const register unsigned short int MDC1R_3 = 3;
    sbit  MDC1R_3_bit at RPINR31.B3;
    const register unsigned short int MDC1R_2 = 2;
    sbit  MDC1R_2_bit at RPINR31.B2;
    const register unsigned short int MDC1R_1 = 1;
    sbit  MDC1R_1_bit at RPINR31.B1;
    const register unsigned short int MDC1R_0 = 0;
    sbit  MDC1R_0_bit at RPINR31.B0;

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

    // RPOR17 bits
    const register unsigned short int RP35R_5 = 13;
    sbit  RP35R_5_bit at RPOR17.B13;
    const register unsigned short int RP35R_4 = 12;
    sbit  RP35R_4_bit at RPOR17.B12;
    const register unsigned short int RP35R_3 = 11;
    sbit  RP35R_3_bit at RPOR17.B11;
    const register unsigned short int RP35R_2 = 10;
    sbit  RP35R_2_bit at RPOR17.B10;
    const register unsigned short int RP35R_1 = 9;
    sbit  RP35R_1_bit at RPOR17.B9;
    const register unsigned short int RP35R_0 = 8;
    sbit  RP35R_0_bit at RPOR17.B8;

    // RPOR18 bits
    const register unsigned short int RP37R_5 = 13;
    sbit  RP37R_5_bit at RPOR18.B13;
    const register unsigned short int RP37R_4 = 12;
    sbit  RP37R_4_bit at RPOR18.B12;
    const register unsigned short int RP37R_3 = 11;
    sbit  RP37R_3_bit at RPOR18.B11;
    const register unsigned short int RP37R_2 = 10;
    sbit  RP37R_2_bit at RPOR18.B10;
    const register unsigned short int RP37R_1 = 9;
    sbit  RP37R_1_bit at RPOR18.B9;
    const register unsigned short int RP37R_0 = 8;
    sbit  RP37R_0_bit at RPOR18.B8;
    const register unsigned short int RP36R_5 = 5;
    sbit  RP36R_5_bit at RPOR18.B5;
    const register unsigned short int RP36R_4 = 4;
    sbit  RP36R_4_bit at RPOR18.B4;
    const register unsigned short int RP36R_3 = 3;
    sbit  RP36R_3_bit at RPOR18.B3;
    const register unsigned short int RP36R_2 = 2;
    sbit  RP36R_2_bit at RPOR18.B2;
    const register unsigned short int RP36R_1 = 1;
    sbit  RP36R_1_bit at RPOR18.B1;
    const register unsigned short int RP36R_0 = 0;
    sbit  RP36R_0_bit at RPOR18.B0;

    // RCON bits
    const register unsigned short int TRAPR = 15;
    sbit  TRAPR_bit at RCON.B15;
    const register unsigned short int IOPUWR = 14;
    sbit  IOPUWR_bit at RCON.B14;
    const register unsigned short int RETEN = 12;
    sbit  RETEN_bit at RCON.B12;
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
    const register unsigned short int PLLEN = 5;
    sbit  PLLEN_bit at CLKDIV.B5;

    // OSCTUN bits
    const register unsigned short int STEN = 15;
    sbit  STEN_bit at OSCTUN.B15;
    const register unsigned short int STSIDL = 13;
    sbit  STSIDL_bit at OSCTUN.B13;
    const register unsigned short int STSRC = 12;
    sbit  STSRC_bit at OSCTUN.B12;
    const register unsigned short int STLOCK = 11;
    sbit  STLOCK_bit at OSCTUN.B11;
    const register unsigned short int STLPOL = 10;
    sbit  STLPOL_bit at OSCTUN.B10;
    const register unsigned short int STOR = 9;
    sbit  STOR_bit at OSCTUN.B9;
    const register unsigned short int STORPOL = 8;
    sbit  STORPOL_bit at OSCTUN.B8;
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

    // HLVDCON bits
    const register unsigned short int HLVDEN = 15;
    sbit  HLVDEN_bit at HLVDCON.B15;
    const register unsigned short int LSIDL = 13;
    sbit  LSIDL_bit at HLVDCON.B13;
    const register unsigned short int VDIR = 7;
    sbit  VDIR_bit at HLVDCON.B7;
    const register unsigned short int BGVST = 6;
    sbit  BGVST_bit at HLVDCON.B6;
    const register unsigned short int IRVST = 5;
    sbit  IRVST_bit at HLVDCON.B5;
    const register unsigned short int HLVDL_3 = 3;
    sbit  HLVDL_3_bit at HLVDCON.B3;
    const register unsigned short int HLVDL_2 = 2;
    sbit  HLVDL_2_bit at HLVDCON.B2;
    const register unsigned short int HLVDL_1 = 1;
    sbit  HLVDL_1_bit at HLVDCON.B1;
    const register unsigned short int HLVDL_0 = 0;
    sbit  HLVDL_0_bit at HLVDCON.B0;

    // DSCON bits
    const register unsigned short int DSEN = 15;
    sbit  DSEN_bit at DSCON.B15;
    const register unsigned short int WAKEDIS = 2;
    sbit  WAKEDIS_bit at DSCON.B2;
    const register unsigned short int DSBOR = 1;
    sbit  DSBOR_bit at DSCON.B1;
    sbit  DSBOR_DSCON_bit at DSCON.B1;
    const register unsigned short int RELEASE = 0;
    sbit  RELEASE_bit at DSCON.B0;

    // DSWAKE bits
    const register unsigned short int DSINT0 = 8;
    sbit  DSINT0_bit at DSWAKE.B8;
    const register unsigned short int DSFLT = 7;
    sbit  DSFLT_bit at DSWAKE.B7;
    sbit  DSBOR_DSWAKE_bit at DSWAKE.B6;
    const register unsigned short int DSEXT = 5;
    sbit  DSEXT_bit at DSWAKE.B5;
    const register unsigned short int DSWDT = 4;
    sbit  DSWDT_bit at DSWAKE.B4;
    const register unsigned short int DSRTCC = 3;
    sbit  DSRTCC_bit at DSWAKE.B3;
    const register unsigned short int DSMCLR = 2;
    sbit  DSMCLR_bit at DSWAKE.B2;
    const register unsigned short int DSICD = 1;
    sbit  DSICD_bit at DSWAKE.B1;
    const register unsigned short int DSPOR = 0;
    sbit  DSPOR_bit at DSWAKE.B0;

    // DSGPR0 bits
    const register unsigned short int DSGPR0_15 = 15;
    sbit  DSGPR0_15_bit at DSGPR0.B15;
    const register unsigned short int DSGPR0_14 = 14;
    sbit  DSGPR0_14_bit at DSGPR0.B14;
    const register unsigned short int DSGPR0_13 = 13;
    sbit  DSGPR0_13_bit at DSGPR0.B13;
    const register unsigned short int DSGPR0_12 = 12;
    sbit  DSGPR0_12_bit at DSGPR0.B12;
    const register unsigned short int DSGPR0_11 = 11;
    sbit  DSGPR0_11_bit at DSGPR0.B11;
    const register unsigned short int DSGPR0_10 = 10;
    sbit  DSGPR0_10_bit at DSGPR0.B10;
    const register unsigned short int DSGPR0_9 = 9;
    sbit  DSGPR0_9_bit at DSGPR0.B9;
    const register unsigned short int DSGPR0_8 = 8;
    sbit  DSGPR0_8_bit at DSGPR0.B8;
    const register unsigned short int DSGPR0_7 = 7;
    sbit  DSGPR0_7_bit at DSGPR0.B7;
    const register unsigned short int DSGPR0_6 = 6;
    sbit  DSGPR0_6_bit at DSGPR0.B6;
    const register unsigned short int DSGPR0_5 = 5;
    sbit  DSGPR0_5_bit at DSGPR0.B5;
    const register unsigned short int DSGPR0_4 = 4;
    sbit  DSGPR0_4_bit at DSGPR0.B4;
    const register unsigned short int DSGPR0_3 = 3;
    sbit  DSGPR0_3_bit at DSGPR0.B3;
    const register unsigned short int DSGPR0_2 = 2;
    sbit  DSGPR0_2_bit at DSGPR0.B2;
    const register unsigned short int DSGPR0_1 = 1;
    sbit  DSGPR0_1_bit at DSGPR0.B1;
    const register unsigned short int DSGPR0_0 = 0;
    sbit  DSGPR0_0_bit at DSGPR0.B0;

    // DSGPR1 bits
    const register unsigned short int DSGPR1_15 = 15;
    sbit  DSGPR1_15_bit at DSGPR1.B15;
    const register unsigned short int DSGPR1_14 = 14;
    sbit  DSGPR1_14_bit at DSGPR1.B14;
    const register unsigned short int DSGPR1_13 = 13;
    sbit  DSGPR1_13_bit at DSGPR1.B13;
    const register unsigned short int DSGPR1_12 = 12;
    sbit  DSGPR1_12_bit at DSGPR1.B12;
    const register unsigned short int DSGPR1_11 = 11;
    sbit  DSGPR1_11_bit at DSGPR1.B11;
    const register unsigned short int DSGPR1_10 = 10;
    sbit  DSGPR1_10_bit at DSGPR1.B10;
    const register unsigned short int DSGPR1_9 = 9;
    sbit  DSGPR1_9_bit at DSGPR1.B9;
    const register unsigned short int DSGPR1_8 = 8;
    sbit  DSGPR1_8_bit at DSGPR1.B8;
    const register unsigned short int DSGPR1_7 = 7;
    sbit  DSGPR1_7_bit at DSGPR1.B7;
    const register unsigned short int DSGPR1_6 = 6;
    sbit  DSGPR1_6_bit at DSGPR1.B6;
    const register unsigned short int DSGPR1_5 = 5;
    sbit  DSGPR1_5_bit at DSGPR1.B5;
    const register unsigned short int DSGPR1_4 = 4;
    sbit  DSGPR1_4_bit at DSGPR1.B4;
    const register unsigned short int DSGPR1_3 = 3;
    sbit  DSGPR1_3_bit at DSGPR1.B3;
    const register unsigned short int DSGPR1_2 = 2;
    sbit  DSGPR1_2_bit at DSGPR1.B2;
    const register unsigned short int DSGPR1_1 = 1;
    sbit  DSGPR1_1_bit at DSGPR1.B1;
    const register unsigned short int DSGPR1_0 = 0;
    sbit  DSGPR1_0_bit at DSGPR1.B0;

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

    // RCON2 bits
    const register unsigned short int VDDBOR = 3;
    sbit  VDDBOR_bit at RCON2.B3;
    const register unsigned short int VDDPOR = 2;
    sbit  VDDPOR_bit at RCON2.B2;
    const register unsigned short int VBPOR = 1;
    sbit  VBPOR_bit at RCON2.B1;
    const register unsigned short int VBAT = 0;
    sbit  VBAT_bit at RCON2.B0;

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
    const register unsigned short int DSMMD = 11;
    sbit  DSMMD_bit at PMD3.B11;
    const register unsigned short int CMPMD = 10;
    sbit  CMPMD_bit at PMD3.B10;
    const register unsigned short int RTCCMD = 9;
    sbit  RTCCMD_bit at PMD3.B9;
    const register unsigned short int PMPMD = 8;
    sbit  PMPMD_bit at PMD3.B8;
    const register unsigned short int CRCMD = 7;
    sbit  CRCMD_bit at PMD3.B7;
    const register unsigned short int DAC1MD = 6;
    sbit  DAC1MD_bit at PMD3.B6;
    const register unsigned short int U3MD = 3;
    sbit  U3MD_bit at PMD3.B3;
    const register unsigned short int I2C2MD = 1;
    sbit  I2C2MD_bit at PMD3.B1;

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
    const register unsigned short int LCDMD = 6;
    sbit  LCDMD_bit at PMD6.B6;
    const register unsigned short int AMP1MD = 5;
    sbit  AMP1MD_bit at PMD6.B5;
    const register unsigned short int DAC2MD = 4;
    sbit  DAC2MD_bit at PMD6.B4;
    const register unsigned short int AMP2MD = 3;
    sbit  AMP2MD_bit at PMD6.B3;
    const register unsigned short int SDADMD = 2;
    sbit  SDADMD_bit at PMD6.B2;

    // PMD7 bits
    const register unsigned short int DMA1MD = 5;
    sbit  DMA1MD_bit at PMD7.B5;
    const register unsigned short int DMA0MD = 4;
    sbit  DMA0MD_bit at PMD7.B4;

    // CTMUCON1 bits
    const register unsigned short int CTMUEN = 15;
    sbit  CTMUEN_bit at CTMUCON1.B15;
    const register unsigned short int CTMUSIDL = 13;
    sbit  CTMUSIDL_bit at CTMUCON1.B13;
    const register unsigned short int TGEN = 12;
    sbit  TGEN_bit at CTMUCON1.B12;
    const register unsigned short int EDGEN = 11;
    sbit  EDGEN_bit at CTMUCON1.B11;
    const register unsigned short int EDGSEQEN = 10;
    sbit  EDGSEQEN_bit at CTMUCON1.B10;
    const register unsigned short int IDISSEN = 9;
    sbit  IDISSEN_bit at CTMUCON1.B9;
    const register unsigned short int CTTRIG = 8;
    sbit  CTTRIG_bit at CTMUCON1.B8;

    // CTMUCON2 bits
    const register unsigned short int EDG1MOD = 15;
    sbit  EDG1MOD_bit at CTMUCON2.B15;
    const register unsigned short int EDG1POL = 14;
    sbit  EDG1POL_bit at CTMUCON2.B14;
    const register unsigned short int EDG1SEL_3 = 13;
    sbit  EDG1SEL_3_bit at CTMUCON2.B13;
    const register unsigned short int EDG1SEL_2 = 12;
    sbit  EDG1SEL_2_bit at CTMUCON2.B12;
    const register unsigned short int EDG1SEL_1 = 11;
    sbit  EDG1SEL_1_bit at CTMUCON2.B11;
    const register unsigned short int EDG1SEL_0 = 10;
    sbit  EDG1SEL_0_bit at CTMUCON2.B10;
    const register unsigned short int EDG2STAT = 9;
    sbit  EDG2STAT_bit at CTMUCON2.B9;
    const register unsigned short int EDG1STAT = 8;
    sbit  EDG1STAT_bit at CTMUCON2.B8;
    const register unsigned short int EDG2MOD = 7;
    sbit  EDG2MOD_bit at CTMUCON2.B7;
    const register unsigned short int EDG2POL = 6;
    sbit  EDG2POL_bit at CTMUCON2.B6;
    const register unsigned short int EDG2SEL_3 = 5;
    sbit  EDG2SEL_3_bit at CTMUCON2.B5;
    const register unsigned short int EDG2SEL_2 = 4;
    sbit  EDG2SEL_2_bit at CTMUCON2.B4;
    const register unsigned short int EDG2SEL_1 = 3;
    sbit  EDG2SEL_1_bit at CTMUCON2.B3;
    const register unsigned short int EDG2SEL_0 = 2;
    sbit  EDG2SEL_0_bit at CTMUCON2.B2;

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

    // Start of structures implementation for backward compatibility

// backward compatibility for DSRPAGBITS
    typedef struct tagDSRPAGBITS {
      unsigned DSRPAG:10;
} typeDSRPAGBITS;
sfr volatile typeDSRPAGBITS DSRPAGbits absolute 0x032;

// backward compatibility for DSWPAGBITS
    typedef struct tagDSWPAGBITS {
      unsigned DSWPAG:9;
} typeDSWPAGBITS;
sfr volatile typeDSWPAGBITS DSWPAGbits absolute 0x034;

// backward compatibility for SRBITS
    typedef struct tagSRBITS {
      union {
        struct {
          unsigned C:1;
          unsigned Z:1;
          unsigned OV:1;
          unsigned N:1;
          unsigned RA:1;
          unsigned IPL0:1;
          unsigned IPL1:1;
          unsigned IPL2:1;
          unsigned DC:1;
        };
        struct {
          unsigned :5;
          unsigned IPL:3;
        };
      };
} typeSRBITS;
sfr volatile typeSRBITS SRbits absolute 0x042;

// backward compatibility for CORCONBITS
    typedef struct tagCORCONBITS {
      unsigned :3;
      unsigned IPL3:1;
} typeCORCONBITS;
sfr volatile typeCORCONBITS CORCONbits absolute 0x044;

// backward compatibility for DISICNTBITS
    typedef struct tagDISICNTBITS {
      unsigned DISICNT:14;
} typeDISICNTBITS;
sfr volatile typeDISICNTBITS DISICNTbits absolute 0x052;

// backward compatibility for TBLPAGBITS
    typedef struct tagTBLPAGBITS {
      unsigned TBLPAG:8;
} typeTBLPAGBITS;
sfr volatile typeTBLPAGBITS TBLPAGbits absolute 0x054;

// backward compatibility for CNPD1BITS
    typedef struct tagCNPD1BITS {
      unsigned :2;
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
sfr volatile typeCNPD1BITS CNPD1bits absolute 0x056;

// backward compatibility for CNPD2BITS
    typedef struct tagCNPD2BITS {
      unsigned CN16PDE:1;
      unsigned CN17PDE:1;
      unsigned CN18PDE:1;
      unsigned :3;
      unsigned CN22PDE:1;
      unsigned CN23PDE:1;
      unsigned CN24PDE:1;
      unsigned CN25PDE:1;
      unsigned :4;
      unsigned CN30PDE:1;
      unsigned CN31PDE:1;
} typeCNPD2BITS;
sfr volatile typeCNPD2BITS CNPD2bits absolute 0x058;

// backward compatibility for CNPD3BITS
    typedef struct tagCNPD3BITS {
      unsigned CN32PDE:1;
} typeCNPD3BITS;
sfr volatile typeCNPD3BITS CNPD3bits absolute 0x05A;

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
      unsigned :1;
      unsigned CN58PDE:1;
      unsigned CN59PDE:1;
      unsigned CN60PDE:1;
      unsigned CN61PDE:1;
      unsigned CN62PDE:1;
      unsigned CN63PDE:1;
} typeCNPD4BITS;
sfr volatile typeCNPD4BITS CNPD4bits absolute 0x05C;

// backward compatibility for CNPD5BITS
    typedef struct tagCNPD5BITS {
      unsigned CN64PDE:1;
      unsigned CN65PDE:1;
      unsigned :2;
      unsigned CN68PDE:1;
      unsigned CN69PDE:1;
      unsigned :1;
      unsigned CN71PDE:1;
      unsigned CN72PDE:1;
      unsigned CN73PDE:1;
} typeCNPD5BITS;
sfr volatile typeCNPD5BITS CNPD5bits absolute 0x05E;

// backward compatibility for CNPD6BITS
    typedef struct tagCNPD6BITS {
      unsigned :3;
      unsigned CN83PDE:1;
} typeCNPD6BITS;
sfr volatile typeCNPD6BITS CNPD6bits absolute 0x060;

// backward compatibility for CNEN1BITS
    typedef struct tagCNEN1BITS {
      unsigned :2;
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
sfr volatile typeCNEN1BITS CNEN1bits absolute 0x062;

// backward compatibility for CNEN2BITS
    typedef struct tagCNEN2BITS {
      unsigned CN16IE:1;
      unsigned CN17IE:1;
      unsigned CN18IE:1;
      unsigned :3;
      unsigned CN22IE:1;
      unsigned CN23IE:1;
      unsigned CN24IE:1;
      unsigned CN25IE:1;
      unsigned :4;
      unsigned CN30IE:1;
      unsigned CN31IE:1;
} typeCNEN2BITS;
sfr volatile typeCNEN2BITS CNEN2bits absolute 0x064;

// backward compatibility for CNEN3BITS
    typedef struct tagCNEN3BITS {
      unsigned CN32IE:1;
} typeCNEN3BITS;
sfr volatile typeCNEN3BITS CNEN3bits absolute 0x066;

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
      unsigned :1;
      unsigned CN58IE:1;
      unsigned CN59IE:1;
      unsigned CN60IE:1;
      unsigned CN61IE:1;
      unsigned CN62IE:1;
      unsigned CN63IE:1;
} typeCNEN4BITS;
sfr volatile typeCNEN4BITS CNEN4bits absolute 0x068;

// backward compatibility for CNEN5BITS
    typedef struct tagCNEN5BITS {
      unsigned CN64IE:1;
      unsigned CN65IE:1;
      unsigned :2;
      unsigned CN68IE:1;
      unsigned CN69IE:1;
      unsigned :1;
      unsigned CN71IE:1;
      unsigned CN72IE:1;
      unsigned CN73IE:1;
} typeCNEN5BITS;
sfr volatile typeCNEN5BITS CNEN5bits absolute 0x06A;

// backward compatibility for CNEN6BITS
    typedef struct tagCNEN6BITS {
      unsigned :3;
      unsigned CN83IE:1;
} typeCNEN6BITS;
sfr volatile typeCNEN6BITS CNEN6bits absolute 0x06C;

// backward compatibility for CNPU1BITS
    typedef struct tagCNPU1BITS {
      unsigned :2;
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
sfr volatile typeCNPU1BITS CNPU1bits absolute 0x06E;

// backward compatibility for CNPU2BITS
    typedef struct tagCNPU2BITS {
      unsigned CN16PUE:1;
      unsigned CN17PUE:1;
      unsigned CN18PUE:1;
      unsigned :3;
      unsigned CN22PUE:1;
      unsigned CN23PUE:1;
      unsigned CN24PUE:1;
      unsigned CN25PUE:1;
      unsigned :4;
      unsigned CN30PUE:1;
      unsigned CN31PUE:1;
} typeCNPU2BITS;
sfr volatile typeCNPU2BITS CNPU2bits absolute 0x070;

// backward compatibility for CNPU3BITS
    typedef struct tagCNPU3BITS {
      unsigned CN32PUE:1;
} typeCNPU3BITS;
sfr volatile typeCNPU3BITS CNPU3bits absolute 0x072;

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
      unsigned :1;
      unsigned CN58PUE:1;
      unsigned CN59PUE:1;
      unsigned CN60PUE:1;
      unsigned CN61PUE:1;
      unsigned CN62PUE:1;
      unsigned CN63PUE:1;
} typeCNPU4BITS;
sfr volatile typeCNPU4BITS CNPU4bits absolute 0x074;

// backward compatibility for CNPU5BITS
    typedef struct tagCNPU5BITS {
      unsigned CN64PUE:1;
      unsigned CN65PUE:1;
      unsigned :2;
      unsigned CN68PUE:1;
      unsigned CN69PUE:1;
      unsigned :1;
      unsigned CN71PUE:1;
      unsigned CN72PUE:1;
      unsigned CN73PUE:1;
} typeCNPU5BITS;
sfr volatile typeCNPU5BITS CNPU5bits absolute 0x076;

// backward compatibility for CNPU6BITS
    typedef struct tagCNPU6BITS {
      unsigned :3;
      unsigned CN83PUE:1;
} typeCNPU6BITS;
sfr volatile typeCNPU6BITS CNPU6bits absolute 0x078;

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
      unsigned DMA0IF:1;
      unsigned IC2IF:1;
      unsigned OC2IF:1;
      unsigned T2IF:1;
      unsigned T3IF:1;
      unsigned SPF1IF:1;
      unsigned SPI1IF:1;
      unsigned U1RXIF:1;
      unsigned U1TXIF:1;
      unsigned AD1IF:1;
      unsigned DMA1IF:1;
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
      unsigned DMA2IF:1;
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
      unsigned :2;
      unsigned DMA3IF:1;
      unsigned IC3IF:1;
      unsigned IC4IF:1;
      unsigned IC5IF:1;
      unsigned IC6IF:1;
      unsigned OC5IF:1;
      unsigned OC6IF:1;
      unsigned OC7IF:1;
      unsigned OC8IF:1;
      unsigned PMPIF:1;
      unsigned DMA4IF:1;
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
      unsigned :6;
      unsigned DMA5IF:1;
      unsigned RTCIF:1;
} typeIFS3BITS;
sfr volatile typeIFS3BITS IFS3bits absolute 0x08A;

// backward compatibility for IFS4BITS
    typedef struct tagIFS4BITS {
      union {
        struct {
          unsigned :1;
          unsigned U1ERIF:1;
          unsigned U2ERIF:1;
          unsigned CRCIF:1;
          unsigned :4;
          unsigned LVDIF:1;
          unsigned :4;
          unsigned CTMUIF:1;
          unsigned DAC1IF:1;
          unsigned DAC2IF:1;
        };
        struct {
          unsigned :8;
          unsigned HLVDIF:1;
        };
      };
} typeIFS4BITS;
sfr volatile typeIFS4BITS IFS4bits absolute 0x08C;

// backward compatibility for IFS5BITS
    typedef struct tagIFS5BITS {
      unsigned :1;
      unsigned U3ERIF:1;
      unsigned U3RXIF:1;
      unsigned U3TXIF:1;
      unsigned :2;
      unsigned USB1IF:1;
      unsigned U4ERIF:1;
      unsigned U4RXIF:1;
      unsigned U4TXIF:1;
      unsigned :2;
      unsigned OC9IF:1;
      unsigned IC9IF:1;
} typeIFS5BITS;
sfr volatile typeIFS5BITS IFS5bits absolute 0x08E;

// backward compatibility for IFS6BITS
    typedef struct tagIFS6BITS {
      unsigned :4;
      unsigned LCDIF:1;
      unsigned :2;
      unsigned AMP1IF:1;
      unsigned AMP2IF:1;
      unsigned SDA1IF:1;
      unsigned FSTIF:1;
} typeIFS6BITS;
sfr volatile typeIFS6BITS IFS6bits absolute 0x090;

// backward compatibility for IFS7BITS
    typedef struct tagIFS7BITS {
      unsigned :5;
      unsigned JTAGIF:1;
} typeIFS7BITS;
sfr volatile typeIFS7BITS IFS7bits absolute 0x092;

// backward compatibility for IEC0BITS
    typedef struct tagIEC0BITS {
      unsigned INT0IE:1;
      unsigned IC1IE:1;
      unsigned OC1IE:1;
      unsigned T1IE:1;
      unsigned DMA0IE:1;
      unsigned IC2IE:1;
      unsigned OC2IE:1;
      unsigned T2IE:1;
      unsigned T3IE:1;
      unsigned SPF1IE:1;
      unsigned SPI1IE:1;
      unsigned U1RXIE:1;
      unsigned U1TXIE:1;
      unsigned AD1IE:1;
      unsigned DMA1IE:1;
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
      unsigned DMA2IE:1;
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
      unsigned :2;
      unsigned DMA3IE:1;
      unsigned IC3IE:1;
      unsigned IC4IE:1;
      unsigned IC5IE:1;
      unsigned IC6IE:1;
      unsigned OC5IE:1;
      unsigned OC6IE:1;
      unsigned OC7IE:1;
      unsigned OC8IE:1;
      unsigned PMPIE:1;
      unsigned DMA4IE:1;
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
      unsigned :6;
      unsigned DMA5IE:1;
      unsigned RTCIE:1;
} typeIEC3BITS;
sfr volatile typeIEC3BITS IEC3bits absolute 0x09A;

// backward compatibility for IEC4BITS
    typedef struct tagIEC4BITS {
      union {
        struct {
          unsigned :1;
          unsigned U1ERIE:1;
          unsigned U2ERIE:1;
          unsigned CRCIE:1;
          unsigned :4;
          unsigned LVDIE:1;
          unsigned :4;
          unsigned CTMUIE:1;
          unsigned DAC1IE:1;
          unsigned DAC2IE:1;
        };
        struct {
          unsigned :8;
          unsigned HLVDIE:1;
        };
      };
} typeIEC4BITS;
sfr volatile typeIEC4BITS IEC4bits absolute 0x09C;

// backward compatibility for IEC5BITS
    typedef struct tagIEC5BITS {
      unsigned :1;
      unsigned U3ERIE:1;
      unsigned U3RXIE:1;
      unsigned U3TXIE:1;
      unsigned :2;
      unsigned USB1IE:1;
      unsigned U4ERIE:1;
      unsigned U4RXIE:1;
      unsigned U4TXIE:1;
      unsigned :2;
      unsigned OC9IE:1;
      unsigned IC9IE:1;
} typeIEC5BITS;
sfr volatile typeIEC5BITS IEC5bits absolute 0x09E;

// backward compatibility for IEC6BITS
    typedef struct tagIEC6BITS {
      unsigned :4;
      unsigned LCDIE:1;
      unsigned :2;
      unsigned AMP1IE:1;
      unsigned AMP2IE:1;
      unsigned SDA1IE:1;
      unsigned FSTIE:1;
} typeIEC6BITS;
sfr volatile typeIEC6BITS IEC6bits absolute 0x0A0;

// backward compatibility for IEC7BITS
    typedef struct tagIEC7BITS {
      unsigned :5;
      unsigned JTAGIE:1;
} typeIEC7BITS;
sfr volatile typeIEC7BITS IEC7bits absolute 0x0A2;

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
          unsigned DMA0IP:3;
          unsigned :1;
          unsigned IC2IP:3;
          unsigned :1;
          unsigned OC2IP:3;
          unsigned :1;
          unsigned T2IP:3;
        };
        struct {
          unsigned DMA0IP0:1;
          unsigned DMA0IP1:1;
          unsigned DMA0IP2:1;
          unsigned :1;
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
          unsigned :1;
          unsigned DMA1IP:3;
        };
        struct {
          unsigned U1TXIP0:1;
          unsigned U1TXIP1:1;
          unsigned U1TXIP2:1;
          unsigned :1;
          unsigned AD1IP0:1;
          unsigned AD1IP1:1;
          unsigned AD1IP2:1;
          unsigned :1;
          unsigned DMA1IP0:1;
          unsigned DMA1IP1:1;
          unsigned DMA1IP2:1;
        };
      };
} typeIPC3BITS;
sfr volatile typeIPC3BITS IPC3bits absolute 0x0AA;

// backward compatibility for IPC4BITS
    typedef struct tagIPC4BITS {
      union {
        struct {
          unsigned SI2C1IP:3;
          unsigned :1;
          unsigned MI2C1IP:3;
          unsigned :1;
          unsigned CMIP:3;
          unsigned :1;
          unsigned CNIP:3;
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
          unsigned SI2C1P:3;
          unsigned :1;
          unsigned MI2C1P:3;
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
          unsigned DMA2IP:3;
          unsigned :1;
          unsigned OC3IP:3;
          unsigned :1;
          unsigned OC4IP:3;
          unsigned :1;
          unsigned T4IP:3;
        };
        struct {
          unsigned DMA2IP0:1;
          unsigned DMA2IP1:1;
          unsigned DMA2IP2:1;
          unsigned :1;
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
          unsigned DMA3IP:3;
          unsigned :1;
          unsigned IC3IP:3;
          unsigned :1;
          unsigned IC4IP:3;
          unsigned :1;
          unsigned IC5IP:3;
        };
        struct {
          unsigned DMA3IP0:1;
          unsigned DMA3IP1:1;
          unsigned DMA3IP2:1;
          unsigned :1;
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
          unsigned :1;
          unsigned DMA4IP:3;
        };
        struct {
          unsigned OC8IP0:1;
          unsigned OC8IP1:1;
          unsigned OC8IP2:1;
          unsigned :1;
          unsigned PMPIP0:1;
          unsigned PMPIP1:1;
          unsigned PMPIP2:1;
          unsigned :1;
          unsigned DMA4IP0:1;
          unsigned DMA4IP1:1;
          unsigned DMA4IP2:1;
        };
      };
} typeIPC11BITS;
sfr volatile typeIPC11BITS IPC11bits absolute 0x0BA;

// backward compatibility for IPC12BITS
    typedef struct tagIPC12BITS {
      union {
        struct {
          unsigned :4;
          unsigned SI2C2IP:3;
          unsigned :1;
          unsigned MI2C2IP:3;
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
          unsigned SI2C2P:3;
          unsigned :1;
          unsigned MI2C2P:3;
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
          unsigned :4;
          unsigned DMA5IP:3;
          unsigned :1;
          unsigned RTCIP:3;
        };
        struct {
          unsigned :4;
          unsigned DMA5IP0:1;
          unsigned DMA5IP1:1;
          unsigned DMA5IP2:1;
          unsigned :1;
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
        struct {
          unsigned HLVDIP0:1;
          unsigned HLVDIP1:1;
          unsigned HLVDIP2:1;
        };
        struct {
          unsigned HLVDIP:3;
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
          unsigned :1;
          unsigned DAC1IP:3;
          unsigned :1;
          unsigned DAC2IP:3;
        };
        struct {
          unsigned :4;
          unsigned CTMUIP0:1;
          unsigned CTMUIP1:1;
          unsigned CTMUIP2:1;
          unsigned :1;
          unsigned DAC1IP0:1;
          unsigned DAC1IP1:1;
          unsigned DAC1IP2:1;
          unsigned :1;
          unsigned DAC2IP0:1;
          unsigned DAC2IP1:1;
          unsigned DAC2IP2:1;
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
          unsigned :8;
          unsigned USB1IP:3;
          unsigned :1;
          unsigned U4ERIP:3;
        };
        struct {
          unsigned :8;
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
        };
        struct {
          unsigned U4RXIP0:1;
          unsigned U4RXIP1:1;
          unsigned U4RXIP2:1;
          unsigned :1;
          unsigned U4TXIP0:1;
          unsigned U4TXIP1:1;
          unsigned U4TXIP2:1;
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

// backward compatibility for IPC25BITS
    typedef struct tagIPC25BITS {
      union {
        struct {
          unsigned LCDIP:3;
          unsigned :9;
          unsigned AMP1IP:3;
        };
        struct {
          unsigned LCDIP0:1;
          unsigned LCDIP1:1;
          unsigned LCDIP2:1;
          unsigned :9;
          unsigned AMP1IP0:1;
          unsigned AMP1IP1:1;
          unsigned AMP1IP2:1;
        };
      };
} typeIPC25BITS;
sfr volatile typeIPC25BITS IPC25bits absolute 0x0D6;

// backward compatibility for IPC26BITS
    typedef struct tagIPC26BITS {
      union {
        struct {
          unsigned AMP2IP:3;
          unsigned :1;
          unsigned SDA1IP:3;
          unsigned :1;
          unsigned FSTIP:3;
        };
        struct {
          unsigned AMP2IP0:1;
          unsigned AMP2IP1:1;
          unsigned AMP2IP2:1;
          unsigned :1;
          unsigned SDA1IP0:1;
          unsigned SDA1IP1:1;
          unsigned SDA1IP2:1;
          unsigned :1;
          unsigned FSTIP0:1;
          unsigned FSTIP1:1;
          unsigned FSTIP2:1;
        };
      };
} typeIPC26BITS;
sfr volatile typeIPC26BITS IPC26bits absolute 0x0D8;

// backward compatibility for IPC29BITS
    typedef struct tagIPC29BITS {
      union {
        struct {
          unsigned :4;
          unsigned JTAGIP:3;
        };
        struct {
          unsigned :4;
          unsigned JTAGIP0:1;
          unsigned JTAGIP1:1;
          unsigned JTAGIP2:1;
        };
      };
} typeIPC29BITS;
sfr volatile typeIPC29BITS IPC29bits absolute 0x0DE;

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
          unsigned :1;
          unsigned TECS:2;
          unsigned :3;
          unsigned TSIDL:1;
          unsigned :1;
          unsigned TON:1;
        };
        struct {
          unsigned :4;
          unsigned TCKPS0:1;
          unsigned TCKPS1:1;
          unsigned :2;
          unsigned T1ECS0:1;
          unsigned T1ECS1:1;
        };
        struct {
          unsigned :8;
          unsigned T1ECS:2;
        };
        struct {
          unsigned :8;
          unsigned TECS0:1;
          unsigned TECS1:1;
        };
        struct {
          unsigned :8;
          unsigned TIECS:2;
        };
        struct {
          unsigned :8;
          unsigned TIECS0:1;
          unsigned TIECS1:1;
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
          unsigned :1;
          unsigned TECS:2;
          unsigned :3;
          unsigned TSIDL:1;
          unsigned :1;
          unsigned TON:1;
        };
        struct {
          unsigned :4;
          unsigned TCKPS0:1;
          unsigned TCKPS1:1;
          unsigned :2;
          unsigned TECS0:1;
          unsigned TECS1:1;
        };
        struct {
          unsigned :8;
          unsigned TIECS:2;
        };
        struct {
          unsigned :8;
          unsigned TIECS0:1;
          unsigned TIECS1:1;
        };
        struct {
          unsigned :3;
          unsigned T45:1;
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
          unsigned :1;
          unsigned TECS:2;
          unsigned :3;
          unsigned TSIDL:1;
          unsigned :1;
          unsigned TON:1;
        };
        struct {
          unsigned :4;
          unsigned TCKPS0:1;
          unsigned TCKPS1:1;
          unsigned :2;
          unsigned TECS0:1;
          unsigned TECS1:1;
        };
        struct {
          unsigned :8;
          unsigned TIECS:2;
        };
        struct {
          unsigned :8;
          unsigned TIECS0:1;
          unsigned TIECS1:1;
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
          unsigned :1;
          unsigned TECS:2;
          unsigned :3;
          unsigned TSIDL:1;
          unsigned :1;
          unsigned TON:1;
        };
        struct {
          unsigned :4;
          unsigned TCKPS0:1;
          unsigned TCKPS1:1;
          unsigned :2;
          unsigned TECS0:1;
          unsigned TECS1:1;
        };
        struct {
          unsigned :8;
          unsigned TIECS:2;
        };
        struct {
          unsigned :8;
          unsigned TIECS0:1;
          unsigned TIECS1:1;
        };
        struct {
          unsigned :3;
          unsigned T45:1;
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
          unsigned :1;
          unsigned TECS:2;
          unsigned :3;
          unsigned TSIDL:1;
          unsigned :1;
          unsigned TON:1;
        };
        struct {
          unsigned :4;
          unsigned TCKPS0:1;
          unsigned TCKPS1:1;
          unsigned :2;
          unsigned TECS0:1;
          unsigned TECS1:1;
        };
        struct {
          unsigned :8;
          unsigned TIECS:2;
        };
        struct {
          unsigned :8;
          unsigned TIECS0:1;
          unsigned TIECS1:1;
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
          unsigned OCFLTA:1;
          unsigned OCFLTB:1;
          unsigned OCFLTC:1;
          unsigned ENFLTA:1;
          unsigned ENFLTB:1;
          unsigned ENFLTC:1;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:3;
          unsigned ENFLT:3;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
        struct {
          unsigned :4;
          unsigned OCFLT0:1;
          unsigned OCFLT1:1;
          unsigned OCFLT2:1;
          unsigned ENFLT0:1;
          unsigned ENFLT1:1;
          unsigned ENFLT2:1;
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
          unsigned :3;
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
          unsigned OCFLTA:1;
          unsigned OCFLTB:1;
          unsigned OCFLTC:1;
          unsigned ENFLTA:1;
          unsigned ENFLTB:1;
          unsigned ENFLTC:1;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:3;
          unsigned ENFLT:3;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
        struct {
          unsigned :4;
          unsigned OCFLT0:1;
          unsigned OCFLT1:1;
          unsigned OCFLT2:1;
          unsigned ENFLT0:1;
          unsigned ENFLT1:1;
          unsigned ENFLT2:1;
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
          unsigned :3;
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
          unsigned OCFLTA:1;
          unsigned OCFLTB:1;
          unsigned OCFLTC:1;
          unsigned ENFLTA:1;
          unsigned ENFLTB:1;
          unsigned ENFLTC:1;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:3;
          unsigned ENFLT:3;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
        struct {
          unsigned :4;
          unsigned OCFLT0:1;
          unsigned OCFLT1:1;
          unsigned OCFLT2:1;
          unsigned ENFLT0:1;
          unsigned ENFLT1:1;
          unsigned ENFLT2:1;
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
          unsigned :3;
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
          unsigned OCFLTA:1;
          unsigned OCFLTB:1;
          unsigned OCFLTC:1;
          unsigned ENFLTA:1;
          unsigned ENFLTB:1;
          unsigned ENFLTC:1;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:3;
          unsigned ENFLT:3;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
        struct {
          unsigned :4;
          unsigned OCFLT0:1;
          unsigned OCFLT1:1;
          unsigned OCFLT2:1;
          unsigned ENFLT0:1;
          unsigned ENFLT1:1;
          unsigned ENFLT2:1;
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
          unsigned :3;
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
          unsigned OCFLTA:1;
          unsigned OCFLTB:1;
          unsigned OCFLTC:1;
          unsigned ENFLTA:1;
          unsigned ENFLTB:1;
          unsigned ENFLTC:1;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:3;
          unsigned ENFLT:3;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
        struct {
          unsigned :4;
          unsigned OCFLT0:1;
          unsigned OCFLT1:1;
          unsigned OCFLT2:1;
          unsigned ENFLT0:1;
          unsigned ENFLT1:1;
          unsigned ENFLT2:1;
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
          unsigned :3;
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
          unsigned OCFLTA:1;
          unsigned OCFLTB:1;
          unsigned OCFLTC:1;
          unsigned ENFLTA:1;
          unsigned ENFLTB:1;
          unsigned ENFLTC:1;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:3;
          unsigned ENFLT:3;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
        struct {
          unsigned :4;
          unsigned OCFLT0:1;
          unsigned OCFLT1:1;
          unsigned OCFLT2:1;
          unsigned ENFLT0:1;
          unsigned ENFLT1:1;
          unsigned ENFLT2:1;
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
          unsigned :3;
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
          unsigned OCFLTA:1;
          unsigned OCFLTB:1;
          unsigned OCFLTC:1;
          unsigned ENFLTA:1;
          unsigned ENFLTB:1;
          unsigned ENFLTC:1;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:3;
          unsigned ENFLT:3;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
        struct {
          unsigned :4;
          unsigned OCFLT0:1;
          unsigned OCFLT1:1;
          unsigned OCFLT2:1;
          unsigned ENFLT0:1;
          unsigned ENFLT1:1;
          unsigned ENFLT2:1;
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
          unsigned :3;
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
          unsigned OCFLTA:1;
          unsigned OCFLTB:1;
          unsigned OCFLTC:1;
          unsigned ENFLTA:1;
          unsigned ENFLTB:1;
          unsigned ENFLTC:1;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:3;
          unsigned ENFLT:3;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
        struct {
          unsigned :4;
          unsigned OCFLT0:1;
          unsigned OCFLT1:1;
          unsigned OCFLT2:1;
          unsigned ENFLT0:1;
          unsigned ENFLT1:1;
          unsigned ENFLT2:1;
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
          unsigned :3;
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
          unsigned OCFLTA:1;
          unsigned OCFLTB:1;
          unsigned OCFLTC:1;
          unsigned ENFLTA:1;
          unsigned ENFLTB:1;
          unsigned ENFLTC:1;
          unsigned OCTSEL:3;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
          unsigned :1;
          unsigned OCFLT:3;
          unsigned ENFLT:3;
          unsigned OCTSEL0:1;
          unsigned OCTSEL1:1;
          unsigned OCTSEL2:1;
        };
        struct {
          unsigned :4;
          unsigned OCFLT0:1;
          unsigned OCFLT1:1;
          unsigned OCFLT2:1;
          unsigned ENFLT0:1;
          unsigned ENFLT1:1;
          unsigned ENFLT2:1;
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
          unsigned :3;
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
        struct {
          unsigned :5;
          unsigned DAC:1;
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
        struct {
          unsigned :5;
          unsigned DAC:1;
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
          unsigned URXINV:1;
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
          unsigned :1;
          unsigned RXINV:1;
          unsigned :3;
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
          unsigned :6;
          unsigned TXINV:1;
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
          unsigned URXINV:1;
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
          unsigned :1;
          unsigned RXINV:1;
          unsigned :3;
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
          unsigned :6;
          unsigned TXINV:1;
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
      union {
        struct {
          unsigned SPIBEN:1;
          unsigned SPIFE:1;
          unsigned :11;
          unsigned SPIFPOL:1;
          unsigned SPIFSD:1;
          unsigned FRMEN:1;
        };
        struct {
          unsigned :1;
          unsigned FRMDLY:1;
          unsigned :11;
          unsigned FRMPOL:1;
        };
      };
} typeSPI1CON2BITS;
sfr volatile typeSPI1CON2BITS SPI1CON2bits absolute 0x244;

// backward compatibility for AMP1CONBITS
    typedef struct tagAMP1CONBITS {
      union {
        struct {
          unsigned PINSEL:3;
          unsigned NINSEL:3;
          unsigned AMPOE:1;
          unsigned SPDSEL:1;
          unsigned CMPSEL:1;
          unsigned CMOUT:1;
          unsigned INTPOL:2;
          unsigned AMPSLP:1;
          unsigned AMPSIDL:1;
          unsigned :1;
          unsigned AMPEN:1;
        };
        struct {
          unsigned PINSEL0:1;
          unsigned PINSEL1:1;
          unsigned PINSEL2:1;
          unsigned NINSEL0:1;
          unsigned NINSEL1:1;
          unsigned NINSEL2:1;
          unsigned :4;
          unsigned INTPOL0:1;
          unsigned INTPOL1:1;
        };
      };
} typeAMP1CONBITS;
sfr volatile typeAMP1CONBITS AMP1CONbits absolute 0x24A;

// backward compatibility for AMP2CONBITS
    typedef struct tagAMP2CONBITS {
      union {
        struct {
          unsigned PINSEL:3;
          unsigned NINSEL:3;
          unsigned AMPOE:1;
          unsigned SPDSEL:1;
          unsigned CMPSEL:1;
          unsigned CMOUT:1;
          unsigned INTPOL:2;
          unsigned AMPSLP:1;
          unsigned AMPSIDL:1;
          unsigned :1;
          unsigned AMPEN:1;
        };
        struct {
          unsigned PINSEL0:1;
          unsigned PINSEL1:1;
          unsigned PINSEL2:1;
          unsigned NINSEL0:1;
          unsigned NINSEL1:1;
          unsigned NINSEL2:1;
          unsigned :4;
          unsigned INTPOL0:1;
          unsigned INTPOL1:1;
        };
      };
} typeAMP2CONBITS;
sfr volatile typeAMP2CONBITS AMP2CONbits absolute 0x24C;

// backward compatibility for U3MODEBITS
    typedef struct tagU3MODEBITS {
      union {
        struct {
          unsigned STSEL:1;
          unsigned PDSEL:2;
          unsigned BRGH:1;
          unsigned URXINV:1;
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
          unsigned :1;
          unsigned RXINV:1;
          unsigned :3;
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
          unsigned :6;
          unsigned TXINV:1;
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
      union {
        struct {
          unsigned SPIBEN:1;
          unsigned SPIFE:1;
          unsigned :11;
          unsigned SPIFPOL:1;
          unsigned SPIFSD:1;
          unsigned FRMEN:1;
        };
        struct {
          unsigned :1;
          unsigned FRMDLY:1;
          unsigned :11;
          unsigned FRMPOL:1;
        };
      };
} typeSPI2CON2BITS;
sfr volatile typeSPI2CON2BITS SPI2CON2bits absolute 0x264;

// backward compatibility for U4MODEBITS
    typedef struct tagU4MODEBITS {
      union {
        struct {
          unsigned STSEL:1;
          unsigned PDSEL:2;
          unsigned BRGH:1;
          unsigned URXINV:1;
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
          unsigned :1;
          unsigned RXINV:1;
          unsigned :3;
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
          unsigned :6;
          unsigned TXINV:1;
        };
      };
} typeU4STABITS;
sfr volatile typeU4STABITS U4STAbits absolute 0x2B2;

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
      unsigned :4;
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
      unsigned :4;
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
      unsigned :4;
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
      unsigned :4;
      unsigned ODB12:1;
      unsigned ODB13:1;
      unsigned ODB14:1;
      unsigned ODB15:1;
} typeODCBBITS;
sfr volatile typeODCBBITS ODCBbits absolute 0x2CE;

// backward compatibility for TRISCBITS
    typedef struct tagTRISCBITS {
      unsigned :12;
      unsigned TRISC12:1;
      unsigned :2;
      unsigned TRISC15:1;
} typeTRISCBITS;
sfr volatile typeTRISCBITS TRISCbits absolute 0x2D0;

// backward compatibility for PORTCBITS
    typedef struct tagPORTCBITS {
      unsigned :12;
      unsigned RC12:1;
      unsigned RC13:1;
      unsigned RC14:1;
      unsigned RC15:1;
} typePORTCBITS;
sfr volatile typePORTCBITS PORTCbits absolute 0x2D2;

// backward compatibility for LATCBITS
    typedef struct tagLATCBITS {
      unsigned :12;
      unsigned LATC12:1;
      unsigned LATC13:1;
      unsigned LATC14:1;
      unsigned LATC15:1;
} typeLATCBITS;
sfr volatile typeLATCBITS LATCbits absolute 0x2D4;

// backward compatibility for ODCCBITS
    typedef struct tagODCCBITS {
      unsigned :12;
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
      unsigned TRISF6:1;
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
      unsigned RF6:1;
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
      unsigned LATF6:1;
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
      unsigned ODF6:1;
} typeODCFBITS;
sfr volatile typeODCFBITS ODCFbits absolute 0x2EE;

// backward compatibility for TRISGBITS
    typedef struct tagTRISGBITS {
      unsigned :2;
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
      unsigned :2;
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
      unsigned :2;
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
      unsigned :2;
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
      unsigned PMPTTL:1;
} typePADCFG1BITS;
sfr volatile typePADCFG1BITS PADCFG1bits absolute 0x2FC;

// backward compatibility for ADTBL0BITS
    typedef struct tagADTBL0BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL0BITS;
sfr volatile typeADTBL0BITS ADTBL0bits absolute 0x300;

// backward compatibility for ADTBL1BITS
    typedef struct tagADTBL1BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL1BITS;
sfr volatile typeADTBL1BITS ADTBL1bits absolute 0x302;

// backward compatibility for ADTBL2BITS
    typedef struct tagADTBL2BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL2BITS;
sfr volatile typeADTBL2BITS ADTBL2bits absolute 0x304;

// backward compatibility for ADTBL3BITS
    typedef struct tagADTBL3BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL3BITS;
sfr volatile typeADTBL3BITS ADTBL3bits absolute 0x306;

// backward compatibility for ADTBL4BITS
    typedef struct tagADTBL4BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL4BITS;
sfr volatile typeADTBL4BITS ADTBL4bits absolute 0x308;

// backward compatibility for ADTBL5BITS
    typedef struct tagADTBL5BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL5BITS;
sfr volatile typeADTBL5BITS ADTBL5bits absolute 0x30A;

// backward compatibility for ADTBL6BITS
    typedef struct tagADTBL6BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL6BITS;
sfr volatile typeADTBL6BITS ADTBL6bits absolute 0x30C;

// backward compatibility for ADTBL7BITS
    typedef struct tagADTBL7BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL7BITS;
sfr volatile typeADTBL7BITS ADTBL7bits absolute 0x30E;

// backward compatibility for ADTBL8BITS
    typedef struct tagADTBL8BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL8BITS;
sfr volatile typeADTBL8BITS ADTBL8bits absolute 0x310;

// backward compatibility for ADTBL9BITS
    typedef struct tagADTBL9BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL9BITS;
sfr volatile typeADTBL9BITS ADTBL9bits absolute 0x312;

// backward compatibility for ADTBL10BITS
    typedef struct tagADTBL10BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL10BITS;
sfr volatile typeADTBL10BITS ADTBL10bits absolute 0x314;

// backward compatibility for ADTBL11BITS
    typedef struct tagADTBL11BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL11BITS;
sfr volatile typeADTBL11BITS ADTBL11bits absolute 0x316;

// backward compatibility for ADTBL12BITS
    typedef struct tagADTBL12BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL12BITS;
sfr volatile typeADTBL12BITS ADTBL12bits absolute 0x318;

// backward compatibility for ADTBL13BITS
    typedef struct tagADTBL13BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL13BITS;
sfr volatile typeADTBL13BITS ADTBL13bits absolute 0x31A;

// backward compatibility for ADTBL14BITS
    typedef struct tagADTBL14BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL14BITS;
sfr volatile typeADTBL14BITS ADTBL14bits absolute 0x31C;

// backward compatibility for ADTBL15BITS
    typedef struct tagADTBL15BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL15BITS;
sfr volatile typeADTBL15BITS ADTBL15bits absolute 0x31E;

// backward compatibility for ADTBL16BITS
    typedef struct tagADTBL16BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL16BITS;
sfr volatile typeADTBL16BITS ADTBL16bits absolute 0x320;

// backward compatibility for ADTBL17BITS
    typedef struct tagADTBL17BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL17BITS;
sfr volatile typeADTBL17BITS ADTBL17bits absolute 0x322;

// backward compatibility for ADTBL18BITS
    typedef struct tagADTBL18BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL18BITS;
sfr volatile typeADTBL18BITS ADTBL18bits absolute 0x324;

// backward compatibility for ADTBL19BITS
    typedef struct tagADTBL19BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL19BITS;
sfr volatile typeADTBL19BITS ADTBL19bits absolute 0x326;

// backward compatibility for ADTBL20BITS
    typedef struct tagADTBL20BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL20BITS;
sfr volatile typeADTBL20BITS ADTBL20bits absolute 0x328;

// backward compatibility for ADTBL21BITS
    typedef struct tagADTBL21BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL21BITS;
sfr volatile typeADTBL21BITS ADTBL21bits absolute 0x32A;

// backward compatibility for ADTBL22BITS
    typedef struct tagADTBL22BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL22BITS;
sfr volatile typeADTBL22BITS ADTBL22bits absolute 0x32C;

// backward compatibility for ADTBL23BITS
    typedef struct tagADTBL23BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL23BITS;
sfr volatile typeADTBL23BITS ADTBL23bits absolute 0x32E;

// backward compatibility for ADTBL24BITS
    typedef struct tagADTBL24BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL24BITS;
sfr volatile typeADTBL24BITS ADTBL24bits absolute 0x330;

// backward compatibility for ADTBL25BITS
    typedef struct tagADTBL25BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL25BITS;
sfr volatile typeADTBL25BITS ADTBL25bits absolute 0x332;

// backward compatibility for ADTBL26BITS
    typedef struct tagADTBL26BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL26BITS;
sfr volatile typeADTBL26BITS ADTBL26bits absolute 0x334;

// backward compatibility for ADTBL27BITS
    typedef struct tagADTBL27BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL27BITS;
sfr volatile typeADTBL27BITS ADTBL27bits absolute 0x336;

// backward compatibility for ADTBL28BITS
    typedef struct tagADTBL28BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL28BITS;
sfr volatile typeADTBL28BITS ADTBL28bits absolute 0x338;

// backward compatibility for ADTBL29BITS
    typedef struct tagADTBL29BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL29BITS;
sfr volatile typeADTBL29BITS ADTBL29bits absolute 0x33A;

// backward compatibility for ADTBL30BITS
    typedef struct tagADTBL30BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL30BITS;
sfr volatile typeADTBL30BITS ADTBL30bits absolute 0x33C;

// backward compatibility for ADTBL31BITS
    typedef struct tagADTBL31BITS {
      union {
        struct {
          unsigned ADCH:7;
          unsigned :7;
          unsigned DIFF:1;
          unsigned UCTMU:1;
        };
        struct {
          unsigned ADCH0:1;
          unsigned ADCH1:1;
          unsigned ADCH2:1;
          unsigned ADCH3:1;
          unsigned ADCH4:1;
          unsigned ADCH5:1;
          unsigned ADCH6:1;
        };
      };
} typeADTBL31BITS;
sfr volatile typeADTBL31BITS ADTBL31bits absolute 0x33E;

// backward compatibility for DMACONBITS
    typedef struct tagDMACONBITS {
      unsigned PRSSEL:1;
      unsigned :14;
      unsigned DMAEN:1;
} typeDMACONBITS;
sfr volatile typeDMACONBITS DMACONbits absolute 0x380;

// backward compatibility for DMACH0BITS
    typedef struct tagDMACH0BITS {
      union {
        struct {
          unsigned CHEN:1;
          unsigned SIZE:1;
          unsigned TRMODE:2;
          unsigned DAMODE:2;
          unsigned SAMODE:2;
          unsigned CHREQ:1;
          unsigned RELOAD:1;
          unsigned NULLW:1;
        };
        struct {
          unsigned :2;
          unsigned TRMODE0:1;
          unsigned TRMODE1:1;
          unsigned DAMODE0:1;
          unsigned DAMODE1:1;
          unsigned SAMODE0:1;
          unsigned SAMODE1:1;
        };
      };
} typeDMACH0BITS;
sfr volatile typeDMACH0BITS DMACH0bits absolute 0x388;

// backward compatibility for DMAINT0BITS
    typedef struct tagDMAINT0BITS {
      union {
        struct {
          unsigned HALFEN:1;
          unsigned :2;
          unsigned OVRUNIF:1;
          unsigned HALFIF:1;
          unsigned DONEIF:1;
          unsigned LOWIF:1;
          unsigned HIGHIF:1;
          unsigned CHSEL:6;
          unsigned :1;
          unsigned DBUFWF:1;
        };
        struct {
          unsigned :8;
          unsigned CHSEL0:1;
          unsigned CHSEL1:1;
          unsigned CHSEL2:1;
          unsigned CHSEL3:1;
          unsigned CHSEL4:1;
          unsigned CHSEL5:1;
        };
      };
} typeDMAINT0BITS;
sfr volatile typeDMAINT0BITS DMAINT0bits absolute 0x38A;

// backward compatibility for DMACH1BITS
    typedef struct tagDMACH1BITS {
      union {
        struct {
          unsigned CHEN:1;
          unsigned SIZE:1;
          unsigned TRMODE:2;
          unsigned DAMODE:2;
          unsigned SAMODE:2;
          unsigned CHREQ:1;
          unsigned RELOAD:1;
          unsigned NULLW:1;
        };
        struct {
          unsigned :2;
          unsigned TRMODE0:1;
          unsigned TRMODE1:1;
          unsigned DAMODE0:1;
          unsigned DAMODE1:1;
          unsigned SAMODE0:1;
          unsigned SAMODE1:1;
        };
      };
} typeDMACH1BITS;
sfr volatile typeDMACH1BITS DMACH1bits absolute 0x392;

// backward compatibility for DMAINT1BITS
    typedef struct tagDMAINT1BITS {
      union {
        struct {
          unsigned HALFEN:1;
          unsigned :2;
          unsigned OVRUNIF:1;
          unsigned HALFIF:1;
          unsigned DONEIF:1;
          unsigned LOWIF:1;
          unsigned HIGHIF:1;
          unsigned CHSEL:6;
          unsigned :1;
          unsigned DBUFWF:1;
        };
        struct {
          unsigned :8;
          unsigned CHSEL0:1;
          unsigned CHSEL1:1;
          unsigned CHSEL2:1;
          unsigned CHSEL3:1;
          unsigned CHSEL4:1;
          unsigned CHSEL5:1;
        };
      };
} typeDMAINT1BITS;
sfr volatile typeDMAINT1BITS DMAINT1bits absolute 0x394;

// backward compatibility for DMACH2BITS
    typedef struct tagDMACH2BITS {
      union {
        struct {
          unsigned CHEN:1;
          unsigned SIZE:1;
          unsigned TRMODE:2;
          unsigned DAMODE:2;
          unsigned SAMODE:2;
          unsigned CHREQ:1;
          unsigned RELOAD:1;
          unsigned NULLW:1;
        };
        struct {
          unsigned :2;
          unsigned TRMODE0:1;
          unsigned TRMODE1:1;
          unsigned DAMODE0:1;
          unsigned DAMODE1:1;
          unsigned SAMODE0:1;
          unsigned SAMODE1:1;
        };
      };
} typeDMACH2BITS;
sfr volatile typeDMACH2BITS DMACH2bits absolute 0x39C;

// backward compatibility for DMAINT2BITS
    typedef struct tagDMAINT2BITS {
      union {
        struct {
          unsigned HALFEN:1;
          unsigned :2;
          unsigned OVRUNIF:1;
          unsigned HALFIF:1;
          unsigned DONEIF:1;
          unsigned LOWIF:1;
          unsigned HIGHIF:1;
          unsigned CHSEL:6;
          unsigned :1;
          unsigned DBUFWF:1;
        };
        struct {
          unsigned :8;
          unsigned CHSEL0:1;
          unsigned CHSEL1:1;
          unsigned CHSEL2:1;
          unsigned CHSEL3:1;
          unsigned CHSEL4:1;
          unsigned CHSEL5:1;
        };
      };
} typeDMAINT2BITS;
sfr volatile typeDMAINT2BITS DMAINT2bits absolute 0x39E;

// backward compatibility for DMACH3BITS
    typedef struct tagDMACH3BITS {
      union {
        struct {
          unsigned CHEN:1;
          unsigned SIZE:1;
          unsigned TRMODE:2;
          unsigned DAMODE:2;
          unsigned SAMODE:2;
          unsigned CHREQ:1;
          unsigned RELOAD:1;
          unsigned NULLW:1;
        };
        struct {
          unsigned :2;
          unsigned TRMODE0:1;
          unsigned TRMODE1:1;
          unsigned DAMODE0:1;
          unsigned DAMODE1:1;
          unsigned SAMODE0:1;
          unsigned SAMODE1:1;
        };
      };
} typeDMACH3BITS;
sfr volatile typeDMACH3BITS DMACH3bits absolute 0x3A6;

// backward compatibility for DMAINT3BITS
    typedef struct tagDMAINT3BITS {
      union {
        struct {
          unsigned HALFEN:1;
          unsigned :2;
          unsigned OVRUNIF:1;
          unsigned HALFIF:1;
          unsigned DONEIF:1;
          unsigned LOWIF:1;
          unsigned HIGHIF:1;
          unsigned CHSEL:6;
          unsigned :1;
          unsigned DBUFWF:1;
        };
        struct {
          unsigned :8;
          unsigned CHSEL0:1;
          unsigned CHSEL1:1;
          unsigned CHSEL2:1;
          unsigned CHSEL3:1;
          unsigned CHSEL4:1;
          unsigned CHSEL5:1;
        };
      };
} typeDMAINT3BITS;
sfr volatile typeDMAINT3BITS DMAINT3bits absolute 0x3A8;

// backward compatibility for DMACH4BITS
    typedef struct tagDMACH4BITS {
      union {
        struct {
          unsigned CHEN:1;
          unsigned SIZE:1;
          unsigned TRMODE:2;
          unsigned DAMODE:2;
          unsigned SAMODE:2;
          unsigned CHREQ:1;
          unsigned RELOAD:1;
          unsigned NULLW:1;
        };
        struct {
          unsigned :2;
          unsigned TRMODE0:1;
          unsigned TRMODE1:1;
          unsigned DAMODE0:1;
          unsigned DAMODE1:1;
          unsigned SAMODE0:1;
          unsigned SAMODE1:1;
        };
      };
} typeDMACH4BITS;
sfr volatile typeDMACH4BITS DMACH4bits absolute 0x3B0;

// backward compatibility for DMAINT4BITS
    typedef struct tagDMAINT4BITS {
      union {
        struct {
          unsigned HALFEN:1;
          unsigned :2;
          unsigned OVRUNIF:1;
          unsigned HALFIF:1;
          unsigned DONEIF:1;
          unsigned LOWIF:1;
          unsigned HIGHIF:1;
          unsigned CHSEL:6;
          unsigned :1;
          unsigned DBUFWF:1;
        };
        struct {
          unsigned :8;
          unsigned CHSEL0:1;
          unsigned CHSEL1:1;
          unsigned CHSEL2:1;
          unsigned CHSEL3:1;
          unsigned CHSEL4:1;
          unsigned CHSEL5:1;
        };
      };
} typeDMAINT4BITS;
sfr volatile typeDMAINT4BITS DMAINT4bits absolute 0x3B2;

// backward compatibility for DMACH5BITS
    typedef struct tagDMACH5BITS {
      union {
        struct {
          unsigned CHEN:1;
          unsigned SIZE:1;
          unsigned TRMODE:2;
          unsigned DAMODE:2;
          unsigned SAMODE:2;
          unsigned CHREQ:1;
          unsigned RELOAD:1;
          unsigned NULLW:1;
        };
        struct {
          unsigned :2;
          unsigned TRMODE0:1;
          unsigned TRMODE1:1;
          unsigned DAMODE0:1;
          unsigned DAMODE1:1;
          unsigned SAMODE0:1;
          unsigned SAMODE1:1;
        };
      };
} typeDMACH5BITS;
sfr volatile typeDMACH5BITS DMACH5bits absolute 0x3BA;

// backward compatibility for DMAINT5BITS
    typedef struct tagDMAINT5BITS {
      union {
        struct {
          unsigned HALFEN:1;
          unsigned :2;
          unsigned OVRUNIF:1;
          unsigned HALFIF:1;
          unsigned DONEIF:1;
          unsigned LOWIF:1;
          unsigned HIGHIF:1;
          unsigned CHSEL:6;
          unsigned :1;
          unsigned DBUFWF:1;
        };
        struct {
          unsigned :8;
          unsigned CHSEL0:1;
          unsigned CHSEL1:1;
          unsigned CHSEL2:1;
          unsigned CHSEL3:1;
          unsigned CHSEL4:1;
          unsigned CHSEL5:1;
        };
      };
} typeDMAINT5BITS;
sfr volatile typeDMAINT5BITS DMAINT5bits absolute 0x3BC;

// backward compatibility for ADL3CONLBITS
    typedef struct tagADL3CONLBITS {
      union {
        struct {
          unsigned SLSIZE:6;
          unsigned :1;
          unsigned THSRC:1;
          unsigned SLTSRC:5;
          unsigned SLENCLR:1;
          unsigned SAMP:1;
          unsigned SLEN:1;
        };
        struct {
          unsigned SLSIZE0:1;
          unsigned SLSIZE1:1;
          unsigned SLSIZE2:1;
          unsigned SLSIZE3:1;
          unsigned SLSIZE4:1;
          unsigned SLSIZE5:1;
          unsigned :2;
          unsigned SLTSRC0:1;
          unsigned SLTSRC1:1;
          unsigned SLTSRC2:1;
          unsigned SLTSRC3:1;
          unsigned SLTSRC4:1;
        };
      };
} typeADL3CONLBITS;
sfr volatile typeADL3CONLBITS ADL3CONLbits absolute 0x400;

// backward compatibility for ADL3CONHBITS
    typedef struct tagADL3CONHBITS {
      union {
        struct {
          unsigned SAMC:5;
          unsigned MULCHEN:1;
          unsigned :1;
          unsigned CTMEN:1;
          unsigned CM:3;
          unsigned WM:2;
          unsigned SLINT:2;
          unsigned ASEN:1;
        };
        struct {
          unsigned SAMC0:1;
          unsigned SAMC1:1;
          unsigned SAMC2:1;
          unsigned SAMC3:1;
          unsigned SAMC4:1;
          unsigned :3;
          unsigned CM0:1;
          unsigned CM1:1;
          unsigned CM2:1;
          unsigned WM0:1;
          unsigned WM1:1;
          unsigned SLINT0:1;
          unsigned SLINT1:1;
        };
      };
} typeADL3CONHBITS;
sfr volatile typeADL3CONHBITS ADL3CONHbits absolute 0x402;

// backward compatibility for ADL3PTRBITS
    typedef struct tagADL3PTRBITS {
      union {
        struct {
          unsigned :8;
          unsigned ADNEXT:7;
        };
        struct {
          unsigned :8;
          unsigned ADNEXT0:1;
          unsigned ADNEXT1:1;
          unsigned ADNEXT2:1;
          unsigned ADNEXT3:1;
          unsigned ADNEXT4:1;
          unsigned ADNEXT5:1;
          unsigned ADNEXT6:1;
        };
      };
} typeADL3PTRBITS;
sfr volatile typeADL3PTRBITS ADL3PTRbits absolute 0x404;

// backward compatibility for ADL3STATBITS
    typedef struct tagADL3STATBITS {
      unsigned :5;
      unsigned ADLIF:1;
      unsigned :1;
      unsigned ADTDLY:1;
      unsigned :6;
      unsigned LBUSY:1;
      unsigned ADTACT:1;
} typeADL3STATBITS;
sfr volatile typeADL3STATBITS ADL3STATbits absolute 0x406;

// backward compatibility for ADTH3LBITS
    typedef struct tagADTH3LBITS {
      unsigned TH0:1;
      unsigned TH1:1;
      unsigned TH2:1;
      unsigned TH3:1;
      unsigned TH4:1;
      unsigned TH5:1;
      unsigned TH6:1;
      unsigned TH7:1;
      unsigned TH8:1;
      unsigned TH9:1;
      unsigned TH10:1;
      unsigned TH11:1;
      unsigned TH12:1;
      unsigned TH13:1;
      unsigned TH14:1;
      unsigned TH15:1;
} typeADTH3LBITS;
sfr volatile typeADTH3LBITS ADTH3Lbits absolute 0x408;

// backward compatibility for ADTH3HBITS
    typedef struct tagADTH3HBITS {
      unsigned TH0:1;
      unsigned TH1:1;
      unsigned TH2:1;
      unsigned TH3:1;
      unsigned TH4:1;
      unsigned TH5:1;
      unsigned TH6:1;
      unsigned TH7:1;
      unsigned TH8:1;
      unsigned TH9:1;
      unsigned TH10:1;
      unsigned TH11:1;
      unsigned TH12:1;
      unsigned TH13:1;
      unsigned TH14:1;
      unsigned TH15:1;
} typeADTH3HBITS;
sfr volatile typeADTH3HBITS ADTH3Hbits absolute 0x40A;

// backward compatibility for ADL3MSEL0BITS
    typedef struct tagADL3MSEL0BITS {
      unsigned :15;
      unsigned MSEL15:1;
} typeADL3MSEL0BITS;
sfr volatile typeADL3MSEL0BITS ADL3MSEL0bits absolute 0x40C;

// backward compatibility for ADL3MSEL1BITS
    typedef struct tagADL3MSEL1BITS {
      unsigned MSEL16:1;
      unsigned MSEL17:1;
      unsigned MSEL18:1;
      unsigned MSEL19:1;
      unsigned MSEL20:1;
      unsigned MSEL21:1;
      unsigned MSEL22:1;
      unsigned MSEL23:1;
      unsigned MSEL24:1;
      unsigned MSEL25:1;
      unsigned MSEL26:1;
      unsigned MSEL27:1;
      unsigned MSEL28:1;
      unsigned MSEL29:1;
      unsigned MSEL30:1;
      unsigned MSEL31:1;
} typeADL3MSEL1BITS;
sfr volatile typeADL3MSEL1BITS ADL3MSEL1bits absolute 0x40E;

// backward compatibility for ADL3MSEL2BITS
    typedef struct tagADL3MSEL2BITS {
      unsigned MSEL32:1;
      unsigned MSEL33:1;
      unsigned MSEL34:1;
      unsigned MSEL35:1;
      unsigned MSEL36:1;
      unsigned MSEL37:1;
      unsigned MSEL38:1;
      unsigned MSEL39:1;
      unsigned MSEL40:1;
      unsigned MSEL41:1;
      unsigned MSEL42:1;
      unsigned MSEL43:1;
      unsigned MSEL44:1;
      unsigned MSEL45:1;
      unsigned MSEL46:1;
      unsigned MSEL47:1;
} typeADL3MSEL2BITS;
sfr volatile typeADL3MSEL2BITS ADL3MSEL2bits absolute 0x410;

// backward compatibility for ADL3MSEL3BITS
    typedef struct tagADL3MSEL3BITS {
      unsigned MSEL48:1;
      unsigned MSEL49:1;
} typeADL3MSEL3BITS;
sfr volatile typeADL3MSEL3BITS ADL3MSEL3bits absolute 0x412;

// backward compatibility for DAC1CONBITS
    typedef struct tagDAC1CONBITS {
      union {
        struct {
          unsigned DACREF:2;
          unsigned DACTSEL:5;
          unsigned :1;
          unsigned DACTRIG:1;
          unsigned :2;
          unsigned DACFM:1;
          unsigned DACSLP:1;
          unsigned DACSIDL:1;
          unsigned :1;
          unsigned DACEN:1;
        };
        struct {
          unsigned REFSEL0:1;
          unsigned REFSEL1:1;
          unsigned DACTSEL0:1;
          unsigned DACTSEL1:1;
          unsigned DACTSEL2:1;
          unsigned DACTSEL3:1;
          unsigned DACTSEL4:1;
        };
      };
} typeDAC1CONBITS;
sfr volatile typeDAC1CONBITS DAC1CONbits absolute 0x440;

// backward compatibility for DAC2CONBITS
    typedef struct tagDAC2CONBITS {
      union {
        struct {
          unsigned DACREF:2;
          unsigned DACTSEL:5;
          unsigned :1;
          unsigned DACTRIG:1;
          unsigned :2;
          unsigned DACFM:1;
          unsigned DACSLP:1;
          unsigned DACSIDL:1;
          unsigned :1;
          unsigned DACEN:1;
        };
        struct {
          unsigned REFSEL0:1;
          unsigned REFSEL1:1;
          unsigned DACTSEL0:1;
          unsigned DACTSEL1:1;
          unsigned DACTSEL2:1;
          unsigned DACTSEL3:1;
          unsigned DACTSEL4:1;
        };
      };
} typeDAC2CONBITS;
sfr volatile typeDAC2CONBITS DAC2CONbits absolute 0x444;

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
      unsigned :1;
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
          unsigned USUSPND:1;
          unsigned :2;
          unsigned USLPGRD:1;
          unsigned :2;
          unsigned UACTPND:1;
        };
        struct {
          unsigned :1;
          unsigned USUSPEND:1;
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
          unsigned ENDPT:4;
        };
        struct {
          unsigned :4;
          unsigned ENDPT0:1;
          unsigned ENDPT1:1;
          unsigned ENDPT2:1;
          unsigned ENDPT3:1;
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
          unsigned USBRST:1;
          unsigned PKTDIS:1;
          unsigned SE0:1;
          unsigned JSTATE:1;
        };
        struct {
          unsigned SOFEN:1;
          unsigned :3;
          unsigned RESET:1;
          unsigned TOKBUSY:1;
        };
      };
} typeU1CONBITS;
sfr volatile typeU1CONBITS U1CONbits absolute 0x494;

// backward compatibility for U1ADDRBITS
    typedef struct tagU1ADDRBITS {
      union {
        struct {
          unsigned DEVADDR:7;
          unsigned LOWSPDEN:1;
        };
        struct {
          unsigned DEVADDR0:1;
          unsigned DEVADDR1:1;
          unsigned DEVADDR2:1;
          unsigned DEVADDR3:1;
          unsigned DEVADDR4:1;
          unsigned DEVADDR5:1;
          unsigned DEVADDR6:1;
          unsigned LSPDEN:1;
        };
      };
} typeU1ADDRBITS;
sfr volatile typeU1ADDRBITS U1ADDRbits absolute 0x496;

// backward compatibility for U1BDTP1BITS
    typedef struct tagU1BDTP1BITS {
      union {
        struct {
          unsigned :1;
          unsigned BDTPTRL:7;
        };
        struct {
          unsigned :1;
          unsigned BDTPTRL0:1;
          unsigned BDTPTRL1:1;
          unsigned BDTPTRL2:1;
          unsigned BDTPTRL3:1;
          unsigned BDTPTRL4:1;
          unsigned BDTPTRL5:1;
          unsigned BDTPTRL6:1;
        };
      };
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
} typeU1FRMHBITS;
sfr volatile typeU1FRMHBITS U1FRMHbits absolute 0x49C;

// backward compatibility for U1TOKBITS
    typedef struct tagU1TOKBITS {
      union {
        struct {
          unsigned EP:4;
          unsigned PID:4;
        };
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
      };
} typeU1TOKBITS;
sfr volatile typeU1TOKBITS U1TOKbits absolute 0x49E;

// backward compatibility for U1SOFBITS
    typedef struct tagU1SOFBITS {
      union {
        struct {
          unsigned CNT:8;
        };
        struct {
          unsigned CNT0:1;
          unsigned CNT1:1;
          unsigned CNT2:1;
          unsigned CNT3:1;
          unsigned CNT4:1;
          unsigned CNT5:1;
          unsigned CNT6:1;
          unsigned CNT7:1;
        };
      };
} typeU1SOFBITS;
sfr volatile typeU1SOFBITS U1SOFbits absolute 0x4A0;

// backward compatibility for U1BDTP2BITS
    typedef struct tagU1BDTP2BITS {
      unsigned BDTPTRH:8;
} typeU1BDTP2BITS;
sfr volatile typeU1BDTP2BITS U1BDTP2bits absolute 0x4A2;

// backward compatibility for U1BDTP3BITS
    typedef struct tagU1BDTP3BITS {
      unsigned BDTPTRU:8;
} typeU1BDTP3BITS;
sfr volatile typeU1BDTP3BITS U1BDTP3bits absolute 0x4A4;

// backward compatibility for U1CNFG1BITS
    typedef struct tagU1CNFG1BITS {
      union {
        struct {
          unsigned PPB:2;
          unsigned :2;
          unsigned USBSIDL:1;
          unsigned :1;
          unsigned UOEMON:1;
          unsigned UTEYE:1;
        };
        struct {
          unsigned PPB0:1;
          unsigned PPB1:1;
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
      unsigned PUVBUS:1;
      unsigned UVCMPSEL:1;
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
          unsigned :3;
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

// backward compatibility for SD1CON1BITS
    typedef struct tagSD1CON1BITS {
      union {
        struct {
          unsigned PWRLVL:1;
          unsigned SDREFP:1;
          unsigned SDREFN:1;
          unsigned :1;
          unsigned VOSCAL:1;
          unsigned :1;
          unsigned DITHER:2;
          unsigned SDGAIN:3;
          unsigned FILTDIS:1;
          unsigned SDRST:1;
          unsigned SDSIDL:1;
          unsigned :1;
          unsigned SDON:1;
        };
        struct {
          unsigned :6;
          unsigned DITHER0:1;
          unsigned DITHER1:1;
          unsigned SDGAIN0:1;
          unsigned SDGAIN1:1;
          unsigned SDGAIN2:1;
        };
      };
} typeSD1CON1BITS;
sfr volatile typeSD1CON1BITS SD1CON1bits absolute 0x4D0;

// backward compatibility for SD1CON2BITS
    typedef struct tagSD1CON2BITS {
      union {
        struct {
          unsigned SDRDY:1;
          unsigned :2;
          unsigned RNDRES:2;
          unsigned :3;
          unsigned SDWM:2;
          unsigned :2;
          unsigned SDINT:2;
          unsigned CHOP:2;
        };
        struct {
          unsigned :3;
          unsigned RNDRES0:1;
          unsigned RNDRES1:1;
          unsigned :3;
          unsigned SDWM0:1;
          unsigned SDWM1:1;
          unsigned :2;
          unsigned SDINT0:1;
          unsigned SDINT1:1;
          unsigned CHOP0:1;
          unsigned CHOP1:1;
        };
      };
} typeSD1CON2BITS;
sfr volatile typeSD1CON2BITS SD1CON2bits absolute 0x4D2;

// backward compatibility for SD1CON3BITS
    typedef struct tagSD1CON3BITS {
      union {
        struct {
          unsigned SDCH:3;
          unsigned :5;
          unsigned SDCS:2;
          unsigned SDOSR:3;
          unsigned SDDIV:3;
        };
        struct {
          unsigned SDCH0:1;
          unsigned SDCH1:1;
          unsigned SDCH2:1;
          unsigned :5;
          unsigned SDCS0:1;
          unsigned SDCS1:1;
          unsigned SDOSR0:1;
          unsigned SDOSR1:1;
          unsigned SDOSR2:1;
          unsigned SDDIV0:1;
          unsigned SDDIV1:1;
          unsigned SDDIV2:1;
        };
      };
} typeSD1CON3BITS;
sfr volatile typeSD1CON3BITS SD1CON3bits absolute 0x4D4;

// backward compatibility for ANCFGBITS
    typedef struct tagANCFGBITS {
      unsigned :2;
      unsigned VBG2EN:1;
} typeANCFGBITS;
sfr volatile typeANCFGBITS ANCFGbits absolute 0x4DE;

// backward compatibility for ANSBBITS
    typedef struct tagANSBBITS {
      unsigned ANSB0:1;
      unsigned ANSB1:1;
      unsigned ANSB2:1;
      unsigned ANSB3:1;
      unsigned ANSB4:1;
      unsigned ANSB5:1;
      unsigned ANSB6:1;
      unsigned ANSB7:1;
      unsigned :4;
      unsigned ANSB12:1;
      unsigned ANSB13:1;
      unsigned ANSB14:1;
      unsigned ANSB15:1;
} typeANSBBITS;
sfr volatile typeANSBBITS ANSBbits absolute 0x4E2;

// backward compatibility for ANSDBITS
    typedef struct tagANSDBITS {
      unsigned ANSD0:1;
      unsigned ANSD1:1;
      unsigned ANSD2:1;
      unsigned ANSD3:1;
      unsigned ANSD4:1;
      unsigned ANSD5:1;
      unsigned ANSD6:1;
      unsigned ANSD7:1;
      unsigned ANSD8:1;
      unsigned ANSD9:1;
      unsigned ANSD10:1;
      unsigned ANSD11:1;
      unsigned ANSD12:1;
      unsigned ANSD13:1;
      unsigned ANSD14:1;
      unsigned ANSD15:1;
} typeANSDBITS;
sfr volatile typeANSDBITS ANSDbits absolute 0x4E6;

// backward compatibility for ANSEBITS
    typedef struct tagANSEBITS {
      unsigned :4;
      unsigned ANSE4:1;
      unsigned ANSE5:1;
      unsigned ANSE6:1;
      unsigned ANSE7:1;
} typeANSEBITS;
sfr volatile typeANSEBITS ANSEbits absolute 0x4E8;

// backward compatibility for ANSFBITS
    typedef struct tagANSFBITS {
      unsigned ANSF0:1;
      unsigned :2;
      unsigned ANSF3:1;
      unsigned ANSF4:1;
      unsigned ANSF5:1;
      unsigned :1;
      unsigned ANSF7:1;
} typeANSFBITS;
sfr volatile typeANSFBITS ANSFbits absolute 0x4EA;

// backward compatibility for ANSGBITS
    typedef struct tagANSGBITS {
      unsigned :6;
      unsigned ANSG6:1;
      unsigned ANSG7:1;
      unsigned ANSG8:1;
      unsigned ANSG9:1;
} typeANSGBITS;
sfr volatile typeANSGBITS ANSGbits absolute 0x4EC;

// backward compatibility for ADCON1BITS
    typedef struct tagADCON1BITS {
      union {
        struct {
          unsigned PWRLVL:1;
          unsigned :5;
          unsigned ADCAL:1;
          unsigned PUMPEN:1;
          unsigned FORM:4;
          unsigned ADSLP:1;
          unsigned ADSIDL:1;
          unsigned :1;
          unsigned ADON:1;
        };
        struct {
          unsigned :8;
          unsigned FORM0:1;
          unsigned FORM1:1;
          unsigned FORM2:1;
          unsigned FORM3:1;
        };
      };
} typeADCON1BITS;
sfr volatile typeADCON1BITS ADCON1bits absolute 0x500;

// backward compatibility for ADCON2BITS
    typedef struct tagADCON2BITS {
      union {
        struct {
          unsigned :1;
          unsigned REFPUMP:1;
          unsigned :8;
          unsigned BUFORG:1;
          unsigned :1;
          unsigned NVCFG0:1;
          unsigned :1;
          unsigned PVCFG:2;
        };
        struct {
          unsigned :12;
          unsigned NVCFG:1;
          unsigned :1;
          unsigned PVCFG0:1;
          unsigned PVCFG1:1;
        };
        struct {
          unsigned :1;
          unsigned RFPUMP:1;
        };
      };
} typeADCON2BITS;
sfr volatile typeADCON2BITS ADCON2bits absolute 0x502;

// backward compatibility for ADCON3BITS
    typedef struct tagADCON3BITS {
      union {
        struct {
          unsigned ADCS:8;
          unsigned :7;
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
        };
        struct {
          unsigned :8;
          unsigned SLEN:4;
        };
        struct {
          unsigned :8;
          unsigned SLEN0:1;
          unsigned SLEN1:1;
          unsigned SLEN2:1;
          unsigned SLEN3:1;
        };
      };
} typeADCON3BITS;
sfr volatile typeADCON3BITS ADCON3bits absolute 0x504;

// backward compatibility for ADSTATLBITS
    typedef struct tagADSTATLBITS {
      union {
        struct {
          unsigned SL0IF:1;
          unsigned SL1IF:1;
          unsigned SL2IF:1;
          unsigned SL3IF:1;
          unsigned ACCIF:1;
          unsigned BUFIF:1;
          unsigned :2;
          unsigned SLERR:4;
        };
        struct {
          unsigned :8;
          unsigned SLERR0:1;
          unsigned SLERR1:1;
          unsigned SLERR2:1;
          unsigned SLERR3:1;
        };
        struct {
          unsigned :8;
          unsigned SLOV:1;
        };
      };
} typeADSTATLBITS;
sfr volatile typeADSTATLBITS ADSTATLbits absolute 0x508;

// backward compatibility for ADSTATHBITS
    typedef struct tagADSTATHBITS {
      unsigned ADBUSY:1;
      unsigned ADREADY:1;
      unsigned PUMPST:1;
} typeADSTATHBITS;
sfr volatile typeADSTATHBITS ADSTATHbits absolute 0x50A;

// backward compatibility for ACCONLBITS
    typedef struct tagACCONLBITS {
      union {
        struct {
          unsigned COUNT:8;
          unsigned TBLSEL:6;
        };
        struct {
          unsigned COUNT0:1;
          unsigned COUNT1:1;
          unsigned COUNT2:1;
          unsigned COUNT3:1;
          unsigned COUNT4:1;
          unsigned COUNT5:1;
          unsigned COUNT6:1;
          unsigned COUNT7:1;
          unsigned TBLSEL0:1;
          unsigned TBLSEL1:1;
          unsigned TBLSEL2:1;
          unsigned TBLSEL3:1;
          unsigned TBLSEL4:1;
          unsigned TBLSEL5:1;
        };
      };
} typeACCONLBITS;
sfr volatile typeACCONLBITS ACCONLbits absolute 0x50C;

// backward compatibility for ACCONHBITS
    typedef struct tagACCONHBITS {
      unsigned :6;
      unsigned ACIE:1;
      unsigned ACEN:1;
} typeACCONHBITS;
sfr volatile typeACCONHBITS ACCONHbits absolute 0x50E;

// backward compatibility for ADCHITLBITS
    typedef struct tagADCHITLBITS {
      unsigned CHH0:1;
      unsigned CHH1:1;
      unsigned CHH2:1;
      unsigned CHH3:1;
      unsigned CHH4:1;
      unsigned CHH5:1;
      unsigned CHH6:1;
      unsigned CHH7:1;
      unsigned CHH8:1;
      unsigned CHH9:1;
      unsigned CHH10:1;
      unsigned CHH11:1;
      unsigned CHH12:1;
      unsigned CHH13:1;
      unsigned CHH14:1;
      unsigned CHH15:1;
} typeADCHITLBITS;
sfr volatile typeADCHITLBITS ADCHITLbits absolute 0x514;

// backward compatibility for ADCHITHBITS
    typedef struct tagADCHITHBITS {
      unsigned CHH16:1;
      unsigned CHH17:1;
      unsigned CHH18:1;
      unsigned CHH19:1;
      unsigned CHH20:1;
      unsigned CHH21:1;
      unsigned CHH22:1;
      unsigned CHH23:1;
      unsigned CHH24:1;
      unsigned CHH25:1;
      unsigned CHH26:1;
      unsigned CHH27:1;
      unsigned CHH28:1;
      unsigned CHH29:1;
      unsigned CHH30:1;
      unsigned CHH31:1;
} typeADCHITHBITS;
sfr volatile typeADCHITHBITS ADCHITHbits absolute 0x516;

// backward compatibility for ADL0CONLBITS
    typedef struct tagADL0CONLBITS {
      union {
        struct {
          unsigned SLSIZE:6;
          unsigned :1;
          unsigned THSRC:1;
          unsigned SLTSRC:5;
          unsigned SLENCLR:1;
          unsigned SAMP:1;
          unsigned SLEN:1;
        };
        struct {
          unsigned SLSIZE0:1;
          unsigned SLSIZE1:1;
          unsigned SLSIZE2:1;
          unsigned SLSIZE3:1;
          unsigned SLSIZE4:1;
          unsigned SLSIZE5:1;
          unsigned :2;
          unsigned SLTSRC0:1;
          unsigned SLTSRC1:1;
          unsigned SLTSRC2:1;
          unsigned SLTSRC3:1;
          unsigned SLTSRC4:1;
        };
      };
} typeADL0CONLBITS;
sfr volatile typeADL0CONLBITS ADL0CONLbits absolute 0x51C;

// backward compatibility for ADL0CONHBITS
    typedef struct tagADL0CONHBITS {
      union {
        struct {
          unsigned SAMC:5;
          unsigned MULCHEN:1;
          unsigned :1;
          unsigned CTMEN:1;
          unsigned CM:3;
          unsigned WM:2;
          unsigned SLINT:2;
          unsigned ASEN:1;
        };
        struct {
          unsigned SAMC0:1;
          unsigned SAMC1:1;
          unsigned SAMC2:1;
          unsigned SAMC3:1;
          unsigned SAMC4:1;
          unsigned :3;
          unsigned CM0:1;
          unsigned CM1:1;
          unsigned CM2:1;
          unsigned WM0:1;
          unsigned WM1:1;
          unsigned SLINT0:1;
          unsigned SLINT1:1;
        };
      };
} typeADL0CONHBITS;
sfr volatile typeADL0CONHBITS ADL0CONHbits absolute 0x51E;

// backward compatibility for ADL0PTRBITS
    typedef struct tagADL0PTRBITS {
      union {
        struct {
          unsigned :8;
          unsigned ADNEXT:7;
        };
        struct {
          unsigned :8;
          unsigned ADNEXT0:1;
          unsigned ADNEXT1:1;
          unsigned ADNEXT2:1;
          unsigned ADNEXT3:1;
          unsigned ADNEXT4:1;
          unsigned ADNEXT5:1;
          unsigned ADNEXT6:1;
        };
      };
} typeADL0PTRBITS;
sfr volatile typeADL0PTRBITS ADL0PTRbits absolute 0x520;

// backward compatibility for ADL0STATBITS
    typedef struct tagADL0STATBITS {
      unsigned :5;
      unsigned ADLIF:1;
      unsigned :1;
      unsigned ADTDLY:1;
      unsigned :6;
      unsigned LBUSY:1;
      unsigned ADTACT:1;
} typeADL0STATBITS;
sfr volatile typeADL0STATBITS ADL0STATbits absolute 0x522;

// backward compatibility for ADTH0LBITS
    typedef struct tagADTH0LBITS {
      unsigned TH0:1;
      unsigned TH1:1;
      unsigned TH2:1;
      unsigned TH3:1;
      unsigned TH4:1;
      unsigned TH5:1;
      unsigned TH6:1;
      unsigned TH7:1;
      unsigned TH8:1;
      unsigned TH9:1;
      unsigned TH10:1;
      unsigned TH11:1;
      unsigned TH12:1;
      unsigned TH13:1;
      unsigned TH14:1;
      unsigned TH15:1;
} typeADTH0LBITS;
sfr volatile typeADTH0LBITS ADTH0Lbits absolute 0x524;

// backward compatibility for ADTH0HBITS
    typedef struct tagADTH0HBITS {
      unsigned TH0:1;
      unsigned TH1:1;
      unsigned TH2:1;
      unsigned TH3:1;
      unsigned TH4:1;
      unsigned TH5:1;
      unsigned TH6:1;
      unsigned TH7:1;
      unsigned TH8:1;
      unsigned TH9:1;
      unsigned TH10:1;
      unsigned TH11:1;
      unsigned TH12:1;
      unsigned TH13:1;
      unsigned TH14:1;
      unsigned TH15:1;
} typeADTH0HBITS;
sfr volatile typeADTH0HBITS ADTH0Hbits absolute 0x526;

// backward compatibility for ADL0MSEL0BITS
    typedef struct tagADL0MSEL0BITS {
      unsigned :15;
      unsigned MSEL15:1;
} typeADL0MSEL0BITS;
sfr volatile typeADL0MSEL0BITS ADL0MSEL0bits absolute 0x528;

// backward compatibility for ADL0MSEL1BITS
    typedef struct tagADL0MSEL1BITS {
      unsigned MSEL16:1;
      unsigned MSEL17:1;
      unsigned MSEL18:1;
      unsigned MSEL19:1;
      unsigned MSEL20:1;
      unsigned MSEL21:1;
      unsigned MSEL22:1;
      unsigned MSEL23:1;
      unsigned MSEL24:1;
      unsigned MSEL25:1;
      unsigned MSEL26:1;
      unsigned MSEL27:1;
      unsigned MSEL28:1;
      unsigned MSEL29:1;
      unsigned MSEL30:1;
      unsigned MSEL31:1;
} typeADL0MSEL1BITS;
sfr volatile typeADL0MSEL1BITS ADL0MSEL1bits absolute 0x52A;

// backward compatibility for ADL0MSEL2BITS
    typedef struct tagADL0MSEL2BITS {
      unsigned MSEL32:1;
      unsigned MSEL33:1;
      unsigned MSEL34:1;
      unsigned MSEL35:1;
      unsigned MSEL36:1;
      unsigned MSEL37:1;
      unsigned MSEL38:1;
      unsigned MSEL39:1;
      unsigned MSEL40:1;
      unsigned MSEL41:1;
      unsigned MSEL42:1;
      unsigned MSEL43:1;
      unsigned MSEL44:1;
      unsigned MSEL45:1;
      unsigned MSEL46:1;
      unsigned MSEL47:1;
} typeADL0MSEL2BITS;
sfr volatile typeADL0MSEL2BITS ADL0MSEL2bits absolute 0x52C;

// backward compatibility for ADL0MSEL3BITS
    typedef struct tagADL0MSEL3BITS {
      unsigned MSEL48:1;
      unsigned MSEL49:1;
} typeADL0MSEL3BITS;
sfr volatile typeADL0MSEL3BITS ADL0MSEL3bits absolute 0x52E;

// backward compatibility for ADL1CONLBITS
    typedef struct tagADL1CONLBITS {
      union {
        struct {
          unsigned SLSIZE:6;
          unsigned :1;
          unsigned THSRC:1;
          unsigned SLTSRC:5;
          unsigned SLENCLR:1;
          unsigned SAMP:1;
          unsigned SLEN:1;
        };
        struct {
          unsigned SLSIZE0:1;
          unsigned SLSIZE1:1;
          unsigned SLSIZE2:1;
          unsigned SLSIZE3:1;
          unsigned SLSIZE4:1;
          unsigned SLSIZE5:1;
          unsigned :2;
          unsigned SLTSRC0:1;
          unsigned SLTSRC1:1;
          unsigned SLTSRC2:1;
          unsigned SLTSRC3:1;
          unsigned SLTSRC4:1;
        };
      };
} typeADL1CONLBITS;
sfr volatile typeADL1CONLBITS ADL1CONLbits absolute 0x538;

// backward compatibility for ADL1CONHBITS
    typedef struct tagADL1CONHBITS {
      union {
        struct {
          unsigned SAMC:5;
          unsigned MULCHEN:1;
          unsigned PINTRIS:1;
          unsigned CTMEN:1;
          unsigned CM:3;
          unsigned WM:2;
          unsigned SLINT:2;
          unsigned ASEN:1;
        };
        struct {
          unsigned SAMC0:1;
          unsigned SAMC1:1;
          unsigned SAMC2:1;
          unsigned SAMC3:1;
          unsigned SAMC4:1;
          unsigned :3;
          unsigned CM0:1;
          unsigned CM1:1;
          unsigned CM2:1;
          unsigned WM0:1;
          unsigned WM1:1;
          unsigned SLINT0:1;
          unsigned SLINT1:1;
        };
      };
} typeADL1CONHBITS;
sfr volatile typeADL1CONHBITS ADL1CONHbits absolute 0x53A;

// backward compatibility for ADL1PTRBITS
    typedef struct tagADL1PTRBITS {
      union {
        struct {
          unsigned :8;
          unsigned ADNEXT:7;
        };
        struct {
          unsigned :8;
          unsigned ADNEXT0:1;
          unsigned ADNEXT1:1;
          unsigned ADNEXT2:1;
          unsigned ADNEXT3:1;
          unsigned ADNEXT4:1;
          unsigned ADNEXT5:1;
          unsigned ADNEXT6:1;
        };
      };
} typeADL1PTRBITS;
sfr volatile typeADL1PTRBITS ADL1PTRbits absolute 0x53C;

// backward compatibility for ADL1STATBITS
    typedef struct tagADL1STATBITS {
      unsigned :5;
      unsigned ADLIF:1;
      unsigned :1;
      unsigned ADTDLY:1;
      unsigned :6;
      unsigned LBUSY:1;
      unsigned ADTACT:1;
} typeADL1STATBITS;
sfr volatile typeADL1STATBITS ADL1STATbits absolute 0x53E;

// backward compatibility for ADTH1LBITS
    typedef struct tagADTH1LBITS {
      unsigned TH0:1;
      unsigned TH1:1;
      unsigned TH2:1;
      unsigned TH3:1;
      unsigned TH4:1;
      unsigned TH5:1;
      unsigned TH6:1;
      unsigned TH7:1;
      unsigned TH8:1;
      unsigned TH9:1;
      unsigned TH10:1;
      unsigned TH11:1;
      unsigned TH12:1;
      unsigned TH13:1;
      unsigned TH14:1;
      unsigned TH15:1;
} typeADTH1LBITS;
sfr volatile typeADTH1LBITS ADTH1Lbits absolute 0x540;

// backward compatibility for ADTH1HBITS
    typedef struct tagADTH1HBITS {
      unsigned TH0:1;
      unsigned TH1:1;
      unsigned TH2:1;
      unsigned TH3:1;
      unsigned TH4:1;
      unsigned TH5:1;
      unsigned TH6:1;
      unsigned TH7:1;
      unsigned TH8:1;
      unsigned TH9:1;
      unsigned TH10:1;
      unsigned TH11:1;
      unsigned TH12:1;
      unsigned TH13:1;
      unsigned TH14:1;
      unsigned TH15:1;
} typeADTH1HBITS;
sfr volatile typeADTH1HBITS ADTH1Hbits absolute 0x542;

// backward compatibility for ADL1MSEL0BITS
    typedef struct tagADL1MSEL0BITS {
      unsigned :15;
      unsigned MSEL15:1;
} typeADL1MSEL0BITS;
sfr volatile typeADL1MSEL0BITS ADL1MSEL0bits absolute 0x544;

// backward compatibility for ADL1MSEL1BITS
    typedef struct tagADL1MSEL1BITS {
      unsigned MSEL16:1;
      unsigned MSEL17:1;
      unsigned MSEL18:1;
      unsigned MSEL19:1;
      unsigned MSEL20:1;
      unsigned MSEL21:1;
      unsigned MSEL22:1;
      unsigned MSEL23:1;
      unsigned MSEL24:1;
      unsigned MSEL25:1;
      unsigned MSEL26:1;
      unsigned MSEL27:1;
      unsigned MSEL28:1;
      unsigned MSEL29:1;
      unsigned MSEL30:1;
      unsigned MSEL31:1;
} typeADL1MSEL1BITS;
sfr volatile typeADL1MSEL1BITS ADL1MSEL1bits absolute 0x546;

// backward compatibility for ADL1MSEL2BITS
    typedef struct tagADL1MSEL2BITS {
      unsigned MSEL32:1;
      unsigned MSEL33:1;
      unsigned MSEL34:1;
      unsigned MSEL35:1;
      unsigned MSEL36:1;
      unsigned MSEL37:1;
      unsigned MSEL38:1;
      unsigned MSEL39:1;
      unsigned MSEL40:1;
      unsigned MSEL41:1;
      unsigned MSEL42:1;
      unsigned MSEL43:1;
      unsigned MSEL44:1;
      unsigned MSEL45:1;
      unsigned MSEL46:1;
      unsigned MSEL47:1;
} typeADL1MSEL2BITS;
sfr volatile typeADL1MSEL2BITS ADL1MSEL2bits absolute 0x548;

// backward compatibility for ADL1MSEL3BITS
    typedef struct tagADL1MSEL3BITS {
      unsigned MSEL48:1;
      unsigned MSEL49:1;
} typeADL1MSEL3BITS;
sfr volatile typeADL1MSEL3BITS ADL1MSEL3bits absolute 0x54A;

// backward compatibility for ADL2CONLBITS
    typedef struct tagADL2CONLBITS {
      union {
        struct {
          unsigned SLSIZE:6;
          unsigned :1;
          unsigned THSRC:1;
          unsigned SLTSRC:5;
          unsigned SLENCLR:1;
          unsigned SAMP:1;
          unsigned SLEN:1;
        };
        struct {
          unsigned SLSIZE0:1;
          unsigned SLSIZE1:1;
          unsigned SLSIZE2:1;
          unsigned SLSIZE3:1;
          unsigned SLSIZE4:1;
          unsigned SLSIZE5:1;
          unsigned :2;
          unsigned SLTSRC0:1;
          unsigned SLTSRC1:1;
          unsigned SLTSRC2:1;
          unsigned SLTSRC3:1;
          unsigned SLTSRC4:1;
        };
      };
} typeADL2CONLBITS;
sfr volatile typeADL2CONLBITS ADL2CONLbits absolute 0x554;

// backward compatibility for ADL2CONHBITS
    typedef struct tagADL2CONHBITS {
      union {
        struct {
          unsigned SAMC:5;
          unsigned MULCHEN:1;
          unsigned PINTRIS:1;
          unsigned CTMEN:1;
          unsigned CM:3;
          unsigned WM:2;
          unsigned SLINT:2;
          unsigned ASEN:1;
        };
        struct {
          unsigned SAMC0:1;
          unsigned SAMC1:1;
          unsigned SAMC2:1;
          unsigned SAMC3:1;
          unsigned SAMC4:1;
          unsigned :3;
          unsigned CM0:1;
          unsigned CM1:1;
          unsigned CM2:1;
          unsigned WM0:1;
          unsigned WM1:1;
          unsigned SLINT0:1;
          unsigned SLINT1:1;
        };
      };
} typeADL2CONHBITS;
sfr volatile typeADL2CONHBITS ADL2CONHbits absolute 0x556;

// backward compatibility for ADL2PTRBITS
    typedef struct tagADL2PTRBITS {
      union {
        struct {
          unsigned :8;
          unsigned ADNEXT:7;
        };
        struct {
          unsigned :8;
          unsigned ADNEXT0:1;
          unsigned ADNEXT1:1;
          unsigned ADNEXT2:1;
          unsigned ADNEXT3:1;
          unsigned ADNEXT4:1;
          unsigned ADNEXT5:1;
          unsigned ADNEXT6:1;
        };
      };
} typeADL2PTRBITS;
sfr volatile typeADL2PTRBITS ADL2PTRbits absolute 0x558;

// backward compatibility for ADL2STATBITS
    typedef struct tagADL2STATBITS {
      unsigned :5;
      unsigned ADLIF:1;
      unsigned :1;
      unsigned ADTDLY:1;
      unsigned :6;
      unsigned LBUSY:1;
      unsigned ADTACT:1;
} typeADL2STATBITS;
sfr volatile typeADL2STATBITS ADL2STATbits absolute 0x55A;

// backward compatibility for ADTH2LBITS
    typedef struct tagADTH2LBITS {
      unsigned TH0:1;
      unsigned TH1:1;
      unsigned TH2:1;
      unsigned TH3:1;
      unsigned TH4:1;
      unsigned TH5:1;
      unsigned TH6:1;
      unsigned TH7:1;
      unsigned TH8:1;
      unsigned TH9:1;
      unsigned TH10:1;
      unsigned TH11:1;
      unsigned TH12:1;
      unsigned TH13:1;
      unsigned TH14:1;
      unsigned TH15:1;
} typeADTH2LBITS;
sfr volatile typeADTH2LBITS ADTH2Lbits absolute 0x55C;

// backward compatibility for ADTH2HBITS
    typedef struct tagADTH2HBITS {
      unsigned TH0:1;
      unsigned TH1:1;
      unsigned TH2:1;
      unsigned TH3:1;
      unsigned TH4:1;
      unsigned TH5:1;
      unsigned TH6:1;
      unsigned TH7:1;
      unsigned TH8:1;
      unsigned TH9:1;
      unsigned TH10:1;
      unsigned TH11:1;
      unsigned TH12:1;
      unsigned TH13:1;
      unsigned TH14:1;
      unsigned TH15:1;
} typeADTH2HBITS;
sfr volatile typeADTH2HBITS ADTH2Hbits absolute 0x55E;

// backward compatibility for ADL2MSEL0BITS
    typedef struct tagADL2MSEL0BITS {
      unsigned :15;
      unsigned MSEL15:1;
} typeADL2MSEL0BITS;
sfr volatile typeADL2MSEL0BITS ADL2MSEL0bits absolute 0x560;

// backward compatibility for ADL2MSEL1BITS
    typedef struct tagADL2MSEL1BITS {
      unsigned MSEL16:1;
      unsigned MSEL17:1;
      unsigned MSEL18:1;
      unsigned MSEL19:1;
      unsigned MSEL20:1;
      unsigned MSEL21:1;
      unsigned MSEL22:1;
      unsigned MSEL23:1;
      unsigned MSEL24:1;
      unsigned MSEL25:1;
      unsigned MSEL26:1;
      unsigned MSEL27:1;
      unsigned MSEL28:1;
      unsigned MSEL29:1;
      unsigned MSEL30:1;
      unsigned MSEL31:1;
} typeADL2MSEL1BITS;
sfr volatile typeADL2MSEL1BITS ADL2MSEL1bits absolute 0x562;

// backward compatibility for ADL2MSEL2BITS
    typedef struct tagADL2MSEL2BITS {
      unsigned MSEL32:1;
      unsigned MSEL33:1;
      unsigned MSEL34:1;
      unsigned MSEL35:1;
      unsigned MSEL36:1;
      unsigned MSEL37:1;
      unsigned MSEL38:1;
      unsigned MSEL39:1;
      unsigned MSEL40:1;
      unsigned MSEL41:1;
      unsigned MSEL42:1;
      unsigned MSEL43:1;
      unsigned MSEL44:1;
      unsigned MSEL45:1;
      unsigned MSEL46:1;
      unsigned MSEL47:1;
} typeADL2MSEL2BITS;
sfr volatile typeADL2MSEL2BITS ADL2MSEL2bits absolute 0x564;

// backward compatibility for ADL2MSEL3BITS
    typedef struct tagADL2MSEL3BITS {
      unsigned MSEL48:1;
      unsigned MSEL49:1;
} typeADL2MSEL3BITS;
sfr volatile typeADL2MSEL3BITS ADL2MSEL3bits absolute 0x566;

// backward compatibility for LCDREGBITS
    typedef struct tagLCDREGBITS {
      union {
        struct {
          unsigned CKSEL:2;
          unsigned MODE13:1;
          unsigned BIAS:3;
          unsigned :9;
          unsigned CPEN:1;
        };
        struct {
          unsigned CKSEL0:1;
          unsigned CKSEL1:1;
          unsigned :1;
          unsigned BIAS0:1;
          unsigned BIAS1:1;
          unsigned BIAS2:1;
        };
      };
} typeLCDREGBITS;
sfr volatile typeLCDREGBITS LCDREGbits absolute 0x580;

// backward compatibility for LCDREFBITS
    typedef struct tagLCDREFBITS {
      union {
        struct {
          unsigned LRLAT:3;
          unsigned :1;
          unsigned LRLBP:2;
          unsigned LRLAP:2;
          unsigned VLCD1PE:1;
          unsigned VLCD2PE:1;
          unsigned VLCD3PE:1;
          unsigned LCDCST:3;
          unsigned :1;
          unsigned LCDIRE:1;
        };
        struct {
          unsigned LRLAT0:1;
          unsigned LRLAT1:1;
          unsigned LRLAT2:1;
          unsigned :1;
          unsigned LRLBP0:1;
          unsigned LRLBP1:1;
          unsigned LRLAP0:1;
          unsigned LRLAP1:1;
          unsigned :3;
          unsigned LCDCST0:1;
          unsigned LCDCST1:1;
          unsigned LCDCST2:1;
        };
      };
} typeLCDREFBITS;
sfr volatile typeLCDREFBITS LCDREFbits absolute 0x582;

// backward compatibility for LCDCONBITS
    typedef struct tagLCDCONBITS {
      union {
        struct {
          unsigned LMUX:3;
          unsigned CS:2;
          unsigned WERR:1;
          unsigned SLPEN:1;
          unsigned :6;
          unsigned LCDSIDL:1;
          unsigned :1;
          unsigned LCDEN:1;
        };
        struct {
          unsigned LMUX0:1;
          unsigned LMUX1:1;
          unsigned LMUX2:1;
          unsigned CS0:1;
          unsigned CS1:1;
        };
      };
} typeLCDCONBITS;
sfr volatile typeLCDCONBITS LCDCONbits absolute 0x584;

// backward compatibility for LCDPSBITS
    typedef struct tagLCDPSBITS {
      union {
        struct {
          unsigned LP:4;
          unsigned WA:1;
          unsigned LCDA:1;
          unsigned BIASMD:1;
          unsigned WFT:1;
        };
        struct {
          unsigned LP0:1;
          unsigned LP1:1;
          unsigned LP2:1;
          unsigned LP3:1;
        };
      };
} typeLCDPSBITS;
sfr volatile typeLCDPSBITS LCDPSbits absolute 0x586;

// backward compatibility for LCDSE0BITS
    typedef struct tagLCDSE0BITS {
      unsigned SE00:1;
      unsigned SE01:1;
      unsigned SE02:1;
      unsigned SE03:1;
      unsigned SE04:1;
      unsigned SE05:1;
      unsigned SE06:1;
      unsigned SE07:1;
      unsigned SE08:1;
      unsigned SE09:1;
      unsigned SE10:1;
      unsigned SE11:1;
      unsigned SE12:1;
      unsigned SE13:1;
      unsigned SE14:1;
      unsigned SE15:1;
} typeLCDSE0BITS;
sfr volatile typeLCDSE0BITS LCDSE0bits absolute 0x588;

// backward compatibility for LCDSE1BITS
    typedef struct tagLCDSE1BITS {
      unsigned SE16:1;
      unsigned SE17:1;
      unsigned SE18:1;
      unsigned SE19:1;
      unsigned SE20:1;
      unsigned SE21:1;
      unsigned SE22:1;
      unsigned SE23:1;
      unsigned SE24:1;
      unsigned SE25:1;
      unsigned SE26:1;
      unsigned SE27:1;
      unsigned :2;
      unsigned SE30:1;
} typeLCDSE1BITS;
sfr volatile typeLCDSE1BITS LCDSE1bits absolute 0x58A;

// backward compatibility for LCDSE2BITS
    typedef struct tagLCDSE2BITS {
      unsigned :15;
      unsigned SE47:1;
} typeLCDSE2BITS;
sfr volatile typeLCDSE2BITS LCDSE2bits absolute 0x58C;

// backward compatibility for LCDSE3BITS
    typedef struct tagLCDSE3BITS {
      unsigned SE48:1;
      unsigned :13;
      unsigned SE62:1;
} typeLCDSE3BITS;
sfr volatile typeLCDSE3BITS LCDSE3bits absolute 0x58E;

// backward compatibility for LCDDATA0BITS
    typedef struct tagLCDDATA0BITS {
      unsigned S0C0:1;
      unsigned S1C0:1;
      unsigned S2C0:1;
      unsigned S3C0:1;
      unsigned S4C0:1;
      unsigned S5C0:1;
      unsigned S6C0:1;
      unsigned S7C0:1;
      unsigned S8C0:1;
      unsigned S9C0:1;
      unsigned S10C0:1;
      unsigned S11C0:1;
      unsigned S12C0:1;
      unsigned S13C0:1;
      unsigned S14C0:1;
      unsigned S15C0:1;
} typeLCDDATA0BITS;
sfr volatile typeLCDDATA0BITS LCDDATA0bits absolute 0x590;

// backward compatibility for LCDDATA1BITS
    typedef struct tagLCDDATA1BITS {
      unsigned S16C0:1;
      unsigned S17C0:1;
      unsigned S18C0:1;
      unsigned S19C0:1;
      unsigned S20C0:1;
      unsigned S21C0:1;
      unsigned S22C0:1;
      unsigned S23C0:1;
      unsigned S24C0:1;
      unsigned S25C0:1;
      unsigned S26C0:1;
      unsigned S27C0:1;
      unsigned :2;
      unsigned S30C0:1;
} typeLCDDATA1BITS;
sfr volatile typeLCDDATA1BITS LCDDATA1bits absolute 0x592;

// backward compatibility for LCDDATA2BITS
    typedef struct tagLCDDATA2BITS {
      unsigned :15;
      unsigned S47C0:1;
} typeLCDDATA2BITS;
sfr volatile typeLCDDATA2BITS LCDDATA2bits absolute 0x594;

// backward compatibility for LCDDATA3BITS
    typedef struct tagLCDDATA3BITS {
      unsigned S48C0:1;
      unsigned :13;
      unsigned S62C0:1;
} typeLCDDATA3BITS;
sfr volatile typeLCDDATA3BITS LCDDATA3bits absolute 0x596;

// backward compatibility for LCDDATA4BITS
    typedef struct tagLCDDATA4BITS {
      unsigned S0C1:1;
      unsigned S1C1:1;
      unsigned S2C1:1;
      unsigned S3C1:1;
      unsigned S4C1:1;
      unsigned S5C1:1;
      unsigned S6C1:1;
      unsigned S7C1:1;
      unsigned S8C1:1;
      unsigned S9C1:1;
      unsigned S10C1:1;
      unsigned S11C1:1;
      unsigned S12C1:1;
      unsigned S13C1:1;
      unsigned S14C1:1;
      unsigned S15C1:1;
} typeLCDDATA4BITS;
sfr volatile typeLCDDATA4BITS LCDDATA4bits absolute 0x598;

// backward compatibility for LCDDATA5BITS
    typedef struct tagLCDDATA5BITS {
      unsigned S16C1:1;
      unsigned S17C1:1;
      unsigned S18C1:1;
      unsigned S19C1:1;
      unsigned S20C1:1;
      unsigned S21C1:1;
      unsigned S22C1:1;
      unsigned S23C1:1;
      unsigned S24C1:1;
      unsigned S25C1:1;
      unsigned S26C1:1;
      unsigned S27C1:1;
      unsigned :2;
      unsigned S30C1:1;
} typeLCDDATA5BITS;
sfr volatile typeLCDDATA5BITS LCDDATA5bits absolute 0x59A;

// backward compatibility for LCDDATA6BITS
    typedef struct tagLCDDATA6BITS {
      unsigned :15;
      unsigned S47C1:1;
} typeLCDDATA6BITS;
sfr volatile typeLCDDATA6BITS LCDDATA6bits absolute 0x59C;

// backward compatibility for LCDDATA7BITS
    typedef struct tagLCDDATA7BITS {
      unsigned S48C1:1;
      unsigned :13;
      unsigned S62C1:1;
} typeLCDDATA7BITS;
sfr volatile typeLCDDATA7BITS LCDDATA7bits absolute 0x59E;

// backward compatibility for LCDDATA8BITS
    typedef struct tagLCDDATA8BITS {
      unsigned S0C2:1;
      unsigned S1C2:1;
      unsigned S2C2:1;
      unsigned S3C2:1;
      unsigned S4C2:1;
      unsigned S5C2:1;
      unsigned S6C2:1;
      unsigned S7C2:1;
      unsigned S8C2:1;
      unsigned S9C2:1;
      unsigned S10C2:1;
      unsigned S11C2:1;
      unsigned S12C2:1;
      unsigned S13C2:1;
      unsigned S14C2:1;
      unsigned S15C2:1;
} typeLCDDATA8BITS;
sfr volatile typeLCDDATA8BITS LCDDATA8bits absolute 0x5A0;

// backward compatibility for LCDDATA9BITS
    typedef struct tagLCDDATA9BITS {
      unsigned S16C2:1;
      unsigned S17C2:1;
      unsigned S18C2:1;
      unsigned S19C2:1;
      unsigned S20C2:1;
      unsigned S21C2:1;
      unsigned S22C2:1;
      unsigned S23C2:1;
      unsigned S24C2:1;
      unsigned S25C2:1;
      unsigned S26C2:1;
      unsigned S27C2:1;
      unsigned :2;
      unsigned S30C2:1;
} typeLCDDATA9BITS;
sfr volatile typeLCDDATA9BITS LCDDATA9bits absolute 0x5A2;

// backward compatibility for LCDDATA10BITS
    typedef struct tagLCDDATA10BITS {
      unsigned :15;
      unsigned S47C2:1;
} typeLCDDATA10BITS;
sfr volatile typeLCDDATA10BITS LCDDATA10bits absolute 0x5A4;

// backward compatibility for LCDDATA11BITS
    typedef struct tagLCDDATA11BITS {
      unsigned S48C2:1;
      unsigned :13;
      unsigned S62C2:1;
} typeLCDDATA11BITS;
sfr volatile typeLCDDATA11BITS LCDDATA11bits absolute 0x5A6;

// backward compatibility for LCDDATA12BITS
    typedef struct tagLCDDATA12BITS {
      unsigned S0C3:1;
      unsigned S1C3:1;
      unsigned S2C3:1;
      unsigned S3C3:1;
      unsigned S4C3:1;
      unsigned S5C3:1;
      unsigned S6C3:1;
      unsigned S7C3:1;
      unsigned S8C3:1;
      unsigned S9C3:1;
      unsigned S10C3:1;
      unsigned S11C3:1;
      unsigned S12C3:1;
      unsigned S13C3:1;
      unsigned S14C3:1;
      unsigned S15C3:1;
} typeLCDDATA12BITS;
sfr volatile typeLCDDATA12BITS LCDDATA12bits absolute 0x5A8;

// backward compatibility for LCDDATA13BITS
    typedef struct tagLCDDATA13BITS {
      unsigned S16C3:1;
      unsigned S17C3:1;
      unsigned S18C3:1;
      unsigned S19C3:1;
      unsigned S20C3:1;
      unsigned S21C3:1;
      unsigned S22C3:1;
      unsigned S23C3:1;
      unsigned S24C3:1;
      unsigned S25C3:1;
      unsigned S26C3:1;
      unsigned S27C3:1;
      unsigned :2;
      unsigned S30C3:1;
} typeLCDDATA13BITS;
sfr volatile typeLCDDATA13BITS LCDDATA13bits absolute 0x5AA;

// backward compatibility for LCDDATA14BITS
    typedef struct tagLCDDATA14BITS {
      unsigned :15;
      unsigned S47C3:1;
} typeLCDDATA14BITS;
sfr volatile typeLCDDATA14BITS LCDDATA14bits absolute 0x5AC;

// backward compatibility for LCDDATA15BITS
    typedef struct tagLCDDATA15BITS {
      unsigned S48C3:1;
      unsigned :13;
      unsigned S62C3:1;
} typeLCDDATA15BITS;
sfr volatile typeLCDDATA15BITS LCDDATA15bits absolute 0x5AE;

// backward compatibility for LCDDATA16BITS
    typedef struct tagLCDDATA16BITS {
      unsigned S0C4:1;
      unsigned S1C4:1;
      unsigned S2C4:1;
      unsigned S3C4:1;
      unsigned S4C4:1;
      unsigned S5C4:1;
      unsigned S6C4:1;
      unsigned S7C4:1;
      unsigned S8C4:1;
      unsigned S9C4:1;
      unsigned S10C4:1;
      unsigned S11C4:1;
      unsigned S12C4:1;
      unsigned S13C4:1;
      unsigned S14C4:1;
      unsigned S15C4:1;
} typeLCDDATA16BITS;
sfr volatile typeLCDDATA16BITS LCDDATA16bits absolute 0x5B0;

// backward compatibility for LCDDATA17BITS
    typedef struct tagLCDDATA17BITS {
      unsigned S16C4:1;
      unsigned S17C4:1;
      unsigned S18C4:1;
      unsigned S19C4:1;
      unsigned S20C4:1;
      unsigned S21C4:1;
      unsigned S22C4:1;
      unsigned S23C4:1;
      unsigned S24C4:1;
      unsigned S25C4:1;
      unsigned S26C4:1;
      unsigned S27C4:1;
      unsigned :2;
      unsigned S30C4:1;
} typeLCDDATA17BITS;
sfr volatile typeLCDDATA17BITS LCDDATA17bits absolute 0x5B2;

// backward compatibility for LCDDATA18BITS
    typedef struct tagLCDDATA18BITS {
      unsigned :15;
      unsigned S47C4:1;
} typeLCDDATA18BITS;
sfr volatile typeLCDDATA18BITS LCDDATA18bits absolute 0x5B4;

// backward compatibility for LCDDATA19BITS
    typedef struct tagLCDDATA19BITS {
      unsigned S48C4:1;
      unsigned :13;
      unsigned S62C4:1;
} typeLCDDATA19BITS;
sfr volatile typeLCDDATA19BITS LCDDATA19bits absolute 0x5B6;

// backward compatibility for LCDDATA20BITS
    typedef struct tagLCDDATA20BITS {
      unsigned S0C5:1;
      unsigned S1C5:1;
      unsigned S2C5:1;
      unsigned S3C5:1;
      unsigned S4C5:1;
      unsigned S5C5:1;
      unsigned S6C5:1;
      unsigned S7C5:1;
      unsigned S8C5:1;
      unsigned S9C5:1;
      unsigned S10C5:1;
      unsigned S11C5:1;
      unsigned S12C5:1;
      unsigned S13C5:1;
      unsigned S14C5:1;
      unsigned S15C5:1;
} typeLCDDATA20BITS;
sfr volatile typeLCDDATA20BITS LCDDATA20bits absolute 0x5B8;

// backward compatibility for LCDDATA21BITS
    typedef struct tagLCDDATA21BITS {
      unsigned S16C5:1;
      unsigned S17C5:1;
      unsigned S18C5:1;
      unsigned S19C5:1;
      unsigned S20C5:1;
      unsigned S21C5:1;
      unsigned S22C5:1;
      unsigned S23C5:1;
      unsigned S24C5:1;
      unsigned S25C5:1;
      unsigned S26C5:1;
      unsigned S27C5:1;
      unsigned :2;
      unsigned S30C5:1;
} typeLCDDATA21BITS;
sfr volatile typeLCDDATA21BITS LCDDATA21bits absolute 0x5BA;

// backward compatibility for LCDDATA22BITS
    typedef struct tagLCDDATA22BITS {
      unsigned :15;
      unsigned S47C5:1;
} typeLCDDATA22BITS;
sfr volatile typeLCDDATA22BITS LCDDATA22bits absolute 0x5BC;

// backward compatibility for LCDDATA23BITS
    typedef struct tagLCDDATA23BITS {
      unsigned S48C5:1;
      unsigned :13;
      unsigned S62C5:1;
} typeLCDDATA23BITS;
sfr volatile typeLCDDATA23BITS LCDDATA23bits absolute 0x5BE;

// backward compatibility for LCDDATA24BITS
    typedef struct tagLCDDATA24BITS {
      unsigned S0C6:1;
      unsigned S1C6:1;
      unsigned S2C6:1;
      unsigned S3C6:1;
      unsigned S4C6:1;
      unsigned S5C6:1;
      unsigned S6C6:1;
      unsigned S7C6:1;
      unsigned S8C6:1;
      unsigned S9C6:1;
      unsigned S10C6:1;
      unsigned S11C6:1;
      unsigned S12C6:1;
      unsigned S13C6:1;
      unsigned S14C6:1;
      unsigned S15C6:1;
} typeLCDDATA24BITS;
sfr volatile typeLCDDATA24BITS LCDDATA24bits absolute 0x5C0;

// backward compatibility for LCDDATA25BITS
    typedef struct tagLCDDATA25BITS {
      unsigned S16C6:1;
      unsigned S17C6:1;
      unsigned S18C6:1;
      unsigned S19C6:1;
      unsigned S20C6:1;
      unsigned S21C6:1;
      unsigned S22C6:1;
      unsigned S23C6:1;
      unsigned S24C6:1;
      unsigned S25C6:1;
      unsigned S26C6:1;
      unsigned S27C6:1;
      unsigned :2;
      unsigned S30C6:1;
} typeLCDDATA25BITS;
sfr volatile typeLCDDATA25BITS LCDDATA25bits absolute 0x5C2;

// backward compatibility for LCDDATA26BITS
    typedef struct tagLCDDATA26BITS {
      unsigned :15;
      unsigned S47C6:1;
} typeLCDDATA26BITS;
sfr volatile typeLCDDATA26BITS LCDDATA26bits absolute 0x5C4;

// backward compatibility for LCDDATA27BITS
    typedef struct tagLCDDATA27BITS {
      unsigned S48C6:1;
      unsigned :13;
      unsigned S62C6:1;
} typeLCDDATA27BITS;
sfr volatile typeLCDDATA27BITS LCDDATA27bits absolute 0x5C6;

// backward compatibility for LCDDATA28BITS
    typedef struct tagLCDDATA28BITS {
      unsigned S0C7:1;
      unsigned S1C7:1;
      unsigned S2C7:1;
      unsigned S3C7:1;
      unsigned S4C7:1;
      unsigned S5C7:1;
      unsigned S6C7:1;
      unsigned S7C7:1;
      unsigned S8C7:1;
      unsigned S9C7:1;
      unsigned S10C7:1;
      unsigned S11C7:1;
      unsigned S12C7:1;
      unsigned S13C7:1;
      unsigned S14C7:1;
      unsigned S15C7:1;
} typeLCDDATA28BITS;
sfr volatile typeLCDDATA28BITS LCDDATA28bits absolute 0x5C8;

// backward compatibility for LCDDATA29BITS
    typedef struct tagLCDDATA29BITS {
      unsigned S16C7:1;
      unsigned S17C7:1;
      unsigned S18C7:1;
      unsigned S19C7:1;
      unsigned S20C7:1;
      unsigned S21C7:1;
      unsigned S22C7:1;
      unsigned S23C7:1;
      unsigned S24C7:1;
      unsigned S25C7:1;
      unsigned S26C7:1;
      unsigned S27C7:1;
      unsigned :2;
      unsigned S30C7:1;
} typeLCDDATA29BITS;
sfr volatile typeLCDDATA29BITS LCDDATA29bits absolute 0x5CA;

// backward compatibility for LCDDATA30BITS
    typedef struct tagLCDDATA30BITS {
      unsigned :15;
      unsigned S47C7:1;
} typeLCDDATA30BITS;
sfr volatile typeLCDDATA30BITS LCDDATA30bits absolute 0x5CC;

// backward compatibility for LCDDATA31BITS
    typedef struct tagLCDDATA31BITS {
      unsigned S48C7:1;
      unsigned :13;
      unsigned S62C7:1;
} typeLCDDATA31BITS;
sfr volatile typeLCDDATA31BITS LCDDATA31bits absolute 0x5CE;

// backward compatibility for PMCON1BITS
    typedef struct tagPMCON1BITS {
      union {
        struct {
          unsigned IRQM:2;
          unsigned BUSKEEP:1;
          unsigned :1;
          unsigned ALMODE:1;
          unsigned ALP:1;
          unsigned CSF:2;
          unsigned MODE:2;
          unsigned :1;
          unsigned ADRMUX:2;
          unsigned PSIDL:1;
          unsigned :1;
          unsigned PMPEN:1;
        };
        struct {
          unsigned IRQM0:1;
          unsigned IRQM1:1;
          unsigned :4;
          unsigned CSF0:1;
          unsigned CSF1:1;
          unsigned MODE0:1;
          unsigned MODE1:1;
          unsigned :1;
          unsigned ADRMUX0:1;
          unsigned ADRMUX1:1;
        };
      };
} typePMCON1BITS;
sfr volatile typePMCON1BITS PMCON1bits absolute 0x600;

// backward compatibility for PMCON2BITS
    typedef struct tagPMCON2BITS {
      union {
        struct {
          unsigned RADDR:8;
          unsigned :4;
          unsigned TIMEOUT:1;
          unsigned ERROR:1;
          unsigned :1;
          unsigned BUSY:1;
        };
        struct {
          unsigned RADDR16:1;
          unsigned RADDR17:1;
          unsigned RADDR18:1;
          unsigned RADDR19:1;
          unsigned RADDR20:1;
          unsigned RADDR21:1;
          unsigned RADDR22:1;
          unsigned RADDR23:1;
        };
      };
} typePMCON2BITS;
sfr volatile typePMCON2BITS PMCON2bits absolute 0x602;

// backward compatibility for PMCON3BITS
    typedef struct tagPMCON3BITS {
      union {
        struct {
          unsigned PTEN16:1;
          unsigned PTEN17:1;
          unsigned PTEN18:1;
          unsigned PTEN19:1;
          unsigned PTEN20:1;
          unsigned PTEN21:1;
          unsigned PTEN22:1;
          unsigned :1;
          unsigned AWAITE:1;
          unsigned AWAITM:2;
          unsigned :1;
          unsigned PTBE0EN:1;
          unsigned PTBE1EN:1;
          unsigned PTRDEN:1;
          unsigned PTWREN:1;
        };
        struct {
          unsigned :9;
          unsigned AWAITM0:1;
          unsigned AWAITM1:1;
        };
      };
} typePMCON3BITS;
sfr volatile typePMCON3BITS PMCON3bits absolute 0x604;

// backward compatibility for PMCON4BITS
    typedef struct tagPMCON4BITS {
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
} typePMCON4BITS;
sfr volatile typePMCON4BITS PMCON4bits absolute 0x606;

// backward compatibility for PMCS1CFBITS
    typedef struct tagPMCS1CFBITS {
      union {
        struct {
          unsigned :5;
          unsigned PTSZ:2;
          unsigned ACKP:1;
          unsigned SM:1;
          unsigned RDSP:1;
          unsigned WRSP:1;
          unsigned :1;
          unsigned BEP:1;
          unsigned CSPTEN:1;
          unsigned CSP:1;
          unsigned CSDIS:1;
        };
        struct {
          unsigned :5;
          unsigned PTSZ0:1;
          unsigned PTSZ1:1;
        };
      };
} typePMCS1CFBITS;
sfr volatile typePMCS1CFBITS PMCS1CFbits absolute 0x608;

// backward compatibility for PMCS1BSBITS
    typedef struct tagPMCS1BSBITS {
      unsigned :3;
      unsigned BASE11:1;
      unsigned :3;
      unsigned BASE15:1;
      unsigned BASE16:1;
      unsigned BASE17:1;
      unsigned BASE18:1;
      unsigned BASE19:1;
      unsigned BASE20:1;
      unsigned BASE21:1;
      unsigned BASE22:1;
      unsigned BASE23:1;
} typePMCS1BSBITS;
sfr volatile typePMCS1BSBITS PMCS1BSbits absolute 0x60A;

// backward compatibility for PMCS1MDBITS
    typedef struct tagPMCS1MDBITS {
      union {
        struct {
          unsigned DWAITE:2;
          unsigned DWAITM:4;
          unsigned DWAITB:2;
          unsigned :3;
          unsigned AMWAIT:3;
          unsigned ACKM:2;
        };
        struct {
          unsigned DWAITE0:1;
          unsigned DWAITE1:1;
          unsigned DWAITM0:1;
          unsigned DWAITM1:1;
          unsigned DWAITM2:1;
          unsigned DWAITM3:1;
          unsigned DWAITB0:1;
          unsigned DWAITB1:1;
          unsigned :3;
          unsigned AMWAIT0:1;
          unsigned AMWAIT1:1;
          unsigned AMWAIT2:1;
          unsigned ACKM0:1;
          unsigned ACKM1:1;
        };
      };
} typePMCS1MDBITS;
sfr volatile typePMCS1MDBITS PMCS1MDbits absolute 0x60C;

// backward compatibility for PMCS2CFBITS
    typedef struct tagPMCS2CFBITS {
      union {
        struct {
          unsigned :5;
          unsigned PTSZ:2;
          unsigned ACKP:1;
          unsigned SM:1;
          unsigned RDSP:1;
          unsigned WRSP:1;
          unsigned :1;
          unsigned BEP:1;
          unsigned CSPTEN:1;
          unsigned CSP:1;
          unsigned CSDIS:1;
        };
        struct {
          unsigned :5;
          unsigned PTSZ0:1;
          unsigned PTSZ1:1;
        };
      };
} typePMCS2CFBITS;
sfr volatile typePMCS2CFBITS PMCS2CFbits absolute 0x60E;

// backward compatibility for PMCS2BSBITS
    typedef struct tagPMCS2BSBITS {
      unsigned :3;
      unsigned BASE11:1;
      unsigned :3;
      unsigned BASE15:1;
      unsigned BASE16:1;
      unsigned BASE17:1;
      unsigned BASE18:1;
      unsigned BASE19:1;
      unsigned BASE20:1;
      unsigned BASE21:1;
      unsigned BASE22:1;
      unsigned BASE23:1;
} typePMCS2BSBITS;
sfr volatile typePMCS2BSBITS PMCS2BSbits absolute 0x610;

// backward compatibility for PMCS2MDBITS
    typedef struct tagPMCS2MDBITS {
      union {
        struct {
          unsigned DWAITE:2;
          unsigned DWAITM:4;
          unsigned DWAITB:2;
          unsigned :3;
          unsigned AMWAIT:3;
          unsigned ACKM:2;
        };
        struct {
          unsigned DWAITE0:1;
          unsigned DWAITE1:1;
          unsigned DWAITM0:1;
          unsigned DWAITM1:1;
          unsigned DWAITM2:1;
          unsigned DWAITM3:1;
          unsigned DWAITB0:1;
          unsigned DWAITB1:1;
          unsigned :3;
          unsigned AMWAIT0:1;
          unsigned AMWAIT1:1;
          unsigned AMWAIT2:1;
          unsigned ACKM0:1;
          unsigned ACKM1:1;
        };
      };
} typePMCS2MDBITS;
sfr volatile typePMCS2MDBITS PMCS2MDbits absolute 0x612;

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
sfr volatile typePMSTATBITS PMSTATbits absolute 0x61C;

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

// backward compatibility for RTCPWCBITS
    typedef struct tagRTCPWCBITS {
      union {
        struct {
          unsigned :8;
          unsigned RTCOUT:2;
          unsigned RTCLK:2;
          unsigned PWSPRE:1;
          unsigned PWCPRE:1;
          unsigned PWCPOL:1;
          unsigned PWCEN:1;
        };
        struct {
          unsigned :8;
          unsigned RTCOUT0:1;
          unsigned RTCOUT1:1;
          unsigned RTCLK0:1;
          unsigned RTCLK1:1;
          unsigned PWCSPRE:1;
          unsigned PWCCPRE:1;
        };
        struct {
          unsigned :10;
          unsigned RTCCLK:2;
        };
        struct {
          unsigned :10;
          unsigned RTCCLK0:1;
          unsigned RTCCLK1:1;
        };
      };
} typeRTCPWCBITS;
sfr volatile typeRTCPWCBITS RTCPWCbits absolute 0x628;

// backward compatibility for MDCONBITS
    typedef struct tagMDCONBITS {
      unsigned MDBIT:1;
      unsigned :3;
      unsigned MDOPOL:1;
      unsigned MDSLR:1;
      unsigned MDOE:1;
      unsigned :6;
      unsigned MDSIDL:1;
      unsigned :1;
      unsigned MDEN:1;
} typeMDCONBITS;
sfr volatile typeMDCONBITS MDCONbits absolute 0x62A;

// backward compatibility for MDSRCBITS
    typedef struct tagMDSRCBITS {
      union {
        struct {
          unsigned MS:4;
          unsigned :3;
          unsigned SODIS:1;
        };
        struct {
          unsigned MS0:1;
          unsigned MS1:1;
          unsigned MS2:1;
          unsigned MS3:1;
        };
      };
} typeMDSRCBITS;
sfr volatile typeMDSRCBITS MDSRCbits absolute 0x62C;

// backward compatibility for MDCARBITS
    typedef struct tagMDCARBITS {
      union {
        struct {
          unsigned CL:4;
          unsigned :1;
          unsigned CLSYNC:1;
          unsigned CLPOL:1;
          unsigned CLODIS:1;
          unsigned CH:4;
          unsigned :1;
          unsigned CHSYNC:1;
          unsigned CHPOL:1;
          unsigned CHODIS:1;
        };
        struct {
          unsigned CL0:1;
          unsigned CL1:1;
          unsigned CL2:1;
          unsigned CL3:1;
          unsigned :4;
          unsigned CH0:1;
          unsigned CH1:1;
          unsigned CH2:1;
          unsigned CH3:1;
        };
      };
} typeMDCARBITS;
sfr volatile typeMDCARBITS MDCARbits absolute 0x62E;

// backward compatibility for CMSTATBITS
    typedef struct tagCMSTATBITS {
      union {
        struct {
          unsigned C1OUT:1;
          unsigned C2OUT:1;
          unsigned C3OUT:1;
          unsigned :5;
          unsigned C1EVT:1;
          unsigned C2EVT:1;
          unsigned C3EVT:1;
          unsigned :4;
          unsigned CMIDL:1;
        };
        struct {
          unsigned :15;
          unsigned CMSIDL:1;
        };
      };
} typeCMSTATBITS;
sfr volatile typeCMSTATBITS CMSTATbits absolute 0x630;

// backward compatibility for CVRCONBITS
    typedef struct tagCVRCONBITS {
      union {
        struct {
          unsigned CVR:5;
          unsigned CVRSS:1;
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
          unsigned CVR4:1;
          unsigned :3;
          unsigned CVREFM0:1;
          unsigned CVREFM1:1;
        };
      };
} typeCVRCONBITS;
sfr volatile typeCVRCONBITS CVRCONbits absolute 0x632;

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
          unsigned CEN:1;
        };
        struct {
          unsigned CCH0:1;
          unsigned CCH1:1;
          unsigned :4;
          unsigned EVPOL0:1;
          unsigned EVPOL1:1;
          unsigned :7;
          unsigned CON:1;
        };
      };
} typeCM1CONBITS;
sfr volatile typeCM1CONBITS CM1CONbits absolute 0x634;

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
          unsigned CEN:1;
        };
        struct {
          unsigned CCH0:1;
          unsigned CCH1:1;
          unsigned :4;
          unsigned EVPOL0:1;
          unsigned EVPOL1:1;
          unsigned :7;
          unsigned CON:1;
        };
      };
} typeCM2CONBITS;
sfr volatile typeCM2CONBITS CM2CONbits absolute 0x636;

// backward compatibility for CM3CONBITS
    typedef struct tagCM3CONBITS {
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
          unsigned CEN:1;
        };
        struct {
          unsigned CCH0:1;
          unsigned CCH1:1;
          unsigned :4;
          unsigned EVPOL0:1;
          unsigned EVPOL1:1;
          unsigned :7;
          unsigned CON:1;
        };
      };
} typeCM3CONBITS;
sfr volatile typeCM3CONBITS CM3CONbits absolute 0x638;

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

// backward compatibility for BUFCON0BITS
    typedef struct tagBUFCON0BITS {
      union {
        struct {
          unsigned BUFREF:2;
          unsigned :4;
          unsigned BUFSTBY:1;
          unsigned :5;
          unsigned BUFSLP:1;
          unsigned BUFSIDL:1;
          unsigned :1;
          unsigned BUFEN:1;
        };
        struct {
          unsigned BUFREF0:1;
          unsigned BUFREF1:1;
        };
      };
} typeBUFCON0BITS;
sfr volatile typeBUFCON0BITS BUFCON0bits absolute 0x670;

// backward compatibility for BUFCON1BITS
    typedef struct tagBUFCON1BITS {
      union {
        struct {
          unsigned BUFREF:2;
          unsigned :4;
          unsigned BUFSTBY:1;
          unsigned BUFOE:1;
          unsigned :4;
          unsigned BUFSLP:1;
          unsigned BUFSIDL:1;
          unsigned :1;
          unsigned BUFEN:1;
        };
        struct {
          unsigned BUFREF0:1;
          unsigned BUFREF1:1;
        };
      };
} typeBUFCON1BITS;
sfr volatile typeBUFCON1BITS BUFCON1bits absolute 0x672;

// backward compatibility for BUFCON2BITS
    typedef struct tagBUFCON2BITS {
      union {
        struct {
          unsigned BUFREF:2;
          unsigned :4;
          unsigned BUFSTBY:1;
          unsigned BUFOE:1;
          unsigned :4;
          unsigned BUFSLP:1;
          unsigned BUFSIDL:1;
          unsigned :1;
          unsigned BUFEN:1;
        };
        struct {
          unsigned BUFREF0:1;
          unsigned BUFREF1:1;
        };
      };
} typeBUFCON2BITS;
sfr volatile typeBUFCON2BITS BUFCON2bits absolute 0x674;

// backward compatibility for RPINR0BITS
    typedef struct tagRPINR0BITS {
      union {
        struct {
          unsigned OCTRIG1R:6;
          unsigned :2;
          unsigned INT1R:6;
        };
        struct {
          unsigned OCTRIG1R0:1;
          unsigned OCTRIG1R1:1;
          unsigned OCTRIG1R2:1;
          unsigned OCTRIG1R3:1;
          unsigned OCTRIG1R4:1;
          unsigned OCTRIG1R5:1;
          unsigned :2;
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
          unsigned OCTRIG2R:6;
        };
        struct {
          unsigned INT4R0:1;
          unsigned INT4R1:1;
          unsigned INT4R2:1;
          unsigned INT4R3:1;
          unsigned INT4R4:1;
          unsigned INT4R5:1;
          unsigned :2;
          unsigned OCTRIG2R0:1;
          unsigned OCTRIG2R1:1;
          unsigned OCTRIG2R2:1;
          unsigned OCTRIG2R3:1;
          unsigned OCTRIG2R4:1;
          unsigned OCTRIG2R5:1;
        };
      };
} typeRPINR2BITS;
sfr volatile typeRPINR2BITS RPINR2bits absolute 0x684;

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
          unsigned :2;
          unsigned TMRCKR:6;
        };
        struct {
          unsigned SS2R0:1;
          unsigned SS2R1:1;
          unsigned SS2R2:1;
          unsigned SS2R3:1;
          unsigned SS2R4:1;
          unsigned SS2R5:1;
          unsigned :2;
          unsigned TMRCKR0:1;
          unsigned TMRCKR1:1;
          unsigned TMRCKR2:1;
          unsigned TMRCKR3:1;
          unsigned TMRCKR4:1;
          unsigned TMRCKR5:1;
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

// backward compatibility for RPINR30BITS
    typedef struct tagRPINR30BITS {
      union {
        struct {
          unsigned MDMIR:6;
        };
        struct {
          unsigned MDMINR:6;
        };
      };
} typeRPINR30BITS;
sfr volatile typeRPINR30BITS RPINR30bits absolute 0x6BC;

// backward compatibility for RPINR31BITS
    typedef struct tagRPINR31BITS {
      union {
        struct {
          unsigned MDC1R:6;
          unsigned :2;
          unsigned MDC2R:6;
        };
        struct {
          unsigned MDC1R0:1;
          unsigned MDC1R1:1;
          unsigned MDC1R2:1;
          unsigned MDC1R3:1;
          unsigned MDC1R4:1;
          unsigned MDC1R5:1;
          unsigned :2;
          unsigned MDC2R0:1;
          unsigned MDC2R1:1;
          unsigned MDC2R2:1;
          unsigned MDC2R3:1;
          unsigned MDC2R4:1;
          unsigned MDC2R5:1;
        };
      };
} typeRPINR31BITS;
sfr volatile typeRPINR31BITS RPINR31bits absolute 0x6BE;

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
        };
        struct {
          unsigned RP4R0:1;
          unsigned RP4R1:1;
          unsigned RP4R2:1;
          unsigned RP4R3:1;
          unsigned RP4R4:1;
          unsigned RP4R5:1;
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
        };
        struct {
          unsigned RP14R0:1;
          unsigned RP14R1:1;
          unsigned RP14R2:1;
          unsigned RP14R3:1;
          unsigned RP14R4:1;
          unsigned RP14R5:1;
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

// backward compatibility for RPOR17BITS
    typedef struct tagRPOR17BITS {
      union {
        struct {
          unsigned :8;
          unsigned RP35R:6;
        };
        struct {
          unsigned :8;
          unsigned RP35R0:1;
          unsigned RP35R1:1;
          unsigned RP35R2:1;
          unsigned RP35R3:1;
          unsigned RP35R4:1;
          unsigned RP35R5:1;
        };
      };
} typeRPOR17BITS;
sfr volatile typeRPOR17BITS RPOR17bits absolute 0x6E2;

// backward compatibility for RPOR18BITS
    typedef struct tagRPOR18BITS {
      union {
        struct {
          unsigned RP36R:6;
          unsigned :2;
          unsigned RP37R:6;
        };
        struct {
          unsigned RP36R0:1;
          unsigned RP36R1:1;
          unsigned RP36R2:1;
          unsigned RP36R3:1;
          unsigned RP36R4:1;
          unsigned RP36R5:1;
          unsigned :2;
          unsigned RP37R0:1;
          unsigned RP37R1:1;
          unsigned RP37R2:1;
          unsigned RP37R3:1;
          unsigned RP37R4:1;
          unsigned RP37R5:1;
        };
      };
} typeRPOR18BITS;
sfr volatile typeRPOR18BITS RPOR18bits absolute 0x6E4;

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
          unsigned :1;
          unsigned RETEN:1;
          unsigned :1;
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
          unsigned :8;
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
          unsigned :5;
          unsigned PLLEN:1;
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
      };
} typeCLKDIVBITS;
sfr volatile typeCLKDIVBITS CLKDIVbits absolute 0x746;

// backward compatibility for OSCTUNBITS
    typedef struct tagOSCTUNBITS {
      union {
        struct {
          unsigned TUN:6;
          unsigned :2;
          unsigned STORPOL:1;
          unsigned STOR:1;
          unsigned STLPOL:1;
          unsigned STLOCK:1;
          unsigned STSRC:1;
          unsigned STSIDL:1;
          unsigned :1;
          unsigned STEN:1;
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

// backward compatibility for HLVDCONBITS
    typedef struct tagHLVDCONBITS {
      union {
        struct {
          unsigned HLVDL:4;
          unsigned :1;
          unsigned IRVST:1;
          unsigned BGVST:1;
          unsigned VDIR:1;
          unsigned :5;
          unsigned LSIDL:1;
          unsigned :1;
          unsigned HLVDEN:1;
        };
        struct {
          unsigned HLVDL0:1;
          unsigned HLVDL1:1;
          unsigned HLVDL2:1;
          unsigned HLVDL3:1;
          unsigned :9;
          unsigned HLSIDL:1;
        };
      };
} typeHLVDCONBITS;
sfr volatile typeHLVDCONBITS HLVDCONbits absolute 0x756;

// backward compatibility for DSCONBITS
    typedef struct tagDSCONBITS {
      unsigned RELEASE:1;
      unsigned DSBOR:1;
      unsigned WAKEDIS:1;
      unsigned :12;
      unsigned DSEN:1;
} typeDSCONBITS;
sfr volatile typeDSCONBITS DSCONbits absolute 0x758;

// backward compatibility for DSWAKEBITS
    typedef struct tagDSWAKEBITS {
      unsigned :2;
      unsigned DSMCLR:1;
      unsigned DSRTCC:1;
      unsigned DSWDT:1;
      unsigned :2;
      unsigned DSFLT:1;
      unsigned DSINT0:1;
} typeDSWAKEBITS;
sfr volatile typeDSWAKEBITS DSWAKEbits absolute 0x75A;

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
      };
} typeNVMCONBITS;
sfr volatile typeNVMCONBITS NVMCONbits absolute 0x760;

// backward compatibility for RCON2BITS
    typedef struct tagRCON2BITS {
      unsigned VBAT:1;
      unsigned VBPOR:1;
      unsigned VDDPOR:1;
      unsigned VDDBOR:1;
} typeRCON2BITS;
sfr volatile typeRCON2BITS RCON2bits absolute 0x762;

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
          unsigned :1;
          unsigned U3MD:1;
          unsigned :2;
          unsigned DAC1MD:1;
          unsigned CRCMD:1;
          unsigned PMPMD:1;
          unsigned RTCCMD:1;
          unsigned CMPMD:1;
          unsigned DSMMD:1;
        };
        struct {
          unsigned :7;
          unsigned CRCPMD:1;
        };
        struct {
          unsigned :11;
          unsigned TXMMD:1;
        };
      };
} typePMD3BITS;
sfr volatile typePMD3BITS PMD3bits absolute 0x774;

// backward compatibility for PMD4BITS
    typedef struct tagPMD4BITS {
      union {
        struct {
          unsigned USB1MD:1;
          unsigned LVDMD:1;
          unsigned CTMUMD:1;
          unsigned REFOMD:1;
          unsigned :1;
          unsigned U4MD:1;
          unsigned UPWMMD:1;
        };
        struct {
          unsigned USBMD:1;
        };
        struct {
          unsigned :1;
          unsigned HLVDMD:1;
        };
      };
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
      union {
        struct {
          unsigned :2;
          unsigned SDADMD:1;
          unsigned AMP2MD:1;
          unsigned DAC2MD:1;
          unsigned AMP1MD:1;
          unsigned LCDMD:1;
        };
        struct {
          unsigned :2;
          unsigned SDA1MD:1;
        };
      };
} typePMD6BITS;
sfr volatile typePMD6BITS PMD6bits absolute 0x77A;

// backward compatibility for PMD7BITS
    typedef struct tagPMD7BITS {
      unsigned :4;
      unsigned DMA0MD:1;
      unsigned DMA1MD:1;
} typePMD7BITS;
sfr volatile typePMD7BITS PMD7bits absolute 0x77C;

// backward compatibility for CTMUCON1BITS
    typedef struct tagCTMUCON1BITS {
      unsigned :8;
      unsigned CTTRIG:1;
      unsigned IDISSEN:1;
      unsigned EDGSEQEN:1;
      unsigned EDGEN:1;
      unsigned TGEN:1;
      unsigned CTMUSIDL:1;
      unsigned :1;
      unsigned CTMUEN:1;
} typeCTMUCON1BITS;
sfr volatile typeCTMUCON1BITS CTMUCON1bits absolute 0x78A;

// backward compatibility for CTMUCON2BITS
    typedef struct tagCTMUCON2BITS {
      union {
        struct {
          unsigned :2;
          unsigned EDG2SEL:4;
          unsigned EDG2POL:1;
          unsigned EDG2MOD:1;
          unsigned EDG1STAT:1;
          unsigned EDG2STAT:1;
          unsigned EDG1SEL:4;
          unsigned EDG1POL:1;
          unsigned EDG1MOD:1;
        };
        struct {
          unsigned :2;
          unsigned EDG2SEL0:1;
          unsigned EDG2SEL1:1;
          unsigned EDG2SEL2:1;
          unsigned EDG2SEL3:1;
          unsigned :4;
          unsigned EDG1SEL0:1;
          unsigned EDG1SEL1:1;
          unsigned EDG1SEL2:1;
          unsigned EDG1SEL3:1;
        };
      };
} typeCTMUCON2BITS;
sfr volatile typeCTMUCON2BITS CTMUCON2bits absolute 0x78C;

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
sfr volatile typeCTMUICONBITS CTMUICONbits absolute 0x78E;

