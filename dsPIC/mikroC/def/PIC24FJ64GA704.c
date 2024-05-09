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

const unsigned long __FLASH_SIZE = 0x0000AF00;
const unsigned long __XRAM_RAM_SIZE = 0x00003FFF;
const unsigned long __XRAM_RAM_START = 0x800;
const long __CONST_FAR_PREFIX = 0x0;
const char __FOSC_PER_CYC = 2;

// Primary Interrupt Vector Table Constants

const unsigned IVT_ADDR_OSCILLATORFAIL       = 0x0004;
const unsigned IVT_ADDR_ADDRESSERROR         = 0x0006;
const unsigned IVT_ADDR_NVMERROR             = 0x0008;
const unsigned IVT_ADDR_STACKERROR           = 0x000A;
const unsigned IVT_ADDR_MATHERROR            = 0x000C;
const unsigned IVT_ADDR_RESERVEDTRAP5        = 0x000E;
const unsigned IVT_ADDR_GENERALERROR         = 0x0010;
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
const unsigned IVT_ADDR_NVMINTERRUPT         = 0x0032;
const unsigned IVT_ADDR_SI2C1INTERRUPT       = 0x0034;
const unsigned IVT_ADDR_MI2C1INTERRUPT       = 0x0036;
const unsigned IVT_ADDR_COMPINTERRUPT        = 0x0038;
const unsigned IVT_ADDR_IOCINTERRUPT         = 0x003A;
const unsigned IVT_ADDR_INT1INTERRUPT        = 0x003C;
const unsigned IVT_ADDR_INTERRUPT21          = 0x003E;
const unsigned IVT_ADDR_INTERRUPT22          = 0x0040;
const unsigned IVT_ADDR_INTERRUPT23          = 0x0042;
const unsigned IVT_ADDR_DMA2INTERRUPT        = 0x0044;
const unsigned IVT_ADDR_OC3INTERRUPT         = 0x0046;
const unsigned IVT_ADDR_INTERRUPT26          = 0x0048;
const unsigned IVT_ADDR_INTERRUPT27          = 0x004A;
const unsigned IVT_ADDR_INTERRUPT28          = 0x004C;
const unsigned IVT_ADDR_INT2INTERRUPT        = 0x004E;
const unsigned IVT_ADDR_U2RXINTERRUPT        = 0x0050;
const unsigned IVT_ADDR_U2TXINTERRUPT        = 0x0052;
const unsigned IVT_ADDR_SPI2INTERRUPT        = 0x0054;
const unsigned IVT_ADDR_SPI2TXINTERRUPT      = 0x0056;
const unsigned IVT_ADDR_INTERRUPT34          = 0x0058;
const unsigned IVT_ADDR_INTERRUPT35          = 0x005A;
const unsigned IVT_ADDR_DMA3INTERRUPT        = 0x005C;
const unsigned IVT_ADDR_IC3INTERRUPT         = 0x005E;
const unsigned IVT_ADDR_INTERRUPT38          = 0x0060;
const unsigned IVT_ADDR_INTERRUPT39          = 0x0062;
const unsigned IVT_ADDR_INTERRUPT40          = 0x0064;
const unsigned IVT_ADDR_OC5INTERRUPT         = 0x0066;
const unsigned IVT_ADDR_OC6INTERRUPT         = 0x0068;
const unsigned IVT_ADDR_CCT3INTERRUPT        = 0x006A;
const unsigned IVT_ADDR_CCT4INTERRUPT        = 0x006C;
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
const unsigned IVT_ADDR_SPI1RXINTERRUPT      = 0x0088;
const unsigned IVT_ADDR_SPI2RXINTERRUPT      = 0x008A;
const unsigned IVT_ADDR_SPI3RXINTERRUPT      = 0x008C;
const unsigned IVT_ADDR_DMA5INTERRUPT        = 0x008E;
const unsigned IVT_ADDR_RTCCINTERRUPT        = 0x0090;
const unsigned IVT_ADDR_CCP1INTERRUPT        = 0x0092;
const unsigned IVT_ADDR_CCP2INTERRUPT        = 0x0094;
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
const unsigned IVT_ADDR_I2C1BCINTERRUPT      = 0x00BC;
const unsigned IVT_ADDR_I2C2BCINTERRUPT      = 0x00BE;
const unsigned IVT_ADDR_INTERRUPT86          = 0x00C0;
const unsigned IVT_ADDR_INTERRUPT87          = 0x00C2;
const unsigned IVT_ADDR_INTERRUPT88          = 0x00C4;
const unsigned IVT_ADDR_INTERRUPT89          = 0x00C6;
const unsigned IVT_ADDR_SPI3INTERRUPT        = 0x00C8;
const unsigned IVT_ADDR_SPI3TXINTERRUPT      = 0x00CA;
const unsigned IVT_ADDR_INTERRUPT92          = 0x00CC;
const unsigned IVT_ADDR_INTERRUPT93          = 0x00CE;
const unsigned IVT_ADDR_CCP3INTERRUPT        = 0x00D0;
const unsigned IVT_ADDR_CCP4INTERRUPT        = 0x00D2;
const unsigned IVT_ADDR_CLC1INTERRUPT        = 0x00D4;
const unsigned IVT_ADDR_CLC2INTERRUPT        = 0x00D6;
const unsigned IVT_ADDR_INTERRUPT98          = 0x00D8;
const unsigned IVT_ADDR_INTERRUPT99          = 0x00DA;
const unsigned IVT_ADDR_INTERRUPT100         = 0x00DC;
const unsigned IVT_ADDR_CCT1INTERRUPT        = 0x00DE;
const unsigned IVT_ADDR_CCT2INTERRUPT        = 0x00E0;
const unsigned IVT_ADDR_INTERRUPT103         = 0x00E2;
const unsigned IVT_ADDR_INTERRUPT104         = 0x00E4;
const unsigned IVT_ADDR_INTERRUPT105         = 0x00E6;
const unsigned IVT_ADDR_FSTINTERRUPT         = 0x00E8;
const unsigned IVT_ADDR_INTERRUPT107         = 0x00EA;
const unsigned IVT_ADDR_ECCINTERRUPT         = 0x00EC;
const unsigned IVT_ADDR_I2C3BCINTERRUPT      = 0x00EE;
const unsigned IVT_ADDR_RTCCTSINTERRUPT      = 0x00F0;
const unsigned IVT_ADDR_INTERRUPT111         = 0x00F2;
const unsigned IVT_ADDR_INTERRUPT112         = 0x00F4;
const unsigned IVT_ADDR_INTERRUPT113         = 0x00F6;
const unsigned IVT_ADDR_INTERRUPT114         = 0x00F8;
const unsigned IVT_ADDR_INTERRUPT115         = 0x00FA;
const unsigned IVT_ADDR_INTERRUPT116         = 0x00FC;
const unsigned IVT_ADDR_JTAGINTERRUPT        = 0x00FE;

// Alternate Interrupt Vector Table Constants

const unsigned AIVT_ADDR_ALTRESERVEDTRAP0     = 0x0800;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP1     = 0x0802;
const unsigned AIVT_ADDR_ALTOSCILLATORFAIL    = 0x0804;
const unsigned AIVT_ADDR_ALTADDRESSERROR      = 0x0806;
const unsigned AIVT_ADDR_ALTNVMERROR          = 0x0808;
const unsigned AIVT_ADDR_ALTSTACKERROR        = 0x080A;
const unsigned AIVT_ADDR_ALTMATHERROR         = 0x080C;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP5     = 0x080E;
const unsigned AIVT_ADDR_ALTGENERALERROR      = 0x0810;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP7     = 0x0812;
const unsigned AIVT_ADDR_ALTINT0INTERRUPT     = 0x0814;
const unsigned AIVT_ADDR_ALTIC1INTERRUPT      = 0x0816;
const unsigned AIVT_ADDR_ALTOC1INTERRUPT      = 0x0818;
const unsigned AIVT_ADDR_ALTT1INTERRUPT       = 0x081A;
const unsigned AIVT_ADDR_ALTDMA0INTERRUPT     = 0x081C;
const unsigned AIVT_ADDR_ALTIC2INTERRUPT      = 0x081E;
const unsigned AIVT_ADDR_ALTOC2INTERRUPT      = 0x0820;
const unsigned AIVT_ADDR_ALTT2INTERRUPT       = 0x0822;
const unsigned AIVT_ADDR_ALTT3INTERRUPT       = 0x0824;
const unsigned AIVT_ADDR_ALTSPI1INTERRUPT     = 0x0826;
const unsigned AIVT_ADDR_ALTSPI1TXINTERRUPT   = 0x0828;
const unsigned AIVT_ADDR_ALTU1RXINTERRUPT     = 0x082A;
const unsigned AIVT_ADDR_ALTU1TXINTERRUPT     = 0x082C;
const unsigned AIVT_ADDR_ALTADC1INTERRUPT     = 0x082E;
const unsigned AIVT_ADDR_ALTDMA1INTERRUPT     = 0x0830;
const unsigned AIVT_ADDR_ALTNVMINTERRUPT      = 0x0832;
const unsigned AIVT_ADDR_ALTSI2C1INTERRUPT    = 0x0834;
const unsigned AIVT_ADDR_ALTMI2C1INTERRUPT    = 0x0836;
const unsigned AIVT_ADDR_ALTCOMPINTERRUPT     = 0x0838;
const unsigned AIVT_ADDR_ALTIOCINTERRUPT      = 0x083A;
const unsigned AIVT_ADDR_ALTINT1INTERRUPT     = 0x083C;
const unsigned AIVT_ADDR_ALTINTERRUPT21       = 0x083E;
const unsigned AIVT_ADDR_ALTINTERRUPT22       = 0x0840;
const unsigned AIVT_ADDR_ALTINTERRUPT23       = 0x0842;
const unsigned AIVT_ADDR_ALTDMA2INTERRUPT     = 0x0844;
const unsigned AIVT_ADDR_ALTOC3INTERRUPT      = 0x0846;
const unsigned AIVT_ADDR_ALTINTERRUPT26       = 0x0848;
const unsigned AIVT_ADDR_ALTINTERRUPT27       = 0x084A;
const unsigned AIVT_ADDR_ALTINTERRUPT28       = 0x084C;
const unsigned AIVT_ADDR_ALTINT2INTERRUPT     = 0x084E;
const unsigned AIVT_ADDR_ALTU2RXINTERRUPT     = 0x0850;
const unsigned AIVT_ADDR_ALTU2TXINTERRUPT     = 0x0852;
const unsigned AIVT_ADDR_ALTSPI2INTERRUPT     = 0x0854;
const unsigned AIVT_ADDR_ALTSPI2TXINTERRUPT   = 0x0856;
const unsigned AIVT_ADDR_ALTINTERRUPT34       = 0x0858;
const unsigned AIVT_ADDR_ALTINTERRUPT35       = 0x085A;
const unsigned AIVT_ADDR_ALTDMA3INTERRUPT     = 0x085C;
const unsigned AIVT_ADDR_ALTIC3INTERRUPT      = 0x085E;
const unsigned AIVT_ADDR_ALTINTERRUPT38       = 0x0860;
const unsigned AIVT_ADDR_ALTINTERRUPT39       = 0x0862;
const unsigned AIVT_ADDR_ALTINTERRUPT40       = 0x0864;
const unsigned AIVT_ADDR_ALTOC5INTERRUPT      = 0x0866;
const unsigned AIVT_ADDR_ALTOC6INTERRUPT      = 0x0868;
const unsigned AIVT_ADDR_ALTCCT3INTERRUPT     = 0x086A;
const unsigned AIVT_ADDR_ALTCCT4INTERRUPT     = 0x086C;
const unsigned AIVT_ADDR_ALTPMPINTERRUPT      = 0x086E;
const unsigned AIVT_ADDR_ALTDMA4INTERRUPT     = 0x0870;
const unsigned AIVT_ADDR_ALTINTERRUPT47       = 0x0872;
const unsigned AIVT_ADDR_ALTINTERRUPT48       = 0x0874;
const unsigned AIVT_ADDR_ALTSI2C2INTERRUPT    = 0x0876;
const unsigned AIVT_ADDR_ALTMI2C2INTERRUPT    = 0x0878;
const unsigned AIVT_ADDR_ALTINTERRUPT51       = 0x087A;
const unsigned AIVT_ADDR_ALTINTERRUPT52       = 0x087C;
const unsigned AIVT_ADDR_ALTINT3INTERRUPT     = 0x087E;
const unsigned AIVT_ADDR_ALTINT4INTERRUPT     = 0x0880;
const unsigned AIVT_ADDR_ALTINTERRUPT55       = 0x0882;
const unsigned AIVT_ADDR_ALTINTERRUPT56       = 0x0884;
const unsigned AIVT_ADDR_ALTINTERRUPT57       = 0x0886;
const unsigned AIVT_ADDR_ALTSPI1RXINTERRUPT   = 0x0888;
const unsigned AIVT_ADDR_ALTSPI2RXINTERRUPT   = 0x088A;
const unsigned AIVT_ADDR_ALTSPI3RXINTERRUPT   = 0x088C;
const unsigned AIVT_ADDR_ALTDMA5INTERRUPT     = 0x088E;
const unsigned AIVT_ADDR_ALTRTCCINTERRUPT     = 0x0890;
const unsigned AIVT_ADDR_ALTCCP1INTERRUPT     = 0x0892;
const unsigned AIVT_ADDR_ALTCCP2INTERRUPT     = 0x0894;
const unsigned AIVT_ADDR_ALTU1ERRINTERRUPT    = 0x0896;
const unsigned AIVT_ADDR_ALTU2ERRINTERRUPT    = 0x0898;
const unsigned AIVT_ADDR_ALTCRCINTERRUPT      = 0x089A;
const unsigned AIVT_ADDR_ALTINTERRUPT68       = 0x089C;
const unsigned AIVT_ADDR_ALTINTERRUPT69       = 0x089E;
const unsigned AIVT_ADDR_ALTINTERRUPT70       = 0x08A0;
const unsigned AIVT_ADDR_ALTINTERRUPT71       = 0x08A2;
const unsigned AIVT_ADDR_ALTLVDINTERRUPT      = 0x08A4;
const unsigned AIVT_ADDR_ALTINTERRUPT73       = 0x08A6;
const unsigned AIVT_ADDR_ALTINTERRUPT74       = 0x08A8;
const unsigned AIVT_ADDR_ALTINTERRUPT75       = 0x08AA;
const unsigned AIVT_ADDR_ALTINTERRUPT76       = 0x08AC;
const unsigned AIVT_ADDR_ALTCTMUINTERRUPT     = 0x08AE;
const unsigned AIVT_ADDR_ALTINTERRUPT78       = 0x08B0;
const unsigned AIVT_ADDR_ALTINTERRUPT79       = 0x08B2;
const unsigned AIVT_ADDR_ALTINTERRUPT80       = 0x08B4;
const unsigned AIVT_ADDR_ALTINTERRUPT81       = 0x08B6;
const unsigned AIVT_ADDR_ALTINTERRUPT82       = 0x08B8;
const unsigned AIVT_ADDR_ALTINTERRUPT83       = 0x08BA;
const unsigned AIVT_ADDR_ALTI2C1BCINTERRUPT   = 0x08BC;
const unsigned AIVT_ADDR_ALTI2C2BCINTERRUPT   = 0x08BE;
const unsigned AIVT_ADDR_ALTINTERRUPT86       = 0x08C0;
const unsigned AIVT_ADDR_ALTINTERRUPT87       = 0x08C2;
const unsigned AIVT_ADDR_ALTINTERRUPT88       = 0x08C4;
const unsigned AIVT_ADDR_ALTINTERRUPT89       = 0x08C6;
const unsigned AIVT_ADDR_ALTSPI3INTERRUPT     = 0x08C8;
const unsigned AIVT_ADDR_ALTSPI3TXINTERRUPT   = 0x08CA;
const unsigned AIVT_ADDR_ALTINTERRUPT92       = 0x08CC;
const unsigned AIVT_ADDR_ALTINTERRUPT93       = 0x08CE;
const unsigned AIVT_ADDR_ALTCCP3INTERRUPT     = 0x08D0;
const unsigned AIVT_ADDR_ALTCCP4INTERRUPT     = 0x08D2;
const unsigned AIVT_ADDR_ALTCLC1INTERRUPT     = 0x08D4;
const unsigned AIVT_ADDR_ALTCLC2INTERRUPT     = 0x08D6;
const unsigned AIVT_ADDR_ALTINTERRUPT98       = 0x08D8;
const unsigned AIVT_ADDR_ALTINTERRUPT99       = 0x08DA;
const unsigned AIVT_ADDR_ALTINTERRUPT100      = 0x08DC;
const unsigned AIVT_ADDR_ALTCCT1INTERRUPT     = 0x08DE;
const unsigned AIVT_ADDR_ALTCCT2INTERRUPT     = 0x08E0;
const unsigned AIVT_ADDR_ALTINTERRUPT103      = 0x08E2;
const unsigned AIVT_ADDR_ALTINTERRUPT104      = 0x08E4;
const unsigned AIVT_ADDR_ALTINTERRUPT105      = 0x08E6;
const unsigned AIVT_ADDR_ALTFSTINTERRUPT      = 0x08E8;
const unsigned AIVT_ADDR_ALTINTERRUPT107      = 0x08EA;
const unsigned AIVT_ADDR_ALTECCINTERRUPT      = 0x08EC;
const unsigned AIVT_ADDR_ALTI2C3BCINTERRUPT   = 0x08EE;
const unsigned AIVT_ADDR_ALTRTCCTSINTERRUPT   = 0x08F0;
const unsigned AIVT_ADDR_ALTINTERRUPT111      = 0x08F2;
const unsigned AIVT_ADDR_ALTINTERRUPT112      = 0x08F4;
const unsigned AIVT_ADDR_ALTINTERRUPT113      = 0x08F6;
const unsigned AIVT_ADDR_ALTINTERRUPT114      = 0x08F8;
const unsigned AIVT_ADDR_ALTINTERRUPT115      = 0x08FA;
const unsigned AIVT_ADDR_ALTINTERRUPT116      = 0x08FC;
const unsigned AIVT_ADDR_ALTJTAGINTERRUPT     = 0x08FE;

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
    const register unsigned short int AIVTEN = 8;
    sbit  AIVTEN_bit at INTCON2.B8;
    const register unsigned short int SWTRAP = 13;
    sbit  SWTRAP_bit at INTCON2.B13;
    const register unsigned short int DISI = 14;
    sbit  DISI_bit at INTCON2.B14;
    const register unsigned short int GIE = 15;
    sbit  GIE_bit at INTCON2.B15;

sfr unsigned int   volatile INTCON4          absolute 0x86;
    const register unsigned short int SGHT = 0;
    sbit  SGHT_bit at INTCON4.B0;
    const register unsigned short int ECCDBE = 1;
    sbit  ECCDBE_bit at INTCON4.B1;

sfr unsigned int   volatile IFS0             absolute 0x88;
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
    const register unsigned short int NVMIF = 15;
    sbit  NVMIF_bit at IFS0.B15;

sfr unsigned int   volatile IFS1             absolute 0x8A;
    const register unsigned short int SI2C1IF = 0;
    sbit  SI2C1IF_bit at IFS1.B0;
    const register unsigned short int MI2C1IF = 1;
    sbit  MI2C1IF_bit at IFS1.B1;
    const register unsigned short int CMIF = 2;
    sbit  CMIF_bit at IFS1.B2;
    const register unsigned short int IOCIF = 3;
    sbit  IOCIF_bit at IFS1.B3;
    const register unsigned short int INT1IF = 4;
    sbit  INT1IF_bit at IFS1.B4;
    const register unsigned short int DMA2IF = 8;
    sbit  DMA2IF_bit at IFS1.B8;
    const register unsigned short int OC3IF = 9;
    sbit  OC3IF_bit at IFS1.B9;
    const register unsigned short int INT2IF = 13;
    sbit  INT2IF_bit at IFS1.B13;
    const register unsigned short int U2RXIF = 14;
    sbit  U2RXIF_bit at IFS1.B14;
    const register unsigned short int U2TXIF = 15;
    sbit  U2TXIF_bit at IFS1.B15;

sfr unsigned int   volatile IFS2             absolute 0x8C;
    const register unsigned short int SPI2IF = 0;
    sbit  SPI2IF_bit at IFS2.B0;
    const register unsigned short int SPI2TXIF = 1;
    sbit  SPI2TXIF_bit at IFS2.B1;
    const register unsigned short int DMA3IF = 4;
    sbit  DMA3IF_bit at IFS2.B4;
    const register unsigned short int IC3IF = 5;
    sbit  IC3IF_bit at IFS2.B5;
    const register unsigned short int CCT3IF = 11;
    sbit  CCT3IF_bit at IFS2.B11;
    const register unsigned short int CCT4IF = 12;
    sbit  CCT4IF_bit at IFS2.B12;
    const register unsigned short int PMPIF = 13;
    sbit  PMPIF_bit at IFS2.B13;
    const register unsigned short int DMA4IF = 14;
    sbit  DMA4IF_bit at IFS2.B14;

sfr unsigned int   volatile IFS3             absolute 0x8E;
    const register unsigned short int SI2C2IF = 1;
    sbit  SI2C2IF_bit at IFS3.B1;
    const register unsigned short int MI2C2IF = 2;
    sbit  MI2C2IF_bit at IFS3.B2;
    const register unsigned short int INT3IF = 5;
    sbit  INT3IF_bit at IFS3.B5;
    const register unsigned short int INT4IF = 6;
    sbit  INT4IF_bit at IFS3.B6;
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
    const register unsigned short int CCP1IF = 15;
    sbit  CCP1IF_bit at IFS3.B15;

sfr unsigned int   volatile IFS4             absolute 0x90;
    const register unsigned short int CCP2IF = 0;
    sbit  CCP2IF_bit at IFS4.B0;
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

sfr unsigned int   volatile IFS5             absolute 0x92;
    const register unsigned short int I2C1BCIF = 4;
    sbit  I2C1BCIF_bit at IFS5.B4;
    const register unsigned short int I2C2BCIF = 5;
    sbit  I2C2BCIF_bit at IFS5.B5;
    const register unsigned short int SPI3IF = 10;
    sbit  SPI3IF_bit at IFS5.B10;
    const register unsigned short int SPI3TXIF = 11;
    sbit  SPI3TXIF_bit at IFS5.B11;
    const register unsigned short int CCP3IF = 14;
    sbit  CCP3IF_bit at IFS5.B14;
    const register unsigned short int CCP4IF = 15;
    sbit  CCP4IF_bit at IFS5.B15;

sfr unsigned int   volatile IFS6             absolute 0x94;
    const register unsigned short int CLC1IF = 0;
    sbit  CLC1IF_bit at IFS6.B0;
    const register unsigned short int CLC2IF = 1;
    sbit  CLC2IF_bit at IFS6.B1;
    const register unsigned short int CCT1IF = 5;
    sbit  CCT1IF_bit at IFS6.B5;
    const register unsigned short int CCT2IF = 6;
    sbit  CCT2IF_bit at IFS6.B6;
    const register unsigned short int FSTIF = 10;
    sbit  FSTIF_bit at IFS6.B10;
    const register unsigned short int ECCIF = 12;
    sbit  ECCIF_bit at IFS6.B12;
    const register unsigned short int RTCCTSIF = 14;
    sbit  RTCCTSIF_bit at IFS6.B14;

sfr unsigned int   volatile IFS7             absolute 0x96;
    const register unsigned short int JTAGIF = 5;
    sbit  JTAGIF_bit at IFS7.B5;

sfr unsigned int            IEC0             absolute 0x98;
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
    const register unsigned short int NVMIE = 15;
    sbit  NVMIE_bit at IEC0.B15;

sfr unsigned int            IEC1             absolute 0x9A;
    const register unsigned short int SI2C1IE = 0;
    sbit  SI2C1IE_bit at IEC1.B0;
    const register unsigned short int MI2C1IE = 1;
    sbit  MI2C1IE_bit at IEC1.B1;
    const register unsigned short int CMIE = 2;
    sbit  CMIE_bit at IEC1.B2;
    const register unsigned short int IOCIE = 3;
    sbit  IOCIE_bit at IEC1.B3;
    const register unsigned short int INT1IE = 4;
    sbit  INT1IE_bit at IEC1.B4;
    const register unsigned short int DMA2IE = 8;
    sbit  DMA2IE_bit at IEC1.B8;
    const register unsigned short int OC3IE = 9;
    sbit  OC3IE_bit at IEC1.B9;
    const register unsigned short int INT2IE = 13;
    sbit  INT2IE_bit at IEC1.B13;
    const register unsigned short int U2RXIE = 14;
    sbit  U2RXIE_bit at IEC1.B14;
    const register unsigned short int U2TXIE = 15;
    sbit  U2TXIE_bit at IEC1.B15;

sfr unsigned int            IEC2             absolute 0x9C;
    const register unsigned short int SPI2IE = 0;
    sbit  SPI2IE_bit at IEC2.B0;
    const register unsigned short int SPI2TXIE = 1;
    sbit  SPI2TXIE_bit at IEC2.B1;
    const register unsigned short int DMA3IE = 4;
    sbit  DMA3IE_bit at IEC2.B4;
    const register unsigned short int IC3IE = 5;
    sbit  IC3IE_bit at IEC2.B5;
    const register unsigned short int CCT3IE = 11;
    sbit  CCT3IE_bit at IEC2.B11;
    const register unsigned short int CCT4IE = 12;
    sbit  CCT4IE_bit at IEC2.B12;
    const register unsigned short int PMPIE = 13;
    sbit  PMPIE_bit at IEC2.B13;
    const register unsigned short int DMA4IE = 14;
    sbit  DMA4IE_bit at IEC2.B14;

sfr unsigned int            IEC3             absolute 0x9E;
    const register unsigned short int SI2C2IE = 1;
    sbit  SI2C2IE_bit at IEC3.B1;
    const register unsigned short int MI2C2IE = 2;
    sbit  MI2C2IE_bit at IEC3.B2;
    const register unsigned short int INT3IE = 5;
    sbit  INT3IE_bit at IEC3.B5;
    const register unsigned short int INT4IE = 6;
    sbit  INT4IE_bit at IEC3.B6;
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
    const register unsigned short int CCP1IE = 15;
    sbit  CCP1IE_bit at IEC3.B15;

sfr unsigned int            IEC4             absolute 0xA0;
    const register unsigned short int CCP2IE = 0;
    sbit  CCP2IE_bit at IEC4.B0;
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

sfr unsigned int            IEC5             absolute 0xA2;
    const register unsigned short int I2C1BCIE = 4;
    sbit  I2C1BCIE_bit at IEC5.B4;
    const register unsigned short int I2C2BCIE = 5;
    sbit  I2C2BCIE_bit at IEC5.B5;
    const register unsigned short int SPI3IE = 10;
    sbit  SPI3IE_bit at IEC5.B10;
    const register unsigned short int SPI3TXIE = 11;
    sbit  SPI3TXIE_bit at IEC5.B11;
    const register unsigned short int CCP3IE = 14;
    sbit  CCP3IE_bit at IEC5.B14;
    const register unsigned short int CCP4IE = 15;
    sbit  CCP4IE_bit at IEC5.B15;

sfr unsigned int   volatile IEC6             absolute 0xA4;
    const register unsigned short int CLC1IE = 0;
    sbit  CLC1IE_bit at IEC6.B0;
    const register unsigned short int CLC2IE = 1;
    sbit  CLC2IE_bit at IEC6.B1;
    const register unsigned short int CCT1IE = 5;
    sbit  CCT1IE_bit at IEC6.B5;
    const register unsigned short int CCT2IE = 6;
    sbit  CCT2IE_bit at IEC6.B6;
    const register unsigned short int FSTIE = 10;
    sbit  FSTIE_bit at IEC6.B10;
    const register unsigned short int ECCIE = 12;
    sbit  ECCIE_bit at IEC6.B12;
    const register unsigned short int RTCCTSIE = 14;
    sbit  RTCCTSIE_bit at IEC6.B14;

sfr unsigned int   volatile IEC7             absolute 0xA6;
    const register unsigned short int JTAGIE = 5;
    sbit  JTAGIE_bit at IEC7.B5;

sfr unsigned int            IPC0             absolute 0xA8;
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

sfr unsigned int            IPC1             absolute 0xAA;
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

sfr unsigned int            IPC2             absolute 0xAC;
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

sfr unsigned int            IPC3             absolute 0xAE;
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
    const register unsigned short int NVMIP0 = 12;
    sbit  NVMIP0_bit at IPC3.B12;
    const register unsigned short int NVMIP1 = 13;
    sbit  NVMIP1_bit at IPC3.B13;
    const register unsigned short int NVMIP2 = 14;
    sbit  NVMIP2_bit at IPC3.B14;

sfr unsigned int            IPC4             absolute 0xB0;
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

sfr unsigned int            IPC5             absolute 0xB2;
    const register unsigned short int INT1IP0 = 0;
    sbit  INT1IP0_bit at IPC5.B0;
    const register unsigned short int INT1IP1 = 1;
    sbit  INT1IP1_bit at IPC5.B1;
    const register unsigned short int INT1IP2 = 2;
    sbit  INT1IP2_bit at IPC5.B2;
    const register unsigned short int CCP5IP0 = 8;
    sbit  CCP5IP0_bit at IPC5.B8;
    const register unsigned short int CCP5IP1 = 9;
    sbit  CCP5IP1_bit at IPC5.B9;
    const register unsigned short int CCP5IP2 = 10;
    sbit  CCP5IP2_bit at IPC5.B10;
    const register unsigned short int CCP6IP0 = 12;
    sbit  CCP6IP0_bit at IPC5.B12;
    const register unsigned short int CCP6IP1 = 13;
    sbit  CCP6IP1_bit at IPC5.B13;
    const register unsigned short int CCP6IP2 = 14;
    sbit  CCP6IP2_bit at IPC5.B14;

sfr unsigned int            IPC6             absolute 0xB4;
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
    const register unsigned short int T4IP0 = 12;
    sbit  T4IP0_bit at IPC6.B12;
    const register unsigned short int T4IP1 = 13;
    sbit  T4IP1_bit at IPC6.B13;
    const register unsigned short int T4IP2 = 14;
    sbit  T4IP2_bit at IPC6.B14;

sfr unsigned int            IPC7             absolute 0xB6;
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

sfr unsigned int            IPC8             absolute 0xB8;
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

sfr unsigned int            IPC9             absolute 0xBA;
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

sfr unsigned int            IPC10            absolute 0xBC;
    const register unsigned short int CCT3IP0 = 12;
    sbit  CCT3IP0_bit at IPC10.B12;
    const register unsigned short int CCT3IP1 = 13;
    sbit  CCT3IP1_bit at IPC10.B13;
    const register unsigned short int CCT3IP2 = 14;
    sbit  CCT3IP2_bit at IPC10.B14;

sfr unsigned int            IPC11            absolute 0xBE;
    const register unsigned short int CCT4IP0 = 0;
    sbit  CCT4IP0_bit at IPC11.B0;
    const register unsigned short int CCT4IP1 = 1;
    sbit  CCT4IP1_bit at IPC11.B1;
    const register unsigned short int CCT4IP2 = 2;
    sbit  CCT4IP2_bit at IPC11.B2;
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
    const register unsigned short int CCT5IP0 = 12;
    sbit  CCT5IP0_bit at IPC11.B12;
    const register unsigned short int CCT5IP1 = 13;
    sbit  CCT5IP1_bit at IPC11.B13;
    const register unsigned short int CCT5IP2 = 14;
    sbit  CCT5IP2_bit at IPC11.B14;

sfr unsigned int            IPC12            absolute 0xC0;
    const register unsigned short int CCT6IP0 = 0;
    sbit  CCT6IP0_bit at IPC12.B0;
    const register unsigned short int CCT6IP1 = 1;
    sbit  CCT6IP1_bit at IPC12.B1;
    const register unsigned short int CCT6IP2 = 2;
    sbit  CCT6IP2_bit at IPC12.B2;
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
    const register unsigned short int CCT7IP0 = 12;
    sbit  CCT7IP0_bit at IPC12.B12;
    const register unsigned short int CCT7IP1 = 13;
    sbit  CCT7IP1_bit at IPC12.B13;
    const register unsigned short int CCT7IP2 = 14;
    sbit  CCT7IP2_bit at IPC12.B14;
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

sfr unsigned int            IPC13            absolute 0xC2;
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

sfr unsigned int            IPC14            absolute 0xC4;
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

sfr unsigned int            IPC15            absolute 0xC6;
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
    const register unsigned short int CCP1IP0 = 12;
    sbit  CCP1IP0_bit at IPC15.B12;
    const register unsigned short int CCP1IP1 = 13;
    sbit  CCP1IP1_bit at IPC15.B13;
    const register unsigned short int CCP1IP2 = 14;
    sbit  CCP1IP2_bit at IPC15.B14;

sfr unsigned int            IPC16            absolute 0xC8;
    const register unsigned short int CCP2IP0 = 0;
    sbit  CCP2IP0_bit at IPC16.B0;
    const register unsigned short int CCP2IP1 = 1;
    sbit  CCP2IP1_bit at IPC16.B1;
    const register unsigned short int CCP2IP2 = 2;
    sbit  CCP2IP2_bit at IPC16.B2;
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

sfr unsigned int            IPC17            absolute 0xCA;
    const register unsigned short int DMA6IP0 = 0;
    sbit  DMA6IP0_bit at IPC17.B0;
    const register unsigned short int DMA6IP1 = 1;
    sbit  DMA6IP1_bit at IPC17.B1;
    const register unsigned short int DMA6IP2 = 2;
    sbit  DMA6IP2_bit at IPC17.B2;
    const register unsigned short int DMA7IP0 = 4;
    sbit  DMA7IP0_bit at IPC17.B4;
    const register unsigned short int DMA7IP1 = 5;
    sbit  DMA7IP1_bit at IPC17.B5;
    const register unsigned short int DMA7IP2 = 6;
    sbit  DMA7IP2_bit at IPC17.B6;
    const register unsigned short int SI2C3IP0 = 8;
    sbit  SI2C3IP0_bit at IPC17.B8;
    const register unsigned short int SI2C3IP1 = 9;
    sbit  SI2C3IP1_bit at IPC17.B9;
    const register unsigned short int SI2C3IP2 = 10;
    sbit  SI2C3IP2_bit at IPC17.B10;
    const register unsigned short int MI2C3IP0 = 12;
    sbit  MI2C3IP0_bit at IPC17.B12;
    const register unsigned short int MI2C3IP1 = 13;
    sbit  MI2C3IP1_bit at IPC17.B13;
    const register unsigned short int MI2C3IP2 = 14;
    sbit  MI2C3IP2_bit at IPC17.B14;

sfr unsigned int            IPC18            absolute 0xCC;
    const register unsigned short int LVDIP0 = 0;
    sbit  LVDIP0_bit at IPC18.B0;
    const register unsigned short int LVDIP1 = 1;
    sbit  LVDIP1_bit at IPC18.B1;
    const register unsigned short int LVDIP2 = 2;
    sbit  LVDIP2_bit at IPC18.B2;
    const register unsigned short int CCP7IP0 = 4;
    sbit  CCP7IP0_bit at IPC18.B4;
    const register unsigned short int CCP7IP1 = 5;
    sbit  CCP7IP1_bit at IPC18.B5;
    const register unsigned short int CCP7IP2 = 6;
    sbit  CCP7IP2_bit at IPC18.B6;

sfr unsigned int            IPC19            absolute 0xCE;
    const register unsigned short int CTMUIP0 = 4;
    sbit  CTMUIP0_bit at IPC19.B4;
    const register unsigned short int CTMUIP1 = 5;
    sbit  CTMUIP1_bit at IPC19.B5;
    const register unsigned short int CTMUIP2 = 6;
    sbit  CTMUIP2_bit at IPC19.B6;

sfr unsigned int            IPC20            absolute 0xD0;
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

sfr unsigned int            IPC21            absolute 0xD2;
    const register unsigned short int USB1IP0 = 8;
    sbit  USB1IP0_bit at IPC21.B8;
    const register unsigned short int USB1IP1 = 9;
    sbit  USB1IP1_bit at IPC21.B9;
    const register unsigned short int USB1IP2 = 10;
    sbit  USB1IP2_bit at IPC21.B10;
    const register unsigned short int U4ERIP0 = 12;
    sbit  U4ERIP0_bit at IPC21.B12;
    const register unsigned short int U4ERIP1 = 13;
    sbit  U4ERIP1_bit at IPC21.B13;
    const register unsigned short int U4ERIP2 = 14;
    sbit  U4ERIP2_bit at IPC21.B14;

sfr unsigned int            IPC22            absolute 0xD4;
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

sfr unsigned int            IPC23            absolute 0xD6;
    const register unsigned short int CCP3IP0 = 8;
    sbit  CCP3IP0_bit at IPC23.B8;
    const register unsigned short int CCP3IP1 = 9;
    sbit  CCP3IP1_bit at IPC23.B9;
    const register unsigned short int CCP3IP2 = 10;
    sbit  CCP3IP2_bit at IPC23.B10;
    const register unsigned short int CCP4IP0 = 12;
    sbit  CCP4IP0_bit at IPC23.B12;
    const register unsigned short int CCP4IP1 = 13;
    sbit  CCP4IP1_bit at IPC23.B13;
    const register unsigned short int CCP4IP2 = 14;
    sbit  CCP4IP2_bit at IPC23.B14;

sfr unsigned int   volatile IPC24            absolute 0xD8;
    const register unsigned short int CLC1IP0 = 0;
    sbit  CLC1IP0_bit at IPC24.B0;
    const register unsigned short int CLC1IP1 = 1;
    sbit  CLC1IP1_bit at IPC24.B1;
    const register unsigned short int CLC1IP2 = 2;
    sbit  CLC1IP2_bit at IPC24.B2;
    const register unsigned short int CLC2IP0 = 4;
    sbit  CLC2IP0_bit at IPC24.B4;
    const register unsigned short int CLC2IP1 = 5;
    sbit  CLC2IP1_bit at IPC24.B5;
    const register unsigned short int CLC2IP2 = 6;
    sbit  CLC2IP2_bit at IPC24.B6;
    const register unsigned short int CLC3IP0 = 8;
    sbit  CLC3IP0_bit at IPC24.B8;
    const register unsigned short int CLC3IP1 = 9;
    sbit  CLC3IP1_bit at IPC24.B9;
    const register unsigned short int CLC3IP2 = 10;
    sbit  CLC3IP2_bit at IPC24.B10;
    const register unsigned short int CLC4IP0 = 12;
    sbit  CLC4IP0_bit at IPC24.B12;
    const register unsigned short int CLC4IP1 = 13;
    sbit  CLC4IP1_bit at IPC24.B13;
    const register unsigned short int CLC4IP2 = 14;
    sbit  CLC4IP2_bit at IPC24.B14;

sfr unsigned int   volatile IPC25            absolute 0xDA;
    const register unsigned short int CCT1IP0 = 4;
    sbit  CCT1IP0_bit at IPC25.B4;
    const register unsigned short int CCT1IP1 = 5;
    sbit  CCT1IP1_bit at IPC25.B5;
    const register unsigned short int CCT1IP2 = 6;
    sbit  CCT1IP2_bit at IPC25.B6;
    const register unsigned short int CCT2IP0 = 8;
    sbit  CCT2IP0_bit at IPC25.B8;
    const register unsigned short int CCT2IP1 = 9;
    sbit  CCT2IP1_bit at IPC25.B9;
    const register unsigned short int CCT2IP2 = 10;
    sbit  CCT2IP2_bit at IPC25.B10;

sfr unsigned int   volatile IPC26            absolute 0xDC;
    const register unsigned short int FSTIP0 = 8;
    sbit  FSTIP0_bit at IPC26.B8;
    const register unsigned short int FSTIP1 = 9;
    sbit  FSTIP1_bit at IPC26.B9;
    const register unsigned short int FSTIP2 = 10;
    sbit  FSTIP2_bit at IPC26.B10;

sfr unsigned int   volatile IPC27            absolute 0xDE;
    const register unsigned short int I2C3BCIP0 = 4;
    sbit  I2C3BCIP0_bit at IPC27.B4;
    const register unsigned short int I2C3BCIP1 = 5;
    sbit  I2C3BCIP1_bit at IPC27.B5;
    const register unsigned short int I2C3BCIP2 = 6;
    sbit  I2C3BCIP2_bit at IPC27.B6;
    const register unsigned short int RTCCTCIP0 = 8;
    sbit  RTCCTCIP0_bit at IPC27.B8;
    const register unsigned short int RTCCTSIP1 = 9;
    sbit  RTCCTSIP1_bit at IPC27.B9;
    const register unsigned short int RTCCTSIP2 = 10;
    sbit  RTCCTSIP2_bit at IPC27.B10;
    const register unsigned short int U5RXIP0 = 12;
    sbit  U5RXIP0_bit at IPC27.B12;
    const register unsigned short int U5RXIP1 = 13;
    sbit  U5RXIP1_bit at IPC27.B13;
    const register unsigned short int U5RXIP2 = 14;
    sbit  U5RXIP2_bit at IPC27.B14;

sfr unsigned int   volatile IPC28            absolute 0xE0;
    const register unsigned short int U5TXIP0 = 0;
    sbit  U5TXIP0_bit at IPC28.B0;
    const register unsigned short int U5TXIP1 = 1;
    sbit  U5TXIP1_bit at IPC28.B1;
    const register unsigned short int U5TXIP2 = 2;
    sbit  U5TXIP2_bit at IPC28.B2;
    const register unsigned short int U5ERIP0 = 4;
    sbit  U5ERIP0_bit at IPC28.B4;
    const register unsigned short int U5ERIP1 = 5;
    sbit  U5ERIP1_bit at IPC28.B5;
    const register unsigned short int U5ERIP2 = 6;
    sbit  U5ERIP2_bit at IPC28.B6;
    const register unsigned short int U6RXIP0 = 8;
    sbit  U6RXIP0_bit at IPC28.B8;
    const register unsigned short int U6RXIP1 = 9;
    sbit  U6RXIP1_bit at IPC28.B9;
    const register unsigned short int U6RXIP2 = 10;
    sbit  U6RXIP2_bit at IPC28.B10;
    const register unsigned short int U6TXIP0 = 12;
    sbit  U6TXIP0_bit at IPC28.B12;
    const register unsigned short int U6TXIP1 = 13;
    sbit  U6TXIP1_bit at IPC28.B13;
    const register unsigned short int U6TXIP2 = 14;
    sbit  U6TXIP2_bit at IPC28.B14;

sfr unsigned int   volatile IPC29            absolute 0xE2;
    const register unsigned short int U6ERIP0 = 0;
    sbit  U6ERIP0_bit at IPC29.B0;
    const register unsigned short int U6ERIP1 = 1;
    sbit  U6ERIP1_bit at IPC29.B1;
    const register unsigned short int U6ERIP2 = 2;
    sbit  U6ERIP2_bit at IPC29.B2;
    const register unsigned short int JTAGIP0 = 4;
    sbit  JTAGIP0_bit at IPC29.B4;
    const register unsigned short int JTAGIP1 = 5;
    sbit  JTAGIP1_bit at IPC29.B5;
    const register unsigned short int JTAGIP2 = 6;
    sbit  JTAGIP2_bit at IPC29.B6;

sfr unsigned int   volatile INTTREG          absolute 0xE4;
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
    const register unsigned short int CPDIV0 = 6;
    sbit  CPDIV0_bit at CLKDIV.B6;
    const register unsigned short int CPDIV1 = 7;
    sbit  CPDIV1_bit at CLKDIV.B7;
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

sfr unsigned int   volatile DCOTUN           absolute 0x108;
sfr unsigned int   volatile DCOCON           absolute 0x10A;
    const register unsigned short int DCOFSEL0 = 8;
    sbit  DCOFSEL0_bit at DCOCON.B8;
    const register unsigned short int DCOFSEL1 = 9;
    sbit  DCOFSEL1_bit at DCOCON.B9;
    const register unsigned short int DCOFSEL2 = 10;
    sbit  DCOFSEL2_bit at DCOCON.B10;
    const register unsigned short int DCOFSEL3 = 11;
    sbit  DCOFSEL3_bit at DCOCON.B11;
    const register unsigned short int DCOEN = 13;
    sbit  DCOEN_bit at DCOCON.B13;

sfr unsigned int   volatile OSCDIV           absolute 0x10C;
    const register unsigned short int DIV0 = 0;
    sbit  DIV0_bit at OSCDIV.B0;
    const register unsigned short int DIV1 = 1;
    sbit  DIV1_bit at OSCDIV.B1;
    const register unsigned short int DIV2 = 2;
    sbit  DIV2_bit at OSCDIV.B2;
    const register unsigned short int DIV3 = 3;
    sbit  DIV3_bit at OSCDIV.B3;
    const register unsigned short int DIV4 = 4;
    sbit  DIV4_bit at OSCDIV.B4;
    const register unsigned short int DIV5 = 5;
    sbit  DIV5_bit at OSCDIV.B5;
    const register unsigned short int DIV6 = 6;
    sbit  DIV6_bit at OSCDIV.B6;
    const register unsigned short int DIV7 = 7;
    sbit  DIV7_bit at OSCDIV.B7;
    const register unsigned short int DIV8 = 8;
    sbit  DIV8_bit at OSCDIV.B8;
    const register unsigned short int DIV9 = 9;
    sbit  DIV9_bit at OSCDIV.B9;
    const register unsigned short int DIV10 = 10;
    sbit  DIV10_bit at OSCDIV.B10;
    const register unsigned short int DIV11 = 11;
    sbit  DIV11_bit at OSCDIV.B11;
    const register unsigned short int DIV12 = 12;
    sbit  DIV12_bit at OSCDIV.B12;
    const register unsigned short int DIV13 = 13;
    sbit  DIV13_bit at OSCDIV.B13;
    const register unsigned short int DIV14 = 14;
    sbit  DIV14_bit at OSCDIV.B14;

sfr unsigned int   volatile OSCFDIV          absolute 0x10E;
    const register unsigned short int TRIM8 = 7;
    sbit  TRIM8_bit at OSCFDIV.B7;
    const register unsigned short int TRIM7 = 8;
    sbit  TRIM7_bit at OSCFDIV.B8;
    const register unsigned short int TRIM6 = 9;
    sbit  TRIM6_bit at OSCFDIV.B9;
    const register unsigned short int TRIM5 = 10;
    sbit  TRIM5_bit at OSCFDIV.B10;
    const register unsigned short int TRIM4 = 11;
    sbit  TRIM4_bit at OSCFDIV.B11;
    const register unsigned short int TRIM3 = 12;
    sbit  TRIM3_bit at OSCFDIV.B12;
    const register unsigned short int TRIM2 = 13;
    sbit  TRIM2_bit at OSCFDIV.B13;
    const register unsigned short int TRIM1 = 14;
    sbit  TRIM1_bit at OSCFDIV.B14;
    const register unsigned short int TRIM0 = 15;
    sbit  TRIM0_bit at OSCFDIV.B15;

sfr unsigned int   volatile RCON             absolute 0x110;
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
    const register unsigned short int RETEN = 12;
    sbit  RETEN_bit at RCON.B12;
    const register unsigned short int SBOREN = 13;
    sbit  SBOREN_bit at RCON.B13;
    const register unsigned short int IOPUWR = 14;
    sbit  IOPUWR_bit at RCON.B14;
    const register unsigned short int TRAPR = 15;
    sbit  TRAPR_bit at RCON.B15;
    const register unsigned short int PMSLP = 8;
    sbit  PMSLP_bit at RCON.B8;

sfr unsigned int   volatile HLVDCON          absolute 0x114;
    const register unsigned short int HLVDL0 = 0;
    sbit  HLVDL0_bit at HLVDCON.B0;
    const register unsigned short int HLVDL1 = 1;
    sbit  HLVDL1_bit at HLVDCON.B1;
    const register unsigned short int HLVDL2 = 2;
    sbit  HLVDL2_bit at HLVDCON.B2;
    const register unsigned short int HLVDL3 = 3;
    sbit  HLVDL3_bit at HLVDCON.B3;
    const register unsigned short int LVDEVT = 8;
    sbit  LVDEVT_bit at HLVDCON.B8;
    const register unsigned short int IRVST = 9;
    sbit  IRVST_bit at HLVDCON.B9;
    const register unsigned short int BGVST = 10;
    sbit  BGVST_bit at HLVDCON.B10;
    const register unsigned short int VDIR = 11;
    sbit  VDIR_bit at HLVDCON.B11;
    const register unsigned short int LSIDL = 13;
    sbit  LSIDL_bit at HLVDCON.B13;
    const register unsigned short int HLVDEN = 15;
    sbit  HLVDEN_bit at HLVDCON.B15;

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
    const register unsigned short int MODE0_PMCON1 = 8;
    sbit  MODE0_PMCON1_bit at PMCON1.B8;
    const register unsigned short int MODE1_PMCON1 = 9;
    sbit  MODE1_PMCON1_bit at PMCON1.B9;
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
    const register unsigned short int BUSY = 15;
    sbit  BUSY_bit at PMCON2.B15;

sfr unsigned int   volatile PMCON3           absolute 0x12C;
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

sfr unsigned int            PMD1             absolute 0x178;
    const register unsigned short int AD1MD = 0;
    sbit  AD1MD_bit at PMD1.B0;
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

sfr unsigned int            PMD2             absolute 0x17A;
    const register unsigned short int OC1MD = 0;
    sbit  OC1MD_bit at PMD2.B0;
    const register unsigned short int OC2MD = 1;
    sbit  OC2MD_bit at PMD2.B1;
    const register unsigned short int OC3MD = 2;
    sbit  OC3MD_bit at PMD2.B2;
    const register unsigned short int IC1MD = 8;
    sbit  IC1MD_bit at PMD2.B8;
    const register unsigned short int IC2MD = 9;
    sbit  IC2MD_bit at PMD2.B9;
    const register unsigned short int IC3MD = 10;
    sbit  IC3MD_bit at PMD2.B10;

sfr unsigned int            PMD3             absolute 0x17C;
    const register unsigned short int I2C2MD = 1;
    sbit  I2C2MD_bit at PMD3.B1;
    const register unsigned short int CRCMD = 7;
    sbit  CRCMD_bit at PMD3.B7;
    const register unsigned short int PMPMD = 8;
    sbit  PMPMD_bit at PMD3.B8;
    const register unsigned short int RTCCMD = 9;
    sbit  RTCCMD_bit at PMD3.B9;
    const register unsigned short int CMPMD = 10;
    sbit  CMPMD_bit at PMD3.B10;

sfr unsigned int   volatile PMD4             absolute 0x17E;
    const register unsigned short int LVDMD = 1;
    sbit  LVDMD_bit at PMD4.B1;
    const register unsigned short int CTMUMD = 2;
    sbit  CTMUMD_bit at PMD4.B2;
    const register unsigned short int REFOMD = 3;
    sbit  REFOMD_bit at PMD4.B3;

sfr unsigned int   volatile PMD5             absolute 0x180;
    const register unsigned short int CCP1MD = 0;
    sbit  CCP1MD_bit at PMD5.B0;
    const register unsigned short int CCP2MD = 1;
    sbit  CCP2MD_bit at PMD5.B1;
    const register unsigned short int CCP3MD = 2;
    sbit  CCP3MD_bit at PMD5.B2;
    const register unsigned short int CCP4MD = 3;
    sbit  CCP4MD_bit at PMD5.B3;
    const register unsigned short int CCP5MD = 4;
    sbit  CCP5MD_bit at PMD5.B4;

sfr unsigned int   volatile PMD6             absolute 0x182;
    const register unsigned short int SPI3MD = 0;
    sbit  SPI3MD_bit at PMD6.B0;

sfr unsigned int   volatile PMD7             absolute 0x184;
    const register unsigned short int DMA0MD = 4;
    sbit  DMA0MD_bit at PMD7.B4;
    const register unsigned short int DMA1MD = 5;
    sbit  DMA1MD_bit at PMD7.B5;

sfr unsigned int   volatile PMD8             absolute 0x186;
    const register unsigned short int CLC1MD = 2;
    sbit  CLC1MD_bit at PMD8.B2;
    const register unsigned short int CLC2MD = 3;
    sbit  CLC2MD_bit at PMD8.B3;

sfr unsigned int   volatile TMR1             absolute 0x190;
sfr unsigned int   volatile PR1              absolute 0x192;
sfr unsigned int   volatile T1CON            absolute 0x194;
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

sfr unsigned int   volatile TMR2             absolute 0x196;
sfr unsigned int   volatile TMR3HLD          absolute 0x198;
sfr unsigned int   volatile TMR3             absolute 0x19A;
sfr unsigned int   volatile PR2              absolute 0x19C;
sfr unsigned int   volatile PR3              absolute 0x19E;
sfr unsigned int   volatile T2CON            absolute 0x1A0;
    const register unsigned short int T32_T2CON = 3;
    sbit  T32_T2CON_bit at T2CON.B3;
    const register unsigned short int T45 = 3;
    sbit  T45_bit at T2CON.B3;

sfr unsigned int   volatile T3CON            absolute 0x1A2;
sfr unsigned int   volatile CTMUCON1L        absolute 0x1C0;
    const register unsigned short int IRNG0 = 0;
    sbit  IRNG0_bit at CTMUCON1L.B0;
    const register unsigned short int IRNG1 = 1;
    sbit  IRNG1_bit at CTMUCON1L.B1;
    const register unsigned short int ITRIM0 = 2;
    sbit  ITRIM0_bit at CTMUCON1L.B2;
    const register unsigned short int ITRIM1 = 3;
    sbit  ITRIM1_bit at CTMUCON1L.B3;
    const register unsigned short int ITRIM2 = 4;
    sbit  ITRIM2_bit at CTMUCON1L.B4;
    const register unsigned short int ITRIM3 = 5;
    sbit  ITRIM3_bit at CTMUCON1L.B5;
    const register unsigned short int ITRIM4 = 6;
    sbit  ITRIM4_bit at CTMUCON1L.B6;
    const register unsigned short int ITRIM5 = 7;
    sbit  ITRIM5_bit at CTMUCON1L.B7;
    const register unsigned short int CTTRIG = 8;
    sbit  CTTRIG_bit at CTMUCON1L.B8;
    const register unsigned short int IDISSEN = 9;
    sbit  IDISSEN_bit at CTMUCON1L.B9;
    const register unsigned short int EDGSEQEN = 10;
    sbit  EDGSEQEN_bit at CTMUCON1L.B10;
    const register unsigned short int EDGEN = 11;
    sbit  EDGEN_bit at CTMUCON1L.B11;
    const register unsigned short int TGEN = 12;
    sbit  TGEN_bit at CTMUCON1L.B12;
    const register unsigned short int CTMUSIDL = 13;
    sbit  CTMUSIDL_bit at CTMUCON1L.B13;
    const register unsigned short int CTMUEN = 15;
    sbit  CTMUEN_bit at CTMUCON1L.B15;

sfr unsigned int   volatile CTMUCON1H        absolute 0x1C2;
    const register unsigned short int IRNGH = 0;
    sbit  IRNGH_bit at CTMUCON1H.B0;
    const register unsigned short int EDG2SEL0 = 2;
    sbit  EDG2SEL0_bit at CTMUCON1H.B2;
    const register unsigned short int EDG2SEL1 = 3;
    sbit  EDG2SEL1_bit at CTMUCON1H.B3;
    const register unsigned short int EDG2SEL2 = 4;
    sbit  EDG2SEL2_bit at CTMUCON1H.B4;
    const register unsigned short int EDG2SEL3 = 5;
    sbit  EDG2SEL3_bit at CTMUCON1H.B5;
    const register unsigned short int EDG2POL = 6;
    sbit  EDG2POL_bit at CTMUCON1H.B6;
    const register unsigned short int EDG2MOD = 7;
    sbit  EDG2MOD_bit at CTMUCON1H.B7;
    const register unsigned short int EDG1STAT = 8;
    sbit  EDG1STAT_bit at CTMUCON1H.B8;
    const register unsigned short int EDG2STAT = 9;
    sbit  EDG2STAT_bit at CTMUCON1H.B9;
    const register unsigned short int EDG1SEL0 = 10;
    sbit  EDG1SEL0_bit at CTMUCON1H.B10;
    const register unsigned short int EDG1SEL1 = 11;
    sbit  EDG1SEL1_bit at CTMUCON1H.B11;
    const register unsigned short int EDG1SEL2 = 12;
    sbit  EDG1SEL2_bit at CTMUCON1H.B12;
    const register unsigned short int EDG1SEL3 = 13;
    sbit  EDG1SEL3_bit at CTMUCON1H.B13;
    const register unsigned short int EDG1POL = 14;
    sbit  EDG1POL_bit at CTMUCON1H.B14;
    const register unsigned short int EDG1MOD = 15;
    sbit  EDG1MOD_bit at CTMUCON1H.B15;

sfr unsigned int   volatile CTMUCON2L        absolute 0x1C4;
    const register unsigned short int DSCHS0 = 0;
    sbit  DSCHS0_bit at CTMUCON2L.B0;
    const register unsigned short int DSCHS1 = 1;
    sbit  DSCHS1_bit at CTMUCON2L.B1;
    const register unsigned short int DSCHS2 = 2;
    sbit  DSCHS2_bit at CTMUCON2L.B2;
    const register unsigned short int IRSTEN = 4;
    sbit  IRSTEN_bit at CTMUCON2L.B4;

sfr unsigned int   volatile RTCCON1L         absolute 0x1CC;
    const register unsigned short int TSAEN = 0;
    sbit  TSAEN_bit at RTCCON1L.B0;
    const register unsigned short int RTCOE = 7;
    sbit  RTCOE_bit at RTCCON1L.B7;
    const register unsigned short int PWCPOE = 8;
    sbit  PWCPOE_bit at RTCCON1L.B8;
    const register unsigned short int PWCPOL = 9;
    sbit  PWCPOL_bit at RTCCON1L.B9;
    const register unsigned short int PWCEN = 10;
    sbit  PWCEN_bit at RTCCON1L.B10;
    const register unsigned short int WRLOCK = 11;
    sbit  WRLOCK_bit at RTCCON1L.B11;
    const register unsigned short int RTCEN = 15;
    sbit  RTCEN_bit at RTCCON1L.B15;

sfr unsigned int   volatile RTCCON1H         absolute 0x1CE;
    const register unsigned short int CHIME = 14;
    sbit  CHIME_bit at RTCCON1H.B14;
    const register unsigned short int ALRMEN = 15;
    sbit  ALRMEN_bit at RTCCON1H.B15;

sfr unsigned int   volatile RTCCON2L         absolute 0x1D0;
sfr unsigned int   volatile RTCCON2H         absolute 0x1D2;
sfr unsigned int   volatile RTCCON3L         absolute 0x1D4;
sfr unsigned int   volatile RTCSTATL         absolute 0x1D8;
    const register unsigned short int HALFSEC = 0;
    sbit  HALFSEC_bit at RTCSTATL.B0;
    const register unsigned short int ALMSYNC = 1;
    sbit  ALMSYNC_bit at RTCSTATL.B1;
    const register unsigned short int SYNC_RTCSTATL = 2;
    sbit  SYNC_RTCSTATL_bit at RTCSTATL.B2;
    const register unsigned short int TSAEVT = 3;
    sbit  TSAEVT_bit at RTCSTATL.B3;
    const register unsigned short int ALMEVT = 5;
    sbit  ALMEVT_bit at RTCSTATL.B5;

sfr unsigned int   volatile TIMEL            absolute 0x1DC;
sfr unsigned int   volatile TIMEH            absolute 0x1DE;
sfr unsigned int   volatile DATEL            absolute 0x1E0;
sfr unsigned int   volatile DATEH            absolute 0x1E2;
    const register unsigned short int MTHTEN = 4;
    sbit  MTHTEN_bit at DATEH.B4;

sfr unsigned int   volatile ALMTIMEL         absolute 0x1E4;
sfr unsigned int   volatile ALMTIMEH         absolute 0x1E6;
sfr unsigned int   volatile ALMDATEL         absolute 0x1E8;
sfr unsigned int   volatile ALMDATEH         absolute 0x1EA;
sfr unsigned int   volatile TSATIMEL         absolute 0x1EC;
sfr unsigned int   volatile TSATIMEH         absolute 0x1EE;
sfr unsigned int   volatile TSADATEL         absolute 0x1F0;
sfr unsigned int   volatile TSADATEH         absolute 0x1F2;
sfr unsigned int   volatile IC1CON1          absolute 0x200;
    const register unsigned short int ICM0 = 0;
    sbit  ICM0_bit at IC1CON1.B0;
    const register unsigned short int ICM1 = 1;
    sbit  ICM1_bit at IC1CON1.B1;
    const register unsigned short int ICM2 = 2;
    sbit  ICM2_bit at IC1CON1.B2;
    const register unsigned short int ICBNE_IC1CON1 = 3;
    sbit  ICBNE_IC1CON1_bit at IC1CON1.B3;
    const register unsigned short int ICOV_IC1CON1 = 4;
    sbit  ICOV_IC1CON1_bit at IC1CON1.B4;
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

sfr unsigned int   volatile IC1CON2          absolute 0x202;
    const register unsigned short int SYNCSEL0 = 0;
    sbit  SYNCSEL0_bit at IC1CON2.B0;
    const register unsigned short int SYNCSEL1 = 1;
    sbit  SYNCSEL1_bit at IC1CON2.B1;
    const register unsigned short int SYNCSEL2 = 2;
    sbit  SYNCSEL2_bit at IC1CON2.B2;
    const register unsigned short int SYNCSEL3 = 3;
    sbit  SYNCSEL3_bit at IC1CON2.B3;
    const register unsigned short int SYNCSEL4 = 4;
    sbit  SYNCSEL4_bit at IC1CON2.B4;
    const register unsigned short int TRIGSTAT = 6;
    sbit  TRIGSTAT_bit at IC1CON2.B6;
    const register unsigned short int ICTRIG = 7;
    sbit  ICTRIG_bit at IC1CON2.B7;
    const register unsigned short int IC32 = 8;
    sbit  IC32_bit at IC1CON2.B8;

sfr unsigned int   volatile IC1BUF           absolute 0x204;
sfr unsigned int   volatile IC1TMR           absolute 0x206;
sfr unsigned int   volatile IC2CON1          absolute 0x208;
    const register unsigned short int ICBNE_IC2CON1 = 3;
    sbit  ICBNE_IC2CON1_bit at IC2CON1.B3;
    const register unsigned short int ICOV_IC2CON1 = 4;
    sbit  ICOV_IC2CON1_bit at IC2CON1.B4;

sfr unsigned int   volatile IC2CON2          absolute 0x20A;
sfr unsigned int   volatile IC2BUF           absolute 0x20C;
sfr unsigned int   volatile IC2TMR           absolute 0x20E;
sfr unsigned int   volatile IC3CON1          absolute 0x210;
    const register unsigned short int ICBNE_IC3CON1 = 3;
    sbit  ICBNE_IC3CON1_bit at IC3CON1.B3;
    const register unsigned short int ICOV_IC3CON1 = 4;
    sbit  ICOV_IC3CON1_bit at IC3CON1.B4;

sfr unsigned int   volatile IC3CON2          absolute 0x212;
sfr unsigned int   volatile IC3BUF           absolute 0x214;
sfr unsigned int   volatile IC3TMR           absolute 0x216;
sfr unsigned int   volatile OC1CON1          absolute 0x230;
    const register unsigned short int OCM0 = 0;
    sbit  OCM0_bit at OC1CON1.B0;
    const register unsigned short int OCM1 = 1;
    sbit  OCM1_bit at OC1CON1.B1;
    const register unsigned short int OCM2 = 2;
    sbit  OCM2_bit at OC1CON1.B2;
    const register unsigned short int TRIGMODE = 3;
    sbit  TRIGMODE_bit at OC1CON1.B3;
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
    const register unsigned short int OCTSEL0 = 10;
    sbit  OCTSEL0_bit at OC1CON1.B10;
    const register unsigned short int OCTSEL1 = 11;
    sbit  OCTSEL1_bit at OC1CON1.B11;
    const register unsigned short int OCTSEL2 = 12;
    sbit  OCTSEL2_bit at OC1CON1.B12;
    const register unsigned short int OCSIDL = 13;
    sbit  OCSIDL_bit at OC1CON1.B13;
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

sfr unsigned int   volatile OC1CON2          absolute 0x232;
    const register unsigned short int OCTRIS = 5;
    sbit  OCTRIS_bit at OC1CON2.B5;
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

sfr unsigned int            OC1RS            absolute 0x234;
sfr unsigned int   volatile OC1R             absolute 0x236;
sfr unsigned int   volatile OC1TMR           absolute 0x238;
sfr unsigned int   volatile OC2CON1          absolute 0x23A;
sfr unsigned int   volatile OC2CON2          absolute 0x23C;
sfr unsigned int            OC2RS            absolute 0x23E;
sfr unsigned int   volatile OC2R             absolute 0x240;
sfr unsigned int   volatile OC2TMR           absolute 0x242;
sfr unsigned int   volatile OC3CON1          absolute 0x244;
sfr unsigned int   volatile OC3CON2          absolute 0x246;
sfr unsigned int            OC3RS            absolute 0x248;
sfr unsigned int   volatile OC3R             absolute 0x24A;
sfr unsigned int   volatile OC3TMR           absolute 0x24C;
sfr unsigned int   volatile CCP1CON1L        absolute 0x26C;
    const register unsigned short int MOD0 = 0;
    sbit  MOD0_bit at CCP1CON1L.B0;
    const register unsigned short int MOD1 = 1;
    sbit  MOD1_bit at CCP1CON1L.B1;
    const register unsigned short int MOD2 = 2;
    sbit  MOD2_bit at CCP1CON1L.B2;
    const register unsigned short int MOD3 = 3;
    sbit  MOD3_bit at CCP1CON1L.B3;
    const register unsigned short int CCSEL = 4;
    sbit  CCSEL_bit at CCP1CON1L.B4;
    const register unsigned short int T32_CCP1CON1L = 5;
    sbit  T32_CCP1CON1L_bit at CCP1CON1L.B5;
    const register unsigned short int TMRPS0 = 6;
    sbit  TMRPS0_bit at CCP1CON1L.B6;
    const register unsigned short int TMRPS1 = 7;
    sbit  TMRPS1_bit at CCP1CON1L.B7;
    const register unsigned short int CLKSEL0 = 8;
    sbit  CLKSEL0_bit at CCP1CON1L.B8;
    const register unsigned short int CLKSEL1 = 9;
    sbit  CLKSEL1_bit at CCP1CON1L.B9;
    const register unsigned short int CLKSEL2 = 10;
    sbit  CLKSEL2_bit at CCP1CON1L.B10;
    const register unsigned short int TMRSYNC = 11;
    sbit  TMRSYNC_bit at CCP1CON1L.B11;
    const register unsigned short int CCPSLP = 12;
    sbit  CCPSLP_bit at CCP1CON1L.B12;
    const register unsigned short int CCPSIDL = 13;
    sbit  CCPSIDL_bit at CCP1CON1L.B13;
    const register unsigned short int CCPON = 15;
    sbit  CCPON_bit at CCP1CON1L.B15;
    const register unsigned short int TMR32 = 5;
    sbit  TMR32_bit at CCP1CON1L.B5;
    const register unsigned short int CCPMOD0 = 0;
    sbit  CCPMOD0_bit at CCP1CON1L.B0;
    const register unsigned short int CCPMOD1 = 1;
    sbit  CCPMOD1_bit at CCP1CON1L.B1;
    const register unsigned short int CCPMOD2 = 2;
    sbit  CCPMOD2_bit at CCP1CON1L.B2;
    const register unsigned short int CCPMOD3 = 3;
    sbit  CCPMOD3_bit at CCP1CON1L.B3;

sfr unsigned int   volatile CCP1CON1H        absolute 0x26E;
    const register unsigned short int SYNC0 = 0;
    sbit  SYNC0_bit at CCP1CON1H.B0;
    const register unsigned short int SYNC1 = 1;
    sbit  SYNC1_bit at CCP1CON1H.B1;
    const register unsigned short int SYNC2 = 2;
    sbit  SYNC2_bit at CCP1CON1H.B2;
    const register unsigned short int SYNC3 = 3;
    sbit  SYNC3_bit at CCP1CON1H.B3;
    const register unsigned short int SYNC4 = 4;
    sbit  SYNC4_bit at CCP1CON1H.B4;
    const register unsigned short int ALTSYNC = 5;
    sbit  ALTSYNC_bit at CCP1CON1H.B5;
    const register unsigned short int ONESHOT = 6;
    sbit  ONESHOT_bit at CCP1CON1H.B6;
    const register unsigned short int TRIGEN = 7;
    sbit  TRIGEN_bit at CCP1CON1H.B7;
    const register unsigned short int OPS0 = 8;
    sbit  OPS0_bit at CCP1CON1H.B8;
    const register unsigned short int OPS1 = 9;
    sbit  OPS1_bit at CCP1CON1H.B9;
    const register unsigned short int OPS2 = 10;
    sbit  OPS2_bit at CCP1CON1H.B10;
    const register unsigned short int OPS3 = 11;
    sbit  OPS3_bit at CCP1CON1H.B11;
    const register unsigned short int RTRGEN = 14;
    sbit  RTRGEN_bit at CCP1CON1H.B14;
    const register unsigned short int OPSSRC = 15;
    sbit  OPSSRC_bit at CCP1CON1H.B15;
    const register unsigned short int OPSRC = 15;
    sbit  OPSRC_bit at CCP1CON1H.B15;
    const register unsigned short int IOPS0 = 8;
    sbit  IOPS0_bit at CCP1CON1H.B8;
    const register unsigned short int IOPS1 = 9;
    sbit  IOPS1_bit at CCP1CON1H.B9;
    const register unsigned short int IOPS2 = 10;
    sbit  IOPS2_bit at CCP1CON1H.B10;
    const register unsigned short int IOPS3 = 11;
    sbit  IOPS3_bit at CCP1CON1H.B11;

sfr unsigned int   volatile CCP1CON2L        absolute 0x270;
    const register unsigned short int ASDG0 = 0;
    sbit  ASDG0_bit at CCP1CON2L.B0;
    const register unsigned short int ASDG1 = 1;
    sbit  ASDG1_bit at CCP1CON2L.B1;
    const register unsigned short int ASDG2 = 2;
    sbit  ASDG2_bit at CCP1CON2L.B2;
    const register unsigned short int ASDG3 = 3;
    sbit  ASDG3_bit at CCP1CON2L.B3;
    const register unsigned short int ASDG4 = 4;
    sbit  ASDG4_bit at CCP1CON2L.B4;
    const register unsigned short int ASDG5 = 5;
    sbit  ASDG5_bit at CCP1CON2L.B5;
    const register unsigned short int ASDG6 = 6;
    sbit  ASDG6_bit at CCP1CON2L.B6;
    const register unsigned short int ASDG7 = 7;
    sbit  ASDG7_bit at CCP1CON2L.B7;
    const register unsigned short int SSDG = 12;
    sbit  SSDG_bit at CCP1CON2L.B12;
    const register unsigned short int ASDGM = 14;
    sbit  ASDGM_bit at CCP1CON2L.B14;
    const register unsigned short int PWMRSEN = 15;
    sbit  PWMRSEN_bit at CCP1CON2L.B15;

sfr unsigned int   volatile CCP1CON2H        absolute 0x272;
    const register unsigned short int ICS0 = 0;
    sbit  ICS0_bit at CCP1CON2H.B0;
    const register unsigned short int ICS1 = 1;
    sbit  ICS1_bit at CCP1CON2H.B1;
    const register unsigned short int ICS2 = 2;
    sbit  ICS2_bit at CCP1CON2H.B2;
    const register unsigned short int AUXOUT0 = 3;
    sbit  AUXOUT0_bit at CCP1CON2H.B3;
    const register unsigned short int AUXOUT1 = 4;
    sbit  AUXOUT1_bit at CCP1CON2H.B4;
    const register unsigned short int ICGSM0 = 6;
    sbit  ICGSM0_bit at CCP1CON2H.B6;
    const register unsigned short int ICGSM1 = 7;
    sbit  ICGSM1_bit at CCP1CON2H.B7;
    const register unsigned short int OCAEN = 8;
    sbit  OCAEN_bit at CCP1CON2H.B8;
    const register unsigned short int OCBEN = 9;
    sbit  OCBEN_bit at CCP1CON2H.B9;
    const register unsigned short int OCCEN = 10;
    sbit  OCCEN_bit at CCP1CON2H.B10;
    const register unsigned short int OCDEN = 11;
    sbit  OCDEN_bit at CCP1CON2H.B11;
    const register unsigned short int OCEEN = 12;
    sbit  OCEEN_bit at CCP1CON2H.B12;
    const register unsigned short int OCFEN = 13;
    sbit  OCFEN_bit at CCP1CON2H.B13;
    const register unsigned short int OENSYNC = 15;
    sbit  OENSYNC_bit at CCP1CON2H.B15;
    const register unsigned short int ICSEL0 = 0;
    sbit  ICSEL0_bit at CCP1CON2H.B0;
    const register unsigned short int ICSEL1 = 1;
    sbit  ICSEL1_bit at CCP1CON2H.B1;
    const register unsigned short int ICSEL2 = 2;
    sbit  ICSEL2_bit at CCP1CON2H.B2;

sfr unsigned int   volatile CCP1CON3L        absolute 0x274;
    const register unsigned short int DT0 = 0;
    sbit  DT0_bit at CCP1CON3L.B0;
    const register unsigned short int DT1 = 1;
    sbit  DT1_bit at CCP1CON3L.B1;
    const register unsigned short int DT2 = 2;
    sbit  DT2_bit at CCP1CON3L.B2;
    const register unsigned short int DT3 = 3;
    sbit  DT3_bit at CCP1CON3L.B3;
    const register unsigned short int DT4 = 4;
    sbit  DT4_bit at CCP1CON3L.B4;
    const register unsigned short int DT5 = 5;
    sbit  DT5_bit at CCP1CON3L.B5;

sfr unsigned int   volatile CCP1CON3H        absolute 0x276;
    const register unsigned short int PSSBDF0 = 0;
    sbit  PSSBDF0_bit at CCP1CON3H.B0;
    const register unsigned short int PSSBDF1 = 1;
    sbit  PSSBDF1_bit at CCP1CON3H.B1;
    const register unsigned short int PSSACE0 = 2;
    sbit  PSSACE0_bit at CCP1CON3H.B2;
    const register unsigned short int PSSACE1 = 3;
    sbit  PSSACE1_bit at CCP1CON3H.B3;
    const register unsigned short int POLBDF = 4;
    sbit  POLBDF_bit at CCP1CON3H.B4;
    const register unsigned short int POLACE = 5;
    sbit  POLACE_bit at CCP1CON3H.B5;
    const register unsigned short int OUTM0 = 8;
    sbit  OUTM0_bit at CCP1CON3H.B8;
    const register unsigned short int OUTM1 = 9;
    sbit  OUTM1_bit at CCP1CON3H.B9;
    const register unsigned short int OUTM2 = 10;
    sbit  OUTM2_bit at CCP1CON3H.B10;
    const register unsigned short int OSCNT0 = 12;
    sbit  OSCNT0_bit at CCP1CON3H.B12;
    const register unsigned short int OSCNT1 = 13;
    sbit  OSCNT1_bit at CCP1CON3H.B13;
    const register unsigned short int OSCNT2 = 14;
    sbit  OSCNT2_bit at CCP1CON3H.B14;
    const register unsigned short int OETRIG = 15;
    sbit  OETRIG_bit at CCP1CON3H.B15;

sfr unsigned int   volatile CCP1STAT         absolute 0x278;
    const register unsigned short int ICBNE_CCP1STAT = 0;
    sbit  ICBNE_CCP1STAT_bit at CCP1STAT.B0;
    const register unsigned short int ICOV_CCP1STAT = 1;
    sbit  ICOV_CCP1STAT_bit at CCP1STAT.B1;
    const register unsigned short int ICDIS = 2;
    sbit  ICDIS_bit at CCP1STAT.B2;
    const register unsigned short int SCEVT = 3;
    sbit  SCEVT_bit at CCP1STAT.B3;
    const register unsigned short int ASEVT = 4;
    sbit  ASEVT_bit at CCP1STAT.B4;
    const register unsigned short int TRCLR = 5;
    sbit  TRCLR_bit at CCP1STAT.B5;
    const register unsigned short int TRSET = 6;
    sbit  TRSET_bit at CCP1STAT.B6;
    const register unsigned short int CCPTRIG = 7;
    sbit  CCPTRIG_bit at CCP1STAT.B7;
    const register unsigned short int ICGARM = 10;
    sbit  ICGARM_bit at CCP1STAT.B10;
    const register unsigned short int TRIG = 7;
    sbit  TRIG_bit at CCP1STAT.B7;

sfr unsigned int   volatile CCP1STATL        absolute 0x278;
    const register unsigned short int ICBNE_CCP1STATL = 0;
    sbit  ICBNE_CCP1STATL_bit at CCP1STATL.B0;
    const register unsigned short int ICOV_CCP1STATL = 1;
    sbit  ICOV_CCP1STATL_bit at CCP1STATL.B1;

sfr unsigned int   volatile CCP1STATH        absolute 0x27A;
    const register unsigned short int RAWIP = 0;
    sbit  RAWIP_bit at CCP1STATH.B0;
    const register unsigned short int RBWIP = 1;
    sbit  RBWIP_bit at CCP1STATH.B1;
    const register unsigned short int TMRLWIP = 2;
    sbit  TMRLWIP_bit at CCP1STATH.B2;
    const register unsigned short int TMRHWIP = 3;
    sbit  TMRHWIP_bit at CCP1STATH.B3;
    const register unsigned short int PRLWIP = 4;
    sbit  PRLWIP_bit at CCP1STATH.B4;

sfr unsigned int   volatile CCP1TMRL         absolute 0x27C;
sfr unsigned int   volatile CCP1TMRH         absolute 0x27E;
sfr unsigned int   volatile CCP1PRL          absolute 0x280;
sfr unsigned int   volatile CCP1PRH          absolute 0x282;
sfr unsigned int   volatile CCP1RA           absolute 0x284;
sfr unsigned int   volatile CCP1RAL          absolute 0x284;
sfr unsigned int   volatile CCP1RAH          absolute 0x286;
sfr unsigned int   volatile CCP1RB           absolute 0x288;
sfr unsigned int   volatile CCP1RBL          absolute 0x288;
sfr unsigned int   volatile CCP1RBH          absolute 0x28A;
sfr unsigned int   volatile CCP1BUFL         absolute 0x28C;
sfr unsigned int   volatile CCP1BUFH         absolute 0x28E;
sfr unsigned int   volatile CCP2CON1L        absolute 0x290;
    const register unsigned short int T32_CCP2CON1L = 5;
    sbit  T32_CCP2CON1L_bit at CCP2CON1L.B5;

sfr unsigned int   volatile CCP2CON1H        absolute 0x292;
sfr unsigned int   volatile CCP2CON2L        absolute 0x294;
sfr unsigned int   volatile CCP2CON2H        absolute 0x296;
sfr unsigned int   volatile CCP2CON3H        absolute 0x29A;
sfr unsigned int   volatile CCP2STAT         absolute 0x29C;
    const register unsigned short int ICBNE_CCP2STAT = 0;
    sbit  ICBNE_CCP2STAT_bit at CCP2STAT.B0;
    const register unsigned short int ICOV_CCP2STAT = 1;
    sbit  ICOV_CCP2STAT_bit at CCP2STAT.B1;

sfr unsigned int   volatile CCP2STATL        absolute 0x29C;
    const register unsigned short int ICBNE_CCP2STATL = 0;
    sbit  ICBNE_CCP2STATL_bit at CCP2STATL.B0;
    const register unsigned short int ICOV_CCP2STATL = 1;
    sbit  ICOV_CCP2STATL_bit at CCP2STATL.B1;

sfr unsigned int   volatile CCP2STATH        absolute 0x29E;
sfr unsigned int   volatile CCP2TMRL         absolute 0x2A0;
sfr unsigned int   volatile CCP2TMRH         absolute 0x2A2;
sfr unsigned int   volatile CCP2PRL          absolute 0x2A4;
sfr unsigned int   volatile CCP2PRH          absolute 0x2A6;
sfr unsigned int   volatile CCP2RA           absolute 0x2A8;
sfr unsigned int   volatile CCP2RAL          absolute 0x2A8;
sfr unsigned int   volatile CCP2RAH          absolute 0x2AA;
sfr unsigned int   volatile CCP2RB           absolute 0x2AC;
sfr unsigned int   volatile CCP2RBL          absolute 0x2AC;
sfr unsigned int   volatile CCP2RBH          absolute 0x2AE;
sfr unsigned int   volatile CCP2BUFL         absolute 0x2B0;
sfr unsigned int   volatile CCP2BUFH         absolute 0x2B2;
sfr unsigned int   volatile CCP3CON1L        absolute 0x2B4;
    const register unsigned short int T32_CCP3CON1L = 5;
    sbit  T32_CCP3CON1L_bit at CCP3CON1L.B5;

sfr unsigned int   volatile CCP3CON1H        absolute 0x2B6;
sfr unsigned int   volatile CCP3CON2L        absolute 0x2B8;
sfr unsigned int   volatile CCP3CON2H        absolute 0x2BA;
sfr unsigned int   volatile CCP3CON3H        absolute 0x2BE;
sfr unsigned int   volatile CCP3STAT         absolute 0x2C0;
    const register unsigned short int ICBNE_CCP3STAT = 0;
    sbit  ICBNE_CCP3STAT_bit at CCP3STAT.B0;
    const register unsigned short int ICOV_CCP3STAT = 1;
    sbit  ICOV_CCP3STAT_bit at CCP3STAT.B1;

sfr unsigned int   volatile CCP3STATL        absolute 0x2C0;
    const register unsigned short int ICBNE_CCP3STATL = 0;
    sbit  ICBNE_CCP3STATL_bit at CCP3STATL.B0;
    const register unsigned short int ICOV_CCP3STATL = 1;
    sbit  ICOV_CCP3STATL_bit at CCP3STATL.B1;

sfr unsigned int   volatile CCP3STATH        absolute 0x2C2;
sfr unsigned int   volatile CCP3TMRL         absolute 0x2C4;
sfr unsigned int   volatile CCP3TMRH         absolute 0x2C6;
sfr unsigned int   volatile CCP3PRL          absolute 0x2C8;
sfr unsigned int   volatile CCP3PRH          absolute 0x2CA;
sfr unsigned int   volatile CCP3RA           absolute 0x2CC;
sfr unsigned int   volatile CCP3RAL          absolute 0x2CC;
sfr unsigned int   volatile CCP3RAH          absolute 0x2CE;
sfr unsigned int   volatile CCP3RB           absolute 0x2D0;
sfr unsigned int   volatile CCP3RBL          absolute 0x2D0;
sfr unsigned int   volatile CCP3RBH          absolute 0x2D2;
sfr unsigned int   volatile CCP3BUFL         absolute 0x2D4;
sfr unsigned int   volatile CCP3BUFH         absolute 0x2D6;
sfr unsigned int   volatile CMSTAT           absolute 0x2E6;
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

sfr unsigned int            CVRCON           absolute 0x2E8;
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

sfr unsigned int   volatile CM1CON           absolute 0x2EA;
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

sfr unsigned int   volatile CM2CON           absolute 0x2EC;
sfr unsigned int   volatile CM3CON           absolute 0x2EE;
sfr unsigned int   volatile ANCFG            absolute 0x2F4;
    const register unsigned short int VBGEN1 = 0;
    sbit  VBGEN1_bit at ANCFG.B0;
    const register unsigned short int VBGEN2 = 1;
    sbit  VBGEN2_bit at ANCFG.B1;
    const register unsigned short int VBGEN3 = 2;
    sbit  VBGEN3_bit at ANCFG.B2;

sfr unsigned int   volatile CCP4CON1L        absolute 0x300;
    const register unsigned short int T32_CCP4CON1L = 5;
    sbit  T32_CCP4CON1L_bit at CCP4CON1L.B5;

sfr unsigned int   volatile CCP4CON1H        absolute 0x302;
sfr unsigned int   volatile CCP4CON2L        absolute 0x304;
sfr unsigned int   volatile CCP4CON2H        absolute 0x306;
sfr unsigned int   volatile CCP4CON3H        absolute 0x30A;
sfr unsigned int   volatile CCP4STAT         absolute 0x30C;
    const register unsigned short int ICBNE_CCP4STAT = 0;
    sbit  ICBNE_CCP4STAT_bit at CCP4STAT.B0;
    const register unsigned short int ICOV_CCP4STAT = 1;
    sbit  ICOV_CCP4STAT_bit at CCP4STAT.B1;

sfr unsigned int   volatile CCP4STATL        absolute 0x30C;
    const register unsigned short int ICBNE_CCP4STATL = 0;
    sbit  ICBNE_CCP4STATL_bit at CCP4STATL.B0;
    const register unsigned short int ICOV_CCP4STATL = 1;
    sbit  ICOV_CCP4STATL_bit at CCP4STATL.B1;

sfr unsigned int   volatile CCP4STATH        absolute 0x30E;
sfr unsigned int   volatile CCP4TMRL         absolute 0x310;
sfr unsigned int   volatile CCP4TMRH         absolute 0x312;
sfr unsigned int   volatile CCP4PRL          absolute 0x314;
sfr unsigned int   volatile CCP4PRH          absolute 0x316;
sfr unsigned int   volatile CCP4RA           absolute 0x318;
sfr unsigned int   volatile CCP4RAL          absolute 0x318;
sfr unsigned int   volatile CCP4RAH          absolute 0x31A;
sfr unsigned int   volatile CCP4RB           absolute 0x31C;
sfr unsigned int   volatile CCP4RBL          absolute 0x31C;
sfr unsigned int   volatile CCP4RBH          absolute 0x31E;
sfr unsigned int   volatile CCP4BUFL         absolute 0x320;
sfr unsigned int   volatile CCP4BUFH         absolute 0x322;
sfr unsigned int   volatile U1MODE           absolute 0x398;
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

sfr unsigned int   volatile U1STA            absolute 0x39A;
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

sfr unsigned int            U1TXREG          absolute 0x39C;
    const register unsigned short int LAST = 15;
    sbit  LAST_bit at U1TXREG.B15;

sfr unsigned int   volatile U1RXREG          absolute 0x39E;
sfr unsigned int            U1BRG            absolute 0x3A0;
sfr unsigned int   volatile U1ADMD           absolute 0x3A2;
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

sfr unsigned int   volatile U1SCCON          absolute 0x3A4;
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

sfr unsigned int   volatile U1SCINT          absolute 0x3A6;
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

sfr unsigned int   volatile U1GTC            absolute 0x3A8;
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

sfr unsigned int   volatile U1WTCL           absolute 0x3AA;
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

sfr unsigned int   volatile U1WTCH           absolute 0x3AC;
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

sfr unsigned int   volatile U2MODE           absolute 0x3AE;
sfr unsigned int   volatile U2STA            absolute 0x3B0;
sfr unsigned int            U2TXREG          absolute 0x3B2;
sfr unsigned int   volatile U2RXREG          absolute 0x3B4;
sfr unsigned int            U2BRG            absolute 0x3B6;
sfr unsigned int   volatile U2ADMD           absolute 0x3B8;
sfr unsigned int   volatile U2SCCON          absolute 0x3BA;
sfr unsigned int   volatile U2SCINT          absolute 0x3BC;
sfr unsigned int   volatile U2GTC            absolute 0x3BE;
sfr unsigned int   volatile U2WTCL           absolute 0x3C0;
sfr unsigned int   volatile U2WTCH           absolute 0x3C2;
sfr unsigned int   volatile SPI1CON1         absolute 0x3F4;
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

sfr unsigned int   volatile SPI1CON1L        absolute 0x3F4;
sfr unsigned int   volatile SPI1CON1H        absolute 0x3F6;
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

sfr unsigned int   volatile SPI1CON2         absolute 0x3F6;
sfr unsigned int   volatile SPI1CON2L        absolute 0x3F8;
sfr unsigned int   volatile SPI1CON3         absolute 0x3F8;
sfr unsigned int   volatile SPI1STATL        absolute 0x3FC;
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

sfr unsigned int   volatile SPI1STATH        absolute 0x3FE;
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

sfr unsigned int   volatile SPI1BUFL         absolute 0x400;
sfr unsigned int   volatile SPI1BUFH         absolute 0x402;
sfr unsigned int   volatile SPI1BRGL         absolute 0x404;
sfr unsigned int   volatile SPI1IMSK1        absolute 0x408;
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

sfr unsigned int   volatile SPI1IMSKL        absolute 0x408;
sfr unsigned int   volatile SPI1IMSK2        absolute 0x40A;
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

sfr unsigned int   volatile SPI1IMSKH        absolute 0x40A;
sfr unsigned int   volatile SPI1URDTL        absolute 0x40C;
sfr unsigned int   volatile SPI1URDTH        absolute 0x40E;
sfr unsigned int   volatile SPI2CON1         absolute 0x410;
sfr unsigned int   volatile SPI2CON1L        absolute 0x410;
sfr unsigned int   volatile SPI2CON1H        absolute 0x412;
sfr unsigned int   volatile SPI2CON2         absolute 0x412;
sfr unsigned int   volatile SPI2CON2L        absolute 0x414;
sfr unsigned int   volatile SPI2CON3         absolute 0x414;
sfr unsigned int   volatile SPI2STATL        absolute 0x418;
sfr unsigned int   volatile SPI2STATH        absolute 0x41A;
sfr unsigned int   volatile SPI2BUFL         absolute 0x41C;
sfr unsigned int   volatile SPI2BUFH         absolute 0x41E;
sfr unsigned int   volatile SPI2BRGL         absolute 0x420;
sfr unsigned int   volatile SPI2IMSK1        absolute 0x424;
sfr unsigned int   volatile SPI2IMSKL        absolute 0x424;
sfr unsigned int   volatile SPI2IMSK2        absolute 0x426;
sfr unsigned int   volatile SPI2IMSKH        absolute 0x426;
sfr unsigned int   volatile SPI2URDTL        absolute 0x428;
sfr unsigned int   volatile SPI2URDTH        absolute 0x42A;
sfr unsigned int   volatile SPI3CON1         absolute 0x42C;
sfr unsigned int   volatile SPI3CON1L        absolute 0x42C;
sfr unsigned int   volatile SPI3CON1H        absolute 0x42E;
sfr unsigned int   volatile SPI3CON2         absolute 0x42E;
sfr unsigned int   volatile SPI3CON2L        absolute 0x430;
sfr unsigned int   volatile SPI3CON3         absolute 0x430;
sfr unsigned int   volatile SPI3STATL        absolute 0x434;
sfr unsigned int   volatile SPI3STATH        absolute 0x436;
sfr unsigned int   volatile SPI3BUFL         absolute 0x438;
sfr unsigned int   volatile SPI3BUFH         absolute 0x43A;
sfr unsigned int   volatile SPI3BRGL         absolute 0x43C;
sfr unsigned int   volatile SPI3IMSK1        absolute 0x440;
sfr unsigned int   volatile SPI3IMSKL        absolute 0x440;
sfr unsigned int   volatile SPI3IMSK2        absolute 0x442;
sfr unsigned int   volatile SPI3IMSKH        absolute 0x442;
sfr unsigned int   volatile SPI3URDTL        absolute 0x444;
sfr unsigned int   volatile SPI3URDTH        absolute 0x446;
sfr unsigned int   volatile CLC1CONL         absolute 0x464;
    const register unsigned short int MODE0_CLC1CONL = 0;
    sbit  MODE0_CLC1CONL_bit at CLC1CONL.B0;
    const register unsigned short int MODE1_CLC1CONL = 1;
    sbit  MODE1_CLC1CONL_bit at CLC1CONL.B1;
    const register unsigned short int MODE2 = 2;
    sbit  MODE2_bit at CLC1CONL.B2;
    const register unsigned short int LCPOL = 5;
    sbit  LCPOL_bit at CLC1CONL.B5;
    const register unsigned short int LCOUT = 6;
    sbit  LCOUT_bit at CLC1CONL.B6;
    const register unsigned short int LCOE = 7;
    sbit  LCOE_bit at CLC1CONL.B7;
    const register unsigned short int INTN = 10;
    sbit  INTN_bit at CLC1CONL.B10;
    const register unsigned short int INTP = 11;
    sbit  INTP_bit at CLC1CONL.B11;
    const register unsigned short int LCEN = 15;
    sbit  LCEN_bit at CLC1CONL.B15;

sfr unsigned int   volatile CLC1CONH         absolute 0x466;
    const register unsigned short int G1POL = 0;
    sbit  G1POL_bit at CLC1CONH.B0;
    const register unsigned short int G2POL = 1;
    sbit  G2POL_bit at CLC1CONH.B1;
    const register unsigned short int G3POL = 2;
    sbit  G3POL_bit at CLC1CONH.B2;
    const register unsigned short int G4POL = 3;
    sbit  G4POL_bit at CLC1CONH.B3;

sfr unsigned int   volatile CLC1SEL          absolute 0x468;
    const register unsigned short int DS10 = 0;
    sbit  DS10_bit at CLC1SEL.B0;
    const register unsigned short int DS11 = 1;
    sbit  DS11_bit at CLC1SEL.B1;
    const register unsigned short int DS12 = 2;
    sbit  DS12_bit at CLC1SEL.B2;
    const register unsigned short int DS20 = 4;
    sbit  DS20_bit at CLC1SEL.B4;
    const register unsigned short int DS21 = 5;
    sbit  DS21_bit at CLC1SEL.B5;
    const register unsigned short int DS22 = 6;
    sbit  DS22_bit at CLC1SEL.B6;
    const register unsigned short int DS30 = 8;
    sbit  DS30_bit at CLC1SEL.B8;
    const register unsigned short int DS31 = 9;
    sbit  DS31_bit at CLC1SEL.B9;
    const register unsigned short int DS32 = 10;
    sbit  DS32_bit at CLC1SEL.B10;
    const register unsigned short int DS40 = 12;
    sbit  DS40_bit at CLC1SEL.B12;
    const register unsigned short int DS41 = 13;
    sbit  DS41_bit at CLC1SEL.B13;
    const register unsigned short int DS42 = 14;
    sbit  DS42_bit at CLC1SEL.B14;

sfr unsigned int   volatile CLC1SELL         absolute 0x468;
sfr unsigned int   volatile CLC1GLSL         absolute 0x46C;
    const register unsigned short int G1D1N = 0;
    sbit  G1D1N_bit at CLC1GLSL.B0;
    const register unsigned short int G1D1T = 1;
    sbit  G1D1T_bit at CLC1GLSL.B1;
    const register unsigned short int G1D2N = 2;
    sbit  G1D2N_bit at CLC1GLSL.B2;
    const register unsigned short int G1D2T = 3;
    sbit  G1D2T_bit at CLC1GLSL.B3;
    const register unsigned short int G1D3N = 4;
    sbit  G1D3N_bit at CLC1GLSL.B4;
    const register unsigned short int G1D3T = 5;
    sbit  G1D3T_bit at CLC1GLSL.B5;
    const register unsigned short int G1D4N = 6;
    sbit  G1D4N_bit at CLC1GLSL.B6;
    const register unsigned short int G1D4T = 7;
    sbit  G1D4T_bit at CLC1GLSL.B7;
    const register unsigned short int G2D1N = 8;
    sbit  G2D1N_bit at CLC1GLSL.B8;
    const register unsigned short int G2D1T = 9;
    sbit  G2D1T_bit at CLC1GLSL.B9;
    const register unsigned short int G2D2N = 10;
    sbit  G2D2N_bit at CLC1GLSL.B10;
    const register unsigned short int G2D2T = 11;
    sbit  G2D2T_bit at CLC1GLSL.B11;
    const register unsigned short int G2D3N = 12;
    sbit  G2D3N_bit at CLC1GLSL.B12;
    const register unsigned short int G2D3T = 13;
    sbit  G2D3T_bit at CLC1GLSL.B13;
    const register unsigned short int G2D4N = 14;
    sbit  G2D4N_bit at CLC1GLSL.B14;
    const register unsigned short int G2D4T = 15;
    sbit  G2D4T_bit at CLC1GLSL.B15;

sfr unsigned int   volatile CLC1GLSH         absolute 0x46E;
    const register unsigned short int G3D1N = 0;
    sbit  G3D1N_bit at CLC1GLSH.B0;
    const register unsigned short int G3D1T = 1;
    sbit  G3D1T_bit at CLC1GLSH.B1;
    const register unsigned short int G3D2N = 2;
    sbit  G3D2N_bit at CLC1GLSH.B2;
    const register unsigned short int G3D2T = 3;
    sbit  G3D2T_bit at CLC1GLSH.B3;
    const register unsigned short int G3D3N = 4;
    sbit  G3D3N_bit at CLC1GLSH.B4;
    const register unsigned short int G3D3T = 5;
    sbit  G3D3T_bit at CLC1GLSH.B5;
    const register unsigned short int G3D4N = 6;
    sbit  G3D4N_bit at CLC1GLSH.B6;
    const register unsigned short int G3D4T = 7;
    sbit  G3D4T_bit at CLC1GLSH.B7;
    const register unsigned short int G4D1N = 8;
    sbit  G4D1N_bit at CLC1GLSH.B8;
    const register unsigned short int G4D1T = 9;
    sbit  G4D1T_bit at CLC1GLSH.B9;
    const register unsigned short int G4D2N = 10;
    sbit  G4D2N_bit at CLC1GLSH.B10;
    const register unsigned short int G4D2T = 11;
    sbit  G4D2T_bit at CLC1GLSH.B11;
    const register unsigned short int G4D3N = 12;
    sbit  G4D3N_bit at CLC1GLSH.B12;
    const register unsigned short int G4D3T = 13;
    sbit  G4D3T_bit at CLC1GLSH.B13;
    const register unsigned short int G4D4N = 14;
    sbit  G4D4N_bit at CLC1GLSH.B14;
    const register unsigned short int G4D4T = 15;
    sbit  G4D4T_bit at CLC1GLSH.B15;

sfr unsigned int   volatile CLC2CONL         absolute 0x470;
    const register unsigned short int MODE0_CLC2CONL = 0;
    sbit  MODE0_CLC2CONL_bit at CLC2CONL.B0;
    const register unsigned short int MODE1_CLC2CONL = 1;
    sbit  MODE1_CLC2CONL_bit at CLC2CONL.B1;

sfr unsigned int   volatile CLC2CONH         absolute 0x472;
sfr unsigned int   volatile CLC2SEL          absolute 0x474;
sfr unsigned int   volatile CLC2SELL         absolute 0x474;
sfr unsigned int   volatile CLC2GLSL         absolute 0x478;
sfr unsigned int   volatile CLC2GLSH         absolute 0x47A;
sfr unsigned int   volatile I2C1RCV          absolute 0x494;
sfr unsigned int   volatile I2C1TRN          absolute 0x496;
sfr unsigned int            I2C1BRG          absolute 0x498;
sfr unsigned int   volatile I2C1CON1         absolute 0x49A;
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

sfr unsigned int   volatile I2C1CONL         absolute 0x49A;
sfr unsigned int   volatile I2C1CON2         absolute 0x49C;
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

sfr unsigned int   volatile I2C1CONH         absolute 0x49C;
sfr unsigned int   volatile I2C1STAT         absolute 0x49E;
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

sfr unsigned int   volatile I2C1ADD          absolute 0x4A0;
sfr unsigned int   volatile I2C1MSK          absolute 0x4A2;
sfr unsigned int   volatile I2C2RCV          absolute 0x4A4;
sfr unsigned int   volatile I2C2TRN          absolute 0x4A6;
sfr unsigned int            I2C2BRG          absolute 0x4A8;
sfr unsigned int   volatile I2C2CON1         absolute 0x4AA;
sfr unsigned int   volatile I2C2CONL         absolute 0x4AA;
sfr unsigned int   volatile I2C2CON2         absolute 0x4AC;
sfr unsigned int   volatile I2C2CONH         absolute 0x4AC;
sfr unsigned int   volatile I2C2STAT         absolute 0x4AE;
sfr unsigned int   volatile I2C2ADD          absolute 0x4B0;
sfr unsigned int   volatile I2C2MSK          absolute 0x4B2;
sfr unsigned int   volatile DMACON           absolute 0x4C4;
    const register unsigned short int PRSSEL = 0;
    sbit  PRSSEL_bit at DMACON.B0;
    const register unsigned short int DMASIDL = 13;
    sbit  DMASIDL_bit at DMACON.B13;
    const register unsigned short int DMAEN_DMACON = 15;
    sbit  DMAEN_DMACON_bit at DMACON.B15;

sfr unsigned int   volatile DMABUF           absolute 0x4C6;
sfr unsigned int   volatile DMAL             absolute 0x4C8;
sfr unsigned int   volatile DMAH             absolute 0x4CA;
sfr unsigned int   volatile DMACH0           absolute 0x4CC;
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

sfr unsigned int   volatile DMAINT0          absolute 0x4CE;
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
    const register unsigned short int CHSEL6 = 14;
    sbit  CHSEL6_bit at DMAINT0.B14;
    const register unsigned short int DBUFWF = 15;
    sbit  DBUFWF_bit at DMAINT0.B15;

sfr unsigned int   volatile DMASRC0          absolute 0x4D0;
sfr unsigned int   volatile DMADST0          absolute 0x4D2;
sfr unsigned int   volatile DMACNT0          absolute 0x4D4;
sfr unsigned int   volatile DMACH1           absolute 0x4D6;
sfr unsigned int   volatile DMAINT1          absolute 0x4D8;
sfr unsigned int   volatile DMASRC1          absolute 0x4DA;
sfr unsigned int   volatile DMADST1          absolute 0x4DC;
sfr unsigned int   volatile DMACNT1          absolute 0x4DE;
sfr unsigned int   volatile DMACH2           absolute 0x4E0;
sfr unsigned int   volatile DMAINT2          absolute 0x4E2;
sfr unsigned int   volatile DMASRC2          absolute 0x4E4;
sfr unsigned int   volatile DMADST2          absolute 0x4E6;
sfr unsigned int   volatile DMACNT2          absolute 0x4E8;
sfr unsigned int   volatile DMACH3           absolute 0x4EA;
sfr unsigned int   volatile DMAINT3          absolute 0x4EC;
sfr unsigned int   volatile DMASRC3          absolute 0x4EE;
sfr unsigned int   volatile DMADST3          absolute 0x4F0;
sfr unsigned int   volatile DMACNT3          absolute 0x4F2;
sfr unsigned int   volatile DMACH4           absolute 0x4F4;
sfr unsigned int   volatile DMAINT4          absolute 0x4F6;
sfr unsigned int   volatile DMASRC4          absolute 0x4F8;
sfr unsigned int   volatile DMADST4          absolute 0x4FA;
sfr unsigned int   volatile DMACNT4          absolute 0x4FC;
sfr unsigned int   volatile DMACH5           absolute 0x4FE;
sfr unsigned int   volatile DMAINT5          absolute 0x500;
sfr unsigned int   volatile DMASRC5          absolute 0x502;
sfr unsigned int   volatile DMADST5          absolute 0x504;
sfr unsigned int   volatile DMACNT5          absolute 0x506;
sfr unsigned int   volatile PADCON           absolute 0x65E;
    const register unsigned short int PMPTTL = 0;
    sbit  PMPTTL_bit at PADCON.B0;
    const register unsigned short int IOCON = 15;
    sbit  IOCON_bit at PADCON.B15;

sfr unsigned int   volatile IOCSTAT          absolute 0x660;
    const register unsigned short int IOCPAF = 0;
    sbit  IOCPAF_bit at IOCSTAT.B0;
    const register unsigned short int IOCPBF = 1;
    sbit  IOCPBF_bit at IOCSTAT.B1;
    const register unsigned short int IOCPCF = 2;
    sbit  IOCPCF_bit at IOCSTAT.B2;

sfr unsigned int   volatile TRISA            absolute 0x662;
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

sfr unsigned int   volatile PORTA            absolute 0x664;
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

sfr unsigned int   volatile LATA             absolute 0x666;
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

sfr unsigned int   volatile ODCA             absolute 0x668;
    const register unsigned short int ODCA0 = 0;
    sbit  ODCA0_bit at ODCA.B0;
    const register unsigned short int ODCA1 = 1;
    sbit  ODCA1_bit at ODCA.B1;
    const register unsigned short int ODCA2 = 2;
    sbit  ODCA2_bit at ODCA.B2;
    const register unsigned short int ODCA3 = 3;
    sbit  ODCA3_bit at ODCA.B3;
    const register unsigned short int ODCA4 = 4;
    sbit  ODCA4_bit at ODCA.B4;
    const register unsigned short int ODCA7 = 7;
    sbit  ODCA7_bit at ODCA.B7;
    const register unsigned short int ODCA8 = 8;
    sbit  ODCA8_bit at ODCA.B8;
    const register unsigned short int ODCA9 = 9;
    sbit  ODCA9_bit at ODCA.B9;
    const register unsigned short int ODCA10 = 10;
    sbit  ODCA10_bit at ODCA.B10;

sfr unsigned int   volatile ANSA             absolute 0x66A;
    const register unsigned short int ANSA0 = 0;
    sbit  ANSA0_bit at ANSA.B0;
    const register unsigned short int ANSA1 = 1;
    sbit  ANSA1_bit at ANSA.B1;
    const register unsigned short int ANSA2 = 2;
    sbit  ANSA2_bit at ANSA.B2;
    const register unsigned short int ANSA3 = 3;
    sbit  ANSA3_bit at ANSA.B3;

sfr unsigned int   volatile IOCPA            absolute 0x66C;
    const register unsigned short int IOCPA0 = 0;
    sbit  IOCPA0_bit at IOCPA.B0;
    const register unsigned short int IOCPA1 = 1;
    sbit  IOCPA1_bit at IOCPA.B1;
    const register unsigned short int IOCPA2 = 2;
    sbit  IOCPA2_bit at IOCPA.B2;
    const register unsigned short int IOCPA3 = 3;
    sbit  IOCPA3_bit at IOCPA.B3;
    const register unsigned short int IOCPA4 = 4;
    sbit  IOCPA4_bit at IOCPA.B4;
    const register unsigned short int IOCPA7 = 7;
    sbit  IOCPA7_bit at IOCPA.B7;
    const register unsigned short int IOCPA8 = 8;
    sbit  IOCPA8_bit at IOCPA.B8;
    const register unsigned short int IOCPA9 = 9;
    sbit  IOCPA9_bit at IOCPA.B9;
    const register unsigned short int IOCPA10 = 10;
    sbit  IOCPA10_bit at IOCPA.B10;

sfr unsigned int   volatile IOCNA            absolute 0x66E;
    const register unsigned short int IOCNA0 = 0;
    sbit  IOCNA0_bit at IOCNA.B0;
    const register unsigned short int IOCNA1 = 1;
    sbit  IOCNA1_bit at IOCNA.B1;
    const register unsigned short int IOCNA2 = 2;
    sbit  IOCNA2_bit at IOCNA.B2;
    const register unsigned short int IOCNA3 = 3;
    sbit  IOCNA3_bit at IOCNA.B3;
    const register unsigned short int IOCNA4 = 4;
    sbit  IOCNA4_bit at IOCNA.B4;
    const register unsigned short int IOCNA7 = 7;
    sbit  IOCNA7_bit at IOCNA.B7;
    const register unsigned short int IOCNA8 = 8;
    sbit  IOCNA8_bit at IOCNA.B8;
    const register unsigned short int IOCNA9 = 9;
    sbit  IOCNA9_bit at IOCNA.B9;
    const register unsigned short int IOCNA10 = 10;
    sbit  IOCNA10_bit at IOCNA.B10;

sfr unsigned int   volatile IOCFA            absolute 0x670;
    const register unsigned short int IOCFA0 = 0;
    sbit  IOCFA0_bit at IOCFA.B0;
    const register unsigned short int IOCFA1 = 1;
    sbit  IOCFA1_bit at IOCFA.B1;
    const register unsigned short int IOCFA2 = 2;
    sbit  IOCFA2_bit at IOCFA.B2;
    const register unsigned short int IOCFA3 = 3;
    sbit  IOCFA3_bit at IOCFA.B3;
    const register unsigned short int IOCFA4 = 4;
    sbit  IOCFA4_bit at IOCFA.B4;
    const register unsigned short int IOCFA7 = 7;
    sbit  IOCFA7_bit at IOCFA.B7;
    const register unsigned short int IOCFA8 = 8;
    sbit  IOCFA8_bit at IOCFA.B8;
    const register unsigned short int IOCFA9 = 9;
    sbit  IOCFA9_bit at IOCFA.B9;
    const register unsigned short int IOCFA10 = 10;
    sbit  IOCFA10_bit at IOCFA.B10;

sfr unsigned int   volatile CNPUA            absolute 0x672;
    const register unsigned short int IOCPUA0 = 0;
    sbit  IOCPUA0_bit at CNPUA.B0;
    const register unsigned short int IOCPUA1 = 1;
    sbit  IOCPUA1_bit at CNPUA.B1;
    const register unsigned short int IOCPUA2 = 2;
    sbit  IOCPUA2_bit at CNPUA.B2;
    const register unsigned short int IOCPUA3 = 3;
    sbit  IOCPUA3_bit at CNPUA.B3;
    const register unsigned short int IOCPUA4 = 4;
    sbit  IOCPUA4_bit at CNPUA.B4;
    const register unsigned short int IOCPUA7 = 7;
    sbit  IOCPUA7_bit at CNPUA.B7;
    const register unsigned short int IOCPUA8 = 8;
    sbit  IOCPUA8_bit at CNPUA.B8;
    const register unsigned short int IOCPUA9 = 9;
    sbit  IOCPUA9_bit at CNPUA.B9;
    const register unsigned short int IOCPUA10 = 10;
    sbit  IOCPUA10_bit at CNPUA.B10;
    const register unsigned short int CNPUA0 = 0;
    sbit  CNPUA0_bit at CNPUA.B0;
    const register unsigned short int CNPUA1 = 1;
    sbit  CNPUA1_bit at CNPUA.B1;
    const register unsigned short int CNPUA2 = 2;
    sbit  CNPUA2_bit at CNPUA.B2;
    const register unsigned short int CNPUA3 = 3;
    sbit  CNPUA3_bit at CNPUA.B3;
    const register unsigned short int CNPUA4 = 4;
    sbit  CNPUA4_bit at CNPUA.B4;
    const register unsigned short int CNPUA7 = 7;
    sbit  CNPUA7_bit at CNPUA.B7;
    const register unsigned short int CNPUA8 = 8;
    sbit  CNPUA8_bit at CNPUA.B8;
    const register unsigned short int CNPUA9 = 9;
    sbit  CNPUA9_bit at CNPUA.B9;
    const register unsigned short int CNPUA10 = 10;
    sbit  CNPUA10_bit at CNPUA.B10;

sfr unsigned int   volatile IOCPUA           absolute 0x672;
sfr unsigned int   volatile CNPDA            absolute 0x674;
    const register unsigned short int IOCPDA0 = 0;
    sbit  IOCPDA0_bit at CNPDA.B0;
    const register unsigned short int IOCPDA1 = 1;
    sbit  IOCPDA1_bit at CNPDA.B1;
    const register unsigned short int IOCPDA2 = 2;
    sbit  IOCPDA2_bit at CNPDA.B2;
    const register unsigned short int IOCPDA3 = 3;
    sbit  IOCPDA3_bit at CNPDA.B3;
    const register unsigned short int IOCPDA4 = 4;
    sbit  IOCPDA4_bit at CNPDA.B4;
    const register unsigned short int IOCPDA7 = 7;
    sbit  IOCPDA7_bit at CNPDA.B7;
    const register unsigned short int IOCPDA8 = 8;
    sbit  IOCPDA8_bit at CNPDA.B8;
    const register unsigned short int IOCPDA9 = 9;
    sbit  IOCPDA9_bit at CNPDA.B9;
    const register unsigned short int IOCPDA10 = 10;
    sbit  IOCPDA10_bit at CNPDA.B10;
    const register unsigned short int CNPDA0 = 0;
    sbit  CNPDA0_bit at CNPDA.B0;
    const register unsigned short int CNPDA1 = 1;
    sbit  CNPDA1_bit at CNPDA.B1;
    const register unsigned short int CNPDA2 = 2;
    sbit  CNPDA2_bit at CNPDA.B2;
    const register unsigned short int CNPDA3 = 3;
    sbit  CNPDA3_bit at CNPDA.B3;
    const register unsigned short int CNPDA4 = 4;
    sbit  CNPDA4_bit at CNPDA.B4;
    const register unsigned short int CNPDA7 = 7;
    sbit  CNPDA7_bit at CNPDA.B7;
    const register unsigned short int CNPDA8 = 8;
    sbit  CNPDA8_bit at CNPDA.B8;
    const register unsigned short int CNPDA9 = 9;
    sbit  CNPDA9_bit at CNPDA.B9;
    const register unsigned short int CNPDA10 = 10;
    sbit  CNPDA10_bit at CNPDA.B10;

sfr unsigned int   volatile IOCPDA           absolute 0x674;
sfr unsigned int   volatile TRISB            absolute 0x676;
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

sfr unsigned int   volatile PORTB            absolute 0x678;
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

sfr unsigned int   volatile LATB             absolute 0x67A;
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

sfr unsigned int   volatile ODCB             absolute 0x67C;
    const register unsigned short int ODCB0 = 0;
    sbit  ODCB0_bit at ODCB.B0;
    const register unsigned short int ODCB1 = 1;
    sbit  ODCB1_bit at ODCB.B1;
    const register unsigned short int ODCB2 = 2;
    sbit  ODCB2_bit at ODCB.B2;
    const register unsigned short int ODCB3 = 3;
    sbit  ODCB3_bit at ODCB.B3;
    const register unsigned short int ODCB4 = 4;
    sbit  ODCB4_bit at ODCB.B4;
    const register unsigned short int ODCB5 = 5;
    sbit  ODCB5_bit at ODCB.B5;
    const register unsigned short int ODCB6 = 6;
    sbit  ODCB6_bit at ODCB.B6;
    const register unsigned short int ODCB7 = 7;
    sbit  ODCB7_bit at ODCB.B7;
    const register unsigned short int ODCB8 = 8;
    sbit  ODCB8_bit at ODCB.B8;
    const register unsigned short int ODCB9 = 9;
    sbit  ODCB9_bit at ODCB.B9;
    const register unsigned short int ODCB10 = 10;
    sbit  ODCB10_bit at ODCB.B10;
    const register unsigned short int ODCB11 = 11;
    sbit  ODCB11_bit at ODCB.B11;
    const register unsigned short int ODCB12 = 12;
    sbit  ODCB12_bit at ODCB.B12;
    const register unsigned short int ODCB13 = 13;
    sbit  ODCB13_bit at ODCB.B13;
    const register unsigned short int ODCB14 = 14;
    sbit  ODCB14_bit at ODCB.B14;
    const register unsigned short int ODCB15 = 15;
    sbit  ODCB15_bit at ODCB.B15;

sfr unsigned int   volatile ANSB             absolute 0x67E;
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

sfr unsigned int   volatile IOCPB            absolute 0x680;
    const register unsigned short int IOCPB0 = 0;
    sbit  IOCPB0_bit at IOCPB.B0;
    const register unsigned short int IOCPB1 = 1;
    sbit  IOCPB1_bit at IOCPB.B1;
    const register unsigned short int IOCPB2 = 2;
    sbit  IOCPB2_bit at IOCPB.B2;
    const register unsigned short int IOCPB3 = 3;
    sbit  IOCPB3_bit at IOCPB.B3;
    const register unsigned short int IOCPB4 = 4;
    sbit  IOCPB4_bit at IOCPB.B4;
    const register unsigned short int IOCPB5 = 5;
    sbit  IOCPB5_bit at IOCPB.B5;
    const register unsigned short int IOCPB6 = 6;
    sbit  IOCPB6_bit at IOCPB.B6;
    const register unsigned short int IOCPB7 = 7;
    sbit  IOCPB7_bit at IOCPB.B7;
    const register unsigned short int IOCPB8 = 8;
    sbit  IOCPB8_bit at IOCPB.B8;
    const register unsigned short int IOCPB9 = 9;
    sbit  IOCPB9_bit at IOCPB.B9;
    const register unsigned short int IOCPB10 = 10;
    sbit  IOCPB10_bit at IOCPB.B10;
    const register unsigned short int IOCPB11 = 11;
    sbit  IOCPB11_bit at IOCPB.B11;
    const register unsigned short int IOCPB12 = 12;
    sbit  IOCPB12_bit at IOCPB.B12;
    const register unsigned short int IOCPB13 = 13;
    sbit  IOCPB13_bit at IOCPB.B13;
    const register unsigned short int IOCPB14 = 14;
    sbit  IOCPB14_bit at IOCPB.B14;
    const register unsigned short int IOCPB15 = 15;
    sbit  IOCPB15_bit at IOCPB.B15;

sfr unsigned int   volatile IOCNB            absolute 0x682;
    const register unsigned short int IOCNB0 = 0;
    sbit  IOCNB0_bit at IOCNB.B0;
    const register unsigned short int IOCNB1 = 1;
    sbit  IOCNB1_bit at IOCNB.B1;
    const register unsigned short int IOCNB2 = 2;
    sbit  IOCNB2_bit at IOCNB.B2;
    const register unsigned short int IOCNB3 = 3;
    sbit  IOCNB3_bit at IOCNB.B3;
    const register unsigned short int IOCNB4 = 4;
    sbit  IOCNB4_bit at IOCNB.B4;
    const register unsigned short int IOCNB5 = 5;
    sbit  IOCNB5_bit at IOCNB.B5;
    const register unsigned short int IOCNB6 = 6;
    sbit  IOCNB6_bit at IOCNB.B6;
    const register unsigned short int IOCNB7 = 7;
    sbit  IOCNB7_bit at IOCNB.B7;
    const register unsigned short int IOCNB8 = 8;
    sbit  IOCNB8_bit at IOCNB.B8;
    const register unsigned short int IOCNB9 = 9;
    sbit  IOCNB9_bit at IOCNB.B9;
    const register unsigned short int IOCNB10 = 10;
    sbit  IOCNB10_bit at IOCNB.B10;
    const register unsigned short int IOCNB11 = 11;
    sbit  IOCNB11_bit at IOCNB.B11;
    const register unsigned short int IOCNB12 = 12;
    sbit  IOCNB12_bit at IOCNB.B12;
    const register unsigned short int IOCNB13 = 13;
    sbit  IOCNB13_bit at IOCNB.B13;
    const register unsigned short int IOCNB14 = 14;
    sbit  IOCNB14_bit at IOCNB.B14;
    const register unsigned short int IOCNB15 = 15;
    sbit  IOCNB15_bit at IOCNB.B15;

sfr unsigned int   volatile IOCFB            absolute 0x684;
    const register unsigned short int IOCFB0 = 0;
    sbit  IOCFB0_bit at IOCFB.B0;
    const register unsigned short int IOCFB1 = 1;
    sbit  IOCFB1_bit at IOCFB.B1;
    const register unsigned short int IOCFB2 = 2;
    sbit  IOCFB2_bit at IOCFB.B2;
    const register unsigned short int IOCFB3 = 3;
    sbit  IOCFB3_bit at IOCFB.B3;
    const register unsigned short int IOCFB4 = 4;
    sbit  IOCFB4_bit at IOCFB.B4;
    const register unsigned short int IOCFB5 = 5;
    sbit  IOCFB5_bit at IOCFB.B5;
    const register unsigned short int IOCFB6 = 6;
    sbit  IOCFB6_bit at IOCFB.B6;
    const register unsigned short int IOCFB7 = 7;
    sbit  IOCFB7_bit at IOCFB.B7;
    const register unsigned short int IOCFB8 = 8;
    sbit  IOCFB8_bit at IOCFB.B8;
    const register unsigned short int IOCFB9 = 9;
    sbit  IOCFB9_bit at IOCFB.B9;
    const register unsigned short int IOCFB10 = 10;
    sbit  IOCFB10_bit at IOCFB.B10;
    const register unsigned short int IOCFB11 = 11;
    sbit  IOCFB11_bit at IOCFB.B11;
    const register unsigned short int IOCFB12 = 12;
    sbit  IOCFB12_bit at IOCFB.B12;
    const register unsigned short int IOCFB13 = 13;
    sbit  IOCFB13_bit at IOCFB.B13;
    const register unsigned short int IOCFB14 = 14;
    sbit  IOCFB14_bit at IOCFB.B14;
    const register unsigned short int IOCFB15 = 15;
    sbit  IOCFB15_bit at IOCFB.B15;

sfr unsigned int   volatile CNPUB            absolute 0x686;
    const register unsigned short int IOCPUB0 = 0;
    sbit  IOCPUB0_bit at CNPUB.B0;
    const register unsigned short int IOCPUB1 = 1;
    sbit  IOCPUB1_bit at CNPUB.B1;
    const register unsigned short int IOCPUB2 = 2;
    sbit  IOCPUB2_bit at CNPUB.B2;
    const register unsigned short int IOCPUB3 = 3;
    sbit  IOCPUB3_bit at CNPUB.B3;
    const register unsigned short int IOCPUB4 = 4;
    sbit  IOCPUB4_bit at CNPUB.B4;
    const register unsigned short int IOCPUB5 = 5;
    sbit  IOCPUB5_bit at CNPUB.B5;
    const register unsigned short int IOCPUB6 = 6;
    sbit  IOCPUB6_bit at CNPUB.B6;
    const register unsigned short int IOCPUB7 = 7;
    sbit  IOCPUB7_bit at CNPUB.B7;
    const register unsigned short int IOCPUB8 = 8;
    sbit  IOCPUB8_bit at CNPUB.B8;
    const register unsigned short int IOCPUB9 = 9;
    sbit  IOCPUB9_bit at CNPUB.B9;
    const register unsigned short int IOCPUB10 = 10;
    sbit  IOCPUB10_bit at CNPUB.B10;
    const register unsigned short int IOCPUB11 = 11;
    sbit  IOCPUB11_bit at CNPUB.B11;
    const register unsigned short int IOCPUB12 = 12;
    sbit  IOCPUB12_bit at CNPUB.B12;
    const register unsigned short int IOCPUB13 = 13;
    sbit  IOCPUB13_bit at CNPUB.B13;
    const register unsigned short int IOCPUB14 = 14;
    sbit  IOCPUB14_bit at CNPUB.B14;
    const register unsigned short int IOCPUB15 = 15;
    sbit  IOCPUB15_bit at CNPUB.B15;
    const register unsigned short int CNPUB0 = 0;
    sbit  CNPUB0_bit at CNPUB.B0;
    const register unsigned short int CNPUB1 = 1;
    sbit  CNPUB1_bit at CNPUB.B1;
    const register unsigned short int CNPUB2 = 2;
    sbit  CNPUB2_bit at CNPUB.B2;
    const register unsigned short int CNPUB3 = 3;
    sbit  CNPUB3_bit at CNPUB.B3;
    const register unsigned short int CNPUB4 = 4;
    sbit  CNPUB4_bit at CNPUB.B4;
    const register unsigned short int CNPUB5 = 5;
    sbit  CNPUB5_bit at CNPUB.B5;
    const register unsigned short int CNPUB6 = 6;
    sbit  CNPUB6_bit at CNPUB.B6;
    const register unsigned short int CNPUB7 = 7;
    sbit  CNPUB7_bit at CNPUB.B7;
    const register unsigned short int CNPUB8 = 8;
    sbit  CNPUB8_bit at CNPUB.B8;
    const register unsigned short int CNPUB9 = 9;
    sbit  CNPUB9_bit at CNPUB.B9;
    const register unsigned short int CNPUB10 = 10;
    sbit  CNPUB10_bit at CNPUB.B10;
    const register unsigned short int CNPUB11 = 11;
    sbit  CNPUB11_bit at CNPUB.B11;
    const register unsigned short int CNPUB12 = 12;
    sbit  CNPUB12_bit at CNPUB.B12;
    const register unsigned short int CNPUB13 = 13;
    sbit  CNPUB13_bit at CNPUB.B13;
    const register unsigned short int CNPUB14 = 14;
    sbit  CNPUB14_bit at CNPUB.B14;
    const register unsigned short int CNPUB15 = 15;
    sbit  CNPUB15_bit at CNPUB.B15;

sfr unsigned int   volatile IOCPUB           absolute 0x686;
sfr unsigned int   volatile CNPDB            absolute 0x688;
    const register unsigned short int IOCPDB0 = 0;
    sbit  IOCPDB0_bit at CNPDB.B0;
    const register unsigned short int IOCPDB1 = 1;
    sbit  IOCPDB1_bit at CNPDB.B1;
    const register unsigned short int IOCPDB2 = 2;
    sbit  IOCPDB2_bit at CNPDB.B2;
    const register unsigned short int IOCPDB3 = 3;
    sbit  IOCPDB3_bit at CNPDB.B3;
    const register unsigned short int IOCPDB4 = 4;
    sbit  IOCPDB4_bit at CNPDB.B4;
    const register unsigned short int IOCPDB5 = 5;
    sbit  IOCPDB5_bit at CNPDB.B5;
    const register unsigned short int IOCPDB6 = 6;
    sbit  IOCPDB6_bit at CNPDB.B6;
    const register unsigned short int IOCPDB7 = 7;
    sbit  IOCPDB7_bit at CNPDB.B7;
    const register unsigned short int IOCPDB8 = 8;
    sbit  IOCPDB8_bit at CNPDB.B8;
    const register unsigned short int IOCPDB9 = 9;
    sbit  IOCPDB9_bit at CNPDB.B9;
    const register unsigned short int IOCPDB10 = 10;
    sbit  IOCPDB10_bit at CNPDB.B10;
    const register unsigned short int IOCPDB11 = 11;
    sbit  IOCPDB11_bit at CNPDB.B11;
    const register unsigned short int IOCPDB12 = 12;
    sbit  IOCPDB12_bit at CNPDB.B12;
    const register unsigned short int IOCPDB13 = 13;
    sbit  IOCPDB13_bit at CNPDB.B13;
    const register unsigned short int IOCPDB14 = 14;
    sbit  IOCPDB14_bit at CNPDB.B14;
    const register unsigned short int IOCPDB15 = 15;
    sbit  IOCPDB15_bit at CNPDB.B15;
    const register unsigned short int CNPDB0 = 0;
    sbit  CNPDB0_bit at CNPDB.B0;
    const register unsigned short int CNPDB1 = 1;
    sbit  CNPDB1_bit at CNPDB.B1;
    const register unsigned short int CNPDB2 = 2;
    sbit  CNPDB2_bit at CNPDB.B2;
    const register unsigned short int CNPDB3 = 3;
    sbit  CNPDB3_bit at CNPDB.B3;
    const register unsigned short int CNPDB4 = 4;
    sbit  CNPDB4_bit at CNPDB.B4;
    const register unsigned short int CNPDB5 = 5;
    sbit  CNPDB5_bit at CNPDB.B5;
    const register unsigned short int CNPDB6 = 6;
    sbit  CNPDB6_bit at CNPDB.B6;
    const register unsigned short int CNPDB7 = 7;
    sbit  CNPDB7_bit at CNPDB.B7;
    const register unsigned short int CNPDB8 = 8;
    sbit  CNPDB8_bit at CNPDB.B8;
    const register unsigned short int CNPDB9 = 9;
    sbit  CNPDB9_bit at CNPDB.B9;
    const register unsigned short int CNPDB10 = 10;
    sbit  CNPDB10_bit at CNPDB.B10;
    const register unsigned short int CNPDB11 = 11;
    sbit  CNPDB11_bit at CNPDB.B11;
    const register unsigned short int CNPDB12 = 12;
    sbit  CNPDB12_bit at CNPDB.B12;
    const register unsigned short int CNPDB13 = 13;
    sbit  CNPDB13_bit at CNPDB.B13;
    const register unsigned short int CNPDB14 = 14;
    sbit  CNPDB14_bit at CNPDB.B14;
    const register unsigned short int CNPDB15 = 15;
    sbit  CNPDB15_bit at CNPDB.B15;

sfr unsigned int   volatile IOCPDB           absolute 0x688;
sfr unsigned int   volatile TRISC            absolute 0x68A;
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

sfr unsigned int   volatile PORTC            absolute 0x68C;
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

sfr unsigned int   volatile LATC             absolute 0x68E;
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

sfr unsigned int   volatile ODCC             absolute 0x690;
    const register unsigned short int ODCC0 = 0;
    sbit  ODCC0_bit at ODCC.B0;
    const register unsigned short int ODCC1 = 1;
    sbit  ODCC1_bit at ODCC.B1;
    const register unsigned short int ODCC2 = 2;
    sbit  ODCC2_bit at ODCC.B2;
    const register unsigned short int ODCC3 = 3;
    sbit  ODCC3_bit at ODCC.B3;
    const register unsigned short int ODCC4 = 4;
    sbit  ODCC4_bit at ODCC.B4;
    const register unsigned short int ODCC5 = 5;
    sbit  ODCC5_bit at ODCC.B5;
    const register unsigned short int ODCC6 = 6;
    sbit  ODCC6_bit at ODCC.B6;
    const register unsigned short int ODCC7 = 7;
    sbit  ODCC7_bit at ODCC.B7;
    const register unsigned short int ODCC8 = 8;
    sbit  ODCC8_bit at ODCC.B8;
    const register unsigned short int ODCC9 = 9;
    sbit  ODCC9_bit at ODCC.B9;

sfr unsigned int   volatile ANSC             absolute 0x692;
    const register unsigned short int ANSC0 = 0;
    sbit  ANSC0_bit at ANSC.B0;
    const register unsigned short int ANSC1 = 1;
    sbit  ANSC1_bit at ANSC.B1;
    const register unsigned short int ANSC2 = 2;
    sbit  ANSC2_bit at ANSC.B2;
    const register unsigned short int ANSC3 = 3;
    sbit  ANSC3_bit at ANSC.B3;

sfr unsigned int   volatile IOCPC            absolute 0x694;
    const register unsigned short int IOCPC0 = 0;
    sbit  IOCPC0_bit at IOCPC.B0;
    const register unsigned short int IOCPC1 = 1;
    sbit  IOCPC1_bit at IOCPC.B1;
    const register unsigned short int IOCPC2 = 2;
    sbit  IOCPC2_bit at IOCPC.B2;
    const register unsigned short int IOCPC3 = 3;
    sbit  IOCPC3_bit at IOCPC.B3;
    const register unsigned short int IOCPC4 = 4;
    sbit  IOCPC4_bit at IOCPC.B4;
    const register unsigned short int IOCPC5 = 5;
    sbit  IOCPC5_bit at IOCPC.B5;
    const register unsigned short int IOCPC6 = 6;
    sbit  IOCPC6_bit at IOCPC.B6;
    const register unsigned short int IOCPC7 = 7;
    sbit  IOCPC7_bit at IOCPC.B7;
    const register unsigned short int IOCPC8 = 8;
    sbit  IOCPC8_bit at IOCPC.B8;
    const register unsigned short int IOCPC9 = 9;
    sbit  IOCPC9_bit at IOCPC.B9;

sfr unsigned int   volatile IOCNC            absolute 0x696;
    const register unsigned short int IOCNC0 = 0;
    sbit  IOCNC0_bit at IOCNC.B0;
    const register unsigned short int IOCNC1 = 1;
    sbit  IOCNC1_bit at IOCNC.B1;
    const register unsigned short int IOCNC2 = 2;
    sbit  IOCNC2_bit at IOCNC.B2;
    const register unsigned short int IOCNC3 = 3;
    sbit  IOCNC3_bit at IOCNC.B3;
    const register unsigned short int IOCNC4 = 4;
    sbit  IOCNC4_bit at IOCNC.B4;
    const register unsigned short int IOCNC5 = 5;
    sbit  IOCNC5_bit at IOCNC.B5;
    const register unsigned short int IOCNC6 = 6;
    sbit  IOCNC6_bit at IOCNC.B6;
    const register unsigned short int IOCNC7 = 7;
    sbit  IOCNC7_bit at IOCNC.B7;
    const register unsigned short int IOCNC8 = 8;
    sbit  IOCNC8_bit at IOCNC.B8;
    const register unsigned short int IOCNC9 = 9;
    sbit  IOCNC9_bit at IOCNC.B9;

sfr unsigned int   volatile IOCFC            absolute 0x698;
    const register unsigned short int IOCFC0 = 0;
    sbit  IOCFC0_bit at IOCFC.B0;
    const register unsigned short int IOCFC1 = 1;
    sbit  IOCFC1_bit at IOCFC.B1;
    const register unsigned short int IOCFC2 = 2;
    sbit  IOCFC2_bit at IOCFC.B2;
    const register unsigned short int IOCFC3 = 3;
    sbit  IOCFC3_bit at IOCFC.B3;
    const register unsigned short int IOCFC4 = 4;
    sbit  IOCFC4_bit at IOCFC.B4;
    const register unsigned short int IOCFC5 = 5;
    sbit  IOCFC5_bit at IOCFC.B5;
    const register unsigned short int IOCFC6 = 6;
    sbit  IOCFC6_bit at IOCFC.B6;
    const register unsigned short int IOCFC7 = 7;
    sbit  IOCFC7_bit at IOCFC.B7;
    const register unsigned short int IOCFC8 = 8;
    sbit  IOCFC8_bit at IOCFC.B8;
    const register unsigned short int IOCFC9 = 9;
    sbit  IOCFC9_bit at IOCFC.B9;

sfr unsigned int   volatile CNPUC            absolute 0x69A;
    const register unsigned short int IOCPUC0 = 0;
    sbit  IOCPUC0_bit at CNPUC.B0;
    const register unsigned short int IOCPUC1 = 1;
    sbit  IOCPUC1_bit at CNPUC.B1;
    const register unsigned short int IOCPUC2 = 2;
    sbit  IOCPUC2_bit at CNPUC.B2;
    const register unsigned short int IOCPUC3 = 3;
    sbit  IOCPUC3_bit at CNPUC.B3;
    const register unsigned short int IOCPUC4 = 4;
    sbit  IOCPUC4_bit at CNPUC.B4;
    const register unsigned short int IOCPUC5 = 5;
    sbit  IOCPUC5_bit at CNPUC.B5;
    const register unsigned short int IOCPUC6 = 6;
    sbit  IOCPUC6_bit at CNPUC.B6;
    const register unsigned short int IOCPUC7 = 7;
    sbit  IOCPUC7_bit at CNPUC.B7;
    const register unsigned short int IOCPUC8 = 8;
    sbit  IOCPUC8_bit at CNPUC.B8;
    const register unsigned short int IOCPUC9 = 9;
    sbit  IOCPUC9_bit at CNPUC.B9;
    const register unsigned short int CNPUC0 = 0;
    sbit  CNPUC0_bit at CNPUC.B0;
    const register unsigned short int CNPUC1 = 1;
    sbit  CNPUC1_bit at CNPUC.B1;
    const register unsigned short int CNPUC2 = 2;
    sbit  CNPUC2_bit at CNPUC.B2;
    const register unsigned short int CNPUC3 = 3;
    sbit  CNPUC3_bit at CNPUC.B3;
    const register unsigned short int CNPUC4 = 4;
    sbit  CNPUC4_bit at CNPUC.B4;
    const register unsigned short int CNPUC5 = 5;
    sbit  CNPUC5_bit at CNPUC.B5;
    const register unsigned short int CNPUC6 = 6;
    sbit  CNPUC6_bit at CNPUC.B6;
    const register unsigned short int CNPUC7 = 7;
    sbit  CNPUC7_bit at CNPUC.B7;
    const register unsigned short int CNPUC8 = 8;
    sbit  CNPUC8_bit at CNPUC.B8;
    const register unsigned short int CNPUC9 = 9;
    sbit  CNPUC9_bit at CNPUC.B9;

sfr unsigned int   volatile IOCPUC           absolute 0x69A;
sfr unsigned int   volatile CNPDC            absolute 0x69C;
    const register unsigned short int IOCPDC0 = 0;
    sbit  IOCPDC0_bit at CNPDC.B0;
    const register unsigned short int IOCPDC1 = 1;
    sbit  IOCPDC1_bit at CNPDC.B1;
    const register unsigned short int IOCPDC2 = 2;
    sbit  IOCPDC2_bit at CNPDC.B2;
    const register unsigned short int IOCPDC3 = 3;
    sbit  IOCPDC3_bit at CNPDC.B3;
    const register unsigned short int IOCPDC4 = 4;
    sbit  IOCPDC4_bit at CNPDC.B4;
    const register unsigned short int IOCPDC5 = 5;
    sbit  IOCPDC5_bit at CNPDC.B5;
    const register unsigned short int IOCPDC6 = 6;
    sbit  IOCPDC6_bit at CNPDC.B6;
    const register unsigned short int IOCPDC7 = 7;
    sbit  IOCPDC7_bit at CNPDC.B7;
    const register unsigned short int IOCPDC8 = 8;
    sbit  IOCPDC8_bit at CNPDC.B8;
    const register unsigned short int IOCPDC9 = 9;
    sbit  IOCPDC9_bit at CNPDC.B9;
    const register unsigned short int CNPDC0 = 0;
    sbit  CNPDC0_bit at CNPDC.B0;
    const register unsigned short int CNPDC1 = 1;
    sbit  CNPDC1_bit at CNPDC.B1;
    const register unsigned short int CNPDC2 = 2;
    sbit  CNPDC2_bit at CNPDC.B2;
    const register unsigned short int CNPDC3 = 3;
    sbit  CNPDC3_bit at CNPDC.B3;
    const register unsigned short int CNPDC4 = 4;
    sbit  CNPDC4_bit at CNPDC.B4;
    const register unsigned short int CNPDC5 = 5;
    sbit  CNPDC5_bit at CNPDC.B5;
    const register unsigned short int CNPDC6 = 6;
    sbit  CNPDC6_bit at CNPDC.B6;
    const register unsigned short int CNPDC7 = 7;
    sbit  CNPDC7_bit at CNPDC.B7;
    const register unsigned short int CNPDC8 = 8;
    sbit  CNPDC8_bit at CNPDC.B8;
    const register unsigned short int CNPDC9 = 9;
    sbit  CNPDC9_bit at CNPDC.B9;

sfr unsigned int   volatile IOCPDC           absolute 0x69C;
sfr unsigned int   volatile ADC1BUF0         absolute 0x712;
sfr unsigned int   volatile ADC1BUF1         absolute 0x714;
sfr unsigned int   volatile ADC1BUF2         absolute 0x716;
sfr unsigned int   volatile ADC1BUF3         absolute 0x718;
sfr unsigned int   volatile ADC1BUF4         absolute 0x71A;
sfr unsigned int   volatile ADC1BUF5         absolute 0x71C;
sfr unsigned int   volatile ADC1BUF6         absolute 0x71E;
sfr unsigned int   volatile ADC1BUF7         absolute 0x720;
sfr unsigned int   volatile ADC1BUF8         absolute 0x722;
sfr unsigned int   volatile ADC1BUF9         absolute 0x724;
sfr unsigned int   volatile ADC1BUF10        absolute 0x726;
sfr unsigned int   volatile ADC1BUF11        absolute 0x728;
sfr unsigned int   volatile ADC1BUF12        absolute 0x72A;
sfr unsigned int   volatile ADC1BUF13        absolute 0x72C;
sfr unsigned int   volatile ADC1BUF14        absolute 0x72E;
sfr unsigned int   volatile ADC1BUF15        absolute 0x730;
sfr unsigned int   volatile AD1CON1          absolute 0x746;
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

sfr unsigned int   volatile AD1CON2          absolute 0x748;
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
    const register unsigned short int NVCFG0 = 13;
    sbit  NVCFG0_bit at AD1CON2.B13;
    const register unsigned short int PCVFG0 = 14;
    sbit  PCVFG0_bit at AD1CON2.B14;
    const register unsigned short int PCVFG1 = 15;
    sbit  PCVFG1_bit at AD1CON2.B15;

sfr unsigned int   volatile AD1CON3          absolute 0x74A;
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

sfr unsigned int            AD1CHS           absolute 0x74C;
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

sfr unsigned int            AD1CHS0          absolute 0x74C;
sfr unsigned int            AD1CSSH          absolute 0x74E;
    const register unsigned short int CSS28 = 12;
    sbit  CSS28_bit at AD1CSSH.B12;
    const register unsigned short int CSS29 = 13;
    sbit  CSS29_bit at AD1CSSH.B13;
    const register unsigned short int CSS30 = 14;
    sbit  CSS30_bit at AD1CSSH.B14;

sfr unsigned int            AD1CSSL          absolute 0x750;
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
    const register unsigned short int CSS15 = 15;
    sbit  CSS15_bit at AD1CSSL.B15;

sfr unsigned int            AD1CON4          absolute 0x752;
    const register unsigned short int DMABL0 = 0;
    sbit  DMABL0_bit at AD1CON4.B0;
    const register unsigned short int DMABL1 = 1;
    sbit  DMABL1_bit at AD1CON4.B1;
    const register unsigned short int DMABL2 = 2;
    sbit  DMABL2_bit at AD1CON4.B2;

sfr unsigned int   volatile AD1CON5          absolute 0x754;
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

sfr unsigned int   volatile AD1CHITL         absolute 0x758;
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
    const register unsigned short int CHH13 = 13;
    sbit  CHH13_bit at AD1CHITL.B13;

sfr unsigned int   volatile AD1CTMENH        absolute 0x75A;
    const register unsigned short int CTMEN16 = 0;
    sbit  CTMEN16_bit at AD1CTMENH.B0;
    const register unsigned short int CTMEN17 = 1;
    sbit  CTMEN17_bit at AD1CTMENH.B1;
    const register unsigned short int CTMEN18 = 2;
    sbit  CTMEN18_bit at AD1CTMENH.B2;
    const register unsigned short int CTMEN19 = 3;
    sbit  CTMEN19_bit at AD1CTMENH.B3;
    const register unsigned short int CTMEN20 = 4;
    sbit  CTMEN20_bit at AD1CTMENH.B4;
    const register unsigned short int CTMEN21 = 5;
    sbit  CTMEN21_bit at AD1CTMENH.B5;
    const register unsigned short int CTMEN22 = 6;
    sbit  CTMEN22_bit at AD1CTMENH.B6;
    const register unsigned short int CTMEN23 = 7;
    sbit  CTMEN23_bit at AD1CTMENH.B7;
    const register unsigned short int CTMEN24 = 8;
    sbit  CTMEN24_bit at AD1CTMENH.B8;
    const register unsigned short int CTMEN25 = 9;
    sbit  CTMEN25_bit at AD1CTMENH.B9;
    const register unsigned short int CTMEN26 = 10;
    sbit  CTMEN26_bit at AD1CTMENH.B10;
    const register unsigned short int CTMEN27 = 11;
    sbit  CTMEN27_bit at AD1CTMENH.B11;
    const register unsigned short int CTMEN28 = 12;
    sbit  CTMEN28_bit at AD1CTMENH.B12;
    const register unsigned short int CTMEN29 = 13;
    sbit  CTMEN29_bit at AD1CTMENH.B13;
    const register unsigned short int CTMEN30 = 14;
    sbit  CTMEN30_bit at AD1CTMENH.B14;
    const register unsigned short int CTMEN31 = 15;
    sbit  CTMEN31_bit at AD1CTMENH.B15;

sfr unsigned int   volatile AD1CTMENL        absolute 0x75C;
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
    const register unsigned short int CTMEN13 = 13;
    sbit  CTMEN13_bit at AD1CTMENL.B13;
    const register unsigned short int CTMEN14 = 14;
    sbit  CTMEN14_bit at AD1CTMENL.B14;
    const register unsigned short int CTMEN15 = 15;
    sbit  CTMEN15_bit at AD1CTMENL.B15;

sfr unsigned int   volatile AD1RESDMA        absolute 0x75E;
sfr unsigned int   volatile NVMCON           absolute 0x760;
    const register unsigned short int NVMOP0 = 0;
    sbit  NVMOP0_bit at NVMCON.B0;
    const register unsigned short int NVMOP1 = 1;
    sbit  NVMOP1_bit at NVMCON.B1;
    const register unsigned short int NVMOP2 = 2;
    sbit  NVMOP2_bit at NVMCON.B2;
    const register unsigned short int NVMOP3 = 3;
    sbit  NVMOP3_bit at NVMCON.B3;
    const register unsigned short int P2ACTIV = 10;
    sbit  P2ACTIV_bit at NVMCON.B10;
    const register unsigned short int SFTSWP = 11;
    sbit  SFTSWP_bit at NVMCON.B11;
    const register unsigned short int NVMSIDL = 12;
    sbit  NVMSIDL_bit at NVMCON.B12;
    const register unsigned short int WRERR = 13;
    sbit  WRERR_bit at NVMCON.B13;
    const register unsigned short int WREN = 14;
    sbit  WREN_bit at NVMCON.B14;
    const register unsigned short int WR = 15;
    sbit  WR_bit at NVMCON.B15;

sfr unsigned int   volatile NVMADR           absolute 0x762;
sfr unsigned int   volatile NVMADRL          absolute 0x762;
sfr unsigned int   volatile NVMADRH          absolute 0x764;
sfr unsigned int   volatile NVMADRU          absolute 0x764;
sfr unsigned int            NVMKEY           absolute 0x766;
sfr unsigned int            RPINR0           absolute 0x790;
sfr unsigned int            RPINR1           absolute 0x792;
sfr unsigned int            RPINR2           absolute 0x794;
sfr unsigned int            RPINR3           absolute 0x796;
sfr unsigned int   volatile RPINR5           absolute 0x79A;
sfr unsigned int   volatile RPINR6           absolute 0x79C;
sfr unsigned int            RPINR7           absolute 0x79E;
sfr unsigned int            RPINR8           absolute 0x7A0;
sfr unsigned int            RPINR11          absolute 0x7A6;
sfr unsigned int            RPINR12          absolute 0x7A8;
sfr unsigned int            RPINR18          absolute 0x7B4;
sfr unsigned int            RPINR19          absolute 0x7B6;
sfr unsigned int            RPINR20          absolute 0x7B8;
sfr unsigned int            RPINR21          absolute 0x7BA;
sfr unsigned int            RPINR22          absolute 0x7BC;
sfr unsigned int            RPINR23          absolute 0x7BE;
sfr unsigned int   volatile RPINR25          absolute 0x7C2;
sfr unsigned int            RPINR28          absolute 0x7C8;
sfr unsigned int            RPINR29          absolute 0x7CA;
sfr unsigned int            RPOR0            absolute 0x7D4;
sfr unsigned int            RPOR1            absolute 0x7D6;
sfr unsigned int            RPOR2            absolute 0x7D8;
sfr unsigned int            RPOR3            absolute 0x7DA;
sfr unsigned int            RPOR4            absolute 0x7DC;
sfr unsigned int            RPOR5            absolute 0x7DE;
sfr unsigned int            RPOR6            absolute 0x7E0;
sfr unsigned int            RPOR7            absolute 0x7E2;
sfr unsigned int            RPOR8            absolute 0x7E4;
sfr unsigned int            RPOR9            absolute 0x7E6;
sfr unsigned int            RPOR10           absolute 0x7E8;
sfr unsigned int            RPOR11           absolute 0x7EA;
sfr unsigned int            RPOR12           absolute 0x7EC;
sfr unsigned int            RPOR13           absolute 0x7EE;
sfr unsigned int            RPOR14           absolute 0x7F0;

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
      unsigned :3;
      unsigned AIVTEN:1;
      unsigned :4;
      unsigned SWTRAP:1;
      unsigned DISI:1;
      unsigned GIE:1;
    };
  };
} typeINTCON2BITS;
sfr volatile typeINTCON2BITS INTCON2bits absolute 0x82;

typedef struct tagINTCON4BITS {
  union {
    struct {
      unsigned SGHT:1;
      unsigned ECCDBE:1;
    };
  };
} typeINTCON4BITS;
sfr volatile typeINTCON4BITS INTCON4bits absolute 0x86;

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
      unsigned NVMIF:1;
    };
  };
} typeIFS0BITS;
sfr volatile typeIFS0BITS IFS0bits absolute 0x88;

typedef struct tagIFS1BITS {
  union {
    struct {
      unsigned SI2C1IF:1;
      unsigned MI2C1IF:1;
      unsigned CMIF:1;
      unsigned IOCIF:1;
      unsigned INT1IF:1;
      unsigned :3;
      unsigned DMA2IF:1;
      unsigned OC3IF:1;
      unsigned :3;
      unsigned INT2IF:1;
      unsigned U2RXIF:1;
      unsigned U2TXIF:1;
    };
  };
} typeIFS1BITS;
sfr volatile typeIFS1BITS IFS1bits absolute 0x8A;

typedef struct tagIFS2BITS {
  union {
    struct {
      unsigned SPI2IF:1;
      unsigned SPI2TXIF:1;
      unsigned :2;
      unsigned DMA3IF:1;
      unsigned IC3IF:1;
      unsigned :5;
      unsigned CCT3IF:1;
      unsigned CCT4IF:1;
      unsigned PMPIF:1;
      unsigned DMA4IF:1;
    };
  };
} typeIFS2BITS;
sfr volatile typeIFS2BITS IFS2bits absolute 0x8C;

typedef struct tagIFS3BITS {
  union {
    struct {
      unsigned :1;
      unsigned SI2C2IF:1;
      unsigned MI2C2IF:1;
      unsigned :2;
      unsigned INT3IF:1;
      unsigned INT4IF:1;
      unsigned :3;
      unsigned SPI1RXIF:1;
      unsigned SPI2RXIF:1;
      unsigned SPI3RXIF:1;
      unsigned DMA5IF:1;
      unsigned RTCIF:1;
      unsigned CCP1IF:1;
    };
  };
} typeIFS3BITS;
sfr volatile typeIFS3BITS IFS3bits absolute 0x8E;

typedef struct tagIFS4BITS {
  union {
    struct {
      unsigned CCP2IF:1;
      unsigned U1ERIF:1;
      unsigned U2ERIF:1;
      unsigned CRCIF:1;
      unsigned :4;
      unsigned LVDIF:1;
      unsigned :4;
      unsigned CTMUIF:1;
    };
  };
} typeIFS4BITS;
sfr volatile typeIFS4BITS IFS4bits absolute 0x90;

typedef struct tagIFS5BITS {
  union {
    struct {
      unsigned :4;
      unsigned I2C1BCIF:1;
      unsigned I2C2BCIF:1;
      unsigned :4;
      unsigned SPI3IF:1;
      unsigned SPI3TXIF:1;
      unsigned :2;
      unsigned CCP3IF:1;
      unsigned CCP4IF:1;
    };
  };
} typeIFS5BITS;
sfr volatile typeIFS5BITS IFS5bits absolute 0x92;

typedef struct tagIFS6BITS {
  union {
    struct {
      unsigned CLC1IF:1;
      unsigned CLC2IF:1;
      unsigned :3;
      unsigned CCT1IF:1;
      unsigned CCT2IF:1;
      unsigned :3;
      unsigned FSTIF:1;
      unsigned :1;
      unsigned ECCIF:1;
      unsigned :1;
      unsigned RTCCTSIF:1;
    };
  };
} typeIFS6BITS;
sfr volatile typeIFS6BITS IFS6bits absolute 0x94;

typedef struct tagIFS7BITS {
  union {
    struct {
      unsigned :5;
      unsigned JTAGIF:1;
    };
  };
} typeIFS7BITS;
sfr volatile typeIFS7BITS IFS7bits absolute 0x96;

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
      unsigned NVMIE:1;
    };
  };
} typeIEC0BITS;
sfr volatile typeIEC0BITS IEC0bits absolute 0x98;

typedef struct tagIEC1BITS {
  union {
    struct {
      unsigned SI2C1IE:1;
      unsigned MI2C1IE:1;
      unsigned CMIE:1;
      unsigned IOCIE:1;
      unsigned INT1IE:1;
      unsigned :3;
      unsigned DMA2IE:1;
      unsigned OC3IE:1;
      unsigned :3;
      unsigned INT2IE:1;
      unsigned U2RXIE:1;
      unsigned U2TXIE:1;
    };
  };
} typeIEC1BITS;
sfr volatile typeIEC1BITS IEC1bits absolute 0x9A;

typedef struct tagIEC2BITS {
  union {
    struct {
      unsigned SPI2IE:1;
      unsigned SPI2TXIE:1;
      unsigned :2;
      unsigned DMA3IE:1;
      unsigned IC3IE:1;
      unsigned :5;
      unsigned CCT3IE:1;
      unsigned CCT4IE:1;
      unsigned PMPIE:1;
      unsigned DMA4IE:1;
    };
  };
} typeIEC2BITS;
sfr volatile typeIEC2BITS IEC2bits absolute 0x9C;

typedef struct tagIEC3BITS {
  union {
    struct {
      unsigned :1;
      unsigned SI2C2IE:1;
      unsigned MI2C2IE:1;
      unsigned :2;
      unsigned INT3IE:1;
      unsigned INT4IE:1;
      unsigned :3;
      unsigned SPI1RXIE:1;
      unsigned SPI2RXIE:1;
      unsigned SPI3RXIE:1;
      unsigned DMA5IE:1;
      unsigned RTCIE:1;
      unsigned CCP1IE:1;
    };
  };
} typeIEC3BITS;
sfr volatile typeIEC3BITS IEC3bits absolute 0x9E;

typedef struct tagIEC4BITS {
  union {
    struct {
      unsigned CCP2IE:1;
      unsigned U1ERIE:1;
      unsigned U2ERIE:1;
      unsigned CRCIE:1;
      unsigned :4;
      unsigned LVDIE:1;
      unsigned :4;
      unsigned CTMUIE:1;
    };
  };
} typeIEC4BITS;
sfr volatile typeIEC4BITS IEC4bits absolute 0xA0;

typedef struct tagIEC5BITS {
  union {
    struct {
      unsigned :4;
      unsigned I2C1BCIE:1;
      unsigned I2C2BCIE:1;
      unsigned :4;
      unsigned SPI3IE:1;
      unsigned SPI3TXIE:1;
      unsigned :2;
      unsigned CCP3IE:1;
      unsigned CCP4IE:1;
    };
  };
} typeIEC5BITS;
sfr volatile typeIEC5BITS IEC5bits absolute 0xA2;

typedef struct tagIEC6BITS {
  union {
    struct {
      unsigned CLC1IE:1;
      unsigned CLC2IE:1;
      unsigned :3;
      unsigned CCT1IE:1;
      unsigned CCT2IE:1;
      unsigned :3;
      unsigned FSTIE:1;
      unsigned :1;
      unsigned ECCIE:1;
      unsigned :1;
      unsigned RTCCTSIE:1;
    };
  };
} typeIEC6BITS;
sfr volatile typeIEC6BITS IEC6bits absolute 0xA4;

typedef struct tagIEC7BITS {
  union {
    struct {
      unsigned :5;
      unsigned JTAGIE:1;
    };
  };
} typeIEC7BITS;
sfr volatile typeIEC7BITS IEC7bits absolute 0xA6;

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
sfr volatile typeIPC0BITS IPC0bits absolute 0xA8;

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
sfr volatile typeIPC1BITS IPC1bits absolute 0xAA;

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
sfr volatile typeIPC2BITS IPC2bits absolute 0xAC;

typedef struct tagIPC3BITS {
  union {
    struct {
      unsigned U1TXIP:3;
      unsigned :1;
      unsigned AD1IP:3;
      unsigned :1;
      unsigned DMA1IP:3;
      unsigned :1;
      unsigned NVMIP:3;
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
      unsigned :1;
      unsigned NVMIP0:1;
      unsigned NVMIP1:1;
      unsigned NVMIP2:1;
    };
  };
} typeIPC3BITS;
sfr volatile typeIPC3BITS IPC3bits absolute 0xAE;

typedef struct tagIPC4BITS {
  union {
    struct {
      unsigned SI2C1IP:3;
      unsigned :1;
      unsigned MI2C1IP:3;
      unsigned :1;
      unsigned CMIP:3;
      unsigned :1;
      unsigned IOCIP:3;
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
sfr volatile typeIPC4BITS IPC4bits absolute 0xB0;

typedef struct tagIPC5BITS {
  union {
    struct {
      unsigned INT1IP:3;
    };
    struct {
      unsigned INT1IP0:1;
      unsigned INT1IP1:1;
      unsigned INT1IP2:1;
      unsigned :5;
      unsigned CCP5IP0:1;
      unsigned CCP5IP1:1;
      unsigned CCP5IP2:1;
      unsigned :1;
      unsigned CCP6IP0:1;
      unsigned CCP6IP1:1;
      unsigned CCP6IP2:1;
    };
  };
} typeIPC5BITS;
sfr volatile typeIPC5BITS IPC5bits absolute 0xB2;

typedef struct tagIPC6BITS {
  union {
    struct {
      unsigned DMA2IP:3;
      unsigned :1;
      unsigned OC3IP:3;
    };
    struct {
      unsigned DMA2IP0:1;
      unsigned DMA2IP1:1;
      unsigned DMA2IP2:1;
      unsigned :1;
      unsigned OC3IP0:1;
      unsigned OC3IP1:1;
      unsigned OC3IP2:1;
      unsigned :5;
      unsigned T4IP0:1;
      unsigned T4IP1:1;
      unsigned T4IP2:1;
    };
  };
} typeIPC6BITS;
sfr volatile typeIPC6BITS IPC6bits absolute 0xB4;

typedef struct tagIPC7BITS {
  union {
    struct {
      unsigned :4;
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
sfr volatile typeIPC7BITS IPC7bits absolute 0xB6;

typedef struct tagIPC8BITS {
  union {
    struct {
      unsigned SPI2IP:3;
      unsigned :1;
      unsigned SPI2TXIP:3;
    };
    struct {
      unsigned SPI2IP0:1;
      unsigned SPI2IP1:1;
      unsigned SPI2IP2:1;
      unsigned :1;
      unsigned SPI2TXIP0:1;
      unsigned SPI2TXIP1:1;
      unsigned SPI2TXIP2:1;
    };
  };
} typeIPC8BITS;
sfr volatile typeIPC8BITS IPC8bits absolute 0xB8;

typedef struct tagIPC9BITS {
  union {
    struct {
      unsigned DMA3IP:3;
      unsigned :1;
      unsigned IC3IP:3;
    };
    struct {
      unsigned DMA3IP0:1;
      unsigned DMA3IP1:1;
      unsigned DMA3IP2:1;
      unsigned :1;
      unsigned IC3IP0:1;
      unsigned IC3IP1:1;
      unsigned IC3IP2:1;
    };
  };
} typeIPC9BITS;
sfr volatile typeIPC9BITS IPC9bits absolute 0xBA;

typedef struct tagIPC10BITS {
  union {
    struct {
      unsigned :12;
      unsigned CCT3IP:3;
    };
    struct {
      unsigned :12;
      unsigned CCT3IP0:1;
      unsigned CCT3IP1:1;
      unsigned CCT3IP2:1;
    };
  };
} typeIPC10BITS;
sfr volatile typeIPC10BITS IPC10bits absolute 0xBC;

typedef struct tagIPC11BITS {
  union {
    struct {
      unsigned CCT4IP:3;
      unsigned :1;
      unsigned PMPIP:3;
      unsigned :1;
      unsigned DMA4IP:3;
    };
    struct {
      unsigned CCT4IP0:1;
      unsigned CCT4IP1:1;
      unsigned CCT4IP2:1;
      unsigned :1;
      unsigned PMPIP0:1;
      unsigned PMPIP1:1;
      unsigned PMPIP2:1;
      unsigned :1;
      unsigned DMA4IP0:1;
      unsigned DMA4IP1:1;
      unsigned DMA4IP2:1;
      unsigned :1;
      unsigned CCT5IP0:1;
      unsigned CCT5IP1:1;
      unsigned CCT5IP2:1;
    };
  };
} typeIPC11BITS;
sfr volatile typeIPC11BITS IPC11bits absolute 0xBE;

typedef struct tagIPC12BITS {
  union {
    struct {
      unsigned :4;
      unsigned SI2C2IP:3;
      unsigned :1;
      unsigned MI2C2IP:3;
    };
    struct {
      unsigned CCT6IP0:1;
      unsigned CCT6IP1:1;
      unsigned CCT6IP2:1;
      unsigned :1;
      unsigned SI2C2IP0:1;
      unsigned SI2C2IP1:1;
      unsigned SI2C2IP2:1;
      unsigned :1;
      unsigned MI2C2IP0:1;
      unsigned MI2C2IP1:1;
      unsigned MI2C2IP2:1;
      unsigned :1;
      unsigned CCT7IP0:1;
      unsigned CCT7IP1:1;
      unsigned CCT7IP2:1;
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
sfr volatile typeIPC12BITS IPC12bits absolute 0xC0;

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
sfr volatile typeIPC13BITS IPC13bits absolute 0xC2;

typedef struct tagIPC14BITS {
  union {
    struct {
      unsigned :8;
      unsigned SPI1RXIP:3;
      unsigned :1;
      unsigned SPI2RXIP:3;
    };
    struct {
      unsigned :8;
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
sfr volatile typeIPC14BITS IPC14bits absolute 0xC4;

typedef struct tagIPC15BITS {
  union {
    struct {
      unsigned SPI3RXIP:3;
      unsigned :1;
      unsigned DMA5IP:3;
      unsigned :1;
      unsigned RTCIP:3;
      unsigned :1;
      unsigned CCP1IP:3;
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
      unsigned :1;
      unsigned CCP1IP0:1;
      unsigned CCP1IP1:1;
      unsigned CCP1IP2:1;
    };
  };
} typeIPC15BITS;
sfr volatile typeIPC15BITS IPC15bits absolute 0xC6;

typedef struct tagIPC16BITS {
  union {
    struct {
      unsigned CCP2IP:3;
      unsigned :1;
      unsigned U1ERIP:3;
      unsigned :1;
      unsigned U2ERIP:3;
      unsigned :1;
      unsigned CRCIP:3;
    };
    struct {
      unsigned CCP2IP0:1;
      unsigned CCP2IP1:1;
      unsigned CCP2IP2:1;
      unsigned :1;
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
sfr volatile typeIPC16BITS IPC16bits absolute 0xC8;

typedef struct tagIPC17BITS {
  union {
    struct {
      unsigned DMA6IP0:1;
      unsigned DMA6IP1:1;
      unsigned DMA6IP2:1;
      unsigned :1;
      unsigned DMA7IP0:1;
      unsigned DMA7IP1:1;
      unsigned DMA7IP2:1;
      unsigned :1;
      unsigned SI2C3IP0:1;
      unsigned SI2C3IP1:1;
      unsigned SI2C3IP2:1;
      unsigned :1;
      unsigned MI2C3IP0:1;
      unsigned MI2C3IP1:1;
      unsigned MI2C3IP2:1;
    };
  };
} typeIPC17BITS;
sfr volatile typeIPC17BITS IPC17bits absolute 0xCA;

typedef struct tagIPC18BITS {
  union {
    struct {
      unsigned LVDIP:3;
    };
    struct {
      unsigned LVDIP0:1;
      unsigned LVDIP1:1;
      unsigned LVDIP2:1;
      unsigned :1;
      unsigned CCP7IP0:1;
      unsigned CCP7IP1:1;
      unsigned CCP7IP2:1;
    };
  };
} typeIPC18BITS;
sfr volatile typeIPC18BITS IPC18bits absolute 0xCC;

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
sfr volatile typeIPC19BITS IPC19bits absolute 0xCE;

typedef struct tagIPC20BITS {
  union {
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
sfr volatile typeIPC20BITS IPC20bits absolute 0xD0;

typedef struct tagIPC21BITS {
  union {
    struct {
      unsigned I2C1BCIP:3;
      unsigned :1;
      unsigned I2C2BCIP:3;
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
sfr volatile typeIPC21BITS IPC21bits absolute 0xD2;

typedef struct tagIPC22BITS {
  union {
    struct {
      unsigned :8;
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
sfr volatile typeIPC22BITS IPC22bits absolute 0xD4;

typedef struct tagIPC23BITS {
  union {
    struct {
      unsigned :8;
      unsigned CCP3IP:3;
      unsigned :1;
      unsigned CCP4IP:3;
    };
    struct {
      unsigned :8;
      unsigned CCP3IP0:1;
      unsigned CCP3IP1:1;
      unsigned CCP3IP2:1;
      unsigned :1;
      unsigned CCP4IP0:1;
      unsigned CCP4IP1:1;
      unsigned CCP4IP2:1;
    };
  };
} typeIPC23BITS;
sfr volatile typeIPC23BITS IPC23bits absolute 0xD6;

typedef struct tagIPC24BITS {
  union {
    struct {
      unsigned CLC1IP:3;
      unsigned :1;
      unsigned CLC2IP:3;
    };
    struct {
      unsigned CLC1IP0:1;
      unsigned CLC1IP1:1;
      unsigned CLC1IP2:1;
      unsigned :1;
      unsigned CLC2IP0:1;
      unsigned CLC2IP1:1;
      unsigned CLC2IP2:1;
      unsigned :1;
      unsigned CLC3IP0:1;
      unsigned CLC3IP1:1;
      unsigned CLC3IP2:1;
      unsigned :1;
      unsigned CLC4IP0:1;
      unsigned CLC4IP1:1;
      unsigned CLC4IP2:1;
    };
  };
} typeIPC24BITS;
sfr volatile typeIPC24BITS IPC24bits absolute 0xD8;

typedef struct tagIPC25BITS {
  union {
    struct {
      unsigned :4;
      unsigned CCT1IP:3;
      unsigned :1;
      unsigned CCT2IP:3;
    };
    struct {
      unsigned :4;
      unsigned CCT1IP0:1;
      unsigned CCT1IP1:1;
      unsigned CCT1IP2:1;
      unsigned :1;
      unsigned CCT2IP0:1;
      unsigned CCT2IP1:1;
      unsigned CCT2IP2:1;
    };
  };
} typeIPC25BITS;
sfr volatile typeIPC25BITS IPC25bits absolute 0xDA;

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
sfr volatile typeIPC26BITS IPC26bits absolute 0xDC;

typedef struct tagIPC27BITS {
  union {
    struct {
      unsigned ECCIP:3;
      unsigned :5;
      unsigned RTCCTSIP:3;
    };
    struct {
      unsigned :4;
      unsigned I2C3BCIP0:1;
      unsigned I2C3BCIP1:1;
      unsigned I2C3BCIP2:1;
      unsigned :1;
      unsigned RTCCTCIP0:1;
      unsigned RTCCTSIP1:1;
      unsigned RTCCTSIP2:1;
      unsigned :1;
      unsigned U5RXIP0:1;
      unsigned U5RXIP1:1;
      unsigned U5RXIP2:1;
    };
  };
} typeIPC27BITS;
sfr volatile typeIPC27BITS IPC27bits absolute 0xDE;

typedef struct tagIPC28BITS {
  union {
    struct {
      unsigned U5TXIP0:1;
      unsigned U5TXIP1:1;
      unsigned U5TXIP2:1;
      unsigned :1;
      unsigned U5ERIP0:1;
      unsigned U5ERIP1:1;
      unsigned U5ERIP2:1;
      unsigned :1;
      unsigned U6RXIP0:1;
      unsigned U6RXIP1:1;
      unsigned U6RXIP2:1;
      unsigned :1;
      unsigned U6TXIP0:1;
      unsigned U6TXIP1:1;
      unsigned U6TXIP2:1;
    };
  };
} typeIPC28BITS;
sfr volatile typeIPC28BITS IPC28bits absolute 0xE0;

typedef struct tagIPC29BITS {
  union {
    struct {
      unsigned :4;
      unsigned JTAGIP:3;
    };
    struct {
      unsigned U6ERIP0:1;
      unsigned U6ERIP1:1;
      unsigned U6ERIP2:1;
      unsigned :1;
      unsigned JTAGIP0:1;
      unsigned JTAGIP1:1;
      unsigned JTAGIP2:1;
    };
  };
} typeIPC29BITS;
sfr volatile typeIPC29BITS IPC29bits absolute 0xE2;

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
sfr volatile typeINTTREGBITS INTTREGbits absolute 0xE4;

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

typedef struct tagDCOTUNBITS {
  union {
    struct {
      unsigned DCOTUN:6;
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
} typeDCOTUNBITS;
sfr volatile typeDCOTUNBITS DCOTUNbits absolute 0x108;

typedef struct tagDCOCONBITS {
  union {
    struct {
      unsigned :8;
      unsigned DCOFSEL:4;
      unsigned :1;
      unsigned DCOEN:1;
    };
    struct {
      unsigned :8;
      unsigned DCOFSEL0:1;
      unsigned DCOFSEL1:1;
      unsigned DCOFSEL2:1;
      unsigned DCOFSEL3:1;
    };
  };
} typeDCOCONBITS;
sfr volatile typeDCOCONBITS DCOCONbits absolute 0x10A;

typedef struct tagOSCDIVBITS {
  union {
    struct {
      unsigned DIV:15;
    };
    struct {
      unsigned DIV0:1;
      unsigned DIV1:1;
      unsigned DIV2:1;
      unsigned DIV3:1;
      unsigned DIV4:1;
      unsigned DIV5:1;
      unsigned DIV6:1;
      unsigned DIV7:1;
      unsigned DIV8:1;
      unsigned DIV9:1;
      unsigned DIV10:1;
      unsigned DIV11:1;
      unsigned DIV12:1;
      unsigned DIV13:1;
      unsigned DIV14:1;
    };
  };
} typeOSCDIVBITS;
sfr volatile typeOSCDIVBITS OSCDIVbits absolute 0x10C;

typedef struct tagOSCFDIVBITS {
  union {
    struct {
      unsigned :7;
      unsigned TRIM:9;
    };
    struct {
      unsigned :7;
      unsigned TRIM8:1;
      unsigned TRIM7:1;
      unsigned TRIM6:1;
      unsigned TRIM5:1;
      unsigned TRIM4:1;
      unsigned TRIM3:1;
      unsigned TRIM2:1;
      unsigned TRIM1:1;
      unsigned TRIM0:1;
    };
  };
} typeOSCFDIVBITS;
sfr volatile typeOSCFDIVBITS OSCFDIVbits absolute 0x10E;

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
      unsigned :2;
      unsigned RETEN:1;
      unsigned SBOREN:1;
      unsigned IOPUWR:1;
      unsigned TRAPR:1;
    };
    struct {
      unsigned :8;
      unsigned PMSLP:1;
    };
  };
} typeRCONBITS;
sfr volatile typeRCONBITS RCONbits absolute 0x110;

typedef struct tagHLVDCONBITS {
  union {
    struct {
      unsigned HLVDL:4;
      unsigned :4;
      unsigned LVDEVT:1;
      unsigned IRVST:1;
      unsigned BGVST:1;
      unsigned VDIR:1;
      unsigned :1;
      unsigned LSIDL:1;
      unsigned :1;
      unsigned HLVDEN:1;
    };
    struct {
      unsigned HLVDL0:1;
      unsigned HLVDL1:1;
      unsigned HLVDL2:1;
      unsigned HLVDL3:1;
    };
  };
} typeHLVDCONBITS;
sfr volatile typeHLVDCONBITS HLVDCONbits absolute 0x114;

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
sfr volatile typePMCON2BITS PMCON2bits absolute 0x12A;

typedef struct tagPMCON3BITS {
  union {
    struct {
      unsigned :8;
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
      unsigned AD1MD:1;
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
    };
  };
} typePMD1BITS;
sfr volatile typePMD1BITS PMD1bits absolute 0x178;

typedef struct tagPMD2BITS {
  union {
    struct {
      unsigned OC1MD:1;
      unsigned OC2MD:1;
      unsigned OC3MD:1;
      unsigned :5;
      unsigned IC1MD:1;
      unsigned IC2MD:1;
      unsigned IC3MD:1;
    };
  };
} typePMD2BITS;
sfr volatile typePMD2BITS PMD2bits absolute 0x17A;

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
  };
} typePMD3BITS;
sfr volatile typePMD3BITS PMD3bits absolute 0x17C;

typedef struct tagPMD4BITS {
  union {
    struct {
      unsigned :1;
      unsigned LVDMD:1;
      unsigned CTMUMD:1;
      unsigned REFOMD:1;
    };
  };
} typePMD4BITS;
sfr volatile typePMD4BITS PMD4bits absolute 0x17E;

typedef struct tagPMD5BITS {
  union {
    struct {
      unsigned CCP1MD:1;
      unsigned CCP2MD:1;
      unsigned CCP3MD:1;
      unsigned CCP4MD:1;
      unsigned CCP5MD:1;
    };
  };
} typePMD5BITS;
sfr volatile typePMD5BITS PMD5bits absolute 0x180;

typedef struct tagPMD6BITS {
  union {
    struct {
      unsigned SPI3MD:1;
    };
  };
} typePMD6BITS;
sfr volatile typePMD6BITS PMD6bits absolute 0x182;

typedef struct tagPMD7BITS {
  union {
    struct {
      unsigned :4;
      unsigned DMA0MD:1;
      unsigned DMA1MD:1;
    };
  };
} typePMD7BITS;
sfr volatile typePMD7BITS PMD7bits absolute 0x184;

typedef struct tagPMD8BITS {
  union {
    struct {
      unsigned :2;
      unsigned CLC1MD:1;
      unsigned CLC2MD:1;
    };
  };
} typePMD8BITS;
sfr volatile typePMD8BITS PMD8bits absolute 0x186;

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
sfr volatile typeT1CONBITS T1CONbits absolute 0x194;

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
sfr volatile typeT2CONBITS T2CONbits absolute 0x1A0;

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
sfr volatile typeT3CONBITS T3CONbits absolute 0x1A2;

typedef struct tagCTMUCON1LBITS {
  union {
    struct {
      unsigned IRNG:2;
      unsigned ITRIM:6;
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
} typeCTMUCON1LBITS;
sfr volatile typeCTMUCON1LBITS CTMUCON1Lbits absolute 0x1C0;

typedef struct tagCTMUCON1HBITS {
  union {
    struct {
      unsigned IRNGH:1;
      unsigned :1;
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
} typeCTMUCON1HBITS;
sfr volatile typeCTMUCON1HBITS CTMUCON1Hbits absolute 0x1C2;

typedef struct tagCTMUCON2LBITS {
  union {
    struct {
      unsigned DSCHS:3;
      unsigned :1;
      unsigned IRSTEN:1;
    };
    struct {
      unsigned DSCHS0:1;
      unsigned DSCHS1:1;
      unsigned DSCHS2:1;
    };
  };
} typeCTMUCON2LBITS;
sfr volatile typeCTMUCON2LBITS CTMUCON2Lbits absolute 0x1C4;

typedef struct tagRTCCON1LBITS {
  union {
    struct {
      unsigned TSAEN:1;
      unsigned :3;
      unsigned OUTSEL:3;
      unsigned RTCOE:1;
      unsigned PWCPOE:1;
      unsigned PWCPOL:1;
      unsigned PWCEN:1;
      unsigned WRLOCK:1;
      unsigned :3;
      unsigned RTCEN:1;
    };
  };
} typeRTCCON1LBITS;
sfr volatile typeRTCCON1LBITS RTCCON1Lbits absolute 0x1CC;

typedef struct tagRTCCON1HBITS {
  union {
    struct {
      unsigned ALMRPT:8;
      unsigned AMASK:4;
      unsigned :2;
      unsigned CHIME:1;
      unsigned ALRMEN:1;
    };
  };
} typeRTCCON1HBITS;
sfr volatile typeRTCCON1HBITS RTCCON1Hbits absolute 0x1CE;

typedef struct tagRTCCON2LBITS {
  union {
    struct {
      unsigned CLKSEL:2;
      unsigned :2;
      unsigned PS:2;
      unsigned PWCPS:2;
      unsigned :3;
      unsigned FDIV:5;
    };
  };
} typeRTCCON2LBITS;
sfr volatile typeRTCCON2LBITS RTCCON2Lbits absolute 0x1D0;

typedef struct tagRTCCON3LBITS {
  union {
    struct {
      unsigned PWCSTAB:8;
      unsigned PWCSAMP:8;
    };
  };
} typeRTCCON3LBITS;
sfr volatile typeRTCCON3LBITS RTCCON3Lbits absolute 0x1D4;

typedef struct tagRTCSTATLBITS {
  union {
    struct {
      unsigned HALFSEC:1;
      unsigned ALMSYNC:1;
      unsigned SYNC:1;
      unsigned TSAEVT:1;
      unsigned :1;
      unsigned ALMEVT:1;
    };
  };
} typeRTCSTATLBITS;
sfr volatile typeRTCSTATLBITS RTCSTATLbits absolute 0x1D8;

typedef struct tagTIMELBITS {
  union {
    struct {
      unsigned :8;
      unsigned SECONE:4;
      unsigned SECTEN:3;
    };
  };
} typeTIMELBITS;
sfr volatile typeTIMELBITS TIMELbits absolute 0x1DC;

typedef struct tagTIMEHBITS {
  union {
    struct {
      unsigned MINONE:4;
      unsigned MINTEN:3;
      unsigned :1;
      unsigned HRONE:4;
      unsigned HRTEN:2;
    };
  };
} typeTIMEHBITS;
sfr volatile typeTIMEHBITS TIMEHbits absolute 0x1DE;

typedef struct tagDATELBITS {
  union {
    struct {
      unsigned WDAY:3;
      unsigned :5;
      unsigned DAYONE:4;
      unsigned DAYTEN:2;
    };
  };
} typeDATELBITS;
sfr volatile typeDATELBITS DATELbits absolute 0x1E0;

typedef struct tagDATEHBITS {
  union {
    struct {
      unsigned MTHONE:4;
      unsigned MTHTEN:1;
      unsigned :3;
      unsigned YRONE:4;
      unsigned YRTEN:4;
    };
  };
} typeDATEHBITS;
sfr volatile typeDATEHBITS DATEHbits absolute 0x1E2;

typedef struct tagALMTIMELBITS {
  union {
    struct {
      unsigned :8;
      unsigned SECONE:4;
      unsigned SECTEN:3;
    };
  };
} typeALMTIMELBITS;
sfr volatile typeALMTIMELBITS ALMTIMELbits absolute 0x1E4;

typedef struct tagALMTIMEHBITS {
  union {
    struct {
      unsigned MINONE:4;
      unsigned MINTEN:3;
      unsigned :1;
      unsigned HRONE:4;
      unsigned HRTEN:2;
    };
  };
} typeALMTIMEHBITS;
sfr volatile typeALMTIMEHBITS ALMTIMEHbits absolute 0x1E6;

typedef struct tagALMDATELBITS {
  union {
    struct {
      unsigned WDAY:3;
      unsigned :5;
      unsigned DAYONE:4;
      unsigned DAYTEN:2;
    };
  };
} typeALMDATELBITS;
sfr volatile typeALMDATELBITS ALMDATELbits absolute 0x1E8;

typedef struct tagALMDATEHBITS {
  union {
    struct {
      unsigned MTHONE:4;
      unsigned MTHTEN:1;
      unsigned :3;
      unsigned YRONE:4;
      unsigned YRTEN:4;
    };
  };
} typeALMDATEHBITS;
sfr volatile typeALMDATEHBITS ALMDATEHbits absolute 0x1EA;

typedef struct tagTSATIMELBITS {
  union {
    struct {
      unsigned :8;
      unsigned SECONE:4;
      unsigned SECTEN:3;
    };
  };
} typeTSATIMELBITS;
sfr volatile typeTSATIMELBITS TSATIMELbits absolute 0x1EC;

typedef struct tagTSATIMEHBITS {
  union {
    struct {
      unsigned MINONE:4;
      unsigned MINTEN:3;
      unsigned :1;
      unsigned HRONE:4;
      unsigned HRTEN:2;
    };
  };
} typeTSATIMEHBITS;
sfr volatile typeTSATIMEHBITS TSATIMEHbits absolute 0x1EE;

typedef struct tagTSADATELBITS {
  union {
    struct {
      unsigned WDAY:3;
      unsigned :5;
      unsigned DAYONE:4;
      unsigned DAYTEN:2;
    };
  };
} typeTSADATELBITS;
sfr volatile typeTSADATELBITS TSADATELbits absolute 0x1F0;

typedef struct tagTSADATEHBITS {
  union {
    struct {
      unsigned MTHONE:4;
      unsigned MTHTEN:1;
      unsigned :3;
      unsigned YRONE:4;
      unsigned YRTEN:4;
    };
  };
} typeTSADATEHBITS;
sfr volatile typeTSADATEHBITS TSADATEHbits absolute 0x1F2;

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
sfr volatile typeIC1CON1BITS IC1CON1bits absolute 0x200;

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
sfr volatile typeIC1CON2BITS IC1CON2bits absolute 0x202;

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
sfr volatile typeIC2CON1BITS IC2CON1bits absolute 0x208;

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
sfr volatile typeIC2CON2BITS IC2CON2bits absolute 0x20A;

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
sfr volatile typeIC3CON1BITS IC3CON1bits absolute 0x210;

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
sfr volatile typeIC3CON2BITS IC3CON2bits absolute 0x212;

typedef struct tagOC1CON1BITS {
  union {
    struct {
      unsigned OCM:3;
      unsigned TRIGMODE:1;
      unsigned OCFLT0:1;
      unsigned OCFLT1:1;
      unsigned OCFLT2:1;
      unsigned ENFLT0:1;
      unsigned ENFLT1:1;
      unsigned ENFLT2:1;
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
      unsigned OCFLTA:1;
      unsigned OCFLTB:1;
      unsigned OCFLTC:1;
      unsigned ENFLTA:1;
      unsigned ENFLTB:1;
      unsigned ENFLTC:1;
    };
  };
} typeOC1CON1BITS;
sfr volatile typeOC1CON1BITS OC1CON1bits absolute 0x230;

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
sfr volatile typeOC1CON2BITS OC1CON2bits absolute 0x232;

typedef struct tagOC2CON1BITS {
  union {
    struct {
      unsigned OCM:3;
      unsigned TRIGMODE:1;
      unsigned OCFLT0:1;
      unsigned OCFLT1:1;
      unsigned OCFLT2:1;
      unsigned ENFLT0:1;
      unsigned ENFLT1:1;
      unsigned ENFLT2:1;
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
      unsigned OCFLTA:1;
      unsigned OCFLTB:1;
      unsigned OCFLTC:1;
      unsigned ENFLTA:1;
      unsigned ENFLTB:1;
      unsigned ENFLTC:1;
    };
  };
} typeOC2CON1BITS;
sfr volatile typeOC2CON1BITS OC2CON1bits absolute 0x23A;

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
sfr volatile typeOC2CON2BITS OC2CON2bits absolute 0x23C;

typedef struct tagOC3CON1BITS {
  union {
    struct {
      unsigned OCM:3;
      unsigned TRIGMODE:1;
      unsigned OCFLT0:1;
      unsigned OCFLT1:1;
      unsigned OCFLT2:1;
      unsigned ENFLT0:1;
      unsigned ENFLT1:1;
      unsigned ENFLT2:1;
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
      unsigned OCFLTA:1;
      unsigned OCFLTB:1;
      unsigned OCFLTC:1;
      unsigned ENFLTA:1;
      unsigned ENFLTB:1;
      unsigned ENFLTC:1;
    };
  };
} typeOC3CON1BITS;
sfr volatile typeOC3CON1BITS OC3CON1bits absolute 0x244;

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
sfr volatile typeOC3CON2BITS OC3CON2bits absolute 0x246;

typedef struct tagCCP1CON1LBITS {
  union {
    struct {
      unsigned MOD:4;
      unsigned CCSEL:1;
      unsigned T32:1;
      unsigned TMRPS:2;
      unsigned CLKSEL:3;
      unsigned TMRSYNC:1;
      unsigned CCPSLP:1;
      unsigned CCPSIDL:1;
      unsigned :1;
      unsigned CCPON:1;
    };
    struct {
      unsigned MOD0:1;
      unsigned MOD1:1;
      unsigned MOD2:1;
      unsigned MOD3:1;
      unsigned :1;
      unsigned TMR32:1;
      unsigned TMRPS0:1;
      unsigned TMRPS1:1;
      unsigned CLKSEL0:1;
      unsigned CLKSEL1:1;
      unsigned CLKSEL2:1;
    };
    struct {
      unsigned CCPMOD:4;
    };
    struct {
      unsigned CCPMOD0:1;
      unsigned CCPMOD1:1;
      unsigned CCPMOD2:1;
      unsigned CCPMOD3:1;
    };
  };
} typeCCP1CON1LBITS;
sfr volatile typeCCP1CON1LBITS CCP1CON1Lbits absolute 0x26C;

typedef struct tagCCP1CON1HBITS {
  union {
    struct {
      unsigned SYNC:5;
      unsigned ALTSYNC:1;
      unsigned ONESHOT:1;
      unsigned TRIGEN:1;
      unsigned OPS:4;
      unsigned :2;
      unsigned RTRGEN:1;
      unsigned OPSSRC:1;
    };
    struct {
      unsigned SYNC0:1;
      unsigned SYNC1:1;
      unsigned SYNC2:1;
      unsigned SYNC3:1;
      unsigned SYNC4:1;
      unsigned :3;
      unsigned OPS0:1;
      unsigned OPS1:1;
      unsigned OPS2:1;
      unsigned OPS3:1;
      unsigned :3;
      unsigned OPSRC:1;
    };
    struct {
      unsigned :8;
      unsigned IOPS:4;
    };
    struct {
      unsigned :8;
      unsigned IOPS0:1;
      unsigned IOPS1:1;
      unsigned IOPS2:1;
      unsigned IOPS3:1;
    };
  };
} typeCCP1CON1HBITS;
sfr volatile typeCCP1CON1HBITS CCP1CON1Hbits absolute 0x26E;

typedef struct tagCCP1CON2LBITS {
  union {
    struct {
      unsigned ASDG:8;
      unsigned :4;
      unsigned SSDG:1;
      unsigned :1;
      unsigned ASDGM:1;
      unsigned PWMRSEN:1;
    };
    struct {
      unsigned ASDG0:1;
      unsigned ASDG1:1;
      unsigned ASDG2:1;
      unsigned ASDG3:1;
      unsigned ASDG4:1;
      unsigned ASDG5:1;
      unsigned ASDG6:1;
      unsigned ASDG7:1;
    };
  };
} typeCCP1CON2LBITS;
sfr volatile typeCCP1CON2LBITS CCP1CON2Lbits absolute 0x270;

typedef struct tagCCP1CON2HBITS {
  union {
    struct {
      unsigned ICS:3;
      unsigned AUXOUT:2;
      unsigned :1;
      unsigned ICGSM:2;
      unsigned OCAEN:1;
      unsigned OCBEN:1;
      unsigned OCCEN:1;
      unsigned OCDEN:1;
      unsigned OCEEN:1;
      unsigned OCFEN:1;
      unsigned :1;
      unsigned OENSYNC:1;
    };
    struct {
      unsigned ICS0:1;
      unsigned ICS1:1;
      unsigned ICS2:1;
      unsigned AUXOUT0:1;
      unsigned AUXOUT1:1;
      unsigned :1;
      unsigned ICGSM0:1;
      unsigned ICGSM1:1;
    };
    struct {
      unsigned ICSEL:3;
    };
    struct {
      unsigned ICSEL0:1;
      unsigned ICSEL1:1;
      unsigned ICSEL2:1;
    };
  };
} typeCCP1CON2HBITS;
sfr volatile typeCCP1CON2HBITS CCP1CON2Hbits absolute 0x272;

typedef struct tagCCP1CON3LBITS {
  union {
    struct {
      unsigned DT:6;
    };
    struct {
      unsigned DT0:1;
      unsigned DT1:1;
      unsigned DT2:1;
      unsigned DT3:1;
      unsigned DT4:1;
      unsigned DT5:1;
    };
  };
} typeCCP1CON3LBITS;
sfr volatile typeCCP1CON3LBITS CCP1CON3Lbits absolute 0x274;

typedef struct tagCCP1CON3HBITS {
  union {
    struct {
      unsigned PSSBDF:2;
      unsigned PSSACE:2;
      unsigned POLBDF:1;
      unsigned POLACE:1;
      unsigned :2;
      unsigned OUTM:3;
      unsigned :1;
      unsigned OSCNT:3;
      unsigned OETRIG:1;
    };
    struct {
      unsigned PSSBDF0:1;
      unsigned PSSBDF1:1;
      unsigned PSSACE0:1;
      unsigned PSSACE1:1;
      unsigned :4;
      unsigned OUTM0:1;
      unsigned OUTM1:1;
      unsigned OUTM2:1;
      unsigned :1;
      unsigned OSCNT0:1;
      unsigned OSCNT1:1;
      unsigned OSCNT2:1;
    };
  };
} typeCCP1CON3HBITS;
sfr volatile typeCCP1CON3HBITS CCP1CON3Hbits absolute 0x276;

typedef struct tagCCP1STATBITS {
  union {
    struct {
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICDIS:1;
      unsigned SCEVT:1;
      unsigned ASEVT:1;
      unsigned TRCLR:1;
      unsigned TRSET:1;
      unsigned CCPTRIG:1;
      unsigned :2;
      unsigned ICGARM:1;
    };
    struct {
      unsigned :7;
      unsigned TRIG:1;
    };
  };
} typeCCP1STATBITS;
sfr volatile typeCCP1STATBITS CCP1STATbits absolute 0x278;

typedef struct tagCCP1STATLBITS {
  union {
    struct {
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICDIS:1;
      unsigned SCEVT:1;
      unsigned ASEVT:1;
      unsigned TRCLR:1;
      unsigned TRSET:1;
      unsigned CCPTRIG:1;
      unsigned :2;
      unsigned ICGARM:1;
    };
    struct {
      unsigned :7;
      unsigned TRIG:1;
    };
  };
} typeCCP1STATLBITS;
sfr volatile typeCCP1STATLBITS CCP1STATLbits absolute 0x278;

typedef struct tagCCP1STATHBITS {
  union {
    struct {
      unsigned RAWIP:1;
      unsigned RBWIP:1;
      unsigned TMRLWIP:1;
      unsigned TMRHWIP:1;
      unsigned PRLWIP:1;
    };
  };
} typeCCP1STATHBITS;
sfr volatile typeCCP1STATHBITS CCP1STATHbits absolute 0x27A;

typedef struct tagCCP2CON1LBITS {
  union {
    struct {
      unsigned MOD:4;
      unsigned CCSEL:1;
      unsigned T32:1;
      unsigned TMRPS:2;
      unsigned CLKSEL:3;
      unsigned TMRSYNC:1;
      unsigned CCPSLP:1;
      unsigned CCPSIDL:1;
      unsigned :1;
      unsigned CCPON:1;
    };
    struct {
      unsigned MOD0:1;
      unsigned MOD1:1;
      unsigned MOD2:1;
      unsigned MOD3:1;
      unsigned :1;
      unsigned TMR32:1;
      unsigned TMRPS0:1;
      unsigned TMRPS1:1;
      unsigned CLKSEL0:1;
      unsigned CLKSEL1:1;
      unsigned CLKSEL2:1;
    };
    struct {
      unsigned CCPMOD:4;
    };
    struct {
      unsigned CCPMOD0:1;
      unsigned CCPMOD1:1;
      unsigned CCPMOD2:1;
      unsigned CCPMOD3:1;
    };
  };
} typeCCP2CON1LBITS;
sfr volatile typeCCP2CON1LBITS CCP2CON1Lbits absolute 0x290;

typedef struct tagCCP2CON1HBITS {
  union {
    struct {
      unsigned SYNC:5;
      unsigned ALTSYNC:1;
      unsigned ONESHOT:1;
      unsigned TRIGEN:1;
      unsigned OPS:4;
      unsigned :2;
      unsigned RTRGEN:1;
      unsigned OPSSRC:1;
    };
    struct {
      unsigned SYNC0:1;
      unsigned SYNC1:1;
      unsigned SYNC2:1;
      unsigned SYNC3:1;
      unsigned SYNC4:1;
      unsigned :3;
      unsigned OPS0:1;
      unsigned OPS1:1;
      unsigned OPS2:1;
      unsigned OPS3:1;
      unsigned :3;
      unsigned OPSRC:1;
    };
    struct {
      unsigned :8;
      unsigned IOPS:4;
    };
    struct {
      unsigned :8;
      unsigned IOPS0:1;
      unsigned IOPS1:1;
      unsigned IOPS2:1;
      unsigned IOPS3:1;
    };
  };
} typeCCP2CON1HBITS;
sfr volatile typeCCP2CON1HBITS CCP2CON1Hbits absolute 0x292;

typedef struct tagCCP2CON2LBITS {
  union {
    struct {
      unsigned ASDG:8;
      unsigned :4;
      unsigned SSDG:1;
      unsigned :1;
      unsigned ASDGM:1;
      unsigned PWMRSEN:1;
    };
    struct {
      unsigned ASDG0:1;
      unsigned ASDG1:1;
      unsigned ASDG2:1;
      unsigned ASDG3:1;
      unsigned ASDG4:1;
      unsigned ASDG5:1;
      unsigned ASDG6:1;
      unsigned ASDG7:1;
    };
  };
} typeCCP2CON2LBITS;
sfr volatile typeCCP2CON2LBITS CCP2CON2Lbits absolute 0x294;

typedef struct tagCCP2CON2HBITS {
  union {
    struct {
      unsigned ICS:3;
      unsigned AUXOUT:2;
      unsigned :1;
      unsigned ICGSM:2;
      unsigned OCAEN:1;
      unsigned OCBEN:1;
      unsigned :5;
      unsigned OENSYNC:1;
    };
    struct {
      unsigned ICS0:1;
      unsigned ICS1:1;
      unsigned ICS2:1;
      unsigned AUXOUT0:1;
      unsigned AUXOUT1:1;
      unsigned :1;
      unsigned ICGSM0:1;
      unsigned ICGSM1:1;
    };
    struct {
      unsigned ICSEL:3;
    };
    struct {
      unsigned ICSEL0:1;
      unsigned ICSEL1:1;
      unsigned ICSEL2:1;
    };
  };
} typeCCP2CON2HBITS;
sfr volatile typeCCP2CON2HBITS CCP2CON2Hbits absolute 0x296;

typedef struct tagCCP2CON3HBITS {
  union {
    struct {
      unsigned PSSBDF:2;
      unsigned PSSACE:2;
      unsigned POLBDF:1;
      unsigned POLACE:1;
      unsigned :2;
      unsigned OUTM:3;
      unsigned :1;
      unsigned OSCNT:3;
      unsigned OETRIG:1;
    };
    struct {
      unsigned PSSBDF0:1;
      unsigned PSSBDF1:1;
      unsigned PSSACE0:1;
      unsigned PSSACE1:1;
      unsigned :4;
      unsigned OUTM0:1;
      unsigned OUTM1:1;
      unsigned OUTM2:1;
      unsigned :1;
      unsigned OSCNT0:1;
      unsigned OSCNT1:1;
      unsigned OSCNT2:1;
    };
  };
} typeCCP2CON3HBITS;
sfr volatile typeCCP2CON3HBITS CCP2CON3Hbits absolute 0x29A;

typedef struct tagCCP2STATBITS {
  union {
    struct {
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICDIS:1;
      unsigned SCEVT:1;
      unsigned ASEVT:1;
      unsigned TRCLR:1;
      unsigned TRSET:1;
      unsigned CCPTRIG:1;
      unsigned :2;
      unsigned ICGARM:1;
    };
    struct {
      unsigned :7;
      unsigned TRIG:1;
    };
  };
} typeCCP2STATBITS;
sfr volatile typeCCP2STATBITS CCP2STATbits absolute 0x29C;

typedef struct tagCCP2STATLBITS {
  union {
    struct {
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICDIS:1;
      unsigned SCEVT:1;
      unsigned ASEVT:1;
      unsigned TRCLR:1;
      unsigned TRSET:1;
      unsigned CCPTRIG:1;
      unsigned :2;
      unsigned ICGARM:1;
    };
    struct {
      unsigned :7;
      unsigned TRIG:1;
    };
  };
} typeCCP2STATLBITS;
sfr volatile typeCCP2STATLBITS CCP2STATLbits absolute 0x29C;

typedef struct tagCCP2STATHBITS {
  union {
    struct {
      unsigned RAWIP:1;
      unsigned RBWIP:1;
      unsigned TMRLWIP:1;
      unsigned TMRHWIP:1;
      unsigned PRLWIP:1;
    };
  };
} typeCCP2STATHBITS;
sfr volatile typeCCP2STATHBITS CCP2STATHbits absolute 0x29E;

typedef struct tagCCP3CON1LBITS {
  union {
    struct {
      unsigned MOD:4;
      unsigned CCSEL:1;
      unsigned T32:1;
      unsigned TMRPS:2;
      unsigned CLKSEL:3;
      unsigned TMRSYNC:1;
      unsigned CCPSLP:1;
      unsigned CCPSIDL:1;
      unsigned :1;
      unsigned CCPON:1;
    };
    struct {
      unsigned MOD0:1;
      unsigned MOD1:1;
      unsigned MOD2:1;
      unsigned MOD3:1;
      unsigned :1;
      unsigned TMR32:1;
      unsigned TMRPS0:1;
      unsigned TMRPS1:1;
      unsigned CLKSEL0:1;
      unsigned CLKSEL1:1;
      unsigned CLKSEL2:1;
    };
    struct {
      unsigned CCPMOD:4;
    };
    struct {
      unsigned CCPMOD0:1;
      unsigned CCPMOD1:1;
      unsigned CCPMOD2:1;
      unsigned CCPMOD3:1;
    };
  };
} typeCCP3CON1LBITS;
sfr volatile typeCCP3CON1LBITS CCP3CON1Lbits absolute 0x2B4;

typedef struct tagCCP3CON1HBITS {
  union {
    struct {
      unsigned SYNC:5;
      unsigned ALTSYNC:1;
      unsigned ONESHOT:1;
      unsigned TRIGEN:1;
      unsigned OPS:4;
      unsigned :2;
      unsigned RTRGEN:1;
      unsigned OPSSRC:1;
    };
    struct {
      unsigned SYNC0:1;
      unsigned SYNC1:1;
      unsigned SYNC2:1;
      unsigned SYNC3:1;
      unsigned SYNC4:1;
      unsigned :3;
      unsigned OPS0:1;
      unsigned OPS1:1;
      unsigned OPS2:1;
      unsigned OPS3:1;
      unsigned :3;
      unsigned OPSRC:1;
    };
    struct {
      unsigned :8;
      unsigned IOPS:4;
    };
    struct {
      unsigned :8;
      unsigned IOPS0:1;
      unsigned IOPS1:1;
      unsigned IOPS2:1;
      unsigned IOPS3:1;
    };
  };
} typeCCP3CON1HBITS;
sfr volatile typeCCP3CON1HBITS CCP3CON1Hbits absolute 0x2B6;

typedef struct tagCCP3CON2LBITS {
  union {
    struct {
      unsigned ASDG:8;
      unsigned :4;
      unsigned SSDG:1;
      unsigned :1;
      unsigned ASDGM:1;
      unsigned PWMRSEN:1;
    };
    struct {
      unsigned ASDG0:1;
      unsigned ASDG1:1;
      unsigned ASDG2:1;
      unsigned ASDG3:1;
      unsigned ASDG4:1;
      unsigned ASDG5:1;
      unsigned ASDG6:1;
      unsigned ASDG7:1;
    };
  };
} typeCCP3CON2LBITS;
sfr volatile typeCCP3CON2LBITS CCP3CON2Lbits absolute 0x2B8;

typedef struct tagCCP3CON2HBITS {
  union {
    struct {
      unsigned ICS:3;
      unsigned AUXOUT:2;
      unsigned :1;
      unsigned ICGSM:2;
      unsigned OCAEN:1;
      unsigned OCBEN:1;
      unsigned :5;
      unsigned OENSYNC:1;
    };
    struct {
      unsigned ICS0:1;
      unsigned ICS1:1;
      unsigned ICS2:1;
      unsigned AUXOUT0:1;
      unsigned AUXOUT1:1;
      unsigned :1;
      unsigned ICGSM0:1;
      unsigned ICGSM1:1;
    };
    struct {
      unsigned ICSEL:3;
    };
    struct {
      unsigned ICSEL0:1;
      unsigned ICSEL1:1;
      unsigned ICSEL2:1;
    };
  };
} typeCCP3CON2HBITS;
sfr volatile typeCCP3CON2HBITS CCP3CON2Hbits absolute 0x2BA;

typedef struct tagCCP3CON3HBITS {
  union {
    struct {
      unsigned PSSBDF:2;
      unsigned PSSACE:2;
      unsigned POLBDF:1;
      unsigned POLACE:1;
      unsigned :2;
      unsigned OUTM:3;
      unsigned :1;
      unsigned OSCNT:3;
      unsigned OETRIG:1;
    };
    struct {
      unsigned PSSBDF0:1;
      unsigned PSSBDF1:1;
      unsigned PSSACE0:1;
      unsigned PSSACE1:1;
      unsigned :4;
      unsigned OUTM0:1;
      unsigned OUTM1:1;
      unsigned OUTM2:1;
      unsigned :1;
      unsigned OSCNT0:1;
      unsigned OSCNT1:1;
      unsigned OSCNT2:1;
    };
  };
} typeCCP3CON3HBITS;
sfr volatile typeCCP3CON3HBITS CCP3CON3Hbits absolute 0x2BE;

typedef struct tagCCP3STATBITS {
  union {
    struct {
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICDIS:1;
      unsigned SCEVT:1;
      unsigned ASEVT:1;
      unsigned TRCLR:1;
      unsigned TRSET:1;
      unsigned CCPTRIG:1;
      unsigned :2;
      unsigned ICGARM:1;
    };
    struct {
      unsigned :7;
      unsigned TRIG:1;
    };
  };
} typeCCP3STATBITS;
sfr volatile typeCCP3STATBITS CCP3STATbits absolute 0x2C0;

typedef struct tagCCP3STATLBITS {
  union {
    struct {
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICDIS:1;
      unsigned SCEVT:1;
      unsigned ASEVT:1;
      unsigned TRCLR:1;
      unsigned TRSET:1;
      unsigned CCPTRIG:1;
      unsigned :2;
      unsigned ICGARM:1;
    };
    struct {
      unsigned :7;
      unsigned TRIG:1;
    };
  };
} typeCCP3STATLBITS;
sfr volatile typeCCP3STATLBITS CCP3STATLbits absolute 0x2C0;

typedef struct tagCCP3STATHBITS {
  union {
    struct {
      unsigned RAWIP:1;
      unsigned RBWIP:1;
      unsigned TMRLWIP:1;
      unsigned TMRHWIP:1;
      unsigned PRLWIP:1;
    };
  };
} typeCCP3STATHBITS;
sfr volatile typeCCP3STATHBITS CCP3STATHbits absolute 0x2C2;

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
sfr volatile typeCMSTATBITS CMSTATbits absolute 0x2E6;

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
sfr volatile typeCVRCONBITS CVRCONbits absolute 0x2E8;

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
sfr volatile typeCM1CONBITS CM1CONbits absolute 0x2EA;

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
sfr volatile typeCM2CONBITS CM2CONbits absolute 0x2EC;

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
sfr volatile typeCM3CONBITS CM3CONbits absolute 0x2EE;

typedef struct tagANCFGBITS {
  union {
    struct {
      unsigned VBGEN1:1;
      unsigned VBGEN2:1;
      unsigned VBGEN3:1;
    };
  };
} typeANCFGBITS;
sfr volatile typeANCFGBITS ANCFGbits absolute 0x2F4;

typedef struct tagCCP4CON1LBITS {
  union {
    struct {
      unsigned MOD:4;
      unsigned CCSEL:1;
      unsigned T32:1;
      unsigned TMRPS:2;
      unsigned CLKSEL:3;
      unsigned TMRSYNC:1;
      unsigned CCPSLP:1;
      unsigned CCPSIDL:1;
      unsigned :1;
      unsigned CCPON:1;
    };
    struct {
      unsigned MOD0:1;
      unsigned MOD1:1;
      unsigned MOD2:1;
      unsigned MOD3:1;
      unsigned :1;
      unsigned TMR32:1;
      unsigned TMRPS0:1;
      unsigned TMRPS1:1;
      unsigned CLKSEL0:1;
      unsigned CLKSEL1:1;
      unsigned CLKSEL2:1;
    };
    struct {
      unsigned CCPMOD:4;
    };
    struct {
      unsigned CCPMOD0:1;
      unsigned CCPMOD1:1;
      unsigned CCPMOD2:1;
      unsigned CCPMOD3:1;
    };
  };
} typeCCP4CON1LBITS;
sfr volatile typeCCP4CON1LBITS CCP4CON1Lbits absolute 0x300;

typedef struct tagCCP4CON1HBITS {
  union {
    struct {
      unsigned SYNC:5;
      unsigned ALTSYNC:1;
      unsigned ONESHOT:1;
      unsigned TRIGEN:1;
      unsigned OPS:4;
      unsigned :2;
      unsigned RTRGEN:1;
      unsigned OPSSRC:1;
    };
    struct {
      unsigned SYNC0:1;
      unsigned SYNC1:1;
      unsigned SYNC2:1;
      unsigned SYNC3:1;
      unsigned SYNC4:1;
      unsigned :3;
      unsigned OPS0:1;
      unsigned OPS1:1;
      unsigned OPS2:1;
      unsigned OPS3:1;
      unsigned :3;
      unsigned OPSRC:1;
    };
    struct {
      unsigned :8;
      unsigned IOPS:4;
    };
    struct {
      unsigned :8;
      unsigned IOPS0:1;
      unsigned IOPS1:1;
      unsigned IOPS2:1;
      unsigned IOPS3:1;
    };
  };
} typeCCP4CON1HBITS;
sfr volatile typeCCP4CON1HBITS CCP4CON1Hbits absolute 0x302;

typedef struct tagCCP4CON2LBITS {
  union {
    struct {
      unsigned ASDG:8;
      unsigned :4;
      unsigned SSDG:1;
      unsigned :1;
      unsigned ASDGM:1;
      unsigned PWMRSEN:1;
    };
    struct {
      unsigned ASDG0:1;
      unsigned ASDG1:1;
      unsigned ASDG2:1;
      unsigned ASDG3:1;
      unsigned ASDG4:1;
      unsigned ASDG5:1;
      unsigned ASDG6:1;
      unsigned ASDG7:1;
    };
  };
} typeCCP4CON2LBITS;
sfr volatile typeCCP4CON2LBITS CCP4CON2Lbits absolute 0x304;

typedef struct tagCCP4CON2HBITS {
  union {
    struct {
      unsigned ICS:3;
      unsigned AUXOUT:2;
      unsigned :1;
      unsigned ICGSM:2;
      unsigned OCAEN:1;
      unsigned OCBEN:1;
      unsigned :5;
      unsigned OENSYNC:1;
    };
    struct {
      unsigned ICS0:1;
      unsigned ICS1:1;
      unsigned ICS2:1;
      unsigned AUXOUT0:1;
      unsigned AUXOUT1:1;
      unsigned :1;
      unsigned ICGSM0:1;
      unsigned ICGSM1:1;
    };
    struct {
      unsigned ICSEL:3;
    };
    struct {
      unsigned ICSEL0:1;
      unsigned ICSEL1:1;
      unsigned ICSEL2:1;
    };
  };
} typeCCP4CON2HBITS;
sfr volatile typeCCP4CON2HBITS CCP4CON2Hbits absolute 0x306;

typedef struct tagCCP4CON3HBITS {
  union {
    struct {
      unsigned PSSBDF:2;
      unsigned PSSACE:2;
      unsigned POLBDF:1;
      unsigned POLACE:1;
      unsigned :2;
      unsigned OUTM:3;
      unsigned :1;
      unsigned OSCNT:3;
      unsigned OETRIG:1;
    };
    struct {
      unsigned PSSBDF0:1;
      unsigned PSSBDF1:1;
      unsigned PSSACE0:1;
      unsigned PSSACE1:1;
      unsigned :4;
      unsigned OUTM0:1;
      unsigned OUTM1:1;
      unsigned OUTM2:1;
      unsigned :1;
      unsigned OSCNT0:1;
      unsigned OSCNT1:1;
      unsigned OSCNT2:1;
    };
  };
} typeCCP4CON3HBITS;
sfr volatile typeCCP4CON3HBITS CCP4CON3Hbits absolute 0x30A;

typedef struct tagCCP4STATBITS {
  union {
    struct {
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICDIS:1;
      unsigned SCEVT:1;
      unsigned ASEVT:1;
      unsigned TRCLR:1;
      unsigned TRSET:1;
      unsigned CCPTRIG:1;
      unsigned :2;
      unsigned ICGARM:1;
    };
    struct {
      unsigned :7;
      unsigned TRIG:1;
    };
  };
} typeCCP4STATBITS;
sfr volatile typeCCP4STATBITS CCP4STATbits absolute 0x30C;

typedef struct tagCCP4STATLBITS {
  union {
    struct {
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICDIS:1;
      unsigned SCEVT:1;
      unsigned ASEVT:1;
      unsigned TRCLR:1;
      unsigned TRSET:1;
      unsigned CCPTRIG:1;
      unsigned :2;
      unsigned ICGARM:1;
    };
    struct {
      unsigned :7;
      unsigned TRIG:1;
    };
  };
} typeCCP4STATLBITS;
sfr volatile typeCCP4STATLBITS CCP4STATLbits absolute 0x30C;

typedef struct tagCCP4STATHBITS {
  union {
    struct {
      unsigned RAWIP:1;
      unsigned RBWIP:1;
      unsigned TMRLWIP:1;
      unsigned TMRHWIP:1;
      unsigned PRLWIP:1;
    };
  };
} typeCCP4STATHBITS;
sfr volatile typeCCP4STATHBITS CCP4STATHbits absolute 0x30E;

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
sfr volatile typeU1MODEBITS U1MODEbits absolute 0x398;

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
sfr volatile typeU1STABITS U1STAbits absolute 0x39A;

typedef struct tagU1TXREGBITS {
  union {
    struct {
      unsigned :15;
      unsigned LAST:1;
    };
  };
} typeU1TXREGBITS;
sfr volatile typeU1TXREGBITS U1TXREGbits absolute 0x39C;

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
sfr volatile typeU1ADMDBITS U1ADMDbits absolute 0x3A2;

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
sfr volatile typeU1SCCONBITS U1SCCONbits absolute 0x3A4;

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
sfr volatile typeU1SCINTBITS U1SCINTbits absolute 0x3A6;

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
sfr volatile typeU1GTCBITS U1GTCbits absolute 0x3A8;

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
sfr volatile typeU1WTCLBITS U1WTCLbits absolute 0x3AA;

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
sfr volatile typeU1WTCHBITS U1WTCHbits absolute 0x3AC;

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
sfr volatile typeU2MODEBITS U2MODEbits absolute 0x3AE;

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
sfr volatile typeU2STABITS U2STAbits absolute 0x3B0;

typedef struct tagU2TXREGBITS {
  union {
    struct {
      unsigned :15;
      unsigned LAST:1;
    };
  };
} typeU2TXREGBITS;
sfr volatile typeU2TXREGBITS U2TXREGbits absolute 0x3B2;

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
sfr volatile typeU2ADMDBITS U2ADMDbits absolute 0x3B8;

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
sfr volatile typeU2SCCONBITS U2SCCONbits absolute 0x3BA;

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
sfr volatile typeU2SCINTBITS U2SCINTbits absolute 0x3BC;

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
sfr volatile typeU2GTCBITS U2GTCbits absolute 0x3BE;

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
sfr volatile typeU2WTCLBITS U2WTCLbits absolute 0x3C0;

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
sfr volatile typeU2WTCHBITS U2WTCHbits absolute 0x3C2;

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
sfr volatile typeSPI1CON1BITS SPI1CON1bits absolute 0x3F4;

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
sfr volatile typeSPI1CON1LBITS SPI1CON1Lbits absolute 0x3F4;

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
sfr volatile typeSPI1CON1HBITS SPI1CON1Hbits absolute 0x3F6;

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
sfr volatile typeSPI1CON2BITS SPI1CON2bits absolute 0x3F6;

typedef struct tagSPI1CON2LBITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI1CON2LBITS;
sfr volatile typeSPI1CON2LBITS SPI1CON2Lbits absolute 0x3F8;

typedef struct tagSPI1CON3BITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI1CON3BITS;
sfr volatile typeSPI1CON3BITS SPI1CON3bits absolute 0x3F8;

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
sfr volatile typeSPI1STATLBITS SPI1STATLbits absolute 0x3FC;

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
sfr volatile typeSPI1STATHBITS SPI1STATHbits absolute 0x3FE;

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
sfr volatile typeSPI1BUFLBITS SPI1BUFLbits absolute 0x400;

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
sfr volatile typeSPI1BUFHBITS SPI1BUFHbits absolute 0x402;

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
sfr volatile typeSPI1BRGLBITS SPI1BRGLbits absolute 0x404;

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
sfr volatile typeSPI1IMSK1BITS SPI1IMSK1bits absolute 0x408;

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
sfr volatile typeSPI1IMSKLBITS SPI1IMSKLbits absolute 0x408;

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
sfr volatile typeSPI1IMSK2BITS SPI1IMSK2bits absolute 0x40A;

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
sfr volatile typeSPI1IMSKHBITS SPI1IMSKHbits absolute 0x40A;

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
sfr volatile typeSPI1URDTLBITS SPI1URDTLbits absolute 0x40C;

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
sfr volatile typeSPI1URDTHBITS SPI1URDTHbits absolute 0x40E;

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
sfr volatile typeSPI2CON1BITS SPI2CON1bits absolute 0x410;

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
sfr volatile typeSPI2CON1LBITS SPI2CON1Lbits absolute 0x410;

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
sfr volatile typeSPI2CON1HBITS SPI2CON1Hbits absolute 0x412;

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
sfr volatile typeSPI2CON2BITS SPI2CON2bits absolute 0x412;

typedef struct tagSPI2CON2LBITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI2CON2LBITS;
sfr volatile typeSPI2CON2LBITS SPI2CON2Lbits absolute 0x414;

typedef struct tagSPI2CON3BITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI2CON3BITS;
sfr volatile typeSPI2CON3BITS SPI2CON3bits absolute 0x414;

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
sfr volatile typeSPI2STATLBITS SPI2STATLbits absolute 0x418;

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
sfr volatile typeSPI2STATHBITS SPI2STATHbits absolute 0x41A;

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
sfr volatile typeSPI2BUFLBITS SPI2BUFLbits absolute 0x41C;

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
sfr volatile typeSPI2BUFHBITS SPI2BUFHbits absolute 0x41E;

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
sfr volatile typeSPI2BRGLBITS SPI2BRGLbits absolute 0x420;

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
sfr volatile typeSPI2IMSK1BITS SPI2IMSK1bits absolute 0x424;

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
sfr volatile typeSPI2IMSKLBITS SPI2IMSKLbits absolute 0x424;

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
sfr volatile typeSPI2IMSK2BITS SPI2IMSK2bits absolute 0x426;

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
sfr volatile typeSPI2IMSKHBITS SPI2IMSKHbits absolute 0x426;

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
sfr volatile typeSPI2URDTLBITS SPI2URDTLbits absolute 0x428;

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
sfr volatile typeSPI2URDTHBITS SPI2URDTHbits absolute 0x42A;

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
sfr volatile typeSPI3CON1BITS SPI3CON1bits absolute 0x42C;

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
sfr volatile typeSPI3CON1LBITS SPI3CON1Lbits absolute 0x42C;

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
sfr volatile typeSPI3CON1HBITS SPI3CON1Hbits absolute 0x42E;

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
sfr volatile typeSPI3CON2BITS SPI3CON2bits absolute 0x42E;

typedef struct tagSPI3CON2LBITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI3CON2LBITS;
sfr volatile typeSPI3CON2LBITS SPI3CON2Lbits absolute 0x430;

typedef struct tagSPI3CON3BITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI3CON3BITS;
sfr volatile typeSPI3CON3BITS SPI3CON3bits absolute 0x430;

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
sfr volatile typeSPI3STATLBITS SPI3STATLbits absolute 0x434;

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
sfr volatile typeSPI3STATHBITS SPI3STATHbits absolute 0x436;

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
sfr volatile typeSPI3BUFLBITS SPI3BUFLbits absolute 0x438;

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
sfr volatile typeSPI3BUFHBITS SPI3BUFHbits absolute 0x43A;

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
sfr volatile typeSPI3BRGLBITS SPI3BRGLbits absolute 0x43C;

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
sfr volatile typeSPI3IMSK1BITS SPI3IMSK1bits absolute 0x440;

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
sfr volatile typeSPI3IMSKLBITS SPI3IMSKLbits absolute 0x440;

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
sfr volatile typeSPI3IMSK2BITS SPI3IMSK2bits absolute 0x442;

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
sfr volatile typeSPI3IMSKHBITS SPI3IMSKHbits absolute 0x442;

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
sfr volatile typeSPI3URDTLBITS SPI3URDTLbits absolute 0x444;

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
sfr volatile typeSPI3URDTHBITS SPI3URDTHbits absolute 0x446;

typedef struct tagCLC1CONLBITS {
  union {
    struct {
      unsigned MODE:3;
      unsigned :2;
      unsigned LCPOL:1;
      unsigned LCOUT:1;
      unsigned LCOE:1;
      unsigned :2;
      unsigned INTN:1;
      unsigned INTP:1;
      unsigned :3;
      unsigned LCEN:1;
    };
    struct {
      unsigned MODE0:1;
      unsigned MODE1:1;
      unsigned MODE2:1;
    };
  };
} typeCLC1CONLBITS;
sfr volatile typeCLC1CONLBITS CLC1CONLbits absolute 0x464;

typedef struct tagCLC1CONHBITS {
  union {
    struct {
      unsigned G1POL:1;
      unsigned G2POL:1;
      unsigned G3POL:1;
      unsigned G4POL:1;
    };
  };
} typeCLC1CONHBITS;
sfr volatile typeCLC1CONHBITS CLC1CONHbits absolute 0x466;

typedef struct tagCLC1SELBITS {
  union {
    struct {
      unsigned DS1:3;
      unsigned :1;
      unsigned DS2:3;
      unsigned :1;
      unsigned DS3:3;
      unsigned :1;
      unsigned DS4:3;
    };
    struct {
      unsigned DS10:1;
      unsigned DS11:1;
      unsigned DS12:1;
      unsigned :1;
      unsigned DS20:1;
      unsigned DS21:1;
      unsigned DS22:1;
      unsigned :1;
      unsigned DS30:1;
      unsigned DS31:1;
      unsigned DS32:1;
      unsigned :1;
      unsigned DS40:1;
      unsigned DS41:1;
      unsigned DS42:1;
    };
  };
} typeCLC1SELBITS;
sfr volatile typeCLC1SELBITS CLC1SELbits absolute 0x468;

typedef struct tagCLC1SELLBITS {
  union {
    struct {
      unsigned DS1:3;
      unsigned :1;
      unsigned DS2:3;
      unsigned :1;
      unsigned DS3:3;
      unsigned :1;
      unsigned DS4:3;
    };
    struct {
      unsigned DS10:1;
      unsigned DS11:1;
      unsigned DS12:1;
      unsigned :1;
      unsigned DS20:1;
      unsigned DS21:1;
      unsigned DS22:1;
      unsigned :1;
      unsigned DS30:1;
      unsigned DS31:1;
      unsigned DS32:1;
      unsigned :1;
      unsigned DS40:1;
      unsigned DS41:1;
      unsigned DS42:1;
    };
  };
} typeCLC1SELLBITS;
sfr volatile typeCLC1SELLBITS CLC1SELLbits absolute 0x468;

typedef struct tagCLC1GLSLBITS {
  union {
    struct {
      unsigned G1D1N:1;
      unsigned G1D1T:1;
      unsigned G1D2N:1;
      unsigned G1D2T:1;
      unsigned G1D3N:1;
      unsigned G1D3T:1;
      unsigned G1D4N:1;
      unsigned G1D4T:1;
      unsigned G2D1N:1;
      unsigned G2D1T:1;
      unsigned G2D2N:1;
      unsigned G2D2T:1;
      unsigned G2D3N:1;
      unsigned G2D3T:1;
      unsigned G2D4N:1;
      unsigned G2D4T:1;
    };
  };
} typeCLC1GLSLBITS;
sfr volatile typeCLC1GLSLBITS CLC1GLSLbits absolute 0x46C;

typedef struct tagCLC1GLSHBITS {
  union {
    struct {
      unsigned G3D1N:1;
      unsigned G3D1T:1;
      unsigned G3D2N:1;
      unsigned G3D2T:1;
      unsigned G3D3N:1;
      unsigned G3D3T:1;
      unsigned G3D4N:1;
      unsigned G3D4T:1;
      unsigned G4D1N:1;
      unsigned G4D1T:1;
      unsigned G4D2N:1;
      unsigned G4D2T:1;
      unsigned G4D3N:1;
      unsigned G4D3T:1;
      unsigned G4D4N:1;
      unsigned G4D4T:1;
    };
  };
} typeCLC1GLSHBITS;
sfr volatile typeCLC1GLSHBITS CLC1GLSHbits absolute 0x46E;

typedef struct tagCLC2CONLBITS {
  union {
    struct {
      unsigned MODE:3;
      unsigned :2;
      unsigned LCPOL:1;
      unsigned LCOUT:1;
      unsigned LCOE:1;
      unsigned :2;
      unsigned INTN:1;
      unsigned INTP:1;
      unsigned :3;
      unsigned LCEN:1;
    };
    struct {
      unsigned MODE0:1;
      unsigned MODE1:1;
      unsigned MODE2:1;
    };
  };
} typeCLC2CONLBITS;
sfr volatile typeCLC2CONLBITS CLC2CONLbits absolute 0x470;

typedef struct tagCLC2CONHBITS {
  union {
    struct {
      unsigned G1POL:1;
      unsigned G2POL:1;
      unsigned G3POL:1;
      unsigned G4POL:1;
    };
  };
} typeCLC2CONHBITS;
sfr volatile typeCLC2CONHBITS CLC2CONHbits absolute 0x472;

typedef struct tagCLC2SELBITS {
  union {
    struct {
      unsigned DS1:3;
      unsigned :1;
      unsigned DS2:3;
      unsigned :1;
      unsigned DS3:3;
      unsigned :1;
      unsigned DS4:3;
    };
    struct {
      unsigned DS10:1;
      unsigned DS11:1;
      unsigned DS12:1;
      unsigned :1;
      unsigned DS20:1;
      unsigned DS21:1;
      unsigned DS22:1;
      unsigned :1;
      unsigned DS30:1;
      unsigned DS31:1;
      unsigned DS32:1;
      unsigned :1;
      unsigned DS40:1;
      unsigned DS41:1;
      unsigned DS42:1;
    };
  };
} typeCLC2SELBITS;
sfr volatile typeCLC2SELBITS CLC2SELbits absolute 0x474;

typedef struct tagCLC2SELLBITS {
  union {
    struct {
      unsigned DS1:3;
      unsigned :1;
      unsigned DS2:3;
      unsigned :1;
      unsigned DS3:3;
      unsigned :1;
      unsigned DS4:3;
    };
    struct {
      unsigned DS10:1;
      unsigned DS11:1;
      unsigned DS12:1;
      unsigned :1;
      unsigned DS20:1;
      unsigned DS21:1;
      unsigned DS22:1;
      unsigned :1;
      unsigned DS30:1;
      unsigned DS31:1;
      unsigned DS32:1;
      unsigned :1;
      unsigned DS40:1;
      unsigned DS41:1;
      unsigned DS42:1;
    };
  };
} typeCLC2SELLBITS;
sfr volatile typeCLC2SELLBITS CLC2SELLbits absolute 0x474;

typedef struct tagCLC2GLSLBITS {
  union {
    struct {
      unsigned G1D1N:1;
      unsigned G1D1T:1;
      unsigned G1D2N:1;
      unsigned G1D2T:1;
      unsigned G1D3N:1;
      unsigned G1D3T:1;
      unsigned G1D4N:1;
      unsigned G1D4T:1;
      unsigned G2D1N:1;
      unsigned G2D1T:1;
      unsigned G2D2N:1;
      unsigned G2D2T:1;
      unsigned G2D3N:1;
      unsigned G2D3T:1;
      unsigned G2D4N:1;
      unsigned G2D4T:1;
    };
  };
} typeCLC2GLSLBITS;
sfr volatile typeCLC2GLSLBITS CLC2GLSLbits absolute 0x478;

typedef struct tagCLC2GLSHBITS {
  union {
    struct {
      unsigned G3D1N:1;
      unsigned G3D1T:1;
      unsigned G3D2N:1;
      unsigned G3D2T:1;
      unsigned G3D3N:1;
      unsigned G3D3T:1;
      unsigned G3D4N:1;
      unsigned G3D4T:1;
      unsigned G4D1N:1;
      unsigned G4D1T:1;
      unsigned G4D2N:1;
      unsigned G4D2T:1;
      unsigned G4D3N:1;
      unsigned G4D3T:1;
      unsigned G4D4N:1;
      unsigned G4D4T:1;
    };
  };
} typeCLC2GLSHBITS;
sfr volatile typeCLC2GLSHBITS CLC2GLSHbits absolute 0x47A;

typedef struct tagI2C1RCVBITS {
  union {
    struct {
      unsigned I2CRXDATA:8;
    };
  };
} typeI2C1RCVBITS;
sfr volatile typeI2C1RCVBITS I2C1RCVbits absolute 0x494;

typedef struct tagI2C1TRNBITS {
  union {
    struct {
      unsigned I2CTXDATA:8;
    };
  };
} typeI2C1TRNBITS;
sfr volatile typeI2C1TRNBITS I2C1TRNbits absolute 0x496;

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
sfr volatile typeI2C1CON1BITS I2C1CON1bits absolute 0x49A;

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
sfr volatile typeI2C1CONLBITS I2C1CONLbits absolute 0x49A;

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
sfr volatile typeI2C1CON2BITS I2C1CON2bits absolute 0x49C;

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
sfr volatile typeI2C1CONHBITS I2C1CONHbits absolute 0x49C;

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
sfr volatile typeI2C1STATBITS I2C1STATbits absolute 0x49E;

typedef struct tagI2C1ADDBITS {
  union {
    struct {
      unsigned ADD:10;
    };
  };
} typeI2C1ADDBITS;
sfr volatile typeI2C1ADDBITS I2C1ADDbits absolute 0x4A0;

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
sfr volatile typeI2C1MSKBITS I2C1MSKbits absolute 0x4A2;

typedef struct tagI2C2RCVBITS {
  union {
    struct {
      unsigned I2CRXDATA:8;
    };
  };
} typeI2C2RCVBITS;
sfr volatile typeI2C2RCVBITS I2C2RCVbits absolute 0x4A4;

typedef struct tagI2C2TRNBITS {
  union {
    struct {
      unsigned I2CTXDATA:8;
    };
  };
} typeI2C2TRNBITS;
sfr volatile typeI2C2TRNBITS I2C2TRNbits absolute 0x4A6;

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
sfr volatile typeI2C2CON1BITS I2C2CON1bits absolute 0x4AA;

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
sfr volatile typeI2C2CONLBITS I2C2CONLbits absolute 0x4AA;

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
sfr volatile typeI2C2CON2BITS I2C2CON2bits absolute 0x4AC;

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
sfr volatile typeI2C2CONHBITS I2C2CONHbits absolute 0x4AC;

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
sfr volatile typeI2C2STATBITS I2C2STATbits absolute 0x4AE;

typedef struct tagI2C2ADDBITS {
  union {
    struct {
      unsigned ADD:10;
    };
  };
} typeI2C2ADDBITS;
sfr volatile typeI2C2ADDBITS I2C2ADDbits absolute 0x4B0;

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
sfr volatile typeI2C2MSKBITS I2C2MSKbits absolute 0x4B2;

typedef struct tagDMACONBITS {
  union {
    struct {
      unsigned PRSSEL:1;
      unsigned :12;
      unsigned DMASIDL:1;
      unsigned :1;
      unsigned DMAEN:1;
    };
  };
} typeDMACONBITS;
sfr volatile typeDMACONBITS DMACONbits absolute 0x4C4;

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
sfr volatile typeDMACH0BITS DMACH0bits absolute 0x4CC;

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
      unsigned CHSEL:7;
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
      unsigned CHSEL6:1;
    };
  };
} typeDMAINT0BITS;
sfr volatile typeDMAINT0BITS DMAINT0bits absolute 0x4CE;

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
sfr volatile typeDMACH1BITS DMACH1bits absolute 0x4D6;

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
      unsigned CHSEL:7;
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
      unsigned CHSEL6:1;
    };
  };
} typeDMAINT1BITS;
sfr volatile typeDMAINT1BITS DMAINT1bits absolute 0x4D8;

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
sfr volatile typeDMACH2BITS DMACH2bits absolute 0x4E0;

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
      unsigned CHSEL:7;
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
      unsigned CHSEL6:1;
    };
  };
} typeDMAINT2BITS;
sfr volatile typeDMAINT2BITS DMAINT2bits absolute 0x4E2;

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
sfr volatile typeDMACH3BITS DMACH3bits absolute 0x4EA;

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
      unsigned CHSEL:7;
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
      unsigned CHSEL6:1;
    };
  };
} typeDMAINT3BITS;
sfr volatile typeDMAINT3BITS DMAINT3bits absolute 0x4EC;

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
sfr volatile typeDMACH4BITS DMACH4bits absolute 0x4F4;

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
      unsigned CHSEL:7;
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
      unsigned CHSEL6:1;
    };
  };
} typeDMAINT4BITS;
sfr volatile typeDMAINT4BITS DMAINT4bits absolute 0x4F6;

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
sfr volatile typeDMACH5BITS DMACH5bits absolute 0x4FE;

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
      unsigned CHSEL:7;
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
      unsigned CHSEL6:1;
    };
  };
} typeDMAINT5BITS;
sfr volatile typeDMAINT5BITS DMAINT5bits absolute 0x500;

typedef struct tagPADCONBITS {
  union {
    struct {
      unsigned PMPTTL:1;
      unsigned :14;
      unsigned IOCON:1;
    };
  };
} typePADCONBITS;
sfr volatile typePADCONBITS PADCONbits absolute 0x65E;

typedef struct tagIOCSTATBITS {
  union {
    struct {
      unsigned IOCPAF:1;
      unsigned IOCPBF:1;
      unsigned IOCPCF:1;
    };
  };
} typeIOCSTATBITS;
sfr volatile typeIOCSTATBITS IOCSTATbits absolute 0x660;

typedef struct tagTRISABITS {
  union {
    struct {
      unsigned TRISA0:1;
      unsigned TRISA1:1;
      unsigned TRISA2:1;
      unsigned TRISA3:1;
      unsigned TRISA4:1;
      unsigned :2;
      unsigned TRISA7:1;
      unsigned TRISA8:1;
      unsigned TRISA9:1;
      unsigned TRISA10:1;
    };
  };
} typeTRISABITS;
sfr volatile typeTRISABITS TRISAbits absolute 0x662;

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
sfr volatile typePORTABITS PORTAbits absolute 0x664;

typedef struct tagLATABITS {
  union {
    struct {
      unsigned LATA0:1;
      unsigned LATA1:1;
      unsigned LATA2:1;
      unsigned LATA3:1;
      unsigned LATA4:1;
      unsigned :2;
      unsigned LATA7:1;
      unsigned LATA8:1;
      unsigned LATA9:1;
      unsigned LATA10:1;
    };
  };
} typeLATABITS;
sfr volatile typeLATABITS LATAbits absolute 0x666;

typedef struct tagODCABITS {
  union {
    struct {
      unsigned ODCA0:1;
      unsigned ODCA1:1;
      unsigned ODCA2:1;
      unsigned ODCA3:1;
      unsigned ODCA4:1;
      unsigned :2;
      unsigned ODCA7:1;
      unsigned ODCA8:1;
      unsigned ODCA9:1;
      unsigned ODCA10:1;
    };
  };
} typeODCABITS;
sfr volatile typeODCABITS ODCAbits absolute 0x668;

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
sfr volatile typeANSABITS ANSAbits absolute 0x66A;

typedef struct tagIOCPABITS {
  union {
    struct {
      unsigned IOCPA0:1;
      unsigned IOCPA1:1;
      unsigned IOCPA2:1;
      unsigned IOCPA3:1;
      unsigned IOCPA4:1;
      unsigned :2;
      unsigned IOCPA7:1;
      unsigned IOCPA8:1;
      unsigned IOCPA9:1;
      unsigned IOCPA10:1;
    };
  };
} typeIOCPABITS;
sfr volatile typeIOCPABITS IOCPAbits absolute 0x66C;

typedef struct tagIOCNABITS {
  union {
    struct {
      unsigned IOCNA0:1;
      unsigned IOCNA1:1;
      unsigned IOCNA2:1;
      unsigned IOCNA3:1;
      unsigned IOCNA4:1;
      unsigned :2;
      unsigned IOCNA7:1;
      unsigned IOCNA8:1;
      unsigned IOCNA9:1;
      unsigned IOCNA10:1;
    };
  };
} typeIOCNABITS;
sfr volatile typeIOCNABITS IOCNAbits absolute 0x66E;

typedef struct tagIOCFABITS {
  union {
    struct {
      unsigned IOCFA0:1;
      unsigned IOCFA1:1;
      unsigned IOCFA2:1;
      unsigned IOCFA3:1;
      unsigned IOCFA4:1;
      unsigned :2;
      unsigned IOCFA7:1;
      unsigned IOCFA8:1;
      unsigned IOCFA9:1;
      unsigned IOCFA10:1;
    };
  };
} typeIOCFABITS;
sfr volatile typeIOCFABITS IOCFAbits absolute 0x670;

typedef struct tagCNPUABITS {
  union {
    struct {
      unsigned IOCPA0:1;
      unsigned IOCPA1:1;
      unsigned IOCPA2:1;
      unsigned IOCPA3:1;
      unsigned IOCPA4:1;
      unsigned :2;
      unsigned IOCPA7:1;
      unsigned IOCPA8:1;
      unsigned IOCPA9:1;
      unsigned IOCPA10:1;
    };
    struct {
      unsigned IOCPUA0:1;
      unsigned IOCPUA1:1;
      unsigned IOCPUA2:1;
      unsigned IOCPUA3:1;
      unsigned IOCPUA4:1;
      unsigned :2;
      unsigned IOCPUA7:1;
      unsigned IOCPUA8:1;
      unsigned IOCPUA9:1;
      unsigned IOCPUA10:1;
    };
    struct {
      unsigned CNPUA0:1;
      unsigned CNPUA1:1;
      unsigned CNPUA2:1;
      unsigned CNPUA3:1;
      unsigned CNPUA4:1;
      unsigned :2;
      unsigned CNPUA7:1;
      unsigned CNPUA8:1;
      unsigned CNPUA9:1;
      unsigned CNPUA10:1;
    };
  };
} typeCNPUABITS;
sfr volatile typeCNPUABITS CNPUAbits absolute 0x672;

typedef struct tagIOCPUABITS {
  union {
    struct {
      unsigned IOCPA0:1;
      unsigned IOCPA1:1;
      unsigned IOCPA2:1;
      unsigned IOCPA3:1;
      unsigned IOCPA4:1;
      unsigned :2;
      unsigned IOCPA7:1;
      unsigned IOCPA8:1;
      unsigned IOCPA9:1;
      unsigned IOCPA10:1;
    };
    struct {
      unsigned IOCPUA0:1;
      unsigned IOCPUA1:1;
      unsigned IOCPUA2:1;
      unsigned IOCPUA3:1;
      unsigned IOCPUA4:1;
      unsigned :2;
      unsigned IOCPUA7:1;
      unsigned IOCPUA8:1;
      unsigned IOCPUA9:1;
      unsigned IOCPUA10:1;
    };
    struct {
      unsigned CNPUA0:1;
      unsigned CNPUA1:1;
      unsigned CNPUA2:1;
      unsigned CNPUA3:1;
      unsigned CNPUA4:1;
      unsigned :2;
      unsigned CNPUA7:1;
      unsigned CNPUA8:1;
      unsigned CNPUA9:1;
      unsigned CNPUA10:1;
    };
  };
} typeIOCPUABITS;
sfr volatile typeIOCPUABITS IOCPUAbits absolute 0x672;

typedef struct tagCNPDABITS {
  union {
    struct {
      unsigned IOCPDA0:1;
      unsigned IOCPDA1:1;
      unsigned IOCPDA2:1;
      unsigned IOCPDA3:1;
      unsigned IOCPDA4:1;
      unsigned :2;
      unsigned IOCPDA7:1;
      unsigned IOCPDA8:1;
      unsigned IOCPDA9:1;
      unsigned IOCPDA10:1;
    };
    struct {
      unsigned CNPDA0:1;
      unsigned CNPDA1:1;
      unsigned CNPDA2:1;
      unsigned CNPDA3:1;
      unsigned CNPDA4:1;
      unsigned :2;
      unsigned CNPDA7:1;
      unsigned CNPDA8:1;
      unsigned CNPDA9:1;
      unsigned CNPDA10:1;
    };
  };
} typeCNPDABITS;
sfr volatile typeCNPDABITS CNPDAbits absolute 0x674;

typedef struct tagIOCPDABITS {
  union {
    struct {
      unsigned IOCPDA0:1;
      unsigned IOCPDA1:1;
      unsigned IOCPDA2:1;
      unsigned IOCPDA3:1;
      unsigned IOCPDA4:1;
      unsigned :2;
      unsigned IOCPDA7:1;
      unsigned IOCPDA8:1;
      unsigned IOCPDA9:1;
      unsigned IOCPDA10:1;
    };
    struct {
      unsigned CNPDA0:1;
      unsigned CNPDA1:1;
      unsigned CNPDA2:1;
      unsigned CNPDA3:1;
      unsigned CNPDA4:1;
      unsigned :2;
      unsigned CNPDA7:1;
      unsigned CNPDA8:1;
      unsigned CNPDA9:1;
      unsigned CNPDA10:1;
    };
  };
} typeIOCPDABITS;
sfr volatile typeIOCPDABITS IOCPDAbits absolute 0x674;

typedef struct tagTRISBBITS {
  union {
    struct {
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
    };
  };
} typeTRISBBITS;
sfr volatile typeTRISBBITS TRISBbits absolute 0x676;

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
sfr volatile typePORTBBITS PORTBbits absolute 0x678;

typedef struct tagLATBBITS {
  union {
    struct {
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
    };
  };
} typeLATBBITS;
sfr volatile typeLATBBITS LATBbits absolute 0x67A;

typedef struct tagODCBBITS {
  union {
    struct {
      unsigned ODCB0:1;
      unsigned ODCB1:1;
      unsigned ODCB2:1;
      unsigned ODCB3:1;
      unsigned ODCB4:1;
      unsigned ODCB5:1;
      unsigned ODCB6:1;
      unsigned ODCB7:1;
      unsigned ODCB8:1;
      unsigned ODCB9:1;
      unsigned ODCB10:1;
      unsigned ODCB11:1;
      unsigned ODCB12:1;
      unsigned ODCB13:1;
      unsigned ODCB14:1;
      unsigned ODCB15:1;
    };
  };
} typeODCBBITS;
sfr volatile typeODCBBITS ODCBbits absolute 0x67C;

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
sfr volatile typeANSBBITS ANSBbits absolute 0x67E;

typedef struct tagIOCPBBITS {
  union {
    struct {
      unsigned IOCPB0:1;
      unsigned IOCPB1:1;
      unsigned IOCPB2:1;
      unsigned IOCPB3:1;
      unsigned IOCPB4:1;
      unsigned IOCPB5:1;
      unsigned IOCPB6:1;
      unsigned IOCPB7:1;
      unsigned IOCPB8:1;
      unsigned IOCPB9:1;
      unsigned IOCPB10:1;
      unsigned IOCPB11:1;
      unsigned IOCPB12:1;
      unsigned IOCPB13:1;
      unsigned IOCPB14:1;
      unsigned IOCPB15:1;
    };
  };
} typeIOCPBBITS;
sfr volatile typeIOCPBBITS IOCPBbits absolute 0x680;

typedef struct tagIOCNBBITS {
  union {
    struct {
      unsigned IOCNB0:1;
      unsigned IOCNB1:1;
      unsigned IOCNB2:1;
      unsigned IOCNB3:1;
      unsigned IOCNB4:1;
      unsigned IOCNB5:1;
      unsigned IOCNB6:1;
      unsigned IOCNB7:1;
      unsigned IOCNB8:1;
      unsigned IOCNB9:1;
      unsigned IOCNB10:1;
      unsigned IOCNB11:1;
      unsigned IOCNB12:1;
      unsigned IOCNB13:1;
      unsigned IOCNB14:1;
      unsigned IOCNB15:1;
    };
  };
} typeIOCNBBITS;
sfr volatile typeIOCNBBITS IOCNBbits absolute 0x682;

typedef struct tagIOCFBBITS {
  union {
    struct {
      unsigned IOCFB0:1;
      unsigned IOCFB1:1;
      unsigned IOCFB2:1;
      unsigned IOCFB3:1;
      unsigned IOCFB4:1;
      unsigned IOCFB5:1;
      unsigned IOCFB6:1;
      unsigned IOCFB7:1;
      unsigned IOCFB8:1;
      unsigned IOCFB9:1;
      unsigned IOCFB10:1;
      unsigned IOCFB11:1;
      unsigned IOCFB12:1;
      unsigned IOCFB13:1;
      unsigned IOCFB14:1;
      unsigned IOCFB15:1;
    };
  };
} typeIOCFBBITS;
sfr volatile typeIOCFBBITS IOCFBbits absolute 0x684;

typedef struct tagCNPUBBITS {
  union {
    struct {
      unsigned IOCPB0:1;
      unsigned IOCPB1:1;
      unsigned IOCPB2:1;
      unsigned IOCPB3:1;
      unsigned IOCPB4:1;
      unsigned IOCPB5:1;
      unsigned IOCPB6:1;
      unsigned IOCPB7:1;
      unsigned IOCPB8:1;
      unsigned IOCPB9:1;
      unsigned IOCPB10:1;
      unsigned IOCPB11:1;
      unsigned IOCPB12:1;
      unsigned IOCPB13:1;
      unsigned IOCPB14:1;
      unsigned IOCPB15:1;
    };
    struct {
      unsigned IOCPUB0:1;
      unsigned IOCPUB1:1;
      unsigned IOCPUB2:1;
      unsigned IOCPUB3:1;
      unsigned IOCPUB4:1;
      unsigned IOCPUB5:1;
      unsigned IOCPUB6:1;
      unsigned IOCPUB7:1;
      unsigned IOCPUB8:1;
      unsigned IOCPUB9:1;
      unsigned IOCPUB10:1;
      unsigned IOCPUB11:1;
      unsigned IOCPUB12:1;
      unsigned IOCPUB13:1;
      unsigned IOCPUB14:1;
      unsigned IOCPUB15:1;
    };
    struct {
      unsigned CNPUB0:1;
      unsigned CNPUB1:1;
      unsigned CNPUB2:1;
      unsigned CNPUB3:1;
      unsigned CNPUB4:1;
      unsigned CNPUB5:1;
      unsigned CNPUB6:1;
      unsigned CNPUB7:1;
      unsigned CNPUB8:1;
      unsigned CNPUB9:1;
      unsigned CNPUB10:1;
      unsigned CNPUB11:1;
      unsigned CNPUB12:1;
      unsigned CNPUB13:1;
      unsigned CNPUB14:1;
      unsigned CNPUB15:1;
    };
  };
} typeCNPUBBITS;
sfr volatile typeCNPUBBITS CNPUBbits absolute 0x686;

typedef struct tagIOCPUBBITS {
  union {
    struct {
      unsigned IOCPB0:1;
      unsigned IOCPB1:1;
      unsigned IOCPB2:1;
      unsigned IOCPB3:1;
      unsigned IOCPB4:1;
      unsigned IOCPB5:1;
      unsigned IOCPB6:1;
      unsigned IOCPB7:1;
      unsigned IOCPB8:1;
      unsigned IOCPB9:1;
      unsigned IOCPB10:1;
      unsigned IOCPB11:1;
      unsigned IOCPB12:1;
      unsigned IOCPB13:1;
      unsigned IOCPB14:1;
      unsigned IOCPB15:1;
    };
    struct {
      unsigned IOCPUB0:1;
      unsigned IOCPUB1:1;
      unsigned IOCPUB2:1;
      unsigned IOCPUB3:1;
      unsigned IOCPUB4:1;
      unsigned IOCPUB5:1;
      unsigned IOCPUB6:1;
      unsigned IOCPUB7:1;
      unsigned IOCPUB8:1;
      unsigned IOCPUB9:1;
      unsigned IOCPUB10:1;
      unsigned IOCPUB11:1;
      unsigned IOCPUB12:1;
      unsigned IOCPUB13:1;
      unsigned IOCPUB14:1;
      unsigned IOCPUB15:1;
    };
    struct {
      unsigned CNPUB0:1;
      unsigned CNPUB1:1;
      unsigned CNPUB2:1;
      unsigned CNPUB3:1;
      unsigned CNPUB4:1;
      unsigned CNPUB5:1;
      unsigned CNPUB6:1;
      unsigned CNPUB7:1;
      unsigned CNPUB8:1;
      unsigned CNPUB9:1;
      unsigned CNPUB10:1;
      unsigned CNPUB11:1;
      unsigned CNPUB12:1;
      unsigned CNPUB13:1;
      unsigned CNPUB14:1;
      unsigned CNPUB15:1;
    };
  };
} typeIOCPUBBITS;
sfr volatile typeIOCPUBBITS IOCPUBbits absolute 0x686;

typedef struct tagCNPDBBITS {
  union {
    struct {
      unsigned IOCPDB0:1;
      unsigned IOCPDB1:1;
      unsigned IOCPDB2:1;
      unsigned IOCPDB3:1;
      unsigned IOCPDB4:1;
      unsigned IOCPDB5:1;
      unsigned IOCPDB6:1;
      unsigned IOCPDB7:1;
      unsigned IOCPDB8:1;
      unsigned IOCPDB9:1;
      unsigned IOCPDB10:1;
      unsigned IOCPDB11:1;
      unsigned IOCPDB12:1;
      unsigned IOCPDB13:1;
      unsigned IOCPDB14:1;
      unsigned IOCPDB15:1;
    };
    struct {
      unsigned CNPDB0:1;
      unsigned CNPDB1:1;
      unsigned CNPDB2:1;
      unsigned CNPDB3:1;
      unsigned CNPDB4:1;
      unsigned CNPDB5:1;
      unsigned CNPDB6:1;
      unsigned CNPDB7:1;
      unsigned CNPDB8:1;
      unsigned CNPDB9:1;
      unsigned CNPDB10:1;
      unsigned CNPDB11:1;
      unsigned CNPDB12:1;
      unsigned CNPDB13:1;
      unsigned CNPDB14:1;
      unsigned CNPDB15:1;
    };
  };
} typeCNPDBBITS;
sfr volatile typeCNPDBBITS CNPDBbits absolute 0x688;

typedef struct tagIOCPDBBITS {
  union {
    struct {
      unsigned IOCPDB0:1;
      unsigned IOCPDB1:1;
      unsigned IOCPDB2:1;
      unsigned IOCPDB3:1;
      unsigned IOCPDB4:1;
      unsigned IOCPDB5:1;
      unsigned IOCPDB6:1;
      unsigned IOCPDB7:1;
      unsigned IOCPDB8:1;
      unsigned IOCPDB9:1;
      unsigned IOCPDB10:1;
      unsigned IOCPDB11:1;
      unsigned IOCPDB12:1;
      unsigned IOCPDB13:1;
      unsigned IOCPDB14:1;
      unsigned IOCPDB15:1;
    };
    struct {
      unsigned CNPDB0:1;
      unsigned CNPDB1:1;
      unsigned CNPDB2:1;
      unsigned CNPDB3:1;
      unsigned CNPDB4:1;
      unsigned CNPDB5:1;
      unsigned CNPDB6:1;
      unsigned CNPDB7:1;
      unsigned CNPDB8:1;
      unsigned CNPDB9:1;
      unsigned CNPDB10:1;
      unsigned CNPDB11:1;
      unsigned CNPDB12:1;
      unsigned CNPDB13:1;
      unsigned CNPDB14:1;
      unsigned CNPDB15:1;
    };
  };
} typeIOCPDBBITS;
sfr volatile typeIOCPDBBITS IOCPDBbits absolute 0x688;

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
sfr volatile typeTRISCBITS TRISCbits absolute 0x68A;

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
sfr volatile typePORTCBITS PORTCbits absolute 0x68C;

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
sfr volatile typeLATCBITS LATCbits absolute 0x68E;

typedef struct tagODCCBITS {
  union {
    struct {
      unsigned ODCC0:1;
      unsigned ODCC1:1;
      unsigned ODCC2:1;
      unsigned ODCC3:1;
      unsigned ODCC4:1;
      unsigned ODCC5:1;
      unsigned ODCC6:1;
      unsigned ODCC7:1;
      unsigned ODCC8:1;
      unsigned ODCC9:1;
    };
  };
} typeODCCBITS;
sfr volatile typeODCCBITS ODCCbits absolute 0x690;

typedef struct tagANSCBITS {
  union {
    struct {
      unsigned ANSC0:1;
      unsigned ANSC1:1;
      unsigned ANSC2:1;
      unsigned ANSC3:1;
    };
  };
} typeANSCBITS;
sfr volatile typeANSCBITS ANSCbits absolute 0x692;

typedef struct tagIOCPCBITS {
  union {
    struct {
      unsigned IOCPC0:1;
      unsigned IOCPC1:1;
      unsigned IOCPC2:1;
      unsigned IOCPC3:1;
      unsigned IOCPC4:1;
      unsigned IOCPC5:1;
      unsigned IOCPC6:1;
      unsigned IOCPC7:1;
      unsigned IOCPC8:1;
      unsigned IOCPC9:1;
    };
  };
} typeIOCPCBITS;
sfr volatile typeIOCPCBITS IOCPCbits absolute 0x694;

typedef struct tagIOCNCBITS {
  union {
    struct {
      unsigned IOCNC0:1;
      unsigned IOCNC1:1;
      unsigned IOCNC2:1;
      unsigned IOCNC3:1;
      unsigned IOCNC4:1;
      unsigned IOCNC5:1;
      unsigned IOCNC6:1;
      unsigned IOCNC7:1;
      unsigned IOCNC8:1;
      unsigned IOCNC9:1;
    };
  };
} typeIOCNCBITS;
sfr volatile typeIOCNCBITS IOCNCbits absolute 0x696;

typedef struct tagIOCFCBITS {
  union {
    struct {
      unsigned IOCFC0:1;
      unsigned IOCFC1:1;
      unsigned IOCFC2:1;
      unsigned IOCFC3:1;
      unsigned IOCFC4:1;
      unsigned IOCFC5:1;
      unsigned IOCFC6:1;
      unsigned IOCFC7:1;
      unsigned IOCFC8:1;
      unsigned IOCFC9:1;
    };
  };
} typeIOCFCBITS;
sfr volatile typeIOCFCBITS IOCFCbits absolute 0x698;

typedef struct tagCNPUCBITS {
  union {
    struct {
      unsigned IOCPC0:1;
      unsigned IOCPC1:1;
      unsigned IOCPC2:1;
      unsigned IOCPC3:1;
      unsigned IOCPC4:1;
      unsigned IOCPC5:1;
      unsigned IOCPC6:1;
      unsigned IOCPC7:1;
      unsigned IOCPC8:1;
      unsigned IOCPC9:1;
    };
    struct {
      unsigned IOCPUC0:1;
      unsigned IOCPUC1:1;
      unsigned IOCPUC2:1;
      unsigned IOCPUC3:1;
      unsigned IOCPUC4:1;
      unsigned IOCPUC5:1;
      unsigned IOCPUC6:1;
      unsigned IOCPUC7:1;
      unsigned IOCPUC8:1;
      unsigned IOCPUC9:1;
    };
    struct {
      unsigned CNPUC0:1;
      unsigned CNPUC1:1;
      unsigned CNPUC2:1;
      unsigned CNPUC3:1;
      unsigned CNPUC4:1;
      unsigned CNPUC5:1;
      unsigned CNPUC6:1;
      unsigned CNPUC7:1;
      unsigned CNPUC8:1;
      unsigned CNPUC9:1;
    };
  };
} typeCNPUCBITS;
sfr volatile typeCNPUCBITS CNPUCbits absolute 0x69A;

typedef struct tagIOCPUCBITS {
  union {
    struct {
      unsigned IOCPC0:1;
      unsigned IOCPC1:1;
      unsigned IOCPC2:1;
      unsigned IOCPC3:1;
      unsigned IOCPC4:1;
      unsigned IOCPC5:1;
      unsigned IOCPC6:1;
      unsigned IOCPC7:1;
      unsigned IOCPC8:1;
      unsigned IOCPC9:1;
    };
    struct {
      unsigned IOCPUC0:1;
      unsigned IOCPUC1:1;
      unsigned IOCPUC2:1;
      unsigned IOCPUC3:1;
      unsigned IOCPUC4:1;
      unsigned IOCPUC5:1;
      unsigned IOCPUC6:1;
      unsigned IOCPUC7:1;
      unsigned IOCPUC8:1;
      unsigned IOCPUC9:1;
    };
    struct {
      unsigned CNPUC0:1;
      unsigned CNPUC1:1;
      unsigned CNPUC2:1;
      unsigned CNPUC3:1;
      unsigned CNPUC4:1;
      unsigned CNPUC5:1;
      unsigned CNPUC6:1;
      unsigned CNPUC7:1;
      unsigned CNPUC8:1;
      unsigned CNPUC9:1;
    };
  };
} typeIOCPUCBITS;
sfr volatile typeIOCPUCBITS IOCPUCbits absolute 0x69A;

typedef struct tagCNPDCBITS {
  union {
    struct {
      unsigned IOCPDC0:1;
      unsigned IOCPDC1:1;
      unsigned IOCPDC2:1;
      unsigned IOCPDC3:1;
      unsigned IOCPDC4:1;
      unsigned IOCPDC5:1;
      unsigned IOCPDC6:1;
      unsigned IOCPDC7:1;
      unsigned IOCPDC8:1;
      unsigned IOCPDC9:1;
    };
    struct {
      unsigned CNPDC0:1;
      unsigned CNPDC1:1;
      unsigned CNPDC2:1;
      unsigned CNPDC3:1;
      unsigned CNPDC4:1;
      unsigned CNPDC5:1;
      unsigned CNPDC6:1;
      unsigned CNPDC7:1;
      unsigned CNPDC8:1;
      unsigned CNPDC9:1;
    };
  };
} typeCNPDCBITS;
sfr volatile typeCNPDCBITS CNPDCbits absolute 0x69C;

typedef struct tagIOCPDCBITS {
  union {
    struct {
      unsigned IOCPDC0:1;
      unsigned IOCPDC1:1;
      unsigned IOCPDC2:1;
      unsigned IOCPDC3:1;
      unsigned IOCPDC4:1;
      unsigned IOCPDC5:1;
      unsigned IOCPDC6:1;
      unsigned IOCPDC7:1;
      unsigned IOCPDC8:1;
      unsigned IOCPDC9:1;
    };
    struct {
      unsigned CNPDC0:1;
      unsigned CNPDC1:1;
      unsigned CNPDC2:1;
      unsigned CNPDC3:1;
      unsigned CNPDC4:1;
      unsigned CNPDC5:1;
      unsigned CNPDC6:1;
      unsigned CNPDC7:1;
      unsigned CNPDC8:1;
      unsigned CNPDC9:1;
    };
  };
} typeIOCPDCBITS;
sfr volatile typeIOCPDCBITS IOCPDCbits absolute 0x69C;

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
sfr volatile typeAD1CON1BITS AD1CON1bits absolute 0x746;

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
      unsigned :1;
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
sfr volatile typeAD1CON2BITS AD1CON2bits absolute 0x748;

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
sfr volatile typeAD1CON3BITS AD1CON3bits absolute 0x74A;

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
sfr volatile typeAD1CHSBITS AD1CHSbits absolute 0x74C;

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
sfr volatile typeAD1CHS0BITS AD1CHS0bits absolute 0x74C;

typedef struct tagAD1CSSHBITS {
  union {
    struct {
      unsigned :12;
      unsigned CSS28:1;
      unsigned CSS29:1;
      unsigned CSS30:1;
    };
  };
} typeAD1CSSHBITS;
sfr volatile typeAD1CSSHBITS AD1CSSHbits absolute 0x74E;

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
      unsigned CSS15:1;
    };
  };
} typeAD1CSSLBITS;
sfr volatile typeAD1CSSLBITS AD1CSSLbits absolute 0x750;

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
sfr volatile typeAD1CON4BITS AD1CON4bits absolute 0x752;

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
sfr volatile typeAD1CON5BITS AD1CON5bits absolute 0x754;

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
      unsigned CHH13:1;
    };
  };
} typeAD1CHITLBITS;
sfr volatile typeAD1CHITLBITS AD1CHITLbits absolute 0x758;

typedef struct tagAD1CTMENHBITS {
  union {
    struct {
      unsigned CTMEN16:1;
      unsigned CTMEN17:1;
      unsigned CTMEN18:1;
      unsigned CTMEN19:1;
      unsigned CTMEN20:1;
      unsigned CTMEN21:1;
      unsigned CTMEN22:1;
      unsigned CTMEN23:1;
      unsigned CTMEN24:1;
      unsigned CTMEN25:1;
      unsigned CTMEN26:1;
      unsigned CTMEN27:1;
      unsigned CTMEN28:1;
      unsigned CTMEN29:1;
      unsigned CTMEN30:1;
      unsigned CTMEN31:1;
    };
  };
} typeAD1CTMENHBITS;
sfr volatile typeAD1CTMENHBITS AD1CTMENHbits absolute 0x75A;

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
      unsigned CTMEN13:1;
      unsigned CTMEN14:1;
      unsigned CTMEN15:1;
    };
  };
} typeAD1CTMENLBITS;
sfr volatile typeAD1CTMENLBITS AD1CTMENLbits absolute 0x75C;

typedef struct tagAD1RESDMABITS {
  union {
    struct {
      unsigned AD1RESDMA:16;
    };
    struct {
      unsigned AD1DMBUF:16;
    };
  };
} typeAD1RESDMABITS;
sfr volatile typeAD1RESDMABITS AD1RESDMAbits absolute 0x75E;

typedef struct tagNVMCONBITS {
  union {
    struct {
      unsigned NVMOP:4;
      unsigned :6;
      unsigned P2ACTIV:1;
      unsigned SFTSWP:1;
      unsigned NVMSIDL:1;
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

typedef struct tagNVMADRBITS {
  union {
    struct {
      unsigned :1;
      unsigned NVMADRL:15;
    };
    struct {
      unsigned :1;
      unsigned NVMADR:15;
    };
  };
} typeNVMADRBITS;
sfr volatile typeNVMADRBITS NVMADRbits absolute 0x762;

typedef struct tagNVMADRLBITS {
  union {
    struct {
      unsigned :1;
      unsigned NVMADRL:15;
    };
    struct {
      unsigned :1;
      unsigned NVMADR:15;
    };
  };
} typeNVMADRLBITS;
sfr volatile typeNVMADRLBITS NVMADRLbits absolute 0x762;

typedef struct tagNVMADRHBITS {
  union {
    struct {
      unsigned NVMADRH:8;
    };
    struct {
      unsigned NVMADRU:8;
    };
  };
} typeNVMADRHBITS;
sfr volatile typeNVMADRHBITS NVMADRHbits absolute 0x764;

typedef struct tagNVMADRUBITS {
  union {
    struct {
      unsigned NVMADRH:8;
    };
    struct {
      unsigned NVMADRU:8;
    };
  };
} typeNVMADRUBITS;
sfr volatile typeNVMADRUBITS NVMADRUbits absolute 0x764;

typedef struct tagRPINR0BITS {
  union {
    struct {
      unsigned OCTRIG1R:6;
      unsigned :2;
      unsigned INT1R:6;
    };
  };
} typeRPINR0BITS;
sfr volatile typeRPINR0BITS RPINR0bits absolute 0x790;

typedef struct tagRPINR1BITS {
  union {
    struct {
      unsigned INT2R:6;
      unsigned :2;
      unsigned INT3R:6;
    };
  };
} typeRPINR1BITS;
sfr volatile typeRPINR1BITS RPINR1bits absolute 0x792;

typedef struct tagRPINR2BITS {
  union {
    struct {
      unsigned INT4R:6;
      unsigned :2;
      unsigned OCTRIG2R:6;
    };
  };
} typeRPINR2BITS;
sfr volatile typeRPINR2BITS RPINR2bits absolute 0x794;

typedef struct tagRPINR3BITS {
  union {
    struct {
      unsigned T2CKR:6;
      unsigned :2;
      unsigned T3CKR:6;
    };
  };
} typeRPINR3BITS;
sfr volatile typeRPINR3BITS RPINR3bits absolute 0x796;

typedef struct tagRPINR5BITS {
  union {
    struct {
      unsigned ICM1R:6;
      unsigned :2;
      unsigned ICM2R:6;
    };
  };
} typeRPINR5BITS;
sfr volatile typeRPINR5BITS RPINR5bits absolute 0x79A;

typedef struct tagRPINR6BITS {
  union {
    struct {
      unsigned ICM3R:6;
      unsigned :2;
      unsigned ICM4R:6;
    };
  };
} typeRPINR6BITS;
sfr volatile typeRPINR6BITS RPINR6bits absolute 0x79C;

typedef struct tagRPINR7BITS {
  union {
    struct {
      unsigned IC1R:6;
      unsigned :2;
      unsigned IC2R:6;
    };
  };
} typeRPINR7BITS;
sfr volatile typeRPINR7BITS RPINR7bits absolute 0x79E;

typedef struct tagRPINR8BITS {
  union {
    struct {
      unsigned IC3R:6;
    };
  };
} typeRPINR8BITS;
sfr volatile typeRPINR8BITS RPINR8bits absolute 0x7A0;

typedef struct tagRPINR11BITS {
  union {
    struct {
      unsigned OCFAR:6;
      unsigned :2;
      unsigned OCFBR:6;
    };
  };
} typeRPINR11BITS;
sfr volatile typeRPINR11BITS RPINR11bits absolute 0x7A6;

typedef struct tagRPINR12BITS {
  union {
    struct {
      unsigned TCKIAR:6;
      unsigned :2;
      unsigned TCKIBR:6;
    };
  };
} typeRPINR12BITS;
sfr volatile typeRPINR12BITS RPINR12bits absolute 0x7A8;

typedef struct tagRPINR18BITS {
  union {
    struct {
      unsigned U1RXR:6;
      unsigned :2;
      unsigned U1CTSR:6;
    };
  };
} typeRPINR18BITS;
sfr volatile typeRPINR18BITS RPINR18bits absolute 0x7B4;

typedef struct tagRPINR19BITS {
  union {
    struct {
      unsigned U2RXR:6;
      unsigned :2;
      unsigned U2CTSR:6;
    };
  };
} typeRPINR19BITS;
sfr volatile typeRPINR19BITS RPINR19bits absolute 0x7B6;

typedef struct tagRPINR20BITS {
  union {
    struct {
      unsigned SDI1R:6;
      unsigned :2;
      unsigned SCK1R:6;
    };
  };
} typeRPINR20BITS;
sfr volatile typeRPINR20BITS RPINR20bits absolute 0x7B8;

typedef struct tagRPINR21BITS {
  union {
    struct {
      unsigned SS1R:6;
    };
  };
} typeRPINR21BITS;
sfr volatile typeRPINR21BITS RPINR21bits absolute 0x7BA;

typedef struct tagRPINR22BITS {
  union {
    struct {
      unsigned SDI2R:6;
      unsigned :2;
      unsigned SCK2R:6;
    };
  };
} typeRPINR22BITS;
sfr volatile typeRPINR22BITS RPINR22bits absolute 0x7BC;

typedef struct tagRPINR23BITS {
  union {
    struct {
      unsigned SS2R:6;
      unsigned :2;
      unsigned TXCKR:6;
    };
  };
} typeRPINR23BITS;
sfr volatile typeRPINR23BITS RPINR23bits absolute 0x7BE;

typedef struct tagRPINR25BITS {
  union {
    struct {
      unsigned CLCINAR:6;
      unsigned :2;
      unsigned CLCINBR:6;
    };
  };
} typeRPINR25BITS;
sfr volatile typeRPINR25BITS RPINR25bits absolute 0x7C2;

typedef struct tagRPINR28BITS {
  union {
    struct {
      unsigned SDI3R:6;
      unsigned :2;
      unsigned SCK3R:6;
    };
  };
} typeRPINR28BITS;
sfr volatile typeRPINR28BITS RPINR28bits absolute 0x7C8;

typedef struct tagRPINR29BITS {
  union {
    struct {
      unsigned SS3R:6;
    };
  };
} typeRPINR29BITS;
sfr volatile typeRPINR29BITS RPINR29bits absolute 0x7CA;

typedef struct tagRPOR0BITS {
  union {
    struct {
      unsigned RP0R:7;
      unsigned :1;
      unsigned RP1R:7;
    };
  };
} typeRPOR0BITS;
sfr volatile typeRPOR0BITS RPOR0bits absolute 0x7D4;

typedef struct tagRPOR1BITS {
  union {
    struct {
      unsigned RP2R:7;
      unsigned :1;
      unsigned RP3R:7;
    };
  };
} typeRPOR1BITS;
sfr volatile typeRPOR1BITS RPOR1bits absolute 0x7D6;

typedef struct tagRPOR2BITS {
  union {
    struct {
      unsigned RP4R:7;
      unsigned :1;
      unsigned RP5R:7;
    };
  };
} typeRPOR2BITS;
sfr volatile typeRPOR2BITS RPOR2bits absolute 0x7D8;

typedef struct tagRPOR3BITS {
  union {
    struct {
      unsigned RP6R:7;
      unsigned :1;
      unsigned RP7R:7;
    };
  };
} typeRPOR3BITS;
sfr volatile typeRPOR3BITS RPOR3bits absolute 0x7DA;

typedef struct tagRPOR4BITS {
  union {
    struct {
      unsigned RP8R:7;
      unsigned :1;
      unsigned RP9R:7;
    };
  };
} typeRPOR4BITS;
sfr volatile typeRPOR4BITS RPOR4bits absolute 0x7DC;

typedef struct tagRPOR5BITS {
  union {
    struct {
      unsigned RP10R:7;
      unsigned :1;
      unsigned RP11R:7;
    };
  };
} typeRPOR5BITS;
sfr volatile typeRPOR5BITS RPOR5bits absolute 0x7DE;

typedef struct tagRPOR6BITS {
  union {
    struct {
      unsigned RP12R:7;
      unsigned :1;
      unsigned RP13R:7;
    };
  };
} typeRPOR6BITS;
sfr volatile typeRPOR6BITS RPOR6bits absolute 0x7E0;

typedef struct tagRPOR7BITS {
  union {
    struct {
      unsigned RP14R:7;
      unsigned :1;
      unsigned RP15R:7;
    };
  };
} typeRPOR7BITS;
sfr volatile typeRPOR7BITS RPOR7bits absolute 0x7E2;

typedef struct tagRPOR8BITS {
  union {
    struct {
      unsigned RP16R:7;
      unsigned :1;
      unsigned RP17R:7;
    };
  };
} typeRPOR8BITS;
sfr volatile typeRPOR8BITS RPOR8bits absolute 0x7E4;

typedef struct tagRPOR9BITS {
  union {
    struct {
      unsigned RP18R:7;
      unsigned :1;
      unsigned RP19R:7;
    };
  };
} typeRPOR9BITS;
sfr volatile typeRPOR9BITS RPOR9bits absolute 0x7E6;

typedef struct tagRPOR10BITS {
  union {
    struct {
      unsigned RP20R:7;
      unsigned :1;
      unsigned RP21R:7;
    };
  };
} typeRPOR10BITS;
sfr volatile typeRPOR10BITS RPOR10bits absolute 0x7E8;

typedef struct tagRPOR11BITS {
  union {
    struct {
      unsigned RP22R:7;
      unsigned :1;
      unsigned RP23R:7;
    };
  };
} typeRPOR11BITS;
sfr volatile typeRPOR11BITS RPOR11bits absolute 0x7EA;

typedef struct tagRPOR12BITS {
  union {
    struct {
      unsigned RP24R:7;
      unsigned :1;
      unsigned RP25R:7;
    };
  };
} typeRPOR12BITS;
sfr volatile typeRPOR12BITS RPOR12bits absolute 0x7EC;

typedef struct tagRPOR13BITS {
  union {
    struct {
      unsigned RP26R:7;
      unsigned :1;
      unsigned RP27R:7;
    };
  };
} typeRPOR13BITS;
sfr volatile typeRPOR13BITS RPOR13bits absolute 0x7EE;

typedef struct tagRPOR14BITS {
  union {
    struct {
      unsigned RP28R:7;
      unsigned :1;
      unsigned RP29R:7;
    };
  };
} typeRPOR14BITS;
sfr volatile typeRPOR14BITS RPOR14bits absolute 0x7F0;

