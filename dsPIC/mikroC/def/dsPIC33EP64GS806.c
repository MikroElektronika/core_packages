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
const unsigned IVT_ADDR_RESERVEDTRAP5        = 0x000E;
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
const unsigned IVT_ADDR_SPI1TXINTERRUPT      = 0x0026;
const unsigned IVT_ADDR_SPI1RXINTERRUPT      = 0x0028;
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
const unsigned IVT_ADDR_SPI2TXINTERRUPT      = 0x0054;
const unsigned IVT_ADDR_SPI2RXINTERRUPT      = 0x0056;
const unsigned IVT_ADDR_C1RXINTERRUPT        = 0x0058;
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
const unsigned IVT_ADDR_INTERRUPT53          = 0x007E;
const unsigned IVT_ADDR_INT4INTERRUPT        = 0x0080;
const unsigned IVT_ADDR_C2RXINTERRUPT        = 0x0082;
const unsigned IVT_ADDR_C2INTERRUPT          = 0x0084;
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
const unsigned IVT_ADDR_C2TXINTERRUPT        = 0x00A2;
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
const unsigned IVT_ADDR_SPI3TXINTERRUPT      = 0x00C8;
const unsigned IVT_ADDR_SPI3RXINTERRUPT      = 0x00CA;
const unsigned IVT_ADDR_INTERRUPT92          = 0x00CC;
const unsigned IVT_ADDR_INTERRUPT93          = 0x00CE;
const unsigned IVT_ADDR_PWM1INTERRUPT        = 0x00D0;
const unsigned IVT_ADDR_PWM2INTERRUPT        = 0x00D2;
const unsigned IVT_ADDR_PWM3INTERRUPT        = 0x00D4;
const unsigned IVT_ADDR_PWM4INTERRUPT        = 0x00D6;
const unsigned IVT_ADDR_PWM5INTERRUPT        = 0x00D8;
const unsigned IVT_ADDR_PWM6INTERRUPT        = 0x00DA;
const unsigned IVT_ADDR_PWM7INTERRUPT        = 0x00DC;
const unsigned IVT_ADDR_PWM8INTERRUPT        = 0x00DE;
const unsigned IVT_ADDR_INTERRUPT102         = 0x00E0;
const unsigned IVT_ADDR_CMP2INTERRUPT        = 0x00E2;
const unsigned IVT_ADDR_CMP3INTERRUPT        = 0x00E4;
const unsigned IVT_ADDR_CMP4INTERRUPT        = 0x00E6;
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
const unsigned IVT_ADDR_SPI1GINTERRUPT       = 0x010C;
const unsigned IVT_ADDR_SPI2GINTERRUPT       = 0x010E;
const unsigned IVT_ADDR_SPI3GINTERRUPT       = 0x0110;
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
const unsigned IVT_ADDR_CLC1INTERRUPT        = 0x0128;
const unsigned IVT_ADDR_CLC2INTERRUPT        = 0x012A;
const unsigned IVT_ADDR_CLC3INTERRUPT        = 0x012C;
const unsigned IVT_ADDR_CLC4INTERRUPT        = 0x012E;
const unsigned IVT_ADDR_ICDINTERRUPT         = 0x0130;
const unsigned IVT_ADDR_JTAGINTERRUPT        = 0x0132;
const unsigned IVT_ADDR_INTERRUPT144         = 0x0134;
const unsigned IVT_ADDR_PTGSTEPINTERRUPT     = 0x0136;
const unsigned IVT_ADDR_PTGWDTINTERRUPT      = 0x0138;
const unsigned IVT_ADDR_PTG0INTERRUPT        = 0x013A;
const unsigned IVT_ADDR_PTG1INTERRUPT        = 0x013C;
const unsigned IVT_ADDR_PTG2INTERRUPT        = 0x013E;
const unsigned IVT_ADDR_PTG3INTERRUPT        = 0x0140;
const unsigned IVT_ADDR_ADCAN8INTERRUPT      = 0x0142;
const unsigned IVT_ADDR_ADCAN9INTERRUPT      = 0x0144;
const unsigned IVT_ADDR_ADCAN10INTERRUPT     = 0x0146;
const unsigned IVT_ADDR_ADCAN11INTERRUPT     = 0x0148;
const unsigned IVT_ADDR_ADCAN12INTERRUPT     = 0x014A;
const unsigned IVT_ADDR_ADCAN13INTERRUPT     = 0x014C;
const unsigned IVT_ADDR_ADCAN14INTERRUPT     = 0x014E;
const unsigned IVT_ADDR_ADCAN15INTERRUPT     = 0x0150;
const unsigned IVT_ADDR_ADCAN16INTERRUPT     = 0x0152;
const unsigned IVT_ADDR_ADCAN17INTERRUPT     = 0x0154;
const unsigned IVT_ADDR_ADCAN18INTERRUPT     = 0x0156;
const unsigned IVT_ADDR_ADCAN19INTERRUPT     = 0x0158;
const unsigned IVT_ADDR_ADCAN20INTERRUPT     = 0x015A;
const unsigned IVT_ADDR_ADCAN21INTERRUPT     = 0x015C;
const unsigned IVT_ADDR_INTERRUPT165         = 0x015E;
const unsigned IVT_ADDR_INTERRUPT166         = 0x0160;
const unsigned IVT_ADDR_INTERRUPT167         = 0x0162;
const unsigned IVT_ADDR_INTERRUPT168         = 0x0164;
const unsigned IVT_ADDR_INTERRUPT169         = 0x0166;
const unsigned IVT_ADDR_INTERRUPT170         = 0x0168;
const unsigned IVT_ADDR_INTERRUPT171         = 0x016A;
const unsigned IVT_ADDR_INTERRUPT172         = 0x016C;
const unsigned IVT_ADDR_I2C1BCINTERRUPT      = 0x016E;
const unsigned IVT_ADDR_I2C2BCINTERRUPT      = 0x0170;
const unsigned IVT_ADDR_INTERRUPT175         = 0x0172;
const unsigned IVT_ADDR_INTERRUPT176         = 0x0174;
const unsigned IVT_ADDR_ADCMP0INTERRUPT      = 0x0176;
const unsigned IVT_ADDR_ADCMP1INTERRUPT      = 0x0178;
const unsigned IVT_ADDR_ADFLTR0INTERRUPT     = 0x017A;
const unsigned IVT_ADDR_ADFLTR1INTERRUPT     = 0x017C;
const unsigned IVT_ADDR_INTERRUPT181         = 0x017E;
const unsigned IVT_ADDR_INTERRUPT182         = 0x0180;
const unsigned IVT_ADDR_INTERRUPT183         = 0x0182;
const unsigned IVT_ADDR_INTERRUPT184         = 0x0184;
const unsigned IVT_ADDR_INTERRUPT185         = 0x0186;
const unsigned IVT_ADDR_INTERRUPT186         = 0x0188;
const unsigned IVT_ADDR_ADCCORE0INTERRUPT    = 0x018A;
const unsigned IVT_ADDR_ADCCORE1INTERRUPT    = 0x018C;
const unsigned IVT_ADDR_ADCCORE2INTERRUPT    = 0x018E;
const unsigned IVT_ADDR_ADCCORE3INTERRUPT    = 0x0190;

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
const unsigned AIVT_ADDR_ALTDMA0INTERRUPT     = 0x081C;
const unsigned AIVT_ADDR_ALTIC2INTERRUPT      = 0x081E;
const unsigned AIVT_ADDR_ALTOC2INTERRUPT      = 0x0820;
const unsigned AIVT_ADDR_ALTT2INTERRUPT       = 0x0822;
const unsigned AIVT_ADDR_ALTT3INTERRUPT       = 0x0824;
const unsigned AIVT_ADDR_ALTSPI1TXINTERRUPT   = 0x0826;
const unsigned AIVT_ADDR_ALTSPI1RXINTERRUPT   = 0x0828;
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
const unsigned AIVT_ADDR_ALTSPI2TXINTERRUPT   = 0x0854;
const unsigned AIVT_ADDR_ALTSPI2RXINTERRUPT   = 0x0856;
const unsigned AIVT_ADDR_ALTC1RXINTERRUPT     = 0x0858;
const unsigned AIVT_ADDR_ALTC1INTERRUPT       = 0x085A;
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
const unsigned AIVT_ADDR_ALTSI2C2INTERRUPT    = 0x0876;
const unsigned AIVT_ADDR_ALTMI2C2INTERRUPT    = 0x0878;
const unsigned AIVT_ADDR_ALTINTERRUPT51       = 0x087A;
const unsigned AIVT_ADDR_ALTINTERRUPT52       = 0x087C;
const unsigned AIVT_ADDR_ALTINTERRUPT53       = 0x087E;
const unsigned AIVT_ADDR_ALTINT4INTERRUPT     = 0x0880;
const unsigned AIVT_ADDR_ALTC2RXINTERRUPT     = 0x0882;
const unsigned AIVT_ADDR_ALTC2INTERRUPT       = 0x0884;
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
const unsigned AIVT_ADDR_ALTC2TXINTERRUPT     = 0x08A2;
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
const unsigned AIVT_ADDR_ALTSPI3TXINTERRUPT   = 0x08C8;
const unsigned AIVT_ADDR_ALTSPI3RXINTERRUPT   = 0x08CA;
const unsigned AIVT_ADDR_ALTINTERRUPT92       = 0x08CC;
const unsigned AIVT_ADDR_ALTINTERRUPT93       = 0x08CE;
const unsigned AIVT_ADDR_ALTPWM1INTERRUPT     = 0x08D0;
const unsigned AIVT_ADDR_ALTPWM2INTERRUPT     = 0x08D2;
const unsigned AIVT_ADDR_ALTPWM3INTERRUPT     = 0x08D4;
const unsigned AIVT_ADDR_ALTPWM4INTERRUPT     = 0x08D6;
const unsigned AIVT_ADDR_ALTPWM5INTERRUPT     = 0x08D8;
const unsigned AIVT_ADDR_ALTPWM6INTERRUPT     = 0x08DA;
const unsigned AIVT_ADDR_ALTPWM7INTERRUPT     = 0x08DC;
const unsigned AIVT_ADDR_ALTPWM8INTERRUPT     = 0x08DE;
const unsigned AIVT_ADDR_ALTINTERRUPT102      = 0x08E0;
const unsigned AIVT_ADDR_ALTCMP2INTERRUPT     = 0x08E2;
const unsigned AIVT_ADDR_ALTCMP3INTERRUPT     = 0x08E4;
const unsigned AIVT_ADDR_ALTCMP4INTERRUPT     = 0x08E6;
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
const unsigned AIVT_ADDR_ALTSPI1GINTERRUPT    = 0x090C;
const unsigned AIVT_ADDR_ALTSPI2GINTERRUPT    = 0x090E;
const unsigned AIVT_ADDR_ALTSPI3GINTERRUPT    = 0x0910;
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
const unsigned AIVT_ADDR_ALTCLC1INTERRUPT     = 0x0928;
const unsigned AIVT_ADDR_ALTCLC2INTERRUPT     = 0x092A;
const unsigned AIVT_ADDR_ALTCLC3INTERRUPT     = 0x092C;
const unsigned AIVT_ADDR_ALTCLC4INTERRUPT     = 0x092E;
const unsigned AIVT_ADDR_ALTICDINTERRUPT      = 0x0930;
const unsigned AIVT_ADDR_ALTJTAGINTERRUPT     = 0x0932;
const unsigned AIVT_ADDR_ALTINTERRUPT144      = 0x0934;
const unsigned AIVT_ADDR_ALTPTGSTEPINTERRUPT  = 0x0936;
const unsigned AIVT_ADDR_ALTPTGWDTINTERRUPT   = 0x0938;
const unsigned AIVT_ADDR_ALTPTG0INTERRUPT     = 0x093A;
const unsigned AIVT_ADDR_ALTPTG1INTERRUPT     = 0x093C;
const unsigned AIVT_ADDR_ALTPTG2INTERRUPT     = 0x093E;
const unsigned AIVT_ADDR_ALTPTG3INTERRUPT     = 0x0940;
const unsigned AIVT_ADDR_ALTADCAN8INTERRUPT   = 0x0942;
const unsigned AIVT_ADDR_ALTADCAN9INTERRUPT   = 0x0944;
const unsigned AIVT_ADDR_ALTADCAN10INTERRUPT  = 0x0946;
const unsigned AIVT_ADDR_ALTADCAN11INTERRUPT  = 0x0948;
const unsigned AIVT_ADDR_ALTADCAN12INTERRUPT  = 0x094A;
const unsigned AIVT_ADDR_ALTADCAN13INTERRUPT  = 0x094C;
const unsigned AIVT_ADDR_ALTADCAN14INTERRUPT  = 0x094E;
const unsigned AIVT_ADDR_ALTADCAN15INTERRUPT  = 0x0950;
const unsigned AIVT_ADDR_ALTADCAN16INTERRUPT  = 0x0952;
const unsigned AIVT_ADDR_ALTADCAN17INTERRUPT  = 0x0954;
const unsigned AIVT_ADDR_ALTADCAN18INTERRUPT  = 0x0956;
const unsigned AIVT_ADDR_ALTADCAN19INTERRUPT  = 0x0958;
const unsigned AIVT_ADDR_ALTADCAN20INTERRUPT  = 0x095A;
const unsigned AIVT_ADDR_ALTADCAN21INTERRUPT  = 0x095C;
const unsigned AIVT_ADDR_ALTINTERRUPT165      = 0x095E;
const unsigned AIVT_ADDR_ALTINTERRUPT166      = 0x0960;
const unsigned AIVT_ADDR_ALTINTERRUPT167      = 0x0962;
const unsigned AIVT_ADDR_ALTINTERRUPT168      = 0x0964;
const unsigned AIVT_ADDR_ALTINTERRUPT169      = 0x0966;
const unsigned AIVT_ADDR_ALTINTERRUPT170      = 0x0968;
const unsigned AIVT_ADDR_ALTINTERRUPT171      = 0x096A;
const unsigned AIVT_ADDR_ALTINTERRUPT172      = 0x096C;
const unsigned AIVT_ADDR_ALTI2C1BCINTERRUPT   = 0x096E;
const unsigned AIVT_ADDR_ALTI2C2BCINTERRUPT   = 0x0970;
const unsigned AIVT_ADDR_ALTINTERRUPT175      = 0x0972;
const unsigned AIVT_ADDR_ALTINTERRUPT176      = 0x0974;
const unsigned AIVT_ADDR_ALTADCMP0INTERRUPT   = 0x0976;
const unsigned AIVT_ADDR_ALTADCMP1INTERRUPT   = 0x0978;
const unsigned AIVT_ADDR_ALTADFLTR0INTERRUPT  = 0x097A;
const unsigned AIVT_ADDR_ALTADFLTR1INTERRUPT  = 0x097C;
const unsigned AIVT_ADDR_ALTINTERRUPT181      = 0x097E;
const unsigned AIVT_ADDR_ALTINTERRUPT182      = 0x0980;
const unsigned AIVT_ADDR_ALTINTERRUPT183      = 0x0982;
const unsigned AIVT_ADDR_ALTINTERRUPT184      = 0x0984;
const unsigned AIVT_ADDR_ALTINTERRUPT185      = 0x0986;
const unsigned AIVT_ADDR_ALTINTERRUPT186      = 0x0988;
const unsigned AIVT_ADDR_ALTADCCORE0INTERRUPT = 0x098A;
const unsigned AIVT_ADDR_ALTADCCORE1INTERRUPT = 0x098C;
const unsigned AIVT_ADDR_ALTADCCORE2INTERRUPT = 0x098E;
const unsigned AIVT_ADDR_ALTADCCORE3INTERRUPT = 0x0990;

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
sfr unsigned int   volatile I2C2CON1         absolute 0x210;
sfr unsigned int   volatile I2C2CONL         absolute 0x210;
sfr unsigned int   volatile I2C2CON2         absolute 0x212;
sfr unsigned int   volatile I2C2CONH         absolute 0x212;
sfr unsigned int   volatile I2C2STAT         absolute 0x214;
    const register unsigned short int BCL_I2C2STAT = 10;
    sbit  BCL_I2C2STAT_bit at I2C2STAT.B10;

sfr unsigned int   volatile I2C2ADD          absolute 0x216;
sfr unsigned int   volatile I2C2MSK          absolute 0x218;
sfr unsigned int            I2C2BRG          absolute 0x21A;
sfr unsigned int   volatile I2C2TRN          absolute 0x21C;
sfr unsigned int   volatile I2C2RCV          absolute 0x21E;
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
sfr unsigned int   volatile SPI1CON1         absolute 0x240;
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

sfr unsigned int   volatile SPI1CON1L        absolute 0x240;
sfr unsigned int   volatile SPI1CON1H        absolute 0x242;
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

sfr unsigned int   volatile SPI1CON2         absolute 0x242;
sfr unsigned int   volatile SPI1CON2L        absolute 0x244;
sfr unsigned int   volatile SPI1CON3         absolute 0x244;
sfr unsigned int   volatile SPI1STATL        absolute 0x248;
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

sfr unsigned int   volatile SPI1STATH        absolute 0x24A;
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

sfr unsigned int   volatile SPI1BUFL         absolute 0x24C;
sfr unsigned int   volatile SPI1BUFH         absolute 0x24E;
sfr unsigned int   volatile SPI1BRGL         absolute 0x250;
sfr unsigned int   volatile SPI1BRGH         absolute 0x252;
sfr unsigned int   volatile SPI1IMSK1        absolute 0x254;
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

sfr unsigned int   volatile SPI1IMSKL        absolute 0x254;
sfr unsigned int   volatile SPI1IMSK2        absolute 0x256;
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

sfr unsigned int   volatile SPI1IMSKH        absolute 0x256;
sfr unsigned int   volatile SPI1URDTL        absolute 0x258;
sfr unsigned int   volatile SPI1URDTH        absolute 0x25A;
sfr unsigned int   volatile SPI2CON1         absolute 0x260;
sfr unsigned int   volatile SPI2CON1L        absolute 0x260;
sfr unsigned int   volatile SPI2CON1H        absolute 0x262;
sfr unsigned int   volatile SPI2CON2         absolute 0x262;
sfr unsigned int   volatile SPI2CON2L        absolute 0x264;
sfr unsigned int   volatile SPI2CON3         absolute 0x264;
sfr unsigned int   volatile SPI2CON2H        absolute 0x266;
sfr unsigned int   volatile SPI2CON4         absolute 0x266;
sfr unsigned int   volatile SPI2STATL        absolute 0x268;
sfr unsigned int   volatile SPI2STATH        absolute 0x26A;
sfr unsigned int   volatile SPI2BUFL         absolute 0x26C;
sfr unsigned int   volatile SPI2BUFH         absolute 0x26E;
sfr unsigned int   volatile SPI2BRGL         absolute 0x270;
sfr unsigned int   volatile SPI2BRGH         absolute 0x272;
sfr unsigned int   volatile SPI2IMSK1        absolute 0x274;
sfr unsigned int   volatile SPI2IMSKL        absolute 0x274;
sfr unsigned int   volatile SPI2IMSK2        absolute 0x276;
sfr unsigned int   volatile SPI2IMSKH        absolute 0x276;
sfr unsigned int   volatile SPI2URDTL        absolute 0x278;
sfr unsigned int   volatile SPI2URDTH        absolute 0x27A;
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
    const register unsigned short int C2EN = 2;
    sbit  C2EN_bit at ADCON3H.B2;
    const register unsigned short int C3EN = 3;
    sbit  C3EN_bit at ADCON3H.B3;
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
    const register unsigned short int SAMC2EN = 2;
    sbit  SAMC2EN_bit at ADCON4L.B2;
    const register unsigned short int SAMC3EN = 3;
    sbit  SAMC3EN_bit at ADCON4L.B3;
    const register unsigned short int SYNCTRG0 = 8;
    sbit  SYNCTRG0_bit at ADCON4L.B8;
    const register unsigned short int SYNCTRG1 = 9;
    sbit  SYNCTRG1_bit at ADCON4L.B9;
    const register unsigned short int SYNCTRG2 = 10;
    sbit  SYNCTRG2_bit at ADCON4L.B10;
    const register unsigned short int SYNCTRG3 = 11;
    sbit  SYNCTRG3_bit at ADCON4L.B11;

sfr unsigned int   volatile ADCON4H          absolute 0x30E;
    const register unsigned short int C0CHS0 = 0;
    sbit  C0CHS0_bit at ADCON4H.B0;
    const register unsigned short int C0CHS1 = 1;
    sbit  C0CHS1_bit at ADCON4H.B1;
    const register unsigned short int C1CHS0 = 2;
    sbit  C1CHS0_bit at ADCON4H.B2;
    const register unsigned short int C1CHS1 = 3;
    sbit  C1CHS1_bit at ADCON4H.B3;
    const register unsigned short int C2CHS0 = 4;
    sbit  C2CHS0_bit at ADCON4H.B4;
    const register unsigned short int C2CHS1 = 5;
    sbit  C2CHS1_bit at ADCON4H.B5;
    const register unsigned short int C3CHS0 = 6;
    sbit  C3CHS0_bit at ADCON4H.B6;
    const register unsigned short int C3CHS1 = 7;
    sbit  C3CHS1_bit at ADCON4H.B7;

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
    const register unsigned short int DIFF2 = 5;
    sbit  DIFF2_bit at ADMOD0L.B5;
    const register unsigned short int SIGN3 = 6;
    sbit  SIGN3_bit at ADMOD0L.B6;
    const register unsigned short int DIFF3 = 7;
    sbit  DIFF3_bit at ADMOD0L.B7;
    const register unsigned short int SIGN4 = 8;
    sbit  SIGN4_bit at ADMOD0L.B8;
    const register unsigned short int DIFF4 = 9;
    sbit  DIFF4_bit at ADMOD0L.B9;
    const register unsigned short int SIGN5 = 10;
    sbit  SIGN5_bit at ADMOD0L.B10;
    const register unsigned short int DIFF5 = 11;
    sbit  DIFF5_bit at ADMOD0L.B11;
    const register unsigned short int SIGN6 = 12;
    sbit  SIGN6_bit at ADMOD0L.B12;
    const register unsigned short int DIFF6 = 13;
    sbit  DIFF6_bit at ADMOD0L.B13;
    const register unsigned short int SIGN7 = 14;
    sbit  SIGN7_bit at ADMOD0L.B14;
    const register unsigned short int DIFF7 = 15;
    sbit  DIFF7_bit at ADMOD0L.B15;

sfr unsigned int   volatile ADMOD0H          absolute 0x312;
    const register unsigned short int SIGN8 = 0;
    sbit  SIGN8_bit at ADMOD0H.B0;
    const register unsigned short int DIFF8 = 1;
    sbit  DIFF8_bit at ADMOD0H.B1;
    const register unsigned short int SIGN9 = 2;
    sbit  SIGN9_bit at ADMOD0H.B2;
    const register unsigned short int DIFF9 = 3;
    sbit  DIFF9_bit at ADMOD0H.B3;
    const register unsigned short int SIGN10 = 4;
    sbit  SIGN10_bit at ADMOD0H.B4;
    const register unsigned short int DIFF10 = 5;
    sbit  DIFF10_bit at ADMOD0H.B5;
    const register unsigned short int SIGN11 = 6;
    sbit  SIGN11_bit at ADMOD0H.B6;
    const register unsigned short int DIFF11 = 7;
    sbit  DIFF11_bit at ADMOD0H.B7;
    const register unsigned short int SIGN12 = 8;
    sbit  SIGN12_bit at ADMOD0H.B8;
    const register unsigned short int DIFF12 = 9;
    sbit  DIFF12_bit at ADMOD0H.B9;
    const register unsigned short int SIGN13 = 10;
    sbit  SIGN13_bit at ADMOD0H.B10;
    const register unsigned short int DIFF13 = 11;
    sbit  DIFF13_bit at ADMOD0H.B11;
    const register unsigned short int SIGN14 = 12;
    sbit  SIGN14_bit at ADMOD0H.B12;
    const register unsigned short int DIFF14 = 13;
    sbit  DIFF14_bit at ADMOD0H.B13;
    const register unsigned short int SIGN15 = 14;
    sbit  SIGN15_bit at ADMOD0H.B14;
    const register unsigned short int DIFF15 = 15;
    sbit  DIFF15_bit at ADMOD0H.B15;

sfr unsigned int   volatile ADMOD1L          absolute 0x314;
    const register unsigned short int SIGN16 = 0;
    sbit  SIGN16_bit at ADMOD1L.B0;
    const register unsigned short int DIFF16 = 1;
    sbit  DIFF16_bit at ADMOD1L.B1;
    const register unsigned short int SIGN17 = 2;
    sbit  SIGN17_bit at ADMOD1L.B2;
    const register unsigned short int DIFF17 = 3;
    sbit  DIFF17_bit at ADMOD1L.B3;
    const register unsigned short int SIGN18 = 4;
    sbit  SIGN18_bit at ADMOD1L.B4;
    const register unsigned short int DIFF18 = 5;
    sbit  DIFF18_bit at ADMOD1L.B5;
    const register unsigned short int SIGN19 = 6;
    sbit  SIGN19_bit at ADMOD1L.B6;
    const register unsigned short int DIFF19 = 7;
    sbit  DIFF19_bit at ADMOD1L.B7;
    const register unsigned short int SIGN20 = 8;
    sbit  SIGN20_bit at ADMOD1L.B8;
    const register unsigned short int DIFF20 = 9;
    sbit  DIFF20_bit at ADMOD1L.B9;
    const register unsigned short int SIGN21 = 10;
    sbit  SIGN21_bit at ADMOD1L.B10;
    const register unsigned short int DIFF21 = 11;
    sbit  DIFF21_bit at ADMOD1L.B11;

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
    const register unsigned short int IE12 = 12;
    sbit  IE12_bit at ADIEL.B12;
    const register unsigned short int IE13 = 13;
    sbit  IE13_bit at ADIEL.B13;
    const register unsigned short int IE14 = 14;
    sbit  IE14_bit at ADIEL.B14;
    const register unsigned short int IE15 = 15;
    sbit  IE15_bit at ADIEL.B15;

sfr unsigned int   volatile ADIEH            absolute 0x322;
    const register unsigned short int IE16 = 0;
    sbit  IE16_bit at ADIEH.B0;
    const register unsigned short int IE17 = 1;
    sbit  IE17_bit at ADIEH.B1;
    const register unsigned short int IE18 = 2;
    sbit  IE18_bit at ADIEH.B2;
    const register unsigned short int IE19 = 3;
    sbit  IE19_bit at ADIEH.B3;
    const register unsigned short int IE20 = 4;
    sbit  IE20_bit at ADIEH.B4;
    const register unsigned short int IE21 = 5;
    sbit  IE21_bit at ADIEH.B5;

sfr unsigned int   volatile ADCSSL           absolute 0x328;
    const register unsigned short int CSS0 = 0;
    sbit  CSS0_bit at ADCSSL.B0;
    const register unsigned short int CSS1 = 1;
    sbit  CSS1_bit at ADCSSL.B1;
    const register unsigned short int CSS2 = 2;
    sbit  CSS2_bit at ADCSSL.B2;
    const register unsigned short int CSS3 = 3;
    sbit  CSS3_bit at ADCSSL.B3;
    const register unsigned short int CSS4 = 4;
    sbit  CSS4_bit at ADCSSL.B4;
    const register unsigned short int CSS5 = 5;
    sbit  CSS5_bit at ADCSSL.B5;
    const register unsigned short int CSS6 = 6;
    sbit  CSS6_bit at ADCSSL.B6;
    const register unsigned short int CSS7 = 7;
    sbit  CSS7_bit at ADCSSL.B7;
    const register unsigned short int CSS8 = 8;
    sbit  CSS8_bit at ADCSSL.B8;
    const register unsigned short int CSS9 = 9;
    sbit  CSS9_bit at ADCSSL.B9;
    const register unsigned short int CSS10 = 10;
    sbit  CSS10_bit at ADCSSL.B10;
    const register unsigned short int CSS11 = 11;
    sbit  CSS11_bit at ADCSSL.B11;
    const register unsigned short int CSS12 = 12;
    sbit  CSS12_bit at ADCSSL.B12;
    const register unsigned short int CSS13 = 13;
    sbit  CSS13_bit at ADCSSL.B13;
    const register unsigned short int CSS14 = 14;
    sbit  CSS14_bit at ADCSSL.B14;
    const register unsigned short int CSS15 = 15;
    sbit  CSS15_bit at ADCSSL.B15;

sfr unsigned int   volatile ADCSSH           absolute 0x32A;
    const register unsigned short int CSS16 = 0;
    sbit  CSS16_bit at ADCSSH.B0;
    const register unsigned short int CSS17 = 1;
    sbit  CSS17_bit at ADCSSH.B1;
    const register unsigned short int CSS18 = 2;
    sbit  CSS18_bit at ADCSSH.B2;
    const register unsigned short int CSS19 = 3;
    sbit  CSS19_bit at ADCSSH.B3;
    const register unsigned short int CSS20 = 4;
    sbit  CSS20_bit at ADCSSH.B4;
    const register unsigned short int CSS21 = 5;
    sbit  CSS21_bit at ADCSSH.B5;

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
    const register unsigned short int AN12RDY = 12;
    sbit  AN12RDY_bit at ADSTATL.B12;
    const register unsigned short int AN13RDY = 13;
    sbit  AN13RDY_bit at ADSTATL.B13;
    const register unsigned short int AN14RDY = 14;
    sbit  AN14RDY_bit at ADSTATL.B14;
    const register unsigned short int AN15RDY = 15;
    sbit  AN15RDY_bit at ADSTATL.B15;

sfr unsigned int   volatile ADSTATH          absolute 0x332;
    const register unsigned short int AN16RDY = 0;
    sbit  AN16RDY_bit at ADSTATH.B0;
    const register unsigned short int AN17RDY = 1;
    sbit  AN17RDY_bit at ADSTATH.B1;
    const register unsigned short int AN18RDY = 2;
    sbit  AN18RDY_bit at ADSTATH.B2;
    const register unsigned short int AN19RDY = 3;
    sbit  AN19RDY_bit at ADSTATH.B3;
    const register unsigned short int AN20RDY = 4;
    sbit  AN20RDY_bit at ADSTATH.B4;
    const register unsigned short int AN21RDY = 5;
    sbit  AN21RDY_bit at ADSTATH.B5;

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
    const register unsigned short int CMPEN12 = 12;
    sbit  CMPEN12_bit at ADCMP0ENL.B12;
    const register unsigned short int CMPEN13 = 13;
    sbit  CMPEN13_bit at ADCMP0ENL.B13;
    const register unsigned short int CMPEN14 = 14;
    sbit  CMPEN14_bit at ADCMP0ENL.B14;
    const register unsigned short int CMPEN15 = 15;
    sbit  CMPEN15_bit at ADCMP0ENL.B15;

sfr unsigned int   volatile ADCMP0ENH        absolute 0x33A;
    const register unsigned short int CMPEN16 = 0;
    sbit  CMPEN16_bit at ADCMP0ENH.B0;
    const register unsigned short int CMPEN17 = 1;
    sbit  CMPEN17_bit at ADCMP0ENH.B1;
    const register unsigned short int CMPEN18 = 2;
    sbit  CMPEN18_bit at ADCMP0ENH.B2;
    const register unsigned short int CMPEN19 = 3;
    sbit  CMPEN19_bit at ADCMP0ENH.B3;
    const register unsigned short int CMPEN20 = 4;
    sbit  CMPEN20_bit at ADCMP0ENH.B4;
    const register unsigned short int CMPEN21 = 5;
    sbit  CMPEN21_bit at ADCMP0ENH.B5;

sfr unsigned int   volatile ADCMP0LO         absolute 0x33C;
sfr unsigned int   volatile ADCMP0HI         absolute 0x33E;
sfr unsigned int   volatile ADCMP1ENL        absolute 0x340;
sfr unsigned int   volatile ADCMP1ENH        absolute 0x342;
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

sfr unsigned int   volatile ADFL1DAT         absolute 0x36C;
sfr unsigned int   volatile ADFL1CON         absolute 0x36E;
    const register unsigned short int IE_ADFL1CON = 9;
    sbit  IE_ADFL1CON_bit at ADFL1CON.B9;

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
    const register unsigned short int TRGSRC12_ADTRIG0L = 10;
    sbit  TRGSRC12_ADTRIG0L_bit at ADTRIG0L.B10;
    const register unsigned short int TRGSRC13_ADTRIG0L = 11;
    sbit  TRGSRC13_ADTRIG0L_bit at ADTRIG0L.B11;
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
    const register unsigned short int TRIGSRC120 = 0;
    sbit  TRIGSRC120_bit at ADTRIG3L.B0;
    const register unsigned short int TRIGSRC121 = 1;
    sbit  TRIGSRC121_bit at ADTRIG3L.B1;
    const register unsigned short int TRIGSRC122 = 2;
    sbit  TRIGSRC122_bit at ADTRIG3L.B2;
    const register unsigned short int TRIGSRC123 = 3;
    sbit  TRIGSRC123_bit at ADTRIG3L.B3;
    const register unsigned short int TRIGSRC124 = 4;
    sbit  TRIGSRC124_bit at ADTRIG3L.B4;
    const register unsigned short int TRGSRC130 = 8;
    sbit  TRGSRC130_bit at ADTRIG3L.B8;
    const register unsigned short int TRGSRC131 = 9;
    sbit  TRGSRC131_bit at ADTRIG3L.B9;
    const register unsigned short int TRGSRC132 = 10;
    sbit  TRGSRC132_bit at ADTRIG3L.B10;
    const register unsigned short int TRGSRC133 = 11;
    sbit  TRGSRC133_bit at ADTRIG3L.B11;
    const register unsigned short int TRGSRC134 = 12;
    sbit  TRGSRC134_bit at ADTRIG3L.B12;

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
    const register unsigned short int TRGSRC150 = 8;
    sbit  TRGSRC150_bit at ADTRIG3H.B8;
    const register unsigned short int TRGSRC151 = 9;
    sbit  TRGSRC151_bit at ADTRIG3H.B9;
    const register unsigned short int TRGSRC152 = 10;
    sbit  TRGSRC152_bit at ADTRIG3H.B10;
    const register unsigned short int TRGSRC153 = 11;
    sbit  TRGSRC153_bit at ADTRIG3H.B11;
    const register unsigned short int TRGSRC154 = 12;
    sbit  TRGSRC154_bit at ADTRIG3H.B12;

sfr unsigned int   volatile ADTRIG4L         absolute 0x390;
    const register unsigned short int TRIGSRC160 = 0;
    sbit  TRIGSRC160_bit at ADTRIG4L.B0;
    const register unsigned short int TRIGSRC161 = 1;
    sbit  TRIGSRC161_bit at ADTRIG4L.B1;
    const register unsigned short int TRIGSRC162 = 2;
    sbit  TRIGSRC162_bit at ADTRIG4L.B2;
    const register unsigned short int TRIGSRC163 = 3;
    sbit  TRIGSRC163_bit at ADTRIG4L.B3;
    const register unsigned short int TRIGSRC164 = 4;
    sbit  TRIGSRC164_bit at ADTRIG4L.B4;
    const register unsigned short int TRGSRC170 = 8;
    sbit  TRGSRC170_bit at ADTRIG4L.B8;
    const register unsigned short int TRGSRC171 = 9;
    sbit  TRGSRC171_bit at ADTRIG4L.B9;
    const register unsigned short int TRGSRC172 = 10;
    sbit  TRGSRC172_bit at ADTRIG4L.B10;
    const register unsigned short int TRGSRC173 = 11;
    sbit  TRGSRC173_bit at ADTRIG4L.B11;
    const register unsigned short int TRGSRC174 = 12;
    sbit  TRGSRC174_bit at ADTRIG4L.B12;

sfr unsigned int   volatile ADTRIG4H         absolute 0x392;
    const register unsigned short int TRIGSRC180 = 0;
    sbit  TRIGSRC180_bit at ADTRIG4H.B0;
    const register unsigned short int TRIGSRC181 = 1;
    sbit  TRIGSRC181_bit at ADTRIG4H.B1;
    const register unsigned short int TRIGSRC182 = 2;
    sbit  TRIGSRC182_bit at ADTRIG4H.B2;
    const register unsigned short int TRIGSRC183 = 3;
    sbit  TRIGSRC183_bit at ADTRIG4H.B3;
    const register unsigned short int TRIGSRC184 = 4;
    sbit  TRIGSRC184_bit at ADTRIG4H.B4;
    const register unsigned short int TRGSRC190 = 8;
    sbit  TRGSRC190_bit at ADTRIG4H.B8;
    const register unsigned short int TRGSRC191 = 9;
    sbit  TRGSRC191_bit at ADTRIG4H.B9;
    const register unsigned short int TRGSRC192 = 10;
    sbit  TRGSRC192_bit at ADTRIG4H.B10;
    const register unsigned short int TRGSRC193 = 11;
    sbit  TRGSRC193_bit at ADTRIG4H.B11;
    const register unsigned short int TRGSRC194 = 12;
    sbit  TRGSRC194_bit at ADTRIG4H.B12;

sfr unsigned int   volatile ADTRIG5L         absolute 0x394;
    const register unsigned short int TRIGSRC200 = 0;
    sbit  TRIGSRC200_bit at ADTRIG5L.B0;
    const register unsigned short int TRIGSRC201 = 1;
    sbit  TRIGSRC201_bit at ADTRIG5L.B1;
    const register unsigned short int TRIGSRC202 = 2;
    sbit  TRIGSRC202_bit at ADTRIG5L.B2;
    const register unsigned short int TRIGSRC203 = 3;
    sbit  TRIGSRC203_bit at ADTRIG5L.B3;
    const register unsigned short int TRIGSRC204 = 4;
    sbit  TRIGSRC204_bit at ADTRIG5L.B4;
    const register unsigned short int TRGSRC210 = 8;
    sbit  TRGSRC210_bit at ADTRIG5L.B8;
    const register unsigned short int TRGSRC211 = 9;
    sbit  TRGSRC211_bit at ADTRIG5L.B9;
    const register unsigned short int TRGSRC212 = 10;
    sbit  TRGSRC212_bit at ADTRIG5L.B10;
    const register unsigned short int TRGSRC213 = 11;
    sbit  TRGSRC213_bit at ADTRIG5L.B11;
    const register unsigned short int TRGSRC214 = 12;
    sbit  TRGSRC214_bit at ADTRIG5L.B12;

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

sfr unsigned int   volatile ADBASE           absolute 0x3C0;
    const register unsigned short int CHOFFSET0 = 0;
    sbit  CHOFFSET0_bit at ADBASE.B0;
    const register unsigned short int CHOFFSET1 = 1;
    sbit  CHOFFSET1_bit at ADBASE.B1;
    const register unsigned short int CHOFFSET2 = 2;
    sbit  CHOFFSET2_bit at ADBASE.B2;
    const register unsigned short int CHOFFSET3 = 3;
    sbit  CHOFFSET3_bit at ADBASE.B3;
    const register unsigned short int CHOFFSET4 = 4;
    sbit  CHOFFSET4_bit at ADBASE.B4;
    const register unsigned short int CHOFFSET5 = 5;
    sbit  CHOFFSET5_bit at ADBASE.B5;
    const register unsigned short int CHOFFSET6 = 6;
    sbit  CHOFFSET6_bit at ADBASE.B6;
    const register unsigned short int CHOFFSET7 = 7;
    sbit  CHOFFSET7_bit at ADBASE.B7;
    const register unsigned short int CHOFFSET8 = 8;
    sbit  CHOFFSET8_bit at ADBASE.B8;
    const register unsigned short int CHOFFSET9 = 9;
    sbit  CHOFFSET9_bit at ADBASE.B9;
    const register unsigned short int CHOFFSET10 = 10;
    sbit  CHOFFSET10_bit at ADBASE.B10;
    const register unsigned short int CHOFFSET11 = 11;
    sbit  CHOFFSET11_bit at ADBASE.B11;
    const register unsigned short int CHOFFSET12 = 12;
    sbit  CHOFFSET12_bit at ADBASE.B12;
    const register unsigned short int CHOFFSET13 = 13;
    sbit  CHOFFSET13_bit at ADBASE.B13;
    const register unsigned short int CHOFFSET14 = 14;
    sbit  CHOFFSET14_bit at ADBASE.B14;
    const register unsigned short int CHOFFSET15 = 15;
    sbit  CHOFFSET15_bit at ADBASE.B15;

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
    const register unsigned short int LVLEN12 = 12;
    sbit  LVLEN12_bit at ADLVLTRGL.B12;
    const register unsigned short int LVLEN13 = 13;
    sbit  LVLEN13_bit at ADLVLTRGL.B13;
    const register unsigned short int LVLEN14 = 14;
    sbit  LVLEN14_bit at ADLVLTRGL.B14;
    const register unsigned short int LVLEN15 = 15;
    sbit  LVLEN15_bit at ADLVLTRGL.B15;

sfr unsigned int   volatile ADLVLTRGH        absolute 0x3D2;
    const register unsigned short int LVLEN16 = 0;
    sbit  LVLEN16_bit at ADLVLTRGH.B0;
    const register unsigned short int LVLEN17 = 1;
    sbit  LVLEN17_bit at ADLVLTRGH.B1;
    const register unsigned short int LVLEN18 = 2;
    sbit  LVLEN18_bit at ADLVLTRGH.B2;
    const register unsigned short int LVLEN19 = 3;
    sbit  LVLEN19_bit at ADLVLTRGH.B3;
    const register unsigned short int LVLEN20 = 4;
    sbit  LVLEN20_bit at ADLVLTRGH.B4;
    const register unsigned short int LVLEN21 = 5;
    sbit  LVLEN21_bit at ADLVLTRGH.B5;

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
sfr unsigned int   volatile ADCORE2L         absolute 0x3DC;
sfr unsigned int   volatile ADCORE2H         absolute 0x3DE;
sfr unsigned int   volatile ADCORE3L         absolute 0x3E0;
sfr unsigned int   volatile ADCORE3H         absolute 0x3E2;
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
    const register unsigned short int EIEN12 = 12;
    sbit  EIEN12_bit at ADEIEL.B12;
    const register unsigned short int EIEN13 = 13;
    sbit  EIEN13_bit at ADEIEL.B13;
    const register unsigned short int EIEN14 = 14;
    sbit  EIEN14_bit at ADEIEL.B14;
    const register unsigned short int EIEN15 = 15;
    sbit  EIEN15_bit at ADEIEL.B15;

sfr unsigned int   volatile ADEIEH           absolute 0x3F2;
    const register unsigned short int EIEN16 = 0;
    sbit  EIEN16_bit at ADEIEH.B0;
    const register unsigned short int EIEN17 = 1;
    sbit  EIEN17_bit at ADEIEH.B1;
    const register unsigned short int EIEN18 = 2;
    sbit  EIEN18_bit at ADEIEH.B2;
    const register unsigned short int EIEN19 = 3;
    sbit  EIEN19_bit at ADEIEH.B3;
    const register unsigned short int EIEN20 = 4;
    sbit  EIEN20_bit at ADEIEH.B4;
    const register unsigned short int EIEN21 = 5;
    sbit  EIEN21_bit at ADEIEH.B5;

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
    const register unsigned short int EISTAT12 = 12;
    sbit  EISTAT12_bit at ADEISTATL.B12;
    const register unsigned short int EISTAT13 = 13;
    sbit  EISTAT13_bit at ADEISTATL.B13;
    const register unsigned short int EISTAT14 = 14;
    sbit  EISTAT14_bit at ADEISTATL.B14;
    const register unsigned short int EISTAT15 = 15;
    sbit  EISTAT15_bit at ADEISTATL.B15;

sfr unsigned int   volatile ADEISTATH        absolute 0x3FA;
    const register unsigned short int EISTAT16 = 0;
    sbit  EISTAT16_bit at ADEISTATH.B0;
    const register unsigned short int EISTAT17 = 1;
    sbit  EISTAT17_bit at ADEISTATH.B1;
    const register unsigned short int EISTAT18 = 2;
    sbit  EISTAT18_bit at ADEISTATH.B2;
    const register unsigned short int EISTAT19 = 3;
    sbit  EISTAT19_bit at ADEISTATH.B3;
    const register unsigned short int EISTAT20 = 4;
    sbit  EISTAT20_bit at ADEISTATH.B4;
    const register unsigned short int EISTAT21 = 5;
    sbit  EISTAT21_bit at ADEISTATH.B5;

sfr unsigned int   volatile ADCON5L          absolute 0x400;
    const register unsigned short int C0PWR = 0;
    sbit  C0PWR_bit at ADCON5L.B0;
    const register unsigned short int C1PWR = 1;
    sbit  C1PWR_bit at ADCON5L.B1;
    const register unsigned short int C2PWR = 2;
    sbit  C2PWR_bit at ADCON5L.B2;
    const register unsigned short int C3PWR = 3;
    sbit  C3PWR_bit at ADCON5L.B3;
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

sfr unsigned int   volatile ADCAL0H          absolute 0x406;
    const register unsigned short int CAL2RUN = 0;
    sbit  CAL2RUN_bit at ADCAL0H.B0;
    const register unsigned short int CAL2EN = 1;
    sbit  CAL2EN_bit at ADCAL0H.B1;
    const register unsigned short int CAL2DIFF = 2;
    sbit  CAL2DIFF_bit at ADCAL0H.B2;
    const register unsigned short int CAL2SKIP = 3;
    sbit  CAL2SKIP_bit at ADCAL0H.B3;
    const register unsigned short int CAL2RDY = 7;
    sbit  CAL2RDY_bit at ADCAL0H.B7;
    const register unsigned short int CAL3RUN = 8;
    sbit  CAL3RUN_bit at ADCAL0H.B8;
    const register unsigned short int CAL3EN = 9;
    sbit  CAL3EN_bit at ADCAL0H.B9;
    const register unsigned short int CAL3DIFF = 10;
    sbit  CAL3DIFF_bit at ADCAL0H.B10;
    const register unsigned short int CAL3SKIP = 11;
    sbit  CAL3SKIP_bit at ADCAL0H.B11;
    const register unsigned short int CAL3RDY = 15;
    sbit  CAL3RDY_bit at ADCAL0H.B15;

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
sfr unsigned int   volatile ADCBUF15         absolute 0x42A;
sfr unsigned int   volatile ADCBUF16         absolute 0x42C;
sfr unsigned int   volatile ADCBUF17         absolute 0x42E;
sfr unsigned int   volatile ADCBUF18         absolute 0x430;
sfr unsigned int   volatile ADCBUF19         absolute 0x432;
sfr unsigned int   volatile ADCBUF20         absolute 0x434;
sfr unsigned int   volatile ADCBUF21         absolute 0x436;
sfr unsigned int   volatile C1CTRL1          absolute 0x480;
    const register unsigned short int WIN = 0;
    sbit  WIN_bit at C1CTRL1.B0;
    const register unsigned short int CANCAP = 3;
    sbit  CANCAP_bit at C1CTRL1.B3;
    const register unsigned short int OPMODE0 = 5;
    sbit  OPMODE0_bit at C1CTRL1.B5;
    const register unsigned short int OPMODE1 = 6;
    sbit  OPMODE1_bit at C1CTRL1.B6;
    const register unsigned short int OPMODE2 = 7;
    sbit  OPMODE2_bit at C1CTRL1.B7;
    const register unsigned short int REQOP0 = 8;
    sbit  REQOP0_bit at C1CTRL1.B8;
    const register unsigned short int REQOP1 = 9;
    sbit  REQOP1_bit at C1CTRL1.B9;
    const register unsigned short int REQOP2 = 10;
    sbit  REQOP2_bit at C1CTRL1.B10;
    const register unsigned short int CANCKS = 11;
    sbit  CANCKS_bit at C1CTRL1.B11;
    const register unsigned short int ABAT = 12;
    sbit  ABAT_bit at C1CTRL1.B12;
    const register unsigned short int CSIDL = 13;
    sbit  CSIDL_bit at C1CTRL1.B13;

sfr unsigned int   volatile C1CTRL2          absolute 0x482;
    const register unsigned short int DNCNT0 = 0;
    sbit  DNCNT0_bit at C1CTRL2.B0;
    const register unsigned short int DNCNT1 = 1;
    sbit  DNCNT1_bit at C1CTRL2.B1;
    const register unsigned short int DNCNT2 = 2;
    sbit  DNCNT2_bit at C1CTRL2.B2;
    const register unsigned short int DNCNT3 = 3;
    sbit  DNCNT3_bit at C1CTRL2.B3;
    const register unsigned short int DNCNT4 = 4;
    sbit  DNCNT4_bit at C1CTRL2.B4;

sfr unsigned int   volatile C1VEC            absolute 0x484;
    const register unsigned short int ICODE0 = 0;
    sbit  ICODE0_bit at C1VEC.B0;
    const register unsigned short int ICODE1 = 1;
    sbit  ICODE1_bit at C1VEC.B1;
    const register unsigned short int ICODE2 = 2;
    sbit  ICODE2_bit at C1VEC.B2;
    const register unsigned short int ICODE3 = 3;
    sbit  ICODE3_bit at C1VEC.B3;
    const register unsigned short int ICODE4 = 4;
    sbit  ICODE4_bit at C1VEC.B4;
    const register unsigned short int ICODE5 = 5;
    sbit  ICODE5_bit at C1VEC.B5;
    const register unsigned short int ICODE6 = 6;
    sbit  ICODE6_bit at C1VEC.B6;
    const register unsigned short int FILHIT0 = 8;
    sbit  FILHIT0_bit at C1VEC.B8;
    const register unsigned short int FILHIT1 = 9;
    sbit  FILHIT1_bit at C1VEC.B9;
    const register unsigned short int FILHIT2 = 10;
    sbit  FILHIT2_bit at C1VEC.B10;
    const register unsigned short int FILHIT3 = 11;
    sbit  FILHIT3_bit at C1VEC.B11;
    const register unsigned short int FILHIT4 = 12;
    sbit  FILHIT4_bit at C1VEC.B12;

sfr unsigned int   volatile C1FCTRL          absolute 0x486;
    const register unsigned short int FSA0 = 0;
    sbit  FSA0_bit at C1FCTRL.B0;
    const register unsigned short int FSA1 = 1;
    sbit  FSA1_bit at C1FCTRL.B1;
    const register unsigned short int FSA2 = 2;
    sbit  FSA2_bit at C1FCTRL.B2;
    const register unsigned short int FSA3 = 3;
    sbit  FSA3_bit at C1FCTRL.B3;
    const register unsigned short int FSA4 = 4;
    sbit  FSA4_bit at C1FCTRL.B4;
    const register unsigned short int DMABS0 = 13;
    sbit  DMABS0_bit at C1FCTRL.B13;
    const register unsigned short int DMABS1 = 14;
    sbit  DMABS1_bit at C1FCTRL.B14;
    const register unsigned short int DMABS2 = 15;
    sbit  DMABS2_bit at C1FCTRL.B15;

sfr unsigned int   volatile C1FIFO           absolute 0x488;
    const register unsigned short int FNRB0 = 0;
    sbit  FNRB0_bit at C1FIFO.B0;
    const register unsigned short int FNRB1 = 1;
    sbit  FNRB1_bit at C1FIFO.B1;
    const register unsigned short int FNRB2 = 2;
    sbit  FNRB2_bit at C1FIFO.B2;
    const register unsigned short int FNRB3 = 3;
    sbit  FNRB3_bit at C1FIFO.B3;
    const register unsigned short int FNRB4 = 4;
    sbit  FNRB4_bit at C1FIFO.B4;
    const register unsigned short int FNRB5 = 5;
    sbit  FNRB5_bit at C1FIFO.B5;
    const register unsigned short int FBP0 = 8;
    sbit  FBP0_bit at C1FIFO.B8;
    const register unsigned short int FBP1 = 9;
    sbit  FBP1_bit at C1FIFO.B9;
    const register unsigned short int FBP2 = 10;
    sbit  FBP2_bit at C1FIFO.B10;
    const register unsigned short int FBP3 = 11;
    sbit  FBP3_bit at C1FIFO.B11;
    const register unsigned short int FBP4 = 12;
    sbit  FBP4_bit at C1FIFO.B12;
    const register unsigned short int FBP5 = 13;
    sbit  FBP5_bit at C1FIFO.B13;

sfr unsigned int   volatile C1INTF           absolute 0x48A;
    const register unsigned short int TBIF = 0;
    sbit  TBIF_bit at C1INTF.B0;
    const register unsigned short int RBIF = 1;
    sbit  RBIF_bit at C1INTF.B1;
    const register unsigned short int RBOVIF = 2;
    sbit  RBOVIF_bit at C1INTF.B2;
    const register unsigned short int FIFOIF = 3;
    sbit  FIFOIF_bit at C1INTF.B3;
    const register unsigned short int ERRIF = 5;
    sbit  ERRIF_bit at C1INTF.B5;
    const register unsigned short int WAKIF = 6;
    sbit  WAKIF_bit at C1INTF.B6;
    const register unsigned short int IVRIF = 7;
    sbit  IVRIF_bit at C1INTF.B7;
    const register unsigned short int EWARN = 8;
    sbit  EWARN_bit at C1INTF.B8;
    const register unsigned short int RXWAR = 9;
    sbit  RXWAR_bit at C1INTF.B9;
    const register unsigned short int TXWAR = 10;
    sbit  TXWAR_bit at C1INTF.B10;
    const register unsigned short int RXBP = 11;
    sbit  RXBP_bit at C1INTF.B11;
    const register unsigned short int TXBP = 12;
    sbit  TXBP_bit at C1INTF.B12;
    const register unsigned short int TXBO = 13;
    sbit  TXBO_bit at C1INTF.B13;

sfr unsigned int   volatile C1INTE           absolute 0x48C;
    const register unsigned short int TBIE = 0;
    sbit  TBIE_bit at C1INTE.B0;
    const register unsigned short int RBIE = 1;
    sbit  RBIE_bit at C1INTE.B1;
    const register unsigned short int RBOVIE = 2;
    sbit  RBOVIE_bit at C1INTE.B2;
    const register unsigned short int FIFOIE = 3;
    sbit  FIFOIE_bit at C1INTE.B3;
    const register unsigned short int ERRIE = 5;
    sbit  ERRIE_bit at C1INTE.B5;
    const register unsigned short int WAKIE = 6;
    sbit  WAKIE_bit at C1INTE.B6;
    const register unsigned short int IVRIE = 7;
    sbit  IVRIE_bit at C1INTE.B7;

sfr unsigned int   volatile C1EC             absolute 0x48E;
sfr unsigned int   volatile C1RERRCNT        absolute 0x48E;
sfr unsigned short volatile C1TERRCNT        absolute 0x48F;
sfr unsigned int   volatile C1CFG1           absolute 0x490;
    const register unsigned short int BRP0 = 0;
    sbit  BRP0_bit at C1CFG1.B0;
    const register unsigned short int BRP1 = 1;
    sbit  BRP1_bit at C1CFG1.B1;
    const register unsigned short int BRP2 = 2;
    sbit  BRP2_bit at C1CFG1.B2;
    const register unsigned short int BRP3 = 3;
    sbit  BRP3_bit at C1CFG1.B3;
    const register unsigned short int BRP4 = 4;
    sbit  BRP4_bit at C1CFG1.B4;
    const register unsigned short int BRP5 = 5;
    sbit  BRP5_bit at C1CFG1.B5;
    const register unsigned short int SJW0 = 6;
    sbit  SJW0_bit at C1CFG1.B6;
    const register unsigned short int SJW1 = 7;
    sbit  SJW1_bit at C1CFG1.B7;

sfr unsigned int   volatile C1CFG2           absolute 0x492;
    const register unsigned short int PRSEG0 = 0;
    sbit  PRSEG0_bit at C1CFG2.B0;
    const register unsigned short int PRSEG1 = 1;
    sbit  PRSEG1_bit at C1CFG2.B1;
    const register unsigned short int PRSEG2 = 2;
    sbit  PRSEG2_bit at C1CFG2.B2;
    const register unsigned short int SEG1PH0 = 3;
    sbit  SEG1PH0_bit at C1CFG2.B3;
    const register unsigned short int SEG1PH1 = 4;
    sbit  SEG1PH1_bit at C1CFG2.B4;
    const register unsigned short int SEG1PH2 = 5;
    sbit  SEG1PH2_bit at C1CFG2.B5;
    const register unsigned short int SAM = 6;
    sbit  SAM_bit at C1CFG2.B6;
    const register unsigned short int SEG2PHTS = 7;
    sbit  SEG2PHTS_bit at C1CFG2.B7;
    const register unsigned short int SEG2PH0 = 8;
    sbit  SEG2PH0_bit at C1CFG2.B8;
    const register unsigned short int SEG2PH1 = 9;
    sbit  SEG2PH1_bit at C1CFG2.B9;
    const register unsigned short int SEG2PH2 = 10;
    sbit  SEG2PH2_bit at C1CFG2.B10;
    const register unsigned short int WAKFIL = 14;
    sbit  WAKFIL_bit at C1CFG2.B14;

sfr unsigned int   volatile C1FEN1           absolute 0x494;
    const register unsigned short int FLTEN0 = 0;
    sbit  FLTEN0_bit at C1FEN1.B0;
    const register unsigned short int FLTEN1 = 1;
    sbit  FLTEN1_bit at C1FEN1.B1;
    const register unsigned short int FLTEN2 = 2;
    sbit  FLTEN2_bit at C1FEN1.B2;
    const register unsigned short int FLTEN3 = 3;
    sbit  FLTEN3_bit at C1FEN1.B3;
    const register unsigned short int FLTEN4 = 4;
    sbit  FLTEN4_bit at C1FEN1.B4;
    const register unsigned short int FLTEN5 = 5;
    sbit  FLTEN5_bit at C1FEN1.B5;
    const register unsigned short int FLTEN6 = 6;
    sbit  FLTEN6_bit at C1FEN1.B6;
    const register unsigned short int FLTEN7 = 7;
    sbit  FLTEN7_bit at C1FEN1.B7;
    const register unsigned short int FLTEN8 = 8;
    sbit  FLTEN8_bit at C1FEN1.B8;
    const register unsigned short int FLTEN9 = 9;
    sbit  FLTEN9_bit at C1FEN1.B9;
    const register unsigned short int FLTEN10 = 10;
    sbit  FLTEN10_bit at C1FEN1.B10;
    const register unsigned short int FLTEN11 = 11;
    sbit  FLTEN11_bit at C1FEN1.B11;
    const register unsigned short int FLTEN12 = 12;
    sbit  FLTEN12_bit at C1FEN1.B12;
    const register unsigned short int FLTEN13 = 13;
    sbit  FLTEN13_bit at C1FEN1.B13;
    const register unsigned short int FLTEN14 = 14;
    sbit  FLTEN14_bit at C1FEN1.B14;
    const register unsigned short int FLTEN15 = 15;
    sbit  FLTEN15_bit at C1FEN1.B15;

sfr unsigned int   volatile C1FMSKSEL1       absolute 0x498;
    const register unsigned short int F0MSK0 = 0;
    sbit  F0MSK0_bit at C1FMSKSEL1.B0;
    const register unsigned short int F0MSK1 = 1;
    sbit  F0MSK1_bit at C1FMSKSEL1.B1;
    const register unsigned short int F1MSK0 = 2;
    sbit  F1MSK0_bit at C1FMSKSEL1.B2;
    const register unsigned short int F1MSK1 = 3;
    sbit  F1MSK1_bit at C1FMSKSEL1.B3;
    const register unsigned short int F2MSK0 = 4;
    sbit  F2MSK0_bit at C1FMSKSEL1.B4;
    const register unsigned short int F2MSK1 = 5;
    sbit  F2MSK1_bit at C1FMSKSEL1.B5;
    const register unsigned short int F3MSK0 = 6;
    sbit  F3MSK0_bit at C1FMSKSEL1.B6;
    const register unsigned short int F3MSK1 = 7;
    sbit  F3MSK1_bit at C1FMSKSEL1.B7;
    const register unsigned short int F4MSK0 = 8;
    sbit  F4MSK0_bit at C1FMSKSEL1.B8;
    const register unsigned short int F4MSK1 = 9;
    sbit  F4MSK1_bit at C1FMSKSEL1.B9;
    const register unsigned short int F5MSK0 = 10;
    sbit  F5MSK0_bit at C1FMSKSEL1.B10;
    const register unsigned short int F5MSK1 = 11;
    sbit  F5MSK1_bit at C1FMSKSEL1.B11;
    const register unsigned short int F6MSK0 = 12;
    sbit  F6MSK0_bit at C1FMSKSEL1.B12;
    const register unsigned short int F6MSK1 = 13;
    sbit  F6MSK1_bit at C1FMSKSEL1.B13;
    const register unsigned short int F7MSK0 = 14;
    sbit  F7MSK0_bit at C1FMSKSEL1.B14;
    const register unsigned short int F7MSK1 = 15;
    sbit  F7MSK1_bit at C1FMSKSEL1.B15;

sfr unsigned int   volatile C1FMSKSEL2       absolute 0x49A;
    const register unsigned short int F8MSK0 = 0;
    sbit  F8MSK0_bit at C1FMSKSEL2.B0;
    const register unsigned short int F8MSK1 = 1;
    sbit  F8MSK1_bit at C1FMSKSEL2.B1;
    const register unsigned short int F9MSK0 = 2;
    sbit  F9MSK0_bit at C1FMSKSEL2.B2;
    const register unsigned short int F9MSK1 = 3;
    sbit  F9MSK1_bit at C1FMSKSEL2.B3;
    const register unsigned short int F10MSK0 = 4;
    sbit  F10MSK0_bit at C1FMSKSEL2.B4;
    const register unsigned short int F10MSK1 = 5;
    sbit  F10MSK1_bit at C1FMSKSEL2.B5;
    const register unsigned short int F11MSK0 = 6;
    sbit  F11MSK0_bit at C1FMSKSEL2.B6;
    const register unsigned short int F11MSK1 = 7;
    sbit  F11MSK1_bit at C1FMSKSEL2.B7;
    const register unsigned short int F12MSK0 = 8;
    sbit  F12MSK0_bit at C1FMSKSEL2.B8;
    const register unsigned short int F12MSK1 = 9;
    sbit  F12MSK1_bit at C1FMSKSEL2.B9;
    const register unsigned short int F13MSK0 = 10;
    sbit  F13MSK0_bit at C1FMSKSEL2.B10;
    const register unsigned short int F13MSK1 = 11;
    sbit  F13MSK1_bit at C1FMSKSEL2.B11;
    const register unsigned short int F14MSK0 = 12;
    sbit  F14MSK0_bit at C1FMSKSEL2.B12;
    const register unsigned short int F14MSK1 = 13;
    sbit  F14MSK1_bit at C1FMSKSEL2.B13;
    const register unsigned short int F15MSK0 = 14;
    sbit  F15MSK0_bit at C1FMSKSEL2.B14;
    const register unsigned short int F15MSK1 = 15;
    sbit  F15MSK1_bit at C1FMSKSEL2.B15;

sfr unsigned int   volatile C1BUFPNT1        absolute 0x4A0;
    const register unsigned short int F0BP0 = 0;
    sbit  F0BP0_bit at C1BUFPNT1.B0;
    const register unsigned short int F0BP1 = 1;
    sbit  F0BP1_bit at C1BUFPNT1.B1;
    const register unsigned short int F0BP2 = 2;
    sbit  F0BP2_bit at C1BUFPNT1.B2;
    const register unsigned short int F0BP3 = 3;
    sbit  F0BP3_bit at C1BUFPNT1.B3;
    const register unsigned short int F1BP0 = 4;
    sbit  F1BP0_bit at C1BUFPNT1.B4;
    const register unsigned short int F1BP1 = 5;
    sbit  F1BP1_bit at C1BUFPNT1.B5;
    const register unsigned short int F1BP2 = 6;
    sbit  F1BP2_bit at C1BUFPNT1.B6;
    const register unsigned short int F1BP3 = 7;
    sbit  F1BP3_bit at C1BUFPNT1.B7;
    const register unsigned short int F2BP0 = 8;
    sbit  F2BP0_bit at C1BUFPNT1.B8;
    const register unsigned short int F2BP1 = 9;
    sbit  F2BP1_bit at C1BUFPNT1.B9;
    const register unsigned short int F2BP2 = 10;
    sbit  F2BP2_bit at C1BUFPNT1.B10;
    const register unsigned short int F2BP3 = 11;
    sbit  F2BP3_bit at C1BUFPNT1.B11;
    const register unsigned short int F3BP0 = 12;
    sbit  F3BP0_bit at C1BUFPNT1.B12;
    const register unsigned short int F3BP1 = 13;
    sbit  F3BP1_bit at C1BUFPNT1.B13;
    const register unsigned short int F3BP2 = 14;
    sbit  F3BP2_bit at C1BUFPNT1.B14;
    const register unsigned short int F3BP3 = 15;
    sbit  F3BP3_bit at C1BUFPNT1.B15;

sfr unsigned int   volatile C1RXFUL1         absolute 0x4A0;
    const register unsigned short int RXFUL0 = 0;
    sbit  RXFUL0_bit at C1RXFUL1.B0;
    const register unsigned short int RXFUL1 = 1;
    sbit  RXFUL1_bit at C1RXFUL1.B1;
    const register unsigned short int RXFUL2 = 2;
    sbit  RXFUL2_bit at C1RXFUL1.B2;
    const register unsigned short int RXFUL3 = 3;
    sbit  RXFUL3_bit at C1RXFUL1.B3;
    const register unsigned short int RXFUL4 = 4;
    sbit  RXFUL4_bit at C1RXFUL1.B4;
    const register unsigned short int RXFUL5 = 5;
    sbit  RXFUL5_bit at C1RXFUL1.B5;
    const register unsigned short int RXFUL6 = 6;
    sbit  RXFUL6_bit at C1RXFUL1.B6;
    const register unsigned short int RXFUL7 = 7;
    sbit  RXFUL7_bit at C1RXFUL1.B7;
    const register unsigned short int RXFUL8 = 8;
    sbit  RXFUL8_bit at C1RXFUL1.B8;
    const register unsigned short int RXFUL9 = 9;
    sbit  RXFUL9_bit at C1RXFUL1.B9;
    const register unsigned short int RXFUL10 = 10;
    sbit  RXFUL10_bit at C1RXFUL1.B10;
    const register unsigned short int RXFUL11 = 11;
    sbit  RXFUL11_bit at C1RXFUL1.B11;
    const register unsigned short int RXFUL12 = 12;
    sbit  RXFUL12_bit at C1RXFUL1.B12;
    const register unsigned short int RXFUL13 = 13;
    sbit  RXFUL13_bit at C1RXFUL1.B13;
    const register unsigned short int RXFUL14 = 14;
    sbit  RXFUL14_bit at C1RXFUL1.B14;
    const register unsigned short int RXFUL15 = 15;
    sbit  RXFUL15_bit at C1RXFUL1.B15;

sfr unsigned int   volatile C1BUFPNT2        absolute 0x4A2;
    const register unsigned short int F4BP0 = 0;
    sbit  F4BP0_bit at C1BUFPNT2.B0;
    const register unsigned short int F4BP1 = 1;
    sbit  F4BP1_bit at C1BUFPNT2.B1;
    const register unsigned short int F4BP2 = 2;
    sbit  F4BP2_bit at C1BUFPNT2.B2;
    const register unsigned short int F4BP3 = 3;
    sbit  F4BP3_bit at C1BUFPNT2.B3;
    const register unsigned short int F5BP0 = 4;
    sbit  F5BP0_bit at C1BUFPNT2.B4;
    const register unsigned short int F5BP1 = 5;
    sbit  F5BP1_bit at C1BUFPNT2.B5;
    const register unsigned short int F5BP2 = 6;
    sbit  F5BP2_bit at C1BUFPNT2.B6;
    const register unsigned short int F5BP3 = 7;
    sbit  F5BP3_bit at C1BUFPNT2.B7;
    const register unsigned short int F6BP0 = 8;
    sbit  F6BP0_bit at C1BUFPNT2.B8;
    const register unsigned short int F6BP1 = 9;
    sbit  F6BP1_bit at C1BUFPNT2.B9;
    const register unsigned short int F6BP2 = 10;
    sbit  F6BP2_bit at C1BUFPNT2.B10;
    const register unsigned short int F6BP3 = 11;
    sbit  F6BP3_bit at C1BUFPNT2.B11;
    const register unsigned short int F7BP0 = 12;
    sbit  F7BP0_bit at C1BUFPNT2.B12;
    const register unsigned short int F7BP1 = 13;
    sbit  F7BP1_bit at C1BUFPNT2.B13;
    const register unsigned short int F7BP2 = 14;
    sbit  F7BP2_bit at C1BUFPNT2.B14;
    const register unsigned short int F7BP3 = 15;
    sbit  F7BP3_bit at C1BUFPNT2.B15;

sfr unsigned int   volatile C1RXFUL2         absolute 0x4A2;
    const register unsigned short int RXFUL16 = 0;
    sbit  RXFUL16_bit at C1RXFUL2.B0;
    const register unsigned short int RXFUL17 = 1;
    sbit  RXFUL17_bit at C1RXFUL2.B1;
    const register unsigned short int RXFUL18 = 2;
    sbit  RXFUL18_bit at C1RXFUL2.B2;
    const register unsigned short int RXFUL19 = 3;
    sbit  RXFUL19_bit at C1RXFUL2.B3;
    const register unsigned short int RXFUL20 = 4;
    sbit  RXFUL20_bit at C1RXFUL2.B4;
    const register unsigned short int RXFUL21 = 5;
    sbit  RXFUL21_bit at C1RXFUL2.B5;
    const register unsigned short int RXFUL22 = 6;
    sbit  RXFUL22_bit at C1RXFUL2.B6;
    const register unsigned short int RXFUL23 = 7;
    sbit  RXFUL23_bit at C1RXFUL2.B7;
    const register unsigned short int RXFUL24 = 8;
    sbit  RXFUL24_bit at C1RXFUL2.B8;
    const register unsigned short int RXFUL25 = 9;
    sbit  RXFUL25_bit at C1RXFUL2.B9;
    const register unsigned short int RXFUL26 = 10;
    sbit  RXFUL26_bit at C1RXFUL2.B10;
    const register unsigned short int RXFUL27 = 11;
    sbit  RXFUL27_bit at C1RXFUL2.B11;
    const register unsigned short int RXFUL28 = 12;
    sbit  RXFUL28_bit at C1RXFUL2.B12;
    const register unsigned short int RXFUL29 = 13;
    sbit  RXFUL29_bit at C1RXFUL2.B13;
    const register unsigned short int RXFUL30 = 14;
    sbit  RXFUL30_bit at C1RXFUL2.B14;
    const register unsigned short int RXFUL31 = 15;
    sbit  RXFUL31_bit at C1RXFUL2.B15;

sfr unsigned int   volatile C1BUFPNT3        absolute 0x4A4;
    const register unsigned short int F8BP0 = 0;
    sbit  F8BP0_bit at C1BUFPNT3.B0;
    const register unsigned short int F8BP1 = 1;
    sbit  F8BP1_bit at C1BUFPNT3.B1;
    const register unsigned short int F8BP2 = 2;
    sbit  F8BP2_bit at C1BUFPNT3.B2;
    const register unsigned short int F8BP3 = 3;
    sbit  F8BP3_bit at C1BUFPNT3.B3;
    const register unsigned short int F9BP0 = 4;
    sbit  F9BP0_bit at C1BUFPNT3.B4;
    const register unsigned short int F9BP1 = 5;
    sbit  F9BP1_bit at C1BUFPNT3.B5;
    const register unsigned short int F9BP2 = 6;
    sbit  F9BP2_bit at C1BUFPNT3.B6;
    const register unsigned short int F9BP3 = 7;
    sbit  F9BP3_bit at C1BUFPNT3.B7;
    const register unsigned short int F10BP0 = 8;
    sbit  F10BP0_bit at C1BUFPNT3.B8;
    const register unsigned short int F10BP1 = 9;
    sbit  F10BP1_bit at C1BUFPNT3.B9;
    const register unsigned short int F10BP2 = 10;
    sbit  F10BP2_bit at C1BUFPNT3.B10;
    const register unsigned short int F10BP3 = 11;
    sbit  F10BP3_bit at C1BUFPNT3.B11;
    const register unsigned short int F11BP0 = 12;
    sbit  F11BP0_bit at C1BUFPNT3.B12;
    const register unsigned short int F11BP1 = 13;
    sbit  F11BP1_bit at C1BUFPNT3.B13;
    const register unsigned short int F11BP2 = 14;
    sbit  F11BP2_bit at C1BUFPNT3.B14;
    const register unsigned short int F11BP3 = 15;
    sbit  F11BP3_bit at C1BUFPNT3.B15;

sfr unsigned int   volatile C1BUFPNT4        absolute 0x4A6;
    const register unsigned short int F12BP0 = 0;
    sbit  F12BP0_bit at C1BUFPNT4.B0;
    const register unsigned short int F12BP1 = 1;
    sbit  F12BP1_bit at C1BUFPNT4.B1;
    const register unsigned short int F12BP2 = 2;
    sbit  F12BP2_bit at C1BUFPNT4.B2;
    const register unsigned short int F12BP3 = 3;
    sbit  F12BP3_bit at C1BUFPNT4.B3;
    const register unsigned short int F13BP0 = 4;
    sbit  F13BP0_bit at C1BUFPNT4.B4;
    const register unsigned short int F13BP1 = 5;
    sbit  F13BP1_bit at C1BUFPNT4.B5;
    const register unsigned short int F13BP2 = 6;
    sbit  F13BP2_bit at C1BUFPNT4.B6;
    const register unsigned short int F13BP3 = 7;
    sbit  F13BP3_bit at C1BUFPNT4.B7;
    const register unsigned short int F14BP0 = 8;
    sbit  F14BP0_bit at C1BUFPNT4.B8;
    const register unsigned short int F14BP1 = 9;
    sbit  F14BP1_bit at C1BUFPNT4.B9;
    const register unsigned short int F14BP2 = 10;
    sbit  F14BP2_bit at C1BUFPNT4.B10;
    const register unsigned short int F14BP3 = 11;
    sbit  F14BP3_bit at C1BUFPNT4.B11;
    const register unsigned short int F15BP0 = 12;
    sbit  F15BP0_bit at C1BUFPNT4.B12;
    const register unsigned short int F15BP1 = 13;
    sbit  F15BP1_bit at C1BUFPNT4.B13;
    const register unsigned short int F15BP2 = 14;
    sbit  F15BP2_bit at C1BUFPNT4.B14;
    const register unsigned short int F15BP3 = 15;
    sbit  F15BP3_bit at C1BUFPNT4.B15;

sfr unsigned int   volatile C1RXOVF1         absolute 0x4A8;
    const register unsigned short int RXOVF0 = 0;
    sbit  RXOVF0_bit at C1RXOVF1.B0;
    const register unsigned short int RXOVF1 = 1;
    sbit  RXOVF1_bit at C1RXOVF1.B1;
    const register unsigned short int RXOVF2 = 2;
    sbit  RXOVF2_bit at C1RXOVF1.B2;
    const register unsigned short int RXOVF3 = 3;
    sbit  RXOVF3_bit at C1RXOVF1.B3;
    const register unsigned short int RXOVF4 = 4;
    sbit  RXOVF4_bit at C1RXOVF1.B4;
    const register unsigned short int RXOVF5 = 5;
    sbit  RXOVF5_bit at C1RXOVF1.B5;
    const register unsigned short int RXOVF6 = 6;
    sbit  RXOVF6_bit at C1RXOVF1.B6;
    const register unsigned short int RXOVF7 = 7;
    sbit  RXOVF7_bit at C1RXOVF1.B7;
    const register unsigned short int RXOVF8 = 8;
    sbit  RXOVF8_bit at C1RXOVF1.B8;
    const register unsigned short int RXOVF9 = 9;
    sbit  RXOVF9_bit at C1RXOVF1.B9;
    const register unsigned short int RXOVF10 = 10;
    sbit  RXOVF10_bit at C1RXOVF1.B10;
    const register unsigned short int RXOVF11 = 11;
    sbit  RXOVF11_bit at C1RXOVF1.B11;
    const register unsigned short int RXOVF12 = 12;
    sbit  RXOVF12_bit at C1RXOVF1.B12;
    const register unsigned short int RXOVF13 = 13;
    sbit  RXOVF13_bit at C1RXOVF1.B13;
    const register unsigned short int RXOVF14 = 14;
    sbit  RXOVF14_bit at C1RXOVF1.B14;
    const register unsigned short int RXOVF15 = 15;
    sbit  RXOVF15_bit at C1RXOVF1.B15;

sfr unsigned int   volatile C1RXOVF2         absolute 0x4AA;
    const register unsigned short int RXOVF16 = 0;
    sbit  RXOVF16_bit at C1RXOVF2.B0;
    const register unsigned short int RXOVF17 = 1;
    sbit  RXOVF17_bit at C1RXOVF2.B1;
    const register unsigned short int RXOVF18 = 2;
    sbit  RXOVF18_bit at C1RXOVF2.B2;
    const register unsigned short int RXOVF19 = 3;
    sbit  RXOVF19_bit at C1RXOVF2.B3;
    const register unsigned short int RXOVF20 = 4;
    sbit  RXOVF20_bit at C1RXOVF2.B4;
    const register unsigned short int RXOVF21 = 5;
    sbit  RXOVF21_bit at C1RXOVF2.B5;
    const register unsigned short int RXOVF22 = 6;
    sbit  RXOVF22_bit at C1RXOVF2.B6;
    const register unsigned short int RXOVF23 = 7;
    sbit  RXOVF23_bit at C1RXOVF2.B7;
    const register unsigned short int RXOVF24 = 8;
    sbit  RXOVF24_bit at C1RXOVF2.B8;
    const register unsigned short int RXOVF25 = 9;
    sbit  RXOVF25_bit at C1RXOVF2.B9;
    const register unsigned short int RXOVF26 = 10;
    sbit  RXOVF26_bit at C1RXOVF2.B10;
    const register unsigned short int RXOVF27 = 11;
    sbit  RXOVF27_bit at C1RXOVF2.B11;
    const register unsigned short int RXOVF28 = 12;
    sbit  RXOVF28_bit at C1RXOVF2.B12;
    const register unsigned short int RXOVF29 = 13;
    sbit  RXOVF29_bit at C1RXOVF2.B13;
    const register unsigned short int RXOVF30 = 14;
    sbit  RXOVF30_bit at C1RXOVF2.B14;
    const register unsigned short int RXOVF31 = 15;
    sbit  RXOVF31_bit at C1RXOVF2.B15;

sfr unsigned int   volatile C1RXM0SID        absolute 0x4B0;
    const register unsigned short int EID16 = 0;
    sbit  EID16_bit at C1RXM0SID.B0;
    const register unsigned short int EID17 = 1;
    sbit  EID17_bit at C1RXM0SID.B1;
    const register unsigned short int MIDE = 3;
    sbit  MIDE_bit at C1RXM0SID.B3;
    const register unsigned short int SID0 = 5;
    sbit  SID0_bit at C1RXM0SID.B5;
    const register unsigned short int SID1 = 6;
    sbit  SID1_bit at C1RXM0SID.B6;
    const register unsigned short int SID2 = 7;
    sbit  SID2_bit at C1RXM0SID.B7;
    const register unsigned short int SID3 = 8;
    sbit  SID3_bit at C1RXM0SID.B8;
    const register unsigned short int SID4 = 9;
    sbit  SID4_bit at C1RXM0SID.B9;
    const register unsigned short int SID5 = 10;
    sbit  SID5_bit at C1RXM0SID.B10;
    const register unsigned short int SID6 = 11;
    sbit  SID6_bit at C1RXM0SID.B11;
    const register unsigned short int SID7 = 12;
    sbit  SID7_bit at C1RXM0SID.B12;
    const register unsigned short int SID8 = 13;
    sbit  SID8_bit at C1RXM0SID.B13;
    const register unsigned short int SID9 = 14;
    sbit  SID9_bit at C1RXM0SID.B14;
    const register unsigned short int SID10 = 15;
    sbit  SID10_bit at C1RXM0SID.B15;
    const register unsigned short int EXIDE = 3;
    sbit  EXIDE_bit at C1RXM0SID.B3;

sfr unsigned int   volatile C1TR01CON        absolute 0x4B0;
    const register unsigned short int TX0PRI0 = 0;
    sbit  TX0PRI0_bit at C1TR01CON.B0;
    const register unsigned short int TX0PRI1 = 1;
    sbit  TX0PRI1_bit at C1TR01CON.B1;
    const register unsigned short int RTREN0 = 2;
    sbit  RTREN0_bit at C1TR01CON.B2;
    const register unsigned short int TXREQ0 = 3;
    sbit  TXREQ0_bit at C1TR01CON.B3;
    const register unsigned short int TXERR0 = 4;
    sbit  TXERR0_bit at C1TR01CON.B4;
    const register unsigned short int TXLARB0 = 5;
    sbit  TXLARB0_bit at C1TR01CON.B5;
    const register unsigned short int TXABT0 = 6;
    sbit  TXABT0_bit at C1TR01CON.B6;
    const register unsigned short int TXEN0 = 7;
    sbit  TXEN0_bit at C1TR01CON.B7;
    const register unsigned short int TX1PRI0 = 8;
    sbit  TX1PRI0_bit at C1TR01CON.B8;
    const register unsigned short int TX1PRI1 = 9;
    sbit  TX1PRI1_bit at C1TR01CON.B9;
    const register unsigned short int RTREN1 = 10;
    sbit  RTREN1_bit at C1TR01CON.B10;
    const register unsigned short int TXREQ1 = 11;
    sbit  TXREQ1_bit at C1TR01CON.B11;
    const register unsigned short int TXERR1 = 12;
    sbit  TXERR1_bit at C1TR01CON.B12;
    const register unsigned short int TXLARB1 = 13;
    sbit  TXLARB1_bit at C1TR01CON.B13;
    const register unsigned short int TXABT1 = 14;
    sbit  TXABT1_bit at C1TR01CON.B14;
    const register unsigned short int TXEN1 = 15;
    sbit  TXEN1_bit at C1TR01CON.B15;

sfr unsigned int   volatile C1RXM0EID        absolute 0x4B2;
    const register unsigned short int EID0 = 0;
    sbit  EID0_bit at C1RXM0EID.B0;
    const register unsigned short int EID1 = 1;
    sbit  EID1_bit at C1RXM0EID.B1;
    const register unsigned short int EID2 = 2;
    sbit  EID2_bit at C1RXM0EID.B2;
    const register unsigned short int EID3 = 3;
    sbit  EID3_bit at C1RXM0EID.B3;
    const register unsigned short int EID4 = 4;
    sbit  EID4_bit at C1RXM0EID.B4;
    const register unsigned short int EID5 = 5;
    sbit  EID5_bit at C1RXM0EID.B5;
    const register unsigned short int EID6 = 6;
    sbit  EID6_bit at C1RXM0EID.B6;
    const register unsigned short int EID7 = 7;
    sbit  EID7_bit at C1RXM0EID.B7;
    const register unsigned short int EID8 = 8;
    sbit  EID8_bit at C1RXM0EID.B8;
    const register unsigned short int EID9 = 9;
    sbit  EID9_bit at C1RXM0EID.B9;
    const register unsigned short int EID10 = 10;
    sbit  EID10_bit at C1RXM0EID.B10;
    const register unsigned short int EID11 = 11;
    sbit  EID11_bit at C1RXM0EID.B11;
    const register unsigned short int EID12 = 12;
    sbit  EID12_bit at C1RXM0EID.B12;
    const register unsigned short int EID13 = 13;
    sbit  EID13_bit at C1RXM0EID.B13;
    const register unsigned short int EID14 = 14;
    sbit  EID14_bit at C1RXM0EID.B14;
    const register unsigned short int EID15 = 15;
    sbit  EID15_bit at C1RXM0EID.B15;

sfr unsigned int   volatile C1TR23CON        absolute 0x4B2;
    const register unsigned short int TX2PRI0 = 0;
    sbit  TX2PRI0_bit at C1TR23CON.B0;
    const register unsigned short int TX2PRI1 = 1;
    sbit  TX2PRI1_bit at C1TR23CON.B1;
    const register unsigned short int RTREN2 = 2;
    sbit  RTREN2_bit at C1TR23CON.B2;
    const register unsigned short int TXREQ2 = 3;
    sbit  TXREQ2_bit at C1TR23CON.B3;
    const register unsigned short int TXERR2 = 4;
    sbit  TXERR2_bit at C1TR23CON.B4;
    const register unsigned short int TXLARB2 = 5;
    sbit  TXLARB2_bit at C1TR23CON.B5;
    const register unsigned short int TXABT2 = 6;
    sbit  TXABT2_bit at C1TR23CON.B6;
    const register unsigned short int TXEN2 = 7;
    sbit  TXEN2_bit at C1TR23CON.B7;
    const register unsigned short int TX3PRI0 = 8;
    sbit  TX3PRI0_bit at C1TR23CON.B8;
    const register unsigned short int TX3PRI1 = 9;
    sbit  TX3PRI1_bit at C1TR23CON.B9;
    const register unsigned short int RTREN3 = 10;
    sbit  RTREN3_bit at C1TR23CON.B10;
    const register unsigned short int TXREQ3 = 11;
    sbit  TXREQ3_bit at C1TR23CON.B11;
    const register unsigned short int TXERR3 = 12;
    sbit  TXERR3_bit at C1TR23CON.B12;
    const register unsigned short int TXLARB3 = 13;
    sbit  TXLARB3_bit at C1TR23CON.B13;
    const register unsigned short int TXABT3 = 14;
    sbit  TXABT3_bit at C1TR23CON.B14;
    const register unsigned short int TXEN3 = 15;
    sbit  TXEN3_bit at C1TR23CON.B15;

sfr unsigned int   volatile C1RXM1SID        absolute 0x4B4;
sfr unsigned int   volatile C1TR45CON        absolute 0x4B4;
    const register unsigned short int TX4PRI0 = 0;
    sbit  TX4PRI0_bit at C1TR45CON.B0;
    const register unsigned short int TX4PRI1 = 1;
    sbit  TX4PRI1_bit at C1TR45CON.B1;
    const register unsigned short int RTREN4 = 2;
    sbit  RTREN4_bit at C1TR45CON.B2;
    const register unsigned short int TXREQ4 = 3;
    sbit  TXREQ4_bit at C1TR45CON.B3;
    const register unsigned short int TXERR4 = 4;
    sbit  TXERR4_bit at C1TR45CON.B4;
    const register unsigned short int TXLARB4 = 5;
    sbit  TXLARB4_bit at C1TR45CON.B5;
    const register unsigned short int TXABT4 = 6;
    sbit  TXABT4_bit at C1TR45CON.B6;
    const register unsigned short int TXEN4 = 7;
    sbit  TXEN4_bit at C1TR45CON.B7;
    const register unsigned short int TX5PRI0 = 8;
    sbit  TX5PRI0_bit at C1TR45CON.B8;
    const register unsigned short int TX5PRI1 = 9;
    sbit  TX5PRI1_bit at C1TR45CON.B9;
    const register unsigned short int RTREN5 = 10;
    sbit  RTREN5_bit at C1TR45CON.B10;
    const register unsigned short int TXREQ5 = 11;
    sbit  TXREQ5_bit at C1TR45CON.B11;
    const register unsigned short int TXERR5 = 12;
    sbit  TXERR5_bit at C1TR45CON.B12;
    const register unsigned short int TXLARB5 = 13;
    sbit  TXLARB5_bit at C1TR45CON.B13;
    const register unsigned short int TXABT5 = 14;
    sbit  TXABT5_bit at C1TR45CON.B14;
    const register unsigned short int TXEN5 = 15;
    sbit  TXEN5_bit at C1TR45CON.B15;

sfr unsigned int   volatile C1RXM1EID        absolute 0x4B6;
sfr unsigned int   volatile C1TR67CON        absolute 0x4B6;
    const register unsigned short int TX6PRI0 = 0;
    sbit  TX6PRI0_bit at C1TR67CON.B0;
    const register unsigned short int TX6PRI1 = 1;
    sbit  TX6PRI1_bit at C1TR67CON.B1;
    const register unsigned short int RTREN6 = 2;
    sbit  RTREN6_bit at C1TR67CON.B2;
    const register unsigned short int TXREQ6 = 3;
    sbit  TXREQ6_bit at C1TR67CON.B3;
    const register unsigned short int TXERR6 = 4;
    sbit  TXERR6_bit at C1TR67CON.B4;
    const register unsigned short int TXLARB6 = 5;
    sbit  TXLARB6_bit at C1TR67CON.B5;
    const register unsigned short int TXABT6 = 6;
    sbit  TXABT6_bit at C1TR67CON.B6;
    const register unsigned short int TXEN6 = 7;
    sbit  TXEN6_bit at C1TR67CON.B7;
    const register unsigned short int TX7PRI0 = 8;
    sbit  TX7PRI0_bit at C1TR67CON.B8;
    const register unsigned short int TX7PRI1 = 9;
    sbit  TX7PRI1_bit at C1TR67CON.B9;
    const register unsigned short int RTREN7 = 10;
    sbit  RTREN7_bit at C1TR67CON.B10;
    const register unsigned short int TXREQ7 = 11;
    sbit  TXREQ7_bit at C1TR67CON.B11;
    const register unsigned short int TXERR7 = 12;
    sbit  TXERR7_bit at C1TR67CON.B12;
    const register unsigned short int TXLARB7 = 13;
    sbit  TXLARB7_bit at C1TR67CON.B13;
    const register unsigned short int TXABT7 = 14;
    sbit  TXABT7_bit at C1TR67CON.B14;
    const register unsigned short int TXEN7 = 15;
    sbit  TXEN7_bit at C1TR67CON.B15;

sfr unsigned int   volatile C1RXM2SID        absolute 0x4B8;
sfr unsigned int   volatile C1RXM2EID        absolute 0x4BA;
sfr unsigned int   volatile C1RXD            absolute 0x4C0;
sfr unsigned int   volatile C1RXF0SID        absolute 0x4C0;
sfr unsigned int   volatile C1RXF0EID        absolute 0x4C2;
sfr unsigned int   volatile C1TXD            absolute 0x4C2;
sfr unsigned int   volatile C1RXF1SID        absolute 0x4C4;
sfr unsigned int   volatile C1RXF1EID        absolute 0x4C6;
sfr unsigned int   volatile C1RXF2SID        absolute 0x4C8;
sfr unsigned int   volatile C1RXF2EID        absolute 0x4CA;
sfr unsigned int   volatile C1RXF3SID        absolute 0x4CC;
sfr unsigned int   volatile C1RXF3EID        absolute 0x4CE;
sfr unsigned int   volatile C1RXF4SID        absolute 0x4D0;
sfr unsigned int   volatile C1RXF4EID        absolute 0x4D2;
sfr unsigned int   volatile C1RXF5SID        absolute 0x4D4;
sfr unsigned int   volatile C1RXF5EID        absolute 0x4D6;
sfr unsigned int   volatile C1RXF6SID        absolute 0x4D8;
sfr unsigned int   volatile C1RXF6EID        absolute 0x4DA;
sfr unsigned int   volatile C1RXF7SID        absolute 0x4DC;
sfr unsigned int   volatile C1RXF7EID        absolute 0x4DE;
sfr unsigned int   volatile C1RXF8SID        absolute 0x4E0;
sfr unsigned int   volatile C1RXF8EID        absolute 0x4E2;
sfr unsigned int   volatile C1RXF9SID        absolute 0x4E4;
sfr unsigned int   volatile C1RXF9EID        absolute 0x4E6;
sfr unsigned int   volatile C1RXF10SID       absolute 0x4E8;
sfr unsigned int   volatile C1RXF10EID       absolute 0x4EA;
sfr unsigned int   volatile C1RXF11SID       absolute 0x4EC;
sfr unsigned int   volatile C1RXF11EID       absolute 0x4EE;
sfr unsigned int   volatile C1RXF12SID       absolute 0x4F0;
sfr unsigned int   volatile C1RXF12EID       absolute 0x4F2;
sfr unsigned int   volatile C1RXF13SID       absolute 0x4F4;
sfr unsigned int   volatile C1RXF13EID       absolute 0x4F6;
sfr unsigned int   volatile C1RXF14SID       absolute 0x4F8;
sfr unsigned int   volatile C1RXF14EID       absolute 0x4FA;
sfr unsigned int   volatile C1RXF15SID       absolute 0x4FC;
sfr unsigned int   volatile C1RXF15EID       absolute 0x4FE;
sfr unsigned int   volatile ISRCCON          absolute 0x500;
    const register unsigned short int ISRCCAL0 = 0;
    sbit  ISRCCAL0_bit at ISRCCON.B0;
    const register unsigned short int ISRCCAL1 = 1;
    sbit  ISRCCAL1_bit at ISRCCON.B1;
    const register unsigned short int ISRCCAL2 = 2;
    sbit  ISRCCAL2_bit at ISRCCON.B2;
    const register unsigned short int ISRCCAL3 = 3;
    sbit  ISRCCAL3_bit at ISRCCON.B3;
    const register unsigned short int ISRCCAL4 = 4;
    sbit  ISRCCAL4_bit at ISRCCON.B4;
    const register unsigned short int ISRCCAL5 = 5;
    sbit  ISRCCAL5_bit at ISRCCON.B5;
    const register unsigned short int OUTSEL0 = 8;
    sbit  OUTSEL0_bit at ISRCCON.B8;
    const register unsigned short int OUTSEL1 = 9;
    sbit  OUTSEL1_bit at ISRCCON.B9;
    const register unsigned short int OUTSEL2 = 10;
    sbit  OUTSEL2_bit at ISRCCON.B10;
    const register unsigned short int ISRCEN = 15;
    sbit  ISRCEN_bit at ISRCCON.B15;

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
    const register unsigned short int PGAOEN = 14;
    sbit  PGAOEN_bit at PGA1CON.B14;
    const register unsigned short int PGAEN = 15;
    sbit  PGAEN_bit at PGA1CON.B15;

sfr unsigned int   volatile PGA1CAL          absolute 0x506;
sfr unsigned int   volatile PGA2CON          absolute 0x508;
sfr unsigned int   volatile PGA2CAL          absolute 0x50A;
sfr unsigned int   volatile CMP1CON          absolute 0x540;
    const register unsigned short int RANGE = 0;
    sbit  RANGE_bit at CMP1CON.B0;
    const register unsigned short int CMPPOL = 1;
    sbit  CMPPOL_bit at CMP1CON.B1;
    const register unsigned short int ALTINP = 2;
    sbit  ALTINP_bit at CMP1CON.B2;
    const register unsigned short int CMPSTAT = 3;
    sbit  CMPSTAT_bit at CMP1CON.B3;
    const register unsigned short int HYSPOL = 4;
    sbit  HYSPOL_bit at CMP1CON.B4;
    const register unsigned short int EXTREF = 5;
    sbit  EXTREF_bit at CMP1CON.B5;
    const register unsigned short int INSEL0 = 6;
    sbit  INSEL0_bit at CMP1CON.B6;
    const register unsigned short int INSEL1 = 7;
    sbit  INSEL1_bit at CMP1CON.B7;
    const register unsigned short int DACOE = 8;
    sbit  DACOE_bit at CMP1CON.B8;
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
sfr unsigned int   volatile CMP3CON          absolute 0x548;
sfr unsigned int   volatile CMP3DAC          absolute 0x54A;
sfr unsigned int   volatile CMP4CON          absolute 0x54C;
sfr unsigned int   volatile CMP4DAC          absolute 0x54E;
sfr unsigned int   volatile SPI3CON1         absolute 0x600;
sfr unsigned int   volatile SPI3CON1L        absolute 0x600;
sfr unsigned int   volatile SPI3CON1H        absolute 0x602;
sfr unsigned int   volatile SPI3CON2         absolute 0x602;
sfr unsigned int   volatile SPI3CON2L        absolute 0x604;
sfr unsigned int   volatile SPI3CON3         absolute 0x604;
sfr unsigned int   volatile SPI3CON2H        absolute 0x606;
sfr unsigned int   volatile SPI3CON4         absolute 0x606;
sfr unsigned int   volatile SPI3STATL        absolute 0x608;
sfr unsigned int   volatile SPI3STATH        absolute 0x60A;
sfr unsigned int   volatile SPI3BUFL         absolute 0x60C;
sfr unsigned int   volatile SPI3BUFH         absolute 0x60E;
sfr unsigned int   volatile SPI3BRGL         absolute 0x610;
sfr unsigned int   volatile SPI3BRGH         absolute 0x612;
sfr unsigned int   volatile SPI3IMSK1        absolute 0x614;
sfr unsigned int   volatile SPI3IMSKL        absolute 0x614;
sfr unsigned int   volatile SPI3IMSK2        absolute 0x616;
sfr unsigned int   volatile SPI3IMSKH        absolute 0x616;
sfr unsigned int   volatile SPI3URDTL        absolute 0x618;
sfr unsigned int   volatile SPI3URDTH        absolute 0x61A;
sfr unsigned int            RPOR0            absolute 0x668;
sfr unsigned int            RPOR1            absolute 0x66A;
sfr unsigned int            RPOR2            absolute 0x66C;
sfr unsigned int            RPOR3            absolute 0x66E;
sfr unsigned int            RPOR4            absolute 0x670;
sfr unsigned int            RPOR5            absolute 0x672;
sfr unsigned int            RPOR6            absolute 0x674;
sfr unsigned int            RPOR7            absolute 0x676;
sfr unsigned int            RPOR8            absolute 0x678;
sfr unsigned int            RPOR9            absolute 0x67A;
sfr unsigned int            RPOR10           absolute 0x67C;
sfr unsigned int            RPOR11           absolute 0x67E;
sfr unsigned int            RPOR12           absolute 0x680;
sfr unsigned int            RPOR13           absolute 0x682;
sfr unsigned int            RPOR14           absolute 0x684;
sfr unsigned int            RPOR15           absolute 0x686;
sfr unsigned int   volatile RPOR16           absolute 0x688;
sfr unsigned int   volatile RPOR17           absolute 0x68A;
sfr unsigned int   volatile RPOR18           absolute 0x68C;
sfr unsigned int   volatile RPOR19           absolute 0x68E;
sfr unsigned int   volatile RPOR20           absolute 0x690;
sfr unsigned int   volatile RPOR21           absolute 0x692;
sfr unsigned int   volatile RPOR22           absolute 0x694;
sfr unsigned int   volatile RPOR23           absolute 0x696;
sfr unsigned int   volatile RPOR24           absolute 0x698;
sfr unsigned int   volatile RPOR25           absolute 0x69A;
sfr unsigned int   volatile RPOR26           absolute 0x69C;
sfr unsigned int            RPINR0           absolute 0x6A0;
sfr unsigned int            RPINR1           absolute 0x6A2;
sfr unsigned int            RPINR2           absolute 0x6A4;
sfr unsigned int            RPINR3           absolute 0x6A6;
sfr unsigned int            RPINR7           absolute 0x6AE;
sfr unsigned int            RPINR8           absolute 0x6B0;
sfr unsigned int            RPINR11          absolute 0x6B6;
sfr unsigned int            RPINR12          absolute 0x6B8;
sfr unsigned int            RPINR13          absolute 0x6BA;
sfr unsigned int            RPINR18          absolute 0x6C4;
sfr unsigned int            RPINR19          absolute 0x6C6;
sfr unsigned int            RPINR20          absolute 0x6C8;
sfr unsigned int            RPINR21          absolute 0x6CA;
sfr unsigned int            RPINR22          absolute 0x6CC;
sfr unsigned int            RPINR23          absolute 0x6CE;
sfr unsigned int            RPINR26          absolute 0x6D4;
sfr unsigned int            RPINR29          absolute 0x6DA;
sfr unsigned int   volatile RPINR30          absolute 0x6DC;
sfr unsigned int   volatile RPINR37          absolute 0x6EA;
sfr unsigned int   volatile RPINR38          absolute 0x6EC;
sfr unsigned int   volatile RPINR42          absolute 0x6F4;
sfr unsigned int   volatile RPINR43          absolute 0x6F6;
sfr unsigned int   volatile RPINR45          absolute 0x6FA;
sfr unsigned int   volatile RPINR46          absolute 0x6FC;
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
    const register unsigned short int C1MD = 1;
    sbit  C1MD_bit at PMD1.B1;
    const register unsigned short int C2MD = 2;
    sbit  C2MD_bit at PMD1.B2;
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
    const register unsigned short int I2C2MD = 1;
    sbit  I2C2MD_bit at PMD3.B1;
    const register unsigned short int CMPMD = 10;
    sbit  CMPMD_bit at PMD3.B10;

sfr unsigned int   volatile PMD4             absolute 0x766;
    const register unsigned short int REFOMD = 3;
    sbit  REFOMD_bit at PMD4.B3;

sfr unsigned int   volatile PMD6             absolute 0x76A;
    const register unsigned short int SPI3MD = 0;
    sbit  SPI3MD_bit at PMD6.B0;
    const register unsigned short int PWM1MD = 8;
    sbit  PWM1MD_bit at PMD6.B8;
    const register unsigned short int PWM2MD = 9;
    sbit  PWM2MD_bit at PMD6.B9;
    const register unsigned short int PWM3MD = 10;
    sbit  PWM3MD_bit at PMD6.B10;
    const register unsigned short int PWM4MD = 11;
    sbit  PWM4MD_bit at PMD6.B11;
    const register unsigned short int PWM5MD = 12;
    sbit  PWM5MD_bit at PMD6.B12;
    const register unsigned short int PWM6MD = 13;
    sbit  PWM6MD_bit at PMD6.B13;
    const register unsigned short int PWM7MD = 14;
    sbit  PWM7MD_bit at PMD6.B14;
    const register unsigned short int PWM8MD = 15;
    sbit  PWM8MD_bit at PMD6.B15;

sfr unsigned int   volatile PMD7             absolute 0x76C;
    const register unsigned short int PGA1MD = 1;
    sbit  PGA1MD_bit at PMD7.B1;
    const register unsigned short int PTGMD = 3;
    sbit  PTGMD_bit at PMD7.B3;
    const register unsigned short int DMAMD = 4;
    sbit  DMAMD_bit at PMD7.B4;
    const register unsigned short int CMP1MD = 8;
    sbit  CMP1MD_bit at PMD7.B8;
    const register unsigned short int CMP2MD = 9;
    sbit  CMP2MD_bit at PMD7.B9;
    const register unsigned short int CMP3MD = 10;
    sbit  CMP3MD_bit at PMD7.B10;
    const register unsigned short int CMP4MD = 11;
    sbit  CMP4MD_bit at PMD7.B11;

sfr unsigned int   volatile PMD8             absolute 0x76E;
    const register unsigned short int CCSMD = 1;
    sbit  CCSMD_bit at PMD8.B1;
    const register unsigned short int CLC1MD = 2;
    sbit  CLC1MD_bit at PMD8.B2;
    const register unsigned short int CLC2MD = 3;
    sbit  CLC2MD_bit at PMD8.B3;
    const register unsigned short int CLC3MD = 4;
    sbit  CLC3MD_bit at PMD8.B4;
    const register unsigned short int CLC4MD = 5;
    sbit  CLC4MD_bit at PMD8.B5;
    const register unsigned short int ABGMD = 9;
    sbit  ABGMD_bit at PMD8.B9;
    const register unsigned short int PGA2MD = 10;
    sbit  PGA2MD_bit at PMD8.B10;

sfr unsigned int   volatile C2CTRL1          absolute 0x780;
sfr unsigned int   volatile C2CTRL2          absolute 0x782;
sfr unsigned int   volatile C2VEC            absolute 0x784;
sfr unsigned int   volatile C2FCTRL          absolute 0x786;
sfr unsigned int   volatile C2FIFO           absolute 0x788;
sfr unsigned int   volatile C2INTF           absolute 0x78A;
sfr unsigned int   volatile C2INTE           absolute 0x78C;
sfr unsigned int   volatile C2EC             absolute 0x78E;
sfr unsigned int   volatile C2RERRCNT        absolute 0x78E;
sfr unsigned short volatile C2TERRCNT        absolute 0x78F;
sfr unsigned int   volatile C2CFG1           absolute 0x790;
sfr unsigned int   volatile C2CFG2           absolute 0x792;
sfr unsigned int   volatile C2FEN1           absolute 0x794;
sfr unsigned int   volatile C2FMSKSEL1       absolute 0x798;
sfr unsigned int   volatile C2FMSKSEL2       absolute 0x79A;
sfr unsigned int   volatile C2BUFPNT1        absolute 0x7A0;
sfr unsigned int   volatile C2RXFUL1         absolute 0x7A0;
sfr unsigned int   volatile C2BUFPNT2        absolute 0x7A2;
sfr unsigned int   volatile C2RXFUL2         absolute 0x7A2;
sfr unsigned int   volatile C2BUFPNT3        absolute 0x7A4;
sfr unsigned int   volatile C2BUFPNT4        absolute 0x7A6;
sfr unsigned int   volatile C2RXOVF1         absolute 0x7A8;
sfr unsigned int   volatile C2RXOVF2         absolute 0x7AA;
sfr unsigned int   volatile C2RXM0SID        absolute 0x7B0;
sfr unsigned int   volatile C2TR01CON        absolute 0x7B0;
sfr unsigned int   volatile C2RXM0EID        absolute 0x7B2;
sfr unsigned int   volatile C2TR23CON        absolute 0x7B2;
sfr unsigned int   volatile C2RXM1SID        absolute 0x7B4;
sfr unsigned int   volatile C2TR45CON        absolute 0x7B4;
sfr unsigned int   volatile C2RXM1EID        absolute 0x7B6;
sfr unsigned int   volatile C2TR67CON        absolute 0x7B6;
sfr unsigned int   volatile C2RXM2SID        absolute 0x7B8;
sfr unsigned int   volatile C2RXM2EID        absolute 0x7BA;
sfr unsigned int   volatile C2RXD            absolute 0x7C0;
sfr unsigned int   volatile C2RXF0SID        absolute 0x7C0;
sfr unsigned int   volatile C2RXF0EID        absolute 0x7C2;
sfr unsigned int   volatile C2TXD            absolute 0x7C2;
sfr unsigned int   volatile C2RXF1SID        absolute 0x7C4;
sfr unsigned int   volatile C2RXF1EID        absolute 0x7C6;
sfr unsigned int   volatile C2RXF2SID        absolute 0x7C8;
sfr unsigned int   volatile C2RXF2EID        absolute 0x7CA;
sfr unsigned int   volatile C2RXF3SID        absolute 0x7CC;
sfr unsigned int   volatile C2RXF3EID        absolute 0x7CE;
sfr unsigned int   volatile C2RXF4SID        absolute 0x7D0;
sfr unsigned int   volatile C2RXF4EID        absolute 0x7D2;
sfr unsigned int   volatile C2RXF5SID        absolute 0x7D4;
sfr unsigned int   volatile C2RXF5EID        absolute 0x7D6;
sfr unsigned int   volatile C2RXF6SID        absolute 0x7D8;
sfr unsigned int   volatile C2RXF6EID        absolute 0x7DA;
sfr unsigned int   volatile C2RXF7SID        absolute 0x7DC;
sfr unsigned int   volatile C2RXF7EID        absolute 0x7DE;
sfr unsigned int   volatile C2RXF8SID        absolute 0x7E0;
sfr unsigned int   volatile C2RXF8EID        absolute 0x7E2;
sfr unsigned int   volatile C2RXF9SID        absolute 0x7E4;
sfr unsigned int   volatile C2RXF9EID        absolute 0x7E6;
sfr unsigned int   volatile C2RXF10SID       absolute 0x7E8;
sfr unsigned int   volatile C2RXF10EID       absolute 0x7EA;
sfr unsigned int   volatile C2RXF11SID       absolute 0x7EC;
sfr unsigned int   volatile C2RXF11EID       absolute 0x7EE;
sfr unsigned int   volatile C2RXF12SID       absolute 0x7F0;
sfr unsigned int   volatile C2RXF12EID       absolute 0x7F2;
sfr unsigned int   volatile C2RXF13SID       absolute 0x7F4;
sfr unsigned int   volatile C2RXF13EID       absolute 0x7F6;
sfr unsigned int   volatile C2RXF14SID       absolute 0x7F8;
sfr unsigned int   volatile C2RXF14EID       absolute 0x7FA;
sfr unsigned int   volatile C2RXF15SID       absolute 0x7FC;
sfr unsigned int   volatile C2RXF15EID       absolute 0x7FE;
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
    const register unsigned short int SPI1TXIF = 9;
    sbit  SPI1TXIF_bit at IFS0.B9;
    const register unsigned short int SPI1RXIF = 10;
    sbit  SPI1RXIF_bit at IFS0.B10;
    const register unsigned short int U1RXIF = 11;
    sbit  U1RXIF_bit at IFS0.B11;
    const register unsigned short int U1TXIF = 12;
    sbit  U1TXIF_bit at IFS0.B12;
    const register unsigned short int ADCIF = 13;
    sbit  ADCIF_bit at IFS0.B13;
    const register unsigned short int DMA1IF = 14;
    sbit  DMA1IF_bit at IFS0.B14;
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

sfr unsigned int   volatile IFS2             absolute 0x804;
    const register unsigned short int SPI2TXIF = 0;
    sbit  SPI2TXIF_bit at IFS2.B0;
    const register unsigned short int SPI2RXIF = 1;
    sbit  SPI2RXIF_bit at IFS2.B1;
    const register unsigned short int C1RXIF = 2;
    sbit  C1RXIF_bit at IFS2.B2;
    const register unsigned short int C1IF = 3;
    sbit  C1IF_bit at IFS2.B3;
    const register unsigned short int DMA3IF = 4;
    sbit  DMA3IF_bit at IFS2.B4;
    const register unsigned short int IC3IF = 5;
    sbit  IC3IF_bit at IFS2.B5;
    const register unsigned short int IC4IF = 6;
    sbit  IC4IF_bit at IFS2.B6;

sfr unsigned int   volatile IFS3             absolute 0x806;
    const register unsigned short int SI2C2IF = 1;
    sbit  SI2C2IF_bit at IFS3.B1;
    const register unsigned short int MI2C2IF = 2;
    sbit  MI2C2IF_bit at IFS3.B2;
    const register unsigned short int INT4IF = 6;
    sbit  INT4IF_bit at IFS3.B6;
    const register unsigned short int C2RXIF = 7;
    sbit  C2RXIF_bit at IFS3.B7;
    const register unsigned short int C2IF = 8;
    sbit  C2IF_bit at IFS3.B8;
    const register unsigned short int PSEMIF = 9;
    sbit  PSEMIF_bit at IFS3.B9;

sfr unsigned int   volatile IFS4             absolute 0x808;
    const register unsigned short int U1EIF = 1;
    sbit  U1EIF_bit at IFS4.B1;
    const register unsigned short int U2EIF = 2;
    sbit  U2EIF_bit at IFS4.B2;
    const register unsigned short int C1TXIF = 6;
    sbit  C1TXIF_bit at IFS4.B6;
    const register unsigned short int C2TXIF = 7;
    sbit  C2TXIF_bit at IFS4.B7;
    const register unsigned short int PSESIF = 9;
    sbit  PSESIF_bit at IFS4.B9;

sfr unsigned int   volatile IFS5             absolute 0x80A;
    const register unsigned short int SPI3TXIF = 10;
    sbit  SPI3TXIF_bit at IFS5.B10;
    const register unsigned short int SPI3RXIF = 11;
    sbit  SPI3RXIF_bit at IFS5.B11;
    const register unsigned short int PWM1IF = 14;
    sbit  PWM1IF_bit at IFS5.B14;
    const register unsigned short int PWM2IF = 15;
    sbit  PWM2IF_bit at IFS5.B15;

sfr unsigned int   volatile IFS6             absolute 0x80C;
    const register unsigned short int PWM3IF = 0;
    sbit  PWM3IF_bit at IFS6.B0;
    const register unsigned short int PWM4IF = 1;
    sbit  PWM4IF_bit at IFS6.B1;
    const register unsigned short int PWM5IF = 2;
    sbit  PWM5IF_bit at IFS6.B2;
    const register unsigned short int PWM6IF = 3;
    sbit  PWM6IF_bit at IFS6.B3;
    const register unsigned short int PWM7IF = 4;
    sbit  PWM7IF_bit at IFS6.B4;
    const register unsigned short int PWM8IF = 5;
    sbit  PWM8IF_bit at IFS6.B5;
    const register unsigned short int AC2IF = 7;
    sbit  AC2IF_bit at IFS6.B7;
    const register unsigned short int AC3IF = 8;
    sbit  AC3IF_bit at IFS6.B8;
    const register unsigned short int AC4IF = 9;
    sbit  AC4IF_bit at IFS6.B9;
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
    const register unsigned short int SPI1EIF = 12;
    sbit  SPI1EIF_bit at IFS7.B12;
    const register unsigned short int SPI2EIF = 13;
    sbit  SPI2EIF_bit at IFS7.B13;
    const register unsigned short int SPI3EIF = 14;
    sbit  SPI3EIF_bit at IFS7.B14;

sfr unsigned int   volatile IFS8             absolute 0x810;
    const register unsigned short int CLC1IF = 10;
    sbit  CLC1IF_bit at IFS8.B10;
    const register unsigned short int CLC2IF = 11;
    sbit  CLC2IF_bit at IFS8.B11;
    const register unsigned short int CLC3IF = 12;
    sbit  CLC3IF_bit at IFS8.B12;
    const register unsigned short int CLC4IF = 13;
    sbit  CLC4IF_bit at IFS8.B13;
    const register unsigned short int ICDIF = 14;
    sbit  ICDIF_bit at IFS8.B14;
    const register unsigned short int JTAGIF = 15;
    sbit  JTAGIF_bit at IFS8.B15;

sfr unsigned int   volatile IFS9             absolute 0x812;
    const register unsigned short int PTGSTEPIF = 1;
    sbit  PTGSTEPIF_bit at IFS9.B1;
    const register unsigned short int PTGWDTIF = 2;
    sbit  PTGWDTIF_bit at IFS9.B2;
    const register unsigned short int PTG0IF = 3;
    sbit  PTG0IF_bit at IFS9.B3;
    const register unsigned short int PTG1IF = 4;
    sbit  PTG1IF_bit at IFS9.B4;
    const register unsigned short int PTG2IF = 5;
    sbit  PTG2IF_bit at IFS9.B5;
    const register unsigned short int PTG3IF = 6;
    sbit  PTG3IF_bit at IFS9.B6;
    const register unsigned short int ADCAN8IF = 7;
    sbit  ADCAN8IF_bit at IFS9.B7;
    const register unsigned short int ADCAN9IF = 8;
    sbit  ADCAN9IF_bit at IFS9.B8;
    const register unsigned short int ADCAN10IF = 9;
    sbit  ADCAN10IF_bit at IFS9.B9;
    const register unsigned short int ADCAN11IF = 10;
    sbit  ADCAN11IF_bit at IFS9.B10;
    const register unsigned short int ADCAN12IF = 11;
    sbit  ADCAN12IF_bit at IFS9.B11;
    const register unsigned short int ADCAN13IF = 12;
    sbit  ADCAN13IF_bit at IFS9.B12;
    const register unsigned short int ADCAN14IF = 13;
    sbit  ADCAN14IF_bit at IFS9.B13;
    const register unsigned short int ADCAN15IF = 14;
    sbit  ADCAN15IF_bit at IFS9.B14;
    const register unsigned short int ADCAN16IF = 15;
    sbit  ADCAN16IF_bit at IFS9.B15;

sfr unsigned int   volatile IFS10            absolute 0x814;
    const register unsigned short int ADCAN17IF = 0;
    sbit  ADCAN17IF_bit at IFS10.B0;
    const register unsigned short int ADCAN18IF = 1;
    sbit  ADCAN18IF_bit at IFS10.B1;
    const register unsigned short int ADCAN19IF = 2;
    sbit  ADCAN19IF_bit at IFS10.B2;
    const register unsigned short int ADCAN20IF = 3;
    sbit  ADCAN20IF_bit at IFS10.B3;
    const register unsigned short int ADCAN21IF = 4;
    sbit  ADCAN21IF_bit at IFS10.B4;
    const register unsigned short int I2C1BCIF = 13;
    sbit  I2C1BCIF_bit at IFS10.B13;
    const register unsigned short int I2C2BCIF = 14;
    sbit  I2C2BCIF_bit at IFS10.B14;

sfr unsigned int   volatile IFS11            absolute 0x816;
    const register unsigned short int ADCMP0IF = 1;
    sbit  ADCMP0IF_bit at IFS11.B1;
    const register unsigned short int ADCMP1IF = 2;
    sbit  ADCMP1IF_bit at IFS11.B2;
    const register unsigned short int ADFLTR0IF = 3;
    sbit  ADFLTR0IF_bit at IFS11.B3;
    const register unsigned short int ADFLTR1IF = 4;
    sbit  ADFLTR1IF_bit at IFS11.B4;
    const register unsigned short int ADCC0EIF = 11;
    sbit  ADCC0EIF_bit at IFS11.B11;
    const register unsigned short int ADCC1EIF = 12;
    sbit  ADCC1EIF_bit at IFS11.B12;
    const register unsigned short int ADCC2EIF = 13;
    sbit  ADCC2EIF_bit at IFS11.B13;
    const register unsigned short int ADCC3EIF = 14;
    sbit  ADCC3EIF_bit at IFS11.B14;

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
    const register unsigned short int SPI1TXIE = 9;
    sbit  SPI1TXIE_bit at IEC0.B9;
    const register unsigned short int SPI1RXIE = 10;
    sbit  SPI1RXIE_bit at IEC0.B10;
    const register unsigned short int U1RXIE = 11;
    sbit  U1RXIE_bit at IEC0.B11;
    const register unsigned short int U1TXIE = 12;
    sbit  U1TXIE_bit at IEC0.B12;
    const register unsigned short int ADCIE = 13;
    sbit  ADCIE_bit at IEC0.B13;
    const register unsigned short int DMA1IE = 14;
    sbit  DMA1IE_bit at IEC0.B14;
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

sfr unsigned int            IEC2             absolute 0x824;
    const register unsigned short int SPI2TXIE = 0;
    sbit  SPI2TXIE_bit at IEC2.B0;
    const register unsigned short int SPI2RXIE = 1;
    sbit  SPI2RXIE_bit at IEC2.B1;
    const register unsigned short int C1RXIE = 2;
    sbit  C1RXIE_bit at IEC2.B2;
    const register unsigned short int C1IE = 3;
    sbit  C1IE_bit at IEC2.B3;
    const register unsigned short int DMA3IE = 4;
    sbit  DMA3IE_bit at IEC2.B4;
    const register unsigned short int IC3IE = 5;
    sbit  IC3IE_bit at IEC2.B5;
    const register unsigned short int IC4IE = 6;
    sbit  IC4IE_bit at IEC2.B6;

sfr unsigned int            IEC3             absolute 0x826;
    const register unsigned short int SI2C2IE = 1;
    sbit  SI2C2IE_bit at IEC3.B1;
    const register unsigned short int MI2C2IE = 2;
    sbit  MI2C2IE_bit at IEC3.B2;
    const register unsigned short int INT4IE = 6;
    sbit  INT4IE_bit at IEC3.B6;
    const register unsigned short int C2RXIE = 7;
    sbit  C2RXIE_bit at IEC3.B7;
    const register unsigned short int C2IE = 8;
    sbit  C2IE_bit at IEC3.B8;
    const register unsigned short int PSEMIE = 9;
    sbit  PSEMIE_bit at IEC3.B9;

sfr unsigned int            IEC4             absolute 0x828;
    const register unsigned short int U1EIE = 1;
    sbit  U1EIE_bit at IEC4.B1;
    const register unsigned short int U2EIE = 2;
    sbit  U2EIE_bit at IEC4.B2;
    const register unsigned short int C1TXIE = 6;
    sbit  C1TXIE_bit at IEC4.B6;
    const register unsigned short int C2TXIE = 7;
    sbit  C2TXIE_bit at IEC4.B7;
    const register unsigned short int PSESIE = 9;
    sbit  PSESIE_bit at IEC4.B9;

sfr unsigned int            IEC5             absolute 0x82A;
    const register unsigned short int SPI3TXIE = 10;
    sbit  SPI3TXIE_bit at IEC5.B10;
    const register unsigned short int SPI3RXIE = 11;
    sbit  SPI3RXIE_bit at IEC5.B11;
    const register unsigned short int PWM1IE = 14;
    sbit  PWM1IE_bit at IEC5.B14;
    const register unsigned short int PWM2IE = 15;
    sbit  PWM2IE_bit at IEC5.B15;

sfr unsigned int   volatile IEC6             absolute 0x82C;
    const register unsigned short int PWM3IE = 0;
    sbit  PWM3IE_bit at IEC6.B0;
    const register unsigned short int PWM4IE = 1;
    sbit  PWM4IE_bit at IEC6.B1;
    const register unsigned short int PWM5IE = 2;
    sbit  PWM5IE_bit at IEC6.B2;
    const register unsigned short int PWM6IE = 3;
    sbit  PWM6IE_bit at IEC6.B3;
    const register unsigned short int PWM7IE = 4;
    sbit  PWM7IE_bit at IEC6.B4;
    const register unsigned short int PWM8IE = 5;
    sbit  PWM8IE_bit at IEC6.B5;
    const register unsigned short int AC2IE = 7;
    sbit  AC2IE_bit at IEC6.B7;
    const register unsigned short int AC3IE = 8;
    sbit  AC3IE_bit at IEC6.B8;
    const register unsigned short int AC4IE = 9;
    sbit  AC4IE_bit at IEC6.B9;
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
    const register unsigned short int SPI1EIE = 12;
    sbit  SPI1EIE_bit at IEC7.B12;
    const register unsigned short int SPI2EIE = 13;
    sbit  SPI2EIE_bit at IEC7.B13;
    const register unsigned short int SPI3EIE = 14;
    sbit  SPI3EIE_bit at IEC7.B14;

sfr unsigned int   volatile IEC8             absolute 0x830;
    const register unsigned short int CLC1IE = 10;
    sbit  CLC1IE_bit at IEC8.B10;
    const register unsigned short int CLC2IE = 11;
    sbit  CLC2IE_bit at IEC8.B11;
    const register unsigned short int CLC3IE = 12;
    sbit  CLC3IE_bit at IEC8.B12;
    const register unsigned short int CLC4IE = 13;
    sbit  CLC4IE_bit at IEC8.B13;
    const register unsigned short int JTAGIE = 15;
    sbit  JTAGIE_bit at IEC8.B15;

sfr unsigned int   volatile IEC9             absolute 0x832;
    const register unsigned short int PTGSTEPIE = 1;
    sbit  PTGSTEPIE_bit at IEC9.B1;
    const register unsigned short int PTGWDTIE = 2;
    sbit  PTGWDTIE_bit at IEC9.B2;
    const register unsigned short int PTG0IE = 3;
    sbit  PTG0IE_bit at IEC9.B3;
    const register unsigned short int PTG1IE = 4;
    sbit  PTG1IE_bit at IEC9.B4;
    const register unsigned short int PTG2IE = 5;
    sbit  PTG2IE_bit at IEC9.B5;
    const register unsigned short int PTG3IE = 6;
    sbit  PTG3IE_bit at IEC9.B6;
    const register unsigned short int ADCAN8IE = 7;
    sbit  ADCAN8IE_bit at IEC9.B7;
    const register unsigned short int ADCAN9IE = 8;
    sbit  ADCAN9IE_bit at IEC9.B8;
    const register unsigned short int ADCAN10IE = 9;
    sbit  ADCAN10IE_bit at IEC9.B9;
    const register unsigned short int ADCAN11IE = 10;
    sbit  ADCAN11IE_bit at IEC9.B10;
    const register unsigned short int ADCAN12IE = 11;
    sbit  ADCAN12IE_bit at IEC9.B11;
    const register unsigned short int ADCAN13IE = 12;
    sbit  ADCAN13IE_bit at IEC9.B12;
    const register unsigned short int ADCAN14IE = 13;
    sbit  ADCAN14IE_bit at IEC9.B13;
    const register unsigned short int ADCAN15IE = 14;
    sbit  ADCAN15IE_bit at IEC9.B14;
    const register unsigned short int ADCAN16IE = 15;
    sbit  ADCAN16IE_bit at IEC9.B15;

sfr unsigned int   volatile IEC10            absolute 0x834;
    const register unsigned short int ADCAN17IE = 0;
    sbit  ADCAN17IE_bit at IEC10.B0;
    const register unsigned short int ADCAN18IE = 1;
    sbit  ADCAN18IE_bit at IEC10.B1;
    const register unsigned short int ADCAN19IE = 2;
    sbit  ADCAN19IE_bit at IEC10.B2;
    const register unsigned short int ADCAN20IE = 3;
    sbit  ADCAN20IE_bit at IEC10.B3;
    const register unsigned short int ADCAN21IE = 4;
    sbit  ADCAN21IE_bit at IEC10.B4;
    const register unsigned short int I2C1BCIE = 13;
    sbit  I2C1BCIE_bit at IEC10.B13;
    const register unsigned short int I2C2BCIE = 14;
    sbit  I2C2BCIE_bit at IEC10.B14;

sfr unsigned int   volatile IEC11            absolute 0x836;
    const register unsigned short int ADCMP0IE = 1;
    sbit  ADCMP0IE_bit at IEC11.B1;
    const register unsigned short int ADCMP1IE = 2;
    sbit  ADCMP1IE_bit at IEC11.B2;
    const register unsigned short int ADFLTR0IE = 3;
    sbit  ADFLTR0IE_bit at IEC11.B3;
    const register unsigned short int ADFLTR1IE = 4;
    sbit  ADFLTR1IE_bit at IEC11.B4;
    const register unsigned short int ADCC0EIE = 11;
    sbit  ADCC0EIE_bit at IEC11.B11;
    const register unsigned short int ADCC1EIE = 12;
    sbit  ADCC1EIE_bit at IEC11.B12;
    const register unsigned short int ADCC2EIE = 13;
    sbit  ADCC2EIE_bit at IEC11.B13;
    const register unsigned short int ADCC3EIE = 14;
    sbit  ADCC3EIE_bit at IEC11.B14;

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
    const register unsigned short int DMA0P0 = 0;
    sbit  DMA0P0_bit at IPC1.B0;
    const register unsigned short int DMA0P1 = 1;
    sbit  DMA0P1_bit at IPC1.B1;
    const register unsigned short int DMA0P2 = 2;
    sbit  DMA0P2_bit at IPC1.B2;
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
    const register unsigned short int SPI1TXIP0 = 4;
    sbit  SPI1TXIP0_bit at IPC2.B4;
    const register unsigned short int SPI1TXIP1 = 5;
    sbit  SPI1TXIP1_bit at IPC2.B5;
    const register unsigned short int SPI1TXIP2 = 6;
    sbit  SPI1TXIP2_bit at IPC2.B6;
    const register unsigned short int SPI1RXIP0 = 8;
    sbit  SPI1RXIP0_bit at IPC2.B8;
    const register unsigned short int SPI1RXIP1 = 9;
    sbit  SPI1RXIP1_bit at IPC2.B9;
    const register unsigned short int SPI1RXIP2 = 10;
    sbit  SPI1RXIP2_bit at IPC2.B10;
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
    const register unsigned short int DMA1P0 = 8;
    sbit  DMA1P0_bit at IPC3.B8;
    const register unsigned short int DMA1P1 = 9;
    sbit  DMA1P1_bit at IPC3.B9;
    const register unsigned short int DMA1P2 = 10;
    sbit  DMA1P2_bit at IPC3.B10;
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
    const register unsigned short int CMP1IP0 = 8;
    sbit  CMP1IP0_bit at IPC4.B8;
    const register unsigned short int CMP1IP1 = 9;
    sbit  CMP1IP1_bit at IPC4.B9;
    const register unsigned short int CMP1IP2 = 10;
    sbit  CMP1IP2_bit at IPC4.B10;

sfr unsigned int            IPC5             absolute 0x84A;
    const register unsigned short int INT1IP0 = 0;
    sbit  INT1IP0_bit at IPC5.B0;
    const register unsigned short int INT1IP1 = 1;
    sbit  INT1IP1_bit at IPC5.B1;
    const register unsigned short int INT1IP2 = 2;
    sbit  INT1IP2_bit at IPC5.B2;

sfr unsigned int            IPC6             absolute 0x84C;
    const register unsigned short int DMA2P0 = 0;
    sbit  DMA2P0_bit at IPC6.B0;
    const register unsigned short int DMA2P1 = 1;
    sbit  DMA2P1_bit at IPC6.B1;
    const register unsigned short int DMA2P2 = 2;
    sbit  DMA2P2_bit at IPC6.B2;
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
    const register unsigned short int SPI2TXIP0 = 0;
    sbit  SPI2TXIP0_bit at IPC8.B0;
    const register unsigned short int SPI2TXIP1 = 1;
    sbit  SPI2TXIP1_bit at IPC8.B1;
    const register unsigned short int SPI2TXIP2 = 2;
    sbit  SPI2TXIP2_bit at IPC8.B2;
    const register unsigned short int SPI2RXIP0 = 4;
    sbit  SPI2RXIP0_bit at IPC8.B4;
    const register unsigned short int SPI2RXIP1 = 5;
    sbit  SPI2RXIP1_bit at IPC8.B5;
    const register unsigned short int SPI2RXIP2 = 6;
    sbit  SPI2RXIP2_bit at IPC8.B6;
    const register unsigned short int C1IP0 = 12;
    sbit  C1IP0_bit at IPC8.B12;
    const register unsigned short int C1IP1 = 13;
    sbit  C1IP1_bit at IPC8.B13;
    const register unsigned short int C1IP2 = 14;
    sbit  C1IP2_bit at IPC8.B14;

sfr unsigned int            IPC9             absolute 0x852;
    const register unsigned short int DMA3P0 = 0;
    sbit  DMA3P0_bit at IPC9.B0;
    const register unsigned short int DMA3P1 = 1;
    sbit  DMA3P1_bit at IPC9.B1;
    const register unsigned short int DMA3P2 = 2;
    sbit  DMA3P2_bit at IPC9.B2;
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

sfr unsigned int            IPC12            absolute 0x858;
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

sfr unsigned int            IPC13            absolute 0x85A;
    const register unsigned short int INT4IP0 = 8;
    sbit  INT4IP0_bit at IPC13.B8;
    const register unsigned short int INT4IP1 = 9;
    sbit  INT4IP1_bit at IPC13.B9;
    const register unsigned short int INT4IP2 = 10;
    sbit  INT4IP2_bit at IPC13.B10;
    const register unsigned short int C2RXIP0 = 12;
    sbit  C2RXIP0_bit at IPC13.B12;
    const register unsigned short int C2RXIP1 = 13;
    sbit  C2RXIP1_bit at IPC13.B13;
    const register unsigned short int C2RXIP2 = 14;
    sbit  C2RXIP2_bit at IPC13.B14;

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

sfr unsigned int            IPC17            absolute 0x862;
    const register unsigned short int C1TXIP0 = 8;
    sbit  C1TXIP0_bit at IPC17.B8;
    const register unsigned short int C1TXIP1 = 9;
    sbit  C1TXIP1_bit at IPC17.B9;
    const register unsigned short int C1TXIP2 = 10;
    sbit  C1TXIP2_bit at IPC17.B10;
    const register unsigned short int C2TXIP0 = 12;
    sbit  C2TXIP0_bit at IPC17.B12;
    const register unsigned short int C2TXIP1 = 13;
    sbit  C2TXIP1_bit at IPC17.B13;
    const register unsigned short int C2TXIP2 = 14;
    sbit  C2TXIP2_bit at IPC17.B14;

sfr unsigned int            IPC18            absolute 0x864;
    const register unsigned short int PSESIP0 = 4;
    sbit  PSESIP0_bit at IPC18.B4;
    const register unsigned short int PSESIP1 = 5;
    sbit  PSESIP1_bit at IPC18.B5;
    const register unsigned short int PSESIP2 = 6;
    sbit  PSESIP2_bit at IPC18.B6;

sfr unsigned int            IPC22            absolute 0x86C;
    const register unsigned short int SPI3TXIP0 = 8;
    sbit  SPI3TXIP0_bit at IPC22.B8;
    const register unsigned short int SPI3TXIP1 = 9;
    sbit  SPI3TXIP1_bit at IPC22.B9;
    const register unsigned short int SPI3TXIP2 = 10;
    sbit  SPI3TXIP2_bit at IPC22.B10;
    const register unsigned short int SPI3RXIP0 = 12;
    sbit  SPI3RXIP0_bit at IPC22.B12;
    const register unsigned short int SPI3RXIP1 = 13;
    sbit  SPI3RXIP1_bit at IPC22.B13;
    const register unsigned short int SPI3RXIP2 = 14;
    sbit  SPI3RXIP2_bit at IPC22.B14;

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

sfr unsigned int   volatile IPC25            absolute 0x872;
    const register unsigned short int PWM7IP0 = 0;
    sbit  PWM7IP0_bit at IPC25.B0;
    const register unsigned short int PWM7IP1 = 1;
    sbit  PWM7IP1_bit at IPC25.B1;
    const register unsigned short int PWM7IP2 = 2;
    sbit  PWM7IP2_bit at IPC25.B2;
    const register unsigned short int PWM8IP0 = 4;
    sbit  PWM8IP0_bit at IPC25.B4;
    const register unsigned short int PWM8IP1 = 5;
    sbit  PWM8IP1_bit at IPC25.B5;
    const register unsigned short int PWM8IP2 = 6;
    sbit  PWM8IP2_bit at IPC25.B6;
    const register unsigned short int AC2IP0 = 12;
    sbit  AC2IP0_bit at IPC25.B12;
    const register unsigned short int AC2IP1 = 13;
    sbit  AC2IP1_bit at IPC25.B13;
    const register unsigned short int AC2IP2 = 14;
    sbit  AC2IP2_bit at IPC25.B14;
    const register unsigned short int CMP2IP0 = 12;
    sbit  CMP2IP0_bit at IPC25.B12;
    const register unsigned short int CMP2IP1 = 13;
    sbit  CMP2IP1_bit at IPC25.B13;
    const register unsigned short int CMP2IP2 = 14;
    sbit  CMP2IP2_bit at IPC25.B14;

sfr unsigned int   volatile IPC26            absolute 0x874;
    const register unsigned short int AC3IP0 = 0;
    sbit  AC3IP0_bit at IPC26.B0;
    const register unsigned short int AC3IP1 = 1;
    sbit  AC3IP1_bit at IPC26.B1;
    const register unsigned short int AC3IP2 = 2;
    sbit  AC3IP2_bit at IPC26.B2;
    const register unsigned short int AC4IP0 = 4;
    sbit  AC4IP0_bit at IPC26.B4;
    const register unsigned short int AC4IP1 = 5;
    sbit  AC4IP1_bit at IPC26.B5;
    const register unsigned short int AC4IP2 = 6;
    sbit  AC4IP2_bit at IPC26.B6;
    const register unsigned short int CMP3IP0 = 0;
    sbit  CMP3IP0_bit at IPC26.B0;
    const register unsigned short int CMP3IP1 = 1;
    sbit  CMP3IP1_bit at IPC26.B1;
    const register unsigned short int CMP3IP2 = 2;
    sbit  CMP3IP2_bit at IPC26.B2;
    const register unsigned short int CMP4IP0 = 4;
    sbit  CMP4IP0_bit at IPC26.B4;
    const register unsigned short int CMP4IP1 = 5;
    sbit  CMP4IP1_bit at IPC26.B5;
    const register unsigned short int CMP4IP2 = 6;
    sbit  CMP4IP2_bit at IPC26.B6;

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

sfr unsigned int   volatile IPC31            absolute 0x87E;
    const register unsigned short int SPI1EIP0 = 0;
    sbit  SPI1EIP0_bit at IPC31.B0;
    const register unsigned short int SPI1EIP1 = 1;
    sbit  SPI1EIP1_bit at IPC31.B1;
    const register unsigned short int SPI1EIP2 = 2;
    sbit  SPI1EIP2_bit at IPC31.B2;
    const register unsigned short int SPI2EIP0 = 4;
    sbit  SPI2EIP0_bit at IPC31.B4;
    const register unsigned short int SPI2EIP1 = 5;
    sbit  SPI2EIP1_bit at IPC31.B5;
    const register unsigned short int SPI2EIP2 = 6;
    sbit  SPI2EIP2_bit at IPC31.B6;
    const register unsigned short int SPI3EIP0 = 8;
    sbit  SPI3EIP0_bit at IPC31.B8;
    const register unsigned short int SPI3EIP1 = 9;
    sbit  SPI3EIP1_bit at IPC31.B9;
    const register unsigned short int SPI3EIP2 = 10;
    sbit  SPI3EIP2_bit at IPC31.B10;

sfr unsigned int   volatile IPC34            absolute 0x884;
    const register unsigned short int CLC1IP0 = 8;
    sbit  CLC1IP0_bit at IPC34.B8;
    const register unsigned short int CLC1IP1 = 9;
    sbit  CLC1IP1_bit at IPC34.B9;
    const register unsigned short int CLC1IP2 = 10;
    sbit  CLC1IP2_bit at IPC34.B10;
    const register unsigned short int CLC2IP0 = 12;
    sbit  CLC2IP0_bit at IPC34.B12;
    const register unsigned short int CLC2IP1 = 13;
    sbit  CLC2IP1_bit at IPC34.B13;
    const register unsigned short int CLC2IP2 = 14;
    sbit  CLC2IP2_bit at IPC34.B14;

sfr unsigned int   volatile IPC35            absolute 0x886;
    const register unsigned short int CLC3IP0 = 0;
    sbit  CLC3IP0_bit at IPC35.B0;
    const register unsigned short int CLC3IP1 = 1;
    sbit  CLC3IP1_bit at IPC35.B1;
    const register unsigned short int CLC3IP2 = 2;
    sbit  CLC3IP2_bit at IPC35.B2;
    const register unsigned short int CLC4IP0 = 4;
    sbit  CLC4IP0_bit at IPC35.B4;
    const register unsigned short int CLC4IP1 = 5;
    sbit  CLC4IP1_bit at IPC35.B5;
    const register unsigned short int CLC4IP2 = 6;
    sbit  CLC4IP2_bit at IPC35.B6;
    const register unsigned short int ICDIP0 = 8;
    sbit  ICDIP0_bit at IPC35.B8;
    const register unsigned short int ICDIP1 = 9;
    sbit  ICDIP1_bit at IPC35.B9;
    const register unsigned short int ICDIP2 = 10;
    sbit  ICDIP2_bit at IPC35.B10;
    const register unsigned short int JTAGIP0 = 12;
    sbit  JTAGIP0_bit at IPC35.B12;
    const register unsigned short int JTAGIP1 = 13;
    sbit  JTAGIP1_bit at IPC35.B13;
    const register unsigned short int JTAGIP2 = 14;
    sbit  JTAGIP2_bit at IPC35.B14;

sfr unsigned int   volatile IPC36            absolute 0x888;
    const register unsigned short int PTGSTEP0 = 4;
    sbit  PTGSTEP0_bit at IPC36.B4;
    const register unsigned short int PTGSTEP1 = 5;
    sbit  PTGSTEP1_bit at IPC36.B5;
    const register unsigned short int PTGSTEP2 = 6;
    sbit  PTGSTEP2_bit at IPC36.B6;
    const register unsigned short int PTGWDTP0 = 8;
    sbit  PTGWDTP0_bit at IPC36.B8;
    const register unsigned short int PTGWDTP1 = 9;
    sbit  PTGWDTP1_bit at IPC36.B9;
    const register unsigned short int PTGWDTP2 = 10;
    sbit  PTGWDTP2_bit at IPC36.B10;
    const register unsigned short int PTGP0 = 12;
    sbit  PTGP0_bit at IPC36.B12;
    const register unsigned short int PTG0P1 = 13;
    sbit  PTG0P1_bit at IPC36.B13;
    const register unsigned short int PTG0P2 = 14;
    sbit  PTG0P2_bit at IPC36.B14;

sfr unsigned int   volatile IPC37            absolute 0x88A;
    const register unsigned short int PTG1P0 = 0;
    sbit  PTG1P0_bit at IPC37.B0;
    const register unsigned short int PTG1P1 = 1;
    sbit  PTG1P1_bit at IPC37.B1;
    const register unsigned short int PTG1P2 = 2;
    sbit  PTG1P2_bit at IPC37.B2;
    const register unsigned short int PTG2P0 = 4;
    sbit  PTG2P0_bit at IPC37.B4;
    const register unsigned short int PTG2P1 = 5;
    sbit  PTG2P1_bit at IPC37.B5;
    const register unsigned short int PTG2P2 = 6;
    sbit  PTG2P2_bit at IPC37.B6;
    const register unsigned short int PTG3P0 = 8;
    sbit  PTG3P0_bit at IPC37.B8;
    const register unsigned short int PTG3P1 = 9;
    sbit  PTG3P1_bit at IPC37.B9;
    const register unsigned short int PTG3P2 = 10;
    sbit  PTG3P2_bit at IPC37.B10;
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
    const register unsigned short int ADCAN12IP0 = 12;
    sbit  ADCAN12IP0_bit at IPC38.B12;
    const register unsigned short int ADCAN12IP1 = 13;
    sbit  ADCAN12IP1_bit at IPC38.B13;
    const register unsigned short int ADCAN12IP2 = 14;
    sbit  ADCAN12IP2_bit at IPC38.B14;

sfr unsigned int   volatile IPC39            absolute 0x88E;
    const register unsigned short int ADCAN13IP0 = 0;
    sbit  ADCAN13IP0_bit at IPC39.B0;
    const register unsigned short int ADCAN13IP1 = 1;
    sbit  ADCAN13IP1_bit at IPC39.B1;
    const register unsigned short int ADCAN13IP2 = 2;
    sbit  ADCAN13IP2_bit at IPC39.B2;
    const register unsigned short int ADCAN14IP0 = 4;
    sbit  ADCAN14IP0_bit at IPC39.B4;
    const register unsigned short int ADCAN14IP1 = 5;
    sbit  ADCAN14IP1_bit at IPC39.B5;
    const register unsigned short int ADCAN14IP2 = 6;
    sbit  ADCAN14IP2_bit at IPC39.B6;
    const register unsigned short int ADCAN15IP0 = 8;
    sbit  ADCAN15IP0_bit at IPC39.B8;
    const register unsigned short int ADCAN15IP1 = 9;
    sbit  ADCAN15IP1_bit at IPC39.B9;
    const register unsigned short int ADCAN15IP2 = 10;
    sbit  ADCAN15IP2_bit at IPC39.B10;
    const register unsigned short int ADCAN16IP0 = 12;
    sbit  ADCAN16IP0_bit at IPC39.B12;
    const register unsigned short int ADCAN16IP1 = 13;
    sbit  ADCAN16IP1_bit at IPC39.B13;
    const register unsigned short int ADCAN16IP2 = 14;
    sbit  ADCAN16IP2_bit at IPC39.B14;

sfr unsigned int   volatile IPC40            absolute 0x890;
    const register unsigned short int ADCAN17IP0 = 0;
    sbit  ADCAN17IP0_bit at IPC40.B0;
    const register unsigned short int ADCAN17IP1 = 1;
    sbit  ADCAN17IP1_bit at IPC40.B1;
    const register unsigned short int ADCAN17IP2 = 2;
    sbit  ADCAN17IP2_bit at IPC40.B2;
    const register unsigned short int ADCAN18IP0 = 4;
    sbit  ADCAN18IP0_bit at IPC40.B4;
    const register unsigned short int ADCAN18IP1 = 5;
    sbit  ADCAN18IP1_bit at IPC40.B5;
    const register unsigned short int ADCAN18IP2 = 6;
    sbit  ADCAN18IP2_bit at IPC40.B6;
    const register unsigned short int ADCAN19IP0 = 8;
    sbit  ADCAN19IP0_bit at IPC40.B8;
    const register unsigned short int ADCAN19IP1 = 9;
    sbit  ADCAN19IP1_bit at IPC40.B9;
    const register unsigned short int ADCAN19IP2 = 10;
    sbit  ADCAN19IP2_bit at IPC40.B10;
    const register unsigned short int ADCAN20IP0 = 12;
    sbit  ADCAN20IP0_bit at IPC40.B12;
    const register unsigned short int ADCAN20IP1 = 13;
    sbit  ADCAN20IP1_bit at IPC40.B13;
    const register unsigned short int ADCAN20IP2 = 14;
    sbit  ADCAN20IP2_bit at IPC40.B14;

sfr unsigned int   volatile IPC41            absolute 0x892;
    const register unsigned short int ADCAN21IP0 = 0;
    sbit  ADCAN21IP0_bit at IPC41.B0;
    const register unsigned short int ADCAN21IP1 = 1;
    sbit  ADCAN21IP1_bit at IPC41.B1;
    const register unsigned short int ADCAN21IP2 = 2;
    sbit  ADCAN21IP2_bit at IPC41.B2;

sfr unsigned int   volatile IPC42            absolute 0x894;
sfr unsigned int   volatile IPC43            absolute 0x896;
    const register unsigned short int I2C1BCIP0 = 4;
    sbit  I2C1BCIP0_bit at IPC43.B4;
    const register unsigned short int I2C1BCIP1 = 5;
    sbit  I2C1BCIP1_bit at IPC43.B5;
    const register unsigned short int I2C1BCIP2 = 6;
    sbit  I2C1BCIP2_bit at IPC43.B6;
    const register unsigned short int I2C2BCIP0 = 8;
    sbit  I2C2BCIP0_bit at IPC43.B8;
    const register unsigned short int I2C2BCIP1 = 9;
    sbit  I2C2BCIP1_bit at IPC43.B9;
    const register unsigned short int I2C2BCIP2 = 10;
    sbit  I2C2BCIP2_bit at IPC43.B10;

sfr unsigned int   volatile IPC44            absolute 0x898;
    const register unsigned short int ADCMP0IP0 = 4;
    sbit  ADCMP0IP0_bit at IPC44.B4;
    const register unsigned short int ADCMP0IP1 = 5;
    sbit  ADCMP0IP1_bit at IPC44.B5;
    const register unsigned short int ADCMP0IP2 = 6;
    sbit  ADCMP0IP2_bit at IPC44.B6;
    const register unsigned short int ADCMP1IP0 = 8;
    sbit  ADCMP1IP0_bit at IPC44.B8;
    const register unsigned short int ADCMP1IP1 = 9;
    sbit  ADCMP1IP1_bit at IPC44.B9;
    const register unsigned short int ADCMP1IP2 = 10;
    sbit  ADCMP1IP2_bit at IPC44.B10;
    const register unsigned short int ADFLTR0IP0 = 12;
    sbit  ADFLTR0IP0_bit at IPC44.B12;
    const register unsigned short int ADFLTR0IP1 = 13;
    sbit  ADFLTR0IP1_bit at IPC44.B13;
    const register unsigned short int ADFLTR0IP2 = 14;
    sbit  ADFLTR0IP2_bit at IPC44.B14;

sfr unsigned int   volatile IPC45            absolute 0x89A;
    const register unsigned short int ADFLTR1IP0 = 0;
    sbit  ADFLTR1IP0_bit at IPC45.B0;
    const register unsigned short int ADFLTR1IP1 = 1;
    sbit  ADFLTR1IP1_bit at IPC45.B1;
    const register unsigned short int ADFLTR1IP2 = 2;
    sbit  ADFLTR1IP2_bit at IPC45.B2;

sfr unsigned int   volatile IPC46            absolute 0x89C;
    const register unsigned short int ADCC0EP0 = 12;
    sbit  ADCC0EP0_bit at IPC46.B12;
    const register unsigned short int ADCC0EP1 = 13;
    sbit  ADCC0EP1_bit at IPC46.B13;
    const register unsigned short int ADCC0EP2 = 14;
    sbit  ADCC0EP2_bit at IPC46.B14;

sfr unsigned int   volatile IPC47            absolute 0x89E;
    const register unsigned short int ADCC1EP0 = 0;
    sbit  ADCC1EP0_bit at IPC47.B0;
    const register unsigned short int ADCC1EP1 = 1;
    sbit  ADCC1EP1_bit at IPC47.B1;
    const register unsigned short int ADCC1EP2 = 2;
    sbit  ADCC1EP2_bit at IPC47.B2;
    const register unsigned short int ADCC2EP0 = 4;
    sbit  ADCC2EP0_bit at IPC47.B4;
    const register unsigned short int ADCC2EP1 = 5;
    sbit  ADCC2EP1_bit at IPC47.B5;
    const register unsigned short int ADCC2EP2 = 6;
    sbit  ADCC2EP2_bit at IPC47.B6;
    const register unsigned short int ADCC3EP0 = 8;
    sbit  ADCC3EP0_bit at IPC47.B8;
    const register unsigned short int ADCC3EP1 = 9;
    sbit  ADCC3EP1_bit at IPC47.B9;
    const register unsigned short int ADCC3EP2 = 10;
    sbit  ADCC3EP2_bit at IPC47.B10;

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
sfr unsigned int   volatile CLC1CONL         absolute 0x9C0;
    const register unsigned short int MODE0 = 0;
    sbit  MODE0_bit at CLC1CONL.B0;
    const register unsigned short int MODE1 = 1;
    sbit  MODE1_bit at CLC1CONL.B1;
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

sfr unsigned int   volatile CLC1CONH         absolute 0x9C2;
    const register unsigned short int G1POL = 0;
    sbit  G1POL_bit at CLC1CONH.B0;
    const register unsigned short int G2POL = 1;
    sbit  G2POL_bit at CLC1CONH.B1;
    const register unsigned short int G3POL = 2;
    sbit  G3POL_bit at CLC1CONH.B2;
    const register unsigned short int G4POL = 3;
    sbit  G4POL_bit at CLC1CONH.B3;

sfr unsigned int   volatile CLC1SEL          absolute 0x9C4;
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

sfr unsigned int   volatile CLC1SELL         absolute 0x9C4;
sfr unsigned int   volatile CLC1GLSL         absolute 0x9C8;
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

sfr unsigned int   volatile CLC1GLSH         absolute 0x9CA;
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

sfr unsigned int   volatile CLC2CONL         absolute 0x9CC;
sfr unsigned int   volatile CLC2CONH         absolute 0x9CE;
sfr unsigned int   volatile CLC2SEL          absolute 0x9D0;
sfr unsigned int   volatile CLC2SELL         absolute 0x9D0;
sfr unsigned int   volatile CLC2GLSL         absolute 0x9D4;
sfr unsigned int   volatile CLC2GLSH         absolute 0x9D6;
sfr unsigned int   volatile CLC3CONL         absolute 0x9D8;
sfr unsigned int   volatile CLC3CONH         absolute 0x9DA;
sfr unsigned int   volatile CLC3SEL          absolute 0x9DC;
sfr unsigned int   volatile CLC3SELL         absolute 0x9DC;
sfr unsigned int   volatile CLC3GLSL         absolute 0x9E0;
sfr unsigned int   volatile CLC3GLSH         absolute 0x9E2;
sfr unsigned int   volatile CLC4CONL         absolute 0x9E4;
sfr unsigned int   volatile CLC4CONH         absolute 0x9E6;
sfr unsigned int   volatile CLC4SEL          absolute 0x9E8;
sfr unsigned int   volatile CLC4SELL         absolute 0x9E8;
sfr unsigned int   volatile CLC4GLSL         absolute 0x9EC;
sfr unsigned int   volatile CLC4GLSH         absolute 0x9EE;
sfr unsigned int   volatile PTGCST           absolute 0xAC0;
    const register unsigned short int PTGWTO = 6;
    sbit  PTGWTO_bit at PTGCST.B6;
    const register unsigned short int PTGSTRT = 7;
    sbit  PTGSTRT_bit at PTGCST.B7;
    const register unsigned short int PTGIVIS = 8;
    sbit  PTGIVIS_bit at PTGCST.B8;
    const register unsigned short int PTGSSEN = 9;
    sbit  PTGSSEN_bit at PTGCST.B9;
    const register unsigned short int PTGSWT = 10;
    sbit  PTGSWT_bit at PTGCST.B10;
    const register unsigned short int PTGTOGL = 12;
    sbit  PTGTOGL_bit at PTGCST.B12;
    const register unsigned short int PTGSIDL = 13;
    sbit  PTGSIDL_bit at PTGCST.B13;
    const register unsigned short int PTGEN = 15;
    sbit  PTGEN_bit at PTGCST.B15;

sfr unsigned int   volatile PTGCON           absolute 0xAC2;
sfr unsigned int   volatile PTGBTE           absolute 0xAC4;
    const register unsigned short int OC1TSS = 0;
    sbit  OC1TSS_bit at PTGBTE.B0;
    const register unsigned short int OC2TSS = 1;
    sbit  OC2TSS_bit at PTGBTE.B1;
    const register unsigned short int OC3TSS = 2;
    sbit  OC3TSS_bit at PTGBTE.B2;
    const register unsigned short int OC4TSS = 3;
    sbit  OC4TSS_bit at PTGBTE.B3;
    const register unsigned short int OC1CS = 4;
    sbit  OC1CS_bit at PTGBTE.B4;
    const register unsigned short int OC2CS = 5;
    sbit  OC2CS_bit at PTGBTE.B5;
    const register unsigned short int OC3CS = 6;
    sbit  OC3CS_bit at PTGBTE.B6;
    const register unsigned short int OC4CS = 7;
    sbit  OC4CS_bit at PTGBTE.B7;
    const register unsigned short int IC1TSS = 8;
    sbit  IC1TSS_bit at PTGBTE.B8;
    const register unsigned short int IC2TSS = 9;
    sbit  IC2TSS_bit at PTGBTE.B9;
    const register unsigned short int IC3TSS = 10;
    sbit  IC3TSS_bit at PTGBTE.B10;
    const register unsigned short int IC4TSS = 11;
    sbit  IC4TSS_bit at PTGBTE.B11;
    const register unsigned short int ADCTS1 = 12;
    sbit  ADCTS1_bit at PTGBTE.B12;
    const register unsigned short int ADCTS2 = 13;
    sbit  ADCTS2_bit at PTGBTE.B13;
    const register unsigned short int ADCTS3 = 14;
    sbit  ADCTS3_bit at PTGBTE.B14;
    const register unsigned short int ADCTS4 = 15;
    sbit  ADCTS4_bit at PTGBTE.B15;

sfr unsigned int   volatile PTGHOLD          absolute 0xAC6;
sfr unsigned int   volatile PTGT0LIM         absolute 0xAC8;
sfr unsigned int   volatile PTGT1LIM         absolute 0xACA;
sfr unsigned int   volatile PTGSDLIM         absolute 0xACC;
sfr unsigned int   volatile PTGC0LIM         absolute 0xACE;
sfr unsigned int   volatile PTGC1LIM         absolute 0xAD0;
sfr unsigned int   volatile PTGADJ           absolute 0xAD2;
sfr unsigned int   volatile PTGL0            absolute 0xAD4;
sfr unsigned int   volatile PTGQPTR          absolute 0xAD6;
sfr unsigned int   volatile PTGQUE0          absolute 0xAD8;
sfr unsigned int   volatile PTGQUE1          absolute 0xADA;
sfr unsigned int   volatile PTGQUE2          absolute 0xADC;
sfr unsigned int   volatile PTGQUE3          absolute 0xADE;
sfr unsigned int   volatile PTGQUE4          absolute 0xAE0;
sfr unsigned int   volatile PTGQUE5          absolute 0xAE2;
sfr unsigned int   volatile PTGQUE6          absolute 0xAE4;
sfr unsigned int   volatile PTGQUE7          absolute 0xAE6;
sfr unsigned int   volatile PTGQUE8          absolute 0xAE8;
sfr unsigned int   volatile PTGQUE9          absolute 0xAEA;
sfr unsigned int   volatile PTGQUE10         absolute 0xAEC;
sfr unsigned int   volatile PTGQUE11         absolute 0xAEE;
sfr unsigned int   volatile PTGQUE12         absolute 0xAF0;
sfr unsigned int   volatile PTGQUE13         absolute 0xAF2;
sfr unsigned int   volatile PTGQUE14         absolute 0xAF4;
sfr unsigned int   volatile PTGQUE15         absolute 0xAF6;
sfr unsigned int            DMA0CON          absolute 0xB00;
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
    const register unsigned short int PWCOL4 = 4;
    sbit  PWCOL4_bit at DMAPWC.B4;
    const register unsigned short int PWCOL5 = 5;
    sbit  PWCOL5_bit at DMAPWC.B5;
    const register unsigned short int PWCOL6 = 6;
    sbit  PWCOL6_bit at DMAPWC.B6;
    const register unsigned short int PWCOL7 = 7;
    sbit  PWCOL7_bit at DMAPWC.B7;
    const register unsigned short int PWCOL8 = 8;
    sbit  PWCOL8_bit at DMAPWC.B8;
    const register unsigned short int PWCOL9 = 9;
    sbit  PWCOL9_bit at DMAPWC.B9;
    const register unsigned short int PWCOL10 = 10;
    sbit  PWCOL10_bit at DMAPWC.B10;
    const register unsigned short int PWCOL11 = 11;
    sbit  PWCOL11_bit at DMAPWC.B11;
    const register unsigned short int PWCOL12 = 12;
    sbit  PWCOL12_bit at DMAPWC.B12;
    const register unsigned short int PWCOL13 = 13;
    sbit  PWCOL13_bit at DMAPWC.B13;
    const register unsigned short int PWCOL14 = 14;
    sbit  PWCOL14_bit at DMAPWC.B14;

sfr unsigned int   volatile DMARQC           absolute 0xBF2;
    const register unsigned short int RQCOL0 = 0;
    sbit  RQCOL0_bit at DMARQC.B0;
    const register unsigned short int RQCOL1 = 1;
    sbit  RQCOL1_bit at DMARQC.B1;
    const register unsigned short int RQCOL2 = 2;
    sbit  RQCOL2_bit at DMARQC.B2;
    const register unsigned short int RQCOL3 = 3;
    sbit  RQCOL3_bit at DMARQC.B3;
    const register unsigned short int RQCOL4 = 4;
    sbit  RQCOL4_bit at DMARQC.B4;
    const register unsigned short int RQCOL5 = 5;
    sbit  RQCOL5_bit at DMARQC.B5;
    const register unsigned short int RQCOL6 = 6;
    sbit  RQCOL6_bit at DMARQC.B6;
    const register unsigned short int RQCOL7 = 7;
    sbit  RQCOL7_bit at DMARQC.B7;
    const register unsigned short int RQCOL8 = 8;
    sbit  RQCOL8_bit at DMARQC.B8;
    const register unsigned short int RQCOL9 = 9;
    sbit  RQCOL9_bit at DMARQC.B9;
    const register unsigned short int RQCOL10 = 10;
    sbit  RQCOL10_bit at DMARQC.B10;
    const register unsigned short int RQCOL11 = 11;
    sbit  RQCOL11_bit at DMARQC.B11;
    const register unsigned short int RQCOL12 = 12;
    sbit  RQCOL12_bit at DMARQC.B12;
    const register unsigned short int RQCOL13 = 13;
    sbit  RQCOL13_bit at DMARQC.B13;
    const register unsigned short int RQCOL14 = 14;
    sbit  RQCOL14_bit at DMARQC.B14;

sfr unsigned int   volatile DMAPPS           absolute 0xBF4;
    const register unsigned short int PPST0 = 0;
    sbit  PPST0_bit at DMAPPS.B0;
    const register unsigned short int PPST1 = 1;
    sbit  PPST1_bit at DMAPPS.B1;
    const register unsigned short int PPST2 = 2;
    sbit  PPST2_bit at DMAPPS.B2;
    const register unsigned short int PPST3 = 3;
    sbit  PPST3_bit at DMAPPS.B3;
    const register unsigned short int PPST4 = 4;
    sbit  PPST4_bit at DMAPPS.B4;
    const register unsigned short int PPST5 = 5;
    sbit  PPST5_bit at DMAPPS.B5;
    const register unsigned short int PPST6 = 6;
    sbit  PPST6_bit at DMAPPS.B6;
    const register unsigned short int PPST7 = 7;
    sbit  PPST7_bit at DMAPPS.B7;
    const register unsigned short int PPST8 = 8;
    sbit  PPST8_bit at DMAPPS.B8;
    const register unsigned short int PPST9 = 9;
    sbit  PPST9_bit at DMAPPS.B9;
    const register unsigned short int PPST10 = 10;
    sbit  PPST10_bit at DMAPPS.B10;
    const register unsigned short int PPST11 = 11;
    sbit  PPST11_bit at DMAPPS.B11;
    const register unsigned short int PPST12 = 12;
    sbit  PPST12_bit at DMAPPS.B12;
    const register unsigned short int PPST13 = 13;
    sbit  PPST13_bit at DMAPPS.B13;
    const register unsigned short int PPST14 = 14;
    sbit  PPST14_bit at DMAPPS.B14;

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
sfr unsigned int   volatile PWMCON4          absolute 0xC80;
sfr unsigned int   volatile IOCON4           absolute 0xC82;
sfr unsigned int   volatile FCLCON4          absolute 0xC84;
sfr unsigned int   volatile PDC4             absolute 0xC86;
sfr unsigned int   volatile PHASE4           absolute 0xC88;
sfr unsigned int   volatile DTR4             absolute 0xC8A;
sfr unsigned int   volatile ALTDTR4          absolute 0xC8C;
sfr unsigned int   volatile SDC4             absolute 0xC8E;
sfr unsigned int   volatile SPHASE4          absolute 0xC90;
sfr unsigned int   volatile TRIG4            absolute 0xC92;
sfr unsigned int   volatile TRGCON4          absolute 0xC94;
sfr unsigned int   volatile STRIG4           absolute 0xC96;
sfr unsigned int   volatile PWMCAP4          absolute 0xC98;
sfr unsigned int   volatile LEBCON4          absolute 0xC9A;
    const register unsigned short int BCL_LEBCON4 = 4;
    sbit  BCL_LEBCON4_bit at LEBCON4.B4;

sfr unsigned int   volatile LEBDLY4          absolute 0xC9C;
sfr unsigned int   volatile AUXCON4          absolute 0xC9E;
sfr unsigned int   volatile PWMCON5          absolute 0xCA0;
sfr unsigned int   volatile IOCON5           absolute 0xCA2;
sfr unsigned int   volatile FCLCON5          absolute 0xCA4;
sfr unsigned int   volatile PDC5             absolute 0xCA6;
sfr unsigned int   volatile PHASE5           absolute 0xCA8;
sfr unsigned int   volatile DTR5             absolute 0xCAA;
sfr unsigned int   volatile ALTDTR5          absolute 0xCAC;
sfr unsigned int   volatile SDC5             absolute 0xCAE;
sfr unsigned int   volatile SPHASE5          absolute 0xCB0;
sfr unsigned int   volatile TRIG5            absolute 0xCB2;
sfr unsigned int   volatile TRGCON5          absolute 0xCB4;
sfr unsigned int   volatile STRIG5           absolute 0xCB6;
sfr unsigned int   volatile PWMCAP5          absolute 0xCB8;
sfr unsigned int   volatile LEBCON5          absolute 0xCBA;
    const register unsigned short int BCL_LEBCON5 = 4;
    sbit  BCL_LEBCON5_bit at LEBCON5.B4;

sfr unsigned int   volatile LEBDLY5          absolute 0xCBC;
sfr unsigned int   volatile AUXCON5          absolute 0xCBE;
sfr unsigned int   volatile PWMCON6          absolute 0xCC0;
sfr unsigned int   volatile IOCON6           absolute 0xCC2;
sfr unsigned int   volatile FCLCON6          absolute 0xCC4;
sfr unsigned int   volatile PDC6             absolute 0xCC6;
sfr unsigned int   volatile PHASE6           absolute 0xCC8;
sfr unsigned int   volatile DTR6             absolute 0xCCA;
sfr unsigned int   volatile ALTDTR6          absolute 0xCCC;
sfr unsigned int   volatile SDC6             absolute 0xCCE;
sfr unsigned int   volatile SPHASE6          absolute 0xCD0;
sfr unsigned int   volatile TRIG6            absolute 0xCD2;
sfr unsigned int   volatile TRGCON6          absolute 0xCD4;
sfr unsigned int   volatile STRIG6           absolute 0xCD6;
sfr unsigned int   volatile PWMCAP6          absolute 0xCD8;
sfr unsigned int   volatile LEBCON6          absolute 0xCDA;
    const register unsigned short int BCL_LEBCON6 = 4;
    sbit  BCL_LEBCON6_bit at LEBCON6.B4;

sfr unsigned int   volatile LEBDLY6          absolute 0xCDC;
sfr unsigned int   volatile AUXCON6          absolute 0xCDE;
sfr unsigned int   volatile PWMCON7          absolute 0xCE0;
sfr unsigned int   volatile IOCON7           absolute 0xCE2;
sfr unsigned int   volatile FCLCON7          absolute 0xCE4;
sfr unsigned int   volatile PDC7             absolute 0xCE6;
sfr unsigned int   volatile PHASE7           absolute 0xCE8;
sfr unsigned int   volatile DTR7             absolute 0xCEA;
sfr unsigned int   volatile ALTDTR7          absolute 0xCEC;
sfr unsigned int   volatile SDC7             absolute 0xCEE;
sfr unsigned int   volatile SPHASE7          absolute 0xCF0;
sfr unsigned int   volatile TRIG7            absolute 0xCF2;
sfr unsigned int   volatile TRGCON7          absolute 0xCF4;
sfr unsigned int   volatile STRIG7           absolute 0xCF6;
sfr unsigned int   volatile PWMCAP7          absolute 0xCF8;
sfr unsigned int   volatile LEBCON7          absolute 0xCFA;
    const register unsigned short int BCL_LEBCON7 = 4;
    sbit  BCL_LEBCON7_bit at LEBCON7.B4;

sfr unsigned int   volatile LEBDLY7          absolute 0xCFC;
sfr unsigned int   volatile AUXCON7          absolute 0xCFE;
sfr unsigned int   volatile PWMCON8          absolute 0xD00;
sfr unsigned int   volatile IOCON8           absolute 0xD02;
sfr unsigned int   volatile FCLCON8          absolute 0xD04;
sfr unsigned int   volatile PDC8             absolute 0xD06;
sfr unsigned int   volatile PHASE8           absolute 0xD08;
sfr unsigned int   volatile DTR8             absolute 0xD0A;
sfr unsigned int   volatile ALTDTR8          absolute 0xD0C;
sfr unsigned int   volatile SDC8             absolute 0xD0E;
sfr unsigned int   volatile SPHASE8          absolute 0xD10;
sfr unsigned int   volatile TRIG8            absolute 0xD12;
sfr unsigned int   volatile TRGCON8          absolute 0xD14;
sfr unsigned int   volatile STRIG8           absolute 0xD16;
sfr unsigned int   volatile PWMCAP8          absolute 0xD18;
sfr unsigned int   volatile LEBCON8          absolute 0xD1A;
    const register unsigned short int BCL_LEBCON8 = 4;
    sbit  BCL_LEBCON8_bit at LEBCON8.B4;

sfr unsigned int   volatile LEBDLY8          absolute 0xD1C;
sfr unsigned int   volatile AUXCON8          absolute 0xD1E;
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
    const register unsigned short int ANSB5 = 5;
    sbit  ANSB5_bit at ANSELB.B5;
    const register unsigned short int ANSB6 = 6;
    sbit  ANSB6_bit at ANSELB.B6;
    const register unsigned short int ANSB7 = 7;
    sbit  ANSB7_bit at ANSELB.B7;
    const register unsigned short int ANSB9 = 9;
    sbit  ANSB9_bit at ANSELB.B9;

sfr unsigned int   volatile TRISC            absolute 0xE20;
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
    const register unsigned short int TRISC12 = 12;
    sbit  TRISC12_bit at TRISC.B12;
    const register unsigned short int TRISC13 = 13;
    sbit  TRISC13_bit at TRISC.B13;
    const register unsigned short int TRISC14 = 14;
    sbit  TRISC14_bit at TRISC.B14;
    const register unsigned short int TRISC15 = 15;
    sbit  TRISC15_bit at TRISC.B15;

sfr unsigned int   volatile PORTC            absolute 0xE22;
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
    const register unsigned short int RC12 = 12;
    sbit  RC12_bit at PORTC.B12;
    const register unsigned short int RC13 = 13;
    sbit  RC13_bit at PORTC.B13;
    const register unsigned short int RC14 = 14;
    sbit  RC14_bit at PORTC.B14;
    const register unsigned short int RC15 = 15;
    sbit  RC15_bit at PORTC.B15;

sfr unsigned int   volatile LATC             absolute 0xE24;
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
    const register unsigned short int LATC12 = 12;
    sbit  LATC12_bit at LATC.B12;
    const register unsigned short int LATC13 = 13;
    sbit  LATC13_bit at LATC.B13;
    const register unsigned short int LATC14 = 14;
    sbit  LATC14_bit at LATC.B14;
    const register unsigned short int LATC15 = 15;
    sbit  LATC15_bit at LATC.B15;

sfr unsigned int   volatile ODCC             absolute 0xE26;
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
    const register unsigned short int ODCC12 = 12;
    sbit  ODCC12_bit at ODCC.B12;
    const register unsigned short int ODCC13 = 13;
    sbit  ODCC13_bit at ODCC.B13;
    const register unsigned short int ODCC14 = 14;
    sbit  ODCC14_bit at ODCC.B14;
    const register unsigned short int ODCC15 = 15;
    sbit  ODCC15_bit at ODCC.B15;

sfr unsigned int   volatile CNENC            absolute 0xE28;
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
    const register unsigned short int CNIEC12 = 12;
    sbit  CNIEC12_bit at CNENC.B12;
    const register unsigned short int CNIEC13 = 13;
    sbit  CNIEC13_bit at CNENC.B13;
    const register unsigned short int CNIEC14 = 14;
    sbit  CNIEC14_bit at CNENC.B14;
    const register unsigned short int CNIEC15 = 15;
    sbit  CNIEC15_bit at CNENC.B15;

sfr unsigned int   volatile CNPUC            absolute 0xE2A;
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
    const register unsigned short int CNPUC12 = 12;
    sbit  CNPUC12_bit at CNPUC.B12;
    const register unsigned short int CNPUC13 = 13;
    sbit  CNPUC13_bit at CNPUC.B13;
    const register unsigned short int CNPUC14 = 14;
    sbit  CNPUC14_bit at CNPUC.B14;
    const register unsigned short int CNPUC15 = 15;
    sbit  CNPUC15_bit at CNPUC.B15;

sfr unsigned int   volatile CNPDC            absolute 0xE2C;
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
    const register unsigned short int CNPDC12 = 12;
    sbit  CNPDC12_bit at CNPDC.B12;
    const register unsigned short int CNPDC13 = 13;
    sbit  CNPDC13_bit at CNPDC.B13;
    const register unsigned short int CNPDC14 = 14;
    sbit  CNPDC14_bit at CNPDC.B14;
    const register unsigned short int CNPDC15 = 15;
    sbit  CNPDC15_bit at CNPDC.B15;

sfr unsigned int   volatile ANSELC           absolute 0xE2E;
    const register unsigned short int ANSC1 = 1;
    sbit  ANSC1_bit at ANSELC.B1;
    const register unsigned short int ANSC2 = 2;
    sbit  ANSC2_bit at ANSELC.B2;
    const register unsigned short int ANSC4 = 4;
    sbit  ANSC4_bit at ANSELC.B4;
    const register unsigned short int ANSC5 = 5;
    sbit  ANSC5_bit at ANSELC.B5;
    const register unsigned short int ANSC6 = 6;
    sbit  ANSC6_bit at ANSELC.B6;
    const register unsigned short int ANSC9 = 9;
    sbit  ANSC9_bit at ANSELC.B9;
    const register unsigned short int ANSC10 = 10;
    sbit  ANSC10_bit at ANSELC.B10;
    const register unsigned short int ANSC12 = 12;
    sbit  ANSC12_bit at ANSELC.B12;

sfr unsigned int   volatile TRISD            absolute 0xE30;
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
    const register unsigned short int TRISD12 = 12;
    sbit  TRISD12_bit at TRISD.B12;
    const register unsigned short int TRISD13 = 13;
    sbit  TRISD13_bit at TRISD.B13;
    const register unsigned short int TRISD14 = 14;
    sbit  TRISD14_bit at TRISD.B14;
    const register unsigned short int TRISD15 = 15;
    sbit  TRISD15_bit at TRISD.B15;

sfr unsigned int   volatile PORTD            absolute 0xE32;
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
    const register unsigned short int RD12 = 12;
    sbit  RD12_bit at PORTD.B12;
    const register unsigned short int RD13 = 13;
    sbit  RD13_bit at PORTD.B13;
    const register unsigned short int RD14 = 14;
    sbit  RD14_bit at PORTD.B14;
    const register unsigned short int RD15 = 15;
    sbit  RD15_bit at PORTD.B15;

sfr unsigned int   volatile LATD             absolute 0xE34;
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
    const register unsigned short int LATD12 = 12;
    sbit  LATD12_bit at LATD.B12;
    const register unsigned short int LATD13 = 13;
    sbit  LATD13_bit at LATD.B13;
    const register unsigned short int LATD14 = 14;
    sbit  LATD14_bit at LATD.B14;
    const register unsigned short int LATD15 = 15;
    sbit  LATD15_bit at LATD.B15;

sfr unsigned int   volatile ODCD             absolute 0xE36;
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
    const register unsigned short int ODCD12 = 12;
    sbit  ODCD12_bit at ODCD.B12;
    const register unsigned short int ODCD13 = 13;
    sbit  ODCD13_bit at ODCD.B13;
    const register unsigned short int ODCD14 = 14;
    sbit  ODCD14_bit at ODCD.B14;
    const register unsigned short int ODCD15 = 15;
    sbit  ODCD15_bit at ODCD.B15;

sfr unsigned int   volatile CNEND            absolute 0xE38;
    const register unsigned short int CNIED0 = 0;
    sbit  CNIED0_bit at CNEND.B0;
    const register unsigned short int CNIED1 = 1;
    sbit  CNIED1_bit at CNEND.B1;
    const register unsigned short int CNIED2 = 2;
    sbit  CNIED2_bit at CNEND.B2;
    const register unsigned short int CNIED3 = 3;
    sbit  CNIED3_bit at CNEND.B3;
    const register unsigned short int CNIED4 = 4;
    sbit  CNIED4_bit at CNEND.B4;
    const register unsigned short int CNIED5 = 5;
    sbit  CNIED5_bit at CNEND.B5;
    const register unsigned short int CNIED6 = 6;
    sbit  CNIED6_bit at CNEND.B6;
    const register unsigned short int CNIED7 = 7;
    sbit  CNIED7_bit at CNEND.B7;
    const register unsigned short int CNIED8 = 8;
    sbit  CNIED8_bit at CNEND.B8;
    const register unsigned short int CNIED9 = 9;
    sbit  CNIED9_bit at CNEND.B9;
    const register unsigned short int CNIED10 = 10;
    sbit  CNIED10_bit at CNEND.B10;
    const register unsigned short int CNIED11 = 11;
    sbit  CNIED11_bit at CNEND.B11;
    const register unsigned short int CNIED12 = 12;
    sbit  CNIED12_bit at CNEND.B12;
    const register unsigned short int CNIED13 = 13;
    sbit  CNIED13_bit at CNEND.B13;
    const register unsigned short int CNIED14 = 14;
    sbit  CNIED14_bit at CNEND.B14;
    const register unsigned short int CNIED15 = 15;
    sbit  CNIED15_bit at CNEND.B15;

sfr unsigned int   volatile CNPUD            absolute 0xE3A;
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
    const register unsigned short int CNPUD12 = 12;
    sbit  CNPUD12_bit at CNPUD.B12;
    const register unsigned short int CNPUD13 = 13;
    sbit  CNPUD13_bit at CNPUD.B13;
    const register unsigned short int CNPUD14 = 14;
    sbit  CNPUD14_bit at CNPUD.B14;
    const register unsigned short int CNPUD15 = 15;
    sbit  CNPUD15_bit at CNPUD.B15;

sfr unsigned int   volatile CNPDD            absolute 0xE3C;
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
    const register unsigned short int CNPDD12 = 12;
    sbit  CNPDD12_bit at CNPDD.B12;
    const register unsigned short int CNPDD13 = 13;
    sbit  CNPDD13_bit at CNPDD.B13;
    const register unsigned short int CNPDD14 = 14;
    sbit  CNPDD14_bit at CNPDD.B14;
    const register unsigned short int CNPDD15 = 15;
    sbit  CNPDD15_bit at CNPDD.B15;

sfr unsigned int   volatile ANSELD           absolute 0xE3E;
    const register unsigned short int ANSD2 = 2;
    sbit  ANSD2_bit at ANSELD.B2;
    const register unsigned short int ANSD5 = 5;
    sbit  ANSD5_bit at ANSELD.B5;
    const register unsigned short int ANSD7 = 7;
    sbit  ANSD7_bit at ANSELD.B7;
    const register unsigned short int ANSD8 = 8;
    sbit  ANSD8_bit at ANSELD.B8;
    const register unsigned short int ANSD13 = 13;
    sbit  ANSD13_bit at ANSELD.B13;

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
  };
} typeI2C2CON1BITS;
sfr volatile typeI2C2CON1BITS I2C2CON1bits absolute 0x210;

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
  };
} typeI2C2CONLBITS;
sfr volatile typeI2C2CONLBITS I2C2CONLbits absolute 0x210;

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
sfr volatile typeI2C2CON2BITS I2C2CON2bits absolute 0x212;

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
sfr volatile typeI2C2CONHBITS I2C2CONHbits absolute 0x212;

typedef struct tagI2C2STATBITS {
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
} typeI2C2STATBITS;
sfr volatile typeI2C2STATBITS I2C2STATbits absolute 0x214;

typedef struct tagI2C2ADDBITS {
  union {
    struct {
      unsigned ADD:10;
    };
  };
} typeI2C2ADDBITS;
sfr volatile typeI2C2ADDBITS I2C2ADDbits absolute 0x216;

typedef struct tagI2C2MSKBITS {
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
} typeI2C2MSKBITS;
sfr volatile typeI2C2MSKBITS I2C2MSKbits absolute 0x218;

typedef struct tagI2C2TRNBITS {
  union {
    struct {
      unsigned I2CTXDATA:8;
    };
  };
} typeI2C2TRNBITS;
sfr volatile typeI2C2TRNBITS I2C2TRNbits absolute 0x21C;

typedef struct tagI2C2RCVBITS {
  union {
    struct {
      unsigned I2CRXDATA:8;
    };
  };
} typeI2C2RCVBITS;
sfr volatile typeI2C2RCVBITS I2C2RCVbits absolute 0x21E;

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
sfr volatile typeSPI1CON1BITS SPI1CON1bits absolute 0x240;

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
sfr volatile typeSPI1CON1LBITS SPI1CON1Lbits absolute 0x240;

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
sfr volatile typeSPI1CON1HBITS SPI1CON1Hbits absolute 0x242;

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
sfr volatile typeSPI1CON2BITS SPI1CON2bits absolute 0x242;

typedef struct tagSPI1CON2LBITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI1CON2LBITS;
sfr volatile typeSPI1CON2LBITS SPI1CON2Lbits absolute 0x244;

typedef struct tagSPI1CON3BITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI1CON3BITS;
sfr volatile typeSPI1CON3BITS SPI1CON3bits absolute 0x244;

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
sfr volatile typeSPI1STATLBITS SPI1STATLbits absolute 0x248;

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
sfr volatile typeSPI1STATHBITS SPI1STATHbits absolute 0x24A;

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
sfr volatile typeSPI1BUFLBITS SPI1BUFLbits absolute 0x24C;

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
sfr volatile typeSPI1BUFHBITS SPI1BUFHbits absolute 0x24E;

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
sfr volatile typeSPI1BRGLBITS SPI1BRGLbits absolute 0x250;

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
sfr volatile typeSPI1IMSK1BITS SPI1IMSK1bits absolute 0x254;

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
sfr volatile typeSPI1IMSKLBITS SPI1IMSKLbits absolute 0x254;

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
sfr volatile typeSPI1IMSK2BITS SPI1IMSK2bits absolute 0x256;

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
sfr volatile typeSPI1IMSKHBITS SPI1IMSKHbits absolute 0x256;

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
sfr volatile typeSPI1URDTLBITS SPI1URDTLbits absolute 0x258;

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
sfr volatile typeSPI1URDTHBITS SPI1URDTHbits absolute 0x25A;

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
sfr volatile typeSPI2CON1BITS SPI2CON1bits absolute 0x260;

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
sfr volatile typeSPI2CON1LBITS SPI2CON1Lbits absolute 0x260;

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
sfr volatile typeSPI2CON1HBITS SPI2CON1Hbits absolute 0x262;

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
sfr volatile typeSPI2CON2BITS SPI2CON2bits absolute 0x262;

typedef struct tagSPI2CON2LBITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI2CON2LBITS;
sfr volatile typeSPI2CON2LBITS SPI2CON2Lbits absolute 0x264;

typedef struct tagSPI2CON3BITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI2CON3BITS;
sfr volatile typeSPI2CON3BITS SPI2CON3bits absolute 0x264;

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
sfr volatile typeSPI2STATLBITS SPI2STATLbits absolute 0x268;

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
sfr volatile typeSPI2STATHBITS SPI2STATHbits absolute 0x26A;

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
sfr volatile typeSPI2BUFLBITS SPI2BUFLbits absolute 0x26C;

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
sfr volatile typeSPI2BUFHBITS SPI2BUFHbits absolute 0x26E;

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
sfr volatile typeSPI2BRGLBITS SPI2BRGLbits absolute 0x270;

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
sfr volatile typeSPI2IMSK1BITS SPI2IMSK1bits absolute 0x274;

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
sfr volatile typeSPI2IMSKLBITS SPI2IMSKLbits absolute 0x274;

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
sfr volatile typeSPI2IMSK2BITS SPI2IMSK2bits absolute 0x276;

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
sfr volatile typeSPI2IMSKHBITS SPI2IMSKHbits absolute 0x276;

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
sfr volatile typeSPI2URDTLBITS SPI2URDTLbits absolute 0x278;

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
sfr volatile typeSPI2URDTHBITS SPI2URDTHbits absolute 0x27A;

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
      unsigned C2EN:1;
      unsigned C3EN:1;
      unsigned :3;
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
      unsigned SAMC2EN:1;
      unsigned SAMC3EN:1;
      unsigned :4;
      unsigned SYNCTRG0:1;
      unsigned SYNCTRG1:1;
      unsigned SYNCTRG2:1;
      unsigned SYNCTRG3:1;
    };
  };
} typeADCON4LBITS;
sfr volatile typeADCON4LBITS ADCON4Lbits absolute 0x30C;

typedef struct tagADCON4HBITS {
  union {
    struct {
      unsigned C0CHS:2;
      unsigned C1CHS:2;
      unsigned C2CHS:2;
      unsigned C3CHS:2;
    };
    struct {
      unsigned C0CHS0:1;
      unsigned C0CHS1:1;
      unsigned C1CHS0:1;
      unsigned C1CHS1:1;
      unsigned C2CHS0:1;
      unsigned C2CHS1:1;
      unsigned C3CHS0:1;
      unsigned C3CHS1:1;
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
      unsigned DIFF2:1;
      unsigned SIGN3:1;
      unsigned DIFF3:1;
      unsigned SIGN4:1;
      unsigned DIFF4:1;
      unsigned SIGN5:1;
      unsigned DIFF5:1;
      unsigned SIGN6:1;
      unsigned DIFF6:1;
      unsigned SIGN7:1;
      unsigned DIFF7:1;
    };
  };
} typeADMOD0LBITS;
sfr volatile typeADMOD0LBITS ADMOD0Lbits absolute 0x310;

typedef struct tagADMOD0HBITS {
  union {
    struct {
      unsigned SIGN8:1;
      unsigned DIFF8:1;
      unsigned SIGN9:1;
      unsigned DIFF9:1;
      unsigned SIGN10:1;
      unsigned DIFF10:1;
      unsigned SIGN11:1;
      unsigned DIFF11:1;
      unsigned SIGN12:1;
      unsigned DIFF12:1;
      unsigned SIGN13:1;
      unsigned DIFF13:1;
      unsigned SIGN14:1;
      unsigned DIFF14:1;
      unsigned SIGN15:1;
      unsigned DIFF15:1;
    };
  };
} typeADMOD0HBITS;
sfr volatile typeADMOD0HBITS ADMOD0Hbits absolute 0x312;

typedef struct tagADMOD1LBITS {
  union {
    struct {
      unsigned SIGN16:1;
      unsigned DIFF16:1;
      unsigned SIGN17:1;
      unsigned DIFF17:1;
      unsigned SIGN18:1;
      unsigned DIFF18:1;
      unsigned SIGN19:1;
      unsigned DIFF19:1;
      unsigned SIGN20:1;
      unsigned DIFF20:1;
      unsigned SIGN21:1;
      unsigned DIFF21:1;
    };
  };
} typeADMOD1LBITS;
sfr volatile typeADMOD1LBITS ADMOD1Lbits absolute 0x314;

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
      unsigned IE12:1;
      unsigned IE13:1;
      unsigned IE14:1;
      unsigned IE15:1;
    };
  };
} typeADIELBITS;
sfr volatile typeADIELBITS ADIELbits absolute 0x320;

typedef struct tagADIEHBITS {
  union {
    struct {
      unsigned IE16:1;
      unsigned IE17:1;
      unsigned IE18:1;
      unsigned IE19:1;
      unsigned IE20:1;
      unsigned IE21:1;
    };
  };
} typeADIEHBITS;
sfr volatile typeADIEHBITS ADIEHbits absolute 0x322;

typedef struct tagADCSSLBITS {
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
} typeADCSSLBITS;
sfr volatile typeADCSSLBITS ADCSSLbits absolute 0x328;

typedef struct tagADCSSHBITS {
  union {
    struct {
      unsigned CSS16:1;
      unsigned CSS17:1;
      unsigned CSS18:1;
      unsigned CSS19:1;
      unsigned CSS20:1;
      unsigned CSS21:1;
    };
  };
} typeADCSSHBITS;
sfr volatile typeADCSSHBITS ADCSSHbits absolute 0x32A;

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
      unsigned AN12RDY:1;
      unsigned AN13RDY:1;
      unsigned AN14RDY:1;
      unsigned AN15RDY:1;
    };
  };
} typeADSTATLBITS;
sfr volatile typeADSTATLBITS ADSTATLbits absolute 0x330;

typedef struct tagADSTATHBITS {
  union {
    struct {
      unsigned AN16RDY:1;
      unsigned AN17RDY:1;
      unsigned AN18RDY:1;
      unsigned AN19RDY:1;
      unsigned AN20RDY:1;
      unsigned AN21RDY:1;
    };
  };
} typeADSTATHBITS;
sfr volatile typeADSTATHBITS ADSTATHbits absolute 0x332;

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
      unsigned CMPEN12:1;
      unsigned CMPEN13:1;
      unsigned CMPEN14:1;
      unsigned CMPEN15:1;
    };
  };
} typeADCMP0ENLBITS;
sfr volatile typeADCMP0ENLBITS ADCMP0ENLbits absolute 0x338;

typedef struct tagADCMP0ENHBITS {
  union {
    struct {
      unsigned CMPEN16:1;
      unsigned CMPEN17:1;
      unsigned CMPEN18:1;
      unsigned CMPEN19:1;
      unsigned CMPEN20:1;
      unsigned CMPEN21:1;
    };
  };
} typeADCMP0ENHBITS;
sfr volatile typeADCMP0ENHBITS ADCMP0ENHbits absolute 0x33A;

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
      unsigned CMPEN12:1;
      unsigned CMPEN13:1;
      unsigned CMPEN14:1;
      unsigned CMPEN15:1;
    };
  };
} typeADCMP1ENLBITS;
sfr volatile typeADCMP1ENLBITS ADCMP1ENLbits absolute 0x340;

typedef struct tagADCMP1ENHBITS {
  union {
    struct {
      unsigned CMPEN16:1;
      unsigned CMPEN17:1;
      unsigned CMPEN18:1;
      unsigned CMPEN19:1;
      unsigned CMPEN20:1;
      unsigned CMPEN21:1;
    };
  };
} typeADCMP1ENHBITS;
sfr volatile typeADCMP1ENHBITS ADCMP1ENHbits absolute 0x342;

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

typedef struct tagADFL1CONBITS {
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
} typeADFL1CONBITS;
sfr volatile typeADFL1CONBITS ADFL1CONbits absolute 0x36E;

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

typedef struct tagADTRIG3LBITS {
  union {
    struct {
      unsigned TRGSRC12:5;
      unsigned :3;
      unsigned TRGSRC13:5;
    };
    struct {
      unsigned TRIGSRC120:1;
      unsigned TRIGSRC121:1;
      unsigned TRIGSRC122:1;
      unsigned TRIGSRC123:1;
      unsigned TRIGSRC124:1;
      unsigned :3;
      unsigned TRGSRC130:1;
      unsigned TRGSRC131:1;
      unsigned TRGSRC132:1;
      unsigned TRGSRC133:1;
      unsigned TRGSRC134:1;
    };
  };
} typeADTRIG3LBITS;
sfr volatile typeADTRIG3LBITS ADTRIG3Lbits absolute 0x38C;

typedef struct tagADTRIG3HBITS {
  union {
    struct {
      unsigned TRGSRC14:5;
      unsigned :3;
      unsigned TRGSRC15:5;
    };
    struct {
      unsigned TRIGSRC140:1;
      unsigned TRIGSRC141:1;
      unsigned TRIGSRC142:1;
      unsigned TRIGSRC143:1;
      unsigned TRIGSRC144:1;
      unsigned :3;
      unsigned TRGSRC150:1;
      unsigned TRGSRC151:1;
      unsigned TRGSRC152:1;
      unsigned TRGSRC153:1;
      unsigned TRGSRC154:1;
    };
  };
} typeADTRIG3HBITS;
sfr volatile typeADTRIG3HBITS ADTRIG3Hbits absolute 0x38E;

typedef struct tagADTRIG4LBITS {
  union {
    struct {
      unsigned TRGSRC16:5;
      unsigned :3;
      unsigned TRGSRC17:5;
    };
    struct {
      unsigned TRIGSRC160:1;
      unsigned TRIGSRC161:1;
      unsigned TRIGSRC162:1;
      unsigned TRIGSRC163:1;
      unsigned TRIGSRC164:1;
      unsigned :3;
      unsigned TRGSRC170:1;
      unsigned TRGSRC171:1;
      unsigned TRGSRC172:1;
      unsigned TRGSRC173:1;
      unsigned TRGSRC174:1;
    };
  };
} typeADTRIG4LBITS;
sfr volatile typeADTRIG4LBITS ADTRIG4Lbits absolute 0x390;

typedef struct tagADTRIG4HBITS {
  union {
    struct {
      unsigned TRGSRC18:5;
      unsigned :3;
      unsigned TRGSRC19:5;
    };
    struct {
      unsigned TRIGSRC180:1;
      unsigned TRIGSRC181:1;
      unsigned TRIGSRC182:1;
      unsigned TRIGSRC183:1;
      unsigned TRIGSRC184:1;
      unsigned :3;
      unsigned TRGSRC190:1;
      unsigned TRGSRC191:1;
      unsigned TRGSRC192:1;
      unsigned TRGSRC193:1;
      unsigned TRGSRC194:1;
    };
  };
} typeADTRIG4HBITS;
sfr volatile typeADTRIG4HBITS ADTRIG4Hbits absolute 0x392;

typedef struct tagADTRIG5LBITS {
  union {
    struct {
      unsigned TRGSRC20:5;
      unsigned :3;
      unsigned TRGSRC21:5;
    };
    struct {
      unsigned TRIGSRC200:1;
      unsigned TRIGSRC201:1;
      unsigned TRIGSRC202:1;
      unsigned TRIGSRC203:1;
      unsigned TRIGSRC204:1;
      unsigned :3;
      unsigned TRGSRC210:1;
      unsigned TRGSRC211:1;
      unsigned TRGSRC212:1;
      unsigned TRGSRC213:1;
      unsigned TRGSRC214:1;
    };
  };
} typeADTRIG5LBITS;
sfr volatile typeADTRIG5LBITS ADTRIG5Lbits absolute 0x394;

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

typedef struct tagADBASEBITS {
  union {
    struct {
      unsigned CHOFFSET:16;
    };
    struct {
      unsigned CHOFFSET0:1;
      unsigned CHOFFSET1:1;
      unsigned CHOFFSET2:1;
      unsigned CHOFFSET3:1;
      unsigned CHOFFSET4:1;
      unsigned CHOFFSET5:1;
      unsigned CHOFFSET6:1;
      unsigned CHOFFSET7:1;
      unsigned CHOFFSET8:1;
      unsigned CHOFFSET9:1;
      unsigned CHOFFSET10:1;
      unsigned CHOFFSET11:1;
      unsigned CHOFFSET12:1;
      unsigned CHOFFSET13:1;
      unsigned CHOFFSET14:1;
      unsigned CHOFFSET15:1;
    };
  };
} typeADBASEBITS;
sfr volatile typeADBASEBITS ADBASEbits absolute 0x3C0;

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
      unsigned LVLEN12:1;
      unsigned LVLEN13:1;
      unsigned LVLEN14:1;
      unsigned LVLEN15:1;
    };
  };
} typeADLVLTRGLBITS;
sfr volatile typeADLVLTRGLBITS ADLVLTRGLbits absolute 0x3D0;

typedef struct tagADLVLTRGHBITS {
  union {
    struct {
      unsigned LVLEN16:1;
      unsigned LVLEN17:1;
      unsigned LVLEN18:1;
      unsigned LVLEN19:1;
      unsigned LVLEN20:1;
      unsigned LVLEN21:1;
    };
  };
} typeADLVLTRGHBITS;
sfr volatile typeADLVLTRGHBITS ADLVLTRGHbits absolute 0x3D2;

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

typedef struct tagADCORE2LBITS {
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
} typeADCORE2LBITS;
sfr volatile typeADCORE2LBITS ADCORE2Lbits absolute 0x3DC;

typedef struct tagADCORE2HBITS {
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
} typeADCORE2HBITS;
sfr volatile typeADCORE2HBITS ADCORE2Hbits absolute 0x3DE;

typedef struct tagADCORE3LBITS {
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
} typeADCORE3LBITS;
sfr volatile typeADCORE3LBITS ADCORE3Lbits absolute 0x3E0;

typedef struct tagADCORE3HBITS {
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
} typeADCORE3HBITS;
sfr volatile typeADCORE3HBITS ADCORE3Hbits absolute 0x3E2;

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
      unsigned EIEN12:1;
      unsigned EIEN13:1;
      unsigned EIEN14:1;
      unsigned EIEN15:1;
    };
  };
} typeADEIELBITS;
sfr volatile typeADEIELBITS ADEIELbits absolute 0x3F0;

typedef struct tagADEIEHBITS {
  union {
    struct {
      unsigned EIEN16:1;
      unsigned EIEN17:1;
      unsigned EIEN18:1;
      unsigned EIEN19:1;
      unsigned EIEN20:1;
      unsigned EIEN21:1;
    };
  };
} typeADEIEHBITS;
sfr volatile typeADEIEHBITS ADEIEHbits absolute 0x3F2;

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
      unsigned EISTAT12:1;
      unsigned EISTAT13:1;
      unsigned EISTAT14:1;
      unsigned EISTAT15:1;
    };
  };
} typeADEISTATLBITS;
sfr volatile typeADEISTATLBITS ADEISTATLbits absolute 0x3F8;

typedef struct tagADEISTATHBITS {
  union {
    struct {
      unsigned EISTAT16:1;
      unsigned EISTAT17:1;
      unsigned EISTAT18:1;
      unsigned EISTAT19:1;
      unsigned EISTAT20:1;
      unsigned EISTAT21:1;
    };
  };
} typeADEISTATHBITS;
sfr volatile typeADEISTATHBITS ADEISTATHbits absolute 0x3FA;

typedef struct tagADCON5LBITS {
  union {
    struct {
      unsigned C0PWR:1;
      unsigned C1PWR:1;
      unsigned C2PWR:1;
      unsigned C3PWR:1;
      unsigned :3;
      unsigned SHRPWR:1;
      unsigned C0RDY:1;
      unsigned C1RDY:1;
      unsigned C2RDY:1;
      unsigned C3RDY:1;
      unsigned :3;
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
      unsigned :3;
      unsigned SHRCIE:1;
      unsigned WARMTIME:4;
    };
    struct {
      unsigned C0C1E:1;
      unsigned C1C1E:1;
      unsigned C2C1E:1;
      unsigned C3C1E:1;
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

typedef struct tagADCAL0HBITS {
  union {
    struct {
      unsigned CAL2RUN:1;
      unsigned CAL2EN:1;
      unsigned CAL2DIFF:1;
      unsigned CAL2SKIP:1;
      unsigned :3;
      unsigned CAL2RDY:1;
      unsigned CAL3RUN:1;
      unsigned CAL3EN:1;
      unsigned CAL3DIFF:1;
      unsigned CAL3SKIP:1;
      unsigned :3;
      unsigned CAL3RDY:1;
    };
  };
} typeADCAL0HBITS;
sfr volatile typeADCAL0HBITS ADCAL0Hbits absolute 0x406;

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
sfr volatile typeC1CTRL1BITS C1CTRL1bits absolute 0x480;

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
sfr volatile typeC1CTRL2BITS C1CTRL2bits absolute 0x482;

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
sfr volatile typeC1VECBITS C1VECbits absolute 0x484;

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
sfr volatile typeC1FCTRLBITS C1FCTRLbits absolute 0x486;

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
sfr volatile typeC1FIFOBITS C1FIFObits absolute 0x488;

typedef struct tagC1INTFBITS {
  union {
    struct {
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
    };
  };
} typeC1INTFBITS;
sfr volatile typeC1INTFBITS C1INTFbits absolute 0x48A;

typedef struct tagC1INTEBITS {
  union {
    struct {
      unsigned TBIE:1;
      unsigned RBIE:1;
      unsigned RBOVIE:1;
      unsigned FIFOIE:1;
      unsigned :1;
      unsigned ERRIE:1;
      unsigned WAKIE:1;
      unsigned IVRIE:1;
    };
  };
} typeC1INTEBITS;
sfr volatile typeC1INTEBITS C1INTEbits absolute 0x48C;

typedef struct tagC1ECBITS {
  union {
    struct {
      unsigned RERRCNT:8;
      unsigned TERRCNT:8;
    };
  };
} typeC1ECBITS;
sfr volatile typeC1ECBITS C1ECbits absolute 0x48E;

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
sfr volatile typeC1CFG1BITS C1CFG1bits absolute 0x490;

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
sfr volatile typeC1CFG2BITS C1CFG2bits absolute 0x492;

typedef struct tagC1FEN1BITS {
  union {
    struct {
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
    };
  };
} typeC1FEN1BITS;
sfr volatile typeC1FEN1BITS C1FEN1bits absolute 0x494;

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
sfr volatile typeC1FMSKSEL1BITS C1FMSKSEL1bits absolute 0x498;

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
sfr volatile typeC1FMSKSEL2BITS C1FMSKSEL2bits absolute 0x49A;

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
sfr volatile typeC1BUFPNT1BITS C1BUFPNT1bits absolute 0x4A0;

typedef struct tagC1RXFUL1BITS {
  union {
    struct {
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
    };
  };
} typeC1RXFUL1BITS;
sfr volatile typeC1RXFUL1BITS C1RXFUL1bits absolute 0x4A0;

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
sfr volatile typeC1BUFPNT2BITS C1BUFPNT2bits absolute 0x4A2;

typedef struct tagC1RXFUL2BITS {
  union {
    struct {
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
    };
  };
} typeC1RXFUL2BITS;
sfr volatile typeC1RXFUL2BITS C1RXFUL2bits absolute 0x4A2;

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
sfr volatile typeC1BUFPNT3BITS C1BUFPNT3bits absolute 0x4A4;

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
sfr volatile typeC1BUFPNT4BITS C1BUFPNT4bits absolute 0x4A6;

typedef struct tagC1RXOVF1BITS {
  union {
    struct {
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
    };
  };
} typeC1RXOVF1BITS;
sfr volatile typeC1RXOVF1BITS C1RXOVF1bits absolute 0x4A8;

typedef struct tagC1RXOVF2BITS {
  union {
    struct {
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
    };
  };
} typeC1RXOVF2BITS;
sfr volatile typeC1RXOVF2BITS C1RXOVF2bits absolute 0x4AA;

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
      unsigned :1;
      unsigned EXIDE:1;
      unsigned :1;
      unsigned SID:11;
    };
  };
} typeC1RXM0SIDBITS;
sfr volatile typeC1RXM0SIDBITS C1RXM0SIDbits absolute 0x4B0;

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
sfr volatile typeC1TR01CONBITS C1TR01CONbits absolute 0x4B0;

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
sfr volatile typeC1RXM0EIDBITS C1RXM0EIDbits absolute 0x4B2;

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
sfr volatile typeC1TR23CONBITS C1TR23CONbits absolute 0x4B2;

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
sfr volatile typeC1RXM1SIDBITS C1RXM1SIDbits absolute 0x4B4;

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
sfr volatile typeC1TR45CONBITS C1TR45CONbits absolute 0x4B4;

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
sfr volatile typeC1RXM1EIDBITS C1RXM1EIDbits absolute 0x4B6;

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
sfr volatile typeC1TR67CONBITS C1TR67CONbits absolute 0x4B6;

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
sfr volatile typeC1RXM2SIDBITS C1RXM2SIDbits absolute 0x4B8;

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
sfr volatile typeC1RXM2EIDBITS C1RXM2EIDbits absolute 0x4BA;

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
sfr volatile typeC1RXF0SIDBITS C1RXF0SIDbits absolute 0x4C0;

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
sfr volatile typeC1RXF0EIDBITS C1RXF0EIDbits absolute 0x4C2;

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
sfr volatile typeC1RXF1SIDBITS C1RXF1SIDbits absolute 0x4C4;

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
sfr volatile typeC1RXF1EIDBITS C1RXF1EIDbits absolute 0x4C6;

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
sfr volatile typeC1RXF2SIDBITS C1RXF2SIDbits absolute 0x4C8;

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
sfr volatile typeC1RXF2EIDBITS C1RXF2EIDbits absolute 0x4CA;

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
sfr volatile typeC1RXF3SIDBITS C1RXF3SIDbits absolute 0x4CC;

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
sfr volatile typeC1RXF3EIDBITS C1RXF3EIDbits absolute 0x4CE;

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
sfr volatile typeC1RXF4SIDBITS C1RXF4SIDbits absolute 0x4D0;

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
sfr volatile typeC1RXF4EIDBITS C1RXF4EIDbits absolute 0x4D2;

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
sfr volatile typeC1RXF5SIDBITS C1RXF5SIDbits absolute 0x4D4;

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
sfr volatile typeC1RXF5EIDBITS C1RXF5EIDbits absolute 0x4D6;

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
sfr volatile typeC1RXF6SIDBITS C1RXF6SIDbits absolute 0x4D8;

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
sfr volatile typeC1RXF6EIDBITS C1RXF6EIDbits absolute 0x4DA;

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
sfr volatile typeC1RXF7SIDBITS C1RXF7SIDbits absolute 0x4DC;

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
sfr volatile typeC1RXF7EIDBITS C1RXF7EIDbits absolute 0x4DE;

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
sfr volatile typeC1RXF8SIDBITS C1RXF8SIDbits absolute 0x4E0;

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
sfr volatile typeC1RXF8EIDBITS C1RXF8EIDbits absolute 0x4E2;

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
sfr volatile typeC1RXF9SIDBITS C1RXF9SIDbits absolute 0x4E4;

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
sfr volatile typeC1RXF9EIDBITS C1RXF9EIDbits absolute 0x4E6;

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
sfr volatile typeC1RXF10SIDBITS C1RXF10SIDbits absolute 0x4E8;

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
sfr volatile typeC1RXF10EIDBITS C1RXF10EIDbits absolute 0x4EA;

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
sfr volatile typeC1RXF11SIDBITS C1RXF11SIDbits absolute 0x4EC;

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
sfr volatile typeC1RXF11EIDBITS C1RXF11EIDbits absolute 0x4EE;

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
sfr volatile typeC1RXF12SIDBITS C1RXF12SIDbits absolute 0x4F0;

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
sfr volatile typeC1RXF12EIDBITS C1RXF12EIDbits absolute 0x4F2;

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
sfr volatile typeC1RXF13SIDBITS C1RXF13SIDbits absolute 0x4F4;

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
sfr volatile typeC1RXF13EIDBITS C1RXF13EIDbits absolute 0x4F6;

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
sfr volatile typeC1RXF14SIDBITS C1RXF14SIDbits absolute 0x4F8;

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
sfr volatile typeC1RXF14EIDBITS C1RXF14EIDbits absolute 0x4FA;

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
sfr volatile typeC1RXF15SIDBITS C1RXF15SIDbits absolute 0x4FC;

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
sfr volatile typeC1RXF15EIDBITS C1RXF15EIDbits absolute 0x4FE;

typedef struct tagISRCCONBITS {
  union {
    struct {
      unsigned ISRCCAL:6;
      unsigned :2;
      unsigned OUTSEL:3;
      unsigned :4;
      unsigned ISRCEN:1;
    };
    struct {
      unsigned ISRCCAL0:1;
      unsigned ISRCCAL1:1;
      unsigned ISRCCAL2:1;
      unsigned ISRCCAL3:1;
      unsigned ISRCCAL4:1;
      unsigned ISRCCAL5:1;
      unsigned :2;
      unsigned OUTSEL0:1;
      unsigned OUTSEL1:1;
      unsigned OUTSEL2:1;
    };
  };
} typeISRCCONBITS;
sfr volatile typeISRCCONBITS ISRCCONbits absolute 0x500;

typedef struct tagPGA1CONBITS {
  union {
    struct {
      unsigned GAIN:3;
      unsigned :5;
      unsigned SELNI:3;
      unsigned SELPI:3;
      unsigned PGAOEN:1;
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
      unsigned PGAOEN:1;
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
      unsigned RANGE:1;
      unsigned CMPPOL:1;
      unsigned ALTINP:1;
      unsigned CMPSTAT:1;
      unsigned HYSPOL:1;
      unsigned EXTREF:1;
      unsigned INSEL:2;
      unsigned DACOE:1;
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
      unsigned RANGE:1;
      unsigned CMPPOL:1;
      unsigned ALTINP:1;
      unsigned CMPSTAT:1;
      unsigned HYSPOL:1;
      unsigned EXTREF:1;
      unsigned INSEL:2;
      unsigned DACOE:1;
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

typedef struct tagCMP3CONBITS {
  union {
    struct {
      unsigned RANGE:1;
      unsigned CMPPOL:1;
      unsigned ALTINP:1;
      unsigned CMPSTAT:1;
      unsigned HYSPOL:1;
      unsigned EXTREF:1;
      unsigned INSEL:2;
      unsigned DACOE:1;
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
} typeCMP3CONBITS;
sfr volatile typeCMP3CONBITS CMP3CONbits absolute 0x548;

typedef struct tagCMP3DACBITS {
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
} typeCMP3DACBITS;
sfr volatile typeCMP3DACBITS CMP3DACbits absolute 0x54A;

typedef struct tagCMP4CONBITS {
  union {
    struct {
      unsigned RANGE:1;
      unsigned CMPPOL:1;
      unsigned ALTINP:1;
      unsigned CMPSTAT:1;
      unsigned HYSPOL:1;
      unsigned EXTREF:1;
      unsigned INSEL:2;
      unsigned DACOE:1;
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
} typeCMP4CONBITS;
sfr volatile typeCMP4CONBITS CMP4CONbits absolute 0x54C;

typedef struct tagCMP4DACBITS {
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
} typeCMP4DACBITS;
sfr volatile typeCMP4DACBITS CMP4DACbits absolute 0x54E;

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
sfr volatile typeSPI3CON1BITS SPI3CON1bits absolute 0x600;

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
sfr volatile typeSPI3CON1LBITS SPI3CON1Lbits absolute 0x600;

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
sfr volatile typeSPI3CON1HBITS SPI3CON1Hbits absolute 0x602;

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
sfr volatile typeSPI3CON2BITS SPI3CON2bits absolute 0x602;

typedef struct tagSPI3CON2LBITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI3CON2LBITS;
sfr volatile typeSPI3CON2LBITS SPI3CON2Lbits absolute 0x604;

typedef struct tagSPI3CON3BITS {
  union {
    struct {
      unsigned WLENGTH:5;
    };
  };
} typeSPI3CON3BITS;
sfr volatile typeSPI3CON3BITS SPI3CON3bits absolute 0x604;

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
sfr volatile typeSPI3STATLBITS SPI3STATLbits absolute 0x608;

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
sfr volatile typeSPI3STATHBITS SPI3STATHbits absolute 0x60A;

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
sfr volatile typeSPI3BUFLBITS SPI3BUFLbits absolute 0x60C;

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
sfr volatile typeSPI3BUFHBITS SPI3BUFHbits absolute 0x60E;

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
sfr volatile typeSPI3BRGLBITS SPI3BRGLbits absolute 0x610;

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
sfr volatile typeSPI3IMSK1BITS SPI3IMSK1bits absolute 0x614;

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
sfr volatile typeSPI3IMSKLBITS SPI3IMSKLbits absolute 0x614;

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
sfr volatile typeSPI3IMSK2BITS SPI3IMSK2bits absolute 0x616;

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
sfr volatile typeSPI3IMSKHBITS SPI3IMSKHbits absolute 0x616;

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
sfr volatile typeSPI3URDTLBITS SPI3URDTLbits absolute 0x618;

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
sfr volatile typeSPI3URDTHBITS SPI3URDTHbits absolute 0x61A;

typedef struct tagRPOR0BITS {
  union {
    struct {
      unsigned RP16R:7;
      unsigned :1;
      unsigned RP17R:7;
    };
  };
} typeRPOR0BITS;
sfr volatile typeRPOR0BITS RPOR0bits absolute 0x668;

typedef struct tagRPOR1BITS {
  union {
    struct {
      unsigned RP18R:7;
      unsigned :1;
      unsigned RP19R:7;
    };
  };
} typeRPOR1BITS;
sfr volatile typeRPOR1BITS RPOR1bits absolute 0x66A;

typedef struct tagRPOR2BITS {
  union {
    struct {
      unsigned RP20R:7;
      unsigned :1;
      unsigned RP32R:7;
    };
  };
} typeRPOR2BITS;
sfr volatile typeRPOR2BITS RPOR2bits absolute 0x66C;

typedef struct tagRPOR3BITS {
  union {
    struct {
      unsigned RP33R:7;
      unsigned :1;
      unsigned RP34R:7;
    };
  };
} typeRPOR3BITS;
sfr volatile typeRPOR3BITS RPOR3bits absolute 0x66E;

typedef struct tagRPOR4BITS {
  union {
    struct {
      unsigned RP35R:7;
      unsigned :1;
      unsigned RP36R:7;
    };
  };
} typeRPOR4BITS;
sfr volatile typeRPOR4BITS RPOR4bits absolute 0x670;

typedef struct tagRPOR5BITS {
  union {
    struct {
      unsigned RP37R:7;
      unsigned :1;
      unsigned RP38R:7;
    };
  };
} typeRPOR5BITS;
sfr volatile typeRPOR5BITS RPOR5bits absolute 0x672;

typedef struct tagRPOR6BITS {
  union {
    struct {
      unsigned RP39R:7;
      unsigned :1;
      unsigned RP40R:7;
    };
  };
} typeRPOR6BITS;
sfr volatile typeRPOR6BITS RPOR6bits absolute 0x674;

typedef struct tagRPOR7BITS {
  union {
    struct {
      unsigned RP41R:7;
      unsigned :1;
      unsigned RP43R:7;
    };
  };
} typeRPOR7BITS;
sfr volatile typeRPOR7BITS RPOR7bits absolute 0x676;

typedef struct tagRPOR8BITS {
  union {
    struct {
      unsigned RP44R:7;
      unsigned :1;
      unsigned RP45R:7;
    };
  };
} typeRPOR8BITS;
sfr volatile typeRPOR8BITS RPOR8bits absolute 0x678;

typedef struct tagRPOR9BITS {
  union {
    struct {
      unsigned RP46R:7;
      unsigned :1;
      unsigned RP47R:7;
    };
  };
} typeRPOR9BITS;
sfr volatile typeRPOR9BITS RPOR9bits absolute 0x67A;

typedef struct tagRPOR10BITS {
  union {
    struct {
      unsigned RP48R:7;
      unsigned :1;
      unsigned RP49R:7;
    };
  };
} typeRPOR10BITS;
sfr volatile typeRPOR10BITS RPOR10bits absolute 0x67C;

typedef struct tagRPOR11BITS {
  union {
    struct {
      unsigned RP50R:7;
      unsigned :1;
      unsigned RP51R:7;
    };
  };
} typeRPOR11BITS;
sfr volatile typeRPOR11BITS RPOR11bits absolute 0x67E;

typedef struct tagRPOR12BITS {
  union {
    struct {
      unsigned RP52R:7;
      unsigned :1;
      unsigned RP53R:7;
    };
  };
} typeRPOR12BITS;
sfr volatile typeRPOR12BITS RPOR12bits absolute 0x680;

typedef struct tagRPOR13BITS {
  union {
    struct {
      unsigned RP54R:7;
      unsigned :1;
      unsigned RP55R:7;
    };
  };
} typeRPOR13BITS;
sfr volatile typeRPOR13BITS RPOR13bits absolute 0x682;

typedef struct tagRPOR14BITS {
  union {
    struct {
      unsigned RP56R:7;
      unsigned :1;
      unsigned RP57R:7;
    };
  };
} typeRPOR14BITS;
sfr volatile typeRPOR14BITS RPOR14bits absolute 0x684;

typedef struct tagRPOR15BITS {
  union {
    struct {
      unsigned RP58R:7;
      unsigned :1;
      unsigned RP60R:7;
    };
  };
} typeRPOR15BITS;
sfr volatile typeRPOR15BITS RPOR15bits absolute 0x686;

typedef struct tagRPOR16BITS {
  union {
    struct {
      unsigned RP61R:7;
      unsigned :1;
      unsigned RP62R:7;
    };
  };
} typeRPOR16BITS;
sfr volatile typeRPOR16BITS RPOR16bits absolute 0x688;

typedef struct tagRPOR17BITS {
  union {
    struct {
      unsigned RP63R:7;
      unsigned :1;
      unsigned RP64R:7;
    };
  };
} typeRPOR17BITS;
sfr volatile typeRPOR17BITS RPOR17bits absolute 0x68A;

typedef struct tagRPOR18BITS {
  union {
    struct {
      unsigned RP65R:7;
      unsigned :1;
      unsigned RP66R:7;
    };
  };
} typeRPOR18BITS;
sfr volatile typeRPOR18BITS RPOR18bits absolute 0x68C;

typedef struct tagRPOR19BITS {
  union {
    struct {
      unsigned RP67R:7;
      unsigned :1;
      unsigned RP68R:7;
    };
  };
} typeRPOR19BITS;
sfr volatile typeRPOR19BITS RPOR19bits absolute 0x68E;

typedef struct tagRPOR20BITS {
  union {
    struct {
      unsigned RP69R:7;
      unsigned :1;
      unsigned RP70R:7;
    };
  };
} typeRPOR20BITS;
sfr volatile typeRPOR20BITS RPOR20bits absolute 0x690;

typedef struct tagRPOR21BITS {
  union {
    struct {
      unsigned RP71R:7;
      unsigned :1;
      unsigned RP72R:7;
    };
  };
} typeRPOR21BITS;
sfr volatile typeRPOR21BITS RPOR21bits absolute 0x692;

typedef struct tagRPOR22BITS {
  union {
    struct {
      unsigned RP73R:7;
      unsigned :1;
      unsigned RP74R:7;
    };
  };
} typeRPOR22BITS;
sfr volatile typeRPOR22BITS RPOR22bits absolute 0x694;

typedef struct tagRPOR23BITS {
  union {
    struct {
      unsigned RP75R:7;
      unsigned :1;
      unsigned RP76R:7;
    };
  };
} typeRPOR23BITS;
sfr volatile typeRPOR23BITS RPOR23bits absolute 0x696;

typedef struct tagRPOR24BITS {
  union {
    struct {
      unsigned RP176R:7;
      unsigned :1;
      unsigned RP177R:7;
    };
  };
} typeRPOR24BITS;
sfr volatile typeRPOR24BITS RPOR24bits absolute 0x698;

typedef struct tagRPOR25BITS {
  union {
    struct {
      unsigned RP178R:7;
      unsigned :1;
      unsigned RP179R:7;
    };
  };
} typeRPOR25BITS;
sfr volatile typeRPOR25BITS RPOR25bits absolute 0x69A;

typedef struct tagRPOR26BITS {
  union {
    struct {
      unsigned RP180R:7;
      unsigned :1;
      unsigned RP181R:7;
    };
  };
} typeRPOR26BITS;
sfr volatile typeRPOR26BITS RPOR26bits absolute 0x69C;

typedef struct tagRPINR0BITS {
  union {
    struct {
      unsigned :8;
      unsigned INT1R:8;
    };
  };
} typeRPINR0BITS;
sfr volatile typeRPINR0BITS RPINR0bits absolute 0x6A0;

typedef struct tagRPINR1BITS {
  union {
    struct {
      unsigned INT2R:8;
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
  };
} typeRPINR2BITS;
sfr volatile typeRPINR2BITS RPINR2bits absolute 0x6A4;

typedef struct tagRPINR3BITS {
  union {
    struct {
      unsigned T2CKR:8;
      unsigned T3CKR:8;
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
  };
} typeRPINR7BITS;
sfr volatile typeRPINR7BITS RPINR7bits absolute 0x6AE;

typedef struct tagRPINR8BITS {
  union {
    struct {
      unsigned IC3R:8;
      unsigned IC4R:8;
    };
  };
} typeRPINR8BITS;
sfr volatile typeRPINR8BITS RPINR8bits absolute 0x6B0;

typedef struct tagRPINR11BITS {
  union {
    struct {
      unsigned OCFAR:8;
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
  };
} typeRPINR12BITS;
sfr volatile typeRPINR12BITS RPINR12bits absolute 0x6B8;

typedef struct tagRPINR13BITS {
  union {
    struct {
      unsigned FLT3R:8;
      unsigned FLT4R:8;
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
  };
} typeRPINR18BITS;
sfr volatile typeRPINR18BITS RPINR18bits absolute 0x6C4;

typedef struct tagRPINR19BITS {
  union {
    struct {
      unsigned U2RXR:8;
      unsigned U2CTSR:8;
    };
  };
} typeRPINR19BITS;
sfr volatile typeRPINR19BITS RPINR19bits absolute 0x6C6;

typedef struct tagRPINR20BITS {
  union {
    struct {
      unsigned SDI1R:8;
      unsigned SCK1INR:8;
    };
  };
} typeRPINR20BITS;
sfr volatile typeRPINR20BITS RPINR20bits absolute 0x6C8;

typedef struct tagRPINR21BITS {
  union {
    struct {
      unsigned SS1INR:8;
    };
  };
} typeRPINR21BITS;
sfr volatile typeRPINR21BITS RPINR21bits absolute 0x6CA;

typedef struct tagRPINR22BITS {
  union {
    struct {
      unsigned SDI2R:8;
      unsigned SCK2INR:8;
    };
  };
} typeRPINR22BITS;
sfr volatile typeRPINR22BITS RPINR22bits absolute 0x6CC;

typedef struct tagRPINR23BITS {
  union {
    struct {
      unsigned SS2INR:8;
    };
  };
} typeRPINR23BITS;
sfr volatile typeRPINR23BITS RPINR23bits absolute 0x6CE;

typedef struct tagRPINR26BITS {
  union {
    struct {
      unsigned C1RXR:8;
      unsigned C2RXR:8;
    };
  };
} typeRPINR26BITS;
sfr volatile typeRPINR26BITS RPINR26bits absolute 0x6D4;

typedef struct tagRPINR29BITS {
  union {
    struct {
      unsigned SDI3R:8;
      unsigned SCK3INR:8;
    };
  };
} typeRPINR29BITS;
sfr volatile typeRPINR29BITS RPINR29bits absolute 0x6DA;

typedef struct tagRPINR30BITS {
  union {
    struct {
      unsigned SS3INR:8;
    };
  };
} typeRPINR30BITS;
sfr volatile typeRPINR30BITS RPINR30bits absolute 0x6DC;

typedef struct tagRPINR37BITS {
  union {
    struct {
      unsigned :8;
      unsigned PSYNCI1R:8;
    };
  };
} typeRPINR37BITS;
sfr volatile typeRPINR37BITS RPINR37bits absolute 0x6EA;

typedef struct tagRPINR38BITS {
  union {
    struct {
      unsigned PSYNCI2R:8;
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
  };
} typeRPINR42BITS;
sfr volatile typeRPINR42BITS RPINR42bits absolute 0x6F4;

typedef struct tagRPINR43BITS {
  union {
    struct {
      unsigned FLT7R:8;
      unsigned FLT8R:8;
    };
  };
} typeRPINR43BITS;
sfr volatile typeRPINR43BITS RPINR43bits absolute 0x6F6;

typedef struct tagRPINR45BITS {
  union {
    struct {
      unsigned :8;
      unsigned CLCINAR:8;
    };
  };
} typeRPINR45BITS;
sfr volatile typeRPINR45BITS RPINR45bits absolute 0x6FA;

typedef struct tagRPINR46BITS {
  union {
    struct {
      unsigned CLCINBR:8;
    };
  };
} typeRPINR46BITS;
sfr volatile typeRPINR46BITS RPINR46bits absolute 0x6FC;

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
sfr volatile typeNVMCONBITS NVMCONbits absolute 0x728;

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
sfr volatile typeNVMADRBITS NVMADRbits absolute 0x72A;

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

typedef struct tagNVMSRCADDRBITS {
  union {
    struct {
      unsigned :1;
      unsigned NVMSRCADRL:15;
    };
  };
} typeNVMSRCADDRBITS;
sfr volatile typeNVMSRCADDRBITS NVMSRCADDRbits absolute 0x730;

typedef struct tagNVMSRCADRBITS {
  union {
    struct {
      unsigned :1;
      unsigned NVMSRCADRL:15;
    };
  };
} typeNVMSRCADRBITS;
sfr volatile typeNVMSRCADRBITS NVMSRCADRbits absolute 0x730;

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

typedef struct tagLFSRBITS {
  union {
    struct {
      unsigned LFSR:15;
    };
  };
} typeLFSRBITS;
sfr volatile typeLFSRBITS LFSRbits absolute 0x74C;

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
      unsigned C1MD:1;
      unsigned C2MD:1;
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
      unsigned :1;
      unsigned I2C2MD:1;
      unsigned :8;
      unsigned CMPMD:1;
    };
  };
} typePMD3BITS;
sfr volatile typePMD3BITS PMD3bits absolute 0x764;

typedef struct tagPMD4BITS {
  union {
    struct {
      unsigned :3;
      unsigned REFOMD:1;
    };
  };
} typePMD4BITS;
sfr volatile typePMD4BITS PMD4bits absolute 0x766;

typedef struct tagPMD6BITS {
  union {
    struct {
      unsigned SPI3MD:1;
      unsigned :7;
      unsigned PWM1MD:1;
      unsigned PWM2MD:1;
      unsigned PWM3MD:1;
      unsigned PWM4MD:1;
      unsigned PWM5MD:1;
      unsigned PWM6MD:1;
      unsigned PWM7MD:1;
      unsigned PWM8MD:1;
    };
  };
} typePMD6BITS;
sfr volatile typePMD6BITS PMD6bits absolute 0x76A;

typedef struct tagPMD7BITS {
  union {
    struct {
      unsigned :1;
      unsigned PGA1MD:1;
      unsigned :1;
      unsigned PTGMD:1;
      unsigned DMAMD:1;
      unsigned :3;
      unsigned CMP1MD:1;
      unsigned CMP2MD:1;
      unsigned CMP3MD:1;
      unsigned CMP4MD:1;
    };
  };
} typePMD7BITS;
sfr volatile typePMD7BITS PMD7bits absolute 0x76C;

typedef struct tagPMD8BITS {
  union {
    struct {
      unsigned :1;
      unsigned CCSMD:1;
      unsigned CLC1MD:1;
      unsigned CLC2MD:1;
      unsigned CLC3MD:1;
      unsigned CLC4MD:1;
      unsigned :3;
      unsigned ABGMD:1;
      unsigned PGA2MD:1;
    };
  };
} typePMD8BITS;
sfr volatile typePMD8BITS PMD8bits absolute 0x76E;

typedef struct tagC2CTRL1BITS {
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
} typeC2CTRL1BITS;
sfr volatile typeC2CTRL1BITS C2CTRL1bits absolute 0x780;

typedef struct tagC2CTRL2BITS {
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
} typeC2CTRL2BITS;
sfr volatile typeC2CTRL2BITS C2CTRL2bits absolute 0x782;

typedef struct tagC2VECBITS {
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
} typeC2VECBITS;
sfr volatile typeC2VECBITS C2VECbits absolute 0x784;

typedef struct tagC2FCTRLBITS {
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
} typeC2FCTRLBITS;
sfr volatile typeC2FCTRLBITS C2FCTRLbits absolute 0x786;

typedef struct tagC2FIFOBITS {
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
} typeC2FIFOBITS;
sfr volatile typeC2FIFOBITS C2FIFObits absolute 0x788;

typedef struct tagC2INTFBITS {
  union {
    struct {
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
    };
  };
} typeC2INTFBITS;
sfr volatile typeC2INTFBITS C2INTFbits absolute 0x78A;

typedef struct tagC2INTEBITS {
  union {
    struct {
      unsigned TBIE:1;
      unsigned RBIE:1;
      unsigned RBOVIE:1;
      unsigned FIFOIE:1;
      unsigned :1;
      unsigned ERRIE:1;
      unsigned WAKIE:1;
      unsigned IVRIE:1;
    };
  };
} typeC2INTEBITS;
sfr volatile typeC2INTEBITS C2INTEbits absolute 0x78C;

typedef struct tagC2ECBITS {
  union {
    struct {
      unsigned RERRCNT:8;
      unsigned TERRCNT:8;
    };
  };
} typeC2ECBITS;
sfr volatile typeC2ECBITS C2ECbits absolute 0x78E;

typedef struct tagC2CFG1BITS {
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
} typeC2CFG1BITS;
sfr volatile typeC2CFG1BITS C2CFG1bits absolute 0x790;

typedef struct tagC2CFG2BITS {
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
} typeC2CFG2BITS;
sfr volatile typeC2CFG2BITS C2CFG2bits absolute 0x792;

typedef struct tagC2FEN1BITS {
  union {
    struct {
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
    };
  };
} typeC2FEN1BITS;
sfr volatile typeC2FEN1BITS C2FEN1bits absolute 0x794;

typedef struct tagC2FMSKSEL1BITS {
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
} typeC2FMSKSEL1BITS;
sfr volatile typeC2FMSKSEL1BITS C2FMSKSEL1bits absolute 0x798;

typedef struct tagC2FMSKSEL2BITS {
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
} typeC2FMSKSEL2BITS;
sfr volatile typeC2FMSKSEL2BITS C2FMSKSEL2bits absolute 0x79A;

typedef struct tagC2BUFPNT1BITS {
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
} typeC2BUFPNT1BITS;
sfr volatile typeC2BUFPNT1BITS C2BUFPNT1bits absolute 0x7A0;

typedef struct tagC2RXFUL1BITS {
  union {
    struct {
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
    };
  };
} typeC2RXFUL1BITS;
sfr volatile typeC2RXFUL1BITS C2RXFUL1bits absolute 0x7A0;

typedef struct tagC2BUFPNT2BITS {
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
} typeC2BUFPNT2BITS;
sfr volatile typeC2BUFPNT2BITS C2BUFPNT2bits absolute 0x7A2;

typedef struct tagC2RXFUL2BITS {
  union {
    struct {
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
    };
  };
} typeC2RXFUL2BITS;
sfr volatile typeC2RXFUL2BITS C2RXFUL2bits absolute 0x7A2;

typedef struct tagC2BUFPNT3BITS {
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
} typeC2BUFPNT3BITS;
sfr volatile typeC2BUFPNT3BITS C2BUFPNT3bits absolute 0x7A4;

typedef struct tagC2BUFPNT4BITS {
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
} typeC2BUFPNT4BITS;
sfr volatile typeC2BUFPNT4BITS C2BUFPNT4bits absolute 0x7A6;

typedef struct tagC2RXOVF1BITS {
  union {
    struct {
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
    };
  };
} typeC2RXOVF1BITS;
sfr volatile typeC2RXOVF1BITS C2RXOVF1bits absolute 0x7A8;

typedef struct tagC2RXOVF2BITS {
  union {
    struct {
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
    };
  };
} typeC2RXOVF2BITS;
sfr volatile typeC2RXOVF2BITS C2RXOVF2bits absolute 0x7AA;

typedef struct tagC2RXM0SIDBITS {
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
      unsigned :1;
      unsigned EXIDE:1;
      unsigned :1;
      unsigned SID:11;
    };
  };
} typeC2RXM0SIDBITS;
sfr volatile typeC2RXM0SIDBITS C2RXM0SIDbits absolute 0x7B0;

typedef struct tagC2TR01CONBITS {
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
} typeC2TR01CONBITS;
sfr volatile typeC2TR01CONBITS C2TR01CONbits absolute 0x7B0;

typedef struct tagC2RXM0EIDBITS {
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
} typeC2RXM0EIDBITS;
sfr volatile typeC2RXM0EIDBITS C2RXM0EIDbits absolute 0x7B2;

typedef struct tagC2TR23CONBITS {
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
} typeC2TR23CONBITS;
sfr volatile typeC2TR23CONBITS C2TR23CONbits absolute 0x7B2;

typedef struct tagC2RXM1SIDBITS {
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
} typeC2RXM1SIDBITS;
sfr volatile typeC2RXM1SIDBITS C2RXM1SIDbits absolute 0x7B4;

typedef struct tagC2TR45CONBITS {
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
} typeC2TR45CONBITS;
sfr volatile typeC2TR45CONBITS C2TR45CONbits absolute 0x7B4;

typedef struct tagC2RXM1EIDBITS {
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
} typeC2RXM1EIDBITS;
sfr volatile typeC2RXM1EIDBITS C2RXM1EIDbits absolute 0x7B6;

typedef struct tagC2TR67CONBITS {
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
} typeC2TR67CONBITS;
sfr volatile typeC2TR67CONBITS C2TR67CONbits absolute 0x7B6;

typedef struct tagC2RXM2SIDBITS {
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
} typeC2RXM2SIDBITS;
sfr volatile typeC2RXM2SIDBITS C2RXM2SIDbits absolute 0x7B8;

typedef struct tagC2RXM2EIDBITS {
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
} typeC2RXM2EIDBITS;
sfr volatile typeC2RXM2EIDBITS C2RXM2EIDbits absolute 0x7BA;

typedef struct tagC2RXF0SIDBITS {
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
} typeC2RXF0SIDBITS;
sfr volatile typeC2RXF0SIDBITS C2RXF0SIDbits absolute 0x7C0;

typedef struct tagC2RXF0EIDBITS {
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
} typeC2RXF0EIDBITS;
sfr volatile typeC2RXF0EIDBITS C2RXF0EIDbits absolute 0x7C2;

typedef struct tagC2RXF1SIDBITS {
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
} typeC2RXF1SIDBITS;
sfr volatile typeC2RXF1SIDBITS C2RXF1SIDbits absolute 0x7C4;

typedef struct tagC2RXF1EIDBITS {
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
} typeC2RXF1EIDBITS;
sfr volatile typeC2RXF1EIDBITS C2RXF1EIDbits absolute 0x7C6;

typedef struct tagC2RXF2SIDBITS {
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
} typeC2RXF2SIDBITS;
sfr volatile typeC2RXF2SIDBITS C2RXF2SIDbits absolute 0x7C8;

typedef struct tagC2RXF2EIDBITS {
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
} typeC2RXF2EIDBITS;
sfr volatile typeC2RXF2EIDBITS C2RXF2EIDbits absolute 0x7CA;

typedef struct tagC2RXF3SIDBITS {
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
} typeC2RXF3SIDBITS;
sfr volatile typeC2RXF3SIDBITS C2RXF3SIDbits absolute 0x7CC;

typedef struct tagC2RXF3EIDBITS {
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
} typeC2RXF3EIDBITS;
sfr volatile typeC2RXF3EIDBITS C2RXF3EIDbits absolute 0x7CE;

typedef struct tagC2RXF4SIDBITS {
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
} typeC2RXF4SIDBITS;
sfr volatile typeC2RXF4SIDBITS C2RXF4SIDbits absolute 0x7D0;

typedef struct tagC2RXF4EIDBITS {
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
} typeC2RXF4EIDBITS;
sfr volatile typeC2RXF4EIDBITS C2RXF4EIDbits absolute 0x7D2;

typedef struct tagC2RXF5SIDBITS {
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
} typeC2RXF5SIDBITS;
sfr volatile typeC2RXF5SIDBITS C2RXF5SIDbits absolute 0x7D4;

typedef struct tagC2RXF5EIDBITS {
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
} typeC2RXF5EIDBITS;
sfr volatile typeC2RXF5EIDBITS C2RXF5EIDbits absolute 0x7D6;

typedef struct tagC2RXF6SIDBITS {
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
} typeC2RXF6SIDBITS;
sfr volatile typeC2RXF6SIDBITS C2RXF6SIDbits absolute 0x7D8;

typedef struct tagC2RXF6EIDBITS {
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
} typeC2RXF6EIDBITS;
sfr volatile typeC2RXF6EIDBITS C2RXF6EIDbits absolute 0x7DA;

typedef struct tagC2RXF7SIDBITS {
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
} typeC2RXF7SIDBITS;
sfr volatile typeC2RXF7SIDBITS C2RXF7SIDbits absolute 0x7DC;

typedef struct tagC2RXF7EIDBITS {
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
} typeC2RXF7EIDBITS;
sfr volatile typeC2RXF7EIDBITS C2RXF7EIDbits absolute 0x7DE;

typedef struct tagC2RXF8SIDBITS {
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
} typeC2RXF8SIDBITS;
sfr volatile typeC2RXF8SIDBITS C2RXF8SIDbits absolute 0x7E0;

typedef struct tagC2RXF8EIDBITS {
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
} typeC2RXF8EIDBITS;
sfr volatile typeC2RXF8EIDBITS C2RXF8EIDbits absolute 0x7E2;

typedef struct tagC2RXF9SIDBITS {
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
} typeC2RXF9SIDBITS;
sfr volatile typeC2RXF9SIDBITS C2RXF9SIDbits absolute 0x7E4;

typedef struct tagC2RXF9EIDBITS {
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
} typeC2RXF9EIDBITS;
sfr volatile typeC2RXF9EIDBITS C2RXF9EIDbits absolute 0x7E6;

typedef struct tagC2RXF10SIDBITS {
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
} typeC2RXF10SIDBITS;
sfr volatile typeC2RXF10SIDBITS C2RXF10SIDbits absolute 0x7E8;

typedef struct tagC2RXF10EIDBITS {
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
} typeC2RXF10EIDBITS;
sfr volatile typeC2RXF10EIDBITS C2RXF10EIDbits absolute 0x7EA;

typedef struct tagC2RXF11SIDBITS {
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
} typeC2RXF11SIDBITS;
sfr volatile typeC2RXF11SIDBITS C2RXF11SIDbits absolute 0x7EC;

typedef struct tagC2RXF11EIDBITS {
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
} typeC2RXF11EIDBITS;
sfr volatile typeC2RXF11EIDBITS C2RXF11EIDbits absolute 0x7EE;

typedef struct tagC2RXF12SIDBITS {
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
} typeC2RXF12SIDBITS;
sfr volatile typeC2RXF12SIDBITS C2RXF12SIDbits absolute 0x7F0;

typedef struct tagC2RXF12EIDBITS {
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
} typeC2RXF12EIDBITS;
sfr volatile typeC2RXF12EIDBITS C2RXF12EIDbits absolute 0x7F2;

typedef struct tagC2RXF13SIDBITS {
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
} typeC2RXF13SIDBITS;
sfr volatile typeC2RXF13SIDBITS C2RXF13SIDbits absolute 0x7F4;

typedef struct tagC2RXF13EIDBITS {
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
} typeC2RXF13EIDBITS;
sfr volatile typeC2RXF13EIDBITS C2RXF13EIDbits absolute 0x7F6;

typedef struct tagC2RXF14SIDBITS {
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
} typeC2RXF14SIDBITS;
sfr volatile typeC2RXF14SIDBITS C2RXF14SIDbits absolute 0x7F8;

typedef struct tagC2RXF14EIDBITS {
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
} typeC2RXF14EIDBITS;
sfr volatile typeC2RXF14EIDBITS C2RXF14EIDbits absolute 0x7FA;

typedef struct tagC2RXF15SIDBITS {
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
} typeC2RXF15SIDBITS;
sfr volatile typeC2RXF15SIDBITS C2RXF15SIDbits absolute 0x7FC;

typedef struct tagC2RXF15EIDBITS {
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
} typeC2RXF15EIDBITS;
sfr volatile typeC2RXF15EIDBITS C2RXF15EIDbits absolute 0x7FE;

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
      unsigned SPI1TXIF:1;
      unsigned SPI1RXIF:1;
      unsigned U1RXIF:1;
      unsigned U1TXIF:1;
      unsigned ADCIF:1;
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
    };
  };
} typeIFS1BITS;
sfr volatile typeIFS1BITS IFS1bits absolute 0x802;

typedef struct tagIFS2BITS {
  union {
    struct {
      unsigned SPI2TXIF:1;
      unsigned SPI2RXIF:1;
      unsigned C1RXIF:1;
      unsigned C1IF:1;
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
      unsigned :1;
      unsigned SI2C2IF:1;
      unsigned MI2C2IF:1;
      unsigned :3;
      unsigned INT4IF:1;
      unsigned C2RXIF:1;
      unsigned C2IF:1;
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
      unsigned :3;
      unsigned C1TXIF:1;
      unsigned C2TXIF:1;
      unsigned :1;
      unsigned PSESIF:1;
    };
  };
} typeIFS4BITS;
sfr volatile typeIFS4BITS IFS4bits absolute 0x808;

typedef struct tagIFS5BITS {
  union {
    struct {
      unsigned :10;
      unsigned SPI3TXIF:1;
      unsigned SPI3RXIF:1;
      unsigned :2;
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
      unsigned PWM4IF:1;
      unsigned PWM5IF:1;
      unsigned PWM6IF:1;
      unsigned PWM7IF:1;
      unsigned PWM8IF:1;
      unsigned :1;
      unsigned AC2IF:1;
      unsigned AC3IF:1;
      unsigned AC4IF:1;
      unsigned :4;
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
      unsigned :6;
      unsigned SPI1EIF:1;
      unsigned SPI2EIF:1;
      unsigned SPI3EIF:1;
    };
  };
} typeIFS7BITS;
sfr volatile typeIFS7BITS IFS7bits absolute 0x80E;

typedef struct tagIFS8BITS {
  union {
    struct {
      unsigned :10;
      unsigned CLC1IF:1;
      unsigned CLC2IF:1;
      unsigned CLC3IF:1;
      unsigned CLC4IF:1;
      unsigned ICDIF:1;
      unsigned JTAGIF:1;
    };
  };
} typeIFS8BITS;
sfr volatile typeIFS8BITS IFS8bits absolute 0x810;

typedef struct tagIFS9BITS {
  union {
    struct {
      unsigned :1;
      unsigned PTGSTEPIF:1;
      unsigned PTGWDTIF:1;
      unsigned PTG0IF:1;
      unsigned PTG1IF:1;
      unsigned PTG2IF:1;
      unsigned PTG3IF:1;
      unsigned ADCAN8IF:1;
      unsigned ADCAN9IF:1;
      unsigned ADCAN10IF:1;
      unsigned ADCAN11IF:1;
      unsigned ADCAN12IF:1;
      unsigned ADCAN13IF:1;
      unsigned ADCAN14IF:1;
      unsigned ADCAN15IF:1;
      unsigned ADCAN16IF:1;
    };
  };
} typeIFS9BITS;
sfr volatile typeIFS9BITS IFS9bits absolute 0x812;

typedef struct tagIFS10BITS {
  union {
    struct {
      unsigned ADCAN17IF:1;
      unsigned ADCAN18IF:1;
      unsigned ADCAN19IF:1;
      unsigned ADCAN20IF:1;
      unsigned ADCAN21IF:1;
      unsigned :8;
      unsigned I2C1BCIF:1;
      unsigned I2C2BCIF:1;
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
      unsigned ADFLTR0IF:1;
      unsigned ADFLTR1IF:1;
      unsigned :6;
      unsigned ADCC0EIF:1;
      unsigned ADCC1EIF:1;
      unsigned ADCC2EIF:1;
      unsigned ADCC3EIF:1;
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
      unsigned SPI1TXIE:1;
      unsigned SPI1RXIE:1;
      unsigned U1RXIE:1;
      unsigned U1TXIE:1;
      unsigned ADCIE:1;
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
    };
  };
} typeIEC1BITS;
sfr volatile typeIEC1BITS IEC1bits absolute 0x822;

typedef struct tagIEC2BITS {
  union {
    struct {
      unsigned SPI2TXIE:1;
      unsigned SPI2RXIE:1;
      unsigned C1RXIE:1;
      unsigned C1IE:1;
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
      unsigned :1;
      unsigned SI2C2IE:1;
      unsigned MI2C2IE:1;
      unsigned :3;
      unsigned INT4IE:1;
      unsigned C2RXIE:1;
      unsigned C2IE:1;
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
      unsigned :3;
      unsigned C1TXIE:1;
      unsigned C2TXIE:1;
      unsigned :1;
      unsigned PSESIE:1;
    };
  };
} typeIEC4BITS;
sfr volatile typeIEC4BITS IEC4bits absolute 0x828;

typedef struct tagIEC5BITS {
  union {
    struct {
      unsigned :10;
      unsigned SPI3TXIE:1;
      unsigned SPI3RXIE:1;
      unsigned :2;
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
      unsigned PWM4IE:1;
      unsigned PWM5IE:1;
      unsigned PWM6IE:1;
      unsigned PWM7IE:1;
      unsigned PWM8IE:1;
      unsigned :1;
      unsigned AC2IE:1;
      unsigned AC3IE:1;
      unsigned AC4IE:1;
      unsigned :4;
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
      unsigned :6;
      unsigned SPI1EIE:1;
      unsigned SPI2EIE:1;
      unsigned SPI3EIE:1;
    };
  };
} typeIEC7BITS;
sfr volatile typeIEC7BITS IEC7bits absolute 0x82E;

typedef struct tagIEC8BITS {
  union {
    struct {
      unsigned :10;
      unsigned CLC1IE:1;
      unsigned CLC2IE:1;
      unsigned CLC3IE:1;
      unsigned CLC4IE:1;
      unsigned ICDIF:1;
      unsigned JTAGIE:1;
    };
  };
} typeIEC8BITS;
sfr volatile typeIEC8BITS IEC8bits absolute 0x830;

typedef struct tagIEC9BITS {
  union {
    struct {
      unsigned :1;
      unsigned PTGSTEPIE:1;
      unsigned PTGWDTIE:1;
      unsigned PTG0IE:1;
      unsigned PTG1IE:1;
      unsigned PTG2IE:1;
      unsigned PTG3IE:1;
      unsigned ADCAN8IE:1;
      unsigned ADCAN9IE:1;
      unsigned ADCAN10IE:1;
      unsigned ADCAN11IE:1;
      unsigned ADCAN12IE:1;
      unsigned ADCAN13IE:1;
      unsigned ADCAN14IE:1;
      unsigned ADCAN15IE:1;
      unsigned ADCAN16IE:1;
    };
  };
} typeIEC9BITS;
sfr volatile typeIEC9BITS IEC9bits absolute 0x832;

typedef struct tagIEC10BITS {
  union {
    struct {
      unsigned ADCAN17IE:1;
      unsigned ADCAN18IE:1;
      unsigned ADCAN19IE:1;
      unsigned ADCAN20IE:1;
      unsigned ADCAN21IE:1;
      unsigned :8;
      unsigned I2C1BCIE:1;
      unsigned I2C2BCIE:1;
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
      unsigned ADFLTR0IE:1;
      unsigned ADFLTR1IE:1;
      unsigned :6;
      unsigned ADCC0EIE:1;
      unsigned ADCC1EIE:1;
      unsigned ADCC2EIE:1;
      unsigned ADCC3EIE:1;
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
      unsigned DMA0P0:1;
      unsigned DMA0P1:1;
      unsigned DMA0P2:1;
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
      unsigned SPI1TXIP:3;
      unsigned :1;
      unsigned SPI1RXIP:3;
      unsigned :1;
      unsigned U1RXIP:3;
    };
    struct {
      unsigned T3IP0:1;
      unsigned T3IP1:1;
      unsigned T3IP2:1;
      unsigned :1;
      unsigned SPI1TXIP0:1;
      unsigned SPI1TXIP1:1;
      unsigned SPI1TXIP2:1;
      unsigned :1;
      unsigned SPI1RXIP0:1;
      unsigned SPI1RXIP1:1;
      unsigned SPI1RXIP2:1;
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
      unsigned ADCIP0:1;
      unsigned ADCIP1:1;
      unsigned ADCIP2:1;
      unsigned :1;
      unsigned DMA1P0:1;
      unsigned DMA1P1:1;
      unsigned DMA1P2:1;
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
    struct {
      unsigned :8;
      unsigned CMP1IP:3;
    };
    struct {
      unsigned :8;
      unsigned CMP1IP0:1;
      unsigned CMP1IP1:1;
      unsigned CMP1IP2:1;
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
      unsigned DMA2P0:1;
      unsigned DMA2P1:1;
      unsigned DMA2P2:1;
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
      unsigned SPI2TXIP:3;
      unsigned :1;
      unsigned SPI2RXIP:3;
      unsigned :1;
      unsigned C1RXIP:3;
      unsigned :1;
      unsigned C1IP:3;
    };
    struct {
      unsigned SPI2TXIP0:1;
      unsigned SPI2TXIP1:1;
      unsigned SPI2TXIP2:1;
      unsigned :1;
      unsigned SPI2RXIP0:1;
      unsigned SPI2RXIP1:1;
      unsigned SPI2RXIP2:1;
      unsigned :5;
      unsigned C1IP0:1;
      unsigned C1IP1:1;
      unsigned C1IP2:1;
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
      unsigned DMA3P0:1;
      unsigned DMA3P1:1;
      unsigned DMA3P2:1;
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
sfr volatile typeIPC9BITS IPC9bits absolute 0x852;

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
sfr volatile typeIPC12BITS IPC12bits absolute 0x858;

typedef struct tagIPC13BITS {
  union {
    struct {
      unsigned :8;
      unsigned INT4IP:3;
      unsigned :1;
      unsigned C2RXIP:3;
    };
    struct {
      unsigned :8;
      unsigned INT4IP0:1;
      unsigned INT4IP1:1;
      unsigned INT4IP2:1;
      unsigned :1;
      unsigned C2RXIP0:1;
      unsigned C2RXIP1:1;
      unsigned C2RXIP2:1;
    };
  };
} typeIPC13BITS;
sfr volatile typeIPC13BITS IPC13bits absolute 0x85A;

typedef struct tagIPC14BITS {
  union {
    struct {
      unsigned C2IP:3;
      unsigned :1;
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
    };
  };
} typeIPC16BITS;
sfr volatile typeIPC16BITS IPC16bits absolute 0x860;

typedef struct tagIPC17BITS {
  union {
    struct {
      unsigned :8;
      unsigned C1TXIP:3;
      unsigned :1;
      unsigned C2TXIP:3;
    };
    struct {
      unsigned :8;
      unsigned C1TXIP0:1;
      unsigned C1TXIP1:1;
      unsigned C1TXIP2:1;
      unsigned :1;
      unsigned C2TXIP0:1;
      unsigned C2TXIP1:1;
      unsigned C2TXIP2:1;
    };
  };
} typeIPC17BITS;
sfr volatile typeIPC17BITS IPC17bits absolute 0x862;

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

typedef struct tagIPC22BITS {
  union {
    struct {
      unsigned :8;
      unsigned SPI3TXIP:3;
      unsigned :1;
      unsigned SPI3RXIP:3;
    };
    struct {
      unsigned :8;
      unsigned SPI3TXIP0:1;
      unsigned SPI3TXIP1:1;
      unsigned SPI3TXIP2:1;
      unsigned :1;
      unsigned SPI3RXIP0:1;
      unsigned SPI3RXIP1:1;
      unsigned SPI3RXIP2:1;
    };
  };
} typeIPC22BITS;
sfr volatile typeIPC22BITS IPC22bits absolute 0x86C;

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
sfr volatile typeIPC24BITS IPC24bits absolute 0x870;

typedef struct tagIPC25BITS {
  union {
    struct {
      unsigned PWM7IP:3;
      unsigned :1;
      unsigned PWM8IP:3;
      unsigned :5;
      unsigned AC2IP:3;
    };
    struct {
      unsigned PWM7IP0:1;
      unsigned PWM7IP1:1;
      unsigned PWM7IP2:1;
      unsigned :1;
      unsigned PWM8IP0:1;
      unsigned PWM8IP1:1;
      unsigned PWM8IP2:1;
      unsigned :5;
      unsigned AC2IP0:1;
      unsigned AC2IP1:1;
      unsigned AC2IP2:1;
    };
    struct {
      unsigned :12;
      unsigned CMP2IP:3;
    };
    struct {
      unsigned :12;
      unsigned CMP2IP0:1;
      unsigned CMP2IP1:1;
      unsigned CMP2IP2:1;
    };
  };
} typeIPC25BITS;
sfr volatile typeIPC25BITS IPC25bits absolute 0x872;

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
    struct {
      unsigned CMP3IP:3;
      unsigned :1;
      unsigned CMP4IP:3;
    };
    struct {
      unsigned CMP3IP0:1;
      unsigned CMP3IP1:1;
      unsigned CMP3IP2:1;
      unsigned :1;
      unsigned CMP4IP0:1;
      unsigned CMP4IP1:1;
      unsigned CMP4IP2:1;
    };
  };
} typeIPC26BITS;
sfr volatile typeIPC26BITS IPC26bits absolute 0x874;

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

typedef struct tagIPC31BITS {
  union {
    struct {
      unsigned SPI1EIP:3;
      unsigned :1;
      unsigned SPI2EIP:3;
      unsigned :1;
      unsigned SPI3EIP:3;
    };
    struct {
      unsigned SPI1EIP0:1;
      unsigned SPI1EIP1:1;
      unsigned SPI1EIP2:1;
      unsigned :1;
      unsigned SPI2EIP0:1;
      unsigned SPI2EIP1:1;
      unsigned SPI2EIP2:1;
      unsigned :1;
      unsigned SPI3EIP0:1;
      unsigned SPI3EIP1:1;
      unsigned SPI3EIP2:1;
    };
  };
} typeIPC31BITS;
sfr volatile typeIPC31BITS IPC31bits absolute 0x87E;

typedef struct tagIPC34BITS {
  union {
    struct {
      unsigned :8;
      unsigned CLC1IP:3;
      unsigned :1;
      unsigned CLC2IP:3;
    };
    struct {
      unsigned :8;
      unsigned CLC1IP0:1;
      unsigned CLC1IP1:1;
      unsigned CLC1IP2:1;
      unsigned :1;
      unsigned CLC2IP0:1;
      unsigned CLC2IP1:1;
      unsigned CLC2IP2:1;
    };
  };
} typeIPC34BITS;
sfr volatile typeIPC34BITS IPC34bits absolute 0x884;

typedef struct tagIPC35BITS {
  union {
    struct {
      unsigned CLC3IP:3;
      unsigned :1;
      unsigned CLC4IP:3;
      unsigned :1;
      unsigned ICDIP:3;
      unsigned :1;
      unsigned JTAGIP:3;
    };
    struct {
      unsigned CLC3IP0:1;
      unsigned CLC3IP1:1;
      unsigned CLC3IP2:1;
      unsigned :1;
      unsigned CLC4IP0:1;
      unsigned CLC4IP1:1;
      unsigned CLC4IP2:1;
      unsigned :1;
      unsigned ICDIP0:1;
      unsigned ICDIP1:1;
      unsigned ICDIP2:1;
      unsigned :1;
      unsigned JTAGIP0:1;
      unsigned JTAGIP1:1;
      unsigned JTAGIP2:1;
    };
  };
} typeIPC35BITS;
sfr volatile typeIPC35BITS IPC35bits absolute 0x886;

typedef struct tagIPC36BITS {
  union {
    struct {
      unsigned :4;
      unsigned PTGSTEPIP:3;
      unsigned :1;
      unsigned PTGWDTIP:3;
      unsigned :1;
      unsigned PTG0IP:3;
    };
    struct {
      unsigned :4;
      unsigned PTGSTEP0:1;
      unsigned PTGSTEP1:1;
      unsigned PTGSTEP2:1;
      unsigned :1;
      unsigned PTGWDTP0:1;
      unsigned PTGWDTP1:1;
      unsigned PTGWDTP2:1;
      unsigned :1;
      unsigned PTGP0:1;
      unsigned PTG0P1:1;
      unsigned PTG0P2:1;
    };
  };
} typeIPC36BITS;
sfr volatile typeIPC36BITS IPC36bits absolute 0x888;

typedef struct tagIPC37BITS {
  union {
    struct {
      unsigned PTG1IP:3;
      unsigned :1;
      unsigned PTG2IP:3;
      unsigned :1;
      unsigned PTG3IP:3;
      unsigned :1;
      unsigned ADCAN8IP:3;
    };
    struct {
      unsigned PTG1P0:1;
      unsigned PTG1P1:1;
      unsigned PTG1P2:1;
      unsigned :1;
      unsigned PTG2P0:1;
      unsigned PTG2P1:1;
      unsigned PTG2P2:1;
      unsigned :1;
      unsigned PTG3P0:1;
      unsigned PTG3P1:1;
      unsigned PTG3P2:1;
      unsigned :1;
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
      unsigned :1;
      unsigned ADCAN12IP:3;
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
      unsigned :1;
      unsigned ADCAN12IP0:1;
      unsigned ADCAN12IP1:1;
      unsigned ADCAN12IP2:1;
    };
  };
} typeIPC38BITS;
sfr volatile typeIPC38BITS IPC38bits absolute 0x88C;

typedef struct tagIPC39BITS {
  union {
    struct {
      unsigned ADCAN13IP:3;
      unsigned :1;
      unsigned ADCAN14IP:3;
      unsigned :1;
      unsigned ADCAN15IP:3;
      unsigned :1;
      unsigned ADCAN16IP:3;
    };
    struct {
      unsigned ADCAN13IP0:1;
      unsigned ADCAN13IP1:1;
      unsigned ADCAN13IP2:1;
      unsigned :1;
      unsigned ADCAN14IP0:1;
      unsigned ADCAN14IP1:1;
      unsigned ADCAN14IP2:1;
      unsigned :1;
      unsigned ADCAN15IP0:1;
      unsigned ADCAN15IP1:1;
      unsigned ADCAN15IP2:1;
      unsigned :1;
      unsigned ADCAN16IP0:1;
      unsigned ADCAN16IP1:1;
      unsigned ADCAN16IP2:1;
    };
  };
} typeIPC39BITS;
sfr volatile typeIPC39BITS IPC39bits absolute 0x88E;

typedef struct tagIPC40BITS {
  union {
    struct {
      unsigned ADCAN17IP:3;
      unsigned :1;
      unsigned ADCAN18IP:3;
      unsigned :1;
      unsigned ADCAN19IP:3;
      unsigned :1;
      unsigned ADCAN20IP:3;
    };
    struct {
      unsigned ADCAN17IP0:1;
      unsigned ADCAN17IP1:1;
      unsigned ADCAN17IP2:1;
      unsigned :1;
      unsigned ADCAN18IP0:1;
      unsigned ADCAN18IP1:1;
      unsigned ADCAN18IP2:1;
      unsigned :1;
      unsigned ADCAN19IP0:1;
      unsigned ADCAN19IP1:1;
      unsigned ADCAN19IP2:1;
      unsigned :1;
      unsigned ADCAN20IP0:1;
      unsigned ADCAN20IP1:1;
      unsigned ADCAN20IP2:1;
    };
  };
} typeIPC40BITS;
sfr volatile typeIPC40BITS IPC40bits absolute 0x890;

typedef struct tagIPC41BITS {
  union {
    struct {
      unsigned ADCAN21IP:3;
    };
    struct {
      unsigned ADCAN21IP0:1;
      unsigned ADCAN21IP1:1;
      unsigned ADCAN21IP2:1;
    };
  };
} typeIPC41BITS;
sfr volatile typeIPC41BITS IPC41bits absolute 0x892;

typedef struct tagIPC43BITS {
  union {
    struct {
      unsigned :4;
      unsigned I2C1BCIP:3;
      unsigned :1;
      unsigned I2C2BCIP:3;
    };
    struct {
      unsigned :4;
      unsigned I2C1BCIP0:1;
      unsigned I2C1BCIP1:1;
      unsigned I2C1BCIP2:1;
      unsigned :1;
      unsigned I2C2BCIP0:1;
      unsigned I2C2BCIP1:1;
      unsigned I2C2BCIP2:1;
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
      unsigned ADFLTR0IP:3;
    };
    struct {
      unsigned :4;
      unsigned ADCMP0IP0:1;
      unsigned ADCMP0IP1:1;
      unsigned ADCMP0IP2:1;
      unsigned :1;
      unsigned ADCMP1IP0:1;
      unsigned ADCMP1IP1:1;
      unsigned ADCMP1IP2:1;
      unsigned :1;
      unsigned ADFLTR0IP0:1;
      unsigned ADFLTR0IP1:1;
      unsigned ADFLTR0IP2:1;
    };
  };
} typeIPC44BITS;
sfr volatile typeIPC44BITS IPC44bits absolute 0x898;

typedef struct tagIPC45BITS {
  union {
    struct {
      unsigned ADFLTR1IP:3;
    };
    struct {
      unsigned ADFLTR1IP0:1;
      unsigned ADFLTR1IP1:1;
      unsigned ADFLTR1IP2:1;
    };
  };
} typeIPC45BITS;
sfr volatile typeIPC45BITS IPC45bits absolute 0x89A;

typedef struct tagIPC46BITS {
  union {
    struct {
      unsigned :12;
      unsigned ADCC0EIP:3;
    };
    struct {
      unsigned :12;
      unsigned ADCC0EP0:1;
      unsigned ADCC0EP1:1;
      unsigned ADCC0EP2:1;
    };
  };
} typeIPC46BITS;
sfr volatile typeIPC46BITS IPC46bits absolute 0x89C;

typedef struct tagIPC47BITS {
  union {
    struct {
      unsigned ADCC1EIP:3;
      unsigned :1;
      unsigned ADCC2EIP:3;
      unsigned :1;
      unsigned ADCC3EIP:3;
    };
    struct {
      unsigned ADCC1EP0:1;
      unsigned ADCC1EP1:1;
      unsigned ADCC1EP2:1;
      unsigned :1;
      unsigned ADCC2EP0:1;
      unsigned ADCC2EP1:1;
      unsigned ADCC2EP2:1;
      unsigned :1;
      unsigned ADCC3EP0:1;
      unsigned ADCC3EP1:1;
      unsigned ADCC3EP2:1;
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
sfr volatile typeCLC1CONLBITS CLC1CONLbits absolute 0x9C0;

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
sfr volatile typeCLC1CONHBITS CLC1CONHbits absolute 0x9C2;

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
sfr volatile typeCLC1SELBITS CLC1SELbits absolute 0x9C4;

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
sfr volatile typeCLC1SELLBITS CLC1SELLbits absolute 0x9C4;

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
sfr volatile typeCLC1GLSLBITS CLC1GLSLbits absolute 0x9C8;

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
sfr volatile typeCLC1GLSHBITS CLC1GLSHbits absolute 0x9CA;

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
sfr volatile typeCLC2CONLBITS CLC2CONLbits absolute 0x9CC;

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
sfr volatile typeCLC2CONHBITS CLC2CONHbits absolute 0x9CE;

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
sfr volatile typeCLC2SELBITS CLC2SELbits absolute 0x9D0;

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
sfr volatile typeCLC2SELLBITS CLC2SELLbits absolute 0x9D0;

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
sfr volatile typeCLC2GLSLBITS CLC2GLSLbits absolute 0x9D4;

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
sfr volatile typeCLC2GLSHBITS CLC2GLSHbits absolute 0x9D6;

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
sfr volatile typeCLC3CONLBITS CLC3CONLbits absolute 0x9D8;

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
sfr volatile typeCLC3CONHBITS CLC3CONHbits absolute 0x9DA;

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
sfr volatile typeCLC3SELBITS CLC3SELbits absolute 0x9DC;

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
sfr volatile typeCLC3SELLBITS CLC3SELLbits absolute 0x9DC;

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
sfr volatile typeCLC3GLSLBITS CLC3GLSLbits absolute 0x9E0;

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
sfr volatile typeCLC3GLSHBITS CLC3GLSHbits absolute 0x9E2;

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
sfr volatile typeCLC4CONLBITS CLC4CONLbits absolute 0x9E4;

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
sfr volatile typeCLC4CONHBITS CLC4CONHbits absolute 0x9E6;

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
sfr volatile typeCLC4SELBITS CLC4SELbits absolute 0x9E8;

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
sfr volatile typeCLC4SELLBITS CLC4SELLbits absolute 0x9E8;

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
sfr volatile typeCLC4GLSLBITS CLC4GLSLbits absolute 0x9EC;

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
sfr volatile typeCLC4GLSHBITS CLC4GLSHbits absolute 0x9EE;

typedef struct tagPTGCSTBITS {
  union {
    struct {
      unsigned PTGITM:2;
      unsigned :4;
      unsigned PTGWTO:1;
      unsigned PTGSTRT:1;
      unsigned PTGIVIS:1;
      unsigned PTGSSEN:1;
      unsigned PTGSWT:1;
      unsigned :1;
      unsigned PTGTOGL:1;
      unsigned PTGSIDL:1;
      unsigned :1;
      unsigned PTGEN:1;
    };
  };
} typePTGCSTBITS;
sfr volatile typePTGCSTBITS PTGCSTbits absolute 0xAC0;

typedef struct tagPTGCONBITS {
  union {
    struct {
      unsigned PTGWDT:3;
      unsigned :1;
      unsigned PTGPWD:4;
      unsigned PTGDIV:5;
      unsigned PTGCLK:3;
    };
  };
} typePTGCONBITS;
sfr volatile typePTGCONBITS PTGCONbits absolute 0xAC2;

typedef struct tagPTGBTEBITS {
  union {
    struct {
      unsigned OC1TSS:1;
      unsigned OC2TSS:1;
      unsigned OC3TSS:1;
      unsigned OC4TSS:1;
      unsigned OC1CS:1;
      unsigned OC2CS:1;
      unsigned OC3CS:1;
      unsigned OC4CS:1;
      unsigned IC1TSS:1;
      unsigned IC2TSS:1;
      unsigned IC3TSS:1;
      unsigned IC4TSS:1;
      unsigned ADCTS1:1;
      unsigned ADCTS2:1;
      unsigned ADCTS3:1;
      unsigned ADCTS4:1;
    };
    struct {
      unsigned PTGBTE:16;
    };
  };
} typePTGBTEBITS;
sfr volatile typePTGBTEBITS PTGBTEbits absolute 0xAC4;

typedef struct tagPTGQPTRBITS {
  union {
    struct {
      unsigned PTGQPTR:5;
    };
  };
} typePTGQPTRBITS;
sfr volatile typePTGQPTRBITS PTGQPTRbits absolute 0xAD6;

typedef struct tagPTGQUE0BITS {
  union {
    struct {
      unsigned STEP0:8;
      unsigned STEP1:8;
    };
  };
} typePTGQUE0BITS;
sfr volatile typePTGQUE0BITS PTGQUE0bits absolute 0xAD8;

typedef struct tagPTGQUE1BITS {
  union {
    struct {
      unsigned STEP2:8;
      unsigned STEP3:8;
    };
  };
} typePTGQUE1BITS;
sfr volatile typePTGQUE1BITS PTGQUE1bits absolute 0xADA;

typedef struct tagPTGQUE2BITS {
  union {
    struct {
      unsigned STEP4:8;
      unsigned STEP5:8;
    };
  };
} typePTGQUE2BITS;
sfr volatile typePTGQUE2BITS PTGQUE2bits absolute 0xADC;

typedef struct tagPTGQUE3BITS {
  union {
    struct {
      unsigned STEP6:8;
      unsigned STEP7:8;
    };
  };
} typePTGQUE3BITS;
sfr volatile typePTGQUE3BITS PTGQUE3bits absolute 0xADE;

typedef struct tagPTGQUE4BITS {
  union {
    struct {
      unsigned STEP8:8;
      unsigned STEP9:8;
    };
  };
} typePTGQUE4BITS;
sfr volatile typePTGQUE4BITS PTGQUE4bits absolute 0xAE0;

typedef struct tagPTGQUE5BITS {
  union {
    struct {
      unsigned STEP10:8;
      unsigned STEP11:8;
    };
  };
} typePTGQUE5BITS;
sfr volatile typePTGQUE5BITS PTGQUE5bits absolute 0xAE2;

typedef struct tagPTGQUE6BITS {
  union {
    struct {
      unsigned STEP12:8;
      unsigned STEP13:8;
    };
  };
} typePTGQUE6BITS;
sfr volatile typePTGQUE6BITS PTGQUE6bits absolute 0xAE4;

typedef struct tagPTGQUE7BITS {
  union {
    struct {
      unsigned STEP14:8;
      unsigned STEP15:8;
    };
  };
} typePTGQUE7BITS;
sfr volatile typePTGQUE7BITS PTGQUE7bits absolute 0xAE6;

typedef struct tagPTGQUE8BITS {
  union {
    struct {
      unsigned STEP16:8;
      unsigned STEP17:8;
    };
  };
} typePTGQUE8BITS;
sfr volatile typePTGQUE8BITS PTGQUE8bits absolute 0xAE8;

typedef struct tagPTGQUE9BITS {
  union {
    struct {
      unsigned STEP18:8;
      unsigned STEP19:8;
    };
  };
} typePTGQUE9BITS;
sfr volatile typePTGQUE9BITS PTGQUE9bits absolute 0xAEA;

typedef struct tagPTGQUE10BITS {
  union {
    struct {
      unsigned STEP20:8;
      unsigned STEP21:8;
    };
  };
} typePTGQUE10BITS;
sfr volatile typePTGQUE10BITS PTGQUE10bits absolute 0xAEC;

typedef struct tagPTGQUE11BITS {
  union {
    struct {
      unsigned STEP22:8;
      unsigned STEP23:8;
    };
  };
} typePTGQUE11BITS;
sfr volatile typePTGQUE11BITS PTGQUE11bits absolute 0xAEE;

typedef struct tagPTGQUE12BITS {
  union {
    struct {
      unsigned STEP24:8;
      unsigned STEP25:8;
    };
  };
} typePTGQUE12BITS;
sfr volatile typePTGQUE12BITS PTGQUE12bits absolute 0xAF0;

typedef struct tagPTGQUE13BITS {
  union {
    struct {
      unsigned STEP26:8;
      unsigned STEP27:8;
    };
  };
} typePTGQUE13BITS;
sfr volatile typePTGQUE13BITS PTGQUE13bits absolute 0xAF2;

typedef struct tagPTGQUE14BITS {
  union {
    struct {
      unsigned STEP28:8;
      unsigned STEP29:8;
    };
  };
} typePTGQUE14BITS;
sfr volatile typePTGQUE14BITS PTGQUE14bits absolute 0xAF4;

typedef struct tagPTGQUE15BITS {
  union {
    struct {
      unsigned STEP30:8;
      unsigned STEP31:8;
    };
  };
} typePTGQUE15BITS;
sfr volatile typePTGQUE15BITS PTGQUE15bits absolute 0xAF6;

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
      unsigned PWCOL4:1;
      unsigned PWCOL5:1;
      unsigned PWCOL6:1;
      unsigned PWCOL7:1;
      unsigned PWCOL8:1;
      unsigned PWCOL9:1;
      unsigned PWCOL10:1;
      unsigned PWCOL11:1;
      unsigned PWCOL12:1;
      unsigned PWCOL13:1;
      unsigned PWCOL14:1;
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
      unsigned RQCOL4:1;
      unsigned RQCOL5:1;
      unsigned RQCOL6:1;
      unsigned RQCOL7:1;
      unsigned RQCOL8:1;
      unsigned RQCOL9:1;
      unsigned RQCOL10:1;
      unsigned RQCOL11:1;
      unsigned RQCOL12:1;
      unsigned RQCOL13:1;
      unsigned RQCOL14:1;
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
      unsigned PPST4:1;
      unsigned PPST5:1;
      unsigned PPST6:1;
      unsigned PPST7:1;
      unsigned PPST8:1;
      unsigned PPST9:1;
      unsigned PPST10:1;
      unsigned PPST11:1;
      unsigned PPST12:1;
      unsigned PPST13:1;
      unsigned PPST14:1;
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

typedef struct tagPWMCON4BITS {
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
} typePWMCON4BITS;
sfr volatile typePWMCON4BITS PWMCON4bits absolute 0xC80;

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
sfr volatile typeIOCON4BITS IOCON4bits absolute 0xC82;

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
sfr volatile typeFCLCON4BITS FCLCON4bits absolute 0xC84;

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
sfr volatile typeTRIG4BITS TRIG4bits absolute 0xC92;

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
sfr volatile typeTRGCON4BITS TRGCON4bits absolute 0xC94;

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
sfr volatile typeSTRIG4BITS STRIG4bits absolute 0xC96;

typedef struct tagPWMCAP4BITS {
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
} typePWMCAP4BITS;
sfr volatile typePWMCAP4BITS PWMCAP4bits absolute 0xC98;

typedef struct tagLEBCON4BITS {
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
} typeLEBCON4BITS;
sfr volatile typeLEBCON4BITS LEBCON4bits absolute 0xC9A;

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
sfr volatile typeLEBDLY4BITS LEBDLY4bits absolute 0xC9C;

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
sfr volatile typeAUXCON4BITS AUXCON4bits absolute 0xC9E;

typedef struct tagPWMCON5BITS {
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
} typePWMCON5BITS;
sfr volatile typePWMCON5BITS PWMCON5bits absolute 0xCA0;

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
sfr volatile typeIOCON5BITS IOCON5bits absolute 0xCA2;

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
sfr volatile typeFCLCON5BITS FCLCON5bits absolute 0xCA4;

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
sfr volatile typeTRIG5BITS TRIG5bits absolute 0xCB2;

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
sfr volatile typeTRGCON5BITS TRGCON5bits absolute 0xCB4;

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
sfr volatile typeSTRIG5BITS STRIG5bits absolute 0xCB6;

typedef struct tagPWMCAP5BITS {
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
} typePWMCAP5BITS;
sfr volatile typePWMCAP5BITS PWMCAP5bits absolute 0xCB8;

typedef struct tagLEBCON5BITS {
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
} typeLEBCON5BITS;
sfr volatile typeLEBCON5BITS LEBCON5bits absolute 0xCBA;

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
sfr volatile typeLEBDLY5BITS LEBDLY5bits absolute 0xCBC;

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
sfr volatile typeAUXCON5BITS AUXCON5bits absolute 0xCBE;

typedef struct tagPWMCON6BITS {
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
} typePWMCON6BITS;
sfr volatile typePWMCON6BITS PWMCON6bits absolute 0xCC0;

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
sfr volatile typeIOCON6BITS IOCON6bits absolute 0xCC2;

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
sfr volatile typeFCLCON6BITS FCLCON6bits absolute 0xCC4;

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
sfr volatile typeTRIG6BITS TRIG6bits absolute 0xCD2;

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
sfr volatile typeTRGCON6BITS TRGCON6bits absolute 0xCD4;

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
sfr volatile typeSTRIG6BITS STRIG6bits absolute 0xCD6;

typedef struct tagPWMCAP6BITS {
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
} typePWMCAP6BITS;
sfr volatile typePWMCAP6BITS PWMCAP6bits absolute 0xCD8;

typedef struct tagLEBCON6BITS {
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
} typeLEBCON6BITS;
sfr volatile typeLEBCON6BITS LEBCON6bits absolute 0xCDA;

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
sfr volatile typeLEBDLY6BITS LEBDLY6bits absolute 0xCDC;

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
sfr volatile typeAUXCON6BITS AUXCON6bits absolute 0xCDE;

typedef struct tagPWMCON7BITS {
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
} typePWMCON7BITS;
sfr volatile typePWMCON7BITS PWMCON7bits absolute 0xCE0;

typedef struct tagIOCON7BITS {
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
} typeIOCON7BITS;
sfr volatile typeIOCON7BITS IOCON7bits absolute 0xCE2;

typedef struct tagFCLCON7BITS {
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
} typeFCLCON7BITS;
sfr volatile typeFCLCON7BITS FCLCON7bits absolute 0xCE4;

typedef struct tagTRIG7BITS {
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
} typeTRIG7BITS;
sfr volatile typeTRIG7BITS TRIG7bits absolute 0xCF2;

typedef struct tagTRGCON7BITS {
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
} typeTRGCON7BITS;
sfr volatile typeTRGCON7BITS TRGCON7bits absolute 0xCF4;

typedef struct tagSTRIG7BITS {
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
} typeSTRIG7BITS;
sfr volatile typeSTRIG7BITS STRIG7bits absolute 0xCF6;

typedef struct tagPWMCAP7BITS {
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
} typePWMCAP7BITS;
sfr volatile typePWMCAP7BITS PWMCAP7bits absolute 0xCF8;

typedef struct tagLEBCON7BITS {
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
} typeLEBCON7BITS;
sfr volatile typeLEBCON7BITS LEBCON7bits absolute 0xCFA;

typedef struct tagLEBDLY7BITS {
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
} typeLEBDLY7BITS;
sfr volatile typeLEBDLY7BITS LEBDLY7bits absolute 0xCFC;

typedef struct tagAUXCON7BITS {
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
} typeAUXCON7BITS;
sfr volatile typeAUXCON7BITS AUXCON7bits absolute 0xCFE;

typedef struct tagPWMCON8BITS {
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
} typePWMCON8BITS;
sfr volatile typePWMCON8BITS PWMCON8bits absolute 0xD00;

typedef struct tagIOCON8BITS {
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
} typeIOCON8BITS;
sfr volatile typeIOCON8BITS IOCON8bits absolute 0xD02;

typedef struct tagFCLCON8BITS {
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
} typeFCLCON8BITS;
sfr volatile typeFCLCON8BITS FCLCON8bits absolute 0xD04;

typedef struct tagTRIG8BITS {
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
} typeTRIG8BITS;
sfr volatile typeTRIG8BITS TRIG8bits absolute 0xD12;

typedef struct tagTRGCON8BITS {
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
} typeTRGCON8BITS;
sfr volatile typeTRGCON8BITS TRGCON8bits absolute 0xD14;

typedef struct tagSTRIG8BITS {
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
} typeSTRIG8BITS;
sfr volatile typeSTRIG8BITS STRIG8bits absolute 0xD16;

typedef struct tagPWMCAP8BITS {
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
} typePWMCAP8BITS;
sfr volatile typePWMCAP8BITS PWMCAP8bits absolute 0xD18;

typedef struct tagLEBCON8BITS {
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
} typeLEBCON8BITS;
sfr volatile typeLEBCON8BITS LEBCON8bits absolute 0xD1A;

typedef struct tagLEBDLY8BITS {
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
} typeLEBDLY8BITS;
sfr volatile typeLEBDLY8BITS LEBDLY8bits absolute 0xD1C;

typedef struct tagAUXCON8BITS {
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
} typeAUXCON8BITS;
sfr volatile typeAUXCON8BITS AUXCON8bits absolute 0xD1E;

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
      unsigned :1;
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
      unsigned :1;
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
      unsigned :1;
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
      unsigned :1;
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
      unsigned :1;
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
      unsigned :1;
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
      unsigned :1;
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
      unsigned :1;
      unsigned ANSB5:1;
      unsigned ANSB6:1;
      unsigned ANSB7:1;
      unsigned :1;
      unsigned ANSB9:1;
    };
  };
} typeANSELBBITS;
sfr volatile typeANSELBBITS ANSELBbits absolute 0xE1E;

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
      unsigned :1;
      unsigned TRISC12:1;
      unsigned TRISC13:1;
      unsigned TRISC14:1;
      unsigned TRISC15:1;
    };
  };
} typeTRISCBITS;
sfr volatile typeTRISCBITS TRISCbits absolute 0xE20;

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
      unsigned :1;
      unsigned RC12:1;
      unsigned RC13:1;
      unsigned RC14:1;
      unsigned RC15:1;
    };
  };
} typePORTCBITS;
sfr volatile typePORTCBITS PORTCbits absolute 0xE22;

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
      unsigned :1;
      unsigned LATC12:1;
      unsigned LATC13:1;
      unsigned LATC14:1;
      unsigned LATC15:1;
    };
  };
} typeLATCBITS;
sfr volatile typeLATCBITS LATCbits absolute 0xE24;

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
      unsigned :1;
      unsigned ODCC12:1;
      unsigned ODCC13:1;
      unsigned ODCC14:1;
      unsigned ODCC15:1;
    };
  };
} typeODCCBITS;
sfr volatile typeODCCBITS ODCCbits absolute 0xE26;

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
      unsigned :1;
      unsigned CNIEC12:1;
      unsigned CNIEC13:1;
      unsigned CNIEC14:1;
      unsigned CNIEC15:1;
    };
  };
} typeCNENCBITS;
sfr volatile typeCNENCBITS CNENCbits absolute 0xE28;

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
      unsigned :1;
      unsigned CNPUC12:1;
      unsigned CNPUC13:1;
      unsigned CNPUC14:1;
      unsigned CNPUC15:1;
    };
  };
} typeCNPUCBITS;
sfr volatile typeCNPUCBITS CNPUCbits absolute 0xE2A;

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
      unsigned :1;
      unsigned CNPDC12:1;
      unsigned CNPDC13:1;
      unsigned CNPDC14:1;
      unsigned CNPDC15:1;
    };
  };
} typeCNPDCBITS;
sfr volatile typeCNPDCBITS CNPDCbits absolute 0xE2C;

typedef struct tagANSELCBITS {
  union {
    struct {
      unsigned :1;
      unsigned ANSC1:1;
      unsigned ANSC2:1;
      unsigned :1;
      unsigned ANSC4:1;
      unsigned ANSC5:1;
      unsigned ANSC6:1;
      unsigned :2;
      unsigned ANSC9:1;
      unsigned ANSC10:1;
      unsigned :1;
      unsigned ANSC12:1;
    };
  };
} typeANSELCBITS;
sfr volatile typeANSELCBITS ANSELCbits absolute 0xE2E;

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
sfr volatile typeTRISDBITS TRISDbits absolute 0xE30;

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
sfr volatile typePORTDBITS PORTDbits absolute 0xE32;

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
sfr volatile typeLATDBITS LATDbits absolute 0xE34;

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
sfr volatile typeODCDBITS ODCDbits absolute 0xE36;

typedef struct tagCNENDBITS {
  union {
    struct {
      unsigned CNIED0:1;
      unsigned CNIED1:1;
      unsigned CNIED2:1;
      unsigned CNIED3:1;
      unsigned CNIED4:1;
      unsigned CNIED5:1;
      unsigned CNIED6:1;
      unsigned CNIED7:1;
      unsigned CNIED8:1;
      unsigned CNIED9:1;
      unsigned CNIED10:1;
      unsigned CNIED11:1;
      unsigned CNIED12:1;
      unsigned CNIED13:1;
      unsigned CNIED14:1;
      unsigned CNIED15:1;
    };
  };
} typeCNENDBITS;
sfr volatile typeCNENDBITS CNENDbits absolute 0xE38;

typedef struct tagCNPUDBITS {
  union {
    struct {
      unsigned CNPUD0:1;
      unsigned CNPUD1:1;
      unsigned CNPUD2:1;
      unsigned CNPUD3:1;
      unsigned CNPUD4:1;
      unsigned CNPUD5:1;
      unsigned CNPUD6:1;
      unsigned CNPUD7:1;
      unsigned CNPUD8:1;
      unsigned CNPUD9:1;
      unsigned CNPUD10:1;
      unsigned CNPUD11:1;
      unsigned CNPUD12:1;
      unsigned CNPUD13:1;
      unsigned CNPUD14:1;
      unsigned CNPUD15:1;
    };
  };
} typeCNPUDBITS;
sfr volatile typeCNPUDBITS CNPUDbits absolute 0xE3A;

typedef struct tagCNPDDBITS {
  union {
    struct {
      unsigned CNPDD0:1;
      unsigned CNPDD1:1;
      unsigned CNPDD2:1;
      unsigned CNPDD3:1;
      unsigned CNPDD4:1;
      unsigned CNPDD5:1;
      unsigned CNPDD6:1;
      unsigned CNPDD7:1;
      unsigned CNPDD8:1;
      unsigned CNPDD9:1;
      unsigned CNPDD10:1;
      unsigned CNPDD11:1;
      unsigned CNPDD12:1;
      unsigned CNPDD13:1;
      unsigned CNPDD14:1;
      unsigned CNPDD15:1;
    };
  };
} typeCNPDDBITS;
sfr volatile typeCNPDDBITS CNPDDbits absolute 0xE3C;

typedef struct tagANSELDBITS {
  union {
    struct {
      unsigned :2;
      unsigned ANSD2:1;
      unsigned :2;
      unsigned ANSD5:1;
      unsigned :1;
      unsigned ANSD7:1;
      unsigned ANSD8:1;
      unsigned :4;
      unsigned ANSD13:1;
    };
  };
} typeANSELDBITS;
sfr volatile typeANSELDBITS ANSELDbits absolute 0xE3E;

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

