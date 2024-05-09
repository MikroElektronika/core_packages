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

const unsigned long __FLASH_SIZE = 0x0000AB80;
const unsigned long __XRAM_RAM_SIZE = 0x00000FFF;
const unsigned long __XRAM_RAM_START = 0x1000;
const unsigned long __YRAM_RAM_SIZE = 0x00000FFF;
const unsigned long __YRAM_RAM_START = 0x2000;
const long __CONST_FAR_PREFIX = 0x0;
const char __FOSC_PER_CYC = 2;

// Primary Interrupt Vector Table Constants

const unsigned IVT_ADDR_OSCILLATORFAIL       = 0x0004;
const unsigned IVT_ADDR_ADDRESSERROR         = 0x0006;
const unsigned IVT_ADDR_HARDTRAPERROR        = 0x0008;
const unsigned IVT_ADDR_STACKERROR           = 0x000A;
const unsigned IVT_ADDR_MATHERROR            = 0x000C;
const unsigned IVT_ADDR_DMACERROR            = 0x000E;
const unsigned IVT_ADDR_SOFTTRAPERROR        = 0x0010;
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
const unsigned IVT_ADDR_AD1INTERRUPT         = 0x002E;
const unsigned IVT_ADDR_DMA1INTERRUPT        = 0x0030;
const unsigned IVT_ADDR_NVMINTERRUPT         = 0x0032;
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
const unsigned IVT_ADDR_INTERRUPT34          = 0x0058;
const unsigned IVT_ADDR_INTERRUPT35          = 0x005A;
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
const unsigned IVT_ADDR_U2ERRINTERRUPT       = 0x0098;
const unsigned IVT_ADDR_INTERRUPT67          = 0x009A;
const unsigned IVT_ADDR_INTERRUPT68          = 0x009C;
const unsigned IVT_ADDR_INTERRUPT69          = 0x009E;
const unsigned IVT_ADDR_C1TXINTERRUPT        = 0x00A0;
const unsigned IVT_ADDR_INTERRUPT71          = 0x00A2;
const unsigned IVT_ADDR_INTERRUPT72          = 0x00A4;
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
const unsigned IVT_ADDR_INTERRUPT143         = 0x0132;
const unsigned IVT_ADDR_INTERRUPT144         = 0x0134;
const unsigned IVT_ADDR_INTERRUPT145         = 0x0136;
const unsigned IVT_ADDR_INTERRUPT146         = 0x0138;
const unsigned IVT_ADDR_INTERRUPT147         = 0x013A;
const unsigned IVT_ADDR_INTERRUPT148         = 0x013C;
const unsigned IVT_ADDR_INTERRUPT149         = 0x013E;
const unsigned IVT_ADDR_INTERRUPT150         = 0x0140;
const unsigned IVT_ADDR_INTERRUPT151         = 0x0142;
const unsigned IVT_ADDR_INTERRUPT152         = 0x0144;
const unsigned IVT_ADDR_INTERRUPT153         = 0x0146;
const unsigned IVT_ADDR_INTERRUPT154         = 0x0148;
const unsigned IVT_ADDR_INTERRUPT155         = 0x014A;
const unsigned IVT_ADDR_INTERRUPT156         = 0x014C;
const unsigned IVT_ADDR_INTERRUPT157         = 0x014E;
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
const unsigned IVT_ADDR_I2C1INTERRUPT        = 0x016E;
const unsigned IVT_ADDR_INTERRUPT174         = 0x0170;
const unsigned IVT_ADDR_INTERRUPT175         = 0x0172;
const unsigned IVT_ADDR_INTERRUPT176         = 0x0174;
const unsigned IVT_ADDR_INTERRUPT177         = 0x0176;
const unsigned IVT_ADDR_INTERRUPT178         = 0x0178;
const unsigned IVT_ADDR_INTERRUPT179         = 0x017A;
const unsigned IVT_ADDR_INTERRUPT180         = 0x017C;
const unsigned IVT_ADDR_INTERRUPT181         = 0x017E;
const unsigned IVT_ADDR_SENT1ERRINTERRUPT    = 0x0180;
const unsigned IVT_ADDR_SENT1INTERRUPT       = 0x0182;
const unsigned IVT_ADDR_SENT2ERRINTERRUPT    = 0x0184;
const unsigned IVT_ADDR_SENT2INTERRUPT       = 0x0186;
const unsigned IVT_ADDR_ECCSBEINTERRUPT      = 0x0188;

// Alternate Interrupt Vector Table Constants

const unsigned AIVT_ADDR_ALTRESERVEDTRAP0     = 0x0800;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP1     = 0x0802;
const unsigned AIVT_ADDR_ALTOSCILLATORFAIL    = 0x0804;
const unsigned AIVT_ADDR_ALTADDRESSERROR      = 0x0806;
const unsigned AIVT_ADDR_ALTHARDTRAPERROR     = 0x0808;
const unsigned AIVT_ADDR_ALTSTACKERROR        = 0x080A;
const unsigned AIVT_ADDR_ALTMATHERROR         = 0x080C;
const unsigned AIVT_ADDR_ALTDMACERROR         = 0x080E;
const unsigned AIVT_ADDR_ALTSOFTTRAPERROR     = 0x0810;
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
const unsigned AIVT_ADDR_ALTSPI1ERRINTERRUPT  = 0x0826;
const unsigned AIVT_ADDR_ALTSPI1INTERRUPT     = 0x0828;
const unsigned AIVT_ADDR_ALTU1RXINTERRUPT     = 0x082A;
const unsigned AIVT_ADDR_ALTU1TXINTERRUPT     = 0x082C;
const unsigned AIVT_ADDR_ALTAD1INTERRUPT      = 0x082E;
const unsigned AIVT_ADDR_ALTDMA1INTERRUPT     = 0x0830;
const unsigned AIVT_ADDR_ALTNVMINTERRUPT      = 0x0832;
const unsigned AIVT_ADDR_ALTSI2C1INTERRUPT    = 0x0834;
const unsigned AIVT_ADDR_ALTMI2C1INTERRUPT    = 0x0836;
const unsigned AIVT_ADDR_ALTCMP1INTERRUPT     = 0x0838;
const unsigned AIVT_ADDR_ALTCNINTERRUPT       = 0x083A;
const unsigned AIVT_ADDR_ALTINT1INTERRUPT     = 0x083C;
const unsigned AIVT_ADDR_ALTINTERRUPT21       = 0x083E;
const unsigned AIVT_ADDR_ALTINTERRUPT22       = 0x0840;
const unsigned AIVT_ADDR_ALTINTERRUPT23       = 0x0842;
const unsigned AIVT_ADDR_ALTDMA2INTERRUPT     = 0x0844;
const unsigned AIVT_ADDR_ALTOC3INTERRUPT      = 0x0846;
const unsigned AIVT_ADDR_ALTOC4INTERRUPT      = 0x0848;
const unsigned AIVT_ADDR_ALTT4INTERRUPT       = 0x084A;
const unsigned AIVT_ADDR_ALTT5INTERRUPT       = 0x084C;
const unsigned AIVT_ADDR_ALTINT2INTERRUPT     = 0x084E;
const unsigned AIVT_ADDR_ALTU2RXINTERRUPT     = 0x0850;
const unsigned AIVT_ADDR_ALTU2TXINTERRUPT     = 0x0852;
const unsigned AIVT_ADDR_ALTSPI2ERRINTERRUPT  = 0x0854;
const unsigned AIVT_ADDR_ALTSPI2INTERRUPT     = 0x0856;
const unsigned AIVT_ADDR_ALTINTERRUPT34       = 0x0858;
const unsigned AIVT_ADDR_ALTINTERRUPT35       = 0x085A;
const unsigned AIVT_ADDR_ALTDMA3INTERRUPT     = 0x085C;
const unsigned AIVT_ADDR_ALTIC3INTERRUPT      = 0x085E;
const unsigned AIVT_ADDR_ALTIC4INTERRUPT      = 0x0860;
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
const unsigned AIVT_ADDR_ALTU2ERRINTERRUPT    = 0x0898;
const unsigned AIVT_ADDR_ALTINTERRUPT67       = 0x089A;
const unsigned AIVT_ADDR_ALTINTERRUPT68       = 0x089C;
const unsigned AIVT_ADDR_ALTINTERRUPT69       = 0x089E;
const unsigned AIVT_ADDR_ALTC1TXINTERRUPT     = 0x08A0;
const unsigned AIVT_ADDR_ALTINTERRUPT71       = 0x08A2;
const unsigned AIVT_ADDR_ALTINTERRUPT72       = 0x08A4;
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
const unsigned AIVT_ADDR_ALTINTERRUPT103      = 0x08E2;
const unsigned AIVT_ADDR_ALTINTERRUPT104      = 0x08E4;
const unsigned AIVT_ADDR_ALTINTERRUPT105      = 0x08E6;
const unsigned AIVT_ADDR_ALTINTERRUPT106      = 0x08E8;
const unsigned AIVT_ADDR_ALTINTERRUPT107      = 0x08EA;
const unsigned AIVT_ADDR_ALTINTERRUPT108      = 0x08EC;
const unsigned AIVT_ADDR_ALTINTERRUPT109      = 0x08EE;
const unsigned AIVT_ADDR_ALTINTERRUPT110      = 0x08F0;
const unsigned AIVT_ADDR_ALTINTERRUPT111      = 0x08F2;
const unsigned AIVT_ADDR_ALTINTERRUPT112      = 0x08F4;
const unsigned AIVT_ADDR_ALTINTERRUPT113      = 0x08F6;
const unsigned AIVT_ADDR_ALTINTERRUPT114      = 0x08F8;
const unsigned AIVT_ADDR_ALTINTERRUPT115      = 0x08FA;
const unsigned AIVT_ADDR_ALTINTERRUPT116      = 0x08FC;
const unsigned AIVT_ADDR_ALTINTERRUPT117      = 0x08FE;
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
const unsigned AIVT_ADDR_ALTINTERRUPT143      = 0x0932;
const unsigned AIVT_ADDR_ALTINTERRUPT144      = 0x0934;
const unsigned AIVT_ADDR_ALTINTERRUPT145      = 0x0936;
const unsigned AIVT_ADDR_ALTINTERRUPT146      = 0x0938;
const unsigned AIVT_ADDR_ALTINTERRUPT147      = 0x093A;
const unsigned AIVT_ADDR_ALTINTERRUPT148      = 0x093C;
const unsigned AIVT_ADDR_ALTINTERRUPT149      = 0x093E;
const unsigned AIVT_ADDR_ALTINTERRUPT150      = 0x0940;
const unsigned AIVT_ADDR_ALTINTERRUPT151      = 0x0942;
const unsigned AIVT_ADDR_ALTINTERRUPT152      = 0x0944;
const unsigned AIVT_ADDR_ALTINTERRUPT153      = 0x0946;
const unsigned AIVT_ADDR_ALTINTERRUPT154      = 0x0948;
const unsigned AIVT_ADDR_ALTINTERRUPT155      = 0x094A;
const unsigned AIVT_ADDR_ALTINTERRUPT156      = 0x094C;
const unsigned AIVT_ADDR_ALTINTERRUPT157      = 0x094E;
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
const unsigned AIVT_ADDR_ALTI2C1INTERRUPT     = 0x096E;
const unsigned AIVT_ADDR_ALTINTERRUPT174      = 0x0970;
const unsigned AIVT_ADDR_ALTINTERRUPT175      = 0x0972;
const unsigned AIVT_ADDR_ALTINTERRUPT176      = 0x0974;
const unsigned AIVT_ADDR_ALTINTERRUPT177      = 0x0976;
const unsigned AIVT_ADDR_ALTINTERRUPT178      = 0x0978;
const unsigned AIVT_ADDR_ALTINTERRUPT179      = 0x097A;
const unsigned AIVT_ADDR_ALTINTERRUPT180      = 0x097C;
const unsigned AIVT_ADDR_ALTINTERRUPT181      = 0x097E;
const unsigned AIVT_ADDR_ALTSENT1ERRINTERRUPT = 0x0980;
const unsigned AIVT_ADDR_ALTSENT1INTERRUPT    = 0x0982;
const unsigned AIVT_ADDR_ALTSENT2ERRINTERRUPT = 0x0984;
const unsigned AIVT_ADDR_ALTSENT2INTERRUPT    = 0x0986;
const unsigned AIVT_ADDR_ALTECCSBEINTERRUPT   = 0x0988;

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
sfr unsigned int   volatile MSTRPR           absolute 0x58;
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
sfr unsigned int   volatile TMR4             absolute 0x114;
sfr unsigned int   volatile TMR5HLD          absolute 0x116;
sfr unsigned int   volatile TMR5             absolute 0x118;
sfr unsigned int   volatile PR4              absolute 0x11A;
sfr unsigned int   volatile PR5              absolute 0x11C;
sfr unsigned int   volatile T4CON            absolute 0x11E;
sfr unsigned int   volatile T5CON            absolute 0x120;
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
    const register unsigned short int IC32 = 8;
    sbit  IC32_bit at IC1CON2.B8;

sfr unsigned int   volatile IC1BUF           absolute 0x144;
sfr unsigned int   volatile IC1TMR           absolute 0x146;
sfr unsigned int   volatile IC2CON1          absolute 0x148;
sfr unsigned int   volatile IC2CON2          absolute 0x14A;
sfr unsigned int   volatile IC2BUF           absolute 0x14C;
sfr unsigned int   volatile IC2TMR           absolute 0x14E;
sfr unsigned int   volatile IC3CON1          absolute 0x150;
sfr unsigned int   volatile IC3CON2          absolute 0x152;
sfr unsigned int   volatile IC3BUF           absolute 0x154;
sfr unsigned int   volatile IC3TMR           absolute 0x156;
sfr unsigned int   volatile IC4CON1          absolute 0x158;
sfr unsigned int   volatile IC4CON2          absolute 0x15A;
sfr unsigned int   volatile IC4BUF           absolute 0x15C;
sfr unsigned int   volatile IC4TMR           absolute 0x15E;
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
sfr unsigned int   volatile U2MODE           absolute 0x230;
sfr unsigned int   volatile U2STA            absolute 0x232;
sfr unsigned int            U2TXREG          absolute 0x234;
sfr unsigned int   volatile U2RXREG          absolute 0x236;
sfr unsigned int            U2BRG            absolute 0x238;
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
    const register unsigned short int FRMDLY = 1;
    sbit  FRMDLY_bit at SPI1CON2.B1;
    const register unsigned short int FRMPOL = 13;
    sbit  FRMPOL_bit at SPI1CON2.B13;
    const register unsigned short int SPIFSD = 14;
    sbit  SPIFSD_bit at SPI1CON2.B14;
    const register unsigned short int FRMEN = 15;
    sbit  FRMEN_bit at SPI1CON2.B15;

sfr unsigned int   volatile SPI1BUF          absolute 0x248;
sfr unsigned int   volatile SPI2STAT         absolute 0x260;
sfr unsigned int   volatile SPI2CON1         absolute 0x262;
sfr unsigned int   volatile SPI2CON2         absolute 0x264;
sfr unsigned int   volatile SPI2BUF          absolute 0x268;
sfr unsigned int   volatile ADC1BUF0         absolute 0x300;
sfr unsigned int   volatile ADC1BUF1         absolute 0x302;
sfr unsigned int   volatile ADC1BUF2         absolute 0x304;
sfr unsigned int   volatile ADC1BUF3         absolute 0x306;
sfr unsigned int   volatile ADC1BUF4         absolute 0x308;
sfr unsigned int   volatile ADC1BUF5         absolute 0x30A;
sfr unsigned int   volatile ADC1BUF6         absolute 0x30C;
sfr unsigned int   volatile ADC1BUF7         absolute 0x30E;
sfr unsigned int   volatile ADC1BUF8         absolute 0x310;
sfr unsigned int   volatile ADC1BUF9         absolute 0x312;
sfr unsigned int   volatile ADC1BUFA         absolute 0x314;
sfr unsigned int   volatile ADC1BUFB         absolute 0x316;
sfr unsigned int   volatile ADC1BUFC         absolute 0x318;
sfr unsigned int   volatile ADC1BUFD         absolute 0x31A;
sfr unsigned int   volatile ADC1BUFE         absolute 0x31C;
sfr unsigned int   volatile ADC1BUFF         absolute 0x31E;
sfr unsigned int   volatile AD1CON1          absolute 0x320;
    const register unsigned short int DONE = 0;
    sbit  DONE_bit at AD1CON1.B0;
    const register unsigned short int SAMP = 1;
    sbit  SAMP_bit at AD1CON1.B1;
    const register unsigned short int ASAM = 2;
    sbit  ASAM_bit at AD1CON1.B2;
    const register unsigned short int SIMSAM = 3;
    sbit  SIMSAM_bit at AD1CON1.B3;
    const register unsigned short int SSRCG = 4;
    sbit  SSRCG_bit at AD1CON1.B4;
    const register unsigned short int SSRC0 = 5;
    sbit  SSRC0_bit at AD1CON1.B5;
    const register unsigned short int SSRC1 = 6;
    sbit  SSRC1_bit at AD1CON1.B6;
    const register unsigned short int SSRC2 = 7;
    sbit  SSRC2_bit at AD1CON1.B7;
    const register unsigned short int FORM0 = 8;
    sbit  FORM0_bit at AD1CON1.B8;
    const register unsigned short int FORM1 = 9;
    sbit  FORM1_bit at AD1CON1.B9;
    const register unsigned short int AD12B = 10;
    sbit  AD12B_bit at AD1CON1.B10;
    const register unsigned short int ADDMABM = 12;
    sbit  ADDMABM_bit at AD1CON1.B12;
    const register unsigned short int ADSIDL = 13;
    sbit  ADSIDL_bit at AD1CON1.B13;
    const register unsigned short int ADON = 15;
    sbit  ADON_bit at AD1CON1.B15;

sfr unsigned int   volatile AD1CON2          absolute 0x322;
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
    const register unsigned short int CHPS0 = 8;
    sbit  CHPS0_bit at AD1CON2.B8;
    const register unsigned short int CHPS1 = 9;
    sbit  CHPS1_bit at AD1CON2.B9;
    const register unsigned short int CSCNA = 10;
    sbit  CSCNA_bit at AD1CON2.B10;
    const register unsigned short int VCFG0 = 13;
    sbit  VCFG0_bit at AD1CON2.B13;
    const register unsigned short int VCFG1 = 14;
    sbit  VCFG1_bit at AD1CON2.B14;
    const register unsigned short int VCFG2 = 15;
    sbit  VCFG2_bit at AD1CON2.B15;

sfr unsigned int   volatile AD1CON3          absolute 0x324;
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
    const register unsigned short int ADRC = 15;
    sbit  ADRC_bit at AD1CON3.B15;

sfr unsigned int            AD1CHS123        absolute 0x326;
    const register unsigned short int CH123SA0 = 0;
    sbit  CH123SA0_bit at AD1CHS123.B0;
    const register unsigned short int CH123NA0 = 1;
    sbit  CH123NA0_bit at AD1CHS123.B1;
    const register unsigned short int CH123NA1 = 2;
    sbit  CH123NA1_bit at AD1CHS123.B2;
    const register unsigned short int CH123SA1 = 3;
    sbit  CH123SA1_bit at AD1CHS123.B3;
    const register unsigned short int CH123SA2 = 4;
    sbit  CH123SA2_bit at AD1CHS123.B4;
    const register unsigned short int CH123SB0 = 8;
    sbit  CH123SB0_bit at AD1CHS123.B8;
    const register unsigned short int CH123NB0 = 9;
    sbit  CH123NB0_bit at AD1CHS123.B9;
    const register unsigned short int CH123NB1 = 10;
    sbit  CH123NB1_bit at AD1CHS123.B10;
    const register unsigned short int CH123SB1 = 11;
    sbit  CH123SB1_bit at AD1CHS123.B11;
    const register unsigned short int CH123SB2 = 12;
    sbit  CH123SB2_bit at AD1CHS123.B12;

sfr unsigned int            AD1CHS0          absolute 0x328;
    const register unsigned short int CH0SA0 = 0;
    sbit  CH0SA0_bit at AD1CHS0.B0;
    const register unsigned short int CH0SA1 = 1;
    sbit  CH0SA1_bit at AD1CHS0.B1;
    const register unsigned short int CH0SA2 = 2;
    sbit  CH0SA2_bit at AD1CHS0.B2;
    const register unsigned short int CH0SA3 = 3;
    sbit  CH0SA3_bit at AD1CHS0.B3;
    const register unsigned short int CH0SA4 = 4;
    sbit  CH0SA4_bit at AD1CHS0.B4;
    const register unsigned short int CH0NA = 7;
    sbit  CH0NA_bit at AD1CHS0.B7;
    const register unsigned short int CH0SB0 = 8;
    sbit  CH0SB0_bit at AD1CHS0.B8;
    const register unsigned short int CH0SB1 = 9;
    sbit  CH0SB1_bit at AD1CHS0.B9;
    const register unsigned short int CH0SB2 = 10;
    sbit  CH0SB2_bit at AD1CHS0.B10;
    const register unsigned short int CH0SB3 = 11;
    sbit  CH0SB3_bit at AD1CHS0.B11;
    const register unsigned short int CH0SB4 = 12;
    sbit  CH0SB4_bit at AD1CHS0.B12;
    const register unsigned short int CH0NB = 15;
    sbit  CH0NB_bit at AD1CHS0.B15;

sfr unsigned int            AD1CSSH          absolute 0x32E;
    const register unsigned short int CSS16 = 0;
    sbit  CSS16_bit at AD1CSSH.B0;
    const register unsigned short int CSS17 = 1;
    sbit  CSS17_bit at AD1CSSH.B1;
    const register unsigned short int CSS18 = 2;
    sbit  CSS18_bit at AD1CSSH.B2;
    const register unsigned short int CSS19 = 3;
    sbit  CSS19_bit at AD1CSSH.B3;
    const register unsigned short int CSS24 = 8;
    sbit  CSS24_bit at AD1CSSH.B8;
    const register unsigned short int CSS25 = 9;
    sbit  CSS25_bit at AD1CSSH.B9;
    const register unsigned short int CSS26 = 10;
    sbit  CSS26_bit at AD1CSSH.B10;
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

sfr unsigned int            AD1CSSL          absolute 0x330;
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

sfr unsigned int            AD1CON4          absolute 0x332;
    const register unsigned short int DMABL0 = 0;
    sbit  DMABL0_bit at AD1CON4.B0;
    const register unsigned short int DMABL1 = 1;
    sbit  DMABL1_bit at AD1CON4.B1;
    const register unsigned short int DMABL2 = 2;
    sbit  DMABL2_bit at AD1CON4.B2;
    const register unsigned short int ADDMAEN = 8;
    sbit  ADDMAEN_bit at AD1CON4.B8;

sfr unsigned int   volatile CTMUCON1         absolute 0x33A;
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

sfr unsigned int   volatile CTMUCON2         absolute 0x33C;
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

sfr unsigned int   volatile CTMUICON         absolute 0x33E;
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

sfr unsigned int   volatile SENT1CON1        absolute 0x500;
    const register unsigned short int PS = 4;
    sbit  PS_bit at SENT1CON1.B4;
    const register unsigned short int SPCEN = 6;
    sbit  SPCEN_bit at SENT1CON1.B6;
    const register unsigned short int PPP = 7;
    sbit  PPP_bit at SENT1CON1.B7;
    const register unsigned short int CRCEN = 8;
    sbit  CRCEN_bit at SENT1CON1.B8;
    const register unsigned short int TXPOL = 9;
    sbit  TXPOL_bit at SENT1CON1.B9;
    const register unsigned short int TXM = 10;
    sbit  TXM_bit at SENT1CON1.B10;
    const register unsigned short int RCVEN = 11;
    sbit  RCVEN_bit at SENT1CON1.B11;
    const register unsigned short int SNTSIDL = 13;
    sbit  SNTSIDL_bit at SENT1CON1.B13;
    const register unsigned short int SNTEN = 15;
    sbit  SNTEN_bit at SENT1CON1.B15;

sfr unsigned int   volatile SENT1CON2        absolute 0x504;
sfr unsigned int   volatile SENT1CON3        absolute 0x508;
sfr unsigned int   volatile SENT1STAT        absolute 0x50C;
    const register unsigned short int SYNCTXEN = 0;
    sbit  SYNCTXEN_bit at SENT1STAT.B0;
    const register unsigned short int RXIDLE = 1;
    sbit  RXIDLE_bit at SENT1STAT.B1;
    const register unsigned short int FRMERR = 2;
    sbit  FRMERR_bit at SENT1STAT.B2;
    const register unsigned short int CRCERR = 3;
    sbit  CRCERR_bit at SENT1STAT.B3;
    const register unsigned short int NIB0 = 4;
    sbit  NIB0_bit at SENT1STAT.B4;
    const register unsigned short int NIB1 = 5;
    sbit  NIB1_bit at SENT1STAT.B5;
    const register unsigned short int NIB2 = 6;
    sbit  NIB2_bit at SENT1STAT.B6;
    const register unsigned short int PAUSE = 7;
    sbit  PAUSE_bit at SENT1STAT.B7;
    const register unsigned short int SYNC = 0;
    sbit  SYNC_bit at SENT1STAT.B0;
    const register unsigned short int TXEN = 0;
    sbit  TXEN_bit at SENT1STAT.B0;

sfr unsigned int   volatile SENT1SYNC        absolute 0x510;
sfr unsigned int   volatile SENT1DATL        absolute 0x514;
    const register unsigned short int CRC0 = 0;
    sbit  CRC0_bit at SENT1DATL.B0;
    const register unsigned short int CRC1 = 1;
    sbit  CRC1_bit at SENT1DATL.B1;
    const register unsigned short int CRC2 = 2;
    sbit  CRC2_bit at SENT1DATL.B2;
    const register unsigned short int CRC3 = 3;
    sbit  CRC3_bit at SENT1DATL.B3;
    const register unsigned short int DATA60 = 4;
    sbit  DATA60_bit at SENT1DATL.B4;
    const register unsigned short int DATA61 = 5;
    sbit  DATA61_bit at SENT1DATL.B5;
    const register unsigned short int DATA62 = 6;
    sbit  DATA62_bit at SENT1DATL.B6;
    const register unsigned short int DATA63 = 7;
    sbit  DATA63_bit at SENT1DATL.B7;
    const register unsigned short int DATA50 = 8;
    sbit  DATA50_bit at SENT1DATL.B8;
    const register unsigned short int DATA51 = 9;
    sbit  DATA51_bit at SENT1DATL.B9;
    const register unsigned short int DATA52 = 10;
    sbit  DATA52_bit at SENT1DATL.B10;
    const register unsigned short int DATA53 = 11;
    sbit  DATA53_bit at SENT1DATL.B11;
    const register unsigned short int DATA40 = 12;
    sbit  DATA40_bit at SENT1DATL.B12;
    const register unsigned short int DATA41 = 13;
    sbit  DATA41_bit at SENT1DATL.B13;
    const register unsigned short int DATA42 = 14;
    sbit  DATA42_bit at SENT1DATL.B14;
    const register unsigned short int DATA43 = 15;
    sbit  DATA43_bit at SENT1DATL.B15;

sfr unsigned int   volatile SENT1DATH        absolute 0x516;
    const register unsigned short int DATA30 = 0;
    sbit  DATA30_bit at SENT1DATH.B0;
    const register unsigned short int DATA31 = 1;
    sbit  DATA31_bit at SENT1DATH.B1;
    const register unsigned short int DATA32 = 2;
    sbit  DATA32_bit at SENT1DATH.B2;
    const register unsigned short int DATA33 = 3;
    sbit  DATA33_bit at SENT1DATH.B3;
    const register unsigned short int DATA20 = 4;
    sbit  DATA20_bit at SENT1DATH.B4;
    const register unsigned short int DATA21 = 5;
    sbit  DATA21_bit at SENT1DATH.B5;
    const register unsigned short int DATA22 = 6;
    sbit  DATA22_bit at SENT1DATH.B6;
    const register unsigned short int DATA23 = 7;
    sbit  DATA23_bit at SENT1DATH.B7;
    const register unsigned short int DATA10 = 8;
    sbit  DATA10_bit at SENT1DATH.B8;
    const register unsigned short int DATA11 = 9;
    sbit  DATA11_bit at SENT1DATH.B9;
    const register unsigned short int DATA12 = 10;
    sbit  DATA12_bit at SENT1DATH.B10;
    const register unsigned short int DATA13 = 11;
    sbit  DATA13_bit at SENT1DATH.B11;
    const register unsigned short int STAT0 = 12;
    sbit  STAT0_bit at SENT1DATH.B12;
    const register unsigned short int STAT1 = 13;
    sbit  STAT1_bit at SENT1DATH.B13;
    const register unsigned short int STAT2 = 14;
    sbit  STAT2_bit at SENT1DATH.B14;
    const register unsigned short int STAT3 = 15;
    sbit  STAT3_bit at SENT1DATH.B15;

sfr unsigned int   volatile SENT2CON1        absolute 0x520;
sfr unsigned int   volatile SENT2CON2        absolute 0x524;
sfr unsigned int   volatile SENT2CON3        absolute 0x528;
sfr unsigned int   volatile SENT2STAT        absolute 0x52C;
sfr unsigned int   volatile SENT2SYNC        absolute 0x530;
sfr unsigned int   volatile SENT2DATL        absolute 0x534;
sfr unsigned int   volatile SENT2DATH        absolute 0x536;
sfr unsigned int            RPOR0            absolute 0x670;
    const register unsigned short int RP20R0 = 0;
    sbit  RP20R0_bit at RPOR0.B0;
    const register unsigned short int RP20R1 = 1;
    sbit  RP20R1_bit at RPOR0.B1;
    const register unsigned short int RP20R2 = 2;
    sbit  RP20R2_bit at RPOR0.B2;
    const register unsigned short int RP20R3 = 3;
    sbit  RP20R3_bit at RPOR0.B3;
    const register unsigned short int RP20R4 = 4;
    sbit  RP20R4_bit at RPOR0.B4;
    const register unsigned short int RP20R5 = 5;
    sbit  RP20R5_bit at RPOR0.B5;
    const register unsigned short int RP35R0 = 8;
    sbit  RP35R0_bit at RPOR0.B8;
    const register unsigned short int RP35R1 = 9;
    sbit  RP35R1_bit at RPOR0.B9;
    const register unsigned short int RP35R2 = 10;
    sbit  RP35R2_bit at RPOR0.B10;
    const register unsigned short int RP35R3 = 11;
    sbit  RP35R3_bit at RPOR0.B11;
    const register unsigned short int RP35R4 = 12;
    sbit  RP35R4_bit at RPOR0.B12;
    const register unsigned short int RP35R5 = 13;
    sbit  RP35R5_bit at RPOR0.B13;

sfr unsigned int            RPOR1            absolute 0x672;
    const register unsigned short int RP36R0 = 0;
    sbit  RP36R0_bit at RPOR1.B0;
    const register unsigned short int RP36R1 = 1;
    sbit  RP36R1_bit at RPOR1.B1;
    const register unsigned short int RP36R2 = 2;
    sbit  RP36R2_bit at RPOR1.B2;
    const register unsigned short int RP36R3 = 3;
    sbit  RP36R3_bit at RPOR1.B3;
    const register unsigned short int RP36R4 = 4;
    sbit  RP36R4_bit at RPOR1.B4;
    const register unsigned short int RP36R5 = 5;
    sbit  RP36R5_bit at RPOR1.B5;
    const register unsigned short int RP37R0 = 8;
    sbit  RP37R0_bit at RPOR1.B8;
    const register unsigned short int RP37R1 = 9;
    sbit  RP37R1_bit at RPOR1.B9;
    const register unsigned short int RP37R2 = 10;
    sbit  RP37R2_bit at RPOR1.B10;
    const register unsigned short int RP37R3 = 11;
    sbit  RP37R3_bit at RPOR1.B11;
    const register unsigned short int RP37R4 = 12;
    sbit  RP37R4_bit at RPOR1.B12;
    const register unsigned short int RP37R5 = 13;
    sbit  RP37R5_bit at RPOR1.B13;

sfr unsigned int            RPOR2            absolute 0x674;
    const register unsigned short int RP38R0 = 0;
    sbit  RP38R0_bit at RPOR2.B0;
    const register unsigned short int RP38R1 = 1;
    sbit  RP38R1_bit at RPOR2.B1;
    const register unsigned short int RP38R2 = 2;
    sbit  RP38R2_bit at RPOR2.B2;
    const register unsigned short int RP38R3 = 3;
    sbit  RP38R3_bit at RPOR2.B3;
    const register unsigned short int RP38R4 = 4;
    sbit  RP38R4_bit at RPOR2.B4;
    const register unsigned short int RP38R5 = 5;
    sbit  RP38R5_bit at RPOR2.B5;
    const register unsigned short int RP39R0 = 8;
    sbit  RP39R0_bit at RPOR2.B8;
    const register unsigned short int RP39R1 = 9;
    sbit  RP39R1_bit at RPOR2.B9;
    const register unsigned short int RP39R2 = 10;
    sbit  RP39R2_bit at RPOR2.B10;
    const register unsigned short int RP39R3 = 11;
    sbit  RP39R3_bit at RPOR2.B11;
    const register unsigned short int RP39R4 = 12;
    sbit  RP39R4_bit at RPOR2.B12;
    const register unsigned short int RP39R5 = 13;
    sbit  RP39R5_bit at RPOR2.B13;

sfr unsigned int            RPOR3            absolute 0x676;
    const register unsigned short int RP40R0 = 0;
    sbit  RP40R0_bit at RPOR3.B0;
    const register unsigned short int RP40R1 = 1;
    sbit  RP40R1_bit at RPOR3.B1;
    const register unsigned short int RP40R2 = 2;
    sbit  RP40R2_bit at RPOR3.B2;
    const register unsigned short int RP40R3 = 3;
    sbit  RP40R3_bit at RPOR3.B3;
    const register unsigned short int RP40R4 = 4;
    sbit  RP40R4_bit at RPOR3.B4;
    const register unsigned short int RP40R5 = 5;
    sbit  RP40R5_bit at RPOR3.B5;
    const register unsigned short int RP41R0 = 8;
    sbit  RP41R0_bit at RPOR3.B8;
    const register unsigned short int RP41R1 = 9;
    sbit  RP41R1_bit at RPOR3.B9;
    const register unsigned short int RP41R2 = 10;
    sbit  RP41R2_bit at RPOR3.B10;
    const register unsigned short int RP41R3 = 11;
    sbit  RP41R3_bit at RPOR3.B11;
    const register unsigned short int RP41R4 = 12;
    sbit  RP41R4_bit at RPOR3.B12;
    const register unsigned short int RP41R5 = 13;
    sbit  RP41R5_bit at RPOR3.B13;

sfr unsigned int            RPOR4            absolute 0x678;
    const register unsigned short int RP42R0 = 0;
    sbit  RP42R0_bit at RPOR4.B0;
    const register unsigned short int RP42R1 = 1;
    sbit  RP42R1_bit at RPOR4.B1;
    const register unsigned short int RP42R2 = 2;
    sbit  RP42R2_bit at RPOR4.B2;
    const register unsigned short int RP42R3 = 3;
    sbit  RP42R3_bit at RPOR4.B3;
    const register unsigned short int RP42R4 = 4;
    sbit  RP42R4_bit at RPOR4.B4;
    const register unsigned short int RP42R5 = 5;
    sbit  RP42R5_bit at RPOR4.B5;
    const register unsigned short int RP43R0 = 8;
    sbit  RP43R0_bit at RPOR4.B8;
    const register unsigned short int RP43R1 = 9;
    sbit  RP43R1_bit at RPOR4.B9;
    const register unsigned short int RP43R2 = 10;
    sbit  RP43R2_bit at RPOR4.B10;
    const register unsigned short int RP43R3 = 11;
    sbit  RP43R3_bit at RPOR4.B11;
    const register unsigned short int RP43R4 = 12;
    sbit  RP43R4_bit at RPOR4.B12;
    const register unsigned short int RP43R5 = 13;
    sbit  RP43R5_bit at RPOR4.B13;

sfr unsigned int            RPOR5            absolute 0x67A;
    const register unsigned short int RP48R0 = 0;
    sbit  RP48R0_bit at RPOR5.B0;
    const register unsigned short int RP48R1 = 1;
    sbit  RP48R1_bit at RPOR5.B1;
    const register unsigned short int RP48R2 = 2;
    sbit  RP48R2_bit at RPOR5.B2;
    const register unsigned short int RP48R3 = 3;
    sbit  RP48R3_bit at RPOR5.B3;
    const register unsigned short int RP48R4 = 4;
    sbit  RP48R4_bit at RPOR5.B4;
    const register unsigned short int RP48R5 = 5;
    sbit  RP48R5_bit at RPOR5.B5;
    const register unsigned short int RP49R0 = 8;
    sbit  RP49R0_bit at RPOR5.B8;
    const register unsigned short int RP49R1 = 9;
    sbit  RP49R1_bit at RPOR5.B9;
    const register unsigned short int RP49R2 = 10;
    sbit  RP49R2_bit at RPOR5.B10;
    const register unsigned short int RP49R3 = 11;
    sbit  RP49R3_bit at RPOR5.B11;
    const register unsigned short int RP49R4 = 12;
    sbit  RP49R4_bit at RPOR5.B12;
    const register unsigned short int RP49R5 = 13;
    sbit  RP49R5_bit at RPOR5.B13;

sfr unsigned int            RPOR6            absolute 0x67C;
    const register unsigned short int RP54R0 = 0;
    sbit  RP54R0_bit at RPOR6.B0;
    const register unsigned short int RP54R1 = 1;
    sbit  RP54R1_bit at RPOR6.B1;
    const register unsigned short int RP54R2 = 2;
    sbit  RP54R2_bit at RPOR6.B2;
    const register unsigned short int RP54R3 = 3;
    sbit  RP54R3_bit at RPOR6.B3;
    const register unsigned short int RP54R4 = 4;
    sbit  RP54R4_bit at RPOR6.B4;
    const register unsigned short int RP54R5 = 5;
    sbit  RP54R5_bit at RPOR6.B5;
    const register unsigned short int RP55R0 = 8;
    sbit  RP55R0_bit at RPOR6.B8;
    const register unsigned short int RP55R1 = 9;
    sbit  RP55R1_bit at RPOR6.B9;
    const register unsigned short int RP55R2 = 10;
    sbit  RP55R2_bit at RPOR6.B10;
    const register unsigned short int RP55R3 = 11;
    sbit  RP55R3_bit at RPOR6.B11;
    const register unsigned short int RP55R4 = 12;
    sbit  RP55R4_bit at RPOR6.B12;
    const register unsigned short int RP55R5 = 13;
    sbit  RP55R5_bit at RPOR6.B13;

sfr unsigned int            RPOR7            absolute 0x67E;
    const register unsigned short int RP56R0 = 0;
    sbit  RP56R0_bit at RPOR7.B0;
    const register unsigned short int RP56R1 = 1;
    sbit  RP56R1_bit at RPOR7.B1;
    const register unsigned short int RP56R2 = 2;
    sbit  RP56R2_bit at RPOR7.B2;
    const register unsigned short int RP56R3 = 3;
    sbit  RP56R3_bit at RPOR7.B3;
    const register unsigned short int RP56R4 = 4;
    sbit  RP56R4_bit at RPOR7.B4;
    const register unsigned short int RP56R5 = 5;
    sbit  RP56R5_bit at RPOR7.B5;
    const register unsigned short int RP57R0 = 8;
    sbit  RP57R0_bit at RPOR7.B8;
    const register unsigned short int RP57R1 = 9;
    sbit  RP57R1_bit at RPOR7.B9;
    const register unsigned short int RP57R2 = 10;
    sbit  RP57R2_bit at RPOR7.B10;
    const register unsigned short int RP57R3 = 11;
    sbit  RP57R3_bit at RPOR7.B11;
    const register unsigned short int RP57R4 = 12;
    sbit  RP57R4_bit at RPOR7.B12;
    const register unsigned short int RP57R5 = 13;
    sbit  RP57R5_bit at RPOR7.B13;

sfr unsigned int            RPOR8            absolute 0x680;
    const register unsigned short int RP69R0 = 0;
    sbit  RP69R0_bit at RPOR8.B0;
    const register unsigned short int RP69R1 = 1;
    sbit  RP69R1_bit at RPOR8.B1;
    const register unsigned short int RP69R2 = 2;
    sbit  RP69R2_bit at RPOR8.B2;
    const register unsigned short int RP69R3 = 3;
    sbit  RP69R3_bit at RPOR8.B3;
    const register unsigned short int RP69R4 = 4;
    sbit  RP69R4_bit at RPOR8.B4;
    const register unsigned short int RP69R5 = 5;
    sbit  RP69R5_bit at RPOR8.B5;
    const register unsigned short int RP70R0 = 8;
    sbit  RP70R0_bit at RPOR8.B8;
    const register unsigned short int RP70R1 = 9;
    sbit  RP70R1_bit at RPOR8.B9;
    const register unsigned short int RP70R2 = 10;
    sbit  RP70R2_bit at RPOR8.B10;
    const register unsigned short int RP70R3 = 11;
    sbit  RP70R3_bit at RPOR8.B11;
    const register unsigned short int RP70R4 = 12;
    sbit  RP70R4_bit at RPOR8.B12;
    const register unsigned short int RP70R5 = 13;
    sbit  RP70R5_bit at RPOR8.B13;

sfr unsigned int            RPOR9            absolute 0x682;
    const register unsigned short int RP97R0 = 0;
    sbit  RP97R0_bit at RPOR9.B0;
    const register unsigned short int RP97R1 = 1;
    sbit  RP97R1_bit at RPOR9.B1;
    const register unsigned short int RP97R2 = 2;
    sbit  RP97R2_bit at RPOR9.B2;
    const register unsigned short int RP97R3 = 3;
    sbit  RP97R3_bit at RPOR9.B3;
    const register unsigned short int RP97R4 = 4;
    sbit  RP97R4_bit at RPOR9.B4;
    const register unsigned short int RP97R5 = 5;
    sbit  RP97R5_bit at RPOR9.B5;
    const register unsigned short int RP118R0 = 8;
    sbit  RP118R0_bit at RPOR9.B8;
    const register unsigned short int RP118R1 = 9;
    sbit  RP118R1_bit at RPOR9.B9;
    const register unsigned short int RP118R2 = 10;
    sbit  RP118R2_bit at RPOR9.B10;
    const register unsigned short int RP118R3 = 11;
    sbit  RP118R3_bit at RPOR9.B11;
    const register unsigned short int RP118R4 = 12;
    sbit  RP118R4_bit at RPOR9.B12;
    const register unsigned short int RP118R5 = 13;
    sbit  RP118R5_bit at RPOR9.B13;

sfr unsigned int            RPOR10           absolute 0x684;
    const register unsigned short int RP120R0 = 0;
    sbit  RP120R0_bit at RPOR10.B0;
    const register unsigned short int RP120R1 = 1;
    sbit  RP120R1_bit at RPOR10.B1;
    const register unsigned short int RP120R2 = 2;
    sbit  RP120R2_bit at RPOR10.B2;
    const register unsigned short int RP120R3 = 3;
    sbit  RP120R3_bit at RPOR10.B3;
    const register unsigned short int RP120R4 = 4;
    sbit  RP120R4_bit at RPOR10.B4;
    const register unsigned short int RP120R5 = 5;
    sbit  RP120R5_bit at RPOR10.B5;
    const register unsigned short int RP176R0 = 8;
    sbit  RP176R0_bit at RPOR10.B8;
    const register unsigned short int RP176R1 = 9;
    sbit  RP176R1_bit at RPOR10.B9;
    const register unsigned short int RP176R2 = 10;
    sbit  RP176R2_bit at RPOR10.B10;
    const register unsigned short int RP176R3 = 11;
    sbit  RP176R3_bit at RPOR10.B11;
    const register unsigned short int RP176R4 = 12;
    sbit  RP176R4_bit at RPOR10.B12;
    const register unsigned short int RP176R5 = 13;
    sbit  RP176R5_bit at RPOR10.B13;

sfr unsigned int            RPOR11           absolute 0x686;
    const register unsigned short int RP177R0 = 0;
    sbit  RP177R0_bit at RPOR11.B0;
    const register unsigned short int RP177R1 = 1;
    sbit  RP177R1_bit at RPOR11.B1;
    const register unsigned short int RP177R2 = 2;
    sbit  RP177R2_bit at RPOR11.B2;
    const register unsigned short int RP177R3 = 3;
    sbit  RP177R3_bit at RPOR11.B3;
    const register unsigned short int RP177R4 = 4;
    sbit  RP177R4_bit at RPOR11.B4;
    const register unsigned short int RP177R5 = 5;
    sbit  RP177R5_bit at RPOR11.B5;
    const register unsigned short int RP178R0 = 8;
    sbit  RP178R0_bit at RPOR11.B8;
    const register unsigned short int RP178R1 = 9;
    sbit  RP178R1_bit at RPOR11.B9;
    const register unsigned short int RP178R2 = 10;
    sbit  RP178R2_bit at RPOR11.B10;
    const register unsigned short int RP178R3 = 11;
    sbit  RP178R3_bit at RPOR11.B11;
    const register unsigned short int RP178R4 = 12;
    sbit  RP178R4_bit at RPOR11.B12;
    const register unsigned short int RP178R5 = 13;
    sbit  RP178R5_bit at RPOR11.B13;

sfr unsigned int            RPOR12           absolute 0x688;
    const register unsigned short int RP179R0 = 0;
    sbit  RP179R0_bit at RPOR12.B0;
    const register unsigned short int RP179R1 = 1;
    sbit  RP179R1_bit at RPOR12.B1;
    const register unsigned short int RP179R2 = 2;
    sbit  RP179R2_bit at RPOR12.B2;
    const register unsigned short int RP179R3 = 3;
    sbit  RP179R3_bit at RPOR12.B3;
    const register unsigned short int RP179R4 = 4;
    sbit  RP179R4_bit at RPOR12.B4;
    const register unsigned short int RP179R5 = 5;
    sbit  RP179R5_bit at RPOR12.B5;
    const register unsigned short int RP180R0 = 8;
    sbit  RP180R0_bit at RPOR12.B8;
    const register unsigned short int RP180R1 = 9;
    sbit  RP180R1_bit at RPOR12.B9;
    const register unsigned short int RP180R2 = 10;
    sbit  RP180R2_bit at RPOR12.B10;
    const register unsigned short int RP180R3 = 11;
    sbit  RP180R3_bit at RPOR12.B11;
    const register unsigned short int RP180R4 = 12;
    sbit  RP180R4_bit at RPOR12.B12;
    const register unsigned short int RP180R5 = 13;
    sbit  RP180R5_bit at RPOR12.B13;

sfr unsigned int            RPOR13           absolute 0x68A;
    const register unsigned short int RP181R0 = 0;
    sbit  RP181R0_bit at RPOR13.B0;
    const register unsigned short int RP181R1 = 1;
    sbit  RP181R1_bit at RPOR13.B1;
    const register unsigned short int RP181R2 = 2;
    sbit  RP181R2_bit at RPOR13.B2;
    const register unsigned short int RP181R3 = 3;
    sbit  RP181R3_bit at RPOR13.B3;
    const register unsigned short int RP181R4 = 4;
    sbit  RP181R4_bit at RPOR13.B4;
    const register unsigned short int RP181R5 = 5;
    sbit  RP181R5_bit at RPOR13.B5;

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
    const register unsigned short int IC2R6 = 14;
    sbit  IC2R6_bit at RPINR7.B14;
    const register unsigned short int IC2R7 = 15;
    sbit  IC2R7_bit at RPINR7.B15;

sfr unsigned int            RPINR8           absolute 0x6B0;
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
    const register unsigned short int IC3R6 = 6;
    sbit  IC3R6_bit at RPINR8.B6;
    const register unsigned short int IC3R7 = 7;
    sbit  IC3R7_bit at RPINR8.B7;
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
    const register unsigned short int IC4R6 = 14;
    sbit  IC4R6_bit at RPINR8.B14;
    const register unsigned short int IC4R7 = 15;
    sbit  IC4R7_bit at RPINR8.B15;

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

sfr unsigned int            RPINR19          absolute 0x6C6;
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
    const register unsigned short int U2RXR6 = 6;
    sbit  U2RXR6_bit at RPINR19.B6;
    const register unsigned short int U2RXR7 = 7;
    sbit  U2RXR7_bit at RPINR19.B7;

sfr unsigned int            RPINR22          absolute 0x6CC;
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
    const register unsigned short int SDI2R6 = 6;
    sbit  SDI2R6_bit at RPINR22.B6;
    const register unsigned short int SDI2R7 = 7;
    sbit  SDI2R7_bit at RPINR22.B7;
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
    const register unsigned short int SCK2R6 = 14;
    sbit  SCK2R6_bit at RPINR22.B14;
    const register unsigned short int SCK2R7 = 15;
    sbit  SCK2R7_bit at RPINR22.B15;

sfr unsigned int            RPINR23          absolute 0x6CE;
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
    const register unsigned short int SS2R6 = 6;
    sbit  SS2R6_bit at RPINR23.B6;
    const register unsigned short int SS2R7 = 7;
    sbit  SS2R7_bit at RPINR23.B7;

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
    const register unsigned short int DTCMP1R0 = 8;
    sbit  DTCMP1R0_bit at RPINR38.B8;
    const register unsigned short int DTCMP1R1 = 9;
    sbit  DTCMP1R1_bit at RPINR38.B9;
    const register unsigned short int DTCMP1R2 = 10;
    sbit  DTCMP1R2_bit at RPINR38.B10;
    const register unsigned short int DTCMP1R3 = 11;
    sbit  DTCMP1R3_bit at RPINR38.B11;
    const register unsigned short int DTCMP1R4 = 12;
    sbit  DTCMP1R4_bit at RPINR38.B12;
    const register unsigned short int DTCMP1R5 = 13;
    sbit  DTCMP1R5_bit at RPINR38.B13;
    const register unsigned short int DTCMP1R6 = 14;
    sbit  DTCMP1R6_bit at RPINR38.B14;
    const register unsigned short int DTCMP1R7 = 15;
    sbit  DTCMP1R7_bit at RPINR38.B15;

sfr unsigned int   volatile RPINR39          absolute 0x6EE;
    const register unsigned short int DTCMP2R0 = 0;
    sbit  DTCMP2R0_bit at RPINR39.B0;
    const register unsigned short int DTCMP2R1 = 1;
    sbit  DTCMP2R1_bit at RPINR39.B1;
    const register unsigned short int DTCMP2R2 = 2;
    sbit  DTCMP2R2_bit at RPINR39.B2;
    const register unsigned short int DTCMP2R3 = 3;
    sbit  DTCMP2R3_bit at RPINR39.B3;
    const register unsigned short int DTCMP2R4 = 4;
    sbit  DTCMP2R4_bit at RPINR39.B4;
    const register unsigned short int DTCMP2R5 = 5;
    sbit  DTCMP2R5_bit at RPINR39.B5;
    const register unsigned short int DTCMP2R6 = 6;
    sbit  DTCMP2R6_bit at RPINR39.B6;
    const register unsigned short int DTCMP2R7 = 7;
    sbit  DTCMP2R7_bit at RPINR39.B7;
    const register unsigned short int DTCMP3R0 = 8;
    sbit  DTCMP3R0_bit at RPINR39.B8;
    const register unsigned short int DTCMP3R1 = 9;
    sbit  DTCMP3R1_bit at RPINR39.B9;
    const register unsigned short int DTCMP3R2 = 10;
    sbit  DTCMP3R2_bit at RPINR39.B10;
    const register unsigned short int DTCMP3R3 = 11;
    sbit  DTCMP3R3_bit at RPINR39.B11;
    const register unsigned short int DTCMP3R4 = 12;
    sbit  DTCMP3R4_bit at RPINR39.B12;
    const register unsigned short int DTCMP3R5 = 13;
    sbit  DTCMP3R5_bit at RPINR39.B13;
    const register unsigned short int DTCMP3R6 = 14;
    sbit  DTCMP3R6_bit at RPINR39.B14;
    const register unsigned short int DTCMP3R7 = 15;
    sbit  DTCMP3R7_bit at RPINR39.B15;

sfr unsigned int   volatile RPINR44          absolute 0x6F8;
    const register unsigned short int SENT1R0 = 8;
    sbit  SENT1R0_bit at RPINR44.B8;
    const register unsigned short int SENT1R1 = 9;
    sbit  SENT1R1_bit at RPINR44.B9;
    const register unsigned short int SENT1R2 = 10;
    sbit  SENT1R2_bit at RPINR44.B10;
    const register unsigned short int SENT1R3 = 11;
    sbit  SENT1R3_bit at RPINR44.B11;
    const register unsigned short int SENT1R4 = 12;
    sbit  SENT1R4_bit at RPINR44.B12;
    const register unsigned short int SENT1R5 = 13;
    sbit  SENT1R5_bit at RPINR44.B13;
    const register unsigned short int SENT1R6 = 14;
    sbit  SENT1R6_bit at RPINR44.B14;
    const register unsigned short int SENT1R7 = 15;
    sbit  SENT1R7_bit at RPINR44.B15;

sfr unsigned int   volatile RPINR45          absolute 0x6FA;
    const register unsigned short int SENT2R0 = 0;
    sbit  SENT2R0_bit at RPINR45.B0;
    const register unsigned short int SENT2R1 = 1;
    sbit  SENT2R1_bit at RPINR45.B1;
    const register unsigned short int SENT2R2 = 2;
    sbit  SENT2R2_bit at RPINR45.B2;
    const register unsigned short int SENT2R3 = 3;
    sbit  SENT2R3_bit at RPINR45.B3;
    const register unsigned short int SENT2R4 = 4;
    sbit  SENT2R4_bit at RPINR45.B4;
    const register unsigned short int SENT2R5 = 5;
    sbit  SENT2R5_bit at RPINR45.B5;
    const register unsigned short int SENT2R6 = 6;
    sbit  SENT2R6_bit at RPINR45.B6;
    const register unsigned short int SENT2R7 = 7;
    sbit  SENT2R7_bit at RPINR45.B7;

sfr unsigned int   volatile DMTCON           absolute 0x700;
    const register unsigned short int ON_ = 15;
    sbit  ON_bit at DMTCON.B15;

sfr unsigned int   volatile DMTPRECLR        absolute 0x704;
sfr unsigned int   volatile DMTCLR           absolute 0x708;
sfr unsigned int   volatile DMTSTAT          absolute 0x70C;
    const register unsigned short int WINOPN = 0;
    sbit  WINOPN_bit at DMTSTAT.B0;
    const register unsigned short int DMTEVENT = 5;
    sbit  DMTEVENT_bit at DMTSTAT.B5;
    const register unsigned short int BAD2 = 6;
    sbit  BAD2_bit at DMTSTAT.B6;
    const register unsigned short int BAD1 = 7;
    sbit  BAD1_bit at DMTSTAT.B7;

sfr unsigned int   volatile DMTCNTL          absolute 0x710;
sfr unsigned int   volatile DMTCNTH          absolute 0x712;
sfr unsigned int   volatile DMTHOLDREG       absolute 0x714;
sfr unsigned int   volatile DMTPSCNTL        absolute 0x718;
sfr unsigned int   volatile DMTPSCNTH        absolute 0x71A;
sfr unsigned int   volatile DMTPSINTVL       absolute 0x71C;
sfr unsigned int   volatile DMTPSINTVH       absolute 0x71E;
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
sfr unsigned int   volatile NVMADRU          absolute 0x72C;
sfr unsigned int            NVMKEY           absolute 0x72E;
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

sfr unsigned int            REFOCON          absolute 0x74E;
    const register unsigned short int RODIV0 = 8;
    sbit  RODIV0_bit at REFOCON.B8;
    const register unsigned short int RODIV1 = 9;
    sbit  RODIV1_bit at REFOCON.B9;
    const register unsigned short int RODIV2 = 10;
    sbit  RODIV2_bit at REFOCON.B10;
    const register unsigned short int RODIV3 = 11;
    sbit  RODIV3_bit at REFOCON.B11;
    const register unsigned short int ROSEL = 12;
    sbit  ROSEL_bit at REFOCON.B12;
    const register unsigned short int ROSSLP = 13;
    sbit  ROSSLP_bit at REFOCON.B13;
    const register unsigned short int ROON = 15;
    sbit  ROON_bit at REFOCON.B15;

sfr unsigned int            PMD1             absolute 0x760;
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
    const register unsigned short int PWMMD = 9;
    sbit  PWMMD_bit at PMD1.B9;
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

sfr unsigned int            PMD2             absolute 0x762;
    const register unsigned short int OC1MD = 0;
    sbit  OC1MD_bit at PMD2.B0;
    const register unsigned short int OC2MD = 1;
    sbit  OC2MD_bit at PMD2.B1;
    const register unsigned short int OC3MD = 2;
    sbit  OC3MD_bit at PMD2.B2;
    const register unsigned short int OC4MD = 3;
    sbit  OC4MD_bit at PMD2.B3;
    const register unsigned short int IC1MD = 8;
    sbit  IC1MD_bit at PMD2.B8;
    const register unsigned short int IC2MD = 9;
    sbit  IC2MD_bit at PMD2.B9;
    const register unsigned short int IC3MD = 10;
    sbit  IC3MD_bit at PMD2.B10;
    const register unsigned short int IC4MD = 11;
    sbit  IC4MD_bit at PMD2.B11;

sfr unsigned int            PMD3             absolute 0x764;
    const register unsigned short int CMPMD = 10;
    sbit  CMPMD_bit at PMD3.B10;

sfr unsigned int   volatile PMD4             absolute 0x766;
    const register unsigned short int CTMUMD = 2;
    sbit  CTMUMD_bit at PMD4.B2;
    const register unsigned short int REFOMD = 3;
    sbit  REFOMD_bit at PMD4.B3;

sfr unsigned int   volatile PMD6             absolute 0x76A;
    const register unsigned short int PWM1MD = 8;
    sbit  PWM1MD_bit at PMD6.B8;
    const register unsigned short int PWM2MD = 9;
    sbit  PWM2MD_bit at PMD6.B9;
    const register unsigned short int PWM3MD = 10;
    sbit  PWM3MD_bit at PMD6.B10;

sfr unsigned int   volatile PMD7             absolute 0x76C;
    const register unsigned short int DMA0MD = 4;
    sbit  DMA0MD_bit at PMD7.B4;
    const register unsigned short int DMA1MD = 4;
    sbit  DMA1MD_bit at PMD7.B4;
    const register unsigned short int DMA2MD = 4;
    sbit  DMA2MD_bit at PMD7.B4;
    const register unsigned short int DMA3MD = 4;
    sbit  DMA3MD_bit at PMD7.B4;

sfr unsigned int   volatile PMD8             absolute 0x76E;
    const register unsigned short int DMTMD = 8;
    sbit  DMTMD_bit at PMD8.B8;
    const register unsigned short int SENT1MD = 11;
    sbit  SENT1MD_bit at PMD8.B11;
    const register unsigned short int SENT2MD = 12;
    sbit  SENT2MD_bit at PMD8.B12;

sfr unsigned int   volatile IFS0             absolute 0x800;
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
    const register unsigned short int SPI1EIF = 9;
    sbit  SPI1EIF_bit at IFS0.B9;
    const register unsigned short int SPI1IF = 10;
    sbit  SPI1IF_bit at IFS0.B10;
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

sfr unsigned int   volatile IFS1             absolute 0x802;
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
    const register unsigned short int CMPIF = 2;
    sbit  CMPIF_bit at IFS1.B2;

sfr unsigned int   volatile IFS2             absolute 0x804;
    const register unsigned short int SPI2EIF = 0;
    sbit  SPI2EIF_bit at IFS2.B0;
    const register unsigned short int SPI2IF = 1;
    sbit  SPI2IF_bit at IFS2.B1;
    const register unsigned short int DMA3IF = 4;
    sbit  DMA3IF_bit at IFS2.B4;
    const register unsigned short int IC3IF = 5;
    sbit  IC3IF_bit at IFS2.B5;
    const register unsigned short int IC4IF = 6;
    sbit  IC4IF_bit at IFS2.B6;

sfr unsigned int   volatile IFS3             absolute 0x806;
    const register unsigned short int PSEMIF = 9;
    sbit  PSEMIF_bit at IFS3.B9;

sfr unsigned int   volatile IFS4             absolute 0x808;
    const register unsigned short int U1EIF = 1;
    sbit  U1EIF_bit at IFS4.B1;
    const register unsigned short int U2EIF = 2;
    sbit  U2EIF_bit at IFS4.B2;
    const register unsigned short int CTMUIF = 13;
    sbit  CTMUIF_bit at IFS4.B13;

sfr unsigned int   volatile IFS5             absolute 0x80A;
    const register unsigned short int PWM1IF = 14;
    sbit  PWM1IF_bit at IFS5.B14;
    const register unsigned short int PWM2IF = 15;
    sbit  PWM2IF_bit at IFS5.B15;

sfr unsigned int   volatile IFS6             absolute 0x80C;
    const register unsigned short int PWM3IF = 0;
    sbit  PWM3IF_bit at IFS6.B0;

sfr unsigned int   volatile IFS8             absolute 0x810;
    const register unsigned short int ICDIF = 14;
    sbit  ICDIF_bit at IFS8.B14;

sfr unsigned int   volatile IFS10            absolute 0x814;
    const register unsigned short int I2C1BCIF = 13;
    sbit  I2C1BCIF_bit at IFS10.B13;

sfr unsigned int   volatile IFS11            absolute 0x816;
    const register unsigned short int SENT1EIF = 6;
    sbit  SENT1EIF_bit at IFS11.B6;
    const register unsigned short int SENT1IF = 7;
    sbit  SENT1IF_bit at IFS11.B7;
    const register unsigned short int SENT2EIF = 8;
    sbit  SENT2EIF_bit at IFS11.B8;
    const register unsigned short int SENT2IF = 9;
    sbit  SENT2IF_bit at IFS11.B9;
    const register unsigned short int ECCSBEIF = 10;
    sbit  ECCSBEIF_bit at IFS11.B10;

sfr unsigned int            IEC0             absolute 0x820;
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
    const register unsigned short int SPI1EIE = 9;
    sbit  SPI1EIE_bit at IEC0.B9;
    const register unsigned short int SPI1IE = 10;
    sbit  SPI1IE_bit at IEC0.B10;
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

sfr unsigned int            IEC1             absolute 0x822;
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
    const register unsigned short int CMPIE = 2;
    sbit  CMPIE_bit at IEC1.B2;

sfr unsigned int            IEC2             absolute 0x824;
    const register unsigned short int SPI2EIE = 0;
    sbit  SPI2EIE_bit at IEC2.B0;
    const register unsigned short int SPI2IE = 1;
    sbit  SPI2IE_bit at IEC2.B1;
    const register unsigned short int DMA3IE = 4;
    sbit  DMA3IE_bit at IEC2.B4;
    const register unsigned short int IC3IE = 5;
    sbit  IC3IE_bit at IEC2.B5;
    const register unsigned short int IC4IE = 6;
    sbit  IC4IE_bit at IEC2.B6;

sfr unsigned int            IEC3             absolute 0x826;
    const register unsigned short int PSEMIE = 9;
    sbit  PSEMIE_bit at IEC3.B9;

sfr unsigned int            IEC4             absolute 0x828;
    const register unsigned short int U1EIE = 1;
    sbit  U1EIE_bit at IEC4.B1;
    const register unsigned short int U2EIE = 2;
    sbit  U2EIE_bit at IEC4.B2;
    const register unsigned short int CTMUIE = 13;
    sbit  CTMUIE_bit at IEC4.B13;

sfr unsigned int            IEC5             absolute 0x82A;
    const register unsigned short int PWM1IE = 14;
    sbit  PWM1IE_bit at IEC5.B14;
    const register unsigned short int PWM2IE = 15;
    sbit  PWM2IE_bit at IEC5.B15;

sfr unsigned int   volatile IEC6             absolute 0x82C;
    const register unsigned short int PWM3IE = 0;
    sbit  PWM3IE_bit at IEC6.B0;

sfr unsigned int   volatile IEC8             absolute 0x830;
    const register unsigned short int ICDIE = 14;
    sbit  ICDIE_bit at IEC8.B14;

sfr unsigned int   volatile IEC10            absolute 0x834;
    const register unsigned short int I2C1BCIE = 13;
    sbit  I2C1BCIE_bit at IEC10.B13;

sfr unsigned int   volatile IEC11            absolute 0x836;
    const register unsigned short int SENT1EIE = 6;
    sbit  SENT1EIE_bit at IEC11.B6;
    const register unsigned short int SENT1IE = 7;
    sbit  SENT1IE_bit at IEC11.B7;
    const register unsigned short int SENT2EIE = 8;
    sbit  SENT2EIE_bit at IEC11.B8;
    const register unsigned short int SENT2IE = 9;
    sbit  SENT2IE_bit at IEC11.B9;
    const register unsigned short int ECCSBEIE = 10;
    sbit  ECCSBEIE_bit at IEC11.B10;

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

sfr unsigned int            IPC5             absolute 0x84A;
    const register unsigned short int INT1IP0 = 0;
    sbit  INT1IP0_bit at IPC5.B0;
    const register unsigned short int INT1IP1 = 1;
    sbit  INT1IP1_bit at IPC5.B1;
    const register unsigned short int INT1IP2 = 2;
    sbit  INT1IP2_bit at IPC5.B2;
    const register unsigned short int AD2IP0 = 4;
    sbit  AD2IP0_bit at IPC5.B4;
    const register unsigned short int AD2IP1 = 5;
    sbit  AD2IP1_bit at IPC5.B5;
    const register unsigned short int AD2IP2 = 6;
    sbit  AD2IP2_bit at IPC5.B6;
    const register unsigned short int IC7IP0 = 8;
    sbit  IC7IP0_bit at IPC5.B8;
    const register unsigned short int IC7IP1 = 9;
    sbit  IC7IP1_bit at IPC5.B9;
    const register unsigned short int IC7IP2 = 10;
    sbit  IC7IP2_bit at IPC5.B10;
    const register unsigned short int IC8IP0 = 12;
    sbit  IC8IP0_bit at IPC5.B12;
    const register unsigned short int IC8IP1 = 13;
    sbit  IC8IP1_bit at IPC5.B13;
    const register unsigned short int IC8IP2 = 14;
    sbit  IC8IP2_bit at IPC5.B14;

sfr unsigned int            IPC6             absolute 0x84C;
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

sfr unsigned int            IPC7             absolute 0x84E;
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

sfr unsigned int            IPC8             absolute 0x850;
    const register unsigned short int SPI2EIP0 = 0;
    sbit  SPI2EIP0_bit at IPC8.B0;
    const register unsigned short int SPI2EIP1 = 1;
    sbit  SPI2EIP1_bit at IPC8.B1;
    const register unsigned short int SPI2EIP2 = 2;
    sbit  SPI2EIP2_bit at IPC8.B2;
    const register unsigned short int SPI2IP0 = 4;
    sbit  SPI2IP0_bit at IPC8.B4;
    const register unsigned short int SPI2IP1 = 5;
    sbit  SPI2IP1_bit at IPC8.B5;
    const register unsigned short int SPI2IP2 = 6;
    sbit  SPI2IP2_bit at IPC8.B6;

sfr unsigned int            IPC9             absolute 0x852;
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

sfr unsigned int            IPC14            absolute 0x85C;
    const register unsigned short int C2IP0 = 0;
    sbit  C2IP0_bit at IPC14.B0;
    const register unsigned short int C2IP1 = 1;
    sbit  C2IP1_bit at IPC14.B1;
    const register unsigned short int C2IP2 = 2;
    sbit  C2IP2_bit at IPC14.B2;
    const register unsigned short int PSEMIP0 = 4;
    sbit  PSEMIP0_bit at IPC14.B4;
    const register unsigned short int PSEMIP1 = 5;
    sbit  PSEMIP1_bit at IPC14.B5;
    const register unsigned short int PSEMIP2 = 6;
    sbit  PSEMIP2_bit at IPC14.B6;
    const register unsigned short int QEI1IP0 = 8;
    sbit  QEI1IP0_bit at IPC14.B8;
    const register unsigned short int QEI1IP1 = 9;
    sbit  QEI1IP1_bit at IPC14.B9;
    const register unsigned short int QEI1IP2 = 10;
    sbit  QEI1IP2_bit at IPC14.B10;
    const register unsigned short int DCIEIP0 = 12;
    sbit  DCIEIP0_bit at IPC14.B12;
    const register unsigned short int DCIEIP1 = 13;
    sbit  DCIEIP1_bit at IPC14.B13;
    const register unsigned short int DCIEIP2 = 14;
    sbit  DCIEIP2_bit at IPC14.B14;

sfr unsigned int            IPC16            absolute 0x860;
    const register unsigned short int U1EIP0 = 4;
    sbit  U1EIP0_bit at IPC16.B4;
    const register unsigned short int U1EIP1 = 5;
    sbit  U1EIP1_bit at IPC16.B5;
    const register unsigned short int U1EIP2 = 6;
    sbit  U1EIP2_bit at IPC16.B6;
    const register unsigned short int U2EIP0 = 8;
    sbit  U2EIP0_bit at IPC16.B8;
    const register unsigned short int U2EIP1 = 9;
    sbit  U2EIP1_bit at IPC16.B9;
    const register unsigned short int U2EIP2 = 10;
    sbit  U2EIP2_bit at IPC16.B10;
    const register unsigned short int CRCIP0 = 12;
    sbit  CRCIP0_bit at IPC16.B12;
    const register unsigned short int CRCIP1 = 13;
    sbit  CRCIP1_bit at IPC16.B13;
    const register unsigned short int CRCIP2 = 14;
    sbit  CRCIP2_bit at IPC16.B14;

sfr unsigned int            IPC17            absolute 0x862;
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
    const register unsigned short int C2TXIP0 = 12;
    sbit  C2TXIP0_bit at IPC17.B12;
    const register unsigned short int C2TXIP1 = 13;
    sbit  C2TXIP1_bit at IPC17.B13;
    const register unsigned short int C2TXIP2 = 14;
    sbit  C2TXIP2_bit at IPC17.B14;

sfr unsigned int            IPC19            absolute 0x866;
    const register unsigned short int CTMUIP0 = 4;
    sbit  CTMUIP0_bit at IPC19.B4;
    const register unsigned short int CTMUIP1 = 5;
    sbit  CTMUIP1_bit at IPC19.B5;
    const register unsigned short int CTMUIP2 = 6;
    sbit  CTMUIP2_bit at IPC19.B6;

sfr unsigned int            IPC23            absolute 0x86E;
    const register unsigned short int OC9IP0 = 0;
    sbit  OC9IP0_bit at IPC23.B0;
    const register unsigned short int OC9IP1 = 1;
    sbit  OC9IP1_bit at IPC23.B1;
    const register unsigned short int OC9IP2 = 2;
    sbit  OC9IP2_bit at IPC23.B2;
    const register unsigned short int IC9IP0 = 4;
    sbit  IC9IP0_bit at IPC23.B4;
    const register unsigned short int IC9IP1 = 5;
    sbit  IC9IP1_bit at IPC23.B5;
    const register unsigned short int IC9IP2 = 6;
    sbit  IC9IP2_bit at IPC23.B6;
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
    const register unsigned short int PWM4IP0 = 4;
    sbit  PWM4IP0_bit at IPC24.B4;
    const register unsigned short int PWM4IP1 = 5;
    sbit  PWM4IP1_bit at IPC24.B5;
    const register unsigned short int PWM4IP2 = 6;
    sbit  PWM4IP2_bit at IPC24.B6;
    const register unsigned short int PWM5IP0 = 8;
    sbit  PWM5IP0_bit at IPC24.B8;
    const register unsigned short int PWM5IP1 = 9;
    sbit  PWM5IP1_bit at IPC24.B9;
    const register unsigned short int PWM5IP2 = 10;
    sbit  PWM5IP2_bit at IPC24.B10;
    const register unsigned short int PWM6IP0 = 12;
    sbit  PWM6IP0_bit at IPC24.B12;
    const register unsigned short int PWM6IP1 = 13;
    sbit  PWM6IP1_bit at IPC24.B13;
    const register unsigned short int PWM6IP2 = 14;
    sbit  PWM6IP2_bit at IPC24.B14;

sfr unsigned int   volatile IPC35            absolute 0x886;
    const register unsigned short int OC16IP0 = 0;
    sbit  OC16IP0_bit at IPC35.B0;
    const register unsigned short int OC16IP1 = 1;
    sbit  OC16IP1_bit at IPC35.B1;
    const register unsigned short int OC16IP2 = 2;
    sbit  OC16IP2_bit at IPC35.B2;
    const register unsigned short int IC16IP0 = 4;
    sbit  IC16IP0_bit at IPC35.B4;
    const register unsigned short int IC16IP1 = 5;
    sbit  IC16IP1_bit at IPC35.B5;
    const register unsigned short int IC16IP2 = 6;
    sbit  IC16IP2_bit at IPC35.B6;
    const register unsigned short int ICDIP0 = 8;
    sbit  ICDIP0_bit at IPC35.B8;
    const register unsigned short int ICDIP1 = 9;
    sbit  ICDIP1_bit at IPC35.B9;
    const register unsigned short int ICDIP2 = 10;
    sbit  ICDIP2_bit at IPC35.B10;

sfr unsigned int   volatile IPC43            absolute 0x896;
    const register unsigned short int I2C1BCIP0 = 4;
    sbit  I2C1BCIP0_bit at IPC43.B4;
    const register unsigned short int I2C1BCIP1 = 5;
    sbit  I2C1BCIP1_bit at IPC43.B5;
    const register unsigned short int I2C1BCIP2 = 6;
    sbit  I2C1BCIP2_bit at IPC43.B6;

sfr unsigned int   volatile IPC45            absolute 0x89A;
    const register unsigned short int SENT1EIP0 = 8;
    sbit  SENT1EIP0_bit at IPC45.B8;
    const register unsigned short int SENT1EIP1 = 9;
    sbit  SENT1EIP1_bit at IPC45.B9;
    const register unsigned short int SENT1EIP2 = 10;
    sbit  SENT1EIP2_bit at IPC45.B10;
    const register unsigned short int SENT1IP0 = 12;
    sbit  SENT1IP0_bit at IPC45.B12;
    const register unsigned short int SENT1IP1 = 13;
    sbit  SENT1IP1_bit at IPC45.B13;
    const register unsigned short int SENT1IP2 = 14;
    sbit  SENT1IP2_bit at IPC45.B14;

sfr unsigned int   volatile IPC46            absolute 0x89C;
    const register unsigned short int SENT2EIP0 = 0;
    sbit  SENT2EIP0_bit at IPC46.B0;
    const register unsigned short int SENT2EIP1 = 1;
    sbit  SENT2EIP1_bit at IPC46.B1;
    const register unsigned short int SENT2EIP2 = 2;
    sbit  SENT2EIP2_bit at IPC46.B2;
    const register unsigned short int SENT2IP0 = 4;
    sbit  SENT2IP0_bit at IPC46.B4;
    const register unsigned short int SENT2IP1 = 5;
    sbit  SENT2IP1_bit at IPC46.B5;
    const register unsigned short int SENT2IP2 = 6;
    sbit  SENT2IP2_bit at IPC46.B6;
    const register unsigned short int ECCSBEIP0 = 8;
    sbit  ECCSBEIP0_bit at IPC46.B8;
    const register unsigned short int ECCSBEIP1 = 9;
    sbit  ECCSBEIP1_bit at IPC46.B9;
    const register unsigned short int ECCSBEIP2 = 10;
    sbit  ECCSBEIP2_bit at IPC46.B10;

sfr unsigned int   volatile INTCON1          absolute 0x8C0;
    const register unsigned short int OSCFAIL = 1;
    sbit  OSCFAIL_bit at INTCON1.B1;
    const register unsigned short int STKERR = 2;
    sbit  STKERR_bit at INTCON1.B2;
    const register unsigned short int ADDRERR = 3;
    sbit  ADDRERR_bit at INTCON1.B3;
    const register unsigned short int MATHERR = 4;
    sbit  MATHERR_bit at INTCON1.B4;
    const register unsigned short int DMACERR = 5;
    sbit  DMACERR_bit at INTCON1.B5;
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
    const register unsigned short int AIVTEN = 8;
    sbit  AIVTEN_bit at INTCON2.B8;
    const register unsigned short int SWTRAP = 13;
    sbit  SWTRAP_bit at INTCON2.B13;
    const register unsigned short int DISI = 14;
    sbit  DISI_bit at INTCON2.B14;
    const register unsigned short int GIE = 15;
    sbit  GIE_bit at INTCON2.B15;

sfr unsigned int   volatile INTCON3          absolute 0x8C4;
    const register unsigned short int DOOVR = 4;
    sbit  DOOVR_bit at INTCON3.B4;
    const register unsigned short int DAE = 5;
    sbit  DAE_bit at INTCON3.B5;
    const register unsigned short int NAE = 8;
    sbit  NAE_bit at INTCON3.B8;
    const register unsigned short int DMT = 15;
    sbit  DMT_bit at INTCON3.B15;

sfr unsigned int   volatile INTCON4          absolute 0x8C6;
    const register unsigned short int SGHT = 0;
    sbit  SGHT_bit at INTCON4.B0;
    const register unsigned short int ECCDBE = 1;
    sbit  ECCDBE_bit at INTCON4.B1;

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
sfr unsigned int   volatile OC2CON1          absolute 0x90A;
sfr unsigned int   volatile OC2CON2          absolute 0x90C;
sfr unsigned int            OC2RS            absolute 0x90E;
sfr unsigned int   volatile OC2R             absolute 0x910;
sfr unsigned int   volatile OC2TMR           absolute 0x912;
sfr unsigned int   volatile OC3CON1          absolute 0x914;
sfr unsigned int   volatile OC3CON2          absolute 0x916;
sfr unsigned int            OC3RS            absolute 0x918;
sfr unsigned int   volatile OC3R             absolute 0x91A;
sfr unsigned int   volatile OC3TMR           absolute 0x91C;
sfr unsigned int   volatile OC4CON1          absolute 0x91E;
sfr unsigned int   volatile OC4CON2          absolute 0x920;
sfr unsigned int            OC4RS            absolute 0x922;
sfr unsigned int   volatile OC4R             absolute 0x924;
sfr unsigned int   volatile OC4TMR           absolute 0x926;
sfr unsigned int   volatile CMSTAT           absolute 0xA80;
    const register unsigned short int C1OUT = 0;
    sbit  C1OUT_bit at CMSTAT.B0;
    const register unsigned short int C2OUT = 1;
    sbit  C2OUT_bit at CMSTAT.B1;
    const register unsigned short int C3OUT = 2;
    sbit  C3OUT_bit at CMSTAT.B2;
    const register unsigned short int C4OUT = 3;
    sbit  C4OUT_bit at CMSTAT.B3;
    const register unsigned short int C5OUT = 4;
    sbit  C5OUT_bit at CMSTAT.B4;
    const register unsigned short int C1EVT = 8;
    sbit  C1EVT_bit at CMSTAT.B8;
    const register unsigned short int C2EVT = 9;
    sbit  C2EVT_bit at CMSTAT.B9;
    const register unsigned short int C3EVT = 10;
    sbit  C3EVT_bit at CMSTAT.B10;
    const register unsigned short int C4EVT = 11;
    sbit  C4EVT_bit at CMSTAT.B11;
    const register unsigned short int C5EVT = 12;
    sbit  C5EVT_bit at CMSTAT.B12;
    const register unsigned short int PSIDL = 15;
    sbit  PSIDL_bit at CMSTAT.B15;

sfr unsigned int   volatile CVR1CON          absolute 0xA82;
    const register unsigned short int CVR0 = 0;
    sbit  CVR0_bit at CVR1CON.B0;
    const register unsigned short int CVR1 = 1;
    sbit  CVR1_bit at CVR1CON.B1;
    const register unsigned short int CVR2 = 2;
    sbit  CVR2_bit at CVR1CON.B2;
    const register unsigned short int CVR3 = 3;
    sbit  CVR3_bit at CVR1CON.B3;
    const register unsigned short int CVR4 = 4;
    sbit  CVR4_bit at CVR1CON.B4;
    const register unsigned short int CVR5 = 5;
    sbit  CVR5_bit at CVR1CON.B5;
    const register unsigned short int CVR6 = 6;
    sbit  CVR6_bit at CVR1CON.B6;
    const register unsigned short int VREFSEL = 10;
    sbit  VREFSEL_bit at CVR1CON.B10;
    const register unsigned short int CVRSS = 11;
    sbit  CVRSS_bit at CVR1CON.B11;
    const register unsigned short int CVROE = 14;
    sbit  CVROE_bit at CVR1CON.B14;
    const register unsigned short int CVREN = 15;
    sbit  CVREN_bit at CVR1CON.B15;

sfr unsigned int   volatile CM1CON           absolute 0xA84;
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
    const register unsigned short int OPAEN = 10;
    sbit  OPAEN_bit at CM1CON.B10;
    const register unsigned short int CPOL = 13;
    sbit  CPOL_bit at CM1CON.B13;
    const register unsigned short int COE = 14;
    sbit  COE_bit at CM1CON.B14;
    const register unsigned short int CON = 15;
    sbit  CON_bit at CM1CON.B15;
    const register unsigned short int CEN = 15;
    sbit  CEN_bit at CM1CON.B15;

sfr unsigned int   volatile CM1MSKSRC        absolute 0xA86;
    const register unsigned short int SELSRCA0 = 0;
    sbit  SELSRCA0_bit at CM1MSKSRC.B0;
    const register unsigned short int SELSRCA1 = 1;
    sbit  SELSRCA1_bit at CM1MSKSRC.B1;
    const register unsigned short int SELSRCA2 = 2;
    sbit  SELSRCA2_bit at CM1MSKSRC.B2;
    const register unsigned short int SELSRCA3 = 3;
    sbit  SELSRCA3_bit at CM1MSKSRC.B3;
    const register unsigned short int SELSRCB0 = 4;
    sbit  SELSRCB0_bit at CM1MSKSRC.B4;
    const register unsigned short int SELSRCB1 = 5;
    sbit  SELSRCB1_bit at CM1MSKSRC.B5;
    const register unsigned short int SELSRCB2 = 6;
    sbit  SELSRCB2_bit at CM1MSKSRC.B6;
    const register unsigned short int SELSRCB3 = 7;
    sbit  SELSRCB3_bit at CM1MSKSRC.B7;
    const register unsigned short int SELSRCC0 = 8;
    sbit  SELSRCC0_bit at CM1MSKSRC.B8;
    const register unsigned short int SELSRCC1 = 9;
    sbit  SELSRCC1_bit at CM1MSKSRC.B9;
    const register unsigned short int SELSRCC2 = 10;
    sbit  SELSRCC2_bit at CM1MSKSRC.B10;
    const register unsigned short int SELSRCC3 = 11;
    sbit  SELSRCC3_bit at CM1MSKSRC.B11;

sfr unsigned int   volatile CM1MSKCON        absolute 0xA88;
    const register unsigned short int AANEN = 0;
    sbit  AANEN_bit at CM1MSKCON.B0;
    const register unsigned short int AAEN = 1;
    sbit  AAEN_bit at CM1MSKCON.B1;
    const register unsigned short int ABNEN = 2;
    sbit  ABNEN_bit at CM1MSKCON.B2;
    const register unsigned short int ABEN = 3;
    sbit  ABEN_bit at CM1MSKCON.B3;
    const register unsigned short int ACNEN = 4;
    sbit  ACNEN_bit at CM1MSKCON.B4;
    const register unsigned short int ACEN = 5;
    sbit  ACEN_bit at CM1MSKCON.B5;
    const register unsigned short int PAGS = 6;
    sbit  PAGS_bit at CM1MSKCON.B6;
    const register unsigned short int NAGS = 7;
    sbit  NAGS_bit at CM1MSKCON.B7;
    const register unsigned short int OANEN = 8;
    sbit  OANEN_bit at CM1MSKCON.B8;
    const register unsigned short int OAEN = 9;
    sbit  OAEN_bit at CM1MSKCON.B9;
    const register unsigned short int OBNEN = 10;
    sbit  OBNEN_bit at CM1MSKCON.B10;
    const register unsigned short int OBEN = 11;
    sbit  OBEN_bit at CM1MSKCON.B11;
    const register unsigned short int OCNEN = 12;
    sbit  OCNEN_bit at CM1MSKCON.B12;
    const register unsigned short int OCEN = 13;
    sbit  OCEN_bit at CM1MSKCON.B13;
    const register unsigned short int HLMS = 15;
    sbit  HLMS_bit at CM1MSKCON.B15;

sfr unsigned int   volatile CM1FLTR          absolute 0xA8A;
    const register unsigned short int CFDIV0 = 0;
    sbit  CFDIV0_bit at CM1FLTR.B0;
    const register unsigned short int CFDIV1 = 1;
    sbit  CFDIV1_bit at CM1FLTR.B1;
    const register unsigned short int CFDIV2 = 2;
    sbit  CFDIV2_bit at CM1FLTR.B2;
    const register unsigned short int CFLTREN = 3;
    sbit  CFLTREN_bit at CM1FLTR.B3;
    const register unsigned short int CFSEL0 = 4;
    sbit  CFSEL0_bit at CM1FLTR.B4;
    const register unsigned short int CFSEL1 = 5;
    sbit  CFSEL1_bit at CM1FLTR.B5;
    const register unsigned short int CFSEL2 = 6;
    sbit  CFSEL2_bit at CM1FLTR.B6;

sfr unsigned int   volatile CM2CON           absolute 0xA8C;
sfr unsigned int   volatile CM2MSKSRC        absolute 0xA8E;
sfr unsigned int   volatile CM2MSKCON        absolute 0xA90;
sfr unsigned int   volatile CM2FLTR          absolute 0xA92;
sfr unsigned int   volatile CM3CON           absolute 0xA94;
sfr unsigned int   volatile CM3MSKSRC        absolute 0xA96;
sfr unsigned int   volatile CM3MSKCON        absolute 0xA98;
sfr unsigned int   volatile CM3FLTR          absolute 0xA9A;
sfr unsigned int   volatile CM4CON           absolute 0xA9C;
sfr unsigned int   volatile CM4MSKSRC        absolute 0xA9E;
sfr unsigned int   volatile CM4MSKCON        absolute 0xAA0;
sfr unsigned int   volatile CM4FLTR          absolute 0xAA2;
sfr unsigned int   volatile CM5CON           absolute 0xAA4;
sfr unsigned int   volatile CM5MSKSRC        absolute 0xAA6;
sfr unsigned int   volatile CM5MSKCON        absolute 0xAA8;
sfr unsigned int   volatile CM5FLTR          absolute 0xAAA;
sfr unsigned int   volatile CVR2CON          absolute 0xAB4;
sfr unsigned int            DMA0CON          absolute 0xB00;
    const register unsigned short int MODE0 = 0;
    sbit  MODE0_bit at DMA0CON.B0;
    const register unsigned short int MODE1 = 1;
    sbit  MODE1_bit at DMA0CON.B1;
    const register unsigned short int AMODE0 = 4;
    sbit  AMODE0_bit at DMA0CON.B4;
    const register unsigned short int AMODE1 = 5;
    sbit  AMODE1_bit at DMA0CON.B5;
    const register unsigned short int NULLW = 11;
    sbit  NULLW_bit at DMA0CON.B11;
    const register unsigned short int HALF = 12;
    sbit  HALF_bit at DMA0CON.B12;
    const register unsigned short int DIR_ = 13;
    sbit  DIR_bit at DMA0CON.B13;
    const register unsigned short int SIZE = 14;
    sbit  SIZE_bit at DMA0CON.B14;
    const register unsigned short int CHEN = 15;
    sbit  CHEN_bit at DMA0CON.B15;

sfr unsigned int   volatile DMA0REQ          absolute 0xB02;
    const register unsigned short int IRQSEL0 = 0;
    sbit  IRQSEL0_bit at DMA0REQ.B0;
    const register unsigned short int IRQSEL1 = 1;
    sbit  IRQSEL1_bit at DMA0REQ.B1;
    const register unsigned short int IRQSEL2 = 2;
    sbit  IRQSEL2_bit at DMA0REQ.B2;
    const register unsigned short int IRQSEL3 = 3;
    sbit  IRQSEL3_bit at DMA0REQ.B3;
    const register unsigned short int IRQSEL4 = 4;
    sbit  IRQSEL4_bit at DMA0REQ.B4;
    const register unsigned short int IRQSEL5 = 5;
    sbit  IRQSEL5_bit at DMA0REQ.B5;
    const register unsigned short int IRQSEL6 = 6;
    sbit  IRQSEL6_bit at DMA0REQ.B6;
    const register unsigned short int IRQSEL7 = 7;
    sbit  IRQSEL7_bit at DMA0REQ.B7;
    const register unsigned short int FORCE = 15;
    sbit  FORCE_bit at DMA0REQ.B15;

sfr unsigned int   volatile DMA0STAL         absolute 0xB04;
sfr unsigned int   volatile DMA0STAH         absolute 0xB06;
sfr unsigned int   volatile DMA0STBL         absolute 0xB08;
sfr unsigned int   volatile DMA0STBH         absolute 0xB0A;
sfr unsigned int   volatile DMA0PAD          absolute 0xB0C;
sfr unsigned int   volatile DMA0CNT          absolute 0xB0E;
sfr unsigned int            DMA1CON          absolute 0xB10;
sfr unsigned int   volatile DMA1REQ          absolute 0xB12;
sfr unsigned int   volatile DMA1STAL         absolute 0xB14;
sfr unsigned int   volatile DMA1STAH         absolute 0xB16;
sfr unsigned int   volatile DMA1STBL         absolute 0xB18;
sfr unsigned int   volatile DMA1STBH         absolute 0xB1A;
sfr unsigned int   volatile DMA1PAD          absolute 0xB1C;
sfr unsigned int   volatile DMA1CNT          absolute 0xB1E;
sfr unsigned int            DMA2CON          absolute 0xB20;
sfr unsigned int   volatile DMA2REQ          absolute 0xB22;
sfr unsigned int   volatile DMA2STAL         absolute 0xB24;
sfr unsigned int   volatile DMA2STAH         absolute 0xB26;
sfr unsigned int   volatile DMA2STBL         absolute 0xB28;
sfr unsigned int   volatile DMA2STBH         absolute 0xB2A;
sfr unsigned int   volatile DMA2PAD          absolute 0xB2C;
sfr unsigned int   volatile DMA2CNT          absolute 0xB2E;
sfr unsigned int            DMA3CON          absolute 0xB30;
sfr unsigned int   volatile DMA3REQ          absolute 0xB32;
sfr unsigned int   volatile DMA3STAL         absolute 0xB34;
sfr unsigned int   volatile DMA3STAH         absolute 0xB36;
sfr unsigned int   volatile DMA3STBL         absolute 0xB38;
sfr unsigned int   volatile DMA3STBH         absolute 0xB3A;
sfr unsigned int   volatile DMA3PAD          absolute 0xB3C;
sfr unsigned int   volatile DMA3CNT          absolute 0xB3E;
sfr unsigned int   volatile DMAPWC           absolute 0xBF0;
    const register unsigned short int PWCOL0 = 0;
    sbit  PWCOL0_bit at DMAPWC.B0;
    const register unsigned short int PWCOL1 = 1;
    sbit  PWCOL1_bit at DMAPWC.B1;
    const register unsigned short int PWCOL2 = 2;
    sbit  PWCOL2_bit at DMAPWC.B2;
    const register unsigned short int PWCOL3 = 3;
    sbit  PWCOL3_bit at DMAPWC.B3;

sfr unsigned int   volatile DMARQC           absolute 0xBF2;
    const register unsigned short int RQCOL0 = 0;
    sbit  RQCOL0_bit at DMARQC.B0;
    const register unsigned short int RQCOL1 = 1;
    sbit  RQCOL1_bit at DMARQC.B1;
    const register unsigned short int RQCOL2 = 2;
    sbit  RQCOL2_bit at DMARQC.B2;
    const register unsigned short int RQCOL3 = 3;
    sbit  RQCOL3_bit at DMARQC.B3;

sfr unsigned int   volatile DMAPPS           absolute 0xBF4;
    const register unsigned short int PPST0 = 0;
    sbit  PPST0_bit at DMAPPS.B0;
    const register unsigned short int PPST1 = 1;
    sbit  PPST1_bit at DMAPPS.B1;
    const register unsigned short int PPST2 = 2;
    sbit  PPST2_bit at DMAPPS.B2;
    const register unsigned short int PPST3 = 3;
    sbit  PPST3_bit at DMAPPS.B3;

sfr unsigned int   volatile DMALCA           absolute 0xBF6;
    const register unsigned short int LSTCH0 = 0;
    sbit  LSTCH0_bit at DMALCA.B0;
    const register unsigned short int LSTCH1 = 1;
    sbit  LSTCH1_bit at DMALCA.B1;
    const register unsigned short int LSTCH2 = 2;
    sbit  LSTCH2_bit at DMALCA.B2;
    const register unsigned short int LSTCH3 = 3;
    sbit  LSTCH3_bit at DMALCA.B3;

sfr unsigned int   volatile DSADRL           absolute 0xBF8;
sfr unsigned int   volatile DSADRH           absolute 0xBFA;
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
sfr unsigned int   volatile CHOP             absolute 0xC1A;
    const register unsigned short int CHOPCLK0 = 0;
    sbit  CHOPCLK0_bit at CHOP.B0;
    const register unsigned short int CHOPCLK1 = 1;
    sbit  CHOPCLK1_bit at CHOP.B1;
    const register unsigned short int CHOPCLK2 = 2;
    sbit  CHOPCLK2_bit at CHOP.B2;
    const register unsigned short int CHOPCLK3 = 3;
    sbit  CHOPCLK3_bit at CHOP.B3;
    const register unsigned short int CHOPCLK4 = 4;
    sbit  CHOPCLK4_bit at CHOP.B4;
    const register unsigned short int CHOPCLK5 = 5;
    sbit  CHOPCLK5_bit at CHOP.B5;
    const register unsigned short int CHOPCLK6 = 6;
    sbit  CHOPCLK6_bit at CHOP.B6;
    const register unsigned short int CHOPCLK7 = 7;
    sbit  CHOPCLK7_bit at CHOP.B7;
    const register unsigned short int CHOPCLK8 = 8;
    sbit  CHOPCLK8_bit at CHOP.B8;
    const register unsigned short int CHOPCLK9 = 9;
    sbit  CHOPCLK9_bit at CHOP.B9;
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
    const register unsigned short int DTCP = 5;
    sbit  DTCP_bit at PWMCON1.B5;
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
sfr unsigned int   volatile TRIG1            absolute 0xC32;
    const register unsigned short int TRGCMP0 = 0;
    sbit  TRGCMP0_bit at TRIG1.B0;
    const register unsigned short int TRGCMP1 = 1;
    sbit  TRGCMP1_bit at TRIG1.B1;
    const register unsigned short int TRGCMP2 = 2;
    sbit  TRGCMP2_bit at TRIG1.B2;
    const register unsigned short int TRGCMP3 = 3;
    sbit  TRGCMP3_bit at TRIG1.B3;
    const register unsigned short int TRGCMP4 = 4;
    sbit  TRGCMP4_bit at TRIG1.B4;
    const register unsigned short int TRGCMP5 = 5;
    sbit  TRGCMP5_bit at TRIG1.B5;
    const register unsigned short int TRGCMP6 = 6;
    sbit  TRGCMP6_bit at TRIG1.B6;
    const register unsigned short int TRGCMP7 = 7;
    sbit  TRGCMP7_bit at TRIG1.B7;
    const register unsigned short int TRGCMP8 = 8;
    sbit  TRGCMP8_bit at TRIG1.B8;
    const register unsigned short int TRGCMP9 = 9;
    sbit  TRGCMP9_bit at TRIG1.B9;
    const register unsigned short int TRGCMP10 = 10;
    sbit  TRGCMP10_bit at TRIG1.B10;
    const register unsigned short int TRGCMP11 = 11;
    sbit  TRGCMP11_bit at TRIG1.B11;
    const register unsigned short int TRGCMP12 = 12;
    sbit  TRGCMP12_bit at TRIG1.B12;
    const register unsigned short int TRGCMP13 = 13;
    sbit  TRGCMP13_bit at TRIG1.B13;
    const register unsigned short int TRGCMP14 = 14;
    sbit  TRGCMP14_bit at TRIG1.B14;
    const register unsigned short int TRGCMP15 = 15;
    sbit  TRGCMP15_bit at TRIG1.B15;

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
    const register unsigned short int TRGDIV0 = 12;
    sbit  TRGDIV0_bit at TRGCON1.B12;
    const register unsigned short int TRGDIV1 = 13;
    sbit  TRGDIV1_bit at TRGCON1.B13;
    const register unsigned short int TRGDIV2 = 14;
    sbit  TRGDIV2_bit at TRGCON1.B14;
    const register unsigned short int TRGDIV3 = 15;
    sbit  TRGDIV3_bit at TRGCON1.B15;

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

sfr unsigned int   volatile PWMCON2          absolute 0xC40;
sfr unsigned int   volatile IOCON2           absolute 0xC42;
sfr unsigned int   volatile FCLCON2          absolute 0xC44;
sfr unsigned int   volatile PDC2             absolute 0xC46;
sfr unsigned int   volatile PHASE2           absolute 0xC48;
sfr unsigned int   volatile DTR2             absolute 0xC4A;
sfr unsigned int   volatile ALTDTR2          absolute 0xC4C;
sfr unsigned int   volatile TRIG2            absolute 0xC52;
sfr unsigned int   volatile TRGCON2          absolute 0xC54;
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
sfr unsigned int   volatile TRIG3            absolute 0xC72;
sfr unsigned int   volatile TRGCON3          absolute 0xC74;
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
    const register unsigned short int TRISA11 = 11;
    sbit  TRISA11_bit at TRISA.B11;
    const register unsigned short int TRISA12 = 12;
    sbit  TRISA12_bit at TRISA.B12;

sfr unsigned int   volatile PORTA            absolute 0xE02;
    const register unsigned short int RA0 = 0;
    sbit  RA0_bit at PORTA.B0;
    const register unsigned short int RA1 = 1;
    sbit  RA1_bit at PORTA.B1;
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
    const register unsigned short int RA11 = 11;
    sbit  RA11_bit at PORTA.B11;
    const register unsigned short int RA12 = 12;
    sbit  RA12_bit at PORTA.B12;

sfr unsigned int   volatile LATA             absolute 0xE04;
    const register unsigned short int LATA0 = 0;
    sbit  LATA0_bit at LATA.B0;
    const register unsigned short int LATA1 = 1;
    sbit  LATA1_bit at LATA.B1;
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
    const register unsigned short int LATA11 = 11;
    sbit  LATA11_bit at LATA.B11;
    const register unsigned short int LATA12 = 12;
    sbit  LATA12_bit at LATA.B12;

sfr unsigned int   volatile ODCA             absolute 0xE06;
    const register unsigned short int ODCA0 = 0;
    sbit  ODCA0_bit at ODCA.B0;
    const register unsigned short int ODCA1 = 1;
    sbit  ODCA1_bit at ODCA.B1;
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
    const register unsigned short int ODCA11 = 11;
    sbit  ODCA11_bit at ODCA.B11;
    const register unsigned short int ODCA12 = 12;
    sbit  ODCA12_bit at ODCA.B12;

sfr unsigned int   volatile CNENA            absolute 0xE08;
    const register unsigned short int CNIEA0 = 0;
    sbit  CNIEA0_bit at CNENA.B0;
    const register unsigned short int CNIEA1 = 1;
    sbit  CNIEA1_bit at CNENA.B1;
    const register unsigned short int CNIEA4 = 4;
    sbit  CNIEA4_bit at CNENA.B4;
    const register unsigned short int CNIEA7 = 7;
    sbit  CNIEA7_bit at CNENA.B7;
    const register unsigned short int CNIEA8 = 8;
    sbit  CNIEA8_bit at CNENA.B8;
    const register unsigned short int CNIEA9 = 9;
    sbit  CNIEA9_bit at CNENA.B9;
    const register unsigned short int CNIEA10 = 10;
    sbit  CNIEA10_bit at CNENA.B10;
    const register unsigned short int CNIEA11 = 11;
    sbit  CNIEA11_bit at CNENA.B11;
    const register unsigned short int CNIEA12 = 12;
    sbit  CNIEA12_bit at CNENA.B12;

sfr unsigned int   volatile CNPUA            absolute 0xE0A;
    const register unsigned short int CNPUA0 = 0;
    sbit  CNPUA0_bit at CNPUA.B0;
    const register unsigned short int CNPUA1 = 1;
    sbit  CNPUA1_bit at CNPUA.B1;
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
    const register unsigned short int CNPUA11 = 11;
    sbit  CNPUA11_bit at CNPUA.B11;
    const register unsigned short int CNPUA12 = 12;
    sbit  CNPUA12_bit at CNPUA.B12;

sfr unsigned int   volatile CNPDA            absolute 0xE0C;
    const register unsigned short int CNPDA0 = 0;
    sbit  CNPDA0_bit at CNPDA.B0;
    const register unsigned short int CNPDA1 = 1;
    sbit  CNPDA1_bit at CNPDA.B1;
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
    const register unsigned short int CNPDA11 = 11;
    sbit  CNPDA11_bit at CNPDA.B11;
    const register unsigned short int CNPDA12 = 12;
    sbit  CNPDA12_bit at CNPDA.B12;

sfr unsigned int   volatile ANSELA           absolute 0xE0E;
    const register unsigned short int ANSA0 = 0;
    sbit  ANSA0_bit at ANSELA.B0;
    const register unsigned short int ANSA1 = 1;
    sbit  ANSA1_bit at ANSELA.B1;
    const register unsigned short int ANSA4 = 4;
    sbit  ANSA4_bit at ANSELA.B4;
    const register unsigned short int ANSA7 = 7;
    sbit  ANSA7_bit at ANSELA.B7;
    const register unsigned short int ANSA9 = 9;
    sbit  ANSA9_bit at ANSELA.B9;
    const register unsigned short int ANSA10 = 10;
    sbit  ANSA10_bit at ANSELA.B10;
    const register unsigned short int ANSA11 = 11;
    sbit  ANSA11_bit at ANSELA.B11;
    const register unsigned short int ANSA12 = 12;
    sbit  ANSA12_bit at ANSELA.B12;

sfr unsigned int   volatile SR1A             absolute 0xE10;
    const register unsigned short int SR1A4 = 4;
    sbit  SR1A4_bit at SR1A.B4;
    const register unsigned short int SR1A9 = 9;
    sbit  SR1A9_bit at SR1A.B9;

sfr unsigned int   volatile SR0A             absolute 0xE12;
    const register unsigned short int SR0A4 = 4;
    sbit  SR0A4_bit at SR0A.B4;
    const register unsigned short int SR0A9 = 9;
    sbit  SR0A9_bit at SR0A.B9;

sfr unsigned int   volatile TRISB            absolute 0xE14;
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

sfr unsigned int   volatile PORTB            absolute 0xE16;
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

sfr unsigned int   volatile LATB             absolute 0xE18;
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

sfr unsigned int   volatile ODCB             absolute 0xE1A;
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

sfr unsigned int   volatile CNENB            absolute 0xE1C;
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

sfr unsigned int   volatile CNPUB            absolute 0xE1E;
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

sfr unsigned int   volatile CNPDB            absolute 0xE20;
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

sfr unsigned int   volatile ANSELB           absolute 0xE22;
    const register unsigned short int ANSB0 = 0;
    sbit  ANSB0_bit at ANSELB.B0;
    const register unsigned short int ANSB1 = 1;
    sbit  ANSB1_bit at ANSELB.B1;
    const register unsigned short int ANSB2 = 2;
    sbit  ANSB2_bit at ANSELB.B2;
    const register unsigned short int ANSB3 = 3;
    sbit  ANSB3_bit at ANSELB.B3;
    const register unsigned short int ANSB7 = 7;
    sbit  ANSB7_bit at ANSELB.B7;
    const register unsigned short int ANSB8 = 8;
    sbit  ANSB8_bit at ANSELB.B8;
    const register unsigned short int ANSB9 = 9;
    sbit  ANSB9_bit at ANSELB.B9;

sfr unsigned int   volatile SR1B             absolute 0xE24;
    const register unsigned short int SR1B4 = 4;
    sbit  SR1B4_bit at SR1B.B4;
    const register unsigned short int SR1B7 = 7;
    sbit  SR1B7_bit at SR1B.B7;
    const register unsigned short int SR1B8 = 8;
    sbit  SR1B8_bit at SR1B.B8;
    const register unsigned short int SR1B9 = 9;
    sbit  SR1B9_bit at SR1B.B9;

sfr unsigned int   volatile SR0B             absolute 0xE26;
    const register unsigned short int SR0B4 = 4;
    sbit  SR0B4_bit at SR0B.B4;
    const register unsigned short int SR0B7 = 7;
    sbit  SR0B7_bit at SR0B.B7;
    const register unsigned short int SR0B8 = 8;
    sbit  SR0B8_bit at SR0B.B8;
    const register unsigned short int SR0B9 = 9;
    sbit  SR0B9_bit at SR0B.B9;

sfr unsigned int   volatile TRISC            absolute 0xE28;
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
    const register unsigned short int TRISC10 = 10;
    sbit  TRISC10_bit at TRISC.B10;
    const register unsigned short int TRISC11 = 11;
    sbit  TRISC11_bit at TRISC.B11;
    const register unsigned short int TRISC12 = 12;
    sbit  TRISC12_bit at TRISC.B12;
    const register unsigned short int TRISC13 = 13;
    sbit  TRISC13_bit at TRISC.B13;
    const register unsigned short int TRISC15 = 15;
    sbit  TRISC15_bit at TRISC.B15;

sfr unsigned int   volatile PORTC            absolute 0xE2A;
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
    const register unsigned short int RC10 = 10;
    sbit  RC10_bit at PORTC.B10;
    const register unsigned short int RC11 = 11;
    sbit  RC11_bit at PORTC.B11;
    const register unsigned short int RC12 = 12;
    sbit  RC12_bit at PORTC.B12;
    const register unsigned short int RC13 = 13;
    sbit  RC13_bit at PORTC.B13;
    const register unsigned short int RC15 = 15;
    sbit  RC15_bit at PORTC.B15;

sfr unsigned int   volatile LATC             absolute 0xE2C;
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
    const register unsigned short int LATC10 = 10;
    sbit  LATC10_bit at LATC.B10;
    const register unsigned short int LATC11 = 11;
    sbit  LATC11_bit at LATC.B11;
    const register unsigned short int LATC12 = 12;
    sbit  LATC12_bit at LATC.B12;
    const register unsigned short int LATC13 = 13;
    sbit  LATC13_bit at LATC.B13;
    const register unsigned short int LATC15 = 15;
    sbit  LATC15_bit at LATC.B15;

sfr unsigned int   volatile ODCC             absolute 0xE2E;
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
    const register unsigned short int ODCC10 = 10;
    sbit  ODCC10_bit at ODCC.B10;
    const register unsigned short int ODCC11 = 11;
    sbit  ODCC11_bit at ODCC.B11;
    const register unsigned short int ODCC12 = 12;
    sbit  ODCC12_bit at ODCC.B12;
    const register unsigned short int ODCC13 = 13;
    sbit  ODCC13_bit at ODCC.B13;
    const register unsigned short int ODCC15 = 15;
    sbit  ODCC15_bit at ODCC.B15;

sfr unsigned int   volatile CNENC            absolute 0xE30;
    const register unsigned short int CNIEC0 = 0;
    sbit  CNIEC0_bit at CNENC.B0;
    const register unsigned short int CNIEC1 = 1;
    sbit  CNIEC1_bit at CNENC.B1;
    const register unsigned short int CNIEC2 = 2;
    sbit  CNIEC2_bit at CNENC.B2;
    const register unsigned short int CNIEC3 = 3;
    sbit  CNIEC3_bit at CNENC.B3;
    const register unsigned short int CNIEC4 = 4;
    sbit  CNIEC4_bit at CNENC.B4;
    const register unsigned short int CNIEC5 = 5;
    sbit  CNIEC5_bit at CNENC.B5;
    const register unsigned short int CNIEC6 = 6;
    sbit  CNIEC6_bit at CNENC.B6;
    const register unsigned short int CNIEC7 = 7;
    sbit  CNIEC7_bit at CNENC.B7;
    const register unsigned short int CNIEC8 = 8;
    sbit  CNIEC8_bit at CNENC.B8;
    const register unsigned short int CNIEC9 = 9;
    sbit  CNIEC9_bit at CNENC.B9;
    const register unsigned short int CNIEC10 = 10;
    sbit  CNIEC10_bit at CNENC.B10;
    const register unsigned short int CNIEC11 = 11;
    sbit  CNIEC11_bit at CNENC.B11;
    const register unsigned short int CNIEC12 = 12;
    sbit  CNIEC12_bit at CNENC.B12;
    const register unsigned short int CNIEC13 = 13;
    sbit  CNIEC13_bit at CNENC.B13;
    const register unsigned short int CNIEC15 = 15;
    sbit  CNIEC15_bit at CNENC.B15;

sfr unsigned int   volatile CNPUC            absolute 0xE32;
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
    const register unsigned short int CNPUC10 = 10;
    sbit  CNPUC10_bit at CNPUC.B10;
    const register unsigned short int CNPUC11 = 11;
    sbit  CNPUC11_bit at CNPUC.B11;
    const register unsigned short int CNPUC12 = 12;
    sbit  CNPUC12_bit at CNPUC.B12;
    const register unsigned short int CNPUC13 = 13;
    sbit  CNPUC13_bit at CNPUC.B13;
    const register unsigned short int CNPUC15 = 15;
    sbit  CNPUC15_bit at CNPUC.B15;

sfr unsigned int   volatile CNPDC            absolute 0xE34;
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
    const register unsigned short int CNPDC10 = 10;
    sbit  CNPDC10_bit at CNPDC.B10;
    const register unsigned short int CNPDC11 = 11;
    sbit  CNPDC11_bit at CNPDC.B11;
    const register unsigned short int CNPDC12 = 12;
    sbit  CNPDC12_bit at CNPDC.B12;
    const register unsigned short int CNPDC13 = 13;
    sbit  CNPDC13_bit at CNPDC.B13;
    const register unsigned short int CNPDC15 = 15;
    sbit  CNPDC15_bit at CNPDC.B15;

sfr unsigned int   volatile ANSELC           absolute 0xE36;
    const register unsigned short int ANSC0 = 0;
    sbit  ANSC0_bit at ANSELC.B0;
    const register unsigned short int ANSC1 = 1;
    sbit  ANSC1_bit at ANSELC.B1;
    const register unsigned short int ANSC2 = 2;
    sbit  ANSC2_bit at ANSELC.B2;
    const register unsigned short int ANSC3 = 3;
    sbit  ANSC3_bit at ANSELC.B3;
    const register unsigned short int ANSC4 = 4;
    sbit  ANSC4_bit at ANSELC.B4;
    const register unsigned short int ANSC5 = 5;
    sbit  ANSC5_bit at ANSELC.B5;
    const register unsigned short int ANSC6 = 6;
    sbit  ANSC6_bit at ANSELC.B6;
    const register unsigned short int ANSC7 = 7;
    sbit  ANSC7_bit at ANSELC.B7;
    const register unsigned short int ANSC8 = 8;
    sbit  ANSC8_bit at ANSELC.B8;
    const register unsigned short int ANSC9 = 9;
    sbit  ANSC9_bit at ANSELC.B9;
    const register unsigned short int ANSC10 = 10;
    sbit  ANSC10_bit at ANSELC.B10;
    const register unsigned short int ANSC11 = 11;
    sbit  ANSC11_bit at ANSELC.B11;
    const register unsigned short int ANSC12 = 12;
    sbit  ANSC12_bit at ANSELC.B12;

sfr unsigned int   volatile SR1C             absolute 0xE38;
    const register unsigned short int SR1C3 = 3;
    sbit  SR1C3_bit at SR1C.B3;
    const register unsigned short int SR1C6 = 6;
    sbit  SR1C6_bit at SR1C.B6;
    const register unsigned short int SR1C7 = 7;
    sbit  SR1C7_bit at SR1C.B7;
    const register unsigned short int SR1C8 = 8;
    sbit  SR1C8_bit at SR1C.B8;
    const register unsigned short int SR1C9 = 9;
    sbit  SR1C9_bit at SR1C.B9;

sfr unsigned int   volatile SR0C             absolute 0xE3A;
    const register unsigned short int SR0C3 = 3;
    sbit  SR0C3_bit at SR0C.B3;
    const register unsigned short int SR0C6 = 6;
    sbit  SR0C6_bit at SR0C.B6;
    const register unsigned short int SR0C7 = 7;
    sbit  SR0C7_bit at SR0C.B7;
    const register unsigned short int SR0C8 = 8;
    sbit  SR0C8_bit at SR0C.B8;
    const register unsigned short int SR0C9 = 9;
    sbit  SR0C9_bit at SR0C.B9;

sfr unsigned int   volatile TRISD            absolute 0xE3C;
    const register unsigned short int TRISD5 = 5;
    sbit  TRISD5_bit at TRISD.B5;
    const register unsigned short int TRISD6 = 6;
    sbit  TRISD6_bit at TRISD.B6;
    const register unsigned short int TRISD8 = 8;
    sbit  TRISD8_bit at TRISD.B8;

sfr unsigned int   volatile PORTD            absolute 0xE3E;
    const register unsigned short int RD5 = 5;
    sbit  RD5_bit at PORTD.B5;
    const register unsigned short int RD6 = 6;
    sbit  RD6_bit at PORTD.B6;
    const register unsigned short int RD8 = 8;
    sbit  RD8_bit at PORTD.B8;

sfr unsigned int   volatile LATD             absolute 0xE40;
    const register unsigned short int LATD5 = 5;
    sbit  LATD5_bit at LATD.B5;
    const register unsigned short int LATD6 = 6;
    sbit  LATD6_bit at LATD.B6;
    const register unsigned short int LATD8 = 8;
    sbit  LATD8_bit at LATD.B8;

sfr unsigned int   volatile ODCD             absolute 0xE42;
    const register unsigned short int ODCD5 = 5;
    sbit  ODCD5_bit at ODCD.B5;
    const register unsigned short int ODCD6 = 6;
    sbit  ODCD6_bit at ODCD.B6;
    const register unsigned short int ODCD8 = 8;
    sbit  ODCD8_bit at ODCD.B8;

sfr unsigned int   volatile CNEND            absolute 0xE44;
    const register unsigned short int CNIED5 = 5;
    sbit  CNIED5_bit at CNEND.B5;
    const register unsigned short int CNIED6 = 6;
    sbit  CNIED6_bit at CNEND.B6;
    const register unsigned short int CNIED8 = 8;
    sbit  CNIED8_bit at CNEND.B8;

sfr unsigned int   volatile CNPUD            absolute 0xE46;
    const register unsigned short int CNPUD5 = 5;
    sbit  CNPUD5_bit at CNPUD.B5;
    const register unsigned short int CNPUD6 = 6;
    sbit  CNPUD6_bit at CNPUD.B6;
    const register unsigned short int CNPUD8 = 8;
    sbit  CNPUD8_bit at CNPUD.B8;

sfr unsigned int   volatile CNPDD            absolute 0xE48;
    const register unsigned short int CNPDD5 = 5;
    sbit  CNPDD5_bit at CNPDD.B5;
    const register unsigned short int CNPDD6 = 6;
    sbit  CNPDD6_bit at CNPDD.B6;
    const register unsigned short int CNPDD8 = 8;
    sbit  CNPDD8_bit at CNPDD.B8;

sfr unsigned int   volatile TRISE            absolute 0xE50;
    const register unsigned short int TRISE12 = 12;
    sbit  TRISE12_bit at TRISE.B12;
    const register unsigned short int TRISE13 = 13;
    sbit  TRISE13_bit at TRISE.B13;
    const register unsigned short int TRISE14 = 14;
    sbit  TRISE14_bit at TRISE.B14;
    const register unsigned short int TRISE15 = 15;
    sbit  TRISE15_bit at TRISE.B15;

sfr unsigned int   volatile PORTE            absolute 0xE52;
    const register unsigned short int RE12 = 12;
    sbit  RE12_bit at PORTE.B12;
    const register unsigned short int RE13 = 13;
    sbit  RE13_bit at PORTE.B13;
    const register unsigned short int RE14 = 14;
    sbit  RE14_bit at PORTE.B14;
    const register unsigned short int RE15 = 15;
    sbit  RE15_bit at PORTE.B15;

sfr unsigned int   volatile LATE             absolute 0xE54;
    const register unsigned short int LATE12 = 12;
    sbit  LATE12_bit at LATE.B12;
    const register unsigned short int LATE13 = 13;
    sbit  LATE13_bit at LATE.B13;
    const register unsigned short int LATE14 = 14;
    sbit  LATE14_bit at LATE.B14;
    const register unsigned short int LATE15 = 15;
    sbit  LATE15_bit at LATE.B15;

sfr unsigned int   volatile ODCE             absolute 0xE56;
    const register unsigned short int ODCE12 = 12;
    sbit  ODCE12_bit at ODCE.B12;
    const register unsigned short int ODCE13 = 13;
    sbit  ODCE13_bit at ODCE.B13;
    const register unsigned short int ODCE14 = 14;
    sbit  ODCE14_bit at ODCE.B14;
    const register unsigned short int ODCE15 = 15;
    sbit  ODCE15_bit at ODCE.B15;

sfr unsigned int   volatile CNENE            absolute 0xE58;
    const register unsigned short int CNIEE12 = 12;
    sbit  CNIEE12_bit at CNENE.B12;
    const register unsigned short int CNIEE13 = 13;
    sbit  CNIEE13_bit at CNENE.B13;
    const register unsigned short int CNIEE14 = 14;
    sbit  CNIEE14_bit at CNENE.B14;
    const register unsigned short int CNIEE15 = 15;
    sbit  CNIEE15_bit at CNENE.B15;

sfr unsigned int   volatile CNPUE            absolute 0xE5A;
    const register unsigned short int CNPUE12 = 12;
    sbit  CNPUE12_bit at CNPUE.B12;
    const register unsigned short int CNPUE13 = 13;
    sbit  CNPUE13_bit at CNPUE.B13;
    const register unsigned short int CNPUE14 = 14;
    sbit  CNPUE14_bit at CNPUE.B14;
    const register unsigned short int CNPUE15 = 15;
    sbit  CNPUE15_bit at CNPUE.B15;

sfr unsigned int   volatile CNPDE            absolute 0xE5C;
    const register unsigned short int CNPDE12 = 12;
    sbit  CNPDE12_bit at CNPDE.B12;
    const register unsigned short int CNPDE13 = 13;
    sbit  CNPDE13_bit at CNPDE.B13;
    const register unsigned short int CNPDE14 = 14;
    sbit  CNPDE14_bit at CNPDE.B14;
    const register unsigned short int CNPDE15 = 15;
    sbit  CNPDE15_bit at CNPDE.B15;

sfr unsigned int   volatile ANSELE           absolute 0xE5E;
    const register unsigned short int ANSE12 = 12;
    sbit  ANSE12_bit at ANSELE.B12;
    const register unsigned short int ANSE13 = 13;
    sbit  ANSE13_bit at ANSELE.B13;
    const register unsigned short int ANSE14 = 14;
    sbit  ANSE14_bit at ANSELE.B14;
    const register unsigned short int ANSE15 = 15;
    sbit  ANSE15_bit at ANSELE.B15;

sfr unsigned int   volatile TRISF            absolute 0xE64;
    const register unsigned short int TRISF0 = 0;
    sbit  TRISF0_bit at TRISF.B0;
    const register unsigned short int TRISF1 = 1;
    sbit  TRISF1_bit at TRISF.B1;

sfr unsigned int   volatile PORTF            absolute 0xE66;
    const register unsigned short int RF0 = 0;
    sbit  RF0_bit at PORTF.B0;
    const register unsigned short int RF1 = 1;
    sbit  RF1_bit at PORTF.B1;

sfr unsigned int   volatile LATF             absolute 0xE68;
    const register unsigned short int LATF0 = 0;
    sbit  LATF0_bit at LATF.B0;
    const register unsigned short int LATF1 = 1;
    sbit  LATF1_bit at LATF.B1;

sfr unsigned int   volatile ODCF             absolute 0xE6A;
    const register unsigned short int ODCF0 = 0;
    sbit  ODCF0_bit at ODCF.B0;
    const register unsigned short int ODCF1 = 1;
    sbit  ODCF1_bit at ODCF.B1;

sfr unsigned int   volatile CNENF            absolute 0xE6C;
    const register unsigned short int CNIEF0 = 0;
    sbit  CNIEF0_bit at CNENF.B0;
    const register unsigned short int CNIEF1 = 1;
    sbit  CNIEF1_bit at CNENF.B1;

sfr unsigned int   volatile CNPUF            absolute 0xE6E;
    const register unsigned short int CNPUF0 = 0;
    sbit  CNPUF0_bit at CNPUF.B0;
    const register unsigned short int CNPUF1 = 1;
    sbit  CNPUF1_bit at CNPUF.B1;

sfr unsigned int   volatile CNPDF            absolute 0xE70;
    const register unsigned short int CNPDF0 = 0;
    sbit  CNPDF0_bit at CNPDF.B0;
    const register unsigned short int CNPDF1 = 1;
    sbit  CNPDF1_bit at CNPDF.B1;

sfr unsigned int   volatile TRISG            absolute 0xE78;
    const register unsigned short int TRISG6 = 6;
    sbit  TRISG6_bit at TRISG.B6;
    const register unsigned short int TRISG7 = 7;
    sbit  TRISG7_bit at TRISG.B7;
    const register unsigned short int TRISG8 = 8;
    sbit  TRISG8_bit at TRISG.B8;
    const register unsigned short int TRISG9 = 9;
    sbit  TRISG9_bit at TRISG.B9;

sfr unsigned int   volatile PORTG            absolute 0xE7A;
    const register unsigned short int RG6 = 6;
    sbit  RG6_bit at PORTG.B6;
    const register unsigned short int RG7 = 7;
    sbit  RG7_bit at PORTG.B7;
    const register unsigned short int RG8 = 8;
    sbit  RG8_bit at PORTG.B8;
    const register unsigned short int RG9 = 9;
    sbit  RG9_bit at PORTG.B9;

sfr unsigned int   volatile LATG             absolute 0xE7C;
    const register unsigned short int LATG6 = 6;
    sbit  LATG6_bit at LATG.B6;
    const register unsigned short int LATG7 = 7;
    sbit  LATG7_bit at LATG.B7;
    const register unsigned short int LATG8 = 8;
    sbit  LATG8_bit at LATG.B8;
    const register unsigned short int LATG9 = 9;
    sbit  LATG9_bit at LATG.B9;

sfr unsigned int   volatile ODCG             absolute 0xE7E;
    const register unsigned short int ODCG6 = 6;
    sbit  ODCG6_bit at ODCG.B6;
    const register unsigned short int ODCG7 = 7;
    sbit  ODCG7_bit at ODCG.B7;
    const register unsigned short int ODCG8 = 8;
    sbit  ODCG8_bit at ODCG.B8;
    const register unsigned short int ODCG9 = 9;
    sbit  ODCG9_bit at ODCG.B9;

sfr unsigned int   volatile CNENG            absolute 0xE80;
    const register unsigned short int CNIEG6 = 6;
    sbit  CNIEG6_bit at CNENG.B6;
    const register unsigned short int CNIEG7 = 7;
    sbit  CNIEG7_bit at CNENG.B7;
    const register unsigned short int CNIEG8 = 8;
    sbit  CNIEG8_bit at CNENG.B8;
    const register unsigned short int CNIEG9 = 9;
    sbit  CNIEG9_bit at CNENG.B9;

sfr unsigned int   volatile CNPUG            absolute 0xE82;
    const register unsigned short int CNPUG6 = 6;
    sbit  CNPUG6_bit at CNPUG.B6;
    const register unsigned short int CNPUG7 = 7;
    sbit  CNPUG7_bit at CNPUG.B7;
    const register unsigned short int CNPUG8 = 8;
    sbit  CNPUG8_bit at CNPUG.B8;
    const register unsigned short int CNPUG9 = 9;
    sbit  CNPUG9_bit at CNPUG.B9;

sfr unsigned int   volatile CNPDG            absolute 0xE84;
    const register unsigned short int CNPDG6 = 6;
    sbit  CNPDG6_bit at CNPDG.B6;
    const register unsigned short int CNPDG7 = 7;
    sbit  CNPDG7_bit at CNPDG.B7;
    const register unsigned short int CNPDG8 = 8;
    sbit  CNPDG8_bit at CNPDG.B8;
    const register unsigned short int CNPDG9 = 9;
    sbit  CNPDG9_bit at CNPDG.B9;

sfr unsigned int   volatile ANSELG           absolute 0xE86;
    const register unsigned short int ANSG6 = 6;
    sbit  ANSG6_bit at ANSELG.B6;
    const register unsigned short int ANSG7 = 7;
    sbit  ANSG7_bit at ANSELG.B7;
    const register unsigned short int ANSG8 = 8;
    sbit  ANSG8_bit at ANSELG.B8;
    const register unsigned short int ANSG9 = 9;
    sbit  ANSG9_bit at ANSELG.B9;

sfr unsigned int   volatile FEXL             absolute 0xF80;
sfr unsigned int   volatile FEXU             absolute 0xF82;
sfr unsigned int   volatile FEX2L            absolute 0xF84;
sfr unsigned int   volatile FEX2U            absolute 0xF86;
sfr unsigned int   volatile VISI             absolute 0xF88;
sfr unsigned int   volatile DPCL             absolute 0xF8A;
sfr unsigned int   volatile DPCH             absolute 0xF8C;
sfr unsigned int   volatile APPO             absolute 0xFA0;
sfr unsigned int   volatile APPI             absolute 0xFA2;
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
      unsigned FRMDLY:1;
      unsigned :11;
      unsigned FRMPOL:1;
      unsigned SPIFSD:1;
      unsigned FRMEN:1;
    };
  };
} typeSPI1CON2BITS;
sfr volatile typeSPI1CON2BITS SPI1CON2bits absolute 0x244;

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

typedef struct tagSPI2CON2BITS {
  union {
    struct {
      unsigned SPIBEN:1;
      unsigned FRMDLY:1;
      unsigned :11;
      unsigned FRMPOL:1;
      unsigned SPIFSD:1;
      unsigned FRMEN:1;
    };
  };
} typeSPI2CON2BITS;
sfr volatile typeSPI2CON2BITS SPI2CON2bits absolute 0x264;

typedef struct tagAD1CON1BITS {
  union {
    struct {
      unsigned DONE:1;
      unsigned SAMP:1;
      unsigned ASAM:1;
      unsigned SIMSAM:1;
      unsigned SSRCG:1;
      unsigned SSRC:3;
      unsigned FORM:2;
      unsigned AD12B:1;
      unsigned :1;
      unsigned ADDMABM:1;
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

typedef struct tagAD1CON2BITS {
  union {
    struct {
      unsigned ALTS:1;
      unsigned BUFM:1;
      unsigned SMPI:5;
      unsigned BUFS:1;
      unsigned CHPS:2;
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
      unsigned SMPI4:1;
      unsigned :1;
      unsigned CHPS0:1;
      unsigned CHPS1:1;
      unsigned :3;
      unsigned VCFG0:1;
      unsigned VCFG1:1;
      unsigned VCFG2:1;
    };
  };
} typeAD1CON2BITS;
sfr volatile typeAD1CON2BITS AD1CON2bits absolute 0x322;

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

typedef struct tagAD1CHS123BITS {
  union {
    struct {
      unsigned CH123SA0:1;
      unsigned CH123NA:2;
      unsigned CH123SA1:1;
      unsigned CH123SA2:1;
      unsigned :3;
      unsigned CH123SB0:1;
      unsigned CH123NB:2;
      unsigned CH123SB1:1;
      unsigned CH123SB2:1;
    };
    struct {
      unsigned :1;
      unsigned CH123NA0:1;
      unsigned CH123NA1:1;
      unsigned :6;
      unsigned CH123NB0:1;
      unsigned CH123NB1:1;
    };
  };
} typeAD1CHS123BITS;
sfr volatile typeAD1CHS123BITS AD1CHS123bits absolute 0x326;

typedef struct tagAD1CHS0BITS {
  union {
    struct {
      unsigned CH0SA:6;
      unsigned :1;
      unsigned CH0NA:1;
      unsigned CH0SB:6;
      unsigned :1;
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

typedef struct tagAD1CSSHBITS {
  union {
    struct {
      unsigned CSS16:1;
      unsigned CSS17:1;
      unsigned CSS18:1;
      unsigned CSS19:1;
      unsigned :4;
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
sfr volatile typeAD1CSSHBITS AD1CSSHbits absolute 0x32E;

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
sfr volatile typeAD1CSSLBITS AD1CSSLbits absolute 0x330;

typedef struct tagAD1CON4BITS {
  union {
    struct {
      unsigned DMABL:3;
      unsigned :5;
      unsigned ADDMAEN:1;
    };
    struct {
      unsigned DMABL0:1;
      unsigned DMABL1:1;
      unsigned DMABL2:1;
    };
  };
} typeAD1CON4BITS;
sfr volatile typeAD1CON4BITS AD1CON4bits absolute 0x332;

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
sfr volatile typeCTMUCON1BITS CTMUCON1bits absolute 0x33A;

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
sfr volatile typeCTMUCON2BITS CTMUCON2bits absolute 0x33C;

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

typedef struct tagSENT1CON1BITS {
  union {
    struct {
      unsigned NIBCNT:3;
      unsigned :1;
      unsigned PS:1;
      unsigned :1;
      unsigned SPCEN:1;
      unsigned PPP:1;
      unsigned CRCEN:1;
      unsigned TXPOL:1;
      unsigned TXM:1;
      unsigned RCVEN:1;
      unsigned :1;
      unsigned SNTSIDL:1;
      unsigned :1;
      unsigned SNTEN:1;
    };
  };
} typeSENT1CON1BITS;
sfr volatile typeSENT1CON1BITS SENT1CON1bits absolute 0x500;

typedef struct tagSENT1STATBITS {
  union {
    struct {
      unsigned SYNC:1;
      unsigned RXIDLE:1;
      unsigned FRMERR:1;
      unsigned CRCERR:1;
      unsigned NIB:3;
      unsigned PAUSE:1;
    };
    struct {
      unsigned TXEN:1;
    };
    struct {
      unsigned :4;
      unsigned NIB0:1;
      unsigned NIB1:1;
      unsigned NIB2:1;
    };
  };
} typeSENT1STATBITS;
sfr volatile typeSENT1STATBITS SENT1STATbits absolute 0x50C;

typedef struct tagSENT1DATLBITS {
  union {
    struct {
      unsigned CRC:4;
      unsigned DATA6:4;
      unsigned DATA5:4;
      unsigned DATA4:4;
    };
    struct {
      unsigned CRC0:1;
      unsigned CRC1:1;
      unsigned CRC2:1;
      unsigned CRC3:1;
      unsigned DATA60:1;
      unsigned DATA61:1;
      unsigned DATA62:1;
      unsigned DATA63:1;
      unsigned DATA50:1;
      unsigned DATA51:1;
      unsigned DATA52:1;
      unsigned DATA53:1;
      unsigned DATA40:1;
      unsigned DATA41:1;
      unsigned DATA42:1;
      unsigned DATA43:1;
    };
  };
} typeSENT1DATLBITS;
sfr volatile typeSENT1DATLBITS SENT1DATLbits absolute 0x514;

typedef struct tagSENT1DATHBITS {
  union {
    struct {
      unsigned DATA3:4;
      unsigned DATA2:4;
      unsigned DATA1:4;
      unsigned STAT:4;
    };
    struct {
      unsigned DATA30:1;
      unsigned DATA31:1;
      unsigned DATA32:1;
      unsigned DATA33:1;
      unsigned DATA20:1;
      unsigned DATA21:1;
      unsigned DATA22:1;
      unsigned DATA23:1;
      unsigned DATA10:1;
      unsigned DATA11:1;
      unsigned DATA12:1;
      unsigned DATA13:1;
      unsigned STAT0:1;
      unsigned STAT1:1;
      unsigned STAT2:1;
      unsigned STAT3:1;
    };
  };
} typeSENT1DATHBITS;
sfr volatile typeSENT1DATHBITS SENT1DATHbits absolute 0x516;

typedef struct tagSENT2CON1BITS {
  union {
    struct {
      unsigned NIBCNT:3;
      unsigned :1;
      unsigned PS:1;
      unsigned :1;
      unsigned SPCEN:1;
      unsigned PPP:1;
      unsigned CRCEN:1;
      unsigned TXPOL:1;
      unsigned TXM:1;
      unsigned RCVEN:1;
      unsigned :1;
      unsigned SNTSIDL:1;
      unsigned :1;
      unsigned SNTEN:1;
    };
  };
} typeSENT2CON1BITS;
sfr volatile typeSENT2CON1BITS SENT2CON1bits absolute 0x520;

typedef struct tagSENT2STATBITS {
  union {
    struct {
      unsigned SYNC:1;
      unsigned RXIDLE:1;
      unsigned FRMERR:1;
      unsigned CRCERR:1;
      unsigned NIB:3;
      unsigned PAUSE:1;
    };
    struct {
      unsigned TXEN:1;
    };
    struct {
      unsigned :4;
      unsigned NIB0:1;
      unsigned NIB1:1;
      unsigned NIB2:1;
    };
  };
} typeSENT2STATBITS;
sfr volatile typeSENT2STATBITS SENT2STATbits absolute 0x52C;

typedef struct tagSENT2DATLBITS {
  union {
    struct {
      unsigned CRC:4;
      unsigned DATA6:4;
      unsigned DATA5:4;
      unsigned DATA4:4;
    };
    struct {
      unsigned CRC0:1;
      unsigned CRC1:1;
      unsigned CRC2:1;
      unsigned CRC3:1;
      unsigned DATA60:1;
      unsigned DATA61:1;
      unsigned DATA62:1;
      unsigned DATA63:1;
      unsigned DATA50:1;
      unsigned DATA51:1;
      unsigned DATA52:1;
      unsigned DATA53:1;
      unsigned DATA40:1;
      unsigned DATA41:1;
      unsigned DATA42:1;
      unsigned DATA43:1;
    };
  };
} typeSENT2DATLBITS;
sfr volatile typeSENT2DATLBITS SENT2DATLbits absolute 0x534;

typedef struct tagSENT2DATHBITS {
  union {
    struct {
      unsigned DATA3:4;
      unsigned DATA2:4;
      unsigned DATA1:4;
      unsigned STAT:4;
    };
    struct {
      unsigned DATA30:1;
      unsigned DATA31:1;
      unsigned DATA32:1;
      unsigned DATA33:1;
      unsigned DATA20:1;
      unsigned DATA21:1;
      unsigned DATA22:1;
      unsigned DATA23:1;
      unsigned DATA10:1;
      unsigned DATA11:1;
      unsigned DATA12:1;
      unsigned DATA13:1;
      unsigned STAT0:1;
      unsigned STAT1:1;
      unsigned STAT2:1;
      unsigned STAT3:1;
    };
  };
} typeSENT2DATHBITS;
sfr volatile typeSENT2DATHBITS SENT2DATHbits absolute 0x536;

typedef struct tagRPOR0BITS {
  union {
    struct {
      unsigned RP20R:6;
      unsigned :2;
      unsigned RP35R:6;
    };
    struct {
      unsigned RP20R0:1;
      unsigned RP20R1:1;
      unsigned RP20R2:1;
      unsigned RP20R3:1;
      unsigned RP20R4:1;
      unsigned RP20R5:1;
      unsigned :2;
      unsigned RP35R0:1;
      unsigned RP35R1:1;
      unsigned RP35R2:1;
      unsigned RP35R3:1;
      unsigned RP35R4:1;
      unsigned RP35R5:1;
    };
  };
} typeRPOR0BITS;
sfr volatile typeRPOR0BITS RPOR0bits absolute 0x670;

typedef struct tagRPOR1BITS {
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
} typeRPOR1BITS;
sfr volatile typeRPOR1BITS RPOR1bits absolute 0x672;

typedef struct tagRPOR2BITS {
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
} typeRPOR2BITS;
sfr volatile typeRPOR2BITS RPOR2bits absolute 0x674;

typedef struct tagRPOR3BITS {
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
} typeRPOR3BITS;
sfr volatile typeRPOR3BITS RPOR3bits absolute 0x676;

typedef struct tagRPOR4BITS {
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
} typeRPOR4BITS;
sfr volatile typeRPOR4BITS RPOR4bits absolute 0x678;

typedef struct tagRPOR5BITS {
  union {
    struct {
      unsigned RP48R:6;
      unsigned :2;
      unsigned RP49R:6;
    };
    struct {
      unsigned RP48R0:1;
      unsigned RP48R1:1;
      unsigned RP48R2:1;
      unsigned RP48R3:1;
      unsigned RP48R4:1;
      unsigned RP48R5:1;
      unsigned :2;
      unsigned RP49R0:1;
      unsigned RP49R1:1;
      unsigned RP49R2:1;
      unsigned RP49R3:1;
      unsigned RP49R4:1;
      unsigned RP49R5:1;
    };
  };
} typeRPOR5BITS;
sfr volatile typeRPOR5BITS RPOR5bits absolute 0x67A;

typedef struct tagRPOR6BITS {
  union {
    struct {
      unsigned RP54R:6;
      unsigned :2;
      unsigned RP55R:6;
    };
    struct {
      unsigned RP54R0:1;
      unsigned RP54R1:1;
      unsigned RP54R2:1;
      unsigned RP54R3:1;
      unsigned RP54R4:1;
      unsigned RP54R5:1;
      unsigned :2;
      unsigned RP55R0:1;
      unsigned RP55R1:1;
      unsigned RP55R2:1;
      unsigned RP55R3:1;
      unsigned RP55R4:1;
      unsigned RP55R5:1;
    };
  };
} typeRPOR6BITS;
sfr volatile typeRPOR6BITS RPOR6bits absolute 0x67C;

typedef struct tagRPOR7BITS {
  union {
    struct {
      unsigned RP56R:6;
      unsigned :2;
      unsigned RP57R:6;
    };
    struct {
      unsigned RP56R0:1;
      unsigned RP56R1:1;
      unsigned RP56R2:1;
      unsigned RP56R3:1;
      unsigned RP56R4:1;
      unsigned RP56R5:1;
      unsigned :2;
      unsigned RP57R0:1;
      unsigned RP57R1:1;
      unsigned RP57R2:1;
      unsigned RP57R3:1;
      unsigned RP57R4:1;
      unsigned RP57R5:1;
    };
  };
} typeRPOR7BITS;
sfr volatile typeRPOR7BITS RPOR7bits absolute 0x67E;

typedef struct tagRPOR8BITS {
  union {
    struct {
      unsigned RP69R:6;
      unsigned :2;
      unsigned RP70R:6;
    };
    struct {
      unsigned RP69R0:1;
      unsigned RP69R1:1;
      unsigned RP69R2:1;
      unsigned RP69R3:1;
      unsigned RP69R4:1;
      unsigned RP69R5:1;
      unsigned :2;
      unsigned RP70R0:1;
      unsigned RP70R1:1;
      unsigned RP70R2:1;
      unsigned RP70R3:1;
      unsigned RP70R4:1;
      unsigned RP70R5:1;
    };
  };
} typeRPOR8BITS;
sfr volatile typeRPOR8BITS RPOR8bits absolute 0x680;

typedef struct tagRPOR9BITS {
  union {
    struct {
      unsigned RP97R:6;
      unsigned :2;
      unsigned RP118R:6;
    };
    struct {
      unsigned RP97R0:1;
      unsigned RP97R1:1;
      unsigned RP97R2:1;
      unsigned RP97R3:1;
      unsigned RP97R4:1;
      unsigned RP97R5:1;
      unsigned :2;
      unsigned RP118R0:1;
      unsigned RP118R1:1;
      unsigned RP118R2:1;
      unsigned RP118R3:1;
      unsigned RP118R4:1;
      unsigned RP118R5:1;
    };
  };
} typeRPOR9BITS;
sfr volatile typeRPOR9BITS RPOR9bits absolute 0x682;

typedef struct tagRPOR10BITS {
  union {
    struct {
      unsigned RP120R:6;
      unsigned :2;
      unsigned RP176R:6;
    };
    struct {
      unsigned RP120R0:1;
      unsigned RP120R1:1;
      unsigned RP120R2:1;
      unsigned RP120R3:1;
      unsigned RP120R4:1;
      unsigned RP120R5:1;
      unsigned :2;
      unsigned RP176R0:1;
      unsigned RP176R1:1;
      unsigned RP176R2:1;
      unsigned RP176R3:1;
      unsigned RP176R4:1;
      unsigned RP176R5:1;
    };
  };
} typeRPOR10BITS;
sfr volatile typeRPOR10BITS RPOR10bits absolute 0x684;

typedef struct tagRPOR11BITS {
  union {
    struct {
      unsigned RP177R:6;
      unsigned :2;
      unsigned RP178R:6;
    };
    struct {
      unsigned RP177R0:1;
      unsigned RP177R1:1;
      unsigned RP177R2:1;
      unsigned RP177R3:1;
      unsigned RP177R4:1;
      unsigned RP177R5:1;
      unsigned :2;
      unsigned RP178R0:1;
      unsigned RP178R1:1;
      unsigned RP178R2:1;
      unsigned RP178R3:1;
      unsigned RP178R4:1;
      unsigned RP178R5:1;
    };
  };
} typeRPOR11BITS;
sfr volatile typeRPOR11BITS RPOR11bits absolute 0x686;

typedef struct tagRPOR12BITS {
  union {
    struct {
      unsigned RP179R:6;
      unsigned :2;
      unsigned RP180R:6;
    };
    struct {
      unsigned RP179R0:1;
      unsigned RP179R1:1;
      unsigned RP179R2:1;
      unsigned RP179R3:1;
      unsigned RP179R4:1;
      unsigned RP179R5:1;
      unsigned :2;
      unsigned RP180R0:1;
      unsigned RP180R1:1;
      unsigned RP180R2:1;
      unsigned RP180R3:1;
      unsigned RP180R4:1;
      unsigned RP180R5:1;
    };
  };
} typeRPOR12BITS;
sfr volatile typeRPOR12BITS RPOR12bits absolute 0x688;

typedef struct tagRPOR13BITS {
  union {
    struct {
      unsigned RP181R:6;
    };
    struct {
      unsigned RP181R0:1;
      unsigned RP181R1:1;
      unsigned RP181R2:1;
      unsigned RP181R3:1;
      unsigned RP181R4:1;
      unsigned RP181R5:1;
    };
  };
} typeRPOR13BITS;
sfr volatile typeRPOR13BITS RPOR13bits absolute 0x68A;

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

typedef struct tagRPINR3BITS {
  union {
    struct {
      unsigned T2CKR:8;
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
    };
  };
} typeRPINR3BITS;
sfr volatile typeRPINR3BITS RPINR3bits absolute 0x6A6;

typedef struct tagRPINR7BITS {
  union {
    struct {
      unsigned IC1R:8;
      unsigned IC2R:8;
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
      unsigned IC2R0:1;
      unsigned IC2R1:1;
      unsigned IC2R2:1;
      unsigned IC2R3:1;
      unsigned IC2R4:1;
      unsigned IC2R5:1;
      unsigned IC2R6:1;
      unsigned IC2R7:1;
    };
  };
} typeRPINR7BITS;
sfr volatile typeRPINR7BITS RPINR7bits absolute 0x6AE;

typedef struct tagRPINR8BITS {
  union {
    struct {
      unsigned IC3R:8;
      unsigned IC4R:8;
    };
    struct {
      unsigned IC3R0:1;
      unsigned IC3R1:1;
      unsigned IC3R2:1;
      unsigned IC3R3:1;
      unsigned IC3R4:1;
      unsigned IC3R5:1;
      unsigned IC3R6:1;
      unsigned IC3R7:1;
      unsigned IC4R0:1;
      unsigned IC4R1:1;
      unsigned IC4R2:1;
      unsigned IC4R3:1;
      unsigned IC4R4:1;
      unsigned IC4R5:1;
      unsigned IC4R6:1;
      unsigned IC4R7:1;
    };
  };
} typeRPINR8BITS;
sfr volatile typeRPINR8BITS RPINR8bits absolute 0x6B0;

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

typedef struct tagRPINR18BITS {
  union {
    struct {
      unsigned U1RXR:8;
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
    };
  };
} typeRPINR18BITS;
sfr volatile typeRPINR18BITS RPINR18bits absolute 0x6C4;

typedef struct tagRPINR19BITS {
  union {
    struct {
      unsigned U2RXR:8;
    };
    struct {
      unsigned U2RXR0:1;
      unsigned U2RXR1:1;
      unsigned U2RXR2:1;
      unsigned U2RXR3:1;
      unsigned U2RXR4:1;
      unsigned U2RXR5:1;
      unsigned U2RXR6:1;
      unsigned U2RXR7:1;
    };
  };
} typeRPINR19BITS;
sfr volatile typeRPINR19BITS RPINR19bits absolute 0x6C6;

typedef struct tagRPINR22BITS {
  union {
    struct {
      unsigned SDI2R:8;
      unsigned SCK2R:8;
    };
    struct {
      unsigned SDI2R0:1;
      unsigned SDI2R1:1;
      unsigned SDI2R2:1;
      unsigned SDI2R3:1;
      unsigned SDI2R4:1;
      unsigned SDI2R5:1;
      unsigned SDI2R6:1;
      unsigned SDI2R7:1;
      unsigned SCK2R0:1;
      unsigned SCK2R1:1;
      unsigned SCK2R2:1;
      unsigned SCK2R3:1;
      unsigned SCK2R4:1;
      unsigned SCK2R5:1;
      unsigned SCK2R6:1;
      unsigned SCK2R7:1;
    };
  };
} typeRPINR22BITS;
sfr volatile typeRPINR22BITS RPINR22bits absolute 0x6CC;

typedef struct tagRPINR23BITS {
  union {
    struct {
      unsigned SS2R:8;
    };
    struct {
      unsigned SS2R0:1;
      unsigned SS2R1:1;
      unsigned SS2R2:1;
      unsigned SS2R3:1;
      unsigned SS2R4:1;
      unsigned SS2R5:1;
      unsigned SS2R6:1;
      unsigned SS2R7:1;
    };
  };
} typeRPINR23BITS;
sfr volatile typeRPINR23BITS RPINR23bits absolute 0x6CE;

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
      unsigned :8;
      unsigned DTCMP1R:8;
    };
    struct {
      unsigned :8;
      unsigned DTCMP1R0:1;
      unsigned DTCMP1R1:1;
      unsigned DTCMP1R2:1;
      unsigned DTCMP1R3:1;
      unsigned DTCMP1R4:1;
      unsigned DTCMP1R5:1;
      unsigned DTCMP1R6:1;
      unsigned DTCMP1R7:1;
    };
  };
} typeRPINR38BITS;
sfr volatile typeRPINR38BITS RPINR38bits absolute 0x6EC;

typedef struct tagRPINR39BITS {
  union {
    struct {
      unsigned DTCMP2R:8;
      unsigned DTCMP3R:8;
    };
    struct {
      unsigned DTCMP2R0:1;
      unsigned DTCMP2R1:1;
      unsigned DTCMP2R2:1;
      unsigned DTCMP2R3:1;
      unsigned DTCMP2R4:1;
      unsigned DTCMP2R5:1;
      unsigned DTCMP2R6:1;
      unsigned DTCMP2R7:1;
      unsigned DTCMP3R0:1;
      unsigned DTCMP3R1:1;
      unsigned DTCMP3R2:1;
      unsigned DTCMP3R3:1;
      unsigned DTCMP3R4:1;
      unsigned DTCMP3R5:1;
      unsigned DTCMP3R6:1;
      unsigned DTCMP3R7:1;
    };
  };
} typeRPINR39BITS;
sfr volatile typeRPINR39BITS RPINR39bits absolute 0x6EE;

typedef struct tagRPINR44BITS {
  union {
    struct {
      unsigned :8;
      unsigned SENT1R:8;
    };
    struct {
      unsigned :8;
      unsigned SENT1R0:1;
      unsigned SENT1R1:1;
      unsigned SENT1R2:1;
      unsigned SENT1R3:1;
      unsigned SENT1R4:1;
      unsigned SENT1R5:1;
      unsigned SENT1R6:1;
      unsigned SENT1R7:1;
    };
  };
} typeRPINR44BITS;
sfr volatile typeRPINR44BITS RPINR44bits absolute 0x6F8;

typedef struct tagRPINR45BITS {
  union {
    struct {
      unsigned SENT2R:8;
    };
    struct {
      unsigned SENT2R0:1;
      unsigned SENT2R1:1;
      unsigned SENT2R2:1;
      unsigned SENT2R3:1;
      unsigned SENT2R4:1;
      unsigned SENT2R5:1;
      unsigned SENT2R6:1;
      unsigned SENT2R7:1;
    };
  };
} typeRPINR45BITS;
sfr volatile typeRPINR45BITS RPINR45bits absolute 0x6FA;

typedef struct tagDMTCONBITS {
  union {
    struct {
      unsigned :15;
      unsigned ON:1;
    };
  };
} typeDMTCONBITS;
sfr volatile typeDMTCONBITS DMTCONbits absolute 0x700;

typedef struct tagDMTPRECLRBITS {
  union {
    struct {
      unsigned :8;
      unsigned STEP1:8;
    };
  };
} typeDMTPRECLRBITS;
sfr volatile typeDMTPRECLRBITS DMTPRECLRbits absolute 0x704;

typedef struct tagDMTCLRBITS {
  union {
    struct {
      unsigned STEP2:8;
    };
  };
} typeDMTCLRBITS;
sfr volatile typeDMTCLRBITS DMTCLRbits absolute 0x708;

typedef struct tagDMTSTATBITS {
  union {
    struct {
      unsigned WINOPN:1;
      unsigned :4;
      unsigned DMTEVENT:1;
      unsigned BAD2:1;
      unsigned BAD1:1;
    };
  };
} typeDMTSTATBITS;
sfr volatile typeDMTSTATBITS DMTSTATbits absolute 0x70C;

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

typedef struct tagNVMADRUBITS {
  union {
    struct {
      unsigned NVMADRU:8;
    };
  };
} typeNVMADRUBITS;
sfr volatile typeNVMADRUBITS NVMADRUbits absolute 0x72C;

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
      unsigned :2;
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

typedef struct tagREFOCONBITS {
  union {
    struct {
      unsigned :8;
      unsigned RODIV:4;
      unsigned ROSEL:1;
      unsigned ROSSLP:1;
      unsigned :1;
      unsigned ROON:1;
    };
    struct {
      unsigned :8;
      unsigned RODIV0:1;
      unsigned RODIV1:1;
      unsigned RODIV2:1;
      unsigned RODIV3:1;
    };
  };
} typeREFOCONBITS;
sfr volatile typeREFOCONBITS REFOCONbits absolute 0x74E;

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
      unsigned :1;
      unsigned PWMMD:1;
      unsigned :1;
      unsigned T1MD:1;
      unsigned T2MD:1;
      unsigned T3MD:1;
      unsigned T4MD:1;
      unsigned T5MD:1;
    };
  };
} typePMD1BITS;
sfr volatile typePMD1BITS PMD1bits absolute 0x760;

typedef struct tagPMD2BITS {
  union {
    struct {
      unsigned OC1MD:1;
      unsigned OC2MD:1;
      unsigned OC3MD:1;
      unsigned OC4MD:1;
      unsigned :4;
      unsigned IC1MD:1;
      unsigned IC2MD:1;
      unsigned IC3MD:1;
      unsigned IC4MD:1;
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

typedef struct tagPMD4BITS {
  union {
    struct {
      unsigned :2;
      unsigned CTMUMD:1;
      unsigned REFOMD:1;
    };
  };
} typePMD4BITS;
sfr volatile typePMD4BITS PMD4bits absolute 0x766;

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
      unsigned :4;
      unsigned DMA0MD:1;
    };
    struct {
      unsigned :4;
      unsigned DMA1MD:1;
    };
    struct {
      unsigned :4;
      unsigned DMA2MD:1;
    };
    struct {
      unsigned :4;
      unsigned DMA3MD:1;
    };
  };
} typePMD7BITS;
sfr volatile typePMD7BITS PMD7bits absolute 0x76C;

typedef struct tagPMD8BITS {
  union {
    struct {
      unsigned :8;
      unsigned DMTMD:1;
      unsigned :2;
      unsigned SENT1MD:1;
      unsigned SENT2MD:1;
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
      unsigned DMA0IF:1;
      unsigned IC2IF:1;
      unsigned OC2IF:1;
      unsigned T2IF:1;
      unsigned T3IF:1;
      unsigned SPI1EIF:1;
      unsigned SPI1IF:1;
      unsigned U1RXIF:1;
      unsigned U1TXIF:1;
      unsigned AD1IF:1;
      unsigned DMA1IF:1;
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
    struct {
      unsigned :2;
      unsigned CMPIF:1;
    };
  };
} typeIFS1BITS;
sfr volatile typeIFS1BITS IFS1bits absolute 0x802;

typedef struct tagIFS2BITS {
  union {
    struct {
      unsigned SPI2EIF:1;
      unsigned SPI2IF:1;
      unsigned :2;
      unsigned DMA3IF:1;
      unsigned IC3IF:1;
      unsigned IC4IF:1;
    };
  };
} typeIFS2BITS;
sfr volatile typeIFS2BITS IFS2bits absolute 0x804;

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
      unsigned U2EIF:1;
      unsigned :10;
      unsigned CTMUIF:1;
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
    };
  };
} typeIFS6BITS;
sfr volatile typeIFS6BITS IFS6bits absolute 0x80C;

typedef struct tagIFS8BITS {
  union {
    struct {
      unsigned :14;
      unsigned ICDIF:1;
    };
  };
} typeIFS8BITS;
sfr volatile typeIFS8BITS IFS8bits absolute 0x810;

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
      unsigned :6;
      unsigned SENT1EIF:1;
      unsigned SENT1IF:1;
      unsigned SENT2EIF:1;
      unsigned SENT2IF:1;
      unsigned ECCSBEIF:1;
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
      unsigned DMA0IE:1;
      unsigned IC2IE:1;
      unsigned OC2IE:1;
      unsigned T2IE:1;
      unsigned T3IE:1;
      unsigned SPI1EIE:1;
      unsigned SPI1IE:1;
      unsigned U1RXIE:1;
      unsigned U1TXIE:1;
      unsigned AD1IE:1;
      unsigned DMA1IE:1;
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
    struct {
      unsigned :2;
      unsigned CMPIE:1;
    };
  };
} typeIEC1BITS;
sfr volatile typeIEC1BITS IEC1bits absolute 0x822;

typedef struct tagIEC2BITS {
  union {
    struct {
      unsigned SPI2EIE:1;
      unsigned SPI2IE:1;
      unsigned :2;
      unsigned DMA3IE:1;
      unsigned IC3IE:1;
      unsigned IC4IE:1;
    };
  };
} typeIEC2BITS;
sfr volatile typeIEC2BITS IEC2bits absolute 0x824;

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
      unsigned U2EIE:1;
      unsigned :10;
      unsigned CTMUIE:1;
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
    };
  };
} typeIEC6BITS;
sfr volatile typeIEC6BITS IEC6bits absolute 0x82C;

typedef struct tagIEC8BITS {
  union {
    struct {
      unsigned :14;
      unsigned ICDIE:1;
    };
  };
} typeIEC8BITS;
sfr volatile typeIEC8BITS IEC8bits absolute 0x830;

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
      unsigned :6;
      unsigned SENT1EIE:1;
      unsigned SENT1IE:1;
      unsigned SENT2EIE:1;
      unsigned SENT2IE:1;
      unsigned ECCSBEIE:1;
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
sfr volatile typeIPC3BITS IPC3bits absolute 0x846;

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
      unsigned :8;
      unsigned CMPIP:3;
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
      unsigned :1;
      unsigned AD2IP0:1;
      unsigned AD2IP1:1;
      unsigned AD2IP2:1;
      unsigned :1;
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
sfr volatile typeIPC5BITS IPC5bits absolute 0x84A;

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
sfr volatile typeIPC6BITS IPC6bits absolute 0x84C;

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
sfr volatile typeIPC7BITS IPC7bits absolute 0x84E;

typedef struct tagIPC8BITS {
  union {
    struct {
      unsigned SPI2EIP:3;
      unsigned :1;
      unsigned SPI2IP:3;
    };
    struct {
      unsigned SPI2EIP0:1;
      unsigned SPI2EIP1:1;
      unsigned SPI2EIP2:1;
      unsigned :1;
      unsigned SPI2IP0:1;
      unsigned SPI2IP1:1;
      unsigned SPI2IP2:1;
    };
  };
} typeIPC8BITS;
sfr volatile typeIPC8BITS IPC8bits absolute 0x850;

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
      unsigned :1;
      unsigned IC5IP0:1;
      unsigned IC5IP1:1;
      unsigned IC5IP2:1;
    };
  };
} typeIPC9BITS;
sfr volatile typeIPC9BITS IPC9bits absolute 0x852;

typedef struct tagIPC14BITS {
  union {
    struct {
      unsigned :4;
      unsigned PSEMIP:3;
    };
    struct {
      unsigned C2IP0:1;
      unsigned C2IP1:1;
      unsigned C2IP2:1;
      unsigned :1;
      unsigned PSEMIP0:1;
      unsigned PSEMIP1:1;
      unsigned PSEMIP2:1;
      unsigned :1;
      unsigned QEI1IP0:1;
      unsigned QEI1IP1:1;
      unsigned QEI1IP2:1;
      unsigned :1;
      unsigned DCIEIP0:1;
      unsigned DCIEIP1:1;
      unsigned DCIEIP2:1;
    };
  };
} typeIPC14BITS;
sfr volatile typeIPC14BITS IPC14bits absolute 0x85C;

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
      unsigned :1;
      unsigned CRCIP0:1;
      unsigned CRCIP1:1;
      unsigned CRCIP2:1;
    };
  };
} typeIPC16BITS;
sfr volatile typeIPC16BITS IPC16bits absolute 0x860;

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
      unsigned :5;
      unsigned C2TXIP0:1;
      unsigned C2TXIP1:1;
      unsigned C2TXIP2:1;
    };
  };
} typeIPC17BITS;
sfr volatile typeIPC17BITS IPC17bits absolute 0x862;

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
sfr volatile typeIPC19BITS IPC19bits absolute 0x866;

typedef struct tagIPC23BITS {
  union {
    struct {
      unsigned :8;
      unsigned PWM1IP:3;
      unsigned :1;
      unsigned PWM2IP:3;
    };
    struct {
      unsigned OC9IP0:1;
      unsigned OC9IP1:1;
      unsigned OC9IP2:1;
      unsigned :1;
      unsigned IC9IP0:1;
      unsigned IC9IP1:1;
      unsigned IC9IP2:1;
      unsigned :1;
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
sfr volatile typeIPC24BITS IPC24bits absolute 0x870;

typedef struct tagIPC35BITS {
  union {
    struct {
      unsigned :8;
      unsigned ICDIP:3;
    };
    struct {
      unsigned OC16IP0:1;
      unsigned OC16IP1:1;
      unsigned OC16IP2:1;
      unsigned :1;
      unsigned IC16IP0:1;
      unsigned IC16IP1:1;
      unsigned IC16IP2:1;
      unsigned :1;
      unsigned ICDIP0:1;
      unsigned ICDIP1:1;
      unsigned ICDIP2:1;
    };
  };
} typeIPC35BITS;
sfr volatile typeIPC35BITS IPC35bits absolute 0x886;

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

typedef struct tagIPC45BITS {
  union {
    struct {
      unsigned :8;
      unsigned SENT1EIP:3;
      unsigned :1;
      unsigned SENT1IP:3;
    };
    struct {
      unsigned :8;
      unsigned SENT1EIP0:1;
      unsigned SENT1EIP1:1;
      unsigned SENT1EIP2:1;
      unsigned :1;
      unsigned SENT1IP0:1;
      unsigned SENT1IP1:1;
      unsigned SENT1IP2:1;
    };
  };
} typeIPC45BITS;
sfr volatile typeIPC45BITS IPC45bits absolute 0x89A;

typedef struct tagIPC46BITS {
  union {
    struct {
      unsigned SENT2EIP:3;
      unsigned :1;
      unsigned SENT2IP:3;
      unsigned :1;
      unsigned ECCSBEIP:3;
    };
    struct {
      unsigned SENT2EIP0:1;
      unsigned SENT2EIP1:1;
      unsigned SENT2EIP2:1;
      unsigned :1;
      unsigned SENT2IP0:1;
      unsigned SENT2IP1:1;
      unsigned SENT2IP2:1;
      unsigned :1;
      unsigned ECCSBEIP0:1;
      unsigned ECCSBEIP1:1;
      unsigned ECCSBEIP2:1;
    };
  };
} typeIPC46BITS;
sfr volatile typeIPC46BITS IPC46bits absolute 0x89C;

typedef struct tagINTCON1BITS {
  union {
    struct {
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
      unsigned :5;
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
      unsigned :4;
      unsigned DOOVR:1;
      unsigned DAE:1;
      unsigned :2;
      unsigned NAE:1;
      unsigned :6;
      unsigned DMT:1;
    };
  };
} typeINTCON3BITS;
sfr volatile typeINTCON3BITS INTCON3bits absolute 0x8C4;

typedef struct tagINTCON4BITS {
  union {
    struct {
      unsigned SGHT:1;
      unsigned ECCDBE:1;
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

typedef struct tagOC2CON1BITS {
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
} typeOC2CON1BITS;
sfr volatile typeOC2CON1BITS OC2CON1bits absolute 0x90A;

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
      unsigned :9;
      unsigned FLTMODE:1;
    };
  };
} typeOC2CON2BITS;
sfr volatile typeOC2CON2BITS OC2CON2bits absolute 0x90C;

typedef struct tagOC3CON1BITS {
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
} typeOC3CON1BITS;
sfr volatile typeOC3CON1BITS OC3CON1bits absolute 0x914;

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
      unsigned :9;
      unsigned FLTMODE:1;
    };
  };
} typeOC3CON2BITS;
sfr volatile typeOC3CON2BITS OC3CON2bits absolute 0x916;

typedef struct tagOC4CON1BITS {
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
} typeOC4CON1BITS;
sfr volatile typeOC4CON1BITS OC4CON1bits absolute 0x91E;

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
      unsigned :9;
      unsigned FLTMODE:1;
    };
  };
} typeOC4CON2BITS;
sfr volatile typeOC4CON2BITS OC4CON2bits absolute 0x920;

typedef struct tagCMSTATBITS {
  union {
    struct {
      unsigned C1OUT:1;
      unsigned C2OUT:1;
      unsigned C3OUT:1;
      unsigned C4OUT:1;
      unsigned C5OUT:1;
      unsigned :3;
      unsigned C1EVT:1;
      unsigned C2EVT:1;
      unsigned C3EVT:1;
      unsigned C4EVT:1;
      unsigned C5EVT:1;
      unsigned :2;
      unsigned PSIDL:1;
    };
  };
} typeCMSTATBITS;
sfr volatile typeCMSTATBITS CMSTATbits absolute 0xA80;

typedef struct tagCVR1CONBITS {
  union {
    struct {
      unsigned CVR:7;
      unsigned :3;
      unsigned VREFSEL:1;
      unsigned CVRSS:1;
      unsigned :2;
      unsigned CVROE:1;
      unsigned CVREN:1;
    };
    struct {
      unsigned CVR0:1;
      unsigned CVR1:1;
      unsigned CVR2:1;
      unsigned CVR3:1;
      unsigned CVR4:1;
      unsigned CVR5:1;
      unsigned CVR6:1;
    };
  };
} typeCVR1CONBITS;
sfr volatile typeCVR1CONBITS CVR1CONbits absolute 0xA82;

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
      unsigned OPAEN:1;
      unsigned :2;
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
sfr volatile typeCM1CONBITS CM1CONbits absolute 0xA84;

typedef struct tagCM1MSKSRCBITS {
  union {
    struct {
      unsigned SELSRCA:4;
      unsigned SELSRCB:4;
      unsigned SELSRCC:4;
    };
    struct {
      unsigned SELSRCA0:1;
      unsigned SELSRCA1:1;
      unsigned SELSRCA2:1;
      unsigned SELSRCA3:1;
      unsigned SELSRCB0:1;
      unsigned SELSRCB1:1;
      unsigned SELSRCB2:1;
      unsigned SELSRCB3:1;
      unsigned SELSRCC0:1;
      unsigned SELSRCC1:1;
      unsigned SELSRCC2:1;
      unsigned SELSRCC3:1;
    };
  };
} typeCM1MSKSRCBITS;
sfr volatile typeCM1MSKSRCBITS CM1MSKSRCbits absolute 0xA86;

typedef struct tagCM1MSKCONBITS {
  union {
    struct {
      unsigned AANEN:1;
      unsigned AAEN:1;
      unsigned ABNEN:1;
      unsigned ABEN:1;
      unsigned ACNEN:1;
      unsigned ACEN:1;
      unsigned PAGS:1;
      unsigned NAGS:1;
      unsigned OANEN:1;
      unsigned OAEN:1;
      unsigned OBNEN:1;
      unsigned OBEN:1;
      unsigned OCNEN:1;
      unsigned OCEN:1;
      unsigned :1;
      unsigned HLMS:1;
    };
  };
} typeCM1MSKCONBITS;
sfr volatile typeCM1MSKCONBITS CM1MSKCONbits absolute 0xA88;

typedef struct tagCM1FLTRBITS {
  union {
    struct {
      unsigned CFDIV:3;
      unsigned CFLTREN:1;
      unsigned CFSEL:3;
    };
    struct {
      unsigned CFDIV0:1;
      unsigned CFDIV1:1;
      unsigned CFDIV2:1;
      unsigned :1;
      unsigned CFSEL0:1;
      unsigned CFSEL1:1;
      unsigned CFSEL2:1;
    };
  };
} typeCM1FLTRBITS;
sfr volatile typeCM1FLTRBITS CM1FLTRbits absolute 0xA8A;

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
      unsigned OPAEN:1;
      unsigned :2;
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
sfr volatile typeCM2CONBITS CM2CONbits absolute 0xA8C;

typedef struct tagCM2MSKSRCBITS {
  union {
    struct {
      unsigned SELSRCA:4;
      unsigned SELSRCB:4;
      unsigned SELSRCC:4;
    };
    struct {
      unsigned SELSRCA0:1;
      unsigned SELSRCA1:1;
      unsigned SELSRCA2:1;
      unsigned SELSRCA3:1;
      unsigned SELSRCB0:1;
      unsigned SELSRCB1:1;
      unsigned SELSRCB2:1;
      unsigned SELSRCB3:1;
      unsigned SELSRCC0:1;
      unsigned SELSRCC1:1;
      unsigned SELSRCC2:1;
      unsigned SELSRCC3:1;
    };
  };
} typeCM2MSKSRCBITS;
sfr volatile typeCM2MSKSRCBITS CM2MSKSRCbits absolute 0xA8E;

typedef struct tagCM2MSKCONBITS {
  union {
    struct {
      unsigned AANEN:1;
      unsigned AAEN:1;
      unsigned ABNEN:1;
      unsigned ABEN:1;
      unsigned ACNEN:1;
      unsigned ACEN:1;
      unsigned PAGS:1;
      unsigned NAGS:1;
      unsigned OANEN:1;
      unsigned OAEN:1;
      unsigned OBNEN:1;
      unsigned OBEN:1;
      unsigned OCNEN:1;
      unsigned OCEN:1;
      unsigned :1;
      unsigned HLMS:1;
    };
  };
} typeCM2MSKCONBITS;
sfr volatile typeCM2MSKCONBITS CM2MSKCONbits absolute 0xA90;

typedef struct tagCM2FLTRBITS {
  union {
    struct {
      unsigned CFDIV:3;
      unsigned CFLTREN:1;
      unsigned CFSEL:3;
    };
    struct {
      unsigned CFDIV0:1;
      unsigned CFDIV1:1;
      unsigned CFDIV2:1;
      unsigned :1;
      unsigned CFSEL0:1;
      unsigned CFSEL1:1;
      unsigned CFSEL2:1;
    };
  };
} typeCM2FLTRBITS;
sfr volatile typeCM2FLTRBITS CM2FLTRbits absolute 0xA92;

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
      unsigned OPAEN:1;
      unsigned :2;
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
sfr volatile typeCM3CONBITS CM3CONbits absolute 0xA94;

typedef struct tagCM3MSKSRCBITS {
  union {
    struct {
      unsigned SELSRCA:4;
      unsigned SELSRCB:4;
      unsigned SELSRCC:4;
    };
    struct {
      unsigned SELSRCA0:1;
      unsigned SELSRCA1:1;
      unsigned SELSRCA2:1;
      unsigned SELSRCA3:1;
      unsigned SELSRCB0:1;
      unsigned SELSRCB1:1;
      unsigned SELSRCB2:1;
      unsigned SELSRCB3:1;
      unsigned SELSRCC0:1;
      unsigned SELSRCC1:1;
      unsigned SELSRCC2:1;
      unsigned SELSRCC3:1;
    };
  };
} typeCM3MSKSRCBITS;
sfr volatile typeCM3MSKSRCBITS CM3MSKSRCbits absolute 0xA96;

typedef struct tagCM3MSKCONBITS {
  union {
    struct {
      unsigned AANEN:1;
      unsigned AAEN:1;
      unsigned ABNEN:1;
      unsigned ABEN:1;
      unsigned ACNEN:1;
      unsigned ACEN:1;
      unsigned PAGS:1;
      unsigned NAGS:1;
      unsigned OANEN:1;
      unsigned OAEN:1;
      unsigned OBNEN:1;
      unsigned OBEN:1;
      unsigned OCNEN:1;
      unsigned OCEN:1;
      unsigned :1;
      unsigned HLMS:1;
    };
  };
} typeCM3MSKCONBITS;
sfr volatile typeCM3MSKCONBITS CM3MSKCONbits absolute 0xA98;

typedef struct tagCM3FLTRBITS {
  union {
    struct {
      unsigned CFDIV:3;
      unsigned CFLTREN:1;
      unsigned CFSEL:3;
    };
    struct {
      unsigned CFDIV0:1;
      unsigned CFDIV1:1;
      unsigned CFDIV2:1;
      unsigned :1;
      unsigned CFSEL0:1;
      unsigned CFSEL1:1;
      unsigned CFSEL2:1;
    };
  };
} typeCM3FLTRBITS;
sfr volatile typeCM3FLTRBITS CM3FLTRbits absolute 0xA9A;

typedef struct tagCM4CONBITS {
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
} typeCM4CONBITS;
sfr volatile typeCM4CONBITS CM4CONbits absolute 0xA9C;

typedef struct tagCM4MSKSRCBITS {
  union {
    struct {
      unsigned SELSRCA:4;
      unsigned SELSRCB:4;
      unsigned SELSRCC:4;
    };
    struct {
      unsigned SELSRCA0:1;
      unsigned SELSRCA1:1;
      unsigned SELSRCA2:1;
      unsigned SELSRCA3:1;
      unsigned SELSRCB0:1;
      unsigned SELSRCB1:1;
      unsigned SELSRCB2:1;
      unsigned SELSRCB3:1;
      unsigned SELSRCC0:1;
      unsigned SELSRCC1:1;
      unsigned SELSRCC2:1;
      unsigned SELSRCC3:1;
    };
  };
} typeCM4MSKSRCBITS;
sfr volatile typeCM4MSKSRCBITS CM4MSKSRCbits absolute 0xA9E;

typedef struct tagCM4MSKCONBITS {
  union {
    struct {
      unsigned AANEN:1;
      unsigned AAEN:1;
      unsigned ABNEN:1;
      unsigned ABEN:1;
      unsigned ACNEN:1;
      unsigned ACEN:1;
      unsigned PAGS:1;
      unsigned NAGS:1;
      unsigned OANEN:1;
      unsigned OAEN:1;
      unsigned OBNEN:1;
      unsigned OBEN:1;
      unsigned OCNEN:1;
      unsigned OCEN:1;
      unsigned :1;
      unsigned HLMS:1;
    };
  };
} typeCM4MSKCONBITS;
sfr volatile typeCM4MSKCONBITS CM4MSKCONbits absolute 0xAA0;

typedef struct tagCM4FLTRBITS {
  union {
    struct {
      unsigned CFDIV:3;
      unsigned CFLTREN:1;
      unsigned CFSEL:3;
    };
    struct {
      unsigned CFDIV0:1;
      unsigned CFDIV1:1;
      unsigned CFDIV2:1;
      unsigned :1;
      unsigned CFSEL0:1;
      unsigned CFSEL1:1;
      unsigned CFSEL2:1;
    };
  };
} typeCM4FLTRBITS;
sfr volatile typeCM4FLTRBITS CM4FLTRbits absolute 0xAA2;

typedef struct tagCM5CONBITS {
  union {
    struct {
      unsigned CCH:2;
      unsigned :2;
      unsigned CREF:1;
      unsigned :1;
      unsigned EVPOL:2;
      unsigned COUT:1;
      unsigned CEVT:1;
      unsigned OPAEN:1;
      unsigned :2;
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
} typeCM5CONBITS;
sfr volatile typeCM5CONBITS CM5CONbits absolute 0xAA4;

typedef struct tagCM5MSKSRCBITS {
  union {
    struct {
      unsigned SELSRCA:4;
      unsigned SELSRCB:4;
      unsigned SELSRCC:4;
    };
    struct {
      unsigned SELSRCA0:1;
      unsigned SELSRCA1:1;
      unsigned SELSRCA2:1;
      unsigned SELSRCA3:1;
      unsigned SELSRCB0:1;
      unsigned SELSRCB1:1;
      unsigned SELSRCB2:1;
      unsigned SELSRCB3:1;
      unsigned SELSRCC0:1;
      unsigned SELSRCC1:1;
      unsigned SELSRCC2:1;
      unsigned SELSRCC3:1;
    };
  };
} typeCM5MSKSRCBITS;
sfr volatile typeCM5MSKSRCBITS CM5MSKSRCbits absolute 0xAA6;

typedef struct tagCM5MSKCONBITS {
  union {
    struct {
      unsigned AANEN:1;
      unsigned AAEN:1;
      unsigned ABNEN:1;
      unsigned ABEN:1;
      unsigned ACNEN:1;
      unsigned ACEN:1;
      unsigned PAGS:1;
      unsigned NAGS:1;
      unsigned OANEN:1;
      unsigned OAEN:1;
      unsigned OBNEN:1;
      unsigned OBEN:1;
      unsigned OCNEN:1;
      unsigned OCEN:1;
      unsigned :1;
      unsigned HLMS:1;
    };
  };
} typeCM5MSKCONBITS;
sfr volatile typeCM5MSKCONBITS CM5MSKCONbits absolute 0xAA8;

typedef struct tagCM5FLTRBITS {
  union {
    struct {
      unsigned CFDIV:3;
      unsigned CFLTREN:1;
      unsigned CFSEL:3;
    };
    struct {
      unsigned CFDIV0:1;
      unsigned CFDIV1:1;
      unsigned CFDIV2:1;
      unsigned :1;
      unsigned CFSEL0:1;
      unsigned CFSEL1:1;
      unsigned CFSEL2:1;
    };
  };
} typeCM5FLTRBITS;
sfr volatile typeCM5FLTRBITS CM5FLTRbits absolute 0xAAA;

typedef struct tagCVR2CONBITS {
  union {
    struct {
      unsigned CVR:7;
      unsigned :3;
      unsigned VREFSEL:1;
      unsigned CVRSS:1;
      unsigned :2;
      unsigned CVROE:1;
      unsigned CVREN:1;
    };
    struct {
      unsigned CVR0:1;
      unsigned CVR1:1;
      unsigned CVR2:1;
      unsigned CVR3:1;
      unsigned CVR4:1;
      unsigned CVR5:1;
      unsigned CVR6:1;
    };
  };
} typeCVR2CONBITS;
sfr volatile typeCVR2CONBITS CVR2CONbits absolute 0xAB4;

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
sfr volatile typeDMA0CONBITS DMA0CONbits absolute 0xB00;

typedef struct tagDMA0REQBITS {
  union {
    struct {
      unsigned IRQSEL:8;
      unsigned :7;
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
      unsigned IRQSEL7:1;
    };
  };
} typeDMA0REQBITS;
sfr volatile typeDMA0REQBITS DMA0REQbits absolute 0xB02;

typedef struct tagDMA0STAHBITS {
  union {
    struct {
      unsigned STA:8;
    };
  };
} typeDMA0STAHBITS;
sfr volatile typeDMA0STAHBITS DMA0STAHbits absolute 0xB06;

typedef struct tagDMA0STBHBITS {
  union {
    struct {
      unsigned STB:8;
    };
  };
} typeDMA0STBHBITS;
sfr volatile typeDMA0STBHBITS DMA0STBHbits absolute 0xB0A;

typedef struct tagDMA0CNTBITS {
  union {
    struct {
      unsigned CNT:14;
    };
  };
} typeDMA0CNTBITS;
sfr volatile typeDMA0CNTBITS DMA0CNTbits absolute 0xB0E;

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
sfr volatile typeDMA1CONBITS DMA1CONbits absolute 0xB10;

typedef struct tagDMA1REQBITS {
  union {
    struct {
      unsigned IRQSEL:8;
      unsigned :7;
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
      unsigned IRQSEL7:1;
    };
  };
} typeDMA1REQBITS;
sfr volatile typeDMA1REQBITS DMA1REQbits absolute 0xB12;

typedef struct tagDMA1STAHBITS {
  union {
    struct {
      unsigned STA:8;
    };
  };
} typeDMA1STAHBITS;
sfr volatile typeDMA1STAHBITS DMA1STAHbits absolute 0xB16;

typedef struct tagDMA1STBHBITS {
  union {
    struct {
      unsigned STB:8;
    };
  };
} typeDMA1STBHBITS;
sfr volatile typeDMA1STBHBITS DMA1STBHbits absolute 0xB1A;

typedef struct tagDMA1CNTBITS {
  union {
    struct {
      unsigned CNT:14;
    };
  };
} typeDMA1CNTBITS;
sfr volatile typeDMA1CNTBITS DMA1CNTbits absolute 0xB1E;

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
sfr volatile typeDMA2CONBITS DMA2CONbits absolute 0xB20;

typedef struct tagDMA2REQBITS {
  union {
    struct {
      unsigned IRQSEL:8;
      unsigned :7;
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
      unsigned IRQSEL7:1;
    };
  };
} typeDMA2REQBITS;
sfr volatile typeDMA2REQBITS DMA2REQbits absolute 0xB22;

typedef struct tagDMA2STAHBITS {
  union {
    struct {
      unsigned STA:8;
    };
  };
} typeDMA2STAHBITS;
sfr volatile typeDMA2STAHBITS DMA2STAHbits absolute 0xB26;

typedef struct tagDMA2STBHBITS {
  union {
    struct {
      unsigned STB:8;
    };
  };
} typeDMA2STBHBITS;
sfr volatile typeDMA2STBHBITS DMA2STBHbits absolute 0xB2A;

typedef struct tagDMA2CNTBITS {
  union {
    struct {
      unsigned CNT:14;
    };
  };
} typeDMA2CNTBITS;
sfr volatile typeDMA2CNTBITS DMA2CNTbits absolute 0xB2E;

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
sfr volatile typeDMA3CONBITS DMA3CONbits absolute 0xB30;

typedef struct tagDMA3REQBITS {
  union {
    struct {
      unsigned IRQSEL:8;
      unsigned :7;
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
      unsigned IRQSEL7:1;
    };
  };
} typeDMA3REQBITS;
sfr volatile typeDMA3REQBITS DMA3REQbits absolute 0xB32;

typedef struct tagDMA3STAHBITS {
  union {
    struct {
      unsigned STA:8;
    };
  };
} typeDMA3STAHBITS;
sfr volatile typeDMA3STAHBITS DMA3STAHbits absolute 0xB36;

typedef struct tagDMA3STBHBITS {
  union {
    struct {
      unsigned STB:8;
    };
  };
} typeDMA3STBHBITS;
sfr volatile typeDMA3STBHBITS DMA3STBHbits absolute 0xB3A;

typedef struct tagDMA3CNTBITS {
  union {
    struct {
      unsigned CNT:14;
    };
  };
} typeDMA3CNTBITS;
sfr volatile typeDMA3CNTBITS DMA3CNTbits absolute 0xB3E;

typedef struct tagDMAPWCBITS {
  union {
    struct {
      unsigned PWCOL0:1;
      unsigned PWCOL1:1;
      unsigned PWCOL2:1;
      unsigned PWCOL3:1;
    };
  };
} typeDMAPWCBITS;
sfr volatile typeDMAPWCBITS DMAPWCbits absolute 0xBF0;

typedef struct tagDMARQCBITS {
  union {
    struct {
      unsigned RQCOL0:1;
      unsigned RQCOL1:1;
      unsigned RQCOL2:1;
      unsigned RQCOL3:1;
    };
  };
} typeDMARQCBITS;
sfr volatile typeDMARQCBITS DMARQCbits absolute 0xBF2;

typedef struct tagDMAPPSBITS {
  union {
    struct {
      unsigned PPST0:1;
      unsigned PPST1:1;
      unsigned PPST2:1;
      unsigned PPST3:1;
    };
  };
} typeDMAPPSBITS;
sfr volatile typeDMAPPSBITS DMAPPSbits absolute 0xBF4;

typedef struct tagDMALCABITS {
  union {
    struct {
      unsigned LSTCH:4;
    };
    struct {
      unsigned LSTCH0:1;
      unsigned LSTCH1:1;
      unsigned LSTCH2:1;
      unsigned LSTCH3:1;
    };
  };
} typeDMALCABITS;
sfr volatile typeDMALCABITS DMALCAbits absolute 0xBF6;

typedef struct tagDSADRHBITS {
  union {
    struct {
      unsigned DSADR:8;
    };
  };
} typeDSADRHBITS;
sfr volatile typeDSADRHBITS DSADRHbits absolute 0xBFA;

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

typedef struct tagCHOPBITS {
  union {
    struct {
      unsigned CHOPCLK:10;
      unsigned :5;
      unsigned CHPCLKEN:1;
    };
    struct {
      unsigned CHOPCLK0:1;
      unsigned CHOPCLK1:1;
      unsigned CHOPCLK2:1;
      unsigned CHOPCLK3:1;
      unsigned CHOPCLK4:1;
      unsigned CHOPCLK5:1;
      unsigned CHOPCLK6:1;
      unsigned CHOPCLK7:1;
      unsigned CHOPCLK8:1;
      unsigned CHOPCLK9:1;
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
      unsigned :2;
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
      unsigned TRGCMP:16;
    };
    struct {
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
      unsigned TRGCMP13:1;
      unsigned TRGCMP14:1;
      unsigned TRGCMP15:1;
    };
  };
} typeTRIG1BITS;
sfr volatile typeTRIG1BITS TRIG1bits absolute 0xC32;

typedef struct tagTRGCON1BITS {
  union {
    struct {
      unsigned TRGSTRT:6;
      unsigned :6;
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
      unsigned :2;
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
      unsigned TRGCMP:16;
    };
    struct {
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
      unsigned TRGCMP13:1;
      unsigned TRGCMP14:1;
      unsigned TRGCMP15:1;
    };
  };
} typeTRIG2BITS;
sfr volatile typeTRIG2BITS TRIG2bits absolute 0xC52;

typedef struct tagTRGCON2BITS {
  union {
    struct {
      unsigned TRGSTRT:6;
      unsigned :6;
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
      unsigned :2;
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
      unsigned TRGCMP:16;
    };
    struct {
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
      unsigned TRGCMP13:1;
      unsigned TRGCMP14:1;
      unsigned TRGCMP15:1;
    };
  };
} typeTRIG3BITS;
sfr volatile typeTRIG3BITS TRIG3bits absolute 0xC72;

typedef struct tagTRGCON3BITS {
  union {
    struct {
      unsigned TRGSTRT:6;
      unsigned :6;
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
      unsigned :2;
      unsigned TRISA4:1;
      unsigned :2;
      unsigned TRISA7:1;
      unsigned TRISA8:1;
      unsigned TRISA9:1;
      unsigned TRISA10:1;
      unsigned TRISA11:1;
      unsigned TRISA12:1;
    };
  };
} typeTRISABITS;
sfr volatile typeTRISABITS TRISAbits absolute 0xE00;

typedef struct tagPORTABITS {
  union {
    struct {
      unsigned RA0:1;
      unsigned RA1:1;
      unsigned :2;
      unsigned RA4:1;
      unsigned :2;
      unsigned RA7:1;
      unsigned RA8:1;
      unsigned RA9:1;
      unsigned RA10:1;
      unsigned RA11:1;
      unsigned RA12:1;
    };
  };
} typePORTABITS;
sfr volatile typePORTABITS PORTAbits absolute 0xE02;

typedef struct tagLATABITS {
  union {
    struct {
      unsigned LATA0:1;
      unsigned LATA1:1;
      unsigned :2;
      unsigned LATA4:1;
      unsigned :2;
      unsigned LATA7:1;
      unsigned LATA8:1;
      unsigned LATA9:1;
      unsigned LATA10:1;
      unsigned LATA11:1;
      unsigned LATA12:1;
    };
  };
} typeLATABITS;
sfr volatile typeLATABITS LATAbits absolute 0xE04;

typedef struct tagODCABITS {
  union {
    struct {
      unsigned ODCA0:1;
      unsigned ODCA1:1;
      unsigned :2;
      unsigned ODCA4:1;
      unsigned :2;
      unsigned ODCA7:1;
      unsigned ODCA8:1;
      unsigned ODCA9:1;
      unsigned ODCA10:1;
      unsigned ODCA11:1;
      unsigned ODCA12:1;
    };
  };
} typeODCABITS;
sfr volatile typeODCABITS ODCAbits absolute 0xE06;

typedef struct tagCNENABITS {
  union {
    struct {
      unsigned CNIEA0:1;
      unsigned CNIEA1:1;
      unsigned :2;
      unsigned CNIEA4:1;
      unsigned :2;
      unsigned CNIEA7:1;
      unsigned CNIEA8:1;
      unsigned CNIEA9:1;
      unsigned CNIEA10:1;
      unsigned CNIEA11:1;
      unsigned CNIEA12:1;
    };
  };
} typeCNENABITS;
sfr volatile typeCNENABITS CNENAbits absolute 0xE08;

typedef struct tagCNPUABITS {
  union {
    struct {
      unsigned CNPUA0:1;
      unsigned CNPUA1:1;
      unsigned :2;
      unsigned CNPUA4:1;
      unsigned :2;
      unsigned CNPUA7:1;
      unsigned CNPUA8:1;
      unsigned CNPUA9:1;
      unsigned CNPUA10:1;
      unsigned CNPUA11:1;
      unsigned CNPUA12:1;
    };
  };
} typeCNPUABITS;
sfr volatile typeCNPUABITS CNPUAbits absolute 0xE0A;

typedef struct tagCNPDABITS {
  union {
    struct {
      unsigned CNPDA0:1;
      unsigned CNPDA1:1;
      unsigned :2;
      unsigned CNPDA4:1;
      unsigned :2;
      unsigned CNPDA7:1;
      unsigned CNPDA8:1;
      unsigned CNPDA9:1;
      unsigned CNPDA10:1;
      unsigned CNPDA11:1;
      unsigned CNPDA12:1;
    };
  };
} typeCNPDABITS;
sfr volatile typeCNPDABITS CNPDAbits absolute 0xE0C;

typedef struct tagANSELABITS {
  union {
    struct {
      unsigned ANSA0:1;
      unsigned ANSA1:1;
      unsigned :2;
      unsigned ANSA4:1;
      unsigned :2;
      unsigned ANSA7:1;
      unsigned :1;
      unsigned ANSA9:1;
      unsigned ANSA10:1;
      unsigned ANSA11:1;
      unsigned ANSA12:1;
    };
  };
} typeANSELABITS;
sfr volatile typeANSELABITS ANSELAbits absolute 0xE0E;

typedef struct tagSR1ABITS {
  union {
    struct {
      unsigned :4;
      unsigned SR1A4:1;
      unsigned :4;
      unsigned SR1A9:1;
    };
  };
} typeSR1ABITS;
sfr volatile typeSR1ABITS SR1Abits absolute 0xE10;

typedef struct tagSR0ABITS {
  union {
    struct {
      unsigned :4;
      unsigned SR0A4:1;
      unsigned :4;
      unsigned SR0A9:1;
    };
  };
} typeSR0ABITS;
sfr volatile typeSR0ABITS SR0Abits absolute 0xE12;

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
sfr volatile typeTRISBBITS TRISBbits absolute 0xE14;

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
sfr volatile typePORTBBITS PORTBbits absolute 0xE16;

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
sfr volatile typeLATBBITS LATBbits absolute 0xE18;

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
sfr volatile typeODCBBITS ODCBbits absolute 0xE1A;

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
sfr volatile typeCNENBBITS CNENBbits absolute 0xE1C;

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
sfr volatile typeCNPUBBITS CNPUBbits absolute 0xE1E;

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
sfr volatile typeCNPDBBITS CNPDBbits absolute 0xE20;

typedef struct tagANSELBBITS {
  union {
    struct {
      unsigned ANSB0:1;
      unsigned ANSB1:1;
      unsigned ANSB2:1;
      unsigned ANSB3:1;
      unsigned :3;
      unsigned ANSB7:1;
      unsigned ANSB8:1;
      unsigned ANSB9:1;
    };
  };
} typeANSELBBITS;
sfr volatile typeANSELBBITS ANSELBbits absolute 0xE22;

typedef struct tagSR1BBITS {
  union {
    struct {
      unsigned :4;
      unsigned SR1B4:1;
      unsigned :2;
      unsigned SR1B7:1;
      unsigned SR1B8:1;
      unsigned SR1B9:1;
    };
  };
} typeSR1BBITS;
sfr volatile typeSR1BBITS SR1Bbits absolute 0xE24;

typedef struct tagSR0BBITS {
  union {
    struct {
      unsigned :4;
      unsigned SR0B4:1;
      unsigned :2;
      unsigned SR0B7:1;
      unsigned SR0B8:1;
      unsigned SR0B9:1;
    };
  };
} typeSR0BBITS;
sfr volatile typeSR0BBITS SR0Bbits absolute 0xE26;

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
      unsigned TRISC10:1;
      unsigned TRISC11:1;
      unsigned TRISC12:1;
      unsigned TRISC13:1;
      unsigned :1;
      unsigned TRISC15:1;
    };
  };
} typeTRISCBITS;
sfr volatile typeTRISCBITS TRISCbits absolute 0xE28;

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
      unsigned RC10:1;
      unsigned RC11:1;
      unsigned RC12:1;
      unsigned RC13:1;
      unsigned :1;
      unsigned RC15:1;
    };
  };
} typePORTCBITS;
sfr volatile typePORTCBITS PORTCbits absolute 0xE2A;

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
      unsigned LATC10:1;
      unsigned LATC11:1;
      unsigned LATC12:1;
      unsigned LATC13:1;
      unsigned :1;
      unsigned LATC15:1;
    };
  };
} typeLATCBITS;
sfr volatile typeLATCBITS LATCbits absolute 0xE2C;

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
      unsigned ODCC10:1;
      unsigned ODCC11:1;
      unsigned ODCC12:1;
      unsigned ODCC13:1;
      unsigned :1;
      unsigned ODCC15:1;
    };
  };
} typeODCCBITS;
sfr volatile typeODCCBITS ODCCbits absolute 0xE2E;

typedef struct tagCNENCBITS {
  union {
    struct {
      unsigned CNIEC0:1;
      unsigned CNIEC1:1;
      unsigned CNIEC2:1;
      unsigned CNIEC3:1;
      unsigned CNIEC4:1;
      unsigned CNIEC5:1;
      unsigned CNIEC6:1;
      unsigned CNIEC7:1;
      unsigned CNIEC8:1;
      unsigned CNIEC9:1;
      unsigned CNIEC10:1;
      unsigned CNIEC11:1;
      unsigned CNIEC12:1;
      unsigned CNIEC13:1;
      unsigned :1;
      unsigned CNIEC15:1;
    };
  };
} typeCNENCBITS;
sfr volatile typeCNENCBITS CNENCbits absolute 0xE30;

typedef struct tagCNPUCBITS {
  union {
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
      unsigned CNPUC10:1;
      unsigned CNPUC11:1;
      unsigned CNPUC12:1;
      unsigned CNPUC13:1;
      unsigned :1;
      unsigned CNPUC15:1;
    };
  };
} typeCNPUCBITS;
sfr volatile typeCNPUCBITS CNPUCbits absolute 0xE32;

typedef struct tagCNPDCBITS {
  union {
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
      unsigned CNPDC10:1;
      unsigned CNPDC11:1;
      unsigned CNPDC12:1;
      unsigned CNPDC13:1;
      unsigned :1;
      unsigned CNPDC15:1;
    };
  };
} typeCNPDCBITS;
sfr volatile typeCNPDCBITS CNPDCbits absolute 0xE34;

typedef struct tagANSELCBITS {
  union {
    struct {
      unsigned ANSC0:1;
      unsigned ANSC1:1;
      unsigned ANSC2:1;
      unsigned ANSC3:1;
      unsigned ANSC4:1;
      unsigned ANSC5:1;
      unsigned ANSC6:1;
      unsigned ANSC7:1;
      unsigned ANSC8:1;
      unsigned ANSC9:1;
      unsigned ANSC10:1;
      unsigned ANSC11:1;
      unsigned ANSC12:1;
    };
  };
} typeANSELCBITS;
sfr volatile typeANSELCBITS ANSELCbits absolute 0xE36;

typedef struct tagSR1CBITS {
  union {
    struct {
      unsigned :3;
      unsigned SR1C3:1;
      unsigned :2;
      unsigned SR1C6:1;
      unsigned SR1C7:1;
      unsigned SR1C8:1;
      unsigned SR1C9:1;
    };
  };
} typeSR1CBITS;
sfr volatile typeSR1CBITS SR1Cbits absolute 0xE38;

typedef struct tagSR0CBITS {
  union {
    struct {
      unsigned :3;
      unsigned SR0C3:1;
      unsigned :2;
      unsigned SR0C6:1;
      unsigned SR0C7:1;
      unsigned SR0C8:1;
      unsigned SR0C9:1;
    };
  };
} typeSR0CBITS;
sfr volatile typeSR0CBITS SR0Cbits absolute 0xE3A;

typedef struct tagTRISDBITS {
  union {
    struct {
      unsigned :5;
      unsigned TRISD5:1;
      unsigned TRISD6:1;
      unsigned :1;
      unsigned TRISD8:1;
    };
  };
} typeTRISDBITS;
sfr volatile typeTRISDBITS TRISDbits absolute 0xE3C;

typedef struct tagPORTDBITS {
  union {
    struct {
      unsigned :5;
      unsigned RD5:1;
      unsigned RD6:1;
      unsigned :1;
      unsigned RD8:1;
    };
  };
} typePORTDBITS;
sfr volatile typePORTDBITS PORTDbits absolute 0xE3E;

typedef struct tagLATDBITS {
  union {
    struct {
      unsigned :5;
      unsigned LATD5:1;
      unsigned LATD6:1;
      unsigned :1;
      unsigned LATD8:1;
    };
  };
} typeLATDBITS;
sfr volatile typeLATDBITS LATDbits absolute 0xE40;

typedef struct tagODCDBITS {
  union {
    struct {
      unsigned :5;
      unsigned ODCD5:1;
      unsigned ODCD6:1;
      unsigned :1;
      unsigned ODCD8:1;
    };
  };
} typeODCDBITS;
sfr volatile typeODCDBITS ODCDbits absolute 0xE42;

typedef struct tagCNENDBITS {
  union {
    struct {
      unsigned :5;
      unsigned CNIED5:1;
      unsigned CNIED6:1;
      unsigned :1;
      unsigned CNIED8:1;
    };
  };
} typeCNENDBITS;
sfr volatile typeCNENDBITS CNENDbits absolute 0xE44;

typedef struct tagCNPUDBITS {
  union {
    struct {
      unsigned :5;
      unsigned CNPUD5:1;
      unsigned CNPUD6:1;
      unsigned :1;
      unsigned CNPUD8:1;
    };
  };
} typeCNPUDBITS;
sfr volatile typeCNPUDBITS CNPUDbits absolute 0xE46;

typedef struct tagCNPDDBITS {
  union {
    struct {
      unsigned :5;
      unsigned CNPDD5:1;
      unsigned CNPDD6:1;
      unsigned :1;
      unsigned CNPDD8:1;
    };
  };
} typeCNPDDBITS;
sfr volatile typeCNPDDBITS CNPDDbits absolute 0xE48;

typedef struct tagTRISEBITS {
  union {
    struct {
      unsigned :12;
      unsigned TRISE12:1;
      unsigned TRISE13:1;
      unsigned TRISE14:1;
      unsigned TRISE15:1;
    };
  };
} typeTRISEBITS;
sfr volatile typeTRISEBITS TRISEbits absolute 0xE50;

typedef struct tagPORTEBITS {
  union {
    struct {
      unsigned :12;
      unsigned RE12:1;
      unsigned RE13:1;
      unsigned RE14:1;
      unsigned RE15:1;
    };
  };
} typePORTEBITS;
sfr volatile typePORTEBITS PORTEbits absolute 0xE52;

typedef struct tagLATEBITS {
  union {
    struct {
      unsigned :12;
      unsigned LATE12:1;
      unsigned LATE13:1;
      unsigned LATE14:1;
      unsigned LATE15:1;
    };
  };
} typeLATEBITS;
sfr volatile typeLATEBITS LATEbits absolute 0xE54;

typedef struct tagODCEBITS {
  union {
    struct {
      unsigned :12;
      unsigned ODCE12:1;
      unsigned ODCE13:1;
      unsigned ODCE14:1;
      unsigned ODCE15:1;
    };
  };
} typeODCEBITS;
sfr volatile typeODCEBITS ODCEbits absolute 0xE56;

typedef struct tagCNENEBITS {
  union {
    struct {
      unsigned :12;
      unsigned CNIEE12:1;
      unsigned CNIEE13:1;
      unsigned CNIEE14:1;
      unsigned CNIEE15:1;
    };
  };
} typeCNENEBITS;
sfr volatile typeCNENEBITS CNENEbits absolute 0xE58;

typedef struct tagCNPUEBITS {
  union {
    struct {
      unsigned :12;
      unsigned CNPUE12:1;
      unsigned CNPUE13:1;
      unsigned CNPUE14:1;
      unsigned CNPUE15:1;
    };
  };
} typeCNPUEBITS;
sfr volatile typeCNPUEBITS CNPUEbits absolute 0xE5A;

typedef struct tagCNPDEBITS {
  union {
    struct {
      unsigned :12;
      unsigned CNPDE12:1;
      unsigned CNPDE13:1;
      unsigned CNPDE14:1;
      unsigned CNPDE15:1;
    };
  };
} typeCNPDEBITS;
sfr volatile typeCNPDEBITS CNPDEbits absolute 0xE5C;

typedef struct tagANSELEBITS {
  union {
    struct {
      unsigned :12;
      unsigned ANSE12:1;
      unsigned ANSE13:1;
      unsigned ANSE14:1;
      unsigned ANSE15:1;
    };
  };
} typeANSELEBITS;
sfr volatile typeANSELEBITS ANSELEbits absolute 0xE5E;

typedef struct tagTRISFBITS {
  union {
    struct {
      unsigned TRISF0:1;
      unsigned TRISF1:1;
    };
  };
} typeTRISFBITS;
sfr volatile typeTRISFBITS TRISFbits absolute 0xE64;

typedef struct tagPORTFBITS {
  union {
    struct {
      unsigned RF0:1;
      unsigned RF1:1;
    };
  };
} typePORTFBITS;
sfr volatile typePORTFBITS PORTFbits absolute 0xE66;

typedef struct tagLATFBITS {
  union {
    struct {
      unsigned LATF0:1;
      unsigned LATF1:1;
    };
  };
} typeLATFBITS;
sfr volatile typeLATFBITS LATFbits absolute 0xE68;

typedef struct tagODCFBITS {
  union {
    struct {
      unsigned ODCF0:1;
      unsigned ODCF1:1;
    };
  };
} typeODCFBITS;
sfr volatile typeODCFBITS ODCFbits absolute 0xE6A;

typedef struct tagCNENFBITS {
  union {
    struct {
      unsigned CNIEF0:1;
      unsigned CNIEF1:1;
    };
  };
} typeCNENFBITS;
sfr volatile typeCNENFBITS CNENFbits absolute 0xE6C;

typedef struct tagCNPUFBITS {
  union {
    struct {
      unsigned CNPUF0:1;
      unsigned CNPUF1:1;
    };
  };
} typeCNPUFBITS;
sfr volatile typeCNPUFBITS CNPUFbits absolute 0xE6E;

typedef struct tagCNPDFBITS {
  union {
    struct {
      unsigned CNPDF0:1;
      unsigned CNPDF1:1;
    };
  };
} typeCNPDFBITS;
sfr volatile typeCNPDFBITS CNPDFbits absolute 0xE70;

typedef struct tagTRISGBITS {
  union {
    struct {
      unsigned :6;
      unsigned TRISG6:1;
      unsigned TRISG7:1;
      unsigned TRISG8:1;
      unsigned TRISG9:1;
    };
  };
} typeTRISGBITS;
sfr volatile typeTRISGBITS TRISGbits absolute 0xE78;

typedef struct tagPORTGBITS {
  union {
    struct {
      unsigned :6;
      unsigned RG6:1;
      unsigned RG7:1;
      unsigned RG8:1;
      unsigned RG9:1;
    };
  };
} typePORTGBITS;
sfr volatile typePORTGBITS PORTGbits absolute 0xE7A;

typedef struct tagLATGBITS {
  union {
    struct {
      unsigned :6;
      unsigned LATG6:1;
      unsigned LATG7:1;
      unsigned LATG8:1;
      unsigned LATG9:1;
    };
  };
} typeLATGBITS;
sfr volatile typeLATGBITS LATGbits absolute 0xE7C;

typedef struct tagODCGBITS {
  union {
    struct {
      unsigned :6;
      unsigned ODCG6:1;
      unsigned ODCG7:1;
      unsigned ODCG8:1;
      unsigned ODCG9:1;
    };
  };
} typeODCGBITS;
sfr volatile typeODCGBITS ODCGbits absolute 0xE7E;

typedef struct tagCNENGBITS {
  union {
    struct {
      unsigned :6;
      unsigned CNIEG6:1;
      unsigned CNIEG7:1;
      unsigned CNIEG8:1;
      unsigned CNIEG9:1;
    };
  };
} typeCNENGBITS;
sfr volatile typeCNENGBITS CNENGbits absolute 0xE80;

typedef struct tagCNPUGBITS {
  union {
    struct {
      unsigned :6;
      unsigned CNPUG6:1;
      unsigned CNPUG7:1;
      unsigned CNPUG8:1;
      unsigned CNPUG9:1;
    };
  };
} typeCNPUGBITS;
sfr volatile typeCNPUGBITS CNPUGbits absolute 0xE82;

typedef struct tagCNPDGBITS {
  union {
    struct {
      unsigned :6;
      unsigned CNPDG6:1;
      unsigned CNPDG7:1;
      unsigned CNPDG8:1;
      unsigned CNPDG9:1;
    };
  };
} typeCNPDGBITS;
sfr volatile typeCNPDGBITS CNPDGbits absolute 0xE84;

typedef struct tagANSELGBITS {
  union {
    struct {
      unsigned :6;
      unsigned ANSG6:1;
      unsigned ANSG7:1;
      unsigned ANSG8:1;
      unsigned ANSG9:1;
    };
  };
} typeANSELGBITS;
sfr volatile typeANSELGBITS ANSELGbits absolute 0xE86;

typedef struct tagFEXUBITS {
  union {
    struct {
      unsigned FEXU:8;
    };
  };
} typeFEXUBITS;
sfr volatile typeFEXUBITS FEXUbits absolute 0xF82;

typedef struct tagFEX2UBITS {
  union {
    struct {
      unsigned FEX2U:8;
    };
  };
} typeFEX2UBITS;
sfr volatile typeFEX2UBITS FEX2Ubits absolute 0xF86;

typedef struct tagDPCHBITS {
  union {
    struct {
      unsigned DPCH:8;
    };
  };
} typeDPCHBITS;
sfr volatile typeDPCHBITS DPCHbits absolute 0xF8C;

typedef struct tagAPPSBITS {
  union {
    struct {
      unsigned APIFUL:1;
      unsigned APIOV:1;
      unsigned APOFUL:1;
      unsigned APOOV:1;
      unsigned STRFUL:1;
    };
  };
} typeAPPSBITS;
sfr volatile typeAPPSBITS APPSbits absolute 0xFA4;

