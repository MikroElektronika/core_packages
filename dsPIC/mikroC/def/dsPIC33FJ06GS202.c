// Definition file for P33FJ06GS202

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

const unsigned long __FLASH_SIZE = 0x00001800;
const unsigned long __XRAM_RAM_SIZE = 0x000001FF;
const unsigned long __XRAM_RAM_START = 0x800;
const unsigned long __YRAM_RAM_SIZE = 0x000001FF;
const unsigned long __YRAM_RAM_START = 0xa00;
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
const unsigned IVT_ADDR_INTERRUPT5           = 0x001E;
const unsigned IVT_ADDR_INTERRUPT6           = 0x0020;
const unsigned IVT_ADDR_T2INTERRUPT          = 0x0022;
const unsigned IVT_ADDR_INTERRUPT8           = 0x0024;
const unsigned IVT_ADDR_SPI1ERRINTERRUPT     = 0x0026;
const unsigned IVT_ADDR_SPI1INTERRUPT        = 0x0028;
const unsigned IVT_ADDR_U1RXINTERRUPT        = 0x002A;
const unsigned IVT_ADDR_U1TXINTERRUPT        = 0x002C;
const unsigned IVT_ADDR_ADCINTERRUPT         = 0x002E;
const unsigned IVT_ADDR_INTERRUPT14          = 0x0030;
const unsigned IVT_ADDR_INTERRUPT15          = 0x0032;
const unsigned IVT_ADDR_SI2C1INTERRUPT       = 0x0034;
const unsigned IVT_ADDR_MI2C1INTERRUPT       = 0x0036;
const unsigned IVT_ADDR_CMP1INTERRUPT        = 0x0038;
const unsigned IVT_ADDR_CNINTERRUPT          = 0x003A;
const unsigned IVT_ADDR_INT1INTERRUPT        = 0x003C;
const unsigned IVT_ADDR_INTERRUPT21          = 0x003E;
const unsigned IVT_ADDR_INTERRUPT22          = 0x0040;
const unsigned IVT_ADDR_INTERRUPT23          = 0x0042;
const unsigned IVT_ADDR_INTERRUPT24          = 0x0044;
const unsigned IVT_ADDR_INTERRUPT25          = 0x0046;
const unsigned IVT_ADDR_INTERRUPT26          = 0x0048;
const unsigned IVT_ADDR_INTERRUPT27          = 0x004A;
const unsigned IVT_ADDR_INTERRUPT28          = 0x004C;
const unsigned IVT_ADDR_INT2INTERRUPT        = 0x004E;
const unsigned IVT_ADDR_INTERRUPT30          = 0x0050;
const unsigned IVT_ADDR_INTERRUPT31          = 0x0052;
const unsigned IVT_ADDR_INTERRUPT32          = 0x0054;
const unsigned IVT_ADDR_INTERRUPT33          = 0x0056;
const unsigned IVT_ADDR_INTERRUPT34          = 0x0058;
const unsigned IVT_ADDR_INTERRUPT35          = 0x005A;
const unsigned IVT_ADDR_INTERRUPT36          = 0x005C;
const unsigned IVT_ADDR_INTERRUPT37          = 0x005E;
const unsigned IVT_ADDR_INTERRUPT38          = 0x0060;
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
const unsigned IVT_ADDR_INTERRUPT49          = 0x0076;
const unsigned IVT_ADDR_INTERRUPT50          = 0x0078;
const unsigned IVT_ADDR_INTERRUPT51          = 0x007A;
const unsigned IVT_ADDR_INTERRUPT52          = 0x007C;
const unsigned IVT_ADDR_INTERRUPT53          = 0x007E;
const unsigned IVT_ADDR_INTERRUPT54          = 0x0080;
const unsigned IVT_ADDR_INTERRUPT55          = 0x0082;
const unsigned IVT_ADDR_INTERRUPT56          = 0x0084;
const unsigned IVT_ADDR_PWMSPEVENTMATCHINTERRUPT = 0x0086;
const unsigned IVT_ADDR_INTERRUPT58          = 0x0088;
const unsigned IVT_ADDR_INTERRUPT59          = 0x008A;
const unsigned IVT_ADDR_INTERRUPT60          = 0x008C;
const unsigned IVT_ADDR_INTERRUPT61          = 0x008E;
const unsigned IVT_ADDR_INTERRUPT62          = 0x0090;
const unsigned IVT_ADDR_INTERRUPT63          = 0x0092;
const unsigned IVT_ADDR_INTERRUPT64          = 0x0094;
const unsigned IVT_ADDR_U1ERRINTERRUPT       = 0x0096;
const unsigned IVT_ADDR_INTERRUPT66          = 0x0098;
const unsigned IVT_ADDR_INTERRUPT67          = 0x009A;
const unsigned IVT_ADDR_INTERRUPT68          = 0x009C;
const unsigned IVT_ADDR_INTERRUPT69          = 0x009E;
const unsigned IVT_ADDR_INTERRUPT70          = 0x00A0;
const unsigned IVT_ADDR_INTERRUPT71          = 0x00A2;
const unsigned IVT_ADDR_INTERRUPT72          = 0x00A4;
const unsigned IVT_ADDR_INTERRUPT73          = 0x00A6;
const unsigned IVT_ADDR_INTERRUPT74          = 0x00A8;
const unsigned IVT_ADDR_INTERRUPT75          = 0x00AA;
const unsigned IVT_ADDR_INTERRUPT76          = 0x00AC;
const unsigned IVT_ADDR_INTERRUPT77          = 0x00AE;
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
const unsigned IVT_ADDR_PWM1INTERRUPT        = 0x00D0;
const unsigned IVT_ADDR_PWM2INTERRUPT        = 0x00D2;
const unsigned IVT_ADDR_INTERRUPT96          = 0x00D4;
const unsigned IVT_ADDR_INTERRUPT97          = 0x00D6;
const unsigned IVT_ADDR_INTERRUPT98          = 0x00D8;
const unsigned IVT_ADDR_INTERRUPT99          = 0x00DA;
const unsigned IVT_ADDR_INTERRUPT100         = 0x00DC;
const unsigned IVT_ADDR_INTERRUPT101         = 0x00DE;
const unsigned IVT_ADDR_INTERRUPT102         = 0x00E0;
const unsigned IVT_ADDR_CMP2INTERRUPT        = 0x00E2;
const unsigned IVT_ADDR_INTERRUPT104         = 0x00E4;
const unsigned IVT_ADDR_INTERRUPT105         = 0x00E6;
const unsigned IVT_ADDR_INTERRUPT106         = 0x00E8;
const unsigned IVT_ADDR_INTERRUPT107         = 0x00EA;
const unsigned IVT_ADDR_INTERRUPT108         = 0x00EC;
const unsigned IVT_ADDR_INTERRUPT109         = 0x00EE;
const unsigned IVT_ADDR_ADCP0INTERRUPT       = 0x00F0;
const unsigned IVT_ADDR_ADCP1INTERRUPT       = 0x00F2;
const unsigned IVT_ADDR_ADCP2INTERRUPT       = 0x00F4;
const unsigned IVT_ADDR_INTERRUPT113         = 0x00F6;
const unsigned IVT_ADDR_INTERRUPT114         = 0x00F8;
const unsigned IVT_ADDR_INTERRUPT115         = 0x00FA;
const unsigned IVT_ADDR_ADCP6INTERRUPT       = 0x00FC;
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
const unsigned AIVT_ADDR_ALTINTERRUPT5        = 0x011E;
const unsigned AIVT_ADDR_ALTINTERRUPT6        = 0x0120;
const unsigned AIVT_ADDR_ALTT2INTERRUPT       = 0x0122;
const unsigned AIVT_ADDR_ALTINTERRUPT8        = 0x0124;
const unsigned AIVT_ADDR_ALTSPI1ERRINTERRUPT  = 0x0126;
const unsigned AIVT_ADDR_ALTSPI1INTERRUPT     = 0x0128;
const unsigned AIVT_ADDR_ALTU1RXINTERRUPT     = 0x012A;
const unsigned AIVT_ADDR_ALTU1TXINTERRUPT     = 0x012C;
const unsigned AIVT_ADDR_ALTADCINTERRUPT      = 0x012E;
const unsigned AIVT_ADDR_ALTINTERRUPT14       = 0x0130;
const unsigned AIVT_ADDR_ALTINTERRUPT15       = 0x0132;
const unsigned AIVT_ADDR_ALTSI2C1INTERRUPT    = 0x0134;
const unsigned AIVT_ADDR_ALTMI2C1INTERRUPT    = 0x0136;
const unsigned AIVT_ADDR_ALTCMP1INTERRUPT     = 0x0138;
const unsigned AIVT_ADDR_ALTCNINTERRUPT       = 0x013A;
const unsigned AIVT_ADDR_ALTINT1INTERRUPT     = 0x013C;
const unsigned AIVT_ADDR_ALTINTERRUPT21       = 0x013E;
const unsigned AIVT_ADDR_ALTINTERRUPT22       = 0x0140;
const unsigned AIVT_ADDR_ALTINTERRUPT23       = 0x0142;
const unsigned AIVT_ADDR_ALTINTERRUPT24       = 0x0144;
const unsigned AIVT_ADDR_ALTINTERRUPT25       = 0x0146;
const unsigned AIVT_ADDR_ALTINTERRUPT26       = 0x0148;
const unsigned AIVT_ADDR_ALTINTERRUPT27       = 0x014A;
const unsigned AIVT_ADDR_ALTINTERRUPT28       = 0x014C;
const unsigned AIVT_ADDR_ALTINT2INTERRUPT     = 0x014E;
const unsigned AIVT_ADDR_ALTINTERRUPT30       = 0x0150;
const unsigned AIVT_ADDR_ALTINTERRUPT31       = 0x0152;
const unsigned AIVT_ADDR_ALTINTERRUPT32       = 0x0154;
const unsigned AIVT_ADDR_ALTINTERRUPT33       = 0x0156;
const unsigned AIVT_ADDR_ALTINTERRUPT34       = 0x0158;
const unsigned AIVT_ADDR_ALTINTERRUPT35       = 0x015A;
const unsigned AIVT_ADDR_ALTINTERRUPT36       = 0x015C;
const unsigned AIVT_ADDR_ALTINTERRUPT37       = 0x015E;
const unsigned AIVT_ADDR_ALTINTERRUPT38       = 0x0160;
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
const unsigned AIVT_ADDR_ALTINTERRUPT49       = 0x0176;
const unsigned AIVT_ADDR_ALTINTERRUPT50       = 0x0178;
const unsigned AIVT_ADDR_ALTINTERRUPT51       = 0x017A;
const unsigned AIVT_ADDR_ALTINTERRUPT52       = 0x017C;
const unsigned AIVT_ADDR_ALTINTERRUPT53       = 0x017E;
const unsigned AIVT_ADDR_ALTINTERRUPT54       = 0x0180;
const unsigned AIVT_ADDR_ALTINTERRUPT55       = 0x0182;
const unsigned AIVT_ADDR_ALTINTERRUPT56       = 0x0184;
const unsigned AIVT_ADDR_ALTPWMSPEVENTMATCHINTERRUPT = 0x0186;
const unsigned AIVT_ADDR_ALTINTERRUPT58       = 0x0188;
const unsigned AIVT_ADDR_ALTINTERRUPT59       = 0x018A;
const unsigned AIVT_ADDR_ALTINTERRUPT60       = 0x018C;
const unsigned AIVT_ADDR_ALTINTERRUPT61       = 0x018E;
const unsigned AIVT_ADDR_ALTINTERRUPT62       = 0x0190;
const unsigned AIVT_ADDR_ALTINTERRUPT63       = 0x0192;
const unsigned AIVT_ADDR_ALTINTERRUPT64       = 0x0194;
const unsigned AIVT_ADDR_ALTU1ERRINTERRUPT    = 0x0196;
const unsigned AIVT_ADDR_ALTINTERRUPT66       = 0x0198;
const unsigned AIVT_ADDR_ALTINTERRUPT67       = 0x019A;
const unsigned AIVT_ADDR_ALTINTERRUPT68       = 0x019C;
const unsigned AIVT_ADDR_ALTINTERRUPT69       = 0x019E;
const unsigned AIVT_ADDR_ALTINTERRUPT70       = 0x01A0;
const unsigned AIVT_ADDR_ALTINTERRUPT71       = 0x01A2;
const unsigned AIVT_ADDR_ALTINTERRUPT72       = 0x01A4;
const unsigned AIVT_ADDR_ALTINTERRUPT73       = 0x01A6;
const unsigned AIVT_ADDR_ALTINTERRUPT74       = 0x01A8;
const unsigned AIVT_ADDR_ALTINTERRUPT75       = 0x01AA;
const unsigned AIVT_ADDR_ALTINTERRUPT76       = 0x01AC;
const unsigned AIVT_ADDR_ALTINTERRUPT77       = 0x01AE;
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
const unsigned AIVT_ADDR_ALTPWM1INTERRUPT     = 0x01D0;
const unsigned AIVT_ADDR_ALTPWM2INTERRUPT     = 0x01D2;
const unsigned AIVT_ADDR_ALTINTERRUPT96       = 0x01D4;
const unsigned AIVT_ADDR_ALTINTERRUPT97       = 0x01D6;
const unsigned AIVT_ADDR_ALTINTERRUPT98       = 0x01D8;
const unsigned AIVT_ADDR_ALTINTERRUPT99       = 0x01DA;
const unsigned AIVT_ADDR_ALTINTERRUPT100      = 0x01DC;
const unsigned AIVT_ADDR_ALTINTERRUPT101      = 0x01DE;
const unsigned AIVT_ADDR_ALTINTERRUPT102      = 0x01E0;
const unsigned AIVT_ADDR_ALTCMP2INTERRUPT     = 0x01E2;
const unsigned AIVT_ADDR_ALTINTERRUPT104      = 0x01E4;
const unsigned AIVT_ADDR_ALTINTERRUPT105      = 0x01E6;
const unsigned AIVT_ADDR_ALTINTERRUPT106      = 0x01E8;
const unsigned AIVT_ADDR_ALTINTERRUPT107      = 0x01EA;
const unsigned AIVT_ADDR_ALTINTERRUPT108      = 0x01EC;
const unsigned AIVT_ADDR_ALTINTERRUPT109      = 0x01EE;
const unsigned AIVT_ADDR_ALTADCP0INTERRUPT    = 0x01F0;
const unsigned AIVT_ADDR_ALTADCP1INTERRUPT    = 0x01F2;
const unsigned AIVT_ADDR_ALTADCP2INTERRUPT    = 0x01F4;
const unsigned AIVT_ADDR_ALTINTERRUPT113      = 0x01F6;
const unsigned AIVT_ADDR_ALTINTERRUPT114      = 0x01F8;
const unsigned AIVT_ADDR_ALTINTERRUPT115      = 0x01FA;
const unsigned AIVT_ADDR_ALTADCP6INTERRUPT    = 0x01FC;
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
sfr unsigned int volatile DFTDATA_INC      absolute 0x07CC;
sfr unsigned int volatile DFTDATA          absolute 0x07CA;
sfr unsigned int volatile DFTADD           absolute 0x07C8;
sfr unsigned int volatile DPCU             absolute 0x078A;
sfr unsigned int volatile DPCL             absolute 0x0788;
sfr unsigned int volatile VISI             absolute 0x0786;
sfr unsigned int volatile FEXU             absolute 0x0784;
sfr unsigned int volatile FEXL             absolute 0x0782;
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
sfr unsigned int volatile CNPU1            absolute 0x0068;
sfr unsigned int volatile INTCON1          absolute 0x0080;
sfr unsigned int volatile INTCON2          absolute 0x0082;
sfr unsigned int volatile IFS0             absolute 0x0084;
sfr unsigned int volatile IFS1             absolute 0x0086;
sfr unsigned int volatile IFS3             absolute 0x008A;
sfr unsigned int volatile IFS4             absolute 0x008C;
sfr unsigned int volatile IFS5             absolute 0x008E;
sfr unsigned int volatile IFS6             absolute 0x0090;
sfr unsigned int volatile IFS7             absolute 0x0092;
sfr unsigned int          IEC0             absolute 0x0094;
sfr unsigned int          IEC1             absolute 0x0096;
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
sfr unsigned int          IPC7             absolute 0x00B2;
sfr unsigned int          IPC14            absolute 0x00C0;
sfr unsigned int          IPC16            absolute 0x00C4;
sfr unsigned int          IPC23            absolute 0x00D2;
sfr unsigned int volatile IPC25            absolute 0x00D6;
sfr unsigned int volatile IPC27            absolute 0x00DA;
sfr unsigned int volatile IPC28            absolute 0x00DC;
sfr unsigned int volatile IPC29            absolute 0x00DE;
sfr unsigned int volatile INTTREG          absolute 0x00E0;
sfr unsigned int volatile TMR1             absolute 0x0100;
sfr unsigned int volatile PR1              absolute 0x0102;
sfr unsigned int volatile T1CON            absolute 0x0104;
sfr unsigned int volatile TMR2             absolute 0x0106;
sfr unsigned int volatile PR2              absolute 0x010C;
sfr unsigned int volatile T2CON            absolute 0x0110;
sfr unsigned int volatile IC1BUF           absolute 0x0140;
sfr unsigned int volatile IC1CON           absolute 0x0142;
sfr unsigned int          OC1RS            absolute 0x0180;
sfr unsigned int volatile OC1R             absolute 0x0182;
sfr unsigned int volatile OC1CON           absolute 0x0184;
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
sfr unsigned int volatile U1MODE           absolute 0x0220;
sfr unsigned int volatile U1STA            absolute 0x0222;
sfr unsigned int          U1TXREG          absolute 0x0224;
sfr unsigned int volatile U1RXREG          absolute 0x0226;
sfr unsigned int          U1BRG            absolute 0x0228;
sfr unsigned int volatile SPI1STAT         absolute 0x0240;
sfr unsigned int volatile SPI1CON1         absolute 0x0242;
sfr unsigned int volatile SPI1CON          absolute 0x0242;
sfr unsigned int volatile SPI1CON2         absolute 0x0244;
sfr unsigned int volatile SPI1BUF          absolute 0x0248;
sfr unsigned int volatile TRISA            absolute 0x02C0;
sfr unsigned int volatile PORTA            absolute 0x02C2;
sfr unsigned int volatile LATA             absolute 0x02C4;
sfr unsigned int volatile ODCA             absolute 0x02C6;
sfr unsigned int volatile TRISB            absolute 0x02C8;
sfr unsigned int volatile PORTB            absolute 0x02CA;
sfr unsigned int volatile LATB             absolute 0x02CC;
sfr unsigned int volatile ODCB             absolute 0x02CE;
sfr unsigned int volatile ADCON            absolute 0x0300;
sfr unsigned int volatile ADPCFG           absolute 0x0302;
sfr unsigned int volatile ADSTAT           absolute 0x0306;
sfr unsigned int volatile ADBASE           absolute 0x0308;
sfr unsigned int volatile ADCPC0           absolute 0x030A;
sfr unsigned int volatile ADCPC1           absolute 0x030C;
sfr unsigned int volatile ADCPC3           absolute 0x0310;
sfr unsigned int volatile ADCBUF0          absolute 0x0320;
sfr unsigned int volatile ADCBUF1          absolute 0x0322;
sfr unsigned int volatile ADCBUF2          absolute 0x0324;
sfr unsigned int volatile ADCBUF3          absolute 0x0326;
sfr unsigned int volatile ADCBUF4          absolute 0x0328;
sfr unsigned int volatile ADCBUF5          absolute 0x032A;
sfr unsigned int volatile ADCBUF12         absolute 0x0338;
sfr unsigned int volatile ADCBUF13         absolute 0x033A;
sfr unsigned int          PTCON            absolute 0x0400;
sfr unsigned int volatile PTCON2           absolute 0x0402;
sfr unsigned int volatile PTPER            absolute 0x0404;
sfr unsigned int volatile SEVTCMP          absolute 0x0406;
sfr unsigned int volatile MDC              absolute 0x040A;
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
sfr unsigned int volatile CMPCON1          absolute 0x0540;
sfr unsigned int volatile CMPDAC1          absolute 0x0542;
sfr unsigned int volatile CMPCON2          absolute 0x0544;
sfr unsigned int volatile CMPDAC2          absolute 0x0546;
sfr unsigned int          RPINR0           absolute 0x0680;
sfr unsigned int          RPINR1           absolute 0x0682;
sfr unsigned int          RPINR2           absolute 0x0684;
sfr unsigned int          RPINR3           absolute 0x0686;
sfr unsigned int          RPINR7           absolute 0x068E;
sfr unsigned int          RPINR11          absolute 0x0696;
sfr unsigned int          RPINR18          absolute 0x06A4;
sfr unsigned int          RPINR20          absolute 0x06A8;
sfr unsigned int          RPINR21          absolute 0x06AA;
sfr unsigned int          RPINR29          absolute 0x06BA;
sfr unsigned int volatile RPINR30          absolute 0x06BC;
sfr unsigned int volatile RPINR31          absolute 0x06BE;
sfr unsigned int volatile RPINR32          absolute 0x06C0;
sfr unsigned int volatile RPINR33          absolute 0x06C2;
sfr unsigned int volatile RPINR34          absolute 0x06C4;
sfr unsigned int          RPOR0            absolute 0x06D0;
sfr unsigned int          RPOR1            absolute 0x06D2;
sfr unsigned int          RPOR2            absolute 0x06D4;
sfr unsigned int          RPOR3            absolute 0x06D6;
sfr unsigned int          RPOR4            absolute 0x06D8;
sfr unsigned int          RPOR5            absolute 0x06DA;
sfr unsigned int          RPOR6            absolute 0x06DC;
sfr unsigned int          RPOR7            absolute 0x06DE;
sfr unsigned int volatile RPOR16           absolute 0x06F0;
sfr unsigned int volatile RPOR17           absolute 0x06F2;
sfr unsigned int          RCON             absolute 0x0740;
sfr unsigned int volatile OSCCON           absolute 0x0742;
sfr unsigned int volatile OSCCONL          absolute 0x0742;
sfr unsigned short volatile OSCCONH          absolute 0x0743;
sfr unsigned int volatile CLKDIV           absolute 0x0744;
sfr unsigned int volatile PLLFBD           absolute 0x0746;
sfr unsigned int volatile OSCTUN           absolute 0x0748;
sfr unsigned int volatile LFSR             absolute 0x074C;
sfr unsigned int          REFOCON          absolute 0x074E;
sfr unsigned int volatile ACLKCON          absolute 0x0750;
sfr unsigned int volatile NVMCON           absolute 0x0760;
sfr unsigned int          NVMKEY           absolute 0x0766;
sfr unsigned int          PMD1             absolute 0x0770;
sfr unsigned int          PMD2             absolute 0x0772;
sfr unsigned int          PMD3             absolute 0x0774;
sfr unsigned int volatile PMD4             absolute 0x0778;
sfr unsigned int volatile PMD6             absolute 0x077C;
sfr unsigned int volatile PMD7             absolute 0x077E;

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
    const register unsigned short int T2IF = 7;
    sbit  T2IF_bit at IFS0.B7;
    const register unsigned short int T1IF = 3;
    sbit  T1IF_bit at IFS0.B3;
    const register unsigned short int OC1IF = 2;
    sbit  OC1IF_bit at IFS0.B2;
    const register unsigned short int IC1IF = 1;
    sbit  IC1IF_bit at IFS0.B1;
    const register unsigned short int INT0IF = 0;
    sbit  INT0IF_bit at IFS0.B0;

    // IFS1 bits
    const register unsigned short int INT2IF = 13;
    sbit  INT2IF_bit at IFS1.B13;
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

    // IFS3 bits
    const register unsigned short int PSEMIF = 9;
    sbit  PSEMIF_bit at IFS3.B9;

    // IFS4 bits
    const register unsigned short int U1EIF = 1;
    sbit  U1EIF_bit at IFS4.B1;

    // IFS5 bits
    const register unsigned short int PWM2IF = 15;
    sbit  PWM2IF_bit at IFS5.B15;
    const register unsigned short int PWM1IF = 14;
    sbit  PWM1IF_bit at IFS5.B14;

    // IFS6 bits
    const register unsigned short int ADCP1IF = 15;
    sbit  ADCP1IF_bit at IFS6.B15;
    const register unsigned short int ADCP0IF = 14;
    sbit  ADCP0IF_bit at IFS6.B14;
    const register unsigned short int AC2IF = 7;
    sbit  AC2IF_bit at IFS6.B7;

    // IFS7 bits
    const register unsigned short int ADCP6IF = 4;
    sbit  ADCP6IF_bit at IFS7.B4;
    const register unsigned short int ADCP2IF = 0;
    sbit  ADCP2IF_bit at IFS7.B0;

    // IEC0 bits
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
    const register unsigned short int T2IE = 7;
    sbit  T2IE_bit at IEC0.B7;
    const register unsigned short int T1IE = 3;
    sbit  T1IE_bit at IEC0.B3;
    const register unsigned short int OC1IE = 2;
    sbit  OC1IE_bit at IEC0.B2;
    const register unsigned short int IC1IE = 1;
    sbit  IC1IE_bit at IEC0.B1;
    const register unsigned short int INT0IE = 0;
    sbit  INT0IE_bit at IEC0.B0;

    // IEC1 bits
    const register unsigned short int INT2IE = 13;
    sbit  INT2IE_bit at IEC1.B13;
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

    // IEC3 bits
    const register unsigned short int PSEMIE = 9;
    sbit  PSEMIE_bit at IEC3.B9;

    // IEC4 bits
    const register unsigned short int U1EIE = 1;
    sbit  U1EIE_bit at IEC4.B1;

    // IEC5 bits
    const register unsigned short int PWM2IE = 15;
    sbit  PWM2IE_bit at IEC5.B15;
    const register unsigned short int PWM1IE = 14;
    sbit  PWM1IE_bit at IEC5.B14;

    // IEC6 bits
    const register unsigned short int ADCP1IE = 15;
    sbit  ADCP1IE_bit at IEC6.B15;
    const register unsigned short int ADCP0IE = 14;
    sbit  ADCP0IE_bit at IEC6.B14;
    const register unsigned short int AC2IE = 7;
    sbit  AC2IE_bit at IEC6.B7;

    // IEC7 bits
    const register unsigned short int ADCP6IE = 4;
    sbit  ADCP6IE_bit at IEC7.B4;
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

    // IPC3 bits
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

    // IPC7 bits
    const register unsigned short int INT2IP_2 = 6;
    const register unsigned short int INT2IP2 = 6;
    sbit  INT2IP_2_bit at IPC7.B6;
    const register unsigned short int INT2IP_1 = 5;
    const register unsigned short int INT2IP1= 5;
    sbit  INT2IP_1_bit at IPC7.B5;
    const register unsigned short int INT2IP_0 = 4;
    const register unsigned short int INT2IP0= 4;
    sbit  INT2IP_0_bit at IPC7.B4;

    // IPC14 bits
    const register unsigned short int PSEMIP_2 = 6;
    sbit  PSEMIP_2_bit at IPC14.B6;
    const register unsigned short int PSEMIP_1 = 5;
    sbit  PSEMIP_1_bit at IPC14.B5;
    const register unsigned short int PSEMIP_0 = 4;
    sbit  PSEMIP_0_bit at IPC14.B4;

    // IPC16 bits
    const register unsigned short int U1EIP_2 = 6;
    sbit  U1EIP_2_bit at IPC16.B6;
    const register unsigned short int U1EIP_1 = 5;
    sbit  U1EIP_1_bit at IPC16.B5;
    const register unsigned short int U1EIP_0 = 4;
    sbit  U1EIP_0_bit at IPC16.B4;

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

    // IPC25 bits
    const register unsigned short int AC2IP_2 = 14;
    sbit  AC2IP_2_bit at IPC25.B14;
    const register unsigned short int AC2IP_1 = 13;
    sbit  AC2IP_1_bit at IPC25.B13;
    const register unsigned short int AC2IP_0 = 12;
    sbit  AC2IP_0_bit at IPC25.B12;

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
    const register unsigned short int ADCP2IP_2 = 2;
    sbit  ADCP2IP_2_bit at IPC28.B2;
    const register unsigned short int ADCP2IP_1 = 1;
    sbit  ADCP2IP_1_bit at IPC28.B1;
    const register unsigned short int ADCP2IP_0 = 0;
    sbit  ADCP2IP_0_bit at IPC28.B0;

    // IPC29 bits
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

    // T2CON bits
    sbit  TON_T2CON_bit at T2CON.B15;
    sbit  TSIDL_T2CON_bit at T2CON.B13;
    sbit  TGATE_T2CON_bit at T2CON.B6;
    sbit  TCKPS_1_T2CON_bit at T2CON.B5;
    sbit  TCKPS_0_T2CON_bit at T2CON.B4;
    sbit  TCS_T2CON_bit at T2CON.B1;

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
    const register unsigned short int ICTMR = 7;
    sbit  ICTMR_bit at IC1CON.B7;
    const register unsigned short int ICI_1 = 6;
    sbit  ICI_1_bit at IC1CON.B6;
    const register unsigned short int ICI_0 = 5;
    sbit  ICI_0_bit at IC1CON.B5;
    const register unsigned short int ICOV = 4;
    sbit  ICOV_bit at IC1CON.B4;
    const register unsigned short int ICBNE = 3;
    sbit  ICBNE_bit at IC1CON.B3;
    const register unsigned short int ICM_2 = 2;
    sbit  ICM_2_bit at IC1CON.B2;
    const register unsigned short int ICM_1 = 1;
    sbit  ICM_1_bit at IC1CON.B1;
    const register unsigned short int ICM_0 = 0;
    sbit  ICM_0_bit at IC1CON.B0;

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
    const register unsigned short int OCFLT = 4;
    sbit  OCFLT_bit at OC1CON.B4;
    const register unsigned short int OCTSEL = 3;
    sbit  OCTSEL_bit at OC1CON.B3;
    const register unsigned short int OCM_2 = 2;
    sbit  OCM_2_bit at OC1CON.B2;
    const register unsigned short int OCM_1 = 1;
    sbit  OCM_1_bit at OC1CON.B1;
    const register unsigned short int OCM_0 = 0;
    sbit  OCM_0_bit at OC1CON.B0;

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
    const register unsigned short int I2CSIDL = 13;
    sbit  I2CSIDL_bit at I2C1CON.B13;
    const register unsigned short int SCLREL = 12;
    sbit  SCLREL_bit at I2C1CON.B12;
    const register unsigned short int IPMIEN = 11;
    sbit  IPMIEN_bit at I2C1CON.B11;
    const register unsigned short int A10M = 10;
    sbit  A10M_bit at I2C1CON.B10;
    const register unsigned short int DISSLW = 9;
    sbit  DISSLW_bit at I2C1CON.B9;
    const register unsigned short int SMEN = 8;
    sbit  SMEN_bit at I2C1CON.B8;
    const register unsigned short int GCEN = 7;
    sbit  GCEN_bit at I2C1CON.B7;
    const register unsigned short int STREN = 6;
    sbit  STREN_bit at I2C1CON.B6;
    const register unsigned short int ACKDT = 5;
    sbit  ACKDT_bit at I2C1CON.B5;
    const register unsigned short int ACKEN = 4;
    sbit  ACKEN_bit at I2C1CON.B4;
    const register unsigned short int RCEN = 3;
    sbit  RCEN_bit at I2C1CON.B3;
    const register unsigned short int PEN = 2;
    sbit  PEN_bit at I2C1CON.B2;
    const register unsigned short int RSEN = 1;
    sbit  RSEN_bit at I2C1CON.B1;
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at I2C1CON.B0;

    // I2C1STAT bits
    const register unsigned short int ACKSTAT = 15;
    sbit  ACKSTAT_bit at I2C1STAT.B15;
    const register unsigned short int TRSTAT = 14;
    sbit  TRSTAT_bit at I2C1STAT.B14;
    const register unsigned short int BCL = 10;
    sbit  BCL_bit at I2C1STAT.B10;
    const register unsigned short int GCSTAT = 9;
    sbit  GCSTAT_bit at I2C1STAT.B9;
    const register unsigned short int ADD10 = 8;
    sbit  ADD10_bit at I2C1STAT.B8;
    const register unsigned short int IWCOL = 7;
    sbit  IWCOL_bit at I2C1STAT.B7;
    const register unsigned short int I2COV = 6;
    sbit  I2COV_bit at I2C1STAT.B6;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at I2C1STAT.B5;
    const register unsigned short int P = 4;
    sbit  P_bit at I2C1STAT.B4;
    const register unsigned short int S = 3;
    sbit  S_bit at I2C1STAT.B3;
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at I2C1STAT.B2;
    const register unsigned short int RBF = 1;
    sbit  RBF_bit at I2C1STAT.B1;
    const register unsigned short int TBF = 0;
    sbit  TBF_bit at I2C1STAT.B0;

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
    const register unsigned short int AMSK_8 = 8;
    sbit  AMSK_8_bit at I2C1MSK.B8;
    const register unsigned short int AMSK_7 = 7;
    sbit  AMSK_7_bit at I2C1MSK.B7;
    const register unsigned short int AMSK_6 = 6;
    sbit  AMSK_6_bit at I2C1MSK.B6;
    const register unsigned short int AMSK_5 = 5;
    sbit  AMSK_5_bit at I2C1MSK.B5;
    const register unsigned short int AMSK_4 = 4;
    sbit  AMSK_4_bit at I2C1MSK.B4;
    const register unsigned short int AMSK_3 = 3;
    sbit  AMSK_3_bit at I2C1MSK.B3;
    const register unsigned short int AMSK_2 = 2;
    sbit  AMSK_2_bit at I2C1MSK.B2;
    const register unsigned short int AMSK_1 = 1;
    sbit  AMSK_1_bit at I2C1MSK.B1;
    const register unsigned short int AMSK_0 = 0;
    sbit  AMSK_0_bit at I2C1MSK.B0;

    // U1MODE bits
    const register unsigned short int UARTEN = 15;
    sbit  UARTEN_bit at U1MODE.B15;
    const register unsigned short int USIDL = 13;
    sbit  USIDL_bit at U1MODE.B13;
    const register unsigned short int IREN = 12;
    sbit  IREN_bit at U1MODE.B12;
    const register unsigned short int RTSMD = 11;
    sbit  RTSMD_bit at U1MODE.B11;
    const register unsigned short int UEN_1 = 9;
    sbit  UEN_1_bit at U1MODE.B9;
    const register unsigned short int UEN_0 = 8;
    sbit  UEN_0_bit at U1MODE.B8;
    const register unsigned short int WAKE = 7;
    sbit  WAKE_bit at U1MODE.B7;
    const register unsigned short int LPBACK = 6;
    sbit  LPBACK_bit at U1MODE.B6;
    const register unsigned short int ABAUD = 5;
    sbit  ABAUD_bit at U1MODE.B5;
    const register unsigned short int URXINV = 4;
    sbit  URXINV_bit at U1MODE.B4;
    const register unsigned short int BRGH = 3;
    sbit  BRGH_bit at U1MODE.B3;
    const register unsigned short int PDSEL_1 = 2;
    sbit  PDSEL_1_bit at U1MODE.B2;
    const register unsigned short int PDSEL_0 = 1;
    sbit  PDSEL_0_bit at U1MODE.B1;
    const register unsigned short int STSEL = 0;
    sbit  STSEL_bit at U1MODE.B0;

    // U1STA bits
    const register unsigned short int UTXISEL1 = 15;
    sbit  UTXISEL1_bit at U1STA.B15;
    const register unsigned short int UTXINV = 14;
    sbit  UTXINV_bit at U1STA.B14;
    const register unsigned short int UTXISEL0 = 13;
    sbit  UTXISEL0_bit at U1STA.B13;
    const register unsigned short int UTXBRK = 11;
    sbit  UTXBRK_bit at U1STA.B11;
    const register unsigned short int UTXEN = 10;
    sbit  UTXEN_bit at U1STA.B10;
    const register unsigned short int UTXBF = 9;
    sbit  UTXBF_bit at U1STA.B9;
    const register unsigned short int TRMT = 8;
    sbit  TRMT_bit at U1STA.B8;
    const register unsigned short int URXISEL_1 = 7;
    sbit  URXISEL_1_bit at U1STA.B7;
    const register unsigned short int URXISEL_0 = 6;
    sbit  URXISEL_0_bit at U1STA.B6;
    const register unsigned short int ADDEN = 5;
    sbit  ADDEN_bit at U1STA.B5;
    const register unsigned short int RIDLE = 4;
    sbit  RIDLE_bit at U1STA.B4;
    const register unsigned short int PERR = 3;
    sbit  PERR_bit at U1STA.B3;
    const register unsigned short int FERR = 2;
    sbit  FERR_bit at U1STA.B2;
    const register unsigned short int OERR = 1;
    sbit  OERR_bit at U1STA.B1;
    const register unsigned short int URXDA = 0;
    sbit  URXDA_bit at U1STA.B0;

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
    const register unsigned short int BRG_14 = 14;
    sbit  BRG_14_bit at U1BRG.B14;
    const register unsigned short int BRG_13 = 13;
    sbit  BRG_13_bit at U1BRG.B13;
    const register unsigned short int BRG_12 = 12;
    sbit  BRG_12_bit at U1BRG.B12;
    const register unsigned short int BRG_11 = 11;
    sbit  BRG_11_bit at U1BRG.B11;
    const register unsigned short int BRG_10 = 10;
    sbit  BRG_10_bit at U1BRG.B10;
    const register unsigned short int BRG_9 = 9;
    sbit  BRG_9_bit at U1BRG.B9;
    const register unsigned short int BRG_8 = 8;
    sbit  BRG_8_bit at U1BRG.B8;
    const register unsigned short int BRG_7 = 7;
    sbit  BRG_7_bit at U1BRG.B7;
    const register unsigned short int BRG_6 = 6;
    sbit  BRG_6_bit at U1BRG.B6;
    const register unsigned short int BRG_5 = 5;
    sbit  BRG_5_bit at U1BRG.B5;
    const register unsigned short int BRG_4 = 4;
    sbit  BRG_4_bit at U1BRG.B4;
    const register unsigned short int BRG_3 = 3;
    sbit  BRG_3_bit at U1BRG.B3;
    const register unsigned short int BRG_2 = 2;
    sbit  BRG_2_bit at U1BRG.B2;
    const register unsigned short int BRG_1 = 1;
    sbit  BRG_1_bit at U1BRG.B1;
    const register unsigned short int BRG_0 = 0;
    sbit  BRG_0_bit at U1BRG.B0;

    // SPI1STAT bits
    const register unsigned short int SPIEN = 15;
    sbit  SPIEN_bit at SPI1STAT.B15;
    const register unsigned short int SPISIDL = 13;
    sbit  SPISIDL_bit at SPI1STAT.B13;
    const register unsigned short int SPIROV = 6;
    sbit  SPIROV_bit at SPI1STAT.B6;
    const register unsigned short int SPITBF = 1;
    sbit  SPITBF_bit at SPI1STAT.B1;
    const register unsigned short int SPIRBF = 0;
    sbit  SPIRBF_bit at SPI1STAT.B0;

    // SPI1CON1 bits
    const register unsigned short int DISSCK = 12;
    sbit  DISSCK_bit at SPI1CON1.B12;
    const register unsigned short int DISSDO = 11;
    sbit  DISSDO_bit at SPI1CON1.B11;
    const register unsigned short int MODE16 = 10;
    sbit  MODE16_bit at SPI1CON1.B10;
    const register unsigned short int SMP = 9;
    sbit  SMP_bit at SPI1CON1.B9;
    const register unsigned short int CKE = 8;
    sbit  CKE_bit at SPI1CON1.B8;
    const register unsigned short int SSEN = 7;
    sbit  SSEN_bit at SPI1CON1.B7;
    const register unsigned short int CKP = 6;
    sbit  CKP_bit at SPI1CON1.B6;
    const register unsigned short int MSTEN = 5;
    sbit  MSTEN_bit at SPI1CON1.B5;
    const register unsigned short int SPRE_2 = 4;
    sbit  SPRE_2_bit at SPI1CON1.B4;
    const register unsigned short int SPRE_1 = 3;
    sbit  SPRE_1_bit at SPI1CON1.B3;
    const register unsigned short int SPRE_0 = 2;
    sbit  SPRE_0_bit at SPI1CON1.B2;
    const register unsigned short int PPRE_1 = 1;
    sbit  PPRE_1_bit at SPI1CON1.B1;
    const register unsigned short int PPRE_0 = 0;
    sbit  PPRE_0_bit at SPI1CON1.B0;

    // SPI1CON2 bits
    const register unsigned short int FRMEN = 15;
    sbit  FRMEN_bit at SPI1CON2.B15;
    const register unsigned short int SPIFSD = 14;
    sbit  SPIFSD_bit at SPI1CON2.B14;
    const register unsigned short int FRMPOL = 13;
    sbit  FRMPOL_bit at SPI1CON2.B13;
    const register unsigned short int FRMDLY = 1;
    sbit  FRMDLY_bit at SPI1CON2.B1;

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
    const register unsigned short int ODCA4 = 4;
    sbit  ODCA4_bit at ODCA.B4;
    const register unsigned short int ODCA3 = 3;
    sbit  ODCA3_bit at ODCA.B3;
    const register unsigned short int ODCA2 = 2;
    sbit  ODCA2_bit at ODCA.B2;
    const register unsigned short int ODCA1 = 1;
    sbit  ODCA1_bit at ODCA.B1;
    const register unsigned short int ODCA0 = 0;
    sbit  ODCA0_bit at ODCA.B0;

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
    const register unsigned short int ODCB15 = 15;
    sbit  ODCB15_bit at ODCB.B15;
    const register unsigned short int ODCB14 = 14;
    sbit  ODCB14_bit at ODCB.B14;
    const register unsigned short int ODCB13 = 13;
    sbit  ODCB13_bit at ODCB.B13;
    const register unsigned short int ODCB12 = 12;
    sbit  ODCB12_bit at ODCB.B12;
    const register unsigned short int ODCB11 = 11;
    sbit  ODCB11_bit at ODCB.B11;
    const register unsigned short int ODCB10 = 10;
    sbit  ODCB10_bit at ODCB.B10;
    const register unsigned short int ODCB9 = 9;
    sbit  ODCB9_bit at ODCB.B9;
    const register unsigned short int ODCB8 = 8;
    sbit  ODCB8_bit at ODCB.B8;
    const register unsigned short int ODCB7 = 7;
    sbit  ODCB7_bit at ODCB.B7;
    const register unsigned short int ODCB6 = 6;
    sbit  ODCB6_bit at ODCB.B6;
    const register unsigned short int ODCB5 = 5;
    sbit  ODCB5_bit at ODCB.B5;
    const register unsigned short int ODCB4 = 4;
    sbit  ODCB4_bit at ODCB.B4;
    const register unsigned short int ODCB3 = 3;
    sbit  ODCB3_bit at ODCB.B3;
    const register unsigned short int ODCB2 = 2;
    sbit  ODCB2_bit at ODCB.B2;
    const register unsigned short int ODCB1 = 1;
    sbit  ODCB1_bit at ODCB.B1;
    const register unsigned short int ODCB0 = 0;
    sbit  ODCB0_bit at ODCB.B0;

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
    const register unsigned short int P6RDY = 6;
    sbit  P6RDY_bit at ADSTAT.B6;
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

    // ADCPC3 bits
    const register unsigned short int IRQEN6 = 7;
    sbit  IRQEN6_bit at ADCPC3.B7;
    const register unsigned short int PEND6 = 6;
    sbit  PEND6_bit at ADCPC3.B6;
    const register unsigned short int SWTRG6 = 5;
    sbit  SWTRG6_bit at ADCPC3.B5;
    const register unsigned short int TRGSRC6_4 = 4;
    sbit  TRGSRC6_4_bit at ADCPC3.B4;
    const register unsigned short int TRGSRC6_3 = 3;
    sbit  TRGSRC6_3_bit at ADCPC3.B3;
    const register unsigned short int TRGSRC6_2 = 2;
    sbit  TRGSRC6_2_bit at ADCPC3.B2;
    const register unsigned short int TRGSRC6_1 = 1;
    sbit  TRGSRC6_1_bit at ADCPC3.B1;
    const register unsigned short int TRGSRC6_0 = 0;
    sbit  TRGSRC6_0_bit at ADCPC3.B0;

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

    // PTCON bits
    const register unsigned short int PTEN = 15;
    sbit  PTEN_bit at PTCON.B15;
    const register unsigned short int PTSIDL = 13;
    sbit  PTSIDL_bit at PTCON.B13;
    const register unsigned short int SESTAT = 12;
    sbit  SESTAT_bit at PTCON.B12;
    const register unsigned short int SEIEN = 11;
    sbit  SEIEN_bit at PTCON.B11;
    const register unsigned short int EIPU = 10;
    sbit  EIPU_bit at PTCON.B10;
    const register unsigned short int SYNCPOL = 9;
    sbit  SYNCPOL_bit at PTCON.B9;
    const register unsigned short int SYNCOEN = 8;
    sbit  SYNCOEN_bit at PTCON.B8;
    const register unsigned short int SYNCEN = 7;
    sbit  SYNCEN_bit at PTCON.B7;
    const register unsigned short int SYNCSRC_1 = 5;
    sbit  SYNCSRC_1_bit at PTCON.B5;
    const register unsigned short int SYNCSRC_0 = 4;
    sbit  SYNCSRC_0_bit at PTCON.B4;
    const register unsigned short int SEVTPS_3 = 3;
    sbit  SEVTPS_3_bit at PTCON.B3;
    const register unsigned short int SEVTPS_2 = 2;
    sbit  SEVTPS_2_bit at PTCON.B2;
    const register unsigned short int SEVTPS_1 = 1;
    sbit  SEVTPS_1_bit at PTCON.B1;
    const register unsigned short int SEVTPS_0 = 0;
    sbit  SEVTPS_0_bit at PTCON.B0;

    // PTCON2 bits
    const register unsigned short int PCLKDIV_2 = 2;
    sbit  PCLKDIV_2_bit at PTCON2.B2;
    const register unsigned short int PCLKDIV_1 = 1;
    sbit  PCLKDIV_1_bit at PTCON2.B1;
    const register unsigned short int PCLKDIV_0 = 0;
    sbit  PCLKDIV_0_bit at PTCON2.B0;

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
    const register unsigned short int LEB_6 = 9;
    sbit  LEB_6_bit at LEBCON1.B9;
    sbit  LEB_6_LEBCON1_bit at LEBCON1.B9;
    const register unsigned short int LEB_5 = 8;
    sbit  LEB_5_bit at LEBCON1.B8;
    sbit  LEB_5_LEBCON1_bit at LEBCON1.B8;
    const register unsigned short int LEB_4 = 7;
    sbit  LEB_4_bit at LEBCON1.B7;
    sbit  LEB_4_LEBCON1_bit at LEBCON1.B7;
    const register unsigned short int LEB_3 = 6;
    sbit  LEB_3_bit at LEBCON1.B6;
    sbit  LEB_3_LEBCON1_bit at LEBCON1.B6;
    const register unsigned short int LEB_2 = 5;
    sbit  LEB_2_bit at LEBCON1.B5;
    sbit  LEB_2_LEBCON1_bit at LEBCON1.B5;
    const register unsigned short int LEB_1 = 4;
    sbit  LEB_1_bit at LEBCON1.B4;
    sbit  LEB_1_LEBCON1_bit at LEBCON1.B4;
    const register unsigned short int LEB_0 = 3;
    sbit  LEB_0_bit at LEBCON1.B3;
    sbit  LEB_0_LEBCON1_bit at LEBCON1.B3;

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
    sbit  LEB_6_LEBCON2_bit at LEBCON2.B9;
    sbit  LEB_5_LEBCON2_bit at LEBCON2.B8;
    sbit  LEB_4_LEBCON2_bit at LEBCON2.B7;
    sbit  LEB_3_LEBCON2_bit at LEBCON2.B6;
    sbit  LEB_2_LEBCON2_bit at LEBCON2.B5;
    sbit  LEB_1_LEBCON2_bit at LEBCON2.B4;
    sbit  LEB_0_LEBCON2_bit at LEBCON2.B3;

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

    // RPINR3 bits
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

    // RPINR7 bits
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

    // RPINR11 bits
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

    // RPINR29 bits
    const register unsigned short int FLT1R_5 = 13;
    sbit  FLT1R_5_bit at RPINR29.B13;
    const register unsigned short int FLT1R_4 = 12;
    sbit  FLT1R_4_bit at RPINR29.B12;
    const register unsigned short int FLT1R_3 = 11;
    sbit  FLT1R_3_bit at RPINR29.B11;
    const register unsigned short int FLT1R_2 = 10;
    sbit  FLT1R_2_bit at RPINR29.B10;
    const register unsigned short int FLT1R_1 = 9;
    sbit  FLT1R_1_bit at RPINR29.B9;
    const register unsigned short int FLT1R_0 = 8;
    sbit  FLT1R_0_bit at RPINR29.B8;

    // RPINR30 bits
    const register unsigned short int FLT3R_5 = 13;
    sbit  FLT3R_5_bit at RPINR30.B13;
    const register unsigned short int FLT3R_4 = 12;
    sbit  FLT3R_4_bit at RPINR30.B12;
    const register unsigned short int FLT3R_3 = 11;
    sbit  FLT3R_3_bit at RPINR30.B11;
    const register unsigned short int FLT3R_2 = 10;
    sbit  FLT3R_2_bit at RPINR30.B10;
    const register unsigned short int FLT3R_1 = 9;
    sbit  FLT3R_1_bit at RPINR30.B9;
    const register unsigned short int FLT3R_0 = 8;
    sbit  FLT3R_0_bit at RPINR30.B8;
    const register unsigned short int FLT2R_5 = 5;
    sbit  FLT2R_5_bit at RPINR30.B5;
    const register unsigned short int FLT2R_4 = 4;
    sbit  FLT2R_4_bit at RPINR30.B4;
    const register unsigned short int FLT2R_3 = 3;
    sbit  FLT2R_3_bit at RPINR30.B3;
    const register unsigned short int FLT2R_2 = 2;
    sbit  FLT2R_2_bit at RPINR30.B2;
    const register unsigned short int FLT2R_1 = 1;
    sbit  FLT2R_1_bit at RPINR30.B1;
    const register unsigned short int FLT2R_0 = 0;
    sbit  FLT2R_0_bit at RPINR30.B0;

    // RPINR31 bits
    const register unsigned short int FLT5R_5 = 13;
    sbit  FLT5R_5_bit at RPINR31.B13;
    const register unsigned short int FLT5R_4 = 12;
    sbit  FLT5R_4_bit at RPINR31.B12;
    const register unsigned short int FLT5R_3 = 11;
    sbit  FLT5R_3_bit at RPINR31.B11;
    const register unsigned short int FLT5R_2 = 10;
    sbit  FLT5R_2_bit at RPINR31.B10;
    const register unsigned short int FLT5R_1 = 9;
    sbit  FLT5R_1_bit at RPINR31.B9;
    const register unsigned short int FLT5R_0 = 8;
    sbit  FLT5R_0_bit at RPINR31.B8;
    const register unsigned short int FLT4R_5 = 5;
    sbit  FLT4R_5_bit at RPINR31.B5;
    const register unsigned short int FLT4R_4 = 4;
    sbit  FLT4R_4_bit at RPINR31.B4;
    const register unsigned short int FLT4R_3 = 3;
    sbit  FLT4R_3_bit at RPINR31.B3;
    const register unsigned short int FLT4R_2 = 2;
    sbit  FLT4R_2_bit at RPINR31.B2;
    const register unsigned short int FLT4R_1 = 1;
    sbit  FLT4R_1_bit at RPINR31.B1;
    const register unsigned short int FLT4R_0 = 0;
    sbit  FLT4R_0_bit at RPINR31.B0;

    // RPINR32 bits
    const register unsigned short int FLT7R_5 = 13;
    sbit  FLT7R_5_bit at RPINR32.B13;
    const register unsigned short int FLT7R_4 = 12;
    sbit  FLT7R_4_bit at RPINR32.B12;
    const register unsigned short int FLT7R_3 = 11;
    sbit  FLT7R_3_bit at RPINR32.B11;
    const register unsigned short int FLT7R_2 = 10;
    sbit  FLT7R_2_bit at RPINR32.B10;
    const register unsigned short int FLT7R_1 = 9;
    sbit  FLT7R_1_bit at RPINR32.B9;
    const register unsigned short int FLT7R_0 = 8;
    sbit  FLT7R_0_bit at RPINR32.B8;
    const register unsigned short int FLT6R_5 = 5;
    sbit  FLT6R_5_bit at RPINR32.B5;
    const register unsigned short int FLT6R_4 = 4;
    sbit  FLT6R_4_bit at RPINR32.B4;
    const register unsigned short int FLT6R_3 = 3;
    sbit  FLT6R_3_bit at RPINR32.B3;
    const register unsigned short int FLT6R_2 = 2;
    sbit  FLT6R_2_bit at RPINR32.B2;
    const register unsigned short int FLT6R_1 = 1;
    sbit  FLT6R_1_bit at RPINR32.B1;
    const register unsigned short int FLT6R_0 = 0;
    sbit  FLT6R_0_bit at RPINR32.B0;

    // RPINR33 bits
    const register unsigned short int SYNCI1R_5 = 13;
    sbit  SYNCI1R_5_bit at RPINR33.B13;
    const register unsigned short int SYNCI1R_4 = 12;
    sbit  SYNCI1R_4_bit at RPINR33.B12;
    const register unsigned short int SYNCI1R_3 = 11;
    sbit  SYNCI1R_3_bit at RPINR33.B11;
    const register unsigned short int SYNCI1R_2 = 10;
    sbit  SYNCI1R_2_bit at RPINR33.B10;
    const register unsigned short int SYNCI1R_1 = 9;
    sbit  SYNCI1R_1_bit at RPINR33.B9;
    const register unsigned short int SYNCI1R_0 = 8;
    sbit  SYNCI1R_0_bit at RPINR33.B8;
    const register unsigned short int FLT8R_5 = 5;
    sbit  FLT8R_5_bit at RPINR33.B5;
    const register unsigned short int FLT8R_4 = 4;
    sbit  FLT8R_4_bit at RPINR33.B4;
    const register unsigned short int FLT8R_3 = 3;
    sbit  FLT8R_3_bit at RPINR33.B3;
    const register unsigned short int FLT8R_2 = 2;
    sbit  FLT8R_2_bit at RPINR33.B2;
    const register unsigned short int FLT8R_1 = 1;
    sbit  FLT8R_1_bit at RPINR33.B1;
    const register unsigned short int FLT8R_0 = 0;
    sbit  FLT8R_0_bit at RPINR33.B0;

    // RPINR34 bits
    const register unsigned short int SYNCI2R_5 = 5;
    sbit  SYNCI2R_5_bit at RPINR34.B5;
    const register unsigned short int SYNCI2R_4 = 4;
    sbit  SYNCI2R_4_bit at RPINR34.B4;
    const register unsigned short int SYNCI2R_3 = 3;
    sbit  SYNCI2R_3_bit at RPINR34.B3;
    const register unsigned short int SYNCI2R_2 = 2;
    sbit  SYNCI2R_2_bit at RPINR34.B2;
    const register unsigned short int SYNCI2R_1 = 1;
    sbit  SYNCI2R_1_bit at RPINR34.B1;
    const register unsigned short int SYNCI2R_0 = 0;
    sbit  SYNCI2R_0_bit at RPINR34.B0;

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

    // RPOR16 bits
    const register unsigned short int RP33R_5 = 13;
    sbit  RP33R_5_bit at RPOR16.B13;
    const register unsigned short int RP33R_4 = 12;
    sbit  RP33R_4_bit at RPOR16.B12;
    const register unsigned short int RP33R_3 = 11;
    sbit  RP33R_3_bit at RPOR16.B11;
    const register unsigned short int RP33R_2 = 10;
    sbit  RP33R_2_bit at RPOR16.B10;
    const register unsigned short int RP33R_1 = 9;
    sbit  RP33R_1_bit at RPOR16.B9;
    const register unsigned short int RP33R_0 = 8;
    sbit  RP33R_0_bit at RPOR16.B8;
    const register unsigned short int RP32R_5 = 5;
    sbit  RP32R_5_bit at RPOR16.B5;
    const register unsigned short int RP32R_4 = 4;
    sbit  RP32R_4_bit at RPOR16.B4;
    const register unsigned short int RP32R_3 = 3;
    sbit  RP32R_3_bit at RPOR16.B3;
    const register unsigned short int RP32R_2 = 2;
    sbit  RP32R_2_bit at RPOR16.B2;
    const register unsigned short int RP32R_1 = 1;
    sbit  RP32R_1_bit at RPOR16.B1;
    const register unsigned short int RP32R_0 = 0;
    sbit  RP32R_0_bit at RPOR16.B0;

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
    const register unsigned short int RP34R_5 = 5;
    sbit  RP34R_5_bit at RPOR17.B5;
    const register unsigned short int RP34R_4 = 4;
    sbit  RP34R_4_bit at RPOR17.B4;
    const register unsigned short int RP34R_3 = 3;
    sbit  RP34R_3_bit at RPOR17.B3;
    const register unsigned short int RP34R_2 = 2;
    sbit  RP34R_2_bit at RPOR17.B2;
    const register unsigned short int RP34R_1 = 1;
    sbit  RP34R_1_bit at RPOR17.B1;
    const register unsigned short int RP34R_0 = 0;
    sbit  RP34R_0_bit at RPOR17.B0;

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

    // LFSR bits
    const register unsigned short int LFSR_15 = 15;
    sbit  LFSR_15_bit at LFSR.B15;
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
    const register unsigned short int T2MD = 12;
    sbit  T2MD_bit at PMD1.B12;
    const register unsigned short int T1MD = 11;
    sbit  T1MD_bit at PMD1.B11;
    const register unsigned short int PWMMD = 9;
    sbit  PWMMD_bit at PMD1.B9;
    const register unsigned short int I2C1MD = 7;
    sbit  I2C1MD_bit at PMD1.B7;
    const register unsigned short int U1MD = 5;
    sbit  U1MD_bit at PMD1.B5;
    const register unsigned short int SPI1MD = 3;
    sbit  SPI1MD_bit at PMD1.B3;
    const register unsigned short int ADCMD = 0;
    sbit  ADCMD_bit at PMD1.B0;

    // PMD2 bits
    const register unsigned short int IC1MD = 8;
    sbit  IC1MD_bit at PMD2.B8;
    const register unsigned short int OC1MD = 0;
    sbit  OC1MD_bit at PMD2.B0;

    // PMD3 bits
    const register unsigned short int CMPMD = 10;
    sbit  CMPMD_bit at PMD3.B10;

    // PMD4 bits
    const register unsigned short int REFOMD = 3;
    sbit  REFOMD_bit at PMD4.B3;

    // PMD6 bits
    const register unsigned short int PWM2MD = 9;
    sbit  PWM2MD_bit at PMD6.B9;
    const register unsigned short int PWM1MD = 8;
    sbit  PWM1MD_bit at PMD6.B8;

    // PMD7 bits
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

// backward compatibility for INTCON1BITS
    typedef struct tagINTCON1BITS {
      unsigned :1;
      unsigned OSCFAIL:1;
      unsigned STKERR:1;
      unsigned ADDRERR:1;
      unsigned MATHERR:1;
      unsigned :1;
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
      unsigned :3;
      unsigned T2IF:1;
      unsigned :1;
      unsigned SPI1EIF:1;
      unsigned SPI1IF:1;
      unsigned U1RXIF:1;
      unsigned U1TXIF:1;
      unsigned ADIF:1;
} typeIFS0BITS;
sfr volatile typeIFS0BITS IFS0bits absolute 0x084;

// backward compatibility for IFS1BITS
    typedef struct tagIFS1BITS {
      unsigned SI2C1IF:1;
      unsigned MI2C1IF:1;
      unsigned AC1IF:1;
      unsigned CNIF:1;
      unsigned INT1IF:1;
      unsigned :8;
      unsigned INT2IF:1;
} typeIFS1BITS;
sfr volatile typeIFS1BITS IFS1bits absolute 0x086;

// backward compatibility for IFS3BITS
    typedef struct tagIFS3BITS {
      unsigned :9;
      unsigned PSEMIF:1;
} typeIFS3BITS;
sfr volatile typeIFS3BITS IFS3bits absolute 0x08A;

// backward compatibility for IFS4BITS
    typedef struct tagIFS4BITS {
      unsigned :1;
      unsigned U1EIF:1;
} typeIFS4BITS;
sfr volatile typeIFS4BITS IFS4bits absolute 0x08C;

// backward compatibility for IFS5BITS
    typedef struct tagIFS5BITS {
      unsigned :14;
      unsigned PWM1IF:1;
      unsigned PWM2IF:1;
} typeIFS5BITS;
sfr volatile typeIFS5BITS IFS5bits absolute 0x08E;

// backward compatibility for IFS6BITS
    typedef struct tagIFS6BITS {
      unsigned :7;
      unsigned AC2IF:1;
      unsigned :6;
      unsigned ADCP0IF:1;
      unsigned ADCP1IF:1;
} typeIFS6BITS;
sfr volatile typeIFS6BITS IFS6bits absolute 0x090;

// backward compatibility for IFS7BITS
    typedef struct tagIFS7BITS {
      unsigned ADCP2IF:1;
      unsigned :3;
      unsigned ADCP6IF:1;
} typeIFS7BITS;
sfr volatile typeIFS7BITS IFS7bits absolute 0x092;

// backward compatibility for IEC0BITS
    typedef struct tagIEC0BITS {
      unsigned INT0IE:1;
      unsigned IC1IE:1;
      unsigned OC1IE:1;
      unsigned T1IE:1;
      unsigned :3;
      unsigned T2IE:1;
      unsigned :1;
      unsigned SPI1EIE:1;
      unsigned SPI1IE:1;
      unsigned U1RXIE:1;
      unsigned U1TXIE:1;
      unsigned ADIE:1;
} typeIEC0BITS;
sfr volatile typeIEC0BITS IEC0bits absolute 0x094;

// backward compatibility for IEC1BITS
    typedef struct tagIEC1BITS {
      unsigned SI2C1IE:1;
      unsigned MI2C1IE:1;
      unsigned AC1IE:1;
      unsigned CNIE:1;
      unsigned INT1IE:1;
      unsigned :8;
      unsigned INT2IE:1;
} typeIEC1BITS;
sfr volatile typeIEC1BITS IEC1bits absolute 0x096;

// backward compatibility for IEC3BITS
    typedef struct tagIEC3BITS {
      unsigned :9;
      unsigned PSEMIE:1;
} typeIEC3BITS;
sfr volatile typeIEC3BITS IEC3bits absolute 0x09A;

// backward compatibility for IEC4BITS
    typedef struct tagIEC4BITS {
      unsigned :1;
      unsigned U1EIE:1;
} typeIEC4BITS;
sfr volatile typeIEC4BITS IEC4bits absolute 0x09C;

// backward compatibility for IEC5BITS
    typedef struct tagIEC5BITS {
      unsigned :14;
      unsigned PWM1IE:1;
      unsigned PWM2IE:1;
} typeIEC5BITS;
sfr volatile typeIEC5BITS IEC5bits absolute 0x09E;

// backward compatibility for IEC6BITS
    typedef struct tagIEC6BITS {
      unsigned :7;
      unsigned AC2IE:1;
      unsigned :6;
      unsigned ADCP0IE:1;
      unsigned ADCP1IE:1;
} typeIEC6BITS;
sfr volatile typeIEC6BITS IEC6bits absolute 0x0A0;

// backward compatibility for IEC7BITS
    typedef struct tagIEC7BITS {
      unsigned ADCP2IE:1;
      unsigned :3;
      unsigned ADCP6IE:1;
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
          unsigned :12;
          unsigned T2IP:3;
        };
        struct {
          unsigned :12;
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
          unsigned :4;
          unsigned SPI1EIP:3;
          unsigned :1;
          unsigned SPI1IP:3;
          unsigned :1;
          unsigned U1RXIP:3;
        };
        struct {
          unsigned :4;
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
        };
        struct {
          unsigned U1TXIP0:1;
          unsigned U1TXIP1:1;
          unsigned U1TXIP2:1;
          unsigned :1;
          unsigned ADIP0:1;
          unsigned ADIP1:1;
          unsigned ADIP2:1;
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

// backward compatibility for IPC7BITS
    typedef struct tagIPC7BITS {
      union {
        struct {
          unsigned :4;
          unsigned INT2IP:3;
        };
        struct {
          unsigned :4;
          unsigned INT2IP0:1;
          unsigned INT2IP1:1;
          unsigned INT2IP2:1;
        };
      };
} typeIPC7BITS;
sfr volatile typeIPC7BITS IPC7bits absolute 0x0B2;

// backward compatibility for IPC14BITS
    typedef struct tagIPC14BITS {
      union {
        struct {
          unsigned :4;
          unsigned PSEMIP:3;
        };
        struct {
          unsigned :4;
          unsigned PSEMIP0:1;
          unsigned PSEMIP1:1;
          unsigned PSEMIP2:1;
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
        };
        struct {
          unsigned :4;
          unsigned U1EIP0:1;
          unsigned U1EIP1:1;
          unsigned U1EIP2:1;
        };
      };
} typeIPC16BITS;
sfr volatile typeIPC16BITS IPC16bits absolute 0x0C4;

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
        };
        struct {
          unsigned ADCP2IP0:1;
          unsigned ADCP2IP1:1;
          unsigned ADCP2IP2:1;
        };
      };
} typeIPC28BITS;
sfr volatile typeIPC28BITS IPC28bits absolute 0x0DC;

// backward compatibility for IPC29BITS
    typedef struct tagIPC29BITS {
      union {
        struct {
          unsigned ADCP6IP:3;
        };
        struct {
          unsigned ADCP6IP0:1;
          unsigned ADCP6IP1:1;
          unsigned ADCP6IP2:1;
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
} typeT2CONBITS;
sfr volatile typeT2CONBITS T2CONbits absolute 0x110;

// backward compatibility for IC
    typedef struct tagIC {
            unsigned int icxbuf;
            unsigned int icxcon;
} typeIC;
sfr volatile typeIC IC1 absolute 0x140;

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

// backward compatibility for OC
    typedef struct tagOC {
            unsigned int ocxrs;
            unsigned int ocxr;
            unsigned int ocxcon;
} typeOC;
sfr volatile typeOC OC1 absolute 0x180;

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

// backward compatibility for UART
    typedef struct tagUART {
            unsigned int uxmode;
            unsigned int uxsta;
            unsigned int uxtxreg;
            unsigned int uxrxreg;
            unsigned int uxbrg;
} typeUART;
sfr volatile typeUART UART1 absolute 0x220;

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

// backward compatibility for SPI
    typedef struct tagSPI {
            unsigned int spixstat;
            unsigned int spixcon1;
            unsigned int spixcon2;
            unsigned int unused;
            unsigned int spixbuf;
} typeSPI;
sfr volatile typeSPI SPI1 absolute 0x240;

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
      unsigned ODCA0:1;
      unsigned ODCA1:1;
      unsigned ODCA2:1;
      unsigned ODCA3:1;
      unsigned ODCA4:1;
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
} typeODCBBITS;
sfr volatile typeODCBBITS ODCBbits absolute 0x2CE;

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
} typeADPCFGBITS;
sfr volatile typeADPCFGBITS ADPCFGbits absolute 0x302;

// backward compatibility for ADSTATBITS
    typedef struct tagADSTATBITS {
      unsigned P0RDY:1;
      unsigned P1RDY:1;
      unsigned P2RDY:1;
      unsigned :3;
      unsigned P6RDY:1;
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
        };
        struct {
          unsigned TRGSRC20:1;
          unsigned TRGSRC21:1;
          unsigned TRGSRC22:1;
          unsigned TRGSRC23:1;
          unsigned TRGSRC24:1;
        };
      };
} typeADCPC1BITS;
sfr volatile typeADCPC1BITS ADCPC1bits absolute 0x30C;

// backward compatibility for ADCPC3BITS
    typedef struct tagADCPC3BITS {
      union {
        struct {
          unsigned TRGSRC6:5;
          unsigned SWTRG6:1;
          unsigned PEND6:1;
          unsigned IRQEN6:1;
        };
        struct {
          unsigned TRGSRC60:1;
          unsigned TRGSRC61:1;
          unsigned TRGSRC62:1;
          unsigned TRGSRC63:1;
          unsigned TRGSRC64:1;
        };
      };
} typeADCPC3BITS;
sfr volatile typeADCPC3BITS ADCPC3bits absolute 0x310;

// backward compatibility for PTCONBITS
    typedef struct tagPTCONBITS {
      union {
        struct {
          unsigned SEVTPS:4;
          unsigned SYNCSRC:2;
          unsigned :1;
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

// backward compatibility for PWMCON1BITS
    typedef struct tagPWMCON1BITS {
      union {
        struct {
          unsigned IUE:1;
          unsigned XPRES:1;
          unsigned CAM:1;
          unsigned :3;
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
      union {
        struct {
          unsigned :3;
          unsigned PWMCAP1:13;
        };
        struct {
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
        };
      };
} typePWMCAP1BITS;
sfr volatile typePWMCAP1BITS PWMCAP1bits absolute 0x438;

// backward compatibility for LEBCON1BITS
    typedef struct tagLEBCON1BITS {
      union {
        struct {
          unsigned :3;
          unsigned LEB:7;
          unsigned CLLEBEN:1;
          unsigned FLTLEBEN:1;
          unsigned PLF:1;
          unsigned PLR:1;
          unsigned PHF:1;
          unsigned PHR:1;
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
        };
      };
} typeLEBCON1BITS;
sfr volatile typeLEBCON1BITS LEBCON1bits absolute 0x43A;

// backward compatibility for PWMCON2BITS
    typedef struct tagPWMCON2BITS {
      union {
        struct {
          unsigned IUE:1;
          unsigned XPRES:1;
          unsigned CAM:1;
          unsigned :3;
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
      union {
        struct {
          unsigned :3;
          unsigned LEB:7;
          unsigned CLLEBEN:1;
          unsigned FLTLEBEN:1;
          unsigned PLF:1;
          unsigned PLR:1;
          unsigned PHF:1;
          unsigned PHR:1;
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
        };
      };
} typeLEBCON2BITS;
sfr volatile typeLEBCON2BITS LEBCON2bits absolute 0x45A;

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
        };
        struct {
          unsigned INT2R0:1;
          unsigned INT2R1:1;
          unsigned INT2R2:1;
          unsigned INT2R3:1;
          unsigned INT2R4:1;
          unsigned INT2R5:1;
        };
      };
} typeRPINR1BITS;
sfr volatile typeRPINR1BITS RPINR1bits absolute 0x682;

// backward compatibility for RPINR2BITS
    typedef struct tagRPINR2BITS {
      union {
        struct {
          unsigned :8;
          unsigned T1CKR:6;
        };
        struct {
          unsigned :8;
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
        };
        struct {
          unsigned T2CKR0:1;
          unsigned T2CKR1:1;
          unsigned T2CKR2:1;
          unsigned T2CKR3:1;
          unsigned T2CKR4:1;
          unsigned T2CKR5:1;
        };
      };
} typeRPINR3BITS;
sfr volatile typeRPINR3BITS RPINR3bits absolute 0x686;

// backward compatibility for RPINR7BITS
    typedef struct tagRPINR7BITS {
      union {
        struct {
          unsigned IC1R:6;
        };
        struct {
          unsigned IC1R0:1;
          unsigned IC1R1:1;
          unsigned IC1R2:1;
          unsigned IC1R3:1;
          unsigned IC1R4:1;
          unsigned IC1R5:1;
        };
      };
} typeRPINR7BITS;
sfr volatile typeRPINR7BITS RPINR7bits absolute 0x68E;

// backward compatibility for RPINR11BITS
    typedef struct tagRPINR11BITS {
      union {
        struct {
          unsigned OCFAR:6;
        };
        struct {
          unsigned OCFAR0:1;
          unsigned OCFAR1:1;
          unsigned OCFAR2:1;
          unsigned OCFAR3:1;
          unsigned OCFAR4:1;
          unsigned OCFAR5:1;
        };
      };
} typeRPINR11BITS;
sfr volatile typeRPINR11BITS RPINR11bits absolute 0x696;

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
        };
        struct {
          unsigned SS1R0:1;
          unsigned SS1R1:1;
          unsigned SS1R2:1;
          unsigned SS1R3:1;
          unsigned SS1R4:1;
          unsigned SS1R5:1;
        };
      };
} typeRPINR21BITS;
sfr volatile typeRPINR21BITS RPINR21bits absolute 0x6AA;

// backward compatibility for RPINR29BITS
    typedef struct tagRPINR29BITS {
      union {
        struct {
          unsigned :8;
          unsigned FLT1R:6;
        };
        struct {
          unsigned :8;
          unsigned FLT1R0:1;
          unsigned FLT1R1:1;
          unsigned FLT1R2:1;
          unsigned FLT1R3:1;
          unsigned FLT1R4:1;
          unsigned FLT1R5:1;
        };
      };
} typeRPINR29BITS;
sfr volatile typeRPINR29BITS RPINR29bits absolute 0x6BA;

// backward compatibility for RPINR30BITS
    typedef struct tagRPINR30BITS {
      union {
        struct {
          unsigned FLT2R:6;
          unsigned :2;
          unsigned FLT3R:6;
        };
        struct {
          unsigned FLT2R0:1;
          unsigned FLT2R1:1;
          unsigned FLT2R2:1;
          unsigned FLT2R3:1;
          unsigned FLT2R4:1;
          unsigned FLT2R5:1;
          unsigned :2;
          unsigned FLT3R0:1;
          unsigned FLT3R1:1;
          unsigned FLT3R2:1;
          unsigned FLT3R3:1;
          unsigned FLT3R4:1;
          unsigned FLT3R5:1;
        };
      };
} typeRPINR30BITS;
sfr volatile typeRPINR30BITS RPINR30bits absolute 0x6BC;

// backward compatibility for RPINR31BITS
    typedef struct tagRPINR31BITS {
      union {
        struct {
          unsigned FLT4R:6;
          unsigned :2;
          unsigned FLT5R:6;
        };
        struct {
          unsigned FLT4R0:1;
          unsigned FLT4R1:1;
          unsigned FLT4R2:1;
          unsigned FLT4R3:1;
          unsigned FLT4R4:1;
          unsigned FLT4R5:1;
          unsigned :2;
          unsigned FLT5R0:1;
          unsigned FLT5R1:1;
          unsigned FLT5R2:1;
          unsigned FLT5R3:1;
          unsigned FLT5R4:1;
          unsigned FLT5R5:1;
        };
      };
} typeRPINR31BITS;
sfr volatile typeRPINR31BITS RPINR31bits absolute 0x6BE;

// backward compatibility for RPINR32BITS
    typedef struct tagRPINR32BITS {
      union {
        struct {
          unsigned FLT6R:6;
          unsigned :2;
          unsigned FLT7R:6;
        };
        struct {
          unsigned FLT6R0:1;
          unsigned FLT6R1:1;
          unsigned FLT6R2:1;
          unsigned FLT6R3:1;
          unsigned FLT6R4:1;
          unsigned FLT6R5:1;
          unsigned :2;
          unsigned FLT7R0:1;
          unsigned FLT7R1:1;
          unsigned FLT7R2:1;
          unsigned FLT7R3:1;
          unsigned FLT7R4:1;
          unsigned FLT7R5:1;
        };
      };
} typeRPINR32BITS;
sfr volatile typeRPINR32BITS RPINR32bits absolute 0x6C0;

// backward compatibility for RPINR33BITS
    typedef struct tagRPINR33BITS {
      union {
        struct {
          unsigned FLT8R:6;
          unsigned :2;
          unsigned SYNCI1R:6;
        };
        struct {
          unsigned FLT8R0:1;
          unsigned FLT8R1:1;
          unsigned FLT8R2:1;
          unsigned FLT8R3:1;
          unsigned FLT8R4:1;
          unsigned FLT8R5:1;
          unsigned :2;
          unsigned SYNCI1R0:1;
          unsigned SYNCI1R1:1;
          unsigned SYNCI1R2:1;
          unsigned SYNCI1R3:1;
          unsigned SYNCI1R4:1;
          unsigned SYNCI1R5:1;
        };
      };
} typeRPINR33BITS;
sfr volatile typeRPINR33BITS RPINR33bits absolute 0x6C2;

// backward compatibility for RPINR34BITS
    typedef struct tagRPINR34BITS {
      union {
        struct {
          unsigned SYNCI2R:6;
        };
        struct {
          unsigned SYNCI2R0:1;
          unsigned SYNCI2R1:1;
          unsigned SYNCI2R2:1;
          unsigned SYNCI2R3:1;
          unsigned SYNCI2R4:1;
          unsigned SYNCI2R5:1;
        };
      };
} typeRPINR34BITS;
sfr volatile typeRPINR34BITS RPINR34bits absolute 0x6C4;

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
sfr volatile typeRPOR0BITS RPOR0bits absolute 0x6D0;

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
sfr volatile typeRPOR1BITS RPOR1bits absolute 0x6D2;

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
sfr volatile typeRPOR2BITS RPOR2bits absolute 0x6D4;

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
sfr volatile typeRPOR3BITS RPOR3bits absolute 0x6D6;

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
sfr volatile typeRPOR4BITS RPOR4bits absolute 0x6D8;

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
sfr volatile typeRPOR5BITS RPOR5bits absolute 0x6DA;

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
sfr volatile typeRPOR6BITS RPOR6bits absolute 0x6DC;

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
sfr volatile typeRPOR7BITS RPOR7bits absolute 0x6DE;

// backward compatibility for RPOR16BITS
    typedef struct tagRPOR16BITS {
      union {
        struct {
          unsigned RP32R:6;
          unsigned :2;
          unsigned RP33R:6;
        };
        struct {
          unsigned RP32R0:1;
          unsigned RP32R1:1;
          unsigned RP32R2:1;
          unsigned RP32R3:1;
          unsigned RP32R4:1;
          unsigned RP32R5:1;
          unsigned :2;
          unsigned RP33R0:1;
          unsigned RP33R1:1;
          unsigned RP33R2:1;
          unsigned RP33R3:1;
          unsigned RP33R4:1;
          unsigned RP33R5:1;
        };
      };
} typeRPOR16BITS;
sfr volatile typeRPOR16BITS RPOR16bits absolute 0x6F0;

// backward compatibility for RPOR17BITS
    typedef struct tagRPOR17BITS {
      union {
        struct {
          unsigned RP34R:6;
          unsigned :2;
          unsigned RP35R:6;
        };
        struct {
          unsigned RP34R0:1;
          unsigned RP34R1:1;
          unsigned RP34R2:1;
          unsigned RP34R3:1;
          unsigned RP34R4:1;
          unsigned RP34R5:1;
          unsigned :2;
          unsigned RP35R0:1;
          unsigned RP35R1:1;
          unsigned RP35R2:1;
          unsigned RP35R3:1;
          unsigned RP35R4:1;
          unsigned RP35R5:1;
        };
      };
} typeRPOR17BITS;
sfr volatile typeRPOR17BITS RPOR17bits absolute 0x6F2;

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
      unsigned CM:1;
      unsigned :4;
      unsigned IOPUWR:1;
      unsigned TRAPR:1;
} typeRCONBITS;
sfr volatile typeRCONBITS RCONbits absolute 0x740;

// backward compatibility for OSCCONBITS
    typedef struct tagOSCCONBITS {
      union {
        struct {
          unsigned OSWEN:1;
          unsigned :2;
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
      unsigned :2;
      unsigned SPI1MD:1;
      unsigned :1;
      unsigned U1MD:1;
      unsigned :1;
      unsigned I2C1MD:1;
      unsigned :1;
      unsigned PWMMD:1;
      unsigned :1;
      unsigned T1MD:1;
      unsigned T2MD:1;
} typePMD1BITS;
sfr volatile typePMD1BITS PMD1bits absolute 0x770;

// backward compatibility for PMD2BITS
    typedef struct tagPMD2BITS {
      unsigned OC1MD:1;
      unsigned :7;
      unsigned IC1MD:1;
} typePMD2BITS;
sfr volatile typePMD2BITS PMD2bits absolute 0x772;

// backward compatibility for PMD3BITS
    typedef struct tagPMD3BITS {
      unsigned :10;
      unsigned CMPMD:1;
} typePMD3BITS;
sfr volatile typePMD3BITS PMD3bits absolute 0x774;

// backward compatibility for PMD4BITS
    typedef struct tagPMD4BITS {
      unsigned :3;
      unsigned REFOMD:1;
} typePMD4BITS;
sfr volatile typePMD4BITS PMD4bits absolute 0x778;

// backward compatibility for PMD6BITS
    typedef struct tagPMD6BITS {
      unsigned :8;
      unsigned PWM1MD:1;
      unsigned PWM2MD:1;
} typePMD6BITS;
sfr volatile typePMD6BITS PMD6bits absolute 0x77C;

// backward compatibility for PMD7BITS
    typedef struct tagPMD7BITS {
      unsigned :8;
      unsigned CMP1MD:1;
      unsigned CMP2MD:1;
} typePMD7BITS;
sfr volatile typePMD7BITS PMD7bits absolute 0x77E;

