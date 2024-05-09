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

const unsigned long __FLASH_SIZE = 0x00005780;
const unsigned long __XRAM_RAM_SIZE = 0x000003FF;
const unsigned long __XRAM_RAM_START = 0x1000;
const unsigned long __YRAM_RAM_SIZE = 0x000003FF;
const unsigned long __YRAM_RAM_START = 0x1400;
const long __CONST_FAR_PREFIX = 0x0;
const char __FOSC_PER_CYC = 2;

// Primary Interrupt Vector Table Constants

const unsigned IVT_ADDR_OSCILLATORFAIL       = 0x0004;
const unsigned IVT_ADDR_ADDRESSERROR         = 0x0006;
const unsigned IVT_ADDR_HARDTRAPERROR        = 0x0008;
const unsigned IVT_ADDR_STACKERROR           = 0x000A;
const unsigned IVT_ADDR_MATHERROR            = 0x000C;
const unsigned IVT_ADDR_RESERVEDTRAP5        = 0x000E;
const unsigned IVT_ADDR_SOFTTRAPERROR        = 0x0010;
const unsigned IVT_ADDR_RESERVEDTRAP7        = 0x0012;
const unsigned IVT_ADDR_INT0INTERRUPT        = 0x0014;
const unsigned IVT_ADDR_IC1INTERRUPT         = 0x0016;
const unsigned IVT_ADDR_OC1INTERRUPT         = 0x0018;
const unsigned IVT_ADDR_T1INTERRUPT          = 0x001A;
const unsigned IVT_ADDR_INTERRUPT4           = 0x001C;
const unsigned IVT_ADDR_INTERRUPT5           = 0x001E;
const unsigned IVT_ADDR_INTERRUPT6           = 0x0020;
const unsigned IVT_ADDR_T2INTERRUPT          = 0x0022;
const unsigned IVT_ADDR_T3INTERRUPT          = 0x0024;
const unsigned IVT_ADDR_SPI1ERRINTERRUPT     = 0x0026;
const unsigned IVT_ADDR_SPI1INTERRUPT        = 0x0028;
const unsigned IVT_ADDR_U1RXINTERRUPT        = 0x002A;
const unsigned IVT_ADDR_U1TXINTERRUPT        = 0x002C;
const unsigned IVT_ADDR_AD1INTERRUPT         = 0x002E;
const unsigned IVT_ADDR_INTERRUPT14          = 0x0030;
const unsigned IVT_ADDR_NVMINTERRUPT         = 0x0032;
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
const unsigned IVT_ADDR_PWMSECSPEVENTMATCHINTERRUPT = 0x00A6;
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
const unsigned IVT_ADDR_PWM3INTERRUPT        = 0x00D4;
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
const unsigned IVT_ADDR_ADCAN0INTERRUPT      = 0x00F0;
const unsigned IVT_ADDR_ADCAN1INTERRUPT      = 0x00F2;
const unsigned IVT_ADDR_ADCAN2INTERRUPT      = 0x00F4;
const unsigned IVT_ADDR_ADCAN3INTERRUPT      = 0x00F6;
const unsigned IVT_ADDR_ADCAN4INTERRUPT      = 0x00F8;
const unsigned IVT_ADDR_ADCAN5INTERRUPT      = 0x00FA;
const unsigned IVT_ADDR_ADCAN6INTERRUPT      = 0x00FC;
const unsigned IVT_ADDR_ADCAN7INTERRUPT      = 0x00FE;
const unsigned IVT_ADDR_INTERRUPT118         = 0x0100;
const unsigned IVT_ADDR_INTERRUPT119         = 0x0102;
const unsigned IVT_ADDR_INTERRUPT120         = 0x0104;
const unsigned IVT_ADDR_INTERRUPT121         = 0x0106;
const unsigned IVT_ADDR_INTERRUPT122         = 0x0108;
const unsigned IVT_ADDR_INTERRUPT123         = 0x010A;
const unsigned IVT_ADDR_INTERRUPT124         = 0x010C;
const unsigned IVT_ADDR_INTERRUPT125         = 0x010E;
const unsigned IVT_ADDR_INTERRUPT126         = 0x0110;
const unsigned IVT_ADDR_INTERRUPT127         = 0x0112;
const unsigned IVT_ADDR_INTERRUPT128         = 0x0114;
const unsigned IVT_ADDR_INTERRUPT129         = 0x0116;
const unsigned IVT_ADDR_INTERRUPT130         = 0x0118;
const unsigned IVT_ADDR_INTERRUPT131         = 0x011A;
const unsigned IVT_ADDR_INTERRUPT132         = 0x011C;
const unsigned IVT_ADDR_INTERRUPT133         = 0x011E;
const unsigned IVT_ADDR_INTERRUPT134         = 0x0120;
const unsigned IVT_ADDR_INTERRUPT135         = 0x0122;
const unsigned IVT_ADDR_INTERRUPT136         = 0x0124;
const unsigned IVT_ADDR_INTERRUPT137         = 0x0126;
const unsigned IVT_ADDR_INTERRUPT138         = 0x0128;
const unsigned IVT_ADDR_INTERRUPT139         = 0x012A;
const unsigned IVT_ADDR_INTERRUPT140         = 0x012C;
const unsigned IVT_ADDR_INTERRUPT141         = 0x012E;
const unsigned IVT_ADDR_ICDINTERRUPT         = 0x0130;
const unsigned IVT_ADDR_JTAGINTERRUPT        = 0x0132;
const unsigned IVT_ADDR_INTERRUPT144         = 0x0134;
const unsigned IVT_ADDR_INTERRUPT145         = 0x0136;
const unsigned IVT_ADDR_INTERRUPT146         = 0x0138;
const unsigned IVT_ADDR_INTERRUPT147         = 0x013A;
const unsigned IVT_ADDR_INTERRUPT148         = 0x013C;
const unsigned IVT_ADDR_INTERRUPT149         = 0x013E;
const unsigned IVT_ADDR_INTERRUPT150         = 0x0140;
const unsigned IVT_ADDR_ADCAN8INTERRUPT      = 0x0142;
const unsigned IVT_ADDR_ADCAN9INTERRUPT      = 0x0144;
const unsigned IVT_ADDR_ADCAN10INTERRUPT     = 0x0146;
const unsigned IVT_ADDR_ADCAN11INTERRUPT     = 0x0148;
const unsigned IVT_ADDR_ADCAN12INTERRUPT     = 0x014A;
const unsigned IVT_ADDR_ADCAN13INTERRUPT     = 0x014C;
const unsigned IVT_ADDR_ADCAN14INTERRUPT     = 0x014E;
const unsigned IVT_ADDR_INTERRUPT158         = 0x0150;
const unsigned IVT_ADDR_INTERRUPT159         = 0x0152;
const unsigned IVT_ADDR_INTERRUPT160         = 0x0154;
const unsigned IVT_ADDR_INTERRUPT161         = 0x0156;
const unsigned IVT_ADDR_INTERRUPT162         = 0x0158;
const unsigned IVT_ADDR_INTERRUPT163         = 0x015A;
const unsigned IVT_ADDR_INTERRUPT164         = 0x015C;
const unsigned IVT_ADDR_INTERRUPT165         = 0x015E;
const unsigned IVT_ADDR_INTERRUPT166         = 0x0160;
const unsigned IVT_ADDR_INTERRUPT167         = 0x0162;
const unsigned IVT_ADDR_INTERRUPT168         = 0x0164;
const unsigned IVT_ADDR_INTERRUPT169         = 0x0166;
const unsigned IVT_ADDR_INTERRUPT170         = 0x0168;
const unsigned IVT_ADDR_INTERRUPT171         = 0x016A;
const unsigned IVT_ADDR_INTERRUPT172         = 0x016C;
const unsigned IVT_ADDR_I2C1BCINTERRUPT      = 0x016E;
const unsigned IVT_ADDR_INTERRUPT174         = 0x0170;
const unsigned IVT_ADDR_INTERRUPT175         = 0x0172;
const unsigned IVT_ADDR_INTERRUPT176         = 0x0174;
const unsigned IVT_ADDR_ADCMP0INTERRUPT      = 0x0176;
const unsigned IVT_ADDR_ADCMP1INTERRUPT      = 0x0178;
const unsigned IVT_ADDR_ADFL0INTERRUPT       = 0x017A;

// Alternate Interrupt Vector Table Constants

const unsigned AIVT_ADDR_ALTRESERVEDTRAP0     = 0x0800;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP1     = 0x0802;
const unsigned AIVT_ADDR_ALTOSCILLATORFAIL    = 0x0804;
const unsigned AIVT_ADDR_ALTADDRESSERROR      = 0x0806;
const unsigned AIVT_ADDR_ALTHARDTRAPERROR     = 0x0808;
const unsigned AIVT_ADDR_ALTSTACKERROR        = 0x080A;
const unsigned AIVT_ADDR_ALTMATHERROR         = 0x080C;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP5     = 0x080E;
const unsigned AIVT_ADDR_ALTSOFTTRAPERROR     = 0x0810;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP7     = 0x0812;
const unsigned AIVT_ADDR_ALTINT0INTERRUPT     = 0x0814;
const unsigned AIVT_ADDR_ALTIC1INTERRUPT      = 0x0816;
const unsigned AIVT_ADDR_ALTOC1INTERRUPT      = 0x0818;
const unsigned AIVT_ADDR_ALTT1INTERRUPT       = 0x081A;
const unsigned AIVT_ADDR_ALTINTERRUPT4        = 0x081C;
const unsigned AIVT_ADDR_ALTINTERRUPT5        = 0x081E;
const unsigned AIVT_ADDR_ALTINTERRUPT6        = 0x0820;
const unsigned AIVT_ADDR_ALTT2INTERRUPT       = 0x0822;
const unsigned AIVT_ADDR_ALTT3INTERRUPT       = 0x0824;
const unsigned AIVT_ADDR_ALTSPI1ERRINTERRUPT  = 0x0826;
const unsigned AIVT_ADDR_ALTSPI1INTERRUPT     = 0x0828;
const unsigned AIVT_ADDR_ALTU1RXINTERRUPT     = 0x082A;
const unsigned AIVT_ADDR_ALTU1TXINTERRUPT     = 0x082C;
const unsigned AIVT_ADDR_ALTAD1INTERRUPT      = 0x082E;
const unsigned AIVT_ADDR_ALTINTERRUPT14       = 0x0830;
const unsigned AIVT_ADDR_ALTNVMINTERRUPT      = 0x0832;
const unsigned AIVT_ADDR_ALTSI2C1INTERRUPT    = 0x0834;
const unsigned AIVT_ADDR_ALTMI2C1INTERRUPT    = 0x0836;
const unsigned AIVT_ADDR_ALTCMP1INTERRUPT     = 0x0838;
const unsigned AIVT_ADDR_ALTCNINTERRUPT       = 0x083A;
const unsigned AIVT_ADDR_ALTINT1INTERRUPT     = 0x083C;
const unsigned AIVT_ADDR_ALTINTERRUPT21       = 0x083E;
const unsigned AIVT_ADDR_ALTINTERRUPT22       = 0x0840;
const unsigned AIVT_ADDR_ALTINTERRUPT23       = 0x0842;
const unsigned AIVT_ADDR_ALTINTERRUPT24       = 0x0844;
const unsigned AIVT_ADDR_ALTINTERRUPT25       = 0x0846;
const unsigned AIVT_ADDR_ALTINTERRUPT26       = 0x0848;
const unsigned AIVT_ADDR_ALTINTERRUPT27       = 0x084A;
const unsigned AIVT_ADDR_ALTINTERRUPT28       = 0x084C;
const unsigned AIVT_ADDR_ALTINT2INTERRUPT     = 0x084E;
const unsigned AIVT_ADDR_ALTINTERRUPT30       = 0x0850;
const unsigned AIVT_ADDR_ALTINTERRUPT31       = 0x0852;
const unsigned AIVT_ADDR_ALTINTERRUPT32       = 0x0854;
const unsigned AIVT_ADDR_ALTINTERRUPT33       = 0x0856;
const unsigned AIVT_ADDR_ALTINTERRUPT34       = 0x0858;
const unsigned AIVT_ADDR_ALTINTERRUPT35       = 0x085A;
const unsigned AIVT_ADDR_ALTINTERRUPT36       = 0x085C;
const unsigned AIVT_ADDR_ALTINTERRUPT37       = 0x085E;
const unsigned AIVT_ADDR_ALTINTERRUPT38       = 0x0860;
const unsigned AIVT_ADDR_ALTINTERRUPT39       = 0x0862;
const unsigned AIVT_ADDR_ALTINTERRUPT40       = 0x0864;
const unsigned AIVT_ADDR_ALTINTERRUPT41       = 0x0866;
const unsigned AIVT_ADDR_ALTINTERRUPT42       = 0x0868;
const unsigned AIVT_ADDR_ALTINTERRUPT43       = 0x086A;
const unsigned AIVT_ADDR_ALTINTERRUPT44       = 0x086C;
const unsigned AIVT_ADDR_ALTINTERRUPT45       = 0x086E;
const unsigned AIVT_ADDR_ALTINTERRUPT46       = 0x0870;
const unsigned AIVT_ADDR_ALTINTERRUPT47       = 0x0872;
const unsigned AIVT_ADDR_ALTINTERRUPT48       = 0x0874;
const unsigned AIVT_ADDR_ALTINTERRUPT49       = 0x0876;
const unsigned AIVT_ADDR_ALTINTERRUPT50       = 0x0878;
const unsigned AIVT_ADDR_ALTINTERRUPT51       = 0x087A;
const unsigned AIVT_ADDR_ALTINTERRUPT52       = 0x087C;
const unsigned AIVT_ADDR_ALTINTERRUPT53       = 0x087E;
const unsigned AIVT_ADDR_ALTINTERRUPT54       = 0x0880;
const unsigned AIVT_ADDR_ALTINTERRUPT55       = 0x0882;
const unsigned AIVT_ADDR_ALTINTERRUPT56       = 0x0884;
const unsigned AIVT_ADDR_ALTPWMSPEVENTMATCHINTERRUPT = 0x0886;
const unsigned AIVT_ADDR_ALTINTERRUPT58       = 0x0888;
const unsigned AIVT_ADDR_ALTINTERRUPT59       = 0x088A;
const unsigned AIVT_ADDR_ALTINTERRUPT60       = 0x088C;
const unsigned AIVT_ADDR_ALTINTERRUPT61       = 0x088E;
const unsigned AIVT_ADDR_ALTINTERRUPT62       = 0x0890;
const unsigned AIVT_ADDR_ALTINTERRUPT63       = 0x0892;
const unsigned AIVT_ADDR_ALTINTERRUPT64       = 0x0894;
const unsigned AIVT_ADDR_ALTU1ERRINTERRUPT    = 0x0896;
const unsigned AIVT_ADDR_ALTINTERRUPT66       = 0x0898;
const unsigned AIVT_ADDR_ALTINTERRUPT67       = 0x089A;
const unsigned AIVT_ADDR_ALTINTERRUPT68       = 0x089C;
const unsigned AIVT_ADDR_ALTINTERRUPT69       = 0x089E;
const unsigned AIVT_ADDR_ALTINTERRUPT70       = 0x08A0;
const unsigned AIVT_ADDR_ALTINTERRUPT71       = 0x08A2;
const unsigned AIVT_ADDR_ALTINTERRUPT72       = 0x08A4;
const unsigned AIVT_ADDR_ALTPWMSECSPEVENTMATCHINTERRUPT = 0x08A6;
const unsigned AIVT_ADDR_ALTINTERRUPT74       = 0x08A8;
const unsigned AIVT_ADDR_ALTINTERRUPT75       = 0x08AA;
const unsigned AIVT_ADDR_ALTINTERRUPT76       = 0x08AC;
const unsigned AIVT_ADDR_ALTINTERRUPT77       = 0x08AE;
const unsigned AIVT_ADDR_ALTINTERRUPT78       = 0x08B0;
const unsigned AIVT_ADDR_ALTINTERRUPT79       = 0x08B2;
const unsigned AIVT_ADDR_ALTINTERRUPT80       = 0x08B4;
const unsigned AIVT_ADDR_ALTINTERRUPT81       = 0x08B6;
const unsigned AIVT_ADDR_ALTINTERRUPT82       = 0x08B8;
const unsigned AIVT_ADDR_ALTINTERRUPT83       = 0x08BA;
const unsigned AIVT_ADDR_ALTINTERRUPT84       = 0x08BC;
const unsigned AIVT_ADDR_ALTINTERRUPT85       = 0x08BE;
const unsigned AIVT_ADDR_ALTINTERRUPT86       = 0x08C0;
const unsigned AIVT_ADDR_ALTINTERRUPT87       = 0x08C2;
const unsigned AIVT_ADDR_ALTINTERRUPT88       = 0x08C4;
const unsigned AIVT_ADDR_ALTINTERRUPT89       = 0x08C6;
const unsigned AIVT_ADDR_ALTINTERRUPT90       = 0x08C8;
const unsigned AIVT_ADDR_ALTINTERRUPT91       = 0x08CA;
const unsigned AIVT_ADDR_ALTINTERRUPT92       = 0x08CC;
const unsigned AIVT_ADDR_ALTINTERRUPT93       = 0x08CE;
const unsigned AIVT_ADDR_ALTPWM1INTERRUPT     = 0x08D0;
const unsigned AIVT_ADDR_ALTPWM2INTERRUPT     = 0x08D2;
const unsigned AIVT_ADDR_ALTPWM3INTERRUPT     = 0x08D4;
const unsigned AIVT_ADDR_ALTINTERRUPT97       = 0x08D6;
const unsigned AIVT_ADDR_ALTINTERRUPT98       = 0x08D8;
const unsigned AIVT_ADDR_ALTINTERRUPT99       = 0x08DA;
const unsigned AIVT_ADDR_ALTINTERRUPT100      = 0x08DC;
const unsigned AIVT_ADDR_ALTINTERRUPT101      = 0x08DE;
const unsigned AIVT_ADDR_ALTINTERRUPT102      = 0x08E0;
const unsigned AIVT_ADDR_ALTCMP2INTERRUPT     = 0x08E2;
const unsigned AIVT_ADDR_ALTINTERRUPT104      = 0x08E4;
const unsigned AIVT_ADDR_ALTINTERRUPT105      = 0x08E6;
const unsigned AIVT_ADDR_ALTINTERRUPT106      = 0x08E8;
const unsigned AIVT_ADDR_ALTINTERRUPT107      = 0x08EA;
const unsigned AIVT_ADDR_ALTINTERRUPT108      = 0x08EC;
const unsigned AIVT_ADDR_ALTINTERRUPT109      = 0x08EE;
const unsigned AIVT_ADDR_ALTADCAN0INTERRUPT   = 0x08F0;
const unsigned AIVT_ADDR_ALTADCAN1INTERRUPT   = 0x08F2;
const unsigned AIVT_ADDR_ALTADCAN2INTERRUPT   = 0x08F4;
const unsigned AIVT_ADDR_ALTADCAN3INTERRUPT   = 0x08F6;
const unsigned AIVT_ADDR_ALTADCAN4INTERRUPT   = 0x08F8;
const unsigned AIVT_ADDR_ALTADCAN5INTERRUPT   = 0x08FA;
const unsigned AIVT_ADDR_ALTADCAN6INTERRUPT   = 0x08FC;
const unsigned AIVT_ADDR_ALTADCAN7INTERRUPT   = 0x08FE;
const unsigned AIVT_ADDR_ALTINTERRUPT118      = 0x0900;
const unsigned AIVT_ADDR_ALTINTERRUPT119      = 0x0902;
const unsigned AIVT_ADDR_ALTINTERRUPT120      = 0x0904;
const unsigned AIVT_ADDR_ALTINTERRUPT121      = 0x0906;
const unsigned AIVT_ADDR_ALTINTERRUPT122      = 0x0908;
const unsigned AIVT_ADDR_ALTINTERRUPT123      = 0x090A;
const unsigned AIVT_ADDR_ALTINTERRUPT124      = 0x090C;
const unsigned AIVT_ADDR_ALTINTERRUPT125      = 0x090E;
const unsigned AIVT_ADDR_ALTINTERRUPT126      = 0x0910;
const unsigned AIVT_ADDR_ALTINTERRUPT127      = 0x0912;
const unsigned AIVT_ADDR_ALTINTERRUPT128      = 0x0914;
const unsigned AIVT_ADDR_ALTINTERRUPT129      = 0x0916;
const unsigned AIVT_ADDR_ALTINTERRUPT130      = 0x0918;
const unsigned AIVT_ADDR_ALTINTERRUPT131      = 0x091A;
const unsigned AIVT_ADDR_ALTINTERRUPT132      = 0x091C;
const unsigned AIVT_ADDR_ALTINTERRUPT133      = 0x091E;
const unsigned AIVT_ADDR_ALTINTERRUPT134      = 0x0920;
const unsigned AIVT_ADDR_ALTINTERRUPT135      = 0x0922;
const unsigned AIVT_ADDR_ALTINTERRUPT136      = 0x0924;
const unsigned AIVT_ADDR_ALTINTERRUPT137      = 0x0926;
const unsigned AIVT_ADDR_ALTINTERRUPT138      = 0x0928;
const unsigned AIVT_ADDR_ALTINTERRUPT139      = 0x092A;
const unsigned AIVT_ADDR_ALTINTERRUPT140      = 0x092C;
const unsigned AIVT_ADDR_ALTINTERRUPT141      = 0x092E;
const unsigned AIVT_ADDR_ALTICDINTERRUPT      = 0x0930;
const unsigned AIVT_ADDR_ALTJTAGINTERRUPT     = 0x0932;
const unsigned AIVT_ADDR_ALTINTERRUPT144      = 0x0934;
const unsigned AIVT_ADDR_ALTINTERRUPT145      = 0x0936;
const unsigned AIVT_ADDR_ALTINTERRUPT146      = 0x0938;
const unsigned AIVT_ADDR_ALTINTERRUPT147      = 0x093A;
const unsigned AIVT_ADDR_ALTINTERRUPT148      = 0x093C;
const unsigned AIVT_ADDR_ALTINTERRUPT149      = 0x093E;
const unsigned AIVT_ADDR_ALTINTERRUPT150      = 0x0940;
const unsigned AIVT_ADDR_ALTADCAN8INTERRUPT   = 0x0942;
const unsigned AIVT_ADDR_ALTADCAN9INTERRUPT   = 0x0944;
const unsigned AIVT_ADDR_ALTADCAN10INTERRUPT  = 0x0946;
const unsigned AIVT_ADDR_ALTADCAN11INTERRUPT  = 0x0948;
const unsigned AIVT_ADDR_ALTADCAN12INTERRUPT  = 0x094A;
const unsigned AIVT_ADDR_ALTADCAN13INTERRUPT  = 0x094C;
const unsigned AIVT_ADDR_ALTADCAN14INTERRUPT  = 0x094E;
const unsigned AIVT_ADDR_ALTINTERRUPT158      = 0x0950;
const unsigned AIVT_ADDR_ALTINTERRUPT159      = 0x0952;
const unsigned AIVT_ADDR_ALTINTERRUPT160      = 0x0954;
const unsigned AIVT_ADDR_ALTINTERRUPT161      = 0x0956;
const unsigned AIVT_ADDR_ALTINTERRUPT162      = 0x0958;
const unsigned AIVT_ADDR_ALTINTERRUPT163      = 0x095A;
const unsigned AIVT_ADDR_ALTINTERRUPT164      = 0x095C;
const unsigned AIVT_ADDR_ALTINTERRUPT165      = 0x095E;
const unsigned AIVT_ADDR_ALTINTERRUPT166      = 0x0960;
const unsigned AIVT_ADDR_ALTINTERRUPT167      = 0x0962;
const unsigned AIVT_ADDR_ALTINTERRUPT168      = 0x0964;
const unsigned AIVT_ADDR_ALTINTERRUPT169      = 0x0966;
const unsigned AIVT_ADDR_ALTINTERRUPT170      = 0x0968;
const unsigned AIVT_ADDR_ALTINTERRUPT171      = 0x096A;
const unsigned AIVT_ADDR_ALTINTERRUPT172      = 0x096C;
const unsigned AIVT_ADDR_ALTI2C1BCINTERRUPT   = 0x096E;
const unsigned AIVT_ADDR_ALTINTERRUPT174      = 0x0970;
const unsigned AIVT_ADDR_ALTINTERRUPT175      = 0x0972;
const unsigned AIVT_ADDR_ALTINTERRUPT176      = 0x0974;
const unsigned AIVT_ADDR_ALTADCMP0INTERRUPT   = 0x0976;
const unsigned AIVT_ADDR_ALTADCMP1INTERRUPT   = 0x0978;
const unsigned AIVT_ADDR_ALTADFL0INTERRUPT    = 0x097A;

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
sfr unsigned int   volatile ACCAL            absolute 0x22;
sfr unsigned int   volatile ACCAH            absolute 0x24;
sfr unsigned int   volatile ACCAU            absolute 0x26;
sfr unsigned int   volatile ACCBL            absolute 0x28;
sfr unsigned int   volatile ACCBH            absolute 0x2A;
sfr unsigned int   volatile ACCBU            absolute 0x2C;
sfr unsigned int   volatile PCL              absolute 0x2E;
sfr unsigned int   volatile PCH              absolute 0x30;
sfr unsigned int   volatile DSRPAG           absolute 0x32;
sfr unsigned int   volatile DSWPAG           absolute 0x34;
sfr unsigned int   volatile RCOUNT           absolute 0x36;
sfr unsigned int   volatile DCOUNT           absolute 0x38;
sfr unsigned int   volatile DOSTARTL         absolute 0x3A;
sfr unsigned int   volatile DOSTARTH         absolute 0x3C;
sfr unsigned int   volatile DOENDL           absolute 0x3E;
sfr unsigned int   volatile DOENDH           absolute 0x40;
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
    const register unsigned short int DA = 9;
    sbit  DA_bit at SR.B9;
    const register unsigned short int SAB = 10;
    sbit  SAB_bit at SR.B10;
    const register unsigned short int OAB = 11;
    sbit  OAB_bit at SR.B11;
    const register unsigned short int SB = 12;
    sbit  SB_bit at SR.B12;
    const register unsigned short int SA = 13;
    sbit  SA_bit at SR.B13;
    const register unsigned short int OB = 14;
    sbit  OB_bit at SR.B14;
    const register unsigned short int OA = 15;
    sbit  OA_bit at SR.B15;

sfr unsigned int   volatile CORCON           absolute 0x44;
    const register unsigned short int IF_ = 0;
    sbit  IF_bit at CORCON.B0;
    const register unsigned short int RND_ = 1;
    sbit  RND_bit at CORCON.B1;
    const register unsigned short int SFA = 2;
    sbit  SFA_bit at CORCON.B2;
    const register unsigned short int IPL3 = 3;
    sbit  IPL3_bit at CORCON.B3;
    const register unsigned short int ACCSAT = 4;
    sbit  ACCSAT_bit at CORCON.B4;
    const register unsigned short int SATDW = 5;
    sbit  SATDW_bit at CORCON.B5;
    const register unsigned short int SATB = 6;
    sbit  SATB_bit at CORCON.B6;
    const register unsigned short int SATA = 7;
    sbit  SATA_bit at CORCON.B7;
    const register unsigned short int DL0 = 8;
    sbit  DL0_bit at CORCON.B8;
    const register unsigned short int DL1 = 9;
    sbit  DL1_bit at CORCON.B9;
    const register unsigned short int DL2 = 10;
    sbit  DL2_bit at CORCON.B10;
    const register unsigned short int EDT = 11;
    sbit  EDT_bit at CORCON.B11;
    const register unsigned short int US0 = 12;
    sbit  US0_bit at CORCON.B12;
    const register unsigned short int US1 = 13;
    sbit  US1_bit at CORCON.B13;
    const register unsigned short int VAR_ = 15;
    sbit  VAR_bit at CORCON.B15;

sfr unsigned int   volatile MODCON           absolute 0x46;
    const register unsigned short int XWM0 = 0;
    sbit  XWM0_bit at MODCON.B0;
    const register unsigned short int XWM1 = 1;
    sbit  XWM1_bit at MODCON.B1;
    const register unsigned short int XWM2 = 2;
    sbit  XWM2_bit at MODCON.B2;
    const register unsigned short int XWM3 = 3;
    sbit  XWM3_bit at MODCON.B3;
    const register unsigned short int YWM0 = 4;
    sbit  YWM0_bit at MODCON.B4;
    const register unsigned short int YWM1 = 5;
    sbit  YWM1_bit at MODCON.B5;
    const register unsigned short int YWM2 = 6;
    sbit  YWM2_bit at MODCON.B6;
    const register unsigned short int YWM3 = 7;
    sbit  YWM3_bit at MODCON.B7;
    const register unsigned short int BWM0 = 8;
    sbit  BWM0_bit at MODCON.B8;
    const register unsigned short int BWM1 = 9;
    sbit  BWM1_bit at MODCON.B9;
    const register unsigned short int BWM2 = 10;
    sbit  BWM2_bit at MODCON.B10;
    const register unsigned short int BWM3 = 11;
    sbit  BWM3_bit at MODCON.B11;
    const register unsigned short int YMODEN = 14;
    sbit  YMODEN_bit at MODCON.B14;
    const register unsigned short int XMODEN = 15;
    sbit  XMODEN_bit at MODCON.B15;

sfr unsigned int   volatile XMODSRT          absolute 0x48;
sfr unsigned int   volatile XMODEND          absolute 0x4A;
sfr unsigned int   volatile YMODSRT          absolute 0x4C;
sfr unsigned int   volatile YMODEND          absolute 0x4E;
sfr unsigned int   volatile XBREV            absolute 0x50;
    const register unsigned short int XB0 = 0;
    sbit  XB0_bit at XBREV.B0;
    const register unsigned short int XB1 = 1;
    sbit  XB1_bit at XBREV.B1;
    const register unsigned short int XB2 = 2;
    sbit  XB2_bit at XBREV.B2;
    const register unsigned short int XB3 = 3;
    sbit  XB3_bit at XBREV.B3;
    const register unsigned short int XB4 = 4;
    sbit  XB4_bit at XBREV.B4;
    const register unsigned short int XB5 = 5;
    sbit  XB5_bit at XBREV.B5;
    const register unsigned short int XB6 = 6;
    sbit  XB6_bit at XBREV.B6;
    const register unsigned short int XB7 = 7;
    sbit  XB7_bit at XBREV.B7;
    const register unsigned short int XB8 = 8;
    sbit  XB8_bit at XBREV.B8;
    const register unsigned short int XB9 = 9;
    sbit  XB9_bit at XBREV.B9;
    const register unsigned short int XB10 = 10;
    sbit  XB10_bit at XBREV.B10;
    const register unsigned short int XB11 = 11;
    sbit  XB11_bit at XBREV.B11;
    const register unsigned short int XB12 = 12;
    sbit  XB12_bit at XBREV.B12;
    const register unsigned short int XB13 = 13;
    sbit  XB13_bit at XBREV.B13;
    const register unsigned short int XB14 = 14;
    sbit  XB14_bit at XBREV.B14;
    const register unsigned short int BREN = 15;
    sbit  BREN_bit at XBREV.B15;

sfr unsigned int   volatile DISICNT          absolute 0x52;
sfr unsigned int   volatile TBLPAG           absolute 0x54;
sfr unsigned int   volatile CTXTSTAT         absolute 0x5A;
sfr unsigned int   volatile TMR1             absolute 0x100;
sfr unsigned int   volatile PR1              absolute 0x102;
sfr unsigned int   volatile T1CON            absolute 0x104;
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
    const register unsigned short int TSIDL = 13;
    sbit  TSIDL_bit at T1CON.B13;
    const register unsigned short int TON = 15;
    sbit  TON_bit at T1CON.B15;

sfr unsigned int   volatile TMR2             absolute 0x106;
sfr unsigned int   volatile TMR3HLD          absolute 0x108;
sfr unsigned int   volatile TMR3             absolute 0x10A;
sfr unsigned int   volatile PR2              absolute 0x10C;
sfr unsigned int   volatile PR3              absolute 0x10E;
sfr unsigned int   volatile T2CON            absolute 0x110;
    const register unsigned short int T32 = 3;
    sbit  T32_bit at T2CON.B3;

sfr unsigned int   volatile T3CON            absolute 0x112;
sfr unsigned int   volatile IC1CON1          absolute 0x140;
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

sfr unsigned int   volatile IC1CON2          absolute 0x142;
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

sfr unsigned int   volatile IC1BUF           absolute 0x144;
sfr unsigned int   volatile IC1TMR           absolute 0x146;
sfr unsigned int   volatile I2C1CON1         absolute 0x200;
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

sfr unsigned int   volatile I2C1CONL         absolute 0x200;
sfr unsigned int   volatile I2C1CON2         absolute 0x202;
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

sfr unsigned int   volatile I2C1CONH         absolute 0x202;
sfr unsigned int   volatile I2C1STAT         absolute 0x204;
    const register unsigned short int TBF = 0;
    sbit  TBF_bit at I2C1STAT.B0;
    const register unsigned short int RBF = 1;
    sbit  RBF_bit at I2C1STAT.B1;
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at I2C1STAT.B2;
    const register unsigned short int S = 3;
    sbit  S_bit at I2C1STAT.B3;
    const register unsigned short int P = 4;
    sbit  P_bit at I2C1STAT.B4;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at I2C1STAT.B5;
    const register unsigned short int I2COV = 6;
    sbit  I2COV_bit at I2C1STAT.B6;
    const register unsigned short int IWCOL = 7;
    sbit  IWCOL_bit at I2C1STAT.B7;
    const register unsigned short int ADD10 = 8;
    sbit  ADD10_bit at I2C1STAT.B8;
    const register unsigned short int GCSTAT = 9;
    sbit  GCSTAT_bit at I2C1STAT.B9;
    const register unsigned short int BCL_I2C1STAT = 10;
    sbit  BCL_I2C1STAT_bit at I2C1STAT.B10;
    const register unsigned short int ACKTIM = 13;
    sbit  ACKTIM_bit at I2C1STAT.B13;
    const register unsigned short int TRSTAT = 14;
    sbit  TRSTAT_bit at I2C1STAT.B14;
    const register unsigned short int ACKSTAT = 15;
    sbit  ACKSTAT_bit at I2C1STAT.B15;

sfr unsigned int   volatile I2C1ADD          absolute 0x206;
sfr unsigned int   volatile I2C1MSK          absolute 0x208;
    const register unsigned short int AMSK0 = 0;
    sbit  AMSK0_bit at I2C1MSK.B0;
    const register unsigned short int AMSK1 = 1;
    sbit  AMSK1_bit at I2C1MSK.B1;
    const register unsigned short int AMSK2 = 2;
    sbit  AMSK2_bit at I2C1MSK.B2;
    const register unsigned short int AMSK3 = 3;
    sbit  AMSK3_bit at I2C1MSK.B3;
    const register unsigned short int AMSK4 = 4;
    sbit  AMSK4_bit at I2C1MSK.B4;
    const register unsigned short int AMSK5 = 5;
    sbit  AMSK5_bit at I2C1MSK.B5;
    const register unsigned short int AMSK6 = 6;
    sbit  AMSK6_bit at I2C1MSK.B6;
    const register unsigned short int AMSK7 = 7;
    sbit  AMSK7_bit at I2C1MSK.B7;
    const register unsigned short int AMSK8 = 8;
    sbit  AMSK8_bit at I2C1MSK.B8;
    const register unsigned short int AMSK9 = 9;
    sbit  AMSK9_bit at I2C1MSK.B9;

sfr unsigned int            I2C1BRG          absolute 0x20A;
sfr unsigned int   volatile I2C1TRN          absolute 0x20C;
sfr unsigned int   volatile I2C1RCV          absolute 0x20E;
sfr unsigned int   volatile U1MODE           absolute 0x220;
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

sfr unsigned int   volatile U1STA            absolute 0x222;
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
    const register unsigned short int UTXISEL0 = 13;
    sbit  UTXISEL0_bit at U1STA.B13;
    const register unsigned short int UTXINV = 14;
    sbit  UTXINV_bit at U1STA.B14;
    const register unsigned short int UTXISEL1 = 15;
    sbit  UTXISEL1_bit at U1STA.B15;
    const register unsigned short int TXINV = 14;
    sbit  TXINV_bit at U1STA.B14;

sfr unsigned int            U1TXREG          absolute 0x224;
sfr unsigned int   volatile U1RXREG          absolute 0x226;
sfr unsigned int            U1BRG            absolute 0x228;
sfr unsigned int   volatile SPI1STAT         absolute 0x240;
    const register unsigned short int SPIRBF = 0;
    sbit  SPIRBF_bit at SPI1STAT.B0;
    const register unsigned short int SPITBF = 1;
    sbit  SPITBF_bit at SPI1STAT.B1;
    const register unsigned short int SISEL0 = 2;
    sbit  SISEL0_bit at SPI1STAT.B2;
    const register unsigned short int SISEL1 = 3;
    sbit  SISEL1_bit at SPI1STAT.B3;
    const register unsigned short int SISEL2 = 4;
    sbit  SISEL2_bit at SPI1STAT.B4;
    const register unsigned short int SRXMPT = 5;
    sbit  SRXMPT_bit at SPI1STAT.B5;
    const register unsigned short int SPIROV = 6;
    sbit  SPIROV_bit at SPI1STAT.B6;
    const register unsigned short int SRMPT = 7;
    sbit  SRMPT_bit at SPI1STAT.B7;
    const register unsigned short int SPIBEC0 = 8;
    sbit  SPIBEC0_bit at SPI1STAT.B8;
    const register unsigned short int SPIBEC1 = 9;
    sbit  SPIBEC1_bit at SPI1STAT.B9;
    const register unsigned short int SPIBEC2 = 10;
    sbit  SPIBEC2_bit at SPI1STAT.B10;
    const register unsigned short int SPISIDL = 13;
    sbit  SPISIDL_bit at SPI1STAT.B13;
    const register unsigned short int SPIEN = 15;
    sbit  SPIEN_bit at SPI1STAT.B15;

sfr unsigned int   volatile SPI1CON1         absolute 0x242;
    const register unsigned short int PPRE0 = 0;
    sbit  PPRE0_bit at SPI1CON1.B0;
    const register unsigned short int PPRE1 = 1;
    sbit  PPRE1_bit at SPI1CON1.B1;
    const register unsigned short int SPRE0 = 2;
    sbit  SPRE0_bit at SPI1CON1.B2;
    const register unsigned short int SPRE1 = 3;
    sbit  SPRE1_bit at SPI1CON1.B3;
    const register unsigned short int SPRE2 = 4;
    sbit  SPRE2_bit at SPI1CON1.B4;
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
    const register unsigned short int DISSDO = 11;
    sbit  DISSDO_bit at SPI1CON1.B11;
    const register unsigned short int DISSCK = 12;
    sbit  DISSCK_bit at SPI1CON1.B12;

sfr unsigned int   volatile SPI1CON2         absolute 0x244;
    const register unsigned short int SPIBEN = 0;
    sbit  SPIBEN_bit at SPI1CON2.B0;
    const register unsigned short int SPIFE = 1;
    sbit  SPIFE_bit at SPI1CON2.B1;
    const register unsigned short int SPIFPOL = 13;
    sbit  SPIFPOL_bit at SPI1CON2.B13;
    const register unsigned short int SPIFSD = 14;
    sbit  SPIFSD_bit at SPI1CON2.B14;
    const register unsigned short int FRMEN = 15;
    sbit  FRMEN_bit at SPI1CON2.B15;
    const register unsigned short int FRMDLY = 1;
    sbit  FRMDLY_bit at SPI1CON2.B1;
    const register unsigned short int FRMPOL = 13;
    sbit  FRMPOL_bit at SPI1CON2.B13;

sfr unsigned int   volatile SPI1BUF          absolute 0x248;
sfr unsigned int   volatile ADCON1L          absolute 0x300;
    const register unsigned short int PUMPEN = 12;
    sbit  PUMPEN_bit at ADCON1L.B12;
    const register unsigned short int ADSIDL = 13;
    sbit  ADSIDL_bit at ADCON1L.B13;
    const register unsigned short int ADON = 15;
    sbit  ADON_bit at ADCON1L.B15;

sfr unsigned int   volatile ADCON1H          absolute 0x302;
    const register unsigned short int SHRRES0 = 5;
    sbit  SHRRES0_bit at ADCON1H.B5;
    const register unsigned short int SHRRES1 = 6;
    sbit  SHRRES1_bit at ADCON1H.B6;
    const register unsigned short int FORM_ = 7;
    sbit  FORM_bit at ADCON1H.B7;

sfr unsigned int   volatile ADCON2L          absolute 0x304;
    const register unsigned short int SHRADCS0 = 0;
    sbit  SHRADCS0_bit at ADCON2L.B0;
    const register unsigned short int SHRADCS1 = 1;
    sbit  SHRADCS1_bit at ADCON2L.B1;
    const register unsigned short int SHRADCS2 = 2;
    sbit  SHRADCS2_bit at ADCON2L.B2;
    const register unsigned short int SHRADCS3 = 3;
    sbit  SHRADCS3_bit at ADCON2L.B3;
    const register unsigned short int SHRADCS4 = 4;
    sbit  SHRADCS4_bit at ADCON2L.B4;
    const register unsigned short int SHRADCS5 = 5;
    sbit  SHRADCS5_bit at ADCON2L.B5;
    const register unsigned short int SHRADCS6 = 6;
    sbit  SHRADCS6_bit at ADCON2L.B6;
    const register unsigned short int SHREISEL0 = 8;
    sbit  SHREISEL0_bit at ADCON2L.B8;
    const register unsigned short int SHREISEL1 = 9;
    sbit  SHREISEL1_bit at ADCON2L.B9;
    const register unsigned short int SHREISEL2 = 10;
    sbit  SHREISEL2_bit at ADCON2L.B10;
    const register unsigned short int EIEN = 12;
    sbit  EIEN_bit at ADCON2L.B12;
    const register unsigned short int REFERCIE = 14;
    sbit  REFERCIE_bit at ADCON2L.B14;
    const register unsigned short int REFCIE = 15;
    sbit  REFCIE_bit at ADCON2L.B15;

sfr unsigned int   volatile ADCON2H          absolute 0x306;
    const register unsigned short int SHRSAMC0 = 0;
    sbit  SHRSAMC0_bit at ADCON2H.B0;
    const register unsigned short int SHRSAMC1 = 1;
    sbit  SHRSAMC1_bit at ADCON2H.B1;
    const register unsigned short int SHRSAMC2 = 2;
    sbit  SHRSAMC2_bit at ADCON2H.B2;
    const register unsigned short int SHRSAMC3 = 3;
    sbit  SHRSAMC3_bit at ADCON2H.B3;
    const register unsigned short int SHRSAMC4 = 4;
    sbit  SHRSAMC4_bit at ADCON2H.B4;
    const register unsigned short int SHRSAMC5 = 5;
    sbit  SHRSAMC5_bit at ADCON2H.B5;
    const register unsigned short int SHRSAMC6 = 6;
    sbit  SHRSAMC6_bit at ADCON2H.B6;
    const register unsigned short int SHRSAMC7 = 7;
    sbit  SHRSAMC7_bit at ADCON2H.B7;
    const register unsigned short int SHRSAMC8 = 8;
    sbit  SHRSAMC8_bit at ADCON2H.B8;
    const register unsigned short int SHRSAMC9 = 9;
    sbit  SHRSAMC9_bit at ADCON2H.B9;
    const register unsigned short int REFERR = 14;
    sbit  REFERR_bit at ADCON2H.B14;
    const register unsigned short int REFRDY = 15;
    sbit  REFRDY_bit at ADCON2H.B15;

sfr unsigned int   volatile ADCON3L          absolute 0x308;
    const register unsigned short int CNVCHSEL0 = 0;
    sbit  CNVCHSEL0_bit at ADCON3L.B0;
    const register unsigned short int CNVCHSEL1 = 1;
    sbit  CNVCHSEL1_bit at ADCON3L.B1;
    const register unsigned short int CNVCHSEL2 = 2;
    sbit  CNVCHSEL2_bit at ADCON3L.B2;
    const register unsigned short int CNVCHSEL3 = 3;
    sbit  CNVCHSEL3_bit at ADCON3L.B3;
    const register unsigned short int CNVCHSEL4 = 4;
    sbit  CNVCHSEL4_bit at ADCON3L.B4;
    const register unsigned short int CNVCHSEL5 = 5;
    sbit  CNVCHSEL5_bit at ADCON3L.B5;
    const register unsigned short int SWCTRG = 6;
    sbit  SWCTRG_bit at ADCON3L.B6;
    const register unsigned short int SWLCTRG = 7;
    sbit  SWLCTRG_bit at ADCON3L.B7;
    const register unsigned short int CNVRTCH = 8;
    sbit  CNVRTCH_bit at ADCON3L.B8;
    const register unsigned short int SHRSAMP = 9;
    sbit  SHRSAMP_bit at ADCON3L.B9;
    const register unsigned short int SUSPRDY = 10;
    sbit  SUSPRDY_bit at ADCON3L.B10;
    const register unsigned short int SUSPCIE = 11;
    sbit  SUSPCIE_bit at ADCON3L.B11;
    const register unsigned short int SUSPEND = 12;
    sbit  SUSPEND_bit at ADCON3L.B12;
    const register unsigned short int REFSEL0 = 13;
    sbit  REFSEL0_bit at ADCON3L.B13;
    const register unsigned short int REFSEL1 = 14;
    sbit  REFSEL1_bit at ADCON3L.B14;
    const register unsigned short int REFSEL2 = 15;
    sbit  REFSEL2_bit at ADCON3L.B15;

sfr unsigned int   volatile ADCON3H          absolute 0x30A;
    const register unsigned short int C0EN = 0;
    sbit  C0EN_bit at ADCON3H.B0;
    const register unsigned short int C1EN = 1;
    sbit  C1EN_bit at ADCON3H.B1;
    const register unsigned short int SHREN = 7;
    sbit  SHREN_bit at ADCON3H.B7;
    const register unsigned short int CLKDIV0 = 8;
    sbit  CLKDIV0_bit at ADCON3H.B8;
    const register unsigned short int CLKDIV1 = 9;
    sbit  CLKDIV1_bit at ADCON3H.B9;
    const register unsigned short int CLKDIV2 = 10;
    sbit  CLKDIV2_bit at ADCON3H.B10;
    const register unsigned short int CLKDIV3 = 11;
    sbit  CLKDIV3_bit at ADCON3H.B11;
    const register unsigned short int CLKDIV4 = 12;
    sbit  CLKDIV4_bit at ADCON3H.B12;
    const register unsigned short int CLKDIV5 = 13;
    sbit  CLKDIV5_bit at ADCON3H.B13;
    const register unsigned short int CLKSEL0 = 14;
    sbit  CLKSEL0_bit at ADCON3H.B14;
    const register unsigned short int CLKSEL1 = 15;
    sbit  CLKSEL1_bit at ADCON3H.B15;

sfr unsigned int   volatile ADCON4L          absolute 0x30C;
    const register unsigned short int SAMC0EN = 0;
    sbit  SAMC0EN_bit at ADCON4L.B0;
    const register unsigned short int SAMC1EN = 1;
    sbit  SAMC1EN_bit at ADCON4L.B1;
    const register unsigned short int SYNCTRG0 = 8;
    sbit  SYNCTRG0_bit at ADCON4L.B8;
    const register unsigned short int SYNCTRG1 = 9;
    sbit  SYNCTRG1_bit at ADCON4L.B9;

sfr unsigned int   volatile ADCON4H          absolute 0x30E;
    const register unsigned short int C0CHS0 = 0;
    sbit  C0CHS0_bit at ADCON4H.B0;
    const register unsigned short int C0CHS1 = 1;
    sbit  C0CHS1_bit at ADCON4H.B1;
    const register unsigned short int C1CHS0 = 2;
    sbit  C1CHS0_bit at ADCON4H.B2;
    const register unsigned short int C1CHS1 = 3;
    sbit  C1CHS1_bit at ADCON4H.B3;

sfr unsigned int   volatile ADMOD0L          absolute 0x310;
    const register unsigned short int SIGN0 = 0;
    sbit  SIGN0_bit at ADMOD0L.B0;
    const register unsigned short int DIFF0 = 1;
    sbit  DIFF0_bit at ADMOD0L.B1;
    const register unsigned short int SIGN1 = 2;
    sbit  SIGN1_bit at ADMOD0L.B2;
    const register unsigned short int DIFF1 = 3;
    sbit  DIFF1_bit at ADMOD0L.B3;
    const register unsigned short int SIGN2 = 4;
    sbit  SIGN2_bit at ADMOD0L.B4;
    const register unsigned short int SIGN3 = 6;
    sbit  SIGN3_bit at ADMOD0L.B6;
    const register unsigned short int SIGN4 = 8;
    sbit  SIGN4_bit at ADMOD0L.B8;
    const register unsigned short int SIGN5 = 10;
    sbit  SIGN5_bit at ADMOD0L.B10;
    const register unsigned short int SIGN6 = 12;
    sbit  SIGN6_bit at ADMOD0L.B12;
    const register unsigned short int SIGN7 = 14;
    sbit  SIGN7_bit at ADMOD0L.B14;

sfr unsigned int   volatile ADMOD0H          absolute 0x312;
    const register unsigned short int SIGN8 = 0;
    sbit  SIGN8_bit at ADMOD0H.B0;
    const register unsigned short int SIGN9 = 2;
    sbit  SIGN9_bit at ADMOD0H.B2;
    const register unsigned short int SIGN10 = 4;
    sbit  SIGN10_bit at ADMOD0H.B4;
    const register unsigned short int SIGN11 = 6;
    sbit  SIGN11_bit at ADMOD0H.B6;
    const register unsigned short int SIGN14 = 12;
    sbit  SIGN14_bit at ADMOD0H.B12;

sfr unsigned int   volatile ADIEL            absolute 0x320;
    const register unsigned short int IE0 = 0;
    sbit  IE0_bit at ADIEL.B0;
    const register unsigned short int IE1 = 1;
    sbit  IE1_bit at ADIEL.B1;
    const register unsigned short int IE2 = 2;
    sbit  IE2_bit at ADIEL.B2;
    const register unsigned short int IE3 = 3;
    sbit  IE3_bit at ADIEL.B3;
    const register unsigned short int IE4 = 4;
    sbit  IE4_bit at ADIEL.B4;
    const register unsigned short int IE5 = 5;
    sbit  IE5_bit at ADIEL.B5;
    const register unsigned short int IE6 = 6;
    sbit  IE6_bit at ADIEL.B6;
    const register unsigned short int IE7 = 7;
    sbit  IE7_bit at ADIEL.B7;
    const register unsigned short int IE8 = 8;
    sbit  IE8_bit at ADIEL.B8;
    const register unsigned short int IE9 = 9;
    sbit  IE9_bit at ADIEL.B9;
    const register unsigned short int IE10 = 10;
    sbit  IE10_bit at ADIEL.B10;
    const register unsigned short int IE11 = 11;
    sbit  IE11_bit at ADIEL.B11;
    const register unsigned short int IE14 = 14;
    sbit  IE14_bit at ADIEL.B14;

sfr unsigned int   volatile ADSTATL          absolute 0x330;
    const register unsigned short int AN0RDY = 0;
    sbit  AN0RDY_bit at ADSTATL.B0;
    const register unsigned short int AN1RDY = 1;
    sbit  AN1RDY_bit at ADSTATL.B1;
    const register unsigned short int AN2RDY = 2;
    sbit  AN2RDY_bit at ADSTATL.B2;
    const register unsigned short int AN3RDY = 3;
    sbit  AN3RDY_bit at ADSTATL.B3;
    const register unsigned short int AN4RDY = 4;
    sbit  AN4RDY_bit at ADSTATL.B4;
    const register unsigned short int AN5RDY = 5;
    sbit  AN5RDY_bit at ADSTATL.B5;
    const register unsigned short int AN6RDY = 6;
    sbit  AN6RDY_bit at ADSTATL.B6;
    const register unsigned short int AN7RDY = 7;
    sbit  AN7RDY_bit at ADSTATL.B7;
    const register unsigned short int AN8RDY = 8;
    sbit  AN8RDY_bit at ADSTATL.B8;
    const register unsigned short int AN9RDY = 9;
    sbit  AN9RDY_bit at ADSTATL.B9;
    const register unsigned short int AN10RDY = 10;
    sbit  AN10RDY_bit at ADSTATL.B10;
    const register unsigned short int AN11RDY = 11;
    sbit  AN11RDY_bit at ADSTATL.B11;
    const register unsigned short int AN14RDY = 14;
    sbit  AN14RDY_bit at ADSTATL.B14;

sfr unsigned int   volatile ADCMP0ENL        absolute 0x338;
    const register unsigned short int CMPEN0 = 0;
    sbit  CMPEN0_bit at ADCMP0ENL.B0;
    const register unsigned short int CMPEN1 = 1;
    sbit  CMPEN1_bit at ADCMP0ENL.B1;
    const register unsigned short int CMPEN2 = 2;
    sbit  CMPEN2_bit at ADCMP0ENL.B2;
    const register unsigned short int CMPEN3 = 3;
    sbit  CMPEN3_bit at ADCMP0ENL.B3;
    const register unsigned short int CMPEN4 = 4;
    sbit  CMPEN4_bit at ADCMP0ENL.B4;
    const register unsigned short int CMPEN5 = 5;
    sbit  CMPEN5_bit at ADCMP0ENL.B5;
    const register unsigned short int CMPEN6 = 6;
    sbit  CMPEN6_bit at ADCMP0ENL.B6;
    const register unsigned short int CMPEN7 = 7;
    sbit  CMPEN7_bit at ADCMP0ENL.B7;
    const register unsigned short int CMPEN8 = 8;
    sbit  CMPEN8_bit at ADCMP0ENL.B8;
    const register unsigned short int CMPEN9 = 9;
    sbit  CMPEN9_bit at ADCMP0ENL.B9;
    const register unsigned short int CMPEN10 = 10;
    sbit  CMPEN10_bit at ADCMP0ENL.B10;
    const register unsigned short int CMPEN11 = 11;
    sbit  CMPEN11_bit at ADCMP0ENL.B11;
    const register unsigned short int CMPEN14 = 14;
    sbit  CMPEN14_bit at ADCMP0ENL.B14;

sfr unsigned int   volatile ADCMP0LO         absolute 0x33C;
sfr unsigned int   volatile ADCMP0HI         absolute 0x33E;
sfr unsigned int   volatile ADCMP1ENL        absolute 0x340;
sfr unsigned int   volatile ADCMP1LO         absolute 0x344;
sfr unsigned int   volatile ADCMP1HI         absolute 0x346;
sfr unsigned int   volatile ADFL0DAT         absolute 0x368;
sfr unsigned int   volatile ADFL0CON         absolute 0x36A;
    const register unsigned short int FLCHSEL0 = 0;
    sbit  FLCHSEL0_bit at ADFL0CON.B0;
    const register unsigned short int FLCHSEL1 = 1;
    sbit  FLCHSEL1_bit at ADFL0CON.B1;
    const register unsigned short int FLCHSEL2 = 2;
    sbit  FLCHSEL2_bit at ADFL0CON.B2;
    const register unsigned short int FLCHSEL3 = 3;
    sbit  FLCHSEL3_bit at ADFL0CON.B3;
    const register unsigned short int FLCHSEL4 = 4;
    sbit  FLCHSEL4_bit at ADFL0CON.B4;
    const register unsigned short int RDY = 8;
    sbit  RDY_bit at ADFL0CON.B8;
    const register unsigned short int IE_ADFL0CON = 9;
    sbit  IE_ADFL0CON_bit at ADFL0CON.B9;
    const register unsigned short int OVRSAM0 = 10;
    sbit  OVRSAM0_bit at ADFL0CON.B10;
    const register unsigned short int OVRSAM1 = 11;
    sbit  OVRSAM1_bit at ADFL0CON.B11;
    const register unsigned short int OVRSAM2 = 12;
    sbit  OVRSAM2_bit at ADFL0CON.B12;
    const register unsigned short int FLEN = 15;
    sbit  FLEN_bit at ADFL0CON.B15;

sfr unsigned int   volatile ADTRIG0L         absolute 0x380;
    const register unsigned short int TRIGSRC00 = 0;
    sbit  TRIGSRC00_bit at ADTRIG0L.B0;
    const register unsigned short int TRIGSRC01 = 1;
    sbit  TRIGSRC01_bit at ADTRIG0L.B1;
    const register unsigned short int TRIGSRC02 = 2;
    sbit  TRIGSRC02_bit at ADTRIG0L.B2;
    const register unsigned short int TRIGSRC03 = 3;
    sbit  TRIGSRC03_bit at ADTRIG0L.B3;
    const register unsigned short int TRIGSRC04 = 4;
    sbit  TRIGSRC04_bit at ADTRIG0L.B4;
    const register unsigned short int TRGSRC10_ADTRIG0L = 8;
    sbit  TRGSRC10_ADTRIG0L_bit at ADTRIG0L.B8;
    const register unsigned short int TRGSRC11_ADTRIG0L = 9;
    sbit  TRGSRC11_ADTRIG0L_bit at ADTRIG0L.B9;
    const register unsigned short int TRGSRC12 = 10;
    sbit  TRGSRC12_bit at ADTRIG0L.B10;
    const register unsigned short int TRGSRC13 = 11;
    sbit  TRGSRC13_bit at ADTRIG0L.B11;
    const register unsigned short int TRGSRC14_ADTRIG0L = 12;
    sbit  TRGSRC14_ADTRIG0L_bit at ADTRIG0L.B12;

sfr unsigned int   volatile ADTRIG0H         absolute 0x382;
    const register unsigned short int TRIGSRC20 = 0;
    sbit  TRIGSRC20_bit at ADTRIG0H.B0;
    const register unsigned short int TRIGSRC21 = 1;
    sbit  TRIGSRC21_bit at ADTRIG0H.B1;
    const register unsigned short int TRIGSRC22 = 2;
    sbit  TRIGSRC22_bit at ADTRIG0H.B2;
    const register unsigned short int TRIGSRC23 = 3;
    sbit  TRIGSRC23_bit at ADTRIG0H.B3;
    const register unsigned short int TRIGSRC24 = 4;
    sbit  TRIGSRC24_bit at ADTRIG0H.B4;
    const register unsigned short int TRGSRC30 = 8;
    sbit  TRGSRC30_bit at ADTRIG0H.B8;
    const register unsigned short int TRGSRC31 = 9;
    sbit  TRGSRC31_bit at ADTRIG0H.B9;
    const register unsigned short int TRGSRC32 = 10;
    sbit  TRGSRC32_bit at ADTRIG0H.B10;
    const register unsigned short int TRGSRC33 = 11;
    sbit  TRGSRC33_bit at ADTRIG0H.B11;
    const register unsigned short int TRGSRC34 = 12;
    sbit  TRGSRC34_bit at ADTRIG0H.B12;

sfr unsigned int   volatile ADTRIG1L         absolute 0x384;
    const register unsigned short int TRIGSRC40 = 0;
    sbit  TRIGSRC40_bit at ADTRIG1L.B0;
    const register unsigned short int TRIGSRC41 = 1;
    sbit  TRIGSRC41_bit at ADTRIG1L.B1;
    const register unsigned short int TRIGSRC42 = 2;
    sbit  TRIGSRC42_bit at ADTRIG1L.B2;
    const register unsigned short int TRIGSRC43 = 3;
    sbit  TRIGSRC43_bit at ADTRIG1L.B3;
    const register unsigned short int TRIGSRC44 = 4;
    sbit  TRIGSRC44_bit at ADTRIG1L.B4;
    const register unsigned short int TRGSRC50 = 8;
    sbit  TRGSRC50_bit at ADTRIG1L.B8;
    const register unsigned short int TRGSRC51 = 9;
    sbit  TRGSRC51_bit at ADTRIG1L.B9;
    const register unsigned short int TRGSRC52 = 10;
    sbit  TRGSRC52_bit at ADTRIG1L.B10;
    const register unsigned short int TRGSRC53 = 11;
    sbit  TRGSRC53_bit at ADTRIG1L.B11;
    const register unsigned short int TRGSRC54 = 12;
    sbit  TRGSRC54_bit at ADTRIG1L.B12;

sfr unsigned int   volatile ADTRIG1H         absolute 0x386;
    const register unsigned short int TRIGSRC60 = 0;
    sbit  TRIGSRC60_bit at ADTRIG1H.B0;
    const register unsigned short int TRIGSRC61 = 1;
    sbit  TRIGSRC61_bit at ADTRIG1H.B1;
    const register unsigned short int TRIGSRC62 = 2;
    sbit  TRIGSRC62_bit at ADTRIG1H.B2;
    const register unsigned short int TRIGSRC63 = 3;
    sbit  TRIGSRC63_bit at ADTRIG1H.B3;
    const register unsigned short int TRIGSRC64 = 4;
    sbit  TRIGSRC64_bit at ADTRIG1H.B4;
    const register unsigned short int TRGSRC70 = 8;
    sbit  TRGSRC70_bit at ADTRIG1H.B8;
    const register unsigned short int TRGSRC71 = 9;
    sbit  TRGSRC71_bit at ADTRIG1H.B9;
    const register unsigned short int TRGSRC72 = 10;
    sbit  TRGSRC72_bit at ADTRIG1H.B10;
    const register unsigned short int TRGSRC73 = 11;
    sbit  TRGSRC73_bit at ADTRIG1H.B11;
    const register unsigned short int TRGSRC74 = 12;
    sbit  TRGSRC74_bit at ADTRIG1H.B12;

sfr unsigned int   volatile ADTRIG2L         absolute 0x388;
    const register unsigned short int TRIGSRC80 = 0;
    sbit  TRIGSRC80_bit at ADTRIG2L.B0;
    const register unsigned short int TRIGSRC81 = 1;
    sbit  TRIGSRC81_bit at ADTRIG2L.B1;
    const register unsigned short int TRIGSRC82 = 2;
    sbit  TRIGSRC82_bit at ADTRIG2L.B2;
    const register unsigned short int TRIGSRC83 = 3;
    sbit  TRIGSRC83_bit at ADTRIG2L.B3;
    const register unsigned short int TRIGSRC84 = 4;
    sbit  TRIGSRC84_bit at ADTRIG2L.B4;
    const register unsigned short int TRGSRC90 = 8;
    sbit  TRGSRC90_bit at ADTRIG2L.B8;
    const register unsigned short int TRGSRC91 = 9;
    sbit  TRGSRC91_bit at ADTRIG2L.B9;
    const register unsigned short int TRGSRC92 = 10;
    sbit  TRGSRC92_bit at ADTRIG2L.B10;
    const register unsigned short int TRGSRC93 = 11;
    sbit  TRGSRC93_bit at ADTRIG2L.B11;
    const register unsigned short int TRGSRC94 = 12;
    sbit  TRGSRC94_bit at ADTRIG2L.B12;

sfr unsigned int   volatile ADTRIG2H         absolute 0x38A;
    const register unsigned short int TRIGSRC100 = 0;
    sbit  TRIGSRC100_bit at ADTRIG2H.B0;
    const register unsigned short int TRIGSRC101 = 1;
    sbit  TRIGSRC101_bit at ADTRIG2H.B1;
    const register unsigned short int TRIGSRC102 = 2;
    sbit  TRIGSRC102_bit at ADTRIG2H.B2;
    const register unsigned short int TRIGSRC103 = 3;
    sbit  TRIGSRC103_bit at ADTRIG2H.B3;
    const register unsigned short int TRIGSRC104 = 4;
    sbit  TRIGSRC104_bit at ADTRIG2H.B4;
    const register unsigned short int TRGSRC110 = 8;
    sbit  TRGSRC110_bit at ADTRIG2H.B8;
    const register unsigned short int TRGSRC111 = 9;
    sbit  TRGSRC111_bit at ADTRIG2H.B9;
    const register unsigned short int TRGSRC112 = 10;
    sbit  TRGSRC112_bit at ADTRIG2H.B10;
    const register unsigned short int TRGSRC113 = 11;
    sbit  TRGSRC113_bit at ADTRIG2H.B11;
    const register unsigned short int TRGSRC114 = 12;
    sbit  TRGSRC114_bit at ADTRIG2H.B12;

sfr unsigned int   volatile ADTRIG3L         absolute 0x38C;
sfr unsigned int   volatile ADTRIG3H         absolute 0x38E;
    const register unsigned short int TRIGSRC140 = 0;
    sbit  TRIGSRC140_bit at ADTRIG3H.B0;
    const register unsigned short int TRIGSRC141 = 1;
    sbit  TRIGSRC141_bit at ADTRIG3H.B1;
    const register unsigned short int TRIGSRC142 = 2;
    sbit  TRIGSRC142_bit at ADTRIG3H.B2;
    const register unsigned short int TRIGSRC143 = 3;
    sbit  TRIGSRC143_bit at ADTRIG3H.B3;
    const register unsigned short int TRIGSRC144 = 4;
    sbit  TRIGSRC144_bit at ADTRIG3H.B4;

sfr unsigned int   volatile ADCMP0CON        absolute 0x3A0;
    const register unsigned short int LOLO = 0;
    sbit  LOLO_bit at ADCMP0CON.B0;
    const register unsigned short int LOHI = 1;
    sbit  LOHI_bit at ADCMP0CON.B1;
    const register unsigned short int HILO = 2;
    sbit  HILO_bit at ADCMP0CON.B2;
    const register unsigned short int HIHI = 3;
    sbit  HIHI_bit at ADCMP0CON.B3;
    const register unsigned short int BTWN = 4;
    sbit  BTWN_bit at ADCMP0CON.B4;
    const register unsigned short int STAT = 5;
    sbit  STAT_bit at ADCMP0CON.B5;
    const register unsigned short int IE_ADCMP0CON = 6;
    sbit  IE_ADCMP0CON_bit at ADCMP0CON.B6;
    const register unsigned short int CMPEN = 7;
    sbit  CMPEN_bit at ADCMP0CON.B7;
    const register unsigned short int CHNL0 = 8;
    sbit  CHNL0_bit at ADCMP0CON.B8;
    const register unsigned short int CHNL1 = 9;
    sbit  CHNL1_bit at ADCMP0CON.B9;
    const register unsigned short int CHNL2 = 10;
    sbit  CHNL2_bit at ADCMP0CON.B10;
    const register unsigned short int CHNL3 = 11;
    sbit  CHNL3_bit at ADCMP0CON.B11;
    const register unsigned short int CHNL4 = 12;
    sbit  CHNL4_bit at ADCMP0CON.B12;

sfr unsigned int   volatile ADCMP1CON        absolute 0x3A4;
    const register unsigned short int IE_ADCMP1CON = 6;
    sbit  IE_ADCMP1CON_bit at ADCMP1CON.B6;

sfr unsigned int   volatile ADLVLTRGL        absolute 0x3D0;
    const register unsigned short int LVLEN0 = 0;
    sbit  LVLEN0_bit at ADLVLTRGL.B0;
    const register unsigned short int LVLEN1 = 1;
    sbit  LVLEN1_bit at ADLVLTRGL.B1;
    const register unsigned short int LVLEN2 = 2;
    sbit  LVLEN2_bit at ADLVLTRGL.B2;
    const register unsigned short int LVLEN3 = 3;
    sbit  LVLEN3_bit at ADLVLTRGL.B3;
    const register unsigned short int LVLEN4 = 4;
    sbit  LVLEN4_bit at ADLVLTRGL.B4;
    const register unsigned short int LVLEN5 = 5;
    sbit  LVLEN5_bit at ADLVLTRGL.B5;
    const register unsigned short int LVLEN6 = 6;
    sbit  LVLEN6_bit at ADLVLTRGL.B6;
    const register unsigned short int LVLEN7 = 7;
    sbit  LVLEN7_bit at ADLVLTRGL.B7;
    const register unsigned short int LVLEN8 = 8;
    sbit  LVLEN8_bit at ADLVLTRGL.B8;
    const register unsigned short int LVLEN9 = 9;
    sbit  LVLEN9_bit at ADLVLTRGL.B9;
    const register unsigned short int LVLEN10 = 10;
    sbit  LVLEN10_bit at ADLVLTRGL.B10;
    const register unsigned short int LVLEN11 = 11;
    sbit  LVLEN11_bit at ADLVLTRGL.B11;
    const register unsigned short int LVLEN14 = 14;
    sbit  LVLEN14_bit at ADLVLTRGL.B14;

sfr unsigned int   volatile ADCORE0L         absolute 0x3D4;
    const register unsigned short int SAMC0 = 0;
    sbit  SAMC0_bit at ADCORE0L.B0;
    const register unsigned short int SAMC1 = 1;
    sbit  SAMC1_bit at ADCORE0L.B1;
    const register unsigned short int SAMC2 = 2;
    sbit  SAMC2_bit at ADCORE0L.B2;
    const register unsigned short int SAMC3 = 3;
    sbit  SAMC3_bit at ADCORE0L.B3;
    const register unsigned short int SAMC4 = 4;
    sbit  SAMC4_bit at ADCORE0L.B4;
    const register unsigned short int SAMC5 = 5;
    sbit  SAMC5_bit at ADCORE0L.B5;
    const register unsigned short int SAMC6 = 6;
    sbit  SAMC6_bit at ADCORE0L.B6;
    const register unsigned short int SAMC7 = 7;
    sbit  SAMC7_bit at ADCORE0L.B7;
    const register unsigned short int SAMC8 = 8;
    sbit  SAMC8_bit at ADCORE0L.B8;
    const register unsigned short int SAMC9 = 9;
    sbit  SAMC9_bit at ADCORE0L.B9;

sfr unsigned int   volatile ADCORE0H         absolute 0x3D6;
    const register unsigned short int ADCS0 = 0;
    sbit  ADCS0_bit at ADCORE0H.B0;
    const register unsigned short int ADCS1 = 1;
    sbit  ADCS1_bit at ADCORE0H.B1;
    const register unsigned short int ADCS2 = 2;
    sbit  ADCS2_bit at ADCORE0H.B2;
    const register unsigned short int ADCS3 = 3;
    sbit  ADCS3_bit at ADCORE0H.B3;
    const register unsigned short int ADCS4 = 4;
    sbit  ADCS4_bit at ADCORE0H.B4;
    const register unsigned short int ADCS5 = 5;
    sbit  ADCS5_bit at ADCORE0H.B5;
    const register unsigned short int ADCS6 = 6;
    sbit  ADCS6_bit at ADCORE0H.B6;
    const register unsigned short int RES0 = 8;
    sbit  RES0_bit at ADCORE0H.B8;
    const register unsigned short int RES1 = 9;
    sbit  RES1_bit at ADCORE0H.B9;
    const register unsigned short int EISEL0 = 10;
    sbit  EISEL0_bit at ADCORE0H.B10;
    const register unsigned short int EISEL1 = 11;
    sbit  EISEL1_bit at ADCORE0H.B11;
    const register unsigned short int EISEL2 = 12;
    sbit  EISEL2_bit at ADCORE0H.B12;

sfr unsigned int   volatile ADCORE1L         absolute 0x3D8;
sfr unsigned int   volatile ADCORE1H         absolute 0x3DA;
sfr unsigned int   volatile ADEIEL           absolute 0x3F0;
    const register unsigned short int EIEN0 = 0;
    sbit  EIEN0_bit at ADEIEL.B0;
    const register unsigned short int EIEN1 = 1;
    sbit  EIEN1_bit at ADEIEL.B1;
    const register unsigned short int EIEN2 = 2;
    sbit  EIEN2_bit at ADEIEL.B2;
    const register unsigned short int EIEN3 = 3;
    sbit  EIEN3_bit at ADEIEL.B3;
    const register unsigned short int EIEN4 = 4;
    sbit  EIEN4_bit at ADEIEL.B4;
    const register unsigned short int EIEN5 = 5;
    sbit  EIEN5_bit at ADEIEL.B5;
    const register unsigned short int EIEN6 = 6;
    sbit  EIEN6_bit at ADEIEL.B6;
    const register unsigned short int EIEN7 = 7;
    sbit  EIEN7_bit at ADEIEL.B7;
    const register unsigned short int EIEN8 = 8;
    sbit  EIEN8_bit at ADEIEL.B8;
    const register unsigned short int EIEN9 = 9;
    sbit  EIEN9_bit at ADEIEL.B9;
    const register unsigned short int EIEN10 = 10;
    sbit  EIEN10_bit at ADEIEL.B10;
    const register unsigned short int EIEN11 = 11;
    sbit  EIEN11_bit at ADEIEL.B11;
    const register unsigned short int EIEN14 = 14;
    sbit  EIEN14_bit at ADEIEL.B14;

sfr unsigned int   volatile ADEISTATL        absolute 0x3F8;
    const register unsigned short int EISTAT0 = 0;
    sbit  EISTAT0_bit at ADEISTATL.B0;
    const register unsigned short int EISTAT1 = 1;
    sbit  EISTAT1_bit at ADEISTATL.B1;
    const register unsigned short int EISTAT2 = 2;
    sbit  EISTAT2_bit at ADEISTATL.B2;
    const register unsigned short int EISTAT3 = 3;
    sbit  EISTAT3_bit at ADEISTATL.B3;
    const register unsigned short int EISTAT4 = 4;
    sbit  EISTAT4_bit at ADEISTATL.B4;
    const register unsigned short int EISTAT5 = 5;
    sbit  EISTAT5_bit at ADEISTATL.B5;
    const register unsigned short int EISTAT6 = 6;
    sbit  EISTAT6_bit at ADEISTATL.B6;
    const register unsigned short int EISTAT7 = 7;
    sbit  EISTAT7_bit at ADEISTATL.B7;
    const register unsigned short int EISTAT8 = 8;
    sbit  EISTAT8_bit at ADEISTATL.B8;
    const register unsigned short int EISTAT9 = 9;
    sbit  EISTAT9_bit at ADEISTATL.B9;
    const register unsigned short int EISTAT10 = 10;
    sbit  EISTAT10_bit at ADEISTATL.B10;
    const register unsigned short int EISTAT11 = 11;
    sbit  EISTAT11_bit at ADEISTATL.B11;
    const register unsigned short int EISTAT14 = 14;
    sbit  EISTAT14_bit at ADEISTATL.B14;

sfr unsigned int   volatile ADCON5L          absolute 0x400;
    const register unsigned short int C0PWR = 0;
    sbit  C0PWR_bit at ADCON5L.B0;
    const register unsigned short int C1PWR = 1;
    sbit  C1PWR_bit at ADCON5L.B1;
    const register unsigned short int C2PWR = 2;
    sbit  C2PWR_bit at ADCON5L.B2;
    const register unsigned short int C3PWR = 3;
    sbit  C3PWR_bit at ADCON5L.B3;
    const register unsigned short int C4PWR = 4;
    sbit  C4PWR_bit at ADCON5L.B4;
    const register unsigned short int C5PWR = 5;
    sbit  C5PWR_bit at ADCON5L.B5;
    const register unsigned short int C6PWR = 6;
    sbit  C6PWR_bit at ADCON5L.B6;
    const register unsigned short int SHRPWR = 7;
    sbit  SHRPWR_bit at ADCON5L.B7;
    const register unsigned short int C0RDY = 8;
    sbit  C0RDY_bit at ADCON5L.B8;
    const register unsigned short int C1RDY = 9;
    sbit  C1RDY_bit at ADCON5L.B9;
    const register unsigned short int C2RDY = 10;
    sbit  C2RDY_bit at ADCON5L.B10;
    const register unsigned short int C3RDY = 11;
    sbit  C3RDY_bit at ADCON5L.B11;
    const register unsigned short int C4RDY = 12;
    sbit  C4RDY_bit at ADCON5L.B12;
    const register unsigned short int C5RDY = 13;
    sbit  C5RDY_bit at ADCON5L.B13;
    const register unsigned short int C6RDY = 14;
    sbit  C6RDY_bit at ADCON5L.B14;
    const register unsigned short int SHRRDY = 15;
    sbit  SHRRDY_bit at ADCON5L.B15;

sfr unsigned int   volatile ADCON5H          absolute 0x402;
    const register unsigned short int C0CIE = 0;
    sbit  C0CIE_bit at ADCON5H.B0;
    const register unsigned short int C1CIE = 1;
    sbit  C1CIE_bit at ADCON5H.B1;
    const register unsigned short int C2CIE = 2;
    sbit  C2CIE_bit at ADCON5H.B2;
    const register unsigned short int C3CIE = 3;
    sbit  C3CIE_bit at ADCON5H.B3;
    const register unsigned short int C4CIE = 4;
    sbit  C4CIE_bit at ADCON5H.B4;
    const register unsigned short int C5CIE = 5;
    sbit  C5CIE_bit at ADCON5H.B5;
    const register unsigned short int C6CIE = 6;
    sbit  C6CIE_bit at ADCON5H.B6;
    const register unsigned short int SHRCIE = 7;
    sbit  SHRCIE_bit at ADCON5H.B7;
    const register unsigned short int C0C1E = 0;
    sbit  C0C1E_bit at ADCON5H.B0;
    const register unsigned short int C1C1E = 1;
    sbit  C1C1E_bit at ADCON5H.B1;
    const register unsigned short int C2C1E = 2;
    sbit  C2C1E_bit at ADCON5H.B2;
    const register unsigned short int C3C1E = 3;
    sbit  C3C1E_bit at ADCON5H.B3;
    const register unsigned short int C4C1E = 4;
    sbit  C4C1E_bit at ADCON5H.B4;
    const register unsigned short int C5C1E = 5;
    sbit  C5C1E_bit at ADCON5H.B5;
    const register unsigned short int C6C1E = 6;
    sbit  C6C1E_bit at ADCON5H.B6;

sfr unsigned int   volatile ADCAL0L          absolute 0x404;
    const register unsigned short int CAL0RUN = 0;
    sbit  CAL0RUN_bit at ADCAL0L.B0;
    const register unsigned short int CAL0EN = 1;
    sbit  CAL0EN_bit at ADCAL0L.B1;
    const register unsigned short int CAL0DIFF = 2;
    sbit  CAL0DIFF_bit at ADCAL0L.B2;
    const register unsigned short int CAL0SKIP = 3;
    sbit  CAL0SKIP_bit at ADCAL0L.B3;
    const register unsigned short int CAL0RDY = 7;
    sbit  CAL0RDY_bit at ADCAL0L.B7;
    const register unsigned short int CAL1RUN = 8;
    sbit  CAL1RUN_bit at ADCAL0L.B8;
    const register unsigned short int CAL1EN = 9;
    sbit  CAL1EN_bit at ADCAL0L.B9;
    const register unsigned short int CAL1DIFF = 10;
    sbit  CAL1DIFF_bit at ADCAL0L.B10;
    const register unsigned short int CAL1SKIP = 11;
    sbit  CAL1SKIP_bit at ADCAL0L.B11;
    const register unsigned short int CAL1RDY = 15;
    sbit  CAL1RDY_bit at ADCAL0L.B15;

sfr unsigned int   volatile ADCAL1H          absolute 0x40A;
    const register unsigned short int CSHRRUN = 8;
    sbit  CSHRRUN_bit at ADCAL1H.B8;
    const register unsigned short int CSHREN = 9;
    sbit  CSHREN_bit at ADCAL1H.B9;
    const register unsigned short int CSHRDIFF = 10;
    sbit  CSHRDIFF_bit at ADCAL1H.B10;
    const register unsigned short int CSHRSKIP = 11;
    sbit  CSHRSKIP_bit at ADCAL1H.B11;
    const register unsigned short int CSHRRDY = 15;
    sbit  CSHRRDY_bit at ADCAL1H.B15;

sfr unsigned int   volatile ADCBUF0          absolute 0x40C;
sfr unsigned int   volatile ADCBUF1          absolute 0x40E;
sfr unsigned int   volatile ADCBUF2          absolute 0x410;
sfr unsigned int   volatile ADCBUF3          absolute 0x412;
sfr unsigned int   volatile ADCBUF4          absolute 0x414;
sfr unsigned int   volatile ADCBUF5          absolute 0x416;
sfr unsigned int   volatile ADCBUF6          absolute 0x418;
sfr unsigned int   volatile ADCBUF7          absolute 0x41A;
sfr unsigned int   volatile ADCBUF8          absolute 0x41C;
sfr unsigned int   volatile ADCBUF9          absolute 0x41E;
sfr unsigned int   volatile ADCBUF10         absolute 0x420;
sfr unsigned int   volatile ADCBUF11         absolute 0x422;
sfr unsigned int   volatile ADCBUF12         absolute 0x424;
sfr unsigned int   volatile ADCBUF13         absolute 0x426;
sfr unsigned int   volatile ADCBUF14         absolute 0x428;
sfr unsigned int   volatile PGA1CON          absolute 0x504;
    const register unsigned short int GAIN0 = 0;
    sbit  GAIN0_bit at PGA1CON.B0;
    const register unsigned short int GAIN1 = 1;
    sbit  GAIN1_bit at PGA1CON.B1;
    const register unsigned short int GAIN2 = 2;
    sbit  GAIN2_bit at PGA1CON.B2;
    const register unsigned short int SELNI0 = 8;
    sbit  SELNI0_bit at PGA1CON.B8;
    const register unsigned short int SELNI1 = 9;
    sbit  SELNI1_bit at PGA1CON.B9;
    const register unsigned short int SELNI2 = 10;
    sbit  SELNI2_bit at PGA1CON.B10;
    const register unsigned short int SELPI0 = 11;
    sbit  SELPI0_bit at PGA1CON.B11;
    const register unsigned short int SELPI1 = 12;
    sbit  SELPI1_bit at PGA1CON.B12;
    const register unsigned short int SELPI2 = 13;
    sbit  SELPI2_bit at PGA1CON.B13;
    const register unsigned short int PGAEN = 15;
    sbit  PGAEN_bit at PGA1CON.B15;

sfr unsigned int   volatile PGA1CAL          absolute 0x506;
sfr unsigned int   volatile PGA2CON          absolute 0x508;
sfr unsigned int   volatile PGA2CAL          absolute 0x50A;
sfr unsigned int   volatile CMP1CON          absolute 0x540;
    const register unsigned short int CMPPOL = 1;
    sbit  CMPPOL_bit at CMP1CON.B1;
    const register unsigned short int ALTINP = 2;
    sbit  ALTINP_bit at CMP1CON.B2;
    const register unsigned short int CMPSTAT = 3;
    sbit  CMPSTAT_bit at CMP1CON.B3;
    const register unsigned short int HYSPOL = 4;
    sbit  HYSPOL_bit at CMP1CON.B4;
    const register unsigned short int INSEL0 = 6;
    sbit  INSEL0_bit at CMP1CON.B6;
    const register unsigned short int INSEL1 = 7;
    sbit  INSEL1_bit at CMP1CON.B7;
    const register unsigned short int FCLKSEL = 9;
    sbit  FCLKSEL_bit at CMP1CON.B9;
    const register unsigned short int FLTREN = 10;
    sbit  FLTREN_bit at CMP1CON.B10;
    const register unsigned short int HYSSEL0 = 11;
    sbit  HYSSEL0_bit at CMP1CON.B11;
    const register unsigned short int HYSSEL1 = 12;
    sbit  HYSSEL1_bit at CMP1CON.B12;
    const register unsigned short int CMPSIDL = 13;
    sbit  CMPSIDL_bit at CMP1CON.B13;
    const register unsigned short int CMPON = 15;
    sbit  CMPON_bit at CMP1CON.B15;

sfr unsigned int   volatile CMP1DAC          absolute 0x542;
    const register unsigned short int CMREF0 = 0;
    sbit  CMREF0_bit at CMP1DAC.B0;
    const register unsigned short int CMREF1 = 1;
    sbit  CMREF1_bit at CMP1DAC.B1;
    const register unsigned short int CMREF2 = 2;
    sbit  CMREF2_bit at CMP1DAC.B2;
    const register unsigned short int CMREF3 = 3;
    sbit  CMREF3_bit at CMP1DAC.B3;
    const register unsigned short int CMREF4 = 4;
    sbit  CMREF4_bit at CMP1DAC.B4;
    const register unsigned short int CMREF5 = 5;
    sbit  CMREF5_bit at CMP1DAC.B5;
    const register unsigned short int CMREF6 = 6;
    sbit  CMREF6_bit at CMP1DAC.B6;
    const register unsigned short int CMREF7 = 7;
    sbit  CMREF7_bit at CMP1DAC.B7;
    const register unsigned short int CMREF8 = 8;
    sbit  CMREF8_bit at CMP1DAC.B8;
    const register unsigned short int CMREF9 = 9;
    sbit  CMREF9_bit at CMP1DAC.B9;
    const register unsigned short int CMREF10 = 10;
    sbit  CMREF10_bit at CMP1DAC.B10;
    const register unsigned short int CMREF11 = 11;
    sbit  CMREF11_bit at CMP1DAC.B11;

sfr unsigned int   volatile CMP2CON          absolute 0x544;
sfr unsigned int   volatile CMP2DAC          absolute 0x546;
sfr unsigned int            RPOR0            absolute 0x670;
    const register unsigned short int RP32R0 = 0;
    sbit  RP32R0_bit at RPOR0.B0;
    const register unsigned short int RP32R1 = 1;
    sbit  RP32R1_bit at RPOR0.B1;
    const register unsigned short int RP32R2 = 2;
    sbit  RP32R2_bit at RPOR0.B2;
    const register unsigned short int RP32R3 = 3;
    sbit  RP32R3_bit at RPOR0.B3;
    const register unsigned short int RP32R4 = 4;
    sbit  RP32R4_bit at RPOR0.B4;
    const register unsigned short int RP32R5 = 5;
    sbit  RP32R5_bit at RPOR0.B5;
    const register unsigned short int RP33R0 = 8;
    sbit  RP33R0_bit at RPOR0.B8;
    const register unsigned short int RP33R1 = 9;
    sbit  RP33R1_bit at RPOR0.B9;
    const register unsigned short int RP33R2 = 10;
    sbit  RP33R2_bit at RPOR0.B10;
    const register unsigned short int RP33R3 = 11;
    sbit  RP33R3_bit at RPOR0.B11;
    const register unsigned short int RP33R4 = 12;
    sbit  RP33R4_bit at RPOR0.B12;
    const register unsigned short int RP33R5 = 13;
    sbit  RP33R5_bit at RPOR0.B13;

sfr unsigned int            RPOR1            absolute 0x672;
    const register unsigned short int RP34R0 = 0;
    sbit  RP34R0_bit at RPOR1.B0;
    const register unsigned short int RP34R1 = 1;
    sbit  RP34R1_bit at RPOR1.B1;
    const register unsigned short int RP34R2 = 2;
    sbit  RP34R2_bit at RPOR1.B2;
    const register unsigned short int RP34R3 = 3;
    sbit  RP34R3_bit at RPOR1.B3;
    const register unsigned short int RP34R4 = 4;
    sbit  RP34R4_bit at RPOR1.B4;
    const register unsigned short int RP34R5 = 5;
    sbit  RP34R5_bit at RPOR1.B5;
    const register unsigned short int RP35R0 = 8;
    sbit  RP35R0_bit at RPOR1.B8;
    const register unsigned short int RP35R1 = 9;
    sbit  RP35R1_bit at RPOR1.B9;
    const register unsigned short int RP35R2 = 10;
    sbit  RP35R2_bit at RPOR1.B10;
    const register unsigned short int RP35R3 = 11;
    sbit  RP35R3_bit at RPOR1.B11;
    const register unsigned short int RP35R4 = 12;
    sbit  RP35R4_bit at RPOR1.B12;
    const register unsigned short int RP35R5 = 13;
    sbit  RP35R5_bit at RPOR1.B13;

sfr unsigned int            RPOR2            absolute 0x674;
    const register unsigned short int RP36R0 = 0;
    sbit  RP36R0_bit at RPOR2.B0;
    const register unsigned short int RP36R1 = 1;
    sbit  RP36R1_bit at RPOR2.B1;
    const register unsigned short int RP36R2 = 2;
    sbit  RP36R2_bit at RPOR2.B2;
    const register unsigned short int RP36R3 = 3;
    sbit  RP36R3_bit at RPOR2.B3;
    const register unsigned short int RP36R4 = 4;
    sbit  RP36R4_bit at RPOR2.B4;
    const register unsigned short int RP36R5 = 5;
    sbit  RP36R5_bit at RPOR2.B5;
    const register unsigned short int RP37R0 = 8;
    sbit  RP37R0_bit at RPOR2.B8;
    const register unsigned short int RP37R1 = 9;
    sbit  RP37R1_bit at RPOR2.B9;
    const register unsigned short int RP37R2 = 10;
    sbit  RP37R2_bit at RPOR2.B10;
    const register unsigned short int RP37R3 = 11;
    sbit  RP37R3_bit at RPOR2.B11;
    const register unsigned short int RP37R4 = 12;
    sbit  RP37R4_bit at RPOR2.B12;
    const register unsigned short int RP37R5 = 13;
    sbit  RP37R5_bit at RPOR2.B13;

sfr unsigned int            RPOR3            absolute 0x676;
    const register unsigned short int RP38R0 = 0;
    sbit  RP38R0_bit at RPOR3.B0;
    const register unsigned short int RP38R1 = 1;
    sbit  RP38R1_bit at RPOR3.B1;
    const register unsigned short int RP38R2 = 2;
    sbit  RP38R2_bit at RPOR3.B2;
    const register unsigned short int RP38R3 = 3;
    sbit  RP38R3_bit at RPOR3.B3;
    const register unsigned short int RP38R4 = 4;
    sbit  RP38R4_bit at RPOR3.B4;
    const register unsigned short int RP38R5 = 5;
    sbit  RP38R5_bit at RPOR3.B5;
    const register unsigned short int RP39R0 = 8;
    sbit  RP39R0_bit at RPOR3.B8;
    const register unsigned short int RP39R1 = 9;
    sbit  RP39R1_bit at RPOR3.B9;
    const register unsigned short int RP39R2 = 10;
    sbit  RP39R2_bit at RPOR3.B10;
    const register unsigned short int RP39R3 = 11;
    sbit  RP39R3_bit at RPOR3.B11;
    const register unsigned short int RP39R4 = 12;
    sbit  RP39R4_bit at RPOR3.B12;
    const register unsigned short int RP39R5 = 13;
    sbit  RP39R5_bit at RPOR3.B13;

sfr unsigned int            RPOR4            absolute 0x678;
    const register unsigned short int RP40R0 = 0;
    sbit  RP40R0_bit at RPOR4.B0;
    const register unsigned short int RP40R1 = 1;
    sbit  RP40R1_bit at RPOR4.B1;
    const register unsigned short int RP40R2 = 2;
    sbit  RP40R2_bit at RPOR4.B2;
    const register unsigned short int RP40R3 = 3;
    sbit  RP40R3_bit at RPOR4.B3;
    const register unsigned short int RP40R4 = 4;
    sbit  RP40R4_bit at RPOR4.B4;
    const register unsigned short int RP40R5 = 5;
    sbit  RP40R5_bit at RPOR4.B5;
    const register unsigned short int RP41R0 = 8;
    sbit  RP41R0_bit at RPOR4.B8;
    const register unsigned short int RP41R1 = 9;
    sbit  RP41R1_bit at RPOR4.B9;
    const register unsigned short int RP41R2 = 10;
    sbit  RP41R2_bit at RPOR4.B10;
    const register unsigned short int RP41R3 = 11;
    sbit  RP41R3_bit at RPOR4.B11;
    const register unsigned short int RP41R4 = 12;
    sbit  RP41R4_bit at RPOR4.B12;
    const register unsigned short int RP41R5 = 13;
    sbit  RP41R5_bit at RPOR4.B13;

sfr unsigned int            RPOR5            absolute 0x67A;
    const register unsigned short int RP42R0 = 0;
    sbit  RP42R0_bit at RPOR5.B0;
    const register unsigned short int RP42R1 = 1;
    sbit  RP42R1_bit at RPOR5.B1;
    const register unsigned short int RP42R2 = 2;
    sbit  RP42R2_bit at RPOR5.B2;
    const register unsigned short int RP42R3 = 3;
    sbit  RP42R3_bit at RPOR5.B3;
    const register unsigned short int RP42R4 = 4;
    sbit  RP42R4_bit at RPOR5.B4;
    const register unsigned short int RP42R5 = 5;
    sbit  RP42R5_bit at RPOR5.B5;
    const register unsigned short int RP43R0 = 8;
    sbit  RP43R0_bit at RPOR5.B8;
    const register unsigned short int RP43R1 = 9;
    sbit  RP43R1_bit at RPOR5.B9;
    const register unsigned short int RP43R2 = 10;
    sbit  RP43R2_bit at RPOR5.B10;
    const register unsigned short int RP43R3 = 11;
    sbit  RP43R3_bit at RPOR5.B11;
    const register unsigned short int RP43R4 = 12;
    sbit  RP43R4_bit at RPOR5.B12;
    const register unsigned short int RP43R5 = 13;
    sbit  RP43R5_bit at RPOR5.B13;

sfr unsigned int            RPOR6            absolute 0x67C;
    const register unsigned short int RP44R0 = 0;
    sbit  RP44R0_bit at RPOR6.B0;
    const register unsigned short int RP44R1 = 1;
    sbit  RP44R1_bit at RPOR6.B1;
    const register unsigned short int RP44R2 = 2;
    sbit  RP44R2_bit at RPOR6.B2;
    const register unsigned short int RP44R3 = 3;
    sbit  RP44R3_bit at RPOR6.B3;
    const register unsigned short int RP44R4 = 4;
    sbit  RP44R4_bit at RPOR6.B4;
    const register unsigned short int RP44R5 = 5;
    sbit  RP44R5_bit at RPOR6.B5;
    const register unsigned short int RP45R0 = 8;
    sbit  RP45R0_bit at RPOR6.B8;
    const register unsigned short int RP45R1 = 9;
    sbit  RP45R1_bit at RPOR6.B9;
    const register unsigned short int RP45R2 = 10;
    sbit  RP45R2_bit at RPOR6.B10;
    const register unsigned short int RP45R3 = 11;
    sbit  RP45R3_bit at RPOR6.B11;
    const register unsigned short int RP45R4 = 12;
    sbit  RP45R4_bit at RPOR6.B12;
    const register unsigned short int RP45R5 = 13;
    sbit  RP45R5_bit at RPOR6.B13;

sfr unsigned int            RPOR7            absolute 0x67E;
    const register unsigned short int RP46R0 = 0;
    sbit  RP46R0_bit at RPOR7.B0;
    const register unsigned short int RP46R1 = 1;
    sbit  RP46R1_bit at RPOR7.B1;
    const register unsigned short int RP46R2 = 2;
    sbit  RP46R2_bit at RPOR7.B2;
    const register unsigned short int RP46R3 = 3;
    sbit  RP46R3_bit at RPOR7.B3;
    const register unsigned short int RP46R4 = 4;
    sbit  RP46R4_bit at RPOR7.B4;
    const register unsigned short int RP46R5 = 5;
    sbit  RP46R5_bit at RPOR7.B5;
    const register unsigned short int RP47R0 = 8;
    sbit  RP47R0_bit at RPOR7.B8;
    const register unsigned short int RP47R1 = 9;
    sbit  RP47R1_bit at RPOR7.B9;
    const register unsigned short int RP47R2 = 10;
    sbit  RP47R2_bit at RPOR7.B10;
    const register unsigned short int RP47R3 = 11;
    sbit  RP47R3_bit at RPOR7.B11;
    const register unsigned short int RP47R4 = 12;
    sbit  RP47R4_bit at RPOR7.B12;
    const register unsigned short int RP47R5 = 13;
    sbit  RP47R5_bit at RPOR7.B13;

sfr unsigned int            RPOR8            absolute 0x680;
    const register unsigned short int RP176R0 = 0;
    sbit  RP176R0_bit at RPOR8.B0;
    const register unsigned short int RP176R1 = 1;
    sbit  RP176R1_bit at RPOR8.B1;
    const register unsigned short int RP176R2 = 2;
    sbit  RP176R2_bit at RPOR8.B2;
    const register unsigned short int RP176R3 = 3;
    sbit  RP176R3_bit at RPOR8.B3;
    const register unsigned short int RP176R4 = 4;
    sbit  RP176R4_bit at RPOR8.B4;
    const register unsigned short int RP176R5 = 5;
    sbit  RP176R5_bit at RPOR8.B5;
    const register unsigned short int RP177R0 = 8;
    sbit  RP177R0_bit at RPOR8.B8;
    const register unsigned short int RP177R1 = 9;
    sbit  RP177R1_bit at RPOR8.B9;
    const register unsigned short int RP177R2 = 10;
    sbit  RP177R2_bit at RPOR8.B10;
    const register unsigned short int RP177R3 = 11;
    sbit  RP177R3_bit at RPOR8.B11;
    const register unsigned short int RP177R4 = 12;
    sbit  RP177R4_bit at RPOR8.B12;
    const register unsigned short int RP177R5 = 13;
    sbit  RP177R5_bit at RPOR8.B13;

sfr unsigned int            RPOR9            absolute 0x682;
    const register unsigned short int RP178R0 = 0;
    sbit  RP178R0_bit at RPOR9.B0;
    const register unsigned short int RP178R1 = 1;
    sbit  RP178R1_bit at RPOR9.B1;
    const register unsigned short int RP178R2 = 2;
    sbit  RP178R2_bit at RPOR9.B2;
    const register unsigned short int RP178R3 = 3;
    sbit  RP178R3_bit at RPOR9.B3;
    const register unsigned short int RP178R4 = 4;
    sbit  RP178R4_bit at RPOR9.B4;
    const register unsigned short int RP178R5 = 5;
    sbit  RP178R5_bit at RPOR9.B5;
    const register unsigned short int RP179R0 = 8;
    sbit  RP179R0_bit at RPOR9.B8;
    const register unsigned short int RP179R1 = 9;
    sbit  RP179R1_bit at RPOR9.B9;
    const register unsigned short int RP179R2 = 10;
    sbit  RP179R2_bit at RPOR9.B10;
    const register unsigned short int RP179R3 = 11;
    sbit  RP179R3_bit at RPOR9.B11;
    const register unsigned short int RP179R4 = 12;
    sbit  RP179R4_bit at RPOR9.B12;
    const register unsigned short int RP179R5 = 13;
    sbit  RP179R5_bit at RPOR9.B13;

sfr unsigned int            RPOR10           absolute 0x684;
    const register unsigned short int RP180R0 = 0;
    sbit  RP180R0_bit at RPOR10.B0;
    const register unsigned short int RP180R1 = 1;
    sbit  RP180R1_bit at RPOR10.B1;
    const register unsigned short int RP180R2 = 2;
    sbit  RP180R2_bit at RPOR10.B2;
    const register unsigned short int RP180R3 = 3;
    sbit  RP180R3_bit at RPOR10.B3;
    const register unsigned short int RP180R4 = 4;
    sbit  RP180R4_bit at RPOR10.B4;
    const register unsigned short int RP180R5 = 5;
    sbit  RP180R5_bit at RPOR10.B5;
    const register unsigned short int RP181R0 = 8;
    sbit  RP181R0_bit at RPOR10.B8;
    const register unsigned short int RP181R1 = 9;
    sbit  RP181R1_bit at RPOR10.B9;
    const register unsigned short int RP181R2 = 10;
    sbit  RP181R2_bit at RPOR10.B10;
    const register unsigned short int RP181R3 = 11;
    sbit  RP181R3_bit at RPOR10.B11;
    const register unsigned short int RP181R4 = 12;
    sbit  RP181R4_bit at RPOR10.B12;
    const register unsigned short int RP181R5 = 13;
    sbit  RP181R5_bit at RPOR10.B13;

sfr unsigned int            RPINR0           absolute 0x6A0;
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
    const register unsigned short int INT1R6 = 14;
    sbit  INT1R6_bit at RPINR0.B14;
    const register unsigned short int INT1R7 = 15;
    sbit  INT1R7_bit at RPINR0.B15;

sfr unsigned int            RPINR1           absolute 0x6A2;
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
    const register unsigned short int INT2R6 = 6;
    sbit  INT2R6_bit at RPINR1.B6;
    const register unsigned short int INT2R7 = 7;
    sbit  INT2R7_bit at RPINR1.B7;

sfr unsigned int            RPINR2           absolute 0x6A4;
    const register unsigned short int T1CKR0 = 8;
    sbit  T1CKR0_bit at RPINR2.B8;
    const register unsigned short int T1CKR1 = 9;
    sbit  T1CKR1_bit at RPINR2.B9;
    const register unsigned short int T1CKR2 = 10;
    sbit  T1CKR2_bit at RPINR2.B10;
    const register unsigned short int T1CKR3 = 11;
    sbit  T1CKR3_bit at RPINR2.B11;
    const register unsigned short int T1CKR4 = 12;
    sbit  T1CKR4_bit at RPINR2.B12;
    const register unsigned short int T1CKR5 = 13;
    sbit  T1CKR5_bit at RPINR2.B13;
    const register unsigned short int T1CKR6 = 14;
    sbit  T1CKR6_bit at RPINR2.B14;
    const register unsigned short int T1CKR7 = 15;
    sbit  T1CKR7_bit at RPINR2.B15;

sfr unsigned int            RPINR3           absolute 0x6A6;
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
    const register unsigned short int T2CKR6 = 6;
    sbit  T2CKR6_bit at RPINR3.B6;
    const register unsigned short int T2CKR7 = 7;
    sbit  T2CKR7_bit at RPINR3.B7;
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
    const register unsigned short int T3CKR6 = 14;
    sbit  T3CKR6_bit at RPINR3.B14;
    const register unsigned short int T3CKR7 = 15;
    sbit  T3CKR7_bit at RPINR3.B15;

sfr unsigned int            RPINR7           absolute 0x6AE;
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
    const register unsigned short int IC1R6 = 6;
    sbit  IC1R6_bit at RPINR7.B6;
    const register unsigned short int IC1R7 = 7;
    sbit  IC1R7_bit at RPINR7.B7;

sfr unsigned int            RPINR11          absolute 0x6B6;
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
    const register unsigned short int OCFAR6 = 6;
    sbit  OCFAR6_bit at RPINR11.B6;
    const register unsigned short int OCFAR7 = 7;
    sbit  OCFAR7_bit at RPINR11.B7;

sfr unsigned int            RPINR12          absolute 0x6B8;
    const register unsigned short int FLT1R0 = 0;
    sbit  FLT1R0_bit at RPINR12.B0;
    const register unsigned short int FLT1R1 = 1;
    sbit  FLT1R1_bit at RPINR12.B1;
    const register unsigned short int FLT1R2 = 2;
    sbit  FLT1R2_bit at RPINR12.B2;
    const register unsigned short int FLT1R3 = 3;
    sbit  FLT1R3_bit at RPINR12.B3;
    const register unsigned short int FLT1R4 = 4;
    sbit  FLT1R4_bit at RPINR12.B4;
    const register unsigned short int FLT1R5 = 5;
    sbit  FLT1R5_bit at RPINR12.B5;
    const register unsigned short int FLT1R6 = 6;
    sbit  FLT1R6_bit at RPINR12.B6;
    const register unsigned short int FLT1R7 = 7;
    sbit  FLT1R7_bit at RPINR12.B7;
    const register unsigned short int FLT2R0 = 8;
    sbit  FLT2R0_bit at RPINR12.B8;
    const register unsigned short int FLT2R1 = 9;
    sbit  FLT2R1_bit at RPINR12.B9;
    const register unsigned short int FLT2R2 = 10;
    sbit  FLT2R2_bit at RPINR12.B10;
    const register unsigned short int FLT2R3 = 11;
    sbit  FLT2R3_bit at RPINR12.B11;
    const register unsigned short int FLT2R4 = 12;
    sbit  FLT2R4_bit at RPINR12.B12;
    const register unsigned short int FLT2R5 = 13;
    sbit  FLT2R5_bit at RPINR12.B13;
    const register unsigned short int FLT2R6 = 14;
    sbit  FLT2R6_bit at RPINR12.B14;
    const register unsigned short int FLT2R7 = 15;
    sbit  FLT2R7_bit at RPINR12.B15;

sfr unsigned int            RPINR13          absolute 0x6BA;
    const register unsigned short int FLT3R0 = 0;
    sbit  FLT3R0_bit at RPINR13.B0;
    const register unsigned short int FLT3R1 = 1;
    sbit  FLT3R1_bit at RPINR13.B1;
    const register unsigned short int FLT3R2 = 2;
    sbit  FLT3R2_bit at RPINR13.B2;
    const register unsigned short int FLT3R3 = 3;
    sbit  FLT3R3_bit at RPINR13.B3;
    const register unsigned short int FLT3R4 = 4;
    sbit  FLT3R4_bit at RPINR13.B4;
    const register unsigned short int FLT3R5 = 5;
    sbit  FLT3R5_bit at RPINR13.B5;
    const register unsigned short int FLT3R6 = 6;
    sbit  FLT3R6_bit at RPINR13.B6;
    const register unsigned short int FLT3R7 = 7;
    sbit  FLT3R7_bit at RPINR13.B7;
    const register unsigned short int FLT4R0 = 8;
    sbit  FLT4R0_bit at RPINR13.B8;
    const register unsigned short int FLT4R1 = 9;
    sbit  FLT4R1_bit at RPINR13.B9;
    const register unsigned short int FLT4R2 = 10;
    sbit  FLT4R2_bit at RPINR13.B10;
    const register unsigned short int FLT4R3 = 11;
    sbit  FLT4R3_bit at RPINR13.B11;
    const register unsigned short int FLT4R4 = 12;
    sbit  FLT4R4_bit at RPINR13.B12;
    const register unsigned short int FLT4R5 = 13;
    sbit  FLT4R5_bit at RPINR13.B13;
    const register unsigned short int FLT4R6 = 14;
    sbit  FLT4R6_bit at RPINR13.B14;
    const register unsigned short int FLT4R7 = 15;
    sbit  FLT4R7_bit at RPINR13.B15;

sfr unsigned int            RPINR18          absolute 0x6C4;
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
    const register unsigned short int U1RXR6 = 6;
    sbit  U1RXR6_bit at RPINR18.B6;
    const register unsigned short int U1RXR7 = 7;
    sbit  U1RXR7_bit at RPINR18.B7;
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
    const register unsigned short int U1CTSR6 = 14;
    sbit  U1CTSR6_bit at RPINR18.B14;
    const register unsigned short int U1CTSR7 = 15;
    sbit  U1CTSR7_bit at RPINR18.B15;

sfr unsigned int            RPINR20          absolute 0x6C8;
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
    const register unsigned short int SDI1R6 = 6;
    sbit  SDI1R6_bit at RPINR20.B6;
    const register unsigned short int SDI1R7 = 7;
    sbit  SDI1R7_bit at RPINR20.B7;
    const register unsigned short int SCK1INR0 = 8;
    sbit  SCK1INR0_bit at RPINR20.B8;
    const register unsigned short int SCK1INR1 = 9;
    sbit  SCK1INR1_bit at RPINR20.B9;
    const register unsigned short int SCK1INR2 = 10;
    sbit  SCK1INR2_bit at RPINR20.B10;
    const register unsigned short int SCK1INR3 = 11;
    sbit  SCK1INR3_bit at RPINR20.B11;
    const register unsigned short int SCK1INR4 = 12;
    sbit  SCK1INR4_bit at RPINR20.B12;
    const register unsigned short int SCK1INR5 = 13;
    sbit  SCK1INR5_bit at RPINR20.B13;
    const register unsigned short int SCK1INR6 = 14;
    sbit  SCK1INR6_bit at RPINR20.B14;
    const register unsigned short int SCK1INR7 = 15;
    sbit  SCK1INR7_bit at RPINR20.B15;

sfr unsigned int            RPINR21          absolute 0x6CA;
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
    const register unsigned short int SS1R6 = 6;
    sbit  SS1R6_bit at RPINR21.B6;
    const register unsigned short int SS1R7 = 7;
    sbit  SS1R7_bit at RPINR21.B7;

sfr unsigned int   volatile RPINR37          absolute 0x6EA;
    const register unsigned short int SYNCI1R0 = 8;
    sbit  SYNCI1R0_bit at RPINR37.B8;
    const register unsigned short int SYNCI1R1 = 9;
    sbit  SYNCI1R1_bit at RPINR37.B9;
    const register unsigned short int SYNCI1R2 = 10;
    sbit  SYNCI1R2_bit at RPINR37.B10;
    const register unsigned short int SYNCI1R3 = 11;
    sbit  SYNCI1R3_bit at RPINR37.B11;
    const register unsigned short int SYNCI1R4 = 12;
    sbit  SYNCI1R4_bit at RPINR37.B12;
    const register unsigned short int SYNCI1R5 = 13;
    sbit  SYNCI1R5_bit at RPINR37.B13;
    const register unsigned short int SYNCI1R6 = 14;
    sbit  SYNCI1R6_bit at RPINR37.B14;
    const register unsigned short int SYNCI1R7 = 15;
    sbit  SYNCI1R7_bit at RPINR37.B15;

sfr unsigned int   volatile RPINR38          absolute 0x6EC;
    const register unsigned short int SYNCI2R0 = 0;
    sbit  SYNCI2R0_bit at RPINR38.B0;
    const register unsigned short int SYNCI2R1 = 1;
    sbit  SYNCI2R1_bit at RPINR38.B1;
    const register unsigned short int SYNCI2R2 = 2;
    sbit  SYNCI2R2_bit at RPINR38.B2;
    const register unsigned short int SYNCI2R3 = 3;
    sbit  SYNCI2R3_bit at RPINR38.B3;
    const register unsigned short int SYNCI2R4 = 4;
    sbit  SYNCI2R4_bit at RPINR38.B4;
    const register unsigned short int SYNCI2R5 = 5;
    sbit  SYNCI2R5_bit at RPINR38.B5;
    const register unsigned short int SYNCI2R6 = 6;
    sbit  SYNCI2R6_bit at RPINR38.B6;
    const register unsigned short int SYNCI2R7 = 7;
    sbit  SYNCI2R7_bit at RPINR38.B7;

sfr unsigned int   volatile RPINR42          absolute 0x6F4;
    const register unsigned short int FLT5R0 = 0;
    sbit  FLT5R0_bit at RPINR42.B0;
    const register unsigned short int FLT5R1 = 1;
    sbit  FLT5R1_bit at RPINR42.B1;
    const register unsigned short int FLT5R2 = 2;
    sbit  FLT5R2_bit at RPINR42.B2;
    const register unsigned short int FLT5R3 = 3;
    sbit  FLT5R3_bit at RPINR42.B3;
    const register unsigned short int FLT5R4 = 4;
    sbit  FLT5R4_bit at RPINR42.B4;
    const register unsigned short int FLT5R5 = 5;
    sbit  FLT5R5_bit at RPINR42.B5;
    const register unsigned short int FLT5R6 = 6;
    sbit  FLT5R6_bit at RPINR42.B6;
    const register unsigned short int FLT5R7 = 7;
    sbit  FLT5R7_bit at RPINR42.B7;
    const register unsigned short int FLT6R0 = 8;
    sbit  FLT6R0_bit at RPINR42.B8;
    const register unsigned short int FLT6R1 = 9;
    sbit  FLT6R1_bit at RPINR42.B9;
    const register unsigned short int FLT6R2 = 10;
    sbit  FLT6R2_bit at RPINR42.B10;
    const register unsigned short int FLT6R3 = 11;
    sbit  FLT6R3_bit at RPINR42.B11;
    const register unsigned short int FLT6R4 = 12;
    sbit  FLT6R4_bit at RPINR42.B12;
    const register unsigned short int FLT6R5 = 13;
    sbit  FLT6R5_bit at RPINR42.B13;
    const register unsigned short int FLT6R6 = 14;
    sbit  FLT6R6_bit at RPINR42.B14;
    const register unsigned short int FLT6R7 = 15;
    sbit  FLT6R7_bit at RPINR42.B15;

sfr unsigned int   volatile RPINR43          absolute 0x6F6;
    const register unsigned short int FLT7R0 = 0;
    sbit  FLT7R0_bit at RPINR43.B0;
    const register unsigned short int FLT7R1 = 1;
    sbit  FLT7R1_bit at RPINR43.B1;
    const register unsigned short int FLT7R2 = 2;
    sbit  FLT7R2_bit at RPINR43.B2;
    const register unsigned short int FLT7R3 = 3;
    sbit  FLT7R3_bit at RPINR43.B3;
    const register unsigned short int FLT7R4 = 4;
    sbit  FLT7R4_bit at RPINR43.B4;
    const register unsigned short int FLT7R5 = 5;
    sbit  FLT7R5_bit at RPINR43.B5;
    const register unsigned short int FLT7R6 = 6;
    sbit  FLT7R6_bit at RPINR43.B6;
    const register unsigned short int FLT7R7 = 7;
    sbit  FLT7R7_bit at RPINR43.B7;
    const register unsigned short int FLT8R0 = 8;
    sbit  FLT8R0_bit at RPINR43.B8;
    const register unsigned short int FLT8R1 = 9;
    sbit  FLT8R1_bit at RPINR43.B9;
    const register unsigned short int FLT8R2 = 10;
    sbit  FLT8R2_bit at RPINR43.B10;
    const register unsigned short int FLT8R3 = 11;
    sbit  FLT8R3_bit at RPINR43.B11;
    const register unsigned short int FLT8R4 = 12;
    sbit  FLT8R4_bit at RPINR43.B12;
    const register unsigned short int FLT8R5 = 13;
    sbit  FLT8R5_bit at RPINR43.B13;
    const register unsigned short int FLT8R6 = 14;
    sbit  FLT8R6_bit at RPINR43.B14;
    const register unsigned short int FLT8R7 = 15;
    sbit  FLT8R7_bit at RPINR43.B15;

sfr unsigned int   volatile NVMCON           absolute 0x728;
    const register unsigned short int NVMOP0 = 0;
    sbit  NVMOP0_bit at NVMCON.B0;
    const register unsigned short int NVMOP1 = 1;
    sbit  NVMOP1_bit at NVMCON.B1;
    const register unsigned short int NVMOP2 = 2;
    sbit  NVMOP2_bit at NVMCON.B2;
    const register unsigned short int NVMOP3 = 3;
    sbit  NVMOP3_bit at NVMCON.B3;
    const register unsigned short int URERR = 8;
    sbit  URERR_bit at NVMCON.B8;
    const register unsigned short int RPDF = 9;
    sbit  RPDF_bit at NVMCON.B9;
    const register unsigned short int NVMSIDL = 12;
    sbit  NVMSIDL_bit at NVMCON.B12;
    const register unsigned short int WRERR = 13;
    sbit  WRERR_bit at NVMCON.B13;
    const register unsigned short int WREN = 14;
    sbit  WREN_bit at NVMCON.B14;
    const register unsigned short int WR = 15;
    sbit  WR_bit at NVMCON.B15;

sfr unsigned int   volatile NVMADR           absolute 0x72A;
sfr unsigned int   volatile NVMADRL          absolute 0x72A;
sfr unsigned int   volatile NVMADRH          absolute 0x72C;
sfr unsigned int   volatile NVMADRU          absolute 0x72C;
sfr unsigned int            NVMKEY           absolute 0x72E;
sfr unsigned int   volatile NVMSRCADDR       absolute 0x730;
sfr unsigned int   volatile NVMSRCADR        absolute 0x730;
sfr unsigned int   volatile NVMSRCADRL       absolute 0x730;
sfr unsigned int   volatile NVMSRCADRH       absolute 0x732;
sfr unsigned int   volatile RCON             absolute 0x740;
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
    const register unsigned short int CM = 9;
    sbit  CM_bit at RCON.B9;
    const register unsigned short int VREGSF = 11;
    sbit  VREGSF_bit at RCON.B11;
    const register unsigned short int SBOREN = 13;
    sbit  SBOREN_bit at RCON.B13;
    const register unsigned short int IOPUWR = 14;
    sbit  IOPUWR_bit at RCON.B14;
    const register unsigned short int TRAPR = 15;
    sbit  TRAPR_bit at RCON.B15;

sfr unsigned int   volatile OSCCON           absolute 0x742;
    const register unsigned short int OSWEN = 0;
    sbit  OSWEN_bit at OSCCON.B0;
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

sfr unsigned int   volatile OSCCONL          absolute 0x742;
sfr unsigned short volatile OSCCONH          absolute 0x743;
sfr unsigned int   volatile CLKDIV           absolute 0x744;
    const register unsigned short int PLLPRE0 = 0;
    sbit  PLLPRE0_bit at CLKDIV.B0;
    const register unsigned short int PLLPRE1 = 1;
    sbit  PLLPRE1_bit at CLKDIV.B1;
    const register unsigned short int PLLPRE2 = 2;
    sbit  PLLPRE2_bit at CLKDIV.B2;
    const register unsigned short int PLLPRE3 = 3;
    sbit  PLLPRE3_bit at CLKDIV.B3;
    const register unsigned short int PLLPRE4 = 4;
    sbit  PLLPRE4_bit at CLKDIV.B4;
    const register unsigned short int PLLPOST0 = 6;
    sbit  PLLPOST0_bit at CLKDIV.B6;
    const register unsigned short int PLLPOST1 = 7;
    sbit  PLLPOST1_bit at CLKDIV.B7;
    const register unsigned short int FRCDIV0 = 8;
    sbit  FRCDIV0_bit at CLKDIV.B8;
    const register unsigned short int FRCDIV1 = 9;
    sbit  FRCDIV1_bit at CLKDIV.B9;
    const register unsigned short int FRCDIV2 = 10;
    sbit  FRCDIV2_bit at CLKDIV.B10;
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

sfr unsigned int   volatile PLLFBD           absolute 0x746;
    const register unsigned short int PLLDIV0 = 0;
    sbit  PLLDIV0_bit at PLLFBD.B0;
    const register unsigned short int PLLDIV1 = 1;
    sbit  PLLDIV1_bit at PLLFBD.B1;
    const register unsigned short int PLLDIV2 = 2;
    sbit  PLLDIV2_bit at PLLFBD.B2;
    const register unsigned short int PLLDIV3 = 3;
    sbit  PLLDIV3_bit at PLLFBD.B3;
    const register unsigned short int PLLDIV4 = 4;
    sbit  PLLDIV4_bit at PLLFBD.B4;
    const register unsigned short int PLLDIV5 = 5;
    sbit  PLLDIV5_bit at PLLFBD.B5;
    const register unsigned short int PLLDIV6 = 6;
    sbit  PLLDIV6_bit at PLLFBD.B6;
    const register unsigned short int PLLDIV7 = 7;
    sbit  PLLDIV7_bit at PLLFBD.B7;
    const register unsigned short int PLLDIV8 = 8;
    sbit  PLLDIV8_bit at PLLFBD.B8;

sfr unsigned int   volatile OSCTUN           absolute 0x748;
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

sfr unsigned int   volatile LFSR             absolute 0x74C;
sfr unsigned int   volatile ACLKCON          absolute 0x750;
    const register unsigned short int FRCSEL = 6;
    sbit  FRCSEL_bit at ACLKCON.B6;
    const register unsigned short int ASRCSEL = 7;
    sbit  ASRCSEL_bit at ACLKCON.B7;
    const register unsigned short int APSTSCLR0 = 8;
    sbit  APSTSCLR0_bit at ACLKCON.B8;
    const register unsigned short int APSTSCLR1 = 9;
    sbit  APSTSCLR1_bit at ACLKCON.B9;
    const register unsigned short int APSTSCLR2 = 10;
    sbit  APSTSCLR2_bit at ACLKCON.B10;
    const register unsigned short int SELACLK = 13;
    sbit  SELACLK_bit at ACLKCON.B13;
    const register unsigned short int APLLCK = 14;
    sbit  APLLCK_bit at ACLKCON.B14;
    const register unsigned short int ENAPLL = 15;
    sbit  ENAPLL_bit at ACLKCON.B15;

sfr unsigned int            PMD1             absolute 0x760;
    const register unsigned short int ADCMD = 0;
    sbit  ADCMD_bit at PMD1.B0;
    const register unsigned short int SPI1MD = 3;
    sbit  SPI1MD_bit at PMD1.B3;
    const register unsigned short int U1MD = 5;
    sbit  U1MD_bit at PMD1.B5;
    const register unsigned short int I2C1MD = 7;
    sbit  I2C1MD_bit at PMD1.B7;
    const register unsigned short int PWMMD = 9;
    sbit  PWMMD_bit at PMD1.B9;
    const register unsigned short int T1MD = 11;
    sbit  T1MD_bit at PMD1.B11;
    const register unsigned short int T2MD = 12;
    sbit  T2MD_bit at PMD1.B12;
    const register unsigned short int T3MD = 13;
    sbit  T3MD_bit at PMD1.B13;

sfr unsigned int            PMD2             absolute 0x762;
    const register unsigned short int OC1MD = 0;
    sbit  OC1MD_bit at PMD2.B0;
    const register unsigned short int IC1MD = 8;
    sbit  IC1MD_bit at PMD2.B8;

sfr unsigned int            PMD3             absolute 0x764;
    const register unsigned short int CMPMD = 10;
    sbit  CMPMD_bit at PMD3.B10;

sfr unsigned int   volatile PMD6             absolute 0x76A;
    const register unsigned short int PWM1MD = 8;
    sbit  PWM1MD_bit at PMD6.B8;
    const register unsigned short int PWM2MD = 9;
    sbit  PWM2MD_bit at PMD6.B9;
    const register unsigned short int PWM3MD = 10;
    sbit  PWM3MD_bit at PMD6.B10;

sfr unsigned int   volatile PMD7             absolute 0x76C;
    const register unsigned short int PGA1MD = 1;
    sbit  PGA1MD_bit at PMD7.B1;
    const register unsigned short int CMP1MD = 8;
    sbit  CMP1MD_bit at PMD7.B8;
    const register unsigned short int CMP2MD = 9;
    sbit  CMP2MD_bit at PMD7.B9;

sfr unsigned int   volatile PMD8             absolute 0x76E;
    const register unsigned short int PGA2MD = 10;
    sbit  PGA2MD_bit at PMD8.B10;

sfr unsigned int   volatile IFS0             absolute 0x800;
    const register unsigned short int INT0IF = 0;
    sbit  INT0IF_bit at IFS0.B0;
    const register unsigned short int IC1IF = 1;
    sbit  IC1IF_bit at IFS0.B1;
    const register unsigned short int OC1IF = 2;
    sbit  OC1IF_bit at IFS0.B2;
    const register unsigned short int T1IF = 3;
    sbit  T1IF_bit at IFS0.B3;
    const register unsigned short int T2IF = 7;
    sbit  T2IF_bit at IFS0.B7;
    const register unsigned short int T3IF = 8;
    sbit  T3IF_bit at IFS0.B8;
    const register unsigned short int SPI1EIF = 9;
    sbit  SPI1EIF_bit at IFS0.B9;
    const register unsigned short int SPI1IF = 10;
    sbit  SPI1IF_bit at IFS0.B10;
    const register unsigned short int U1RXIF = 11;
    sbit  U1RXIF_bit at IFS0.B11;
    const register unsigned short int U1TXIF = 12;
    sbit  U1TXIF_bit at IFS0.B12;
    const register unsigned short int ADCIF = 13;
    sbit  ADCIF_bit at IFS0.B13;
    const register unsigned short int NVMIF = 15;
    sbit  NVMIF_bit at IFS0.B15;

sfr unsigned int   volatile IFS1             absolute 0x802;
    const register unsigned short int SI2C1IF = 0;
    sbit  SI2C1IF_bit at IFS1.B0;
    const register unsigned short int MI2C1IF = 1;
    sbit  MI2C1IF_bit at IFS1.B1;
    const register unsigned short int AC1IF = 2;
    sbit  AC1IF_bit at IFS1.B2;
    const register unsigned short int CNIF = 3;
    sbit  CNIF_bit at IFS1.B3;
    const register unsigned short int INT1IF = 4;
    sbit  INT1IF_bit at IFS1.B4;
    const register unsigned short int INT2IF = 13;
    sbit  INT2IF_bit at IFS1.B13;

sfr unsigned int   volatile IFS3             absolute 0x806;
    const register unsigned short int PSEMIF = 9;
    sbit  PSEMIF_bit at IFS3.B9;

sfr unsigned int   volatile IFS4             absolute 0x808;
    const register unsigned short int U1EIF = 1;
    sbit  U1EIF_bit at IFS4.B1;
    const register unsigned short int PSESIF = 9;
    sbit  PSESIF_bit at IFS4.B9;

sfr unsigned int   volatile IFS5             absolute 0x80A;
    const register unsigned short int PWM1IF = 14;
    sbit  PWM1IF_bit at IFS5.B14;
    const register unsigned short int PWM2IF = 15;
    sbit  PWM2IF_bit at IFS5.B15;

sfr unsigned int   volatile IFS6             absolute 0x80C;
    const register unsigned short int PWM3IF = 0;
    sbit  PWM3IF_bit at IFS6.B0;
    const register unsigned short int AC2IF = 7;
    sbit  AC2IF_bit at IFS6.B7;
    const register unsigned short int ADCAN0IF = 14;
    sbit  ADCAN0IF_bit at IFS6.B14;
    const register unsigned short int ADCAN1IF = 15;
    sbit  ADCAN1IF_bit at IFS6.B15;

sfr unsigned int   volatile IFS7             absolute 0x80E;
    const register unsigned short int ADCAN2IF = 0;
    sbit  ADCAN2IF_bit at IFS7.B0;
    const register unsigned short int ADCAN3IF = 1;
    sbit  ADCAN3IF_bit at IFS7.B1;
    const register unsigned short int ADCAN4IF = 2;
    sbit  ADCAN4IF_bit at IFS7.B2;
    const register unsigned short int ADCAN5IF = 3;
    sbit  ADCAN5IF_bit at IFS7.B3;
    const register unsigned short int ADCAN6IF = 4;
    sbit  ADCAN6IF_bit at IFS7.B4;
    const register unsigned short int ADCAN7IF = 5;
    sbit  ADCAN7IF_bit at IFS7.B5;

sfr unsigned int   volatile IFS8             absolute 0x810;
sfr unsigned int   volatile IFS9             absolute 0x812;
    const register unsigned short int ADCAN8IF = 7;
    sbit  ADCAN8IF_bit at IFS9.B7;
    const register unsigned short int ADCAN9IF = 8;
    sbit  ADCAN9IF_bit at IFS9.B8;
    const register unsigned short int ADCAN10IF = 9;
    sbit  ADCAN10IF_bit at IFS9.B9;
    const register unsigned short int ADCAN11IF = 10;
    sbit  ADCAN11IF_bit at IFS9.B10;
    const register unsigned short int ADCAN14IF = 13;
    sbit  ADCAN14IF_bit at IFS9.B13;

sfr unsigned int   volatile IFS10            absolute 0x814;
    const register unsigned short int I2C1BCIF = 13;
    sbit  I2C1BCIF_bit at IFS10.B13;

sfr unsigned int   volatile IFS11            absolute 0x816;
    const register unsigned short int ADCMP0IF = 1;
    sbit  ADCMP0IF_bit at IFS11.B1;
    const register unsigned short int ADCMP1IF = 2;
    sbit  ADCMP1IF_bit at IFS11.B2;
    const register unsigned short int ADFL0IF = 3;
    sbit  ADFL0IF_bit at IFS11.B3;

sfr unsigned int            IEC0             absolute 0x820;
    const register unsigned short int INT0IE = 0;
    sbit  INT0IE_bit at IEC0.B0;
    const register unsigned short int IC1IE = 1;
    sbit  IC1IE_bit at IEC0.B1;
    const register unsigned short int OC1IE = 2;
    sbit  OC1IE_bit at IEC0.B2;
    const register unsigned short int T1IE = 3;
    sbit  T1IE_bit at IEC0.B3;
    const register unsigned short int T2IE = 7;
    sbit  T2IE_bit at IEC0.B7;
    const register unsigned short int T3IE = 8;
    sbit  T3IE_bit at IEC0.B8;
    const register unsigned short int SPI1EIE = 9;
    sbit  SPI1EIE_bit at IEC0.B9;
    const register unsigned short int SPI1IE = 10;
    sbit  SPI1IE_bit at IEC0.B10;
    const register unsigned short int U1RXIE = 11;
    sbit  U1RXIE_bit at IEC0.B11;
    const register unsigned short int U1TXIE = 12;
    sbit  U1TXIE_bit at IEC0.B12;
    const register unsigned short int ADCIE = 13;
    sbit  ADCIE_bit at IEC0.B13;
    const register unsigned short int NVMIE = 15;
    sbit  NVMIE_bit at IEC0.B15;

sfr unsigned int            IEC1             absolute 0x822;
    const register unsigned short int SI2C1IE = 0;
    sbit  SI2C1IE_bit at IEC1.B0;
    const register unsigned short int MI2C1IE = 1;
    sbit  MI2C1IE_bit at IEC1.B1;
    const register unsigned short int AC1IE = 2;
    sbit  AC1IE_bit at IEC1.B2;
    const register unsigned short int CNIE = 3;
    sbit  CNIE_bit at IEC1.B3;
    const register unsigned short int INT1IE = 4;
    sbit  INT1IE_bit at IEC1.B4;
    const register unsigned short int INT2IE = 13;
    sbit  INT2IE_bit at IEC1.B13;

sfr unsigned int            IEC3             absolute 0x826;
    const register unsigned short int PSEMIE = 9;
    sbit  PSEMIE_bit at IEC3.B9;

sfr unsigned int            IEC4             absolute 0x828;
    const register unsigned short int U1EIE = 1;
    sbit  U1EIE_bit at IEC4.B1;
    const register unsigned short int PSESIE = 9;
    sbit  PSESIE_bit at IEC4.B9;

sfr unsigned int            IEC5             absolute 0x82A;
    const register unsigned short int PWM1IE = 14;
    sbit  PWM1IE_bit at IEC5.B14;
    const register unsigned short int PWM2IE = 15;
    sbit  PWM2IE_bit at IEC5.B15;

sfr unsigned int   volatile IEC6             absolute 0x82C;
    const register unsigned short int PWM3IE = 0;
    sbit  PWM3IE_bit at IEC6.B0;
    const register unsigned short int AC2IE = 7;
    sbit  AC2IE_bit at IEC6.B7;
    const register unsigned short int ADCAN0IE = 14;
    sbit  ADCAN0IE_bit at IEC6.B14;
    const register unsigned short int ADCAN1IE = 15;
    sbit  ADCAN1IE_bit at IEC6.B15;

sfr unsigned int   volatile IEC7             absolute 0x82E;
    const register unsigned short int ADCAN2IE = 0;
    sbit  ADCAN2IE_bit at IEC7.B0;
    const register unsigned short int ADCAN3IE = 1;
    sbit  ADCAN3IE_bit at IEC7.B1;
    const register unsigned short int ADCAN4IE = 2;
    sbit  ADCAN4IE_bit at IEC7.B2;
    const register unsigned short int ADCAN5IE = 3;
    sbit  ADCAN5IE_bit at IEC7.B3;
    const register unsigned short int ADCAN6IE = 4;
    sbit  ADCAN6IE_bit at IEC7.B4;
    const register unsigned short int ADCAN7IE = 5;
    sbit  ADCAN7IE_bit at IEC7.B5;

sfr unsigned int   volatile IEC9             absolute 0x832;
    const register unsigned short int ADCAN8IE = 7;
    sbit  ADCAN8IE_bit at IEC9.B7;
    const register unsigned short int ADCAN9IE = 8;
    sbit  ADCAN9IE_bit at IEC9.B8;
    const register unsigned short int ADCAN10IE = 9;
    sbit  ADCAN10IE_bit at IEC9.B9;
    const register unsigned short int ADCAN11IE = 10;
    sbit  ADCAN11IE_bit at IEC9.B10;
    const register unsigned short int ADCAN14IE = 13;
    sbit  ADCAN14IE_bit at IEC9.B13;

sfr unsigned int   volatile IEC10            absolute 0x834;
    const register unsigned short int I2C1BCIE = 13;
    sbit  I2C1BCIE_bit at IEC10.B13;

sfr unsigned int   volatile IEC11            absolute 0x836;
    const register unsigned short int ADCMP0IE = 1;
    sbit  ADCMP0IE_bit at IEC11.B1;
    const register unsigned short int ADCMP1IE = 2;
    sbit  ADCMP1IE_bit at IEC11.B2;
    const register unsigned short int ADFL0IE = 3;
    sbit  ADFL0IE_bit at IEC11.B3;

sfr unsigned int            IPC0             absolute 0x840;
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

sfr unsigned int            IPC1             absolute 0x842;
    const register unsigned short int T2IP0 = 12;
    sbit  T2IP0_bit at IPC1.B12;
    const register unsigned short int T2IP1 = 13;
    sbit  T2IP1_bit at IPC1.B13;
    const register unsigned short int T2IP2 = 14;
    sbit  T2IP2_bit at IPC1.B14;

sfr unsigned int            IPC2             absolute 0x844;
    const register unsigned short int T3IP0 = 0;
    sbit  T3IP0_bit at IPC2.B0;
    const register unsigned short int T3IP1 = 1;
    sbit  T3IP1_bit at IPC2.B1;
    const register unsigned short int T3IP2 = 2;
    sbit  T3IP2_bit at IPC2.B2;
    const register unsigned short int SPI1EIP0 = 4;
    sbit  SPI1EIP0_bit at IPC2.B4;
    const register unsigned short int SPI1EIP1 = 5;
    sbit  SPI1EIP1_bit at IPC2.B5;
    const register unsigned short int SPI1EIP2 = 6;
    sbit  SPI1EIP2_bit at IPC2.B6;
    const register unsigned short int SPI1IP0 = 8;
    sbit  SPI1IP0_bit at IPC2.B8;
    const register unsigned short int SPI1IP1 = 9;
    sbit  SPI1IP1_bit at IPC2.B9;
    const register unsigned short int SPI1IP2 = 10;
    sbit  SPI1IP2_bit at IPC2.B10;
    const register unsigned short int U1RXIP0 = 12;
    sbit  U1RXIP0_bit at IPC2.B12;
    const register unsigned short int U1RXIP1 = 13;
    sbit  U1RXIP1_bit at IPC2.B13;
    const register unsigned short int U1RXIP2 = 14;
    sbit  U1RXIP2_bit at IPC2.B14;

sfr unsigned int            IPC3             absolute 0x846;
    const register unsigned short int U1TXIP0 = 0;
    sbit  U1TXIP0_bit at IPC3.B0;
    const register unsigned short int U1TXIP1 = 1;
    sbit  U1TXIP1_bit at IPC3.B1;
    const register unsigned short int U1TXIP2 = 2;
    sbit  U1TXIP2_bit at IPC3.B2;
    const register unsigned short int ADCIP0 = 4;
    sbit  ADCIP0_bit at IPC3.B4;
    const register unsigned short int ADCIP1 = 5;
    sbit  ADCIP1_bit at IPC3.B5;
    const register unsigned short int ADCIP2 = 6;
    sbit  ADCIP2_bit at IPC3.B6;
    const register unsigned short int NVMIP0 = 12;
    sbit  NVMIP0_bit at IPC3.B12;
    const register unsigned short int NVMIP1 = 13;
    sbit  NVMIP1_bit at IPC3.B13;
    const register unsigned short int NVMIP2 = 14;
    sbit  NVMIP2_bit at IPC3.B14;

sfr unsigned int            IPC4             absolute 0x848;
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
    const register unsigned short int AC1IP0 = 8;
    sbit  AC1IP0_bit at IPC4.B8;
    const register unsigned short int AC1IP1 = 9;
    sbit  AC1IP1_bit at IPC4.B9;
    const register unsigned short int AC1IP2 = 10;
    sbit  AC1IP2_bit at IPC4.B10;
    const register unsigned short int CNIP0 = 12;
    sbit  CNIP0_bit at IPC4.B12;
    const register unsigned short int CNIP1 = 13;
    sbit  CNIP1_bit at IPC4.B13;
    const register unsigned short int CNIP2 = 14;
    sbit  CNIP2_bit at IPC4.B14;

sfr unsigned int            IPC5             absolute 0x84A;
    const register unsigned short int INT1IP0 = 0;
    sbit  INT1IP0_bit at IPC5.B0;
    const register unsigned short int INT1IP1 = 1;
    sbit  INT1IP1_bit at IPC5.B1;
    const register unsigned short int INT1IP2 = 2;
    sbit  INT1IP2_bit at IPC5.B2;

sfr unsigned int            IPC7             absolute 0x84E;
    const register unsigned short int INT2IP0 = 4;
    sbit  INT2IP0_bit at IPC7.B4;
    const register unsigned short int INT2IP1 = 5;
    sbit  INT2IP1_bit at IPC7.B5;
    const register unsigned short int INT2IP2 = 6;
    sbit  INT2IP2_bit at IPC7.B6;

sfr unsigned int            IPC14            absolute 0x85C;
    const register unsigned short int PSEMIP0 = 4;
    sbit  PSEMIP0_bit at IPC14.B4;
    const register unsigned short int PSEMIP1 = 5;
    sbit  PSEMIP1_bit at IPC14.B5;
    const register unsigned short int PSEMIP2 = 6;
    sbit  PSEMIP2_bit at IPC14.B6;

sfr unsigned int            IPC16            absolute 0x860;
    const register unsigned short int U1EIP0 = 4;
    sbit  U1EIP0_bit at IPC16.B4;
    const register unsigned short int U1EIP1 = 5;
    sbit  U1EIP1_bit at IPC16.B5;
    const register unsigned short int U1EIP2 = 6;
    sbit  U1EIP2_bit at IPC16.B6;

sfr unsigned int            IPC18            absolute 0x864;
    const register unsigned short int PSESIP0 = 4;
    sbit  PSESIP0_bit at IPC18.B4;
    const register unsigned short int PSESIP1 = 5;
    sbit  PSESIP1_bit at IPC18.B5;
    const register unsigned short int PSESIP2 = 6;
    sbit  PSESIP2_bit at IPC18.B6;

sfr unsigned int            IPC23            absolute 0x86E;
    const register unsigned short int PWM1IP0 = 8;
    sbit  PWM1IP0_bit at IPC23.B8;
    const register unsigned short int PWM1IP1 = 9;
    sbit  PWM1IP1_bit at IPC23.B9;
    const register unsigned short int PWM1IP2 = 10;
    sbit  PWM1IP2_bit at IPC23.B10;
    const register unsigned short int PWM2IP0 = 12;
    sbit  PWM2IP0_bit at IPC23.B12;
    const register unsigned short int PWM2IP1 = 13;
    sbit  PWM2IP1_bit at IPC23.B13;
    const register unsigned short int PWM2IP2 = 14;
    sbit  PWM2IP2_bit at IPC23.B14;

sfr unsigned int   volatile IPC24            absolute 0x870;
    const register unsigned short int PWM3IP0 = 0;
    sbit  PWM3IP0_bit at IPC24.B0;
    const register unsigned short int PWM3IP1 = 1;
    sbit  PWM3IP1_bit at IPC24.B1;
    const register unsigned short int PWM3IP2 = 2;
    sbit  PWM3IP2_bit at IPC24.B2;

sfr unsigned int   volatile IPC25            absolute 0x872;
    const register unsigned short int AC2IP0 = 12;
    sbit  AC2IP0_bit at IPC25.B12;
    const register unsigned short int AC2IP1 = 13;
    sbit  AC2IP1_bit at IPC25.B13;
    const register unsigned short int AC2IP2 = 14;
    sbit  AC2IP2_bit at IPC25.B14;

sfr unsigned int   volatile IPC27            absolute 0x876;
    const register unsigned short int ADCAN0IP0 = 8;
    sbit  ADCAN0IP0_bit at IPC27.B8;
    const register unsigned short int ADCAN0IP1 = 9;
    sbit  ADCAN0IP1_bit at IPC27.B9;
    const register unsigned short int ADCAN0IP2 = 10;
    sbit  ADCAN0IP2_bit at IPC27.B10;
    const register unsigned short int ADCAN1IP0 = 12;
    sbit  ADCAN1IP0_bit at IPC27.B12;
    const register unsigned short int ADCAN1IP1 = 13;
    sbit  ADCAN1IP1_bit at IPC27.B13;
    const register unsigned short int ADCAN1IP2 = 14;
    sbit  ADCAN1IP2_bit at IPC27.B14;

sfr unsigned int   volatile IPC28            absolute 0x878;
    const register unsigned short int ADCAN2IP0 = 0;
    sbit  ADCAN2IP0_bit at IPC28.B0;
    const register unsigned short int ADCAN2IP1 = 1;
    sbit  ADCAN2IP1_bit at IPC28.B1;
    const register unsigned short int ADCAN2IP2 = 2;
    sbit  ADCAN2IP2_bit at IPC28.B2;
    const register unsigned short int ADCAN3IP0 = 4;
    sbit  ADCAN3IP0_bit at IPC28.B4;
    const register unsigned short int ADCAN3IP1 = 5;
    sbit  ADCAN3IP1_bit at IPC28.B5;
    const register unsigned short int ADCAN3IP2 = 6;
    sbit  ADCAN3IP2_bit at IPC28.B6;
    const register unsigned short int ADCAN4IP0 = 8;
    sbit  ADCAN4IP0_bit at IPC28.B8;
    const register unsigned short int ADCAN4IP1 = 9;
    sbit  ADCAN4IP1_bit at IPC28.B9;
    const register unsigned short int ADCAN4IP2 = 10;
    sbit  ADCAN4IP2_bit at IPC28.B10;
    const register unsigned short int ADCAN5IP0 = 12;
    sbit  ADCAN5IP0_bit at IPC28.B12;
    const register unsigned short int ADCAN5IP1 = 13;
    sbit  ADCAN5IP1_bit at IPC28.B13;
    const register unsigned short int ADCAN5IP2 = 14;
    sbit  ADCAN5IP2_bit at IPC28.B14;

sfr unsigned int   volatile IPC29            absolute 0x87A;
    const register unsigned short int ADCAN6IP0 = 0;
    sbit  ADCAN6IP0_bit at IPC29.B0;
    const register unsigned short int ADCAN6IP1 = 1;
    sbit  ADCAN6IP1_bit at IPC29.B1;
    const register unsigned short int ADCAN6IP2 = 2;
    sbit  ADCAN6IP2_bit at IPC29.B2;
    const register unsigned short int ADCAN7IP0 = 4;
    sbit  ADCAN7IP0_bit at IPC29.B4;
    const register unsigned short int ADCAN7IP1 = 5;
    sbit  ADCAN7IP1_bit at IPC29.B5;
    const register unsigned short int ADCAN7IP2 = 6;
    sbit  ADCAN7IP2_bit at IPC29.B6;

sfr unsigned int   volatile IPC37            absolute 0x88A;
    const register unsigned short int ADCAN8IP0 = 12;
    sbit  ADCAN8IP0_bit at IPC37.B12;
    const register unsigned short int ADCAN8IP1 = 13;
    sbit  ADCAN8IP1_bit at IPC37.B13;
    const register unsigned short int ADCAN8IP2 = 14;
    sbit  ADCAN8IP2_bit at IPC37.B14;

sfr unsigned int   volatile IPC38            absolute 0x88C;
    const register unsigned short int ADCAN9IP0 = 0;
    sbit  ADCAN9IP0_bit at IPC38.B0;
    const register unsigned short int ADCAN9IP1 = 1;
    sbit  ADCAN9IP1_bit at IPC38.B1;
    const register unsigned short int ADCAN9IP2 = 2;
    sbit  ADCAN9IP2_bit at IPC38.B2;
    const register unsigned short int ADCAN10IP0 = 4;
    sbit  ADCAN10IP0_bit at IPC38.B4;
    const register unsigned short int ADCAN10IP1 = 5;
    sbit  ADCAN10IP1_bit at IPC38.B5;
    const register unsigned short int ADCAN10IP2 = 6;
    sbit  ADCAN10IP2_bit at IPC38.B6;
    const register unsigned short int ADCAN11IP0 = 8;
    sbit  ADCAN11IP0_bit at IPC38.B8;
    const register unsigned short int ADCAN11IP1 = 9;
    sbit  ADCAN11IP1_bit at IPC38.B9;
    const register unsigned short int ADCAN11IP2 = 10;
    sbit  ADCAN11IP2_bit at IPC38.B10;

sfr unsigned int   volatile IPC39            absolute 0x88E;
    const register unsigned short int ADCAN14IP0 = 4;
    sbit  ADCAN14IP0_bit at IPC39.B4;
    const register unsigned short int ADCAN14IP1 = 5;
    sbit  ADCAN14IP1_bit at IPC39.B5;
    const register unsigned short int ADCAN14IP2 = 6;
    sbit  ADCAN14IP2_bit at IPC39.B6;

sfr unsigned int   volatile IPC43            absolute 0x896;
    const register unsigned short int I2C1BCIP0 = 4;
    sbit  I2C1BCIP0_bit at IPC43.B4;
    const register unsigned short int I2C1BCIP1 = 5;
    sbit  I2C1BCIP1_bit at IPC43.B5;
    const register unsigned short int I2C1BCIP2 = 6;
    sbit  I2C1BCIP2_bit at IPC43.B6;

sfr unsigned int   volatile IPC44            absolute 0x898;
    const register unsigned short int ADCFLTIP0 = 0;
    sbit  ADCFLTIP0_bit at IPC44.B0;
    const register unsigned short int ADCFLTIP1 = 1;
    sbit  ADCFLTIP1_bit at IPC44.B1;
    const register unsigned short int ADCFLTIP2 = 2;
    sbit  ADCFLTIP2_bit at IPC44.B2;
    const register unsigned short int ADCMP1IP0 = 4;
    sbit  ADCMP1IP0_bit at IPC44.B4;
    const register unsigned short int ADCMP1IP1 = 5;
    sbit  ADCMP1IP1_bit at IPC44.B5;
    const register unsigned short int ADCMP1IP2 = 6;
    sbit  ADCMP1IP2_bit at IPC44.B6;
    const register unsigned short int ADCMP2IP0 = 8;
    sbit  ADCMP2IP0_bit at IPC44.B8;
    const register unsigned short int ADCMP2IP1 = 9;
    sbit  ADCMP2IP1_bit at IPC44.B9;
    const register unsigned short int ADCMP2IP2 = 10;
    sbit  ADCMP2IP2_bit at IPC44.B10;
    const register unsigned short int ADCFLTR1IP0 = 12;
    sbit  ADCFLTR1IP0_bit at IPC44.B12;
    const register unsigned short int ADCFLTR1IP1 = 13;
    sbit  ADCFLTR1IP1_bit at IPC44.B13;
    const register unsigned short int ADCFLTR1IP2 = 14;
    sbit  ADCFLTR1IP2_bit at IPC44.B14;

sfr unsigned int   volatile IPC46            absolute 0x89C;
    const register unsigned short int ADCC0EIP0 = 12;
    sbit  ADCC0EIP0_bit at IPC46.B12;
    const register unsigned short int ADCC0EIP1 = 13;
    sbit  ADCC0EIP1_bit at IPC46.B13;
    const register unsigned short int ADCC0EIP2 = 14;
    sbit  ADCC0EIP2_bit at IPC46.B14;

sfr unsigned int   volatile IPC47            absolute 0x89E;
    const register unsigned short int ADCC1EIP0 = 0;
    sbit  ADCC1EIP0_bit at IPC47.B0;
    const register unsigned short int ADCC1EIP1 = 1;
    sbit  ADCC1EIP1_bit at IPC47.B1;
    const register unsigned short int ADCC1EIP2 = 2;
    sbit  ADCC1EIP2_bit at IPC47.B2;

sfr unsigned int   volatile INTCON1          absolute 0x8C0;
    const register unsigned short int OSCFAIL = 1;
    sbit  OSCFAIL_bit at INTCON1.B1;
    const register unsigned short int STKERR = 2;
    sbit  STKERR_bit at INTCON1.B2;
    const register unsigned short int ADDRERR = 3;
    sbit  ADDRERR_bit at INTCON1.B3;
    const register unsigned short int MATHERR = 4;
    sbit  MATHERR_bit at INTCON1.B4;
    const register unsigned short int DIV0ERR = 6;
    sbit  DIV0ERR_bit at INTCON1.B6;
    const register unsigned short int SFTACERR = 7;
    sbit  SFTACERR_bit at INTCON1.B7;
    const register unsigned short int COVTE = 8;
    sbit  COVTE_bit at INTCON1.B8;
    const register unsigned short int OVBTE = 9;
    sbit  OVBTE_bit at INTCON1.B9;
    const register unsigned short int OVATE = 10;
    sbit  OVATE_bit at INTCON1.B10;
    const register unsigned short int COVBERR = 11;
    sbit  COVBERR_bit at INTCON1.B11;
    const register unsigned short int COVAERR = 12;
    sbit  COVAERR_bit at INTCON1.B12;
    const register unsigned short int OVBERR = 13;
    sbit  OVBERR_bit at INTCON1.B13;
    const register unsigned short int OVAERR = 14;
    sbit  OVAERR_bit at INTCON1.B14;
    const register unsigned short int NSTDIS = 15;
    sbit  NSTDIS_bit at INTCON1.B15;

sfr unsigned int   volatile INTCON2          absolute 0x8C2;
    const register unsigned short int INT0EP = 0;
    sbit  INT0EP_bit at INTCON2.B0;
    const register unsigned short int INT1EP = 1;
    sbit  INT1EP_bit at INTCON2.B1;
    const register unsigned short int INT2EP = 2;
    sbit  INT2EP_bit at INTCON2.B2;
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

sfr unsigned int   volatile INTCON3          absolute 0x8C4;
    const register unsigned short int APLL = 0;
    sbit  APLL_bit at INTCON3.B0;
    const register unsigned short int DOOVR = 4;
    sbit  DOOVR_bit at INTCON3.B4;
    const register unsigned short int NAE = 8;
    sbit  NAE_bit at INTCON3.B8;

sfr unsigned int   volatile INTCON4          absolute 0x8C6;
    const register unsigned short int SGHT = 0;
    sbit  SGHT_bit at INTCON4.B0;

sfr unsigned int   volatile INTTREG          absolute 0x8C8;
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

sfr unsigned int   volatile OC1CON1          absolute 0x900;
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
    const register unsigned short int ENFLTA = 7;
    sbit  ENFLTA_bit at OC1CON1.B7;
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
    const register unsigned short int ENFLT0 = 7;
    sbit  ENFLT0_bit at OC1CON1.B7;

sfr unsigned int   volatile OC1CON2          absolute 0x902;
    const register unsigned short int OCTRIS = 5;
    sbit  OCTRIS_bit at OC1CON2.B5;
    const register unsigned short int OCTRIG = 7;
    sbit  OCTRIG_bit at OC1CON2.B7;
    const register unsigned short int OC32 = 8;
    sbit  OC32_bit at OC1CON2.B8;
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

sfr unsigned int            OC1RS            absolute 0x904;
sfr unsigned int   volatile OC1R             absolute 0x906;
sfr unsigned int   volatile OC1TMR           absolute 0x908;
sfr unsigned int            PTCON            absolute 0xC00;
    const register unsigned short int SEVTPS0 = 0;
    sbit  SEVTPS0_bit at PTCON.B0;
    const register unsigned short int SEVTPS1 = 1;
    sbit  SEVTPS1_bit at PTCON.B1;
    const register unsigned short int SEVTPS2 = 2;
    sbit  SEVTPS2_bit at PTCON.B2;
    const register unsigned short int SEVTPS3 = 3;
    sbit  SEVTPS3_bit at PTCON.B3;
    const register unsigned short int SYNCSRC0 = 4;
    sbit  SYNCSRC0_bit at PTCON.B4;
    const register unsigned short int SYNCSRC1 = 5;
    sbit  SYNCSRC1_bit at PTCON.B5;
    const register unsigned short int SYNCSRC2 = 6;
    sbit  SYNCSRC2_bit at PTCON.B6;
    const register unsigned short int SYNCEN = 7;
    sbit  SYNCEN_bit at PTCON.B7;
    const register unsigned short int SYNCOEN = 8;
    sbit  SYNCOEN_bit at PTCON.B8;
    const register unsigned short int SYNCPOL = 9;
    sbit  SYNCPOL_bit at PTCON.B9;
    const register unsigned short int EIPU = 10;
    sbit  EIPU_bit at PTCON.B10;
    const register unsigned short int SEIEN = 11;
    sbit  SEIEN_bit at PTCON.B11;
    const register unsigned short int SESTAT = 12;
    sbit  SESTAT_bit at PTCON.B12;
    const register unsigned short int PTSIDL = 13;
    sbit  PTSIDL_bit at PTCON.B13;
    const register unsigned short int PTEN = 15;
    sbit  PTEN_bit at PTCON.B15;

sfr unsigned int   volatile PTCON2           absolute 0xC02;
    const register unsigned short int PCLKDIV0 = 0;
    sbit  PCLKDIV0_bit at PTCON2.B0;
    const register unsigned short int PCLKDIV1 = 1;
    sbit  PCLKDIV1_bit at PTCON2.B1;
    const register unsigned short int PCLKDIV2 = 2;
    sbit  PCLKDIV2_bit at PTCON2.B2;

sfr unsigned int   volatile PTPER            absolute 0xC04;
sfr unsigned int   volatile SEVTCMP          absolute 0xC06;
sfr unsigned int   volatile MDC              absolute 0xC0A;
sfr unsigned int   volatile STCON            absolute 0xC0E;
sfr unsigned int   volatile STCON2           absolute 0xC10;
sfr unsigned int   volatile STPER            absolute 0xC12;
sfr unsigned int   volatile SSEVTCMP         absolute 0xC14;
    const register unsigned short int SSEVTCMP0 = 3;
    sbit  SSEVTCMP0_bit at SSEVTCMP.B3;
    const register unsigned short int SSEVTCMP1 = 4;
    sbit  SSEVTCMP1_bit at SSEVTCMP.B4;
    const register unsigned short int SSEVTCMP2 = 5;
    sbit  SSEVTCMP2_bit at SSEVTCMP.B5;
    const register unsigned short int SSEVTCMP3 = 6;
    sbit  SSEVTCMP3_bit at SSEVTCMP.B6;
    const register unsigned short int SSEVTCMP4 = 7;
    sbit  SSEVTCMP4_bit at SSEVTCMP.B7;
    const register unsigned short int SSEVTCMP5 = 8;
    sbit  SSEVTCMP5_bit at SSEVTCMP.B8;
    const register unsigned short int SSEVTCMP6 = 9;
    sbit  SSEVTCMP6_bit at SSEVTCMP.B9;
    const register unsigned short int SSEVTCMP7 = 10;
    sbit  SSEVTCMP7_bit at SSEVTCMP.B10;
    const register unsigned short int SSEVTCMP8 = 11;
    sbit  SSEVTCMP8_bit at SSEVTCMP.B11;
    const register unsigned short int SSEVTCMP9 = 12;
    sbit  SSEVTCMP9_bit at SSEVTCMP.B12;
    const register unsigned short int SSEVTCMP10 = 13;
    sbit  SSEVTCMP10_bit at SSEVTCMP.B13;
    const register unsigned short int SSEVTCMP11 = 14;
    sbit  SSEVTCMP11_bit at SSEVTCMP.B14;
    const register unsigned short int SSEVTCMP12 = 15;
    sbit  SSEVTCMP12_bit at SSEVTCMP.B15;

sfr unsigned int   volatile CHOP             absolute 0xC1A;
    const register unsigned short int CHOPCLK0 = 3;
    sbit  CHOPCLK0_bit at CHOP.B3;
    const register unsigned short int CHOPCLK1 = 4;
    sbit  CHOPCLK1_bit at CHOP.B4;
    const register unsigned short int CHOPCLK2 = 5;
    sbit  CHOPCLK2_bit at CHOP.B5;
    const register unsigned short int CHOPCLK3 = 6;
    sbit  CHOPCLK3_bit at CHOP.B6;
    const register unsigned short int CHOPCLK4 = 7;
    sbit  CHOPCLK4_bit at CHOP.B7;
    const register unsigned short int CHOPCLK5 = 8;
    sbit  CHOPCLK5_bit at CHOP.B8;
    const register unsigned short int CHOPCLK6 = 9;
    sbit  CHOPCLK6_bit at CHOP.B9;
    const register unsigned short int CHPCLKEN = 15;
    sbit  CHPCLKEN_bit at CHOP.B15;

sfr unsigned int   volatile PWMKEY           absolute 0xC1E;
sfr unsigned int   volatile PWMCON1          absolute 0xC20;
    const register unsigned short int IUE = 0;
    sbit  IUE_bit at PWMCON1.B0;
    const register unsigned short int XPRES = 1;
    sbit  XPRES_bit at PWMCON1.B1;
    const register unsigned short int CAM = 2;
    sbit  CAM_bit at PWMCON1.B2;
    const register unsigned short int MTBS = 3;
    sbit  MTBS_bit at PWMCON1.B3;
    const register unsigned short int DTC0 = 6;
    sbit  DTC0_bit at PWMCON1.B6;
    const register unsigned short int DTC1 = 7;
    sbit  DTC1_bit at PWMCON1.B7;
    const register unsigned short int MDCS = 8;
    sbit  MDCS_bit at PWMCON1.B8;
    const register unsigned short int ITB = 9;
    sbit  ITB_bit at PWMCON1.B9;
    const register unsigned short int TRGIEN = 10;
    sbit  TRGIEN_bit at PWMCON1.B10;
    const register unsigned short int CLIEN = 11;
    sbit  CLIEN_bit at PWMCON1.B11;
    const register unsigned short int FLTIEN = 12;
    sbit  FLTIEN_bit at PWMCON1.B12;
    const register unsigned short int TRGSTAT = 13;
    sbit  TRGSTAT_bit at PWMCON1.B13;
    const register unsigned short int CLSTAT = 14;
    sbit  CLSTAT_bit at PWMCON1.B14;
    const register unsigned short int FLTSTAT = 15;
    sbit  FLTSTAT_bit at PWMCON1.B15;

sfr unsigned int   volatile IOCON1           absolute 0xC22;
    const register unsigned short int OSYNC = 0;
    sbit  OSYNC_bit at IOCON1.B0;
    const register unsigned short int SWAP = 1;
    sbit  SWAP_bit at IOCON1.B1;
    const register unsigned short int CLDAT0 = 2;
    sbit  CLDAT0_bit at IOCON1.B2;
    const register unsigned short int CLDAT1 = 3;
    sbit  CLDAT1_bit at IOCON1.B3;
    const register unsigned short int FLTDAT0 = 4;
    sbit  FLTDAT0_bit at IOCON1.B4;
    const register unsigned short int FLTDAT1 = 5;
    sbit  FLTDAT1_bit at IOCON1.B5;
    const register unsigned short int OVRDAT0 = 6;
    sbit  OVRDAT0_bit at IOCON1.B6;
    const register unsigned short int OVRDAT1 = 7;
    sbit  OVRDAT1_bit at IOCON1.B7;
    const register unsigned short int OVRENL = 8;
    sbit  OVRENL_bit at IOCON1.B8;
    const register unsigned short int OVRENH = 9;
    sbit  OVRENH_bit at IOCON1.B9;
    const register unsigned short int PMOD0 = 10;
    sbit  PMOD0_bit at IOCON1.B10;
    const register unsigned short int PMOD1 = 11;
    sbit  PMOD1_bit at IOCON1.B11;
    const register unsigned short int POLL = 12;
    sbit  POLL_bit at IOCON1.B12;
    const register unsigned short int POLH = 13;
    sbit  POLH_bit at IOCON1.B13;
    const register unsigned short int PENL = 14;
    sbit  PENL_bit at IOCON1.B14;
    const register unsigned short int PENH = 15;
    sbit  PENH_bit at IOCON1.B15;

sfr unsigned int   volatile FCLCON1          absolute 0xC24;
    const register unsigned short int FLTMOD0 = 0;
    sbit  FLTMOD0_bit at FCLCON1.B0;
    const register unsigned short int FLTMOD1 = 1;
    sbit  FLTMOD1_bit at FCLCON1.B1;
    const register unsigned short int FLTPOL = 2;
    sbit  FLTPOL_bit at FCLCON1.B2;
    const register unsigned short int FLTSRC0 = 3;
    sbit  FLTSRC0_bit at FCLCON1.B3;
    const register unsigned short int FLTSRC1 = 4;
    sbit  FLTSRC1_bit at FCLCON1.B4;
    const register unsigned short int FLTSRC2 = 5;
    sbit  FLTSRC2_bit at FCLCON1.B5;
    const register unsigned short int FLTSRC3 = 6;
    sbit  FLTSRC3_bit at FCLCON1.B6;
    const register unsigned short int FLTSRC4 = 7;
    sbit  FLTSRC4_bit at FCLCON1.B7;
    const register unsigned short int CLMOD = 8;
    sbit  CLMOD_bit at FCLCON1.B8;
    const register unsigned short int CLPOL = 9;
    sbit  CLPOL_bit at FCLCON1.B9;
    const register unsigned short int CLSRC0 = 10;
    sbit  CLSRC0_bit at FCLCON1.B10;
    const register unsigned short int CLSRC1 = 11;
    sbit  CLSRC1_bit at FCLCON1.B11;
    const register unsigned short int CLSRC2 = 12;
    sbit  CLSRC2_bit at FCLCON1.B12;
    const register unsigned short int CLSRC3 = 13;
    sbit  CLSRC3_bit at FCLCON1.B13;
    const register unsigned short int CLSRC4 = 14;
    sbit  CLSRC4_bit at FCLCON1.B14;
    const register unsigned short int IFLTMOD = 15;
    sbit  IFLTMOD_bit at FCLCON1.B15;

sfr unsigned int   volatile PDC1             absolute 0xC26;
sfr unsigned int   volatile PHASE1           absolute 0xC28;
sfr unsigned int   volatile DTR1             absolute 0xC2A;
sfr unsigned int   volatile ALTDTR1          absolute 0xC2C;
sfr unsigned int   volatile SDC1             absolute 0xC2E;
sfr unsigned int   volatile SPHASE1          absolute 0xC30;
sfr unsigned int   volatile TRIG1            absolute 0xC32;
    const register unsigned short int TRGCMP0 = 3;
    sbit  TRGCMP0_bit at TRIG1.B3;
    const register unsigned short int TRGCMP1 = 4;
    sbit  TRGCMP1_bit at TRIG1.B4;
    const register unsigned short int TRGCMP2 = 5;
    sbit  TRGCMP2_bit at TRIG1.B5;
    const register unsigned short int TRGCMP3 = 6;
    sbit  TRGCMP3_bit at TRIG1.B6;
    const register unsigned short int TRGCMP4 = 7;
    sbit  TRGCMP4_bit at TRIG1.B7;
    const register unsigned short int TRGCMP5 = 8;
    sbit  TRGCMP5_bit at TRIG1.B8;
    const register unsigned short int TRGCMP6 = 9;
    sbit  TRGCMP6_bit at TRIG1.B9;
    const register unsigned short int TRGCMP7 = 10;
    sbit  TRGCMP7_bit at TRIG1.B10;
    const register unsigned short int TRGCMP8 = 11;
    sbit  TRGCMP8_bit at TRIG1.B11;
    const register unsigned short int TRGCMP9 = 12;
    sbit  TRGCMP9_bit at TRIG1.B12;
    const register unsigned short int TRGCMP10 = 13;
    sbit  TRGCMP10_bit at TRIG1.B13;
    const register unsigned short int TRGCMP11 = 14;
    sbit  TRGCMP11_bit at TRIG1.B14;
    const register unsigned short int TRGCMP12 = 15;
    sbit  TRGCMP12_bit at TRIG1.B15;

sfr unsigned int   volatile TRGCON1          absolute 0xC34;
    const register unsigned short int TRGSTRT0 = 0;
    sbit  TRGSTRT0_bit at TRGCON1.B0;
    const register unsigned short int TRGSTRT1 = 1;
    sbit  TRGSTRT1_bit at TRGCON1.B1;
    const register unsigned short int TRGSTRT2 = 2;
    sbit  TRGSTRT2_bit at TRGCON1.B2;
    const register unsigned short int TRGSTRT3 = 3;
    sbit  TRGSTRT3_bit at TRGCON1.B3;
    const register unsigned short int TRGSTRT4 = 4;
    sbit  TRGSTRT4_bit at TRGCON1.B4;
    const register unsigned short int TRGSTRT5 = 5;
    sbit  TRGSTRT5_bit at TRGCON1.B5;
    const register unsigned short int DTM = 7;
    sbit  DTM_bit at TRGCON1.B7;
    const register unsigned short int TRGDIV0 = 12;
    sbit  TRGDIV0_bit at TRGCON1.B12;
    const register unsigned short int TRGDIV1 = 13;
    sbit  TRGDIV1_bit at TRGCON1.B13;
    const register unsigned short int TRGDIV2 = 14;
    sbit  TRGDIV2_bit at TRGCON1.B14;
    const register unsigned short int TRGDIV3 = 15;
    sbit  TRGDIV3_bit at TRGCON1.B15;

sfr unsigned int   volatile STRIG1           absolute 0xC36;
    const register unsigned short int STRGCMP0 = 3;
    sbit  STRGCMP0_bit at STRIG1.B3;
    const register unsigned short int STRGCMP1 = 4;
    sbit  STRGCMP1_bit at STRIG1.B4;
    const register unsigned short int STRGCMP2 = 5;
    sbit  STRGCMP2_bit at STRIG1.B5;
    const register unsigned short int STRGCMP3 = 6;
    sbit  STRGCMP3_bit at STRIG1.B6;
    const register unsigned short int STRGCMP4 = 7;
    sbit  STRGCMP4_bit at STRIG1.B7;
    const register unsigned short int STRGCMP5 = 8;
    sbit  STRGCMP5_bit at STRIG1.B8;
    const register unsigned short int STRGCMP6 = 9;
    sbit  STRGCMP6_bit at STRIG1.B9;
    const register unsigned short int STRGCMP7 = 10;
    sbit  STRGCMP7_bit at STRIG1.B10;
    const register unsigned short int STRGCMP8 = 11;
    sbit  STRGCMP8_bit at STRIG1.B11;
    const register unsigned short int STRGCMP9 = 12;
    sbit  STRGCMP9_bit at STRIG1.B12;
    const register unsigned short int STRGCMP10 = 13;
    sbit  STRGCMP10_bit at STRIG1.B13;
    const register unsigned short int STRGCMP11 = 14;
    sbit  STRGCMP11_bit at STRIG1.B14;
    const register unsigned short int STRGCMP12 = 15;
    sbit  STRGCMP12_bit at STRIG1.B15;

sfr unsigned int   volatile PWMCAP1          absolute 0xC38;
    const register unsigned short int PWMCAP0_ = 3;
    sbit  PWMCAP0__bit at PWMCAP1.B3;
    const register unsigned short int PWMCAP1_ = 4;
    sbit  PWMCAP1__bit at PWMCAP1.B4;
    const register unsigned short int PWMCAP2_ = 5;
    sbit  PWMCAP2__bit at PWMCAP1.B5;
    const register unsigned short int PWMCAP3_ = 6;
    sbit  PWMCAP3__bit at PWMCAP1.B6;
    const register unsigned short int PWMCAP4_ = 7;
    sbit  PWMCAP4__bit at PWMCAP1.B7;
    const register unsigned short int PWMCAP5_ = 8;
    sbit  PWMCAP5__bit at PWMCAP1.B8;
    const register unsigned short int PWMCAP6_ = 9;
    sbit  PWMCAP6__bit at PWMCAP1.B9;
    const register unsigned short int PWMCAP7_ = 10;
    sbit  PWMCAP7__bit at PWMCAP1.B10;
    const register unsigned short int PWMCAP8_ = 11;
    sbit  PWMCAP8__bit at PWMCAP1.B11;
    const register unsigned short int PWMCAP9_ = 12;
    sbit  PWMCAP9__bit at PWMCAP1.B12;
    const register unsigned short int PWMCAP10_ = 13;
    sbit  PWMCAP10__bit at PWMCAP1.B13;
    const register unsigned short int PWMCAP11_ = 14;
    sbit  PWMCAP11__bit at PWMCAP1.B14;
    const register unsigned short int PWMCAP12_ = 15;
    sbit  PWMCAP12__bit at PWMCAP1.B15;

sfr unsigned int   volatile LEBCON1          absolute 0xC3A;
    const register unsigned short int BPLL = 0;
    sbit  BPLL_bit at LEBCON1.B0;
    const register unsigned short int BPLH = 1;
    sbit  BPLH_bit at LEBCON1.B1;
    const register unsigned short int BPHL = 2;
    sbit  BPHL_bit at LEBCON1.B2;
    const register unsigned short int BPHH = 3;
    sbit  BPHH_bit at LEBCON1.B3;
    const register unsigned short int BCL_LEBCON1 = 4;
    sbit  BCL_LEBCON1_bit at LEBCON1.B4;
    const register unsigned short int BCH = 5;
    sbit  BCH_bit at LEBCON1.B5;
    const register unsigned short int CLLEBEN = 10;
    sbit  CLLEBEN_bit at LEBCON1.B10;
    const register unsigned short int FLTLEBEN = 11;
    sbit  FLTLEBEN_bit at LEBCON1.B11;
    const register unsigned short int PLF = 12;
    sbit  PLF_bit at LEBCON1.B12;
    const register unsigned short int PLR = 13;
    sbit  PLR_bit at LEBCON1.B13;
    const register unsigned short int PHF = 14;
    sbit  PHF_bit at LEBCON1.B14;
    const register unsigned short int PHR = 15;
    sbit  PHR_bit at LEBCON1.B15;

sfr unsigned int   volatile LEBDLY1          absolute 0xC3C;
    const register unsigned short int LEB0 = 3;
    sbit  LEB0_bit at LEBDLY1.B3;
    const register unsigned short int LEB1 = 4;
    sbit  LEB1_bit at LEBDLY1.B4;
    const register unsigned short int LEB2 = 5;
    sbit  LEB2_bit at LEBDLY1.B5;
    const register unsigned short int LEB3 = 6;
    sbit  LEB3_bit at LEBDLY1.B6;
    const register unsigned short int LEB4 = 7;
    sbit  LEB4_bit at LEBDLY1.B7;
    const register unsigned short int LEB5 = 8;
    sbit  LEB5_bit at LEBDLY1.B8;
    const register unsigned short int LEB6 = 9;
    sbit  LEB6_bit at LEBDLY1.B9;
    const register unsigned short int LEB7 = 10;
    sbit  LEB7_bit at LEBDLY1.B10;
    const register unsigned short int LEB8 = 11;
    sbit  LEB8_bit at LEBDLY1.B11;

sfr unsigned int   volatile AUXCON1          absolute 0xC3E;
    const register unsigned short int CHOPLEN = 0;
    sbit  CHOPLEN_bit at AUXCON1.B0;
    const register unsigned short int CHOPHEN = 1;
    sbit  CHOPHEN_bit at AUXCON1.B1;
    const register unsigned short int CHOPSEL0 = 2;
    sbit  CHOPSEL0_bit at AUXCON1.B2;
    const register unsigned short int CHOPSEL1 = 3;
    sbit  CHOPSEL1_bit at AUXCON1.B3;
    const register unsigned short int CHOPSEL2 = 4;
    sbit  CHOPSEL2_bit at AUXCON1.B4;
    const register unsigned short int CHOPSEL3 = 5;
    sbit  CHOPSEL3_bit at AUXCON1.B5;
    const register unsigned short int BLANKSEL0 = 8;
    sbit  BLANKSEL0_bit at AUXCON1.B8;
    const register unsigned short int BLANKSEL1 = 9;
    sbit  BLANKSEL1_bit at AUXCON1.B9;
    const register unsigned short int BLANKSEL2 = 10;
    sbit  BLANKSEL2_bit at AUXCON1.B10;
    const register unsigned short int BLANKSEL3 = 11;
    sbit  BLANKSEL3_bit at AUXCON1.B11;
    const register unsigned short int HRDDIS = 14;
    sbit  HRDDIS_bit at AUXCON1.B14;
    const register unsigned short int HRPDIS = 15;
    sbit  HRPDIS_bit at AUXCON1.B15;

sfr unsigned int   volatile PWMCON2          absolute 0xC40;
sfr unsigned int   volatile IOCON2           absolute 0xC42;
sfr unsigned int   volatile FCLCON2          absolute 0xC44;
sfr unsigned int   volatile PDC2             absolute 0xC46;
sfr unsigned int   volatile PHASE2           absolute 0xC48;
sfr unsigned int   volatile DTR2             absolute 0xC4A;
sfr unsigned int   volatile ALTDTR2          absolute 0xC4C;
sfr unsigned int   volatile SDC2             absolute 0xC4E;
sfr unsigned int   volatile SPHASE2          absolute 0xC50;
sfr unsigned int   volatile TRIG2            absolute 0xC52;
sfr unsigned int   volatile TRGCON2          absolute 0xC54;
sfr unsigned int   volatile STRIG2           absolute 0xC56;
sfr unsigned int   volatile PWMCAP2          absolute 0xC58;
sfr unsigned int   volatile LEBCON2          absolute 0xC5A;
    const register unsigned short int BCL_LEBCON2 = 4;
    sbit  BCL_LEBCON2_bit at LEBCON2.B4;

sfr unsigned int   volatile LEBDLY2          absolute 0xC5C;
sfr unsigned int   volatile AUXCON2          absolute 0xC5E;
sfr unsigned int   volatile PWMCON3          absolute 0xC60;
sfr unsigned int   volatile IOCON3           absolute 0xC62;
sfr unsigned int   volatile FCLCON3          absolute 0xC64;
sfr unsigned int   volatile PDC3             absolute 0xC66;
sfr unsigned int   volatile PHASE3           absolute 0xC68;
sfr unsigned int   volatile DTR3             absolute 0xC6A;
sfr unsigned int   volatile ALTDTR3          absolute 0xC6C;
sfr unsigned int   volatile SDC3             absolute 0xC6E;
sfr unsigned int   volatile SPHASE3          absolute 0xC70;
sfr unsigned int   volatile TRIG3            absolute 0xC72;
sfr unsigned int   volatile TRGCON3          absolute 0xC74;
sfr unsigned int   volatile STRIG3           absolute 0xC76;
sfr unsigned int   volatile PWMCAP3          absolute 0xC78;
sfr unsigned int   volatile LEBCON3          absolute 0xC7A;
    const register unsigned short int BCL_LEBCON3 = 4;
    sbit  BCL_LEBCON3_bit at LEBCON3.B4;

sfr unsigned int   volatile LEBDLY3          absolute 0xC7C;
sfr unsigned int   volatile AUXCON3          absolute 0xC7E;
sfr unsigned int   volatile TRISA            absolute 0xE00;
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

sfr unsigned int   volatile PORTA            absolute 0xE02;
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

sfr unsigned int   volatile LATA             absolute 0xE04;
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

sfr unsigned int   volatile ODCA             absolute 0xE06;
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

sfr unsigned int   volatile CNENA            absolute 0xE08;
    const register unsigned short int CNIEA0 = 0;
    sbit  CNIEA0_bit at CNENA.B0;
    const register unsigned short int CNIEA1 = 1;
    sbit  CNIEA1_bit at CNENA.B1;
    const register unsigned short int CNIEA2 = 2;
    sbit  CNIEA2_bit at CNENA.B2;
    const register unsigned short int CNIEA3 = 3;
    sbit  CNIEA3_bit at CNENA.B3;
    const register unsigned short int CNIEA4 = 4;
    sbit  CNIEA4_bit at CNENA.B4;

sfr unsigned int   volatile CNPUA            absolute 0xE0A;
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

sfr unsigned int   volatile CNPDA            absolute 0xE0C;
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

sfr unsigned int   volatile ANSELA           absolute 0xE0E;
    const register unsigned short int ANSA0 = 0;
    sbit  ANSA0_bit at ANSELA.B0;
    const register unsigned short int ANSA1 = 1;
    sbit  ANSA1_bit at ANSELA.B1;
    const register unsigned short int ANSA2 = 2;
    sbit  ANSA2_bit at ANSELA.B2;

sfr unsigned int   volatile TRISB            absolute 0xE10;
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

sfr unsigned int   volatile PORTB            absolute 0xE12;
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

sfr unsigned int   volatile LATB             absolute 0xE14;
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

sfr unsigned int   volatile ODCB             absolute 0xE16;
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

sfr unsigned int   volatile CNENB            absolute 0xE18;
    const register unsigned short int CNIEB0 = 0;
    sbit  CNIEB0_bit at CNENB.B0;
    const register unsigned short int CNIEB1 = 1;
    sbit  CNIEB1_bit at CNENB.B1;
    const register unsigned short int CNIEB2 = 2;
    sbit  CNIEB2_bit at CNENB.B2;
    const register unsigned short int CNIEB3 = 3;
    sbit  CNIEB3_bit at CNENB.B3;
    const register unsigned short int CNIEB4 = 4;
    sbit  CNIEB4_bit at CNENB.B4;
    const register unsigned short int CNIEB5 = 5;
    sbit  CNIEB5_bit at CNENB.B5;
    const register unsigned short int CNIEB6 = 6;
    sbit  CNIEB6_bit at CNENB.B6;
    const register unsigned short int CNIEB7 = 7;
    sbit  CNIEB7_bit at CNENB.B7;
    const register unsigned short int CNIEB8 = 8;
    sbit  CNIEB8_bit at CNENB.B8;
    const register unsigned short int CNIEB9 = 9;
    sbit  CNIEB9_bit at CNENB.B9;
    const register unsigned short int CNIEB10 = 10;
    sbit  CNIEB10_bit at CNENB.B10;
    const register unsigned short int CNIEB11 = 11;
    sbit  CNIEB11_bit at CNENB.B11;
    const register unsigned short int CNIEB12 = 12;
    sbit  CNIEB12_bit at CNENB.B12;
    const register unsigned short int CNIEB13 = 13;
    sbit  CNIEB13_bit at CNENB.B13;
    const register unsigned short int CNIEB14 = 14;
    sbit  CNIEB14_bit at CNENB.B14;
    const register unsigned short int CNIEB15 = 15;
    sbit  CNIEB15_bit at CNENB.B15;

sfr unsigned int   volatile CNPUB            absolute 0xE1A;
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

sfr unsigned int   volatile CNPDB            absolute 0xE1C;
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

sfr unsigned int   volatile ANSELB           absolute 0xE1E;
    const register unsigned short int ANSB0 = 0;
    sbit  ANSB0_bit at ANSELB.B0;
    const register unsigned short int ANSB1 = 1;
    sbit  ANSB1_bit at ANSELB.B1;
    const register unsigned short int ANSB2 = 2;
    sbit  ANSB2_bit at ANSELB.B2;
    const register unsigned short int ANSB3 = 3;
    sbit  ANSB3_bit at ANSELB.B3;
    const register unsigned short int ANSB4 = 4;
    sbit  ANSB4_bit at ANSELB.B4;
    const register unsigned short int ANSB5 = 5;
    sbit  ANSB5_bit at ANSELB.B5;
    const register unsigned short int ANSB6 = 6;
    sbit  ANSB6_bit at ANSELB.B6;
    const register unsigned short int ANSB7 = 7;
    sbit  ANSB7_bit at ANSELB.B7;
    const register unsigned short int ANSB9 = 9;
    sbit  ANSB9_bit at ANSELB.B9;
    const register unsigned short int ANSB10 = 10;
    sbit  ANSB10_bit at ANSELB.B10;

sfr unsigned int   volatile _APPO            absolute 0xFA0;
sfr unsigned int   volatile _APPIN           absolute 0xFA2;
sfr unsigned int   volatile APPS             absolute 0xFA4;
    const register unsigned short int APIFUL = 0;
    sbit  APIFUL_bit at APPS.B0;
    const register unsigned short int APIOV = 1;
    sbit  APIOV_bit at APPS.B1;
    const register unsigned short int APOFUL = 2;
    sbit  APOFUL_bit at APPS.B2;
    const register unsigned short int APOOV = 3;
    sbit  APOOV_bit at APPS.B3;
    const register unsigned short int STRFUL = 4;
    sbit  STRFUL_bit at APPS.B4;

sfr unsigned int   volatile STROUTL          absolute 0xFA6;
sfr unsigned int   volatile STROUTH          absolute 0xFA8;
sfr unsigned int   volatile STROVCNT         absolute 0xFAA;
sfr unsigned int   volatile JDATAH           absolute 0xFF0;
sfr unsigned int   volatile JDATAL           absolute 0xFF2;

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
sfr volatile typeSRBITS SRbits absolute 0x42;

typedef struct tagCORCONBITS {
  union {
    struct {
      unsigned IF:1;
      unsigned RND:1;
      unsigned SFA:1;
      unsigned IPL3:1;
      unsigned ACCSAT:1;
      unsigned SATDW:1;
      unsigned SATB:1;
      unsigned SATA:1;
      unsigned DL:3;
      unsigned EDT:1;
      unsigned US:2;
      unsigned :1;
      unsigned VAR:1;
    };
    struct {
      unsigned :8;
      unsigned DL0:1;
      unsigned DL1:1;
      unsigned DL2:1;
      unsigned :1;
      unsigned US0:1;
      unsigned US1:1;
    };
  };
} typeCORCONBITS;
sfr volatile typeCORCONBITS CORCONbits absolute 0x44;

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
sfr volatile typeMODCONBITS MODCONbits absolute 0x46;

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
sfr volatile typeXBREVBITS XBREVbits absolute 0x50;

typedef struct tagTBLPAGBITS {
  union {
    struct {
      unsigned TBLPAG:8;
    };
  };
} typeTBLPAGBITS;
sfr volatile typeTBLPAGBITS TBLPAGbits absolute 0x54;

typedef struct tagCTXTSTATBITS {
  union {
    struct {
      unsigned MCTXI:3;
      unsigned :5;
      unsigned CCTXI:3;
    };
  };
} typeCTXTSTATBITS;
sfr volatile typeCTXTSTATBITS CTXTSTATbits absolute 0x5A;

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

typedef struct tagIC1CON2BITS {
  union {
    struct {
      unsigned SYNCSEL:5;
      unsigned :1;
      unsigned TRIGSTAT:1;
      unsigned ICTRIG:1;
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
  };
} typeI2C1CON1BITS;
sfr volatile typeI2C1CON1BITS I2C1CON1bits absolute 0x200;

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
  };
} typeI2C1CONLBITS;
sfr volatile typeI2C1CONLBITS I2C1CONLbits absolute 0x200;

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
sfr volatile typeI2C1CON2BITS I2C1CON2bits absolute 0x202;

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
sfr volatile typeI2C1CONHBITS I2C1CONHbits absolute 0x202;

typedef struct tagI2C1STATBITS {
  union {
    struct {
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
      unsigned :2;
      unsigned ACKTIM:1;
      unsigned TRSTAT:1;
      unsigned ACKSTAT:1;
    };
  };
} typeI2C1STATBITS;
sfr volatile typeI2C1STATBITS I2C1STATbits absolute 0x204;

typedef struct tagI2C1ADDBITS {
  union {
    struct {
      unsigned ADD:10;
    };
  };
} typeI2C1ADDBITS;
sfr volatile typeI2C1ADDBITS I2C1ADDbits absolute 0x206;

typedef struct tagI2C1MSKBITS {
  union {
    struct {
      unsigned AMSK:10;
    };
    struct {
      unsigned AMSK0:1;
      unsigned AMSK1:1;
      unsigned AMSK2:1;
      unsigned AMSK3:1;
      unsigned AMSK4:1;
      unsigned AMSK5:1;
      unsigned AMSK6:1;
      unsigned AMSK7:1;
      unsigned AMSK8:1;
      unsigned AMSK9:1;
    };
  };
} typeI2C1MSKBITS;
sfr volatile typeI2C1MSKBITS I2C1MSKbits absolute 0x208;

typedef struct tagI2C1TRNBITS {
  union {
    struct {
      unsigned I2CTXDATA:8;
    };
  };
} typeI2C1TRNBITS;
sfr volatile typeI2C1TRNBITS I2C1TRNbits absolute 0x20C;

typedef struct tagI2C1RCVBITS {
  union {
    struct {
      unsigned I2CRXDATA:8;
    };
  };
} typeI2C1RCVBITS;
sfr volatile typeI2C1RCVBITS I2C1RCVbits absolute 0x20E;

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

typedef struct tagADCON1LBITS {
  union {
    struct {
      unsigned :12;
      unsigned PUMPEN:1;
      unsigned ADSIDL:1;
      unsigned :1;
      unsigned ADON:1;
    };
  };
} typeADCON1LBITS;
sfr volatile typeADCON1LBITS ADCON1Lbits absolute 0x300;

typedef struct tagADCON1HBITS {
  union {
    struct {
      unsigned :5;
      unsigned SHRRES:2;
      unsigned FORM:1;
    };
    struct {
      unsigned :5;
      unsigned SHRRES0:1;
      unsigned SHRRES1:1;
    };
  };
} typeADCON1HBITS;
sfr volatile typeADCON1HBITS ADCON1Hbits absolute 0x302;

typedef struct tagADCON2LBITS {
  union {
    struct {
      unsigned SHRADCS:7;
      unsigned :1;
      unsigned SHREISEL:3;
      unsigned :1;
      unsigned EIEN:1;
      unsigned :1;
      unsigned REFERCIE:1;
      unsigned REFCIE:1;
    };
    struct {
      unsigned SHRADCS0:1;
      unsigned SHRADCS1:1;
      unsigned SHRADCS2:1;
      unsigned SHRADCS3:1;
      unsigned SHRADCS4:1;
      unsigned SHRADCS5:1;
      unsigned SHRADCS6:1;
      unsigned :1;
      unsigned SHREISEL0:1;
      unsigned SHREISEL1:1;
      unsigned SHREISEL2:1;
    };
  };
} typeADCON2LBITS;
sfr volatile typeADCON2LBITS ADCON2Lbits absolute 0x304;

typedef struct tagADCON2HBITS {
  union {
    struct {
      unsigned SHRSAMC:10;
      unsigned :4;
      unsigned REFERR:1;
      unsigned REFRDY:1;
    };
    struct {
      unsigned SHRSAMC0:1;
      unsigned SHRSAMC1:1;
      unsigned SHRSAMC2:1;
      unsigned SHRSAMC3:1;
      unsigned SHRSAMC4:1;
      unsigned SHRSAMC5:1;
      unsigned SHRSAMC6:1;
      unsigned SHRSAMC7:1;
      unsigned SHRSAMC8:1;
      unsigned SHRSAMC9:1;
    };
  };
} typeADCON2HBITS;
sfr volatile typeADCON2HBITS ADCON2Hbits absolute 0x306;

typedef struct tagADCON3LBITS {
  union {
    struct {
      unsigned CNVCHSEL:6;
      unsigned SWCTRG:1;
      unsigned SWLCTRG:1;
      unsigned CNVRTCH:1;
      unsigned SHRSAMP:1;
      unsigned SUSPRDY:1;
      unsigned SUSPCIE:1;
      unsigned SUSPEND:1;
      unsigned REFSEL:3;
    };
    struct {
      unsigned CNVCHSEL0:1;
      unsigned CNVCHSEL1:1;
      unsigned CNVCHSEL2:1;
      unsigned CNVCHSEL3:1;
      unsigned CNVCHSEL4:1;
      unsigned CNVCHSEL5:1;
      unsigned :7;
      unsigned REFSEL0:1;
      unsigned REFSEL1:1;
      unsigned REFSEL2:1;
    };
  };
} typeADCON3LBITS;
sfr volatile typeADCON3LBITS ADCON3Lbits absolute 0x308;

typedef struct tagADCON3HBITS {
  union {
    struct {
      unsigned C0EN:1;
      unsigned C1EN:1;
      unsigned :5;
      unsigned SHREN:1;
      unsigned CLKDIV:6;
      unsigned CLKSEL:2;
    };
    struct {
      unsigned :8;
      unsigned CLKDIV0:1;
      unsigned CLKDIV1:1;
      unsigned CLKDIV2:1;
      unsigned CLKDIV3:1;
      unsigned CLKDIV4:1;
      unsigned CLKDIV5:1;
      unsigned CLKSEL0:1;
      unsigned CLKSEL1:1;
    };
  };
} typeADCON3HBITS;
sfr volatile typeADCON3HBITS ADCON3Hbits absolute 0x30A;

typedef struct tagADCON4LBITS {
  union {
    struct {
      unsigned SAMC0EN:1;
      unsigned SAMC1EN:1;
      unsigned :6;
      unsigned SYNCTRG0:1;
      unsigned SYNCTRG1:1;
    };
  };
} typeADCON4LBITS;
sfr volatile typeADCON4LBITS ADCON4Lbits absolute 0x30C;

typedef struct tagADCON4HBITS {
  union {
    struct {
      unsigned C0CHS:2;
      unsigned C1CHS:2;
    };
    struct {
      unsigned C0CHS0:1;
      unsigned C0CHS1:1;
      unsigned C1CHS0:1;
      unsigned C1CHS1:1;
    };
  };
} typeADCON4HBITS;
sfr volatile typeADCON4HBITS ADCON4Hbits absolute 0x30E;

typedef struct tagADMOD0LBITS {
  union {
    struct {
      unsigned SIGN0:1;
      unsigned DIFF0:1;
      unsigned SIGN1:1;
      unsigned DIFF1:1;
      unsigned SIGN2:1;
      unsigned :1;
      unsigned SIGN3:1;
      unsigned :1;
      unsigned SIGN4:1;
      unsigned :1;
      unsigned SIGN5:1;
      unsigned :1;
      unsigned SIGN6:1;
      unsigned :1;
      unsigned SIGN7:1;
    };
  };
} typeADMOD0LBITS;
sfr volatile typeADMOD0LBITS ADMOD0Lbits absolute 0x310;

typedef struct tagADMOD0HBITS {
  union {
    struct {
      unsigned SIGN8:1;
      unsigned :1;
      unsigned SIGN9:1;
      unsigned :1;
      unsigned SIGN10:1;
      unsigned :1;
      unsigned SIGN11:1;
      unsigned :5;
      unsigned SIGN14:1;
    };
  };
} typeADMOD0HBITS;
sfr volatile typeADMOD0HBITS ADMOD0Hbits absolute 0x312;

typedef struct tagADIELBITS {
  union {
    struct {
      unsigned IE0:1;
      unsigned IE1:1;
      unsigned IE2:1;
      unsigned IE3:1;
      unsigned IE4:1;
      unsigned IE5:1;
      unsigned IE6:1;
      unsigned IE7:1;
      unsigned IE8:1;
      unsigned IE9:1;
      unsigned IE10:1;
      unsigned IE11:1;
      unsigned :2;
      unsigned IE14:1;
    };
  };
} typeADIELBITS;
sfr volatile typeADIELBITS ADIELbits absolute 0x320;

typedef struct tagADSTATLBITS {
  union {
    struct {
      unsigned AN0RDY:1;
      unsigned AN1RDY:1;
      unsigned AN2RDY:1;
      unsigned AN3RDY:1;
      unsigned AN4RDY:1;
      unsigned AN5RDY:1;
      unsigned AN6RDY:1;
      unsigned AN7RDY:1;
      unsigned AN8RDY:1;
      unsigned AN9RDY:1;
      unsigned AN10RDY:1;
      unsigned AN11RDY:1;
      unsigned :2;
      unsigned AN14RDY:1;
    };
  };
} typeADSTATLBITS;
sfr volatile typeADSTATLBITS ADSTATLbits absolute 0x330;

typedef struct tagADCMP0ENLBITS {
  union {
    struct {
      unsigned CMPEN0:1;
      unsigned CMPEN1:1;
      unsigned CMPEN2:1;
      unsigned CMPEN3:1;
      unsigned CMPEN4:1;
      unsigned CMPEN5:1;
      unsigned CMPEN6:1;
      unsigned CMPEN7:1;
      unsigned CMPEN8:1;
      unsigned CMPEN9:1;
      unsigned CMPEN10:1;
      unsigned CMPEN11:1;
      unsigned :2;
      unsigned CMPEN14:1;
    };
  };
} typeADCMP0ENLBITS;
sfr volatile typeADCMP0ENLBITS ADCMP0ENLbits absolute 0x338;

typedef struct tagADCMP1ENLBITS {
  union {
    struct {
      unsigned CMPEN0:1;
      unsigned CMPEN1:1;
      unsigned CMPEN2:1;
      unsigned CMPEN3:1;
      unsigned CMPEN4:1;
      unsigned CMPEN5:1;
      unsigned CMPEN6:1;
      unsigned CMPEN7:1;
      unsigned CMPEN8:1;
      unsigned CMPEN9:1;
      unsigned CMPEN10:1;
      unsigned CMPEN11:1;
      unsigned :2;
      unsigned CMPEN14:1;
    };
  };
} typeADCMP1ENLBITS;
sfr volatile typeADCMP1ENLBITS ADCMP1ENLbits absolute 0x340;

typedef struct tagADFL0CONBITS {
  union {
    struct {
      unsigned FLCHSEL:5;
      unsigned :3;
      unsigned RDY:1;
      unsigned IE:1;
      unsigned OVRSAM:3;
      unsigned MODE:2;
      unsigned FLEN:1;
    };
    struct {
      unsigned FLCHSEL0:1;
      unsigned FLCHSEL1:1;
      unsigned FLCHSEL2:1;
      unsigned FLCHSEL3:1;
      unsigned FLCHSEL4:1;
      unsigned :5;
      unsigned OVRSAM0:1;
      unsigned OVRSAM1:1;
      unsigned OVRSAM2:1;
    };
  };
} typeADFL0CONBITS;
sfr volatile typeADFL0CONBITS ADFL0CONbits absolute 0x36A;

typedef struct tagADTRIG0LBITS {
  union {
    struct {
      unsigned TRGSRC0:5;
      unsigned :3;
      unsigned TRGSRC1:5;
    };
    struct {
      unsigned TRIGSRC00:1;
      unsigned TRIGSRC01:1;
      unsigned TRIGSRC02:1;
      unsigned TRIGSRC03:1;
      unsigned TRIGSRC04:1;
      unsigned :3;
      unsigned TRGSRC10:1;
      unsigned TRGSRC11:1;
      unsigned TRGSRC12:1;
      unsigned TRGSRC13:1;
      unsigned TRGSRC14:1;
    };
  };
} typeADTRIG0LBITS;
sfr volatile typeADTRIG0LBITS ADTRIG0Lbits absolute 0x380;

typedef struct tagADTRIG0HBITS {
  union {
    struct {
      unsigned TRGSRC2:5;
      unsigned :3;
      unsigned TRGSRC3:5;
    };
    struct {
      unsigned TRIGSRC20:1;
      unsigned TRIGSRC21:1;
      unsigned TRIGSRC22:1;
      unsigned TRIGSRC23:1;
      unsigned TRIGSRC24:1;
      unsigned :3;
      unsigned TRGSRC30:1;
      unsigned TRGSRC31:1;
      unsigned TRGSRC32:1;
      unsigned TRGSRC33:1;
      unsigned TRGSRC34:1;
    };
  };
} typeADTRIG0HBITS;
sfr volatile typeADTRIG0HBITS ADTRIG0Hbits absolute 0x382;

typedef struct tagADTRIG1LBITS {
  union {
    struct {
      unsigned TRGSRC4:5;
      unsigned :3;
      unsigned TRGSRC5:5;
    };
    struct {
      unsigned TRIGSRC40:1;
      unsigned TRIGSRC41:1;
      unsigned TRIGSRC42:1;
      unsigned TRIGSRC43:1;
      unsigned TRIGSRC44:1;
      unsigned :3;
      unsigned TRGSRC50:1;
      unsigned TRGSRC51:1;
      unsigned TRGSRC52:1;
      unsigned TRGSRC53:1;
      unsigned TRGSRC54:1;
    };
  };
} typeADTRIG1LBITS;
sfr volatile typeADTRIG1LBITS ADTRIG1Lbits absolute 0x384;

typedef struct tagADTRIG1HBITS {
  union {
    struct {
      unsigned TRGSRC6:5;
      unsigned :3;
      unsigned TRGSRC7:5;
    };
    struct {
      unsigned TRIGSRC60:1;
      unsigned TRIGSRC61:1;
      unsigned TRIGSRC62:1;
      unsigned TRIGSRC63:1;
      unsigned TRIGSRC64:1;
      unsigned :3;
      unsigned TRGSRC70:1;
      unsigned TRGSRC71:1;
      unsigned TRGSRC72:1;
      unsigned TRGSRC73:1;
      unsigned TRGSRC74:1;
    };
  };
} typeADTRIG1HBITS;
sfr volatile typeADTRIG1HBITS ADTRIG1Hbits absolute 0x386;

typedef struct tagADTRIG2LBITS {
  union {
    struct {
      unsigned TRGSRC8:5;
      unsigned :3;
      unsigned TRGSRC9:5;
    };
    struct {
      unsigned TRIGSRC80:1;
      unsigned TRIGSRC81:1;
      unsigned TRIGSRC82:1;
      unsigned TRIGSRC83:1;
      unsigned TRIGSRC84:1;
      unsigned :3;
      unsigned TRGSRC90:1;
      unsigned TRGSRC91:1;
      unsigned TRGSRC92:1;
      unsigned TRGSRC93:1;
      unsigned TRGSRC94:1;
    };
  };
} typeADTRIG2LBITS;
sfr volatile typeADTRIG2LBITS ADTRIG2Lbits absolute 0x388;

typedef struct tagADTRIG2HBITS {
  union {
    struct {
      unsigned TRGSRC10:5;
      unsigned :3;
      unsigned TRGSRC11:5;
    };
    struct {
      unsigned TRIGSRC100:1;
      unsigned TRIGSRC101:1;
      unsigned TRIGSRC102:1;
      unsigned TRIGSRC103:1;
      unsigned TRIGSRC104:1;
      unsigned :3;
      unsigned TRGSRC110:1;
      unsigned TRGSRC111:1;
      unsigned TRGSRC112:1;
      unsigned TRGSRC113:1;
      unsigned TRGSRC114:1;
    };
  };
} typeADTRIG2HBITS;
sfr volatile typeADTRIG2HBITS ADTRIG2Hbits absolute 0x38A;

typedef struct tagADTRIG3HBITS {
  union {
    struct {
      unsigned TRGSRC14:5;
    };
    struct {
      unsigned TRIGSRC140:1;
      unsigned TRIGSRC141:1;
      unsigned TRIGSRC142:1;
      unsigned TRIGSRC143:1;
      unsigned TRIGSRC144:1;
    };
  };
} typeADTRIG3HBITS;
sfr volatile typeADTRIG3HBITS ADTRIG3Hbits absolute 0x38E;

typedef struct tagADCMP0CONBITS {
  union {
    struct {
      unsigned LOLO:1;
      unsigned LOHI:1;
      unsigned HILO:1;
      unsigned HIHI:1;
      unsigned BTWN:1;
      unsigned STAT:1;
      unsigned IE:1;
      unsigned CMPEN:1;
      unsigned CHNL:5;
    };
    struct {
      unsigned :8;
      unsigned CHNL0:1;
      unsigned CHNL1:1;
      unsigned CHNL2:1;
      unsigned CHNL3:1;
      unsigned CHNL4:1;
    };
  };
} typeADCMP0CONBITS;
sfr volatile typeADCMP0CONBITS ADCMP0CONbits absolute 0x3A0;

typedef struct tagADCMP1CONBITS {
  union {
    struct {
      unsigned LOLO:1;
      unsigned LOHI:1;
      unsigned HILO:1;
      unsigned HIHI:1;
      unsigned BTWN:1;
      unsigned STAT:1;
      unsigned IE:1;
      unsigned CMPEN:1;
      unsigned CHNL:5;
    };
    struct {
      unsigned :8;
      unsigned CHNL0:1;
      unsigned CHNL1:1;
      unsigned CHNL2:1;
      unsigned CHNL3:1;
      unsigned CHNL4:1;
    };
  };
} typeADCMP1CONBITS;
sfr volatile typeADCMP1CONBITS ADCMP1CONbits absolute 0x3A4;

typedef struct tagADLVLTRGLBITS {
  union {
    struct {
      unsigned LVLEN0:1;
      unsigned LVLEN1:1;
      unsigned LVLEN2:1;
      unsigned LVLEN3:1;
      unsigned LVLEN4:1;
      unsigned LVLEN5:1;
      unsigned LVLEN6:1;
      unsigned LVLEN7:1;
      unsigned LVLEN8:1;
      unsigned LVLEN9:1;
      unsigned LVLEN10:1;
      unsigned LVLEN11:1;
      unsigned :2;
      unsigned LVLEN14:1;
    };
  };
} typeADLVLTRGLBITS;
sfr volatile typeADLVLTRGLBITS ADLVLTRGLbits absolute 0x3D0;

typedef struct tagADCORE0LBITS {
  union {
    struct {
      unsigned SAMC:10;
    };
    struct {
      unsigned SAMC0:1;
      unsigned SAMC1:1;
      unsigned SAMC2:1;
      unsigned SAMC3:1;
      unsigned SAMC4:1;
      unsigned SAMC5:1;
      unsigned SAMC6:1;
      unsigned SAMC7:1;
      unsigned SAMC8:1;
      unsigned SAMC9:1;
    };
  };
} typeADCORE0LBITS;
sfr volatile typeADCORE0LBITS ADCORE0Lbits absolute 0x3D4;

typedef struct tagADCORE0HBITS {
  union {
    struct {
      unsigned ADCS:7;
      unsigned :1;
      unsigned RES:2;
      unsigned EISEL:3;
    };
    struct {
      unsigned ADCS0:1;
      unsigned ADCS1:1;
      unsigned ADCS2:1;
      unsigned ADCS3:1;
      unsigned ADCS4:1;
      unsigned ADCS5:1;
      unsigned ADCS6:1;
      unsigned :1;
      unsigned RES0:1;
      unsigned RES1:1;
      unsigned EISEL0:1;
      unsigned EISEL1:1;
      unsigned EISEL2:1;
    };
  };
} typeADCORE0HBITS;
sfr volatile typeADCORE0HBITS ADCORE0Hbits absolute 0x3D6;

typedef struct tagADCORE1LBITS {
  union {
    struct {
      unsigned SAMC:10;
    };
    struct {
      unsigned SAMC0:1;
      unsigned SAMC1:1;
      unsigned SAMC2:1;
      unsigned SAMC3:1;
      unsigned SAMC4:1;
      unsigned SAMC5:1;
      unsigned SAMC6:1;
      unsigned SAMC7:1;
      unsigned SAMC8:1;
      unsigned SAMC9:1;
    };
  };
} typeADCORE1LBITS;
sfr volatile typeADCORE1LBITS ADCORE1Lbits absolute 0x3D8;

typedef struct tagADCORE1HBITS {
  union {
    struct {
      unsigned ADCS:7;
      unsigned :1;
      unsigned RES:2;
      unsigned EISEL:3;
    };
    struct {
      unsigned ADCS0:1;
      unsigned ADCS1:1;
      unsigned ADCS2:1;
      unsigned ADCS3:1;
      unsigned ADCS4:1;
      unsigned ADCS5:1;
      unsigned ADCS6:1;
      unsigned :1;
      unsigned RES0:1;
      unsigned RES1:1;
      unsigned EISEL0:1;
      unsigned EISEL1:1;
      unsigned EISEL2:1;
    };
  };
} typeADCORE1HBITS;
sfr volatile typeADCORE1HBITS ADCORE1Hbits absolute 0x3DA;

typedef struct tagADEIELBITS {
  union {
    struct {
      unsigned EIEN0:1;
      unsigned EIEN1:1;
      unsigned EIEN2:1;
      unsigned EIEN3:1;
      unsigned EIEN4:1;
      unsigned EIEN5:1;
      unsigned EIEN6:1;
      unsigned EIEN7:1;
      unsigned EIEN8:1;
      unsigned EIEN9:1;
      unsigned EIEN10:1;
      unsigned EIEN11:1;
      unsigned :2;
      unsigned EIEN14:1;
    };
  };
} typeADEIELBITS;
sfr volatile typeADEIELBITS ADEIELbits absolute 0x3F0;

typedef struct tagADEISTATLBITS {
  union {
    struct {
      unsigned EISTAT0:1;
      unsigned EISTAT1:1;
      unsigned EISTAT2:1;
      unsigned EISTAT3:1;
      unsigned EISTAT4:1;
      unsigned EISTAT5:1;
      unsigned EISTAT6:1;
      unsigned EISTAT7:1;
      unsigned EISTAT8:1;
      unsigned EISTAT9:1;
      unsigned EISTAT10:1;
      unsigned EISTAT11:1;
      unsigned :2;
      unsigned EISTAT14:1;
    };
  };
} typeADEISTATLBITS;
sfr volatile typeADEISTATLBITS ADEISTATLbits absolute 0x3F8;

typedef struct tagADCON5LBITS {
  union {
    struct {
      unsigned C0PWR:1;
      unsigned C1PWR:1;
      unsigned C2PWR:1;
      unsigned C3PWR:1;
      unsigned C4PWR:1;
      unsigned C5PWR:1;
      unsigned C6PWR:1;
      unsigned SHRPWR:1;
      unsigned C0RDY:1;
      unsigned C1RDY:1;
      unsigned C2RDY:1;
      unsigned C3RDY:1;
      unsigned C4RDY:1;
      unsigned C5RDY:1;
      unsigned C6RDY:1;
      unsigned SHRRDY:1;
    };
  };
} typeADCON5LBITS;
sfr volatile typeADCON5LBITS ADCON5Lbits absolute 0x400;

typedef struct tagADCON5HBITS {
  union {
    struct {
      unsigned C0CIE:1;
      unsigned C1CIE:1;
      unsigned C2CIE:1;
      unsigned C3CIE:1;
      unsigned C4CIE:1;
      unsigned C5CIE:1;
      unsigned C6CIE:1;
      unsigned SHRCIE:1;
      unsigned WARMTIME:4;
    };
    struct {
      unsigned C0C1E:1;
      unsigned C1C1E:1;
      unsigned C2C1E:1;
      unsigned C3C1E:1;
      unsigned C4C1E:1;
      unsigned C5C1E:1;
      unsigned C6C1E:1;
    };
  };
} typeADCON5HBITS;
sfr volatile typeADCON5HBITS ADCON5Hbits absolute 0x402;

typedef struct tagADCAL0LBITS {
  union {
    struct {
      unsigned CAL0RUN:1;
      unsigned CAL0EN:1;
      unsigned CAL0DIFF:1;
      unsigned CAL0SKIP:1;
      unsigned :3;
      unsigned CAL0RDY:1;
      unsigned CAL1RUN:1;
      unsigned CAL1EN:1;
      unsigned CAL1DIFF:1;
      unsigned CAL1SKIP:1;
      unsigned :3;
      unsigned CAL1RDY:1;
    };
  };
} typeADCAL0LBITS;
sfr volatile typeADCAL0LBITS ADCAL0Lbits absolute 0x404;

typedef struct tagADCAL1HBITS {
  union {
    struct {
      unsigned :8;
      unsigned CSHRRUN:1;
      unsigned CSHREN:1;
      unsigned CSHRDIFF:1;
      unsigned CSHRSKIP:1;
      unsigned :3;
      unsigned CSHRRDY:1;
    };
  };
} typeADCAL1HBITS;
sfr volatile typeADCAL1HBITS ADCAL1Hbits absolute 0x40A;

typedef struct tagPGA1CONBITS {
  union {
    struct {
      unsigned GAIN:3;
      unsigned :5;
      unsigned SELNI:3;
      unsigned SELPI:3;
      unsigned :1;
      unsigned PGAEN:1;
    };
    struct {
      unsigned GAIN0:1;
      unsigned GAIN1:1;
      unsigned GAIN2:1;
      unsigned :5;
      unsigned SELNI0:1;
      unsigned SELNI1:1;
      unsigned SELNI2:1;
      unsigned SELPI0:1;
      unsigned SELPI1:1;
      unsigned SELPI2:1;
    };
  };
} typePGA1CONBITS;
sfr volatile typePGA1CONBITS PGA1CONbits absolute 0x504;

typedef struct tagPGA1CALBITS {
  union {
    struct {
      unsigned PGACAL:6;
    };
  };
} typePGA1CALBITS;
sfr volatile typePGA1CALBITS PGA1CALbits absolute 0x506;

typedef struct tagPGA2CONBITS {
  union {
    struct {
      unsigned GAIN:3;
      unsigned :5;
      unsigned SELNI:3;
      unsigned SELPI:3;
      unsigned :1;
      unsigned PGAEN:1;
    };
    struct {
      unsigned GAIN0:1;
      unsigned GAIN1:1;
      unsigned GAIN2:1;
      unsigned :5;
      unsigned SELNI0:1;
      unsigned SELNI1:1;
      unsigned SELNI2:1;
      unsigned SELPI0:1;
      unsigned SELPI1:1;
      unsigned SELPI2:1;
    };
  };
} typePGA2CONBITS;
sfr volatile typePGA2CONBITS PGA2CONbits absolute 0x508;

typedef struct tagPGA2CALBITS {
  union {
    struct {
      unsigned PGACAL:6;
    };
  };
} typePGA2CALBITS;
sfr volatile typePGA2CALBITS PGA2CALbits absolute 0x50A;

typedef struct tagCMP1CONBITS {
  union {
    struct {
      unsigned :1;
      unsigned CMPPOL:1;
      unsigned ALTINP:1;
      unsigned CMPSTAT:1;
      unsigned HYSPOL:1;
      unsigned :1;
      unsigned INSEL:2;
      unsigned :1;
      unsigned FCLKSEL:1;
      unsigned FLTREN:1;
      unsigned HYSSEL:2;
      unsigned CMPSIDL:1;
      unsigned :1;
      unsigned CMPON:1;
    };
    struct {
      unsigned :6;
      unsigned INSEL0:1;
      unsigned INSEL1:1;
      unsigned :3;
      unsigned HYSSEL0:1;
      unsigned HYSSEL1:1;
    };
  };
} typeCMP1CONBITS;
sfr volatile typeCMP1CONBITS CMP1CONbits absolute 0x540;

typedef struct tagCMP1DACBITS {
  union {
    struct {
      unsigned CMREF:12;
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
      unsigned CMREF10:1;
      unsigned CMREF11:1;
    };
  };
} typeCMP1DACBITS;
sfr volatile typeCMP1DACBITS CMP1DACbits absolute 0x542;

typedef struct tagCMP2CONBITS {
  union {
    struct {
      unsigned :1;
      unsigned CMPPOL:1;
      unsigned ALTINP:1;
      unsigned CMPSTAT:1;
      unsigned HYSPOL:1;
      unsigned :1;
      unsigned INSEL:2;
      unsigned :1;
      unsigned FCLKSEL:1;
      unsigned FLTREN:1;
      unsigned HYSSEL:2;
      unsigned CMPSIDL:1;
      unsigned :1;
      unsigned CMPON:1;
    };
    struct {
      unsigned :6;
      unsigned INSEL0:1;
      unsigned INSEL1:1;
      unsigned :3;
      unsigned HYSSEL0:1;
      unsigned HYSSEL1:1;
    };
  };
} typeCMP2CONBITS;
sfr volatile typeCMP2CONBITS CMP2CONbits absolute 0x544;

typedef struct tagCMP2DACBITS {
  union {
    struct {
      unsigned CMREF:12;
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
      unsigned CMREF10:1;
      unsigned CMREF11:1;
    };
  };
} typeCMP2DACBITS;
sfr volatile typeCMP2DACBITS CMP2DACbits absolute 0x546;

typedef struct tagRPOR0BITS {
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
} typeRPOR0BITS;
sfr volatile typeRPOR0BITS RPOR0bits absolute 0x670;

typedef struct tagRPOR1BITS {
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
} typeRPOR1BITS;
sfr volatile typeRPOR1BITS RPOR1bits absolute 0x672;

typedef struct tagRPOR2BITS {
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
} typeRPOR2BITS;
sfr volatile typeRPOR2BITS RPOR2bits absolute 0x674;

typedef struct tagRPOR3BITS {
  union {
    struct {
      unsigned RP38R:6;
      unsigned :2;
      unsigned RP39R:6;
    };
    struct {
      unsigned RP38R0:1;
      unsigned RP38R1:1;
      unsigned RP38R2:1;
      unsigned RP38R3:1;
      unsigned RP38R4:1;
      unsigned RP38R5:1;
      unsigned :2;
      unsigned RP39R0:1;
      unsigned RP39R1:1;
      unsigned RP39R2:1;
      unsigned RP39R3:1;
      unsigned RP39R4:1;
      unsigned RP39R5:1;
    };
  };
} typeRPOR3BITS;
sfr volatile typeRPOR3BITS RPOR3bits absolute 0x676;

typedef struct tagRPOR4BITS {
  union {
    struct {
      unsigned RP40R:6;
      unsigned :2;
      unsigned RP41R:6;
    };
    struct {
      unsigned RP40R0:1;
      unsigned RP40R1:1;
      unsigned RP40R2:1;
      unsigned RP40R3:1;
      unsigned RP40R4:1;
      unsigned RP40R5:1;
      unsigned :2;
      unsigned RP41R0:1;
      unsigned RP41R1:1;
      unsigned RP41R2:1;
      unsigned RP41R3:1;
      unsigned RP41R4:1;
      unsigned RP41R5:1;
    };
  };
} typeRPOR4BITS;
sfr volatile typeRPOR4BITS RPOR4bits absolute 0x678;

typedef struct tagRPOR5BITS {
  union {
    struct {
      unsigned RP42R:6;
      unsigned :2;
      unsigned RP43R:6;
    };
    struct {
      unsigned RP42R0:1;
      unsigned RP42R1:1;
      unsigned RP42R2:1;
      unsigned RP42R3:1;
      unsigned RP42R4:1;
      unsigned RP42R5:1;
      unsigned :2;
      unsigned RP43R0:1;
      unsigned RP43R1:1;
      unsigned RP43R2:1;
      unsigned RP43R3:1;
      unsigned RP43R4:1;
      unsigned RP43R5:1;
    };
  };
} typeRPOR5BITS;
sfr volatile typeRPOR5BITS RPOR5bits absolute 0x67A;

typedef struct tagRPOR6BITS {
  union {
    struct {
      unsigned RP44R:6;
      unsigned :2;
      unsigned RP45R:6;
    };
    struct {
      unsigned RP44R0:1;
      unsigned RP44R1:1;
      unsigned RP44R2:1;
      unsigned RP44R3:1;
      unsigned RP44R4:1;
      unsigned RP44R5:1;
      unsigned :2;
      unsigned RP45R0:1;
      unsigned RP45R1:1;
      unsigned RP45R2:1;
      unsigned RP45R3:1;
      unsigned RP45R4:1;
      unsigned RP45R5:1;
    };
  };
} typeRPOR6BITS;
sfr volatile typeRPOR6BITS RPOR6bits absolute 0x67C;

typedef struct tagRPOR7BITS {
  union {
    struct {
      unsigned RP46R:6;
      unsigned :2;
      unsigned RP47R:6;
    };
    struct {
      unsigned RP46R0:1;
      unsigned RP46R1:1;
      unsigned RP46R2:1;
      unsigned RP46R3:1;
      unsigned RP46R4:1;
      unsigned RP46R5:1;
      unsigned :2;
      unsigned RP47R0:1;
      unsigned RP47R1:1;
      unsigned RP47R2:1;
      unsigned RP47R3:1;
      unsigned RP47R4:1;
      unsigned RP47R5:1;
    };
  };
} typeRPOR7BITS;
sfr volatile typeRPOR7BITS RPOR7bits absolute 0x67E;

typedef struct tagRPOR8BITS {
  union {
    struct {
      unsigned RP176R:6;
      unsigned :2;
      unsigned RP177R:6;
    };
    struct {
      unsigned RP176R0:1;
      unsigned RP176R1:1;
      unsigned RP176R2:1;
      unsigned RP176R3:1;
      unsigned RP176R4:1;
      unsigned RP176R5:1;
      unsigned :2;
      unsigned RP177R0:1;
      unsigned RP177R1:1;
      unsigned RP177R2:1;
      unsigned RP177R3:1;
      unsigned RP177R4:1;
      unsigned RP177R5:1;
    };
  };
} typeRPOR8BITS;
sfr volatile typeRPOR8BITS RPOR8bits absolute 0x680;

typedef struct tagRPOR9BITS {
  union {
    struct {
      unsigned RP178R:6;
      unsigned :2;
      unsigned RP179R:6;
    };
    struct {
      unsigned RP178R0:1;
      unsigned RP178R1:1;
      unsigned RP178R2:1;
      unsigned RP178R3:1;
      unsigned RP178R4:1;
      unsigned RP178R5:1;
      unsigned :2;
      unsigned RP179R0:1;
      unsigned RP179R1:1;
      unsigned RP179R2:1;
      unsigned RP179R3:1;
      unsigned RP179R4:1;
      unsigned RP179R5:1;
    };
  };
} typeRPOR9BITS;
sfr volatile typeRPOR9BITS RPOR9bits absolute 0x682;

typedef struct tagRPOR10BITS {
  union {
    struct {
      unsigned RP180R:6;
      unsigned :2;
      unsigned RP181R:6;
    };
    struct {
      unsigned RP180R0:1;
      unsigned RP180R1:1;
      unsigned RP180R2:1;
      unsigned RP180R3:1;
      unsigned RP180R4:1;
      unsigned RP180R5:1;
      unsigned :2;
      unsigned RP181R0:1;
      unsigned RP181R1:1;
      unsigned RP181R2:1;
      unsigned RP181R3:1;
      unsigned RP181R4:1;
      unsigned RP181R5:1;
    };
  };
} typeRPOR10BITS;
sfr volatile typeRPOR10BITS RPOR10bits absolute 0x684;

typedef struct tagRPINR0BITS {
  union {
    struct {
      unsigned :8;
      unsigned INT1R:8;
    };
    struct {
      unsigned :8;
      unsigned INT1R0:1;
      unsigned INT1R1:1;
      unsigned INT1R2:1;
      unsigned INT1R3:1;
      unsigned INT1R4:1;
      unsigned INT1R5:1;
      unsigned INT1R6:1;
      unsigned INT1R7:1;
    };
  };
} typeRPINR0BITS;
sfr volatile typeRPINR0BITS RPINR0bits absolute 0x6A0;

typedef struct tagRPINR1BITS {
  union {
    struct {
      unsigned INT2R:8;
    };
    struct {
      unsigned INT2R0:1;
      unsigned INT2R1:1;
      unsigned INT2R2:1;
      unsigned INT2R3:1;
      unsigned INT2R4:1;
      unsigned INT2R5:1;
      unsigned INT2R6:1;
      unsigned INT2R7:1;
    };
  };
} typeRPINR1BITS;
sfr volatile typeRPINR1BITS RPINR1bits absolute 0x6A2;

typedef struct tagRPINR2BITS {
  union {
    struct {
      unsigned :8;
      unsigned T1CKR:8;
    };
    struct {
      unsigned :8;
      unsigned T1CKR0:1;
      unsigned T1CKR1:1;
      unsigned T1CKR2:1;
      unsigned T1CKR3:1;
      unsigned T1CKR4:1;
      unsigned T1CKR5:1;
      unsigned T1CKR6:1;
      unsigned T1CKR7:1;
    };
  };
} typeRPINR2BITS;
sfr volatile typeRPINR2BITS RPINR2bits absolute 0x6A4;

typedef struct tagRPINR3BITS {
  union {
    struct {
      unsigned T2CKR:8;
      unsigned T3CKR:8;
    };
    struct {
      unsigned T2CKR0:1;
      unsigned T2CKR1:1;
      unsigned T2CKR2:1;
      unsigned T2CKR3:1;
      unsigned T2CKR4:1;
      unsigned T2CKR5:1;
      unsigned T2CKR6:1;
      unsigned T2CKR7:1;
      unsigned T3CKR0:1;
      unsigned T3CKR1:1;
      unsigned T3CKR2:1;
      unsigned T3CKR3:1;
      unsigned T3CKR4:1;
      unsigned T3CKR5:1;
      unsigned T3CKR6:1;
      unsigned T3CKR7:1;
    };
  };
} typeRPINR3BITS;
sfr volatile typeRPINR3BITS RPINR3bits absolute 0x6A6;

typedef struct tagRPINR7BITS {
  union {
    struct {
      unsigned IC1R:8;
    };
    struct {
      unsigned IC1R0:1;
      unsigned IC1R1:1;
      unsigned IC1R2:1;
      unsigned IC1R3:1;
      unsigned IC1R4:1;
      unsigned IC1R5:1;
      unsigned IC1R6:1;
      unsigned IC1R7:1;
    };
  };
} typeRPINR7BITS;
sfr volatile typeRPINR7BITS RPINR7bits absolute 0x6AE;

typedef struct tagRPINR11BITS {
  union {
    struct {
      unsigned OCFAR:8;
    };
    struct {
      unsigned OCFAR0:1;
      unsigned OCFAR1:1;
      unsigned OCFAR2:1;
      unsigned OCFAR3:1;
      unsigned OCFAR4:1;
      unsigned OCFAR5:1;
      unsigned OCFAR6:1;
      unsigned OCFAR7:1;
    };
  };
} typeRPINR11BITS;
sfr volatile typeRPINR11BITS RPINR11bits absolute 0x6B6;

typedef struct tagRPINR12BITS {
  union {
    struct {
      unsigned FLT1R:8;
      unsigned FLT2R:8;
    };
    struct {
      unsigned FLT1R0:1;
      unsigned FLT1R1:1;
      unsigned FLT1R2:1;
      unsigned FLT1R3:1;
      unsigned FLT1R4:1;
      unsigned FLT1R5:1;
      unsigned FLT1R6:1;
      unsigned FLT1R7:1;
      unsigned FLT2R0:1;
      unsigned FLT2R1:1;
      unsigned FLT2R2:1;
      unsigned FLT2R3:1;
      unsigned FLT2R4:1;
      unsigned FLT2R5:1;
      unsigned FLT2R6:1;
      unsigned FLT2R7:1;
    };
  };
} typeRPINR12BITS;
sfr volatile typeRPINR12BITS RPINR12bits absolute 0x6B8;

typedef struct tagRPINR13BITS {
  union {
    struct {
      unsigned FLT3R:8;
      unsigned FLT4R:8;
    };
    struct {
      unsigned FLT3R0:1;
      unsigned FLT3R1:1;
      unsigned FLT3R2:1;
      unsigned FLT3R3:1;
      unsigned FLT3R4:1;
      unsigned FLT3R5:1;
      unsigned FLT3R6:1;
      unsigned FLT3R7:1;
      unsigned FLT4R0:1;
      unsigned FLT4R1:1;
      unsigned FLT4R2:1;
      unsigned FLT4R3:1;
      unsigned FLT4R4:1;
      unsigned FLT4R5:1;
      unsigned FLT4R6:1;
      unsigned FLT4R7:1;
    };
  };
} typeRPINR13BITS;
sfr volatile typeRPINR13BITS RPINR13bits absolute 0x6BA;

typedef struct tagRPINR18BITS {
  union {
    struct {
      unsigned U1RXR:8;
      unsigned U1CTSR:8;
    };
    struct {
      unsigned U1RXR0:1;
      unsigned U1RXR1:1;
      unsigned U1RXR2:1;
      unsigned U1RXR3:1;
      unsigned U1RXR4:1;
      unsigned U1RXR5:1;
      unsigned U1RXR6:1;
      unsigned U1RXR7:1;
      unsigned U1CTSR0:1;
      unsigned U1CTSR1:1;
      unsigned U1CTSR2:1;
      unsigned U1CTSR3:1;
      unsigned U1CTSR4:1;
      unsigned U1CTSR5:1;
      unsigned U1CTSR6:1;
      unsigned U1CTSR7:1;
    };
  };
} typeRPINR18BITS;
sfr volatile typeRPINR18BITS RPINR18bits absolute 0x6C4;

typedef struct tagRPINR20BITS {
  union {
    struct {
      unsigned SDI1R:8;
      unsigned SCK1INR:8;
    };
    struct {
      unsigned SDI1R0:1;
      unsigned SDI1R1:1;
      unsigned SDI1R2:1;
      unsigned SDI1R3:1;
      unsigned SDI1R4:1;
      unsigned SDI1R5:1;
      unsigned SDI1R6:1;
      unsigned SDI1R7:1;
      unsigned SCK1INR0:1;
      unsigned SCK1INR1:1;
      unsigned SCK1INR2:1;
      unsigned SCK1INR3:1;
      unsigned SCK1INR4:1;
      unsigned SCK1INR5:1;
      unsigned SCK1INR6:1;
      unsigned SCK1INR7:1;
    };
  };
} typeRPINR20BITS;
sfr volatile typeRPINR20BITS RPINR20bits absolute 0x6C8;

typedef struct tagRPINR21BITS {
  union {
    struct {
      unsigned SS1R:8;
    };
    struct {
      unsigned SS1R0:1;
      unsigned SS1R1:1;
      unsigned SS1R2:1;
      unsigned SS1R3:1;
      unsigned SS1R4:1;
      unsigned SS1R5:1;
      unsigned SS1R6:1;
      unsigned SS1R7:1;
    };
  };
} typeRPINR21BITS;
sfr volatile typeRPINR21BITS RPINR21bits absolute 0x6CA;

typedef struct tagRPINR37BITS {
  union {
    struct {
      unsigned :8;
      unsigned SYNCI1R:8;
    };
    struct {
      unsigned :8;
      unsigned SYNCI1R0:1;
      unsigned SYNCI1R1:1;
      unsigned SYNCI1R2:1;
      unsigned SYNCI1R3:1;
      unsigned SYNCI1R4:1;
      unsigned SYNCI1R5:1;
      unsigned SYNCI1R6:1;
      unsigned SYNCI1R7:1;
    };
  };
} typeRPINR37BITS;
sfr volatile typeRPINR37BITS RPINR37bits absolute 0x6EA;

typedef struct tagRPINR38BITS {
  union {
    struct {
      unsigned SYNCI2R:8;
    };
    struct {
      unsigned SYNCI2R0:1;
      unsigned SYNCI2R1:1;
      unsigned SYNCI2R2:1;
      unsigned SYNCI2R3:1;
      unsigned SYNCI2R4:1;
      unsigned SYNCI2R5:1;
      unsigned SYNCI2R6:1;
      unsigned SYNCI2R7:1;
    };
  };
} typeRPINR38BITS;
sfr volatile typeRPINR38BITS RPINR38bits absolute 0x6EC;

typedef struct tagRPINR42BITS {
  union {
    struct {
      unsigned FLT5R:8;
      unsigned FLT6R:8;
    };
    struct {
      unsigned FLT5R0:1;
      unsigned FLT5R1:1;
      unsigned FLT5R2:1;
      unsigned FLT5R3:1;
      unsigned FLT5R4:1;
      unsigned FLT5R5:1;
      unsigned FLT5R6:1;
      unsigned FLT5R7:1;
      unsigned FLT6R0:1;
      unsigned FLT6R1:1;
      unsigned FLT6R2:1;
      unsigned FLT6R3:1;
      unsigned FLT6R4:1;
      unsigned FLT6R5:1;
      unsigned FLT6R6:1;
      unsigned FLT6R7:1;
    };
  };
} typeRPINR42BITS;
sfr volatile typeRPINR42BITS RPINR42bits absolute 0x6F4;

typedef struct tagRPINR43BITS {
  union {
    struct {
      unsigned FLT7R:8;
      unsigned FLT8R:8;
    };
    struct {
      unsigned FLT7R0:1;
      unsigned FLT7R1:1;
      unsigned FLT7R2:1;
      unsigned FLT7R3:1;
      unsigned FLT7R4:1;
      unsigned FLT7R5:1;
      unsigned FLT7R6:1;
      unsigned FLT7R7:1;
      unsigned FLT8R0:1;
      unsigned FLT8R1:1;
      unsigned FLT8R2:1;
      unsigned FLT8R3:1;
      unsigned FLT8R4:1;
      unsigned FLT8R5:1;
      unsigned FLT8R6:1;
      unsigned FLT8R7:1;
    };
  };
} typeRPINR43BITS;
sfr volatile typeRPINR43BITS RPINR43bits absolute 0x6F6;

typedef struct tagNVMCONBITS {
  union {
    struct {
      unsigned NVMOP:4;
      unsigned :4;
      unsigned URERR:1;
      unsigned RPDF:1;
      unsigned :2;
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
sfr volatile typeNVMCONBITS NVMCONbits absolute 0x728;

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
sfr volatile typeNVMADRBITS NVMADRbits absolute 0x72A;

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
sfr volatile typeNVMADRLBITS NVMADRLbits absolute 0x72A;

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
sfr volatile typeNVMADRHBITS NVMADRHbits absolute 0x72C;

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
sfr volatile typeNVMADRUBITS NVMADRUbits absolute 0x72C;

typedef struct tagNVMSRCADRLBITS {
  union {
    struct {
      unsigned :1;
      unsigned NVMSRCADRL:15;
    };
  };
} typeNVMSRCADRLBITS;
sfr volatile typeNVMSRCADRLBITS NVMSRCADRLbits absolute 0x730;

typedef struct tagNVMSRCADRHBITS {
  union {
    struct {
      unsigned NVMSRCADRH:8;
    };
  };
} typeNVMSRCADRHBITS;
sfr volatile typeNVMSRCADRHBITS NVMSRCADRHbits absolute 0x732;

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
      unsigned :1;
      unsigned VREGSF:1;
      unsigned :1;
      unsigned SBOREN:1;
      unsigned IOPUWR:1;
      unsigned TRAPR:1;
    };
  };
} typeRCONBITS;
sfr volatile typeRCONBITS RCONbits absolute 0x740;

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

typedef struct tagLFSRBITS {
  union {
    struct {
      unsigned LFSR:15;
    };
  };
} typeLFSRBITS;
sfr volatile typeLFSRBITS LFSRbits absolute 0x74C;

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

typedef struct tagPMD1BITS {
  union {
    struct {
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
      unsigned T3MD:1;
    };
  };
} typePMD1BITS;
sfr volatile typePMD1BITS PMD1bits absolute 0x760;

typedef struct tagPMD2BITS {
  union {
    struct {
      unsigned OC1MD:1;
      unsigned :7;
      unsigned IC1MD:1;
    };
  };
} typePMD2BITS;
sfr volatile typePMD2BITS PMD2bits absolute 0x762;

typedef struct tagPMD3BITS {
  union {
    struct {
      unsigned :10;
      unsigned CMPMD:1;
    };
  };
} typePMD3BITS;
sfr volatile typePMD3BITS PMD3bits absolute 0x764;

typedef struct tagPMD6BITS {
  union {
    struct {
      unsigned :8;
      unsigned PWM1MD:1;
      unsigned PWM2MD:1;
      unsigned PWM3MD:1;
    };
  };
} typePMD6BITS;
sfr volatile typePMD6BITS PMD6bits absolute 0x76A;

typedef struct tagPMD7BITS {
  union {
    struct {
      unsigned :1;
      unsigned PGA1MD:1;
      unsigned :6;
      unsigned CMP1MD:1;
      unsigned CMP2MD:1;
    };
  };
} typePMD7BITS;
sfr volatile typePMD7BITS PMD7bits absolute 0x76C;

typedef struct tagPMD8BITS {
  union {
    struct {
      unsigned :10;
      unsigned PGA2MD:1;
    };
  };
} typePMD8BITS;
sfr volatile typePMD8BITS PMD8bits absolute 0x76E;

typedef struct tagIFS0BITS {
  union {
    struct {
      unsigned INT0IF:1;
      unsigned IC1IF:1;
      unsigned OC1IF:1;
      unsigned T1IF:1;
      unsigned :3;
      unsigned T2IF:1;
      unsigned T3IF:1;
      unsigned SPI1EIF:1;
      unsigned SPI1IF:1;
      unsigned U1RXIF:1;
      unsigned U1TXIF:1;
      unsigned ADCIF:1;
      unsigned :1;
      unsigned NVMIF:1;
    };
  };
} typeIFS0BITS;
sfr volatile typeIFS0BITS IFS0bits absolute 0x800;

typedef struct tagIFS1BITS {
  union {
    struct {
      unsigned SI2C1IF:1;
      unsigned MI2C1IF:1;
      unsigned AC1IF:1;
      unsigned CNIF:1;
      unsigned INT1IF:1;
      unsigned :8;
      unsigned INT2IF:1;
    };
  };
} typeIFS1BITS;
sfr volatile typeIFS1BITS IFS1bits absolute 0x802;

typedef struct tagIFS3BITS {
  union {
    struct {
      unsigned :9;
      unsigned PSEMIF:1;
    };
  };
} typeIFS3BITS;
sfr volatile typeIFS3BITS IFS3bits absolute 0x806;

typedef struct tagIFS4BITS {
  union {
    struct {
      unsigned :1;
      unsigned U1EIF:1;
      unsigned :7;
      unsigned PSESIF:1;
    };
  };
} typeIFS4BITS;
sfr volatile typeIFS4BITS IFS4bits absolute 0x808;

typedef struct tagIFS5BITS {
  union {
    struct {
      unsigned :14;
      unsigned PWM1IF:1;
      unsigned PWM2IF:1;
    };
  };
} typeIFS5BITS;
sfr volatile typeIFS5BITS IFS5bits absolute 0x80A;

typedef struct tagIFS6BITS {
  union {
    struct {
      unsigned PWM3IF:1;
      unsigned :6;
      unsigned AC2IF:1;
      unsigned :6;
      unsigned ADCAN0IF:1;
      unsigned ADCAN1IF:1;
    };
  };
} typeIFS6BITS;
sfr volatile typeIFS6BITS IFS6bits absolute 0x80C;

typedef struct tagIFS7BITS {
  union {
    struct {
      unsigned ADCAN2IF:1;
      unsigned ADCAN3IF:1;
      unsigned ADCAN4IF:1;
      unsigned ADCAN5IF:1;
      unsigned ADCAN6IF:1;
      unsigned ADCAN7IF:1;
    };
  };
} typeIFS7BITS;
sfr volatile typeIFS7BITS IFS7bits absolute 0x80E;

typedef struct tagIFS9BITS {
  union {
    struct {
      unsigned :7;
      unsigned ADCAN8IF:1;
      unsigned ADCAN9IF:1;
      unsigned ADCAN10IF:1;
      unsigned ADCAN11IF:1;
      unsigned :2;
      unsigned ADCAN14IF:1;
    };
  };
} typeIFS9BITS;
sfr volatile typeIFS9BITS IFS9bits absolute 0x812;

typedef struct tagIFS10BITS {
  union {
    struct {
      unsigned :13;
      unsigned I2C1BCIF:1;
    };
  };
} typeIFS10BITS;
sfr volatile typeIFS10BITS IFS10bits absolute 0x814;

typedef struct tagIFS11BITS {
  union {
    struct {
      unsigned :1;
      unsigned ADCMP0IF:1;
      unsigned ADCMP1IF:1;
      unsigned ADFL0IF:1;
    };
  };
} typeIFS11BITS;
sfr volatile typeIFS11BITS IFS11bits absolute 0x816;

typedef struct tagIEC0BITS {
  union {
    struct {
      unsigned INT0IE:1;
      unsigned IC1IE:1;
      unsigned OC1IE:1;
      unsigned T1IE:1;
      unsigned :3;
      unsigned T2IE:1;
      unsigned T3IE:1;
      unsigned SPI1EIE:1;
      unsigned SPI1IE:1;
      unsigned U1RXIE:1;
      unsigned U1TXIE:1;
      unsigned ADCIE:1;
      unsigned :1;
      unsigned NVMIE:1;
    };
  };
} typeIEC0BITS;
sfr volatile typeIEC0BITS IEC0bits absolute 0x820;

typedef struct tagIEC1BITS {
  union {
    struct {
      unsigned SI2C1IE:1;
      unsigned MI2C1IE:1;
      unsigned AC1IE:1;
      unsigned CNIE:1;
      unsigned INT1IE:1;
      unsigned :8;
      unsigned INT2IE:1;
    };
  };
} typeIEC1BITS;
sfr volatile typeIEC1BITS IEC1bits absolute 0x822;

typedef struct tagIEC3BITS {
  union {
    struct {
      unsigned :9;
      unsigned PSEMIE:1;
    };
  };
} typeIEC3BITS;
sfr volatile typeIEC3BITS IEC3bits absolute 0x826;

typedef struct tagIEC4BITS {
  union {
    struct {
      unsigned :1;
      unsigned U1EIE:1;
      unsigned :7;
      unsigned PSESIE:1;
    };
  };
} typeIEC4BITS;
sfr volatile typeIEC4BITS IEC4bits absolute 0x828;

typedef struct tagIEC5BITS {
  union {
    struct {
      unsigned :14;
      unsigned PWM1IE:1;
      unsigned PWM2IE:1;
    };
  };
} typeIEC5BITS;
sfr volatile typeIEC5BITS IEC5bits absolute 0x82A;

typedef struct tagIEC6BITS {
  union {
    struct {
      unsigned PWM3IE:1;
      unsigned :6;
      unsigned AC2IE:1;
      unsigned :6;
      unsigned ADCAN0IE:1;
      unsigned ADCAN1IE:1;
    };
  };
} typeIEC6BITS;
sfr volatile typeIEC6BITS IEC6bits absolute 0x82C;

typedef struct tagIEC7BITS {
  union {
    struct {
      unsigned ADCAN2IE:1;
      unsigned ADCAN3IE:1;
      unsigned ADCAN4IE:1;
      unsigned ADCAN5IE:1;
      unsigned ADCAN6IE:1;
      unsigned ADCAN7IE:1;
    };
  };
} typeIEC7BITS;
sfr volatile typeIEC7BITS IEC7bits absolute 0x82E;

typedef struct tagIEC9BITS {
  union {
    struct {
      unsigned :7;
      unsigned ADCAN8IE:1;
      unsigned ADCAN9IE:1;
      unsigned ADCAN10IE:1;
      unsigned ADCAN11IE:1;
      unsigned :2;
      unsigned ADCAN14IE:1;
    };
  };
} typeIEC9BITS;
sfr volatile typeIEC9BITS IEC9bits absolute 0x832;

typedef struct tagIEC10BITS {
  union {
    struct {
      unsigned :13;
      unsigned I2C1BCIE:1;
    };
  };
} typeIEC10BITS;
sfr volatile typeIEC10BITS IEC10bits absolute 0x834;

typedef struct tagIEC11BITS {
  union {
    struct {
      unsigned :1;
      unsigned ADCMP0IE:1;
      unsigned ADCMP1IE:1;
      unsigned ADFL0IE:1;
    };
  };
} typeIEC11BITS;
sfr volatile typeIEC11BITS IEC11bits absolute 0x836;

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
sfr volatile typeIPC0BITS IPC0bits absolute 0x840;

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
sfr volatile typeIPC1BITS IPC1bits absolute 0x842;

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
sfr volatile typeIPC2BITS IPC2bits absolute 0x844;

typedef struct tagIPC3BITS {
  union {
    struct {
      unsigned U1TXIP:3;
      unsigned :1;
      unsigned ADCIP:3;
      unsigned :5;
      unsigned NVMIP:3;
    };
    struct {
      unsigned U1TXIP0:1;
      unsigned U1TXIP1:1;
      unsigned U1TXIP2:1;
      unsigned :1;
      unsigned ADCIP0:1;
      unsigned ADCIP1:1;
      unsigned ADCIP2:1;
      unsigned :5;
      unsigned NVMIP0:1;
      unsigned NVMIP1:1;
      unsigned NVMIP2:1;
    };
  };
} typeIPC3BITS;
sfr volatile typeIPC3BITS IPC3bits absolute 0x846;

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
sfr volatile typeIPC4BITS IPC4bits absolute 0x848;

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
sfr volatile typeIPC5BITS IPC5bits absolute 0x84A;

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
sfr volatile typeIPC7BITS IPC7bits absolute 0x84E;

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
sfr volatile typeIPC14BITS IPC14bits absolute 0x85C;

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
sfr volatile typeIPC16BITS IPC16bits absolute 0x860;

typedef struct tagIPC18BITS {
  union {
    struct {
      unsigned :4;
      unsigned PSESIP:3;
    };
    struct {
      unsigned :4;
      unsigned PSESIP0:1;
      unsigned PSESIP1:1;
      unsigned PSESIP2:1;
    };
  };
} typeIPC18BITS;
sfr volatile typeIPC18BITS IPC18bits absolute 0x864;

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
sfr volatile typeIPC23BITS IPC23bits absolute 0x86E;

typedef struct tagIPC24BITS {
  union {
    struct {
      unsigned PWM3IP:3;
    };
    struct {
      unsigned PWM3IP0:1;
      unsigned PWM3IP1:1;
      unsigned PWM3IP2:1;
    };
  };
} typeIPC24BITS;
sfr volatile typeIPC24BITS IPC24bits absolute 0x870;

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
sfr volatile typeIPC25BITS IPC25bits absolute 0x872;

typedef struct tagIPC27BITS {
  union {
    struct {
      unsigned :8;
      unsigned ADCAN0IP:3;
      unsigned :1;
      unsigned ADCAN1IP:3;
    };
    struct {
      unsigned :8;
      unsigned ADCAN0IP0:1;
      unsigned ADCAN0IP1:1;
      unsigned ADCAN0IP2:1;
      unsigned :1;
      unsigned ADCAN1IP0:1;
      unsigned ADCAN1IP1:1;
      unsigned ADCAN1IP2:1;
    };
  };
} typeIPC27BITS;
sfr volatile typeIPC27BITS IPC27bits absolute 0x876;

typedef struct tagIPC28BITS {
  union {
    struct {
      unsigned ADCAN2IP:3;
      unsigned :1;
      unsigned ADCAN3IP:3;
      unsigned :1;
      unsigned ADCAN4IP:3;
      unsigned :1;
      unsigned ADCAN5IP:3;
    };
    struct {
      unsigned ADCAN2IP0:1;
      unsigned ADCAN2IP1:1;
      unsigned ADCAN2IP2:1;
      unsigned :1;
      unsigned ADCAN3IP0:1;
      unsigned ADCAN3IP1:1;
      unsigned ADCAN3IP2:1;
      unsigned :1;
      unsigned ADCAN4IP0:1;
      unsigned ADCAN4IP1:1;
      unsigned ADCAN4IP2:1;
      unsigned :1;
      unsigned ADCAN5IP0:1;
      unsigned ADCAN5IP1:1;
      unsigned ADCAN5IP2:1;
    };
  };
} typeIPC28BITS;
sfr volatile typeIPC28BITS IPC28bits absolute 0x878;

typedef struct tagIPC29BITS {
  union {
    struct {
      unsigned ADCAN6IP:3;
      unsigned :1;
      unsigned ADCAN7IP:3;
    };
    struct {
      unsigned ADCAN6IP0:1;
      unsigned ADCAN6IP1:1;
      unsigned ADCAN6IP2:1;
      unsigned :1;
      unsigned ADCAN7IP0:1;
      unsigned ADCAN7IP1:1;
      unsigned ADCAN7IP2:1;
    };
  };
} typeIPC29BITS;
sfr volatile typeIPC29BITS IPC29bits absolute 0x87A;

typedef struct tagIPC37BITS {
  union {
    struct {
      unsigned :12;
      unsigned ADCAN8IP:3;
    };
    struct {
      unsigned :12;
      unsigned ADCAN8IP0:1;
      unsigned ADCAN8IP1:1;
      unsigned ADCAN8IP2:1;
    };
  };
} typeIPC37BITS;
sfr volatile typeIPC37BITS IPC37bits absolute 0x88A;

typedef struct tagIPC38BITS {
  union {
    struct {
      unsigned ADCAN9IP:3;
      unsigned :1;
      unsigned ADCAN10IP:3;
      unsigned :1;
      unsigned ADCAN11IP:3;
    };
    struct {
      unsigned ADCAN9IP0:1;
      unsigned ADCAN9IP1:1;
      unsigned ADCAN9IP2:1;
      unsigned :1;
      unsigned ADCAN10IP0:1;
      unsigned ADCAN10IP1:1;
      unsigned ADCAN10IP2:1;
      unsigned :1;
      unsigned ADCAN11IP0:1;
      unsigned ADCAN11IP1:1;
      unsigned ADCAN11IP2:1;
    };
  };
} typeIPC38BITS;
sfr volatile typeIPC38BITS IPC38bits absolute 0x88C;

typedef struct tagIPC39BITS {
  union {
    struct {
      unsigned :4;
      unsigned ADCAN14IP:3;
    };
    struct {
      unsigned :4;
      unsigned ADCAN14IP0:1;
      unsigned ADCAN14IP1:1;
      unsigned ADCAN14IP2:1;
    };
  };
} typeIPC39BITS;
sfr volatile typeIPC39BITS IPC39bits absolute 0x88E;

typedef struct tagIPC43BITS {
  union {
    struct {
      unsigned :4;
      unsigned I2C1BCIP:3;
    };
    struct {
      unsigned :4;
      unsigned I2C1BCIP0:1;
      unsigned I2C1BCIP1:1;
      unsigned I2C1BCIP2:1;
    };
  };
} typeIPC43BITS;
sfr volatile typeIPC43BITS IPC43bits absolute 0x896;

typedef struct tagIPC44BITS {
  union {
    struct {
      unsigned :4;
      unsigned ADCMP0IP:3;
      unsigned :1;
      unsigned ADCMP1IP:3;
      unsigned :1;
      unsigned ADFL0IP:3;
    };
    struct {
      unsigned ADCFLTIP0:1;
      unsigned ADCFLTIP1:1;
      unsigned ADCFLTIP2:1;
      unsigned :1;
      unsigned ADCMP1IP0:1;
      unsigned ADCMP1IP1:1;
      unsigned ADCMP1IP2:1;
      unsigned :1;
      unsigned ADCMP2IP0:1;
      unsigned ADCMP2IP1:1;
      unsigned ADCMP2IP2:1;
      unsigned :1;
      unsigned ADCFLTR1IP0:1;
      unsigned ADCFLTR1IP1:1;
      unsigned ADCFLTR1IP2:1;
    };
  };
} typeIPC44BITS;
sfr volatile typeIPC44BITS IPC44bits absolute 0x898;

typedef struct tagIPC46BITS {
  union {
    struct {
      unsigned :12;
      unsigned ADCC0EIP0:1;
      unsigned ADCC0EIP1:1;
      unsigned ADCC0EIP2:1;
    };
  };
} typeIPC46BITS;
sfr volatile typeIPC46BITS IPC46bits absolute 0x89C;

typedef struct tagIPC47BITS {
  union {
    struct {
      unsigned ADCC1EIP0:1;
      unsigned ADCC1EIP1:1;
      unsigned ADCC1EIP2:1;
    };
  };
} typeIPC47BITS;
sfr volatile typeIPC47BITS IPC47bits absolute 0x89E;

typedef struct tagINTCON1BITS {
  union {
    struct {
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
    };
  };
} typeINTCON1BITS;
sfr volatile typeINTCON1BITS INTCON1bits absolute 0x8C0;

typedef struct tagINTCON2BITS {
  union {
    struct {
      unsigned INT0EP:1;
      unsigned INT1EP:1;
      unsigned INT2EP:1;
      unsigned :1;
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
sfr volatile typeINTCON2BITS INTCON2bits absolute 0x8C2;

typedef struct tagINTCON3BITS {
  union {
    struct {
      unsigned APLL:1;
      unsigned :3;
      unsigned DOOVR:1;
      unsigned :3;
      unsigned NAE:1;
    };
  };
} typeINTCON3BITS;
sfr volatile typeINTCON3BITS INTCON3bits absolute 0x8C4;

typedef struct tagINTCON4BITS {
  union {
    struct {
      unsigned SGHT:1;
    };
  };
} typeINTCON4BITS;
sfr volatile typeINTCON4BITS INTCON4bits absolute 0x8C6;

typedef struct tagINTTREGBITS {
  union {
    struct {
      unsigned VECNUM:8;
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
      unsigned VECNUM7:1;
      unsigned ILR0:1;
      unsigned ILR1:1;
      unsigned ILR2:1;
      unsigned ILR3:1;
    };
  };
} typeINTTREGBITS;
sfr volatile typeINTTREGBITS INTTREGbits absolute 0x8C8;

typedef struct tagOC1CON1BITS {
  union {
    struct {
      unsigned OCM:3;
      unsigned TRIGMODE:1;
      unsigned OCFLTA:1;
      unsigned :2;
      unsigned ENFLTA:1;
      unsigned :2;
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
      unsigned :2;
      unsigned ENFLT0:1;
    };
  };
} typeOC1CON1BITS;
sfr volatile typeOC1CON1BITS OC1CON1bits absolute 0x900;

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
      unsigned :9;
      unsigned FLTMODE:1;
    };
  };
} typeOC1CON2BITS;
sfr volatile typeOC1CON2BITS OC1CON2bits absolute 0x902;

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
sfr volatile typePTCONBITS PTCONbits absolute 0xC00;

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
sfr volatile typePTCON2BITS PTCON2bits absolute 0xC02;

typedef struct tagSEVTCMPBITS {
  union {
    struct {
      unsigned :3;
      unsigned SEVTCMP:13;
    };
  };
} typeSEVTCMPBITS;
sfr volatile typeSEVTCMPBITS SEVTCMPbits absolute 0xC06;

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
sfr volatile typeSTCONBITS STCONbits absolute 0xC0E;

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
sfr volatile typeSTCON2BITS STCON2bits absolute 0xC10;

typedef struct tagSSEVTCMPBITS {
  union {
    struct {
      unsigned :3;
      unsigned SSEVTCMP:13;
    };
    struct {
      unsigned :3;
      unsigned SSEVTCMP0:1;
      unsigned SSEVTCMP1:1;
      unsigned SSEVTCMP2:1;
      unsigned SSEVTCMP3:1;
      unsigned SSEVTCMP4:1;
      unsigned SSEVTCMP5:1;
      unsigned SSEVTCMP6:1;
      unsigned SSEVTCMP7:1;
      unsigned SSEVTCMP8:1;
      unsigned SSEVTCMP9:1;
      unsigned SSEVTCMP10:1;
      unsigned SSEVTCMP11:1;
      unsigned SSEVTCMP12:1;
    };
  };
} typeSSEVTCMPBITS;
sfr volatile typeSSEVTCMPBITS SSEVTCMPbits absolute 0xC14;

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
sfr volatile typeCHOPBITS CHOPbits absolute 0xC1A;

typedef struct tagPWMCON1BITS {
  union {
    struct {
      unsigned IUE:1;
      unsigned XPRES:1;
      unsigned CAM:1;
      unsigned MTBS:1;
      unsigned :2;
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
sfr volatile typePWMCON1BITS PWMCON1bits absolute 0xC20;

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
sfr volatile typeIOCON1BITS IOCON1bits absolute 0xC22;

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
sfr volatile typeFCLCON1BITS FCLCON1bits absolute 0xC24;

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
sfr volatile typeTRIG1BITS TRIG1bits absolute 0xC32;

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
sfr volatile typeTRGCON1BITS TRGCON1bits absolute 0xC34;

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
sfr volatile typeSTRIG1BITS STRIG1bits absolute 0xC36;

typedef struct tagPWMCAP1BITS {
  union {
    struct {
      unsigned :3;
      unsigned PWMCAP:13;
    };
    struct {
      unsigned :3;
      unsigned PWMCAP0:1;
      unsigned PWMCAP1:1;
      unsigned PWMCAP2:1;
      unsigned PWMCAP3:1;
      unsigned PWMCAP4:1;
      unsigned PWMCAP5:1;
      unsigned PWMCAP6:1;
      unsigned PWMCAP7:1;
      unsigned PWMCAP8:1;
      unsigned PWMCAP9:1;
      unsigned PWMCAP10:1;
      unsigned PWMCAP11:1;
      unsigned PWMCAP12:1;
    };
  };
} typePWMCAP1BITS;
sfr volatile typePWMCAP1BITS PWMCAP1bits absolute 0xC38;

typedef struct tagLEBCON1BITS {
  union {
    struct {
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
    };
  };
} typeLEBCON1BITS;
sfr volatile typeLEBCON1BITS LEBCON1bits absolute 0xC3A;

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
sfr volatile typeLEBDLY1BITS LEBDLY1bits absolute 0xC3C;

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
sfr volatile typeAUXCON1BITS AUXCON1bits absolute 0xC3E;

typedef struct tagPWMCON2BITS {
  union {
    struct {
      unsigned IUE:1;
      unsigned XPRES:1;
      unsigned CAM:1;
      unsigned MTBS:1;
      unsigned :2;
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
sfr volatile typePWMCON2BITS PWMCON2bits absolute 0xC40;

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
sfr volatile typeIOCON2BITS IOCON2bits absolute 0xC42;

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
sfr volatile typeFCLCON2BITS FCLCON2bits absolute 0xC44;

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
sfr volatile typeTRIG2BITS TRIG2bits absolute 0xC52;

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
sfr volatile typeTRGCON2BITS TRGCON2bits absolute 0xC54;

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
sfr volatile typeSTRIG2BITS STRIG2bits absolute 0xC56;

typedef struct tagPWMCAP2BITS {
  union {
    struct {
      unsigned :3;
      unsigned PWMCAP:13;
    };
    struct {
      unsigned :3;
      unsigned PWMCAP0:1;
      unsigned PWMCAP1:1;
      unsigned PWMCAP2:1;
      unsigned PWMCAP3:1;
      unsigned PWMCAP4:1;
      unsigned PWMCAP5:1;
      unsigned PWMCAP6:1;
      unsigned PWMCAP7:1;
      unsigned PWMCAP8:1;
      unsigned PWMCAP9:1;
      unsigned PWMCAP10:1;
      unsigned PWMCAP11:1;
      unsigned PWMCAP12:1;
    };
  };
} typePWMCAP2BITS;
sfr volatile typePWMCAP2BITS PWMCAP2bits absolute 0xC58;

typedef struct tagLEBCON2BITS {
  union {
    struct {
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
    };
  };
} typeLEBCON2BITS;
sfr volatile typeLEBCON2BITS LEBCON2bits absolute 0xC5A;

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
sfr volatile typeLEBDLY2BITS LEBDLY2bits absolute 0xC5C;

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
sfr volatile typeAUXCON2BITS AUXCON2bits absolute 0xC5E;

typedef struct tagPWMCON3BITS {
  union {
    struct {
      unsigned IUE:1;
      unsigned XPRES:1;
      unsigned CAM:1;
      unsigned MTBS:1;
      unsigned :2;
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
sfr volatile typePWMCON3BITS PWMCON3bits absolute 0xC60;

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
sfr volatile typeIOCON3BITS IOCON3bits absolute 0xC62;

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
sfr volatile typeFCLCON3BITS FCLCON3bits absolute 0xC64;

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
sfr volatile typeTRIG3BITS TRIG3bits absolute 0xC72;

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
sfr volatile typeTRGCON3BITS TRGCON3bits absolute 0xC74;

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
sfr volatile typeSTRIG3BITS STRIG3bits absolute 0xC76;

typedef struct tagPWMCAP3BITS {
  union {
    struct {
      unsigned :3;
      unsigned PWMCAP:13;
    };
    struct {
      unsigned :3;
      unsigned PWMCAP0:1;
      unsigned PWMCAP1:1;
      unsigned PWMCAP2:1;
      unsigned PWMCAP3:1;
      unsigned PWMCAP4:1;
      unsigned PWMCAP5:1;
      unsigned PWMCAP6:1;
      unsigned PWMCAP7:1;
      unsigned PWMCAP8:1;
      unsigned PWMCAP9:1;
      unsigned PWMCAP10:1;
      unsigned PWMCAP11:1;
      unsigned PWMCAP12:1;
    };
  };
} typePWMCAP3BITS;
sfr volatile typePWMCAP3BITS PWMCAP3bits absolute 0xC78;

typedef struct tagLEBCON3BITS {
  union {
    struct {
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
    };
  };
} typeLEBCON3BITS;
sfr volatile typeLEBCON3BITS LEBCON3bits absolute 0xC7A;

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
sfr volatile typeLEBDLY3BITS LEBDLY3bits absolute 0xC7C;

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
sfr volatile typeAUXCON3BITS AUXCON3bits absolute 0xC7E;

typedef struct tagTRISABITS {
  union {
    struct {
      unsigned TRISA0:1;
      unsigned TRISA1:1;
      unsigned TRISA2:1;
      unsigned TRISA3:1;
      unsigned TRISA4:1;
    };
  };
} typeTRISABITS;
sfr volatile typeTRISABITS TRISAbits absolute 0xE00;

typedef struct tagPORTABITS {
  union {
    struct {
      unsigned RA0:1;
      unsigned RA1:1;
      unsigned RA2:1;
      unsigned RA3:1;
      unsigned RA4:1;
    };
  };
} typePORTABITS;
sfr volatile typePORTABITS PORTAbits absolute 0xE02;

typedef struct tagLATABITS {
  union {
    struct {
      unsigned LATA0:1;
      unsigned LATA1:1;
      unsigned LATA2:1;
      unsigned LATA3:1;
      unsigned LATA4:1;
    };
  };
} typeLATABITS;
sfr volatile typeLATABITS LATAbits absolute 0xE04;

typedef struct tagODCABITS {
  union {
    struct {
      unsigned ODCA0:1;
      unsigned ODCA1:1;
      unsigned ODCA2:1;
      unsigned ODCA3:1;
      unsigned ODCA4:1;
    };
  };
} typeODCABITS;
sfr volatile typeODCABITS ODCAbits absolute 0xE06;

typedef struct tagCNENABITS {
  union {
    struct {
      unsigned CNIEA0:1;
      unsigned CNIEA1:1;
      unsigned CNIEA2:1;
      unsigned CNIEA3:1;
      unsigned CNIEA4:1;
    };
  };
} typeCNENABITS;
sfr volatile typeCNENABITS CNENAbits absolute 0xE08;

typedef struct tagCNPUABITS {
  union {
    struct {
      unsigned CNPUA0:1;
      unsigned CNPUA1:1;
      unsigned CNPUA2:1;
      unsigned CNPUA3:1;
      unsigned CNPUA4:1;
    };
  };
} typeCNPUABITS;
sfr volatile typeCNPUABITS CNPUAbits absolute 0xE0A;

typedef struct tagCNPDABITS {
  union {
    struct {
      unsigned CNPDA0:1;
      unsigned CNPDA1:1;
      unsigned CNPDA2:1;
      unsigned CNPDA3:1;
      unsigned CNPDA4:1;
    };
  };
} typeCNPDABITS;
sfr volatile typeCNPDABITS CNPDAbits absolute 0xE0C;

typedef struct tagANSELABITS {
  union {
    struct {
      unsigned ANSA0:1;
      unsigned ANSA1:1;
      unsigned ANSA2:1;
    };
  };
} typeANSELABITS;
sfr volatile typeANSELABITS ANSELAbits absolute 0xE0E;

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
sfr volatile typeTRISBBITS TRISBbits absolute 0xE10;

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
sfr volatile typePORTBBITS PORTBbits absolute 0xE12;

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
sfr volatile typeLATBBITS LATBbits absolute 0xE14;

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
sfr volatile typeODCBBITS ODCBbits absolute 0xE16;

typedef struct tagCNENBBITS {
  union {
    struct {
      unsigned CNIEB0:1;
      unsigned CNIEB1:1;
      unsigned CNIEB2:1;
      unsigned CNIEB3:1;
      unsigned CNIEB4:1;
      unsigned CNIEB5:1;
      unsigned CNIEB6:1;
      unsigned CNIEB7:1;
      unsigned CNIEB8:1;
      unsigned CNIEB9:1;
      unsigned CNIEB10:1;
      unsigned CNIEB11:1;
      unsigned CNIEB12:1;
      unsigned CNIEB13:1;
      unsigned CNIEB14:1;
      unsigned CNIEB15:1;
    };
  };
} typeCNENBBITS;
sfr volatile typeCNENBBITS CNENBbits absolute 0xE18;

typedef struct tagCNPUBBITS {
  union {
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
sfr volatile typeCNPUBBITS CNPUBbits absolute 0xE1A;

typedef struct tagCNPDBBITS {
  union {
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
sfr volatile typeCNPDBBITS CNPDBbits absolute 0xE1C;

typedef struct tagANSELBBITS {
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
      unsigned :1;
      unsigned ANSB9:1;
      unsigned ANSB10:1;
    };
  };
} typeANSELBBITS;
sfr volatile typeANSELBBITS ANSELBbits absolute 0xE1E;

