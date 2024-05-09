// Definition file for P33FJ64GS606

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

const unsigned long __FLASH_SIZE = 0x00010200;
const unsigned long __XRAM_RAM_SIZE = 0x00000FFF;
const unsigned long __XRAM_RAM_START = 0x800;
const unsigned long __YRAM_RAM_SIZE = 0x00000FFF;
const unsigned long __YRAM_RAM_START = 0x1800;
const unsigned long __DMA_RAM_SIZE = 0x000003FF;
const unsigned long __DMA_RAM_START = 0x2800;
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
const unsigned IVT_ADDR_DMA0INTERRUPT        = 0x001C;
const unsigned IVT_ADDR_IC2INTERRUPT         = 0x001E;
const unsigned IVT_ADDR_OC2INTERRUPT         = 0x0020;
const unsigned IVT_ADDR_T2INTERRUPT          = 0x0022;
const unsigned IVT_ADDR_T3INTERRUPT          = 0x0024;
const unsigned IVT_ADDR_SPI1ERRINTERRUPT     = 0x0026;
const unsigned IVT_ADDR_SPI1INTERRUPT        = 0x0028;
const unsigned IVT_ADDR_U1RXINTERRUPT        = 0x002A;
const unsigned IVT_ADDR_U1TXINTERRUPT        = 0x002C;
const unsigned IVT_ADDR_ADCINTERRUPT         = 0x002E;
const unsigned IVT_ADDR_DMA1INTERRUPT        = 0x0030;
const unsigned IVT_ADDR_INTERRUPT15          = 0x0032;
const unsigned IVT_ADDR_SI2C1INTERRUPT       = 0x0034;
const unsigned IVT_ADDR_MI2C1INTERRUPT       = 0x0036;
const unsigned IVT_ADDR_CMP1INTERRUPT        = 0x0038;
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
const unsigned IVT_ADDR_SPI2ERRINTERRUPT     = 0x0054;
const unsigned IVT_ADDR_SPI2INTERRUPT        = 0x0056;
const unsigned IVT_ADDR_C1RXRDYINTERRUPT     = 0x0058;
const unsigned IVT_ADDR_C1INTERRUPT          = 0x005A;
const unsigned IVT_ADDR_DMA3INTERRUPT        = 0x005C;
const unsigned IVT_ADDR_IC3INTERRUPT         = 0x005E;
const unsigned IVT_ADDR_IC4INTERRUPT         = 0x0060;
const unsigned IVT_ADDR_INTERRUPT39          = 0x0062;
const unsigned IVT_ADDR_INTERRUPT40          = 0x0064;
const unsigned IVT_ADDR_INTERRUPT41          = 0x0066;
const unsigned IVT_ADDR_INTERRUPT42          = 0x0068;
const unsigned IVT_ADDR_INTERRUPT43          = 0x006A;
const unsigned IVT_ADDR_INTERRUPT44          = 0x006C;
const unsigned IVT_ADDR_INTERRUPT45          = 0x006E;
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
const unsigned IVT_ADDR_PWMSPEVENTMATCHINTERRUPT = 0x0086;
const unsigned IVT_ADDR_QEI1INTERRUPT        = 0x0088;
const unsigned IVT_ADDR_INTERRUPT59          = 0x008A;
const unsigned IVT_ADDR_INTERRUPT60          = 0x008C;
const unsigned IVT_ADDR_INTERRUPT61          = 0x008E;
const unsigned IVT_ADDR_INTERRUPT62          = 0x0090;
const unsigned IVT_ADDR_INTERRUPT63          = 0x0092;
const unsigned IVT_ADDR_INTERRUPT64          = 0x0094;
const unsigned IVT_ADDR_U1ERRINTERRUPT       = 0x0096;
const unsigned IVT_ADDR_U2ERRINTERRUPT       = 0x0098;
const unsigned IVT_ADDR_INTERRUPT67          = 0x009A;
const unsigned IVT_ADDR_INTERRUPT68          = 0x009C;
const unsigned IVT_ADDR_INTERRUPT69          = 0x009E;
const unsigned IVT_ADDR_C1TXREQINTERRUPT     = 0x00A0;
const unsigned IVT_ADDR_INTERRUPT71          = 0x00A2;
const unsigned IVT_ADDR_INTERRUPT72          = 0x00A4;
const unsigned IVT_ADDR_PWMSECSPEVENTMATCHINTERRUPT = 0x00A6;
const unsigned IVT_ADDR_INTERRUPT74          = 0x00A8;
const unsigned IVT_ADDR_QEI2INTERRUPT        = 0x00AA;
const unsigned IVT_ADDR_INTERRUPT76          = 0x00AC;
const unsigned IVT_ADDR_INTERRUPT77          = 0x00AE;
const unsigned IVT_ADDR_INTERRUPT78          = 0x00B0;
const unsigned IVT_ADDR_INTERRUPT79          = 0x00B2;
const unsigned IVT_ADDR_INTERRUPT80          = 0x00B4;
const unsigned IVT_ADDR_INTERRUPT81          = 0x00B6;
const unsigned IVT_ADDR_INTERRUPT82          = 0x00B8;
const unsigned IVT_ADDR_INTERRUPT83          = 0x00BA;
const unsigned IVT_ADDR_INTERRUPT84          = 0x00BC;
const unsigned IVT_ADDR_ADCP12INTERRUPT      = 0x00BE;
const unsigned IVT_ADDR_INTERRUPT86          = 0x00C0;
const unsigned IVT_ADDR_INTERRUPT87          = 0x00C2;
const unsigned IVT_ADDR_INTERRUPT88          = 0x00C4;
const unsigned IVT_ADDR_INTERRUPT89          = 0x00C6;
const unsigned IVT_ADDR_INTERRUPT90          = 0x00C8;
const unsigned IVT_ADDR_INTERRUPT91          = 0x00CA;
const unsigned IVT_ADDR_INTERRUPT92          = 0x00CC;
const unsigned IVT_ADDR_INTERRUPT93          = 0x00CE;
const unsigned IVT_ADDR_PWM1INTERRUPT        = 0x00D0;
const unsigned IVT_ADDR_PWM2INTERRUPT        = 0x00D2;
const unsigned IVT_ADDR_PWM3INTERRUPT        = 0x00D4;
const unsigned IVT_ADDR_PWM4INTERRUPT        = 0x00D6;
const unsigned IVT_ADDR_PWM5INTERRUPT        = 0x00D8;
const unsigned IVT_ADDR_PWM6INTERRUPT        = 0x00DA;
const unsigned IVT_ADDR_INTERRUPT100         = 0x00DC;
const unsigned IVT_ADDR_INTERRUPT101         = 0x00DE;
const unsigned IVT_ADDR_INTERRUPT102         = 0x00E0;
const unsigned IVT_ADDR_CMP2INTERRUPT        = 0x00E2;
const unsigned IVT_ADDR_CMP3INTERRUPT        = 0x00E4;
const unsigned IVT_ADDR_CMP4INTERRUPT        = 0x00E6;
const unsigned IVT_ADDR_INTERRUPT106         = 0x00E8;
const unsigned IVT_ADDR_INTERRUPT107         = 0x00EA;
const unsigned IVT_ADDR_INTERRUPT108         = 0x00EC;
const unsigned IVT_ADDR_INTERRUPT109         = 0x00EE;
const unsigned IVT_ADDR_ADCP0INTERRUPT       = 0x00F0;
const unsigned IVT_ADDR_ADCP1INTERRUPT       = 0x00F2;
const unsigned IVT_ADDR_ADCP2INTERRUPT       = 0x00F4;
const unsigned IVT_ADDR_ADCP3INTERRUPT       = 0x00F6;
const unsigned IVT_ADDR_ADCP4INTERRUPT       = 0x00F8;
const unsigned IVT_ADDR_ADCP5INTERRUPT       = 0x00FA;
const unsigned IVT_ADDR_ADCP6INTERRUPT       = 0x00FC;
const unsigned IVT_ADDR_ADCP7INTERRUPT       = 0x00FE;

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
const unsigned AIVT_ADDR_ALTDMA0INTERRUPT     = 0x011C;
const unsigned AIVT_ADDR_ALTIC2INTERRUPT      = 0x011E;
const unsigned AIVT_ADDR_ALTOC2INTERRUPT      = 0x0120;
const unsigned AIVT_ADDR_ALTT2INTERRUPT       = 0x0122;
const unsigned AIVT_ADDR_ALTT3INTERRUPT       = 0x0124;
const unsigned AIVT_ADDR_ALTSPI1ERRINTERRUPT  = 0x0126;
const unsigned AIVT_ADDR_ALTSPI1INTERRUPT     = 0x0128;
const unsigned AIVT_ADDR_ALTU1RXINTERRUPT     = 0x012A;
const unsigned AIVT_ADDR_ALTU1TXINTERRUPT     = 0x012C;
const unsigned AIVT_ADDR_ALTADCINTERRUPT      = 0x012E;
const unsigned AIVT_ADDR_ALTDMA1INTERRUPT     = 0x0130;
const unsigned AIVT_ADDR_ALTINTERRUPT15       = 0x0132;
const unsigned AIVT_ADDR_ALTSI2C1INTERRUPT    = 0x0134;
const unsigned AIVT_ADDR_ALTMI2C1INTERRUPT    = 0x0136;
const unsigned AIVT_ADDR_ALTCMP1INTERRUPT     = 0x0138;
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
const unsigned AIVT_ADDR_ALTSPI2ERRINTERRUPT  = 0x0154;
const unsigned AIVT_ADDR_ALTSPI2INTERRUPT     = 0x0156;
const unsigned AIVT_ADDR_ALTC1RXRDYINTERRUPT  = 0x0158;
const unsigned AIVT_ADDR_ALTC1INTERRUPT       = 0x015A;
const unsigned AIVT_ADDR_ALTDMA3INTERRUPT     = 0x015C;
const unsigned AIVT_ADDR_ALTIC3INTERRUPT      = 0x015E;
const unsigned AIVT_ADDR_ALTIC4INTERRUPT      = 0x0160;
const unsigned AIVT_ADDR_ALTINTERRUPT39       = 0x0162;
const unsigned AIVT_ADDR_ALTINTERRUPT40       = 0x0164;
const unsigned AIVT_ADDR_ALTINTERRUPT41       = 0x0166;
const unsigned AIVT_ADDR_ALTINTERRUPT42       = 0x0168;
const unsigned AIVT_ADDR_ALTINTERRUPT43       = 0x016A;
const unsigned AIVT_ADDR_ALTINTERRUPT44       = 0x016C;
const unsigned AIVT_ADDR_ALTINTERRUPT45       = 0x016E;
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
const unsigned AIVT_ADDR_ALTPWMSPEVENTMATCHINTERRUPT = 0x0186;
const unsigned AIVT_ADDR_ALTQEI1INTERRUPT     = 0x0188;
const unsigned AIVT_ADDR_ALTINTERRUPT59       = 0x018A;
const unsigned AIVT_ADDR_ALTINTERRUPT60       = 0x018C;
const unsigned AIVT_ADDR_ALTINTERRUPT61       = 0x018E;
const unsigned AIVT_ADDR_ALTINTERRUPT62       = 0x0190;
const unsigned AIVT_ADDR_ALTINTERRUPT63       = 0x0192;
const unsigned AIVT_ADDR_ALTINTERRUPT64       = 0x0194;
const unsigned AIVT_ADDR_ALTU1ERRINTERRUPT    = 0x0196;
const unsigned AIVT_ADDR_ALTU2ERRINTERRUPT    = 0x0198;
const unsigned AIVT_ADDR_ALTINTERRUPT67       = 0x019A;
const unsigned AIVT_ADDR_ALTINTERRUPT68       = 0x019C;
const unsigned AIVT_ADDR_ALTINTERRUPT69       = 0x019E;
const unsigned AIVT_ADDR_ALTC1TXREQINTERRUPT  = 0x01A0;
const unsigned AIVT_ADDR_ALTINTERRUPT71       = 0x01A2;
const unsigned AIVT_ADDR_ALTINTERRUPT72       = 0x01A4;
const unsigned AIVT_ADDR_ALTPWMSECSPEVENTMATCHINTERRUPT = 0x01A6;
const unsigned AIVT_ADDR_ALTINTERRUPT74       = 0x01A8;
const unsigned AIVT_ADDR_ALTQEI2INTERRUPT     = 0x01AA;
const unsigned AIVT_ADDR_ALTINTERRUPT76       = 0x01AC;
const unsigned AIVT_ADDR_ALTINTERRUPT77       = 0x01AE;
const unsigned AIVT_ADDR_ALTINTERRUPT78       = 0x01B0;
const unsigned AIVT_ADDR_ALTINTERRUPT79       = 0x01B2;
const unsigned AIVT_ADDR_ALTINTERRUPT80       = 0x01B4;
const unsigned AIVT_ADDR_ALTINTERRUPT81       = 0x01B6;
const unsigned AIVT_ADDR_ALTINTERRUPT82       = 0x01B8;
const unsigned AIVT_ADDR_ALTINTERRUPT83       = 0x01BA;
const unsigned AIVT_ADDR_ALTINTERRUPT84       = 0x01BC;
const unsigned AIVT_ADDR_ALTADCP12INTERRUPT   = 0x01BE;
const unsigned AIVT_ADDR_ALTINTERRUPT86       = 0x01C0;
const unsigned AIVT_ADDR_ALTINTERRUPT87       = 0x01C2;
const unsigned AIVT_ADDR_ALTINTERRUPT88       = 0x01C4;
const unsigned AIVT_ADDR_ALTINTERRUPT89       = 0x01C6;
const unsigned AIVT_ADDR_ALTINTERRUPT90       = 0x01C8;
const unsigned AIVT_ADDR_ALTINTERRUPT91       = 0x01CA;
const unsigned AIVT_ADDR_ALTINTERRUPT92       = 0x01CC;
const unsigned AIVT_ADDR_ALTINTERRUPT93       = 0x01CE;
const unsigned AIVT_ADDR_ALTPWM1INTERRUPT     = 0x01D0;
const unsigned AIVT_ADDR_ALTPWM2INTERRUPT     = 0x01D2;
const unsigned AIVT_ADDR_ALTPWM3INTERRUPT     = 0x01D4;
const unsigned AIVT_ADDR_ALTPWM4INTERRUPT     = 0x01D6;
const unsigned AIVT_ADDR_ALTPWM5INTERRUPT     = 0x01D8;
const unsigned AIVT_ADDR_ALTPWM6INTERRUPT     = 0x01DA;
const unsigned AIVT_ADDR_ALTINTERRUPT100      = 0x01DC;
const unsigned AIVT_ADDR_ALTINTERRUPT101      = 0x01DE;
const unsigned AIVT_ADDR_ALTINTERRUPT102      = 0x01E0;
const unsigned AIVT_ADDR_ALTCMP2INTERRUPT     = 0x01E2;
const unsigned AIVT_ADDR_ALTCMP3INTERRUPT     = 0x01E4;
const unsigned AIVT_ADDR_ALTCMP4INTERRUPT     = 0x01E6;
const unsigned AIVT_ADDR_ALTINTERRUPT106      = 0x01E8;
const unsigned AIVT_ADDR_ALTINTERRUPT107      = 0x01EA;
const unsigned AIVT_ADDR_ALTINTERRUPT108      = 0x01EC;
const unsigned AIVT_ADDR_ALTINTERRUPT109      = 0x01EE;
const unsigned AIVT_ADDR_ALTADCP0INTERRUPT    = 0x01F0;
const unsigned AIVT_ADDR_ALTADCP1INTERRUPT    = 0x01F2;
const unsigned AIVT_ADDR_ALTADCP2INTERRUPT    = 0x01F4;
const unsigned AIVT_ADDR_ALTADCP3INTERRUPT    = 0x01F6;
const unsigned AIVT_ADDR_ALTADCP4INTERRUPT    = 0x01F8;
const unsigned AIVT_ADDR_ALTADCP5INTERRUPT    = 0x01FA;
const unsigned AIVT_ADDR_ALTADCP6INTERRUPT    = 0x01FC;
const unsigned AIVT_ADDR_ALTADCP7INTERRUPT    = 0x01FE;

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

const register unsigned int DMA_START_ADDRESS = 0x2800;

const unsigned short ICS_AUTO                  =     0;
const unsigned short ICS_OFF                   =     3;


// Special function registers (SFRs)
sfr unsigned int volatile DFTDATA_INC      absolute 0x07CA;
sfr unsigned int volatile DFTDATA          absolute 0x07C8;
sfr unsigned int volatile DFTADD           absolute 0x07C6;
sfr unsigned int volatile DPCU             absolute 0x0788;
sfr unsigned int volatile DPCL             absolute 0x0786;
sfr unsigned int volatile VISI             absolute 0x0784;
sfr unsigned int volatile FEXU             absolute 0x0782;
sfr unsigned int volatile FEXL             absolute 0x0780;
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
sfr unsigned int volatile ACCAL            absolute 0x0022;
sfr unsigned int volatile ACCAH            absolute 0x0024;
sfr unsigned int volatile ACCAU            absolute 0x0026;
sfr unsigned int volatile ACCBL            absolute 0x0028;
sfr unsigned int volatile ACCBH            absolute 0x002A;
sfr unsigned int volatile ACCBU            absolute 0x002C;
sfr unsigned int volatile PCL              absolute 0x002E;
sfr unsigned int volatile PCH              absolute 0x0030;
sfr unsigned int volatile TBLPAG           absolute 0x0032;
sfr unsigned int volatile PSVPAG           absolute 0x0034;
sfr unsigned int volatile RCOUNT           absolute 0x0036;
sfr unsigned int volatile DCOUNT           absolute 0x0038;
sfr unsigned int volatile DOSTARTL         absolute 0x003A;
sfr unsigned int volatile DOSTARTH         absolute 0x003C;
sfr unsigned int volatile DOENDL           absolute 0x003E;
sfr unsigned int volatile DOENDH           absolute 0x0040;
sfr unsigned int volatile SR               absolute 0x0042;
sfr unsigned int volatile CORCON           absolute 0x0044;
sfr unsigned int volatile MODCON           absolute 0x0046;
sfr unsigned int volatile XMODSRT          absolute 0x0048;
sfr unsigned int volatile XMODEND          absolute 0x004A;
sfr unsigned int volatile YMODSRT          absolute 0x004C;
sfr unsigned int volatile YMODEND          absolute 0x004E;
sfr unsigned int volatile XBREV            absolute 0x0050;
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
sfr unsigned int          IPC12            absolute 0x00BC;
sfr unsigned int          IPC13            absolute 0x00BE;
sfr unsigned int          IPC14            absolute 0x00C0;
sfr unsigned int          IPC16            absolute 0x00C4;
sfr unsigned int          IPC17            absolute 0x00C6;
sfr unsigned int          IPC18            absolute 0x00C8;
sfr unsigned int          IPC21            absolute 0x00CE;
sfr unsigned int          IPC23            absolute 0x00D2;
sfr unsigned int volatile IPC24            absolute 0x00D4;
sfr unsigned int volatile IPC25            absolute 0x00D6;
sfr unsigned int volatile IPC26            absolute 0x00D8;
sfr unsigned int volatile IPC27            absolute 0x00DA;
sfr unsigned int volatile IPC28            absolute 0x00DC;
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
sfr unsigned int volatile IC1BUF           absolute 0x0140;
sfr unsigned int volatile IC1CON           absolute 0x0142;
sfr unsigned int volatile IC2BUF           absolute 0x0144;
sfr unsigned int volatile IC2CON           absolute 0x0146;
sfr unsigned int volatile IC3BUF           absolute 0x0148;
sfr unsigned int volatile IC3CON           absolute 0x014A;
sfr unsigned int volatile IC4BUF           absolute 0x014C;
sfr unsigned int volatile IC4CON           absolute 0x014E;
sfr unsigned int          OC1RS            absolute 0x0180;
sfr unsigned int volatile OC1R             absolute 0x0182;
sfr unsigned int volatile OC1CON           absolute 0x0184;
sfr unsigned int          OC2RS            absolute 0x0186;
sfr unsigned int volatile OC2R             absolute 0x0188;
sfr unsigned int volatile OC2CON           absolute 0x018A;
sfr unsigned int          OC3RS            absolute 0x018C;
sfr unsigned int volatile OC3R             absolute 0x018E;
sfr unsigned int volatile OC3CON           absolute 0x0190;
sfr unsigned int          OC4RS            absolute 0x0192;
sfr unsigned int volatile OC4R             absolute 0x0194;
sfr unsigned int volatile OC4CON           absolute 0x0196;
sfr unsigned int volatile QEI1CON          absolute 0x01E0;
sfr unsigned int volatile DFLT1CON         absolute 0x01E2;
sfr unsigned int volatile POS1CNT          absolute 0x01E4;
sfr unsigned int volatile MAX1CNT          absolute 0x01E6;
sfr unsigned int volatile QEI2CON          absolute 0x01F0;
sfr unsigned int volatile DFLT2CON         absolute 0x01F2;
sfr unsigned int volatile POS2CNT          absolute 0x01F4;
sfr unsigned int volatile MAX2CNT          absolute 0x01F6;
sfr unsigned int volatile I2C1RCV          absolute 0x0200;
sfr unsigned int volatile I2CRCV           absolute 0x0200;
sfr unsigned int volatile I2C1TRN          absolute 0x0202;
sfr unsigned int volatile I2CTRN           absolute 0x0202;
sfr unsigned int          I2C1BRG          absolute 0x0204;
sfr unsigned int volatile I2C1CON          absolute 0x0206;
sfr unsigned int volatile I2CCON           absolute 0x0206;
sfr unsigned int volatile I2C1STAT         absolute 0x0208;
sfr unsigned int volatile I2CSTAT          absolute 0x0208;
sfr unsigned int volatile I2C1ADD          absolute 0x020A;
sfr unsigned int volatile I2CADD           absolute 0x020A;
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
sfr unsigned int volatile TRISB            absolute 0x02C8;
sfr unsigned int volatile PORTB            absolute 0x02CA;
sfr unsigned int volatile LATB             absolute 0x02CC;
sfr unsigned int volatile TRISC            absolute 0x02D0;
sfr unsigned int volatile PORTC            absolute 0x02D2;
sfr unsigned int volatile LATC             absolute 0x02D4;
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
sfr unsigned int volatile ADCON            absolute 0x0300;
sfr unsigned int volatile ADPCFG           absolute 0x0302;
sfr unsigned int volatile ADSTAT           absolute 0x0306;
sfr unsigned int volatile ADBASE           absolute 0x0308;
sfr unsigned int volatile ADCPC0           absolute 0x030A;
sfr unsigned int volatile ADCPC1           absolute 0x030C;
sfr unsigned int volatile ADCPC2           absolute 0x030E;
sfr unsigned int volatile ADCPC3           absolute 0x0310;
sfr unsigned int volatile ADCPC6           absolute 0x0316;
sfr unsigned int volatile ADCBUF0          absolute 0x0340;
sfr unsigned int volatile ADCBUF1          absolute 0x0342;
sfr unsigned int volatile ADCBUF2          absolute 0x0344;
sfr unsigned int volatile ADCBUF3          absolute 0x0346;
sfr unsigned int volatile ADCBUF4          absolute 0x0348;
sfr unsigned int volatile ADCBUF5          absolute 0x034A;
sfr unsigned int volatile ADCBUF6          absolute 0x034C;
sfr unsigned int volatile ADCBUF7          absolute 0x034E;
sfr unsigned int volatile ADCBUF8          absolute 0x0350;
sfr unsigned int volatile ADCBUF9          absolute 0x0352;
sfr unsigned int volatile ADCBUF10         absolute 0x0354;
sfr unsigned int volatile ADCBUF11         absolute 0x0356;
sfr unsigned int volatile ADCBUF12         absolute 0x0358;
sfr unsigned int volatile ADCBUF13         absolute 0x035A;
sfr unsigned int volatile ADCBUF14         absolute 0x035C;
sfr unsigned int volatile ADCBUF15         absolute 0x035E;
sfr unsigned int volatile ADCBUF24         absolute 0x0370;
sfr unsigned int volatile ADCBUF25         absolute 0x0372;
sfr unsigned int          DMA0CON          absolute 0x0380;
sfr unsigned int volatile DMA0REQ          absolute 0x0382;
sfr unsigned int volatile DMA0STA          absolute 0x0384;
sfr unsigned int volatile DMA0STB          absolute 0x0386;
sfr unsigned int volatile DMA0PAD          absolute 0x0388;
sfr unsigned int volatile DMA0CNT          absolute 0x038A;
sfr unsigned int          DMA1CON          absolute 0x038C;
sfr unsigned int volatile DMA1REQ          absolute 0x038E;
sfr unsigned int volatile DMA1STA          absolute 0x0390;
sfr unsigned int volatile DMA1STB          absolute 0x0392;
sfr unsigned int volatile DMA1PAD          absolute 0x0394;
sfr unsigned int volatile DMA1CNT          absolute 0x0396;
sfr unsigned int          DMA2CON          absolute 0x0398;
sfr unsigned int volatile DMA2REQ          absolute 0x039A;
sfr unsigned int volatile DMA2STA          absolute 0x039C;
sfr unsigned int volatile DMA2STB          absolute 0x039E;
sfr unsigned int volatile DMA2PAD          absolute 0x03A0;
sfr unsigned int volatile DMA2CNT          absolute 0x03A2;
sfr unsigned int          DMA3CON          absolute 0x03A4;
sfr unsigned int volatile DMA3REQ          absolute 0x03A6;
sfr unsigned int volatile DMA3STA          absolute 0x03A8;
sfr unsigned int volatile DMA3STB          absolute 0x03AA;
sfr unsigned int volatile DMA3PAD          absolute 0x03AC;
sfr unsigned int volatile DMA3CNT          absolute 0x03AE;
sfr unsigned int volatile DMACS0           absolute 0x03E0;
sfr unsigned int volatile DMACS1           absolute 0x03E2;
sfr unsigned int volatile DSADR            absolute 0x03E4;
sfr unsigned int          PTCON            absolute 0x0400;
sfr unsigned int volatile PTCON2           absolute 0x0402;
sfr unsigned int volatile PTPER            absolute 0x0404;
sfr unsigned int volatile SEVTCMP          absolute 0x0406;
sfr unsigned int volatile MDC              absolute 0x040A;
sfr unsigned int volatile STCON            absolute 0x040E;
sfr unsigned int volatile STCON2           absolute 0x0410;
sfr unsigned int volatile STPER            absolute 0x0412;
sfr unsigned int volatile SSEVTCMP         absolute 0x0414;
sfr unsigned int volatile CHOP             absolute 0x041A;
sfr unsigned int volatile PWMCON1          absolute 0x0420;
sfr unsigned int volatile IOCON1           absolute 0x0422;
sfr unsigned int volatile FCLCON1          absolute 0x0424;
sfr unsigned int volatile PDC1             absolute 0x0426;
sfr unsigned int volatile PHASE1           absolute 0x0428;
sfr unsigned int volatile DTR1             absolute 0x042A;
sfr unsigned int volatile ALTDTR1          absolute 0x042C;
sfr unsigned int volatile SDC1             absolute 0x042E;
sfr unsigned int volatile SPHASE1          absolute 0x0430;
sfr unsigned int volatile TRIG1            absolute 0x0432;
sfr unsigned int volatile TRGCON1          absolute 0x0434;
sfr unsigned int volatile STRIG1           absolute 0x0436;
sfr unsigned int volatile PWMCAP1          absolute 0x0438;
sfr unsigned int volatile LEBCON1          absolute 0x043A;
sfr unsigned int volatile LEBDLY1          absolute 0x043C;
sfr unsigned int volatile AUXCON1          absolute 0x043E;
sfr unsigned int volatile PWMCON2          absolute 0x0440;
sfr unsigned int volatile IOCON2           absolute 0x0442;
sfr unsigned int volatile FCLCON2          absolute 0x0444;
sfr unsigned int volatile PDC2             absolute 0x0446;
sfr unsigned int volatile PHASE2           absolute 0x0448;
sfr unsigned int volatile DTR2             absolute 0x044A;
sfr unsigned int volatile ALTDTR2          absolute 0x044C;
sfr unsigned int volatile SDC2             absolute 0x044E;
sfr unsigned int volatile SPHASE2          absolute 0x0450;
sfr unsigned int volatile TRIG2            absolute 0x0452;
sfr unsigned int volatile TRGCON2          absolute 0x0454;
sfr unsigned int volatile STRIG2           absolute 0x0456;
sfr unsigned int volatile PWMCAP2          absolute 0x0458;
sfr unsigned int volatile LEBCON2          absolute 0x045A;
sfr unsigned int volatile LEBDLY2          absolute 0x045C;
sfr unsigned int volatile AUXCON2          absolute 0x045E;
sfr unsigned int volatile PWMCON3          absolute 0x0460;
sfr unsigned int volatile IOCON3           absolute 0x0462;
sfr unsigned int volatile FCLCON3          absolute 0x0464;
sfr unsigned int volatile PDC3             absolute 0x0466;
sfr unsigned int volatile PHASE3           absolute 0x0468;
sfr unsigned int volatile DTR3             absolute 0x046A;
sfr unsigned int volatile ALTDTR3          absolute 0x046C;
sfr unsigned int volatile SDC3             absolute 0x046E;
sfr unsigned int volatile SPHASE3          absolute 0x0470;
sfr unsigned int volatile TRIG3            absolute 0x0472;
sfr unsigned int volatile TRGCON3          absolute 0x0474;
sfr unsigned int volatile STRIG3           absolute 0x0476;
sfr unsigned int volatile PWMCAP3          absolute 0x0478;
sfr unsigned int volatile LEBCON3          absolute 0x047A;
sfr unsigned int volatile LEBDLY3          absolute 0x047C;
sfr unsigned int volatile AUXCON3          absolute 0x047E;
sfr unsigned int volatile PWMCON4          absolute 0x0480;
sfr unsigned int volatile IOCON4           absolute 0x0482;
sfr unsigned int volatile FCLCON4          absolute 0x0484;
sfr unsigned int volatile PDC4             absolute 0x0486;
sfr unsigned int volatile PHASE4           absolute 0x0488;
sfr unsigned int volatile DTR4             absolute 0x048A;
sfr unsigned int volatile ALTDTR4          absolute 0x048C;
sfr unsigned int volatile SDC4             absolute 0x048E;
sfr unsigned int volatile SPHASE4          absolute 0x0490;
sfr unsigned int volatile TRIG4            absolute 0x0492;
sfr unsigned int volatile TRGCON4          absolute 0x0494;
sfr unsigned int volatile STRIG4           absolute 0x0496;
sfr unsigned int volatile PWMCAP4          absolute 0x0498;
sfr unsigned int volatile LEBCON4          absolute 0x049A;
sfr unsigned int volatile LEBDLY4          absolute 0x049C;
sfr unsigned int volatile AUXCON4          absolute 0x049E;
sfr unsigned int volatile PWMCON5          absolute 0x04A0;
sfr unsigned int volatile IOCON5           absolute 0x04A2;
sfr unsigned int volatile FCLCON5          absolute 0x04A4;
sfr unsigned int volatile PDC5             absolute 0x04A6;
sfr unsigned int volatile PHASE5           absolute 0x04A8;
sfr unsigned int volatile DTR5             absolute 0x04AA;
sfr unsigned int volatile ALTDTR5          absolute 0x04AC;
sfr unsigned int volatile SDC5             absolute 0x04AE;
sfr unsigned int volatile SPHASE5          absolute 0x04B0;
sfr unsigned int volatile TRIG5            absolute 0x04B2;
sfr unsigned int volatile TRGCON5          absolute 0x04B4;
sfr unsigned int volatile STRIG5           absolute 0x04B6;
sfr unsigned int volatile PWMCAP5          absolute 0x04B8;
sfr unsigned int volatile LEBCON5          absolute 0x04BA;
sfr unsigned int volatile LEBDLY5          absolute 0x04BC;
sfr unsigned int volatile AUXCON5          absolute 0x04BE;
sfr unsigned int volatile PWMCON6          absolute 0x04C0;
sfr unsigned int volatile IOCON6           absolute 0x04C2;
sfr unsigned int volatile FCLCON6          absolute 0x04C4;
sfr unsigned int volatile PDC6             absolute 0x04C6;
sfr unsigned int volatile PHASE6           absolute 0x04C8;
sfr unsigned int volatile DTR6             absolute 0x04CA;
sfr unsigned int volatile ALTDTR6          absolute 0x04CC;
sfr unsigned int volatile SDC6             absolute 0x04CE;
sfr unsigned int volatile SPHASE6          absolute 0x04D0;
sfr unsigned int volatile TRIG6            absolute 0x04D2;
sfr unsigned int volatile TRGCON6          absolute 0x04D4;
sfr unsigned int volatile STRIG6           absolute 0x04D6;
sfr unsigned int volatile PWMCAP6          absolute 0x04D8;
sfr unsigned int volatile LEBCON6          absolute 0x04DA;
sfr unsigned int volatile LEBDLY6          absolute 0x04DC;
sfr unsigned int volatile AUXCON6          absolute 0x04DE;
sfr unsigned int volatile CMPCON1          absolute 0x0540;
sfr unsigned int volatile CMPDAC1          absolute 0x0542;
sfr unsigned int volatile CMPCON2          absolute 0x0544;
sfr unsigned int volatile CMPDAC2          absolute 0x0546;
sfr unsigned int volatile CMPCON3          absolute 0x0548;
sfr unsigned int volatile CMPDAC3          absolute 0x054A;
sfr unsigned int volatile CMPCON4          absolute 0x054C;
sfr unsigned int volatile CMPDAC4          absolute 0x054E;
sfr unsigned int volatile C1CTRL1          absolute 0x0600;
sfr unsigned int volatile C1CTRL2          absolute 0x0602;
sfr unsigned int volatile C1VEC            absolute 0x0604;
sfr unsigned int volatile C1FCTRL          absolute 0x0606;
sfr unsigned int volatile C1FIFO           absolute 0x0608;
sfr unsigned int volatile C1INTF           absolute 0x060A;
sfr unsigned int volatile C1INTE           absolute 0x060C;
sfr unsigned int volatile C1EC             absolute 0x060E;
sfr unsigned int volatile C1RERRCNT        absolute 0x060E;
sfr unsigned short volatile C1TERRCNT        absolute 0x060F;
sfr unsigned int volatile C1CFG1           absolute 0x0610;
sfr unsigned int volatile C1CFG2           absolute 0x0612;
sfr unsigned int volatile C1FEN1           absolute 0x0614;
sfr unsigned int volatile C1FMSKSEL1       absolute 0x0618;
sfr unsigned int volatile C1FMSKSEL2       absolute 0x061A;
sfr unsigned int volatile C1BUFPNT1        absolute 0x0620;
sfr unsigned int volatile C1RXFUL1         absolute 0x0620;
sfr unsigned int volatile C1BUFPNT2        absolute 0x0622;
sfr unsigned int volatile C1RXFUL2         absolute 0x0622;
sfr unsigned int volatile C1BUFPNT3        absolute 0x0624;
sfr unsigned int volatile C1BUFPNT4        absolute 0x0626;
sfr unsigned int volatile C1RXOVF1         absolute 0x0628;
sfr unsigned int volatile C1RXOVF2         absolute 0x062A;
sfr unsigned int volatile C1RXM0SID        absolute 0x0630;
sfr unsigned int volatile C1TR01CON        absolute 0x0630;
sfr unsigned int volatile C1RXM0EID        absolute 0x0632;
sfr unsigned int volatile C1TR23CON        absolute 0x0632;
sfr unsigned int volatile C1RXM1SID        absolute 0x0634;
sfr unsigned int volatile C1TR45CON        absolute 0x0634;
sfr unsigned int volatile C1RXM1EID        absolute 0x0636;
sfr unsigned int volatile C1TR67CON        absolute 0x0636;
sfr unsigned int volatile C1RXM2SID        absolute 0x0638;
sfr unsigned int volatile C1RXM2EID        absolute 0x063A;
sfr unsigned int volatile C1RXD            absolute 0x0640;
sfr unsigned int volatile C1RXF0SID        absolute 0x0640;
sfr unsigned int volatile C1RXF0EID        absolute 0x0642;
sfr unsigned int volatile C1TXD            absolute 0x0642;
sfr unsigned int volatile C1RXF1SID        absolute 0x0644;
sfr unsigned int volatile C1RXF1EID        absolute 0x0646;
sfr unsigned int volatile C1RXF2SID        absolute 0x0648;
sfr unsigned int volatile C1RXF2EID        absolute 0x064A;
sfr unsigned int volatile C1RXF3SID        absolute 0x064C;
sfr unsigned int volatile C1RXF3EID        absolute 0x064E;
sfr unsigned int volatile C1RXF4SID        absolute 0x0650;
sfr unsigned int volatile C1RXF4EID        absolute 0x0652;
sfr unsigned int volatile C1RXF5SID        absolute 0x0654;
sfr unsigned int volatile C1RXF5EID        absolute 0x0656;
sfr unsigned int volatile C1RXF6SID        absolute 0x0658;
sfr unsigned int volatile C1RXF6EID        absolute 0x065A;
sfr unsigned int volatile C1RXF7SID        absolute 0x065C;
sfr unsigned int volatile C1RXF7EID        absolute 0x065E;
sfr unsigned int volatile C1RXF8SID        absolute 0x0660;
sfr unsigned int volatile C1RXF8EID        absolute 0x0662;
sfr unsigned int volatile C1RXF9SID        absolute 0x0664;
sfr unsigned int volatile C1RXF9EID        absolute 0x0666;
sfr unsigned int volatile C1RXF10SID       absolute 0x0668;
sfr unsigned int volatile C1RXF10EID       absolute 0x066A;
sfr unsigned int volatile C1RXF11SID       absolute 0x066C;
sfr unsigned int volatile C1RXF11EID       absolute 0x066E;
sfr unsigned int volatile C1RXF12SID       absolute 0x0670;
sfr unsigned int volatile C1RXF12EID       absolute 0x0672;
sfr unsigned int volatile C1RXF13SID       absolute 0x0674;
sfr unsigned int volatile C1RXF13EID       absolute 0x0676;
sfr unsigned int volatile C1RXF14SID       absolute 0x0678;
sfr unsigned int volatile C1RXF14EID       absolute 0x067A;
sfr unsigned int volatile C1RXF15SID       absolute 0x067C;
sfr unsigned int volatile C1RXF15EID       absolute 0x067E;
sfr unsigned int          RCON             absolute 0x0740;
sfr unsigned int volatile OSCCON           absolute 0x0742;
sfr unsigned int volatile OSCCONL          absolute 0x0742;
sfr unsigned short volatile OSCCONH          absolute 0x0743;
sfr unsigned int volatile CLKDIV           absolute 0x0744;
sfr unsigned int volatile PLLFBD           absolute 0x0746;
sfr unsigned int volatile OSCTUN           absolute 0x0748;
sfr unsigned int volatile OSCTUN2          absolute 0x074A;
sfr unsigned int volatile LFSR             absolute 0x074C;
sfr unsigned int          REFOCON          absolute 0x074E;
sfr unsigned int volatile ACLKCON          absolute 0x0750;
sfr unsigned int volatile NVMCON           absolute 0x0760;
sfr unsigned int          NVMKEY           absolute 0x0766;
sfr unsigned int          PMD1             absolute 0x0770;
sfr unsigned int          PMD2             absolute 0x0772;
sfr unsigned int          PMD3             absolute 0x0774;
sfr unsigned int volatile PMD4             absolute 0x0776;
sfr unsigned int volatile PMD6             absolute 0x077A;
sfr unsigned int volatile PMD7             absolute 0x077C;

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

    // ACCAL bits
    const register unsigned short int ACCAL_15 = 15;
    sbit  ACCAL_15_bit at ACCAL.B15;
    const register unsigned short int ACCAL_14 = 14;
    sbit  ACCAL_14_bit at ACCAL.B14;
    const register unsigned short int ACCAL_13 = 13;
    sbit  ACCAL_13_bit at ACCAL.B13;
    const register unsigned short int ACCAL_12 = 12;
    sbit  ACCAL_12_bit at ACCAL.B12;
    const register unsigned short int ACCAL_11 = 11;
    sbit  ACCAL_11_bit at ACCAL.B11;
    const register unsigned short int ACCAL_10 = 10;
    sbit  ACCAL_10_bit at ACCAL.B10;
    const register unsigned short int ACCAL_9 = 9;
    sbit  ACCAL_9_bit at ACCAL.B9;
    const register unsigned short int ACCAL_8 = 8;
    sbit  ACCAL_8_bit at ACCAL.B8;
    const register unsigned short int ACCAL_7 = 7;
    sbit  ACCAL_7_bit at ACCAL.B7;
    const register unsigned short int ACCAL_6 = 6;
    sbit  ACCAL_6_bit at ACCAL.B6;
    const register unsigned short int ACCAL_5 = 5;
    sbit  ACCAL_5_bit at ACCAL.B5;
    const register unsigned short int ACCAL_4 = 4;
    sbit  ACCAL_4_bit at ACCAL.B4;
    const register unsigned short int ACCAL_3 = 3;
    sbit  ACCAL_3_bit at ACCAL.B3;
    const register unsigned short int ACCAL_2 = 2;
    sbit  ACCAL_2_bit at ACCAL.B2;
    const register unsigned short int ACCAL_1 = 1;
    sbit  ACCAL_1_bit at ACCAL.B1;
    const register unsigned short int ACCAL_0 = 0;
    sbit  ACCAL_0_bit at ACCAL.B0;

    // ACCAH bits
    const register unsigned short int ACCAH_15 = 15;
    sbit  ACCAH_15_bit at ACCAH.B15;
    const register unsigned short int ACCAH_14 = 14;
    sbit  ACCAH_14_bit at ACCAH.B14;
    const register unsigned short int ACCAH_13 = 13;
    sbit  ACCAH_13_bit at ACCAH.B13;
    const register unsigned short int ACCAH_12 = 12;
    sbit  ACCAH_12_bit at ACCAH.B12;
    const register unsigned short int ACCAH_11 = 11;
    sbit  ACCAH_11_bit at ACCAH.B11;
    const register unsigned short int ACCAH_10 = 10;
    sbit  ACCAH_10_bit at ACCAH.B10;
    const register unsigned short int ACCAH_9 = 9;
    sbit  ACCAH_9_bit at ACCAH.B9;
    const register unsigned short int ACCAH_8 = 8;
    sbit  ACCAH_8_bit at ACCAH.B8;
    const register unsigned short int ACCAH_7 = 7;
    sbit  ACCAH_7_bit at ACCAH.B7;
    const register unsigned short int ACCAH_6 = 6;
    sbit  ACCAH_6_bit at ACCAH.B6;
    const register unsigned short int ACCAH_5 = 5;
    sbit  ACCAH_5_bit at ACCAH.B5;
    const register unsigned short int ACCAH_4 = 4;
    sbit  ACCAH_4_bit at ACCAH.B4;
    const register unsigned short int ACCAH_3 = 3;
    sbit  ACCAH_3_bit at ACCAH.B3;
    const register unsigned short int ACCAH_2 = 2;
    sbit  ACCAH_2_bit at ACCAH.B2;
    const register unsigned short int ACCAH_1 = 1;
    sbit  ACCAH_1_bit at ACCAH.B1;
    const register unsigned short int ACCAH_0 = 0;
    sbit  ACCAH_0_bit at ACCAH.B0;

    // ACCAU bits
    const register unsigned short int ACCA39_7 = 15;
    sbit  ACCA39_7_bit at ACCAU.B15;
    const register unsigned short int ACCA39_6 = 14;
    sbit  ACCA39_6_bit at ACCAU.B14;
    const register unsigned short int ACCA39_5 = 13;
    sbit  ACCA39_5_bit at ACCAU.B13;
    const register unsigned short int ACCA39_4 = 12;
    sbit  ACCA39_4_bit at ACCAU.B12;
    const register unsigned short int ACCA39_3 = 11;
    sbit  ACCA39_3_bit at ACCAU.B11;
    const register unsigned short int ACCA39_2 = 10;
    sbit  ACCA39_2_bit at ACCAU.B10;
    const register unsigned short int ACCA39_1 = 9;
    sbit  ACCA39_1_bit at ACCAU.B9;
    const register unsigned short int ACCA39_0 = 8;
    sbit  ACCA39_0_bit at ACCAU.B8;
    const register unsigned short int ACCAU_7 = 7;
    sbit  ACCAU_7_bit at ACCAU.B7;
    const register unsigned short int ACCAU_6 = 6;
    sbit  ACCAU_6_bit at ACCAU.B6;
    const register unsigned short int ACCAU_5 = 5;
    sbit  ACCAU_5_bit at ACCAU.B5;
    const register unsigned short int ACCAU_4 = 4;
    sbit  ACCAU_4_bit at ACCAU.B4;
    const register unsigned short int ACCAU_3 = 3;
    sbit  ACCAU_3_bit at ACCAU.B3;
    const register unsigned short int ACCAU_2 = 2;
    sbit  ACCAU_2_bit at ACCAU.B2;
    const register unsigned short int ACCAU_1 = 1;
    sbit  ACCAU_1_bit at ACCAU.B1;
    const register unsigned short int ACCAU_0 = 0;
    sbit  ACCAU_0_bit at ACCAU.B0;

    // ACCBL bits
    const register unsigned short int ACCBL_15 = 15;
    sbit  ACCBL_15_bit at ACCBL.B15;
    const register unsigned short int ACCBL_14 = 14;
    sbit  ACCBL_14_bit at ACCBL.B14;
    const register unsigned short int ACCBL_13 = 13;
    sbit  ACCBL_13_bit at ACCBL.B13;
    const register unsigned short int ACCBL_12 = 12;
    sbit  ACCBL_12_bit at ACCBL.B12;
    const register unsigned short int ACCBL_11 = 11;
    sbit  ACCBL_11_bit at ACCBL.B11;
    const register unsigned short int ACCBL_10 = 10;
    sbit  ACCBL_10_bit at ACCBL.B10;
    const register unsigned short int ACCBL_9 = 9;
    sbit  ACCBL_9_bit at ACCBL.B9;
    const register unsigned short int ACCBL_8 = 8;
    sbit  ACCBL_8_bit at ACCBL.B8;
    const register unsigned short int ACCBL_7 = 7;
    sbit  ACCBL_7_bit at ACCBL.B7;
    const register unsigned short int ACCBL_6 = 6;
    sbit  ACCBL_6_bit at ACCBL.B6;
    const register unsigned short int ACCBL_5 = 5;
    sbit  ACCBL_5_bit at ACCBL.B5;
    const register unsigned short int ACCBL_4 = 4;
    sbit  ACCBL_4_bit at ACCBL.B4;
    const register unsigned short int ACCBL_3 = 3;
    sbit  ACCBL_3_bit at ACCBL.B3;
    const register unsigned short int ACCBL_2 = 2;
    sbit  ACCBL_2_bit at ACCBL.B2;
    const register unsigned short int ACCBL_1 = 1;
    sbit  ACCBL_1_bit at ACCBL.B1;
    const register unsigned short int ACCBL_0 = 0;
    sbit  ACCBL_0_bit at ACCBL.B0;

    // ACCBH bits
    const register unsigned short int ACCBH_15 = 15;
    sbit  ACCBH_15_bit at ACCBH.B15;
    const register unsigned short int ACCBH_14 = 14;
    sbit  ACCBH_14_bit at ACCBH.B14;
    const register unsigned short int ACCBH_13 = 13;
    sbit  ACCBH_13_bit at ACCBH.B13;
    const register unsigned short int ACCBH_12 = 12;
    sbit  ACCBH_12_bit at ACCBH.B12;
    const register unsigned short int ACCBH_11 = 11;
    sbit  ACCBH_11_bit at ACCBH.B11;
    const register unsigned short int ACCBH_10 = 10;
    sbit  ACCBH_10_bit at ACCBH.B10;
    const register unsigned short int ACCBH_9 = 9;
    sbit  ACCBH_9_bit at ACCBH.B9;
    const register unsigned short int ACCBH_8 = 8;
    sbit  ACCBH_8_bit at ACCBH.B8;
    const register unsigned short int ACCBH_7 = 7;
    sbit  ACCBH_7_bit at ACCBH.B7;
    const register unsigned short int ACCBH_6 = 6;
    sbit  ACCBH_6_bit at ACCBH.B6;
    const register unsigned short int ACCBH_5 = 5;
    sbit  ACCBH_5_bit at ACCBH.B5;
    const register unsigned short int ACCBH_4 = 4;
    sbit  ACCBH_4_bit at ACCBH.B4;
    const register unsigned short int ACCBH_3 = 3;
    sbit  ACCBH_3_bit at ACCBH.B3;
    const register unsigned short int ACCBH_2 = 2;
    sbit  ACCBH_2_bit at ACCBH.B2;
    const register unsigned short int ACCBH_1 = 1;
    sbit  ACCBH_1_bit at ACCBH.B1;
    const register unsigned short int ACCBH_0 = 0;
    sbit  ACCBH_0_bit at ACCBH.B0;

    // ACCBU bits
    const register unsigned short int ACCB39_23 = 15;
    sbit  ACCB39_23_bit at ACCBU.B15;
    const register unsigned short int ACCB39_22 = 14;
    sbit  ACCB39_22_bit at ACCBU.B14;
    const register unsigned short int ACCB39_21 = 13;
    sbit  ACCB39_21_bit at ACCBU.B13;
    const register unsigned short int ACCB39_20 = 12;
    sbit  ACCB39_20_bit at ACCBU.B12;
    const register unsigned short int ACCB39_19 = 11;
    sbit  ACCB39_19_bit at ACCBU.B11;
    const register unsigned short int ACCB39_18 = 10;
    sbit  ACCB39_18_bit at ACCBU.B10;
    const register unsigned short int ACCB39_17 = 9;
    sbit  ACCB39_17_bit at ACCBU.B9;
    const register unsigned short int ACCB39_16 = 8;
    sbit  ACCB39_16_bit at ACCBU.B8;
    const register unsigned short int ACCBU_23 = 7;
    sbit  ACCBU_23_bit at ACCBU.B7;
    const register unsigned short int ACCBU_22 = 6;
    sbit  ACCBU_22_bit at ACCBU.B6;
    const register unsigned short int ACCBU_21 = 5;
    sbit  ACCBU_21_bit at ACCBU.B5;
    const register unsigned short int ACCBU_20 = 4;
    sbit  ACCBU_20_bit at ACCBU.B4;
    const register unsigned short int ACCBU_19 = 3;
    sbit  ACCBU_19_bit at ACCBU.B3;
    const register unsigned short int ACCBU_18 = 2;
    sbit  ACCBU_18_bit at ACCBU.B2;
    const register unsigned short int ACCBU_17 = 1;
    sbit  ACCBU_17_bit at ACCBU.B1;
    const register unsigned short int ACCBU_16 = 0;
    sbit  ACCBU_16_bit at ACCBU.B0;

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

    // DCOUNT bits
    const register unsigned short int DCOUNT_15 = 15;
    sbit  DCOUNT_15_bit at DCOUNT.B15;
    const register unsigned short int DCOUNT_14 = 14;
    sbit  DCOUNT_14_bit at DCOUNT.B14;
    const register unsigned short int DCOUNT_13 = 13;
    sbit  DCOUNT_13_bit at DCOUNT.B13;
    const register unsigned short int DCOUNT_12 = 12;
    sbit  DCOUNT_12_bit at DCOUNT.B12;
    const register unsigned short int DCOUNT_11 = 11;
    sbit  DCOUNT_11_bit at DCOUNT.B11;
    const register unsigned short int DCOUNT_10 = 10;
    sbit  DCOUNT_10_bit at DCOUNT.B10;
    const register unsigned short int DCOUNT_9 = 9;
    sbit  DCOUNT_9_bit at DCOUNT.B9;
    const register unsigned short int DCOUNT_8 = 8;
    sbit  DCOUNT_8_bit at DCOUNT.B8;
    const register unsigned short int DCOUNT_7 = 7;
    sbit  DCOUNT_7_bit at DCOUNT.B7;
    const register unsigned short int DCOUNT_6 = 6;
    sbit  DCOUNT_6_bit at DCOUNT.B6;
    const register unsigned short int DCOUNT_5 = 5;
    sbit  DCOUNT_5_bit at DCOUNT.B5;
    const register unsigned short int DCOUNT_4 = 4;
    sbit  DCOUNT_4_bit at DCOUNT.B4;
    const register unsigned short int DCOUNT_3 = 3;
    sbit  DCOUNT_3_bit at DCOUNT.B3;
    const register unsigned short int DCOUNT_2 = 2;
    sbit  DCOUNT_2_bit at DCOUNT.B2;
    const register unsigned short int DCOUNT_1 = 1;
    sbit  DCOUNT_1_bit at DCOUNT.B1;
    const register unsigned short int DCOUNT_0 = 0;
    sbit  DCOUNT_0_bit at DCOUNT.B0;

    // DOSTARTL bits
    const register unsigned short int DOSTARTL_15 = 15;
    sbit  DOSTARTL_15_bit at DOSTARTL.B15;
    const register unsigned short int DOSTARTL_14 = 14;
    sbit  DOSTARTL_14_bit at DOSTARTL.B14;
    const register unsigned short int DOSTARTL_13 = 13;
    sbit  DOSTARTL_13_bit at DOSTARTL.B13;
    const register unsigned short int DOSTARTL_12 = 12;
    sbit  DOSTARTL_12_bit at DOSTARTL.B12;
    const register unsigned short int DOSTARTL_11 = 11;
    sbit  DOSTARTL_11_bit at DOSTARTL.B11;
    const register unsigned short int DOSTARTL_10 = 10;
    sbit  DOSTARTL_10_bit at DOSTARTL.B10;
    const register unsigned short int DOSTARTL_9 = 9;
    sbit  DOSTARTL_9_bit at DOSTARTL.B9;
    const register unsigned short int DOSTARTL_8 = 8;
    sbit  DOSTARTL_8_bit at DOSTARTL.B8;
    const register unsigned short int DOSTARTL_7 = 7;
    sbit  DOSTARTL_7_bit at DOSTARTL.B7;
    const register unsigned short int DOSTARTL_6 = 6;
    sbit  DOSTARTL_6_bit at DOSTARTL.B6;
    const register unsigned short int DOSTARTL_5 = 5;
    sbit  DOSTARTL_5_bit at DOSTARTL.B5;
    const register unsigned short int DOSTARTL_4 = 4;
    sbit  DOSTARTL_4_bit at DOSTARTL.B4;
    const register unsigned short int DOSTARTL_3 = 3;
    sbit  DOSTARTL_3_bit at DOSTARTL.B3;
    const register unsigned short int DOSTARTL_2 = 2;
    sbit  DOSTARTL_2_bit at DOSTARTL.B2;
    const register unsigned short int DOSTARTL_1 = 1;
    sbit  DOSTARTL_1_bit at DOSTARTL.B1;
    const register unsigned short int DOSTARTL_0 = 0;
    sbit  DOSTARTL_0_bit at DOSTARTL.B0;

    // DOSTARTH bits
    const register unsigned short int DOSTARTH_5 = 5;
    sbit  DOSTARTH_5_bit at DOSTARTH.B5;
    const register unsigned short int DOSTARTH_4 = 4;
    sbit  DOSTARTH_4_bit at DOSTARTH.B4;
    const register unsigned short int DOSTARTH_3 = 3;
    sbit  DOSTARTH_3_bit at DOSTARTH.B3;
    const register unsigned short int DOSTARTH_2 = 2;
    sbit  DOSTARTH_2_bit at DOSTARTH.B2;
    const register unsigned short int DOSTARTH_1 = 1;
    sbit  DOSTARTH_1_bit at DOSTARTH.B1;
    const register unsigned short int DOSTARTH_0 = 0;
    sbit  DOSTARTH_0_bit at DOSTARTH.B0;

    // DOENDL bits
    const register unsigned short int DOENDL_15 = 15;
    sbit  DOENDL_15_bit at DOENDL.B15;
    const register unsigned short int DOENDL_14 = 14;
    sbit  DOENDL_14_bit at DOENDL.B14;
    const register unsigned short int DOENDL_13 = 13;
    sbit  DOENDL_13_bit at DOENDL.B13;
    const register unsigned short int DOENDL_12 = 12;
    sbit  DOENDL_12_bit at DOENDL.B12;
    const register unsigned short int DOENDL_11 = 11;
    sbit  DOENDL_11_bit at DOENDL.B11;
    const register unsigned short int DOENDL_10 = 10;
    sbit  DOENDL_10_bit at DOENDL.B10;
    const register unsigned short int DOENDL_9 = 9;
    sbit  DOENDL_9_bit at DOENDL.B9;
    const register unsigned short int DOENDL_8 = 8;
    sbit  DOENDL_8_bit at DOENDL.B8;
    const register unsigned short int DOENDL_7 = 7;
    sbit  DOENDL_7_bit at DOENDL.B7;
    const register unsigned short int DOENDL_6 = 6;
    sbit  DOENDL_6_bit at DOENDL.B6;
    const register unsigned short int DOENDL_5 = 5;
    sbit  DOENDL_5_bit at DOENDL.B5;
    const register unsigned short int DOENDL_4 = 4;
    sbit  DOENDL_4_bit at DOENDL.B4;
    const register unsigned short int DOENDL_3 = 3;
    sbit  DOENDL_3_bit at DOENDL.B3;
    const register unsigned short int DOENDL_2 = 2;
    sbit  DOENDL_2_bit at DOENDL.B2;
    const register unsigned short int DOENDL_1 = 1;
    sbit  DOENDL_1_bit at DOENDL.B1;
    const register unsigned short int DOENDL_0 = 0;
    sbit  DOENDL_0_bit at DOENDL.B0;

    // DOENDH bits
    const register unsigned short int DOENDH_5 = 5;
    sbit  DOENDH_5_bit at DOENDH.B5;
    const register unsigned short int DOENDH_4 = 4;
    sbit  DOENDH_4_bit at DOENDH.B4;
    const register unsigned short int DOENDH_3 = 3;
    sbit  DOENDH_3_bit at DOENDH.B3;
    const register unsigned short int DOENDH_2 = 2;
    sbit  DOENDH_2_bit at DOENDH.B2;
    const register unsigned short int DOENDH_1 = 1;
    sbit  DOENDH_1_bit at DOENDH.B1;
    const register unsigned short int DOENDH_0 = 0;
    sbit  DOENDH_0_bit at DOENDH.B0;

    // SR bits
    const register unsigned short int OA = 15;
    sbit  OA_bit at SR.B15;
    const register unsigned short int OB = 14;
    sbit  OB_bit at SR.B14;
    const register unsigned short int SA = 13;
    sbit  SA_bit at SR.B13;
    const register unsigned short int SB = 12;
    sbit  SB_bit at SR.B12;
    const register unsigned short int OAB = 11;
    sbit  OAB_bit at SR.B11;
    const register unsigned short int SAB = 10;
    sbit  SAB_bit at SR.B10;
    const register unsigned short int DA = 9;
    sbit  DA_bit at SR.B9;
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
    const register unsigned short int US = 12;
    sbit  US_bit at CORCON.B12;
    const register unsigned short int EDT = 11;
    sbit  EDT_bit at CORCON.B11;
    const register unsigned short int DL_2 = 10;
    sbit  DL_2_bit at CORCON.B10;
    const register unsigned short int DL_1 = 9;
    sbit  DL_1_bit at CORCON.B9;
    const register unsigned short int DL_0 = 8;
    sbit  DL_0_bit at CORCON.B8;
    const register unsigned short int SATA = 7;
    sbit  SATA_bit at CORCON.B7;
    const register unsigned short int SATB = 6;
    sbit  SATB_bit at CORCON.B6;
    const register unsigned short int SATDW = 5;
    sbit  SATDW_bit at CORCON.B5;
    const register unsigned short int ACCSAT = 4;
    sbit  ACCSAT_bit at CORCON.B4;
    const register unsigned short int IPL3 = 3;
    sbit  IPL3_bit at CORCON.B3;
    const register unsigned short int PSV = 2;
    sbit  PSV_bit at CORCON.B2;
    const register unsigned short int RND_ = 1;
    sbit  RND_bit at CORCON.B1;
    const register unsigned short int IF_ = 0;
    sbit  IF_bit at CORCON.B0;

    // MODCON bits
    const register unsigned short int XMODEN = 15;
    sbit  XMODEN_bit at MODCON.B15;
    const register unsigned short int YMODEN = 14;
    sbit  YMODEN_bit at MODCON.B14;
    const register unsigned short int BWM_3 = 11;
    sbit  BWM_3_bit at MODCON.B11;
    const register unsigned short int BWM_2 = 10;
    sbit  BWM_2_bit at MODCON.B10;
    const register unsigned short int BWM_1 = 9;
    sbit  BWM_1_bit at MODCON.B9;
    const register unsigned short int BWM_0 = 8;
    sbit  BWM_0_bit at MODCON.B8;
    const register unsigned short int YWM_3 = 7;
    sbit  YWM_3_bit at MODCON.B7;
    const register unsigned short int YWM_2 = 6;
    sbit  YWM_2_bit at MODCON.B6;
    const register unsigned short int YWM_1 = 5;
    sbit  YWM_1_bit at MODCON.B5;
    const register unsigned short int YWM_0 = 4;
    sbit  YWM_0_bit at MODCON.B4;
    const register unsigned short int XWM_3 = 3;
    sbit  XWM_3_bit at MODCON.B3;
    const register unsigned short int XWM_2 = 2;
    sbit  XWM_2_bit at MODCON.B2;
    const register unsigned short int XWM_1 = 1;
    sbit  XWM_1_bit at MODCON.B1;
    const register unsigned short int XWM_0 = 0;
    sbit  XWM_0_bit at MODCON.B0;

    // XMODSRT bits
    const register unsigned short int XS_15 = 15;
    sbit  XS_15_bit at XMODSRT.B15;
    const register unsigned short int XS_14 = 14;
    sbit  XS_14_bit at XMODSRT.B14;
    const register unsigned short int XS_13 = 13;
    sbit  XS_13_bit at XMODSRT.B13;
    const register unsigned short int XS_12 = 12;
    sbit  XS_12_bit at XMODSRT.B12;
    const register unsigned short int XS_11 = 11;
    sbit  XS_11_bit at XMODSRT.B11;
    const register unsigned short int XS_10 = 10;
    sbit  XS_10_bit at XMODSRT.B10;
    const register unsigned short int XS_9 = 9;
    sbit  XS_9_bit at XMODSRT.B9;
    const register unsigned short int XS_8 = 8;
    sbit  XS_8_bit at XMODSRT.B8;
    const register unsigned short int XS_7 = 7;
    sbit  XS_7_bit at XMODSRT.B7;
    const register unsigned short int XS_6 = 6;
    sbit  XS_6_bit at XMODSRT.B6;
    const register unsigned short int XS_5 = 5;
    sbit  XS_5_bit at XMODSRT.B5;
    const register unsigned short int XS_4 = 4;
    sbit  XS_4_bit at XMODSRT.B4;
    const register unsigned short int XS_3 = 3;
    sbit  XS_3_bit at XMODSRT.B3;
    const register unsigned short int XS_2 = 2;
    sbit  XS_2_bit at XMODSRT.B2;
    const register unsigned short int XS_1 = 1;
    sbit  XS_1_bit at XMODSRT.B1;
    const register unsigned short int XS_0 = 0;
    sbit  XS_0_bit at XMODSRT.B0;

    // XMODEND bits
    const register unsigned short int XE_15 = 15;
    sbit  XE_15_bit at XMODEND.B15;
    const register unsigned short int XE_14 = 14;
    sbit  XE_14_bit at XMODEND.B14;
    const register unsigned short int XE_13 = 13;
    sbit  XE_13_bit at XMODEND.B13;
    const register unsigned short int XE_12 = 12;
    sbit  XE_12_bit at XMODEND.B12;
    const register unsigned short int XE_11 = 11;
    sbit  XE_11_bit at XMODEND.B11;
    const register unsigned short int XE_10 = 10;
    sbit  XE_10_bit at XMODEND.B10;
    const register unsigned short int XE_9 = 9;
    sbit  XE_9_bit at XMODEND.B9;
    const register unsigned short int XE_8 = 8;
    sbit  XE_8_bit at XMODEND.B8;
    const register unsigned short int XE_7 = 7;
    sbit  XE_7_bit at XMODEND.B7;
    const register unsigned short int XE_6 = 6;
    sbit  XE_6_bit at XMODEND.B6;
    const register unsigned short int XE_5 = 5;
    sbit  XE_5_bit at XMODEND.B5;
    const register unsigned short int XE_4 = 4;
    sbit  XE_4_bit at XMODEND.B4;
    const register unsigned short int XE_3 = 3;
    sbit  XE_3_bit at XMODEND.B3;
    const register unsigned short int XE_2 = 2;
    sbit  XE_2_bit at XMODEND.B2;
    const register unsigned short int XE_1 = 1;
    sbit  XE_1_bit at XMODEND.B1;
    const register unsigned short int XE_0 = 0;
    sbit  XE_0_bit at XMODEND.B0;

    // YMODSRT bits
    const register unsigned short int YS_15 = 15;
    sbit  YS_15_bit at YMODSRT.B15;
    const register unsigned short int YS_14 = 14;
    sbit  YS_14_bit at YMODSRT.B14;
    const register unsigned short int YS_13 = 13;
    sbit  YS_13_bit at YMODSRT.B13;
    const register unsigned short int YS_12 = 12;
    sbit  YS_12_bit at YMODSRT.B12;
    const register unsigned short int YS_11 = 11;
    sbit  YS_11_bit at YMODSRT.B11;
    const register unsigned short int YS_10 = 10;
    sbit  YS_10_bit at YMODSRT.B10;
    const register unsigned short int YS_9 = 9;
    sbit  YS_9_bit at YMODSRT.B9;
    const register unsigned short int YS_8 = 8;
    sbit  YS_8_bit at YMODSRT.B8;
    const register unsigned short int YS_7 = 7;
    sbit  YS_7_bit at YMODSRT.B7;
    const register unsigned short int YS_6 = 6;
    sbit  YS_6_bit at YMODSRT.B6;
    const register unsigned short int YS_5 = 5;
    sbit  YS_5_bit at YMODSRT.B5;
    const register unsigned short int YS_4 = 4;
    sbit  YS_4_bit at YMODSRT.B4;
    const register unsigned short int YS_3 = 3;
    sbit  YS_3_bit at YMODSRT.B3;
    const register unsigned short int YS_2 = 2;
    sbit  YS_2_bit at YMODSRT.B2;
    const register unsigned short int YS_1 = 1;
    sbit  YS_1_bit at YMODSRT.B1;
    const register unsigned short int YS_0 = 0;
    sbit  YS_0_bit at YMODSRT.B0;

    // YMODEND bits
    const register unsigned short int YE_15 = 15;
    sbit  YE_15_bit at YMODEND.B15;
    const register unsigned short int YE_14 = 14;
    sbit  YE_14_bit at YMODEND.B14;
    const register unsigned short int YE_13 = 13;
    sbit  YE_13_bit at YMODEND.B13;
    const register unsigned short int YE_12 = 12;
    sbit  YE_12_bit at YMODEND.B12;
    const register unsigned short int YE_11 = 11;
    sbit  YE_11_bit at YMODEND.B11;
    const register unsigned short int YE_10 = 10;
    sbit  YE_10_bit at YMODEND.B10;
    const register unsigned short int YE_9 = 9;
    sbit  YE_9_bit at YMODEND.B9;
    const register unsigned short int YE_8 = 8;
    sbit  YE_8_bit at YMODEND.B8;
    const register unsigned short int YE_7 = 7;
    sbit  YE_7_bit at YMODEND.B7;
    const register unsigned short int YE_6 = 6;
    sbit  YE_6_bit at YMODEND.B6;
    const register unsigned short int YE_5 = 5;
    sbit  YE_5_bit at YMODEND.B5;
    const register unsigned short int YE_4 = 4;
    sbit  YE_4_bit at YMODEND.B4;
    const register unsigned short int YE_3 = 3;
    sbit  YE_3_bit at YMODEND.B3;
    const register unsigned short int YE_2 = 2;
    sbit  YE_2_bit at YMODEND.B2;
    const register unsigned short int YE_1 = 1;
    sbit  YE_1_bit at YMODEND.B1;
    const register unsigned short int YE_0 = 0;
    sbit  YE_0_bit at YMODEND.B0;

    // XBREV bits
    const register unsigned short int BREN = 15;
    sbit  BREN_bit at XBREV.B15;
    const register unsigned short int XB_14 = 14;
    sbit  XB_14_bit at XBREV.B14;
    const register unsigned short int XB_13 = 13;
    sbit  XB_13_bit at XBREV.B13;
    const register unsigned short int XB_12 = 12;
    sbit  XB_12_bit at XBREV.B12;
    const register unsigned short int XB_11 = 11;
    sbit  XB_11_bit at XBREV.B11;
    const register unsigned short int XB_10 = 10;
    sbit  XB_10_bit at XBREV.B10;
    const register unsigned short int XB_9 = 9;
    sbit  XB_9_bit at XBREV.B9;
    const register unsigned short int XB_8 = 8;
    sbit  XB_8_bit at XBREV.B8;
    const register unsigned short int XB_7 = 7;
    sbit  XB_7_bit at XBREV.B7;
    const register unsigned short int XB_6 = 6;
    sbit  XB_6_bit at XBREV.B6;
    const register unsigned short int XB_5 = 5;
    sbit  XB_5_bit at XBREV.B5;
    const register unsigned short int XB_4 = 4;
    sbit  XB_4_bit at XBREV.B4;
    const register unsigned short int XB_3 = 3;
    sbit  XB_3_bit at XBREV.B3;
    const register unsigned short int XB_2 = 2;
    sbit  XB_2_bit at XBREV.B2;
    const register unsigned short int XB_1 = 1;
    sbit  XB_1_bit at XBREV.B1;
    const register unsigned short int XB_0 = 0;
    sbit  XB_0_bit at XBREV.B0;

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

    // INTCON1 bits
    const register unsigned short int NSTDIS = 15;
    sbit  NSTDIS_bit at INTCON1.B15;
    const register unsigned short int OVAERR = 14;
    sbit  OVAERR_bit at INTCON1.B14;
    const register unsigned short int OVBERR = 13;
    sbit  OVBERR_bit at INTCON1.B13;
    const register unsigned short int COVAERR = 12;
    sbit  COVAERR_bit at INTCON1.B12;
    const register unsigned short int COVBERR = 11;
    sbit  COVBERR_bit at INTCON1.B11;
    const register unsigned short int OVATE = 10;
    sbit  OVATE_bit at INTCON1.B10;
    const register unsigned short int OVBTE = 9;
    sbit  OVBTE_bit at INTCON1.B9;
    const register unsigned short int COVTE = 8;
    sbit  COVTE_bit at INTCON1.B8;
    const register unsigned short int SFTACERR = 7;
    sbit  SFTACERR_bit at INTCON1.B7;
    const register unsigned short int DIV0ERR = 6;
    sbit  DIV0ERR_bit at INTCON1.B6;
    const register unsigned short int DMACERR = 5;
    sbit  DMACERR_bit at INTCON1.B5;
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
    const register unsigned short int ADIF = 13;
    sbit  ADIF_bit at IFS0.B13;
    const register unsigned short int U1TXIF = 12;
    sbit  U1TXIF_bit at IFS0.B12;
    const register unsigned short int U1RXIF = 11;
    sbit  U1RXIF_bit at IFS0.B11;
    const register unsigned short int SPI1IF = 10;
    sbit  SPI1IF_bit at IFS0.B10;
    const register unsigned short int SPI1EIF = 9;
    sbit  SPI1EIF_bit at IFS0.B9;
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
    const register unsigned short int INT1IF = 4;
    sbit  INT1IF_bit at IFS1.B4;
    const register unsigned short int CNIF = 3;
    sbit  CNIF_bit at IFS1.B3;
    const register unsigned short int AC1IF = 2;
    sbit  AC1IF_bit at IFS1.B2;
    const register unsigned short int MI2C1IF = 1;
    sbit  MI2C1IF_bit at IFS1.B1;
    const register unsigned short int SI2C1IF = 0;
    sbit  SI2C1IF_bit at IFS1.B0;

    // IFS2 bits
    const register unsigned short int IC4IF = 6;
    sbit  IC4IF_bit at IFS2.B6;
    const register unsigned short int IC3IF = 5;
    sbit  IC3IF_bit at IFS2.B5;
    const register unsigned short int DMA3IF = 4;
    sbit  DMA3IF_bit at IFS2.B4;
    const register unsigned short int C1IF = 3;
    sbit  C1IF_bit at IFS2.B3;
    const register unsigned short int C1RXIF = 2;
    sbit  C1RXIF_bit at IFS2.B2;
    const register unsigned short int SPI2IF = 1;
    sbit  SPI2IF_bit at IFS2.B1;
    const register unsigned short int SPI2EIF = 0;
    sbit  SPI2EIF_bit at IFS2.B0;

    // IFS3 bits
    const register unsigned short int QEI1IF = 10;
    sbit  QEI1IF_bit at IFS3.B10;
    const register unsigned short int PSEMIF = 9;
    sbit  PSEMIF_bit at IFS3.B9;
    const register unsigned short int INT4IF = 6;
    sbit  INT4IF_bit at IFS3.B6;
    const register unsigned short int INT3IF = 5;
    sbit  INT3IF_bit at IFS3.B5;
    const register unsigned short int MI2C2IF = 2;
    sbit  MI2C2IF_bit at IFS3.B2;
    const register unsigned short int SI2C2IF = 1;
    sbit  SI2C2IF_bit at IFS3.B1;

    // IFS4 bits
    const register unsigned short int QEI2IF = 11;
    sbit  QEI2IF_bit at IFS4.B11;
    const register unsigned short int PSESMIF = 9;
    sbit  PSESMIF_bit at IFS4.B9;
    const register unsigned short int C1TXIF = 6;
    sbit  C1TXIF_bit at IFS4.B6;
    const register unsigned short int U2EIF = 2;
    sbit  U2EIF_bit at IFS4.B2;
    const register unsigned short int U1EIF = 1;
    sbit  U1EIF_bit at IFS4.B1;

    // IFS5 bits
    const register unsigned short int PWM2IF = 15;
    sbit  PWM2IF_bit at IFS5.B15;
    const register unsigned short int PWM1IF = 14;
    sbit  PWM1IF_bit at IFS5.B14;
    const register unsigned short int ADCP12IF = 13;
    sbit  ADCP12IF_bit at IFS5.B13;

    // IFS6 bits
    const register unsigned short int ADCP1IF = 15;
    sbit  ADCP1IF_bit at IFS6.B15;
    const register unsigned short int ADCP0IF = 14;
    sbit  ADCP0IF_bit at IFS6.B14;
    const register unsigned short int AC4IF = 9;
    sbit  AC4IF_bit at IFS6.B9;
    const register unsigned short int AC3IF = 8;
    sbit  AC3IF_bit at IFS6.B8;
    const register unsigned short int AC2IF = 7;
    sbit  AC2IF_bit at IFS6.B7;
    const register unsigned short int PWM6IF = 3;
    sbit  PWM6IF_bit at IFS6.B3;
    const register unsigned short int PWM5IF = 2;
    sbit  PWM5IF_bit at IFS6.B2;
    const register unsigned short int PWM4IF = 1;
    sbit  PWM4IF_bit at IFS6.B1;
    const register unsigned short int PWM3IF = 0;
    sbit  PWM3IF_bit at IFS6.B0;

    // IFS7 bits
    const register unsigned short int ADCP7IF = 5;
    sbit  ADCP7IF_bit at IFS7.B5;
    const register unsigned short int ADCP6IF = 4;
    sbit  ADCP6IF_bit at IFS7.B4;
    const register unsigned short int ADCP5IF = 3;
    sbit  ADCP5IF_bit at IFS7.B3;
    const register unsigned short int ADCP4IF = 2;
    sbit  ADCP4IF_bit at IFS7.B2;
    const register unsigned short int ADCP3IF = 1;
    sbit  ADCP3IF_bit at IFS7.B1;
    const register unsigned short int ADCP2IF = 0;
    sbit  ADCP2IF_bit at IFS7.B0;

    // IEC0 bits
    const register unsigned short int DMA1IE = 14;
    sbit  DMA1IE_bit at IEC0.B14;
    const register unsigned short int ADIE = 13;
    sbit  ADIE_bit at IEC0.B13;
    const register unsigned short int U1TXIE = 12;
    sbit  U1TXIE_bit at IEC0.B12;
    const register unsigned short int U1RXIE = 11;
    sbit  U1RXIE_bit at IEC0.B11;
    const register unsigned short int SPI1IE = 10;
    sbit  SPI1IE_bit at IEC0.B10;
    const register unsigned short int SPI1EIE = 9;
    sbit  SPI1EIE_bit at IEC0.B9;
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
    const register unsigned short int INT1IE = 4;
    sbit  INT1IE_bit at IEC1.B4;
    const register unsigned short int CNIE = 3;
    sbit  CNIE_bit at IEC1.B3;
    const register unsigned short int AC1IE = 2;
    sbit  AC1IE_bit at IEC1.B2;
    const register unsigned short int MI2C1IE = 1;
    sbit  MI2C1IE_bit at IEC1.B1;
    const register unsigned short int SI2C1IE = 0;
    sbit  SI2C1IE_bit at IEC1.B0;

    // IEC2 bits
    const register unsigned short int IC4IE = 6;
    sbit  IC4IE_bit at IEC2.B6;
    const register unsigned short int IC3IE = 5;
    sbit  IC3IE_bit at IEC2.B5;
    const register unsigned short int DMA3IE = 4;
    sbit  DMA3IE_bit at IEC2.B4;
    const register unsigned short int C1IE = 3;
    sbit  C1IE_bit at IEC2.B3;
    const register unsigned short int C1RXIE = 2;
    sbit  C1RXIE_bit at IEC2.B2;
    const register unsigned short int SPI2IE = 1;
    sbit  SPI2IE_bit at IEC2.B1;
    const register unsigned short int SPI2EIE = 0;
    sbit  SPI2EIE_bit at IEC2.B0;

    // IEC3 bits
    const register unsigned short int QEI1IE = 10;
    sbit  QEI1IE_bit at IEC3.B10;
    const register unsigned short int PSEMIE = 9;
    sbit  PSEMIE_bit at IEC3.B9;
    const register unsigned short int INT4IE = 6;
    sbit  INT4IE_bit at IEC3.B6;
    const register unsigned short int INT3IE = 5;
    sbit  INT3IE_bit at IEC3.B5;
    const register unsigned short int MI2C2IE = 2;
    sbit  MI2C2IE_bit at IEC3.B2;
    const register unsigned short int SI2C2IE = 1;
    sbit  SI2C2IE_bit at IEC3.B1;

    // IEC4 bits
    const register unsigned short int QEI2IE = 11;
    sbit  QEI2IE_bit at IEC4.B11;
    const register unsigned short int PSESMIE = 9;
    sbit  PSESMIE_bit at IEC4.B9;
    const register unsigned short int C1TXIE = 6;
    sbit  C1TXIE_bit at IEC4.B6;
    const register unsigned short int U2EIE = 2;
    sbit  U2EIE_bit at IEC4.B2;
    const register unsigned short int U1EIE = 1;
    sbit  U1EIE_bit at IEC4.B1;

    // IEC5 bits
    const register unsigned short int PWM2IE = 15;
    sbit  PWM2IE_bit at IEC5.B15;
    const register unsigned short int PWM1IE = 14;
    sbit  PWM1IE_bit at IEC5.B14;
    const register unsigned short int ADCP12IE = 13;
    sbit  ADCP12IE_bit at IEC5.B13;

    // IEC6 bits
    const register unsigned short int ADCP1IE = 15;
    sbit  ADCP1IE_bit at IEC6.B15;
    const register unsigned short int ADCP0IE = 14;
    sbit  ADCP0IE_bit at IEC6.B14;
    const register unsigned short int AC4IE = 9;
    sbit  AC4IE_bit at IEC6.B9;
    const register unsigned short int AC3IE = 8;
    sbit  AC3IE_bit at IEC6.B8;
    const register unsigned short int AC2IE = 7;
    sbit  AC2IE_bit at IEC6.B7;
    const register unsigned short int PWM6IE = 3;
    sbit  PWM6IE_bit at IEC6.B3;
    const register unsigned short int PWM5IE = 2;
    sbit  PWM5IE_bit at IEC6.B2;
    const register unsigned short int PWM4IE = 1;
    sbit  PWM4IE_bit at IEC6.B1;
    const register unsigned short int PWM3IE = 0;
    sbit  PWM3IE_bit at IEC6.B0;

    // IEC7 bits
    const register unsigned short int ADCP7IE = 5;
    sbit  ADCP7IE_bit at IEC7.B5;
    const register unsigned short int ADCP6IE = 4;
    sbit  ADCP6IE_bit at IEC7.B4;
    const register unsigned short int ADCP5IE = 3;
    sbit  ADCP5IE_bit at IEC7.B3;
    const register unsigned short int ADCP4IE = 2;
    sbit  ADCP4IE_bit at IEC7.B2;
    const register unsigned short int ADCP3IE = 1;
    sbit  ADCP3IE_bit at IEC7.B1;
    const register unsigned short int ADCP2IE = 0;
    sbit  ADCP2IE_bit at IEC7.B0;

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
    const register unsigned short int SPI1EIP_2 = 6;
    sbit  SPI1EIP_2_bit at IPC2.B6;
    const register unsigned short int SPI1EIP_1 = 5;
    sbit  SPI1EIP_1_bit at IPC2.B5;
    const register unsigned short int SPI1EIP_0 = 4;
    sbit  SPI1EIP_0_bit at IPC2.B4;
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
    const register unsigned short int ADIP_2 = 6;
    sbit  ADIP_2_bit at IPC3.B6;
    const register unsigned short int ADIP_1 = 5;
    sbit  ADIP_1_bit at IPC3.B5;
    const register unsigned short int ADIP_0 = 4;
    sbit  ADIP_0_bit at IPC3.B4;
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
    const register unsigned short int AC1IP_2 = 10;
    sbit  AC1IP_2_bit at IPC4.B10;
    const register unsigned short int AC1IP_1 = 9;
    sbit  AC1IP_1_bit at IPC4.B9;
    const register unsigned short int AC1IP_0 = 8;
    sbit  AC1IP_0_bit at IPC4.B8;
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
    const register unsigned short int C1IP_2 = 14;
    sbit  C1IP_2_bit at IPC8.B14;
    const register unsigned short int C1IP_1 = 13;
    sbit  C1IP_1_bit at IPC8.B13;
    const register unsigned short int C1IP_0 = 12;
    sbit  C1IP_0_bit at IPC8.B12;
    const register unsigned short int C1RXIP_2 = 10;
    sbit  C1RXIP_2_bit at IPC8.B10;
    const register unsigned short int C1RXIP_1 = 9;
    sbit  C1RXIP_1_bit at IPC8.B9;
    const register unsigned short int C1RXIP_0 = 8;
    sbit  C1RXIP_0_bit at IPC8.B8;
    const register unsigned short int SPI2IP_2 = 6;
    sbit  SPI2IP_2_bit at IPC8.B6;
    const register unsigned short int SPI2IP_1 = 5;
    sbit  SPI2IP_1_bit at IPC8.B5;
    const register unsigned short int SPI2IP_0 = 4;
    sbit  SPI2IP_0_bit at IPC8.B4;
    const register unsigned short int SPI2EIP_2 = 2;
    sbit  SPI2EIP_2_bit at IPC8.B2;
    const register unsigned short int SPI2EIP_1 = 1;
    sbit  SPI2EIP_1_bit at IPC8.B1;
    const register unsigned short int SPI2EIP_0 = 0;
    sbit  SPI2EIP_0_bit at IPC8.B0;

    // IPC9 bits
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

    // IPC14 bits
    const register unsigned short int QEI1IP_2 = 10;
    sbit  QEI1IP_2_bit at IPC14.B10;
    const register unsigned short int QEI1IP_1 = 9;
    sbit  QEI1IP_1_bit at IPC14.B9;
    const register unsigned short int QEI1IP_0 = 8;
    sbit  QEI1IP_0_bit at IPC14.B8;
    const register unsigned short int PSEMIP_2 = 6;
    sbit  PSEMIP_2_bit at IPC14.B6;
    const register unsigned short int PSEMIP_1 = 5;
    sbit  PSEMIP_1_bit at IPC14.B5;
    const register unsigned short int PSEMIP_0 = 4;
    sbit  PSEMIP_0_bit at IPC14.B4;

    // IPC16 bits
    const register unsigned short int U2EIP_2 = 10;
    sbit  U2EIP_2_bit at IPC16.B10;
    const register unsigned short int U2EIP_1 = 9;
    sbit  U2EIP_1_bit at IPC16.B9;
    const register unsigned short int U2EIP_0 = 8;
    sbit  U2EIP_0_bit at IPC16.B8;
    const register unsigned short int U1EIP_2 = 6;
    sbit  U1EIP_2_bit at IPC16.B6;
    const register unsigned short int U1EIP_1 = 5;
    sbit  U1EIP_1_bit at IPC16.B5;
    const register unsigned short int U1EIP_0 = 4;
    sbit  U1EIP_0_bit at IPC16.B4;

    // IPC17 bits
    const register unsigned short int C1TXIP_2 = 10;
    sbit  C1TXIP_2_bit at IPC17.B10;
    const register unsigned short int C1TXIP_1 = 9;
    sbit  C1TXIP_1_bit at IPC17.B9;
    const register unsigned short int C1TXIP_0 = 8;
    sbit  C1TXIP_0_bit at IPC17.B8;

    // IPC18 bits
    const register unsigned short int QEI2IP_2 = 14;
    sbit  QEI2IP_2_bit at IPC18.B14;
    const register unsigned short int QEI2IP_1 = 13;
    sbit  QEI2IP_1_bit at IPC18.B13;
    const register unsigned short int QEI2IP_0 = 12;
    sbit  QEI2IP_0_bit at IPC18.B12;
    const register unsigned short int PSESMIP_2 = 6;
    sbit  PSESMIP_2_bit at IPC18.B6;
    const register unsigned short int PSESMIP_1 = 5;
    sbit  PSESMIP_1_bit at IPC18.B5;
    const register unsigned short int PSESMIP_0 = 4;
    sbit  PSESMIP_0_bit at IPC18.B4;

    // IPC21 bits
    const register unsigned short int ADCP12IP_2 = 6;
    sbit  ADCP12IP_2_bit at IPC21.B6;
    const register unsigned short int ADCP12IP_1 = 5;
    sbit  ADCP12IP_1_bit at IPC21.B5;
    const register unsigned short int ADCP12IP_0 = 4;
    sbit  ADCP12IP_0_bit at IPC21.B4;

    // IPC23 bits
    const register unsigned short int PWM2IP_2 = 14;
    sbit  PWM2IP_2_bit at IPC23.B14;
    const register unsigned short int PWM2IP_1 = 13;
    sbit  PWM2IP_1_bit at IPC23.B13;
    const register unsigned short int PWM2IP_0 = 12;
    sbit  PWM2IP_0_bit at IPC23.B12;
    const register unsigned short int PWM1IP_2 = 10;
    sbit  PWM1IP_2_bit at IPC23.B10;
    const register unsigned short int PWM1IP_1 = 9;
    sbit  PWM1IP_1_bit at IPC23.B9;
    const register unsigned short int PWM1IP_0 = 8;
    sbit  PWM1IP_0_bit at IPC23.B8;

    // IPC24 bits
    const register unsigned short int PWM6IP_2 = 14;
    sbit  PWM6IP_2_bit at IPC24.B14;
    const register unsigned short int PWM6IP_1 = 13;
    sbit  PWM6IP_1_bit at IPC24.B13;
    const register unsigned short int PWM6IP_0 = 12;
    sbit  PWM6IP_0_bit at IPC24.B12;
    const register unsigned short int PWM5IP_2 = 10;
    sbit  PWM5IP_2_bit at IPC24.B10;
    const register unsigned short int PWM5IP_1 = 9;
    sbit  PWM5IP_1_bit at IPC24.B9;
    const register unsigned short int PWM5IP_0 = 8;
    sbit  PWM5IP_0_bit at IPC24.B8;
    const register unsigned short int PWM4IP_2 = 6;
    sbit  PWM4IP_2_bit at IPC24.B6;
    const register unsigned short int PWM4IP_1 = 5;
    sbit  PWM4IP_1_bit at IPC24.B5;
    const register unsigned short int PWM4IP_0 = 4;
    sbit  PWM4IP_0_bit at IPC24.B4;
    const register unsigned short int PWM3IP_2 = 2;
    sbit  PWM3IP_2_bit at IPC24.B2;
    const register unsigned short int PWM3IP_1 = 1;
    sbit  PWM3IP_1_bit at IPC24.B1;
    const register unsigned short int PWM3IP_0 = 0;
    sbit  PWM3IP_0_bit at IPC24.B0;

    // IPC25 bits
    const register unsigned short int AC2IP_2 = 14;
    sbit  AC2IP_2_bit at IPC25.B14;
    const register unsigned short int AC2IP_1 = 13;
    sbit  AC2IP_1_bit at IPC25.B13;
    const register unsigned short int AC2IP_0 = 12;
    sbit  AC2IP_0_bit at IPC25.B12;

    // IPC26 bits
    const register unsigned short int AC4IP_2 = 6;
    sbit  AC4IP_2_bit at IPC26.B6;
    const register unsigned short int AC4IP_1 = 5;
    sbit  AC4IP_1_bit at IPC26.B5;
    const register unsigned short int AC4IP_0 = 4;
    sbit  AC4IP_0_bit at IPC26.B4;
    const register unsigned short int AC3IP_2 = 2;
    sbit  AC3IP_2_bit at IPC26.B2;
    const register unsigned short int AC3IP_1 = 1;
    sbit  AC3IP_1_bit at IPC26.B1;
    const register unsigned short int AC3IP_0 = 0;
    sbit  AC3IP_0_bit at IPC26.B0;

    // IPC27 bits
    const register unsigned short int ADCP1IP_2 = 14;
    sbit  ADCP1IP_2_bit at IPC27.B14;
    const register unsigned short int ADCP1IP_1 = 13;
    sbit  ADCP1IP_1_bit at IPC27.B13;
    const register unsigned short int ADCP1IP_0 = 12;
    sbit  ADCP1IP_0_bit at IPC27.B12;
    const register unsigned short int ADCP0IP_2 = 10;
    sbit  ADCP0IP_2_bit at IPC27.B10;
    const register unsigned short int ADCP0IP_1 = 9;
    sbit  ADCP0IP_1_bit at IPC27.B9;
    const register unsigned short int ADCP0IP_0 = 8;
    sbit  ADCP0IP_0_bit at IPC27.B8;

    // IPC28 bits
    const register unsigned short int ADCP5IP_2 = 14;
    sbit  ADCP5IP_2_bit at IPC28.B14;
    const register unsigned short int ADCP5IP_1 = 13;
    sbit  ADCP5IP_1_bit at IPC28.B13;
    const register unsigned short int ADCP5IP_0 = 12;
    sbit  ADCP5IP_0_bit at IPC28.B12;
    const register unsigned short int ADCP4IP_2 = 10;
    sbit  ADCP4IP_2_bit at IPC28.B10;
    const register unsigned short int ADCP4IP_1 = 9;
    sbit  ADCP4IP_1_bit at IPC28.B9;
    const register unsigned short int ADCP4IP_0 = 8;
    sbit  ADCP4IP_0_bit at IPC28.B8;
    const register unsigned short int ADCP3IP_2 = 6;
    sbit  ADCP3IP_2_bit at IPC28.B6;
    const register unsigned short int ADCP3IP_1 = 5;
    sbit  ADCP3IP_1_bit at IPC28.B5;
    const register unsigned short int ADCP3IP_0 = 4;
    sbit  ADCP3IP_0_bit at IPC28.B4;
    const register unsigned short int ADCP2IP_2 = 2;
    sbit  ADCP2IP_2_bit at IPC28.B2;
    const register unsigned short int ADCP2IP_1 = 1;
    sbit  ADCP2IP_1_bit at IPC28.B1;
    const register unsigned short int ADCP2IP_0 = 0;
    sbit  ADCP2IP_0_bit at IPC28.B0;

    // IPC29 bits
    const register unsigned short int ADCP7IP_2 = 6;
    sbit  ADCP7IP_2_bit at IPC29.B6;
    const register unsigned short int ADCP7IP_1 = 5;
    sbit  ADCP7IP_1_bit at IPC29.B5;
    const register unsigned short int ADCP7IP_0 = 4;
    sbit  ADCP7IP_0_bit at IPC29.B4;
    const register unsigned short int ADCP6IP_2 = 2;
    sbit  ADCP6IP_2_bit at IPC29.B2;
    const register unsigned short int ADCP6IP_1 = 1;
    sbit  ADCP6IP_1_bit at IPC29.B1;
    const register unsigned short int ADCP6IP_0 = 0;
    sbit  ADCP6IP_0_bit at IPC29.B0;

    // INTTREG bits
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

    // IC1CON bits
    const register unsigned short int ICSIDL = 13;
    sbit  ICSIDL_bit at IC1CON.B13;
    sbit  ICSIDL_IC1CON_bit at IC1CON.B13;
    const register unsigned short int ICTMR = 7;
    sbit  ICTMR_bit at IC1CON.B7;
    sbit  ICTMR_IC1CON_bit at IC1CON.B7;
    const register unsigned short int ICI_1 = 6;
    sbit  ICI_1_bit at IC1CON.B6;
    sbit  ICI_1_IC1CON_bit at IC1CON.B6;
    const register unsigned short int ICI_0 = 5;
    sbit  ICI_0_bit at IC1CON.B5;
    sbit  ICI_0_IC1CON_bit at IC1CON.B5;
    const register unsigned short int ICOV = 4;
    sbit  ICOV_bit at IC1CON.B4;
    sbit  ICOV_IC1CON_bit at IC1CON.B4;
    const register unsigned short int ICBNE = 3;
    sbit  ICBNE_bit at IC1CON.B3;
    sbit  ICBNE_IC1CON_bit at IC1CON.B3;
    const register unsigned short int ICM_2 = 2;
    sbit  ICM_2_bit at IC1CON.B2;
    sbit  ICM_2_IC1CON_bit at IC1CON.B2;
    const register unsigned short int ICM_1 = 1;
    sbit  ICM_1_bit at IC1CON.B1;
    sbit  ICM_1_IC1CON_bit at IC1CON.B1;
    const register unsigned short int ICM_0 = 0;
    sbit  ICM_0_bit at IC1CON.B0;
    sbit  ICM_0_IC1CON_bit at IC1CON.B0;

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

    // IC2CON bits
    sbit  ICSIDL_IC2CON_bit at IC2CON.B13;
    sbit  ICTMR_IC2CON_bit at IC2CON.B7;
    sbit  ICI_1_IC2CON_bit at IC2CON.B6;
    sbit  ICI_0_IC2CON_bit at IC2CON.B5;
    sbit  ICOV_IC2CON_bit at IC2CON.B4;
    sbit  ICBNE_IC2CON_bit at IC2CON.B3;
    sbit  ICM_2_IC2CON_bit at IC2CON.B2;
    sbit  ICM_1_IC2CON_bit at IC2CON.B1;
    sbit  ICM_0_IC2CON_bit at IC2CON.B0;

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

    // IC3CON bits
    sbit  ICSIDL_IC3CON_bit at IC3CON.B13;
    sbit  ICTMR_IC3CON_bit at IC3CON.B7;
    sbit  ICI_1_IC3CON_bit at IC3CON.B6;
    sbit  ICI_0_IC3CON_bit at IC3CON.B5;
    sbit  ICOV_IC3CON_bit at IC3CON.B4;
    sbit  ICBNE_IC3CON_bit at IC3CON.B3;
    sbit  ICM_2_IC3CON_bit at IC3CON.B2;
    sbit  ICM_1_IC3CON_bit at IC3CON.B1;
    sbit  ICM_0_IC3CON_bit at IC3CON.B0;

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

    // IC4CON bits
    sbit  ICSIDL_IC4CON_bit at IC4CON.B13;
    sbit  ICTMR_IC4CON_bit at IC4CON.B7;
    sbit  ICI_1_IC4CON_bit at IC4CON.B6;
    sbit  ICI_0_IC4CON_bit at IC4CON.B5;
    sbit  ICOV_IC4CON_bit at IC4CON.B4;
    sbit  ICBNE_IC4CON_bit at IC4CON.B3;
    sbit  ICM_2_IC4CON_bit at IC4CON.B2;
    sbit  ICM_1_IC4CON_bit at IC4CON.B1;
    sbit  ICM_0_IC4CON_bit at IC4CON.B0;

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

    // OC1CON bits
    const register unsigned short int OCSIDL = 13;
    sbit  OCSIDL_bit at OC1CON.B13;
    sbit  OCSIDL_OC1CON_bit at OC1CON.B13;
    const register unsigned short int OCFLT = 4;
    sbit  OCFLT_bit at OC1CON.B4;
    sbit  OCFLT_OC1CON_bit at OC1CON.B4;
    const register unsigned short int OCTSEL = 3;
    sbit  OCTSEL_bit at OC1CON.B3;
    sbit  OCTSEL_OC1CON_bit at OC1CON.B3;
    const register unsigned short int OCM_2 = 2;
    sbit  OCM_2_bit at OC1CON.B2;
    sbit  OCM_2_OC1CON_bit at OC1CON.B2;
    const register unsigned short int OCM_1 = 1;
    sbit  OCM_1_bit at OC1CON.B1;
    sbit  OCM_1_OC1CON_bit at OC1CON.B1;
    const register unsigned short int OCM_0 = 0;
    sbit  OCM_0_bit at OC1CON.B0;
    sbit  OCM_0_OC1CON_bit at OC1CON.B0;

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

    // OC2CON bits
    sbit  OCSIDL_OC2CON_bit at OC2CON.B13;
    sbit  OCFLT_OC2CON_bit at OC2CON.B4;
    sbit  OCTSEL_OC2CON_bit at OC2CON.B3;
    sbit  OCM_2_OC2CON_bit at OC2CON.B2;
    sbit  OCM_1_OC2CON_bit at OC2CON.B1;
    sbit  OCM_0_OC2CON_bit at OC2CON.B0;

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

    // OC3CON bits
    sbit  OCSIDL_OC3CON_bit at OC3CON.B13;
    sbit  OCFLT_OC3CON_bit at OC3CON.B4;
    sbit  OCTSEL_OC3CON_bit at OC3CON.B3;
    sbit  OCM_2_OC3CON_bit at OC3CON.B2;
    sbit  OCM_1_OC3CON_bit at OC3CON.B1;
    sbit  OCM_0_OC3CON_bit at OC3CON.B0;

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

    // OC4CON bits
    sbit  OCSIDL_OC4CON_bit at OC4CON.B13;
    sbit  OCFLT_OC4CON_bit at OC4CON.B4;
    sbit  OCTSEL_OC4CON_bit at OC4CON.B3;
    sbit  OCM_2_OC4CON_bit at OC4CON.B2;
    sbit  OCM_1_OC4CON_bit at OC4CON.B1;
    sbit  OCM_0_OC4CON_bit at OC4CON.B0;

    // QEI1CON bits
    const register unsigned short int CNTERR = 15;
    sbit  CNTERR_bit at QEI1CON.B15;
    sbit  CNTERR_QEI1CON_bit at QEI1CON.B15;
    const register unsigned short int QEISIDL = 13;
    sbit  QEISIDL_bit at QEI1CON.B13;
    sbit  QEISIDL_QEI1CON_bit at QEI1CON.B13;
    const register unsigned short int INDX = 12;
    sbit  INDX_bit at QEI1CON.B12;
    sbit  INDX_QEI1CON_bit at QEI1CON.B12;
    const register unsigned short int UPDN = 11;
    sbit  UPDN_bit at QEI1CON.B11;
    sbit  UPDN_QEI1CON_bit at QEI1CON.B11;
    const register unsigned short int QEIM_2 = 10;
    sbit  QEIM_2_bit at QEI1CON.B10;
    sbit  QEIM_2_QEI1CON_bit at QEI1CON.B10;
    const register unsigned short int QEIM_1 = 9;
    sbit  QEIM_1_bit at QEI1CON.B9;
    sbit  QEIM_1_QEI1CON_bit at QEI1CON.B9;
    const register unsigned short int QEIM_0 = 8;
    sbit  QEIM_0_bit at QEI1CON.B8;
    sbit  QEIM_0_QEI1CON_bit at QEI1CON.B8;
    const register unsigned short int SWPAB = 7;
    sbit  SWPAB_bit at QEI1CON.B7;
    sbit  SWPAB_QEI1CON_bit at QEI1CON.B7;
    const register unsigned short int PCDOUT = 6;
    sbit  PCDOUT_bit at QEI1CON.B6;
    sbit  PCDOUT_QEI1CON_bit at QEI1CON.B6;
    const register unsigned short int TQGATE = 5;
    sbit  TQGATE_bit at QEI1CON.B5;
    sbit  TQGATE_QEI1CON_bit at QEI1CON.B5;
    const register unsigned short int TQCKPS_1 = 4;
    sbit  TQCKPS_1_bit at QEI1CON.B4;
    sbit  TQCKPS_1_QEI1CON_bit at QEI1CON.B4;
    const register unsigned short int TQCKPS_0 = 3;
    sbit  TQCKPS_0_bit at QEI1CON.B3;
    sbit  TQCKPS_0_QEI1CON_bit at QEI1CON.B3;
    const register unsigned short int POSRES = 2;
    sbit  POSRES_bit at QEI1CON.B2;
    sbit  POSRES_QEI1CON_bit at QEI1CON.B2;
    const register unsigned short int TQCS = 1;
    sbit  TQCS_bit at QEI1CON.B1;
    sbit  TQCS_QEI1CON_bit at QEI1CON.B1;
    const register unsigned short int UPDN_SRC = 0;
    sbit  UPDN_SRC_bit at QEI1CON.B0;
    sbit  UPDN_SRC_QEI1CON_bit at QEI1CON.B0;

    // DFLT1CON bits
    const register unsigned short int IMV_1 = 10;
    sbit  IMV_1_bit at DFLT1CON.B10;
    sbit  IMV_1_DFLT1CON_bit at DFLT1CON.B10;
    const register unsigned short int IMV_0 = 9;
    sbit  IMV_0_bit at DFLT1CON.B9;
    sbit  IMV_0_DFLT1CON_bit at DFLT1CON.B9;
    const register unsigned short int CEID = 8;
    sbit  CEID_bit at DFLT1CON.B8;
    sbit  CEID_DFLT1CON_bit at DFLT1CON.B8;
    const register unsigned short int QEOUT = 7;
    sbit  QEOUT_bit at DFLT1CON.B7;
    sbit  QEOUT_DFLT1CON_bit at DFLT1CON.B7;
    const register unsigned short int QECK_2 = 6;
    sbit  QECK_2_bit at DFLT1CON.B6;
    sbit  QECK_2_DFLT1CON_bit at DFLT1CON.B6;
    const register unsigned short int QECK_1 = 5;
    sbit  QECK_1_bit at DFLT1CON.B5;
    sbit  QECK_1_DFLT1CON_bit at DFLT1CON.B5;
    const register unsigned short int QECK_0 = 4;
    sbit  QECK_0_bit at DFLT1CON.B4;
    sbit  QECK_0_DFLT1CON_bit at DFLT1CON.B4;

    // POS1CNT bits
    const register unsigned short int POSCNT_15 = 15;
    sbit  POSCNT_15_bit at POS1CNT.B15;
    sbit  POSCNT_15_POS1CNT_bit at POS1CNT.B15;
    const register unsigned short int POSCNT_14 = 14;
    sbit  POSCNT_14_bit at POS1CNT.B14;
    sbit  POSCNT_14_POS1CNT_bit at POS1CNT.B14;
    const register unsigned short int POSCNT_13 = 13;
    sbit  POSCNT_13_bit at POS1CNT.B13;
    sbit  POSCNT_13_POS1CNT_bit at POS1CNT.B13;
    const register unsigned short int POSCNT_12 = 12;
    sbit  POSCNT_12_bit at POS1CNT.B12;
    sbit  POSCNT_12_POS1CNT_bit at POS1CNT.B12;
    const register unsigned short int POSCNT_11 = 11;
    sbit  POSCNT_11_bit at POS1CNT.B11;
    sbit  POSCNT_11_POS1CNT_bit at POS1CNT.B11;
    const register unsigned short int POSCNT_10 = 10;
    sbit  POSCNT_10_bit at POS1CNT.B10;
    sbit  POSCNT_10_POS1CNT_bit at POS1CNT.B10;
    const register unsigned short int POSCNT_9 = 9;
    sbit  POSCNT_9_bit at POS1CNT.B9;
    sbit  POSCNT_9_POS1CNT_bit at POS1CNT.B9;
    const register unsigned short int POSCNT_8 = 8;
    sbit  POSCNT_8_bit at POS1CNT.B8;
    sbit  POSCNT_8_POS1CNT_bit at POS1CNT.B8;
    const register unsigned short int POSCNT_7 = 7;
    sbit  POSCNT_7_bit at POS1CNT.B7;
    sbit  POSCNT_7_POS1CNT_bit at POS1CNT.B7;
    const register unsigned short int POSCNT_6 = 6;
    sbit  POSCNT_6_bit at POS1CNT.B6;
    sbit  POSCNT_6_POS1CNT_bit at POS1CNT.B6;
    const register unsigned short int POSCNT_5 = 5;
    sbit  POSCNT_5_bit at POS1CNT.B5;
    sbit  POSCNT_5_POS1CNT_bit at POS1CNT.B5;
    const register unsigned short int POSCNT_4 = 4;
    sbit  POSCNT_4_bit at POS1CNT.B4;
    sbit  POSCNT_4_POS1CNT_bit at POS1CNT.B4;
    const register unsigned short int POSCNT_3 = 3;
    sbit  POSCNT_3_bit at POS1CNT.B3;
    sbit  POSCNT_3_POS1CNT_bit at POS1CNT.B3;
    const register unsigned short int POSCNT_2 = 2;
    sbit  POSCNT_2_bit at POS1CNT.B2;
    sbit  POSCNT_2_POS1CNT_bit at POS1CNT.B2;
    const register unsigned short int POSCNT_1 = 1;
    sbit  POSCNT_1_bit at POS1CNT.B1;
    sbit  POSCNT_1_POS1CNT_bit at POS1CNT.B1;
    const register unsigned short int POSCNT_0 = 0;
    sbit  POSCNT_0_bit at POS1CNT.B0;
    sbit  POSCNT_0_POS1CNT_bit at POS1CNT.B0;

    // MAX1CNT bits
    const register unsigned short int MAXCNT_15 = 15;
    sbit  MAXCNT_15_bit at MAX1CNT.B15;
    sbit  MAXCNT_15_MAX1CNT_bit at MAX1CNT.B15;
    const register unsigned short int MAXCNT_14 = 14;
    sbit  MAXCNT_14_bit at MAX1CNT.B14;
    sbit  MAXCNT_14_MAX1CNT_bit at MAX1CNT.B14;
    const register unsigned short int MAXCNT_13 = 13;
    sbit  MAXCNT_13_bit at MAX1CNT.B13;
    sbit  MAXCNT_13_MAX1CNT_bit at MAX1CNT.B13;
    const register unsigned short int MAXCNT_12 = 12;
    sbit  MAXCNT_12_bit at MAX1CNT.B12;
    sbit  MAXCNT_12_MAX1CNT_bit at MAX1CNT.B12;
    const register unsigned short int MAXCNT_11 = 11;
    sbit  MAXCNT_11_bit at MAX1CNT.B11;
    sbit  MAXCNT_11_MAX1CNT_bit at MAX1CNT.B11;
    const register unsigned short int MAXCNT_10 = 10;
    sbit  MAXCNT_10_bit at MAX1CNT.B10;
    sbit  MAXCNT_10_MAX1CNT_bit at MAX1CNT.B10;
    const register unsigned short int MAXCNT_9 = 9;
    sbit  MAXCNT_9_bit at MAX1CNT.B9;
    sbit  MAXCNT_9_MAX1CNT_bit at MAX1CNT.B9;
    const register unsigned short int MAXCNT_8 = 8;
    sbit  MAXCNT_8_bit at MAX1CNT.B8;
    sbit  MAXCNT_8_MAX1CNT_bit at MAX1CNT.B8;
    const register unsigned short int MAXCNT_7 = 7;
    sbit  MAXCNT_7_bit at MAX1CNT.B7;
    sbit  MAXCNT_7_MAX1CNT_bit at MAX1CNT.B7;
    const register unsigned short int MAXCNT_6 = 6;
    sbit  MAXCNT_6_bit at MAX1CNT.B6;
    sbit  MAXCNT_6_MAX1CNT_bit at MAX1CNT.B6;
    const register unsigned short int MAXCNT_5 = 5;
    sbit  MAXCNT_5_bit at MAX1CNT.B5;
    sbit  MAXCNT_5_MAX1CNT_bit at MAX1CNT.B5;
    const register unsigned short int MAXCNT_4 = 4;
    sbit  MAXCNT_4_bit at MAX1CNT.B4;
    sbit  MAXCNT_4_MAX1CNT_bit at MAX1CNT.B4;
    const register unsigned short int MAXCNT_3 = 3;
    sbit  MAXCNT_3_bit at MAX1CNT.B3;
    sbit  MAXCNT_3_MAX1CNT_bit at MAX1CNT.B3;
    const register unsigned short int MAXCNT_2 = 2;
    sbit  MAXCNT_2_bit at MAX1CNT.B2;
    sbit  MAXCNT_2_MAX1CNT_bit at MAX1CNT.B2;
    const register unsigned short int MAXCNT_1 = 1;
    sbit  MAXCNT_1_bit at MAX1CNT.B1;
    sbit  MAXCNT_1_MAX1CNT_bit at MAX1CNT.B1;
    const register unsigned short int MAXCNT_0 = 0;
    sbit  MAXCNT_0_bit at MAX1CNT.B0;
    sbit  MAXCNT_0_MAX1CNT_bit at MAX1CNT.B0;

    // QEI2CON bits
    sbit  CNTERR_QEI2CON_bit at QEI2CON.B15;
    sbit  QEISIDL_QEI2CON_bit at QEI2CON.B13;
    sbit  INDX_QEI2CON_bit at QEI2CON.B12;
    sbit  UPDN_QEI2CON_bit at QEI2CON.B11;
    sbit  QEIM_2_QEI2CON_bit at QEI2CON.B10;
    sbit  QEIM_1_QEI2CON_bit at QEI2CON.B9;
    sbit  QEIM_0_QEI2CON_bit at QEI2CON.B8;
    sbit  SWPAB_QEI2CON_bit at QEI2CON.B7;
    sbit  PCDOUT_QEI2CON_bit at QEI2CON.B6;
    sbit  TQGATE_QEI2CON_bit at QEI2CON.B5;
    sbit  TQCKPS_1_QEI2CON_bit at QEI2CON.B4;
    sbit  TQCKPS_0_QEI2CON_bit at QEI2CON.B3;
    sbit  POSRES_QEI2CON_bit at QEI2CON.B2;
    sbit  TQCS_QEI2CON_bit at QEI2CON.B1;
    sbit  UPDN_SRC_QEI2CON_bit at QEI2CON.B0;

    // DFLT2CON bits
    sbit  IMV_1_DFLT2CON_bit at DFLT2CON.B10;
    sbit  IMV_0_DFLT2CON_bit at DFLT2CON.B9;
    sbit  CEID_DFLT2CON_bit at DFLT2CON.B8;
    sbit  QEOUT_DFLT2CON_bit at DFLT2CON.B7;
    sbit  QECK_2_DFLT2CON_bit at DFLT2CON.B6;
    sbit  QECK_1_DFLT2CON_bit at DFLT2CON.B5;
    sbit  QECK_0_DFLT2CON_bit at DFLT2CON.B4;

    // POS2CNT bits
    sbit  POSCNT_15_POS2CNT_bit at POS2CNT.B15;
    sbit  POSCNT_14_POS2CNT_bit at POS2CNT.B14;
    sbit  POSCNT_13_POS2CNT_bit at POS2CNT.B13;
    sbit  POSCNT_12_POS2CNT_bit at POS2CNT.B12;
    sbit  POSCNT_11_POS2CNT_bit at POS2CNT.B11;
    sbit  POSCNT_10_POS2CNT_bit at POS2CNT.B10;
    sbit  POSCNT_9_POS2CNT_bit at POS2CNT.B9;
    sbit  POSCNT_8_POS2CNT_bit at POS2CNT.B8;
    sbit  POSCNT_7_POS2CNT_bit at POS2CNT.B7;
    sbit  POSCNT_6_POS2CNT_bit at POS2CNT.B6;
    sbit  POSCNT_5_POS2CNT_bit at POS2CNT.B5;
    sbit  POSCNT_4_POS2CNT_bit at POS2CNT.B4;
    sbit  POSCNT_3_POS2CNT_bit at POS2CNT.B3;
    sbit  POSCNT_2_POS2CNT_bit at POS2CNT.B2;
    sbit  POSCNT_1_POS2CNT_bit at POS2CNT.B1;
    sbit  POSCNT_0_POS2CNT_bit at POS2CNT.B0;

    // MAX2CNT bits
    sbit  MAXCNT_15_MAX2CNT_bit at MAX2CNT.B15;
    sbit  MAXCNT_14_MAX2CNT_bit at MAX2CNT.B14;
    sbit  MAXCNT_13_MAX2CNT_bit at MAX2CNT.B13;
    sbit  MAXCNT_12_MAX2CNT_bit at MAX2CNT.B12;
    sbit  MAXCNT_11_MAX2CNT_bit at MAX2CNT.B11;
    sbit  MAXCNT_10_MAX2CNT_bit at MAX2CNT.B10;
    sbit  MAXCNT_9_MAX2CNT_bit at MAX2CNT.B9;
    sbit  MAXCNT_8_MAX2CNT_bit at MAX2CNT.B8;
    sbit  MAXCNT_7_MAX2CNT_bit at MAX2CNT.B7;
    sbit  MAXCNT_6_MAX2CNT_bit at MAX2CNT.B6;
    sbit  MAXCNT_5_MAX2CNT_bit at MAX2CNT.B5;
    sbit  MAXCNT_4_MAX2CNT_bit at MAX2CNT.B4;
    sbit  MAXCNT_3_MAX2CNT_bit at MAX2CNT.B3;
    sbit  MAXCNT_2_MAX2CNT_bit at MAX2CNT.B2;
    sbit  MAXCNT_1_MAX2CNT_bit at MAX2CNT.B1;
    sbit  MAXCNT_0_MAX2CNT_bit at MAX2CNT.B0;

    // I2C1RCV bits
    const register unsigned short int I2C1RCV_7 = 7;
    sbit  I2C1RCV_7_bit at I2C1RCV.B7;
    const register unsigned short int I2C1RCV_6 = 6;
    sbit  I2C1RCV_6_bit at I2C1RCV.B6;
    const register unsigned short int I2C1RCV_5 = 5;
    sbit  I2C1RCV_5_bit at I2C1RCV.B5;
    const register unsigned short int I2C1RCV_4 = 4;
    sbit  I2C1RCV_4_bit at I2C1RCV.B4;
    const register unsigned short int I2C1RCV_3 = 3;
    sbit  I2C1RCV_3_bit at I2C1RCV.B3;
    const register unsigned short int I2C1RCV_2 = 2;
    sbit  I2C1RCV_2_bit at I2C1RCV.B2;
    const register unsigned short int I2C1RCV_1 = 1;
    sbit  I2C1RCV_1_bit at I2C1RCV.B1;
    const register unsigned short int I2C1RCV_0 = 0;
    sbit  I2C1RCV_0_bit at I2C1RCV.B0;

    // I2C1TRN bits
    const register unsigned short int I2C1TRN_7 = 7;
    sbit  I2C1TRN_7_bit at I2C1TRN.B7;
    const register unsigned short int I2C1TRN_6 = 6;
    sbit  I2C1TRN_6_bit at I2C1TRN.B6;
    const register unsigned short int I2C1TRN_5 = 5;
    sbit  I2C1TRN_5_bit at I2C1TRN.B5;
    const register unsigned short int I2C1TRN_4 = 4;
    sbit  I2C1TRN_4_bit at I2C1TRN.B4;
    const register unsigned short int I2C1TRN_3 = 3;
    sbit  I2C1TRN_3_bit at I2C1TRN.B3;
    const register unsigned short int I2C1TRN_2 = 2;
    sbit  I2C1TRN_2_bit at I2C1TRN.B2;
    const register unsigned short int I2C1TRN_1 = 1;
    sbit  I2C1TRN_1_bit at I2C1TRN.B1;
    const register unsigned short int I2C1TRN_0 = 0;
    sbit  I2C1TRN_0_bit at I2C1TRN.B0;

    // I2C1BRG bits
    const register unsigned short int I2C1BRG_8 = 8;
    sbit  I2C1BRG_8_bit at I2C1BRG.B8;
    const register unsigned short int I2C1BRG_7 = 7;
    sbit  I2C1BRG_7_bit at I2C1BRG.B7;
    const register unsigned short int I2C1BRG_6 = 6;
    sbit  I2C1BRG_6_bit at I2C1BRG.B6;
    const register unsigned short int I2C1BRG_5 = 5;
    sbit  I2C1BRG_5_bit at I2C1BRG.B5;
    const register unsigned short int I2C1BRG_4 = 4;
    sbit  I2C1BRG_4_bit at I2C1BRG.B4;
    const register unsigned short int I2C1BRG_3 = 3;
    sbit  I2C1BRG_3_bit at I2C1BRG.B3;
    const register unsigned short int I2C1BRG_2 = 2;
    sbit  I2C1BRG_2_bit at I2C1BRG.B2;
    const register unsigned short int I2C1BRG_1 = 1;
    sbit  I2C1BRG_1_bit at I2C1BRG.B1;
    const register unsigned short int I2C1BRG_0 = 0;
    sbit  I2C1BRG_0_bit at I2C1BRG.B0;

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
    const register unsigned short int I2C1ADD_9 = 9;
    sbit  I2C1ADD_9_bit at I2C1ADD.B9;
    const register unsigned short int I2C1ADD_8 = 8;
    sbit  I2C1ADD_8_bit at I2C1ADD.B8;
    const register unsigned short int I2C1ADD_7 = 7;
    sbit  I2C1ADD_7_bit at I2C1ADD.B7;
    const register unsigned short int I2C1ADD_6 = 6;
    sbit  I2C1ADD_6_bit at I2C1ADD.B6;
    const register unsigned short int I2C1ADD_5 = 5;
    sbit  I2C1ADD_5_bit at I2C1ADD.B5;
    const register unsigned short int I2C1ADD_4 = 4;
    sbit  I2C1ADD_4_bit at I2C1ADD.B4;
    const register unsigned short int I2C1ADD_3 = 3;
    sbit  I2C1ADD_3_bit at I2C1ADD.B3;
    const register unsigned short int I2C1ADD_2 = 2;
    sbit  I2C1ADD_2_bit at I2C1ADD.B2;
    const register unsigned short int I2C1ADD_1 = 1;
    sbit  I2C1ADD_1_bit at I2C1ADD.B1;
    const register unsigned short int I2C1ADD_0 = 0;
    sbit  I2C1ADD_0_bit at I2C1ADD.B0;

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
    const register unsigned short int I2C2RCV_7 = 7;
    sbit  I2C2RCV_7_bit at I2C2RCV.B7;
    const register unsigned short int I2C2RCV_6 = 6;
    sbit  I2C2RCV_6_bit at I2C2RCV.B6;
    const register unsigned short int I2C2RCV_5 = 5;
    sbit  I2C2RCV_5_bit at I2C2RCV.B5;
    const register unsigned short int I2C2RCV_4 = 4;
    sbit  I2C2RCV_4_bit at I2C2RCV.B4;
    const register unsigned short int I2C2RCV_3 = 3;
    sbit  I2C2RCV_3_bit at I2C2RCV.B3;
    const register unsigned short int I2C2RCV_2 = 2;
    sbit  I2C2RCV_2_bit at I2C2RCV.B2;
    const register unsigned short int I2C2RCV_1 = 1;
    sbit  I2C2RCV_1_bit at I2C2RCV.B1;
    const register unsigned short int I2C2RCV_0 = 0;
    sbit  I2C2RCV_0_bit at I2C2RCV.B0;

    // I2C2TRN bits
    const register unsigned short int I2C2TRN_7 = 7;
    sbit  I2C2TRN_7_bit at I2C2TRN.B7;
    const register unsigned short int I2C2TRN_6 = 6;
    sbit  I2C2TRN_6_bit at I2C2TRN.B6;
    const register unsigned short int I2C2TRN_5 = 5;
    sbit  I2C2TRN_5_bit at I2C2TRN.B5;
    const register unsigned short int I2C2TRN_4 = 4;
    sbit  I2C2TRN_4_bit at I2C2TRN.B4;
    const register unsigned short int I2C2TRN_3 = 3;
    sbit  I2C2TRN_3_bit at I2C2TRN.B3;
    const register unsigned short int I2C2TRN_2 = 2;
    sbit  I2C2TRN_2_bit at I2C2TRN.B2;
    const register unsigned short int I2C2TRN_1 = 1;
    sbit  I2C2TRN_1_bit at I2C2TRN.B1;
    const register unsigned short int I2C2TRN_0 = 0;
    sbit  I2C2TRN_0_bit at I2C2TRN.B0;

    // I2C2BRG bits
    const register unsigned short int I2C2BRG_8 = 8;
    sbit  I2C2BRG_8_bit at I2C2BRG.B8;
    const register unsigned short int I2C2BRG_7 = 7;
    sbit  I2C2BRG_7_bit at I2C2BRG.B7;
    const register unsigned short int I2C2BRG_6 = 6;
    sbit  I2C2BRG_6_bit at I2C2BRG.B6;
    const register unsigned short int I2C2BRG_5 = 5;
    sbit  I2C2BRG_5_bit at I2C2BRG.B5;
    const register unsigned short int I2C2BRG_4 = 4;
    sbit  I2C2BRG_4_bit at I2C2BRG.B4;
    const register unsigned short int I2C2BRG_3 = 3;
    sbit  I2C2BRG_3_bit at I2C2BRG.B3;
    const register unsigned short int I2C2BRG_2 = 2;
    sbit  I2C2BRG_2_bit at I2C2BRG.B2;
    const register unsigned short int I2C2BRG_1 = 1;
    sbit  I2C2BRG_1_bit at I2C2BRG.B1;
    const register unsigned short int I2C2BRG_0 = 0;
    sbit  I2C2BRG_0_bit at I2C2BRG.B0;

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
    const register unsigned short int I2C2ADD_9 = 9;
    sbit  I2C2ADD_9_bit at I2C2ADD.B9;
    const register unsigned short int I2C2ADD_8 = 8;
    sbit  I2C2ADD_8_bit at I2C2ADD.B8;
    const register unsigned short int I2C2ADD_7 = 7;
    sbit  I2C2ADD_7_bit at I2C2ADD.B7;
    const register unsigned short int I2C2ADD_6 = 6;
    sbit  I2C2ADD_6_bit at I2C2ADD.B6;
    const register unsigned short int I2C2ADD_5 = 5;
    sbit  I2C2ADD_5_bit at I2C2ADD.B5;
    const register unsigned short int I2C2ADD_4 = 4;
    sbit  I2C2ADD_4_bit at I2C2ADD.B4;
    const register unsigned short int I2C2ADD_3 = 3;
    sbit  I2C2ADD_3_bit at I2C2ADD.B3;
    const register unsigned short int I2C2ADD_2 = 2;
    sbit  I2C2ADD_2_bit at I2C2ADD.B2;
    const register unsigned short int I2C2ADD_1 = 1;
    sbit  I2C2ADD_1_bit at I2C2ADD.B1;
    const register unsigned short int I2C2ADD_0 = 0;
    sbit  I2C2ADD_0_bit at I2C2ADD.B0;

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
    const register unsigned short int SPIROV = 6;
    sbit  SPIROV_bit at SPI1STAT.B6;
    sbit  SPIROV_SPI1STAT_bit at SPI1STAT.B6;
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
    const register unsigned short int FRMPOL = 13;
    sbit  FRMPOL_bit at SPI1CON2.B13;
    sbit  FRMPOL_SPI1CON2_bit at SPI1CON2.B13;
    const register unsigned short int FRMDLY = 1;
    sbit  FRMDLY_bit at SPI1CON2.B1;
    sbit  FRMDLY_SPI1CON2_bit at SPI1CON2.B1;

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

    // SPI2STAT bits
    sbit  SPIEN_SPI2STAT_bit at SPI2STAT.B15;
    sbit  SPISIDL_SPI2STAT_bit at SPI2STAT.B13;
    sbit  SPIROV_SPI2STAT_bit at SPI2STAT.B6;
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
    sbit  FRMPOL_SPI2CON2_bit at SPI2CON2.B13;
    sbit  FRMDLY_SPI2CON2_bit at SPI2CON2.B1;

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

    // TRISC bits
    const register unsigned short int TRISC15 = 15;
    sbit  TRISC15_bit at TRISC.B15;
    const register unsigned short int TRISC14 = 14;
    sbit  TRISC14_bit at TRISC.B14;
    const register unsigned short int TRISC13 = 13;
    sbit  TRISC13_bit at TRISC.B13;
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
    const register unsigned short int ODCD11 = 11;
    sbit  ODCD11_bit at ODCD.B11;
    const register unsigned short int ODCD10 = 10;
    sbit  ODCD10_bit at ODCD.B10;
    const register unsigned short int ODCD9 = 9;
    sbit  ODCD9_bit at ODCD.B9;
    const register unsigned short int ODCD8 = 8;
    sbit  ODCD8_bit at ODCD.B8;
    const register unsigned short int ODCD7 = 7;
    sbit  ODCD7_bit at ODCD.B7;
    const register unsigned short int ODCD6 = 6;
    sbit  ODCD6_bit at ODCD.B6;
    const register unsigned short int ODCD5 = 5;
    sbit  ODCD5_bit at ODCD.B5;
    const register unsigned short int ODCD4 = 4;
    sbit  ODCD4_bit at ODCD.B4;
    const register unsigned short int ODCD3 = 3;
    sbit  ODCD3_bit at ODCD.B3;
    const register unsigned short int ODCD2 = 2;
    sbit  ODCD2_bit at ODCD.B2;
    const register unsigned short int ODCD1 = 1;
    sbit  ODCD1_bit at ODCD.B1;
    const register unsigned short int ODCD0 = 0;
    sbit  ODCD0_bit at ODCD.B0;

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
    const register unsigned short int ODCE7 = 7;
    sbit  ODCE7_bit at ODCE.B7;
    const register unsigned short int ODCE6 = 6;
    sbit  ODCE6_bit at ODCE.B6;
    const register unsigned short int ODCE5 = 5;
    sbit  ODCE5_bit at ODCE.B5;
    const register unsigned short int ODCE4 = 4;
    sbit  ODCE4_bit at ODCE.B4;
    const register unsigned short int ODCE3 = 3;
    sbit  ODCE3_bit at ODCE.B3;
    const register unsigned short int ODCE2 = 2;
    sbit  ODCE2_bit at ODCE.B2;
    const register unsigned short int ODCE1 = 1;
    sbit  ODCE1_bit at ODCE.B1;
    const register unsigned short int ODCE0 = 0;
    sbit  ODCE0_bit at ODCE.B0;

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
    const register unsigned short int ODCF6 = 6;
    sbit  ODCF6_bit at ODCF.B6;
    const register unsigned short int ODCF3 = 3;
    sbit  ODCF3_bit at ODCF.B3;
    const register unsigned short int ODCF2 = 2;
    sbit  ODCF2_bit at ODCF.B2;
    const register unsigned short int ODCF1 = 1;
    sbit  ODCF1_bit at ODCF.B1;

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
    const register unsigned short int ODCG9 = 9;
    sbit  ODCG9_bit at ODCG.B9;
    const register unsigned short int ODCG8 = 8;
    sbit  ODCG8_bit at ODCG.B8;
    const register unsigned short int ODCG7 = 7;
    sbit  ODCG7_bit at ODCG.B7;
    const register unsigned short int ODCG6 = 6;
    sbit  ODCG6_bit at ODCG.B6;
    const register unsigned short int ODCG3 = 3;
    sbit  ODCG3_bit at ODCG.B3;
    const register unsigned short int ODCG2 = 2;
    sbit  ODCG2_bit at ODCG.B2;

    // ADCON bits
    const register unsigned short int ADON = 15;
    sbit  ADON_bit at ADCON.B15;
    const register unsigned short int ADSIDL = 13;
    sbit  ADSIDL_bit at ADCON.B13;
    const register unsigned short int SLOWCLK = 12;
    sbit  SLOWCLK_bit at ADCON.B12;
    const register unsigned short int GSWTRG = 10;
    sbit  GSWTRG_bit at ADCON.B10;
    const register unsigned short int FORM_ = 8;
    sbit  FORM_bit at ADCON.B8;
    const register unsigned short int EIE = 7;
    sbit  EIE_bit at ADCON.B7;
    const register unsigned short int ORDER = 6;
    sbit  ORDER_bit at ADCON.B6;
    const register unsigned short int SEQSAMP = 5;
    sbit  SEQSAMP_bit at ADCON.B5;
    const register unsigned short int ASYNCSAMP = 4;
    sbit  ASYNCSAMP_bit at ADCON.B4;
    const register unsigned short int ADCS_2 = 2;
    sbit  ADCS_2_bit at ADCON.B2;
    const register unsigned short int ADCS_1 = 1;
    sbit  ADCS_1_bit at ADCON.B1;
    const register unsigned short int ADCS_0 = 0;
    sbit  ADCS_0_bit at ADCON.B0;

    // ADPCFG bits
    const register unsigned short int PCFG15 = 15;
    sbit  PCFG15_bit at ADPCFG.B15;
    const register unsigned short int PCFG14 = 14;
    sbit  PCFG14_bit at ADPCFG.B14;
    const register unsigned short int PCFG13 = 13;
    sbit  PCFG13_bit at ADPCFG.B13;
    const register unsigned short int PCFG12 = 12;
    sbit  PCFG12_bit at ADPCFG.B12;
    const register unsigned short int PCFG11 = 11;
    sbit  PCFG11_bit at ADPCFG.B11;
    const register unsigned short int PCFG10 = 10;
    sbit  PCFG10_bit at ADPCFG.B10;
    const register unsigned short int PCFG9 = 9;
    sbit  PCFG9_bit at ADPCFG.B9;
    const register unsigned short int PCFG8 = 8;
    sbit  PCFG8_bit at ADPCFG.B8;
    const register unsigned short int PCFG7 = 7;
    sbit  PCFG7_bit at ADPCFG.B7;
    const register unsigned short int PCFG6 = 6;
    sbit  PCFG6_bit at ADPCFG.B6;
    const register unsigned short int PCFG5 = 5;
    sbit  PCFG5_bit at ADPCFG.B5;
    const register unsigned short int PCFG4 = 4;
    sbit  PCFG4_bit at ADPCFG.B4;
    const register unsigned short int PCFG3 = 3;
    sbit  PCFG3_bit at ADPCFG.B3;
    const register unsigned short int PCFG2 = 2;
    sbit  PCFG2_bit at ADPCFG.B2;
    const register unsigned short int PCFG1 = 1;
    sbit  PCFG1_bit at ADPCFG.B1;
    const register unsigned short int PCFG0 = 0;
    sbit  PCFG0_bit at ADPCFG.B0;

    // ADSTAT bits
    const register unsigned short int P12RDY = 12;
    sbit  P12RDY_bit at ADSTAT.B12;
    const register unsigned short int P7RDY = 7;
    sbit  P7RDY_bit at ADSTAT.B7;
    const register unsigned short int P6RDY = 6;
    sbit  P6RDY_bit at ADSTAT.B6;
    const register unsigned short int P5RDY = 5;
    sbit  P5RDY_bit at ADSTAT.B5;
    const register unsigned short int P4RDY = 4;
    sbit  P4RDY_bit at ADSTAT.B4;
    const register unsigned short int P3RDY = 3;
    sbit  P3RDY_bit at ADSTAT.B3;
    const register unsigned short int P2RDY = 2;
    sbit  P2RDY_bit at ADSTAT.B2;
    const register unsigned short int P1RDY = 1;
    sbit  P1RDY_bit at ADSTAT.B1;
    const register unsigned short int P0RDY = 0;
    sbit  P0RDY_bit at ADSTAT.B0;

    // ADBASE bits
    const register unsigned short int ADBASE_14 = 15;
    sbit  ADBASE_14_bit at ADBASE.B15;
    const register unsigned short int ADBASE_13 = 14;
    sbit  ADBASE_13_bit at ADBASE.B14;
    const register unsigned short int ADBASE_12 = 13;
    sbit  ADBASE_12_bit at ADBASE.B13;
    const register unsigned short int ADBASE_11 = 12;
    sbit  ADBASE_11_bit at ADBASE.B12;
    const register unsigned short int ADBASE_10 = 11;
    sbit  ADBASE_10_bit at ADBASE.B11;
    const register unsigned short int ADBASE_9 = 10;
    sbit  ADBASE_9_bit at ADBASE.B10;
    const register unsigned short int ADBASE_8 = 9;
    sbit  ADBASE_8_bit at ADBASE.B9;
    const register unsigned short int ADBASE_7 = 8;
    sbit  ADBASE_7_bit at ADBASE.B8;
    const register unsigned short int ADBASE_6 = 7;
    sbit  ADBASE_6_bit at ADBASE.B7;
    const register unsigned short int ADBASE_5 = 6;
    sbit  ADBASE_5_bit at ADBASE.B6;
    const register unsigned short int ADBASE_4 = 5;
    sbit  ADBASE_4_bit at ADBASE.B5;
    const register unsigned short int ADBASE_3 = 4;
    sbit  ADBASE_3_bit at ADBASE.B4;
    const register unsigned short int ADBASE_2 = 3;
    sbit  ADBASE_2_bit at ADBASE.B3;
    const register unsigned short int ADBASE_1 = 2;
    sbit  ADBASE_1_bit at ADBASE.B2;
    const register unsigned short int ADBASE_0 = 1;
    sbit  ADBASE_0_bit at ADBASE.B1;

    // ADCPC0 bits
    const register unsigned short int IRQEN1 = 15;
    sbit  IRQEN1_bit at ADCPC0.B15;
    const register unsigned short int PEND1 = 14;
    sbit  PEND1_bit at ADCPC0.B14;
    const register unsigned short int SWTRG1 = 13;
    sbit  SWTRG1_bit at ADCPC0.B13;
    const register unsigned short int TRGSRC1_4 = 12;
    sbit  TRGSRC1_4_bit at ADCPC0.B12;
    const register unsigned short int TRGSRC1_3 = 11;
    sbit  TRGSRC1_3_bit at ADCPC0.B11;
    const register unsigned short int TRGSRC1_2 = 10;
    sbit  TRGSRC1_2_bit at ADCPC0.B10;
    const register unsigned short int TRGSRC1_1 = 9;
    sbit  TRGSRC1_1_bit at ADCPC0.B9;
    const register unsigned short int TRGSRC1_0 = 8;
    sbit  TRGSRC1_0_bit at ADCPC0.B8;
    const register unsigned short int IRQEN0 = 7;
    sbit  IRQEN0_bit at ADCPC0.B7;
    const register unsigned short int PEND0 = 6;
    sbit  PEND0_bit at ADCPC0.B6;
    const register unsigned short int SWTRG0 = 5;
    sbit  SWTRG0_bit at ADCPC0.B5;
    const register unsigned short int TRGSRC0_4 = 4;
    sbit  TRGSRC0_4_bit at ADCPC0.B4;
    const register unsigned short int TRGSRC0_3 = 3;
    sbit  TRGSRC0_3_bit at ADCPC0.B3;
    const register unsigned short int TRGSRC0_2 = 2;
    sbit  TRGSRC0_2_bit at ADCPC0.B2;
    const register unsigned short int TRGSRC0_1 = 1;
    sbit  TRGSRC0_1_bit at ADCPC0.B1;
    const register unsigned short int TRGSRC0_0 = 0;
    sbit  TRGSRC0_0_bit at ADCPC0.B0;

    // ADCPC1 bits
    const register unsigned short int IRQEN3 = 15;
    sbit  IRQEN3_bit at ADCPC1.B15;
    const register unsigned short int PEND3 = 14;
    sbit  PEND3_bit at ADCPC1.B14;
    const register unsigned short int SWTRG3 = 13;
    sbit  SWTRG3_bit at ADCPC1.B13;
    const register unsigned short int TRGSRC3_4 = 12;
    sbit  TRGSRC3_4_bit at ADCPC1.B12;
    const register unsigned short int TRGSRC3_3 = 11;
    sbit  TRGSRC3_3_bit at ADCPC1.B11;
    const register unsigned short int TRGSRC3_2 = 10;
    sbit  TRGSRC3_2_bit at ADCPC1.B10;
    const register unsigned short int TRGSRC3_1 = 9;
    sbit  TRGSRC3_1_bit at ADCPC1.B9;
    const register unsigned short int TRGSRC3_0 = 8;
    sbit  TRGSRC3_0_bit at ADCPC1.B8;
    const register unsigned short int IRQEN2 = 7;
    sbit  IRQEN2_bit at ADCPC1.B7;
    const register unsigned short int PEND2 = 6;
    sbit  PEND2_bit at ADCPC1.B6;
    const register unsigned short int SWTRG2 = 5;
    sbit  SWTRG2_bit at ADCPC1.B5;
    const register unsigned short int TRGSRC2_4 = 4;
    sbit  TRGSRC2_4_bit at ADCPC1.B4;
    const register unsigned short int TRGSRC2_3 = 3;
    sbit  TRGSRC2_3_bit at ADCPC1.B3;
    const register unsigned short int TRGSRC2_2 = 2;
    sbit  TRGSRC2_2_bit at ADCPC1.B2;
    const register unsigned short int TRGSRC2_1 = 1;
    sbit  TRGSRC2_1_bit at ADCPC1.B1;
    const register unsigned short int TRGSRC2_0 = 0;
    sbit  TRGSRC2_0_bit at ADCPC1.B0;

    // ADCPC2 bits
    const register unsigned short int IRQEN5 = 15;
    sbit  IRQEN5_bit at ADCPC2.B15;
    sbit  IRQEN5_ADCPC2_bit at ADCPC2.B15;
    const register unsigned short int PEND5 = 14;
    sbit  PEND5_bit at ADCPC2.B14;
    sbit  PEND5_ADCPC2_bit at ADCPC2.B14;
    const register unsigned short int SWTRG5 = 13;
    sbit  SWTRG5_bit at ADCPC2.B13;
    sbit  SWTRG5_ADCPC2_bit at ADCPC2.B13;
    const register unsigned short int TRGSRC5_4 = 12;
    sbit  TRGSRC5_4_bit at ADCPC2.B12;
    sbit  TRGSRC5_4_ADCPC2_bit at ADCPC2.B12;
    const register unsigned short int TRGSRC5_3 = 11;
    sbit  TRGSRC5_3_bit at ADCPC2.B11;
    sbit  TRGSRC5_3_ADCPC2_bit at ADCPC2.B11;
    const register unsigned short int TRGSRC5_2 = 10;
    sbit  TRGSRC5_2_bit at ADCPC2.B10;
    sbit  TRGSRC5_2_ADCPC2_bit at ADCPC2.B10;
    const register unsigned short int TRGSRC5_1 = 9;
    sbit  TRGSRC5_1_bit at ADCPC2.B9;
    sbit  TRGSRC5_1_ADCPC2_bit at ADCPC2.B9;
    const register unsigned short int TRGSRC5_0 = 8;
    sbit  TRGSRC5_0_bit at ADCPC2.B8;
    sbit  TRGSRC5_0_ADCPC2_bit at ADCPC2.B8;
    const register unsigned short int IRQEN4 = 7;
    sbit  IRQEN4_bit at ADCPC2.B7;
    sbit  IRQEN4_ADCPC2_bit at ADCPC2.B7;
    const register unsigned short int PEND4 = 6;
    sbit  PEND4_bit at ADCPC2.B6;
    sbit  PEND4_ADCPC2_bit at ADCPC2.B6;
    const register unsigned short int SWTRG4 = 5;
    sbit  SWTRG4_bit at ADCPC2.B5;
    sbit  SWTRG4_ADCPC2_bit at ADCPC2.B5;
    const register unsigned short int TRGSRC4_4 = 4;
    sbit  TRGSRC4_4_bit at ADCPC2.B4;
    sbit  TRGSRC4_4_ADCPC2_bit at ADCPC2.B4;
    const register unsigned short int TRGSRC4_3 = 3;
    sbit  TRGSRC4_3_bit at ADCPC2.B3;
    sbit  TRGSRC4_3_ADCPC2_bit at ADCPC2.B3;
    const register unsigned short int TRGSRC4_2 = 2;
    sbit  TRGSRC4_2_bit at ADCPC2.B2;
    sbit  TRGSRC4_2_ADCPC2_bit at ADCPC2.B2;
    const register unsigned short int TRGSRC4_1 = 1;
    sbit  TRGSRC4_1_bit at ADCPC2.B1;
    sbit  TRGSRC4_1_ADCPC2_bit at ADCPC2.B1;
    const register unsigned short int TRGSRC4_0 = 0;
    sbit  TRGSRC4_0_bit at ADCPC2.B0;
    sbit  TRGSRC4_0_ADCPC2_bit at ADCPC2.B0;

    // ADCPC3 bits
    sbit  IRQEN5_ADCPC3_bit at ADCPC3.B15;
    sbit  PEND5_ADCPC3_bit at ADCPC3.B14;
    sbit  SWTRG5_ADCPC3_bit at ADCPC3.B13;
    sbit  TRGSRC5_4_ADCPC3_bit at ADCPC3.B12;
    sbit  TRGSRC5_3_ADCPC3_bit at ADCPC3.B11;
    sbit  TRGSRC5_2_ADCPC3_bit at ADCPC3.B10;
    sbit  TRGSRC5_1_ADCPC3_bit at ADCPC3.B9;
    sbit  TRGSRC5_0_ADCPC3_bit at ADCPC3.B8;
    sbit  IRQEN4_ADCPC3_bit at ADCPC3.B7;
    sbit  PEND4_ADCPC3_bit at ADCPC3.B6;
    sbit  SWTRG4_ADCPC3_bit at ADCPC3.B5;
    sbit  TRGSRC4_4_ADCPC3_bit at ADCPC3.B4;
    sbit  TRGSRC4_3_ADCPC3_bit at ADCPC3.B3;
    sbit  TRGSRC4_2_ADCPC3_bit at ADCPC3.B2;
    sbit  TRGSRC4_1_ADCPC3_bit at ADCPC3.B1;
    sbit  TRGSRC4_0_ADCPC3_bit at ADCPC3.B0;

    // ADCPC6 bits
    const register unsigned short int IRQEN6 = 7;
    sbit  IRQEN6_bit at ADCPC6.B7;
    const register unsigned short int PEND6 = 6;
    sbit  PEND6_bit at ADCPC6.B6;
    const register unsigned short int SWTRG6 = 5;
    sbit  SWTRG6_bit at ADCPC6.B5;
    const register unsigned short int TRGSRC6_4 = 4;
    sbit  TRGSRC6_4_bit at ADCPC6.B4;
    const register unsigned short int TRGSRC6_3 = 3;
    sbit  TRGSRC6_3_bit at ADCPC6.B3;
    const register unsigned short int TRGSRC6_2 = 2;
    sbit  TRGSRC6_2_bit at ADCPC6.B2;
    const register unsigned short int TRGSRC6_1 = 1;
    sbit  TRGSRC6_1_bit at ADCPC6.B1;
    const register unsigned short int TRGSRC6_0 = 0;
    sbit  TRGSRC6_0_bit at ADCPC6.B0;

    // ADCBUF0 bits
    const register unsigned short int ADCBUF0_15 = 15;
    sbit  ADCBUF0_15_bit at ADCBUF0.B15;
    const register unsigned short int ADCBUF0_14 = 14;
    sbit  ADCBUF0_14_bit at ADCBUF0.B14;
    const register unsigned short int ADCBUF0_13 = 13;
    sbit  ADCBUF0_13_bit at ADCBUF0.B13;
    const register unsigned short int ADCBUF0_12 = 12;
    sbit  ADCBUF0_12_bit at ADCBUF0.B12;
    const register unsigned short int ADCBUF0_11 = 11;
    sbit  ADCBUF0_11_bit at ADCBUF0.B11;
    const register unsigned short int ADCBUF0_10 = 10;
    sbit  ADCBUF0_10_bit at ADCBUF0.B10;
    const register unsigned short int ADCBUF0_9 = 9;
    sbit  ADCBUF0_9_bit at ADCBUF0.B9;
    const register unsigned short int ADCBUF0_8 = 8;
    sbit  ADCBUF0_8_bit at ADCBUF0.B8;
    const register unsigned short int ADCBUF0_7 = 7;
    sbit  ADCBUF0_7_bit at ADCBUF0.B7;
    const register unsigned short int ADCBUF0_6 = 6;
    sbit  ADCBUF0_6_bit at ADCBUF0.B6;
    const register unsigned short int ADCBUF0_5 = 5;
    sbit  ADCBUF0_5_bit at ADCBUF0.B5;
    const register unsigned short int ADCBUF0_4 = 4;
    sbit  ADCBUF0_4_bit at ADCBUF0.B4;
    const register unsigned short int ADCBUF0_3 = 3;
    sbit  ADCBUF0_3_bit at ADCBUF0.B3;
    const register unsigned short int ADCBUF0_2 = 2;
    sbit  ADCBUF0_2_bit at ADCBUF0.B2;
    const register unsigned short int ADCBUF0_1 = 1;
    sbit  ADCBUF0_1_bit at ADCBUF0.B1;
    const register unsigned short int ADCBUF0_0 = 0;
    sbit  ADCBUF0_0_bit at ADCBUF0.B0;

    // ADCBUF1 bits
    const register unsigned short int ADCBUF1_15 = 15;
    sbit  ADCBUF1_15_bit at ADCBUF1.B15;
    const register unsigned short int ADCBUF1_14 = 14;
    sbit  ADCBUF1_14_bit at ADCBUF1.B14;
    const register unsigned short int ADCBUF1_13 = 13;
    sbit  ADCBUF1_13_bit at ADCBUF1.B13;
    const register unsigned short int ADCBUF1_12 = 12;
    sbit  ADCBUF1_12_bit at ADCBUF1.B12;
    const register unsigned short int ADCBUF1_11 = 11;
    sbit  ADCBUF1_11_bit at ADCBUF1.B11;
    const register unsigned short int ADCBUF1_10 = 10;
    sbit  ADCBUF1_10_bit at ADCBUF1.B10;
    const register unsigned short int ADCBUF1_9 = 9;
    sbit  ADCBUF1_9_bit at ADCBUF1.B9;
    const register unsigned short int ADCBUF1_8 = 8;
    sbit  ADCBUF1_8_bit at ADCBUF1.B8;
    const register unsigned short int ADCBUF1_7 = 7;
    sbit  ADCBUF1_7_bit at ADCBUF1.B7;
    const register unsigned short int ADCBUF1_6 = 6;
    sbit  ADCBUF1_6_bit at ADCBUF1.B6;
    const register unsigned short int ADCBUF1_5 = 5;
    sbit  ADCBUF1_5_bit at ADCBUF1.B5;
    const register unsigned short int ADCBUF1_4 = 4;
    sbit  ADCBUF1_4_bit at ADCBUF1.B4;
    const register unsigned short int ADCBUF1_3 = 3;
    sbit  ADCBUF1_3_bit at ADCBUF1.B3;
    const register unsigned short int ADCBUF1_2 = 2;
    sbit  ADCBUF1_2_bit at ADCBUF1.B2;
    const register unsigned short int ADCBUF1_1 = 1;
    sbit  ADCBUF1_1_bit at ADCBUF1.B1;
    const register unsigned short int ADCBUF1_0 = 0;
    sbit  ADCBUF1_0_bit at ADCBUF1.B0;

    // ADCBUF2 bits
    const register unsigned short int ADCBUF2_15 = 15;
    sbit  ADCBUF2_15_bit at ADCBUF2.B15;
    const register unsigned short int ADCBUF2_14 = 14;
    sbit  ADCBUF2_14_bit at ADCBUF2.B14;
    const register unsigned short int ADCBUF2_13 = 13;
    sbit  ADCBUF2_13_bit at ADCBUF2.B13;
    const register unsigned short int ADCBUF2_12 = 12;
    sbit  ADCBUF2_12_bit at ADCBUF2.B12;
    const register unsigned short int ADCBUF2_11 = 11;
    sbit  ADCBUF2_11_bit at ADCBUF2.B11;
    const register unsigned short int ADCBUF2_10 = 10;
    sbit  ADCBUF2_10_bit at ADCBUF2.B10;
    const register unsigned short int ADCBUF2_9 = 9;
    sbit  ADCBUF2_9_bit at ADCBUF2.B9;
    const register unsigned short int ADCBUF2_8 = 8;
    sbit  ADCBUF2_8_bit at ADCBUF2.B8;
    const register unsigned short int ADCBUF2_7 = 7;
    sbit  ADCBUF2_7_bit at ADCBUF2.B7;
    const register unsigned short int ADCBUF2_6 = 6;
    sbit  ADCBUF2_6_bit at ADCBUF2.B6;
    const register unsigned short int ADCBUF2_5 = 5;
    sbit  ADCBUF2_5_bit at ADCBUF2.B5;
    const register unsigned short int ADCBUF2_4 = 4;
    sbit  ADCBUF2_4_bit at ADCBUF2.B4;
    const register unsigned short int ADCBUF2_3 = 3;
    sbit  ADCBUF2_3_bit at ADCBUF2.B3;
    const register unsigned short int ADCBUF2_2 = 2;
    sbit  ADCBUF2_2_bit at ADCBUF2.B2;
    const register unsigned short int ADCBUF2_1 = 1;
    sbit  ADCBUF2_1_bit at ADCBUF2.B1;
    const register unsigned short int ADCBUF2_0 = 0;
    sbit  ADCBUF2_0_bit at ADCBUF2.B0;

    // ADCBUF3 bits
    const register unsigned short int ADCBUF3_15 = 15;
    sbit  ADCBUF3_15_bit at ADCBUF3.B15;
    const register unsigned short int ADCBUF3_14 = 14;
    sbit  ADCBUF3_14_bit at ADCBUF3.B14;
    const register unsigned short int ADCBUF3_13 = 13;
    sbit  ADCBUF3_13_bit at ADCBUF3.B13;
    const register unsigned short int ADCBUF3_12 = 12;
    sbit  ADCBUF3_12_bit at ADCBUF3.B12;
    const register unsigned short int ADCBUF3_11 = 11;
    sbit  ADCBUF3_11_bit at ADCBUF3.B11;
    const register unsigned short int ADCBUF3_10 = 10;
    sbit  ADCBUF3_10_bit at ADCBUF3.B10;
    const register unsigned short int ADCBUF3_9 = 9;
    sbit  ADCBUF3_9_bit at ADCBUF3.B9;
    const register unsigned short int ADCBUF3_8 = 8;
    sbit  ADCBUF3_8_bit at ADCBUF3.B8;
    const register unsigned short int ADCBUF3_7 = 7;
    sbit  ADCBUF3_7_bit at ADCBUF3.B7;
    const register unsigned short int ADCBUF3_6 = 6;
    sbit  ADCBUF3_6_bit at ADCBUF3.B6;
    const register unsigned short int ADCBUF3_5 = 5;
    sbit  ADCBUF3_5_bit at ADCBUF3.B5;
    const register unsigned short int ADCBUF3_4 = 4;
    sbit  ADCBUF3_4_bit at ADCBUF3.B4;
    const register unsigned short int ADCBUF3_3 = 3;
    sbit  ADCBUF3_3_bit at ADCBUF3.B3;
    const register unsigned short int ADCBUF3_2 = 2;
    sbit  ADCBUF3_2_bit at ADCBUF3.B2;
    const register unsigned short int ADCBUF3_1 = 1;
    sbit  ADCBUF3_1_bit at ADCBUF3.B1;
    const register unsigned short int ADCBUF3_0 = 0;
    sbit  ADCBUF3_0_bit at ADCBUF3.B0;

    // ADCBUF4 bits
    const register unsigned short int ADCBUF4_15 = 15;
    sbit  ADCBUF4_15_bit at ADCBUF4.B15;
    const register unsigned short int ADCBUF4_14 = 14;
    sbit  ADCBUF4_14_bit at ADCBUF4.B14;
    const register unsigned short int ADCBUF4_13 = 13;
    sbit  ADCBUF4_13_bit at ADCBUF4.B13;
    const register unsigned short int ADCBUF4_12 = 12;
    sbit  ADCBUF4_12_bit at ADCBUF4.B12;
    const register unsigned short int ADCBUF4_11 = 11;
    sbit  ADCBUF4_11_bit at ADCBUF4.B11;
    const register unsigned short int ADCBUF4_10 = 10;
    sbit  ADCBUF4_10_bit at ADCBUF4.B10;
    const register unsigned short int ADCBUF4_9 = 9;
    sbit  ADCBUF4_9_bit at ADCBUF4.B9;
    const register unsigned short int ADCBUF4_8 = 8;
    sbit  ADCBUF4_8_bit at ADCBUF4.B8;
    const register unsigned short int ADCBUF4_7 = 7;
    sbit  ADCBUF4_7_bit at ADCBUF4.B7;
    const register unsigned short int ADCBUF4_6 = 6;
    sbit  ADCBUF4_6_bit at ADCBUF4.B6;
    const register unsigned short int ADCBUF4_5 = 5;
    sbit  ADCBUF4_5_bit at ADCBUF4.B5;
    const register unsigned short int ADCBUF4_4 = 4;
    sbit  ADCBUF4_4_bit at ADCBUF4.B4;
    const register unsigned short int ADCBUF4_3 = 3;
    sbit  ADCBUF4_3_bit at ADCBUF4.B3;
    const register unsigned short int ADCBUF4_2 = 2;
    sbit  ADCBUF4_2_bit at ADCBUF4.B2;
    const register unsigned short int ADCBUF4_1 = 1;
    sbit  ADCBUF4_1_bit at ADCBUF4.B1;
    const register unsigned short int ADCBUF4_0 = 0;
    sbit  ADCBUF4_0_bit at ADCBUF4.B0;

    // ADCBUF5 bits
    const register unsigned short int ADCBUF5_15 = 15;
    sbit  ADCBUF5_15_bit at ADCBUF5.B15;
    const register unsigned short int ADCBUF5_14 = 14;
    sbit  ADCBUF5_14_bit at ADCBUF5.B14;
    const register unsigned short int ADCBUF5_13 = 13;
    sbit  ADCBUF5_13_bit at ADCBUF5.B13;
    const register unsigned short int ADCBUF5_12 = 12;
    sbit  ADCBUF5_12_bit at ADCBUF5.B12;
    const register unsigned short int ADCBUF5_11 = 11;
    sbit  ADCBUF5_11_bit at ADCBUF5.B11;
    const register unsigned short int ADCBUF5_10 = 10;
    sbit  ADCBUF5_10_bit at ADCBUF5.B10;
    const register unsigned short int ADCBUF5_9 = 9;
    sbit  ADCBUF5_9_bit at ADCBUF5.B9;
    const register unsigned short int ADCBUF5_8 = 8;
    sbit  ADCBUF5_8_bit at ADCBUF5.B8;
    const register unsigned short int ADCBUF5_7 = 7;
    sbit  ADCBUF5_7_bit at ADCBUF5.B7;
    const register unsigned short int ADCBUF5_6 = 6;
    sbit  ADCBUF5_6_bit at ADCBUF5.B6;
    const register unsigned short int ADCBUF5_5 = 5;
    sbit  ADCBUF5_5_bit at ADCBUF5.B5;
    const register unsigned short int ADCBUF5_4 = 4;
    sbit  ADCBUF5_4_bit at ADCBUF5.B4;
    const register unsigned short int ADCBUF5_3 = 3;
    sbit  ADCBUF5_3_bit at ADCBUF5.B3;
    const register unsigned short int ADCBUF5_2 = 2;
    sbit  ADCBUF5_2_bit at ADCBUF5.B2;
    const register unsigned short int ADCBUF5_1 = 1;
    sbit  ADCBUF5_1_bit at ADCBUF5.B1;
    const register unsigned short int ADCBUF5_0 = 0;
    sbit  ADCBUF5_0_bit at ADCBUF5.B0;

    // ADCBUF6 bits
    const register unsigned short int ADCBUF6_15 = 15;
    sbit  ADCBUF6_15_bit at ADCBUF6.B15;
    const register unsigned short int ADCBUF6_14 = 14;
    sbit  ADCBUF6_14_bit at ADCBUF6.B14;
    const register unsigned short int ADCBUF6_13 = 13;
    sbit  ADCBUF6_13_bit at ADCBUF6.B13;
    const register unsigned short int ADCBUF6_12 = 12;
    sbit  ADCBUF6_12_bit at ADCBUF6.B12;
    const register unsigned short int ADCBUF6_11 = 11;
    sbit  ADCBUF6_11_bit at ADCBUF6.B11;
    const register unsigned short int ADCBUF6_10 = 10;
    sbit  ADCBUF6_10_bit at ADCBUF6.B10;
    const register unsigned short int ADCBUF6_9 = 9;
    sbit  ADCBUF6_9_bit at ADCBUF6.B9;
    const register unsigned short int ADCBUF6_8 = 8;
    sbit  ADCBUF6_8_bit at ADCBUF6.B8;
    const register unsigned short int ADCBUF6_7 = 7;
    sbit  ADCBUF6_7_bit at ADCBUF6.B7;
    const register unsigned short int ADCBUF6_6 = 6;
    sbit  ADCBUF6_6_bit at ADCBUF6.B6;
    const register unsigned short int ADCBUF6_5 = 5;
    sbit  ADCBUF6_5_bit at ADCBUF6.B5;
    const register unsigned short int ADCBUF6_4 = 4;
    sbit  ADCBUF6_4_bit at ADCBUF6.B4;
    const register unsigned short int ADCBUF6_3 = 3;
    sbit  ADCBUF6_3_bit at ADCBUF6.B3;
    const register unsigned short int ADCBUF6_2 = 2;
    sbit  ADCBUF6_2_bit at ADCBUF6.B2;
    const register unsigned short int ADCBUF6_1 = 1;
    sbit  ADCBUF6_1_bit at ADCBUF6.B1;
    const register unsigned short int ADCBUF6_0 = 0;
    sbit  ADCBUF6_0_bit at ADCBUF6.B0;

    // ADCBUF7 bits
    const register unsigned short int ADCBUF7_15 = 15;
    sbit  ADCBUF7_15_bit at ADCBUF7.B15;
    const register unsigned short int ADCBUF7_14 = 14;
    sbit  ADCBUF7_14_bit at ADCBUF7.B14;
    const register unsigned short int ADCBUF7_13 = 13;
    sbit  ADCBUF7_13_bit at ADCBUF7.B13;
    const register unsigned short int ADCBUF7_12 = 12;
    sbit  ADCBUF7_12_bit at ADCBUF7.B12;
    const register unsigned short int ADCBUF7_11 = 11;
    sbit  ADCBUF7_11_bit at ADCBUF7.B11;
    const register unsigned short int ADCBUF7_10 = 10;
    sbit  ADCBUF7_10_bit at ADCBUF7.B10;
    const register unsigned short int ADCBUF7_9 = 9;
    sbit  ADCBUF7_9_bit at ADCBUF7.B9;
    const register unsigned short int ADCBUF7_8 = 8;
    sbit  ADCBUF7_8_bit at ADCBUF7.B8;
    const register unsigned short int ADCBUF7_7 = 7;
    sbit  ADCBUF7_7_bit at ADCBUF7.B7;
    const register unsigned short int ADCBUF7_6 = 6;
    sbit  ADCBUF7_6_bit at ADCBUF7.B6;
    const register unsigned short int ADCBUF7_5 = 5;
    sbit  ADCBUF7_5_bit at ADCBUF7.B5;
    const register unsigned short int ADCBUF7_4 = 4;
    sbit  ADCBUF7_4_bit at ADCBUF7.B4;
    const register unsigned short int ADCBUF7_3 = 3;
    sbit  ADCBUF7_3_bit at ADCBUF7.B3;
    const register unsigned short int ADCBUF7_2 = 2;
    sbit  ADCBUF7_2_bit at ADCBUF7.B2;
    const register unsigned short int ADCBUF7_1 = 1;
    sbit  ADCBUF7_1_bit at ADCBUF7.B1;
    const register unsigned short int ADCBUF7_0 = 0;
    sbit  ADCBUF7_0_bit at ADCBUF7.B0;

    // ADCBUF8 bits
    const register unsigned short int ADCBUF8_15 = 15;
    sbit  ADCBUF8_15_bit at ADCBUF8.B15;
    const register unsigned short int ADCBUF8_14 = 14;
    sbit  ADCBUF8_14_bit at ADCBUF8.B14;
    const register unsigned short int ADCBUF8_13 = 13;
    sbit  ADCBUF8_13_bit at ADCBUF8.B13;
    const register unsigned short int ADCBUF8_12 = 12;
    sbit  ADCBUF8_12_bit at ADCBUF8.B12;
    const register unsigned short int ADCBUF8_11 = 11;
    sbit  ADCBUF8_11_bit at ADCBUF8.B11;
    const register unsigned short int ADCBUF8_10 = 10;
    sbit  ADCBUF8_10_bit at ADCBUF8.B10;
    const register unsigned short int ADCBUF8_9 = 9;
    sbit  ADCBUF8_9_bit at ADCBUF8.B9;
    const register unsigned short int ADCBUF8_8 = 8;
    sbit  ADCBUF8_8_bit at ADCBUF8.B8;
    const register unsigned short int ADCBUF8_7 = 7;
    sbit  ADCBUF8_7_bit at ADCBUF8.B7;
    const register unsigned short int ADCBUF8_6 = 6;
    sbit  ADCBUF8_6_bit at ADCBUF8.B6;
    const register unsigned short int ADCBUF8_5 = 5;
    sbit  ADCBUF8_5_bit at ADCBUF8.B5;
    const register unsigned short int ADCBUF8_4 = 4;
    sbit  ADCBUF8_4_bit at ADCBUF8.B4;
    const register unsigned short int ADCBUF8_3 = 3;
    sbit  ADCBUF8_3_bit at ADCBUF8.B3;
    const register unsigned short int ADCBUF8_2 = 2;
    sbit  ADCBUF8_2_bit at ADCBUF8.B2;
    const register unsigned short int ADCBUF8_1 = 1;
    sbit  ADCBUF8_1_bit at ADCBUF8.B1;
    const register unsigned short int ADCBUF8_0 = 0;
    sbit  ADCBUF8_0_bit at ADCBUF8.B0;

    // ADCBUF9 bits
    const register unsigned short int ADCBUF9_15 = 15;
    sbit  ADCBUF9_15_bit at ADCBUF9.B15;
    const register unsigned short int ADCBUF9_14 = 14;
    sbit  ADCBUF9_14_bit at ADCBUF9.B14;
    const register unsigned short int ADCBUF9_13 = 13;
    sbit  ADCBUF9_13_bit at ADCBUF9.B13;
    const register unsigned short int ADCBUF9_12 = 12;
    sbit  ADCBUF9_12_bit at ADCBUF9.B12;
    const register unsigned short int ADCBUF9_11 = 11;
    sbit  ADCBUF9_11_bit at ADCBUF9.B11;
    const register unsigned short int ADCBUF9_10 = 10;
    sbit  ADCBUF9_10_bit at ADCBUF9.B10;
    const register unsigned short int ADCBUF9_9 = 9;
    sbit  ADCBUF9_9_bit at ADCBUF9.B9;
    const register unsigned short int ADCBUF9_8 = 8;
    sbit  ADCBUF9_8_bit at ADCBUF9.B8;
    const register unsigned short int ADCBUF9_7 = 7;
    sbit  ADCBUF9_7_bit at ADCBUF9.B7;
    const register unsigned short int ADCBUF9_6 = 6;
    sbit  ADCBUF9_6_bit at ADCBUF9.B6;
    const register unsigned short int ADCBUF9_5 = 5;
    sbit  ADCBUF9_5_bit at ADCBUF9.B5;
    const register unsigned short int ADCBUF9_4 = 4;
    sbit  ADCBUF9_4_bit at ADCBUF9.B4;
    const register unsigned short int ADCBUF9_3 = 3;
    sbit  ADCBUF9_3_bit at ADCBUF9.B3;
    const register unsigned short int ADCBUF9_2 = 2;
    sbit  ADCBUF9_2_bit at ADCBUF9.B2;
    const register unsigned short int ADCBUF9_1 = 1;
    sbit  ADCBUF9_1_bit at ADCBUF9.B1;
    const register unsigned short int ADCBUF9_0 = 0;
    sbit  ADCBUF9_0_bit at ADCBUF9.B0;

    // ADCBUF10 bits
    const register unsigned short int ADCBUF10_15 = 15;
    sbit  ADCBUF10_15_bit at ADCBUF10.B15;
    const register unsigned short int ADCBUF10_14 = 14;
    sbit  ADCBUF10_14_bit at ADCBUF10.B14;
    const register unsigned short int ADCBUF10_13 = 13;
    sbit  ADCBUF10_13_bit at ADCBUF10.B13;
    const register unsigned short int ADCBUF10_12 = 12;
    sbit  ADCBUF10_12_bit at ADCBUF10.B12;
    const register unsigned short int ADCBUF10_11 = 11;
    sbit  ADCBUF10_11_bit at ADCBUF10.B11;
    const register unsigned short int ADCBUF10_10 = 10;
    sbit  ADCBUF10_10_bit at ADCBUF10.B10;
    const register unsigned short int ADCBUF10_9 = 9;
    sbit  ADCBUF10_9_bit at ADCBUF10.B9;
    const register unsigned short int ADCBUF10_8 = 8;
    sbit  ADCBUF10_8_bit at ADCBUF10.B8;
    const register unsigned short int ADCBUF10_7 = 7;
    sbit  ADCBUF10_7_bit at ADCBUF10.B7;
    const register unsigned short int ADCBUF10_6 = 6;
    sbit  ADCBUF10_6_bit at ADCBUF10.B6;
    const register unsigned short int ADCBUF10_5 = 5;
    sbit  ADCBUF10_5_bit at ADCBUF10.B5;
    const register unsigned short int ADCBUF10_4 = 4;
    sbit  ADCBUF10_4_bit at ADCBUF10.B4;
    const register unsigned short int ADCBUF10_3 = 3;
    sbit  ADCBUF10_3_bit at ADCBUF10.B3;
    const register unsigned short int ADCBUF10_2 = 2;
    sbit  ADCBUF10_2_bit at ADCBUF10.B2;
    const register unsigned short int ADCBUF10_1 = 1;
    sbit  ADCBUF10_1_bit at ADCBUF10.B1;
    const register unsigned short int ADCBUF10_0 = 0;
    sbit  ADCBUF10_0_bit at ADCBUF10.B0;

    // ADCBUF11 bits
    const register unsigned short int ADCBUF11_15 = 15;
    sbit  ADCBUF11_15_bit at ADCBUF11.B15;
    const register unsigned short int ADCBUF11_14 = 14;
    sbit  ADCBUF11_14_bit at ADCBUF11.B14;
    const register unsigned short int ADCBUF11_13 = 13;
    sbit  ADCBUF11_13_bit at ADCBUF11.B13;
    const register unsigned short int ADCBUF11_12 = 12;
    sbit  ADCBUF11_12_bit at ADCBUF11.B12;
    const register unsigned short int ADCBUF11_11 = 11;
    sbit  ADCBUF11_11_bit at ADCBUF11.B11;
    const register unsigned short int ADCBUF11_10 = 10;
    sbit  ADCBUF11_10_bit at ADCBUF11.B10;
    const register unsigned short int ADCBUF11_9 = 9;
    sbit  ADCBUF11_9_bit at ADCBUF11.B9;
    const register unsigned short int ADCBUF11_8 = 8;
    sbit  ADCBUF11_8_bit at ADCBUF11.B8;
    const register unsigned short int ADCBUF11_7 = 7;
    sbit  ADCBUF11_7_bit at ADCBUF11.B7;
    const register unsigned short int ADCBUF11_6 = 6;
    sbit  ADCBUF11_6_bit at ADCBUF11.B6;
    const register unsigned short int ADCBUF11_5 = 5;
    sbit  ADCBUF11_5_bit at ADCBUF11.B5;
    const register unsigned short int ADCBUF11_4 = 4;
    sbit  ADCBUF11_4_bit at ADCBUF11.B4;
    const register unsigned short int ADCBUF11_3 = 3;
    sbit  ADCBUF11_3_bit at ADCBUF11.B3;
    const register unsigned short int ADCBUF11_2 = 2;
    sbit  ADCBUF11_2_bit at ADCBUF11.B2;
    const register unsigned short int ADCBUF11_1 = 1;
    sbit  ADCBUF11_1_bit at ADCBUF11.B1;
    const register unsigned short int ADCBUF11_0 = 0;
    sbit  ADCBUF11_0_bit at ADCBUF11.B0;

    // ADCBUF12 bits
    const register unsigned short int ADCBUF12_15 = 15;
    sbit  ADCBUF12_15_bit at ADCBUF12.B15;
    const register unsigned short int ADCBUF12_14 = 14;
    sbit  ADCBUF12_14_bit at ADCBUF12.B14;
    const register unsigned short int ADCBUF12_13 = 13;
    sbit  ADCBUF12_13_bit at ADCBUF12.B13;
    const register unsigned short int ADCBUF12_12 = 12;
    sbit  ADCBUF12_12_bit at ADCBUF12.B12;
    const register unsigned short int ADCBUF12_11 = 11;
    sbit  ADCBUF12_11_bit at ADCBUF12.B11;
    const register unsigned short int ADCBUF12_10 = 10;
    sbit  ADCBUF12_10_bit at ADCBUF12.B10;
    const register unsigned short int ADCBUF12_9 = 9;
    sbit  ADCBUF12_9_bit at ADCBUF12.B9;
    const register unsigned short int ADCBUF12_8 = 8;
    sbit  ADCBUF12_8_bit at ADCBUF12.B8;
    const register unsigned short int ADCBUF12_7 = 7;
    sbit  ADCBUF12_7_bit at ADCBUF12.B7;
    const register unsigned short int ADCBUF12_6 = 6;
    sbit  ADCBUF12_6_bit at ADCBUF12.B6;
    const register unsigned short int ADCBUF12_5 = 5;
    sbit  ADCBUF12_5_bit at ADCBUF12.B5;
    const register unsigned short int ADCBUF12_4 = 4;
    sbit  ADCBUF12_4_bit at ADCBUF12.B4;
    const register unsigned short int ADCBUF12_3 = 3;
    sbit  ADCBUF12_3_bit at ADCBUF12.B3;
    const register unsigned short int ADCBUF12_2 = 2;
    sbit  ADCBUF12_2_bit at ADCBUF12.B2;
    const register unsigned short int ADCBUF12_1 = 1;
    sbit  ADCBUF12_1_bit at ADCBUF12.B1;
    const register unsigned short int ADCBUF12_0 = 0;
    sbit  ADCBUF12_0_bit at ADCBUF12.B0;

    // ADCBUF13 bits
    const register unsigned short int ADCBUF13_15 = 15;
    sbit  ADCBUF13_15_bit at ADCBUF13.B15;
    const register unsigned short int ADCBUF13_14 = 14;
    sbit  ADCBUF13_14_bit at ADCBUF13.B14;
    const register unsigned short int ADCBUF13_13 = 13;
    sbit  ADCBUF13_13_bit at ADCBUF13.B13;
    const register unsigned short int ADCBUF13_12 = 12;
    sbit  ADCBUF13_12_bit at ADCBUF13.B12;
    const register unsigned short int ADCBUF13_11 = 11;
    sbit  ADCBUF13_11_bit at ADCBUF13.B11;
    const register unsigned short int ADCBUF13_10 = 10;
    sbit  ADCBUF13_10_bit at ADCBUF13.B10;
    const register unsigned short int ADCBUF13_9 = 9;
    sbit  ADCBUF13_9_bit at ADCBUF13.B9;
    const register unsigned short int ADCBUF13_8 = 8;
    sbit  ADCBUF13_8_bit at ADCBUF13.B8;
    const register unsigned short int ADCBUF13_7 = 7;
    sbit  ADCBUF13_7_bit at ADCBUF13.B7;
    const register unsigned short int ADCBUF13_6 = 6;
    sbit  ADCBUF13_6_bit at ADCBUF13.B6;
    const register unsigned short int ADCBUF13_5 = 5;
    sbit  ADCBUF13_5_bit at ADCBUF13.B5;
    const register unsigned short int ADCBUF13_4 = 4;
    sbit  ADCBUF13_4_bit at ADCBUF13.B4;
    const register unsigned short int ADCBUF13_3 = 3;
    sbit  ADCBUF13_3_bit at ADCBUF13.B3;
    const register unsigned short int ADCBUF13_2 = 2;
    sbit  ADCBUF13_2_bit at ADCBUF13.B2;
    const register unsigned short int ADCBUF13_1 = 1;
    sbit  ADCBUF13_1_bit at ADCBUF13.B1;
    const register unsigned short int ADCBUF13_0 = 0;
    sbit  ADCBUF13_0_bit at ADCBUF13.B0;

    // ADCBUF14 bits
    const register unsigned short int ADCBUF14_15 = 15;
    sbit  ADCBUF14_15_bit at ADCBUF14.B15;
    const register unsigned short int ADCBUF14_14 = 14;
    sbit  ADCBUF14_14_bit at ADCBUF14.B14;
    const register unsigned short int ADCBUF14_13 = 13;
    sbit  ADCBUF14_13_bit at ADCBUF14.B13;
    const register unsigned short int ADCBUF14_12 = 12;
    sbit  ADCBUF14_12_bit at ADCBUF14.B12;
    const register unsigned short int ADCBUF14_11 = 11;
    sbit  ADCBUF14_11_bit at ADCBUF14.B11;
    const register unsigned short int ADCBUF14_10 = 10;
    sbit  ADCBUF14_10_bit at ADCBUF14.B10;
    const register unsigned short int ADCBUF14_9 = 9;
    sbit  ADCBUF14_9_bit at ADCBUF14.B9;
    const register unsigned short int ADCBUF14_8 = 8;
    sbit  ADCBUF14_8_bit at ADCBUF14.B8;
    const register unsigned short int ADCBUF14_7 = 7;
    sbit  ADCBUF14_7_bit at ADCBUF14.B7;
    const register unsigned short int ADCBUF14_6 = 6;
    sbit  ADCBUF14_6_bit at ADCBUF14.B6;
    const register unsigned short int ADCBUF14_5 = 5;
    sbit  ADCBUF14_5_bit at ADCBUF14.B5;
    const register unsigned short int ADCBUF14_4 = 4;
    sbit  ADCBUF14_4_bit at ADCBUF14.B4;
    const register unsigned short int ADCBUF14_3 = 3;
    sbit  ADCBUF14_3_bit at ADCBUF14.B3;
    const register unsigned short int ADCBUF14_2 = 2;
    sbit  ADCBUF14_2_bit at ADCBUF14.B2;
    const register unsigned short int ADCBUF14_1 = 1;
    sbit  ADCBUF14_1_bit at ADCBUF14.B1;
    const register unsigned short int ADCBUF14_0 = 0;
    sbit  ADCBUF14_0_bit at ADCBUF14.B0;

    // ADCBUF15 bits
    const register unsigned short int ADCBUF15_15 = 15;
    sbit  ADCBUF15_15_bit at ADCBUF15.B15;
    const register unsigned short int ADCBUF15_14 = 14;
    sbit  ADCBUF15_14_bit at ADCBUF15.B14;
    const register unsigned short int ADCBUF15_13 = 13;
    sbit  ADCBUF15_13_bit at ADCBUF15.B13;
    const register unsigned short int ADCBUF15_12 = 12;
    sbit  ADCBUF15_12_bit at ADCBUF15.B12;
    const register unsigned short int ADCBUF15_11 = 11;
    sbit  ADCBUF15_11_bit at ADCBUF15.B11;
    const register unsigned short int ADCBUF15_10 = 10;
    sbit  ADCBUF15_10_bit at ADCBUF15.B10;
    const register unsigned short int ADCBUF15_9 = 9;
    sbit  ADCBUF15_9_bit at ADCBUF15.B9;
    const register unsigned short int ADCBUF15_8 = 8;
    sbit  ADCBUF15_8_bit at ADCBUF15.B8;
    const register unsigned short int ADCBUF15_7 = 7;
    sbit  ADCBUF15_7_bit at ADCBUF15.B7;
    const register unsigned short int ADCBUF15_6 = 6;
    sbit  ADCBUF15_6_bit at ADCBUF15.B6;
    const register unsigned short int ADCBUF15_5 = 5;
    sbit  ADCBUF15_5_bit at ADCBUF15.B5;
    const register unsigned short int ADCBUF15_4 = 4;
    sbit  ADCBUF15_4_bit at ADCBUF15.B4;
    const register unsigned short int ADCBUF15_3 = 3;
    sbit  ADCBUF15_3_bit at ADCBUF15.B3;
    const register unsigned short int ADCBUF15_2 = 2;
    sbit  ADCBUF15_2_bit at ADCBUF15.B2;
    const register unsigned short int ADCBUF15_1 = 1;
    sbit  ADCBUF15_1_bit at ADCBUF15.B1;
    const register unsigned short int ADCBUF15_0 = 0;
    sbit  ADCBUF15_0_bit at ADCBUF15.B0;

    // ADCBUF24 bits
    const register unsigned short int ADCBUF24_15 = 15;
    sbit  ADCBUF24_15_bit at ADCBUF24.B15;
    const register unsigned short int ADCBUF24_14 = 14;
    sbit  ADCBUF24_14_bit at ADCBUF24.B14;
    const register unsigned short int ADCBUF24_13 = 13;
    sbit  ADCBUF24_13_bit at ADCBUF24.B13;
    const register unsigned short int ADCBUF24_12 = 12;
    sbit  ADCBUF24_12_bit at ADCBUF24.B12;
    const register unsigned short int ADCBUF24_11 = 11;
    sbit  ADCBUF24_11_bit at ADCBUF24.B11;
    const register unsigned short int ADCBUF24_10 = 10;
    sbit  ADCBUF24_10_bit at ADCBUF24.B10;
    const register unsigned short int ADCBUF24_9 = 9;
    sbit  ADCBUF24_9_bit at ADCBUF24.B9;
    const register unsigned short int ADCBUF24_8 = 8;
    sbit  ADCBUF24_8_bit at ADCBUF24.B8;
    const register unsigned short int ADCBUF24_7 = 7;
    sbit  ADCBUF24_7_bit at ADCBUF24.B7;
    const register unsigned short int ADCBUF24_6 = 6;
    sbit  ADCBUF24_6_bit at ADCBUF24.B6;
    const register unsigned short int ADCBUF24_5 = 5;
    sbit  ADCBUF24_5_bit at ADCBUF24.B5;
    const register unsigned short int ADCBUF24_4 = 4;
    sbit  ADCBUF24_4_bit at ADCBUF24.B4;
    const register unsigned short int ADCBUF24_3 = 3;
    sbit  ADCBUF24_3_bit at ADCBUF24.B3;
    const register unsigned short int ADCBUF24_2 = 2;
    sbit  ADCBUF24_2_bit at ADCBUF24.B2;
    const register unsigned short int ADCBUF24_1 = 1;
    sbit  ADCBUF24_1_bit at ADCBUF24.B1;
    const register unsigned short int ADCBUF24_0 = 0;
    sbit  ADCBUF24_0_bit at ADCBUF24.B0;

    // ADCBUF25 bits
    const register unsigned short int ADCBUF25_15 = 15;
    sbit  ADCBUF25_15_bit at ADCBUF25.B15;
    const register unsigned short int ADCBUF25_14 = 14;
    sbit  ADCBUF25_14_bit at ADCBUF25.B14;
    const register unsigned short int ADCBUF25_13 = 13;
    sbit  ADCBUF25_13_bit at ADCBUF25.B13;
    const register unsigned short int ADCBUF25_12 = 12;
    sbit  ADCBUF25_12_bit at ADCBUF25.B12;
    const register unsigned short int ADCBUF25_11 = 11;
    sbit  ADCBUF25_11_bit at ADCBUF25.B11;
    const register unsigned short int ADCBUF25_10 = 10;
    sbit  ADCBUF25_10_bit at ADCBUF25.B10;
    const register unsigned short int ADCBUF25_9 = 9;
    sbit  ADCBUF25_9_bit at ADCBUF25.B9;
    const register unsigned short int ADCBUF25_8 = 8;
    sbit  ADCBUF25_8_bit at ADCBUF25.B8;
    const register unsigned short int ADCBUF25_7 = 7;
    sbit  ADCBUF25_7_bit at ADCBUF25.B7;
    const register unsigned short int ADCBUF25_6 = 6;
    sbit  ADCBUF25_6_bit at ADCBUF25.B6;
    const register unsigned short int ADCBUF25_5 = 5;
    sbit  ADCBUF25_5_bit at ADCBUF25.B5;
    const register unsigned short int ADCBUF25_4 = 4;
    sbit  ADCBUF25_4_bit at ADCBUF25.B4;
    const register unsigned short int ADCBUF25_3 = 3;
    sbit  ADCBUF25_3_bit at ADCBUF25.B3;
    const register unsigned short int ADCBUF25_2 = 2;
    sbit  ADCBUF25_2_bit at ADCBUF25.B2;
    const register unsigned short int ADCBUF25_1 = 1;
    sbit  ADCBUF25_1_bit at ADCBUF25.B1;
    const register unsigned short int ADCBUF25_0 = 0;
    sbit  ADCBUF25_0_bit at ADCBUF25.B0;

    // DMA0CON bits
    const register unsigned short int CHEN = 15;
    sbit  CHEN_bit at DMA0CON.B15;
    sbit  CHEN_DMA0CON_bit at DMA0CON.B15;
    const register unsigned short int SIZE = 14;
    sbit  SIZE_bit at DMA0CON.B14;
    sbit  SIZE_DMA0CON_bit at DMA0CON.B14;
    const register unsigned short int DIR_ = 13;
    sbit  DIR_bit at DMA0CON.B13;
    const register unsigned short int HALF = 12;
    sbit  HALF_bit at DMA0CON.B12;
    sbit  HALF_DMA0CON_bit at DMA0CON.B12;
    const register unsigned short int NULLW = 11;
    sbit  NULLW_bit at DMA0CON.B11;
    sbit  NULLW_DMA0CON_bit at DMA0CON.B11;
    const register unsigned short int AMODE_1 = 5;
    sbit  AMODE_1_bit at DMA0CON.B5;
    sbit  AMODE_1_DMA0CON_bit at DMA0CON.B5;
    const register unsigned short int AMODE_0 = 4;
    sbit  AMODE_0_bit at DMA0CON.B4;
    sbit  AMODE_0_DMA0CON_bit at DMA0CON.B4;
    const register unsigned short int MODE_1 = 1;
    sbit  MODE_1_bit at DMA0CON.B1;
    sbit  MODE_1_DMA0CON_bit at DMA0CON.B1;
    const register unsigned short int MODE_0 = 0;
    sbit  MODE_0_bit at DMA0CON.B0;
    sbit  MODE_0_DMA0CON_bit at DMA0CON.B0;

    // DMA0REQ bits
    const register unsigned short int FORCE = 15;
    sbit  FORCE_bit at DMA0REQ.B15;
    sbit  FORCE_DMA0REQ_bit at DMA0REQ.B15;
    const register unsigned short int IRQSEL_6 = 6;
    sbit  IRQSEL_6_bit at DMA0REQ.B6;
    sbit  IRQSEL_6_DMA0REQ_bit at DMA0REQ.B6;
    const register unsigned short int IRQSEL_5 = 5;
    sbit  IRQSEL_5_bit at DMA0REQ.B5;
    sbit  IRQSEL_5_DMA0REQ_bit at DMA0REQ.B5;
    const register unsigned short int IRQSEL_4 = 4;
    sbit  IRQSEL_4_bit at DMA0REQ.B4;
    sbit  IRQSEL_4_DMA0REQ_bit at DMA0REQ.B4;
    const register unsigned short int IRQSEL_3 = 3;
    sbit  IRQSEL_3_bit at DMA0REQ.B3;
    sbit  IRQSEL_3_DMA0REQ_bit at DMA0REQ.B3;
    const register unsigned short int IRQSEL_2 = 2;
    sbit  IRQSEL_2_bit at DMA0REQ.B2;
    sbit  IRQSEL_2_DMA0REQ_bit at DMA0REQ.B2;
    const register unsigned short int IRQSEL_1 = 1;
    sbit  IRQSEL_1_bit at DMA0REQ.B1;
    sbit  IRQSEL_1_DMA0REQ_bit at DMA0REQ.B1;
    const register unsigned short int IRQSEL_0 = 0;
    sbit  IRQSEL_0_bit at DMA0REQ.B0;
    sbit  IRQSEL_0_DMA0REQ_bit at DMA0REQ.B0;

    // DMA0STA bits
    const register unsigned short int STA_15 = 15;
    sbit  STA_15_bit at DMA0STA.B15;
    sbit  STA_15_DMA0STA_bit at DMA0STA.B15;
    const register unsigned short int STA_14 = 14;
    sbit  STA_14_bit at DMA0STA.B14;
    sbit  STA_14_DMA0STA_bit at DMA0STA.B14;
    const register unsigned short int STA_13 = 13;
    sbit  STA_13_bit at DMA0STA.B13;
    sbit  STA_13_DMA0STA_bit at DMA0STA.B13;
    const register unsigned short int STA_12 = 12;
    sbit  STA_12_bit at DMA0STA.B12;
    sbit  STA_12_DMA0STA_bit at DMA0STA.B12;
    const register unsigned short int STA_11 = 11;
    sbit  STA_11_bit at DMA0STA.B11;
    sbit  STA_11_DMA0STA_bit at DMA0STA.B11;
    const register unsigned short int STA_10 = 10;
    sbit  STA_10_bit at DMA0STA.B10;
    sbit  STA_10_DMA0STA_bit at DMA0STA.B10;
    const register unsigned short int STA_9 = 9;
    sbit  STA_9_bit at DMA0STA.B9;
    sbit  STA_9_DMA0STA_bit at DMA0STA.B9;
    const register unsigned short int STA_8 = 8;
    sbit  STA_8_bit at DMA0STA.B8;
    sbit  STA_8_DMA0STA_bit at DMA0STA.B8;
    const register unsigned short int STA_7 = 7;
    sbit  STA_7_bit at DMA0STA.B7;
    sbit  STA_7_DMA0STA_bit at DMA0STA.B7;
    const register unsigned short int STA_6 = 6;
    sbit  STA_6_bit at DMA0STA.B6;
    sbit  STA_6_DMA0STA_bit at DMA0STA.B6;
    const register unsigned short int STA_5 = 5;
    sbit  STA_5_bit at DMA0STA.B5;
    sbit  STA_5_DMA0STA_bit at DMA0STA.B5;
    const register unsigned short int STA_4 = 4;
    sbit  STA_4_bit at DMA0STA.B4;
    sbit  STA_4_DMA0STA_bit at DMA0STA.B4;
    const register unsigned short int STA_3 = 3;
    sbit  STA_3_bit at DMA0STA.B3;
    sbit  STA_3_DMA0STA_bit at DMA0STA.B3;
    const register unsigned short int STA_2 = 2;
    sbit  STA_2_bit at DMA0STA.B2;
    sbit  STA_2_DMA0STA_bit at DMA0STA.B2;
    const register unsigned short int STA_1 = 1;
    sbit  STA_1_bit at DMA0STA.B1;
    sbit  STA_1_DMA0STA_bit at DMA0STA.B1;
    const register unsigned short int STA_0 = 0;
    sbit  STA_0_bit at DMA0STA.B0;
    sbit  STA_0_DMA0STA_bit at DMA0STA.B0;

    // DMA0STB bits
    const register unsigned short int STB_15 = 15;
    sbit  STB_15_bit at DMA0STB.B15;
    sbit  STB_15_DMA0STB_bit at DMA0STB.B15;
    const register unsigned short int STB_14 = 14;
    sbit  STB_14_bit at DMA0STB.B14;
    sbit  STB_14_DMA0STB_bit at DMA0STB.B14;
    const register unsigned short int STB_13 = 13;
    sbit  STB_13_bit at DMA0STB.B13;
    sbit  STB_13_DMA0STB_bit at DMA0STB.B13;
    const register unsigned short int STB_12 = 12;
    sbit  STB_12_bit at DMA0STB.B12;
    sbit  STB_12_DMA0STB_bit at DMA0STB.B12;
    const register unsigned short int STB_11 = 11;
    sbit  STB_11_bit at DMA0STB.B11;
    sbit  STB_11_DMA0STB_bit at DMA0STB.B11;
    const register unsigned short int STB_10 = 10;
    sbit  STB_10_bit at DMA0STB.B10;
    sbit  STB_10_DMA0STB_bit at DMA0STB.B10;
    const register unsigned short int STB_9 = 9;
    sbit  STB_9_bit at DMA0STB.B9;
    sbit  STB_9_DMA0STB_bit at DMA0STB.B9;
    const register unsigned short int STB_8 = 8;
    sbit  STB_8_bit at DMA0STB.B8;
    sbit  STB_8_DMA0STB_bit at DMA0STB.B8;
    const register unsigned short int STB_7 = 7;
    sbit  STB_7_bit at DMA0STB.B7;
    sbit  STB_7_DMA0STB_bit at DMA0STB.B7;
    const register unsigned short int STB_6 = 6;
    sbit  STB_6_bit at DMA0STB.B6;
    sbit  STB_6_DMA0STB_bit at DMA0STB.B6;
    const register unsigned short int STB_5 = 5;
    sbit  STB_5_bit at DMA0STB.B5;
    sbit  STB_5_DMA0STB_bit at DMA0STB.B5;
    const register unsigned short int STB_4 = 4;
    sbit  STB_4_bit at DMA0STB.B4;
    sbit  STB_4_DMA0STB_bit at DMA0STB.B4;
    const register unsigned short int STB_3 = 3;
    sbit  STB_3_bit at DMA0STB.B3;
    sbit  STB_3_DMA0STB_bit at DMA0STB.B3;
    const register unsigned short int STB_2 = 2;
    sbit  STB_2_bit at DMA0STB.B2;
    sbit  STB_2_DMA0STB_bit at DMA0STB.B2;
    const register unsigned short int STB_1 = 1;
    sbit  STB_1_bit at DMA0STB.B1;
    sbit  STB_1_DMA0STB_bit at DMA0STB.B1;
    const register unsigned short int STB_0 = 0;
    sbit  STB_0_bit at DMA0STB.B0;
    sbit  STB_0_DMA0STB_bit at DMA0STB.B0;

    // DMA0PAD bits
    const register unsigned short int PAD_15 = 15;
    sbit  PAD_15_bit at DMA0PAD.B15;
    sbit  PAD_15_DMA0PAD_bit at DMA0PAD.B15;
    const register unsigned short int PAD_14 = 14;
    sbit  PAD_14_bit at DMA0PAD.B14;
    sbit  PAD_14_DMA0PAD_bit at DMA0PAD.B14;
    const register unsigned short int PAD_13 = 13;
    sbit  PAD_13_bit at DMA0PAD.B13;
    sbit  PAD_13_DMA0PAD_bit at DMA0PAD.B13;
    const register unsigned short int PAD_12 = 12;
    sbit  PAD_12_bit at DMA0PAD.B12;
    sbit  PAD_12_DMA0PAD_bit at DMA0PAD.B12;
    const register unsigned short int PAD_11 = 11;
    sbit  PAD_11_bit at DMA0PAD.B11;
    sbit  PAD_11_DMA0PAD_bit at DMA0PAD.B11;
    const register unsigned short int PAD_10 = 10;
    sbit  PAD_10_bit at DMA0PAD.B10;
    sbit  PAD_10_DMA0PAD_bit at DMA0PAD.B10;
    const register unsigned short int PAD_9 = 9;
    sbit  PAD_9_bit at DMA0PAD.B9;
    sbit  PAD_9_DMA0PAD_bit at DMA0PAD.B9;
    const register unsigned short int PAD_8 = 8;
    sbit  PAD_8_bit at DMA0PAD.B8;
    sbit  PAD_8_DMA0PAD_bit at DMA0PAD.B8;
    const register unsigned short int PAD_7 = 7;
    sbit  PAD_7_bit at DMA0PAD.B7;
    sbit  PAD_7_DMA0PAD_bit at DMA0PAD.B7;
    const register unsigned short int PAD_6 = 6;
    sbit  PAD_6_bit at DMA0PAD.B6;
    sbit  PAD_6_DMA0PAD_bit at DMA0PAD.B6;
    const register unsigned short int PAD_5 = 5;
    sbit  PAD_5_bit at DMA0PAD.B5;
    sbit  PAD_5_DMA0PAD_bit at DMA0PAD.B5;
    const register unsigned short int PAD_4 = 4;
    sbit  PAD_4_bit at DMA0PAD.B4;
    sbit  PAD_4_DMA0PAD_bit at DMA0PAD.B4;
    const register unsigned short int PAD_3 = 3;
    sbit  PAD_3_bit at DMA0PAD.B3;
    sbit  PAD_3_DMA0PAD_bit at DMA0PAD.B3;
    const register unsigned short int PAD_2 = 2;
    sbit  PAD_2_bit at DMA0PAD.B2;
    sbit  PAD_2_DMA0PAD_bit at DMA0PAD.B2;
    const register unsigned short int PAD_1 = 1;
    sbit  PAD_1_bit at DMA0PAD.B1;
    sbit  PAD_1_DMA0PAD_bit at DMA0PAD.B1;
    const register unsigned short int PAD_0 = 0;
    sbit  PAD_0_bit at DMA0PAD.B0;
    sbit  PAD_0_DMA0PAD_bit at DMA0PAD.B0;

    // DMA0CNT bits
    const register unsigned short int CNT_15 = 15;
    sbit  CNT_15_bit at DMA0CNT.B15;
    sbit  CNT_15_DMA0CNT_bit at DMA0CNT.B15;
    const register unsigned short int CNT_14 = 14;
    sbit  CNT_14_bit at DMA0CNT.B14;
    sbit  CNT_14_DMA0CNT_bit at DMA0CNT.B14;
    const register unsigned short int CNT_13 = 13;
    sbit  CNT_13_bit at DMA0CNT.B13;
    sbit  CNT_13_DMA0CNT_bit at DMA0CNT.B13;
    const register unsigned short int CNT_12 = 12;
    sbit  CNT_12_bit at DMA0CNT.B12;
    sbit  CNT_12_DMA0CNT_bit at DMA0CNT.B12;
    const register unsigned short int CNT_11 = 11;
    sbit  CNT_11_bit at DMA0CNT.B11;
    sbit  CNT_11_DMA0CNT_bit at DMA0CNT.B11;
    const register unsigned short int CNT_10 = 10;
    sbit  CNT_10_bit at DMA0CNT.B10;
    sbit  CNT_10_DMA0CNT_bit at DMA0CNT.B10;
    const register unsigned short int CNT_9 = 9;
    sbit  CNT_9_bit at DMA0CNT.B9;
    sbit  CNT_9_DMA0CNT_bit at DMA0CNT.B9;
    const register unsigned short int CNT_8 = 8;
    sbit  CNT_8_bit at DMA0CNT.B8;
    sbit  CNT_8_DMA0CNT_bit at DMA0CNT.B8;
    const register unsigned short int CNT_7 = 7;
    sbit  CNT_7_bit at DMA0CNT.B7;
    sbit  CNT_7_DMA0CNT_bit at DMA0CNT.B7;
    const register unsigned short int CNT_6 = 6;
    sbit  CNT_6_bit at DMA0CNT.B6;
    sbit  CNT_6_DMA0CNT_bit at DMA0CNT.B6;
    const register unsigned short int CNT_5 = 5;
    sbit  CNT_5_bit at DMA0CNT.B5;
    sbit  CNT_5_DMA0CNT_bit at DMA0CNT.B5;
    const register unsigned short int CNT_4 = 4;
    sbit  CNT_4_bit at DMA0CNT.B4;
    sbit  CNT_4_DMA0CNT_bit at DMA0CNT.B4;
    const register unsigned short int CNT_3 = 3;
    sbit  CNT_3_bit at DMA0CNT.B3;
    sbit  CNT_3_DMA0CNT_bit at DMA0CNT.B3;
    const register unsigned short int CNT_2 = 2;
    sbit  CNT_2_bit at DMA0CNT.B2;
    sbit  CNT_2_DMA0CNT_bit at DMA0CNT.B2;
    const register unsigned short int CNT_1 = 1;
    sbit  CNT_1_bit at DMA0CNT.B1;
    sbit  CNT_1_DMA0CNT_bit at DMA0CNT.B1;
    const register unsigned short int CNT_0 = 0;
    sbit  CNT_0_bit at DMA0CNT.B0;
    sbit  CNT_0_DMA0CNT_bit at DMA0CNT.B0;

    // DMA1CON bits
    sbit  CHEN_DMA1CON_bit at DMA1CON.B15;
    sbit  SIZE_DMA1CON_bit at DMA1CON.B14;
    sbit  DIR__DMA1CON_bit at DMA1CON.B13;
    sbit  HALF_DMA1CON_bit at DMA1CON.B12;
    sbit  NULLW_DMA1CON_bit at DMA1CON.B11;
    sbit  AMODE_1_DMA1CON_bit at DMA1CON.B5;
    sbit  AMODE_0_DMA1CON_bit at DMA1CON.B4;
    sbit  MODE_1_DMA1CON_bit at DMA1CON.B1;
    sbit  MODE_0_DMA1CON_bit at DMA1CON.B0;

    // DMA1REQ bits
    sbit  FORCE_DMA1REQ_bit at DMA1REQ.B15;
    sbit  IRQSEL_6_DMA1REQ_bit at DMA1REQ.B6;
    sbit  IRQSEL_5_DMA1REQ_bit at DMA1REQ.B5;
    sbit  IRQSEL_4_DMA1REQ_bit at DMA1REQ.B4;
    sbit  IRQSEL_3_DMA1REQ_bit at DMA1REQ.B3;
    sbit  IRQSEL_2_DMA1REQ_bit at DMA1REQ.B2;
    sbit  IRQSEL_1_DMA1REQ_bit at DMA1REQ.B1;
    sbit  IRQSEL_0_DMA1REQ_bit at DMA1REQ.B0;

    // DMA1STA bits
    sbit  STA_15_DMA1STA_bit at DMA1STA.B15;
    sbit  STA_14_DMA1STA_bit at DMA1STA.B14;
    sbit  STA_13_DMA1STA_bit at DMA1STA.B13;
    sbit  STA_12_DMA1STA_bit at DMA1STA.B12;
    sbit  STA_11_DMA1STA_bit at DMA1STA.B11;
    sbit  STA_10_DMA1STA_bit at DMA1STA.B10;
    sbit  STA_9_DMA1STA_bit at DMA1STA.B9;
    sbit  STA_8_DMA1STA_bit at DMA1STA.B8;
    sbit  STA_7_DMA1STA_bit at DMA1STA.B7;
    sbit  STA_6_DMA1STA_bit at DMA1STA.B6;
    sbit  STA_5_DMA1STA_bit at DMA1STA.B5;
    sbit  STA_4_DMA1STA_bit at DMA1STA.B4;
    sbit  STA_3_DMA1STA_bit at DMA1STA.B3;
    sbit  STA_2_DMA1STA_bit at DMA1STA.B2;
    sbit  STA_1_DMA1STA_bit at DMA1STA.B1;
    sbit  STA_0_DMA1STA_bit at DMA1STA.B0;

    // DMA1STB bits
    sbit  STB_15_DMA1STB_bit at DMA1STB.B15;
    sbit  STB_14_DMA1STB_bit at DMA1STB.B14;
    sbit  STB_13_DMA1STB_bit at DMA1STB.B13;
    sbit  STB_12_DMA1STB_bit at DMA1STB.B12;
    sbit  STB_11_DMA1STB_bit at DMA1STB.B11;
    sbit  STB_10_DMA1STB_bit at DMA1STB.B10;
    sbit  STB_9_DMA1STB_bit at DMA1STB.B9;
    sbit  STB_8_DMA1STB_bit at DMA1STB.B8;
    sbit  STB_7_DMA1STB_bit at DMA1STB.B7;
    sbit  STB_6_DMA1STB_bit at DMA1STB.B6;
    sbit  STB_5_DMA1STB_bit at DMA1STB.B5;
    sbit  STB_4_DMA1STB_bit at DMA1STB.B4;
    sbit  STB_3_DMA1STB_bit at DMA1STB.B3;
    sbit  STB_2_DMA1STB_bit at DMA1STB.B2;
    sbit  STB_1_DMA1STB_bit at DMA1STB.B1;
    sbit  STB_0_DMA1STB_bit at DMA1STB.B0;

    // DMA1PAD bits
    sbit  PAD_15_DMA1PAD_bit at DMA1PAD.B15;
    sbit  PAD_14_DMA1PAD_bit at DMA1PAD.B14;
    sbit  PAD_13_DMA1PAD_bit at DMA1PAD.B13;
    sbit  PAD_12_DMA1PAD_bit at DMA1PAD.B12;
    sbit  PAD_11_DMA1PAD_bit at DMA1PAD.B11;
    sbit  PAD_10_DMA1PAD_bit at DMA1PAD.B10;
    sbit  PAD_9_DMA1PAD_bit at DMA1PAD.B9;
    sbit  PAD_8_DMA1PAD_bit at DMA1PAD.B8;
    sbit  PAD_7_DMA1PAD_bit at DMA1PAD.B7;
    sbit  PAD_6_DMA1PAD_bit at DMA1PAD.B6;
    sbit  PAD_5_DMA1PAD_bit at DMA1PAD.B5;
    sbit  PAD_4_DMA1PAD_bit at DMA1PAD.B4;
    sbit  PAD_3_DMA1PAD_bit at DMA1PAD.B3;
    sbit  PAD_2_DMA1PAD_bit at DMA1PAD.B2;
    sbit  PAD_1_DMA1PAD_bit at DMA1PAD.B1;
    sbit  PAD_0_DMA1PAD_bit at DMA1PAD.B0;

    // DMA1CNT bits
    sbit  CNT_15_DMA1CNT_bit at DMA1CNT.B15;
    sbit  CNT_14_DMA1CNT_bit at DMA1CNT.B14;
    sbit  CNT_13_DMA1CNT_bit at DMA1CNT.B13;
    sbit  CNT_12_DMA1CNT_bit at DMA1CNT.B12;
    sbit  CNT_11_DMA1CNT_bit at DMA1CNT.B11;
    sbit  CNT_10_DMA1CNT_bit at DMA1CNT.B10;
    sbit  CNT_9_DMA1CNT_bit at DMA1CNT.B9;
    sbit  CNT_8_DMA1CNT_bit at DMA1CNT.B8;
    sbit  CNT_7_DMA1CNT_bit at DMA1CNT.B7;
    sbit  CNT_6_DMA1CNT_bit at DMA1CNT.B6;
    sbit  CNT_5_DMA1CNT_bit at DMA1CNT.B5;
    sbit  CNT_4_DMA1CNT_bit at DMA1CNT.B4;
    sbit  CNT_3_DMA1CNT_bit at DMA1CNT.B3;
    sbit  CNT_2_DMA1CNT_bit at DMA1CNT.B2;
    sbit  CNT_1_DMA1CNT_bit at DMA1CNT.B1;
    sbit  CNT_0_DMA1CNT_bit at DMA1CNT.B0;

    // DMA2CON bits
    sbit  CHEN_DMA2CON_bit at DMA2CON.B15;
    sbit  SIZE_DMA2CON_bit at DMA2CON.B14;
    sbit  DIR__DMA2CON_bit at DMA2CON.B13;
    sbit  HALF_DMA2CON_bit at DMA2CON.B12;
    sbit  NULLW_DMA2CON_bit at DMA2CON.B11;
    sbit  AMODE_1_DMA2CON_bit at DMA2CON.B5;
    sbit  AMODE_0_DMA2CON_bit at DMA2CON.B4;
    sbit  MODE_1_DMA2CON_bit at DMA2CON.B1;
    sbit  MODE_0_DMA2CON_bit at DMA2CON.B0;

    // DMA2REQ bits
    sbit  FORCE_DMA2REQ_bit at DMA2REQ.B15;
    sbit  IRQSEL_6_DMA2REQ_bit at DMA2REQ.B6;
    sbit  IRQSEL_5_DMA2REQ_bit at DMA2REQ.B5;
    sbit  IRQSEL_4_DMA2REQ_bit at DMA2REQ.B4;
    sbit  IRQSEL_3_DMA2REQ_bit at DMA2REQ.B3;
    sbit  IRQSEL_2_DMA2REQ_bit at DMA2REQ.B2;
    sbit  IRQSEL_1_DMA2REQ_bit at DMA2REQ.B1;
    sbit  IRQSEL_0_DMA2REQ_bit at DMA2REQ.B0;

    // DMA2STA bits
    sbit  STA_15_DMA2STA_bit at DMA2STA.B15;
    sbit  STA_14_DMA2STA_bit at DMA2STA.B14;
    sbit  STA_13_DMA2STA_bit at DMA2STA.B13;
    sbit  STA_12_DMA2STA_bit at DMA2STA.B12;
    sbit  STA_11_DMA2STA_bit at DMA2STA.B11;
    sbit  STA_10_DMA2STA_bit at DMA2STA.B10;
    sbit  STA_9_DMA2STA_bit at DMA2STA.B9;
    sbit  STA_8_DMA2STA_bit at DMA2STA.B8;
    sbit  STA_7_DMA2STA_bit at DMA2STA.B7;
    sbit  STA_6_DMA2STA_bit at DMA2STA.B6;
    sbit  STA_5_DMA2STA_bit at DMA2STA.B5;
    sbit  STA_4_DMA2STA_bit at DMA2STA.B4;
    sbit  STA_3_DMA2STA_bit at DMA2STA.B3;
    sbit  STA_2_DMA2STA_bit at DMA2STA.B2;
    sbit  STA_1_DMA2STA_bit at DMA2STA.B1;
    sbit  STA_0_DMA2STA_bit at DMA2STA.B0;

    // DMA2STB bits
    sbit  STB_15_DMA2STB_bit at DMA2STB.B15;
    sbit  STB_14_DMA2STB_bit at DMA2STB.B14;
    sbit  STB_13_DMA2STB_bit at DMA2STB.B13;
    sbit  STB_12_DMA2STB_bit at DMA2STB.B12;
    sbit  STB_11_DMA2STB_bit at DMA2STB.B11;
    sbit  STB_10_DMA2STB_bit at DMA2STB.B10;
    sbit  STB_9_DMA2STB_bit at DMA2STB.B9;
    sbit  STB_8_DMA2STB_bit at DMA2STB.B8;
    sbit  STB_7_DMA2STB_bit at DMA2STB.B7;
    sbit  STB_6_DMA2STB_bit at DMA2STB.B6;
    sbit  STB_5_DMA2STB_bit at DMA2STB.B5;
    sbit  STB_4_DMA2STB_bit at DMA2STB.B4;
    sbit  STB_3_DMA2STB_bit at DMA2STB.B3;
    sbit  STB_2_DMA2STB_bit at DMA2STB.B2;
    sbit  STB_1_DMA2STB_bit at DMA2STB.B1;
    sbit  STB_0_DMA2STB_bit at DMA2STB.B0;

    // DMA2PAD bits
    sbit  PAD_15_DMA2PAD_bit at DMA2PAD.B15;
    sbit  PAD_14_DMA2PAD_bit at DMA2PAD.B14;
    sbit  PAD_13_DMA2PAD_bit at DMA2PAD.B13;
    sbit  PAD_12_DMA2PAD_bit at DMA2PAD.B12;
    sbit  PAD_11_DMA2PAD_bit at DMA2PAD.B11;
    sbit  PAD_10_DMA2PAD_bit at DMA2PAD.B10;
    sbit  PAD_9_DMA2PAD_bit at DMA2PAD.B9;
    sbit  PAD_8_DMA2PAD_bit at DMA2PAD.B8;
    sbit  PAD_7_DMA2PAD_bit at DMA2PAD.B7;
    sbit  PAD_6_DMA2PAD_bit at DMA2PAD.B6;
    sbit  PAD_5_DMA2PAD_bit at DMA2PAD.B5;
    sbit  PAD_4_DMA2PAD_bit at DMA2PAD.B4;
    sbit  PAD_3_DMA2PAD_bit at DMA2PAD.B3;
    sbit  PAD_2_DMA2PAD_bit at DMA2PAD.B2;
    sbit  PAD_1_DMA2PAD_bit at DMA2PAD.B1;
    sbit  PAD_0_DMA2PAD_bit at DMA2PAD.B0;

    // DMA2CNT bits
    sbit  CNT_15_DMA2CNT_bit at DMA2CNT.B15;
    sbit  CNT_14_DMA2CNT_bit at DMA2CNT.B14;
    sbit  CNT_13_DMA2CNT_bit at DMA2CNT.B13;
    sbit  CNT_12_DMA2CNT_bit at DMA2CNT.B12;
    sbit  CNT_11_DMA2CNT_bit at DMA2CNT.B11;
    sbit  CNT_10_DMA2CNT_bit at DMA2CNT.B10;
    sbit  CNT_9_DMA2CNT_bit at DMA2CNT.B9;
    sbit  CNT_8_DMA2CNT_bit at DMA2CNT.B8;
    sbit  CNT_7_DMA2CNT_bit at DMA2CNT.B7;
    sbit  CNT_6_DMA2CNT_bit at DMA2CNT.B6;
    sbit  CNT_5_DMA2CNT_bit at DMA2CNT.B5;
    sbit  CNT_4_DMA2CNT_bit at DMA2CNT.B4;
    sbit  CNT_3_DMA2CNT_bit at DMA2CNT.B3;
    sbit  CNT_2_DMA2CNT_bit at DMA2CNT.B2;
    sbit  CNT_1_DMA2CNT_bit at DMA2CNT.B1;
    sbit  CNT_0_DMA2CNT_bit at DMA2CNT.B0;

    // DMA3CON bits
    sbit  CHEN_DMA3CON_bit at DMA3CON.B15;
    sbit  SIZE_DMA3CON_bit at DMA3CON.B14;
    sbit  DIR__DMA3CON_bit at DMA3CON.B13;
    sbit  HALF_DMA3CON_bit at DMA3CON.B12;
    sbit  NULLW_DMA3CON_bit at DMA3CON.B11;
    sbit  AMODE_1_DMA3CON_bit at DMA3CON.B5;
    sbit  AMODE_0_DMA3CON_bit at DMA3CON.B4;
    sbit  MODE_1_DMA3CON_bit at DMA3CON.B1;
    sbit  MODE_0_DMA3CON_bit at DMA3CON.B0;

    // DMA3REQ bits
    sbit  FORCE_DMA3REQ_bit at DMA3REQ.B15;
    sbit  IRQSEL_6_DMA3REQ_bit at DMA3REQ.B6;
    sbit  IRQSEL_5_DMA3REQ_bit at DMA3REQ.B5;
    sbit  IRQSEL_4_DMA3REQ_bit at DMA3REQ.B4;
    sbit  IRQSEL_3_DMA3REQ_bit at DMA3REQ.B3;
    sbit  IRQSEL_2_DMA3REQ_bit at DMA3REQ.B2;
    sbit  IRQSEL_1_DMA3REQ_bit at DMA3REQ.B1;
    sbit  IRQSEL_0_DMA3REQ_bit at DMA3REQ.B0;

    // DMA3STA bits
    sbit  STA_15_DMA3STA_bit at DMA3STA.B15;
    sbit  STA_14_DMA3STA_bit at DMA3STA.B14;
    sbit  STA_13_DMA3STA_bit at DMA3STA.B13;
    sbit  STA_12_DMA3STA_bit at DMA3STA.B12;
    sbit  STA_11_DMA3STA_bit at DMA3STA.B11;
    sbit  STA_10_DMA3STA_bit at DMA3STA.B10;
    sbit  STA_9_DMA3STA_bit at DMA3STA.B9;
    sbit  STA_8_DMA3STA_bit at DMA3STA.B8;
    sbit  STA_7_DMA3STA_bit at DMA3STA.B7;
    sbit  STA_6_DMA3STA_bit at DMA3STA.B6;
    sbit  STA_5_DMA3STA_bit at DMA3STA.B5;
    sbit  STA_4_DMA3STA_bit at DMA3STA.B4;
    sbit  STA_3_DMA3STA_bit at DMA3STA.B3;
    sbit  STA_2_DMA3STA_bit at DMA3STA.B2;
    sbit  STA_1_DMA3STA_bit at DMA3STA.B1;
    sbit  STA_0_DMA3STA_bit at DMA3STA.B0;

    // DMA3STB bits
    sbit  STB_15_DMA3STB_bit at DMA3STB.B15;
    sbit  STB_14_DMA3STB_bit at DMA3STB.B14;
    sbit  STB_13_DMA3STB_bit at DMA3STB.B13;
    sbit  STB_12_DMA3STB_bit at DMA3STB.B12;
    sbit  STB_11_DMA3STB_bit at DMA3STB.B11;
    sbit  STB_10_DMA3STB_bit at DMA3STB.B10;
    sbit  STB_9_DMA3STB_bit at DMA3STB.B9;
    sbit  STB_8_DMA3STB_bit at DMA3STB.B8;
    sbit  STB_7_DMA3STB_bit at DMA3STB.B7;
    sbit  STB_6_DMA3STB_bit at DMA3STB.B6;
    sbit  STB_5_DMA3STB_bit at DMA3STB.B5;
    sbit  STB_4_DMA3STB_bit at DMA3STB.B4;
    sbit  STB_3_DMA3STB_bit at DMA3STB.B3;
    sbit  STB_2_DMA3STB_bit at DMA3STB.B2;
    sbit  STB_1_DMA3STB_bit at DMA3STB.B1;
    sbit  STB_0_DMA3STB_bit at DMA3STB.B0;

    // DMA3PAD bits
    sbit  PAD_15_DMA3PAD_bit at DMA3PAD.B15;
    sbit  PAD_14_DMA3PAD_bit at DMA3PAD.B14;
    sbit  PAD_13_DMA3PAD_bit at DMA3PAD.B13;
    sbit  PAD_12_DMA3PAD_bit at DMA3PAD.B12;
    sbit  PAD_11_DMA3PAD_bit at DMA3PAD.B11;
    sbit  PAD_10_DMA3PAD_bit at DMA3PAD.B10;
    sbit  PAD_9_DMA3PAD_bit at DMA3PAD.B9;
    sbit  PAD_8_DMA3PAD_bit at DMA3PAD.B8;
    sbit  PAD_7_DMA3PAD_bit at DMA3PAD.B7;
    sbit  PAD_6_DMA3PAD_bit at DMA3PAD.B6;
    sbit  PAD_5_DMA3PAD_bit at DMA3PAD.B5;
    sbit  PAD_4_DMA3PAD_bit at DMA3PAD.B4;
    sbit  PAD_3_DMA3PAD_bit at DMA3PAD.B3;
    sbit  PAD_2_DMA3PAD_bit at DMA3PAD.B2;
    sbit  PAD_1_DMA3PAD_bit at DMA3PAD.B1;
    sbit  PAD_0_DMA3PAD_bit at DMA3PAD.B0;

    // DMA3CNT bits
    sbit  CNT_15_DMA3CNT_bit at DMA3CNT.B15;
    sbit  CNT_14_DMA3CNT_bit at DMA3CNT.B14;
    sbit  CNT_13_DMA3CNT_bit at DMA3CNT.B13;
    sbit  CNT_12_DMA3CNT_bit at DMA3CNT.B12;
    sbit  CNT_11_DMA3CNT_bit at DMA3CNT.B11;
    sbit  CNT_10_DMA3CNT_bit at DMA3CNT.B10;
    sbit  CNT_9_DMA3CNT_bit at DMA3CNT.B9;
    sbit  CNT_8_DMA3CNT_bit at DMA3CNT.B8;
    sbit  CNT_7_DMA3CNT_bit at DMA3CNT.B7;
    sbit  CNT_6_DMA3CNT_bit at DMA3CNT.B6;
    sbit  CNT_5_DMA3CNT_bit at DMA3CNT.B5;
    sbit  CNT_4_DMA3CNT_bit at DMA3CNT.B4;
    sbit  CNT_3_DMA3CNT_bit at DMA3CNT.B3;
    sbit  CNT_2_DMA3CNT_bit at DMA3CNT.B2;
    sbit  CNT_1_DMA3CNT_bit at DMA3CNT.B1;
    sbit  CNT_0_DMA3CNT_bit at DMA3CNT.B0;

    // DMACS0 bits
    const register unsigned short int PWCOL3 = 11;
    sbit  PWCOL3_bit at DMACS0.B11;
    const register unsigned short int PWCOL2 = 10;
    sbit  PWCOL2_bit at DMACS0.B10;
    const register unsigned short int PWCOL1 = 9;
    sbit  PWCOL1_bit at DMACS0.B9;
    const register unsigned short int PWCOL0 = 8;
    sbit  PWCOL0_bit at DMACS0.B8;
    const register unsigned short int XWCOL3 = 3;
    sbit  XWCOL3_bit at DMACS0.B3;
    const register unsigned short int XWCOL2 = 2;
    sbit  XWCOL2_bit at DMACS0.B2;
    const register unsigned short int XWCOL1 = 1;
    sbit  XWCOL1_bit at DMACS0.B1;
    const register unsigned short int XWCOL0 = 0;
    sbit  XWCOL0_bit at DMACS0.B0;

    // DMACS1 bits
    const register unsigned short int LSTCH_3 = 11;
    sbit  LSTCH_3_bit at DMACS1.B11;
    const register unsigned short int LSTCH_2 = 10;
    sbit  LSTCH_2_bit at DMACS1.B10;
    const register unsigned short int LSTCH_1 = 9;
    sbit  LSTCH_1_bit at DMACS1.B9;
    const register unsigned short int LSTCH_0 = 8;
    sbit  LSTCH_0_bit at DMACS1.B8;
    const register unsigned short int PPST3 = 3;
    sbit  PPST3_bit at DMACS1.B3;
    const register unsigned short int PPST2 = 2;
    sbit  PPST2_bit at DMACS1.B2;
    const register unsigned short int PPST1 = 1;
    sbit  PPST1_bit at DMACS1.B1;
    const register unsigned short int PPST0 = 0;
    sbit  PPST0_bit at DMACS1.B0;

    // DSADR bits
    const register unsigned short int DSADR_15 = 15;
    sbit  DSADR_15_bit at DSADR.B15;
    const register unsigned short int DSADR_14 = 14;
    sbit  DSADR_14_bit at DSADR.B14;
    const register unsigned short int DSADR_13 = 13;
    sbit  DSADR_13_bit at DSADR.B13;
    const register unsigned short int DSADR_12 = 12;
    sbit  DSADR_12_bit at DSADR.B12;
    const register unsigned short int DSADR_11 = 11;
    sbit  DSADR_11_bit at DSADR.B11;
    const register unsigned short int DSADR_10 = 10;
    sbit  DSADR_10_bit at DSADR.B10;
    const register unsigned short int DSADR_9 = 9;
    sbit  DSADR_9_bit at DSADR.B9;
    const register unsigned short int DSADR_8 = 8;
    sbit  DSADR_8_bit at DSADR.B8;
    const register unsigned short int DSADR_7 = 7;
    sbit  DSADR_7_bit at DSADR.B7;
    const register unsigned short int DSADR_6 = 6;
    sbit  DSADR_6_bit at DSADR.B6;
    const register unsigned short int DSADR_5 = 5;
    sbit  DSADR_5_bit at DSADR.B5;
    const register unsigned short int DSADR_4 = 4;
    sbit  DSADR_4_bit at DSADR.B4;
    const register unsigned short int DSADR_3 = 3;
    sbit  DSADR_3_bit at DSADR.B3;
    const register unsigned short int DSADR_2 = 2;
    sbit  DSADR_2_bit at DSADR.B2;
    const register unsigned short int DSADR_1 = 1;
    sbit  DSADR_1_bit at DSADR.B1;
    const register unsigned short int DSADR_0 = 0;
    sbit  DSADR_0_bit at DSADR.B0;

    // PTCON bits
    const register unsigned short int PTEN = 15;
    sbit  PTEN_bit at PTCON.B15;
    const register unsigned short int PTSIDL = 13;
    sbit  PTSIDL_bit at PTCON.B13;
    const register unsigned short int SESTAT = 12;
    sbit  SESTAT_bit at PTCON.B12;
    sbit  SESTAT_PTCON_bit at PTCON.B12;
    const register unsigned short int SEIEN = 11;
    sbit  SEIEN_bit at PTCON.B11;
    sbit  SEIEN_PTCON_bit at PTCON.B11;
    const register unsigned short int EIPU = 10;
    sbit  EIPU_bit at PTCON.B10;
    sbit  EIPU_PTCON_bit at PTCON.B10;
    const register unsigned short int SYNCPOL = 9;
    sbit  SYNCPOL_bit at PTCON.B9;
    sbit  SYNCPOL_PTCON_bit at PTCON.B9;
    const register unsigned short int SYNCOEN = 8;
    sbit  SYNCOEN_bit at PTCON.B8;
    sbit  SYNCOEN_PTCON_bit at PTCON.B8;
    const register unsigned short int SYNCEN = 7;
    sbit  SYNCEN_bit at PTCON.B7;
    sbit  SYNCEN_PTCON_bit at PTCON.B7;
    const register unsigned short int SYNCSRC_2 = 6;
    sbit  SYNCSRC_2_bit at PTCON.B6;
    sbit  SYNCSRC_2_PTCON_bit at PTCON.B6;
    const register unsigned short int SYNCSRC_1 = 5;
    sbit  SYNCSRC_1_bit at PTCON.B5;
    sbit  SYNCSRC_1_PTCON_bit at PTCON.B5;
    const register unsigned short int SYNCSRC_0 = 4;
    sbit  SYNCSRC_0_bit at PTCON.B4;
    sbit  SYNCSRC_0_PTCON_bit at PTCON.B4;
    const register unsigned short int SEVTPS_3 = 3;
    sbit  SEVTPS_3_bit at PTCON.B3;
    sbit  SEVTPS_3_PTCON_bit at PTCON.B3;
    const register unsigned short int SEVTPS_2 = 2;
    sbit  SEVTPS_2_bit at PTCON.B2;
    sbit  SEVTPS_2_PTCON_bit at PTCON.B2;
    const register unsigned short int SEVTPS_1 = 1;
    sbit  SEVTPS_1_bit at PTCON.B1;
    sbit  SEVTPS_1_PTCON_bit at PTCON.B1;
    const register unsigned short int SEVTPS_0 = 0;
    sbit  SEVTPS_0_bit at PTCON.B0;
    sbit  SEVTPS_0_PTCON_bit at PTCON.B0;

    // PTCON2 bits
    const register unsigned short int PCLKDIV_2 = 2;
    sbit  PCLKDIV_2_bit at PTCON2.B2;
    sbit  PCLKDIV_2_PTCON2_bit at PTCON2.B2;
    const register unsigned short int PCLKDIV_1 = 1;
    sbit  PCLKDIV_1_bit at PTCON2.B1;
    sbit  PCLKDIV_1_PTCON2_bit at PTCON2.B1;
    const register unsigned short int PCLKDIV_0 = 0;
    sbit  PCLKDIV_0_bit at PTCON2.B0;
    sbit  PCLKDIV_0_PTCON2_bit at PTCON2.B0;

    // PTPER bits
    const register unsigned short int PTPER_15 = 15;
    sbit  PTPER_15_bit at PTPER.B15;
    const register unsigned short int PTPER_14 = 14;
    sbit  PTPER_14_bit at PTPER.B14;
    const register unsigned short int PTPER_13 = 13;
    sbit  PTPER_13_bit at PTPER.B13;
    const register unsigned short int PTPER_12 = 12;
    sbit  PTPER_12_bit at PTPER.B12;
    const register unsigned short int PTPER_11 = 11;
    sbit  PTPER_11_bit at PTPER.B11;
    const register unsigned short int PTPER_10 = 10;
    sbit  PTPER_10_bit at PTPER.B10;
    const register unsigned short int PTPER_9 = 9;
    sbit  PTPER_9_bit at PTPER.B9;
    const register unsigned short int PTPER_8 = 8;
    sbit  PTPER_8_bit at PTPER.B8;
    const register unsigned short int PTPER_7 = 7;
    sbit  PTPER_7_bit at PTPER.B7;
    const register unsigned short int PTPER_6 = 6;
    sbit  PTPER_6_bit at PTPER.B6;
    const register unsigned short int PTPER_5 = 5;
    sbit  PTPER_5_bit at PTPER.B5;
    const register unsigned short int PTPER_4 = 4;
    sbit  PTPER_4_bit at PTPER.B4;
    const register unsigned short int PTPER_3 = 3;
    sbit  PTPER_3_bit at PTPER.B3;
    const register unsigned short int PTPER_2 = 2;
    sbit  PTPER_2_bit at PTPER.B2;
    const register unsigned short int PTPER_1 = 1;
    sbit  PTPER_1_bit at PTPER.B1;
    const register unsigned short int PTPER_0 = 0;
    sbit  PTPER_0_bit at PTPER.B0;

    // SEVTCMP bits
    const register unsigned short int SEVTCMP_12 = 15;
    sbit  SEVTCMP_12_bit at SEVTCMP.B15;
    const register unsigned short int SEVTCMP_11 = 14;
    sbit  SEVTCMP_11_bit at SEVTCMP.B14;
    const register unsigned short int SEVTCMP_10 = 13;
    sbit  SEVTCMP_10_bit at SEVTCMP.B13;
    const register unsigned short int SEVTCMP_9 = 12;
    sbit  SEVTCMP_9_bit at SEVTCMP.B12;
    const register unsigned short int SEVTCMP_8 = 11;
    sbit  SEVTCMP_8_bit at SEVTCMP.B11;
    const register unsigned short int SEVTCMP_7 = 10;
    sbit  SEVTCMP_7_bit at SEVTCMP.B10;
    const register unsigned short int SEVTCMP_6 = 9;
    sbit  SEVTCMP_6_bit at SEVTCMP.B9;
    const register unsigned short int SEVTCMP_5 = 8;
    sbit  SEVTCMP_5_bit at SEVTCMP.B8;
    const register unsigned short int SEVTCMP_4 = 7;
    sbit  SEVTCMP_4_bit at SEVTCMP.B7;
    const register unsigned short int SEVTCMP_3 = 6;
    sbit  SEVTCMP_3_bit at SEVTCMP.B6;
    const register unsigned short int SEVTCMP_2 = 5;
    sbit  SEVTCMP_2_bit at SEVTCMP.B5;
    const register unsigned short int SEVTCMP_1 = 4;
    sbit  SEVTCMP_1_bit at SEVTCMP.B4;
    const register unsigned short int SEVTCMP_0 = 3;
    sbit  SEVTCMP_0_bit at SEVTCMP.B3;

    // MDC bits
    const register unsigned short int MDC_15 = 15;
    sbit  MDC_15_bit at MDC.B15;
    const register unsigned short int MDC_14 = 14;
    sbit  MDC_14_bit at MDC.B14;
    const register unsigned short int MDC_13 = 13;
    sbit  MDC_13_bit at MDC.B13;
    const register unsigned short int MDC_12 = 12;
    sbit  MDC_12_bit at MDC.B12;
    const register unsigned short int MDC_11 = 11;
    sbit  MDC_11_bit at MDC.B11;
    const register unsigned short int MDC_10 = 10;
    sbit  MDC_10_bit at MDC.B10;
    const register unsigned short int MDC_9 = 9;
    sbit  MDC_9_bit at MDC.B9;
    const register unsigned short int MDC_8 = 8;
    sbit  MDC_8_bit at MDC.B8;
    const register unsigned short int MDC_7 = 7;
    sbit  MDC_7_bit at MDC.B7;
    const register unsigned short int MDC_6 = 6;
    sbit  MDC_6_bit at MDC.B6;
    const register unsigned short int MDC_5 = 5;
    sbit  MDC_5_bit at MDC.B5;
    const register unsigned short int MDC_4 = 4;
    sbit  MDC_4_bit at MDC.B4;
    const register unsigned short int MDC_3 = 3;
    sbit  MDC_3_bit at MDC.B3;
    const register unsigned short int MDC_2 = 2;
    sbit  MDC_2_bit at MDC.B2;
    const register unsigned short int MDC_1 = 1;
    sbit  MDC_1_bit at MDC.B1;
    const register unsigned short int MDC_0 = 0;
    sbit  MDC_0_bit at MDC.B0;

    // STCON bits
    sbit  SESTAT_STCON_bit at STCON.B12;
    sbit  SEIEN_STCON_bit at STCON.B11;
    sbit  EIPU_STCON_bit at STCON.B10;
    sbit  SYNCPOL_STCON_bit at STCON.B9;
    sbit  SYNCOEN_STCON_bit at STCON.B8;
    sbit  SYNCEN_STCON_bit at STCON.B7;
    sbit  SYNCSRC_2_STCON_bit at STCON.B6;
    sbit  SYNCSRC_1_STCON_bit at STCON.B5;
    sbit  SYNCSRC_0_STCON_bit at STCON.B4;
    sbit  SEVTPS_3_STCON_bit at STCON.B3;
    sbit  SEVTPS_2_STCON_bit at STCON.B2;
    sbit  SEVTPS_1_STCON_bit at STCON.B1;
    sbit  SEVTPS_0_STCON_bit at STCON.B0;

    // STCON2 bits
    sbit  PCLKDIV_2_STCON2_bit at STCON2.B2;
    sbit  PCLKDIV_1_STCON2_bit at STCON2.B1;
    sbit  PCLKDIV_0_STCON2_bit at STCON2.B0;

    // STPER bits
    const register unsigned short int STPER_15 = 15;
    sbit  STPER_15_bit at STPER.B15;
    const register unsigned short int STPER_14 = 14;
    sbit  STPER_14_bit at STPER.B14;
    const register unsigned short int STPER_13 = 13;
    sbit  STPER_13_bit at STPER.B13;
    const register unsigned short int STPER_12 = 12;
    sbit  STPER_12_bit at STPER.B12;
    const register unsigned short int STPER_11 = 11;
    sbit  STPER_11_bit at STPER.B11;
    const register unsigned short int STPER_10 = 10;
    sbit  STPER_10_bit at STPER.B10;
    const register unsigned short int STPER_9 = 9;
    sbit  STPER_9_bit at STPER.B9;
    const register unsigned short int STPER_8 = 8;
    sbit  STPER_8_bit at STPER.B8;
    const register unsigned short int STPER_7 = 7;
    sbit  STPER_7_bit at STPER.B7;
    const register unsigned short int STPER_6 = 6;
    sbit  STPER_6_bit at STPER.B6;
    const register unsigned short int STPER_5 = 5;
    sbit  STPER_5_bit at STPER.B5;
    const register unsigned short int STPER_4 = 4;
    sbit  STPER_4_bit at STPER.B4;
    const register unsigned short int STPER_3 = 3;
    sbit  STPER_3_bit at STPER.B3;
    const register unsigned short int STPER_2 = 2;
    sbit  STPER_2_bit at STPER.B2;
    const register unsigned short int STPER_1 = 1;
    sbit  STPER_1_bit at STPER.B1;
    const register unsigned short int STPER_0 = 0;
    sbit  STPER_0_bit at STPER.B0;

    // SSEVTCMP bits
    const register unsigned short int SSEVTCMP_12 = 15;
    sbit  SSEVTCMP_12_bit at SSEVTCMP.B15;
    const register unsigned short int SSEVTCMP_11 = 14;
    sbit  SSEVTCMP_11_bit at SSEVTCMP.B14;
    const register unsigned short int SSEVTCMP_10 = 13;
    sbit  SSEVTCMP_10_bit at SSEVTCMP.B13;
    const register unsigned short int SSEVTCMP_9 = 12;
    sbit  SSEVTCMP_9_bit at SSEVTCMP.B12;
    const register unsigned short int SSEVTCMP_8 = 11;
    sbit  SSEVTCMP_8_bit at SSEVTCMP.B11;
    const register unsigned short int SSEVTCMP_7 = 10;
    sbit  SSEVTCMP_7_bit at SSEVTCMP.B10;
    const register unsigned short int SSEVTCMP_6 = 9;
    sbit  SSEVTCMP_6_bit at SSEVTCMP.B9;
    const register unsigned short int SSEVTCMP_5 = 8;
    sbit  SSEVTCMP_5_bit at SSEVTCMP.B8;
    const register unsigned short int SSEVTCMP_4 = 7;
    sbit  SSEVTCMP_4_bit at SSEVTCMP.B7;
    const register unsigned short int SSEVTCMP_3 = 6;
    sbit  SSEVTCMP_3_bit at SSEVTCMP.B6;
    const register unsigned short int SSEVTCMP_2 = 5;
    sbit  SSEVTCMP_2_bit at SSEVTCMP.B5;
    const register unsigned short int SSEVTCMP_1 = 4;
    sbit  SSEVTCMP_1_bit at SSEVTCMP.B4;
    const register unsigned short int SSEVTCMP_0 = 3;
    sbit  SSEVTCMP_0_bit at SSEVTCMP.B3;

    // CHOP bits
    const register unsigned short int CHPCLKEN = 15;
    sbit  CHPCLKEN_bit at CHOP.B15;
    const register unsigned short int CHOPCLK_6 = 9;
    sbit  CHOPCLK_6_bit at CHOP.B9;
    const register unsigned short int CHOPCLK_5 = 8;
    sbit  CHOPCLK_5_bit at CHOP.B8;
    const register unsigned short int CHOPCLK_4 = 7;
    sbit  CHOPCLK_4_bit at CHOP.B7;
    const register unsigned short int CHOPCLK_3 = 6;
    sbit  CHOPCLK_3_bit at CHOP.B6;
    const register unsigned short int CHOPCLK_2 = 5;
    sbit  CHOPCLK_2_bit at CHOP.B5;
    const register unsigned short int CHOPCLK_1 = 4;
    sbit  CHOPCLK_1_bit at CHOP.B4;
    const register unsigned short int CHOPCLK_0 = 3;
    sbit  CHOPCLK_0_bit at CHOP.B3;

    // PWMCON1 bits
    const register unsigned short int FLTSTAT = 15;
    sbit  FLTSTAT_bit at PWMCON1.B15;
    sbit  FLTSTAT_PWMCON1_bit at PWMCON1.B15;
    const register unsigned short int CLSTAT = 14;
    sbit  CLSTAT_bit at PWMCON1.B14;
    sbit  CLSTAT_PWMCON1_bit at PWMCON1.B14;
    const register unsigned short int TRGSTAT = 13;
    sbit  TRGSTAT_bit at PWMCON1.B13;
    sbit  TRGSTAT_PWMCON1_bit at PWMCON1.B13;
    const register unsigned short int FLTIEN = 12;
    sbit  FLTIEN_bit at PWMCON1.B12;
    sbit  FLTIEN_PWMCON1_bit at PWMCON1.B12;
    const register unsigned short int CLIEN = 11;
    sbit  CLIEN_bit at PWMCON1.B11;
    sbit  CLIEN_PWMCON1_bit at PWMCON1.B11;
    const register unsigned short int TRGIEN = 10;
    sbit  TRGIEN_bit at PWMCON1.B10;
    sbit  TRGIEN_PWMCON1_bit at PWMCON1.B10;
    const register unsigned short int ITB = 9;
    sbit  ITB_bit at PWMCON1.B9;
    sbit  ITB_PWMCON1_bit at PWMCON1.B9;
    const register unsigned short int MDCS = 8;
    sbit  MDCS_bit at PWMCON1.B8;
    sbit  MDCS_PWMCON1_bit at PWMCON1.B8;
    const register unsigned short int DTC_1 = 7;
    sbit  DTC_1_bit at PWMCON1.B7;
    sbit  DTC_1_PWMCON1_bit at PWMCON1.B7;
    const register unsigned short int DTC_0 = 6;
    sbit  DTC_0_bit at PWMCON1.B6;
    sbit  DTC_0_PWMCON1_bit at PWMCON1.B6;
    const register unsigned short int DTCP = 5;
    sbit  DTCP_bit at PWMCON1.B5;
    sbit  DTCP_PWMCON1_bit at PWMCON1.B5;
    const register unsigned short int MTBS = 3;
    sbit  MTBS_bit at PWMCON1.B3;
    sbit  MTBS_PWMCON1_bit at PWMCON1.B3;
    const register unsigned short int CAM = 2;
    sbit  CAM_bit at PWMCON1.B2;
    sbit  CAM_PWMCON1_bit at PWMCON1.B2;
    const register unsigned short int XPRES = 1;
    sbit  XPRES_bit at PWMCON1.B1;
    sbit  XPRES_PWMCON1_bit at PWMCON1.B1;
    const register unsigned short int IUE = 0;
    sbit  IUE_bit at PWMCON1.B0;
    sbit  IUE_PWMCON1_bit at PWMCON1.B0;

    // IOCON1 bits
    const register unsigned short int PENH = 15;
    sbit  PENH_bit at IOCON1.B15;
    sbit  PENH_IOCON1_bit at IOCON1.B15;
    const register unsigned short int PENL = 14;
    sbit  PENL_bit at IOCON1.B14;
    sbit  PENL_IOCON1_bit at IOCON1.B14;
    const register unsigned short int POLH = 13;
    sbit  POLH_bit at IOCON1.B13;
    sbit  POLH_IOCON1_bit at IOCON1.B13;
    const register unsigned short int POLL = 12;
    sbit  POLL_bit at IOCON1.B12;
    sbit  POLL_IOCON1_bit at IOCON1.B12;
    const register unsigned short int PMOD_1 = 11;
    sbit  PMOD_1_bit at IOCON1.B11;
    sbit  PMOD_1_IOCON1_bit at IOCON1.B11;
    const register unsigned short int PMOD_0 = 10;
    sbit  PMOD_0_bit at IOCON1.B10;
    sbit  PMOD_0_IOCON1_bit at IOCON1.B10;
    const register unsigned short int OVRENH = 9;
    sbit  OVRENH_bit at IOCON1.B9;
    sbit  OVRENH_IOCON1_bit at IOCON1.B9;
    const register unsigned short int OVRENL = 8;
    sbit  OVRENL_bit at IOCON1.B8;
    sbit  OVRENL_IOCON1_bit at IOCON1.B8;
    const register unsigned short int OVRDAT_1 = 7;
    sbit  OVRDAT_1_bit at IOCON1.B7;
    sbit  OVRDAT_1_IOCON1_bit at IOCON1.B7;
    const register unsigned short int OVRDAT_0 = 6;
    sbit  OVRDAT_0_bit at IOCON1.B6;
    sbit  OVRDAT_0_IOCON1_bit at IOCON1.B6;
    const register unsigned short int FLTDAT_1 = 5;
    sbit  FLTDAT_1_bit at IOCON1.B5;
    sbit  FLTDAT_1_IOCON1_bit at IOCON1.B5;
    const register unsigned short int FLTDAT_0 = 4;
    sbit  FLTDAT_0_bit at IOCON1.B4;
    sbit  FLTDAT_0_IOCON1_bit at IOCON1.B4;
    const register unsigned short int CLDAT_1 = 3;
    sbit  CLDAT_1_bit at IOCON1.B3;
    sbit  CLDAT_1_IOCON1_bit at IOCON1.B3;
    const register unsigned short int CLDAT_0 = 2;
    sbit  CLDAT_0_bit at IOCON1.B2;
    sbit  CLDAT_0_IOCON1_bit at IOCON1.B2;
    const register unsigned short int SWAP = 1;
    sbit  SWAP_bit at IOCON1.B1;
    sbit  SWAP_IOCON1_bit at IOCON1.B1;
    const register unsigned short int OSYNC = 0;
    sbit  OSYNC_bit at IOCON1.B0;
    sbit  OSYNC_IOCON1_bit at IOCON1.B0;

    // FCLCON1 bits
    const register unsigned short int IFLTMOD = 15;
    sbit  IFLTMOD_bit at FCLCON1.B15;
    sbit  IFLTMOD_FCLCON1_bit at FCLCON1.B15;
    const register unsigned short int CLSRC_4 = 14;
    sbit  CLSRC_4_bit at FCLCON1.B14;
    sbit  CLSRC_4_FCLCON1_bit at FCLCON1.B14;
    const register unsigned short int CLSRC_3 = 13;
    sbit  CLSRC_3_bit at FCLCON1.B13;
    sbit  CLSRC_3_FCLCON1_bit at FCLCON1.B13;
    const register unsigned short int CLSRC_2 = 12;
    sbit  CLSRC_2_bit at FCLCON1.B12;
    sbit  CLSRC_2_FCLCON1_bit at FCLCON1.B12;
    const register unsigned short int CLSRC_1 = 11;
    sbit  CLSRC_1_bit at FCLCON1.B11;
    sbit  CLSRC_1_FCLCON1_bit at FCLCON1.B11;
    const register unsigned short int CLSRC_0 = 10;
    sbit  CLSRC_0_bit at FCLCON1.B10;
    sbit  CLSRC_0_FCLCON1_bit at FCLCON1.B10;
    const register unsigned short int CLPOL = 9;
    sbit  CLPOL_bit at FCLCON1.B9;
    sbit  CLPOL_FCLCON1_bit at FCLCON1.B9;
    const register unsigned short int CLMOD = 8;
    sbit  CLMOD_bit at FCLCON1.B8;
    sbit  CLMOD_FCLCON1_bit at FCLCON1.B8;
    const register unsigned short int FLTSRC_4 = 7;
    sbit  FLTSRC_4_bit at FCLCON1.B7;
    sbit  FLTSRC_4_FCLCON1_bit at FCLCON1.B7;
    const register unsigned short int FLTSRC_3 = 6;
    sbit  FLTSRC_3_bit at FCLCON1.B6;
    sbit  FLTSRC_3_FCLCON1_bit at FCLCON1.B6;
    const register unsigned short int FLTSRC_2 = 5;
    sbit  FLTSRC_2_bit at FCLCON1.B5;
    sbit  FLTSRC_2_FCLCON1_bit at FCLCON1.B5;
    const register unsigned short int FLTSRC_1 = 4;
    sbit  FLTSRC_1_bit at FCLCON1.B4;
    sbit  FLTSRC_1_FCLCON1_bit at FCLCON1.B4;
    const register unsigned short int FLTSRC_0 = 3;
    sbit  FLTSRC_0_bit at FCLCON1.B3;
    sbit  FLTSRC_0_FCLCON1_bit at FCLCON1.B3;
    const register unsigned short int FLTPOL = 2;
    sbit  FLTPOL_bit at FCLCON1.B2;
    sbit  FLTPOL_FCLCON1_bit at FCLCON1.B2;
    const register unsigned short int FLTMOD_1 = 1;
    sbit  FLTMOD_1_bit at FCLCON1.B1;
    sbit  FLTMOD_1_FCLCON1_bit at FCLCON1.B1;
    const register unsigned short int FLTMOD_0 = 0;
    sbit  FLTMOD_0_bit at FCLCON1.B0;
    sbit  FLTMOD_0_FCLCON1_bit at FCLCON1.B0;

    // PDC1 bits
    const register unsigned short int PDC1_15 = 15;
    sbit  PDC1_15_bit at PDC1.B15;
    const register unsigned short int PDC1_14 = 14;
    sbit  PDC1_14_bit at PDC1.B14;
    const register unsigned short int PDC1_13 = 13;
    sbit  PDC1_13_bit at PDC1.B13;
    const register unsigned short int PDC1_12 = 12;
    sbit  PDC1_12_bit at PDC1.B12;
    const register unsigned short int PDC1_11 = 11;
    sbit  PDC1_11_bit at PDC1.B11;
    const register unsigned short int PDC1_10 = 10;
    sbit  PDC1_10_bit at PDC1.B10;
    const register unsigned short int PDC1_9 = 9;
    sbit  PDC1_9_bit at PDC1.B9;
    const register unsigned short int PDC1_8 = 8;
    sbit  PDC1_8_bit at PDC1.B8;
    const register unsigned short int PDC1_7 = 7;
    sbit  PDC1_7_bit at PDC1.B7;
    const register unsigned short int PDC1_6 = 6;
    sbit  PDC1_6_bit at PDC1.B6;
    const register unsigned short int PDC1_5 = 5;
    sbit  PDC1_5_bit at PDC1.B5;
    const register unsigned short int PDC1_4 = 4;
    sbit  PDC1_4_bit at PDC1.B4;
    const register unsigned short int PDC1_3 = 3;
    sbit  PDC1_3_bit at PDC1.B3;
    const register unsigned short int PDC1_2 = 2;
    sbit  PDC1_2_bit at PDC1.B2;
    const register unsigned short int PDC1_1 = 1;
    sbit  PDC1_1_bit at PDC1.B1;
    const register unsigned short int PDC1_0 = 0;
    sbit  PDC1_0_bit at PDC1.B0;

    // PHASE1 bits
    const register unsigned short int PHASE1_15 = 15;
    sbit  PHASE1_15_bit at PHASE1.B15;
    const register unsigned short int PHASE1_14 = 14;
    sbit  PHASE1_14_bit at PHASE1.B14;
    const register unsigned short int PHASE1_13 = 13;
    sbit  PHASE1_13_bit at PHASE1.B13;
    const register unsigned short int PHASE1_12 = 12;
    sbit  PHASE1_12_bit at PHASE1.B12;
    const register unsigned short int PHASE1_11 = 11;
    sbit  PHASE1_11_bit at PHASE1.B11;
    const register unsigned short int PHASE1_10 = 10;
    sbit  PHASE1_10_bit at PHASE1.B10;
    const register unsigned short int PHASE1_9 = 9;
    sbit  PHASE1_9_bit at PHASE1.B9;
    const register unsigned short int PHASE1_8 = 8;
    sbit  PHASE1_8_bit at PHASE1.B8;
    const register unsigned short int PHASE1_7 = 7;
    sbit  PHASE1_7_bit at PHASE1.B7;
    const register unsigned short int PHASE1_6 = 6;
    sbit  PHASE1_6_bit at PHASE1.B6;
    const register unsigned short int PHASE1_5 = 5;
    sbit  PHASE1_5_bit at PHASE1.B5;
    const register unsigned short int PHASE1_4 = 4;
    sbit  PHASE1_4_bit at PHASE1.B4;
    const register unsigned short int PHASE1_3 = 3;
    sbit  PHASE1_3_bit at PHASE1.B3;
    const register unsigned short int PHASE1_2 = 2;
    sbit  PHASE1_2_bit at PHASE1.B2;
    const register unsigned short int PHASE1_1 = 1;
    sbit  PHASE1_1_bit at PHASE1.B1;
    const register unsigned short int PHASE1_0 = 0;
    sbit  PHASE1_0_bit at PHASE1.B0;

    // DTR1 bits
    const register unsigned short int DTR1_13 = 13;
    sbit  DTR1_13_bit at DTR1.B13;
    const register unsigned short int DTR1_12 = 12;
    sbit  DTR1_12_bit at DTR1.B12;
    const register unsigned short int DTR1_11 = 11;
    sbit  DTR1_11_bit at DTR1.B11;
    const register unsigned short int DTR1_10 = 10;
    sbit  DTR1_10_bit at DTR1.B10;
    const register unsigned short int DTR1_9 = 9;
    sbit  DTR1_9_bit at DTR1.B9;
    const register unsigned short int DTR1_8 = 8;
    sbit  DTR1_8_bit at DTR1.B8;
    const register unsigned short int DTR1_7 = 7;
    sbit  DTR1_7_bit at DTR1.B7;
    const register unsigned short int DTR1_6 = 6;
    sbit  DTR1_6_bit at DTR1.B6;
    const register unsigned short int DTR1_5 = 5;
    sbit  DTR1_5_bit at DTR1.B5;
    const register unsigned short int DTR1_4 = 4;
    sbit  DTR1_4_bit at DTR1.B4;
    const register unsigned short int DTR1_3 = 3;
    sbit  DTR1_3_bit at DTR1.B3;
    const register unsigned short int DTR1_2 = 2;
    sbit  DTR1_2_bit at DTR1.B2;
    const register unsigned short int DTR1_1 = 1;
    sbit  DTR1_1_bit at DTR1.B1;
    const register unsigned short int DTR1_0 = 0;
    sbit  DTR1_0_bit at DTR1.B0;

    // ALTDTR1 bits
    const register unsigned short int ALTDTR1_13 = 13;
    sbit  ALTDTR1_13_bit at ALTDTR1.B13;
    const register unsigned short int ALTDTR1_12 = 12;
    sbit  ALTDTR1_12_bit at ALTDTR1.B12;
    const register unsigned short int ALTDTR1_11 = 11;
    sbit  ALTDTR1_11_bit at ALTDTR1.B11;
    const register unsigned short int ALTDTR1_10 = 10;
    sbit  ALTDTR1_10_bit at ALTDTR1.B10;
    const register unsigned short int ALTDTR1_9 = 9;
    sbit  ALTDTR1_9_bit at ALTDTR1.B9;
    const register unsigned short int ALTDTR1_8 = 8;
    sbit  ALTDTR1_8_bit at ALTDTR1.B8;
    const register unsigned short int ALTDTR1_7 = 7;
    sbit  ALTDTR1_7_bit at ALTDTR1.B7;
    const register unsigned short int ALTDTR1_6 = 6;
    sbit  ALTDTR1_6_bit at ALTDTR1.B6;
    const register unsigned short int ALTDTR1_5 = 5;
    sbit  ALTDTR1_5_bit at ALTDTR1.B5;
    const register unsigned short int ALTDTR1_4 = 4;
    sbit  ALTDTR1_4_bit at ALTDTR1.B4;
    const register unsigned short int ALTDTR1_3 = 3;
    sbit  ALTDTR1_3_bit at ALTDTR1.B3;
    const register unsigned short int ALTDTR1_2 = 2;
    sbit  ALTDTR1_2_bit at ALTDTR1.B2;
    const register unsigned short int ALTDTR1_1 = 1;
    sbit  ALTDTR1_1_bit at ALTDTR1.B1;
    const register unsigned short int ALTDTR1_0 = 0;
    sbit  ALTDTR1_0_bit at ALTDTR1.B0;

    // SDC1 bits
    const register unsigned short int SDC1_15 = 15;
    sbit  SDC1_15_bit at SDC1.B15;
    const register unsigned short int SDC1_14 = 14;
    sbit  SDC1_14_bit at SDC1.B14;
    const register unsigned short int SDC1_13 = 13;
    sbit  SDC1_13_bit at SDC1.B13;
    const register unsigned short int SDC1_12 = 12;
    sbit  SDC1_12_bit at SDC1.B12;
    const register unsigned short int SDC1_11 = 11;
    sbit  SDC1_11_bit at SDC1.B11;
    const register unsigned short int SDC1_10 = 10;
    sbit  SDC1_10_bit at SDC1.B10;
    const register unsigned short int SDC1_9 = 9;
    sbit  SDC1_9_bit at SDC1.B9;
    const register unsigned short int SDC1_8 = 8;
    sbit  SDC1_8_bit at SDC1.B8;
    const register unsigned short int SDC1_7 = 7;
    sbit  SDC1_7_bit at SDC1.B7;
    const register unsigned short int SDC1_6 = 6;
    sbit  SDC1_6_bit at SDC1.B6;
    const register unsigned short int SDC1_5 = 5;
    sbit  SDC1_5_bit at SDC1.B5;
    const register unsigned short int SDC1_4 = 4;
    sbit  SDC1_4_bit at SDC1.B4;
    const register unsigned short int SDC1_3 = 3;
    sbit  SDC1_3_bit at SDC1.B3;
    const register unsigned short int SDC1_2 = 2;
    sbit  SDC1_2_bit at SDC1.B2;
    const register unsigned short int SDC1_1 = 1;
    sbit  SDC1_1_bit at SDC1.B1;
    const register unsigned short int SDC1_0 = 0;
    sbit  SDC1_0_bit at SDC1.B0;

    // SPHASE1 bits
    const register unsigned short int SPHASE1_15 = 15;
    sbit  SPHASE1_15_bit at SPHASE1.B15;
    const register unsigned short int SPHASE1_14 = 14;
    sbit  SPHASE1_14_bit at SPHASE1.B14;
    const register unsigned short int SPHASE1_13 = 13;
    sbit  SPHASE1_13_bit at SPHASE1.B13;
    const register unsigned short int SPHASE1_12 = 12;
    sbit  SPHASE1_12_bit at SPHASE1.B12;
    const register unsigned short int SPHASE1_11 = 11;
    sbit  SPHASE1_11_bit at SPHASE1.B11;
    const register unsigned short int SPHASE1_10 = 10;
    sbit  SPHASE1_10_bit at SPHASE1.B10;
    const register unsigned short int SPHASE1_9 = 9;
    sbit  SPHASE1_9_bit at SPHASE1.B9;
    const register unsigned short int SPHASE1_8 = 8;
    sbit  SPHASE1_8_bit at SPHASE1.B8;
    const register unsigned short int SPHASE1_7 = 7;
    sbit  SPHASE1_7_bit at SPHASE1.B7;
    const register unsigned short int SPHASE1_6 = 6;
    sbit  SPHASE1_6_bit at SPHASE1.B6;
    const register unsigned short int SPHASE1_5 = 5;
    sbit  SPHASE1_5_bit at SPHASE1.B5;
    const register unsigned short int SPHASE1_4 = 4;
    sbit  SPHASE1_4_bit at SPHASE1.B4;
    const register unsigned short int SPHASE1_3 = 3;
    sbit  SPHASE1_3_bit at SPHASE1.B3;
    const register unsigned short int SPHASE1_2 = 2;
    sbit  SPHASE1_2_bit at SPHASE1.B2;
    const register unsigned short int SPHASE1_1 = 1;
    sbit  SPHASE1_1_bit at SPHASE1.B1;
    const register unsigned short int SPHASE1_0 = 0;
    sbit  SPHASE1_0_bit at SPHASE1.B0;

    // TRIG1 bits
    const register unsigned short int TRGCMP_12 = 15;
    sbit  TRGCMP_12_bit at TRIG1.B15;
    sbit  TRGCMP_12_TRIG1_bit at TRIG1.B15;
    const register unsigned short int TRGCMP_11 = 14;
    sbit  TRGCMP_11_bit at TRIG1.B14;
    sbit  TRGCMP_11_TRIG1_bit at TRIG1.B14;
    const register unsigned short int TRGCMP_10 = 13;
    sbit  TRGCMP_10_bit at TRIG1.B13;
    sbit  TRGCMP_10_TRIG1_bit at TRIG1.B13;
    const register unsigned short int TRGCMP_9 = 12;
    sbit  TRGCMP_9_bit at TRIG1.B12;
    sbit  TRGCMP_9_TRIG1_bit at TRIG1.B12;
    const register unsigned short int TRGCMP_8 = 11;
    sbit  TRGCMP_8_bit at TRIG1.B11;
    sbit  TRGCMP_8_TRIG1_bit at TRIG1.B11;
    const register unsigned short int TRGCMP_7 = 10;
    sbit  TRGCMP_7_bit at TRIG1.B10;
    sbit  TRGCMP_7_TRIG1_bit at TRIG1.B10;
    const register unsigned short int TRGCMP_6 = 9;
    sbit  TRGCMP_6_bit at TRIG1.B9;
    sbit  TRGCMP_6_TRIG1_bit at TRIG1.B9;
    const register unsigned short int TRGCMP_5 = 8;
    sbit  TRGCMP_5_bit at TRIG1.B8;
    sbit  TRGCMP_5_TRIG1_bit at TRIG1.B8;
    const register unsigned short int TRGCMP_4 = 7;
    sbit  TRGCMP_4_bit at TRIG1.B7;
    sbit  TRGCMP_4_TRIG1_bit at TRIG1.B7;
    const register unsigned short int TRGCMP_3 = 6;
    sbit  TRGCMP_3_bit at TRIG1.B6;
    sbit  TRGCMP_3_TRIG1_bit at TRIG1.B6;
    const register unsigned short int TRGCMP_2 = 5;
    sbit  TRGCMP_2_bit at TRIG1.B5;
    sbit  TRGCMP_2_TRIG1_bit at TRIG1.B5;
    const register unsigned short int TRGCMP_1 = 4;
    sbit  TRGCMP_1_bit at TRIG1.B4;
    sbit  TRGCMP_1_TRIG1_bit at TRIG1.B4;
    const register unsigned short int TRGCMP_0 = 3;
    sbit  TRGCMP_0_bit at TRIG1.B3;
    sbit  TRGCMP_0_TRIG1_bit at TRIG1.B3;

    // TRGCON1 bits
    const register unsigned short int TRGDIV_3 = 15;
    sbit  TRGDIV_3_bit at TRGCON1.B15;
    sbit  TRGDIV_3_TRGCON1_bit at TRGCON1.B15;
    const register unsigned short int TRGDIV_2 = 14;
    sbit  TRGDIV_2_bit at TRGCON1.B14;
    sbit  TRGDIV_2_TRGCON1_bit at TRGCON1.B14;
    const register unsigned short int TRGDIV_1 = 13;
    sbit  TRGDIV_1_bit at TRGCON1.B13;
    sbit  TRGDIV_1_TRGCON1_bit at TRGCON1.B13;
    const register unsigned short int TRGDIV_0 = 12;
    sbit  TRGDIV_0_bit at TRGCON1.B12;
    sbit  TRGDIV_0_TRGCON1_bit at TRGCON1.B12;
    const register unsigned short int DTM = 7;
    sbit  DTM_bit at TRGCON1.B7;
    sbit  DTM_TRGCON1_bit at TRGCON1.B7;
    const register unsigned short int TRGSTRT_5 = 5;
    sbit  TRGSTRT_5_bit at TRGCON1.B5;
    sbit  TRGSTRT_5_TRGCON1_bit at TRGCON1.B5;
    const register unsigned short int TRGSTRT_4 = 4;
    sbit  TRGSTRT_4_bit at TRGCON1.B4;
    sbit  TRGSTRT_4_TRGCON1_bit at TRGCON1.B4;
    const register unsigned short int TRGSTRT_3 = 3;
    sbit  TRGSTRT_3_bit at TRGCON1.B3;
    sbit  TRGSTRT_3_TRGCON1_bit at TRGCON1.B3;
    const register unsigned short int TRGSTRT_2 = 2;
    sbit  TRGSTRT_2_bit at TRGCON1.B2;
    sbit  TRGSTRT_2_TRGCON1_bit at TRGCON1.B2;
    const register unsigned short int TRGSTRT_1 = 1;
    sbit  TRGSTRT_1_bit at TRGCON1.B1;
    sbit  TRGSTRT_1_TRGCON1_bit at TRGCON1.B1;
    const register unsigned short int TRGSTRT_0 = 0;
    sbit  TRGSTRT_0_bit at TRGCON1.B0;
    sbit  TRGSTRT_0_TRGCON1_bit at TRGCON1.B0;

    // STRIG1 bits
    const register unsigned short int STRGCMP_12 = 15;
    sbit  STRGCMP_12_bit at STRIG1.B15;
    sbit  STRGCMP_12_STRIG1_bit at STRIG1.B15;
    const register unsigned short int STRGCMP_11 = 14;
    sbit  STRGCMP_11_bit at STRIG1.B14;
    sbit  STRGCMP_11_STRIG1_bit at STRIG1.B14;
    const register unsigned short int STRGCMP_10 = 13;
    sbit  STRGCMP_10_bit at STRIG1.B13;
    sbit  STRGCMP_10_STRIG1_bit at STRIG1.B13;
    const register unsigned short int STRGCMP_9 = 12;
    sbit  STRGCMP_9_bit at STRIG1.B12;
    sbit  STRGCMP_9_STRIG1_bit at STRIG1.B12;
    const register unsigned short int STRGCMP_8 = 11;
    sbit  STRGCMP_8_bit at STRIG1.B11;
    sbit  STRGCMP_8_STRIG1_bit at STRIG1.B11;
    const register unsigned short int STRGCMP_7 = 10;
    sbit  STRGCMP_7_bit at STRIG1.B10;
    sbit  STRGCMP_7_STRIG1_bit at STRIG1.B10;
    const register unsigned short int STRGCMP_6 = 9;
    sbit  STRGCMP_6_bit at STRIG1.B9;
    sbit  STRGCMP_6_STRIG1_bit at STRIG1.B9;
    const register unsigned short int STRGCMP_5 = 8;
    sbit  STRGCMP_5_bit at STRIG1.B8;
    sbit  STRGCMP_5_STRIG1_bit at STRIG1.B8;
    const register unsigned short int STRGCMP_4 = 7;
    sbit  STRGCMP_4_bit at STRIG1.B7;
    sbit  STRGCMP_4_STRIG1_bit at STRIG1.B7;
    const register unsigned short int STRGCMP_3 = 6;
    sbit  STRGCMP_3_bit at STRIG1.B6;
    sbit  STRGCMP_3_STRIG1_bit at STRIG1.B6;
    const register unsigned short int STRGCMP_2 = 5;
    sbit  STRGCMP_2_bit at STRIG1.B5;
    sbit  STRGCMP_2_STRIG1_bit at STRIG1.B5;
    const register unsigned short int STRGCMP_1 = 4;
    sbit  STRGCMP_1_bit at STRIG1.B4;
    sbit  STRGCMP_1_STRIG1_bit at STRIG1.B4;
    const register unsigned short int STRGCMP_0 = 3;
    sbit  STRGCMP_0_bit at STRIG1.B3;
    sbit  STRGCMP_0_STRIG1_bit at STRIG1.B3;

    // PWMCAP1 bits
    const register unsigned short int PWMCAP1_12 = 15;
    sbit  PWMCAP1_12_bit at PWMCAP1.B15;
    const register unsigned short int PWMCAP1_11 = 14;
    sbit  PWMCAP1_11_bit at PWMCAP1.B14;
    const register unsigned short int PWMCAP1_10 = 13;
    sbit  PWMCAP1_10_bit at PWMCAP1.B13;
    const register unsigned short int PWMCAP1_9 = 12;
    sbit  PWMCAP1_9_bit at PWMCAP1.B12;
    const register unsigned short int PWMCAP1_8 = 11;
    sbit  PWMCAP1_8_bit at PWMCAP1.B11;
    const register unsigned short int PWMCAP1_7 = 10;
    sbit  PWMCAP1_7_bit at PWMCAP1.B10;
    const register unsigned short int PWMCAP1_6 = 9;
    sbit  PWMCAP1_6_bit at PWMCAP1.B9;
    const register unsigned short int PWMCAP1_5 = 8;
    sbit  PWMCAP1_5_bit at PWMCAP1.B8;
    const register unsigned short int PWMCAP1_4 = 7;
    sbit  PWMCAP1_4_bit at PWMCAP1.B7;
    const register unsigned short int PWMCAP1_3 = 6;
    sbit  PWMCAP1_3_bit at PWMCAP1.B6;
    const register unsigned short int PWMCAP1_2 = 5;
    sbit  PWMCAP1_2_bit at PWMCAP1.B5;
    const register unsigned short int PWMCAP1_1 = 4;
    sbit  PWMCAP1_1_bit at PWMCAP1.B4;
    const register unsigned short int PWMCAP1_0 = 3;
    sbit  PWMCAP1_0_bit at PWMCAP1.B3;

    // LEBCON1 bits
    const register unsigned short int PHR = 15;
    sbit  PHR_bit at LEBCON1.B15;
    sbit  PHR_LEBCON1_bit at LEBCON1.B15;
    const register unsigned short int PHF = 14;
    sbit  PHF_bit at LEBCON1.B14;
    sbit  PHF_LEBCON1_bit at LEBCON1.B14;
    const register unsigned short int PLR = 13;
    sbit  PLR_bit at LEBCON1.B13;
    sbit  PLR_LEBCON1_bit at LEBCON1.B13;
    const register unsigned short int PLF = 12;
    sbit  PLF_bit at LEBCON1.B12;
    sbit  PLF_LEBCON1_bit at LEBCON1.B12;
    const register unsigned short int FLTLEBEN = 11;
    sbit  FLTLEBEN_bit at LEBCON1.B11;
    sbit  FLTLEBEN_LEBCON1_bit at LEBCON1.B11;
    const register unsigned short int CLLEBEN = 10;
    sbit  CLLEBEN_bit at LEBCON1.B10;
    sbit  CLLEBEN_LEBCON1_bit at LEBCON1.B10;
    const register unsigned short int BCH = 5;
    sbit  BCH_bit at LEBCON1.B5;
    sbit  BCH_LEBCON1_bit at LEBCON1.B5;
    sbit  BCL_LEBCON1_bit at LEBCON1.B4;
    const register unsigned short int BPHH = 3;
    sbit  BPHH_bit at LEBCON1.B3;
    sbit  BPHH_LEBCON1_bit at LEBCON1.B3;
    const register unsigned short int BPHL = 2;
    sbit  BPHL_bit at LEBCON1.B2;
    sbit  BPHL_LEBCON1_bit at LEBCON1.B2;
    const register unsigned short int BPLH = 1;
    sbit  BPLH_bit at LEBCON1.B1;
    sbit  BPLH_LEBCON1_bit at LEBCON1.B1;
    const register unsigned short int BPLL = 0;
    sbit  BPLL_bit at LEBCON1.B0;
    sbit  BPLL_LEBCON1_bit at LEBCON1.B0;

    // LEBDLY1 bits
    const register unsigned short int LEB_8 = 11;
    sbit  LEB_8_bit at LEBDLY1.B11;
    sbit  LEB_8_LEBDLY1_bit at LEBDLY1.B11;
    const register unsigned short int LEB_7 = 10;
    sbit  LEB_7_bit at LEBDLY1.B10;
    sbit  LEB_7_LEBDLY1_bit at LEBDLY1.B10;
    const register unsigned short int LEB_6 = 9;
    sbit  LEB_6_bit at LEBDLY1.B9;
    sbit  LEB_6_LEBDLY1_bit at LEBDLY1.B9;
    const register unsigned short int LEB_5 = 8;
    sbit  LEB_5_bit at LEBDLY1.B8;
    sbit  LEB_5_LEBDLY1_bit at LEBDLY1.B8;
    const register unsigned short int LEB_4 = 7;
    sbit  LEB_4_bit at LEBDLY1.B7;
    sbit  LEB_4_LEBDLY1_bit at LEBDLY1.B7;
    const register unsigned short int LEB_3 = 6;
    sbit  LEB_3_bit at LEBDLY1.B6;
    sbit  LEB_3_LEBDLY1_bit at LEBDLY1.B6;
    const register unsigned short int LEB_2 = 5;
    sbit  LEB_2_bit at LEBDLY1.B5;
    sbit  LEB_2_LEBDLY1_bit at LEBDLY1.B5;
    const register unsigned short int LEB_1 = 4;
    sbit  LEB_1_bit at LEBDLY1.B4;
    sbit  LEB_1_LEBDLY1_bit at LEBDLY1.B4;
    const register unsigned short int LEB_0 = 3;
    sbit  LEB_0_bit at LEBDLY1.B3;
    sbit  LEB_0_LEBDLY1_bit at LEBDLY1.B3;

    // AUXCON1 bits
    const register unsigned short int HRPDIS = 15;
    sbit  HRPDIS_bit at AUXCON1.B15;
    sbit  HRPDIS_AUXCON1_bit at AUXCON1.B15;
    const register unsigned short int HRDDIS = 14;
    sbit  HRDDIS_bit at AUXCON1.B14;
    sbit  HRDDIS_AUXCON1_bit at AUXCON1.B14;
    const register unsigned short int BLANKSEL_3 = 11;
    sbit  BLANKSEL_3_bit at AUXCON1.B11;
    sbit  BLANKSEL_3_AUXCON1_bit at AUXCON1.B11;
    const register unsigned short int BLANKSEL_2 = 10;
    sbit  BLANKSEL_2_bit at AUXCON1.B10;
    sbit  BLANKSEL_2_AUXCON1_bit at AUXCON1.B10;
    const register unsigned short int BLANKSEL_1 = 9;
    sbit  BLANKSEL_1_bit at AUXCON1.B9;
    sbit  BLANKSEL_1_AUXCON1_bit at AUXCON1.B9;
    const register unsigned short int BLANKSEL_0 = 8;
    sbit  BLANKSEL_0_bit at AUXCON1.B8;
    sbit  BLANKSEL_0_AUXCON1_bit at AUXCON1.B8;
    const register unsigned short int CHOPSEL_3 = 5;
    sbit  CHOPSEL_3_bit at AUXCON1.B5;
    sbit  CHOPSEL_3_AUXCON1_bit at AUXCON1.B5;
    const register unsigned short int CHOPSEL_2 = 4;
    sbit  CHOPSEL_2_bit at AUXCON1.B4;
    sbit  CHOPSEL_2_AUXCON1_bit at AUXCON1.B4;
    const register unsigned short int CHOPSEL_1 = 3;
    sbit  CHOPSEL_1_bit at AUXCON1.B3;
    sbit  CHOPSEL_1_AUXCON1_bit at AUXCON1.B3;
    const register unsigned short int CHOPSEL_0 = 2;
    sbit  CHOPSEL_0_bit at AUXCON1.B2;
    sbit  CHOPSEL_0_AUXCON1_bit at AUXCON1.B2;
    const register unsigned short int CHOPHEN = 1;
    sbit  CHOPHEN_bit at AUXCON1.B1;
    sbit  CHOPHEN_AUXCON1_bit at AUXCON1.B1;
    const register unsigned short int CHOPLEN = 0;
    sbit  CHOPLEN_bit at AUXCON1.B0;
    sbit  CHOPLEN_AUXCON1_bit at AUXCON1.B0;

    // PWMCON2 bits
    sbit  FLTSTAT_PWMCON2_bit at PWMCON2.B15;
    sbit  CLSTAT_PWMCON2_bit at PWMCON2.B14;
    sbit  TRGSTAT_PWMCON2_bit at PWMCON2.B13;
    sbit  FLTIEN_PWMCON2_bit at PWMCON2.B12;
    sbit  CLIEN_PWMCON2_bit at PWMCON2.B11;
    sbit  TRGIEN_PWMCON2_bit at PWMCON2.B10;
    sbit  ITB_PWMCON2_bit at PWMCON2.B9;
    sbit  MDCS_PWMCON2_bit at PWMCON2.B8;
    sbit  DTC_1_PWMCON2_bit at PWMCON2.B7;
    sbit  DTC_0_PWMCON2_bit at PWMCON2.B6;
    sbit  DTCP_PWMCON2_bit at PWMCON2.B5;
    sbit  MTBS_PWMCON2_bit at PWMCON2.B3;
    sbit  CAM_PWMCON2_bit at PWMCON2.B2;
    sbit  XPRES_PWMCON2_bit at PWMCON2.B1;
    sbit  IUE_PWMCON2_bit at PWMCON2.B0;

    // IOCON2 bits
    sbit  PENH_IOCON2_bit at IOCON2.B15;
    sbit  PENL_IOCON2_bit at IOCON2.B14;
    sbit  POLH_IOCON2_bit at IOCON2.B13;
    sbit  POLL_IOCON2_bit at IOCON2.B12;
    sbit  PMOD_1_IOCON2_bit at IOCON2.B11;
    sbit  PMOD_0_IOCON2_bit at IOCON2.B10;
    sbit  OVRENH_IOCON2_bit at IOCON2.B9;
    sbit  OVRENL_IOCON2_bit at IOCON2.B8;
    sbit  OVRDAT_1_IOCON2_bit at IOCON2.B7;
    sbit  OVRDAT_0_IOCON2_bit at IOCON2.B6;
    sbit  FLTDAT_1_IOCON2_bit at IOCON2.B5;
    sbit  FLTDAT_0_IOCON2_bit at IOCON2.B4;
    sbit  CLDAT_1_IOCON2_bit at IOCON2.B3;
    sbit  CLDAT_0_IOCON2_bit at IOCON2.B2;
    sbit  SWAP_IOCON2_bit at IOCON2.B1;
    sbit  OSYNC_IOCON2_bit at IOCON2.B0;

    // FCLCON2 bits
    sbit  IFLTMOD_FCLCON2_bit at FCLCON2.B15;
    sbit  CLSRC_4_FCLCON2_bit at FCLCON2.B14;
    sbit  CLSRC_3_FCLCON2_bit at FCLCON2.B13;
    sbit  CLSRC_2_FCLCON2_bit at FCLCON2.B12;
    sbit  CLSRC_1_FCLCON2_bit at FCLCON2.B11;
    sbit  CLSRC_0_FCLCON2_bit at FCLCON2.B10;
    sbit  CLPOL_FCLCON2_bit at FCLCON2.B9;
    sbit  CLMOD_FCLCON2_bit at FCLCON2.B8;
    sbit  FLTSRC_4_FCLCON2_bit at FCLCON2.B7;
    sbit  FLTSRC_3_FCLCON2_bit at FCLCON2.B6;
    sbit  FLTSRC_2_FCLCON2_bit at FCLCON2.B5;
    sbit  FLTSRC_1_FCLCON2_bit at FCLCON2.B4;
    sbit  FLTSRC_0_FCLCON2_bit at FCLCON2.B3;
    sbit  FLTPOL_FCLCON2_bit at FCLCON2.B2;
    sbit  FLTMOD_1_FCLCON2_bit at FCLCON2.B1;
    sbit  FLTMOD_0_FCLCON2_bit at FCLCON2.B0;

    // PDC2 bits
    const register unsigned short int PDC2_15 = 15;
    sbit  PDC2_15_bit at PDC2.B15;
    const register unsigned short int PDC2_14 = 14;
    sbit  PDC2_14_bit at PDC2.B14;
    const register unsigned short int PDC2_13 = 13;
    sbit  PDC2_13_bit at PDC2.B13;
    const register unsigned short int PDC2_12 = 12;
    sbit  PDC2_12_bit at PDC2.B12;
    const register unsigned short int PDC2_11 = 11;
    sbit  PDC2_11_bit at PDC2.B11;
    const register unsigned short int PDC2_10 = 10;
    sbit  PDC2_10_bit at PDC2.B10;
    const register unsigned short int PDC2_9 = 9;
    sbit  PDC2_9_bit at PDC2.B9;
    const register unsigned short int PDC2_8 = 8;
    sbit  PDC2_8_bit at PDC2.B8;
    const register unsigned short int PDC2_7 = 7;
    sbit  PDC2_7_bit at PDC2.B7;
    const register unsigned short int PDC2_6 = 6;
    sbit  PDC2_6_bit at PDC2.B6;
    const register unsigned short int PDC2_5 = 5;
    sbit  PDC2_5_bit at PDC2.B5;
    const register unsigned short int PDC2_4 = 4;
    sbit  PDC2_4_bit at PDC2.B4;
    const register unsigned short int PDC2_3 = 3;
    sbit  PDC2_3_bit at PDC2.B3;
    const register unsigned short int PDC2_2 = 2;
    sbit  PDC2_2_bit at PDC2.B2;
    const register unsigned short int PDC2_1 = 1;
    sbit  PDC2_1_bit at PDC2.B1;
    const register unsigned short int PDC2_0 = 0;
    sbit  PDC2_0_bit at PDC2.B0;

    // PHASE2 bits
    const register unsigned short int PHASE2_15 = 15;
    sbit  PHASE2_15_bit at PHASE2.B15;
    const register unsigned short int PHASE2_14 = 14;
    sbit  PHASE2_14_bit at PHASE2.B14;
    const register unsigned short int PHASE2_13 = 13;
    sbit  PHASE2_13_bit at PHASE2.B13;
    const register unsigned short int PHASE2_12 = 12;
    sbit  PHASE2_12_bit at PHASE2.B12;
    const register unsigned short int PHASE2_11 = 11;
    sbit  PHASE2_11_bit at PHASE2.B11;
    const register unsigned short int PHASE2_10 = 10;
    sbit  PHASE2_10_bit at PHASE2.B10;
    const register unsigned short int PHASE2_9 = 9;
    sbit  PHASE2_9_bit at PHASE2.B9;
    const register unsigned short int PHASE2_8 = 8;
    sbit  PHASE2_8_bit at PHASE2.B8;
    const register unsigned short int PHASE2_7 = 7;
    sbit  PHASE2_7_bit at PHASE2.B7;
    const register unsigned short int PHASE2_6 = 6;
    sbit  PHASE2_6_bit at PHASE2.B6;
    const register unsigned short int PHASE2_5 = 5;
    sbit  PHASE2_5_bit at PHASE2.B5;
    const register unsigned short int PHASE2_4 = 4;
    sbit  PHASE2_4_bit at PHASE2.B4;
    const register unsigned short int PHASE2_3 = 3;
    sbit  PHASE2_3_bit at PHASE2.B3;
    const register unsigned short int PHASE2_2 = 2;
    sbit  PHASE2_2_bit at PHASE2.B2;
    const register unsigned short int PHASE2_1 = 1;
    sbit  PHASE2_1_bit at PHASE2.B1;
    const register unsigned short int PHASE2_0 = 0;
    sbit  PHASE2_0_bit at PHASE2.B0;

    // DTR2 bits
    const register unsigned short int DTR2_13 = 13;
    sbit  DTR2_13_bit at DTR2.B13;
    const register unsigned short int DTR2_12 = 12;
    sbit  DTR2_12_bit at DTR2.B12;
    const register unsigned short int DTR2_11 = 11;
    sbit  DTR2_11_bit at DTR2.B11;
    const register unsigned short int DTR2_10 = 10;
    sbit  DTR2_10_bit at DTR2.B10;
    const register unsigned short int DTR2_9 = 9;
    sbit  DTR2_9_bit at DTR2.B9;
    const register unsigned short int DTR2_8 = 8;
    sbit  DTR2_8_bit at DTR2.B8;
    const register unsigned short int DTR2_7 = 7;
    sbit  DTR2_7_bit at DTR2.B7;
    const register unsigned short int DTR2_6 = 6;
    sbit  DTR2_6_bit at DTR2.B6;
    const register unsigned short int DTR2_5 = 5;
    sbit  DTR2_5_bit at DTR2.B5;
    const register unsigned short int DTR2_4 = 4;
    sbit  DTR2_4_bit at DTR2.B4;
    const register unsigned short int DTR2_3 = 3;
    sbit  DTR2_3_bit at DTR2.B3;
    const register unsigned short int DTR2_2 = 2;
    sbit  DTR2_2_bit at DTR2.B2;
    const register unsigned short int DTR2_1 = 1;
    sbit  DTR2_1_bit at DTR2.B1;
    const register unsigned short int DTR2_0 = 0;
    sbit  DTR2_0_bit at DTR2.B0;

    // ALTDTR2 bits
    const register unsigned short int ALTDTR2_13 = 13;
    sbit  ALTDTR2_13_bit at ALTDTR2.B13;
    const register unsigned short int ALTDTR2_12 = 12;
    sbit  ALTDTR2_12_bit at ALTDTR2.B12;
    const register unsigned short int ALTDTR2_11 = 11;
    sbit  ALTDTR2_11_bit at ALTDTR2.B11;
    const register unsigned short int ALTDTR2_10 = 10;
    sbit  ALTDTR2_10_bit at ALTDTR2.B10;
    const register unsigned short int ALTDTR2_9 = 9;
    sbit  ALTDTR2_9_bit at ALTDTR2.B9;
    const register unsigned short int ALTDTR2_8 = 8;
    sbit  ALTDTR2_8_bit at ALTDTR2.B8;
    const register unsigned short int ALTDTR2_7 = 7;
    sbit  ALTDTR2_7_bit at ALTDTR2.B7;
    const register unsigned short int ALTDTR2_6 = 6;
    sbit  ALTDTR2_6_bit at ALTDTR2.B6;
    const register unsigned short int ALTDTR2_5 = 5;
    sbit  ALTDTR2_5_bit at ALTDTR2.B5;
    const register unsigned short int ALTDTR2_4 = 4;
    sbit  ALTDTR2_4_bit at ALTDTR2.B4;
    const register unsigned short int ALTDTR2_3 = 3;
    sbit  ALTDTR2_3_bit at ALTDTR2.B3;
    const register unsigned short int ALTDTR2_2 = 2;
    sbit  ALTDTR2_2_bit at ALTDTR2.B2;
    const register unsigned short int ALTDTR2_1 = 1;
    sbit  ALTDTR2_1_bit at ALTDTR2.B1;
    const register unsigned short int ALTDTR2_0 = 0;
    sbit  ALTDTR2_0_bit at ALTDTR2.B0;

    // SDC2 bits
    const register unsigned short int SDC2_15 = 15;
    sbit  SDC2_15_bit at SDC2.B15;
    const register unsigned short int SDC2_14 = 14;
    sbit  SDC2_14_bit at SDC2.B14;
    const register unsigned short int SDC2_13 = 13;
    sbit  SDC2_13_bit at SDC2.B13;
    const register unsigned short int SDC2_12 = 12;
    sbit  SDC2_12_bit at SDC2.B12;
    const register unsigned short int SDC2_11 = 11;
    sbit  SDC2_11_bit at SDC2.B11;
    const register unsigned short int SDC2_10 = 10;
    sbit  SDC2_10_bit at SDC2.B10;
    const register unsigned short int SDC2_9 = 9;
    sbit  SDC2_9_bit at SDC2.B9;
    const register unsigned short int SDC2_8 = 8;
    sbit  SDC2_8_bit at SDC2.B8;
    const register unsigned short int SDC2_7 = 7;
    sbit  SDC2_7_bit at SDC2.B7;
    const register unsigned short int SDC2_6 = 6;
    sbit  SDC2_6_bit at SDC2.B6;
    const register unsigned short int SDC2_5 = 5;
    sbit  SDC2_5_bit at SDC2.B5;
    const register unsigned short int SDC2_4 = 4;
    sbit  SDC2_4_bit at SDC2.B4;
    const register unsigned short int SDC2_3 = 3;
    sbit  SDC2_3_bit at SDC2.B3;
    const register unsigned short int SDC2_2 = 2;
    sbit  SDC2_2_bit at SDC2.B2;
    const register unsigned short int SDC2_1 = 1;
    sbit  SDC2_1_bit at SDC2.B1;
    const register unsigned short int SDC2_0 = 0;
    sbit  SDC2_0_bit at SDC2.B0;

    // SPHASE2 bits
    const register unsigned short int SPHASE2_15 = 15;
    sbit  SPHASE2_15_bit at SPHASE2.B15;
    const register unsigned short int SPHASE2_14 = 14;
    sbit  SPHASE2_14_bit at SPHASE2.B14;
    const register unsigned short int SPHASE2_13 = 13;
    sbit  SPHASE2_13_bit at SPHASE2.B13;
    const register unsigned short int SPHASE2_12 = 12;
    sbit  SPHASE2_12_bit at SPHASE2.B12;
    const register unsigned short int SPHASE2_11 = 11;
    sbit  SPHASE2_11_bit at SPHASE2.B11;
    const register unsigned short int SPHASE2_10 = 10;
    sbit  SPHASE2_10_bit at SPHASE2.B10;
    const register unsigned short int SPHASE2_9 = 9;
    sbit  SPHASE2_9_bit at SPHASE2.B9;
    const register unsigned short int SPHASE2_8 = 8;
    sbit  SPHASE2_8_bit at SPHASE2.B8;
    const register unsigned short int SPHASE2_7 = 7;
    sbit  SPHASE2_7_bit at SPHASE2.B7;
    const register unsigned short int SPHASE2_6 = 6;
    sbit  SPHASE2_6_bit at SPHASE2.B6;
    const register unsigned short int SPHASE2_5 = 5;
    sbit  SPHASE2_5_bit at SPHASE2.B5;
    const register unsigned short int SPHASE2_4 = 4;
    sbit  SPHASE2_4_bit at SPHASE2.B4;
    const register unsigned short int SPHASE2_3 = 3;
    sbit  SPHASE2_3_bit at SPHASE2.B3;
    const register unsigned short int SPHASE2_2 = 2;
    sbit  SPHASE2_2_bit at SPHASE2.B2;
    const register unsigned short int SPHASE2_1 = 1;
    sbit  SPHASE2_1_bit at SPHASE2.B1;
    const register unsigned short int SPHASE2_0 = 0;
    sbit  SPHASE2_0_bit at SPHASE2.B0;

    // TRIG2 bits
    sbit  TRGCMP_12_TRIG2_bit at TRIG2.B15;
    sbit  TRGCMP_11_TRIG2_bit at TRIG2.B14;
    sbit  TRGCMP_10_TRIG2_bit at TRIG2.B13;
    sbit  TRGCMP_9_TRIG2_bit at TRIG2.B12;
    sbit  TRGCMP_8_TRIG2_bit at TRIG2.B11;
    sbit  TRGCMP_7_TRIG2_bit at TRIG2.B10;
    sbit  TRGCMP_6_TRIG2_bit at TRIG2.B9;
    sbit  TRGCMP_5_TRIG2_bit at TRIG2.B8;
    sbit  TRGCMP_4_TRIG2_bit at TRIG2.B7;
    sbit  TRGCMP_3_TRIG2_bit at TRIG2.B6;
    sbit  TRGCMP_2_TRIG2_bit at TRIG2.B5;
    sbit  TRGCMP_1_TRIG2_bit at TRIG2.B4;
    sbit  TRGCMP_0_TRIG2_bit at TRIG2.B3;

    // TRGCON2 bits
    sbit  TRGDIV_3_TRGCON2_bit at TRGCON2.B15;
    sbit  TRGDIV_2_TRGCON2_bit at TRGCON2.B14;
    sbit  TRGDIV_1_TRGCON2_bit at TRGCON2.B13;
    sbit  TRGDIV_0_TRGCON2_bit at TRGCON2.B12;
    sbit  DTM_TRGCON2_bit at TRGCON2.B7;
    sbit  TRGSTRT_5_TRGCON2_bit at TRGCON2.B5;
    sbit  TRGSTRT_4_TRGCON2_bit at TRGCON2.B4;
    sbit  TRGSTRT_3_TRGCON2_bit at TRGCON2.B3;
    sbit  TRGSTRT_2_TRGCON2_bit at TRGCON2.B2;
    sbit  TRGSTRT_1_TRGCON2_bit at TRGCON2.B1;
    sbit  TRGSTRT_0_TRGCON2_bit at TRGCON2.B0;

    // STRIG2 bits
    sbit  STRGCMP_12_STRIG2_bit at STRIG2.B15;
    sbit  STRGCMP_11_STRIG2_bit at STRIG2.B14;
    sbit  STRGCMP_10_STRIG2_bit at STRIG2.B13;
    sbit  STRGCMP_9_STRIG2_bit at STRIG2.B12;
    sbit  STRGCMP_8_STRIG2_bit at STRIG2.B11;
    sbit  STRGCMP_7_STRIG2_bit at STRIG2.B10;
    sbit  STRGCMP_6_STRIG2_bit at STRIG2.B9;
    sbit  STRGCMP_5_STRIG2_bit at STRIG2.B8;
    sbit  STRGCMP_4_STRIG2_bit at STRIG2.B7;
    sbit  STRGCMP_3_STRIG2_bit at STRIG2.B6;
    sbit  STRGCMP_2_STRIG2_bit at STRIG2.B5;
    sbit  STRGCMP_1_STRIG2_bit at STRIG2.B4;
    sbit  STRGCMP_0_STRIG2_bit at STRIG2.B3;

    // PWMCAP2 bits
    const register unsigned short int PWMCAP2_12 = 15;
    sbit  PWMCAP2_12_bit at PWMCAP2.B15;
    const register unsigned short int PWMCAP2_11 = 14;
    sbit  PWMCAP2_11_bit at PWMCAP2.B14;
    const register unsigned short int PWMCAP2_10 = 13;
    sbit  PWMCAP2_10_bit at PWMCAP2.B13;
    const register unsigned short int PWMCAP2_9 = 12;
    sbit  PWMCAP2_9_bit at PWMCAP2.B12;
    const register unsigned short int PWMCAP2_8 = 11;
    sbit  PWMCAP2_8_bit at PWMCAP2.B11;
    const register unsigned short int PWMCAP2_7 = 10;
    sbit  PWMCAP2_7_bit at PWMCAP2.B10;
    const register unsigned short int PWMCAP2_6 = 9;
    sbit  PWMCAP2_6_bit at PWMCAP2.B9;
    const register unsigned short int PWMCAP2_5 = 8;
    sbit  PWMCAP2_5_bit at PWMCAP2.B8;
    const register unsigned short int PWMCAP2_4 = 7;
    sbit  PWMCAP2_4_bit at PWMCAP2.B7;
    const register unsigned short int PWMCAP2_3 = 6;
    sbit  PWMCAP2_3_bit at PWMCAP2.B6;
    const register unsigned short int PWMCAP2_2 = 5;
    sbit  PWMCAP2_2_bit at PWMCAP2.B5;
    const register unsigned short int PWMCAP2_1 = 4;
    sbit  PWMCAP2_1_bit at PWMCAP2.B4;
    const register unsigned short int PWMCAP2_0 = 3;
    sbit  PWMCAP2_0_bit at PWMCAP2.B3;

    // LEBCON2 bits
    sbit  PHR_LEBCON2_bit at LEBCON2.B15;
    sbit  PHF_LEBCON2_bit at LEBCON2.B14;
    sbit  PLR_LEBCON2_bit at LEBCON2.B13;
    sbit  PLF_LEBCON2_bit at LEBCON2.B12;
    sbit  FLTLEBEN_LEBCON2_bit at LEBCON2.B11;
    sbit  CLLEBEN_LEBCON2_bit at LEBCON2.B10;
    sbit  BCH_LEBCON2_bit at LEBCON2.B5;
    sbit  BCL_LEBCON2_bit at LEBCON2.B4;
    sbit  BPHH_LEBCON2_bit at LEBCON2.B3;
    sbit  BPHL_LEBCON2_bit at LEBCON2.B2;
    sbit  BPLH_LEBCON2_bit at LEBCON2.B1;
    sbit  BPLL_LEBCON2_bit at LEBCON2.B0;

    // LEBDLY2 bits
    sbit  LEB_8_LEBDLY2_bit at LEBDLY2.B11;
    sbit  LEB_7_LEBDLY2_bit at LEBDLY2.B10;
    sbit  LEB_6_LEBDLY2_bit at LEBDLY2.B9;
    sbit  LEB_5_LEBDLY2_bit at LEBDLY2.B8;
    sbit  LEB_4_LEBDLY2_bit at LEBDLY2.B7;
    sbit  LEB_3_LEBDLY2_bit at LEBDLY2.B6;
    sbit  LEB_2_LEBDLY2_bit at LEBDLY2.B5;
    sbit  LEB_1_LEBDLY2_bit at LEBDLY2.B4;
    sbit  LEB_0_LEBDLY2_bit at LEBDLY2.B3;

    // AUXCON2 bits
    sbit  HRPDIS_AUXCON2_bit at AUXCON2.B15;
    sbit  HRDDIS_AUXCON2_bit at AUXCON2.B14;
    sbit  BLANKSEL_3_AUXCON2_bit at AUXCON2.B11;
    sbit  BLANKSEL_2_AUXCON2_bit at AUXCON2.B10;
    sbit  BLANKSEL_1_AUXCON2_bit at AUXCON2.B9;
    sbit  BLANKSEL_0_AUXCON2_bit at AUXCON2.B8;
    sbit  CHOPSEL_3_AUXCON2_bit at AUXCON2.B5;
    sbit  CHOPSEL_2_AUXCON2_bit at AUXCON2.B4;
    sbit  CHOPSEL_1_AUXCON2_bit at AUXCON2.B3;
    sbit  CHOPSEL_0_AUXCON2_bit at AUXCON2.B2;
    sbit  CHOPHEN_AUXCON2_bit at AUXCON2.B1;
    sbit  CHOPLEN_AUXCON2_bit at AUXCON2.B0;

    // PWMCON3 bits
    sbit  FLTSTAT_PWMCON3_bit at PWMCON3.B15;
    sbit  CLSTAT_PWMCON3_bit at PWMCON3.B14;
    sbit  TRGSTAT_PWMCON3_bit at PWMCON3.B13;
    sbit  FLTIEN_PWMCON3_bit at PWMCON3.B12;
    sbit  CLIEN_PWMCON3_bit at PWMCON3.B11;
    sbit  TRGIEN_PWMCON3_bit at PWMCON3.B10;
    sbit  ITB_PWMCON3_bit at PWMCON3.B9;
    sbit  MDCS_PWMCON3_bit at PWMCON3.B8;
    sbit  DTC_1_PWMCON3_bit at PWMCON3.B7;
    sbit  DTC_0_PWMCON3_bit at PWMCON3.B6;
    sbit  DTCP_PWMCON3_bit at PWMCON3.B5;
    sbit  MTBS_PWMCON3_bit at PWMCON3.B3;
    sbit  CAM_PWMCON3_bit at PWMCON3.B2;
    sbit  XPRES_PWMCON3_bit at PWMCON3.B1;
    sbit  IUE_PWMCON3_bit at PWMCON3.B0;

    // IOCON3 bits
    sbit  PENH_IOCON3_bit at IOCON3.B15;
    sbit  PENL_IOCON3_bit at IOCON3.B14;
    sbit  POLH_IOCON3_bit at IOCON3.B13;
    sbit  POLL_IOCON3_bit at IOCON3.B12;
    sbit  PMOD_1_IOCON3_bit at IOCON3.B11;
    sbit  PMOD_0_IOCON3_bit at IOCON3.B10;
    sbit  OVRENH_IOCON3_bit at IOCON3.B9;
    sbit  OVRENL_IOCON3_bit at IOCON3.B8;
    sbit  OVRDAT_1_IOCON3_bit at IOCON3.B7;
    sbit  OVRDAT_0_IOCON3_bit at IOCON3.B6;
    sbit  FLTDAT_1_IOCON3_bit at IOCON3.B5;
    sbit  FLTDAT_0_IOCON3_bit at IOCON3.B4;
    sbit  CLDAT_1_IOCON3_bit at IOCON3.B3;
    sbit  CLDAT_0_IOCON3_bit at IOCON3.B2;
    sbit  SWAP_IOCON3_bit at IOCON3.B1;
    sbit  OSYNC_IOCON3_bit at IOCON3.B0;

    // FCLCON3 bits
    sbit  IFLTMOD_FCLCON3_bit at FCLCON3.B15;
    sbit  CLSRC_4_FCLCON3_bit at FCLCON3.B14;
    sbit  CLSRC_3_FCLCON3_bit at FCLCON3.B13;
    sbit  CLSRC_2_FCLCON3_bit at FCLCON3.B12;
    sbit  CLSRC_1_FCLCON3_bit at FCLCON3.B11;
    sbit  CLSRC_0_FCLCON3_bit at FCLCON3.B10;
    sbit  CLPOL_FCLCON3_bit at FCLCON3.B9;
    sbit  CLMOD_FCLCON3_bit at FCLCON3.B8;
    sbit  FLTSRC_4_FCLCON3_bit at FCLCON3.B7;
    sbit  FLTSRC_3_FCLCON3_bit at FCLCON3.B6;
    sbit  FLTSRC_2_FCLCON3_bit at FCLCON3.B5;
    sbit  FLTSRC_1_FCLCON3_bit at FCLCON3.B4;
    sbit  FLTSRC_0_FCLCON3_bit at FCLCON3.B3;
    sbit  FLTPOL_FCLCON3_bit at FCLCON3.B2;
    sbit  FLTMOD_1_FCLCON3_bit at FCLCON3.B1;
    sbit  FLTMOD_0_FCLCON3_bit at FCLCON3.B0;

    // PDC3 bits
    const register unsigned short int PDC3_15 = 15;
    sbit  PDC3_15_bit at PDC3.B15;
    const register unsigned short int PDC3_14 = 14;
    sbit  PDC3_14_bit at PDC3.B14;
    const register unsigned short int PDC3_13 = 13;
    sbit  PDC3_13_bit at PDC3.B13;
    const register unsigned short int PDC3_12 = 12;
    sbit  PDC3_12_bit at PDC3.B12;
    const register unsigned short int PDC3_11 = 11;
    sbit  PDC3_11_bit at PDC3.B11;
    const register unsigned short int PDC3_10 = 10;
    sbit  PDC3_10_bit at PDC3.B10;
    const register unsigned short int PDC3_9 = 9;
    sbit  PDC3_9_bit at PDC3.B9;
    const register unsigned short int PDC3_8 = 8;
    sbit  PDC3_8_bit at PDC3.B8;
    const register unsigned short int PDC3_7 = 7;
    sbit  PDC3_7_bit at PDC3.B7;
    const register unsigned short int PDC3_6 = 6;
    sbit  PDC3_6_bit at PDC3.B6;
    const register unsigned short int PDC3_5 = 5;
    sbit  PDC3_5_bit at PDC3.B5;
    const register unsigned short int PDC3_4 = 4;
    sbit  PDC3_4_bit at PDC3.B4;
    const register unsigned short int PDC3_3 = 3;
    sbit  PDC3_3_bit at PDC3.B3;
    const register unsigned short int PDC3_2 = 2;
    sbit  PDC3_2_bit at PDC3.B2;
    const register unsigned short int PDC3_1 = 1;
    sbit  PDC3_1_bit at PDC3.B1;
    const register unsigned short int PDC3_0 = 0;
    sbit  PDC3_0_bit at PDC3.B0;

    // PHASE3 bits
    const register unsigned short int PHASE3_15 = 15;
    sbit  PHASE3_15_bit at PHASE3.B15;
    const register unsigned short int PHASE3_14 = 14;
    sbit  PHASE3_14_bit at PHASE3.B14;
    const register unsigned short int PHASE3_13 = 13;
    sbit  PHASE3_13_bit at PHASE3.B13;
    const register unsigned short int PHASE3_12 = 12;
    sbit  PHASE3_12_bit at PHASE3.B12;
    const register unsigned short int PHASE3_11 = 11;
    sbit  PHASE3_11_bit at PHASE3.B11;
    const register unsigned short int PHASE3_10 = 10;
    sbit  PHASE3_10_bit at PHASE3.B10;
    const register unsigned short int PHASE3_9 = 9;
    sbit  PHASE3_9_bit at PHASE3.B9;
    const register unsigned short int PHASE3_8 = 8;
    sbit  PHASE3_8_bit at PHASE3.B8;
    const register unsigned short int PHASE3_7 = 7;
    sbit  PHASE3_7_bit at PHASE3.B7;
    const register unsigned short int PHASE3_6 = 6;
    sbit  PHASE3_6_bit at PHASE3.B6;
    const register unsigned short int PHASE3_5 = 5;
    sbit  PHASE3_5_bit at PHASE3.B5;
    const register unsigned short int PHASE3_4 = 4;
    sbit  PHASE3_4_bit at PHASE3.B4;
    const register unsigned short int PHASE3_3 = 3;
    sbit  PHASE3_3_bit at PHASE3.B3;
    const register unsigned short int PHASE3_2 = 2;
    sbit  PHASE3_2_bit at PHASE3.B2;
    const register unsigned short int PHASE3_1 = 1;
    sbit  PHASE3_1_bit at PHASE3.B1;
    const register unsigned short int PHASE3_0 = 0;
    sbit  PHASE3_0_bit at PHASE3.B0;

    // DTR3 bits
    const register unsigned short int DTR3_13 = 13;
    sbit  DTR3_13_bit at DTR3.B13;
    const register unsigned short int DTR3_12 = 12;
    sbit  DTR3_12_bit at DTR3.B12;
    const register unsigned short int DTR3_11 = 11;
    sbit  DTR3_11_bit at DTR3.B11;
    const register unsigned short int DTR3_10 = 10;
    sbit  DTR3_10_bit at DTR3.B10;
    const register unsigned short int DTR3_9 = 9;
    sbit  DTR3_9_bit at DTR3.B9;
    const register unsigned short int DTR3_8 = 8;
    sbit  DTR3_8_bit at DTR3.B8;
    const register unsigned short int DTR3_7 = 7;
    sbit  DTR3_7_bit at DTR3.B7;
    const register unsigned short int DTR3_6 = 6;
    sbit  DTR3_6_bit at DTR3.B6;
    const register unsigned short int DTR3_5 = 5;
    sbit  DTR3_5_bit at DTR3.B5;
    const register unsigned short int DTR3_4 = 4;
    sbit  DTR3_4_bit at DTR3.B4;
    const register unsigned short int DTR3_3 = 3;
    sbit  DTR3_3_bit at DTR3.B3;
    const register unsigned short int DTR3_2 = 2;
    sbit  DTR3_2_bit at DTR3.B2;
    const register unsigned short int DTR3_1 = 1;
    sbit  DTR3_1_bit at DTR3.B1;
    const register unsigned short int DTR3_0 = 0;
    sbit  DTR3_0_bit at DTR3.B0;

    // ALTDTR3 bits
    const register unsigned short int ALTDTR3_13 = 13;
    sbit  ALTDTR3_13_bit at ALTDTR3.B13;
    const register unsigned short int ALTDTR3_12 = 12;
    sbit  ALTDTR3_12_bit at ALTDTR3.B12;
    const register unsigned short int ALTDTR3_11 = 11;
    sbit  ALTDTR3_11_bit at ALTDTR3.B11;
    const register unsigned short int ALTDTR3_10 = 10;
    sbit  ALTDTR3_10_bit at ALTDTR3.B10;
    const register unsigned short int ALTDTR3_9 = 9;
    sbit  ALTDTR3_9_bit at ALTDTR3.B9;
    const register unsigned short int ALTDTR3_8 = 8;
    sbit  ALTDTR3_8_bit at ALTDTR3.B8;
    const register unsigned short int ALTDTR3_7 = 7;
    sbit  ALTDTR3_7_bit at ALTDTR3.B7;
    const register unsigned short int ALTDTR3_6 = 6;
    sbit  ALTDTR3_6_bit at ALTDTR3.B6;
    const register unsigned short int ALTDTR3_5 = 5;
    sbit  ALTDTR3_5_bit at ALTDTR3.B5;
    const register unsigned short int ALTDTR3_4 = 4;
    sbit  ALTDTR3_4_bit at ALTDTR3.B4;
    const register unsigned short int ALTDTR3_3 = 3;
    sbit  ALTDTR3_3_bit at ALTDTR3.B3;
    const register unsigned short int ALTDTR3_2 = 2;
    sbit  ALTDTR3_2_bit at ALTDTR3.B2;
    const register unsigned short int ALTDTR3_1 = 1;
    sbit  ALTDTR3_1_bit at ALTDTR3.B1;
    const register unsigned short int ALTDTR3_0 = 0;
    sbit  ALTDTR3_0_bit at ALTDTR3.B0;

    // SDC3 bits
    const register unsigned short int SDC3_15 = 15;
    sbit  SDC3_15_bit at SDC3.B15;
    const register unsigned short int SDC3_14 = 14;
    sbit  SDC3_14_bit at SDC3.B14;
    const register unsigned short int SDC3_13 = 13;
    sbit  SDC3_13_bit at SDC3.B13;
    const register unsigned short int SDC3_12 = 12;
    sbit  SDC3_12_bit at SDC3.B12;
    const register unsigned short int SDC3_11 = 11;
    sbit  SDC3_11_bit at SDC3.B11;
    const register unsigned short int SDC3_10 = 10;
    sbit  SDC3_10_bit at SDC3.B10;
    const register unsigned short int SDC3_9 = 9;
    sbit  SDC3_9_bit at SDC3.B9;
    const register unsigned short int SDC3_8 = 8;
    sbit  SDC3_8_bit at SDC3.B8;
    const register unsigned short int SDC3_7 = 7;
    sbit  SDC3_7_bit at SDC3.B7;
    const register unsigned short int SDC3_6 = 6;
    sbit  SDC3_6_bit at SDC3.B6;
    const register unsigned short int SDC3_5 = 5;
    sbit  SDC3_5_bit at SDC3.B5;
    const register unsigned short int SDC3_4 = 4;
    sbit  SDC3_4_bit at SDC3.B4;
    const register unsigned short int SDC3_3 = 3;
    sbit  SDC3_3_bit at SDC3.B3;
    const register unsigned short int SDC3_2 = 2;
    sbit  SDC3_2_bit at SDC3.B2;
    const register unsigned short int SDC3_1 = 1;
    sbit  SDC3_1_bit at SDC3.B1;
    const register unsigned short int SDC3_0 = 0;
    sbit  SDC3_0_bit at SDC3.B0;

    // SPHASE3 bits
    const register unsigned short int SPHASE3_15 = 15;
    sbit  SPHASE3_15_bit at SPHASE3.B15;
    const register unsigned short int SPHASE3_14 = 14;
    sbit  SPHASE3_14_bit at SPHASE3.B14;
    const register unsigned short int SPHASE3_13 = 13;
    sbit  SPHASE3_13_bit at SPHASE3.B13;
    const register unsigned short int SPHASE3_12 = 12;
    sbit  SPHASE3_12_bit at SPHASE3.B12;
    const register unsigned short int SPHASE3_11 = 11;
    sbit  SPHASE3_11_bit at SPHASE3.B11;
    const register unsigned short int SPHASE3_10 = 10;
    sbit  SPHASE3_10_bit at SPHASE3.B10;
    const register unsigned short int SPHASE3_9 = 9;
    sbit  SPHASE3_9_bit at SPHASE3.B9;
    const register unsigned short int SPHASE3_8 = 8;
    sbit  SPHASE3_8_bit at SPHASE3.B8;
    const register unsigned short int SPHASE3_7 = 7;
    sbit  SPHASE3_7_bit at SPHASE3.B7;
    const register unsigned short int SPHASE3_6 = 6;
    sbit  SPHASE3_6_bit at SPHASE3.B6;
    const register unsigned short int SPHASE3_5 = 5;
    sbit  SPHASE3_5_bit at SPHASE3.B5;
    const register unsigned short int SPHASE3_4 = 4;
    sbit  SPHASE3_4_bit at SPHASE3.B4;
    const register unsigned short int SPHASE3_3 = 3;
    sbit  SPHASE3_3_bit at SPHASE3.B3;
    const register unsigned short int SPHASE3_2 = 2;
    sbit  SPHASE3_2_bit at SPHASE3.B2;
    const register unsigned short int SPHASE3_1 = 1;
    sbit  SPHASE3_1_bit at SPHASE3.B1;
    const register unsigned short int SPHASE3_0 = 0;
    sbit  SPHASE3_0_bit at SPHASE3.B0;

    // TRIG3 bits
    sbit  TRGCMP_12_TRIG3_bit at TRIG3.B15;
    sbit  TRGCMP_11_TRIG3_bit at TRIG3.B14;
    sbit  TRGCMP_10_TRIG3_bit at TRIG3.B13;
    sbit  TRGCMP_9_TRIG3_bit at TRIG3.B12;
    sbit  TRGCMP_8_TRIG3_bit at TRIG3.B11;
    sbit  TRGCMP_7_TRIG3_bit at TRIG3.B10;
    sbit  TRGCMP_6_TRIG3_bit at TRIG3.B9;
    sbit  TRGCMP_5_TRIG3_bit at TRIG3.B8;
    sbit  TRGCMP_4_TRIG3_bit at TRIG3.B7;
    sbit  TRGCMP_3_TRIG3_bit at TRIG3.B6;
    sbit  TRGCMP_2_TRIG3_bit at TRIG3.B5;
    sbit  TRGCMP_1_TRIG3_bit at TRIG3.B4;
    sbit  TRGCMP_0_TRIG3_bit at TRIG3.B3;

    // TRGCON3 bits
    sbit  TRGDIV_3_TRGCON3_bit at TRGCON3.B15;
    sbit  TRGDIV_2_TRGCON3_bit at TRGCON3.B14;
    sbit  TRGDIV_1_TRGCON3_bit at TRGCON3.B13;
    sbit  TRGDIV_0_TRGCON3_bit at TRGCON3.B12;
    sbit  DTM_TRGCON3_bit at TRGCON3.B7;
    sbit  TRGSTRT_5_TRGCON3_bit at TRGCON3.B5;
    sbit  TRGSTRT_4_TRGCON3_bit at TRGCON3.B4;
    sbit  TRGSTRT_3_TRGCON3_bit at TRGCON3.B3;
    sbit  TRGSTRT_2_TRGCON3_bit at TRGCON3.B2;
    sbit  TRGSTRT_1_TRGCON3_bit at TRGCON3.B1;
    sbit  TRGSTRT_0_TRGCON3_bit at TRGCON3.B0;

    // STRIG3 bits
    sbit  STRGCMP_12_STRIG3_bit at STRIG3.B15;
    sbit  STRGCMP_11_STRIG3_bit at STRIG3.B14;
    sbit  STRGCMP_10_STRIG3_bit at STRIG3.B13;
    sbit  STRGCMP_9_STRIG3_bit at STRIG3.B12;
    sbit  STRGCMP_8_STRIG3_bit at STRIG3.B11;
    sbit  STRGCMP_7_STRIG3_bit at STRIG3.B10;
    sbit  STRGCMP_6_STRIG3_bit at STRIG3.B9;
    sbit  STRGCMP_5_STRIG3_bit at STRIG3.B8;
    sbit  STRGCMP_4_STRIG3_bit at STRIG3.B7;
    sbit  STRGCMP_3_STRIG3_bit at STRIG3.B6;
    sbit  STRGCMP_2_STRIG3_bit at STRIG3.B5;
    sbit  STRGCMP_1_STRIG3_bit at STRIG3.B4;
    sbit  STRGCMP_0_STRIG3_bit at STRIG3.B3;

    // PWMCAP3 bits
    const register unsigned short int PWMCAP3_12 = 15;
    sbit  PWMCAP3_12_bit at PWMCAP3.B15;
    const register unsigned short int PWMCAP3_11 = 14;
    sbit  PWMCAP3_11_bit at PWMCAP3.B14;
    const register unsigned short int PWMCAP3_10 = 13;
    sbit  PWMCAP3_10_bit at PWMCAP3.B13;
    const register unsigned short int PWMCAP3_9 = 12;
    sbit  PWMCAP3_9_bit at PWMCAP3.B12;
    const register unsigned short int PWMCAP3_8 = 11;
    sbit  PWMCAP3_8_bit at PWMCAP3.B11;
    const register unsigned short int PWMCAP3_7 = 10;
    sbit  PWMCAP3_7_bit at PWMCAP3.B10;
    const register unsigned short int PWMCAP3_6 = 9;
    sbit  PWMCAP3_6_bit at PWMCAP3.B9;
    const register unsigned short int PWMCAP3_5 = 8;
    sbit  PWMCAP3_5_bit at PWMCAP3.B8;
    const register unsigned short int PWMCAP3_4 = 7;
    sbit  PWMCAP3_4_bit at PWMCAP3.B7;
    const register unsigned short int PWMCAP3_3 = 6;
    sbit  PWMCAP3_3_bit at PWMCAP3.B6;
    const register unsigned short int PWMCAP3_2 = 5;
    sbit  PWMCAP3_2_bit at PWMCAP3.B5;
    const register unsigned short int PWMCAP3_1 = 4;
    sbit  PWMCAP3_1_bit at PWMCAP3.B4;
    const register unsigned short int PWMCAP3_0 = 3;
    sbit  PWMCAP3_0_bit at PWMCAP3.B3;

    // LEBCON3 bits
    sbit  PHR_LEBCON3_bit at LEBCON3.B15;
    sbit  PHF_LEBCON3_bit at LEBCON3.B14;
    sbit  PLR_LEBCON3_bit at LEBCON3.B13;
    sbit  PLF_LEBCON3_bit at LEBCON3.B12;
    sbit  FLTLEBEN_LEBCON3_bit at LEBCON3.B11;
    sbit  CLLEBEN_LEBCON3_bit at LEBCON3.B10;
    sbit  BCH_LEBCON3_bit at LEBCON3.B5;
    sbit  BCL_LEBCON3_bit at LEBCON3.B4;
    sbit  BPHH_LEBCON3_bit at LEBCON3.B3;
    sbit  BPHL_LEBCON3_bit at LEBCON3.B2;
    sbit  BPLH_LEBCON3_bit at LEBCON3.B1;
    sbit  BPLL_LEBCON3_bit at LEBCON3.B0;

    // LEBDLY3 bits
    sbit  LEB_8_LEBDLY3_bit at LEBDLY3.B11;
    sbit  LEB_7_LEBDLY3_bit at LEBDLY3.B10;
    sbit  LEB_6_LEBDLY3_bit at LEBDLY3.B9;
    sbit  LEB_5_LEBDLY3_bit at LEBDLY3.B8;
    sbit  LEB_4_LEBDLY3_bit at LEBDLY3.B7;
    sbit  LEB_3_LEBDLY3_bit at LEBDLY3.B6;
    sbit  LEB_2_LEBDLY3_bit at LEBDLY3.B5;
    sbit  LEB_1_LEBDLY3_bit at LEBDLY3.B4;
    sbit  LEB_0_LEBDLY3_bit at LEBDLY3.B3;

    // AUXCON3 bits
    sbit  HRPDIS_AUXCON3_bit at AUXCON3.B15;
    sbit  HRDDIS_AUXCON3_bit at AUXCON3.B14;
    sbit  BLANKSEL_3_AUXCON3_bit at AUXCON3.B11;
    sbit  BLANKSEL_2_AUXCON3_bit at AUXCON3.B10;
    sbit  BLANKSEL_1_AUXCON3_bit at AUXCON3.B9;
    sbit  BLANKSEL_0_AUXCON3_bit at AUXCON3.B8;
    sbit  CHOPSEL_3_AUXCON3_bit at AUXCON3.B5;
    sbit  CHOPSEL_2_AUXCON3_bit at AUXCON3.B4;
    sbit  CHOPSEL_1_AUXCON3_bit at AUXCON3.B3;
    sbit  CHOPSEL_0_AUXCON3_bit at AUXCON3.B2;
    sbit  CHOPHEN_AUXCON3_bit at AUXCON3.B1;
    sbit  CHOPLEN_AUXCON3_bit at AUXCON3.B0;

    // PWMCON4 bits
    sbit  FLTSTAT_PWMCON4_bit at PWMCON4.B15;
    sbit  CLSTAT_PWMCON4_bit at PWMCON4.B14;
    sbit  TRGSTAT_PWMCON4_bit at PWMCON4.B13;
    sbit  FLTIEN_PWMCON4_bit at PWMCON4.B12;
    sbit  CLIEN_PWMCON4_bit at PWMCON4.B11;
    sbit  TRGIEN_PWMCON4_bit at PWMCON4.B10;
    sbit  ITB_PWMCON4_bit at PWMCON4.B9;
    sbit  MDCS_PWMCON4_bit at PWMCON4.B8;
    sbit  DTC_1_PWMCON4_bit at PWMCON4.B7;
    sbit  DTC_0_PWMCON4_bit at PWMCON4.B6;
    sbit  DTCP_PWMCON4_bit at PWMCON4.B5;
    sbit  MTBS_PWMCON4_bit at PWMCON4.B3;
    sbit  CAM_PWMCON4_bit at PWMCON4.B2;
    sbit  XPRES_PWMCON4_bit at PWMCON4.B1;
    sbit  IUE_PWMCON4_bit at PWMCON4.B0;

    // IOCON4 bits
    sbit  PENH_IOCON4_bit at IOCON4.B15;
    sbit  PENL_IOCON4_bit at IOCON4.B14;
    sbit  POLH_IOCON4_bit at IOCON4.B13;
    sbit  POLL_IOCON4_bit at IOCON4.B12;
    sbit  PMOD_1_IOCON4_bit at IOCON4.B11;
    sbit  PMOD_0_IOCON4_bit at IOCON4.B10;
    sbit  OVRENH_IOCON4_bit at IOCON4.B9;
    sbit  OVRENL_IOCON4_bit at IOCON4.B8;
    sbit  OVRDAT_1_IOCON4_bit at IOCON4.B7;
    sbit  OVRDAT_0_IOCON4_bit at IOCON4.B6;
    sbit  FLTDAT_1_IOCON4_bit at IOCON4.B5;
    sbit  FLTDAT_0_IOCON4_bit at IOCON4.B4;
    sbit  CLDAT_1_IOCON4_bit at IOCON4.B3;
    sbit  CLDAT_0_IOCON4_bit at IOCON4.B2;
    sbit  SWAP_IOCON4_bit at IOCON4.B1;
    sbit  OSYNC_IOCON4_bit at IOCON4.B0;

    // FCLCON4 bits
    sbit  IFLTMOD_FCLCON4_bit at FCLCON4.B15;
    sbit  CLSRC_4_FCLCON4_bit at FCLCON4.B14;
    sbit  CLSRC_3_FCLCON4_bit at FCLCON4.B13;
    sbit  CLSRC_2_FCLCON4_bit at FCLCON4.B12;
    sbit  CLSRC_1_FCLCON4_bit at FCLCON4.B11;
    sbit  CLSRC_0_FCLCON4_bit at FCLCON4.B10;
    sbit  CLPOL_FCLCON4_bit at FCLCON4.B9;
    sbit  CLMOD_FCLCON4_bit at FCLCON4.B8;
    sbit  FLTSRC_4_FCLCON4_bit at FCLCON4.B7;
    sbit  FLTSRC_3_FCLCON4_bit at FCLCON4.B6;
    sbit  FLTSRC_2_FCLCON4_bit at FCLCON4.B5;
    sbit  FLTSRC_1_FCLCON4_bit at FCLCON4.B4;
    sbit  FLTSRC_0_FCLCON4_bit at FCLCON4.B3;
    sbit  FLTPOL_FCLCON4_bit at FCLCON4.B2;
    sbit  FLTMOD_1_FCLCON4_bit at FCLCON4.B1;
    sbit  FLTMOD_0_FCLCON4_bit at FCLCON4.B0;

    // PDC4 bits
    const register unsigned short int PDC4_15 = 15;
    sbit  PDC4_15_bit at PDC4.B15;
    const register unsigned short int PDC4_14 = 14;
    sbit  PDC4_14_bit at PDC4.B14;
    const register unsigned short int PDC4_13 = 13;
    sbit  PDC4_13_bit at PDC4.B13;
    const register unsigned short int PDC4_12 = 12;
    sbit  PDC4_12_bit at PDC4.B12;
    const register unsigned short int PDC4_11 = 11;
    sbit  PDC4_11_bit at PDC4.B11;
    const register unsigned short int PDC4_10 = 10;
    sbit  PDC4_10_bit at PDC4.B10;
    const register unsigned short int PDC4_9 = 9;
    sbit  PDC4_9_bit at PDC4.B9;
    const register unsigned short int PDC4_8 = 8;
    sbit  PDC4_8_bit at PDC4.B8;
    const register unsigned short int PDC4_7 = 7;
    sbit  PDC4_7_bit at PDC4.B7;
    const register unsigned short int PDC4_6 = 6;
    sbit  PDC4_6_bit at PDC4.B6;
    const register unsigned short int PDC4_5 = 5;
    sbit  PDC4_5_bit at PDC4.B5;
    const register unsigned short int PDC4_4 = 4;
    sbit  PDC4_4_bit at PDC4.B4;
    const register unsigned short int PDC4_3 = 3;
    sbit  PDC4_3_bit at PDC4.B3;
    const register unsigned short int PDC4_2 = 2;
    sbit  PDC4_2_bit at PDC4.B2;
    const register unsigned short int PDC4_1 = 1;
    sbit  PDC4_1_bit at PDC4.B1;
    const register unsigned short int PDC4_0 = 0;
    sbit  PDC4_0_bit at PDC4.B0;

    // PHASE4 bits
    const register unsigned short int PHASE4_15 = 15;
    sbit  PHASE4_15_bit at PHASE4.B15;
    const register unsigned short int PHASE4_14 = 14;
    sbit  PHASE4_14_bit at PHASE4.B14;
    const register unsigned short int PHASE4_13 = 13;
    sbit  PHASE4_13_bit at PHASE4.B13;
    const register unsigned short int PHASE4_12 = 12;
    sbit  PHASE4_12_bit at PHASE4.B12;
    const register unsigned short int PHASE4_11 = 11;
    sbit  PHASE4_11_bit at PHASE4.B11;
    const register unsigned short int PHASE4_10 = 10;
    sbit  PHASE4_10_bit at PHASE4.B10;
    const register unsigned short int PHASE4_9 = 9;
    sbit  PHASE4_9_bit at PHASE4.B9;
    const register unsigned short int PHASE4_8 = 8;
    sbit  PHASE4_8_bit at PHASE4.B8;
    const register unsigned short int PHASE4_7 = 7;
    sbit  PHASE4_7_bit at PHASE4.B7;
    const register unsigned short int PHASE4_6 = 6;
    sbit  PHASE4_6_bit at PHASE4.B6;
    const register unsigned short int PHASE4_5 = 5;
    sbit  PHASE4_5_bit at PHASE4.B5;
    const register unsigned short int PHASE4_4 = 4;
    sbit  PHASE4_4_bit at PHASE4.B4;
    const register unsigned short int PHASE4_3 = 3;
    sbit  PHASE4_3_bit at PHASE4.B3;
    const register unsigned short int PHASE4_2 = 2;
    sbit  PHASE4_2_bit at PHASE4.B2;
    const register unsigned short int PHASE4_1 = 1;
    sbit  PHASE4_1_bit at PHASE4.B1;
    const register unsigned short int PHASE4_0 = 0;
    sbit  PHASE4_0_bit at PHASE4.B0;

    // DTR4 bits
    const register unsigned short int DTR4_13 = 13;
    sbit  DTR4_13_bit at DTR4.B13;
    const register unsigned short int DTR4_12 = 12;
    sbit  DTR4_12_bit at DTR4.B12;
    const register unsigned short int DTR4_11 = 11;
    sbit  DTR4_11_bit at DTR4.B11;
    const register unsigned short int DTR4_10 = 10;
    sbit  DTR4_10_bit at DTR4.B10;
    const register unsigned short int DTR4_9 = 9;
    sbit  DTR4_9_bit at DTR4.B9;
    const register unsigned short int DTR4_8 = 8;
    sbit  DTR4_8_bit at DTR4.B8;
    const register unsigned short int DTR4_7 = 7;
    sbit  DTR4_7_bit at DTR4.B7;
    const register unsigned short int DTR4_6 = 6;
    sbit  DTR4_6_bit at DTR4.B6;
    const register unsigned short int DTR4_5 = 5;
    sbit  DTR4_5_bit at DTR4.B5;
    const register unsigned short int DTR4_4 = 4;
    sbit  DTR4_4_bit at DTR4.B4;
    const register unsigned short int DTR4_3 = 3;
    sbit  DTR4_3_bit at DTR4.B3;
    const register unsigned short int DTR4_2 = 2;
    sbit  DTR4_2_bit at DTR4.B2;
    const register unsigned short int DTR4_1 = 1;
    sbit  DTR4_1_bit at DTR4.B1;
    const register unsigned short int DTR4_0 = 0;
    sbit  DTR4_0_bit at DTR4.B0;

    // ALTDTR4 bits
    const register unsigned short int ALTDTR4_13 = 13;
    sbit  ALTDTR4_13_bit at ALTDTR4.B13;
    const register unsigned short int ALTDTR4_12 = 12;
    sbit  ALTDTR4_12_bit at ALTDTR4.B12;
    const register unsigned short int ALTDTR4_11 = 11;
    sbit  ALTDTR4_11_bit at ALTDTR4.B11;
    const register unsigned short int ALTDTR4_10 = 10;
    sbit  ALTDTR4_10_bit at ALTDTR4.B10;
    const register unsigned short int ALTDTR4_9 = 9;
    sbit  ALTDTR4_9_bit at ALTDTR4.B9;
    const register unsigned short int ALTDTR4_8 = 8;
    sbit  ALTDTR4_8_bit at ALTDTR4.B8;
    const register unsigned short int ALTDTR4_7 = 7;
    sbit  ALTDTR4_7_bit at ALTDTR4.B7;
    const register unsigned short int ALTDTR4_6 = 6;
    sbit  ALTDTR4_6_bit at ALTDTR4.B6;
    const register unsigned short int ALTDTR4_5 = 5;
    sbit  ALTDTR4_5_bit at ALTDTR4.B5;
    const register unsigned short int ALTDTR4_4 = 4;
    sbit  ALTDTR4_4_bit at ALTDTR4.B4;
    const register unsigned short int ALTDTR4_3 = 3;
    sbit  ALTDTR4_3_bit at ALTDTR4.B3;
    const register unsigned short int ALTDTR4_2 = 2;
    sbit  ALTDTR4_2_bit at ALTDTR4.B2;
    const register unsigned short int ALTDTR4_1 = 1;
    sbit  ALTDTR4_1_bit at ALTDTR4.B1;
    const register unsigned short int ALTDTR4_0 = 0;
    sbit  ALTDTR4_0_bit at ALTDTR4.B0;

    // SDC4 bits
    const register unsigned short int SDC4_15 = 15;
    sbit  SDC4_15_bit at SDC4.B15;
    const register unsigned short int SDC4_14 = 14;
    sbit  SDC4_14_bit at SDC4.B14;
    const register unsigned short int SDC4_13 = 13;
    sbit  SDC4_13_bit at SDC4.B13;
    const register unsigned short int SDC4_12 = 12;
    sbit  SDC4_12_bit at SDC4.B12;
    const register unsigned short int SDC4_11 = 11;
    sbit  SDC4_11_bit at SDC4.B11;
    const register unsigned short int SDC4_10 = 10;
    sbit  SDC4_10_bit at SDC4.B10;
    const register unsigned short int SDC4_9 = 9;
    sbit  SDC4_9_bit at SDC4.B9;
    const register unsigned short int SDC4_8 = 8;
    sbit  SDC4_8_bit at SDC4.B8;
    const register unsigned short int SDC4_7 = 7;
    sbit  SDC4_7_bit at SDC4.B7;
    const register unsigned short int SDC4_6 = 6;
    sbit  SDC4_6_bit at SDC4.B6;
    const register unsigned short int SDC4_5 = 5;
    sbit  SDC4_5_bit at SDC4.B5;
    const register unsigned short int SDC4_4 = 4;
    sbit  SDC4_4_bit at SDC4.B4;
    const register unsigned short int SDC4_3 = 3;
    sbit  SDC4_3_bit at SDC4.B3;
    const register unsigned short int SDC4_2 = 2;
    sbit  SDC4_2_bit at SDC4.B2;
    const register unsigned short int SDC4_1 = 1;
    sbit  SDC4_1_bit at SDC4.B1;
    const register unsigned short int SDC4_0 = 0;
    sbit  SDC4_0_bit at SDC4.B0;

    // SPHASE4 bits
    const register unsigned short int SPHASE4_15 = 15;
    sbit  SPHASE4_15_bit at SPHASE4.B15;
    const register unsigned short int SPHASE4_14 = 14;
    sbit  SPHASE4_14_bit at SPHASE4.B14;
    const register unsigned short int SPHASE4_13 = 13;
    sbit  SPHASE4_13_bit at SPHASE4.B13;
    const register unsigned short int SPHASE4_12 = 12;
    sbit  SPHASE4_12_bit at SPHASE4.B12;
    const register unsigned short int SPHASE4_11 = 11;
    sbit  SPHASE4_11_bit at SPHASE4.B11;
    const register unsigned short int SPHASE4_10 = 10;
    sbit  SPHASE4_10_bit at SPHASE4.B10;
    const register unsigned short int SPHASE4_9 = 9;
    sbit  SPHASE4_9_bit at SPHASE4.B9;
    const register unsigned short int SPHASE4_8 = 8;
    sbit  SPHASE4_8_bit at SPHASE4.B8;
    const register unsigned short int SPHASE4_7 = 7;
    sbit  SPHASE4_7_bit at SPHASE4.B7;
    const register unsigned short int SPHASE4_6 = 6;
    sbit  SPHASE4_6_bit at SPHASE4.B6;
    const register unsigned short int SPHASE4_5 = 5;
    sbit  SPHASE4_5_bit at SPHASE4.B5;
    const register unsigned short int SPHASE4_4 = 4;
    sbit  SPHASE4_4_bit at SPHASE4.B4;
    const register unsigned short int SPHASE4_3 = 3;
    sbit  SPHASE4_3_bit at SPHASE4.B3;
    const register unsigned short int SPHASE4_2 = 2;
    sbit  SPHASE4_2_bit at SPHASE4.B2;
    const register unsigned short int SPHASE4_1 = 1;
    sbit  SPHASE4_1_bit at SPHASE4.B1;
    const register unsigned short int SPHASE4_0 = 0;
    sbit  SPHASE4_0_bit at SPHASE4.B0;

    // TRIG4 bits
    sbit  TRGCMP_12_TRIG4_bit at TRIG4.B15;
    sbit  TRGCMP_11_TRIG4_bit at TRIG4.B14;
    sbit  TRGCMP_10_TRIG4_bit at TRIG4.B13;
    sbit  TRGCMP_9_TRIG4_bit at TRIG4.B12;
    sbit  TRGCMP_8_TRIG4_bit at TRIG4.B11;
    sbit  TRGCMP_7_TRIG4_bit at TRIG4.B10;
    sbit  TRGCMP_6_TRIG4_bit at TRIG4.B9;
    sbit  TRGCMP_5_TRIG4_bit at TRIG4.B8;
    sbit  TRGCMP_4_TRIG4_bit at TRIG4.B7;
    sbit  TRGCMP_3_TRIG4_bit at TRIG4.B6;
    sbit  TRGCMP_2_TRIG4_bit at TRIG4.B5;
    sbit  TRGCMP_1_TRIG4_bit at TRIG4.B4;
    sbit  TRGCMP_0_TRIG4_bit at TRIG4.B3;

    // TRGCON4 bits
    sbit  TRGDIV_3_TRGCON4_bit at TRGCON4.B15;
    sbit  TRGDIV_2_TRGCON4_bit at TRGCON4.B14;
    sbit  TRGDIV_1_TRGCON4_bit at TRGCON4.B13;
    sbit  TRGDIV_0_TRGCON4_bit at TRGCON4.B12;
    sbit  DTM_TRGCON4_bit at TRGCON4.B7;
    sbit  TRGSTRT_5_TRGCON4_bit at TRGCON4.B5;
    sbit  TRGSTRT_4_TRGCON4_bit at TRGCON4.B4;
    sbit  TRGSTRT_3_TRGCON4_bit at TRGCON4.B3;
    sbit  TRGSTRT_2_TRGCON4_bit at TRGCON4.B2;
    sbit  TRGSTRT_1_TRGCON4_bit at TRGCON4.B1;
    sbit  TRGSTRT_0_TRGCON4_bit at TRGCON4.B0;

    // STRIG4 bits
    sbit  STRGCMP_12_STRIG4_bit at STRIG4.B15;
    sbit  STRGCMP_11_STRIG4_bit at STRIG4.B14;
    sbit  STRGCMP_10_STRIG4_bit at STRIG4.B13;
    sbit  STRGCMP_9_STRIG4_bit at STRIG4.B12;
    sbit  STRGCMP_8_STRIG4_bit at STRIG4.B11;
    sbit  STRGCMP_7_STRIG4_bit at STRIG4.B10;
    sbit  STRGCMP_6_STRIG4_bit at STRIG4.B9;
    sbit  STRGCMP_5_STRIG4_bit at STRIG4.B8;
    sbit  STRGCMP_4_STRIG4_bit at STRIG4.B7;
    sbit  STRGCMP_3_STRIG4_bit at STRIG4.B6;
    sbit  STRGCMP_2_STRIG4_bit at STRIG4.B5;
    sbit  STRGCMP_1_STRIG4_bit at STRIG4.B4;
    sbit  STRGCMP_0_STRIG4_bit at STRIG4.B3;

    // PWMCAP4 bits
    const register unsigned short int PWMCAP4_12 = 15;
    sbit  PWMCAP4_12_bit at PWMCAP4.B15;
    const register unsigned short int PWMCAP4_11 = 14;
    sbit  PWMCAP4_11_bit at PWMCAP4.B14;
    const register unsigned short int PWMCAP4_10 = 13;
    sbit  PWMCAP4_10_bit at PWMCAP4.B13;
    const register unsigned short int PWMCAP4_9 = 12;
    sbit  PWMCAP4_9_bit at PWMCAP4.B12;
    const register unsigned short int PWMCAP4_8 = 11;
    sbit  PWMCAP4_8_bit at PWMCAP4.B11;
    const register unsigned short int PWMCAP4_7 = 10;
    sbit  PWMCAP4_7_bit at PWMCAP4.B10;
    const register unsigned short int PWMCAP4_6 = 9;
    sbit  PWMCAP4_6_bit at PWMCAP4.B9;
    const register unsigned short int PWMCAP4_5 = 8;
    sbit  PWMCAP4_5_bit at PWMCAP4.B8;
    const register unsigned short int PWMCAP4_4 = 7;
    sbit  PWMCAP4_4_bit at PWMCAP4.B7;
    const register unsigned short int PWMCAP4_3 = 6;
    sbit  PWMCAP4_3_bit at PWMCAP4.B6;
    const register unsigned short int PWMCAP4_2 = 5;
    sbit  PWMCAP4_2_bit at PWMCAP4.B5;
    const register unsigned short int PWMCAP4_1 = 4;
    sbit  PWMCAP4_1_bit at PWMCAP4.B4;
    const register unsigned short int PWMCAP4_0 = 3;
    sbit  PWMCAP4_0_bit at PWMCAP4.B3;

    // LEBCON4 bits
    sbit  PHR_LEBCON4_bit at LEBCON4.B15;
    sbit  PHF_LEBCON4_bit at LEBCON4.B14;
    sbit  PLR_LEBCON4_bit at LEBCON4.B13;
    sbit  PLF_LEBCON4_bit at LEBCON4.B12;
    sbit  FLTLEBEN_LEBCON4_bit at LEBCON4.B11;
    sbit  CLLEBEN_LEBCON4_bit at LEBCON4.B10;
    sbit  BCH_LEBCON4_bit at LEBCON4.B5;
    sbit  BCL_LEBCON4_bit at LEBCON4.B4;
    sbit  BPHH_LEBCON4_bit at LEBCON4.B3;
    sbit  BPHL_LEBCON4_bit at LEBCON4.B2;
    sbit  BPLH_LEBCON4_bit at LEBCON4.B1;
    sbit  BPLL_LEBCON4_bit at LEBCON4.B0;

    // LEBDLY4 bits
    sbit  LEB_8_LEBDLY4_bit at LEBDLY4.B11;
    sbit  LEB_7_LEBDLY4_bit at LEBDLY4.B10;
    sbit  LEB_6_LEBDLY4_bit at LEBDLY4.B9;
    sbit  LEB_5_LEBDLY4_bit at LEBDLY4.B8;
    sbit  LEB_4_LEBDLY4_bit at LEBDLY4.B7;
    sbit  LEB_3_LEBDLY4_bit at LEBDLY4.B6;
    sbit  LEB_2_LEBDLY4_bit at LEBDLY4.B5;
    sbit  LEB_1_LEBDLY4_bit at LEBDLY4.B4;
    sbit  LEB_0_LEBDLY4_bit at LEBDLY4.B3;

    // AUXCON4 bits
    sbit  HRPDIS_AUXCON4_bit at AUXCON4.B15;
    sbit  HRDDIS_AUXCON4_bit at AUXCON4.B14;
    sbit  BLANKSEL_3_AUXCON4_bit at AUXCON4.B11;
    sbit  BLANKSEL_2_AUXCON4_bit at AUXCON4.B10;
    sbit  BLANKSEL_1_AUXCON4_bit at AUXCON4.B9;
    sbit  BLANKSEL_0_AUXCON4_bit at AUXCON4.B8;
    sbit  CHOPSEL_3_AUXCON4_bit at AUXCON4.B5;
    sbit  CHOPSEL_2_AUXCON4_bit at AUXCON4.B4;
    sbit  CHOPSEL_1_AUXCON4_bit at AUXCON4.B3;
    sbit  CHOPSEL_0_AUXCON4_bit at AUXCON4.B2;
    sbit  CHOPHEN_AUXCON4_bit at AUXCON4.B1;
    sbit  CHOPLEN_AUXCON4_bit at AUXCON4.B0;

    // PWMCON5 bits
    sbit  FLTSTAT_PWMCON5_bit at PWMCON5.B15;
    sbit  CLSTAT_PWMCON5_bit at PWMCON5.B14;
    sbit  TRGSTAT_PWMCON5_bit at PWMCON5.B13;
    sbit  FLTIEN_PWMCON5_bit at PWMCON5.B12;
    sbit  CLIEN_PWMCON5_bit at PWMCON5.B11;
    sbit  TRGIEN_PWMCON5_bit at PWMCON5.B10;
    sbit  ITB_PWMCON5_bit at PWMCON5.B9;
    sbit  MDCS_PWMCON5_bit at PWMCON5.B8;
    sbit  DTC_1_PWMCON5_bit at PWMCON5.B7;
    sbit  DTC_0_PWMCON5_bit at PWMCON5.B6;
    sbit  DTCP_PWMCON5_bit at PWMCON5.B5;
    sbit  MTBS_PWMCON5_bit at PWMCON5.B3;
    sbit  CAM_PWMCON5_bit at PWMCON5.B2;
    sbit  XPRES_PWMCON5_bit at PWMCON5.B1;
    sbit  IUE_PWMCON5_bit at PWMCON5.B0;

    // IOCON5 bits
    sbit  PENH_IOCON5_bit at IOCON5.B15;
    sbit  PENL_IOCON5_bit at IOCON5.B14;
    sbit  POLH_IOCON5_bit at IOCON5.B13;
    sbit  POLL_IOCON5_bit at IOCON5.B12;
    sbit  PMOD_1_IOCON5_bit at IOCON5.B11;
    sbit  PMOD_0_IOCON5_bit at IOCON5.B10;
    sbit  OVRENH_IOCON5_bit at IOCON5.B9;
    sbit  OVRENL_IOCON5_bit at IOCON5.B8;
    sbit  OVRDAT_1_IOCON5_bit at IOCON5.B7;
    sbit  OVRDAT_0_IOCON5_bit at IOCON5.B6;
    sbit  FLTDAT_1_IOCON5_bit at IOCON5.B5;
    sbit  FLTDAT_0_IOCON5_bit at IOCON5.B4;
    sbit  CLDAT_1_IOCON5_bit at IOCON5.B3;
    sbit  CLDAT_0_IOCON5_bit at IOCON5.B2;
    sbit  SWAP_IOCON5_bit at IOCON5.B1;
    sbit  OSYNC_IOCON5_bit at IOCON5.B0;

    // FCLCON5 bits
    sbit  IFLTMOD_FCLCON5_bit at FCLCON5.B15;
    sbit  CLSRC_4_FCLCON5_bit at FCLCON5.B14;
    sbit  CLSRC_3_FCLCON5_bit at FCLCON5.B13;
    sbit  CLSRC_2_FCLCON5_bit at FCLCON5.B12;
    sbit  CLSRC_1_FCLCON5_bit at FCLCON5.B11;
    sbit  CLSRC_0_FCLCON5_bit at FCLCON5.B10;
    sbit  CLPOL_FCLCON5_bit at FCLCON5.B9;
    sbit  CLMOD_FCLCON5_bit at FCLCON5.B8;
    sbit  FLTSRC_4_FCLCON5_bit at FCLCON5.B7;
    sbit  FLTSRC_3_FCLCON5_bit at FCLCON5.B6;
    sbit  FLTSRC_2_FCLCON5_bit at FCLCON5.B5;
    sbit  FLTSRC_1_FCLCON5_bit at FCLCON5.B4;
    sbit  FLTSRC_0_FCLCON5_bit at FCLCON5.B3;
    sbit  FLTPOL_FCLCON5_bit at FCLCON5.B2;
    sbit  FLTMOD_1_FCLCON5_bit at FCLCON5.B1;
    sbit  FLTMOD_0_FCLCON5_bit at FCLCON5.B0;

    // PDC5 bits
    const register unsigned short int PDC5_15 = 15;
    sbit  PDC5_15_bit at PDC5.B15;
    const register unsigned short int PDC5_14 = 14;
    sbit  PDC5_14_bit at PDC5.B14;
    const register unsigned short int PDC5_13 = 13;
    sbit  PDC5_13_bit at PDC5.B13;
    const register unsigned short int PDC5_12 = 12;
    sbit  PDC5_12_bit at PDC5.B12;
    const register unsigned short int PDC5_11 = 11;
    sbit  PDC5_11_bit at PDC5.B11;
    const register unsigned short int PDC5_10 = 10;
    sbit  PDC5_10_bit at PDC5.B10;
    const register unsigned short int PDC5_9 = 9;
    sbit  PDC5_9_bit at PDC5.B9;
    const register unsigned short int PDC5_8 = 8;
    sbit  PDC5_8_bit at PDC5.B8;
    const register unsigned short int PDC5_7 = 7;
    sbit  PDC5_7_bit at PDC5.B7;
    const register unsigned short int PDC5_6 = 6;
    sbit  PDC5_6_bit at PDC5.B6;
    const register unsigned short int PDC5_5 = 5;
    sbit  PDC5_5_bit at PDC5.B5;
    const register unsigned short int PDC5_4 = 4;
    sbit  PDC5_4_bit at PDC5.B4;
    const register unsigned short int PDC5_3 = 3;
    sbit  PDC5_3_bit at PDC5.B3;
    const register unsigned short int PDC5_2 = 2;
    sbit  PDC5_2_bit at PDC5.B2;
    const register unsigned short int PDC5_1 = 1;
    sbit  PDC5_1_bit at PDC5.B1;
    const register unsigned short int PDC5_0 = 0;
    sbit  PDC5_0_bit at PDC5.B0;

    // PHASE5 bits
    const register unsigned short int PHASE5_15 = 15;
    sbit  PHASE5_15_bit at PHASE5.B15;
    const register unsigned short int PHASE5_14 = 14;
    sbit  PHASE5_14_bit at PHASE5.B14;
    const register unsigned short int PHASE5_13 = 13;
    sbit  PHASE5_13_bit at PHASE5.B13;
    const register unsigned short int PHASE5_12 = 12;
    sbit  PHASE5_12_bit at PHASE5.B12;
    const register unsigned short int PHASE5_11 = 11;
    sbit  PHASE5_11_bit at PHASE5.B11;
    const register unsigned short int PHASE5_10 = 10;
    sbit  PHASE5_10_bit at PHASE5.B10;
    const register unsigned short int PHASE5_9 = 9;
    sbit  PHASE5_9_bit at PHASE5.B9;
    const register unsigned short int PHASE5_8 = 8;
    sbit  PHASE5_8_bit at PHASE5.B8;
    const register unsigned short int PHASE5_7 = 7;
    sbit  PHASE5_7_bit at PHASE5.B7;
    const register unsigned short int PHASE5_6 = 6;
    sbit  PHASE5_6_bit at PHASE5.B6;
    const register unsigned short int PHASE5_5 = 5;
    sbit  PHASE5_5_bit at PHASE5.B5;
    const register unsigned short int PHASE5_4 = 4;
    sbit  PHASE5_4_bit at PHASE5.B4;
    const register unsigned short int PHASE5_3 = 3;
    sbit  PHASE5_3_bit at PHASE5.B3;
    const register unsigned short int PHASE5_2 = 2;
    sbit  PHASE5_2_bit at PHASE5.B2;
    const register unsigned short int PHASE5_1 = 1;
    sbit  PHASE5_1_bit at PHASE5.B1;
    const register unsigned short int PHASE5_0 = 0;
    sbit  PHASE5_0_bit at PHASE5.B0;

    // DTR5 bits
    const register unsigned short int DTR5_13 = 13;
    sbit  DTR5_13_bit at DTR5.B13;
    const register unsigned short int DTR5_12 = 12;
    sbit  DTR5_12_bit at DTR5.B12;
    const register unsigned short int DTR5_11 = 11;
    sbit  DTR5_11_bit at DTR5.B11;
    const register unsigned short int DTR5_10 = 10;
    sbit  DTR5_10_bit at DTR5.B10;
    const register unsigned short int DTR5_9 = 9;
    sbit  DTR5_9_bit at DTR5.B9;
    const register unsigned short int DTR5_8 = 8;
    sbit  DTR5_8_bit at DTR5.B8;
    const register unsigned short int DTR5_7 = 7;
    sbit  DTR5_7_bit at DTR5.B7;
    const register unsigned short int DTR5_6 = 6;
    sbit  DTR5_6_bit at DTR5.B6;
    const register unsigned short int DTR5_5 = 5;
    sbit  DTR5_5_bit at DTR5.B5;
    const register unsigned short int DTR5_4 = 4;
    sbit  DTR5_4_bit at DTR5.B4;
    const register unsigned short int DTR5_3 = 3;
    sbit  DTR5_3_bit at DTR5.B3;
    const register unsigned short int DTR5_2 = 2;
    sbit  DTR5_2_bit at DTR5.B2;
    const register unsigned short int DTR5_1 = 1;
    sbit  DTR5_1_bit at DTR5.B1;
    const register unsigned short int DTR5_0 = 0;
    sbit  DTR5_0_bit at DTR5.B0;

    // ALTDTR5 bits
    const register unsigned short int ALTDTR5_13 = 13;
    sbit  ALTDTR5_13_bit at ALTDTR5.B13;
    const register unsigned short int ALTDTR5_12 = 12;
    sbit  ALTDTR5_12_bit at ALTDTR5.B12;
    const register unsigned short int ALTDTR5_11 = 11;
    sbit  ALTDTR5_11_bit at ALTDTR5.B11;
    const register unsigned short int ALTDTR5_10 = 10;
    sbit  ALTDTR5_10_bit at ALTDTR5.B10;
    const register unsigned short int ALTDTR5_9 = 9;
    sbit  ALTDTR5_9_bit at ALTDTR5.B9;
    const register unsigned short int ALTDTR5_8 = 8;
    sbit  ALTDTR5_8_bit at ALTDTR5.B8;
    const register unsigned short int ALTDTR5_7 = 7;
    sbit  ALTDTR5_7_bit at ALTDTR5.B7;
    const register unsigned short int ALTDTR5_6 = 6;
    sbit  ALTDTR5_6_bit at ALTDTR5.B6;
    const register unsigned short int ALTDTR5_5 = 5;
    sbit  ALTDTR5_5_bit at ALTDTR5.B5;
    const register unsigned short int ALTDTR5_4 = 4;
    sbit  ALTDTR5_4_bit at ALTDTR5.B4;
    const register unsigned short int ALTDTR5_3 = 3;
    sbit  ALTDTR5_3_bit at ALTDTR5.B3;
    const register unsigned short int ALTDTR5_2 = 2;
    sbit  ALTDTR5_2_bit at ALTDTR5.B2;
    const register unsigned short int ALTDTR5_1 = 1;
    sbit  ALTDTR5_1_bit at ALTDTR5.B1;
    const register unsigned short int ALTDTR5_0 = 0;
    sbit  ALTDTR5_0_bit at ALTDTR5.B0;

    // SDC5 bits
    const register unsigned short int SDC5_15 = 15;
    sbit  SDC5_15_bit at SDC5.B15;
    const register unsigned short int SDC5_14 = 14;
    sbit  SDC5_14_bit at SDC5.B14;
    const register unsigned short int SDC5_13 = 13;
    sbit  SDC5_13_bit at SDC5.B13;
    const register unsigned short int SDC5_12 = 12;
    sbit  SDC5_12_bit at SDC5.B12;
    const register unsigned short int SDC5_11 = 11;
    sbit  SDC5_11_bit at SDC5.B11;
    const register unsigned short int SDC5_10 = 10;
    sbit  SDC5_10_bit at SDC5.B10;
    const register unsigned short int SDC5_9 = 9;
    sbit  SDC5_9_bit at SDC5.B9;
    const register unsigned short int SDC5_8 = 8;
    sbit  SDC5_8_bit at SDC5.B8;
    const register unsigned short int SDC5_7 = 7;
    sbit  SDC5_7_bit at SDC5.B7;
    const register unsigned short int SDC5_6 = 6;
    sbit  SDC5_6_bit at SDC5.B6;
    const register unsigned short int SDC5_5 = 5;
    sbit  SDC5_5_bit at SDC5.B5;
    const register unsigned short int SDC5_4 = 4;
    sbit  SDC5_4_bit at SDC5.B4;
    const register unsigned short int SDC5_3 = 3;
    sbit  SDC5_3_bit at SDC5.B3;
    const register unsigned short int SDC5_2 = 2;
    sbit  SDC5_2_bit at SDC5.B2;
    const register unsigned short int SDC5_1 = 1;
    sbit  SDC5_1_bit at SDC5.B1;
    const register unsigned short int SDC5_0 = 0;
    sbit  SDC5_0_bit at SDC5.B0;

    // SPHASE5 bits
    const register unsigned short int SPHASE5_15 = 15;
    sbit  SPHASE5_15_bit at SPHASE5.B15;
    const register unsigned short int SPHASE5_14 = 14;
    sbit  SPHASE5_14_bit at SPHASE5.B14;
    const register unsigned short int SPHASE5_13 = 13;
    sbit  SPHASE5_13_bit at SPHASE5.B13;
    const register unsigned short int SPHASE5_12 = 12;
    sbit  SPHASE5_12_bit at SPHASE5.B12;
    const register unsigned short int SPHASE5_11 = 11;
    sbit  SPHASE5_11_bit at SPHASE5.B11;
    const register unsigned short int SPHASE5_10 = 10;
    sbit  SPHASE5_10_bit at SPHASE5.B10;
    const register unsigned short int SPHASE5_9 = 9;
    sbit  SPHASE5_9_bit at SPHASE5.B9;
    const register unsigned short int SPHASE5_8 = 8;
    sbit  SPHASE5_8_bit at SPHASE5.B8;
    const register unsigned short int SPHASE5_7 = 7;
    sbit  SPHASE5_7_bit at SPHASE5.B7;
    const register unsigned short int SPHASE5_6 = 6;
    sbit  SPHASE5_6_bit at SPHASE5.B6;
    const register unsigned short int SPHASE5_5 = 5;
    sbit  SPHASE5_5_bit at SPHASE5.B5;
    const register unsigned short int SPHASE5_4 = 4;
    sbit  SPHASE5_4_bit at SPHASE5.B4;
    const register unsigned short int SPHASE5_3 = 3;
    sbit  SPHASE5_3_bit at SPHASE5.B3;
    const register unsigned short int SPHASE5_2 = 2;
    sbit  SPHASE5_2_bit at SPHASE5.B2;
    const register unsigned short int SPHASE5_1 = 1;
    sbit  SPHASE5_1_bit at SPHASE5.B1;
    const register unsigned short int SPHASE5_0 = 0;
    sbit  SPHASE5_0_bit at SPHASE5.B0;

    // TRIG5 bits
    sbit  TRGCMP_12_TRIG5_bit at TRIG5.B15;
    sbit  TRGCMP_11_TRIG5_bit at TRIG5.B14;
    sbit  TRGCMP_10_TRIG5_bit at TRIG5.B13;
    sbit  TRGCMP_9_TRIG5_bit at TRIG5.B12;
    sbit  TRGCMP_8_TRIG5_bit at TRIG5.B11;
    sbit  TRGCMP_7_TRIG5_bit at TRIG5.B10;
    sbit  TRGCMP_6_TRIG5_bit at TRIG5.B9;
    sbit  TRGCMP_5_TRIG5_bit at TRIG5.B8;
    sbit  TRGCMP_4_TRIG5_bit at TRIG5.B7;
    sbit  TRGCMP_3_TRIG5_bit at TRIG5.B6;
    sbit  TRGCMP_2_TRIG5_bit at TRIG5.B5;
    sbit  TRGCMP_1_TRIG5_bit at TRIG5.B4;
    sbit  TRGCMP_0_TRIG5_bit at TRIG5.B3;

    // TRGCON5 bits
    sbit  TRGDIV_3_TRGCON5_bit at TRGCON5.B15;
    sbit  TRGDIV_2_TRGCON5_bit at TRGCON5.B14;
    sbit  TRGDIV_1_TRGCON5_bit at TRGCON5.B13;
    sbit  TRGDIV_0_TRGCON5_bit at TRGCON5.B12;
    sbit  DTM_TRGCON5_bit at TRGCON5.B7;
    sbit  TRGSTRT_5_TRGCON5_bit at TRGCON5.B5;
    sbit  TRGSTRT_4_TRGCON5_bit at TRGCON5.B4;
    sbit  TRGSTRT_3_TRGCON5_bit at TRGCON5.B3;
    sbit  TRGSTRT_2_TRGCON5_bit at TRGCON5.B2;
    sbit  TRGSTRT_1_TRGCON5_bit at TRGCON5.B1;
    sbit  TRGSTRT_0_TRGCON5_bit at TRGCON5.B0;

    // STRIG5 bits
    sbit  STRGCMP_12_STRIG5_bit at STRIG5.B15;
    sbit  STRGCMP_11_STRIG5_bit at STRIG5.B14;
    sbit  STRGCMP_10_STRIG5_bit at STRIG5.B13;
    sbit  STRGCMP_9_STRIG5_bit at STRIG5.B12;
    sbit  STRGCMP_8_STRIG5_bit at STRIG5.B11;
    sbit  STRGCMP_7_STRIG5_bit at STRIG5.B10;
    sbit  STRGCMP_6_STRIG5_bit at STRIG5.B9;
    sbit  STRGCMP_5_STRIG5_bit at STRIG5.B8;
    sbit  STRGCMP_4_STRIG5_bit at STRIG5.B7;
    sbit  STRGCMP_3_STRIG5_bit at STRIG5.B6;
    sbit  STRGCMP_2_STRIG5_bit at STRIG5.B5;
    sbit  STRGCMP_1_STRIG5_bit at STRIG5.B4;
    sbit  STRGCMP_0_STRIG5_bit at STRIG5.B3;

    // PWMCAP5 bits
    const register unsigned short int PWMCAP5_12 = 15;
    sbit  PWMCAP5_12_bit at PWMCAP5.B15;
    const register unsigned short int PWMCAP5_11 = 14;
    sbit  PWMCAP5_11_bit at PWMCAP5.B14;
    const register unsigned short int PWMCAP5_10 = 13;
    sbit  PWMCAP5_10_bit at PWMCAP5.B13;
    const register unsigned short int PWMCAP5_9 = 12;
    sbit  PWMCAP5_9_bit at PWMCAP5.B12;
    const register unsigned short int PWMCAP5_8 = 11;
    sbit  PWMCAP5_8_bit at PWMCAP5.B11;
    const register unsigned short int PWMCAP5_7 = 10;
    sbit  PWMCAP5_7_bit at PWMCAP5.B10;
    const register unsigned short int PWMCAP5_6 = 9;
    sbit  PWMCAP5_6_bit at PWMCAP5.B9;
    const register unsigned short int PWMCAP5_5 = 8;
    sbit  PWMCAP5_5_bit at PWMCAP5.B8;
    const register unsigned short int PWMCAP5_4 = 7;
    sbit  PWMCAP5_4_bit at PWMCAP5.B7;
    const register unsigned short int PWMCAP5_3 = 6;
    sbit  PWMCAP5_3_bit at PWMCAP5.B6;
    const register unsigned short int PWMCAP5_2 = 5;
    sbit  PWMCAP5_2_bit at PWMCAP5.B5;
    const register unsigned short int PWMCAP5_1 = 4;
    sbit  PWMCAP5_1_bit at PWMCAP5.B4;
    const register unsigned short int PWMCAP5_0 = 3;
    sbit  PWMCAP5_0_bit at PWMCAP5.B3;

    // LEBCON5 bits
    sbit  PHR_LEBCON5_bit at LEBCON5.B15;
    sbit  PHF_LEBCON5_bit at LEBCON5.B14;
    sbit  PLR_LEBCON5_bit at LEBCON5.B13;
    sbit  PLF_LEBCON5_bit at LEBCON5.B12;
    sbit  FLTLEBEN_LEBCON5_bit at LEBCON5.B11;
    sbit  CLLEBEN_LEBCON5_bit at LEBCON5.B10;
    sbit  BCH_LEBCON5_bit at LEBCON5.B5;
    sbit  BCL_LEBCON5_bit at LEBCON5.B4;
    sbit  BPHH_LEBCON5_bit at LEBCON5.B3;
    sbit  BPHL_LEBCON5_bit at LEBCON5.B2;
    sbit  BPLH_LEBCON5_bit at LEBCON5.B1;
    sbit  BPLL_LEBCON5_bit at LEBCON5.B0;

    // LEBDLY5 bits
    sbit  LEB_8_LEBDLY5_bit at LEBDLY5.B11;
    sbit  LEB_7_LEBDLY5_bit at LEBDLY5.B10;
    sbit  LEB_6_LEBDLY5_bit at LEBDLY5.B9;
    sbit  LEB_5_LEBDLY5_bit at LEBDLY5.B8;
    sbit  LEB_4_LEBDLY5_bit at LEBDLY5.B7;
    sbit  LEB_3_LEBDLY5_bit at LEBDLY5.B6;
    sbit  LEB_2_LEBDLY5_bit at LEBDLY5.B5;
    sbit  LEB_1_LEBDLY5_bit at LEBDLY5.B4;
    sbit  LEB_0_LEBDLY5_bit at LEBDLY5.B3;

    // AUXCON5 bits
    sbit  HRPDIS_AUXCON5_bit at AUXCON5.B15;
    sbit  HRDDIS_AUXCON5_bit at AUXCON5.B14;
    sbit  BLANKSEL_3_AUXCON5_bit at AUXCON5.B11;
    sbit  BLANKSEL_2_AUXCON5_bit at AUXCON5.B10;
    sbit  BLANKSEL_1_AUXCON5_bit at AUXCON5.B9;
    sbit  BLANKSEL_0_AUXCON5_bit at AUXCON5.B8;
    sbit  CHOPSEL_3_AUXCON5_bit at AUXCON5.B5;
    sbit  CHOPSEL_2_AUXCON5_bit at AUXCON5.B4;
    sbit  CHOPSEL_1_AUXCON5_bit at AUXCON5.B3;
    sbit  CHOPSEL_0_AUXCON5_bit at AUXCON5.B2;
    sbit  CHOPHEN_AUXCON5_bit at AUXCON5.B1;
    sbit  CHOPLEN_AUXCON5_bit at AUXCON5.B0;

    // PWMCON6 bits
    sbit  FLTSTAT_PWMCON6_bit at PWMCON6.B15;
    sbit  CLSTAT_PWMCON6_bit at PWMCON6.B14;
    sbit  TRGSTAT_PWMCON6_bit at PWMCON6.B13;
    sbit  FLTIEN_PWMCON6_bit at PWMCON6.B12;
    sbit  CLIEN_PWMCON6_bit at PWMCON6.B11;
    sbit  TRGIEN_PWMCON6_bit at PWMCON6.B10;
    sbit  ITB_PWMCON6_bit at PWMCON6.B9;
    sbit  MDCS_PWMCON6_bit at PWMCON6.B8;
    sbit  DTC_1_PWMCON6_bit at PWMCON6.B7;
    sbit  DTC_0_PWMCON6_bit at PWMCON6.B6;
    sbit  DTCP_PWMCON6_bit at PWMCON6.B5;
    sbit  MTBS_PWMCON6_bit at PWMCON6.B3;
    sbit  CAM_PWMCON6_bit at PWMCON6.B2;
    sbit  XPRES_PWMCON6_bit at PWMCON6.B1;
    sbit  IUE_PWMCON6_bit at PWMCON6.B0;

    // IOCON6 bits
    sbit  PENH_IOCON6_bit at IOCON6.B15;
    sbit  PENL_IOCON6_bit at IOCON6.B14;
    sbit  POLH_IOCON6_bit at IOCON6.B13;
    sbit  POLL_IOCON6_bit at IOCON6.B12;
    sbit  PMOD_1_IOCON6_bit at IOCON6.B11;
    sbit  PMOD_0_IOCON6_bit at IOCON6.B10;
    sbit  OVRENH_IOCON6_bit at IOCON6.B9;
    sbit  OVRENL_IOCON6_bit at IOCON6.B8;
    sbit  OVRDAT_1_IOCON6_bit at IOCON6.B7;
    sbit  OVRDAT_0_IOCON6_bit at IOCON6.B6;
    sbit  FLTDAT_1_IOCON6_bit at IOCON6.B5;
    sbit  FLTDAT_0_IOCON6_bit at IOCON6.B4;
    sbit  CLDAT_1_IOCON6_bit at IOCON6.B3;
    sbit  CLDAT_0_IOCON6_bit at IOCON6.B2;
    sbit  SWAP_IOCON6_bit at IOCON6.B1;
    sbit  OSYNC_IOCON6_bit at IOCON6.B0;

    // FCLCON6 bits
    sbit  IFLTMOD_FCLCON6_bit at FCLCON6.B15;
    sbit  CLSRC_4_FCLCON6_bit at FCLCON6.B14;
    sbit  CLSRC_3_FCLCON6_bit at FCLCON6.B13;
    sbit  CLSRC_2_FCLCON6_bit at FCLCON6.B12;
    sbit  CLSRC_1_FCLCON6_bit at FCLCON6.B11;
    sbit  CLSRC_0_FCLCON6_bit at FCLCON6.B10;
    sbit  CLPOL_FCLCON6_bit at FCLCON6.B9;
    sbit  CLMOD_FCLCON6_bit at FCLCON6.B8;
    sbit  FLTSRC_4_FCLCON6_bit at FCLCON6.B7;
    sbit  FLTSRC_3_FCLCON6_bit at FCLCON6.B6;
    sbit  FLTSRC_2_FCLCON6_bit at FCLCON6.B5;
    sbit  FLTSRC_1_FCLCON6_bit at FCLCON6.B4;
    sbit  FLTSRC_0_FCLCON6_bit at FCLCON6.B3;
    sbit  FLTPOL_FCLCON6_bit at FCLCON6.B2;
    sbit  FLTMOD_1_FCLCON6_bit at FCLCON6.B1;
    sbit  FLTMOD_0_FCLCON6_bit at FCLCON6.B0;

    // PDC6 bits
    const register unsigned short int PDC6_15 = 15;
    sbit  PDC6_15_bit at PDC6.B15;
    const register unsigned short int PDC6_14 = 14;
    sbit  PDC6_14_bit at PDC6.B14;
    const register unsigned short int PDC6_13 = 13;
    sbit  PDC6_13_bit at PDC6.B13;
    const register unsigned short int PDC6_12 = 12;
    sbit  PDC6_12_bit at PDC6.B12;
    const register unsigned short int PDC6_11 = 11;
    sbit  PDC6_11_bit at PDC6.B11;
    const register unsigned short int PDC6_10 = 10;
    sbit  PDC6_10_bit at PDC6.B10;
    const register unsigned short int PDC6_9 = 9;
    sbit  PDC6_9_bit at PDC6.B9;
    const register unsigned short int PDC6_8 = 8;
    sbit  PDC6_8_bit at PDC6.B8;
    const register unsigned short int PDC6_7 = 7;
    sbit  PDC6_7_bit at PDC6.B7;
    const register unsigned short int PDC6_6 = 6;
    sbit  PDC6_6_bit at PDC6.B6;
    const register unsigned short int PDC6_5 = 5;
    sbit  PDC6_5_bit at PDC6.B5;
    const register unsigned short int PDC6_4 = 4;
    sbit  PDC6_4_bit at PDC6.B4;
    const register unsigned short int PDC6_3 = 3;
    sbit  PDC6_3_bit at PDC6.B3;
    const register unsigned short int PDC6_2 = 2;
    sbit  PDC6_2_bit at PDC6.B2;
    const register unsigned short int PDC6_1 = 1;
    sbit  PDC6_1_bit at PDC6.B1;
    const register unsigned short int PDC6_0 = 0;
    sbit  PDC6_0_bit at PDC6.B0;

    // PHASE6 bits
    const register unsigned short int PHASE6_15 = 15;
    sbit  PHASE6_15_bit at PHASE6.B15;
    const register unsigned short int PHASE6_14 = 14;
    sbit  PHASE6_14_bit at PHASE6.B14;
    const register unsigned short int PHASE6_13 = 13;
    sbit  PHASE6_13_bit at PHASE6.B13;
    const register unsigned short int PHASE6_12 = 12;
    sbit  PHASE6_12_bit at PHASE6.B12;
    const register unsigned short int PHASE6_11 = 11;
    sbit  PHASE6_11_bit at PHASE6.B11;
    const register unsigned short int PHASE6_10 = 10;
    sbit  PHASE6_10_bit at PHASE6.B10;
    const register unsigned short int PHASE6_9 = 9;
    sbit  PHASE6_9_bit at PHASE6.B9;
    const register unsigned short int PHASE6_8 = 8;
    sbit  PHASE6_8_bit at PHASE6.B8;
    const register unsigned short int PHASE6_7 = 7;
    sbit  PHASE6_7_bit at PHASE6.B7;
    const register unsigned short int PHASE6_6 = 6;
    sbit  PHASE6_6_bit at PHASE6.B6;
    const register unsigned short int PHASE6_5 = 5;
    sbit  PHASE6_5_bit at PHASE6.B5;
    const register unsigned short int PHASE6_4 = 4;
    sbit  PHASE6_4_bit at PHASE6.B4;
    const register unsigned short int PHASE6_3 = 3;
    sbit  PHASE6_3_bit at PHASE6.B3;
    const register unsigned short int PHASE6_2 = 2;
    sbit  PHASE6_2_bit at PHASE6.B2;
    const register unsigned short int PHASE6_1 = 1;
    sbit  PHASE6_1_bit at PHASE6.B1;
    const register unsigned short int PHASE6_0 = 0;
    sbit  PHASE6_0_bit at PHASE6.B0;

    // DTR6 bits
    const register unsigned short int DTR6_13 = 13;
    sbit  DTR6_13_bit at DTR6.B13;
    const register unsigned short int DTR6_12 = 12;
    sbit  DTR6_12_bit at DTR6.B12;
    const register unsigned short int DTR6_11 = 11;
    sbit  DTR6_11_bit at DTR6.B11;
    const register unsigned short int DTR6_10 = 10;
    sbit  DTR6_10_bit at DTR6.B10;
    const register unsigned short int DTR6_9 = 9;
    sbit  DTR6_9_bit at DTR6.B9;
    const register unsigned short int DTR6_8 = 8;
    sbit  DTR6_8_bit at DTR6.B8;
    const register unsigned short int DTR6_7 = 7;
    sbit  DTR6_7_bit at DTR6.B7;
    const register unsigned short int DTR6_6 = 6;
    sbit  DTR6_6_bit at DTR6.B6;
    const register unsigned short int DTR6_5 = 5;
    sbit  DTR6_5_bit at DTR6.B5;
    const register unsigned short int DTR6_4 = 4;
    sbit  DTR6_4_bit at DTR6.B4;
    const register unsigned short int DTR6_3 = 3;
    sbit  DTR6_3_bit at DTR6.B3;
    const register unsigned short int DTR6_2 = 2;
    sbit  DTR6_2_bit at DTR6.B2;
    const register unsigned short int DTR6_1 = 1;
    sbit  DTR6_1_bit at DTR6.B1;
    const register unsigned short int DTR6_0 = 0;
    sbit  DTR6_0_bit at DTR6.B0;

    // ALTDTR6 bits
    const register unsigned short int ALTDTR6_13 = 13;
    sbit  ALTDTR6_13_bit at ALTDTR6.B13;
    const register unsigned short int ALTDTR6_12 = 12;
    sbit  ALTDTR6_12_bit at ALTDTR6.B12;
    const register unsigned short int ALTDTR6_11 = 11;
    sbit  ALTDTR6_11_bit at ALTDTR6.B11;
    const register unsigned short int ALTDTR6_10 = 10;
    sbit  ALTDTR6_10_bit at ALTDTR6.B10;
    const register unsigned short int ALTDTR6_9 = 9;
    sbit  ALTDTR6_9_bit at ALTDTR6.B9;
    const register unsigned short int ALTDTR6_8 = 8;
    sbit  ALTDTR6_8_bit at ALTDTR6.B8;
    const register unsigned short int ALTDTR6_7 = 7;
    sbit  ALTDTR6_7_bit at ALTDTR6.B7;
    const register unsigned short int ALTDTR6_6 = 6;
    sbit  ALTDTR6_6_bit at ALTDTR6.B6;
    const register unsigned short int ALTDTR6_5 = 5;
    sbit  ALTDTR6_5_bit at ALTDTR6.B5;
    const register unsigned short int ALTDTR6_4 = 4;
    sbit  ALTDTR6_4_bit at ALTDTR6.B4;
    const register unsigned short int ALTDTR6_3 = 3;
    sbit  ALTDTR6_3_bit at ALTDTR6.B3;
    const register unsigned short int ALTDTR6_2 = 2;
    sbit  ALTDTR6_2_bit at ALTDTR6.B2;
    const register unsigned short int ALTDTR6_1 = 1;
    sbit  ALTDTR6_1_bit at ALTDTR6.B1;
    const register unsigned short int ALTDTR6_0 = 0;
    sbit  ALTDTR6_0_bit at ALTDTR6.B0;

    // SDC6 bits
    const register unsigned short int SDC6_15 = 15;
    sbit  SDC6_15_bit at SDC6.B15;
    const register unsigned short int SDC6_14 = 14;
    sbit  SDC6_14_bit at SDC6.B14;
    const register unsigned short int SDC6_13 = 13;
    sbit  SDC6_13_bit at SDC6.B13;
    const register unsigned short int SDC6_12 = 12;
    sbit  SDC6_12_bit at SDC6.B12;
    const register unsigned short int SDC6_11 = 11;
    sbit  SDC6_11_bit at SDC6.B11;
    const register unsigned short int SDC6_10 = 10;
    sbit  SDC6_10_bit at SDC6.B10;
    const register unsigned short int SDC6_9 = 9;
    sbit  SDC6_9_bit at SDC6.B9;
    const register unsigned short int SDC6_8 = 8;
    sbit  SDC6_8_bit at SDC6.B8;
    const register unsigned short int SDC6_7 = 7;
    sbit  SDC6_7_bit at SDC6.B7;
    const register unsigned short int SDC6_6 = 6;
    sbit  SDC6_6_bit at SDC6.B6;
    const register unsigned short int SDC6_5 = 5;
    sbit  SDC6_5_bit at SDC6.B5;
    const register unsigned short int SDC6_4 = 4;
    sbit  SDC6_4_bit at SDC6.B4;
    const register unsigned short int SDC6_3 = 3;
    sbit  SDC6_3_bit at SDC6.B3;
    const register unsigned short int SDC6_2 = 2;
    sbit  SDC6_2_bit at SDC6.B2;
    const register unsigned short int SDC6_1 = 1;
    sbit  SDC6_1_bit at SDC6.B1;
    const register unsigned short int SDC6_0 = 0;
    sbit  SDC6_0_bit at SDC6.B0;

    // SPHASE6 bits
    const register unsigned short int SPHASE6_15 = 15;
    sbit  SPHASE6_15_bit at SPHASE6.B15;
    const register unsigned short int SPHASE6_14 = 14;
    sbit  SPHASE6_14_bit at SPHASE6.B14;
    const register unsigned short int SPHASE6_13 = 13;
    sbit  SPHASE6_13_bit at SPHASE6.B13;
    const register unsigned short int SPHASE6_12 = 12;
    sbit  SPHASE6_12_bit at SPHASE6.B12;
    const register unsigned short int SPHASE6_11 = 11;
    sbit  SPHASE6_11_bit at SPHASE6.B11;
    const register unsigned short int SPHASE6_10 = 10;
    sbit  SPHASE6_10_bit at SPHASE6.B10;
    const register unsigned short int SPHASE6_9 = 9;
    sbit  SPHASE6_9_bit at SPHASE6.B9;
    const register unsigned short int SPHASE6_8 = 8;
    sbit  SPHASE6_8_bit at SPHASE6.B8;
    const register unsigned short int SPHASE6_7 = 7;
    sbit  SPHASE6_7_bit at SPHASE6.B7;
    const register unsigned short int SPHASE6_6 = 6;
    sbit  SPHASE6_6_bit at SPHASE6.B6;
    const register unsigned short int SPHASE6_5 = 5;
    sbit  SPHASE6_5_bit at SPHASE6.B5;
    const register unsigned short int SPHASE6_4 = 4;
    sbit  SPHASE6_4_bit at SPHASE6.B4;
    const register unsigned short int SPHASE6_3 = 3;
    sbit  SPHASE6_3_bit at SPHASE6.B3;
    const register unsigned short int SPHASE6_2 = 2;
    sbit  SPHASE6_2_bit at SPHASE6.B2;
    const register unsigned short int SPHASE6_1 = 1;
    sbit  SPHASE6_1_bit at SPHASE6.B1;
    const register unsigned short int SPHASE6_0 = 0;
    sbit  SPHASE6_0_bit at SPHASE6.B0;

    // TRIG6 bits
    sbit  TRGCMP_12_TRIG6_bit at TRIG6.B15;
    sbit  TRGCMP_11_TRIG6_bit at TRIG6.B14;
    sbit  TRGCMP_10_TRIG6_bit at TRIG6.B13;
    sbit  TRGCMP_9_TRIG6_bit at TRIG6.B12;
    sbit  TRGCMP_8_TRIG6_bit at TRIG6.B11;
    sbit  TRGCMP_7_TRIG6_bit at TRIG6.B10;
    sbit  TRGCMP_6_TRIG6_bit at TRIG6.B9;
    sbit  TRGCMP_5_TRIG6_bit at TRIG6.B8;
    sbit  TRGCMP_4_TRIG6_bit at TRIG6.B7;
    sbit  TRGCMP_3_TRIG6_bit at TRIG6.B6;
    sbit  TRGCMP_2_TRIG6_bit at TRIG6.B5;
    sbit  TRGCMP_1_TRIG6_bit at TRIG6.B4;
    sbit  TRGCMP_0_TRIG6_bit at TRIG6.B3;

    // TRGCON6 bits
    sbit  TRGDIV_3_TRGCON6_bit at TRGCON6.B15;
    sbit  TRGDIV_2_TRGCON6_bit at TRGCON6.B14;
    sbit  TRGDIV_1_TRGCON6_bit at TRGCON6.B13;
    sbit  TRGDIV_0_TRGCON6_bit at TRGCON6.B12;
    sbit  DTM_TRGCON6_bit at TRGCON6.B7;
    sbit  TRGSTRT_5_TRGCON6_bit at TRGCON6.B5;
    sbit  TRGSTRT_4_TRGCON6_bit at TRGCON6.B4;
    sbit  TRGSTRT_3_TRGCON6_bit at TRGCON6.B3;
    sbit  TRGSTRT_2_TRGCON6_bit at TRGCON6.B2;
    sbit  TRGSTRT_1_TRGCON6_bit at TRGCON6.B1;
    sbit  TRGSTRT_0_TRGCON6_bit at TRGCON6.B0;

    // STRIG6 bits
    sbit  STRGCMP_12_STRIG6_bit at STRIG6.B15;
    sbit  STRGCMP_11_STRIG6_bit at STRIG6.B14;
    sbit  STRGCMP_10_STRIG6_bit at STRIG6.B13;
    sbit  STRGCMP_9_STRIG6_bit at STRIG6.B12;
    sbit  STRGCMP_8_STRIG6_bit at STRIG6.B11;
    sbit  STRGCMP_7_STRIG6_bit at STRIG6.B10;
    sbit  STRGCMP_6_STRIG6_bit at STRIG6.B9;
    sbit  STRGCMP_5_STRIG6_bit at STRIG6.B8;
    sbit  STRGCMP_4_STRIG6_bit at STRIG6.B7;
    sbit  STRGCMP_3_STRIG6_bit at STRIG6.B6;
    sbit  STRGCMP_2_STRIG6_bit at STRIG6.B5;
    sbit  STRGCMP_1_STRIG6_bit at STRIG6.B4;
    sbit  STRGCMP_0_STRIG6_bit at STRIG6.B3;

    // PWMCAP6 bits
    const register unsigned short int PWMCAP6_12 = 15;
    sbit  PWMCAP6_12_bit at PWMCAP6.B15;
    const register unsigned short int PWMCAP6_11 = 14;
    sbit  PWMCAP6_11_bit at PWMCAP6.B14;
    const register unsigned short int PWMCAP6_10 = 13;
    sbit  PWMCAP6_10_bit at PWMCAP6.B13;
    const register unsigned short int PWMCAP6_9 = 12;
    sbit  PWMCAP6_9_bit at PWMCAP6.B12;
    const register unsigned short int PWMCAP6_8 = 11;
    sbit  PWMCAP6_8_bit at PWMCAP6.B11;
    const register unsigned short int PWMCAP6_7 = 10;
    sbit  PWMCAP6_7_bit at PWMCAP6.B10;
    const register unsigned short int PWMCAP6_6 = 9;
    sbit  PWMCAP6_6_bit at PWMCAP6.B9;
    const register unsigned short int PWMCAP6_5 = 8;
    sbit  PWMCAP6_5_bit at PWMCAP6.B8;
    const register unsigned short int PWMCAP6_4 = 7;
    sbit  PWMCAP6_4_bit at PWMCAP6.B7;
    const register unsigned short int PWMCAP6_3 = 6;
    sbit  PWMCAP6_3_bit at PWMCAP6.B6;
    const register unsigned short int PWMCAP6_2 = 5;
    sbit  PWMCAP6_2_bit at PWMCAP6.B5;
    const register unsigned short int PWMCAP6_1 = 4;
    sbit  PWMCAP6_1_bit at PWMCAP6.B4;
    const register unsigned short int PWMCAP6_0 = 3;
    sbit  PWMCAP6_0_bit at PWMCAP6.B3;

    // LEBCON6 bits
    sbit  PHR_LEBCON6_bit at LEBCON6.B15;
    sbit  PHF_LEBCON6_bit at LEBCON6.B14;
    sbit  PLR_LEBCON6_bit at LEBCON6.B13;
    sbit  PLF_LEBCON6_bit at LEBCON6.B12;
    sbit  FLTLEBEN_LEBCON6_bit at LEBCON6.B11;
    sbit  CLLEBEN_LEBCON6_bit at LEBCON6.B10;
    sbit  BCH_LEBCON6_bit at LEBCON6.B5;
    sbit  BCL_LEBCON6_bit at LEBCON6.B4;
    sbit  BPHH_LEBCON6_bit at LEBCON6.B3;
    sbit  BPHL_LEBCON6_bit at LEBCON6.B2;
    sbit  BPLH_LEBCON6_bit at LEBCON6.B1;
    sbit  BPLL_LEBCON6_bit at LEBCON6.B0;

    // LEBDLY6 bits
    sbit  LEB_8_LEBDLY6_bit at LEBDLY6.B11;
    sbit  LEB_7_LEBDLY6_bit at LEBDLY6.B10;
    sbit  LEB_6_LEBDLY6_bit at LEBDLY6.B9;
    sbit  LEB_5_LEBDLY6_bit at LEBDLY6.B8;
    sbit  LEB_4_LEBDLY6_bit at LEBDLY6.B7;
    sbit  LEB_3_LEBDLY6_bit at LEBDLY6.B6;
    sbit  LEB_2_LEBDLY6_bit at LEBDLY6.B5;
    sbit  LEB_1_LEBDLY6_bit at LEBDLY6.B4;
    sbit  LEB_0_LEBDLY6_bit at LEBDLY6.B3;

    // AUXCON6 bits
    sbit  HRPDIS_AUXCON6_bit at AUXCON6.B15;
    sbit  HRDDIS_AUXCON6_bit at AUXCON6.B14;
    sbit  BLANKSEL_3_AUXCON6_bit at AUXCON6.B11;
    sbit  BLANKSEL_2_AUXCON6_bit at AUXCON6.B10;
    sbit  BLANKSEL_1_AUXCON6_bit at AUXCON6.B9;
    sbit  BLANKSEL_0_AUXCON6_bit at AUXCON6.B8;
    sbit  CHOPSEL_3_AUXCON6_bit at AUXCON6.B5;
    sbit  CHOPSEL_2_AUXCON6_bit at AUXCON6.B4;
    sbit  CHOPSEL_1_AUXCON6_bit at AUXCON6.B3;
    sbit  CHOPSEL_0_AUXCON6_bit at AUXCON6.B2;
    sbit  CHOPHEN_AUXCON6_bit at AUXCON6.B1;
    sbit  CHOPLEN_AUXCON6_bit at AUXCON6.B0;

    // CMPCON1 bits
    const register unsigned short int CMPON = 15;
    sbit  CMPON_bit at CMPCON1.B15;
    sbit  CMPON_CMPCON1_bit at CMPCON1.B15;
    const register unsigned short int CMPSIDL = 13;
    sbit  CMPSIDL_bit at CMPCON1.B13;
    sbit  CMPSIDL_CMPCON1_bit at CMPCON1.B13;
    const register unsigned short int DACOE = 8;
    sbit  DACOE_bit at CMPCON1.B8;
    sbit  DACOE_CMPCON1_bit at CMPCON1.B8;
    const register unsigned short int INSEL_1 = 7;
    sbit  INSEL_1_bit at CMPCON1.B7;
    sbit  INSEL_1_CMPCON1_bit at CMPCON1.B7;
    const register unsigned short int INSEL_0 = 6;
    sbit  INSEL_0_bit at CMPCON1.B6;
    sbit  INSEL_0_CMPCON1_bit at CMPCON1.B6;
    const register unsigned short int EXTREF = 5;
    sbit  EXTREF_bit at CMPCON1.B5;
    sbit  EXTREF_CMPCON1_bit at CMPCON1.B5;
    const register unsigned short int CMPSTAT = 3;
    sbit  CMPSTAT_bit at CMPCON1.B3;
    sbit  CMPSTAT_CMPCON1_bit at CMPCON1.B3;
    const register unsigned short int CMPPOL = 1;
    sbit  CMPPOL_bit at CMPCON1.B1;
    sbit  CMPPOL_CMPCON1_bit at CMPCON1.B1;
    const register unsigned short int RANGE = 0;
    sbit  RANGE_bit at CMPCON1.B0;
    sbit  RANGE_CMPCON1_bit at CMPCON1.B0;

    // CMPDAC1 bits
    const register unsigned short int CMREF_9 = 9;
    sbit  CMREF_9_bit at CMPDAC1.B9;
    sbit  CMREF_9_CMPDAC1_bit at CMPDAC1.B9;
    const register unsigned short int CMREF_8 = 8;
    sbit  CMREF_8_bit at CMPDAC1.B8;
    sbit  CMREF_8_CMPDAC1_bit at CMPDAC1.B8;
    const register unsigned short int CMREF_7 = 7;
    sbit  CMREF_7_bit at CMPDAC1.B7;
    sbit  CMREF_7_CMPDAC1_bit at CMPDAC1.B7;
    const register unsigned short int CMREF_6 = 6;
    sbit  CMREF_6_bit at CMPDAC1.B6;
    sbit  CMREF_6_CMPDAC1_bit at CMPDAC1.B6;
    const register unsigned short int CMREF_5 = 5;
    sbit  CMREF_5_bit at CMPDAC1.B5;
    sbit  CMREF_5_CMPDAC1_bit at CMPDAC1.B5;
    const register unsigned short int CMREF_4 = 4;
    sbit  CMREF_4_bit at CMPDAC1.B4;
    sbit  CMREF_4_CMPDAC1_bit at CMPDAC1.B4;
    const register unsigned short int CMREF_3 = 3;
    sbit  CMREF_3_bit at CMPDAC1.B3;
    sbit  CMREF_3_CMPDAC1_bit at CMPDAC1.B3;
    const register unsigned short int CMREF_2 = 2;
    sbit  CMREF_2_bit at CMPDAC1.B2;
    sbit  CMREF_2_CMPDAC1_bit at CMPDAC1.B2;
    const register unsigned short int CMREF_1 = 1;
    sbit  CMREF_1_bit at CMPDAC1.B1;
    sbit  CMREF_1_CMPDAC1_bit at CMPDAC1.B1;
    const register unsigned short int CMREF_0 = 0;
    sbit  CMREF_0_bit at CMPDAC1.B0;
    sbit  CMREF_0_CMPDAC1_bit at CMPDAC1.B0;

    // CMPCON2 bits
    sbit  CMPON_CMPCON2_bit at CMPCON2.B15;
    sbit  CMPSIDL_CMPCON2_bit at CMPCON2.B13;
    sbit  DACOE_CMPCON2_bit at CMPCON2.B8;
    sbit  INSEL_1_CMPCON2_bit at CMPCON2.B7;
    sbit  INSEL_0_CMPCON2_bit at CMPCON2.B6;
    sbit  EXTREF_CMPCON2_bit at CMPCON2.B5;
    sbit  CMPSTAT_CMPCON2_bit at CMPCON2.B3;
    sbit  CMPPOL_CMPCON2_bit at CMPCON2.B1;
    sbit  RANGE_CMPCON2_bit at CMPCON2.B0;

    // CMPDAC2 bits
    sbit  CMREF_9_CMPDAC2_bit at CMPDAC2.B9;
    sbit  CMREF_8_CMPDAC2_bit at CMPDAC2.B8;
    sbit  CMREF_7_CMPDAC2_bit at CMPDAC2.B7;
    sbit  CMREF_6_CMPDAC2_bit at CMPDAC2.B6;
    sbit  CMREF_5_CMPDAC2_bit at CMPDAC2.B5;
    sbit  CMREF_4_CMPDAC2_bit at CMPDAC2.B4;
    sbit  CMREF_3_CMPDAC2_bit at CMPDAC2.B3;
    sbit  CMREF_2_CMPDAC2_bit at CMPDAC2.B2;
    sbit  CMREF_1_CMPDAC2_bit at CMPDAC2.B1;
    sbit  CMREF_0_CMPDAC2_bit at CMPDAC2.B0;

    // CMPCON3 bits
    sbit  CMPON_CMPCON3_bit at CMPCON3.B15;
    sbit  CMPSIDL_CMPCON3_bit at CMPCON3.B13;
    sbit  DACOE_CMPCON3_bit at CMPCON3.B8;
    sbit  INSEL_1_CMPCON3_bit at CMPCON3.B7;
    sbit  INSEL_0_CMPCON3_bit at CMPCON3.B6;
    sbit  EXTREF_CMPCON3_bit at CMPCON3.B5;
    sbit  CMPSTAT_CMPCON3_bit at CMPCON3.B3;
    sbit  CMPPOL_CMPCON3_bit at CMPCON3.B1;
    sbit  RANGE_CMPCON3_bit at CMPCON3.B0;

    // CMPDAC3 bits
    sbit  CMREF_9_CMPDAC3_bit at CMPDAC3.B9;
    sbit  CMREF_8_CMPDAC3_bit at CMPDAC3.B8;
    sbit  CMREF_7_CMPDAC3_bit at CMPDAC3.B7;
    sbit  CMREF_6_CMPDAC3_bit at CMPDAC3.B6;
    sbit  CMREF_5_CMPDAC3_bit at CMPDAC3.B5;
    sbit  CMREF_4_CMPDAC3_bit at CMPDAC3.B4;
    sbit  CMREF_3_CMPDAC3_bit at CMPDAC3.B3;
    sbit  CMREF_2_CMPDAC3_bit at CMPDAC3.B2;
    sbit  CMREF_1_CMPDAC3_bit at CMPDAC3.B1;
    sbit  CMREF_0_CMPDAC3_bit at CMPDAC3.B0;

    // CMPCON4 bits
    sbit  CMPON_CMPCON4_bit at CMPCON4.B15;
    sbit  CMPSIDL_CMPCON4_bit at CMPCON4.B13;
    sbit  DACOE_CMPCON4_bit at CMPCON4.B8;
    sbit  INSEL_1_CMPCON4_bit at CMPCON4.B7;
    sbit  INSEL_0_CMPCON4_bit at CMPCON4.B6;
    sbit  EXTREF_CMPCON4_bit at CMPCON4.B5;
    sbit  CMPSTAT_CMPCON4_bit at CMPCON4.B3;
    sbit  CMPPOL_CMPCON4_bit at CMPCON4.B1;
    sbit  RANGE_CMPCON4_bit at CMPCON4.B0;

    // CMPDAC4 bits
    sbit  CMREF_9_CMPDAC4_bit at CMPDAC4.B9;
    sbit  CMREF_8_CMPDAC4_bit at CMPDAC4.B8;
    sbit  CMREF_7_CMPDAC4_bit at CMPDAC4.B7;
    sbit  CMREF_6_CMPDAC4_bit at CMPDAC4.B6;
    sbit  CMREF_5_CMPDAC4_bit at CMPDAC4.B5;
    sbit  CMREF_4_CMPDAC4_bit at CMPDAC4.B4;
    sbit  CMREF_3_CMPDAC4_bit at CMPDAC4.B3;
    sbit  CMREF_2_CMPDAC4_bit at CMPDAC4.B2;
    sbit  CMREF_1_CMPDAC4_bit at CMPDAC4.B1;
    sbit  CMREF_0_CMPDAC4_bit at CMPDAC4.B0;

    // C1CTRL1 bits
    const register unsigned short int CSIDL = 13;
    sbit  CSIDL_bit at C1CTRL1.B13;
    const register unsigned short int ABAT = 12;
    sbit  ABAT_bit at C1CTRL1.B12;
    const register unsigned short int CANCKS = 11;
    sbit  CANCKS_bit at C1CTRL1.B11;
    const register unsigned short int REQOP_2 = 10;
    sbit  REQOP_2_bit at C1CTRL1.B10;
    const register unsigned short int REQOP_1 = 9;
    sbit  REQOP_1_bit at C1CTRL1.B9;
    const register unsigned short int REQOP_0 = 8;
    sbit  REQOP_0_bit at C1CTRL1.B8;
    const register unsigned short int OPMODE_2 = 7;
    sbit  OPMODE_2_bit at C1CTRL1.B7;
    const register unsigned short int OPMODE_1 = 6;
    sbit  OPMODE_1_bit at C1CTRL1.B6;
    const register unsigned short int OPMODE_0 = 5;
    sbit  OPMODE_0_bit at C1CTRL1.B5;
    const register unsigned short int CANCAP = 3;
    sbit  CANCAP_bit at C1CTRL1.B3;
    const register unsigned short int WIN = 0;
    sbit  WIN_bit at C1CTRL1.B0;

    // C1CTRL2 bits
    const register unsigned short int DNCNT_4 = 4;
    sbit  DNCNT_4_bit at C1CTRL2.B4;
    const register unsigned short int DNCNT_3 = 3;
    sbit  DNCNT_3_bit at C1CTRL2.B3;
    const register unsigned short int DNCNT_2 = 2;
    sbit  DNCNT_2_bit at C1CTRL2.B2;
    const register unsigned short int DNCNT_1 = 1;
    sbit  DNCNT_1_bit at C1CTRL2.B1;
    const register unsigned short int DNCNT_0 = 0;
    sbit  DNCNT_0_bit at C1CTRL2.B0;

    // C1VEC bits
    const register unsigned short int FILHIT_4 = 12;
    sbit  FILHIT_4_bit at C1VEC.B12;
    const register unsigned short int FILHIT_3 = 11;
    sbit  FILHIT_3_bit at C1VEC.B11;
    const register unsigned short int FILHIT_2 = 10;
    sbit  FILHIT_2_bit at C1VEC.B10;
    const register unsigned short int FILHIT_1 = 9;
    sbit  FILHIT_1_bit at C1VEC.B9;
    const register unsigned short int FILHIT_0 = 8;
    sbit  FILHIT_0_bit at C1VEC.B8;
    const register unsigned short int ICODE_6 = 6;
    sbit  ICODE_6_bit at C1VEC.B6;
    const register unsigned short int ICODE_5 = 5;
    sbit  ICODE_5_bit at C1VEC.B5;
    const register unsigned short int ICODE_4 = 4;
    sbit  ICODE_4_bit at C1VEC.B4;
    const register unsigned short int ICODE_3 = 3;
    sbit  ICODE_3_bit at C1VEC.B3;
    const register unsigned short int ICODE_2 = 2;
    sbit  ICODE_2_bit at C1VEC.B2;
    const register unsigned short int ICODE_1 = 1;
    sbit  ICODE_1_bit at C1VEC.B1;
    const register unsigned short int ICODE_0 = 0;
    sbit  ICODE_0_bit at C1VEC.B0;

    // C1FCTRL bits
    const register unsigned short int DMABS_2 = 15;
    sbit  DMABS_2_bit at C1FCTRL.B15;
    const register unsigned short int DMABS_1 = 14;
    sbit  DMABS_1_bit at C1FCTRL.B14;
    const register unsigned short int DMABS_0 = 13;
    sbit  DMABS_0_bit at C1FCTRL.B13;
    const register unsigned short int FSA_4 = 4;
    sbit  FSA_4_bit at C1FCTRL.B4;
    const register unsigned short int FSA_3 = 3;
    sbit  FSA_3_bit at C1FCTRL.B3;
    const register unsigned short int FSA_2 = 2;
    sbit  FSA_2_bit at C1FCTRL.B2;
    const register unsigned short int FSA_1 = 1;
    sbit  FSA_1_bit at C1FCTRL.B1;
    const register unsigned short int FSA_0 = 0;
    sbit  FSA_0_bit at C1FCTRL.B0;

    // C1FIFO bits
    const register unsigned short int FBP_5 = 13;
    sbit  FBP_5_bit at C1FIFO.B13;
    const register unsigned short int FBP_4 = 12;
    sbit  FBP_4_bit at C1FIFO.B12;
    const register unsigned short int FBP_3 = 11;
    sbit  FBP_3_bit at C1FIFO.B11;
    const register unsigned short int FBP_2 = 10;
    sbit  FBP_2_bit at C1FIFO.B10;
    const register unsigned short int FBP_1 = 9;
    sbit  FBP_1_bit at C1FIFO.B9;
    const register unsigned short int FBP_0 = 8;
    sbit  FBP_0_bit at C1FIFO.B8;
    const register unsigned short int FNRB_5 = 5;
    sbit  FNRB_5_bit at C1FIFO.B5;
    const register unsigned short int FNRB_4 = 4;
    sbit  FNRB_4_bit at C1FIFO.B4;
    const register unsigned short int FNRB_3 = 3;
    sbit  FNRB_3_bit at C1FIFO.B3;
    const register unsigned short int FNRB_2 = 2;
    sbit  FNRB_2_bit at C1FIFO.B2;
    const register unsigned short int FNRB_1 = 1;
    sbit  FNRB_1_bit at C1FIFO.B1;
    const register unsigned short int FNRB_0 = 0;
    sbit  FNRB_0_bit at C1FIFO.B0;

    // C1INTF bits
    const register unsigned short int TXBO = 13;
    sbit  TXBO_bit at C1INTF.B13;
    const register unsigned short int TXBP = 12;
    sbit  TXBP_bit at C1INTF.B12;
    const register unsigned short int RXBP = 11;
    sbit  RXBP_bit at C1INTF.B11;
    const register unsigned short int TXWAR = 10;
    sbit  TXWAR_bit at C1INTF.B10;
    const register unsigned short int RXWAR = 9;
    sbit  RXWAR_bit at C1INTF.B9;
    const register unsigned short int EWARN = 8;
    sbit  EWARN_bit at C1INTF.B8;
    const register unsigned short int IVRIF = 7;
    sbit  IVRIF_bit at C1INTF.B7;
    const register unsigned short int WAKIF = 6;
    sbit  WAKIF_bit at C1INTF.B6;
    const register unsigned short int ERRIF = 5;
    sbit  ERRIF_bit at C1INTF.B5;
    const register unsigned short int FIFOIF = 3;
    sbit  FIFOIF_bit at C1INTF.B3;
    const register unsigned short int RBOVIF = 2;
    sbit  RBOVIF_bit at C1INTF.B2;
    const register unsigned short int RBIF = 1;
    sbit  RBIF_bit at C1INTF.B1;
    const register unsigned short int TBIF = 0;
    sbit  TBIF_bit at C1INTF.B0;

    // C1INTE bits
    const register unsigned short int IVRIE = 7;
    sbit  IVRIE_bit at C1INTE.B7;
    const register unsigned short int WAKIE = 6;
    sbit  WAKIE_bit at C1INTE.B6;
    const register unsigned short int ERRIE = 5;
    sbit  ERRIE_bit at C1INTE.B5;
    const register unsigned short int FIFOIE = 3;
    sbit  FIFOIE_bit at C1INTE.B3;
    const register unsigned short int RBOVIE = 2;
    sbit  RBOVIE_bit at C1INTE.B2;
    const register unsigned short int RBIE = 1;
    sbit  RBIE_bit at C1INTE.B1;
    const register unsigned short int TBIE = 0;
    sbit  TBIE_bit at C1INTE.B0;

    // C1EC bits
    const register unsigned short int TERRCNT_7 = 15;
    sbit  TERRCNT_7_bit at C1EC.B15;
    const register unsigned short int TERRCNT_6 = 14;
    sbit  TERRCNT_6_bit at C1EC.B14;
    const register unsigned short int TERRCNT_5 = 13;
    sbit  TERRCNT_5_bit at C1EC.B13;
    const register unsigned short int TERRCNT_4 = 12;
    sbit  TERRCNT_4_bit at C1EC.B12;
    const register unsigned short int TERRCNT_3 = 11;
    sbit  TERRCNT_3_bit at C1EC.B11;
    const register unsigned short int TERRCNT_2 = 10;
    sbit  TERRCNT_2_bit at C1EC.B10;
    const register unsigned short int TERRCNT_1 = 9;
    sbit  TERRCNT_1_bit at C1EC.B9;
    const register unsigned short int TERRCNT_0 = 8;
    sbit  TERRCNT_0_bit at C1EC.B8;
    const register unsigned short int RERRCNT_7 = 7;
    sbit  RERRCNT_7_bit at C1EC.B7;
    const register unsigned short int RERRCNT_6 = 6;
    sbit  RERRCNT_6_bit at C1EC.B6;
    const register unsigned short int RERRCNT_5 = 5;
    sbit  RERRCNT_5_bit at C1EC.B5;
    const register unsigned short int RERRCNT_4 = 4;
    sbit  RERRCNT_4_bit at C1EC.B4;
    const register unsigned short int RERRCNT_3 = 3;
    sbit  RERRCNT_3_bit at C1EC.B3;
    const register unsigned short int RERRCNT_2 = 2;
    sbit  RERRCNT_2_bit at C1EC.B2;
    const register unsigned short int RERRCNT_1 = 1;
    sbit  RERRCNT_1_bit at C1EC.B1;
    const register unsigned short int RERRCNT_0 = 0;
    sbit  RERRCNT_0_bit at C1EC.B0;

    // C1CFG1 bits
    const register unsigned short int SJW_1 = 7;
    sbit  SJW_1_bit at C1CFG1.B7;
    const register unsigned short int SJW_0 = 6;
    sbit  SJW_0_bit at C1CFG1.B6;
    const register unsigned short int BRP_5 = 5;
    sbit  BRP_5_bit at C1CFG1.B5;
    const register unsigned short int BRP_4 = 4;
    sbit  BRP_4_bit at C1CFG1.B4;
    const register unsigned short int BRP_3 = 3;
    sbit  BRP_3_bit at C1CFG1.B3;
    const register unsigned short int BRP_2 = 2;
    sbit  BRP_2_bit at C1CFG1.B2;
    const register unsigned short int BRP_1 = 1;
    sbit  BRP_1_bit at C1CFG1.B1;
    const register unsigned short int BRP_0 = 0;
    sbit  BRP_0_bit at C1CFG1.B0;

    // C1CFG2 bits
    const register unsigned short int WAKFIL = 14;
    sbit  WAKFIL_bit at C1CFG2.B14;
    const register unsigned short int SEG2PH_2 = 10;
    sbit  SEG2PH_2_bit at C1CFG2.B10;
    const register unsigned short int SEG2PH_1 = 9;
    sbit  SEG2PH_1_bit at C1CFG2.B9;
    const register unsigned short int SEG2PH_0 = 8;
    sbit  SEG2PH_0_bit at C1CFG2.B8;
    const register unsigned short int SEG2PHTS = 7;
    sbit  SEG2PHTS_bit at C1CFG2.B7;
    const register unsigned short int SAM = 6;
    sbit  SAM_bit at C1CFG2.B6;
    const register unsigned short int SEG1PH_2 = 5;
    sbit  SEG1PH_2_bit at C1CFG2.B5;
    const register unsigned short int SEG1PH_1 = 4;
    sbit  SEG1PH_1_bit at C1CFG2.B4;
    const register unsigned short int SEG1PH_0 = 3;
    sbit  SEG1PH_0_bit at C1CFG2.B3;
    const register unsigned short int PRSEG_2 = 2;
    sbit  PRSEG_2_bit at C1CFG2.B2;
    const register unsigned short int PRSEG_1 = 1;
    sbit  PRSEG_1_bit at C1CFG2.B1;
    const register unsigned short int PRSEG_0 = 0;
    sbit  PRSEG_0_bit at C1CFG2.B0;

    // C1FEN1 bits
    const register unsigned short int FLTEN15 = 15;
    sbit  FLTEN15_bit at C1FEN1.B15;
    const register unsigned short int FLTEN14 = 14;
    sbit  FLTEN14_bit at C1FEN1.B14;
    const register unsigned short int FLTEN13 = 13;
    sbit  FLTEN13_bit at C1FEN1.B13;
    const register unsigned short int FLTEN12 = 12;
    sbit  FLTEN12_bit at C1FEN1.B12;
    const register unsigned short int FLTEN11 = 11;
    sbit  FLTEN11_bit at C1FEN1.B11;
    const register unsigned short int FLTEN10 = 10;
    sbit  FLTEN10_bit at C1FEN1.B10;
    const register unsigned short int FLTEN9 = 9;
    sbit  FLTEN9_bit at C1FEN1.B9;
    const register unsigned short int FLTEN8 = 8;
    sbit  FLTEN8_bit at C1FEN1.B8;
    const register unsigned short int FLTEN7 = 7;
    sbit  FLTEN7_bit at C1FEN1.B7;
    const register unsigned short int FLTEN6 = 6;
    sbit  FLTEN6_bit at C1FEN1.B6;
    const register unsigned short int FLTEN5 = 5;
    sbit  FLTEN5_bit at C1FEN1.B5;
    const register unsigned short int FLTEN4 = 4;
    sbit  FLTEN4_bit at C1FEN1.B4;
    const register unsigned short int FLTEN3 = 3;
    sbit  FLTEN3_bit at C1FEN1.B3;
    const register unsigned short int FLTEN2 = 2;
    sbit  FLTEN2_bit at C1FEN1.B2;
    const register unsigned short int FLTEN1 = 1;
    sbit  FLTEN1_bit at C1FEN1.B1;
    const register unsigned short int FLTEN0 = 0;
    sbit  FLTEN0_bit at C1FEN1.B0;

    // C1FMSKSEL1 bits
    const register unsigned short int F7MSK_1 = 15;
    sbit  F7MSK_1_bit at C1FMSKSEL1.B15;
    const register unsigned short int F7MSK_0 = 14;
    sbit  F7MSK_0_bit at C1FMSKSEL1.B14;
    const register unsigned short int F6MSK_1 = 13;
    sbit  F6MSK_1_bit at C1FMSKSEL1.B13;
    const register unsigned short int F6MSK_0 = 12;
    sbit  F6MSK_0_bit at C1FMSKSEL1.B12;
    const register unsigned short int F5MSK_1 = 11;
    sbit  F5MSK_1_bit at C1FMSKSEL1.B11;
    const register unsigned short int F5MSK_0 = 10;
    sbit  F5MSK_0_bit at C1FMSKSEL1.B10;
    const register unsigned short int F4MSK_1 = 9;
    sbit  F4MSK_1_bit at C1FMSKSEL1.B9;
    const register unsigned short int F4MSK_0 = 8;
    sbit  F4MSK_0_bit at C1FMSKSEL1.B8;
    const register unsigned short int F3MSK_1 = 7;
    sbit  F3MSK_1_bit at C1FMSKSEL1.B7;
    const register unsigned short int F3MSK_0 = 6;
    sbit  F3MSK_0_bit at C1FMSKSEL1.B6;
    const register unsigned short int F2MSK_1 = 5;
    sbit  F2MSK_1_bit at C1FMSKSEL1.B5;
    const register unsigned short int F2MSK_0 = 4;
    sbit  F2MSK_0_bit at C1FMSKSEL1.B4;
    const register unsigned short int F1MSK_1 = 3;
    sbit  F1MSK_1_bit at C1FMSKSEL1.B3;
    const register unsigned short int F1MSK_0 = 2;
    sbit  F1MSK_0_bit at C1FMSKSEL1.B2;
    const register unsigned short int F0MSK_1 = 1;
    sbit  F0MSK_1_bit at C1FMSKSEL1.B1;
    const register unsigned short int F0MSK_0 = 0;
    sbit  F0MSK_0_bit at C1FMSKSEL1.B0;

    // C1FMSKSEL2 bits
    const register unsigned short int F15MSK_1 = 15;
    sbit  F15MSK_1_bit at C1FMSKSEL2.B15;
    const register unsigned short int F15MSK_0 = 14;
    sbit  F15MSK_0_bit at C1FMSKSEL2.B14;
    const register unsigned short int F14MSK_1 = 13;
    sbit  F14MSK_1_bit at C1FMSKSEL2.B13;
    const register unsigned short int F14MSK_0 = 12;
    sbit  F14MSK_0_bit at C1FMSKSEL2.B12;
    const register unsigned short int F13MSK_1 = 11;
    sbit  F13MSK_1_bit at C1FMSKSEL2.B11;
    const register unsigned short int F13MSK_0 = 10;
    sbit  F13MSK_0_bit at C1FMSKSEL2.B10;
    const register unsigned short int F12MSK_1 = 9;
    sbit  F12MSK_1_bit at C1FMSKSEL2.B9;
    const register unsigned short int F12MSK_0 = 8;
    sbit  F12MSK_0_bit at C1FMSKSEL2.B8;
    const register unsigned short int F11MSK_1 = 7;
    sbit  F11MSK_1_bit at C1FMSKSEL2.B7;
    const register unsigned short int F11MSK_0 = 6;
    sbit  F11MSK_0_bit at C1FMSKSEL2.B6;
    const register unsigned short int F10MSK_1 = 5;
    sbit  F10MSK_1_bit at C1FMSKSEL2.B5;
    const register unsigned short int F10MSK_0 = 4;
    sbit  F10MSK_0_bit at C1FMSKSEL2.B4;
    const register unsigned short int F9MSK_1 = 3;
    sbit  F9MSK_1_bit at C1FMSKSEL2.B3;
    const register unsigned short int F9MSK_0 = 2;
    sbit  F9MSK_0_bit at C1FMSKSEL2.B2;
    const register unsigned short int F8MSK_1 = 1;
    sbit  F8MSK_1_bit at C1FMSKSEL2.B1;
    const register unsigned short int F8MSK_0 = 0;
    sbit  F8MSK_0_bit at C1FMSKSEL2.B0;

    // C1RXFUL1 bits
    const register unsigned short int RXFUL15 = 15;
    sbit  RXFUL15_bit at C1RXFUL1.B15;
    const register unsigned short int RXFUL14 = 14;
    sbit  RXFUL14_bit at C1RXFUL1.B14;
    const register unsigned short int RXFUL13 = 13;
    sbit  RXFUL13_bit at C1RXFUL1.B13;
    const register unsigned short int RXFUL12 = 12;
    sbit  RXFUL12_bit at C1RXFUL1.B12;
    const register unsigned short int RXFUL11 = 11;
    sbit  RXFUL11_bit at C1RXFUL1.B11;
    const register unsigned short int RXFUL10 = 10;
    sbit  RXFUL10_bit at C1RXFUL1.B10;
    const register unsigned short int RXFUL9 = 9;
    sbit  RXFUL9_bit at C1RXFUL1.B9;
    const register unsigned short int RXFUL8 = 8;
    sbit  RXFUL8_bit at C1RXFUL1.B8;
    const register unsigned short int RXFUL7 = 7;
    sbit  RXFUL7_bit at C1RXFUL1.B7;
    const register unsigned short int RXFUL6 = 6;
    sbit  RXFUL6_bit at C1RXFUL1.B6;
    const register unsigned short int RXFUL5 = 5;
    sbit  RXFUL5_bit at C1RXFUL1.B5;
    const register unsigned short int RXFUL4 = 4;
    sbit  RXFUL4_bit at C1RXFUL1.B4;
    const register unsigned short int RXFUL3 = 3;
    sbit  RXFUL3_bit at C1RXFUL1.B3;
    const register unsigned short int RXFUL2 = 2;
    sbit  RXFUL2_bit at C1RXFUL1.B2;
    const register unsigned short int RXFUL1 = 1;
    sbit  RXFUL1_bit at C1RXFUL1.B1;
    const register unsigned short int RXFUL0 = 0;
    sbit  RXFUL0_bit at C1RXFUL1.B0;

    // C1RXFUL2 bits
    const register unsigned short int RXFUL31 = 15;
    sbit  RXFUL31_bit at C1RXFUL2.B15;
    const register unsigned short int RXFUL30 = 14;
    sbit  RXFUL30_bit at C1RXFUL2.B14;
    const register unsigned short int RXFUL29 = 13;
    sbit  RXFUL29_bit at C1RXFUL2.B13;
    const register unsigned short int RXFUL28 = 12;
    sbit  RXFUL28_bit at C1RXFUL2.B12;
    const register unsigned short int RXFUL27 = 11;
    sbit  RXFUL27_bit at C1RXFUL2.B11;
    const register unsigned short int RXFUL26 = 10;
    sbit  RXFUL26_bit at C1RXFUL2.B10;
    const register unsigned short int RXFUL25 = 9;
    sbit  RXFUL25_bit at C1RXFUL2.B9;
    const register unsigned short int RXFUL24 = 8;
    sbit  RXFUL24_bit at C1RXFUL2.B8;
    const register unsigned short int RXFUL23 = 7;
    sbit  RXFUL23_bit at C1RXFUL2.B7;
    const register unsigned short int RXFUL22 = 6;
    sbit  RXFUL22_bit at C1RXFUL2.B6;
    const register unsigned short int RXFUL21 = 5;
    sbit  RXFUL21_bit at C1RXFUL2.B5;
    const register unsigned short int RXFUL20 = 4;
    sbit  RXFUL20_bit at C1RXFUL2.B4;
    const register unsigned short int RXFUL19 = 3;
    sbit  RXFUL19_bit at C1RXFUL2.B3;
    const register unsigned short int RXFUL18 = 2;
    sbit  RXFUL18_bit at C1RXFUL2.B2;
    const register unsigned short int RXFUL17 = 1;
    sbit  RXFUL17_bit at C1RXFUL2.B1;
    const register unsigned short int RXFUL16 = 0;
    sbit  RXFUL16_bit at C1RXFUL2.B0;

    // C1BUFPNT3 bits
    const register unsigned short int F11BP_3 = 15;
    sbit  F11BP_3_bit at C1BUFPNT3.B15;
    const register unsigned short int F11BP_2 = 14;
    sbit  F11BP_2_bit at C1BUFPNT3.B14;
    const register unsigned short int F11BP_1 = 13;
    sbit  F11BP_1_bit at C1BUFPNT3.B13;
    const register unsigned short int F11BP_0 = 12;
    sbit  F11BP_0_bit at C1BUFPNT3.B12;
    const register unsigned short int F10BP_3 = 11;
    sbit  F10BP_3_bit at C1BUFPNT3.B11;
    const register unsigned short int F10BP_2 = 10;
    sbit  F10BP_2_bit at C1BUFPNT3.B10;
    const register unsigned short int F10BP_1 = 9;
    sbit  F10BP_1_bit at C1BUFPNT3.B9;
    const register unsigned short int F10BP_0 = 8;
    sbit  F10BP_0_bit at C1BUFPNT3.B8;
    const register unsigned short int F9BP_3 = 7;
    sbit  F9BP_3_bit at C1BUFPNT3.B7;
    const register unsigned short int F9BP_2 = 6;
    sbit  F9BP_2_bit at C1BUFPNT3.B6;
    const register unsigned short int F9BP_1 = 5;
    sbit  F9BP_1_bit at C1BUFPNT3.B5;
    const register unsigned short int F9BP_0 = 4;
    sbit  F9BP_0_bit at C1BUFPNT3.B4;
    const register unsigned short int F8BP_3 = 3;
    sbit  F8BP_3_bit at C1BUFPNT3.B3;
    const register unsigned short int F8BP_2 = 2;
    sbit  F8BP_2_bit at C1BUFPNT3.B2;
    const register unsigned short int F8BP_1 = 1;
    sbit  F8BP_1_bit at C1BUFPNT3.B1;
    const register unsigned short int F8BP_0 = 0;
    sbit  F8BP_0_bit at C1BUFPNT3.B0;

    // C1BUFPNT4 bits
    const register unsigned short int F15BP_3 = 15;
    sbit  F15BP_3_bit at C1BUFPNT4.B15;
    const register unsigned short int F15BP_2 = 14;
    sbit  F15BP_2_bit at C1BUFPNT4.B14;
    const register unsigned short int F15BP_1 = 13;
    sbit  F15BP_1_bit at C1BUFPNT4.B13;
    const register unsigned short int F15BP_0 = 12;
    sbit  F15BP_0_bit at C1BUFPNT4.B12;
    const register unsigned short int F14BP_3 = 11;
    sbit  F14BP_3_bit at C1BUFPNT4.B11;
    const register unsigned short int F14BP_2 = 10;
    sbit  F14BP_2_bit at C1BUFPNT4.B10;
    const register unsigned short int F14BP_1 = 9;
    sbit  F14BP_1_bit at C1BUFPNT4.B9;
    const register unsigned short int F14BP_0 = 8;
    sbit  F14BP_0_bit at C1BUFPNT4.B8;
    const register unsigned short int F13BP_3 = 7;
    sbit  F13BP_3_bit at C1BUFPNT4.B7;
    const register unsigned short int F13BP_2 = 6;
    sbit  F13BP_2_bit at C1BUFPNT4.B6;
    const register unsigned short int F13BP_1 = 5;
    sbit  F13BP_1_bit at C1BUFPNT4.B5;
    const register unsigned short int F13BP_0 = 4;
    sbit  F13BP_0_bit at C1BUFPNT4.B4;
    const register unsigned short int F12BP_3 = 3;
    sbit  F12BP_3_bit at C1BUFPNT4.B3;
    const register unsigned short int F12BP_2 = 2;
    sbit  F12BP_2_bit at C1BUFPNT4.B2;
    const register unsigned short int F12BP_1 = 1;
    sbit  F12BP_1_bit at C1BUFPNT4.B1;
    const register unsigned short int F12BP_0 = 0;
    sbit  F12BP_0_bit at C1BUFPNT4.B0;

    // C1RXOVF1 bits
    const register unsigned short int RXOVF15 = 15;
    sbit  RXOVF15_bit at C1RXOVF1.B15;
    const register unsigned short int RXOVF14 = 14;
    sbit  RXOVF14_bit at C1RXOVF1.B14;
    const register unsigned short int RXOVF13 = 13;
    sbit  RXOVF13_bit at C1RXOVF1.B13;
    const register unsigned short int RXOVF12 = 12;
    sbit  RXOVF12_bit at C1RXOVF1.B12;
    const register unsigned short int RXOVF11 = 11;
    sbit  RXOVF11_bit at C1RXOVF1.B11;
    const register unsigned short int RXOVF10 = 10;
    sbit  RXOVF10_bit at C1RXOVF1.B10;
    const register unsigned short int RXOVF9 = 9;
    sbit  RXOVF9_bit at C1RXOVF1.B9;
    const register unsigned short int RXOVF8 = 8;
    sbit  RXOVF8_bit at C1RXOVF1.B8;
    const register unsigned short int RXOVF7 = 7;
    sbit  RXOVF7_bit at C1RXOVF1.B7;
    const register unsigned short int RXOVF6 = 6;
    sbit  RXOVF6_bit at C1RXOVF1.B6;
    const register unsigned short int RXOVF5 = 5;
    sbit  RXOVF5_bit at C1RXOVF1.B5;
    const register unsigned short int RXOVF4 = 4;
    sbit  RXOVF4_bit at C1RXOVF1.B4;
    const register unsigned short int RXOVF3 = 3;
    sbit  RXOVF3_bit at C1RXOVF1.B3;
    const register unsigned short int RXOVF2 = 2;
    sbit  RXOVF2_bit at C1RXOVF1.B2;
    const register unsigned short int RXOVF1 = 1;
    sbit  RXOVF1_bit at C1RXOVF1.B1;
    const register unsigned short int RXOVF0 = 0;
    sbit  RXOVF0_bit at C1RXOVF1.B0;

    // C1RXOVF2 bits
    const register unsigned short int RXOVF31 = 15;
    sbit  RXOVF31_bit at C1RXOVF2.B15;
    const register unsigned short int RXOVF30 = 14;
    sbit  RXOVF30_bit at C1RXOVF2.B14;
    const register unsigned short int RXOVF29 = 13;
    sbit  RXOVF29_bit at C1RXOVF2.B13;
    const register unsigned short int RXOVF28 = 12;
    sbit  RXOVF28_bit at C1RXOVF2.B12;
    const register unsigned short int RXOVF27 = 11;
    sbit  RXOVF27_bit at C1RXOVF2.B11;
    const register unsigned short int RXOVF26 = 10;
    sbit  RXOVF26_bit at C1RXOVF2.B10;
    const register unsigned short int RXOVF25 = 9;
    sbit  RXOVF25_bit at C1RXOVF2.B9;
    const register unsigned short int RXOVF24 = 8;
    sbit  RXOVF24_bit at C1RXOVF2.B8;
    const register unsigned short int RXOVF23 = 7;
    sbit  RXOVF23_bit at C1RXOVF2.B7;
    const register unsigned short int RXOVF22 = 6;
    sbit  RXOVF22_bit at C1RXOVF2.B6;
    const register unsigned short int RXOVF21 = 5;
    sbit  RXOVF21_bit at C1RXOVF2.B5;
    const register unsigned short int RXOVF20 = 4;
    sbit  RXOVF20_bit at C1RXOVF2.B4;
    const register unsigned short int RXOVF19 = 3;
    sbit  RXOVF19_bit at C1RXOVF2.B3;
    const register unsigned short int RXOVF18 = 2;
    sbit  RXOVF18_bit at C1RXOVF2.B2;
    const register unsigned short int RXOVF17 = 1;
    sbit  RXOVF17_bit at C1RXOVF2.B1;
    const register unsigned short int RXOVF16 = 0;
    sbit  RXOVF16_bit at C1RXOVF2.B0;

    // C1TR01CON bits
    const register unsigned short int TXEN1 = 15;
    sbit  TXEN1_bit at C1TR01CON.B15;
    const register unsigned short int TXABT1 = 14;
    sbit  TXABT1_bit at C1TR01CON.B14;
    const register unsigned short int TXLARB1 = 13;
    sbit  TXLARB1_bit at C1TR01CON.B13;
    const register unsigned short int TXERR1 = 12;
    sbit  TXERR1_bit at C1TR01CON.B12;
    const register unsigned short int TXREQ1 = 11;
    sbit  TXREQ1_bit at C1TR01CON.B11;
    const register unsigned short int RTREN1 = 10;
    sbit  RTREN1_bit at C1TR01CON.B10;
    const register unsigned short int TX1PRI_1 = 9;
    sbit  TX1PRI_1_bit at C1TR01CON.B9;
    const register unsigned short int TX1PRI_0 = 8;
    sbit  TX1PRI_0_bit at C1TR01CON.B8;
    const register unsigned short int TXEN0 = 7;
    sbit  TXEN0_bit at C1TR01CON.B7;
    const register unsigned short int TXABT0 = 6;
    sbit  TXABT0_bit at C1TR01CON.B6;
    const register unsigned short int TXLARB0 = 5;
    sbit  TXLARB0_bit at C1TR01CON.B5;
    const register unsigned short int TXERR0 = 4;
    sbit  TXERR0_bit at C1TR01CON.B4;
    const register unsigned short int TXREQ0 = 3;
    sbit  TXREQ0_bit at C1TR01CON.B3;
    const register unsigned short int RTREN0 = 2;
    sbit  RTREN0_bit at C1TR01CON.B2;
    const register unsigned short int TX0PRI_1 = 1;
    sbit  TX0PRI_1_bit at C1TR01CON.B1;
    const register unsigned short int TX0PRI_0 = 0;
    sbit  TX0PRI_0_bit at C1TR01CON.B0;

    // C1TR23CON bits
    const register unsigned short int TXEN3 = 15;
    sbit  TXEN3_bit at C1TR23CON.B15;
    const register unsigned short int TXABT3 = 14;
    sbit  TXABT3_bit at C1TR23CON.B14;
    const register unsigned short int TXLARB3 = 13;
    sbit  TXLARB3_bit at C1TR23CON.B13;
    const register unsigned short int TXERR3 = 12;
    sbit  TXERR3_bit at C1TR23CON.B12;
    const register unsigned short int TXREQ3 = 11;
    sbit  TXREQ3_bit at C1TR23CON.B11;
    const register unsigned short int RTREN3 = 10;
    sbit  RTREN3_bit at C1TR23CON.B10;
    const register unsigned short int TX3PRI_1 = 9;
    sbit  TX3PRI_1_bit at C1TR23CON.B9;
    const register unsigned short int TX3PRI_0 = 8;
    sbit  TX3PRI_0_bit at C1TR23CON.B8;
    const register unsigned short int TXEN2 = 7;
    sbit  TXEN2_bit at C1TR23CON.B7;
    const register unsigned short int TXABT2 = 6;
    sbit  TXABT2_bit at C1TR23CON.B6;
    const register unsigned short int TXLARB2 = 5;
    sbit  TXLARB2_bit at C1TR23CON.B5;
    const register unsigned short int TXERR2 = 4;
    sbit  TXERR2_bit at C1TR23CON.B4;
    const register unsigned short int TXREQ2 = 3;
    sbit  TXREQ2_bit at C1TR23CON.B3;
    const register unsigned short int RTREN2 = 2;
    sbit  RTREN2_bit at C1TR23CON.B2;
    const register unsigned short int TX2PRI_1 = 1;
    sbit  TX2PRI_1_bit at C1TR23CON.B1;
    const register unsigned short int TX2PRI_0 = 0;
    sbit  TX2PRI_0_bit at C1TR23CON.B0;

    // C1TR45CON bits
    const register unsigned short int TXEN5 = 15;
    sbit  TXEN5_bit at C1TR45CON.B15;
    const register unsigned short int TXABT5 = 14;
    sbit  TXABT5_bit at C1TR45CON.B14;
    const register unsigned short int TXLARB5 = 13;
    sbit  TXLARB5_bit at C1TR45CON.B13;
    const register unsigned short int TXERR5 = 12;
    sbit  TXERR5_bit at C1TR45CON.B12;
    const register unsigned short int TXREQ5 = 11;
    sbit  TXREQ5_bit at C1TR45CON.B11;
    const register unsigned short int RTREN5 = 10;
    sbit  RTREN5_bit at C1TR45CON.B10;
    const register unsigned short int TX5PRI_1 = 9;
    sbit  TX5PRI_1_bit at C1TR45CON.B9;
    const register unsigned short int TX5PRI_0 = 8;
    sbit  TX5PRI_0_bit at C1TR45CON.B8;
    const register unsigned short int TXEN4 = 7;
    sbit  TXEN4_bit at C1TR45CON.B7;
    const register unsigned short int TXABT4 = 6;
    sbit  TXABT4_bit at C1TR45CON.B6;
    const register unsigned short int TXLARB4 = 5;
    sbit  TXLARB4_bit at C1TR45CON.B5;
    const register unsigned short int TXERR4 = 4;
    sbit  TXERR4_bit at C1TR45CON.B4;
    const register unsigned short int TXREQ4 = 3;
    sbit  TXREQ4_bit at C1TR45CON.B3;
    const register unsigned short int RTREN4 = 2;
    sbit  RTREN4_bit at C1TR45CON.B2;
    const register unsigned short int TX4PRI_1 = 1;
    sbit  TX4PRI_1_bit at C1TR45CON.B1;
    const register unsigned short int TX4PRI_0 = 0;
    sbit  TX4PRI_0_bit at C1TR45CON.B0;

    // C1TR67CON bits
    const register unsigned short int TXEN7 = 15;
    sbit  TXEN7_bit at C1TR67CON.B15;
    const register unsigned short int TXABT7 = 14;
    sbit  TXABT7_bit at C1TR67CON.B14;
    const register unsigned short int TXLARB7 = 13;
    sbit  TXLARB7_bit at C1TR67CON.B13;
    const register unsigned short int TXERR7 = 12;
    sbit  TXERR7_bit at C1TR67CON.B12;
    const register unsigned short int TXREQ7 = 11;
    sbit  TXREQ7_bit at C1TR67CON.B11;
    const register unsigned short int RTREN7 = 10;
    sbit  RTREN7_bit at C1TR67CON.B10;
    const register unsigned short int TX7PRI_1 = 9;
    sbit  TX7PRI_1_bit at C1TR67CON.B9;
    const register unsigned short int TX7PRI_0 = 8;
    sbit  TX7PRI_0_bit at C1TR67CON.B8;
    const register unsigned short int TXEN6 = 7;
    sbit  TXEN6_bit at C1TR67CON.B7;
    const register unsigned short int TXABT6 = 6;
    sbit  TXABT6_bit at C1TR67CON.B6;
    const register unsigned short int TXLARB6 = 5;
    sbit  TXLARB6_bit at C1TR67CON.B5;
    const register unsigned short int TXERR6 = 4;
    sbit  TXERR6_bit at C1TR67CON.B4;
    const register unsigned short int TXREQ6 = 3;
    sbit  TXREQ6_bit at C1TR67CON.B3;
    const register unsigned short int RTREN6 = 2;
    sbit  RTREN6_bit at C1TR67CON.B2;
    const register unsigned short int TX6PRI_1 = 1;
    sbit  TX6PRI_1_bit at C1TR67CON.B1;
    const register unsigned short int TX6PRI_0 = 0;
    sbit  TX6PRI_0_bit at C1TR67CON.B0;

    // C1RXM2SID bits
    const register unsigned short int SID10 = 15;
    sbit  SID10_bit at C1RXM2SID.B15;
    const register unsigned short int SID9 = 14;
    sbit  SID9_bit at C1RXM2SID.B14;
    const register unsigned short int SID8 = 13;
    sbit  SID8_bit at C1RXM2SID.B13;
    const register unsigned short int SID7 = 12;
    sbit  SID7_bit at C1RXM2SID.B12;
    const register unsigned short int SID6 = 11;
    sbit  SID6_bit at C1RXM2SID.B11;
    const register unsigned short int SID5 = 10;
    sbit  SID5_bit at C1RXM2SID.B10;
    const register unsigned short int SID4 = 9;
    sbit  SID4_bit at C1RXM2SID.B9;
    const register unsigned short int SID3 = 8;
    sbit  SID3_bit at C1RXM2SID.B8;
    const register unsigned short int SID2 = 7;
    sbit  SID2_bit at C1RXM2SID.B7;
    const register unsigned short int SID1 = 6;
    sbit  SID1_bit at C1RXM2SID.B6;
    const register unsigned short int SID0 = 5;
    sbit  SID0_bit at C1RXM2SID.B5;
    const register unsigned short int MIDE = 3;
    sbit  MIDE_bit at C1RXM2SID.B3;
    const register unsigned short int EID17 = 1;
    sbit  EID17_bit at C1RXM2SID.B1;
    const register unsigned short int EID16 = 0;
    sbit  EID16_bit at C1RXM2SID.B0;

    // C1RXM2EID bits
    const register unsigned short int EID15 = 15;
    sbit  EID15_bit at C1RXM2EID.B15;
    const register unsigned short int EID14 = 14;
    sbit  EID14_bit at C1RXM2EID.B14;
    const register unsigned short int EID13 = 13;
    sbit  EID13_bit at C1RXM2EID.B13;
    const register unsigned short int EID12 = 12;
    sbit  EID12_bit at C1RXM2EID.B12;
    const register unsigned short int EID11 = 11;
    sbit  EID11_bit at C1RXM2EID.B11;
    const register unsigned short int EID10 = 10;
    sbit  EID10_bit at C1RXM2EID.B10;
    const register unsigned short int EID9 = 9;
    sbit  EID9_bit at C1RXM2EID.B9;
    const register unsigned short int EID8 = 8;
    sbit  EID8_bit at C1RXM2EID.B8;
    const register unsigned short int EID7 = 7;
    sbit  EID7_bit at C1RXM2EID.B7;
    const register unsigned short int EID6 = 6;
    sbit  EID6_bit at C1RXM2EID.B6;
    const register unsigned short int EID5 = 5;
    sbit  EID5_bit at C1RXM2EID.B5;
    const register unsigned short int EID4 = 4;
    sbit  EID4_bit at C1RXM2EID.B4;
    const register unsigned short int EID3 = 3;
    sbit  EID3_bit at C1RXM2EID.B3;
    const register unsigned short int EID2 = 2;
    sbit  EID2_bit at C1RXM2EID.B2;
    const register unsigned short int EID1 = 1;
    sbit  EID1_bit at C1RXM2EID.B1;
    const register unsigned short int EID0 = 0;
    sbit  EID0_bit at C1RXM2EID.B0;

    // C1RXD bits
    const register unsigned short int C1RXD_15 = 15;
    sbit  C1RXD_15_bit at C1RXD.B15;
    const register unsigned short int C1RXD_14 = 14;
    sbit  C1RXD_14_bit at C1RXD.B14;
    const register unsigned short int C1RXD_13 = 13;
    sbit  C1RXD_13_bit at C1RXD.B13;
    const register unsigned short int C1RXD_12 = 12;
    sbit  C1RXD_12_bit at C1RXD.B12;
    const register unsigned short int C1RXD_11 = 11;
    sbit  C1RXD_11_bit at C1RXD.B11;
    const register unsigned short int C1RXD_10 = 10;
    sbit  C1RXD_10_bit at C1RXD.B10;
    const register unsigned short int C1RXD_9 = 9;
    sbit  C1RXD_9_bit at C1RXD.B9;
    const register unsigned short int C1RXD_8 = 8;
    sbit  C1RXD_8_bit at C1RXD.B8;
    const register unsigned short int C1RXD_7 = 7;
    sbit  C1RXD_7_bit at C1RXD.B7;
    const register unsigned short int C1RXD_6 = 6;
    sbit  C1RXD_6_bit at C1RXD.B6;
    const register unsigned short int C1RXD_5 = 5;
    sbit  C1RXD_5_bit at C1RXD.B5;
    const register unsigned short int C1RXD_4 = 4;
    sbit  C1RXD_4_bit at C1RXD.B4;
    const register unsigned short int C1RXD_3 = 3;
    sbit  C1RXD_3_bit at C1RXD.B3;
    const register unsigned short int C1RXD_2 = 2;
    sbit  C1RXD_2_bit at C1RXD.B2;
    const register unsigned short int C1RXD_1 = 1;
    sbit  C1RXD_1_bit at C1RXD.B1;
    const register unsigned short int C1RXD_0 = 0;
    sbit  C1RXD_0_bit at C1RXD.B0;

    // C1TXD bits
    const register unsigned short int C1TXD_15 = 15;
    sbit  C1TXD_15_bit at C1TXD.B15;
    const register unsigned short int C1TXD_14 = 14;
    sbit  C1TXD_14_bit at C1TXD.B14;
    const register unsigned short int C1TXD_13 = 13;
    sbit  C1TXD_13_bit at C1TXD.B13;
    const register unsigned short int C1TXD_12 = 12;
    sbit  C1TXD_12_bit at C1TXD.B12;
    const register unsigned short int C1TXD_11 = 11;
    sbit  C1TXD_11_bit at C1TXD.B11;
    const register unsigned short int C1TXD_10 = 10;
    sbit  C1TXD_10_bit at C1TXD.B10;
    const register unsigned short int C1TXD_9 = 9;
    sbit  C1TXD_9_bit at C1TXD.B9;
    const register unsigned short int C1TXD_8 = 8;
    sbit  C1TXD_8_bit at C1TXD.B8;
    const register unsigned short int C1TXD_7 = 7;
    sbit  C1TXD_7_bit at C1TXD.B7;
    const register unsigned short int C1TXD_6 = 6;
    sbit  C1TXD_6_bit at C1TXD.B6;
    const register unsigned short int C1TXD_5 = 5;
    sbit  C1TXD_5_bit at C1TXD.B5;
    const register unsigned short int C1TXD_4 = 4;
    sbit  C1TXD_4_bit at C1TXD.B4;
    const register unsigned short int C1TXD_3 = 3;
    sbit  C1TXD_3_bit at C1TXD.B3;
    const register unsigned short int C1TXD_2 = 2;
    sbit  C1TXD_2_bit at C1TXD.B2;
    const register unsigned short int C1TXD_1 = 1;
    sbit  C1TXD_1_bit at C1TXD.B1;
    const register unsigned short int C1TXD_0 = 0;
    sbit  C1TXD_0_bit at C1TXD.B0;

    // RCON bits
    const register unsigned short int TRAPR = 15;
    sbit  TRAPR_bit at RCON.B15;
    const register unsigned short int IOPUWR = 14;
    sbit  IOPUWR_bit at RCON.B14;
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
    const register unsigned short int LOCK_ = 5;
    sbit  LOCK_bit at OSCCON.B5;
    const register unsigned short int PRCDEN = 4;
    sbit  PRCDEN_bit at OSCCON.B4;
    const register unsigned short int CF = 3;
    sbit  CF_bit at OSCCON.B3;
    const register unsigned short int LPOSCEN = 1;
    sbit  LPOSCEN_bit at OSCCON.B1;
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
    const register unsigned short int FRCDIV_2 = 10;
    sbit  FRCDIV_2_bit at CLKDIV.B10;
    const register unsigned short int FRCDIV_1 = 9;
    sbit  FRCDIV_1_bit at CLKDIV.B9;
    const register unsigned short int FRCDIV_0 = 8;
    sbit  FRCDIV_0_bit at CLKDIV.B8;
    const register unsigned short int PLLPOST_1 = 7;
    sbit  PLLPOST_1_bit at CLKDIV.B7;
    const register unsigned short int PLLPOST_0 = 6;
    sbit  PLLPOST_0_bit at CLKDIV.B6;
    const register unsigned short int PLLPRE_4 = 4;
    sbit  PLLPRE_4_bit at CLKDIV.B4;
    const register unsigned short int PLLPRE_3 = 3;
    sbit  PLLPRE_3_bit at CLKDIV.B3;
    const register unsigned short int PLLPRE_2 = 2;
    sbit  PLLPRE_2_bit at CLKDIV.B2;
    const register unsigned short int PLLPRE_1 = 1;
    sbit  PLLPRE_1_bit at CLKDIV.B1;
    const register unsigned short int PLLPRE_0 = 0;
    sbit  PLLPRE_0_bit at CLKDIV.B0;

    // PLLFBD bits
    const register unsigned short int PLLDIV_8 = 8;
    sbit  PLLDIV_8_bit at PLLFBD.B8;
    const register unsigned short int PLLDIV_7 = 7;
    sbit  PLLDIV_7_bit at PLLFBD.B7;
    const register unsigned short int PLLDIV_6 = 6;
    sbit  PLLDIV_6_bit at PLLFBD.B6;
    const register unsigned short int PLLDIV_5 = 5;
    sbit  PLLDIV_5_bit at PLLFBD.B5;
    const register unsigned short int PLLDIV_4 = 4;
    sbit  PLLDIV_4_bit at PLLFBD.B4;
    const register unsigned short int PLLDIV_3 = 3;
    sbit  PLLDIV_3_bit at PLLFBD.B3;
    const register unsigned short int PLLDIV_2 = 2;
    sbit  PLLDIV_2_bit at PLLFBD.B2;
    const register unsigned short int PLLDIV_1 = 1;
    sbit  PLLDIV_1_bit at PLLFBD.B1;
    const register unsigned short int PLLDIV_0 = 0;
    sbit  PLLDIV_0_bit at PLLFBD.B0;

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

    // OSCTUN2 bits

    // LFSR bits
    const register unsigned short int LFSR_14 = 14;
    sbit  LFSR_14_bit at LFSR.B14;
    const register unsigned short int LFSR_13 = 13;
    sbit  LFSR_13_bit at LFSR.B13;
    const register unsigned short int LFSR_12 = 12;
    sbit  LFSR_12_bit at LFSR.B12;
    const register unsigned short int LFSR_11 = 11;
    sbit  LFSR_11_bit at LFSR.B11;
    const register unsigned short int LFSR_10 = 10;
    sbit  LFSR_10_bit at LFSR.B10;
    const register unsigned short int LFSR_9 = 9;
    sbit  LFSR_9_bit at LFSR.B9;
    const register unsigned short int LFSR_8 = 8;
    sbit  LFSR_8_bit at LFSR.B8;
    const register unsigned short int LFSR_7 = 7;
    sbit  LFSR_7_bit at LFSR.B7;
    const register unsigned short int LFSR_6 = 6;
    sbit  LFSR_6_bit at LFSR.B6;
    const register unsigned short int LFSR_5 = 5;
    sbit  LFSR_5_bit at LFSR.B5;
    const register unsigned short int LFSR_4 = 4;
    sbit  LFSR_4_bit at LFSR.B4;
    const register unsigned short int LFSR_3 = 3;
    sbit  LFSR_3_bit at LFSR.B3;
    const register unsigned short int LFSR_2 = 2;
    sbit  LFSR_2_bit at LFSR.B2;
    const register unsigned short int LFSR_1 = 1;
    sbit  LFSR_1_bit at LFSR.B1;
    const register unsigned short int LFSR_0 = 0;
    sbit  LFSR_0_bit at LFSR.B0;

    // REFOCON bits
    const register unsigned short int ROON = 15;
    sbit  ROON_bit at REFOCON.B15;
    const register unsigned short int ROSIDL = 13;
    sbit  ROSIDL_bit at REFOCON.B13;
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

    // ACLKCON bits
    const register unsigned short int ENAPLL = 15;
    sbit  ENAPLL_bit at ACLKCON.B15;
    const register unsigned short int APLLCK = 14;
    sbit  APLLCK_bit at ACLKCON.B14;
    const register unsigned short int SELACLK = 13;
    sbit  SELACLK_bit at ACLKCON.B13;
    const register unsigned short int APSTSCLR_2 = 10;
    sbit  APSTSCLR_2_bit at ACLKCON.B10;
    const register unsigned short int APSTSCLR_1 = 9;
    sbit  APSTSCLR_1_bit at ACLKCON.B9;
    const register unsigned short int APSTSCLR_0 = 8;
    sbit  APSTSCLR_0_bit at ACLKCON.B8;
    const register unsigned short int ASRCSEL = 7;
    sbit  ASRCSEL_bit at ACLKCON.B7;
    const register unsigned short int FRCSEL = 6;
    sbit  FRCSEL_bit at ACLKCON.B6;

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
    const register unsigned short int QEI1MD = 10;
    sbit  QEI1MD_bit at PMD1.B10;
    const register unsigned short int PWMMD = 9;
    sbit  PWMMD_bit at PMD1.B9;
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
    const register unsigned short int C1MD = 1;
    sbit  C1MD_bit at PMD1.B1;
    const register unsigned short int ADCMD = 0;
    sbit  ADCMD_bit at PMD1.B0;

    // PMD2 bits
    const register unsigned short int IC4MD = 11;
    sbit  IC4MD_bit at PMD2.B11;
    const register unsigned short int IC3MD = 10;
    sbit  IC3MD_bit at PMD2.B10;
    const register unsigned short int IC2MD = 9;
    sbit  IC2MD_bit at PMD2.B9;
    const register unsigned short int IC1MD = 8;
    sbit  IC1MD_bit at PMD2.B8;
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
    const register unsigned short int QEI2MD = 5;
    sbit  QEI2MD_bit at PMD3.B5;
    const register unsigned short int I2C2MD = 1;
    sbit  I2C2MD_bit at PMD3.B1;

    // PMD4 bits
    const register unsigned short int REFOMD = 3;
    sbit  REFOMD_bit at PMD4.B3;

    // PMD6 bits
    const register unsigned short int PWM6MD = 13;
    sbit  PWM6MD_bit at PMD6.B13;
    const register unsigned short int PWM5MD = 12;
    sbit  PWM5MD_bit at PMD6.B12;
    const register unsigned short int PWM4MD = 11;
    sbit  PWM4MD_bit at PMD6.B11;
    const register unsigned short int PWM3MD = 10;
    sbit  PWM3MD_bit at PMD6.B10;
    const register unsigned short int PWM2MD = 9;
    sbit  PWM2MD_bit at PMD6.B9;
    const register unsigned short int PWM1MD = 8;
    sbit  PWM1MD_bit at PMD6.B8;

    // PMD7 bits
    const register unsigned short int CMP4MD = 11;
    sbit  CMP4MD_bit at PMD7.B11;
    const register unsigned short int CMP3MD = 10;
    sbit  CMP3MD_bit at PMD7.B10;
    const register unsigned short int CMP2MD = 9;
    sbit  CMP2MD_bit at PMD7.B9;
    const register unsigned short int CMP1MD = 8;
    sbit  CMP1MD_bit at PMD7.B8;

    // FEXL bits
    const register unsigned short int FEXL_15 = 15;
    sbit  FEXL_15_bit at FEXL.B15;
    const register unsigned short int FEXL_14 = 14;
    sbit  FEXL_14_bit at FEXL.B14;
    const register unsigned short int FEXL_13 = 13;
    sbit  FEXL_13_bit at FEXL.B13;
    const register unsigned short int FEXL_12 = 12;
    sbit  FEXL_12_bit at FEXL.B12;
    const register unsigned short int FEXL_11 = 11;
    sbit  FEXL_11_bit at FEXL.B11;
    const register unsigned short int FEXL_10 = 10;
    sbit  FEXL_10_bit at FEXL.B10;
    const register unsigned short int FEXL_9 = 9;
    sbit  FEXL_9_bit at FEXL.B9;
    const register unsigned short int FEXL_8 = 8;
    sbit  FEXL_8_bit at FEXL.B8;
    const register unsigned short int FEXL_7 = 7;
    sbit  FEXL_7_bit at FEXL.B7;
    const register unsigned short int FEXL_6 = 6;
    sbit  FEXL_6_bit at FEXL.B6;
    const register unsigned short int FEXL_5 = 5;
    sbit  FEXL_5_bit at FEXL.B5;
    const register unsigned short int FEXL_4 = 4;
    sbit  FEXL_4_bit at FEXL.B4;
    const register unsigned short int FEXL_3 = 3;
    sbit  FEXL_3_bit at FEXL.B3;
    const register unsigned short int FEXL_2 = 2;
    sbit  FEXL_2_bit at FEXL.B2;
    const register unsigned short int FEXL_1 = 1;
    sbit  FEXL_1_bit at FEXL.B1;
    const register unsigned short int FEXL_0 = 0;
    sbit  FEXL_0_bit at FEXL.B0;

    // FEXU bits
    const register unsigned short int FEXU_7 = 7;
    sbit  FEXU_7_bit at FEXU.B7;
    const register unsigned short int FEXU_6 = 6;
    sbit  FEXU_6_bit at FEXU.B6;
    const register unsigned short int FEXU_5 = 5;
    sbit  FEXU_5_bit at FEXU.B5;
    const register unsigned short int FEXU_4 = 4;
    sbit  FEXU_4_bit at FEXU.B4;
    const register unsigned short int FEXU_3 = 3;
    sbit  FEXU_3_bit at FEXU.B3;
    const register unsigned short int FEXU_2 = 2;
    sbit  FEXU_2_bit at FEXU.B2;
    const register unsigned short int FEXU_1 = 1;
    sbit  FEXU_1_bit at FEXU.B1;
    const register unsigned short int FEXU_0 = 0;
    sbit  FEXU_0_bit at FEXU.B0;

    // VISI bits
    const register unsigned short int VISI_15 = 15;
    sbit  VISI_15_bit at VISI.B15;
    const register unsigned short int VISI_14 = 14;
    sbit  VISI_14_bit at VISI.B14;
    const register unsigned short int VISI_13 = 13;
    sbit  VISI_13_bit at VISI.B13;
    const register unsigned short int VISI_12 = 12;
    sbit  VISI_12_bit at VISI.B12;
    const register unsigned short int VISI_11 = 11;
    sbit  VISI_11_bit at VISI.B11;
    const register unsigned short int VISI_10 = 10;
    sbit  VISI_10_bit at VISI.B10;
    const register unsigned short int VISI_9 = 9;
    sbit  VISI_9_bit at VISI.B9;
    const register unsigned short int VISI_8 = 8;
    sbit  VISI_8_bit at VISI.B8;
    const register unsigned short int VISI_7 = 7;
    sbit  VISI_7_bit at VISI.B7;
    const register unsigned short int VISI_6 = 6;
    sbit  VISI_6_bit at VISI.B6;
    const register unsigned short int VISI_5 = 5;
    sbit  VISI_5_bit at VISI.B5;
    const register unsigned short int VISI_4 = 4;
    sbit  VISI_4_bit at VISI.B4;
    const register unsigned short int VISI_3 = 3;
    sbit  VISI_3_bit at VISI.B3;
    const register unsigned short int VISI_2 = 2;
    sbit  VISI_2_bit at VISI.B2;
    const register unsigned short int VISI_1 = 1;
    sbit  VISI_1_bit at VISI.B1;
    const register unsigned short int VISI_0 = 0;
    sbit  VISI_0_bit at VISI.B0;

    // DPCL bits
    const register unsigned short int DPCL_15 = 15;
    sbit  DPCL_15_bit at DPCL.B15;
    const register unsigned short int DPCL_14 = 14;
    sbit  DPCL_14_bit at DPCL.B14;
    const register unsigned short int DPCL_13 = 13;
    sbit  DPCL_13_bit at DPCL.B13;
    const register unsigned short int DPCL_12 = 12;
    sbit  DPCL_12_bit at DPCL.B12;
    const register unsigned short int DPCL_11 = 11;
    sbit  DPCL_11_bit at DPCL.B11;
    const register unsigned short int DPCL_10 = 10;
    sbit  DPCL_10_bit at DPCL.B10;
    const register unsigned short int DPCL_9 = 9;
    sbit  DPCL_9_bit at DPCL.B9;
    const register unsigned short int DPCL_8 = 8;
    sbit  DPCL_8_bit at DPCL.B8;
    const register unsigned short int DPCL_7 = 7;
    sbit  DPCL_7_bit at DPCL.B7;
    const register unsigned short int DPCL_6 = 6;
    sbit  DPCL_6_bit at DPCL.B6;
    const register unsigned short int DPCL_5 = 5;
    sbit  DPCL_5_bit at DPCL.B5;
    const register unsigned short int DPCL_4 = 4;
    sbit  DPCL_4_bit at DPCL.B4;
    const register unsigned short int DPCL_3 = 3;
    sbit  DPCL_3_bit at DPCL.B3;
    const register unsigned short int DPCL_2 = 2;
    sbit  DPCL_2_bit at DPCL.B2;
    const register unsigned short int DPCL_1 = 1;
    sbit  DPCL_1_bit at DPCL.B1;
    const register unsigned short int DPCL_0 = 0;
    sbit  DPCL_0_bit at DPCL.B0;

    // DPCU bits
    const register unsigned short int DPCU_7 = 7;
    sbit  DPCU_7_bit at DPCU.B7;
    const register unsigned short int DPCU_6 = 6;
    sbit  DPCU_6_bit at DPCU.B6;
    const register unsigned short int DPCU_5 = 5;
    sbit  DPCU_5_bit at DPCU.B5;
    const register unsigned short int DPCU_4 = 4;
    sbit  DPCU_4_bit at DPCU.B4;
    const register unsigned short int DPCU_3 = 3;
    sbit  DPCU_3_bit at DPCU.B3;
    const register unsigned short int DPCU_2 = 2;
    sbit  DPCU_2_bit at DPCU.B2;
    const register unsigned short int DPCU_1 = 1;
    sbit  DPCU_1_bit at DPCU.B1;
    const register unsigned short int DPCU_0 = 0;
    sbit  DPCU_0_bit at DPCU.B0;

    // DFTADD bits
    const register unsigned short int DFTADD_15 = 15;
    sbit  DFTADD_15_bit at DFTADD.B15;
    const register unsigned short int DFTADD_14 = 14;
    sbit  DFTADD_14_bit at DFTADD.B14;
    const register unsigned short int DFTADD_13 = 13;
    sbit  DFTADD_13_bit at DFTADD.B13;
    const register unsigned short int DFTADD_12 = 12;
    sbit  DFTADD_12_bit at DFTADD.B12;
    const register unsigned short int DFTADD_11 = 11;
    sbit  DFTADD_11_bit at DFTADD.B11;
    const register unsigned short int DFTADD_10 = 10;
    sbit  DFTADD_10_bit at DFTADD.B10;
    const register unsigned short int DFTADD_9 = 9;
    sbit  DFTADD_9_bit at DFTADD.B9;
    const register unsigned short int DFTADD_8 = 8;
    sbit  DFTADD_8_bit at DFTADD.B8;
    const register unsigned short int DFTADD_7 = 7;
    sbit  DFTADD_7_bit at DFTADD.B7;
    const register unsigned short int DFTADD_6 = 6;
    sbit  DFTADD_6_bit at DFTADD.B6;
    const register unsigned short int DFTADD_5 = 5;
    sbit  DFTADD_5_bit at DFTADD.B5;
    const register unsigned short int DFTADD_4 = 4;
    sbit  DFTADD_4_bit at DFTADD.B4;
    const register unsigned short int DFTADD_3 = 3;
    sbit  DFTADD_3_bit at DFTADD.B3;
    const register unsigned short int DFTADD_2 = 2;
    sbit  DFTADD_2_bit at DFTADD.B2;
    const register unsigned short int DFTADD_1 = 1;
    sbit  DFTADD_1_bit at DFTADD.B1;
    const register unsigned short int DFTADD_0 = 0;
    sbit  DFTADD_0_bit at DFTADD.B0;

    // DFTDATA bits
    const register unsigned short int DFTDATA_15 = 15;
    sbit  DFTDATA_15_bit at DFTDATA.B15;
    const register unsigned short int DFTDATA_14 = 14;
    sbit  DFTDATA_14_bit at DFTDATA.B14;
    const register unsigned short int DFTDATA_13 = 13;
    sbit  DFTDATA_13_bit at DFTDATA.B13;
    const register unsigned short int DFTDATA_12 = 12;
    sbit  DFTDATA_12_bit at DFTDATA.B12;
    const register unsigned short int DFTDATA_11 = 11;
    sbit  DFTDATA_11_bit at DFTDATA.B11;
    const register unsigned short int DFTDATA_10 = 10;
    sbit  DFTDATA_10_bit at DFTDATA.B10;
    const register unsigned short int DFTDATA_9 = 9;
    sbit  DFTDATA_9_bit at DFTDATA.B9;
    const register unsigned short int DFTDATA_8 = 8;
    sbit  DFTDATA_8_bit at DFTDATA.B8;
    const register unsigned short int DFTDATA_7 = 7;
    sbit  DFTDATA_7_bit at DFTDATA.B7;
    const register unsigned short int DFTDATA_6 = 6;
    sbit  DFTDATA_6_bit at DFTDATA.B6;
    const register unsigned short int DFTDATA_5 = 5;
    sbit  DFTDATA_5_bit at DFTDATA.B5;
    const register unsigned short int DFTDATA_4 = 4;
    sbit  DFTDATA_4_bit at DFTDATA.B4;
    const register unsigned short int DFTDATA_3 = 3;
    sbit  DFTDATA_3_bit at DFTDATA.B3;
    const register unsigned short int DFTDATA_2 = 2;
    sbit  DFTDATA_2_bit at DFTDATA.B2;
    const register unsigned short int DFTDATA_1 = 1;
    sbit  DFTDATA_1_bit at DFTDATA.B1;
    const register unsigned short int DFTDATA_0 = 0;
    sbit  DFTDATA_0_bit at DFTDATA.B0;

    // DFTDATA_INC bits
    const register unsigned short int DFTDATA_INC_15 = 15;
    sbit  DFTDATA_INC_15_bit at DFTDATA_INC.B15;
    const register unsigned short int DFTDATA_INC_14 = 14;
    sbit  DFTDATA_INC_14_bit at DFTDATA_INC.B14;
    const register unsigned short int DFTDATA_INC_13 = 13;
    sbit  DFTDATA_INC_13_bit at DFTDATA_INC.B13;
    const register unsigned short int DFTDATA_INC_12 = 12;
    sbit  DFTDATA_INC_12_bit at DFTDATA_INC.B12;
    const register unsigned short int DFTDATA_INC_11 = 11;
    sbit  DFTDATA_INC_11_bit at DFTDATA_INC.B11;
    const register unsigned short int DFTDATA_INC_10 = 10;
    sbit  DFTDATA_INC_10_bit at DFTDATA_INC.B10;
    const register unsigned short int DFTDATA_INC_9 = 9;
    sbit  DFTDATA_INC_9_bit at DFTDATA_INC.B9;
    const register unsigned short int DFTDATA_INC_8 = 8;
    sbit  DFTDATA_INC_8_bit at DFTDATA_INC.B8;
    const register unsigned short int DFTDATA_INC_7 = 7;
    sbit  DFTDATA_INC_7_bit at DFTDATA_INC.B7;
    const register unsigned short int DFTDATA_INC_6 = 6;
    sbit  DFTDATA_INC_6_bit at DFTDATA_INC.B6;
    const register unsigned short int DFTDATA_INC_5 = 5;
    sbit  DFTDATA_INC_5_bit at DFTDATA_INC.B5;
    const register unsigned short int DFTDATA_INC_4 = 4;
    sbit  DFTDATA_INC_4_bit at DFTDATA_INC.B4;
    const register unsigned short int DFTDATA_INC_3 = 3;
    sbit  DFTDATA_INC_3_bit at DFTDATA_INC.B3;
    const register unsigned short int DFTDATA_INC_2 = 2;
    sbit  DFTDATA_INC_2_bit at DFTDATA_INC.B2;
    const register unsigned short int DFTDATA_INC_1 = 1;
    sbit  DFTDATA_INC_1_bit at DFTDATA_INC.B1;
    const register unsigned short int DFTDATA_INC_0 = 0;
    sbit  DFTDATA_INC_0_bit at DFTDATA_INC.B0;

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
          unsigned DA:1;
          unsigned SAB:1;
          unsigned OAB:1;
          unsigned SB:1;
          unsigned SA:1;
          unsigned OB:1;
          unsigned OA:1;
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
      union {
        struct {
          unsigned IF:1;
          unsigned RND:1;
          unsigned PSV:1;
          unsigned IPL3:1;
          unsigned ACCSAT:1;
          unsigned SATDW:1;
          unsigned SATB:1;
          unsigned SATA:1;
          unsigned DL:3;
          unsigned EDT:1;
          unsigned US:1;
        };
        struct {
          unsigned :8;
          unsigned DL0:1;
          unsigned DL1:1;
          unsigned DL2:1;
        };
      };
} typeCORCONBITS;
sfr volatile typeCORCONBITS CORCONbits absolute 0x044;

// backward compatibility for MODCONBITS
    typedef struct tagMODCONBITS {
      union {
        struct {
          unsigned XWM:4;
          unsigned YWM:4;
          unsigned BWM:4;
          unsigned :2;
          unsigned YMODEN:1;
          unsigned XMODEN:1;
        };
        struct {
          unsigned XWM0:1;
          unsigned XWM1:1;
          unsigned XWM2:1;
          unsigned XWM3:1;
          unsigned YWM0:1;
          unsigned YWM1:1;
          unsigned YWM2:1;
          unsigned YWM3:1;
          unsigned BWM0:1;
          unsigned BWM1:1;
          unsigned BWM2:1;
          unsigned BWM3:1;
        };
      };
} typeMODCONBITS;
sfr volatile typeMODCONBITS MODCONbits absolute 0x046;

// backward compatibility for XBREVBITS
    typedef struct tagXBREVBITS {
      union {
        struct {
          unsigned XB:15;
          unsigned BREN:1;
        };
        struct {
          unsigned XB0:1;
          unsigned XB1:1;
          unsigned XB2:1;
          unsigned XB3:1;
          unsigned XB4:1;
          unsigned XB5:1;
          unsigned XB6:1;
          unsigned XB7:1;
          unsigned XB8:1;
          unsigned XB9:1;
          unsigned XB10:1;
          unsigned XB11:1;
          unsigned XB12:1;
          unsigned XB13:1;
          unsigned XB14:1;
        };
      };
} typeXBREVBITS;
sfr volatile typeXBREVBITS XBREVbits absolute 0x050;

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
      unsigned :3;
      unsigned CN22IE:1;
      unsigned CN23IE:1;
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
      unsigned CN8PUE:1;
      unsigned CN9PUE:1;
      unsigned CN10PUE:1;
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
      unsigned CN17PUE:1;
      unsigned CN18PUE:1;
      unsigned :3;
      unsigned CN22PUE:1;
      unsigned CN23PUE:1;
} typeCNPU2BITS;
sfr volatile typeCNPU2BITS CNPU2bits absolute 0x06A;

// backward compatibility for INTCON1BITS
    typedef struct tagINTCON1BITS {
      unsigned :1;
      unsigned OSCFAIL:1;
      unsigned STKERR:1;
      unsigned ADDRERR:1;
      unsigned MATHERR:1;
      unsigned DMACERR:1;
      unsigned DIV0ERR:1;
      unsigned SFTACERR:1;
      unsigned COVTE:1;
      unsigned OVBTE:1;
      unsigned OVATE:1;
      unsigned COVBERR:1;
      unsigned COVAERR:1;
      unsigned OVBERR:1;
      unsigned OVAERR:1;
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
      unsigned SPI1EIF:1;
      unsigned SPI1IF:1;
      unsigned U1RXIF:1;
      unsigned U1TXIF:1;
      unsigned ADIF:1;
      unsigned DMA1IF:1;
} typeIFS0BITS;
sfr volatile typeIFS0BITS IFS0bits absolute 0x084;

// backward compatibility for IFS1BITS
    typedef struct tagIFS1BITS {
      unsigned SI2C1IF:1;
      unsigned MI2C1IF:1;
      unsigned AC1IF:1;
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
} typeIFS1BITS;
sfr volatile typeIFS1BITS IFS1bits absolute 0x086;

// backward compatibility for IFS2BITS
    typedef struct tagIFS2BITS {
      union {
        struct {
          unsigned SPI2EIF:1;
          unsigned SPI2IF:1;
          unsigned C1RXIF:1;
          unsigned C1IF:1;
          unsigned DMA3IF:1;
          unsigned IC3IF:1;
          unsigned IC4IF:1;
        };
        struct {
          unsigned :2;
          unsigned C1EIF:1;
        };
      };
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
      unsigned :2;
      unsigned PSEMIF:1;
      unsigned QEI1IF:1;
} typeIFS3BITS;
sfr volatile typeIFS3BITS IFS3bits absolute 0x08A;

// backward compatibility for IFS4BITS
    typedef struct tagIFS4BITS {
      unsigned :1;
      unsigned U1EIF:1;
      unsigned U2EIF:1;
      unsigned :3;
      unsigned C1TXIF:1;
      unsigned :2;
      unsigned PSESMIF:1;
      unsigned :1;
      unsigned QEI2IF:1;
} typeIFS4BITS;
sfr volatile typeIFS4BITS IFS4bits absolute 0x08C;

// backward compatibility for IFS5BITS
    typedef struct tagIFS5BITS {
      unsigned :13;
      unsigned ADCP12IF:1;
      unsigned PWM1IF:1;
      unsigned PWM2IF:1;
} typeIFS5BITS;
sfr volatile typeIFS5BITS IFS5bits absolute 0x08E;

// backward compatibility for IFS6BITS
    typedef struct tagIFS6BITS {
      unsigned PWM3IF:1;
      unsigned PWM4IF:1;
      unsigned PWM5IF:1;
      unsigned PWM6IF:1;
      unsigned :3;
      unsigned AC2IF:1;
      unsigned AC3IF:1;
      unsigned AC4IF:1;
      unsigned :4;
      unsigned ADCP0IF:1;
      unsigned ADCP1IF:1;
} typeIFS6BITS;
sfr volatile typeIFS6BITS IFS6bits absolute 0x090;

// backward compatibility for IFS7BITS
    typedef struct tagIFS7BITS {
      unsigned ADCP2IF:1;
      unsigned ADCP3IF:1;
      unsigned ADCP4IF:1;
      unsigned ADCP5IF:1;
      unsigned ADCP6IF:1;
      unsigned ADCP7IF:1;
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
      unsigned SPI1EIE:1;
      unsigned SPI1IE:1;
      unsigned U1RXIE:1;
      unsigned U1TXIE:1;
      unsigned ADIE:1;
      unsigned DMA1IE:1;
} typeIEC0BITS;
sfr volatile typeIEC0BITS IEC0bits absolute 0x094;

// backward compatibility for IEC1BITS
    typedef struct tagIEC1BITS {
      unsigned SI2C1IE:1;
      unsigned MI2C1IE:1;
      unsigned AC1IE:1;
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
} typeIEC1BITS;
sfr volatile typeIEC1BITS IEC1bits absolute 0x096;

// backward compatibility for IEC2BITS
    typedef struct tagIEC2BITS {
      union {
        struct {
          unsigned SPI2EIE:1;
          unsigned SPI2IE:1;
          unsigned C1RXIE:1;
          unsigned C1IE:1;
          unsigned DMA3IE:1;
          unsigned IC3IE:1;
          unsigned IC4IE:1;
        };
        struct {
          unsigned :2;
          unsigned C1EIE:1;
        };
      };
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
      unsigned :2;
      unsigned PSEMIE:1;
      unsigned QEI1IE:1;
} typeIEC3BITS;
sfr volatile typeIEC3BITS IEC3bits absolute 0x09A;

// backward compatibility for IEC4BITS
    typedef struct tagIEC4BITS {
      unsigned :1;
      unsigned U1EIE:1;
      unsigned U2EIE:1;
      unsigned :3;
      unsigned C1TXIE:1;
      unsigned :2;
      unsigned PSESMIE:1;
      unsigned :1;
      unsigned QEI2IE:1;
} typeIEC4BITS;
sfr volatile typeIEC4BITS IEC4bits absolute 0x09C;

// backward compatibility for IEC5BITS
    typedef struct tagIEC5BITS {
      unsigned :13;
      unsigned ADCP12IE:1;
      unsigned PWM1IE:1;
      unsigned PWM2IE:1;
} typeIEC5BITS;
sfr volatile typeIEC5BITS IEC5bits absolute 0x09E;

// backward compatibility for IEC6BITS
    typedef struct tagIEC6BITS {
      unsigned PWM3IE:1;
      unsigned PWM4IE:1;
      unsigned PWM5IE:1;
      unsigned PWM6IE:1;
      unsigned :3;
      unsigned AC2IE:1;
      unsigned AC3IE:1;
      unsigned AC4IE:1;
      unsigned :4;
      unsigned ADCP0IE:1;
      unsigned ADCP1IE:1;
} typeIEC6BITS;
sfr volatile typeIEC6BITS IEC6bits absolute 0x0A0;

// backward compatibility for IEC7BITS
    typedef struct tagIEC7BITS {
      unsigned ADCP2IE:1;
      unsigned ADCP3IE:1;
      unsigned ADCP4IE:1;
      unsigned ADCP5IE:1;
      unsigned ADCP6IE:1;
      unsigned ADCP7IE:1;
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
          unsigned SPI1EIP:3;
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
          unsigned SPI1EIP0:1;
          unsigned SPI1EIP1:1;
          unsigned SPI1EIP2:1;
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
          unsigned ADIP:3;
          unsigned :1;
          unsigned DMA1IP:3;
        };
        struct {
          unsigned U1TXIP0:1;
          unsigned U1TXIP1:1;
          unsigned U1TXIP2:1;
          unsigned :1;
          unsigned ADIP0:1;
          unsigned ADIP1:1;
          unsigned ADIP2:1;
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
          unsigned AC1IP:3;
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
          unsigned AC1IP0:1;
          unsigned AC1IP1:1;
          unsigned AC1IP2:1;
          unsigned :1;
          unsigned CNIP0:1;
          unsigned CNIP1:1;
          unsigned CNIP2:1;
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
          unsigned SPI2EIP:3;
          unsigned :1;
          unsigned SPI2IP:3;
          unsigned :1;
          unsigned C1RXIP:3;
          unsigned :1;
          unsigned C1IP:3;
        };
        struct {
          unsigned SPI2EIP0:1;
          unsigned SPI2EIP1:1;
          unsigned SPI2EIP2:1;
          unsigned :1;
          unsigned SPI2IP0:1;
          unsigned SPI2IP1:1;
          unsigned SPI2IP2:1;
          unsigned :1;
          unsigned C1RXIP0:1;
          unsigned C1RXIP1:1;
          unsigned C1RXIP2:1;
          unsigned :1;
          unsigned C1IP0:1;
          unsigned C1IP1:1;
          unsigned C1IP2:1;
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
        };
      };
} typeIPC9BITS;
sfr volatile typeIPC9BITS IPC9bits absolute 0x0B6;

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

// backward compatibility for IPC14BITS
    typedef struct tagIPC14BITS {
      union {
        struct {
          unsigned :4;
          unsigned PSEMIP:3;
          unsigned :1;
          unsigned QEI1IP:3;
        };
        struct {
          unsigned :4;
          unsigned PSEMIP0:1;
          unsigned PSEMIP1:1;
          unsigned PSEMIP2:1;
          unsigned :1;
          unsigned QEI1IP0:1;
          unsigned QEI1IP1:1;
          unsigned QEI1IP2:1;
        };
      };
} typeIPC14BITS;
sfr volatile typeIPC14BITS IPC14bits absolute 0x0C0;

// backward compatibility for IPC16BITS
    typedef struct tagIPC16BITS {
      union {
        struct {
          unsigned :4;
          unsigned U1EIP:3;
          unsigned :1;
          unsigned U2EIP:3;
        };
        struct {
          unsigned :4;
          unsigned U1EIP0:1;
          unsigned U1EIP1:1;
          unsigned U1EIP2:1;
          unsigned :1;
          unsigned U2EIP0:1;
          unsigned U2EIP1:1;
          unsigned U2EIP2:1;
        };
      };
} typeIPC16BITS;
sfr volatile typeIPC16BITS IPC16bits absolute 0x0C4;

// backward compatibility for IPC17BITS
    typedef struct tagIPC17BITS {
      union {
        struct {
          unsigned :8;
          unsigned C1TXIP:3;
        };
        struct {
          unsigned :8;
          unsigned C1TXIP0:1;
          unsigned C1TXIP1:1;
          unsigned C1TXIP2:1;
        };
      };
} typeIPC17BITS;
sfr volatile typeIPC17BITS IPC17bits absolute 0x0C6;

// backward compatibility for IPC18BITS
    typedef struct tagIPC18BITS {
      union {
        struct {
          unsigned :4;
          unsigned PSESMIP:3;
          unsigned :5;
          unsigned QEI2IP:3;
        };
        struct {
          unsigned :4;
          unsigned PSESMIP0:1;
          unsigned PSESMIP1:1;
          unsigned PSESMIP2:1;
          unsigned :5;
          unsigned QEI2IP0:1;
          unsigned QEI2IP1:1;
          unsigned QEI2IP2:1;
        };
      };
} typeIPC18BITS;
sfr volatile typeIPC18BITS IPC18bits absolute 0x0C8;

// backward compatibility for IPC21BITS
    typedef struct tagIPC21BITS {
      union {
        struct {
          unsigned :4;
          unsigned ADCP12IP:3;
        };
        struct {
          unsigned :4;
          unsigned ADCP12IP0:1;
          unsigned ADCP12IP1:1;
          unsigned ADCP12IP2:1;
        };
      };
} typeIPC21BITS;
sfr volatile typeIPC21BITS IPC21bits absolute 0x0CE;

// backward compatibility for IPC23BITS
    typedef struct tagIPC23BITS {
      union {
        struct {
          unsigned :8;
          unsigned PWM1IP:3;
          unsigned :1;
          unsigned PWM2IP:3;
        };
        struct {
          unsigned :8;
          unsigned PWM1IP0:1;
          unsigned PWM1IP1:1;
          unsigned PWM1IP2:1;
          unsigned :1;
          unsigned PWM2IP0:1;
          unsigned PWM2IP1:1;
          unsigned PWM2IP2:1;
        };
      };
} typeIPC23BITS;
sfr volatile typeIPC23BITS IPC23bits absolute 0x0D2;

// backward compatibility for IPC24BITS
    typedef struct tagIPC24BITS {
      union {
        struct {
          unsigned PWM3IP:3;
          unsigned :1;
          unsigned PWM4IP:3;
          unsigned :1;
          unsigned PWM5IP:3;
          unsigned :1;
          unsigned PWM6IP:3;
        };
        struct {
          unsigned PWM3IP0:1;
          unsigned PWM3IP1:1;
          unsigned PWM3IP2:1;
          unsigned :1;
          unsigned PWM4IP0:1;
          unsigned PWM4IP1:1;
          unsigned PWM4IP2:1;
          unsigned :1;
          unsigned PWM5IP0:1;
          unsigned PWM5IP1:1;
          unsigned PWM5IP2:1;
          unsigned :1;
          unsigned PWM6IP0:1;
          unsigned PWM6IP1:1;
          unsigned PWM6IP2:1;
        };
      };
} typeIPC24BITS;
sfr volatile typeIPC24BITS IPC24bits absolute 0x0D4;

// backward compatibility for IPC25BITS
    typedef struct tagIPC25BITS {
      union {
        struct {
          unsigned :12;
          unsigned AC2IP:3;
        };
        struct {
          unsigned :12;
          unsigned AC2IP0:1;
          unsigned AC2IP1:1;
          unsigned AC2IP2:1;
        };
      };
} typeIPC25BITS;
sfr volatile typeIPC25BITS IPC25bits absolute 0x0D6;

// backward compatibility for IPC26BITS
    typedef struct tagIPC26BITS {
      union {
        struct {
          unsigned AC3IP:3;
          unsigned :1;
          unsigned AC4IP:3;
        };
        struct {
          unsigned AC3IP0:1;
          unsigned AC3IP1:1;
          unsigned AC3IP2:1;
          unsigned :1;
          unsigned AC4IP0:1;
          unsigned AC4IP1:1;
          unsigned AC4IP2:1;
        };
      };
} typeIPC26BITS;
sfr volatile typeIPC26BITS IPC26bits absolute 0x0D8;

// backward compatibility for IPC27BITS
    typedef struct tagIPC27BITS {
      union {
        struct {
          unsigned :8;
          unsigned ADCP0IP:3;
          unsigned :1;
          unsigned ADCP1IP:3;
        };
        struct {
          unsigned :8;
          unsigned ADCP0IP0:1;
          unsigned ADCP0IP1:1;
          unsigned ADCP0IP2:1;
          unsigned :1;
          unsigned ADCP1IP0:1;
          unsigned ADCP1IP1:1;
          unsigned ADCP1IP2:1;
        };
      };
} typeIPC27BITS;
sfr volatile typeIPC27BITS IPC27bits absolute 0x0DA;

// backward compatibility for IPC28BITS
    typedef struct tagIPC28BITS {
      union {
        struct {
          unsigned ADCP2IP:3;
          unsigned :1;
          unsigned ADCP3IP:3;
          unsigned :1;
          unsigned ADCP4IP:3;
          unsigned :1;
          unsigned ADCP5IP:3;
        };
        struct {
          unsigned ADCP2IP0:1;
          unsigned ADCP2IP1:1;
          unsigned ADCP2IP2:1;
          unsigned :1;
          unsigned ADCP3IP0:1;
          unsigned ADCP3IP1:1;
          unsigned ADCP3IP2:1;
          unsigned :1;
          unsigned ADCP4IP0:1;
          unsigned ADCP4IP1:1;
          unsigned ADCP4IP2:1;
          unsigned :1;
          unsigned ADCP5IP0:1;
          unsigned ADCP5IP1:1;
          unsigned ADCP5IP2:1;
        };
      };
} typeIPC28BITS;
sfr volatile typeIPC28BITS IPC28bits absolute 0x0DC;

// backward compatibility for IPC29BITS
    typedef struct tagIPC29BITS {
      union {
        struct {
          unsigned ADCP6IP:3;
          unsigned :1;
          unsigned ADCP7IP:3;
        };
        struct {
          unsigned ADCP6IP0:1;
          unsigned ADCP6IP1:1;
          unsigned ADCP6IP2:1;
          unsigned :1;
          unsigned ADCP7IP0:1;
          unsigned ADCP7IP1:1;
          unsigned ADCP7IP2:1;
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

// backward compatibility for IC
    typedef struct tagIC {
            unsigned int icxbuf;
            unsigned int icxcon;
} typeIC;
sfr volatile typeIC IC1 absolute 0x140;
sfr volatile typeIC IC2 absolute 0x144;
sfr volatile typeIC IC3 absolute 0x148;
sfr volatile typeIC IC4 absolute 0x14C;

// backward compatibility for IC1CONBITS
    typedef struct tagIC1CONBITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned ICTMR:1;
          unsigned :5;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
        };
      };
} typeIC1CONBITS;
sfr volatile typeIC1CONBITS IC1CONbits absolute 0x142;

// backward compatibility for IC2CONBITS
    typedef struct tagIC2CONBITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned ICTMR:1;
          unsigned :5;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
        };
      };
} typeIC2CONBITS;
sfr volatile typeIC2CONBITS IC2CONbits absolute 0x146;

// backward compatibility for IC3CONBITS
    typedef struct tagIC3CONBITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned ICTMR:1;
          unsigned :5;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
        };
      };
} typeIC3CONBITS;
sfr volatile typeIC3CONBITS IC3CONbits absolute 0x14A;

// backward compatibility for IC4CONBITS
    typedef struct tagIC4CONBITS {
      union {
        struct {
          unsigned ICM:3;
          unsigned ICBNE:1;
          unsigned ICOV:1;
          unsigned ICI:2;
          unsigned ICTMR:1;
          unsigned :5;
          unsigned ICSIDL:1;
        };
        struct {
          unsigned ICM0:1;
          unsigned ICM1:1;
          unsigned ICM2:1;
          unsigned :2;
          unsigned ICI0:1;
          unsigned ICI1:1;
        };
      };
} typeIC4CONBITS;
sfr volatile typeIC4CONBITS IC4CONbits absolute 0x14E;

// backward compatibility for OC
    typedef struct tagOC {
            unsigned int ocxrs;
            unsigned int ocxr;
            unsigned int ocxcon;
} typeOC;
sfr volatile typeOC OC1 absolute 0x180;
sfr volatile typeOC OC2 absolute 0x186;
sfr volatile typeOC OC3 absolute 0x18C;
sfr volatile typeOC OC4 absolute 0x192;

// backward compatibility for OC1CONBITS
    typedef struct tagOC1CONBITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned OCTSEL:1;
          unsigned OCFLT:1;
          unsigned :8;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
        };
      };
} typeOC1CONBITS;
sfr volatile typeOC1CONBITS OC1CONbits absolute 0x184;

// backward compatibility for OC2CONBITS
    typedef struct tagOC2CONBITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned OCTSEL:1;
          unsigned OCFLT:1;
          unsigned :8;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
        };
      };
} typeOC2CONBITS;
sfr volatile typeOC2CONBITS OC2CONbits absolute 0x18A;

// backward compatibility for OC3CONBITS
    typedef struct tagOC3CONBITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned OCTSEL:1;
          unsigned OCFLT:1;
          unsigned :8;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
        };
      };
} typeOC3CONBITS;
sfr volatile typeOC3CONBITS OC3CONbits absolute 0x190;

// backward compatibility for OC4CONBITS
    typedef struct tagOC4CONBITS {
      union {
        struct {
          unsigned OCM:3;
          unsigned OCTSEL:1;
          unsigned OCFLT:1;
          unsigned :8;
          unsigned OCSIDL:1;
        };
        struct {
          unsigned OCM0:1;
          unsigned OCM1:1;
          unsigned OCM2:1;
        };
      };
} typeOC4CONBITS;
sfr volatile typeOC4CONBITS OC4CONbits absolute 0x196;

// backward compatibility for QEI1CONBITS
    typedef struct tagQEI1CONBITS {
      union {
        struct {
          unsigned UPDN_SRC:1;
          unsigned TQCS:1;
          unsigned POSRES:1;
          unsigned TQCKPS:2;
          unsigned TQGATE:1;
          unsigned PCDOUT:1;
          unsigned SWPAB:1;
          unsigned QEIM:3;
          unsigned UPDN:1;
          unsigned INDX:1;
          unsigned QEISIDL:1;
          unsigned :1;
          unsigned CNTERR:1;
        };
        struct {
          unsigned :3;
          unsigned TQCKPS0:1;
          unsigned TQCKPS1:1;
          unsigned :3;
          unsigned QEIM0:1;
          unsigned QEIM1:1;
          unsigned QEIM2:1;
        };
      };
} typeQEI1CONBITS;
sfr volatile typeQEI1CONBITS QEI1CONbits absolute 0x1E0;

// backward compatibility for DFLT1CONBITS
    typedef struct tagDFLT1CONBITS {
      union {
        struct {
          unsigned :4;
          unsigned QECK:3;
          unsigned QEOUT:1;
          unsigned CEID:1;
          unsigned IMV:2;
        };
        struct {
          unsigned :4;
          unsigned QECK0:1;
          unsigned QECK1:1;
          unsigned QECK2:1;
          unsigned :2;
          unsigned IMV0:1;
          unsigned IMV1:1;
        };
      };
} typeDFLT1CONBITS;
sfr volatile typeDFLT1CONBITS DFLT1CONbits absolute 0x1E2;

// backward compatibility for QEI2CONBITS
    typedef struct tagQEI2CONBITS {
      union {
        struct {
          unsigned UPDN_SRC:1;
          unsigned TQCS:1;
          unsigned POSRES:1;
          unsigned TQCKPS:2;
          unsigned TQGATE:1;
          unsigned PCDOUT:1;
          unsigned SWPAB:1;
          unsigned QEIM:3;
          unsigned UPDN:1;
          unsigned INDX:1;
          unsigned QEISIDL:1;
          unsigned :1;
          unsigned CNTERR:1;
        };
        struct {
          unsigned :3;
          unsigned TQCKPS0:1;
          unsigned TQCKPS1:1;
          unsigned :3;
          unsigned QEIM0:1;
          unsigned QEIM1:1;
          unsigned QEIM2:1;
        };
      };
} typeQEI2CONBITS;
sfr volatile typeQEI2CONBITS QEI2CONbits absolute 0x1F0;

// backward compatibility for DFLT2CONBITS
    typedef struct tagDFLT2CONBITS {
      union {
        struct {
          unsigned :4;
          unsigned QECK:3;
          unsigned QEOUT:1;
          unsigned CEID:1;
          unsigned IMV:2;
        };
        struct {
          unsigned :4;
          unsigned QECK0:1;
          unsigned QECK1:1;
          unsigned QECK2:1;
          unsigned :2;
          unsigned IMV0:1;
          unsigned IMV1:1;
        };
      };
} typeDFLT2CONBITS;
sfr volatile typeDFLT2CONBITS DFLT2CONbits absolute 0x1F2;

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

// backward compatibility for I2CCONBITS
    typedef struct tagI2CCONBITS {
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
} typeI2CCONBITS;
sfr volatile typeI2CCONBITS I2CCONbits absolute 0x206;

// backward compatibility for I2C1STATBITS
    typedef struct tagI2C1STATBITS {
      unsigned TBF:1;
      unsigned RBF:1;
      unsigned R_W:1;
      unsigned S:1;
      unsigned P:1;
      unsigned D_A:1;
      unsigned I2COV:1;
      unsigned IWCOL:1;
      unsigned ADD10:1;
      unsigned GCSTAT:1;
      unsigned BCL:1;
      unsigned :3;
      unsigned TRSTAT:1;
      unsigned ACKSTAT:1;
} typeI2C1STATBITS;
sfr volatile typeI2C1STATBITS I2C1STATbits absolute 0x208;

// backward compatibility for I2CSTATBITS
    typedef struct tagI2CSTATBITS {
      unsigned TBF:1;
      unsigned RBF:1;
      unsigned R_W:1;
      unsigned S:1;
      unsigned P:1;
      unsigned D_A:1;
      unsigned I2COV:1;
      unsigned IWCOL:1;
      unsigned ADD10:1;
      unsigned GCSTAT:1;
      unsigned BCL:1;
      unsigned :3;
      unsigned TRSTAT:1;
      unsigned ACKSTAT:1;
} typeI2CSTATBITS;
sfr volatile typeI2CSTATBITS I2CSTATbits absolute 0x208;

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
      unsigned TBF:1;
      unsigned RBF:1;
      unsigned R_W:1;
      unsigned S:1;
      unsigned P:1;
      unsigned D_A:1;
      unsigned I2COV:1;
      unsigned IWCOL:1;
      unsigned ADD10:1;
      unsigned GCSTAT:1;
      unsigned BCL:1;
      unsigned :3;
      unsigned TRSTAT:1;
      unsigned ACKSTAT:1;
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
      union {
        struct {
          unsigned U1TXREG:9;
        };
        struct {
          unsigned UTXREG0:1;
          unsigned UTXREG1:1;
          unsigned UTXREG2:1;
          unsigned UTXREG3:1;
          unsigned UTXREG4:1;
          unsigned UTXREG5:1;
          unsigned UTXREG6:1;
          unsigned UTXREG7:1;
          unsigned UTXREG8:1;
        };
      };
} typeU1TXREGBITS;
sfr volatile typeU1TXREGBITS U1TXREGbits absolute 0x224;

// backward compatibility for U1RXREGBITS
    typedef struct tagU1RXREGBITS {
      union {
        struct {
          unsigned U1RXREG:9;
        };
        struct {
          unsigned URXREG0:1;
          unsigned URXREG1:1;
          unsigned URXREG2:1;
          unsigned URXREG3:1;
          unsigned URXREG4:1;
          unsigned URXREG5:1;
          unsigned URXREG6:1;
          unsigned URXREG7:1;
          unsigned URXREG8:1;
        };
      };
} typeU1RXREGBITS;
sfr volatile typeU1RXREGBITS U1RXREGbits absolute 0x226;

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
      union {
        struct {
          unsigned U2TXREG:9;
        };
        struct {
          unsigned UTXREG0:1;
          unsigned UTXREG1:1;
          unsigned UTXREG2:1;
          unsigned UTXREG3:1;
          unsigned UTXREG4:1;
          unsigned UTXREG5:1;
          unsigned UTXREG6:1;
          unsigned UTXREG7:1;
          unsigned UTXREG8:1;
        };
      };
} typeU2TXREGBITS;
sfr volatile typeU2TXREGBITS U2TXREGbits absolute 0x234;

// backward compatibility for U2RXREGBITS
    typedef struct tagU2RXREGBITS {
      union {
        struct {
          unsigned U2RXREG:9;
        };
        struct {
          unsigned URXREG0:1;
          unsigned URXREG1:1;
          unsigned URXREG2:1;
          unsigned URXREG3:1;
          unsigned URXREG4:1;
          unsigned URXREG5:1;
          unsigned URXREG6:1;
          unsigned URXREG7:1;
          unsigned URXREG8:1;
        };
      };
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
      unsigned SPIRBF:1;
      unsigned SPITBF:1;
      unsigned :4;
      unsigned SPIROV:1;
      unsigned :6;
      unsigned SPISIDL:1;
      unsigned :1;
      unsigned SPIEN:1;
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
      unsigned :1;
      unsigned FRMDLY:1;
      unsigned :11;
      unsigned FRMPOL:1;
      unsigned SPIFSD:1;
      unsigned FRMEN:1;
} typeSPI1CON2BITS;
sfr volatile typeSPI1CON2BITS SPI1CON2bits absolute 0x244;

// backward compatibility for SPI2STATBITS
    typedef struct tagSPI2STATBITS {
      unsigned SPIRBF:1;
      unsigned SPITBF:1;
      unsigned :4;
      unsigned SPIROV:1;
      unsigned :6;
      unsigned SPISIDL:1;
      unsigned :1;
      unsigned SPIEN:1;
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
      unsigned :1;
      unsigned FRMDLY:1;
      unsigned :11;
      unsigned FRMPOL:1;
      unsigned SPIFSD:1;
      unsigned FRMEN:1;
} typeSPI2CON2BITS;
sfr volatile typeSPI2CON2BITS SPI2CON2bits absolute 0x264;

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

// backward compatibility for TRISCBITS
    typedef struct tagTRISCBITS {
      unsigned :12;
      unsigned TRISC12:1;
      unsigned TRISC13:1;
      unsigned TRISC14:1;
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
      unsigned ODCE0:1;
      unsigned ODCE1:1;
      unsigned ODCE2:1;
      unsigned ODCE3:1;
      unsigned ODCE4:1;
      unsigned ODCE5:1;
      unsigned ODCE6:1;
      unsigned ODCE7:1;
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
      unsigned :1;
      unsigned ODCF1:1;
      unsigned ODCF2:1;
      unsigned ODCF3:1;
      unsigned :2;
      unsigned ODCF6:1;
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
      unsigned ODCG2:1;
      unsigned ODCG3:1;
      unsigned :2;
      unsigned ODCG6:1;
      unsigned ODCG7:1;
      unsigned ODCG8:1;
      unsigned ODCG9:1;
} typeODCGBITS;
sfr volatile typeODCGBITS ODCGbits absolute 0x2F6;

// backward compatibility for ADCONBITS
    typedef struct tagADCONBITS {
      union {
        struct {
          unsigned ADCS:3;
          unsigned :1;
          unsigned ASYNCSAMP:1;
          unsigned SEQSAMP:1;
          unsigned ORDER:1;
          unsigned EIE:1;
          unsigned FORM:1;
          unsigned :1;
          unsigned GSWTRG:1;
          unsigned :1;
          unsigned SLOWCLK:1;
          unsigned ADSIDL:1;
          unsigned :1;
          unsigned ADON:1;
        };
        struct {
          unsigned ADCS0:1;
          unsigned ADCS1:1;
          unsigned ADCS2:1;
        };
      };
} typeADCONBITS;
sfr volatile typeADCONBITS ADCONbits absolute 0x300;

// backward compatibility for ADPCFGBITS
    typedef struct tagADPCFGBITS {
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
} typeADPCFGBITS;
sfr volatile typeADPCFGBITS ADPCFGbits absolute 0x302;

// backward compatibility for ADSTATBITS
    typedef struct tagADSTATBITS {
      unsigned P0RDY:1;
      unsigned P1RDY:1;
      unsigned P2RDY:1;
      unsigned P3RDY:1;
      unsigned P4RDY:1;
      unsigned P5RDY:1;
      unsigned P6RDY:1;
      unsigned P7RDY:1;
      unsigned :4;
      unsigned P12RDY:1;
} typeADSTATBITS;
sfr volatile typeADSTATBITS ADSTATbits absolute 0x306;

// backward compatibility for ADCPC0BITS
    typedef struct tagADCPC0BITS {
      union {
        struct {
          unsigned TRGSRC0:5;
          unsigned SWTRG0:1;
          unsigned PEND0:1;
          unsigned IRQEN0:1;
          unsigned TRGSRC1:5;
          unsigned SWTRG1:1;
          unsigned PEND1:1;
          unsigned IRQEN1:1;
        };
        struct {
          unsigned TRGSRC00:1;
          unsigned TRGSRC01:1;
          unsigned TRGSRC02:1;
          unsigned TRGSRC03:1;
          unsigned TRGSRC04:1;
          unsigned :3;
          unsigned TRGSRC10:1;
          unsigned TRGSRC11:1;
          unsigned TRGSRC12:1;
          unsigned TRGSRC13:1;
          unsigned TRGSRC14:1;
        };
      };
} typeADCPC0BITS;
sfr volatile typeADCPC0BITS ADCPC0bits absolute 0x30A;

// backward compatibility for ADCPC1BITS
    typedef struct tagADCPC1BITS {
      union {
        struct {
          unsigned TRGSRC2:5;
          unsigned SWTRG2:1;
          unsigned PEND2:1;
          unsigned IRQEN2:1;
          unsigned TRGSRC3:5;
          unsigned SWTRG3:1;
          unsigned PEND3:1;
          unsigned IRQEN3:1;
        };
        struct {
          unsigned TRGSRC20:1;
          unsigned TRGSRC21:1;
          unsigned TRGSRC22:1;
          unsigned TRGSRC23:1;
          unsigned TRGSRC24:1;
          unsigned :3;
          unsigned TRGSRC30:1;
          unsigned TRGSRC31:1;
          unsigned TRGSRC32:1;
          unsigned TRGSRC33:1;
          unsigned TRGSRC34:1;
        };
      };
} typeADCPC1BITS;
sfr volatile typeADCPC1BITS ADCPC1bits absolute 0x30C;

// backward compatibility for ADCPC2BITS
    typedef struct tagADCPC2BITS {
      union {
        struct {
          unsigned TRGSRC4:5;
          unsigned SWTRG4:1;
          unsigned PEND4:1;
          unsigned IRQEN4:1;
          unsigned TRGSRC5:5;
          unsigned SWTRG5:1;
          unsigned PEND5:1;
          unsigned IRQEN5:1;
        };
        struct {
          unsigned TRGSRC40:1;
          unsigned TRGSRC41:1;
          unsigned TRGSRC42:1;
          unsigned TRGSRC43:1;
          unsigned TRGSRC44:1;
          unsigned :3;
          unsigned TRGSRC50:1;
          unsigned TRGSRC51:1;
          unsigned TRGSRC52:1;
          unsigned TRGSRC53:1;
          unsigned TRGSRC54:1;
        };
      };
} typeADCPC2BITS;
sfr volatile typeADCPC2BITS ADCPC2bits absolute 0x30E;

// backward compatibility for ADCPC3BITS
    typedef struct tagADCPC3BITS {
      union {
        struct {
          unsigned TRGSRC6:5;
          unsigned SWTRG6:1;
          unsigned PEND6:1;
          unsigned IRQEN6:1;
          unsigned TRGSRC7:5;
          unsigned SWTRG7:1;
          unsigned PEND7:1;
          unsigned IRQEN7:1;
        };
        struct {
          unsigned TRGSRC60:1;
          unsigned TRGSRC61:1;
          unsigned TRGSRC62:1;
          unsigned TRGSRC63:1;
          unsigned TRGSRC64:1;
          unsigned :3;
          unsigned TRGSRC70:1;
          unsigned TRGSRC71:1;
          unsigned TRGSRC72:1;
          unsigned TRGSRC73:1;
          unsigned TRGSRC74:1;
        };
      };
} typeADCPC3BITS;
sfr volatile typeADCPC3BITS ADCPC3bits absolute 0x310;

// backward compatibility for ADCPC6BITS
    typedef struct tagADCPC6BITS {
      union {
        struct {
          unsigned TRGSRC12:5;
          unsigned SWTRG12:1;
          unsigned PEND12:1;
          unsigned IRQEN12:1;
        };
        struct {
          unsigned TRGSRC120:1;
          unsigned TRGSRC121:1;
          unsigned TRGSRC122:1;
          unsigned TRGSRC123:1;
          unsigned TRGSRC124:1;
        };
      };
} typeADCPC6BITS;
sfr volatile typeADCPC6BITS ADCPC6bits absolute 0x316;

// backward compatibility for DMA0CONBITS
    typedef struct tagDMA0CONBITS {
      union {
        struct {
          unsigned MODE:2;
          unsigned :2;
          unsigned AMODE:2;
          unsigned :5;
          unsigned NULLW:1;
          unsigned HALF:1;
          unsigned DIR:1;
          unsigned SIZE:1;
          unsigned CHEN:1;
        };
        struct {
          unsigned MODE0:1;
          unsigned MODE1:1;
          unsigned :2;
          unsigned AMODE0:1;
          unsigned AMODE1:1;
        };
      };
} typeDMA0CONBITS;
sfr volatile typeDMA0CONBITS DMA0CONbits absolute 0x380;

// backward compatibility for DMA0REQBITS
    typedef struct tagDMA0REQBITS {
      union {
        struct {
          unsigned IRQSEL:7;
          unsigned :8;
          unsigned FORCE:1;
        };
        struct {
          unsigned IRQSEL0:1;
          unsigned IRQSEL1:1;
          unsigned IRQSEL2:1;
          unsigned IRQSEL3:1;
          unsigned IRQSEL4:1;
          unsigned IRQSEL5:1;
          unsigned IRQSEL6:1;
        };
      };
} typeDMA0REQBITS;
sfr volatile typeDMA0REQBITS DMA0REQbits absolute 0x382;

// backward compatibility for DMA1CONBITS
    typedef struct tagDMA1CONBITS {
      union {
        struct {
          unsigned MODE:2;
          unsigned :2;
          unsigned AMODE:2;
          unsigned :5;
          unsigned NULLW:1;
          unsigned HALF:1;
          unsigned DIR:1;
          unsigned SIZE:1;
          unsigned CHEN:1;
        };
        struct {
          unsigned MODE0:1;
          unsigned MODE1:1;
          unsigned :2;
          unsigned AMODE0:1;
          unsigned AMODE1:1;
        };
      };
} typeDMA1CONBITS;
sfr volatile typeDMA1CONBITS DMA1CONbits absolute 0x38C;

// backward compatibility for DMA1REQBITS
    typedef struct tagDMA1REQBITS {
      union {
        struct {
          unsigned IRQSEL:7;
          unsigned :8;
          unsigned FORCE:1;
        };
        struct {
          unsigned IRQSEL0:1;
          unsigned IRQSEL1:1;
          unsigned IRQSEL2:1;
          unsigned IRQSEL3:1;
          unsigned IRQSEL4:1;
          unsigned IRQSEL5:1;
          unsigned IRQSEL6:1;
        };
      };
} typeDMA1REQBITS;
sfr volatile typeDMA1REQBITS DMA1REQbits absolute 0x38E;

// backward compatibility for DMA2CONBITS
    typedef struct tagDMA2CONBITS {
      union {
        struct {
          unsigned MODE:2;
          unsigned :2;
          unsigned AMODE:2;
          unsigned :5;
          unsigned NULLW:1;
          unsigned HALF:1;
          unsigned DIR:1;
          unsigned SIZE:1;
          unsigned CHEN:1;
        };
        struct {
          unsigned MODE0:1;
          unsigned MODE1:1;
          unsigned :2;
          unsigned AMODE0:1;
          unsigned AMODE1:1;
        };
      };
} typeDMA2CONBITS;
sfr volatile typeDMA2CONBITS DMA2CONbits absolute 0x398;

// backward compatibility for DMA2REQBITS
    typedef struct tagDMA2REQBITS {
      union {
        struct {
          unsigned IRQSEL:7;
          unsigned :8;
          unsigned FORCE:1;
        };
        struct {
          unsigned IRQSEL0:1;
          unsigned IRQSEL1:1;
          unsigned IRQSEL2:1;
          unsigned IRQSEL3:1;
          unsigned IRQSEL4:1;
          unsigned IRQSEL5:1;
          unsigned IRQSEL6:1;
        };
      };
} typeDMA2REQBITS;
sfr volatile typeDMA2REQBITS DMA2REQbits absolute 0x39A;

// backward compatibility for DMA3CONBITS
    typedef struct tagDMA3CONBITS {
      union {
        struct {
          unsigned MODE:2;
          unsigned :2;
          unsigned AMODE:2;
          unsigned :5;
          unsigned NULLW:1;
          unsigned HALF:1;
          unsigned DIR:1;
          unsigned SIZE:1;
          unsigned CHEN:1;
        };
        struct {
          unsigned MODE0:1;
          unsigned MODE1:1;
          unsigned :2;
          unsigned AMODE0:1;
          unsigned AMODE1:1;
        };
      };
} typeDMA3CONBITS;
sfr volatile typeDMA3CONBITS DMA3CONbits absolute 0x3A4;

// backward compatibility for DMA3REQBITS
    typedef struct tagDMA3REQBITS {
      union {
        struct {
          unsigned IRQSEL:7;
          unsigned :8;
          unsigned FORCE:1;
        };
        struct {
          unsigned IRQSEL0:1;
          unsigned IRQSEL1:1;
          unsigned IRQSEL2:1;
          unsigned IRQSEL3:1;
          unsigned IRQSEL4:1;
          unsigned IRQSEL5:1;
          unsigned IRQSEL6:1;
        };
      };
} typeDMA3REQBITS;
sfr volatile typeDMA3REQBITS DMA3REQbits absolute 0x3A6;

// backward compatibility for DMACS0BITS
    typedef struct tagDMACS0BITS {
      unsigned XWCOL0:1;
      unsigned XWCOL1:1;
      unsigned XWCOL2:1;
      unsigned XWCOL3:1;
      unsigned :4;
      unsigned PWCOL0:1;
      unsigned PWCOL1:1;
      unsigned PWCOL2:1;
      unsigned PWCOL3:1;
} typeDMACS0BITS;
sfr volatile typeDMACS0BITS DMACS0bits absolute 0x3E0;

// backward compatibility for DMACS1BITS
    typedef struct tagDMACS1BITS {
      union {
        struct {
          unsigned PPST0:1;
          unsigned PPST1:1;
          unsigned PPST2:1;
          unsigned PPST3:1;
          unsigned :4;
          unsigned LSTCH:4;
        };
        struct {
          unsigned :8;
          unsigned LSTCH0:1;
          unsigned LSTCH1:1;
          unsigned LSTCH2:1;
          unsigned LSTCH3:1;
        };
      };
} typeDMACS1BITS;
sfr volatile typeDMACS1BITS DMACS1bits absolute 0x3E2;

// backward compatibility for PTCONBITS
    typedef struct tagPTCONBITS {
      union {
        struct {
          unsigned SEVTPS:4;
          unsigned SYNCSRC:3;
          unsigned SYNCEN:1;
          unsigned SYNCOEN:1;
          unsigned SYNCPOL:1;
          unsigned EIPU:1;
          unsigned SEIEN:1;
          unsigned SESTAT:1;
          unsigned PTSIDL:1;
          unsigned :1;
          unsigned PTEN:1;
        };
        struct {
          unsigned SEVTPS0:1;
          unsigned SEVTPS1:1;
          unsigned SEVTPS2:1;
          unsigned SEVTPS3:1;
          unsigned SYNCSRC0:1;
          unsigned SYNCSRC1:1;
          unsigned SYNCSRC2:1;
        };
      };
} typePTCONBITS;
sfr volatile typePTCONBITS PTCONbits absolute 0x400;

// backward compatibility for PTCON2BITS
    typedef struct tagPTCON2BITS {
      union {
        struct {
          unsigned PCLKDIV:3;
        };
        struct {
          unsigned PCLKDIV0:1;
          unsigned PCLKDIV1:1;
          unsigned PCLKDIV2:1;
        };
      };
} typePTCON2BITS;
sfr volatile typePTCON2BITS PTCON2bits absolute 0x402;

// backward compatibility for STCONBITS
    typedef struct tagSTCONBITS {
      union {
        struct {
          unsigned SEVTPS:4;
          unsigned SYNCSRC:3;
          unsigned SYNCEN:1;
          unsigned SYNCOEN:1;
          unsigned SYNCPOL:1;
          unsigned EIPU:1;
          unsigned SEIEN:1;
          unsigned SESTAT:1;
        };
        struct {
          unsigned SEVTPS0:1;
          unsigned SEVTPS1:1;
          unsigned SEVTPS2:1;
          unsigned SEVTPS3:1;
          unsigned SYNCSRC0:1;
          unsigned SYNCSRC1:1;
          unsigned SYNCSRC2:1;
        };
      };
} typeSTCONBITS;
sfr volatile typeSTCONBITS STCONbits absolute 0x40E;

// backward compatibility for STCON2BITS
    typedef struct tagSTCON2BITS {
      union {
        struct {
          unsigned PCLKDIV:3;
        };
        struct {
          unsigned PCLKDIV0:1;
          unsigned PCLKDIV1:1;
          unsigned PCLKDIV2:1;
        };
      };
} typeSTCON2BITS;
sfr volatile typeSTCON2BITS STCON2bits absolute 0x410;

// backward compatibility for CHOPBITS
    typedef struct tagCHOPBITS {
      union {
        struct {
          unsigned :3;
          unsigned CHOPCLK:7;
          unsigned :5;
          unsigned CHPCLKEN:1;
        };
        struct {
          unsigned :3;
          unsigned CHOPCLK0:1;
          unsigned CHOPCLK1:1;
          unsigned CHOPCLK2:1;
          unsigned CHOPCLK3:1;
          unsigned CHOPCLK4:1;
          unsigned CHOPCLK5:1;
          unsigned CHOPCLK6:1;
        };
      };
} typeCHOPBITS;
sfr volatile typeCHOPBITS CHOPbits absolute 0x41A;

// backward compatibility for PWMCON1BITS
    typedef struct tagPWMCON1BITS {
      union {
        struct {
          unsigned IUE:1;
          unsigned XPRES:1;
          unsigned CAM:1;
          unsigned MTBS:1;
          unsigned :1;
          unsigned DTCP:1;
          unsigned DTC:2;
          unsigned MDCS:1;
          unsigned ITB:1;
          unsigned TRGIEN:1;
          unsigned CLIEN:1;
          unsigned FLTIEN:1;
          unsigned TRGSTAT:1;
          unsigned CLSTAT:1;
          unsigned FLTSTAT:1;
        };
        struct {
          unsigned :6;
          unsigned DTC0:1;
          unsigned DTC1:1;
        };
      };
} typePWMCON1BITS;
sfr volatile typePWMCON1BITS PWMCON1bits absolute 0x420;

// backward compatibility for IOCON1BITS
    typedef struct tagIOCON1BITS {
      union {
        struct {
          unsigned OSYNC:1;
          unsigned SWAP:1;
          unsigned CLDAT:2;
          unsigned FLTDAT:2;
          unsigned OVRDAT:2;
          unsigned OVRENL:1;
          unsigned OVRENH:1;
          unsigned PMOD:2;
          unsigned POLL:1;
          unsigned POLH:1;
          unsigned PENL:1;
          unsigned PENH:1;
        };
        struct {
          unsigned :2;
          unsigned CLDAT0:1;
          unsigned CLDAT1:1;
          unsigned FLTDAT0:1;
          unsigned FLTDAT1:1;
          unsigned OVRDAT0:1;
          unsigned OVRDAT1:1;
          unsigned :2;
          unsigned PMOD0:1;
          unsigned PMOD1:1;
        };
      };
} typeIOCON1BITS;
sfr volatile typeIOCON1BITS IOCON1bits absolute 0x422;

// backward compatibility for FCLCON1BITS
    typedef struct tagFCLCON1BITS {
      union {
        struct {
          unsigned FLTMOD:2;
          unsigned FLTPOL:1;
          unsigned FLTSRC:5;
          unsigned CLMOD:1;
          unsigned CLPOL:1;
          unsigned CLSRC:5;
          unsigned IFLTMOD:1;
        };
        struct {
          unsigned FLTMOD0:1;
          unsigned FLTMOD1:1;
          unsigned :1;
          unsigned FLTSRC0:1;
          unsigned FLTSRC1:1;
          unsigned FLTSRC2:1;
          unsigned FLTSRC3:1;
          unsigned FLTSRC4:1;
          unsigned :2;
          unsigned CLSRC0:1;
          unsigned CLSRC1:1;
          unsigned CLSRC2:1;
          unsigned CLSRC3:1;
          unsigned CLSRC4:1;
        };
      };
} typeFCLCON1BITS;
sfr volatile typeFCLCON1BITS FCLCON1bits absolute 0x424;

// backward compatibility for TRIG1BITS
    typedef struct tagTRIG1BITS {
      union {
        struct {
          unsigned :3;
          unsigned TRGCMP:13;
        };
        struct {
          unsigned :3;
          unsigned TRGCMP0:1;
          unsigned TRGCMP1:1;
          unsigned TRGCMP2:1;
          unsigned TRGCMP3:1;
          unsigned TRGCMP4:1;
          unsigned TRGCMP5:1;
          unsigned TRGCMP6:1;
          unsigned TRGCMP7:1;
          unsigned TRGCMP8:1;
          unsigned TRGCMP9:1;
          unsigned TRGCMP10:1;
          unsigned TRGCMP11:1;
          unsigned TRGCMP12:1;
        };
      };
} typeTRIG1BITS;
sfr volatile typeTRIG1BITS TRIG1bits absolute 0x432;

// backward compatibility for TRGCON1BITS
    typedef struct tagTRGCON1BITS {
      union {
        struct {
          unsigned TRGSTRT:6;
          unsigned :1;
          unsigned DTM:1;
          unsigned :4;
          unsigned TRGDIV:4;
        };
        struct {
          unsigned TRGSTRT0:1;
          unsigned TRGSTRT1:1;
          unsigned TRGSTRT2:1;
          unsigned TRGSTRT3:1;
          unsigned TRGSTRT4:1;
          unsigned TRGSTRT5:1;
          unsigned :6;
          unsigned TRGDIV0:1;
          unsigned TRGDIV1:1;
          unsigned TRGDIV2:1;
          unsigned TRGDIV3:1;
        };
      };
} typeTRGCON1BITS;
sfr volatile typeTRGCON1BITS TRGCON1bits absolute 0x434;

// backward compatibility for STRIG1BITS
    typedef struct tagSTRIG1BITS {
      union {
        struct {
          unsigned :3;
          unsigned STRGCMP:13;
        };
        struct {
          unsigned :3;
          unsigned STRGCMP0:1;
          unsigned STRGCMP1:1;
          unsigned STRGCMP2:1;
          unsigned STRGCMP3:1;
          unsigned STRGCMP4:1;
          unsigned STRGCMP5:1;
          unsigned STRGCMP6:1;
          unsigned STRGCMP7:1;
          unsigned STRGCMP8:1;
          unsigned STRGCMP9:1;
          unsigned STRGCMP10:1;
          unsigned STRGCMP11:1;
          unsigned STRGCMP12:1;
        };
      };
} typeSTRIG1BITS;
sfr volatile typeSTRIG1BITS STRIG1bits absolute 0x436;

// backward compatibility for PWMCAP1BITS
    typedef struct tagPWMCAP1BITS {
      unsigned :3;
      unsigned PWMCAP10:1;
      unsigned PWMCAP11:1;
      unsigned PWMCAP12:1;
      unsigned PWMCAP13:1;
      unsigned PWMCAP14:1;
      unsigned PWMCAP15:1;
      unsigned PWMCAP16:1;
      unsigned PWMCAP17:1;
      unsigned PWMCAP18:1;
      unsigned PWMCAP19:1;
      unsigned PWMCAP110:1;
      unsigned PWMCAP111:1;
      unsigned PWMCAP112:1;
} typePWMCAP1BITS;
sfr volatile typePWMCAP1BITS PWMCAP1bits absolute 0x438;

// backward compatibility for LEBCON1BITS
    typedef struct tagLEBCON1BITS {
      unsigned BPLL:1;
      unsigned BPLH:1;
      unsigned BPHL:1;
      unsigned BPHH:1;
      unsigned BCL:1;
      unsigned BCH:1;
      unsigned :4;
      unsigned CLLEBEN:1;
      unsigned FLTLEBEN:1;
      unsigned PLF:1;
      unsigned PLR:1;
      unsigned PHF:1;
      unsigned PHR:1;
} typeLEBCON1BITS;
sfr volatile typeLEBCON1BITS LEBCON1bits absolute 0x43A;

// backward compatibility for LEBDLY1BITS
    typedef struct tagLEBDLY1BITS {
      union {
        struct {
          unsigned :3;
          unsigned LEB:9;
        };
        struct {
          unsigned :3;
          unsigned LEB0:1;
          unsigned LEB1:1;
          unsigned LEB2:1;
          unsigned LEB3:1;
          unsigned LEB4:1;
          unsigned LEB5:1;
          unsigned LEB6:1;
          unsigned LEB7:1;
          unsigned LEB8:1;
        };
      };
} typeLEBDLY1BITS;
sfr volatile typeLEBDLY1BITS LEBDLY1bits absolute 0x43C;

// backward compatibility for AUXCON1BITS
    typedef struct tagAUXCON1BITS {
      union {
        struct {
          unsigned CHOPLEN:1;
          unsigned CHOPHEN:1;
          unsigned CHOPSEL:4;
          unsigned :2;
          unsigned BLANKSEL:4;
          unsigned :2;
          unsigned HRDDIS:1;
          unsigned HRPDIS:1;
        };
        struct {
          unsigned :2;
          unsigned CHOPSEL0:1;
          unsigned CHOPSEL1:1;
          unsigned CHOPSEL2:1;
          unsigned CHOPSEL3:1;
          unsigned :2;
          unsigned BLANKSEL0:1;
          unsigned BLANKSEL1:1;
          unsigned BLANKSEL2:1;
          unsigned BLANKSEL3:1;
        };
      };
} typeAUXCON1BITS;
sfr volatile typeAUXCON1BITS AUXCON1bits absolute 0x43E;

// backward compatibility for PWMCON2BITS
    typedef struct tagPWMCON2BITS {
      union {
        struct {
          unsigned IUE:1;
          unsigned XPRES:1;
          unsigned CAM:1;
          unsigned MTBS:1;
          unsigned :1;
          unsigned DTCP:1;
          unsigned DTC:2;
          unsigned MDCS:1;
          unsigned ITB:1;
          unsigned TRGIEN:1;
          unsigned CLIEN:1;
          unsigned FLTIEN:1;
          unsigned TRGSTAT:1;
          unsigned CLSTAT:1;
          unsigned FLTSTAT:1;
        };
        struct {
          unsigned :6;
          unsigned DTC0:1;
          unsigned DTC1:1;
        };
      };
} typePWMCON2BITS;
sfr volatile typePWMCON2BITS PWMCON2bits absolute 0x440;

// backward compatibility for IOCON2BITS
    typedef struct tagIOCON2BITS {
      union {
        struct {
          unsigned OSYNC:1;
          unsigned SWAP:1;
          unsigned CLDAT:2;
          unsigned FLTDAT:2;
          unsigned OVRDAT:2;
          unsigned OVRENL:1;
          unsigned OVRENH:1;
          unsigned PMOD:2;
          unsigned POLL:1;
          unsigned POLH:1;
          unsigned PENL:1;
          unsigned PENH:1;
        };
        struct {
          unsigned :2;
          unsigned CLDAT0:1;
          unsigned CLDAT1:1;
          unsigned FLTDAT0:1;
          unsigned FLTDAT1:1;
          unsigned OVRDAT0:1;
          unsigned OVRDAT1:1;
          unsigned :2;
          unsigned PMOD0:1;
          unsigned PMOD1:1;
        };
      };
} typeIOCON2BITS;
sfr volatile typeIOCON2BITS IOCON2bits absolute 0x442;

// backward compatibility for FCLCON2BITS
    typedef struct tagFCLCON2BITS {
      union {
        struct {
          unsigned FLTMOD:2;
          unsigned FLTPOL:1;
          unsigned FLTSRC:5;
          unsigned CLMOD:1;
          unsigned CLPOL:1;
          unsigned CLSRC:5;
          unsigned IFLTMOD:1;
        };
        struct {
          unsigned FLTMOD0:1;
          unsigned FLTMOD1:1;
          unsigned :1;
          unsigned FLTSRC0:1;
          unsigned FLTSRC1:1;
          unsigned FLTSRC2:1;
          unsigned FLTSRC3:1;
          unsigned FLTSRC4:1;
          unsigned :2;
          unsigned CLSRC0:1;
          unsigned CLSRC1:1;
          unsigned CLSRC2:1;
          unsigned CLSRC3:1;
          unsigned CLSRC4:1;
        };
      };
} typeFCLCON2BITS;
sfr volatile typeFCLCON2BITS FCLCON2bits absolute 0x444;

// backward compatibility for TRIG2BITS
    typedef struct tagTRIG2BITS {
      union {
        struct {
          unsigned :3;
          unsigned TRGCMP:13;
        };
        struct {
          unsigned :3;
          unsigned TRGCMP0:1;
          unsigned TRGCMP1:1;
          unsigned TRGCMP2:1;
          unsigned TRGCMP3:1;
          unsigned TRGCMP4:1;
          unsigned TRGCMP5:1;
          unsigned TRGCMP6:1;
          unsigned TRGCMP7:1;
          unsigned TRGCMP8:1;
          unsigned TRGCMP9:1;
          unsigned TRGCMP10:1;
          unsigned TRGCMP11:1;
          unsigned TRGCMP12:1;
        };
      };
} typeTRIG2BITS;
sfr volatile typeTRIG2BITS TRIG2bits absolute 0x452;

// backward compatibility for TRGCON2BITS
    typedef struct tagTRGCON2BITS {
      union {
        struct {
          unsigned TRGSTRT:6;
          unsigned :1;
          unsigned DTM:1;
          unsigned :4;
          unsigned TRGDIV:4;
        };
        struct {
          unsigned TRGSTRT0:1;
          unsigned TRGSTRT1:1;
          unsigned TRGSTRT2:1;
          unsigned TRGSTRT3:1;
          unsigned TRGSTRT4:1;
          unsigned TRGSTRT5:1;
          unsigned :6;
          unsigned TRGDIV0:1;
          unsigned TRGDIV1:1;
          unsigned TRGDIV2:1;
          unsigned TRGDIV3:1;
        };
      };
} typeTRGCON2BITS;
sfr volatile typeTRGCON2BITS TRGCON2bits absolute 0x454;

// backward compatibility for STRIG2BITS
    typedef struct tagSTRIG2BITS {
      union {
        struct {
          unsigned :3;
          unsigned STRGCMP:13;
        };
        struct {
          unsigned :3;
          unsigned STRGCMP0:1;
          unsigned STRGCMP1:1;
          unsigned STRGCMP2:1;
          unsigned STRGCMP3:1;
          unsigned STRGCMP4:1;
          unsigned STRGCMP5:1;
          unsigned STRGCMP6:1;
          unsigned STRGCMP7:1;
          unsigned STRGCMP8:1;
          unsigned STRGCMP9:1;
          unsigned STRGCMP10:1;
          unsigned STRGCMP11:1;
          unsigned STRGCMP12:1;
        };
      };
} typeSTRIG2BITS;
sfr volatile typeSTRIG2BITS STRIG2bits absolute 0x456;

// backward compatibility for LEBCON2BITS
    typedef struct tagLEBCON2BITS {
      unsigned BPLL:1;
      unsigned BPLH:1;
      unsigned BPHL:1;
      unsigned BPHH:1;
      unsigned BCL:1;
      unsigned BCH:1;
      unsigned :4;
      unsigned CLLEBEN:1;
      unsigned FLTLEBEN:1;
      unsigned PLF:1;
      unsigned PLR:1;
      unsigned PHF:1;
      unsigned PHR:1;
} typeLEBCON2BITS;
sfr volatile typeLEBCON2BITS LEBCON2bits absolute 0x45A;

// backward compatibility for LEBDLY2BITS
    typedef struct tagLEBDLY2BITS {
      union {
        struct {
          unsigned :3;
          unsigned LEB:9;
        };
        struct {
          unsigned :3;
          unsigned LEB0:1;
          unsigned LEB1:1;
          unsigned LEB2:1;
          unsigned LEB3:1;
          unsigned LEB4:1;
          unsigned LEB5:1;
          unsigned LEB6:1;
          unsigned LEB7:1;
          unsigned LEB8:1;
        };
      };
} typeLEBDLY2BITS;
sfr volatile typeLEBDLY2BITS LEBDLY2bits absolute 0x45C;

// backward compatibility for AUXCON2BITS
    typedef struct tagAUXCON2BITS {
      union {
        struct {
          unsigned CHOPLEN:1;
          unsigned CHOPHEN:1;
          unsigned CHOPSEL:4;
          unsigned :2;
          unsigned BLANKSEL:4;
          unsigned :2;
          unsigned HRDDIS:1;
          unsigned HRPDIS:1;
        };
        struct {
          unsigned :2;
          unsigned CHOPSEL0:1;
          unsigned CHOPSEL1:1;
          unsigned CHOPSEL2:1;
          unsigned CHOPSEL3:1;
          unsigned :2;
          unsigned BLANKSEL0:1;
          unsigned BLANKSEL1:1;
          unsigned BLANKSEL2:1;
          unsigned BLANKSEL3:1;
        };
      };
} typeAUXCON2BITS;
sfr volatile typeAUXCON2BITS AUXCON2bits absolute 0x45E;

// backward compatibility for PWMCON3BITS
    typedef struct tagPWMCON3BITS {
      union {
        struct {
          unsigned IUE:1;
          unsigned XPRES:1;
          unsigned CAM:1;
          unsigned MTBS:1;
          unsigned :1;
          unsigned DTCP:1;
          unsigned DTC:2;
          unsigned MDCS:1;
          unsigned ITB:1;
          unsigned TRGIEN:1;
          unsigned CLIEN:1;
          unsigned FLTIEN:1;
          unsigned TRGSTAT:1;
          unsigned CLSTAT:1;
          unsigned FLTSTAT:1;
        };
        struct {
          unsigned :6;
          unsigned DTC0:1;
          unsigned DTC1:1;
        };
      };
} typePWMCON3BITS;
sfr volatile typePWMCON3BITS PWMCON3bits absolute 0x460;

// backward compatibility for IOCON3BITS
    typedef struct tagIOCON3BITS {
      union {
        struct {
          unsigned OSYNC:1;
          unsigned SWAP:1;
          unsigned CLDAT:2;
          unsigned FLTDAT:2;
          unsigned OVRDAT:2;
          unsigned OVRENL:1;
          unsigned OVRENH:1;
          unsigned PMOD:2;
          unsigned POLL:1;
          unsigned POLH:1;
          unsigned PENL:1;
          unsigned PENH:1;
        };
        struct {
          unsigned :2;
          unsigned CLDAT0:1;
          unsigned CLDAT1:1;
          unsigned FLTDAT0:1;
          unsigned FLTDAT1:1;
          unsigned OVRDAT0:1;
          unsigned OVRDAT1:1;
          unsigned :2;
          unsigned PMOD0:1;
          unsigned PMOD1:1;
        };
      };
} typeIOCON3BITS;
sfr volatile typeIOCON3BITS IOCON3bits absolute 0x462;

// backward compatibility for FCLCON3BITS
    typedef struct tagFCLCON3BITS {
      union {
        struct {
          unsigned FLTMOD:2;
          unsigned FLTPOL:1;
          unsigned FLTSRC:5;
          unsigned CLMOD:1;
          unsigned CLPOL:1;
          unsigned CLSRC:5;
          unsigned IFLTMOD:1;
        };
        struct {
          unsigned FLTMOD0:1;
          unsigned FLTMOD1:1;
          unsigned :1;
          unsigned FLTSRC0:1;
          unsigned FLTSRC1:1;
          unsigned FLTSRC2:1;
          unsigned FLTSRC3:1;
          unsigned FLTSRC4:1;
          unsigned :2;
          unsigned CLSRC0:1;
          unsigned CLSRC1:1;
          unsigned CLSRC2:1;
          unsigned CLSRC3:1;
          unsigned CLSRC4:1;
        };
      };
} typeFCLCON3BITS;
sfr volatile typeFCLCON3BITS FCLCON3bits absolute 0x464;

// backward compatibility for TRIG3BITS
    typedef struct tagTRIG3BITS {
      union {
        struct {
          unsigned :3;
          unsigned TRGCMP:13;
        };
        struct {
          unsigned :3;
          unsigned TRGCMP0:1;
          unsigned TRGCMP1:1;
          unsigned TRGCMP2:1;
          unsigned TRGCMP3:1;
          unsigned TRGCMP4:1;
          unsigned TRGCMP5:1;
          unsigned TRGCMP6:1;
          unsigned TRGCMP7:1;
          unsigned TRGCMP8:1;
          unsigned TRGCMP9:1;
          unsigned TRGCMP10:1;
          unsigned TRGCMP11:1;
          unsigned TRGCMP12:1;
        };
      };
} typeTRIG3BITS;
sfr volatile typeTRIG3BITS TRIG3bits absolute 0x472;

// backward compatibility for TRGCON3BITS
    typedef struct tagTRGCON3BITS {
      union {
        struct {
          unsigned TRGSTRT:6;
          unsigned :1;
          unsigned DTM:1;
          unsigned :4;
          unsigned TRGDIV:4;
        };
        struct {
          unsigned TRGSTRT0:1;
          unsigned TRGSTRT1:1;
          unsigned TRGSTRT2:1;
          unsigned TRGSTRT3:1;
          unsigned TRGSTRT4:1;
          unsigned TRGSTRT5:1;
          unsigned :6;
          unsigned TRGDIV0:1;
          unsigned TRGDIV1:1;
          unsigned TRGDIV2:1;
          unsigned TRGDIV3:1;
        };
      };
} typeTRGCON3BITS;
sfr volatile typeTRGCON3BITS TRGCON3bits absolute 0x474;

// backward compatibility for STRIG3BITS
    typedef struct tagSTRIG3BITS {
      union {
        struct {
          unsigned :3;
          unsigned STRGCMP:13;
        };
        struct {
          unsigned :3;
          unsigned STRGCMP0:1;
          unsigned STRGCMP1:1;
          unsigned STRGCMP2:1;
          unsigned STRGCMP3:1;
          unsigned STRGCMP4:1;
          unsigned STRGCMP5:1;
          unsigned STRGCMP6:1;
          unsigned STRGCMP7:1;
          unsigned STRGCMP8:1;
          unsigned STRGCMP9:1;
          unsigned STRGCMP10:1;
          unsigned STRGCMP11:1;
          unsigned STRGCMP12:1;
        };
      };
} typeSTRIG3BITS;
sfr volatile typeSTRIG3BITS STRIG3bits absolute 0x476;

// backward compatibility for LEBCON3BITS
    typedef struct tagLEBCON3BITS {
      unsigned BPLL:1;
      unsigned BPLH:1;
      unsigned BPHL:1;
      unsigned BPHH:1;
      unsigned BCL:1;
      unsigned BCH:1;
      unsigned :4;
      unsigned CLLEBEN:1;
      unsigned FLTLEBEN:1;
      unsigned PLF:1;
      unsigned PLR:1;
      unsigned PHF:1;
      unsigned PHR:1;
} typeLEBCON3BITS;
sfr volatile typeLEBCON3BITS LEBCON3bits absolute 0x47A;

// backward compatibility for LEBDLY3BITS
    typedef struct tagLEBDLY3BITS {
      union {
        struct {
          unsigned :3;
          unsigned LEB:9;
        };
        struct {
          unsigned :3;
          unsigned LEB0:1;
          unsigned LEB1:1;
          unsigned LEB2:1;
          unsigned LEB3:1;
          unsigned LEB4:1;
          unsigned LEB5:1;
          unsigned LEB6:1;
          unsigned LEB7:1;
          unsigned LEB8:1;
        };
      };
} typeLEBDLY3BITS;
sfr volatile typeLEBDLY3BITS LEBDLY3bits absolute 0x47C;

// backward compatibility for AUXCON3BITS
    typedef struct tagAUXCON3BITS {
      union {
        struct {
          unsigned CHOPLEN:1;
          unsigned CHOPHEN:1;
          unsigned CHOPSEL:4;
          unsigned :2;
          unsigned BLANKSEL:4;
          unsigned :2;
          unsigned HRDDIS:1;
          unsigned HRPDIS:1;
        };
        struct {
          unsigned :2;
          unsigned CHOPSEL0:1;
          unsigned CHOPSEL1:1;
          unsigned CHOPSEL2:1;
          unsigned CHOPSEL3:1;
          unsigned :2;
          unsigned BLANKSEL0:1;
          unsigned BLANKSEL1:1;
          unsigned BLANKSEL2:1;
          unsigned BLANKSEL3:1;
        };
      };
} typeAUXCON3BITS;
sfr volatile typeAUXCON3BITS AUXCON3bits absolute 0x47E;

// backward compatibility for PWMCON4BITS
    typedef struct tagPWMCON4BITS {
      union {
        struct {
          unsigned IUE:1;
          unsigned XPRES:1;
          unsigned CAM:1;
          unsigned MTBS:1;
          unsigned :1;
          unsigned DTCP:1;
          unsigned DTC:2;
          unsigned MDCS:1;
          unsigned ITB:1;
          unsigned TRGIEN:1;
          unsigned CLIEN:1;
          unsigned FLTIEN:1;
          unsigned TRGSTAT:1;
          unsigned CLSTAT:1;
          unsigned FLTSTAT:1;
        };
        struct {
          unsigned :6;
          unsigned DTC0:1;
          unsigned DTC1:1;
        };
      };
} typePWMCON4BITS;
sfr volatile typePWMCON4BITS PWMCON4bits absolute 0x480;

// backward compatibility for IOCON4BITS
    typedef struct tagIOCON4BITS {
      union {
        struct {
          unsigned OSYNC:1;
          unsigned SWAP:1;
          unsigned CLDAT:2;
          unsigned FLTDAT:2;
          unsigned OVRDAT:2;
          unsigned OVRENL:1;
          unsigned OVRENH:1;
          unsigned PMOD:2;
          unsigned POLL:1;
          unsigned POLH:1;
          unsigned PENL:1;
          unsigned PENH:1;
        };
        struct {
          unsigned :2;
          unsigned CLDAT0:1;
          unsigned CLDAT1:1;
          unsigned FLTDAT0:1;
          unsigned FLTDAT1:1;
          unsigned OVRDAT0:1;
          unsigned OVRDAT1:1;
          unsigned :2;
          unsigned PMOD0:1;
          unsigned PMOD1:1;
        };
      };
} typeIOCON4BITS;
sfr volatile typeIOCON4BITS IOCON4bits absolute 0x482;

// backward compatibility for FCLCON4BITS
    typedef struct tagFCLCON4BITS {
      union {
        struct {
          unsigned FLTMOD:2;
          unsigned FLTPOL:1;
          unsigned FLTSRC:5;
          unsigned CLMOD:1;
          unsigned CLPOL:1;
          unsigned CLSRC:5;
          unsigned IFLTMOD:1;
        };
        struct {
          unsigned FLTMOD0:1;
          unsigned FLTMOD1:1;
          unsigned :1;
          unsigned FLTSRC0:1;
          unsigned FLTSRC1:1;
          unsigned FLTSRC2:1;
          unsigned FLTSRC3:1;
          unsigned FLTSRC4:1;
          unsigned :2;
          unsigned CLSRC0:1;
          unsigned CLSRC1:1;
          unsigned CLSRC2:1;
          unsigned CLSRC3:1;
          unsigned CLSRC4:1;
        };
      };
} typeFCLCON4BITS;
sfr volatile typeFCLCON4BITS FCLCON4bits absolute 0x484;

// backward compatibility for TRIG4BITS
    typedef struct tagTRIG4BITS {
      union {
        struct {
          unsigned :3;
          unsigned TRGCMP:13;
        };
        struct {
          unsigned :3;
          unsigned TRGCMP0:1;
          unsigned TRGCMP1:1;
          unsigned TRGCMP2:1;
          unsigned TRGCMP3:1;
          unsigned TRGCMP4:1;
          unsigned TRGCMP5:1;
          unsigned TRGCMP6:1;
          unsigned TRGCMP7:1;
          unsigned TRGCMP8:1;
          unsigned TRGCMP9:1;
          unsigned TRGCMP10:1;
          unsigned TRGCMP11:1;
          unsigned TRGCMP12:1;
        };
      };
} typeTRIG4BITS;
sfr volatile typeTRIG4BITS TRIG4bits absolute 0x492;

// backward compatibility for TRGCON4BITS
    typedef struct tagTRGCON4BITS {
      union {
        struct {
          unsigned TRGSTRT:6;
          unsigned :1;
          unsigned DTM:1;
          unsigned :4;
          unsigned TRGDIV:4;
        };
        struct {
          unsigned TRGSTRT0:1;
          unsigned TRGSTRT1:1;
          unsigned TRGSTRT2:1;
          unsigned TRGSTRT3:1;
          unsigned TRGSTRT4:1;
          unsigned TRGSTRT5:1;
          unsigned :6;
          unsigned TRGDIV0:1;
          unsigned TRGDIV1:1;
          unsigned TRGDIV2:1;
          unsigned TRGDIV3:1;
        };
      };
} typeTRGCON4BITS;
sfr volatile typeTRGCON4BITS TRGCON4bits absolute 0x494;

// backward compatibility for STRIG4BITS
    typedef struct tagSTRIG4BITS {
      union {
        struct {
          unsigned :3;
          unsigned STRGCMP:13;
        };
        struct {
          unsigned :3;
          unsigned STRGCMP0:1;
          unsigned STRGCMP1:1;
          unsigned STRGCMP2:1;
          unsigned STRGCMP3:1;
          unsigned STRGCMP4:1;
          unsigned STRGCMP5:1;
          unsigned STRGCMP6:1;
          unsigned STRGCMP7:1;
          unsigned STRGCMP8:1;
          unsigned STRGCMP9:1;
          unsigned STRGCMP10:1;
          unsigned STRGCMP11:1;
          unsigned STRGCMP12:1;
        };
      };
} typeSTRIG4BITS;
sfr volatile typeSTRIG4BITS STRIG4bits absolute 0x496;

// backward compatibility for LEBCON4BITS
    typedef struct tagLEBCON4BITS {
      unsigned BPLL:1;
      unsigned BPLH:1;
      unsigned BPHL:1;
      unsigned BPHH:1;
      unsigned BCL:1;
      unsigned BCH:1;
      unsigned :4;
      unsigned CLLEBEN:1;
      unsigned FLTLEBEN:1;
      unsigned PLF:1;
      unsigned PLR:1;
      unsigned PHF:1;
      unsigned PHR:1;
} typeLEBCON4BITS;
sfr volatile typeLEBCON4BITS LEBCON4bits absolute 0x49A;

// backward compatibility for LEBDLY4BITS
    typedef struct tagLEBDLY4BITS {
      union {
        struct {
          unsigned :3;
          unsigned LEB:9;
        };
        struct {
          unsigned :3;
          unsigned LEB0:1;
          unsigned LEB1:1;
          unsigned LEB2:1;
          unsigned LEB3:1;
          unsigned LEB4:1;
          unsigned LEB5:1;
          unsigned LEB6:1;
          unsigned LEB7:1;
          unsigned LEB8:1;
        };
      };
} typeLEBDLY4BITS;
sfr volatile typeLEBDLY4BITS LEBDLY4bits absolute 0x49C;

// backward compatibility for AUXCON4BITS
    typedef struct tagAUXCON4BITS {
      union {
        struct {
          unsigned CHOPLEN:1;
          unsigned CHOPHEN:1;
          unsigned CHOPSEL:4;
          unsigned :2;
          unsigned BLANKSEL:4;
          unsigned :2;
          unsigned HRDDIS:1;
          unsigned HRPDIS:1;
        };
        struct {
          unsigned :2;
          unsigned CHOPSEL0:1;
          unsigned CHOPSEL1:1;
          unsigned CHOPSEL2:1;
          unsigned CHOPSEL3:1;
          unsigned :2;
          unsigned BLANKSEL0:1;
          unsigned BLANKSEL1:1;
          unsigned BLANKSEL2:1;
          unsigned BLANKSEL3:1;
        };
      };
} typeAUXCON4BITS;
sfr volatile typeAUXCON4BITS AUXCON4bits absolute 0x49E;

// backward compatibility for PWMCON5BITS
    typedef struct tagPWMCON5BITS {
      union {
        struct {
          unsigned IUE:1;
          unsigned XPRES:1;
          unsigned CAM:1;
          unsigned MTBS:1;
          unsigned :1;
          unsigned DTCP:1;
          unsigned DTC:2;
          unsigned MDCS:1;
          unsigned ITB:1;
          unsigned TRGIEN:1;
          unsigned CLIEN:1;
          unsigned FLTIEN:1;
          unsigned TRGSTAT:1;
          unsigned CLSTAT:1;
          unsigned FLTSTAT:1;
        };
        struct {
          unsigned :6;
          unsigned DTC0:1;
          unsigned DTC1:1;
        };
      };
} typePWMCON5BITS;
sfr volatile typePWMCON5BITS PWMCON5bits absolute 0x4A0;

// backward compatibility for IOCON5BITS
    typedef struct tagIOCON5BITS {
      union {
        struct {
          unsigned OSYNC:1;
          unsigned SWAP:1;
          unsigned CLDAT:2;
          unsigned FLTDAT:2;
          unsigned OVRDAT:2;
          unsigned OVRENL:1;
          unsigned OVRENH:1;
          unsigned PMOD:2;
          unsigned POLL:1;
          unsigned POLH:1;
          unsigned PENL:1;
          unsigned PENH:1;
        };
        struct {
          unsigned :2;
          unsigned CLDAT0:1;
          unsigned CLDAT1:1;
          unsigned FLTDAT0:1;
          unsigned FLTDAT1:1;
          unsigned OVRDAT0:1;
          unsigned OVRDAT1:1;
          unsigned :2;
          unsigned PMOD0:1;
          unsigned PMOD1:1;
        };
      };
} typeIOCON5BITS;
sfr volatile typeIOCON5BITS IOCON5bits absolute 0x4A2;

// backward compatibility for FCLCON5BITS
    typedef struct tagFCLCON5BITS {
      union {
        struct {
          unsigned FLTMOD:2;
          unsigned FLTPOL:1;
          unsigned FLTSRC:5;
          unsigned CLMOD:1;
          unsigned CLPOL:1;
          unsigned CLSRC:5;
          unsigned IFLTMOD:1;
        };
        struct {
          unsigned FLTMOD0:1;
          unsigned FLTMOD1:1;
          unsigned :1;
          unsigned FLTSRC0:1;
          unsigned FLTSRC1:1;
          unsigned FLTSRC2:1;
          unsigned FLTSRC3:1;
          unsigned FLTSRC4:1;
          unsigned :2;
          unsigned CLSRC0:1;
          unsigned CLSRC1:1;
          unsigned CLSRC2:1;
          unsigned CLSRC3:1;
          unsigned CLSRC4:1;
        };
      };
} typeFCLCON5BITS;
sfr volatile typeFCLCON5BITS FCLCON5bits absolute 0x4A4;

// backward compatibility for TRIG5BITS
    typedef struct tagTRIG5BITS {
      union {
        struct {
          unsigned :3;
          unsigned TRGCMP:13;
        };
        struct {
          unsigned :3;
          unsigned TRGCMP0:1;
          unsigned TRGCMP1:1;
          unsigned TRGCMP2:1;
          unsigned TRGCMP3:1;
          unsigned TRGCMP4:1;
          unsigned TRGCMP5:1;
          unsigned TRGCMP6:1;
          unsigned TRGCMP7:1;
          unsigned TRGCMP8:1;
          unsigned TRGCMP9:1;
          unsigned TRGCMP10:1;
          unsigned TRGCMP11:1;
          unsigned TRGCMP12:1;
        };
      };
} typeTRIG5BITS;
sfr volatile typeTRIG5BITS TRIG5bits absolute 0x4B2;

// backward compatibility for TRGCON5BITS
    typedef struct tagTRGCON5BITS {
      union {
        struct {
          unsigned TRGSTRT:6;
          unsigned :1;
          unsigned DTM:1;
          unsigned :4;
          unsigned TRGDIV:4;
        };
        struct {
          unsigned TRGSTRT0:1;
          unsigned TRGSTRT1:1;
          unsigned TRGSTRT2:1;
          unsigned TRGSTRT3:1;
          unsigned TRGSTRT4:1;
          unsigned TRGSTRT5:1;
          unsigned :6;
          unsigned TRGDIV0:1;
          unsigned TRGDIV1:1;
          unsigned TRGDIV2:1;
          unsigned TRGDIV3:1;
        };
      };
} typeTRGCON5BITS;
sfr volatile typeTRGCON5BITS TRGCON5bits absolute 0x4B4;

// backward compatibility for STRIG5BITS
    typedef struct tagSTRIG5BITS {
      union {
        struct {
          unsigned :3;
          unsigned STRGCMP:13;
        };
        struct {
          unsigned :3;
          unsigned STRGCMP0:1;
          unsigned STRGCMP1:1;
          unsigned STRGCMP2:1;
          unsigned STRGCMP3:1;
          unsigned STRGCMP4:1;
          unsigned STRGCMP5:1;
          unsigned STRGCMP6:1;
          unsigned STRGCMP7:1;
          unsigned STRGCMP8:1;
          unsigned STRGCMP9:1;
          unsigned STRGCMP10:1;
          unsigned STRGCMP11:1;
          unsigned STRGCMP12:1;
        };
      };
} typeSTRIG5BITS;
sfr volatile typeSTRIG5BITS STRIG5bits absolute 0x4B6;

// backward compatibility for LEBCON5BITS
    typedef struct tagLEBCON5BITS {
      unsigned BPLL:1;
      unsigned BPLH:1;
      unsigned BPHL:1;
      unsigned BPHH:1;
      unsigned BCL:1;
      unsigned BCH:1;
      unsigned :4;
      unsigned CLLEBEN:1;
      unsigned FLTLEBEN:1;
      unsigned PLF:1;
      unsigned PLR:1;
      unsigned PHF:1;
      unsigned PHR:1;
} typeLEBCON5BITS;
sfr volatile typeLEBCON5BITS LEBCON5bits absolute 0x4BA;

// backward compatibility for LEBDLY5BITS
    typedef struct tagLEBDLY5BITS {
      union {
        struct {
          unsigned :3;
          unsigned LEB:9;
        };
        struct {
          unsigned :3;
          unsigned LEB0:1;
          unsigned LEB1:1;
          unsigned LEB2:1;
          unsigned LEB3:1;
          unsigned LEB4:1;
          unsigned LEB5:1;
          unsigned LEB6:1;
          unsigned LEB7:1;
          unsigned LEB8:1;
        };
      };
} typeLEBDLY5BITS;
sfr volatile typeLEBDLY5BITS LEBDLY5bits absolute 0x4BC;

// backward compatibility for AUXCON5BITS
    typedef struct tagAUXCON5BITS {
      union {
        struct {
          unsigned CHOPLEN:1;
          unsigned CHOPHEN:1;
          unsigned CHOPSEL:4;
          unsigned :2;
          unsigned BLANKSEL:4;
          unsigned :2;
          unsigned HRDDIS:1;
          unsigned HRPDIS:1;
        };
        struct {
          unsigned :2;
          unsigned CHOPSEL0:1;
          unsigned CHOPSEL1:1;
          unsigned CHOPSEL2:1;
          unsigned CHOPSEL3:1;
          unsigned :2;
          unsigned BLANKSEL0:1;
          unsigned BLANKSEL1:1;
          unsigned BLANKSEL2:1;
          unsigned BLANKSEL3:1;
        };
      };
} typeAUXCON5BITS;
sfr volatile typeAUXCON5BITS AUXCON5bits absolute 0x4BE;

// backward compatibility for PWMCON6BITS
    typedef struct tagPWMCON6BITS {
      union {
        struct {
          unsigned IUE:1;
          unsigned XPRES:1;
          unsigned CAM:1;
          unsigned MTBS:1;
          unsigned :1;
          unsigned DTCP:1;
          unsigned DTC:2;
          unsigned MDCS:1;
          unsigned ITB:1;
          unsigned TRGIEN:1;
          unsigned CLIEN:1;
          unsigned FLTIEN:1;
          unsigned TRGSTAT:1;
          unsigned CLSTAT:1;
          unsigned FLTSTAT:1;
        };
        struct {
          unsigned :6;
          unsigned DTC0:1;
          unsigned DTC1:1;
        };
      };
} typePWMCON6BITS;
sfr volatile typePWMCON6BITS PWMCON6bits absolute 0x4C0;

// backward compatibility for IOCON6BITS
    typedef struct tagIOCON6BITS {
      union {
        struct {
          unsigned OSYNC:1;
          unsigned SWAP:1;
          unsigned CLDAT:2;
          unsigned FLTDAT:2;
          unsigned OVRDAT:2;
          unsigned OVRENL:1;
          unsigned OVRENH:1;
          unsigned PMOD:2;
          unsigned POLL:1;
          unsigned POLH:1;
          unsigned PENL:1;
          unsigned PENH:1;
        };
        struct {
          unsigned :2;
          unsigned CLDAT0:1;
          unsigned CLDAT1:1;
          unsigned FLTDAT0:1;
          unsigned FLTDAT1:1;
          unsigned OVRDAT0:1;
          unsigned OVRDAT1:1;
          unsigned :2;
          unsigned PMOD0:1;
          unsigned PMOD1:1;
        };
      };
} typeIOCON6BITS;
sfr volatile typeIOCON6BITS IOCON6bits absolute 0x4C2;

// backward compatibility for FCLCON6BITS
    typedef struct tagFCLCON6BITS {
      union {
        struct {
          unsigned FLTMOD:2;
          unsigned FLTPOL:1;
          unsigned FLTSRC:5;
          unsigned CLMOD:1;
          unsigned CLPOL:1;
          unsigned CLSRC:5;
          unsigned IFLTMOD:1;
        };
        struct {
          unsigned FLTMOD0:1;
          unsigned FLTMOD1:1;
          unsigned :1;
          unsigned FLTSRC0:1;
          unsigned FLTSRC1:1;
          unsigned FLTSRC2:1;
          unsigned FLTSRC3:1;
          unsigned FLTSRC4:1;
          unsigned :2;
          unsigned CLSRC0:1;
          unsigned CLSRC1:1;
          unsigned CLSRC2:1;
          unsigned CLSRC3:1;
          unsigned CLSRC4:1;
        };
      };
} typeFCLCON6BITS;
sfr volatile typeFCLCON6BITS FCLCON6bits absolute 0x4C4;

// backward compatibility for TRIG6BITS
    typedef struct tagTRIG6BITS {
      union {
        struct {
          unsigned :3;
          unsigned TRGCMP:13;
        };
        struct {
          unsigned :3;
          unsigned TRGCMP0:1;
          unsigned TRGCMP1:1;
          unsigned TRGCMP2:1;
          unsigned TRGCMP3:1;
          unsigned TRGCMP4:1;
          unsigned TRGCMP5:1;
          unsigned TRGCMP6:1;
          unsigned TRGCMP7:1;
          unsigned TRGCMP8:1;
          unsigned TRGCMP9:1;
          unsigned TRGCMP10:1;
          unsigned TRGCMP11:1;
          unsigned TRGCMP12:1;
        };
      };
} typeTRIG6BITS;
sfr volatile typeTRIG6BITS TRIG6bits absolute 0x4D2;

// backward compatibility for TRGCON6BITS
    typedef struct tagTRGCON6BITS {
      union {
        struct {
          unsigned TRGSTRT:6;
          unsigned :1;
          unsigned DTM:1;
          unsigned :4;
          unsigned TRGDIV:4;
        };
        struct {
          unsigned TRGSTRT0:1;
          unsigned TRGSTRT1:1;
          unsigned TRGSTRT2:1;
          unsigned TRGSTRT3:1;
          unsigned TRGSTRT4:1;
          unsigned TRGSTRT5:1;
          unsigned :6;
          unsigned TRGDIV0:1;
          unsigned TRGDIV1:1;
          unsigned TRGDIV2:1;
          unsigned TRGDIV3:1;
        };
      };
} typeTRGCON6BITS;
sfr volatile typeTRGCON6BITS TRGCON6bits absolute 0x4D4;

// backward compatibility for STRIG6BITS
    typedef struct tagSTRIG6BITS {
      union {
        struct {
          unsigned :3;
          unsigned STRGCMP:13;
        };
        struct {
          unsigned :3;
          unsigned STRGCMP0:1;
          unsigned STRGCMP1:1;
          unsigned STRGCMP2:1;
          unsigned STRGCMP3:1;
          unsigned STRGCMP4:1;
          unsigned STRGCMP5:1;
          unsigned STRGCMP6:1;
          unsigned STRGCMP7:1;
          unsigned STRGCMP8:1;
          unsigned STRGCMP9:1;
          unsigned STRGCMP10:1;
          unsigned STRGCMP11:1;
          unsigned STRGCMP12:1;
        };
      };
} typeSTRIG6BITS;
sfr volatile typeSTRIG6BITS STRIG6bits absolute 0x4D6;

// backward compatibility for LEBCON6BITS
    typedef struct tagLEBCON6BITS {
      unsigned BPLL:1;
      unsigned BPLH:1;
      unsigned BPHL:1;
      unsigned BPHH:1;
      unsigned BCL:1;
      unsigned BCH:1;
      unsigned :4;
      unsigned CLLEBEN:1;
      unsigned FLTLEBEN:1;
      unsigned PLF:1;
      unsigned PLR:1;
      unsigned PHF:1;
      unsigned PHR:1;
} typeLEBCON6BITS;
sfr volatile typeLEBCON6BITS LEBCON6bits absolute 0x4DA;

// backward compatibility for LEBDLY6BITS
    typedef struct tagLEBDLY6BITS {
      union {
        struct {
          unsigned :3;
          unsigned LEB:9;
        };
        struct {
          unsigned :3;
          unsigned LEB0:1;
          unsigned LEB1:1;
          unsigned LEB2:1;
          unsigned LEB3:1;
          unsigned LEB4:1;
          unsigned LEB5:1;
          unsigned LEB6:1;
          unsigned LEB7:1;
          unsigned LEB8:1;
        };
      };
} typeLEBDLY6BITS;
sfr volatile typeLEBDLY6BITS LEBDLY6bits absolute 0x4DC;

// backward compatibility for AUXCON6BITS
    typedef struct tagAUXCON6BITS {
      union {
        struct {
          unsigned CHOPLEN:1;
          unsigned CHOPHEN:1;
          unsigned CHOPSEL:4;
          unsigned :2;
          unsigned BLANKSEL:4;
          unsigned :2;
          unsigned HRDDIS:1;
          unsigned HRPDIS:1;
        };
        struct {
          unsigned :2;
          unsigned CHOPSEL0:1;
          unsigned CHOPSEL1:1;
          unsigned CHOPSEL2:1;
          unsigned CHOPSEL3:1;
          unsigned :2;
          unsigned BLANKSEL0:1;
          unsigned BLANKSEL1:1;
          unsigned BLANKSEL2:1;
          unsigned BLANKSEL3:1;
        };
      };
} typeAUXCON6BITS;
sfr volatile typeAUXCON6BITS AUXCON6bits absolute 0x4DE;

// backward compatibility for CMPCON1BITS
    typedef struct tagCMPCON1BITS {
      union {
        struct {
          unsigned RANGE:1;
          unsigned CMPPOL:1;
          unsigned :1;
          unsigned CMPSTAT:1;
          unsigned :1;
          unsigned EXTREF:1;
          unsigned INSEL:2;
          unsigned DACOE:1;
          unsigned :4;
          unsigned CMPSIDL:1;
          unsigned :1;
          unsigned CMPON:1;
        };
        struct {
          unsigned :6;
          unsigned INSEL0:1;
          unsigned INSEL1:1;
        };
      };
} typeCMPCON1BITS;
sfr volatile typeCMPCON1BITS CMPCON1bits absolute 0x540;

// backward compatibility for CMPDAC1BITS
    typedef struct tagCMPDAC1BITS {
      union {
        struct {
          unsigned CMREF:10;
        };
        struct {
          unsigned CMREF0:1;
          unsigned CMREF1:1;
          unsigned CMREF2:1;
          unsigned CMREF3:1;
          unsigned CMREF4:1;
          unsigned CMREF5:1;
          unsigned CMREF6:1;
          unsigned CMREF7:1;
          unsigned CMREF8:1;
          unsigned CMREF9:1;
        };
      };
} typeCMPDAC1BITS;
sfr volatile typeCMPDAC1BITS CMPDAC1bits absolute 0x542;

// backward compatibility for CMPCON2BITS
    typedef struct tagCMPCON2BITS {
      union {
        struct {
          unsigned RANGE:1;
          unsigned CMPPOL:1;
          unsigned :1;
          unsigned CMPSTAT:1;
          unsigned :1;
          unsigned EXTREF:1;
          unsigned INSEL:2;
          unsigned DACOE:1;
          unsigned :4;
          unsigned CMPSIDL:1;
          unsigned :1;
          unsigned CMPON:1;
        };
        struct {
          unsigned :6;
          unsigned INSEL0:1;
          unsigned INSEL1:1;
        };
      };
} typeCMPCON2BITS;
sfr volatile typeCMPCON2BITS CMPCON2bits absolute 0x544;

// backward compatibility for CMPDAC2BITS
    typedef struct tagCMPDAC2BITS {
      union {
        struct {
          unsigned CMREF:10;
        };
        struct {
          unsigned CMREF0:1;
          unsigned CMREF1:1;
          unsigned CMREF2:1;
          unsigned CMREF3:1;
          unsigned CMREF4:1;
          unsigned CMREF5:1;
          unsigned CMREF6:1;
          unsigned CMREF7:1;
          unsigned CMREF8:1;
          unsigned CMREF9:1;
        };
      };
} typeCMPDAC2BITS;
sfr volatile typeCMPDAC2BITS CMPDAC2bits absolute 0x546;

// backward compatibility for CMPCON3BITS
    typedef struct tagCMPCON3BITS {
      union {
        struct {
          unsigned RANGE:1;
          unsigned CMPPOL:1;
          unsigned :1;
          unsigned CMPSTAT:1;
          unsigned :1;
          unsigned EXTREF:1;
          unsigned INSEL:2;
          unsigned DACOE:1;
          unsigned :4;
          unsigned CMPSIDL:1;
          unsigned :1;
          unsigned CMPON:1;
        };
        struct {
          unsigned :6;
          unsigned INSEL0:1;
          unsigned INSEL1:1;
        };
      };
} typeCMPCON3BITS;
sfr volatile typeCMPCON3BITS CMPCON3bits absolute 0x548;

// backward compatibility for CMPDAC3BITS
    typedef struct tagCMPDAC3BITS {
      union {
        struct {
          unsigned CMREF:10;
        };
        struct {
          unsigned CMREF0:1;
          unsigned CMREF1:1;
          unsigned CMREF2:1;
          unsigned CMREF3:1;
          unsigned CMREF4:1;
          unsigned CMREF5:1;
          unsigned CMREF6:1;
          unsigned CMREF7:1;
          unsigned CMREF8:1;
          unsigned CMREF9:1;
        };
      };
} typeCMPDAC3BITS;
sfr volatile typeCMPDAC3BITS CMPDAC3bits absolute 0x54A;

// backward compatibility for CMPCON4BITS
    typedef struct tagCMPCON4BITS {
      union {
        struct {
          unsigned RANGE:1;
          unsigned CMPPOL:1;
          unsigned :1;
          unsigned CMPSTAT:1;
          unsigned :1;
          unsigned EXTREF:1;
          unsigned INSEL:2;
          unsigned DACOE:1;
          unsigned :4;
          unsigned CMPSIDL:1;
          unsigned :1;
          unsigned CMPON:1;
        };
        struct {
          unsigned :6;
          unsigned INSEL0:1;
          unsigned INSEL1:1;
        };
      };
} typeCMPCON4BITS;
sfr volatile typeCMPCON4BITS CMPCON4bits absolute 0x54C;

// backward compatibility for CMPDAC4BITS
    typedef struct tagCMPDAC4BITS {
      union {
        struct {
          unsigned CMREF:10;
        };
        struct {
          unsigned CMREF0:1;
          unsigned CMREF1:1;
          unsigned CMREF2:1;
          unsigned CMREF3:1;
          unsigned CMREF4:1;
          unsigned CMREF5:1;
          unsigned CMREF6:1;
          unsigned CMREF7:1;
          unsigned CMREF8:1;
          unsigned CMREF9:1;
        };
      };
} typeCMPDAC4BITS;
sfr volatile typeCMPDAC4BITS CMPDAC4bits absolute 0x54E;

// backward compatibility for C1CTRL1BITS
    typedef struct tagC1CTRL1BITS {
      union {
        struct {
          unsigned WIN:1;
          unsigned :2;
          unsigned CANCAP:1;
          unsigned :1;
          unsigned OPMODE:3;
          unsigned REQOP:3;
          unsigned CANCKS:1;
          unsigned ABAT:1;
          unsigned CSIDL:1;
        };
        struct {
          unsigned :5;
          unsigned OPMODE0:1;
          unsigned OPMODE1:1;
          unsigned OPMODE2:1;
          unsigned REQOP0:1;
          unsigned REQOP1:1;
          unsigned REQOP2:1;
        };
      };
} typeC1CTRL1BITS;
sfr volatile typeC1CTRL1BITS C1CTRL1bits absolute 0x600;

// backward compatibility for C1CTRL2BITS
    typedef struct tagC1CTRL2BITS {
      union {
        struct {
          unsigned DNCNT:5;
        };
        struct {
          unsigned DNCNT0:1;
          unsigned DNCNT1:1;
          unsigned DNCNT2:1;
          unsigned DNCNT3:1;
          unsigned DNCNT4:1;
        };
      };
} typeC1CTRL2BITS;
sfr volatile typeC1CTRL2BITS C1CTRL2bits absolute 0x602;

// backward compatibility for C1VECBITS
    typedef struct tagC1VECBITS {
      union {
        struct {
          unsigned ICODE:7;
          unsigned :1;
          unsigned FILHIT:5;
        };
        struct {
          unsigned ICODE0:1;
          unsigned ICODE1:1;
          unsigned ICODE2:1;
          unsigned ICODE3:1;
          unsigned ICODE4:1;
          unsigned ICODE5:1;
          unsigned ICODE6:1;
          unsigned :1;
          unsigned FILHIT0:1;
          unsigned FILHIT1:1;
          unsigned FILHIT2:1;
          unsigned FILHIT3:1;
          unsigned FILHIT4:1;
        };
      };
} typeC1VECBITS;
sfr volatile typeC1VECBITS C1VECbits absolute 0x604;

// backward compatibility for C1FCTRLBITS
    typedef struct tagC1FCTRLBITS {
      union {
        struct {
          unsigned FSA:5;
          unsigned :8;
          unsigned DMABS:3;
        };
        struct {
          unsigned FSA0:1;
          unsigned FSA1:1;
          unsigned FSA2:1;
          unsigned FSA3:1;
          unsigned FSA4:1;
          unsigned :8;
          unsigned DMABS0:1;
          unsigned DMABS1:1;
          unsigned DMABS2:1;
        };
      };
} typeC1FCTRLBITS;
sfr volatile typeC1FCTRLBITS C1FCTRLbits absolute 0x606;

// backward compatibility for C1FIFOBITS
    typedef struct tagC1FIFOBITS {
      union {
        struct {
          unsigned FNRB:6;
          unsigned :2;
          unsigned FBP:6;
        };
        struct {
          unsigned FNRB0:1;
          unsigned FNRB1:1;
          unsigned FNRB2:1;
          unsigned FNRB3:1;
          unsigned FNRB4:1;
          unsigned FNRB5:1;
          unsigned :2;
          unsigned FBP0:1;
          unsigned FBP1:1;
          unsigned FBP2:1;
          unsigned FBP3:1;
          unsigned FBP4:1;
          unsigned FBP5:1;
        };
      };
} typeC1FIFOBITS;
sfr volatile typeC1FIFOBITS C1FIFObits absolute 0x608;

// backward compatibility for C1INTFBITS
    typedef struct tagC1INTFBITS {
      unsigned TBIF:1;
      unsigned RBIF:1;
      unsigned RBOVIF:1;
      unsigned FIFOIF:1;
      unsigned :1;
      unsigned ERRIF:1;
      unsigned WAKIF:1;
      unsigned IVRIF:1;
      unsigned EWARN:1;
      unsigned RXWAR:1;
      unsigned TXWAR:1;
      unsigned RXBP:1;
      unsigned TXBP:1;
      unsigned TXBO:1;
} typeC1INTFBITS;
sfr volatile typeC1INTFBITS C1INTFbits absolute 0x60A;

// backward compatibility for C1INTEBITS
    typedef struct tagC1INTEBITS {
      unsigned TBIE:1;
      unsigned RBIE:1;
      unsigned RBOVIE:1;
      unsigned FIFOIE:1;
      unsigned :1;
      unsigned ERRIE:1;
      unsigned WAKIE:1;
      unsigned IVRIE:1;
} typeC1INTEBITS;
sfr volatile typeC1INTEBITS C1INTEbits absolute 0x60C;

// backward compatibility for C1ECBITS
    typedef struct tagC1ECBITS {
      unsigned RERRCNT:8;
      unsigned TERRCNT:8;
} typeC1ECBITS;
sfr volatile typeC1ECBITS C1ECbits absolute 0x60E;

// backward compatibility for C1CFG1BITS
    typedef struct tagC1CFG1BITS {
      union {
        struct {
          unsigned BRP:6;
          unsigned SJW:2;
        };
        struct {
          unsigned BRP0:1;
          unsigned BRP1:1;
          unsigned BRP2:1;
          unsigned BRP3:1;
          unsigned BRP4:1;
          unsigned BRP5:1;
          unsigned SJW0:1;
          unsigned SJW1:1;
        };
      };
} typeC1CFG1BITS;
sfr volatile typeC1CFG1BITS C1CFG1bits absolute 0x610;

// backward compatibility for C1CFG2BITS
    typedef struct tagC1CFG2BITS {
      union {
        struct {
          unsigned PRSEG:3;
          unsigned SEG1PH:3;
          unsigned SAM:1;
          unsigned SEG2PHTS:1;
          unsigned SEG2PH:3;
          unsigned :3;
          unsigned WAKFIL:1;
        };
        struct {
          unsigned PRSEG0:1;
          unsigned PRSEG1:1;
          unsigned PRSEG2:1;
          unsigned SEG1PH0:1;
          unsigned SEG1PH1:1;
          unsigned SEG1PH2:1;
          unsigned :2;
          unsigned SEG2PH0:1;
          unsigned SEG2PH1:1;
          unsigned SEG2PH2:1;
        };
      };
} typeC1CFG2BITS;
sfr volatile typeC1CFG2BITS C1CFG2bits absolute 0x612;

// backward compatibility for C1FEN1BITS
    typedef struct tagC1FEN1BITS {
      unsigned FLTEN0:1;
      unsigned FLTEN1:1;
      unsigned FLTEN2:1;
      unsigned FLTEN3:1;
      unsigned FLTEN4:1;
      unsigned FLTEN5:1;
      unsigned FLTEN6:1;
      unsigned FLTEN7:1;
      unsigned FLTEN8:1;
      unsigned FLTEN9:1;
      unsigned FLTEN10:1;
      unsigned FLTEN11:1;
      unsigned FLTEN12:1;
      unsigned FLTEN13:1;
      unsigned FLTEN14:1;
      unsigned FLTEN15:1;
} typeC1FEN1BITS;
sfr volatile typeC1FEN1BITS C1FEN1bits absolute 0x614;

// backward compatibility for C1FMSKSEL1BITS
    typedef struct tagC1FMSKSEL1BITS {
      union {
        struct {
          unsigned F0MSK:2;
          unsigned F1MSK:2;
          unsigned F2MSK:2;
          unsigned F3MSK:2;
          unsigned F4MSK:2;
          unsigned F5MSK:2;
          unsigned F6MSK:2;
          unsigned F7MSK:2;
        };
        struct {
          unsigned F0MSK0:1;
          unsigned F0MSK1:1;
          unsigned F1MSK0:1;
          unsigned F1MSK1:1;
          unsigned F2MSK0:1;
          unsigned F2MSK1:1;
          unsigned F3MSK0:1;
          unsigned F3MSK1:1;
          unsigned F4MSK0:1;
          unsigned F4MSK1:1;
          unsigned F5MSK0:1;
          unsigned F5MSK1:1;
          unsigned F6MSK0:1;
          unsigned F6MSK1:1;
          unsigned F7MSK0:1;
          unsigned F7MSK1:1;
        };
      };
} typeC1FMSKSEL1BITS;
sfr volatile typeC1FMSKSEL1BITS C1FMSKSEL1bits absolute 0x618;

// backward compatibility for C1FMSKSEL2BITS
    typedef struct tagC1FMSKSEL2BITS {
      union {
        struct {
          unsigned F8MSK:2;
          unsigned F9MSK:2;
          unsigned F10MSK:2;
          unsigned F11MSK:2;
          unsigned F12MSK:2;
          unsigned F13MSK:2;
          unsigned F14MSK:2;
          unsigned F15MSK:2;
        };
        struct {
          unsigned F8MSK0:1;
          unsigned F8MSK1:1;
          unsigned F9MSK0:1;
          unsigned F9MSK1:1;
          unsigned F10MSK0:1;
          unsigned F10MSK1:1;
          unsigned F11MSK0:1;
          unsigned F11MSK1:1;
          unsigned F12MSK0:1;
          unsigned F12MSK1:1;
          unsigned F13MSK0:1;
          unsigned F13MSK1:1;
          unsigned F14MSK0:1;
          unsigned F14MSK1:1;
          unsigned F15MSK0:1;
          unsigned F15MSK1:1;
        };
      };
} typeC1FMSKSEL2BITS;
sfr volatile typeC1FMSKSEL2BITS C1FMSKSEL2bits absolute 0x61A;

// backward compatibility for C1BUFPNT1BITS
    typedef struct tagC1BUFPNT1BITS {
      union {
        struct {
          unsigned F0BP:4;
          unsigned F1BP:4;
          unsigned F2BP:4;
          unsigned F3BP:4;
        };
        struct {
          unsigned F0BP0:1;
          unsigned F0BP1:1;
          unsigned F0BP2:1;
          unsigned F0BP3:1;
          unsigned F1BP0:1;
          unsigned F1BP1:1;
          unsigned F1BP2:1;
          unsigned F1BP3:1;
          unsigned F2BP0:1;
          unsigned F2BP1:1;
          unsigned F2BP2:1;
          unsigned F2BP3:1;
          unsigned F3BP0:1;
          unsigned F3BP1:1;
          unsigned F3BP2:1;
          unsigned F3BP3:1;
        };
      };
} typeC1BUFPNT1BITS;
sfr volatile typeC1BUFPNT1BITS C1BUFPNT1bits absolute 0x620;

// backward compatibility for C1RXFUL1BITS
    typedef struct tagC1RXFUL1BITS {
      unsigned RXFUL0:1;
      unsigned RXFUL1:1;
      unsigned RXFUL2:1;
      unsigned RXFUL3:1;
      unsigned RXFUL4:1;
      unsigned RXFUL5:1;
      unsigned RXFUL6:1;
      unsigned RXFUL7:1;
      unsigned RXFUL8:1;
      unsigned RXFUL9:1;
      unsigned RXFUL10:1;
      unsigned RXFUL11:1;
      unsigned RXFUL12:1;
      unsigned RXFUL13:1;
      unsigned RXFUL14:1;
      unsigned RXFUL15:1;
} typeC1RXFUL1BITS;
sfr volatile typeC1RXFUL1BITS C1RXFUL1bits absolute 0x620;

// backward compatibility for C1BUFPNT2BITS
    typedef struct tagC1BUFPNT2BITS {
      union {
        struct {
          unsigned F4BP:4;
          unsigned F5BP:4;
          unsigned F6BP:4;
          unsigned F7BP:4;
        };
        struct {
          unsigned F4BP0:1;
          unsigned F4BP1:1;
          unsigned F4BP2:1;
          unsigned F4BP3:1;
          unsigned F5BP0:1;
          unsigned F5BP1:1;
          unsigned F5BP2:1;
          unsigned F5BP3:1;
          unsigned F6BP0:1;
          unsigned F6BP1:1;
          unsigned F6BP2:1;
          unsigned F6BP3:1;
          unsigned F7BP0:1;
          unsigned F7BP1:1;
          unsigned F7BP2:1;
          unsigned F7BP3:1;
        };
      };
} typeC1BUFPNT2BITS;
sfr volatile typeC1BUFPNT2BITS C1BUFPNT2bits absolute 0x622;

// backward compatibility for C1RXFUL2BITS
    typedef struct tagC1RXFUL2BITS {
      unsigned RXFUL16:1;
      unsigned RXFUL17:1;
      unsigned RXFUL18:1;
      unsigned RXFUL19:1;
      unsigned RXFUL20:1;
      unsigned RXFUL21:1;
      unsigned RXFUL22:1;
      unsigned RXFUL23:1;
      unsigned RXFUL24:1;
      unsigned RXFUL25:1;
      unsigned RXFUL26:1;
      unsigned RXFUL27:1;
      unsigned RXFUL28:1;
      unsigned RXFUL29:1;
      unsigned RXFUL30:1;
      unsigned RXFUL31:1;
} typeC1RXFUL2BITS;
sfr volatile typeC1RXFUL2BITS C1RXFUL2bits absolute 0x622;

// backward compatibility for C1BUFPNT3BITS
    typedef struct tagC1BUFPNT3BITS {
      union {
        struct {
          unsigned F8BP:4;
          unsigned F9BP:4;
          unsigned F10BP:4;
          unsigned F11BP:4;
        };
        struct {
          unsigned F8BP0:1;
          unsigned F8BP1:1;
          unsigned F8BP2:1;
          unsigned F8BP3:1;
          unsigned F9BP0:1;
          unsigned F9BP1:1;
          unsigned F9BP2:1;
          unsigned F9BP3:1;
          unsigned F10BP0:1;
          unsigned F10BP1:1;
          unsigned F10BP2:1;
          unsigned F10BP3:1;
          unsigned F11BP0:1;
          unsigned F11BP1:1;
          unsigned F11BP2:1;
          unsigned F11BP3:1;
        };
      };
} typeC1BUFPNT3BITS;
sfr volatile typeC1BUFPNT3BITS C1BUFPNT3bits absolute 0x624;

// backward compatibility for C1BUFPNT4BITS
    typedef struct tagC1BUFPNT4BITS {
      union {
        struct {
          unsigned F12BP:4;
          unsigned F13BP:4;
          unsigned F14BP:4;
          unsigned F15BP:4;
        };
        struct {
          unsigned F12BP0:1;
          unsigned F12BP1:1;
          unsigned F12BP2:1;
          unsigned F12BP3:1;
          unsigned F13BP0:1;
          unsigned F13BP1:1;
          unsigned F13BP2:1;
          unsigned F13BP3:1;
          unsigned F14BP0:1;
          unsigned F14BP1:1;
          unsigned F14BP2:1;
          unsigned F14BP3:1;
          unsigned F15BP0:1;
          unsigned F15BP1:1;
          unsigned F15BP2:1;
          unsigned F15BP3:1;
        };
      };
} typeC1BUFPNT4BITS;
sfr volatile typeC1BUFPNT4BITS C1BUFPNT4bits absolute 0x626;

// backward compatibility for C1RXOVF1BITS
    typedef struct tagC1RXOVF1BITS {
      unsigned RXOVF0:1;
      unsigned RXOVF1:1;
      unsigned RXOVF2:1;
      unsigned RXOVF3:1;
      unsigned RXOVF4:1;
      unsigned RXOVF5:1;
      unsigned RXOVF6:1;
      unsigned RXOVF7:1;
      unsigned RXOVF8:1;
      unsigned RXOVF9:1;
      unsigned RXOVF10:1;
      unsigned RXOVF11:1;
      unsigned RXOVF12:1;
      unsigned RXOVF13:1;
      unsigned RXOVF14:1;
      unsigned RXOVF15:1;
} typeC1RXOVF1BITS;
sfr volatile typeC1RXOVF1BITS C1RXOVF1bits absolute 0x628;

// backward compatibility for C1RXOVF2BITS
    typedef struct tagC1RXOVF2BITS {
      unsigned RXOVF16:1;
      unsigned RXOVF17:1;
      unsigned RXOVF18:1;
      unsigned RXOVF19:1;
      unsigned RXOVF20:1;
      unsigned RXOVF21:1;
      unsigned RXOVF22:1;
      unsigned RXOVF23:1;
      unsigned RXOVF24:1;
      unsigned RXOVF25:1;
      unsigned RXOVF26:1;
      unsigned RXOVF27:1;
      unsigned RXOVF28:1;
      unsigned RXOVF29:1;
      unsigned RXOVF30:1;
      unsigned RXOVF31:1;
} typeC1RXOVF2BITS;
sfr volatile typeC1RXOVF2BITS C1RXOVF2bits absolute 0x62A;

// backward compatibility for C1RXM0SIDBITS
    typedef struct tagC1RXM0SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned MIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXM0SIDBITS;
sfr volatile typeC1RXM0SIDBITS C1RXM0SIDbits absolute 0x630;

// backward compatibility for C1TR01CONBITS
    typedef struct tagC1TR01CONBITS {
      union {
        struct {
          unsigned TX0PRI:2;
          unsigned RTREN0:1;
          unsigned TXREQ0:1;
          unsigned TXERR0:1;
          unsigned TXLARB0:1;
          unsigned TXABT0:1;
          unsigned TXEN0:1;
          unsigned TX1PRI:2;
          unsigned RTREN1:1;
          unsigned TXREQ1:1;
          unsigned TXERR1:1;
          unsigned TXLARB1:1;
          unsigned TXABT1:1;
          unsigned TXEN1:1;
        };
        struct {
          unsigned TX0PRI0:1;
          unsigned TX0PRI1:1;
          unsigned :6;
          unsigned TX1PRI0:1;
          unsigned TX1PRI1:1;
        };
      };
} typeC1TR01CONBITS;
sfr volatile typeC1TR01CONBITS C1TR01CONbits absolute 0x630;

// backward compatibility for C1RXM0EIDBITS
    typedef struct tagC1RXM0EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXM0EIDBITS;
sfr volatile typeC1RXM0EIDBITS C1RXM0EIDbits absolute 0x632;

// backward compatibility for C1TR23CONBITS
    typedef struct tagC1TR23CONBITS {
      union {
        struct {
          unsigned TX2PRI:2;
          unsigned RTREN2:1;
          unsigned TXREQ2:1;
          unsigned TXERR2:1;
          unsigned TXLARB2:1;
          unsigned TXABT2:1;
          unsigned TXEN2:1;
          unsigned TX3PRI:2;
          unsigned RTREN3:1;
          unsigned TXREQ3:1;
          unsigned TXERR3:1;
          unsigned TXLARB3:1;
          unsigned TXABT3:1;
          unsigned TXEN3:1;
        };
        struct {
          unsigned TX2PRI0:1;
          unsigned TX2PRI1:1;
          unsigned :6;
          unsigned TX3PRI0:1;
          unsigned TX3PRI1:1;
        };
      };
} typeC1TR23CONBITS;
sfr volatile typeC1TR23CONBITS C1TR23CONbits absolute 0x632;

// backward compatibility for C1RXM1SIDBITS
    typedef struct tagC1RXM1SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned MIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXM1SIDBITS;
sfr volatile typeC1RXM1SIDBITS C1RXM1SIDbits absolute 0x634;

// backward compatibility for C1TR45CONBITS
    typedef struct tagC1TR45CONBITS {
      union {
        struct {
          unsigned TX4PRI:2;
          unsigned RTREN4:1;
          unsigned TXREQ4:1;
          unsigned TXERR4:1;
          unsigned TXLARB4:1;
          unsigned TXABT4:1;
          unsigned TXEN4:1;
          unsigned TX5PRI:2;
          unsigned RTREN5:1;
          unsigned TXREQ5:1;
          unsigned TXERR5:1;
          unsigned TXLARB5:1;
          unsigned TXABT5:1;
          unsigned TXEN5:1;
        };
        struct {
          unsigned TX4PRI0:1;
          unsigned TX4PRI1:1;
          unsigned :6;
          unsigned TX5PRI0:1;
          unsigned TX5PRI1:1;
        };
      };
} typeC1TR45CONBITS;
sfr volatile typeC1TR45CONBITS C1TR45CONbits absolute 0x634;

// backward compatibility for C1RXM1EIDBITS
    typedef struct tagC1RXM1EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXM1EIDBITS;
sfr volatile typeC1RXM1EIDBITS C1RXM1EIDbits absolute 0x636;

// backward compatibility for C1TR67CONBITS
    typedef struct tagC1TR67CONBITS {
      union {
        struct {
          unsigned TX6PRI:2;
          unsigned RTREN6:1;
          unsigned TXREQ6:1;
          unsigned TXERR6:1;
          unsigned TXLARB6:1;
          unsigned TXABT6:1;
          unsigned TXEN6:1;
          unsigned TX7PRI:2;
          unsigned RTREN7:1;
          unsigned TXREQ7:1;
          unsigned TXERR7:1;
          unsigned TXLARB7:1;
          unsigned TXABT7:1;
          unsigned TXEN7:1;
        };
        struct {
          unsigned TX6PRI0:1;
          unsigned TX6PRI1:1;
          unsigned :6;
          unsigned TX7PRI0:1;
          unsigned TX7PRI1:1;
        };
      };
} typeC1TR67CONBITS;
sfr volatile typeC1TR67CONBITS C1TR67CONbits absolute 0x636;

// backward compatibility for C1RXM2SIDBITS
    typedef struct tagC1RXM2SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned MIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXM2SIDBITS;
sfr volatile typeC1RXM2SIDBITS C1RXM2SIDbits absolute 0x638;

// backward compatibility for C1RXM2EIDBITS
    typedef struct tagC1RXM2EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXM2EIDBITS;
sfr volatile typeC1RXM2EIDBITS C1RXM2EIDbits absolute 0x63A;

// backward compatibility for C1RXF0SIDBITS
    typedef struct tagC1RXF0SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF0SIDBITS;
sfr volatile typeC1RXF0SIDBITS C1RXF0SIDbits absolute 0x640;

// backward compatibility for C1RXF0EIDBITS
    typedef struct tagC1RXF0EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF0EIDBITS;
sfr volatile typeC1RXF0EIDBITS C1RXF0EIDbits absolute 0x642;

// backward compatibility for C1RXF1SIDBITS
    typedef struct tagC1RXF1SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF1SIDBITS;
sfr volatile typeC1RXF1SIDBITS C1RXF1SIDbits absolute 0x644;

// backward compatibility for C1RXF1EIDBITS
    typedef struct tagC1RXF1EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF1EIDBITS;
sfr volatile typeC1RXF1EIDBITS C1RXF1EIDbits absolute 0x646;

// backward compatibility for C1RXF2SIDBITS
    typedef struct tagC1RXF2SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF2SIDBITS;
sfr volatile typeC1RXF2SIDBITS C1RXF2SIDbits absolute 0x648;

// backward compatibility for C1RXF2EIDBITS
    typedef struct tagC1RXF2EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF2EIDBITS;
sfr volatile typeC1RXF2EIDBITS C1RXF2EIDbits absolute 0x64A;

// backward compatibility for C1RXF3SIDBITS
    typedef struct tagC1RXF3SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF3SIDBITS;
sfr volatile typeC1RXF3SIDBITS C1RXF3SIDbits absolute 0x64C;

// backward compatibility for C1RXF3EIDBITS
    typedef struct tagC1RXF3EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF3EIDBITS;
sfr volatile typeC1RXF3EIDBITS C1RXF3EIDbits absolute 0x64E;

// backward compatibility for C1RXF4SIDBITS
    typedef struct tagC1RXF4SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF4SIDBITS;
sfr volatile typeC1RXF4SIDBITS C1RXF4SIDbits absolute 0x650;

// backward compatibility for C1RXF4EIDBITS
    typedef struct tagC1RXF4EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF4EIDBITS;
sfr volatile typeC1RXF4EIDBITS C1RXF4EIDbits absolute 0x652;

// backward compatibility for C1RXF5SIDBITS
    typedef struct tagC1RXF5SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF5SIDBITS;
sfr volatile typeC1RXF5SIDBITS C1RXF5SIDbits absolute 0x654;

// backward compatibility for C1RXF5EIDBITS
    typedef struct tagC1RXF5EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF5EIDBITS;
sfr volatile typeC1RXF5EIDBITS C1RXF5EIDbits absolute 0x656;

// backward compatibility for C1RXF6SIDBITS
    typedef struct tagC1RXF6SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF6SIDBITS;
sfr volatile typeC1RXF6SIDBITS C1RXF6SIDbits absolute 0x658;

// backward compatibility for C1RXF6EIDBITS
    typedef struct tagC1RXF6EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF6EIDBITS;
sfr volatile typeC1RXF6EIDBITS C1RXF6EIDbits absolute 0x65A;

// backward compatibility for C1RXF7SIDBITS
    typedef struct tagC1RXF7SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF7SIDBITS;
sfr volatile typeC1RXF7SIDBITS C1RXF7SIDbits absolute 0x65C;

// backward compatibility for C1RXF7EIDBITS
    typedef struct tagC1RXF7EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF7EIDBITS;
sfr volatile typeC1RXF7EIDBITS C1RXF7EIDbits absolute 0x65E;

// backward compatibility for C1RXF8SIDBITS
    typedef struct tagC1RXF8SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF8SIDBITS;
sfr volatile typeC1RXF8SIDBITS C1RXF8SIDbits absolute 0x660;

// backward compatibility for C1RXF8EIDBITS
    typedef struct tagC1RXF8EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF8EIDBITS;
sfr volatile typeC1RXF8EIDBITS C1RXF8EIDbits absolute 0x662;

// backward compatibility for C1RXF9SIDBITS
    typedef struct tagC1RXF9SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF9SIDBITS;
sfr volatile typeC1RXF9SIDBITS C1RXF9SIDbits absolute 0x664;

// backward compatibility for C1RXF9EIDBITS
    typedef struct tagC1RXF9EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF9EIDBITS;
sfr volatile typeC1RXF9EIDBITS C1RXF9EIDbits absolute 0x666;

// backward compatibility for C1RXF10SIDBITS
    typedef struct tagC1RXF10SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF10SIDBITS;
sfr volatile typeC1RXF10SIDBITS C1RXF10SIDbits absolute 0x668;

// backward compatibility for C1RXF10EIDBITS
    typedef struct tagC1RXF10EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF10EIDBITS;
sfr volatile typeC1RXF10EIDBITS C1RXF10EIDbits absolute 0x66A;

// backward compatibility for C1RXF11SIDBITS
    typedef struct tagC1RXF11SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF11SIDBITS;
sfr volatile typeC1RXF11SIDBITS C1RXF11SIDbits absolute 0x66C;

// backward compatibility for C1RXF11EIDBITS
    typedef struct tagC1RXF11EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF11EIDBITS;
sfr volatile typeC1RXF11EIDBITS C1RXF11EIDbits absolute 0x66E;

// backward compatibility for C1RXF12SIDBITS
    typedef struct tagC1RXF12SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF12SIDBITS;
sfr volatile typeC1RXF12SIDBITS C1RXF12SIDbits absolute 0x670;

// backward compatibility for C1RXF12EIDBITS
    typedef struct tagC1RXF12EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF12EIDBITS;
sfr volatile typeC1RXF12EIDBITS C1RXF12EIDbits absolute 0x672;

// backward compatibility for C1RXF13SIDBITS
    typedef struct tagC1RXF13SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF13SIDBITS;
sfr volatile typeC1RXF13SIDBITS C1RXF13SIDbits absolute 0x674;

// backward compatibility for C1RXF13EIDBITS
    typedef struct tagC1RXF13EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF13EIDBITS;
sfr volatile typeC1RXF13EIDBITS C1RXF13EIDbits absolute 0x676;

// backward compatibility for C1RXF14SIDBITS
    typedef struct tagC1RXF14SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF14SIDBITS;
sfr volatile typeC1RXF14SIDBITS C1RXF14SIDbits absolute 0x678;

// backward compatibility for C1RXF14EIDBITS
    typedef struct tagC1RXF14EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF14EIDBITS;
sfr volatile typeC1RXF14EIDBITS C1RXF14EIDbits absolute 0x67A;

// backward compatibility for C1RXF15SIDBITS
    typedef struct tagC1RXF15SIDBITS {
      union {
        struct {
          unsigned EID16:1;
          unsigned EID17:1;
          unsigned :1;
          unsigned EXIDE:1;
          unsigned :1;
          unsigned SID0:1;
          unsigned SID1:1;
          unsigned SID2:1;
          unsigned SID3:1;
          unsigned SID4:1;
          unsigned SID5:1;
          unsigned SID6:1;
          unsigned SID7:1;
          unsigned SID8:1;
          unsigned SID9:1;
          unsigned SID10:1;
        };
        struct {
          unsigned EID:2;
          unsigned :3;
          unsigned SID:11;
        };
      };
} typeC1RXF15SIDBITS;
sfr volatile typeC1RXF15SIDBITS C1RXF15SIDbits absolute 0x67C;

// backward compatibility for C1RXF15EIDBITS
    typedef struct tagC1RXF15EIDBITS {
      union {
        struct {
          unsigned EID0:1;
          unsigned EID1:1;
          unsigned EID2:1;
          unsigned EID3:1;
          unsigned EID4:1;
          unsigned EID5:1;
          unsigned EID6:1;
          unsigned EID7:1;
          unsigned EID8:1;
          unsigned EID9:1;
          unsigned EID10:1;
          unsigned EID11:1;
          unsigned EID12:1;
          unsigned EID13:1;
          unsigned EID14:1;
          unsigned EID15:1;
        };
        struct {
          unsigned EID:16;
        };
      };
} typeC1RXF15EIDBITS;
sfr volatile typeC1RXF15EIDBITS C1RXF15EIDbits absolute 0x67E;

// backward compatibility for RCONBITS
    typedef struct tagRCONBITS {
      unsigned POR:1;
      unsigned BOR:1;
      unsigned IDLE:1;
      unsigned SLEEP:1;
      unsigned WDTO:1;
      unsigned SWDTEN:1;
      unsigned SWR:1;
      unsigned EXTR:1;
      unsigned VREGS:1;
      unsigned :5;
      unsigned IOPUWR:1;
      unsigned TRAPR:1;
} typeRCONBITS;
sfr volatile typeRCONBITS RCONbits absolute 0x740;

// backward compatibility for OSCCONBITS
    typedef struct tagOSCCONBITS {
      union {
        struct {
          unsigned OSWEN:1;
          unsigned LPOSCEN:1;
          unsigned :1;
          unsigned CF:1;
          unsigned PRCDEN:1;
          unsigned LOCK:1;
          unsigned :1;
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
          unsigned PLLPRE:5;
          unsigned :1;
          unsigned PLLPOST:2;
          unsigned FRCDIV:3;
          unsigned DOZEN:1;
          unsigned DOZE:3;
          unsigned ROI:1;
        };
        struct {
          unsigned PLLPRE0:1;
          unsigned PLLPRE1:1;
          unsigned PLLPRE2:1;
          unsigned PLLPRE3:1;
          unsigned PLLPRE4:1;
          unsigned :1;
          unsigned PLLPOST0:1;
          unsigned PLLPOST1:1;
          unsigned FRCDIV0:1;
          unsigned FRCDIV1:1;
          unsigned FRCDIV2:1;
          unsigned :1;
          unsigned DOZE0:1;
          unsigned DOZE1:1;
          unsigned DOZE2:1;
        };
      };
} typeCLKDIVBITS;
sfr volatile typeCLKDIVBITS CLKDIVbits absolute 0x744;

// backward compatibility for PLLFBDBITS
    typedef struct tagPLLFBDBITS {
      union {
        struct {
          unsigned PLLDIV:9;
        };
        struct {
          unsigned PLLDIV0:1;
          unsigned PLLDIV1:1;
          unsigned PLLDIV2:1;
          unsigned PLLDIV3:1;
          unsigned PLLDIV4:1;
          unsigned PLLDIV5:1;
          unsigned PLLDIV6:1;
          unsigned PLLDIV7:1;
          unsigned PLLDIV8:1;
        };
      };
} typePLLFBDBITS;
sfr volatile typePLLFBDBITS PLLFBDbits absolute 0x746;

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
          unsigned TSEQ10:1;
          unsigned TSEQ11:1;
          unsigned TSEQ12:1;
          unsigned TSEQ13:1;
          unsigned TSEQ20:1;
          unsigned TSEQ21:1;
          unsigned TSEQ22:1;
          unsigned TSEQ23:1;
          unsigned TSEQ30:1;
          unsigned TSEQ31:1;
          unsigned TSEQ32:1;
          unsigned TSEQ33:1;
        };
      };
} typeOSCTUNBITS;
sfr volatile typeOSCTUNBITS OSCTUNbits absolute 0x748;

// backward compatibility for OSCTUN2BITS
    typedef struct tagOSCTUN2BITS {
      unsigned TSEQ40:1;
      unsigned TSEQ41:1;
      unsigned TSEQ42:1;
      unsigned TSEQ43:1;
      unsigned TSEQ50:1;
      unsigned TSEQ51:1;
      unsigned TSEQ52:1;
      unsigned TSEQ53:1;
      unsigned TSEQ60:1;
      unsigned TSEQ61:1;
      unsigned TSEQ62:1;
      unsigned TSEQ63:1;
      unsigned TSEQ70:1;
      unsigned TSEQ71:1;
      unsigned TSEQ72:1;
      unsigned TSEQ73:1;
} typeOSCTUN2BITS;
sfr volatile typeOSCTUN2BITS OSCTUN2bits absolute 0x74A;

// backward compatibility for REFOCONBITS
    typedef struct tagREFOCONBITS {
      union {
        struct {
          unsigned :8;
          unsigned RODIV:4;
          unsigned ROSEL:1;
          unsigned ROSIDL:1;
          unsigned :1;
          unsigned ROON:1;
        };
        struct {
          unsigned :8;
          unsigned RODIV0:1;
          unsigned RODIV1:1;
          unsigned RODIV2:1;
          unsigned RODIV3:1;
          unsigned :1;
          unsigned ROSSLP:1;
        };
      };
} typeREFOCONBITS;
sfr volatile typeREFOCONBITS REFOCONbits absolute 0x74E;

// backward compatibility for ACLKCONBITS
    typedef struct tagACLKCONBITS {
      union {
        struct {
          unsigned :6;
          unsigned FRCSEL:1;
          unsigned ASRCSEL:1;
          unsigned APSTSCLR:3;
          unsigned :2;
          unsigned SELACLK:1;
          unsigned APLLCK:1;
          unsigned ENAPLL:1;
        };
        struct {
          unsigned :8;
          unsigned APSTSCLR0:1;
          unsigned APSTSCLR1:1;
          unsigned APSTSCLR2:1;
        };
      };
} typeACLKCONBITS;
sfr volatile typeACLKCONBITS ACLKCONbits absolute 0x750;

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

// backward compatibility for PMD1BITS
    typedef struct tagPMD1BITS {
      unsigned ADCMD:1;
      unsigned C1MD:1;
      unsigned :1;
      unsigned SPI1MD:1;
      unsigned SPI2MD:1;
      unsigned U1MD:1;
      unsigned U2MD:1;
      unsigned I2C1MD:1;
      unsigned :1;
      unsigned PWMMD:1;
      unsigned QEI1MD:1;
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
      unsigned :4;
      unsigned IC1MD:1;
      unsigned IC2MD:1;
      unsigned IC3MD:1;
      unsigned IC4MD:1;
} typePMD2BITS;
sfr volatile typePMD2BITS PMD2bits absolute 0x772;

// backward compatibility for PMD3BITS
    typedef struct tagPMD3BITS {
      unsigned :1;
      unsigned I2C2MD:1;
      unsigned :3;
      unsigned QEI2MD:1;
      unsigned :4;
      unsigned CMPMD:1;
} typePMD3BITS;
sfr volatile typePMD3BITS PMD3bits absolute 0x774;

// backward compatibility for PMD4BITS
    typedef struct tagPMD4BITS {
      unsigned :3;
      unsigned REFOMD:1;
} typePMD4BITS;
sfr volatile typePMD4BITS PMD4bits absolute 0x776;

// backward compatibility for PMD6BITS
    typedef struct tagPMD6BITS {
      unsigned :8;
      unsigned PWM1MD:1;
      unsigned PWM2MD:1;
      unsigned PWM3MD:1;
      unsigned PWM4MD:1;
      unsigned PWM5MD:1;
      unsigned PWM6MD:1;
} typePMD6BITS;
sfr volatile typePMD6BITS PMD6bits absolute 0x77A;

// backward compatibility for PMD7BITS
    typedef struct tagPMD7BITS {
      unsigned :8;
      unsigned CMP1MD:1;
      unsigned CMP2MD:1;
      unsigned CMP3MD:1;
      unsigned CMP4MD:1;
} typePMD7BITS;
sfr volatile typePMD7BITS PMD7bits absolute 0x77C;

