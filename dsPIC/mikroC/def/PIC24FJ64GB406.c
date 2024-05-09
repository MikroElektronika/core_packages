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

const unsigned long __FLASH_SIZE = 0x0000AF80;
const unsigned long __XRAM_RAM_SIZE = 0x00001FFF;
const unsigned long __XRAM_RAM_START = 0x800;
const long __CONST_FAR_PREFIX = 0x0;
const char __FOSC_PER_CYC = 2;

// Primary Interrupt Vector Table Constants

const unsigned IVT_ADDR_OSCILLATORFAIL       = 0x0004;
const unsigned IVT_ADDR_ADDRESSERROR         = 0x0006;
const unsigned IVT_ADDR_GENERALHARDERROR     = 0x0008;
const unsigned IVT_ADDR_STACKERROR           = 0x000A;
const unsigned IVT_ADDR_MATHERROR            = 0x000C;
const unsigned IVT_ADDR_RESERVEDTRAP5        = 0x000E;
const unsigned IVT_ADDR_GENERALSOFTERROR     = 0x0010;
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
const unsigned IVT_ADDR_CNINTERRUPT          = 0x003A;
const unsigned IVT_ADDR_INT1INTERRUPT        = 0x003C;
const unsigned IVT_ADDR_INTERRUPT21          = 0x003E;
const unsigned IVT_ADDR_CCP5INTERRUPT        = 0x0040;
const unsigned IVT_ADDR_CCP6INTERRUPT        = 0x0042;
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
const unsigned IVT_ADDR_CRYPTOBUFFERREADYINTERRUPT = 0x0058;
const unsigned IVT_ADDR_CRYPTOROLLOVERINTERRUPT = 0x005A;
const unsigned IVT_ADDR_DMA3INTERRUPT        = 0x005C;
const unsigned IVT_ADDR_IC3INTERRUPT         = 0x005E;
const unsigned IVT_ADDR_IC4INTERRUPT         = 0x0060;
const unsigned IVT_ADDR_IC5INTERRUPT         = 0x0062;
const unsigned IVT_ADDR_IC6INTERRUPT         = 0x0064;
const unsigned IVT_ADDR_OC5INTERRUPT         = 0x0066;
const unsigned IVT_ADDR_OC6INTERRUPT         = 0x0068;
const unsigned IVT_ADDR_CCT3INTERRUPT        = 0x006A;
const unsigned IVT_ADDR_CCT4INTERRUPT        = 0x006C;
const unsigned IVT_ADDR_PMPINTERRUPT         = 0x006E;
const unsigned IVT_ADDR_DMA4INTERRUPT        = 0x0070;
const unsigned IVT_ADDR_CCT5INTERRUPT        = 0x0072;
const unsigned IVT_ADDR_CCT6INTERRUPT        = 0x0074;
const unsigned IVT_ADDR_SI2C2INTERRUPT       = 0x0076;
const unsigned IVT_ADDR_MI2C2INTERRUPT       = 0x0078;
const unsigned IVT_ADDR_CCT7INTERRUPT        = 0x007A;
const unsigned IVT_ADDR_INTERRUPT52          = 0x007C;
const unsigned IVT_ADDR_INT3INTERRUPT        = 0x007E;
const unsigned IVT_ADDR_INT4INTERRUPT        = 0x0080;
const unsigned IVT_ADDR_CRYPTOINTERRUPT      = 0x0082;
const unsigned IVT_ADDR_CRYPTOKEYINTERRUPT   = 0x0084;
const unsigned IVT_ADDR_SPI4RXINTERRUPT      = 0x0086;
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
const unsigned IVT_ADDR_DMA6INTERRUPT        = 0x009C;
const unsigned IVT_ADDR_DMA7INTERRUPT        = 0x009E;
const unsigned IVT_ADDR_SI2C3INTERRUPT       = 0x00A0;
const unsigned IVT_ADDR_MI2C3INTERRUPT       = 0x00A2;
const unsigned IVT_ADDR_LVDINTERRUPT         = 0x00A4;
const unsigned IVT_ADDR_CCP7INTERRUPT        = 0x00A6;
const unsigned IVT_ADDR_INTERRUPT74          = 0x00A8;
const unsigned IVT_ADDR_INTERRUPT75          = 0x00AA;
const unsigned IVT_ADDR_INTERRUPT76          = 0x00AC;
const unsigned IVT_ADDR_CTMUINTERRUPT        = 0x00AE;
const unsigned IVT_ADDR_DAC1INTERRUPT        = 0x00B0;
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
const unsigned IVT_ADDR_SPI4INTERRUPT        = 0x00CC;
const unsigned IVT_ADDR_SPI4TXINTERRUPT      = 0x00CE;
const unsigned IVT_ADDR_CCP3INTERRUPT        = 0x00D0;
const unsigned IVT_ADDR_CCP4INTERRUPT        = 0x00D2;
const unsigned IVT_ADDR_CLC1INTERRUPT        = 0x00D4;
const unsigned IVT_ADDR_CLC2INTERRUPT        = 0x00D6;
const unsigned IVT_ADDR_CLC3INTERRUPT        = 0x00D8;
const unsigned IVT_ADDR_CLC4INTERRUPT        = 0x00DA;
const unsigned IVT_ADDR_LCDINTERRUPT         = 0x00DC;
const unsigned IVT_ADDR_CCT1INTERRUPT        = 0x00DE;
const unsigned IVT_ADDR_CCT2INTERRUPT        = 0x00E0;
const unsigned IVT_ADDR_INTERRUPT103         = 0x00E2;
const unsigned IVT_ADDR_INTERRUPT104         = 0x00E4;
const unsigned IVT_ADDR_INTERRUPT105         = 0x00E6;
const unsigned IVT_ADDR_FSTINTERRUPT         = 0x00E8;
const unsigned IVT_ADDR_INTERRUPT107         = 0x00EA;
const unsigned IVT_ADDR_INTERRUPT108         = 0x00EC;
const unsigned IVT_ADDR_I2C3BCLINTERRUPT     = 0x00EE;
const unsigned IVT_ADDR_RTCCTSINTERRUPT      = 0x00F0;
const unsigned IVT_ADDR_U5RXINTERRUPT        = 0x00F2;
const unsigned IVT_ADDR_U5TXINTERRUPT        = 0x00F4;
const unsigned IVT_ADDR_U5ERRINTERRUPT       = 0x00F6;
const unsigned IVT_ADDR_U6RXINTERRUPT        = 0x00F8;
const unsigned IVT_ADDR_U6TXINTERRUPT        = 0x00FA;
const unsigned IVT_ADDR_U6ERRINTERRUPT       = 0x00FC;
const unsigned IVT_ADDR_JTAGINTERRUPT        = 0x00FE;

// Alternate Interrupt Vector Table Constants

const unsigned AIVT_ADDR_ALTRESERVEDTRAP0     = 0x0800;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP1     = 0x0802;
const unsigned AIVT_ADDR_ALTOSCILLATORFAIL    = 0x0804;
const unsigned AIVT_ADDR_ALTADDRESSERROR      = 0x0806;
const unsigned AIVT_ADDR_ALTGENERALHARDERROR  = 0x0808;
const unsigned AIVT_ADDR_ALTSTACKERROR        = 0x080A;
const unsigned AIVT_ADDR_ALTMATHERROR         = 0x080C;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP5     = 0x080E;
const unsigned AIVT_ADDR_ALTGENERALSOFTERROR  = 0x0810;
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
const unsigned AIVT_ADDR_ALTCNINTERRUPT       = 0x083A;
const unsigned AIVT_ADDR_ALTINT1INTERRUPT     = 0x083C;
const unsigned AIVT_ADDR_ALTINTERRUPT21       = 0x083E;
const unsigned AIVT_ADDR_ALTCCP5INTERRUPT     = 0x0840;
const unsigned AIVT_ADDR_ALTCCP6INTERRUPT     = 0x0842;
const unsigned AIVT_ADDR_ALTDMA2INTERRUPT     = 0x0844;
const unsigned AIVT_ADDR_ALTOC3INTERRUPT      = 0x0846;
const unsigned AIVT_ADDR_ALTOC4INTERRUPT      = 0x0848;
const unsigned AIVT_ADDR_ALTT4INTERRUPT       = 0x084A;
const unsigned AIVT_ADDR_ALTT5INTERRUPT       = 0x084C;
const unsigned AIVT_ADDR_ALTINT2INTERRUPT     = 0x084E;
const unsigned AIVT_ADDR_ALTU2RXINTERRUPT     = 0x0850;
const unsigned AIVT_ADDR_ALTU2TXINTERRUPT     = 0x0852;
const unsigned AIVT_ADDR_ALTSPI2INTERRUPT     = 0x0854;
const unsigned AIVT_ADDR_ALTSPI2TXINTERRUPT   = 0x0856;
const unsigned AIVT_ADDR_ALTCRYPTOBUFFERREADYINTERRUPT = 0x0858;
const unsigned AIVT_ADDR_ALTCRYPTOROLLOVERINTERRUPT = 0x085A;
const unsigned AIVT_ADDR_ALTDMA3INTERRUPT     = 0x085C;
const unsigned AIVT_ADDR_ALTIC3INTERRUPT      = 0x085E;
const unsigned AIVT_ADDR_ALTIC4INTERRUPT      = 0x0860;
const unsigned AIVT_ADDR_ALTIC5INTERRUPT      = 0x0862;
const unsigned AIVT_ADDR_ALTIC6INTERRUPT      = 0x0864;
const unsigned AIVT_ADDR_ALTOC5INTERRUPT      = 0x0866;
const unsigned AIVT_ADDR_ALTOC6INTERRUPT      = 0x0868;
const unsigned AIVT_ADDR_ALTCCT3INTERRUPT     = 0x086A;
const unsigned AIVT_ADDR_ALTCCT4INTERRUPT     = 0x086C;
const unsigned AIVT_ADDR_ALTPMPINTERRUPT      = 0x086E;
const unsigned AIVT_ADDR_ALTDMA4INTERRUPT     = 0x0870;
const unsigned AIVT_ADDR_ALTCCT5INTERRUPT     = 0x0872;
const unsigned AIVT_ADDR_ALTCCT6INTERRUPT     = 0x0874;
const unsigned AIVT_ADDR_ALTSI2C2INTERRUPT    = 0x0876;
const unsigned AIVT_ADDR_ALTMI2C2INTERRUPT    = 0x0878;
const unsigned AIVT_ADDR_ALTCCT7INTERRUPT     = 0x087A;
const unsigned AIVT_ADDR_ALTINTERRUPT52       = 0x087C;
const unsigned AIVT_ADDR_ALTINT3INTERRUPT     = 0x087E;
const unsigned AIVT_ADDR_ALTINT4INTERRUPT     = 0x0880;
const unsigned AIVT_ADDR_ALTCRYPTOINTERRUPT   = 0x0882;
const unsigned AIVT_ADDR_ALTCRYPTOKEYINTERRUPT = 0x0884;
const unsigned AIVT_ADDR_ALTSPI4RXINTERRUPT   = 0x0886;
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
const unsigned AIVT_ADDR_ALTDMA6INTERRUPT     = 0x089C;
const unsigned AIVT_ADDR_ALTDMA7INTERRUPT     = 0x089E;
const unsigned AIVT_ADDR_ALTSI2C3INTERRUPT    = 0x08A0;
const unsigned AIVT_ADDR_ALTMI2C3INTERRUPT    = 0x08A2;
const unsigned AIVT_ADDR_ALTLVDINTERRUPT      = 0x08A4;
const unsigned AIVT_ADDR_ALTCCP7INTERRUPT     = 0x08A6;
const unsigned AIVT_ADDR_ALTINTERRUPT74       = 0x08A8;
const unsigned AIVT_ADDR_ALTINTERRUPT75       = 0x08AA;
const unsigned AIVT_ADDR_ALTINTERRUPT76       = 0x08AC;
const unsigned AIVT_ADDR_ALTCTMUINTERRUPT     = 0x08AE;
const unsigned AIVT_ADDR_ALTDAC1INTERRUPT     = 0x08B0;
const unsigned AIVT_ADDR_ALTINTERRUPT79       = 0x08B2;
const unsigned AIVT_ADDR_ALTINTERRUPT80       = 0x08B4;
const unsigned AIVT_ADDR_ALTU3ERRINTERRUPT    = 0x08B6;
const unsigned AIVT_ADDR_ALTU3RXINTERRUPT     = 0x08B8;
const unsigned AIVT_ADDR_ALTU3TXINTERRUPT     = 0x08BA;
const unsigned AIVT_ADDR_ALTI2C1BCLINTERRUPT  = 0x08BC;
const unsigned AIVT_ADDR_ALTI2C2BCLINTERRUPT  = 0x08BE;
const unsigned AIVT_ADDR_ALTUSB1INTERRUPT     = 0x08C0;
const unsigned AIVT_ADDR_ALTU4ERRINTERRUPT    = 0x08C2;
const unsigned AIVT_ADDR_ALTU4RXINTERRUPT     = 0x08C4;
const unsigned AIVT_ADDR_ALTU4TXINTERRUPT     = 0x08C6;
const unsigned AIVT_ADDR_ALTSPI3INTERRUPT     = 0x08C8;
const unsigned AIVT_ADDR_ALTSPI3TXINTERRUPT   = 0x08CA;
const unsigned AIVT_ADDR_ALTSPI4INTERRUPT     = 0x08CC;
const unsigned AIVT_ADDR_ALTSPI4TXINTERRUPT   = 0x08CE;
const unsigned AIVT_ADDR_ALTCCP3INTERRUPT     = 0x08D0;
const unsigned AIVT_ADDR_ALTCCP4INTERRUPT     = 0x08D2;
const unsigned AIVT_ADDR_ALTCLC1INTERRUPT     = 0x08D4;
const unsigned AIVT_ADDR_ALTCLC2INTERRUPT     = 0x08D6;
const unsigned AIVT_ADDR_ALTCLC3INTERRUPT     = 0x08D8;
const unsigned AIVT_ADDR_ALTCLC4INTERRUPT     = 0x08DA;
const unsigned AIVT_ADDR_ALTLCDINTERRUPT      = 0x08DC;
const unsigned AIVT_ADDR_ALTCCT1INTERRUPT     = 0x08DE;
const unsigned AIVT_ADDR_ALTCCT2INTERRUPT     = 0x08E0;
const unsigned AIVT_ADDR_ALTINTERRUPT103      = 0x08E2;
const unsigned AIVT_ADDR_ALTINTERRUPT104      = 0x08E4;
const unsigned AIVT_ADDR_ALTINTERRUPT105      = 0x08E6;
const unsigned AIVT_ADDR_ALTFSTINTERRUPT      = 0x08E8;
const unsigned AIVT_ADDR_ALTINTERRUPT107      = 0x08EA;
const unsigned AIVT_ADDR_ALTINTERRUPT108      = 0x08EC;
const unsigned AIVT_ADDR_ALTI2C3BCLINTERRUPT  = 0x08EE;
const unsigned AIVT_ADDR_ALTRTCCTSINTERRUPT   = 0x08F0;
const unsigned AIVT_ADDR_ALTU5RXINTERRUPT     = 0x08F2;
const unsigned AIVT_ADDR_ALTU5TXINTERRUPT     = 0x08F4;
const unsigned AIVT_ADDR_ALTU5ERRINTERRUPT    = 0x08F6;
const unsigned AIVT_ADDR_ALTU6RXINTERRUPT     = 0x08F8;
const unsigned AIVT_ADDR_ALTU6TXINTERRUPT     = 0x08FA;
const unsigned AIVT_ADDR_ALTU6ERRINTERRUPT    = 0x08FC;
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
    const register unsigned short int ALTIVT = 8;
    sbit  ALTIVT_bit at INTCON2.B8;
    const register unsigned short int SWTRAP = 13;
    sbit  SWTRAP_bit at INTCON2.B13;
    const register unsigned short int DISI = 14;
    sbit  DISI_bit at INTCON2.B14;
    const register unsigned short int GIE = 15;
    sbit  GIE_bit at INTCON2.B15;

sfr unsigned int   volatile INTCON3          absolute 0x84;
sfr unsigned int   volatile INTCON4          absolute 0x86;
    const register unsigned short int SGHT = 0;
    sbit  SGHT_bit at INTCON4.B0;

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
    const register unsigned short int CNIF = 3;
    sbit  CNIF_bit at IFS1.B3;
    const register unsigned short int INT1IF = 4;
    sbit  INT1IF_bit at IFS1.B4;
    const register unsigned short int CCP5IF = 6;
    sbit  CCP5IF_bit at IFS1.B6;
    const register unsigned short int CCP6IF = 7;
    sbit  CCP6IF_bit at IFS1.B7;
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

sfr unsigned int   volatile IFS2             absolute 0x8C;
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
    const register unsigned short int CCT3IF = 11;
    sbit  CCT3IF_bit at IFS2.B11;
    const register unsigned short int CCT4IF = 12;
    sbit  CCT4IF_bit at IFS2.B12;
    const register unsigned short int PMPIF = 13;
    sbit  PMPIF_bit at IFS2.B13;
    const register unsigned short int DMA4IF = 14;
    sbit  DMA4IF_bit at IFS2.B14;
    const register unsigned short int CCT5IF = 15;
    sbit  CCT5IF_bit at IFS2.B15;

sfr unsigned int   volatile IFS3             absolute 0x8E;
    const register unsigned short int CCT6IF = 0;
    sbit  CCT6IF_bit at IFS3.B0;
    const register unsigned short int SI2C2IF = 1;
    sbit  SI2C2IF_bit at IFS3.B1;
    const register unsigned short int MI2C2IF = 2;
    sbit  MI2C2IF_bit at IFS3.B2;
    const register unsigned short int CCT7IF = 3;
    sbit  CCT7IF_bit at IFS3.B3;
    const register unsigned short int INT3IF = 5;
    sbit  INT3IF_bit at IFS3.B5;
    const register unsigned short int INT4IF = 6;
    sbit  INT4IF_bit at IFS3.B6;
    const register unsigned short int CRYDNIF = 7;
    sbit  CRYDNIF_bit at IFS3.B7;
    const register unsigned short int KEYSTRIF = 8;
    sbit  KEYSTRIF_bit at IFS3.B8;
    const register unsigned short int SPI4RXIF = 9;
    sbit  SPI4RXIF_bit at IFS3.B9;
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
    const register unsigned short int SI2C3IF = 6;
    sbit  SI2C3IF_bit at IFS4.B6;
    const register unsigned short int MI2C3IF = 7;
    sbit  MI2C3IF_bit at IFS4.B7;
    const register unsigned short int LVDIF = 8;
    sbit  LVDIF_bit at IFS4.B8;
    const register unsigned short int CCP7IF = 9;
    sbit  CCP7IF_bit at IFS4.B9;
    const register unsigned short int CTMUIF = 13;
    sbit  CTMUIF_bit at IFS4.B13;
    const register unsigned short int DAC1IF = 14;
    sbit  DAC1IF_bit at IFS4.B14;

sfr unsigned int   volatile IFS5             absolute 0x92;
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
    const register unsigned short int USB1IF = 6;
    sbit  USB1IF_bit at IFS5.B6;
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
    const register unsigned short int SPI4IF = 12;
    sbit  SPI4IF_bit at IFS5.B12;
    const register unsigned short int SPI4TXIF = 13;
    sbit  SPI4TXIF_bit at IFS5.B13;
    const register unsigned short int CCP3IF = 14;
    sbit  CCP3IF_bit at IFS5.B14;
    const register unsigned short int CCP4IF = 15;
    sbit  CCP4IF_bit at IFS5.B15;

sfr unsigned int   volatile IFS6             absolute 0x94;
    const register unsigned short int CLC1IF = 0;
    sbit  CLC1IF_bit at IFS6.B0;
    const register unsigned short int CLC2IF = 1;
    sbit  CLC2IF_bit at IFS6.B1;
    const register unsigned short int CLC3IF = 2;
    sbit  CLC3IF_bit at IFS6.B2;
    const register unsigned short int CLC4IF = 3;
    sbit  CLC4IF_bit at IFS6.B3;
    const register unsigned short int LCDIF = 4;
    sbit  LCDIF_bit at IFS6.B4;
    const register unsigned short int CCT1IF = 5;
    sbit  CCT1IF_bit at IFS6.B5;
    const register unsigned short int CCT2IF = 6;
    sbit  CCT2IF_bit at IFS6.B6;
    const register unsigned short int FSTIF = 10;
    sbit  FSTIF_bit at IFS6.B10;
    const register unsigned short int I2C3BCIF = 13;
    sbit  I2C3BCIF_bit at IFS6.B13;
    const register unsigned short int RTCCTSIF = 14;
    sbit  RTCCTSIF_bit at IFS6.B14;
    const register unsigned short int U5RXIF = 15;
    sbit  U5RXIF_bit at IFS6.B15;

sfr unsigned int   volatile IFS7             absolute 0x96;
    const register unsigned short int U5TXIF = 0;
    sbit  U5TXIF_bit at IFS7.B0;
    const register unsigned short int U5ERIF = 1;
    sbit  U5ERIF_bit at IFS7.B1;
    const register unsigned short int U6RXIF = 2;
    sbit  U6RXIF_bit at IFS7.B2;
    const register unsigned short int U6TXIF = 3;
    sbit  U6TXIF_bit at IFS7.B3;
    const register unsigned short int U6ERIF = 4;
    sbit  U6ERIF_bit at IFS7.B4;
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
    const register unsigned short int CNIE = 3;
    sbit  CNIE_bit at IEC1.B3;
    const register unsigned short int INT1IE = 4;
    sbit  INT1IE_bit at IEC1.B4;
    const register unsigned short int CCP5IE = 6;
    sbit  CCP5IE_bit at IEC1.B6;
    const register unsigned short int CCP6IE = 7;
    sbit  CCP6IE_bit at IEC1.B7;
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

sfr unsigned int            IEC2             absolute 0x9C;
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
    const register unsigned short int CCT3IE = 11;
    sbit  CCT3IE_bit at IEC2.B11;
    const register unsigned short int CCT4IE = 12;
    sbit  CCT4IE_bit at IEC2.B12;
    const register unsigned short int PMPIE = 13;
    sbit  PMPIE_bit at IEC2.B13;
    const register unsigned short int DMA4IE = 14;
    sbit  DMA4IE_bit at IEC2.B14;
    const register unsigned short int CCT5IE = 15;
    sbit  CCT5IE_bit at IEC2.B15;

sfr unsigned int            IEC3             absolute 0x9E;
    const register unsigned short int CCT6IE = 0;
    sbit  CCT6IE_bit at IEC3.B0;
    const register unsigned short int SI2C2IE = 1;
    sbit  SI2C2IE_bit at IEC3.B1;
    const register unsigned short int MI2C2IE = 2;
    sbit  MI2C2IE_bit at IEC3.B2;
    const register unsigned short int CCT7IE = 3;
    sbit  CCT7IE_bit at IEC3.B3;
    const register unsigned short int INT3IE = 5;
    sbit  INT3IE_bit at IEC3.B5;
    const register unsigned short int INT4IE = 6;
    sbit  INT4IE_bit at IEC3.B6;
    const register unsigned short int CRYDNIE = 7;
    sbit  CRYDNIE_bit at IEC3.B7;
    const register unsigned short int KEYSTRIE = 8;
    sbit  KEYSTRIE_bit at IEC3.B8;
    const register unsigned short int SPI4RXIE = 9;
    sbit  SPI4RXIE_bit at IEC3.B9;
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
    const register unsigned short int SI2C3IE = 6;
    sbit  SI2C3IE_bit at IEC4.B6;
    const register unsigned short int MI2C3IE = 7;
    sbit  MI2C3IE_bit at IEC4.B7;
    const register unsigned short int LVDIE = 8;
    sbit  LVDIE_bit at IEC4.B8;
    const register unsigned short int CCP7IE = 9;
    sbit  CCP7IE_bit at IEC4.B9;
    const register unsigned short int CTMUIE = 13;
    sbit  CTMUIE_bit at IEC4.B13;
    const register unsigned short int DAC1IE = 14;
    sbit  DAC1IE_bit at IEC4.B14;

sfr unsigned int            IEC5             absolute 0xA2;
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
    const register unsigned short int USB1IE = 6;
    sbit  USB1IE_bit at IEC5.B6;
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
    const register unsigned short int SPI4IE = 12;
    sbit  SPI4IE_bit at IEC5.B12;
    const register unsigned short int SPI4TXIE = 13;
    sbit  SPI4TXIE_bit at IEC5.B13;
    const register unsigned short int CCP3IE = 14;
    sbit  CCP3IE_bit at IEC5.B14;
    const register unsigned short int CCP4IE = 15;
    sbit  CCP4IE_bit at IEC5.B15;

sfr unsigned int   volatile IEC6             absolute 0xA4;
    const register unsigned short int CLC1IE = 0;
    sbit  CLC1IE_bit at IEC6.B0;
    const register unsigned short int CLC2IE = 1;
    sbit  CLC2IE_bit at IEC6.B1;
    const register unsigned short int CLC3IE = 2;
    sbit  CLC3IE_bit at IEC6.B2;
    const register unsigned short int CLC4IE = 3;
    sbit  CLC4IE_bit at IEC6.B3;
    const register unsigned short int LCDIE = 4;
    sbit  LCDIE_bit at IEC6.B4;
    const register unsigned short int CCT1IE = 5;
    sbit  CCT1IE_bit at IEC6.B5;
    const register unsigned short int CCT2IE = 6;
    sbit  CCT2IE_bit at IEC6.B6;
    const register unsigned short int FSTIE = 10;
    sbit  FSTIE_bit at IEC6.B10;
    const register unsigned short int I2C3BCIE = 13;
    sbit  I2C3BCIE_bit at IEC6.B13;
    const register unsigned short int RTCCTSIE = 14;
    sbit  RTCCTSIE_bit at IEC6.B14;
    const register unsigned short int U5RXIE = 15;
    sbit  U5RXIE_bit at IEC6.B15;

sfr unsigned int   volatile IEC7             absolute 0xA6;
    const register unsigned short int U5TXIE = 0;
    sbit  U5TXIE_bit at IEC7.B0;
    const register unsigned short int U5ERIE = 1;
    sbit  U5ERIE_bit at IEC7.B1;
    const register unsigned short int U6RXIE = 2;
    sbit  U6RXIE_bit at IEC7.B2;
    const register unsigned short int U6TXIE = 3;
    sbit  U6TXIE_bit at IEC7.B3;
    const register unsigned short int U6ERIE = 4;
    sbit  U6ERIE_bit at IEC7.B4;
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

sfr unsigned int            IPC10            absolute 0xBC;
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
    const register unsigned short int CRYDNIP0 = 12;
    sbit  CRYDNIP0_bit at IPC13.B12;
    const register unsigned short int CRYDNIP1 = 13;
    sbit  CRYDNIP1_bit at IPC13.B13;
    const register unsigned short int CRYDNIP2 = 14;
    sbit  CRYDNIP2_bit at IPC13.B14;

sfr unsigned int            IPC14            absolute 0xC4;
    const register unsigned short int KEYSTRIP0 = 0;
    sbit  KEYSTRIP0_bit at IPC14.B0;
    const register unsigned short int KEYSTRIP1 = 1;
    sbit  KEYSTRIP1_bit at IPC14.B1;
    const register unsigned short int KEYSTRIP2 = 2;
    sbit  KEYSTRIP2_bit at IPC14.B2;
    const register unsigned short int SPI4RXIP0 = 4;
    sbit  SPI4RXIP0_bit at IPC14.B4;
    const register unsigned short int SPI4RXIP1 = 5;
    sbit  SPI4RXIP1_bit at IPC14.B5;
    const register unsigned short int SPI4RXIP2 = 6;
    sbit  SPI4RXIP2_bit at IPC14.B6;
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
    const register unsigned short int DAC1IP0 = 8;
    sbit  DAC1IP0_bit at IPC19.B8;
    const register unsigned short int DAC1IP1 = 9;
    sbit  DAC1IP1_bit at IPC19.B9;
    const register unsigned short int DAC1IP2 = 10;
    sbit  DAC1IP2_bit at IPC19.B10;

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
    const register unsigned short int I2C1BCIP0 = 0;
    sbit  I2C1BCIP0_bit at IPC21.B0;
    const register unsigned short int I2C1BCIP1 = 1;
    sbit  I2C1BCIP1_bit at IPC21.B1;
    const register unsigned short int I2C1BCIP2 = 2;
    sbit  I2C1BCIP2_bit at IPC21.B2;
    const register unsigned short int I2C2BCIP0 = 4;
    sbit  I2C2BCIP0_bit at IPC21.B4;
    const register unsigned short int I2C2BCIP1 = 5;
    sbit  I2C2BCIP1_bit at IPC21.B5;
    const register unsigned short int I2C2BCIP2 = 6;
    sbit  I2C2BCIP2_bit at IPC21.B6;
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
    const register unsigned short int SPI4IP0 = 0;
    sbit  SPI4IP0_bit at IPC23.B0;
    const register unsigned short int SPI4IP1 = 1;
    sbit  SPI4IP1_bit at IPC23.B1;
    const register unsigned short int SPI4IP2 = 2;
    sbit  SPI4IP2_bit at IPC23.B2;
    const register unsigned short int SPI4TXIP0 = 4;
    sbit  SPI4TXIP0_bit at IPC23.B4;
    const register unsigned short int SPI4TXIP1 = 5;
    sbit  SPI4TXIP1_bit at IPC23.B5;
    const register unsigned short int SPI4TXIP2 = 6;
    sbit  SPI4TXIP2_bit at IPC23.B6;
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
    const register unsigned short int LCDIP0 = 0;
    sbit  LCDIP0_bit at IPC25.B0;
    const register unsigned short int LCDIP1 = 1;
    sbit  LCDIP1_bit at IPC25.B1;
    const register unsigned short int LCDIP2 = 2;
    sbit  LCDIP2_bit at IPC25.B2;
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

sfr unsigned int   volatile CLKDIV2          absolute 0x104;
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

sfr unsigned int   volatile RCON             absolute 0x10C;
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
    const register unsigned short int SBOREN = 13;
    sbit  SBOREN_bit at RCON.B13;
    const register unsigned short int IOPUWR = 14;
    sbit  IOPUWR_bit at RCON.B14;
    const register unsigned short int TRAPR = 15;
    sbit  TRAPR_bit at RCON.B15;
    const register unsigned short int PMSLP = 8;
    sbit  PMSLP_bit at RCON.B8;

sfr unsigned int   volatile RCON2            absolute 0x10E;
    const register unsigned short int VBAT = 0;
    sbit  VBAT_bit at RCON2.B0;
    const register unsigned short int VBPOR = 1;
    sbit  VBPOR_bit at RCON2.B1;
    const register unsigned short int VDDPOR = 2;
    sbit  VDDPOR_bit at RCON2.B2;
    const register unsigned short int VDDBOR = 3;
    sbit  VDDBOR_bit at RCON2.B3;

sfr unsigned int   volatile HLVDCON          absolute 0x110;
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

sfr unsigned int   volatile DSCON            absolute 0x112;
    const register unsigned short int RELEASE = 0;
    sbit  RELEASE_bit at DSCON.B0;
    const register unsigned short int DSBOR = 1;
    sbit  DSBOR_bit at DSCON.B1;
    const register unsigned short int WAKEDIS = 2;
    sbit  WAKEDIS_bit at DSCON.B2;
    const register unsigned short int KEYRAMEN = 11;
    sbit  KEYRAMEN_bit at DSCON.B11;
    const register unsigned short int RTCMD = 12;
    sbit  RTCMD_bit at DSCON.B12;
    const register unsigned short int DSEN = 15;
    sbit  DSEN_bit at DSCON.B15;

sfr unsigned int   volatile DSWAKE           absolute 0x114;
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

sfr unsigned int   volatile DSGPR0           absolute 0x116;
sfr unsigned int   volatile DSGPR1           absolute 0x118;
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

sfr unsigned int   volatile REFOTRIMH        absolute 0x16E;
sfr unsigned int            PMD1             absolute 0x178;
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

sfr unsigned int            PMD2             absolute 0x17A;
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

sfr unsigned int            PMD3             absolute 0x17C;
    const register unsigned short int I2C2MD = 1;
    sbit  I2C2MD_bit at PMD3.B1;
    const register unsigned short int I2C3MD = 2;
    sbit  I2C3MD_bit at PMD3.B2;
    const register unsigned short int U3MD = 3;
    sbit  U3MD_bit at PMD3.B3;
    const register unsigned short int DAC1MD = 6;
    sbit  DAC1MD_bit at PMD3.B6;
    const register unsigned short int CRCMD = 7;
    sbit  CRCMD_bit at PMD3.B7;
    const register unsigned short int PMPMD = 8;
    sbit  PMPMD_bit at PMD3.B8;
    const register unsigned short int CMPMD = 10;
    sbit  CMPMD_bit at PMD3.B10;
    const register unsigned short int CRCPMD = 7;
    sbit  CRCPMD_bit at PMD3.B7;

sfr unsigned int   volatile PMD4             absolute 0x17E;
    const register unsigned short int USB1MD = 0;
    sbit  USB1MD_bit at PMD4.B0;
    const register unsigned short int LVDMD = 1;
    sbit  LVDMD_bit at PMD4.B1;
    const register unsigned short int CTMUMD = 2;
    sbit  CTMUMD_bit at PMD4.B2;
    const register unsigned short int REFOMD = 3;
    sbit  REFOMD_bit at PMD4.B3;
    const register unsigned short int U4MD = 5;
    sbit  U4MD_bit at PMD4.B5;
    const register unsigned short int USBMD = 0;
    sbit  USBMD_bit at PMD4.B0;
    const register unsigned short int HLVDMD = 1;
    sbit  HLVDMD_bit at PMD4.B1;

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
    const register unsigned short int CCP6MD = 5;
    sbit  CCP6MD_bit at PMD5.B5;
    const register unsigned short int CCP7MD = 6;
    sbit  CCP7MD_bit at PMD5.B6;

sfr unsigned int   volatile PMD6             absolute 0x182;
    const register unsigned short int SPI3MD = 0;
    sbit  SPI3MD_bit at PMD6.B0;
    const register unsigned short int SPI4MD = 1;
    sbit  SPI4MD_bit at PMD6.B1;
    const register unsigned short int LCDMD = 6;
    sbit  LCDMD_bit at PMD6.B6;

sfr unsigned int   volatile PMD7             absolute 0x184;
    const register unsigned short int DMA0MD = 4;
    sbit  DMA0MD_bit at PMD7.B4;
    const register unsigned short int DMA1MD = 5;
    sbit  DMA1MD_bit at PMD7.B5;

sfr unsigned int   volatile PMD8             absolute 0x186;
    const register unsigned short int CRYMD = 0;
    sbit  CRYMD_bit at PMD8.B0;
    const register unsigned short int CLC1MD = 2;
    sbit  CLC1MD_bit at PMD8.B2;
    const register unsigned short int CLC2MD = 3;
    sbit  CLC2MD_bit at PMD8.B3;
    const register unsigned short int CLC3MD = 4;
    sbit  CLC3MD_bit at PMD8.B4;
    const register unsigned short int CLC4MD = 5;
    sbit  CLC4MD_bit at PMD8.B5;
    const register unsigned short int U5MD = 6;
    sbit  U5MD_bit at PMD8.B6;
    const register unsigned short int U6MD = 7;
    sbit  U6MD_bit at PMD8.B7;

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
sfr unsigned int   volatile TMR4             absolute 0x1A4;
sfr unsigned int   volatile TMR5HLD          absolute 0x1A6;
sfr unsigned int   volatile TMR5             absolute 0x1A8;
sfr unsigned int   volatile PR4              absolute 0x1AA;
sfr unsigned int   volatile PR5              absolute 0x1AC;
sfr unsigned int   volatile T4CON            absolute 0x1AE;
    const register unsigned short int T32_T4CON = 3;
    sbit  T32_T4CON_bit at T4CON.B3;

sfr unsigned int   volatile T5CON            absolute 0x1B0;
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

sfr unsigned int   volatile CTMUCON2         absolute 0x1C4;
    const register unsigned short int DISCHS0 = 0;
    sbit  DISCHS0_bit at CTMUCON2.B0;
    const register unsigned short int DISCHS1 = 1;
    sbit  DISCHS1_bit at CTMUCON2.B1;
    const register unsigned short int DISCHS2 = 2;
    sbit  DISCHS2_bit at CTMUCON2.B2;
    const register unsigned short int IRSTEN = 4;
    sbit  IRSTEN_bit at CTMUCON2.B4;

sfr unsigned int   volatile CTMUCON2L        absolute 0x1C4;
sfr unsigned int   volatile CTMUCON2H        absolute 0x1C6;
sfr unsigned int   volatile RTCCON1L         absolute 0x1CC;
    const register unsigned short int TSAEN = 0;
    sbit  TSAEN_bit at RTCCON1L.B0;
    const register unsigned short int TSBEN = 1;
    sbit  TSBEN_bit at RTCCON1L.B1;
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
sfr unsigned int   volatile RTCCON3H         absolute 0x1D6;
sfr unsigned int   volatile RTCSTATL         absolute 0x1D8;
    const register unsigned short int HALFSEC = 0;
    sbit  HALFSEC_bit at RTCSTATL.B0;
    const register unsigned short int ALMSYNC = 1;
    sbit  ALMSYNC_bit at RTCSTATL.B1;
    const register unsigned short int SYNC_RTCSTATL = 2;
    sbit  SYNC_RTCSTATL_bit at RTCSTATL.B2;
    const register unsigned short int TSAEVT = 3;
    sbit  TSAEVT_bit at RTCSTATL.B3;
    const register unsigned short int TSBEVT = 4;
    sbit  TSBEVT_bit at RTCSTATL.B4;
    const register unsigned short int ALMEVT = 5;
    sbit  ALMEVT_bit at RTCSTATL.B5;
    const register unsigned short int CPLCK = 7;
    sbit  CPLCK_bit at RTCSTATL.B7;

sfr unsigned int   volatile RTCSTATH         absolute 0x1DA;
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
sfr unsigned int   volatile TSBTIMEL         absolute 0x1F4;
sfr unsigned int   volatile TSBTIMEH         absolute 0x1F6;
sfr unsigned int   volatile TSBDATEL         absolute 0x1F8;
sfr unsigned int   volatile TSBDATEH         absolute 0x1FA;
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
sfr unsigned int   volatile IC4CON1          absolute 0x218;
    const register unsigned short int ICBNE_IC4CON1 = 3;
    sbit  ICBNE_IC4CON1_bit at IC4CON1.B3;
    const register unsigned short int ICOV_IC4CON1 = 4;
    sbit  ICOV_IC4CON1_bit at IC4CON1.B4;

sfr unsigned int   volatile IC4CON2          absolute 0x21A;
sfr unsigned int   volatile IC4BUF           absolute 0x21C;
sfr unsigned int   volatile IC4TMR           absolute 0x21E;
sfr unsigned int   volatile IC5CON1          absolute 0x220;
    const register unsigned short int ICBNE_IC5CON1 = 3;
    sbit  ICBNE_IC5CON1_bit at IC5CON1.B3;
    const register unsigned short int ICOV_IC5CON1 = 4;
    sbit  ICOV_IC5CON1_bit at IC5CON1.B4;

sfr unsigned int   volatile IC5CON2          absolute 0x222;
sfr unsigned int   volatile IC5BUF           absolute 0x224;
sfr unsigned int   volatile IC5TMR           absolute 0x226;
sfr unsigned int   volatile IC6CON1          absolute 0x228;
    const register unsigned short int ICBNE_IC6CON1 = 3;
    sbit  ICBNE_IC6CON1_bit at IC6CON1.B3;
    const register unsigned short int ICOV_IC6CON1 = 4;
    sbit  ICOV_IC6CON1_bit at IC6CON1.B4;

sfr unsigned int   volatile IC6CON2          absolute 0x22A;
sfr unsigned int   volatile IC6BUF           absolute 0x22C;
sfr unsigned int   volatile IC6TMR           absolute 0x22E;
sfr unsigned int   volatile OC1CON1          absolute 0x230;
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
sfr unsigned int   volatile OC4CON1          absolute 0x24E;
sfr unsigned int   volatile OC4CON2          absolute 0x250;
sfr unsigned int            OC4RS            absolute 0x252;
sfr unsigned int   volatile OC4R             absolute 0x254;
sfr unsigned int   volatile OC4TMR           absolute 0x256;
sfr unsigned int   volatile OC5CON1          absolute 0x258;
sfr unsigned int   volatile OC5CON2          absolute 0x25A;
sfr unsigned int            OC5RS            absolute 0x25C;
sfr unsigned int   volatile OC5R             absolute 0x25E;
sfr unsigned int   volatile OC5TMR           absolute 0x260;
sfr unsigned int   volatile OC6CON1          absolute 0x262;
sfr unsigned int   volatile OC6CON2          absolute 0x264;
sfr unsigned int            OC6RS            absolute 0x266;
sfr unsigned int   volatile OC6R             absolute 0x268;
sfr unsigned int   volatile OC6TMR           absolute 0x26A;
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
sfr unsigned int   volatile CCP2CON3L        absolute 0x298;
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
sfr unsigned int   volatile CCP3CON3L        absolute 0x2BC;
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
    const register unsigned short int VBGEN = 0;
    sbit  VBGEN_bit at ANCFG.B0;
    const register unsigned short int VBG2EN = 1;
    sbit  VBG2EN_bit at ANCFG.B1;
    const register unsigned short int VBG3EN = 2;
    sbit  VBG3EN_bit at ANCFG.B2;
    const register unsigned short int VBG4EN = 3;
    sbit  VBG4EN_bit at ANCFG.B3;
    const register unsigned short int VBG5EN = 4;
    sbit  VBG5EN_bit at ANCFG.B4;
    const register unsigned short int VBG6EN = 5;
    sbit  VBG6EN_bit at ANCFG.B5;

sfr unsigned int            DAC1CON          absolute 0x2F8;
    const register unsigned short int DACOE = 7;
    sbit  DACOE_bit at DAC1CON.B7;
    const register unsigned short int DACTRIG = 8;
    sbit  DACTRIG_bit at DAC1CON.B8;
    const register unsigned short int DACFM = 11;
    sbit  DACFM_bit at DAC1CON.B11;
    const register unsigned short int DACSLP = 12;
    sbit  DACSLP_bit at DAC1CON.B12;
    const register unsigned short int DACSIDL = 13;
    sbit  DACSIDL_bit at DAC1CON.B13;
    const register unsigned short int DACEN = 15;
    sbit  DACEN_bit at DAC1CON.B15;

sfr unsigned int   volatile DAC1DAT          absolute 0x2FA;
sfr unsigned int   volatile CCP4CON1L        absolute 0x300;
    const register unsigned short int T32_CCP4CON1L = 5;
    sbit  T32_CCP4CON1L_bit at CCP4CON1L.B5;

sfr unsigned int   volatile CCP4CON1H        absolute 0x302;
sfr unsigned int   volatile CCP4CON2L        absolute 0x304;
sfr unsigned int   volatile CCP4CON2H        absolute 0x306;
sfr unsigned int   volatile CCP4CON3L        absolute 0x308;
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
sfr unsigned int   volatile CCP5CON1L        absolute 0x324;
    const register unsigned short int T32_CCP5CON1L = 5;
    sbit  T32_CCP5CON1L_bit at CCP5CON1L.B5;

sfr unsigned int   volatile CCP5CON1H        absolute 0x326;
sfr unsigned int   volatile CCP5CON2L        absolute 0x328;
sfr unsigned int   volatile CCP5CON2H        absolute 0x32A;
sfr unsigned int   volatile CCP5CON3L        absolute 0x32C;
sfr unsigned int   volatile CCP5CON3H        absolute 0x32E;
sfr unsigned int   volatile CCP5STAT         absolute 0x330;
    const register unsigned short int ICBNE_CCP5STAT = 0;
    sbit  ICBNE_CCP5STAT_bit at CCP5STAT.B0;
    const register unsigned short int ICOV_CCP5STAT = 1;
    sbit  ICOV_CCP5STAT_bit at CCP5STAT.B1;

sfr unsigned int   volatile CCP5STATL        absolute 0x330;
    const register unsigned short int ICBNE_CCP5STATL = 0;
    sbit  ICBNE_CCP5STATL_bit at CCP5STATL.B0;
    const register unsigned short int ICOV_CCP5STATL = 1;
    sbit  ICOV_CCP5STATL_bit at CCP5STATL.B1;

sfr unsigned int   volatile CCP5STATH        absolute 0x332;
sfr unsigned int   volatile CCP5TMRL         absolute 0x334;
sfr unsigned int   volatile CCP5TMRH         absolute 0x336;
sfr unsigned int   volatile CCP5PRL          absolute 0x338;
sfr unsigned int   volatile CCP5PRH          absolute 0x33A;
sfr unsigned int   volatile CCP5RA           absolute 0x33C;
sfr unsigned int   volatile CCP5RAL          absolute 0x33C;
sfr unsigned int   volatile CCP5RAH          absolute 0x33E;
sfr unsigned int   volatile CCP5RB           absolute 0x340;
sfr unsigned int   volatile CCP5RBL          absolute 0x340;
sfr unsigned int   volatile CCP5RBH          absolute 0x342;
sfr unsigned int   volatile CCP5BUFL         absolute 0x344;
sfr unsigned int   volatile CCP5BUFH         absolute 0x346;
sfr unsigned int   volatile CCP6CON1L        absolute 0x348;
    const register unsigned short int T32_CCP6CON1L = 5;
    sbit  T32_CCP6CON1L_bit at CCP6CON1L.B5;

sfr unsigned int   volatile CCP6CON1H        absolute 0x34A;
sfr unsigned int   volatile CCP6CON2L        absolute 0x34C;
sfr unsigned int   volatile CCP6CON2H        absolute 0x34E;
sfr unsigned int   volatile CCP6CON3L        absolute 0x350;
sfr unsigned int   volatile CCP6CON3H        absolute 0x352;
sfr unsigned int   volatile CCP6STAT         absolute 0x354;
    const register unsigned short int ICBNE_CCP6STAT = 0;
    sbit  ICBNE_CCP6STAT_bit at CCP6STAT.B0;
    const register unsigned short int ICOV_CCP6STAT = 1;
    sbit  ICOV_CCP6STAT_bit at CCP6STAT.B1;

sfr unsigned int   volatile CCP6STATL        absolute 0x354;
    const register unsigned short int ICBNE_CCP6STATL = 0;
    sbit  ICBNE_CCP6STATL_bit at CCP6STATL.B0;
    const register unsigned short int ICOV_CCP6STATL = 1;
    sbit  ICOV_CCP6STATL_bit at CCP6STATL.B1;

sfr unsigned int   volatile CCP6STATH        absolute 0x356;
sfr unsigned int   volatile CCP6TMRL         absolute 0x358;
sfr unsigned int   volatile CCP6TMRH         absolute 0x35A;
sfr unsigned int   volatile CCP6PRL          absolute 0x35C;
sfr unsigned int   volatile CCP6PRH          absolute 0x35E;
sfr unsigned int   volatile CCP6RA           absolute 0x360;
sfr unsigned int   volatile CCP6RAL          absolute 0x360;
sfr unsigned int   volatile CCP6RAH          absolute 0x362;
sfr unsigned int   volatile CCP6RB           absolute 0x364;
sfr unsigned int   volatile CCP6RBL          absolute 0x364;
sfr unsigned int   volatile CCP6RBH          absolute 0x366;
sfr unsigned int   volatile CCP6BUFL         absolute 0x368;
sfr unsigned int   volatile CCP6BUFH         absolute 0x36A;
sfr unsigned int   volatile CCP7CON1L        absolute 0x36C;
    const register unsigned short int T32_CCP7CON1L = 5;
    sbit  T32_CCP7CON1L_bit at CCP7CON1L.B5;

sfr unsigned int   volatile CCP7CON1H        absolute 0x36E;
sfr unsigned int   volatile CCP7CON2L        absolute 0x370;
sfr unsigned int   volatile CCP7CON2H        absolute 0x372;
sfr unsigned int   volatile CCP7CON3L        absolute 0x374;
sfr unsigned int   volatile CCP7CON3H        absolute 0x376;
sfr unsigned int   volatile CCP7STAT         absolute 0x378;
    const register unsigned short int ICBNE_CCP7STAT = 0;
    sbit  ICBNE_CCP7STAT_bit at CCP7STAT.B0;
    const register unsigned short int ICOV_CCP7STAT = 1;
    sbit  ICOV_CCP7STAT_bit at CCP7STAT.B1;

sfr unsigned int   volatile CCP7STATL        absolute 0x378;
    const register unsigned short int ICBNE_CCP7STATL = 0;
    sbit  ICBNE_CCP7STATL_bit at CCP7STATL.B0;
    const register unsigned short int ICOV_CCP7STATL = 1;
    sbit  ICOV_CCP7STATL_bit at CCP7STATL.B1;

sfr unsigned int   volatile CCP7STATH        absolute 0x37A;
sfr unsigned int   volatile CCP7TMRL         absolute 0x37C;
sfr unsigned int   volatile CCP7TMRH         absolute 0x37E;
sfr unsigned int   volatile CCP7PRL          absolute 0x380;
sfr unsigned int   volatile CCP7PRH          absolute 0x382;
sfr unsigned int   volatile CCP7RA           absolute 0x384;
sfr unsigned int   volatile CCP7RAL          absolute 0x384;
sfr unsigned int   volatile CCP7RAH          absolute 0x386;
sfr unsigned int   volatile CCP7RB           absolute 0x388;
sfr unsigned int   volatile CCP7RBL          absolute 0x388;
sfr unsigned int   volatile CCP7RBH          absolute 0x38A;
sfr unsigned int   volatile CCP7BUFL         absolute 0x38C;
sfr unsigned int   volatile CCP7BUFH         absolute 0x38E;
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

sfr unsigned int   volatile U1WTCH           absolute 0x3AA;
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

sfr unsigned int   volatile U1WTCL           absolute 0x3AC;
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

sfr unsigned int   volatile U2MODE           absolute 0x3AE;
sfr unsigned int   volatile U2STA            absolute 0x3B0;
sfr unsigned int            U2TXREG          absolute 0x3B2;
sfr unsigned int   volatile U2RXREG          absolute 0x3B4;
sfr unsigned int            U2BRG            absolute 0x3B6;
sfr unsigned int   volatile U2ADMD           absolute 0x3B8;
sfr unsigned int   volatile U2SCCON          absolute 0x3BA;
sfr unsigned int   volatile U2SCINT          absolute 0x3BC;
sfr unsigned int   volatile U2GTC            absolute 0x3BE;
sfr unsigned int   volatile U2WTCH           absolute 0x3C0;
sfr unsigned int   volatile U2WTCL           absolute 0x3C2;
sfr unsigned int   volatile U3MODE           absolute 0x3C4;
sfr unsigned int   volatile U3STA            absolute 0x3C6;
sfr unsigned int            U3TXREG          absolute 0x3C8;
sfr unsigned int   volatile U3RXREG          absolute 0x3CA;
sfr unsigned int            U3BRG            absolute 0x3CC;
sfr unsigned int   volatile U3ADMD           absolute 0x3CE;
sfr unsigned int   volatile U4MODE           absolute 0x3D0;
sfr unsigned int   volatile U4STA            absolute 0x3D2;
sfr unsigned int            U4TXREG          absolute 0x3D4;
sfr unsigned int   volatile U4RXREG          absolute 0x3D6;
sfr unsigned int            U4BRG            absolute 0x3D8;
sfr unsigned int   volatile U4ADMD           absolute 0x3DA;
sfr unsigned int   volatile U5MODE           absolute 0x3DC;
sfr unsigned int   volatile U5STA            absolute 0x3DE;
sfr unsigned int   volatile U5TXREG          absolute 0x3E0;
sfr unsigned int   volatile U5RXREG          absolute 0x3E2;
sfr unsigned int   volatile U5BRG            absolute 0x3E4;
sfr unsigned int   volatile U5ADMD           absolute 0x3E6;
sfr unsigned int   volatile U6MODE           absolute 0x3E8;
sfr unsigned int   volatile U6STA            absolute 0x3EA;
sfr unsigned int   volatile U6TXREG          absolute 0x3EC;
sfr unsigned int   volatile U6RXREG          absolute 0x3EE;
sfr unsigned int   volatile U6BRG            absolute 0x3F0;
sfr unsigned int   volatile U6ADMD           absolute 0x3F2;
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
sfr unsigned int   volatile SPI1CON2H        absolute 0x3FA;
sfr unsigned int   volatile SPI1CON4         absolute 0x3FA;
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
sfr unsigned int   volatile SPI1BRGH         absolute 0x406;
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
sfr unsigned int   volatile SPI2CON2H        absolute 0x416;
sfr unsigned int   volatile SPI2CON4         absolute 0x416;
sfr unsigned int   volatile SPI2STATL        absolute 0x418;
sfr unsigned int   volatile SPI2STATH        absolute 0x41A;
sfr unsigned int   volatile SPI2BUFL         absolute 0x41C;
sfr unsigned int   volatile SPI2BUFH         absolute 0x41E;
sfr unsigned int   volatile SPI2BRGL         absolute 0x420;
sfr unsigned int   volatile SPI2BRGH         absolute 0x422;
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
sfr unsigned int   volatile SPI3CON2H        absolute 0x432;
sfr unsigned int   volatile SPI3CON4         absolute 0x432;
sfr unsigned int   volatile SPI3STATL        absolute 0x434;
sfr unsigned int   volatile SPI3STATH        absolute 0x436;
sfr unsigned int   volatile SPI3BUFL         absolute 0x438;
sfr unsigned int   volatile SPI3BUFH         absolute 0x43A;
sfr unsigned int   volatile SPI3BRGL         absolute 0x43C;
sfr unsigned int   volatile SPI3BRGH         absolute 0x43E;
sfr unsigned int   volatile SPI3IMSK1        absolute 0x440;
sfr unsigned int   volatile SPI3IMSKL        absolute 0x440;
sfr unsigned int   volatile SPI3IMSK2        absolute 0x442;
sfr unsigned int   volatile SPI3IMSKH        absolute 0x442;
sfr unsigned int   volatile SPI3URDTL        absolute 0x444;
sfr unsigned int   volatile SPI3URDTH        absolute 0x446;
sfr unsigned int   volatile SPI4CON1         absolute 0x448;
sfr unsigned int   volatile SPI4CON1L        absolute 0x448;
sfr unsigned int   volatile SPI4CON1H        absolute 0x44A;
sfr unsigned int   volatile SPI4CON2         absolute 0x44A;
sfr unsigned int   volatile SPI4CON2L        absolute 0x44C;
sfr unsigned int   volatile SPI4CON3         absolute 0x44C;
sfr unsigned int   volatile SPI4CON2H        absolute 0x44E;
sfr unsigned int   volatile SPI4CON4         absolute 0x44E;
sfr unsigned int   volatile SPI4STATL        absolute 0x450;
sfr unsigned int   volatile SPI4STATH        absolute 0x452;
sfr unsigned int   volatile SPI4BUFL         absolute 0x454;
sfr unsigned int   volatile SPI4BUFH         absolute 0x456;
sfr unsigned int   volatile SPI4BRGL         absolute 0x458;
sfr unsigned int   volatile SPI4BRGH         absolute 0x45A;
sfr unsigned int   volatile SPI4IMSK1        absolute 0x45C;
sfr unsigned int   volatile SPI4IMSKL        absolute 0x45C;
sfr unsigned int   volatile SPI4IMSK2        absolute 0x45E;
sfr unsigned int   volatile SPI4IMSKH        absolute 0x45E;
sfr unsigned int   volatile SPI4URDTL        absolute 0x460;
sfr unsigned int   volatile SPI4URDTH        absolute 0x462;
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
sfr unsigned int   volatile CLC3CONL         absolute 0x47C;
    const register unsigned short int MODE0_CLC3CONL = 0;
    sbit  MODE0_CLC3CONL_bit at CLC3CONL.B0;
    const register unsigned short int MODE1_CLC3CONL = 1;
    sbit  MODE1_CLC3CONL_bit at CLC3CONL.B1;

sfr unsigned int   volatile CLC3CONH         absolute 0x47E;
sfr unsigned int   volatile CLC3SEL          absolute 0x480;
sfr unsigned int   volatile CLC3SELL         absolute 0x480;
sfr unsigned int   volatile CLC3GLSL         absolute 0x484;
sfr unsigned int   volatile CLC3GLSH         absolute 0x486;
sfr unsigned int   volatile CLC4CONL         absolute 0x488;
    const register unsigned short int MODE0_CLC4CONL = 0;
    sbit  MODE0_CLC4CONL_bit at CLC4CONL.B0;
    const register unsigned short int MODE1_CLC4CONL = 1;
    sbit  MODE1_CLC4CONL_bit at CLC4CONL.B1;

sfr unsigned int   volatile CLC4CONH         absolute 0x48A;
sfr unsigned int   volatile CLC4SEL          absolute 0x48C;
sfr unsigned int   volatile CLC4SELL         absolute 0x48C;
sfr unsigned int   volatile CLC4GLSL         absolute 0x490;
sfr unsigned int   volatile CLC4GLSH         absolute 0x492;
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
sfr unsigned int   volatile I2C3RCV          absolute 0x4B4;
sfr unsigned int   volatile I2C3TRN          absolute 0x4B6;
sfr unsigned int            I2C3BRG          absolute 0x4B8;
sfr unsigned int   volatile I2C3CON1         absolute 0x4BA;
sfr unsigned int   volatile I2C3CONL         absolute 0x4BA;
sfr unsigned int   volatile I2C3CON2         absolute 0x4BC;
sfr unsigned int   volatile I2C3CONH         absolute 0x4BC;
sfr unsigned int   volatile I2C3STAT         absolute 0x4BE;
sfr unsigned int   volatile I2C3ADD          absolute 0x4C0;
sfr unsigned int   volatile I2C3MSK          absolute 0x4C2;
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
sfr unsigned int   volatile CRYCONL          absolute 0x51C;
    const register unsigned short int CPHRMOD0 = 0;
    sbit  CPHRMOD0_bit at CRYCONL.B0;
    const register unsigned short int CPHRMOD1 = 1;
    sbit  CPHRMOD1_bit at CRYCONL.B1;
    const register unsigned short int CPHRMOD2 = 2;
    sbit  CPHRMOD2_bit at CRYCONL.B2;
    const register unsigned short int CPHRSEL = 3;
    sbit  CPHRSEL_bit at CRYCONL.B3;
    const register unsigned short int OPMOD0 = 4;
    sbit  OPMOD0_bit at CRYCONL.B4;
    const register unsigned short int OPMOD1 = 5;
    sbit  OPMOD1_bit at CRYCONL.B5;
    const register unsigned short int OPMOD2 = 6;
    sbit  OPMOD2_bit at CRYCONL.B6;
    const register unsigned short int OPMOD3 = 7;
    sbit  OPMOD3_bit at CRYCONL.B7;
    const register unsigned short int CRYGO = 8;
    sbit  CRYGO_bit at CRYCONL.B8;
    const register unsigned short int FREEIE = 10;
    sbit  FREEIE_bit at CRYCONL.B10;
    const register unsigned short int DONEIE = 11;
    sbit  DONEIE_bit at CRYCONL.B11;
    const register unsigned short int ROLLIE = 12;
    sbit  ROLLIE_bit at CRYCONL.B12;
    const register unsigned short int CRYSIDL = 13;
    sbit  CRYSIDL_bit at CRYCONL.B13;
    const register unsigned short int CRYON = 15;
    sbit  CRYON_bit at CRYCONL.B15;

sfr unsigned int   volatile CRYCONH          absolute 0x51E;
    const register unsigned short int KEYSRC0 = 0;
    sbit  KEYSRC0_bit at CRYCONH.B0;
    const register unsigned short int KEYSRC1 = 1;
    sbit  KEYSRC1_bit at CRYCONH.B1;
    const register unsigned short int KEYSRC2 = 2;
    sbit  KEYSRC2_bit at CRYCONH.B2;
    const register unsigned short int KEYSRC3 = 3;
    sbit  KEYSRC3_bit at CRYCONH.B3;
    const register unsigned short int KEYMOD0 = 5;
    sbit  KEYMOD0_bit at CRYCONH.B5;
    const register unsigned short int KEYMOD1 = 6;
    sbit  KEYMOD1_bit at CRYCONH.B6;
    const register unsigned short int SKEYSEL = 7;
    sbit  SKEYSEL_bit at CRYCONH.B7;
    const register unsigned short int CTRSIZE0 = 8;
    sbit  CTRSIZE0_bit at CRYCONH.B8;
    const register unsigned short int CTRSIZE1 = 9;
    sbit  CTRSIZE1_bit at CRYCONH.B9;
    const register unsigned short int CTRSIZE2 = 10;
    sbit  CTRSIZE2_bit at CRYCONH.B10;
    const register unsigned short int CTRSIZE3 = 11;
    sbit  CTRSIZE3_bit at CRYCONH.B11;
    const register unsigned short int CTRSIZE4 = 12;
    sbit  CTRSIZE4_bit at CRYCONH.B12;
    const register unsigned short int CTRSIZE5 = 13;
    sbit  CTRSIZE5_bit at CRYCONH.B13;
    const register unsigned short int CTRSIZE6 = 14;
    sbit  CTRSIZE6_bit at CRYCONH.B14;

sfr unsigned int   volatile CRYSTAT          absolute 0x520;
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

sfr unsigned int   volatile CRYOTP           absolute 0x524;
    const register unsigned short int CRYWR = 0;
    sbit  CRYWR_bit at CRYOTP.B0;
    const register unsigned short int CRYREAD = 5;
    sbit  CRYREAD_bit at CRYOTP.B5;
    const register unsigned short int OTPIE = 6;
    sbit  OTPIE_bit at CRYOTP.B6;
    const register unsigned short int PGMTST = 7;
    sbit  PGMTST_bit at CRYOTP.B7;
    const register unsigned short int KEYPSEL = 8;
    sbit  KEYPSEL_bit at CRYOTP.B8;

sfr unsigned int   volatile CRYKEY           absolute 0x528;
sfr unsigned int   volatile CRYKEY0          absolute 0x528;
sfr unsigned int   volatile CRYKEY1          absolute 0x52A;
sfr unsigned int   volatile CRYKEY2          absolute 0x52C;
sfr unsigned int   volatile CRYKEY3          absolute 0x52E;
sfr unsigned int   volatile CRYKEY4          absolute 0x530;
sfr unsigned int   volatile CRYKEY5          absolute 0x532;
sfr unsigned int   volatile CRYKEY6          absolute 0x534;
sfr unsigned int   volatile CRYKEY7          absolute 0x536;
sfr unsigned int   volatile CRYKEY8          absolute 0x538;
sfr unsigned int   volatile CRYKEY9          absolute 0x53A;
sfr unsigned int   volatile CRYKEY10         absolute 0x53C;
sfr unsigned int   volatile CRYKEY11         absolute 0x53E;
sfr unsigned int   volatile CRYKEY12         absolute 0x540;
sfr unsigned int   volatile CRYKEY13         absolute 0x542;
sfr unsigned int   volatile CRYKEY14         absolute 0x544;
sfr unsigned int   volatile CRYKEY15         absolute 0x546;
sfr unsigned int   volatile CRYTXTA          absolute 0x548;
sfr unsigned int   volatile CRYTXTA0         absolute 0x548;
sfr unsigned int   volatile CRYTXTA1         absolute 0x54A;
sfr unsigned int   volatile CRYTXTA2         absolute 0x54C;
sfr unsigned int   volatile CRYTXTA3         absolute 0x54E;
sfr unsigned int   volatile CRYTXTA4         absolute 0x550;
sfr unsigned int   volatile CRYTXTA5         absolute 0x552;
sfr unsigned int   volatile CRYTXTA6         absolute 0x554;
sfr unsigned int   volatile CRYTXTA7         absolute 0x556;
sfr unsigned int   volatile CRYTXTB          absolute 0x558;
sfr unsigned int   volatile CRYTXTB0         absolute 0x558;
sfr unsigned int   volatile CRYTXTB1         absolute 0x55A;
sfr unsigned int   volatile CRYTXTB2         absolute 0x55C;
sfr unsigned int   volatile CRYTXTB3         absolute 0x55E;
sfr unsigned int   volatile CRYTXTB4         absolute 0x560;
sfr unsigned int   volatile CRYTXTB5         absolute 0x562;
sfr unsigned int   volatile CRYTXTB6         absolute 0x564;
sfr unsigned int   volatile CRYTXTB7         absolute 0x566;
sfr unsigned int   volatile CRYTXTC          absolute 0x568;
sfr unsigned int   volatile CRYTXTC0         absolute 0x568;
sfr unsigned int   volatile CRYTXTC1         absolute 0x56A;
sfr unsigned int   volatile CRYTXTC2         absolute 0x56C;
sfr unsigned int   volatile CRYTXTC3         absolute 0x56E;
sfr unsigned int   volatile CRYTXTC4         absolute 0x570;
sfr unsigned int   volatile CRYTXTC5         absolute 0x572;
sfr unsigned int   volatile CRYTXTC6         absolute 0x574;
sfr unsigned int   volatile CRYTXTC7         absolute 0x576;
sfr unsigned int   volatile U1OTGIR          absolute 0x578;
    const register unsigned short int VBUSVDIF = 0;
    sbit  VBUSVDIF_bit at U1OTGIR.B0;
    const register unsigned short int SESENDIF = 2;
    sbit  SESENDIF_bit at U1OTGIR.B2;
    const register unsigned short int SESVDIF = 3;
    sbit  SESVDIF_bit at U1OTGIR.B3;
    const register unsigned short int ACTVIF = 4;
    sbit  ACTVIF_bit at U1OTGIR.B4;
    const register unsigned short int LSTATEIF = 5;
    sbit  LSTATEIF_bit at U1OTGIR.B5;
    const register unsigned short int T1MSECIF = 6;
    sbit  T1MSECIF_bit at U1OTGIR.B6;
    const register unsigned short int IDIF = 7;
    sbit  IDIF_bit at U1OTGIR.B7;

sfr unsigned int   volatile U1OTGIE          absolute 0x57A;
    const register unsigned short int VBUSVDIE = 0;
    sbit  VBUSVDIE_bit at U1OTGIE.B0;
    const register unsigned short int SESENDIE = 2;
    sbit  SESENDIE_bit at U1OTGIE.B2;
    const register unsigned short int SESVDIE = 3;
    sbit  SESVDIE_bit at U1OTGIE.B3;
    const register unsigned short int ACTVIE = 4;
    sbit  ACTVIE_bit at U1OTGIE.B4;
    const register unsigned short int LSTATEIE = 5;
    sbit  LSTATEIE_bit at U1OTGIE.B5;
    const register unsigned short int T1MSECIE = 6;
    sbit  T1MSECIE_bit at U1OTGIE.B6;
    const register unsigned short int IDIE = 7;
    sbit  IDIE_bit at U1OTGIE.B7;

sfr unsigned int   volatile U1OTGSTAT        absolute 0x57C;
    const register unsigned short int VBUSVD = 0;
    sbit  VBUSVD_bit at U1OTGSTAT.B0;
    const register unsigned short int SESEND = 2;
    sbit  SESEND_bit at U1OTGSTAT.B2;
    const register unsigned short int SESVD = 3;
    sbit  SESVD_bit at U1OTGSTAT.B3;
    const register unsigned short int LSTATE = 5;
    sbit  LSTATE_bit at U1OTGSTAT.B5;
    const register unsigned short int ID = 7;
    sbit  ID_bit at U1OTGSTAT.B7;

sfr unsigned int   volatile U1OTGCON         absolute 0x57E;
    const register unsigned short int VBUSDIS = 0;
    sbit  VBUSDIS_bit at U1OTGCON.B0;
    const register unsigned short int VBUSCHG = 1;
    sbit  VBUSCHG_bit at U1OTGCON.B1;
    const register unsigned short int OTGEN = 2;
    sbit  OTGEN_bit at U1OTGCON.B2;
    const register unsigned short int VBUSON = 3;
    sbit  VBUSON_bit at U1OTGCON.B3;
    const register unsigned short int DMPULDWN = 4;
    sbit  DMPULDWN_bit at U1OTGCON.B4;
    const register unsigned short int DPPULDWN = 5;
    sbit  DPPULDWN_bit at U1OTGCON.B5;
    const register unsigned short int DMPULUP = 6;
    sbit  DMPULUP_bit at U1OTGCON.B6;
    const register unsigned short int DPPULUP = 7;
    sbit  DPPULUP_bit at U1OTGCON.B7;

sfr unsigned int   volatile U1PWRC           absolute 0x580;
    const register unsigned short int USBPWR = 0;
    sbit  USBPWR_bit at U1PWRC.B0;
    const register unsigned short int USUSPND = 1;
    sbit  USUSPND_bit at U1PWRC.B1;
    const register unsigned short int USLPGRD = 4;
    sbit  USLPGRD_bit at U1PWRC.B4;
    const register unsigned short int UACTPND = 7;
    sbit  UACTPND_bit at U1PWRC.B7;
    const register unsigned short int USUSPEND = 1;
    sbit  USUSPEND_bit at U1PWRC.B1;

sfr unsigned int   volatile U1IR             absolute 0x582;
    const register unsigned short int URSTIF = 0;
    sbit  URSTIF_bit at U1IR.B0;
    const register unsigned short int UERRIF = 1;
    sbit  UERRIF_bit at U1IR.B1;
    const register unsigned short int SOFIF = 2;
    sbit  SOFIF_bit at U1IR.B2;
    const register unsigned short int TRNIF = 3;
    sbit  TRNIF_bit at U1IR.B3;
    const register unsigned short int IDLEIF = 4;
    sbit  IDLEIF_bit at U1IR.B4;
    const register unsigned short int RESUMEIF = 5;
    sbit  RESUMEIF_bit at U1IR.B5;
    const register unsigned short int ATTACHIF = 6;
    sbit  ATTACHIF_bit at U1IR.B6;
    const register unsigned short int STALLIF = 7;
    sbit  STALLIF_bit at U1IR.B7;
    const register unsigned short int DETACHIF = 0;
    sbit  DETACHIF_bit at U1IR.B0;

sfr unsigned int   volatile U1IE             absolute 0x584;
    const register unsigned short int URSTIE = 0;
    sbit  URSTIE_bit at U1IE.B0;
    const register unsigned short int UERRIE = 1;
    sbit  UERRIE_bit at U1IE.B1;
    const register unsigned short int SOFIE = 2;
    sbit  SOFIE_bit at U1IE.B2;
    const register unsigned short int TRNIE = 3;
    sbit  TRNIE_bit at U1IE.B3;
    const register unsigned short int IDLEIE = 4;
    sbit  IDLEIE_bit at U1IE.B4;
    const register unsigned short int RESUMEIE = 5;
    sbit  RESUMEIE_bit at U1IE.B5;
    const register unsigned short int ATTACHIE = 6;
    sbit  ATTACHIE_bit at U1IE.B6;
    const register unsigned short int STALLIE = 7;
    sbit  STALLIE_bit at U1IE.B7;
    const register unsigned short int DETACHIE = 0;
    sbit  DETACHIE_bit at U1IE.B0;

sfr unsigned int   volatile U1EIR            absolute 0x586;
    const register unsigned short int PIDEF = 0;
    sbit  PIDEF_bit at U1EIR.B0;
    const register unsigned short int CRC5EF = 1;
    sbit  CRC5EF_bit at U1EIR.B1;
    const register unsigned short int CRC16EF = 2;
    sbit  CRC16EF_bit at U1EIR.B2;
    const register unsigned short int DFN8EF = 3;
    sbit  DFN8EF_bit at U1EIR.B3;
    const register unsigned short int BTOEF = 4;
    sbit  BTOEF_bit at U1EIR.B4;
    const register unsigned short int DMAEF = 5;
    sbit  DMAEF_bit at U1EIR.B5;
    const register unsigned short int BTSEF = 7;
    sbit  BTSEF_bit at U1EIR.B7;
    const register unsigned short int EOFEF = 1;
    sbit  EOFEF_bit at U1EIR.B1;

sfr unsigned int   volatile U1EIE            absolute 0x588;
    const register unsigned short int PIDEE = 0;
    sbit  PIDEE_bit at U1EIE.B0;
    const register unsigned short int CRC5EE = 1;
    sbit  CRC5EE_bit at U1EIE.B1;
    const register unsigned short int CRC16EE = 2;
    sbit  CRC16EE_bit at U1EIE.B2;
    const register unsigned short int DFN8EE = 3;
    sbit  DFN8EE_bit at U1EIE.B3;
    const register unsigned short int BTOEE = 4;
    sbit  BTOEE_bit at U1EIE.B4;
    const register unsigned short int DMAEE = 5;
    sbit  DMAEE_bit at U1EIE.B5;
    const register unsigned short int BTSEE = 7;
    sbit  BTSEE_bit at U1EIE.B7;
    const register unsigned short int EOFEE = 1;
    sbit  EOFEE_bit at U1EIE.B1;

sfr unsigned int   volatile U1STAT           absolute 0x58A;
    const register unsigned short int PPBI = 2;
    sbit  PPBI_bit at U1STAT.B2;
    const register unsigned short int DIR_ = 3;
    sbit  DIR_bit at U1STAT.B3;
    const register unsigned short int ENDPT0 = 4;
    sbit  ENDPT0_bit at U1STAT.B4;
    const register unsigned short int ENDPT1 = 5;
    sbit  ENDPT1_bit at U1STAT.B5;
    const register unsigned short int ENDPT2 = 6;
    sbit  ENDPT2_bit at U1STAT.B6;
    const register unsigned short int ENDPT3 = 7;
    sbit  ENDPT3_bit at U1STAT.B7;

sfr unsigned int   volatile U1CON            absolute 0x58C;
    const register unsigned short int USBEN = 0;
    sbit  USBEN_bit at U1CON.B0;
    const register unsigned short int PPBRST = 1;
    sbit  PPBRST_bit at U1CON.B1;
    const register unsigned short int RESUME_ = 2;
    sbit  RESUME_bit at U1CON.B2;
    const register unsigned short int HOSTEN = 3;
    sbit  HOSTEN_bit at U1CON.B3;
    const register unsigned short int USBRST = 4;
    sbit  USBRST_bit at U1CON.B4;
    const register unsigned short int PKTDIS = 5;
    sbit  PKTDIS_bit at U1CON.B5;
    const register unsigned short int SE0 = 6;
    sbit  SE0_bit at U1CON.B6;
    const register unsigned short int JSTATE = 7;
    sbit  JSTATE_bit at U1CON.B7;
    const register unsigned short int SOFEN = 0;
    sbit  SOFEN_bit at U1CON.B0;
    const register unsigned short int RESET_ = 4;
    sbit  RESET_bit at U1CON.B4;
    const register unsigned short int TOKBUSY = 5;
    sbit  TOKBUSY_bit at U1CON.B5;

sfr unsigned int   volatile U1ADDR           absolute 0x58E;
    const register unsigned short int DEVADDR0 = 0;
    sbit  DEVADDR0_bit at U1ADDR.B0;
    const register unsigned short int DEVADDR1 = 1;
    sbit  DEVADDR1_bit at U1ADDR.B1;
    const register unsigned short int DEVADDR2 = 2;
    sbit  DEVADDR2_bit at U1ADDR.B2;
    const register unsigned short int DEVADDR3 = 3;
    sbit  DEVADDR3_bit at U1ADDR.B3;
    const register unsigned short int DEVADDR4 = 4;
    sbit  DEVADDR4_bit at U1ADDR.B4;
    const register unsigned short int DEVADDR5 = 5;
    sbit  DEVADDR5_bit at U1ADDR.B5;
    const register unsigned short int DEVADDR6 = 6;
    sbit  DEVADDR6_bit at U1ADDR.B6;
    const register unsigned short int LSPDEN = 7;
    sbit  LSPDEN_bit at U1ADDR.B7;
    const register unsigned short int LOWSPDEN = 7;
    sbit  LOWSPDEN_bit at U1ADDR.B7;
    const register unsigned short int ADDR0 = 0;
    sbit  ADDR0_bit at U1ADDR.B0;
    const register unsigned short int ADDR1 = 1;
    sbit  ADDR1_bit at U1ADDR.B1;
    const register unsigned short int ADDR2 = 2;
    sbit  ADDR2_bit at U1ADDR.B2;
    const register unsigned short int ADDR3 = 3;
    sbit  ADDR3_bit at U1ADDR.B3;
    const register unsigned short int ADDR4 = 4;
    sbit  ADDR4_bit at U1ADDR.B4;
    const register unsigned short int ADDR5 = 5;
    sbit  ADDR5_bit at U1ADDR.B5;
    const register unsigned short int ADDR6 = 6;
    sbit  ADDR6_bit at U1ADDR.B6;

sfr unsigned int   volatile U1BDTP1          absolute 0x590;
    const register unsigned short int BDTPTRL0 = 1;
    sbit  BDTPTRL0_bit at U1BDTP1.B1;
    const register unsigned short int BDTPTRL1 = 2;
    sbit  BDTPTRL1_bit at U1BDTP1.B2;
    const register unsigned short int BDTPTRL2 = 3;
    sbit  BDTPTRL2_bit at U1BDTP1.B3;
    const register unsigned short int BDTPTRL3 = 4;
    sbit  BDTPTRL3_bit at U1BDTP1.B4;
    const register unsigned short int BDTPTRL4 = 5;
    sbit  BDTPTRL4_bit at U1BDTP1.B5;
    const register unsigned short int BDTPTRL5 = 6;
    sbit  BDTPTRL5_bit at U1BDTP1.B6;
    const register unsigned short int BDTPTRL6 = 7;
    sbit  BDTPTRL6_bit at U1BDTP1.B7;

sfr unsigned int   volatile U1FRML           absolute 0x592;
    const register unsigned short int FRM0 = 0;
    sbit  FRM0_bit at U1FRML.B0;
    const register unsigned short int FRM1 = 1;
    sbit  FRM1_bit at U1FRML.B1;
    const register unsigned short int FRM2 = 2;
    sbit  FRM2_bit at U1FRML.B2;
    const register unsigned short int FRM3 = 3;
    sbit  FRM3_bit at U1FRML.B3;
    const register unsigned short int FRM4 = 4;
    sbit  FRM4_bit at U1FRML.B4;
    const register unsigned short int FRM5 = 5;
    sbit  FRM5_bit at U1FRML.B5;
    const register unsigned short int FRM6 = 6;
    sbit  FRM6_bit at U1FRML.B6;
    const register unsigned short int FRM7 = 7;
    sbit  FRM7_bit at U1FRML.B7;

sfr unsigned int   volatile U1FRMH           absolute 0x594;
    const register unsigned short int FRM8 = 0;
    sbit  FRM8_bit at U1FRMH.B0;
    const register unsigned short int FRM9 = 1;
    sbit  FRM9_bit at U1FRMH.B1;
    const register unsigned short int FRM10 = 2;
    sbit  FRM10_bit at U1FRMH.B2;

sfr unsigned int   volatile U1TOK            absolute 0x596;
    const register unsigned short int EP0 = 0;
    sbit  EP0_bit at U1TOK.B0;
    const register unsigned short int EP1 = 1;
    sbit  EP1_bit at U1TOK.B1;
    const register unsigned short int EP2 = 2;
    sbit  EP2_bit at U1TOK.B2;
    const register unsigned short int EP3 = 3;
    sbit  EP3_bit at U1TOK.B3;
    const register unsigned short int PID0 = 4;
    sbit  PID0_bit at U1TOK.B4;
    const register unsigned short int PID1 = 5;
    sbit  PID1_bit at U1TOK.B5;
    const register unsigned short int PID2 = 6;
    sbit  PID2_bit at U1TOK.B6;
    const register unsigned short int PID3 = 7;
    sbit  PID3_bit at U1TOK.B7;

sfr unsigned int   volatile U1SOF            absolute 0x598;
    const register unsigned short int CNT0 = 0;
    sbit  CNT0_bit at U1SOF.B0;
    const register unsigned short int CNT1 = 1;
    sbit  CNT1_bit at U1SOF.B1;
    const register unsigned short int CNT2 = 2;
    sbit  CNT2_bit at U1SOF.B2;
    const register unsigned short int CNT3 = 3;
    sbit  CNT3_bit at U1SOF.B3;
    const register unsigned short int CNT4 = 4;
    sbit  CNT4_bit at U1SOF.B4;
    const register unsigned short int CNT5 = 5;
    sbit  CNT5_bit at U1SOF.B5;
    const register unsigned short int CNT6 = 6;
    sbit  CNT6_bit at U1SOF.B6;
    const register unsigned short int CNT7 = 7;
    sbit  CNT7_bit at U1SOF.B7;

sfr unsigned int   volatile U1BDTP2          absolute 0x59A;
sfr unsigned int   volatile U1BDTP3          absolute 0x59C;
sfr unsigned int   volatile U1CNFG1          absolute 0x59E;
    const register unsigned short int PPB0 = 0;
    sbit  PPB0_bit at U1CNFG1.B0;
    const register unsigned short int PPB1 = 1;
    sbit  PPB1_bit at U1CNFG1.B1;
    const register unsigned short int USBSIDL = 4;
    sbit  USBSIDL_bit at U1CNFG1.B4;
    const register unsigned short int UOEMON = 6;
    sbit  UOEMON_bit at U1CNFG1.B6;
    const register unsigned short int UTEYE = 7;
    sbit  UTEYE_bit at U1CNFG1.B7;

sfr unsigned int   volatile U1CNFG2          absolute 0x5A0;
    const register unsigned short int UTRDIS = 0;
    sbit  UTRDIS_bit at U1CNFG2.B0;
    const register unsigned short int UVCMPDIS = 1;
    sbit  UVCMPDIS_bit at U1CNFG2.B1;
    const register unsigned short int UVBUSDIS = 2;
    sbit  UVBUSDIS_bit at U1CNFG2.B2;
    const register unsigned short int EXTI2CEN = 3;
    sbit  EXTI2CEN_bit at U1CNFG2.B3;
    const register unsigned short int PUVBUS = 4;
    sbit  PUVBUS_bit at U1CNFG2.B4;
    const register unsigned short int UVCMPSEL = 5;
    sbit  UVCMPSEL_bit at U1CNFG2.B5;

sfr unsigned int   volatile U1EP0            absolute 0x5A2;
    const register unsigned short int EPHSHK = 0;
    sbit  EPHSHK_bit at U1EP0.B0;
    const register unsigned short int EPSTALL = 1;
    sbit  EPSTALL_bit at U1EP0.B1;
    const register unsigned short int EPTXEN = 2;
    sbit  EPTXEN_bit at U1EP0.B2;
    const register unsigned short int EPRXEN = 3;
    sbit  EPRXEN_bit at U1EP0.B3;
    const register unsigned short int EPCONDIS = 4;
    sbit  EPCONDIS_bit at U1EP0.B4;
    const register unsigned short int RETRYDIS = 6;
    sbit  RETRYDIS_bit at U1EP0.B6;
    const register unsigned short int LSPD = 7;
    sbit  LSPD_bit at U1EP0.B7;
    const register unsigned short int EPINEN = 2;
    sbit  EPINEN_bit at U1EP0.B2;
    const register unsigned short int EPOUTEN = 3;
    sbit  EPOUTEN_bit at U1EP0.B3;
    const register unsigned short int LOWSPD = 7;
    sbit  LOWSPD_bit at U1EP0.B7;

sfr unsigned int   volatile U1EP1            absolute 0x5A4;
sfr unsigned int   volatile U1EP2            absolute 0x5A6;
sfr unsigned int   volatile U1EP3            absolute 0x5A8;
sfr unsigned int   volatile U1EP4            absolute 0x5AA;
sfr unsigned int   volatile U1EP5            absolute 0x5AC;
sfr unsigned int   volatile U1EP6            absolute 0x5AE;
sfr unsigned int   volatile U1EP7            absolute 0x5B0;
sfr unsigned int   volatile U1EP8            absolute 0x5B2;
sfr unsigned int   volatile U1EP9            absolute 0x5B4;
sfr unsigned int   volatile U1EP10           absolute 0x5B6;
sfr unsigned int   volatile U1EP11           absolute 0x5B8;
sfr unsigned int   volatile U1EP12           absolute 0x5BA;
sfr unsigned int   volatile U1EP13           absolute 0x5BC;
sfr unsigned int   volatile U1EP14           absolute 0x5BE;
sfr unsigned int   volatile U1EP15           absolute 0x5C0;
sfr unsigned int   volatile LCDCON           absolute 0x5C2;
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
    const register unsigned short int WERR = 5;
    sbit  WERR_bit at LCDCON.B5;
    const register unsigned short int SLPEN = 6;
    sbit  SLPEN_bit at LCDCON.B6;
    const register unsigned short int LCDSIDL = 13;
    sbit  LCDSIDL_bit at LCDCON.B13;
    const register unsigned short int LCDEN = 15;
    sbit  LCDEN_bit at LCDCON.B15;

sfr unsigned int   volatile LCDREF           absolute 0x5C4;
    const register unsigned short int LRLAT0 = 0;
    sbit  LRLAT0_bit at LCDREF.B0;
    const register unsigned short int LRLAT1 = 1;
    sbit  LRLAT1_bit at LCDREF.B1;
    const register unsigned short int LRLAT2 = 2;
    sbit  LRLAT2_bit at LCDREF.B2;
    const register unsigned short int LRLBP0 = 4;
    sbit  LRLBP0_bit at LCDREF.B4;
    const register unsigned short int LRLBP1 = 5;
    sbit  LRLBP1_bit at LCDREF.B5;
    const register unsigned short int LRLAP0 = 6;
    sbit  LRLAP0_bit at LCDREF.B6;
    const register unsigned short int LRLAP1 = 7;
    sbit  LRLAP1_bit at LCDREF.B7;
    const register unsigned short int VLCD1PE = 8;
    sbit  VLCD1PE_bit at LCDREF.B8;
    const register unsigned short int VLCD2PE = 9;
    sbit  VLCD2PE_bit at LCDREF.B9;
    const register unsigned short int VLCD3PE = 10;
    sbit  VLCD3PE_bit at LCDREF.B10;
    const register unsigned short int LCDCST0 = 11;
    sbit  LCDCST0_bit at LCDREF.B11;
    const register unsigned short int LCDCST1 = 12;
    sbit  LCDCST1_bit at LCDREF.B12;
    const register unsigned short int LCDCST2 = 13;
    sbit  LCDCST2_bit at LCDREF.B13;
    const register unsigned short int LCDIRE = 15;
    sbit  LCDIRE_bit at LCDREF.B15;

sfr unsigned int   volatile LCDPS            absolute 0x5C6;
    const register unsigned short int LP0 = 0;
    sbit  LP0_bit at LCDPS.B0;
    const register unsigned short int LP1 = 1;
    sbit  LP1_bit at LCDPS.B1;
    const register unsigned short int LP2 = 2;
    sbit  LP2_bit at LCDPS.B2;
    const register unsigned short int LP3 = 3;
    sbit  LP3_bit at LCDPS.B3;
    const register unsigned short int WA = 4;
    sbit  WA_bit at LCDPS.B4;
    const register unsigned short int LCDA = 5;
    sbit  LCDA_bit at LCDPS.B5;
    const register unsigned short int BIASMD = 6;
    sbit  BIASMD_bit at LCDPS.B6;
    const register unsigned short int WFT = 7;
    sbit  WFT_bit at LCDPS.B7;

sfr unsigned int   volatile LCDDATA0         absolute 0x5C8;
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
    const register unsigned short int S08C0 = 8;
    sbit  S08C0_bit at LCDDATA0.B8;
    const register unsigned short int S09C0 = 9;
    sbit  S09C0_bit at LCDDATA0.B9;
    const register unsigned short int S10C0 = 10;
    sbit  S10C0_bit at LCDDATA0.B10;
    const register unsigned short int S11C0 = 11;
    sbit  S11C0_bit at LCDDATA0.B11;
    const register unsigned short int S12C0 = 12;
    sbit  S12C0_bit at LCDDATA0.B12;
    const register unsigned short int S13C0 = 13;
    sbit  S13C0_bit at LCDDATA0.B13;
    const register unsigned short int S14C0 = 14;
    sbit  S14C0_bit at LCDDATA0.B14;
    const register unsigned short int S15C0 = 15;
    sbit  S15C0_bit at LCDDATA0.B15;

sfr unsigned int   volatile LCDDATA1         absolute 0x5CA;
    const register unsigned short int S16C0 = 0;
    sbit  S16C0_bit at LCDDATA1.B0;
    const register unsigned short int S17C0 = 1;
    sbit  S17C0_bit at LCDDATA1.B1;
    const register unsigned short int S18C0 = 2;
    sbit  S18C0_bit at LCDDATA1.B2;
    const register unsigned short int S19C0 = 3;
    sbit  S19C0_bit at LCDDATA1.B3;
    const register unsigned short int S20C0 = 4;
    sbit  S20C0_bit at LCDDATA1.B4;
    const register unsigned short int S21C0 = 5;
    sbit  S21C0_bit at LCDDATA1.B5;
    const register unsigned short int S22C0 = 6;
    sbit  S22C0_bit at LCDDATA1.B6;
    const register unsigned short int S23C0 = 7;
    sbit  S23C0_bit at LCDDATA1.B7;
    const register unsigned short int S24C0 = 8;
    sbit  S24C0_bit at LCDDATA1.B8;
    const register unsigned short int S25C0 = 9;
    sbit  S25C0_bit at LCDDATA1.B9;
    const register unsigned short int S26C0 = 10;
    sbit  S26C0_bit at LCDDATA1.B10;
    const register unsigned short int S27C0 = 11;
    sbit  S27C0_bit at LCDDATA1.B11;
    const register unsigned short int S28C0 = 12;
    sbit  S28C0_bit at LCDDATA1.B12;
    const register unsigned short int S29C0 = 13;
    sbit  S29C0_bit at LCDDATA1.B13;
    const register unsigned short int S30C0 = 14;
    sbit  S30C0_bit at LCDDATA1.B14;
    const register unsigned short int S31C0 = 15;
    sbit  S31C0_bit at LCDDATA1.B15;

sfr unsigned int   volatile LCDDATA2         absolute 0x5CC;
    const register unsigned short int S32C0 = 0;
    sbit  S32C0_bit at LCDDATA2.B0;
    const register unsigned short int S33C0 = 1;
    sbit  S33C0_bit at LCDDATA2.B1;
    const register unsigned short int S34C0 = 2;
    sbit  S34C0_bit at LCDDATA2.B2;
    const register unsigned short int S35C0 = 3;
    sbit  S35C0_bit at LCDDATA2.B3;
    const register unsigned short int S36C0 = 4;
    sbit  S36C0_bit at LCDDATA2.B4;
    const register unsigned short int S37C0 = 5;
    sbit  S37C0_bit at LCDDATA2.B5;
    const register unsigned short int S38C0 = 6;
    sbit  S38C0_bit at LCDDATA2.B6;
    const register unsigned short int S39C0 = 7;
    sbit  S39C0_bit at LCDDATA2.B7;
    const register unsigned short int S40C0 = 8;
    sbit  S40C0_bit at LCDDATA2.B8;
    const register unsigned short int S41C0 = 9;
    sbit  S41C0_bit at LCDDATA2.B9;
    const register unsigned short int S42C0 = 10;
    sbit  S42C0_bit at LCDDATA2.B10;
    const register unsigned short int S43C0 = 11;
    sbit  S43C0_bit at LCDDATA2.B11;
    const register unsigned short int S44C0 = 12;
    sbit  S44C0_bit at LCDDATA2.B12;
    const register unsigned short int S45C0 = 13;
    sbit  S45C0_bit at LCDDATA2.B13;
    const register unsigned short int S46C0 = 14;
    sbit  S46C0_bit at LCDDATA2.B14;
    const register unsigned short int S47C0 = 15;
    sbit  S47C0_bit at LCDDATA2.B15;

sfr unsigned int   volatile LCDDATA3         absolute 0x5CE;
    const register unsigned short int S48C0 = 0;
    sbit  S48C0_bit at LCDDATA3.B0;
    const register unsigned short int S49C0 = 1;
    sbit  S49C0_bit at LCDDATA3.B1;
    const register unsigned short int S50C0 = 2;
    sbit  S50C0_bit at LCDDATA3.B2;
    const register unsigned short int S51C0 = 3;
    sbit  S51C0_bit at LCDDATA3.B3;
    const register unsigned short int S52C0 = 4;
    sbit  S52C0_bit at LCDDATA3.B4;
    const register unsigned short int S53C0 = 5;
    sbit  S53C0_bit at LCDDATA3.B5;
    const register unsigned short int S54C0 = 6;
    sbit  S54C0_bit at LCDDATA3.B6;
    const register unsigned short int S55C0 = 7;
    sbit  S55C0_bit at LCDDATA3.B7;
    const register unsigned short int S56C0 = 8;
    sbit  S56C0_bit at LCDDATA3.B8;
    const register unsigned short int S57C0 = 9;
    sbit  S57C0_bit at LCDDATA3.B9;
    const register unsigned short int S58C0 = 10;
    sbit  S58C0_bit at LCDDATA3.B10;
    const register unsigned short int S59C0 = 11;
    sbit  S59C0_bit at LCDDATA3.B11;
    const register unsigned short int S60C0 = 12;
    sbit  S60C0_bit at LCDDATA3.B12;
    const register unsigned short int S61C0 = 13;
    sbit  S61C0_bit at LCDDATA3.B13;
    const register unsigned short int S62C0 = 14;
    sbit  S62C0_bit at LCDDATA3.B14;
    const register unsigned short int S63C0 = 15;
    sbit  S63C0_bit at LCDDATA3.B15;

sfr unsigned int   volatile LCDDATA4         absolute 0x5D0;
    const register unsigned short int S00C1 = 0;
    sbit  S00C1_bit at LCDDATA4.B0;
    const register unsigned short int S01C1 = 1;
    sbit  S01C1_bit at LCDDATA4.B1;
    const register unsigned short int S02C1 = 2;
    sbit  S02C1_bit at LCDDATA4.B2;
    const register unsigned short int S03C1 = 3;
    sbit  S03C1_bit at LCDDATA4.B3;
    const register unsigned short int S04C1 = 4;
    sbit  S04C1_bit at LCDDATA4.B4;
    const register unsigned short int S05C1 = 5;
    sbit  S05C1_bit at LCDDATA4.B5;
    const register unsigned short int S06C1 = 6;
    sbit  S06C1_bit at LCDDATA4.B6;
    const register unsigned short int S07C1 = 7;
    sbit  S07C1_bit at LCDDATA4.B7;
    const register unsigned short int S08C1 = 8;
    sbit  S08C1_bit at LCDDATA4.B8;
    const register unsigned short int S09C1 = 9;
    sbit  S09C1_bit at LCDDATA4.B9;
    const register unsigned short int S10C1 = 10;
    sbit  S10C1_bit at LCDDATA4.B10;
    const register unsigned short int S11C1 = 11;
    sbit  S11C1_bit at LCDDATA4.B11;
    const register unsigned short int S12C1 = 12;
    sbit  S12C1_bit at LCDDATA4.B12;
    const register unsigned short int S13C1 = 13;
    sbit  S13C1_bit at LCDDATA4.B13;
    const register unsigned short int S14C1 = 14;
    sbit  S14C1_bit at LCDDATA4.B14;
    const register unsigned short int S15C1 = 15;
    sbit  S15C1_bit at LCDDATA4.B15;

sfr unsigned int   volatile LCDDATA5         absolute 0x5D2;
    const register unsigned short int S16C1 = 0;
    sbit  S16C1_bit at LCDDATA5.B0;
    const register unsigned short int S17C1 = 1;
    sbit  S17C1_bit at LCDDATA5.B1;
    const register unsigned short int S18C1 = 2;
    sbit  S18C1_bit at LCDDATA5.B2;
    const register unsigned short int S19C1 = 3;
    sbit  S19C1_bit at LCDDATA5.B3;
    const register unsigned short int S20C1 = 4;
    sbit  S20C1_bit at LCDDATA5.B4;
    const register unsigned short int S21C1 = 5;
    sbit  S21C1_bit at LCDDATA5.B5;
    const register unsigned short int S22C1 = 6;
    sbit  S22C1_bit at LCDDATA5.B6;
    const register unsigned short int S23C1 = 7;
    sbit  S23C1_bit at LCDDATA5.B7;
    const register unsigned short int S24C1 = 8;
    sbit  S24C1_bit at LCDDATA5.B8;
    const register unsigned short int S25C1 = 9;
    sbit  S25C1_bit at LCDDATA5.B9;
    const register unsigned short int S26C1 = 10;
    sbit  S26C1_bit at LCDDATA5.B10;
    const register unsigned short int S27C1 = 11;
    sbit  S27C1_bit at LCDDATA5.B11;
    const register unsigned short int S28C1 = 12;
    sbit  S28C1_bit at LCDDATA5.B12;
    const register unsigned short int S29C1 = 13;
    sbit  S29C1_bit at LCDDATA5.B13;
    const register unsigned short int S30C1 = 14;
    sbit  S30C1_bit at LCDDATA5.B14;
    const register unsigned short int S31C1 = 15;
    sbit  S31C1_bit at LCDDATA5.B15;

sfr unsigned int   volatile LCDDATA6         absolute 0x5D4;
    const register unsigned short int S32C1 = 0;
    sbit  S32C1_bit at LCDDATA6.B0;
    const register unsigned short int S33C1 = 1;
    sbit  S33C1_bit at LCDDATA6.B1;
    const register unsigned short int S34C1 = 2;
    sbit  S34C1_bit at LCDDATA6.B2;
    const register unsigned short int S35C1 = 3;
    sbit  S35C1_bit at LCDDATA6.B3;
    const register unsigned short int S36C1 = 4;
    sbit  S36C1_bit at LCDDATA6.B4;
    const register unsigned short int S37C1 = 5;
    sbit  S37C1_bit at LCDDATA6.B5;
    const register unsigned short int S38C1 = 6;
    sbit  S38C1_bit at LCDDATA6.B6;
    const register unsigned short int S39C1 = 7;
    sbit  S39C1_bit at LCDDATA6.B7;
    const register unsigned short int S40C1 = 8;
    sbit  S40C1_bit at LCDDATA6.B8;
    const register unsigned short int S41C1 = 9;
    sbit  S41C1_bit at LCDDATA6.B9;
    const register unsigned short int S42C1 = 10;
    sbit  S42C1_bit at LCDDATA6.B10;
    const register unsigned short int S43C1 = 11;
    sbit  S43C1_bit at LCDDATA6.B11;
    const register unsigned short int S44C1 = 12;
    sbit  S44C1_bit at LCDDATA6.B12;
    const register unsigned short int S45C1 = 13;
    sbit  S45C1_bit at LCDDATA6.B13;
    const register unsigned short int S46C1 = 14;
    sbit  S46C1_bit at LCDDATA6.B14;
    const register unsigned short int S47C1 = 15;
    sbit  S47C1_bit at LCDDATA6.B15;

sfr unsigned int   volatile LCDDATA7         absolute 0x5D6;
    const register unsigned short int S48C1 = 0;
    sbit  S48C1_bit at LCDDATA7.B0;
    const register unsigned short int S49C1 = 1;
    sbit  S49C1_bit at LCDDATA7.B1;
    const register unsigned short int S50C1 = 2;
    sbit  S50C1_bit at LCDDATA7.B2;
    const register unsigned short int S51C1 = 3;
    sbit  S51C1_bit at LCDDATA7.B3;
    const register unsigned short int S52C1 = 4;
    sbit  S52C1_bit at LCDDATA7.B4;
    const register unsigned short int S53C1 = 5;
    sbit  S53C1_bit at LCDDATA7.B5;
    const register unsigned short int S54C1 = 6;
    sbit  S54C1_bit at LCDDATA7.B6;
    const register unsigned short int S55C1 = 7;
    sbit  S55C1_bit at LCDDATA7.B7;
    const register unsigned short int S56C1 = 8;
    sbit  S56C1_bit at LCDDATA7.B8;
    const register unsigned short int S57C1 = 9;
    sbit  S57C1_bit at LCDDATA7.B9;
    const register unsigned short int S58C1 = 10;
    sbit  S58C1_bit at LCDDATA7.B10;
    const register unsigned short int S59C1 = 11;
    sbit  S59C1_bit at LCDDATA7.B11;
    const register unsigned short int S60C1 = 12;
    sbit  S60C1_bit at LCDDATA7.B12;
    const register unsigned short int S61C1 = 13;
    sbit  S61C1_bit at LCDDATA7.B13;
    const register unsigned short int S62C1 = 14;
    sbit  S62C1_bit at LCDDATA7.B14;
    const register unsigned short int S63C1 = 15;
    sbit  S63C1_bit at LCDDATA7.B15;

sfr unsigned int   volatile LCDDATA8         absolute 0x5D8;
    const register unsigned short int S00C2 = 0;
    sbit  S00C2_bit at LCDDATA8.B0;
    const register unsigned short int S01C2 = 1;
    sbit  S01C2_bit at LCDDATA8.B1;
    const register unsigned short int S02C2 = 2;
    sbit  S02C2_bit at LCDDATA8.B2;
    const register unsigned short int S03C2 = 3;
    sbit  S03C2_bit at LCDDATA8.B3;
    const register unsigned short int S04C2 = 4;
    sbit  S04C2_bit at LCDDATA8.B4;
    const register unsigned short int S05C2 = 5;
    sbit  S05C2_bit at LCDDATA8.B5;
    const register unsigned short int S06C2 = 6;
    sbit  S06C2_bit at LCDDATA8.B6;
    const register unsigned short int S07C2 = 7;
    sbit  S07C2_bit at LCDDATA8.B7;
    const register unsigned short int S08C2 = 8;
    sbit  S08C2_bit at LCDDATA8.B8;
    const register unsigned short int S09C2 = 9;
    sbit  S09C2_bit at LCDDATA8.B9;
    const register unsigned short int S10C2 = 10;
    sbit  S10C2_bit at LCDDATA8.B10;
    const register unsigned short int S11C2 = 11;
    sbit  S11C2_bit at LCDDATA8.B11;
    const register unsigned short int S12C2 = 12;
    sbit  S12C2_bit at LCDDATA8.B12;
    const register unsigned short int S13C2 = 13;
    sbit  S13C2_bit at LCDDATA8.B13;
    const register unsigned short int S14C2 = 14;
    sbit  S14C2_bit at LCDDATA8.B14;
    const register unsigned short int S15C2 = 15;
    sbit  S15C2_bit at LCDDATA8.B15;

sfr unsigned int   volatile LCDDATA9         absolute 0x5DA;
    const register unsigned short int S16C2 = 0;
    sbit  S16C2_bit at LCDDATA9.B0;
    const register unsigned short int S17C2 = 1;
    sbit  S17C2_bit at LCDDATA9.B1;
    const register unsigned short int S18C2 = 2;
    sbit  S18C2_bit at LCDDATA9.B2;
    const register unsigned short int S19C2 = 3;
    sbit  S19C2_bit at LCDDATA9.B3;
    const register unsigned short int S20C2 = 4;
    sbit  S20C2_bit at LCDDATA9.B4;
    const register unsigned short int S21C2 = 5;
    sbit  S21C2_bit at LCDDATA9.B5;
    const register unsigned short int S22C2 = 6;
    sbit  S22C2_bit at LCDDATA9.B6;
    const register unsigned short int S23C2 = 7;
    sbit  S23C2_bit at LCDDATA9.B7;
    const register unsigned short int S24C2 = 8;
    sbit  S24C2_bit at LCDDATA9.B8;
    const register unsigned short int S25C2 = 9;
    sbit  S25C2_bit at LCDDATA9.B9;
    const register unsigned short int S26C2 = 10;
    sbit  S26C2_bit at LCDDATA9.B10;
    const register unsigned short int S27C2 = 11;
    sbit  S27C2_bit at LCDDATA9.B11;
    const register unsigned short int S28C2 = 12;
    sbit  S28C2_bit at LCDDATA9.B12;
    const register unsigned short int S29C2 = 13;
    sbit  S29C2_bit at LCDDATA9.B13;
    const register unsigned short int S30C2 = 14;
    sbit  S30C2_bit at LCDDATA9.B14;
    const register unsigned short int S31C2 = 15;
    sbit  S31C2_bit at LCDDATA9.B15;

sfr unsigned int   volatile LCDDATA10        absolute 0x5DC;
    const register unsigned short int S32C2 = 0;
    sbit  S32C2_bit at LCDDATA10.B0;
    const register unsigned short int S33C2 = 1;
    sbit  S33C2_bit at LCDDATA10.B1;
    const register unsigned short int S34C2 = 2;
    sbit  S34C2_bit at LCDDATA10.B2;
    const register unsigned short int S35C2 = 3;
    sbit  S35C2_bit at LCDDATA10.B3;
    const register unsigned short int S36C2 = 4;
    sbit  S36C2_bit at LCDDATA10.B4;
    const register unsigned short int S37C2 = 5;
    sbit  S37C2_bit at LCDDATA10.B5;
    const register unsigned short int S38C2 = 6;
    sbit  S38C2_bit at LCDDATA10.B6;
    const register unsigned short int S39C2 = 7;
    sbit  S39C2_bit at LCDDATA10.B7;
    const register unsigned short int S40C2 = 8;
    sbit  S40C2_bit at LCDDATA10.B8;
    const register unsigned short int S41C2 = 9;
    sbit  S41C2_bit at LCDDATA10.B9;
    const register unsigned short int S42C2 = 10;
    sbit  S42C2_bit at LCDDATA10.B10;
    const register unsigned short int S43C2 = 11;
    sbit  S43C2_bit at LCDDATA10.B11;
    const register unsigned short int S44C2 = 12;
    sbit  S44C2_bit at LCDDATA10.B12;
    const register unsigned short int S45C2 = 13;
    sbit  S45C2_bit at LCDDATA10.B13;
    const register unsigned short int S46C2 = 14;
    sbit  S46C2_bit at LCDDATA10.B14;
    const register unsigned short int S47C2 = 15;
    sbit  S47C2_bit at LCDDATA10.B15;

sfr unsigned int   volatile LCDDATA11        absolute 0x5DE;
    const register unsigned short int S48C2 = 0;
    sbit  S48C2_bit at LCDDATA11.B0;
    const register unsigned short int S49C2 = 1;
    sbit  S49C2_bit at LCDDATA11.B1;
    const register unsigned short int S50C2 = 2;
    sbit  S50C2_bit at LCDDATA11.B2;
    const register unsigned short int S51C2 = 3;
    sbit  S51C2_bit at LCDDATA11.B3;
    const register unsigned short int S52C2 = 4;
    sbit  S52C2_bit at LCDDATA11.B4;
    const register unsigned short int S53C2 = 5;
    sbit  S53C2_bit at LCDDATA11.B5;
    const register unsigned short int S54C2 = 6;
    sbit  S54C2_bit at LCDDATA11.B6;
    const register unsigned short int S55C2 = 7;
    sbit  S55C2_bit at LCDDATA11.B7;
    const register unsigned short int S56C2 = 8;
    sbit  S56C2_bit at LCDDATA11.B8;
    const register unsigned short int S57C2 = 9;
    sbit  S57C2_bit at LCDDATA11.B9;
    const register unsigned short int S58C2 = 10;
    sbit  S58C2_bit at LCDDATA11.B10;
    const register unsigned short int S59C2 = 11;
    sbit  S59C2_bit at LCDDATA11.B11;
    const register unsigned short int S60C2 = 12;
    sbit  S60C2_bit at LCDDATA11.B12;
    const register unsigned short int S61C2 = 13;
    sbit  S61C2_bit at LCDDATA11.B13;
    const register unsigned short int S62C2 = 14;
    sbit  S62C2_bit at LCDDATA11.B14;
    const register unsigned short int S63C2 = 15;
    sbit  S63C2_bit at LCDDATA11.B15;

sfr unsigned int   volatile LCDDATA12        absolute 0x5E0;
    const register unsigned short int S00C3 = 0;
    sbit  S00C3_bit at LCDDATA12.B0;
    const register unsigned short int S01C3 = 1;
    sbit  S01C3_bit at LCDDATA12.B1;
    const register unsigned short int S02C3 = 2;
    sbit  S02C3_bit at LCDDATA12.B2;
    const register unsigned short int S03C3 = 3;
    sbit  S03C3_bit at LCDDATA12.B3;
    const register unsigned short int S04C3 = 4;
    sbit  S04C3_bit at LCDDATA12.B4;
    const register unsigned short int S05C3 = 5;
    sbit  S05C3_bit at LCDDATA12.B5;
    const register unsigned short int S06C3 = 6;
    sbit  S06C3_bit at LCDDATA12.B6;
    const register unsigned short int S07C3 = 7;
    sbit  S07C3_bit at LCDDATA12.B7;
    const register unsigned short int S08C3 = 8;
    sbit  S08C3_bit at LCDDATA12.B8;
    const register unsigned short int S09C3 = 9;
    sbit  S09C3_bit at LCDDATA12.B9;
    const register unsigned short int S10C3 = 10;
    sbit  S10C3_bit at LCDDATA12.B10;
    const register unsigned short int S11C3 = 11;
    sbit  S11C3_bit at LCDDATA12.B11;
    const register unsigned short int S12C3 = 12;
    sbit  S12C3_bit at LCDDATA12.B12;
    const register unsigned short int S13C3 = 13;
    sbit  S13C3_bit at LCDDATA12.B13;
    const register unsigned short int S14C3 = 14;
    sbit  S14C3_bit at LCDDATA12.B14;
    const register unsigned short int S15C3 = 15;
    sbit  S15C3_bit at LCDDATA12.B15;

sfr unsigned int   volatile LCDDATA13        absolute 0x5E2;
    const register unsigned short int S16C3 = 0;
    sbit  S16C3_bit at LCDDATA13.B0;
    const register unsigned short int S17C3 = 1;
    sbit  S17C3_bit at LCDDATA13.B1;
    const register unsigned short int S18C3 = 2;
    sbit  S18C3_bit at LCDDATA13.B2;
    const register unsigned short int S19C3 = 3;
    sbit  S19C3_bit at LCDDATA13.B3;
    const register unsigned short int S20C3 = 4;
    sbit  S20C3_bit at LCDDATA13.B4;
    const register unsigned short int S21C3 = 5;
    sbit  S21C3_bit at LCDDATA13.B5;
    const register unsigned short int S22C3 = 6;
    sbit  S22C3_bit at LCDDATA13.B6;
    const register unsigned short int S23C3 = 7;
    sbit  S23C3_bit at LCDDATA13.B7;
    const register unsigned short int S24C3 = 8;
    sbit  S24C3_bit at LCDDATA13.B8;
    const register unsigned short int S25C3 = 9;
    sbit  S25C3_bit at LCDDATA13.B9;
    const register unsigned short int S26C3 = 10;
    sbit  S26C3_bit at LCDDATA13.B10;
    const register unsigned short int S27C3 = 11;
    sbit  S27C3_bit at LCDDATA13.B11;
    const register unsigned short int S28C3 = 12;
    sbit  S28C3_bit at LCDDATA13.B12;
    const register unsigned short int S29C3 = 13;
    sbit  S29C3_bit at LCDDATA13.B13;
    const register unsigned short int S30C3 = 14;
    sbit  S30C3_bit at LCDDATA13.B14;
    const register unsigned short int S31C3 = 15;
    sbit  S31C3_bit at LCDDATA13.B15;

sfr unsigned int   volatile LCDDATA14        absolute 0x5E4;
    const register unsigned short int S32C3 = 0;
    sbit  S32C3_bit at LCDDATA14.B0;
    const register unsigned short int S33C3 = 1;
    sbit  S33C3_bit at LCDDATA14.B1;
    const register unsigned short int S34C3 = 2;
    sbit  S34C3_bit at LCDDATA14.B2;
    const register unsigned short int S35C3 = 3;
    sbit  S35C3_bit at LCDDATA14.B3;
    const register unsigned short int S36C3 = 4;
    sbit  S36C3_bit at LCDDATA14.B4;
    const register unsigned short int S37C3 = 5;
    sbit  S37C3_bit at LCDDATA14.B5;
    const register unsigned short int S38C3 = 6;
    sbit  S38C3_bit at LCDDATA14.B6;
    const register unsigned short int S39C3 = 7;
    sbit  S39C3_bit at LCDDATA14.B7;
    const register unsigned short int S40C3 = 8;
    sbit  S40C3_bit at LCDDATA14.B8;
    const register unsigned short int S41C3 = 9;
    sbit  S41C3_bit at LCDDATA14.B9;
    const register unsigned short int S42C3 = 10;
    sbit  S42C3_bit at LCDDATA14.B10;
    const register unsigned short int S43C3 = 11;
    sbit  S43C3_bit at LCDDATA14.B11;
    const register unsigned short int S44C3 = 12;
    sbit  S44C3_bit at LCDDATA14.B12;
    const register unsigned short int S45C3 = 13;
    sbit  S45C3_bit at LCDDATA14.B13;
    const register unsigned short int S46C3 = 14;
    sbit  S46C3_bit at LCDDATA14.B14;
    const register unsigned short int S47C3 = 15;
    sbit  S47C3_bit at LCDDATA14.B15;

sfr unsigned int   volatile LCDDATA15        absolute 0x5E6;
    const register unsigned short int S48C3 = 0;
    sbit  S48C3_bit at LCDDATA15.B0;
    const register unsigned short int S49C3 = 1;
    sbit  S49C3_bit at LCDDATA15.B1;
    const register unsigned short int S50C3 = 2;
    sbit  S50C3_bit at LCDDATA15.B2;
    const register unsigned short int S51C3 = 3;
    sbit  S51C3_bit at LCDDATA15.B3;
    const register unsigned short int S52C3 = 4;
    sbit  S52C3_bit at LCDDATA15.B4;
    const register unsigned short int S53C3 = 5;
    sbit  S53C3_bit at LCDDATA15.B5;
    const register unsigned short int S54C3 = 6;
    sbit  S54C3_bit at LCDDATA15.B6;
    const register unsigned short int S55C3 = 7;
    sbit  S55C3_bit at LCDDATA15.B7;
    const register unsigned short int S56C3 = 8;
    sbit  S56C3_bit at LCDDATA15.B8;
    const register unsigned short int S57C3 = 9;
    sbit  S57C3_bit at LCDDATA15.B9;
    const register unsigned short int S58C3 = 10;
    sbit  S58C3_bit at LCDDATA15.B10;
    const register unsigned short int S59C3 = 11;
    sbit  S59C3_bit at LCDDATA15.B11;
    const register unsigned short int S60C3 = 12;
    sbit  S60C3_bit at LCDDATA15.B12;
    const register unsigned short int S61C3 = 13;
    sbit  S61C3_bit at LCDDATA15.B13;
    const register unsigned short int S62C3 = 14;
    sbit  S62C3_bit at LCDDATA15.B14;
    const register unsigned short int S63C3 = 15;
    sbit  S63C3_bit at LCDDATA15.B15;

sfr unsigned int   volatile LCDDATA16        absolute 0x5E8;
    const register unsigned short int S00C4 = 0;
    sbit  S00C4_bit at LCDDATA16.B0;
    const register unsigned short int S01C4 = 1;
    sbit  S01C4_bit at LCDDATA16.B1;
    const register unsigned short int S02C4 = 2;
    sbit  S02C4_bit at LCDDATA16.B2;
    const register unsigned short int S03C4 = 3;
    sbit  S03C4_bit at LCDDATA16.B3;
    const register unsigned short int S04C4 = 4;
    sbit  S04C4_bit at LCDDATA16.B4;
    const register unsigned short int S05C4 = 5;
    sbit  S05C4_bit at LCDDATA16.B5;
    const register unsigned short int S06C4 = 6;
    sbit  S06C4_bit at LCDDATA16.B6;
    const register unsigned short int S07C4 = 7;
    sbit  S07C4_bit at LCDDATA16.B7;
    const register unsigned short int S08C4 = 8;
    sbit  S08C4_bit at LCDDATA16.B8;
    const register unsigned short int S09C4 = 9;
    sbit  S09C4_bit at LCDDATA16.B9;
    const register unsigned short int S10C4 = 10;
    sbit  S10C4_bit at LCDDATA16.B10;
    const register unsigned short int S11C4 = 11;
    sbit  S11C4_bit at LCDDATA16.B11;
    const register unsigned short int S12C4 = 12;
    sbit  S12C4_bit at LCDDATA16.B12;
    const register unsigned short int S13C4 = 13;
    sbit  S13C4_bit at LCDDATA16.B13;
    const register unsigned short int S14C4 = 14;
    sbit  S14C4_bit at LCDDATA16.B14;
    const register unsigned short int S15C4 = 15;
    sbit  S15C4_bit at LCDDATA16.B15;

sfr unsigned int   volatile LCDDATA17        absolute 0x5EA;
    const register unsigned short int S16C4 = 0;
    sbit  S16C4_bit at LCDDATA17.B0;
    const register unsigned short int S17C4 = 1;
    sbit  S17C4_bit at LCDDATA17.B1;
    const register unsigned short int S18C4 = 2;
    sbit  S18C4_bit at LCDDATA17.B2;
    const register unsigned short int S19C4 = 3;
    sbit  S19C4_bit at LCDDATA17.B3;
    const register unsigned short int S20C4 = 4;
    sbit  S20C4_bit at LCDDATA17.B4;
    const register unsigned short int S21C4 = 5;
    sbit  S21C4_bit at LCDDATA17.B5;
    const register unsigned short int S22C4 = 6;
    sbit  S22C4_bit at LCDDATA17.B6;
    const register unsigned short int S23C4 = 7;
    sbit  S23C4_bit at LCDDATA17.B7;
    const register unsigned short int S24C4 = 8;
    sbit  S24C4_bit at LCDDATA17.B8;
    const register unsigned short int S25C4 = 9;
    sbit  S25C4_bit at LCDDATA17.B9;
    const register unsigned short int S26C4 = 10;
    sbit  S26C4_bit at LCDDATA17.B10;
    const register unsigned short int S27C4 = 11;
    sbit  S27C4_bit at LCDDATA17.B11;
    const register unsigned short int S28C4 = 12;
    sbit  S28C4_bit at LCDDATA17.B12;
    const register unsigned short int S29C4 = 13;
    sbit  S29C4_bit at LCDDATA17.B13;
    const register unsigned short int S30C4 = 14;
    sbit  S30C4_bit at LCDDATA17.B14;
    const register unsigned short int S31C4 = 15;
    sbit  S31C4_bit at LCDDATA17.B15;

sfr unsigned int   volatile LCDDATA18        absolute 0x5EC;
    const register unsigned short int S32C4 = 0;
    sbit  S32C4_bit at LCDDATA18.B0;
    const register unsigned short int S33C4 = 1;
    sbit  S33C4_bit at LCDDATA18.B1;
    const register unsigned short int S34C4 = 2;
    sbit  S34C4_bit at LCDDATA18.B2;
    const register unsigned short int S35C4 = 3;
    sbit  S35C4_bit at LCDDATA18.B3;
    const register unsigned short int S36C4 = 4;
    sbit  S36C4_bit at LCDDATA18.B4;
    const register unsigned short int S37C4 = 5;
    sbit  S37C4_bit at LCDDATA18.B5;
    const register unsigned short int S38C4 = 6;
    sbit  S38C4_bit at LCDDATA18.B6;
    const register unsigned short int S39C4 = 7;
    sbit  S39C4_bit at LCDDATA18.B7;
    const register unsigned short int S40C4 = 8;
    sbit  S40C4_bit at LCDDATA18.B8;
    const register unsigned short int S41C4 = 9;
    sbit  S41C4_bit at LCDDATA18.B9;
    const register unsigned short int S42C4 = 10;
    sbit  S42C4_bit at LCDDATA18.B10;
    const register unsigned short int S43C4 = 11;
    sbit  S43C4_bit at LCDDATA18.B11;
    const register unsigned short int S44C4 = 12;
    sbit  S44C4_bit at LCDDATA18.B12;
    const register unsigned short int S45C4 = 13;
    sbit  S45C4_bit at LCDDATA18.B13;
    const register unsigned short int S46C4 = 14;
    sbit  S46C4_bit at LCDDATA18.B14;
    const register unsigned short int S47C4 = 15;
    sbit  S47C4_bit at LCDDATA18.B15;

sfr unsigned int   volatile LCDDATA19        absolute 0x5EE;
    const register unsigned short int S48C4 = 0;
    sbit  S48C4_bit at LCDDATA19.B0;
    const register unsigned short int S49C4 = 1;
    sbit  S49C4_bit at LCDDATA19.B1;
    const register unsigned short int S50C4 = 2;
    sbit  S50C4_bit at LCDDATA19.B2;
    const register unsigned short int S51C4 = 3;
    sbit  S51C4_bit at LCDDATA19.B3;
    const register unsigned short int S52C4 = 4;
    sbit  S52C4_bit at LCDDATA19.B4;
    const register unsigned short int S53C4 = 5;
    sbit  S53C4_bit at LCDDATA19.B5;
    const register unsigned short int S54C4 = 6;
    sbit  S54C4_bit at LCDDATA19.B6;
    const register unsigned short int S55C4 = 7;
    sbit  S55C4_bit at LCDDATA19.B7;
    const register unsigned short int S56C4 = 8;
    sbit  S56C4_bit at LCDDATA19.B8;
    const register unsigned short int S57C4 = 9;
    sbit  S57C4_bit at LCDDATA19.B9;
    const register unsigned short int S58C4 = 10;
    sbit  S58C4_bit at LCDDATA19.B10;
    const register unsigned short int S59C4 = 11;
    sbit  S59C4_bit at LCDDATA19.B11;
    const register unsigned short int S60C4 = 12;
    sbit  S60C4_bit at LCDDATA19.B12;
    const register unsigned short int S61C4 = 13;
    sbit  S61C4_bit at LCDDATA19.B13;
    const register unsigned short int S62C4 = 14;
    sbit  S62C4_bit at LCDDATA19.B14;
    const register unsigned short int S63C4 = 15;
    sbit  S63C4_bit at LCDDATA19.B15;

sfr unsigned int   volatile LCDDATA20        absolute 0x5F0;
    const register unsigned short int S00C5 = 0;
    sbit  S00C5_bit at LCDDATA20.B0;
    const register unsigned short int S01C5 = 1;
    sbit  S01C5_bit at LCDDATA20.B1;
    const register unsigned short int S02C5 = 2;
    sbit  S02C5_bit at LCDDATA20.B2;
    const register unsigned short int S03C5 = 3;
    sbit  S03C5_bit at LCDDATA20.B3;
    const register unsigned short int S04C5 = 4;
    sbit  S04C5_bit at LCDDATA20.B4;
    const register unsigned short int S05C5 = 5;
    sbit  S05C5_bit at LCDDATA20.B5;
    const register unsigned short int S06C5 = 6;
    sbit  S06C5_bit at LCDDATA20.B6;
    const register unsigned short int S07C5 = 7;
    sbit  S07C5_bit at LCDDATA20.B7;
    const register unsigned short int S08C5 = 8;
    sbit  S08C5_bit at LCDDATA20.B8;
    const register unsigned short int S09C5 = 9;
    sbit  S09C5_bit at LCDDATA20.B9;
    const register unsigned short int S10C5 = 10;
    sbit  S10C5_bit at LCDDATA20.B10;
    const register unsigned short int S11C5 = 11;
    sbit  S11C5_bit at LCDDATA20.B11;
    const register unsigned short int S12C5 = 12;
    sbit  S12C5_bit at LCDDATA20.B12;
    const register unsigned short int S13C5 = 13;
    sbit  S13C5_bit at LCDDATA20.B13;
    const register unsigned short int S14C5 = 14;
    sbit  S14C5_bit at LCDDATA20.B14;
    const register unsigned short int S15C5 = 15;
    sbit  S15C5_bit at LCDDATA20.B15;

sfr unsigned int   volatile LCDDATA21        absolute 0x5F2;
    const register unsigned short int S16C5 = 0;
    sbit  S16C5_bit at LCDDATA21.B0;
    const register unsigned short int S17C5 = 1;
    sbit  S17C5_bit at LCDDATA21.B1;
    const register unsigned short int S18C5 = 2;
    sbit  S18C5_bit at LCDDATA21.B2;
    const register unsigned short int S19C5 = 3;
    sbit  S19C5_bit at LCDDATA21.B3;
    const register unsigned short int S20C5 = 4;
    sbit  S20C5_bit at LCDDATA21.B4;
    const register unsigned short int S21C5 = 5;
    sbit  S21C5_bit at LCDDATA21.B5;
    const register unsigned short int S22C5 = 6;
    sbit  S22C5_bit at LCDDATA21.B6;
    const register unsigned short int S23C5 = 7;
    sbit  S23C5_bit at LCDDATA21.B7;
    const register unsigned short int S24C5 = 8;
    sbit  S24C5_bit at LCDDATA21.B8;
    const register unsigned short int S25C5 = 9;
    sbit  S25C5_bit at LCDDATA21.B9;
    const register unsigned short int S26C5 = 10;
    sbit  S26C5_bit at LCDDATA21.B10;
    const register unsigned short int S27C5 = 11;
    sbit  S27C5_bit at LCDDATA21.B11;
    const register unsigned short int S28C5 = 12;
    sbit  S28C5_bit at LCDDATA21.B12;
    const register unsigned short int S29C5 = 13;
    sbit  S29C5_bit at LCDDATA21.B13;
    const register unsigned short int S30C5 = 14;
    sbit  S30C5_bit at LCDDATA21.B14;
    const register unsigned short int S31C5 = 15;
    sbit  S31C5_bit at LCDDATA21.B15;

sfr unsigned int   volatile LCDDATA22        absolute 0x5F4;
    const register unsigned short int S32C5 = 0;
    sbit  S32C5_bit at LCDDATA22.B0;
    const register unsigned short int S33C5 = 1;
    sbit  S33C5_bit at LCDDATA22.B1;
    const register unsigned short int S34C5 = 2;
    sbit  S34C5_bit at LCDDATA22.B2;
    const register unsigned short int S35C5 = 3;
    sbit  S35C5_bit at LCDDATA22.B3;
    const register unsigned short int S36C5 = 4;
    sbit  S36C5_bit at LCDDATA22.B4;
    const register unsigned short int S37C5 = 5;
    sbit  S37C5_bit at LCDDATA22.B5;
    const register unsigned short int S38C5 = 6;
    sbit  S38C5_bit at LCDDATA22.B6;
    const register unsigned short int S39C5 = 7;
    sbit  S39C5_bit at LCDDATA22.B7;
    const register unsigned short int S40C5 = 8;
    sbit  S40C5_bit at LCDDATA22.B8;
    const register unsigned short int S41C5 = 9;
    sbit  S41C5_bit at LCDDATA22.B9;
    const register unsigned short int S42C5 = 10;
    sbit  S42C5_bit at LCDDATA22.B10;
    const register unsigned short int S43C5 = 11;
    sbit  S43C5_bit at LCDDATA22.B11;
    const register unsigned short int S44C5 = 12;
    sbit  S44C5_bit at LCDDATA22.B12;
    const register unsigned short int S45C5 = 13;
    sbit  S45C5_bit at LCDDATA22.B13;
    const register unsigned short int S46C5 = 14;
    sbit  S46C5_bit at LCDDATA22.B14;
    const register unsigned short int S47C5 = 15;
    sbit  S47C5_bit at LCDDATA22.B15;

sfr unsigned int   volatile LCDDATA23        absolute 0x5F6;
    const register unsigned short int S48C5 = 0;
    sbit  S48C5_bit at LCDDATA23.B0;
    const register unsigned short int S49C5 = 1;
    sbit  S49C5_bit at LCDDATA23.B1;
    const register unsigned short int S50C5 = 2;
    sbit  S50C5_bit at LCDDATA23.B2;
    const register unsigned short int S51C5 = 3;
    sbit  S51C5_bit at LCDDATA23.B3;
    const register unsigned short int S52C5 = 4;
    sbit  S52C5_bit at LCDDATA23.B4;
    const register unsigned short int S53C5 = 5;
    sbit  S53C5_bit at LCDDATA23.B5;
    const register unsigned short int S54C5 = 6;
    sbit  S54C5_bit at LCDDATA23.B6;
    const register unsigned short int S55C5 = 7;
    sbit  S55C5_bit at LCDDATA23.B7;
    const register unsigned short int S56C5 = 8;
    sbit  S56C5_bit at LCDDATA23.B8;
    const register unsigned short int S57C5 = 9;
    sbit  S57C5_bit at LCDDATA23.B9;
    const register unsigned short int S58C5 = 10;
    sbit  S58C5_bit at LCDDATA23.B10;
    const register unsigned short int S59C5 = 11;
    sbit  S59C5_bit at LCDDATA23.B11;
    const register unsigned short int S60C5 = 12;
    sbit  S60C5_bit at LCDDATA23.B12;
    const register unsigned short int S61C5 = 13;
    sbit  S61C5_bit at LCDDATA23.B13;
    const register unsigned short int S62C5 = 14;
    sbit  S62C5_bit at LCDDATA23.B14;
    const register unsigned short int S63C5 = 15;
    sbit  S63C5_bit at LCDDATA23.B15;

sfr unsigned int   volatile LCDDATA24        absolute 0x5F8;
    const register unsigned short int S00C6 = 0;
    sbit  S00C6_bit at LCDDATA24.B0;
    const register unsigned short int S01C6 = 1;
    sbit  S01C6_bit at LCDDATA24.B1;
    const register unsigned short int S02C6 = 2;
    sbit  S02C6_bit at LCDDATA24.B2;
    const register unsigned short int S03C6 = 3;
    sbit  S03C6_bit at LCDDATA24.B3;
    const register unsigned short int S04C6 = 4;
    sbit  S04C6_bit at LCDDATA24.B4;
    const register unsigned short int S05C6 = 5;
    sbit  S05C6_bit at LCDDATA24.B5;
    const register unsigned short int S06C6 = 6;
    sbit  S06C6_bit at LCDDATA24.B6;
    const register unsigned short int S07C6 = 7;
    sbit  S07C6_bit at LCDDATA24.B7;
    const register unsigned short int S08C6 = 8;
    sbit  S08C6_bit at LCDDATA24.B8;
    const register unsigned short int S09C6 = 9;
    sbit  S09C6_bit at LCDDATA24.B9;
    const register unsigned short int S10C6 = 10;
    sbit  S10C6_bit at LCDDATA24.B10;
    const register unsigned short int S11C6 = 11;
    sbit  S11C6_bit at LCDDATA24.B11;
    const register unsigned short int S12C6 = 12;
    sbit  S12C6_bit at LCDDATA24.B12;
    const register unsigned short int S13C6 = 13;
    sbit  S13C6_bit at LCDDATA24.B13;
    const register unsigned short int S14C6 = 14;
    sbit  S14C6_bit at LCDDATA24.B14;
    const register unsigned short int S15C6 = 15;
    sbit  S15C6_bit at LCDDATA24.B15;

sfr unsigned int   volatile LCDDATA25        absolute 0x5FA;
    const register unsigned short int S16C6 = 0;
    sbit  S16C6_bit at LCDDATA25.B0;
    const register unsigned short int S17C6 = 1;
    sbit  S17C6_bit at LCDDATA25.B1;
    const register unsigned short int S18C6 = 2;
    sbit  S18C6_bit at LCDDATA25.B2;
    const register unsigned short int S19C6 = 3;
    sbit  S19C6_bit at LCDDATA25.B3;
    const register unsigned short int S20C6 = 4;
    sbit  S20C6_bit at LCDDATA25.B4;
    const register unsigned short int S21C6 = 5;
    sbit  S21C6_bit at LCDDATA25.B5;
    const register unsigned short int S22C6 = 6;
    sbit  S22C6_bit at LCDDATA25.B6;
    const register unsigned short int S23C6 = 7;
    sbit  S23C6_bit at LCDDATA25.B7;
    const register unsigned short int S24C6 = 8;
    sbit  S24C6_bit at LCDDATA25.B8;
    const register unsigned short int S25C6 = 9;
    sbit  S25C6_bit at LCDDATA25.B9;
    const register unsigned short int S26C6 = 10;
    sbit  S26C6_bit at LCDDATA25.B10;
    const register unsigned short int S27C6 = 11;
    sbit  S27C6_bit at LCDDATA25.B11;
    const register unsigned short int S28C6 = 12;
    sbit  S28C6_bit at LCDDATA25.B12;
    const register unsigned short int S29C6 = 13;
    sbit  S29C6_bit at LCDDATA25.B13;
    const register unsigned short int S30C6 = 14;
    sbit  S30C6_bit at LCDDATA25.B14;
    const register unsigned short int S31C6 = 15;
    sbit  S31C6_bit at LCDDATA25.B15;

sfr unsigned int   volatile LCDDATA26        absolute 0x5FC;
    const register unsigned short int S32C6 = 0;
    sbit  S32C6_bit at LCDDATA26.B0;
    const register unsigned short int S33C6 = 1;
    sbit  S33C6_bit at LCDDATA26.B1;
    const register unsigned short int S34C6 = 2;
    sbit  S34C6_bit at LCDDATA26.B2;
    const register unsigned short int S35C6 = 3;
    sbit  S35C6_bit at LCDDATA26.B3;
    const register unsigned short int S36C6 = 4;
    sbit  S36C6_bit at LCDDATA26.B4;
    const register unsigned short int S37C6 = 5;
    sbit  S37C6_bit at LCDDATA26.B5;
    const register unsigned short int S38C6 = 6;
    sbit  S38C6_bit at LCDDATA26.B6;
    const register unsigned short int S39C6 = 7;
    sbit  S39C6_bit at LCDDATA26.B7;
    const register unsigned short int S40C6 = 8;
    sbit  S40C6_bit at LCDDATA26.B8;
    const register unsigned short int S41C6 = 9;
    sbit  S41C6_bit at LCDDATA26.B9;
    const register unsigned short int S42C6 = 10;
    sbit  S42C6_bit at LCDDATA26.B10;
    const register unsigned short int S43C6 = 11;
    sbit  S43C6_bit at LCDDATA26.B11;
    const register unsigned short int S44C6 = 12;
    sbit  S44C6_bit at LCDDATA26.B12;
    const register unsigned short int S45C6 = 13;
    sbit  S45C6_bit at LCDDATA26.B13;
    const register unsigned short int S46C6 = 14;
    sbit  S46C6_bit at LCDDATA26.B14;
    const register unsigned short int S47C6 = 15;
    sbit  S47C6_bit at LCDDATA26.B15;

sfr unsigned int   volatile LCDDATA27        absolute 0x5FE;
    const register unsigned short int S48C6 = 0;
    sbit  S48C6_bit at LCDDATA27.B0;
    const register unsigned short int S49C6 = 1;
    sbit  S49C6_bit at LCDDATA27.B1;
    const register unsigned short int S50C6 = 2;
    sbit  S50C6_bit at LCDDATA27.B2;
    const register unsigned short int S51C6 = 3;
    sbit  S51C6_bit at LCDDATA27.B3;
    const register unsigned short int S52C6 = 4;
    sbit  S52C6_bit at LCDDATA27.B4;
    const register unsigned short int S53C6 = 5;
    sbit  S53C6_bit at LCDDATA27.B5;
    const register unsigned short int S54C6 = 6;
    sbit  S54C6_bit at LCDDATA27.B6;
    const register unsigned short int S55C6 = 7;
    sbit  S55C6_bit at LCDDATA27.B7;
    const register unsigned short int S56C6 = 8;
    sbit  S56C6_bit at LCDDATA27.B8;
    const register unsigned short int S57C6 = 9;
    sbit  S57C6_bit at LCDDATA27.B9;
    const register unsigned short int S58C6 = 10;
    sbit  S58C6_bit at LCDDATA27.B10;
    const register unsigned short int S59C6 = 11;
    sbit  S59C6_bit at LCDDATA27.B11;
    const register unsigned short int S60C6 = 12;
    sbit  S60C6_bit at LCDDATA27.B12;
    const register unsigned short int S61C6 = 13;
    sbit  S61C6_bit at LCDDATA27.B13;
    const register unsigned short int S62C6 = 14;
    sbit  S62C6_bit at LCDDATA27.B14;
    const register unsigned short int S63C6 = 15;
    sbit  S63C6_bit at LCDDATA27.B15;

sfr unsigned int   volatile LCDDATA28        absolute 0x600;
    const register unsigned short int S00C7 = 0;
    sbit  S00C7_bit at LCDDATA28.B0;
    const register unsigned short int S01C7 = 1;
    sbit  S01C7_bit at LCDDATA28.B1;
    const register unsigned short int S02C7 = 2;
    sbit  S02C7_bit at LCDDATA28.B2;
    const register unsigned short int S03C7 = 3;
    sbit  S03C7_bit at LCDDATA28.B3;
    const register unsigned short int S04C7 = 4;
    sbit  S04C7_bit at LCDDATA28.B4;
    const register unsigned short int S05C7 = 5;
    sbit  S05C7_bit at LCDDATA28.B5;
    const register unsigned short int S06C7 = 6;
    sbit  S06C7_bit at LCDDATA28.B6;
    const register unsigned short int S07C7 = 7;
    sbit  S07C7_bit at LCDDATA28.B7;
    const register unsigned short int S08C7 = 8;
    sbit  S08C7_bit at LCDDATA28.B8;
    const register unsigned short int S09C7 = 9;
    sbit  S09C7_bit at LCDDATA28.B9;
    const register unsigned short int S10C7 = 10;
    sbit  S10C7_bit at LCDDATA28.B10;
    const register unsigned short int S11C7 = 11;
    sbit  S11C7_bit at LCDDATA28.B11;
    const register unsigned short int S12C7 = 12;
    sbit  S12C7_bit at LCDDATA28.B12;
    const register unsigned short int S13C7 = 13;
    sbit  S13C7_bit at LCDDATA28.B13;
    const register unsigned short int S14C7 = 14;
    sbit  S14C7_bit at LCDDATA28.B14;
    const register unsigned short int S15C7 = 15;
    sbit  S15C7_bit at LCDDATA28.B15;

sfr unsigned int   volatile LCDDATA29        absolute 0x602;
    const register unsigned short int S16C7 = 0;
    sbit  S16C7_bit at LCDDATA29.B0;
    const register unsigned short int S17C7 = 1;
    sbit  S17C7_bit at LCDDATA29.B1;
    const register unsigned short int S18C7 = 2;
    sbit  S18C7_bit at LCDDATA29.B2;
    const register unsigned short int S19C7 = 3;
    sbit  S19C7_bit at LCDDATA29.B3;
    const register unsigned short int S20C7 = 4;
    sbit  S20C7_bit at LCDDATA29.B4;
    const register unsigned short int S21C7 = 5;
    sbit  S21C7_bit at LCDDATA29.B5;
    const register unsigned short int S22C7 = 6;
    sbit  S22C7_bit at LCDDATA29.B6;
    const register unsigned short int S23C7 = 7;
    sbit  S23C7_bit at LCDDATA29.B7;
    const register unsigned short int S24C7 = 8;
    sbit  S24C7_bit at LCDDATA29.B8;
    const register unsigned short int S25C7 = 9;
    sbit  S25C7_bit at LCDDATA29.B9;
    const register unsigned short int S26C7 = 10;
    sbit  S26C7_bit at LCDDATA29.B10;
    const register unsigned short int S27C7 = 11;
    sbit  S27C7_bit at LCDDATA29.B11;
    const register unsigned short int S28C7 = 12;
    sbit  S28C7_bit at LCDDATA29.B12;
    const register unsigned short int S29C7 = 13;
    sbit  S29C7_bit at LCDDATA29.B13;
    const register unsigned short int S30C7 = 14;
    sbit  S30C7_bit at LCDDATA29.B14;
    const register unsigned short int S31C7 = 15;
    sbit  S31C7_bit at LCDDATA29.B15;

sfr unsigned int   volatile LCDDATA30        absolute 0x604;
    const register unsigned short int S32C7 = 0;
    sbit  S32C7_bit at LCDDATA30.B0;
    const register unsigned short int S33C7 = 1;
    sbit  S33C7_bit at LCDDATA30.B1;
    const register unsigned short int S34C7 = 2;
    sbit  S34C7_bit at LCDDATA30.B2;
    const register unsigned short int S35C7 = 3;
    sbit  S35C7_bit at LCDDATA30.B3;
    const register unsigned short int S36C7 = 4;
    sbit  S36C7_bit at LCDDATA30.B4;
    const register unsigned short int S37C7 = 5;
    sbit  S37C7_bit at LCDDATA30.B5;
    const register unsigned short int S38C7 = 6;
    sbit  S38C7_bit at LCDDATA30.B6;
    const register unsigned short int S39C7 = 7;
    sbit  S39C7_bit at LCDDATA30.B7;
    const register unsigned short int S40C7 = 8;
    sbit  S40C7_bit at LCDDATA30.B8;
    const register unsigned short int S41C7 = 9;
    sbit  S41C7_bit at LCDDATA30.B9;
    const register unsigned short int S42C7 = 10;
    sbit  S42C7_bit at LCDDATA30.B10;
    const register unsigned short int S43C7 = 11;
    sbit  S43C7_bit at LCDDATA30.B11;
    const register unsigned short int S44C7 = 12;
    sbit  S44C7_bit at LCDDATA30.B12;
    const register unsigned short int S45C7 = 13;
    sbit  S45C7_bit at LCDDATA30.B13;
    const register unsigned short int S46C7 = 14;
    sbit  S46C7_bit at LCDDATA30.B14;
    const register unsigned short int S47C7 = 15;
    sbit  S47C7_bit at LCDDATA30.B15;

sfr unsigned int   volatile LCDDATA31        absolute 0x606;
    const register unsigned short int S48C7 = 0;
    sbit  S48C7_bit at LCDDATA31.B0;
    const register unsigned short int S49C7 = 1;
    sbit  S49C7_bit at LCDDATA31.B1;
    const register unsigned short int S50C7 = 2;
    sbit  S50C7_bit at LCDDATA31.B2;
    const register unsigned short int S51C7 = 3;
    sbit  S51C7_bit at LCDDATA31.B3;
    const register unsigned short int S52C7 = 4;
    sbit  S52C7_bit at LCDDATA31.B4;
    const register unsigned short int S53C7 = 5;
    sbit  S53C7_bit at LCDDATA31.B5;
    const register unsigned short int S54C7 = 6;
    sbit  S54C7_bit at LCDDATA31.B6;
    const register unsigned short int S55C7 = 7;
    sbit  S55C7_bit at LCDDATA31.B7;
    const register unsigned short int S56C7 = 8;
    sbit  S56C7_bit at LCDDATA31.B8;
    const register unsigned short int S57C7 = 9;
    sbit  S57C7_bit at LCDDATA31.B9;
    const register unsigned short int S58C7 = 10;
    sbit  S58C7_bit at LCDDATA31.B10;
    const register unsigned short int S59C7 = 11;
    sbit  S59C7_bit at LCDDATA31.B11;
    const register unsigned short int S60C7 = 12;
    sbit  S60C7_bit at LCDDATA31.B12;
    const register unsigned short int S61C7 = 13;
    sbit  S61C7_bit at LCDDATA31.B13;
    const register unsigned short int S62C7 = 14;
    sbit  S62C7_bit at LCDDATA31.B14;
    const register unsigned short int S63C7 = 15;
    sbit  S63C7_bit at LCDDATA31.B15;

sfr unsigned int   volatile LCDSE0           absolute 0x608;
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
    const register unsigned short int SE08 = 8;
    sbit  SE08_bit at LCDSE0.B8;
    const register unsigned short int SE09 = 9;
    sbit  SE09_bit at LCDSE0.B9;
    const register unsigned short int SE10 = 10;
    sbit  SE10_bit at LCDSE0.B10;
    const register unsigned short int SE11 = 11;
    sbit  SE11_bit at LCDSE0.B11;
    const register unsigned short int SE12 = 12;
    sbit  SE12_bit at LCDSE0.B12;
    const register unsigned short int SE13 = 13;
    sbit  SE13_bit at LCDSE0.B13;
    const register unsigned short int SE14 = 14;
    sbit  SE14_bit at LCDSE0.B14;
    const register unsigned short int SE15 = 15;
    sbit  SE15_bit at LCDSE0.B15;

sfr unsigned int   volatile LCDSE1           absolute 0x60A;
    const register unsigned short int SE16 = 0;
    sbit  SE16_bit at LCDSE1.B0;
    const register unsigned short int SE17 = 1;
    sbit  SE17_bit at LCDSE1.B1;
    const register unsigned short int SE18 = 2;
    sbit  SE18_bit at LCDSE1.B2;
    const register unsigned short int SE19 = 3;
    sbit  SE19_bit at LCDSE1.B3;
    const register unsigned short int SE20 = 4;
    sbit  SE20_bit at LCDSE1.B4;
    const register unsigned short int SE21 = 5;
    sbit  SE21_bit at LCDSE1.B5;
    const register unsigned short int SE22 = 6;
    sbit  SE22_bit at LCDSE1.B6;
    const register unsigned short int SE23 = 7;
    sbit  SE23_bit at LCDSE1.B7;
    const register unsigned short int SE24 = 8;
    sbit  SE24_bit at LCDSE1.B8;
    const register unsigned short int SE25 = 9;
    sbit  SE25_bit at LCDSE1.B9;
    const register unsigned short int SE26 = 10;
    sbit  SE26_bit at LCDSE1.B10;
    const register unsigned short int SE27 = 11;
    sbit  SE27_bit at LCDSE1.B11;
    const register unsigned short int SE28 = 12;
    sbit  SE28_bit at LCDSE1.B12;
    const register unsigned short int SE29 = 13;
    sbit  SE29_bit at LCDSE1.B13;
    const register unsigned short int SE30 = 14;
    sbit  SE30_bit at LCDSE1.B14;
    const register unsigned short int SE31 = 15;
    sbit  SE31_bit at LCDSE1.B15;

sfr unsigned int   volatile LCDSE2           absolute 0x60C;
    const register unsigned short int SE32 = 0;
    sbit  SE32_bit at LCDSE2.B0;
    const register unsigned short int SE33 = 1;
    sbit  SE33_bit at LCDSE2.B1;
    const register unsigned short int SE34 = 2;
    sbit  SE34_bit at LCDSE2.B2;
    const register unsigned short int SE35 = 3;
    sbit  SE35_bit at LCDSE2.B3;
    const register unsigned short int SE36 = 4;
    sbit  SE36_bit at LCDSE2.B4;
    const register unsigned short int SE37 = 5;
    sbit  SE37_bit at LCDSE2.B5;
    const register unsigned short int SE38 = 6;
    sbit  SE38_bit at LCDSE2.B6;
    const register unsigned short int SE39 = 7;
    sbit  SE39_bit at LCDSE2.B7;
    const register unsigned short int SE40 = 8;
    sbit  SE40_bit at LCDSE2.B8;
    const register unsigned short int SE41 = 9;
    sbit  SE41_bit at LCDSE2.B9;
    const register unsigned short int SE42 = 10;
    sbit  SE42_bit at LCDSE2.B10;
    const register unsigned short int SE43 = 11;
    sbit  SE43_bit at LCDSE2.B11;
    const register unsigned short int SE44 = 12;
    sbit  SE44_bit at LCDSE2.B12;
    const register unsigned short int SE45 = 13;
    sbit  SE45_bit at LCDSE2.B13;
    const register unsigned short int SE46 = 14;
    sbit  SE46_bit at LCDSE2.B14;
    const register unsigned short int SE47 = 15;
    sbit  SE47_bit at LCDSE2.B15;

sfr unsigned int   volatile LCDSE3           absolute 0x60E;
    const register unsigned short int SE48 = 0;
    sbit  SE48_bit at LCDSE3.B0;
    const register unsigned short int SE49 = 1;
    sbit  SE49_bit at LCDSE3.B1;
    const register unsigned short int SE50 = 2;
    sbit  SE50_bit at LCDSE3.B2;
    const register unsigned short int SE51 = 3;
    sbit  SE51_bit at LCDSE3.B3;
    const register unsigned short int SE52 = 4;
    sbit  SE52_bit at LCDSE3.B4;
    const register unsigned short int SE53 = 5;
    sbit  SE53_bit at LCDSE3.B5;
    const register unsigned short int SE54 = 6;
    sbit  SE54_bit at LCDSE3.B6;
    const register unsigned short int SE55 = 7;
    sbit  SE55_bit at LCDSE3.B7;
    const register unsigned short int SE56 = 8;
    sbit  SE56_bit at LCDSE3.B8;
    const register unsigned short int SE57 = 9;
    sbit  SE57_bit at LCDSE3.B9;
    const register unsigned short int SE58 = 10;
    sbit  SE58_bit at LCDSE3.B10;
    const register unsigned short int SE59 = 11;
    sbit  SE59_bit at LCDSE3.B11;
    const register unsigned short int SE60 = 12;
    sbit  SE60_bit at LCDSE3.B12;
    const register unsigned short int SE61 = 13;
    sbit  SE61_bit at LCDSE3.B13;
    const register unsigned short int SE62 = 14;
    sbit  SE62_bit at LCDSE3.B14;
    const register unsigned short int SE63 = 15;
    sbit  SE63_bit at LCDSE3.B15;

sfr unsigned int   volatile LCDREG           absolute 0x610;
    const register unsigned short int CPEN = 15;
    sbit  CPEN_bit at LCDREG.B15;

sfr unsigned int   volatile PADCON           absolute 0x65A;
    const register unsigned short int PMPTTL = 0;
    sbit  PMPTTL_bit at PADCON.B0;
    const register unsigned short int IOCON = 15;
    sbit  IOCON_bit at PADCON.B15;

sfr unsigned int   volatile IOCSTAT          absolute 0x65C;
    const register unsigned short int IOCPAF = 0;
    sbit  IOCPAF_bit at IOCSTAT.B0;
    const register unsigned short int IOCPBF = 1;
    sbit  IOCPBF_bit at IOCSTAT.B1;
    const register unsigned short int IOCPCF = 2;
    sbit  IOCPCF_bit at IOCSTAT.B2;
    const register unsigned short int IOCPDF_ = 3;
    sbit  IOCPDF__bit at IOCSTAT.B3;
    const register unsigned short int IOCPEF = 4;
    sbit  IOCPEF_bit at IOCSTAT.B4;
    const register unsigned short int IOCPFF = 5;
    sbit  IOCPFF_bit at IOCSTAT.B5;
    const register unsigned short int IOCPGF = 6;
    sbit  IOCPGF_bit at IOCSTAT.B6;
    const register unsigned short int IOCPHF = 7;
    sbit  IOCPHF_bit at IOCSTAT.B7;
    const register unsigned short int IOCPJF = 8;
    sbit  IOCPJF_bit at IOCSTAT.B8;

sfr unsigned int   volatile TRISA            absolute 0x65E;
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
    const register unsigned short int TRISA5 = 5;
    sbit  TRISA5_bit at TRISA.B5;
    const register unsigned short int TRISA6 = 6;
    sbit  TRISA6_bit at TRISA.B6;
    const register unsigned short int TRISA7 = 7;
    sbit  TRISA7_bit at TRISA.B7;
    const register unsigned short int TRISA9 = 9;
    sbit  TRISA9_bit at TRISA.B9;
    const register unsigned short int TRISA10 = 10;
    sbit  TRISA10_bit at TRISA.B10;
    const register unsigned short int TRISA14 = 14;
    sbit  TRISA14_bit at TRISA.B14;
    const register unsigned short int TRISA15 = 15;
    sbit  TRISA15_bit at TRISA.B15;

sfr unsigned int   volatile PORTA            absolute 0x660;
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
    const register unsigned short int RA5 = 5;
    sbit  RA5_bit at PORTA.B5;
    const register unsigned short int RA6 = 6;
    sbit  RA6_bit at PORTA.B6;
    const register unsigned short int RA7 = 7;
    sbit  RA7_bit at PORTA.B7;
    const register unsigned short int RA9 = 9;
    sbit  RA9_bit at PORTA.B9;
    const register unsigned short int RA10 = 10;
    sbit  RA10_bit at PORTA.B10;
    const register unsigned short int RA14 = 14;
    sbit  RA14_bit at PORTA.B14;
    const register unsigned short int RA15 = 15;
    sbit  RA15_bit at PORTA.B15;

sfr unsigned int   volatile LATA             absolute 0x662;
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
    const register unsigned short int LATA9 = 9;
    sbit  LATA9_bit at LATA.B9;
    const register unsigned short int LATA10 = 10;
    sbit  LATA10_bit at LATA.B10;
    const register unsigned short int LATA14 = 14;
    sbit  LATA14_bit at LATA.B14;
    const register unsigned short int LATA15 = 15;
    sbit  LATA15_bit at LATA.B15;

sfr unsigned int   volatile ODCA             absolute 0x664;
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
    const register unsigned short int ODCA5 = 5;
    sbit  ODCA5_bit at ODCA.B5;
    const register unsigned short int ODCA6 = 6;
    sbit  ODCA6_bit at ODCA.B6;
    const register unsigned short int ODCA7 = 7;
    sbit  ODCA7_bit at ODCA.B7;
    const register unsigned short int ODCA9 = 9;
    sbit  ODCA9_bit at ODCA.B9;
    const register unsigned short int ODCA10 = 10;
    sbit  ODCA10_bit at ODCA.B10;
    const register unsigned short int ODCA14 = 14;
    sbit  ODCA14_bit at ODCA.B14;
    const register unsigned short int ODCA15 = 15;
    sbit  ODCA15_bit at ODCA.B15;

sfr unsigned int   volatile ANSA             absolute 0x666;
    const register unsigned short int ANSA0 = 0;
    sbit  ANSA0_bit at ANSA.B0;
    const register unsigned short int ANSA2 = 2;
    sbit  ANSA2_bit at ANSA.B2;
    const register unsigned short int ANSA3 = 3;
    sbit  ANSA3_bit at ANSA.B3;
    const register unsigned short int ANSA5 = 5;
    sbit  ANSA5_bit at ANSA.B5;
    const register unsigned short int ANSA6 = 6;
    sbit  ANSA6_bit at ANSA.B6;
    const register unsigned short int ANSA7 = 7;
    sbit  ANSA7_bit at ANSA.B7;
    const register unsigned short int ANSA9 = 9;
    sbit  ANSA9_bit at ANSA.B9;
    const register unsigned short int ANSA10 = 10;
    sbit  ANSA10_bit at ANSA.B10;
    const register unsigned short int ANSA14 = 14;
    sbit  ANSA14_bit at ANSA.B14;
    const register unsigned short int ANSA15 = 15;
    sbit  ANSA15_bit at ANSA.B15;

sfr unsigned int   volatile IOCPA            absolute 0x668;
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
    const register unsigned short int IOCPA5 = 5;
    sbit  IOCPA5_bit at IOCPA.B5;
    const register unsigned short int IOCPA6 = 6;
    sbit  IOCPA6_bit at IOCPA.B6;
    const register unsigned short int IOCPA7 = 7;
    sbit  IOCPA7_bit at IOCPA.B7;
    const register unsigned short int IOCPA9 = 9;
    sbit  IOCPA9_bit at IOCPA.B9;
    const register unsigned short int IOCPA10 = 10;
    sbit  IOCPA10_bit at IOCPA.B10;
    const register unsigned short int IOCPA14 = 14;
    sbit  IOCPA14_bit at IOCPA.B14;
    const register unsigned short int IOCPA15 = 15;
    sbit  IOCPA15_bit at IOCPA.B15;

sfr unsigned int   volatile IOCNA            absolute 0x66A;
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
    const register unsigned short int IOCNA5 = 5;
    sbit  IOCNA5_bit at IOCNA.B5;
    const register unsigned short int IOCNA6 = 6;
    sbit  IOCNA6_bit at IOCNA.B6;
    const register unsigned short int IOCNA7 = 7;
    sbit  IOCNA7_bit at IOCNA.B7;
    const register unsigned short int IOCNA9 = 9;
    sbit  IOCNA9_bit at IOCNA.B9;
    const register unsigned short int IOCNA10 = 10;
    sbit  IOCNA10_bit at IOCNA.B10;
    const register unsigned short int IOCNA14 = 14;
    sbit  IOCNA14_bit at IOCNA.B14;
    const register unsigned short int IOCNA15 = 15;
    sbit  IOCNA15_bit at IOCNA.B15;

sfr unsigned int   volatile IOCFA            absolute 0x66C;
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
    const register unsigned short int IOCFA5 = 5;
    sbit  IOCFA5_bit at IOCFA.B5;
    const register unsigned short int IOCFA6 = 6;
    sbit  IOCFA6_bit at IOCFA.B6;
    const register unsigned short int IOCFA7 = 7;
    sbit  IOCFA7_bit at IOCFA.B7;
    const register unsigned short int IOCFA9 = 9;
    sbit  IOCFA9_bit at IOCFA.B9;
    const register unsigned short int IOCFA10 = 10;
    sbit  IOCFA10_bit at IOCFA.B10;
    const register unsigned short int IOCFA14 = 14;
    sbit  IOCFA14_bit at IOCFA.B14;
    const register unsigned short int IOCFA15 = 15;
    sbit  IOCFA15_bit at IOCFA.B15;

sfr unsigned int   volatile CNPUA            absolute 0x66E;
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
    const register unsigned short int IOCPUA5 = 5;
    sbit  IOCPUA5_bit at CNPUA.B5;
    const register unsigned short int IOCPUA6 = 6;
    sbit  IOCPUA6_bit at CNPUA.B6;
    const register unsigned short int IOCPUA7 = 7;
    sbit  IOCPUA7_bit at CNPUA.B7;
    const register unsigned short int IOCPUA9 = 9;
    sbit  IOCPUA9_bit at CNPUA.B9;
    const register unsigned short int IOCPUA10 = 10;
    sbit  IOCPUA10_bit at CNPUA.B10;
    const register unsigned short int IOCPUA14 = 14;
    sbit  IOCPUA14_bit at CNPUA.B14;
    const register unsigned short int IOCPUA15 = 15;
    sbit  IOCPUA15_bit at CNPUA.B15;
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
    const register unsigned short int CNPUA5 = 5;
    sbit  CNPUA5_bit at CNPUA.B5;
    const register unsigned short int CNPUA6 = 6;
    sbit  CNPUA6_bit at CNPUA.B6;
    const register unsigned short int CNPUA7 = 7;
    sbit  CNPUA7_bit at CNPUA.B7;
    const register unsigned short int CNPUA9 = 9;
    sbit  CNPUA9_bit at CNPUA.B9;
    const register unsigned short int CNPUA10 = 10;
    sbit  CNPUA10_bit at CNPUA.B10;
    const register unsigned short int CNPUA14 = 14;
    sbit  CNPUA14_bit at CNPUA.B14;
    const register unsigned short int CNPUA15 = 15;
    sbit  CNPUA15_bit at CNPUA.B15;

sfr unsigned int   volatile IOCPUA           absolute 0x66E;
sfr unsigned int   volatile CNPDA            absolute 0x670;
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
    const register unsigned short int IOCPDA5 = 5;
    sbit  IOCPDA5_bit at CNPDA.B5;
    const register unsigned short int IOCPDA6 = 6;
    sbit  IOCPDA6_bit at CNPDA.B6;
    const register unsigned short int IOCPDA7 = 7;
    sbit  IOCPDA7_bit at CNPDA.B7;
    const register unsigned short int IOCPDA9 = 9;
    sbit  IOCPDA9_bit at CNPDA.B9;
    const register unsigned short int IOCPDA10 = 10;
    sbit  IOCPDA10_bit at CNPDA.B10;
    const register unsigned short int IOCPDA14 = 14;
    sbit  IOCPDA14_bit at CNPDA.B14;
    const register unsigned short int IOCPDA15 = 15;
    sbit  IOCPDA15_bit at CNPDA.B15;
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
    const register unsigned short int CNPDA5 = 5;
    sbit  CNPDA5_bit at CNPDA.B5;
    const register unsigned short int CNPDA6 = 6;
    sbit  CNPDA6_bit at CNPDA.B6;
    const register unsigned short int CNPDA7 = 7;
    sbit  CNPDA7_bit at CNPDA.B7;
    const register unsigned short int CNPDA9 = 9;
    sbit  CNPDA9_bit at CNPDA.B9;
    const register unsigned short int CNPDA10 = 10;
    sbit  CNPDA10_bit at CNPDA.B10;
    const register unsigned short int CNPDA14 = 14;
    sbit  CNPDA14_bit at CNPDA.B14;
    const register unsigned short int CNPDA15 = 15;
    sbit  CNPDA15_bit at CNPDA.B15;

sfr unsigned int   volatile IOCPDA           absolute 0x670;
sfr unsigned int   volatile TRISB            absolute 0x672;
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

sfr unsigned int   volatile PORTB            absolute 0x674;
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

sfr unsigned int   volatile LATB             absolute 0x676;
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

sfr unsigned int   volatile ODCB             absolute 0x678;
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

sfr unsigned int   volatile ANSB             absolute 0x67A;
    const register unsigned short int ANSB0 = 0;
    sbit  ANSB0_bit at ANSB.B0;
    const register unsigned short int ANSB1 = 1;
    sbit  ANSB1_bit at ANSB.B1;
    const register unsigned short int ANSB2 = 2;
    sbit  ANSB2_bit at ANSB.B2;
    const register unsigned short int ANSB3 = 3;
    sbit  ANSB3_bit at ANSB.B3;
    const register unsigned short int ANSB4 = 4;
    sbit  ANSB4_bit at ANSB.B4;
    const register unsigned short int ANSB5 = 5;
    sbit  ANSB5_bit at ANSB.B5;
    const register unsigned short int ANSB6 = 6;
    sbit  ANSB6_bit at ANSB.B6;
    const register unsigned short int ANSB7 = 7;
    sbit  ANSB7_bit at ANSB.B7;
    const register unsigned short int ANSB8 = 8;
    sbit  ANSB8_bit at ANSB.B8;
    const register unsigned short int ANSB9 = 9;
    sbit  ANSB9_bit at ANSB.B9;
    const register unsigned short int ANSB10 = 10;
    sbit  ANSB10_bit at ANSB.B10;
    const register unsigned short int ANSB11 = 11;
    sbit  ANSB11_bit at ANSB.B11;
    const register unsigned short int ANSB12 = 12;
    sbit  ANSB12_bit at ANSB.B12;
    const register unsigned short int ANSB13 = 13;
    sbit  ANSB13_bit at ANSB.B13;
    const register unsigned short int ANSB14 = 14;
    sbit  ANSB14_bit at ANSB.B14;
    const register unsigned short int ANSB15 = 15;
    sbit  ANSB15_bit at ANSB.B15;

sfr unsigned int   volatile IOCPB            absolute 0x67C;
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

sfr unsigned int   volatile IOCNB            absolute 0x67E;
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

sfr unsigned int   volatile IOCFB            absolute 0x680;
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

sfr unsigned int   volatile CNPUB            absolute 0x682;
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

sfr unsigned int   volatile IOCPUB           absolute 0x682;
sfr unsigned int   volatile CNPDB            absolute 0x684;
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

sfr unsigned int   volatile IOCPDB           absolute 0x684;
sfr unsigned int   volatile TRISC            absolute 0x686;
    const register unsigned short int TRISC12 = 12;
    sbit  TRISC12_bit at TRISC.B12;
    const register unsigned short int TRISC13 = 13;
    sbit  TRISC13_bit at TRISC.B13;
    const register unsigned short int TRISC14 = 14;
    sbit  TRISC14_bit at TRISC.B14;
    const register unsigned short int TRISC15 = 15;
    sbit  TRISC15_bit at TRISC.B15;

sfr unsigned int   volatile PORTC            absolute 0x688;
    const register unsigned short int RC12 = 12;
    sbit  RC12_bit at PORTC.B12;
    const register unsigned short int RC13 = 13;
    sbit  RC13_bit at PORTC.B13;
    const register unsigned short int RC14 = 14;
    sbit  RC14_bit at PORTC.B14;
    const register unsigned short int RC15 = 15;
    sbit  RC15_bit at PORTC.B15;

sfr unsigned int   volatile LATC             absolute 0x68A;
    const register unsigned short int LATC12 = 12;
    sbit  LATC12_bit at LATC.B12;
    const register unsigned short int LATC15 = 15;
    sbit  LATC15_bit at LATC.B15;

sfr unsigned int   volatile ODCC             absolute 0x68C;
    const register unsigned short int ODCC12 = 12;
    sbit  ODCC12_bit at ODCC.B12;
    const register unsigned short int ODCC15 = 15;
    sbit  ODCC15_bit at ODCC.B15;

sfr unsigned int   volatile ANSC             absolute 0x68E;
sfr unsigned int   volatile IOCPC            absolute 0x690;
    const register unsigned short int IOCPC12 = 12;
    sbit  IOCPC12_bit at IOCPC.B12;
    const register unsigned short int IOCPC13 = 13;
    sbit  IOCPC13_bit at IOCPC.B13;
    const register unsigned short int IOCPC14 = 14;
    sbit  IOCPC14_bit at IOCPC.B14;
    const register unsigned short int IOCPC15 = 15;
    sbit  IOCPC15_bit at IOCPC.B15;

sfr unsigned int   volatile IOCNC            absolute 0x692;
    const register unsigned short int IOCNC12 = 12;
    sbit  IOCNC12_bit at IOCNC.B12;
    const register unsigned short int IOCNC13 = 13;
    sbit  IOCNC13_bit at IOCNC.B13;
    const register unsigned short int IOCNC14 = 14;
    sbit  IOCNC14_bit at IOCNC.B14;
    const register unsigned short int IOCNC15 = 15;
    sbit  IOCNC15_bit at IOCNC.B15;

sfr unsigned int   volatile IOCFC            absolute 0x694;
    const register unsigned short int IOCFC12 = 12;
    sbit  IOCFC12_bit at IOCFC.B12;
    const register unsigned short int IOCFC13 = 13;
    sbit  IOCFC13_bit at IOCFC.B13;
    const register unsigned short int IOCFC14 = 14;
    sbit  IOCFC14_bit at IOCFC.B14;
    const register unsigned short int IOCFC15 = 15;
    sbit  IOCFC15_bit at IOCFC.B15;

sfr unsigned int   volatile CNPUC            absolute 0x696;
    const register unsigned short int IOCPUC12 = 12;
    sbit  IOCPUC12_bit at CNPUC.B12;
    const register unsigned short int IOCPUC15 = 15;
    sbit  IOCPUC15_bit at CNPUC.B15;
    const register unsigned short int CNPUC12 = 12;
    sbit  CNPUC12_bit at CNPUC.B12;
    const register unsigned short int CNPUC15 = 15;
    sbit  CNPUC15_bit at CNPUC.B15;

sfr unsigned int   volatile IOCPUC           absolute 0x696;
sfr unsigned int   volatile CNPDC            absolute 0x698;
    const register unsigned short int IOCPDC12 = 12;
    sbit  IOCPDC12_bit at CNPDC.B12;
    const register unsigned short int IOCPDC15 = 15;
    sbit  IOCPDC15_bit at CNPDC.B15;
    const register unsigned short int CNPDC12 = 12;
    sbit  CNPDC12_bit at CNPDC.B12;
    const register unsigned short int CNPDC15 = 15;
    sbit  CNPDC15_bit at CNPDC.B15;

sfr unsigned int   volatile IOCPDC           absolute 0x698;
sfr unsigned int   volatile TRISD            absolute 0x69A;
    const register unsigned short int TRISD0 = 0;
    sbit  TRISD0_bit at TRISD.B0;
    const register unsigned short int TRISD1 = 1;
    sbit  TRISD1_bit at TRISD.B1;
    const register unsigned short int TRISD2 = 2;
    sbit  TRISD2_bit at TRISD.B2;
    const register unsigned short int TRISD3 = 3;
    sbit  TRISD3_bit at TRISD.B3;
    const register unsigned short int TRISD4 = 4;
    sbit  TRISD4_bit at TRISD.B4;
    const register unsigned short int TRISD5 = 5;
    sbit  TRISD5_bit at TRISD.B5;
    const register unsigned short int TRISD6 = 6;
    sbit  TRISD6_bit at TRISD.B6;
    const register unsigned short int TRISD7 = 7;
    sbit  TRISD7_bit at TRISD.B7;
    const register unsigned short int TRISD8 = 8;
    sbit  TRISD8_bit at TRISD.B8;
    const register unsigned short int TRISD9 = 9;
    sbit  TRISD9_bit at TRISD.B9;
    const register unsigned short int TRISD10 = 10;
    sbit  TRISD10_bit at TRISD.B10;
    const register unsigned short int TRISD11 = 11;
    sbit  TRISD11_bit at TRISD.B11;

sfr unsigned int   volatile PORTD            absolute 0x69C;
    const register unsigned short int RD0 = 0;
    sbit  RD0_bit at PORTD.B0;
    const register unsigned short int RD1 = 1;
    sbit  RD1_bit at PORTD.B1;
    const register unsigned short int RD2 = 2;
    sbit  RD2_bit at PORTD.B2;
    const register unsigned short int RD3 = 3;
    sbit  RD3_bit at PORTD.B3;
    const register unsigned short int RD4 = 4;
    sbit  RD4_bit at PORTD.B4;
    const register unsigned short int RD5 = 5;
    sbit  RD5_bit at PORTD.B5;
    const register unsigned short int RD6 = 6;
    sbit  RD6_bit at PORTD.B6;
    const register unsigned short int RD7 = 7;
    sbit  RD7_bit at PORTD.B7;
    const register unsigned short int RD8 = 8;
    sbit  RD8_bit at PORTD.B8;
    const register unsigned short int RD9 = 9;
    sbit  RD9_bit at PORTD.B9;
    const register unsigned short int RD10 = 10;
    sbit  RD10_bit at PORTD.B10;
    const register unsigned short int RD11 = 11;
    sbit  RD11_bit at PORTD.B11;

sfr unsigned int   volatile LATD             absolute 0x69E;
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
    const register unsigned short int LATD8 = 8;
    sbit  LATD8_bit at LATD.B8;
    const register unsigned short int LATD9 = 9;
    sbit  LATD9_bit at LATD.B9;
    const register unsigned short int LATD10 = 10;
    sbit  LATD10_bit at LATD.B10;
    const register unsigned short int LATD11 = 11;
    sbit  LATD11_bit at LATD.B11;

sfr unsigned int   volatile ODCD             absolute 0x6A0;
    const register unsigned short int ODCD0 = 0;
    sbit  ODCD0_bit at ODCD.B0;
    const register unsigned short int ODCD1 = 1;
    sbit  ODCD1_bit at ODCD.B1;
    const register unsigned short int ODCD2 = 2;
    sbit  ODCD2_bit at ODCD.B2;
    const register unsigned short int ODCD3 = 3;
    sbit  ODCD3_bit at ODCD.B3;
    const register unsigned short int ODCD4 = 4;
    sbit  ODCD4_bit at ODCD.B4;
    const register unsigned short int ODCD5 = 5;
    sbit  ODCD5_bit at ODCD.B5;
    const register unsigned short int ODCD6 = 6;
    sbit  ODCD6_bit at ODCD.B6;
    const register unsigned short int ODCD7 = 7;
    sbit  ODCD7_bit at ODCD.B7;
    const register unsigned short int ODCD8 = 8;
    sbit  ODCD8_bit at ODCD.B8;
    const register unsigned short int ODCD9 = 9;
    sbit  ODCD9_bit at ODCD.B9;
    const register unsigned short int ODCD10 = 10;
    sbit  ODCD10_bit at ODCD.B10;
    const register unsigned short int ODCD11 = 11;
    sbit  ODCD11_bit at ODCD.B11;

sfr unsigned int   volatile ANSD             absolute 0x6A2;
    const register unsigned short int ANSD0 = 0;
    sbit  ANSD0_bit at ANSD.B0;
    const register unsigned short int ANSD1 = 1;
    sbit  ANSD1_bit at ANSD.B1;
    const register unsigned short int ANSD2 = 2;
    sbit  ANSD2_bit at ANSD.B2;
    const register unsigned short int ANSD3 = 3;
    sbit  ANSD3_bit at ANSD.B3;
    const register unsigned short int ANSD4 = 4;
    sbit  ANSD4_bit at ANSD.B4;
    const register unsigned short int ANSD5 = 5;
    sbit  ANSD5_bit at ANSD.B5;
    const register unsigned short int ANSD6 = 6;
    sbit  ANSD6_bit at ANSD.B6;
    const register unsigned short int ANSD7 = 7;
    sbit  ANSD7_bit at ANSD.B7;
    const register unsigned short int ANSD8 = 8;
    sbit  ANSD8_bit at ANSD.B8;
    const register unsigned short int ANSD9 = 9;
    sbit  ANSD9_bit at ANSD.B9;
    const register unsigned short int ANSD10 = 10;
    sbit  ANSD10_bit at ANSD.B10;
    const register unsigned short int ANSD11 = 11;
    sbit  ANSD11_bit at ANSD.B11;

sfr unsigned int   volatile IOCPD            absolute 0x6A4;
    const register unsigned short int IOCPD0 = 0;
    sbit  IOCPD0_bit at IOCPD.B0;
    const register unsigned short int IOCPD1 = 1;
    sbit  IOCPD1_bit at IOCPD.B1;
    const register unsigned short int IOCPD2 = 2;
    sbit  IOCPD2_bit at IOCPD.B2;
    const register unsigned short int IOCPD3 = 3;
    sbit  IOCPD3_bit at IOCPD.B3;
    const register unsigned short int IOCPD4 = 4;
    sbit  IOCPD4_bit at IOCPD.B4;
    const register unsigned short int IOCPD5 = 5;
    sbit  IOCPD5_bit at IOCPD.B5;
    const register unsigned short int IOCPD6 = 6;
    sbit  IOCPD6_bit at IOCPD.B6;
    const register unsigned short int IOCPD7 = 7;
    sbit  IOCPD7_bit at IOCPD.B7;
    const register unsigned short int IOCPD8 = 8;
    sbit  IOCPD8_bit at IOCPD.B8;
    const register unsigned short int IOCPD9 = 9;
    sbit  IOCPD9_bit at IOCPD.B9;
    const register unsigned short int IOCPD10 = 10;
    sbit  IOCPD10_bit at IOCPD.B10;
    const register unsigned short int IOCPD11 = 11;
    sbit  IOCPD11_bit at IOCPD.B11;

sfr unsigned int   volatile IOCND            absolute 0x6A6;
    const register unsigned short int IOCND0 = 0;
    sbit  IOCND0_bit at IOCND.B0;
    const register unsigned short int IOCND1 = 1;
    sbit  IOCND1_bit at IOCND.B1;
    const register unsigned short int IOCND2 = 2;
    sbit  IOCND2_bit at IOCND.B2;
    const register unsigned short int IOCND3 = 3;
    sbit  IOCND3_bit at IOCND.B3;
    const register unsigned short int IOCND4 = 4;
    sbit  IOCND4_bit at IOCND.B4;
    const register unsigned short int IOCND5 = 5;
    sbit  IOCND5_bit at IOCND.B5;
    const register unsigned short int IOCND6 = 6;
    sbit  IOCND6_bit at IOCND.B6;
    const register unsigned short int IOCND7 = 7;
    sbit  IOCND7_bit at IOCND.B7;
    const register unsigned short int IOCND8 = 8;
    sbit  IOCND8_bit at IOCND.B8;
    const register unsigned short int IOCND9 = 9;
    sbit  IOCND9_bit at IOCND.B9;
    const register unsigned short int IOCND10 = 10;
    sbit  IOCND10_bit at IOCND.B10;
    const register unsigned short int IOCND11 = 11;
    sbit  IOCND11_bit at IOCND.B11;

sfr unsigned int   volatile IOCFD            absolute 0x6A8;
    const register unsigned short int IOCFD0 = 0;
    sbit  IOCFD0_bit at IOCFD.B0;
    const register unsigned short int IOCFD1 = 1;
    sbit  IOCFD1_bit at IOCFD.B1;
    const register unsigned short int IOCFD2 = 2;
    sbit  IOCFD2_bit at IOCFD.B2;
    const register unsigned short int IOCFD3 = 3;
    sbit  IOCFD3_bit at IOCFD.B3;
    const register unsigned short int IOCFD4 = 4;
    sbit  IOCFD4_bit at IOCFD.B4;
    const register unsigned short int IOCFD5 = 5;
    sbit  IOCFD5_bit at IOCFD.B5;
    const register unsigned short int IOCFD6 = 6;
    sbit  IOCFD6_bit at IOCFD.B6;
    const register unsigned short int IOCFD7 = 7;
    sbit  IOCFD7_bit at IOCFD.B7;
    const register unsigned short int IOCFD8 = 8;
    sbit  IOCFD8_bit at IOCFD.B8;
    const register unsigned short int IOCFD9 = 9;
    sbit  IOCFD9_bit at IOCFD.B9;
    const register unsigned short int IOCFD10 = 10;
    sbit  IOCFD10_bit at IOCFD.B10;
    const register unsigned short int IOCFD11 = 11;
    sbit  IOCFD11_bit at IOCFD.B11;

sfr unsigned int   volatile CNPUD            absolute 0x6AA;
    const register unsigned short int IOCPUD0 = 0;
    sbit  IOCPUD0_bit at CNPUD.B0;
    const register unsigned short int IOCPUD1 = 1;
    sbit  IOCPUD1_bit at CNPUD.B1;
    const register unsigned short int IOCPUD2 = 2;
    sbit  IOCPUD2_bit at CNPUD.B2;
    const register unsigned short int IOCPUD3 = 3;
    sbit  IOCPUD3_bit at CNPUD.B3;
    const register unsigned short int IOCPUD4 = 4;
    sbit  IOCPUD4_bit at CNPUD.B4;
    const register unsigned short int IOCPUD5 = 5;
    sbit  IOCPUD5_bit at CNPUD.B5;
    const register unsigned short int IOCPUD6 = 6;
    sbit  IOCPUD6_bit at CNPUD.B6;
    const register unsigned short int IOCPUD7 = 7;
    sbit  IOCPUD7_bit at CNPUD.B7;
    const register unsigned short int IOCPUD8 = 8;
    sbit  IOCPUD8_bit at CNPUD.B8;
    const register unsigned short int IOCPUD9 = 9;
    sbit  IOCPUD9_bit at CNPUD.B9;
    const register unsigned short int IOCPUD10 = 10;
    sbit  IOCPUD10_bit at CNPUD.B10;
    const register unsigned short int IOCPUD11 = 11;
    sbit  IOCPUD11_bit at CNPUD.B11;
    const register unsigned short int CNPUD0 = 0;
    sbit  CNPUD0_bit at CNPUD.B0;
    const register unsigned short int CNPUD1 = 1;
    sbit  CNPUD1_bit at CNPUD.B1;
    const register unsigned short int CNPUD2 = 2;
    sbit  CNPUD2_bit at CNPUD.B2;
    const register unsigned short int CNPUD3 = 3;
    sbit  CNPUD3_bit at CNPUD.B3;
    const register unsigned short int CNPUD4 = 4;
    sbit  CNPUD4_bit at CNPUD.B4;
    const register unsigned short int CNPUD5 = 5;
    sbit  CNPUD5_bit at CNPUD.B5;
    const register unsigned short int CNPUD6 = 6;
    sbit  CNPUD6_bit at CNPUD.B6;
    const register unsigned short int CNPUD7 = 7;
    sbit  CNPUD7_bit at CNPUD.B7;
    const register unsigned short int CNPUD8 = 8;
    sbit  CNPUD8_bit at CNPUD.B8;
    const register unsigned short int CNPUD9 = 9;
    sbit  CNPUD9_bit at CNPUD.B9;
    const register unsigned short int CNPUD10 = 10;
    sbit  CNPUD10_bit at CNPUD.B10;
    const register unsigned short int CNPUD11 = 11;
    sbit  CNPUD11_bit at CNPUD.B11;

sfr unsigned int   volatile IOCPUD           absolute 0x6AA;
sfr unsigned int   volatile CNPDD            absolute 0x6AC;
    const register unsigned short int IOCPDD0 = 0;
    sbit  IOCPDD0_bit at CNPDD.B0;
    const register unsigned short int IOCPDD1 = 1;
    sbit  IOCPDD1_bit at CNPDD.B1;
    const register unsigned short int IOCPDD2 = 2;
    sbit  IOCPDD2_bit at CNPDD.B2;
    const register unsigned short int IOCPDD3 = 3;
    sbit  IOCPDD3_bit at CNPDD.B3;
    const register unsigned short int IOCPDD4 = 4;
    sbit  IOCPDD4_bit at CNPDD.B4;
    const register unsigned short int IOCPDD5 = 5;
    sbit  IOCPDD5_bit at CNPDD.B5;
    const register unsigned short int IOCPDD6 = 6;
    sbit  IOCPDD6_bit at CNPDD.B6;
    const register unsigned short int IOCPDD7 = 7;
    sbit  IOCPDD7_bit at CNPDD.B7;
    const register unsigned short int IOCPDD8 = 8;
    sbit  IOCPDD8_bit at CNPDD.B8;
    const register unsigned short int IOCPDD9 = 9;
    sbit  IOCPDD9_bit at CNPDD.B9;
    const register unsigned short int IOCPDD10 = 10;
    sbit  IOCPDD10_bit at CNPDD.B10;
    const register unsigned short int IOCPDD11 = 11;
    sbit  IOCPDD11_bit at CNPDD.B11;
    const register unsigned short int CNPDD0 = 0;
    sbit  CNPDD0_bit at CNPDD.B0;
    const register unsigned short int CNPDD1 = 1;
    sbit  CNPDD1_bit at CNPDD.B1;
    const register unsigned short int CNPDD2 = 2;
    sbit  CNPDD2_bit at CNPDD.B2;
    const register unsigned short int CNPDD3 = 3;
    sbit  CNPDD3_bit at CNPDD.B3;
    const register unsigned short int CNPDD4 = 4;
    sbit  CNPDD4_bit at CNPDD.B4;
    const register unsigned short int CNPDD5 = 5;
    sbit  CNPDD5_bit at CNPDD.B5;
    const register unsigned short int CNPDD6 = 6;
    sbit  CNPDD6_bit at CNPDD.B6;
    const register unsigned short int CNPDD7 = 7;
    sbit  CNPDD7_bit at CNPDD.B7;
    const register unsigned short int CNPDD8 = 8;
    sbit  CNPDD8_bit at CNPDD.B8;
    const register unsigned short int CNPDD9 = 9;
    sbit  CNPDD9_bit at CNPDD.B9;
    const register unsigned short int CNPDD10 = 10;
    sbit  CNPDD10_bit at CNPDD.B10;
    const register unsigned short int CNPDD11 = 11;
    sbit  CNPDD11_bit at CNPDD.B11;

sfr unsigned int   volatile IOCPDD           absolute 0x6AC;
sfr unsigned int   volatile TRISE            absolute 0x6AE;
    const register unsigned short int TRISE0 = 0;
    sbit  TRISE0_bit at TRISE.B0;
    const register unsigned short int TRISE1 = 1;
    sbit  TRISE1_bit at TRISE.B1;
    const register unsigned short int TRISE2 = 2;
    sbit  TRISE2_bit at TRISE.B2;
    const register unsigned short int TRISE3 = 3;
    sbit  TRISE3_bit at TRISE.B3;
    const register unsigned short int TRISE4 = 4;
    sbit  TRISE4_bit at TRISE.B4;
    const register unsigned short int TRISE5 = 5;
    sbit  TRISE5_bit at TRISE.B5;
    const register unsigned short int TRISE6 = 6;
    sbit  TRISE6_bit at TRISE.B6;
    const register unsigned short int TRISE7 = 7;
    sbit  TRISE7_bit at TRISE.B7;

sfr unsigned int   volatile PORTE            absolute 0x6B0;
    const register unsigned short int RE0 = 0;
    sbit  RE0_bit at PORTE.B0;
    const register unsigned short int RE1 = 1;
    sbit  RE1_bit at PORTE.B1;
    const register unsigned short int RE2 = 2;
    sbit  RE2_bit at PORTE.B2;
    const register unsigned short int RE3 = 3;
    sbit  RE3_bit at PORTE.B3;
    const register unsigned short int RE4 = 4;
    sbit  RE4_bit at PORTE.B4;
    const register unsigned short int RE5 = 5;
    sbit  RE5_bit at PORTE.B5;
    const register unsigned short int RE6 = 6;
    sbit  RE6_bit at PORTE.B6;
    const register unsigned short int RE7 = 7;
    sbit  RE7_bit at PORTE.B7;

sfr unsigned int   volatile LATE             absolute 0x6B2;
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

sfr unsigned int   volatile ODCE             absolute 0x6B4;
    const register unsigned short int ODCE0 = 0;
    sbit  ODCE0_bit at ODCE.B0;
    const register unsigned short int ODCE1 = 1;
    sbit  ODCE1_bit at ODCE.B1;
    const register unsigned short int ODCE2 = 2;
    sbit  ODCE2_bit at ODCE.B2;
    const register unsigned short int ODCE3 = 3;
    sbit  ODCE3_bit at ODCE.B3;
    const register unsigned short int ODCE4 = 4;
    sbit  ODCE4_bit at ODCE.B4;
    const register unsigned short int ODCE5 = 5;
    sbit  ODCE5_bit at ODCE.B5;
    const register unsigned short int ODCE6 = 6;
    sbit  ODCE6_bit at ODCE.B6;
    const register unsigned short int ODCE7 = 7;
    sbit  ODCE7_bit at ODCE.B7;

sfr unsigned int   volatile ANSE             absolute 0x6B6;
    const register unsigned short int ANSE0 = 0;
    sbit  ANSE0_bit at ANSE.B0;
    const register unsigned short int ANSE1 = 1;
    sbit  ANSE1_bit at ANSE.B1;
    const register unsigned short int ANSE2 = 2;
    sbit  ANSE2_bit at ANSE.B2;
    const register unsigned short int ANSE3 = 3;
    sbit  ANSE3_bit at ANSE.B3;
    const register unsigned short int ANSE4 = 4;
    sbit  ANSE4_bit at ANSE.B4;
    const register unsigned short int ANSE5 = 5;
    sbit  ANSE5_bit at ANSE.B5;
    const register unsigned short int ANSE6 = 6;
    sbit  ANSE6_bit at ANSE.B6;
    const register unsigned short int ANSE7 = 7;
    sbit  ANSE7_bit at ANSE.B7;

sfr unsigned int   volatile IOCPE            absolute 0x6B8;
    const register unsigned short int IOCPE0 = 0;
    sbit  IOCPE0_bit at IOCPE.B0;
    const register unsigned short int IOCPE1 = 1;
    sbit  IOCPE1_bit at IOCPE.B1;
    const register unsigned short int IOCPE2 = 2;
    sbit  IOCPE2_bit at IOCPE.B2;
    const register unsigned short int IOCPE3 = 3;
    sbit  IOCPE3_bit at IOCPE.B3;
    const register unsigned short int IOCPE4 = 4;
    sbit  IOCPE4_bit at IOCPE.B4;
    const register unsigned short int IOCPE5 = 5;
    sbit  IOCPE5_bit at IOCPE.B5;
    const register unsigned short int IOCPE6 = 6;
    sbit  IOCPE6_bit at IOCPE.B6;
    const register unsigned short int IOCPE7 = 7;
    sbit  IOCPE7_bit at IOCPE.B7;

sfr unsigned int   volatile IOCNE            absolute 0x6BA;
    const register unsigned short int IOCNE0 = 0;
    sbit  IOCNE0_bit at IOCNE.B0;
    const register unsigned short int IOCNE1 = 1;
    sbit  IOCNE1_bit at IOCNE.B1;
    const register unsigned short int IOCNE2 = 2;
    sbit  IOCNE2_bit at IOCNE.B2;
    const register unsigned short int IOCNE3 = 3;
    sbit  IOCNE3_bit at IOCNE.B3;
    const register unsigned short int IOCNE4 = 4;
    sbit  IOCNE4_bit at IOCNE.B4;
    const register unsigned short int IOCNE5 = 5;
    sbit  IOCNE5_bit at IOCNE.B5;
    const register unsigned short int IOCNE6 = 6;
    sbit  IOCNE6_bit at IOCNE.B6;
    const register unsigned short int IOCNE7 = 7;
    sbit  IOCNE7_bit at IOCNE.B7;

sfr unsigned int   volatile IOCFE            absolute 0x6BC;
    const register unsigned short int IOCFE0 = 0;
    sbit  IOCFE0_bit at IOCFE.B0;
    const register unsigned short int IOCFE1 = 1;
    sbit  IOCFE1_bit at IOCFE.B1;
    const register unsigned short int IOCFE2 = 2;
    sbit  IOCFE2_bit at IOCFE.B2;
    const register unsigned short int IOCFE3 = 3;
    sbit  IOCFE3_bit at IOCFE.B3;
    const register unsigned short int IOCFE4 = 4;
    sbit  IOCFE4_bit at IOCFE.B4;
    const register unsigned short int IOCFE5 = 5;
    sbit  IOCFE5_bit at IOCFE.B5;
    const register unsigned short int IOCFE6 = 6;
    sbit  IOCFE6_bit at IOCFE.B6;
    const register unsigned short int IOCFE7 = 7;
    sbit  IOCFE7_bit at IOCFE.B7;

sfr unsigned int   volatile CNPUE            absolute 0x6BE;
    const register unsigned short int IOCPUE0 = 0;
    sbit  IOCPUE0_bit at CNPUE.B0;
    const register unsigned short int IOCPUE1 = 1;
    sbit  IOCPUE1_bit at CNPUE.B1;
    const register unsigned short int IOCPUE2 = 2;
    sbit  IOCPUE2_bit at CNPUE.B2;
    const register unsigned short int IOCPUE3 = 3;
    sbit  IOCPUE3_bit at CNPUE.B3;
    const register unsigned short int IOCPUE4 = 4;
    sbit  IOCPUE4_bit at CNPUE.B4;
    const register unsigned short int IOCPUE5 = 5;
    sbit  IOCPUE5_bit at CNPUE.B5;
    const register unsigned short int IOCPUE6 = 6;
    sbit  IOCPUE6_bit at CNPUE.B6;
    const register unsigned short int IOCPUE7 = 7;
    sbit  IOCPUE7_bit at CNPUE.B7;
    const register unsigned short int CNPUE0 = 0;
    sbit  CNPUE0_bit at CNPUE.B0;
    const register unsigned short int CNPUE1 = 1;
    sbit  CNPUE1_bit at CNPUE.B1;
    const register unsigned short int CNPUE2 = 2;
    sbit  CNPUE2_bit at CNPUE.B2;
    const register unsigned short int CNPUE3 = 3;
    sbit  CNPUE3_bit at CNPUE.B3;
    const register unsigned short int CNPUE4 = 4;
    sbit  CNPUE4_bit at CNPUE.B4;
    const register unsigned short int CNPUE5 = 5;
    sbit  CNPUE5_bit at CNPUE.B5;
    const register unsigned short int CNPUE6 = 6;
    sbit  CNPUE6_bit at CNPUE.B6;
    const register unsigned short int CNPUE7 = 7;
    sbit  CNPUE7_bit at CNPUE.B7;

sfr unsigned int   volatile IOCPUE           absolute 0x6BE;
sfr unsigned int   volatile CNPDE            absolute 0x6C0;
    const register unsigned short int IOCPDE0 = 0;
    sbit  IOCPDE0_bit at CNPDE.B0;
    const register unsigned short int IOCPDE1 = 1;
    sbit  IOCPDE1_bit at CNPDE.B1;
    const register unsigned short int IOCPDE2 = 2;
    sbit  IOCPDE2_bit at CNPDE.B2;
    const register unsigned short int IOCPDE3 = 3;
    sbit  IOCPDE3_bit at CNPDE.B3;
    const register unsigned short int IOCPDE4 = 4;
    sbit  IOCPDE4_bit at CNPDE.B4;
    const register unsigned short int IOCPDE5 = 5;
    sbit  IOCPDE5_bit at CNPDE.B5;
    const register unsigned short int IOCPDE6 = 6;
    sbit  IOCPDE6_bit at CNPDE.B6;
    const register unsigned short int IOCPDE7 = 7;
    sbit  IOCPDE7_bit at CNPDE.B7;
    const register unsigned short int CNPDE0 = 0;
    sbit  CNPDE0_bit at CNPDE.B0;
    const register unsigned short int CNPDE1 = 1;
    sbit  CNPDE1_bit at CNPDE.B1;
    const register unsigned short int CNPDE2 = 2;
    sbit  CNPDE2_bit at CNPDE.B2;
    const register unsigned short int CNPDE3 = 3;
    sbit  CNPDE3_bit at CNPDE.B3;
    const register unsigned short int CNPDE4 = 4;
    sbit  CNPDE4_bit at CNPDE.B4;
    const register unsigned short int CNPDE5 = 5;
    sbit  CNPDE5_bit at CNPDE.B5;
    const register unsigned short int CNPDE6 = 6;
    sbit  CNPDE6_bit at CNPDE.B6;
    const register unsigned short int CNPDE7 = 7;
    sbit  CNPDE7_bit at CNPDE.B7;

sfr unsigned int   volatile IOCPDE           absolute 0x6C0;
sfr unsigned int   volatile TRISF            absolute 0x6C2;
    const register unsigned short int TRISF0 = 0;
    sbit  TRISF0_bit at TRISF.B0;
    const register unsigned short int TRISF1 = 1;
    sbit  TRISF1_bit at TRISF.B1;
    const register unsigned short int TRISF2 = 2;
    sbit  TRISF2_bit at TRISF.B2;
    const register unsigned short int TRISF3 = 3;
    sbit  TRISF3_bit at TRISF.B3;
    const register unsigned short int TRISF4 = 4;
    sbit  TRISF4_bit at TRISF.B4;
    const register unsigned short int TRISF5 = 5;
    sbit  TRISF5_bit at TRISF.B5;
    const register unsigned short int TRISF6 = 6;
    sbit  TRISF6_bit at TRISF.B6;
    const register unsigned short int TRISF7 = 7;
    sbit  TRISF7_bit at TRISF.B7;
    const register unsigned short int TRISF8 = 8;
    sbit  TRISF8_bit at TRISF.B8;
    const register unsigned short int TRISF12 = 12;
    sbit  TRISF12_bit at TRISF.B12;
    const register unsigned short int TRISF13 = 13;
    sbit  TRISF13_bit at TRISF.B13;

sfr unsigned int   volatile PORTF            absolute 0x6C4;
    const register unsigned short int RF0 = 0;
    sbit  RF0_bit at PORTF.B0;
    const register unsigned short int RF1 = 1;
    sbit  RF1_bit at PORTF.B1;
    const register unsigned short int RF2 = 2;
    sbit  RF2_bit at PORTF.B2;
    const register unsigned short int RF3 = 3;
    sbit  RF3_bit at PORTF.B3;
    const register unsigned short int RF4 = 4;
    sbit  RF4_bit at PORTF.B4;
    const register unsigned short int RF5 = 5;
    sbit  RF5_bit at PORTF.B5;
    const register unsigned short int RF6 = 6;
    sbit  RF6_bit at PORTF.B6;
    const register unsigned short int RF7 = 7;
    sbit  RF7_bit at PORTF.B7;
    const register unsigned short int RF8 = 8;
    sbit  RF8_bit at PORTF.B8;
    const register unsigned short int RF12 = 12;
    sbit  RF12_bit at PORTF.B12;
    const register unsigned short int RF13 = 13;
    sbit  RF13_bit at PORTF.B13;

sfr unsigned int   volatile LATF             absolute 0x6C6;
    const register unsigned short int LATF0 = 0;
    sbit  LATF0_bit at LATF.B0;
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
    const register unsigned short int LATF8 = 8;
    sbit  LATF8_bit at LATF.B8;
    const register unsigned short int LATF12 = 12;
    sbit  LATF12_bit at LATF.B12;
    const register unsigned short int LATF13 = 13;
    sbit  LATF13_bit at LATF.B13;

sfr unsigned int   volatile ODCF             absolute 0x6C8;
    const register unsigned short int ODCF0 = 0;
    sbit  ODCF0_bit at ODCF.B0;
    const register unsigned short int ODCF1 = 1;
    sbit  ODCF1_bit at ODCF.B1;
    const register unsigned short int ODCF2 = 2;
    sbit  ODCF2_bit at ODCF.B2;
    const register unsigned short int ODCF3 = 3;
    sbit  ODCF3_bit at ODCF.B3;
    const register unsigned short int ODCF4 = 4;
    sbit  ODCF4_bit at ODCF.B4;
    const register unsigned short int ODCF5 = 5;
    sbit  ODCF5_bit at ODCF.B5;
    const register unsigned short int ODCF6 = 6;
    sbit  ODCF6_bit at ODCF.B6;
    const register unsigned short int ODCF7 = 7;
    sbit  ODCF7_bit at ODCF.B7;
    const register unsigned short int ODCF8 = 8;
    sbit  ODCF8_bit at ODCF.B8;
    const register unsigned short int ODCF12 = 12;
    sbit  ODCF12_bit at ODCF.B12;
    const register unsigned short int ODCF13 = 13;
    sbit  ODCF13_bit at ODCF.B13;

sfr unsigned int   volatile ANSF             absolute 0x6CA;
    const register unsigned short int ANSF0 = 0;
    sbit  ANSF0_bit at ANSF.B0;
    const register unsigned short int ANSF1 = 1;
    sbit  ANSF1_bit at ANSF.B1;
    const register unsigned short int ANSF2 = 2;
    sbit  ANSF2_bit at ANSF.B2;
    const register unsigned short int ANSF3 = 3;
    sbit  ANSF3_bit at ANSF.B3;
    const register unsigned short int ANSF4 = 4;
    sbit  ANSF4_bit at ANSF.B4;
    const register unsigned short int ANSF5 = 5;
    sbit  ANSF5_bit at ANSF.B5;
    const register unsigned short int ANSF8 = 8;
    sbit  ANSF8_bit at ANSF.B8;
    const register unsigned short int ANSF12 = 12;
    sbit  ANSF12_bit at ANSF.B12;
    const register unsigned short int ANSF13 = 13;
    sbit  ANSF13_bit at ANSF.B13;

sfr unsigned int   volatile IOCPF            absolute 0x6CC;
    const register unsigned short int IOCPF0 = 0;
    sbit  IOCPF0_bit at IOCPF.B0;
    const register unsigned short int IOCPF1 = 1;
    sbit  IOCPF1_bit at IOCPF.B1;
    const register unsigned short int IOCPF2 = 2;
    sbit  IOCPF2_bit at IOCPF.B2;
    const register unsigned short int IOCPF3 = 3;
    sbit  IOCPF3_bit at IOCPF.B3;
    const register unsigned short int IOCPF4 = 4;
    sbit  IOCPF4_bit at IOCPF.B4;
    const register unsigned short int IOCPF5 = 5;
    sbit  IOCPF5_bit at IOCPF.B5;
    const register unsigned short int IOCPF6 = 6;
    sbit  IOCPF6_bit at IOCPF.B6;
    const register unsigned short int IOCPF7 = 7;
    sbit  IOCPF7_bit at IOCPF.B7;
    const register unsigned short int IOCPF8 = 8;
    sbit  IOCPF8_bit at IOCPF.B8;
    const register unsigned short int IOCPF12 = 12;
    sbit  IOCPF12_bit at IOCPF.B12;
    const register unsigned short int IOCPF13 = 13;
    sbit  IOCPF13_bit at IOCPF.B13;

sfr unsigned int   volatile IOCNF            absolute 0x6CE;
    const register unsigned short int IOCNF0 = 0;
    sbit  IOCNF0_bit at IOCNF.B0;
    const register unsigned short int IOCNF1 = 1;
    sbit  IOCNF1_bit at IOCNF.B1;
    const register unsigned short int IOCNF2 = 2;
    sbit  IOCNF2_bit at IOCNF.B2;
    const register unsigned short int IOCNF3 = 3;
    sbit  IOCNF3_bit at IOCNF.B3;
    const register unsigned short int IOCNF4 = 4;
    sbit  IOCNF4_bit at IOCNF.B4;
    const register unsigned short int IOCNF5 = 5;
    sbit  IOCNF5_bit at IOCNF.B5;
    const register unsigned short int IOCNF6 = 6;
    sbit  IOCNF6_bit at IOCNF.B6;
    const register unsigned short int IOCNF7 = 7;
    sbit  IOCNF7_bit at IOCNF.B7;
    const register unsigned short int IOCNF8 = 8;
    sbit  IOCNF8_bit at IOCNF.B8;
    const register unsigned short int IOCNF12 = 12;
    sbit  IOCNF12_bit at IOCNF.B12;
    const register unsigned short int IOCNF13 = 13;
    sbit  IOCNF13_bit at IOCNF.B13;

sfr unsigned int   volatile IOCFF            absolute 0x6D0;
    const register unsigned short int IOCFF0 = 0;
    sbit  IOCFF0_bit at IOCFF.B0;
    const register unsigned short int IOCFF1 = 1;
    sbit  IOCFF1_bit at IOCFF.B1;
    const register unsigned short int IOCFF2 = 2;
    sbit  IOCFF2_bit at IOCFF.B2;
    const register unsigned short int IOCFF3 = 3;
    sbit  IOCFF3_bit at IOCFF.B3;
    const register unsigned short int IOCFF4 = 4;
    sbit  IOCFF4_bit at IOCFF.B4;
    const register unsigned short int IOCFF5 = 5;
    sbit  IOCFF5_bit at IOCFF.B5;
    const register unsigned short int IOCFF6 = 6;
    sbit  IOCFF6_bit at IOCFF.B6;
    const register unsigned short int IOCFF7 = 7;
    sbit  IOCFF7_bit at IOCFF.B7;
    const register unsigned short int IOCFF8 = 8;
    sbit  IOCFF8_bit at IOCFF.B8;
    const register unsigned short int IOCFF12 = 12;
    sbit  IOCFF12_bit at IOCFF.B12;
    const register unsigned short int IOCFF13 = 13;
    sbit  IOCFF13_bit at IOCFF.B13;

sfr unsigned int   volatile CNPUF            absolute 0x6D2;
    const register unsigned short int IOCPUF0 = 0;
    sbit  IOCPUF0_bit at CNPUF.B0;
    const register unsigned short int IOCPUF1 = 1;
    sbit  IOCPUF1_bit at CNPUF.B1;
    const register unsigned short int IOCPUF2 = 2;
    sbit  IOCPUF2_bit at CNPUF.B2;
    const register unsigned short int IOCPUF3 = 3;
    sbit  IOCPUF3_bit at CNPUF.B3;
    const register unsigned short int IOCPUF4 = 4;
    sbit  IOCPUF4_bit at CNPUF.B4;
    const register unsigned short int IOCPUF5 = 5;
    sbit  IOCPUF5_bit at CNPUF.B5;
    const register unsigned short int IOCPUF6 = 6;
    sbit  IOCPUF6_bit at CNPUF.B6;
    const register unsigned short int IOCPUF7 = 7;
    sbit  IOCPUF7_bit at CNPUF.B7;
    const register unsigned short int IOCPUF8 = 8;
    sbit  IOCPUF8_bit at CNPUF.B8;
    const register unsigned short int IOCPUF12 = 12;
    sbit  IOCPUF12_bit at CNPUF.B12;
    const register unsigned short int IOCPUF13 = 13;
    sbit  IOCPUF13_bit at CNPUF.B13;
    const register unsigned short int CNPUF0 = 0;
    sbit  CNPUF0_bit at CNPUF.B0;
    const register unsigned short int CNPUF1 = 1;
    sbit  CNPUF1_bit at CNPUF.B1;
    const register unsigned short int CNPUF2 = 2;
    sbit  CNPUF2_bit at CNPUF.B2;
    const register unsigned short int CNPUF3 = 3;
    sbit  CNPUF3_bit at CNPUF.B3;
    const register unsigned short int CNPUF4 = 4;
    sbit  CNPUF4_bit at CNPUF.B4;
    const register unsigned short int CNPUF5 = 5;
    sbit  CNPUF5_bit at CNPUF.B5;
    const register unsigned short int CNPUF6 = 6;
    sbit  CNPUF6_bit at CNPUF.B6;
    const register unsigned short int CNPUF7 = 7;
    sbit  CNPUF7_bit at CNPUF.B7;
    const register unsigned short int CNPUF8 = 8;
    sbit  CNPUF8_bit at CNPUF.B8;
    const register unsigned short int CNPUF12 = 12;
    sbit  CNPUF12_bit at CNPUF.B12;
    const register unsigned short int CNPUF13 = 13;
    sbit  CNPUF13_bit at CNPUF.B13;

sfr unsigned int   volatile IOCPUF           absolute 0x6D2;
sfr unsigned int   volatile CNPDF            absolute 0x6D4;
    const register unsigned short int IOCPDF0 = 0;
    sbit  IOCPDF0_bit at CNPDF.B0;
    const register unsigned short int IOCPDF1 = 1;
    sbit  IOCPDF1_bit at CNPDF.B1;
    const register unsigned short int IOCPDF2 = 2;
    sbit  IOCPDF2_bit at CNPDF.B2;
    const register unsigned short int IOCPDF3 = 3;
    sbit  IOCPDF3_bit at CNPDF.B3;
    const register unsigned short int IOCPDF4 = 4;
    sbit  IOCPDF4_bit at CNPDF.B4;
    const register unsigned short int IOCPDF5 = 5;
    sbit  IOCPDF5_bit at CNPDF.B5;
    const register unsigned short int IOCPDF6 = 6;
    sbit  IOCPDF6_bit at CNPDF.B6;
    const register unsigned short int IOCPDF7 = 7;
    sbit  IOCPDF7_bit at CNPDF.B7;
    const register unsigned short int IOCPDF8 = 8;
    sbit  IOCPDF8_bit at CNPDF.B8;
    const register unsigned short int IOCPDF12 = 12;
    sbit  IOCPDF12_bit at CNPDF.B12;
    const register unsigned short int IOCPDF13 = 13;
    sbit  IOCPDF13_bit at CNPDF.B13;
    const register unsigned short int CNPDF0 = 0;
    sbit  CNPDF0_bit at CNPDF.B0;
    const register unsigned short int CNPDF1 = 1;
    sbit  CNPDF1_bit at CNPDF.B1;
    const register unsigned short int CNPDF2 = 2;
    sbit  CNPDF2_bit at CNPDF.B2;
    const register unsigned short int CNPDF3 = 3;
    sbit  CNPDF3_bit at CNPDF.B3;
    const register unsigned short int CNPDF4 = 4;
    sbit  CNPDF4_bit at CNPDF.B4;
    const register unsigned short int CNPDF5 = 5;
    sbit  CNPDF5_bit at CNPDF.B5;
    const register unsigned short int CNPDF6 = 6;
    sbit  CNPDF6_bit at CNPDF.B6;
    const register unsigned short int CNPDF7 = 7;
    sbit  CNPDF7_bit at CNPDF.B7;
    const register unsigned short int CNPDF8 = 8;
    sbit  CNPDF8_bit at CNPDF.B8;
    const register unsigned short int CNPDF12 = 12;
    sbit  CNPDF12_bit at CNPDF.B12;
    const register unsigned short int CNPDF13 = 13;
    sbit  CNPDF13_bit at CNPDF.B13;

sfr unsigned int   volatile IOCPDF           absolute 0x6D4;
sfr unsigned int   volatile TRISG            absolute 0x6D6;
    const register unsigned short int TRISG0 = 0;
    sbit  TRISG0_bit at TRISG.B0;
    const register unsigned short int TRISG1 = 1;
    sbit  TRISG1_bit at TRISG.B1;
    const register unsigned short int TRISG2 = 2;
    sbit  TRISG2_bit at TRISG.B2;
    const register unsigned short int TRISG3 = 3;
    sbit  TRISG3_bit at TRISG.B3;
    const register unsigned short int TRISG6 = 6;
    sbit  TRISG6_bit at TRISG.B6;
    const register unsigned short int TRISG7 = 7;
    sbit  TRISG7_bit at TRISG.B7;
    const register unsigned short int TRISG8 = 8;
    sbit  TRISG8_bit at TRISG.B8;
    const register unsigned short int TRISG9 = 9;
    sbit  TRISG9_bit at TRISG.B9;
    const register unsigned short int TRISG12 = 12;
    sbit  TRISG12_bit at TRISG.B12;
    const register unsigned short int TRISG13 = 13;
    sbit  TRISG13_bit at TRISG.B13;
    const register unsigned short int TRISG14 = 14;
    sbit  TRISG14_bit at TRISG.B14;
    const register unsigned short int TRISG15 = 15;
    sbit  TRISG15_bit at TRISG.B15;

sfr unsigned int   volatile PORTG            absolute 0x6D8;
    const register unsigned short int RG0 = 0;
    sbit  RG0_bit at PORTG.B0;
    const register unsigned short int RG1 = 1;
    sbit  RG1_bit at PORTG.B1;
    const register unsigned short int RG2 = 2;
    sbit  RG2_bit at PORTG.B2;
    const register unsigned short int RG3 = 3;
    sbit  RG3_bit at PORTG.B3;
    const register unsigned short int RG6 = 6;
    sbit  RG6_bit at PORTG.B6;
    const register unsigned short int RG7 = 7;
    sbit  RG7_bit at PORTG.B7;
    const register unsigned short int RG8 = 8;
    sbit  RG8_bit at PORTG.B8;
    const register unsigned short int RG9 = 9;
    sbit  RG9_bit at PORTG.B9;
    const register unsigned short int RG12 = 12;
    sbit  RG12_bit at PORTG.B12;
    const register unsigned short int RG13 = 13;
    sbit  RG13_bit at PORTG.B13;
    const register unsigned short int RG14 = 14;
    sbit  RG14_bit at PORTG.B14;
    const register unsigned short int RG15 = 15;
    sbit  RG15_bit at PORTG.B15;

sfr unsigned int   volatile LATG             absolute 0x6DA;
    const register unsigned short int LATG0 = 0;
    sbit  LATG0_bit at LATG.B0;
    const register unsigned short int LATG1 = 1;
    sbit  LATG1_bit at LATG.B1;
    const register unsigned short int LATG2 = 2;
    sbit  LATG2_bit at LATG.B2;
    const register unsigned short int LATG3 = 3;
    sbit  LATG3_bit at LATG.B3;
    const register unsigned short int LATG6 = 6;
    sbit  LATG6_bit at LATG.B6;
    const register unsigned short int LATG7 = 7;
    sbit  LATG7_bit at LATG.B7;
    const register unsigned short int LATG8 = 8;
    sbit  LATG8_bit at LATG.B8;
    const register unsigned short int LATG9 = 9;
    sbit  LATG9_bit at LATG.B9;
    const register unsigned short int LATG12 = 12;
    sbit  LATG12_bit at LATG.B12;
    const register unsigned short int LATG13 = 13;
    sbit  LATG13_bit at LATG.B13;
    const register unsigned short int LATG14 = 14;
    sbit  LATG14_bit at LATG.B14;
    const register unsigned short int LATG15 = 15;
    sbit  LATG15_bit at LATG.B15;

sfr unsigned int   volatile ODCG             absolute 0x6DC;
    const register unsigned short int ODCG0 = 0;
    sbit  ODCG0_bit at ODCG.B0;
    const register unsigned short int ODCG1 = 1;
    sbit  ODCG1_bit at ODCG.B1;
    const register unsigned short int ODCG2 = 2;
    sbit  ODCG2_bit at ODCG.B2;
    const register unsigned short int ODCG3 = 3;
    sbit  ODCG3_bit at ODCG.B3;
    const register unsigned short int ODCG6 = 6;
    sbit  ODCG6_bit at ODCG.B6;
    const register unsigned short int ODCG7 = 7;
    sbit  ODCG7_bit at ODCG.B7;
    const register unsigned short int ODCG8 = 8;
    sbit  ODCG8_bit at ODCG.B8;
    const register unsigned short int ODCG9 = 9;
    sbit  ODCG9_bit at ODCG.B9;
    const register unsigned short int ODCG12 = 12;
    sbit  ODCG12_bit at ODCG.B12;
    const register unsigned short int ODCG13 = 13;
    sbit  ODCG13_bit at ODCG.B13;
    const register unsigned short int ODCG14 = 14;
    sbit  ODCG14_bit at ODCG.B14;
    const register unsigned short int ODCG15 = 15;
    sbit  ODCG15_bit at ODCG.B15;

sfr unsigned int   volatile ANSG             absolute 0x6DE;
    const register unsigned short int ANSG0 = 0;
    sbit  ANSG0_bit at ANSG.B0;
    const register unsigned short int ANSG1 = 1;
    sbit  ANSG1_bit at ANSG.B1;
    const register unsigned short int ANSG6 = 6;
    sbit  ANSG6_bit at ANSG.B6;
    const register unsigned short int ANSG7 = 7;
    sbit  ANSG7_bit at ANSG.B7;
    const register unsigned short int ANSG8 = 8;
    sbit  ANSG8_bit at ANSG.B8;
    const register unsigned short int ANSG9 = 9;
    sbit  ANSG9_bit at ANSG.B9;
    const register unsigned short int ANSG12 = 12;
    sbit  ANSG12_bit at ANSG.B12;
    const register unsigned short int ANSG13 = 13;
    sbit  ANSG13_bit at ANSG.B13;
    const register unsigned short int ANSG14 = 14;
    sbit  ANSG14_bit at ANSG.B14;
    const register unsigned short int ANSG15 = 15;
    sbit  ANSG15_bit at ANSG.B15;

sfr unsigned int   volatile IOCPG            absolute 0x6E0;
    const register unsigned short int IOCPG0 = 0;
    sbit  IOCPG0_bit at IOCPG.B0;
    const register unsigned short int IOCPG1 = 1;
    sbit  IOCPG1_bit at IOCPG.B1;
    const register unsigned short int IOCPG2 = 2;
    sbit  IOCPG2_bit at IOCPG.B2;
    const register unsigned short int IOCPG3 = 3;
    sbit  IOCPG3_bit at IOCPG.B3;
    const register unsigned short int IOCPG6 = 6;
    sbit  IOCPG6_bit at IOCPG.B6;
    const register unsigned short int IOCPG7 = 7;
    sbit  IOCPG7_bit at IOCPG.B7;
    const register unsigned short int IOCPG8 = 8;
    sbit  IOCPG8_bit at IOCPG.B8;
    const register unsigned short int IOCPG9 = 9;
    sbit  IOCPG9_bit at IOCPG.B9;
    const register unsigned short int IOCPG12 = 12;
    sbit  IOCPG12_bit at IOCPG.B12;
    const register unsigned short int IOCPG13 = 13;
    sbit  IOCPG13_bit at IOCPG.B13;
    const register unsigned short int IOCPG14 = 14;
    sbit  IOCPG14_bit at IOCPG.B14;
    const register unsigned short int IOCPG15 = 15;
    sbit  IOCPG15_bit at IOCPG.B15;

sfr unsigned int   volatile IOCNG            absolute 0x6E2;
    const register unsigned short int IOCNG0 = 0;
    sbit  IOCNG0_bit at IOCNG.B0;
    const register unsigned short int IOCNG1 = 1;
    sbit  IOCNG1_bit at IOCNG.B1;
    const register unsigned short int IOCNG2 = 2;
    sbit  IOCNG2_bit at IOCNG.B2;
    const register unsigned short int IOCNG3 = 3;
    sbit  IOCNG3_bit at IOCNG.B3;
    const register unsigned short int IOCNG6 = 6;
    sbit  IOCNG6_bit at IOCNG.B6;
    const register unsigned short int IOCNG7 = 7;
    sbit  IOCNG7_bit at IOCNG.B7;
    const register unsigned short int IOCNG8 = 8;
    sbit  IOCNG8_bit at IOCNG.B8;
    const register unsigned short int IOCNG9 = 9;
    sbit  IOCNG9_bit at IOCNG.B9;
    const register unsigned short int IOCNG12 = 12;
    sbit  IOCNG12_bit at IOCNG.B12;
    const register unsigned short int IOCNG13 = 13;
    sbit  IOCNG13_bit at IOCNG.B13;
    const register unsigned short int IOCNG14 = 14;
    sbit  IOCNG14_bit at IOCNG.B14;
    const register unsigned short int IOCNG15 = 15;
    sbit  IOCNG15_bit at IOCNG.B15;

sfr unsigned int   volatile IOCFG            absolute 0x6E4;
    const register unsigned short int IOCFG0 = 0;
    sbit  IOCFG0_bit at IOCFG.B0;
    const register unsigned short int IOCFG1 = 1;
    sbit  IOCFG1_bit at IOCFG.B1;
    const register unsigned short int IOCFG2 = 2;
    sbit  IOCFG2_bit at IOCFG.B2;
    const register unsigned short int IOCFG3 = 3;
    sbit  IOCFG3_bit at IOCFG.B3;
    const register unsigned short int IOCFG6 = 6;
    sbit  IOCFG6_bit at IOCFG.B6;
    const register unsigned short int IOCFG7 = 7;
    sbit  IOCFG7_bit at IOCFG.B7;
    const register unsigned short int IOCFG8 = 8;
    sbit  IOCFG8_bit at IOCFG.B8;
    const register unsigned short int IOCFG9 = 9;
    sbit  IOCFG9_bit at IOCFG.B9;
    const register unsigned short int IOCFG12 = 12;
    sbit  IOCFG12_bit at IOCFG.B12;
    const register unsigned short int IOCFG13 = 13;
    sbit  IOCFG13_bit at IOCFG.B13;
    const register unsigned short int IOCFG14 = 14;
    sbit  IOCFG14_bit at IOCFG.B14;
    const register unsigned short int IOCFG15 = 15;
    sbit  IOCFG15_bit at IOCFG.B15;

sfr unsigned int   volatile CNPUG            absolute 0x6E6;
    const register unsigned short int IOCPUG0 = 0;
    sbit  IOCPUG0_bit at CNPUG.B0;
    const register unsigned short int IOCPUG1 = 1;
    sbit  IOCPUG1_bit at CNPUG.B1;
    const register unsigned short int IOCPUG2 = 2;
    sbit  IOCPUG2_bit at CNPUG.B2;
    const register unsigned short int IOCPUG3 = 3;
    sbit  IOCPUG3_bit at CNPUG.B3;
    const register unsigned short int IOCPUG6 = 6;
    sbit  IOCPUG6_bit at CNPUG.B6;
    const register unsigned short int IOCPUG7 = 7;
    sbit  IOCPUG7_bit at CNPUG.B7;
    const register unsigned short int IOCPUG8 = 8;
    sbit  IOCPUG8_bit at CNPUG.B8;
    const register unsigned short int IOCPUG9 = 9;
    sbit  IOCPUG9_bit at CNPUG.B9;
    const register unsigned short int IOCPUG12 = 12;
    sbit  IOCPUG12_bit at CNPUG.B12;
    const register unsigned short int IOCPUG13 = 13;
    sbit  IOCPUG13_bit at CNPUG.B13;
    const register unsigned short int IOCPUG14 = 14;
    sbit  IOCPUG14_bit at CNPUG.B14;
    const register unsigned short int IOCPUG15 = 15;
    sbit  IOCPUG15_bit at CNPUG.B15;
    const register unsigned short int CNPUG0 = 0;
    sbit  CNPUG0_bit at CNPUG.B0;
    const register unsigned short int CNPUG1 = 1;
    sbit  CNPUG1_bit at CNPUG.B1;
    const register unsigned short int CNPUG2 = 2;
    sbit  CNPUG2_bit at CNPUG.B2;
    const register unsigned short int CNPUG3 = 3;
    sbit  CNPUG3_bit at CNPUG.B3;
    const register unsigned short int CNPUG6 = 6;
    sbit  CNPUG6_bit at CNPUG.B6;
    const register unsigned short int CNPUG7 = 7;
    sbit  CNPUG7_bit at CNPUG.B7;
    const register unsigned short int CNPUG8 = 8;
    sbit  CNPUG8_bit at CNPUG.B8;
    const register unsigned short int CNPUG9 = 9;
    sbit  CNPUG9_bit at CNPUG.B9;
    const register unsigned short int CNPUG12 = 12;
    sbit  CNPUG12_bit at CNPUG.B12;
    const register unsigned short int CNPUG13 = 13;
    sbit  CNPUG13_bit at CNPUG.B13;
    const register unsigned short int CNPUG14 = 14;
    sbit  CNPUG14_bit at CNPUG.B14;
    const register unsigned short int CNPUG15 = 15;
    sbit  CNPUG15_bit at CNPUG.B15;

sfr unsigned int   volatile IOCPUG           absolute 0x6E6;
sfr unsigned int   volatile CNPDG            absolute 0x6E8;
    const register unsigned short int IOCPDG0 = 0;
    sbit  IOCPDG0_bit at CNPDG.B0;
    const register unsigned short int IOCPDG1 = 1;
    sbit  IOCPDG1_bit at CNPDG.B1;
    const register unsigned short int IOCPDG2 = 2;
    sbit  IOCPDG2_bit at CNPDG.B2;
    const register unsigned short int IOCPDG3 = 3;
    sbit  IOCPDG3_bit at CNPDG.B3;
    const register unsigned short int IOCPDG6 = 6;
    sbit  IOCPDG6_bit at CNPDG.B6;
    const register unsigned short int IOCPDG7 = 7;
    sbit  IOCPDG7_bit at CNPDG.B7;
    const register unsigned short int IOCPDG8 = 8;
    sbit  IOCPDG8_bit at CNPDG.B8;
    const register unsigned short int IOCPDG9 = 9;
    sbit  IOCPDG9_bit at CNPDG.B9;
    const register unsigned short int IOCPDG12 = 12;
    sbit  IOCPDG12_bit at CNPDG.B12;
    const register unsigned short int IOCPDG13 = 13;
    sbit  IOCPDG13_bit at CNPDG.B13;
    const register unsigned short int IOCPDG14 = 14;
    sbit  IOCPDG14_bit at CNPDG.B14;
    const register unsigned short int IOCPDG15 = 15;
    sbit  IOCPDG15_bit at CNPDG.B15;
    const register unsigned short int CNPDG0 = 0;
    sbit  CNPDG0_bit at CNPDG.B0;
    const register unsigned short int CNPDG1 = 1;
    sbit  CNPDG1_bit at CNPDG.B1;
    const register unsigned short int CNPDG2 = 2;
    sbit  CNPDG2_bit at CNPDG.B2;
    const register unsigned short int CNPDG3 = 3;
    sbit  CNPDG3_bit at CNPDG.B3;
    const register unsigned short int CNPDG6 = 6;
    sbit  CNPDG6_bit at CNPDG.B6;
    const register unsigned short int CNPDG7 = 7;
    sbit  CNPDG7_bit at CNPDG.B7;
    const register unsigned short int CNPDG8 = 8;
    sbit  CNPDG8_bit at CNPDG.B8;
    const register unsigned short int CNPDG9 = 9;
    sbit  CNPDG9_bit at CNPDG.B9;
    const register unsigned short int CNPDG12 = 12;
    sbit  CNPDG12_bit at CNPDG.B12;
    const register unsigned short int CNPDG13 = 13;
    sbit  CNPDG13_bit at CNPDG.B13;
    const register unsigned short int CNPDG14 = 14;
    sbit  CNPDG14_bit at CNPDG.B14;
    const register unsigned short int CNPDG15 = 15;
    sbit  CNPDG15_bit at CNPDG.B15;

sfr unsigned int   volatile IOCPDG           absolute 0x6E8;
sfr unsigned int   volatile TRISH            absolute 0x6EA;
    const register unsigned short int TRISH0 = 0;
    sbit  TRISH0_bit at TRISH.B0;
    const register unsigned short int TRISH1 = 1;
    sbit  TRISH1_bit at TRISH.B1;
    const register unsigned short int TRISH2 = 2;
    sbit  TRISH2_bit at TRISH.B2;
    const register unsigned short int TRISH3 = 3;
    sbit  TRISH3_bit at TRISH.B3;
    const register unsigned short int TRISH4 = 4;
    sbit  TRISH4_bit at TRISH.B4;
    const register unsigned short int TRISH5 = 5;
    sbit  TRISH5_bit at TRISH.B5;
    const register unsigned short int TRISH6 = 6;
    sbit  TRISH6_bit at TRISH.B6;
    const register unsigned short int TRISH7 = 7;
    sbit  TRISH7_bit at TRISH.B7;
    const register unsigned short int TRISH8 = 8;
    sbit  TRISH8_bit at TRISH.B8;
    const register unsigned short int TRISH9 = 9;
    sbit  TRISH9_bit at TRISH.B9;
    const register unsigned short int TRISH10 = 10;
    sbit  TRISH10_bit at TRISH.B10;
    const register unsigned short int TRISH11 = 11;
    sbit  TRISH11_bit at TRISH.B11;
    const register unsigned short int TRISH12 = 12;
    sbit  TRISH12_bit at TRISH.B12;
    const register unsigned short int TRISH13 = 13;
    sbit  TRISH13_bit at TRISH.B13;
    const register unsigned short int TRISH14 = 14;
    sbit  TRISH14_bit at TRISH.B14;
    const register unsigned short int TRISH15 = 15;
    sbit  TRISH15_bit at TRISH.B15;

sfr unsigned int   volatile PORTH            absolute 0x6EC;
    const register unsigned short int RH0 = 0;
    sbit  RH0_bit at PORTH.B0;
    const register unsigned short int RH1 = 1;
    sbit  RH1_bit at PORTH.B1;
    const register unsigned short int RH2 = 2;
    sbit  RH2_bit at PORTH.B2;
    const register unsigned short int RH3 = 3;
    sbit  RH3_bit at PORTH.B3;
    const register unsigned short int RH4 = 4;
    sbit  RH4_bit at PORTH.B4;
    const register unsigned short int RH5 = 5;
    sbit  RH5_bit at PORTH.B5;
    const register unsigned short int RH6 = 6;
    sbit  RH6_bit at PORTH.B6;
    const register unsigned short int RH7 = 7;
    sbit  RH7_bit at PORTH.B7;
    const register unsigned short int RH8 = 8;
    sbit  RH8_bit at PORTH.B8;
    const register unsigned short int RH9 = 9;
    sbit  RH9_bit at PORTH.B9;
    const register unsigned short int RH10 = 10;
    sbit  RH10_bit at PORTH.B10;
    const register unsigned short int RH11 = 11;
    sbit  RH11_bit at PORTH.B11;
    const register unsigned short int RH12 = 12;
    sbit  RH12_bit at PORTH.B12;
    const register unsigned short int RH13 = 13;
    sbit  RH13_bit at PORTH.B13;
    const register unsigned short int RH14 = 14;
    sbit  RH14_bit at PORTH.B14;
    const register unsigned short int RH15 = 15;
    sbit  RH15_bit at PORTH.B15;

sfr unsigned int   volatile LATH             absolute 0x6EE;
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
    const register unsigned short int LATH8 = 8;
    sbit  LATH8_bit at LATH.B8;
    const register unsigned short int LATH9 = 9;
    sbit  LATH9_bit at LATH.B9;
    const register unsigned short int LATH10 = 10;
    sbit  LATH10_bit at LATH.B10;
    const register unsigned short int LATH11 = 11;
    sbit  LATH11_bit at LATH.B11;
    const register unsigned short int LATH12 = 12;
    sbit  LATH12_bit at LATH.B12;
    const register unsigned short int LATH13 = 13;
    sbit  LATH13_bit at LATH.B13;
    const register unsigned short int LATH14 = 14;
    sbit  LATH14_bit at LATH.B14;
    const register unsigned short int LATH15 = 15;
    sbit  LATH15_bit at LATH.B15;

sfr unsigned int   volatile ODCH             absolute 0x6F0;
    const register unsigned short int ODCH0 = 0;
    sbit  ODCH0_bit at ODCH.B0;
    const register unsigned short int ODCH1 = 1;
    sbit  ODCH1_bit at ODCH.B1;
    const register unsigned short int ODCH2 = 2;
    sbit  ODCH2_bit at ODCH.B2;
    const register unsigned short int ODCH3 = 3;
    sbit  ODCH3_bit at ODCH.B3;
    const register unsigned short int ODCH4 = 4;
    sbit  ODCH4_bit at ODCH.B4;
    const register unsigned short int ODCH5 = 5;
    sbit  ODCH5_bit at ODCH.B5;
    const register unsigned short int ODCH6 = 6;
    sbit  ODCH6_bit at ODCH.B6;
    const register unsigned short int ODCH7 = 7;
    sbit  ODCH7_bit at ODCH.B7;
    const register unsigned short int ODCH8 = 8;
    sbit  ODCH8_bit at ODCH.B8;
    const register unsigned short int ODCH9 = 9;
    sbit  ODCH9_bit at ODCH.B9;
    const register unsigned short int ODCH10 = 10;
    sbit  ODCH10_bit at ODCH.B10;
    const register unsigned short int ODCH11 = 11;
    sbit  ODCH11_bit at ODCH.B11;
    const register unsigned short int ODCH12 = 12;
    sbit  ODCH12_bit at ODCH.B12;
    const register unsigned short int ODCH13 = 13;
    sbit  ODCH13_bit at ODCH.B13;
    const register unsigned short int ODCH14 = 14;
    sbit  ODCH14_bit at ODCH.B14;
    const register unsigned short int ODCH15 = 15;
    sbit  ODCH15_bit at ODCH.B15;

sfr unsigned int   volatile ANSH             absolute 0x6F2;
    const register unsigned short int ANSH0 = 0;
    sbit  ANSH0_bit at ANSH.B0;
    const register unsigned short int ANSH1 = 1;
    sbit  ANSH1_bit at ANSH.B1;
    const register unsigned short int ANSH2 = 2;
    sbit  ANSH2_bit at ANSH.B2;
    const register unsigned short int ANSH3 = 3;
    sbit  ANSH3_bit at ANSH.B3;
    const register unsigned short int ANSH4 = 4;
    sbit  ANSH4_bit at ANSH.B4;

sfr unsigned int   volatile IOCPH            absolute 0x6F4;
    const register unsigned short int IOCPH0 = 0;
    sbit  IOCPH0_bit at IOCPH.B0;
    const register unsigned short int IOCPH1 = 1;
    sbit  IOCPH1_bit at IOCPH.B1;
    const register unsigned short int IOCPH2 = 2;
    sbit  IOCPH2_bit at IOCPH.B2;
    const register unsigned short int IOCPH3 = 3;
    sbit  IOCPH3_bit at IOCPH.B3;
    const register unsigned short int IOCPH4 = 4;
    sbit  IOCPH4_bit at IOCPH.B4;
    const register unsigned short int IOCPH5 = 5;
    sbit  IOCPH5_bit at IOCPH.B5;
    const register unsigned short int IOCPH6 = 6;
    sbit  IOCPH6_bit at IOCPH.B6;
    const register unsigned short int IOCPH7 = 7;
    sbit  IOCPH7_bit at IOCPH.B7;
    const register unsigned short int IOCPH8 = 8;
    sbit  IOCPH8_bit at IOCPH.B8;
    const register unsigned short int IOCPH9 = 9;
    sbit  IOCPH9_bit at IOCPH.B9;
    const register unsigned short int IOCPH10 = 10;
    sbit  IOCPH10_bit at IOCPH.B10;
    const register unsigned short int IOCPH11 = 11;
    sbit  IOCPH11_bit at IOCPH.B11;
    const register unsigned short int IOCPH12 = 12;
    sbit  IOCPH12_bit at IOCPH.B12;
    const register unsigned short int IOCPH13 = 13;
    sbit  IOCPH13_bit at IOCPH.B13;
    const register unsigned short int IOCPH14 = 14;
    sbit  IOCPH14_bit at IOCPH.B14;
    const register unsigned short int IOCPH15 = 15;
    sbit  IOCPH15_bit at IOCPH.B15;

sfr unsigned int   volatile IOCNH            absolute 0x6F6;
    const register unsigned short int IOCNH0 = 0;
    sbit  IOCNH0_bit at IOCNH.B0;
    const register unsigned short int IOCNH1 = 1;
    sbit  IOCNH1_bit at IOCNH.B1;
    const register unsigned short int IOCNH2 = 2;
    sbit  IOCNH2_bit at IOCNH.B2;
    const register unsigned short int IOCNH3 = 3;
    sbit  IOCNH3_bit at IOCNH.B3;
    const register unsigned short int IOCNH4 = 4;
    sbit  IOCNH4_bit at IOCNH.B4;
    const register unsigned short int IOCNH5 = 5;
    sbit  IOCNH5_bit at IOCNH.B5;
    const register unsigned short int IOCNH6 = 6;
    sbit  IOCNH6_bit at IOCNH.B6;
    const register unsigned short int IOCNH7 = 7;
    sbit  IOCNH7_bit at IOCNH.B7;
    const register unsigned short int IOCNH8 = 8;
    sbit  IOCNH8_bit at IOCNH.B8;
    const register unsigned short int IOCNH9 = 9;
    sbit  IOCNH9_bit at IOCNH.B9;
    const register unsigned short int IOCNH10 = 10;
    sbit  IOCNH10_bit at IOCNH.B10;
    const register unsigned short int IOCNH11 = 11;
    sbit  IOCNH11_bit at IOCNH.B11;
    const register unsigned short int IOCNH12 = 12;
    sbit  IOCNH12_bit at IOCNH.B12;
    const register unsigned short int IOCNH13 = 13;
    sbit  IOCNH13_bit at IOCNH.B13;
    const register unsigned short int IOCNH14 = 14;
    sbit  IOCNH14_bit at IOCNH.B14;
    const register unsigned short int IOCNH15 = 15;
    sbit  IOCNH15_bit at IOCNH.B15;

sfr unsigned int   volatile IOCFH            absolute 0x6F8;
    const register unsigned short int IOCFH0 = 0;
    sbit  IOCFH0_bit at IOCFH.B0;
    const register unsigned short int IOCFH1 = 1;
    sbit  IOCFH1_bit at IOCFH.B1;
    const register unsigned short int IOCFH2 = 2;
    sbit  IOCFH2_bit at IOCFH.B2;
    const register unsigned short int IOCFH3 = 3;
    sbit  IOCFH3_bit at IOCFH.B3;
    const register unsigned short int IOCFH4 = 4;
    sbit  IOCFH4_bit at IOCFH.B4;
    const register unsigned short int IOCFH5 = 5;
    sbit  IOCFH5_bit at IOCFH.B5;
    const register unsigned short int IOCFH6 = 6;
    sbit  IOCFH6_bit at IOCFH.B6;
    const register unsigned short int IOCFH7 = 7;
    sbit  IOCFH7_bit at IOCFH.B7;
    const register unsigned short int IOCFH8 = 8;
    sbit  IOCFH8_bit at IOCFH.B8;
    const register unsigned short int IOCFH9 = 9;
    sbit  IOCFH9_bit at IOCFH.B9;
    const register unsigned short int IOCFH10 = 10;
    sbit  IOCFH10_bit at IOCFH.B10;
    const register unsigned short int IOCFH11 = 11;
    sbit  IOCFH11_bit at IOCFH.B11;
    const register unsigned short int IOCFH12 = 12;
    sbit  IOCFH12_bit at IOCFH.B12;
    const register unsigned short int IOCFH13 = 13;
    sbit  IOCFH13_bit at IOCFH.B13;
    const register unsigned short int IOCFH14 = 14;
    sbit  IOCFH14_bit at IOCFH.B14;
    const register unsigned short int IOCFH15 = 15;
    sbit  IOCFH15_bit at IOCFH.B15;

sfr unsigned int   volatile CNPUH            absolute 0x6FA;
    const register unsigned short int IOCPUH0 = 0;
    sbit  IOCPUH0_bit at CNPUH.B0;
    const register unsigned short int IOCPUH1 = 1;
    sbit  IOCPUH1_bit at CNPUH.B1;
    const register unsigned short int IOCPUH2 = 2;
    sbit  IOCPUH2_bit at CNPUH.B2;
    const register unsigned short int IOCPUH3 = 3;
    sbit  IOCPUH3_bit at CNPUH.B3;
    const register unsigned short int IOCPUH4 = 4;
    sbit  IOCPUH4_bit at CNPUH.B4;
    const register unsigned short int IOCPUH5 = 5;
    sbit  IOCPUH5_bit at CNPUH.B5;
    const register unsigned short int IOCPUH6 = 6;
    sbit  IOCPUH6_bit at CNPUH.B6;
    const register unsigned short int IOCPUH7 = 7;
    sbit  IOCPUH7_bit at CNPUH.B7;
    const register unsigned short int IOCPUH8 = 8;
    sbit  IOCPUH8_bit at CNPUH.B8;
    const register unsigned short int IOCPUH9 = 9;
    sbit  IOCPUH9_bit at CNPUH.B9;
    const register unsigned short int IOCPUH10 = 10;
    sbit  IOCPUH10_bit at CNPUH.B10;
    const register unsigned short int IOCPUH11 = 11;
    sbit  IOCPUH11_bit at CNPUH.B11;
    const register unsigned short int IOCPUH12 = 12;
    sbit  IOCPUH12_bit at CNPUH.B12;
    const register unsigned short int IOCPUH13 = 13;
    sbit  IOCPUH13_bit at CNPUH.B13;
    const register unsigned short int IOCPUH14 = 14;
    sbit  IOCPUH14_bit at CNPUH.B14;
    const register unsigned short int IOCPUH15 = 15;
    sbit  IOCPUH15_bit at CNPUH.B15;
    const register unsigned short int CNPUH0 = 0;
    sbit  CNPUH0_bit at CNPUH.B0;
    const register unsigned short int CNPUH1 = 1;
    sbit  CNPUH1_bit at CNPUH.B1;
    const register unsigned short int CNPUH2 = 2;
    sbit  CNPUH2_bit at CNPUH.B2;
    const register unsigned short int CNPUH3 = 3;
    sbit  CNPUH3_bit at CNPUH.B3;
    const register unsigned short int CNPUH4 = 4;
    sbit  CNPUH4_bit at CNPUH.B4;
    const register unsigned short int CNPUH5 = 5;
    sbit  CNPUH5_bit at CNPUH.B5;
    const register unsigned short int CNPUH6 = 6;
    sbit  CNPUH6_bit at CNPUH.B6;
    const register unsigned short int CNPUH7 = 7;
    sbit  CNPUH7_bit at CNPUH.B7;
    const register unsigned short int CNPUH8 = 8;
    sbit  CNPUH8_bit at CNPUH.B8;
    const register unsigned short int CNPUH9 = 9;
    sbit  CNPUH9_bit at CNPUH.B9;
    const register unsigned short int CNPUH10 = 10;
    sbit  CNPUH10_bit at CNPUH.B10;
    const register unsigned short int CNPUH11 = 11;
    sbit  CNPUH11_bit at CNPUH.B11;
    const register unsigned short int CNPUH12 = 12;
    sbit  CNPUH12_bit at CNPUH.B12;
    const register unsigned short int CNPUH13 = 13;
    sbit  CNPUH13_bit at CNPUH.B13;
    const register unsigned short int CNPUH14 = 14;
    sbit  CNPUH14_bit at CNPUH.B14;
    const register unsigned short int CNPUH15 = 15;
    sbit  CNPUH15_bit at CNPUH.B15;

sfr unsigned int   volatile IOCPUH           absolute 0x6FA;
sfr unsigned int   volatile CNPDH            absolute 0x6FC;
    const register unsigned short int IOCPDH0 = 0;
    sbit  IOCPDH0_bit at CNPDH.B0;
    const register unsigned short int IOCPDH1 = 1;
    sbit  IOCPDH1_bit at CNPDH.B1;
    const register unsigned short int IOCPDH2 = 2;
    sbit  IOCPDH2_bit at CNPDH.B2;
    const register unsigned short int IOCPDH3 = 3;
    sbit  IOCPDH3_bit at CNPDH.B3;
    const register unsigned short int IOCPDH4 = 4;
    sbit  IOCPDH4_bit at CNPDH.B4;
    const register unsigned short int IOCPDH5 = 5;
    sbit  IOCPDH5_bit at CNPDH.B5;
    const register unsigned short int IOCPDH6 = 6;
    sbit  IOCPDH6_bit at CNPDH.B6;
    const register unsigned short int IOCPDH7 = 7;
    sbit  IOCPDH7_bit at CNPDH.B7;
    const register unsigned short int IOCPDH8 = 8;
    sbit  IOCPDH8_bit at CNPDH.B8;
    const register unsigned short int IOCPDH9 = 9;
    sbit  IOCPDH9_bit at CNPDH.B9;
    const register unsigned short int IOCPDH10 = 10;
    sbit  IOCPDH10_bit at CNPDH.B10;
    const register unsigned short int IOCPDH11 = 11;
    sbit  IOCPDH11_bit at CNPDH.B11;
    const register unsigned short int IOCPDH12 = 12;
    sbit  IOCPDH12_bit at CNPDH.B12;
    const register unsigned short int IOCPDH13 = 13;
    sbit  IOCPDH13_bit at CNPDH.B13;
    const register unsigned short int IOCPDH14 = 14;
    sbit  IOCPDH14_bit at CNPDH.B14;
    const register unsigned short int IOCPDH15 = 15;
    sbit  IOCPDH15_bit at CNPDH.B15;
    const register unsigned short int CNPDH0 = 0;
    sbit  CNPDH0_bit at CNPDH.B0;
    const register unsigned short int CNPDH1 = 1;
    sbit  CNPDH1_bit at CNPDH.B1;
    const register unsigned short int CNPDH2 = 2;
    sbit  CNPDH2_bit at CNPDH.B2;
    const register unsigned short int CNPDH3 = 3;
    sbit  CNPDH3_bit at CNPDH.B3;
    const register unsigned short int CNPDH4 = 4;
    sbit  CNPDH4_bit at CNPDH.B4;
    const register unsigned short int CNPDH5 = 5;
    sbit  CNPDH5_bit at CNPDH.B5;
    const register unsigned short int CNPDH6 = 6;
    sbit  CNPDH6_bit at CNPDH.B6;
    const register unsigned short int CNPDH7 = 7;
    sbit  CNPDH7_bit at CNPDH.B7;
    const register unsigned short int CNPDH8 = 8;
    sbit  CNPDH8_bit at CNPDH.B8;
    const register unsigned short int CNPDH9 = 9;
    sbit  CNPDH9_bit at CNPDH.B9;
    const register unsigned short int CNPDH10 = 10;
    sbit  CNPDH10_bit at CNPDH.B10;
    const register unsigned short int CNPDH11 = 11;
    sbit  CNPDH11_bit at CNPDH.B11;
    const register unsigned short int CNPDH12 = 12;
    sbit  CNPDH12_bit at CNPDH.B12;
    const register unsigned short int CNPDH13 = 13;
    sbit  CNPDH13_bit at CNPDH.B13;
    const register unsigned short int CNPDH14 = 14;
    sbit  CNPDH14_bit at CNPDH.B14;
    const register unsigned short int CNPDH15 = 15;
    sbit  CNPDH15_bit at CNPDH.B15;

sfr unsigned int   volatile IOCPDH           absolute 0x6FC;
sfr unsigned int   volatile TRISJ            absolute 0x6FE;
    const register unsigned short int TRISJ0 = 0;
    sbit  TRISJ0_bit at TRISJ.B0;
    const register unsigned short int TRISJ1 = 1;
    sbit  TRISJ1_bit at TRISJ.B1;

sfr unsigned int   volatile PORTJ            absolute 0x700;
    const register unsigned short int RJ0 = 0;
    sbit  RJ0_bit at PORTJ.B0;
    const register unsigned short int RJ1 = 1;
    sbit  RJ1_bit at PORTJ.B1;

sfr unsigned int   volatile LATJ             absolute 0x702;
    const register unsigned short int LATJ0 = 0;
    sbit  LATJ0_bit at LATJ.B0;
    const register unsigned short int LATJ1 = 1;
    sbit  LATJ1_bit at LATJ.B1;

sfr unsigned int   volatile ODCJ             absolute 0x704;
    const register unsigned short int ODCJ0 = 0;
    sbit  ODCJ0_bit at ODCJ.B0;
    const register unsigned short int ODCJ1 = 1;
    sbit  ODCJ1_bit at ODCJ.B1;

sfr unsigned int   volatile ANSJ             absolute 0x706;
sfr unsigned int   volatile IOCPJ            absolute 0x708;
    const register unsigned short int IOCPJ0 = 0;
    sbit  IOCPJ0_bit at IOCPJ.B0;
    const register unsigned short int IOCPJ1 = 1;
    sbit  IOCPJ1_bit at IOCPJ.B1;

sfr unsigned int   volatile IOCNJ            absolute 0x70A;
    const register unsigned short int IOCNJ0 = 0;
    sbit  IOCNJ0_bit at IOCNJ.B0;
    const register unsigned short int IOCNJ1 = 1;
    sbit  IOCNJ1_bit at IOCNJ.B1;

sfr unsigned int   volatile IOCFJ            absolute 0x70C;
    const register unsigned short int IOCFJ0 = 0;
    sbit  IOCFJ0_bit at IOCFJ.B0;
    const register unsigned short int IOCFJ1 = 1;
    sbit  IOCFJ1_bit at IOCFJ.B1;

sfr unsigned int   volatile CNPUJ            absolute 0x70E;
    const register unsigned short int IOCPUJ0 = 0;
    sbit  IOCPUJ0_bit at CNPUJ.B0;
    const register unsigned short int IOCPUJ1 = 1;
    sbit  IOCPUJ1_bit at CNPUJ.B1;
    const register unsigned short int CNPUJ0 = 0;
    sbit  CNPUJ0_bit at CNPUJ.B0;
    const register unsigned short int CNPUJ1 = 1;
    sbit  CNPUJ1_bit at CNPUJ.B1;

sfr unsigned int   volatile IOCPUJ           absolute 0x70E;
sfr unsigned int   volatile CNPDJ            absolute 0x710;
    const register unsigned short int IOCPDJ0 = 0;
    sbit  IOCPDJ0_bit at CNPDJ.B0;
    const register unsigned short int IOCPDJ1 = 1;
    sbit  IOCPDJ1_bit at CNPDJ.B1;
    const register unsigned short int CNPDJ0 = 0;
    sbit  CNPDJ0_bit at CNPDJ.B0;
    const register unsigned short int CNPDJ1 = 1;
    sbit  CNPDJ1_bit at CNPDJ.B1;

sfr unsigned int   volatile IOCPDJ           absolute 0x710;
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
sfr unsigned int   volatile ADC1BUF16        absolute 0x732;
sfr unsigned int   volatile ADC1BUF17        absolute 0x734;
sfr unsigned int   volatile ADC1BUF18        absolute 0x736;
sfr unsigned int   volatile ADC1BUF19        absolute 0x738;
sfr unsigned int   volatile ADC1BUF20        absolute 0x73A;
sfr unsigned int   volatile ADC1BUF21        absolute 0x73C;
sfr unsigned int   volatile ADC1BUF22        absolute 0x73E;
sfr unsigned int   volatile ADC1BUF23        absolute 0x740;
sfr unsigned int   volatile ADC1BUF24        absolute 0x742;
sfr unsigned int   volatile ADC1BUF25        absolute 0x744;
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
    const register unsigned short int OFFCAL = 12;
    sbit  OFFCAL_bit at AD1CON2.B12;
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
    const register unsigned short int CSS24 = 8;
    sbit  CSS24_bit at AD1CSSH.B8;
    const register unsigned short int CSS25 = 9;
    sbit  CSS25_bit at AD1CSSH.B9;
    const register unsigned short int CSS28 = 12;
    sbit  CSS28_bit at AD1CSSH.B12;
    const register unsigned short int CSS29 = 13;
    sbit  CSS29_bit at AD1CSSH.B13;
    const register unsigned short int CSS30 = 14;
    sbit  CSS30_bit at AD1CSSH.B14;
    const register unsigned short int CSS31 = 15;
    sbit  CSS31_bit at AD1CSSH.B15;

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

sfr unsigned int   volatile AD1CHITH         absolute 0x756;
    const register unsigned short int CHH24 = 8;
    sbit  CHH24_bit at AD1CHITH.B8;
    const register unsigned short int CHH25 = 9;
    sbit  CHH25_bit at AD1CHITH.B9;

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
    const register unsigned short int CHH14 = 14;
    sbit  CHH14_bit at AD1CHITL.B14;
    const register unsigned short int CHH15 = 15;
    sbit  CHH15_bit at AD1CHITL.B15;

sfr unsigned int   volatile AD1CTMENH        absolute 0x75A;
    const register unsigned short int CTMEN24 = 8;
    sbit  CTMEN24_bit at AD1CTMENH.B8;
    const register unsigned short int CTMEN25 = 9;
    sbit  CTMEN25_bit at AD1CTMENH.B9;
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

sfr unsigned int   volatile AD1DMBUF         absolute 0x75E;
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
sfr unsigned int   volatile NVMSRCADDR       absolute 0x768;
sfr unsigned int   volatile NVMSRCADR        absolute 0x768;
sfr unsigned int   volatile NVMSRCADRL       absolute 0x768;
sfr unsigned int   volatile NVMSRCADRH       absolute 0x76A;
sfr unsigned int   volatile JDATAL           absolute 0x77C;
sfr unsigned int   volatile JDATAH           absolute 0x77E;
sfr unsigned int            RPINR0           absolute 0x790;
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

sfr unsigned int            RPINR1           absolute 0x792;
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

sfr unsigned int            RPINR2           absolute 0x794;
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

sfr unsigned int            RPINR3           absolute 0x796;
    const register unsigned short int T2CKR0 = 0;
    sbit  T2CKR0_bit at RPINR3.B0;
    const register unsigned short int T2CKR1 = 1;
    sbit  T2CKR1_bit at RPINR3.B1;
    const register unsigned short int T2CKR2 = 2;
    sbit  T2CKR2_bit at RPINR3.B2;
    const register unsigned short int T2CKR3 = 3;
    sbit  T2CKR3_bit at RPINR3.B3;
    const register unsigned short int T2CKR4 = 4;
    sbit  T2CKR4_bit at RPINR3.B4;
    const register unsigned short int T2CKR5 = 5;
    sbit  T2CKR5_bit at RPINR3.B5;
    const register unsigned short int T3CKR0 = 8;
    sbit  T3CKR0_bit at RPINR3.B8;
    const register unsigned short int T3CKR1 = 9;
    sbit  T3CKR1_bit at RPINR3.B9;
    const register unsigned short int T3CKR2 = 10;
    sbit  T3CKR2_bit at RPINR3.B10;
    const register unsigned short int T3CKR3 = 11;
    sbit  T3CKR3_bit at RPINR3.B11;
    const register unsigned short int T3CKR4 = 12;
    sbit  T3CKR4_bit at RPINR3.B12;
    const register unsigned short int T3CKR5 = 13;
    sbit  T3CKR5_bit at RPINR3.B13;

sfr unsigned int            RPINR4           absolute 0x798;
    const register unsigned short int T4CKR0 = 0;
    sbit  T4CKR0_bit at RPINR4.B0;
    const register unsigned short int T4CKR1 = 1;
    sbit  T4CKR1_bit at RPINR4.B1;
    const register unsigned short int T4CKR2 = 2;
    sbit  T4CKR2_bit at RPINR4.B2;
    const register unsigned short int T4CKR3 = 3;
    sbit  T4CKR3_bit at RPINR4.B3;
    const register unsigned short int T4CKR4 = 4;
    sbit  T4CKR4_bit at RPINR4.B4;
    const register unsigned short int T4CKR5 = 5;
    sbit  T4CKR5_bit at RPINR4.B5;
    const register unsigned short int T5CKR0 = 8;
    sbit  T5CKR0_bit at RPINR4.B8;
    const register unsigned short int T5CKR1 = 9;
    sbit  T5CKR1_bit at RPINR4.B9;
    const register unsigned short int T5CKR2 = 10;
    sbit  T5CKR2_bit at RPINR4.B10;
    const register unsigned short int T5CKR3 = 11;
    sbit  T5CKR3_bit at RPINR4.B11;
    const register unsigned short int T5CKR4 = 12;
    sbit  T5CKR4_bit at RPINR4.B12;
    const register unsigned short int T5CKR5 = 13;
    sbit  T5CKR5_bit at RPINR4.B13;

sfr unsigned int            RPINR7           absolute 0x79E;
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

sfr unsigned int            RPINR8           absolute 0x7A0;
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

sfr unsigned int            RPINR11          absolute 0x7A6;
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

sfr unsigned int            RPINR12          absolute 0x7A8;
    const register unsigned short int TCKIAR0 = 0;
    sbit  TCKIAR0_bit at RPINR12.B0;
    const register unsigned short int TCKIAR1 = 1;
    sbit  TCKIAR1_bit at RPINR12.B1;
    const register unsigned short int TCKIAR2 = 2;
    sbit  TCKIAR2_bit at RPINR12.B2;
    const register unsigned short int TCKIAR3 = 3;
    sbit  TCKIAR3_bit at RPINR12.B3;
    const register unsigned short int TCKIAR4 = 4;
    sbit  TCKIAR4_bit at RPINR12.B4;
    const register unsigned short int TCKIAR5 = 5;
    sbit  TCKIAR5_bit at RPINR12.B5;
    const register unsigned short int TCKIBR0 = 8;
    sbit  TCKIBR0_bit at RPINR12.B8;
    const register unsigned short int TCKIBR1 = 9;
    sbit  TCKIBR1_bit at RPINR12.B9;
    const register unsigned short int TCKIBR2 = 10;
    sbit  TCKIBR2_bit at RPINR12.B10;
    const register unsigned short int TCKIBR3 = 11;
    sbit  TCKIBR3_bit at RPINR12.B11;
    const register unsigned short int TCKIBR4 = 12;
    sbit  TCKIBR4_bit at RPINR12.B12;
    const register unsigned short int TCKIBR5 = 13;
    sbit  TCKIBR5_bit at RPINR12.B13;

sfr unsigned int            RPINR17          absolute 0x7B2;
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

sfr unsigned int            RPINR18          absolute 0x7B4;
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

sfr unsigned int            RPINR19          absolute 0x7B6;
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

sfr unsigned int            RPINR20          absolute 0x7B8;
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

sfr unsigned int            RPINR21          absolute 0x7BA;
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

sfr unsigned int            RPINR22          absolute 0x7BC;
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

sfr unsigned int            RPINR23          absolute 0x7BE;
sfr unsigned int   volatile RPINR25          absolute 0x7C2;
    const register unsigned short int CLCINAR0 = 0;
    sbit  CLCINAR0_bit at RPINR25.B0;
    const register unsigned short int CLCINAR1 = 1;
    sbit  CLCINAR1_bit at RPINR25.B1;
    const register unsigned short int CLCINAR2 = 2;
    sbit  CLCINAR2_bit at RPINR25.B2;
    const register unsigned short int CLCINAR3 = 3;
    sbit  CLCINAR3_bit at RPINR25.B3;
    const register unsigned short int CLCINAR4 = 4;
    sbit  CLCINAR4_bit at RPINR25.B4;
    const register unsigned short int CLCINAR5 = 5;
    sbit  CLCINAR5_bit at RPINR25.B5;
    const register unsigned short int CLCINBR0 = 8;
    sbit  CLCINBR0_bit at RPINR25.B8;
    const register unsigned short int CLCINBR1 = 9;
    sbit  CLCINBR1_bit at RPINR25.B9;
    const register unsigned short int CLCINBR2 = 10;
    sbit  CLCINBR2_bit at RPINR25.B10;
    const register unsigned short int CLCINBR3 = 11;
    sbit  CLCINBR3_bit at RPINR25.B11;
    const register unsigned short int CLCINBR4 = 12;
    sbit  CLCINBR4_bit at RPINR25.B12;
    const register unsigned short int CLCINBR5 = 13;
    sbit  CLCINBR5_bit at RPINR25.B13;

sfr unsigned int            RPINR27          absolute 0x7C6;
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

sfr unsigned int            RPINR28          absolute 0x7C8;
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

sfr unsigned int            RPINR29          absolute 0x7CA;
    const register unsigned short int SS3R0 = 0;
    sbit  SS3R0_bit at RPINR29.B0;
    const register unsigned short int SS3R1 = 1;
    sbit  SS3R1_bit at RPINR29.B1;
    const register unsigned short int SS3R2 = 2;
    sbit  SS3R2_bit at RPINR29.B2;
    const register unsigned short int SS3R3 = 3;
    sbit  SS3R3_bit at RPINR29.B3;
    const register unsigned short int SS3R4 = 4;
    sbit  SS3R4_bit at RPINR29.B4;
    const register unsigned short int SS3R5 = 5;
    sbit  SS3R5_bit at RPINR29.B5;

sfr unsigned int            RPOR0            absolute 0x7D4;
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

sfr unsigned int            RPOR1            absolute 0x7D6;
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

sfr unsigned int            RPOR2            absolute 0x7D8;
    const register unsigned short int RP4R0 = 0;
    sbit  RP4R0_bit at RPOR2.B0;
    const register unsigned short int RP4R1 = 1;
    sbit  RP4R1_bit at RPOR2.B1;
    const register unsigned short int RP4R2 = 2;
    sbit  RP4R2_bit at RPOR2.B2;
    const register unsigned short int RP4R3 = 3;
    sbit  RP4R3_bit at RPOR2.B3;
    const register unsigned short int RP4R4 = 4;
    sbit  RP4R4_bit at RPOR2.B4;
    const register unsigned short int RP4R5 = 5;
    sbit  RP4R5_bit at RPOR2.B5;
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

sfr unsigned int            RPOR3            absolute 0x7DA;
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

sfr unsigned int            RPOR4            absolute 0x7DC;
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

sfr unsigned int            RPOR5            absolute 0x7DE;
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

sfr unsigned int            RPOR6            absolute 0x7E0;
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

sfr unsigned int            RPOR7            absolute 0x7E2;
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

sfr unsigned int            RPOR8            absolute 0x7E4;
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

sfr unsigned int            RPOR9            absolute 0x7E6;
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

sfr unsigned int            RPOR10           absolute 0x7E8;
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

sfr unsigned int            RPOR11           absolute 0x7EA;
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

sfr unsigned int            RPOR12           absolute 0x7EC;
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

sfr unsigned int            RPOR13           absolute 0x7EE;
    const register unsigned short int RP26R0 = 0;
    sbit  RP26R0_bit at RPOR13.B0;
    const register unsigned short int RP26R1 = 1;
    sbit  RP26R1_bit at RPOR13.B1;
    const register unsigned short int RP26R2 = 2;
    sbit  RP26R2_bit at RPOR13.B2;
    const register unsigned short int RP26R3 = 3;
    sbit  RP26R3_bit at RPOR13.B3;
    const register unsigned short int RP26R4 = 4;
    sbit  RP26R4_bit at RPOR13.B4;
    const register unsigned short int RP26R5 = 5;
    sbit  RP26R5_bit at RPOR13.B5;
    const register unsigned short int RP27R0 = 8;
    sbit  RP27R0_bit at RPOR13.B8;
    const register unsigned short int RP27R1 = 9;
    sbit  RP27R1_bit at RPOR13.B9;
    const register unsigned short int RP27R2 = 10;
    sbit  RP27R2_bit at RPOR13.B10;
    const register unsigned short int RP27R3 = 11;
    sbit  RP27R3_bit at RPOR13.B11;
    const register unsigned short int RP27R4 = 12;
    sbit  RP27R4_bit at RPOR13.B12;
    const register unsigned short int RP27R5 = 13;
    sbit  RP27R5_bit at RPOR13.B13;

sfr unsigned int            RPOR14           absolute 0x7F0;
    const register unsigned short int RP28R0 = 0;
    sbit  RP28R0_bit at RPOR14.B0;
    const register unsigned short int RP28R1 = 1;
    sbit  RP28R1_bit at RPOR14.B1;
    const register unsigned short int RP28R2 = 2;
    sbit  RP28R2_bit at RPOR14.B2;
    const register unsigned short int RP28R3 = 3;
    sbit  RP28R3_bit at RPOR14.B3;
    const register unsigned short int RP28R4 = 4;
    sbit  RP28R4_bit at RPOR14.B4;
    const register unsigned short int RP28R5 = 5;
    sbit  RP28R5_bit at RPOR14.B5;
    const register unsigned short int RP29R0 = 8;
    sbit  RP29R0_bit at RPOR14.B8;
    const register unsigned short int RP29R1 = 9;
    sbit  RP29R1_bit at RPOR14.B9;
    const register unsigned short int RP29R2 = 10;
    sbit  RP29R2_bit at RPOR14.B10;
    const register unsigned short int RP29R3 = 11;
    sbit  RP29R3_bit at RPOR14.B11;
    const register unsigned short int RP29R4 = 12;
    sbit  RP29R4_bit at RPOR14.B12;
    const register unsigned short int RP29R5 = 13;
    sbit  RP29R5_bit at RPOR14.B13;

sfr unsigned int            RPOR15           absolute 0x7F2;
    const register unsigned short int RP30R0 = 0;
    sbit  RP30R0_bit at RPOR15.B0;
    const register unsigned short int RP30R1 = 1;
    sbit  RP30R1_bit at RPOR15.B1;
    const register unsigned short int RP30R2 = 2;
    sbit  RP30R2_bit at RPOR15.B2;
    const register unsigned short int RP30R3 = 3;
    sbit  RP30R3_bit at RPOR15.B3;
    const register unsigned short int RP30R4 = 4;
    sbit  RP30R4_bit at RPOR15.B4;
    const register unsigned short int RP30R5 = 5;
    sbit  RP30R5_bit at RPOR15.B5;
    const register unsigned short int RP31R0 = 8;
    sbit  RP31R0_bit at RPOR15.B8;
    const register unsigned short int RP31R1 = 9;
    sbit  RP31R1_bit at RPOR15.B9;
    const register unsigned short int RP31R2 = 10;
    sbit  RP31R2_bit at RPOR15.B10;
    const register unsigned short int RP31R3 = 11;
    sbit  RP31R3_bit at RPOR15.B11;
    const register unsigned short int RP31R4 = 12;
    sbit  RP31R4_bit at RPOR15.B12;
    const register unsigned short int RP31R5 = 13;
    sbit  RP31R5_bit at RPOR15.B13;


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
      unsigned ALTIVT:1;
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
      unsigned CNIF:1;
      unsigned INT1IF:1;
      unsigned :1;
      unsigned CCP5IF:1;
      unsigned CCP6IF:1;
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
sfr volatile typeIFS1BITS IFS1bits absolute 0x8A;

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
      unsigned CCT3IF:1;
      unsigned CCT4IF:1;
      unsigned PMPIF:1;
      unsigned DMA4IF:1;
      unsigned CCT5IF:1;
    };
  };
} typeIFS2BITS;
sfr volatile typeIFS2BITS IFS2bits absolute 0x8C;

typedef struct tagIFS3BITS {
  union {
    struct {
      unsigned CCT6IF:1;
      unsigned SI2C2IF:1;
      unsigned MI2C2IF:1;
      unsigned CCT7IF:1;
      unsigned :1;
      unsigned INT3IF:1;
      unsigned INT4IF:1;
      unsigned CRYDNIF:1;
      unsigned KEYSTRIF:1;
      unsigned SPI4RXIF:1;
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
      unsigned :2;
      unsigned SI2C3IF:1;
      unsigned MI2C3IF:1;
      unsigned LVDIF:1;
      unsigned CCP7IF:1;
      unsigned :3;
      unsigned CTMUIF:1;
      unsigned DAC1IF:1;
    };
  };
} typeIFS4BITS;
sfr volatile typeIFS4BITS IFS4bits absolute 0x90;

typedef struct tagIFS5BITS {
  union {
    struct {
      unsigned :1;
      unsigned U3ERIF:1;
      unsigned U3RXIF:1;
      unsigned U3TXIF:1;
      unsigned I2C1BCIF:1;
      unsigned I2C2BCIF:1;
      unsigned USB1IF:1;
      unsigned U4ERIF:1;
      unsigned U4RXIF:1;
      unsigned U4TXIF:1;
      unsigned SPI3IF:1;
      unsigned SPI3TXIF:1;
      unsigned SPI4IF:1;
      unsigned SPI4TXIF:1;
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
      unsigned CLC3IF:1;
      unsigned CLC4IF:1;
      unsigned LCDIF:1;
      unsigned CCT1IF:1;
      unsigned CCT2IF:1;
      unsigned :3;
      unsigned FSTIF:1;
      unsigned :2;
      unsigned I2C3BCIF:1;
      unsigned RTCCTSIF:1;
      unsigned U5RXIF:1;
    };
  };
} typeIFS6BITS;
sfr volatile typeIFS6BITS IFS6bits absolute 0x94;

typedef struct tagIFS7BITS {
  union {
    struct {
      unsigned U5TXIF:1;
      unsigned U5ERIF:1;
      unsigned U6RXIF:1;
      unsigned U6TXIF:1;
      unsigned U6ERIF:1;
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
      unsigned CNIE:1;
      unsigned INT1IE:1;
      unsigned :1;
      unsigned CCP5IE:1;
      unsigned CCP6IE:1;
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
sfr volatile typeIEC1BITS IEC1bits absolute 0x9A;

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
      unsigned CCT3IE:1;
      unsigned CCT4IE:1;
      unsigned PMPIE:1;
      unsigned DMA4IE:1;
      unsigned CCT5IE:1;
    };
  };
} typeIEC2BITS;
sfr volatile typeIEC2BITS IEC2bits absolute 0x9C;

typedef struct tagIEC3BITS {
  union {
    struct {
      unsigned CCT6IE:1;
      unsigned SI2C2IE:1;
      unsigned MI2C2IE:1;
      unsigned CCT7IE:1;
      unsigned :1;
      unsigned INT3IE:1;
      unsigned INT4IE:1;
      unsigned CRYDNIE:1;
      unsigned KEYSTRIE:1;
      unsigned SPI4RXIE:1;
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
      unsigned :2;
      unsigned SI2C3IE:1;
      unsigned MI2C3IE:1;
      unsigned LVDIE:1;
      unsigned CCP7IE:1;
      unsigned :3;
      unsigned CTMUIE:1;
      unsigned DAC1IE:1;
    };
  };
} typeIEC4BITS;
sfr volatile typeIEC4BITS IEC4bits absolute 0xA0;

typedef struct tagIEC5BITS {
  union {
    struct {
      unsigned :1;
      unsigned U3ERIE:1;
      unsigned U3RXIE:1;
      unsigned U3TXIE:1;
      unsigned I2C1BCIE:1;
      unsigned I2C2BCIE:1;
      unsigned USB1IE:1;
      unsigned U4ERIE:1;
      unsigned U4RXIE:1;
      unsigned U4TXIE:1;
      unsigned SPI3IE:1;
      unsigned SPI3TXIE:1;
      unsigned SPI4IE:1;
      unsigned SPI4TXIE:1;
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
      unsigned CLC3IE:1;
      unsigned CLC4IE:1;
      unsigned LCDIE:1;
      unsigned CCT1IE:1;
      unsigned CCT2IE:1;
      unsigned :3;
      unsigned FSTIE:1;
      unsigned :2;
      unsigned I2C3BCIE:1;
      unsigned RTCCTSIE:1;
      unsigned U5RXIE:1;
    };
  };
} typeIEC6BITS;
sfr volatile typeIEC6BITS IEC6bits absolute 0xA4;

typedef struct tagIEC7BITS {
  union {
    struct {
      unsigned U5TXIE:1;
      unsigned U5ERIE:1;
      unsigned U6RXIE:1;
      unsigned U6TXIE:1;
      unsigned U6ERIE:1;
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
sfr volatile typeIPC4BITS IPC4bits absolute 0xB0;

typedef struct tagIPC5BITS {
  union {
    struct {
      unsigned INT1IP:3;
      unsigned :5;
      unsigned CCP5IP:3;
      unsigned :1;
      unsigned CCP6IP:3;
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
sfr volatile typeIPC6BITS IPC6bits absolute 0xB4;

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
sfr volatile typeIPC7BITS IPC7bits absolute 0xB6;

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
sfr volatile typeIPC8BITS IPC8bits absolute 0xB8;

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
sfr volatile typeIPC9BITS IPC9bits absolute 0xBA;

typedef struct tagIPC10BITS {
  union {
    struct {
      unsigned IC6IP:3;
      unsigned :1;
      unsigned OC5IP:3;
      unsigned :1;
      unsigned OC6IP:3;
      unsigned :1;
      unsigned CCT3IP:3;
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
      unsigned :1;
      unsigned CCT5IP:3;
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
      unsigned CCT6IP:3;
      unsigned :1;
      unsigned SI2C2IP:3;
      unsigned :1;
      unsigned MI2C2IP:3;
      unsigned :1;
      unsigned CCT7IP:3;
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
sfr volatile typeIPC13BITS IPC13bits absolute 0xC2;

typedef struct tagIPC14BITS {
  union {
    struct {
      unsigned KEYSTRIP:3;
      unsigned :1;
      unsigned SPI4RXIP:3;
      unsigned :1;
      unsigned SPI1RXIP:3;
      unsigned :1;
      unsigned SPI2RXIP:3;
    };
    struct {
      unsigned KEYSTRIP0:1;
      unsigned KEYSTRIP1:1;
      unsigned KEYSTRIP2:1;
      unsigned :1;
      unsigned SPI4RXIP0:1;
      unsigned SPI4RXIP1:1;
      unsigned SPI4RXIP2:1;
      unsigned :1;
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
      unsigned :8;
      unsigned SI2C3IP:3;
      unsigned :1;
      unsigned MI2C3IP:3;
    };
    struct {
      unsigned :8;
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
      unsigned :1;
      unsigned CCP7IP:3;
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
      unsigned :1;
      unsigned DAC1IP:3;
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
    };
  };
} typeIPC19BITS;
sfr volatile typeIPC19BITS IPC19bits absolute 0xCE;

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
sfr volatile typeIPC20BITS IPC20bits absolute 0xD0;

typedef struct tagIPC21BITS {
  union {
    struct {
      unsigned I2C1BCIP:3;
      unsigned :1;
      unsigned I2C2BCIP:3;
      unsigned :1;
      unsigned USB1IP:3;
      unsigned :1;
      unsigned U4ERIP:3;
    };
    struct {
      unsigned I2C1BCIP0:1;
      unsigned I2C1BCIP1:1;
      unsigned I2C1BCIP2:1;
      unsigned :1;
      unsigned I2C2BCIP0:1;
      unsigned I2C2BCIP1:1;
      unsigned I2C2BCIP2:1;
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
sfr volatile typeIPC21BITS IPC21bits absolute 0xD2;

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
sfr volatile typeIPC22BITS IPC22bits absolute 0xD4;

typedef struct tagIPC23BITS {
  union {
    struct {
      unsigned SPI4IP:3;
      unsigned :1;
      unsigned SPI4TXIP:3;
      unsigned :1;
      unsigned CCP3IP:3;
      unsigned :1;
      unsigned CCP4IP:3;
    };
    struct {
      unsigned SPI4IP0:1;
      unsigned SPI4IP1:1;
      unsigned SPI4IP2:1;
      unsigned :1;
      unsigned SPI4TXIP0:1;
      unsigned SPI4TXIP1:1;
      unsigned SPI4TXIP2:1;
      unsigned :1;
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
      unsigned :1;
      unsigned CLC3IP:3;
      unsigned :1;
      unsigned CLC4IP:3;
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
      unsigned LCDIP:3;
      unsigned :1;
      unsigned CCT1IP:3;
      unsigned :1;
      unsigned CCT2IP:3;
    };
    struct {
      unsigned LCDIP0:1;
      unsigned LCDIP1:1;
      unsigned LCDIP2:1;
      unsigned :1;
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
      unsigned :4;
      unsigned I2C3BCIP:3;
      unsigned :1;
      unsigned RTCCTSIP:3;
      unsigned :1;
      unsigned U5RXIP:3;
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
      unsigned U5TXIP:3;
      unsigned :1;
      unsigned U5ERIP:3;
      unsigned :1;
      unsigned U6RXIP:3;
      unsigned :1;
      unsigned U6TXIP:3;
    };
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
      unsigned U6ERIP:3;
      unsigned :1;
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
sfr volatile typeRCONBITS RCONbits absolute 0x10C;

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
sfr volatile typeRCON2BITS RCON2bits absolute 0x10E;

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
sfr volatile typeHLVDCONBITS HLVDCONbits absolute 0x110;

typedef struct tagDSCONBITS {
  union {
    struct {
      unsigned RELEASE:1;
      unsigned DSBOR:1;
      unsigned WAKEDIS:1;
      unsigned :8;
      unsigned KEYRAMEN:1;
      unsigned RTCMD:1;
      unsigned :2;
      unsigned DSEN:1;
    };
  };
} typeDSCONBITS;
sfr volatile typeDSCONBITS DSCONbits absolute 0x112;

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
sfr volatile typeDSWAKEBITS DSWAKEbits absolute 0x114;

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
sfr volatile typePMD1BITS PMD1bits absolute 0x178;

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
sfr volatile typePMD2BITS PMD2bits absolute 0x17A;

typedef struct tagPMD3BITS {
  union {
    struct {
      unsigned :1;
      unsigned I2C2MD:1;
      unsigned I2C3MD:1;
      unsigned U3MD:1;
      unsigned :2;
      unsigned DAC1MD:1;
      unsigned CRCMD:1;
      unsigned PMPMD:1;
      unsigned :1;
      unsigned CMPMD:1;
    };
    struct {
      unsigned :7;
      unsigned CRCPMD:1;
    };
  };
} typePMD3BITS;
sfr volatile typePMD3BITS PMD3bits absolute 0x17C;

typedef struct tagPMD4BITS {
  union {
    struct {
      unsigned USB1MD:1;
      unsigned LVDMD:1;
      unsigned CTMUMD:1;
      unsigned REFOMD:1;
      unsigned :1;
      unsigned U4MD:1;
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
sfr volatile typePMD4BITS PMD4bits absolute 0x17E;

typedef struct tagPMD5BITS {
  union {
    struct {
      unsigned CCP1MD:1;
      unsigned CCP2MD:1;
      unsigned CCP3MD:1;
      unsigned CCP4MD:1;
      unsigned CCP5MD:1;
      unsigned CCP6MD:1;
      unsigned CCP7MD:1;
    };
  };
} typePMD5BITS;
sfr volatile typePMD5BITS PMD5bits absolute 0x180;

typedef struct tagPMD6BITS {
  union {
    struct {
      unsigned SPI3MD:1;
      unsigned SPI4MD:1;
      unsigned :4;
      unsigned LCDMD:1;
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
      unsigned CRYMD:1;
      unsigned :1;
      unsigned CLC1MD:1;
      unsigned CLC2MD:1;
      unsigned CLC3MD:1;
      unsigned CLC4MD:1;
      unsigned U5MD:1;
      unsigned U6MD:1;
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
sfr volatile typeT4CONBITS T4CONbits absolute 0x1AE;

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
sfr volatile typeT5CONBITS T5CONbits absolute 0x1B0;

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
} typeCTMUCON1HBITS;
sfr volatile typeCTMUCON1HBITS CTMUCON1Hbits absolute 0x1C2;

typedef struct tagCTMUCON2BITS {
  union {
    struct {
      unsigned DISCHS:3;
      unsigned :1;
      unsigned IRSTEN:1;
    };
    struct {
      unsigned DISCHS0:1;
      unsigned DISCHS1:1;
      unsigned DISCHS2:1;
    };
  };
} typeCTMUCON2BITS;
sfr volatile typeCTMUCON2BITS CTMUCON2bits absolute 0x1C4;

typedef struct tagCTMUCON2LBITS {
  union {
    struct {
      unsigned DISCHS:3;
      unsigned :1;
      unsigned IRSTEN:1;
    };
    struct {
      unsigned DISCHS0:1;
      unsigned DISCHS1:1;
      unsigned DISCHS2:1;
    };
  };
} typeCTMUCON2LBITS;
sfr volatile typeCTMUCON2LBITS CTMUCON2Lbits absolute 0x1C4;

typedef struct tagRTCCON1LBITS {
  union {
    struct {
      unsigned TSAEN:1;
      unsigned TSBEN:1;
      unsigned :2;
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
      unsigned TSBEVT:1;
      unsigned ALMEVT:1;
      unsigned :1;
      unsigned CPLCK:1;
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

typedef struct tagTSBTIMELBITS {
  union {
    struct {
      unsigned :8;
      unsigned SECONE:4;
      unsigned SECTEN:3;
    };
  };
} typeTSBTIMELBITS;
sfr volatile typeTSBTIMELBITS TSBTIMELbits absolute 0x1F4;

typedef struct tagTSBTIMEHBITS {
  union {
    struct {
      unsigned MINONE:4;
      unsigned MINTEN:3;
      unsigned :1;
      unsigned HRONE:4;
      unsigned HRTEN:2;
    };
  };
} typeTSBTIMEHBITS;
sfr volatile typeTSBTIMEHBITS TSBTIMEHbits absolute 0x1F6;

typedef struct tagTSBDATELBITS {
  union {
    struct {
      unsigned WDAY:3;
      unsigned :5;
      unsigned DAYONE:4;
      unsigned DAYTEN:2;
    };
  };
} typeTSBDATELBITS;
sfr volatile typeTSBDATELBITS TSBDATELbits absolute 0x1F8;

typedef struct tagTSBDATEHBITS {
  union {
    struct {
      unsigned MTHONE:4;
      unsigned MTHTEN:1;
      unsigned :3;
      unsigned YRONE:4;
      unsigned YRTEN:4;
    };
  };
} typeTSBDATEHBITS;
sfr volatile typeTSBDATEHBITS TSBDATEHbits absolute 0x1FA;

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
sfr volatile typeIC4CON1BITS IC4CON1bits absolute 0x218;

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
sfr volatile typeIC4CON2BITS IC4CON2bits absolute 0x21A;

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
sfr volatile typeIC5CON1BITS IC5CON1bits absolute 0x220;

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
sfr volatile typeIC5CON2BITS IC5CON2bits absolute 0x222;

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
sfr volatile typeIC6CON1BITS IC6CON1bits absolute 0x228;

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
sfr volatile typeIC6CON2BITS IC6CON2bits absolute 0x22A;

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
sfr volatile typeOC4CON1BITS OC4CON1bits absolute 0x24E;

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
sfr volatile typeOC4CON2BITS OC4CON2bits absolute 0x250;

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
sfr volatile typeOC5CON1BITS OC5CON1bits absolute 0x258;

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
sfr volatile typeOC5CON2BITS OC5CON2bits absolute 0x25A;

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
sfr volatile typeOC6CON1BITS OC6CON1bits absolute 0x262;

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
sfr volatile typeOC6CON2BITS OC6CON2bits absolute 0x264;

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
} typeCCP2CON2HBITS;
sfr volatile typeCCP2CON2HBITS CCP2CON2Hbits absolute 0x296;

typedef struct tagCCP2CON3LBITS {
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
} typeCCP2CON3LBITS;
sfr volatile typeCCP2CON3LBITS CCP2CON3Lbits absolute 0x298;

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
} typeCCP3CON2HBITS;
sfr volatile typeCCP3CON2HBITS CCP3CON2Hbits absolute 0x2BA;

typedef struct tagCCP3CON3LBITS {
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
} typeCCP3CON3LBITS;
sfr volatile typeCCP3CON3LBITS CCP3CON3Lbits absolute 0x2BC;

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
      unsigned VBGEN:1;
      unsigned VBG2EN:1;
      unsigned VBG3EN:1;
      unsigned VBG4EN:1;
      unsigned VBG5EN:1;
      unsigned VBG6EN:1;
    };
  };
} typeANCFGBITS;
sfr volatile typeANCFGBITS ANCFGbits absolute 0x2F4;

typedef struct tagDAC1CONBITS {
  union {
    struct {
      unsigned DACREF:2;
      unsigned DACTSEL:5;
      unsigned DACOE:1;
      unsigned DACTRIG:1;
      unsigned :2;
      unsigned DACFM:1;
      unsigned DACSLP:1;
      unsigned DACSIDL:1;
      unsigned :1;
      unsigned DACEN:1;
    };
  };
} typeDAC1CONBITS;
sfr volatile typeDAC1CONBITS DAC1CONbits absolute 0x2F8;

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
      unsigned :6;
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
      unsigned :2;
      unsigned PSSACE:2;
      unsigned :1;
      unsigned POLACE:1;
      unsigned :2;
      unsigned OUTM:3;
      unsigned :1;
      unsigned OSCNT:3;
      unsigned OETRIG:1;
    };
    struct {
      unsigned :2;
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

typedef struct tagCCP5CON1LBITS {
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
} typeCCP5CON1LBITS;
sfr volatile typeCCP5CON1LBITS CCP5CON1Lbits absolute 0x324;

typedef struct tagCCP5CON1HBITS {
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
} typeCCP5CON1HBITS;
sfr volatile typeCCP5CON1HBITS CCP5CON1Hbits absolute 0x326;

typedef struct tagCCP5CON2LBITS {
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
} typeCCP5CON2LBITS;
sfr volatile typeCCP5CON2LBITS CCP5CON2Lbits absolute 0x328;

typedef struct tagCCP5CON2HBITS {
  union {
    struct {
      unsigned ICS:3;
      unsigned AUXOUT:2;
      unsigned :1;
      unsigned ICGSM:2;
      unsigned OCAEN:1;
      unsigned :6;
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
} typeCCP5CON2HBITS;
sfr volatile typeCCP5CON2HBITS CCP5CON2Hbits absolute 0x32A;

typedef struct tagCCP5CON3LBITS {
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
} typeCCP5CON3LBITS;
sfr volatile typeCCP5CON3LBITS CCP5CON3Lbits absolute 0x32C;

typedef struct tagCCP5CON3HBITS {
  union {
    struct {
      unsigned :2;
      unsigned PSSACE:2;
      unsigned :1;
      unsigned POLACE:1;
      unsigned :2;
      unsigned OUTM:3;
      unsigned :1;
      unsigned OSCNT:3;
      unsigned OETRIG:1;
    };
    struct {
      unsigned :2;
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
} typeCCP5CON3HBITS;
sfr volatile typeCCP5CON3HBITS CCP5CON3Hbits absolute 0x32E;

typedef struct tagCCP5STATBITS {
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
} typeCCP5STATBITS;
sfr volatile typeCCP5STATBITS CCP5STATbits absolute 0x330;

typedef struct tagCCP5STATLBITS {
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
} typeCCP5STATLBITS;
sfr volatile typeCCP5STATLBITS CCP5STATLbits absolute 0x330;

typedef struct tagCCP5STATHBITS {
  union {
    struct {
      unsigned RAWIP:1;
      unsigned RBWIP:1;
      unsigned TMRLWIP:1;
      unsigned TMRHWIP:1;
      unsigned PRLWIP:1;
    };
  };
} typeCCP5STATHBITS;
sfr volatile typeCCP5STATHBITS CCP5STATHbits absolute 0x332;

typedef struct tagCCP6CON1LBITS {
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
} typeCCP6CON1LBITS;
sfr volatile typeCCP6CON1LBITS CCP6CON1Lbits absolute 0x348;

typedef struct tagCCP6CON1HBITS {
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
} typeCCP6CON1HBITS;
sfr volatile typeCCP6CON1HBITS CCP6CON1Hbits absolute 0x34A;

typedef struct tagCCP6CON2LBITS {
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
} typeCCP6CON2LBITS;
sfr volatile typeCCP6CON2LBITS CCP6CON2Lbits absolute 0x34C;

typedef struct tagCCP6CON2HBITS {
  union {
    struct {
      unsigned ICS:3;
      unsigned AUXOUT:2;
      unsigned :1;
      unsigned ICGSM:2;
      unsigned OCAEN:1;
      unsigned :6;
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
} typeCCP6CON2HBITS;
sfr volatile typeCCP6CON2HBITS CCP6CON2Hbits absolute 0x34E;

typedef struct tagCCP6CON3LBITS {
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
} typeCCP6CON3LBITS;
sfr volatile typeCCP6CON3LBITS CCP6CON3Lbits absolute 0x350;

typedef struct tagCCP6CON3HBITS {
  union {
    struct {
      unsigned :2;
      unsigned PSSACE:2;
      unsigned :1;
      unsigned POLACE:1;
      unsigned :2;
      unsigned OUTM:3;
      unsigned :1;
      unsigned OSCNT:3;
      unsigned OETRIG:1;
    };
    struct {
      unsigned :2;
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
} typeCCP6CON3HBITS;
sfr volatile typeCCP6CON3HBITS CCP6CON3Hbits absolute 0x352;

typedef struct tagCCP6STATBITS {
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
} typeCCP6STATBITS;
sfr volatile typeCCP6STATBITS CCP6STATbits absolute 0x354;

typedef struct tagCCP6STATLBITS {
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
} typeCCP6STATLBITS;
sfr volatile typeCCP6STATLBITS CCP6STATLbits absolute 0x354;

typedef struct tagCCP6STATHBITS {
  union {
    struct {
      unsigned RAWIP:1;
      unsigned RBWIP:1;
      unsigned TMRLWIP:1;
      unsigned TMRHWIP:1;
      unsigned PRLWIP:1;
    };
  };
} typeCCP6STATHBITS;
sfr volatile typeCCP6STATHBITS CCP6STATHbits absolute 0x356;

typedef struct tagCCP7CON1LBITS {
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
} typeCCP7CON1LBITS;
sfr volatile typeCCP7CON1LBITS CCP7CON1Lbits absolute 0x36C;

typedef struct tagCCP7CON1HBITS {
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
} typeCCP7CON1HBITS;
sfr volatile typeCCP7CON1HBITS CCP7CON1Hbits absolute 0x36E;

typedef struct tagCCP7CON2LBITS {
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
} typeCCP7CON2LBITS;
sfr volatile typeCCP7CON2LBITS CCP7CON2Lbits absolute 0x370;

typedef struct tagCCP7CON2HBITS {
  union {
    struct {
      unsigned ICS:3;
      unsigned AUXOUT:2;
      unsigned :1;
      unsigned ICGSM:2;
      unsigned OCAEN:1;
      unsigned :6;
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
} typeCCP7CON2HBITS;
sfr volatile typeCCP7CON2HBITS CCP7CON2Hbits absolute 0x372;

typedef struct tagCCP7CON3LBITS {
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
} typeCCP7CON3LBITS;
sfr volatile typeCCP7CON3LBITS CCP7CON3Lbits absolute 0x374;

typedef struct tagCCP7CON3HBITS {
  union {
    struct {
      unsigned :2;
      unsigned PSSACE:2;
      unsigned :1;
      unsigned POLACE:1;
      unsigned :2;
      unsigned OUTM:3;
      unsigned :1;
      unsigned OSCNT:3;
      unsigned OETRIG:1;
    };
    struct {
      unsigned :2;
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
} typeCCP7CON3HBITS;
sfr volatile typeCCP7CON3HBITS CCP7CON3Hbits absolute 0x376;

typedef struct tagCCP7STATBITS {
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
} typeCCP7STATBITS;
sfr volatile typeCCP7STATBITS CCP7STATbits absolute 0x378;

typedef struct tagCCP7STATLBITS {
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
} typeCCP7STATLBITS;
sfr volatile typeCCP7STATLBITS CCP7STATLbits absolute 0x378;

typedef struct tagCCP7STATHBITS {
  union {
    struct {
      unsigned RAWIP:1;
      unsigned RBWIP:1;
      unsigned TMRLWIP:1;
      unsigned TMRHWIP:1;
      unsigned PRLWIP:1;
    };
  };
} typeCCP7STATHBITS;
sfr volatile typeCCP7STATHBITS CCP7STATHbits absolute 0x37A;

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
sfr volatile typeU1WTCHBITS U1WTCHbits absolute 0x3AA;

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
sfr volatile typeU1WTCLBITS U1WTCLbits absolute 0x3AC;

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
sfr volatile typeU2WTCHBITS U2WTCHbits absolute 0x3C0;

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
sfr volatile typeU2WTCLBITS U2WTCLbits absolute 0x3C2;

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
sfr volatile typeU3MODEBITS U3MODEbits absolute 0x3C4;

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
sfr volatile typeU3STABITS U3STAbits absolute 0x3C6;

typedef struct tagU3TXREGBITS {
  union {
    struct {
      unsigned :15;
      unsigned LAST:1;
    };
  };
} typeU3TXREGBITS;
sfr volatile typeU3TXREGBITS U3TXREGbits absolute 0x3C8;

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
sfr volatile typeU3ADMDBITS U3ADMDbits absolute 0x3CE;

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
sfr volatile typeU4MODEBITS U4MODEbits absolute 0x3D0;

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
sfr volatile typeU4STABITS U4STAbits absolute 0x3D2;

typedef struct tagU4TXREGBITS {
  union {
    struct {
      unsigned :15;
      unsigned LAST:1;
    };
  };
} typeU4TXREGBITS;
sfr volatile typeU4TXREGBITS U4TXREGbits absolute 0x3D4;

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
sfr volatile typeU4ADMDBITS U4ADMDbits absolute 0x3DA;

typedef struct tagU5MODEBITS {
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
} typeU5MODEBITS;
sfr volatile typeU5MODEBITS U5MODEbits absolute 0x3DC;

typedef struct tagU5STABITS {
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
} typeU5STABITS;
sfr volatile typeU5STABITS U5STAbits absolute 0x3DE;

typedef struct tagU5TXREGBITS {
  union {
    struct {
      unsigned :15;
      unsigned LAST:1;
    };
  };
} typeU5TXREGBITS;
sfr volatile typeU5TXREGBITS U5TXREGbits absolute 0x3E0;

typedef struct tagU5ADMDBITS {
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
} typeU5ADMDBITS;
sfr volatile typeU5ADMDBITS U5ADMDbits absolute 0x3E6;

typedef struct tagU6MODEBITS {
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
} typeU6MODEBITS;
sfr volatile typeU6MODEBITS U6MODEbits absolute 0x3E8;

typedef struct tagU6STABITS {
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
} typeU6STABITS;
sfr volatile typeU6STABITS U6STAbits absolute 0x3EA;

typedef struct tagU6TXREGBITS {
  union {
    struct {
      unsigned :15;
      unsigned LAST:1;
    };
  };
} typeU6TXREGBITS;
sfr volatile typeU6TXREGBITS U6TXREGbits absolute 0x3EC;

typedef struct tagU6ADMDBITS {
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
} typeU6ADMDBITS;
sfr volatile typeU6ADMDBITS U6ADMDbits absolute 0x3F2;

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

typedef struct tagSPI4CON1BITS {
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
} typeSPI4CON1BITS;
sfr volatile typeSPI4CON1BITS SPI4CON1bits absolute 0x448;

typedef struct tagSPI4CON1LBITS {
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
} typeSPI4CON1LBITS;
sfr volatile typeSPI4CON1LBITS SPI4CON1Lbits absolute 0x448;

typedef struct tagSPI4CON1HBITS {
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
} typeSPI4CON1HBITS;
sfr volatile typeSPI4CON1HBITS SPI4CON1Hbits absolute 0x44A;

typedef struct tagSPI4CON2BITS {
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
} typeSPI4CON2BITS;
sfr volatile typeSPI4CON2BITS SPI4CON2bits absolute 0x44A;

typedef struct tagSPI4CON2LBITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI4CON2LBITS;
sfr volatile typeSPI4CON2LBITS SPI4CON2Lbits absolute 0x44C;

typedef struct tagSPI4CON3BITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI4CON3BITS;
sfr volatile typeSPI4CON3BITS SPI4CON3bits absolute 0x44C;

typedef struct tagSPI4STATLBITS {
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
} typeSPI4STATLBITS;
sfr volatile typeSPI4STATLBITS SPI4STATLbits absolute 0x450;

typedef struct tagSPI4STATHBITS {
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
} typeSPI4STATHBITS;
sfr volatile typeSPI4STATHBITS SPI4STATHbits absolute 0x452;

typedef struct tagSPI4BUFLBITS {
  union {
    struct {
      unsigned SPI4BUFL:16;
    };
    struct {
      unsigned DATA:16;
    };
  };
} typeSPI4BUFLBITS;
sfr volatile typeSPI4BUFLBITS SPI4BUFLbits absolute 0x454;

typedef struct tagSPI4BUFHBITS {
  union {
    struct {
      unsigned SPI4BUFH:16;
    };
    struct {
      unsigned DATA:16;
    };
  };
} typeSPI4BUFHBITS;
sfr volatile typeSPI4BUFHBITS SPI4BUFHbits absolute 0x456;

typedef struct tagSPI4BRGLBITS {
  union {
    struct {
      unsigned SPI4BRGL:13;
    };
    struct {
      unsigned BRG:13;
    };
  };
} typeSPI4BRGLBITS;
sfr volatile typeSPI4BRGLBITS SPI4BRGLbits absolute 0x458;

typedef struct tagSPI4IMSK1BITS {
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
} typeSPI4IMSK1BITS;
sfr volatile typeSPI4IMSK1BITS SPI4IMSK1bits absolute 0x45C;

typedef struct tagSPI4IMSKLBITS {
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
} typeSPI4IMSKLBITS;
sfr volatile typeSPI4IMSKLBITS SPI4IMSKLbits absolute 0x45C;

typedef struct tagSPI4IMSK2BITS {
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
} typeSPI4IMSK2BITS;
sfr volatile typeSPI4IMSK2BITS SPI4IMSK2bits absolute 0x45E;

typedef struct tagSPI4IMSKHBITS {
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
} typeSPI4IMSKHBITS;
sfr volatile typeSPI4IMSKHBITS SPI4IMSKHbits absolute 0x45E;

typedef struct tagSPI4URDTLBITS {
  union {
    struct {
      unsigned SPI4URDTL:16;
    };
    struct {
      unsigned URDATA:16;
    };
  };
} typeSPI4URDTLBITS;
sfr volatile typeSPI4URDTLBITS SPI4URDTLbits absolute 0x460;

typedef struct tagSPI4URDTHBITS {
  union {
    struct {
      unsigned SPI4URDTH:16;
    };
    struct {
      unsigned URDATA:16;
    };
  };
} typeSPI4URDTHBITS;
sfr volatile typeSPI4URDTHBITS SPI4URDTHbits absolute 0x462;

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

typedef struct tagCLC3CONLBITS {
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
} typeCLC3CONLBITS;
sfr volatile typeCLC3CONLBITS CLC3CONLbits absolute 0x47C;

typedef struct tagCLC3CONHBITS {
  union {
    struct {
      unsigned G1POL:1;
      unsigned G2POL:1;
      unsigned G3POL:1;
      unsigned G4POL:1;
    };
  };
} typeCLC3CONHBITS;
sfr volatile typeCLC3CONHBITS CLC3CONHbits absolute 0x47E;

typedef struct tagCLC3SELBITS {
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
} typeCLC3SELBITS;
sfr volatile typeCLC3SELBITS CLC3SELbits absolute 0x480;

typedef struct tagCLC3SELLBITS {
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
} typeCLC3SELLBITS;
sfr volatile typeCLC3SELLBITS CLC3SELLbits absolute 0x480;

typedef struct tagCLC3GLSLBITS {
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
} typeCLC3GLSLBITS;
sfr volatile typeCLC3GLSLBITS CLC3GLSLbits absolute 0x484;

typedef struct tagCLC3GLSHBITS {
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
} typeCLC3GLSHBITS;
sfr volatile typeCLC3GLSHBITS CLC3GLSHbits absolute 0x486;

typedef struct tagCLC4CONLBITS {
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
} typeCLC4CONLBITS;
sfr volatile typeCLC4CONLBITS CLC4CONLbits absolute 0x488;

typedef struct tagCLC4CONHBITS {
  union {
    struct {
      unsigned G1POL:1;
      unsigned G2POL:1;
      unsigned G3POL:1;
      unsigned G4POL:1;
    };
  };
} typeCLC4CONHBITS;
sfr volatile typeCLC4CONHBITS CLC4CONHbits absolute 0x48A;

typedef struct tagCLC4SELBITS {
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
} typeCLC4SELBITS;
sfr volatile typeCLC4SELBITS CLC4SELbits absolute 0x48C;

typedef struct tagCLC4SELLBITS {
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
} typeCLC4SELLBITS;
sfr volatile typeCLC4SELLBITS CLC4SELLbits absolute 0x48C;

typedef struct tagCLC4GLSLBITS {
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
} typeCLC4GLSLBITS;
sfr volatile typeCLC4GLSLBITS CLC4GLSLbits absolute 0x490;

typedef struct tagCLC4GLSHBITS {
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
} typeCLC4GLSHBITS;
sfr volatile typeCLC4GLSHBITS CLC4GLSHbits absolute 0x492;

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

typedef struct tagI2C3RCVBITS {
  union {
    struct {
      unsigned I2CRXDATA:8;
    };
  };
} typeI2C3RCVBITS;
sfr volatile typeI2C3RCVBITS I2C3RCVbits absolute 0x4B4;

typedef struct tagI2C3TRNBITS {
  union {
    struct {
      unsigned I2CTXDATA:8;
    };
  };
} typeI2C3TRNBITS;
sfr volatile typeI2C3TRNBITS I2C3TRNbits absolute 0x4B6;

typedef struct tagI2C3CON1BITS {
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
} typeI2C3CON1BITS;
sfr volatile typeI2C3CON1BITS I2C3CON1bits absolute 0x4BA;

typedef struct tagI2C3CONLBITS {
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
} typeI2C3CONLBITS;
sfr volatile typeI2C3CONLBITS I2C3CONLbits absolute 0x4BA;

typedef struct tagI2C3CON2BITS {
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
} typeI2C3CON2BITS;
sfr volatile typeI2C3CON2BITS I2C3CON2bits absolute 0x4BC;

typedef struct tagI2C3CONHBITS {
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
} typeI2C3CONHBITS;
sfr volatile typeI2C3CONHBITS I2C3CONHbits absolute 0x4BC;

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
} typeI2C3STATBITS;
sfr volatile typeI2C3STATBITS I2C3STATbits absolute 0x4BE;

typedef struct tagI2C3ADDBITS {
  union {
    struct {
      unsigned ADD:10;
    };
  };
} typeI2C3ADDBITS;
sfr volatile typeI2C3ADDBITS I2C3ADDbits absolute 0x4C0;

typedef struct tagI2C3MSKBITS {
  union {
    struct {
      unsigned MSK:10;
    };
    struct {
      unsigned AMSK:10;
    };
  };
} typeI2C3MSKBITS;
sfr volatile typeI2C3MSKBITS I2C3MSKbits absolute 0x4C2;

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
sfr volatile typeCRYCONLBITS CRYCONLbits absolute 0x51C;

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
sfr volatile typeCRYCONHBITS CRYCONHbits absolute 0x51E;

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
sfr volatile typeCRYSTATBITS CRYSTATbits absolute 0x520;

typedef struct tagCRYOTPBITS {
  union {
    struct {
      unsigned CRYWR:1;
      unsigned KEYPG:4;
      unsigned CRYREAD:1;
      unsigned OTPIE:1;
      unsigned PGMTST:1;
      unsigned KEYPSEL:1;
    };
  };
} typeCRYOTPBITS;
sfr volatile typeCRYOTPBITS CRYOTPbits absolute 0x524;

typedef struct tagU1OTGIRBITS {
  union {
    struct {
      unsigned VBUSVDIF:1;
      unsigned :1;
      unsigned SESENDIF:1;
      unsigned SESVDIF:1;
      unsigned ACTVIF:1;
      unsigned LSTATEIF:1;
      unsigned T1MSECIF:1;
      unsigned IDIF:1;
    };
  };
} typeU1OTGIRBITS;
sfr volatile typeU1OTGIRBITS U1OTGIRbits absolute 0x578;

typedef struct tagU1OTGIEBITS {
  union {
    struct {
      unsigned VBUSVDIE:1;
      unsigned :1;
      unsigned SESENDIE:1;
      unsigned SESVDIE:1;
      unsigned ACTVIE:1;
      unsigned LSTATEIE:1;
      unsigned T1MSECIE:1;
      unsigned IDIE:1;
    };
  };
} typeU1OTGIEBITS;
sfr volatile typeU1OTGIEBITS U1OTGIEbits absolute 0x57A;

typedef struct tagU1OTGSTATBITS {
  union {
    struct {
      unsigned VBUSVD:1;
      unsigned :1;
      unsigned SESEND:1;
      unsigned SESVD:1;
      unsigned :1;
      unsigned LSTATE:1;
      unsigned :1;
      unsigned ID:1;
    };
  };
} typeU1OTGSTATBITS;
sfr volatile typeU1OTGSTATBITS U1OTGSTATbits absolute 0x57C;

typedef struct tagU1OTGCONBITS {
  union {
    struct {
      unsigned VBUSDIS:1;
      unsigned VBUSCHG:1;
      unsigned OTGEN:1;
      unsigned VBUSON:1;
      unsigned DMPULDWN:1;
      unsigned DPPULDWN:1;
      unsigned DMPULUP:1;
      unsigned DPPULUP:1;
    };
  };
} typeU1OTGCONBITS;
sfr volatile typeU1OTGCONBITS U1OTGCONbits absolute 0x57E;

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
sfr volatile typeU1PWRCBITS U1PWRCbits absolute 0x580;

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
sfr volatile typeU1IRBITS U1IRbits absolute 0x582;

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
sfr volatile typeU1IEBITS U1IEbits absolute 0x584;

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
sfr volatile typeU1EIRBITS U1EIRbits absolute 0x586;

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
sfr volatile typeU1EIEBITS U1EIEbits absolute 0x588;

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
sfr volatile typeU1STATBITS U1STATbits absolute 0x58A;

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
sfr volatile typeU1CONBITS U1CONbits absolute 0x58C;

typedef struct tagU1ADDRBITS {
  union {
    struct {
      unsigned ADDR:7;
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
      unsigned ADDR0:1;
      unsigned ADDR1:1;
      unsigned ADDR2:1;
      unsigned ADDR3:1;
      unsigned ADDR4:1;
      unsigned ADDR5:1;
      unsigned ADDR6:1;
    };
    struct {
      unsigned DEVADDR:7;
    };
  };
} typeU1ADDRBITS;
sfr volatile typeU1ADDRBITS U1ADDRbits absolute 0x58E;

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
sfr volatile typeU1BDTP1BITS U1BDTP1bits absolute 0x590;

typedef struct tagU1FRMLBITS {
  union {
    struct {
      unsigned FRM0:1;
      unsigned FRM1:1;
      unsigned FRM2:1;
      unsigned FRM3:1;
      unsigned FRM4:1;
      unsigned FRM5:1;
      unsigned FRM6:1;
      unsigned FRM7:1;
    };
  };
} typeU1FRMLBITS;
sfr volatile typeU1FRMLBITS U1FRMLbits absolute 0x592;

typedef struct tagU1FRMHBITS {
  union {
    struct {
      unsigned FRM8:1;
      unsigned FRM9:1;
      unsigned FRM10:1;
    };
  };
} typeU1FRMHBITS;
sfr volatile typeU1FRMHBITS U1FRMHbits absolute 0x594;

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
sfr volatile typeU1TOKBITS U1TOKbits absolute 0x596;

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
sfr volatile typeU1SOFBITS U1SOFbits absolute 0x598;

typedef struct tagU1BDTP2BITS {
  union {
    struct {
      unsigned BDTPTRH:8;
    };
  };
} typeU1BDTP2BITS;
sfr volatile typeU1BDTP2BITS U1BDTP2bits absolute 0x59A;

typedef struct tagU1BDTP3BITS {
  union {
    struct {
      unsigned BDTPTRU:8;
    };
  };
} typeU1BDTP3BITS;
sfr volatile typeU1BDTP3BITS U1BDTP3bits absolute 0x59C;

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
sfr volatile typeU1CNFG1BITS U1CNFG1bits absolute 0x59E;

typedef struct tagU1CNFG2BITS {
  union {
    struct {
      unsigned UTRDIS:1;
      unsigned UVCMPDIS:1;
      unsigned UVBUSDIS:1;
      unsigned EXTI2CEN:1;
      unsigned PUVBUS:1;
      unsigned UVCMPSEL:1;
    };
  };
} typeU1CNFG2BITS;
sfr volatile typeU1CNFG2BITS U1CNFG2bits absolute 0x5A0;

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
sfr volatile typeU1EP0BITS U1EP0bits absolute 0x5A2;

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
sfr volatile typeU1EP1BITS U1EP1bits absolute 0x5A4;

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
sfr volatile typeU1EP2BITS U1EP2bits absolute 0x5A6;

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
sfr volatile typeU1EP3BITS U1EP3bits absolute 0x5A8;

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
sfr volatile typeU1EP4BITS U1EP4bits absolute 0x5AA;

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
sfr volatile typeU1EP5BITS U1EP5bits absolute 0x5AC;

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
sfr volatile typeU1EP6BITS U1EP6bits absolute 0x5AE;

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
sfr volatile typeU1EP7BITS U1EP7bits absolute 0x5B0;

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
sfr volatile typeU1EP8BITS U1EP8bits absolute 0x5B2;

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
sfr volatile typeU1EP9BITS U1EP9bits absolute 0x5B4;

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
sfr volatile typeU1EP10BITS U1EP10bits absolute 0x5B6;

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
sfr volatile typeU1EP11BITS U1EP11bits absolute 0x5B8;

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
sfr volatile typeU1EP12BITS U1EP12bits absolute 0x5BA;

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
sfr volatile typeU1EP13BITS U1EP13bits absolute 0x5BC;

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
sfr volatile typeU1EP14BITS U1EP14bits absolute 0x5BE;

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
sfr volatile typeU1EP15BITS U1EP15bits absolute 0x5C0;

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
sfr volatile typeLCDCONBITS LCDCONbits absolute 0x5C2;

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
sfr volatile typeLCDREFBITS LCDREFbits absolute 0x5C4;

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
sfr volatile typeLCDPSBITS LCDPSbits absolute 0x5C6;

typedef struct tagLCDDATA0BITS {
  union {
    struct {
      unsigned S00C0:1;
      unsigned S01C0:1;
      unsigned S02C0:1;
      unsigned S03C0:1;
      unsigned S04C0:1;
      unsigned S05C0:1;
      unsigned S06C0:1;
      unsigned S07C0:1;
      unsigned S08C0:1;
      unsigned S09C0:1;
      unsigned S10C0:1;
      unsigned S11C0:1;
      unsigned S12C0:1;
      unsigned S13C0:1;
      unsigned S14C0:1;
      unsigned S15C0:1;
    };
  };
} typeLCDDATA0BITS;
sfr volatile typeLCDDATA0BITS LCDDATA0bits absolute 0x5C8;

typedef struct tagLCDDATA1BITS {
  union {
    struct {
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
      unsigned S28C0:1;
      unsigned S29C0:1;
      unsigned S30C0:1;
      unsigned S31C0:1;
    };
  };
} typeLCDDATA1BITS;
sfr volatile typeLCDDATA1BITS LCDDATA1bits absolute 0x5CA;

typedef struct tagLCDDATA2BITS {
  union {
    struct {
      unsigned S32C0:1;
      unsigned S33C0:1;
      unsigned S34C0:1;
      unsigned S35C0:1;
      unsigned S36C0:1;
      unsigned S37C0:1;
      unsigned S38C0:1;
      unsigned S39C0:1;
      unsigned S40C0:1;
      unsigned S41C0:1;
      unsigned S42C0:1;
      unsigned S43C0:1;
      unsigned S44C0:1;
      unsigned S45C0:1;
      unsigned S46C0:1;
      unsigned S47C0:1;
    };
  };
} typeLCDDATA2BITS;
sfr volatile typeLCDDATA2BITS LCDDATA2bits absolute 0x5CC;

typedef struct tagLCDDATA3BITS {
  union {
    struct {
      unsigned S48C0:1;
      unsigned S49C0:1;
      unsigned S50C0:1;
      unsigned S51C0:1;
      unsigned S52C0:1;
      unsigned S53C0:1;
      unsigned S54C0:1;
      unsigned S55C0:1;
      unsigned S56C0:1;
      unsigned S57C0:1;
      unsigned S58C0:1;
      unsigned S59C0:1;
      unsigned S60C0:1;
      unsigned S61C0:1;
      unsigned S62C0:1;
      unsigned S63C0:1;
    };
  };
} typeLCDDATA3BITS;
sfr volatile typeLCDDATA3BITS LCDDATA3bits absolute 0x5CE;

typedef struct tagLCDDATA4BITS {
  union {
    struct {
      unsigned S00C1:1;
      unsigned S01C1:1;
      unsigned S02C1:1;
      unsigned S03C1:1;
      unsigned S04C1:1;
      unsigned S05C1:1;
      unsigned S06C1:1;
      unsigned S07C1:1;
      unsigned S08C1:1;
      unsigned S09C1:1;
      unsigned S10C1:1;
      unsigned S11C1:1;
      unsigned S12C1:1;
      unsigned S13C1:1;
      unsigned S14C1:1;
      unsigned S15C1:1;
    };
  };
} typeLCDDATA4BITS;
sfr volatile typeLCDDATA4BITS LCDDATA4bits absolute 0x5D0;

typedef struct tagLCDDATA5BITS {
  union {
    struct {
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
      unsigned S28C1:1;
      unsigned S29C1:1;
      unsigned S30C1:1;
      unsigned S31C1:1;
    };
  };
} typeLCDDATA5BITS;
sfr volatile typeLCDDATA5BITS LCDDATA5bits absolute 0x5D2;

typedef struct tagLCDDATA6BITS {
  union {
    struct {
      unsigned S32C1:1;
      unsigned S33C1:1;
      unsigned S34C1:1;
      unsigned S35C1:1;
      unsigned S36C1:1;
      unsigned S37C1:1;
      unsigned S38C1:1;
      unsigned S39C1:1;
      unsigned S40C1:1;
      unsigned S41C1:1;
      unsigned S42C1:1;
      unsigned S43C1:1;
      unsigned S44C1:1;
      unsigned S45C1:1;
      unsigned S46C1:1;
      unsigned S47C1:1;
    };
  };
} typeLCDDATA6BITS;
sfr volatile typeLCDDATA6BITS LCDDATA6bits absolute 0x5D4;

typedef struct tagLCDDATA7BITS {
  union {
    struct {
      unsigned S48C1:1;
      unsigned S49C1:1;
      unsigned S50C1:1;
      unsigned S51C1:1;
      unsigned S52C1:1;
      unsigned S53C1:1;
      unsigned S54C1:1;
      unsigned S55C1:1;
      unsigned S56C1:1;
      unsigned S57C1:1;
      unsigned S58C1:1;
      unsigned S59C1:1;
      unsigned S60C1:1;
      unsigned S61C1:1;
      unsigned S62C1:1;
      unsigned S63C1:1;
    };
  };
} typeLCDDATA7BITS;
sfr volatile typeLCDDATA7BITS LCDDATA7bits absolute 0x5D6;

typedef struct tagLCDDATA8BITS {
  union {
    struct {
      unsigned S00C2:1;
      unsigned S01C2:1;
      unsigned S02C2:1;
      unsigned S03C2:1;
      unsigned S04C2:1;
      unsigned S05C2:1;
      unsigned S06C2:1;
      unsigned S07C2:1;
      unsigned S08C2:1;
      unsigned S09C2:1;
      unsigned S10C2:1;
      unsigned S11C2:1;
      unsigned S12C2:1;
      unsigned S13C2:1;
      unsigned S14C2:1;
      unsigned S15C2:1;
    };
  };
} typeLCDDATA8BITS;
sfr volatile typeLCDDATA8BITS LCDDATA8bits absolute 0x5D8;

typedef struct tagLCDDATA9BITS {
  union {
    struct {
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
      unsigned S28C2:1;
      unsigned S29C2:1;
      unsigned S30C2:1;
      unsigned S31C2:1;
    };
  };
} typeLCDDATA9BITS;
sfr volatile typeLCDDATA9BITS LCDDATA9bits absolute 0x5DA;

typedef struct tagLCDDATA10BITS {
  union {
    struct {
      unsigned S32C2:1;
      unsigned S33C2:1;
      unsigned S34C2:1;
      unsigned S35C2:1;
      unsigned S36C2:1;
      unsigned S37C2:1;
      unsigned S38C2:1;
      unsigned S39C2:1;
      unsigned S40C2:1;
      unsigned S41C2:1;
      unsigned S42C2:1;
      unsigned S43C2:1;
      unsigned S44C2:1;
      unsigned S45C2:1;
      unsigned S46C2:1;
      unsigned S47C2:1;
    };
  };
} typeLCDDATA10BITS;
sfr volatile typeLCDDATA10BITS LCDDATA10bits absolute 0x5DC;

typedef struct tagLCDDATA11BITS {
  union {
    struct {
      unsigned S48C2:1;
      unsigned S49C2:1;
      unsigned S50C2:1;
      unsigned S51C2:1;
      unsigned S52C2:1;
      unsigned S53C2:1;
      unsigned S54C2:1;
      unsigned S55C2:1;
      unsigned S56C2:1;
      unsigned S57C2:1;
      unsigned S58C2:1;
      unsigned S59C2:1;
      unsigned S60C2:1;
      unsigned S61C2:1;
      unsigned S62C2:1;
      unsigned S63C2:1;
    };
  };
} typeLCDDATA11BITS;
sfr volatile typeLCDDATA11BITS LCDDATA11bits absolute 0x5DE;

typedef struct tagLCDDATA12BITS {
  union {
    struct {
      unsigned S00C3:1;
      unsigned S01C3:1;
      unsigned S02C3:1;
      unsigned S03C3:1;
      unsigned S04C3:1;
      unsigned S05C3:1;
      unsigned S06C3:1;
      unsigned S07C3:1;
      unsigned S08C3:1;
      unsigned S09C3:1;
      unsigned S10C3:1;
      unsigned S11C3:1;
      unsigned S12C3:1;
      unsigned S13C3:1;
      unsigned S14C3:1;
      unsigned S15C3:1;
    };
  };
} typeLCDDATA12BITS;
sfr volatile typeLCDDATA12BITS LCDDATA12bits absolute 0x5E0;

typedef struct tagLCDDATA13BITS {
  union {
    struct {
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
      unsigned S28C3:1;
      unsigned S29C3:1;
      unsigned S30C3:1;
      unsigned S31C3:1;
    };
  };
} typeLCDDATA13BITS;
sfr volatile typeLCDDATA13BITS LCDDATA13bits absolute 0x5E2;

typedef struct tagLCDDATA14BITS {
  union {
    struct {
      unsigned S32C3:1;
      unsigned S33C3:1;
      unsigned S34C3:1;
      unsigned S35C3:1;
      unsigned S36C3:1;
      unsigned S37C3:1;
      unsigned S38C3:1;
      unsigned S39C3:1;
      unsigned S40C3:1;
      unsigned S41C3:1;
      unsigned S42C3:1;
      unsigned S43C3:1;
      unsigned S44C3:1;
      unsigned S45C3:1;
      unsigned S46C3:1;
      unsigned S47C3:1;
    };
  };
} typeLCDDATA14BITS;
sfr volatile typeLCDDATA14BITS LCDDATA14bits absolute 0x5E4;

typedef struct tagLCDDATA15BITS {
  union {
    struct {
      unsigned S48C3:1;
      unsigned S49C3:1;
      unsigned S50C3:1;
      unsigned S51C3:1;
      unsigned S52C3:1;
      unsigned S53C3:1;
      unsigned S54C3:1;
      unsigned S55C3:1;
      unsigned S56C3:1;
      unsigned S57C3:1;
      unsigned S58C3:1;
      unsigned S59C3:1;
      unsigned S60C3:1;
      unsigned S61C3:1;
      unsigned S62C3:1;
      unsigned S63C3:1;
    };
  };
} typeLCDDATA15BITS;
sfr volatile typeLCDDATA15BITS LCDDATA15bits absolute 0x5E6;

typedef struct tagLCDDATA16BITS {
  union {
    struct {
      unsigned S00C4:1;
      unsigned S01C4:1;
      unsigned S02C4:1;
      unsigned S03C4:1;
      unsigned S04C4:1;
      unsigned S05C4:1;
      unsigned S06C4:1;
      unsigned S07C4:1;
      unsigned S08C4:1;
      unsigned S09C4:1;
      unsigned S10C4:1;
      unsigned S11C4:1;
      unsigned S12C4:1;
      unsigned S13C4:1;
      unsigned S14C4:1;
      unsigned S15C4:1;
    };
  };
} typeLCDDATA16BITS;
sfr volatile typeLCDDATA16BITS LCDDATA16bits absolute 0x5E8;

typedef struct tagLCDDATA17BITS {
  union {
    struct {
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
      unsigned S28C4:1;
      unsigned S29C4:1;
      unsigned S30C4:1;
      unsigned S31C4:1;
    };
  };
} typeLCDDATA17BITS;
sfr volatile typeLCDDATA17BITS LCDDATA17bits absolute 0x5EA;

typedef struct tagLCDDATA18BITS {
  union {
    struct {
      unsigned S32C4:1;
      unsigned S33C4:1;
      unsigned S34C4:1;
      unsigned S35C4:1;
      unsigned S36C4:1;
      unsigned S37C4:1;
      unsigned S38C4:1;
      unsigned S39C4:1;
      unsigned S40C4:1;
      unsigned S41C4:1;
      unsigned S42C4:1;
      unsigned S43C4:1;
      unsigned S44C4:1;
      unsigned S45C4:1;
      unsigned S46C4:1;
      unsigned S47C4:1;
    };
  };
} typeLCDDATA18BITS;
sfr volatile typeLCDDATA18BITS LCDDATA18bits absolute 0x5EC;

typedef struct tagLCDDATA19BITS {
  union {
    struct {
      unsigned S48C4:1;
      unsigned S49C4:1;
      unsigned S50C4:1;
      unsigned S51C4:1;
      unsigned S52C4:1;
      unsigned S53C4:1;
      unsigned S54C4:1;
      unsigned S55C4:1;
      unsigned S56C4:1;
      unsigned S57C4:1;
      unsigned S58C4:1;
      unsigned S59C4:1;
      unsigned S60C4:1;
      unsigned S61C4:1;
      unsigned S62C4:1;
      unsigned S63C4:1;
    };
  };
} typeLCDDATA19BITS;
sfr volatile typeLCDDATA19BITS LCDDATA19bits absolute 0x5EE;

typedef struct tagLCDDATA20BITS {
  union {
    struct {
      unsigned S00C5:1;
      unsigned S01C5:1;
      unsigned S02C5:1;
      unsigned S03C5:1;
      unsigned S04C5:1;
      unsigned S05C5:1;
      unsigned S06C5:1;
      unsigned S07C5:1;
      unsigned S08C5:1;
      unsigned S09C5:1;
      unsigned S10C5:1;
      unsigned S11C5:1;
      unsigned S12C5:1;
      unsigned S13C5:1;
      unsigned S14C5:1;
      unsigned S15C5:1;
    };
  };
} typeLCDDATA20BITS;
sfr volatile typeLCDDATA20BITS LCDDATA20bits absolute 0x5F0;

typedef struct tagLCDDATA21BITS {
  union {
    struct {
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
      unsigned S28C5:1;
      unsigned S29C5:1;
      unsigned S30C5:1;
      unsigned S31C5:1;
    };
  };
} typeLCDDATA21BITS;
sfr volatile typeLCDDATA21BITS LCDDATA21bits absolute 0x5F2;

typedef struct tagLCDDATA22BITS {
  union {
    struct {
      unsigned S32C5:1;
      unsigned S33C5:1;
      unsigned S34C5:1;
      unsigned S35C5:1;
      unsigned S36C5:1;
      unsigned S37C5:1;
      unsigned S38C5:1;
      unsigned S39C5:1;
      unsigned S40C5:1;
      unsigned S41C5:1;
      unsigned S42C5:1;
      unsigned S43C5:1;
      unsigned S44C5:1;
      unsigned S45C5:1;
      unsigned S46C5:1;
      unsigned S47C5:1;
    };
  };
} typeLCDDATA22BITS;
sfr volatile typeLCDDATA22BITS LCDDATA22bits absolute 0x5F4;

typedef struct tagLCDDATA23BITS {
  union {
    struct {
      unsigned S48C5:1;
      unsigned S49C5:1;
      unsigned S50C5:1;
      unsigned S51C5:1;
      unsigned S52C5:1;
      unsigned S53C5:1;
      unsigned S54C5:1;
      unsigned S55C5:1;
      unsigned S56C5:1;
      unsigned S57C5:1;
      unsigned S58C5:1;
      unsigned S59C5:1;
      unsigned S60C5:1;
      unsigned S61C5:1;
      unsigned S62C5:1;
      unsigned S63C5:1;
    };
  };
} typeLCDDATA23BITS;
sfr volatile typeLCDDATA23BITS LCDDATA23bits absolute 0x5F6;

typedef struct tagLCDDATA24BITS {
  union {
    struct {
      unsigned S00C6:1;
      unsigned S01C6:1;
      unsigned S02C6:1;
      unsigned S03C6:1;
      unsigned S04C6:1;
      unsigned S05C6:1;
      unsigned S06C6:1;
      unsigned S07C6:1;
      unsigned S08C6:1;
      unsigned S09C6:1;
      unsigned S10C6:1;
      unsigned S11C6:1;
      unsigned S12C6:1;
      unsigned S13C6:1;
      unsigned S14C6:1;
      unsigned S15C6:1;
    };
  };
} typeLCDDATA24BITS;
sfr volatile typeLCDDATA24BITS LCDDATA24bits absolute 0x5F8;

typedef struct tagLCDDATA25BITS {
  union {
    struct {
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
      unsigned S28C6:1;
      unsigned S29C6:1;
      unsigned S30C6:1;
      unsigned S31C6:1;
    };
  };
} typeLCDDATA25BITS;
sfr volatile typeLCDDATA25BITS LCDDATA25bits absolute 0x5FA;

typedef struct tagLCDDATA26BITS {
  union {
    struct {
      unsigned S32C6:1;
      unsigned S33C6:1;
      unsigned S34C6:1;
      unsigned S35C6:1;
      unsigned S36C6:1;
      unsigned S37C6:1;
      unsigned S38C6:1;
      unsigned S39C6:1;
      unsigned S40C6:1;
      unsigned S41C6:1;
      unsigned S42C6:1;
      unsigned S43C6:1;
      unsigned S44C6:1;
      unsigned S45C6:1;
      unsigned S46C6:1;
      unsigned S47C6:1;
    };
  };
} typeLCDDATA26BITS;
sfr volatile typeLCDDATA26BITS LCDDATA26bits absolute 0x5FC;

typedef struct tagLCDDATA27BITS {
  union {
    struct {
      unsigned S48C6:1;
      unsigned S49C6:1;
      unsigned S50C6:1;
      unsigned S51C6:1;
      unsigned S52C6:1;
      unsigned S53C6:1;
      unsigned S54C6:1;
      unsigned S55C6:1;
      unsigned S56C6:1;
      unsigned S57C6:1;
      unsigned S58C6:1;
      unsigned S59C6:1;
      unsigned S60C6:1;
      unsigned S61C6:1;
      unsigned S62C6:1;
      unsigned S63C6:1;
    };
  };
} typeLCDDATA27BITS;
sfr volatile typeLCDDATA27BITS LCDDATA27bits absolute 0x5FE;

typedef struct tagLCDDATA28BITS {
  union {
    struct {
      unsigned S00C7:1;
      unsigned S01C7:1;
      unsigned S02C7:1;
      unsigned S03C7:1;
      unsigned S04C7:1;
      unsigned S05C7:1;
      unsigned S06C7:1;
      unsigned S07C7:1;
      unsigned S08C7:1;
      unsigned S09C7:1;
      unsigned S10C7:1;
      unsigned S11C7:1;
      unsigned S12C7:1;
      unsigned S13C7:1;
      unsigned S14C7:1;
      unsigned S15C7:1;
    };
  };
} typeLCDDATA28BITS;
sfr volatile typeLCDDATA28BITS LCDDATA28bits absolute 0x600;

typedef struct tagLCDDATA29BITS {
  union {
    struct {
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
      unsigned S28C7:1;
      unsigned S29C7:1;
      unsigned S30C7:1;
      unsigned S31C7:1;
    };
  };
} typeLCDDATA29BITS;
sfr volatile typeLCDDATA29BITS LCDDATA29bits absolute 0x602;

typedef struct tagLCDDATA30BITS {
  union {
    struct {
      unsigned S32C7:1;
      unsigned S33C7:1;
      unsigned S34C7:1;
      unsigned S35C7:1;
      unsigned S36C7:1;
      unsigned S37C7:1;
      unsigned S38C7:1;
      unsigned S39C7:1;
      unsigned S40C7:1;
      unsigned S41C7:1;
      unsigned S42C7:1;
      unsigned S43C7:1;
      unsigned S44C7:1;
      unsigned S45C7:1;
      unsigned S46C7:1;
      unsigned S47C7:1;
    };
  };
} typeLCDDATA30BITS;
sfr volatile typeLCDDATA30BITS LCDDATA30bits absolute 0x604;

typedef struct tagLCDDATA31BITS {
  union {
    struct {
      unsigned S48C7:1;
      unsigned S49C7:1;
      unsigned S50C7:1;
      unsigned S51C7:1;
      unsigned S52C7:1;
      unsigned S53C7:1;
      unsigned S54C7:1;
      unsigned S55C7:1;
      unsigned S56C7:1;
      unsigned S57C7:1;
      unsigned S58C7:1;
      unsigned S59C7:1;
      unsigned S60C7:1;
      unsigned S61C7:1;
      unsigned S62C7:1;
      unsigned S63C7:1;
    };
  };
} typeLCDDATA31BITS;
sfr volatile typeLCDDATA31BITS LCDDATA31bits absolute 0x606;

typedef struct tagLCDSE0BITS {
  union {
    struct {
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
    };
  };
} typeLCDSE0BITS;
sfr volatile typeLCDSE0BITS LCDSE0bits absolute 0x608;

typedef struct tagLCDSE1BITS {
  union {
    struct {
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
      unsigned SE28:1;
      unsigned SE29:1;
      unsigned SE30:1;
      unsigned SE31:1;
    };
  };
} typeLCDSE1BITS;
sfr volatile typeLCDSE1BITS LCDSE1bits absolute 0x60A;

typedef struct tagLCDSE2BITS {
  union {
    struct {
      unsigned SE32:1;
      unsigned SE33:1;
      unsigned SE34:1;
      unsigned SE35:1;
      unsigned SE36:1;
      unsigned SE37:1;
      unsigned SE38:1;
      unsigned SE39:1;
      unsigned SE40:1;
      unsigned SE41:1;
      unsigned SE42:1;
      unsigned SE43:1;
      unsigned SE44:1;
      unsigned SE45:1;
      unsigned SE46:1;
      unsigned SE47:1;
    };
  };
} typeLCDSE2BITS;
sfr volatile typeLCDSE2BITS LCDSE2bits absolute 0x60C;

typedef struct tagLCDSE3BITS {
  union {
    struct {
      unsigned SE48:1;
      unsigned SE49:1;
      unsigned SE50:1;
      unsigned SE51:1;
      unsigned SE52:1;
      unsigned SE53:1;
      unsigned SE54:1;
      unsigned SE55:1;
      unsigned SE56:1;
      unsigned SE57:1;
      unsigned SE58:1;
      unsigned SE59:1;
      unsigned SE60:1;
      unsigned SE61:1;
      unsigned SE62:1;
      unsigned SE63:1;
    };
  };
} typeLCDSE3BITS;
sfr volatile typeLCDSE3BITS LCDSE3bits absolute 0x60E;

typedef struct tagLCDREGBITS {
  union {
    struct {
      unsigned CLKSEL:2;
      unsigned :13;
      unsigned CPEN:1;
    };
  };
} typeLCDREGBITS;
sfr volatile typeLCDREGBITS LCDREGbits absolute 0x610;

typedef struct tagPADCONBITS {
  union {
    struct {
      unsigned PMPTTL:1;
      unsigned :14;
      unsigned IOCON:1;
    };
  };
} typePADCONBITS;
sfr volatile typePADCONBITS PADCONbits absolute 0x65A;

typedef struct tagIOCSTATBITS {
  union {
    struct {
      unsigned IOCPAF:1;
      unsigned IOCPBF:1;
      unsigned IOCPCF:1;
      unsigned IOCPDF:1;
      unsigned IOCPEF:1;
      unsigned IOCPFF:1;
      unsigned IOCPGF:1;
      unsigned IOCPHF:1;
      unsigned IOCPJF:1;
    };
  };
} typeIOCSTATBITS;
sfr volatile typeIOCSTATBITS IOCSTATbits absolute 0x65C;

typedef struct tagTRISABITS {
  union {
    struct {
      unsigned TRISA0:1;
      unsigned TRISA1:1;
      unsigned TRISA2:1;
      unsigned TRISA3:1;
      unsigned TRISA4:1;
      unsigned TRISA5:1;
      unsigned TRISA6:1;
      unsigned TRISA7:1;
      unsigned :1;
      unsigned TRISA9:1;
      unsigned TRISA10:1;
      unsigned :3;
      unsigned TRISA14:1;
      unsigned TRISA15:1;
    };
  };
} typeTRISABITS;
sfr volatile typeTRISABITS TRISAbits absolute 0x65E;

typedef struct tagPORTABITS {
  union {
    struct {
      unsigned RA0:1;
      unsigned RA1:1;
      unsigned RA2:1;
      unsigned RA3:1;
      unsigned RA4:1;
      unsigned RA5:1;
      unsigned RA6:1;
      unsigned RA7:1;
      unsigned :1;
      unsigned RA9:1;
      unsigned RA10:1;
      unsigned :3;
      unsigned RA14:1;
      unsigned RA15:1;
    };
  };
} typePORTABITS;
sfr volatile typePORTABITS PORTAbits absolute 0x660;

typedef struct tagLATABITS {
  union {
    struct {
      unsigned LATA0:1;
      unsigned LATA1:1;
      unsigned LATA2:1;
      unsigned LATA3:1;
      unsigned LATA4:1;
      unsigned LATA5:1;
      unsigned LATA6:1;
      unsigned LATA7:1;
      unsigned :1;
      unsigned LATA9:1;
      unsigned LATA10:1;
      unsigned :3;
      unsigned LATA14:1;
      unsigned LATA15:1;
    };
  };
} typeLATABITS;
sfr volatile typeLATABITS LATAbits absolute 0x662;

typedef struct tagODCABITS {
  union {
    struct {
      unsigned ODCA0:1;
      unsigned ODCA1:1;
      unsigned ODCA2:1;
      unsigned ODCA3:1;
      unsigned ODCA4:1;
      unsigned ODCA5:1;
      unsigned ODCA6:1;
      unsigned ODCA7:1;
      unsigned :1;
      unsigned ODCA9:1;
      unsigned ODCA10:1;
      unsigned :3;
      unsigned ODCA14:1;
      unsigned ODCA15:1;
    };
  };
} typeODCABITS;
sfr volatile typeODCABITS ODCAbits absolute 0x664;

typedef struct tagANSABITS {
  union {
    struct {
      unsigned ANSA0:1;
      unsigned :1;
      unsigned ANSA2:1;
      unsigned ANSA3:1;
      unsigned :1;
      unsigned ANSA5:1;
      unsigned ANSA6:1;
      unsigned ANSA7:1;
      unsigned :1;
      unsigned ANSA9:1;
      unsigned ANSA10:1;
      unsigned :3;
      unsigned ANSA14:1;
      unsigned ANSA15:1;
    };
  };
} typeANSABITS;
sfr volatile typeANSABITS ANSAbits absolute 0x666;

typedef struct tagIOCPABITS {
  union {
    struct {
      unsigned IOCPA0:1;
      unsigned IOCPA1:1;
      unsigned IOCPA2:1;
      unsigned IOCPA3:1;
      unsigned IOCPA4:1;
      unsigned IOCPA5:1;
      unsigned IOCPA6:1;
      unsigned IOCPA7:1;
      unsigned :1;
      unsigned IOCPA9:1;
      unsigned IOCPA10:1;
      unsigned :3;
      unsigned IOCPA14:1;
      unsigned IOCPA15:1;
    };
  };
} typeIOCPABITS;
sfr volatile typeIOCPABITS IOCPAbits absolute 0x668;

typedef struct tagIOCNABITS {
  union {
    struct {
      unsigned IOCNA0:1;
      unsigned IOCNA1:1;
      unsigned IOCNA2:1;
      unsigned IOCNA3:1;
      unsigned IOCNA4:1;
      unsigned IOCNA5:1;
      unsigned IOCNA6:1;
      unsigned IOCNA7:1;
      unsigned :1;
      unsigned IOCNA9:1;
      unsigned IOCNA10:1;
      unsigned :3;
      unsigned IOCNA14:1;
      unsigned IOCNA15:1;
    };
  };
} typeIOCNABITS;
sfr volatile typeIOCNABITS IOCNAbits absolute 0x66A;

typedef struct tagIOCFABITS {
  union {
    struct {
      unsigned IOCFA0:1;
      unsigned IOCFA1:1;
      unsigned IOCFA2:1;
      unsigned IOCFA3:1;
      unsigned IOCFA4:1;
      unsigned IOCFA5:1;
      unsigned IOCFA6:1;
      unsigned IOCFA7:1;
      unsigned :1;
      unsigned IOCFA9:1;
      unsigned IOCFA10:1;
      unsigned :3;
      unsigned IOCFA14:1;
      unsigned IOCFA15:1;
    };
  };
} typeIOCFABITS;
sfr volatile typeIOCFABITS IOCFAbits absolute 0x66C;

typedef struct tagIOCPUABITS {
  union {
    struct {
      unsigned IOCPA0:1;
      unsigned IOCPA1:1;
      unsigned IOCPA2:1;
      unsigned IOCPA3:1;
      unsigned IOCPA4:1;
      unsigned IOCPA5:1;
      unsigned IOCPA6:1;
      unsigned IOCPA7:1;
      unsigned :1;
      unsigned IOCPA9:1;
      unsigned IOCPA10:1;
      unsigned :3;
      unsigned IOCPA14:1;
      unsigned IOCPA15:1;
    };
  };
} typeIOCPUABITS;
sfr volatile typeIOCPUABITS IOCPUAbits absolute 0x66E;

typedef struct tagIOCPDABITS {
  union {
    struct {
      unsigned IOCPDA0:1;
      unsigned IOCPDA1:1;
      unsigned IOCPDA2:1;
      unsigned IOCPDA3:1;
      unsigned IOCPDA4:1;
      unsigned IOCPDA5:1;
      unsigned IOCPDA6:1;
      unsigned IOCPDA7:1;
      unsigned :1;
      unsigned IOCPDA9:1;
      unsigned IOCPDA10:1;
      unsigned :3;
      unsigned IOCPDA14:1;
      unsigned IOCPDA15:1;
    };
  };
} typeIOCPDABITS;
sfr volatile typeIOCPDABITS IOCPDAbits absolute 0x670;

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
sfr volatile typeTRISBBITS TRISBbits absolute 0x672;

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
sfr volatile typePORTBBITS PORTBbits absolute 0x674;

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
sfr volatile typeLATBBITS LATBbits absolute 0x676;

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
sfr volatile typeODCBBITS ODCBbits absolute 0x678;

typedef struct tagANSBBITS {
  union {
    struct {
      unsigned ANSB0:1;
      unsigned ANSB1:1;
      unsigned ANSB2:1;
      unsigned ANSB3:1;
      unsigned ANSB4:1;
      unsigned ANSB5:1;
      unsigned ANSB6:1;
      unsigned ANSB7:1;
      unsigned ANSB8:1;
      unsigned ANSB9:1;
      unsigned ANSB10:1;
      unsigned ANSB11:1;
      unsigned ANSB12:1;
      unsigned ANSB13:1;
      unsigned ANSB14:1;
      unsigned ANSB15:1;
    };
  };
} typeANSBBITS;
sfr volatile typeANSBBITS ANSBbits absolute 0x67A;

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
sfr volatile typeIOCPBBITS IOCPBbits absolute 0x67C;

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
sfr volatile typeIOCNBBITS IOCNBbits absolute 0x67E;

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
sfr volatile typeIOCFBBITS IOCFBbits absolute 0x680;

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
  };
} typeIOCPUBBITS;
sfr volatile typeIOCPUBBITS IOCPUBbits absolute 0x682;

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
  };
} typeIOCPDBBITS;
sfr volatile typeIOCPDBBITS IOCPDBbits absolute 0x684;

typedef struct tagTRISCBITS {
  union {
    struct {
      unsigned :1;
      unsigned TRISC1:1;
      unsigned TRISC2:1;
      unsigned TRISC3:1;
      unsigned TRISC4:1;
      unsigned :7;
      unsigned TRISC12:1;
      unsigned TRISC13:1;
      unsigned TRISC14:1;
      unsigned TRISC15:1;
    };
  };
} typeTRISCBITS;
sfr volatile typeTRISCBITS TRISCbits absolute 0x686;

typedef struct tagPORTCBITS {
  union {
    struct {
      unsigned :1;
      unsigned RC1:1;
      unsigned RC2:1;
      unsigned RC3:1;
      unsigned RC4:1;
      unsigned :7;
      unsigned RC12:1;
      unsigned RC13:1;
      unsigned RC14:1;
      unsigned RC15:1;
    };
  };
} typePORTCBITS;
sfr volatile typePORTCBITS PORTCbits absolute 0x688;

typedef struct tagLATCBITS {
  union {
    struct {
      unsigned :1;
      unsigned LATC1:1;
      unsigned LATC2:1;
      unsigned LATC3:1;
      unsigned LATC4:1;
      unsigned :7;
      unsigned LATC12:1;
      unsigned :2;
      unsigned LATC15:1;
    };
  };
} typeLATCBITS;
sfr volatile typeLATCBITS LATCbits absolute 0x68A;

typedef struct tagODCCBITS {
  union {
    struct {
      unsigned :1;
      unsigned ODCC1:1;
      unsigned ODCC2:1;
      unsigned ODCC3:1;
      unsigned ODCC4:1;
      unsigned :7;
      unsigned ODCC12:1;
      unsigned :2;
      unsigned ODCC15:1;
    };
  };
} typeODCCBITS;
sfr volatile typeODCCBITS ODCCbits absolute 0x68C;

typedef struct tagANSCBITS {
  union {
    struct {
      unsigned :1;
      unsigned ANSC1:1;
      unsigned ANSC2:1;
      unsigned ANSC3:1;
      unsigned ANSC4:1;
    };
  };
} typeANSCBITS;
sfr volatile typeANSCBITS ANSCbits absolute 0x68E;

typedef struct tagIOCPCBITS {
  union {
    struct {
      unsigned :1;
      unsigned IOCPC1:1;
      unsigned IOCPC2:1;
      unsigned IOCPC3:1;
      unsigned IOCPC4:1;
      unsigned :7;
      unsigned IOCPC12:1;
      unsigned IOCPC13:1;
      unsigned IOCPC14:1;
      unsigned IOCPC15:1;
    };
  };
} typeIOCPCBITS;
sfr volatile typeIOCPCBITS IOCPCbits absolute 0x690;

typedef struct tagIOCNCBITS {
  union {
    struct {
      unsigned :1;
      unsigned IOCNC1:1;
      unsigned IOCNC2:1;
      unsigned IOCNC3:1;
      unsigned IOCNC4:1;
      unsigned :7;
      unsigned IOCNC12:1;
      unsigned IOCNC13:1;
      unsigned IOCNC14:1;
      unsigned IOCNC15:1;
    };
  };
} typeIOCNCBITS;
sfr volatile typeIOCNCBITS IOCNCbits absolute 0x692;

typedef struct tagIOCFCBITS {
  union {
    struct {
      unsigned :1;
      unsigned IOCFC1:1;
      unsigned IOCFC2:1;
      unsigned IOCFC3:1;
      unsigned IOCFC4:1;
      unsigned :7;
      unsigned IOCFC12:1;
      unsigned IOCFC13:1;
      unsigned IOCFC14:1;
      unsigned IOCFC15:1;
    };
  };
} typeIOCFCBITS;
sfr volatile typeIOCFCBITS IOCFCbits absolute 0x694;

typedef struct tagIOCPUCBITS {
  union {
    struct {
      unsigned :1;
      unsigned IOCPC1:1;
      unsigned IOCPC2:1;
      unsigned IOCPC3:1;
      unsigned IOCPC4:1;
      unsigned :7;
      unsigned IOCPC12:1;
      unsigned :2;
      unsigned IOCPC15:1;
    };
  };
} typeIOCPUCBITS;
sfr volatile typeIOCPUCBITS IOCPUCbits absolute 0x696;

typedef struct tagIOCPDCBITS {
  union {
    struct {
      unsigned :1;
      unsigned IOCPDC1:1;
      unsigned IOCPDC2:1;
      unsigned IOCPDC3:1;
      unsigned IOCPDC4:1;
      unsigned :7;
      unsigned IOCPDC12:1;
      unsigned :2;
      unsigned IOCPDC15:1;
    };
  };
} typeIOCPDCBITS;
sfr volatile typeIOCPDCBITS IOCPDCbits absolute 0x698;

typedef struct tagTRISDBITS {
  union {
    struct {
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
    };
  };
} typeTRISDBITS;
sfr volatile typeTRISDBITS TRISDbits absolute 0x69A;

typedef struct tagPORTDBITS {
  union {
    struct {
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
    };
  };
} typePORTDBITS;
sfr volatile typePORTDBITS PORTDbits absolute 0x69C;

typedef struct tagLATDBITS {
  union {
    struct {
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
    };
  };
} typeLATDBITS;
sfr volatile typeLATDBITS LATDbits absolute 0x69E;

typedef struct tagODCDBITS {
  union {
    struct {
      unsigned ODCD0:1;
      unsigned ODCD1:1;
      unsigned ODCD2:1;
      unsigned ODCD3:1;
      unsigned ODCD4:1;
      unsigned ODCD5:1;
      unsigned ODCD6:1;
      unsigned ODCD7:1;
      unsigned ODCD8:1;
      unsigned ODCD9:1;
      unsigned ODCD10:1;
      unsigned ODCD11:1;
      unsigned ODCD12:1;
      unsigned ODCD13:1;
      unsigned ODCD14:1;
      unsigned ODCD15:1;
    };
  };
} typeODCDBITS;
sfr volatile typeODCDBITS ODCDbits absolute 0x6A0;

typedef struct tagANSDBITS {
  union {
    struct {
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
    };
  };
} typeANSDBITS;
sfr volatile typeANSDBITS ANSDbits absolute 0x6A2;

typedef struct tagIOCPDBITS {
  union {
    struct {
      unsigned IOCPD0:1;
      unsigned IOCPD1:1;
      unsigned IOCPD2:1;
      unsigned IOCPD3:1;
      unsigned IOCPD4:1;
      unsigned IOCPD5:1;
      unsigned IOCPD6:1;
      unsigned IOCPD7:1;
      unsigned IOCPD8:1;
      unsigned IOCPD9:1;
      unsigned IOCPD10:1;
      unsigned IOCPD11:1;
      unsigned IOCPD12:1;
      unsigned IOCPD13:1;
      unsigned IOCPD14:1;
      unsigned IOCPD15:1;
    };
  };
} typeIOCPDBITS;
sfr volatile typeIOCPDBITS IOCPDbits absolute 0x6A4;

typedef struct tagIOCNDBITS {
  union {
    struct {
      unsigned IOCND0:1;
      unsigned IOCND1:1;
      unsigned IOCND2:1;
      unsigned IOCND3:1;
      unsigned IOCND4:1;
      unsigned IOCND5:1;
      unsigned IOCND6:1;
      unsigned IOCND7:1;
      unsigned IOCND8:1;
      unsigned IOCND9:1;
      unsigned IOCND10:1;
      unsigned IOCND11:1;
      unsigned IOCND12:1;
      unsigned IOCND13:1;
      unsigned IOCND14:1;
      unsigned IOCND15:1;
    };
  };
} typeIOCNDBITS;
sfr volatile typeIOCNDBITS IOCNDbits absolute 0x6A6;

typedef struct tagIOCFDBITS {
  union {
    struct {
      unsigned IOCFD0:1;
      unsigned IOCFD1:1;
      unsigned IOCFD2:1;
      unsigned IOCFD3:1;
      unsigned IOCFD4:1;
      unsigned IOCFD5:1;
      unsigned IOCFD6:1;
      unsigned IOCFD7:1;
      unsigned IOCFD8:1;
      unsigned IOCFD9:1;
      unsigned IOCFD10:1;
      unsigned IOCFD11:1;
      unsigned IOCFD12:1;
      unsigned IOCFD13:1;
      unsigned IOCFD14:1;
      unsigned IOCFD15:1;
    };
  };
} typeIOCFDBITS;
sfr volatile typeIOCFDBITS IOCFDbits absolute 0x6A8;

typedef struct tagIOCPUDBITS {
  union {
    struct {
      unsigned IOCPD0:1;
      unsigned IOCPD1:1;
      unsigned IOCPD2:1;
      unsigned IOCPD3:1;
      unsigned IOCPD4:1;
      unsigned IOCPD5:1;
      unsigned IOCPD6:1;
      unsigned IOCPD7:1;
      unsigned IOCPD8:1;
      unsigned IOCPD9:1;
      unsigned IOCPD10:1;
      unsigned IOCPD11:1;
      unsigned IOCPD12:1;
      unsigned IOCPD13:1;
      unsigned IOCPD14:1;
      unsigned IOCPD15:1;
    };
  };
} typeIOCPUDBITS;
sfr volatile typeIOCPUDBITS IOCPUDbits absolute 0x6AA;

typedef struct tagIOCPDDBITS {
  union {
    struct {
      unsigned IOCPDD0:1;
      unsigned IOCPDD1:1;
      unsigned IOCPDD2:1;
      unsigned IOCPDD3:1;
      unsigned IOCPDD4:1;
      unsigned IOCPDD5:1;
      unsigned IOCPDD6:1;
      unsigned IOCPDD7:1;
      unsigned IOCPDD8:1;
      unsigned IOCPDD9:1;
      unsigned IOCPDD10:1;
      unsigned IOCPDD11:1;
      unsigned IOCPDD12:1;
      unsigned IOCPDD13:1;
      unsigned IOCPDD14:1;
      unsigned IOCPDD15:1;
    };
  };
} typeIOCPDDBITS;
sfr volatile typeIOCPDDBITS IOCPDDbits absolute 0x6AC;

typedef struct tagTRISEBITS {
  union {
    struct {
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
    };
  };
} typeTRISEBITS;
sfr volatile typeTRISEBITS TRISEbits absolute 0x6AE;

typedef struct tagPORTEBITS {
  union {
    struct {
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
    };
  };
} typePORTEBITS;
sfr volatile typePORTEBITS PORTEbits absolute 0x6B0;

typedef struct tagLATEBITS {
  union {
    struct {
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
    };
  };
} typeLATEBITS;
sfr volatile typeLATEBITS LATEbits absolute 0x6B2;

typedef struct tagODCEBITS {
  union {
    struct {
      unsigned ODCE0:1;
      unsigned ODCE1:1;
      unsigned ODCE2:1;
      unsigned ODCE3:1;
      unsigned ODCE4:1;
      unsigned ODCE5:1;
      unsigned ODCE6:1;
      unsigned ODCE7:1;
      unsigned ODCE8:1;
      unsigned ODCE9:1;
    };
  };
} typeODCEBITS;
sfr volatile typeODCEBITS ODCEbits absolute 0x6B4;

typedef struct tagANSEBITS {
  union {
    struct {
      unsigned ANSE0:1;
      unsigned ANSE1:1;
      unsigned ANSE2:1;
      unsigned ANSE3:1;
      unsigned ANSE4:1;
      unsigned ANSE5:1;
      unsigned ANSE6:1;
      unsigned ANSE7:1;
      unsigned ANSE8:1;
      unsigned ANSE9:1;
    };
  };
} typeANSEBITS;
sfr volatile typeANSEBITS ANSEbits absolute 0x6B6;

typedef struct tagIOCPEBITS {
  union {
    struct {
      unsigned IOCPE0:1;
      unsigned IOCPE1:1;
      unsigned IOCPE2:1;
      unsigned IOCPE3:1;
      unsigned IOCPE4:1;
      unsigned IOCPE5:1;
      unsigned IOCPE6:1;
      unsigned IOCPE7:1;
      unsigned IOCPE8:1;
      unsigned IOCPE9:1;
    };
  };
} typeIOCPEBITS;
sfr volatile typeIOCPEBITS IOCPEbits absolute 0x6B8;

typedef struct tagIOCNEBITS {
  union {
    struct {
      unsigned IOCNE0:1;
      unsigned IOCNE1:1;
      unsigned IOCNE2:1;
      unsigned IOCNE3:1;
      unsigned IOCNE4:1;
      unsigned IOCNE5:1;
      unsigned IOCNE6:1;
      unsigned IOCNE7:1;
      unsigned IOCNE8:1;
      unsigned IOCNE9:1;
    };
  };
} typeIOCNEBITS;
sfr volatile typeIOCNEBITS IOCNEbits absolute 0x6BA;

typedef struct tagIOCFEBITS {
  union {
    struct {
      unsigned IOCFE0:1;
      unsigned IOCFE1:1;
      unsigned IOCFE2:1;
      unsigned IOCFE3:1;
      unsigned IOCFE4:1;
      unsigned IOCFE5:1;
      unsigned IOCFE6:1;
      unsigned IOCFE7:1;
      unsigned IOCFE8:1;
      unsigned IOCFE9:1;
    };
  };
} typeIOCFEBITS;
sfr volatile typeIOCFEBITS IOCFEbits absolute 0x6BC;

typedef struct tagIOCPUEBITS {
  union {
    struct {
      unsigned IOCPE0:1;
      unsigned IOCPE1:1;
      unsigned IOCPE2:1;
      unsigned IOCPE3:1;
      unsigned IOCPE4:1;
      unsigned IOCPE5:1;
      unsigned IOCPE6:1;
      unsigned IOCPE7:1;
      unsigned IOCPE8:1;
      unsigned IOCPE9:1;
    };
  };
} typeIOCPUEBITS;
sfr volatile typeIOCPUEBITS IOCPUEbits absolute 0x6BE;

typedef struct tagIOCPDEBITS {
  union {
    struct {
      unsigned IOCPDE0:1;
      unsigned IOCPDE1:1;
      unsigned IOCPDE2:1;
      unsigned IOCPDE3:1;
      unsigned IOCPDE4:1;
      unsigned IOCPDE5:1;
      unsigned IOCPDE6:1;
      unsigned IOCPDE7:1;
      unsigned IOCPDE8:1;
      unsigned IOCPDE9:1;
    };
  };
} typeIOCPDEBITS;
sfr volatile typeIOCPDEBITS IOCPDEbits absolute 0x6C0;

typedef struct tagTRISFBITS {
  union {
    struct {
      unsigned TRISF0:1;
      unsigned TRISF1:1;
      unsigned TRISF2:1;
      unsigned TRISF3:1;
      unsigned TRISF4:1;
      unsigned TRISF5:1;
      unsigned TRISF6:1;
      unsigned TRISF7:1;
      unsigned TRISF8:1;
      unsigned :3;
      unsigned TRISF12:1;
      unsigned TRISF13:1;
    };
  };
} typeTRISFBITS;
sfr volatile typeTRISFBITS TRISFbits absolute 0x6C2;

typedef struct tagPORTFBITS {
  union {
    struct {
      unsigned RF0:1;
      unsigned RF1:1;
      unsigned RF2:1;
      unsigned RF3:1;
      unsigned RF4:1;
      unsigned RF5:1;
      unsigned RF6:1;
      unsigned RF7:1;
      unsigned RF8:1;
      unsigned :3;
      unsigned RF12:1;
      unsigned RF13:1;
    };
  };
} typePORTFBITS;
sfr volatile typePORTFBITS PORTFbits absolute 0x6C4;

typedef struct tagLATFBITS {
  union {
    struct {
      unsigned LATF0:1;
      unsigned LATF1:1;
      unsigned LATF2:1;
      unsigned LATF3:1;
      unsigned LATF4:1;
      unsigned LATF5:1;
      unsigned LATF6:1;
      unsigned LATF7:1;
      unsigned LATF8:1;
      unsigned :3;
      unsigned LATF12:1;
      unsigned LATF13:1;
    };
  };
} typeLATFBITS;
sfr volatile typeLATFBITS LATFbits absolute 0x6C6;

typedef struct tagODCFBITS {
  union {
    struct {
      unsigned ODCF0:1;
      unsigned ODCF1:1;
      unsigned ODCF2:1;
      unsigned ODCF3:1;
      unsigned ODCF4:1;
      unsigned ODCF5:1;
      unsigned ODCF6:1;
      unsigned ODCF7:1;
      unsigned ODCF8:1;
      unsigned :3;
      unsigned ODCF12:1;
      unsigned ODCF13:1;
    };
  };
} typeODCFBITS;
sfr volatile typeODCFBITS ODCFbits absolute 0x6C8;

typedef struct tagANSFBITS {
  union {
    struct {
      unsigned ANSF0:1;
      unsigned ANSF1:1;
      unsigned ANSF2:1;
      unsigned ANSF3:1;
      unsigned ANSF4:1;
      unsigned ANSF5:1;
      unsigned :2;
      unsigned ANSF8:1;
      unsigned :3;
      unsigned ANSF12:1;
      unsigned ANSF13:1;
    };
  };
} typeANSFBITS;
sfr volatile typeANSFBITS ANSFbits absolute 0x6CA;

typedef struct tagIOCPFBITS {
  union {
    struct {
      unsigned IOCPF0:1;
      unsigned IOCPF1:1;
      unsigned IOCPF2:1;
      unsigned IOCPF3:1;
      unsigned IOCPF4:1;
      unsigned IOCPF5:1;
      unsigned IOCPF6:1;
      unsigned IOCPF7:1;
      unsigned IOCPF8:1;
      unsigned :3;
      unsigned IOCPF12:1;
      unsigned IOCPF13:1;
    };
  };
} typeIOCPFBITS;
sfr volatile typeIOCPFBITS IOCPFbits absolute 0x6CC;

typedef struct tagIOCNFBITS {
  union {
    struct {
      unsigned IOCNF0:1;
      unsigned IOCNF1:1;
      unsigned IOCNF2:1;
      unsigned IOCNF3:1;
      unsigned IOCNF4:1;
      unsigned IOCNF5:1;
      unsigned IOCNF6:1;
      unsigned IOCNF7:1;
      unsigned IOCNF8:1;
      unsigned :3;
      unsigned IOCNF12:1;
      unsigned IOCNF13:1;
    };
  };
} typeIOCNFBITS;
sfr volatile typeIOCNFBITS IOCNFbits absolute 0x6CE;

typedef struct tagIOCFFBITS {
  union {
    struct {
      unsigned IOCFF0:1;
      unsigned IOCFF1:1;
      unsigned IOCFF2:1;
      unsigned IOCFF3:1;
      unsigned IOCFF4:1;
      unsigned IOCFF5:1;
      unsigned IOCFF6:1;
      unsigned IOCFF7:1;
      unsigned IOCFF8:1;
      unsigned :3;
      unsigned IOCFF12:1;
      unsigned IOCFF13:1;
    };
  };
} typeIOCFFBITS;
sfr volatile typeIOCFFBITS IOCFFbits absolute 0x6D0;

typedef struct tagIOCPUFBITS {
  union {
    struct {
      unsigned IOCPF0:1;
      unsigned IOCPF1:1;
      unsigned IOCPF2:1;
      unsigned IOCPF3:1;
      unsigned IOCPF4:1;
      unsigned IOCPF5:1;
      unsigned IOCPF6:1;
      unsigned IOCPF7:1;
      unsigned IOCPF8:1;
      unsigned :3;
      unsigned IOCPF12:1;
      unsigned IOCPF13:1;
    };
  };
} typeIOCPUFBITS;
sfr volatile typeIOCPUFBITS IOCPUFbits absolute 0x6D2;

typedef struct tagIOCPDFBITS {
  union {
    struct {
      unsigned IOCPDF0:1;
      unsigned IOCPDF1:1;
      unsigned IOCPDF2:1;
      unsigned IOCPDF3:1;
      unsigned IOCPDF4:1;
      unsigned IOCPDF5:1;
      unsigned IOCPDF6:1;
      unsigned IOCPDF7:1;
      unsigned IOCPDF8:1;
      unsigned :3;
      unsigned IOCPDF12:1;
      unsigned IOCPDF13:1;
    };
  };
} typeIOCPDFBITS;
sfr volatile typeIOCPDFBITS IOCPDFbits absolute 0x6D4;

typedef struct tagTRISGBITS {
  union {
    struct {
      unsigned TRISG0:1;
      unsigned TRISG1:1;
      unsigned TRISG2:1;
      unsigned TRISG3:1;
      unsigned :2;
      unsigned TRISG6:1;
      unsigned TRISG7:1;
      unsigned TRISG8:1;
      unsigned TRISG9:1;
      unsigned :2;
      unsigned TRISG12:1;
      unsigned TRISG13:1;
      unsigned TRISG14:1;
      unsigned TRISG15:1;
    };
  };
} typeTRISGBITS;
sfr volatile typeTRISGBITS TRISGbits absolute 0x6D6;

typedef struct tagPORTGBITS {
  union {
    struct {
      unsigned RG0:1;
      unsigned RG1:1;
      unsigned RG2:1;
      unsigned RG3:1;
      unsigned :2;
      unsigned RG6:1;
      unsigned RG7:1;
      unsigned RG8:1;
      unsigned RG9:1;
      unsigned :2;
      unsigned RG12:1;
      unsigned RG13:1;
      unsigned RG14:1;
      unsigned RG15:1;
    };
  };
} typePORTGBITS;
sfr volatile typePORTGBITS PORTGbits absolute 0x6D8;

typedef struct tagLATGBITS {
  union {
    struct {
      unsigned LATG0:1;
      unsigned LATG1:1;
      unsigned LATG2:1;
      unsigned LATG3:1;
      unsigned :2;
      unsigned LATG6:1;
      unsigned LATG7:1;
      unsigned LATG8:1;
      unsigned LATG9:1;
      unsigned :2;
      unsigned LATG12:1;
      unsigned LATG13:1;
      unsigned LATG14:1;
      unsigned LATG15:1;
    };
  };
} typeLATGBITS;
sfr volatile typeLATGBITS LATGbits absolute 0x6DA;

typedef struct tagODCGBITS {
  union {
    struct {
      unsigned ODCG0:1;
      unsigned ODCG1:1;
      unsigned ODCG2:1;
      unsigned ODCG3:1;
      unsigned :2;
      unsigned ODCG6:1;
      unsigned ODCG7:1;
      unsigned ODCG8:1;
      unsigned ODCG9:1;
      unsigned :2;
      unsigned ODCG12:1;
      unsigned ODCG13:1;
      unsigned ODCG14:1;
      unsigned ODCG15:1;
    };
  };
} typeODCGBITS;
sfr volatile typeODCGBITS ODCGbits absolute 0x6DC;

typedef struct tagANSGBITS {
  union {
    struct {
      unsigned ANSG0:1;
      unsigned ANSG1:1;
      unsigned :4;
      unsigned ANSG6:1;
      unsigned ANSG7:1;
      unsigned ANSG8:1;
      unsigned ANSG9:1;
      unsigned :2;
      unsigned ANSG12:1;
      unsigned ANSG13:1;
      unsigned ANSG14:1;
      unsigned ANSG15:1;
    };
  };
} typeANSGBITS;
sfr volatile typeANSGBITS ANSGbits absolute 0x6DE;

typedef struct tagIOCPGBITS {
  union {
    struct {
      unsigned IOCPG0:1;
      unsigned IOCPG1:1;
      unsigned IOCPG2:1;
      unsigned IOCPG3:1;
      unsigned :2;
      unsigned IOCPG6:1;
      unsigned IOCPG7:1;
      unsigned IOCPG8:1;
      unsigned IOCPG9:1;
      unsigned :2;
      unsigned IOCPG12:1;
      unsigned IOCPG13:1;
      unsigned IOCPG14:1;
      unsigned IOCPG15:1;
    };
  };
} typeIOCPGBITS;
sfr volatile typeIOCPGBITS IOCPGbits absolute 0x6E0;

typedef struct tagIOCNGBITS {
  union {
    struct {
      unsigned IOCNG0:1;
      unsigned IOCNG1:1;
      unsigned IOCNG2:1;
      unsigned IOCNG3:1;
      unsigned :2;
      unsigned IOCNG6:1;
      unsigned IOCNG7:1;
      unsigned IOCNG8:1;
      unsigned IOCNG9:1;
      unsigned :2;
      unsigned IOCNG12:1;
      unsigned IOCNG13:1;
      unsigned IOCNG14:1;
      unsigned IOCNG15:1;
    };
  };
} typeIOCNGBITS;
sfr volatile typeIOCNGBITS IOCNGbits absolute 0x6E2;

typedef struct tagIOCFGBITS {
  union {
    struct {
      unsigned IOCFG0:1;
      unsigned IOCFG1:1;
      unsigned IOCFG2:1;
      unsigned IOCFG3:1;
      unsigned :2;
      unsigned IOCFG6:1;
      unsigned IOCFG7:1;
      unsigned IOCFG8:1;
      unsigned IOCFG9:1;
      unsigned :2;
      unsigned IOCFG12:1;
      unsigned IOCFG13:1;
      unsigned IOCFG14:1;
      unsigned IOCFG15:1;
    };
  };
} typeIOCFGBITS;
sfr volatile typeIOCFGBITS IOCFGbits absolute 0x6E4;

typedef struct tagIOCPUGBITS {
  union {
    struct {
      unsigned IOCPG0:1;
      unsigned IOCPG1:1;
      unsigned IOCPG2:1;
      unsigned IOCPG3:1;
      unsigned :2;
      unsigned IOCPG6:1;
      unsigned IOCPG7:1;
      unsigned IOCPG8:1;
      unsigned IOCPG9:1;
      unsigned :2;
      unsigned IOCPG12:1;
      unsigned IOCPG13:1;
      unsigned IOCPG14:1;
      unsigned IOCPG15:1;
    };
  };
} typeIOCPUGBITS;
sfr volatile typeIOCPUGBITS IOCPUGbits absolute 0x6E6;

typedef struct tagIOCPDGBITS {
  union {
    struct {
      unsigned IOCPDG0:1;
      unsigned IOCPDG1:1;
      unsigned IOCPDG2:1;
      unsigned IOCPDG3:1;
      unsigned :2;
      unsigned IOCPDG6:1;
      unsigned IOCPDG7:1;
      unsigned IOCPDG8:1;
      unsigned IOCPDG9:1;
      unsigned :2;
      unsigned IOCPDG12:1;
      unsigned IOCPDG13:1;
      unsigned IOCPDG14:1;
      unsigned IOCPDG15:1;
    };
  };
} typeIOCPDGBITS;
sfr volatile typeIOCPDGBITS IOCPDGbits absolute 0x6E8;

typedef struct tagTRISHBITS {
  union {
    struct {
      unsigned TRISH0:1;
      unsigned TRISH1:1;
      unsigned TRISH2:1;
      unsigned TRISH3:1;
      unsigned TRISH4:1;
      unsigned TRISH5:1;
      unsigned TRISH6:1;
      unsigned TRISH7:1;
      unsigned TRISH8:1;
      unsigned TRISH9:1;
      unsigned TRISH10:1;
      unsigned TRISH11:1;
      unsigned TRISH12:1;
      unsigned TRISH13:1;
      unsigned TRISH14:1;
      unsigned TRISH15:1;
    };
  };
} typeTRISHBITS;
sfr volatile typeTRISHBITS TRISHbits absolute 0x6EA;

typedef struct tagPORTHBITS {
  union {
    struct {
      unsigned RH0:1;
      unsigned RH1:1;
      unsigned RH2:1;
      unsigned RH3:1;
      unsigned RH4:1;
      unsigned RH5:1;
      unsigned RH6:1;
      unsigned RH7:1;
      unsigned RH8:1;
      unsigned RH9:1;
      unsigned RH10:1;
      unsigned RH11:1;
      unsigned RH12:1;
      unsigned RH13:1;
      unsigned RH14:1;
      unsigned RH15:1;
    };
  };
} typePORTHBITS;
sfr volatile typePORTHBITS PORTHbits absolute 0x6EC;

typedef struct tagLATHBITS {
  union {
    struct {
      unsigned LATH0:1;
      unsigned LATH1:1;
      unsigned LATH2:1;
      unsigned LATH3:1;
      unsigned LATH4:1;
      unsigned LATH5:1;
      unsigned LATH6:1;
      unsigned LATH7:1;
      unsigned LATH8:1;
      unsigned LATH9:1;
      unsigned LATH10:1;
      unsigned LATH11:1;
      unsigned LATH12:1;
      unsigned LATH13:1;
      unsigned LATH14:1;
      unsigned LATH15:1;
    };
  };
} typeLATHBITS;
sfr volatile typeLATHBITS LATHbits absolute 0x6EE;

typedef struct tagODCHBITS {
  union {
    struct {
      unsigned ODCH0:1;
      unsigned ODCH1:1;
      unsigned ODCH2:1;
      unsigned ODCH3:1;
      unsigned ODCH4:1;
      unsigned ODCH5:1;
      unsigned ODCH6:1;
      unsigned ODCH7:1;
      unsigned ODCH8:1;
      unsigned ODCH9:1;
      unsigned ODCH10:1;
      unsigned ODCH11:1;
      unsigned ODCH12:1;
      unsigned ODCH13:1;
      unsigned ODCH14:1;
      unsigned ODCH15:1;
    };
  };
} typeODCHBITS;
sfr volatile typeODCHBITS ODCHbits absolute 0x6F0;

typedef struct tagANSHBITS {
  union {
    struct {
      unsigned ANSH0:1;
      unsigned ANSH1:1;
      unsigned ANSH2:1;
      unsigned ANSH3:1;
      unsigned ANSH4:1;
    };
  };
} typeANSHBITS;
sfr volatile typeANSHBITS ANSHbits absolute 0x6F2;

typedef struct tagIOCPHBITS {
  union {
    struct {
      unsigned IOCPH0:1;
      unsigned IOCPH1:1;
      unsigned IOCPH2:1;
      unsigned IOCPH3:1;
      unsigned IOCPH4:1;
      unsigned IOCPH5:1;
      unsigned IOCPH6:1;
      unsigned IOCPH7:1;
      unsigned IOCPH8:1;
      unsigned IOCPH9:1;
      unsigned IOCPH10:1;
      unsigned IOCPH11:1;
      unsigned IOCPH12:1;
      unsigned IOCPH13:1;
      unsigned IOCPH14:1;
      unsigned IOCPH15:1;
    };
  };
} typeIOCPHBITS;
sfr volatile typeIOCPHBITS IOCPHbits absolute 0x6F4;

typedef struct tagIOCNHBITS {
  union {
    struct {
      unsigned IOCNH0:1;
      unsigned IOCNH1:1;
      unsigned IOCNH2:1;
      unsigned IOCNH3:1;
      unsigned IOCNH4:1;
      unsigned IOCNH5:1;
      unsigned IOCNH6:1;
      unsigned IOCNH7:1;
      unsigned IOCNH8:1;
      unsigned IOCNH9:1;
      unsigned IOCNH10:1;
      unsigned IOCNH11:1;
      unsigned IOCNH12:1;
      unsigned IOCNH13:1;
      unsigned IOCNH14:1;
      unsigned IOCNH15:1;
    };
  };
} typeIOCNHBITS;
sfr volatile typeIOCNHBITS IOCNHbits absolute 0x6F6;

typedef struct tagIOCFHBITS {
  union {
    struct {
      unsigned IOCFH0:1;
      unsigned IOCFH1:1;
      unsigned IOCFH2:1;
      unsigned IOCFH3:1;
      unsigned IOCFH4:1;
      unsigned IOCFH5:1;
      unsigned IOCFH6:1;
      unsigned IOCFH7:1;
      unsigned IOCFH8:1;
      unsigned IOCFH9:1;
      unsigned IOCFH10:1;
      unsigned IOCFH11:1;
      unsigned IOCFH12:1;
      unsigned IOCFH13:1;
      unsigned IOCFH14:1;
      unsigned IOCFH15:1;
    };
  };
} typeIOCFHBITS;
sfr volatile typeIOCFHBITS IOCFHbits absolute 0x6F8;

typedef struct tagIOCPUHBITS {
  union {
    struct {
      unsigned IOCPH0:1;
      unsigned IOCPH1:1;
      unsigned IOCPH2:1;
      unsigned IOCPH3:1;
      unsigned IOCPH4:1;
      unsigned IOCPH5:1;
      unsigned IOCPH6:1;
      unsigned IOCPH7:1;
      unsigned IOCPH8:1;
      unsigned IOCPH9:1;
      unsigned IOCPH10:1;
      unsigned IOCPH11:1;
      unsigned IOCPH12:1;
      unsigned IOCPH13:1;
      unsigned IOCPH14:1;
      unsigned IOCPH15:1;
    };
  };
} typeIOCPUHBITS;
sfr volatile typeIOCPUHBITS IOCPUHbits absolute 0x6FA;

typedef struct tagIOCPDHBITS {
  union {
    struct {
      unsigned IOCPDH0:1;
      unsigned IOCPDH1:1;
      unsigned IOCPDH2:1;
      unsigned IOCPDH3:1;
      unsigned IOCPDH4:1;
      unsigned IOCPDH5:1;
      unsigned IOCPDH6:1;
      unsigned IOCPDH7:1;
      unsigned IOCPDH8:1;
      unsigned IOCPDH9:1;
      unsigned IOCPDH10:1;
      unsigned IOCPDH11:1;
      unsigned IOCPDH12:1;
      unsigned IOCPDH13:1;
      unsigned IOCPDH14:1;
      unsigned IOCPDH15:1;
    };
  };
} typeIOCPDHBITS;
sfr volatile typeIOCPDHBITS IOCPDHbits absolute 0x6FC;

typedef struct tagTRISJBITS {
  union {
    struct {
      unsigned TRISJ0:1;
      unsigned TRISJ1:1;
    };
  };
} typeTRISJBITS;
sfr volatile typeTRISJBITS TRISJbits absolute 0x6FE;

typedef struct tagPORTJBITS {
  union {
    struct {
      unsigned RJ0:1;
      unsigned RJ1:1;
    };
  };
} typePORTJBITS;
sfr volatile typePORTJBITS PORTJbits absolute 0x700;

typedef struct tagLATJBITS {
  union {
    struct {
      unsigned LATJ0:1;
      unsigned LATJ1:1;
    };
  };
} typeLATJBITS;
sfr volatile typeLATJBITS LATJbits absolute 0x702;

typedef struct tagODCJBITS {
  union {
    struct {
      unsigned ODCJ0:1;
      unsigned ODCJ1:1;
    };
  };
} typeODCJBITS;
sfr volatile typeODCJBITS ODCJbits absolute 0x704;

typedef struct tagIOCPJBITS {
  union {
    struct {
      unsigned IOCPJ0:1;
      unsigned IOCPJ1:1;
    };
  };
} typeIOCPJBITS;
sfr volatile typeIOCPJBITS IOCPJbits absolute 0x708;

typedef struct tagIOCNJBITS {
  union {
    struct {
      unsigned IOCNJ0:1;
      unsigned IOCNJ1:1;
    };
  };
} typeIOCNJBITS;
sfr volatile typeIOCNJBITS IOCNJbits absolute 0x70A;

typedef struct tagIOCFJBITS {
  union {
    struct {
      unsigned IOCFJ0:1;
      unsigned IOCFJ1:1;
    };
  };
} typeIOCFJBITS;
sfr volatile typeIOCFJBITS IOCFJbits absolute 0x70C;

typedef struct tagIOCPUJBITS {
  union {
    struct {
      unsigned IOCPJ0:1;
      unsigned IOCPJ1:1;
    };
  };
} typeIOCPUJBITS;
sfr volatile typeIOCPUJBITS IOCPUJbits absolute 0x70E;

typedef struct tagIOCPDJBITS {
  union {
    struct {
      unsigned IOCPDJ0:1;
      unsigned IOCPDJ1:1;
    };
  };
} typeIOCPDJBITS;
sfr volatile typeIOCPDJBITS IOCPDJbits absolute 0x710;

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
      unsigned CSS16:1;
      unsigned CSS17:1;
      unsigned CSS18:1;
      unsigned CSS19:1;
      unsigned CSS20:1;
      unsigned CSS21:1;
      unsigned CSS22:1;
      unsigned CSS23:1;
      unsigned CSS24:1;
      unsigned CSS25:1;
      unsigned CSS26:1;
      unsigned CSS27:1;
      unsigned CSS28:1;
      unsigned CSS29:1;
      unsigned CSS30:1;
      unsigned CSS31:1;
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
      unsigned :2;
      unsigned CSS12:1;
      unsigned CSS13:1;
      unsigned CSS14:1;
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

typedef struct tagAD1CHITHBITS {
  union {
    struct {
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
    };
  };
} typeAD1CHITHBITS;
sfr volatile typeAD1CHITHBITS AD1CHITHbits absolute 0x756;

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
      unsigned :2;
      unsigned CTMEN12:1;
      unsigned CTMEN13:1;
      unsigned CTMEN14:1;
    };
  };
} typeAD1CTMENLBITS;
sfr volatile typeAD1CTMENLBITS AD1CTMENLbits absolute 0x75C;

typedef struct tagNVMCONBITS {
  union {
    struct {
      unsigned NVMOP:4;
      unsigned :4;
      unsigned URERR:1;
      unsigned RPDF:1;
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
      unsigned NVMADL:15;
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
      unsigned NVMADL:15;
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

typedef struct tagNVMSRCADRLBITS {
  union {
    struct {
      unsigned :1;
      unsigned NVMSRCADRL:15;
    };
  };
} typeNVMSRCADRLBITS;
sfr volatile typeNVMSRCADRLBITS NVMSRCADRLbits absolute 0x768;

typedef struct tagNVMSRCADRHBITS {
  union {
    struct {
      unsigned NVMSRCADRH:8;
    };
  };
} typeNVMSRCADRHBITS;
sfr volatile typeNVMSRCADRHBITS NVMSRCADRHbits absolute 0x76A;

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
sfr volatile typeRPINR0BITS RPINR0bits absolute 0x790;

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
sfr volatile typeRPINR1BITS RPINR1bits absolute 0x792;

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
sfr volatile typeRPINR2BITS RPINR2bits absolute 0x794;

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
sfr volatile typeRPINR3BITS RPINR3bits absolute 0x796;

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
sfr volatile typeRPINR4BITS RPINR4bits absolute 0x798;

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
sfr volatile typeRPINR7BITS RPINR7bits absolute 0x79E;

typedef struct tagRPINR8BITS {
  union {
    struct {
      unsigned IC3R:6;
    };
    struct {
      unsigned IC3R0:1;
      unsigned IC3R1:1;
      unsigned IC3R2:1;
      unsigned IC3R3:1;
      unsigned IC3R4:1;
      unsigned IC3R5:1;
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
sfr volatile typeRPINR11BITS RPINR11bits absolute 0x7A6;

typedef struct tagRPINR12BITS {
  union {
    struct {
      unsigned TCKIAR:6;
      unsigned :2;
      unsigned TCKIBR:6;
    };
    struct {
      unsigned TCKIAR0:1;
      unsigned TCKIAR1:1;
      unsigned TCKIAR2:1;
      unsigned TCKIAR3:1;
      unsigned TCKIAR4:1;
      unsigned TCKIAR5:1;
      unsigned :2;
      unsigned TCKIBR0:1;
      unsigned TCKIBR1:1;
      unsigned TCKIBR2:1;
      unsigned TCKIBR3:1;
      unsigned TCKIBR4:1;
      unsigned TCKIBR5:1;
    };
  };
} typeRPINR12BITS;
sfr volatile typeRPINR12BITS RPINR12bits absolute 0x7A8;

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
sfr volatile typeRPINR17BITS RPINR17bits absolute 0x7B2;

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
sfr volatile typeRPINR18BITS RPINR18bits absolute 0x7B4;

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
sfr volatile typeRPINR19BITS RPINR19bits absolute 0x7B6;

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
sfr volatile typeRPINR20BITS RPINR20bits absolute 0x7B8;

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
sfr volatile typeRPINR21BITS RPINR21bits absolute 0x7BA;

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
sfr volatile typeRPINR22BITS RPINR22bits absolute 0x7BC;

typedef struct tagRPINR23BITS {
  union {
    struct {
      unsigned SS2R:6;
      unsigned :2;
      unsigned TXCKR:6;
    };
    struct {
      unsigned :8;
      unsigned TXCRR:6;
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
    struct {
      unsigned CLCINAR0:1;
      unsigned CLCINAR1:1;
      unsigned CLCINAR2:1;
      unsigned CLCINAR3:1;
      unsigned CLCINAR4:1;
      unsigned CLCINAR5:1;
      unsigned :2;
      unsigned CLCINBR0:1;
      unsigned CLCINBR1:1;
      unsigned CLCINBR2:1;
      unsigned CLCINBR3:1;
      unsigned CLCINBR4:1;
      unsigned CLCINBR5:1;
    };
  };
} typeRPINR25BITS;
sfr volatile typeRPINR25BITS RPINR25bits absolute 0x7C2;

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
sfr volatile typeRPINR27BITS RPINR27bits absolute 0x7C6;

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
sfr volatile typeRPINR28BITS RPINR28bits absolute 0x7C8;

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
sfr volatile typeRPINR29BITS RPINR29bits absolute 0x7CA;

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
sfr volatile typeRPOR0BITS RPOR0bits absolute 0x7D4;

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
sfr volatile typeRPOR1BITS RPOR1bits absolute 0x7D6;

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
sfr volatile typeRPOR2BITS RPOR2bits absolute 0x7D8;

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
sfr volatile typeRPOR3BITS RPOR3bits absolute 0x7DA;

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
sfr volatile typeRPOR4BITS RPOR4bits absolute 0x7DC;

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
sfr volatile typeRPOR5BITS RPOR5bits absolute 0x7DE;

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
sfr volatile typeRPOR6BITS RPOR6bits absolute 0x7E0;

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
sfr volatile typeRPOR7BITS RPOR7bits absolute 0x7E2;

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
sfr volatile typeRPOR8BITS RPOR8bits absolute 0x7E4;

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
sfr volatile typeRPOR9BITS RPOR9bits absolute 0x7E6;

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
sfr volatile typeRPOR10BITS RPOR10bits absolute 0x7E8;

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
sfr volatile typeRPOR11BITS RPOR11bits absolute 0x7EA;

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
sfr volatile typeRPOR12BITS RPOR12bits absolute 0x7EC;

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
sfr volatile typeRPOR13BITS RPOR13bits absolute 0x7EE;

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
sfr volatile typeRPOR14BITS RPOR14bits absolute 0x7F0;

typedef struct tagRPOR15BITS {
  union {
    struct {
      unsigned RP30R:6;
      unsigned :2;
      unsigned RP31R:6;
    };
    struct {
      unsigned RP30R0:1;
      unsigned RP30R1:1;
      unsigned RP30R2:1;
      unsigned RP30R3:1;
      unsigned RP30R4:1;
      unsigned RP30R5:1;
      unsigned :2;
      unsigned RP31R0:1;
      unsigned RP31R1:1;
      unsigned RP31R2:1;
      unsigned RP31R3:1;
      unsigned RP31R4:1;
      unsigned RP31R5:1;
    };
  };
} typeRPOR15BITS;
sfr volatile typeRPOR15BITS RPOR15bits absolute 0x7F2;

