// Definition file for P24F16KL401

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

const unsigned long __FLASH_SIZE = 0x00004200;
const unsigned long __XRAM_RAM_SIZE = 0x000003FF;
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
const unsigned IVT_ADDR_INTERRUPT1           = 0x0016;
const unsigned IVT_ADDR_CCP1INTERRUPT        = 0x0018;
const unsigned IVT_ADDR_T1INTERRUPT          = 0x001A;
const unsigned IVT_ADDR_INTERRUPT4           = 0x001C;
const unsigned IVT_ADDR_INTERRUPT5           = 0x001E;
const unsigned IVT_ADDR_CCP2INTERRUPT        = 0x0020;
const unsigned IVT_ADDR_T2INTERRUPT          = 0x0022;
const unsigned IVT_ADDR_T3INTERRUPT          = 0x0024;
const unsigned IVT_ADDR_INTERRUPT9           = 0x0026;
const unsigned IVT_ADDR_INTERRUPT10          = 0x0028;
const unsigned IVT_ADDR_U1RXINTERRUPT        = 0x002A;
const unsigned IVT_ADDR_U1TXINTERRUPT        = 0x002C;
const unsigned IVT_ADDR_ADC1INTERRUPT        = 0x002E;
const unsigned IVT_ADDR_INTERRUPT14          = 0x0030;
const unsigned IVT_ADDR_NVMWRITEINTERRUPT    = 0x0032;
const unsigned IVT_ADDR_MSSP1INTERRUPT       = 0x0034;
const unsigned IVT_ADDR_MSSP1BCINTERRUPT     = 0x0036;
const unsigned IVT_ADDR_COMPINTERRUPT        = 0x0038;
const unsigned IVT_ADDR_CNINTERRUPT          = 0x003A;
const unsigned IVT_ADDR_INT1INTERRUPT        = 0x003C;
const unsigned IVT_ADDR_INTERRUPT21          = 0x003E;
const unsigned IVT_ADDR_INTERRUPT22          = 0x0040;
const unsigned IVT_ADDR_INTERRUPT23          = 0x0042;
const unsigned IVT_ADDR_INTERRUPT24          = 0x0044;
const unsigned IVT_ADDR_CCP3INTERRUPT        = 0x0046;
const unsigned IVT_ADDR_INTERRUPT26          = 0x0048;
const unsigned IVT_ADDR_T4INTERRUPT          = 0x004A;
const unsigned IVT_ADDR_INTERRUPT28          = 0x004C;
const unsigned IVT_ADDR_INT2INTERRUPT        = 0x004E;
const unsigned IVT_ADDR_U2RXINTERRUPT        = 0x0050;
const unsigned IVT_ADDR_U2TXINTERRUPT        = 0x0052;
const unsigned IVT_ADDR_INTERRUPT32          = 0x0054;
const unsigned IVT_ADDR_INTERRUPT33          = 0x0056;
const unsigned IVT_ADDR_INTERRUPT34          = 0x0058;
const unsigned IVT_ADDR_INTERRUPT35          = 0x005A;
const unsigned IVT_ADDR_INTERRUPT36          = 0x005C;
const unsigned IVT_ADDR_T3GINTERRUPT         = 0x005E;
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
const unsigned IVT_ADDR_MSSP2INTERRUPT       = 0x0076;
const unsigned IVT_ADDR_MSSP2BCINTERRUPT     = 0x0078;
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
const unsigned IVT_ADDR_INTERRUPT62          = 0x0090;
const unsigned IVT_ADDR_INTERRUPT63          = 0x0092;
const unsigned IVT_ADDR_INTERRUPT64          = 0x0094;
const unsigned IVT_ADDR_U1ERRINTERRUPT       = 0x0096;
const unsigned IVT_ADDR_U2ERRINTERRUPT       = 0x0098;
const unsigned IVT_ADDR_INTERRUPT67          = 0x009A;
const unsigned IVT_ADDR_INTERRUPT68          = 0x009C;
const unsigned IVT_ADDR_INTERRUPT69          = 0x009E;
const unsigned IVT_ADDR_INTERRUPT70          = 0x00A0;
const unsigned IVT_ADDR_INTERRUPT71          = 0x00A2;
const unsigned IVT_ADDR_HLVDINTERRUPT        = 0x00A4;
const unsigned IVT_ADDR_INTERRUPT73          = 0x00A6;
const unsigned IVT_ADDR_INTERRUPT74          = 0x00A8;
const unsigned IVT_ADDR_INTERRUPT75          = 0x00AA;
const unsigned IVT_ADDR_INTERRUPT76          = 0x00AC;
const unsigned IVT_ADDR_INTERRUPT77          = 0x00AE;
const unsigned IVT_ADDR_INTERRUPT78          = 0x00B0;
const unsigned IVT_ADDR_INTERRUPT79          = 0x00B2;
const unsigned IVT_ADDR_ULPWUINTERRUPT       = 0x00B4;
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
const unsigned AIVT_ADDR_ALTINTERRUPT1        = 0x0116;
const unsigned AIVT_ADDR_ALTCCP1INTERRUPT     = 0x0118;
const unsigned AIVT_ADDR_ALTT1INTERRUPT       = 0x011A;
const unsigned AIVT_ADDR_ALTINTERRUPT4        = 0x011C;
const unsigned AIVT_ADDR_ALTINTERRUPT5        = 0x011E;
const unsigned AIVT_ADDR_ALTCCP2INTERRUPT     = 0x0120;
const unsigned AIVT_ADDR_ALTT2INTERRUPT       = 0x0122;
const unsigned AIVT_ADDR_ALTT3INTERRUPT       = 0x0124;
const unsigned AIVT_ADDR_ALTINTERRUPT9        = 0x0126;
const unsigned AIVT_ADDR_ALTINTERRUPT10       = 0x0128;
const unsigned AIVT_ADDR_ALTU1RXINTERRUPT     = 0x012A;
const unsigned AIVT_ADDR_ALTU1TXINTERRUPT     = 0x012C;
const unsigned AIVT_ADDR_ALTADC1INTERRUPT     = 0x012E;
const unsigned AIVT_ADDR_ALTINTERRUPT14       = 0x0130;
const unsigned AIVT_ADDR_ALTNVMWRITEINTERRUPT = 0x0132;
const unsigned AIVT_ADDR_ALTMSSP1INTERRUPT    = 0x0134;
const unsigned AIVT_ADDR_ALTMSSP1BCINTERRUPT  = 0x0136;
const unsigned AIVT_ADDR_ALTCOMPINTERRUPT     = 0x0138;
const unsigned AIVT_ADDR_ALTCNINTERRUPT       = 0x013A;
const unsigned AIVT_ADDR_ALTINT1INTERRUPT     = 0x013C;
const unsigned AIVT_ADDR_ALTINTERRUPT21       = 0x013E;
const unsigned AIVT_ADDR_ALTINTERRUPT22       = 0x0140;
const unsigned AIVT_ADDR_ALTINTERRUPT23       = 0x0142;
const unsigned AIVT_ADDR_ALTINTERRUPT24       = 0x0144;
const unsigned AIVT_ADDR_ALTCCP3INTERRUPT     = 0x0146;
const unsigned AIVT_ADDR_ALTINTERRUPT26       = 0x0148;
const unsigned AIVT_ADDR_ALTT4INTERRUPT       = 0x014A;
const unsigned AIVT_ADDR_ALTINTERRUPT28       = 0x014C;
const unsigned AIVT_ADDR_ALTINT2INTERRUPT     = 0x014E;
const unsigned AIVT_ADDR_ALTU2RXINTERRUPT     = 0x0150;
const unsigned AIVT_ADDR_ALTU2TXINTERRUPT     = 0x0152;
const unsigned AIVT_ADDR_ALTINTERRUPT32       = 0x0154;
const unsigned AIVT_ADDR_ALTINTERRUPT33       = 0x0156;
const unsigned AIVT_ADDR_ALTINTERRUPT34       = 0x0158;
const unsigned AIVT_ADDR_ALTINTERRUPT35       = 0x015A;
const unsigned AIVT_ADDR_ALTINTERRUPT36       = 0x015C;
const unsigned AIVT_ADDR_ALTT3GINTERRUPT      = 0x015E;
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
const unsigned AIVT_ADDR_ALTMSSP2INTERRUPT    = 0x0176;
const unsigned AIVT_ADDR_ALTMSSP2BCINTERRUPT  = 0x0178;
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
const unsigned AIVT_ADDR_ALTINTERRUPT62       = 0x0190;
const unsigned AIVT_ADDR_ALTINTERRUPT63       = 0x0192;
const unsigned AIVT_ADDR_ALTINTERRUPT64       = 0x0194;
const unsigned AIVT_ADDR_ALTU1ERRINTERRUPT    = 0x0196;
const unsigned AIVT_ADDR_ALTU2ERRINTERRUPT    = 0x0198;
const unsigned AIVT_ADDR_ALTINTERRUPT67       = 0x019A;
const unsigned AIVT_ADDR_ALTINTERRUPT68       = 0x019C;
const unsigned AIVT_ADDR_ALTINTERRUPT69       = 0x019E;
const unsigned AIVT_ADDR_ALTINTERRUPT70       = 0x01A0;
const unsigned AIVT_ADDR_ALTINTERRUPT71       = 0x01A2;
const unsigned AIVT_ADDR_ALTHLVDINTERRUPT     = 0x01A4;
const unsigned AIVT_ADDR_ALTINTERRUPT73       = 0x01A6;
const unsigned AIVT_ADDR_ALTINTERRUPT74       = 0x01A8;
const unsigned AIVT_ADDR_ALTINTERRUPT75       = 0x01AA;
const unsigned AIVT_ADDR_ALTINTERRUPT76       = 0x01AC;
const unsigned AIVT_ADDR_ALTINTERRUPT77       = 0x01AE;
const unsigned AIVT_ADDR_ALTINTERRUPT78       = 0x01B0;
const unsigned AIVT_ADDR_ALTINTERRUPT79       = 0x01B2;
const unsigned AIVT_ADDR_ALTULPWUINTERRUPT    = 0x01B4;
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
sfr unsigned int volatile CNPD1            absolute 0x0056;
sfr unsigned int volatile CNPD2            absolute 0x0058;
sfr unsigned int volatile CNEN1            absolute 0x0062;
sfr unsigned int volatile CNEN2            absolute 0x0064;
sfr unsigned int volatile CNPU1            absolute 0x006E;
sfr unsigned int volatile CNPU2            absolute 0x0070;
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
sfr unsigned int          IPC9             absolute 0x00B6;
sfr unsigned int          IPC12            absolute 0x00BC;
sfr unsigned int          IPC16            absolute 0x00C4;
sfr unsigned int          IPC18            absolute 0x00C8;
sfr unsigned int          IPC20            absolute 0x00CC;
sfr unsigned int volatile INTTREG          absolute 0x00E0;
sfr unsigned int volatile TMR1             absolute 0x0100;
sfr unsigned int volatile PR1              absolute 0x0102;
sfr unsigned int volatile T1CON            absolute 0x0104;
sfr unsigned int volatile TMR2             absolute 0x0106;
sfr unsigned int volatile PR2              absolute 0x0108;
sfr unsigned int volatile T2CON            absolute 0x010A;
sfr unsigned int volatile TMR3             absolute 0x010C;
sfr unsigned int volatile T3GCON           absolute 0x010E;
sfr unsigned int volatile T3CON            absolute 0x0110;
sfr unsigned int volatile TMR4             absolute 0x0112;
sfr unsigned int volatile PR4              absolute 0x0114;
sfr unsigned int volatile T4CON            absolute 0x0116;
sfr unsigned int volatile CCPTMRS0         absolute 0x013C;
sfr unsigned int volatile CCP1CON          absolute 0x0190;
sfr unsigned int volatile ECCP1CON         absolute 0x0190;
sfr unsigned int volatile CCPR1L           absolute 0x0192;
sfr unsigned int volatile CCPR1H           absolute 0x0194;
sfr unsigned int volatile ECCP1DEL         absolute 0x0196;
sfr unsigned int          PWM1CON          absolute 0x0196;
sfr unsigned int volatile ECCP1AS          absolute 0x0198;
sfr unsigned int volatile PSTR1CON         absolute 0x019A;
sfr unsigned int volatile CCP2CON          absolute 0x019C;
sfr unsigned int volatile CCPR2L           absolute 0x019E;
sfr unsigned int volatile CCPR2H           absolute 0x01A0;
sfr unsigned int volatile CCP3CON          absolute 0x01A8;
sfr unsigned int volatile CCPR3L           absolute 0x01AA;
sfr unsigned int volatile CCPR3H           absolute 0x01AC;
sfr unsigned int volatile SPI1BUF          absolute 0x0200;
sfr unsigned int volatile SSP1BUF          absolute 0x0200;
sfr unsigned int volatile SSP1CON1         absolute 0x0202;
sfr unsigned int volatile SSP1CON2         absolute 0x0204;
sfr unsigned int volatile SSP1CON3         absolute 0x0206;
sfr unsigned int volatile SSP1STAT         absolute 0x0208;
sfr unsigned int volatile I2C1ADD          absolute 0x020A;
sfr unsigned int volatile SSP1ADD          absolute 0x020A;
sfr unsigned int volatile I2C1MSK          absolute 0x020C;
sfr unsigned int volatile SSP1MSK          absolute 0x020C;
sfr unsigned int volatile SPI2BUF          absolute 0x0210;
sfr unsigned int volatile SSP2BUF          absolute 0x0210;
sfr unsigned int volatile SSP2CON1         absolute 0x0212;
sfr unsigned int volatile SSP2CON2         absolute 0x0214;
sfr unsigned int volatile SSP2CON3         absolute 0x0216;
sfr unsigned int volatile SSP2STAT         absolute 0x0218;
sfr unsigned int volatile I2C2ADD          absolute 0x021A;
sfr unsigned int volatile SSP2ADD          absolute 0x021A;
sfr unsigned int volatile I2C2MSK          absolute 0x021C;
sfr unsigned int volatile SSP2MSK          absolute 0x021C;
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
sfr unsigned int volatile AD1CON1          absolute 0x0320;
sfr unsigned int volatile ADCON1           absolute 0x0320;
sfr unsigned int volatile AD1CON2          absolute 0x0322;
sfr unsigned int volatile ADCON2           absolute 0x0322;
sfr unsigned int volatile AD1CON3          absolute 0x0324;
sfr unsigned int volatile ADCON3           absolute 0x0324;
sfr unsigned int          AD1CHS           absolute 0x0328;
sfr unsigned int          ADCHS            absolute 0x0328;
sfr unsigned int          AD1CSSL          absolute 0x0330;
sfr unsigned int          ADCSSL           absolute 0x0330;
sfr unsigned int volatile ANCFG            absolute 0x04DE;
sfr unsigned int volatile ANSA             absolute 0x04E0;
sfr unsigned int volatile ANSELA           absolute 0x04E0;
sfr unsigned int volatile ANSB             absolute 0x04E2;
sfr unsigned int volatile ANSELB           absolute 0x04E2;
sfr unsigned int volatile CMSTAT           absolute 0x0630;
sfr unsigned int          CVRCON           absolute 0x0632;
sfr unsigned int volatile CM1CON           absolute 0x0634;
sfr unsigned int volatile CM2CON           absolute 0x0636;
sfr unsigned int          RCON             absolute 0x0740;
sfr unsigned int volatile OSCCON           absolute 0x0742;
sfr unsigned int volatile OSCCONL          absolute 0x0742;
sfr unsigned short volatile OSCCONH          absolute 0x0743;
sfr unsigned int volatile CLKDIV           absolute 0x0744;
sfr unsigned int volatile OSCTUN           absolute 0x0748;
sfr unsigned int          REFOCON          absolute 0x074E;
sfr unsigned int volatile HLVDCON          absolute 0x0756;
sfr unsigned int volatile NVMCON           absolute 0x0760;
sfr unsigned int          NVMKEY           absolute 0x0766;
sfr unsigned int volatile ULPWCON          absolute 0x0768;
sfr unsigned int          PMD1             absolute 0x0770;
sfr unsigned int volatile PMDIS1           absolute 0x0770;
sfr unsigned int          PMD2             absolute 0x0772;
sfr unsigned int volatile PMDIS2           absolute 0x0772;
sfr unsigned int          PMD3             absolute 0x0774;
sfr unsigned int volatile PMDIS3           absolute 0x0774;
sfr unsigned int volatile PMD4             absolute 0x0776;
sfr unsigned int volatile PMDIS4           absolute 0x0776;

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
    const register unsigned short int CN14PDE = 14;
    sbit  CN14PDE_bit at CNPD1.B14;
    const register unsigned short int CN13PDE = 13;
    sbit  CN13PDE_bit at CNPD1.B13;
    const register unsigned short int CN12PDE = 12;
    sbit  CN12PDE_bit at CNPD1.B12;
    const register unsigned short int CN11PDE = 11;
    sbit  CN11PDE_bit at CNPD1.B11;
    const register unsigned short int CN8PDE = 8;
    sbit  CN8PDE_bit at CNPD1.B8;
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
    const register unsigned short int CN30PDE = 14;
    sbit  CN30PDE_bit at CNPD2.B14;
    const register unsigned short int CN29PDE = 13;
    sbit  CN29PDE_bit at CNPD2.B13;
    const register unsigned short int CN23PDE = 7;
    sbit  CN23PDE_bit at CNPD2.B7;
    const register unsigned short int CN22PDE = 6;
    sbit  CN22PDE_bit at CNPD2.B6;
    const register unsigned short int CN21PDE = 5;
    sbit  CN21PDE_bit at CNPD2.B5;

    // CNEN1 bits
    const register unsigned short int CN14IE = 14;
    sbit  CN14IE_bit at CNEN1.B14;
    const register unsigned short int CN13IE = 13;
    sbit  CN13IE_bit at CNEN1.B13;
    const register unsigned short int CN12IE = 12;
    sbit  CN12IE_bit at CNEN1.B12;
    const register unsigned short int CN11IE = 11;
    sbit  CN11IE_bit at CNEN1.B11;
    const register unsigned short int CN8IE = 8;
    sbit  CN8IE_bit at CNEN1.B8;
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
    const register unsigned short int CN23IE = 7;
    sbit  CN23IE_bit at CNEN2.B7;
    const register unsigned short int CN22IE = 6;
    sbit  CN22IE_bit at CNEN2.B6;
    const register unsigned short int CN21IE = 5;
    sbit  CN21IE_bit at CNEN2.B5;

    // CNPU1 bits
    const register unsigned short int CN14PUE = 14;
    sbit  CN14PUE_bit at CNPU1.B14;
    const register unsigned short int CN13PUE = 13;
    sbit  CN13PUE_bit at CNPU1.B13;
    const register unsigned short int CN12PUE = 12;
    sbit  CN12PUE_bit at CNPU1.B12;
    const register unsigned short int CN11PUE = 11;
    sbit  CN11PUE_bit at CNPU1.B11;
    const register unsigned short int CN8PUE = 8;
    sbit  CN8PUE_bit at CNPU1.B8;
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
    const register unsigned short int CN23PUE = 7;
    sbit  CN23PUE_bit at CNPU2.B7;
    const register unsigned short int CN22PUE = 6;
    sbit  CN22PUE_bit at CNPU2.B6;
    const register unsigned short int CN21PUE = 5;
    sbit  CN21PUE_bit at CNPU2.B5;

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
    const register unsigned short int NVMIF = 15;
    sbit  NVMIF_bit at IFS0.B15;
    const register unsigned short int AD1IF = 13;
    sbit  AD1IF_bit at IFS0.B13;
    const register unsigned short int U1TXIF = 12;
    sbit  U1TXIF_bit at IFS0.B12;
    const register unsigned short int U1RXIF = 11;
    sbit  U1RXIF_bit at IFS0.B11;
    const register unsigned short int T3IF = 8;
    sbit  T3IF_bit at IFS0.B8;
    const register unsigned short int T2IF = 7;
    sbit  T2IF_bit at IFS0.B7;
    const register unsigned short int CCP2IF = 6;
    sbit  CCP2IF_bit at IFS0.B6;
    const register unsigned short int T1IF = 3;
    sbit  T1IF_bit at IFS0.B3;
    const register unsigned short int CCP1IF = 2;
    sbit  CCP1IF_bit at IFS0.B2;
    const register unsigned short int INT0IF = 0;
    sbit  INT0IF_bit at IFS0.B0;

    // IFS1 bits
    const register unsigned short int U2TXIF = 15;
    sbit  U2TXIF_bit at IFS1.B15;
    const register unsigned short int U2RXIF = 14;
    sbit  U2RXIF_bit at IFS1.B14;
    const register unsigned short int INT2IF = 13;
    sbit  INT2IF_bit at IFS1.B13;
    const register unsigned short int T4IF = 11;
    sbit  T4IF_bit at IFS1.B11;
    const register unsigned short int CCP3IF = 9;
    sbit  CCP3IF_bit at IFS1.B9;
    const register unsigned short int INT1IF = 4;
    sbit  INT1IF_bit at IFS1.B4;
    const register unsigned short int CNIF = 3;
    sbit  CNIF_bit at IFS1.B3;
    const register unsigned short int CMIF = 2;
    sbit  CMIF_bit at IFS1.B2;
    const register unsigned short int BCL1IF = 1;
    sbit  BCL1IF_bit at IFS1.B1;
    const register unsigned short int SSP1IF = 0;
    sbit  SSP1IF_bit at IFS1.B0;

    // IFS2 bits
    const register unsigned short int T3GIF = 5;
    sbit  T3GIF_bit at IFS2.B5;

    // IFS3 bits
    const register unsigned short int BCL2IF = 2;
    sbit  BCL2IF_bit at IFS3.B2;
    const register unsigned short int SSP2IF = 1;
    sbit  SSP2IF_bit at IFS3.B1;

    // IFS4 bits
    const register unsigned short int HLVDIF = 8;
    sbit  HLVDIF_bit at IFS4.B8;
    const register unsigned short int U2ERIF = 2;
    sbit  U2ERIF_bit at IFS4.B2;
    const register unsigned short int U1ERIF = 1;
    sbit  U1ERIF_bit at IFS4.B1;

    // IFS5 bits
    const register unsigned short int ULPWUIF = 0;
    sbit  ULPWUIF_bit at IFS5.B0;

    // IEC0 bits
    const register unsigned short int NVMIE = 15;
    sbit  NVMIE_bit at IEC0.B15;
    const register unsigned short int AD1IE = 13;
    sbit  AD1IE_bit at IEC0.B13;
    const register unsigned short int U1TXIE = 12;
    sbit  U1TXIE_bit at IEC0.B12;
    const register unsigned short int U1RXIE = 11;
    sbit  U1RXIE_bit at IEC0.B11;
    const register unsigned short int T3IE = 8;
    sbit  T3IE_bit at IEC0.B8;
    const register unsigned short int T2IE = 7;
    sbit  T2IE_bit at IEC0.B7;
    const register unsigned short int CCP2IE = 6;
    sbit  CCP2IE_bit at IEC0.B6;
    const register unsigned short int T1IE = 3;
    sbit  T1IE_bit at IEC0.B3;
    const register unsigned short int CCP1IE = 2;
    sbit  CCP1IE_bit at IEC0.B2;
    const register unsigned short int INT0IE = 0;
    sbit  INT0IE_bit at IEC0.B0;

    // IEC1 bits
    const register unsigned short int U2TXIE = 15;
    sbit  U2TXIE_bit at IEC1.B15;
    const register unsigned short int U2RXIE = 14;
    sbit  U2RXIE_bit at IEC1.B14;
    const register unsigned short int INT2IE = 13;
    sbit  INT2IE_bit at IEC1.B13;
    const register unsigned short int T4IE = 11;
    sbit  T4IE_bit at IEC1.B11;
    const register unsigned short int CCP3IE = 9;
    sbit  CCP3IE_bit at IEC1.B9;
    const register unsigned short int INT1IE = 4;
    sbit  INT1IE_bit at IEC1.B4;
    const register unsigned short int CNIE = 3;
    sbit  CNIE_bit at IEC1.B3;
    const register unsigned short int CMIE = 2;
    sbit  CMIE_bit at IEC1.B2;
    const register unsigned short int BCL1IE = 1;
    sbit  BCL1IE_bit at IEC1.B1;
    const register unsigned short int SSP1IE = 0;
    sbit  SSP1IE_bit at IEC1.B0;

    // IEC2 bits
    const register unsigned short int T3GIE = 5;
    sbit  T3GIE_bit at IEC2.B5;

    // IEC3 bits
    const register unsigned short int BCL2IE = 2;
    sbit  BCL2IE_bit at IEC3.B2;
    const register unsigned short int SSP2IE = 1;
    sbit  SSP2IE_bit at IEC3.B1;

    // IEC4 bits
    const register unsigned short int HLVDIE = 8;
    sbit  HLVDIE_bit at IEC4.B8;
    const register unsigned short int U2ERIE = 2;
    sbit  U2ERIE_bit at IEC4.B2;
    const register unsigned short int U1ERIE = 1;
    sbit  U1ERIE_bit at IEC4.B1;

    // IEC5 bits
    const register unsigned short int ULPWUIE = 0;
    sbit  ULPWUIE_bit at IEC5.B0;

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
    const register unsigned short int CCP1IP_2 = 10;
    sbit  CCP1IP_2_bit at IPC0.B10;
    const register unsigned short int CCP1IP_1 = 9;
    sbit  CCP1IP_1_bit at IPC0.B9;
    const register unsigned short int CCP1IP_0 = 8;
    sbit  CCP1IP_0_bit at IPC0.B8;
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
    const register unsigned short int CCP2IP_2 = 10;
    sbit  CCP2IP_2_bit at IPC1.B10;
    const register unsigned short int CCP2IP_1 = 9;
    sbit  CCP2IP_1_bit at IPC1.B9;
    const register unsigned short int CCP2IP_0 = 8;
    sbit  CCP2IP_0_bit at IPC1.B8;

    // IPC2 bits
    const register unsigned short int U1RXIP_2 = 14;
    sbit  U1RXIP_2_bit at IPC2.B14;
    const register unsigned short int U1RXIP_1 = 13;
    sbit  U1RXIP_1_bit at IPC2.B13;
    const register unsigned short int U1RXIP_0 = 12;
    sbit  U1RXIP_0_bit at IPC2.B12;
    const register unsigned short int T3IP_2 = 2;
    sbit  T3IP_2_bit at IPC2.B2;
    const register unsigned short int T3IP_1 = 1;
    sbit  T3IP_1_bit at IPC2.B1;
    const register unsigned short int T3IP_0 = 0;
    sbit  T3IP_0_bit at IPC2.B0;

    // IPC3 bits
    const register unsigned short int NVMIP_2 = 14;
    sbit  NVMIP_2_bit at IPC3.B14;
    const register unsigned short int NVMIP_1 = 13;
    sbit  NVMIP_1_bit at IPC3.B13;
    const register unsigned short int NVMIP_0 = 12;
    sbit  NVMIP_0_bit at IPC3.B12;
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
    const register unsigned short int BCL1IP_2 = 6;
    sbit  BCL1IP_2_bit at IPC4.B6;
    const register unsigned short int BCL1IP_1 = 5;
    sbit  BCL1IP_1_bit at IPC4.B5;
    const register unsigned short int BCL1IP_0 = 4;
    sbit  BCL1IP_0_bit at IPC4.B4;
    const register unsigned short int SSP1IP_2 = 2;
    sbit  SSP1IP_2_bit at IPC4.B2;
    const register unsigned short int SSP1IP_1 = 1;
    sbit  SSP1IP_1_bit at IPC4.B1;
    const register unsigned short int SSP1IP_0 = 0;
    sbit  SSP1IP_0_bit at IPC4.B0;

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
    const register unsigned short int CCP3IP_2 = 6;
    sbit  CCP3IP_2_bit at IPC6.B6;
    const register unsigned short int CCP3IP_1 = 5;
    sbit  CCP3IP_1_bit at IPC6.B5;
    const register unsigned short int CCP3IP_0 = 4;
    sbit  CCP3IP_0_bit at IPC6.B4;

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

    // IPC9 bits
    const register unsigned short int T3GIP_2 = 6;
    sbit  T3GIP_2_bit at IPC9.B6;
    const register unsigned short int T3GIP_1 = 5;
    sbit  T3GIP_1_bit at IPC9.B5;
    const register unsigned short int T3GIP_0 = 4;
    sbit  T3GIP_0_bit at IPC9.B4;

    // IPC12 bits
    const register unsigned short int BCL2IP_2 = 10;
    sbit  BCL2IP_2_bit at IPC12.B10;
    const register unsigned short int BCL2IP_1 = 9;
    sbit  BCL2IP_1_bit at IPC12.B9;
    const register unsigned short int BCL2IP_0 = 8;
    sbit  BCL2IP_0_bit at IPC12.B8;
    const register unsigned short int SSP2IP_2 = 6;
    sbit  SSP2IP_2_bit at IPC12.B6;
    const register unsigned short int SSP2IP_1 = 5;
    sbit  SSP2IP_1_bit at IPC12.B5;
    const register unsigned short int SSP2IP_0 = 4;
    sbit  SSP2IP_0_bit at IPC12.B4;

    // IPC16 bits
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
    const register unsigned short int HLVDIP_2 = 2;
    sbit  HLVDIP_2_bit at IPC18.B2;
    const register unsigned short int HLVDIP_1 = 1;
    sbit  HLVDIP_1_bit at IPC18.B1;
    const register unsigned short int HLVDIP_0 = 0;
    sbit  HLVDIP_0_bit at IPC18.B0;

    // IPC20 bits
    const register unsigned short int ULPWUIP_2 = 2;
    sbit  ULPWUIP_2_bit at IPC20.B2;
    const register unsigned short int ULPWUIP_1 = 1;
    sbit  ULPWUIP_1_bit at IPC20.B1;
    const register unsigned short int ULPWUIP_0 = 0;
    sbit  ULPWUIP_0_bit at IPC20.B0;

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
    const register unsigned short int TSIDL = 13;
    sbit  TSIDL_bit at T1CON.B13;
    const register unsigned short int TECS_1 = 9;
    sbit  TECS_1_bit at T1CON.B9;
    const register unsigned short int TECS_0 = 8;
    sbit  TECS_0_bit at T1CON.B8;
    const register unsigned short int TGATE = 6;
    sbit  TGATE_bit at T1CON.B6;
    const register unsigned short int TCKPS_1 = 5;
    sbit  TCKPS_1_bit at T1CON.B5;
    const register unsigned short int TCKPS_0 = 4;
    sbit  TCKPS_0_bit at T1CON.B4;
    const register unsigned short int TSYNC = 2;
    sbit  TSYNC_bit at T1CON.B2;
    const register unsigned short int TCS = 1;
    sbit  TCS_bit at T1CON.B1;

    // TMR2 bits
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
    const register unsigned short int T2OUTPS_3 = 6;
    sbit  T2OUTPS_3_bit at T2CON.B6;
    const register unsigned short int T2OUTPS_2 = 5;
    sbit  T2OUTPS_2_bit at T2CON.B5;
    const register unsigned short int T2OUTPS_1 = 4;
    sbit  T2OUTPS_1_bit at T2CON.B4;
    const register unsigned short int T2OUTPS_0 = 3;
    sbit  T2OUTPS_0_bit at T2CON.B3;
    const register unsigned short int TMR2ON = 2;
    sbit  TMR2ON_bit at T2CON.B2;
    const register unsigned short int T2CKPS_1 = 1;
    sbit  T2CKPS_1_bit at T2CON.B1;
    const register unsigned short int T2CKPS_0 = 0;
    sbit  T2CKPS_0_bit at T2CON.B0;

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

    // T3GCON bits
    const register unsigned short int TMR3GE = 7;
    sbit  TMR3GE_bit at T3GCON.B7;
    const register unsigned short int T3GPOL = 6;
    sbit  T3GPOL_bit at T3GCON.B6;
    const register unsigned short int T3GTM = 5;
    sbit  T3GTM_bit at T3GCON.B5;
    const register unsigned short int T3GSPM = 4;
    sbit  T3GSPM_bit at T3GCON.B4;
    const register unsigned short int T3GGO = 3;
    sbit  T3GGO_bit at T3GCON.B3;
    const register unsigned short int T3GVAL = 2;
    sbit  T3GVAL_bit at T3GCON.B2;
    const register unsigned short int T3GSS_1 = 1;
    sbit  T3GSS_1_bit at T3GCON.B1;
    const register unsigned short int T3GSS_0 = 0;
    sbit  T3GSS_0_bit at T3GCON.B0;

    // T3CON bits
    const register unsigned short int TMR3CS_1 = 7;
    sbit  TMR3CS_1_bit at T3CON.B7;
    const register unsigned short int TMR3CS_0 = 6;
    sbit  TMR3CS_0_bit at T3CON.B6;
    const register unsigned short int T3CKPS_1 = 5;
    sbit  T3CKPS_1_bit at T3CON.B5;
    const register unsigned short int T3CKPS_0 = 4;
    sbit  T3CKPS_0_bit at T3CON.B4;
    const register unsigned short int T3OSCEN = 3;
    sbit  T3OSCEN_bit at T3CON.B3;
    const register unsigned short int T3SYNC = 2;
    sbit  T3SYNC_bit at T3CON.B2;
    const register unsigned short int TMR3ON = 0;
    sbit  TMR3ON_bit at T3CON.B0;

    // TMR4 bits
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

    // PR4 bits
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

    // T4CON bits
    const register unsigned short int T4OUTPS_3 = 6;
    sbit  T4OUTPS_3_bit at T4CON.B6;
    const register unsigned short int T4OUTPS_2 = 5;
    sbit  T4OUTPS_2_bit at T4CON.B5;
    const register unsigned short int T4OUTPS_1 = 4;
    sbit  T4OUTPS_1_bit at T4CON.B4;
    const register unsigned short int T4OUTPS_0 = 3;
    sbit  T4OUTPS_0_bit at T4CON.B3;
    const register unsigned short int TMR4ON = 2;
    sbit  TMR4ON_bit at T4CON.B2;
    const register unsigned short int T4CKPS_1 = 1;
    sbit  T4CKPS_1_bit at T4CON.B1;
    const register unsigned short int T4CKPS_0 = 0;
    sbit  T4CKPS_0_bit at T4CON.B0;

    // CCPTMRS0 bits
    const register unsigned short int C3TSEL0 = 6;
    sbit  C3TSEL0_bit at CCPTMRS0.B6;
    const register unsigned short int C2TSEL0 = 3;
    sbit  C2TSEL0_bit at CCPTMRS0.B3;
    const register unsigned short int C1TSEL0 = 0;
    sbit  C1TSEL0_bit at CCPTMRS0.B0;

    // CCP1CON bits
    const register unsigned short int PM_1 = 7;
    sbit  PM_1_bit at CCP1CON.B7;
    const register unsigned short int PM_0 = 6;
    sbit  PM_0_bit at CCP1CON.B6;
    const register unsigned short int DCB_1 = 5;
    sbit  DCB_1_bit at CCP1CON.B5;
    sbit  DCB_1_CCP1CON_bit at CCP1CON.B5;
    const register unsigned short int DCB_0 = 4;
    sbit  DCB_0_bit at CCP1CON.B4;
    sbit  DCB_0_CCP1CON_bit at CCP1CON.B4;
    const register unsigned short int CCPM_3 = 3;
    sbit  CCPM_3_bit at CCP1CON.B3;
    sbit  CCPM_3_CCP1CON_bit at CCP1CON.B3;
    const register unsigned short int CCPM_2 = 2;
    sbit  CCPM_2_bit at CCP1CON.B2;
    sbit  CCPM_2_CCP1CON_bit at CCP1CON.B2;
    const register unsigned short int CCPM_1 = 1;
    sbit  CCPM_1_bit at CCP1CON.B1;
    sbit  CCPM_1_CCP1CON_bit at CCP1CON.B1;
    const register unsigned short int CCPM_0 = 0;
    sbit  CCPM_0_bit at CCP1CON.B0;
    sbit  CCPM_0_CCP1CON_bit at CCP1CON.B0;

    // CCPR1L bits
    const register unsigned short int CCPR1L_7 = 7;
    sbit  CCPR1L_7_bit at CCPR1L.B7;
    const register unsigned short int CCPR1L_6 = 6;
    sbit  CCPR1L_6_bit at CCPR1L.B6;
    const register unsigned short int CCPR1L_5 = 5;
    sbit  CCPR1L_5_bit at CCPR1L.B5;
    const register unsigned short int CCPR1L_4 = 4;
    sbit  CCPR1L_4_bit at CCPR1L.B4;
    const register unsigned short int CCPR1L_3 = 3;
    sbit  CCPR1L_3_bit at CCPR1L.B3;
    const register unsigned short int CCPR1L_2 = 2;
    sbit  CCPR1L_2_bit at CCPR1L.B2;
    const register unsigned short int CCPR1L_1 = 1;
    sbit  CCPR1L_1_bit at CCPR1L.B1;
    const register unsigned short int CCPR1L_0 = 0;
    sbit  CCPR1L_0_bit at CCPR1L.B0;

    // CCPR1H bits
    const register unsigned short int CCPR1H_7 = 7;
    sbit  CCPR1H_7_bit at CCPR1H.B7;
    const register unsigned short int CCPR1H_6 = 6;
    sbit  CCPR1H_6_bit at CCPR1H.B6;
    const register unsigned short int CCPR1H_5 = 5;
    sbit  CCPR1H_5_bit at CCPR1H.B5;
    const register unsigned short int CCPR1H_4 = 4;
    sbit  CCPR1H_4_bit at CCPR1H.B4;
    const register unsigned short int CCPR1H_3 = 3;
    sbit  CCPR1H_3_bit at CCPR1H.B3;
    const register unsigned short int CCPR1H_2 = 2;
    sbit  CCPR1H_2_bit at CCPR1H.B2;
    const register unsigned short int CCPR1H_1 = 1;
    sbit  CCPR1H_1_bit at CCPR1H.B1;
    const register unsigned short int CCPR1H_0 = 0;
    sbit  CCPR1H_0_bit at CCPR1H.B0;

    // ECCP1DEL bits
    const register unsigned short int PRSEN = 7;
    sbit  PRSEN_bit at ECCP1DEL.B7;
    const register unsigned short int PDC_6 = 6;
    sbit  PDC_6_bit at ECCP1DEL.B6;
    const register unsigned short int PDC_5 = 5;
    sbit  PDC_5_bit at ECCP1DEL.B5;
    const register unsigned short int PDC_4 = 4;
    sbit  PDC_4_bit at ECCP1DEL.B4;
    const register unsigned short int PDC_3 = 3;
    sbit  PDC_3_bit at ECCP1DEL.B3;
    const register unsigned short int PDC_2 = 2;
    sbit  PDC_2_bit at ECCP1DEL.B2;
    const register unsigned short int PDC_1 = 1;
    sbit  PDC_1_bit at ECCP1DEL.B1;
    const register unsigned short int PDC_0 = 0;
    sbit  PDC_0_bit at ECCP1DEL.B0;

    // ECCP1AS bits
    const register unsigned short int ECCPASE = 7;
    sbit  ECCPASE_bit at ECCP1AS.B7;
    const register unsigned short int ECCPAS_2 = 6;
    sbit  ECCPAS_2_bit at ECCP1AS.B6;
    const register unsigned short int ECCPAS_1 = 5;
    sbit  ECCPAS_1_bit at ECCP1AS.B5;
    const register unsigned short int ECCPAS_0 = 4;
    sbit  ECCPAS_0_bit at ECCP1AS.B4;
    const register unsigned short int PSSAC_1 = 3;
    sbit  PSSAC_1_bit at ECCP1AS.B3;
    const register unsigned short int PSSAC_0 = 2;
    sbit  PSSAC_0_bit at ECCP1AS.B2;
    const register unsigned short int PSSBD_1 = 1;
    sbit  PSSBD_1_bit at ECCP1AS.B1;
    const register unsigned short int PSSBD_0 = 0;
    sbit  PSSBD_0_bit at ECCP1AS.B0;

    // PSTR1CON bits
    const register unsigned short int CMPL_1 = 7;
    sbit  CMPL_1_bit at PSTR1CON.B7;
    const register unsigned short int CMPL_0 = 6;
    sbit  CMPL_0_bit at PSTR1CON.B6;
    const register unsigned short int STRSYNC = 4;
    sbit  STRSYNC_bit at PSTR1CON.B4;
    const register unsigned short int STRD = 3;
    sbit  STRD_bit at PSTR1CON.B3;
    const register unsigned short int STRC = 2;
    sbit  STRC_bit at PSTR1CON.B2;
    const register unsigned short int STRB = 1;
    sbit  STRB_bit at PSTR1CON.B1;
    const register unsigned short int STRA = 0;
    sbit  STRA_bit at PSTR1CON.B0;

    // CCP2CON bits
    sbit  DCB_1_CCP2CON_bit at CCP2CON.B5;
    sbit  DCB_0_CCP2CON_bit at CCP2CON.B4;
    sbit  CCPM_3_CCP2CON_bit at CCP2CON.B3;
    sbit  CCPM_2_CCP2CON_bit at CCP2CON.B2;
    sbit  CCPM_1_CCP2CON_bit at CCP2CON.B1;
    sbit  CCPM_0_CCP2CON_bit at CCP2CON.B0;

    // CCPR2L bits
    const register unsigned short int CCPR2L_7 = 7;
    sbit  CCPR2L_7_bit at CCPR2L.B7;
    const register unsigned short int CCPR2L_6 = 6;
    sbit  CCPR2L_6_bit at CCPR2L.B6;
    const register unsigned short int CCPR2L_5 = 5;
    sbit  CCPR2L_5_bit at CCPR2L.B5;
    const register unsigned short int CCPR2L_4 = 4;
    sbit  CCPR2L_4_bit at CCPR2L.B4;
    const register unsigned short int CCPR2L_3 = 3;
    sbit  CCPR2L_3_bit at CCPR2L.B3;
    const register unsigned short int CCPR2L_2 = 2;
    sbit  CCPR2L_2_bit at CCPR2L.B2;
    const register unsigned short int CCPR2L_1 = 1;
    sbit  CCPR2L_1_bit at CCPR2L.B1;
    const register unsigned short int CCPR2L_0 = 0;
    sbit  CCPR2L_0_bit at CCPR2L.B0;

    // CCPR2H bits
    const register unsigned short int CCPR2H_7 = 7;
    sbit  CCPR2H_7_bit at CCPR2H.B7;
    const register unsigned short int CCPR2H_6 = 6;
    sbit  CCPR2H_6_bit at CCPR2H.B6;
    const register unsigned short int CCPR2H_5 = 5;
    sbit  CCPR2H_5_bit at CCPR2H.B5;
    const register unsigned short int CCPR2H_4 = 4;
    sbit  CCPR2H_4_bit at CCPR2H.B4;
    const register unsigned short int CCPR2H_3 = 3;
    sbit  CCPR2H_3_bit at CCPR2H.B3;
    const register unsigned short int CCPR2H_2 = 2;
    sbit  CCPR2H_2_bit at CCPR2H.B2;
    const register unsigned short int CCPR2H_1 = 1;
    sbit  CCPR2H_1_bit at CCPR2H.B1;
    const register unsigned short int CCPR2H_0 = 0;
    sbit  CCPR2H_0_bit at CCPR2H.B0;

    // CCP3CON bits
    sbit  DCB_1_CCP3CON_bit at CCP3CON.B5;
    sbit  DCB_0_CCP3CON_bit at CCP3CON.B4;
    sbit  CCPM_3_CCP3CON_bit at CCP3CON.B3;
    sbit  CCPM_2_CCP3CON_bit at CCP3CON.B2;
    sbit  CCPM_1_CCP3CON_bit at CCP3CON.B1;
    sbit  CCPM_0_CCP3CON_bit at CCP3CON.B0;

    // CCPR3L bits
    const register unsigned short int CCPR3L_7 = 7;
    sbit  CCPR3L_7_bit at CCPR3L.B7;
    const register unsigned short int CCPR3L_6 = 6;
    sbit  CCPR3L_6_bit at CCPR3L.B6;
    const register unsigned short int CCPR3L_5 = 5;
    sbit  CCPR3L_5_bit at CCPR3L.B5;
    const register unsigned short int CCPR3L_4 = 4;
    sbit  CCPR3L_4_bit at CCPR3L.B4;
    const register unsigned short int CCPR3L_3 = 3;
    sbit  CCPR3L_3_bit at CCPR3L.B3;
    const register unsigned short int CCPR3L_2 = 2;
    sbit  CCPR3L_2_bit at CCPR3L.B2;
    const register unsigned short int CCPR3L_1 = 1;
    sbit  CCPR3L_1_bit at CCPR3L.B1;
    const register unsigned short int CCPR3L_0 = 0;
    sbit  CCPR3L_0_bit at CCPR3L.B0;

    // CCPR3H bits
    const register unsigned short int CCPR3H_7 = 7;
    sbit  CCPR3H_7_bit at CCPR3H.B7;
    const register unsigned short int CCPR3H_6 = 6;
    sbit  CCPR3H_6_bit at CCPR3H.B6;
    const register unsigned short int CCPR3H_5 = 5;
    sbit  CCPR3H_5_bit at CCPR3H.B5;
    const register unsigned short int CCPR3H_4 = 4;
    sbit  CCPR3H_4_bit at CCPR3H.B4;
    const register unsigned short int CCPR3H_3 = 3;
    sbit  CCPR3H_3_bit at CCPR3H.B3;
    const register unsigned short int CCPR3H_2 = 2;
    sbit  CCPR3H_2_bit at CCPR3H.B2;
    const register unsigned short int CCPR3H_1 = 1;
    sbit  CCPR3H_1_bit at CCPR3H.B1;
    const register unsigned short int CCPR3H_0 = 0;
    sbit  CCPR3H_0_bit at CCPR3H.B0;

    // SSP1BUF bits
    const register unsigned short int SSPBUF_7 = 7;
    sbit  SSPBUF_7_bit at SSP1BUF.B7;
    sbit  SSPBUF_7_SSP1BUF_bit at SSP1BUF.B7;
    const register unsigned short int SSPBUF_6 = 6;
    sbit  SSPBUF_6_bit at SSP1BUF.B6;
    sbit  SSPBUF_6_SSP1BUF_bit at SSP1BUF.B6;
    const register unsigned short int SSPBUF_5 = 5;
    sbit  SSPBUF_5_bit at SSP1BUF.B5;
    sbit  SSPBUF_5_SSP1BUF_bit at SSP1BUF.B5;
    const register unsigned short int SSPBUF_4 = 4;
    sbit  SSPBUF_4_bit at SSP1BUF.B4;
    sbit  SSPBUF_4_SSP1BUF_bit at SSP1BUF.B4;
    const register unsigned short int SSPBUF_3 = 3;
    sbit  SSPBUF_3_bit at SSP1BUF.B3;
    sbit  SSPBUF_3_SSP1BUF_bit at SSP1BUF.B3;
    const register unsigned short int SSPBUF_2 = 2;
    sbit  SSPBUF_2_bit at SSP1BUF.B2;
    sbit  SSPBUF_2_SSP1BUF_bit at SSP1BUF.B2;
    const register unsigned short int SSPBUF_1 = 1;
    sbit  SSPBUF_1_bit at SSP1BUF.B1;
    sbit  SSPBUF_1_SSP1BUF_bit at SSP1BUF.B1;
    const register unsigned short int SSPBUF_0 = 0;
    sbit  SSPBUF_0_bit at SSP1BUF.B0;
    sbit  SSPBUF_0_SSP1BUF_bit at SSP1BUF.B0;

    // SSP1CON1 bits
    const register unsigned short int WCOL = 7;
    sbit  WCOL_bit at SSP1CON1.B7;
    sbit  WCOL_SSP1CON1_bit at SSP1CON1.B7;
    const register unsigned short int SSPOV = 6;
    sbit  SSPOV_bit at SSP1CON1.B6;
    sbit  SSPOV_SSP1CON1_bit at SSP1CON1.B6;
    const register unsigned short int SSPEN = 5;
    sbit  SSPEN_bit at SSP1CON1.B5;
    sbit  SSPEN_SSP1CON1_bit at SSP1CON1.B5;
    const register unsigned short int CKP = 4;
    sbit  CKP_bit at SSP1CON1.B4;
    sbit  CKP_SSP1CON1_bit at SSP1CON1.B4;
    const register unsigned short int SSPM_3 = 3;
    sbit  SSPM_3_bit at SSP1CON1.B3;
    sbit  SSPM_3_SSP1CON1_bit at SSP1CON1.B3;
    const register unsigned short int SSPM_2 = 2;
    sbit  SSPM_2_bit at SSP1CON1.B2;
    sbit  SSPM_2_SSP1CON1_bit at SSP1CON1.B2;
    const register unsigned short int SSPM_1 = 1;
    sbit  SSPM_1_bit at SSP1CON1.B1;
    sbit  SSPM_1_SSP1CON1_bit at SSP1CON1.B1;
    const register unsigned short int SSPM_0 = 0;
    sbit  SSPM_0_bit at SSP1CON1.B0;
    sbit  SSPM_0_SSP1CON1_bit at SSP1CON1.B0;

    // SSP1CON2 bits
    const register unsigned short int GCEN = 7;
    sbit  GCEN_bit at SSP1CON2.B7;
    sbit  GCEN_SSP1CON2_bit at SSP1CON2.B7;
    const register unsigned short int ACKSTAT = 6;
    sbit  ACKSTAT_bit at SSP1CON2.B6;
    sbit  ACKSTAT_SSP1CON2_bit at SSP1CON2.B6;
    const register unsigned short int ACKDT = 5;
    sbit  ACKDT_bit at SSP1CON2.B5;
    sbit  ACKDT_SSP1CON2_bit at SSP1CON2.B5;
    const register unsigned short int ACKEN = 4;
    sbit  ACKEN_bit at SSP1CON2.B4;
    sbit  ACKEN_SSP1CON2_bit at SSP1CON2.B4;
    const register unsigned short int RCEN = 3;
    sbit  RCEN_bit at SSP1CON2.B3;
    sbit  RCEN_SSP1CON2_bit at SSP1CON2.B3;
    const register unsigned short int PEN = 2;
    sbit  PEN_bit at SSP1CON2.B2;
    sbit  PEN_SSP1CON2_bit at SSP1CON2.B2;
    const register unsigned short int RSEN = 1;
    sbit  RSEN_bit at SSP1CON2.B1;
    sbit  RSEN_SSP1CON2_bit at SSP1CON2.B1;
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at SSP1CON2.B0;
    sbit  SEN_SSP1CON2_bit at SSP1CON2.B0;

    // SSP1CON3 bits
    const register unsigned short int ACKTIM = 7;
    sbit  ACKTIM_bit at SSP1CON3.B7;
    sbit  ACKTIM_SSP1CON3_bit at SSP1CON3.B7;
    const register unsigned short int PCIE = 6;
    sbit  PCIE_bit at SSP1CON3.B6;
    sbit  PCIE_SSP1CON3_bit at SSP1CON3.B6;
    const register unsigned short int SCIE = 5;
    sbit  SCIE_bit at SSP1CON3.B5;
    sbit  SCIE_SSP1CON3_bit at SSP1CON3.B5;
    const register unsigned short int BOEN = 4;
    sbit  BOEN_bit at SSP1CON3.B4;
    sbit  BOEN_SSP1CON3_bit at SSP1CON3.B4;
    const register unsigned short int SDAHT = 3;
    sbit  SDAHT_bit at SSP1CON3.B3;
    sbit  SDAHT_SSP1CON3_bit at SSP1CON3.B3;
    const register unsigned short int SBCDE = 2;
    sbit  SBCDE_bit at SSP1CON3.B2;
    sbit  SBCDE_SSP1CON3_bit at SSP1CON3.B2;
    const register unsigned short int AHEN = 1;
    sbit  AHEN_bit at SSP1CON3.B1;
    sbit  AHEN_SSP1CON3_bit at SSP1CON3.B1;
    const register unsigned short int DHEN = 0;
    sbit  DHEN_bit at SSP1CON3.B0;
    sbit  DHEN_SSP1CON3_bit at SSP1CON3.B0;

    // SSP1STAT bits
    const register unsigned short int SMP = 7;
    sbit  SMP_bit at SSP1STAT.B7;
    sbit  SMP_SSP1STAT_bit at SSP1STAT.B7;
    const register unsigned short int CKE = 6;
    sbit  CKE_bit at SSP1STAT.B6;
    sbit  CKE_SSP1STAT_bit at SSP1STAT.B6;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at SSP1STAT.B5;
    sbit  D_A_SSP1STAT_bit at SSP1STAT.B5;
    const register unsigned short int P = 4;
    sbit  P_bit at SSP1STAT.B4;
    sbit  P_SSP1STAT_bit at SSP1STAT.B4;
    const register unsigned short int S = 3;
    sbit  S_bit at SSP1STAT.B3;
    sbit  S_SSP1STAT_bit at SSP1STAT.B3;
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at SSP1STAT.B2;
    sbit  R_W_SSP1STAT_bit at SSP1STAT.B2;
    const register unsigned short int UA = 1;
    sbit  UA_bit at SSP1STAT.B1;
    sbit  UA_SSP1STAT_bit at SSP1STAT.B1;
    const register unsigned short int BF = 0;
    sbit  BF_bit at SSP1STAT.B0;
    sbit  BF_SSP1STAT_bit at SSP1STAT.B0;

    // SSP1ADD bits
    const register unsigned short int SSPADD_7 = 7;
    sbit  SSPADD_7_bit at SSP1ADD.B7;
    sbit  SSPADD_7_SSP1ADD_bit at SSP1ADD.B7;
    const register unsigned short int SSPADD_6 = 6;
    sbit  SSPADD_6_bit at SSP1ADD.B6;
    sbit  SSPADD_6_SSP1ADD_bit at SSP1ADD.B6;
    const register unsigned short int SSPADD_5 = 5;
    sbit  SSPADD_5_bit at SSP1ADD.B5;
    sbit  SSPADD_5_SSP1ADD_bit at SSP1ADD.B5;
    const register unsigned short int SSPADD_4 = 4;
    sbit  SSPADD_4_bit at SSP1ADD.B4;
    sbit  SSPADD_4_SSP1ADD_bit at SSP1ADD.B4;
    const register unsigned short int SSPADD_3 = 3;
    sbit  SSPADD_3_bit at SSP1ADD.B3;
    sbit  SSPADD_3_SSP1ADD_bit at SSP1ADD.B3;
    const register unsigned short int SSPADD_2 = 2;
    sbit  SSPADD_2_bit at SSP1ADD.B2;
    sbit  SSPADD_2_SSP1ADD_bit at SSP1ADD.B2;
    const register unsigned short int SSPADD_1 = 1;
    sbit  SSPADD_1_bit at SSP1ADD.B1;
    sbit  SSPADD_1_SSP1ADD_bit at SSP1ADD.B1;
    const register unsigned short int SSPADD_0 = 0;
    sbit  SSPADD_0_bit at SSP1ADD.B0;
    sbit  SSPADD_0_SSP1ADD_bit at SSP1ADD.B0;

    // SSP1MSK bits
    const register unsigned short int MSK7 = 7;
    sbit  MSK7_bit at SSP1MSK.B7;
    sbit  MSK7_SSP1MSK_bit at SSP1MSK.B7;
    const register unsigned short int MSK6 = 6;
    sbit  MSK6_bit at SSP1MSK.B6;
    sbit  MSK6_SSP1MSK_bit at SSP1MSK.B6;
    const register unsigned short int MSK5 = 5;
    sbit  MSK5_bit at SSP1MSK.B5;
    sbit  MSK5_SSP1MSK_bit at SSP1MSK.B5;
    const register unsigned short int MSK4 = 4;
    sbit  MSK4_bit at SSP1MSK.B4;
    sbit  MSK4_SSP1MSK_bit at SSP1MSK.B4;
    const register unsigned short int MSK3 = 3;
    sbit  MSK3_bit at SSP1MSK.B3;
    sbit  MSK3_SSP1MSK_bit at SSP1MSK.B3;
    const register unsigned short int MSK2 = 2;
    sbit  MSK2_bit at SSP1MSK.B2;
    sbit  MSK2_SSP1MSK_bit at SSP1MSK.B2;
    const register unsigned short int MSK1 = 1;
    sbit  MSK1_bit at SSP1MSK.B1;
    sbit  MSK1_SSP1MSK_bit at SSP1MSK.B1;
    const register unsigned short int MSK0 = 0;
    sbit  MSK0_bit at SSP1MSK.B0;
    sbit  MSK0_SSP1MSK_bit at SSP1MSK.B0;

    // SSP2BUF bits
    sbit  SSPBUF_7_SSP2BUF_bit at SSP2BUF.B7;
    sbit  SSPBUF_6_SSP2BUF_bit at SSP2BUF.B6;
    sbit  SSPBUF_5_SSP2BUF_bit at SSP2BUF.B5;
    sbit  SSPBUF_4_SSP2BUF_bit at SSP2BUF.B4;
    sbit  SSPBUF_3_SSP2BUF_bit at SSP2BUF.B3;
    sbit  SSPBUF_2_SSP2BUF_bit at SSP2BUF.B2;
    sbit  SSPBUF_1_SSP2BUF_bit at SSP2BUF.B1;
    sbit  SSPBUF_0_SSP2BUF_bit at SSP2BUF.B0;

    // SSP2CON1 bits
    sbit  WCOL_SSP2CON1_bit at SSP2CON1.B7;
    sbit  SSPOV_SSP2CON1_bit at SSP2CON1.B6;
    sbit  SSPEN_SSP2CON1_bit at SSP2CON1.B5;
    sbit  CKP_SSP2CON1_bit at SSP2CON1.B4;
    sbit  SSPM_3_SSP2CON1_bit at SSP2CON1.B3;
    sbit  SSPM_2_SSP2CON1_bit at SSP2CON1.B2;
    sbit  SSPM_1_SSP2CON1_bit at SSP2CON1.B1;
    sbit  SSPM_0_SSP2CON1_bit at SSP2CON1.B0;

    // SSP2CON2 bits
    sbit  GCEN_SSP2CON2_bit at SSP2CON2.B7;
    sbit  ACKSTAT_SSP2CON2_bit at SSP2CON2.B6;
    sbit  ACKDT_SSP2CON2_bit at SSP2CON2.B5;
    sbit  ACKEN_SSP2CON2_bit at SSP2CON2.B4;
    sbit  RCEN_SSP2CON2_bit at SSP2CON2.B3;
    sbit  PEN_SSP2CON2_bit at SSP2CON2.B2;
    sbit  RSEN_SSP2CON2_bit at SSP2CON2.B1;
    sbit  SEN_SSP2CON2_bit at SSP2CON2.B0;

    // SSP2CON3 bits
    sbit  ACKTIM_SSP2CON3_bit at SSP2CON3.B7;
    sbit  PCIE_SSP2CON3_bit at SSP2CON3.B6;
    sbit  SCIE_SSP2CON3_bit at SSP2CON3.B5;
    sbit  BOEN_SSP2CON3_bit at SSP2CON3.B4;
    sbit  SDAHT_SSP2CON3_bit at SSP2CON3.B3;
    sbit  SBCDE_SSP2CON3_bit at SSP2CON3.B2;
    sbit  AHEN_SSP2CON3_bit at SSP2CON3.B1;
    sbit  DHEN_SSP2CON3_bit at SSP2CON3.B0;

    // SSP2STAT bits
    sbit  SMP_SSP2STAT_bit at SSP2STAT.B7;
    sbit  CKE_SSP2STAT_bit at SSP2STAT.B6;
    sbit  D_A_SSP2STAT_bit at SSP2STAT.B5;
    sbit  P_SSP2STAT_bit at SSP2STAT.B4;
    sbit  S_SSP2STAT_bit at SSP2STAT.B3;
    sbit  R_W_SSP2STAT_bit at SSP2STAT.B2;
    sbit  UA_SSP2STAT_bit at SSP2STAT.B1;
    sbit  BF_SSP2STAT_bit at SSP2STAT.B0;

    // SSP2ADD bits
    sbit  SSPADD_7_SSP2ADD_bit at SSP2ADD.B7;
    sbit  SSPADD_6_SSP2ADD_bit at SSP2ADD.B6;
    sbit  SSPADD_5_SSP2ADD_bit at SSP2ADD.B5;
    sbit  SSPADD_4_SSP2ADD_bit at SSP2ADD.B4;
    sbit  SSPADD_3_SSP2ADD_bit at SSP2ADD.B3;
    sbit  SSPADD_2_SSP2ADD_bit at SSP2ADD.B2;
    sbit  SSPADD_1_SSP2ADD_bit at SSP2ADD.B1;
    sbit  SSPADD_0_SSP2ADD_bit at SSP2ADD.B0;

    // SSP2MSK bits
    sbit  MSK7_SSP2MSK_bit at SSP2MSK.B7;
    sbit  MSK6_SSP2MSK_bit at SSP2MSK.B6;
    sbit  MSK5_SSP2MSK_bit at SSP2MSK.B5;
    sbit  MSK4_SSP2MSK_bit at SSP2MSK.B4;
    sbit  MSK3_SSP2MSK_bit at SSP2MSK.B3;
    sbit  MSK2_SSP2MSK_bit at SSP2MSK.B2;
    sbit  MSK1_SSP2MSK_bit at SSP2MSK.B1;
    sbit  MSK0_SSP2MSK_bit at SSP2MSK.B0;

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

    // TRISA bits
    const register unsigned short int TRISA6 = 6;
    sbit  TRISA6_bit at TRISA.B6;
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

    // LATA bits
    const register unsigned short int LATA6 = 6;
    sbit  LATA6_bit at LATA.B6;
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
    const register unsigned short int ODA6 = 6;
    sbit  ODA6_bit at ODCA.B6;
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
    const register unsigned short int TRISB9 = 9;
    sbit  TRISB9_bit at TRISB.B9;
    const register unsigned short int TRISB8 = 8;
    sbit  TRISB8_bit at TRISB.B8;
    const register unsigned short int TRISB7 = 7;
    sbit  TRISB7_bit at TRISB.B7;
    const register unsigned short int TRISB4 = 4;
    sbit  TRISB4_bit at TRISB.B4;
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
    const register unsigned short int RB9 = 9;
    sbit  RB9_bit at PORTB.B9;
    const register unsigned short int RB8 = 8;
    sbit  RB8_bit at PORTB.B8;
    const register unsigned short int RB7 = 7;
    sbit  RB7_bit at PORTB.B7;
    const register unsigned short int RB4 = 4;
    sbit  RB4_bit at PORTB.B4;
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
    const register unsigned short int LATB9 = 9;
    sbit  LATB9_bit at LATB.B9;
    const register unsigned short int LATB8 = 8;
    sbit  LATB8_bit at LATB.B8;
    const register unsigned short int LATB7 = 7;
    sbit  LATB7_bit at LATB.B7;
    const register unsigned short int LATB4 = 4;
    sbit  LATB4_bit at LATB.B4;
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
    const register unsigned short int ODB9 = 9;
    sbit  ODB9_bit at ODCB.B9;
    const register unsigned short int ODB8 = 8;
    sbit  ODB8_bit at ODCB.B8;
    const register unsigned short int ODB7 = 7;
    sbit  ODB7_bit at ODCB.B7;
    const register unsigned short int ODB4 = 4;
    sbit  ODB4_bit at ODCB.B4;
    const register unsigned short int ODB2 = 2;
    sbit  ODB2_bit at ODCB.B2;
    const register unsigned short int ODB1 = 1;
    sbit  ODB1_bit at ODCB.B1;
    const register unsigned short int ODB0 = 0;
    sbit  ODB0_bit at ODCB.B0;

    // PADCFG1 bits
    const register unsigned short int SDO2DIS = 11;
    sbit  SDO2DIS_bit at PADCFG1.B11;
    const register unsigned short int SCK2DIS = 10;
    sbit  SCK2DIS_bit at PADCFG1.B10;
    const register unsigned short int SDO1DIS = 9;
    sbit  SDO1DIS_bit at PADCFG1.B9;
    const register unsigned short int SCK1DIS = 8;
    sbit  SCK1DIS_bit at PADCFG1.B8;

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
    const register unsigned short int OFFCAL = 12;
    sbit  OFFCAL_bit at AD1CON2.B12;
    sbit  OFFCAL_AD1CON2_bit at AD1CON2.B12;
    sbit  OFFCAL_ADCON2_bit at ADCON2.B12;
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
    const register unsigned short int EXTSAM = 14;
    sbit  EXTSAM_bit at AD1CON3.B14;
    sbit  EXTSAM_AD1CON3_bit at AD1CON3.B14;
    sbit  EXTSAM_ADCON3_bit at ADCON3.B14;
    const register unsigned short int PUMPEN = 13;
    sbit  PUMPEN_bit at AD1CON3.B13;
    sbit  PUMPEN_AD1CON3_bit at AD1CON3.B13;
    sbit  PUMPEN_ADCON3_bit at ADCON3.B13;
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

    // AD1CSSL bits
    const register unsigned short int CSSL15 = 15;
    sbit  CSSL15_bit at AD1CSSL.B15;
    sbit  CSSL15_AD1CSSL_bit at AD1CSSL.B15;
    sbit  CSSL15_ADCSSL_bit at ADCSSL.B15;
    const register unsigned short int CSSL14 = 14;
    sbit  CSSL14_bit at AD1CSSL.B14;
    sbit  CSSL14_AD1CSSL_bit at AD1CSSL.B14;
    sbit  CSSL14_ADCSSL_bit at ADCSSL.B14;
    const register unsigned short int CSSL13 = 13;
    sbit  CSSL13_bit at AD1CSSL.B13;
    sbit  CSSL13_AD1CSSL_bit at AD1CSSL.B13;
    sbit  CSSL13_ADCSSL_bit at ADCSSL.B13;
    const register unsigned short int CSSL12 = 12;
    sbit  CSSL12_bit at AD1CSSL.B12;
    sbit  CSSL12_AD1CSSL_bit at AD1CSSL.B12;
    sbit  CSSL12_ADCSSL_bit at ADCSSL.B12;
    const register unsigned short int CSSL11 = 11;
    sbit  CSSL11_bit at AD1CSSL.B11;
    sbit  CSSL11_AD1CSSL_bit at AD1CSSL.B11;
    sbit  CSSL11_ADCSSL_bit at ADCSSL.B11;
    const register unsigned short int CSSL10 = 10;
    sbit  CSSL10_bit at AD1CSSL.B10;
    sbit  CSSL10_AD1CSSL_bit at AD1CSSL.B10;
    sbit  CSSL10_ADCSSL_bit at ADCSSL.B10;
    const register unsigned short int CSSL9 = 9;
    sbit  CSSL9_bit at AD1CSSL.B9;
    sbit  CSSL9_AD1CSSL_bit at AD1CSSL.B9;
    sbit  CSSL9_ADCSSL_bit at ADCSSL.B9;
    const register unsigned short int CSSL8 = 8;
    sbit  CSSL8_bit at AD1CSSL.B8;
    sbit  CSSL8_AD1CSSL_bit at AD1CSSL.B8;
    sbit  CSSL8_ADCSSL_bit at ADCSSL.B8;
    const register unsigned short int CSSL7 = 7;
    sbit  CSSL7_bit at AD1CSSL.B7;
    sbit  CSSL7_AD1CSSL_bit at AD1CSSL.B7;
    sbit  CSSL7_ADCSSL_bit at ADCSSL.B7;
    const register unsigned short int CSSL6 = 6;
    sbit  CSSL6_bit at AD1CSSL.B6;
    sbit  CSSL6_AD1CSSL_bit at AD1CSSL.B6;
    sbit  CSSL6_ADCSSL_bit at ADCSSL.B6;
    const register unsigned short int CSSL4 = 4;
    sbit  CSSL4_bit at AD1CSSL.B4;
    sbit  CSSL4_AD1CSSL_bit at AD1CSSL.B4;
    sbit  CSSL4_ADCSSL_bit at ADCSSL.B4;
    const register unsigned short int CSSL3 = 3;
    sbit  CSSL3_bit at AD1CSSL.B3;
    sbit  CSSL3_AD1CSSL_bit at AD1CSSL.B3;
    sbit  CSSL3_ADCSSL_bit at ADCSSL.B3;
    const register unsigned short int CSSL2 = 2;
    sbit  CSSL2_bit at AD1CSSL.B2;
    sbit  CSSL2_AD1CSSL_bit at AD1CSSL.B2;
    sbit  CSSL2_ADCSSL_bit at ADCSSL.B2;
    const register unsigned short int CSSL1 = 1;
    sbit  CSSL1_bit at AD1CSSL.B1;
    sbit  CSSL1_AD1CSSL_bit at AD1CSSL.B1;
    sbit  CSSL1_ADCSSL_bit at ADCSSL.B1;
    const register unsigned short int CSSL0 = 0;
    sbit  CSSL0_bit at AD1CSSL.B0;
    sbit  CSSL0_AD1CSSL_bit at AD1CSSL.B0;
    sbit  CSSL0_ADCSSL_bit at ADCSSL.B0;

    // ANCFG bits
    const register unsigned short int VBGEN = 0;
    sbit  VBGEN_bit at ANCFG.B0;

    // ANSA bits
    const register unsigned short int ANSA3 = 3;
    sbit  ANSA3_bit at ANSA.B3;
    const register unsigned short int ANSA2 = 2;
    sbit  ANSA2_bit at ANSA.B2;
    const register unsigned short int ANSA1 = 1;
    sbit  ANSA1_bit at ANSA.B1;
    const register unsigned short int ANSA0 = 0;
    sbit  ANSA0_bit at ANSA.B0;

    // ANSB bits
    const register unsigned short int ANSB15 = 15;
    sbit  ANSB15_bit at ANSB.B15;
    const register unsigned short int ANSB14 = 14;
    sbit  ANSB14_bit at ANSB.B14;
    const register unsigned short int ANSB13 = 13;
    sbit  ANSB13_bit at ANSB.B13;
    const register unsigned short int ANSB12 = 12;
    sbit  ANSB12_bit at ANSB.B12;
    const register unsigned short int ANSB4 = 4;
    sbit  ANSB4_bit at ANSB.B4;
    const register unsigned short int ANSB2 = 2;
    sbit  ANSB2_bit at ANSB.B2;
    const register unsigned short int ANSB1 = 1;
    sbit  ANSB1_bit at ANSB.B1;
    const register unsigned short int ANSB0 = 0;
    sbit  ANSB0_bit at ANSB.B0;

    // CMSTAT bits
    const register unsigned short int CMIDL = 15;
    sbit  CMIDL_bit at CMSTAT.B15;
    const register unsigned short int C2EVT = 9;
    sbit  C2EVT_bit at CMSTAT.B9;
    const register unsigned short int C1EVT = 8;
    sbit  C1EVT_bit at CMSTAT.B8;
    const register unsigned short int C2OUT = 1;
    sbit  C2OUT_bit at CMSTAT.B1;
    const register unsigned short int C1OUT = 0;
    sbit  C1OUT_bit at CMSTAT.B0;

    // CVRCON bits
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
    const register unsigned short int CON = 15;
    sbit  CON_bit at CM1CON.B15;
    sbit  CON_CM1CON_bit at CM1CON.B15;
    const register unsigned short int COE = 14;
    sbit  COE_bit at CM1CON.B14;
    sbit  COE_CM1CON_bit at CM1CON.B14;
    const register unsigned short int CPOL = 13;
    sbit  CPOL_bit at CM1CON.B13;
    sbit  CPOL_CM1CON_bit at CM1CON.B13;
    const register unsigned short int CLPWR = 12;
    sbit  CLPWR_bit at CM1CON.B12;
    sbit  CLPWR_CM1CON_bit at CM1CON.B12;
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
    sbit  CLPWR_CM2CON_bit at CM2CON.B12;
    sbit  CEVT_CM2CON_bit at CM2CON.B9;
    sbit  COUT_CM2CON_bit at CM2CON.B8;
    sbit  EVPOL_1_CM2CON_bit at CM2CON.B7;
    sbit  EVPOL_0_CM2CON_bit at CM2CON.B6;
    sbit  CREF_CM2CON_bit at CM2CON.B4;
    sbit  CCH_1_CM2CON_bit at CM2CON.B1;
    sbit  CCH_0_CM2CON_bit at CM2CON.B0;

    // RCON bits
    const register unsigned short int TRAPR = 15;
    sbit  TRAPR_bit at RCON.B15;
    const register unsigned short int IOPUWR = 14;
    sbit  IOPUWR_bit at RCON.B14;
    const register unsigned short int SBOREN = 13;
    sbit  SBOREN_bit at RCON.B13;
    const register unsigned short int CM = 9;
    sbit  CM_bit at RCON.B9;
    const register unsigned short int PMSLP = 8;
    sbit  PMSLP_bit at RCON.B8;
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
    const register unsigned short int CF = 3;
    sbit  CF_bit at OSCCON.B3;
    const register unsigned short int SOSCDRV = 2;
    sbit  SOSCDRV_bit at OSCCON.B2;
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

    // HLVDCON bits
    const register unsigned short int HLVDEN = 15;
    sbit  HLVDEN_bit at HLVDCON.B15;
    const register unsigned short int HLSIDL = 13;
    sbit  HLSIDL_bit at HLVDCON.B13;
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

    // NVMCON bits
    const register unsigned short int WR = 15;
    sbit  WR_bit at NVMCON.B15;
    const register unsigned short int WREN = 14;
    sbit  WREN_bit at NVMCON.B14;
    const register unsigned short int WRERR = 13;
    sbit  WRERR_bit at NVMCON.B13;
    const register unsigned short int PGMONLY = 12;
    sbit  PGMONLY_bit at NVMCON.B12;
    const register unsigned short int ERASE_ = 6;
    sbit  ERASE_bit at NVMCON.B6;
    const register unsigned short int NVMOP_5 = 5;
    sbit  NVMOP_5_bit at NVMCON.B5;
    const register unsigned short int NVMOP_4 = 4;
    sbit  NVMOP_4_bit at NVMCON.B4;
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

    // ULPWCON bits
    const register unsigned short int ULPEN = 15;
    sbit  ULPEN_bit at ULPWCON.B15;
    const register unsigned short int ULPSIDL = 13;
    sbit  ULPSIDL_bit at ULPWCON.B13;
    const register unsigned short int ULPSINK = 8;
    sbit  ULPSINK_bit at ULPWCON.B8;

    // PMD1 bits
    const register unsigned short int T4MD = 14;
    sbit  T4MD_bit at PMD1.B14;
    const register unsigned short int T3MD = 13;
    sbit  T3MD_bit at PMD1.B13;
    const register unsigned short int T2MD = 12;
    sbit  T2MD_bit at PMD1.B12;
    const register unsigned short int T1MD = 11;
    sbit  T1MD_bit at PMD1.B11;
    const register unsigned short int SSP1MD = 7;
    sbit  SSP1MD_bit at PMD1.B7;
    const register unsigned short int U2MD = 6;
    sbit  U2MD_bit at PMD1.B6;
    const register unsigned short int U1MD = 5;
    sbit  U1MD_bit at PMD1.B5;
    const register unsigned short int ADC1MD = 0;
    sbit  ADC1MD_bit at PMD1.B0;

    // PMD2 bits
    const register unsigned short int CCP3MD = 2;
    sbit  CCP3MD_bit at PMD2.B2;
    const register unsigned short int CCP2MD = 1;
    sbit  CCP2MD_bit at PMD2.B1;
    const register unsigned short int CCP1MD = 0;
    sbit  CCP1MD_bit at PMD2.B0;

    // PMD3 bits
    const register unsigned short int CMPMD = 10;
    sbit  CMPMD_bit at PMD3.B10;
    const register unsigned short int SSP2MD = 1;
    sbit  SSP2MD_bit at PMD3.B1;

    // PMD4 bits
    const register unsigned short int ULPWUMD = 7;
    sbit  ULPWUMD_bit at PMD4.B7;
    const register unsigned short int EEMD = 4;
    sbit  EEMD_bit at PMD4.B4;
    const register unsigned short int REFOMD = 3;
    sbit  REFOMD_bit at PMD4.B3;
    const register unsigned short int HLVDMD = 1;
    sbit  HLVDMD_bit at PMD4.B1;

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
      unsigned :1;
      unsigned CN8PDE:1;
      unsigned :2;
      unsigned CN11PDE:1;
      unsigned CN12PDE:1;
      unsigned CN13PDE:1;
      unsigned CN14PDE:1;
} typeCNPD1BITS;
sfr volatile typeCNPD1BITS CNPD1bits absolute 0x056;

// backward compatibility for CNPD2BITS
    typedef struct tagCNPD2BITS {
      unsigned :5;
      unsigned CN21PDE:1;
      unsigned CN22PDE:1;
      unsigned CN23PDE:1;
      unsigned :5;
      unsigned CN29PDE:1;
      unsigned CN30PDE:1;
} typeCNPD2BITS;
sfr volatile typeCNPD2BITS CNPD2bits absolute 0x058;

// backward compatibility for CNEN1BITS
    typedef struct tagCNEN1BITS {
      unsigned CN0IE:1;
      unsigned CN1IE:1;
      unsigned CN2IE:1;
      unsigned CN3IE:1;
      unsigned CN4IE:1;
      unsigned CN5IE:1;
      unsigned CN6IE:1;
      unsigned :1;
      unsigned CN8IE:1;
      unsigned :2;
      unsigned CN11IE:1;
      unsigned CN12IE:1;
      unsigned CN13IE:1;
      unsigned CN14IE:1;
} typeCNEN1BITS;
sfr volatile typeCNEN1BITS CNEN1bits absolute 0x062;

// backward compatibility for CNEN2BITS
    typedef struct tagCNEN2BITS {
      unsigned :5;
      unsigned CN21IE:1;
      unsigned CN22IE:1;
      unsigned CN23IE:1;
      unsigned :5;
      unsigned CN29IE:1;
      unsigned CN30IE:1;
} typeCNEN2BITS;
sfr volatile typeCNEN2BITS CNEN2bits absolute 0x064;

// backward compatibility for CNPU1BITS
    typedef struct tagCNPU1BITS {
      unsigned CN0PUE:1;
      unsigned CN1PUE:1;
      unsigned CN2PUE:1;
      unsigned CN3PUE:1;
      unsigned CN4PUE:1;
      unsigned CN5PUE:1;
      unsigned CN6PUE:1;
      unsigned :1;
      unsigned CN8PUE:1;
      unsigned :2;
      unsigned CN11PUE:1;
      unsigned CN12PUE:1;
      unsigned CN13PUE:1;
      unsigned CN14PUE:1;
} typeCNPU1BITS;
sfr volatile typeCNPU1BITS CNPU1bits absolute 0x06E;

// backward compatibility for CNPU2BITS
    typedef struct tagCNPU2BITS {
      unsigned :5;
      unsigned CN21PUE:1;
      unsigned CN22PUE:1;
      unsigned CN23PUE:1;
      unsigned :5;
      unsigned CN29PUE:1;
      unsigned CN30PUE:1;
} typeCNPU2BITS;
sfr volatile typeCNPU2BITS CNPU2bits absolute 0x070;

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
      unsigned :1;
      unsigned CCP1IF:1;
      unsigned T1IF:1;
      unsigned :2;
      unsigned CCP2IF:1;
      unsigned T2IF:1;
      unsigned T3IF:1;
      unsigned :2;
      unsigned U1RXIF:1;
      unsigned U1TXIF:1;
      unsigned AD1IF:1;
      unsigned :1;
      unsigned NVMIF:1;
} typeIFS0BITS;
sfr volatile typeIFS0BITS IFS0bits absolute 0x084;

// backward compatibility for IFS1BITS
    typedef struct tagIFS1BITS {
      unsigned SSP1IF:1;
      unsigned BCL1IF:1;
      unsigned CMIF:1;
      unsigned CNIF:1;
      unsigned INT1IF:1;
      unsigned :4;
      unsigned CCP3IF:1;
      unsigned :1;
      unsigned T4IF:1;
      unsigned :1;
      unsigned INT2IF:1;
      unsigned U2RXIF:1;
      unsigned U2TXIF:1;
} typeIFS1BITS;
sfr volatile typeIFS1BITS IFS1bits absolute 0x086;

// backward compatibility for IFS2BITS
    typedef struct tagIFS2BITS {
      unsigned :5;
      unsigned T3GIF:1;
} typeIFS2BITS;
sfr volatile typeIFS2BITS IFS2bits absolute 0x088;

// backward compatibility for IFS3BITS
    typedef struct tagIFS3BITS {
      unsigned :1;
      unsigned SSP2IF:1;
      unsigned BCL2IF:1;
} typeIFS3BITS;
sfr volatile typeIFS3BITS IFS3bits absolute 0x08A;

// backward compatibility for IFS4BITS
    typedef struct tagIFS4BITS {
      unsigned :1;
      unsigned U1ERIF:1;
      unsigned U2ERIF:1;
      unsigned :5;
      unsigned HLVDIF:1;
} typeIFS4BITS;
sfr volatile typeIFS4BITS IFS4bits absolute 0x08C;

// backward compatibility for IFS5BITS
    typedef struct tagIFS5BITS {
      unsigned ULPWUIF:1;
} typeIFS5BITS;
sfr volatile typeIFS5BITS IFS5bits absolute 0x08E;

// backward compatibility for IEC0BITS
    typedef struct tagIEC0BITS {
      unsigned INT0IE:1;
      unsigned :1;
      unsigned CCP1IE:1;
      unsigned T1IE:1;
      unsigned :2;
      unsigned CCP2IE:1;
      unsigned T2IE:1;
      unsigned T3IE:1;
      unsigned :2;
      unsigned U1RXIE:1;
      unsigned U1TXIE:1;
      unsigned AD1IE:1;
      unsigned :1;
      unsigned NVMIE:1;
} typeIEC0BITS;
sfr volatile typeIEC0BITS IEC0bits absolute 0x094;

// backward compatibility for IEC1BITS
    typedef struct tagIEC1BITS {
      unsigned SSP1IE:1;
      unsigned BCL1IE:1;
      unsigned CMIE:1;
      unsigned CNIE:1;
      unsigned INT1IE:1;
      unsigned :4;
      unsigned CCP3IE:1;
      unsigned :1;
      unsigned T4IE:1;
      unsigned :1;
      unsigned INT2IE:1;
      unsigned U2RXIE:1;
      unsigned U2TXIE:1;
} typeIEC1BITS;
sfr volatile typeIEC1BITS IEC1bits absolute 0x096;

// backward compatibility for IEC2BITS
    typedef struct tagIEC2BITS {
      unsigned :5;
      unsigned T3GIE:1;
} typeIEC2BITS;
sfr volatile typeIEC2BITS IEC2bits absolute 0x098;

// backward compatibility for IEC3BITS
    typedef struct tagIEC3BITS {
      unsigned :1;
      unsigned SSP2IE:1;
      unsigned BCL2IE:1;
} typeIEC3BITS;
sfr volatile typeIEC3BITS IEC3bits absolute 0x09A;

// backward compatibility for IEC4BITS
    typedef struct tagIEC4BITS {
      unsigned :1;
      unsigned U1ERIE:1;
      unsigned U2ERIE:1;
      unsigned :5;
      unsigned HLVDIE:1;
} typeIEC4BITS;
sfr volatile typeIEC4BITS IEC4bits absolute 0x09C;

// backward compatibility for IEC5BITS
    typedef struct tagIEC5BITS {
      unsigned ULPWUIE:1;
} typeIEC5BITS;
sfr volatile typeIEC5BITS IEC5bits absolute 0x09E;

// backward compatibility for IPC0BITS
    typedef struct tagIPC0BITS {
      union {
        struct {
          unsigned INT0IP:3;
          unsigned :5;
          unsigned CCP1IP:3;
          unsigned :1;
          unsigned T1IP:3;
        };
        struct {
          unsigned INT0IP0:1;
          unsigned INT0IP1:1;
          unsigned INT0IP2:1;
          unsigned :5;
          unsigned CCP1IP0:1;
          unsigned CCP1IP1:1;
          unsigned CCP1IP2:1;
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
          unsigned :8;
          unsigned CCP2IP:3;
          unsigned :1;
          unsigned T2IP:3;
        };
        struct {
          unsigned :8;
          unsigned CCP2IP0:1;
          unsigned CCP2IP1:1;
          unsigned CCP2IP2:1;
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
          unsigned :9;
          unsigned U1RXIP:3;
        };
        struct {
          unsigned T3IP0:1;
          unsigned T3IP1:1;
          unsigned T3IP2:1;
          unsigned :9;
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
          unsigned :5;
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
          unsigned :5;
          unsigned NVMIP0:1;
          unsigned NVMIP1:1;
          unsigned NVMIP2:1;
        };
      };
} typeIPC3BITS;
sfr volatile typeIPC3BITS IPC3bits absolute 0x0AA;

// backward compatibility for IPC4BITS
    typedef struct tagIPC4BITS {
      union {
        struct {
          unsigned SSP1IP:3;
          unsigned :1;
          unsigned BCL1IP:3;
          unsigned :1;
          unsigned CMIP:3;
          unsigned :1;
          unsigned CNIP:3;
        };
        struct {
          unsigned SSP1IP0:1;
          unsigned SSP1IP1:1;
          unsigned SSP1IP2:1;
          unsigned :1;
          unsigned BCL1IP0:1;
          unsigned BCL1IP1:1;
          unsigned BCL1IP2:1;
          unsigned :1;
          unsigned CMIP0:1;
          unsigned CMIP1:1;
          unsigned CMIP2:1;
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
          unsigned :4;
          unsigned CCP3IP:3;
          unsigned :5;
          unsigned T4IP:3;
        };
        struct {
          unsigned :4;
          unsigned CCP3IP0:1;
          unsigned CCP3IP1:1;
          unsigned CCP3IP2:1;
          unsigned :5;
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
          unsigned :4;
          unsigned INT2IP:3;
          unsigned :1;
          unsigned U2RXIP:3;
          unsigned :1;
          unsigned U2TXIP:3;
        };
        struct {
          unsigned :4;
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

// backward compatibility for IPC9BITS
    typedef struct tagIPC9BITS {
      union {
        struct {
          unsigned :4;
          unsigned T3GIP:3;
        };
        struct {
          unsigned :4;
          unsigned T3GIP0:1;
          unsigned T3GIP1:1;
          unsigned T3GIP2:1;
        };
      };
} typeIPC9BITS;
sfr volatile typeIPC9BITS IPC9bits absolute 0x0B6;

// backward compatibility for IPC12BITS
    typedef struct tagIPC12BITS {
      union {
        struct {
          unsigned :4;
          unsigned SSP2IP:3;
          unsigned :1;
          unsigned BCL2IP:3;
        };
        struct {
          unsigned :4;
          unsigned SSP2IP0:1;
          unsigned SSP2IP1:1;
          unsigned SSP2IP2:1;
          unsigned :1;
          unsigned BCL2IP0:1;
          unsigned BCL2IP1:1;
          unsigned BCL2IP2:1;
        };
      };
} typeIPC12BITS;
sfr volatile typeIPC12BITS IPC12bits absolute 0x0BC;

// backward compatibility for IPC16BITS
    typedef struct tagIPC16BITS {
      union {
        struct {
          unsigned :4;
          unsigned U1ERIP:3;
          unsigned :1;
          unsigned U2ERIP:3;
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
        };
      };
} typeIPC16BITS;
sfr volatile typeIPC16BITS IPC16bits absolute 0x0C4;

// backward compatibility for IPC18BITS
    typedef struct tagIPC18BITS {
      union {
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
sfr volatile typeIPC18BITS IPC18bits absolute 0x0C8;

// backward compatibility for IPC20BITS
    typedef struct tagIPC20BITS {
      union {
        struct {
          unsigned ULPWUIP:3;
        };
        struct {
          unsigned ULPWUIP0:1;
          unsigned ULPWUIP1:1;
          unsigned ULPWUIP2:1;
        };
      };
} typeIPC20BITS;
sfr volatile typeIPC20BITS IPC20bits absolute 0x0CC;

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
          unsigned TECS0:1;
          unsigned TECS1:1;
        };
        struct {
          unsigned :8;
          unsigned T1ECS:2;
        };
        struct {
          unsigned :8;
          unsigned T1ECS0:1;
          unsigned T1ECS1:1;
        };
      };
} typeT1CONBITS;
sfr volatile typeT1CONBITS T1CONbits absolute 0x104;

// backward compatibility for T2CONBITS
    typedef struct tagT2CONBITS {
      union {
        struct {
          unsigned T2CKPS:2;
          unsigned TMR2ON:1;
          unsigned T2OUTPS:4;
        };
        struct {
          unsigned TCKPS:2;
          unsigned TON:1;
          unsigned TOUTPS:4;
        };
        struct {
          unsigned T2CKPS0:1;
          unsigned T2CKPS1:1;
          unsigned :1;
          unsigned T2OUTPS0:1;
          unsigned T2OUTPS1:1;
          unsigned T2OUTPS2:1;
          unsigned T2OUTPS3:1;
        };
      };
} typeT2CONBITS;
sfr volatile typeT2CONBITS T2CONbits absolute 0x10A;

// backward compatibility for T3GCONBITS
    typedef struct tagT3GCONBITS {
      union {
        struct {
          unsigned T3GSS:2;
          unsigned T3GVAL:1;
          unsigned T3GGO:1;
          unsigned T3GSPM:1;
          unsigned T3GTM:1;
          unsigned T3GPOL:1;
          unsigned TMR3GE:1;
        };
        struct {
          unsigned T3GSS0:1;
          unsigned T3GSS1:1;
          unsigned :1;
          unsigned NOT_T3DONE:1;
        };
        struct {
          unsigned TGSS:2;
          unsigned TGVAL:1;
          unsigned TGGO:1;
          unsigned TGSE:1;
          unsigned TGTM:1;
          unsigned TGPOL:1;
          unsigned TGATE:1;
        };
      };
} typeT3GCONBITS;
sfr volatile typeT3GCONBITS T3GCONbits absolute 0x10E;

// backward compatibility for T3CONBITS
    typedef struct tagT3CONBITS {
      union {
        struct {
          unsigned TMR3ON:1;
          unsigned :1;
          unsigned NOT_T3SYNC:1;
          unsigned T3OSCEN:1;
          unsigned T3CKPS:2;
          unsigned TMR3CS:2;
        };
        struct {
          unsigned TON:1;
          unsigned :1;
          unsigned NOT_TSYNC:1;
          unsigned SOSCEN:1;
          unsigned TCKPS:2;
          unsigned TCS:2;
        };
        struct {
          unsigned :4;
          unsigned T3CKPS0:1;
          unsigned T3CKPS1:1;
          unsigned TMR3CS0:1;
          unsigned TMR3CS1:1;
        };
      };
} typeT3CONBITS;
sfr volatile typeT3CONBITS T3CONbits absolute 0x110;

// backward compatibility for T4CONBITS
    typedef struct tagT4CONBITS {
      union {
        struct {
          unsigned T4CKPS:2;
          unsigned TMR4ON:1;
          unsigned T4OUTPS:4;
        };
        struct {
          unsigned TCKPS:2;
          unsigned TON:1;
          unsigned TOUTPS:4;
        };
        struct {
          unsigned T4CKPS0:1;
          unsigned T4CKPS1:1;
          unsigned :1;
          unsigned T4OUTPS0:1;
          unsigned T4OUTPS1:1;
          unsigned T4OUTPS2:1;
          unsigned T4OUTPS3:1;
        };
      };
} typeT4CONBITS;
sfr volatile typeT4CONBITS T4CONbits absolute 0x116;

// backward compatibility for CCPTMRS0BITS
    typedef struct tagCCPTMRS0BITS {
      unsigned C1TSEL0:1;
      unsigned :2;
      unsigned C2TSEL0:1;
      unsigned :2;
      unsigned C3TSEL0:1;
} typeCCPTMRS0BITS;
sfr volatile typeCCPTMRS0BITS CCPTMRS0bits absolute 0x13C;

// backward compatibility for CCP1CONBITS
    typedef struct tagCCP1CONBITS {
      union {
        struct {
          unsigned CCPM:4;
          unsigned DCB:2;
          unsigned PM:2;
        };
        struct {
          unsigned CCPM0:1;
          unsigned CCPM1:1;
          unsigned CCPM2:1;
          unsigned CCPM3:1;
          unsigned DCB0:1;
          unsigned DCB1:1;
          unsigned PM0:1;
          unsigned PM1:1;
        };
        struct {
          unsigned CCP1M:4;
          unsigned DC1B:2;
          unsigned P1M:2;
        };
        struct {
          unsigned CCP1M0:1;
          unsigned CCP1M1:1;
          unsigned CCP1M2:1;
          unsigned CCP1M3:1;
          unsigned DC1B0:1;
          unsigned DC1B1:1;
          unsigned P1M0:1;
          unsigned P1M1:1;
        };
      };
} typeCCP1CONBITS;
sfr volatile typeCCP1CONBITS CCP1CONbits absolute 0x190;

// backward compatibility for ECCP1CONBITS
    typedef struct tagECCP1CONBITS {
      union {
        struct {
          unsigned CCPM:4;
          unsigned DCB:2;
          unsigned PM:2;
        };
        struct {
          unsigned CCPM0:1;
          unsigned CCPM1:1;
          unsigned CCPM2:1;
          unsigned CCPM3:1;
          unsigned DCB0:1;
          unsigned DCB1:1;
          unsigned PM0:1;
          unsigned PM1:1;
        };
        struct {
          unsigned CCP1M:4;
          unsigned DC1B:2;
          unsigned P1M:2;
        };
        struct {
          unsigned CCP1M0:1;
          unsigned CCP1M1:1;
          unsigned CCP1M2:1;
          unsigned CCP1M3:1;
          unsigned DC1B0:1;
          unsigned DC1B1:1;
          unsigned P1M0:1;
          unsigned P1M1:1;
        };
      };
} typeECCP1CONBITS;
sfr volatile typeECCP1CONBITS ECCP1CONbits absolute 0x190;

// backward compatibility for ECCP1DELBITS
    typedef struct tagECCP1DELBITS {
      union {
        struct {
          unsigned PDC:7;
          unsigned PRSEN:1;
        };
        struct {
          unsigned PDC0:1;
          unsigned PDC1:1;
          unsigned PDC2:1;
          unsigned PDC3:1;
          unsigned PDC4:1;
          unsigned PDC5:1;
          unsigned PDC6:1;
        };
        struct {
          unsigned P1DC:7;
          unsigned P1RSEN:1;
        };
        struct {
          unsigned P1DC0:1;
          unsigned P1DC1:1;
          unsigned P1DC2:1;
          unsigned P1DC3:1;
          unsigned P1DC4:1;
          unsigned P1DC5:1;
          unsigned P1DC6:1;
        };
      };
} typeECCP1DELBITS;
sfr volatile typeECCP1DELBITS ECCP1DELbits absolute 0x196;

// backward compatibility for PWM1CONBITS
    typedef struct tagPWM1CONBITS {
      union {
        struct {
          unsigned PDC:7;
          unsigned PRSEN:1;
        };
        struct {
          unsigned PDC0:1;
          unsigned PDC1:1;
          unsigned PDC2:1;
          unsigned PDC3:1;
          unsigned PDC4:1;
          unsigned PDC5:1;
          unsigned PDC6:1;
        };
        struct {
          unsigned P1DC:7;
          unsigned P1RSEN:1;
        };
        struct {
          unsigned P1DC0:1;
          unsigned P1DC1:1;
          unsigned P1DC2:1;
          unsigned P1DC3:1;
          unsigned P1DC4:1;
          unsigned P1DC5:1;
          unsigned P1DC6:1;
        };
      };
} typePWM1CONBITS;
sfr volatile typePWM1CONBITS PWM1CONbits absolute 0x196;

// backward compatibility for ECCP1ASBITS
    typedef struct tagECCP1ASBITS {
      union {
        struct {
          unsigned PSSBD:2;
          unsigned PSSAC:2;
          unsigned ECCPAS:3;
          unsigned ECCPASE:1;
        };
        struct {
          unsigned PSSBD0:1;
          unsigned PSSBD1:1;
          unsigned PSSAC0:1;
          unsigned PSSAC1:1;
          unsigned ECCPAS0:1;
          unsigned ECCPAS1:1;
          unsigned ECCPAS2:1;
        };
        struct {
          unsigned PSS1BD:2;
          unsigned PSS1AC:2;
          unsigned ECCP1AS:3;
        };
        struct {
          unsigned PSS1BD0:1;
          unsigned PSS1BD1:1;
          unsigned PSS1AC0:1;
          unsigned PSS1AC1:1;
          unsigned ECCP1AS0:1;
          unsigned ECCP1AS1:1;
          unsigned ECCP1AS2:1;
        };
      };
} typeECCP1ASBITS;
sfr volatile typeECCP1ASBITS ECCP1ASbits absolute 0x198;

// backward compatibility for PSTR1CONBITS
    typedef struct tagPSTR1CONBITS {
      union {
        struct {
          unsigned STRA:1;
          unsigned STRB:1;
          unsigned STRC:1;
          unsigned STRD:1;
          unsigned STRSYNC:1;
          unsigned :1;
          unsigned CMPL:2;
        };
        struct {
          unsigned :6;
          unsigned CMPL0:1;
          unsigned CMPL1:1;
        };
      };
} typePSTR1CONBITS;
sfr volatile typePSTR1CONBITS PSTR1CONbits absolute 0x19A;

// backward compatibility for CCP2CONBITS
    typedef struct tagCCP2CONBITS {
      union {
        struct {
          unsigned CCPM:4;
          unsigned DCB:2;
        };
        struct {
          unsigned CCPM0:1;
          unsigned CCPM1:1;
          unsigned CCPM2:1;
          unsigned CCPM3:1;
          unsigned DCB0:1;
          unsigned DCB1:1;
        };
        struct {
          unsigned CCP2M:4;
          unsigned DC2B:2;
        };
        struct {
          unsigned CCP2M0:1;
          unsigned CCP2M1:1;
          unsigned CCP2M2:1;
          unsigned CCP2M3:1;
          unsigned DC2B0:1;
          unsigned DC2B1:1;
        };
      };
} typeCCP2CONBITS;
sfr volatile typeCCP2CONBITS CCP2CONbits absolute 0x19C;

// backward compatibility for CCP3CONBITS
    typedef struct tagCCP3CONBITS {
      union {
        struct {
          unsigned CCPM:4;
          unsigned DCB:2;
        };
        struct {
          unsigned CCPM0:1;
          unsigned CCPM1:1;
          unsigned CCPM2:1;
          unsigned CCPM3:1;
          unsigned DCB0:1;
          unsigned DCB1:1;
        };
        struct {
          unsigned CCP3M:4;
          unsigned DC3B:2;
        };
        struct {
          unsigned CCP3M0:1;
          unsigned CCP3M1:1;
          unsigned CCP3M2:1;
          unsigned CCP3M3:1;
          unsigned DC3B0:1;
          unsigned DC3B1:1;
        };
      };
} typeCCP3CONBITS;
sfr volatile typeCCP3CONBITS CCP3CONbits absolute 0x1A8;

// backward compatibility for SPI1BUFBITS
    typedef struct tagSPI1BUFBITS {
      union {
        struct {
          unsigned SSPBUF:8;
        };
        struct {
          unsigned SPI1BUF:8;
        };
      };
} typeSPI1BUFBITS;
sfr volatile typeSPI1BUFBITS SPI1BUFbits absolute 0x200;

// backward compatibility for SSP1BUFBITS
    typedef struct tagSSP1BUFBITS {
      union {
        struct {
          unsigned SSPBUF:8;
        };
        struct {
          unsigned SPI1BUF:8;
        };
      };
} typeSSP1BUFBITS;
sfr volatile typeSSP1BUFBITS SSP1BUFbits absolute 0x200;

// backward compatibility for SSP1CON1BITS
    typedef struct tagSSP1CON1BITS {
      union {
        struct {
          unsigned SSPM:4;
          unsigned CKP:1;
          unsigned SSPEN:1;
          unsigned SSPOV:1;
          unsigned WCOL:1;
        };
        struct {
          unsigned SSPM0:1;
          unsigned SSPM1:1;
          unsigned SSPM2:1;
          unsigned SSPM3:1;
        };
      };
} typeSSP1CON1BITS;
sfr volatile typeSSP1CON1BITS SSP1CON1bits absolute 0x202;

// backward compatibility for SSP1CON2BITS
    typedef struct tagSSP1CON2BITS {
      union {
        struct {
          unsigned SEN:1;
          unsigned RSEN:1;
          unsigned PEN:1;
          unsigned RCEN:1;
          unsigned ACKEN:1;
          unsigned ACKDT:1;
          unsigned ACKSTAT:1;
          unsigned GCEN:1;
        };
        struct {
          unsigned :1;
          unsigned ADMSK:5;
        };
        struct {
          unsigned :1;
          unsigned ADMSK1:1;
          unsigned ADMSK2:1;
          unsigned ADMSK3:1;
          unsigned ADMSK4:1;
          unsigned ADMSK5:1;
        };
      };
} typeSSP1CON2BITS;
sfr volatile typeSSP1CON2BITS SSP1CON2bits absolute 0x204;

// backward compatibility for SSP1CON3BITS
    typedef struct tagSSP1CON3BITS {
      unsigned DHEN:1;
      unsigned AHEN:1;
      unsigned SBCDE:1;
      unsigned SDAHT:1;
      unsigned BOEN:1;
      unsigned SCIE:1;
      unsigned PCIE:1;
      unsigned ACKTIM:1;
} typeSSP1CON3BITS;
sfr volatile typeSSP1CON3BITS SSP1CON3bits absolute 0x206;

// backward compatibility for SSP1STATBITS
    typedef struct tagSSP1STATBITS {
      union {
        struct {
          unsigned BF:1;
          unsigned UA:1;
          unsigned R_NOT_W:1;
          unsigned S:1;
          unsigned P:1;
          unsigned D_NOT_A:1;
          unsigned CKE:1;
          unsigned SMP:1;
        };
        struct {
          unsigned :2;
          unsigned R_W:1;
          unsigned :2;
          unsigned D_A:1;
        };
        struct {
          unsigned :2;
          unsigned NOT_W:1;
          unsigned :2;
          unsigned NOT_A:1;
        };
        struct {
          unsigned :2;
          unsigned NOT_WRITE:1;
          unsigned :2;
          unsigned NOT_ADDRESS:1;
        };
        struct {
          unsigned :2;
          unsigned READ_WRITE:1;
          unsigned :2;
          unsigned DATA_ADDRESS:1;
        };
        struct {
          unsigned :2;
          unsigned I2C_READ:1;
          unsigned I2C_START:1;
          unsigned I2C_STOP:1;
          unsigned I2C_DAT:1;
        };
      };
} typeSSP1STATBITS;
sfr volatile typeSSP1STATBITS SSP1STATbits absolute 0x208;

// backward compatibility for I2C1ADDBITS
    typedef struct tagI2C1ADDBITS {
      union {
        struct {
          unsigned SSPADD:8;
        };
        struct {
          unsigned I2CADD:8;
        };
      };
} typeI2C1ADDBITS;
sfr volatile typeI2C1ADDBITS I2C1ADDbits absolute 0x20A;

// backward compatibility for SSP1ADDBITS
    typedef struct tagSSP1ADDBITS {
      union {
        struct {
          unsigned SSPADD:8;
        };
        struct {
          unsigned I2CADD:8;
        };
      };
} typeSSP1ADDBITS;
sfr volatile typeSSP1ADDBITS SSP1ADDbits absolute 0x20A;

// backward compatibility for I2C1MSKBITS
    typedef struct tagI2C1MSKBITS {
      union {
        struct {
          unsigned MSK0:1;
          unsigned MSK1:1;
          unsigned MSK2:1;
          unsigned MSK3:1;
          unsigned MSK4:1;
          unsigned MSK5:1;
          unsigned MSK6:1;
          unsigned MSK7:1;
        };
        struct {
          unsigned AMSK:8;
        };
      };
} typeI2C1MSKBITS;
sfr volatile typeI2C1MSKBITS I2C1MSKbits absolute 0x20C;

// backward compatibility for SSP1MSKBITS
    typedef struct tagSSP1MSKBITS {
      union {
        struct {
          unsigned MSK0:1;
          unsigned MSK1:1;
          unsigned MSK2:1;
          unsigned MSK3:1;
          unsigned MSK4:1;
          unsigned MSK5:1;
          unsigned MSK6:1;
          unsigned MSK7:1;
        };
        struct {
          unsigned AMSK:8;
        };
      };
} typeSSP1MSKBITS;
sfr volatile typeSSP1MSKBITS SSP1MSKbits absolute 0x20C;

// backward compatibility for SPI2BUFBITS
    typedef struct tagSPI2BUFBITS {
      union {
        struct {
          unsigned SSPBUF:8;
        };
        struct {
          unsigned SPI2BUF:8;
        };
      };
} typeSPI2BUFBITS;
sfr volatile typeSPI2BUFBITS SPI2BUFbits absolute 0x210;

// backward compatibility for SSP2BUFBITS
    typedef struct tagSSP2BUFBITS {
      union {
        struct {
          unsigned SSPBUF:8;
        };
        struct {
          unsigned SPI2BUF:8;
        };
      };
} typeSSP2BUFBITS;
sfr volatile typeSSP2BUFBITS SSP2BUFbits absolute 0x210;

// backward compatibility for SSP2CON1BITS
    typedef struct tagSSP2CON1BITS {
      union {
        struct {
          unsigned SSPM:4;
          unsigned CKP:1;
          unsigned SSPEN:1;
          unsigned SSPOV:1;
          unsigned WCOL:1;
        };
        struct {
          unsigned SSPM0:1;
          unsigned SSPM1:1;
          unsigned SSPM2:1;
          unsigned SSPM3:1;
        };
      };
} typeSSP2CON1BITS;
sfr volatile typeSSP2CON1BITS SSP2CON1bits absolute 0x212;

// backward compatibility for SSP2CON2BITS
    typedef struct tagSSP2CON2BITS {
      union {
        struct {
          unsigned SEN:1;
          unsigned RSEN:1;
          unsigned PEN:1;
          unsigned RCEN:1;
          unsigned ACKEN:1;
          unsigned ACKDT:1;
          unsigned ACKSTAT:1;
          unsigned GCEN:1;
        };
        struct {
          unsigned :1;
          unsigned ADMSK:5;
        };
        struct {
          unsigned :1;
          unsigned ADMSK1:1;
          unsigned ADMSK2:1;
          unsigned ADMSK3:1;
          unsigned ADMSK4:1;
          unsigned ADMSK5:1;
        };
      };
} typeSSP2CON2BITS;
sfr volatile typeSSP2CON2BITS SSP2CON2bits absolute 0x214;

// backward compatibility for SSP2CON3BITS
    typedef struct tagSSP2CON3BITS {
      unsigned DHEN:1;
      unsigned AHEN:1;
      unsigned SBCDE:1;
      unsigned SDAHT:1;
      unsigned BOEN:1;
      unsigned SCIE:1;
      unsigned PCIE:1;
      unsigned ACKTIM:1;
} typeSSP2CON3BITS;
sfr volatile typeSSP2CON3BITS SSP2CON3bits absolute 0x216;

// backward compatibility for SSP2STATBITS
    typedef struct tagSSP2STATBITS {
      union {
        struct {
          unsigned BF:1;
          unsigned UA:1;
          unsigned R_NOT_W:1;
          unsigned S:1;
          unsigned P:1;
          unsigned D_NOT_A:1;
          unsigned CKE:1;
          unsigned SMP:1;
        };
        struct {
          unsigned :2;
          unsigned R_W:1;
          unsigned :2;
          unsigned D_A:1;
        };
        struct {
          unsigned :2;
          unsigned NOT_W:1;
          unsigned :2;
          unsigned NOT_A:1;
        };
        struct {
          unsigned :2;
          unsigned NOT_WRITE:1;
          unsigned :2;
          unsigned NOT_ADDRESS:1;
        };
        struct {
          unsigned :2;
          unsigned READ_WRITE:1;
          unsigned :2;
          unsigned DATA_ADDRESS:1;
        };
        struct {
          unsigned :2;
          unsigned I2C_READ:1;
          unsigned I2C_START:1;
          unsigned I2C_STOP:1;
          unsigned I2C_DAT:1;
        };
      };
} typeSSP2STATBITS;
sfr volatile typeSSP2STATBITS SSP2STATbits absolute 0x218;

// backward compatibility for I2C2ADDBITS
    typedef struct tagI2C2ADDBITS {
      union {
        struct {
          unsigned SSPADD:8;
        };
        struct {
          unsigned I2CADD:8;
        };
      };
} typeI2C2ADDBITS;
sfr volatile typeI2C2ADDBITS I2C2ADDbits absolute 0x21A;

// backward compatibility for SSP2ADDBITS
    typedef struct tagSSP2ADDBITS {
      union {
        struct {
          unsigned SSPADD:8;
        };
        struct {
          unsigned I2CADD:8;
        };
      };
} typeSSP2ADDBITS;
sfr volatile typeSSP2ADDBITS SSP2ADDbits absolute 0x21A;

// backward compatibility for I2C2MSKBITS
    typedef struct tagI2C2MSKBITS {
      union {
        struct {
          unsigned MSK0:1;
          unsigned MSK1:1;
          unsigned MSK2:1;
          unsigned MSK3:1;
          unsigned MSK4:1;
          unsigned MSK5:1;
          unsigned MSK6:1;
          unsigned MSK7:1;
        };
        struct {
          unsigned AMSK:8;
        };
      };
} typeI2C2MSKBITS;
sfr volatile typeI2C2MSKBITS I2C2MSKbits absolute 0x21C;

// backward compatibility for SSP2MSKBITS
    typedef struct tagSSP2MSKBITS {
      union {
        struct {
          unsigned MSK0:1;
          unsigned MSK1:1;
          unsigned MSK2:1;
          unsigned MSK3:1;
          unsigned MSK4:1;
          unsigned MSK5:1;
          unsigned MSK6:1;
          unsigned MSK7:1;
        };
        struct {
          unsigned AMSK:8;
        };
      };
} typeSSP2MSKBITS;
sfr volatile typeSSP2MSKBITS SSP2MSKbits absolute 0x21C;

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

// backward compatibility for TRISABITS
    typedef struct tagTRISABITS {
      unsigned TRISA0:1;
      unsigned TRISA1:1;
      unsigned TRISA2:1;
      unsigned TRISA3:1;
      unsigned TRISA4:1;
      unsigned :1;
      unsigned TRISA6:1;
} typeTRISABITS;
sfr volatile typeTRISABITS TRISAbits absolute 0x2C0;

// backward compatibility for PORTABITS
    typedef struct tagPORTABITS {
      unsigned RA0:1;
      unsigned RA1:1;
      unsigned RA2:1;
      unsigned RA3:1;
      unsigned RA4:1;
      unsigned RA5:1;
      unsigned RA6:1;
} typePORTABITS;
sfr volatile typePORTABITS PORTAbits absolute 0x2C2;

// backward compatibility for LATABITS
    typedef struct tagLATABITS {
      unsigned LATA0:1;
      unsigned LATA1:1;
      unsigned LATA2:1;
      unsigned LATA3:1;
      unsigned LATA4:1;
      unsigned :1;
      unsigned LATA6:1;
} typeLATABITS;
sfr volatile typeLATABITS LATAbits absolute 0x2C4;

// backward compatibility for ODCABITS
    typedef struct tagODCABITS {
      unsigned ODA0:1;
      unsigned ODA1:1;
      unsigned ODA2:1;
      unsigned ODA3:1;
      unsigned ODA4:1;
      unsigned :1;
      unsigned ODA6:1;
} typeODCABITS;
sfr volatile typeODCABITS ODCAbits absolute 0x2C6;

// backward compatibility for TRISBBITS
    typedef struct tagTRISBBITS {
      unsigned TRISB0:1;
      unsigned TRISB1:1;
      unsigned TRISB2:1;
      unsigned :1;
      unsigned TRISB4:1;
      unsigned :2;
      unsigned TRISB7:1;
      unsigned TRISB8:1;
      unsigned TRISB9:1;
      unsigned :2;
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
      unsigned :1;
      unsigned RB4:1;
      unsigned :2;
      unsigned RB7:1;
      unsigned RB8:1;
      unsigned RB9:1;
      unsigned :2;
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
      unsigned :1;
      unsigned LATB4:1;
      unsigned :2;
      unsigned LATB7:1;
      unsigned LATB8:1;
      unsigned LATB9:1;
      unsigned :2;
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
      unsigned :1;
      unsigned ODB4:1;
      unsigned :2;
      unsigned ODB7:1;
      unsigned ODB8:1;
      unsigned ODB9:1;
      unsigned :2;
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
          unsigned :8;
          unsigned SCK1DIS:1;
          unsigned SDO1DIS:1;
          unsigned SCK2DIS:1;
          unsigned SDO2DIS:1;
        };
        struct {
          unsigned :4;
          unsigned SMBDEL0:1;
          unsigned SMBDEL1:1;
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
          unsigned :1;
          unsigned OFFCAL:1;
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
sfr volatile typeAD1CON3BITS AD1CON3bits absolute 0x324;

// backward compatibility for AD1CHSBITS
    typedef struct tagAD1CHSBITS {
      union {
        struct {
          unsigned CH0SA:4;
          unsigned :3;
          unsigned CH0NA:1;
          unsigned CH0SB:4;
          unsigned :3;
          unsigned CH0NB:1;
        };
        struct {
          unsigned CH0SA0:1;
          unsigned CH0SA1:1;
          unsigned CH0SA2:1;
          unsigned CH0SA3:1;
          unsigned :4;
          unsigned CH0SB0:1;
          unsigned CH0SB1:1;
          unsigned CH0SB2:1;
          unsigned CH0SB3:1;
        };
      };
} typeAD1CHSBITS;
sfr volatile typeAD1CHSBITS AD1CHSbits absolute 0x328;

// backward compatibility for AD1CSSLBITS
    typedef struct tagAD1CSSLBITS {
      unsigned CSSL0:1;
      unsigned CSSL1:1;
      unsigned CSSL2:1;
      unsigned CSSL3:1;
      unsigned CSSL4:1;
      unsigned :1;
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

// backward compatibility for ANCFGBITS
    typedef struct tagANCFGBITS {
      unsigned VBGEN:1;
} typeANCFGBITS;
sfr volatile typeANCFGBITS ANCFGbits absolute 0x4DE;

// backward compatibility for ANSABITS
    typedef struct tagANSABITS {
      unsigned ANSA0:1;
      unsigned ANSA1:1;
      unsigned ANSA2:1;
      unsigned ANSA3:1;
} typeANSABITS;
sfr volatile typeANSABITS ANSAbits absolute 0x4E0;

// backward compatibility for ANSELABITS
    typedef struct tagANSELABITS {
      unsigned ANSA0:1;
      unsigned ANSA1:1;
      unsigned ANSA2:1;
      unsigned ANSA3:1;
} typeANSELABITS;
sfr volatile typeANSELABITS ANSELAbits absolute 0x4E0;

// backward compatibility for ANSBBITS
    typedef struct tagANSBBITS {
      unsigned ANSB0:1;
      unsigned ANSB1:1;
      unsigned ANSB2:1;
      unsigned :1;
      unsigned ANSB4:1;
      unsigned :7;
      unsigned ANSB12:1;
      unsigned ANSB13:1;
      unsigned ANSB14:1;
      unsigned ANSB15:1;
} typeANSBBITS;
sfr volatile typeANSBBITS ANSBbits absolute 0x4E2;

// backward compatibility for ANSELBBITS
    typedef struct tagANSELBBITS {
      unsigned ANSB0:1;
      unsigned ANSB1:1;
      unsigned ANSB2:1;
      unsigned :1;
      unsigned ANSB4:1;
      unsigned :7;
      unsigned ANSB12:1;
      unsigned ANSB13:1;
      unsigned ANSB14:1;
      unsigned ANSB15:1;
} typeANSELBBITS;
sfr volatile typeANSELBBITS ANSELBbits absolute 0x4E2;

// backward compatibility for CMSTATBITS
    typedef struct tagCMSTATBITS {
      unsigned C1OUT:1;
      unsigned C2OUT:1;
      unsigned :6;
      unsigned C1EVT:1;
      unsigned C2EVT:1;
      unsigned :5;
      unsigned CMIDL:1;
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
        };
        struct {
          unsigned CVR0:1;
          unsigned CVR1:1;
          unsigned CVR2:1;
          unsigned CVR3:1;
          unsigned CVR4:1;
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
          unsigned :2;
          unsigned CLPWR:1;
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
          unsigned :2;
          unsigned CLPWR:1;
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
        };
      };
} typeCM2CONBITS;
sfr volatile typeCM2CONBITS CM2CONbits absolute 0x636;

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
          unsigned PMSLP:1;
          unsigned CM:1;
          unsigned :3;
          unsigned SBOREN:1;
          unsigned IOPUWR:1;
          unsigned TRAPR:1;
        };
        struct {
          unsigned :8;
          unsigned VREGS:1;
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
          unsigned SOSCDRV:1;
          unsigned CF:1;
          unsigned :1;
          unsigned LOCK:1;
          unsigned :1;
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
          unsigned HLSIDL:1;
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
sfr volatile typeHLVDCONBITS HLVDCONbits absolute 0x756;

// backward compatibility for NVMCONBITS
    typedef struct tagNVMCONBITS {
      union {
        struct {
          unsigned NVMOP:6;
          unsigned ERASE:1;
          unsigned :5;
          unsigned PGMONLY:1;
          unsigned WRERR:1;
          unsigned WREN:1;
          unsigned WR:1;
        };
        struct {
          unsigned NVMOP0:1;
          unsigned NVMOP1:1;
          unsigned NVMOP2:1;
          unsigned NVMOP3:1;
          unsigned NVMOP4:1;
          unsigned NVMOP5:1;
        };
      };
} typeNVMCONBITS;
sfr volatile typeNVMCONBITS NVMCONbits absolute 0x760;

// backward compatibility for NVMKEYBITS
    typedef struct tagNVMKEYBITS {
      union {
        struct {
          unsigned NVMKEY:8;
        };
        struct {
          unsigned NVMKEY0:1;
          unsigned NVMKEY1:1;
          unsigned NVMKEY2:1;
          unsigned NVMKEY3:1;
          unsigned NVMKEY4:1;
          unsigned NVMKEY5:1;
          unsigned NVMKEY6:1;
          unsigned NVMKEY7:1;
        };
      };
} typeNVMKEYBITS;
sfr volatile typeNVMKEYBITS NVMKEYbits absolute 0x766;

// backward compatibility for ULPWCONBITS
    typedef struct tagULPWCONBITS {
      union {
        struct {
          unsigned :8;
          unsigned ULPSINK:1;
          unsigned :4;
          unsigned ULPSIDL:1;
          unsigned :1;
          unsigned ULPEN:1;
        };
        struct {
          unsigned :8;
          unsigned CRNTEN:1;
          unsigned :4;
          unsigned PSIDL:1;
          unsigned :1;
          unsigned WUEN:1;
        };
      };
} typeULPWCONBITS;
sfr volatile typeULPWCONBITS ULPWCONbits absolute 0x768;

// backward compatibility for PMD1BITS
    typedef struct tagPMD1BITS {
      union {
        struct {
          unsigned ADC1MD:1;
          unsigned :4;
          unsigned U1MD:1;
          unsigned U2MD:1;
          unsigned SSP1MD:1;
          unsigned :3;
          unsigned T1MD:1;
          unsigned T2MD:1;
          unsigned T3MD:1;
          unsigned T4MD:1;
        };
        struct {
          unsigned ADCMD:1;
          unsigned :6;
          unsigned I2C1MD:1;
        };
        struct {
          unsigned :7;
          unsigned SPI1MD:1;
        };
      };
} typePMD1BITS;
sfr volatile typePMD1BITS PMD1bits absolute 0x770;

// backward compatibility for PMDIS1BITS
    typedef struct tagPMDIS1BITS {
      union {
        struct {
          unsigned ADC1MD:1;
          unsigned :4;
          unsigned U1MD:1;
          unsigned U2MD:1;
          unsigned SSP1MD:1;
          unsigned :3;
          unsigned T1MD:1;
          unsigned T2MD:1;
          unsigned T3MD:1;
          unsigned T4MD:1;
        };
        struct {
          unsigned ADCMD:1;
          unsigned :6;
          unsigned I2C1MD:1;
        };
        struct {
          unsigned :7;
          unsigned SPI1MD:1;
        };
      };
} typePMDIS1BITS;
sfr volatile typePMDIS1BITS PMDIS1bits absolute 0x770;

// backward compatibility for PMD2BITS
    typedef struct tagPMD2BITS {
      unsigned CCP1MD:1;
      unsigned CCP2MD:1;
      unsigned CCP3MD:1;
} typePMD2BITS;
sfr volatile typePMD2BITS PMD2bits absolute 0x772;

// backward compatibility for PMDIS2BITS
    typedef struct tagPMDIS2BITS {
      unsigned CCP1MD:1;
      unsigned CCP2MD:1;
      unsigned CCP3MD:1;
} typePMDIS2BITS;
sfr volatile typePMDIS2BITS PMDIS2bits absolute 0x772;

// backward compatibility for PMD3BITS
    typedef struct tagPMD3BITS {
      union {
        struct {
          unsigned :1;
          unsigned SSP2MD:1;
          unsigned :8;
          unsigned CMPMD:1;
        };
        struct {
          unsigned :1;
          unsigned I2C2MD:1;
        };
        struct {
          unsigned :1;
          unsigned SPI2MD:1;
        };
      };
} typePMD3BITS;
sfr volatile typePMD3BITS PMD3bits absolute 0x774;

// backward compatibility for PMDIS3BITS
    typedef struct tagPMDIS3BITS {
      union {
        struct {
          unsigned :1;
          unsigned SSP2MD:1;
          unsigned :8;
          unsigned CMPMD:1;
        };
        struct {
          unsigned :1;
          unsigned I2C2MD:1;
        };
        struct {
          unsigned :1;
          unsigned SPI2MD:1;
        };
      };
} typePMDIS3BITS;
sfr volatile typePMDIS3BITS PMDIS3bits absolute 0x774;

// backward compatibility for PMD4BITS
    typedef struct tagPMD4BITS {
      unsigned :1;
      unsigned HLVDMD:1;
      unsigned :1;
      unsigned REFOMD:1;
      unsigned EEMD:1;
      unsigned :2;
      unsigned ULPWUMD:1;
} typePMD4BITS;
sfr volatile typePMD4BITS PMD4bits absolute 0x776;

// backward compatibility for PMDIS4BITS
    typedef struct tagPMDIS4BITS {
      unsigned :1;
      unsigned HLVDMD:1;
      unsigned :1;
      unsigned REFOMD:1;
      unsigned EEMD:1;
      unsigned :2;
      unsigned ULPWUMD:1;
} typePMDIS4BITS;
sfr volatile typePMDIS4BITS PMDIS4bits absolute 0x776;

