// Definition file for P24F16KM104

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
const unsigned IVT_ADDR_CCP1INTERRUPT        = 0x0016;
const unsigned IVT_ADDR_CCP2INTERRUPT        = 0x0018;
const unsigned IVT_ADDR_T1INTERRUPT          = 0x001A;
const unsigned IVT_ADDR_INTERRUPT4           = 0x001C;
const unsigned IVT_ADDR_INTERRUPT5           = 0x001E;
const unsigned IVT_ADDR_INTERRUPT6           = 0x0020;
const unsigned IVT_ADDR_CCT1INTERRUPT        = 0x0022;
const unsigned IVT_ADDR_CCT2INTERRUPT        = 0x0024;
const unsigned IVT_ADDR_INTERRUPT9           = 0x0026;
const unsigned IVT_ADDR_INTERRUPT10          = 0x0028;
const unsigned IVT_ADDR_U1RXINTERRUPT        = 0x002A;
const unsigned IVT_ADDR_U1TXINTERRUPT        = 0x002C;
const unsigned IVT_ADDR_ADC1INTERRUPT        = 0x002E;
const unsigned IVT_ADDR_INTERRUPT14          = 0x0030;
const unsigned IVT_ADDR_NVMINTERRUPT         = 0x0032;
const unsigned IVT_ADDR_MSSP1INTERRUPT       = 0x0034;
const unsigned IVT_ADDR_MSSP1BCINTERRUPT     = 0x0036;
const unsigned IVT_ADDR_COMPINTERRUPT        = 0x0038;
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
const unsigned IVT_ADDR_INTERRUPT57          = 0x0086;
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
const unsigned IVT_ADDR_HLVDINTERRUPT        = 0x00A4;
const unsigned IVT_ADDR_INTERRUPT73          = 0x00A6;
const unsigned IVT_ADDR_INTERRUPT74          = 0x00A8;
const unsigned IVT_ADDR_INTERRUPT75          = 0x00AA;
const unsigned IVT_ADDR_INTERRUPT76          = 0x00AC;
const unsigned IVT_ADDR_CTMUINTERRUPT        = 0x00AE;
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
const unsigned IVT_ADDR_CLC1INTERRUPT        = 0x00D4;
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
const unsigned AIVT_ADDR_ALTCCP1INTERRUPT     = 0x0116;
const unsigned AIVT_ADDR_ALTCCP2INTERRUPT     = 0x0118;
const unsigned AIVT_ADDR_ALTT1INTERRUPT       = 0x011A;
const unsigned AIVT_ADDR_ALTINTERRUPT4        = 0x011C;
const unsigned AIVT_ADDR_ALTINTERRUPT5        = 0x011E;
const unsigned AIVT_ADDR_ALTINTERRUPT6        = 0x0120;
const unsigned AIVT_ADDR_ALTCCT1INTERRUPT     = 0x0122;
const unsigned AIVT_ADDR_ALTCCT2INTERRUPT     = 0x0124;
const unsigned AIVT_ADDR_ALTINTERRUPT9        = 0x0126;
const unsigned AIVT_ADDR_ALTINTERRUPT10       = 0x0128;
const unsigned AIVT_ADDR_ALTU1RXINTERRUPT     = 0x012A;
const unsigned AIVT_ADDR_ALTU1TXINTERRUPT     = 0x012C;
const unsigned AIVT_ADDR_ALTADC1INTERRUPT     = 0x012E;
const unsigned AIVT_ADDR_ALTINTERRUPT14       = 0x0130;
const unsigned AIVT_ADDR_ALTNVMINTERRUPT      = 0x0132;
const unsigned AIVT_ADDR_ALTMSSP1INTERRUPT    = 0x0134;
const unsigned AIVT_ADDR_ALTMSSP1BCINTERRUPT  = 0x0136;
const unsigned AIVT_ADDR_ALTCOMPINTERRUPT     = 0x0138;
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
const unsigned AIVT_ADDR_ALTINTERRUPT57       = 0x0186;
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
const unsigned AIVT_ADDR_ALTHLVDINTERRUPT     = 0x01A4;
const unsigned AIVT_ADDR_ALTINTERRUPT73       = 0x01A6;
const unsigned AIVT_ADDR_ALTINTERRUPT74       = 0x01A8;
const unsigned AIVT_ADDR_ALTINTERRUPT75       = 0x01AA;
const unsigned AIVT_ADDR_ALTINTERRUPT76       = 0x01AC;
const unsigned AIVT_ADDR_ALTCTMUINTERRUPT     = 0x01AE;
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
const unsigned AIVT_ADDR_ALTCLC1INTERRUPT     = 0x01D4;
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
sfr unsigned int volatile DPCH             absolute 0x0788;
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
sfr unsigned int volatile CNPD3            absolute 0x005A;
sfr unsigned int volatile CNEN1            absolute 0x0062;
sfr unsigned int volatile CNEN2            absolute 0x0064;
sfr unsigned int volatile CNEN3            absolute 0x0066;
sfr unsigned int volatile CNPU1            absolute 0x006E;
sfr unsigned int volatile CNPU2            absolute 0x0070;
sfr unsigned int volatile CNPU3            absolute 0x0072;
sfr unsigned int volatile INTCON1          absolute 0x0080;
sfr unsigned int volatile INTCON2          absolute 0x0082;
sfr unsigned int volatile IFS0             absolute 0x0084;
sfr unsigned int volatile IFS1             absolute 0x0086;
sfr unsigned int volatile IFS4             absolute 0x008C;
sfr unsigned int volatile IFS5             absolute 0x008E;
sfr unsigned int volatile IFS6             absolute 0x0090;
sfr unsigned int          IEC0             absolute 0x0094;
sfr unsigned int          IEC1             absolute 0x0096;
sfr unsigned int          IEC4             absolute 0x009C;
sfr unsigned int          IEC5             absolute 0x009E;
sfr unsigned int volatile IEC6             absolute 0x00A0;
sfr unsigned int          IPC0             absolute 0x00A4;
sfr unsigned int          IPC1             absolute 0x00A6;
sfr unsigned int          IPC2             absolute 0x00A8;
sfr unsigned int          IPC3             absolute 0x00AA;
sfr unsigned int          IPC4             absolute 0x00AC;
sfr unsigned int          IPC5             absolute 0x00AE;
sfr unsigned int          IPC7             absolute 0x00B2;
sfr unsigned int          IPC16            absolute 0x00C4;
sfr unsigned int          IPC18            absolute 0x00C8;
sfr unsigned int          IPC19            absolute 0x00CA;
sfr unsigned int          IPC20            absolute 0x00CC;
sfr unsigned int volatile IPC24            absolute 0x00D4;
sfr unsigned int volatile INTTREG          absolute 0x00E0;
sfr unsigned int volatile TMR1             absolute 0x0100;
sfr unsigned int volatile PR1              absolute 0x0102;
sfr unsigned int volatile T1CON            absolute 0x0104;
sfr unsigned int volatile CLC1CONL         absolute 0x0122;
sfr unsigned int volatile CLC1CONH         absolute 0x0124;
sfr unsigned int volatile CLC1SEL          absolute 0x0126;
sfr unsigned int volatile CLC1SELL         absolute 0x0126;
sfr unsigned int volatile CLC1GLSL         absolute 0x012A;
sfr unsigned int volatile CLC1GLSH         absolute 0x012C;
sfr unsigned int volatile CCP1CON1L        absolute 0x0140;
sfr unsigned int volatile CCP1CON1H        absolute 0x0142;
sfr unsigned int volatile CCP1CON2L        absolute 0x0144;
sfr unsigned int volatile CCP1CON2H        absolute 0x0146;
sfr unsigned int volatile CCP1CON3L        absolute 0x0148;
sfr unsigned int volatile CCP1CON3H        absolute 0x014A;
sfr unsigned int volatile CCP1STAT         absolute 0x014C;
sfr unsigned int volatile CCP1STATL        absolute 0x014C;
sfr unsigned int volatile CCP1TMRL         absolute 0x0150;
sfr unsigned int volatile CCP1TMRH         absolute 0x0152;
sfr unsigned int volatile CCP1PRL          absolute 0x0154;
sfr unsigned int volatile CCP1PRH          absolute 0x0156;
sfr unsigned int volatile CCP1RA           absolute 0x0158;
sfr unsigned int volatile CCP1RAL          absolute 0x0158;
sfr unsigned int volatile CCP1RB           absolute 0x015C;
sfr unsigned int volatile CCP1RBL          absolute 0x015C;
sfr unsigned int volatile CCP1BUFL         absolute 0x0160;
sfr unsigned int volatile CCP1BUFH         absolute 0x0162;
sfr unsigned int volatile CCP2CON1L        absolute 0x0164;
sfr unsigned int volatile CCP2CON1H        absolute 0x0166;
sfr unsigned int volatile CCP2CON2L        absolute 0x0168;
sfr unsigned int volatile CCP2CON2H        absolute 0x016A;
sfr unsigned int volatile CCP2CON3H        absolute 0x016E;
sfr unsigned int volatile CCP2STAT         absolute 0x0170;
sfr unsigned int volatile CCP2STATL        absolute 0x0170;
sfr unsigned int volatile CCP2TMRL         absolute 0x0174;
sfr unsigned int volatile CCP2TMRH         absolute 0x0176;
sfr unsigned int volatile CCP2PRL          absolute 0x0178;
sfr unsigned int volatile CCP2PRH          absolute 0x017A;
sfr unsigned int volatile CCP2RA           absolute 0x017C;
sfr unsigned int volatile CCP2RAL          absolute 0x017C;
sfr unsigned int volatile CCP2RB           absolute 0x0180;
sfr unsigned int volatile CCP2RBL          absolute 0x0180;
sfr unsigned int volatile CCP2BUFL         absolute 0x0184;
sfr unsigned int volatile CCP2BUFH         absolute 0x0186;
sfr unsigned int volatile SPI1BUF          absolute 0x0200;
sfr unsigned int volatile SSP1BUF          absolute 0x0200;
sfr unsigned int volatile SSP1CON1         absolute 0x0202;
sfr unsigned int volatile SSP1CON2         absolute 0x0204;
sfr unsigned int volatile SSP1CON3         absolute 0x0206;
sfr unsigned int volatile SSP1STAT         absolute 0x0208;
sfr unsigned int volatile I2C1ADD          absolute 0x020A;
sfr unsigned int          I2C1BRG          absolute 0x020A;
sfr unsigned int volatile SSP1ADD          absolute 0x020A;
sfr unsigned int volatile SSP1BRG          absolute 0x020A;
sfr unsigned int volatile I2C1MSK          absolute 0x020C;
sfr unsigned int volatile SSP1MSK          absolute 0x020C;
sfr unsigned int volatile U1MODE           absolute 0x0220;
sfr unsigned int volatile U1STA            absolute 0x0222;
sfr unsigned int          U1TXREG          absolute 0x0224;
sfr unsigned int volatile U1RXREG          absolute 0x0226;
sfr unsigned int          U1BRG            absolute 0x0228;
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
sfr unsigned int volatile ADC1BUF10        absolute 0x0314;
sfr unsigned int volatile ADC1BUF11        absolute 0x0316;
sfr unsigned int volatile ADC1BUF12        absolute 0x0318;
sfr unsigned int volatile ADC1BUF13        absolute 0x031A;
sfr unsigned int volatile ADC1BUF14        absolute 0x031C;
sfr unsigned int volatile ADC1BUF15        absolute 0x031E;
sfr unsigned int volatile ADC1BUF16        absolute 0x0320;
sfr unsigned int volatile ADC1BUF17        absolute 0x0322;
sfr unsigned int volatile ADC1BUF18        absolute 0x0324;
sfr unsigned int volatile ADC1BUF19        absolute 0x0326;
sfr unsigned int volatile ADC1BUF20        absolute 0x0328;
sfr unsigned int volatile ADC1BUF21        absolute 0x032A;
sfr unsigned int volatile ADC1BUF22        absolute 0x032C;
sfr unsigned int volatile ADC1BUF23        absolute 0x032E;
sfr unsigned int volatile AD1CON1          absolute 0x0340;
sfr unsigned int volatile ADCON1           absolute 0x0340;
sfr unsigned int volatile AD1CON2          absolute 0x0342;
sfr unsigned int volatile ADCON2           absolute 0x0342;
sfr unsigned int volatile AD1CON3          absolute 0x0344;
sfr unsigned int volatile ADCON3           absolute 0x0344;
sfr unsigned int          AD1CHS           absolute 0x0348;
sfr unsigned int          ADCHS            absolute 0x0348;
sfr unsigned int          AD1CHS0          absolute 0x0348;
sfr unsigned int          AD1CSSH          absolute 0x034E;
sfr unsigned int          AD1CSSL          absolute 0x0350;
sfr unsigned int          ADCSSL           absolute 0x0350;
sfr unsigned int volatile AD1CON5          absolute 0x0354;
sfr unsigned int volatile AD1CHITH         absolute 0x0356;
sfr unsigned int volatile AD1CHITL         absolute 0x0358;
sfr unsigned int volatile CTMUCON1L        absolute 0x035A;
sfr unsigned int volatile CTMUCON1H        absolute 0x035C;
sfr unsigned int volatile CTMUCON2         absolute 0x035E;
sfr unsigned int volatile CTMUCON2L        absolute 0x035E;
sfr unsigned int volatile AD1CTMENH        absolute 0x0360;
sfr unsigned int volatile AD1CTMENL        absolute 0x0362;
sfr unsigned int volatile ANSA             absolute 0x04E0;
sfr unsigned int volatile ANSB             absolute 0x04E2;
sfr unsigned int volatile ANSC             absolute 0x04E4;
sfr unsigned int volatile CMSTAT           absolute 0x0630;
sfr unsigned int          CVRCON           absolute 0x0632;
sfr unsigned int volatile CM1CON           absolute 0x0634;
sfr unsigned int volatile BUFCON0          absolute 0x0670;
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
sfr unsigned int          PMD2             absolute 0x0772;
sfr unsigned int          PMD3             absolute 0x0774;
sfr unsigned int volatile PMD4             absolute 0x0776;
sfr unsigned int volatile PMD8             absolute 0x077E;

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
    const register unsigned short int CN36PDE = 4;
    sbit  CN36PDE_bit at CNPD3.B4;
    const register unsigned short int CN35PDE = 3;
    sbit  CN35PDE_bit at CNPD3.B3;
    const register unsigned short int CN34PDE = 2;
    sbit  CN34PDE_bit at CNPD3.B2;
    const register unsigned short int CN33PDE = 1;
    sbit  CN33PDE_bit at CNPD3.B1;
    const register unsigned short int CN32PDE = 0;
    sbit  CN32PDE_bit at CNPD3.B0;

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
    const register unsigned short int CN36IE = 4;
    sbit  CN36IE_bit at CNEN3.B4;
    const register unsigned short int CN35IE = 3;
    sbit  CN35IE_bit at CNEN3.B3;
    const register unsigned short int CN34IE = 2;
    sbit  CN34IE_bit at CNEN3.B2;
    const register unsigned short int CN33IE = 1;
    sbit  CN33IE_bit at CNEN3.B1;
    const register unsigned short int CN32IE = 0;
    sbit  CN32IE_bit at CNEN3.B0;

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
    const register unsigned short int CN36PUE = 4;
    sbit  CN36PUE_bit at CNPU3.B4;
    const register unsigned short int CN35PUE = 3;
    sbit  CN35PUE_bit at CNPU3.B3;
    const register unsigned short int CN34PUE = 2;
    sbit  CN34PUE_bit at CNPU3.B2;
    const register unsigned short int CN33PUE = 1;
    sbit  CN33PUE_bit at CNPU3.B1;
    const register unsigned short int CN32PUE = 0;
    sbit  CN32PUE_bit at CNPU3.B0;

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
    const register unsigned short int CCT2IF = 8;
    sbit  CCT2IF_bit at IFS0.B8;
    const register unsigned short int CCT1IF = 7;
    sbit  CCT1IF_bit at IFS0.B7;
    const register unsigned short int T1IF = 3;
    sbit  T1IF_bit at IFS0.B3;
    const register unsigned short int CCP2IF = 2;
    sbit  CCP2IF_bit at IFS0.B2;
    const register unsigned short int CCP1IF = 1;
    sbit  CCP1IF_bit at IFS0.B1;
    const register unsigned short int INT0IF = 0;
    sbit  INT0IF_bit at IFS0.B0;

    // IFS1 bits
    const register unsigned short int INT2IF = 13;
    sbit  INT2IF_bit at IFS1.B13;
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

    // IFS4 bits
    const register unsigned short int CTMUIF = 13;
    sbit  CTMUIF_bit at IFS4.B13;
    const register unsigned short int HLVDIF = 8;
    sbit  HLVDIF_bit at IFS4.B8;
    const register unsigned short int U1ERIF = 1;
    sbit  U1ERIF_bit at IFS4.B1;

    // IFS5 bits
    const register unsigned short int ULPWUIF = 0;
    sbit  ULPWUIF_bit at IFS5.B0;

    // IFS6 bits
    const register unsigned short int CLC1IF = 0;
    sbit  CLC1IF_bit at IFS6.B0;

    // IEC0 bits
    const register unsigned short int NVMIE = 15;
    sbit  NVMIE_bit at IEC0.B15;
    const register unsigned short int AD1IE = 13;
    sbit  AD1IE_bit at IEC0.B13;
    const register unsigned short int U1TXIE = 12;
    sbit  U1TXIE_bit at IEC0.B12;
    const register unsigned short int U1RXIE = 11;
    sbit  U1RXIE_bit at IEC0.B11;
    const register unsigned short int CCT2IE = 8;
    sbit  CCT2IE_bit at IEC0.B8;
    const register unsigned short int CCT1IE = 7;
    sbit  CCT1IE_bit at IEC0.B7;
    const register unsigned short int T1IE = 3;
    sbit  T1IE_bit at IEC0.B3;
    const register unsigned short int CCP2IE = 2;
    sbit  CCP2IE_bit at IEC0.B2;
    const register unsigned short int CCP1IE = 1;
    sbit  CCP1IE_bit at IEC0.B1;
    const register unsigned short int INT0IE = 0;
    sbit  INT0IE_bit at IEC0.B0;

    // IEC1 bits
    const register unsigned short int INT2IE = 13;
    sbit  INT2IE_bit at IEC1.B13;
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

    // IEC4 bits
    const register unsigned short int CTMUIE = 13;
    sbit  CTMUIE_bit at IEC4.B13;
    const register unsigned short int HLVDIE = 8;
    sbit  HLVDIE_bit at IEC4.B8;
    const register unsigned short int U1ERIE = 1;
    sbit  U1ERIE_bit at IEC4.B1;

    // IEC5 bits
    const register unsigned short int ULPWUIE = 0;
    sbit  ULPWUIE_bit at IEC5.B0;

    // IEC6 bits
    const register unsigned short int CLC1IE = 0;
    sbit  CLC1IE_bit at IEC6.B0;

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
    const register unsigned short int CCP2IP_2 = 10;
    sbit  CCP2IP_2_bit at IPC0.B10;
    const register unsigned short int CCP2IP_1 = 9;
    sbit  CCP2IP_1_bit at IPC0.B9;
    const register unsigned short int CCP2IP_0 = 8;
    sbit  CCP2IP_0_bit at IPC0.B8;
    const register unsigned short int CCP1IP_2 = 6;
    sbit  CCP1IP_2_bit at IPC0.B6;
    const register unsigned short int CCP1IP_1 = 5;
    sbit  CCP1IP_1_bit at IPC0.B5;
    const register unsigned short int CCP1IP_0 = 4;
    sbit  CCP1IP_0_bit at IPC0.B4;
    const register unsigned short int INT0IP_2 = 2;
    sbit  INT0IP_2_bit at IPC0.B2;
    const register unsigned short int INT0IP_1 = 1;
    sbit  INT0IP_1_bit at IPC0.B1;
    const register unsigned short int INT0IP_0 = 0;
    sbit  INT0IP_0_bit at IPC0.B0;

    // IPC1 bits
    const register unsigned short int CCT1IP_2 = 14;
    sbit  CCT1IP_2_bit at IPC1.B14;
    const register unsigned short int CCT1IP_1 = 13;
    sbit  CCT1IP_1_bit at IPC1.B13;
    const register unsigned short int CCT1IP_0 = 12;
    sbit  CCT1IP_0_bit at IPC1.B12;

    // IPC2 bits
    const register unsigned short int U1RXIP_2 = 14;
    sbit  U1RXIP_2_bit at IPC2.B14;
    const register unsigned short int U1RXIP_1 = 13;
    sbit  U1RXIP_1_bit at IPC2.B13;
    const register unsigned short int U1RXIP_0 = 12;
    sbit  U1RXIP_0_bit at IPC2.B12;
    const register unsigned short int CCT2IP_2 = 2;
    sbit  CCT2IP_2_bit at IPC2.B2;
    const register unsigned short int CCT2IP_1 = 1;
    sbit  CCT2IP_1_bit at IPC2.B1;
    const register unsigned short int CCT2IP_0 = 0;
    sbit  CCT2IP_0_bit at IPC2.B0;

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

    // IPC16 bits
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

    // IPC19 bits
    const register unsigned short int CTMUIP_2 = 6;
    sbit  CTMUIP_2_bit at IPC19.B6;
    const register unsigned short int CTMUIP_1 = 5;
    sbit  CTMUIP_1_bit at IPC19.B5;
    const register unsigned short int CTMUIP_0 = 4;
    sbit  CTMUIP_0_bit at IPC19.B4;

    // IPC20 bits
    const register unsigned short int ULPWUIP_2 = 2;
    sbit  ULPWUIP_2_bit at IPC20.B2;
    const register unsigned short int ULPWUIP_1 = 1;
    sbit  ULPWUIP_1_bit at IPC20.B1;
    const register unsigned short int ULPWUIP_0 = 0;
    sbit  ULPWUIP_0_bit at IPC20.B0;

    // IPC24 bits
    const register unsigned short int CLC1IP_2 = 2;
    sbit  CLC1IP_2_bit at IPC24.B2;
    const register unsigned short int CLC1IP_1 = 1;
    sbit  CLC1IP_1_bit at IPC24.B1;
    const register unsigned short int CLC1IP_0 = 0;
    sbit  CLC1IP_0_bit at IPC24.B0;

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

    // CLC1CONL bits
    const register unsigned short int LCEN = 15;
    sbit  LCEN_bit at CLC1CONL.B15;
    const register unsigned short int INTP = 11;
    sbit  INTP_bit at CLC1CONL.B11;
    const register unsigned short int INTN = 10;
    sbit  INTN_bit at CLC1CONL.B10;
    const register unsigned short int LCOE = 7;
    sbit  LCOE_bit at CLC1CONL.B7;
    const register unsigned short int LCOUT = 6;
    sbit  LCOUT_bit at CLC1CONL.B6;
    const register unsigned short int LCPOL = 5;
    sbit  LCPOL_bit at CLC1CONL.B5;
    const register unsigned short int MODE_2 = 2;
    sbit  MODE_2_bit at CLC1CONL.B2;
    const register unsigned short int MODE_1 = 1;
    sbit  MODE_1_bit at CLC1CONL.B1;
    const register unsigned short int MODE_0 = 0;
    sbit  MODE_0_bit at CLC1CONL.B0;

    // CLC1CONH bits
    const register unsigned short int G4POL = 3;
    sbit  G4POL_bit at CLC1CONH.B3;
    const register unsigned short int G3POL = 2;
    sbit  G3POL_bit at CLC1CONH.B2;
    const register unsigned short int G2POL = 1;
    sbit  G2POL_bit at CLC1CONH.B1;
    const register unsigned short int G1POL = 0;
    sbit  G1POL_bit at CLC1CONH.B0;

    // CLC1SELL bits
    const register unsigned short int DS4_2 = 14;
    sbit  DS4_2_bit at CLC1SELL.B14;
    const register unsigned short int DS4_1 = 13;
    sbit  DS4_1_bit at CLC1SELL.B13;
    const register unsigned short int DS4_0 = 12;
    sbit  DS4_0_bit at CLC1SELL.B12;
    const register unsigned short int DS3_2 = 10;
    sbit  DS3_2_bit at CLC1SELL.B10;
    const register unsigned short int DS3_1 = 9;
    sbit  DS3_1_bit at CLC1SELL.B9;
    const register unsigned short int DS3_0 = 8;
    sbit  DS3_0_bit at CLC1SELL.B8;
    const register unsigned short int DS2_2 = 6;
    sbit  DS2_2_bit at CLC1SELL.B6;
    const register unsigned short int DS2_1 = 5;
    sbit  DS2_1_bit at CLC1SELL.B5;
    const register unsigned short int DS2_0 = 4;
    sbit  DS2_0_bit at CLC1SELL.B4;
    const register unsigned short int DS1_2 = 2;
    sbit  DS1_2_bit at CLC1SELL.B2;
    const register unsigned short int DS1_1 = 1;
    sbit  DS1_1_bit at CLC1SELL.B1;
    const register unsigned short int DS1_0 = 0;
    sbit  DS1_0_bit at CLC1SELL.B0;

    // CLC1GLSL bits
    const register unsigned short int G2D4T = 15;
    sbit  G2D4T_bit at CLC1GLSL.B15;
    const register unsigned short int G2D4N = 14;
    sbit  G2D4N_bit at CLC1GLSL.B14;
    const register unsigned short int G2D3T = 13;
    sbit  G2D3T_bit at CLC1GLSL.B13;
    const register unsigned short int G2D3N = 12;
    sbit  G2D3N_bit at CLC1GLSL.B12;
    const register unsigned short int G2D2T = 11;
    sbit  G2D2T_bit at CLC1GLSL.B11;
    const register unsigned short int G2D2N = 10;
    sbit  G2D2N_bit at CLC1GLSL.B10;
    const register unsigned short int G2D1T = 9;
    sbit  G2D1T_bit at CLC1GLSL.B9;
    const register unsigned short int G2D1N = 8;
    sbit  G2D1N_bit at CLC1GLSL.B8;
    const register unsigned short int G1D4T = 7;
    sbit  G1D4T_bit at CLC1GLSL.B7;
    const register unsigned short int G1D4N = 6;
    sbit  G1D4N_bit at CLC1GLSL.B6;
    const register unsigned short int G1D3T = 5;
    sbit  G1D3T_bit at CLC1GLSL.B5;
    const register unsigned short int G1D3N = 4;
    sbit  G1D3N_bit at CLC1GLSL.B4;
    const register unsigned short int G1D2T = 3;
    sbit  G1D2T_bit at CLC1GLSL.B3;
    const register unsigned short int G1D2N = 2;
    sbit  G1D2N_bit at CLC1GLSL.B2;
    const register unsigned short int G1D1T = 1;
    sbit  G1D1T_bit at CLC1GLSL.B1;
    const register unsigned short int G1D1N = 0;
    sbit  G1D1N_bit at CLC1GLSL.B0;

    // CLC1GLSH bits
    const register unsigned short int G4D4T = 15;
    sbit  G4D4T_bit at CLC1GLSH.B15;
    const register unsigned short int G4D4N = 14;
    sbit  G4D4N_bit at CLC1GLSH.B14;
    const register unsigned short int G4D3T = 13;
    sbit  G4D3T_bit at CLC1GLSH.B13;
    const register unsigned short int G4D3N = 12;
    sbit  G4D3N_bit at CLC1GLSH.B12;
    const register unsigned short int G4D2T = 11;
    sbit  G4D2T_bit at CLC1GLSH.B11;
    const register unsigned short int G4D2N = 10;
    sbit  G4D2N_bit at CLC1GLSH.B10;
    const register unsigned short int G4D1T = 9;
    sbit  G4D1T_bit at CLC1GLSH.B9;
    const register unsigned short int G4D1N = 8;
    sbit  G4D1N_bit at CLC1GLSH.B8;
    const register unsigned short int G3D4T = 7;
    sbit  G3D4T_bit at CLC1GLSH.B7;
    const register unsigned short int G3D4N = 6;
    sbit  G3D4N_bit at CLC1GLSH.B6;
    const register unsigned short int G3D3T = 5;
    sbit  G3D3T_bit at CLC1GLSH.B5;
    const register unsigned short int G3D3N = 4;
    sbit  G3D3N_bit at CLC1GLSH.B4;
    const register unsigned short int G3D2T = 3;
    sbit  G3D2T_bit at CLC1GLSH.B3;
    const register unsigned short int G3D2N = 2;
    sbit  G3D2N_bit at CLC1GLSH.B2;
    const register unsigned short int G3D1T = 1;
    sbit  G3D1T_bit at CLC1GLSH.B1;
    const register unsigned short int G3D1N = 0;
    sbit  G3D1N_bit at CLC1GLSH.B0;

    // CCP1CON1L bits
    const register unsigned short int CCPON = 15;
    sbit  CCPON_bit at CCP1CON1L.B15;
    sbit  CCPON_CCP1CON1L_bit at CCP1CON1L.B15;
    const register unsigned short int CCPSIDL = 13;
    sbit  CCPSIDL_bit at CCP1CON1L.B13;
    sbit  CCPSIDL_CCP1CON1L_bit at CCP1CON1L.B13;
    const register unsigned short int CCPSLP = 12;
    sbit  CCPSLP_bit at CCP1CON1L.B12;
    sbit  CCPSLP_CCP1CON1L_bit at CCP1CON1L.B12;
    const register unsigned short int TMRSYNC = 11;
    sbit  TMRSYNC_bit at CCP1CON1L.B11;
    sbit  TMRSYNC_CCP1CON1L_bit at CCP1CON1L.B11;
    const register unsigned short int CLKSEL_2 = 10;
    sbit  CLKSEL_2_bit at CCP1CON1L.B10;
    sbit  CLKSEL_2_CCP1CON1L_bit at CCP1CON1L.B10;
    const register unsigned short int CLKSEL_1 = 9;
    sbit  CLKSEL_1_bit at CCP1CON1L.B9;
    sbit  CLKSEL_1_CCP1CON1L_bit at CCP1CON1L.B9;
    const register unsigned short int CLKSEL_0 = 8;
    sbit  CLKSEL_0_bit at CCP1CON1L.B8;
    sbit  CLKSEL_0_CCP1CON1L_bit at CCP1CON1L.B8;
    const register unsigned short int TMRPS_1 = 7;
    sbit  TMRPS_1_bit at CCP1CON1L.B7;
    sbit  TMRPS_1_CCP1CON1L_bit at CCP1CON1L.B7;
    const register unsigned short int TMRPS_0 = 6;
    sbit  TMRPS_0_bit at CCP1CON1L.B6;
    sbit  TMRPS_0_CCP1CON1L_bit at CCP1CON1L.B6;
    const register unsigned short int TMR32 = 5;
    sbit  TMR32_bit at CCP1CON1L.B5;
    sbit  TMR32_CCP1CON1L_bit at CCP1CON1L.B5;
    const register unsigned short int CCSEL = 4;
    sbit  CCSEL_bit at CCP1CON1L.B4;
    sbit  CCSEL_CCP1CON1L_bit at CCP1CON1L.B4;
    const register unsigned short int MOD_3 = 3;
    sbit  MOD_3_bit at CCP1CON1L.B3;
    sbit  MOD_3_CCP1CON1L_bit at CCP1CON1L.B3;
    const register unsigned short int MOD_2 = 2;
    sbit  MOD_2_bit at CCP1CON1L.B2;
    sbit  MOD_2_CCP1CON1L_bit at CCP1CON1L.B2;
    const register unsigned short int MOD_1 = 1;
    sbit  MOD_1_bit at CCP1CON1L.B1;
    sbit  MOD_1_CCP1CON1L_bit at CCP1CON1L.B1;
    const register unsigned short int MOD_0 = 0;
    sbit  MOD_0_bit at CCP1CON1L.B0;
    sbit  MOD_0_CCP1CON1L_bit at CCP1CON1L.B0;

    // CCP1CON1H bits
    const register unsigned short int OPSRC = 15;
    sbit  OPSRC_bit at CCP1CON1H.B15;
    sbit  OPSRC_CCP1CON1H_bit at CCP1CON1H.B15;
    const register unsigned short int RTRGEN = 14;
    sbit  RTRGEN_bit at CCP1CON1H.B14;
    sbit  RTRGEN_CCP1CON1H_bit at CCP1CON1H.B14;
    const register unsigned short int IOPS_3 = 11;
    sbit  IOPS_3_bit at CCP1CON1H.B11;
    sbit  IOPS_3_CCP1CON1H_bit at CCP1CON1H.B11;
    const register unsigned short int IOPS_2 = 10;
    sbit  IOPS_2_bit at CCP1CON1H.B10;
    sbit  IOPS_2_CCP1CON1H_bit at CCP1CON1H.B10;
    const register unsigned short int IOPS_1 = 9;
    sbit  IOPS_1_bit at CCP1CON1H.B9;
    sbit  IOPS_1_CCP1CON1H_bit at CCP1CON1H.B9;
    const register unsigned short int IOPS_0 = 8;
    sbit  IOPS_0_bit at CCP1CON1H.B8;
    sbit  IOPS_0_CCP1CON1H_bit at CCP1CON1H.B8;
    const register unsigned short int TRIGEN = 7;
    sbit  TRIGEN_bit at CCP1CON1H.B7;
    sbit  TRIGEN_CCP1CON1H_bit at CCP1CON1H.B7;
    const register unsigned short int ONESHOT = 6;
    sbit  ONESHOT_bit at CCP1CON1H.B6;
    sbit  ONESHOT_CCP1CON1H_bit at CCP1CON1H.B6;
    const register unsigned short int ALTSYNC = 5;
    sbit  ALTSYNC_bit at CCP1CON1H.B5;
    sbit  ALTSYNC_CCP1CON1H_bit at CCP1CON1H.B5;
    const register unsigned short int SYNC_4 = 4;
    sbit  SYNC_4_bit at CCP1CON1H.B4;
    sbit  SYNC_4_CCP1CON1H_bit at CCP1CON1H.B4;
    const register unsigned short int SYNC_3 = 3;
    sbit  SYNC_3_bit at CCP1CON1H.B3;
    sbit  SYNC_3_CCP1CON1H_bit at CCP1CON1H.B3;
    const register unsigned short int SYNC_2 = 2;
    sbit  SYNC_2_bit at CCP1CON1H.B2;
    sbit  SYNC_2_CCP1CON1H_bit at CCP1CON1H.B2;
    const register unsigned short int SYNC_1 = 1;
    sbit  SYNC_1_bit at CCP1CON1H.B1;
    sbit  SYNC_1_CCP1CON1H_bit at CCP1CON1H.B1;
    const register unsigned short int SYNC_0 = 0;
    sbit  SYNC_0_bit at CCP1CON1H.B0;
    sbit  SYNC_0_CCP1CON1H_bit at CCP1CON1H.B0;

    // CCP1CON2L bits
    const register unsigned short int PWMRSEN = 15;
    sbit  PWMRSEN_bit at CCP1CON2L.B15;
    sbit  PWMRSEN_CCP1CON2L_bit at CCP1CON2L.B15;
    const register unsigned short int ASDGM = 14;
    sbit  ASDGM_bit at CCP1CON2L.B14;
    sbit  ASDGM_CCP1CON2L_bit at CCP1CON2L.B14;
    const register unsigned short int SSDG = 12;
    sbit  SSDG_bit at CCP1CON2L.B12;
    sbit  SSDG_CCP1CON2L_bit at CCP1CON2L.B12;
    const register unsigned short int ASDG_7 = 7;
    sbit  ASDG_7_bit at CCP1CON2L.B7;
    sbit  ASDG_7_CCP1CON2L_bit at CCP1CON2L.B7;
    const register unsigned short int ASDG_6 = 6;
    sbit  ASDG_6_bit at CCP1CON2L.B6;
    sbit  ASDG_6_CCP1CON2L_bit at CCP1CON2L.B6;
    const register unsigned short int ASDG_5 = 5;
    sbit  ASDG_5_bit at CCP1CON2L.B5;
    sbit  ASDG_5_CCP1CON2L_bit at CCP1CON2L.B5;
    const register unsigned short int ASDG_4 = 4;
    sbit  ASDG_4_bit at CCP1CON2L.B4;
    sbit  ASDG_4_CCP1CON2L_bit at CCP1CON2L.B4;
    const register unsigned short int ASDG_3 = 3;
    sbit  ASDG_3_bit at CCP1CON2L.B3;
    sbit  ASDG_3_CCP1CON2L_bit at CCP1CON2L.B3;
    const register unsigned short int ASDG_2 = 2;
    sbit  ASDG_2_bit at CCP1CON2L.B2;
    sbit  ASDG_2_CCP1CON2L_bit at CCP1CON2L.B2;
    const register unsigned short int ASDG_1 = 1;
    sbit  ASDG_1_bit at CCP1CON2L.B1;
    sbit  ASDG_1_CCP1CON2L_bit at CCP1CON2L.B1;
    const register unsigned short int ASDG_0 = 0;
    sbit  ASDG_0_bit at CCP1CON2L.B0;
    sbit  ASDG_0_CCP1CON2L_bit at CCP1CON2L.B0;

    // CCP1CON2H bits
    const register unsigned short int OENSYNC = 15;
    sbit  OENSYNC_bit at CCP1CON2H.B15;
    sbit  OENSYNC_CCP1CON2H_bit at CCP1CON2H.B15;
    const register unsigned short int OCFEN = 13;
    sbit  OCFEN_bit at CCP1CON2H.B13;
    const register unsigned short int OCEEN = 12;
    sbit  OCEEN_bit at CCP1CON2H.B12;
    const register unsigned short int OCDEN = 11;
    sbit  OCDEN_bit at CCP1CON2H.B11;
    const register unsigned short int OCCEN = 10;
    sbit  OCCEN_bit at CCP1CON2H.B10;
    const register unsigned short int OCBEN = 9;
    sbit  OCBEN_bit at CCP1CON2H.B9;
    const register unsigned short int OCAEN = 8;
    sbit  OCAEN_bit at CCP1CON2H.B8;
    sbit  OCAEN_CCP1CON2H_bit at CCP1CON2H.B8;
    const register unsigned short int ICGSM_1 = 7;
    sbit  ICGSM_1_bit at CCP1CON2H.B7;
    sbit  ICGSM_1_CCP1CON2H_bit at CCP1CON2H.B7;
    const register unsigned short int ICGSM_0 = 6;
    sbit  ICGSM_0_bit at CCP1CON2H.B6;
    sbit  ICGSM_0_CCP1CON2H_bit at CCP1CON2H.B6;
    const register unsigned short int AUXOUT_1 = 4;
    sbit  AUXOUT_1_bit at CCP1CON2H.B4;
    sbit  AUXOUT_1_CCP1CON2H_bit at CCP1CON2H.B4;
    const register unsigned short int AUXOUT_0 = 3;
    sbit  AUXOUT_0_bit at CCP1CON2H.B3;
    sbit  AUXOUT_0_CCP1CON2H_bit at CCP1CON2H.B3;
    const register unsigned short int ICSEL_2 = 2;
    sbit  ICSEL_2_bit at CCP1CON2H.B2;
    sbit  ICSEL_2_CCP1CON2H_bit at CCP1CON2H.B2;
    const register unsigned short int ICSEL_1 = 1;
    sbit  ICSEL_1_bit at CCP1CON2H.B1;
    sbit  ICSEL_1_CCP1CON2H_bit at CCP1CON2H.B1;
    const register unsigned short int ICSEL_0 = 0;
    sbit  ICSEL_0_bit at CCP1CON2H.B0;
    sbit  ICSEL_0_CCP1CON2H_bit at CCP1CON2H.B0;

    // CCP1CON3L bits
    const register unsigned short int DT_5 = 5;
    sbit  DT_5_bit at CCP1CON3L.B5;
    const register unsigned short int DT_4 = 4;
    sbit  DT_4_bit at CCP1CON3L.B4;
    const register unsigned short int DT_3 = 3;
    sbit  DT_3_bit at CCP1CON3L.B3;
    const register unsigned short int DT_2 = 2;
    sbit  DT_2_bit at CCP1CON3L.B2;
    const register unsigned short int DT_1 = 1;
    sbit  DT_1_bit at CCP1CON3L.B1;
    const register unsigned short int DT_0 = 0;
    sbit  DT_0_bit at CCP1CON3L.B0;

    // CCP1CON3H bits
    const register unsigned short int OETRIG = 15;
    sbit  OETRIG_bit at CCP1CON3H.B15;
    sbit  OETRIG_CCP1CON3H_bit at CCP1CON3H.B15;
    const register unsigned short int OSCNT_2 = 14;
    sbit  OSCNT_2_bit at CCP1CON3H.B14;
    sbit  OSCNT_2_CCP1CON3H_bit at CCP1CON3H.B14;
    const register unsigned short int OSCNT_1 = 13;
    sbit  OSCNT_1_bit at CCP1CON3H.B13;
    sbit  OSCNT_1_CCP1CON3H_bit at CCP1CON3H.B13;
    const register unsigned short int OSCNT_0 = 12;
    sbit  OSCNT_0_bit at CCP1CON3H.B12;
    sbit  OSCNT_0_CCP1CON3H_bit at CCP1CON3H.B12;
    const register unsigned short int OUTM_2 = 10;
    sbit  OUTM_2_bit at CCP1CON3H.B10;
    const register unsigned short int OUTM_1 = 9;
    sbit  OUTM_1_bit at CCP1CON3H.B9;
    const register unsigned short int OUTM_0 = 8;
    sbit  OUTM_0_bit at CCP1CON3H.B8;
    const register unsigned short int POLACE = 5;
    sbit  POLACE_bit at CCP1CON3H.B5;
    sbit  POLACE_CCP1CON3H_bit at CCP1CON3H.B5;
    const register unsigned short int POLBDF = 4;
    sbit  POLBDF_bit at CCP1CON3H.B4;
    const register unsigned short int PSSACE_1 = 3;
    sbit  PSSACE_1_bit at CCP1CON3H.B3;
    sbit  PSSACE_1_CCP1CON3H_bit at CCP1CON3H.B3;
    const register unsigned short int PSSACE_0 = 2;
    sbit  PSSACE_0_bit at CCP1CON3H.B2;
    sbit  PSSACE_0_CCP1CON3H_bit at CCP1CON3H.B2;
    const register unsigned short int PSSBDF_1 = 1;
    sbit  PSSBDF_1_bit at CCP1CON3H.B1;
    const register unsigned short int PSSBDF_0 = 0;
    sbit  PSSBDF_0_bit at CCP1CON3H.B0;

    // CCP1STATL bits
    const register unsigned short int TRIG = 7;
    sbit  TRIG_bit at CCP1STATL.B7;
    sbit  TRIG_CCP1STATL_bit at CCP1STATL.B7;
    const register unsigned short int TRSET = 6;
    sbit  TRSET_bit at CCP1STATL.B6;
    sbit  TRSET_CCP1STATL_bit at CCP1STATL.B6;
    const register unsigned short int TRCLR = 5;
    sbit  TRCLR_bit at CCP1STATL.B5;
    sbit  TRCLR_CCP1STATL_bit at CCP1STATL.B5;
    const register unsigned short int ASEVT = 4;
    sbit  ASEVT_bit at CCP1STATL.B4;
    sbit  ASEVT_CCP1STATL_bit at CCP1STATL.B4;
    const register unsigned short int SCEVT = 3;
    sbit  SCEVT_bit at CCP1STATL.B3;
    sbit  SCEVT_CCP1STATL_bit at CCP1STATL.B3;
    const register unsigned short int ICDIS = 2;
    sbit  ICDIS_bit at CCP1STATL.B2;
    sbit  ICDIS_CCP1STATL_bit at CCP1STATL.B2;
    const register unsigned short int ICOV = 1;
    sbit  ICOV_bit at CCP1STATL.B1;
    sbit  ICOV_CCP1STATL_bit at CCP1STATL.B1;
    const register unsigned short int ICBNE = 0;
    sbit  ICBNE_bit at CCP1STATL.B0;
    sbit  ICBNE_CCP1STATL_bit at CCP1STATL.B0;

    // CCP1TMRL bits
    const register unsigned short int TMR_15 = 15;
    sbit  TMR_15_bit at CCP1TMRL.B15;
    sbit  TMR_15_CCP1TMRL_bit at CCP1TMRL.B15;
    const register unsigned short int TMR_14 = 14;
    sbit  TMR_14_bit at CCP1TMRL.B14;
    sbit  TMR_14_CCP1TMRL_bit at CCP1TMRL.B14;
    const register unsigned short int TMR_13 = 13;
    sbit  TMR_13_bit at CCP1TMRL.B13;
    sbit  TMR_13_CCP1TMRL_bit at CCP1TMRL.B13;
    const register unsigned short int TMR_12 = 12;
    sbit  TMR_12_bit at CCP1TMRL.B12;
    sbit  TMR_12_CCP1TMRL_bit at CCP1TMRL.B12;
    const register unsigned short int TMR_11 = 11;
    sbit  TMR_11_bit at CCP1TMRL.B11;
    sbit  TMR_11_CCP1TMRL_bit at CCP1TMRL.B11;
    const register unsigned short int TMR_10 = 10;
    sbit  TMR_10_bit at CCP1TMRL.B10;
    sbit  TMR_10_CCP1TMRL_bit at CCP1TMRL.B10;
    const register unsigned short int TMR_9 = 9;
    sbit  TMR_9_bit at CCP1TMRL.B9;
    sbit  TMR_9_CCP1TMRL_bit at CCP1TMRL.B9;
    const register unsigned short int TMR_8 = 8;
    sbit  TMR_8_bit at CCP1TMRL.B8;
    sbit  TMR_8_CCP1TMRL_bit at CCP1TMRL.B8;
    const register unsigned short int TMR_7 = 7;
    sbit  TMR_7_bit at CCP1TMRL.B7;
    sbit  TMR_7_CCP1TMRL_bit at CCP1TMRL.B7;
    const register unsigned short int TMR_6 = 6;
    sbit  TMR_6_bit at CCP1TMRL.B6;
    sbit  TMR_6_CCP1TMRL_bit at CCP1TMRL.B6;
    const register unsigned short int TMR_5 = 5;
    sbit  TMR_5_bit at CCP1TMRL.B5;
    sbit  TMR_5_CCP1TMRL_bit at CCP1TMRL.B5;
    const register unsigned short int TMR_4 = 4;
    sbit  TMR_4_bit at CCP1TMRL.B4;
    sbit  TMR_4_CCP1TMRL_bit at CCP1TMRL.B4;
    const register unsigned short int TMR_3 = 3;
    sbit  TMR_3_bit at CCP1TMRL.B3;
    sbit  TMR_3_CCP1TMRL_bit at CCP1TMRL.B3;
    const register unsigned short int TMR_2 = 2;
    sbit  TMR_2_bit at CCP1TMRL.B2;
    sbit  TMR_2_CCP1TMRL_bit at CCP1TMRL.B2;
    const register unsigned short int TMR_1 = 1;
    sbit  TMR_1_bit at CCP1TMRL.B1;
    sbit  TMR_1_CCP1TMRL_bit at CCP1TMRL.B1;
    const register unsigned short int TMR_0 = 0;
    sbit  TMR_0_bit at CCP1TMRL.B0;
    sbit  TMR_0_CCP1TMRL_bit at CCP1TMRL.B0;

    // CCP1TMRH bits
    sbit  TMR_15_CCP1TMRH_bit at CCP1TMRH.B15;
    sbit  TMR_14_CCP1TMRH_bit at CCP1TMRH.B14;
    sbit  TMR_13_CCP1TMRH_bit at CCP1TMRH.B13;
    sbit  TMR_12_CCP1TMRH_bit at CCP1TMRH.B12;
    sbit  TMR_11_CCP1TMRH_bit at CCP1TMRH.B11;
    sbit  TMR_10_CCP1TMRH_bit at CCP1TMRH.B10;
    sbit  TMR_9_CCP1TMRH_bit at CCP1TMRH.B9;
    sbit  TMR_8_CCP1TMRH_bit at CCP1TMRH.B8;
    sbit  TMR_7_CCP1TMRH_bit at CCP1TMRH.B7;
    sbit  TMR_6_CCP1TMRH_bit at CCP1TMRH.B6;
    sbit  TMR_5_CCP1TMRH_bit at CCP1TMRH.B5;
    sbit  TMR_4_CCP1TMRH_bit at CCP1TMRH.B4;
    sbit  TMR_3_CCP1TMRH_bit at CCP1TMRH.B3;
    sbit  TMR_2_CCP1TMRH_bit at CCP1TMRH.B2;
    sbit  TMR_1_CCP1TMRH_bit at CCP1TMRH.B1;
    sbit  TMR_0_CCP1TMRH_bit at CCP1TMRH.B0;

    // CCP1PRL bits
    const register unsigned short int PR_15 = 15;
    sbit  PR_15_bit at CCP1PRL.B15;
    sbit  PR_15_CCP1PRL_bit at CCP1PRL.B15;
    const register unsigned short int PR_14 = 14;
    sbit  PR_14_bit at CCP1PRL.B14;
    sbit  PR_14_CCP1PRL_bit at CCP1PRL.B14;
    const register unsigned short int PR_13 = 13;
    sbit  PR_13_bit at CCP1PRL.B13;
    sbit  PR_13_CCP1PRL_bit at CCP1PRL.B13;
    const register unsigned short int PR_12 = 12;
    sbit  PR_12_bit at CCP1PRL.B12;
    sbit  PR_12_CCP1PRL_bit at CCP1PRL.B12;
    const register unsigned short int PR_11 = 11;
    sbit  PR_11_bit at CCP1PRL.B11;
    sbit  PR_11_CCP1PRL_bit at CCP1PRL.B11;
    const register unsigned short int PR_10 = 10;
    sbit  PR_10_bit at CCP1PRL.B10;
    sbit  PR_10_CCP1PRL_bit at CCP1PRL.B10;
    const register unsigned short int PR_9 = 9;
    sbit  PR_9_bit at CCP1PRL.B9;
    sbit  PR_9_CCP1PRL_bit at CCP1PRL.B9;
    const register unsigned short int PR_8 = 8;
    sbit  PR_8_bit at CCP1PRL.B8;
    sbit  PR_8_CCP1PRL_bit at CCP1PRL.B8;
    const register unsigned short int PR_7 = 7;
    sbit  PR_7_bit at CCP1PRL.B7;
    sbit  PR_7_CCP1PRL_bit at CCP1PRL.B7;
    const register unsigned short int PR_6 = 6;
    sbit  PR_6_bit at CCP1PRL.B6;
    sbit  PR_6_CCP1PRL_bit at CCP1PRL.B6;
    const register unsigned short int PR_5 = 5;
    sbit  PR_5_bit at CCP1PRL.B5;
    sbit  PR_5_CCP1PRL_bit at CCP1PRL.B5;
    const register unsigned short int PR_4 = 4;
    sbit  PR_4_bit at CCP1PRL.B4;
    sbit  PR_4_CCP1PRL_bit at CCP1PRL.B4;
    const register unsigned short int PR_3 = 3;
    sbit  PR_3_bit at CCP1PRL.B3;
    sbit  PR_3_CCP1PRL_bit at CCP1PRL.B3;
    const register unsigned short int PR_2 = 2;
    sbit  PR_2_bit at CCP1PRL.B2;
    sbit  PR_2_CCP1PRL_bit at CCP1PRL.B2;
    const register unsigned short int PR_1 = 1;
    sbit  PR_1_bit at CCP1PRL.B1;
    sbit  PR_1_CCP1PRL_bit at CCP1PRL.B1;
    const register unsigned short int PR_0 = 0;
    sbit  PR_0_bit at CCP1PRL.B0;
    sbit  PR_0_CCP1PRL_bit at CCP1PRL.B0;

    // CCP1PRH bits
    sbit  PR_15_CCP1PRH_bit at CCP1PRH.B15;
    sbit  PR_14_CCP1PRH_bit at CCP1PRH.B14;
    sbit  PR_13_CCP1PRH_bit at CCP1PRH.B13;
    sbit  PR_12_CCP1PRH_bit at CCP1PRH.B12;
    sbit  PR_11_CCP1PRH_bit at CCP1PRH.B11;
    sbit  PR_10_CCP1PRH_bit at CCP1PRH.B10;
    sbit  PR_9_CCP1PRH_bit at CCP1PRH.B9;
    sbit  PR_8_CCP1PRH_bit at CCP1PRH.B8;
    sbit  PR_7_CCP1PRH_bit at CCP1PRH.B7;
    sbit  PR_6_CCP1PRH_bit at CCP1PRH.B6;
    sbit  PR_5_CCP1PRH_bit at CCP1PRH.B5;
    sbit  PR_4_CCP1PRH_bit at CCP1PRH.B4;
    sbit  PR_3_CCP1PRH_bit at CCP1PRH.B3;
    sbit  PR_2_CCP1PRH_bit at CCP1PRH.B2;
    sbit  PR_1_CCP1PRH_bit at CCP1PRH.B1;
    sbit  PR_0_CCP1PRH_bit at CCP1PRH.B0;

    // CCP1RAL bits
    const register unsigned short int CMP_15 = 15;
    sbit  CMP_15_bit at CCP1RAL.B15;
    sbit  CMP_15_CCP1RAL_bit at CCP1RAL.B15;
    const register unsigned short int CMP_14 = 14;
    sbit  CMP_14_bit at CCP1RAL.B14;
    sbit  CMP_14_CCP1RAL_bit at CCP1RAL.B14;
    const register unsigned short int CMP_13 = 13;
    sbit  CMP_13_bit at CCP1RAL.B13;
    sbit  CMP_13_CCP1RAL_bit at CCP1RAL.B13;
    const register unsigned short int CMP_12 = 12;
    sbit  CMP_12_bit at CCP1RAL.B12;
    sbit  CMP_12_CCP1RAL_bit at CCP1RAL.B12;
    const register unsigned short int CMP_11 = 11;
    sbit  CMP_11_bit at CCP1RAL.B11;
    sbit  CMP_11_CCP1RAL_bit at CCP1RAL.B11;
    const register unsigned short int CMP_10 = 10;
    sbit  CMP_10_bit at CCP1RAL.B10;
    sbit  CMP_10_CCP1RAL_bit at CCP1RAL.B10;
    const register unsigned short int CMP_9 = 9;
    sbit  CMP_9_bit at CCP1RAL.B9;
    sbit  CMP_9_CCP1RAL_bit at CCP1RAL.B9;
    const register unsigned short int CMP_8 = 8;
    sbit  CMP_8_bit at CCP1RAL.B8;
    sbit  CMP_8_CCP1RAL_bit at CCP1RAL.B8;
    const register unsigned short int CMP_7 = 7;
    sbit  CMP_7_bit at CCP1RAL.B7;
    sbit  CMP_7_CCP1RAL_bit at CCP1RAL.B7;
    const register unsigned short int CMP_6 = 6;
    sbit  CMP_6_bit at CCP1RAL.B6;
    sbit  CMP_6_CCP1RAL_bit at CCP1RAL.B6;
    const register unsigned short int CMP_5 = 5;
    sbit  CMP_5_bit at CCP1RAL.B5;
    sbit  CMP_5_CCP1RAL_bit at CCP1RAL.B5;
    const register unsigned short int CMP_4 = 4;
    sbit  CMP_4_bit at CCP1RAL.B4;
    sbit  CMP_4_CCP1RAL_bit at CCP1RAL.B4;
    const register unsigned short int CMP_3 = 3;
    sbit  CMP_3_bit at CCP1RAL.B3;
    sbit  CMP_3_CCP1RAL_bit at CCP1RAL.B3;
    const register unsigned short int CMP_2 = 2;
    sbit  CMP_2_bit at CCP1RAL.B2;
    sbit  CMP_2_CCP1RAL_bit at CCP1RAL.B2;
    const register unsigned short int CMP_1 = 1;
    sbit  CMP_1_bit at CCP1RAL.B1;
    sbit  CMP_1_CCP1RAL_bit at CCP1RAL.B1;
    const register unsigned short int CMP_0 = 0;
    sbit  CMP_0_bit at CCP1RAL.B0;
    sbit  CMP_0_CCP1RAL_bit at CCP1RAL.B0;

    // CCP1RBL bits
    sbit  CMP_15_CCP1RBL_bit at CCP1RBL.B15;
    sbit  CMP_14_CCP1RBL_bit at CCP1RBL.B14;
    sbit  CMP_13_CCP1RBL_bit at CCP1RBL.B13;
    sbit  CMP_12_CCP1RBL_bit at CCP1RBL.B12;
    sbit  CMP_11_CCP1RBL_bit at CCP1RBL.B11;
    sbit  CMP_10_CCP1RBL_bit at CCP1RBL.B10;
    sbit  CMP_9_CCP1RBL_bit at CCP1RBL.B9;
    sbit  CMP_8_CCP1RBL_bit at CCP1RBL.B8;
    sbit  CMP_7_CCP1RBL_bit at CCP1RBL.B7;
    sbit  CMP_6_CCP1RBL_bit at CCP1RBL.B6;
    sbit  CMP_5_CCP1RBL_bit at CCP1RBL.B5;
    sbit  CMP_4_CCP1RBL_bit at CCP1RBL.B4;
    sbit  CMP_3_CCP1RBL_bit at CCP1RBL.B3;
    sbit  CMP_2_CCP1RBL_bit at CCP1RBL.B2;
    sbit  CMP_1_CCP1RBL_bit at CCP1RBL.B1;
    sbit  CMP_0_CCP1RBL_bit at CCP1RBL.B0;

    // CCP1BUFL bits
    const register unsigned short int BUF_15 = 15;
    sbit  BUF_15_bit at CCP1BUFL.B15;
    sbit  BUF_15_CCP1BUFL_bit at CCP1BUFL.B15;
    const register unsigned short int BUF_14 = 14;
    sbit  BUF_14_bit at CCP1BUFL.B14;
    sbit  BUF_14_CCP1BUFL_bit at CCP1BUFL.B14;
    const register unsigned short int BUF_13 = 13;
    sbit  BUF_13_bit at CCP1BUFL.B13;
    sbit  BUF_13_CCP1BUFL_bit at CCP1BUFL.B13;
    const register unsigned short int BUF_12 = 12;
    sbit  BUF_12_bit at CCP1BUFL.B12;
    sbit  BUF_12_CCP1BUFL_bit at CCP1BUFL.B12;
    const register unsigned short int BUF_11 = 11;
    sbit  BUF_11_bit at CCP1BUFL.B11;
    sbit  BUF_11_CCP1BUFL_bit at CCP1BUFL.B11;
    const register unsigned short int BUF_10 = 10;
    sbit  BUF_10_bit at CCP1BUFL.B10;
    sbit  BUF_10_CCP1BUFL_bit at CCP1BUFL.B10;
    const register unsigned short int BUF_9 = 9;
    sbit  BUF_9_bit at CCP1BUFL.B9;
    sbit  BUF_9_CCP1BUFL_bit at CCP1BUFL.B9;
    const register unsigned short int BUF_8 = 8;
    sbit  BUF_8_bit at CCP1BUFL.B8;
    sbit  BUF_8_CCP1BUFL_bit at CCP1BUFL.B8;
    const register unsigned short int BUF_7 = 7;
    sbit  BUF_7_bit at CCP1BUFL.B7;
    sbit  BUF_7_CCP1BUFL_bit at CCP1BUFL.B7;
    const register unsigned short int BUF_6 = 6;
    sbit  BUF_6_bit at CCP1BUFL.B6;
    sbit  BUF_6_CCP1BUFL_bit at CCP1BUFL.B6;
    const register unsigned short int BUF_5 = 5;
    sbit  BUF_5_bit at CCP1BUFL.B5;
    sbit  BUF_5_CCP1BUFL_bit at CCP1BUFL.B5;
    const register unsigned short int BUF_4 = 4;
    sbit  BUF_4_bit at CCP1BUFL.B4;
    sbit  BUF_4_CCP1BUFL_bit at CCP1BUFL.B4;
    const register unsigned short int BUF_3 = 3;
    sbit  BUF_3_bit at CCP1BUFL.B3;
    sbit  BUF_3_CCP1BUFL_bit at CCP1BUFL.B3;
    const register unsigned short int BUF_2 = 2;
    sbit  BUF_2_bit at CCP1BUFL.B2;
    sbit  BUF_2_CCP1BUFL_bit at CCP1BUFL.B2;
    const register unsigned short int BUF_1 = 1;
    sbit  BUF_1_bit at CCP1BUFL.B1;
    sbit  BUF_1_CCP1BUFL_bit at CCP1BUFL.B1;
    const register unsigned short int BUF_0 = 0;
    sbit  BUF_0_bit at CCP1BUFL.B0;
    sbit  BUF_0_CCP1BUFL_bit at CCP1BUFL.B0;

    // CCP1BUFH bits
    sbit  BUF_15_CCP1BUFH_bit at CCP1BUFH.B15;
    sbit  BUF_14_CCP1BUFH_bit at CCP1BUFH.B14;
    sbit  BUF_13_CCP1BUFH_bit at CCP1BUFH.B13;
    sbit  BUF_12_CCP1BUFH_bit at CCP1BUFH.B12;
    sbit  BUF_11_CCP1BUFH_bit at CCP1BUFH.B11;
    sbit  BUF_10_CCP1BUFH_bit at CCP1BUFH.B10;
    sbit  BUF_9_CCP1BUFH_bit at CCP1BUFH.B9;
    sbit  BUF_8_CCP1BUFH_bit at CCP1BUFH.B8;
    sbit  BUF_7_CCP1BUFH_bit at CCP1BUFH.B7;
    sbit  BUF_6_CCP1BUFH_bit at CCP1BUFH.B6;
    sbit  BUF_5_CCP1BUFH_bit at CCP1BUFH.B5;
    sbit  BUF_4_CCP1BUFH_bit at CCP1BUFH.B4;
    sbit  BUF_3_CCP1BUFH_bit at CCP1BUFH.B3;
    sbit  BUF_2_CCP1BUFH_bit at CCP1BUFH.B2;
    sbit  BUF_1_CCP1BUFH_bit at CCP1BUFH.B1;
    sbit  BUF_0_CCP1BUFH_bit at CCP1BUFH.B0;

    // CCP2CON1L bits
    sbit  CCPON_CCP2CON1L_bit at CCP2CON1L.B15;
    sbit  CCPSIDL_CCP2CON1L_bit at CCP2CON1L.B13;
    sbit  CCPSLP_CCP2CON1L_bit at CCP2CON1L.B12;
    sbit  TMRSYNC_CCP2CON1L_bit at CCP2CON1L.B11;
    sbit  CLKSEL_2_CCP2CON1L_bit at CCP2CON1L.B10;
    sbit  CLKSEL_1_CCP2CON1L_bit at CCP2CON1L.B9;
    sbit  CLKSEL_0_CCP2CON1L_bit at CCP2CON1L.B8;
    sbit  TMRPS_1_CCP2CON1L_bit at CCP2CON1L.B7;
    sbit  TMRPS_0_CCP2CON1L_bit at CCP2CON1L.B6;
    sbit  TMR32_CCP2CON1L_bit at CCP2CON1L.B5;
    sbit  CCSEL_CCP2CON1L_bit at CCP2CON1L.B4;
    sbit  MOD_3_CCP2CON1L_bit at CCP2CON1L.B3;
    sbit  MOD_2_CCP2CON1L_bit at CCP2CON1L.B2;
    sbit  MOD_1_CCP2CON1L_bit at CCP2CON1L.B1;
    sbit  MOD_0_CCP2CON1L_bit at CCP2CON1L.B0;

    // CCP2CON1H bits
    sbit  OPSRC_CCP2CON1H_bit at CCP2CON1H.B15;
    sbit  RTRGEN_CCP2CON1H_bit at CCP2CON1H.B14;
    sbit  IOPS_3_CCP2CON1H_bit at CCP2CON1H.B11;
    sbit  IOPS_2_CCP2CON1H_bit at CCP2CON1H.B10;
    sbit  IOPS_1_CCP2CON1H_bit at CCP2CON1H.B9;
    sbit  IOPS_0_CCP2CON1H_bit at CCP2CON1H.B8;
    sbit  TRIGEN_CCP2CON1H_bit at CCP2CON1H.B7;
    sbit  ONESHOT_CCP2CON1H_bit at CCP2CON1H.B6;
    sbit  ALTSYNC_CCP2CON1H_bit at CCP2CON1H.B5;
    sbit  SYNC_4_CCP2CON1H_bit at CCP2CON1H.B4;
    sbit  SYNC_3_CCP2CON1H_bit at CCP2CON1H.B3;
    sbit  SYNC_2_CCP2CON1H_bit at CCP2CON1H.B2;
    sbit  SYNC_1_CCP2CON1H_bit at CCP2CON1H.B1;
    sbit  SYNC_0_CCP2CON1H_bit at CCP2CON1H.B0;

    // CCP2CON2L bits
    sbit  PWMRSEN_CCP2CON2L_bit at CCP2CON2L.B15;
    sbit  ASDGM_CCP2CON2L_bit at CCP2CON2L.B14;
    sbit  SSDG_CCP2CON2L_bit at CCP2CON2L.B12;
    sbit  ASDG_7_CCP2CON2L_bit at CCP2CON2L.B7;
    sbit  ASDG_6_CCP2CON2L_bit at CCP2CON2L.B6;
    sbit  ASDG_5_CCP2CON2L_bit at CCP2CON2L.B5;
    sbit  ASDG_4_CCP2CON2L_bit at CCP2CON2L.B4;
    sbit  ASDG_3_CCP2CON2L_bit at CCP2CON2L.B3;
    sbit  ASDG_2_CCP2CON2L_bit at CCP2CON2L.B2;
    sbit  ASDG_1_CCP2CON2L_bit at CCP2CON2L.B1;
    sbit  ASDG_0_CCP2CON2L_bit at CCP2CON2L.B0;

    // CCP2CON2H bits
    sbit  OENSYNC_CCP2CON2H_bit at CCP2CON2H.B15;
    sbit  OCAEN_CCP2CON2H_bit at CCP2CON2H.B8;
    sbit  ICGSM_1_CCP2CON2H_bit at CCP2CON2H.B7;
    sbit  ICGSM_0_CCP2CON2H_bit at CCP2CON2H.B6;
    sbit  AUXOUT_1_CCP2CON2H_bit at CCP2CON2H.B4;
    sbit  AUXOUT_0_CCP2CON2H_bit at CCP2CON2H.B3;
    sbit  ICSEL_2_CCP2CON2H_bit at CCP2CON2H.B2;
    sbit  ICSEL_1_CCP2CON2H_bit at CCP2CON2H.B1;
    sbit  ICSEL_0_CCP2CON2H_bit at CCP2CON2H.B0;

    // CCP2CON3H bits
    sbit  OETRIG_CCP2CON3H_bit at CCP2CON3H.B15;
    sbit  OSCNT_2_CCP2CON3H_bit at CCP2CON3H.B14;
    sbit  OSCNT_1_CCP2CON3H_bit at CCP2CON3H.B13;
    sbit  OSCNT_0_CCP2CON3H_bit at CCP2CON3H.B12;
    sbit  POLACE_CCP2CON3H_bit at CCP2CON3H.B5;
    sbit  PSSACE_1_CCP2CON3H_bit at CCP2CON3H.B3;
    sbit  PSSACE_0_CCP2CON3H_bit at CCP2CON3H.B2;

    // CCP2STATL bits
    sbit  TRIG_CCP2STATL_bit at CCP2STATL.B7;
    sbit  TRSET_CCP2STATL_bit at CCP2STATL.B6;
    sbit  TRCLR_CCP2STATL_bit at CCP2STATL.B5;
    sbit  ASEVT_CCP2STATL_bit at CCP2STATL.B4;
    sbit  SCEVT_CCP2STATL_bit at CCP2STATL.B3;
    sbit  ICDIS_CCP2STATL_bit at CCP2STATL.B2;
    sbit  ICOV_CCP2STATL_bit at CCP2STATL.B1;
    sbit  ICBNE_CCP2STATL_bit at CCP2STATL.B0;

    // CCP2TMRL bits
    sbit  TMR_15_CCP2TMRL_bit at CCP2TMRL.B15;
    sbit  TMR_14_CCP2TMRL_bit at CCP2TMRL.B14;
    sbit  TMR_13_CCP2TMRL_bit at CCP2TMRL.B13;
    sbit  TMR_12_CCP2TMRL_bit at CCP2TMRL.B12;
    sbit  TMR_11_CCP2TMRL_bit at CCP2TMRL.B11;
    sbit  TMR_10_CCP2TMRL_bit at CCP2TMRL.B10;
    sbit  TMR_9_CCP2TMRL_bit at CCP2TMRL.B9;
    sbit  TMR_8_CCP2TMRL_bit at CCP2TMRL.B8;
    sbit  TMR_7_CCP2TMRL_bit at CCP2TMRL.B7;
    sbit  TMR_6_CCP2TMRL_bit at CCP2TMRL.B6;
    sbit  TMR_5_CCP2TMRL_bit at CCP2TMRL.B5;
    sbit  TMR_4_CCP2TMRL_bit at CCP2TMRL.B4;
    sbit  TMR_3_CCP2TMRL_bit at CCP2TMRL.B3;
    sbit  TMR_2_CCP2TMRL_bit at CCP2TMRL.B2;
    sbit  TMR_1_CCP2TMRL_bit at CCP2TMRL.B1;
    sbit  TMR_0_CCP2TMRL_bit at CCP2TMRL.B0;

    // CCP2TMRH bits
    sbit  TMR_15_CCP2TMRH_bit at CCP2TMRH.B15;
    sbit  TMR_14_CCP2TMRH_bit at CCP2TMRH.B14;
    sbit  TMR_13_CCP2TMRH_bit at CCP2TMRH.B13;
    sbit  TMR_12_CCP2TMRH_bit at CCP2TMRH.B12;
    sbit  TMR_11_CCP2TMRH_bit at CCP2TMRH.B11;
    sbit  TMR_10_CCP2TMRH_bit at CCP2TMRH.B10;
    sbit  TMR_9_CCP2TMRH_bit at CCP2TMRH.B9;
    sbit  TMR_8_CCP2TMRH_bit at CCP2TMRH.B8;
    sbit  TMR_7_CCP2TMRH_bit at CCP2TMRH.B7;
    sbit  TMR_6_CCP2TMRH_bit at CCP2TMRH.B6;
    sbit  TMR_5_CCP2TMRH_bit at CCP2TMRH.B5;
    sbit  TMR_4_CCP2TMRH_bit at CCP2TMRH.B4;
    sbit  TMR_3_CCP2TMRH_bit at CCP2TMRH.B3;
    sbit  TMR_2_CCP2TMRH_bit at CCP2TMRH.B2;
    sbit  TMR_1_CCP2TMRH_bit at CCP2TMRH.B1;
    sbit  TMR_0_CCP2TMRH_bit at CCP2TMRH.B0;

    // CCP2PRL bits
    sbit  PR_15_CCP2PRL_bit at CCP2PRL.B15;
    sbit  PR_14_CCP2PRL_bit at CCP2PRL.B14;
    sbit  PR_13_CCP2PRL_bit at CCP2PRL.B13;
    sbit  PR_12_CCP2PRL_bit at CCP2PRL.B12;
    sbit  PR_11_CCP2PRL_bit at CCP2PRL.B11;
    sbit  PR_10_CCP2PRL_bit at CCP2PRL.B10;
    sbit  PR_9_CCP2PRL_bit at CCP2PRL.B9;
    sbit  PR_8_CCP2PRL_bit at CCP2PRL.B8;
    sbit  PR_7_CCP2PRL_bit at CCP2PRL.B7;
    sbit  PR_6_CCP2PRL_bit at CCP2PRL.B6;
    sbit  PR_5_CCP2PRL_bit at CCP2PRL.B5;
    sbit  PR_4_CCP2PRL_bit at CCP2PRL.B4;
    sbit  PR_3_CCP2PRL_bit at CCP2PRL.B3;
    sbit  PR_2_CCP2PRL_bit at CCP2PRL.B2;
    sbit  PR_1_CCP2PRL_bit at CCP2PRL.B1;
    sbit  PR_0_CCP2PRL_bit at CCP2PRL.B0;

    // CCP2PRH bits
    sbit  PR_15_CCP2PRH_bit at CCP2PRH.B15;
    sbit  PR_14_CCP2PRH_bit at CCP2PRH.B14;
    sbit  PR_13_CCP2PRH_bit at CCP2PRH.B13;
    sbit  PR_12_CCP2PRH_bit at CCP2PRH.B12;
    sbit  PR_11_CCP2PRH_bit at CCP2PRH.B11;
    sbit  PR_10_CCP2PRH_bit at CCP2PRH.B10;
    sbit  PR_9_CCP2PRH_bit at CCP2PRH.B9;
    sbit  PR_8_CCP2PRH_bit at CCP2PRH.B8;
    sbit  PR_7_CCP2PRH_bit at CCP2PRH.B7;
    sbit  PR_6_CCP2PRH_bit at CCP2PRH.B6;
    sbit  PR_5_CCP2PRH_bit at CCP2PRH.B5;
    sbit  PR_4_CCP2PRH_bit at CCP2PRH.B4;
    sbit  PR_3_CCP2PRH_bit at CCP2PRH.B3;
    sbit  PR_2_CCP2PRH_bit at CCP2PRH.B2;
    sbit  PR_1_CCP2PRH_bit at CCP2PRH.B1;
    sbit  PR_0_CCP2PRH_bit at CCP2PRH.B0;

    // CCP2RAL bits
    sbit  CMP_15_CCP2RAL_bit at CCP2RAL.B15;
    sbit  CMP_14_CCP2RAL_bit at CCP2RAL.B14;
    sbit  CMP_13_CCP2RAL_bit at CCP2RAL.B13;
    sbit  CMP_12_CCP2RAL_bit at CCP2RAL.B12;
    sbit  CMP_11_CCP2RAL_bit at CCP2RAL.B11;
    sbit  CMP_10_CCP2RAL_bit at CCP2RAL.B10;
    sbit  CMP_9_CCP2RAL_bit at CCP2RAL.B9;
    sbit  CMP_8_CCP2RAL_bit at CCP2RAL.B8;
    sbit  CMP_7_CCP2RAL_bit at CCP2RAL.B7;
    sbit  CMP_6_CCP2RAL_bit at CCP2RAL.B6;
    sbit  CMP_5_CCP2RAL_bit at CCP2RAL.B5;
    sbit  CMP_4_CCP2RAL_bit at CCP2RAL.B4;
    sbit  CMP_3_CCP2RAL_bit at CCP2RAL.B3;
    sbit  CMP_2_CCP2RAL_bit at CCP2RAL.B2;
    sbit  CMP_1_CCP2RAL_bit at CCP2RAL.B1;
    sbit  CMP_0_CCP2RAL_bit at CCP2RAL.B0;

    // CCP2RBL bits
    sbit  CMP_15_CCP2RBL_bit at CCP2RBL.B15;
    sbit  CMP_14_CCP2RBL_bit at CCP2RBL.B14;
    sbit  CMP_13_CCP2RBL_bit at CCP2RBL.B13;
    sbit  CMP_12_CCP2RBL_bit at CCP2RBL.B12;
    sbit  CMP_11_CCP2RBL_bit at CCP2RBL.B11;
    sbit  CMP_10_CCP2RBL_bit at CCP2RBL.B10;
    sbit  CMP_9_CCP2RBL_bit at CCP2RBL.B9;
    sbit  CMP_8_CCP2RBL_bit at CCP2RBL.B8;
    sbit  CMP_7_CCP2RBL_bit at CCP2RBL.B7;
    sbit  CMP_6_CCP2RBL_bit at CCP2RBL.B6;
    sbit  CMP_5_CCP2RBL_bit at CCP2RBL.B5;
    sbit  CMP_4_CCP2RBL_bit at CCP2RBL.B4;
    sbit  CMP_3_CCP2RBL_bit at CCP2RBL.B3;
    sbit  CMP_2_CCP2RBL_bit at CCP2RBL.B2;
    sbit  CMP_1_CCP2RBL_bit at CCP2RBL.B1;
    sbit  CMP_0_CCP2RBL_bit at CCP2RBL.B0;

    // CCP2BUFL bits
    sbit  BUF_15_CCP2BUFL_bit at CCP2BUFL.B15;
    sbit  BUF_14_CCP2BUFL_bit at CCP2BUFL.B14;
    sbit  BUF_13_CCP2BUFL_bit at CCP2BUFL.B13;
    sbit  BUF_12_CCP2BUFL_bit at CCP2BUFL.B12;
    sbit  BUF_11_CCP2BUFL_bit at CCP2BUFL.B11;
    sbit  BUF_10_CCP2BUFL_bit at CCP2BUFL.B10;
    sbit  BUF_9_CCP2BUFL_bit at CCP2BUFL.B9;
    sbit  BUF_8_CCP2BUFL_bit at CCP2BUFL.B8;
    sbit  BUF_7_CCP2BUFL_bit at CCP2BUFL.B7;
    sbit  BUF_6_CCP2BUFL_bit at CCP2BUFL.B6;
    sbit  BUF_5_CCP2BUFL_bit at CCP2BUFL.B5;
    sbit  BUF_4_CCP2BUFL_bit at CCP2BUFL.B4;
    sbit  BUF_3_CCP2BUFL_bit at CCP2BUFL.B3;
    sbit  BUF_2_CCP2BUFL_bit at CCP2BUFL.B2;
    sbit  BUF_1_CCP2BUFL_bit at CCP2BUFL.B1;
    sbit  BUF_0_CCP2BUFL_bit at CCP2BUFL.B0;

    // CCP2BUFH bits
    sbit  BUF_15_CCP2BUFH_bit at CCP2BUFH.B15;
    sbit  BUF_14_CCP2BUFH_bit at CCP2BUFH.B14;
    sbit  BUF_13_CCP2BUFH_bit at CCP2BUFH.B13;
    sbit  BUF_12_CCP2BUFH_bit at CCP2BUFH.B12;
    sbit  BUF_11_CCP2BUFH_bit at CCP2BUFH.B11;
    sbit  BUF_10_CCP2BUFH_bit at CCP2BUFH.B10;
    sbit  BUF_9_CCP2BUFH_bit at CCP2BUFH.B9;
    sbit  BUF_8_CCP2BUFH_bit at CCP2BUFH.B8;
    sbit  BUF_7_CCP2BUFH_bit at CCP2BUFH.B7;
    sbit  BUF_6_CCP2BUFH_bit at CCP2BUFH.B6;
    sbit  BUF_5_CCP2BUFH_bit at CCP2BUFH.B5;
    sbit  BUF_4_CCP2BUFH_bit at CCP2BUFH.B4;
    sbit  BUF_3_CCP2BUFH_bit at CCP2BUFH.B3;
    sbit  BUF_2_CCP2BUFH_bit at CCP2BUFH.B2;
    sbit  BUF_1_CCP2BUFH_bit at CCP2BUFH.B1;
    sbit  BUF_0_CCP2BUFH_bit at CCP2BUFH.B0;

    // SSP1BUF bits
    const register unsigned short int SSPBUF_7 = 7;
    sbit  SSPBUF_7_bit at SSP1BUF.B7;
    const register unsigned short int SSPBUF_6 = 6;
    sbit  SSPBUF_6_bit at SSP1BUF.B6;
    const register unsigned short int SSPBUF_5 = 5;
    sbit  SSPBUF_5_bit at SSP1BUF.B5;
    const register unsigned short int SSPBUF_4 = 4;
    sbit  SSPBUF_4_bit at SSP1BUF.B4;
    const register unsigned short int SSPBUF_3 = 3;
    sbit  SSPBUF_3_bit at SSP1BUF.B3;
    const register unsigned short int SSPBUF_2 = 2;
    sbit  SSPBUF_2_bit at SSP1BUF.B2;
    const register unsigned short int SSPBUF_1 = 1;
    sbit  SSPBUF_1_bit at SSP1BUF.B1;
    const register unsigned short int SSPBUF_0 = 0;
    sbit  SSPBUF_0_bit at SSP1BUF.B0;

    // SSP1CON1 bits
    const register unsigned short int WCOL = 7;
    sbit  WCOL_bit at SSP1CON1.B7;
    const register unsigned short int SSPOV = 6;
    sbit  SSPOV_bit at SSP1CON1.B6;
    const register unsigned short int SSPEN = 5;
    sbit  SSPEN_bit at SSP1CON1.B5;
    const register unsigned short int CKP = 4;
    sbit  CKP_bit at SSP1CON1.B4;
    const register unsigned short int SSPM_3 = 3;
    sbit  SSPM_3_bit at SSP1CON1.B3;
    const register unsigned short int SSPM_2 = 2;
    sbit  SSPM_2_bit at SSP1CON1.B2;
    const register unsigned short int SSPM_1 = 1;
    sbit  SSPM_1_bit at SSP1CON1.B1;
    const register unsigned short int SSPM_0 = 0;
    sbit  SSPM_0_bit at SSP1CON1.B0;

    // SSP1CON2 bits
    const register unsigned short int GCEN = 7;
    sbit  GCEN_bit at SSP1CON2.B7;
    const register unsigned short int ACKSTAT = 6;
    sbit  ACKSTAT_bit at SSP1CON2.B6;
    const register unsigned short int ACKDT = 5;
    sbit  ACKDT_bit at SSP1CON2.B5;
    const register unsigned short int ACKEN = 4;
    sbit  ACKEN_bit at SSP1CON2.B4;
    const register unsigned short int RCEN = 3;
    sbit  RCEN_bit at SSP1CON2.B3;
    const register unsigned short int PEN = 2;
    sbit  PEN_bit at SSP1CON2.B2;
    const register unsigned short int RSEN = 1;
    sbit  RSEN_bit at SSP1CON2.B1;
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at SSP1CON2.B0;

    // SSP1CON3 bits
    const register unsigned short int ACKTIM = 7;
    sbit  ACKTIM_bit at SSP1CON3.B7;
    const register unsigned short int PCIE = 6;
    sbit  PCIE_bit at SSP1CON3.B6;
    const register unsigned short int SCIE = 5;
    sbit  SCIE_bit at SSP1CON3.B5;
    const register unsigned short int BOEN = 4;
    sbit  BOEN_bit at SSP1CON3.B4;
    const register unsigned short int SDAHT = 3;
    sbit  SDAHT_bit at SSP1CON3.B3;
    const register unsigned short int SBCDE = 2;
    sbit  SBCDE_bit at SSP1CON3.B2;
    const register unsigned short int AHEN = 1;
    sbit  AHEN_bit at SSP1CON3.B1;
    const register unsigned short int DHEN = 0;
    sbit  DHEN_bit at SSP1CON3.B0;

    // SSP1STAT bits
    const register unsigned short int SMP = 7;
    sbit  SMP_bit at SSP1STAT.B7;
    const register unsigned short int CKE = 6;
    sbit  CKE_bit at SSP1STAT.B6;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at SSP1STAT.B5;
    const register unsigned short int P = 4;
    sbit  P_bit at SSP1STAT.B4;
    const register unsigned short int S = 3;
    sbit  S_bit at SSP1STAT.B3;
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at SSP1STAT.B2;
    const register unsigned short int UA = 1;
    sbit  UA_bit at SSP1STAT.B1;
    const register unsigned short int BF = 0;
    sbit  BF_bit at SSP1STAT.B0;

    // SSP1ADD bits
    const register unsigned short int SSPADD_7 = 7;
    sbit  SSPADD_7_bit at SSP1ADD.B7;
    const register unsigned short int SSPADD_6 = 6;
    sbit  SSPADD_6_bit at SSP1ADD.B6;
    const register unsigned short int SSPADD_5 = 5;
    sbit  SSPADD_5_bit at SSP1ADD.B5;
    const register unsigned short int SSPADD_4 = 4;
    sbit  SSPADD_4_bit at SSP1ADD.B4;
    const register unsigned short int SSPADD_3 = 3;
    sbit  SSPADD_3_bit at SSP1ADD.B3;
    const register unsigned short int SSPADD_2 = 2;
    sbit  SSPADD_2_bit at SSP1ADD.B2;
    const register unsigned short int SSPADD_1 = 1;
    sbit  SSPADD_1_bit at SSP1ADD.B1;
    const register unsigned short int SSPADD_0 = 0;
    sbit  SSPADD_0_bit at SSP1ADD.B0;

    // SSP1MSK bits
    const register unsigned short int MSK7 = 7;
    sbit  MSK7_bit at SSP1MSK.B7;
    const register unsigned short int MSK6 = 6;
    sbit  MSK6_bit at SSP1MSK.B6;
    const register unsigned short int MSK5 = 5;
    sbit  MSK5_bit at SSP1MSK.B5;
    const register unsigned short int MSK4 = 4;
    sbit  MSK4_bit at SSP1MSK.B4;
    const register unsigned short int MSK3 = 3;
    sbit  MSK3_bit at SSP1MSK.B3;
    const register unsigned short int MSK2 = 2;
    sbit  MSK2_bit at SSP1MSK.B2;
    const register unsigned short int MSK1 = 1;
    sbit  MSK1_bit at SSP1MSK.B1;
    const register unsigned short int MSK0 = 0;
    sbit  MSK0_bit at SSP1MSK.B0;

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

    // TRISA bits
    const register unsigned short int TRISA11 = 11;
    sbit  TRISA11_bit at TRISA.B11;
    const register unsigned short int TRISA10 = 10;
    sbit  TRISA10_bit at TRISA.B10;
    const register unsigned short int TRISA9 = 9;
    sbit  TRISA9_bit at TRISA.B9;
    const register unsigned short int TRISA8 = 8;
    sbit  TRISA8_bit at TRISA.B8;
    const register unsigned short int TRISA7 = 7;
    sbit  TRISA7_bit at TRISA.B7;
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
    const register unsigned short int RA11 = 11;
    sbit  RA11_bit at PORTA.B11;
    const register unsigned short int RA10 = 10;
    sbit  RA10_bit at PORTA.B10;
    const register unsigned short int RA9 = 9;
    sbit  RA9_bit at PORTA.B9;
    const register unsigned short int RA8 = 8;
    sbit  RA8_bit at PORTA.B8;
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

    // LATA bits
    const register unsigned short int LATA11 = 11;
    sbit  LATA11_bit at LATA.B11;
    const register unsigned short int LATA10 = 10;
    sbit  LATA10_bit at LATA.B10;
    const register unsigned short int LATA9 = 9;
    sbit  LATA9_bit at LATA.B9;
    const register unsigned short int LATA8 = 8;
    sbit  LATA8_bit at LATA.B8;
    const register unsigned short int LATA7 = 7;
    sbit  LATA7_bit at LATA.B7;
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
    const register unsigned short int ODA11 = 11;
    sbit  ODA11_bit at ODCA.B11;
    const register unsigned short int ODA10 = 10;
    sbit  ODA10_bit at ODCA.B10;
    const register unsigned short int ODA9 = 9;
    sbit  ODA9_bit at ODCA.B9;
    const register unsigned short int ODA8 = 8;
    sbit  ODA8_bit at ODCA.B8;
    const register unsigned short int ODA7 = 7;
    sbit  ODA7_bit at ODCA.B7;
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
    const register unsigned short int TRISC9 = 9;
    sbit  TRISC9_bit at TRISC.B9;
    const register unsigned short int TRISC8 = 8;
    sbit  TRISC8_bit at TRISC.B8;
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

    // PORTC bits
    const register unsigned short int RC9 = 9;
    sbit  RC9_bit at PORTC.B9;
    const register unsigned short int RC8 = 8;
    sbit  RC8_bit at PORTC.B8;
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

    // LATC bits
    const register unsigned short int LATC9 = 9;
    sbit  LATC9_bit at LATC.B9;
    const register unsigned short int LATC8 = 8;
    sbit  LATC8_bit at LATC.B8;
    const register unsigned short int LATC7 = 7;
    sbit  LATC7_bit at LATC.B7;
    const register unsigned short int LATC6 = 6;
    sbit  LATC6_bit at LATC.B6;
    const register unsigned short int LATC5 = 5;
    sbit  LATC5_bit at LATC.B5;
    const register unsigned short int LATC4 = 4;
    sbit  LATC4_bit at LATC.B4;
    const register unsigned short int LATC3 = 3;
    sbit  LATC3_bit at LATC.B3;
    const register unsigned short int LATC2 = 2;
    sbit  LATC2_bit at LATC.B2;
    const register unsigned short int LATC1 = 1;
    sbit  LATC1_bit at LATC.B1;
    const register unsigned short int LATC0 = 0;
    sbit  LATC0_bit at LATC.B0;

    // ODCC bits
    const register unsigned short int ODC9 = 9;
    sbit  ODC9_bit at ODCC.B9;
    const register unsigned short int ODC8 = 8;
    sbit  ODC8_bit at ODCC.B8;
    const register unsigned short int ODC7 = 7;
    sbit  ODC7_bit at ODCC.B7;
    const register unsigned short int ODC6 = 6;
    sbit  ODC6_bit at ODCC.B6;
    const register unsigned short int ODC5 = 5;
    sbit  ODC5_bit at ODCC.B5;
    const register unsigned short int ODC4 = 4;
    sbit  ODC4_bit at ODCC.B4;
    const register unsigned short int ODC3 = 3;
    sbit  ODC3_bit at ODCC.B3;
    const register unsigned short int ODC2 = 2;
    sbit  ODC2_bit at ODCC.B2;
    const register unsigned short int ODC1 = 1;
    sbit  ODC1_bit at ODCC.B1;
    const register unsigned short int ODC0 = 0;
    sbit  ODC0_bit at ODCC.B0;

    // PADCFG1 bits
    const register unsigned short int SDA1DIS = 9;
    sbit  SDA1DIS_bit at PADCFG1.B9;
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

    // ADC1BUF10 bits
    const register unsigned short int ADC1BUF10_15 = 15;
    sbit  ADC1BUF10_15_bit at ADC1BUF10.B15;
    const register unsigned short int ADC1BUF10_14 = 14;
    sbit  ADC1BUF10_14_bit at ADC1BUF10.B14;
    const register unsigned short int ADC1BUF10_13 = 13;
    sbit  ADC1BUF10_13_bit at ADC1BUF10.B13;
    const register unsigned short int ADC1BUF10_12 = 12;
    sbit  ADC1BUF10_12_bit at ADC1BUF10.B12;
    const register unsigned short int ADC1BUF10_11 = 11;
    sbit  ADC1BUF10_11_bit at ADC1BUF10.B11;
    const register unsigned short int ADC1BUF10_10 = 10;
    sbit  ADC1BUF10_10_bit at ADC1BUF10.B10;
    const register unsigned short int ADC1BUF10_9 = 9;
    sbit  ADC1BUF10_9_bit at ADC1BUF10.B9;
    const register unsigned short int ADC1BUF10_8 = 8;
    sbit  ADC1BUF10_8_bit at ADC1BUF10.B8;
    const register unsigned short int ADC1BUF10_7 = 7;
    sbit  ADC1BUF10_7_bit at ADC1BUF10.B7;
    const register unsigned short int ADC1BUF10_6 = 6;
    sbit  ADC1BUF10_6_bit at ADC1BUF10.B6;
    const register unsigned short int ADC1BUF10_5 = 5;
    sbit  ADC1BUF10_5_bit at ADC1BUF10.B5;
    const register unsigned short int ADC1BUF10_4 = 4;
    sbit  ADC1BUF10_4_bit at ADC1BUF10.B4;
    const register unsigned short int ADC1BUF10_3 = 3;
    sbit  ADC1BUF10_3_bit at ADC1BUF10.B3;
    const register unsigned short int ADC1BUF10_2 = 2;
    sbit  ADC1BUF10_2_bit at ADC1BUF10.B2;
    const register unsigned short int ADC1BUF10_1 = 1;
    sbit  ADC1BUF10_1_bit at ADC1BUF10.B1;
    const register unsigned short int ADC1BUF10_0 = 0;
    sbit  ADC1BUF10_0_bit at ADC1BUF10.B0;

    // ADC1BUF11 bits
    const register unsigned short int ADC1BUF11_15 = 15;
    sbit  ADC1BUF11_15_bit at ADC1BUF11.B15;
    const register unsigned short int ADC1BUF11_14 = 14;
    sbit  ADC1BUF11_14_bit at ADC1BUF11.B14;
    const register unsigned short int ADC1BUF11_13 = 13;
    sbit  ADC1BUF11_13_bit at ADC1BUF11.B13;
    const register unsigned short int ADC1BUF11_12 = 12;
    sbit  ADC1BUF11_12_bit at ADC1BUF11.B12;
    const register unsigned short int ADC1BUF11_11 = 11;
    sbit  ADC1BUF11_11_bit at ADC1BUF11.B11;
    const register unsigned short int ADC1BUF11_10 = 10;
    sbit  ADC1BUF11_10_bit at ADC1BUF11.B10;
    const register unsigned short int ADC1BUF11_9 = 9;
    sbit  ADC1BUF11_9_bit at ADC1BUF11.B9;
    const register unsigned short int ADC1BUF11_8 = 8;
    sbit  ADC1BUF11_8_bit at ADC1BUF11.B8;
    const register unsigned short int ADC1BUF11_7 = 7;
    sbit  ADC1BUF11_7_bit at ADC1BUF11.B7;
    const register unsigned short int ADC1BUF11_6 = 6;
    sbit  ADC1BUF11_6_bit at ADC1BUF11.B6;
    const register unsigned short int ADC1BUF11_5 = 5;
    sbit  ADC1BUF11_5_bit at ADC1BUF11.B5;
    const register unsigned short int ADC1BUF11_4 = 4;
    sbit  ADC1BUF11_4_bit at ADC1BUF11.B4;
    const register unsigned short int ADC1BUF11_3 = 3;
    sbit  ADC1BUF11_3_bit at ADC1BUF11.B3;
    const register unsigned short int ADC1BUF11_2 = 2;
    sbit  ADC1BUF11_2_bit at ADC1BUF11.B2;
    const register unsigned short int ADC1BUF11_1 = 1;
    sbit  ADC1BUF11_1_bit at ADC1BUF11.B1;
    const register unsigned short int ADC1BUF11_0 = 0;
    sbit  ADC1BUF11_0_bit at ADC1BUF11.B0;

    // ADC1BUF12 bits
    const register unsigned short int ADC1BUF12_15 = 15;
    sbit  ADC1BUF12_15_bit at ADC1BUF12.B15;
    const register unsigned short int ADC1BUF12_14 = 14;
    sbit  ADC1BUF12_14_bit at ADC1BUF12.B14;
    const register unsigned short int ADC1BUF12_13 = 13;
    sbit  ADC1BUF12_13_bit at ADC1BUF12.B13;
    const register unsigned short int ADC1BUF12_12 = 12;
    sbit  ADC1BUF12_12_bit at ADC1BUF12.B12;
    const register unsigned short int ADC1BUF12_11 = 11;
    sbit  ADC1BUF12_11_bit at ADC1BUF12.B11;
    const register unsigned short int ADC1BUF12_10 = 10;
    sbit  ADC1BUF12_10_bit at ADC1BUF12.B10;
    const register unsigned short int ADC1BUF12_9 = 9;
    sbit  ADC1BUF12_9_bit at ADC1BUF12.B9;
    const register unsigned short int ADC1BUF12_8 = 8;
    sbit  ADC1BUF12_8_bit at ADC1BUF12.B8;
    const register unsigned short int ADC1BUF12_7 = 7;
    sbit  ADC1BUF12_7_bit at ADC1BUF12.B7;
    const register unsigned short int ADC1BUF12_6 = 6;
    sbit  ADC1BUF12_6_bit at ADC1BUF12.B6;
    const register unsigned short int ADC1BUF12_5 = 5;
    sbit  ADC1BUF12_5_bit at ADC1BUF12.B5;
    const register unsigned short int ADC1BUF12_4 = 4;
    sbit  ADC1BUF12_4_bit at ADC1BUF12.B4;
    const register unsigned short int ADC1BUF12_3 = 3;
    sbit  ADC1BUF12_3_bit at ADC1BUF12.B3;
    const register unsigned short int ADC1BUF12_2 = 2;
    sbit  ADC1BUF12_2_bit at ADC1BUF12.B2;
    const register unsigned short int ADC1BUF12_1 = 1;
    sbit  ADC1BUF12_1_bit at ADC1BUF12.B1;
    const register unsigned short int ADC1BUF12_0 = 0;
    sbit  ADC1BUF12_0_bit at ADC1BUF12.B0;

    // ADC1BUF13 bits
    const register unsigned short int ADC1BUF13_15 = 15;
    sbit  ADC1BUF13_15_bit at ADC1BUF13.B15;
    const register unsigned short int ADC1BUF13_14 = 14;
    sbit  ADC1BUF13_14_bit at ADC1BUF13.B14;
    const register unsigned short int ADC1BUF13_13 = 13;
    sbit  ADC1BUF13_13_bit at ADC1BUF13.B13;
    const register unsigned short int ADC1BUF13_12 = 12;
    sbit  ADC1BUF13_12_bit at ADC1BUF13.B12;
    const register unsigned short int ADC1BUF13_11 = 11;
    sbit  ADC1BUF13_11_bit at ADC1BUF13.B11;
    const register unsigned short int ADC1BUF13_10 = 10;
    sbit  ADC1BUF13_10_bit at ADC1BUF13.B10;
    const register unsigned short int ADC1BUF13_9 = 9;
    sbit  ADC1BUF13_9_bit at ADC1BUF13.B9;
    const register unsigned short int ADC1BUF13_8 = 8;
    sbit  ADC1BUF13_8_bit at ADC1BUF13.B8;
    const register unsigned short int ADC1BUF13_7 = 7;
    sbit  ADC1BUF13_7_bit at ADC1BUF13.B7;
    const register unsigned short int ADC1BUF13_6 = 6;
    sbit  ADC1BUF13_6_bit at ADC1BUF13.B6;
    const register unsigned short int ADC1BUF13_5 = 5;
    sbit  ADC1BUF13_5_bit at ADC1BUF13.B5;
    const register unsigned short int ADC1BUF13_4 = 4;
    sbit  ADC1BUF13_4_bit at ADC1BUF13.B4;
    const register unsigned short int ADC1BUF13_3 = 3;
    sbit  ADC1BUF13_3_bit at ADC1BUF13.B3;
    const register unsigned short int ADC1BUF13_2 = 2;
    sbit  ADC1BUF13_2_bit at ADC1BUF13.B2;
    const register unsigned short int ADC1BUF13_1 = 1;
    sbit  ADC1BUF13_1_bit at ADC1BUF13.B1;
    const register unsigned short int ADC1BUF13_0 = 0;
    sbit  ADC1BUF13_0_bit at ADC1BUF13.B0;

    // ADC1BUF14 bits
    const register unsigned short int ADC1BUF14_15 = 15;
    sbit  ADC1BUF14_15_bit at ADC1BUF14.B15;
    const register unsigned short int ADC1BUF14_14 = 14;
    sbit  ADC1BUF14_14_bit at ADC1BUF14.B14;
    const register unsigned short int ADC1BUF14_13 = 13;
    sbit  ADC1BUF14_13_bit at ADC1BUF14.B13;
    const register unsigned short int ADC1BUF14_12 = 12;
    sbit  ADC1BUF14_12_bit at ADC1BUF14.B12;
    const register unsigned short int ADC1BUF14_11 = 11;
    sbit  ADC1BUF14_11_bit at ADC1BUF14.B11;
    const register unsigned short int ADC1BUF14_10 = 10;
    sbit  ADC1BUF14_10_bit at ADC1BUF14.B10;
    const register unsigned short int ADC1BUF14_9 = 9;
    sbit  ADC1BUF14_9_bit at ADC1BUF14.B9;
    const register unsigned short int ADC1BUF14_8 = 8;
    sbit  ADC1BUF14_8_bit at ADC1BUF14.B8;
    const register unsigned short int ADC1BUF14_7 = 7;
    sbit  ADC1BUF14_7_bit at ADC1BUF14.B7;
    const register unsigned short int ADC1BUF14_6 = 6;
    sbit  ADC1BUF14_6_bit at ADC1BUF14.B6;
    const register unsigned short int ADC1BUF14_5 = 5;
    sbit  ADC1BUF14_5_bit at ADC1BUF14.B5;
    const register unsigned short int ADC1BUF14_4 = 4;
    sbit  ADC1BUF14_4_bit at ADC1BUF14.B4;
    const register unsigned short int ADC1BUF14_3 = 3;
    sbit  ADC1BUF14_3_bit at ADC1BUF14.B3;
    const register unsigned short int ADC1BUF14_2 = 2;
    sbit  ADC1BUF14_2_bit at ADC1BUF14.B2;
    const register unsigned short int ADC1BUF14_1 = 1;
    sbit  ADC1BUF14_1_bit at ADC1BUF14.B1;
    const register unsigned short int ADC1BUF14_0 = 0;
    sbit  ADC1BUF14_0_bit at ADC1BUF14.B0;

    // ADC1BUF15 bits
    const register unsigned short int ADC1BUF15_15 = 15;
    sbit  ADC1BUF15_15_bit at ADC1BUF15.B15;
    const register unsigned short int ADC1BUF15_14 = 14;
    sbit  ADC1BUF15_14_bit at ADC1BUF15.B14;
    const register unsigned short int ADC1BUF15_13 = 13;
    sbit  ADC1BUF15_13_bit at ADC1BUF15.B13;
    const register unsigned short int ADC1BUF15_12 = 12;
    sbit  ADC1BUF15_12_bit at ADC1BUF15.B12;
    const register unsigned short int ADC1BUF15_11 = 11;
    sbit  ADC1BUF15_11_bit at ADC1BUF15.B11;
    const register unsigned short int ADC1BUF15_10 = 10;
    sbit  ADC1BUF15_10_bit at ADC1BUF15.B10;
    const register unsigned short int ADC1BUF15_9 = 9;
    sbit  ADC1BUF15_9_bit at ADC1BUF15.B9;
    const register unsigned short int ADC1BUF15_8 = 8;
    sbit  ADC1BUF15_8_bit at ADC1BUF15.B8;
    const register unsigned short int ADC1BUF15_7 = 7;
    sbit  ADC1BUF15_7_bit at ADC1BUF15.B7;
    const register unsigned short int ADC1BUF15_6 = 6;
    sbit  ADC1BUF15_6_bit at ADC1BUF15.B6;
    const register unsigned short int ADC1BUF15_5 = 5;
    sbit  ADC1BUF15_5_bit at ADC1BUF15.B5;
    const register unsigned short int ADC1BUF15_4 = 4;
    sbit  ADC1BUF15_4_bit at ADC1BUF15.B4;
    const register unsigned short int ADC1BUF15_3 = 3;
    sbit  ADC1BUF15_3_bit at ADC1BUF15.B3;
    const register unsigned short int ADC1BUF15_2 = 2;
    sbit  ADC1BUF15_2_bit at ADC1BUF15.B2;
    const register unsigned short int ADC1BUF15_1 = 1;
    sbit  ADC1BUF15_1_bit at ADC1BUF15.B1;
    const register unsigned short int ADC1BUF15_0 = 0;
    sbit  ADC1BUF15_0_bit at ADC1BUF15.B0;

    // ADC1BUF16 bits
    const register unsigned short int ADC1BUF16_15 = 15;
    sbit  ADC1BUF16_15_bit at ADC1BUF16.B15;
    const register unsigned short int ADC1BUF16_14 = 14;
    sbit  ADC1BUF16_14_bit at ADC1BUF16.B14;
    const register unsigned short int ADC1BUF16_13 = 13;
    sbit  ADC1BUF16_13_bit at ADC1BUF16.B13;
    const register unsigned short int ADC1BUF16_12 = 12;
    sbit  ADC1BUF16_12_bit at ADC1BUF16.B12;
    const register unsigned short int ADC1BUF16_11 = 11;
    sbit  ADC1BUF16_11_bit at ADC1BUF16.B11;
    const register unsigned short int ADC1BUF16_10 = 10;
    sbit  ADC1BUF16_10_bit at ADC1BUF16.B10;
    const register unsigned short int ADC1BUF16_9 = 9;
    sbit  ADC1BUF16_9_bit at ADC1BUF16.B9;
    const register unsigned short int ADC1BUF16_8 = 8;
    sbit  ADC1BUF16_8_bit at ADC1BUF16.B8;
    const register unsigned short int ADC1BUF16_7 = 7;
    sbit  ADC1BUF16_7_bit at ADC1BUF16.B7;
    const register unsigned short int ADC1BUF16_6 = 6;
    sbit  ADC1BUF16_6_bit at ADC1BUF16.B6;
    const register unsigned short int ADC1BUF16_5 = 5;
    sbit  ADC1BUF16_5_bit at ADC1BUF16.B5;
    const register unsigned short int ADC1BUF16_4 = 4;
    sbit  ADC1BUF16_4_bit at ADC1BUF16.B4;
    const register unsigned short int ADC1BUF16_3 = 3;
    sbit  ADC1BUF16_3_bit at ADC1BUF16.B3;
    const register unsigned short int ADC1BUF16_2 = 2;
    sbit  ADC1BUF16_2_bit at ADC1BUF16.B2;
    const register unsigned short int ADC1BUF16_1 = 1;
    sbit  ADC1BUF16_1_bit at ADC1BUF16.B1;
    const register unsigned short int ADC1BUF16_0 = 0;
    sbit  ADC1BUF16_0_bit at ADC1BUF16.B0;

    // ADC1BUF17 bits
    const register unsigned short int ADC1BUF17_15 = 15;
    sbit  ADC1BUF17_15_bit at ADC1BUF17.B15;
    const register unsigned short int ADC1BUF17_14 = 14;
    sbit  ADC1BUF17_14_bit at ADC1BUF17.B14;
    const register unsigned short int ADC1BUF17_13 = 13;
    sbit  ADC1BUF17_13_bit at ADC1BUF17.B13;
    const register unsigned short int ADC1BUF17_12 = 12;
    sbit  ADC1BUF17_12_bit at ADC1BUF17.B12;
    const register unsigned short int ADC1BUF17_11 = 11;
    sbit  ADC1BUF17_11_bit at ADC1BUF17.B11;
    const register unsigned short int ADC1BUF17_10 = 10;
    sbit  ADC1BUF17_10_bit at ADC1BUF17.B10;
    const register unsigned short int ADC1BUF17_9 = 9;
    sbit  ADC1BUF17_9_bit at ADC1BUF17.B9;
    const register unsigned short int ADC1BUF17_8 = 8;
    sbit  ADC1BUF17_8_bit at ADC1BUF17.B8;
    const register unsigned short int ADC1BUF17_7 = 7;
    sbit  ADC1BUF17_7_bit at ADC1BUF17.B7;
    const register unsigned short int ADC1BUF17_6 = 6;
    sbit  ADC1BUF17_6_bit at ADC1BUF17.B6;
    const register unsigned short int ADC1BUF17_5 = 5;
    sbit  ADC1BUF17_5_bit at ADC1BUF17.B5;
    const register unsigned short int ADC1BUF17_4 = 4;
    sbit  ADC1BUF17_4_bit at ADC1BUF17.B4;
    const register unsigned short int ADC1BUF17_3 = 3;
    sbit  ADC1BUF17_3_bit at ADC1BUF17.B3;
    const register unsigned short int ADC1BUF17_2 = 2;
    sbit  ADC1BUF17_2_bit at ADC1BUF17.B2;
    const register unsigned short int ADC1BUF17_1 = 1;
    sbit  ADC1BUF17_1_bit at ADC1BUF17.B1;
    const register unsigned short int ADC1BUF17_0 = 0;
    sbit  ADC1BUF17_0_bit at ADC1BUF17.B0;

    // ADC1BUF18 bits
    const register unsigned short int ADC1BUF18_15 = 15;
    sbit  ADC1BUF18_15_bit at ADC1BUF18.B15;
    const register unsigned short int ADC1BUF18_14 = 14;
    sbit  ADC1BUF18_14_bit at ADC1BUF18.B14;
    const register unsigned short int ADC1BUF18_13 = 13;
    sbit  ADC1BUF18_13_bit at ADC1BUF18.B13;
    const register unsigned short int ADC1BUF18_12 = 12;
    sbit  ADC1BUF18_12_bit at ADC1BUF18.B12;
    const register unsigned short int ADC1BUF18_11 = 11;
    sbit  ADC1BUF18_11_bit at ADC1BUF18.B11;
    const register unsigned short int ADC1BUF18_10 = 10;
    sbit  ADC1BUF18_10_bit at ADC1BUF18.B10;
    const register unsigned short int ADC1BUF18_9 = 9;
    sbit  ADC1BUF18_9_bit at ADC1BUF18.B9;
    const register unsigned short int ADC1BUF18_8 = 8;
    sbit  ADC1BUF18_8_bit at ADC1BUF18.B8;
    const register unsigned short int ADC1BUF18_7 = 7;
    sbit  ADC1BUF18_7_bit at ADC1BUF18.B7;
    const register unsigned short int ADC1BUF18_6 = 6;
    sbit  ADC1BUF18_6_bit at ADC1BUF18.B6;
    const register unsigned short int ADC1BUF18_5 = 5;
    sbit  ADC1BUF18_5_bit at ADC1BUF18.B5;
    const register unsigned short int ADC1BUF18_4 = 4;
    sbit  ADC1BUF18_4_bit at ADC1BUF18.B4;
    const register unsigned short int ADC1BUF18_3 = 3;
    sbit  ADC1BUF18_3_bit at ADC1BUF18.B3;
    const register unsigned short int ADC1BUF18_2 = 2;
    sbit  ADC1BUF18_2_bit at ADC1BUF18.B2;
    const register unsigned short int ADC1BUF18_1 = 1;
    sbit  ADC1BUF18_1_bit at ADC1BUF18.B1;
    const register unsigned short int ADC1BUF18_0 = 0;
    sbit  ADC1BUF18_0_bit at ADC1BUF18.B0;

    // ADC1BUF19 bits
    const register unsigned short int ADC1BUF19_15 = 15;
    sbit  ADC1BUF19_15_bit at ADC1BUF19.B15;
    const register unsigned short int ADC1BUF19_14 = 14;
    sbit  ADC1BUF19_14_bit at ADC1BUF19.B14;
    const register unsigned short int ADC1BUF19_13 = 13;
    sbit  ADC1BUF19_13_bit at ADC1BUF19.B13;
    const register unsigned short int ADC1BUF19_12 = 12;
    sbit  ADC1BUF19_12_bit at ADC1BUF19.B12;
    const register unsigned short int ADC1BUF19_11 = 11;
    sbit  ADC1BUF19_11_bit at ADC1BUF19.B11;
    const register unsigned short int ADC1BUF19_10 = 10;
    sbit  ADC1BUF19_10_bit at ADC1BUF19.B10;
    const register unsigned short int ADC1BUF19_9 = 9;
    sbit  ADC1BUF19_9_bit at ADC1BUF19.B9;
    const register unsigned short int ADC1BUF19_8 = 8;
    sbit  ADC1BUF19_8_bit at ADC1BUF19.B8;
    const register unsigned short int ADC1BUF19_7 = 7;
    sbit  ADC1BUF19_7_bit at ADC1BUF19.B7;
    const register unsigned short int ADC1BUF19_6 = 6;
    sbit  ADC1BUF19_6_bit at ADC1BUF19.B6;
    const register unsigned short int ADC1BUF19_5 = 5;
    sbit  ADC1BUF19_5_bit at ADC1BUF19.B5;
    const register unsigned short int ADC1BUF19_4 = 4;
    sbit  ADC1BUF19_4_bit at ADC1BUF19.B4;
    const register unsigned short int ADC1BUF19_3 = 3;
    sbit  ADC1BUF19_3_bit at ADC1BUF19.B3;
    const register unsigned short int ADC1BUF19_2 = 2;
    sbit  ADC1BUF19_2_bit at ADC1BUF19.B2;
    const register unsigned short int ADC1BUF19_1 = 1;
    sbit  ADC1BUF19_1_bit at ADC1BUF19.B1;
    const register unsigned short int ADC1BUF19_0 = 0;
    sbit  ADC1BUF19_0_bit at ADC1BUF19.B0;

    // ADC1BUF20 bits
    const register unsigned short int ADC1BUF20_15 = 15;
    sbit  ADC1BUF20_15_bit at ADC1BUF20.B15;
    const register unsigned short int ADC1BUF20_14 = 14;
    sbit  ADC1BUF20_14_bit at ADC1BUF20.B14;
    const register unsigned short int ADC1BUF20_13 = 13;
    sbit  ADC1BUF20_13_bit at ADC1BUF20.B13;
    const register unsigned short int ADC1BUF20_12 = 12;
    sbit  ADC1BUF20_12_bit at ADC1BUF20.B12;
    const register unsigned short int ADC1BUF20_11 = 11;
    sbit  ADC1BUF20_11_bit at ADC1BUF20.B11;
    const register unsigned short int ADC1BUF20_10 = 10;
    sbit  ADC1BUF20_10_bit at ADC1BUF20.B10;
    const register unsigned short int ADC1BUF20_9 = 9;
    sbit  ADC1BUF20_9_bit at ADC1BUF20.B9;
    const register unsigned short int ADC1BUF20_8 = 8;
    sbit  ADC1BUF20_8_bit at ADC1BUF20.B8;
    const register unsigned short int ADC1BUF20_7 = 7;
    sbit  ADC1BUF20_7_bit at ADC1BUF20.B7;
    const register unsigned short int ADC1BUF20_6 = 6;
    sbit  ADC1BUF20_6_bit at ADC1BUF20.B6;
    const register unsigned short int ADC1BUF20_5 = 5;
    sbit  ADC1BUF20_5_bit at ADC1BUF20.B5;
    const register unsigned short int ADC1BUF20_4 = 4;
    sbit  ADC1BUF20_4_bit at ADC1BUF20.B4;
    const register unsigned short int ADC1BUF20_3 = 3;
    sbit  ADC1BUF20_3_bit at ADC1BUF20.B3;
    const register unsigned short int ADC1BUF20_2 = 2;
    sbit  ADC1BUF20_2_bit at ADC1BUF20.B2;
    const register unsigned short int ADC1BUF20_1 = 1;
    sbit  ADC1BUF20_1_bit at ADC1BUF20.B1;
    const register unsigned short int ADC1BUF20_0 = 0;
    sbit  ADC1BUF20_0_bit at ADC1BUF20.B0;

    // ADC1BUF21 bits
    const register unsigned short int ADC1BUF21_15 = 15;
    sbit  ADC1BUF21_15_bit at ADC1BUF21.B15;
    const register unsigned short int ADC1BUF21_14 = 14;
    sbit  ADC1BUF21_14_bit at ADC1BUF21.B14;
    const register unsigned short int ADC1BUF21_13 = 13;
    sbit  ADC1BUF21_13_bit at ADC1BUF21.B13;
    const register unsigned short int ADC1BUF21_12 = 12;
    sbit  ADC1BUF21_12_bit at ADC1BUF21.B12;
    const register unsigned short int ADC1BUF21_11 = 11;
    sbit  ADC1BUF21_11_bit at ADC1BUF21.B11;
    const register unsigned short int ADC1BUF21_10 = 10;
    sbit  ADC1BUF21_10_bit at ADC1BUF21.B10;
    const register unsigned short int ADC1BUF21_9 = 9;
    sbit  ADC1BUF21_9_bit at ADC1BUF21.B9;
    const register unsigned short int ADC1BUF21_8 = 8;
    sbit  ADC1BUF21_8_bit at ADC1BUF21.B8;
    const register unsigned short int ADC1BUF21_7 = 7;
    sbit  ADC1BUF21_7_bit at ADC1BUF21.B7;
    const register unsigned short int ADC1BUF21_6 = 6;
    sbit  ADC1BUF21_6_bit at ADC1BUF21.B6;
    const register unsigned short int ADC1BUF21_5 = 5;
    sbit  ADC1BUF21_5_bit at ADC1BUF21.B5;
    const register unsigned short int ADC1BUF21_4 = 4;
    sbit  ADC1BUF21_4_bit at ADC1BUF21.B4;
    const register unsigned short int ADC1BUF21_3 = 3;
    sbit  ADC1BUF21_3_bit at ADC1BUF21.B3;
    const register unsigned short int ADC1BUF21_2 = 2;
    sbit  ADC1BUF21_2_bit at ADC1BUF21.B2;
    const register unsigned short int ADC1BUF21_1 = 1;
    sbit  ADC1BUF21_1_bit at ADC1BUF21.B1;
    const register unsigned short int ADC1BUF21_0 = 0;
    sbit  ADC1BUF21_0_bit at ADC1BUF21.B0;

    // ADC1BUF22 bits
    const register unsigned short int ADC1BUF22_15 = 15;
    sbit  ADC1BUF22_15_bit at ADC1BUF22.B15;
    const register unsigned short int ADC1BUF22_14 = 14;
    sbit  ADC1BUF22_14_bit at ADC1BUF22.B14;
    const register unsigned short int ADC1BUF22_13 = 13;
    sbit  ADC1BUF22_13_bit at ADC1BUF22.B13;
    const register unsigned short int ADC1BUF22_12 = 12;
    sbit  ADC1BUF22_12_bit at ADC1BUF22.B12;
    const register unsigned short int ADC1BUF22_11 = 11;
    sbit  ADC1BUF22_11_bit at ADC1BUF22.B11;
    const register unsigned short int ADC1BUF22_10 = 10;
    sbit  ADC1BUF22_10_bit at ADC1BUF22.B10;
    const register unsigned short int ADC1BUF22_9 = 9;
    sbit  ADC1BUF22_9_bit at ADC1BUF22.B9;
    const register unsigned short int ADC1BUF22_8 = 8;
    sbit  ADC1BUF22_8_bit at ADC1BUF22.B8;
    const register unsigned short int ADC1BUF22_7 = 7;
    sbit  ADC1BUF22_7_bit at ADC1BUF22.B7;
    const register unsigned short int ADC1BUF22_6 = 6;
    sbit  ADC1BUF22_6_bit at ADC1BUF22.B6;
    const register unsigned short int ADC1BUF22_5 = 5;
    sbit  ADC1BUF22_5_bit at ADC1BUF22.B5;
    const register unsigned short int ADC1BUF22_4 = 4;
    sbit  ADC1BUF22_4_bit at ADC1BUF22.B4;
    const register unsigned short int ADC1BUF22_3 = 3;
    sbit  ADC1BUF22_3_bit at ADC1BUF22.B3;
    const register unsigned short int ADC1BUF22_2 = 2;
    sbit  ADC1BUF22_2_bit at ADC1BUF22.B2;
    const register unsigned short int ADC1BUF22_1 = 1;
    sbit  ADC1BUF22_1_bit at ADC1BUF22.B1;
    const register unsigned short int ADC1BUF22_0 = 0;
    sbit  ADC1BUF22_0_bit at ADC1BUF22.B0;

    // ADC1BUF23 bits
    const register unsigned short int ADC1BUF23_15 = 15;
    sbit  ADC1BUF23_15_bit at ADC1BUF23.B15;
    const register unsigned short int ADC1BUF23_14 = 14;
    sbit  ADC1BUF23_14_bit at ADC1BUF23.B14;
    const register unsigned short int ADC1BUF23_13 = 13;
    sbit  ADC1BUF23_13_bit at ADC1BUF23.B13;
    const register unsigned short int ADC1BUF23_12 = 12;
    sbit  ADC1BUF23_12_bit at ADC1BUF23.B12;
    const register unsigned short int ADC1BUF23_11 = 11;
    sbit  ADC1BUF23_11_bit at ADC1BUF23.B11;
    const register unsigned short int ADC1BUF23_10 = 10;
    sbit  ADC1BUF23_10_bit at ADC1BUF23.B10;
    const register unsigned short int ADC1BUF23_9 = 9;
    sbit  ADC1BUF23_9_bit at ADC1BUF23.B9;
    const register unsigned short int ADC1BUF23_8 = 8;
    sbit  ADC1BUF23_8_bit at ADC1BUF23.B8;
    const register unsigned short int ADC1BUF23_7 = 7;
    sbit  ADC1BUF23_7_bit at ADC1BUF23.B7;
    const register unsigned short int ADC1BUF23_6 = 6;
    sbit  ADC1BUF23_6_bit at ADC1BUF23.B6;
    const register unsigned short int ADC1BUF23_5 = 5;
    sbit  ADC1BUF23_5_bit at ADC1BUF23.B5;
    const register unsigned short int ADC1BUF23_4 = 4;
    sbit  ADC1BUF23_4_bit at ADC1BUF23.B4;
    const register unsigned short int ADC1BUF23_3 = 3;
    sbit  ADC1BUF23_3_bit at ADC1BUF23.B3;
    const register unsigned short int ADC1BUF23_2 = 2;
    sbit  ADC1BUF23_2_bit at ADC1BUF23.B2;
    const register unsigned short int ADC1BUF23_1 = 1;
    sbit  ADC1BUF23_1_bit at ADC1BUF23.B1;
    const register unsigned short int ADC1BUF23_0 = 0;
    sbit  ADC1BUF23_0_bit at ADC1BUF23.B0;

    // AD1CON1 bits
    const register unsigned short int ADON = 15;
    sbit  ADON_bit at AD1CON1.B15;
    sbit  ADON_AD1CON1_bit at AD1CON1.B15;
    const register unsigned short int ADSIDL = 13;
    sbit  ADSIDL_bit at AD1CON1.B13;
    sbit  ADSIDL_AD1CON1_bit at AD1CON1.B13;
    const register unsigned short int MODE12 = 10;
    sbit  MODE12_bit at AD1CON1.B10;
    sbit  MODE12_AD1CON1_bit at AD1CON1.B10;
    const register unsigned short int FORM_1 = 9;
    sbit  FORM_1_bit at AD1CON1.B9;
    sbit  FORM_1_AD1CON1_bit at AD1CON1.B9;
    const register unsigned short int FORM_0 = 8;
    sbit  FORM_0_bit at AD1CON1.B8;
    sbit  FORM_0_AD1CON1_bit at AD1CON1.B8;
    const register unsigned short int SSRC_3 = 7;
    sbit  SSRC_3_bit at AD1CON1.B7;
    sbit  SSRC_3_AD1CON1_bit at AD1CON1.B7;
    const register unsigned short int SSRC_2 = 6;
    sbit  SSRC_2_bit at AD1CON1.B6;
    sbit  SSRC_2_AD1CON1_bit at AD1CON1.B6;
    const register unsigned short int SSRC_1 = 5;
    sbit  SSRC_1_bit at AD1CON1.B5;
    sbit  SSRC_1_AD1CON1_bit at AD1CON1.B5;
    const register unsigned short int SSRC_0 = 4;
    sbit  SSRC_0_bit at AD1CON1.B4;
    sbit  SSRC_0_AD1CON1_bit at AD1CON1.B4;
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
    const register unsigned short int PVCFG_1 = 15;
    sbit  PVCFG_1_bit at AD1CON2.B15;
    sbit  PVCFG_1_AD1CON2_bit at AD1CON2.B15;
    sbit  PVCFG_1_ADCON2_bit at ADCON2.B15;
    const register unsigned short int PVCFG_0 = 14;
    sbit  PVCFG_0_bit at AD1CON2.B14;
    sbit  PVCFG_0_AD1CON2_bit at AD1CON2.B14;
    sbit  PVCFG_0_ADCON2_bit at ADCON2.B14;
    const register unsigned short int NVCFG0 = 13;
    sbit  NVCFG0_bit at AD1CON2.B13;
    sbit  NVCFG0_AD1CON2_bit at AD1CON2.B13;
    sbit  NVCFG0_ADCON2_bit at ADCON2.B13;
    const register unsigned short int OFFCAL = 12;
    sbit  OFFCAL_bit at AD1CON2.B12;
    sbit  OFFCAL_AD1CON2_bit at AD1CON2.B12;
    sbit  OFFCAL_ADCON2_bit at ADCON2.B12;
    const register unsigned short int BUFREGEN = 11;
    sbit  BUFREGEN_bit at AD1CON2.B11;
    sbit  BUFREGEN_AD1CON2_bit at AD1CON2.B11;
    sbit  BUFREGEN_ADCON2_bit at ADCON2.B11;
    const register unsigned short int CSCNA = 10;
    sbit  CSCNA_bit at AD1CON2.B10;
    sbit  CSCNA_AD1CON2_bit at AD1CON2.B10;
    sbit  CSCNA_ADCON2_bit at ADCON2.B10;
    const register unsigned short int BUFS = 7;
    sbit  BUFS_bit at AD1CON2.B7;
    sbit  BUFS_AD1CON2_bit at AD1CON2.B7;
    sbit  BUFS_ADCON2_bit at ADCON2.B7;
    const register unsigned short int SMPI_4 = 6;
    sbit  SMPI_4_bit at AD1CON2.B6;
    sbit  SMPI_4_AD1CON2_bit at AD1CON2.B6;
    sbit  SMPI_4_ADCON2_bit at ADCON2.B6;
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
    const register unsigned short int CH0NB_2 = 15;
    sbit  CH0NB_2_bit at AD1CHS.B15;
    sbit  CH0NB_2_AD1CHS_bit at AD1CHS.B15;
    sbit  CH0NB_2_ADCHS_bit at ADCHS.B15;
    const register unsigned short int CH0NB_1 = 14;
    sbit  CH0NB_1_bit at AD1CHS.B14;
    sbit  CH0NB_1_AD1CHS_bit at AD1CHS.B14;
    sbit  CH0NB_1_ADCHS_bit at ADCHS.B14;
    const register unsigned short int CH0NB_0 = 13;
    sbit  CH0NB_0_bit at AD1CHS.B13;
    sbit  CH0NB_0_AD1CHS_bit at AD1CHS.B13;
    sbit  CH0NB_0_ADCHS_bit at ADCHS.B13;
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
    const register unsigned short int CH0NA_2 = 7;
    sbit  CH0NA_2_bit at AD1CHS.B7;
    sbit  CH0NA_2_AD1CHS_bit at AD1CHS.B7;
    sbit  CH0NA_2_ADCHS_bit at ADCHS.B7;
    const register unsigned short int CH0NA_1 = 6;
    sbit  CH0NA_1_bit at AD1CHS.B6;
    sbit  CH0NA_1_AD1CHS_bit at AD1CHS.B6;
    sbit  CH0NA_1_ADCHS_bit at ADCHS.B6;
    const register unsigned short int CH0NA_0 = 5;
    sbit  CH0NA_0_bit at AD1CHS.B5;
    sbit  CH0NA_0_AD1CHS_bit at AD1CHS.B5;
    sbit  CH0NA_0_ADCHS_bit at ADCHS.B5;
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

    // AD1CSSH bits
    const register unsigned short int CSS30 = 14;
    sbit  CSS30_bit at AD1CSSH.B14;
    const register unsigned short int CSS29 = 13;
    sbit  CSS29_bit at AD1CSSH.B13;
    const register unsigned short int CSS28 = 12;
    sbit  CSS28_bit at AD1CSSH.B12;
    const register unsigned short int CSS27 = 11;
    sbit  CSS27_bit at AD1CSSH.B11;
    const register unsigned short int CSS26 = 10;
    sbit  CSS26_bit at AD1CSSH.B10;
    const register unsigned short int CSS23 = 7;
    sbit  CSS23_bit at AD1CSSH.B7;
    const register unsigned short int CSS22 = 6;
    sbit  CSS22_bit at AD1CSSH.B6;
    const register unsigned short int CSS21 = 5;
    sbit  CSS21_bit at AD1CSSH.B5;
    const register unsigned short int CSS20 = 4;
    sbit  CSS20_bit at AD1CSSH.B4;
    const register unsigned short int CSS19 = 3;
    sbit  CSS19_bit at AD1CSSH.B3;
    const register unsigned short int CSS18 = 2;
    sbit  CSS18_bit at AD1CSSH.B2;
    const register unsigned short int CSS17 = 1;
    sbit  CSS17_bit at AD1CSSH.B1;
    const register unsigned short int CSS16 = 0;
    sbit  CSS16_bit at AD1CSSH.B0;

    // AD1CSSL bits
    const register unsigned short int CSS15 = 15;
    sbit  CSS15_bit at AD1CSSL.B15;
    sbit  CSS15_AD1CSSL_bit at AD1CSSL.B15;
    sbit  CSS15_ADCSSL_bit at ADCSSL.B15;
    const register unsigned short int CSS14 = 14;
    sbit  CSS14_bit at AD1CSSL.B14;
    sbit  CSS14_AD1CSSL_bit at AD1CSSL.B14;
    sbit  CSS14_ADCSSL_bit at ADCSSL.B14;
    const register unsigned short int CSS13 = 13;
    sbit  CSS13_bit at AD1CSSL.B13;
    sbit  CSS13_AD1CSSL_bit at AD1CSSL.B13;
    sbit  CSS13_ADCSSL_bit at ADCSSL.B13;
    const register unsigned short int CSS12 = 12;
    sbit  CSS12_bit at AD1CSSL.B12;
    sbit  CSS12_AD1CSSL_bit at AD1CSSL.B12;
    sbit  CSS12_ADCSSL_bit at ADCSSL.B12;
    const register unsigned short int CSS11 = 11;
    sbit  CSS11_bit at AD1CSSL.B11;
    sbit  CSS11_AD1CSSL_bit at AD1CSSL.B11;
    sbit  CSS11_ADCSSL_bit at ADCSSL.B11;
    const register unsigned short int CSS10 = 10;
    sbit  CSS10_bit at AD1CSSL.B10;
    sbit  CSS10_AD1CSSL_bit at AD1CSSL.B10;
    sbit  CSS10_ADCSSL_bit at ADCSSL.B10;
    const register unsigned short int CSS9 = 9;
    sbit  CSS9_bit at AD1CSSL.B9;
    sbit  CSS9_AD1CSSL_bit at AD1CSSL.B9;
    sbit  CSS9_ADCSSL_bit at ADCSSL.B9;
    const register unsigned short int CSS8 = 8;
    sbit  CSS8_bit at AD1CSSL.B8;
    sbit  CSS8_AD1CSSL_bit at AD1CSSL.B8;
    sbit  CSS8_ADCSSL_bit at ADCSSL.B8;
    const register unsigned short int CSS7 = 7;
    sbit  CSS7_bit at AD1CSSL.B7;
    sbit  CSS7_AD1CSSL_bit at AD1CSSL.B7;
    sbit  CSS7_ADCSSL_bit at ADCSSL.B7;
    const register unsigned short int CSS6 = 6;
    sbit  CSS6_bit at AD1CSSL.B6;
    sbit  CSS6_AD1CSSL_bit at AD1CSSL.B6;
    sbit  CSS6_ADCSSL_bit at ADCSSL.B6;
    const register unsigned short int CSS5 = 5;
    sbit  CSS5_bit at AD1CSSL.B5;
    sbit  CSS5_AD1CSSL_bit at AD1CSSL.B5;
    sbit  CSS5_ADCSSL_bit at ADCSSL.B5;
    const register unsigned short int CSS4 = 4;
    sbit  CSS4_bit at AD1CSSL.B4;
    sbit  CSS4_AD1CSSL_bit at AD1CSSL.B4;
    sbit  CSS4_ADCSSL_bit at ADCSSL.B4;
    const register unsigned short int CSS3 = 3;
    sbit  CSS3_bit at AD1CSSL.B3;
    sbit  CSS3_AD1CSSL_bit at AD1CSSL.B3;
    sbit  CSS3_ADCSSL_bit at ADCSSL.B3;
    const register unsigned short int CSS2 = 2;
    sbit  CSS2_bit at AD1CSSL.B2;
    sbit  CSS2_AD1CSSL_bit at AD1CSSL.B2;
    sbit  CSS2_ADCSSL_bit at ADCSSL.B2;
    const register unsigned short int CSS1 = 1;
    sbit  CSS1_bit at AD1CSSL.B1;
    sbit  CSS1_AD1CSSL_bit at AD1CSSL.B1;
    sbit  CSS1_ADCSSL_bit at ADCSSL.B1;
    const register unsigned short int CSS0 = 0;
    sbit  CSS0_bit at AD1CSSL.B0;
    sbit  CSS0_AD1CSSL_bit at AD1CSSL.B0;
    sbit  CSS0_ADCSSL_bit at ADCSSL.B0;

    // AD1CON5 bits
    const register unsigned short int ASEN = 15;
    sbit  ASEN_bit at AD1CON5.B15;
    const register unsigned short int LPEN = 14;
    sbit  LPEN_bit at AD1CON5.B14;
    const register unsigned short int CTMREQ = 13;
    sbit  CTMREQ_bit at AD1CON5.B13;
    const register unsigned short int BGREQ = 12;
    sbit  BGREQ_bit at AD1CON5.B12;
    const register unsigned short int ASINT_1 = 9;
    sbit  ASINT_1_bit at AD1CON5.B9;
    const register unsigned short int ASINT_0 = 8;
    sbit  ASINT_0_bit at AD1CON5.B8;
    const register unsigned short int WM_1 = 3;
    sbit  WM_1_bit at AD1CON5.B3;
    const register unsigned short int WM_0 = 2;
    sbit  WM_0_bit at AD1CON5.B2;
    const register unsigned short int CM_1 = 1;
    sbit  CM_1_bit at AD1CON5.B1;
    const register unsigned short int CM_0 = 0;
    sbit  CM_0_bit at AD1CON5.B0;

    // AD1CHITH bits
    const register unsigned short int CHH23 = 7;
    sbit  CHH23_bit at AD1CHITH.B7;
    const register unsigned short int CHH22 = 6;
    sbit  CHH22_bit at AD1CHITH.B6;
    const register unsigned short int CHH21 = 5;
    sbit  CHH21_bit at AD1CHITH.B5;
    const register unsigned short int CHH20 = 4;
    sbit  CHH20_bit at AD1CHITH.B4;
    const register unsigned short int CHH19 = 3;
    sbit  CHH19_bit at AD1CHITH.B3;
    const register unsigned short int CHH18 = 2;
    sbit  CHH18_bit at AD1CHITH.B2;
    const register unsigned short int CHH17 = 1;
    sbit  CHH17_bit at AD1CHITH.B1;
    const register unsigned short int CHH16 = 0;
    sbit  CHH16_bit at AD1CHITH.B0;

    // AD1CHITL bits
    const register unsigned short int CHH15 = 15;
    sbit  CHH15_bit at AD1CHITL.B15;
    const register unsigned short int CHH14 = 14;
    sbit  CHH14_bit at AD1CHITL.B14;
    const register unsigned short int CHH13 = 13;
    sbit  CHH13_bit at AD1CHITL.B13;
    const register unsigned short int CHH12 = 12;
    sbit  CHH12_bit at AD1CHITL.B12;
    const register unsigned short int CHH11 = 11;
    sbit  CHH11_bit at AD1CHITL.B11;
    const register unsigned short int CHH10 = 10;
    sbit  CHH10_bit at AD1CHITL.B10;
    const register unsigned short int CHH9 = 9;
    sbit  CHH9_bit at AD1CHITL.B9;
    const register unsigned short int CHH8 = 8;
    sbit  CHH8_bit at AD1CHITL.B8;
    const register unsigned short int CHH7 = 7;
    sbit  CHH7_bit at AD1CHITL.B7;
    const register unsigned short int CHH6 = 6;
    sbit  CHH6_bit at AD1CHITL.B6;
    const register unsigned short int CHH5 = 5;
    sbit  CHH5_bit at AD1CHITL.B5;
    const register unsigned short int CHH4 = 4;
    sbit  CHH4_bit at AD1CHITL.B4;
    const register unsigned short int CHH3 = 3;
    sbit  CHH3_bit at AD1CHITL.B3;
    const register unsigned short int CHH2 = 2;
    sbit  CHH2_bit at AD1CHITL.B2;
    const register unsigned short int CHH1 = 1;
    sbit  CHH1_bit at AD1CHITL.B1;
    const register unsigned short int CHH0 = 0;
    sbit  CHH0_bit at AD1CHITL.B0;

    // CTMUCON1L bits
    const register unsigned short int CTMUEN = 15;
    sbit  CTMUEN_bit at CTMUCON1L.B15;
    const register unsigned short int CTMUSIDL = 13;
    sbit  CTMUSIDL_bit at CTMUCON1L.B13;
    const register unsigned short int TGEN = 12;
    sbit  TGEN_bit at CTMUCON1L.B12;
    const register unsigned short int EDGEN = 11;
    sbit  EDGEN_bit at CTMUCON1L.B11;
    const register unsigned short int EDGSEQEN = 10;
    sbit  EDGSEQEN_bit at CTMUCON1L.B10;
    const register unsigned short int IDISSEN = 9;
    sbit  IDISSEN_bit at CTMUCON1L.B9;
    const register unsigned short int CTTRIG = 8;
    sbit  CTTRIG_bit at CTMUCON1L.B8;
    const register unsigned short int ITRIM_5 = 7;
    sbit  ITRIM_5_bit at CTMUCON1L.B7;
    const register unsigned short int ITRIM_4 = 6;
    sbit  ITRIM_4_bit at CTMUCON1L.B6;
    const register unsigned short int ITRIM_3 = 5;
    sbit  ITRIM_3_bit at CTMUCON1L.B5;
    const register unsigned short int ITRIM_2 = 4;
    sbit  ITRIM_2_bit at CTMUCON1L.B4;
    const register unsigned short int ITRIM_1 = 3;
    sbit  ITRIM_1_bit at CTMUCON1L.B3;
    const register unsigned short int ITRIM_0 = 2;
    sbit  ITRIM_0_bit at CTMUCON1L.B2;
    const register unsigned short int IRNG_1 = 1;
    sbit  IRNG_1_bit at CTMUCON1L.B1;
    const register unsigned short int IRNG_0 = 0;
    sbit  IRNG_0_bit at CTMUCON1L.B0;

    // CTMUCON1H bits
    const register unsigned short int EDG1MOD = 15;
    sbit  EDG1MOD_bit at CTMUCON1H.B15;
    const register unsigned short int EDG1POL = 14;
    sbit  EDG1POL_bit at CTMUCON1H.B14;
    const register unsigned short int EDG1SEL_3 = 13;
    sbit  EDG1SEL_3_bit at CTMUCON1H.B13;
    const register unsigned short int EDG1SEL_2 = 12;
    sbit  EDG1SEL_2_bit at CTMUCON1H.B12;
    const register unsigned short int EDG1SEL_1 = 11;
    sbit  EDG1SEL_1_bit at CTMUCON1H.B11;
    const register unsigned short int EDG1SEL_0 = 10;
    sbit  EDG1SEL_0_bit at CTMUCON1H.B10;
    const register unsigned short int EDG2STAT = 9;
    sbit  EDG2STAT_bit at CTMUCON1H.B9;
    const register unsigned short int EDG1STAT = 8;
    sbit  EDG1STAT_bit at CTMUCON1H.B8;
    const register unsigned short int EDG2MOD = 7;
    sbit  EDG2MOD_bit at CTMUCON1H.B7;
    const register unsigned short int EDG2POL = 6;
    sbit  EDG2POL_bit at CTMUCON1H.B6;
    const register unsigned short int EDG2SEL_3 = 5;
    sbit  EDG2SEL_3_bit at CTMUCON1H.B5;
    const register unsigned short int EDG2SEL_2 = 4;
    sbit  EDG2SEL_2_bit at CTMUCON1H.B4;
    const register unsigned short int EDG2SEL_1 = 3;
    sbit  EDG2SEL_1_bit at CTMUCON1H.B3;
    const register unsigned short int EDG2SEL_0 = 2;
    sbit  EDG2SEL_0_bit at CTMUCON1H.B2;

    // CTMUCON2L bits
    const register unsigned short int IRSTEN = 4;
    sbit  IRSTEN_bit at CTMUCON2L.B4;
    const register unsigned short int DISCHS_2 = 2;
    sbit  DISCHS_2_bit at CTMUCON2L.B2;
    const register unsigned short int DISCHS_1 = 1;
    sbit  DISCHS_1_bit at CTMUCON2L.B1;
    const register unsigned short int DISCHS_0 = 0;
    sbit  DISCHS_0_bit at CTMUCON2L.B0;

    // AD1CTMENH bits
    const register unsigned short int CTMEN23 = 7;
    sbit  CTMEN23_bit at AD1CTMENH.B7;
    const register unsigned short int CTMEN22 = 6;
    sbit  CTMEN22_bit at AD1CTMENH.B6;
    const register unsigned short int CTMEN21 = 5;
    sbit  CTMEN21_bit at AD1CTMENH.B5;
    const register unsigned short int CTMEN20 = 4;
    sbit  CTMEN20_bit at AD1CTMENH.B4;
    const register unsigned short int CTMEN19 = 3;
    sbit  CTMEN19_bit at AD1CTMENH.B3;
    const register unsigned short int CTMEN18 = 2;
    sbit  CTMEN18_bit at AD1CTMENH.B2;
    const register unsigned short int CTMEN17 = 1;
    sbit  CTMEN17_bit at AD1CTMENH.B1;
    const register unsigned short int CTMEN16 = 0;
    sbit  CTMEN16_bit at AD1CTMENH.B0;

    // AD1CTMENL bits
    const register unsigned short int CTMEN15 = 15;
    sbit  CTMEN15_bit at AD1CTMENL.B15;
    const register unsigned short int CTMEN14 = 14;
    sbit  CTMEN14_bit at AD1CTMENL.B14;
    const register unsigned short int CTMEN13 = 13;
    sbit  CTMEN13_bit at AD1CTMENL.B13;
    const register unsigned short int CTMEN12 = 12;
    sbit  CTMEN12_bit at AD1CTMENL.B12;
    const register unsigned short int CTMEN11 = 11;
    sbit  CTMEN11_bit at AD1CTMENL.B11;
    const register unsigned short int CTMEN10 = 10;
    sbit  CTMEN10_bit at AD1CTMENL.B10;
    const register unsigned short int CTMEN9 = 9;
    sbit  CTMEN9_bit at AD1CTMENL.B9;
    const register unsigned short int CTMEN8 = 8;
    sbit  CTMEN8_bit at AD1CTMENL.B8;
    const register unsigned short int CTMEN7 = 7;
    sbit  CTMEN7_bit at AD1CTMENL.B7;
    const register unsigned short int CTMEN6 = 6;
    sbit  CTMEN6_bit at AD1CTMENL.B6;
    const register unsigned short int CTMEN5 = 5;
    sbit  CTMEN5_bit at AD1CTMENL.B5;
    const register unsigned short int CTMEN4 = 4;
    sbit  CTMEN4_bit at AD1CTMENL.B4;
    const register unsigned short int CTMEN3 = 3;
    sbit  CTMEN3_bit at AD1CTMENL.B3;
    const register unsigned short int CTMEN2 = 2;
    sbit  CTMEN2_bit at AD1CTMENL.B2;
    const register unsigned short int CTMEN1 = 1;
    sbit  CTMEN1_bit at AD1CTMENL.B1;
    const register unsigned short int CTMEN0 = 0;
    sbit  CTMEN0_bit at AD1CTMENL.B0;

    // ANSA bits
    const register unsigned short int ANSA4 = 4;
    sbit  ANSA4_bit at ANSA.B4;
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
    const register unsigned short int ANSB9 = 9;
    sbit  ANSB9_bit at ANSB.B9;
    const register unsigned short int ANSB8 = 8;
    sbit  ANSB8_bit at ANSB.B8;
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
    const register unsigned short int ANSC2 = 2;
    sbit  ANSC2_bit at ANSC.B2;
    const register unsigned short int ANSC1 = 1;
    sbit  ANSC1_bit at ANSC.B1;
    const register unsigned short int ANSC0 = 0;
    sbit  ANSC0_bit at ANSC.B0;

    // CMSTAT bits
    const register unsigned short int CMIDL = 15;
    sbit  CMIDL_bit at CMSTAT.B15;
    const register unsigned short int C1EVT = 8;
    sbit  C1EVT_bit at CMSTAT.B8;
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
    const register unsigned short int COE = 14;
    sbit  COE_bit at CM1CON.B14;
    const register unsigned short int CPOL = 13;
    sbit  CPOL_bit at CM1CON.B13;
    const register unsigned short int CLPWR = 12;
    sbit  CLPWR_bit at CM1CON.B12;
    const register unsigned short int CEVT = 9;
    sbit  CEVT_bit at CM1CON.B9;
    const register unsigned short int COUT = 8;
    sbit  COUT_bit at CM1CON.B8;
    const register unsigned short int EVPOL_1 = 7;
    sbit  EVPOL_1_bit at CM1CON.B7;
    const register unsigned short int EVPOL_0 = 6;
    sbit  EVPOL_0_bit at CM1CON.B6;
    const register unsigned short int CREF_1 = 5;
    sbit  CREF_1_bit at CM1CON.B5;
    const register unsigned short int CREF_0 = 4;
    sbit  CREF_0_bit at CM1CON.B4;
    const register unsigned short int CCH_1 = 1;
    sbit  CCH_1_bit at CM1CON.B1;
    const register unsigned short int CCH_0 = 0;
    sbit  CCH_0_bit at CM1CON.B0;

    // BUFCON0 bits
    const register unsigned short int BUFREF_1 = 1;
    sbit  BUFREF_1_bit at BUFCON0.B1;
    const register unsigned short int BUFREF_0 = 0;
    sbit  BUFREF_0_bit at BUFCON0.B0;

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
    const register unsigned short int T1MD = 11;
    sbit  T1MD_bit at PMD1.B11;
    const register unsigned short int SSP1MD = 7;
    sbit  SSP1MD_bit at PMD1.B7;
    const register unsigned short int U1MD = 5;
    sbit  U1MD_bit at PMD1.B5;
    const register unsigned short int ADC1MD = 0;
    sbit  ADC1MD_bit at PMD1.B0;

    // PMD2 bits
    const register unsigned short int CCP2MD = 1;
    sbit  CCP2MD_bit at PMD2.B1;
    const register unsigned short int CCP1MD = 0;
    sbit  CCP1MD_bit at PMD2.B0;

    // PMD3 bits
    const register unsigned short int CMPMD = 10;
    sbit  CMPMD_bit at PMD3.B10;

    // PMD4 bits
    const register unsigned short int ULPWUMD = 6;
    sbit  ULPWUMD_bit at PMD4.B6;
    const register unsigned short int REFOMD = 3;
    sbit  REFOMD_bit at PMD4.B3;
    const register unsigned short int CTMUMD = 2;
    sbit  CTMUMD_bit at PMD4.B2;
    const register unsigned short int HLVDMD = 1;
    sbit  HLVDMD_bit at PMD4.B1;

    // PMD8 bits
    const register unsigned short int CLC1MD = 2;
    sbit  CLC1MD_bit at PMD8.B2;

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

    // DPCH bits
    const register unsigned short int DPCH_7 = 7;
    sbit  DPCH_7_bit at DPCH.B7;
    const register unsigned short int DPCH_6 = 6;
    sbit  DPCH_6_bit at DPCH.B6;
    const register unsigned short int DPCH_5 = 5;
    sbit  DPCH_5_bit at DPCH.B5;
    const register unsigned short int DPCH_4 = 4;
    sbit  DPCH_4_bit at DPCH.B4;
    const register unsigned short int DPCH_3 = 3;
    sbit  DPCH_3_bit at DPCH.B3;
    const register unsigned short int DPCH_2 = 2;
    sbit  DPCH_2_bit at DPCH.B2;
    const register unsigned short int DPCH_1 = 1;
    sbit  DPCH_1_bit at DPCH.B1;
    const register unsigned short int DPCH_0 = 0;
    sbit  DPCH_0_bit at DPCH.B0;

    // Start of structures implementation for backward compatibility

// backward compatibility for TBLPAGBITS
    typedef struct tagTBLPAGBITS {
      unsigned TBLPAG:8;
} typeTBLPAGBITS;
sfr volatile typeTBLPAGBITS TBLPAGbits absolute 0x032;

// backward compatibility for PSVPAGBITS
    typedef struct tagPSVPAGBITS {
      unsigned PSVPAG:8;
} typePSVPAGBITS;
sfr volatile typePSVPAGBITS PSVPAGbits absolute 0x034;

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
sfr volatile typeCNPD1BITS CNPD1bits absolute 0x056;

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
sfr volatile typeCNPD2BITS CNPD2bits absolute 0x058;

// backward compatibility for CNPD3BITS
    typedef struct tagCNPD3BITS {
      unsigned CN32PDE:1;
      unsigned CN33PDE:1;
      unsigned CN34PDE:1;
      unsigned CN35PDE:1;
      unsigned CN36PDE:1;
} typeCNPD3BITS;
sfr volatile typeCNPD3BITS CNPD3bits absolute 0x05A;

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
sfr volatile typeCNEN1BITS CNEN1bits absolute 0x062;

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
sfr volatile typeCNEN2BITS CNEN2bits absolute 0x064;

// backward compatibility for CNEN3BITS
    typedef struct tagCNEN3BITS {
      unsigned CN32IE:1;
      unsigned CN33IE:1;
      unsigned CN34IE:1;
      unsigned CN35IE:1;
      unsigned CN36IE:1;
} typeCNEN3BITS;
sfr volatile typeCNEN3BITS CNEN3bits absolute 0x066;

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
sfr volatile typeCNPU1BITS CNPU1bits absolute 0x06E;

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
sfr volatile typeCNPU2BITS CNPU2bits absolute 0x070;

// backward compatibility for CNPU3BITS
    typedef struct tagCNPU3BITS {
      unsigned CN32PUE:1;
      unsigned CN33PUE:1;
      unsigned CN34PUE:1;
      unsigned CN35PUE:1;
      unsigned CN36PUE:1;
} typeCNPU3BITS;
sfr volatile typeCNPU3BITS CNPU3bits absolute 0x072;

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
      unsigned CCP1IF:1;
      unsigned CCP2IF:1;
      unsigned T1IF:1;
      unsigned :3;
      unsigned CCT1IF:1;
      unsigned CCT2IF:1;
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
      unsigned :8;
      unsigned INT2IF:1;
} typeIFS1BITS;
sfr volatile typeIFS1BITS IFS1bits absolute 0x086;

// backward compatibility for IFS4BITS
    typedef struct tagIFS4BITS {
      unsigned :1;
      unsigned U1ERIF:1;
      unsigned :6;
      unsigned HLVDIF:1;
      unsigned :4;
      unsigned CTMUIF:1;
} typeIFS4BITS;
sfr volatile typeIFS4BITS IFS4bits absolute 0x08C;

// backward compatibility for IFS5BITS
    typedef struct tagIFS5BITS {
      unsigned ULPWUIF:1;
} typeIFS5BITS;
sfr volatile typeIFS5BITS IFS5bits absolute 0x08E;

// backward compatibility for IFS6BITS
    typedef struct tagIFS6BITS {
      unsigned CLC1IF:1;
} typeIFS6BITS;
sfr volatile typeIFS6BITS IFS6bits absolute 0x090;

// backward compatibility for IEC0BITS
    typedef struct tagIEC0BITS {
      unsigned INT0IE:1;
      unsigned CCP1IE:1;
      unsigned CCP2IE:1;
      unsigned T1IE:1;
      unsigned :3;
      unsigned CCT1IE:1;
      unsigned CCT2IE:1;
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
      unsigned :8;
      unsigned INT2IE:1;
} typeIEC1BITS;
sfr volatile typeIEC1BITS IEC1bits absolute 0x096;

// backward compatibility for IEC4BITS
    typedef struct tagIEC4BITS {
      unsigned :1;
      unsigned U1ERIE:1;
      unsigned :6;
      unsigned HLVDIE:1;
      unsigned :4;
      unsigned CTMUIE:1;
} typeIEC4BITS;
sfr volatile typeIEC4BITS IEC4bits absolute 0x09C;

// backward compatibility for IEC5BITS
    typedef struct tagIEC5BITS {
      unsigned ULPWUIE:1;
} typeIEC5BITS;
sfr volatile typeIEC5BITS IEC5bits absolute 0x09E;

// backward compatibility for IEC6BITS
    typedef struct tagIEC6BITS {
      unsigned CLC1IE:1;
} typeIEC6BITS;
sfr volatile typeIEC6BITS IEC6bits absolute 0x0A0;

// backward compatibility for IPC0BITS
    typedef struct tagIPC0BITS {
      union {
        struct {
          unsigned INT0IP:3;
          unsigned :1;
          unsigned CCP1IP:3;
          unsigned :1;
          unsigned CCP2IP:3;
          unsigned :1;
          unsigned T1IP:3;
        };
        struct {
          unsigned INT0IP0:1;
          unsigned INT0IP1:1;
          unsigned INT0IP2:1;
          unsigned :1;
          unsigned CC1IP0:1;
          unsigned CC1IP1:1;
          unsigned CC1IP2:1;
          unsigned :1;
          unsigned CC2IP0:1;
          unsigned CC2IP1:1;
          unsigned CC2IP2:1;
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
          unsigned CCT1IP:3;
        };
        struct {
          unsigned :12;
          unsigned CCT1IP0:1;
          unsigned CCT1IP1:1;
          unsigned CCT1IP2:1;
        };
      };
} typeIPC1BITS;
sfr volatile typeIPC1BITS IPC1bits absolute 0x0A6;

// backward compatibility for IPC2BITS
    typedef struct tagIPC2BITS {
      union {
        struct {
          unsigned CCT2IP:3;
          unsigned :9;
          unsigned U1RXIP:3;
        };
        struct {
          unsigned CCT2IP0:1;
          unsigned CCT2IP1:1;
          unsigned CCT2IP2:1;
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

// backward compatibility for IPC16BITS
    typedef struct tagIPC16BITS {
      union {
        struct {
          unsigned :4;
          unsigned U1ERIP:3;
        };
        struct {
          unsigned :4;
          unsigned U1ERIP0:1;
          unsigned U1ERIP1:1;
          unsigned U1ERIP2:1;
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

// backward compatibility for IPC24BITS
    typedef struct tagIPC24BITS {
      union {
        struct {
          unsigned CLC1IP:3;
        };
        struct {
          unsigned CLC1IP0:1;
          unsigned CLC1IP1:1;
          unsigned CLC1IP2:1;
        };
      };
} typeIPC24BITS;
sfr volatile typeIPC24BITS IPC24bits absolute 0x0D4;

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

// backward compatibility for CLC1CONLBITS
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
sfr volatile typeCLC1CONLBITS CLC1CONLbits absolute 0x122;

// backward compatibility for CLC1CONHBITS
    typedef struct tagCLC1CONHBITS {
      unsigned G1POL:1;
      unsigned G2POL:1;
      unsigned G3POL:1;
      unsigned G4POL:1;
} typeCLC1CONHBITS;
sfr volatile typeCLC1CONHBITS CLC1CONHbits absolute 0x124;

// backward compatibility for CLC1SELBITS
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
sfr volatile typeCLC1SELBITS CLC1SELbits absolute 0x126;

// backward compatibility for CLC1SELLBITS
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
sfr volatile typeCLC1SELLBITS CLC1SELLbits absolute 0x126;

// backward compatibility for CLC1GLSLBITS
    typedef struct tagCLC1GLSLBITS {
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
} typeCLC1GLSLBITS;
sfr volatile typeCLC1GLSLBITS CLC1GLSLbits absolute 0x12A;

// backward compatibility for CLC1GLSHBITS
    typedef struct tagCLC1GLSHBITS {
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
} typeCLC1GLSHBITS;
sfr volatile typeCLC1GLSHBITS CLC1GLSHbits absolute 0x12C;

// backward compatibility for CCP1CON1LBITS
    typedef struct tagCCP1CON1LBITS {
      union {
        struct {
          unsigned MOD:4;
          unsigned CCSEL:1;
          unsigned TMR32:1;
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
          unsigned :2;
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
sfr volatile typeCCP1CON1LBITS CCP1CON1Lbits absolute 0x140;

// backward compatibility for CCP1CON1HBITS
    typedef struct tagCCP1CON1HBITS {
      union {
        struct {
          unsigned SYNC:5;
          unsigned ALTSYNC:1;
          unsigned ONESHOT:1;
          unsigned TRIGEN:1;
          unsigned IOPS:4;
          unsigned :2;
          unsigned RTRGEN:1;
          unsigned OPSRC:1;
        };
        struct {
          unsigned SYNC0:1;
          unsigned SYNC1:1;
          unsigned SYNC2:1;
          unsigned SYNC3:1;
          unsigned SYNC4:1;
          unsigned :3;
          unsigned IOPS0:1;
          unsigned IOPS1:1;
          unsigned IOPS2:1;
          unsigned IOPS3:1;
        };
      };
} typeCCP1CON1HBITS;
sfr volatile typeCCP1CON1HBITS CCP1CON1Hbits absolute 0x142;

// backward compatibility for CCP1CON2LBITS
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
sfr volatile typeCCP1CON2LBITS CCP1CON2Lbits absolute 0x144;

// backward compatibility for CCP1CON2HBITS
    typedef struct tagCCP1CON2HBITS {
      union {
        struct {
          unsigned ICSEL:3;
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
          unsigned ICSEL0:1;
          unsigned ICSEL1:1;
          unsigned ICSEL2:1;
          unsigned AUXOUT0:1;
          unsigned AUXOUT1:1;
          unsigned :1;
          unsigned ICGSM0:1;
          unsigned ICGSM1:1;
        };
      };
} typeCCP1CON2HBITS;
sfr volatile typeCCP1CON2HBITS CCP1CON2Hbits absolute 0x146;

// backward compatibility for CCP1CON3LBITS
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
sfr volatile typeCCP1CON3LBITS CCP1CON3Lbits absolute 0x148;

// backward compatibility for CCP1CON3HBITS
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
sfr volatile typeCCP1CON3HBITS CCP1CON3Hbits absolute 0x14A;

// backward compatibility for CCP1STATBITS
    typedef struct tagCCP1STATBITS {
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICDIS:1;
      unsigned SCEVT:1;
      unsigned ASEVT:1;
      unsigned TRCLR:1;
      unsigned TRSET:1;
      unsigned TRIG:1;
} typeCCP1STATBITS;
sfr volatile typeCCP1STATBITS CCP1STATbits absolute 0x14C;

// backward compatibility for CCP1STATLBITS
    typedef struct tagCCP1STATLBITS {
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICDIS:1;
      unsigned SCEVT:1;
      unsigned ASEVT:1;
      unsigned TRCLR:1;
      unsigned TRSET:1;
      unsigned TRIG:1;
} typeCCP1STATLBITS;
sfr volatile typeCCP1STATLBITS CCP1STATLbits absolute 0x14C;

// backward compatibility for CCP2CON1LBITS
    typedef struct tagCCP2CON1LBITS {
      union {
        struct {
          unsigned MOD:4;
          unsigned CCSEL:1;
          unsigned TMR32:1;
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
          unsigned :2;
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
sfr volatile typeCCP2CON1LBITS CCP2CON1Lbits absolute 0x164;

// backward compatibility for CCP2CON1HBITS
    typedef struct tagCCP2CON1HBITS {
      union {
        struct {
          unsigned SYNC:5;
          unsigned ALTSYNC:1;
          unsigned ONESHOT:1;
          unsigned TRIGEN:1;
          unsigned IOPS:4;
          unsigned :2;
          unsigned RTRGEN:1;
          unsigned OPSRC:1;
        };
        struct {
          unsigned SYNC0:1;
          unsigned SYNC1:1;
          unsigned SYNC2:1;
          unsigned SYNC3:1;
          unsigned SYNC4:1;
          unsigned :3;
          unsigned IOPS0:1;
          unsigned IOPS1:1;
          unsigned IOPS2:1;
          unsigned IOPS3:1;
        };
      };
} typeCCP2CON1HBITS;
sfr volatile typeCCP2CON1HBITS CCP2CON1Hbits absolute 0x166;

// backward compatibility for CCP2CON2LBITS
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
sfr volatile typeCCP2CON2LBITS CCP2CON2Lbits absolute 0x168;

// backward compatibility for CCP2CON2HBITS
    typedef struct tagCCP2CON2HBITS {
      union {
        struct {
          unsigned ICSEL:3;
          unsigned AUXOUT:2;
          unsigned :1;
          unsigned ICGSM:2;
          unsigned OCAEN:1;
          unsigned :6;
          unsigned OENSYNC:1;
        };
        struct {
          unsigned ICSEL0:1;
          unsigned ICSEL1:1;
          unsigned ICSEL2:1;
          unsigned AUXOUT0:1;
          unsigned AUXOUT1:1;
          unsigned :1;
          unsigned ICGSM0:1;
          unsigned ICGSM1:1;
        };
      };
} typeCCP2CON2HBITS;
sfr volatile typeCCP2CON2HBITS CCP2CON2Hbits absolute 0x16A;

// backward compatibility for CCP2CON3HBITS
    typedef struct tagCCP2CON3HBITS {
      union {
        struct {
          unsigned :2;
          unsigned PSSACE:2;
          unsigned :1;
          unsigned POLACE:1;
          unsigned :6;
          unsigned OSCNT:3;
          unsigned OETRIG:1;
        };
        struct {
          unsigned :2;
          unsigned PSSACE0:1;
          unsigned PSSACE1:1;
          unsigned :8;
          unsigned OSCNT0:1;
          unsigned OSCNT1:1;
          unsigned OSCNT2:1;
        };
      };
} typeCCP2CON3HBITS;
sfr volatile typeCCP2CON3HBITS CCP2CON3Hbits absolute 0x16E;

// backward compatibility for CCP2STATBITS
    typedef struct tagCCP2STATBITS {
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICDIS:1;
      unsigned SCEVT:1;
      unsigned ASEVT:1;
      unsigned TRCLR:1;
      unsigned TRSET:1;
      unsigned TRIG:1;
} typeCCP2STATBITS;
sfr volatile typeCCP2STATBITS CCP2STATbits absolute 0x170;

// backward compatibility for CCP2STATLBITS
    typedef struct tagCCP2STATLBITS {
      unsigned ICBNE:1;
      unsigned ICOV:1;
      unsigned ICDIS:1;
      unsigned SCEVT:1;
      unsigned ASEVT:1;
      unsigned TRCLR:1;
      unsigned TRSET:1;
      unsigned TRIG:1;
} typeCCP2STATLBITS;
sfr volatile typeCCP2STATLBITS CCP2STATLbits absolute 0x170;

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

// backward compatibility for I2C1BRGBITS
    typedef struct tagI2C1BRGBITS {
      union {
        struct {
          unsigned SSPADD:8;
        };
        struct {
          unsigned I2CADD:8;
        };
      };
} typeI2C1BRGBITS;
sfr volatile typeI2C1BRGBITS I2C1BRGbits absolute 0x20A;

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

// backward compatibility for SSP1BRGBITS
    typedef struct tagSSP1BRGBITS {
      union {
        struct {
          unsigned SSPADD:8;
        };
        struct {
          unsigned I2CADD:8;
        };
      };
} typeSSP1BRGBITS;
sfr volatile typeSSP1BRGBITS SSP1BRGbits absolute 0x20A;

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

// backward compatibility for TRISABITS
    typedef struct tagTRISABITS {
      unsigned TRISA0:1;
      unsigned TRISA1:1;
      unsigned TRISA2:1;
      unsigned TRISA3:1;
      unsigned TRISA4:1;
      unsigned :1;
      unsigned TRISA6:1;
      unsigned TRISA7:1;
      unsigned TRISA8:1;
      unsigned TRISA9:1;
      unsigned TRISA10:1;
      unsigned TRISA11:1;
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
      unsigned RA7:1;
      unsigned RA8:1;
      unsigned RA9:1;
      unsigned RA10:1;
      unsigned RA11:1;
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
      unsigned LATA7:1;
      unsigned LATA8:1;
      unsigned LATA9:1;
      unsigned LATA10:1;
      unsigned LATA11:1;
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
      unsigned ODA7:1;
      unsigned ODA8:1;
      unsigned ODA9:1;
      unsigned ODA10:1;
      unsigned ODA11:1;
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
} typeTRISCBITS;
sfr volatile typeTRISCBITS TRISCbits absolute 0x2D0;

// backward compatibility for PORTCBITS
    typedef struct tagPORTCBITS {
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
} typePORTCBITS;
sfr volatile typePORTCBITS PORTCbits absolute 0x2D2;

// backward compatibility for LATCBITS
    typedef struct tagLATCBITS {
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
} typeLATCBITS;
sfr volatile typeLATCBITS LATCbits absolute 0x2D4;

// backward compatibility for ODCCBITS
    typedef struct tagODCCBITS {
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
} typeODCCBITS;
sfr volatile typeODCCBITS ODCCbits absolute 0x2D6;

// backward compatibility for PADCFG1BITS
    typedef struct tagPADCFG1BITS {
      unsigned :8;
      unsigned SCK1DIS:1;
      unsigned SDA1DIS:1;
} typePADCFG1BITS;
sfr volatile typePADCFG1BITS PADCFG1bits absolute 0x2FC;

// backward compatibility for AD1CON1BITS
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
          unsigned :2;
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
sfr volatile typeAD1CON1BITS AD1CON1bits absolute 0x340;

// backward compatibility for AD1CON2BITS
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
sfr volatile typeAD1CON2BITS AD1CON2bits absolute 0x342;

// backward compatibility for AD1CON3BITS
    typedef struct tagAD1CON3BITS {
      union {
        struct {
          unsigned ADCS:8;
          unsigned SAMC:5;
          unsigned :1;
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
sfr volatile typeAD1CON3BITS AD1CON3bits absolute 0x344;

// backward compatibility for AD1CHSBITS
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
sfr volatile typeAD1CHSBITS AD1CHSbits absolute 0x348;

// backward compatibility for AD1CHS0BITS
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
sfr volatile typeAD1CHS0BITS AD1CHS0bits absolute 0x348;

// backward compatibility for AD1CSSHBITS
    typedef struct tagAD1CSSHBITS {
      unsigned CSS16:1;
      unsigned CSS17:1;
      unsigned CSS18:1;
      unsigned CSS19:1;
      unsigned CSS20:1;
      unsigned CSS21:1;
      unsigned CSS22:1;
      unsigned CSS23:1;
      unsigned :2;
      unsigned CSS26:1;
      unsigned CSS27:1;
      unsigned CSS28:1;
      unsigned CSS29:1;
      unsigned CSS30:1;
} typeAD1CSSHBITS;
sfr volatile typeAD1CSSHBITS AD1CSSHbits absolute 0x34E;

// backward compatibility for AD1CSSLBITS
    typedef struct tagAD1CSSLBITS {
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
} typeAD1CSSLBITS;
sfr volatile typeAD1CSSLBITS AD1CSSLbits absolute 0x350;

// backward compatibility for AD1CON5BITS
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
sfr volatile typeAD1CON5BITS AD1CON5bits absolute 0x354;

// backward compatibility for AD1CHITHBITS
    typedef struct tagAD1CHITHBITS {
      unsigned CHH16:1;
      unsigned CHH17:1;
      unsigned CHH18:1;
      unsigned CHH19:1;
      unsigned CHH20:1;
      unsigned CHH21:1;
      unsigned CHH22:1;
      unsigned CHH23:1;
} typeAD1CHITHBITS;
sfr volatile typeAD1CHITHBITS AD1CHITHbits absolute 0x356;

// backward compatibility for AD1CHITLBITS
    typedef struct tagAD1CHITLBITS {
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
} typeAD1CHITLBITS;
sfr volatile typeAD1CHITLBITS AD1CHITLbits absolute 0x358;

// backward compatibility for CTMUCON1LBITS
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
sfr volatile typeCTMUCON1LBITS CTMUCON1Lbits absolute 0x35A;

// backward compatibility for CTMUCON1HBITS
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
sfr volatile typeCTMUCON1HBITS CTMUCON1Hbits absolute 0x35C;

// backward compatibility for CTMUCON2BITS
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
sfr volatile typeCTMUCON2BITS CTMUCON2bits absolute 0x35E;

// backward compatibility for CTMUCON2LBITS
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
sfr volatile typeCTMUCON2LBITS CTMUCON2Lbits absolute 0x35E;

// backward compatibility for AD1CTMENHBITS
    typedef struct tagAD1CTMENHBITS {
      unsigned CTMEN16:1;
      unsigned CTMEN17:1;
      unsigned CTMEN18:1;
      unsigned CTMEN19:1;
      unsigned CTMEN20:1;
      unsigned CTMEN21:1;
      unsigned CTMEN22:1;
      unsigned CTMEN23:1;
} typeAD1CTMENHBITS;
sfr volatile typeAD1CTMENHBITS AD1CTMENHbits absolute 0x360;

// backward compatibility for AD1CTMENLBITS
    typedef struct tagAD1CTMENLBITS {
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
} typeAD1CTMENLBITS;
sfr volatile typeAD1CTMENLBITS AD1CTMENLbits absolute 0x362;

// backward compatibility for ANSABITS
    typedef struct tagANSABITS {
      unsigned ANSA0:1;
      unsigned ANSA1:1;
      unsigned ANSA2:1;
      unsigned ANSA3:1;
      unsigned ANSA4:1;
} typeANSABITS;
sfr volatile typeANSABITS ANSAbits absolute 0x4E0;

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
      unsigned ANSB8:1;
      unsigned ANSB9:1;
      unsigned :2;
      unsigned ANSB12:1;
      unsigned ANSB13:1;
      unsigned ANSB14:1;
      unsigned ANSB15:1;
} typeANSBBITS;
sfr volatile typeANSBBITS ANSBbits absolute 0x4E2;

// backward compatibility for ANSCBITS
    typedef struct tagANSCBITS {
      unsigned ANSC0:1;
      unsigned ANSC1:1;
      unsigned ANSC2:1;
} typeANSCBITS;
sfr volatile typeANSCBITS ANSCbits absolute 0x4E4;

// backward compatibility for CMSTATBITS
    typedef struct tagCMSTATBITS {
      unsigned C1OUT:1;
      unsigned :7;
      unsigned C1EVT:1;
      unsigned :6;
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
          unsigned CREF:2;
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
          unsigned :2;
          unsigned CREF0:1;
          unsigned CREF1:1;
          unsigned EVPOL0:1;
          unsigned EVPOL1:1;
        };
      };
} typeCM1CONBITS;
sfr volatile typeCM1CONBITS CM1CONbits absolute 0x634;

// backward compatibility for BUFCON0BITS
    typedef struct tagBUFCON0BITS {
      union {
        struct {
          unsigned BUFREF:2;
        };
        struct {
          unsigned BUFREF0:1;
          unsigned BUFREF1:1;
        };
      };
} typeBUFCON0BITS;
sfr volatile typeBUFCON0BITS BUFCON0bits absolute 0x670;

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
      unsigned ADC1MD:1;
      unsigned :4;
      unsigned U1MD:1;
      unsigned :1;
      unsigned SSP1MD:1;
      unsigned :3;
      unsigned T1MD:1;
} typePMD1BITS;
sfr volatile typePMD1BITS PMD1bits absolute 0x770;

// backward compatibility for PMD2BITS
    typedef struct tagPMD2BITS {
      unsigned CCP1MD:1;
      unsigned CCP2MD:1;
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
      unsigned :1;
      unsigned HLVDMD:1;
      unsigned CTMUMD:1;
      unsigned REFOMD:1;
      unsigned :2;
      unsigned ULPWUMD:1;
} typePMD4BITS;
sfr volatile typePMD4BITS PMD4bits absolute 0x776;

// backward compatibility for PMD8BITS
    typedef struct tagPMD8BITS {
      unsigned :2;
      unsigned CLC1MD:1;
} typePMD8BITS;
sfr volatile typePMD8BITS PMD8bits absolute 0x77E;

