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

const unsigned long __FLASH_SIZE = 0x0000ABF8;
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
const unsigned IVT_ADDR_DMA0INTERRUPT        = 0x001C;
const unsigned IVT_ADDR_IC2INTERRUPT         = 0x001E;
const unsigned IVT_ADDR_OC2INTERRUPT         = 0x0020;
const unsigned IVT_ADDR_T2INTERRUPT          = 0x0022;
const unsigned IVT_ADDR_T3INTERRUPT          = 0x0024;
const unsigned IVT_ADDR_SPI1INTERRUPT        = 0x0026;
const unsigned IVT_ADDR_SPI1TXINTERRUPT      = 0x0028;
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
const unsigned IVT_ADDR_INTERRUPT22          = 0x0040;
const unsigned IVT_ADDR_INTERRUPT23          = 0x0042;
const unsigned IVT_ADDR_DMA2INTERRUPT        = 0x0044;
const unsigned IVT_ADDR_OC3INTERRUPT         = 0x0046;
const unsigned IVT_ADDR_OC4INTERRUPT         = 0x0048;
const unsigned IVT_ADDR_T4INTERRUPT          = 0x004A;
const unsigned IVT_ADDR_T5INTERRUPT          = 0x004C;
const unsigned IVT_ADDR_INT2INTERRUPT        = 0x004E;
const unsigned IVT_ADDR_U2RXINTERRUPT        = 0x0050;
const unsigned IVT_ADDR_U2TXINTERRUPT        = 0x0052;
const unsigned IVT_ADDR_SPI2INTERRUPT        = 0x0054;
const unsigned IVT_ADDR_SPI2TXINTERRUPT      = 0x0056;
const unsigned IVT_ADDR_INTERRUPT34          = 0x0058;
const unsigned IVT_ADDR_INTERRUPT35          = 0x005A;
const unsigned IVT_ADDR_DMA3INTERRUPT        = 0x005C;
const unsigned IVT_ADDR_IC3INTERRUPT         = 0x005E;
const unsigned IVT_ADDR_IC4INTERRUPT         = 0x0060;
const unsigned IVT_ADDR_IC5INTERRUPT         = 0x0062;
const unsigned IVT_ADDR_IC6INTERRUPT         = 0x0064;
const unsigned IVT_ADDR_OC5INTERRUPT         = 0x0066;
const unsigned IVT_ADDR_OC6INTERRUPT         = 0x0068;
const unsigned IVT_ADDR_INTERRUPT43          = 0x006A;
const unsigned IVT_ADDR_INTERRUPT44          = 0x006C;
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
const unsigned IVT_ADDR_CRYPTOINTERRUPT      = 0x0082;
const unsigned IVT_ADDR_CRYPTOKEYINTERRUPT   = 0x0084;
const unsigned IVT_ADDR_INTERRUPT57          = 0x0086;
const unsigned IVT_ADDR_SPI1RXINTERRUPT      = 0x0088;
const unsigned IVT_ADDR_SPI2RXINTERRUPT      = 0x008A;
const unsigned IVT_ADDR_SPI3RXINTERRUPT      = 0x008C;
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
const unsigned IVT_ADDR_INTERRUPT78          = 0x00B0;
const unsigned IVT_ADDR_INTERRUPT79          = 0x00B2;
const unsigned IVT_ADDR_INTERRUPT80          = 0x00B4;
const unsigned IVT_ADDR_U3ERRINTERRUPT       = 0x00B6;
const unsigned IVT_ADDR_U3RXINTERRUPT        = 0x00B8;
const unsigned IVT_ADDR_U3TXINTERRUPT        = 0x00BA;
const unsigned IVT_ADDR_I2C1BCLINTERRUPT     = 0x00BC;
const unsigned IVT_ADDR_I2C2BCLINTERRUPT     = 0x00BE;
const unsigned IVT_ADDR_USB1INTERRUPT        = 0x00C0;
const unsigned IVT_ADDR_U4ERRINTERRUPT       = 0x00C2;
const unsigned IVT_ADDR_U4RXINTERRUPT        = 0x00C4;
const unsigned IVT_ADDR_U4TXINTERRUPT        = 0x00C6;
const unsigned IVT_ADDR_SPI3INTERRUPT        = 0x00C8;
const unsigned IVT_ADDR_SPI3TXINTERRUPT      = 0x00CA;
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
const unsigned AIVT_ADDR_ALTSPI1INTERRUPT     = 0x0126;
const unsigned AIVT_ADDR_ALTSPI1TXINTERRUPT   = 0x0128;
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
const unsigned AIVT_ADDR_ALTINTERRUPT22       = 0x0140;
const unsigned AIVT_ADDR_ALTINTERRUPT23       = 0x0142;
const unsigned AIVT_ADDR_ALTDMA2INTERRUPT     = 0x0144;
const unsigned AIVT_ADDR_ALTOC3INTERRUPT      = 0x0146;
const unsigned AIVT_ADDR_ALTOC4INTERRUPT      = 0x0148;
const unsigned AIVT_ADDR_ALTT4INTERRUPT       = 0x014A;
const unsigned AIVT_ADDR_ALTT5INTERRUPT       = 0x014C;
const unsigned AIVT_ADDR_ALTINT2INTERRUPT     = 0x014E;
const unsigned AIVT_ADDR_ALTU2RXINTERRUPT     = 0x0150;
const unsigned AIVT_ADDR_ALTU2TXINTERRUPT     = 0x0152;
const unsigned AIVT_ADDR_ALTSPI2INTERRUPT     = 0x0154;
const unsigned AIVT_ADDR_ALTSPI2TXINTERRUPT   = 0x0156;
const unsigned AIVT_ADDR_ALTINTERRUPT34       = 0x0158;
const unsigned AIVT_ADDR_ALTINTERRUPT35       = 0x015A;
const unsigned AIVT_ADDR_ALTDMA3INTERRUPT     = 0x015C;
const unsigned AIVT_ADDR_ALTIC3INTERRUPT      = 0x015E;
const unsigned AIVT_ADDR_ALTIC4INTERRUPT      = 0x0160;
const unsigned AIVT_ADDR_ALTIC5INTERRUPT      = 0x0162;
const unsigned AIVT_ADDR_ALTIC6INTERRUPT      = 0x0164;
const unsigned AIVT_ADDR_ALTOC5INTERRUPT      = 0x0166;
const unsigned AIVT_ADDR_ALTOC6INTERRUPT      = 0x0168;
const unsigned AIVT_ADDR_ALTINTERRUPT43       = 0x016A;
const unsigned AIVT_ADDR_ALTINTERRUPT44       = 0x016C;
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
const unsigned AIVT_ADDR_ALTCRYPTOINTERRUPT   = 0x0182;
const unsigned AIVT_ADDR_ALTCRYPTOKEYINTERRUPT = 0x0184;
const unsigned AIVT_ADDR_ALTINTERRUPT57       = 0x0186;
const unsigned AIVT_ADDR_ALTSPI1RXINTERRUPT   = 0x0188;
const unsigned AIVT_ADDR_ALTSPI2RXINTERRUPT   = 0x018A;
const unsigned AIVT_ADDR_ALTSPI3RXINTERRUPT   = 0x018C;
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
const unsigned AIVT_ADDR_ALTINTERRUPT78       = 0x01B0;
const unsigned AIVT_ADDR_ALTINTERRUPT79       = 0x01B2;
const unsigned AIVT_ADDR_ALTINTERRUPT80       = 0x01B4;
const unsigned AIVT_ADDR_ALTU3ERRINTERRUPT    = 0x01B6;
const unsigned AIVT_ADDR_ALTU3RXINTERRUPT     = 0x01B8;
const unsigned AIVT_ADDR_ALTU3TXINTERRUPT     = 0x01BA;
const unsigned AIVT_ADDR_ALTI2C1BCLINTERRUPT  = 0x01BC;
const unsigned AIVT_ADDR_ALTI2C2BCLINTERRUPT  = 0x01BE;
const unsigned AIVT_ADDR_ALTUSB1INTERRUPT     = 0x01C0;
const unsigned AIVT_ADDR_ALTU4ERRINTERRUPT    = 0x01C2;
const unsigned AIVT_ADDR_ALTU4RXINTERRUPT     = 0x01C4;
const unsigned AIVT_ADDR_ALTU4TXINTERRUPT     = 0x01C6;
const unsigned AIVT_ADDR_ALTSPI3INTERRUPT     = 0x01C8;
const unsigned AIVT_ADDR_ALTSPI3TXINTERRUPT   = 0x01CA;
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
sfr unsigned int   volatile WREG0            absolute 0x0;
sfr unsigned int   volatile WREG1            absolute 0x2;
sfr unsigned int   volatile WREG2            absolute 0x4;
sfr unsigned int   volatile WREG3            absolute 0x6;
sfr unsigned int   volatile WREG4            absolute 0x8;
sfr unsigned int   volatile WREG5            absolute 0xA;
sfr unsigned int   volatile WREG6            absolute 0xC;
sfr unsigned int   volatile WREG7            absolute 0xE;
sfr unsigned int   volatile WREG8            absolute 0x10;
sfr unsigned int   volatile WREG9            absolute 0x12;
sfr unsigned int   volatile WREG10           absolute 0x14;
sfr unsigned int   volatile WREG11           absolute 0x16;
sfr unsigned int   volatile WREG12           absolute 0x18;
sfr unsigned int   volatile WREG13           absolute 0x1A;
sfr unsigned int   volatile WREG14           absolute 0x1C;
sfr unsigned int   volatile WREG15           absolute 0x1E;
sfr unsigned int   volatile SPLIM            absolute 0x20;
sfr unsigned int   volatile PCL              absolute 0x2E;
sfr unsigned int   volatile PCH              absolute 0x30;
sfr unsigned int   volatile DSRPAG           absolute 0x32;
sfr unsigned int   volatile DSWPAG           absolute 0x34;
sfr unsigned int   volatile RCOUNT           absolute 0x36;
sfr unsigned int   volatile SR               absolute 0x42;
    const register unsigned short int C = 0;
    sbit  C_bit at SR.B0;
    const register unsigned short int Z = 1;
    sbit  Z_bit at SR.B1;
    const register unsigned short int OV = 2;
    sbit  OV_bit at SR.B2;
    const register unsigned short int N = 3;
    sbit  N_bit at SR.B3;
    const register unsigned short int RA = 4;
    sbit  RA_bit at SR.B4;
    const register unsigned short int IPL0 = 5;
    sbit  IPL0_bit at SR.B5;
    const register unsigned short int IPL1 = 6;
    sbit  IPL1_bit at SR.B6;
    const register unsigned short int IPL2 = 7;
    sbit  IPL2_bit at SR.B7;
    const register unsigned short int DC = 8;
    sbit  DC_bit at SR.B8;

sfr unsigned int   volatile CORCON           absolute 0x44;
    const register unsigned short int IPL3 = 3;
    sbit  IPL3_bit at CORCON.B3;

sfr unsigned int   volatile DISICNT          absolute 0x52;
sfr unsigned int   volatile TBLPAG           absolute 0x54;
sfr unsigned int   volatile CNPD1            absolute 0x56;
    const register unsigned short int CN0PDE = 0;
    sbit  CN0PDE_bit at CNPD1.B0;
    const register unsigned short int CN1PDE = 1;
    sbit  CN1PDE_bit at CNPD1.B1;
    const register unsigned short int CN2PDE = 2;
    sbit  CN2PDE_bit at CNPD1.B2;
    const register unsigned short int CN3PDE = 3;
    sbit  CN3PDE_bit at CNPD1.B3;
    const register unsigned short int CN4PDE = 4;
    sbit  CN4PDE_bit at CNPD1.B4;
    const register unsigned short int CN5PDE = 5;
    sbit  CN5PDE_bit at CNPD1.B5;
    const register unsigned short int CN6PDE = 6;
    sbit  CN6PDE_bit at CNPD1.B6;
    const register unsigned short int CN7PDE = 7;
    sbit  CN7PDE_bit at CNPD1.B7;
    const register unsigned short int CN8PDE = 8;
    sbit  CN8PDE_bit at CNPD1.B8;
    const register unsigned short int CN9PDE = 9;
    sbit  CN9PDE_bit at CNPD1.B9;
    const register unsigned short int CN10PDE = 10;
    sbit  CN10PDE_bit at CNPD1.B10;
    const register unsigned short int CN11PDE = 11;
    sbit  CN11PDE_bit at CNPD1.B11;
    const register unsigned short int CN12PDE = 12;
    sbit  CN12PDE_bit at CNPD1.B12;
    const register unsigned short int CN13PDE = 13;
    sbit  CN13PDE_bit at CNPD1.B13;
    const register unsigned short int CN14PDE = 14;
    sbit  CN14PDE_bit at CNPD1.B14;
    const register unsigned short int CN15PDE = 15;
    sbit  CN15PDE_bit at CNPD1.B15;

sfr unsigned int   volatile CNPD2            absolute 0x58;
    const register unsigned short int CN16PDE = 0;
    sbit  CN16PDE_bit at CNPD2.B0;
    const register unsigned short int CN17PDE = 1;
    sbit  CN17PDE_bit at CNPD2.B1;
    const register unsigned short int CN18PDE = 2;
    sbit  CN18PDE_bit at CNPD2.B2;
    const register unsigned short int CN19PDE = 3;
    sbit  CN19PDE_bit at CNPD2.B3;
    const register unsigned short int CN20PDE = 4;
    sbit  CN20PDE_bit at CNPD2.B4;
    const register unsigned short int CN21PDE = 5;
    sbit  CN21PDE_bit at CNPD2.B5;
    const register unsigned short int CN22PDE = 6;
    sbit  CN22PDE_bit at CNPD2.B6;
    const register unsigned short int CN23PDE = 7;
    sbit  CN23PDE_bit at CNPD2.B7;
    const register unsigned short int CN24PDE = 8;
    sbit  CN24PDE_bit at CNPD2.B8;
    const register unsigned short int CN25PDE = 9;
    sbit  CN25PDE_bit at CNPD2.B9;
    const register unsigned short int CN26PDE = 10;
    sbit  CN26PDE_bit at CNPD2.B10;
    const register unsigned short int CN27PDE = 11;
    sbit  CN27PDE_bit at CNPD2.B11;
    const register unsigned short int CN28PDE = 12;
    sbit  CN28PDE_bit at CNPD2.B12;
    const register unsigned short int CN29PDE = 13;
    sbit  CN29PDE_bit at CNPD2.B13;
    const register unsigned short int CN30PDE = 14;
    sbit  CN30PDE_bit at CNPD2.B14;

sfr unsigned int   volatile CNPD3            absolute 0x5A;
    const register unsigned short int CN33PDE = 1;
    sbit  CN33PDE_bit at CNPD3.B1;
    const register unsigned short int CN34PDE = 2;
    sbit  CN34PDE_bit at CNPD3.B2;
    const register unsigned short int CN35PDE = 3;
    sbit  CN35PDE_bit at CNPD3.B3;
    const register unsigned short int CN36PDE = 4;
    sbit  CN36PDE_bit at CNPD3.B4;

sfr unsigned int   volatile CNEN1            absolute 0x62;
    const register unsigned short int CN0IE = 0;
    sbit  CN0IE_bit at CNEN1.B0;
    const register unsigned short int CN1IE = 1;
    sbit  CN1IE_bit at CNEN1.B1;
    const register unsigned short int CN2IE = 2;
    sbit  CN2IE_bit at CNEN1.B2;
    const register unsigned short int CN3IE = 3;
    sbit  CN3IE_bit at CNEN1.B3;
    const register unsigned short int CN4IE = 4;
    sbit  CN4IE_bit at CNEN1.B4;
    const register unsigned short int CN5IE = 5;
    sbit  CN5IE_bit at CNEN1.B5;
    const register unsigned short int CN6IE = 6;
    sbit  CN6IE_bit at CNEN1.B6;
    const register unsigned short int CN7IE = 7;
    sbit  CN7IE_bit at CNEN1.B7;
    const register unsigned short int CN8IE = 8;
    sbit  CN8IE_bit at CNEN1.B8;
    const register unsigned short int CN9IE = 9;
    sbit  CN9IE_bit at CNEN1.B9;
    const register unsigned short int CN10IE = 10;
    sbit  CN10IE_bit at CNEN1.B10;
    const register unsigned short int CN11IE = 11;
    sbit  CN11IE_bit at CNEN1.B11;
    const register unsigned short int CN12IE = 12;
    sbit  CN12IE_bit at CNEN1.B12;
    const register unsigned short int CN13IE = 13;
    sbit  CN13IE_bit at CNEN1.B13;
    const register unsigned short int CN14IE = 14;
    sbit  CN14IE_bit at CNEN1.B14;
    const register unsigned short int CN15IE = 15;
    sbit  CN15IE_bit at CNEN1.B15;

sfr unsigned int   volatile CNEN2            absolute 0x64;
    const register unsigned short int CN16IE = 0;
    sbit  CN16IE_bit at CNEN2.B0;
    const register unsigned short int CN17IE = 1;
    sbit  CN17IE_bit at CNEN2.B1;
    const register unsigned short int CN18IE = 2;
    sbit  CN18IE_bit at CNEN2.B2;
    const register unsigned short int CN19IE = 3;
    sbit  CN19IE_bit at CNEN2.B3;
    const register unsigned short int CN20IE = 4;
    sbit  CN20IE_bit at CNEN2.B4;
    const register unsigned short int CN21IE = 5;
    sbit  CN21IE_bit at CNEN2.B5;
    const register unsigned short int CN22IE = 6;
    sbit  CN22IE_bit at CNEN2.B6;
    const register unsigned short int CN23IE = 7;
    sbit  CN23IE_bit at CNEN2.B7;
    const register unsigned short int CN24IE = 8;
    sbit  CN24IE_bit at CNEN2.B8;
    const register unsigned short int CN25IE = 9;
    sbit  CN25IE_bit at CNEN2.B9;
    const register unsigned short int CN26IE = 10;
    sbit  CN26IE_bit at CNEN2.B10;
    const register unsigned short int CN27IE = 11;
    sbit  CN27IE_bit at CNEN2.B11;
    const register unsigned short int CN28IE = 12;
    sbit  CN28IE_bit at CNEN2.B12;
    const register unsigned short int CN29IE = 13;
    sbit  CN29IE_bit at CNEN2.B13;
    const register unsigned short int CN30IE = 14;
    sbit  CN30IE_bit at CNEN2.B14;

sfr unsigned int   volatile CNEN3            absolute 0x66;
    const register unsigned short int CN33IE = 1;
    sbit  CN33IE_bit at CNEN3.B1;
    const register unsigned short int CN34IE = 2;
    sbit  CN34IE_bit at CNEN3.B2;
    const register unsigned short int CN35IE = 3;
    sbit  CN35IE_bit at CNEN3.B3;
    const register unsigned short int CN36IE = 4;
    sbit  CN36IE_bit at CNEN3.B4;

sfr unsigned int   volatile CNPU1            absolute 0x6E;
    const register unsigned short int CN0PUE = 0;
    sbit  CN0PUE_bit at CNPU1.B0;
    const register unsigned short int CN1PUE = 1;
    sbit  CN1PUE_bit at CNPU1.B1;
    const register unsigned short int CN2PUE = 2;
    sbit  CN2PUE_bit at CNPU1.B2;
    const register unsigned short int CN3PUE = 3;
    sbit  CN3PUE_bit at CNPU1.B3;
    const register unsigned short int CN4PUE = 4;
    sbit  CN4PUE_bit at CNPU1.B4;
    const register unsigned short int CN5PUE = 5;
    sbit  CN5PUE_bit at CNPU1.B5;
    const register unsigned short int CN6PUE = 6;
    sbit  CN6PUE_bit at CNPU1.B6;
    const register unsigned short int CN7PUE = 7;
    sbit  CN7PUE_bit at CNPU1.B7;
    const register unsigned short int CN8PUE = 8;
    sbit  CN8PUE_bit at CNPU1.B8;
    const register unsigned short int CN9PUE = 9;
    sbit  CN9PUE_bit at CNPU1.B9;
    const register unsigned short int CN10PUE = 10;
    sbit  CN10PUE_bit at CNPU1.B10;
    const register unsigned short int CN11PUE = 11;
    sbit  CN11PUE_bit at CNPU1.B11;
    const register unsigned short int CN12PUE = 12;
    sbit  CN12PUE_bit at CNPU1.B12;
    const register unsigned short int CN13PUE = 13;
    sbit  CN13PUE_bit at CNPU1.B13;
    const register unsigned short int CN14PUE = 14;
    sbit  CN14PUE_bit at CNPU1.B14;
    const register unsigned short int CN15PUE = 15;
    sbit  CN15PUE_bit at CNPU1.B15;

sfr unsigned int   volatile CNPU2            absolute 0x70;
    const register unsigned short int CN16PUE = 0;
    sbit  CN16PUE_bit at CNPU2.B0;
    const register unsigned short int CN17PUE = 1;
    sbit  CN17PUE_bit at CNPU2.B1;
    const register unsigned short int CN18PUE = 2;
    sbit  CN18PUE_bit at CNPU2.B2;
    const register unsigned short int CN19PUE = 3;
    sbit  CN19PUE_bit at CNPU2.B3;
    const register unsigned short int CN20PUE = 4;
    sbit  CN20PUE_bit at CNPU2.B4;
    const register unsigned short int CN21PUE = 5;
    sbit  CN21PUE_bit at CNPU2.B5;
    const register unsigned short int CN22PUE = 6;
    sbit  CN22PUE_bit at CNPU2.B6;
    const register unsigned short int CN23PUE = 7;
    sbit  CN23PUE_bit at CNPU2.B7;
    const register unsigned short int CN24PUE = 8;
    sbit  CN24PUE_bit at CNPU2.B8;
    const register unsigned short int CN25PUE = 9;
    sbit  CN25PUE_bit at CNPU2.B9;
    const register unsigned short int CN26PUE = 10;
    sbit  CN26PUE_bit at CNPU2.B10;
    const register unsigned short int CN27PUE = 11;
    sbit  CN27PUE_bit at CNPU2.B11;
    const register unsigned short int CN28PUE = 12;
    sbit  CN28PUE_bit at CNPU2.B12;
    const register unsigned short int CN29PUE = 13;
    sbit  CN29PUE_bit at CNPU2.B13;
    const register unsigned short int CN30PUE = 14;
    sbit  CN30PUE_bit at CNPU2.B14;

sfr unsigned int   volatile CNPU3            absolute 0x72;
    const register unsigned short int CN33PUE = 1;
    sbit  CN33PUE_bit at CNPU3.B1;
    const register unsigned short int CN34PUE = 2;
    sbit  CN34PUE_bit at CNPU3.B2;
    const register unsigned short int CN35PUE = 3;
    sbit  CN35PUE_bit at CNPU3.B3;
    const register unsigned short int CN36PUE = 4;
    sbit  CN36PUE_bit at CNPU3.B4;

sfr unsigned int   volatile INTCON1          absolute 0x80;
    const register unsigned short int OSCFAIL = 1;
    sbit  OSCFAIL_bit at INTCON1.B1;
    const register unsigned short int STKERR = 2;
    sbit  STKERR_bit at INTCON1.B2;
    const register unsigned short int ADDRERR = 3;
    sbit  ADDRERR_bit at INTCON1.B3;
    const register unsigned short int MATHERR = 4;
    sbit  MATHERR_bit at INTCON1.B4;
    const register unsigned short int NSTDIS = 15;
    sbit  NSTDIS_bit at INTCON1.B15;

sfr unsigned int   volatile INTCON2          absolute 0x82;
    const register unsigned short int INT0EP = 0;
    sbit  INT0EP_bit at INTCON2.B0;
    const register unsigned short int INT1EP = 1;
    sbit  INT1EP_bit at INTCON2.B1;
    const register unsigned short int INT2EP = 2;
    sbit  INT2EP_bit at INTCON2.B2;
    const register unsigned short int INT3EP = 3;
    sbit  INT3EP_bit at INTCON2.B3;
    const register unsigned short int INT4EP = 4;
    sbit  INT4EP_bit at INTCON2.B4;
    const register unsigned short int DISI = 14;
    sbit  DISI_bit at INTCON2.B14;
    const register unsigned short int ALTIVT = 15;
    sbit  ALTIVT_bit at INTCON2.B15;

sfr unsigned int   volatile IFS0             absolute 0x84;
    const register unsigned short int INT0IF = 0;
    sbit  INT0IF_bit at IFS0.B0;
    const register unsigned short int IC1IF = 1;
    sbit  IC1IF_bit at IFS0.B1;
    const register unsigned short int OC1IF = 2;
    sbit  OC1IF_bit at IFS0.B2;
    const register unsigned short int T1IF = 3;
    sbit  T1IF_bit at IFS0.B3;
    const register unsigned short int DMA0IF = 4;
    sbit  DMA0IF_bit at IFS0.B4;
    const register unsigned short int IC2IF = 5;
    sbit  IC2IF_bit at IFS0.B5;
    const register unsigned short int OC2IF = 6;
    sbit  OC2IF_bit at IFS0.B6;
    const register unsigned short int T2IF = 7;
    sbit  T2IF_bit at IFS0.B7;
    const register unsigned short int T3IF = 8;
    sbit  T3IF_bit at IFS0.B8;
    const register unsigned short int SPI1IF = 9;
    sbit  SPI1IF_bit at IFS0.B9;
    const register unsigned short int SPI1TXIF = 10;
    sbit  SPI1TXIF_bit at IFS0.B10;
    const register unsigned short int U1RXIF = 11;
    sbit  U1RXIF_bit at IFS0.B11;
    const register unsigned short int U1TXIF = 12;
    sbit  U1TXIF_bit at IFS0.B12;
    const register unsigned short int AD1IF = 13;
    sbit  AD1IF_bit at IFS0.B13;
    const register unsigned short int DMA1IF = 14;
    sbit  DMA1IF_bit at IFS0.B14;

sfr unsigned int   volatile IFS1             absolute 0x86;
    const register unsigned short int SI2C1IF = 0;
    sbit  SI2C1IF_bit at IFS1.B0;
    const register unsigned short int MI2C1IF = 1;
    sbit  MI2C1IF_bit at IFS1.B1;
    const register unsigned short int CMIF = 2;
    sbit  CMIF_bit at IFS1.B2;
    const register unsigned short int CNIF = 3;
    sbit  CNIF_bit at IFS1.B3;
    const register unsigned short int INT1IF = 4;
    sbit  INT1IF_bit at IFS1.B4;
    const register unsigned short int DMA2IF = 8;
    sbit  DMA2IF_bit at IFS1.B8;
    const register unsigned short int OC3IF = 9;
    sbit  OC3IF_bit at IFS1.B9;
    const register unsigned short int OC4IF = 10;
    sbit  OC4IF_bit at IFS1.B10;
    const register unsigned short int T4IF = 11;
    sbit  T4IF_bit at IFS1.B11;
    const register unsigned short int T5IF = 12;
    sbit  T5IF_bit at IFS1.B12;
    const register unsigned short int INT2IF = 13;
    sbit  INT2IF_bit at IFS1.B13;
    const register unsigned short int U2RXIF = 14;
    sbit  U2RXIF_bit at IFS1.B14;
    const register unsigned short int U2TXIF = 15;
    sbit  U2TXIF_bit at IFS1.B15;

sfr unsigned int   volatile IFS2             absolute 0x88;
    const register unsigned short int SPI2IF = 0;
    sbit  SPI2IF_bit at IFS2.B0;
    const register unsigned short int SPI2TXIF = 1;
    sbit  SPI2TXIF_bit at IFS2.B1;
    const register unsigned short int CRYFREEIF = 2;
    sbit  CRYFREEIF_bit at IFS2.B2;
    const register unsigned short int CRYROLLIF = 3;
    sbit  CRYROLLIF_bit at IFS2.B3;
    const register unsigned short int DMA3IF = 4;
    sbit  DMA3IF_bit at IFS2.B4;
    const register unsigned short int IC3IF = 5;
    sbit  IC3IF_bit at IFS2.B5;
    const register unsigned short int IC4IF = 6;
    sbit  IC4IF_bit at IFS2.B6;
    const register unsigned short int IC5IF = 7;
    sbit  IC5IF_bit at IFS2.B7;
    const register unsigned short int IC6IF = 8;
    sbit  IC6IF_bit at IFS2.B8;
    const register unsigned short int OC5IF = 9;
    sbit  OC5IF_bit at IFS2.B9;
    const register unsigned short int OC6IF = 10;
    sbit  OC6IF_bit at IFS2.B10;
    const register unsigned short int PMPIF = 13;
    sbit  PMPIF_bit at IFS2.B13;
    const register unsigned short int DMA4IF = 14;
    sbit  DMA4IF_bit at IFS2.B14;

sfr unsigned int   volatile IFS3             absolute 0x8A;
    const register unsigned short int SI2C2IF = 1;
    sbit  SI2C2IF_bit at IFS3.B1;
    const register unsigned short int MI2C2IF = 2;
    sbit  MI2C2IF_bit at IFS3.B2;
    const register unsigned short int INT3IF = 5;
    sbit  INT3IF_bit at IFS3.B5;
    const register unsigned short int INT4IF = 6;
    sbit  INT4IF_bit at IFS3.B6;
    const register unsigned short int CRYDNIF = 7;
    sbit  CRYDNIF_bit at IFS3.B7;
    const register unsigned short int KEYSTRIF = 8;
    sbit  KEYSTRIF_bit at IFS3.B8;
    const register unsigned short int SPI1RXIF = 10;
    sbit  SPI1RXIF_bit at IFS3.B10;
    const register unsigned short int SPI2RXIF = 11;
    sbit  SPI2RXIF_bit at IFS3.B11;
    const register unsigned short int SPI3RXIF = 12;
    sbit  SPI3RXIF_bit at IFS3.B12;
    const register unsigned short int DMA5IF = 13;
    sbit  DMA5IF_bit at IFS3.B13;
    const register unsigned short int RTCIF = 14;
    sbit  RTCIF_bit at IFS3.B14;

sfr unsigned int   volatile IFS4             absolute 0x8C;
    const register unsigned short int U1ERIF = 1;
    sbit  U1ERIF_bit at IFS4.B1;
    const register unsigned short int U2ERIF = 2;
    sbit  U2ERIF_bit at IFS4.B2;
    const register unsigned short int CRCIF = 3;
    sbit  CRCIF_bit at IFS4.B3;
    const register unsigned short int LVDIF = 8;
    sbit  LVDIF_bit at IFS4.B8;
    const register unsigned short int CTMUIF = 13;
    sbit  CTMUIF_bit at IFS4.B13;
    const register unsigned short int HLVDIF = 8;
    sbit  HLVDIF_bit at IFS4.B8;

sfr unsigned int   volatile IFS5             absolute 0x8E;
    const register unsigned short int U3ERIF = 1;
    sbit  U3ERIF_bit at IFS5.B1;
    const register unsigned short int U3RXIF = 2;
    sbit  U3RXIF_bit at IFS5.B2;
    const register unsigned short int U3TXIF = 3;
    sbit  U3TXIF_bit at IFS5.B3;
    const register unsigned short int I2C1BCIF = 4;
    sbit  I2C1BCIF_bit at IFS5.B4;
    const register unsigned short int I2C2BCIF = 5;
    sbit  I2C2BCIF_bit at IFS5.B5;
    const register unsigned short int U4ERIF = 7;
    sbit  U4ERIF_bit at IFS5.B7;
    const register unsigned short int U4RXIF = 8;
    sbit  U4RXIF_bit at IFS5.B8;
    const register unsigned short int U4TXIF = 9;
    sbit  U4TXIF_bit at IFS5.B9;
    const register unsigned short int SPI3IF = 10;
    sbit  SPI3IF_bit at IFS5.B10;
    const register unsigned short int SPI3TXIF = 11;
    sbit  SPI3TXIF_bit at IFS5.B11;

sfr unsigned int   volatile IFS6             absolute 0x90;
    const register unsigned short int FSTIF = 10;
    sbit  FSTIF_bit at IFS6.B10;

sfr unsigned int   volatile IFS7             absolute 0x92;
    const register unsigned short int JTAGIF = 5;
    sbit  JTAGIF_bit at IFS7.B5;

sfr unsigned int            IEC0             absolute 0x94;
    const register unsigned short int INT0IE = 0;
    sbit  INT0IE_bit at IEC0.B0;
    const register unsigned short int IC1IE = 1;
    sbit  IC1IE_bit at IEC0.B1;
    const register unsigned short int OC1IE = 2;
    sbit  OC1IE_bit at IEC0.B2;
    const register unsigned short int T1IE = 3;
    sbit  T1IE_bit at IEC0.B3;
    const register unsigned short int DMA0IE = 4;
    sbit  DMA0IE_bit at IEC0.B4;
    const register unsigned short int IC2IE = 5;
    sbit  IC2IE_bit at IEC0.B5;
    const register unsigned short int OC2IE = 6;
    sbit  OC2IE_bit at IEC0.B6;
    const register unsigned short int T2IE = 7;
    sbit  T2IE_bit at IEC0.B7;
    const register unsigned short int T3IE = 8;
    sbit  T3IE_bit at IEC0.B8;
    const register unsigned short int SPI1IE = 9;
    sbit  SPI1IE_bit at IEC0.B9;
    const register unsigned short int SPI1TXIE = 10;
    sbit  SPI1TXIE_bit at IEC0.B10;
    const register unsigned short int U1RXIE = 11;
    sbit  U1RXIE_bit at IEC0.B11;
    const register unsigned short int U1TXIE = 12;
    sbit  U1TXIE_bit at IEC0.B12;
    const register unsigned short int AD1IE = 13;
    sbit  AD1IE_bit at IEC0.B13;
    const register unsigned short int DMA1IE = 14;
    sbit  DMA1IE_bit at IEC0.B14;

sfr unsigned int            IEC1             absolute 0x96;
    const register unsigned short int SI2C1IE = 0;
    sbit  SI2C1IE_bit at IEC1.B0;
    const register unsigned short int MI2C1IE = 1;
    sbit  MI2C1IE_bit at IEC1.B1;
    const register unsigned short int CMIE = 2;
    sbit  CMIE_bit at IEC1.B2;
    const register unsigned short int CNIE = 3;
    sbit  CNIE_bit at IEC1.B3;
    const register unsigned short int INT1IE = 4;
    sbit  INT1IE_bit at IEC1.B4;
    const register unsigned short int DMA2IE = 8;
    sbit  DMA2IE_bit at IEC1.B8;
    const register unsigned short int OC3IE = 9;
    sbit  OC3IE_bit at IEC1.B9;
    const register unsigned short int OC4IE = 10;
    sbit  OC4IE_bit at IEC1.B10;
    const register unsigned short int T4IE = 11;
    sbit  T4IE_bit at IEC1.B11;
    const register unsigned short int T5IE = 12;
    sbit  T5IE_bit at IEC1.B12;
    const register unsigned short int INT2IE = 13;
    sbit  INT2IE_bit at IEC1.B13;
    const register unsigned short int U2RXIE = 14;
    sbit  U2RXIE_bit at IEC1.B14;
    const register unsigned short int U2TXIE = 15;
    sbit  U2TXIE_bit at IEC1.B15;

sfr unsigned int            IEC2             absolute 0x98;
    const register unsigned short int SPI2IE = 0;
    sbit  SPI2IE_bit at IEC2.B0;
    const register unsigned short int SPI2TXIE = 1;
    sbit  SPI2TXIE_bit at IEC2.B1;
    const register unsigned short int CRYFREEIE = 2;
    sbit  CRYFREEIE_bit at IEC2.B2;
    const register unsigned short int CRYROLLIE = 3;
    sbit  CRYROLLIE_bit at IEC2.B3;
    const register unsigned short int DMA3IE = 4;
    sbit  DMA3IE_bit at IEC2.B4;
    const register unsigned short int IC3IE = 5;
    sbit  IC3IE_bit at IEC2.B5;
    const register unsigned short int IC4IE = 6;
    sbit  IC4IE_bit at IEC2.B6;
    const register unsigned short int IC5IE = 7;
    sbit  IC5IE_bit at IEC2.B7;
    const register unsigned short int IC6IE = 8;
    sbit  IC6IE_bit at IEC2.B8;
    const register unsigned short int OC5IE = 9;
    sbit  OC5IE_bit at IEC2.B9;
    const register unsigned short int OC6IE = 10;
    sbit  OC6IE_bit at IEC2.B10;
    const register unsigned short int PMPIE = 13;
    sbit  PMPIE_bit at IEC2.B13;
    const register unsigned short int DMA4IE = 14;
    sbit  DMA4IE_bit at IEC2.B14;

sfr unsigned int            IEC3             absolute 0x9A;
    const register unsigned short int SI2C2IE = 1;
    sbit  SI2C2IE_bit at IEC3.B1;
    const register unsigned short int MI2C2IE = 2;
    sbit  MI2C2IE_bit at IEC3.B2;
    const register unsigned short int INT3IE = 5;
    sbit  INT3IE_bit at IEC3.B5;
    const register unsigned short int INT4IE = 6;
    sbit  INT4IE_bit at IEC3.B6;
    const register unsigned short int CRYDNIE = 7;
    sbit  CRYDNIE_bit at IEC3.B7;
    const register unsigned short int KEYSTRIE = 8;
    sbit  KEYSTRIE_bit at IEC3.B8;
    const register unsigned short int SPI1RXIE = 10;
    sbit  SPI1RXIE_bit at IEC3.B10;
    const register unsigned short int SPI2RXIE = 11;
    sbit  SPI2RXIE_bit at IEC3.B11;
    const register unsigned short int SPI3RXIE = 12;
    sbit  SPI3RXIE_bit at IEC3.B12;
    const register unsigned short int DMA5IE = 13;
    sbit  DMA5IE_bit at IEC3.B13;
    const register unsigned short int RTCIE = 14;
    sbit  RTCIE_bit at IEC3.B14;

sfr unsigned int            IEC4             absolute 0x9C;
    const register unsigned short int U1ERIE = 1;
    sbit  U1ERIE_bit at IEC4.B1;
    const register unsigned short int U2ERIE = 2;
    sbit  U2ERIE_bit at IEC4.B2;
    const register unsigned short int CRCIE = 3;
    sbit  CRCIE_bit at IEC4.B3;
    const register unsigned short int LVDIE = 8;
    sbit  LVDIE_bit at IEC4.B8;
    const register unsigned short int CTMUIE = 13;
    sbit  CTMUIE_bit at IEC4.B13;
    const register unsigned short int HLVDIE = 8;
    sbit  HLVDIE_bit at IEC4.B8;

sfr unsigned int            IEC5             absolute 0x9E;
    const register unsigned short int U3ERIE = 1;
    sbit  U3ERIE_bit at IEC5.B1;
    const register unsigned short int U3RXIE = 2;
    sbit  U3RXIE_bit at IEC5.B2;
    const register unsigned short int U3TXIE = 3;
    sbit  U3TXIE_bit at IEC5.B3;
    const register unsigned short int I2C1BCIE = 4;
    sbit  I2C1BCIE_bit at IEC5.B4;
    const register unsigned short int I2C2BCIE = 5;
    sbit  I2C2BCIE_bit at IEC5.B5;
    const register unsigned short int U4ERIE = 7;
    sbit  U4ERIE_bit at IEC5.B7;
    const register unsigned short int U4RXIE = 8;
    sbit  U4RXIE_bit at IEC5.B8;
    const register unsigned short int U4TXIE = 9;
    sbit  U4TXIE_bit at IEC5.B9;
    const register unsigned short int SPI3IE = 10;
    sbit  SPI3IE_bit at IEC5.B10;
    const register unsigned short int SPI3TXIE = 11;
    sbit  SPI3TXIE_bit at IEC5.B11;

sfr unsigned int   volatile IEC6             absolute 0xA0;
    const register unsigned short int FSTIE = 10;
    sbit  FSTIE_bit at IEC6.B10;

sfr unsigned int   volatile IEC7             absolute 0xA2;
    const register unsigned short int JTAGIE = 5;
    sbit  JTAGIE_bit at IEC7.B5;

sfr unsigned int            IPC0             absolute 0xA4;
    const register unsigned short int INT0IP0 = 0;
    sbit  INT0IP0_bit at IPC0.B0;
    const register unsigned short int INT0IP1 = 1;
    sbit  INT0IP1_bit at IPC0.B1;
    const register unsigned short int INT0IP2 = 2;
    sbit  INT0IP2_bit at IPC0.B2;
    const register unsigned short int IC1IP0 = 4;
    sbit  IC1IP0_bit at IPC0.B4;
    const register unsigned short int IC1IP1 = 5;
    sbit  IC1IP1_bit at IPC0.B5;
    const register unsigned short int IC1IP2 = 6;
    sbit  IC1IP2_bit at IPC0.B6;
    const register unsigned short int OC1IP0 = 8;
    sbit  OC1IP0_bit at IPC0.B8;
    const register unsigned short int OC1IP1 = 9;
    sbit  OC1IP1_bit at IPC0.B9;
    const register unsigned short int OC1IP2 = 10;
    sbit  OC1IP2_bit at IPC0.B10;
    const register unsigned short int T1IP0 = 12;
    sbit  T1IP0_bit at IPC0.B12;
    const register unsigned short int T1IP1 = 13;
    sbit  T1IP1_bit at IPC0.B13;
    const register unsigned short int T1IP2 = 14;
    sbit  T1IP2_bit at IPC0.B14;

sfr unsigned int            IPC1             absolute 0xA6;
    const register unsigned short int DMA0IP0 = 0;
    sbit  DMA0IP0_bit at IPC1.B0;
    const register unsigned short int DMA0IP1 = 1;
    sbit  DMA0IP1_bit at IPC1.B1;
    const register unsigned short int DMA0IP2 = 2;
    sbit  DMA0IP2_bit at IPC1.B2;
    const register unsigned short int IC2IP0 = 4;
    sbit  IC2IP0_bit at IPC1.B4;
    const register unsigned short int IC2IP1 = 5;
    sbit  IC2IP1_bit at IPC1.B5;
    const register unsigned short int IC2IP2 = 6;
    sbit  IC2IP2_bit at IPC1.B6;
    const register unsigned short int OC2IP0 = 8;
    sbit  OC2IP0_bit at IPC1.B8;
    const register unsigned short int OC2IP1 = 9;
    sbit  OC2IP1_bit at IPC1.B9;
    const register unsigned short int OC2IP2 = 10;
    sbit  OC2IP2_bit at IPC1.B10;
    const register unsigned short int T2IP0 = 12;
    sbit  T2IP0_bit at IPC1.B12;
    const register unsigned short int T2IP1 = 13;
    sbit  T2IP1_bit at IPC1.B13;
    const register unsigned short int T2IP2 = 14;
    sbit  T2IP2_bit at IPC1.B14;

sfr unsigned int            IPC2             absolute 0xA8;
    const register unsigned short int T3IP0 = 0;
    sbit  T3IP0_bit at IPC2.B0;
    const register unsigned short int T3IP1 = 1;
    sbit  T3IP1_bit at IPC2.B1;
    const register unsigned short int T3IP2 = 2;
    sbit  T3IP2_bit at IPC2.B2;
    const register unsigned short int SPI1IP0 = 4;
    sbit  SPI1IP0_bit at IPC2.B4;
    const register unsigned short int SPI1IP1 = 5;
    sbit  SPI1IP1_bit at IPC2.B5;
    const register unsigned short int SPI1IP2 = 6;
    sbit  SPI1IP2_bit at IPC2.B6;
    const register unsigned short int SPI1TXIP0 = 8;
    sbit  SPI1TXIP0_bit at IPC2.B8;
    const register unsigned short int SPI1TXIP1 = 9;
    sbit  SPI1TXIP1_bit at IPC2.B9;
    const register unsigned short int SPI1TXIP2 = 10;
    sbit  SPI1TXIP2_bit at IPC2.B10;
    const register unsigned short int U1RXIP0 = 12;
    sbit  U1RXIP0_bit at IPC2.B12;
    const register unsigned short int U1RXIP1 = 13;
    sbit  U1RXIP1_bit at IPC2.B13;
    const register unsigned short int U1RXIP2 = 14;
    sbit  U1RXIP2_bit at IPC2.B14;

sfr unsigned int            IPC3             absolute 0xAA;
    const register unsigned short int U1TXIP0 = 0;
    sbit  U1TXIP0_bit at IPC3.B0;
    const register unsigned short int U1TXIP1 = 1;
    sbit  U1TXIP1_bit at IPC3.B1;
    const register unsigned short int U1TXIP2 = 2;
    sbit  U1TXIP2_bit at IPC3.B2;
    const register unsigned short int AD1IP0 = 4;
    sbit  AD1IP0_bit at IPC3.B4;
    const register unsigned short int AD1IP1 = 5;
    sbit  AD1IP1_bit at IPC3.B5;
    const register unsigned short int AD1IP2 = 6;
    sbit  AD1IP2_bit at IPC3.B6;
    const register unsigned short int DMA1IP0 = 8;
    sbit  DMA1IP0_bit at IPC3.B8;
    const register unsigned short int DMA1IP1 = 9;
    sbit  DMA1IP1_bit at IPC3.B9;
    const register unsigned short int DMA1IP2 = 10;
    sbit  DMA1IP2_bit at IPC3.B10;

sfr unsigned int            IPC4             absolute 0xAC;
    const register unsigned short int SI2C1IP0 = 0;
    sbit  SI2C1IP0_bit at IPC4.B0;
    const register unsigned short int SI2C1IP1 = 1;
    sbit  SI2C1IP1_bit at IPC4.B1;
    const register unsigned short int SI2C1IP2 = 2;
    sbit  SI2C1IP2_bit at IPC4.B2;
    const register unsigned short int MI2C1IP0 = 4;
    sbit  MI2C1IP0_bit at IPC4.B4;
    const register unsigned short int MI2C1IP1 = 5;
    sbit  MI2C1IP1_bit at IPC4.B5;
    const register unsigned short int MI2C1IP2 = 6;
    sbit  MI2C1IP2_bit at IPC4.B6;
    const register unsigned short int CMIP0 = 8;
    sbit  CMIP0_bit at IPC4.B8;
    const register unsigned short int CMIP1 = 9;
    sbit  CMIP1_bit at IPC4.B9;
    const register unsigned short int CMIP2 = 10;
    sbit  CMIP2_bit at IPC4.B10;
    const register unsigned short int CNIP0 = 12;
    sbit  CNIP0_bit at IPC4.B12;
    const register unsigned short int CNIP1 = 13;
    sbit  CNIP1_bit at IPC4.B13;
    const register unsigned short int CNIP2 = 14;
    sbit  CNIP2_bit at IPC4.B14;
    const register unsigned short int SI2C1P0 = 0;
    sbit  SI2C1P0_bit at IPC4.B0;
    const register unsigned short int SI2C1P1 = 1;
    sbit  SI2C1P1_bit at IPC4.B1;
    const register unsigned short int SI2C1P2 = 2;
    sbit  SI2C1P2_bit at IPC4.B2;
    const register unsigned short int MI2C1P0 = 4;
    sbit  MI2C1P0_bit at IPC4.B4;
    const register unsigned short int MI2C1P1 = 5;
    sbit  MI2C1P1_bit at IPC4.B5;
    const register unsigned short int MI2C1P2 = 6;
    sbit  MI2C1P2_bit at IPC4.B6;

sfr unsigned int            IPC5             absolute 0xAE;
    const register unsigned short int INT1IP0 = 0;
    sbit  INT1IP0_bit at IPC5.B0;
    const register unsigned short int INT1IP1 = 1;
    sbit  INT1IP1_bit at IPC5.B1;
    const register unsigned short int INT1IP2 = 2;
    sbit  INT1IP2_bit at IPC5.B2;

sfr unsigned int            IPC6             absolute 0xB0;
    const register unsigned short int DMA2IP0 = 0;
    sbit  DMA2IP0_bit at IPC6.B0;
    const register unsigned short int DMA2IP1 = 1;
    sbit  DMA2IP1_bit at IPC6.B1;
    const register unsigned short int DMA2IP2 = 2;
    sbit  DMA2IP2_bit at IPC6.B2;
    const register unsigned short int OC3IP0 = 4;
    sbit  OC3IP0_bit at IPC6.B4;
    const register unsigned short int OC3IP1 = 5;
    sbit  OC3IP1_bit at IPC6.B5;
    const register unsigned short int OC3IP2 = 6;
    sbit  OC3IP2_bit at IPC6.B6;
    const register unsigned short int OC4IP0 = 8;
    sbit  OC4IP0_bit at IPC6.B8;
    const register unsigned short int OC4IP1 = 9;
    sbit  OC4IP1_bit at IPC6.B9;
    const register unsigned short int OC4IP2 = 10;
    sbit  OC4IP2_bit at IPC6.B10;
    const register unsigned short int T4IP0 = 12;
    sbit  T4IP0_bit at IPC6.B12;
    const register unsigned short int T4IP1 = 13;
    sbit  T4IP1_bit at IPC6.B13;
    const register unsigned short int T4IP2 = 14;
    sbit  T4IP2_bit at IPC6.B14;

sfr unsigned int            IPC7             absolute 0xB2;
    const register unsigned short int T5IP0 = 0;
    sbit  T5IP0_bit at IPC7.B0;
    const register unsigned short int T5IP1 = 1;
    sbit  T5IP1_bit at IPC7.B1;
    const register unsigned short int T5IP2 = 2;
    sbit  T5IP2_bit at IPC7.B2;
    const register unsigned short int INT2IP0 = 4;
    sbit  INT2IP0_bit at IPC7.B4;
    const register unsigned short int INT2IP1 = 5;
    sbit  INT2IP1_bit at IPC7.B5;
    const register unsigned short int INT2IP2 = 6;
    sbit  INT2IP2_bit at IPC7.B6;
    const register unsigned short int U2RXIP0 = 8;
    sbit  U2RXIP0_bit at IPC7.B8;
    const register unsigned short int U2RXIP1 = 9;
    sbit  U2RXIP1_bit at IPC7.B9;
    const register unsigned short int U2RXIP2 = 10;
    sbit  U2RXIP2_bit at IPC7.B10;
    const register unsigned short int U2TXIP0 = 12;
    sbit  U2TXIP0_bit at IPC7.B12;
    const register unsigned short int U2TXIP1 = 13;
    sbit  U2TXIP1_bit at IPC7.B13;
    const register unsigned short int U2TXIP2 = 14;
    sbit  U2TXIP2_bit at IPC7.B14;

sfr unsigned int            IPC8             absolute 0xB4;
    const register unsigned short int SPI2IP0 = 0;
    sbit  SPI2IP0_bit at IPC8.B0;
    const register unsigned short int SPI2IP1 = 1;
    sbit  SPI2IP1_bit at IPC8.B1;
    const register unsigned short int SPI2IP2 = 2;
    sbit  SPI2IP2_bit at IPC8.B2;
    const register unsigned short int SPI2TXIP0 = 4;
    sbit  SPI2TXIP0_bit at IPC8.B4;
    const register unsigned short int SPI2TXIP1 = 5;
    sbit  SPI2TXIP1_bit at IPC8.B5;
    const register unsigned short int SPI2TXIP2 = 6;
    sbit  SPI2TXIP2_bit at IPC8.B6;
    const register unsigned short int CRYFREEIP0 = 8;
    sbit  CRYFREEIP0_bit at IPC8.B8;
    const register unsigned short int CRYFREEIP1 = 9;
    sbit  CRYFREEIP1_bit at IPC8.B9;
    const register unsigned short int CRYFREEIP2 = 10;
    sbit  CRYFREEIP2_bit at IPC8.B10;
    const register unsigned short int CRYROLLIP0 = 12;
    sbit  CRYROLLIP0_bit at IPC8.B12;
    const register unsigned short int CRYROLLIP1 = 13;
    sbit  CRYROLLIP1_bit at IPC8.B13;
    const register unsigned short int CRYROLLIP2 = 14;
    sbit  CRYROLLIP2_bit at IPC8.B14;

sfr unsigned int            IPC9             absolute 0xB6;
    const register unsigned short int DMA3IP0 = 0;
    sbit  DMA3IP0_bit at IPC9.B0;
    const register unsigned short int DMA3IP1 = 1;
    sbit  DMA3IP1_bit at IPC9.B1;
    const register unsigned short int DMA3IP2 = 2;
    sbit  DMA3IP2_bit at IPC9.B2;
    const register unsigned short int IC3IP0 = 4;
    sbit  IC3IP0_bit at IPC9.B4;
    const register unsigned short int IC3IP1 = 5;
    sbit  IC3IP1_bit at IPC9.B5;
    const register unsigned short int IC3IP2 = 6;
    sbit  IC3IP2_bit at IPC9.B6;
    const register unsigned short int IC4IP0 = 8;
    sbit  IC4IP0_bit at IPC9.B8;
    const register unsigned short int IC4IP1 = 9;
    sbit  IC4IP1_bit at IPC9.B9;
    const register unsigned short int IC4IP2 = 10;
    sbit  IC4IP2_bit at IPC9.B10;
    const register unsigned short int IC5IP0 = 12;
    sbit  IC5IP0_bit at IPC9.B12;
    const register unsigned short int IC5IP1 = 13;
    sbit  IC5IP1_bit at IPC9.B13;
    const register unsigned short int IC5IP2 = 14;
    sbit  IC5IP2_bit at IPC9.B14;

sfr unsigned int            IPC10            absolute 0xB8;
    const register unsigned short int IC6IP0 = 0;
    sbit  IC6IP0_bit at IPC10.B0;
    const register unsigned short int IC6IP1 = 1;
    sbit  IC6IP1_bit at IPC10.B1;
    const register unsigned short int IC6IP2 = 2;
    sbit  IC6IP2_bit at IPC10.B2;
    const register unsigned short int OC5IP0 = 4;
    sbit  OC5IP0_bit at IPC10.B4;
    const register unsigned short int OC5IP1 = 5;
    sbit  OC5IP1_bit at IPC10.B5;
    const register unsigned short int OC5IP2 = 6;
    sbit  OC5IP2_bit at IPC10.B6;
    const register unsigned short int OC6IP0 = 8;
    sbit  OC6IP0_bit at IPC10.B8;
    const register unsigned short int OC6IP1 = 9;
    sbit  OC6IP1_bit at IPC10.B9;
    const register unsigned short int OC6IP2 = 10;
    sbit  OC6IP2_bit at IPC10.B10;

sfr unsigned int            IPC11            absolute 0xBA;
    const register unsigned short int PMPIP0 = 4;
    sbit  PMPIP0_bit at IPC11.B4;
    const register unsigned short int PMPIP1 = 5;
    sbit  PMPIP1_bit at IPC11.B5;
    const register unsigned short int PMPIP2 = 6;
    sbit  PMPIP2_bit at IPC11.B6;
    const register unsigned short int DMA4IP0 = 8;
    sbit  DMA4IP0_bit at IPC11.B8;
    const register unsigned short int DMA4IP1 = 9;
    sbit  DMA4IP1_bit at IPC11.B9;
    const register unsigned short int DMA4IP2 = 10;
    sbit  DMA4IP2_bit at IPC11.B10;

sfr unsigned int            IPC12            absolute 0xBC;
    const register unsigned short int SI2C2IP0 = 4;
    sbit  SI2C2IP0_bit at IPC12.B4;
    const register unsigned short int SI2C2IP1 = 5;
    sbit  SI2C2IP1_bit at IPC12.B5;
    const register unsigned short int SI2C2IP2 = 6;
    sbit  SI2C2IP2_bit at IPC12.B6;
    const register unsigned short int MI2C2IP0 = 8;
    sbit  MI2C2IP0_bit at IPC12.B8;
    const register unsigned short int MI2C2IP1 = 9;
    sbit  MI2C2IP1_bit at IPC12.B9;
    const register unsigned short int MI2C2IP2 = 10;
    sbit  MI2C2IP2_bit at IPC12.B10;
    const register unsigned short int SI2C2P0 = 4;
    sbit  SI2C2P0_bit at IPC12.B4;
    const register unsigned short int SI2C2P1 = 5;
    sbit  SI2C2P1_bit at IPC12.B5;
    const register unsigned short int SI2C2P2 = 6;
    sbit  SI2C2P2_bit at IPC12.B6;
    const register unsigned short int MI2C2P0 = 8;
    sbit  MI2C2P0_bit at IPC12.B8;
    const register unsigned short int MI2C2P1 = 9;
    sbit  MI2C2P1_bit at IPC12.B9;
    const register unsigned short int MI2C2P2 = 10;
    sbit  MI2C2P2_bit at IPC12.B10;

sfr unsigned int            IPC13            absolute 0xBE;
    const register unsigned short int INT3IP0 = 4;
    sbit  INT3IP0_bit at IPC13.B4;
    const register unsigned short int INT3IP1 = 5;
    sbit  INT3IP1_bit at IPC13.B5;
    const register unsigned short int INT3IP2 = 6;
    sbit  INT3IP2_bit at IPC13.B6;
    const register unsigned short int INT4IP0 = 8;
    sbit  INT4IP0_bit at IPC13.B8;
    const register unsigned short int INT4IP1 = 9;
    sbit  INT4IP1_bit at IPC13.B9;
    const register unsigned short int INT4IP2 = 10;
    sbit  INT4IP2_bit at IPC13.B10;
    const register unsigned short int CRYDNIP0 = 12;
    sbit  CRYDNIP0_bit at IPC13.B12;
    const register unsigned short int CRYDNIP1 = 13;
    sbit  CRYDNIP1_bit at IPC13.B13;
    const register unsigned short int CRYDNIP2 = 14;
    sbit  CRYDNIP2_bit at IPC13.B14;

sfr unsigned int            IPC14            absolute 0xC0;
    const register unsigned short int KEYSTRIP0 = 0;
    sbit  KEYSTRIP0_bit at IPC14.B0;
    const register unsigned short int KEYSTRIP1 = 1;
    sbit  KEYSTRIP1_bit at IPC14.B1;
    const register unsigned short int KEYSTRIP2 = 2;
    sbit  KEYSTRIP2_bit at IPC14.B2;
    const register unsigned short int SPI1RXIP0 = 8;
    sbit  SPI1RXIP0_bit at IPC14.B8;
    const register unsigned short int SPI1RXIP1 = 9;
    sbit  SPI1RXIP1_bit at IPC14.B9;
    const register unsigned short int SPI1RXIP2 = 10;
    sbit  SPI1RXIP2_bit at IPC14.B10;
    const register unsigned short int SPI2RXIP0 = 12;
    sbit  SPI2RXIP0_bit at IPC14.B12;
    const register unsigned short int SPI2RXIP1 = 13;
    sbit  SPI2RXIP1_bit at IPC14.B13;
    const register unsigned short int SPI2RXIP2 = 14;
    sbit  SPI2RXIP2_bit at IPC14.B14;

sfr unsigned int            IPC15            absolute 0xC2;
    const register unsigned short int SPI3RXIP0 = 0;
    sbit  SPI3RXIP0_bit at IPC15.B0;
    const register unsigned short int SPI3RXIP1 = 1;
    sbit  SPI3RXIP1_bit at IPC15.B1;
    const register unsigned short int SPI3RXIP2 = 2;
    sbit  SPI3RXIP2_bit at IPC15.B2;
    const register unsigned short int DMA5IP0 = 4;
    sbit  DMA5IP0_bit at IPC15.B4;
    const register unsigned short int DMA5IP1 = 5;
    sbit  DMA5IP1_bit at IPC15.B5;
    const register unsigned short int DMA5IP2 = 6;
    sbit  DMA5IP2_bit at IPC15.B6;
    const register unsigned short int RTCIP0 = 8;
    sbit  RTCIP0_bit at IPC15.B8;
    const register unsigned short int RTCIP1 = 9;
    sbit  RTCIP1_bit at IPC15.B9;
    const register unsigned short int RTCIP2 = 10;
    sbit  RTCIP2_bit at IPC15.B10;

sfr unsigned int            IPC16            absolute 0xC4;
    const register unsigned short int U1ERIP0 = 4;
    sbit  U1ERIP0_bit at IPC16.B4;
    const register unsigned short int U1ERIP1 = 5;
    sbit  U1ERIP1_bit at IPC16.B5;
    const register unsigned short int U1ERIP2 = 6;
    sbit  U1ERIP2_bit at IPC16.B6;
    const register unsigned short int U2ERIP0 = 8;
    sbit  U2ERIP0_bit at IPC16.B8;
    const register unsigned short int U2ERIP1 = 9;
    sbit  U2ERIP1_bit at IPC16.B9;
    const register unsigned short int U2ERIP2 = 10;
    sbit  U2ERIP2_bit at IPC16.B10;
    const register unsigned short int CRCIP0 = 12;
    sbit  CRCIP0_bit at IPC16.B12;
    const register unsigned short int CRCIP1 = 13;
    sbit  CRCIP1_bit at IPC16.B13;
    const register unsigned short int CRCIP2 = 14;
    sbit  CRCIP2_bit at IPC16.B14;

sfr unsigned int            IPC18            absolute 0xC8;
    const register unsigned short int LVDIP0 = 0;
    sbit  LVDIP0_bit at IPC18.B0;
    const register unsigned short int LVDIP1 = 1;
    sbit  LVDIP1_bit at IPC18.B1;
    const register unsigned short int LVDIP2 = 2;
    sbit  LVDIP2_bit at IPC18.B2;
    const register unsigned short int HLVDIP0 = 0;
    sbit  HLVDIP0_bit at IPC18.B0;
    const register unsigned short int HLVDIP1 = 1;
    sbit  HLVDIP1_bit at IPC18.B1;
    const register unsigned short int HLVDIP2 = 2;
    sbit  HLVDIP2_bit at IPC18.B2;

sfr unsigned int            IPC19            absolute 0xCA;
    const register unsigned short int CTMUIP0 = 4;
    sbit  CTMUIP0_bit at IPC19.B4;
    const register unsigned short int CTMUIP1 = 5;
    sbit  CTMUIP1_bit at IPC19.B5;
    const register unsigned short int CTMUIP2 = 6;
    sbit  CTMUIP2_bit at IPC19.B6;

sfr unsigned int            IPC20            absolute 0xCC;
    const register unsigned short int U3ERIP0 = 4;
    sbit  U3ERIP0_bit at IPC20.B4;
    const register unsigned short int U3ERIP1 = 5;
    sbit  U3ERIP1_bit at IPC20.B5;
    const register unsigned short int U3ERIP2 = 6;
    sbit  U3ERIP2_bit at IPC20.B6;
    const register unsigned short int U3RXIP0 = 8;
    sbit  U3RXIP0_bit at IPC20.B8;
    const register unsigned short int U3RXIP1 = 9;
    sbit  U3RXIP1_bit at IPC20.B9;
    const register unsigned short int U3RXIP2 = 10;
    sbit  U3RXIP2_bit at IPC20.B10;
    const register unsigned short int U3TXIP0 = 12;
    sbit  U3TXIP0_bit at IPC20.B12;
    const register unsigned short int U3TXIP1 = 13;
    sbit  U3TXIP1_bit at IPC20.B13;
    const register unsigned short int U3TXIP2 = 14;
    sbit  U3TXIP2_bit at IPC20.B14;

sfr unsigned int            IPC21            absolute 0xCE;
    const register unsigned short int U4ERIP0 = 12;
    sbit  U4ERIP0_bit at IPC21.B12;
    const register unsigned short int U4ERIP1 = 13;
    sbit  U4ERIP1_bit at IPC21.B13;
    const register unsigned short int U4ERIP2 = 14;
    sbit  U4ERIP2_bit at IPC21.B14;

sfr unsigned int            IPC22            absolute 0xD0;
    const register unsigned short int U4RXIP0 = 0;
    sbit  U4RXIP0_bit at IPC22.B0;
    const register unsigned short int U4RXIP1 = 1;
    sbit  U4RXIP1_bit at IPC22.B1;
    const register unsigned short int U4RXIP2 = 2;
    sbit  U4RXIP2_bit at IPC22.B2;
    const register unsigned short int U4TXIP0 = 4;
    sbit  U4TXIP0_bit at IPC22.B4;
    const register unsigned short int U4TXIP1 = 5;
    sbit  U4TXIP1_bit at IPC22.B5;
    const register unsigned short int U4TXIP2 = 6;
    sbit  U4TXIP2_bit at IPC22.B6;
    const register unsigned short int SPI3IP0 = 8;
    sbit  SPI3IP0_bit at IPC22.B8;
    const register unsigned short int SPI3IP1 = 9;
    sbit  SPI3IP1_bit at IPC22.B9;
    const register unsigned short int SPI3IP2 = 10;
    sbit  SPI3IP2_bit at IPC22.B10;
    const register unsigned short int SPI3TXIP0 = 12;
    sbit  SPI3TXIP0_bit at IPC22.B12;
    const register unsigned short int SPI3TXIP1 = 13;
    sbit  SPI3TXIP1_bit at IPC22.B13;
    const register unsigned short int SPI3TXIP2 = 14;
    sbit  SPI3TXIP2_bit at IPC22.B14;

sfr unsigned int            IPC23            absolute 0xD2;
sfr unsigned int   volatile IPC25            absolute 0xD6;
sfr unsigned int   volatile IPC26            absolute 0xD8;
    const register unsigned short int FSTIP0 = 8;
    sbit  FSTIP0_bit at IPC26.B8;
    const register unsigned short int FSTIP1 = 9;
    sbit  FSTIP1_bit at IPC26.B9;
    const register unsigned short int FSTIP2 = 10;
    sbit  FSTIP2_bit at IPC26.B10;

sfr unsigned int   volatile IPC29            absolute 0xDE;
    const register unsigned short int JTAGIP0 = 4;
    sbit  JTAGIP0_bit at IPC29.B4;
    const register unsigned short int JTAGIP1 = 5;
    sbit  JTAGIP1_bit at IPC29.B5;
    const register unsigned short int JTAGIP2 = 6;
    sbit  JTAGIP2_bit at IPC29.B6;

sfr unsigned int   volatile INTTREG          absolute 0xE0;
    const register unsigned short int VECNUM0 = 0;
    sbit  VECNUM0_bit at INTTREG.B0;
    const register unsigned short int VECNUM1 = 1;
    sbit  VECNUM1_bit at INTTREG.B1;
    const register unsigned short int VECNUM2 = 2;
    sbit  VECNUM2_bit at INTTREG.B2;
    const register unsigned short int VECNUM3 = 3;
    sbit  VECNUM3_bit at INTTREG.B3;
    const register unsigned short int VECNUM4 = 4;
    sbit  VECNUM4_bit at INTTREG.B4;
    const register unsigned short int VECNUM5 = 5;
    sbit  VECNUM5_bit at INTTREG.B5;
    const register unsigned short int VECNUM6 = 6;
    sbit  VECNUM6_bit at INTTREG.B6;
    const register unsigned short int VECNUM7 = 7;
    sbit  VECNUM7_bit at INTTREG.B7;
    const register unsigned short int ILR0 = 8;
    sbit  ILR0_bit at INTTREG.B8;
    const register unsigned short int ILR1 = 9;
    sbit  ILR1_bit at INTTREG.B9;
    const register unsigned short int ILR2 = 10;
    sbit  ILR2_bit at INTTREG.B10;
    const register unsigned short int ILR3 = 11;
    sbit  ILR3_bit at INTTREG.B11;
    const register unsigned short int VHOLD = 13;
    sbit  VHOLD_bit at INTTREG.B13;
    const register unsigned short int CPUIRQ = 15;
    sbit  CPUIRQ_bit at INTTREG.B15;

sfr unsigned int   volatile OSCCON           absolute 0x100;
    const register unsigned short int OSWEN = 0;
    sbit  OSWEN_bit at OSCCON.B0;
    const register unsigned short int SOSCEN = 1;
    sbit  SOSCEN_bit at OSCCON.B1;
    const register unsigned short int POSCEN = 2;
    sbit  POSCEN_bit at OSCCON.B2;
    const register unsigned short int CF = 3;
    sbit  CF_bit at OSCCON.B3;
    const register unsigned short int LOCK_ = 5;
    sbit  LOCK_bit at OSCCON.B5;
    const register unsigned short int IOLOCK = 6;
    sbit  IOLOCK_bit at OSCCON.B6;
    const register unsigned short int CLKLOCK = 7;
    sbit  CLKLOCK_bit at OSCCON.B7;
    const register unsigned short int NOSC0 = 8;
    sbit  NOSC0_bit at OSCCON.B8;
    const register unsigned short int NOSC1 = 9;
    sbit  NOSC1_bit at OSCCON.B9;
    const register unsigned short int NOSC2 = 10;
    sbit  NOSC2_bit at OSCCON.B10;
    const register unsigned short int COSC0 = 12;
    sbit  COSC0_bit at OSCCON.B12;
    const register unsigned short int COSC1 = 13;
    sbit  COSC1_bit at OSCCON.B13;
    const register unsigned short int COSC2 = 14;
    sbit  COSC2_bit at OSCCON.B14;

sfr unsigned int   volatile OSCCONL          absolute 0x100;
sfr unsigned short volatile OSCCONH          absolute 0x101;
sfr unsigned int   volatile CLKDIV           absolute 0x102;
    const register unsigned short int PLLEN = 5;
    sbit  PLLEN_bit at CLKDIV.B5;
    const register unsigned short int RCDIV0 = 8;
    sbit  RCDIV0_bit at CLKDIV.B8;
    const register unsigned short int RCDIV1 = 9;
    sbit  RCDIV1_bit at CLKDIV.B9;
    const register unsigned short int RCDIV2 = 10;
    sbit  RCDIV2_bit at CLKDIV.B10;
    const register unsigned short int DOZEN = 11;
    sbit  DOZEN_bit at CLKDIV.B11;
    const register unsigned short int DOZE0 = 12;
    sbit  DOZE0_bit at CLKDIV.B12;
    const register unsigned short int DOZE1 = 13;
    sbit  DOZE1_bit at CLKDIV.B13;
    const register unsigned short int DOZE2 = 14;
    sbit  DOZE2_bit at CLKDIV.B14;
    const register unsigned short int ROI = 15;
    sbit  ROI_bit at CLKDIV.B15;

sfr unsigned int   volatile OSCTUN           absolute 0x106;
    const register unsigned short int TUN0 = 0;
    sbit  TUN0_bit at OSCTUN.B0;
    const register unsigned short int TUN1 = 1;
    sbit  TUN1_bit at OSCTUN.B1;
    const register unsigned short int TUN2 = 2;
    sbit  TUN2_bit at OSCTUN.B2;
    const register unsigned short int TUN3 = 3;
    sbit  TUN3_bit at OSCTUN.B3;
    const register unsigned short int TUN4 = 4;
    sbit  TUN4_bit at OSCTUN.B4;
    const register unsigned short int TUN5 = 5;
    sbit  TUN5_bit at OSCTUN.B5;
    const register unsigned short int STORPOL = 8;
    sbit  STORPOL_bit at OSCTUN.B8;
    const register unsigned short int STOR = 9;
    sbit  STOR_bit at OSCTUN.B9;
    const register unsigned short int STLPOL = 10;
    sbit  STLPOL_bit at OSCTUN.B10;
    const register unsigned short int STLOCK = 11;
    sbit  STLOCK_bit at OSCTUN.B11;
    const register unsigned short int STSRC = 12;
    sbit  STSRC_bit at OSCTUN.B12;
    const register unsigned short int STSIDL = 13;
    sbit  STSIDL_bit at OSCTUN.B13;
    const register unsigned short int STEN = 15;
    sbit  STEN_bit at OSCTUN.B15;

sfr unsigned int   volatile RCON             absolute 0x108;
    const register unsigned short int POR = 0;
    sbit  POR_bit at RCON.B0;
    const register unsigned short int BOR = 1;
    sbit  BOR_bit at RCON.B1;
    const register unsigned short int IDLE = 2;
    sbit  IDLE_bit at RCON.B2;
    const register unsigned short int SLEEP = 3;
    sbit  SLEEP_bit at RCON.B3;
    const register unsigned short int WDTO = 4;
    sbit  WDTO_bit at RCON.B4;
    const register unsigned short int SWDTEN = 5;
    sbit  SWDTEN_bit at RCON.B5;
    const register unsigned short int SWR = 6;
    sbit  SWR_bit at RCON.B6;
    const register unsigned short int EXTR = 7;
    sbit  EXTR_bit at RCON.B7;
    const register unsigned short int VREGS = 8;
    sbit  VREGS_bit at RCON.B8;
    const register unsigned short int CM_RCON = 9;
    sbit  CM_RCON_bit at RCON.B9;
    const register unsigned short int DPSLP = 10;
    sbit  DPSLP_bit at RCON.B10;
    const register unsigned short int RETEN = 12;
    sbit  RETEN_bit at RCON.B12;
    const register unsigned short int IOPUWR = 14;
    sbit  IOPUWR_bit at RCON.B14;
    const register unsigned short int TRAPR = 15;
    sbit  TRAPR_bit at RCON.B15;

sfr unsigned int   volatile RCON2            absolute 0x10A;
    const register unsigned short int VBAT = 0;
    sbit  VBAT_bit at RCON2.B0;
    const register unsigned short int VBPOR = 1;
    sbit  VBPOR_bit at RCON2.B1;
    const register unsigned short int VDDPOR = 2;
    sbit  VDDPOR_bit at RCON2.B2;
    const register unsigned short int VDDBOR = 3;
    sbit  VDDBOR_bit at RCON2.B3;

sfr unsigned int   volatile HLVDCON          absolute 0x10C;
    const register unsigned short int HLVDL0 = 0;
    sbit  HLVDL0_bit at HLVDCON.B0;
    const register unsigned short int HLVDL1 = 1;
    sbit  HLVDL1_bit at HLVDCON.B1;
    const register unsigned short int HLVDL2 = 2;
    sbit  HLVDL2_bit at HLVDCON.B2;
    const register unsigned short int HLVDL3 = 3;
    sbit  HLVDL3_bit at HLVDCON.B3;
    const register unsigned short int IRVST = 5;
    sbit  IRVST_bit at HLVDCON.B5;
    const register unsigned short int BGVST = 6;
    sbit  BGVST_bit at HLVDCON.B6;
    const register unsigned short int VDIR = 7;
    sbit  VDIR_bit at HLVDCON.B7;
    const register unsigned short int LSIDL = 13;
    sbit  LSIDL_bit at HLVDCON.B13;
    const register unsigned short int HLVDEN = 15;
    sbit  HLVDEN_bit at HLVDCON.B15;
    const register unsigned short int HLSIDL = 13;
    sbit  HLSIDL_bit at HLVDCON.B13;

sfr unsigned int   volatile DSCON            absolute 0x10E;
    const register unsigned short int RELEASE = 0;
    sbit  RELEASE_bit at DSCON.B0;
    const register unsigned short int DSBOR = 1;
    sbit  DSBOR_bit at DSCON.B1;
    const register unsigned short int WAKEDIS = 2;
    sbit  WAKEDIS_bit at DSCON.B2;
    const register unsigned short int DSEN = 15;
    sbit  DSEN_bit at DSCON.B15;

sfr unsigned int   volatile DSWAKE           absolute 0x110;
    const register unsigned short int DSMCLR = 2;
    sbit  DSMCLR_bit at DSWAKE.B2;
    const register unsigned short int DSRTCC = 3;
    sbit  DSRTCC_bit at DSWAKE.B3;
    const register unsigned short int DSWDT = 4;
    sbit  DSWDT_bit at DSWAKE.B4;
    const register unsigned short int DSFLT = 7;
    sbit  DSFLT_bit at DSWAKE.B7;
    const register unsigned short int DSINT0 = 8;
    sbit  DSINT0_bit at DSWAKE.B8;

sfr unsigned int   volatile DSGPR0           absolute 0x112;
sfr unsigned int   volatile DSGPR1           absolute 0x114;
sfr unsigned int   volatile ALRMVAL          absolute 0x11E;
sfr unsigned int   volatile ALCFGRPT         absolute 0x120;
    const register unsigned short int ARPT0 = 0;
    sbit  ARPT0_bit at ALCFGRPT.B0;
    const register unsigned short int ARPT1 = 1;
    sbit  ARPT1_bit at ALCFGRPT.B1;
    const register unsigned short int ARPT2 = 2;
    sbit  ARPT2_bit at ALCFGRPT.B2;
    const register unsigned short int ARPT3 = 3;
    sbit  ARPT3_bit at ALCFGRPT.B3;
    const register unsigned short int ARPT4 = 4;
    sbit  ARPT4_bit at ALCFGRPT.B4;
    const register unsigned short int ARPT5 = 5;
    sbit  ARPT5_bit at ALCFGRPT.B5;
    const register unsigned short int ARPT6 = 6;
    sbit  ARPT6_bit at ALCFGRPT.B6;
    const register unsigned short int ARPT7 = 7;
    sbit  ARPT7_bit at ALCFGRPT.B7;
    const register unsigned short int ALRMPTR0 = 8;
    sbit  ALRMPTR0_bit at ALCFGRPT.B8;
    const register unsigned short int ALRMPTR1 = 9;
    sbit  ALRMPTR1_bit at ALCFGRPT.B9;
    const register unsigned short int AMASK0 = 10;
    sbit  AMASK0_bit at ALCFGRPT.B10;
    const register unsigned short int AMASK1 = 11;
    sbit  AMASK1_bit at ALCFGRPT.B11;
    const register unsigned short int AMASK2 = 12;
    sbit  AMASK2_bit at ALCFGRPT.B12;
    const register unsigned short int AMASK3 = 13;
    sbit  AMASK3_bit at ALCFGRPT.B13;
    const register unsigned short int CHIME = 14;
    sbit  CHIME_bit at ALCFGRPT.B14;
    const register unsigned short int ALRMEN = 15;
    sbit  ALRMEN_bit at ALCFGRPT.B15;

sfr unsigned int   volatile RTCVAL           absolute 0x122;
sfr unsigned int   volatile RCFGCAL          absolute 0x124;
    const register unsigned short int CAL0 = 0;
    sbit  CAL0_bit at RCFGCAL.B0;
    const register unsigned short int CAL1 = 1;
    sbit  CAL1_bit at RCFGCAL.B1;
    const register unsigned short int CAL2 = 2;
    sbit  CAL2_bit at RCFGCAL.B2;
    const register unsigned short int CAL3 = 3;
    sbit  CAL3_bit at RCFGCAL.B3;
    const register unsigned short int CAL4 = 4;
    sbit  CAL4_bit at RCFGCAL.B4;
    const register unsigned short int CAL5 = 5;
    sbit  CAL5_bit at RCFGCAL.B5;
    const register unsigned short int CAL6 = 6;
    sbit  CAL6_bit at RCFGCAL.B6;
    const register unsigned short int CAL7 = 7;
    sbit  CAL7_bit at RCFGCAL.B7;
    const register unsigned short int RTCPTR0 = 8;
    sbit  RTCPTR0_bit at RCFGCAL.B8;
    const register unsigned short int RTCPTR1 = 9;
    sbit  RTCPTR1_bit at RCFGCAL.B9;
    const register unsigned short int RTCOE = 10;
    sbit  RTCOE_bit at RCFGCAL.B10;
    const register unsigned short int HALFSEC = 11;
    sbit  HALFSEC_bit at RCFGCAL.B11;
    const register unsigned short int RTCSYNC = 12;
    sbit  RTCSYNC_bit at RCFGCAL.B12;
    const register unsigned short int RTCWREN = 13;
    sbit  RTCWREN_bit at RCFGCAL.B13;
    const register unsigned short int RTCEN = 15;
    sbit  RTCEN_bit at RCFGCAL.B15;

sfr unsigned int   volatile RTCPWC           absolute 0x126;
    const register unsigned short int RTCOUT0 = 8;
    sbit  RTCOUT0_bit at RTCPWC.B8;
    const register unsigned short int RTCOUT1 = 9;
    sbit  RTCOUT1_bit at RTCPWC.B9;
    const register unsigned short int RTCLK0 = 10;
    sbit  RTCLK0_bit at RTCPWC.B10;
    const register unsigned short int RTCLK1 = 11;
    sbit  RTCLK1_bit at RTCPWC.B11;
    const register unsigned short int PWSPRE = 12;
    sbit  PWSPRE_bit at RTCPWC.B12;
    const register unsigned short int PWCPRE = 13;
    sbit  PWCPRE_bit at RTCPWC.B13;
    const register unsigned short int PWCPOL = 14;
    sbit  PWCPOL_bit at RTCPWC.B14;
    const register unsigned short int PWCEN = 15;
    sbit  PWCEN_bit at RTCPWC.B15;
    const register unsigned short int PWCSPRE = 12;
    sbit  PWCSPRE_bit at RTCPWC.B12;
    const register unsigned short int PWCCPRE = 13;
    sbit  PWCCPRE_bit at RTCPWC.B13;
    const register unsigned short int RTCCLK0 = 10;
    sbit  RTCCLK0_bit at RTCPWC.B10;
    const register unsigned short int RTCCLK1 = 11;
    sbit  RTCCLK1_bit at RTCPWC.B11;

sfr unsigned int   volatile PMCON1           absolute 0x128;
    const register unsigned short int IRQM0 = 0;
    sbit  IRQM0_bit at PMCON1.B0;
    const register unsigned short int IRQM1 = 1;
    sbit  IRQM1_bit at PMCON1.B1;
    const register unsigned short int BUSKEEP = 2;
    sbit  BUSKEEP_bit at PMCON1.B2;
    const register unsigned short int ALMODE = 4;
    sbit  ALMODE_bit at PMCON1.B4;
    const register unsigned short int ALP = 5;
    sbit  ALP_bit at PMCON1.B5;
    const register unsigned short int CSF0 = 6;
    sbit  CSF0_bit at PMCON1.B6;
    const register unsigned short int CSF1 = 7;
    sbit  CSF1_bit at PMCON1.B7;
    const register unsigned short int MODE0 = 8;
    sbit  MODE0_bit at PMCON1.B8;
    const register unsigned short int MODE1 = 9;
    sbit  MODE1_bit at PMCON1.B9;
    const register unsigned short int ADRMUX0 = 11;
    sbit  ADRMUX0_bit at PMCON1.B11;
    const register unsigned short int ADRMUX1 = 12;
    sbit  ADRMUX1_bit at PMCON1.B12;
    const register unsigned short int PSIDL = 13;
    sbit  PSIDL_bit at PMCON1.B13;
    const register unsigned short int PMPEN = 15;
    sbit  PMPEN_bit at PMCON1.B15;

sfr unsigned int   volatile PMCON2           absolute 0x12A;
    const register unsigned short int RADDR16 = 0;
    sbit  RADDR16_bit at PMCON2.B0;
    const register unsigned short int RADDR17 = 1;
    sbit  RADDR17_bit at PMCON2.B1;
    const register unsigned short int RADDR18 = 2;
    sbit  RADDR18_bit at PMCON2.B2;
    const register unsigned short int RADDR19 = 3;
    sbit  RADDR19_bit at PMCON2.B3;
    const register unsigned short int RADDR20 = 4;
    sbit  RADDR20_bit at PMCON2.B4;
    const register unsigned short int RADDR21 = 5;
    sbit  RADDR21_bit at PMCON2.B5;
    const register unsigned short int RADDR22 = 6;
    sbit  RADDR22_bit at PMCON2.B6;
    const register unsigned short int RADDR23 = 7;
    sbit  RADDR23_bit at PMCON2.B7;
    const register unsigned short int TIMEOUT = 12;
    sbit  TIMEOUT_bit at PMCON2.B12;
    const register unsigned short int ERROR_ = 13;
    sbit  ERROR_bit at PMCON2.B13;
    const register unsigned short int PMPBUSY = 15;
    sbit  PMPBUSY_bit at PMCON2.B15;

sfr unsigned int   volatile PMCON3           absolute 0x12C;
    const register unsigned short int PTEN16 = 0;
    sbit  PTEN16_bit at PMCON3.B0;
    const register unsigned short int PTEN17 = 1;
    sbit  PTEN17_bit at PMCON3.B1;
    const register unsigned short int PTEN18 = 2;
    sbit  PTEN18_bit at PMCON3.B2;
    const register unsigned short int PTEN19 = 3;
    sbit  PTEN19_bit at PMCON3.B3;
    const register unsigned short int PTEN20 = 4;
    sbit  PTEN20_bit at PMCON3.B4;
    const register unsigned short int PTEN21 = 5;
    sbit  PTEN21_bit at PMCON3.B5;
    const register unsigned short int PTEN22 = 6;
    sbit  PTEN22_bit at PMCON3.B6;
    const register unsigned short int AWAITE = 8;
    sbit  AWAITE_bit at PMCON3.B8;
    const register unsigned short int AWAITM0 = 9;
    sbit  AWAITM0_bit at PMCON3.B9;
    const register unsigned short int AWAITM1 = 10;
    sbit  AWAITM1_bit at PMCON3.B10;
    const register unsigned short int PTBE0EN = 12;
    sbit  PTBE0EN_bit at PMCON3.B12;
    const register unsigned short int PTBE1EN = 13;
    sbit  PTBE1EN_bit at PMCON3.B13;
    const register unsigned short int PTRDEN = 14;
    sbit  PTRDEN_bit at PMCON3.B14;
    const register unsigned short int PTWREN = 15;
    sbit  PTWREN_bit at PMCON3.B15;

sfr unsigned int   volatile PMCON4           absolute 0x12E;
    const register unsigned short int PTEN0 = 0;
    sbit  PTEN0_bit at PMCON4.B0;
    const register unsigned short int PTEN1 = 1;
    sbit  PTEN1_bit at PMCON4.B1;
    const register unsigned short int PTEN2 = 2;
    sbit  PTEN2_bit at PMCON4.B2;
    const register unsigned short int PTEN3 = 3;
    sbit  PTEN3_bit at PMCON4.B3;
    const register unsigned short int PTEN4 = 4;
    sbit  PTEN4_bit at PMCON4.B4;
    const register unsigned short int PTEN5 = 5;
    sbit  PTEN5_bit at PMCON4.B5;
    const register unsigned short int PTEN6 = 6;
    sbit  PTEN6_bit at PMCON4.B6;
    const register unsigned short int PTEN7 = 7;
    sbit  PTEN7_bit at PMCON4.B7;
    const register unsigned short int PTEN8 = 8;
    sbit  PTEN8_bit at PMCON4.B8;
    const register unsigned short int PTEN9 = 9;
    sbit  PTEN9_bit at PMCON4.B9;
    const register unsigned short int PTEN10 = 10;
    sbit  PTEN10_bit at PMCON4.B10;
    const register unsigned short int PTEN11 = 11;
    sbit  PTEN11_bit at PMCON4.B11;
    const register unsigned short int PTEN12 = 12;
    sbit  PTEN12_bit at PMCON4.B12;
    const register unsigned short int PTEN13 = 13;
    sbit  PTEN13_bit at PMCON4.B13;
    const register unsigned short int PTEN14 = 14;
    sbit  PTEN14_bit at PMCON4.B14;
    const register unsigned short int PTEN15 = 15;
    sbit  PTEN15_bit at PMCON4.B15;

sfr unsigned int   volatile PMCS1CF          absolute 0x130;
    const register unsigned short int PTSZ0 = 5;
    sbit  PTSZ0_bit at PMCS1CF.B5;
    const register unsigned short int PTSZ1 = 6;
    sbit  PTSZ1_bit at PMCS1CF.B6;
    const register unsigned short int ACKP = 7;
    sbit  ACKP_bit at PMCS1CF.B7;
    const register unsigned short int SM = 8;
    sbit  SM_bit at PMCS1CF.B8;
    const register unsigned short int RDSP = 9;
    sbit  RDSP_bit at PMCS1CF.B9;
    const register unsigned short int WRSP = 10;
    sbit  WRSP_bit at PMCS1CF.B10;
    const register unsigned short int BEP = 12;
    sbit  BEP_bit at PMCS1CF.B12;
    const register unsigned short int CSPTEN = 13;
    sbit  CSPTEN_bit at PMCS1CF.B13;
    const register unsigned short int CSP = 14;
    sbit  CSP_bit at PMCS1CF.B14;
    const register unsigned short int CSDIS = 15;
    sbit  CSDIS_bit at PMCS1CF.B15;

sfr unsigned int   volatile PMCS1BS          absolute 0x132;
    const register unsigned short int BASE11 = 3;
    sbit  BASE11_bit at PMCS1BS.B3;
    const register unsigned short int BASE15 = 7;
    sbit  BASE15_bit at PMCS1BS.B7;
    const register unsigned short int BASE16 = 8;
    sbit  BASE16_bit at PMCS1BS.B8;
    const register unsigned short int BASE17 = 9;
    sbit  BASE17_bit at PMCS1BS.B9;
    const register unsigned short int BASE18 = 10;
    sbit  BASE18_bit at PMCS1BS.B10;
    const register unsigned short int BASE19 = 11;
    sbit  BASE19_bit at PMCS1BS.B11;
    const register unsigned short int BASE20 = 12;
    sbit  BASE20_bit at PMCS1BS.B12;
    const register unsigned short int BASE21 = 13;
    sbit  BASE21_bit at PMCS1BS.B13;
    const register unsigned short int BASE22 = 14;
    sbit  BASE22_bit at PMCS1BS.B14;
    const register unsigned short int BASE23 = 15;
    sbit  BASE23_bit at PMCS1BS.B15;

sfr unsigned int   volatile PMCS1MD          absolute 0x134;
    const register unsigned short int DWAITE0 = 0;
    sbit  DWAITE0_bit at PMCS1MD.B0;
    const register unsigned short int DWAITE1 = 1;
    sbit  DWAITE1_bit at PMCS1MD.B1;
    const register unsigned short int DWAITM0 = 2;
    sbit  DWAITM0_bit at PMCS1MD.B2;
    const register unsigned short int DWAITM1 = 3;
    sbit  DWAITM1_bit at PMCS1MD.B3;
    const register unsigned short int DWAITM2 = 4;
    sbit  DWAITM2_bit at PMCS1MD.B4;
    const register unsigned short int DWAITM3 = 5;
    sbit  DWAITM3_bit at PMCS1MD.B5;
    const register unsigned short int DWAITB0 = 6;
    sbit  DWAITB0_bit at PMCS1MD.B6;
    const register unsigned short int DWAITB1 = 7;
    sbit  DWAITB1_bit at PMCS1MD.B7;
    const register unsigned short int AMWAIT0 = 11;
    sbit  AMWAIT0_bit at PMCS1MD.B11;
    const register unsigned short int AMWAIT1 = 12;
    sbit  AMWAIT1_bit at PMCS1MD.B12;
    const register unsigned short int AMWAIT2 = 13;
    sbit  AMWAIT2_bit at PMCS1MD.B13;
    const register unsigned short int ACKM0 = 14;
    sbit  ACKM0_bit at PMCS1MD.B14;
    const register unsigned short int ACKM1 = 15;
    sbit  ACKM1_bit at PMCS1MD.B15;

sfr unsigned int   volatile PMCS2CF          absolute 0x136;
sfr unsigned int   volatile PMCS2BS          absolute 0x138;
sfr unsigned int   volatile PMCS2MD          absolute 0x13A;
sfr unsigned int   volatile PMDOUT1          absolute 0x13C;
sfr unsigned int   volatile PMDOUT2          absolute 0x13E;
sfr unsigned int   volatile PMDIN1           absolute 0x140;
sfr unsigned int   volatile PMDIN2           absolute 0x142;
sfr unsigned int   volatile PMSTAT           absolute 0x144;
    const register unsigned short int OB0E = 0;
    sbit  OB0E_bit at PMSTAT.B0;
    const register unsigned short int OB1E = 1;
    sbit  OB1E_bit at PMSTAT.B1;
    const register unsigned short int OB2E = 2;
    sbit  OB2E_bit at PMSTAT.B2;
    const register unsigned short int OB3E = 3;
    sbit  OB3E_bit at PMSTAT.B3;
    const register unsigned short int OBUF = 6;
    sbit  OBUF_bit at PMSTAT.B6;
    const register unsigned short int OBE = 7;
    sbit  OBE_bit at PMSTAT.B7;
    const register unsigned short int IB0F = 8;
    sbit  IB0F_bit at PMSTAT.B8;
    const register unsigned short int IB1F = 9;
    sbit  IB1F_bit at PMSTAT.B9;
    const register unsigned short int IB2F = 10;
    sbit  IB2F_bit at PMSTAT.B10;
    const register unsigned short int IB3F = 11;
    sbit  IB3F_bit at PMSTAT.B11;
    const register unsigned short int IBOV = 14;
    sbit  IBOV_bit at PMSTAT.B14;
    const register unsigned short int IBF = 15;
    sbit  IBF_bit at PMSTAT.B15;

sfr unsigned int   volatile CRCCON1          absolute 0x158;
    const register unsigned short int LENDIAN = 3;
    sbit  LENDIAN_bit at CRCCON1.B3;
    const register unsigned short int CRCGO = 4;
    sbit  CRCGO_bit at CRCCON1.B4;
    const register unsigned short int CRCISEL = 5;
    sbit  CRCISEL_bit at CRCCON1.B5;
    const register unsigned short int CRCMPT = 6;
    sbit  CRCMPT_bit at CRCCON1.B6;
    const register unsigned short int CRCFUL = 7;
    sbit  CRCFUL_bit at CRCCON1.B7;
    const register unsigned short int VWORD0 = 8;
    sbit  VWORD0_bit at CRCCON1.B8;
    const register unsigned short int VWORD1 = 9;
    sbit  VWORD1_bit at CRCCON1.B9;
    const register unsigned short int VWORD2 = 10;
    sbit  VWORD2_bit at CRCCON1.B10;
    const register unsigned short int VWORD3 = 11;
    sbit  VWORD3_bit at CRCCON1.B11;
    const register unsigned short int VWORD4 = 12;
    sbit  VWORD4_bit at CRCCON1.B12;
    const register unsigned short int CSIDL = 13;
    sbit  CSIDL_bit at CRCCON1.B13;
    const register unsigned short int CRCEN = 15;
    sbit  CRCEN_bit at CRCCON1.B15;

sfr unsigned int   volatile CRCCON2          absolute 0x15A;
    const register unsigned short int PLEN0 = 0;
    sbit  PLEN0_bit at CRCCON2.B0;
    const register unsigned short int PLEN1 = 1;
    sbit  PLEN1_bit at CRCCON2.B1;
    const register unsigned short int PLEN2 = 2;
    sbit  PLEN2_bit at CRCCON2.B2;
    const register unsigned short int PLEN3 = 3;
    sbit  PLEN3_bit at CRCCON2.B3;
    const register unsigned short int PLEN4 = 4;
    sbit  PLEN4_bit at CRCCON2.B4;
    const register unsigned short int DWIDTH0 = 8;
    sbit  DWIDTH0_bit at CRCCON2.B8;
    const register unsigned short int DWIDTH1 = 9;
    sbit  DWIDTH1_bit at CRCCON2.B9;
    const register unsigned short int DWIDTH2 = 10;
    sbit  DWIDTH2_bit at CRCCON2.B10;
    const register unsigned short int DWIDTH3 = 11;
    sbit  DWIDTH3_bit at CRCCON2.B11;
    const register unsigned short int DWIDTH4 = 12;
    sbit  DWIDTH4_bit at CRCCON2.B12;

sfr unsigned int   volatile CRCXORL          absolute 0x15C;
    const register unsigned short int X1 = 1;
    sbit  X1_bit at CRCXORL.B1;
    const register unsigned short int X2 = 2;
    sbit  X2_bit at CRCXORL.B2;
    const register unsigned short int X3 = 3;
    sbit  X3_bit at CRCXORL.B3;
    const register unsigned short int X4 = 4;
    sbit  X4_bit at CRCXORL.B4;
    const register unsigned short int X5 = 5;
    sbit  X5_bit at CRCXORL.B5;
    const register unsigned short int X6 = 6;
    sbit  X6_bit at CRCXORL.B6;
    const register unsigned short int X7 = 7;
    sbit  X7_bit at CRCXORL.B7;
    const register unsigned short int X8 = 8;
    sbit  X8_bit at CRCXORL.B8;
    const register unsigned short int X9 = 9;
    sbit  X9_bit at CRCXORL.B9;
    const register unsigned short int X10 = 10;
    sbit  X10_bit at CRCXORL.B10;
    const register unsigned short int X11 = 11;
    sbit  X11_bit at CRCXORL.B11;
    const register unsigned short int X12 = 12;
    sbit  X12_bit at CRCXORL.B12;
    const register unsigned short int X13 = 13;
    sbit  X13_bit at CRCXORL.B13;
    const register unsigned short int X14 = 14;
    sbit  X14_bit at CRCXORL.B14;
    const register unsigned short int X15 = 15;
    sbit  X15_bit at CRCXORL.B15;

sfr unsigned int   volatile CRCXORH          absolute 0x15E;
    const register unsigned short int X16 = 0;
    sbit  X16_bit at CRCXORH.B0;
    const register unsigned short int X17 = 1;
    sbit  X17_bit at CRCXORH.B1;
    const register unsigned short int X18 = 2;
    sbit  X18_bit at CRCXORH.B2;
    const register unsigned short int X19 = 3;
    sbit  X19_bit at CRCXORH.B3;
    const register unsigned short int X20 = 4;
    sbit  X20_bit at CRCXORH.B4;
    const register unsigned short int X21 = 5;
    sbit  X21_bit at CRCXORH.B5;
    const register unsigned short int X22 = 6;
    sbit  X22_bit at CRCXORH.B6;
    const register unsigned short int X23 = 7;
    sbit  X23_bit at CRCXORH.B7;
    const register unsigned short int X24 = 8;
    sbit  X24_bit at CRCXORH.B8;
    const register unsigned short int X25 = 9;
    sbit  X25_bit at CRCXORH.B9;
    const register unsigned short int X26 = 10;
    sbit  X26_bit at CRCXORH.B10;
    const register unsigned short int X27 = 11;
    sbit  X27_bit at CRCXORH.B11;
    const register unsigned short int X28 = 12;
    sbit  X28_bit at CRCXORH.B12;
    const register unsigned short int X29 = 13;
    sbit  X29_bit at CRCXORH.B13;
    const register unsigned short int X30 = 14;
    sbit  X30_bit at CRCXORH.B14;
    const register unsigned short int X31 = 15;
    sbit  X31_bit at CRCXORH.B15;

sfr unsigned int   volatile CRCDAT           absolute 0x160;
sfr unsigned int   volatile CRCDATL          absolute 0x160;
sfr unsigned int   volatile CRCDATH          absolute 0x162;
sfr unsigned int   volatile CRCWDAT          absolute 0x164;
sfr unsigned int   volatile CRCWDATL         absolute 0x164;
sfr unsigned int   volatile CRCWDATH         absolute 0x166;
sfr unsigned int   volatile REFOCON1         absolute 0x168;
    const register unsigned short int ROSEL0 = 0;
    sbit  ROSEL0_bit at REFOCON1.B0;
    const register unsigned short int ROSEL1 = 1;
    sbit  ROSEL1_bit at REFOCON1.B1;
    const register unsigned short int ROSEL2 = 2;
    sbit  ROSEL2_bit at REFOCON1.B2;
    const register unsigned short int ROSEL3 = 3;
    sbit  ROSEL3_bit at REFOCON1.B3;
    const register unsigned short int ROACTIVE = 8;
    sbit  ROACTIVE_bit at REFOCON1.B8;
    const register unsigned short int ROSWEN = 9;
    sbit  ROSWEN_bit at REFOCON1.B9;
    const register unsigned short int ROSLP = 11;
    sbit  ROSLP_bit at REFOCON1.B11;
    const register unsigned short int ROOUT = 12;
    sbit  ROOUT_bit at REFOCON1.B12;
    const register unsigned short int ROSIDL = 13;
    sbit  ROSIDL_bit at REFOCON1.B13;
    const register unsigned short int ROEN = 15;
    sbit  ROEN_bit at REFOCON1.B15;

sfr unsigned int   volatile REFOCONL         absolute 0x168;
sfr unsigned int   volatile REFOCON2         absolute 0x16A;
    const register unsigned short int RODIV0 = 0;
    sbit  RODIV0_bit at REFOCON2.B0;
    const register unsigned short int RODIV1 = 1;
    sbit  RODIV1_bit at REFOCON2.B1;
    const register unsigned short int RODIV2 = 2;
    sbit  RODIV2_bit at REFOCON2.B2;
    const register unsigned short int RODIV3 = 3;
    sbit  RODIV3_bit at REFOCON2.B3;
    const register unsigned short int RODIV4 = 4;
    sbit  RODIV4_bit at REFOCON2.B4;
    const register unsigned short int RODIV5 = 5;
    sbit  RODIV5_bit at REFOCON2.B5;
    const register unsigned short int RODIV6 = 6;
    sbit  RODIV6_bit at REFOCON2.B6;
    const register unsigned short int RODIV7 = 7;
    sbit  RODIV7_bit at REFOCON2.B7;
    const register unsigned short int RODIV8 = 8;
    sbit  RODIV8_bit at REFOCON2.B8;
    const register unsigned short int RODIV9 = 9;
    sbit  RODIV9_bit at REFOCON2.B9;
    const register unsigned short int RODIV10 = 10;
    sbit  RODIV10_bit at REFOCON2.B10;
    const register unsigned short int RODIV11 = 11;
    sbit  RODIV11_bit at REFOCON2.B11;
    const register unsigned short int RODIV12 = 12;
    sbit  RODIV12_bit at REFOCON2.B12;
    const register unsigned short int RODIV13 = 13;
    sbit  RODIV13_bit at REFOCON2.B13;
    const register unsigned short int RODIV14 = 14;
    sbit  RODIV14_bit at REFOCON2.B14;

sfr unsigned int   volatile REFOCONH         absolute 0x16A;
sfr unsigned int   volatile REFOTRIML        absolute 0x16C;
    const register unsigned short int ROTRIM8 = 7;
    sbit  ROTRIM8_bit at REFOTRIML.B7;
    const register unsigned short int ROTRIM7 = 8;
    sbit  ROTRIM7_bit at REFOTRIML.B8;
    const register unsigned short int ROTRIM6 = 9;
    sbit  ROTRIM6_bit at REFOTRIML.B9;
    const register unsigned short int ROTRIM5 = 10;
    sbit  ROTRIM5_bit at REFOTRIML.B10;
    const register unsigned short int ROTRIM4 = 11;
    sbit  ROTRIM4_bit at REFOTRIML.B11;
    const register unsigned short int ROTRIM3 = 12;
    sbit  ROTRIM3_bit at REFOTRIML.B12;
    const register unsigned short int ROTRIM2 = 13;
    sbit  ROTRIM2_bit at REFOTRIML.B13;
    const register unsigned short int ROTRIM1 = 14;
    sbit  ROTRIM1_bit at REFOTRIML.B14;
    const register unsigned short int ROTRIM0 = 15;
    sbit  ROTRIM0_bit at REFOTRIML.B15;

sfr unsigned int            PMD1             absolute 0x170;
    const register unsigned short int ADC1MD = 0;
    sbit  ADC1MD_bit at PMD1.B0;
    const register unsigned short int SPI1MD = 3;
    sbit  SPI1MD_bit at PMD1.B3;
    const register unsigned short int SPI2MD = 4;
    sbit  SPI2MD_bit at PMD1.B4;
    const register unsigned short int U1MD = 5;
    sbit  U1MD_bit at PMD1.B5;
    const register unsigned short int U2MD = 6;
    sbit  U2MD_bit at PMD1.B6;
    const register unsigned short int I2C1MD = 7;
    sbit  I2C1MD_bit at PMD1.B7;
    const register unsigned short int T1MD = 11;
    sbit  T1MD_bit at PMD1.B11;
    const register unsigned short int T2MD = 12;
    sbit  T2MD_bit at PMD1.B12;
    const register unsigned short int T3MD = 13;
    sbit  T3MD_bit at PMD1.B13;
    const register unsigned short int T4MD = 14;
    sbit  T4MD_bit at PMD1.B14;
    const register unsigned short int T5MD = 15;
    sbit  T5MD_bit at PMD1.B15;

sfr unsigned int            PMD2             absolute 0x172;
    const register unsigned short int OC1MD = 0;
    sbit  OC1MD_bit at PMD2.B0;
    const register unsigned short int OC2MD = 1;
    sbit  OC2MD_bit at PMD2.B1;
    const register unsigned short int OC3MD = 2;
    sbit  OC3MD_bit at PMD2.B2;
    const register unsigned short int OC4MD = 3;
    sbit  OC4MD_bit at PMD2.B3;
    const register unsigned short int OC5MD = 4;
    sbit  OC5MD_bit at PMD2.B4;
    const register unsigned short int OC6MD = 5;
    sbit  OC6MD_bit at PMD2.B5;
    const register unsigned short int IC1MD = 8;
    sbit  IC1MD_bit at PMD2.B8;
    const register unsigned short int IC2MD = 9;
    sbit  IC2MD_bit at PMD2.B9;
    const register unsigned short int IC3MD = 10;
    sbit  IC3MD_bit at PMD2.B10;
    const register unsigned short int IC4MD = 11;
    sbit  IC4MD_bit at PMD2.B11;
    const register unsigned short int IC5MD = 12;
    sbit  IC5MD_bit at PMD2.B12;
    const register unsigned short int IC6MD = 13;
    sbit  IC6MD_bit at PMD2.B13;

sfr unsigned int            PMD3             absolute 0x174;
    const register unsigned short int I2C2MD = 1;
    sbit  I2C2MD_bit at PMD3.B1;
    const register unsigned short int U3MD = 3;
    sbit  U3MD_bit at PMD3.B3;
    const register unsigned short int CRCMD = 7;
    sbit  CRCMD_bit at PMD3.B7;
    const register unsigned short int PMPMD = 8;
    sbit  PMPMD_bit at PMD3.B8;
    const register unsigned short int RTCCMD = 9;
    sbit  RTCCMD_bit at PMD3.B9;
    const register unsigned short int CMPMD = 10;
    sbit  CMPMD_bit at PMD3.B10;
    const register unsigned short int DSMMD = 11;
    sbit  DSMMD_bit at PMD3.B11;
    const register unsigned short int CRCPMD = 7;
    sbit  CRCPMD_bit at PMD3.B7;
    const register unsigned short int TXMMD = 11;
    sbit  TXMMD_bit at PMD3.B11;

sfr unsigned int   volatile PMD4             absolute 0x176;
    const register unsigned short int LVDMD = 1;
    sbit  LVDMD_bit at PMD4.B1;
    const register unsigned short int CTMUMD = 2;
    sbit  CTMUMD_bit at PMD4.B2;
    const register unsigned short int REFOMD = 3;
    sbit  REFOMD_bit at PMD4.B3;
    const register unsigned short int U4MD = 5;
    sbit  U4MD_bit at PMD4.B5;
    const register unsigned short int UPWMMD = 6;
    sbit  UPWMMD_bit at PMD4.B6;
    const register unsigned short int HLVDMD = 1;
    sbit  HLVDMD_bit at PMD4.B1;

sfr unsigned int   volatile PMD5             absolute 0x178;
sfr unsigned int   volatile PMD6             absolute 0x17A;
    const register unsigned short int SPI3MD = 0;
    sbit  SPI3MD_bit at PMD6.B0;

sfr unsigned int   volatile PMD7             absolute 0x17C;
    const register unsigned short int DMA0MD = 4;
    sbit  DMA0MD_bit at PMD7.B4;
    const register unsigned short int DMA1MD = 5;
    sbit  DMA1MD_bit at PMD7.B5;

sfr unsigned int   volatile PMD8             absolute 0x17E;
    const register unsigned short int CRYMD = 0;
    sbit  CRYMD_bit at PMD8.B0;

sfr unsigned int   volatile TRISA            absolute 0x180;
    const register unsigned short int TRISA0 = 0;
    sbit  TRISA0_bit at TRISA.B0;
    const register unsigned short int TRISA1 = 1;
    sbit  TRISA1_bit at TRISA.B1;
    const register unsigned short int TRISA2 = 2;
    sbit  TRISA2_bit at TRISA.B2;
    const register unsigned short int TRISA3 = 3;
    sbit  TRISA3_bit at TRISA.B3;
    const register unsigned short int TRISA4 = 4;
    sbit  TRISA4_bit at TRISA.B4;
    const register unsigned short int TRISA7 = 7;
    sbit  TRISA7_bit at TRISA.B7;
    const register unsigned short int TRISA8 = 8;
    sbit  TRISA8_bit at TRISA.B8;
    const register unsigned short int TRISA9 = 9;
    sbit  TRISA9_bit at TRISA.B9;
    const register unsigned short int TRISA10 = 10;
    sbit  TRISA10_bit at TRISA.B10;

sfr unsigned int   volatile PORTA            absolute 0x182;
    const register unsigned short int RA0 = 0;
    sbit  RA0_bit at PORTA.B0;
    const register unsigned short int RA1 = 1;
    sbit  RA1_bit at PORTA.B1;
    const register unsigned short int RA2 = 2;
    sbit  RA2_bit at PORTA.B2;
    const register unsigned short int RA3 = 3;
    sbit  RA3_bit at PORTA.B3;
    const register unsigned short int RA4 = 4;
    sbit  RA4_bit at PORTA.B4;
    const register unsigned short int RA7 = 7;
    sbit  RA7_bit at PORTA.B7;
    const register unsigned short int RA8 = 8;
    sbit  RA8_bit at PORTA.B8;
    const register unsigned short int RA9 = 9;
    sbit  RA9_bit at PORTA.B9;
    const register unsigned short int RA10 = 10;
    sbit  RA10_bit at PORTA.B10;

sfr unsigned int   volatile LATA             absolute 0x184;
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
    const register unsigned short int LATA7 = 7;
    sbit  LATA7_bit at LATA.B7;
    const register unsigned short int LATA8 = 8;
    sbit  LATA8_bit at LATA.B8;
    const register unsigned short int LATA9 = 9;
    sbit  LATA9_bit at LATA.B9;
    const register unsigned short int LATA10 = 10;
    sbit  LATA10_bit at LATA.B10;

sfr unsigned int   volatile ODCA             absolute 0x186;
    const register unsigned short int ODA0 = 0;
    sbit  ODA0_bit at ODCA.B0;
    const register unsigned short int ODA1 = 1;
    sbit  ODA1_bit at ODCA.B1;
    const register unsigned short int ODA2 = 2;
    sbit  ODA2_bit at ODCA.B2;
    const register unsigned short int ODA3 = 3;
    sbit  ODA3_bit at ODCA.B3;
    const register unsigned short int ODA4 = 4;
    sbit  ODA4_bit at ODCA.B4;
    const register unsigned short int ODA7 = 7;
    sbit  ODA7_bit at ODCA.B7;
    const register unsigned short int ODA8 = 8;
    sbit  ODA8_bit at ODCA.B8;
    const register unsigned short int ODA9 = 9;
    sbit  ODA9_bit at ODCA.B9;
    const register unsigned short int ODA10 = 10;
    sbit  ODA10_bit at ODCA.B10;

sfr unsigned int   volatile ANSA             absolute 0x188;
    const register unsigned short int ANSA0 = 0;
    sbit  ANSA0_bit at ANSA.B0;
    const register unsigned short int ANSA1 = 1;
    sbit  ANSA1_bit at ANSA.B1;
    const register unsigned short int ANSA2 = 2;
    sbit  ANSA2_bit at ANSA.B2;
    const register unsigned short int ANSA3 = 3;
    sbit  ANSA3_bit at ANSA.B3;

sfr unsigned int   volatile TRISB            absolute 0x18A;
    const register unsigned short int TRISB0 = 0;
    sbit  TRISB0_bit at TRISB.B0;
    const register unsigned short int TRISB1 = 1;
    sbit  TRISB1_bit at TRISB.B1;
    const register unsigned short int TRISB2 = 2;
    sbit  TRISB2_bit at TRISB.B2;
    const register unsigned short int TRISB3 = 3;
    sbit  TRISB3_bit at TRISB.B3;
    const register unsigned short int TRISB4 = 4;
    sbit  TRISB4_bit at TRISB.B4;
    const register unsigned short int TRISB5 = 5;
    sbit  TRISB5_bit at TRISB.B5;
    const register unsigned short int TRISB6 = 6;
    sbit  TRISB6_bit at TRISB.B6;
    const register unsigned short int TRISB7 = 7;
    sbit  TRISB7_bit at TRISB.B7;
    const register unsigned short int TRISB8 = 8;
    sbit  TRISB8_bit at TRISB.B8;
    const register unsigned short int TRISB9 = 9;
    sbit  TRISB9_bit at TRISB.B9;
    const register unsigned short int TRISB10 = 10;
    sbit  TRISB10_bit at TRISB.B10;
    const register unsigned short int TRISB11 = 11;
    sbit  TRISB11_bit at TRISB.B11;
    const register unsigned short int TRISB12 = 12;
    sbit  TRISB12_bit at TRISB.B12;
    const register unsigned short int TRISB13 = 13;
    sbit  TRISB13_bit at TRISB.B13;
    const register unsigned short int TRISB14 = 14;
    sbit  TRISB14_bit at TRISB.B14;
    const register unsigned short int TRISB15 = 15;
    sbit  TRISB15_bit at TRISB.B15;

sfr unsigned int   volatile PORTB            absolute 0x18C;
    const register unsigned short int RB0 = 0;
    sbit  RB0_bit at PORTB.B0;
    const register unsigned short int RB1 = 1;
    sbit  RB1_bit at PORTB.B1;
    const register unsigned short int RB2 = 2;
    sbit  RB2_bit at PORTB.B2;
    const register unsigned short int RB3 = 3;
    sbit  RB3_bit at PORTB.B3;
    const register unsigned short int RB4 = 4;
    sbit  RB4_bit at PORTB.B4;
    const register unsigned short int RB5 = 5;
    sbit  RB5_bit at PORTB.B5;
    const register unsigned short int RB6 = 6;
    sbit  RB6_bit at PORTB.B6;
    const register unsigned short int RB7 = 7;
    sbit  RB7_bit at PORTB.B7;
    const register unsigned short int RB8 = 8;
    sbit  RB8_bit at PORTB.B8;
    const register unsigned short int RB9 = 9;
    sbit  RB9_bit at PORTB.B9;
    const register unsigned short int RB10 = 10;
    sbit  RB10_bit at PORTB.B10;
    const register unsigned short int RB11 = 11;
    sbit  RB11_bit at PORTB.B11;
    const register unsigned short int RB12 = 12;
    sbit  RB12_bit at PORTB.B12;
    const register unsigned short int RB13 = 13;
    sbit  RB13_bit at PORTB.B13;
    const register unsigned short int RB14 = 14;
    sbit  RB14_bit at PORTB.B14;
    const register unsigned short int RB15 = 15;
    sbit  RB15_bit at PORTB.B15;

sfr unsigned int   volatile LATB             absolute 0x18E;
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
    const register unsigned short int LATB8 = 8;
    sbit  LATB8_bit at LATB.B8;
    const register unsigned short int LATB9 = 9;
    sbit  LATB9_bit at LATB.B9;
    const register unsigned short int LATB10 = 10;
    sbit  LATB10_bit at LATB.B10;
    const register unsigned short int LATB11 = 11;
    sbit  LATB11_bit at LATB.B11;
    const register unsigned short int LATB12 = 12;
    sbit  LATB12_bit at LATB.B12;
    const register unsigned short int LATB13 = 13;
    sbit  LATB13_bit at LATB.B13;
    const register unsigned short int LATB14 = 14;
    sbit  LATB14_bit at LATB.B14;
    const register unsigned short int LATB15 = 15;
    sbit  LATB15_bit at LATB.B15;

sfr unsigned int   volatile ODCB             absolute 0x190;
    const register unsigned short int ODB0 = 0;
    sbit  ODB0_bit at ODCB.B0;
    const register unsigned short int ODB1 = 1;
    sbit  ODB1_bit at ODCB.B1;
    const register unsigned short int ODB2 = 2;
    sbit  ODB2_bit at ODCB.B2;
    const register unsigned short int ODB3 = 3;
    sbit  ODB3_bit at ODCB.B3;
    const register unsigned short int ODB4 = 4;
    sbit  ODB4_bit at ODCB.B4;
    const register unsigned short int ODB5 = 5;
    sbit  ODB5_bit at ODCB.B5;
    const register unsigned short int ODB6 = 6;
    sbit  ODB6_bit at ODCB.B6;
    const register unsigned short int ODB7 = 7;
    sbit  ODB7_bit at ODCB.B7;
    const register unsigned short int ODB8 = 8;
    sbit  ODB8_bit at ODCB.B8;
    const register unsigned short int ODB9 = 9;
    sbit  ODB9_bit at ODCB.B9;
    const register unsigned short int ODB10 = 10;
    sbit  ODB10_bit at ODCB.B10;
    const register unsigned short int ODB11 = 11;
    sbit  ODB11_bit at ODCB.B11;
    const register unsigned short int ODB12 = 12;
    sbit  ODB12_bit at ODCB.B12;
    const register unsigned short int ODB13 = 13;
    sbit  ODB13_bit at ODCB.B13;
    const register unsigned short int ODB14 = 14;
    sbit  ODB14_bit at ODCB.B14;
    const register unsigned short int ODB15 = 15;
    sbit  ODB15_bit at ODCB.B15;

sfr unsigned int   volatile ANSB             absolute 0x192;
    const register unsigned short int ANSB0 = 0;
    sbit  ANSB0_bit at ANSB.B0;
    const register unsigned short int ANSB1 = 1;
    sbit  ANSB1_bit at ANSB.B1;
    const register unsigned short int ANSB2 = 2;
    sbit  ANSB2_bit at ANSB.B2;
    const register unsigned short int ANSB3 = 3;
    sbit  ANSB3_bit at ANSB.B3;
    const register unsigned short int ANSB9 = 9;
    sbit  ANSB9_bit at ANSB.B9;
    const register unsigned short int ANSB12 = 12;
    sbit  ANSB12_bit at ANSB.B12;
    const register unsigned short int ANSB13 = 13;
    sbit  ANSB13_bit at ANSB.B13;
    const register unsigned short int ANSB14 = 14;
    sbit  ANSB14_bit at ANSB.B14;
    const register unsigned short int ANSB15 = 15;
    sbit  ANSB15_bit at ANSB.B15;

sfr unsigned int   volatile TRISC            absolute 0x194;
    const register unsigned short int TRISC0 = 0;
    sbit  TRISC0_bit at TRISC.B0;
    const register unsigned short int TRISC1 = 1;
    sbit  TRISC1_bit at TRISC.B1;
    const register unsigned short int TRISC2 = 2;
    sbit  TRISC2_bit at TRISC.B2;
    const register unsigned short int TRISC3 = 3;
    sbit  TRISC3_bit at TRISC.B3;
    const register unsigned short int TRISC4 = 4;
    sbit  TRISC4_bit at TRISC.B4;
    const register unsigned short int TRISC5 = 5;
    sbit  TRISC5_bit at TRISC.B5;
    const register unsigned short int TRISC6 = 6;
    sbit  TRISC6_bit at TRISC.B6;
    const register unsigned short int TRISC7 = 7;
    sbit  TRISC7_bit at TRISC.B7;
    const register unsigned short int TRISC8 = 8;
    sbit  TRISC8_bit at TRISC.B8;
    const register unsigned short int TRISC9 = 9;
    sbit  TRISC9_bit at TRISC.B9;

sfr unsigned int   volatile PORTC            absolute 0x196;
    const register unsigned short int RC0 = 0;
    sbit  RC0_bit at PORTC.B0;
    const register unsigned short int RC1 = 1;
    sbit  RC1_bit at PORTC.B1;
    const register unsigned short int RC2 = 2;
    sbit  RC2_bit at PORTC.B2;
    const register unsigned short int RC3 = 3;
    sbit  RC3_bit at PORTC.B3;
    const register unsigned short int RC4 = 4;
    sbit  RC4_bit at PORTC.B4;
    const register unsigned short int RC5 = 5;
    sbit  RC5_bit at PORTC.B5;
    const register unsigned short int RC6 = 6;
    sbit  RC6_bit at PORTC.B6;
    const register unsigned short int RC7 = 7;
    sbit  RC7_bit at PORTC.B7;
    const register unsigned short int RC8 = 8;
    sbit  RC8_bit at PORTC.B8;
    const register unsigned short int RC9 = 9;
    sbit  RC9_bit at PORTC.B9;

sfr unsigned int   volatile LATC             absolute 0x198;
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
    const register unsigned short int LATC8 = 8;
    sbit  LATC8_bit at LATC.B8;
    const register unsigned short int LATC9 = 9;
    sbit  LATC9_bit at LATC.B9;

sfr unsigned int   volatile ODCC             absolute 0x19A;
    const register unsigned short int ODC0 = 0;
    sbit  ODC0_bit at ODCC.B0;
    const register unsigned short int ODC1 = 1;
    sbit  ODC1_bit at ODCC.B1;
    const register unsigned short int ODC2 = 2;
    sbit  ODC2_bit at ODCC.B2;
    const register unsigned short int ODC3 = 3;
    sbit  ODC3_bit at ODCC.B3;
    const register unsigned short int ODC4 = 4;
    sbit  ODC4_bit at ODCC.B4;
    const register unsigned short int ODC5 = 5;
    sbit  ODC5_bit at ODCC.B5;
    const register unsigned short int ODC6 = 6;
    sbit  ODC6_bit at ODCC.B6;
    const register unsigned short int ODC7 = 7;
    sbit  ODC7_bit at ODCC.B7;
    const register unsigned short int ODC8 = 8;
    sbit  ODC8_bit at ODCC.B8;
    const register unsigned short int ODC9 = 9;
    sbit  ODC9_bit at ODCC.B9;

sfr unsigned int   volatile ANSC             absolute 0x19C;
    const register unsigned short int ANSC0 = 0;
    sbit  ANSC0_bit at ANSC.B0;
    const register unsigned short int ANSC1 = 1;
    sbit  ANSC1_bit at ANSC.B1;
    const register unsigned short int ANSC2 = 2;
    sbit  ANSC2_bit at ANSC.B2;

sfr unsigned int   volatile ANCFG            absolute 0x19E;
    const register unsigned short int VBGEN = 0;
    sbit  VBGEN_bit at ANCFG.B0;
    const register unsigned short int VBG2EN = 1;
    sbit  VBG2EN_bit at ANCFG.B1;

sfr unsigned int            PADCFG1          absolute 0x1A0;
    const register unsigned short int PMPTTL = 0;
    sbit  PMPTTL_bit at PADCFG1.B0;

sfr unsigned int   volatile CRYCON1          absolute 0x1A4;
    const register unsigned short int CPHRMOD0 = 0;
    sbit  CPHRMOD0_bit at CRYCON1.B0;
    const register unsigned short int CPHRMOD1 = 1;
    sbit  CPHRMOD1_bit at CRYCON1.B1;
    const register unsigned short int CPHRMOD2 = 2;
    sbit  CPHRMOD2_bit at CRYCON1.B2;
    const register unsigned short int CPHRSEL = 3;
    sbit  CPHRSEL_bit at CRYCON1.B3;
    const register unsigned short int OPMOD0 = 4;
    sbit  OPMOD0_bit at CRYCON1.B4;
    const register unsigned short int OPMOD1 = 5;
    sbit  OPMOD1_bit at CRYCON1.B5;
    const register unsigned short int OPMOD2 = 6;
    sbit  OPMOD2_bit at CRYCON1.B6;
    const register unsigned short int OPMOD3 = 7;
    sbit  OPMOD3_bit at CRYCON1.B7;
    const register unsigned short int CRYGO = 8;
    sbit  CRYGO_bit at CRYCON1.B8;
    const register unsigned short int FREEIE = 10;
    sbit  FREEIE_bit at CRYCON1.B10;
    const register unsigned short int DONEIE = 11;
    sbit  DONEIE_bit at CRYCON1.B11;
    const register unsigned short int ROLLIE = 12;
    sbit  ROLLIE_bit at CRYCON1.B12;
    const register unsigned short int CRYSIDL = 13;
    sbit  CRYSIDL_bit at CRYCON1.B13;
    const register unsigned short int CRYON = 15;
    sbit  CRYON_bit at CRYCON1.B15;

sfr unsigned int   volatile CRYCONL          absolute 0x1A4;
sfr unsigned int   volatile CRYCON2          absolute 0x1A6;
    const register unsigned short int KEYSRC0 = 0;
    sbit  KEYSRC0_bit at CRYCON2.B0;
    const register unsigned short int KEYSRC1 = 1;
    sbit  KEYSRC1_bit at CRYCON2.B1;
    const register unsigned short int KEYSRC2 = 2;
    sbit  KEYSRC2_bit at CRYCON2.B2;
    const register unsigned short int KEYSRC3 = 3;
    sbit  KEYSRC3_bit at CRYCON2.B3;
    const register unsigned short int KEYMOD0 = 5;
    sbit  KEYMOD0_bit at CRYCON2.B5;
    const register unsigned short int KEYMOD1 = 6;
    sbit  KEYMOD1_bit at CRYCON2.B6;
    const register unsigned short int SKEYSEL = 7;
    sbit  SKEYSEL_bit at CRYCON2.B7;
    const register unsigned short int CTRSIZE0 = 8;
    sbit  CTRSIZE0_bit at CRYCON2.B8;
    const register unsigned short int CTRSIZE1 = 9;
    sbit  CTRSIZE1_bit at CRYCON2.B9;
    const register unsigned short int CTRSIZE2 = 10;
    sbit  CTRSIZE2_bit at CRYCON2.B10;
    const register unsigned short int CTRSIZE3 = 11;
    sbit  CTRSIZE3_bit at CRYCON2.B11;
    const register unsigned short int CTRSIZE4 = 12;
    sbit  CTRSIZE4_bit at CRYCON2.B12;
    const register unsigned short int CTRSIZE5 = 13;
    sbit  CTRSIZE5_bit at CRYCON2.B13;
    const register unsigned short int CTRSIZE6 = 14;
    sbit  CTRSIZE6_bit at CRYCON2.B14;

sfr unsigned int   volatile CRYCONH          absolute 0x1A6;
sfr unsigned int   volatile CRYSTAT          absolute 0x1A8;
    const register unsigned short int PGMFAIL = 0;
    sbit  PGMFAIL_bit at CRYSTAT.B0;
    const register unsigned short int KEYFAIL = 1;
    sbit  KEYFAIL_bit at CRYSTAT.B1;
    const register unsigned short int MODFAIL = 2;
    sbit  MODFAIL_bit at CRYSTAT.B2;
    const register unsigned short int ROLLOVR = 4;
    sbit  ROLLOVR_bit at CRYSTAT.B4;
    const register unsigned short int CRYABRT = 5;
    sbit  CRYABRT_bit at CRYSTAT.B5;
    const register unsigned short int TXTABSY = 6;
    sbit  TXTABSY_bit at CRYSTAT.B6;
    const register unsigned short int CRYBSY = 7;
    sbit  CRYBSY_bit at CRYSTAT.B7;

sfr unsigned int   volatile CRYOTP           absolute 0x1AC;
    const register unsigned short int CRYWR = 0;
    sbit  CRYWR_bit at CRYOTP.B0;
    const register unsigned short int KEYPG0 = 1;
    sbit  KEYPG0_bit at CRYOTP.B1;
    const register unsigned short int KEYPG1 = 2;
    sbit  KEYPG1_bit at CRYOTP.B2;
    const register unsigned short int KEYPG2 = 3;
    sbit  KEYPG2_bit at CRYOTP.B3;
    const register unsigned short int KEYPG3 = 4;
    sbit  KEYPG3_bit at CRYOTP.B4;
    const register unsigned short int CRYREAD = 5;
    sbit  CRYREAD_bit at CRYOTP.B5;
    const register unsigned short int OTPIE = 6;
    sbit  OTPIE_bit at CRYOTP.B6;
    const register unsigned short int PGMTST = 7;
    sbit  PGMTST_bit at CRYOTP.B7;

sfr unsigned int   volatile CRYTXTA          absolute 0x1B0;
sfr unsigned int   volatile CRYTXTA0         absolute 0x1B0;
sfr unsigned int   volatile CRYTXTA1         absolute 0x1B2;
sfr unsigned int   volatile CRYTXTA2         absolute 0x1B4;
sfr unsigned int   volatile CRYTXTA3         absolute 0x1B6;
sfr unsigned int   volatile CRYTXTA4         absolute 0x1B8;
sfr unsigned int   volatile CRYTXTA5         absolute 0x1BA;
sfr unsigned int   volatile CRYTXTA6         absolute 0x1BC;
sfr unsigned int   volatile CRYTXTA7         absolute 0x1BE;
sfr unsigned int   volatile CRYKEY           absolute 0x1C0;
sfr unsigned int   volatile CRYKEY0          absolute 0x1C0;
sfr unsigned int   volatile CRYKEY1          absolute 0x1C2;
sfr unsigned int   volatile CRYKEY2          absolute 0x1C4;
sfr unsigned int   volatile CRYKEY3          absolute 0x1C6;
sfr unsigned int   volatile CRYKEY4          absolute 0x1C8;
sfr unsigned int   volatile CRYKEY5          absolute 0x1CA;
sfr unsigned int   volatile CRYKEY6          absolute 0x1CC;
sfr unsigned int   volatile CRYKEY7          absolute 0x1CE;
sfr unsigned int   volatile CRYKEY8          absolute 0x1D0;
sfr unsigned int   volatile CRYKEY9          absolute 0x1D2;
sfr unsigned int   volatile CRYKEY10         absolute 0x1D4;
sfr unsigned int   volatile CRYKEY11         absolute 0x1D6;
sfr unsigned int   volatile CRYKEY12         absolute 0x1D8;
sfr unsigned int   volatile CRYKEY13         absolute 0x1DA;
sfr unsigned int   volatile CRYKEY14         absolute 0x1DC;
sfr unsigned int   volatile CRYKEY15         absolute 0x1DE;
sfr unsigned int   volatile CRYTXTB          absolute 0x1E0;
sfr unsigned int   volatile CRYTXTB0         absolute 0x1E0;
sfr unsigned int   volatile CRYTXTB1         absolute 0x1E2;
sfr unsigned int   volatile CRYTXTB2         absolute 0x1E4;
sfr unsigned int   volatile CRYTXTB3         absolute 0x1E6;
sfr unsigned int   volatile CRYTXTB4         absolute 0x1E8;
sfr unsigned int   volatile CRYTXTB5         absolute 0x1EA;
sfr unsigned int   volatile CRYTXTB6         absolute 0x1EC;
sfr unsigned int   volatile CRYTXTB7         absolute 0x1EE;
sfr unsigned int   volatile CRYTXTC          absolute 0x1F0;
sfr unsigned int   volatile CRYTXTC0         absolute 0x1F0;
sfr unsigned int   volatile CRYTXTC1         absolute 0x1F2;
sfr unsigned int   volatile CRYTXTC2         absolute 0x1F4;
sfr unsigned int   volatile CRYTXTC3         absolute 0x1F6;
sfr unsigned int   volatile CRYTXTC4         absolute 0x1F8;
sfr unsigned int   volatile CRYTXTC5         absolute 0x1FA;
sfr unsigned int   volatile CRYTXTC6         absolute 0x1FC;
sfr unsigned int   volatile CRYTXTC7         absolute 0x1FE;
sfr unsigned int   volatile ADC1BUF0         absolute 0x200;
sfr unsigned int   volatile ADC1BUF1         absolute 0x202;
sfr unsigned int   volatile ADC1BUF2         absolute 0x204;
sfr unsigned int   volatile ADC1BUF3         absolute 0x206;
sfr unsigned int   volatile ADC1BUF4         absolute 0x208;
sfr unsigned int   volatile ADC1BUF5         absolute 0x20A;
sfr unsigned int   volatile ADC1BUF6         absolute 0x20C;
sfr unsigned int   volatile ADC1BUF7         absolute 0x20E;
sfr unsigned int   volatile ADC1BUF8         absolute 0x210;
sfr unsigned int   volatile ADC1BUF9         absolute 0x212;
sfr unsigned int   volatile ADC1BUF10        absolute 0x214;
sfr unsigned int   volatile ADC1BUF11        absolute 0x216;
sfr unsigned int   volatile ADC1BUF12        absolute 0x218;
sfr unsigned int   volatile ADC1BUF13        absolute 0x21A;
sfr unsigned int   volatile ADC1BUF14        absolute 0x21C;
sfr unsigned int   volatile ADC1BUF15        absolute 0x21E;
sfr unsigned int   volatile AD1CON1          absolute 0x220;
    const register unsigned short int DONE = 0;
    sbit  DONE_bit at AD1CON1.B0;
    const register unsigned short int SAMP = 1;
    sbit  SAMP_bit at AD1CON1.B1;
    const register unsigned short int ASAM = 2;
    sbit  ASAM_bit at AD1CON1.B2;
    const register unsigned short int SSRC0 = 4;
    sbit  SSRC0_bit at AD1CON1.B4;
    const register unsigned short int SSRC1 = 5;
    sbit  SSRC1_bit at AD1CON1.B5;
    const register unsigned short int SSRC2 = 6;
    sbit  SSRC2_bit at AD1CON1.B6;
    const register unsigned short int SSRC3 = 7;
    sbit  SSRC3_bit at AD1CON1.B7;
    const register unsigned short int FORM0 = 8;
    sbit  FORM0_bit at AD1CON1.B8;
    const register unsigned short int FORM1 = 9;
    sbit  FORM1_bit at AD1CON1.B9;
    const register unsigned short int MODE12 = 10;
    sbit  MODE12_bit at AD1CON1.B10;
    const register unsigned short int DMAEN_AD1CON1 = 11;
    sbit  DMAEN_AD1CON1_bit at AD1CON1.B11;
    const register unsigned short int DMABM = 12;
    sbit  DMABM_bit at AD1CON1.B12;
    const register unsigned short int ADSIDL = 13;
    sbit  ADSIDL_bit at AD1CON1.B13;
    const register unsigned short int ADON = 15;
    sbit  ADON_bit at AD1CON1.B15;

sfr unsigned int   volatile AD1CON2          absolute 0x222;
    const register unsigned short int ALTS = 0;
    sbit  ALTS_bit at AD1CON2.B0;
    const register unsigned short int BUFM = 1;
    sbit  BUFM_bit at AD1CON2.B1;
    const register unsigned short int SMPI0 = 2;
    sbit  SMPI0_bit at AD1CON2.B2;
    const register unsigned short int SMPI1 = 3;
    sbit  SMPI1_bit at AD1CON2.B3;
    const register unsigned short int SMPI2 = 4;
    sbit  SMPI2_bit at AD1CON2.B4;
    const register unsigned short int SMPI3 = 5;
    sbit  SMPI3_bit at AD1CON2.B5;
    const register unsigned short int SMPI4 = 6;
    sbit  SMPI4_bit at AD1CON2.B6;
    const register unsigned short int BUFS = 7;
    sbit  BUFS_bit at AD1CON2.B7;
    const register unsigned short int CSCNA = 10;
    sbit  CSCNA_bit at AD1CON2.B10;
    const register unsigned short int BUFREGEN = 11;
    sbit  BUFREGEN_bit at AD1CON2.B11;
    const register unsigned short int OFFCAL = 12;
    sbit  OFFCAL_bit at AD1CON2.B12;
    const register unsigned short int NVCFG0 = 13;
    sbit  NVCFG0_bit at AD1CON2.B13;
    const register unsigned short int PCVFG0 = 14;
    sbit  PCVFG0_bit at AD1CON2.B14;
    const register unsigned short int PCVFG1 = 15;
    sbit  PCVFG1_bit at AD1CON2.B15;

sfr unsigned int   volatile AD1CON3          absolute 0x224;
    const register unsigned short int ADCS0 = 0;
    sbit  ADCS0_bit at AD1CON3.B0;
    const register unsigned short int ADCS1 = 1;
    sbit  ADCS1_bit at AD1CON3.B1;
    const register unsigned short int ADCS2 = 2;
    sbit  ADCS2_bit at AD1CON3.B2;
    const register unsigned short int ADCS3 = 3;
    sbit  ADCS3_bit at AD1CON3.B3;
    const register unsigned short int ADCS4 = 4;
    sbit  ADCS4_bit at AD1CON3.B4;
    const register unsigned short int ADCS5 = 5;
    sbit  ADCS5_bit at AD1CON3.B5;
    const register unsigned short int ADCS6 = 6;
    sbit  ADCS6_bit at AD1CON3.B6;
    const register unsigned short int ADCS7 = 7;
    sbit  ADCS7_bit at AD1CON3.B7;
    const register unsigned short int SAMC0 = 8;
    sbit  SAMC0_bit at AD1CON3.B8;
    const register unsigned short int SAMC1 = 9;
    sbit  SAMC1_bit at AD1CON3.B9;
    const register unsigned short int SAMC2 = 10;
    sbit  SAMC2_bit at AD1CON3.B10;
    const register unsigned short int SAMC3 = 11;
    sbit  SAMC3_bit at AD1CON3.B11;
    const register unsigned short int SAMC4 = 12;
    sbit  SAMC4_bit at AD1CON3.B12;
    const register unsigned short int PUMPEN = 13;
    sbit  PUMPEN_bit at AD1CON3.B13;
    const register unsigned short int EXTSAM = 14;
    sbit  EXTSAM_bit at AD1CON3.B14;
    const register unsigned short int ADRC = 15;
    sbit  ADRC_bit at AD1CON3.B15;

sfr unsigned int            AD1CHS           absolute 0x228;
    const register unsigned short int CH0SA0 = 0;
    sbit  CH0SA0_bit at AD1CHS.B0;
    const register unsigned short int CH0SA1 = 1;
    sbit  CH0SA1_bit at AD1CHS.B1;
    const register unsigned short int CH0SA2 = 2;
    sbit  CH0SA2_bit at AD1CHS.B2;
    const register unsigned short int CH0SA3 = 3;
    sbit  CH0SA3_bit at AD1CHS.B3;
    const register unsigned short int CH0SA4 = 4;
    sbit  CH0SA4_bit at AD1CHS.B4;
    const register unsigned short int CH0NA0 = 5;
    sbit  CH0NA0_bit at AD1CHS.B5;
    const register unsigned short int CH0NA1 = 6;
    sbit  CH0NA1_bit at AD1CHS.B6;
    const register unsigned short int CH0NA2 = 7;
    sbit  CH0NA2_bit at AD1CHS.B7;
    const register unsigned short int CH0SB0 = 8;
    sbit  CH0SB0_bit at AD1CHS.B8;
    const register unsigned short int CH0SB1 = 9;
    sbit  CH0SB1_bit at AD1CHS.B9;
    const register unsigned short int CH0SB2 = 10;
    sbit  CH0SB2_bit at AD1CHS.B10;
    const register unsigned short int CH0SB3 = 11;
    sbit  CH0SB3_bit at AD1CHS.B11;
    const register unsigned short int CH0SB4 = 12;
    sbit  CH0SB4_bit at AD1CHS.B12;
    const register unsigned short int CH0NB0 = 13;
    sbit  CH0NB0_bit at AD1CHS.B13;
    const register unsigned short int CH0NB1 = 14;
    sbit  CH0NB1_bit at AD1CHS.B14;
    const register unsigned short int CH0NB2 = 15;
    sbit  CH0NB2_bit at AD1CHS.B15;

sfr unsigned int            AD1CHS0          absolute 0x228;
sfr unsigned int            AD1CSSH          absolute 0x22A;
    const register unsigned short int CSS27 = 11;
    sbit  CSS27_bit at AD1CSSH.B11;
    const register unsigned short int CSS28 = 12;
    sbit  CSS28_bit at AD1CSSH.B12;
    const register unsigned short int CSS29 = 13;
    sbit  CSS29_bit at AD1CSSH.B13;
    const register unsigned short int CSS30 = 14;
    sbit  CSS30_bit at AD1CSSH.B14;
    const register unsigned short int CSS31 = 15;
    sbit  CSS31_bit at AD1CSSH.B15;

sfr unsigned int            AD1CSSL          absolute 0x22C;
    const register unsigned short int CSS0 = 0;
    sbit  CSS0_bit at AD1CSSL.B0;
    const register unsigned short int CSS1 = 1;
    sbit  CSS1_bit at AD1CSSL.B1;
    const register unsigned short int CSS2 = 2;
    sbit  CSS2_bit at AD1CSSL.B2;
    const register unsigned short int CSS3 = 3;
    sbit  CSS3_bit at AD1CSSL.B3;
    const register unsigned short int CSS4 = 4;
    sbit  CSS4_bit at AD1CSSL.B4;
    const register unsigned short int CSS5 = 5;
    sbit  CSS5_bit at AD1CSSL.B5;
    const register unsigned short int CSS6 = 6;
    sbit  CSS6_bit at AD1CSSL.B6;
    const register unsigned short int CSS7 = 7;
    sbit  CSS7_bit at AD1CSSL.B7;
    const register unsigned short int CSS8 = 8;
    sbit  CSS8_bit at AD1CSSL.B8;
    const register unsigned short int CSS9 = 9;
    sbit  CSS9_bit at AD1CSSL.B9;
    const register unsigned short int CSS10 = 10;
    sbit  CSS10_bit at AD1CSSL.B10;
    const register unsigned short int CSS11 = 11;
    sbit  CSS11_bit at AD1CSSL.B11;
    const register unsigned short int CSS12 = 12;
    sbit  CSS12_bit at AD1CSSL.B12;
    const register unsigned short int CSS13 = 13;
    sbit  CSS13_bit at AD1CSSL.B13;
    const register unsigned short int CSS14 = 14;
    sbit  CSS14_bit at AD1CSSL.B14;

sfr unsigned int            AD1CON4          absolute 0x22E;
    const register unsigned short int DMABL0 = 0;
    sbit  DMABL0_bit at AD1CON4.B0;
    const register unsigned short int DMABL1 = 1;
    sbit  DMABL1_bit at AD1CON4.B1;
    const register unsigned short int DMABL2 = 2;
    sbit  DMABL2_bit at AD1CON4.B2;

sfr unsigned int   volatile AD1CON5          absolute 0x230;
    const register unsigned short int CM0 = 0;
    sbit  CM0_bit at AD1CON5.B0;
    const register unsigned short int CM1 = 1;
    sbit  CM1_bit at AD1CON5.B1;
    const register unsigned short int WM0 = 2;
    sbit  WM0_bit at AD1CON5.B2;
    const register unsigned short int WM1 = 3;
    sbit  WM1_bit at AD1CON5.B3;
    const register unsigned short int ASINT0 = 8;
    sbit  ASINT0_bit at AD1CON5.B8;
    const register unsigned short int ASINT1 = 9;
    sbit  ASINT1_bit at AD1CON5.B9;
    const register unsigned short int BGREQ = 12;
    sbit  BGREQ_bit at AD1CON5.B12;
    const register unsigned short int CTMREQ = 13;
    sbit  CTMREQ_bit at AD1CON5.B13;
    const register unsigned short int LPEN = 14;
    sbit  LPEN_bit at AD1CON5.B14;
    const register unsigned short int ASEN = 15;
    sbit  ASEN_bit at AD1CON5.B15;

sfr unsigned int   volatile AD1CHITL         absolute 0x234;
    const register unsigned short int CHH0 = 0;
    sbit  CHH0_bit at AD1CHITL.B0;
    const register unsigned short int CHH1 = 1;
    sbit  CHH1_bit at AD1CHITL.B1;
    const register unsigned short int CHH2 = 2;
    sbit  CHH2_bit at AD1CHITL.B2;
    const register unsigned short int CHH3 = 3;
    sbit  CHH3_bit at AD1CHITL.B3;
    const register unsigned short int CHH4 = 4;
    sbit  CHH4_bit at AD1CHITL.B4;
    const register unsigned short int CHH5 = 5;
    sbit  CHH5_bit at AD1CHITL.B5;
    const register unsigned short int CHH6 = 6;
    sbit  CHH6_bit at AD1CHITL.B6;
    const register unsigned short int CHH7 = 7;
    sbit  CHH7_bit at AD1CHITL.B7;
    const register unsigned short int CHH8 = 8;
    sbit  CHH8_bit at AD1CHITL.B8;
    const register unsigned short int CHH9 = 9;
    sbit  CHH9_bit at AD1CHITL.B9;
    const register unsigned short int CHH10 = 10;
    sbit  CHH10_bit at AD1CHITL.B10;
    const register unsigned short int CHH11 = 11;
    sbit  CHH11_bit at AD1CHITL.B11;
    const register unsigned short int CHH12 = 12;
    sbit  CHH12_bit at AD1CHITL.B12;

sfr unsigned int   volatile AD1CTMENL        absolute 0x238;
    const register unsigned short int CTMEN0 = 0;
    sbit  CTMEN0_bit at AD1CTMENL.B0;
    const register unsigned short int CTMEN1 = 1;
    sbit  CTMEN1_bit at AD1CTMENL.B1;
    const register unsigned short int CTMEN2 = 2;
    sbit  CTMEN2_bit at AD1CTMENL.B2;
    const register unsigned short int CTMEN3 = 3;
    sbit  CTMEN3_bit at AD1CTMENL.B3;
    const register unsigned short int CTMEN4 = 4;
    sbit  CTMEN4_bit at AD1CTMENL.B4;
    const register unsigned short int CTMEN5 = 5;
    sbit  CTMEN5_bit at AD1CTMENL.B5;
    const register unsigned short int CTMEN6 = 6;
    sbit  CTMEN6_bit at AD1CTMENL.B6;
    const register unsigned short int CTMEN7 = 7;
    sbit  CTMEN7_bit at AD1CTMENL.B7;
    const register unsigned short int CTMEN8 = 8;
    sbit  CTMEN8_bit at AD1CTMENL.B8;
    const register unsigned short int CTMEN9 = 9;
    sbit  CTMEN9_bit at AD1CTMENL.B9;
    const register unsigned short int CTMEN10 = 10;
    sbit  CTMEN10_bit at AD1CTMENL.B10;
    const register unsigned short int CTMEN11 = 11;
    sbit  CTMEN11_bit at AD1CTMENL.B11;
    const register unsigned short int CTMEN12 = 12;
    sbit  CTMEN12_bit at AD1CTMENL.B12;

sfr unsigned int   volatile AD1DMBUF         absolute 0x23A;
sfr unsigned int   volatile AD1RESDMA        absolute 0x23A;
sfr unsigned int   volatile CTMUCON1         absolute 0x23C;
    const register unsigned short int CTTRIG = 8;
    sbit  CTTRIG_bit at CTMUCON1.B8;
    const register unsigned short int IDISSEN = 9;
    sbit  IDISSEN_bit at CTMUCON1.B9;
    const register unsigned short int EDGSEQEN = 10;
    sbit  EDGSEQEN_bit at CTMUCON1.B10;
    const register unsigned short int EDGEN = 11;
    sbit  EDGEN_bit at CTMUCON1.B11;
    const register unsigned short int TGEN = 12;
    sbit  TGEN_bit at CTMUCON1.B12;
    const register unsigned short int CTMUSIDL = 13;
    sbit  CTMUSIDL_bit at CTMUCON1.B13;
    const register unsigned short int CTMUEN = 15;
    sbit  CTMUEN_bit at CTMUCON1.B15;

sfr unsigned int   volatile CTMUCON2         absolute 0x23E;
    const register unsigned short int EDG2SEL0 = 2;
    sbit  EDG2SEL0_bit at CTMUCON2.B2;
    const register unsigned short int EDG2SEL1 = 3;
    sbit  EDG2SEL1_bit at CTMUCON2.B3;
    const register unsigned short int EDG2SEL2 = 4;
    sbit  EDG2SEL2_bit at CTMUCON2.B4;
    const register unsigned short int EDG2SEL3 = 5;
    sbit  EDG2SEL3_bit at CTMUCON2.B5;
    const register unsigned short int EDG2POL = 6;
    sbit  EDG2POL_bit at CTMUCON2.B6;
    const register unsigned short int EDG2MOD = 7;
    sbit  EDG2MOD_bit at CTMUCON2.B7;
    const register unsigned short int EDG1STAT = 8;
    sbit  EDG1STAT_bit at CTMUCON2.B8;
    const register unsigned short int EDG2STAT = 9;
    sbit  EDG2STAT_bit at CTMUCON2.B9;
    const register unsigned short int EDG1SEL0 = 10;
    sbit  EDG1SEL0_bit at CTMUCON2.B10;
    const register unsigned short int EDG1SEL1 = 11;
    sbit  EDG1SEL1_bit at CTMUCON2.B11;
    const register unsigned short int EDG1SEL2 = 12;
    sbit  EDG1SEL2_bit at CTMUCON2.B12;
    const register unsigned short int EDG1SEL3 = 13;
    sbit  EDG1SEL3_bit at CTMUCON2.B13;
    const register unsigned short int EDG1POL = 14;
    sbit  EDG1POL_bit at CTMUCON2.B14;
    const register unsigned short int EDG1MOD = 15;
    sbit  EDG1MOD_bit at CTMUCON2.B15;

sfr unsigned int   volatile CTMUICON         absolute 0x240;
    const register unsigned short int IRNG0 = 8;
    sbit  IRNG0_bit at CTMUICON.B8;
    const register unsigned short int IRNG1 = 9;
    sbit  IRNG1_bit at CTMUICON.B9;
    const register unsigned short int ITRIM0 = 10;
    sbit  ITRIM0_bit at CTMUICON.B10;
    const register unsigned short int ITRIM1 = 11;
    sbit  ITRIM1_bit at CTMUICON.B11;
    const register unsigned short int ITRIM2 = 12;
    sbit  ITRIM2_bit at CTMUICON.B12;
    const register unsigned short int ITRIM3 = 13;
    sbit  ITRIM3_bit at CTMUICON.B13;
    const register unsigned short int ITRIM4 = 14;
    sbit  ITRIM4_bit at CTMUICON.B14;
    const register unsigned short int ITRIM5 = 15;
    sbit  ITRIM5_bit at CTMUICON.B15;

sfr unsigned int   volatile CMSTAT           absolute 0x242;
    const register unsigned short int C1OUT = 0;
    sbit  C1OUT_bit at CMSTAT.B0;
    const register unsigned short int C2OUT = 1;
    sbit  C2OUT_bit at CMSTAT.B1;
    const register unsigned short int C3OUT = 2;
    sbit  C3OUT_bit at CMSTAT.B2;
    const register unsigned short int C1EVT = 8;
    sbit  C1EVT_bit at CMSTAT.B8;
    const register unsigned short int C2EVT = 9;
    sbit  C2EVT_bit at CMSTAT.B9;
    const register unsigned short int C3EVT = 10;
    sbit  C3EVT_bit at CMSTAT.B10;
    const register unsigned short int CMIDL = 15;
    sbit  CMIDL_bit at CMSTAT.B15;
    const register unsigned short int CMSIDL = 15;
    sbit  CMSIDL_bit at CMSTAT.B15;

sfr unsigned int            CVRCON           absolute 0x244;
    const register unsigned short int CVR0 = 0;
    sbit  CVR0_bit at CVRCON.B0;
    const register unsigned short int CVR1 = 1;
    sbit  CVR1_bit at CVRCON.B1;
    const register unsigned short int CVR2 = 2;
    sbit  CVR2_bit at CVRCON.B2;
    const register unsigned short int CVR3 = 3;
    sbit  CVR3_bit at CVRCON.B3;
    const register unsigned short int CVR4 = 4;
    sbit  CVR4_bit at CVRCON.B4;
    const register unsigned short int CVRSS = 5;
    sbit  CVRSS_bit at CVRCON.B5;
    const register unsigned short int CVROE = 6;
    sbit  CVROE_bit at CVRCON.B6;
    const register unsigned short int CVREN = 7;
    sbit  CVREN_bit at CVRCON.B7;
    const register unsigned short int CVREFM0 = 8;
    sbit  CVREFM0_bit at CVRCON.B8;
    const register unsigned short int CVREFM1 = 9;
    sbit  CVREFM1_bit at CVRCON.B9;
    const register unsigned short int CVREFP = 10;
    sbit  CVREFP_bit at CVRCON.B10;

sfr unsigned int   volatile CM1CON           absolute 0x246;
    const register unsigned short int CCH0 = 0;
    sbit  CCH0_bit at CM1CON.B0;
    const register unsigned short int CCH1 = 1;
    sbit  CCH1_bit at CM1CON.B1;
    const register unsigned short int CREF = 4;
    sbit  CREF_bit at CM1CON.B4;
    const register unsigned short int EVPOL0 = 6;
    sbit  EVPOL0_bit at CM1CON.B6;
    const register unsigned short int EVPOL1 = 7;
    sbit  EVPOL1_bit at CM1CON.B7;
    const register unsigned short int COUT = 8;
    sbit  COUT_bit at CM1CON.B8;
    const register unsigned short int CEVT = 9;
    sbit  CEVT_bit at CM1CON.B9;
    const register unsigned short int CPOL = 13;
    sbit  CPOL_bit at CM1CON.B13;
    const register unsigned short int COE = 14;
    sbit  COE_bit at CM1CON.B14;
    const register unsigned short int CON = 15;
    sbit  CON_bit at CM1CON.B15;
    const register unsigned short int CEN = 15;
    sbit  CEN_bit at CM1CON.B15;

sfr unsigned int   volatile CM2CON           absolute 0x248;
sfr unsigned int   volatile CM3CON           absolute 0x24A;
sfr unsigned int   volatile TMR1             absolute 0x24C;
sfr unsigned int   volatile PR1              absolute 0x24E;
sfr unsigned int   volatile T1CON            absolute 0x250;
    const register unsigned short int TCS = 1;
    sbit  TCS_bit at T1CON.B1;
    const register unsigned short int TSYNC = 2;
    sbit  TSYNC_bit at T1CON.B2;
    const register unsigned short int TCKPS0 = 4;
    sbit  TCKPS0_bit at T1CON.B4;
    const register unsigned short int TCKPS1 = 5;
    sbit  TCKPS1_bit at T1CON.B5;
    const register unsigned short int TGATE = 6;
    sbit  TGATE_bit at T1CON.B6;
    const register unsigned short int T1ECS0 = 8;
    sbit  T1ECS0_bit at T1CON.B8;
    const register unsigned short int T1ECS1 = 9;
    sbit  T1ECS1_bit at T1CON.B9;
    const register unsigned short int TSIDL = 13;
    sbit  TSIDL_bit at T1CON.B13;
    const register unsigned short int TON = 15;
    sbit  TON_bit at T1CON.B15;
    const register unsigned short int TECS0 = 8;
    sbit  TECS0_bit at T1CON.B8;
    const register unsigned short int TECS1 = 9;
    sbit  TECS1_bit at T1CON.B9;
    const register unsigned short int TIECS0 = 8;
    sbit  TIECS0_bit at T1CON.B8;
    const register unsigned short int TIECS1 = 9;
    sbit  TIECS1_bit at T1CON.B9;

sfr unsigned int   volatile TMR2             absolute 0x252;
sfr unsigned int   volatile TMR3HLD          absolute 0x254;
sfr unsigned int   volatile TMR3             absolute 0x256;
sfr unsigned int   volatile PR2              absolute 0x258;
sfr unsigned int   volatile PR3              absolute 0x25A;
sfr unsigned int   volatile T2CON            absolute 0x25C;
    const register unsigned short int T32 = 3;
    sbit  T32_bit at T2CON.B3;
    const register unsigned short int T45 = 3;
    sbit  T45_bit at T2CON.B3;

sfr unsigned int   volatile T3CON            absolute 0x25E;
sfr unsigned int   volatile TMR4             absolute 0x260;
sfr unsigned int   volatile TMR5HLD          absolute 0x262;
sfr unsigned int   volatile TMR5             absolute 0x264;
sfr unsigned int   volatile PR4              absolute 0x266;
sfr unsigned int   volatile PR5              absolute 0x268;
sfr unsigned int   volatile T4CON            absolute 0x26A;
sfr unsigned int   volatile T5CON            absolute 0x26C;
sfr unsigned int   volatile OC1CON1          absolute 0x26E;
    const register unsigned short int OCM0 = 0;
    sbit  OCM0_bit at OC1CON1.B0;
    const register unsigned short int OCM1 = 1;
    sbit  OCM1_bit at OC1CON1.B1;
    const register unsigned short int OCM2 = 2;
    sbit  OCM2_bit at OC1CON1.B2;
    const register unsigned short int TRIGMODE = 3;
    sbit  TRIGMODE_bit at OC1CON1.B3;
    const register unsigned short int OCFLTA = 4;
    sbit  OCFLTA_bit at OC1CON1.B4;
    const register unsigned short int OCFLTB = 5;
    sbit  OCFLTB_bit at OC1CON1.B5;
    const register unsigned short int OCFLTC = 6;
    sbit  OCFLTC_bit at OC1CON1.B6;
    const register unsigned short int ENFLTA = 7;
    sbit  ENFLTA_bit at OC1CON1.B7;
    const register unsigned short int ENFLTB = 8;
    sbit  ENFLTB_bit at OC1CON1.B8;
    const register unsigned short int ENFLTC = 9;
    sbit  ENFLTC_bit at OC1CON1.B9;
    const register unsigned short int OCTSEL0 = 10;
    sbit  OCTSEL0_bit at OC1CON1.B10;
    const register unsigned short int OCTSEL1 = 11;
    sbit  OCTSEL1_bit at OC1CON1.B11;
    const register unsigned short int OCTSEL2 = 12;
    sbit  OCTSEL2_bit at OC1CON1.B12;
    const register unsigned short int OCSIDL = 13;
    sbit  OCSIDL_bit at OC1CON1.B13;
    const register unsigned short int OCFLT0 = 4;
    sbit  OCFLT0_bit at OC1CON1.B4;
    const register unsigned short int OCFLT1 = 5;
    sbit  OCFLT1_bit at OC1CON1.B5;
    const register unsigned short int OCFLT2 = 6;
    sbit  OCFLT2_bit at OC1CON1.B6;
    const register unsigned short int ENFLT0 = 7;
    sbit  ENFLT0_bit at OC1CON1.B7;
    const register unsigned short int ENFLT1 = 8;
    sbit  ENFLT1_bit at OC1CON1.B8;
    const register unsigned short int ENFLT2 = 9;
    sbit  ENFLT2_bit at OC1CON1.B9;

sfr unsigned int   volatile OC1CON2          absolute 0x270;
    const register unsigned short int SYNCSEL0 = 0;
    sbit  SYNCSEL0_bit at OC1CON2.B0;
    const register unsigned short int SYNCSEL1 = 1;
    sbit  SYNCSEL1_bit at OC1CON2.B1;
    const register unsigned short int SYNCSEL2 = 2;
    sbit  SYNCSEL2_bit at OC1CON2.B2;
    const register unsigned short int SYNCSEL3 = 3;
    sbit  SYNCSEL3_bit at OC1CON2.B3;
    const register unsigned short int SYNCSEL4 = 4;
    sbit  SYNCSEL4_bit at OC1CON2.B4;
    const register unsigned short int OCTRIS = 5;
    sbit  OCTRIS_bit at OC1CON2.B5;
    const register unsigned short int TRIGSTAT = 6;
    sbit  TRIGSTAT_bit at OC1CON2.B6;
    const register unsigned short int OCTRIG = 7;
    sbit  OCTRIG_bit at OC1CON2.B7;
    const register unsigned short int OC32 = 8;
    sbit  OC32_bit at OC1CON2.B8;
    const register unsigned short int DCB0 = 9;
    sbit  DCB0_bit at OC1CON2.B9;
    const register unsigned short int DCB1 = 10;
    sbit  DCB1_bit at OC1CON2.B10;
    const register unsigned short int OCINV = 12;
    sbit  OCINV_bit at OC1CON2.B12;
    const register unsigned short int FLTTRIEN = 13;
    sbit  FLTTRIEN_bit at OC1CON2.B13;
    const register unsigned short int FLTOUT = 14;
    sbit  FLTOUT_bit at OC1CON2.B14;
    const register unsigned short int FLTMD = 15;
    sbit  FLTMD_bit at OC1CON2.B15;
    const register unsigned short int FLTMODE = 14;
    sbit  FLTMODE_bit at OC1CON2.B14;

sfr unsigned int            OC1RS            absolute 0x272;
sfr unsigned int   volatile OC1R             absolute 0x274;
sfr unsigned int   volatile OC1TMR           absolute 0x276;
sfr unsigned int   volatile OC2CON1          absolute 0x278;
sfr unsigned int   volatile OC2CON2          absolute 0x27A;
sfr unsigned int            OC2RS            absolute 0x27C;
sfr unsigned int   volatile OC2R             absolute 0x27E;
sfr unsigned int   volatile OC2TMR           absolute 0x280;
sfr unsigned int   volatile OC3CON1          absolute 0x282;
sfr unsigned int   volatile OC3CON2          absolute 0x284;
sfr unsigned int            OC3RS            absolute 0x286;
sfr unsigned int   volatile OC3R             absolute 0x288;
sfr unsigned int   volatile OC3TMR           absolute 0x28A;
sfr unsigned int   volatile OC4CON1          absolute 0x28C;
sfr unsigned int   volatile OC4CON2          absolute 0x28E;
sfr unsigned int            OC4RS            absolute 0x290;
sfr unsigned int   volatile OC4R             absolute 0x292;
sfr unsigned int   volatile OC4TMR           absolute 0x294;
sfr unsigned int   volatile OC5CON1          absolute 0x296;
sfr unsigned int   volatile OC5CON2          absolute 0x298;
sfr unsigned int            OC5RS            absolute 0x29A;
sfr unsigned int   volatile OC5R             absolute 0x29C;
sfr unsigned int   volatile OC5TMR           absolute 0x29E;
sfr unsigned int   volatile OC6CON1          absolute 0x2A0;
sfr unsigned int   volatile OC6CON2          absolute 0x2A2;
sfr unsigned int            OC6RS            absolute 0x2A4;
sfr unsigned int   volatile OC6R             absolute 0x2A6;
sfr unsigned int   volatile OC6TMR           absolute 0x2A8;
sfr unsigned int   volatile IC1CON1          absolute 0x2AA;
    const register unsigned short int ICM0 = 0;
    sbit  ICM0_bit at IC1CON1.B0;
    const register unsigned short int ICM1 = 1;
    sbit  ICM1_bit at IC1CON1.B1;
    const register unsigned short int ICM2 = 2;
    sbit  ICM2_bit at IC1CON1.B2;
    const register unsigned short int ICBNE = 3;
    sbit  ICBNE_bit at IC1CON1.B3;
    const register unsigned short int ICOV = 4;
    sbit  ICOV_bit at IC1CON1.B4;
    const register unsigned short int ICI0 = 5;
    sbit  ICI0_bit at IC1CON1.B5;
    const register unsigned short int ICI1 = 6;
    sbit  ICI1_bit at IC1CON1.B6;
    const register unsigned short int ICTSEL0 = 10;
    sbit  ICTSEL0_bit at IC1CON1.B10;
    const register unsigned short int ICTSEL1 = 11;
    sbit  ICTSEL1_bit at IC1CON1.B11;
    const register unsigned short int ICTSEL2 = 12;
    sbit  ICTSEL2_bit at IC1CON1.B12;
    const register unsigned short int ICSIDL = 13;
    sbit  ICSIDL_bit at IC1CON1.B13;

sfr unsigned int   volatile IC1CON2          absolute 0x2AC;
    const register unsigned short int ICTRIG = 7;
    sbit  ICTRIG_bit at IC1CON2.B7;
    const register unsigned short int IC32 = 8;
    sbit  IC32_bit at IC1CON2.B8;

sfr unsigned int   volatile IC1BUF           absolute 0x2AE;
sfr unsigned int   volatile IC1TMR           absolute 0x2B0;
sfr unsigned int   volatile IC2CON1          absolute 0x2B2;
sfr unsigned int   volatile IC2CON2          absolute 0x2B4;
sfr unsigned int   volatile IC2BUF           absolute 0x2B6;
sfr unsigned int   volatile IC2TMR           absolute 0x2B8;
sfr unsigned int   volatile IC3CON1          absolute 0x2BA;
sfr unsigned int   volatile IC3CON2          absolute 0x2BC;
sfr unsigned int   volatile IC3BUF           absolute 0x2BE;
sfr unsigned int   volatile IC3TMR           absolute 0x2C0;
sfr unsigned int   volatile IC4CON1          absolute 0x2C2;
sfr unsigned int   volatile IC4CON2          absolute 0x2C4;
sfr unsigned int   volatile IC4BUF           absolute 0x2C6;
sfr unsigned int   volatile IC4TMR           absolute 0x2C8;
sfr unsigned int   volatile IC5CON1          absolute 0x2CA;
sfr unsigned int   volatile IC5CON2          absolute 0x2CC;
sfr unsigned int   volatile IC5BUF           absolute 0x2CE;
sfr unsigned int   volatile IC5TMR           absolute 0x2D0;
sfr unsigned int   volatile IC6CON1          absolute 0x2D2;
sfr unsigned int   volatile IC6CON2          absolute 0x2D4;
sfr unsigned int   volatile IC6BUF           absolute 0x2D6;
sfr unsigned int   volatile IC6TMR           absolute 0x2D8;
sfr unsigned int   volatile I2C1RCV          absolute 0x2DA;
sfr unsigned int   volatile I2C1TRN          absolute 0x2DC;
sfr unsigned int            I2C1BRG          absolute 0x2DE;
sfr unsigned int   volatile I2C1CON1         absolute 0x2E0;
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at I2C1CON1.B0;
    const register unsigned short int RSEN = 1;
    sbit  RSEN_bit at I2C1CON1.B1;
    const register unsigned short int PEN = 2;
    sbit  PEN_bit at I2C1CON1.B2;
    const register unsigned short int RCEN = 3;
    sbit  RCEN_bit at I2C1CON1.B3;
    const register unsigned short int ACKEN = 4;
    sbit  ACKEN_bit at I2C1CON1.B4;
    const register unsigned short int ACKDT = 5;
    sbit  ACKDT_bit at I2C1CON1.B5;
    const register unsigned short int STREN = 6;
    sbit  STREN_bit at I2C1CON1.B6;
    const register unsigned short int GCEN = 7;
    sbit  GCEN_bit at I2C1CON1.B7;
    const register unsigned short int SMEN = 8;
    sbit  SMEN_bit at I2C1CON1.B8;
    const register unsigned short int DISSLW = 9;
    sbit  DISSLW_bit at I2C1CON1.B9;
    const register unsigned short int A10M = 10;
    sbit  A10M_bit at I2C1CON1.B10;
    const register unsigned short int STRICT = 11;
    sbit  STRICT_bit at I2C1CON1.B11;
    const register unsigned short int SCLREL = 12;
    sbit  SCLREL_bit at I2C1CON1.B12;
    const register unsigned short int I2CSIDL = 13;
    sbit  I2CSIDL_bit at I2C1CON1.B13;
    const register unsigned short int I2CEN = 15;
    sbit  I2CEN_bit at I2C1CON1.B15;
    const register unsigned short int SIDL = 13;
    sbit  SIDL_bit at I2C1CON1.B13;

sfr unsigned int   volatile I2C1CONL         absolute 0x2E0;
sfr unsigned int   volatile I2C1CON2         absolute 0x2E2;
    const register unsigned short int DHEN = 0;
    sbit  DHEN_bit at I2C1CON2.B0;
    const register unsigned short int AHEN = 1;
    sbit  AHEN_bit at I2C1CON2.B1;
    const register unsigned short int SBCDE = 2;
    sbit  SBCDE_bit at I2C1CON2.B2;
    const register unsigned short int SDAHT = 3;
    sbit  SDAHT_bit at I2C1CON2.B3;
    const register unsigned short int BOEN = 4;
    sbit  BOEN_bit at I2C1CON2.B4;
    const register unsigned short int SCIE = 5;
    sbit  SCIE_bit at I2C1CON2.B5;
    const register unsigned short int PCIE = 6;
    sbit  PCIE_bit at I2C1CON2.B6;

sfr unsigned int   volatile I2C1CONH         absolute 0x2E2;
sfr unsigned int   volatile I2C1STAT         absolute 0x2E4;
    const register unsigned short int TBF = 0;
    sbit  TBF_bit at I2C1STAT.B0;
    const register unsigned short int RBF = 1;
    sbit  RBF_bit at I2C1STAT.B1;
    const register unsigned short int R_NOT_W = 2;
    sbit  R_NOT_W_bit at I2C1STAT.B2;
    const register unsigned short int S = 3;
    sbit  S_bit at I2C1STAT.B3;
    const register unsigned short int P = 4;
    sbit  P_bit at I2C1STAT.B4;
    const register unsigned short int D_NOT_A = 5;
    sbit  D_NOT_A_bit at I2C1STAT.B5;
    const register unsigned short int I2COV = 6;
    sbit  I2COV_bit at I2C1STAT.B6;
    const register unsigned short int IWCOL = 7;
    sbit  IWCOL_bit at I2C1STAT.B7;
    const register unsigned short int ADD10 = 8;
    sbit  ADD10_bit at I2C1STAT.B8;
    const register unsigned short int GCSTAT = 9;
    sbit  GCSTAT_bit at I2C1STAT.B9;
    const register unsigned short int BCL = 10;
    sbit  BCL_bit at I2C1STAT.B10;
    const register unsigned short int ACKTIM = 13;
    sbit  ACKTIM_bit at I2C1STAT.B13;
    const register unsigned short int TRSTAT = 14;
    sbit  TRSTAT_bit at I2C1STAT.B14;
    const register unsigned short int ACKSTAT = 15;
    sbit  ACKSTAT_bit at I2C1STAT.B15;
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at I2C1STAT.B2;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at I2C1STAT.B5;
    const register unsigned short int RW = 2;
    sbit  RW_bit at I2C1STAT.B2;
    const register unsigned short int DA = 5;
    sbit  DA_bit at I2C1STAT.B5;

sfr unsigned int   volatile I2C1ADD          absolute 0x2E6;
sfr unsigned int   volatile I2C1MSK          absolute 0x2E8;
sfr unsigned int   volatile I2C2RCV          absolute 0x2EA;
sfr unsigned int   volatile I2C2TRN          absolute 0x2EC;
sfr unsigned int            I2C2BRG          absolute 0x2EE;
sfr unsigned int   volatile I2C2CON1         absolute 0x2F0;
sfr unsigned int   volatile I2C2CONL         absolute 0x2F0;
sfr unsigned int   volatile I2C2CON2         absolute 0x2F2;
sfr unsigned int   volatile I2C2CONH         absolute 0x2F2;
sfr unsigned int   volatile I2C2STAT         absolute 0x2F4;
sfr unsigned int   volatile I2C2ADD          absolute 0x2F6;
sfr unsigned int   volatile I2C2MSK          absolute 0x2F8;
sfr unsigned int   volatile MDCON            absolute 0x2FA;
    const register unsigned short int MDBIT = 0;
    sbit  MDBIT_bit at MDCON.B0;
    const register unsigned short int MDOPOL = 4;
    sbit  MDOPOL_bit at MDCON.B4;
    const register unsigned short int MDSLR = 5;
    sbit  MDSLR_bit at MDCON.B5;
    const register unsigned short int MDOE = 6;
    sbit  MDOE_bit at MDCON.B6;
    const register unsigned short int MDSIDL = 13;
    sbit  MDSIDL_bit at MDCON.B13;
    const register unsigned short int MDEN = 15;
    sbit  MDEN_bit at MDCON.B15;

sfr unsigned int   volatile MDSRC            absolute 0x2FC;
    const register unsigned short int MS0 = 0;
    sbit  MS0_bit at MDSRC.B0;
    const register unsigned short int MS1 = 1;
    sbit  MS1_bit at MDSRC.B1;
    const register unsigned short int MS2 = 2;
    sbit  MS2_bit at MDSRC.B2;
    const register unsigned short int MS3 = 3;
    sbit  MS3_bit at MDSRC.B3;
    const register unsigned short int SODIS = 7;
    sbit  SODIS_bit at MDSRC.B7;

sfr unsigned int   volatile MDCAR            absolute 0x2FE;
    const register unsigned short int CL0 = 0;
    sbit  CL0_bit at MDCAR.B0;
    const register unsigned short int CL1 = 1;
    sbit  CL1_bit at MDCAR.B1;
    const register unsigned short int CL2 = 2;
    sbit  CL2_bit at MDCAR.B2;
    const register unsigned short int CL3 = 3;
    sbit  CL3_bit at MDCAR.B3;
    const register unsigned short int CLSYNC = 5;
    sbit  CLSYNC_bit at MDCAR.B5;
    const register unsigned short int CLPOL = 6;
    sbit  CLPOL_bit at MDCAR.B6;
    const register unsigned short int CLODIS = 7;
    sbit  CLODIS_bit at MDCAR.B7;
    const register unsigned short int CH0 = 8;
    sbit  CH0_bit at MDCAR.B8;
    const register unsigned short int CH1 = 9;
    sbit  CH1_bit at MDCAR.B9;
    const register unsigned short int CH2 = 10;
    sbit  CH2_bit at MDCAR.B10;
    const register unsigned short int CH3 = 11;
    sbit  CH3_bit at MDCAR.B11;
    const register unsigned short int CHSYNC = 13;
    sbit  CHSYNC_bit at MDCAR.B13;
    const register unsigned short int CHPOL = 14;
    sbit  CHPOL_bit at MDCAR.B14;
    const register unsigned short int CHODIS = 15;
    sbit  CHODIS_bit at MDCAR.B15;

sfr unsigned int   volatile SPI1CON1         absolute 0x300;
    const register unsigned short int ENHBUF = 0;
    sbit  ENHBUF_bit at SPI1CON1.B0;
    const register unsigned short int SPIFE = 1;
    sbit  SPIFE_bit at SPI1CON1.B1;
    const register unsigned short int MCLKEN = 2;
    sbit  MCLKEN_bit at SPI1CON1.B2;
    const register unsigned short int DISSCK = 3;
    sbit  DISSCK_bit at SPI1CON1.B3;
    const register unsigned short int DISSDI = 4;
    sbit  DISSDI_bit at SPI1CON1.B4;
    const register unsigned short int MSTEN = 5;
    sbit  MSTEN_bit at SPI1CON1.B5;
    const register unsigned short int CKP = 6;
    sbit  CKP_bit at SPI1CON1.B6;
    const register unsigned short int SSEN = 7;
    sbit  SSEN_bit at SPI1CON1.B7;
    const register unsigned short int CKE = 8;
    sbit  CKE_bit at SPI1CON1.B8;
    const register unsigned short int SMP = 9;
    sbit  SMP_bit at SPI1CON1.B9;
    const register unsigned short int MODE16 = 10;
    sbit  MODE16_bit at SPI1CON1.B10;
    const register unsigned short int MODE32 = 11;
    sbit  MODE32_bit at SPI1CON1.B11;
    const register unsigned short int DISSDO = 12;
    sbit  DISSDO_bit at SPI1CON1.B12;
    const register unsigned short int SPISIDL = 13;
    sbit  SPISIDL_bit at SPI1CON1.B13;
    const register unsigned short int SPIEN = 15;
    sbit  SPIEN_bit at SPI1CON1.B15;

sfr unsigned int   volatile SPI1CON1L        absolute 0x300;
sfr unsigned int   volatile SPI1CON1H        absolute 0x302;
    const register unsigned short int FRMCNT0 = 0;
    sbit  FRMCNT0_bit at SPI1CON1H.B0;
    const register unsigned short int FRMCNT1 = 1;
    sbit  FRMCNT1_bit at SPI1CON1H.B1;
    const register unsigned short int FRMCNT2 = 2;
    sbit  FRMCNT2_bit at SPI1CON1H.B2;
    const register unsigned short int FRMSYPW = 3;
    sbit  FRMSYPW_bit at SPI1CON1H.B3;
    const register unsigned short int MSSEN = 4;
    sbit  MSSEN_bit at SPI1CON1H.B4;
    const register unsigned short int FRMPOL = 5;
    sbit  FRMPOL_bit at SPI1CON1H.B5;
    const register unsigned short int FRMSYNC = 6;
    sbit  FRMSYNC_bit at SPI1CON1H.B6;
    const register unsigned short int FRMEN = 7;
    sbit  FRMEN_bit at SPI1CON1H.B7;
    const register unsigned short int AUDMOD0 = 8;
    sbit  AUDMOD0_bit at SPI1CON1H.B8;
    const register unsigned short int AUDMOD1 = 9;
    sbit  AUDMOD1_bit at SPI1CON1H.B9;
    const register unsigned short int URDTEN = 10;
    sbit  URDTEN_bit at SPI1CON1H.B10;
    const register unsigned short int AUDMONO = 11;
    sbit  AUDMONO_bit at SPI1CON1H.B11;
    const register unsigned short int IGNTUR = 12;
    sbit  IGNTUR_bit at SPI1CON1H.B12;
    const register unsigned short int IGNROV = 13;
    sbit  IGNROV_bit at SPI1CON1H.B13;
    const register unsigned short int SPISGNEXT = 14;
    sbit  SPISGNEXT_bit at SPI1CON1H.B14;
    const register unsigned short int AUDEN = 15;
    sbit  AUDEN_bit at SPI1CON1H.B15;

sfr unsigned int   volatile SPI1CON2         absolute 0x302;
sfr unsigned int   volatile SPI1CON2L        absolute 0x304;
sfr unsigned int   volatile SPI1CON3         absolute 0x304;
sfr unsigned int   volatile SPI1CON2H        absolute 0x306;
sfr unsigned int   volatile SPI1CON4         absolute 0x306;
sfr unsigned int   volatile SPI1STATL        absolute 0x308;
    const register unsigned short int SPIRBF = 0;
    sbit  SPIRBF_bit at SPI1STATL.B0;
    const register unsigned short int SPITBF = 1;
    sbit  SPITBF_bit at SPI1STATL.B1;
    const register unsigned short int SPITBE = 3;
    sbit  SPITBE_bit at SPI1STATL.B3;
    const register unsigned short int SPIRBE = 5;
    sbit  SPIRBE_bit at SPI1STATL.B5;
    const register unsigned short int SPIROV = 6;
    sbit  SPIROV_bit at SPI1STATL.B6;
    const register unsigned short int SRMT = 7;
    sbit  SRMT_bit at SPI1STATL.B7;
    const register unsigned short int SPITUR = 8;
    sbit  SPITUR_bit at SPI1STATL.B8;
    const register unsigned short int SPIBUSY = 11;
    sbit  SPIBUSY_bit at SPI1STATL.B11;
    const register unsigned short int FRMERR = 12;
    sbit  FRMERR_bit at SPI1STATL.B12;

sfr unsigned int   volatile SPI1STATH        absolute 0x30A;
    const register unsigned short int TXELM0 = 0;
    sbit  TXELM0_bit at SPI1STATH.B0;
    const register unsigned short int TXELM1 = 1;
    sbit  TXELM1_bit at SPI1STATH.B1;
    const register unsigned short int TXELM2 = 2;
    sbit  TXELM2_bit at SPI1STATH.B2;
    const register unsigned short int TXELM3 = 3;
    sbit  TXELM3_bit at SPI1STATH.B3;
    const register unsigned short int TXELM4 = 4;
    sbit  TXELM4_bit at SPI1STATH.B4;
    const register unsigned short int TXELM5 = 5;
    sbit  TXELM5_bit at SPI1STATH.B5;
    const register unsigned short int RXELM0 = 8;
    sbit  RXELM0_bit at SPI1STATH.B8;
    const register unsigned short int RXELM1 = 9;
    sbit  RXELM1_bit at SPI1STATH.B9;
    const register unsigned short int RXELM2 = 10;
    sbit  RXELM2_bit at SPI1STATH.B10;
    const register unsigned short int RXELM3 = 11;
    sbit  RXELM3_bit at SPI1STATH.B11;
    const register unsigned short int RXELM4 = 12;
    sbit  RXELM4_bit at SPI1STATH.B12;
    const register unsigned short int RXELM5 = 13;
    sbit  RXELM5_bit at SPI1STATH.B13;

sfr unsigned int   volatile SPI1BUFL         absolute 0x30C;
sfr unsigned int   volatile SPI1BUFH         absolute 0x30E;
sfr unsigned int   volatile SPI1BRGL         absolute 0x310;
sfr unsigned int   volatile SPI1BRGH         absolute 0x312;
sfr unsigned int   volatile SPI1IMSK1        absolute 0x314;
    const register unsigned short int SPIRBFEN = 0;
    sbit  SPIRBFEN_bit at SPI1IMSK1.B0;
    const register unsigned short int SPITBFEN = 1;
    sbit  SPITBFEN_bit at SPI1IMSK1.B1;
    const register unsigned short int SPITBEN = 3;
    sbit  SPITBEN_bit at SPI1IMSK1.B3;
    const register unsigned short int SPIRBEN = 5;
    sbit  SPIRBEN_bit at SPI1IMSK1.B5;
    const register unsigned short int SPIROVEN = 6;
    sbit  SPIROVEN_bit at SPI1IMSK1.B6;
    const register unsigned short int SRMTEN = 7;
    sbit  SRMTEN_bit at SPI1IMSK1.B7;
    const register unsigned short int SPITUREN = 8;
    sbit  SPITUREN_bit at SPI1IMSK1.B8;
    const register unsigned short int BUSYEN = 11;
    sbit  BUSYEN_bit at SPI1IMSK1.B11;
    const register unsigned short int FRMERREN = 12;
    sbit  FRMERREN_bit at SPI1IMSK1.B12;

sfr unsigned int   volatile SPI1IMSKL        absolute 0x314;
sfr unsigned int   volatile SPI1IMSK2        absolute 0x316;
    const register unsigned short int TXMSK0 = 0;
    sbit  TXMSK0_bit at SPI1IMSK2.B0;
    const register unsigned short int TXMSK1 = 1;
    sbit  TXMSK1_bit at SPI1IMSK2.B1;
    const register unsigned short int TXMSK2 = 2;
    sbit  TXMSK2_bit at SPI1IMSK2.B2;
    const register unsigned short int TXMSK3 = 3;
    sbit  TXMSK3_bit at SPI1IMSK2.B3;
    const register unsigned short int TXMSK4 = 4;
    sbit  TXMSK4_bit at SPI1IMSK2.B4;
    const register unsigned short int TXMSK5 = 5;
    sbit  TXMSK5_bit at SPI1IMSK2.B5;
    const register unsigned short int TXWIEN = 7;
    sbit  TXWIEN_bit at SPI1IMSK2.B7;
    const register unsigned short int RXMSK0 = 8;
    sbit  RXMSK0_bit at SPI1IMSK2.B8;
    const register unsigned short int RXMSK1 = 9;
    sbit  RXMSK1_bit at SPI1IMSK2.B9;
    const register unsigned short int RXMSK2 = 10;
    sbit  RXMSK2_bit at SPI1IMSK2.B10;
    const register unsigned short int RXMSK3 = 11;
    sbit  RXMSK3_bit at SPI1IMSK2.B11;
    const register unsigned short int RXMSK4 = 12;
    sbit  RXMSK4_bit at SPI1IMSK2.B12;
    const register unsigned short int RXMSK5 = 13;
    sbit  RXMSK5_bit at SPI1IMSK2.B13;
    const register unsigned short int RXWIEN = 15;
    sbit  RXWIEN_bit at SPI1IMSK2.B15;

sfr unsigned int   volatile SPI1IMSKH        absolute 0x316;
sfr unsigned int   volatile SPI1URDTL        absolute 0x318;
sfr unsigned int   volatile SPI1URDTH        absolute 0x31A;
sfr unsigned int   volatile SPI2CON1         absolute 0x31C;
sfr unsigned int   volatile SPI2CON1L        absolute 0x31C;
sfr unsigned int   volatile SPI2CON1H        absolute 0x31E;
sfr unsigned int   volatile SPI2CON2         absolute 0x31E;
sfr unsigned int   volatile SPI2CON2L        absolute 0x320;
sfr unsigned int   volatile SPI2CON3         absolute 0x320;
sfr unsigned int   volatile SPI2CON2H        absolute 0x322;
sfr unsigned int   volatile SPI2CON4         absolute 0x322;
sfr unsigned int   volatile SPI2STATL        absolute 0x324;
sfr unsigned int   volatile SPI2STATH        absolute 0x326;
sfr unsigned int   volatile SPI2BUFL         absolute 0x328;
sfr unsigned int   volatile SPI2BUFH         absolute 0x32A;
sfr unsigned int   volatile SPI2BRGL         absolute 0x32C;
sfr unsigned int   volatile SPI2BRGH         absolute 0x32E;
sfr unsigned int   volatile SPI2IMSK1        absolute 0x330;
sfr unsigned int   volatile SPI2IMSKL        absolute 0x330;
sfr unsigned int   volatile SPI2IMSK2        absolute 0x332;
sfr unsigned int   volatile SPI2IMSKH        absolute 0x332;
sfr unsigned int   volatile SPI2URDTL        absolute 0x334;
sfr unsigned int   volatile SPI2URDTH        absolute 0x336;
sfr unsigned int   volatile SPI3CON1         absolute 0x338;
sfr unsigned int   volatile SPI3CON1L        absolute 0x338;
sfr unsigned int   volatile SPI3CON1H        absolute 0x33A;
sfr unsigned int   volatile SPI3CON2         absolute 0x33A;
sfr unsigned int   volatile SPI3CON2L        absolute 0x33C;
sfr unsigned int   volatile SPI3CON3         absolute 0x33C;
sfr unsigned int   volatile SPI3CON2H        absolute 0x33E;
sfr unsigned int   volatile SPI3CON4         absolute 0x33E;
sfr unsigned int   volatile SPI3STATL        absolute 0x340;
sfr unsigned int   volatile SPI3STATH        absolute 0x342;
sfr unsigned int   volatile SPI3BUFL         absolute 0x344;
sfr unsigned int   volatile SPI3BUFH         absolute 0x346;
sfr unsigned int   volatile SPI3BRGL         absolute 0x348;
sfr unsigned int   volatile SPI3BRGH         absolute 0x34A;
sfr unsigned int   volatile SPI3IMSK1        absolute 0x34C;
sfr unsigned int   volatile SPI3IMSKL        absolute 0x34C;
sfr unsigned int   volatile SPI3IMSK2        absolute 0x34E;
sfr unsigned int   volatile SPI3IMSKH        absolute 0x34E;
sfr unsigned int   volatile SPI3URDTL        absolute 0x350;
sfr unsigned int   volatile SPI3URDTH        absolute 0x352;
sfr unsigned int            RPINR0           absolute 0x38C;
    const register unsigned short int OCTRIG1R0 = 0;
    sbit  OCTRIG1R0_bit at RPINR0.B0;
    const register unsigned short int OCTRIG1R1 = 1;
    sbit  OCTRIG1R1_bit at RPINR0.B1;
    const register unsigned short int OCTRIG1R2 = 2;
    sbit  OCTRIG1R2_bit at RPINR0.B2;
    const register unsigned short int OCTRIG1R3 = 3;
    sbit  OCTRIG1R3_bit at RPINR0.B3;
    const register unsigned short int OCTRIG1R4 = 4;
    sbit  OCTRIG1R4_bit at RPINR0.B4;
    const register unsigned short int OCTRIG1R5 = 5;
    sbit  OCTRIG1R5_bit at RPINR0.B5;
    const register unsigned short int INT1R0 = 8;
    sbit  INT1R0_bit at RPINR0.B8;
    const register unsigned short int INT1R1 = 9;
    sbit  INT1R1_bit at RPINR0.B9;
    const register unsigned short int INT1R2 = 10;
    sbit  INT1R2_bit at RPINR0.B10;
    const register unsigned short int INT1R3 = 11;
    sbit  INT1R3_bit at RPINR0.B11;
    const register unsigned short int INT1R4 = 12;
    sbit  INT1R4_bit at RPINR0.B12;
    const register unsigned short int INT1R5 = 13;
    sbit  INT1R5_bit at RPINR0.B13;

sfr unsigned int            RPINR1           absolute 0x38E;
    const register unsigned short int INT2R0 = 0;
    sbit  INT2R0_bit at RPINR1.B0;
    const register unsigned short int INT2R1 = 1;
    sbit  INT2R1_bit at RPINR1.B1;
    const register unsigned short int INT2R2 = 2;
    sbit  INT2R2_bit at RPINR1.B2;
    const register unsigned short int INT2R3 = 3;
    sbit  INT2R3_bit at RPINR1.B3;
    const register unsigned short int INT2R4 = 4;
    sbit  INT2R4_bit at RPINR1.B4;
    const register unsigned short int INT2R5 = 5;
    sbit  INT2R5_bit at RPINR1.B5;
    const register unsigned short int INT3R0 = 8;
    sbit  INT3R0_bit at RPINR1.B8;
    const register unsigned short int INT3R1 = 9;
    sbit  INT3R1_bit at RPINR1.B9;
    const register unsigned short int INT3R2 = 10;
    sbit  INT3R2_bit at RPINR1.B10;
    const register unsigned short int INT3R3 = 11;
    sbit  INT3R3_bit at RPINR1.B11;
    const register unsigned short int INT3R4 = 12;
    sbit  INT3R4_bit at RPINR1.B12;
    const register unsigned short int INT3R5 = 13;
    sbit  INT3R5_bit at RPINR1.B13;

sfr unsigned int            RPINR2           absolute 0x390;
    const register unsigned short int INT4R0 = 0;
    sbit  INT4R0_bit at RPINR2.B0;
    const register unsigned short int INT4R1 = 1;
    sbit  INT4R1_bit at RPINR2.B1;
    const register unsigned short int INT4R2 = 2;
    sbit  INT4R2_bit at RPINR2.B2;
    const register unsigned short int INT4R3 = 3;
    sbit  INT4R3_bit at RPINR2.B3;
    const register unsigned short int INT4R4 = 4;
    sbit  INT4R4_bit at RPINR2.B4;
    const register unsigned short int INT4R5 = 5;
    sbit  INT4R5_bit at RPINR2.B5;
    const register unsigned short int OCTRIG2R0 = 8;
    sbit  OCTRIG2R0_bit at RPINR2.B8;
    const register unsigned short int OCTRIG2R1 = 9;
    sbit  OCTRIG2R1_bit at RPINR2.B9;
    const register unsigned short int OCTRIG2R2 = 10;
    sbit  OCTRIG2R2_bit at RPINR2.B10;
    const register unsigned short int OCTRIG2R3 = 11;
    sbit  OCTRIG2R3_bit at RPINR2.B11;
    const register unsigned short int OCTRIG2R4 = 12;
    sbit  OCTRIG2R4_bit at RPINR2.B12;
    const register unsigned short int OCTRIG2R5 = 13;
    sbit  OCTRIG2R5_bit at RPINR2.B13;

sfr unsigned int            RPINR7           absolute 0x39A;
    const register unsigned short int IC1R0 = 0;
    sbit  IC1R0_bit at RPINR7.B0;
    const register unsigned short int IC1R1 = 1;
    sbit  IC1R1_bit at RPINR7.B1;
    const register unsigned short int IC1R2 = 2;
    sbit  IC1R2_bit at RPINR7.B2;
    const register unsigned short int IC1R3 = 3;
    sbit  IC1R3_bit at RPINR7.B3;
    const register unsigned short int IC1R4 = 4;
    sbit  IC1R4_bit at RPINR7.B4;
    const register unsigned short int IC1R5 = 5;
    sbit  IC1R5_bit at RPINR7.B5;
    const register unsigned short int IC2R0 = 8;
    sbit  IC2R0_bit at RPINR7.B8;
    const register unsigned short int IC2R1 = 9;
    sbit  IC2R1_bit at RPINR7.B9;
    const register unsigned short int IC2R2 = 10;
    sbit  IC2R2_bit at RPINR7.B10;
    const register unsigned short int IC2R3 = 11;
    sbit  IC2R3_bit at RPINR7.B11;
    const register unsigned short int IC2R4 = 12;
    sbit  IC2R4_bit at RPINR7.B12;
    const register unsigned short int IC2R5 = 13;
    sbit  IC2R5_bit at RPINR7.B13;

sfr unsigned int            RPINR8           absolute 0x39C;
    const register unsigned short int IC3R0 = 0;
    sbit  IC3R0_bit at RPINR8.B0;
    const register unsigned short int IC3R1 = 1;
    sbit  IC3R1_bit at RPINR8.B1;
    const register unsigned short int IC3R2 = 2;
    sbit  IC3R2_bit at RPINR8.B2;
    const register unsigned short int IC3R3 = 3;
    sbit  IC3R3_bit at RPINR8.B3;
    const register unsigned short int IC3R4 = 4;
    sbit  IC3R4_bit at RPINR8.B4;
    const register unsigned short int IC3R5 = 5;
    sbit  IC3R5_bit at RPINR8.B5;
    const register unsigned short int IC4R0 = 8;
    sbit  IC4R0_bit at RPINR8.B8;
    const register unsigned short int IC4R1 = 9;
    sbit  IC4R1_bit at RPINR8.B9;
    const register unsigned short int IC4R2 = 10;
    sbit  IC4R2_bit at RPINR8.B10;
    const register unsigned short int IC4R3 = 11;
    sbit  IC4R3_bit at RPINR8.B11;
    const register unsigned short int IC4R4 = 12;
    sbit  IC4R4_bit at RPINR8.B12;
    const register unsigned short int IC4R5 = 13;
    sbit  IC4R5_bit at RPINR8.B13;

sfr unsigned int            RPINR9           absolute 0x39E;
    const register unsigned short int IC5R0 = 0;
    sbit  IC5R0_bit at RPINR9.B0;
    const register unsigned short int IC5R1 = 1;
    sbit  IC5R1_bit at RPINR9.B1;
    const register unsigned short int IC5R2 = 2;
    sbit  IC5R2_bit at RPINR9.B2;
    const register unsigned short int IC5R3 = 3;
    sbit  IC5R3_bit at RPINR9.B3;
    const register unsigned short int IC5R4 = 4;
    sbit  IC5R4_bit at RPINR9.B4;
    const register unsigned short int IC5R5 = 5;
    sbit  IC5R5_bit at RPINR9.B5;
    const register unsigned short int IC6R0 = 8;
    sbit  IC6R0_bit at RPINR9.B8;
    const register unsigned short int IC6R1 = 9;
    sbit  IC6R1_bit at RPINR9.B9;
    const register unsigned short int IC6R2 = 10;
    sbit  IC6R2_bit at RPINR9.B10;
    const register unsigned short int IC6R3 = 11;
    sbit  IC6R3_bit at RPINR9.B11;
    const register unsigned short int IC6R4 = 12;
    sbit  IC6R4_bit at RPINR9.B12;
    const register unsigned short int IC6R5 = 13;
    sbit  IC6R5_bit at RPINR9.B13;

sfr unsigned int            RPINR11          absolute 0x3A2;
    const register unsigned short int OCFAR0 = 0;
    sbit  OCFAR0_bit at RPINR11.B0;
    const register unsigned short int OCFAR1 = 1;
    sbit  OCFAR1_bit at RPINR11.B1;
    const register unsigned short int OCFAR2 = 2;
    sbit  OCFAR2_bit at RPINR11.B2;
    const register unsigned short int OCFAR3 = 3;
    sbit  OCFAR3_bit at RPINR11.B3;
    const register unsigned short int OCFAR4 = 4;
    sbit  OCFAR4_bit at RPINR11.B4;
    const register unsigned short int OCFAR5 = 5;
    sbit  OCFAR5_bit at RPINR11.B5;
    const register unsigned short int OCFBR0 = 8;
    sbit  OCFBR0_bit at RPINR11.B8;
    const register unsigned short int OCFBR1 = 9;
    sbit  OCFBR1_bit at RPINR11.B9;
    const register unsigned short int OCFBR2 = 10;
    sbit  OCFBR2_bit at RPINR11.B10;
    const register unsigned short int OCFBR3 = 11;
    sbit  OCFBR3_bit at RPINR11.B11;
    const register unsigned short int OCFBR4 = 12;
    sbit  OCFBR4_bit at RPINR11.B12;
    const register unsigned short int OCFBR5 = 13;
    sbit  OCFBR5_bit at RPINR11.B13;

sfr unsigned int            RPINR17          absolute 0x3AE;
    const register unsigned short int U3RXR0 = 8;
    sbit  U3RXR0_bit at RPINR17.B8;
    const register unsigned short int U3RXR1 = 9;
    sbit  U3RXR1_bit at RPINR17.B9;
    const register unsigned short int U3RXR2 = 10;
    sbit  U3RXR2_bit at RPINR17.B10;
    const register unsigned short int U3RXR3 = 11;
    sbit  U3RXR3_bit at RPINR17.B11;
    const register unsigned short int U3RXR4 = 12;
    sbit  U3RXR4_bit at RPINR17.B12;
    const register unsigned short int U3RXR5 = 13;
    sbit  U3RXR5_bit at RPINR17.B13;

sfr unsigned int            RPINR18          absolute 0x3B0;
    const register unsigned short int U1RXR0 = 0;
    sbit  U1RXR0_bit at RPINR18.B0;
    const register unsigned short int U1RXR1 = 1;
    sbit  U1RXR1_bit at RPINR18.B1;
    const register unsigned short int U1RXR2 = 2;
    sbit  U1RXR2_bit at RPINR18.B2;
    const register unsigned short int U1RXR3 = 3;
    sbit  U1RXR3_bit at RPINR18.B3;
    const register unsigned short int U1RXR4 = 4;
    sbit  U1RXR4_bit at RPINR18.B4;
    const register unsigned short int U1RXR5 = 5;
    sbit  U1RXR5_bit at RPINR18.B5;
    const register unsigned short int U1CTSR0 = 8;
    sbit  U1CTSR0_bit at RPINR18.B8;
    const register unsigned short int U1CTSR1 = 9;
    sbit  U1CTSR1_bit at RPINR18.B9;
    const register unsigned short int U1CTSR2 = 10;
    sbit  U1CTSR2_bit at RPINR18.B10;
    const register unsigned short int U1CTSR3 = 11;
    sbit  U1CTSR3_bit at RPINR18.B11;
    const register unsigned short int U1CTSR4 = 12;
    sbit  U1CTSR4_bit at RPINR18.B12;
    const register unsigned short int U1CTSR5 = 13;
    sbit  U1CTSR5_bit at RPINR18.B13;

sfr unsigned int            RPINR19          absolute 0x3B2;
    const register unsigned short int U2RXR0 = 0;
    sbit  U2RXR0_bit at RPINR19.B0;
    const register unsigned short int U2RXR1 = 1;
    sbit  U2RXR1_bit at RPINR19.B1;
    const register unsigned short int U2RXR2 = 2;
    sbit  U2RXR2_bit at RPINR19.B2;
    const register unsigned short int U2RXR3 = 3;
    sbit  U2RXR3_bit at RPINR19.B3;
    const register unsigned short int U2RXR4 = 4;
    sbit  U2RXR4_bit at RPINR19.B4;
    const register unsigned short int U2RXR5 = 5;
    sbit  U2RXR5_bit at RPINR19.B5;
    const register unsigned short int U2CTSR0 = 8;
    sbit  U2CTSR0_bit at RPINR19.B8;
    const register unsigned short int U2CTSR1 = 9;
    sbit  U2CTSR1_bit at RPINR19.B9;
    const register unsigned short int U2CTSR2 = 10;
    sbit  U2CTSR2_bit at RPINR19.B10;
    const register unsigned short int U2CTSR3 = 11;
    sbit  U2CTSR3_bit at RPINR19.B11;
    const register unsigned short int U2CTSR4 = 12;
    sbit  U2CTSR4_bit at RPINR19.B12;
    const register unsigned short int U2CTSR5 = 13;
    sbit  U2CTSR5_bit at RPINR19.B13;

sfr unsigned int            RPINR20          absolute 0x3B4;
    const register unsigned short int SDI1R0 = 0;
    sbit  SDI1R0_bit at RPINR20.B0;
    const register unsigned short int SDI1R1 = 1;
    sbit  SDI1R1_bit at RPINR20.B1;
    const register unsigned short int SDI1R2 = 2;
    sbit  SDI1R2_bit at RPINR20.B2;
    const register unsigned short int SDI1R3 = 3;
    sbit  SDI1R3_bit at RPINR20.B3;
    const register unsigned short int SDI1R4 = 4;
    sbit  SDI1R4_bit at RPINR20.B4;
    const register unsigned short int SDI1R5 = 5;
    sbit  SDI1R5_bit at RPINR20.B5;
    const register unsigned short int SCK1R0 = 8;
    sbit  SCK1R0_bit at RPINR20.B8;
    const register unsigned short int SCK1R1 = 9;
    sbit  SCK1R1_bit at RPINR20.B9;
    const register unsigned short int SCK1R2 = 10;
    sbit  SCK1R2_bit at RPINR20.B10;
    const register unsigned short int SCK1R3 = 11;
    sbit  SCK1R3_bit at RPINR20.B11;
    const register unsigned short int SCK1R4 = 12;
    sbit  SCK1R4_bit at RPINR20.B12;
    const register unsigned short int SCK1R5 = 13;
    sbit  SCK1R5_bit at RPINR20.B13;

sfr unsigned int            RPINR21          absolute 0x3B6;
    const register unsigned short int SS1R0 = 0;
    sbit  SS1R0_bit at RPINR21.B0;
    const register unsigned short int SS1R1 = 1;
    sbit  SS1R1_bit at RPINR21.B1;
    const register unsigned short int SS1R2 = 2;
    sbit  SS1R2_bit at RPINR21.B2;
    const register unsigned short int SS1R3 = 3;
    sbit  SS1R3_bit at RPINR21.B3;
    const register unsigned short int SS1R4 = 4;
    sbit  SS1R4_bit at RPINR21.B4;
    const register unsigned short int SS1R5 = 5;
    sbit  SS1R5_bit at RPINR21.B5;
    const register unsigned short int U3CTSR0 = 8;
    sbit  U3CTSR0_bit at RPINR21.B8;
    const register unsigned short int U3CTSR1 = 9;
    sbit  U3CTSR1_bit at RPINR21.B9;
    const register unsigned short int U3CTSR2 = 10;
    sbit  U3CTSR2_bit at RPINR21.B10;
    const register unsigned short int U3CTSR3 = 11;
    sbit  U3CTSR3_bit at RPINR21.B11;
    const register unsigned short int U3CTSR4 = 12;
    sbit  U3CTSR4_bit at RPINR21.B12;
    const register unsigned short int U3CTSR5 = 13;
    sbit  U3CTSR5_bit at RPINR21.B13;

sfr unsigned int            RPINR22          absolute 0x3B8;
    const register unsigned short int SDI2R0 = 0;
    sbit  SDI2R0_bit at RPINR22.B0;
    const register unsigned short int SDI2R1 = 1;
    sbit  SDI2R1_bit at RPINR22.B1;
    const register unsigned short int SDI2R2 = 2;
    sbit  SDI2R2_bit at RPINR22.B2;
    const register unsigned short int SDI2R3 = 3;
    sbit  SDI2R3_bit at RPINR22.B3;
    const register unsigned short int SDI2R4 = 4;
    sbit  SDI2R4_bit at RPINR22.B4;
    const register unsigned short int SDI2R5 = 5;
    sbit  SDI2R5_bit at RPINR22.B5;
    const register unsigned short int SCK2R0 = 8;
    sbit  SCK2R0_bit at RPINR22.B8;
    const register unsigned short int SCK2R1 = 9;
    sbit  SCK2R1_bit at RPINR22.B9;
    const register unsigned short int SCK2R2 = 10;
    sbit  SCK2R2_bit at RPINR22.B10;
    const register unsigned short int SCK2R3 = 11;
    sbit  SCK2R3_bit at RPINR22.B11;
    const register unsigned short int SCK2R4 = 12;
    sbit  SCK2R4_bit at RPINR22.B12;
    const register unsigned short int SCK2R5 = 13;
    sbit  SCK2R5_bit at RPINR22.B13;

sfr unsigned int            RPINR23          absolute 0x3BA;
    const register unsigned short int SS2R0 = 0;
    sbit  SS2R0_bit at RPINR23.B0;
    const register unsigned short int SS2R1 = 1;
    sbit  SS2R1_bit at RPINR23.B1;
    const register unsigned short int SS2R2 = 2;
    sbit  SS2R2_bit at RPINR23.B2;
    const register unsigned short int SS2R3 = 3;
    sbit  SS2R3_bit at RPINR23.B3;
    const register unsigned short int SS2R4 = 4;
    sbit  SS2R4_bit at RPINR23.B4;
    const register unsigned short int SS2R5 = 5;
    sbit  SS2R5_bit at RPINR23.B5;
    const register unsigned short int TMRCKR0 = 8;
    sbit  TMRCKR0_bit at RPINR23.B8;
    const register unsigned short int TMRCKR1 = 9;
    sbit  TMRCKR1_bit at RPINR23.B9;
    const register unsigned short int TMRCKR2 = 10;
    sbit  TMRCKR2_bit at RPINR23.B10;
    const register unsigned short int TMRCKR3 = 11;
    sbit  TMRCKR3_bit at RPINR23.B11;
    const register unsigned short int TMRCKR4 = 12;
    sbit  TMRCKR4_bit at RPINR23.B12;
    const register unsigned short int TMRCKR5 = 13;
    sbit  TMRCKR5_bit at RPINR23.B13;

sfr unsigned int            RPINR27          absolute 0x3C2;
    const register unsigned short int U4RXR0 = 0;
    sbit  U4RXR0_bit at RPINR27.B0;
    const register unsigned short int U4RXR1 = 1;
    sbit  U4RXR1_bit at RPINR27.B1;
    const register unsigned short int U4RXR2 = 2;
    sbit  U4RXR2_bit at RPINR27.B2;
    const register unsigned short int U4RXR3 = 3;
    sbit  U4RXR3_bit at RPINR27.B3;
    const register unsigned short int U4RXR4 = 4;
    sbit  U4RXR4_bit at RPINR27.B4;
    const register unsigned short int U4RXR5 = 5;
    sbit  U4RXR5_bit at RPINR27.B5;
    const register unsigned short int U4CTSR0 = 8;
    sbit  U4CTSR0_bit at RPINR27.B8;
    const register unsigned short int U4CTSR1 = 9;
    sbit  U4CTSR1_bit at RPINR27.B9;
    const register unsigned short int U4CTSR2 = 10;
    sbit  U4CTSR2_bit at RPINR27.B10;
    const register unsigned short int U4CTSR3 = 11;
    sbit  U4CTSR3_bit at RPINR27.B11;
    const register unsigned short int U4CTSR4 = 12;
    sbit  U4CTSR4_bit at RPINR27.B12;
    const register unsigned short int U4CTSR5 = 13;
    sbit  U4CTSR5_bit at RPINR27.B13;

sfr unsigned int            RPINR28          absolute 0x3C4;
    const register unsigned short int SDI3R0 = 0;
    sbit  SDI3R0_bit at RPINR28.B0;
    const register unsigned short int SDI3R1 = 1;
    sbit  SDI3R1_bit at RPINR28.B1;
    const register unsigned short int SDI3R2 = 2;
    sbit  SDI3R2_bit at RPINR28.B2;
    const register unsigned short int SDI3R3 = 3;
    sbit  SDI3R3_bit at RPINR28.B3;
    const register unsigned short int SDI3R4 = 4;
    sbit  SDI3R4_bit at RPINR28.B4;
    const register unsigned short int SDI3R5 = 5;
    sbit  SDI3R5_bit at RPINR28.B5;
    const register unsigned short int SCK3R0 = 8;
    sbit  SCK3R0_bit at RPINR28.B8;
    const register unsigned short int SCK3R1 = 9;
    sbit  SCK3R1_bit at RPINR28.B9;
    const register unsigned short int SCK3R2 = 10;
    sbit  SCK3R2_bit at RPINR28.B10;
    const register unsigned short int SCK3R3 = 11;
    sbit  SCK3R3_bit at RPINR28.B11;
    const register unsigned short int SCK3R4 = 12;
    sbit  SCK3R4_bit at RPINR28.B12;
    const register unsigned short int SCK3R5 = 13;
    sbit  SCK3R5_bit at RPINR28.B13;

sfr unsigned int            RPINR29          absolute 0x3C6;
    const register unsigned short int SS3RR0 = 0;
    sbit  SS3RR0_bit at RPINR29.B0;
    const register unsigned short int SS3RR1 = 1;
    sbit  SS3RR1_bit at RPINR29.B1;
    const register unsigned short int SS3RR2 = 2;
    sbit  SS3RR2_bit at RPINR29.B2;
    const register unsigned short int SS3RR3 = 3;
    sbit  SS3RR3_bit at RPINR29.B3;
    const register unsigned short int SS3RR4 = 4;
    sbit  SS3RR4_bit at RPINR29.B4;
    const register unsigned short int SS3RR5 = 5;
    sbit  SS3RR5_bit at RPINR29.B5;

sfr unsigned int   volatile RPINR30          absolute 0x3C8;
    const register unsigned short int MDMIRR0 = 0;
    sbit  MDMIRR0_bit at RPINR30.B0;
    const register unsigned short int MDMIRR1 = 1;
    sbit  MDMIRR1_bit at RPINR30.B1;
    const register unsigned short int MDMIRR2 = 2;
    sbit  MDMIRR2_bit at RPINR30.B2;
    const register unsigned short int MDMIRR3 = 3;
    sbit  MDMIRR3_bit at RPINR30.B3;
    const register unsigned short int MDMIRR4 = 4;
    sbit  MDMIRR4_bit at RPINR30.B4;
    const register unsigned short int MDMIRR5 = 5;
    sbit  MDMIRR5_bit at RPINR30.B5;

sfr unsigned int   volatile RPINR31          absolute 0x3CA;
    const register unsigned short int MDC1R0 = 0;
    sbit  MDC1R0_bit at RPINR31.B0;
    const register unsigned short int MDC1R1 = 1;
    sbit  MDC1R1_bit at RPINR31.B1;
    const register unsigned short int MDC1R2 = 2;
    sbit  MDC1R2_bit at RPINR31.B2;
    const register unsigned short int MDC1R3 = 3;
    sbit  MDC1R3_bit at RPINR31.B3;
    const register unsigned short int MDC1R4 = 4;
    sbit  MDC1R4_bit at RPINR31.B4;
    const register unsigned short int MDC1R5 = 5;
    sbit  MDC1R5_bit at RPINR31.B5;
    const register unsigned short int MDC2R0 = 8;
    sbit  MDC2R0_bit at RPINR31.B8;
    const register unsigned short int MDC2R1 = 9;
    sbit  MDC2R1_bit at RPINR31.B9;
    const register unsigned short int MDC2R2 = 10;
    sbit  MDC2R2_bit at RPINR31.B10;
    const register unsigned short int MDC2R3 = 11;
    sbit  MDC2R3_bit at RPINR31.B11;
    const register unsigned short int MDC2R4 = 12;
    sbit  MDC2R4_bit at RPINR31.B12;
    const register unsigned short int MDC2R5 = 13;
    sbit  MDC2R5_bit at RPINR31.B13;

sfr unsigned int            RPOR0            absolute 0x3D6;
    const register unsigned short int RP0R0 = 0;
    sbit  RP0R0_bit at RPOR0.B0;
    const register unsigned short int RP0R1 = 1;
    sbit  RP0R1_bit at RPOR0.B1;
    const register unsigned short int RP0R2 = 2;
    sbit  RP0R2_bit at RPOR0.B2;
    const register unsigned short int RP0R3 = 3;
    sbit  RP0R3_bit at RPOR0.B3;
    const register unsigned short int RP0R4 = 4;
    sbit  RP0R4_bit at RPOR0.B4;
    const register unsigned short int RP0R5 = 5;
    sbit  RP0R5_bit at RPOR0.B5;
    const register unsigned short int RP1R0 = 8;
    sbit  RP1R0_bit at RPOR0.B8;
    const register unsigned short int RP1R1 = 9;
    sbit  RP1R1_bit at RPOR0.B9;
    const register unsigned short int RP1R2 = 10;
    sbit  RP1R2_bit at RPOR0.B10;
    const register unsigned short int RP1R3 = 11;
    sbit  RP1R3_bit at RPOR0.B11;
    const register unsigned short int RP1R4 = 12;
    sbit  RP1R4_bit at RPOR0.B12;
    const register unsigned short int RP1R5 = 13;
    sbit  RP1R5_bit at RPOR0.B13;

sfr unsigned int            RPOR1            absolute 0x3D8;
    const register unsigned short int RP2R0 = 0;
    sbit  RP2R0_bit at RPOR1.B0;
    const register unsigned short int RP2R1 = 1;
    sbit  RP2R1_bit at RPOR1.B1;
    const register unsigned short int RP2R2 = 2;
    sbit  RP2R2_bit at RPOR1.B2;
    const register unsigned short int RP2R3 = 3;
    sbit  RP2R3_bit at RPOR1.B3;
    const register unsigned short int RP2R4 = 4;
    sbit  RP2R4_bit at RPOR1.B4;
    const register unsigned short int RP2R5 = 5;
    sbit  RP2R5_bit at RPOR1.B5;
    const register unsigned short int RP3R0 = 8;
    sbit  RP3R0_bit at RPOR1.B8;
    const register unsigned short int RP3R1 = 9;
    sbit  RP3R1_bit at RPOR1.B9;
    const register unsigned short int RP3R2 = 10;
    sbit  RP3R2_bit at RPOR1.B10;
    const register unsigned short int RP3R3 = 11;
    sbit  RP3R3_bit at RPOR1.B11;
    const register unsigned short int RP3R4 = 12;
    sbit  RP3R4_bit at RPOR1.B12;
    const register unsigned short int RP3R5 = 13;
    sbit  RP3R5_bit at RPOR1.B13;

sfr unsigned int            RPOR2            absolute 0x3DA;
    const register unsigned short int RP5R0 = 8;
    sbit  RP5R0_bit at RPOR2.B8;
    const register unsigned short int RP5R1 = 9;
    sbit  RP5R1_bit at RPOR2.B9;
    const register unsigned short int RP5R2 = 10;
    sbit  RP5R2_bit at RPOR2.B10;
    const register unsigned short int RP5R3 = 11;
    sbit  RP5R3_bit at RPOR2.B11;
    const register unsigned short int RP5R4 = 12;
    sbit  RP5R4_bit at RPOR2.B12;
    const register unsigned short int RP5R5 = 13;
    sbit  RP5R5_bit at RPOR2.B13;

sfr unsigned int            RPOR3            absolute 0x3DC;
    const register unsigned short int RP6R0 = 0;
    sbit  RP6R0_bit at RPOR3.B0;
    const register unsigned short int RP6R1 = 1;
    sbit  RP6R1_bit at RPOR3.B1;
    const register unsigned short int RP6R2 = 2;
    sbit  RP6R2_bit at RPOR3.B2;
    const register unsigned short int RP6R3 = 3;
    sbit  RP6R3_bit at RPOR3.B3;
    const register unsigned short int RP6R4 = 4;
    sbit  RP6R4_bit at RPOR3.B4;
    const register unsigned short int RP6R5 = 5;
    sbit  RP6R5_bit at RPOR3.B5;
    const register unsigned short int RP7R0 = 8;
    sbit  RP7R0_bit at RPOR3.B8;
    const register unsigned short int RP7R1 = 9;
    sbit  RP7R1_bit at RPOR3.B9;
    const register unsigned short int RP7R2 = 10;
    sbit  RP7R2_bit at RPOR3.B10;
    const register unsigned short int RP7R3 = 11;
    sbit  RP7R3_bit at RPOR3.B11;
    const register unsigned short int RP7R4 = 12;
    sbit  RP7R4_bit at RPOR3.B12;
    const register unsigned short int RP7R5 = 13;
    sbit  RP7R5_bit at RPOR3.B13;

sfr unsigned int            RPOR4            absolute 0x3DE;
    const register unsigned short int RP8R0 = 0;
    sbit  RP8R0_bit at RPOR4.B0;
    const register unsigned short int RP8R1 = 1;
    sbit  RP8R1_bit at RPOR4.B1;
    const register unsigned short int RP8R2 = 2;
    sbit  RP8R2_bit at RPOR4.B2;
    const register unsigned short int RP8R3 = 3;
    sbit  RP8R3_bit at RPOR4.B3;
    const register unsigned short int RP8R4 = 4;
    sbit  RP8R4_bit at RPOR4.B4;
    const register unsigned short int RP8R5 = 5;
    sbit  RP8R5_bit at RPOR4.B5;
    const register unsigned short int RP9R0 = 8;
    sbit  RP9R0_bit at RPOR4.B8;
    const register unsigned short int RP9R1 = 9;
    sbit  RP9R1_bit at RPOR4.B9;
    const register unsigned short int RP9R2 = 10;
    sbit  RP9R2_bit at RPOR4.B10;
    const register unsigned short int RP9R3 = 11;
    sbit  RP9R3_bit at RPOR4.B11;
    const register unsigned short int RP9R4 = 12;
    sbit  RP9R4_bit at RPOR4.B12;
    const register unsigned short int RP9R5 = 13;
    sbit  RP9R5_bit at RPOR4.B13;

sfr unsigned int            RPOR5            absolute 0x3E0;
    const register unsigned short int RP10R0 = 0;
    sbit  RP10R0_bit at RPOR5.B0;
    const register unsigned short int RP10R1 = 1;
    sbit  RP10R1_bit at RPOR5.B1;
    const register unsigned short int RP10R2 = 2;
    sbit  RP10R2_bit at RPOR5.B2;
    const register unsigned short int RP10R3 = 3;
    sbit  RP10R3_bit at RPOR5.B3;
    const register unsigned short int RP10R4 = 4;
    sbit  RP10R4_bit at RPOR5.B4;
    const register unsigned short int RP10R5 = 5;
    sbit  RP10R5_bit at RPOR5.B5;
    const register unsigned short int RP11R0 = 8;
    sbit  RP11R0_bit at RPOR5.B8;
    const register unsigned short int RP11R1 = 9;
    sbit  RP11R1_bit at RPOR5.B9;
    const register unsigned short int RP11R2 = 10;
    sbit  RP11R2_bit at RPOR5.B10;
    const register unsigned short int RP11R3 = 11;
    sbit  RP11R3_bit at RPOR5.B11;
    const register unsigned short int RP11R4 = 12;
    sbit  RP11R4_bit at RPOR5.B12;
    const register unsigned short int RP11R5 = 13;
    sbit  RP11R5_bit at RPOR5.B13;

sfr unsigned int            RPOR6            absolute 0x3E2;
    const register unsigned short int RP12R0 = 0;
    sbit  RP12R0_bit at RPOR6.B0;
    const register unsigned short int RP12R1 = 1;
    sbit  RP12R1_bit at RPOR6.B1;
    const register unsigned short int RP12R2 = 2;
    sbit  RP12R2_bit at RPOR6.B2;
    const register unsigned short int RP12R3 = 3;
    sbit  RP12R3_bit at RPOR6.B3;
    const register unsigned short int RP12R4 = 4;
    sbit  RP12R4_bit at RPOR6.B4;
    const register unsigned short int RP12R5 = 5;
    sbit  RP12R5_bit at RPOR6.B5;
    const register unsigned short int RP13R0 = 8;
    sbit  RP13R0_bit at RPOR6.B8;
    const register unsigned short int RP13R1 = 9;
    sbit  RP13R1_bit at RPOR6.B9;
    const register unsigned short int RP13R2 = 10;
    sbit  RP13R2_bit at RPOR6.B10;
    const register unsigned short int RP13R3 = 11;
    sbit  RP13R3_bit at RPOR6.B11;
    const register unsigned short int RP13R4 = 12;
    sbit  RP13R4_bit at RPOR6.B12;
    const register unsigned short int RP13R5 = 13;
    sbit  RP13R5_bit at RPOR6.B13;

sfr unsigned int            RPOR7            absolute 0x3E4;
    const register unsigned short int RP14R0 = 0;
    sbit  RP14R0_bit at RPOR7.B0;
    const register unsigned short int RP14R1 = 1;
    sbit  RP14R1_bit at RPOR7.B1;
    const register unsigned short int RP14R2 = 2;
    sbit  RP14R2_bit at RPOR7.B2;
    const register unsigned short int RP14R3 = 3;
    sbit  RP14R3_bit at RPOR7.B3;
    const register unsigned short int RP14R4 = 4;
    sbit  RP14R4_bit at RPOR7.B4;
    const register unsigned short int RP14R5 = 5;
    sbit  RP14R5_bit at RPOR7.B5;
    const register unsigned short int RP15R0 = 8;
    sbit  RP15R0_bit at RPOR7.B8;
    const register unsigned short int RP15R1 = 9;
    sbit  RP15R1_bit at RPOR7.B9;
    const register unsigned short int RP15R2 = 10;
    sbit  RP15R2_bit at RPOR7.B10;
    const register unsigned short int RP15R3 = 11;
    sbit  RP15R3_bit at RPOR7.B11;
    const register unsigned short int RP15R4 = 12;
    sbit  RP15R4_bit at RPOR7.B12;
    const register unsigned short int RP15R5 = 13;
    sbit  RP15R5_bit at RPOR7.B13;

sfr unsigned int            RPOR8            absolute 0x3E6;
    const register unsigned short int RP16R0 = 0;
    sbit  RP16R0_bit at RPOR8.B0;
    const register unsigned short int RP16R1 = 1;
    sbit  RP16R1_bit at RPOR8.B1;
    const register unsigned short int RP16R2 = 2;
    sbit  RP16R2_bit at RPOR8.B2;
    const register unsigned short int RP16R3 = 3;
    sbit  RP16R3_bit at RPOR8.B3;
    const register unsigned short int RP16R4 = 4;
    sbit  RP16R4_bit at RPOR8.B4;
    const register unsigned short int RP16R5 = 5;
    sbit  RP16R5_bit at RPOR8.B5;
    const register unsigned short int RP17R0 = 8;
    sbit  RP17R0_bit at RPOR8.B8;
    const register unsigned short int RP17R1 = 9;
    sbit  RP17R1_bit at RPOR8.B9;
    const register unsigned short int RP17R2 = 10;
    sbit  RP17R2_bit at RPOR8.B10;
    const register unsigned short int RP17R3 = 11;
    sbit  RP17R3_bit at RPOR8.B11;
    const register unsigned short int RP17R4 = 12;
    sbit  RP17R4_bit at RPOR8.B12;
    const register unsigned short int RP17R5 = 13;
    sbit  RP17R5_bit at RPOR8.B13;

sfr unsigned int            RPOR9            absolute 0x3E8;
    const register unsigned short int RP18R0 = 0;
    sbit  RP18R0_bit at RPOR9.B0;
    const register unsigned short int RP18R1 = 1;
    sbit  RP18R1_bit at RPOR9.B1;
    const register unsigned short int RP18R2 = 2;
    sbit  RP18R2_bit at RPOR9.B2;
    const register unsigned short int RP18R3 = 3;
    sbit  RP18R3_bit at RPOR9.B3;
    const register unsigned short int RP18R4 = 4;
    sbit  RP18R4_bit at RPOR9.B4;
    const register unsigned short int RP18R5 = 5;
    sbit  RP18R5_bit at RPOR9.B5;
    const register unsigned short int RP19R0 = 8;
    sbit  RP19R0_bit at RPOR9.B8;
    const register unsigned short int RP19R1 = 9;
    sbit  RP19R1_bit at RPOR9.B9;
    const register unsigned short int RP19R2 = 10;
    sbit  RP19R2_bit at RPOR9.B10;
    const register unsigned short int RP19R3 = 11;
    sbit  RP19R3_bit at RPOR9.B11;
    const register unsigned short int RP19R4 = 12;
    sbit  RP19R4_bit at RPOR9.B12;
    const register unsigned short int RP19R5 = 13;
    sbit  RP19R5_bit at RPOR9.B13;

sfr unsigned int            RPOR10           absolute 0x3EA;
    const register unsigned short int RP20R0 = 0;
    sbit  RP20R0_bit at RPOR10.B0;
    const register unsigned short int RP20R1 = 1;
    sbit  RP20R1_bit at RPOR10.B1;
    const register unsigned short int RP20R2 = 2;
    sbit  RP20R2_bit at RPOR10.B2;
    const register unsigned short int RP20R3 = 3;
    sbit  RP20R3_bit at RPOR10.B3;
    const register unsigned short int RP20R4 = 4;
    sbit  RP20R4_bit at RPOR10.B4;
    const register unsigned short int RP20R5 = 5;
    sbit  RP20R5_bit at RPOR10.B5;
    const register unsigned short int RP21R0 = 8;
    sbit  RP21R0_bit at RPOR10.B8;
    const register unsigned short int RP21R1 = 9;
    sbit  RP21R1_bit at RPOR10.B9;
    const register unsigned short int RP21R2 = 10;
    sbit  RP21R2_bit at RPOR10.B10;
    const register unsigned short int RP21R3 = 11;
    sbit  RP21R3_bit at RPOR10.B11;
    const register unsigned short int RP21R4 = 12;
    sbit  RP21R4_bit at RPOR10.B12;
    const register unsigned short int RP21R5 = 13;
    sbit  RP21R5_bit at RPOR10.B13;

sfr unsigned int            RPOR11           absolute 0x3EC;
    const register unsigned short int RP22R0 = 0;
    sbit  RP22R0_bit at RPOR11.B0;
    const register unsigned short int RP22R1 = 1;
    sbit  RP22R1_bit at RPOR11.B1;
    const register unsigned short int RP22R2 = 2;
    sbit  RP22R2_bit at RPOR11.B2;
    const register unsigned short int RP22R3 = 3;
    sbit  RP22R3_bit at RPOR11.B3;
    const register unsigned short int RP22R4 = 4;
    sbit  RP22R4_bit at RPOR11.B4;
    const register unsigned short int RP22R5 = 5;
    sbit  RP22R5_bit at RPOR11.B5;
    const register unsigned short int RP23R0 = 8;
    sbit  RP23R0_bit at RPOR11.B8;
    const register unsigned short int RP23R1 = 9;
    sbit  RP23R1_bit at RPOR11.B9;
    const register unsigned short int RP23R2 = 10;
    sbit  RP23R2_bit at RPOR11.B10;
    const register unsigned short int RP23R3 = 11;
    sbit  RP23R3_bit at RPOR11.B11;
    const register unsigned short int RP23R4 = 12;
    sbit  RP23R4_bit at RPOR11.B12;
    const register unsigned short int RP23R5 = 13;
    sbit  RP23R5_bit at RPOR11.B13;

sfr unsigned int            RPOR12           absolute 0x3EE;
    const register unsigned short int RP24R0 = 0;
    sbit  RP24R0_bit at RPOR12.B0;
    const register unsigned short int RP24R1 = 1;
    sbit  RP24R1_bit at RPOR12.B1;
    const register unsigned short int RP24R2 = 2;
    sbit  RP24R2_bit at RPOR12.B2;
    const register unsigned short int RP24R3 = 3;
    sbit  RP24R3_bit at RPOR12.B3;
    const register unsigned short int RP24R4 = 4;
    sbit  RP24R4_bit at RPOR12.B4;
    const register unsigned short int RP24R5 = 5;
    sbit  RP24R5_bit at RPOR12.B5;
    const register unsigned short int RP25R0 = 8;
    sbit  RP25R0_bit at RPOR12.B8;
    const register unsigned short int RP25R1 = 9;
    sbit  RP25R1_bit at RPOR12.B9;
    const register unsigned short int RP25R2 = 10;
    sbit  RP25R2_bit at RPOR12.B10;
    const register unsigned short int RP25R3 = 11;
    sbit  RP25R3_bit at RPOR12.B11;
    const register unsigned short int RP25R4 = 12;
    sbit  RP25R4_bit at RPOR12.B12;
    const register unsigned short int RP25R5 = 13;
    sbit  RP25R5_bit at RPOR12.B13;

sfr unsigned int   volatile DMACON           absolute 0x450;
    const register unsigned short int PRSSEL = 0;
    sbit  PRSSEL_bit at DMACON.B0;
    const register unsigned short int DMAEN_DMACON = 15;
    sbit  DMAEN_DMACON_bit at DMACON.B15;

sfr unsigned int   volatile DMABUF           absolute 0x452;
sfr unsigned int   volatile DMAL             absolute 0x454;
sfr unsigned int   volatile DMAH             absolute 0x456;
sfr unsigned int   volatile DMACH0           absolute 0x458;
    const register unsigned short int CHEN = 0;
    sbit  CHEN_bit at DMACH0.B0;
    const register unsigned short int SIZE = 1;
    sbit  SIZE_bit at DMACH0.B1;
    const register unsigned short int TRMODE0 = 2;
    sbit  TRMODE0_bit at DMACH0.B2;
    const register unsigned short int TRMODE1 = 3;
    sbit  TRMODE1_bit at DMACH0.B3;
    const register unsigned short int DAMODE0 = 4;
    sbit  DAMODE0_bit at DMACH0.B4;
    const register unsigned short int DAMODE1 = 5;
    sbit  DAMODE1_bit at DMACH0.B5;
    const register unsigned short int SAMODE0 = 6;
    sbit  SAMODE0_bit at DMACH0.B6;
    const register unsigned short int SAMODE1 = 7;
    sbit  SAMODE1_bit at DMACH0.B7;
    const register unsigned short int CHREQ = 8;
    sbit  CHREQ_bit at DMACH0.B8;
    const register unsigned short int RELOAD = 9;
    sbit  RELOAD_bit at DMACH0.B9;
    const register unsigned short int NULLW = 10;
    sbit  NULLW_bit at DMACH0.B10;

sfr unsigned int   volatile DMAINT0          absolute 0x45A;
    const register unsigned short int HALFEN = 0;
    sbit  HALFEN_bit at DMAINT0.B0;
    const register unsigned short int OVRUNIF = 3;
    sbit  OVRUNIF_bit at DMAINT0.B3;
    const register unsigned short int HALFIF = 4;
    sbit  HALFIF_bit at DMAINT0.B4;
    const register unsigned short int DONEIF = 5;
    sbit  DONEIF_bit at DMAINT0.B5;
    const register unsigned short int LOWIF = 6;
    sbit  LOWIF_bit at DMAINT0.B6;
    const register unsigned short int HIGHIF = 7;
    sbit  HIGHIF_bit at DMAINT0.B7;
    const register unsigned short int CHSEL0 = 8;
    sbit  CHSEL0_bit at DMAINT0.B8;
    const register unsigned short int CHSEL1 = 9;
    sbit  CHSEL1_bit at DMAINT0.B9;
    const register unsigned short int CHSEL2 = 10;
    sbit  CHSEL2_bit at DMAINT0.B10;
    const register unsigned short int CHSEL3 = 11;
    sbit  CHSEL3_bit at DMAINT0.B11;
    const register unsigned short int CHSEL4 = 12;
    sbit  CHSEL4_bit at DMAINT0.B12;
    const register unsigned short int CHSEL5 = 13;
    sbit  CHSEL5_bit at DMAINT0.B13;
    const register unsigned short int DBUFWF = 15;
    sbit  DBUFWF_bit at DMAINT0.B15;

sfr unsigned int   volatile DMASRC0          absolute 0x45C;
sfr unsigned int   volatile DMADST0          absolute 0x45E;
sfr unsigned int   volatile DMACNT0          absolute 0x460;
sfr unsigned int   volatile DMACH1           absolute 0x462;
sfr unsigned int   volatile DMAINT1          absolute 0x464;
sfr unsigned int   volatile DMASRC1          absolute 0x466;
sfr unsigned int   volatile DMADST1          absolute 0x468;
sfr unsigned int   volatile DMACNT1          absolute 0x46A;
sfr unsigned int   volatile DMACH2           absolute 0x46C;
sfr unsigned int   volatile DMAINT2          absolute 0x46E;
sfr unsigned int   volatile DMASRC2          absolute 0x470;
sfr unsigned int   volatile DMADST2          absolute 0x472;
sfr unsigned int   volatile DMACNT2          absolute 0x474;
sfr unsigned int   volatile DMACH3           absolute 0x476;
sfr unsigned int   volatile DMAINT3          absolute 0x478;
sfr unsigned int   volatile DMASRC3          absolute 0x47A;
sfr unsigned int   volatile DMADST3          absolute 0x47C;
sfr unsigned int   volatile DMACNT3          absolute 0x47E;
sfr unsigned int   volatile DMACH4           absolute 0x480;
sfr unsigned int   volatile DMAINT4          absolute 0x482;
sfr unsigned int   volatile DMASRC4          absolute 0x484;
sfr unsigned int   volatile DMADST4          absolute 0x486;
sfr unsigned int   volatile DMACNT4          absolute 0x488;
sfr unsigned int   volatile DMACH5           absolute 0x48A;
sfr unsigned int   volatile DMAINT5          absolute 0x48C;
sfr unsigned int   volatile DMASRC5          absolute 0x48E;
sfr unsigned int   volatile DMADST5          absolute 0x490;
sfr unsigned int   volatile DMACNT5          absolute 0x492;
sfr unsigned int   volatile U1MODE           absolute 0x500;
    const register unsigned short int STSEL = 0;
    sbit  STSEL_bit at U1MODE.B0;
    const register unsigned short int PDSEL0 = 1;
    sbit  PDSEL0_bit at U1MODE.B1;
    const register unsigned short int PDSEL1 = 2;
    sbit  PDSEL1_bit at U1MODE.B2;
    const register unsigned short int BRGH = 3;
    sbit  BRGH_bit at U1MODE.B3;
    const register unsigned short int URXINV = 4;
    sbit  URXINV_bit at U1MODE.B4;
    const register unsigned short int ABAUD = 5;
    sbit  ABAUD_bit at U1MODE.B5;
    const register unsigned short int LPBACK = 6;
    sbit  LPBACK_bit at U1MODE.B6;
    const register unsigned short int WAKE = 7;
    sbit  WAKE_bit at U1MODE.B7;
    const register unsigned short int UEN0 = 8;
    sbit  UEN0_bit at U1MODE.B8;
    const register unsigned short int UEN1 = 9;
    sbit  UEN1_bit at U1MODE.B9;
    const register unsigned short int RTSMD = 11;
    sbit  RTSMD_bit at U1MODE.B11;
    const register unsigned short int IREN = 12;
    sbit  IREN_bit at U1MODE.B12;
    const register unsigned short int USIDL = 13;
    sbit  USIDL_bit at U1MODE.B13;
    const register unsigned short int UARTEN = 15;
    sbit  UARTEN_bit at U1MODE.B15;
    const register unsigned short int RXINV = 4;
    sbit  RXINV_bit at U1MODE.B4;

sfr unsigned int   volatile U1STA            absolute 0x502;
    const register unsigned short int URXDA = 0;
    sbit  URXDA_bit at U1STA.B0;
    const register unsigned short int OERR = 1;
    sbit  OERR_bit at U1STA.B1;
    const register unsigned short int FERR = 2;
    sbit  FERR_bit at U1STA.B2;
    const register unsigned short int PERR = 3;
    sbit  PERR_bit at U1STA.B3;
    const register unsigned short int RIDLE = 4;
    sbit  RIDLE_bit at U1STA.B4;
    const register unsigned short int ADDEN = 5;
    sbit  ADDEN_bit at U1STA.B5;
    const register unsigned short int URXISEL0 = 6;
    sbit  URXISEL0_bit at U1STA.B6;
    const register unsigned short int URXISEL1 = 7;
    sbit  URXISEL1_bit at U1STA.B7;
    const register unsigned short int TRMT = 8;
    sbit  TRMT_bit at U1STA.B8;
    const register unsigned short int UTXBF = 9;
    sbit  UTXBF_bit at U1STA.B9;
    const register unsigned short int UTXEN = 10;
    sbit  UTXEN_bit at U1STA.B10;
    const register unsigned short int UTXBRK = 11;
    sbit  UTXBRK_bit at U1STA.B11;
    const register unsigned short int URXEN = 12;
    sbit  URXEN_bit at U1STA.B12;
    const register unsigned short int UTXISEL0 = 13;
    sbit  UTXISEL0_bit at U1STA.B13;
    const register unsigned short int UTXINV = 14;
    sbit  UTXINV_bit at U1STA.B14;
    const register unsigned short int UTXISEL1 = 15;
    sbit  UTXISEL1_bit at U1STA.B15;

sfr unsigned int            U1TXREG          absolute 0x504;
    const register unsigned short int LAST = 15;
    sbit  LAST_bit at U1TXREG.B15;

sfr unsigned int   volatile U1RXREG          absolute 0x506;
sfr unsigned int            U1BRG            absolute 0x508;
sfr unsigned int   volatile U1ADMD           absolute 0x50A;
    const register unsigned short int ADMADDR0 = 0;
    sbit  ADMADDR0_bit at U1ADMD.B0;
    const register unsigned short int ADMADDR1 = 1;
    sbit  ADMADDR1_bit at U1ADMD.B1;
    const register unsigned short int ADMADDR2 = 2;
    sbit  ADMADDR2_bit at U1ADMD.B2;
    const register unsigned short int ADMADDR3 = 3;
    sbit  ADMADDR3_bit at U1ADMD.B3;
    const register unsigned short int ADMADDR4 = 4;
    sbit  ADMADDR4_bit at U1ADMD.B4;
    const register unsigned short int ADMADDR5 = 5;
    sbit  ADMADDR5_bit at U1ADMD.B5;
    const register unsigned short int ADMADDR6 = 6;
    sbit  ADMADDR6_bit at U1ADMD.B6;
    const register unsigned short int ADMADDR7 = 7;
    sbit  ADMADDR7_bit at U1ADMD.B7;
    const register unsigned short int ADMMASK0 = 8;
    sbit  ADMMASK0_bit at U1ADMD.B8;
    const register unsigned short int ADMMASK1 = 9;
    sbit  ADMMASK1_bit at U1ADMD.B9;
    const register unsigned short int ADMMASK2 = 10;
    sbit  ADMMASK2_bit at U1ADMD.B10;
    const register unsigned short int ADMMASK3 = 11;
    sbit  ADMMASK3_bit at U1ADMD.B11;
    const register unsigned short int ADMMASK4 = 12;
    sbit  ADMMASK4_bit at U1ADMD.B12;
    const register unsigned short int ADMMASK5 = 13;
    sbit  ADMMASK5_bit at U1ADMD.B13;
    const register unsigned short int ADMMASK6 = 14;
    sbit  ADMMASK6_bit at U1ADMD.B14;
    const register unsigned short int ADMMASK7 = 15;
    sbit  ADMMASK7_bit at U1ADMD.B15;

sfr unsigned int   volatile U1SCCON          absolute 0x50C;
    const register unsigned short int SCEN = 0;
    sbit  SCEN_bit at U1SCCON.B0;
    const register unsigned short int PTRCL = 1;
    sbit  PTRCL_bit at U1SCCON.B1;
    const register unsigned short int T0PD = 2;
    sbit  T0PD_bit at U1SCCON.B2;
    const register unsigned short int CONV = 3;
    sbit  CONV_bit at U1SCCON.B3;
    const register unsigned short int TXRPT0 = 4;
    sbit  TXRPT0_bit at U1SCCON.B4;
    const register unsigned short int TXRPT1 = 5;
    sbit  TXRPT1_bit at U1SCCON.B5;

sfr unsigned int   volatile U1SCINT          absolute 0x50E;
    const register unsigned short int GTCIE = 0;
    sbit  GTCIE_bit at U1SCINT.B0;
    const register unsigned short int WTCIE = 1;
    sbit  WTCIE_bit at U1SCINT.B1;
    const register unsigned short int TXRPTIE = 4;
    sbit  TXRPTIE_bit at U1SCINT.B4;
    const register unsigned short int RXRPTIE = 5;
    sbit  RXRPTIE_bit at U1SCINT.B5;
    const register unsigned short int PARIE = 6;
    sbit  PARIE_bit at U1SCINT.B6;
    const register unsigned short int GTCIF = 8;
    sbit  GTCIF_bit at U1SCINT.B8;
    const register unsigned short int WTCIF = 9;
    sbit  WTCIF_bit at U1SCINT.B9;
    const register unsigned short int TXRPTIF = 12;
    sbit  TXRPTIF_bit at U1SCINT.B12;
    const register unsigned short int RXRPTIF = 13;
    sbit  RXRPTIF_bit at U1SCINT.B13;

sfr unsigned int   volatile U1GTC            absolute 0x510;
    const register unsigned short int GTC0 = 0;
    sbit  GTC0_bit at U1GTC.B0;
    const register unsigned short int GTC1 = 1;
    sbit  GTC1_bit at U1GTC.B1;
    const register unsigned short int GTC2 = 2;
    sbit  GTC2_bit at U1GTC.B2;
    const register unsigned short int GTC3 = 3;
    sbit  GTC3_bit at U1GTC.B3;
    const register unsigned short int GTC4 = 4;
    sbit  GTC4_bit at U1GTC.B4;
    const register unsigned short int GTC5 = 5;
    sbit  GTC5_bit at U1GTC.B5;
    const register unsigned short int GTC6 = 6;
    sbit  GTC6_bit at U1GTC.B6;
    const register unsigned short int GTC7 = 7;
    sbit  GTC7_bit at U1GTC.B7;
    const register unsigned short int GTC8 = 8;
    sbit  GTC8_bit at U1GTC.B8;

sfr unsigned int   volatile U1WTCL           absolute 0x512;
    const register unsigned short int WTC0 = 0;
    sbit  WTC0_bit at U1WTCL.B0;
    const register unsigned short int WTC1 = 1;
    sbit  WTC1_bit at U1WTCL.B1;
    const register unsigned short int WTC2 = 2;
    sbit  WTC2_bit at U1WTCL.B2;
    const register unsigned short int WTC3 = 3;
    sbit  WTC3_bit at U1WTCL.B3;
    const register unsigned short int WTC4 = 4;
    sbit  WTC4_bit at U1WTCL.B4;
    const register unsigned short int WTC5 = 5;
    sbit  WTC5_bit at U1WTCL.B5;
    const register unsigned short int WTC6 = 6;
    sbit  WTC6_bit at U1WTCL.B6;
    const register unsigned short int WTC7 = 7;
    sbit  WTC7_bit at U1WTCL.B7;
    const register unsigned short int WTC8 = 8;
    sbit  WTC8_bit at U1WTCL.B8;
    const register unsigned short int WTC9 = 9;
    sbit  WTC9_bit at U1WTCL.B9;
    const register unsigned short int WTC10 = 10;
    sbit  WTC10_bit at U1WTCL.B10;
    const register unsigned short int WTC11 = 11;
    sbit  WTC11_bit at U1WTCL.B11;
    const register unsigned short int WTC12 = 12;
    sbit  WTC12_bit at U1WTCL.B12;
    const register unsigned short int WTC13 = 13;
    sbit  WTC13_bit at U1WTCL.B13;
    const register unsigned short int WTC14 = 14;
    sbit  WTC14_bit at U1WTCL.B14;
    const register unsigned short int WTC15 = 15;
    sbit  WTC15_bit at U1WTCL.B15;

sfr unsigned int   volatile U1WTCH           absolute 0x514;
    const register unsigned short int WTC16 = 0;
    sbit  WTC16_bit at U1WTCH.B0;
    const register unsigned short int WTC17 = 1;
    sbit  WTC17_bit at U1WTCH.B1;
    const register unsigned short int WTC18 = 2;
    sbit  WTC18_bit at U1WTCH.B2;
    const register unsigned short int WTC19 = 3;
    sbit  WTC19_bit at U1WTCH.B3;
    const register unsigned short int WTC20 = 4;
    sbit  WTC20_bit at U1WTCH.B4;
    const register unsigned short int WTC21 = 5;
    sbit  WTC21_bit at U1WTCH.B5;
    const register unsigned short int WTC22 = 6;
    sbit  WTC22_bit at U1WTCH.B6;
    const register unsigned short int WTC23 = 7;
    sbit  WTC23_bit at U1WTCH.B7;

sfr unsigned int   volatile U2MODE           absolute 0x516;
sfr unsigned int   volatile U2STA            absolute 0x518;
sfr unsigned int            U2TXREG          absolute 0x51A;
sfr unsigned int   volatile U2RXREG          absolute 0x51C;
sfr unsigned int            U2BRG            absolute 0x51E;
sfr unsigned int   volatile U2ADMD           absolute 0x520;
sfr unsigned int   volatile U2SCCON          absolute 0x522;
sfr unsigned int   volatile U2SCINT          absolute 0x524;
sfr unsigned int   volatile U2GTC            absolute 0x526;
sfr unsigned int   volatile U2WTCL           absolute 0x528;
sfr unsigned int   volatile U2WTCH           absolute 0x52A;
sfr unsigned int   volatile U3MODE           absolute 0x52C;
sfr unsigned int   volatile U3STA            absolute 0x52E;
sfr unsigned int            U3TXREG          absolute 0x530;
sfr unsigned int   volatile U3RXREG          absolute 0x532;
sfr unsigned int            U3BRG            absolute 0x534;
sfr unsigned int   volatile U3ADMD           absolute 0x536;
sfr unsigned int   volatile U4MODE           absolute 0x538;
sfr unsigned int   volatile U4STA            absolute 0x53A;
sfr unsigned int            U4TXREG          absolute 0x53C;
sfr unsigned int   volatile U4RXREG          absolute 0x53E;
sfr unsigned int            U4BRG            absolute 0x540;
sfr unsigned int   volatile U4ADMD           absolute 0x542;
sfr unsigned int   volatile NVMCON           absolute 0x760;
    const register unsigned short int NVMOP0 = 0;
    sbit  NVMOP0_bit at NVMCON.B0;
    const register unsigned short int NVMOP1 = 1;
    sbit  NVMOP1_bit at NVMCON.B1;
    const register unsigned short int NVMOP2 = 2;
    sbit  NVMOP2_bit at NVMCON.B2;
    const register unsigned short int NVMOP3 = 3;
    sbit  NVMOP3_bit at NVMCON.B3;
    const register unsigned short int ERASE_ = 6;
    sbit  ERASE_bit at NVMCON.B6;
    const register unsigned short int WRERR = 13;
    sbit  WRERR_bit at NVMCON.B13;
    const register unsigned short int WREN = 14;
    sbit  WREN_bit at NVMCON.B14;
    const register unsigned short int WR = 15;
    sbit  WR_bit at NVMCON.B15;

sfr unsigned int            NVMKEY           absolute 0x766;

// Start of structures implementation

typedef struct tagDSRPAGBITS {
  union {
    struct {
      unsigned DSRPAG:10;
    };
  };
} typeDSRPAGBITS;
sfr volatile typeDSRPAGBITS DSRPAGbits absolute 0x32;

typedef struct tagDSWPAGBITS {
  union {
    struct {
      unsigned DSWPAG:9;
    };
  };
} typeDSWPAGBITS;
sfr volatile typeDSWPAGBITS DSWPAGbits absolute 0x34;

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
sfr volatile typeSRBITS SRbits absolute 0x42;

typedef struct tagCORCONBITS {
  union {
    struct {
      unsigned :3;
      unsigned IPL3:1;
    };
  };
} typeCORCONBITS;
sfr volatile typeCORCONBITS CORCONbits absolute 0x44;

typedef struct tagDISICNTBITS {
  union {
    struct {
      unsigned DISICNT:14;
    };
  };
} typeDISICNTBITS;
sfr volatile typeDISICNTBITS DISICNTbits absolute 0x52;

typedef struct tagTBLPAGBITS {
  union {
    struct {
      unsigned TBLPAG:8;
    };
  };
} typeTBLPAGBITS;
sfr volatile typeTBLPAGBITS TBLPAGbits absolute 0x54;

typedef struct tagCNPD1BITS {
  union {
    struct {
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
    };
  };
} typeCNPD1BITS;
sfr volatile typeCNPD1BITS CNPD1bits absolute 0x56;

typedef struct tagCNPD2BITS {
  union {
    struct {
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
    };
  };
} typeCNPD2BITS;
sfr volatile typeCNPD2BITS CNPD2bits absolute 0x58;

typedef struct tagCNPD3BITS {
  union {
    struct {
      unsigned :1;
      unsigned CN33PDE:1;
      unsigned CN34PDE:1;
      unsigned CN35PDE:1;
      unsigned CN36PDE:1;
    };
  };
} typeCNPD3BITS;
sfr volatile typeCNPD3BITS CNPD3bits absolute 0x5A;

typedef struct tagCNEN1BITS {
  union {
    struct {
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
    };
  };
} typeCNEN1BITS;
sfr volatile typeCNEN1BITS CNEN1bits absolute 0x62;

typedef struct tagCNEN2BITS {
  union {
    struct {
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
    };
  };
} typeCNEN2BITS;
sfr volatile typeCNEN2BITS CNEN2bits absolute 0x64;

typedef struct tagCNEN3BITS {
  union {
    struct {
      unsigned :1;
      unsigned CN33IE:1;
      unsigned CN34IE:1;
      unsigned CN35IE:1;
      unsigned CN36IE:1;
    };
  };
} typeCNEN3BITS;
sfr volatile typeCNEN3BITS CNEN3bits absolute 0x66;

typedef struct tagCNPU1BITS {
  union {
    struct {
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
    };
  };
} typeCNPU1BITS;
sfr volatile typeCNPU1BITS CNPU1bits absolute 0x6E;

typedef struct tagCNPU2BITS {
  union {
    struct {
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
    };
  };
} typeCNPU2BITS;
sfr volatile typeCNPU2BITS CNPU2bits absolute 0x70;

typedef struct tagCNPU3BITS {
  union {
    struct {
      unsigned :1;
      unsigned CN33PUE:1;
      unsigned CN34PUE:1;
      unsigned CN35PUE:1;
      unsigned CN36PUE:1;
    };
  };
} typeCNPU3BITS;
sfr volatile typeCNPU3BITS CNPU3bits absolute 0x72;

typedef struct tagINTCON1BITS {
  union {
    struct {
      unsigned :1;
      unsigned OSCFAIL:1;
      unsigned STKERR:1;
      unsigned ADDRERR:1;
      unsigned MATHERR:1;
      unsigned :10;
      unsigned NSTDIS:1;
    };
  };
} typeINTCON1BITS;
sfr volatile typeINTCON1BITS INTCON1bits absolute 0x80;

typedef struct tagINTCON2BITS {
  union {
    struct {
      unsigned INT0EP:1;
      unsigned INT1EP:1;
      unsigned INT2EP:1;
      unsigned INT3EP:1;
      unsigned INT4EP:1;
      unsigned :9;
      unsigned DISI:1;
      unsigned ALTIVT:1;
    };
  };
} typeINTCON2BITS;
sfr volatile typeINTCON2BITS INTCON2bits absolute 0x82;

typedef struct tagIFS0BITS {
  union {
    struct {
      unsigned INT0IF:1;
      unsigned IC1IF:1;
      unsigned OC1IF:1;
      unsigned T1IF:1;
      unsigned DMA0IF:1;
      unsigned IC2IF:1;
      unsigned OC2IF:1;
      unsigned T2IF:1;
      unsigned T3IF:1;
      unsigned SPI1IF:1;
      unsigned SPI1TXIF:1;
      unsigned U1RXIF:1;
      unsigned U1TXIF:1;
      unsigned AD1IF:1;
      unsigned DMA1IF:1;
    };
  };
} typeIFS0BITS;
sfr volatile typeIFS0BITS IFS0bits absolute 0x84;

typedef struct tagIFS1BITS {
  union {
    struct {
      unsigned SI2C1IF:1;
      unsigned MI2C1IF:1;
      unsigned CMIF:1;
      unsigned CNIF:1;
      unsigned INT1IF:1;
      unsigned :3;
      unsigned DMA2IF:1;
      unsigned OC3IF:1;
      unsigned OC4IF:1;
      unsigned T4IF:1;
      unsigned T5IF:1;
      unsigned INT2IF:1;
      unsigned U2RXIF:1;
      unsigned U2TXIF:1;
    };
  };
} typeIFS1BITS;
sfr volatile typeIFS1BITS IFS1bits absolute 0x86;

typedef struct tagIFS2BITS {
  union {
    struct {
      unsigned SPI2IF:1;
      unsigned SPI2TXIF:1;
      unsigned CRYFREEIF:1;
      unsigned CRYROLLIF:1;
      unsigned DMA3IF:1;
      unsigned IC3IF:1;
      unsigned IC4IF:1;
      unsigned IC5IF:1;
      unsigned IC6IF:1;
      unsigned OC5IF:1;
      unsigned OC6IF:1;
      unsigned :2;
      unsigned PMPIF:1;
      unsigned DMA4IF:1;
    };
  };
} typeIFS2BITS;
sfr volatile typeIFS2BITS IFS2bits absolute 0x88;

typedef struct tagIFS3BITS {
  union {
    struct {
      unsigned :1;
      unsigned SI2C2IF:1;
      unsigned MI2C2IF:1;
      unsigned :2;
      unsigned INT3IF:1;
      unsigned INT4IF:1;
      unsigned CRYDNIF:1;
      unsigned KEYSTRIF:1;
      unsigned :1;
      unsigned SPI1RXIF:1;
      unsigned SPI2RXIF:1;
      unsigned SPI3RXIF:1;
      unsigned DMA5IF:1;
      unsigned RTCIF:1;
    };
  };
} typeIFS3BITS;
sfr volatile typeIFS3BITS IFS3bits absolute 0x8A;

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
    };
    struct {
      unsigned :8;
      unsigned HLVDIF:1;
    };
  };
} typeIFS4BITS;
sfr volatile typeIFS4BITS IFS4bits absolute 0x8C;

typedef struct tagIFS5BITS {
  union {
    struct {
      unsigned :1;
      unsigned U3ERIF:1;
      unsigned U3RXIF:1;
      unsigned U3TXIF:1;
      unsigned I2C1BCIF:1;
      unsigned I2C2BCIF:1;
      unsigned :1;
      unsigned U4ERIF:1;
      unsigned U4RXIF:1;
      unsigned U4TXIF:1;
      unsigned SPI3IF:1;
      unsigned SPI3TXIF:1;
    };
  };
} typeIFS5BITS;
sfr volatile typeIFS5BITS IFS5bits absolute 0x8E;

typedef struct tagIFS6BITS {
  union {
    struct {
      unsigned :10;
      unsigned FSTIF:1;
    };
  };
} typeIFS6BITS;
sfr volatile typeIFS6BITS IFS6bits absolute 0x90;

typedef struct tagIFS7BITS {
  union {
    struct {
      unsigned :5;
      unsigned JTAGIF:1;
    };
  };
} typeIFS7BITS;
sfr volatile typeIFS7BITS IFS7bits absolute 0x92;

typedef struct tagIEC0BITS {
  union {
    struct {
      unsigned INT0IE:1;
      unsigned IC1IE:1;
      unsigned OC1IE:1;
      unsigned T1IE:1;
      unsigned DMA0IE:1;
      unsigned IC2IE:1;
      unsigned OC2IE:1;
      unsigned T2IE:1;
      unsigned T3IE:1;
      unsigned SPI1IE:1;
      unsigned SPI1TXIE:1;
      unsigned U1RXIE:1;
      unsigned U1TXIE:1;
      unsigned AD1IE:1;
      unsigned DMA1IE:1;
    };
  };
} typeIEC0BITS;
sfr volatile typeIEC0BITS IEC0bits absolute 0x94;

typedef struct tagIEC1BITS {
  union {
    struct {
      unsigned SI2C1IE:1;
      unsigned MI2C1IE:1;
      unsigned CMIE:1;
      unsigned CNIE:1;
      unsigned INT1IE:1;
      unsigned :3;
      unsigned DMA2IE:1;
      unsigned OC3IE:1;
      unsigned OC4IE:1;
      unsigned T4IE:1;
      unsigned T5IE:1;
      unsigned INT2IE:1;
      unsigned U2RXIE:1;
      unsigned U2TXIE:1;
    };
  };
} typeIEC1BITS;
sfr volatile typeIEC1BITS IEC1bits absolute 0x96;

typedef struct tagIEC2BITS {
  union {
    struct {
      unsigned SPI2IE:1;
      unsigned SPI2TXIE:1;
      unsigned CRYFREEIE:1;
      unsigned CRYROLLIE:1;
      unsigned DMA3IE:1;
      unsigned IC3IE:1;
      unsigned IC4IE:1;
      unsigned IC5IE:1;
      unsigned IC6IE:1;
      unsigned OC5IE:1;
      unsigned OC6IE:1;
      unsigned :2;
      unsigned PMPIE:1;
      unsigned DMA4IE:1;
    };
  };
} typeIEC2BITS;
sfr volatile typeIEC2BITS IEC2bits absolute 0x98;

typedef struct tagIEC3BITS {
  union {
    struct {
      unsigned :1;
      unsigned SI2C2IE:1;
      unsigned MI2C2IE:1;
      unsigned :2;
      unsigned INT3IE:1;
      unsigned INT4IE:1;
      unsigned CRYDNIE:1;
      unsigned KEYSTRIE:1;
      unsigned :1;
      unsigned SPI1RXIE:1;
      unsigned SPI2RXIE:1;
      unsigned SPI3RXIE:1;
      unsigned DMA5IE:1;
      unsigned RTCIE:1;
    };
  };
} typeIEC3BITS;
sfr volatile typeIEC3BITS IEC3bits absolute 0x9A;

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
    };
    struct {
      unsigned :8;
      unsigned HLVDIE:1;
    };
  };
} typeIEC4BITS;
sfr volatile typeIEC4BITS IEC4bits absolute 0x9C;

typedef struct tagIEC5BITS {
  union {
    struct {
      unsigned :1;
      unsigned U3ERIE:1;
      unsigned U3RXIE:1;
      unsigned U3TXIE:1;
      unsigned I2C1BCIE:1;
      unsigned I2C2BCIE:1;
      unsigned :1;
      unsigned U4ERIE:1;
      unsigned U4RXIE:1;
      unsigned U4TXIE:1;
      unsigned SPI3IE:1;
      unsigned SPI3TXIE:1;
    };
  };
} typeIEC5BITS;
sfr volatile typeIEC5BITS IEC5bits absolute 0x9E;

typedef struct tagIEC6BITS {
  union {
    struct {
      unsigned :10;
      unsigned FSTIE:1;
    };
  };
} typeIEC6BITS;
sfr volatile typeIEC6BITS IEC6bits absolute 0xA0;

typedef struct tagIEC7BITS {
  union {
    struct {
      unsigned :5;
      unsigned JTAGIE:1;
    };
  };
} typeIEC7BITS;
sfr volatile typeIEC7BITS IEC7bits absolute 0xA2;

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
sfr volatile typeIPC0BITS IPC0bits absolute 0xA4;

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
sfr volatile typeIPC1BITS IPC1bits absolute 0xA6;

typedef struct tagIPC2BITS {
  union {
    struct {
      unsigned T3IP:3;
      unsigned :1;
      unsigned SPI1IP:3;
      unsigned :1;
      unsigned SPI1TXIP:3;
      unsigned :1;
      unsigned U1RXIP:3;
    };
    struct {
      unsigned T3IP0:1;
      unsigned T3IP1:1;
      unsigned T3IP2:1;
      unsigned :1;
      unsigned SPI1IP0:1;
      unsigned SPI1IP1:1;
      unsigned SPI1IP2:1;
      unsigned :1;
      unsigned SPI1TXIP0:1;
      unsigned SPI1TXIP1:1;
      unsigned SPI1TXIP2:1;
      unsigned :1;
      unsigned U1RXIP0:1;
      unsigned U1RXIP1:1;
      unsigned U1RXIP2:1;
    };
  };
} typeIPC2BITS;
sfr volatile typeIPC2BITS IPC2bits absolute 0xA8;

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
sfr volatile typeIPC3BITS IPC3bits absolute 0xAA;

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
sfr volatile typeIPC4BITS IPC4bits absolute 0xAC;

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
sfr volatile typeIPC5BITS IPC5bits absolute 0xAE;

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
sfr volatile typeIPC6BITS IPC6bits absolute 0xB0;

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
sfr volatile typeIPC7BITS IPC7bits absolute 0xB2;

typedef struct tagIPC8BITS {
  union {
    struct {
      unsigned SPI2IP:3;
      unsigned :1;
      unsigned SPI2TXIP:3;
      unsigned :1;
      unsigned CRYFREEIP:3;
      unsigned :1;
      unsigned CRYROLLIP:3;
    };
    struct {
      unsigned SPI2IP0:1;
      unsigned SPI2IP1:1;
      unsigned SPI2IP2:1;
      unsigned :1;
      unsigned SPI2TXIP0:1;
      unsigned SPI2TXIP1:1;
      unsigned SPI2TXIP2:1;
      unsigned :1;
      unsigned CRYFREEIP0:1;
      unsigned CRYFREEIP1:1;
      unsigned CRYFREEIP2:1;
      unsigned :1;
      unsigned CRYROLLIP0:1;
      unsigned CRYROLLIP1:1;
      unsigned CRYROLLIP2:1;
    };
  };
} typeIPC8BITS;
sfr volatile typeIPC8BITS IPC8bits absolute 0xB4;

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
sfr volatile typeIPC9BITS IPC9bits absolute 0xB6;

typedef struct tagIPC10BITS {
  union {
    struct {
      unsigned IC6IP:3;
      unsigned :1;
      unsigned OC5IP:3;
      unsigned :1;
      unsigned OC6IP:3;
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
    };
  };
} typeIPC10BITS;
sfr volatile typeIPC10BITS IPC10bits absolute 0xB8;

typedef struct tagIPC11BITS {
  union {
    struct {
      unsigned :4;
      unsigned PMPIP:3;
      unsigned :1;
      unsigned DMA4IP:3;
    };
    struct {
      unsigned :4;
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
sfr volatile typeIPC11BITS IPC11bits absolute 0xBA;

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
sfr volatile typeIPC12BITS IPC12bits absolute 0xBC;

typedef struct tagIPC13BITS {
  union {
    struct {
      unsigned :4;
      unsigned INT3IP:3;
      unsigned :1;
      unsigned INT4IP:3;
      unsigned :1;
      unsigned CRYDNIP:3;
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
      unsigned :1;
      unsigned CRYDNIP0:1;
      unsigned CRYDNIP1:1;
      unsigned CRYDNIP2:1;
    };
  };
} typeIPC13BITS;
sfr volatile typeIPC13BITS IPC13bits absolute 0xBE;

typedef struct tagIPC14BITS {
  union {
    struct {
      unsigned KEYSTRIP:3;
      unsigned :5;
      unsigned SPI1RXIP:3;
      unsigned :1;
      unsigned SPI2RXIP:3;
    };
    struct {
      unsigned KEYSTRIP0:1;
      unsigned KEYSTRIP1:1;
      unsigned KEYSTRIP2:1;
      unsigned :5;
      unsigned SPI1RXIP0:1;
      unsigned SPI1RXIP1:1;
      unsigned SPI1RXIP2:1;
      unsigned :1;
      unsigned SPI2RXIP0:1;
      unsigned SPI2RXIP1:1;
      unsigned SPI2RXIP2:1;
    };
  };
} typeIPC14BITS;
sfr volatile typeIPC14BITS IPC14bits absolute 0xC0;

typedef struct tagIPC15BITS {
  union {
    struct {
      unsigned SPI3RXIP:3;
      unsigned :1;
      unsigned DMA5IP:3;
      unsigned :1;
      unsigned RTCIP:3;
    };
    struct {
      unsigned SPI3RXIP0:1;
      unsigned SPI3RXIP1:1;
      unsigned SPI3RXIP2:1;
      unsigned :1;
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
sfr volatile typeIPC15BITS IPC15bits absolute 0xC2;

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
sfr volatile typeIPC16BITS IPC16bits absolute 0xC4;

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
      unsigned HLVDIP:3;
    };
    struct {
      unsigned HLVDIP0:1;
      unsigned HLVDIP1:1;
      unsigned HLVDIP2:1;
    };
  };
} typeIPC18BITS;
sfr volatile typeIPC18BITS IPC18bits absolute 0xC8;

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
sfr volatile typeIPC19BITS IPC19bits absolute 0xCA;

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
sfr volatile typeIPC20BITS IPC20bits absolute 0xCC;

typedef struct tagIPC21BITS {
  union {
    struct {
      unsigned I2C1BCIP:3;
      unsigned :1;
      unsigned I2C2BCIP:3;
      unsigned :5;
      unsigned U4ERIP:3;
    };
    struct {
      unsigned :12;
      unsigned U4ERIP0:1;
      unsigned U4ERIP1:1;
      unsigned U4ERIP2:1;
    };
  };
} typeIPC21BITS;
sfr volatile typeIPC21BITS IPC21bits absolute 0xCE;

typedef struct tagIPC22BITS {
  union {
    struct {
      unsigned U4RXIP:3;
      unsigned :1;
      unsigned U4TXIP:3;
      unsigned :1;
      unsigned SPI3IP:3;
      unsigned :1;
      unsigned SPI3TXIP:3;
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
      unsigned SPI3IP0:1;
      unsigned SPI3IP1:1;
      unsigned SPI3IP2:1;
      unsigned :1;
      unsigned SPI3TXIP0:1;
      unsigned SPI3TXIP1:1;
      unsigned SPI3TXIP2:1;
    };
  };
} typeIPC22BITS;
sfr volatile typeIPC22BITS IPC22bits absolute 0xD0;

typedef struct tagIPC26BITS {
  union {
    struct {
      unsigned :8;
      unsigned FSTIP:3;
    };
    struct {
      unsigned :8;
      unsigned FSTIP0:1;
      unsigned FSTIP1:1;
      unsigned FSTIP2:1;
    };
  };
} typeIPC26BITS;
sfr volatile typeIPC26BITS IPC26bits absolute 0xD8;

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
sfr volatile typeIPC29BITS IPC29bits absolute 0xDE;

typedef struct tagINTTREGBITS {
  union {
    struct {
      unsigned VECNUM:8;
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
      unsigned VECNUM7:1;
      unsigned ILR0:1;
      unsigned ILR1:1;
      unsigned ILR2:1;
      unsigned ILR3:1;
    };
  };
} typeINTTREGBITS;
sfr volatile typeINTTREGBITS INTTREGbits absolute 0xE0;

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
sfr volatile typeOSCCONBITS OSCCONbits absolute 0x100;

typedef struct tagCLKDIVBITS {
  union {
    struct {
      unsigned :5;
      unsigned PLLEN:1;
      unsigned :2;
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
sfr volatile typeCLKDIVBITS CLKDIVbits absolute 0x102;

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
sfr volatile typeOSCTUNBITS OSCTUNbits absolute 0x106;

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
  };
} typeRCONBITS;
sfr volatile typeRCONBITS RCONbits absolute 0x108;

typedef struct tagRCON2BITS {
  union {
    struct {
      unsigned VBAT:1;
      unsigned VBPOR:1;
      unsigned VDDPOR:1;
      unsigned VDDBOR:1;
    };
  };
} typeRCON2BITS;
sfr volatile typeRCON2BITS RCON2bits absolute 0x10A;

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
sfr volatile typeHLVDCONBITS HLVDCONbits absolute 0x10C;

typedef struct tagDSCONBITS {
  union {
    struct {
      unsigned RELEASE:1;
      unsigned DSBOR:1;
      unsigned WAKEDIS:1;
      unsigned :12;
      unsigned DSEN:1;
    };
  };
} typeDSCONBITS;
sfr volatile typeDSCONBITS DSCONbits absolute 0x10E;

typedef struct tagDSWAKEBITS {
  union {
    struct {
      unsigned :2;
      unsigned DSMCLR:1;
      unsigned DSRTCC:1;
      unsigned DSWDT:1;
      unsigned :2;
      unsigned DSFLT:1;
      unsigned DSINT0:1;
    };
  };
} typeDSWAKEBITS;
sfr volatile typeDSWAKEBITS DSWAKEbits absolute 0x110;

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
sfr volatile typeALCFGRPTBITS ALCFGRPTbits absolute 0x120;

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
sfr volatile typeRCFGCALBITS RCFGCALbits absolute 0x124;

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
sfr volatile typeRTCPWCBITS RTCPWCbits absolute 0x126;

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
sfr volatile typePMCON1BITS PMCON1bits absolute 0x128;

typedef struct tagPMCON2BITS {
  union {
    struct {
      unsigned RADDR:8;
      unsigned :4;
      unsigned TIMEOUT:1;
      unsigned ERROR:1;
      unsigned :1;
      unsigned PMPBUSY:1;
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
sfr volatile typePMCON2BITS PMCON2bits absolute 0x12A;

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
sfr volatile typePMCON3BITS PMCON3bits absolute 0x12C;

typedef struct tagPMCON4BITS {
  union {
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
      unsigned PTEN11:1;
      unsigned PTEN12:1;
      unsigned PTEN13:1;
      unsigned PTEN14:1;
      unsigned PTEN15:1;
    };
  };
} typePMCON4BITS;
sfr volatile typePMCON4BITS PMCON4bits absolute 0x12E;

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
sfr volatile typePMCS1CFBITS PMCS1CFbits absolute 0x130;

typedef struct tagPMCS1BSBITS {
  union {
    struct {
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
    };
  };
} typePMCS1BSBITS;
sfr volatile typePMCS1BSBITS PMCS1BSbits absolute 0x132;

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
sfr volatile typePMCS1MDBITS PMCS1MDbits absolute 0x134;

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
sfr volatile typePMCS2CFBITS PMCS2CFbits absolute 0x136;

typedef struct tagPMCS2BSBITS {
  union {
    struct {
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
    };
  };
} typePMCS2BSBITS;
sfr volatile typePMCS2BSBITS PMCS2BSbits absolute 0x138;

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
sfr volatile typePMCS2MDBITS PMCS2MDbits absolute 0x13A;

typedef struct tagPMSTATBITS {
  union {
    struct {
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
    };
  };
} typePMSTATBITS;
sfr volatile typePMSTATBITS PMSTATbits absolute 0x144;

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
sfr volatile typeCRCCON1BITS CRCCON1bits absolute 0x158;

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
sfr volatile typeCRCCON2BITS CRCCON2bits absolute 0x15A;

typedef struct tagCRCXORLBITS {
  union {
    struct {
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
    };
  };
} typeCRCXORLBITS;
sfr volatile typeCRCXORLBITS CRCXORLbits absolute 0x15C;

typedef struct tagCRCXORHBITS {
  union {
    struct {
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
    };
  };
} typeCRCXORHBITS;
sfr volatile typeCRCXORHBITS CRCXORHbits absolute 0x15E;

typedef struct tagREFOCON1BITS {
  union {
    struct {
      unsigned ROSEL:4;
      unsigned :4;
      unsigned ROACTIVE:1;
      unsigned ROSWEN:1;
      unsigned :1;
      unsigned ROSLP:1;
      unsigned ROOUT:1;
      unsigned ROSIDL:1;
      unsigned :1;
      unsigned ROEN:1;
    };
    struct {
      unsigned ROSEL0:1;
      unsigned ROSEL1:1;
      unsigned ROSEL2:1;
      unsigned ROSEL3:1;
    };
  };
} typeREFOCON1BITS;
sfr volatile typeREFOCON1BITS REFOCON1bits absolute 0x168;

typedef struct tagREFOCONLBITS {
  union {
    struct {
      unsigned ROSEL:4;
      unsigned :4;
      unsigned ROACTIVE:1;
      unsigned ROSWEN:1;
      unsigned :1;
      unsigned ROSLP:1;
      unsigned ROOUT:1;
      unsigned ROSIDL:1;
      unsigned :1;
      unsigned ROEN:1;
    };
    struct {
      unsigned ROSEL0:1;
      unsigned ROSEL1:1;
      unsigned ROSEL2:1;
      unsigned ROSEL3:1;
    };
  };
} typeREFOCONLBITS;
sfr volatile typeREFOCONLBITS REFOCONLbits absolute 0x168;

typedef struct tagREFOCON2BITS {
  union {
    struct {
      unsigned RODIV:15;
    };
    struct {
      unsigned RODIV0:1;
      unsigned RODIV1:1;
      unsigned RODIV2:1;
      unsigned RODIV3:1;
      unsigned RODIV4:1;
      unsigned RODIV5:1;
      unsigned RODIV6:1;
      unsigned RODIV7:1;
      unsigned RODIV8:1;
      unsigned RODIV9:1;
      unsigned RODIV10:1;
      unsigned RODIV11:1;
      unsigned RODIV12:1;
      unsigned RODIV13:1;
      unsigned RODIV14:1;
    };
  };
} typeREFOCON2BITS;
sfr volatile typeREFOCON2BITS REFOCON2bits absolute 0x16A;

typedef struct tagREFOCONHBITS {
  union {
    struct {
      unsigned RODIV:15;
    };
    struct {
      unsigned RODIV0:1;
      unsigned RODIV1:1;
      unsigned RODIV2:1;
      unsigned RODIV3:1;
      unsigned RODIV4:1;
      unsigned RODIV5:1;
      unsigned RODIV6:1;
      unsigned RODIV7:1;
      unsigned RODIV8:1;
      unsigned RODIV9:1;
      unsigned RODIV10:1;
      unsigned RODIV11:1;
      unsigned RODIV12:1;
      unsigned RODIV13:1;
      unsigned RODIV14:1;
    };
  };
} typeREFOCONHBITS;
sfr volatile typeREFOCONHBITS REFOCONHbits absolute 0x16A;

typedef struct tagREFOTRIMLBITS {
  union {
    struct {
      unsigned :7;
      unsigned ROTRIM:9;
    };
    struct {
      unsigned :7;
      unsigned ROTRIM8:1;
      unsigned ROTRIM7:1;
      unsigned ROTRIM6:1;
      unsigned ROTRIM5:1;
      unsigned ROTRIM4:1;
      unsigned ROTRIM3:1;
      unsigned ROTRIM2:1;
      unsigned ROTRIM1:1;
      unsigned ROTRIM0:1;
    };
  };
} typeREFOTRIMLBITS;
sfr volatile typeREFOTRIMLBITS REFOTRIMLbits absolute 0x16C;

typedef struct tagPMD1BITS {
  union {
    struct {
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
    };
  };
} typePMD1BITS;
sfr volatile typePMD1BITS PMD1bits absolute 0x170;

typedef struct tagPMD2BITS {
  union {
    struct {
      unsigned OC1MD:1;
      unsigned OC2MD:1;
      unsigned OC3MD:1;
      unsigned OC4MD:1;
      unsigned OC5MD:1;
      unsigned OC6MD:1;
      unsigned :2;
      unsigned IC1MD:1;
      unsigned IC2MD:1;
      unsigned IC3MD:1;
      unsigned IC4MD:1;
      unsigned IC5MD:1;
      unsigned IC6MD:1;
    };
  };
} typePMD2BITS;
sfr volatile typePMD2BITS PMD2bits absolute 0x172;

typedef struct tagPMD3BITS {
  union {
    struct {
      unsigned :1;
      unsigned I2C2MD:1;
      unsigned :1;
      unsigned U3MD:1;
      unsigned :3;
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
sfr volatile typePMD3BITS PMD3bits absolute 0x174;

typedef struct tagPMD4BITS {
  union {
    struct {
      unsigned :1;
      unsigned LVDMD:1;
      unsigned CTMUMD:1;
      unsigned REFOMD:1;
      unsigned :1;
      unsigned U4MD:1;
      unsigned UPWMMD:1;
    };
    struct {
      unsigned :1;
      unsigned HLVDMD:1;
    };
  };
} typePMD4BITS;
sfr volatile typePMD4BITS PMD4bits absolute 0x176;

typedef struct tagPMD6BITS {
  union {
    struct {
      unsigned SPI3MD:1;
    };
  };
} typePMD6BITS;
sfr volatile typePMD6BITS PMD6bits absolute 0x17A;

typedef struct tagPMD7BITS {
  union {
    struct {
      unsigned :4;
      unsigned DMA0MD:1;
      unsigned DMA1MD:1;
    };
  };
} typePMD7BITS;
sfr volatile typePMD7BITS PMD7bits absolute 0x17C;

typedef struct tagPMD8BITS {
  union {
    struct {
      unsigned CRYMD:1;
    };
  };
} typePMD8BITS;
sfr volatile typePMD8BITS PMD8bits absolute 0x17E;

typedef struct tagTRISABITS {
  union {
    struct {
      unsigned TRISA0:1;
      unsigned TRISA1:1;
      unsigned TRISA2:1;
      unsigned TRISA3:1;
      unsigned :3;
      unsigned TRISA7:1;
      unsigned TRISA8:1;
      unsigned TRISA9:1;
      unsigned TRISA10:1;
    };
  };
} typeTRISABITS;
sfr volatile typeTRISABITS TRISAbits absolute 0x180;

typedef struct tagPORTABITS {
  union {
    struct {
      unsigned RA0:1;
      unsigned RA1:1;
      unsigned RA2:1;
      unsigned RA3:1;
      unsigned RA4:1;
      unsigned :2;
      unsigned RA7:1;
      unsigned RA8:1;
      unsigned RA9:1;
      unsigned RA10:1;
    };
  };
} typePORTABITS;
sfr volatile typePORTABITS PORTAbits absolute 0x182;

typedef struct tagLATABITS {
  union {
    struct {
      unsigned LATA0:1;
      unsigned LATA1:1;
      unsigned LATA2:1;
      unsigned LATA3:1;
      unsigned :3;
      unsigned LATA7:1;
      unsigned LATA8:1;
      unsigned LATA9:1;
      unsigned LATA10:1;
    };
  };
} typeLATABITS;
sfr volatile typeLATABITS LATAbits absolute 0x184;

typedef struct tagODCABITS {
  union {
    struct {
      unsigned ODA0:1;
      unsigned ODA1:1;
      unsigned ODA2:1;
      unsigned ODA3:1;
      unsigned :3;
      unsigned ODA7:1;
      unsigned ODA8:1;
      unsigned ODA9:1;
      unsigned ODA10:1;
    };
  };
} typeODCABITS;
sfr volatile typeODCABITS ODCAbits absolute 0x186;

typedef struct tagANSABITS {
  union {
    struct {
      unsigned ANSA0:1;
      unsigned ANSA1:1;
      unsigned ANSA2:1;
      unsigned ANSA3:1;
    };
  };
} typeANSABITS;
sfr volatile typeANSABITS ANSAbits absolute 0x188;

typedef struct tagTRISBBITS {
  union {
    struct {
      unsigned TRISB0:1;
      unsigned TRISB1:1;
      unsigned TRISB2:1;
      unsigned TRISB3:1;
      unsigned :1;
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
    };
  };
} typeTRISBBITS;
sfr volatile typeTRISBBITS TRISBbits absolute 0x18A;

typedef struct tagPORTBBITS {
  union {
    struct {
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
    };
  };
} typePORTBBITS;
sfr volatile typePORTBBITS PORTBbits absolute 0x18C;

typedef struct tagLATBBITS {
  union {
    struct {
      unsigned LATB0:1;
      unsigned LATB1:1;
      unsigned LATB2:1;
      unsigned LATB3:1;
      unsigned :1;
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
    };
  };
} typeLATBBITS;
sfr volatile typeLATBBITS LATBbits absolute 0x18E;

typedef struct tagODCBBITS {
  union {
    struct {
      unsigned ODB0:1;
      unsigned ODB1:1;
      unsigned ODB2:1;
      unsigned ODB3:1;
      unsigned :1;
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
    };
  };
} typeODCBBITS;
sfr volatile typeODCBBITS ODCBbits absolute 0x190;

typedef struct tagANSBBITS {
  union {
    struct {
      unsigned ANSB0:1;
      unsigned ANSB1:1;
      unsigned ANSB2:1;
      unsigned ANSB3:1;
      unsigned :5;
      unsigned ANSB9:1;
      unsigned :2;
      unsigned ANSB12:1;
      unsigned ANSB13:1;
      unsigned ANSB14:1;
      unsigned ANSB15:1;
    };
  };
} typeANSBBITS;
sfr volatile typeANSBBITS ANSBbits absolute 0x192;

typedef struct tagTRISCBITS {
  union {
    struct {
      unsigned TRISC0:1;
      unsigned TRISC1:1;
      unsigned TRISC2:1;
      unsigned TRISC3:1;
      unsigned TRISC4:1;
      unsigned TRISC5:1;
      unsigned TRISC6:1;
      unsigned TRISC7:1;
      unsigned TRISC8:1;
      unsigned TRISC9:1;
    };
  };
} typeTRISCBITS;
sfr volatile typeTRISCBITS TRISCbits absolute 0x194;

typedef struct tagPORTCBITS {
  union {
    struct {
      unsigned RC0:1;
      unsigned RC1:1;
      unsigned RC2:1;
      unsigned RC3:1;
      unsigned RC4:1;
      unsigned RC5:1;
      unsigned RC6:1;
      unsigned RC7:1;
      unsigned RC8:1;
      unsigned RC9:1;
    };
  };
} typePORTCBITS;
sfr volatile typePORTCBITS PORTCbits absolute 0x196;

typedef struct tagLATCBITS {
  union {
    struct {
      unsigned LATC0:1;
      unsigned LATC1:1;
      unsigned LATC2:1;
      unsigned LATC3:1;
      unsigned LATC4:1;
      unsigned LATC5:1;
      unsigned LATC6:1;
      unsigned LATC7:1;
      unsigned LATC8:1;
      unsigned LATC9:1;
    };
  };
} typeLATCBITS;
sfr volatile typeLATCBITS LATCbits absolute 0x198;

typedef struct tagODCCBITS {
  union {
    struct {
      unsigned ODC0:1;
      unsigned ODC1:1;
      unsigned ODC2:1;
      unsigned ODC3:1;
      unsigned ODC4:1;
      unsigned ODC5:1;
      unsigned ODC6:1;
      unsigned ODC7:1;
      unsigned ODC8:1;
      unsigned ODC9:1;
    };
  };
} typeODCCBITS;
sfr volatile typeODCCBITS ODCCbits absolute 0x19A;

typedef struct tagANSCBITS {
  union {
    struct {
      unsigned ANSC0:1;
      unsigned ANSC1:1;
      unsigned ANSC2:1;
    };
  };
} typeANSCBITS;
sfr volatile typeANSCBITS ANSCbits absolute 0x19C;

typedef struct tagANCFGBITS {
  union {
    struct {
      unsigned VBGEN:1;
      unsigned VBG2EN:1;
    };
  };
} typeANCFGBITS;
sfr volatile typeANCFGBITS ANCFGbits absolute 0x19E;

typedef struct tagPADCFG1BITS {
  union {
    struct {
      unsigned PMPTTL:1;
    };
  };
} typePADCFG1BITS;
sfr volatile typePADCFG1BITS PADCFG1bits absolute 0x1A0;

typedef struct tagCRYCON1BITS {
  union {
    struct {
      unsigned CPHRMOD:3;
      unsigned CPHRSEL:1;
      unsigned OPMOD:4;
      unsigned CRYGO:1;
      unsigned :1;
      unsigned FREEIE:1;
      unsigned DONEIE:1;
      unsigned ROLLIE:1;
      unsigned CRYSIDL:1;
      unsigned :1;
      unsigned CRYON:1;
    };
    struct {
      unsigned CPHRMOD0:1;
      unsigned CPHRMOD1:1;
      unsigned CPHRMOD2:1;
      unsigned :1;
      unsigned OPMOD0:1;
      unsigned OPMOD1:1;
      unsigned OPMOD2:1;
      unsigned OPMOD3:1;
    };
  };
} typeCRYCON1BITS;
sfr volatile typeCRYCON1BITS CRYCON1bits absolute 0x1A4;

typedef struct tagCRYCONLBITS {
  union {
    struct {
      unsigned CPHRMOD:3;
      unsigned CPHRSEL:1;
      unsigned OPMOD:4;
      unsigned CRYGO:1;
      unsigned :1;
      unsigned FREEIE:1;
      unsigned DONEIE:1;
      unsigned ROLLIE:1;
      unsigned CRYSIDL:1;
      unsigned :1;
      unsigned CRYON:1;
    };
    struct {
      unsigned CPHRMOD0:1;
      unsigned CPHRMOD1:1;
      unsigned CPHRMOD2:1;
      unsigned :1;
      unsigned OPMOD0:1;
      unsigned OPMOD1:1;
      unsigned OPMOD2:1;
      unsigned OPMOD3:1;
    };
  };
} typeCRYCONLBITS;
sfr volatile typeCRYCONLBITS CRYCONLbits absolute 0x1A4;

typedef struct tagCRYCON2BITS {
  union {
    struct {
      unsigned KEYSRC:4;
      unsigned :1;
      unsigned KEYMOD:2;
      unsigned SKEYSEL:1;
      unsigned CTRSIZE:7;
    };
    struct {
      unsigned KEYSRC0:1;
      unsigned KEYSRC1:1;
      unsigned KEYSRC2:1;
      unsigned KEYSRC3:1;
      unsigned :1;
      unsigned KEYMOD0:1;
      unsigned KEYMOD1:1;
      unsigned :1;
      unsigned CTRSIZE0:1;
      unsigned CTRSIZE1:1;
      unsigned CTRSIZE2:1;
      unsigned CTRSIZE3:1;
      unsigned CTRSIZE4:1;
      unsigned CTRSIZE5:1;
      unsigned CTRSIZE6:1;
    };
  };
} typeCRYCON2BITS;
sfr volatile typeCRYCON2BITS CRYCON2bits absolute 0x1A6;

typedef struct tagCRYCONHBITS {
  union {
    struct {
      unsigned KEYSRC:4;
      unsigned :1;
      unsigned KEYMOD:2;
      unsigned SKEYSEL:1;
      unsigned CTRSIZE:7;
    };
    struct {
      unsigned KEYSRC0:1;
      unsigned KEYSRC1:1;
      unsigned KEYSRC2:1;
      unsigned KEYSRC3:1;
      unsigned :1;
      unsigned KEYMOD0:1;
      unsigned KEYMOD1:1;
      unsigned :1;
      unsigned CTRSIZE0:1;
      unsigned CTRSIZE1:1;
      unsigned CTRSIZE2:1;
      unsigned CTRSIZE3:1;
      unsigned CTRSIZE4:1;
      unsigned CTRSIZE5:1;
      unsigned CTRSIZE6:1;
    };
  };
} typeCRYCONHBITS;
sfr volatile typeCRYCONHBITS CRYCONHbits absolute 0x1A6;

typedef struct tagCRYSTATBITS {
  union {
    struct {
      unsigned PGMFAIL:1;
      unsigned KEYFAIL:1;
      unsigned MODFAIL:1;
      unsigned :1;
      unsigned ROLLOVR:1;
      unsigned CRYABRT:1;
      unsigned TXTABSY:1;
      unsigned CRYBSY:1;
    };
  };
} typeCRYSTATBITS;
sfr volatile typeCRYSTATBITS CRYSTATbits absolute 0x1A8;

typedef struct tagCRYOTPBITS {
  union {
    struct {
      unsigned CRYWR:1;
      unsigned KEYPG:4;
      unsigned CRYREAD:1;
      unsigned OTPIE:1;
      unsigned PGMTST:1;
    };
    struct {
      unsigned :1;
      unsigned KEYPG0:1;
      unsigned KEYPG1:1;
      unsigned KEYPG2:1;
      unsigned KEYPG3:1;
    };
  };
} typeCRYOTPBITS;
sfr volatile typeCRYOTPBITS CRYOTPbits absolute 0x1AC;

typedef struct tagAD1CON1BITS {
  union {
    struct {
      unsigned DONE:1;
      unsigned SAMP:1;
      unsigned ASAM:1;
      unsigned :1;
      unsigned SSRC:4;
      unsigned FORM:2;
      unsigned MODE12:1;
      unsigned DMAEN:1;
      unsigned DMABM:1;
      unsigned ADSIDL:1;
      unsigned :1;
      unsigned ADON:1;
    };
    struct {
      unsigned :4;
      unsigned SSRC0:1;
      unsigned SSRC1:1;
      unsigned SSRC2:1;
      unsigned SSRC3:1;
      unsigned FORM0:1;
      unsigned FORM1:1;
    };
  };
} typeAD1CON1BITS;
sfr volatile typeAD1CON1BITS AD1CON1bits absolute 0x220;

typedef struct tagAD1CON2BITS {
  union {
    struct {
      unsigned ALTS:1;
      unsigned BUFM:1;
      unsigned SMPI:5;
      unsigned BUFS:1;
      unsigned :2;
      unsigned CSCNA:1;
      unsigned BUFREGEN:1;
      unsigned OFFCAL:1;
      unsigned NVCFG0:1;
      unsigned PVCFG:2;
    };
    struct {
      unsigned :2;
      unsigned SMPI0:1;
      unsigned SMPI1:1;
      unsigned SMPI2:1;
      unsigned SMPI3:1;
      unsigned SMPI4:1;
      unsigned :7;
      unsigned PCVFG0:1;
      unsigned PCVFG1:1;
    };
  };
} typeAD1CON2BITS;
sfr volatile typeAD1CON2BITS AD1CON2bits absolute 0x222;

typedef struct tagAD1CON3BITS {
  union {
    struct {
      unsigned ADCS:8;
      unsigned SAMC:5;
      unsigned PUMPEN:1;
      unsigned EXTSAM:1;
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
sfr volatile typeAD1CON3BITS AD1CON3bits absolute 0x224;

typedef struct tagAD1CHSBITS {
  union {
    struct {
      unsigned CH0SA:5;
      unsigned CH0NA:3;
      unsigned CH0SB:5;
      unsigned CH0NB:3;
    };
    struct {
      unsigned CH0SA0:1;
      unsigned CH0SA1:1;
      unsigned CH0SA2:1;
      unsigned CH0SA3:1;
      unsigned CH0SA4:1;
      unsigned CH0NA0:1;
      unsigned CH0NA1:1;
      unsigned CH0NA2:1;
      unsigned CH0SB0:1;
      unsigned CH0SB1:1;
      unsigned CH0SB2:1;
      unsigned CH0SB3:1;
      unsigned CH0SB4:1;
      unsigned CH0NB0:1;
      unsigned CH0NB1:1;
      unsigned CH0NB2:1;
    };
  };
} typeAD1CHSBITS;
sfr volatile typeAD1CHSBITS AD1CHSbits absolute 0x228;

typedef struct tagAD1CHS0BITS {
  union {
    struct {
      unsigned CH0SA:5;
      unsigned CH0NA:3;
      unsigned CH0SB:5;
      unsigned CH0NB:3;
    };
    struct {
      unsigned CH0SA0:1;
      unsigned CH0SA1:1;
      unsigned CH0SA2:1;
      unsigned CH0SA3:1;
      unsigned CH0SA4:1;
      unsigned CH0NA0:1;
      unsigned CH0NA1:1;
      unsigned CH0NA2:1;
      unsigned CH0SB0:1;
      unsigned CH0SB1:1;
      unsigned CH0SB2:1;
      unsigned CH0SB3:1;
      unsigned CH0SB4:1;
      unsigned CH0NB0:1;
      unsigned CH0NB1:1;
      unsigned CH0NB2:1;
    };
  };
} typeAD1CHS0BITS;
sfr volatile typeAD1CHS0BITS AD1CHS0bits absolute 0x228;

typedef struct tagAD1CSSHBITS {
  union {
    struct {
      unsigned :11;
      unsigned CSS27:1;
      unsigned CSS28:1;
      unsigned CSS29:1;
      unsigned CSS30:1;
      unsigned CSS31:1;
    };
  };
} typeAD1CSSHBITS;
sfr volatile typeAD1CSSHBITS AD1CSSHbits absolute 0x22A;

typedef struct tagAD1CSSLBITS {
  union {
    struct {
      unsigned CSS0:1;
      unsigned CSS1:1;
      unsigned CSS2:1;
      unsigned CSS3:1;
      unsigned CSS4:1;
      unsigned CSS5:1;
      unsigned CSS6:1;
      unsigned CSS7:1;
      unsigned CSS8:1;
      unsigned CSS9:1;
      unsigned CSS10:1;
      unsigned CSS11:1;
      unsigned CSS12:1;
      unsigned CSS13:1;
      unsigned CSS14:1;
    };
  };
} typeAD1CSSLBITS;
sfr volatile typeAD1CSSLBITS AD1CSSLbits absolute 0x22C;

typedef struct tagAD1CON4BITS {
  union {
    struct {
      unsigned DMABL:3;
    };
    struct {
      unsigned DMABL0:1;
      unsigned DMABL1:1;
      unsigned DMABL2:1;
    };
  };
} typeAD1CON4BITS;
sfr volatile typeAD1CON4BITS AD1CON4bits absolute 0x22E;

typedef struct tagAD1CON5BITS {
  union {
    struct {
      unsigned CM:2;
      unsigned WM:2;
      unsigned :4;
      unsigned ASINT:2;
      unsigned :2;
      unsigned BGREQ:1;
      unsigned CTMREQ:1;
      unsigned LPEN:1;
      unsigned ASEN:1;
    };
    struct {
      unsigned CM0:1;
      unsigned CM1:1;
      unsigned WM0:1;
      unsigned WM1:1;
      unsigned :4;
      unsigned ASINT0:1;
      unsigned ASINT1:1;
    };
  };
} typeAD1CON5BITS;
sfr volatile typeAD1CON5BITS AD1CON5bits absolute 0x230;

typedef struct tagAD1CHITLBITS {
  union {
    struct {
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
    };
  };
} typeAD1CHITLBITS;
sfr volatile typeAD1CHITLBITS AD1CHITLbits absolute 0x234;

typedef struct tagAD1CTMENLBITS {
  union {
    struct {
      unsigned CTMEN0:1;
      unsigned CTMEN1:1;
      unsigned CTMEN2:1;
      unsigned CTMEN3:1;
      unsigned CTMEN4:1;
      unsigned CTMEN5:1;
      unsigned CTMEN6:1;
      unsigned CTMEN7:1;
      unsigned CTMEN8:1;
      unsigned CTMEN9:1;
      unsigned CTMEN10:1;
      unsigned CTMEN11:1;
      unsigned CTMEN12:1;
    };
  };
} typeAD1CTMENLBITS;
sfr volatile typeAD1CTMENLBITS AD1CTMENLbits absolute 0x238;

typedef struct tagCTMUCON1BITS {
  union {
    struct {
      unsigned :8;
      unsigned CTTRIG:1;
      unsigned IDISSEN:1;
      unsigned EDGSEQEN:1;
      unsigned EDGEN:1;
      unsigned TGEN:1;
      unsigned CTMUSIDL:1;
      unsigned :1;
      unsigned CTMUEN:1;
    };
  };
} typeCTMUCON1BITS;
sfr volatile typeCTMUCON1BITS CTMUCON1bits absolute 0x23C;

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
sfr volatile typeCTMUCON2BITS CTMUCON2bits absolute 0x23E;

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
sfr volatile typeCTMUICONBITS CTMUICONbits absolute 0x240;

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
sfr volatile typeCMSTATBITS CMSTATbits absolute 0x242;

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
sfr volatile typeCVRCONBITS CVRCONbits absolute 0x244;

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
sfr volatile typeCM1CONBITS CM1CONbits absolute 0x246;

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
sfr volatile typeCM2CONBITS CM2CONbits absolute 0x248;

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
} typeCM3CONBITS;
sfr volatile typeCM3CONBITS CM3CONbits absolute 0x24A;

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
sfr volatile typeT1CONBITS T1CONbits absolute 0x250;

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
sfr volatile typeT2CONBITS T2CONbits absolute 0x25C;

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
sfr volatile typeT3CONBITS T3CONbits absolute 0x25E;

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
sfr volatile typeT4CONBITS T4CONbits absolute 0x26A;

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
sfr volatile typeT5CONBITS T5CONbits absolute 0x26C;

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
sfr volatile typeOC1CON1BITS OC1CON1bits absolute 0x26E;

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
sfr volatile typeOC1CON2BITS OC1CON2bits absolute 0x270;

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
sfr volatile typeOC2CON1BITS OC2CON1bits absolute 0x278;

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
sfr volatile typeOC2CON2BITS OC2CON2bits absolute 0x27A;

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
sfr volatile typeOC3CON1BITS OC3CON1bits absolute 0x282;

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
sfr volatile typeOC3CON2BITS OC3CON2bits absolute 0x284;

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
sfr volatile typeOC4CON1BITS OC4CON1bits absolute 0x28C;

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
sfr volatile typeOC4CON2BITS OC4CON2bits absolute 0x28E;

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
sfr volatile typeOC5CON1BITS OC5CON1bits absolute 0x296;

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
sfr volatile typeOC5CON2BITS OC5CON2bits absolute 0x298;

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
sfr volatile typeOC6CON1BITS OC6CON1bits absolute 0x2A0;

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
sfr volatile typeOC6CON2BITS OC6CON2bits absolute 0x2A2;

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
sfr volatile typeIC1CON1BITS IC1CON1bits absolute 0x2AA;

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
sfr volatile typeIC1CON2BITS IC1CON2bits absolute 0x2AC;

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
sfr volatile typeIC2CON1BITS IC2CON1bits absolute 0x2B2;

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
sfr volatile typeIC2CON2BITS IC2CON2bits absolute 0x2B4;

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
sfr volatile typeIC3CON1BITS IC3CON1bits absolute 0x2BA;

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
sfr volatile typeIC3CON2BITS IC3CON2bits absolute 0x2BC;

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
sfr volatile typeIC4CON1BITS IC4CON1bits absolute 0x2C2;

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
sfr volatile typeIC4CON2BITS IC4CON2bits absolute 0x2C4;

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
sfr volatile typeIC5CON1BITS IC5CON1bits absolute 0x2CA;

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
sfr volatile typeIC5CON2BITS IC5CON2bits absolute 0x2CC;

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
sfr volatile typeIC6CON1BITS IC6CON1bits absolute 0x2D2;

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
sfr volatile typeIC6CON2BITS IC6CON2bits absolute 0x2D4;

typedef struct tagI2C1RCVBITS {
  union {
    struct {
      unsigned I2CRXDATA:8;
    };
  };
} typeI2C1RCVBITS;
sfr volatile typeI2C1RCVBITS I2C1RCVbits absolute 0x2DA;

typedef struct tagI2C1TRNBITS {
  union {
    struct {
      unsigned I2CTXDATA:8;
    };
  };
} typeI2C1TRNBITS;
sfr volatile typeI2C1TRNBITS I2C1TRNbits absolute 0x2DC;

typedef struct tagI2C1CON1BITS {
  union {
    struct {
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
      unsigned STRICT:1;
      unsigned SCLREL:1;
      unsigned I2CSIDL:1;
      unsigned :1;
      unsigned I2CEN:1;
    };
    struct {
      unsigned :13;
      unsigned SIDL:1;
    };
  };
} typeI2C1CON1BITS;
sfr volatile typeI2C1CON1BITS I2C1CON1bits absolute 0x2E0;

typedef struct tagI2C1CONLBITS {
  union {
    struct {
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
      unsigned STRICT:1;
      unsigned SCLREL:1;
      unsigned I2CSIDL:1;
      unsigned :1;
      unsigned I2CEN:1;
    };
    struct {
      unsigned :13;
      unsigned SIDL:1;
    };
  };
} typeI2C1CONLBITS;
sfr volatile typeI2C1CONLBITS I2C1CONLbits absolute 0x2E0;

typedef struct tagI2C1CON2BITS {
  union {
    struct {
      unsigned DHEN:1;
      unsigned AHEN:1;
      unsigned SBCDE:1;
      unsigned SDAHT:1;
      unsigned BOEN:1;
      unsigned SCIE:1;
      unsigned PCIE:1;
    };
  };
} typeI2C1CON2BITS;
sfr volatile typeI2C1CON2BITS I2C1CON2bits absolute 0x2E2;

typedef struct tagI2C1CONHBITS {
  union {
    struct {
      unsigned DHEN:1;
      unsigned AHEN:1;
      unsigned SBCDE:1;
      unsigned SDAHT:1;
      unsigned BOEN:1;
      unsigned SCIE:1;
      unsigned PCIE:1;
    };
  };
} typeI2C1CONHBITS;
sfr volatile typeI2C1CONHBITS I2C1CONHbits absolute 0x2E2;

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
      unsigned :2;
      unsigned ACKTIM:1;
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
      unsigned :2;
      unsigned RW:1;
      unsigned :2;
      unsigned DA:1;
    };
  };
} typeI2C1STATBITS;
sfr volatile typeI2C1STATBITS I2C1STATbits absolute 0x2E4;

typedef struct tagI2C1ADDBITS {
  union {
    struct {
      unsigned ADD:10;
    };
  };
} typeI2C1ADDBITS;
sfr volatile typeI2C1ADDBITS I2C1ADDbits absolute 0x2E6;

typedef struct tagI2C1MSKBITS {
  union {
    struct {
      unsigned MSK:10;
    };
    struct {
      unsigned AMSK:10;
    };
  };
} typeI2C1MSKBITS;
sfr volatile typeI2C1MSKBITS I2C1MSKbits absolute 0x2E8;

typedef struct tagI2C2RCVBITS {
  union {
    struct {
      unsigned I2CRXDATA:8;
    };
  };
} typeI2C2RCVBITS;
sfr volatile typeI2C2RCVBITS I2C2RCVbits absolute 0x2EA;

typedef struct tagI2C2TRNBITS {
  union {
    struct {
      unsigned I2CTXDATA:8;
    };
  };
} typeI2C2TRNBITS;
sfr volatile typeI2C2TRNBITS I2C2TRNbits absolute 0x2EC;

typedef struct tagI2C2CON1BITS {
  union {
    struct {
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
      unsigned STRICT:1;
      unsigned SCLREL:1;
      unsigned I2CSIDL:1;
      unsigned :1;
      unsigned I2CEN:1;
    };
    struct {
      unsigned :13;
      unsigned SIDL:1;
    };
  };
} typeI2C2CON1BITS;
sfr volatile typeI2C2CON1BITS I2C2CON1bits absolute 0x2F0;

typedef struct tagI2C2CONLBITS {
  union {
    struct {
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
      unsigned STRICT:1;
      unsigned SCLREL:1;
      unsigned I2CSIDL:1;
      unsigned :1;
      unsigned I2CEN:1;
    };
    struct {
      unsigned :13;
      unsigned SIDL:1;
    };
  };
} typeI2C2CONLBITS;
sfr volatile typeI2C2CONLBITS I2C2CONLbits absolute 0x2F0;

typedef struct tagI2C2CON2BITS {
  union {
    struct {
      unsigned DHEN:1;
      unsigned AHEN:1;
      unsigned SBCDE:1;
      unsigned SDAHT:1;
      unsigned BOEN:1;
      unsigned SCIE:1;
      unsigned PCIE:1;
    };
  };
} typeI2C2CON2BITS;
sfr volatile typeI2C2CON2BITS I2C2CON2bits absolute 0x2F2;

typedef struct tagI2C2CONHBITS {
  union {
    struct {
      unsigned DHEN:1;
      unsigned AHEN:1;
      unsigned SBCDE:1;
      unsigned SDAHT:1;
      unsigned BOEN:1;
      unsigned SCIE:1;
      unsigned PCIE:1;
    };
  };
} typeI2C2CONHBITS;
sfr volatile typeI2C2CONHBITS I2C2CONHbits absolute 0x2F2;

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
      unsigned :2;
      unsigned ACKTIM:1;
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
      unsigned :2;
      unsigned RW:1;
      unsigned :2;
      unsigned DA:1;
    };
  };
} typeI2C2STATBITS;
sfr volatile typeI2C2STATBITS I2C2STATbits absolute 0x2F4;

typedef struct tagI2C2ADDBITS {
  union {
    struct {
      unsigned ADD:10;
    };
  };
} typeI2C2ADDBITS;
sfr volatile typeI2C2ADDBITS I2C2ADDbits absolute 0x2F6;

typedef struct tagI2C2MSKBITS {
  union {
    struct {
      unsigned MSK:10;
    };
    struct {
      unsigned AMSK:10;
    };
  };
} typeI2C2MSKBITS;
sfr volatile typeI2C2MSKBITS I2C2MSKbits absolute 0x2F8;

typedef struct tagMDCONBITS {
  union {
    struct {
      unsigned MDBIT:1;
      unsigned :3;
      unsigned MDOPOL:1;
      unsigned MDSLR:1;
      unsigned MDOE:1;
      unsigned :6;
      unsigned MDSIDL:1;
      unsigned :1;
      unsigned MDEN:1;
    };
  };
} typeMDCONBITS;
sfr volatile typeMDCONBITS MDCONbits absolute 0x2FA;

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
sfr volatile typeMDSRCBITS MDSRCbits absolute 0x2FC;

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
sfr volatile typeMDCARBITS MDCARbits absolute 0x2FE;

typedef struct tagSPI1CON1BITS {
  union {
    struct {
      unsigned ENHBUF:1;
      unsigned SPIFE:1;
      unsigned MCLKEN:1;
      unsigned DISSCK:1;
      unsigned DISSDI:1;
      unsigned MSTEN:1;
      unsigned CKP:1;
      unsigned SSEN:1;
      unsigned CKE:1;
      unsigned SMP:1;
      unsigned MODE16:1;
      unsigned MODE32:1;
      unsigned DISSDO:1;
      unsigned SPISIDL:1;
      unsigned :1;
      unsigned SPIEN:1;
    };
    struct {
      unsigned :10;
      unsigned MODE:2;
    };
  };
} typeSPI1CON1BITS;
sfr volatile typeSPI1CON1BITS SPI1CON1bits absolute 0x300;

typedef struct tagSPI1CON1LBITS {
  union {
    struct {
      unsigned ENHBUF:1;
      unsigned SPIFE:1;
      unsigned MCLKEN:1;
      unsigned DISSCK:1;
      unsigned DISSDI:1;
      unsigned MSTEN:1;
      unsigned CKP:1;
      unsigned SSEN:1;
      unsigned CKE:1;
      unsigned SMP:1;
      unsigned MODE16:1;
      unsigned MODE32:1;
      unsigned DISSDO:1;
      unsigned SPISIDL:1;
      unsigned :1;
      unsigned SPIEN:1;
    };
    struct {
      unsigned :10;
      unsigned MODE:2;
    };
  };
} typeSPI1CON1LBITS;
sfr volatile typeSPI1CON1LBITS SPI1CON1Lbits absolute 0x300;

typedef struct tagSPI1CON1HBITS {
  union {
    struct {
      unsigned FRMCNT:3;
      unsigned FRMSYPW:1;
      unsigned MSSEN:1;
      unsigned FRMPOL:1;
      unsigned FRMSYNC:1;
      unsigned FRMEN:1;
      unsigned AUDMOD:2;
      unsigned URDTEN:1;
      unsigned AUDMONO:1;
      unsigned IGNTUR:1;
      unsigned IGNROV:1;
      unsigned SPISGNEXT:1;
      unsigned AUDEN:1;
    };
    struct {
      unsigned FRMCNT0:1;
      unsigned FRMCNT1:1;
      unsigned FRMCNT2:1;
      unsigned :5;
      unsigned AUDMOD0:1;
      unsigned AUDMOD1:1;
    };
  };
} typeSPI1CON1HBITS;
sfr volatile typeSPI1CON1HBITS SPI1CON1Hbits absolute 0x302;

typedef struct tagSPI1CON2BITS {
  union {
    struct {
      unsigned FRMCNT:3;
      unsigned FRMSYPW:1;
      unsigned MSSEN:1;
      unsigned FRMPOL:1;
      unsigned FRMSYNC:1;
      unsigned FRMEN:1;
      unsigned AUDMOD:2;
      unsigned URDTEN:1;
      unsigned AUDMONO:1;
      unsigned IGNTUR:1;
      unsigned IGNROV:1;
      unsigned SPISGNEXT:1;
      unsigned AUDEN:1;
    };
    struct {
      unsigned FRMCNT0:1;
      unsigned FRMCNT1:1;
      unsigned FRMCNT2:1;
      unsigned :5;
      unsigned AUDMOD0:1;
      unsigned AUDMOD1:1;
    };
  };
} typeSPI1CON2BITS;
sfr volatile typeSPI1CON2BITS SPI1CON2bits absolute 0x302;

typedef struct tagSPI1CON2LBITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI1CON2LBITS;
sfr volatile typeSPI1CON2LBITS SPI1CON2Lbits absolute 0x304;

typedef struct tagSPI1CON3BITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI1CON3BITS;
sfr volatile typeSPI1CON3BITS SPI1CON3bits absolute 0x304;

typedef struct tagSPI1STATLBITS {
  union {
    struct {
      unsigned SPIRBF:1;
      unsigned SPITBF:1;
      unsigned :1;
      unsigned SPITBE:1;
      unsigned :1;
      unsigned SPIRBE:1;
      unsigned SPIROV:1;
      unsigned SRMT:1;
      unsigned SPITUR:1;
      unsigned :2;
      unsigned SPIBUSY:1;
      unsigned FRMERR:1;
    };
  };
} typeSPI1STATLBITS;
sfr volatile typeSPI1STATLBITS SPI1STATLbits absolute 0x308;

typedef struct tagSPI1STATHBITS {
  union {
    struct {
      unsigned TXELM:6;
      unsigned :2;
      unsigned RXELM:6;
    };
    struct {
      unsigned TXELM0:1;
      unsigned TXELM1:1;
      unsigned TXELM2:1;
      unsigned TXELM3:1;
      unsigned TXELM4:1;
      unsigned TXELM5:1;
      unsigned :2;
      unsigned RXELM0:1;
      unsigned RXELM1:1;
      unsigned RXELM2:1;
      unsigned RXELM3:1;
      unsigned RXELM4:1;
      unsigned RXELM5:1;
    };
  };
} typeSPI1STATHBITS;
sfr volatile typeSPI1STATHBITS SPI1STATHbits absolute 0x30A;

typedef struct tagSPI1BUFLBITS {
  union {
    struct {
      unsigned SPI1BUFL:16;
    };
    struct {
      unsigned DATA:16;
    };
  };
} typeSPI1BUFLBITS;
sfr volatile typeSPI1BUFLBITS SPI1BUFLbits absolute 0x30C;

typedef struct tagSPI1BUFHBITS {
  union {
    struct {
      unsigned SPI1BUFH:16;
    };
    struct {
      unsigned DATA:16;
    };
  };
} typeSPI1BUFHBITS;
sfr volatile typeSPI1BUFHBITS SPI1BUFHbits absolute 0x30E;

typedef struct tagSPI1BRGLBITS {
  union {
    struct {
      unsigned SPI1BRGL:13;
    };
    struct {
      unsigned BRG:13;
    };
  };
} typeSPI1BRGLBITS;
sfr volatile typeSPI1BRGLBITS SPI1BRGLbits absolute 0x310;

typedef struct tagSPI1IMSK1BITS {
  union {
    struct {
      unsigned SPIRBFEN:1;
      unsigned SPITBFEN:1;
      unsigned :1;
      unsigned SPITBEN:1;
      unsigned :1;
      unsigned SPIRBEN:1;
      unsigned SPIROVEN:1;
      unsigned SRMTEN:1;
      unsigned SPITUREN:1;
      unsigned :2;
      unsigned BUSYEN:1;
      unsigned FRMERREN:1;
    };
  };
} typeSPI1IMSK1BITS;
sfr volatile typeSPI1IMSK1BITS SPI1IMSK1bits absolute 0x314;

typedef struct tagSPI1IMSKLBITS {
  union {
    struct {
      unsigned SPIRBFEN:1;
      unsigned SPITBFEN:1;
      unsigned :1;
      unsigned SPITBEN:1;
      unsigned :1;
      unsigned SPIRBEN:1;
      unsigned SPIROVEN:1;
      unsigned SRMTEN:1;
      unsigned SPITUREN:1;
      unsigned :2;
      unsigned BUSYEN:1;
      unsigned FRMERREN:1;
    };
  };
} typeSPI1IMSKLBITS;
sfr volatile typeSPI1IMSKLBITS SPI1IMSKLbits absolute 0x314;

typedef struct tagSPI1IMSK2BITS {
  union {
    struct {
      unsigned TXMSK:6;
      unsigned :1;
      unsigned TXWIEN:1;
      unsigned RXMSK:6;
      unsigned :1;
      unsigned RXWIEN:1;
    };
    struct {
      unsigned TXMSK0:1;
      unsigned TXMSK1:1;
      unsigned TXMSK2:1;
      unsigned TXMSK3:1;
      unsigned TXMSK4:1;
      unsigned TXMSK5:1;
      unsigned :2;
      unsigned RXMSK0:1;
      unsigned RXMSK1:1;
      unsigned RXMSK2:1;
      unsigned RXMSK3:1;
      unsigned RXMSK4:1;
      unsigned RXMSK5:1;
    };
  };
} typeSPI1IMSK2BITS;
sfr volatile typeSPI1IMSK2BITS SPI1IMSK2bits absolute 0x316;

typedef struct tagSPI1IMSKHBITS {
  union {
    struct {
      unsigned TXMSK:6;
      unsigned :1;
      unsigned TXWIEN:1;
      unsigned RXMSK:6;
      unsigned :1;
      unsigned RXWIEN:1;
    };
    struct {
      unsigned TXMSK0:1;
      unsigned TXMSK1:1;
      unsigned TXMSK2:1;
      unsigned TXMSK3:1;
      unsigned TXMSK4:1;
      unsigned TXMSK5:1;
      unsigned :2;
      unsigned RXMSK0:1;
      unsigned RXMSK1:1;
      unsigned RXMSK2:1;
      unsigned RXMSK3:1;
      unsigned RXMSK4:1;
      unsigned RXMSK5:1;
    };
  };
} typeSPI1IMSKHBITS;
sfr volatile typeSPI1IMSKHBITS SPI1IMSKHbits absolute 0x316;

typedef struct tagSPI1URDTLBITS {
  union {
    struct {
      unsigned SPI1URDTL:16;
    };
    struct {
      unsigned URDATA:16;
    };
  };
} typeSPI1URDTLBITS;
sfr volatile typeSPI1URDTLBITS SPI1URDTLbits absolute 0x318;

typedef struct tagSPI1URDTHBITS {
  union {
    struct {
      unsigned SPI1URDTH:16;
    };
    struct {
      unsigned URDATA:16;
    };
  };
} typeSPI1URDTHBITS;
sfr volatile typeSPI1URDTHBITS SPI1URDTHbits absolute 0x31A;

typedef struct tagSPI2CON1BITS {
  union {
    struct {
      unsigned ENHBUF:1;
      unsigned SPIFE:1;
      unsigned MCLKEN:1;
      unsigned DISSCK:1;
      unsigned DISSDI:1;
      unsigned MSTEN:1;
      unsigned CKP:1;
      unsigned SSEN:1;
      unsigned CKE:1;
      unsigned SMP:1;
      unsigned MODE16:1;
      unsigned MODE32:1;
      unsigned DISSDO:1;
      unsigned SPISIDL:1;
      unsigned :1;
      unsigned SPIEN:1;
    };
    struct {
      unsigned :10;
      unsigned MODE:2;
    };
  };
} typeSPI2CON1BITS;
sfr volatile typeSPI2CON1BITS SPI2CON1bits absolute 0x31C;

typedef struct tagSPI2CON1LBITS {
  union {
    struct {
      unsigned ENHBUF:1;
      unsigned SPIFE:1;
      unsigned MCLKEN:1;
      unsigned DISSCK:1;
      unsigned DISSDI:1;
      unsigned MSTEN:1;
      unsigned CKP:1;
      unsigned SSEN:1;
      unsigned CKE:1;
      unsigned SMP:1;
      unsigned MODE16:1;
      unsigned MODE32:1;
      unsigned DISSDO:1;
      unsigned SPISIDL:1;
      unsigned :1;
      unsigned SPIEN:1;
    };
    struct {
      unsigned :10;
      unsigned MODE:2;
    };
  };
} typeSPI2CON1LBITS;
sfr volatile typeSPI2CON1LBITS SPI2CON1Lbits absolute 0x31C;

typedef struct tagSPI2CON1HBITS {
  union {
    struct {
      unsigned FRMCNT:3;
      unsigned FRMSYPW:1;
      unsigned MSSEN:1;
      unsigned FRMPOL:1;
      unsigned FRMSYNC:1;
      unsigned FRMEN:1;
      unsigned AUDMOD:2;
      unsigned URDTEN:1;
      unsigned AUDMONO:1;
      unsigned IGNTUR:1;
      unsigned IGNROV:1;
      unsigned SPISGNEXT:1;
      unsigned AUDEN:1;
    };
    struct {
      unsigned FRMCNT0:1;
      unsigned FRMCNT1:1;
      unsigned FRMCNT2:1;
      unsigned :5;
      unsigned AUDMOD0:1;
      unsigned AUDMOD1:1;
    };
  };
} typeSPI2CON1HBITS;
sfr volatile typeSPI2CON1HBITS SPI2CON1Hbits absolute 0x31E;

typedef struct tagSPI2CON2BITS {
  union {
    struct {
      unsigned FRMCNT:3;
      unsigned FRMSYPW:1;
      unsigned MSSEN:1;
      unsigned FRMPOL:1;
      unsigned FRMSYNC:1;
      unsigned FRMEN:1;
      unsigned AUDMOD:2;
      unsigned URDTEN:1;
      unsigned AUDMONO:1;
      unsigned IGNTUR:1;
      unsigned IGNROV:1;
      unsigned SPISGNEXT:1;
      unsigned AUDEN:1;
    };
    struct {
      unsigned FRMCNT0:1;
      unsigned FRMCNT1:1;
      unsigned FRMCNT2:1;
      unsigned :5;
      unsigned AUDMOD0:1;
      unsigned AUDMOD1:1;
    };
  };
} typeSPI2CON2BITS;
sfr volatile typeSPI2CON2BITS SPI2CON2bits absolute 0x31E;

typedef struct tagSPI2CON2LBITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI2CON2LBITS;
sfr volatile typeSPI2CON2LBITS SPI2CON2Lbits absolute 0x320;

typedef struct tagSPI2CON3BITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI2CON3BITS;
sfr volatile typeSPI2CON3BITS SPI2CON3bits absolute 0x320;

typedef struct tagSPI2STATLBITS {
  union {
    struct {
      unsigned SPIRBF:1;
      unsigned SPITBF:1;
      unsigned :1;
      unsigned SPITBE:1;
      unsigned :1;
      unsigned SPIRBE:1;
      unsigned SPIROV:1;
      unsigned SRMT:1;
      unsigned SPITUR:1;
      unsigned :2;
      unsigned SPIBUSY:1;
      unsigned FRMERR:1;
    };
  };
} typeSPI2STATLBITS;
sfr volatile typeSPI2STATLBITS SPI2STATLbits absolute 0x324;

typedef struct tagSPI2STATHBITS {
  union {
    struct {
      unsigned TXELM:6;
      unsigned :2;
      unsigned RXELM:6;
    };
    struct {
      unsigned TXELM0:1;
      unsigned TXELM1:1;
      unsigned TXELM2:1;
      unsigned TXELM3:1;
      unsigned TXELM4:1;
      unsigned TXELM5:1;
      unsigned :2;
      unsigned RXELM0:1;
      unsigned RXELM1:1;
      unsigned RXELM2:1;
      unsigned RXELM3:1;
      unsigned RXELM4:1;
      unsigned RXELM5:1;
    };
  };
} typeSPI2STATHBITS;
sfr volatile typeSPI2STATHBITS SPI2STATHbits absolute 0x326;

typedef struct tagSPI2BUFLBITS {
  union {
    struct {
      unsigned SPI2BUFL:16;
    };
    struct {
      unsigned DATA:16;
    };
  };
} typeSPI2BUFLBITS;
sfr volatile typeSPI2BUFLBITS SPI2BUFLbits absolute 0x328;

typedef struct tagSPI2BUFHBITS {
  union {
    struct {
      unsigned SPI2BUFH:16;
    };
    struct {
      unsigned DATA:16;
    };
  };
} typeSPI2BUFHBITS;
sfr volatile typeSPI2BUFHBITS SPI2BUFHbits absolute 0x32A;

typedef struct tagSPI2BRGLBITS {
  union {
    struct {
      unsigned SPI2BRGL:13;
    };
    struct {
      unsigned BRG:13;
    };
  };
} typeSPI2BRGLBITS;
sfr volatile typeSPI2BRGLBITS SPI2BRGLbits absolute 0x32C;

typedef struct tagSPI2IMSK1BITS {
  union {
    struct {
      unsigned SPIRBFEN:1;
      unsigned SPITBFEN:1;
      unsigned :1;
      unsigned SPITBEN:1;
      unsigned :1;
      unsigned SPIRBEN:1;
      unsigned SPIROVEN:1;
      unsigned SRMTEN:1;
      unsigned SPITUREN:1;
      unsigned :2;
      unsigned BUSYEN:1;
      unsigned FRMERREN:1;
    };
  };
} typeSPI2IMSK1BITS;
sfr volatile typeSPI2IMSK1BITS SPI2IMSK1bits absolute 0x330;

typedef struct tagSPI2IMSKLBITS {
  union {
    struct {
      unsigned SPIRBFEN:1;
      unsigned SPITBFEN:1;
      unsigned :1;
      unsigned SPITBEN:1;
      unsigned :1;
      unsigned SPIRBEN:1;
      unsigned SPIROVEN:1;
      unsigned SRMTEN:1;
      unsigned SPITUREN:1;
      unsigned :2;
      unsigned BUSYEN:1;
      unsigned FRMERREN:1;
    };
  };
} typeSPI2IMSKLBITS;
sfr volatile typeSPI2IMSKLBITS SPI2IMSKLbits absolute 0x330;

typedef struct tagSPI2IMSK2BITS {
  union {
    struct {
      unsigned TXMSK:6;
      unsigned :1;
      unsigned TXWIEN:1;
      unsigned RXMSK:6;
      unsigned :1;
      unsigned RXWIEN:1;
    };
    struct {
      unsigned TXMSK0:1;
      unsigned TXMSK1:1;
      unsigned TXMSK2:1;
      unsigned TXMSK3:1;
      unsigned TXMSK4:1;
      unsigned TXMSK5:1;
      unsigned :2;
      unsigned RXMSK0:1;
      unsigned RXMSK1:1;
      unsigned RXMSK2:1;
      unsigned RXMSK3:1;
      unsigned RXMSK4:1;
      unsigned RXMSK5:1;
    };
  };
} typeSPI2IMSK2BITS;
sfr volatile typeSPI2IMSK2BITS SPI2IMSK2bits absolute 0x332;

typedef struct tagSPI2IMSKHBITS {
  union {
    struct {
      unsigned TXMSK:6;
      unsigned :1;
      unsigned TXWIEN:1;
      unsigned RXMSK:6;
      unsigned :1;
      unsigned RXWIEN:1;
    };
    struct {
      unsigned TXMSK0:1;
      unsigned TXMSK1:1;
      unsigned TXMSK2:1;
      unsigned TXMSK3:1;
      unsigned TXMSK4:1;
      unsigned TXMSK5:1;
      unsigned :2;
      unsigned RXMSK0:1;
      unsigned RXMSK1:1;
      unsigned RXMSK2:1;
      unsigned RXMSK3:1;
      unsigned RXMSK4:1;
      unsigned RXMSK5:1;
    };
  };
} typeSPI2IMSKHBITS;
sfr volatile typeSPI2IMSKHBITS SPI2IMSKHbits absolute 0x332;

typedef struct tagSPI2URDTLBITS {
  union {
    struct {
      unsigned SPI2URDTL:16;
    };
    struct {
      unsigned URDATA:16;
    };
  };
} typeSPI2URDTLBITS;
sfr volatile typeSPI2URDTLBITS SPI2URDTLbits absolute 0x334;

typedef struct tagSPI2URDTHBITS {
  union {
    struct {
      unsigned SPI2URDTH:16;
    };
    struct {
      unsigned URDATA:16;
    };
  };
} typeSPI2URDTHBITS;
sfr volatile typeSPI2URDTHBITS SPI2URDTHbits absolute 0x336;

typedef struct tagSPI3CON1BITS {
  union {
    struct {
      unsigned ENHBUF:1;
      unsigned SPIFE:1;
      unsigned MCLKEN:1;
      unsigned DISSCK:1;
      unsigned DISSDI:1;
      unsigned MSTEN:1;
      unsigned CKP:1;
      unsigned SSEN:1;
      unsigned CKE:1;
      unsigned SMP:1;
      unsigned MODE16:1;
      unsigned MODE32:1;
      unsigned DISSDO:1;
      unsigned SPISIDL:1;
      unsigned :1;
      unsigned SPIEN:1;
    };
    struct {
      unsigned :10;
      unsigned MODE:2;
    };
  };
} typeSPI3CON1BITS;
sfr volatile typeSPI3CON1BITS SPI3CON1bits absolute 0x338;

typedef struct tagSPI3CON1LBITS {
  union {
    struct {
      unsigned ENHBUF:1;
      unsigned SPIFE:1;
      unsigned MCLKEN:1;
      unsigned DISSCK:1;
      unsigned DISSDI:1;
      unsigned MSTEN:1;
      unsigned CKP:1;
      unsigned SSEN:1;
      unsigned CKE:1;
      unsigned SMP:1;
      unsigned MODE16:1;
      unsigned MODE32:1;
      unsigned DISSDO:1;
      unsigned SPISIDL:1;
      unsigned :1;
      unsigned SPIEN:1;
    };
    struct {
      unsigned :10;
      unsigned MODE:2;
    };
  };
} typeSPI3CON1LBITS;
sfr volatile typeSPI3CON1LBITS SPI3CON1Lbits absolute 0x338;

typedef struct tagSPI3CON1HBITS {
  union {
    struct {
      unsigned FRMCNT:3;
      unsigned FRMSYPW:1;
      unsigned MSSEN:1;
      unsigned FRMPOL:1;
      unsigned FRMSYNC:1;
      unsigned FRMEN:1;
      unsigned AUDMOD:2;
      unsigned URDTEN:1;
      unsigned AUDMONO:1;
      unsigned IGNTUR:1;
      unsigned IGNROV:1;
      unsigned SPISGNEXT:1;
      unsigned AUDEN:1;
    };
    struct {
      unsigned FRMCNT0:1;
      unsigned FRMCNT1:1;
      unsigned FRMCNT2:1;
      unsigned :5;
      unsigned AUDMOD0:1;
      unsigned AUDMOD1:1;
    };
  };
} typeSPI3CON1HBITS;
sfr volatile typeSPI3CON1HBITS SPI3CON1Hbits absolute 0x33A;

typedef struct tagSPI3CON2BITS {
  union {
    struct {
      unsigned FRMCNT:3;
      unsigned FRMSYPW:1;
      unsigned MSSEN:1;
      unsigned FRMPOL:1;
      unsigned FRMSYNC:1;
      unsigned FRMEN:1;
      unsigned AUDMOD:2;
      unsigned URDTEN:1;
      unsigned AUDMONO:1;
      unsigned IGNTUR:1;
      unsigned IGNROV:1;
      unsigned SPISGNEXT:1;
      unsigned AUDEN:1;
    };
    struct {
      unsigned FRMCNT0:1;
      unsigned FRMCNT1:1;
      unsigned FRMCNT2:1;
      unsigned :5;
      unsigned AUDMOD0:1;
      unsigned AUDMOD1:1;
    };
  };
} typeSPI3CON2BITS;
sfr volatile typeSPI3CON2BITS SPI3CON2bits absolute 0x33A;

typedef struct tagSPI3CON2LBITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI3CON2LBITS;
sfr volatile typeSPI3CON2LBITS SPI3CON2Lbits absolute 0x33C;

typedef struct tagSPI3CON3BITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI3CON3BITS;
sfr volatile typeSPI3CON3BITS SPI3CON3bits absolute 0x33C;

typedef struct tagSPI3STATLBITS {
  union {
    struct {
      unsigned SPIRBF:1;
      unsigned SPITBF:1;
      unsigned :1;
      unsigned SPITBE:1;
      unsigned :1;
      unsigned SPIRBE:1;
      unsigned SPIROV:1;
      unsigned SRMT:1;
      unsigned SPITUR:1;
      unsigned :2;
      unsigned SPIBUSY:1;
      unsigned FRMERR:1;
    };
  };
} typeSPI3STATLBITS;
sfr volatile typeSPI3STATLBITS SPI3STATLbits absolute 0x340;

typedef struct tagSPI3STATHBITS {
  union {
    struct {
      unsigned TXELM:6;
      unsigned :2;
      unsigned RXELM:6;
    };
    struct {
      unsigned TXELM0:1;
      unsigned TXELM1:1;
      unsigned TXELM2:1;
      unsigned TXELM3:1;
      unsigned TXELM4:1;
      unsigned TXELM5:1;
      unsigned :2;
      unsigned RXELM0:1;
      unsigned RXELM1:1;
      unsigned RXELM2:1;
      unsigned RXELM3:1;
      unsigned RXELM4:1;
      unsigned RXELM5:1;
    };
  };
} typeSPI3STATHBITS;
sfr volatile typeSPI3STATHBITS SPI3STATHbits absolute 0x342;

typedef struct tagSPI3BUFLBITS {
  union {
    struct {
      unsigned SPI3BUFL:16;
    };
    struct {
      unsigned DATA:16;
    };
  };
} typeSPI3BUFLBITS;
sfr volatile typeSPI3BUFLBITS SPI3BUFLbits absolute 0x344;

typedef struct tagSPI3BUFHBITS {
  union {
    struct {
      unsigned SPI3BUFH:16;
    };
    struct {
      unsigned DATA:16;
    };
  };
} typeSPI3BUFHBITS;
sfr volatile typeSPI3BUFHBITS SPI3BUFHbits absolute 0x346;

typedef struct tagSPI3BRGLBITS {
  union {
    struct {
      unsigned SPI3BRGL:13;
    };
    struct {
      unsigned BRG:13;
    };
  };
} typeSPI3BRGLBITS;
sfr volatile typeSPI3BRGLBITS SPI3BRGLbits absolute 0x348;

typedef struct tagSPI3IMSK1BITS {
  union {
    struct {
      unsigned SPIRBFEN:1;
      unsigned SPITBFEN:1;
      unsigned :1;
      unsigned SPITBEN:1;
      unsigned :1;
      unsigned SPIRBEN:1;
      unsigned SPIROVEN:1;
      unsigned SRMTEN:1;
      unsigned SPITUREN:1;
      unsigned :2;
      unsigned BUSYEN:1;
      unsigned FRMERREN:1;
    };
  };
} typeSPI3IMSK1BITS;
sfr volatile typeSPI3IMSK1BITS SPI3IMSK1bits absolute 0x34C;

typedef struct tagSPI3IMSKLBITS {
  union {
    struct {
      unsigned SPIRBFEN:1;
      unsigned SPITBFEN:1;
      unsigned :1;
      unsigned SPITBEN:1;
      unsigned :1;
      unsigned SPIRBEN:1;
      unsigned SPIROVEN:1;
      unsigned SRMTEN:1;
      unsigned SPITUREN:1;
      unsigned :2;
      unsigned BUSYEN:1;
      unsigned FRMERREN:1;
    };
  };
} typeSPI3IMSKLBITS;
sfr volatile typeSPI3IMSKLBITS SPI3IMSKLbits absolute 0x34C;

typedef struct tagSPI3IMSK2BITS {
  union {
    struct {
      unsigned TXMSK:6;
      unsigned :1;
      unsigned TXWIEN:1;
      unsigned RXMSK:6;
      unsigned :1;
      unsigned RXWIEN:1;
    };
    struct {
      unsigned TXMSK0:1;
      unsigned TXMSK1:1;
      unsigned TXMSK2:1;
      unsigned TXMSK3:1;
      unsigned TXMSK4:1;
      unsigned TXMSK5:1;
      unsigned :2;
      unsigned RXMSK0:1;
      unsigned RXMSK1:1;
      unsigned RXMSK2:1;
      unsigned RXMSK3:1;
      unsigned RXMSK4:1;
      unsigned RXMSK5:1;
    };
  };
} typeSPI3IMSK2BITS;
sfr volatile typeSPI3IMSK2BITS SPI3IMSK2bits absolute 0x34E;

typedef struct tagSPI3IMSKHBITS {
  union {
    struct {
      unsigned TXMSK:6;
      unsigned :1;
      unsigned TXWIEN:1;
      unsigned RXMSK:6;
      unsigned :1;
      unsigned RXWIEN:1;
    };
    struct {
      unsigned TXMSK0:1;
      unsigned TXMSK1:1;
      unsigned TXMSK2:1;
      unsigned TXMSK3:1;
      unsigned TXMSK4:1;
      unsigned TXMSK5:1;
      unsigned :2;
      unsigned RXMSK0:1;
      unsigned RXMSK1:1;
      unsigned RXMSK2:1;
      unsigned RXMSK3:1;
      unsigned RXMSK4:1;
      unsigned RXMSK5:1;
    };
  };
} typeSPI3IMSKHBITS;
sfr volatile typeSPI3IMSKHBITS SPI3IMSKHbits absolute 0x34E;

typedef struct tagSPI3URDTLBITS {
  union {
    struct {
      unsigned SPI3URDTL:16;
    };
    struct {
      unsigned URDATA:16;
    };
  };
} typeSPI3URDTLBITS;
sfr volatile typeSPI3URDTLBITS SPI3URDTLbits absolute 0x350;

typedef struct tagSPI3URDTHBITS {
  union {
    struct {
      unsigned SPI3URDTH:16;
    };
    struct {
      unsigned URDATA:16;
    };
  };
} typeSPI3URDTHBITS;
sfr volatile typeSPI3URDTHBITS SPI3URDTHbits absolute 0x352;

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
sfr volatile typeRPINR0BITS RPINR0bits absolute 0x38C;

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
sfr volatile typeRPINR1BITS RPINR1bits absolute 0x38E;

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
sfr volatile typeRPINR2BITS RPINR2bits absolute 0x390;

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
sfr volatile typeRPINR7BITS RPINR7bits absolute 0x39A;

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
sfr volatile typeRPINR8BITS RPINR8bits absolute 0x39C;

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
sfr volatile typeRPINR9BITS RPINR9bits absolute 0x39E;

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
sfr volatile typeRPINR11BITS RPINR11bits absolute 0x3A2;

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
sfr volatile typeRPINR17BITS RPINR17bits absolute 0x3AE;

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
sfr volatile typeRPINR18BITS RPINR18bits absolute 0x3B0;

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
sfr volatile typeRPINR19BITS RPINR19bits absolute 0x3B2;

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
sfr volatile typeRPINR20BITS RPINR20bits absolute 0x3B4;

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
sfr volatile typeRPINR21BITS RPINR21bits absolute 0x3B6;

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
sfr volatile typeRPINR22BITS RPINR22bits absolute 0x3B8;

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
sfr volatile typeRPINR23BITS RPINR23bits absolute 0x3BA;

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
sfr volatile typeRPINR27BITS RPINR27bits absolute 0x3C2;

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
sfr volatile typeRPINR28BITS RPINR28bits absolute 0x3C4;

typedef struct tagRPINR29BITS {
  union {
    struct {
      unsigned SS3RR:6;
    };
    struct {
      unsigned SS3RR0:1;
      unsigned SS3RR1:1;
      unsigned SS3RR2:1;
      unsigned SS3RR3:1;
      unsigned SS3RR4:1;
      unsigned SS3RR5:1;
    };
  };
} typeRPINR29BITS;
sfr volatile typeRPINR29BITS RPINR29bits absolute 0x3C6;

typedef struct tagRPINR30BITS {
  union {
    struct {
      unsigned MDMIRR:6;
    };
    struct {
      unsigned MDMIRR0:1;
      unsigned MDMIRR1:1;
      unsigned MDMIRR2:1;
      unsigned MDMIRR3:1;
      unsigned MDMIRR4:1;
      unsigned MDMIRR5:1;
    };
  };
} typeRPINR30BITS;
sfr volatile typeRPINR30BITS RPINR30bits absolute 0x3C8;

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
sfr volatile typeRPINR31BITS RPINR31bits absolute 0x3CA;

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
sfr volatile typeRPOR0BITS RPOR0bits absolute 0x3D6;

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
sfr volatile typeRPOR1BITS RPOR1bits absolute 0x3D8;

typedef struct tagRPOR2BITS {
  union {
    struct {
      unsigned :8;
      unsigned RP5R:6;
    };
    struct {
      unsigned :8;
      unsigned RP5R0:1;
      unsigned RP5R1:1;
      unsigned RP5R2:1;
      unsigned RP5R3:1;
      unsigned RP5R4:1;
      unsigned RP5R5:1;
    };
  };
} typeRPOR2BITS;
sfr volatile typeRPOR2BITS RPOR2bits absolute 0x3DA;

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
sfr volatile typeRPOR3BITS RPOR3bits absolute 0x3DC;

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
sfr volatile typeRPOR4BITS RPOR4bits absolute 0x3DE;

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
sfr volatile typeRPOR5BITS RPOR5bits absolute 0x3E0;

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
sfr volatile typeRPOR6BITS RPOR6bits absolute 0x3E2;

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
sfr volatile typeRPOR7BITS RPOR7bits absolute 0x3E4;

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
sfr volatile typeRPOR8BITS RPOR8bits absolute 0x3E6;

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
sfr volatile typeRPOR9BITS RPOR9bits absolute 0x3E8;

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
sfr volatile typeRPOR10BITS RPOR10bits absolute 0x3EA;

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
sfr volatile typeRPOR11BITS RPOR11bits absolute 0x3EC;

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
sfr volatile typeRPOR12BITS RPOR12bits absolute 0x3EE;

typedef struct tagDMACONBITS {
  union {
    struct {
      unsigned PRSSEL:1;
      unsigned :14;
      unsigned DMAEN:1;
    };
  };
} typeDMACONBITS;
sfr volatile typeDMACONBITS DMACONbits absolute 0x450;

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
sfr volatile typeDMACH0BITS DMACH0bits absolute 0x458;

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
sfr volatile typeDMAINT0BITS DMAINT0bits absolute 0x45A;

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
sfr volatile typeDMACH1BITS DMACH1bits absolute 0x462;

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
sfr volatile typeDMAINT1BITS DMAINT1bits absolute 0x464;

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
sfr volatile typeDMACH2BITS DMACH2bits absolute 0x46C;

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
sfr volatile typeDMAINT2BITS DMAINT2bits absolute 0x46E;

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
sfr volatile typeDMACH3BITS DMACH3bits absolute 0x476;

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
sfr volatile typeDMAINT3BITS DMAINT3bits absolute 0x478;

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
sfr volatile typeDMACH4BITS DMACH4bits absolute 0x480;

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
sfr volatile typeDMAINT4BITS DMAINT4bits absolute 0x482;

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
sfr volatile typeDMACH5BITS DMACH5bits absolute 0x48A;

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
sfr volatile typeDMAINT5BITS DMAINT5bits absolute 0x48C;

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
sfr volatile typeU1MODEBITS U1MODEbits absolute 0x500;

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
      unsigned URXEN:1;
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
sfr volatile typeU1STABITS U1STAbits absolute 0x502;

typedef struct tagU1TXREGBITS {
  union {
    struct {
      unsigned :15;
      unsigned LAST:1;
    };
  };
} typeU1TXREGBITS;
sfr volatile typeU1TXREGBITS U1TXREGbits absolute 0x504;

typedef struct tagU1ADMDBITS {
  union {
    struct {
      unsigned ADMADDR:8;
      unsigned ADMMASK:8;
    };
    struct {
      unsigned ADMADDR0:1;
      unsigned ADMADDR1:1;
      unsigned ADMADDR2:1;
      unsigned ADMADDR3:1;
      unsigned ADMADDR4:1;
      unsigned ADMADDR5:1;
      unsigned ADMADDR6:1;
      unsigned ADMADDR7:1;
      unsigned ADMMASK0:1;
      unsigned ADMMASK1:1;
      unsigned ADMMASK2:1;
      unsigned ADMMASK3:1;
      unsigned ADMMASK4:1;
      unsigned ADMMASK5:1;
      unsigned ADMMASK6:1;
      unsigned ADMMASK7:1;
    };
  };
} typeU1ADMDBITS;
sfr volatile typeU1ADMDBITS U1ADMDbits absolute 0x50A;

typedef struct tagU1SCCONBITS {
  union {
    struct {
      unsigned SCEN:1;
      unsigned PTRCL:1;
      unsigned T0PD:1;
      unsigned CONV:1;
      unsigned TXRPT:2;
    };
    struct {
      unsigned :4;
      unsigned TXRPT0:1;
      unsigned TXRPT1:1;
    };
  };
} typeU1SCCONBITS;
sfr volatile typeU1SCCONBITS U1SCCONbits absolute 0x50C;

typedef struct tagU1SCINTBITS {
  union {
    struct {
      unsigned GTCIE:1;
      unsigned WTCIE:1;
      unsigned :2;
      unsigned TXRPTIE:1;
      unsigned RXRPTIE:1;
      unsigned PARIE:1;
      unsigned :1;
      unsigned GTCIF:1;
      unsigned WTCIF:1;
      unsigned :2;
      unsigned TXRPTIF:1;
      unsigned RXRPTIF:1;
    };
  };
} typeU1SCINTBITS;
sfr volatile typeU1SCINTBITS U1SCINTbits absolute 0x50E;

typedef struct tagU1GTCBITS {
  union {
    struct {
      unsigned GTC:9;
    };
    struct {
      unsigned GTC0:1;
      unsigned GTC1:1;
      unsigned GTC2:1;
      unsigned GTC3:1;
      unsigned GTC4:1;
      unsigned GTC5:1;
      unsigned GTC6:1;
      unsigned GTC7:1;
      unsigned GTC8:1;
    };
  };
} typeU1GTCBITS;
sfr volatile typeU1GTCBITS U1GTCbits absolute 0x510;

typedef struct tagU1WTCLBITS {
  union {
    struct {
      unsigned WTCL:16;
    };
    struct {
      unsigned WTC0:1;
      unsigned WTC1:1;
      unsigned WTC2:1;
      unsigned WTC3:1;
      unsigned WTC4:1;
      unsigned WTC5:1;
      unsigned WTC6:1;
      unsigned WTC7:1;
      unsigned WTC8:1;
      unsigned WTC9:1;
      unsigned WTC10:1;
      unsigned WTC11:1;
      unsigned WTC12:1;
      unsigned WTC13:1;
      unsigned WTC14:1;
      unsigned WTC15:1;
    };
  };
} typeU1WTCLBITS;
sfr volatile typeU1WTCLBITS U1WTCLbits absolute 0x512;

typedef struct tagU1WTCHBITS {
  union {
    struct {
      unsigned WTCH:8;
    };
    struct {
      unsigned WTC16:1;
      unsigned WTC17:1;
      unsigned WTC18:1;
      unsigned WTC19:1;
      unsigned WTC20:1;
      unsigned WTC21:1;
      unsigned WTC22:1;
      unsigned WTC23:1;
    };
  };
} typeU1WTCHBITS;
sfr volatile typeU1WTCHBITS U1WTCHbits absolute 0x514;

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
sfr volatile typeU2MODEBITS U2MODEbits absolute 0x516;

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
      unsigned URXEN:1;
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
sfr volatile typeU2STABITS U2STAbits absolute 0x518;

typedef struct tagU2TXREGBITS {
  union {
    struct {
      unsigned :15;
      unsigned LAST:1;
    };
  };
} typeU2TXREGBITS;
sfr volatile typeU2TXREGBITS U2TXREGbits absolute 0x51A;

typedef struct tagU2ADMDBITS {
  union {
    struct {
      unsigned ADMADDR:8;
      unsigned ADMMASK:8;
    };
    struct {
      unsigned ADMADDR0:1;
      unsigned ADMADDR1:1;
      unsigned ADMADDR2:1;
      unsigned ADMADDR3:1;
      unsigned ADMADDR4:1;
      unsigned ADMADDR5:1;
      unsigned ADMADDR6:1;
      unsigned ADMADDR7:1;
      unsigned ADMMASK0:1;
      unsigned ADMMASK1:1;
      unsigned ADMMASK2:1;
      unsigned ADMMASK3:1;
      unsigned ADMMASK4:1;
      unsigned ADMMASK5:1;
      unsigned ADMMASK6:1;
      unsigned ADMMASK7:1;
    };
  };
} typeU2ADMDBITS;
sfr volatile typeU2ADMDBITS U2ADMDbits absolute 0x520;

typedef struct tagU2SCCONBITS {
  union {
    struct {
      unsigned SCEN:1;
      unsigned PTRCL:1;
      unsigned T0PD:1;
      unsigned CONV:1;
      unsigned TXRPT:2;
    };
    struct {
      unsigned :4;
      unsigned TXRPT0:1;
      unsigned TXRPT1:1;
    };
  };
} typeU2SCCONBITS;
sfr volatile typeU2SCCONBITS U2SCCONbits absolute 0x522;

typedef struct tagU2SCINTBITS {
  union {
    struct {
      unsigned GTCIE:1;
      unsigned WTCIE:1;
      unsigned :2;
      unsigned TXRPTIE:1;
      unsigned RXRPTIE:1;
      unsigned PARIE:1;
      unsigned :1;
      unsigned GTCIF:1;
      unsigned WTCIF:1;
      unsigned :2;
      unsigned TXRPTIF:1;
      unsigned RXRPTIF:1;
    };
  };
} typeU2SCINTBITS;
sfr volatile typeU2SCINTBITS U2SCINTbits absolute 0x524;

typedef struct tagU2GTCBITS {
  union {
    struct {
      unsigned GTC:9;
    };
    struct {
      unsigned GTC0:1;
      unsigned GTC1:1;
      unsigned GTC2:1;
      unsigned GTC3:1;
      unsigned GTC4:1;
      unsigned GTC5:1;
      unsigned GTC6:1;
      unsigned GTC7:1;
      unsigned GTC8:1;
    };
  };
} typeU2GTCBITS;
sfr volatile typeU2GTCBITS U2GTCbits absolute 0x526;

typedef struct tagU2WTCLBITS {
  union {
    struct {
      unsigned WTCL:16;
    };
    struct {
      unsigned WTC0:1;
      unsigned WTC1:1;
      unsigned WTC2:1;
      unsigned WTC3:1;
      unsigned WTC4:1;
      unsigned WTC5:1;
      unsigned WTC6:1;
      unsigned WTC7:1;
      unsigned WTC8:1;
      unsigned WTC9:1;
      unsigned WTC10:1;
      unsigned WTC11:1;
      unsigned WTC12:1;
      unsigned WTC13:1;
      unsigned WTC14:1;
      unsigned WTC15:1;
    };
  };
} typeU2WTCLBITS;
sfr volatile typeU2WTCLBITS U2WTCLbits absolute 0x528;

typedef struct tagU2WTCHBITS {
  union {
    struct {
      unsigned WTCH:8;
    };
    struct {
      unsigned WTC16:1;
      unsigned WTC17:1;
      unsigned WTC18:1;
      unsigned WTC19:1;
      unsigned WTC20:1;
      unsigned WTC21:1;
      unsigned WTC22:1;
      unsigned WTC23:1;
    };
  };
} typeU2WTCHBITS;
sfr volatile typeU2WTCHBITS U2WTCHbits absolute 0x52A;

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
sfr volatile typeU3MODEBITS U3MODEbits absolute 0x52C;

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
      unsigned URXEN:1;
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
sfr volatile typeU3STABITS U3STAbits absolute 0x52E;

typedef struct tagU3TXREGBITS {
  union {
    struct {
      unsigned :15;
      unsigned LAST:1;
    };
  };
} typeU3TXREGBITS;
sfr volatile typeU3TXREGBITS U3TXREGbits absolute 0x530;

typedef struct tagU3ADMDBITS {
  union {
    struct {
      unsigned ADMADDR:8;
      unsigned ADMMASK:8;
    };
    struct {
      unsigned ADMADDR0:1;
      unsigned ADMADDR1:1;
      unsigned ADMADDR2:1;
      unsigned ADMADDR3:1;
      unsigned ADMADDR4:1;
      unsigned ADMADDR5:1;
      unsigned ADMADDR6:1;
      unsigned ADMADDR7:1;
      unsigned ADMMASK0:1;
      unsigned ADMMASK1:1;
      unsigned ADMMASK2:1;
      unsigned ADMMASK3:1;
      unsigned ADMMASK4:1;
      unsigned ADMMASK5:1;
      unsigned ADMMASK6:1;
      unsigned ADMMASK7:1;
    };
  };
} typeU3ADMDBITS;
sfr volatile typeU3ADMDBITS U3ADMDbits absolute 0x536;

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
sfr volatile typeU4MODEBITS U4MODEbits absolute 0x538;

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
      unsigned URXEN:1;
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
sfr volatile typeU4STABITS U4STAbits absolute 0x53A;

typedef struct tagU4TXREGBITS {
  union {
    struct {
      unsigned :15;
      unsigned LAST:1;
    };
  };
} typeU4TXREGBITS;
sfr volatile typeU4TXREGBITS U4TXREGbits absolute 0x53C;

typedef struct tagU4ADMDBITS {
  union {
    struct {
      unsigned ADMADDR:8;
      unsigned ADMMASK:8;
    };
    struct {
      unsigned ADMADDR0:1;
      unsigned ADMADDR1:1;
      unsigned ADMADDR2:1;
      unsigned ADMADDR3:1;
      unsigned ADMADDR4:1;
      unsigned ADMADDR5:1;
      unsigned ADMADDR6:1;
      unsigned ADMADDR7:1;
      unsigned ADMMASK0:1;
      unsigned ADMMASK1:1;
      unsigned ADMMASK2:1;
      unsigned ADMMASK3:1;
      unsigned ADMMASK4:1;
      unsigned ADMMASK5:1;
      unsigned ADMMASK6:1;
      unsigned ADMMASK7:1;
    };
  };
} typeU4ADMDBITS;
sfr volatile typeU4ADMDBITS U4ADMDbits absolute 0x542;

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

