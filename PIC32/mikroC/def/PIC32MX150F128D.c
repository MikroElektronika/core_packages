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
const char B16 = 16;
const char B17 = 17;
const char B18 = 18;
const char B19 = 19;
const char B20 = 20;
const char B21 = 21;
const char B22 = 22;
const char B23 = 23;
const char B24 = 24;
const char B25 = 25;
const char B26 = 26;
const char B27 = 27;
const char B28 = 28;
const char B29 = 29;
const char B30 = 30;
const char B31 = 31;

const unsigned long __BOOT_FLASH_SIZE = 0x00000BF0;

const unsigned long __FLASH_SIZE = 0x00020000;

// FLASH library legacy constants & requirements
const unsigned int _FLASH_ERASE = 0x0400;
const unsigned int _FLASH_WRITE_LATCH = 0x0080;
const unsigned int __FLASH_ERASE = _FLASH_ERASE;
const unsigned int __FLASH_WRITE_LATCH = _FLASH_WRITE_LATCH;
const unsigned int __FLASH_ERASE_BLOCK = __FLASH_ERASE;
const unsigned int __FLASH_WRITE_BLOCK = __FLASH_WRITE_LATCH;

// Working space registers
rx unsigned long R0  absolute 0x0000;
rx unsigned long R1  absolute 0x0004;
rx unsigned long R2  absolute 0x0008;
rx unsigned long R3  absolute 0x000C;
rx unsigned long R4  absolute 0x0010;
rx unsigned long R5  absolute 0x0014;
rx unsigned long R6  absolute 0x0018;
rx unsigned long R7  absolute 0x001C;
rx unsigned long R8  absolute 0x0020;
rx unsigned long R9  absolute 0x0024;
rx unsigned long R10 absolute 0x0028;
rx unsigned long R11 absolute 0x002C;
rx unsigned long R12 absolute 0x0030;
rx unsigned long R13 absolute 0x0034;
rx unsigned long R14 absolute 0x0038;
rx unsigned long R15 absolute 0x003C;
rx unsigned long R16 absolute 0x0040;
rx unsigned long R17 absolute 0x0044;
rx unsigned long R18 absolute 0x0048;
rx unsigned long R19 absolute 0x004C;
rx unsigned long R20 absolute 0x0050;
rx unsigned long R21 absolute 0x0054;
rx unsigned long R22 absolute 0x0058;
rx unsigned long R23 absolute 0x005C;
rx unsigned long R24 absolute 0x0060;
rx unsigned long R25 absolute 0x0064;
rx unsigned long R26 absolute 0x0068;
rx unsigned long R27 absolute 0x006C;
rx unsigned long R28 absolute 0x0070;
rx unsigned long R29 absolute 0x0074;
rx unsigned long R30 absolute 0x0078;
rx unsigned long R31 absolute 0x007C;

rx unsigned long GP  absolute 0x0004;
rx unsigned long SP  absolute 0x0074;
rx unsigned long RA  absolute 0x007C;

const unsigned short ICS_AUTO                  =     0;
const unsigned short ICS_SOFT                  =     1;
const unsigned short ICS_SRS                   =     2;
const unsigned short ICS_OFF                   =     3;

const unsigned int IVT_CORE_TIMER            = 0x0000;
const unsigned int IVT_CORE_SOFTWARE_0       = 0x0001;
const unsigned int IVT_CORE_SOFTWARE_1       = 0x0002;
const unsigned int IVT_EXTERNAL_0            = 0x0003;
const unsigned int IVT_TIMER_1               = 0x0004;
const unsigned int IVT_INPUT_CAPTURE_1       = 0x0005;
const unsigned int IVT_OUTPUT_COMPARE_1      = 0x0006;
const unsigned int IVT_EXTERNAL_1            = 0x0007;
const unsigned int IVT_TIMER_2               = 0x0008;
const unsigned int IVT_INPUT_CAPTURE_2       = 0x0009;
const unsigned int IVT_OUTPUT_COMPARE_2      = 0x000A;
const unsigned int IVT_EXTERNAL_2            = 0x000B;
const unsigned int IVT_TIMER_3               = 0x000C;
const unsigned int IVT_INPUT_CAPTURE_3       = 0x000D;
const unsigned int IVT_OUTPUT_COMPARE_3      = 0x000E;
const unsigned int IVT_EXTERNAL_3            = 0x000F;
const unsigned int IVT_TIMER_4               = 0x0010;
const unsigned int IVT_INPUT_CAPTURE_4       = 0x0011;
const unsigned int IVT_OUTPUT_COMPARE_4      = 0x0012;
const unsigned int IVT_EXTERNAL_4            = 0x0013;
const unsigned int IVT_TIMER_5               = 0x0014;
const unsigned int IVT_INPUT_CAPTURE_5       = 0x0015;
const unsigned int IVT_OUTPUT_COMPARE_5      = 0x0016;
const unsigned int IVT_ADC                   = 0x0017;
const unsigned int IVT_FAIL_SAFE_MONITOR     = 0x0018;
const unsigned int IVT_RTCC                  = 0x0019;
const unsigned int IVT_FCE                   = 0x001A;
const unsigned int IVT_COMPARATOR_1          = 0x001B;
const unsigned int IVT_COMPARATOR_2          = 0x001C;
const unsigned int IVT_COMPARATOR_3          = 0x001D;
const unsigned int IVT_USB_1                 = 0x001E;
const unsigned int IVT_SPI_1                 = 0x001F;
const unsigned int IVT_UART_1                = 0x0020;
const unsigned int IVT_I2C_1                 = 0x0021;
const unsigned int IVT_CHANGE_NOTICE         = 0x0022;
const unsigned int IVT_PMP                   = 0x0023;
const unsigned int IVT_SPI_2                 = 0x0024;
const unsigned int IVT_UART_2                = 0x0025;
const unsigned int IVT_I2C_2                 = 0x0026;
const unsigned int IVT_CTMU                  = 0x0027;
const unsigned int IVT_DMA_0                 = 0x0028;
const unsigned int IVT_DMA_1                 = 0x0029;
const unsigned int IVT_DMA_2                 = 0x002A;
const unsigned int IVT_DMA_3                 = 0x002B;



// Special function registers (SFRs)
sfr atomic unsigned long   volatile WDTCON           absolute 0xBF800000;
sfr unsigned long   volatile WDTCONCLR        absolute 0xBF800004;
sfr unsigned long   volatile WDTCONSET        absolute 0xBF800008;
sfr unsigned long   volatile WDTCONINV        absolute 0xBF80000C;
    // WDTCON bits
    const register unsigned short int ON_ = 15;
    sbit  ON_bit at WDTCON.B15;
    const register unsigned short int SWDTPS4 = 6;
    sbit  SWDTPS4_bit at WDTCON.B6;
    const register unsigned short int SWDTPS3 = 5;
    sbit  SWDTPS3_bit at WDTCON.B5;
    const register unsigned short int SWDTPS2 = 4;
    sbit  SWDTPS2_bit at WDTCON.B4;
    const register unsigned short int SWDTPS1 = 3;
    sbit  SWDTPS1_bit at WDTCON.B3;
    const register unsigned short int SWDTPS0 = 2;
    sbit  SWDTPS0_bit at WDTCON.B2;
    const register unsigned short int WDTWINEN = 1;
    sbit  WDTWINEN_bit at WDTCON.B1;
    const register unsigned short int WDTCLR = 0;
    sbit  WDTCLR_bit at WDTCON.B0;

sfr atomic unsigned long   volatile RTCCON           absolute 0xBF800200;
sfr unsigned long   volatile RTCCONCLR        absolute 0xBF800204;
sfr unsigned long   volatile RTCCONSET        absolute 0xBF800208;
sfr unsigned long   volatile RTCCONINV        absolute 0xBF80020C;
    // RTCCON bits
    const register unsigned short int CAL9 = 25;
    sbit  CAL9_bit at RTCCON.B25;
    const register unsigned short int CAL8 = 24;
    sbit  CAL8_bit at RTCCON.B24;
    const register unsigned short int CAL7 = 23;
    sbit  CAL7_bit at RTCCON.B23;
    const register unsigned short int CAL6 = 22;
    sbit  CAL6_bit at RTCCON.B22;
    const register unsigned short int CAL5 = 21;
    sbit  CAL5_bit at RTCCON.B21;
    const register unsigned short int CAL4 = 20;
    sbit  CAL4_bit at RTCCON.B20;
    const register unsigned short int CAL3 = 19;
    sbit  CAL3_bit at RTCCON.B19;
    const register unsigned short int CAL2 = 18;
    sbit  CAL2_bit at RTCCON.B18;
    const register unsigned short int CAL1 = 17;
    sbit  CAL1_bit at RTCCON.B17;
    const register unsigned short int CAL0 = 16;
    sbit  CAL0_bit at RTCCON.B16;
    sbit  ON__RTCCON_bit at RTCCON.B15;
    const register unsigned short int SIDL = 13;
    sbit  SIDL_bit at RTCCON.B13;
    const register unsigned short int RTSECSEL = 7;
    sbit  RTSECSEL_bit at RTCCON.B7;
    const register unsigned short int RTCCLKON = 6;
    sbit  RTCCLKON_bit at RTCCON.B6;
    const register unsigned short int RTCWREN = 3;
    sbit  RTCWREN_bit at RTCCON.B3;
    const register unsigned short int RTCSYNC = 2;
    sbit  RTCSYNC_bit at RTCCON.B2;
    const register unsigned short int HALFSEC = 1;
    sbit  HALFSEC_bit at RTCCON.B1;
    const register unsigned short int RTCOE = 0;
    sbit  RTCOE_bit at RTCCON.B0;

sfr atomic unsigned long   volatile RTCALRM          absolute 0xBF800210;
sfr unsigned long   volatile RTCALRMCLR       absolute 0xBF800214;
sfr unsigned long   volatile RTCALRMSET       absolute 0xBF800218;
sfr unsigned long   volatile RTCALRMINV       absolute 0xBF80021C;
    // RTCALRM bits
    const register unsigned short int ALRMEN = 15;
    sbit  ALRMEN_bit at RTCALRM.B15;
    const register unsigned short int CHIME = 14;
    sbit  CHIME_bit at RTCALRM.B14;
    const register unsigned short int PIV = 13;
    sbit  PIV_bit at RTCALRM.B13;
    const register unsigned short int ALRMSYNC = 12;
    sbit  ALRMSYNC_bit at RTCALRM.B12;
    const register unsigned short int AMASK3 = 11;
    sbit  AMASK3_bit at RTCALRM.B11;
    const register unsigned short int AMASK2 = 10;
    sbit  AMASK2_bit at RTCALRM.B10;
    const register unsigned short int AMASK1 = 9;
    sbit  AMASK1_bit at RTCALRM.B9;
    const register unsigned short int AMASK0 = 8;
    sbit  AMASK0_bit at RTCALRM.B8;
    const register unsigned short int ARPT7 = 7;
    sbit  ARPT7_bit at RTCALRM.B7;
    const register unsigned short int ARPT6 = 6;
    sbit  ARPT6_bit at RTCALRM.B6;
    const register unsigned short int ARPT5 = 5;
    sbit  ARPT5_bit at RTCALRM.B5;
    const register unsigned short int ARPT4 = 4;
    sbit  ARPT4_bit at RTCALRM.B4;
    const register unsigned short int ARPT3 = 3;
    sbit  ARPT3_bit at RTCALRM.B3;
    const register unsigned short int ARPT2 = 2;
    sbit  ARPT2_bit at RTCALRM.B2;
    const register unsigned short int ARPT1 = 1;
    sbit  ARPT1_bit at RTCALRM.B1;
    const register unsigned short int ARPT0 = 0;
    sbit  ARPT0_bit at RTCALRM.B0;

sfr atomic unsigned long   volatile RTCTIME          absolute 0xBF800220;
sfr unsigned long   volatile RTCTIMECLR       absolute 0xBF800224;
sfr unsigned long   volatile RTCTIMESET       absolute 0xBF800228;
sfr unsigned long   volatile RTCTIMEINV       absolute 0xBF80022C;
    // RTCTIME bits
    const register unsigned short int HR103 = 31;
    sbit  HR103_bit at RTCTIME.B31;
    const register unsigned short int HR102 = 30;
    sbit  HR102_bit at RTCTIME.B30;
    const register unsigned short int HR101 = 29;
    sbit  HR101_bit at RTCTIME.B29;
    const register unsigned short int HR100 = 28;
    sbit  HR100_bit at RTCTIME.B28;
    const register unsigned short int HR013 = 27;
    sbit  HR013_bit at RTCTIME.B27;
    const register unsigned short int HR012 = 26;
    sbit  HR012_bit at RTCTIME.B26;
    const register unsigned short int HR011 = 25;
    sbit  HR011_bit at RTCTIME.B25;
    const register unsigned short int HR010 = 24;
    sbit  HR010_bit at RTCTIME.B24;
    const register unsigned short int MIN103 = 23;
    sbit  MIN103_bit at RTCTIME.B23;
    const register unsigned short int MIN102 = 22;
    sbit  MIN102_bit at RTCTIME.B22;
    const register unsigned short int MIN101 = 21;
    sbit  MIN101_bit at RTCTIME.B21;
    const register unsigned short int MIN100 = 20;
    sbit  MIN100_bit at RTCTIME.B20;
    const register unsigned short int MIN013 = 19;
    sbit  MIN013_bit at RTCTIME.B19;
    const register unsigned short int MIN012 = 18;
    sbit  MIN012_bit at RTCTIME.B18;
    const register unsigned short int MIN011 = 17;
    sbit  MIN011_bit at RTCTIME.B17;
    const register unsigned short int MIN010 = 16;
    sbit  MIN010_bit at RTCTIME.B16;
    const register unsigned short int SEC103 = 15;
    sbit  SEC103_bit at RTCTIME.B15;
    const register unsigned short int SEC102 = 14;
    sbit  SEC102_bit at RTCTIME.B14;
    const register unsigned short int SEC101 = 13;
    sbit  SEC101_bit at RTCTIME.B13;
    const register unsigned short int SEC100 = 12;
    sbit  SEC100_bit at RTCTIME.B12;
    const register unsigned short int SEC013 = 11;
    sbit  SEC013_bit at RTCTIME.B11;
    const register unsigned short int SEC012 = 10;
    sbit  SEC012_bit at RTCTIME.B10;
    const register unsigned short int SEC011 = 9;
    sbit  SEC011_bit at RTCTIME.B9;
    const register unsigned short int SEC010 = 8;
    sbit  SEC010_bit at RTCTIME.B8;

sfr atomic unsigned long   volatile RTCDATE          absolute 0xBF800230;
sfr unsigned long   volatile RTCDATECLR       absolute 0xBF800234;
sfr unsigned long   volatile RTCDATESET       absolute 0xBF800238;
sfr unsigned long   volatile RTCDATEINV       absolute 0xBF80023C;
    // RTCDATE bits
    const register unsigned short int YEAR103 = 31;
    sbit  YEAR103_bit at RTCDATE.B31;
    const register unsigned short int YEAR102 = 30;
    sbit  YEAR102_bit at RTCDATE.B30;
    const register unsigned short int YEAR101 = 29;
    sbit  YEAR101_bit at RTCDATE.B29;
    const register unsigned short int YEAR100 = 28;
    sbit  YEAR100_bit at RTCDATE.B28;
    const register unsigned short int YEAR013 = 27;
    sbit  YEAR013_bit at RTCDATE.B27;
    const register unsigned short int YEAR012 = 26;
    sbit  YEAR012_bit at RTCDATE.B26;
    const register unsigned short int YEAR011 = 25;
    sbit  YEAR011_bit at RTCDATE.B25;
    const register unsigned short int YEAR010 = 24;
    sbit  YEAR010_bit at RTCDATE.B24;
    const register unsigned short int MONTH103 = 23;
    sbit  MONTH103_bit at RTCDATE.B23;
    const register unsigned short int MONTH102 = 22;
    sbit  MONTH102_bit at RTCDATE.B22;
    const register unsigned short int MONTH101 = 21;
    sbit  MONTH101_bit at RTCDATE.B21;
    const register unsigned short int MONTH100 = 20;
    sbit  MONTH100_bit at RTCDATE.B20;
    const register unsigned short int MONTH013 = 19;
    sbit  MONTH013_bit at RTCDATE.B19;
    const register unsigned short int MONTH012 = 18;
    sbit  MONTH012_bit at RTCDATE.B18;
    const register unsigned short int MONTH011 = 17;
    sbit  MONTH011_bit at RTCDATE.B17;
    const register unsigned short int MONTH010 = 16;
    sbit  MONTH010_bit at RTCDATE.B16;
    const register unsigned short int DAY103 = 15;
    sbit  DAY103_bit at RTCDATE.B15;
    const register unsigned short int DAY102 = 14;
    sbit  DAY102_bit at RTCDATE.B14;
    const register unsigned short int DAY101 = 13;
    sbit  DAY101_bit at RTCDATE.B13;
    const register unsigned short int DAY100 = 12;
    sbit  DAY100_bit at RTCDATE.B12;
    const register unsigned short int DAY013 = 11;
    sbit  DAY013_bit at RTCDATE.B11;
    const register unsigned short int DAY012 = 10;
    sbit  DAY012_bit at RTCDATE.B10;
    const register unsigned short int DAY011 = 9;
    sbit  DAY011_bit at RTCDATE.B9;
    const register unsigned short int DAY010 = 8;
    sbit  DAY010_bit at RTCDATE.B8;
    const register unsigned short int WDAY013 = 3;
    sbit  WDAY013_bit at RTCDATE.B3;
    const register unsigned short int WDAY012 = 2;
    sbit  WDAY012_bit at RTCDATE.B2;
    const register unsigned short int WDAY011 = 1;
    sbit  WDAY011_bit at RTCDATE.B1;
    const register unsigned short int WDAY010 = 0;
    sbit  WDAY010_bit at RTCDATE.B0;

sfr atomic unsigned long   volatile ALRMTIME         absolute 0xBF800240;
sfr unsigned long   volatile ALRMTIMECLR      absolute 0xBF800244;
sfr unsigned long   volatile ALRMTIMESET      absolute 0xBF800248;
sfr unsigned long   volatile ALRMTIMEINV      absolute 0xBF80024C;
    // ALRMTIME bits
    sbit  HR103_ALRMTIME_bit at ALRMTIME.B31;
    sbit  HR102_ALRMTIME_bit at ALRMTIME.B30;
    sbit  HR101_ALRMTIME_bit at ALRMTIME.B29;
    sbit  HR100_ALRMTIME_bit at ALRMTIME.B28;
    sbit  HR013_ALRMTIME_bit at ALRMTIME.B27;
    sbit  HR012_ALRMTIME_bit at ALRMTIME.B26;
    sbit  HR011_ALRMTIME_bit at ALRMTIME.B25;
    sbit  HR010_ALRMTIME_bit at ALRMTIME.B24;
    sbit  MIN103_ALRMTIME_bit at ALRMTIME.B23;
    sbit  MIN102_ALRMTIME_bit at ALRMTIME.B22;
    sbit  MIN101_ALRMTIME_bit at ALRMTIME.B21;
    sbit  MIN100_ALRMTIME_bit at ALRMTIME.B20;
    sbit  MIN013_ALRMTIME_bit at ALRMTIME.B19;
    sbit  MIN012_ALRMTIME_bit at ALRMTIME.B18;
    sbit  MIN011_ALRMTIME_bit at ALRMTIME.B17;
    sbit  MIN010_ALRMTIME_bit at ALRMTIME.B16;
    sbit  SEC103_ALRMTIME_bit at ALRMTIME.B15;
    sbit  SEC102_ALRMTIME_bit at ALRMTIME.B14;
    sbit  SEC101_ALRMTIME_bit at ALRMTIME.B13;
    sbit  SEC100_ALRMTIME_bit at ALRMTIME.B12;
    sbit  SEC013_ALRMTIME_bit at ALRMTIME.B11;
    sbit  SEC012_ALRMTIME_bit at ALRMTIME.B10;
    sbit  SEC011_ALRMTIME_bit at ALRMTIME.B9;
    sbit  SEC010_ALRMTIME_bit at ALRMTIME.B8;

sfr atomic unsigned long   volatile ALRMDATE         absolute 0xBF800250;
sfr unsigned long   volatile ALRMDATECLR      absolute 0xBF800254;
sfr unsigned long   volatile ALRMDATESET      absolute 0xBF800258;
sfr unsigned long   volatile ALRMDATEINV      absolute 0xBF80025C;
    // ALRMDATE bits
    sbit  MONTH103_ALRMDATE_bit at ALRMDATE.B23;
    sbit  MONTH102_ALRMDATE_bit at ALRMDATE.B22;
    sbit  MONTH101_ALRMDATE_bit at ALRMDATE.B21;
    sbit  MONTH100_ALRMDATE_bit at ALRMDATE.B20;
    sbit  MONTH013_ALRMDATE_bit at ALRMDATE.B19;
    sbit  MONTH012_ALRMDATE_bit at ALRMDATE.B18;
    sbit  MONTH011_ALRMDATE_bit at ALRMDATE.B17;
    sbit  MONTH010_ALRMDATE_bit at ALRMDATE.B16;
    sbit  DAY103_ALRMDATE_bit at ALRMDATE.B15;
    sbit  DAY102_ALRMDATE_bit at ALRMDATE.B14;
    sbit  DAY101_ALRMDATE_bit at ALRMDATE.B13;
    sbit  DAY100_ALRMDATE_bit at ALRMDATE.B12;
    sbit  DAY013_ALRMDATE_bit at ALRMDATE.B11;
    sbit  DAY012_ALRMDATE_bit at ALRMDATE.B10;
    sbit  DAY011_ALRMDATE_bit at ALRMDATE.B9;
    sbit  DAY010_ALRMDATE_bit at ALRMDATE.B8;
    sbit  WDAY013_ALRMDATE_bit at ALRMDATE.B3;
    sbit  WDAY012_ALRMDATE_bit at ALRMDATE.B2;
    sbit  WDAY011_ALRMDATE_bit at ALRMDATE.B1;
    sbit  WDAY010_ALRMDATE_bit at ALRMDATE.B0;

sfr atomic unsigned long   volatile T1CON            absolute 0xBF800600;
sfr unsigned long   volatile T1CONCLR         absolute 0xBF800604;
sfr unsigned long   volatile T1CONSET         absolute 0xBF800608;
sfr unsigned long   volatile T1CONINV         absolute 0xBF80060C;
    // T1CON bits
    sbit  ON__T1CON_bit at T1CON.B15;
    sbit  SIDL_T1CON_bit at T1CON.B13;
    const register unsigned short int TWDIS = 12;
    sbit  TWDIS_bit at T1CON.B12;
    const register unsigned short int TWIP = 11;
    sbit  TWIP_bit at T1CON.B11;
    const register unsigned short int TGATE = 7;
    sbit  TGATE_bit at T1CON.B7;
    const register unsigned short int TCKPS1 = 5;
    sbit  TCKPS1_bit at T1CON.B5;
    const register unsigned short int TCKPS0 = 4;
    sbit  TCKPS0_bit at T1CON.B4;
    const register unsigned short int TSYNC = 2;
    sbit  TSYNC_bit at T1CON.B2;
    const register unsigned short int TCS = 1;
    sbit  TCS_bit at T1CON.B1;

sfr atomic unsigned long   volatile TMR1             absolute 0xBF800610;
sfr unsigned long   volatile TMR1CLR          absolute 0xBF800614;
sfr unsigned long   volatile TMR1SET          absolute 0xBF800618;
sfr unsigned long   volatile TMR1INV          absolute 0xBF80061C;
    // TMR1 bits
    const register unsigned short int TMR131 = 31;
    sbit  TMR131_bit at TMR1.B31;
    const register unsigned short int TMR130 = 30;
    sbit  TMR130_bit at TMR1.B30;
    const register unsigned short int TMR129 = 29;
    sbit  TMR129_bit at TMR1.B29;
    const register unsigned short int TMR128 = 28;
    sbit  TMR128_bit at TMR1.B28;
    const register unsigned short int TMR127 = 27;
    sbit  TMR127_bit at TMR1.B27;
    const register unsigned short int TMR126 = 26;
    sbit  TMR126_bit at TMR1.B26;
    const register unsigned short int TMR125 = 25;
    sbit  TMR125_bit at TMR1.B25;
    const register unsigned short int TMR124 = 24;
    sbit  TMR124_bit at TMR1.B24;
    const register unsigned short int TMR123 = 23;
    sbit  TMR123_bit at TMR1.B23;
    const register unsigned short int TMR122 = 22;
    sbit  TMR122_bit at TMR1.B22;
    const register unsigned short int TMR121 = 21;
    sbit  TMR121_bit at TMR1.B21;
    const register unsigned short int TMR120 = 20;
    sbit  TMR120_bit at TMR1.B20;
    const register unsigned short int TMR119 = 19;
    sbit  TMR119_bit at TMR1.B19;
    const register unsigned short int TMR118 = 18;
    sbit  TMR118_bit at TMR1.B18;
    const register unsigned short int TMR117 = 17;
    sbit  TMR117_bit at TMR1.B17;
    const register unsigned short int TMR116 = 16;
    sbit  TMR116_bit at TMR1.B16;
    const register unsigned short int TMR115 = 15;
    sbit  TMR115_bit at TMR1.B15;
    const register unsigned short int TMR114 = 14;
    sbit  TMR114_bit at TMR1.B14;
    const register unsigned short int TMR113 = 13;
    sbit  TMR113_bit at TMR1.B13;
    const register unsigned short int TMR112 = 12;
    sbit  TMR112_bit at TMR1.B12;
    const register unsigned short int TMR111 = 11;
    sbit  TMR111_bit at TMR1.B11;
    const register unsigned short int TMR110 = 10;
    sbit  TMR110_bit at TMR1.B10;
    const register unsigned short int TMR19 = 9;
    sbit  TMR19_bit at TMR1.B9;
    const register unsigned short int TMR18 = 8;
    sbit  TMR18_bit at TMR1.B8;
    const register unsigned short int TMR17 = 7;
    sbit  TMR17_bit at TMR1.B7;
    const register unsigned short int TMR16 = 6;
    sbit  TMR16_bit at TMR1.B6;
    const register unsigned short int TMR15 = 5;
    sbit  TMR15_bit at TMR1.B5;
    const register unsigned short int TMR14 = 4;
    sbit  TMR14_bit at TMR1.B4;
    const register unsigned short int TMR13 = 3;
    sbit  TMR13_bit at TMR1.B3;
    const register unsigned short int TMR12 = 2;
    sbit  TMR12_bit at TMR1.B2;
    const register unsigned short int TMR11 = 1;
    sbit  TMR11_bit at TMR1.B1;
    const register unsigned short int TMR10 = 0;
    sbit  TMR10_bit at TMR1.B0;

sfr atomic unsigned long   volatile PR1              absolute 0xBF800620;
sfr unsigned long   volatile PR1CLR           absolute 0xBF800624;
sfr unsigned long   volatile PR1SET           absolute 0xBF800628;
sfr unsigned long   volatile PR1INV           absolute 0xBF80062C;
    // PR1 bits
    const register unsigned short int PR131 = 31;
    sbit  PR131_bit at PR1.B31;
    const register unsigned short int PR130 = 30;
    sbit  PR130_bit at PR1.B30;
    const register unsigned short int PR129 = 29;
    sbit  PR129_bit at PR1.B29;
    const register unsigned short int PR128 = 28;
    sbit  PR128_bit at PR1.B28;
    const register unsigned short int PR127 = 27;
    sbit  PR127_bit at PR1.B27;
    const register unsigned short int PR126 = 26;
    sbit  PR126_bit at PR1.B26;
    const register unsigned short int PR125 = 25;
    sbit  PR125_bit at PR1.B25;
    const register unsigned short int PR124 = 24;
    sbit  PR124_bit at PR1.B24;
    const register unsigned short int PR123 = 23;
    sbit  PR123_bit at PR1.B23;
    const register unsigned short int PR122 = 22;
    sbit  PR122_bit at PR1.B22;
    const register unsigned short int PR121 = 21;
    sbit  PR121_bit at PR1.B21;
    const register unsigned short int PR120 = 20;
    sbit  PR120_bit at PR1.B20;
    const register unsigned short int PR119 = 19;
    sbit  PR119_bit at PR1.B19;
    const register unsigned short int PR118 = 18;
    sbit  PR118_bit at PR1.B18;
    const register unsigned short int PR117 = 17;
    sbit  PR117_bit at PR1.B17;
    const register unsigned short int PR116 = 16;
    sbit  PR116_bit at PR1.B16;
    const register unsigned short int PR115 = 15;
    sbit  PR115_bit at PR1.B15;
    const register unsigned short int PR114 = 14;
    sbit  PR114_bit at PR1.B14;
    const register unsigned short int PR113 = 13;
    sbit  PR113_bit at PR1.B13;
    const register unsigned short int PR112 = 12;
    sbit  PR112_bit at PR1.B12;
    const register unsigned short int PR111 = 11;
    sbit  PR111_bit at PR1.B11;
    const register unsigned short int PR110 = 10;
    sbit  PR110_bit at PR1.B10;
    const register unsigned short int PR19 = 9;
    sbit  PR19_bit at PR1.B9;
    const register unsigned short int PR18 = 8;
    sbit  PR18_bit at PR1.B8;
    const register unsigned short int PR17 = 7;
    sbit  PR17_bit at PR1.B7;
    const register unsigned short int PR16 = 6;
    sbit  PR16_bit at PR1.B6;
    const register unsigned short int PR15 = 5;
    sbit  PR15_bit at PR1.B5;
    const register unsigned short int PR14 = 4;
    sbit  PR14_bit at PR1.B4;
    const register unsigned short int PR13 = 3;
    sbit  PR13_bit at PR1.B3;
    const register unsigned short int PR12 = 2;
    sbit  PR12_bit at PR1.B2;
    const register unsigned short int PR11 = 1;
    sbit  PR11_bit at PR1.B1;
    const register unsigned short int PR10 = 0;
    sbit  PR10_bit at PR1.B0;

sfr atomic unsigned long   volatile T2CON            absolute 0xBF800800;
sfr unsigned long   volatile T2CONCLR         absolute 0xBF800804;
sfr unsigned long   volatile T2CONSET         absolute 0xBF800808;
sfr unsigned long   volatile T2CONINV         absolute 0xBF80080C;
    // T2CON bits
    sbit  ON__T2CON_bit at T2CON.B15;
    sbit  SIDL_T2CON_bit at T2CON.B13;
    sbit  TGATE_T2CON_bit at T2CON.B7;
    const register unsigned short int TCKPS2 = 6;
    sbit  TCKPS2_bit at T2CON.B6;
    sbit  TCKPS1_T2CON_bit at T2CON.B5;
    sbit  TCKPS0_T2CON_bit at T2CON.B4;
    const register unsigned short int T32 = 3;
    sbit  T32_bit at T2CON.B3;
    sbit  TCS_T2CON_bit at T2CON.B1;

sfr atomic unsigned long   volatile TMR2             absolute 0xBF800810;
sfr unsigned long   volatile TMR2CLR          absolute 0xBF800814;
sfr unsigned long   volatile TMR2SET          absolute 0xBF800818;
sfr unsigned long   volatile TMR2INV          absolute 0xBF80081C;
    // TMR2 bits
    const register unsigned short int TMR231 = 31;
    sbit  TMR231_bit at TMR2.B31;
    const register unsigned short int TMR230 = 30;
    sbit  TMR230_bit at TMR2.B30;
    const register unsigned short int TMR229 = 29;
    sbit  TMR229_bit at TMR2.B29;
    const register unsigned short int TMR228 = 28;
    sbit  TMR228_bit at TMR2.B28;
    const register unsigned short int TMR227 = 27;
    sbit  TMR227_bit at TMR2.B27;
    const register unsigned short int TMR226 = 26;
    sbit  TMR226_bit at TMR2.B26;
    const register unsigned short int TMR225 = 25;
    sbit  TMR225_bit at TMR2.B25;
    const register unsigned short int TMR224 = 24;
    sbit  TMR224_bit at TMR2.B24;
    const register unsigned short int TMR223 = 23;
    sbit  TMR223_bit at TMR2.B23;
    const register unsigned short int TMR222 = 22;
    sbit  TMR222_bit at TMR2.B22;
    const register unsigned short int TMR221 = 21;
    sbit  TMR221_bit at TMR2.B21;
    const register unsigned short int TMR220 = 20;
    sbit  TMR220_bit at TMR2.B20;
    const register unsigned short int TMR219 = 19;
    sbit  TMR219_bit at TMR2.B19;
    const register unsigned short int TMR218 = 18;
    sbit  TMR218_bit at TMR2.B18;
    const register unsigned short int TMR217 = 17;
    sbit  TMR217_bit at TMR2.B17;
    const register unsigned short int TMR216 = 16;
    sbit  TMR216_bit at TMR2.B16;
    const register unsigned short int TMR215 = 15;
    sbit  TMR215_bit at TMR2.B15;
    const register unsigned short int TMR214 = 14;
    sbit  TMR214_bit at TMR2.B14;
    const register unsigned short int TMR213 = 13;
    sbit  TMR213_bit at TMR2.B13;
    const register unsigned short int TMR212 = 12;
    sbit  TMR212_bit at TMR2.B12;
    const register unsigned short int TMR211 = 11;
    sbit  TMR211_bit at TMR2.B11;
    const register unsigned short int TMR210 = 10;
    sbit  TMR210_bit at TMR2.B10;
    const register unsigned short int TMR29 = 9;
    sbit  TMR29_bit at TMR2.B9;
    const register unsigned short int TMR28 = 8;
    sbit  TMR28_bit at TMR2.B8;
    const register unsigned short int TMR27 = 7;
    sbit  TMR27_bit at TMR2.B7;
    const register unsigned short int TMR26 = 6;
    sbit  TMR26_bit at TMR2.B6;
    const register unsigned short int TMR25 = 5;
    sbit  TMR25_bit at TMR2.B5;
    const register unsigned short int TMR24 = 4;
    sbit  TMR24_bit at TMR2.B4;
    const register unsigned short int TMR23 = 3;
    sbit  TMR23_bit at TMR2.B3;
    const register unsigned short int TMR22 = 2;
    sbit  TMR22_bit at TMR2.B2;
    const register unsigned short int TMR21 = 1;
    sbit  TMR21_bit at TMR2.B1;
    const register unsigned short int TMR20 = 0;
    sbit  TMR20_bit at TMR2.B0;

sfr atomic unsigned long   volatile PR2              absolute 0xBF800820;
sfr unsigned long   volatile PR2CLR           absolute 0xBF800824;
sfr unsigned long   volatile PR2SET           absolute 0xBF800828;
sfr unsigned long   volatile PR2INV           absolute 0xBF80082C;
    // PR2 bits
    const register unsigned short int PR231 = 31;
    sbit  PR231_bit at PR2.B31;
    const register unsigned short int PR230 = 30;
    sbit  PR230_bit at PR2.B30;
    const register unsigned short int PR229 = 29;
    sbit  PR229_bit at PR2.B29;
    const register unsigned short int PR228 = 28;
    sbit  PR228_bit at PR2.B28;
    const register unsigned short int PR227 = 27;
    sbit  PR227_bit at PR2.B27;
    const register unsigned short int PR226 = 26;
    sbit  PR226_bit at PR2.B26;
    const register unsigned short int PR225 = 25;
    sbit  PR225_bit at PR2.B25;
    const register unsigned short int PR224 = 24;
    sbit  PR224_bit at PR2.B24;
    const register unsigned short int PR223 = 23;
    sbit  PR223_bit at PR2.B23;
    const register unsigned short int PR222 = 22;
    sbit  PR222_bit at PR2.B22;
    const register unsigned short int PR221 = 21;
    sbit  PR221_bit at PR2.B21;
    const register unsigned short int PR220 = 20;
    sbit  PR220_bit at PR2.B20;
    const register unsigned short int PR219 = 19;
    sbit  PR219_bit at PR2.B19;
    const register unsigned short int PR218 = 18;
    sbit  PR218_bit at PR2.B18;
    const register unsigned short int PR217 = 17;
    sbit  PR217_bit at PR2.B17;
    const register unsigned short int PR216 = 16;
    sbit  PR216_bit at PR2.B16;
    const register unsigned short int PR215 = 15;
    sbit  PR215_bit at PR2.B15;
    const register unsigned short int PR214 = 14;
    sbit  PR214_bit at PR2.B14;
    const register unsigned short int PR213 = 13;
    sbit  PR213_bit at PR2.B13;
    const register unsigned short int PR212 = 12;
    sbit  PR212_bit at PR2.B12;
    const register unsigned short int PR211 = 11;
    sbit  PR211_bit at PR2.B11;
    const register unsigned short int PR210 = 10;
    sbit  PR210_bit at PR2.B10;
    const register unsigned short int PR29 = 9;
    sbit  PR29_bit at PR2.B9;
    const register unsigned short int PR28 = 8;
    sbit  PR28_bit at PR2.B8;
    const register unsigned short int PR27 = 7;
    sbit  PR27_bit at PR2.B7;
    const register unsigned short int PR26 = 6;
    sbit  PR26_bit at PR2.B6;
    const register unsigned short int PR25 = 5;
    sbit  PR25_bit at PR2.B5;
    const register unsigned short int PR24 = 4;
    sbit  PR24_bit at PR2.B4;
    const register unsigned short int PR23 = 3;
    sbit  PR23_bit at PR2.B3;
    const register unsigned short int PR22 = 2;
    sbit  PR22_bit at PR2.B2;
    const register unsigned short int PR21 = 1;
    sbit  PR21_bit at PR2.B1;
    const register unsigned short int PR20 = 0;
    sbit  PR20_bit at PR2.B0;

sfr atomic unsigned long   volatile T3CON            absolute 0xBF800A00;
sfr unsigned long   volatile T3CONCLR         absolute 0xBF800A04;
sfr unsigned long   volatile T3CONSET         absolute 0xBF800A08;
sfr unsigned long   volatile T3CONINV         absolute 0xBF800A0C;
    // T3CON bits
    sbit  ON__T3CON_bit at T3CON.B15;
    sbit  SIDL_T3CON_bit at T3CON.B13;
    sbit  TGATE_T3CON_bit at T3CON.B7;
    sbit  TCKPS2_T3CON_bit at T3CON.B6;
    sbit  TCKPS1_T3CON_bit at T3CON.B5;
    sbit  TCKPS0_T3CON_bit at T3CON.B4;
    sbit  TCS_T3CON_bit at T3CON.B1;

sfr atomic unsigned long   volatile TMR3             absolute 0xBF800A10;
sfr unsigned long   volatile TMR3CLR          absolute 0xBF800A14;
sfr unsigned long   volatile TMR3SET          absolute 0xBF800A18;
sfr unsigned long   volatile TMR3INV          absolute 0xBF800A1C;
    // TMR3 bits
    const register unsigned short int TMR331 = 31;
    sbit  TMR331_bit at TMR3.B31;
    const register unsigned short int TMR330 = 30;
    sbit  TMR330_bit at TMR3.B30;
    const register unsigned short int TMR329 = 29;
    sbit  TMR329_bit at TMR3.B29;
    const register unsigned short int TMR328 = 28;
    sbit  TMR328_bit at TMR3.B28;
    const register unsigned short int TMR327 = 27;
    sbit  TMR327_bit at TMR3.B27;
    const register unsigned short int TMR326 = 26;
    sbit  TMR326_bit at TMR3.B26;
    const register unsigned short int TMR325 = 25;
    sbit  TMR325_bit at TMR3.B25;
    const register unsigned short int TMR324 = 24;
    sbit  TMR324_bit at TMR3.B24;
    const register unsigned short int TMR323 = 23;
    sbit  TMR323_bit at TMR3.B23;
    const register unsigned short int TMR322 = 22;
    sbit  TMR322_bit at TMR3.B22;
    const register unsigned short int TMR321 = 21;
    sbit  TMR321_bit at TMR3.B21;
    const register unsigned short int TMR320 = 20;
    sbit  TMR320_bit at TMR3.B20;
    const register unsigned short int TMR319 = 19;
    sbit  TMR319_bit at TMR3.B19;
    const register unsigned short int TMR318 = 18;
    sbit  TMR318_bit at TMR3.B18;
    const register unsigned short int TMR317 = 17;
    sbit  TMR317_bit at TMR3.B17;
    const register unsigned short int TMR316 = 16;
    sbit  TMR316_bit at TMR3.B16;
    const register unsigned short int TMR315 = 15;
    sbit  TMR315_bit at TMR3.B15;
    const register unsigned short int TMR314 = 14;
    sbit  TMR314_bit at TMR3.B14;
    const register unsigned short int TMR313 = 13;
    sbit  TMR313_bit at TMR3.B13;
    const register unsigned short int TMR312 = 12;
    sbit  TMR312_bit at TMR3.B12;
    const register unsigned short int TMR311 = 11;
    sbit  TMR311_bit at TMR3.B11;
    const register unsigned short int TMR310 = 10;
    sbit  TMR310_bit at TMR3.B10;
    const register unsigned short int TMR39 = 9;
    sbit  TMR39_bit at TMR3.B9;
    const register unsigned short int TMR38 = 8;
    sbit  TMR38_bit at TMR3.B8;
    const register unsigned short int TMR37 = 7;
    sbit  TMR37_bit at TMR3.B7;
    const register unsigned short int TMR36 = 6;
    sbit  TMR36_bit at TMR3.B6;
    const register unsigned short int TMR35 = 5;
    sbit  TMR35_bit at TMR3.B5;
    const register unsigned short int TMR34 = 4;
    sbit  TMR34_bit at TMR3.B4;
    const register unsigned short int TMR33 = 3;
    sbit  TMR33_bit at TMR3.B3;
    const register unsigned short int TMR32 = 2;
    sbit  TMR32_bit at TMR3.B2;
    const register unsigned short int TMR31 = 1;
    sbit  TMR31_bit at TMR3.B1;
    const register unsigned short int TMR30 = 0;
    sbit  TMR30_bit at TMR3.B0;

sfr atomic unsigned long   volatile PR3              absolute 0xBF800A20;
sfr unsigned long   volatile PR3CLR           absolute 0xBF800A24;
sfr unsigned long   volatile PR3SET           absolute 0xBF800A28;
sfr unsigned long   volatile PR3INV           absolute 0xBF800A2C;
    // PR3 bits
    const register unsigned short int PR331 = 31;
    sbit  PR331_bit at PR3.B31;
    const register unsigned short int PR330 = 30;
    sbit  PR330_bit at PR3.B30;
    const register unsigned short int PR329 = 29;
    sbit  PR329_bit at PR3.B29;
    const register unsigned short int PR328 = 28;
    sbit  PR328_bit at PR3.B28;
    const register unsigned short int PR327 = 27;
    sbit  PR327_bit at PR3.B27;
    const register unsigned short int PR326 = 26;
    sbit  PR326_bit at PR3.B26;
    const register unsigned short int PR325 = 25;
    sbit  PR325_bit at PR3.B25;
    const register unsigned short int PR324 = 24;
    sbit  PR324_bit at PR3.B24;
    const register unsigned short int PR323 = 23;
    sbit  PR323_bit at PR3.B23;
    const register unsigned short int PR322 = 22;
    sbit  PR322_bit at PR3.B22;
    const register unsigned short int PR321 = 21;
    sbit  PR321_bit at PR3.B21;
    const register unsigned short int PR320 = 20;
    sbit  PR320_bit at PR3.B20;
    const register unsigned short int PR319 = 19;
    sbit  PR319_bit at PR3.B19;
    const register unsigned short int PR318 = 18;
    sbit  PR318_bit at PR3.B18;
    const register unsigned short int PR317 = 17;
    sbit  PR317_bit at PR3.B17;
    const register unsigned short int PR316 = 16;
    sbit  PR316_bit at PR3.B16;
    const register unsigned short int PR315 = 15;
    sbit  PR315_bit at PR3.B15;
    const register unsigned short int PR314 = 14;
    sbit  PR314_bit at PR3.B14;
    const register unsigned short int PR313 = 13;
    sbit  PR313_bit at PR3.B13;
    const register unsigned short int PR312 = 12;
    sbit  PR312_bit at PR3.B12;
    const register unsigned short int PR311 = 11;
    sbit  PR311_bit at PR3.B11;
    const register unsigned short int PR310 = 10;
    sbit  PR310_bit at PR3.B10;
    const register unsigned short int PR39 = 9;
    sbit  PR39_bit at PR3.B9;
    const register unsigned short int PR38 = 8;
    sbit  PR38_bit at PR3.B8;
    const register unsigned short int PR37 = 7;
    sbit  PR37_bit at PR3.B7;
    const register unsigned short int PR36 = 6;
    sbit  PR36_bit at PR3.B6;
    const register unsigned short int PR35 = 5;
    sbit  PR35_bit at PR3.B5;
    const register unsigned short int PR34 = 4;
    sbit  PR34_bit at PR3.B4;
    const register unsigned short int PR33 = 3;
    sbit  PR33_bit at PR3.B3;
    const register unsigned short int PR32 = 2;
    sbit  PR32_bit at PR3.B2;
    const register unsigned short int PR31 = 1;
    sbit  PR31_bit at PR3.B1;
    const register unsigned short int PR30 = 0;
    sbit  PR30_bit at PR3.B0;

sfr atomic unsigned long   volatile T4CON            absolute 0xBF800C00;
sfr unsigned long   volatile T4CONCLR         absolute 0xBF800C04;
sfr unsigned long   volatile T4CONSET         absolute 0xBF800C08;
sfr unsigned long   volatile T4CONINV         absolute 0xBF800C0C;
    // T4CON bits
    sbit  ON__T4CON_bit at T4CON.B15;
    sbit  SIDL_T4CON_bit at T4CON.B13;
    sbit  TGATE_T4CON_bit at T4CON.B7;
    sbit  TCKPS2_T4CON_bit at T4CON.B6;
    sbit  TCKPS1_T4CON_bit at T4CON.B5;
    sbit  TCKPS0_T4CON_bit at T4CON.B4;
    sbit  T32_T4CON_bit at T4CON.B3;
    sbit  TCS_T4CON_bit at T4CON.B1;

sfr atomic unsigned long   volatile TMR4             absolute 0xBF800C10;
sfr unsigned long   volatile TMR4CLR          absolute 0xBF800C14;
sfr unsigned long   volatile TMR4SET          absolute 0xBF800C18;
sfr unsigned long   volatile TMR4INV          absolute 0xBF800C1C;
    // TMR4 bits
    const register unsigned short int TMR431 = 31;
    sbit  TMR431_bit at TMR4.B31;
    const register unsigned short int TMR430 = 30;
    sbit  TMR430_bit at TMR4.B30;
    const register unsigned short int TMR429 = 29;
    sbit  TMR429_bit at TMR4.B29;
    const register unsigned short int TMR428 = 28;
    sbit  TMR428_bit at TMR4.B28;
    const register unsigned short int TMR427 = 27;
    sbit  TMR427_bit at TMR4.B27;
    const register unsigned short int TMR426 = 26;
    sbit  TMR426_bit at TMR4.B26;
    const register unsigned short int TMR425 = 25;
    sbit  TMR425_bit at TMR4.B25;
    const register unsigned short int TMR424 = 24;
    sbit  TMR424_bit at TMR4.B24;
    const register unsigned short int TMR423 = 23;
    sbit  TMR423_bit at TMR4.B23;
    const register unsigned short int TMR422 = 22;
    sbit  TMR422_bit at TMR4.B22;
    const register unsigned short int TMR421 = 21;
    sbit  TMR421_bit at TMR4.B21;
    const register unsigned short int TMR420 = 20;
    sbit  TMR420_bit at TMR4.B20;
    const register unsigned short int TMR419 = 19;
    sbit  TMR419_bit at TMR4.B19;
    const register unsigned short int TMR418 = 18;
    sbit  TMR418_bit at TMR4.B18;
    const register unsigned short int TMR417 = 17;
    sbit  TMR417_bit at TMR4.B17;
    const register unsigned short int TMR416 = 16;
    sbit  TMR416_bit at TMR4.B16;
    const register unsigned short int TMR415 = 15;
    sbit  TMR415_bit at TMR4.B15;
    const register unsigned short int TMR414 = 14;
    sbit  TMR414_bit at TMR4.B14;
    const register unsigned short int TMR413 = 13;
    sbit  TMR413_bit at TMR4.B13;
    const register unsigned short int TMR412 = 12;
    sbit  TMR412_bit at TMR4.B12;
    const register unsigned short int TMR411 = 11;
    sbit  TMR411_bit at TMR4.B11;
    const register unsigned short int TMR410 = 10;
    sbit  TMR410_bit at TMR4.B10;
    const register unsigned short int TMR49 = 9;
    sbit  TMR49_bit at TMR4.B9;
    const register unsigned short int TMR48 = 8;
    sbit  TMR48_bit at TMR4.B8;
    const register unsigned short int TMR47 = 7;
    sbit  TMR47_bit at TMR4.B7;
    const register unsigned short int TMR46 = 6;
    sbit  TMR46_bit at TMR4.B6;
    const register unsigned short int TMR45 = 5;
    sbit  TMR45_bit at TMR4.B5;
    const register unsigned short int TMR44 = 4;
    sbit  TMR44_bit at TMR4.B4;
    const register unsigned short int TMR43 = 3;
    sbit  TMR43_bit at TMR4.B3;
    const register unsigned short int TMR42 = 2;
    sbit  TMR42_bit at TMR4.B2;
    const register unsigned short int TMR41 = 1;
    sbit  TMR41_bit at TMR4.B1;
    const register unsigned short int TMR40 = 0;
    sbit  TMR40_bit at TMR4.B0;

sfr atomic unsigned long   volatile PR4              absolute 0xBF800C20;
sfr unsigned long   volatile PR4CLR           absolute 0xBF800C24;
sfr unsigned long   volatile PR4SET           absolute 0xBF800C28;
sfr unsigned long   volatile PR4INV           absolute 0xBF800C2C;
    // PR4 bits
    const register unsigned short int PR431 = 31;
    sbit  PR431_bit at PR4.B31;
    const register unsigned short int PR430 = 30;
    sbit  PR430_bit at PR4.B30;
    const register unsigned short int PR429 = 29;
    sbit  PR429_bit at PR4.B29;
    const register unsigned short int PR428 = 28;
    sbit  PR428_bit at PR4.B28;
    const register unsigned short int PR427 = 27;
    sbit  PR427_bit at PR4.B27;
    const register unsigned short int PR426 = 26;
    sbit  PR426_bit at PR4.B26;
    const register unsigned short int PR425 = 25;
    sbit  PR425_bit at PR4.B25;
    const register unsigned short int PR424 = 24;
    sbit  PR424_bit at PR4.B24;
    const register unsigned short int PR423 = 23;
    sbit  PR423_bit at PR4.B23;
    const register unsigned short int PR422 = 22;
    sbit  PR422_bit at PR4.B22;
    const register unsigned short int PR421 = 21;
    sbit  PR421_bit at PR4.B21;
    const register unsigned short int PR420 = 20;
    sbit  PR420_bit at PR4.B20;
    const register unsigned short int PR419 = 19;
    sbit  PR419_bit at PR4.B19;
    const register unsigned short int PR418 = 18;
    sbit  PR418_bit at PR4.B18;
    const register unsigned short int PR417 = 17;
    sbit  PR417_bit at PR4.B17;
    const register unsigned short int PR416 = 16;
    sbit  PR416_bit at PR4.B16;
    const register unsigned short int PR415 = 15;
    sbit  PR415_bit at PR4.B15;
    const register unsigned short int PR414 = 14;
    sbit  PR414_bit at PR4.B14;
    const register unsigned short int PR413 = 13;
    sbit  PR413_bit at PR4.B13;
    const register unsigned short int PR412 = 12;
    sbit  PR412_bit at PR4.B12;
    const register unsigned short int PR411 = 11;
    sbit  PR411_bit at PR4.B11;
    const register unsigned short int PR410 = 10;
    sbit  PR410_bit at PR4.B10;
    const register unsigned short int PR49 = 9;
    sbit  PR49_bit at PR4.B9;
    const register unsigned short int PR48 = 8;
    sbit  PR48_bit at PR4.B8;
    const register unsigned short int PR47 = 7;
    sbit  PR47_bit at PR4.B7;
    const register unsigned short int PR46 = 6;
    sbit  PR46_bit at PR4.B6;
    const register unsigned short int PR45 = 5;
    sbit  PR45_bit at PR4.B5;
    const register unsigned short int PR44 = 4;
    sbit  PR44_bit at PR4.B4;
    const register unsigned short int PR43 = 3;
    sbit  PR43_bit at PR4.B3;
    const register unsigned short int PR42 = 2;
    sbit  PR42_bit at PR4.B2;
    const register unsigned short int PR41 = 1;
    sbit  PR41_bit at PR4.B1;
    const register unsigned short int PR40 = 0;
    sbit  PR40_bit at PR4.B0;

sfr atomic unsigned long   volatile T5CON            absolute 0xBF800E00;
sfr unsigned long   volatile T5CONCLR         absolute 0xBF800E04;
sfr unsigned long   volatile T5CONSET         absolute 0xBF800E08;
sfr unsigned long   volatile T5CONINV         absolute 0xBF800E0C;
    // T5CON bits
    sbit  ON__T5CON_bit at T5CON.B15;
    sbit  SIDL_T5CON_bit at T5CON.B13;
    sbit  TGATE_T5CON_bit at T5CON.B7;
    sbit  TCKPS2_T5CON_bit at T5CON.B6;
    sbit  TCKPS1_T5CON_bit at T5CON.B5;
    sbit  TCKPS0_T5CON_bit at T5CON.B4;
    sbit  TCS_T5CON_bit at T5CON.B1;

sfr atomic unsigned long   volatile TMR5             absolute 0xBF800E10;
sfr unsigned long   volatile TMR5CLR          absolute 0xBF800E14;
sfr unsigned long   volatile TMR5SET          absolute 0xBF800E18;
sfr unsigned long   volatile TMR5INV          absolute 0xBF800E1C;
    // TMR5 bits
    const register unsigned short int TMR531 = 31;
    sbit  TMR531_bit at TMR5.B31;
    const register unsigned short int TMR530 = 30;
    sbit  TMR530_bit at TMR5.B30;
    const register unsigned short int TMR529 = 29;
    sbit  TMR529_bit at TMR5.B29;
    const register unsigned short int TMR528 = 28;
    sbit  TMR528_bit at TMR5.B28;
    const register unsigned short int TMR527 = 27;
    sbit  TMR527_bit at TMR5.B27;
    const register unsigned short int TMR526 = 26;
    sbit  TMR526_bit at TMR5.B26;
    const register unsigned short int TMR525 = 25;
    sbit  TMR525_bit at TMR5.B25;
    const register unsigned short int TMR524 = 24;
    sbit  TMR524_bit at TMR5.B24;
    const register unsigned short int TMR523 = 23;
    sbit  TMR523_bit at TMR5.B23;
    const register unsigned short int TMR522 = 22;
    sbit  TMR522_bit at TMR5.B22;
    const register unsigned short int TMR521 = 21;
    sbit  TMR521_bit at TMR5.B21;
    const register unsigned short int TMR520 = 20;
    sbit  TMR520_bit at TMR5.B20;
    const register unsigned short int TMR519 = 19;
    sbit  TMR519_bit at TMR5.B19;
    const register unsigned short int TMR518 = 18;
    sbit  TMR518_bit at TMR5.B18;
    const register unsigned short int TMR517 = 17;
    sbit  TMR517_bit at TMR5.B17;
    const register unsigned short int TMR516 = 16;
    sbit  TMR516_bit at TMR5.B16;
    const register unsigned short int TMR515 = 15;
    sbit  TMR515_bit at TMR5.B15;
    const register unsigned short int TMR514 = 14;
    sbit  TMR514_bit at TMR5.B14;
    const register unsigned short int TMR513 = 13;
    sbit  TMR513_bit at TMR5.B13;
    const register unsigned short int TMR512 = 12;
    sbit  TMR512_bit at TMR5.B12;
    const register unsigned short int TMR511 = 11;
    sbit  TMR511_bit at TMR5.B11;
    const register unsigned short int TMR510 = 10;
    sbit  TMR510_bit at TMR5.B10;
    const register unsigned short int TMR59 = 9;
    sbit  TMR59_bit at TMR5.B9;
    const register unsigned short int TMR58 = 8;
    sbit  TMR58_bit at TMR5.B8;
    const register unsigned short int TMR57 = 7;
    sbit  TMR57_bit at TMR5.B7;
    const register unsigned short int TMR56 = 6;
    sbit  TMR56_bit at TMR5.B6;
    const register unsigned short int TMR55 = 5;
    sbit  TMR55_bit at TMR5.B5;
    const register unsigned short int TMR54 = 4;
    sbit  TMR54_bit at TMR5.B4;
    const register unsigned short int TMR53 = 3;
    sbit  TMR53_bit at TMR5.B3;
    const register unsigned short int TMR52 = 2;
    sbit  TMR52_bit at TMR5.B2;
    const register unsigned short int TMR51 = 1;
    sbit  TMR51_bit at TMR5.B1;
    const register unsigned short int TMR50 = 0;
    sbit  TMR50_bit at TMR5.B0;

sfr atomic unsigned long   volatile PR5              absolute 0xBF800E20;
sfr unsigned long   volatile PR5CLR           absolute 0xBF800E24;
sfr unsigned long   volatile PR5SET           absolute 0xBF800E28;
sfr unsigned long   volatile PR5INV           absolute 0xBF800E2C;
    // PR5 bits
    const register unsigned short int PR531 = 31;
    sbit  PR531_bit at PR5.B31;
    const register unsigned short int PR530 = 30;
    sbit  PR530_bit at PR5.B30;
    const register unsigned short int PR529 = 29;
    sbit  PR529_bit at PR5.B29;
    const register unsigned short int PR528 = 28;
    sbit  PR528_bit at PR5.B28;
    const register unsigned short int PR527 = 27;
    sbit  PR527_bit at PR5.B27;
    const register unsigned short int PR526 = 26;
    sbit  PR526_bit at PR5.B26;
    const register unsigned short int PR525 = 25;
    sbit  PR525_bit at PR5.B25;
    const register unsigned short int PR524 = 24;
    sbit  PR524_bit at PR5.B24;
    const register unsigned short int PR523 = 23;
    sbit  PR523_bit at PR5.B23;
    const register unsigned short int PR522 = 22;
    sbit  PR522_bit at PR5.B22;
    const register unsigned short int PR521 = 21;
    sbit  PR521_bit at PR5.B21;
    const register unsigned short int PR520 = 20;
    sbit  PR520_bit at PR5.B20;
    const register unsigned short int PR519 = 19;
    sbit  PR519_bit at PR5.B19;
    const register unsigned short int PR518 = 18;
    sbit  PR518_bit at PR5.B18;
    const register unsigned short int PR517 = 17;
    sbit  PR517_bit at PR5.B17;
    const register unsigned short int PR516 = 16;
    sbit  PR516_bit at PR5.B16;
    const register unsigned short int PR515 = 15;
    sbit  PR515_bit at PR5.B15;
    const register unsigned short int PR514 = 14;
    sbit  PR514_bit at PR5.B14;
    const register unsigned short int PR513 = 13;
    sbit  PR513_bit at PR5.B13;
    const register unsigned short int PR512 = 12;
    sbit  PR512_bit at PR5.B12;
    const register unsigned short int PR511 = 11;
    sbit  PR511_bit at PR5.B11;
    const register unsigned short int PR510 = 10;
    sbit  PR510_bit at PR5.B10;
    const register unsigned short int PR59 = 9;
    sbit  PR59_bit at PR5.B9;
    const register unsigned short int PR58 = 8;
    sbit  PR58_bit at PR5.B8;
    const register unsigned short int PR57 = 7;
    sbit  PR57_bit at PR5.B7;
    const register unsigned short int PR56 = 6;
    sbit  PR56_bit at PR5.B6;
    const register unsigned short int PR55 = 5;
    sbit  PR55_bit at PR5.B5;
    const register unsigned short int PR54 = 4;
    sbit  PR54_bit at PR5.B4;
    const register unsigned short int PR53 = 3;
    sbit  PR53_bit at PR5.B3;
    const register unsigned short int PR52 = 2;
    sbit  PR52_bit at PR5.B2;
    const register unsigned short int PR51 = 1;
    sbit  PR51_bit at PR5.B1;
    const register unsigned short int PR50 = 0;
    sbit  PR50_bit at PR5.B0;

sfr atomic unsigned long   volatile IC1CON           absolute 0xBF802000;
sfr unsigned long   volatile IC1CONCLR        absolute 0xBF802004;
sfr unsigned long   volatile IC1CONSET        absolute 0xBF802008;
sfr unsigned long   volatile IC1CONINV        absolute 0xBF80200C;
    // IC1CON bits
    sbit  ON__IC1CON_bit at IC1CON.B15;
    sbit  SIDL_IC1CON_bit at IC1CON.B13;
    const register unsigned short int FEDGE = 9;
    sbit  FEDGE_bit at IC1CON.B9;
    const register unsigned short int C32 = 8;
    sbit  C32_bit at IC1CON.B8;
    const register unsigned short int ICTMR = 7;
    sbit  ICTMR_bit at IC1CON.B7;
    const register unsigned short int ICI1 = 6;
    sbit  ICI1_bit at IC1CON.B6;
    const register unsigned short int ICI0 = 5;
    sbit  ICI0_bit at IC1CON.B5;
    const register unsigned short int ICOV = 4;
    sbit  ICOV_bit at IC1CON.B4;
    const register unsigned short int ICBNE = 3;
    sbit  ICBNE_bit at IC1CON.B3;
    const register unsigned short int ICM2 = 2;
    sbit  ICM2_bit at IC1CON.B2;
    const register unsigned short int ICM1 = 1;
    sbit  ICM1_bit at IC1CON.B1;
    const register unsigned short int ICM0 = 0;
    sbit  ICM0_bit at IC1CON.B0;

sfr unsigned long   volatile IC1BUF           absolute 0xBF802010;
    // IC1BUF bits
    const register unsigned short int IC1BUF31 = 31;
    sbit  IC1BUF31_bit at IC1BUF.B31;
    const register unsigned short int IC1BUF30 = 30;
    sbit  IC1BUF30_bit at IC1BUF.B30;
    const register unsigned short int IC1BUF29 = 29;
    sbit  IC1BUF29_bit at IC1BUF.B29;
    const register unsigned short int IC1BUF28 = 28;
    sbit  IC1BUF28_bit at IC1BUF.B28;
    const register unsigned short int IC1BUF27 = 27;
    sbit  IC1BUF27_bit at IC1BUF.B27;
    const register unsigned short int IC1BUF26 = 26;
    sbit  IC1BUF26_bit at IC1BUF.B26;
    const register unsigned short int IC1BUF25 = 25;
    sbit  IC1BUF25_bit at IC1BUF.B25;
    const register unsigned short int IC1BUF24 = 24;
    sbit  IC1BUF24_bit at IC1BUF.B24;
    const register unsigned short int IC1BUF23 = 23;
    sbit  IC1BUF23_bit at IC1BUF.B23;
    const register unsigned short int IC1BUF22 = 22;
    sbit  IC1BUF22_bit at IC1BUF.B22;
    const register unsigned short int IC1BUF21 = 21;
    sbit  IC1BUF21_bit at IC1BUF.B21;
    const register unsigned short int IC1BUF20 = 20;
    sbit  IC1BUF20_bit at IC1BUF.B20;
    const register unsigned short int IC1BUF19 = 19;
    sbit  IC1BUF19_bit at IC1BUF.B19;
    const register unsigned short int IC1BUF18 = 18;
    sbit  IC1BUF18_bit at IC1BUF.B18;
    const register unsigned short int IC1BUF17 = 17;
    sbit  IC1BUF17_bit at IC1BUF.B17;
    const register unsigned short int IC1BUF16 = 16;
    sbit  IC1BUF16_bit at IC1BUF.B16;
    const register unsigned short int IC1BUF15 = 15;
    sbit  IC1BUF15_bit at IC1BUF.B15;
    const register unsigned short int IC1BUF14 = 14;
    sbit  IC1BUF14_bit at IC1BUF.B14;
    const register unsigned short int IC1BUF13 = 13;
    sbit  IC1BUF13_bit at IC1BUF.B13;
    const register unsigned short int IC1BUF12 = 12;
    sbit  IC1BUF12_bit at IC1BUF.B12;
    const register unsigned short int IC1BUF11 = 11;
    sbit  IC1BUF11_bit at IC1BUF.B11;
    const register unsigned short int IC1BUF10 = 10;
    sbit  IC1BUF10_bit at IC1BUF.B10;
    const register unsigned short int IC1BUF9 = 9;
    sbit  IC1BUF9_bit at IC1BUF.B9;
    const register unsigned short int IC1BUF8 = 8;
    sbit  IC1BUF8_bit at IC1BUF.B8;
    const register unsigned short int IC1BUF7 = 7;
    sbit  IC1BUF7_bit at IC1BUF.B7;
    const register unsigned short int IC1BUF6 = 6;
    sbit  IC1BUF6_bit at IC1BUF.B6;
    const register unsigned short int IC1BUF5 = 5;
    sbit  IC1BUF5_bit at IC1BUF.B5;
    const register unsigned short int IC1BUF4 = 4;
    sbit  IC1BUF4_bit at IC1BUF.B4;
    const register unsigned short int IC1BUF3 = 3;
    sbit  IC1BUF3_bit at IC1BUF.B3;
    const register unsigned short int IC1BUF2 = 2;
    sbit  IC1BUF2_bit at IC1BUF.B2;
    const register unsigned short int IC1BUF1 = 1;
    sbit  IC1BUF1_bit at IC1BUF.B1;
    const register unsigned short int IC1BUF0 = 0;
    sbit  IC1BUF0_bit at IC1BUF.B0;

sfr atomic unsigned long   volatile IC2CON           absolute 0xBF802200;
sfr unsigned long   volatile IC2CONCLR        absolute 0xBF802204;
sfr unsigned long   volatile IC2CONSET        absolute 0xBF802208;
sfr unsigned long   volatile IC2CONINV        absolute 0xBF80220C;
    // IC2CON bits
    sbit  ON__IC2CON_bit at IC2CON.B15;
    sbit  SIDL_IC2CON_bit at IC2CON.B13;
    sbit  FEDGE_IC2CON_bit at IC2CON.B9;
    sbit  C32_IC2CON_bit at IC2CON.B8;
    sbit  ICTMR_IC2CON_bit at IC2CON.B7;
    sbit  ICI1_IC2CON_bit at IC2CON.B6;
    sbit  ICI0_IC2CON_bit at IC2CON.B5;
    sbit  ICOV_IC2CON_bit at IC2CON.B4;
    sbit  ICBNE_IC2CON_bit at IC2CON.B3;
    sbit  ICM2_IC2CON_bit at IC2CON.B2;
    sbit  ICM1_IC2CON_bit at IC2CON.B1;
    sbit  ICM0_IC2CON_bit at IC2CON.B0;

sfr unsigned long   volatile IC2BUF           absolute 0xBF802210;
    // IC2BUF bits
    const register unsigned short int IC2BUF31 = 31;
    sbit  IC2BUF31_bit at IC2BUF.B31;
    const register unsigned short int IC2BUF30 = 30;
    sbit  IC2BUF30_bit at IC2BUF.B30;
    const register unsigned short int IC2BUF29 = 29;
    sbit  IC2BUF29_bit at IC2BUF.B29;
    const register unsigned short int IC2BUF28 = 28;
    sbit  IC2BUF28_bit at IC2BUF.B28;
    const register unsigned short int IC2BUF27 = 27;
    sbit  IC2BUF27_bit at IC2BUF.B27;
    const register unsigned short int IC2BUF26 = 26;
    sbit  IC2BUF26_bit at IC2BUF.B26;
    const register unsigned short int IC2BUF25 = 25;
    sbit  IC2BUF25_bit at IC2BUF.B25;
    const register unsigned short int IC2BUF24 = 24;
    sbit  IC2BUF24_bit at IC2BUF.B24;
    const register unsigned short int IC2BUF23 = 23;
    sbit  IC2BUF23_bit at IC2BUF.B23;
    const register unsigned short int IC2BUF22 = 22;
    sbit  IC2BUF22_bit at IC2BUF.B22;
    const register unsigned short int IC2BUF21 = 21;
    sbit  IC2BUF21_bit at IC2BUF.B21;
    const register unsigned short int IC2BUF20 = 20;
    sbit  IC2BUF20_bit at IC2BUF.B20;
    const register unsigned short int IC2BUF19 = 19;
    sbit  IC2BUF19_bit at IC2BUF.B19;
    const register unsigned short int IC2BUF18 = 18;
    sbit  IC2BUF18_bit at IC2BUF.B18;
    const register unsigned short int IC2BUF17 = 17;
    sbit  IC2BUF17_bit at IC2BUF.B17;
    const register unsigned short int IC2BUF16 = 16;
    sbit  IC2BUF16_bit at IC2BUF.B16;
    const register unsigned short int IC2BUF15 = 15;
    sbit  IC2BUF15_bit at IC2BUF.B15;
    const register unsigned short int IC2BUF14 = 14;
    sbit  IC2BUF14_bit at IC2BUF.B14;
    const register unsigned short int IC2BUF13 = 13;
    sbit  IC2BUF13_bit at IC2BUF.B13;
    const register unsigned short int IC2BUF12 = 12;
    sbit  IC2BUF12_bit at IC2BUF.B12;
    const register unsigned short int IC2BUF11 = 11;
    sbit  IC2BUF11_bit at IC2BUF.B11;
    const register unsigned short int IC2BUF10 = 10;
    sbit  IC2BUF10_bit at IC2BUF.B10;
    const register unsigned short int IC2BUF9 = 9;
    sbit  IC2BUF9_bit at IC2BUF.B9;
    const register unsigned short int IC2BUF8 = 8;
    sbit  IC2BUF8_bit at IC2BUF.B8;
    const register unsigned short int IC2BUF7 = 7;
    sbit  IC2BUF7_bit at IC2BUF.B7;
    const register unsigned short int IC2BUF6 = 6;
    sbit  IC2BUF6_bit at IC2BUF.B6;
    const register unsigned short int IC2BUF5 = 5;
    sbit  IC2BUF5_bit at IC2BUF.B5;
    const register unsigned short int IC2BUF4 = 4;
    sbit  IC2BUF4_bit at IC2BUF.B4;
    const register unsigned short int IC2BUF3 = 3;
    sbit  IC2BUF3_bit at IC2BUF.B3;
    const register unsigned short int IC2BUF2 = 2;
    sbit  IC2BUF2_bit at IC2BUF.B2;
    const register unsigned short int IC2BUF1 = 1;
    sbit  IC2BUF1_bit at IC2BUF.B1;
    const register unsigned short int IC2BUF0 = 0;
    sbit  IC2BUF0_bit at IC2BUF.B0;

sfr atomic unsigned long   volatile IC3CON           absolute 0xBF802400;
sfr unsigned long   volatile IC3CONCLR        absolute 0xBF802404;
sfr unsigned long   volatile IC3CONSET        absolute 0xBF802408;
sfr unsigned long   volatile IC3CONINV        absolute 0xBF80240C;
    // IC3CON bits
    sbit  ON__IC3CON_bit at IC3CON.B15;
    sbit  SIDL_IC3CON_bit at IC3CON.B13;
    sbit  FEDGE_IC3CON_bit at IC3CON.B9;
    sbit  C32_IC3CON_bit at IC3CON.B8;
    sbit  ICTMR_IC3CON_bit at IC3CON.B7;
    sbit  ICI1_IC3CON_bit at IC3CON.B6;
    sbit  ICI0_IC3CON_bit at IC3CON.B5;
    sbit  ICOV_IC3CON_bit at IC3CON.B4;
    sbit  ICBNE_IC3CON_bit at IC3CON.B3;
    sbit  ICM2_IC3CON_bit at IC3CON.B2;
    sbit  ICM1_IC3CON_bit at IC3CON.B1;
    sbit  ICM0_IC3CON_bit at IC3CON.B0;

sfr unsigned long   volatile IC3BUF           absolute 0xBF802410;
    // IC3BUF bits
    const register unsigned short int IC3BUF31 = 31;
    sbit  IC3BUF31_bit at IC3BUF.B31;
    const register unsigned short int IC3BUF30 = 30;
    sbit  IC3BUF30_bit at IC3BUF.B30;
    const register unsigned short int IC3BUF29 = 29;
    sbit  IC3BUF29_bit at IC3BUF.B29;
    const register unsigned short int IC3BUF28 = 28;
    sbit  IC3BUF28_bit at IC3BUF.B28;
    const register unsigned short int IC3BUF27 = 27;
    sbit  IC3BUF27_bit at IC3BUF.B27;
    const register unsigned short int IC3BUF26 = 26;
    sbit  IC3BUF26_bit at IC3BUF.B26;
    const register unsigned short int IC3BUF25 = 25;
    sbit  IC3BUF25_bit at IC3BUF.B25;
    const register unsigned short int IC3BUF24 = 24;
    sbit  IC3BUF24_bit at IC3BUF.B24;
    const register unsigned short int IC3BUF23 = 23;
    sbit  IC3BUF23_bit at IC3BUF.B23;
    const register unsigned short int IC3BUF22 = 22;
    sbit  IC3BUF22_bit at IC3BUF.B22;
    const register unsigned short int IC3BUF21 = 21;
    sbit  IC3BUF21_bit at IC3BUF.B21;
    const register unsigned short int IC3BUF20 = 20;
    sbit  IC3BUF20_bit at IC3BUF.B20;
    const register unsigned short int IC3BUF19 = 19;
    sbit  IC3BUF19_bit at IC3BUF.B19;
    const register unsigned short int IC3BUF18 = 18;
    sbit  IC3BUF18_bit at IC3BUF.B18;
    const register unsigned short int IC3BUF17 = 17;
    sbit  IC3BUF17_bit at IC3BUF.B17;
    const register unsigned short int IC3BUF16 = 16;
    sbit  IC3BUF16_bit at IC3BUF.B16;
    const register unsigned short int IC3BUF15 = 15;
    sbit  IC3BUF15_bit at IC3BUF.B15;
    const register unsigned short int IC3BUF14 = 14;
    sbit  IC3BUF14_bit at IC3BUF.B14;
    const register unsigned short int IC3BUF13 = 13;
    sbit  IC3BUF13_bit at IC3BUF.B13;
    const register unsigned short int IC3BUF12 = 12;
    sbit  IC3BUF12_bit at IC3BUF.B12;
    const register unsigned short int IC3BUF11 = 11;
    sbit  IC3BUF11_bit at IC3BUF.B11;
    const register unsigned short int IC3BUF10 = 10;
    sbit  IC3BUF10_bit at IC3BUF.B10;
    const register unsigned short int IC3BUF9 = 9;
    sbit  IC3BUF9_bit at IC3BUF.B9;
    const register unsigned short int IC3BUF8 = 8;
    sbit  IC3BUF8_bit at IC3BUF.B8;
    const register unsigned short int IC3BUF7 = 7;
    sbit  IC3BUF7_bit at IC3BUF.B7;
    const register unsigned short int IC3BUF6 = 6;
    sbit  IC3BUF6_bit at IC3BUF.B6;
    const register unsigned short int IC3BUF5 = 5;
    sbit  IC3BUF5_bit at IC3BUF.B5;
    const register unsigned short int IC3BUF4 = 4;
    sbit  IC3BUF4_bit at IC3BUF.B4;
    const register unsigned short int IC3BUF3 = 3;
    sbit  IC3BUF3_bit at IC3BUF.B3;
    const register unsigned short int IC3BUF2 = 2;
    sbit  IC3BUF2_bit at IC3BUF.B2;
    const register unsigned short int IC3BUF1 = 1;
    sbit  IC3BUF1_bit at IC3BUF.B1;
    const register unsigned short int IC3BUF0 = 0;
    sbit  IC3BUF0_bit at IC3BUF.B0;

sfr atomic unsigned long   volatile IC4CON           absolute 0xBF802600;
sfr unsigned long   volatile IC4CONCLR        absolute 0xBF802604;
sfr unsigned long   volatile IC4CONSET        absolute 0xBF802608;
sfr unsigned long   volatile IC4CONINV        absolute 0xBF80260C;
    // IC4CON bits
    sbit  ON__IC4CON_bit at IC4CON.B15;
    sbit  SIDL_IC4CON_bit at IC4CON.B13;
    sbit  FEDGE_IC4CON_bit at IC4CON.B9;
    sbit  C32_IC4CON_bit at IC4CON.B8;
    sbit  ICTMR_IC4CON_bit at IC4CON.B7;
    sbit  ICI1_IC4CON_bit at IC4CON.B6;
    sbit  ICI0_IC4CON_bit at IC4CON.B5;
    sbit  ICOV_IC4CON_bit at IC4CON.B4;
    sbit  ICBNE_IC4CON_bit at IC4CON.B3;
    sbit  ICM2_IC4CON_bit at IC4CON.B2;
    sbit  ICM1_IC4CON_bit at IC4CON.B1;
    sbit  ICM0_IC4CON_bit at IC4CON.B0;

sfr unsigned long   volatile IC4BUF           absolute 0xBF802610;
    // IC4BUF bits
    const register unsigned short int IC4BUF31 = 31;
    sbit  IC4BUF31_bit at IC4BUF.B31;
    const register unsigned short int IC4BUF30 = 30;
    sbit  IC4BUF30_bit at IC4BUF.B30;
    const register unsigned short int IC4BUF29 = 29;
    sbit  IC4BUF29_bit at IC4BUF.B29;
    const register unsigned short int IC4BUF28 = 28;
    sbit  IC4BUF28_bit at IC4BUF.B28;
    const register unsigned short int IC4BUF27 = 27;
    sbit  IC4BUF27_bit at IC4BUF.B27;
    const register unsigned short int IC4BUF26 = 26;
    sbit  IC4BUF26_bit at IC4BUF.B26;
    const register unsigned short int IC4BUF25 = 25;
    sbit  IC4BUF25_bit at IC4BUF.B25;
    const register unsigned short int IC4BUF24 = 24;
    sbit  IC4BUF24_bit at IC4BUF.B24;
    const register unsigned short int IC4BUF23 = 23;
    sbit  IC4BUF23_bit at IC4BUF.B23;
    const register unsigned short int IC4BUF22 = 22;
    sbit  IC4BUF22_bit at IC4BUF.B22;
    const register unsigned short int IC4BUF21 = 21;
    sbit  IC4BUF21_bit at IC4BUF.B21;
    const register unsigned short int IC4BUF20 = 20;
    sbit  IC4BUF20_bit at IC4BUF.B20;
    const register unsigned short int IC4BUF19 = 19;
    sbit  IC4BUF19_bit at IC4BUF.B19;
    const register unsigned short int IC4BUF18 = 18;
    sbit  IC4BUF18_bit at IC4BUF.B18;
    const register unsigned short int IC4BUF17 = 17;
    sbit  IC4BUF17_bit at IC4BUF.B17;
    const register unsigned short int IC4BUF16 = 16;
    sbit  IC4BUF16_bit at IC4BUF.B16;
    const register unsigned short int IC4BUF15 = 15;
    sbit  IC4BUF15_bit at IC4BUF.B15;
    const register unsigned short int IC4BUF14 = 14;
    sbit  IC4BUF14_bit at IC4BUF.B14;
    const register unsigned short int IC4BUF13 = 13;
    sbit  IC4BUF13_bit at IC4BUF.B13;
    const register unsigned short int IC4BUF12 = 12;
    sbit  IC4BUF12_bit at IC4BUF.B12;
    const register unsigned short int IC4BUF11 = 11;
    sbit  IC4BUF11_bit at IC4BUF.B11;
    const register unsigned short int IC4BUF10 = 10;
    sbit  IC4BUF10_bit at IC4BUF.B10;
    const register unsigned short int IC4BUF9 = 9;
    sbit  IC4BUF9_bit at IC4BUF.B9;
    const register unsigned short int IC4BUF8 = 8;
    sbit  IC4BUF8_bit at IC4BUF.B8;
    const register unsigned short int IC4BUF7 = 7;
    sbit  IC4BUF7_bit at IC4BUF.B7;
    const register unsigned short int IC4BUF6 = 6;
    sbit  IC4BUF6_bit at IC4BUF.B6;
    const register unsigned short int IC4BUF5 = 5;
    sbit  IC4BUF5_bit at IC4BUF.B5;
    const register unsigned short int IC4BUF4 = 4;
    sbit  IC4BUF4_bit at IC4BUF.B4;
    const register unsigned short int IC4BUF3 = 3;
    sbit  IC4BUF3_bit at IC4BUF.B3;
    const register unsigned short int IC4BUF2 = 2;
    sbit  IC4BUF2_bit at IC4BUF.B2;
    const register unsigned short int IC4BUF1 = 1;
    sbit  IC4BUF1_bit at IC4BUF.B1;
    const register unsigned short int IC4BUF0 = 0;
    sbit  IC4BUF0_bit at IC4BUF.B0;

sfr atomic unsigned long   volatile IC5CON           absolute 0xBF802800;
sfr unsigned long   volatile IC5CONCLR        absolute 0xBF802804;
sfr unsigned long   volatile IC5CONSET        absolute 0xBF802808;
sfr unsigned long   volatile IC5CONINV        absolute 0xBF80280C;
    // IC5CON bits
    sbit  ON__IC5CON_bit at IC5CON.B15;
    sbit  SIDL_IC5CON_bit at IC5CON.B13;
    sbit  FEDGE_IC5CON_bit at IC5CON.B9;
    sbit  C32_IC5CON_bit at IC5CON.B8;
    sbit  ICTMR_IC5CON_bit at IC5CON.B7;
    sbit  ICI1_IC5CON_bit at IC5CON.B6;
    sbit  ICI0_IC5CON_bit at IC5CON.B5;
    sbit  ICOV_IC5CON_bit at IC5CON.B4;
    sbit  ICBNE_IC5CON_bit at IC5CON.B3;
    sbit  ICM2_IC5CON_bit at IC5CON.B2;
    sbit  ICM1_IC5CON_bit at IC5CON.B1;
    sbit  ICM0_IC5CON_bit at IC5CON.B0;

sfr unsigned long   volatile IC5BUF           absolute 0xBF802810;
    // IC5BUF bits
    const register unsigned short int IC5BUF31 = 31;
    sbit  IC5BUF31_bit at IC5BUF.B31;
    const register unsigned short int IC5BUF30 = 30;
    sbit  IC5BUF30_bit at IC5BUF.B30;
    const register unsigned short int IC5BUF29 = 29;
    sbit  IC5BUF29_bit at IC5BUF.B29;
    const register unsigned short int IC5BUF28 = 28;
    sbit  IC5BUF28_bit at IC5BUF.B28;
    const register unsigned short int IC5BUF27 = 27;
    sbit  IC5BUF27_bit at IC5BUF.B27;
    const register unsigned short int IC5BUF26 = 26;
    sbit  IC5BUF26_bit at IC5BUF.B26;
    const register unsigned short int IC5BUF25 = 25;
    sbit  IC5BUF25_bit at IC5BUF.B25;
    const register unsigned short int IC5BUF24 = 24;
    sbit  IC5BUF24_bit at IC5BUF.B24;
    const register unsigned short int IC5BUF23 = 23;
    sbit  IC5BUF23_bit at IC5BUF.B23;
    const register unsigned short int IC5BUF22 = 22;
    sbit  IC5BUF22_bit at IC5BUF.B22;
    const register unsigned short int IC5BUF21 = 21;
    sbit  IC5BUF21_bit at IC5BUF.B21;
    const register unsigned short int IC5BUF20 = 20;
    sbit  IC5BUF20_bit at IC5BUF.B20;
    const register unsigned short int IC5BUF19 = 19;
    sbit  IC5BUF19_bit at IC5BUF.B19;
    const register unsigned short int IC5BUF18 = 18;
    sbit  IC5BUF18_bit at IC5BUF.B18;
    const register unsigned short int IC5BUF17 = 17;
    sbit  IC5BUF17_bit at IC5BUF.B17;
    const register unsigned short int IC5BUF16 = 16;
    sbit  IC5BUF16_bit at IC5BUF.B16;
    const register unsigned short int IC5BUF15 = 15;
    sbit  IC5BUF15_bit at IC5BUF.B15;
    const register unsigned short int IC5BUF14 = 14;
    sbit  IC5BUF14_bit at IC5BUF.B14;
    const register unsigned short int IC5BUF13 = 13;
    sbit  IC5BUF13_bit at IC5BUF.B13;
    const register unsigned short int IC5BUF12 = 12;
    sbit  IC5BUF12_bit at IC5BUF.B12;
    const register unsigned short int IC5BUF11 = 11;
    sbit  IC5BUF11_bit at IC5BUF.B11;
    const register unsigned short int IC5BUF10 = 10;
    sbit  IC5BUF10_bit at IC5BUF.B10;
    const register unsigned short int IC5BUF9 = 9;
    sbit  IC5BUF9_bit at IC5BUF.B9;
    const register unsigned short int IC5BUF8 = 8;
    sbit  IC5BUF8_bit at IC5BUF.B8;
    const register unsigned short int IC5BUF7 = 7;
    sbit  IC5BUF7_bit at IC5BUF.B7;
    const register unsigned short int IC5BUF6 = 6;
    sbit  IC5BUF6_bit at IC5BUF.B6;
    const register unsigned short int IC5BUF5 = 5;
    sbit  IC5BUF5_bit at IC5BUF.B5;
    const register unsigned short int IC5BUF4 = 4;
    sbit  IC5BUF4_bit at IC5BUF.B4;
    const register unsigned short int IC5BUF3 = 3;
    sbit  IC5BUF3_bit at IC5BUF.B3;
    const register unsigned short int IC5BUF2 = 2;
    sbit  IC5BUF2_bit at IC5BUF.B2;
    const register unsigned short int IC5BUF1 = 1;
    sbit  IC5BUF1_bit at IC5BUF.B1;
    const register unsigned short int IC5BUF0 = 0;
    sbit  IC5BUF0_bit at IC5BUF.B0;

sfr atomic unsigned long   volatile OC1CON           absolute 0xBF803000;
sfr unsigned long   volatile OC1CONCLR        absolute 0xBF803004;
sfr unsigned long   volatile OC1CONSET        absolute 0xBF803008;
sfr unsigned long   volatile OC1CONINV        absolute 0xBF80300C;
    // OC1CON bits
    sbit  ON__OC1CON_bit at OC1CON.B15;
    sbit  SIDL_OC1CON_bit at OC1CON.B13;
    const register unsigned short int OC32 = 5;
    sbit  OC32_bit at OC1CON.B5;
    const register unsigned short int OCFLT = 4;
    sbit  OCFLT_bit at OC1CON.B4;
    const register unsigned short int OCTSEL = 3;
    sbit  OCTSEL_bit at OC1CON.B3;
    const register unsigned short int OCM2 = 2;
    sbit  OCM2_bit at OC1CON.B2;
    const register unsigned short int OCM1 = 1;
    sbit  OCM1_bit at OC1CON.B1;
    const register unsigned short int OCM0 = 0;
    sbit  OCM0_bit at OC1CON.B0;

sfr atomic unsigned long   volatile OC1R             absolute 0xBF803010;
sfr unsigned long   volatile OC1RCLR          absolute 0xBF803014;
sfr unsigned long   volatile OC1RSET          absolute 0xBF803018;
sfr unsigned long   volatile OC1RINV          absolute 0xBF80301C;
    // OC1R bits
    const register unsigned short int OC1R31 = 31;
    sbit  OC1R31_bit at OC1R.B31;
    const register unsigned short int OC1R30 = 30;
    sbit  OC1R30_bit at OC1R.B30;
    const register unsigned short int OC1R29 = 29;
    sbit  OC1R29_bit at OC1R.B29;
    const register unsigned short int OC1R28 = 28;
    sbit  OC1R28_bit at OC1R.B28;
    const register unsigned short int OC1R27 = 27;
    sbit  OC1R27_bit at OC1R.B27;
    const register unsigned short int OC1R26 = 26;
    sbit  OC1R26_bit at OC1R.B26;
    const register unsigned short int OC1R25 = 25;
    sbit  OC1R25_bit at OC1R.B25;
    const register unsigned short int OC1R24 = 24;
    sbit  OC1R24_bit at OC1R.B24;
    const register unsigned short int OC1R23 = 23;
    sbit  OC1R23_bit at OC1R.B23;
    const register unsigned short int OC1R22 = 22;
    sbit  OC1R22_bit at OC1R.B22;
    const register unsigned short int OC1R21 = 21;
    sbit  OC1R21_bit at OC1R.B21;
    const register unsigned short int OC1R20 = 20;
    sbit  OC1R20_bit at OC1R.B20;
    const register unsigned short int OC1R19 = 19;
    sbit  OC1R19_bit at OC1R.B19;
    const register unsigned short int OC1R18 = 18;
    sbit  OC1R18_bit at OC1R.B18;
    const register unsigned short int OC1R17 = 17;
    sbit  OC1R17_bit at OC1R.B17;
    const register unsigned short int OC1R16 = 16;
    sbit  OC1R16_bit at OC1R.B16;
    const register unsigned short int OC1R15 = 15;
    sbit  OC1R15_bit at OC1R.B15;
    const register unsigned short int OC1R14 = 14;
    sbit  OC1R14_bit at OC1R.B14;
    const register unsigned short int OC1R13 = 13;
    sbit  OC1R13_bit at OC1R.B13;
    const register unsigned short int OC1R12 = 12;
    sbit  OC1R12_bit at OC1R.B12;
    const register unsigned short int OC1R11 = 11;
    sbit  OC1R11_bit at OC1R.B11;
    const register unsigned short int OC1R10 = 10;
    sbit  OC1R10_bit at OC1R.B10;
    const register unsigned short int OC1R9 = 9;
    sbit  OC1R9_bit at OC1R.B9;
    const register unsigned short int OC1R8 = 8;
    sbit  OC1R8_bit at OC1R.B8;
    const register unsigned short int OC1R7 = 7;
    sbit  OC1R7_bit at OC1R.B7;
    const register unsigned short int OC1R6 = 6;
    sbit  OC1R6_bit at OC1R.B6;
    const register unsigned short int OC1R5 = 5;
    sbit  OC1R5_bit at OC1R.B5;
    const register unsigned short int OC1R4 = 4;
    sbit  OC1R4_bit at OC1R.B4;
    const register unsigned short int OC1R3 = 3;
    sbit  OC1R3_bit at OC1R.B3;
    const register unsigned short int OC1R2 = 2;
    sbit  OC1R2_bit at OC1R.B2;
    const register unsigned short int OC1R1 = 1;
    sbit  OC1R1_bit at OC1R.B1;
    const register unsigned short int OC1R0 = 0;
    sbit  OC1R0_bit at OC1R.B0;

sfr atomic unsigned long            OC1RS            absolute 0xBF803020;
sfr unsigned long   volatile OC1RSCLR         absolute 0xBF803024;
sfr unsigned long   volatile OC1RSSET         absolute 0xBF803028;
sfr unsigned long   volatile OC1RSINV         absolute 0xBF80302C;
    // OC1RS bits
    const register unsigned short int OC1RS31 = 31;
    sbit  OC1RS31_bit at OC1RS.B31;
    const register unsigned short int OC1RS30 = 30;
    sbit  OC1RS30_bit at OC1RS.B30;
    const register unsigned short int OC1RS29 = 29;
    sbit  OC1RS29_bit at OC1RS.B29;
    const register unsigned short int OC1RS28 = 28;
    sbit  OC1RS28_bit at OC1RS.B28;
    const register unsigned short int OC1RS27 = 27;
    sbit  OC1RS27_bit at OC1RS.B27;
    const register unsigned short int OC1RS26 = 26;
    sbit  OC1RS26_bit at OC1RS.B26;
    const register unsigned short int OC1RS25 = 25;
    sbit  OC1RS25_bit at OC1RS.B25;
    const register unsigned short int OC1RS24 = 24;
    sbit  OC1RS24_bit at OC1RS.B24;
    const register unsigned short int OC1RS23 = 23;
    sbit  OC1RS23_bit at OC1RS.B23;
    const register unsigned short int OC1RS22 = 22;
    sbit  OC1RS22_bit at OC1RS.B22;
    const register unsigned short int OC1RS21 = 21;
    sbit  OC1RS21_bit at OC1RS.B21;
    const register unsigned short int OC1RS20 = 20;
    sbit  OC1RS20_bit at OC1RS.B20;
    const register unsigned short int OC1RS19 = 19;
    sbit  OC1RS19_bit at OC1RS.B19;
    const register unsigned short int OC1RS18 = 18;
    sbit  OC1RS18_bit at OC1RS.B18;
    const register unsigned short int OC1RS17 = 17;
    sbit  OC1RS17_bit at OC1RS.B17;
    const register unsigned short int OC1RS16 = 16;
    sbit  OC1RS16_bit at OC1RS.B16;
    const register unsigned short int OC1RS15 = 15;
    sbit  OC1RS15_bit at OC1RS.B15;
    const register unsigned short int OC1RS14 = 14;
    sbit  OC1RS14_bit at OC1RS.B14;
    const register unsigned short int OC1RS13 = 13;
    sbit  OC1RS13_bit at OC1RS.B13;
    const register unsigned short int OC1RS12 = 12;
    sbit  OC1RS12_bit at OC1RS.B12;
    const register unsigned short int OC1RS11 = 11;
    sbit  OC1RS11_bit at OC1RS.B11;
    const register unsigned short int OC1RS10 = 10;
    sbit  OC1RS10_bit at OC1RS.B10;
    const register unsigned short int OC1RS9 = 9;
    sbit  OC1RS9_bit at OC1RS.B9;
    const register unsigned short int OC1RS8 = 8;
    sbit  OC1RS8_bit at OC1RS.B8;
    const register unsigned short int OC1RS7 = 7;
    sbit  OC1RS7_bit at OC1RS.B7;
    const register unsigned short int OC1RS6 = 6;
    sbit  OC1RS6_bit at OC1RS.B6;
    const register unsigned short int OC1RS5 = 5;
    sbit  OC1RS5_bit at OC1RS.B5;
    const register unsigned short int OC1RS4 = 4;
    sbit  OC1RS4_bit at OC1RS.B4;
    const register unsigned short int OC1RS3 = 3;
    sbit  OC1RS3_bit at OC1RS.B3;
    const register unsigned short int OC1RS2 = 2;
    sbit  OC1RS2_bit at OC1RS.B2;
    const register unsigned short int OC1RS1 = 1;
    sbit  OC1RS1_bit at OC1RS.B1;
    const register unsigned short int OC1RS0 = 0;
    sbit  OC1RS0_bit at OC1RS.B0;

sfr atomic unsigned long   volatile OC2CON           absolute 0xBF803200;
sfr unsigned long   volatile OC2CONCLR        absolute 0xBF803204;
sfr unsigned long   volatile OC2CONSET        absolute 0xBF803208;
sfr unsigned long   volatile OC2CONINV        absolute 0xBF80320C;
    // OC2CON bits
    sbit  ON__OC2CON_bit at OC2CON.B15;
    sbit  SIDL_OC2CON_bit at OC2CON.B13;
    sbit  OC32_OC2CON_bit at OC2CON.B5;
    sbit  OCFLT_OC2CON_bit at OC2CON.B4;
    sbit  OCTSEL_OC2CON_bit at OC2CON.B3;
    sbit  OCM2_OC2CON_bit at OC2CON.B2;
    sbit  OCM1_OC2CON_bit at OC2CON.B1;
    sbit  OCM0_OC2CON_bit at OC2CON.B0;

sfr atomic unsigned long   volatile OC2R             absolute 0xBF803210;
sfr unsigned long   volatile OC2RCLR          absolute 0xBF803214;
sfr unsigned long   volatile OC2RSET          absolute 0xBF803218;
sfr unsigned long   volatile OC2RINV          absolute 0xBF80321C;
    // OC2R bits
    const register unsigned short int OC2R31 = 31;
    sbit  OC2R31_bit at OC2R.B31;
    const register unsigned short int OC2R30 = 30;
    sbit  OC2R30_bit at OC2R.B30;
    const register unsigned short int OC2R29 = 29;
    sbit  OC2R29_bit at OC2R.B29;
    const register unsigned short int OC2R28 = 28;
    sbit  OC2R28_bit at OC2R.B28;
    const register unsigned short int OC2R27 = 27;
    sbit  OC2R27_bit at OC2R.B27;
    const register unsigned short int OC2R26 = 26;
    sbit  OC2R26_bit at OC2R.B26;
    const register unsigned short int OC2R25 = 25;
    sbit  OC2R25_bit at OC2R.B25;
    const register unsigned short int OC2R24 = 24;
    sbit  OC2R24_bit at OC2R.B24;
    const register unsigned short int OC2R23 = 23;
    sbit  OC2R23_bit at OC2R.B23;
    const register unsigned short int OC2R22 = 22;
    sbit  OC2R22_bit at OC2R.B22;
    const register unsigned short int OC2R21 = 21;
    sbit  OC2R21_bit at OC2R.B21;
    const register unsigned short int OC2R20 = 20;
    sbit  OC2R20_bit at OC2R.B20;
    const register unsigned short int OC2R19 = 19;
    sbit  OC2R19_bit at OC2R.B19;
    const register unsigned short int OC2R18 = 18;
    sbit  OC2R18_bit at OC2R.B18;
    const register unsigned short int OC2R17 = 17;
    sbit  OC2R17_bit at OC2R.B17;
    const register unsigned short int OC2R16 = 16;
    sbit  OC2R16_bit at OC2R.B16;
    const register unsigned short int OC2R15 = 15;
    sbit  OC2R15_bit at OC2R.B15;
    const register unsigned short int OC2R14 = 14;
    sbit  OC2R14_bit at OC2R.B14;
    const register unsigned short int OC2R13 = 13;
    sbit  OC2R13_bit at OC2R.B13;
    const register unsigned short int OC2R12 = 12;
    sbit  OC2R12_bit at OC2R.B12;
    const register unsigned short int OC2R11 = 11;
    sbit  OC2R11_bit at OC2R.B11;
    const register unsigned short int OC2R10 = 10;
    sbit  OC2R10_bit at OC2R.B10;
    const register unsigned short int OC2R9 = 9;
    sbit  OC2R9_bit at OC2R.B9;
    const register unsigned short int OC2R8 = 8;
    sbit  OC2R8_bit at OC2R.B8;
    const register unsigned short int OC2R7 = 7;
    sbit  OC2R7_bit at OC2R.B7;
    const register unsigned short int OC2R6 = 6;
    sbit  OC2R6_bit at OC2R.B6;
    const register unsigned short int OC2R5 = 5;
    sbit  OC2R5_bit at OC2R.B5;
    const register unsigned short int OC2R4 = 4;
    sbit  OC2R4_bit at OC2R.B4;
    const register unsigned short int OC2R3 = 3;
    sbit  OC2R3_bit at OC2R.B3;
    const register unsigned short int OC2R2 = 2;
    sbit  OC2R2_bit at OC2R.B2;
    const register unsigned short int OC2R1 = 1;
    sbit  OC2R1_bit at OC2R.B1;
    const register unsigned short int OC2R0 = 0;
    sbit  OC2R0_bit at OC2R.B0;

sfr atomic unsigned long            OC2RS            absolute 0xBF803220;
sfr unsigned long   volatile OC2RSCLR         absolute 0xBF803224;
sfr unsigned long   volatile OC2RSSET         absolute 0xBF803228;
sfr unsigned long   volatile OC2RSINV         absolute 0xBF80322C;
    // OC2RS bits
    const register unsigned short int OC2RS31 = 31;
    sbit  OC2RS31_bit at OC2RS.B31;
    const register unsigned short int OC2RS30 = 30;
    sbit  OC2RS30_bit at OC2RS.B30;
    const register unsigned short int OC2RS29 = 29;
    sbit  OC2RS29_bit at OC2RS.B29;
    const register unsigned short int OC2RS28 = 28;
    sbit  OC2RS28_bit at OC2RS.B28;
    const register unsigned short int OC2RS27 = 27;
    sbit  OC2RS27_bit at OC2RS.B27;
    const register unsigned short int OC2RS26 = 26;
    sbit  OC2RS26_bit at OC2RS.B26;
    const register unsigned short int OC2RS25 = 25;
    sbit  OC2RS25_bit at OC2RS.B25;
    const register unsigned short int OC2RS24 = 24;
    sbit  OC2RS24_bit at OC2RS.B24;
    const register unsigned short int OC2RS23 = 23;
    sbit  OC2RS23_bit at OC2RS.B23;
    const register unsigned short int OC2RS22 = 22;
    sbit  OC2RS22_bit at OC2RS.B22;
    const register unsigned short int OC2RS21 = 21;
    sbit  OC2RS21_bit at OC2RS.B21;
    const register unsigned short int OC2RS20 = 20;
    sbit  OC2RS20_bit at OC2RS.B20;
    const register unsigned short int OC2RS19 = 19;
    sbit  OC2RS19_bit at OC2RS.B19;
    const register unsigned short int OC2RS18 = 18;
    sbit  OC2RS18_bit at OC2RS.B18;
    const register unsigned short int OC2RS17 = 17;
    sbit  OC2RS17_bit at OC2RS.B17;
    const register unsigned short int OC2RS16 = 16;
    sbit  OC2RS16_bit at OC2RS.B16;
    const register unsigned short int OC2RS15 = 15;
    sbit  OC2RS15_bit at OC2RS.B15;
    const register unsigned short int OC2RS14 = 14;
    sbit  OC2RS14_bit at OC2RS.B14;
    const register unsigned short int OC2RS13 = 13;
    sbit  OC2RS13_bit at OC2RS.B13;
    const register unsigned short int OC2RS12 = 12;
    sbit  OC2RS12_bit at OC2RS.B12;
    const register unsigned short int OC2RS11 = 11;
    sbit  OC2RS11_bit at OC2RS.B11;
    const register unsigned short int OC2RS10 = 10;
    sbit  OC2RS10_bit at OC2RS.B10;
    const register unsigned short int OC2RS9 = 9;
    sbit  OC2RS9_bit at OC2RS.B9;
    const register unsigned short int OC2RS8 = 8;
    sbit  OC2RS8_bit at OC2RS.B8;
    const register unsigned short int OC2RS7 = 7;
    sbit  OC2RS7_bit at OC2RS.B7;
    const register unsigned short int OC2RS6 = 6;
    sbit  OC2RS6_bit at OC2RS.B6;
    const register unsigned short int OC2RS5 = 5;
    sbit  OC2RS5_bit at OC2RS.B5;
    const register unsigned short int OC2RS4 = 4;
    sbit  OC2RS4_bit at OC2RS.B4;
    const register unsigned short int OC2RS3 = 3;
    sbit  OC2RS3_bit at OC2RS.B3;
    const register unsigned short int OC2RS2 = 2;
    sbit  OC2RS2_bit at OC2RS.B2;
    const register unsigned short int OC2RS1 = 1;
    sbit  OC2RS1_bit at OC2RS.B1;
    const register unsigned short int OC2RS0 = 0;
    sbit  OC2RS0_bit at OC2RS.B0;

sfr atomic unsigned long   volatile OC3CON           absolute 0xBF803400;
sfr unsigned long   volatile OC3CONCLR        absolute 0xBF803404;
sfr unsigned long   volatile OC3CONSET        absolute 0xBF803408;
sfr unsigned long   volatile OC3CONINV        absolute 0xBF80340C;
    // OC3CON bits
    sbit  ON__OC3CON_bit at OC3CON.B15;
    sbit  SIDL_OC3CON_bit at OC3CON.B13;
    sbit  OC32_OC3CON_bit at OC3CON.B5;
    sbit  OCFLT_OC3CON_bit at OC3CON.B4;
    sbit  OCTSEL_OC3CON_bit at OC3CON.B3;
    sbit  OCM2_OC3CON_bit at OC3CON.B2;
    sbit  OCM1_OC3CON_bit at OC3CON.B1;
    sbit  OCM0_OC3CON_bit at OC3CON.B0;

sfr atomic unsigned long   volatile OC3R             absolute 0xBF803410;
sfr unsigned long   volatile OC3RCLR          absolute 0xBF803414;
sfr unsigned long   volatile OC3RSET          absolute 0xBF803418;
sfr unsigned long   volatile OC3RINV          absolute 0xBF80341C;
    // OC3R bits
    const register unsigned short int OC3R31 = 31;
    sbit  OC3R31_bit at OC3R.B31;
    const register unsigned short int OC3R30 = 30;
    sbit  OC3R30_bit at OC3R.B30;
    const register unsigned short int OC3R29 = 29;
    sbit  OC3R29_bit at OC3R.B29;
    const register unsigned short int OC3R28 = 28;
    sbit  OC3R28_bit at OC3R.B28;
    const register unsigned short int OC3R27 = 27;
    sbit  OC3R27_bit at OC3R.B27;
    const register unsigned short int OC3R26 = 26;
    sbit  OC3R26_bit at OC3R.B26;
    const register unsigned short int OC3R25 = 25;
    sbit  OC3R25_bit at OC3R.B25;
    const register unsigned short int OC3R24 = 24;
    sbit  OC3R24_bit at OC3R.B24;
    const register unsigned short int OC3R23 = 23;
    sbit  OC3R23_bit at OC3R.B23;
    const register unsigned short int OC3R22 = 22;
    sbit  OC3R22_bit at OC3R.B22;
    const register unsigned short int OC3R21 = 21;
    sbit  OC3R21_bit at OC3R.B21;
    const register unsigned short int OC3R20 = 20;
    sbit  OC3R20_bit at OC3R.B20;
    const register unsigned short int OC3R19 = 19;
    sbit  OC3R19_bit at OC3R.B19;
    const register unsigned short int OC3R18 = 18;
    sbit  OC3R18_bit at OC3R.B18;
    const register unsigned short int OC3R17 = 17;
    sbit  OC3R17_bit at OC3R.B17;
    const register unsigned short int OC3R16 = 16;
    sbit  OC3R16_bit at OC3R.B16;
    const register unsigned short int OC3R15 = 15;
    sbit  OC3R15_bit at OC3R.B15;
    const register unsigned short int OC3R14 = 14;
    sbit  OC3R14_bit at OC3R.B14;
    const register unsigned short int OC3R13 = 13;
    sbit  OC3R13_bit at OC3R.B13;
    const register unsigned short int OC3R12 = 12;
    sbit  OC3R12_bit at OC3R.B12;
    const register unsigned short int OC3R11 = 11;
    sbit  OC3R11_bit at OC3R.B11;
    const register unsigned short int OC3R10 = 10;
    sbit  OC3R10_bit at OC3R.B10;
    const register unsigned short int OC3R9 = 9;
    sbit  OC3R9_bit at OC3R.B9;
    const register unsigned short int OC3R8 = 8;
    sbit  OC3R8_bit at OC3R.B8;
    const register unsigned short int OC3R7 = 7;
    sbit  OC3R7_bit at OC3R.B7;
    const register unsigned short int OC3R6 = 6;
    sbit  OC3R6_bit at OC3R.B6;
    const register unsigned short int OC3R5 = 5;
    sbit  OC3R5_bit at OC3R.B5;
    const register unsigned short int OC3R4 = 4;
    sbit  OC3R4_bit at OC3R.B4;
    const register unsigned short int OC3R3 = 3;
    sbit  OC3R3_bit at OC3R.B3;
    const register unsigned short int OC3R2 = 2;
    sbit  OC3R2_bit at OC3R.B2;
    const register unsigned short int OC3R1 = 1;
    sbit  OC3R1_bit at OC3R.B1;
    const register unsigned short int OC3R0 = 0;
    sbit  OC3R0_bit at OC3R.B0;

sfr atomic unsigned long            OC3RS            absolute 0xBF803420;
sfr unsigned long   volatile OC3RSCLR         absolute 0xBF803424;
sfr unsigned long   volatile OC3RSSET         absolute 0xBF803428;
sfr unsigned long   volatile OC3RSINV         absolute 0xBF80342C;
    // OC3RS bits
    const register unsigned short int OC3RS31 = 31;
    sbit  OC3RS31_bit at OC3RS.B31;
    const register unsigned short int OC3RS30 = 30;
    sbit  OC3RS30_bit at OC3RS.B30;
    const register unsigned short int OC3RS29 = 29;
    sbit  OC3RS29_bit at OC3RS.B29;
    const register unsigned short int OC3RS28 = 28;
    sbit  OC3RS28_bit at OC3RS.B28;
    const register unsigned short int OC3RS27 = 27;
    sbit  OC3RS27_bit at OC3RS.B27;
    const register unsigned short int OC3RS26 = 26;
    sbit  OC3RS26_bit at OC3RS.B26;
    const register unsigned short int OC3RS25 = 25;
    sbit  OC3RS25_bit at OC3RS.B25;
    const register unsigned short int OC3RS24 = 24;
    sbit  OC3RS24_bit at OC3RS.B24;
    const register unsigned short int OC3RS23 = 23;
    sbit  OC3RS23_bit at OC3RS.B23;
    const register unsigned short int OC3RS22 = 22;
    sbit  OC3RS22_bit at OC3RS.B22;
    const register unsigned short int OC3RS21 = 21;
    sbit  OC3RS21_bit at OC3RS.B21;
    const register unsigned short int OC3RS20 = 20;
    sbit  OC3RS20_bit at OC3RS.B20;
    const register unsigned short int OC3RS19 = 19;
    sbit  OC3RS19_bit at OC3RS.B19;
    const register unsigned short int OC3RS18 = 18;
    sbit  OC3RS18_bit at OC3RS.B18;
    const register unsigned short int OC3RS17 = 17;
    sbit  OC3RS17_bit at OC3RS.B17;
    const register unsigned short int OC3RS16 = 16;
    sbit  OC3RS16_bit at OC3RS.B16;
    const register unsigned short int OC3RS15 = 15;
    sbit  OC3RS15_bit at OC3RS.B15;
    const register unsigned short int OC3RS14 = 14;
    sbit  OC3RS14_bit at OC3RS.B14;
    const register unsigned short int OC3RS13 = 13;
    sbit  OC3RS13_bit at OC3RS.B13;
    const register unsigned short int OC3RS12 = 12;
    sbit  OC3RS12_bit at OC3RS.B12;
    const register unsigned short int OC3RS11 = 11;
    sbit  OC3RS11_bit at OC3RS.B11;
    const register unsigned short int OC3RS10 = 10;
    sbit  OC3RS10_bit at OC3RS.B10;
    const register unsigned short int OC3RS9 = 9;
    sbit  OC3RS9_bit at OC3RS.B9;
    const register unsigned short int OC3RS8 = 8;
    sbit  OC3RS8_bit at OC3RS.B8;
    const register unsigned short int OC3RS7 = 7;
    sbit  OC3RS7_bit at OC3RS.B7;
    const register unsigned short int OC3RS6 = 6;
    sbit  OC3RS6_bit at OC3RS.B6;
    const register unsigned short int OC3RS5 = 5;
    sbit  OC3RS5_bit at OC3RS.B5;
    const register unsigned short int OC3RS4 = 4;
    sbit  OC3RS4_bit at OC3RS.B4;
    const register unsigned short int OC3RS3 = 3;
    sbit  OC3RS3_bit at OC3RS.B3;
    const register unsigned short int OC3RS2 = 2;
    sbit  OC3RS2_bit at OC3RS.B2;
    const register unsigned short int OC3RS1 = 1;
    sbit  OC3RS1_bit at OC3RS.B1;
    const register unsigned short int OC3RS0 = 0;
    sbit  OC3RS0_bit at OC3RS.B0;

sfr atomic unsigned long   volatile OC4CON           absolute 0xBF803600;
sfr unsigned long   volatile OC4CONCLR        absolute 0xBF803604;
sfr unsigned long   volatile OC4CONSET        absolute 0xBF803608;
sfr unsigned long   volatile OC4CONINV        absolute 0xBF80360C;
    // OC4CON bits
    sbit  ON__OC4CON_bit at OC4CON.B15;
    sbit  SIDL_OC4CON_bit at OC4CON.B13;
    sbit  OC32_OC4CON_bit at OC4CON.B5;
    sbit  OCFLT_OC4CON_bit at OC4CON.B4;
    sbit  OCTSEL_OC4CON_bit at OC4CON.B3;
    sbit  OCM2_OC4CON_bit at OC4CON.B2;
    sbit  OCM1_OC4CON_bit at OC4CON.B1;
    sbit  OCM0_OC4CON_bit at OC4CON.B0;

sfr atomic unsigned long   volatile OC4R             absolute 0xBF803610;
sfr unsigned long   volatile OC4RCLR          absolute 0xBF803614;
sfr unsigned long   volatile OC4RSET          absolute 0xBF803618;
sfr unsigned long   volatile OC4RINV          absolute 0xBF80361C;
    // OC4R bits
    const register unsigned short int OC4R31 = 31;
    sbit  OC4R31_bit at OC4R.B31;
    const register unsigned short int OC4R30 = 30;
    sbit  OC4R30_bit at OC4R.B30;
    const register unsigned short int OC4R29 = 29;
    sbit  OC4R29_bit at OC4R.B29;
    const register unsigned short int OC4R28 = 28;
    sbit  OC4R28_bit at OC4R.B28;
    const register unsigned short int OC4R27 = 27;
    sbit  OC4R27_bit at OC4R.B27;
    const register unsigned short int OC4R26 = 26;
    sbit  OC4R26_bit at OC4R.B26;
    const register unsigned short int OC4R25 = 25;
    sbit  OC4R25_bit at OC4R.B25;
    const register unsigned short int OC4R24 = 24;
    sbit  OC4R24_bit at OC4R.B24;
    const register unsigned short int OC4R23 = 23;
    sbit  OC4R23_bit at OC4R.B23;
    const register unsigned short int OC4R22 = 22;
    sbit  OC4R22_bit at OC4R.B22;
    const register unsigned short int OC4R21 = 21;
    sbit  OC4R21_bit at OC4R.B21;
    const register unsigned short int OC4R20 = 20;
    sbit  OC4R20_bit at OC4R.B20;
    const register unsigned short int OC4R19 = 19;
    sbit  OC4R19_bit at OC4R.B19;
    const register unsigned short int OC4R18 = 18;
    sbit  OC4R18_bit at OC4R.B18;
    const register unsigned short int OC4R17 = 17;
    sbit  OC4R17_bit at OC4R.B17;
    const register unsigned short int OC4R16 = 16;
    sbit  OC4R16_bit at OC4R.B16;
    const register unsigned short int OC4R15 = 15;
    sbit  OC4R15_bit at OC4R.B15;
    const register unsigned short int OC4R14 = 14;
    sbit  OC4R14_bit at OC4R.B14;
    const register unsigned short int OC4R13 = 13;
    sbit  OC4R13_bit at OC4R.B13;
    const register unsigned short int OC4R12 = 12;
    sbit  OC4R12_bit at OC4R.B12;
    const register unsigned short int OC4R11 = 11;
    sbit  OC4R11_bit at OC4R.B11;
    const register unsigned short int OC4R10 = 10;
    sbit  OC4R10_bit at OC4R.B10;
    const register unsigned short int OC4R9 = 9;
    sbit  OC4R9_bit at OC4R.B9;
    const register unsigned short int OC4R8 = 8;
    sbit  OC4R8_bit at OC4R.B8;
    const register unsigned short int OC4R7 = 7;
    sbit  OC4R7_bit at OC4R.B7;
    const register unsigned short int OC4R6 = 6;
    sbit  OC4R6_bit at OC4R.B6;
    const register unsigned short int OC4R5 = 5;
    sbit  OC4R5_bit at OC4R.B5;
    const register unsigned short int OC4R4 = 4;
    sbit  OC4R4_bit at OC4R.B4;
    const register unsigned short int OC4R3 = 3;
    sbit  OC4R3_bit at OC4R.B3;
    const register unsigned short int OC4R2 = 2;
    sbit  OC4R2_bit at OC4R.B2;
    const register unsigned short int OC4R1 = 1;
    sbit  OC4R1_bit at OC4R.B1;
    const register unsigned short int OC4R0 = 0;
    sbit  OC4R0_bit at OC4R.B0;

sfr atomic unsigned long            OC4RS            absolute 0xBF803620;
sfr unsigned long   volatile OC4RSCLR         absolute 0xBF803624;
sfr unsigned long   volatile OC4RSSET         absolute 0xBF803628;
sfr unsigned long   volatile OC4RSINV         absolute 0xBF80362C;
    // OC4RS bits
    const register unsigned short int OC4RS31 = 31;
    sbit  OC4RS31_bit at OC4RS.B31;
    const register unsigned short int OC4RS30 = 30;
    sbit  OC4RS30_bit at OC4RS.B30;
    const register unsigned short int OC4RS29 = 29;
    sbit  OC4RS29_bit at OC4RS.B29;
    const register unsigned short int OC4RS28 = 28;
    sbit  OC4RS28_bit at OC4RS.B28;
    const register unsigned short int OC4RS27 = 27;
    sbit  OC4RS27_bit at OC4RS.B27;
    const register unsigned short int OC4RS26 = 26;
    sbit  OC4RS26_bit at OC4RS.B26;
    const register unsigned short int OC4RS25 = 25;
    sbit  OC4RS25_bit at OC4RS.B25;
    const register unsigned short int OC4RS24 = 24;
    sbit  OC4RS24_bit at OC4RS.B24;
    const register unsigned short int OC4RS23 = 23;
    sbit  OC4RS23_bit at OC4RS.B23;
    const register unsigned short int OC4RS22 = 22;
    sbit  OC4RS22_bit at OC4RS.B22;
    const register unsigned short int OC4RS21 = 21;
    sbit  OC4RS21_bit at OC4RS.B21;
    const register unsigned short int OC4RS20 = 20;
    sbit  OC4RS20_bit at OC4RS.B20;
    const register unsigned short int OC4RS19 = 19;
    sbit  OC4RS19_bit at OC4RS.B19;
    const register unsigned short int OC4RS18 = 18;
    sbit  OC4RS18_bit at OC4RS.B18;
    const register unsigned short int OC4RS17 = 17;
    sbit  OC4RS17_bit at OC4RS.B17;
    const register unsigned short int OC4RS16 = 16;
    sbit  OC4RS16_bit at OC4RS.B16;
    const register unsigned short int OC4RS15 = 15;
    sbit  OC4RS15_bit at OC4RS.B15;
    const register unsigned short int OC4RS14 = 14;
    sbit  OC4RS14_bit at OC4RS.B14;
    const register unsigned short int OC4RS13 = 13;
    sbit  OC4RS13_bit at OC4RS.B13;
    const register unsigned short int OC4RS12 = 12;
    sbit  OC4RS12_bit at OC4RS.B12;
    const register unsigned short int OC4RS11 = 11;
    sbit  OC4RS11_bit at OC4RS.B11;
    const register unsigned short int OC4RS10 = 10;
    sbit  OC4RS10_bit at OC4RS.B10;
    const register unsigned short int OC4RS9 = 9;
    sbit  OC4RS9_bit at OC4RS.B9;
    const register unsigned short int OC4RS8 = 8;
    sbit  OC4RS8_bit at OC4RS.B8;
    const register unsigned short int OC4RS7 = 7;
    sbit  OC4RS7_bit at OC4RS.B7;
    const register unsigned short int OC4RS6 = 6;
    sbit  OC4RS6_bit at OC4RS.B6;
    const register unsigned short int OC4RS5 = 5;
    sbit  OC4RS5_bit at OC4RS.B5;
    const register unsigned short int OC4RS4 = 4;
    sbit  OC4RS4_bit at OC4RS.B4;
    const register unsigned short int OC4RS3 = 3;
    sbit  OC4RS3_bit at OC4RS.B3;
    const register unsigned short int OC4RS2 = 2;
    sbit  OC4RS2_bit at OC4RS.B2;
    const register unsigned short int OC4RS1 = 1;
    sbit  OC4RS1_bit at OC4RS.B1;
    const register unsigned short int OC4RS0 = 0;
    sbit  OC4RS0_bit at OC4RS.B0;

sfr atomic unsigned long   volatile OC5CON           absolute 0xBF803800;
sfr unsigned long   volatile OC5CONCLR        absolute 0xBF803804;
sfr unsigned long   volatile OC5CONSET        absolute 0xBF803808;
sfr unsigned long   volatile OC5CONINV        absolute 0xBF80380C;
    // OC5CON bits
    sbit  ON__OC5CON_bit at OC5CON.B15;
    sbit  SIDL_OC5CON_bit at OC5CON.B13;
    sbit  OC32_OC5CON_bit at OC5CON.B5;
    sbit  OCFLT_OC5CON_bit at OC5CON.B4;
    sbit  OCTSEL_OC5CON_bit at OC5CON.B3;
    sbit  OCM2_OC5CON_bit at OC5CON.B2;
    sbit  OCM1_OC5CON_bit at OC5CON.B1;
    sbit  OCM0_OC5CON_bit at OC5CON.B0;

sfr atomic unsigned long   volatile OC5R             absolute 0xBF803810;
sfr unsigned long   volatile OC5RCLR          absolute 0xBF803814;
sfr unsigned long   volatile OC5RSET          absolute 0xBF803818;
sfr unsigned long   volatile OC5RINV          absolute 0xBF80381C;
    // OC5R bits
    const register unsigned short int OC5R31 = 31;
    sbit  OC5R31_bit at OC5R.B31;
    const register unsigned short int OC5R30 = 30;
    sbit  OC5R30_bit at OC5R.B30;
    const register unsigned short int OC5R29 = 29;
    sbit  OC5R29_bit at OC5R.B29;
    const register unsigned short int OC5R28 = 28;
    sbit  OC5R28_bit at OC5R.B28;
    const register unsigned short int OC5R27 = 27;
    sbit  OC5R27_bit at OC5R.B27;
    const register unsigned short int OC5R26 = 26;
    sbit  OC5R26_bit at OC5R.B26;
    const register unsigned short int OC5R25 = 25;
    sbit  OC5R25_bit at OC5R.B25;
    const register unsigned short int OC5R24 = 24;
    sbit  OC5R24_bit at OC5R.B24;
    const register unsigned short int OC5R23 = 23;
    sbit  OC5R23_bit at OC5R.B23;
    const register unsigned short int OC5R22 = 22;
    sbit  OC5R22_bit at OC5R.B22;
    const register unsigned short int OC5R21 = 21;
    sbit  OC5R21_bit at OC5R.B21;
    const register unsigned short int OC5R20 = 20;
    sbit  OC5R20_bit at OC5R.B20;
    const register unsigned short int OC5R19 = 19;
    sbit  OC5R19_bit at OC5R.B19;
    const register unsigned short int OC5R18 = 18;
    sbit  OC5R18_bit at OC5R.B18;
    const register unsigned short int OC5R17 = 17;
    sbit  OC5R17_bit at OC5R.B17;
    const register unsigned short int OC5R16 = 16;
    sbit  OC5R16_bit at OC5R.B16;
    const register unsigned short int OC5R15 = 15;
    sbit  OC5R15_bit at OC5R.B15;
    const register unsigned short int OC5R14 = 14;
    sbit  OC5R14_bit at OC5R.B14;
    const register unsigned short int OC5R13 = 13;
    sbit  OC5R13_bit at OC5R.B13;
    const register unsigned short int OC5R12 = 12;
    sbit  OC5R12_bit at OC5R.B12;
    const register unsigned short int OC5R11 = 11;
    sbit  OC5R11_bit at OC5R.B11;
    const register unsigned short int OC5R10 = 10;
    sbit  OC5R10_bit at OC5R.B10;
    const register unsigned short int OC5R9 = 9;
    sbit  OC5R9_bit at OC5R.B9;
    const register unsigned short int OC5R8 = 8;
    sbit  OC5R8_bit at OC5R.B8;
    const register unsigned short int OC5R7 = 7;
    sbit  OC5R7_bit at OC5R.B7;
    const register unsigned short int OC5R6 = 6;
    sbit  OC5R6_bit at OC5R.B6;
    const register unsigned short int OC5R5 = 5;
    sbit  OC5R5_bit at OC5R.B5;
    const register unsigned short int OC5R4 = 4;
    sbit  OC5R4_bit at OC5R.B4;
    const register unsigned short int OC5R3 = 3;
    sbit  OC5R3_bit at OC5R.B3;
    const register unsigned short int OC5R2 = 2;
    sbit  OC5R2_bit at OC5R.B2;
    const register unsigned short int OC5R1 = 1;
    sbit  OC5R1_bit at OC5R.B1;
    const register unsigned short int OC5R0 = 0;
    sbit  OC5R0_bit at OC5R.B0;

sfr atomic unsigned long            OC5RS            absolute 0xBF803820;
sfr unsigned long   volatile OC5RSCLR         absolute 0xBF803824;
sfr unsigned long   volatile OC5RSSET         absolute 0xBF803828;
sfr unsigned long   volatile OC5RSINV         absolute 0xBF80382C;
    // OC5RS bits
    const register unsigned short int OC5RS31 = 31;
    sbit  OC5RS31_bit at OC5RS.B31;
    const register unsigned short int OC5RS30 = 30;
    sbit  OC5RS30_bit at OC5RS.B30;
    const register unsigned short int OC5RS29 = 29;
    sbit  OC5RS29_bit at OC5RS.B29;
    const register unsigned short int OC5RS28 = 28;
    sbit  OC5RS28_bit at OC5RS.B28;
    const register unsigned short int OC5RS27 = 27;
    sbit  OC5RS27_bit at OC5RS.B27;
    const register unsigned short int OC5RS26 = 26;
    sbit  OC5RS26_bit at OC5RS.B26;
    const register unsigned short int OC5RS25 = 25;
    sbit  OC5RS25_bit at OC5RS.B25;
    const register unsigned short int OC5RS24 = 24;
    sbit  OC5RS24_bit at OC5RS.B24;
    const register unsigned short int OC5RS23 = 23;
    sbit  OC5RS23_bit at OC5RS.B23;
    const register unsigned short int OC5RS22 = 22;
    sbit  OC5RS22_bit at OC5RS.B22;
    const register unsigned short int OC5RS21 = 21;
    sbit  OC5RS21_bit at OC5RS.B21;
    const register unsigned short int OC5RS20 = 20;
    sbit  OC5RS20_bit at OC5RS.B20;
    const register unsigned short int OC5RS19 = 19;
    sbit  OC5RS19_bit at OC5RS.B19;
    const register unsigned short int OC5RS18 = 18;
    sbit  OC5RS18_bit at OC5RS.B18;
    const register unsigned short int OC5RS17 = 17;
    sbit  OC5RS17_bit at OC5RS.B17;
    const register unsigned short int OC5RS16 = 16;
    sbit  OC5RS16_bit at OC5RS.B16;
    const register unsigned short int OC5RS15 = 15;
    sbit  OC5RS15_bit at OC5RS.B15;
    const register unsigned short int OC5RS14 = 14;
    sbit  OC5RS14_bit at OC5RS.B14;
    const register unsigned short int OC5RS13 = 13;
    sbit  OC5RS13_bit at OC5RS.B13;
    const register unsigned short int OC5RS12 = 12;
    sbit  OC5RS12_bit at OC5RS.B12;
    const register unsigned short int OC5RS11 = 11;
    sbit  OC5RS11_bit at OC5RS.B11;
    const register unsigned short int OC5RS10 = 10;
    sbit  OC5RS10_bit at OC5RS.B10;
    const register unsigned short int OC5RS9 = 9;
    sbit  OC5RS9_bit at OC5RS.B9;
    const register unsigned short int OC5RS8 = 8;
    sbit  OC5RS8_bit at OC5RS.B8;
    const register unsigned short int OC5RS7 = 7;
    sbit  OC5RS7_bit at OC5RS.B7;
    const register unsigned short int OC5RS6 = 6;
    sbit  OC5RS6_bit at OC5RS.B6;
    const register unsigned short int OC5RS5 = 5;
    sbit  OC5RS5_bit at OC5RS.B5;
    const register unsigned short int OC5RS4 = 4;
    sbit  OC5RS4_bit at OC5RS.B4;
    const register unsigned short int OC5RS3 = 3;
    sbit  OC5RS3_bit at OC5RS.B3;
    const register unsigned short int OC5RS2 = 2;
    sbit  OC5RS2_bit at OC5RS.B2;
    const register unsigned short int OC5RS1 = 1;
    sbit  OC5RS1_bit at OC5RS.B1;
    const register unsigned short int OC5RS0 = 0;
    sbit  OC5RS0_bit at OC5RS.B0;

sfr atomic unsigned long   volatile I2C1CON          absolute 0xBF805000;
sfr unsigned long   volatile I2C1CONCLR       absolute 0xBF805004;
sfr unsigned long   volatile I2C1CONSET       absolute 0xBF805008;
sfr unsigned long   volatile I2C1CONINV       absolute 0xBF80500C;
    // I2C1CON bits
    sbit  ON__I2C1CON_bit at I2C1CON.B15;
    sbit  SIDL_I2C1CON_bit at I2C1CON.B13;
    const register unsigned short int SCLREL = 12;
    sbit  SCLREL_bit at I2C1CON.B12;
    const register unsigned short int STRICT = 11;
    sbit  STRICT_bit at I2C1CON.B11;
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

sfr atomic unsigned long   volatile I2C1STAT         absolute 0xBF805010;
sfr unsigned long   volatile I2C1STATCLR      absolute 0xBF805014;
sfr unsigned long   volatile I2C1STATSET      absolute 0xBF805018;
sfr unsigned long   volatile I2C1STATINV      absolute 0xBF80501C;
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
    const register unsigned short int DA = 5;
    sbit  DA_bit at I2C1STAT.B5;
    const register unsigned short int P = 4;
    sbit  P_bit at I2C1STAT.B4;
    const register unsigned short int S = 3;
    sbit  S_bit at I2C1STAT.B3;
    const register unsigned short int RW = 2;
    sbit  RW_bit at I2C1STAT.B2;
    const register unsigned short int RBF = 1;
    sbit  RBF_bit at I2C1STAT.B1;
    const register unsigned short int TBF = 0;
    sbit  TBF_bit at I2C1STAT.B0;

sfr atomic unsigned long   volatile I2C1ADD          absolute 0xBF805020;
sfr unsigned long   volatile I2C1ADDCLR       absolute 0xBF805024;
sfr unsigned long   volatile I2C1ADDSET       absolute 0xBF805028;
sfr unsigned long   volatile I2C1ADDINV       absolute 0xBF80502C;
    // I2C1ADD bits
    const register unsigned short int I2CADD9 = 9;
    sbit  I2CADD9_bit at I2C1ADD.B9;
    const register unsigned short int I2CADD8 = 8;
    sbit  I2CADD8_bit at I2C1ADD.B8;
    const register unsigned short int I2CADD7 = 7;
    sbit  I2CADD7_bit at I2C1ADD.B7;
    const register unsigned short int I2CADD6 = 6;
    sbit  I2CADD6_bit at I2C1ADD.B6;
    const register unsigned short int I2CADD5 = 5;
    sbit  I2CADD5_bit at I2C1ADD.B5;
    const register unsigned short int I2CADD4 = 4;
    sbit  I2CADD4_bit at I2C1ADD.B4;
    const register unsigned short int I2CADD3 = 3;
    sbit  I2CADD3_bit at I2C1ADD.B3;
    const register unsigned short int I2CADD2 = 2;
    sbit  I2CADD2_bit at I2C1ADD.B2;
    const register unsigned short int I2CADD1 = 1;
    sbit  I2CADD1_bit at I2C1ADD.B1;
    const register unsigned short int I2CADD0 = 0;
    sbit  I2CADD0_bit at I2C1ADD.B0;

sfr atomic unsigned long   volatile I2C1MSK          absolute 0xBF805030;
sfr unsigned long   volatile I2C1MSKCLR       absolute 0xBF805034;
sfr unsigned long   volatile I2C1MSKSET       absolute 0xBF805038;
sfr unsigned long   volatile I2C1MSKINV       absolute 0xBF80503C;
    // I2C1MSK bits
    const register unsigned short int I2CMSK9 = 9;
    sbit  I2CMSK9_bit at I2C1MSK.B9;
    const register unsigned short int I2CMSK8 = 8;
    sbit  I2CMSK8_bit at I2C1MSK.B8;
    const register unsigned short int I2CMSK7 = 7;
    sbit  I2CMSK7_bit at I2C1MSK.B7;
    const register unsigned short int I2CMSK6 = 6;
    sbit  I2CMSK6_bit at I2C1MSK.B6;
    const register unsigned short int I2CMSK5 = 5;
    sbit  I2CMSK5_bit at I2C1MSK.B5;
    const register unsigned short int I2CMSK4 = 4;
    sbit  I2CMSK4_bit at I2C1MSK.B4;
    const register unsigned short int I2CMSK3 = 3;
    sbit  I2CMSK3_bit at I2C1MSK.B3;
    const register unsigned short int I2CMSK2 = 2;
    sbit  I2CMSK2_bit at I2C1MSK.B2;
    const register unsigned short int I2CMSK1 = 1;
    sbit  I2CMSK1_bit at I2C1MSK.B1;
    const register unsigned short int I2CMSK0 = 0;
    sbit  I2CMSK0_bit at I2C1MSK.B0;

sfr atomic unsigned long            I2C1BRG          absolute 0xBF805040;
sfr unsigned long   volatile I2C1BRGCLR       absolute 0xBF805044;
sfr unsigned long   volatile I2C1BRGSET       absolute 0xBF805048;
sfr unsigned long   volatile I2C1BRGINV       absolute 0xBF80504C;
    // I2C1BRG bits
    const register unsigned short int I2CBRG11 = 11;
    sbit  I2CBRG11_bit at I2C1BRG.B11;
    const register unsigned short int I2CBRG10 = 10;
    sbit  I2CBRG10_bit at I2C1BRG.B10;
    const register unsigned short int I2CBRG9 = 9;
    sbit  I2CBRG9_bit at I2C1BRG.B9;
    const register unsigned short int I2CBRG8 = 8;
    sbit  I2CBRG8_bit at I2C1BRG.B8;
    const register unsigned short int I2CBRG7 = 7;
    sbit  I2CBRG7_bit at I2C1BRG.B7;
    const register unsigned short int I2CBRG6 = 6;
    sbit  I2CBRG6_bit at I2C1BRG.B6;
    const register unsigned short int I2CBRG5 = 5;
    sbit  I2CBRG5_bit at I2C1BRG.B5;
    const register unsigned short int I2CBRG4 = 4;
    sbit  I2CBRG4_bit at I2C1BRG.B4;
    const register unsigned short int I2CBRG3 = 3;
    sbit  I2CBRG3_bit at I2C1BRG.B3;
    const register unsigned short int I2CBRG2 = 2;
    sbit  I2CBRG2_bit at I2C1BRG.B2;
    const register unsigned short int I2CBRG1 = 1;
    sbit  I2CBRG1_bit at I2C1BRG.B1;
    const register unsigned short int I2CBRG0 = 0;
    sbit  I2CBRG0_bit at I2C1BRG.B0;

sfr atomic unsigned long   volatile I2C1TRN          absolute 0xBF805050;
sfr unsigned long   volatile I2C1TRNCLR       absolute 0xBF805054;
sfr unsigned long   volatile I2C1TRNSET       absolute 0xBF805058;
sfr unsigned long   volatile I2C1TRNINV       absolute 0xBF80505C;
    // I2C1TRN bits
    const register unsigned short int I2CTRN7 = 7;
    sbit  I2CTRN7_bit at I2C1TRN.B7;
    const register unsigned short int I2CTRN6 = 6;
    sbit  I2CTRN6_bit at I2C1TRN.B6;
    const register unsigned short int I2CTRN5 = 5;
    sbit  I2CTRN5_bit at I2C1TRN.B5;
    const register unsigned short int I2CTRN4 = 4;
    sbit  I2CTRN4_bit at I2C1TRN.B4;
    const register unsigned short int I2CTRN3 = 3;
    sbit  I2CTRN3_bit at I2C1TRN.B3;
    const register unsigned short int I2CTRN2 = 2;
    sbit  I2CTRN2_bit at I2C1TRN.B2;
    const register unsigned short int I2CTRN1 = 1;
    sbit  I2CTRN1_bit at I2C1TRN.B1;
    const register unsigned short int I2CTRN0 = 0;
    sbit  I2CTRN0_bit at I2C1TRN.B0;

sfr unsigned long   volatile I2C1RCV          absolute 0xBF805060;
    // I2C1RCV bits
    const register unsigned short int I2CRCV7 = 7;
    sbit  I2CRCV7_bit at I2C1RCV.B7;
    const register unsigned short int I2CRCV6 = 6;
    sbit  I2CRCV6_bit at I2C1RCV.B6;
    const register unsigned short int I2CRCV5 = 5;
    sbit  I2CRCV5_bit at I2C1RCV.B5;
    const register unsigned short int I2CRCV4 = 4;
    sbit  I2CRCV4_bit at I2C1RCV.B4;
    const register unsigned short int I2CRCV3 = 3;
    sbit  I2CRCV3_bit at I2C1RCV.B3;
    const register unsigned short int I2CRCV2 = 2;
    sbit  I2CRCV2_bit at I2C1RCV.B2;
    const register unsigned short int I2CRCV1 = 1;
    sbit  I2CRCV1_bit at I2C1RCV.B1;
    const register unsigned short int I2CRCV0 = 0;
    sbit  I2CRCV0_bit at I2C1RCV.B0;

sfr atomic unsigned long   volatile I2C2CON          absolute 0xBF805100;
sfr unsigned long   volatile I2C2CONCLR       absolute 0xBF805104;
sfr unsigned long   volatile I2C2CONSET       absolute 0xBF805108;
sfr unsigned long   volatile I2C2CONINV       absolute 0xBF80510C;
    // I2C2CON bits
    sbit  ON__I2C2CON_bit at I2C2CON.B15;
    sbit  SIDL_I2C2CON_bit at I2C2CON.B13;
    sbit  SCLREL_I2C2CON_bit at I2C2CON.B12;
    sbit  STRICT_I2C2CON_bit at I2C2CON.B11;
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

sfr atomic unsigned long   volatile I2C2STAT         absolute 0xBF805110;
sfr unsigned long   volatile I2C2STATCLR      absolute 0xBF805114;
sfr unsigned long   volatile I2C2STATSET      absolute 0xBF805118;
sfr unsigned long   volatile I2C2STATINV      absolute 0xBF80511C;
    // I2C2STAT bits
    sbit  ACKSTAT_I2C2STAT_bit at I2C2STAT.B15;
    sbit  TRSTAT_I2C2STAT_bit at I2C2STAT.B14;
    sbit  BCL_I2C2STAT_bit at I2C2STAT.B10;
    sbit  GCSTAT_I2C2STAT_bit at I2C2STAT.B9;
    sbit  ADD10_I2C2STAT_bit at I2C2STAT.B8;
    sbit  IWCOL_I2C2STAT_bit at I2C2STAT.B7;
    sbit  I2COV_I2C2STAT_bit at I2C2STAT.B6;
    sbit  DA_I2C2STAT_bit at I2C2STAT.B5;
    sbit  P_I2C2STAT_bit at I2C2STAT.B4;
    sbit  S_I2C2STAT_bit at I2C2STAT.B3;
    sbit  RW_I2C2STAT_bit at I2C2STAT.B2;
    sbit  RBF_I2C2STAT_bit at I2C2STAT.B1;
    sbit  TBF_I2C2STAT_bit at I2C2STAT.B0;

sfr atomic unsigned long   volatile I2C2ADD          absolute 0xBF805120;
sfr unsigned long   volatile I2C2ADDCLR       absolute 0xBF805124;
sfr unsigned long   volatile I2C2ADDSET       absolute 0xBF805128;
sfr unsigned long   volatile I2C2ADDINV       absolute 0xBF80512C;
    // I2C2ADD bits
    sbit  I2CADD9_I2C2ADD_bit at I2C2ADD.B9;
    sbit  I2CADD8_I2C2ADD_bit at I2C2ADD.B8;
    sbit  I2CADD7_I2C2ADD_bit at I2C2ADD.B7;
    sbit  I2CADD6_I2C2ADD_bit at I2C2ADD.B6;
    sbit  I2CADD5_I2C2ADD_bit at I2C2ADD.B5;
    sbit  I2CADD4_I2C2ADD_bit at I2C2ADD.B4;
    sbit  I2CADD3_I2C2ADD_bit at I2C2ADD.B3;
    sbit  I2CADD2_I2C2ADD_bit at I2C2ADD.B2;
    sbit  I2CADD1_I2C2ADD_bit at I2C2ADD.B1;
    sbit  I2CADD0_I2C2ADD_bit at I2C2ADD.B0;

sfr atomic unsigned long   volatile I2C2MSK          absolute 0xBF805130;
sfr unsigned long   volatile I2C2MSKCLR       absolute 0xBF805134;
sfr unsigned long   volatile I2C2MSKSET       absolute 0xBF805138;
sfr unsigned long   volatile I2C2MSKINV       absolute 0xBF80513C;
    // I2C2MSK bits
    sbit  I2CMSK9_I2C2MSK_bit at I2C2MSK.B9;
    sbit  I2CMSK8_I2C2MSK_bit at I2C2MSK.B8;
    sbit  I2CMSK7_I2C2MSK_bit at I2C2MSK.B7;
    sbit  I2CMSK6_I2C2MSK_bit at I2C2MSK.B6;
    sbit  I2CMSK5_I2C2MSK_bit at I2C2MSK.B5;
    sbit  I2CMSK4_I2C2MSK_bit at I2C2MSK.B4;
    sbit  I2CMSK3_I2C2MSK_bit at I2C2MSK.B3;
    sbit  I2CMSK2_I2C2MSK_bit at I2C2MSK.B2;
    sbit  I2CMSK1_I2C2MSK_bit at I2C2MSK.B1;
    sbit  I2CMSK0_I2C2MSK_bit at I2C2MSK.B0;

sfr atomic unsigned long            I2C2BRG          absolute 0xBF805140;
sfr unsigned long   volatile I2C2BRGCLR       absolute 0xBF805144;
sfr unsigned long   volatile I2C2BRGSET       absolute 0xBF805148;
sfr unsigned long   volatile I2C2BRGINV       absolute 0xBF80514C;
    // I2C2BRG bits
    sbit  I2CBRG11_I2C2BRG_bit at I2C2BRG.B11;
    sbit  I2CBRG10_I2C2BRG_bit at I2C2BRG.B10;
    sbit  I2CBRG9_I2C2BRG_bit at I2C2BRG.B9;
    sbit  I2CBRG8_I2C2BRG_bit at I2C2BRG.B8;
    sbit  I2CBRG7_I2C2BRG_bit at I2C2BRG.B7;
    sbit  I2CBRG6_I2C2BRG_bit at I2C2BRG.B6;
    sbit  I2CBRG5_I2C2BRG_bit at I2C2BRG.B5;
    sbit  I2CBRG4_I2C2BRG_bit at I2C2BRG.B4;
    sbit  I2CBRG3_I2C2BRG_bit at I2C2BRG.B3;
    sbit  I2CBRG2_I2C2BRG_bit at I2C2BRG.B2;
    sbit  I2CBRG1_I2C2BRG_bit at I2C2BRG.B1;
    sbit  I2CBRG0_I2C2BRG_bit at I2C2BRG.B0;

sfr atomic unsigned long   volatile I2C2TRN          absolute 0xBF805150;
sfr unsigned long   volatile I2C2TRNCLR       absolute 0xBF805154;
sfr unsigned long   volatile I2C2TRNSET       absolute 0xBF805158;
sfr unsigned long   volatile I2C2TRNINV       absolute 0xBF80515C;
    // I2C2TRN bits
    sbit  I2CTRN7_I2C2TRN_bit at I2C2TRN.B7;
    sbit  I2CTRN6_I2C2TRN_bit at I2C2TRN.B6;
    sbit  I2CTRN5_I2C2TRN_bit at I2C2TRN.B5;
    sbit  I2CTRN4_I2C2TRN_bit at I2C2TRN.B4;
    sbit  I2CTRN3_I2C2TRN_bit at I2C2TRN.B3;
    sbit  I2CTRN2_I2C2TRN_bit at I2C2TRN.B2;
    sbit  I2CTRN1_I2C2TRN_bit at I2C2TRN.B1;
    sbit  I2CTRN0_I2C2TRN_bit at I2C2TRN.B0;

sfr unsigned long   volatile I2C2RCV          absolute 0xBF805160;
    // I2C2RCV bits
    sbit  I2CRCV7_I2C2RCV_bit at I2C2RCV.B7;
    sbit  I2CRCV6_I2C2RCV_bit at I2C2RCV.B6;
    sbit  I2CRCV5_I2C2RCV_bit at I2C2RCV.B5;
    sbit  I2CRCV4_I2C2RCV_bit at I2C2RCV.B4;
    sbit  I2CRCV3_I2C2RCV_bit at I2C2RCV.B3;
    sbit  I2CRCV2_I2C2RCV_bit at I2C2RCV.B2;
    sbit  I2CRCV1_I2C2RCV_bit at I2C2RCV.B1;
    sbit  I2CRCV0_I2C2RCV_bit at I2C2RCV.B0;

sfr atomic unsigned long   volatile SPI1CON          absolute 0xBF805800;
sfr unsigned long   volatile SPI1CONCLR       absolute 0xBF805804;
sfr unsigned long   volatile SPI1CONSET       absolute 0xBF805808;
sfr unsigned long   volatile SPI1CONINV       absolute 0xBF80580C;
    // SPI1CON bits
    const register unsigned short int FRMEN = 31;
    sbit  FRMEN_bit at SPI1CON.B31;
    const register unsigned short int FRMSYNC = 30;
    sbit  FRMSYNC_bit at SPI1CON.B30;
    const register unsigned short int FRMPOL = 29;
    sbit  FRMPOL_bit at SPI1CON.B29;
    const register unsigned short int MSSEN = 28;
    sbit  MSSEN_bit at SPI1CON.B28;
    const register unsigned short int FRMSYPW = 27;
    sbit  FRMSYPW_bit at SPI1CON.B27;
    const register unsigned short int FRMCNT2 = 26;
    sbit  FRMCNT2_bit at SPI1CON.B26;
    const register unsigned short int FRMCNT1 = 25;
    sbit  FRMCNT1_bit at SPI1CON.B25;
    const register unsigned short int FRMCNT0 = 24;
    sbit  FRMCNT0_bit at SPI1CON.B24;
    const register unsigned short int MCLKSEL = 23;
    sbit  MCLKSEL_bit at SPI1CON.B23;
    const register unsigned short int SPIFE = 17;
    sbit  SPIFE_bit at SPI1CON.B17;
    const register unsigned short int ENHBUF = 16;
    sbit  ENHBUF_bit at SPI1CON.B16;
    sbit  ON__SPI1CON_bit at SPI1CON.B15;
    sbit  SIDL_SPI1CON_bit at SPI1CON.B13;
    const register unsigned short int DISSDO = 12;
    sbit  DISSDO_bit at SPI1CON.B12;
    const register unsigned short int MODE32 = 11;
    sbit  MODE32_bit at SPI1CON.B11;
    const register unsigned short int MODE16 = 10;
    sbit  MODE16_bit at SPI1CON.B10;
    const register unsigned short int SMP = 9;
    sbit  SMP_bit at SPI1CON.B9;
    const register unsigned short int CKE = 8;
    sbit  CKE_bit at SPI1CON.B8;
    const register unsigned short int SSEN = 7;
    sbit  SSEN_bit at SPI1CON.B7;
    const register unsigned short int CKP = 6;
    sbit  CKP_bit at SPI1CON.B6;
    const register unsigned short int MSTEN = 5;
    sbit  MSTEN_bit at SPI1CON.B5;
    const register unsigned short int DISSDI = 4;
    sbit  DISSDI_bit at SPI1CON.B4;
    const register unsigned short int STXISEL1 = 3;
    sbit  STXISEL1_bit at SPI1CON.B3;
    const register unsigned short int STXISEL0 = 2;
    sbit  STXISEL0_bit at SPI1CON.B2;
    const register unsigned short int SRXISEL1 = 1;
    sbit  SRXISEL1_bit at SPI1CON.B1;
    const register unsigned short int SRXISEL0 = 0;
    sbit  SRXISEL0_bit at SPI1CON.B0;

sfr atomic unsigned long   volatile SPI1STAT         absolute 0xBF805810;
sfr unsigned long   volatile SPI1STATCLR      absolute 0xBF805814;
sfr unsigned long   volatile SPI1STATSET      absolute 0xBF805818;
sfr unsigned long   volatile SPI1STATINV      absolute 0xBF80581C;
    // SPI1STAT bits
    const register unsigned short int RXBUFELM4 = 28;
    sbit  RXBUFELM4_bit at SPI1STAT.B28;
    const register unsigned short int RXBUFELM3 = 27;
    sbit  RXBUFELM3_bit at SPI1STAT.B27;
    const register unsigned short int RXBUFELM2 = 26;
    sbit  RXBUFELM2_bit at SPI1STAT.B26;
    const register unsigned short int RXBUFELM1 = 25;
    sbit  RXBUFELM1_bit at SPI1STAT.B25;
    const register unsigned short int RXBUFELM0 = 24;
    sbit  RXBUFELM0_bit at SPI1STAT.B24;
    const register unsigned short int TXBUFELM4 = 20;
    sbit  TXBUFELM4_bit at SPI1STAT.B20;
    const register unsigned short int TXBUFELM3 = 19;
    sbit  TXBUFELM3_bit at SPI1STAT.B19;
    const register unsigned short int TXBUFELM2 = 18;
    sbit  TXBUFELM2_bit at SPI1STAT.B18;
    const register unsigned short int TXBUFELM1 = 17;
    sbit  TXBUFELM1_bit at SPI1STAT.B17;
    const register unsigned short int TXBUFELM0 = 16;
    sbit  TXBUFELM0_bit at SPI1STAT.B16;
    const register unsigned short int FRMERR = 12;
    sbit  FRMERR_bit at SPI1STAT.B12;
    const register unsigned short int SPIBUSY = 11;
    sbit  SPIBUSY_bit at SPI1STAT.B11;
    const register unsigned short int SPITUR = 8;
    sbit  SPITUR_bit at SPI1STAT.B8;
    const register unsigned short int SRMT = 7;
    sbit  SRMT_bit at SPI1STAT.B7;
    const register unsigned short int SPIROV = 6;
    sbit  SPIROV_bit at SPI1STAT.B6;
    const register unsigned short int SPIRBE = 5;
    sbit  SPIRBE_bit at SPI1STAT.B5;
    const register unsigned short int SPITBE = 3;
    sbit  SPITBE_bit at SPI1STAT.B3;
    const register unsigned short int SPITBF = 1;
    sbit  SPITBF_bit at SPI1STAT.B1;
    const register unsigned short int SPIRBF = 0;
    sbit  SPIRBF_bit at SPI1STAT.B0;

sfr unsigned long   volatile SPI1BUF          absolute 0xBF805820;
    // SPI1BUF bits
    const register unsigned short int SPI1BUF31 = 31;
    sbit  SPI1BUF31_bit at SPI1BUF.B31;
    const register unsigned short int SPI1BUF30 = 30;
    sbit  SPI1BUF30_bit at SPI1BUF.B30;
    const register unsigned short int SPI1BUF29 = 29;
    sbit  SPI1BUF29_bit at SPI1BUF.B29;
    const register unsigned short int SPI1BUF28 = 28;
    sbit  SPI1BUF28_bit at SPI1BUF.B28;
    const register unsigned short int SPI1BUF27 = 27;
    sbit  SPI1BUF27_bit at SPI1BUF.B27;
    const register unsigned short int SPI1BUF26 = 26;
    sbit  SPI1BUF26_bit at SPI1BUF.B26;
    const register unsigned short int SPI1BUF25 = 25;
    sbit  SPI1BUF25_bit at SPI1BUF.B25;
    const register unsigned short int SPI1BUF24 = 24;
    sbit  SPI1BUF24_bit at SPI1BUF.B24;
    const register unsigned short int SPI1BUF23 = 23;
    sbit  SPI1BUF23_bit at SPI1BUF.B23;
    const register unsigned short int SPI1BUF22 = 22;
    sbit  SPI1BUF22_bit at SPI1BUF.B22;
    const register unsigned short int SPI1BUF21 = 21;
    sbit  SPI1BUF21_bit at SPI1BUF.B21;
    const register unsigned short int SPI1BUF20 = 20;
    sbit  SPI1BUF20_bit at SPI1BUF.B20;
    const register unsigned short int SPI1BUF19 = 19;
    sbit  SPI1BUF19_bit at SPI1BUF.B19;
    const register unsigned short int SPI1BUF18 = 18;
    sbit  SPI1BUF18_bit at SPI1BUF.B18;
    const register unsigned short int SPI1BUF17 = 17;
    sbit  SPI1BUF17_bit at SPI1BUF.B17;
    const register unsigned short int SPI1BUF16 = 16;
    sbit  SPI1BUF16_bit at SPI1BUF.B16;
    const register unsigned short int SPI1BUF15 = 15;
    sbit  SPI1BUF15_bit at SPI1BUF.B15;
    const register unsigned short int SPI1BUF14 = 14;
    sbit  SPI1BUF14_bit at SPI1BUF.B14;
    const register unsigned short int SPI1BUF13 = 13;
    sbit  SPI1BUF13_bit at SPI1BUF.B13;
    const register unsigned short int SPI1BUF12 = 12;
    sbit  SPI1BUF12_bit at SPI1BUF.B12;
    const register unsigned short int SPI1BUF11 = 11;
    sbit  SPI1BUF11_bit at SPI1BUF.B11;
    const register unsigned short int SPI1BUF10 = 10;
    sbit  SPI1BUF10_bit at SPI1BUF.B10;
    const register unsigned short int SPI1BUF9 = 9;
    sbit  SPI1BUF9_bit at SPI1BUF.B9;
    const register unsigned short int SPI1BUF8 = 8;
    sbit  SPI1BUF8_bit at SPI1BUF.B8;
    const register unsigned short int SPI1BUF7 = 7;
    sbit  SPI1BUF7_bit at SPI1BUF.B7;
    const register unsigned short int SPI1BUF6 = 6;
    sbit  SPI1BUF6_bit at SPI1BUF.B6;
    const register unsigned short int SPI1BUF5 = 5;
    sbit  SPI1BUF5_bit at SPI1BUF.B5;
    const register unsigned short int SPI1BUF4 = 4;
    sbit  SPI1BUF4_bit at SPI1BUF.B4;
    const register unsigned short int SPI1BUF3 = 3;
    sbit  SPI1BUF3_bit at SPI1BUF.B3;
    const register unsigned short int SPI1BUF2 = 2;
    sbit  SPI1BUF2_bit at SPI1BUF.B2;
    const register unsigned short int SPI1BUF1 = 1;
    sbit  SPI1BUF1_bit at SPI1BUF.B1;
    const register unsigned short int SPI1BUF0 = 0;
    sbit  SPI1BUF0_bit at SPI1BUF.B0;

sfr atomic unsigned long   volatile SPI1BRG          absolute 0xBF805830;
sfr unsigned long   volatile SPI1BRGCLR       absolute 0xBF805834;
sfr unsigned long   volatile SPI1BRGSET       absolute 0xBF805838;
sfr unsigned long   volatile SPI1BRGINV       absolute 0xBF80583C;
    // SPI1BRG bits
    const register unsigned short int SPI1BRG12 = 12;
    sbit  SPI1BRG12_bit at SPI1BRG.B12;
    const register unsigned short int SPI1BRG11 = 11;
    sbit  SPI1BRG11_bit at SPI1BRG.B11;
    const register unsigned short int SPI1BRG10 = 10;
    sbit  SPI1BRG10_bit at SPI1BRG.B10;
    const register unsigned short int SPI1BRG9 = 9;
    sbit  SPI1BRG9_bit at SPI1BRG.B9;
    const register unsigned short int SPI1BRG8 = 8;
    sbit  SPI1BRG8_bit at SPI1BRG.B8;
    const register unsigned short int SPI1BRG7 = 7;
    sbit  SPI1BRG7_bit at SPI1BRG.B7;
    const register unsigned short int SPI1BRG6 = 6;
    sbit  SPI1BRG6_bit at SPI1BRG.B6;
    const register unsigned short int SPI1BRG5 = 5;
    sbit  SPI1BRG5_bit at SPI1BRG.B5;
    const register unsigned short int SPI1BRG4 = 4;
    sbit  SPI1BRG4_bit at SPI1BRG.B4;
    const register unsigned short int SPI1BRG3 = 3;
    sbit  SPI1BRG3_bit at SPI1BRG.B3;
    const register unsigned short int SPI1BRG2 = 2;
    sbit  SPI1BRG2_bit at SPI1BRG.B2;
    const register unsigned short int SPI1BRG1 = 1;
    sbit  SPI1BRG1_bit at SPI1BRG.B1;
    const register unsigned short int SPI1BRG0 = 0;
    sbit  SPI1BRG0_bit at SPI1BRG.B0;

sfr atomic unsigned long   volatile SPI1CON2         absolute 0xBF805840;
sfr unsigned long   volatile SPI1CON2CLR      absolute 0xBF805844;
sfr unsigned long   volatile SPI1CON2SET      absolute 0xBF805848;
sfr unsigned long   volatile SPI1CON2INV      absolute 0xBF80584C;
    // SPI1CON2 bits
    const register unsigned short int SPISGNEXT = 15;
    sbit  SPISGNEXT_bit at SPI1CON2.B15;
    const register unsigned short int FRMERREN = 12;
    sbit  FRMERREN_bit at SPI1CON2.B12;
    const register unsigned short int SPIROVEN = 11;
    sbit  SPIROVEN_bit at SPI1CON2.B11;
    const register unsigned short int SPITUREN = 10;
    sbit  SPITUREN_bit at SPI1CON2.B10;
    const register unsigned short int IGNROV = 9;
    sbit  IGNROV_bit at SPI1CON2.B9;
    const register unsigned short int IGNTUR = 8;
    sbit  IGNTUR_bit at SPI1CON2.B8;
    const register unsigned short int AUDEN = 7;
    sbit  AUDEN_bit at SPI1CON2.B7;
    const register unsigned short int AUDMONO = 3;
    sbit  AUDMONO_bit at SPI1CON2.B3;
    const register unsigned short int AUDMOD1 = 1;
    sbit  AUDMOD1_bit at SPI1CON2.B1;
    const register unsigned short int AUDMOD0 = 0;
    sbit  AUDMOD0_bit at SPI1CON2.B0;

sfr atomic unsigned long   volatile SPI2CON          absolute 0xBF805A00;
sfr unsigned long   volatile SPI2CONCLR       absolute 0xBF805A04;
sfr unsigned long   volatile SPI2CONSET       absolute 0xBF805A08;
sfr unsigned long   volatile SPI2CONINV       absolute 0xBF805A0C;
    // SPI2CON bits
    sbit  FRMEN_SPI2CON_bit at SPI2CON.B31;
    sbit  FRMSYNC_SPI2CON_bit at SPI2CON.B30;
    sbit  FRMPOL_SPI2CON_bit at SPI2CON.B29;
    sbit  MSSEN_SPI2CON_bit at SPI2CON.B28;
    sbit  FRMSYPW_SPI2CON_bit at SPI2CON.B27;
    sbit  FRMCNT2_SPI2CON_bit at SPI2CON.B26;
    sbit  FRMCNT1_SPI2CON_bit at SPI2CON.B25;
    sbit  FRMCNT0_SPI2CON_bit at SPI2CON.B24;
    sbit  MCLKSEL_SPI2CON_bit at SPI2CON.B23;
    sbit  SPIFE_SPI2CON_bit at SPI2CON.B17;
    sbit  ENHBUF_SPI2CON_bit at SPI2CON.B16;
    sbit  ON__SPI2CON_bit at SPI2CON.B15;
    sbit  SIDL_SPI2CON_bit at SPI2CON.B13;
    sbit  DISSDO_SPI2CON_bit at SPI2CON.B12;
    sbit  MODE32_SPI2CON_bit at SPI2CON.B11;
    sbit  MODE16_SPI2CON_bit at SPI2CON.B10;
    sbit  SMP_SPI2CON_bit at SPI2CON.B9;
    sbit  CKE_SPI2CON_bit at SPI2CON.B8;
    sbit  SSEN_SPI2CON_bit at SPI2CON.B7;
    sbit  CKP_SPI2CON_bit at SPI2CON.B6;
    sbit  MSTEN_SPI2CON_bit at SPI2CON.B5;
    sbit  DISSDI_SPI2CON_bit at SPI2CON.B4;
    sbit  STXISEL1_SPI2CON_bit at SPI2CON.B3;
    sbit  STXISEL0_SPI2CON_bit at SPI2CON.B2;
    sbit  SRXISEL1_SPI2CON_bit at SPI2CON.B1;
    sbit  SRXISEL0_SPI2CON_bit at SPI2CON.B0;

sfr atomic unsigned long   volatile SPI2STAT         absolute 0xBF805A10;
sfr unsigned long   volatile SPI2STATCLR      absolute 0xBF805A14;
sfr unsigned long   volatile SPI2STATSET      absolute 0xBF805A18;
sfr unsigned long   volatile SPI2STATINV      absolute 0xBF805A1C;
    // SPI2STAT bits
    sbit  RXBUFELM4_SPI2STAT_bit at SPI2STAT.B28;
    sbit  RXBUFELM3_SPI2STAT_bit at SPI2STAT.B27;
    sbit  RXBUFELM2_SPI2STAT_bit at SPI2STAT.B26;
    sbit  RXBUFELM1_SPI2STAT_bit at SPI2STAT.B25;
    sbit  RXBUFELM0_SPI2STAT_bit at SPI2STAT.B24;
    sbit  TXBUFELM4_SPI2STAT_bit at SPI2STAT.B20;
    sbit  TXBUFELM3_SPI2STAT_bit at SPI2STAT.B19;
    sbit  TXBUFELM2_SPI2STAT_bit at SPI2STAT.B18;
    sbit  TXBUFELM1_SPI2STAT_bit at SPI2STAT.B17;
    sbit  TXBUFELM0_SPI2STAT_bit at SPI2STAT.B16;
    sbit  FRMERR_SPI2STAT_bit at SPI2STAT.B12;
    sbit  SPIBUSY_SPI2STAT_bit at SPI2STAT.B11;
    sbit  SPITUR_SPI2STAT_bit at SPI2STAT.B8;
    sbit  SRMT_SPI2STAT_bit at SPI2STAT.B7;
    sbit  SPIROV_SPI2STAT_bit at SPI2STAT.B6;
    sbit  SPIRBE_SPI2STAT_bit at SPI2STAT.B5;
    sbit  SPITBE_SPI2STAT_bit at SPI2STAT.B3;
    sbit  SPITBF_SPI2STAT_bit at SPI2STAT.B1;
    sbit  SPIRBF_SPI2STAT_bit at SPI2STAT.B0;

sfr unsigned long   volatile SPI2BUF          absolute 0xBF805A20;
    // SPI2BUF bits
    const register unsigned short int SPI2BUF31 = 31;
    sbit  SPI2BUF31_bit at SPI2BUF.B31;
    const register unsigned short int SPI2BUF30 = 30;
    sbit  SPI2BUF30_bit at SPI2BUF.B30;
    const register unsigned short int SPI2BUF29 = 29;
    sbit  SPI2BUF29_bit at SPI2BUF.B29;
    const register unsigned short int SPI2BUF28 = 28;
    sbit  SPI2BUF28_bit at SPI2BUF.B28;
    const register unsigned short int SPI2BUF27 = 27;
    sbit  SPI2BUF27_bit at SPI2BUF.B27;
    const register unsigned short int SPI2BUF26 = 26;
    sbit  SPI2BUF26_bit at SPI2BUF.B26;
    const register unsigned short int SPI2BUF25 = 25;
    sbit  SPI2BUF25_bit at SPI2BUF.B25;
    const register unsigned short int SPI2BUF24 = 24;
    sbit  SPI2BUF24_bit at SPI2BUF.B24;
    const register unsigned short int SPI2BUF23 = 23;
    sbit  SPI2BUF23_bit at SPI2BUF.B23;
    const register unsigned short int SPI2BUF22 = 22;
    sbit  SPI2BUF22_bit at SPI2BUF.B22;
    const register unsigned short int SPI2BUF21 = 21;
    sbit  SPI2BUF21_bit at SPI2BUF.B21;
    const register unsigned short int SPI2BUF20 = 20;
    sbit  SPI2BUF20_bit at SPI2BUF.B20;
    const register unsigned short int SPI2BUF19 = 19;
    sbit  SPI2BUF19_bit at SPI2BUF.B19;
    const register unsigned short int SPI2BUF18 = 18;
    sbit  SPI2BUF18_bit at SPI2BUF.B18;
    const register unsigned short int SPI2BUF17 = 17;
    sbit  SPI2BUF17_bit at SPI2BUF.B17;
    const register unsigned short int SPI2BUF16 = 16;
    sbit  SPI2BUF16_bit at SPI2BUF.B16;
    const register unsigned short int SPI2BUF15 = 15;
    sbit  SPI2BUF15_bit at SPI2BUF.B15;
    const register unsigned short int SPI2BUF14 = 14;
    sbit  SPI2BUF14_bit at SPI2BUF.B14;
    const register unsigned short int SPI2BUF13 = 13;
    sbit  SPI2BUF13_bit at SPI2BUF.B13;
    const register unsigned short int SPI2BUF12 = 12;
    sbit  SPI2BUF12_bit at SPI2BUF.B12;
    const register unsigned short int SPI2BUF11 = 11;
    sbit  SPI2BUF11_bit at SPI2BUF.B11;
    const register unsigned short int SPI2BUF10 = 10;
    sbit  SPI2BUF10_bit at SPI2BUF.B10;
    const register unsigned short int SPI2BUF9 = 9;
    sbit  SPI2BUF9_bit at SPI2BUF.B9;
    const register unsigned short int SPI2BUF8 = 8;
    sbit  SPI2BUF8_bit at SPI2BUF.B8;
    const register unsigned short int SPI2BUF7 = 7;
    sbit  SPI2BUF7_bit at SPI2BUF.B7;
    const register unsigned short int SPI2BUF6 = 6;
    sbit  SPI2BUF6_bit at SPI2BUF.B6;
    const register unsigned short int SPI2BUF5 = 5;
    sbit  SPI2BUF5_bit at SPI2BUF.B5;
    const register unsigned short int SPI2BUF4 = 4;
    sbit  SPI2BUF4_bit at SPI2BUF.B4;
    const register unsigned short int SPI2BUF3 = 3;
    sbit  SPI2BUF3_bit at SPI2BUF.B3;
    const register unsigned short int SPI2BUF2 = 2;
    sbit  SPI2BUF2_bit at SPI2BUF.B2;
    const register unsigned short int SPI2BUF1 = 1;
    sbit  SPI2BUF1_bit at SPI2BUF.B1;
    const register unsigned short int SPI2BUF0 = 0;
    sbit  SPI2BUF0_bit at SPI2BUF.B0;

sfr atomic unsigned long   volatile SPI2BRG          absolute 0xBF805A30;
sfr unsigned long   volatile SPI2BRGCLR       absolute 0xBF805A34;
sfr unsigned long   volatile SPI2BRGSET       absolute 0xBF805A38;
sfr unsigned long   volatile SPI2BRGINV       absolute 0xBF805A3C;
    // SPI2BRG bits
    const register unsigned short int SPI2BRG12 = 12;
    sbit  SPI2BRG12_bit at SPI2BRG.B12;
    const register unsigned short int SPI2BRG11 = 11;
    sbit  SPI2BRG11_bit at SPI2BRG.B11;
    const register unsigned short int SPI2BRG10 = 10;
    sbit  SPI2BRG10_bit at SPI2BRG.B10;
    const register unsigned short int SPI2BRG9 = 9;
    sbit  SPI2BRG9_bit at SPI2BRG.B9;
    const register unsigned short int SPI2BRG8 = 8;
    sbit  SPI2BRG8_bit at SPI2BRG.B8;
    const register unsigned short int SPI2BRG7 = 7;
    sbit  SPI2BRG7_bit at SPI2BRG.B7;
    const register unsigned short int SPI2BRG6 = 6;
    sbit  SPI2BRG6_bit at SPI2BRG.B6;
    const register unsigned short int SPI2BRG5 = 5;
    sbit  SPI2BRG5_bit at SPI2BRG.B5;
    const register unsigned short int SPI2BRG4 = 4;
    sbit  SPI2BRG4_bit at SPI2BRG.B4;
    const register unsigned short int SPI2BRG3 = 3;
    sbit  SPI2BRG3_bit at SPI2BRG.B3;
    const register unsigned short int SPI2BRG2 = 2;
    sbit  SPI2BRG2_bit at SPI2BRG.B2;
    const register unsigned short int SPI2BRG1 = 1;
    sbit  SPI2BRG1_bit at SPI2BRG.B1;
    const register unsigned short int SPI2BRG0 = 0;
    sbit  SPI2BRG0_bit at SPI2BRG.B0;

sfr atomic unsigned long   volatile SPI2CON2         absolute 0xBF805A40;
sfr unsigned long   volatile SPI2CON2CLR      absolute 0xBF805A44;
sfr unsigned long   volatile SPI2CON2SET      absolute 0xBF805A48;
sfr unsigned long   volatile SPI2CON2INV      absolute 0xBF805A4C;
    // SPI2CON2 bits
    sbit  SPISGNEXT_SPI2CON2_bit at SPI2CON2.B15;
    sbit  FRMERREN_SPI2CON2_bit at SPI2CON2.B12;
    sbit  SPIROVEN_SPI2CON2_bit at SPI2CON2.B11;
    sbit  SPITUREN_SPI2CON2_bit at SPI2CON2.B10;
    sbit  IGNROV_SPI2CON2_bit at SPI2CON2.B9;
    sbit  IGNTUR_SPI2CON2_bit at SPI2CON2.B8;
    sbit  AUDEN_SPI2CON2_bit at SPI2CON2.B7;
    sbit  AUDMONO_SPI2CON2_bit at SPI2CON2.B3;
    sbit  AUDMOD1_SPI2CON2_bit at SPI2CON2.B1;
    sbit  AUDMOD0_SPI2CON2_bit at SPI2CON2.B0;

sfr atomic unsigned long   volatile U1MODE           absolute 0xBF806000;
sfr unsigned long   volatile U1MODECLR        absolute 0xBF806004;
sfr unsigned long   volatile U1MODESET        absolute 0xBF806008;
sfr unsigned long   volatile U1MODEINV        absolute 0xBF80600C;
    // U1MODE bits
    sbit  ON__U1MODE_bit at U1MODE.B15;
    sbit  SIDL_U1MODE_bit at U1MODE.B13;
    const register unsigned short int IREN = 12;
    sbit  IREN_bit at U1MODE.B12;
    const register unsigned short int RTSMD = 11;
    sbit  RTSMD_bit at U1MODE.B11;
    const register unsigned short int UEN1 = 9;
    sbit  UEN1_bit at U1MODE.B9;
    const register unsigned short int UEN0 = 8;
    sbit  UEN0_bit at U1MODE.B8;
    const register unsigned short int WAKE = 7;
    sbit  WAKE_bit at U1MODE.B7;
    const register unsigned short int LPBACK = 6;
    sbit  LPBACK_bit at U1MODE.B6;
    const register unsigned short int ABAUD = 5;
    sbit  ABAUD_bit at U1MODE.B5;
    const register unsigned short int RXINV = 4;
    sbit  RXINV_bit at U1MODE.B4;
    const register unsigned short int BRGH = 3;
    sbit  BRGH_bit at U1MODE.B3;
    const register unsigned short int PDSEL1 = 2;
    sbit  PDSEL1_bit at U1MODE.B2;
    const register unsigned short int PDSEL0 = 1;
    sbit  PDSEL0_bit at U1MODE.B1;
    const register unsigned short int STSEL = 0;
    sbit  STSEL_bit at U1MODE.B0;

sfr atomic unsigned long   volatile U1STA            absolute 0xBF806010;
sfr unsigned long   volatile U1STACLR         absolute 0xBF806014;
sfr unsigned long   volatile U1STASET         absolute 0xBF806018;
sfr unsigned long   volatile U1STAINV         absolute 0xBF80601C;
    // U1STA bits
    const register unsigned short int ADM_EN = 24;
    sbit  ADM_EN_bit at U1STA.B24;
    const register unsigned short int ADDR7 = 23;
    sbit  ADDR7_bit at U1STA.B23;
    const register unsigned short int ADDR6 = 22;
    sbit  ADDR6_bit at U1STA.B22;
    const register unsigned short int ADDR5 = 21;
    sbit  ADDR5_bit at U1STA.B21;
    const register unsigned short int ADDR4 = 20;
    sbit  ADDR4_bit at U1STA.B20;
    const register unsigned short int ADDR3 = 19;
    sbit  ADDR3_bit at U1STA.B19;
    const register unsigned short int ADDR2 = 18;
    sbit  ADDR2_bit at U1STA.B18;
    const register unsigned short int ADDR1 = 17;
    sbit  ADDR1_bit at U1STA.B17;
    const register unsigned short int ADDR0 = 16;
    sbit  ADDR0_bit at U1STA.B16;
    const register unsigned short int UTXISEL1 = 15;
    sbit  UTXISEL1_bit at U1STA.B15;
    const register unsigned short int UTXISEL0 = 14;
    sbit  UTXISEL0_bit at U1STA.B14;
    const register unsigned short int UTXINV = 13;
    sbit  UTXINV_bit at U1STA.B13;
    const register unsigned short int URXEN = 12;
    sbit  URXEN_bit at U1STA.B12;
    const register unsigned short int UTXBRK = 11;
    sbit  UTXBRK_bit at U1STA.B11;
    const register unsigned short int UTXEN = 10;
    sbit  UTXEN_bit at U1STA.B10;
    const register unsigned short int UTXBF = 9;
    sbit  UTXBF_bit at U1STA.B9;
    const register unsigned short int TRMT = 8;
    sbit  TRMT_bit at U1STA.B8;
    const register unsigned short int URXISEL1 = 7;
    sbit  URXISEL1_bit at U1STA.B7;
    const register unsigned short int URXISEL0 = 6;
    sbit  URXISEL0_bit at U1STA.B6;
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

sfr unsigned long            U1TXREG          absolute 0xBF806020;
    // U1TXREG bits
    const register unsigned short int U1TXREG8 = 8;
    sbit  U1TXREG8_bit at U1TXREG.B8;
    const register unsigned short int U1TXREG7 = 7;
    sbit  U1TXREG7_bit at U1TXREG.B7;
    const register unsigned short int U1TXREG6 = 6;
    sbit  U1TXREG6_bit at U1TXREG.B6;
    const register unsigned short int U1TXREG5 = 5;
    sbit  U1TXREG5_bit at U1TXREG.B5;
    const register unsigned short int U1TXREG4 = 4;
    sbit  U1TXREG4_bit at U1TXREG.B4;
    const register unsigned short int U1TXREG3 = 3;
    sbit  U1TXREG3_bit at U1TXREG.B3;
    const register unsigned short int U1TXREG2 = 2;
    sbit  U1TXREG2_bit at U1TXREG.B2;
    const register unsigned short int U1TXREG1 = 1;
    sbit  U1TXREG1_bit at U1TXREG.B1;
    const register unsigned short int U1TXREG0 = 0;
    sbit  U1TXREG0_bit at U1TXREG.B0;

sfr unsigned long   volatile U1RXREG          absolute 0xBF806030;
    // U1RXREG bits
    const register unsigned short int U1RXREG8 = 8;
    sbit  U1RXREG8_bit at U1RXREG.B8;
    const register unsigned short int U1RXREG7 = 7;
    sbit  U1RXREG7_bit at U1RXREG.B7;
    const register unsigned short int U1RXREG6 = 6;
    sbit  U1RXREG6_bit at U1RXREG.B6;
    const register unsigned short int U1RXREG5 = 5;
    sbit  U1RXREG5_bit at U1RXREG.B5;
    const register unsigned short int U1RXREG4 = 4;
    sbit  U1RXREG4_bit at U1RXREG.B4;
    const register unsigned short int U1RXREG3 = 3;
    sbit  U1RXREG3_bit at U1RXREG.B3;
    const register unsigned short int U1RXREG2 = 2;
    sbit  U1RXREG2_bit at U1RXREG.B2;
    const register unsigned short int U1RXREG1 = 1;
    sbit  U1RXREG1_bit at U1RXREG.B1;
    const register unsigned short int U1RXREG0 = 0;
    sbit  U1RXREG0_bit at U1RXREG.B0;

sfr atomic unsigned long            U1BRG            absolute 0xBF806040;
sfr unsigned long            U4RG             absolute 0xBF806040;
sfr unsigned long   volatile U1BRGCLR         absolute 0xBF806044;
sfr unsigned long   volatile U1BRGSET         absolute 0xBF806048;
sfr unsigned long   volatile U1BRGINV         absolute 0xBF80604C;
    // U1BRG bits
    const register unsigned short int BRG15 = 15;
    sbit  BRG15_bit at U1BRG.B15;
    const register unsigned short int BRG14 = 14;
    sbit  BRG14_bit at U1BRG.B14;
    const register unsigned short int BRG13 = 13;
    sbit  BRG13_bit at U1BRG.B13;
    const register unsigned short int BRG12 = 12;
    sbit  BRG12_bit at U1BRG.B12;
    const register unsigned short int BRG11 = 11;
    sbit  BRG11_bit at U1BRG.B11;
    const register unsigned short int BRG10 = 10;
    sbit  BRG10_bit at U1BRG.B10;
    const register unsigned short int BRG9 = 9;
    sbit  BRG9_bit at U1BRG.B9;
    const register unsigned short int BRG8 = 8;
    sbit  BRG8_bit at U1BRG.B8;
    const register unsigned short int BRG7 = 7;
    sbit  BRG7_bit at U1BRG.B7;
    const register unsigned short int BRG6 = 6;
    sbit  BRG6_bit at U1BRG.B6;
    const register unsigned short int BRG5 = 5;
    sbit  BRG5_bit at U1BRG.B5;
    const register unsigned short int BRG4 = 4;
    sbit  BRG4_bit at U1BRG.B4;
    const register unsigned short int BRG3 = 3;
    sbit  BRG3_bit at U1BRG.B3;
    const register unsigned short int BRG2 = 2;
    sbit  BRG2_bit at U1BRG.B2;
    const register unsigned short int BRG1 = 1;
    sbit  BRG1_bit at U1BRG.B1;
    const register unsigned short int BRG0 = 0;
    sbit  BRG0_bit at U1BRG.B0;

sfr atomic unsigned long   volatile U2MODE           absolute 0xBF806200;
sfr unsigned long   volatile U2MODECLR        absolute 0xBF806204;
sfr unsigned long   volatile U2MODESET        absolute 0xBF806208;
sfr unsigned long   volatile U2MODEINV        absolute 0xBF80620C;
    // U2MODE bits
    sbit  ON__U2MODE_bit at U2MODE.B15;
    sbit  SIDL_U2MODE_bit at U2MODE.B13;
    sbit  IREN_U2MODE_bit at U2MODE.B12;
    sbit  RTSMD_U2MODE_bit at U2MODE.B11;
    sbit  UEN1_U2MODE_bit at U2MODE.B9;
    sbit  UEN0_U2MODE_bit at U2MODE.B8;
    sbit  WAKE_U2MODE_bit at U2MODE.B7;
    sbit  LPBACK_U2MODE_bit at U2MODE.B6;
    sbit  ABAUD_U2MODE_bit at U2MODE.B5;
    sbit  RXINV_U2MODE_bit at U2MODE.B4;
    sbit  BRGH_U2MODE_bit at U2MODE.B3;
    sbit  PDSEL1_U2MODE_bit at U2MODE.B2;
    sbit  PDSEL0_U2MODE_bit at U2MODE.B1;
    sbit  STSEL_U2MODE_bit at U2MODE.B0;

sfr atomic unsigned long   volatile U2STA            absolute 0xBF806210;
sfr unsigned long   volatile U2STACLR         absolute 0xBF806214;
sfr unsigned long   volatile U2STASET         absolute 0xBF806218;
sfr unsigned long   volatile U2STAINV         absolute 0xBF80621C;
    // U2STA bits
    sbit  ADM_EN_U2STA_bit at U2STA.B24;
    sbit  ADDR7_U2STA_bit at U2STA.B23;
    sbit  ADDR6_U2STA_bit at U2STA.B22;
    sbit  ADDR5_U2STA_bit at U2STA.B21;
    sbit  ADDR4_U2STA_bit at U2STA.B20;
    sbit  ADDR3_U2STA_bit at U2STA.B19;
    sbit  ADDR2_U2STA_bit at U2STA.B18;
    sbit  ADDR1_U2STA_bit at U2STA.B17;
    sbit  ADDR0_U2STA_bit at U2STA.B16;
    sbit  UTXISEL1_U2STA_bit at U2STA.B15;
    sbit  UTXISEL0_U2STA_bit at U2STA.B14;
    sbit  UTXINV_U2STA_bit at U2STA.B13;
    sbit  URXEN_U2STA_bit at U2STA.B12;
    sbit  UTXBRK_U2STA_bit at U2STA.B11;
    sbit  UTXEN_U2STA_bit at U2STA.B10;
    sbit  UTXBF_U2STA_bit at U2STA.B9;
    sbit  TRMT_U2STA_bit at U2STA.B8;
    sbit  URXISEL1_U2STA_bit at U2STA.B7;
    sbit  URXISEL0_U2STA_bit at U2STA.B6;
    sbit  ADDEN_U2STA_bit at U2STA.B5;
    sbit  RIDLE_U2STA_bit at U2STA.B4;
    sbit  PERR_U2STA_bit at U2STA.B3;
    sbit  FERR_U2STA_bit at U2STA.B2;
    sbit  OERR_U2STA_bit at U2STA.B1;
    sbit  URXDA_U2STA_bit at U2STA.B0;

sfr unsigned long            U2TXREG          absolute 0xBF806220;
    // U2TXREG bits
    const register unsigned short int U2TXREG8 = 8;
    sbit  U2TXREG8_bit at U2TXREG.B8;
    const register unsigned short int U2TXREG7 = 7;
    sbit  U2TXREG7_bit at U2TXREG.B7;
    const register unsigned short int U2TXREG6 = 6;
    sbit  U2TXREG6_bit at U2TXREG.B6;
    const register unsigned short int U2TXREG5 = 5;
    sbit  U2TXREG5_bit at U2TXREG.B5;
    const register unsigned short int U2TXREG4 = 4;
    sbit  U2TXREG4_bit at U2TXREG.B4;
    const register unsigned short int U2TXREG3 = 3;
    sbit  U2TXREG3_bit at U2TXREG.B3;
    const register unsigned short int U2TXREG2 = 2;
    sbit  U2TXREG2_bit at U2TXREG.B2;
    const register unsigned short int U2TXREG1 = 1;
    sbit  U2TXREG1_bit at U2TXREG.B1;
    const register unsigned short int U2TXREG0 = 0;
    sbit  U2TXREG0_bit at U2TXREG.B0;

sfr unsigned long   volatile U2RXREG          absolute 0xBF806230;
    // U2RXREG bits
    const register unsigned short int U2RXREG8 = 8;
    sbit  U2RXREG8_bit at U2RXREG.B8;
    const register unsigned short int U2RXREG7 = 7;
    sbit  U2RXREG7_bit at U2RXREG.B7;
    const register unsigned short int U2RXREG6 = 6;
    sbit  U2RXREG6_bit at U2RXREG.B6;
    const register unsigned short int U2RXREG5 = 5;
    sbit  U2RXREG5_bit at U2RXREG.B5;
    const register unsigned short int U2RXREG4 = 4;
    sbit  U2RXREG4_bit at U2RXREG.B4;
    const register unsigned short int U2RXREG3 = 3;
    sbit  U2RXREG3_bit at U2RXREG.B3;
    const register unsigned short int U2RXREG2 = 2;
    sbit  U2RXREG2_bit at U2RXREG.B2;
    const register unsigned short int U2RXREG1 = 1;
    sbit  U2RXREG1_bit at U2RXREG.B1;
    const register unsigned short int U2RXREG0 = 0;
    sbit  U2RXREG0_bit at U2RXREG.B0;

sfr atomic unsigned long            U2BRG            absolute 0xBF806240;
sfr unsigned long            U6RG             absolute 0xBF806240;
sfr unsigned long   volatile U2BRGCLR         absolute 0xBF806244;
sfr unsigned long   volatile U2BRGSET         absolute 0xBF806248;
sfr unsigned long   volatile U2BRGINV         absolute 0xBF80624C;
    // U2BRG bits
    sbit  BRG15_U2BRG_bit at U2BRG.B15;
    sbit  BRG14_U2BRG_bit at U2BRG.B14;
    sbit  BRG13_U2BRG_bit at U2BRG.B13;
    sbit  BRG12_U2BRG_bit at U2BRG.B12;
    sbit  BRG11_U2BRG_bit at U2BRG.B11;
    sbit  BRG10_U2BRG_bit at U2BRG.B10;
    sbit  BRG9_U2BRG_bit at U2BRG.B9;
    sbit  BRG8_U2BRG_bit at U2BRG.B8;
    sbit  BRG7_U2BRG_bit at U2BRG.B7;
    sbit  BRG6_U2BRG_bit at U2BRG.B6;
    sbit  BRG5_U2BRG_bit at U2BRG.B5;
    sbit  BRG4_U2BRG_bit at U2BRG.B4;
    sbit  BRG3_U2BRG_bit at U2BRG.B3;
    sbit  BRG2_U2BRG_bit at U2BRG.B2;
    sbit  BRG1_U2BRG_bit at U2BRG.B1;
    sbit  BRG0_U2BRG_bit at U2BRG.B0;

sfr atomic unsigned long            PMCON            absolute 0xBF807000;
sfr unsigned long   volatile PMCONCLR         absolute 0xBF807004;
sfr unsigned long   volatile PMCONSET         absolute 0xBF807008;
sfr unsigned long   volatile PMCONINV         absolute 0xBF80700C;
    // PMCON bits
    sbit  ON__PMCON_bit at PMCON.B15;
    sbit  SIDL_PMCON_bit at PMCON.B13;
    const register unsigned short int ADRMUX1 = 12;
    sbit  ADRMUX1_bit at PMCON.B12;
    const register unsigned short int ADRMUX0 = 11;
    sbit  ADRMUX0_bit at PMCON.B11;
    const register unsigned short int PMPTTL = 10;
    sbit  PMPTTL_bit at PMCON.B10;
    const register unsigned short int PTWREN = 9;
    sbit  PTWREN_bit at PMCON.B9;
    const register unsigned short int PTRDEN = 8;
    sbit  PTRDEN_bit at PMCON.B8;
    const register unsigned short int CSF1 = 7;
    sbit  CSF1_bit at PMCON.B7;
    const register unsigned short int CSF0 = 6;
    sbit  CSF0_bit at PMCON.B6;
    const register unsigned short int ALP = 5;
    sbit  ALP_bit at PMCON.B5;
    const register unsigned short int CS1P = 3;
    sbit  CS1P_bit at PMCON.B3;
    const register unsigned short int WRSP = 1;
    sbit  WRSP_bit at PMCON.B1;
    const register unsigned short int RDSP = 0;
    sbit  RDSP_bit at PMCON.B0;

sfr atomic unsigned long   volatile PMMODE           absolute 0xBF807010;
sfr unsigned long   volatile PMMODECLR        absolute 0xBF807014;
sfr unsigned long   volatile PMMODESET        absolute 0xBF807018;
sfr unsigned long   volatile PMMODEINV        absolute 0xBF80701C;
    // PMMODE bits
    const register unsigned short int BUSY = 15;
    sbit  BUSY_bit at PMMODE.B15;
    const register unsigned short int IRQM1 = 14;
    sbit  IRQM1_bit at PMMODE.B14;
    const register unsigned short int IRQM0 = 13;
    sbit  IRQM0_bit at PMMODE.B13;
    const register unsigned short int INCM1 = 12;
    sbit  INCM1_bit at PMMODE.B12;
    const register unsigned short int INCM0 = 11;
    sbit  INCM0_bit at PMMODE.B11;
    const register unsigned short int MODE1 = 9;
    sbit  MODE1_bit at PMMODE.B9;
    const register unsigned short int MODE0 = 8;
    sbit  MODE0_bit at PMMODE.B8;
    const register unsigned short int WAITB1 = 7;
    sbit  WAITB1_bit at PMMODE.B7;
    const register unsigned short int WAITB0 = 6;
    sbit  WAITB0_bit at PMMODE.B6;
    const register unsigned short int WAITM3 = 5;
    sbit  WAITM3_bit at PMMODE.B5;
    const register unsigned short int WAITM2 = 4;
    sbit  WAITM2_bit at PMMODE.B4;
    const register unsigned short int WAITM1 = 3;
    sbit  WAITM1_bit at PMMODE.B3;
    const register unsigned short int WAITM0 = 2;
    sbit  WAITM0_bit at PMMODE.B2;
    const register unsigned short int WAITE1 = 1;
    sbit  WAITE1_bit at PMMODE.B1;
    const register unsigned short int WAITE0 = 0;
    sbit  WAITE0_bit at PMMODE.B0;

sfr atomic unsigned long   volatile PMADDR           absolute 0xBF807020;
sfr unsigned long   volatile PMADDRCLR        absolute 0xBF807024;
sfr unsigned long   volatile PMADDRSET        absolute 0xBF807028;
sfr unsigned long   volatile PMADDRINV        absolute 0xBF80702C;
    // PMADDR bits
    const register unsigned short int CS1 = 15;
    sbit  CS1_bit at PMADDR.B15;
    const register unsigned short int CS0 = 14;
    sbit  CS0_bit at PMADDR.B14;
    const register unsigned short int ADDR13 = 13;
    sbit  ADDR13_bit at PMADDR.B13;
    const register unsigned short int ADDR12 = 12;
    sbit  ADDR12_bit at PMADDR.B12;
    const register unsigned short int ADDR11 = 11;
    sbit  ADDR11_bit at PMADDR.B11;
    const register unsigned short int ADDR10 = 10;
    sbit  ADDR10_bit at PMADDR.B10;
    const register unsigned short int ADDR9 = 9;
    sbit  ADDR9_bit at PMADDR.B9;
    const register unsigned short int ADDR8 = 8;
    sbit  ADDR8_bit at PMADDR.B8;
    sbit  ADDR7_PMADDR_bit at PMADDR.B7;
    sbit  ADDR6_PMADDR_bit at PMADDR.B6;
    sbit  ADDR5_PMADDR_bit at PMADDR.B5;
    sbit  ADDR4_PMADDR_bit at PMADDR.B4;
    sbit  ADDR3_PMADDR_bit at PMADDR.B3;
    sbit  ADDR2_PMADDR_bit at PMADDR.B2;
    sbit  ADDR1_PMADDR_bit at PMADDR.B1;
    sbit  ADDR0_PMADDR_bit at PMADDR.B0;

sfr atomic unsigned long   volatile PMDOUT           absolute 0xBF807030;
sfr unsigned long   volatile PMDOUTCLR        absolute 0xBF807034;
sfr unsigned long   volatile PMDOUTSET        absolute 0xBF807038;
sfr unsigned long   volatile PMDOUTINV        absolute 0xBF80703C;
    // PMDOUT bits
    const register unsigned short int DATAOUT31 = 31;
    sbit  DATAOUT31_bit at PMDOUT.B31;
    const register unsigned short int DATAOUT30 = 30;
    sbit  DATAOUT30_bit at PMDOUT.B30;
    const register unsigned short int DATAOUT29 = 29;
    sbit  DATAOUT29_bit at PMDOUT.B29;
    const register unsigned short int DATAOUT28 = 28;
    sbit  DATAOUT28_bit at PMDOUT.B28;
    const register unsigned short int DATAOUT27 = 27;
    sbit  DATAOUT27_bit at PMDOUT.B27;
    const register unsigned short int DATAOUT26 = 26;
    sbit  DATAOUT26_bit at PMDOUT.B26;
    const register unsigned short int DATAOUT25 = 25;
    sbit  DATAOUT25_bit at PMDOUT.B25;
    const register unsigned short int DATAOUT24 = 24;
    sbit  DATAOUT24_bit at PMDOUT.B24;
    const register unsigned short int DATAOUT23 = 23;
    sbit  DATAOUT23_bit at PMDOUT.B23;
    const register unsigned short int DATAOUT22 = 22;
    sbit  DATAOUT22_bit at PMDOUT.B22;
    const register unsigned short int DATAOUT21 = 21;
    sbit  DATAOUT21_bit at PMDOUT.B21;
    const register unsigned short int DATAOUT20 = 20;
    sbit  DATAOUT20_bit at PMDOUT.B20;
    const register unsigned short int DATAOUT19 = 19;
    sbit  DATAOUT19_bit at PMDOUT.B19;
    const register unsigned short int DATAOUT18 = 18;
    sbit  DATAOUT18_bit at PMDOUT.B18;
    const register unsigned short int DATAOUT17 = 17;
    sbit  DATAOUT17_bit at PMDOUT.B17;
    const register unsigned short int DATAOUT16 = 16;
    sbit  DATAOUT16_bit at PMDOUT.B16;
    const register unsigned short int DATAOUT15 = 15;
    sbit  DATAOUT15_bit at PMDOUT.B15;
    const register unsigned short int DATAOUT14 = 14;
    sbit  DATAOUT14_bit at PMDOUT.B14;
    const register unsigned short int DATAOUT13 = 13;
    sbit  DATAOUT13_bit at PMDOUT.B13;
    const register unsigned short int DATAOUT12 = 12;
    sbit  DATAOUT12_bit at PMDOUT.B12;
    const register unsigned short int DATAOUT11 = 11;
    sbit  DATAOUT11_bit at PMDOUT.B11;
    const register unsigned short int DATAOUT10 = 10;
    sbit  DATAOUT10_bit at PMDOUT.B10;
    const register unsigned short int DATAOUT9 = 9;
    sbit  DATAOUT9_bit at PMDOUT.B9;
    const register unsigned short int DATAOUT8 = 8;
    sbit  DATAOUT8_bit at PMDOUT.B8;
    const register unsigned short int DATAOUT7 = 7;
    sbit  DATAOUT7_bit at PMDOUT.B7;
    const register unsigned short int DATAOUT6 = 6;
    sbit  DATAOUT6_bit at PMDOUT.B6;
    const register unsigned short int DATAOUT5 = 5;
    sbit  DATAOUT5_bit at PMDOUT.B5;
    const register unsigned short int DATAOUT4 = 4;
    sbit  DATAOUT4_bit at PMDOUT.B4;
    const register unsigned short int DATAOUT3 = 3;
    sbit  DATAOUT3_bit at PMDOUT.B3;
    const register unsigned short int DATAOUT2 = 2;
    sbit  DATAOUT2_bit at PMDOUT.B2;
    const register unsigned short int DATAOUT1 = 1;
    sbit  DATAOUT1_bit at PMDOUT.B1;
    const register unsigned short int DATAOUT0 = 0;
    sbit  DATAOUT0_bit at PMDOUT.B0;

sfr atomic unsigned long   volatile PMDIN            absolute 0xBF807040;
sfr unsigned long   volatile PMDINCLR         absolute 0xBF807044;
sfr unsigned long   volatile PMDINSET         absolute 0xBF807048;
sfr unsigned long   volatile PMDININV         absolute 0xBF80704C;
    // PMDIN bits
    const register unsigned short int DATAIN31 = 31;
    sbit  DATAIN31_bit at PMDIN.B31;
    const register unsigned short int DATAIN30 = 30;
    sbit  DATAIN30_bit at PMDIN.B30;
    const register unsigned short int DATAIN29 = 29;
    sbit  DATAIN29_bit at PMDIN.B29;
    const register unsigned short int DATAIN28 = 28;
    sbit  DATAIN28_bit at PMDIN.B28;
    const register unsigned short int DATAIN27 = 27;
    sbit  DATAIN27_bit at PMDIN.B27;
    const register unsigned short int DATAIN26 = 26;
    sbit  DATAIN26_bit at PMDIN.B26;
    const register unsigned short int DATAIN25 = 25;
    sbit  DATAIN25_bit at PMDIN.B25;
    const register unsigned short int DATAIN24 = 24;
    sbit  DATAIN24_bit at PMDIN.B24;
    const register unsigned short int DATAIN23 = 23;
    sbit  DATAIN23_bit at PMDIN.B23;
    const register unsigned short int DATAIN22 = 22;
    sbit  DATAIN22_bit at PMDIN.B22;
    const register unsigned short int DATAIN21 = 21;
    sbit  DATAIN21_bit at PMDIN.B21;
    const register unsigned short int DATAIN20 = 20;
    sbit  DATAIN20_bit at PMDIN.B20;
    const register unsigned short int DATAIN19 = 19;
    sbit  DATAIN19_bit at PMDIN.B19;
    const register unsigned short int DATAIN18 = 18;
    sbit  DATAIN18_bit at PMDIN.B18;
    const register unsigned short int DATAIN17 = 17;
    sbit  DATAIN17_bit at PMDIN.B17;
    const register unsigned short int DATAIN16 = 16;
    sbit  DATAIN16_bit at PMDIN.B16;
    const register unsigned short int DATAIN15 = 15;
    sbit  DATAIN15_bit at PMDIN.B15;
    const register unsigned short int DATAIN14 = 14;
    sbit  DATAIN14_bit at PMDIN.B14;
    const register unsigned short int DATAIN13 = 13;
    sbit  DATAIN13_bit at PMDIN.B13;
    const register unsigned short int DATAIN12 = 12;
    sbit  DATAIN12_bit at PMDIN.B12;
    const register unsigned short int DATAIN11 = 11;
    sbit  DATAIN11_bit at PMDIN.B11;
    const register unsigned short int DATAIN10 = 10;
    sbit  DATAIN10_bit at PMDIN.B10;
    const register unsigned short int DATAIN9 = 9;
    sbit  DATAIN9_bit at PMDIN.B9;
    const register unsigned short int DATAIN8 = 8;
    sbit  DATAIN8_bit at PMDIN.B8;
    const register unsigned short int DATAIN7 = 7;
    sbit  DATAIN7_bit at PMDIN.B7;
    const register unsigned short int DATAIN6 = 6;
    sbit  DATAIN6_bit at PMDIN.B6;
    const register unsigned short int DATAIN5 = 5;
    sbit  DATAIN5_bit at PMDIN.B5;
    const register unsigned short int DATAIN4 = 4;
    sbit  DATAIN4_bit at PMDIN.B4;
    const register unsigned short int DATAIN3 = 3;
    sbit  DATAIN3_bit at PMDIN.B3;
    const register unsigned short int DATAIN2 = 2;
    sbit  DATAIN2_bit at PMDIN.B2;
    const register unsigned short int DATAIN1 = 1;
    sbit  DATAIN1_bit at PMDIN.B1;
    const register unsigned short int DATAIN0 = 0;
    sbit  DATAIN0_bit at PMDIN.B0;

sfr atomic unsigned long   volatile PMAEN            absolute 0xBF807050;
sfr unsigned long   volatile PMAENCLR         absolute 0xBF807054;
sfr unsigned long   volatile PMAENSET         absolute 0xBF807058;
sfr unsigned long   volatile PMAENINV         absolute 0xBF80705C;
    // PMAEN bits
    const register unsigned short int PTEN15 = 15;
    sbit  PTEN15_bit at PMAEN.B15;
    const register unsigned short int PTEN14 = 14;
    sbit  PTEN14_bit at PMAEN.B14;
    const register unsigned short int PTEN13 = 13;
    sbit  PTEN13_bit at PMAEN.B13;
    const register unsigned short int PTEN12 = 12;
    sbit  PTEN12_bit at PMAEN.B12;
    const register unsigned short int PTEN11 = 11;
    sbit  PTEN11_bit at PMAEN.B11;
    const register unsigned short int PTEN10 = 10;
    sbit  PTEN10_bit at PMAEN.B10;
    const register unsigned short int PTEN9 = 9;
    sbit  PTEN9_bit at PMAEN.B9;
    const register unsigned short int PTEN8 = 8;
    sbit  PTEN8_bit at PMAEN.B8;
    const register unsigned short int PTEN7 = 7;
    sbit  PTEN7_bit at PMAEN.B7;
    const register unsigned short int PTEN6 = 6;
    sbit  PTEN6_bit at PMAEN.B6;
    const register unsigned short int PTEN5 = 5;
    sbit  PTEN5_bit at PMAEN.B5;
    const register unsigned short int PTEN4 = 4;
    sbit  PTEN4_bit at PMAEN.B4;
    const register unsigned short int PTEN3 = 3;
    sbit  PTEN3_bit at PMAEN.B3;
    const register unsigned short int PTEN2 = 2;
    sbit  PTEN2_bit at PMAEN.B2;
    const register unsigned short int PTEN1 = 1;
    sbit  PTEN1_bit at PMAEN.B1;
    const register unsigned short int PTEN0 = 0;
    sbit  PTEN0_bit at PMAEN.B0;

sfr atomic unsigned long   volatile PMSTAT           absolute 0xBF807060;
sfr unsigned long   volatile PMSTATCLR        absolute 0xBF807064;
sfr unsigned long   volatile PMSTATSET        absolute 0xBF807068;
sfr unsigned long   volatile PMSTATINV        absolute 0xBF80706C;
    // PMSTAT bits
    const register unsigned short int IBF = 15;
    sbit  IBF_bit at PMSTAT.B15;
    const register unsigned short int IBOV = 14;
    sbit  IBOV_bit at PMSTAT.B14;
    const register unsigned short int IB3F = 11;
    sbit  IB3F_bit at PMSTAT.B11;
    const register unsigned short int IB2F = 10;
    sbit  IB2F_bit at PMSTAT.B10;
    const register unsigned short int IB1F = 9;
    sbit  IB1F_bit at PMSTAT.B9;
    const register unsigned short int IB0F = 8;
    sbit  IB0F_bit at PMSTAT.B8;
    const register unsigned short int OBE = 7;
    sbit  OBE_bit at PMSTAT.B7;
    const register unsigned short int OBUF = 6;
    sbit  OBUF_bit at PMSTAT.B6;
    const register unsigned short int OB3E = 3;
    sbit  OB3E_bit at PMSTAT.B3;
    const register unsigned short int OB2E = 2;
    sbit  OB2E_bit at PMSTAT.B2;
    const register unsigned short int OB1E = 1;
    sbit  OB1E_bit at PMSTAT.B1;
    const register unsigned short int OB0E = 0;
    sbit  OB0E_bit at PMSTAT.B0;

sfr atomic unsigned long   volatile AD1CON1          absolute 0xBF809000;
sfr unsigned long   volatile AD1CON1CLR       absolute 0xBF809004;
sfr unsigned long   volatile AD1CON1SET       absolute 0xBF809008;
sfr unsigned long   volatile AD1CON1INV       absolute 0xBF80900C;
    // AD1CON1 bits
    sbit  ON__AD1CON1_bit at AD1CON1.B15;
    sbit  SIDL_AD1CON1_bit at AD1CON1.B13;
    const register unsigned short int FORM2 = 10;
    sbit  FORM2_bit at AD1CON1.B10;
    const register unsigned short int FORM1 = 9;
    sbit  FORM1_bit at AD1CON1.B9;
    const register unsigned short int FORM0 = 8;
    sbit  FORM0_bit at AD1CON1.B8;
    const register unsigned short int SSRC2 = 7;
    sbit  SSRC2_bit at AD1CON1.B7;
    const register unsigned short int SSRC1 = 6;
    sbit  SSRC1_bit at AD1CON1.B6;
    const register unsigned short int SSRC0 = 5;
    sbit  SSRC0_bit at AD1CON1.B5;
    const register unsigned short int CLRASAM = 4;
    sbit  CLRASAM_bit at AD1CON1.B4;
    const register unsigned short int ASAM = 2;
    sbit  ASAM_bit at AD1CON1.B2;
    const register unsigned short int SAMP = 1;
    sbit  SAMP_bit at AD1CON1.B1;
    const register unsigned short int DONE = 0;
    sbit  DONE_bit at AD1CON1.B0;

sfr atomic unsigned long   volatile AD1CON2          absolute 0xBF809010;
sfr unsigned long   volatile AD1CON2CLR       absolute 0xBF809014;
sfr unsigned long   volatile AD1CON2SET       absolute 0xBF809018;
sfr unsigned long   volatile AD1CON2INV       absolute 0xBF80901C;
    // AD1CON2 bits
    const register unsigned short int VCFG2 = 15;
    sbit  VCFG2_bit at AD1CON2.B15;
    const register unsigned short int VCFG1 = 14;
    sbit  VCFG1_bit at AD1CON2.B14;
    const register unsigned short int VCFG0 = 13;
    sbit  VCFG0_bit at AD1CON2.B13;
    const register unsigned short int OFFCAL = 12;
    sbit  OFFCAL_bit at AD1CON2.B12;
    const register unsigned short int CSCNA = 10;
    sbit  CSCNA_bit at AD1CON2.B10;
    const register unsigned short int BUFS = 7;
    sbit  BUFS_bit at AD1CON2.B7;
    const register unsigned short int SMPI3 = 5;
    sbit  SMPI3_bit at AD1CON2.B5;
    const register unsigned short int SMPI2 = 4;
    sbit  SMPI2_bit at AD1CON2.B4;
    const register unsigned short int SMPI1 = 3;
    sbit  SMPI1_bit at AD1CON2.B3;
    const register unsigned short int SMPI0 = 2;
    sbit  SMPI0_bit at AD1CON2.B2;
    const register unsigned short int BUFM = 1;
    sbit  BUFM_bit at AD1CON2.B1;
    const register unsigned short int ALTS = 0;
    sbit  ALTS_bit at AD1CON2.B0;

sfr atomic unsigned long   volatile AD1CON3          absolute 0xBF809020;
sfr unsigned long   volatile AD1CON3CLR       absolute 0xBF809024;
sfr unsigned long   volatile AD1CON3SET       absolute 0xBF809028;
sfr unsigned long   volatile AD1CON3INV       absolute 0xBF80902C;
    // AD1CON3 bits
    const register unsigned short int ADRC = 15;
    sbit  ADRC_bit at AD1CON3.B15;
    const register unsigned short int SAMC4 = 12;
    sbit  SAMC4_bit at AD1CON3.B12;
    const register unsigned short int SAMC3 = 11;
    sbit  SAMC3_bit at AD1CON3.B11;
    const register unsigned short int SAMC2 = 10;
    sbit  SAMC2_bit at AD1CON3.B10;
    const register unsigned short int SAMC1 = 9;
    sbit  SAMC1_bit at AD1CON3.B9;
    const register unsigned short int SAMC0 = 8;
    sbit  SAMC0_bit at AD1CON3.B8;
    const register unsigned short int ADCS7 = 7;
    sbit  ADCS7_bit at AD1CON3.B7;
    const register unsigned short int ADCS6 = 6;
    sbit  ADCS6_bit at AD1CON3.B6;
    const register unsigned short int ADCS5 = 5;
    sbit  ADCS5_bit at AD1CON3.B5;
    const register unsigned short int ADCS4 = 4;
    sbit  ADCS4_bit at AD1CON3.B4;
    const register unsigned short int ADCS3 = 3;
    sbit  ADCS3_bit at AD1CON3.B3;
    const register unsigned short int ADCS2 = 2;
    sbit  ADCS2_bit at AD1CON3.B2;
    const register unsigned short int ADCS1 = 1;
    sbit  ADCS1_bit at AD1CON3.B1;
    const register unsigned short int ADCS0 = 0;
    sbit  ADCS0_bit at AD1CON3.B0;

sfr atomic unsigned long            AD1CHS           absolute 0xBF809040;
sfr unsigned long   volatile AD1CHSCLR        absolute 0xBF809044;
sfr unsigned long   volatile AD1CHSSET        absolute 0xBF809048;
sfr unsigned long   volatile AD1CHSINV        absolute 0xBF80904C;
    // AD1CHS bits
    const register unsigned short int CH0NB = 31;
    sbit  CH0NB_bit at AD1CHS.B31;
    const register unsigned short int CH0SB3 = 27;
    sbit  CH0SB3_bit at AD1CHS.B27;
    const register unsigned short int CH0SB2 = 26;
    sbit  CH0SB2_bit at AD1CHS.B26;
    const register unsigned short int CH0SB1 = 25;
    sbit  CH0SB1_bit at AD1CHS.B25;
    const register unsigned short int CH0SB0 = 24;
    sbit  CH0SB0_bit at AD1CHS.B24;
    const register unsigned short int CH0NA = 23;
    sbit  CH0NA_bit at AD1CHS.B23;
    const register unsigned short int CH0SA3 = 19;
    sbit  CH0SA3_bit at AD1CHS.B19;
    const register unsigned short int CH0SA2 = 18;
    sbit  CH0SA2_bit at AD1CHS.B18;
    const register unsigned short int CH0SA1 = 17;
    sbit  CH0SA1_bit at AD1CHS.B17;
    const register unsigned short int CH0SA0 = 16;
    sbit  CH0SA0_bit at AD1CHS.B16;

sfr atomic unsigned long            AD1CSSL          absolute 0xBF809050;
sfr unsigned long   volatile AD1CSSLCLR       absolute 0xBF809054;
sfr unsigned long   volatile AD1CSSLSET       absolute 0xBF809058;
sfr unsigned long   volatile AD1CSSLINV       absolute 0xBF80905C;
    // AD1CSSL bits
    const register unsigned short int CSSL15 = 15;
    sbit  CSSL15_bit at AD1CSSL.B15;
    const register unsigned short int CSSL14 = 14;
    sbit  CSSL14_bit at AD1CSSL.B14;
    const register unsigned short int CSSL13 = 13;
    sbit  CSSL13_bit at AD1CSSL.B13;
    const register unsigned short int CSSL12 = 12;
    sbit  CSSL12_bit at AD1CSSL.B12;
    const register unsigned short int CSSL11 = 11;
    sbit  CSSL11_bit at AD1CSSL.B11;
    const register unsigned short int CSSL10 = 10;
    sbit  CSSL10_bit at AD1CSSL.B10;
    const register unsigned short int CSSL9 = 9;
    sbit  CSSL9_bit at AD1CSSL.B9;
    const register unsigned short int CSSL8 = 8;
    sbit  CSSL8_bit at AD1CSSL.B8;
    const register unsigned short int CSSL7 = 7;
    sbit  CSSL7_bit at AD1CSSL.B7;
    const register unsigned short int CSSL6 = 6;
    sbit  CSSL6_bit at AD1CSSL.B6;
    const register unsigned short int CSSL5 = 5;
    sbit  CSSL5_bit at AD1CSSL.B5;
    const register unsigned short int CSSL4 = 4;
    sbit  CSSL4_bit at AD1CSSL.B4;
    const register unsigned short int CSSL3 = 3;
    sbit  CSSL3_bit at AD1CSSL.B3;
    const register unsigned short int CSSL2 = 2;
    sbit  CSSL2_bit at AD1CSSL.B2;
    const register unsigned short int CSSL1 = 1;
    sbit  CSSL1_bit at AD1CSSL.B1;
    const register unsigned short int CSSL0 = 0;
    sbit  CSSL0_bit at AD1CSSL.B0;

sfr unsigned long   volatile ADC1BUF0         absolute 0xBF809070;
    // ADC1BUF0 bits
    const register unsigned short int ADC1BUF031 = 31;
    sbit  ADC1BUF031_bit at ADC1BUF0.B31;
    const register unsigned short int ADC1BUF030 = 30;
    sbit  ADC1BUF030_bit at ADC1BUF0.B30;
    const register unsigned short int ADC1BUF029 = 29;
    sbit  ADC1BUF029_bit at ADC1BUF0.B29;
    const register unsigned short int ADC1BUF028 = 28;
    sbit  ADC1BUF028_bit at ADC1BUF0.B28;
    const register unsigned short int ADC1BUF027 = 27;
    sbit  ADC1BUF027_bit at ADC1BUF0.B27;
    const register unsigned short int ADC1BUF026 = 26;
    sbit  ADC1BUF026_bit at ADC1BUF0.B26;
    const register unsigned short int ADC1BUF025 = 25;
    sbit  ADC1BUF025_bit at ADC1BUF0.B25;
    const register unsigned short int ADC1BUF024 = 24;
    sbit  ADC1BUF024_bit at ADC1BUF0.B24;
    const register unsigned short int ADC1BUF023 = 23;
    sbit  ADC1BUF023_bit at ADC1BUF0.B23;
    const register unsigned short int ADC1BUF022 = 22;
    sbit  ADC1BUF022_bit at ADC1BUF0.B22;
    const register unsigned short int ADC1BUF021 = 21;
    sbit  ADC1BUF021_bit at ADC1BUF0.B21;
    const register unsigned short int ADC1BUF020 = 20;
    sbit  ADC1BUF020_bit at ADC1BUF0.B20;
    const register unsigned short int ADC1BUF019 = 19;
    sbit  ADC1BUF019_bit at ADC1BUF0.B19;
    const register unsigned short int ADC1BUF018 = 18;
    sbit  ADC1BUF018_bit at ADC1BUF0.B18;
    const register unsigned short int ADC1BUF017 = 17;
    sbit  ADC1BUF017_bit at ADC1BUF0.B17;
    const register unsigned short int ADC1BUF016 = 16;
    sbit  ADC1BUF016_bit at ADC1BUF0.B16;
    const register unsigned short int ADC1BUF015 = 15;
    sbit  ADC1BUF015_bit at ADC1BUF0.B15;
    const register unsigned short int ADC1BUF014 = 14;
    sbit  ADC1BUF014_bit at ADC1BUF0.B14;
    const register unsigned short int ADC1BUF013 = 13;
    sbit  ADC1BUF013_bit at ADC1BUF0.B13;
    const register unsigned short int ADC1BUF012 = 12;
    sbit  ADC1BUF012_bit at ADC1BUF0.B12;
    const register unsigned short int ADC1BUF011 = 11;
    sbit  ADC1BUF011_bit at ADC1BUF0.B11;
    const register unsigned short int ADC1BUF010 = 10;
    sbit  ADC1BUF010_bit at ADC1BUF0.B10;
    const register unsigned short int ADC1BUF09 = 9;
    sbit  ADC1BUF09_bit at ADC1BUF0.B9;
    const register unsigned short int ADC1BUF08 = 8;
    sbit  ADC1BUF08_bit at ADC1BUF0.B8;
    const register unsigned short int ADC1BUF07 = 7;
    sbit  ADC1BUF07_bit at ADC1BUF0.B7;
    const register unsigned short int ADC1BUF06 = 6;
    sbit  ADC1BUF06_bit at ADC1BUF0.B6;
    const register unsigned short int ADC1BUF05 = 5;
    sbit  ADC1BUF05_bit at ADC1BUF0.B5;
    const register unsigned short int ADC1BUF04 = 4;
    sbit  ADC1BUF04_bit at ADC1BUF0.B4;
    const register unsigned short int ADC1BUF03 = 3;
    sbit  ADC1BUF03_bit at ADC1BUF0.B3;
    const register unsigned short int ADC1BUF02 = 2;
    sbit  ADC1BUF02_bit at ADC1BUF0.B2;
    const register unsigned short int ADC1BUF01 = 1;
    sbit  ADC1BUF01_bit at ADC1BUF0.B1;
    const register unsigned short int ADC1BUF00 = 0;
    sbit  ADC1BUF00_bit at ADC1BUF0.B0;

sfr unsigned long   volatile ADC1BUF1         absolute 0xBF809080;
    // ADC1BUF1 bits
    const register unsigned short int ADC1BUF131 = 31;
    sbit  ADC1BUF131_bit at ADC1BUF1.B31;
    const register unsigned short int ADC1BUF130 = 30;
    sbit  ADC1BUF130_bit at ADC1BUF1.B30;
    const register unsigned short int ADC1BUF129 = 29;
    sbit  ADC1BUF129_bit at ADC1BUF1.B29;
    const register unsigned short int ADC1BUF128 = 28;
    sbit  ADC1BUF128_bit at ADC1BUF1.B28;
    const register unsigned short int ADC1BUF127 = 27;
    sbit  ADC1BUF127_bit at ADC1BUF1.B27;
    const register unsigned short int ADC1BUF126 = 26;
    sbit  ADC1BUF126_bit at ADC1BUF1.B26;
    const register unsigned short int ADC1BUF125 = 25;
    sbit  ADC1BUF125_bit at ADC1BUF1.B25;
    const register unsigned short int ADC1BUF124 = 24;
    sbit  ADC1BUF124_bit at ADC1BUF1.B24;
    const register unsigned short int ADC1BUF123 = 23;
    sbit  ADC1BUF123_bit at ADC1BUF1.B23;
    const register unsigned short int ADC1BUF122 = 22;
    sbit  ADC1BUF122_bit at ADC1BUF1.B22;
    const register unsigned short int ADC1BUF121 = 21;
    sbit  ADC1BUF121_bit at ADC1BUF1.B21;
    const register unsigned short int ADC1BUF120 = 20;
    sbit  ADC1BUF120_bit at ADC1BUF1.B20;
    const register unsigned short int ADC1BUF119 = 19;
    sbit  ADC1BUF119_bit at ADC1BUF1.B19;
    const register unsigned short int ADC1BUF118 = 18;
    sbit  ADC1BUF118_bit at ADC1BUF1.B18;
    const register unsigned short int ADC1BUF117 = 17;
    sbit  ADC1BUF117_bit at ADC1BUF1.B17;
    const register unsigned short int ADC1BUF116 = 16;
    sbit  ADC1BUF116_bit at ADC1BUF1.B16;
    const register unsigned short int ADC1BUF115 = 15;
    sbit  ADC1BUF115_bit at ADC1BUF1.B15;
    const register unsigned short int ADC1BUF114 = 14;
    sbit  ADC1BUF114_bit at ADC1BUF1.B14;
    const register unsigned short int ADC1BUF113 = 13;
    sbit  ADC1BUF113_bit at ADC1BUF1.B13;
    const register unsigned short int ADC1BUF112 = 12;
    sbit  ADC1BUF112_bit at ADC1BUF1.B12;
    const register unsigned short int ADC1BUF111 = 11;
    sbit  ADC1BUF111_bit at ADC1BUF1.B11;
    const register unsigned short int ADC1BUF110 = 10;
    sbit  ADC1BUF110_bit at ADC1BUF1.B10;
    const register unsigned short int ADC1BUF19 = 9;
    sbit  ADC1BUF19_bit at ADC1BUF1.B9;
    const register unsigned short int ADC1BUF18 = 8;
    sbit  ADC1BUF18_bit at ADC1BUF1.B8;
    const register unsigned short int ADC1BUF17 = 7;
    sbit  ADC1BUF17_bit at ADC1BUF1.B7;
    const register unsigned short int ADC1BUF16 = 6;
    sbit  ADC1BUF16_bit at ADC1BUF1.B6;
    const register unsigned short int ADC1BUF15 = 5;
    sbit  ADC1BUF15_bit at ADC1BUF1.B5;
    const register unsigned short int ADC1BUF14 = 4;
    sbit  ADC1BUF14_bit at ADC1BUF1.B4;
    const register unsigned short int ADC1BUF13 = 3;
    sbit  ADC1BUF13_bit at ADC1BUF1.B3;
    const register unsigned short int ADC1BUF12 = 2;
    sbit  ADC1BUF12_bit at ADC1BUF1.B2;
    const register unsigned short int ADC1BUF11 = 1;
    sbit  ADC1BUF11_bit at ADC1BUF1.B1;
    const register unsigned short int ADC1BUF10 = 0;
    sbit  ADC1BUF10_bit at ADC1BUF1.B0;

sfr unsigned long   volatile ADC1BUF2         absolute 0xBF809090;
    // ADC1BUF2 bits
    const register unsigned short int ADC1BUF231 = 31;
    sbit  ADC1BUF231_bit at ADC1BUF2.B31;
    const register unsigned short int ADC1BUF230 = 30;
    sbit  ADC1BUF230_bit at ADC1BUF2.B30;
    const register unsigned short int ADC1BUF229 = 29;
    sbit  ADC1BUF229_bit at ADC1BUF2.B29;
    const register unsigned short int ADC1BUF228 = 28;
    sbit  ADC1BUF228_bit at ADC1BUF2.B28;
    const register unsigned short int ADC1BUF227 = 27;
    sbit  ADC1BUF227_bit at ADC1BUF2.B27;
    const register unsigned short int ADC1BUF226 = 26;
    sbit  ADC1BUF226_bit at ADC1BUF2.B26;
    const register unsigned short int ADC1BUF225 = 25;
    sbit  ADC1BUF225_bit at ADC1BUF2.B25;
    const register unsigned short int ADC1BUF224 = 24;
    sbit  ADC1BUF224_bit at ADC1BUF2.B24;
    const register unsigned short int ADC1BUF223 = 23;
    sbit  ADC1BUF223_bit at ADC1BUF2.B23;
    const register unsigned short int ADC1BUF222 = 22;
    sbit  ADC1BUF222_bit at ADC1BUF2.B22;
    const register unsigned short int ADC1BUF221 = 21;
    sbit  ADC1BUF221_bit at ADC1BUF2.B21;
    const register unsigned short int ADC1BUF220 = 20;
    sbit  ADC1BUF220_bit at ADC1BUF2.B20;
    const register unsigned short int ADC1BUF219 = 19;
    sbit  ADC1BUF219_bit at ADC1BUF2.B19;
    const register unsigned short int ADC1BUF218 = 18;
    sbit  ADC1BUF218_bit at ADC1BUF2.B18;
    const register unsigned short int ADC1BUF217 = 17;
    sbit  ADC1BUF217_bit at ADC1BUF2.B17;
    const register unsigned short int ADC1BUF216 = 16;
    sbit  ADC1BUF216_bit at ADC1BUF2.B16;
    const register unsigned short int ADC1BUF215 = 15;
    sbit  ADC1BUF215_bit at ADC1BUF2.B15;
    const register unsigned short int ADC1BUF214 = 14;
    sbit  ADC1BUF214_bit at ADC1BUF2.B14;
    const register unsigned short int ADC1BUF213 = 13;
    sbit  ADC1BUF213_bit at ADC1BUF2.B13;
    const register unsigned short int ADC1BUF212 = 12;
    sbit  ADC1BUF212_bit at ADC1BUF2.B12;
    const register unsigned short int ADC1BUF211 = 11;
    sbit  ADC1BUF211_bit at ADC1BUF2.B11;
    const register unsigned short int ADC1BUF210 = 10;
    sbit  ADC1BUF210_bit at ADC1BUF2.B10;
    const register unsigned short int ADC1BUF29 = 9;
    sbit  ADC1BUF29_bit at ADC1BUF2.B9;
    const register unsigned short int ADC1BUF28 = 8;
    sbit  ADC1BUF28_bit at ADC1BUF2.B8;
    const register unsigned short int ADC1BUF27 = 7;
    sbit  ADC1BUF27_bit at ADC1BUF2.B7;
    const register unsigned short int ADC1BUF26 = 6;
    sbit  ADC1BUF26_bit at ADC1BUF2.B6;
    const register unsigned short int ADC1BUF25 = 5;
    sbit  ADC1BUF25_bit at ADC1BUF2.B5;
    const register unsigned short int ADC1BUF24 = 4;
    sbit  ADC1BUF24_bit at ADC1BUF2.B4;
    const register unsigned short int ADC1BUF23 = 3;
    sbit  ADC1BUF23_bit at ADC1BUF2.B3;
    const register unsigned short int ADC1BUF22 = 2;
    sbit  ADC1BUF22_bit at ADC1BUF2.B2;
    const register unsigned short int ADC1BUF21 = 1;
    sbit  ADC1BUF21_bit at ADC1BUF2.B1;
    const register unsigned short int ADC1BUF20 = 0;
    sbit  ADC1BUF20_bit at ADC1BUF2.B0;

sfr unsigned long   volatile ADC1BUF3         absolute 0xBF8090A0;
    // ADC1BUF3 bits
    const register unsigned short int ADC1BUF331 = 31;
    sbit  ADC1BUF331_bit at ADC1BUF3.B31;
    const register unsigned short int ADC1BUF330 = 30;
    sbit  ADC1BUF330_bit at ADC1BUF3.B30;
    const register unsigned short int ADC1BUF329 = 29;
    sbit  ADC1BUF329_bit at ADC1BUF3.B29;
    const register unsigned short int ADC1BUF328 = 28;
    sbit  ADC1BUF328_bit at ADC1BUF3.B28;
    const register unsigned short int ADC1BUF327 = 27;
    sbit  ADC1BUF327_bit at ADC1BUF3.B27;
    const register unsigned short int ADC1BUF326 = 26;
    sbit  ADC1BUF326_bit at ADC1BUF3.B26;
    const register unsigned short int ADC1BUF325 = 25;
    sbit  ADC1BUF325_bit at ADC1BUF3.B25;
    const register unsigned short int ADC1BUF324 = 24;
    sbit  ADC1BUF324_bit at ADC1BUF3.B24;
    const register unsigned short int ADC1BUF323 = 23;
    sbit  ADC1BUF323_bit at ADC1BUF3.B23;
    const register unsigned short int ADC1BUF322 = 22;
    sbit  ADC1BUF322_bit at ADC1BUF3.B22;
    const register unsigned short int ADC1BUF321 = 21;
    sbit  ADC1BUF321_bit at ADC1BUF3.B21;
    const register unsigned short int ADC1BUF320 = 20;
    sbit  ADC1BUF320_bit at ADC1BUF3.B20;
    const register unsigned short int ADC1BUF319 = 19;
    sbit  ADC1BUF319_bit at ADC1BUF3.B19;
    const register unsigned short int ADC1BUF318 = 18;
    sbit  ADC1BUF318_bit at ADC1BUF3.B18;
    const register unsigned short int ADC1BUF317 = 17;
    sbit  ADC1BUF317_bit at ADC1BUF3.B17;
    const register unsigned short int ADC1BUF316 = 16;
    sbit  ADC1BUF316_bit at ADC1BUF3.B16;
    const register unsigned short int ADC1BUF315 = 15;
    sbit  ADC1BUF315_bit at ADC1BUF3.B15;
    const register unsigned short int ADC1BUF314 = 14;
    sbit  ADC1BUF314_bit at ADC1BUF3.B14;
    const register unsigned short int ADC1BUF313 = 13;
    sbit  ADC1BUF313_bit at ADC1BUF3.B13;
    const register unsigned short int ADC1BUF312 = 12;
    sbit  ADC1BUF312_bit at ADC1BUF3.B12;
    const register unsigned short int ADC1BUF311 = 11;
    sbit  ADC1BUF311_bit at ADC1BUF3.B11;
    const register unsigned short int ADC1BUF310 = 10;
    sbit  ADC1BUF310_bit at ADC1BUF3.B10;
    const register unsigned short int ADC1BUF39 = 9;
    sbit  ADC1BUF39_bit at ADC1BUF3.B9;
    const register unsigned short int ADC1BUF38 = 8;
    sbit  ADC1BUF38_bit at ADC1BUF3.B8;
    const register unsigned short int ADC1BUF37 = 7;
    sbit  ADC1BUF37_bit at ADC1BUF3.B7;
    const register unsigned short int ADC1BUF36 = 6;
    sbit  ADC1BUF36_bit at ADC1BUF3.B6;
    const register unsigned short int ADC1BUF35 = 5;
    sbit  ADC1BUF35_bit at ADC1BUF3.B5;
    const register unsigned short int ADC1BUF34 = 4;
    sbit  ADC1BUF34_bit at ADC1BUF3.B4;
    const register unsigned short int ADC1BUF33 = 3;
    sbit  ADC1BUF33_bit at ADC1BUF3.B3;
    const register unsigned short int ADC1BUF32 = 2;
    sbit  ADC1BUF32_bit at ADC1BUF3.B2;
    const register unsigned short int ADC1BUF31 = 1;
    sbit  ADC1BUF31_bit at ADC1BUF3.B1;
    const register unsigned short int ADC1BUF30 = 0;
    sbit  ADC1BUF30_bit at ADC1BUF3.B0;

sfr unsigned long   volatile ADC1BUF4         absolute 0xBF8090B0;
    // ADC1BUF4 bits
    const register unsigned short int ADC1BUF431 = 31;
    sbit  ADC1BUF431_bit at ADC1BUF4.B31;
    const register unsigned short int ADC1BUF430 = 30;
    sbit  ADC1BUF430_bit at ADC1BUF4.B30;
    const register unsigned short int ADC1BUF429 = 29;
    sbit  ADC1BUF429_bit at ADC1BUF4.B29;
    const register unsigned short int ADC1BUF428 = 28;
    sbit  ADC1BUF428_bit at ADC1BUF4.B28;
    const register unsigned short int ADC1BUF427 = 27;
    sbit  ADC1BUF427_bit at ADC1BUF4.B27;
    const register unsigned short int ADC1BUF426 = 26;
    sbit  ADC1BUF426_bit at ADC1BUF4.B26;
    const register unsigned short int ADC1BUF425 = 25;
    sbit  ADC1BUF425_bit at ADC1BUF4.B25;
    const register unsigned short int ADC1BUF424 = 24;
    sbit  ADC1BUF424_bit at ADC1BUF4.B24;
    const register unsigned short int ADC1BUF423 = 23;
    sbit  ADC1BUF423_bit at ADC1BUF4.B23;
    const register unsigned short int ADC1BUF422 = 22;
    sbit  ADC1BUF422_bit at ADC1BUF4.B22;
    const register unsigned short int ADC1BUF421 = 21;
    sbit  ADC1BUF421_bit at ADC1BUF4.B21;
    const register unsigned short int ADC1BUF420 = 20;
    sbit  ADC1BUF420_bit at ADC1BUF4.B20;
    const register unsigned short int ADC1BUF419 = 19;
    sbit  ADC1BUF419_bit at ADC1BUF4.B19;
    const register unsigned short int ADC1BUF418 = 18;
    sbit  ADC1BUF418_bit at ADC1BUF4.B18;
    const register unsigned short int ADC1BUF417 = 17;
    sbit  ADC1BUF417_bit at ADC1BUF4.B17;
    const register unsigned short int ADC1BUF416 = 16;
    sbit  ADC1BUF416_bit at ADC1BUF4.B16;
    const register unsigned short int ADC1BUF415 = 15;
    sbit  ADC1BUF415_bit at ADC1BUF4.B15;
    const register unsigned short int ADC1BUF414 = 14;
    sbit  ADC1BUF414_bit at ADC1BUF4.B14;
    const register unsigned short int ADC1BUF413 = 13;
    sbit  ADC1BUF413_bit at ADC1BUF4.B13;
    const register unsigned short int ADC1BUF412 = 12;
    sbit  ADC1BUF412_bit at ADC1BUF4.B12;
    const register unsigned short int ADC1BUF411 = 11;
    sbit  ADC1BUF411_bit at ADC1BUF4.B11;
    const register unsigned short int ADC1BUF410 = 10;
    sbit  ADC1BUF410_bit at ADC1BUF4.B10;
    const register unsigned short int ADC1BUF49 = 9;
    sbit  ADC1BUF49_bit at ADC1BUF4.B9;
    const register unsigned short int ADC1BUF48 = 8;
    sbit  ADC1BUF48_bit at ADC1BUF4.B8;
    const register unsigned short int ADC1BUF47 = 7;
    sbit  ADC1BUF47_bit at ADC1BUF4.B7;
    const register unsigned short int ADC1BUF46 = 6;
    sbit  ADC1BUF46_bit at ADC1BUF4.B6;
    const register unsigned short int ADC1BUF45 = 5;
    sbit  ADC1BUF45_bit at ADC1BUF4.B5;
    const register unsigned short int ADC1BUF44 = 4;
    sbit  ADC1BUF44_bit at ADC1BUF4.B4;
    const register unsigned short int ADC1BUF43 = 3;
    sbit  ADC1BUF43_bit at ADC1BUF4.B3;
    const register unsigned short int ADC1BUF42 = 2;
    sbit  ADC1BUF42_bit at ADC1BUF4.B2;
    const register unsigned short int ADC1BUF41 = 1;
    sbit  ADC1BUF41_bit at ADC1BUF4.B1;
    const register unsigned short int ADC1BUF40 = 0;
    sbit  ADC1BUF40_bit at ADC1BUF4.B0;

sfr unsigned long   volatile ADC1BUF5         absolute 0xBF8090C0;
    // ADC1BUF5 bits
    const register unsigned short int ADC1BUF531 = 31;
    sbit  ADC1BUF531_bit at ADC1BUF5.B31;
    const register unsigned short int ADC1BUF530 = 30;
    sbit  ADC1BUF530_bit at ADC1BUF5.B30;
    const register unsigned short int ADC1BUF529 = 29;
    sbit  ADC1BUF529_bit at ADC1BUF5.B29;
    const register unsigned short int ADC1BUF528 = 28;
    sbit  ADC1BUF528_bit at ADC1BUF5.B28;
    const register unsigned short int ADC1BUF527 = 27;
    sbit  ADC1BUF527_bit at ADC1BUF5.B27;
    const register unsigned short int ADC1BUF526 = 26;
    sbit  ADC1BUF526_bit at ADC1BUF5.B26;
    const register unsigned short int ADC1BUF525 = 25;
    sbit  ADC1BUF525_bit at ADC1BUF5.B25;
    const register unsigned short int ADC1BUF524 = 24;
    sbit  ADC1BUF524_bit at ADC1BUF5.B24;
    const register unsigned short int ADC1BUF523 = 23;
    sbit  ADC1BUF523_bit at ADC1BUF5.B23;
    const register unsigned short int ADC1BUF522 = 22;
    sbit  ADC1BUF522_bit at ADC1BUF5.B22;
    const register unsigned short int ADC1BUF521 = 21;
    sbit  ADC1BUF521_bit at ADC1BUF5.B21;
    const register unsigned short int ADC1BUF520 = 20;
    sbit  ADC1BUF520_bit at ADC1BUF5.B20;
    const register unsigned short int ADC1BUF519 = 19;
    sbit  ADC1BUF519_bit at ADC1BUF5.B19;
    const register unsigned short int ADC1BUF518 = 18;
    sbit  ADC1BUF518_bit at ADC1BUF5.B18;
    const register unsigned short int ADC1BUF517 = 17;
    sbit  ADC1BUF517_bit at ADC1BUF5.B17;
    const register unsigned short int ADC1BUF516 = 16;
    sbit  ADC1BUF516_bit at ADC1BUF5.B16;
    const register unsigned short int ADC1BUF515 = 15;
    sbit  ADC1BUF515_bit at ADC1BUF5.B15;
    const register unsigned short int ADC1BUF514 = 14;
    sbit  ADC1BUF514_bit at ADC1BUF5.B14;
    const register unsigned short int ADC1BUF513 = 13;
    sbit  ADC1BUF513_bit at ADC1BUF5.B13;
    const register unsigned short int ADC1BUF512 = 12;
    sbit  ADC1BUF512_bit at ADC1BUF5.B12;
    const register unsigned short int ADC1BUF511 = 11;
    sbit  ADC1BUF511_bit at ADC1BUF5.B11;
    const register unsigned short int ADC1BUF510 = 10;
    sbit  ADC1BUF510_bit at ADC1BUF5.B10;
    const register unsigned short int ADC1BUF59 = 9;
    sbit  ADC1BUF59_bit at ADC1BUF5.B9;
    const register unsigned short int ADC1BUF58 = 8;
    sbit  ADC1BUF58_bit at ADC1BUF5.B8;
    const register unsigned short int ADC1BUF57 = 7;
    sbit  ADC1BUF57_bit at ADC1BUF5.B7;
    const register unsigned short int ADC1BUF56 = 6;
    sbit  ADC1BUF56_bit at ADC1BUF5.B6;
    const register unsigned short int ADC1BUF55 = 5;
    sbit  ADC1BUF55_bit at ADC1BUF5.B5;
    const register unsigned short int ADC1BUF54 = 4;
    sbit  ADC1BUF54_bit at ADC1BUF5.B4;
    const register unsigned short int ADC1BUF53 = 3;
    sbit  ADC1BUF53_bit at ADC1BUF5.B3;
    const register unsigned short int ADC1BUF52 = 2;
    sbit  ADC1BUF52_bit at ADC1BUF5.B2;
    const register unsigned short int ADC1BUF51 = 1;
    sbit  ADC1BUF51_bit at ADC1BUF5.B1;
    const register unsigned short int ADC1BUF50 = 0;
    sbit  ADC1BUF50_bit at ADC1BUF5.B0;

sfr unsigned long   volatile ADC1BUF6         absolute 0xBF8090D0;
    // ADC1BUF6 bits
    const register unsigned short int ADC1BUF631 = 31;
    sbit  ADC1BUF631_bit at ADC1BUF6.B31;
    const register unsigned short int ADC1BUF630 = 30;
    sbit  ADC1BUF630_bit at ADC1BUF6.B30;
    const register unsigned short int ADC1BUF629 = 29;
    sbit  ADC1BUF629_bit at ADC1BUF6.B29;
    const register unsigned short int ADC1BUF628 = 28;
    sbit  ADC1BUF628_bit at ADC1BUF6.B28;
    const register unsigned short int ADC1BUF627 = 27;
    sbit  ADC1BUF627_bit at ADC1BUF6.B27;
    const register unsigned short int ADC1BUF626 = 26;
    sbit  ADC1BUF626_bit at ADC1BUF6.B26;
    const register unsigned short int ADC1BUF625 = 25;
    sbit  ADC1BUF625_bit at ADC1BUF6.B25;
    const register unsigned short int ADC1BUF624 = 24;
    sbit  ADC1BUF624_bit at ADC1BUF6.B24;
    const register unsigned short int ADC1BUF623 = 23;
    sbit  ADC1BUF623_bit at ADC1BUF6.B23;
    const register unsigned short int ADC1BUF622 = 22;
    sbit  ADC1BUF622_bit at ADC1BUF6.B22;
    const register unsigned short int ADC1BUF621 = 21;
    sbit  ADC1BUF621_bit at ADC1BUF6.B21;
    const register unsigned short int ADC1BUF620 = 20;
    sbit  ADC1BUF620_bit at ADC1BUF6.B20;
    const register unsigned short int ADC1BUF619 = 19;
    sbit  ADC1BUF619_bit at ADC1BUF6.B19;
    const register unsigned short int ADC1BUF618 = 18;
    sbit  ADC1BUF618_bit at ADC1BUF6.B18;
    const register unsigned short int ADC1BUF617 = 17;
    sbit  ADC1BUF617_bit at ADC1BUF6.B17;
    const register unsigned short int ADC1BUF616 = 16;
    sbit  ADC1BUF616_bit at ADC1BUF6.B16;
    const register unsigned short int ADC1BUF615 = 15;
    sbit  ADC1BUF615_bit at ADC1BUF6.B15;
    const register unsigned short int ADC1BUF614 = 14;
    sbit  ADC1BUF614_bit at ADC1BUF6.B14;
    const register unsigned short int ADC1BUF613 = 13;
    sbit  ADC1BUF613_bit at ADC1BUF6.B13;
    const register unsigned short int ADC1BUF612 = 12;
    sbit  ADC1BUF612_bit at ADC1BUF6.B12;
    const register unsigned short int ADC1BUF611 = 11;
    sbit  ADC1BUF611_bit at ADC1BUF6.B11;
    const register unsigned short int ADC1BUF610 = 10;
    sbit  ADC1BUF610_bit at ADC1BUF6.B10;
    const register unsigned short int ADC1BUF69 = 9;
    sbit  ADC1BUF69_bit at ADC1BUF6.B9;
    const register unsigned short int ADC1BUF68 = 8;
    sbit  ADC1BUF68_bit at ADC1BUF6.B8;
    const register unsigned short int ADC1BUF67 = 7;
    sbit  ADC1BUF67_bit at ADC1BUF6.B7;
    const register unsigned short int ADC1BUF66 = 6;
    sbit  ADC1BUF66_bit at ADC1BUF6.B6;
    const register unsigned short int ADC1BUF65 = 5;
    sbit  ADC1BUF65_bit at ADC1BUF6.B5;
    const register unsigned short int ADC1BUF64 = 4;
    sbit  ADC1BUF64_bit at ADC1BUF6.B4;
    const register unsigned short int ADC1BUF63 = 3;
    sbit  ADC1BUF63_bit at ADC1BUF6.B3;
    const register unsigned short int ADC1BUF62 = 2;
    sbit  ADC1BUF62_bit at ADC1BUF6.B2;
    const register unsigned short int ADC1BUF61 = 1;
    sbit  ADC1BUF61_bit at ADC1BUF6.B1;
    const register unsigned short int ADC1BUF60 = 0;
    sbit  ADC1BUF60_bit at ADC1BUF6.B0;

sfr unsigned long   volatile ADC1BUF7         absolute 0xBF8090E0;
    // ADC1BUF7 bits
    const register unsigned short int ADC1BUF731 = 31;
    sbit  ADC1BUF731_bit at ADC1BUF7.B31;
    const register unsigned short int ADC1BUF730 = 30;
    sbit  ADC1BUF730_bit at ADC1BUF7.B30;
    const register unsigned short int ADC1BUF729 = 29;
    sbit  ADC1BUF729_bit at ADC1BUF7.B29;
    const register unsigned short int ADC1BUF728 = 28;
    sbit  ADC1BUF728_bit at ADC1BUF7.B28;
    const register unsigned short int ADC1BUF727 = 27;
    sbit  ADC1BUF727_bit at ADC1BUF7.B27;
    const register unsigned short int ADC1BUF726 = 26;
    sbit  ADC1BUF726_bit at ADC1BUF7.B26;
    const register unsigned short int ADC1BUF725 = 25;
    sbit  ADC1BUF725_bit at ADC1BUF7.B25;
    const register unsigned short int ADC1BUF724 = 24;
    sbit  ADC1BUF724_bit at ADC1BUF7.B24;
    const register unsigned short int ADC1BUF723 = 23;
    sbit  ADC1BUF723_bit at ADC1BUF7.B23;
    const register unsigned short int ADC1BUF722 = 22;
    sbit  ADC1BUF722_bit at ADC1BUF7.B22;
    const register unsigned short int ADC1BUF721 = 21;
    sbit  ADC1BUF721_bit at ADC1BUF7.B21;
    const register unsigned short int ADC1BUF720 = 20;
    sbit  ADC1BUF720_bit at ADC1BUF7.B20;
    const register unsigned short int ADC1BUF719 = 19;
    sbit  ADC1BUF719_bit at ADC1BUF7.B19;
    const register unsigned short int ADC1BUF718 = 18;
    sbit  ADC1BUF718_bit at ADC1BUF7.B18;
    const register unsigned short int ADC1BUF717 = 17;
    sbit  ADC1BUF717_bit at ADC1BUF7.B17;
    const register unsigned short int ADC1BUF716 = 16;
    sbit  ADC1BUF716_bit at ADC1BUF7.B16;
    const register unsigned short int ADC1BUF715 = 15;
    sbit  ADC1BUF715_bit at ADC1BUF7.B15;
    const register unsigned short int ADC1BUF714 = 14;
    sbit  ADC1BUF714_bit at ADC1BUF7.B14;
    const register unsigned short int ADC1BUF713 = 13;
    sbit  ADC1BUF713_bit at ADC1BUF7.B13;
    const register unsigned short int ADC1BUF712 = 12;
    sbit  ADC1BUF712_bit at ADC1BUF7.B12;
    const register unsigned short int ADC1BUF711 = 11;
    sbit  ADC1BUF711_bit at ADC1BUF7.B11;
    const register unsigned short int ADC1BUF710 = 10;
    sbit  ADC1BUF710_bit at ADC1BUF7.B10;
    const register unsigned short int ADC1BUF79 = 9;
    sbit  ADC1BUF79_bit at ADC1BUF7.B9;
    const register unsigned short int ADC1BUF78 = 8;
    sbit  ADC1BUF78_bit at ADC1BUF7.B8;
    const register unsigned short int ADC1BUF77 = 7;
    sbit  ADC1BUF77_bit at ADC1BUF7.B7;
    const register unsigned short int ADC1BUF76 = 6;
    sbit  ADC1BUF76_bit at ADC1BUF7.B6;
    const register unsigned short int ADC1BUF75 = 5;
    sbit  ADC1BUF75_bit at ADC1BUF7.B5;
    const register unsigned short int ADC1BUF74 = 4;
    sbit  ADC1BUF74_bit at ADC1BUF7.B4;
    const register unsigned short int ADC1BUF73 = 3;
    sbit  ADC1BUF73_bit at ADC1BUF7.B3;
    const register unsigned short int ADC1BUF72 = 2;
    sbit  ADC1BUF72_bit at ADC1BUF7.B2;
    const register unsigned short int ADC1BUF71 = 1;
    sbit  ADC1BUF71_bit at ADC1BUF7.B1;
    const register unsigned short int ADC1BUF70 = 0;
    sbit  ADC1BUF70_bit at ADC1BUF7.B0;

sfr unsigned long   volatile ADC1BUF8         absolute 0xBF8090F0;
    // ADC1BUF8 bits
    const register unsigned short int ADC1BUF831 = 31;
    sbit  ADC1BUF831_bit at ADC1BUF8.B31;
    const register unsigned short int ADC1BUF830 = 30;
    sbit  ADC1BUF830_bit at ADC1BUF8.B30;
    const register unsigned short int ADC1BUF829 = 29;
    sbit  ADC1BUF829_bit at ADC1BUF8.B29;
    const register unsigned short int ADC1BUF828 = 28;
    sbit  ADC1BUF828_bit at ADC1BUF8.B28;
    const register unsigned short int ADC1BUF827 = 27;
    sbit  ADC1BUF827_bit at ADC1BUF8.B27;
    const register unsigned short int ADC1BUF826 = 26;
    sbit  ADC1BUF826_bit at ADC1BUF8.B26;
    const register unsigned short int ADC1BUF825 = 25;
    sbit  ADC1BUF825_bit at ADC1BUF8.B25;
    const register unsigned short int ADC1BUF824 = 24;
    sbit  ADC1BUF824_bit at ADC1BUF8.B24;
    const register unsigned short int ADC1BUF823 = 23;
    sbit  ADC1BUF823_bit at ADC1BUF8.B23;
    const register unsigned short int ADC1BUF822 = 22;
    sbit  ADC1BUF822_bit at ADC1BUF8.B22;
    const register unsigned short int ADC1BUF821 = 21;
    sbit  ADC1BUF821_bit at ADC1BUF8.B21;
    const register unsigned short int ADC1BUF820 = 20;
    sbit  ADC1BUF820_bit at ADC1BUF8.B20;
    const register unsigned short int ADC1BUF819 = 19;
    sbit  ADC1BUF819_bit at ADC1BUF8.B19;
    const register unsigned short int ADC1BUF818 = 18;
    sbit  ADC1BUF818_bit at ADC1BUF8.B18;
    const register unsigned short int ADC1BUF817 = 17;
    sbit  ADC1BUF817_bit at ADC1BUF8.B17;
    const register unsigned short int ADC1BUF816 = 16;
    sbit  ADC1BUF816_bit at ADC1BUF8.B16;
    const register unsigned short int ADC1BUF815 = 15;
    sbit  ADC1BUF815_bit at ADC1BUF8.B15;
    const register unsigned short int ADC1BUF814 = 14;
    sbit  ADC1BUF814_bit at ADC1BUF8.B14;
    const register unsigned short int ADC1BUF813 = 13;
    sbit  ADC1BUF813_bit at ADC1BUF8.B13;
    const register unsigned short int ADC1BUF812 = 12;
    sbit  ADC1BUF812_bit at ADC1BUF8.B12;
    const register unsigned short int ADC1BUF811 = 11;
    sbit  ADC1BUF811_bit at ADC1BUF8.B11;
    const register unsigned short int ADC1BUF810 = 10;
    sbit  ADC1BUF810_bit at ADC1BUF8.B10;
    const register unsigned short int ADC1BUF89 = 9;
    sbit  ADC1BUF89_bit at ADC1BUF8.B9;
    const register unsigned short int ADC1BUF88 = 8;
    sbit  ADC1BUF88_bit at ADC1BUF8.B8;
    const register unsigned short int ADC1BUF87 = 7;
    sbit  ADC1BUF87_bit at ADC1BUF8.B7;
    const register unsigned short int ADC1BUF86 = 6;
    sbit  ADC1BUF86_bit at ADC1BUF8.B6;
    const register unsigned short int ADC1BUF85 = 5;
    sbit  ADC1BUF85_bit at ADC1BUF8.B5;
    const register unsigned short int ADC1BUF84 = 4;
    sbit  ADC1BUF84_bit at ADC1BUF8.B4;
    const register unsigned short int ADC1BUF83 = 3;
    sbit  ADC1BUF83_bit at ADC1BUF8.B3;
    const register unsigned short int ADC1BUF82 = 2;
    sbit  ADC1BUF82_bit at ADC1BUF8.B2;
    const register unsigned short int ADC1BUF81 = 1;
    sbit  ADC1BUF81_bit at ADC1BUF8.B1;
    const register unsigned short int ADC1BUF80 = 0;
    sbit  ADC1BUF80_bit at ADC1BUF8.B0;

sfr unsigned long   volatile ADC1BUF9         absolute 0xBF809100;
    // ADC1BUF9 bits
    const register unsigned short int ADC1BUF931 = 31;
    sbit  ADC1BUF931_bit at ADC1BUF9.B31;
    const register unsigned short int ADC1BUF930 = 30;
    sbit  ADC1BUF930_bit at ADC1BUF9.B30;
    const register unsigned short int ADC1BUF929 = 29;
    sbit  ADC1BUF929_bit at ADC1BUF9.B29;
    const register unsigned short int ADC1BUF928 = 28;
    sbit  ADC1BUF928_bit at ADC1BUF9.B28;
    const register unsigned short int ADC1BUF927 = 27;
    sbit  ADC1BUF927_bit at ADC1BUF9.B27;
    const register unsigned short int ADC1BUF926 = 26;
    sbit  ADC1BUF926_bit at ADC1BUF9.B26;
    const register unsigned short int ADC1BUF925 = 25;
    sbit  ADC1BUF925_bit at ADC1BUF9.B25;
    const register unsigned short int ADC1BUF924 = 24;
    sbit  ADC1BUF924_bit at ADC1BUF9.B24;
    const register unsigned short int ADC1BUF923 = 23;
    sbit  ADC1BUF923_bit at ADC1BUF9.B23;
    const register unsigned short int ADC1BUF922 = 22;
    sbit  ADC1BUF922_bit at ADC1BUF9.B22;
    const register unsigned short int ADC1BUF921 = 21;
    sbit  ADC1BUF921_bit at ADC1BUF9.B21;
    const register unsigned short int ADC1BUF920 = 20;
    sbit  ADC1BUF920_bit at ADC1BUF9.B20;
    const register unsigned short int ADC1BUF919 = 19;
    sbit  ADC1BUF919_bit at ADC1BUF9.B19;
    const register unsigned short int ADC1BUF918 = 18;
    sbit  ADC1BUF918_bit at ADC1BUF9.B18;
    const register unsigned short int ADC1BUF917 = 17;
    sbit  ADC1BUF917_bit at ADC1BUF9.B17;
    const register unsigned short int ADC1BUF916 = 16;
    sbit  ADC1BUF916_bit at ADC1BUF9.B16;
    const register unsigned short int ADC1BUF915 = 15;
    sbit  ADC1BUF915_bit at ADC1BUF9.B15;
    const register unsigned short int ADC1BUF914 = 14;
    sbit  ADC1BUF914_bit at ADC1BUF9.B14;
    const register unsigned short int ADC1BUF913 = 13;
    sbit  ADC1BUF913_bit at ADC1BUF9.B13;
    const register unsigned short int ADC1BUF912 = 12;
    sbit  ADC1BUF912_bit at ADC1BUF9.B12;
    const register unsigned short int ADC1BUF911 = 11;
    sbit  ADC1BUF911_bit at ADC1BUF9.B11;
    const register unsigned short int ADC1BUF910 = 10;
    sbit  ADC1BUF910_bit at ADC1BUF9.B10;
    const register unsigned short int ADC1BUF99 = 9;
    sbit  ADC1BUF99_bit at ADC1BUF9.B9;
    const register unsigned short int ADC1BUF98 = 8;
    sbit  ADC1BUF98_bit at ADC1BUF9.B8;
    const register unsigned short int ADC1BUF97 = 7;
    sbit  ADC1BUF97_bit at ADC1BUF9.B7;
    const register unsigned short int ADC1BUF96 = 6;
    sbit  ADC1BUF96_bit at ADC1BUF9.B6;
    const register unsigned short int ADC1BUF95 = 5;
    sbit  ADC1BUF95_bit at ADC1BUF9.B5;
    const register unsigned short int ADC1BUF94 = 4;
    sbit  ADC1BUF94_bit at ADC1BUF9.B4;
    const register unsigned short int ADC1BUF93 = 3;
    sbit  ADC1BUF93_bit at ADC1BUF9.B3;
    const register unsigned short int ADC1BUF92 = 2;
    sbit  ADC1BUF92_bit at ADC1BUF9.B2;
    const register unsigned short int ADC1BUF91 = 1;
    sbit  ADC1BUF91_bit at ADC1BUF9.B1;
    const register unsigned short int ADC1BUF90 = 0;
    sbit  ADC1BUF90_bit at ADC1BUF9.B0;

sfr unsigned long   volatile ADC1BUFA         absolute 0xBF809110;
    // ADC1BUFA bits
    const register unsigned short int ADC1BUFA31 = 31;
    sbit  ADC1BUFA31_bit at ADC1BUFA.B31;
    const register unsigned short int ADC1BUFA30 = 30;
    sbit  ADC1BUFA30_bit at ADC1BUFA.B30;
    const register unsigned short int ADC1BUFA29 = 29;
    sbit  ADC1BUFA29_bit at ADC1BUFA.B29;
    const register unsigned short int ADC1BUFA28 = 28;
    sbit  ADC1BUFA28_bit at ADC1BUFA.B28;
    const register unsigned short int ADC1BUFA27 = 27;
    sbit  ADC1BUFA27_bit at ADC1BUFA.B27;
    const register unsigned short int ADC1BUFA26 = 26;
    sbit  ADC1BUFA26_bit at ADC1BUFA.B26;
    const register unsigned short int ADC1BUFA25 = 25;
    sbit  ADC1BUFA25_bit at ADC1BUFA.B25;
    const register unsigned short int ADC1BUFA24 = 24;
    sbit  ADC1BUFA24_bit at ADC1BUFA.B24;
    const register unsigned short int ADC1BUFA23 = 23;
    sbit  ADC1BUFA23_bit at ADC1BUFA.B23;
    const register unsigned short int ADC1BUFA22 = 22;
    sbit  ADC1BUFA22_bit at ADC1BUFA.B22;
    const register unsigned short int ADC1BUFA21 = 21;
    sbit  ADC1BUFA21_bit at ADC1BUFA.B21;
    const register unsigned short int ADC1BUFA20 = 20;
    sbit  ADC1BUFA20_bit at ADC1BUFA.B20;
    const register unsigned short int ADC1BUFA19 = 19;
    sbit  ADC1BUFA19_bit at ADC1BUFA.B19;
    const register unsigned short int ADC1BUFA18 = 18;
    sbit  ADC1BUFA18_bit at ADC1BUFA.B18;
    const register unsigned short int ADC1BUFA17 = 17;
    sbit  ADC1BUFA17_bit at ADC1BUFA.B17;
    const register unsigned short int ADC1BUFA16 = 16;
    sbit  ADC1BUFA16_bit at ADC1BUFA.B16;
    const register unsigned short int ADC1BUFA15 = 15;
    sbit  ADC1BUFA15_bit at ADC1BUFA.B15;
    const register unsigned short int ADC1BUFA14 = 14;
    sbit  ADC1BUFA14_bit at ADC1BUFA.B14;
    const register unsigned short int ADC1BUFA13 = 13;
    sbit  ADC1BUFA13_bit at ADC1BUFA.B13;
    const register unsigned short int ADC1BUFA12 = 12;
    sbit  ADC1BUFA12_bit at ADC1BUFA.B12;
    const register unsigned short int ADC1BUFA11 = 11;
    sbit  ADC1BUFA11_bit at ADC1BUFA.B11;
    const register unsigned short int ADC1BUFA10 = 10;
    sbit  ADC1BUFA10_bit at ADC1BUFA.B10;
    const register unsigned short int ADC1BUFA9 = 9;
    sbit  ADC1BUFA9_bit at ADC1BUFA.B9;
    const register unsigned short int ADC1BUFA8 = 8;
    sbit  ADC1BUFA8_bit at ADC1BUFA.B8;
    const register unsigned short int ADC1BUFA7 = 7;
    sbit  ADC1BUFA7_bit at ADC1BUFA.B7;
    const register unsigned short int ADC1BUFA6 = 6;
    sbit  ADC1BUFA6_bit at ADC1BUFA.B6;
    const register unsigned short int ADC1BUFA5 = 5;
    sbit  ADC1BUFA5_bit at ADC1BUFA.B5;
    const register unsigned short int ADC1BUFA4 = 4;
    sbit  ADC1BUFA4_bit at ADC1BUFA.B4;
    const register unsigned short int ADC1BUFA3 = 3;
    sbit  ADC1BUFA3_bit at ADC1BUFA.B3;
    const register unsigned short int ADC1BUFA2 = 2;
    sbit  ADC1BUFA2_bit at ADC1BUFA.B2;
    const register unsigned short int ADC1BUFA1 = 1;
    sbit  ADC1BUFA1_bit at ADC1BUFA.B1;
    const register unsigned short int ADC1BUFA0 = 0;
    sbit  ADC1BUFA0_bit at ADC1BUFA.B0;

sfr unsigned long   volatile ADC1BUFB         absolute 0xBF809120;
    // ADC1BUFB bits
    const register unsigned short int ADC1BUFB31 = 31;
    sbit  ADC1BUFB31_bit at ADC1BUFB.B31;
    const register unsigned short int ADC1BUFB30 = 30;
    sbit  ADC1BUFB30_bit at ADC1BUFB.B30;
    const register unsigned short int ADC1BUFB29 = 29;
    sbit  ADC1BUFB29_bit at ADC1BUFB.B29;
    const register unsigned short int ADC1BUFB28 = 28;
    sbit  ADC1BUFB28_bit at ADC1BUFB.B28;
    const register unsigned short int ADC1BUFB27 = 27;
    sbit  ADC1BUFB27_bit at ADC1BUFB.B27;
    const register unsigned short int ADC1BUFB26 = 26;
    sbit  ADC1BUFB26_bit at ADC1BUFB.B26;
    const register unsigned short int ADC1BUFB25 = 25;
    sbit  ADC1BUFB25_bit at ADC1BUFB.B25;
    const register unsigned short int ADC1BUFB24 = 24;
    sbit  ADC1BUFB24_bit at ADC1BUFB.B24;
    const register unsigned short int ADC1BUFB23 = 23;
    sbit  ADC1BUFB23_bit at ADC1BUFB.B23;
    const register unsigned short int ADC1BUFB22 = 22;
    sbit  ADC1BUFB22_bit at ADC1BUFB.B22;
    const register unsigned short int ADC1BUFB21 = 21;
    sbit  ADC1BUFB21_bit at ADC1BUFB.B21;
    const register unsigned short int ADC1BUFB20 = 20;
    sbit  ADC1BUFB20_bit at ADC1BUFB.B20;
    const register unsigned short int ADC1BUFB19 = 19;
    sbit  ADC1BUFB19_bit at ADC1BUFB.B19;
    const register unsigned short int ADC1BUFB18 = 18;
    sbit  ADC1BUFB18_bit at ADC1BUFB.B18;
    const register unsigned short int ADC1BUFB17 = 17;
    sbit  ADC1BUFB17_bit at ADC1BUFB.B17;
    const register unsigned short int ADC1BUFB16 = 16;
    sbit  ADC1BUFB16_bit at ADC1BUFB.B16;
    const register unsigned short int ADC1BUFB15 = 15;
    sbit  ADC1BUFB15_bit at ADC1BUFB.B15;
    const register unsigned short int ADC1BUFB14 = 14;
    sbit  ADC1BUFB14_bit at ADC1BUFB.B14;
    const register unsigned short int ADC1BUFB13 = 13;
    sbit  ADC1BUFB13_bit at ADC1BUFB.B13;
    const register unsigned short int ADC1BUFB12 = 12;
    sbit  ADC1BUFB12_bit at ADC1BUFB.B12;
    const register unsigned short int ADC1BUFB11 = 11;
    sbit  ADC1BUFB11_bit at ADC1BUFB.B11;
    const register unsigned short int ADC1BUFB10 = 10;
    sbit  ADC1BUFB10_bit at ADC1BUFB.B10;
    const register unsigned short int ADC1BUFB9 = 9;
    sbit  ADC1BUFB9_bit at ADC1BUFB.B9;
    const register unsigned short int ADC1BUFB8 = 8;
    sbit  ADC1BUFB8_bit at ADC1BUFB.B8;
    const register unsigned short int ADC1BUFB7 = 7;
    sbit  ADC1BUFB7_bit at ADC1BUFB.B7;
    const register unsigned short int ADC1BUFB6 = 6;
    sbit  ADC1BUFB6_bit at ADC1BUFB.B6;
    const register unsigned short int ADC1BUFB5 = 5;
    sbit  ADC1BUFB5_bit at ADC1BUFB.B5;
    const register unsigned short int ADC1BUFB4 = 4;
    sbit  ADC1BUFB4_bit at ADC1BUFB.B4;
    const register unsigned short int ADC1BUFB3 = 3;
    sbit  ADC1BUFB3_bit at ADC1BUFB.B3;
    const register unsigned short int ADC1BUFB2 = 2;
    sbit  ADC1BUFB2_bit at ADC1BUFB.B2;
    const register unsigned short int ADC1BUFB1 = 1;
    sbit  ADC1BUFB1_bit at ADC1BUFB.B1;
    const register unsigned short int ADC1BUFB0 = 0;
    sbit  ADC1BUFB0_bit at ADC1BUFB.B0;

sfr unsigned long   volatile ADC1BUFC         absolute 0xBF809130;
    // ADC1BUFC bits
    const register unsigned short int ADC1BUFC31 = 31;
    sbit  ADC1BUFC31_bit at ADC1BUFC.B31;
    const register unsigned short int ADC1BUFC30 = 30;
    sbit  ADC1BUFC30_bit at ADC1BUFC.B30;
    const register unsigned short int ADC1BUFC29 = 29;
    sbit  ADC1BUFC29_bit at ADC1BUFC.B29;
    const register unsigned short int ADC1BUFC28 = 28;
    sbit  ADC1BUFC28_bit at ADC1BUFC.B28;
    const register unsigned short int ADC1BUFC27 = 27;
    sbit  ADC1BUFC27_bit at ADC1BUFC.B27;
    const register unsigned short int ADC1BUFC26 = 26;
    sbit  ADC1BUFC26_bit at ADC1BUFC.B26;
    const register unsigned short int ADC1BUFC25 = 25;
    sbit  ADC1BUFC25_bit at ADC1BUFC.B25;
    const register unsigned short int ADC1BUFC24 = 24;
    sbit  ADC1BUFC24_bit at ADC1BUFC.B24;
    const register unsigned short int ADC1BUFC23 = 23;
    sbit  ADC1BUFC23_bit at ADC1BUFC.B23;
    const register unsigned short int ADC1BUFC22 = 22;
    sbit  ADC1BUFC22_bit at ADC1BUFC.B22;
    const register unsigned short int ADC1BUFC21 = 21;
    sbit  ADC1BUFC21_bit at ADC1BUFC.B21;
    const register unsigned short int ADC1BUFC20 = 20;
    sbit  ADC1BUFC20_bit at ADC1BUFC.B20;
    const register unsigned short int ADC1BUFC19 = 19;
    sbit  ADC1BUFC19_bit at ADC1BUFC.B19;
    const register unsigned short int ADC1BUFC18 = 18;
    sbit  ADC1BUFC18_bit at ADC1BUFC.B18;
    const register unsigned short int ADC1BUFC17 = 17;
    sbit  ADC1BUFC17_bit at ADC1BUFC.B17;
    const register unsigned short int ADC1BUFC16 = 16;
    sbit  ADC1BUFC16_bit at ADC1BUFC.B16;
    const register unsigned short int ADC1BUFC15 = 15;
    sbit  ADC1BUFC15_bit at ADC1BUFC.B15;
    const register unsigned short int ADC1BUFC14 = 14;
    sbit  ADC1BUFC14_bit at ADC1BUFC.B14;
    const register unsigned short int ADC1BUFC13 = 13;
    sbit  ADC1BUFC13_bit at ADC1BUFC.B13;
    const register unsigned short int ADC1BUFC12 = 12;
    sbit  ADC1BUFC12_bit at ADC1BUFC.B12;
    const register unsigned short int ADC1BUFC11 = 11;
    sbit  ADC1BUFC11_bit at ADC1BUFC.B11;
    const register unsigned short int ADC1BUFC10 = 10;
    sbit  ADC1BUFC10_bit at ADC1BUFC.B10;
    const register unsigned short int ADC1BUFC9 = 9;
    sbit  ADC1BUFC9_bit at ADC1BUFC.B9;
    const register unsigned short int ADC1BUFC8 = 8;
    sbit  ADC1BUFC8_bit at ADC1BUFC.B8;
    const register unsigned short int ADC1BUFC7 = 7;
    sbit  ADC1BUFC7_bit at ADC1BUFC.B7;
    const register unsigned short int ADC1BUFC6 = 6;
    sbit  ADC1BUFC6_bit at ADC1BUFC.B6;
    const register unsigned short int ADC1BUFC5 = 5;
    sbit  ADC1BUFC5_bit at ADC1BUFC.B5;
    const register unsigned short int ADC1BUFC4 = 4;
    sbit  ADC1BUFC4_bit at ADC1BUFC.B4;
    const register unsigned short int ADC1BUFC3 = 3;
    sbit  ADC1BUFC3_bit at ADC1BUFC.B3;
    const register unsigned short int ADC1BUFC2 = 2;
    sbit  ADC1BUFC2_bit at ADC1BUFC.B2;
    const register unsigned short int ADC1BUFC1 = 1;
    sbit  ADC1BUFC1_bit at ADC1BUFC.B1;
    const register unsigned short int ADC1BUFC0 = 0;
    sbit  ADC1BUFC0_bit at ADC1BUFC.B0;

sfr unsigned long   volatile ADC1BUFD         absolute 0xBF809140;
    // ADC1BUFD bits
    const register unsigned short int ADC1BUFD31 = 31;
    sbit  ADC1BUFD31_bit at ADC1BUFD.B31;
    const register unsigned short int ADC1BUFD30 = 30;
    sbit  ADC1BUFD30_bit at ADC1BUFD.B30;
    const register unsigned short int ADC1BUFD29 = 29;
    sbit  ADC1BUFD29_bit at ADC1BUFD.B29;
    const register unsigned short int ADC1BUFD28 = 28;
    sbit  ADC1BUFD28_bit at ADC1BUFD.B28;
    const register unsigned short int ADC1BUFD27 = 27;
    sbit  ADC1BUFD27_bit at ADC1BUFD.B27;
    const register unsigned short int ADC1BUFD26 = 26;
    sbit  ADC1BUFD26_bit at ADC1BUFD.B26;
    const register unsigned short int ADC1BUFD25 = 25;
    sbit  ADC1BUFD25_bit at ADC1BUFD.B25;
    const register unsigned short int ADC1BUFD24 = 24;
    sbit  ADC1BUFD24_bit at ADC1BUFD.B24;
    const register unsigned short int ADC1BUFD23 = 23;
    sbit  ADC1BUFD23_bit at ADC1BUFD.B23;
    const register unsigned short int ADC1BUFD22 = 22;
    sbit  ADC1BUFD22_bit at ADC1BUFD.B22;
    const register unsigned short int ADC1BUFD21 = 21;
    sbit  ADC1BUFD21_bit at ADC1BUFD.B21;
    const register unsigned short int ADC1BUFD20 = 20;
    sbit  ADC1BUFD20_bit at ADC1BUFD.B20;
    const register unsigned short int ADC1BUFD19 = 19;
    sbit  ADC1BUFD19_bit at ADC1BUFD.B19;
    const register unsigned short int ADC1BUFD18 = 18;
    sbit  ADC1BUFD18_bit at ADC1BUFD.B18;
    const register unsigned short int ADC1BUFD17 = 17;
    sbit  ADC1BUFD17_bit at ADC1BUFD.B17;
    const register unsigned short int ADC1BUFD16 = 16;
    sbit  ADC1BUFD16_bit at ADC1BUFD.B16;
    const register unsigned short int ADC1BUFD15 = 15;
    sbit  ADC1BUFD15_bit at ADC1BUFD.B15;
    const register unsigned short int ADC1BUFD14 = 14;
    sbit  ADC1BUFD14_bit at ADC1BUFD.B14;
    const register unsigned short int ADC1BUFD13 = 13;
    sbit  ADC1BUFD13_bit at ADC1BUFD.B13;
    const register unsigned short int ADC1BUFD12 = 12;
    sbit  ADC1BUFD12_bit at ADC1BUFD.B12;
    const register unsigned short int ADC1BUFD11 = 11;
    sbit  ADC1BUFD11_bit at ADC1BUFD.B11;
    const register unsigned short int ADC1BUFD10 = 10;
    sbit  ADC1BUFD10_bit at ADC1BUFD.B10;
    const register unsigned short int ADC1BUFD9 = 9;
    sbit  ADC1BUFD9_bit at ADC1BUFD.B9;
    const register unsigned short int ADC1BUFD8 = 8;
    sbit  ADC1BUFD8_bit at ADC1BUFD.B8;
    const register unsigned short int ADC1BUFD7 = 7;
    sbit  ADC1BUFD7_bit at ADC1BUFD.B7;
    const register unsigned short int ADC1BUFD6 = 6;
    sbit  ADC1BUFD6_bit at ADC1BUFD.B6;
    const register unsigned short int ADC1BUFD5 = 5;
    sbit  ADC1BUFD5_bit at ADC1BUFD.B5;
    const register unsigned short int ADC1BUFD4 = 4;
    sbit  ADC1BUFD4_bit at ADC1BUFD.B4;
    const register unsigned short int ADC1BUFD3 = 3;
    sbit  ADC1BUFD3_bit at ADC1BUFD.B3;
    const register unsigned short int ADC1BUFD2 = 2;
    sbit  ADC1BUFD2_bit at ADC1BUFD.B2;
    const register unsigned short int ADC1BUFD1 = 1;
    sbit  ADC1BUFD1_bit at ADC1BUFD.B1;
    const register unsigned short int ADC1BUFD0 = 0;
    sbit  ADC1BUFD0_bit at ADC1BUFD.B0;

sfr unsigned long   volatile ADC1BUFE         absolute 0xBF809150;
    // ADC1BUFE bits
    const register unsigned short int ADC1BUFE31 = 31;
    sbit  ADC1BUFE31_bit at ADC1BUFE.B31;
    const register unsigned short int ADC1BUFE30 = 30;
    sbit  ADC1BUFE30_bit at ADC1BUFE.B30;
    const register unsigned short int ADC1BUFE29 = 29;
    sbit  ADC1BUFE29_bit at ADC1BUFE.B29;
    const register unsigned short int ADC1BUFE28 = 28;
    sbit  ADC1BUFE28_bit at ADC1BUFE.B28;
    const register unsigned short int ADC1BUFE27 = 27;
    sbit  ADC1BUFE27_bit at ADC1BUFE.B27;
    const register unsigned short int ADC1BUFE26 = 26;
    sbit  ADC1BUFE26_bit at ADC1BUFE.B26;
    const register unsigned short int ADC1BUFE25 = 25;
    sbit  ADC1BUFE25_bit at ADC1BUFE.B25;
    const register unsigned short int ADC1BUFE24 = 24;
    sbit  ADC1BUFE24_bit at ADC1BUFE.B24;
    const register unsigned short int ADC1BUFE23 = 23;
    sbit  ADC1BUFE23_bit at ADC1BUFE.B23;
    const register unsigned short int ADC1BUFE22 = 22;
    sbit  ADC1BUFE22_bit at ADC1BUFE.B22;
    const register unsigned short int ADC1BUFE21 = 21;
    sbit  ADC1BUFE21_bit at ADC1BUFE.B21;
    const register unsigned short int ADC1BUFE20 = 20;
    sbit  ADC1BUFE20_bit at ADC1BUFE.B20;
    const register unsigned short int ADC1BUFE19 = 19;
    sbit  ADC1BUFE19_bit at ADC1BUFE.B19;
    const register unsigned short int ADC1BUFE18 = 18;
    sbit  ADC1BUFE18_bit at ADC1BUFE.B18;
    const register unsigned short int ADC1BUFE17 = 17;
    sbit  ADC1BUFE17_bit at ADC1BUFE.B17;
    const register unsigned short int ADC1BUFE16 = 16;
    sbit  ADC1BUFE16_bit at ADC1BUFE.B16;
    const register unsigned short int ADC1BUFE15 = 15;
    sbit  ADC1BUFE15_bit at ADC1BUFE.B15;
    const register unsigned short int ADC1BUFE14 = 14;
    sbit  ADC1BUFE14_bit at ADC1BUFE.B14;
    const register unsigned short int ADC1BUFE13 = 13;
    sbit  ADC1BUFE13_bit at ADC1BUFE.B13;
    const register unsigned short int ADC1BUFE12 = 12;
    sbit  ADC1BUFE12_bit at ADC1BUFE.B12;
    const register unsigned short int ADC1BUFE11 = 11;
    sbit  ADC1BUFE11_bit at ADC1BUFE.B11;
    const register unsigned short int ADC1BUFE10 = 10;
    sbit  ADC1BUFE10_bit at ADC1BUFE.B10;
    const register unsigned short int ADC1BUFE9 = 9;
    sbit  ADC1BUFE9_bit at ADC1BUFE.B9;
    const register unsigned short int ADC1BUFE8 = 8;
    sbit  ADC1BUFE8_bit at ADC1BUFE.B8;
    const register unsigned short int ADC1BUFE7 = 7;
    sbit  ADC1BUFE7_bit at ADC1BUFE.B7;
    const register unsigned short int ADC1BUFE6 = 6;
    sbit  ADC1BUFE6_bit at ADC1BUFE.B6;
    const register unsigned short int ADC1BUFE5 = 5;
    sbit  ADC1BUFE5_bit at ADC1BUFE.B5;
    const register unsigned short int ADC1BUFE4 = 4;
    sbit  ADC1BUFE4_bit at ADC1BUFE.B4;
    const register unsigned short int ADC1BUFE3 = 3;
    sbit  ADC1BUFE3_bit at ADC1BUFE.B3;
    const register unsigned short int ADC1BUFE2 = 2;
    sbit  ADC1BUFE2_bit at ADC1BUFE.B2;
    const register unsigned short int ADC1BUFE1 = 1;
    sbit  ADC1BUFE1_bit at ADC1BUFE.B1;
    const register unsigned short int ADC1BUFE0 = 0;
    sbit  ADC1BUFE0_bit at ADC1BUFE.B0;

sfr unsigned long   volatile ADC1BUFF         absolute 0xBF809160;
    // ADC1BUFF bits
    const register unsigned short int ADC1BUFF31 = 31;
    sbit  ADC1BUFF31_bit at ADC1BUFF.B31;
    const register unsigned short int ADC1BUFF30 = 30;
    sbit  ADC1BUFF30_bit at ADC1BUFF.B30;
    const register unsigned short int ADC1BUFF29 = 29;
    sbit  ADC1BUFF29_bit at ADC1BUFF.B29;
    const register unsigned short int ADC1BUFF28 = 28;
    sbit  ADC1BUFF28_bit at ADC1BUFF.B28;
    const register unsigned short int ADC1BUFF27 = 27;
    sbit  ADC1BUFF27_bit at ADC1BUFF.B27;
    const register unsigned short int ADC1BUFF26 = 26;
    sbit  ADC1BUFF26_bit at ADC1BUFF.B26;
    const register unsigned short int ADC1BUFF25 = 25;
    sbit  ADC1BUFF25_bit at ADC1BUFF.B25;
    const register unsigned short int ADC1BUFF24 = 24;
    sbit  ADC1BUFF24_bit at ADC1BUFF.B24;
    const register unsigned short int ADC1BUFF23 = 23;
    sbit  ADC1BUFF23_bit at ADC1BUFF.B23;
    const register unsigned short int ADC1BUFF22 = 22;
    sbit  ADC1BUFF22_bit at ADC1BUFF.B22;
    const register unsigned short int ADC1BUFF21 = 21;
    sbit  ADC1BUFF21_bit at ADC1BUFF.B21;
    const register unsigned short int ADC1BUFF20 = 20;
    sbit  ADC1BUFF20_bit at ADC1BUFF.B20;
    const register unsigned short int ADC1BUFF19 = 19;
    sbit  ADC1BUFF19_bit at ADC1BUFF.B19;
    const register unsigned short int ADC1BUFF18 = 18;
    sbit  ADC1BUFF18_bit at ADC1BUFF.B18;
    const register unsigned short int ADC1BUFF17 = 17;
    sbit  ADC1BUFF17_bit at ADC1BUFF.B17;
    const register unsigned short int ADC1BUFF16 = 16;
    sbit  ADC1BUFF16_bit at ADC1BUFF.B16;
    const register unsigned short int ADC1BUFF15 = 15;
    sbit  ADC1BUFF15_bit at ADC1BUFF.B15;
    const register unsigned short int ADC1BUFF14 = 14;
    sbit  ADC1BUFF14_bit at ADC1BUFF.B14;
    const register unsigned short int ADC1BUFF13 = 13;
    sbit  ADC1BUFF13_bit at ADC1BUFF.B13;
    const register unsigned short int ADC1BUFF12 = 12;
    sbit  ADC1BUFF12_bit at ADC1BUFF.B12;
    const register unsigned short int ADC1BUFF11 = 11;
    sbit  ADC1BUFF11_bit at ADC1BUFF.B11;
    const register unsigned short int ADC1BUFF10 = 10;
    sbit  ADC1BUFF10_bit at ADC1BUFF.B10;
    const register unsigned short int ADC1BUFF9 = 9;
    sbit  ADC1BUFF9_bit at ADC1BUFF.B9;
    const register unsigned short int ADC1BUFF8 = 8;
    sbit  ADC1BUFF8_bit at ADC1BUFF.B8;
    const register unsigned short int ADC1BUFF7 = 7;
    sbit  ADC1BUFF7_bit at ADC1BUFF.B7;
    const register unsigned short int ADC1BUFF6 = 6;
    sbit  ADC1BUFF6_bit at ADC1BUFF.B6;
    const register unsigned short int ADC1BUFF5 = 5;
    sbit  ADC1BUFF5_bit at ADC1BUFF.B5;
    const register unsigned short int ADC1BUFF4 = 4;
    sbit  ADC1BUFF4_bit at ADC1BUFF.B4;
    const register unsigned short int ADC1BUFF3 = 3;
    sbit  ADC1BUFF3_bit at ADC1BUFF.B3;
    const register unsigned short int ADC1BUFF2 = 2;
    sbit  ADC1BUFF2_bit at ADC1BUFF.B2;
    const register unsigned short int ADC1BUFF1 = 1;
    sbit  ADC1BUFF1_bit at ADC1BUFF.B1;
    const register unsigned short int ADC1BUFF0 = 0;
    sbit  ADC1BUFF0_bit at ADC1BUFF.B0;

sfr atomic unsigned long            CVRCON           absolute 0xBF809800;
sfr unsigned long   volatile CVRCONCLR        absolute 0xBF809804;
sfr unsigned long   volatile CVRCONSET        absolute 0xBF809808;
sfr unsigned long   volatile CVRCONINV        absolute 0xBF80980C;
    // CVRCON bits
    sbit  ON__CVRCON_bit at CVRCON.B15;
    const register unsigned short int CVROE = 6;
    sbit  CVROE_bit at CVRCON.B6;
    const register unsigned short int CVRR = 5;
    sbit  CVRR_bit at CVRCON.B5;
    const register unsigned short int CVRSS = 4;
    sbit  CVRSS_bit at CVRCON.B4;
    const register unsigned short int CVR3 = 3;
    sbit  CVR3_bit at CVRCON.B3;
    const register unsigned short int CVR2 = 2;
    sbit  CVR2_bit at CVRCON.B2;
    const register unsigned short int CVR1 = 1;
    sbit  CVR1_bit at CVRCON.B1;
    const register unsigned short int CVR0 = 0;
    sbit  CVR0_bit at CVRCON.B0;

sfr atomic unsigned long   volatile CM1CON           absolute 0xBF80A000;
sfr unsigned long   volatile CM1CONCLR        absolute 0xBF80A004;
sfr unsigned long   volatile CM1CONSET        absolute 0xBF80A008;
sfr unsigned long   volatile CM1CONINV        absolute 0xBF80A00C;
    // CM1CON bits
    sbit  ON__CM1CON_bit at CM1CON.B15;
    const register unsigned short int COE = 14;
    sbit  COE_bit at CM1CON.B14;
    const register unsigned short int CPOL = 13;
    sbit  CPOL_bit at CM1CON.B13;
    const register unsigned short int COUT = 8;
    sbit  COUT_bit at CM1CON.B8;
    const register unsigned short int EVPOL1 = 7;
    sbit  EVPOL1_bit at CM1CON.B7;
    const register unsigned short int EVPOL0 = 6;
    sbit  EVPOL0_bit at CM1CON.B6;
    const register unsigned short int CREF = 4;
    sbit  CREF_bit at CM1CON.B4;
    const register unsigned short int CCH1 = 1;
    sbit  CCH1_bit at CM1CON.B1;
    const register unsigned short int CCH0 = 0;
    sbit  CCH0_bit at CM1CON.B0;

sfr atomic unsigned long   volatile CM2CON           absolute 0xBF80A010;
sfr unsigned long   volatile CM2CONCLR        absolute 0xBF80A014;
sfr unsigned long   volatile CM2CONSET        absolute 0xBF80A018;
sfr unsigned long   volatile CM2CONINV        absolute 0xBF80A01C;
    // CM2CON bits
    sbit  ON__CM2CON_bit at CM2CON.B15;
    sbit  COE_CM2CON_bit at CM2CON.B14;
    sbit  CPOL_CM2CON_bit at CM2CON.B13;
    sbit  COUT_CM2CON_bit at CM2CON.B8;
    sbit  EVPOL1_CM2CON_bit at CM2CON.B7;
    sbit  EVPOL0_CM2CON_bit at CM2CON.B6;
    sbit  CREF_CM2CON_bit at CM2CON.B4;
    sbit  CCH1_CM2CON_bit at CM2CON.B1;
    sbit  CCH0_CM2CON_bit at CM2CON.B0;

sfr atomic unsigned long   volatile CM3CON           absolute 0xBF80A020;
sfr unsigned long   volatile CM3CONCLR        absolute 0xBF80A024;
sfr unsigned long   volatile CM3CONSET        absolute 0xBF80A028;
sfr unsigned long   volatile CM3CONINV        absolute 0xBF80A02C;
    // CM3CON bits
    sbit  ON__CM3CON_bit at CM3CON.B15;
    sbit  COE_CM3CON_bit at CM3CON.B14;
    sbit  CPOL_CM3CON_bit at CM3CON.B13;
    sbit  COUT_CM3CON_bit at CM3CON.B8;
    sbit  EVPOL1_CM3CON_bit at CM3CON.B7;
    sbit  EVPOL0_CM3CON_bit at CM3CON.B6;
    sbit  CREF_CM3CON_bit at CM3CON.B4;
    sbit  CCH1_CM3CON_bit at CM3CON.B1;
    sbit  CCH0_CM3CON_bit at CM3CON.B0;

sfr atomic unsigned long   volatile CMSTAT           absolute 0xBF80A060;
sfr unsigned long   volatile CMSTATCLR        absolute 0xBF80A064;
sfr unsigned long   volatile CMSTATSET        absolute 0xBF80A068;
sfr unsigned long   volatile CMSTATINV        absolute 0xBF80A06C;
    // CMSTAT bits
    sbit  SIDL_CMSTAT_bit at CMSTAT.B13;
    const register unsigned short int C3OUT = 2;
    sbit  C3OUT_bit at CMSTAT.B2;
    const register unsigned short int C2OUT = 1;
    sbit  C2OUT_bit at CMSTAT.B1;
    const register unsigned short int C1OUT = 0;
    sbit  C1OUT_bit at CMSTAT.B0;

sfr atomic unsigned long   volatile CTMUCON          absolute 0xBF80A200;
sfr unsigned long   volatile CTMUCONCLR       absolute 0xBF80A204;
sfr unsigned long   volatile CTMUCONSET       absolute 0xBF80A208;
sfr unsigned long   volatile CTMUCONINV       absolute 0xBF80A20C;
    // CTMUCON bits
    const register unsigned short int EDG1MOD = 31;
    sbit  EDG1MOD_bit at CTMUCON.B31;
    const register unsigned short int EDG1POL = 30;
    sbit  EDG1POL_bit at CTMUCON.B30;
    const register unsigned short int EDG1SEL3 = 29;
    sbit  EDG1SEL3_bit at CTMUCON.B29;
    const register unsigned short int EDG1SEL2 = 28;
    sbit  EDG1SEL2_bit at CTMUCON.B28;
    const register unsigned short int EDG1SEL1 = 27;
    sbit  EDG1SEL1_bit at CTMUCON.B27;
    const register unsigned short int EDG1SEL0 = 26;
    sbit  EDG1SEL0_bit at CTMUCON.B26;
    const register unsigned short int EDG2STAT = 25;
    sbit  EDG2STAT_bit at CTMUCON.B25;
    const register unsigned short int EDG1STAT = 24;
    sbit  EDG1STAT_bit at CTMUCON.B24;
    const register unsigned short int EDG2MOD = 23;
    sbit  EDG2MOD_bit at CTMUCON.B23;
    const register unsigned short int EDG2POL = 22;
    sbit  EDG2POL_bit at CTMUCON.B22;
    const register unsigned short int EDG2SEL3 = 21;
    sbit  EDG2SEL3_bit at CTMUCON.B21;
    const register unsigned short int EDG2SEL2 = 20;
    sbit  EDG2SEL2_bit at CTMUCON.B20;
    const register unsigned short int EDG2SEL1 = 19;
    sbit  EDG2SEL1_bit at CTMUCON.B19;
    const register unsigned short int EDG2SEL0 = 18;
    sbit  EDG2SEL0_bit at CTMUCON.B18;
    sbit  ON__CTMUCON_bit at CTMUCON.B15;
    const register unsigned short int CTMUSIDL = 13;
    sbit  CTMUSIDL_bit at CTMUCON.B13;
    const register unsigned short int TGEN = 12;
    sbit  TGEN_bit at CTMUCON.B12;
    const register unsigned short int EDGEN = 11;
    sbit  EDGEN_bit at CTMUCON.B11;
    const register unsigned short int EDGSEQEN = 10;
    sbit  EDGSEQEN_bit at CTMUCON.B10;
    const register unsigned short int IDISSEN = 9;
    sbit  IDISSEN_bit at CTMUCON.B9;
    const register unsigned short int CTTRIG = 8;
    sbit  CTTRIG_bit at CTMUCON.B8;
    const register unsigned short int ITRIM5 = 7;
    sbit  ITRIM5_bit at CTMUCON.B7;
    const register unsigned short int ITRIM4 = 6;
    sbit  ITRIM4_bit at CTMUCON.B6;
    const register unsigned short int ITRIM3 = 5;
    sbit  ITRIM3_bit at CTMUCON.B5;
    const register unsigned short int ITRIM2 = 4;
    sbit  ITRIM2_bit at CTMUCON.B4;
    const register unsigned short int ITRIM1 = 3;
    sbit  ITRIM1_bit at CTMUCON.B3;
    const register unsigned short int ITRIM0 = 2;
    sbit  ITRIM0_bit at CTMUCON.B2;
    const register unsigned short int IRNG1 = 1;
    sbit  IRNG1_bit at CTMUCON.B1;
    const register unsigned short int IRNG0 = 0;
    sbit  IRNG0_bit at CTMUCON.B0;

sfr atomic unsigned long   volatile OSCCON           absolute 0xBF80F000;
sfr unsigned long   volatile OSCCONCLR        absolute 0xBF80F004;
sfr unsigned long   volatile OSCCONSET        absolute 0xBF80F008;
sfr unsigned long   volatile OSCCONINV        absolute 0xBF80F00C;
    // OSCCON bits
    const register unsigned short int PLLODIV2 = 29;
    sbit  PLLODIV2_bit at OSCCON.B29;
    const register unsigned short int PLLODIV1 = 28;
    sbit  PLLODIV1_bit at OSCCON.B28;
    const register unsigned short int PLLODIV0 = 27;
    sbit  PLLODIV0_bit at OSCCON.B27;
    const register unsigned short int FRCDIV2 = 26;
    sbit  FRCDIV2_bit at OSCCON.B26;
    const register unsigned short int FRCDIV1 = 25;
    sbit  FRCDIV1_bit at OSCCON.B25;
    const register unsigned short int FRCDIV0 = 24;
    sbit  FRCDIV0_bit at OSCCON.B24;
    const register unsigned short int SOSCRDY = 22;
    sbit  SOSCRDY_bit at OSCCON.B22;
    const register unsigned short int PBDIVRDY = 21;
    sbit  PBDIVRDY_bit at OSCCON.B21;
    const register unsigned short int PBDIV1 = 20;
    sbit  PBDIV1_bit at OSCCON.B20;
    const register unsigned short int PBDIV0 = 19;
    sbit  PBDIV0_bit at OSCCON.B19;
    const register unsigned short int PLLMULT2 = 18;
    sbit  PLLMULT2_bit at OSCCON.B18;
    const register unsigned short int PLLMULT1 = 17;
    sbit  PLLMULT1_bit at OSCCON.B17;
    const register unsigned short int PLLMULT0 = 16;
    sbit  PLLMULT0_bit at OSCCON.B16;
    const register unsigned short int COSC2 = 14;
    sbit  COSC2_bit at OSCCON.B14;
    const register unsigned short int COSC1 = 13;
    sbit  COSC1_bit at OSCCON.B13;
    const register unsigned short int COSC0 = 12;
    sbit  COSC0_bit at OSCCON.B12;
    const register unsigned short int NOSC2 = 10;
    sbit  NOSC2_bit at OSCCON.B10;
    const register unsigned short int NOSC1 = 9;
    sbit  NOSC1_bit at OSCCON.B9;
    const register unsigned short int NOSC0 = 8;
    sbit  NOSC0_bit at OSCCON.B8;
    const register unsigned short int CLKLOCK = 7;
    sbit  CLKLOCK_bit at OSCCON.B7;
    const register unsigned short int ULOCK = 6;
    sbit  ULOCK_bit at OSCCON.B6;
    const register unsigned short int SLOCK = 5;
    sbit  SLOCK_bit at OSCCON.B5;
    const register unsigned short int SLPEN = 4;
    sbit  SLPEN_bit at OSCCON.B4;
    const register unsigned short int CF = 3;
    sbit  CF_bit at OSCCON.B3;
    const register unsigned short int UFRCEN = 2;
    sbit  UFRCEN_bit at OSCCON.B2;
    const register unsigned short int SOSCEN = 1;
    sbit  SOSCEN_bit at OSCCON.B1;
    const register unsigned short int OSWEN = 0;
    sbit  OSWEN_bit at OSCCON.B0;

sfr atomic unsigned long   volatile OSCTUN           absolute 0xBF80F010;
sfr unsigned long   volatile OSCTUNCLR        absolute 0xBF80F014;
sfr unsigned long   volatile OSCTUNSET        absolute 0xBF80F018;
sfr unsigned long   volatile OSCTUNINV        absolute 0xBF80F01C;
    // OSCTUN bits
    const register unsigned short int TUN5 = 5;
    sbit  TUN5_bit at OSCTUN.B5;
    const register unsigned short int TUN4 = 4;
    sbit  TUN4_bit at OSCTUN.B4;
    const register unsigned short int TUN3 = 3;
    sbit  TUN3_bit at OSCTUN.B3;
    const register unsigned short int TUN2 = 2;
    sbit  TUN2_bit at OSCTUN.B2;
    const register unsigned short int TUN1 = 1;
    sbit  TUN1_bit at OSCTUN.B1;
    const register unsigned short int TUN0 = 0;
    sbit  TUN0_bit at OSCTUN.B0;

sfr atomic unsigned long            REFOCON          absolute 0xBF80F020;
sfr unsigned long   volatile REFOCONCLR       absolute 0xBF80F024;
sfr unsigned long   volatile REFOCONSET       absolute 0xBF80F028;
sfr unsigned long   volatile REFOCONINV       absolute 0xBF80F02C;
    // REFOCON bits
    const register unsigned short int RODIV14 = 30;
    sbit  RODIV14_bit at REFOCON.B30;
    const register unsigned short int RODIV13 = 29;
    sbit  RODIV13_bit at REFOCON.B29;
    const register unsigned short int RODIV12 = 28;
    sbit  RODIV12_bit at REFOCON.B28;
    const register unsigned short int RODIV11 = 27;
    sbit  RODIV11_bit at REFOCON.B27;
    const register unsigned short int RODIV10 = 26;
    sbit  RODIV10_bit at REFOCON.B26;
    const register unsigned short int RODIV9 = 25;
    sbit  RODIV9_bit at REFOCON.B25;
    const register unsigned short int RODIV8 = 24;
    sbit  RODIV8_bit at REFOCON.B24;
    const register unsigned short int RODIV7 = 23;
    sbit  RODIV7_bit at REFOCON.B23;
    const register unsigned short int RODIV6 = 22;
    sbit  RODIV6_bit at REFOCON.B22;
    const register unsigned short int RODIV5 = 21;
    sbit  RODIV5_bit at REFOCON.B21;
    const register unsigned short int RODIV4 = 20;
    sbit  RODIV4_bit at REFOCON.B20;
    const register unsigned short int RODIV3 = 19;
    sbit  RODIV3_bit at REFOCON.B19;
    const register unsigned short int RODIV2 = 18;
    sbit  RODIV2_bit at REFOCON.B18;
    const register unsigned short int RODIV1 = 17;
    sbit  RODIV1_bit at REFOCON.B17;
    const register unsigned short int RODIV0 = 16;
    sbit  RODIV0_bit at REFOCON.B16;
    sbit  ON__REFOCON_bit at REFOCON.B15;
    sbit  SIDL_REFOCON_bit at REFOCON.B13;
    const register unsigned short int OE = 12;
    sbit  OE_bit at REFOCON.B12;
    const register unsigned short int RSLP = 11;
    sbit  RSLP_bit at REFOCON.B11;
    const register unsigned short int DIVSWEN = 9;
    sbit  DIVSWEN_bit at REFOCON.B9;
    const register unsigned short int ACTIVE = 8;
    sbit  ACTIVE_bit at REFOCON.B8;
    const register unsigned short int ROSEL3 = 3;
    sbit  ROSEL3_bit at REFOCON.B3;
    const register unsigned short int ROSEL2 = 2;
    sbit  ROSEL2_bit at REFOCON.B2;
    const register unsigned short int ROSEL1 = 1;
    sbit  ROSEL1_bit at REFOCON.B1;
    const register unsigned short int ROSEL0 = 0;
    sbit  ROSEL0_bit at REFOCON.B0;

sfr atomic unsigned long   volatile REFOTRIM         absolute 0xBF80F030;
sfr unsigned long   volatile REFOTRIMCLR      absolute 0xBF80F034;
sfr unsigned long   volatile REFOTRIMSET      absolute 0xBF80F038;
sfr unsigned long   volatile REFOTRIMINV      absolute 0xBF80F03C;
    // REFOTRIM bits
    const register unsigned short int ROTRIM8 = 31;
    sbit  ROTRIM8_bit at REFOTRIM.B31;
    const register unsigned short int ROTRIM7 = 30;
    sbit  ROTRIM7_bit at REFOTRIM.B30;
    const register unsigned short int ROTRIM6 = 29;
    sbit  ROTRIM6_bit at REFOTRIM.B29;
    const register unsigned short int ROTRIM5 = 28;
    sbit  ROTRIM5_bit at REFOTRIM.B28;
    const register unsigned short int ROTRIM4 = 27;
    sbit  ROTRIM4_bit at REFOTRIM.B27;
    const register unsigned short int ROTRIM3 = 26;
    sbit  ROTRIM3_bit at REFOTRIM.B26;
    const register unsigned short int ROTRIM2 = 25;
    sbit  ROTRIM2_bit at REFOTRIM.B25;
    const register unsigned short int ROTRIM1 = 24;
    sbit  ROTRIM1_bit at REFOTRIM.B24;
    const register unsigned short int ROTRIM0 = 23;
    sbit  ROTRIM0_bit at REFOTRIM.B23;

sfr unsigned long   volatile CFGCON           absolute 0xBF80F200;
    // CFGCON bits
    const register unsigned short int IOLOCK = 13;
    sbit  IOLOCK_bit at CFGCON.B13;
    const register unsigned short int PMDLOCK = 12;
    sbit  PMDLOCK_bit at CFGCON.B12;
    const register unsigned short int JTAGEN = 3;
    sbit  JTAGEN_bit at CFGCON.B3;
    const register unsigned short int TROEN = 2;
    sbit  TROEN_bit at CFGCON.B2;
    const register unsigned short int TDOEN = 0;
    sbit  TDOEN_bit at CFGCON.B0;

sfr unsigned long   volatile DEVID            absolute 0xBF80F220;
    // DEVID bits
    const register unsigned short int VER3 = 31;
    sbit  VER3_bit at DEVID.B31;
    const register unsigned short int VER2 = 30;
    sbit  VER2_bit at DEVID.B30;
    const register unsigned short int VER1 = 29;
    sbit  VER1_bit at DEVID.B29;
    const register unsigned short int VER0 = 28;
    sbit  VER0_bit at DEVID.B28;
    const register unsigned short int DEVID27 = 27;
    sbit  DEVID27_bit at DEVID.B27;
    const register unsigned short int DEVID26 = 26;
    sbit  DEVID26_bit at DEVID.B26;
    const register unsigned short int DEVID25 = 25;
    sbit  DEVID25_bit at DEVID.B25;
    const register unsigned short int DEVID24 = 24;
    sbit  DEVID24_bit at DEVID.B24;
    const register unsigned short int DEVID23 = 23;
    sbit  DEVID23_bit at DEVID.B23;
    const register unsigned short int DEVID22 = 22;
    sbit  DEVID22_bit at DEVID.B22;
    const register unsigned short int DEVID21 = 21;
    sbit  DEVID21_bit at DEVID.B21;
    const register unsigned short int DEVID20 = 20;
    sbit  DEVID20_bit at DEVID.B20;
    const register unsigned short int DEVID19 = 19;
    sbit  DEVID19_bit at DEVID.B19;
    const register unsigned short int DEVID18 = 18;
    sbit  DEVID18_bit at DEVID.B18;
    const register unsigned short int DEVID17 = 17;
    sbit  DEVID17_bit at DEVID.B17;
    const register unsigned short int DEVID16 = 16;
    sbit  DEVID16_bit at DEVID.B16;
    const register unsigned short int DEVID15 = 15;
    sbit  DEVID15_bit at DEVID.B15;
    const register unsigned short int DEVID14 = 14;
    sbit  DEVID14_bit at DEVID.B14;
    const register unsigned short int DEVID13 = 13;
    sbit  DEVID13_bit at DEVID.B13;
    const register unsigned short int DEVID12 = 12;
    sbit  DEVID12_bit at DEVID.B12;
    const register unsigned short int DEVID11 = 11;
    sbit  DEVID11_bit at DEVID.B11;
    const register unsigned short int DEVID10 = 10;
    sbit  DEVID10_bit at DEVID.B10;
    const register unsigned short int DEVID9 = 9;
    sbit  DEVID9_bit at DEVID.B9;
    const register unsigned short int DEVID8 = 8;
    sbit  DEVID8_bit at DEVID.B8;
    const register unsigned short int DEVID7 = 7;
    sbit  DEVID7_bit at DEVID.B7;
    const register unsigned short int DEVID6 = 6;
    sbit  DEVID6_bit at DEVID.B6;
    const register unsigned short int DEVID5 = 5;
    sbit  DEVID5_bit at DEVID.B5;
    const register unsigned short int DEVID4 = 4;
    sbit  DEVID4_bit at DEVID.B4;
    const register unsigned short int DEVID3 = 3;
    sbit  DEVID3_bit at DEVID.B3;
    const register unsigned short int DEVID2 = 2;
    sbit  DEVID2_bit at DEVID.B2;
    const register unsigned short int DEVID1 = 1;
    sbit  DEVID1_bit at DEVID.B1;
    const register unsigned short int DEVID0 = 0;
    sbit  DEVID0_bit at DEVID.B0;

sfr atomic unsigned long   volatile SYSKEY           absolute 0xBF80F230;
sfr unsigned long   volatile SYSKEYCLR        absolute 0xBF80F234;
sfr unsigned long   volatile SYSKEYSET        absolute 0xBF80F238;
sfr unsigned long   volatile SYSKEYINV        absolute 0xBF80F23C;
    // SYSKEY bits
    const register unsigned short int SYSKEY31 = 31;
    sbit  SYSKEY31_bit at SYSKEY.B31;
    const register unsigned short int SYSKEY30 = 30;
    sbit  SYSKEY30_bit at SYSKEY.B30;
    const register unsigned short int SYSKEY29 = 29;
    sbit  SYSKEY29_bit at SYSKEY.B29;
    const register unsigned short int SYSKEY28 = 28;
    sbit  SYSKEY28_bit at SYSKEY.B28;
    const register unsigned short int SYSKEY27 = 27;
    sbit  SYSKEY27_bit at SYSKEY.B27;
    const register unsigned short int SYSKEY26 = 26;
    sbit  SYSKEY26_bit at SYSKEY.B26;
    const register unsigned short int SYSKEY25 = 25;
    sbit  SYSKEY25_bit at SYSKEY.B25;
    const register unsigned short int SYSKEY24 = 24;
    sbit  SYSKEY24_bit at SYSKEY.B24;
    const register unsigned short int SYSKEY23 = 23;
    sbit  SYSKEY23_bit at SYSKEY.B23;
    const register unsigned short int SYSKEY22 = 22;
    sbit  SYSKEY22_bit at SYSKEY.B22;
    const register unsigned short int SYSKEY21 = 21;
    sbit  SYSKEY21_bit at SYSKEY.B21;
    const register unsigned short int SYSKEY20 = 20;
    sbit  SYSKEY20_bit at SYSKEY.B20;
    const register unsigned short int SYSKEY19 = 19;
    sbit  SYSKEY19_bit at SYSKEY.B19;
    const register unsigned short int SYSKEY18 = 18;
    sbit  SYSKEY18_bit at SYSKEY.B18;
    const register unsigned short int SYSKEY17 = 17;
    sbit  SYSKEY17_bit at SYSKEY.B17;
    const register unsigned short int SYSKEY16 = 16;
    sbit  SYSKEY16_bit at SYSKEY.B16;
    const register unsigned short int SYSKEY15 = 15;
    sbit  SYSKEY15_bit at SYSKEY.B15;
    const register unsigned short int SYSKEY14 = 14;
    sbit  SYSKEY14_bit at SYSKEY.B14;
    const register unsigned short int SYSKEY13 = 13;
    sbit  SYSKEY13_bit at SYSKEY.B13;
    const register unsigned short int SYSKEY12 = 12;
    sbit  SYSKEY12_bit at SYSKEY.B12;
    const register unsigned short int SYSKEY11 = 11;
    sbit  SYSKEY11_bit at SYSKEY.B11;
    const register unsigned short int SYSKEY10 = 10;
    sbit  SYSKEY10_bit at SYSKEY.B10;
    const register unsigned short int SYSKEY9 = 9;
    sbit  SYSKEY9_bit at SYSKEY.B9;
    const register unsigned short int SYSKEY8 = 8;
    sbit  SYSKEY8_bit at SYSKEY.B8;
    const register unsigned short int SYSKEY7 = 7;
    sbit  SYSKEY7_bit at SYSKEY.B7;
    const register unsigned short int SYSKEY6 = 6;
    sbit  SYSKEY6_bit at SYSKEY.B6;
    const register unsigned short int SYSKEY5 = 5;
    sbit  SYSKEY5_bit at SYSKEY.B5;
    const register unsigned short int SYSKEY4 = 4;
    sbit  SYSKEY4_bit at SYSKEY.B4;
    const register unsigned short int SYSKEY3 = 3;
    sbit  SYSKEY3_bit at SYSKEY.B3;
    const register unsigned short int SYSKEY2 = 2;
    sbit  SYSKEY2_bit at SYSKEY.B2;
    const register unsigned short int SYSKEY1 = 1;
    sbit  SYSKEY1_bit at SYSKEY.B1;
    const register unsigned short int SYSKEY0 = 0;
    sbit  SYSKEY0_bit at SYSKEY.B0;

sfr atomic unsigned long            PMD1             absolute 0xBF80F240;
sfr unsigned long   volatile PMD1CLR          absolute 0xBF80F244;
sfr unsigned long   volatile PMD1SET          absolute 0xBF80F248;
sfr unsigned long   volatile PMD1INV          absolute 0xBF80F24C;
    // PMD1 bits
    const register unsigned short int CVRMD = 12;
    sbit  CVRMD_bit at PMD1.B12;
    const register unsigned short int CTMUMD = 8;
    sbit  CTMUMD_bit at PMD1.B8;
    const register unsigned short int AD1MD = 0;
    sbit  AD1MD_bit at PMD1.B0;

sfr atomic unsigned long            PMD2             absolute 0xBF80F250;
sfr unsigned long   volatile PMD2CLR          absolute 0xBF80F254;
sfr unsigned long   volatile PMD2SET          absolute 0xBF80F258;
sfr unsigned long   volatile PMD2INV          absolute 0xBF80F25C;
    // PMD2 bits
    const register unsigned short int CMP3MD = 2;
    sbit  CMP3MD_bit at PMD2.B2;
    const register unsigned short int CMP2MD = 1;
    sbit  CMP2MD_bit at PMD2.B1;
    const register unsigned short int CMP1MD = 0;
    sbit  CMP1MD_bit at PMD2.B0;

sfr atomic unsigned long            PMD3             absolute 0xBF80F260;
sfr unsigned long   volatile PMD3CLR          absolute 0xBF80F264;
sfr unsigned long   volatile PMD3SET          absolute 0xBF80F268;
sfr unsigned long   volatile PMD3INV          absolute 0xBF80F26C;
    // PMD3 bits
    const register unsigned short int OC5MD = 20;
    sbit  OC5MD_bit at PMD3.B20;
    const register unsigned short int OC4MD = 19;
    sbit  OC4MD_bit at PMD3.B19;
    const register unsigned short int OC3MD = 18;
    sbit  OC3MD_bit at PMD3.B18;
    const register unsigned short int OC2MD = 17;
    sbit  OC2MD_bit at PMD3.B17;
    const register unsigned short int OC1MD = 16;
    sbit  OC1MD_bit at PMD3.B16;
    const register unsigned short int IC5MD = 4;
    sbit  IC5MD_bit at PMD3.B4;
    const register unsigned short int IC4MD = 3;
    sbit  IC4MD_bit at PMD3.B3;
    const register unsigned short int IC3MD = 2;
    sbit  IC3MD_bit at PMD3.B2;
    const register unsigned short int IC2MD = 1;
    sbit  IC2MD_bit at PMD3.B1;
    const register unsigned short int IC1MD = 0;
    sbit  IC1MD_bit at PMD3.B0;

sfr atomic unsigned long   volatile PMD4             absolute 0xBF80F270;
sfr unsigned long   volatile PMD4CLR          absolute 0xBF80F274;
sfr unsigned long   volatile PMD4SET          absolute 0xBF80F278;
sfr unsigned long   volatile PMD4INV          absolute 0xBF80F27C;
    // PMD4 bits
    const register unsigned short int T5MD = 4;
    sbit  T5MD_bit at PMD4.B4;
    const register unsigned short int T4MD = 3;
    sbit  T4MD_bit at PMD4.B3;
    const register unsigned short int T3MD = 2;
    sbit  T3MD_bit at PMD4.B2;
    const register unsigned short int T2MD = 1;
    sbit  T2MD_bit at PMD4.B1;
    const register unsigned short int T1MD = 0;
    sbit  T1MD_bit at PMD4.B0;

sfr atomic unsigned long   volatile PMD5             absolute 0xBF80F280;
sfr unsigned long   volatile PMD5CLR          absolute 0xBF80F284;
sfr unsigned long   volatile PMD5SET          absolute 0xBF80F288;
sfr unsigned long   volatile PMD5INV          absolute 0xBF80F28C;
    // PMD5 bits
    const register unsigned short int I2C2MD = 17;
    sbit  I2C2MD_bit at PMD5.B17;
    const register unsigned short int I2C1MD = 16;
    sbit  I2C1MD_bit at PMD5.B16;
    const register unsigned short int SPI2MD = 9;
    sbit  SPI2MD_bit at PMD5.B9;
    const register unsigned short int SPI1MD = 8;
    sbit  SPI1MD_bit at PMD5.B8;
    const register unsigned short int U2MD = 1;
    sbit  U2MD_bit at PMD5.B1;
    const register unsigned short int U1MD = 0;
    sbit  U1MD_bit at PMD5.B0;

sfr atomic unsigned long   volatile PMD6             absolute 0xBF80F290;
sfr unsigned long   volatile PMD6CLR          absolute 0xBF80F294;
sfr unsigned long   volatile PMD6SET          absolute 0xBF80F298;
sfr unsigned long   volatile PMD6INV          absolute 0xBF80F29C;
    // PMD6 bits
    const register unsigned short int PMPMD = 16;
    sbit  PMPMD_bit at PMD6.B16;
    const register unsigned short int REFOMD = 1;
    sbit  REFOMD_bit at PMD6.B1;
    const register unsigned short int RTCCMD = 0;
    sbit  RTCCMD_bit at PMD6.B0;

sfr atomic unsigned long   volatile NVMCON           absolute 0xBF80F400;
sfr unsigned long   volatile NVMCONCLR        absolute 0xBF80F404;
sfr unsigned long   volatile NVMCONSET        absolute 0xBF80F408;
sfr unsigned long   volatile NVMCONINV        absolute 0xBF80F40C;
    // NVMCON bits
    const register unsigned short int WR = 15;
    sbit  WR_bit at NVMCON.B15;
    const register unsigned short int WREN = 14;
    sbit  WREN_bit at NVMCON.B14;
    const register unsigned short int WRERR = 13;
    sbit  WRERR_bit at NVMCON.B13;
    const register unsigned short int LVDERR = 12;
    sbit  LVDERR_bit at NVMCON.B12;
    const register unsigned short int LVDSTAT = 11;
    sbit  LVDSTAT_bit at NVMCON.B11;
    const register unsigned short int NVMOP3 = 3;
    sbit  NVMOP3_bit at NVMCON.B3;
    const register unsigned short int NVMOP2 = 2;
    sbit  NVMOP2_bit at NVMCON.B2;
    const register unsigned short int NVMOP1 = 1;
    sbit  NVMOP1_bit at NVMCON.B1;
    const register unsigned short int NVMOP0 = 0;
    sbit  NVMOP0_bit at NVMCON.B0;

sfr unsigned long            NVMKEY           absolute 0xBF80F410;
    // NVMKEY bits
    const register unsigned short int NVMKEY31 = 31;
    sbit  NVMKEY31_bit at NVMKEY.B31;
    const register unsigned short int NVMKEY30 = 30;
    sbit  NVMKEY30_bit at NVMKEY.B30;
    const register unsigned short int NVMKEY29 = 29;
    sbit  NVMKEY29_bit at NVMKEY.B29;
    const register unsigned short int NVMKEY28 = 28;
    sbit  NVMKEY28_bit at NVMKEY.B28;
    const register unsigned short int NVMKEY27 = 27;
    sbit  NVMKEY27_bit at NVMKEY.B27;
    const register unsigned short int NVMKEY26 = 26;
    sbit  NVMKEY26_bit at NVMKEY.B26;
    const register unsigned short int NVMKEY25 = 25;
    sbit  NVMKEY25_bit at NVMKEY.B25;
    const register unsigned short int NVMKEY24 = 24;
    sbit  NVMKEY24_bit at NVMKEY.B24;
    const register unsigned short int NVMKEY23 = 23;
    sbit  NVMKEY23_bit at NVMKEY.B23;
    const register unsigned short int NVMKEY22 = 22;
    sbit  NVMKEY22_bit at NVMKEY.B22;
    const register unsigned short int NVMKEY21 = 21;
    sbit  NVMKEY21_bit at NVMKEY.B21;
    const register unsigned short int NVMKEY20 = 20;
    sbit  NVMKEY20_bit at NVMKEY.B20;
    const register unsigned short int NVMKEY19 = 19;
    sbit  NVMKEY19_bit at NVMKEY.B19;
    const register unsigned short int NVMKEY18 = 18;
    sbit  NVMKEY18_bit at NVMKEY.B18;
    const register unsigned short int NVMKEY17 = 17;
    sbit  NVMKEY17_bit at NVMKEY.B17;
    const register unsigned short int NVMKEY16 = 16;
    sbit  NVMKEY16_bit at NVMKEY.B16;
    const register unsigned short int NVMKEY15 = 15;
    sbit  NVMKEY15_bit at NVMKEY.B15;
    const register unsigned short int NVMKEY14 = 14;
    sbit  NVMKEY14_bit at NVMKEY.B14;
    const register unsigned short int NVMKEY13 = 13;
    sbit  NVMKEY13_bit at NVMKEY.B13;
    const register unsigned short int NVMKEY12 = 12;
    sbit  NVMKEY12_bit at NVMKEY.B12;
    const register unsigned short int NVMKEY11 = 11;
    sbit  NVMKEY11_bit at NVMKEY.B11;
    const register unsigned short int NVMKEY10 = 10;
    sbit  NVMKEY10_bit at NVMKEY.B10;
    const register unsigned short int NVMKEY9 = 9;
    sbit  NVMKEY9_bit at NVMKEY.B9;
    const register unsigned short int NVMKEY8 = 8;
    sbit  NVMKEY8_bit at NVMKEY.B8;
    const register unsigned short int NVMKEY7 = 7;
    sbit  NVMKEY7_bit at NVMKEY.B7;
    const register unsigned short int NVMKEY6 = 6;
    sbit  NVMKEY6_bit at NVMKEY.B6;
    const register unsigned short int NVMKEY5 = 5;
    sbit  NVMKEY5_bit at NVMKEY.B5;
    const register unsigned short int NVMKEY4 = 4;
    sbit  NVMKEY4_bit at NVMKEY.B4;
    const register unsigned short int NVMKEY3 = 3;
    sbit  NVMKEY3_bit at NVMKEY.B3;
    const register unsigned short int NVMKEY2 = 2;
    sbit  NVMKEY2_bit at NVMKEY.B2;
    const register unsigned short int NVMKEY1 = 1;
    sbit  NVMKEY1_bit at NVMKEY.B1;
    const register unsigned short int NVMKEY0 = 0;
    sbit  NVMKEY0_bit at NVMKEY.B0;

sfr atomic unsigned long   volatile NVMADDR          absolute 0xBF80F420;
sfr unsigned long   volatile NVMADDRCLR       absolute 0xBF80F424;
sfr unsigned long   volatile NVMADDRSET       absolute 0xBF80F428;
sfr unsigned long   volatile NVMADDRINV       absolute 0xBF80F42C;
    // NVMADDR bits
    const register unsigned short int NVMADDR31 = 31;
    sbit  NVMADDR31_bit at NVMADDR.B31;
    const register unsigned short int NVMADDR30 = 30;
    sbit  NVMADDR30_bit at NVMADDR.B30;
    const register unsigned short int NVMADDR29 = 29;
    sbit  NVMADDR29_bit at NVMADDR.B29;
    const register unsigned short int NVMADDR28 = 28;
    sbit  NVMADDR28_bit at NVMADDR.B28;
    const register unsigned short int NVMADDR27 = 27;
    sbit  NVMADDR27_bit at NVMADDR.B27;
    const register unsigned short int NVMADDR26 = 26;
    sbit  NVMADDR26_bit at NVMADDR.B26;
    const register unsigned short int NVMADDR25 = 25;
    sbit  NVMADDR25_bit at NVMADDR.B25;
    const register unsigned short int NVMADDR24 = 24;
    sbit  NVMADDR24_bit at NVMADDR.B24;
    const register unsigned short int NVMADDR23 = 23;
    sbit  NVMADDR23_bit at NVMADDR.B23;
    const register unsigned short int NVMADDR22 = 22;
    sbit  NVMADDR22_bit at NVMADDR.B22;
    const register unsigned short int NVMADDR21 = 21;
    sbit  NVMADDR21_bit at NVMADDR.B21;
    const register unsigned short int NVMADDR20 = 20;
    sbit  NVMADDR20_bit at NVMADDR.B20;
    const register unsigned short int NVMADDR19 = 19;
    sbit  NVMADDR19_bit at NVMADDR.B19;
    const register unsigned short int NVMADDR18 = 18;
    sbit  NVMADDR18_bit at NVMADDR.B18;
    const register unsigned short int NVMADDR17 = 17;
    sbit  NVMADDR17_bit at NVMADDR.B17;
    const register unsigned short int NVMADDR16 = 16;
    sbit  NVMADDR16_bit at NVMADDR.B16;
    const register unsigned short int NVMADDR15 = 15;
    sbit  NVMADDR15_bit at NVMADDR.B15;
    const register unsigned short int NVMADDR14 = 14;
    sbit  NVMADDR14_bit at NVMADDR.B14;
    const register unsigned short int NVMADDR13 = 13;
    sbit  NVMADDR13_bit at NVMADDR.B13;
    const register unsigned short int NVMADDR12 = 12;
    sbit  NVMADDR12_bit at NVMADDR.B12;
    const register unsigned short int NVMADDR11 = 11;
    sbit  NVMADDR11_bit at NVMADDR.B11;
    const register unsigned short int NVMADDR10 = 10;
    sbit  NVMADDR10_bit at NVMADDR.B10;
    const register unsigned short int NVMADDR9 = 9;
    sbit  NVMADDR9_bit at NVMADDR.B9;
    const register unsigned short int NVMADDR8 = 8;
    sbit  NVMADDR8_bit at NVMADDR.B8;
    const register unsigned short int NVMADDR7 = 7;
    sbit  NVMADDR7_bit at NVMADDR.B7;
    const register unsigned short int NVMADDR6 = 6;
    sbit  NVMADDR6_bit at NVMADDR.B6;
    const register unsigned short int NVMADDR5 = 5;
    sbit  NVMADDR5_bit at NVMADDR.B5;
    const register unsigned short int NVMADDR4 = 4;
    sbit  NVMADDR4_bit at NVMADDR.B4;
    const register unsigned short int NVMADDR3 = 3;
    sbit  NVMADDR3_bit at NVMADDR.B3;
    const register unsigned short int NVMADDR2 = 2;
    sbit  NVMADDR2_bit at NVMADDR.B2;
    const register unsigned short int NVMADDR1 = 1;
    sbit  NVMADDR1_bit at NVMADDR.B1;
    const register unsigned short int NVMADDR0 = 0;
    sbit  NVMADDR0_bit at NVMADDR.B0;

sfr unsigned long   volatile NVMDATA          absolute 0xBF80F430;
    // NVMDATA bits
    const register unsigned short int NVMDATA31 = 31;
    sbit  NVMDATA31_bit at NVMDATA.B31;
    const register unsigned short int NVMDATA30 = 30;
    sbit  NVMDATA30_bit at NVMDATA.B30;
    const register unsigned short int NVMDATA29 = 29;
    sbit  NVMDATA29_bit at NVMDATA.B29;
    const register unsigned short int NVMDATA28 = 28;
    sbit  NVMDATA28_bit at NVMDATA.B28;
    const register unsigned short int NVMDATA27 = 27;
    sbit  NVMDATA27_bit at NVMDATA.B27;
    const register unsigned short int NVMDATA26 = 26;
    sbit  NVMDATA26_bit at NVMDATA.B26;
    const register unsigned short int NVMDATA25 = 25;
    sbit  NVMDATA25_bit at NVMDATA.B25;
    const register unsigned short int NVMDATA24 = 24;
    sbit  NVMDATA24_bit at NVMDATA.B24;
    const register unsigned short int NVMDATA23 = 23;
    sbit  NVMDATA23_bit at NVMDATA.B23;
    const register unsigned short int NVMDATA22 = 22;
    sbit  NVMDATA22_bit at NVMDATA.B22;
    const register unsigned short int NVMDATA21 = 21;
    sbit  NVMDATA21_bit at NVMDATA.B21;
    const register unsigned short int NVMDATA20 = 20;
    sbit  NVMDATA20_bit at NVMDATA.B20;
    const register unsigned short int NVMDATA19 = 19;
    sbit  NVMDATA19_bit at NVMDATA.B19;
    const register unsigned short int NVMDATA18 = 18;
    sbit  NVMDATA18_bit at NVMDATA.B18;
    const register unsigned short int NVMDATA17 = 17;
    sbit  NVMDATA17_bit at NVMDATA.B17;
    const register unsigned short int NVMDATA16 = 16;
    sbit  NVMDATA16_bit at NVMDATA.B16;
    const register unsigned short int NVMDATA15 = 15;
    sbit  NVMDATA15_bit at NVMDATA.B15;
    const register unsigned short int NVMDATA14 = 14;
    sbit  NVMDATA14_bit at NVMDATA.B14;
    const register unsigned short int NVMDATA13 = 13;
    sbit  NVMDATA13_bit at NVMDATA.B13;
    const register unsigned short int NVMDATA12 = 12;
    sbit  NVMDATA12_bit at NVMDATA.B12;
    const register unsigned short int NVMDATA11 = 11;
    sbit  NVMDATA11_bit at NVMDATA.B11;
    const register unsigned short int NVMDATA10 = 10;
    sbit  NVMDATA10_bit at NVMDATA.B10;
    const register unsigned short int NVMDATA9 = 9;
    sbit  NVMDATA9_bit at NVMDATA.B9;
    const register unsigned short int NVMDATA8 = 8;
    sbit  NVMDATA8_bit at NVMDATA.B8;
    const register unsigned short int NVMDATA7 = 7;
    sbit  NVMDATA7_bit at NVMDATA.B7;
    const register unsigned short int NVMDATA6 = 6;
    sbit  NVMDATA6_bit at NVMDATA.B6;
    const register unsigned short int NVMDATA5 = 5;
    sbit  NVMDATA5_bit at NVMDATA.B5;
    const register unsigned short int NVMDATA4 = 4;
    sbit  NVMDATA4_bit at NVMDATA.B4;
    const register unsigned short int NVMDATA3 = 3;
    sbit  NVMDATA3_bit at NVMDATA.B3;
    const register unsigned short int NVMDATA2 = 2;
    sbit  NVMDATA2_bit at NVMDATA.B2;
    const register unsigned short int NVMDATA1 = 1;
    sbit  NVMDATA1_bit at NVMDATA.B1;
    const register unsigned short int NVMDATA0 = 0;
    sbit  NVMDATA0_bit at NVMDATA.B0;

sfr unsigned long   volatile NVMSRCADDR       absolute 0xBF80F440;
    // NVMSRCADDR bits
    const register unsigned short int NVMSRCADDR31 = 31;
    sbit  NVMSRCADDR31_bit at NVMSRCADDR.B31;
    const register unsigned short int NVMSRCADDR30 = 30;
    sbit  NVMSRCADDR30_bit at NVMSRCADDR.B30;
    const register unsigned short int NVMSRCADDR29 = 29;
    sbit  NVMSRCADDR29_bit at NVMSRCADDR.B29;
    const register unsigned short int NVMSRCADDR28 = 28;
    sbit  NVMSRCADDR28_bit at NVMSRCADDR.B28;
    const register unsigned short int NVMSRCADDR27 = 27;
    sbit  NVMSRCADDR27_bit at NVMSRCADDR.B27;
    const register unsigned short int NVMSRCADDR26 = 26;
    sbit  NVMSRCADDR26_bit at NVMSRCADDR.B26;
    const register unsigned short int NVMSRCADDR25 = 25;
    sbit  NVMSRCADDR25_bit at NVMSRCADDR.B25;
    const register unsigned short int NVMSRCADDR24 = 24;
    sbit  NVMSRCADDR24_bit at NVMSRCADDR.B24;
    const register unsigned short int NVMSRCADDR23 = 23;
    sbit  NVMSRCADDR23_bit at NVMSRCADDR.B23;
    const register unsigned short int NVMSRCADDR22 = 22;
    sbit  NVMSRCADDR22_bit at NVMSRCADDR.B22;
    const register unsigned short int NVMSRCADDR21 = 21;
    sbit  NVMSRCADDR21_bit at NVMSRCADDR.B21;
    const register unsigned short int NVMSRCADDR20 = 20;
    sbit  NVMSRCADDR20_bit at NVMSRCADDR.B20;
    const register unsigned short int NVMSRCADDR19 = 19;
    sbit  NVMSRCADDR19_bit at NVMSRCADDR.B19;
    const register unsigned short int NVMSRCADDR18 = 18;
    sbit  NVMSRCADDR18_bit at NVMSRCADDR.B18;
    const register unsigned short int NVMSRCADDR17 = 17;
    sbit  NVMSRCADDR17_bit at NVMSRCADDR.B17;
    const register unsigned short int NVMSRCADDR16 = 16;
    sbit  NVMSRCADDR16_bit at NVMSRCADDR.B16;
    const register unsigned short int NVMSRCADDR15 = 15;
    sbit  NVMSRCADDR15_bit at NVMSRCADDR.B15;
    const register unsigned short int NVMSRCADDR14 = 14;
    sbit  NVMSRCADDR14_bit at NVMSRCADDR.B14;
    const register unsigned short int NVMSRCADDR13 = 13;
    sbit  NVMSRCADDR13_bit at NVMSRCADDR.B13;
    const register unsigned short int NVMSRCADDR12 = 12;
    sbit  NVMSRCADDR12_bit at NVMSRCADDR.B12;
    const register unsigned short int NVMSRCADDR11 = 11;
    sbit  NVMSRCADDR11_bit at NVMSRCADDR.B11;
    const register unsigned short int NVMSRCADDR10 = 10;
    sbit  NVMSRCADDR10_bit at NVMSRCADDR.B10;
    const register unsigned short int NVMSRCADDR9 = 9;
    sbit  NVMSRCADDR9_bit at NVMSRCADDR.B9;
    const register unsigned short int NVMSRCADDR8 = 8;
    sbit  NVMSRCADDR8_bit at NVMSRCADDR.B8;
    const register unsigned short int NVMSRCADDR7 = 7;
    sbit  NVMSRCADDR7_bit at NVMSRCADDR.B7;
    const register unsigned short int NVMSRCADDR6 = 6;
    sbit  NVMSRCADDR6_bit at NVMSRCADDR.B6;
    const register unsigned short int NVMSRCADDR5 = 5;
    sbit  NVMSRCADDR5_bit at NVMSRCADDR.B5;
    const register unsigned short int NVMSRCADDR4 = 4;
    sbit  NVMSRCADDR4_bit at NVMSRCADDR.B4;
    const register unsigned short int NVMSRCADDR3 = 3;
    sbit  NVMSRCADDR3_bit at NVMSRCADDR.B3;
    const register unsigned short int NVMSRCADDR2 = 2;
    sbit  NVMSRCADDR2_bit at NVMSRCADDR.B2;
    const register unsigned short int NVMSRCADDR1 = 1;
    sbit  NVMSRCADDR1_bit at NVMSRCADDR.B1;
    const register unsigned short int NVMSRCADDR0 = 0;
    sbit  NVMSRCADDR0_bit at NVMSRCADDR.B0;

sfr atomic unsigned long   volatile RCON             absolute 0xBF80F600;
sfr unsigned long   volatile RCONCLR          absolute 0xBF80F604;
sfr unsigned long   volatile RCONSET          absolute 0xBF80F608;
sfr unsigned long   volatile RCONINV          absolute 0xBF80F60C;
    // RCON bits
    const register unsigned short int CMR = 9;
    sbit  CMR_bit at RCON.B9;
    const register unsigned short int VREGS = 8;
    sbit  VREGS_bit at RCON.B8;
    const register unsigned short int EXTR = 7;
    sbit  EXTR_bit at RCON.B7;
    const register unsigned short int SWR = 6;
    sbit  SWR_bit at RCON.B6;
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

sfr atomic unsigned long   volatile RSWRST           absolute 0xBF80F610;
sfr unsigned long   volatile RSWRSTCLR        absolute 0xBF80F614;
sfr unsigned long   volatile RSWRSTSET        absolute 0xBF80F618;
sfr unsigned long   volatile RSWRSTINV        absolute 0xBF80F61C;
    // RSWRST bits
    const register unsigned short int SWRST = 0;
    sbit  SWRST_bit at RSWRST.B0;

sfr unsigned long   volatile INT1R            absolute 0xBF80FA04;
    // INT1R bits
    const register unsigned short int INT1R3 = 3;
    sbit  INT1R3_bit at INT1R.B3;
    const register unsigned short int INT1R2 = 2;
    sbit  INT1R2_bit at INT1R.B2;
    const register unsigned short int INT1R1 = 1;
    sbit  INT1R1_bit at INT1R.B1;
    const register unsigned short int INT1R0 = 0;
    sbit  INT1R0_bit at INT1R.B0;

sfr unsigned long   volatile INT2R            absolute 0xBF80FA08;
    // INT2R bits
    const register unsigned short int INT2R3 = 3;
    sbit  INT2R3_bit at INT2R.B3;
    const register unsigned short int INT2R2 = 2;
    sbit  INT2R2_bit at INT2R.B2;
    const register unsigned short int INT2R1 = 1;
    sbit  INT2R1_bit at INT2R.B1;
    const register unsigned short int INT2R0 = 0;
    sbit  INT2R0_bit at INT2R.B0;

sfr unsigned long   volatile INT3R            absolute 0xBF80FA0C;
    // INT3R bits
    const register unsigned short int INT3R3 = 3;
    sbit  INT3R3_bit at INT3R.B3;
    const register unsigned short int INT3R2 = 2;
    sbit  INT3R2_bit at INT3R.B2;
    const register unsigned short int INT3R1 = 1;
    sbit  INT3R1_bit at INT3R.B1;
    const register unsigned short int INT3R0 = 0;
    sbit  INT3R0_bit at INT3R.B0;

sfr unsigned long   volatile INT4R            absolute 0xBF80FA10;
    // INT4R bits
    const register unsigned short int INT4R3 = 3;
    sbit  INT4R3_bit at INT4R.B3;
    const register unsigned short int INT4R2 = 2;
    sbit  INT4R2_bit at INT4R.B2;
    const register unsigned short int INT4R1 = 1;
    sbit  INT4R1_bit at INT4R.B1;
    const register unsigned short int INT4R0 = 0;
    sbit  INT4R0_bit at INT4R.B0;

sfr unsigned long   volatile T2CKR            absolute 0xBF80FA18;
    // T2CKR bits
    const register unsigned short int T2CKR3 = 3;
    sbit  T2CKR3_bit at T2CKR.B3;
    const register unsigned short int T2CKR2 = 2;
    sbit  T2CKR2_bit at T2CKR.B2;
    const register unsigned short int T2CKR1 = 1;
    sbit  T2CKR1_bit at T2CKR.B1;
    const register unsigned short int T2CKR0 = 0;
    sbit  T2CKR0_bit at T2CKR.B0;

sfr unsigned long   volatile T3CKR            absolute 0xBF80FA1C;
    // T3CKR bits
    const register unsigned short int T3CKR3 = 3;
    sbit  T3CKR3_bit at T3CKR.B3;
    const register unsigned short int T3CKR2 = 2;
    sbit  T3CKR2_bit at T3CKR.B2;
    const register unsigned short int T3CKR1 = 1;
    sbit  T3CKR1_bit at T3CKR.B1;
    const register unsigned short int T3CKR0 = 0;
    sbit  T3CKR0_bit at T3CKR.B0;

sfr unsigned long   volatile T4CKR            absolute 0xBF80FA20;
    // T4CKR bits
    const register unsigned short int T4CKR3 = 3;
    sbit  T4CKR3_bit at T4CKR.B3;
    const register unsigned short int T4CKR2 = 2;
    sbit  T4CKR2_bit at T4CKR.B2;
    const register unsigned short int T4CKR1 = 1;
    sbit  T4CKR1_bit at T4CKR.B1;
    const register unsigned short int T4CKR0 = 0;
    sbit  T4CKR0_bit at T4CKR.B0;

sfr unsigned long   volatile T5CKR            absolute 0xBF80FA24;
    // T5CKR bits
    const register unsigned short int T5CKR3 = 3;
    sbit  T5CKR3_bit at T5CKR.B3;
    const register unsigned short int T5CKR2 = 2;
    sbit  T5CKR2_bit at T5CKR.B2;
    const register unsigned short int T5CKR1 = 1;
    sbit  T5CKR1_bit at T5CKR.B1;
    const register unsigned short int T5CKR0 = 0;
    sbit  T5CKR0_bit at T5CKR.B0;

sfr unsigned long   volatile IC1R             absolute 0xBF80FA28;
    // IC1R bits
    const register unsigned short int IC1R3 = 3;
    sbit  IC1R3_bit at IC1R.B3;
    const register unsigned short int IC1R2 = 2;
    sbit  IC1R2_bit at IC1R.B2;
    const register unsigned short int IC1R1 = 1;
    sbit  IC1R1_bit at IC1R.B1;
    const register unsigned short int IC1R0 = 0;
    sbit  IC1R0_bit at IC1R.B0;

sfr unsigned long   volatile IC2R             absolute 0xBF80FA2C;
    // IC2R bits
    const register unsigned short int IC2R3 = 3;
    sbit  IC2R3_bit at IC2R.B3;
    const register unsigned short int IC2R2 = 2;
    sbit  IC2R2_bit at IC2R.B2;
    const register unsigned short int IC2R1 = 1;
    sbit  IC2R1_bit at IC2R.B1;
    const register unsigned short int IC2R0 = 0;
    sbit  IC2R0_bit at IC2R.B0;

sfr unsigned long   volatile IC3R             absolute 0xBF80FA30;
    // IC3R bits
    const register unsigned short int IC3R3 = 3;
    sbit  IC3R3_bit at IC3R.B3;
    const register unsigned short int IC3R2 = 2;
    sbit  IC3R2_bit at IC3R.B2;
    const register unsigned short int IC3R1 = 1;
    sbit  IC3R1_bit at IC3R.B1;
    const register unsigned short int IC3R0 = 0;
    sbit  IC3R0_bit at IC3R.B0;

sfr unsigned long   volatile IC4R             absolute 0xBF80FA34;
    // IC4R bits
    const register unsigned short int IC4R3 = 3;
    sbit  IC4R3_bit at IC4R.B3;
    const register unsigned short int IC4R2 = 2;
    sbit  IC4R2_bit at IC4R.B2;
    const register unsigned short int IC4R1 = 1;
    sbit  IC4R1_bit at IC4R.B1;
    const register unsigned short int IC4R0 = 0;
    sbit  IC4R0_bit at IC4R.B0;

sfr unsigned long   volatile IC5R             absolute 0xBF80FA38;
    // IC5R bits
    const register unsigned short int IC5R3 = 3;
    sbit  IC5R3_bit at IC5R.B3;
    const register unsigned short int IC5R2 = 2;
    sbit  IC5R2_bit at IC5R.B2;
    const register unsigned short int IC5R1 = 1;
    sbit  IC5R1_bit at IC5R.B1;
    const register unsigned short int IC5R0 = 0;
    sbit  IC5R0_bit at IC5R.B0;

sfr unsigned long   volatile OCFAR            absolute 0xBF80FA48;
    // OCFAR bits
    const register unsigned short int OCFAR3 = 3;
    sbit  OCFAR3_bit at OCFAR.B3;
    const register unsigned short int OCFAR2 = 2;
    sbit  OCFAR2_bit at OCFAR.B2;
    const register unsigned short int OCFAR1 = 1;
    sbit  OCFAR1_bit at OCFAR.B1;
    const register unsigned short int OCFAR0 = 0;
    sbit  OCFAR0_bit at OCFAR.B0;

sfr unsigned long   volatile OCFBR            absolute 0xBF80FA4C;
    // OCFBR bits
    const register unsigned short int OCFBR3 = 3;
    sbit  OCFBR3_bit at OCFBR.B3;
    const register unsigned short int OCFBR2 = 2;
    sbit  OCFBR2_bit at OCFBR.B2;
    const register unsigned short int OCFBR1 = 1;
    sbit  OCFBR1_bit at OCFBR.B1;
    const register unsigned short int OCFBR0 = 0;
    sbit  OCFBR0_bit at OCFBR.B0;

sfr unsigned long   volatile U1RXR            absolute 0xBF80FA50;
    // U1RXR bits
    const register unsigned short int U1RXR3 = 3;
    sbit  U1RXR3_bit at U1RXR.B3;
    const register unsigned short int U1RXR2 = 2;
    sbit  U1RXR2_bit at U1RXR.B2;
    const register unsigned short int U1RXR1 = 1;
    sbit  U1RXR1_bit at U1RXR.B1;
    const register unsigned short int U1RXR0 = 0;
    sbit  U1RXR0_bit at U1RXR.B0;

sfr unsigned long   volatile U1CTSR           absolute 0xBF80FA54;
    // U1CTSR bits
    const register unsigned short int U1CTSR3 = 3;
    sbit  U1CTSR3_bit at U1CTSR.B3;
    const register unsigned short int U1CTSR2 = 2;
    sbit  U1CTSR2_bit at U1CTSR.B2;
    const register unsigned short int U1CTSR1 = 1;
    sbit  U1CTSR1_bit at U1CTSR.B1;
    const register unsigned short int U1CTSR0 = 0;
    sbit  U1CTSR0_bit at U1CTSR.B0;

sfr unsigned long   volatile U2RXR            absolute 0xBF80FA58;
    // U2RXR bits
    const register unsigned short int U2RXR3 = 3;
    sbit  U2RXR3_bit at U2RXR.B3;
    const register unsigned short int U2RXR2 = 2;
    sbit  U2RXR2_bit at U2RXR.B2;
    const register unsigned short int U2RXR1 = 1;
    sbit  U2RXR1_bit at U2RXR.B1;
    const register unsigned short int U2RXR0 = 0;
    sbit  U2RXR0_bit at U2RXR.B0;

sfr unsigned long   volatile U2CTSR           absolute 0xBF80FA5C;
    // U2CTSR bits
    const register unsigned short int U2CTSR3 = 3;
    sbit  U2CTSR3_bit at U2CTSR.B3;
    const register unsigned short int U2CTSR2 = 2;
    sbit  U2CTSR2_bit at U2CTSR.B2;
    const register unsigned short int U2CTSR1 = 1;
    sbit  U2CTSR1_bit at U2CTSR.B1;
    const register unsigned short int U2CTSR0 = 0;
    sbit  U2CTSR0_bit at U2CTSR.B0;

sfr unsigned long   volatile SDI1R            absolute 0xBF80FA84;
    // SDI1R bits
    const register unsigned short int SDI1R3 = 3;
    sbit  SDI1R3_bit at SDI1R.B3;
    const register unsigned short int SDI1R2 = 2;
    sbit  SDI1R2_bit at SDI1R.B2;
    const register unsigned short int SDI1R1 = 1;
    sbit  SDI1R1_bit at SDI1R.B1;
    const register unsigned short int SDI1R0 = 0;
    sbit  SDI1R0_bit at SDI1R.B0;

sfr unsigned long   volatile SS1R             absolute 0xBF80FA88;
    // SS1R bits
    const register unsigned short int SS1R3 = 3;
    sbit  SS1R3_bit at SS1R.B3;
    const register unsigned short int SS1R2 = 2;
    sbit  SS1R2_bit at SS1R.B2;
    const register unsigned short int SS1R1 = 1;
    sbit  SS1R1_bit at SS1R.B1;
    const register unsigned short int SS1R0 = 0;
    sbit  SS1R0_bit at SS1R.B0;

sfr unsigned long   volatile SDI2R            absolute 0xBF80FA90;
    // SDI2R bits
    const register unsigned short int SDI2R3 = 3;
    sbit  SDI2R3_bit at SDI2R.B3;
    const register unsigned short int SDI2R2 = 2;
    sbit  SDI2R2_bit at SDI2R.B2;
    const register unsigned short int SDI2R1 = 1;
    sbit  SDI2R1_bit at SDI2R.B1;
    const register unsigned short int SDI2R0 = 0;
    sbit  SDI2R0_bit at SDI2R.B0;

sfr unsigned long   volatile SS2R             absolute 0xBF80FA94;
    // SS2R bits
    const register unsigned short int SS2R3 = 3;
    sbit  SS2R3_bit at SS2R.B3;
    const register unsigned short int SS2R2 = 2;
    sbit  SS2R2_bit at SS2R.B2;
    const register unsigned short int SS2R1 = 1;
    sbit  SS2R1_bit at SS2R.B1;
    const register unsigned short int SS2R0 = 0;
    sbit  SS2R0_bit at SS2R.B0;

sfr unsigned long   volatile REFCLKIR         absolute 0xBF80FAB8;
    // REFCLKIR bits
    const register unsigned short int REFCLKIR3 = 3;
    sbit  REFCLKIR3_bit at REFCLKIR.B3;
    const register unsigned short int REFCLKIR2 = 2;
    sbit  REFCLKIR2_bit at REFCLKIR.B2;
    const register unsigned short int REFCLKIR1 = 1;
    sbit  REFCLKIR1_bit at REFCLKIR.B1;
    const register unsigned short int REFCLKIR0 = 0;
    sbit  REFCLKIR0_bit at REFCLKIR.B0;

sfr unsigned long   volatile RPA0R            absolute 0xBF80FB00;
    // RPA0R bits
    const register unsigned short int RPA0R3 = 3;
    sbit  RPA0R3_bit at RPA0R.B3;
    const register unsigned short int RPA0R2 = 2;
    sbit  RPA0R2_bit at RPA0R.B2;
    const register unsigned short int RPA0R1 = 1;
    sbit  RPA0R1_bit at RPA0R.B1;
    const register unsigned short int RPA0R0 = 0;
    sbit  RPA0R0_bit at RPA0R.B0;

sfr unsigned long   volatile RPA1R            absolute 0xBF80FB04;
    // RPA1R bits
    const register unsigned short int RPA1R3 = 3;
    sbit  RPA1R3_bit at RPA1R.B3;
    const register unsigned short int RPA1R2 = 2;
    sbit  RPA1R2_bit at RPA1R.B2;
    const register unsigned short int RPA1R1 = 1;
    sbit  RPA1R1_bit at RPA1R.B1;
    const register unsigned short int RPA1R0 = 0;
    sbit  RPA1R0_bit at RPA1R.B0;

sfr unsigned long   volatile RPA2R            absolute 0xBF80FB08;
    // RPA2R bits
    const register unsigned short int RPA2R3 = 3;
    sbit  RPA2R3_bit at RPA2R.B3;
    const register unsigned short int RPA2R2 = 2;
    sbit  RPA2R2_bit at RPA2R.B2;
    const register unsigned short int RPA2R1 = 1;
    sbit  RPA2R1_bit at RPA2R.B1;
    const register unsigned short int RPA2R0 = 0;
    sbit  RPA2R0_bit at RPA2R.B0;

sfr unsigned long   volatile RPA3R            absolute 0xBF80FB0C;
    // RPA3R bits
    const register unsigned short int RPA3R3 = 3;
    sbit  RPA3R3_bit at RPA3R.B3;
    const register unsigned short int RPA3R2 = 2;
    sbit  RPA3R2_bit at RPA3R.B2;
    const register unsigned short int RPA3R1 = 1;
    sbit  RPA3R1_bit at RPA3R.B1;
    const register unsigned short int RPA3R0 = 0;
    sbit  RPA3R0_bit at RPA3R.B0;

sfr unsigned long   volatile RPA4R            absolute 0xBF80FB10;
    // RPA4R bits
    const register unsigned short int RPA4R3 = 3;
    sbit  RPA4R3_bit at RPA4R.B3;
    const register unsigned short int RPA4R2 = 2;
    sbit  RPA4R2_bit at RPA4R.B2;
    const register unsigned short int RPA4R1 = 1;
    sbit  RPA4R1_bit at RPA4R.B1;
    const register unsigned short int RPA4R0 = 0;
    sbit  RPA4R0_bit at RPA4R.B0;

sfr unsigned long   volatile RPA8R            absolute 0xBF80FB20;
    // RPA8R bits
    const register unsigned short int RPA8R3 = 3;
    sbit  RPA8R3_bit at RPA8R.B3;
    const register unsigned short int RPA8R2 = 2;
    sbit  RPA8R2_bit at RPA8R.B2;
    const register unsigned short int RPA8R1 = 1;
    sbit  RPA8R1_bit at RPA8R.B1;
    const register unsigned short int RPA8R0 = 0;
    sbit  RPA8R0_bit at RPA8R.B0;

sfr unsigned long   volatile RPA9R            absolute 0xBF80FB24;
    // RPA9R bits
    const register unsigned short int RPA9R3 = 3;
    sbit  RPA9R3_bit at RPA9R.B3;
    const register unsigned short int RPA9R2 = 2;
    sbit  RPA9R2_bit at RPA9R.B2;
    const register unsigned short int RPA9R1 = 1;
    sbit  RPA9R1_bit at RPA9R.B1;
    const register unsigned short int RPA9R0 = 0;
    sbit  RPA9R0_bit at RPA9R.B0;

sfr unsigned long   volatile RPB0R            absolute 0xBF80FB2C;
    // RPB0R bits
    const register unsigned short int RPB0R3 = 3;
    sbit  RPB0R3_bit at RPB0R.B3;
    const register unsigned short int RPB0R2 = 2;
    sbit  RPB0R2_bit at RPB0R.B2;
    const register unsigned short int RPB0R1 = 1;
    sbit  RPB0R1_bit at RPB0R.B1;
    const register unsigned short int RPB0R0 = 0;
    sbit  RPB0R0_bit at RPB0R.B0;

sfr unsigned long   volatile RPB1R            absolute 0xBF80FB30;
    // RPB1R bits
    const register unsigned short int RPB1R3 = 3;
    sbit  RPB1R3_bit at RPB1R.B3;
    const register unsigned short int RPB1R2 = 2;
    sbit  RPB1R2_bit at RPB1R.B2;
    const register unsigned short int RPB1R1 = 1;
    sbit  RPB1R1_bit at RPB1R.B1;
    const register unsigned short int RPB1R0 = 0;
    sbit  RPB1R0_bit at RPB1R.B0;

sfr unsigned long   volatile RPB2R            absolute 0xBF80FB34;
    // RPB2R bits
    const register unsigned short int RPB2R3 = 3;
    sbit  RPB2R3_bit at RPB2R.B3;
    const register unsigned short int RPB2R2 = 2;
    sbit  RPB2R2_bit at RPB2R.B2;
    const register unsigned short int RPB2R1 = 1;
    sbit  RPB2R1_bit at RPB2R.B1;
    const register unsigned short int RPB2R0 = 0;
    sbit  RPB2R0_bit at RPB2R.B0;

sfr unsigned long   volatile RPB3R            absolute 0xBF80FB38;
    // RPB3R bits
    const register unsigned short int RPB3R3 = 3;
    sbit  RPB3R3_bit at RPB3R.B3;
    const register unsigned short int RPB3R2 = 2;
    sbit  RPB3R2_bit at RPB3R.B2;
    const register unsigned short int RPB3R1 = 1;
    sbit  RPB3R1_bit at RPB3R.B1;
    const register unsigned short int RPB3R0 = 0;
    sbit  RPB3R0_bit at RPB3R.B0;

sfr unsigned long   volatile RPB4R            absolute 0xBF80FB3C;
    // RPB4R bits
    const register unsigned short int RPB4R3 = 3;
    sbit  RPB4R3_bit at RPB4R.B3;
    const register unsigned short int RPB4R2 = 2;
    sbit  RPB4R2_bit at RPB4R.B2;
    const register unsigned short int RPB4R1 = 1;
    sbit  RPB4R1_bit at RPB4R.B1;
    const register unsigned short int RPB4R0 = 0;
    sbit  RPB4R0_bit at RPB4R.B0;

sfr unsigned long   volatile RPB5R            absolute 0xBF80FB40;
    // RPB5R bits
    const register unsigned short int RPB5R3 = 3;
    sbit  RPB5R3_bit at RPB5R.B3;
    const register unsigned short int RPB5R2 = 2;
    sbit  RPB5R2_bit at RPB5R.B2;
    const register unsigned short int RPB5R1 = 1;
    sbit  RPB5R1_bit at RPB5R.B1;
    const register unsigned short int RPB5R0 = 0;
    sbit  RPB5R0_bit at RPB5R.B0;

sfr unsigned long   volatile RPB6R            absolute 0xBF80FB44;
    // RPB6R bits
    const register unsigned short int RPB6R3 = 3;
    sbit  RPB6R3_bit at RPB6R.B3;
    const register unsigned short int RPB6R2 = 2;
    sbit  RPB6R2_bit at RPB6R.B2;
    const register unsigned short int RPB6R1 = 1;
    sbit  RPB6R1_bit at RPB6R.B1;
    const register unsigned short int RPB6R0 = 0;
    sbit  RPB6R0_bit at RPB6R.B0;

sfr unsigned long   volatile RPB7R            absolute 0xBF80FB48;
    // RPB7R bits
    const register unsigned short int RPB7R3 = 3;
    sbit  RPB7R3_bit at RPB7R.B3;
    const register unsigned short int RPB7R2 = 2;
    sbit  RPB7R2_bit at RPB7R.B2;
    const register unsigned short int RPB7R1 = 1;
    sbit  RPB7R1_bit at RPB7R.B1;
    const register unsigned short int RPB7R0 = 0;
    sbit  RPB7R0_bit at RPB7R.B0;

sfr unsigned long   volatile RPB8R            absolute 0xBF80FB4C;
    // RPB8R bits
    const register unsigned short int RPB8R3 = 3;
    sbit  RPB8R3_bit at RPB8R.B3;
    const register unsigned short int RPB8R2 = 2;
    sbit  RPB8R2_bit at RPB8R.B2;
    const register unsigned short int RPB8R1 = 1;
    sbit  RPB8R1_bit at RPB8R.B1;
    const register unsigned short int RPB8R0 = 0;
    sbit  RPB8R0_bit at RPB8R.B0;

sfr unsigned long   volatile RPB9R            absolute 0xBF80FB50;
    // RPB9R bits
    const register unsigned short int RPB9R3 = 3;
    sbit  RPB9R3_bit at RPB9R.B3;
    const register unsigned short int RPB9R2 = 2;
    sbit  RPB9R2_bit at RPB9R.B2;
    const register unsigned short int RPB9R1 = 1;
    sbit  RPB9R1_bit at RPB9R.B1;
    const register unsigned short int RPB9R0 = 0;
    sbit  RPB9R0_bit at RPB9R.B0;

sfr unsigned long   volatile RPB10R           absolute 0xBF80FB54;
    // RPB10R bits
    const register unsigned short int RPB10R3 = 3;
    sbit  RPB10R3_bit at RPB10R.B3;
    const register unsigned short int RPB10R2 = 2;
    sbit  RPB10R2_bit at RPB10R.B2;
    const register unsigned short int RPB10R1 = 1;
    sbit  RPB10R1_bit at RPB10R.B1;
    const register unsigned short int RPB10R0 = 0;
    sbit  RPB10R0_bit at RPB10R.B0;

sfr unsigned long   volatile RPB11R           absolute 0xBF80FB58;
    // RPB11R bits
    const register unsigned short int RPB11R3 = 3;
    sbit  RPB11R3_bit at RPB11R.B3;
    const register unsigned short int RPB11R2 = 2;
    sbit  RPB11R2_bit at RPB11R.B2;
    const register unsigned short int RPB11R1 = 1;
    sbit  RPB11R1_bit at RPB11R.B1;
    const register unsigned short int RPB11R0 = 0;
    sbit  RPB11R0_bit at RPB11R.B0;

sfr unsigned long   volatile RPB12R           absolute 0xBF80FB5C;
    // RPB12R bits
    const register unsigned short int RPB12R3 = 3;
    sbit  RPB12R3_bit at RPB12R.B3;
    const register unsigned short int RPB12R2 = 2;
    sbit  RPB12R2_bit at RPB12R.B2;
    const register unsigned short int RPB12R1 = 1;
    sbit  RPB12R1_bit at RPB12R.B1;
    const register unsigned short int RPB12R0 = 0;
    sbit  RPB12R0_bit at RPB12R.B0;

sfr unsigned long   volatile RPB13R           absolute 0xBF80FB60;
    // RPB13R bits
    const register unsigned short int RPB13R3 = 3;
    sbit  RPB13R3_bit at RPB13R.B3;
    const register unsigned short int RPB13R2 = 2;
    sbit  RPB13R2_bit at RPB13R.B2;
    const register unsigned short int RPB13R1 = 1;
    sbit  RPB13R1_bit at RPB13R.B1;
    const register unsigned short int RPB13R0 = 0;
    sbit  RPB13R0_bit at RPB13R.B0;

sfr unsigned long   volatile RPB14R           absolute 0xBF80FB64;
    // RPB14R bits
    const register unsigned short int RPB14R3 = 3;
    sbit  RPB14R3_bit at RPB14R.B3;
    const register unsigned short int RPB14R2 = 2;
    sbit  RPB14R2_bit at RPB14R.B2;
    const register unsigned short int RPB14R1 = 1;
    sbit  RPB14R1_bit at RPB14R.B1;
    const register unsigned short int RPB14R0 = 0;
    sbit  RPB14R0_bit at RPB14R.B0;

sfr unsigned long   volatile RPB15R           absolute 0xBF80FB68;
    // RPB15R bits
    const register unsigned short int RPB15R3 = 3;
    sbit  RPB15R3_bit at RPB15R.B3;
    const register unsigned short int RPB15R2 = 2;
    sbit  RPB15R2_bit at RPB15R.B2;
    const register unsigned short int RPB15R1 = 1;
    sbit  RPB15R1_bit at RPB15R.B1;
    const register unsigned short int RPB15R0 = 0;
    sbit  RPB15R0_bit at RPB15R.B0;

sfr unsigned long   volatile RPC0R            absolute 0xBF80FB6C;
    // RPC0R bits
    const register unsigned short int RPC0R3 = 3;
    sbit  RPC0R3_bit at RPC0R.B3;
    const register unsigned short int RPC0R2 = 2;
    sbit  RPC0R2_bit at RPC0R.B2;
    const register unsigned short int RPC0R1 = 1;
    sbit  RPC0R1_bit at RPC0R.B1;
    const register unsigned short int RPC0R0 = 0;
    sbit  RPC0R0_bit at RPC0R.B0;

sfr unsigned long   volatile RPC1R            absolute 0xBF80FB70;
    // RPC1R bits
    const register unsigned short int RPC1R3 = 3;
    sbit  RPC1R3_bit at RPC1R.B3;
    const register unsigned short int RPC1R2 = 2;
    sbit  RPC1R2_bit at RPC1R.B2;
    const register unsigned short int RPC1R1 = 1;
    sbit  RPC1R1_bit at RPC1R.B1;
    const register unsigned short int RPC1R0 = 0;
    sbit  RPC1R0_bit at RPC1R.B0;

sfr unsigned long   volatile RPC2R            absolute 0xBF80FB74;
    // RPC2R bits
    const register unsigned short int RPC2R3 = 3;
    sbit  RPC2R3_bit at RPC2R.B3;
    const register unsigned short int RPC2R2 = 2;
    sbit  RPC2R2_bit at RPC2R.B2;
    const register unsigned short int RPC2R1 = 1;
    sbit  RPC2R1_bit at RPC2R.B1;
    const register unsigned short int RPC2R0 = 0;
    sbit  RPC2R0_bit at RPC2R.B0;

sfr unsigned long   volatile RPC3R            absolute 0xBF80FB78;
    // RPC3R bits
    const register unsigned short int RPC3R3 = 3;
    sbit  RPC3R3_bit at RPC3R.B3;
    const register unsigned short int RPC3R2 = 2;
    sbit  RPC3R2_bit at RPC3R.B2;
    const register unsigned short int RPC3R1 = 1;
    sbit  RPC3R1_bit at RPC3R.B1;
    const register unsigned short int RPC3R0 = 0;
    sbit  RPC3R0_bit at RPC3R.B0;

sfr unsigned long   volatile RPC4R            absolute 0xBF80FB7C;
    // RPC4R bits
    const register unsigned short int RPC4R3 = 3;
    sbit  RPC4R3_bit at RPC4R.B3;
    const register unsigned short int RPC4R2 = 2;
    sbit  RPC4R2_bit at RPC4R.B2;
    const register unsigned short int RPC4R1 = 1;
    sbit  RPC4R1_bit at RPC4R.B1;
    const register unsigned short int RPC4R0 = 0;
    sbit  RPC4R0_bit at RPC4R.B0;

sfr unsigned long   volatile RPC5R            absolute 0xBF80FB80;
    // RPC5R bits
    const register unsigned short int RPC5R3 = 3;
    sbit  RPC5R3_bit at RPC5R.B3;
    const register unsigned short int RPC5R2 = 2;
    sbit  RPC5R2_bit at RPC5R.B2;
    const register unsigned short int RPC5R1 = 1;
    sbit  RPC5R1_bit at RPC5R.B1;
    const register unsigned short int RPC5R0 = 0;
    sbit  RPC5R0_bit at RPC5R.B0;

sfr unsigned long   volatile RPC6R            absolute 0xBF80FB84;
    // RPC6R bits
    const register unsigned short int RPC6R3 = 3;
    sbit  RPC6R3_bit at RPC6R.B3;
    const register unsigned short int RPC6R2 = 2;
    sbit  RPC6R2_bit at RPC6R.B2;
    const register unsigned short int RPC6R1 = 1;
    sbit  RPC6R1_bit at RPC6R.B1;
    const register unsigned short int RPC6R0 = 0;
    sbit  RPC6R0_bit at RPC6R.B0;

sfr unsigned long   volatile RPC7R            absolute 0xBF80FB88;
    // RPC7R bits
    const register unsigned short int RPC7R3 = 3;
    sbit  RPC7R3_bit at RPC7R.B3;
    const register unsigned short int RPC7R2 = 2;
    sbit  RPC7R2_bit at RPC7R.B2;
    const register unsigned short int RPC7R1 = 1;
    sbit  RPC7R1_bit at RPC7R.B1;
    const register unsigned short int RPC7R0 = 0;
    sbit  RPC7R0_bit at RPC7R.B0;

sfr unsigned long   volatile RPC8R            absolute 0xBF80FB8C;
    // RPC8R bits
    const register unsigned short int RPC8R3 = 3;
    sbit  RPC8R3_bit at RPC8R.B3;
    const register unsigned short int RPC8R2 = 2;
    sbit  RPC8R2_bit at RPC8R.B2;
    const register unsigned short int RPC8R1 = 1;
    sbit  RPC8R1_bit at RPC8R.B1;
    const register unsigned short int RPC8R0 = 0;
    sbit  RPC8R0_bit at RPC8R.B0;

sfr unsigned long   volatile RPC9R            absolute 0xBF80FB90;
    // RPC9R bits
    const register unsigned short int RPC9R3 = 3;
    sbit  RPC9R3_bit at RPC9R.B3;
    const register unsigned short int RPC9R2 = 2;
    sbit  RPC9R2_bit at RPC9R.B2;
    const register unsigned short int RPC9R1 = 1;
    sbit  RPC9R1_bit at RPC9R.B1;
    const register unsigned short int RPC9R0 = 0;
    sbit  RPC9R0_bit at RPC9R.B0;

sfr atomic unsigned long   volatile INTCON           absolute 0xBF881000;
sfr unsigned long   volatile INTCONCLR        absolute 0xBF881004;
sfr unsigned long   volatile INTCONSET        absolute 0xBF881008;
sfr unsigned long   volatile INTCONINV        absolute 0xBF88100C;
    // INTCON bits
    const register unsigned short int SS0 = 16;
    sbit  SS0_bit at INTCON.B16;
    const register unsigned short int MVEC = 12;
    sbit  MVEC_bit at INTCON.B12;
    const register unsigned short int TPC2 = 10;
    sbit  TPC2_bit at INTCON.B10;
    const register unsigned short int TPC1 = 9;
    sbit  TPC1_bit at INTCON.B9;
    const register unsigned short int TPC0 = 8;
    sbit  TPC0_bit at INTCON.B8;
    const register unsigned short int INT4EP = 4;
    sbit  INT4EP_bit at INTCON.B4;
    const register unsigned short int INT3EP = 3;
    sbit  INT3EP_bit at INTCON.B3;
    const register unsigned short int INT2EP = 2;
    sbit  INT2EP_bit at INTCON.B2;
    const register unsigned short int INT1EP = 1;
    sbit  INT1EP_bit at INTCON.B1;
    const register unsigned short int INT0EP = 0;
    sbit  INT0EP_bit at INTCON.B0;

sfr unsigned long   volatile INTSTAT          absolute 0xBF881010;
    // INTSTAT bits
    const register unsigned short int SRIPL2 = 10;
    sbit  SRIPL2_bit at INTSTAT.B10;
    const register unsigned short int SRIPL1 = 9;
    sbit  SRIPL1_bit at INTSTAT.B9;
    const register unsigned short int SRIPL0 = 8;
    sbit  SRIPL0_bit at INTSTAT.B8;
    const register unsigned short int VEC5 = 5;
    sbit  VEC5_bit at INTSTAT.B5;
    const register unsigned short int VEC4 = 4;
    sbit  VEC4_bit at INTSTAT.B4;
    const register unsigned short int VEC3 = 3;
    sbit  VEC3_bit at INTSTAT.B3;
    const register unsigned short int VEC2 = 2;
    sbit  VEC2_bit at INTSTAT.B2;
    const register unsigned short int VEC1 = 1;
    sbit  VEC1_bit at INTSTAT.B1;
    const register unsigned short int VEC0 = 0;
    sbit  VEC0_bit at INTSTAT.B0;

sfr atomic unsigned long   volatile IPTMR            absolute 0xBF881020;
sfr unsigned long   volatile IPTMRCLR         absolute 0xBF881024;
sfr unsigned long   volatile IPTMRSET         absolute 0xBF881028;
sfr unsigned long   volatile IPTMRINV         absolute 0xBF88102C;
    // IPTMR bits
    const register unsigned short int IPTMR31 = 31;
    sbit  IPTMR31_bit at IPTMR.B31;
    const register unsigned short int IPTMR30 = 30;
    sbit  IPTMR30_bit at IPTMR.B30;
    const register unsigned short int IPTMR29 = 29;
    sbit  IPTMR29_bit at IPTMR.B29;
    const register unsigned short int IPTMR28 = 28;
    sbit  IPTMR28_bit at IPTMR.B28;
    const register unsigned short int IPTMR27 = 27;
    sbit  IPTMR27_bit at IPTMR.B27;
    const register unsigned short int IPTMR26 = 26;
    sbit  IPTMR26_bit at IPTMR.B26;
    const register unsigned short int IPTMR25 = 25;
    sbit  IPTMR25_bit at IPTMR.B25;
    const register unsigned short int IPTMR24 = 24;
    sbit  IPTMR24_bit at IPTMR.B24;
    const register unsigned short int IPTMR23 = 23;
    sbit  IPTMR23_bit at IPTMR.B23;
    const register unsigned short int IPTMR22 = 22;
    sbit  IPTMR22_bit at IPTMR.B22;
    const register unsigned short int IPTMR21 = 21;
    sbit  IPTMR21_bit at IPTMR.B21;
    const register unsigned short int IPTMR20 = 20;
    sbit  IPTMR20_bit at IPTMR.B20;
    const register unsigned short int IPTMR19 = 19;
    sbit  IPTMR19_bit at IPTMR.B19;
    const register unsigned short int IPTMR18 = 18;
    sbit  IPTMR18_bit at IPTMR.B18;
    const register unsigned short int IPTMR17 = 17;
    sbit  IPTMR17_bit at IPTMR.B17;
    const register unsigned short int IPTMR16 = 16;
    sbit  IPTMR16_bit at IPTMR.B16;
    const register unsigned short int IPTMR15 = 15;
    sbit  IPTMR15_bit at IPTMR.B15;
    const register unsigned short int IPTMR14 = 14;
    sbit  IPTMR14_bit at IPTMR.B14;
    const register unsigned short int IPTMR13 = 13;
    sbit  IPTMR13_bit at IPTMR.B13;
    const register unsigned short int IPTMR12 = 12;
    sbit  IPTMR12_bit at IPTMR.B12;
    const register unsigned short int IPTMR11 = 11;
    sbit  IPTMR11_bit at IPTMR.B11;
    const register unsigned short int IPTMR10 = 10;
    sbit  IPTMR10_bit at IPTMR.B10;
    const register unsigned short int IPTMR9 = 9;
    sbit  IPTMR9_bit at IPTMR.B9;
    const register unsigned short int IPTMR8 = 8;
    sbit  IPTMR8_bit at IPTMR.B8;
    const register unsigned short int IPTMR7 = 7;
    sbit  IPTMR7_bit at IPTMR.B7;
    const register unsigned short int IPTMR6 = 6;
    sbit  IPTMR6_bit at IPTMR.B6;
    const register unsigned short int IPTMR5 = 5;
    sbit  IPTMR5_bit at IPTMR.B5;
    const register unsigned short int IPTMR4 = 4;
    sbit  IPTMR4_bit at IPTMR.B4;
    const register unsigned short int IPTMR3 = 3;
    sbit  IPTMR3_bit at IPTMR.B3;
    const register unsigned short int IPTMR2 = 2;
    sbit  IPTMR2_bit at IPTMR.B2;
    const register unsigned short int IPTMR1 = 1;
    sbit  IPTMR1_bit at IPTMR.B1;
    const register unsigned short int IPTMR0 = 0;
    sbit  IPTMR0_bit at IPTMR.B0;

sfr atomic unsigned long   volatile IFS0             absolute 0xBF881030;
sfr unsigned long   volatile IFS0CLR          absolute 0xBF881034;
sfr unsigned long   volatile IFS0SET          absolute 0xBF881038;
sfr unsigned long   volatile IFS0INV          absolute 0xBF88103C;
    // IFS0 bits
    const register unsigned short int FCEIF = 31;
    sbit  FCEIF_bit at IFS0.B31;
    const register unsigned short int RTCCIF = 30;
    sbit  RTCCIF_bit at IFS0.B30;
    const register unsigned short int FSCMIF = 29;
    sbit  FSCMIF_bit at IFS0.B29;
    const register unsigned short int AD1IF = 28;
    sbit  AD1IF_bit at IFS0.B28;
    const register unsigned short int OC5IF = 27;
    sbit  OC5IF_bit at IFS0.B27;
    const register unsigned short int IC5IF = 26;
    sbit  IC5IF_bit at IFS0.B26;
    const register unsigned short int IC5EIF = 25;
    sbit  IC5EIF_bit at IFS0.B25;
    const register unsigned short int T5IF = 24;
    sbit  T5IF_bit at IFS0.B24;
    const register unsigned short int INT4IF = 23;
    sbit  INT4IF_bit at IFS0.B23;
    const register unsigned short int OC4IF = 22;
    sbit  OC4IF_bit at IFS0.B22;
    const register unsigned short int IC4IF = 21;
    sbit  IC4IF_bit at IFS0.B21;
    const register unsigned short int IC4EIF = 20;
    sbit  IC4EIF_bit at IFS0.B20;
    const register unsigned short int T4IF = 19;
    sbit  T4IF_bit at IFS0.B19;
    const register unsigned short int INT3IF = 18;
    sbit  INT3IF_bit at IFS0.B18;
    const register unsigned short int OC3IF = 17;
    sbit  OC3IF_bit at IFS0.B17;
    const register unsigned short int IC3IF = 16;
    sbit  IC3IF_bit at IFS0.B16;
    const register unsigned short int IC3EIF = 15;
    sbit  IC3EIF_bit at IFS0.B15;
    const register unsigned short int T3IF = 14;
    sbit  T3IF_bit at IFS0.B14;
    const register unsigned short int INT2IF = 13;
    sbit  INT2IF_bit at IFS0.B13;
    const register unsigned short int OC2IF = 12;
    sbit  OC2IF_bit at IFS0.B12;
    const register unsigned short int IC2IF = 11;
    sbit  IC2IF_bit at IFS0.B11;
    const register unsigned short int IC2EIF = 10;
    sbit  IC2EIF_bit at IFS0.B10;
    const register unsigned short int T2IF = 9;
    sbit  T2IF_bit at IFS0.B9;
    const register unsigned short int INT1IF = 8;
    sbit  INT1IF_bit at IFS0.B8;
    const register unsigned short int OC1IF = 7;
    sbit  OC1IF_bit at IFS0.B7;
    const register unsigned short int IC1IF = 6;
    sbit  IC1IF_bit at IFS0.B6;
    const register unsigned short int IC1EIF = 5;
    sbit  IC1EIF_bit at IFS0.B5;
    const register unsigned short int T1IF = 4;
    sbit  T1IF_bit at IFS0.B4;
    const register unsigned short int INT0IF = 3;
    sbit  INT0IF_bit at IFS0.B3;
    const register unsigned short int CS1IF = 2;
    sbit  CS1IF_bit at IFS0.B2;
    const register unsigned short int CS0IF = 1;
    sbit  CS0IF_bit at IFS0.B1;
    const register unsigned short int CTIF = 0;
    sbit  CTIF_bit at IFS0.B0;

sfr atomic unsigned long   volatile IFS1             absolute 0xBF881040;
sfr unsigned long   volatile IFS1CLR          absolute 0xBF881044;
sfr unsigned long   volatile IFS1SET          absolute 0xBF881048;
sfr unsigned long   volatile IFS1INV          absolute 0xBF88104C;
    // IFS1 bits
    const register unsigned short int DMA3IF = 31;
    sbit  DMA3IF_bit at IFS1.B31;
    const register unsigned short int DMA2IF = 30;
    sbit  DMA2IF_bit at IFS1.B30;
    const register unsigned short int DMA1IF = 29;
    sbit  DMA1IF_bit at IFS1.B29;
    const register unsigned short int DMA0IF = 28;
    sbit  DMA0IF_bit at IFS1.B28;
    const register unsigned short int CTMUIF = 27;
    sbit  CTMUIF_bit at IFS1.B27;
    const register unsigned short int I2C2MIF = 26;
    sbit  I2C2MIF_bit at IFS1.B26;
    const register unsigned short int I2C2SIF = 25;
    sbit  I2C2SIF_bit at IFS1.B25;
    const register unsigned short int I2C2BIF = 24;
    sbit  I2C2BIF_bit at IFS1.B24;
    const register unsigned short int U2TXIF = 23;
    sbit  U2TXIF_bit at IFS1.B23;
    const register unsigned short int U2RXIF = 22;
    sbit  U2RXIF_bit at IFS1.B22;
    const register unsigned short int U2EIF = 21;
    sbit  U2EIF_bit at IFS1.B21;
    const register unsigned short int SPI2TXIF = 20;
    sbit  SPI2TXIF_bit at IFS1.B20;
    const register unsigned short int SPI2RXIF = 19;
    sbit  SPI2RXIF_bit at IFS1.B19;
    const register unsigned short int SPI2EIF = 18;
    sbit  SPI2EIF_bit at IFS1.B18;
    const register unsigned short int PMPEIF = 17;
    sbit  PMPEIF_bit at IFS1.B17;
    const register unsigned short int PMPIF = 16;
    sbit  PMPIF_bit at IFS1.B16;
    const register unsigned short int CNCIF = 15;
    sbit  CNCIF_bit at IFS1.B15;
    const register unsigned short int CNBIF = 14;
    sbit  CNBIF_bit at IFS1.B14;
    const register unsigned short int CNAIF = 13;
    sbit  CNAIF_bit at IFS1.B13;
    const register unsigned short int I2C1MIF = 12;
    sbit  I2C1MIF_bit at IFS1.B12;
    const register unsigned short int I2C1SIF = 11;
    sbit  I2C1SIF_bit at IFS1.B11;
    const register unsigned short int I2C1BIF = 10;
    sbit  I2C1BIF_bit at IFS1.B10;
    const register unsigned short int U1TXIF = 9;
    sbit  U1TXIF_bit at IFS1.B9;
    const register unsigned short int U1RXIF = 8;
    sbit  U1RXIF_bit at IFS1.B8;
    const register unsigned short int U1EIF = 7;
    sbit  U1EIF_bit at IFS1.B7;
    const register unsigned short int SPI1TXIF = 6;
    sbit  SPI1TXIF_bit at IFS1.B6;
    const register unsigned short int SPI1RXIF = 5;
    sbit  SPI1RXIF_bit at IFS1.B5;
    const register unsigned short int SPI1EIF = 4;
    sbit  SPI1EIF_bit at IFS1.B4;
    const register unsigned short int CMP3IF = 2;
    sbit  CMP3IF_bit at IFS1.B2;
    const register unsigned short int CMP2IF = 1;
    sbit  CMP2IF_bit at IFS1.B1;
    const register unsigned short int CMP1IF = 0;
    sbit  CMP1IF_bit at IFS1.B0;

sfr atomic unsigned long            IEC0             absolute 0xBF881060;
sfr unsigned long   volatile IEC0CLR          absolute 0xBF881064;
sfr unsigned long   volatile IEC0SET          absolute 0xBF881068;
sfr unsigned long   volatile IEC0INV          absolute 0xBF88106C;
    // IEC0 bits
    const register unsigned short int FCEIE = 31;
    sbit  FCEIE_bit at IEC0.B31;
    const register unsigned short int RTCCIE = 30;
    sbit  RTCCIE_bit at IEC0.B30;
    const register unsigned short int FSCMIE = 29;
    sbit  FSCMIE_bit at IEC0.B29;
    const register unsigned short int AD1IE = 28;
    sbit  AD1IE_bit at IEC0.B28;
    const register unsigned short int OC5IE = 27;
    sbit  OC5IE_bit at IEC0.B27;
    const register unsigned short int IC5IE = 26;
    sbit  IC5IE_bit at IEC0.B26;
    const register unsigned short int IC5EIE = 25;
    sbit  IC5EIE_bit at IEC0.B25;
    const register unsigned short int T5IE = 24;
    sbit  T5IE_bit at IEC0.B24;
    const register unsigned short int INT4IE = 23;
    sbit  INT4IE_bit at IEC0.B23;
    const register unsigned short int OC4IE = 22;
    sbit  OC4IE_bit at IEC0.B22;
    const register unsigned short int IC4IE = 21;
    sbit  IC4IE_bit at IEC0.B21;
    const register unsigned short int IC4EIE = 20;
    sbit  IC4EIE_bit at IEC0.B20;
    const register unsigned short int T4IE = 19;
    sbit  T4IE_bit at IEC0.B19;
    const register unsigned short int INT3IE = 18;
    sbit  INT3IE_bit at IEC0.B18;
    const register unsigned short int OC3IE = 17;
    sbit  OC3IE_bit at IEC0.B17;
    const register unsigned short int IC3IE = 16;
    sbit  IC3IE_bit at IEC0.B16;
    const register unsigned short int IC3EIE = 15;
    sbit  IC3EIE_bit at IEC0.B15;
    const register unsigned short int T3IE = 14;
    sbit  T3IE_bit at IEC0.B14;
    const register unsigned short int INT2IE = 13;
    sbit  INT2IE_bit at IEC0.B13;
    const register unsigned short int OC2IE = 12;
    sbit  OC2IE_bit at IEC0.B12;
    const register unsigned short int IC2IE = 11;
    sbit  IC2IE_bit at IEC0.B11;
    const register unsigned short int IC2EIE = 10;
    sbit  IC2EIE_bit at IEC0.B10;
    const register unsigned short int T2IE = 9;
    sbit  T2IE_bit at IEC0.B9;
    const register unsigned short int INT1IE = 8;
    sbit  INT1IE_bit at IEC0.B8;
    const register unsigned short int OC1IE = 7;
    sbit  OC1IE_bit at IEC0.B7;
    const register unsigned short int IC1IE = 6;
    sbit  IC1IE_bit at IEC0.B6;
    const register unsigned short int IC1EIE = 5;
    sbit  IC1EIE_bit at IEC0.B5;
    const register unsigned short int T1IE = 4;
    sbit  T1IE_bit at IEC0.B4;
    const register unsigned short int INT0IE = 3;
    sbit  INT0IE_bit at IEC0.B3;
    const register unsigned short int CS1IE = 2;
    sbit  CS1IE_bit at IEC0.B2;
    const register unsigned short int CS0IE = 1;
    sbit  CS0IE_bit at IEC0.B1;
    const register unsigned short int CTIE = 0;
    sbit  CTIE_bit at IEC0.B0;

sfr atomic unsigned long            IEC1             absolute 0xBF881070;
sfr unsigned long   volatile IEC1CLR          absolute 0xBF881074;
sfr unsigned long   volatile IEC1SET          absolute 0xBF881078;
sfr unsigned long   volatile IEC1INV          absolute 0xBF88107C;
    // IEC1 bits
    const register unsigned short int DMA3IE = 31;
    sbit  DMA3IE_bit at IEC1.B31;
    const register unsigned short int DMA2IE = 30;
    sbit  DMA2IE_bit at IEC1.B30;
    const register unsigned short int DMA1IE = 29;
    sbit  DMA1IE_bit at IEC1.B29;
    const register unsigned short int DMA0IE = 28;
    sbit  DMA0IE_bit at IEC1.B28;
    const register unsigned short int CTMUIE = 27;
    sbit  CTMUIE_bit at IEC1.B27;
    const register unsigned short int I2C2MIE = 26;
    sbit  I2C2MIE_bit at IEC1.B26;
    const register unsigned short int I2C2SIE = 25;
    sbit  I2C2SIE_bit at IEC1.B25;
    const register unsigned short int I2C2BIE = 24;
    sbit  I2C2BIE_bit at IEC1.B24;
    const register unsigned short int U2TXIE = 23;
    sbit  U2TXIE_bit at IEC1.B23;
    const register unsigned short int U2RXIE = 22;
    sbit  U2RXIE_bit at IEC1.B22;
    const register unsigned short int U2EIE = 21;
    sbit  U2EIE_bit at IEC1.B21;
    const register unsigned short int SPI2TXIE = 20;
    sbit  SPI2TXIE_bit at IEC1.B20;
    const register unsigned short int SPI2RXIE = 19;
    sbit  SPI2RXIE_bit at IEC1.B19;
    const register unsigned short int SPI2EIE = 18;
    sbit  SPI2EIE_bit at IEC1.B18;
    const register unsigned short int PMPEIE = 17;
    sbit  PMPEIE_bit at IEC1.B17;
    const register unsigned short int PMPIE = 16;
    sbit  PMPIE_bit at IEC1.B16;
    const register unsigned short int CNCIE = 15;
    sbit  CNCIE_bit at IEC1.B15;
    const register unsigned short int CNBIE = 14;
    sbit  CNBIE_bit at IEC1.B14;
    const register unsigned short int CNAIE = 13;
    sbit  CNAIE_bit at IEC1.B13;
    const register unsigned short int I2C1MIE = 12;
    sbit  I2C1MIE_bit at IEC1.B12;
    const register unsigned short int I2C1SIE = 11;
    sbit  I2C1SIE_bit at IEC1.B11;
    const register unsigned short int I2C1BIE = 10;
    sbit  I2C1BIE_bit at IEC1.B10;
    const register unsigned short int U1TXIE = 9;
    sbit  U1TXIE_bit at IEC1.B9;
    const register unsigned short int U1RXIE = 8;
    sbit  U1RXIE_bit at IEC1.B8;
    const register unsigned short int U1EIE_ = 7;
    sbit  U1EIE_bit at IEC1.B7;
    const register unsigned short int SPI1TXIE = 6;
    sbit  SPI1TXIE_bit at IEC1.B6;
    const register unsigned short int SPI1RXIE = 5;
    sbit  SPI1RXIE_bit at IEC1.B5;
    const register unsigned short int SPI1EIE = 4;
    sbit  SPI1EIE_bit at IEC1.B4;
    const register unsigned short int CMP3IE = 2;
    sbit  CMP3IE_bit at IEC1.B2;
    const register unsigned short int CMP2IE = 1;
    sbit  CMP2IE_bit at IEC1.B1;
    const register unsigned short int CMP1IE = 0;
    sbit  CMP1IE_bit at IEC1.B0;

sfr atomic unsigned long            IPC0             absolute 0xBF881090;
sfr unsigned long   volatile IPC0CLR          absolute 0xBF881094;
sfr unsigned long   volatile IPC0SET          absolute 0xBF881098;
sfr unsigned long   volatile IPC0INV          absolute 0xBF88109C;
    // IPC0 bits
    const register unsigned short int INT0IP2 = 28;
    sbit  INT0IP2_bit at IPC0.B28;
    const register unsigned short int INT0IP1 = 27;
    sbit  INT0IP1_bit at IPC0.B27;
    const register unsigned short int INT0IP0 = 26;
    sbit  INT0IP0_bit at IPC0.B26;
    const register unsigned short int INT0IS1 = 25;
    sbit  INT0IS1_bit at IPC0.B25;
    const register unsigned short int INT0IS0 = 24;
    sbit  INT0IS0_bit at IPC0.B24;
    const register unsigned short int CS1IP2 = 20;
    sbit  CS1IP2_bit at IPC0.B20;
    const register unsigned short int CS1IP1 = 19;
    sbit  CS1IP1_bit at IPC0.B19;
    const register unsigned short int CS1IP0 = 18;
    sbit  CS1IP0_bit at IPC0.B18;
    const register unsigned short int CS1IS1 = 17;
    sbit  CS1IS1_bit at IPC0.B17;
    const register unsigned short int CS1IS0 = 16;
    sbit  CS1IS0_bit at IPC0.B16;
    const register unsigned short int CS0IP2 = 12;
    sbit  CS0IP2_bit at IPC0.B12;
    const register unsigned short int CS0IP1 = 11;
    sbit  CS0IP1_bit at IPC0.B11;
    const register unsigned short int CS0IP0 = 10;
    sbit  CS0IP0_bit at IPC0.B10;
    const register unsigned short int CS0IS1 = 9;
    sbit  CS0IS1_bit at IPC0.B9;
    const register unsigned short int CS0IS0 = 8;
    sbit  CS0IS0_bit at IPC0.B8;
    const register unsigned short int CTIP2 = 4;
    sbit  CTIP2_bit at IPC0.B4;
    const register unsigned short int CTIP1 = 3;
    sbit  CTIP1_bit at IPC0.B3;
    const register unsigned short int CTIP0 = 2;
    sbit  CTIP0_bit at IPC0.B2;
    const register unsigned short int CTIS1 = 1;
    sbit  CTIS1_bit at IPC0.B1;
    const register unsigned short int CTIS0 = 0;
    sbit  CTIS0_bit at IPC0.B0;

sfr atomic unsigned long            IPC1             absolute 0xBF8810A0;
sfr unsigned long   volatile IPC1CLR          absolute 0xBF8810A4;
sfr unsigned long   volatile IPC1SET          absolute 0xBF8810A8;
sfr unsigned long   volatile IPC1INV          absolute 0xBF8810AC;
    // IPC1 bits
    const register unsigned short int INT1IP2 = 28;
    sbit  INT1IP2_bit at IPC1.B28;
    const register unsigned short int INT1IP1 = 27;
    sbit  INT1IP1_bit at IPC1.B27;
    const register unsigned short int INT1IP0 = 26;
    sbit  INT1IP0_bit at IPC1.B26;
    const register unsigned short int INT1IS1 = 25;
    sbit  INT1IS1_bit at IPC1.B25;
    const register unsigned short int INT1IS0 = 24;
    sbit  INT1IS0_bit at IPC1.B24;
    const register unsigned short int OC1IP2 = 20;
    sbit  OC1IP2_bit at IPC1.B20;
    const register unsigned short int OC1IP1 = 19;
    sbit  OC1IP1_bit at IPC1.B19;
    const register unsigned short int OC1IP0 = 18;
    sbit  OC1IP0_bit at IPC1.B18;
    const register unsigned short int OC1IS1 = 17;
    sbit  OC1IS1_bit at IPC1.B17;
    const register unsigned short int OC1IS0 = 16;
    sbit  OC1IS0_bit at IPC1.B16;
    const register unsigned short int IC1IP2 = 12;
    sbit  IC1IP2_bit at IPC1.B12;
    const register unsigned short int IC1IP1 = 11;
    sbit  IC1IP1_bit at IPC1.B11;
    const register unsigned short int IC1IP0 = 10;
    sbit  IC1IP0_bit at IPC1.B10;
    const register unsigned short int IC1IS1 = 9;
    sbit  IC1IS1_bit at IPC1.B9;
    const register unsigned short int IC1IS0 = 8;
    sbit  IC1IS0_bit at IPC1.B8;
    const register unsigned short int T1IP2 = 4;
    sbit  T1IP2_bit at IPC1.B4;
    const register unsigned short int T1IP1 = 3;
    sbit  T1IP1_bit at IPC1.B3;
    const register unsigned short int T1IP0 = 2;
    sbit  T1IP0_bit at IPC1.B2;
    const register unsigned short int T1IS1 = 1;
    sbit  T1IS1_bit at IPC1.B1;
    const register unsigned short int T1IS0 = 0;
    sbit  T1IS0_bit at IPC1.B0;

sfr atomic unsigned long            IPC2             absolute 0xBF8810B0;
sfr unsigned long   volatile IPC2CLR          absolute 0xBF8810B4;
sfr unsigned long   volatile IPC2SET          absolute 0xBF8810B8;
sfr unsigned long   volatile IPC2INV          absolute 0xBF8810BC;
    // IPC2 bits
    const register unsigned short int INT2IP2 = 28;
    sbit  INT2IP2_bit at IPC2.B28;
    const register unsigned short int INT2IP1 = 27;
    sbit  INT2IP1_bit at IPC2.B27;
    const register unsigned short int INT2IP0 = 26;
    sbit  INT2IP0_bit at IPC2.B26;
    const register unsigned short int INT2IS1 = 25;
    sbit  INT2IS1_bit at IPC2.B25;
    const register unsigned short int INT2IS0 = 24;
    sbit  INT2IS0_bit at IPC2.B24;
    const register unsigned short int OC2IP2 = 20;
    sbit  OC2IP2_bit at IPC2.B20;
    const register unsigned short int OC2IP1 = 19;
    sbit  OC2IP1_bit at IPC2.B19;
    const register unsigned short int OC2IP0 = 18;
    sbit  OC2IP0_bit at IPC2.B18;
    const register unsigned short int OC2IS1 = 17;
    sbit  OC2IS1_bit at IPC2.B17;
    const register unsigned short int OC2IS0 = 16;
    sbit  OC2IS0_bit at IPC2.B16;
    const register unsigned short int IC2IP2 = 12;
    sbit  IC2IP2_bit at IPC2.B12;
    const register unsigned short int IC2IP1 = 11;
    sbit  IC2IP1_bit at IPC2.B11;
    const register unsigned short int IC2IP0 = 10;
    sbit  IC2IP0_bit at IPC2.B10;
    const register unsigned short int IC2IS1 = 9;
    sbit  IC2IS1_bit at IPC2.B9;
    const register unsigned short int IC2IS0 = 8;
    sbit  IC2IS0_bit at IPC2.B8;
    const register unsigned short int T2IP2 = 4;
    sbit  T2IP2_bit at IPC2.B4;
    const register unsigned short int T2IP1 = 3;
    sbit  T2IP1_bit at IPC2.B3;
    const register unsigned short int T2IP0 = 2;
    sbit  T2IP0_bit at IPC2.B2;
    const register unsigned short int T2IS1 = 1;
    sbit  T2IS1_bit at IPC2.B1;
    const register unsigned short int T2IS0 = 0;
    sbit  T2IS0_bit at IPC2.B0;

sfr atomic unsigned long            IPC3             absolute 0xBF8810C0;
sfr unsigned long   volatile IPC3CLR          absolute 0xBF8810C4;
sfr unsigned long   volatile IPC3SET          absolute 0xBF8810C8;
sfr unsigned long   volatile IPC3INV          absolute 0xBF8810CC;
    // IPC3 bits
    const register unsigned short int INT3IP2 = 28;
    sbit  INT3IP2_bit at IPC3.B28;
    const register unsigned short int INT3IP1 = 27;
    sbit  INT3IP1_bit at IPC3.B27;
    const register unsigned short int INT3IP0 = 26;
    sbit  INT3IP0_bit at IPC3.B26;
    const register unsigned short int INT3IS1 = 25;
    sbit  INT3IS1_bit at IPC3.B25;
    const register unsigned short int INT3IS0 = 24;
    sbit  INT3IS0_bit at IPC3.B24;
    const register unsigned short int OC3IP2 = 20;
    sbit  OC3IP2_bit at IPC3.B20;
    const register unsigned short int OC3IP1 = 19;
    sbit  OC3IP1_bit at IPC3.B19;
    const register unsigned short int OC3IP0 = 18;
    sbit  OC3IP0_bit at IPC3.B18;
    const register unsigned short int OC3IS1 = 17;
    sbit  OC3IS1_bit at IPC3.B17;
    const register unsigned short int OC3IS0 = 16;
    sbit  OC3IS0_bit at IPC3.B16;
    const register unsigned short int IC3IP2 = 12;
    sbit  IC3IP2_bit at IPC3.B12;
    const register unsigned short int IC3IP1 = 11;
    sbit  IC3IP1_bit at IPC3.B11;
    const register unsigned short int IC3IP0 = 10;
    sbit  IC3IP0_bit at IPC3.B10;
    const register unsigned short int IC3IS1 = 9;
    sbit  IC3IS1_bit at IPC3.B9;
    const register unsigned short int IC3IS0 = 8;
    sbit  IC3IS0_bit at IPC3.B8;
    const register unsigned short int T3IP2 = 4;
    sbit  T3IP2_bit at IPC3.B4;
    const register unsigned short int T3IP1 = 3;
    sbit  T3IP1_bit at IPC3.B3;
    const register unsigned short int T3IP0 = 2;
    sbit  T3IP0_bit at IPC3.B2;
    const register unsigned short int T3IS1 = 1;
    sbit  T3IS1_bit at IPC3.B1;
    const register unsigned short int T3IS0 = 0;
    sbit  T3IS0_bit at IPC3.B0;

sfr atomic unsigned long            IPC4             absolute 0xBF8810D0;
sfr unsigned long   volatile IPC4CLR          absolute 0xBF8810D4;
sfr unsigned long   volatile IPC4SET          absolute 0xBF8810D8;
sfr unsigned long   volatile IPC4INV          absolute 0xBF8810DC;
    // IPC4 bits
    const register unsigned short int INT4IP2 = 28;
    sbit  INT4IP2_bit at IPC4.B28;
    const register unsigned short int INT4IP1 = 27;
    sbit  INT4IP1_bit at IPC4.B27;
    const register unsigned short int INT4IP0 = 26;
    sbit  INT4IP0_bit at IPC4.B26;
    const register unsigned short int INT4IS1 = 25;
    sbit  INT4IS1_bit at IPC4.B25;
    const register unsigned short int INT4IS0 = 24;
    sbit  INT4IS0_bit at IPC4.B24;
    const register unsigned short int OC4IP2 = 20;
    sbit  OC4IP2_bit at IPC4.B20;
    const register unsigned short int OC4IP1 = 19;
    sbit  OC4IP1_bit at IPC4.B19;
    const register unsigned short int OC4IP0 = 18;
    sbit  OC4IP0_bit at IPC4.B18;
    const register unsigned short int OC4IS1 = 17;
    sbit  OC4IS1_bit at IPC4.B17;
    const register unsigned short int OC4IS0 = 16;
    sbit  OC4IS0_bit at IPC4.B16;
    const register unsigned short int IC4IP2 = 12;
    sbit  IC4IP2_bit at IPC4.B12;
    const register unsigned short int IC4IP1 = 11;
    sbit  IC4IP1_bit at IPC4.B11;
    const register unsigned short int IC4IP0 = 10;
    sbit  IC4IP0_bit at IPC4.B10;
    const register unsigned short int IC4IS1 = 9;
    sbit  IC4IS1_bit at IPC4.B9;
    const register unsigned short int IC4IS0 = 8;
    sbit  IC4IS0_bit at IPC4.B8;
    const register unsigned short int T4IP2 = 4;
    sbit  T4IP2_bit at IPC4.B4;
    const register unsigned short int T4IP1 = 3;
    sbit  T4IP1_bit at IPC4.B3;
    const register unsigned short int T4IP0 = 2;
    sbit  T4IP0_bit at IPC4.B2;
    const register unsigned short int T4IS1 = 1;
    sbit  T4IS1_bit at IPC4.B1;
    const register unsigned short int T4IS0 = 0;
    sbit  T4IS0_bit at IPC4.B0;

sfr atomic unsigned long            IPC5             absolute 0xBF8810E0;
sfr unsigned long   volatile IPC5CLR          absolute 0xBF8810E4;
sfr unsigned long   volatile IPC5SET          absolute 0xBF8810E8;
sfr unsigned long   volatile IPC5INV          absolute 0xBF8810EC;
    // IPC5 bits
    const register unsigned short int AD1IP2 = 28;
    sbit  AD1IP2_bit at IPC5.B28;
    const register unsigned short int AD1IP1 = 27;
    sbit  AD1IP1_bit at IPC5.B27;
    const register unsigned short int AD1IP0 = 26;
    sbit  AD1IP0_bit at IPC5.B26;
    const register unsigned short int AD1IS1 = 25;
    sbit  AD1IS1_bit at IPC5.B25;
    const register unsigned short int AD1IS0 = 24;
    sbit  AD1IS0_bit at IPC5.B24;
    const register unsigned short int OC5IP2 = 20;
    sbit  OC5IP2_bit at IPC5.B20;
    const register unsigned short int OC5IP1 = 19;
    sbit  OC5IP1_bit at IPC5.B19;
    const register unsigned short int OC5IP0 = 18;
    sbit  OC5IP0_bit at IPC5.B18;
    const register unsigned short int OC5IS1 = 17;
    sbit  OC5IS1_bit at IPC5.B17;
    const register unsigned short int OC5IS0 = 16;
    sbit  OC5IS0_bit at IPC5.B16;
    const register unsigned short int IC5IP2 = 12;
    sbit  IC5IP2_bit at IPC5.B12;
    const register unsigned short int IC5IP1 = 11;
    sbit  IC5IP1_bit at IPC5.B11;
    const register unsigned short int IC5IP0 = 10;
    sbit  IC5IP0_bit at IPC5.B10;
    const register unsigned short int IC5IS1 = 9;
    sbit  IC5IS1_bit at IPC5.B9;
    const register unsigned short int IC5IS0 = 8;
    sbit  IC5IS0_bit at IPC5.B8;
    const register unsigned short int T5IP2 = 4;
    sbit  T5IP2_bit at IPC5.B4;
    const register unsigned short int T5IP1 = 3;
    sbit  T5IP1_bit at IPC5.B3;
    const register unsigned short int T5IP0 = 2;
    sbit  T5IP0_bit at IPC5.B2;
    const register unsigned short int T5IS1 = 1;
    sbit  T5IS1_bit at IPC5.B1;
    const register unsigned short int T5IS0 = 0;
    sbit  T5IS0_bit at IPC5.B0;

sfr atomic unsigned long            IPC6             absolute 0xBF8810F0;
sfr unsigned long   volatile IPC6CLR          absolute 0xBF8810F4;
sfr unsigned long   volatile IPC6SET          absolute 0xBF8810F8;
sfr unsigned long   volatile IPC6INV          absolute 0xBF8810FC;
    // IPC6 bits
    const register unsigned short int CMP1IP2 = 28;
    sbit  CMP1IP2_bit at IPC6.B28;
    const register unsigned short int CMP1IP1 = 27;
    sbit  CMP1IP1_bit at IPC6.B27;
    const register unsigned short int CMP1IP0 = 26;
    sbit  CMP1IP0_bit at IPC6.B26;
    const register unsigned short int CMP1IS1 = 25;
    sbit  CMP1IS1_bit at IPC6.B25;
    const register unsigned short int CMP1IS0 = 24;
    sbit  CMP1IS0_bit at IPC6.B24;
    const register unsigned short int FCEIP2 = 20;
    sbit  FCEIP2_bit at IPC6.B20;
    const register unsigned short int FCEIP1 = 19;
    sbit  FCEIP1_bit at IPC6.B19;
    const register unsigned short int FCEIP0 = 18;
    sbit  FCEIP0_bit at IPC6.B18;
    const register unsigned short int FCEIS1 = 17;
    sbit  FCEIS1_bit at IPC6.B17;
    const register unsigned short int FCEIS0 = 16;
    sbit  FCEIS0_bit at IPC6.B16;
    const register unsigned short int RTCCIP2 = 12;
    sbit  RTCCIP2_bit at IPC6.B12;
    const register unsigned short int RTCCIP1 = 11;
    sbit  RTCCIP1_bit at IPC6.B11;
    const register unsigned short int RTCCIP0 = 10;
    sbit  RTCCIP0_bit at IPC6.B10;
    const register unsigned short int RTCCIS1 = 9;
    sbit  RTCCIS1_bit at IPC6.B9;
    const register unsigned short int RTCCIS0 = 8;
    sbit  RTCCIS0_bit at IPC6.B8;
    const register unsigned short int FSCMIP2 = 4;
    sbit  FSCMIP2_bit at IPC6.B4;
    const register unsigned short int FSCMIP1 = 3;
    sbit  FSCMIP1_bit at IPC6.B3;
    const register unsigned short int FSCMIP0 = 2;
    sbit  FSCMIP0_bit at IPC6.B2;
    const register unsigned short int FSCMIS1 = 1;
    sbit  FSCMIS1_bit at IPC6.B1;
    const register unsigned short int FSCMIS0 = 0;
    sbit  FSCMIS0_bit at IPC6.B0;

sfr atomic unsigned long            IPC7             absolute 0xBF881100;
sfr unsigned long   volatile IPC7CLR          absolute 0xBF881104;
sfr unsigned long   volatile IPC7SET          absolute 0xBF881108;
sfr unsigned long   volatile IPC7INV          absolute 0xBF88110C;
    // IPC7 bits
    const register unsigned short int SPI1IP2 = 28;
    sbit  SPI1IP2_bit at IPC7.B28;
    const register unsigned short int SPI1IP1 = 27;
    sbit  SPI1IP1_bit at IPC7.B27;
    const register unsigned short int SPI1IP0 = 26;
    sbit  SPI1IP0_bit at IPC7.B26;
    const register unsigned short int SPI1IS1 = 25;
    sbit  SPI1IS1_bit at IPC7.B25;
    const register unsigned short int SPI1IS0 = 24;
    sbit  SPI1IS0_bit at IPC7.B24;
    const register unsigned short int CMP3IP2 = 12;
    sbit  CMP3IP2_bit at IPC7.B12;
    const register unsigned short int CMP3IP1 = 11;
    sbit  CMP3IP1_bit at IPC7.B11;
    const register unsigned short int CMP3IP0 = 10;
    sbit  CMP3IP0_bit at IPC7.B10;
    const register unsigned short int CMP3IS1 = 9;
    sbit  CMP3IS1_bit at IPC7.B9;
    const register unsigned short int CMP3IS0 = 8;
    sbit  CMP3IS0_bit at IPC7.B8;
    const register unsigned short int CMP2IP2 = 4;
    sbit  CMP2IP2_bit at IPC7.B4;
    const register unsigned short int CMP2IP1 = 3;
    sbit  CMP2IP1_bit at IPC7.B3;
    const register unsigned short int CMP2IP0 = 2;
    sbit  CMP2IP0_bit at IPC7.B2;
    const register unsigned short int CMP2IS1 = 1;
    sbit  CMP2IS1_bit at IPC7.B1;
    const register unsigned short int CMP2IS0 = 0;
    sbit  CMP2IS0_bit at IPC7.B0;

sfr atomic unsigned long            IPC8             absolute 0xBF881110;
sfr unsigned long   volatile IPC8CLR          absolute 0xBF881114;
sfr unsigned long   volatile IPC8SET          absolute 0xBF881118;
sfr unsigned long   volatile IPC8INV          absolute 0xBF88111C;
    // IPC8 bits
    const register unsigned short int PMPIP2 = 28;
    sbit  PMPIP2_bit at IPC8.B28;
    const register unsigned short int PMPIP1 = 27;
    sbit  PMPIP1_bit at IPC8.B27;
    const register unsigned short int PMPIP0 = 26;
    sbit  PMPIP0_bit at IPC8.B26;
    const register unsigned short int PMPIS1 = 25;
    sbit  PMPIS1_bit at IPC8.B25;
    const register unsigned short int PMPIS0 = 24;
    sbit  PMPIS0_bit at IPC8.B24;
    const register unsigned short int CNIP2 = 20;
    sbit  CNIP2_bit at IPC8.B20;
    const register unsigned short int CNIP1 = 19;
    sbit  CNIP1_bit at IPC8.B19;
    const register unsigned short int CNIP0 = 18;
    sbit  CNIP0_bit at IPC8.B18;
    const register unsigned short int CNIS1 = 17;
    sbit  CNIS1_bit at IPC8.B17;
    const register unsigned short int CNIS0 = 16;
    sbit  CNIS0_bit at IPC8.B16;
    const register unsigned short int I2C1IP2 = 12;
    sbit  I2C1IP2_bit at IPC8.B12;
    const register unsigned short int I2C1IP1 = 11;
    sbit  I2C1IP1_bit at IPC8.B11;
    const register unsigned short int I2C1IP0 = 10;
    sbit  I2C1IP0_bit at IPC8.B10;
    const register unsigned short int I2C1IS1 = 9;
    sbit  I2C1IS1_bit at IPC8.B9;
    const register unsigned short int I2C1IS0 = 8;
    sbit  I2C1IS0_bit at IPC8.B8;
    const register unsigned short int U1IP2 = 4;
    sbit  U1IP2_bit at IPC8.B4;
    const register unsigned short int U1IP1 = 3;
    sbit  U1IP1_bit at IPC8.B3;
    const register unsigned short int U1IP0 = 2;
    sbit  U1IP0_bit at IPC8.B2;
    const register unsigned short int U1IS1 = 1;
    sbit  U1IS1_bit at IPC8.B1;
    const register unsigned short int U1IS0 = 0;
    sbit  U1IS0_bit at IPC8.B0;

sfr atomic unsigned long            IPC9             absolute 0xBF881120;
sfr unsigned long   volatile IPC9CLR          absolute 0xBF881124;
sfr unsigned long   volatile IPC9SET          absolute 0xBF881128;
sfr unsigned long   volatile IPC9INV          absolute 0xBF88112C;
    // IPC9 bits
    const register unsigned short int CTMUIP2 = 28;
    sbit  CTMUIP2_bit at IPC9.B28;
    const register unsigned short int CTMUIP1 = 27;
    sbit  CTMUIP1_bit at IPC9.B27;
    const register unsigned short int CTMUIP0 = 26;
    sbit  CTMUIP0_bit at IPC9.B26;
    const register unsigned short int CTMUIS1 = 25;
    sbit  CTMUIS1_bit at IPC9.B25;
    const register unsigned short int CTMUIS0 = 24;
    sbit  CTMUIS0_bit at IPC9.B24;
    const register unsigned short int I2C2IP2 = 20;
    sbit  I2C2IP2_bit at IPC9.B20;
    const register unsigned short int I2C2IP1 = 19;
    sbit  I2C2IP1_bit at IPC9.B19;
    const register unsigned short int I2C2IP0 = 18;
    sbit  I2C2IP0_bit at IPC9.B18;
    const register unsigned short int I2C2IS1 = 17;
    sbit  I2C2IS1_bit at IPC9.B17;
    const register unsigned short int I2C2IS0 = 16;
    sbit  I2C2IS0_bit at IPC9.B16;
    const register unsigned short int U2IP2 = 12;
    sbit  U2IP2_bit at IPC9.B12;
    const register unsigned short int U2IP1 = 11;
    sbit  U2IP1_bit at IPC9.B11;
    const register unsigned short int U2IP0 = 10;
    sbit  U2IP0_bit at IPC9.B10;
    const register unsigned short int U2IS1 = 9;
    sbit  U2IS1_bit at IPC9.B9;
    const register unsigned short int U2IS0 = 8;
    sbit  U2IS0_bit at IPC9.B8;
    const register unsigned short int SPI2IP2 = 4;
    sbit  SPI2IP2_bit at IPC9.B4;
    const register unsigned short int SPI2IP1 = 3;
    sbit  SPI2IP1_bit at IPC9.B3;
    const register unsigned short int SPI2IP0 = 2;
    sbit  SPI2IP0_bit at IPC9.B2;
    const register unsigned short int SPI2IS1 = 1;
    sbit  SPI2IS1_bit at IPC9.B1;
    const register unsigned short int SPI2IS0 = 0;
    sbit  SPI2IS0_bit at IPC9.B0;

sfr atomic unsigned long            IPC10            absolute 0xBF881130;
sfr unsigned long   volatile IPC10CLR         absolute 0xBF881134;
sfr unsigned long   volatile IPC10SET         absolute 0xBF881138;
sfr unsigned long   volatile IPC10INV         absolute 0xBF88113C;
    // IPC10 bits
    const register unsigned short int DMA3IP2 = 28;
    sbit  DMA3IP2_bit at IPC10.B28;
    const register unsigned short int DMA3IP1 = 27;
    sbit  DMA3IP1_bit at IPC10.B27;
    const register unsigned short int DMA3IP0 = 26;
    sbit  DMA3IP0_bit at IPC10.B26;
    const register unsigned short int DMA3IS1 = 25;
    sbit  DMA3IS1_bit at IPC10.B25;
    const register unsigned short int DMA3IS0 = 24;
    sbit  DMA3IS0_bit at IPC10.B24;
    const register unsigned short int DMA2IP2 = 20;
    sbit  DMA2IP2_bit at IPC10.B20;
    const register unsigned short int DMA2IP1 = 19;
    sbit  DMA2IP1_bit at IPC10.B19;
    const register unsigned short int DMA2IP0 = 18;
    sbit  DMA2IP0_bit at IPC10.B18;
    const register unsigned short int DMA2IS1 = 17;
    sbit  DMA2IS1_bit at IPC10.B17;
    const register unsigned short int DMA2IS0 = 16;
    sbit  DMA2IS0_bit at IPC10.B16;
    const register unsigned short int DMA1IP2 = 12;
    sbit  DMA1IP2_bit at IPC10.B12;
    const register unsigned short int DMA1IP1 = 11;
    sbit  DMA1IP1_bit at IPC10.B11;
    const register unsigned short int DMA1IP0 = 10;
    sbit  DMA1IP0_bit at IPC10.B10;
    const register unsigned short int DMA1IS1 = 9;
    sbit  DMA1IS1_bit at IPC10.B9;
    const register unsigned short int DMA1IS0 = 8;
    sbit  DMA1IS0_bit at IPC10.B8;
    const register unsigned short int DMA0IP2 = 4;
    sbit  DMA0IP2_bit at IPC10.B4;
    const register unsigned short int DMA0IP1 = 3;
    sbit  DMA0IP1_bit at IPC10.B3;
    const register unsigned short int DMA0IP0 = 2;
    sbit  DMA0IP0_bit at IPC10.B2;
    const register unsigned short int DMA0IS1 = 1;
    sbit  DMA0IS1_bit at IPC10.B1;
    const register unsigned short int DMA0IS0 = 0;
    sbit  DMA0IS0_bit at IPC10.B0;

sfr atomic unsigned long   volatile BMXCON           absolute 0xBF882000;
sfr unsigned long   volatile BMXCONCLR        absolute 0xBF882004;
sfr unsigned long   volatile BMXCONSET        absolute 0xBF882008;
sfr unsigned long   volatile BMXCONINV        absolute 0xBF88200C;
    // BMXCON bits
    const register unsigned short int BMXCHEDMA = 26;
    sbit  BMXCHEDMA_bit at BMXCON.B26;
    const register unsigned short int BMXERRIXI = 20;
    sbit  BMXERRIXI_bit at BMXCON.B20;
    const register unsigned short int BMXERRICD = 19;
    sbit  BMXERRICD_bit at BMXCON.B19;
    const register unsigned short int BMXERRDMA = 18;
    sbit  BMXERRDMA_bit at BMXCON.B18;
    const register unsigned short int BMXERRDS = 17;
    sbit  BMXERRDS_bit at BMXCON.B17;
    const register unsigned short int BMXERRIS = 16;
    sbit  BMXERRIS_bit at BMXCON.B16;
    const register unsigned short int BMXWSDRM = 6;
    sbit  BMXWSDRM_bit at BMXCON.B6;
    const register unsigned short int BMXARB2 = 2;
    sbit  BMXARB2_bit at BMXCON.B2;
    const register unsigned short int BMXARB1 = 1;
    sbit  BMXARB1_bit at BMXCON.B1;
    const register unsigned short int BMXARB0 = 0;
    sbit  BMXARB0_bit at BMXCON.B0;

sfr atomic unsigned long   volatile BMXDKPBA         absolute 0xBF882010;
sfr unsigned long   volatile BMXDKPBACLR      absolute 0xBF882014;
sfr unsigned long   volatile BMXDKPBASET      absolute 0xBF882018;
sfr unsigned long   volatile BMXDKPBAINV      absolute 0xBF88201C;
    // BMXDKPBA bits
    const register unsigned short int BMXDKPBA31 = 31;
    sbit  BMXDKPBA31_bit at BMXDKPBA.B31;
    const register unsigned short int BMXDKPBA30 = 30;
    sbit  BMXDKPBA30_bit at BMXDKPBA.B30;
    const register unsigned short int BMXDKPBA29 = 29;
    sbit  BMXDKPBA29_bit at BMXDKPBA.B29;
    const register unsigned short int BMXDKPBA28 = 28;
    sbit  BMXDKPBA28_bit at BMXDKPBA.B28;
    const register unsigned short int BMXDKPBA27 = 27;
    sbit  BMXDKPBA27_bit at BMXDKPBA.B27;
    const register unsigned short int BMXDKPBA26 = 26;
    sbit  BMXDKPBA26_bit at BMXDKPBA.B26;
    const register unsigned short int BMXDKPBA25 = 25;
    sbit  BMXDKPBA25_bit at BMXDKPBA.B25;
    const register unsigned short int BMXDKPBA24 = 24;
    sbit  BMXDKPBA24_bit at BMXDKPBA.B24;
    const register unsigned short int BMXDKPBA23 = 23;
    sbit  BMXDKPBA23_bit at BMXDKPBA.B23;
    const register unsigned short int BMXDKPBA22 = 22;
    sbit  BMXDKPBA22_bit at BMXDKPBA.B22;
    const register unsigned short int BMXDKPBA21 = 21;
    sbit  BMXDKPBA21_bit at BMXDKPBA.B21;
    const register unsigned short int BMXDKPBA20 = 20;
    sbit  BMXDKPBA20_bit at BMXDKPBA.B20;
    const register unsigned short int BMXDKPBA19 = 19;
    sbit  BMXDKPBA19_bit at BMXDKPBA.B19;
    const register unsigned short int BMXDKPBA18 = 18;
    sbit  BMXDKPBA18_bit at BMXDKPBA.B18;
    const register unsigned short int BMXDKPBA17 = 17;
    sbit  BMXDKPBA17_bit at BMXDKPBA.B17;
    const register unsigned short int BMXDKPBA16 = 16;
    sbit  BMXDKPBA16_bit at BMXDKPBA.B16;
    const register unsigned short int BMXDKPBA15 = 15;
    sbit  BMXDKPBA15_bit at BMXDKPBA.B15;
    const register unsigned short int BMXDKPBA14 = 14;
    sbit  BMXDKPBA14_bit at BMXDKPBA.B14;
    const register unsigned short int BMXDKPBA13 = 13;
    sbit  BMXDKPBA13_bit at BMXDKPBA.B13;
    const register unsigned short int BMXDKPBA12 = 12;
    sbit  BMXDKPBA12_bit at BMXDKPBA.B12;
    const register unsigned short int BMXDKPBA11 = 11;
    sbit  BMXDKPBA11_bit at BMXDKPBA.B11;
    const register unsigned short int BMXDKPBA10 = 10;
    sbit  BMXDKPBA10_bit at BMXDKPBA.B10;
    const register unsigned short int BMXDKPBA9 = 9;
    sbit  BMXDKPBA9_bit at BMXDKPBA.B9;
    const register unsigned short int BMXDKPBA8 = 8;
    sbit  BMXDKPBA8_bit at BMXDKPBA.B8;
    const register unsigned short int BMXDKPBA7 = 7;
    sbit  BMXDKPBA7_bit at BMXDKPBA.B7;
    const register unsigned short int BMXDKPBA6 = 6;
    sbit  BMXDKPBA6_bit at BMXDKPBA.B6;
    const register unsigned short int BMXDKPBA5 = 5;
    sbit  BMXDKPBA5_bit at BMXDKPBA.B5;
    const register unsigned short int BMXDKPBA4 = 4;
    sbit  BMXDKPBA4_bit at BMXDKPBA.B4;
    const register unsigned short int BMXDKPBA3 = 3;
    sbit  BMXDKPBA3_bit at BMXDKPBA.B3;
    const register unsigned short int BMXDKPBA2 = 2;
    sbit  BMXDKPBA2_bit at BMXDKPBA.B2;
    const register unsigned short int BMXDKPBA1 = 1;
    sbit  BMXDKPBA1_bit at BMXDKPBA.B1;
    const register unsigned short int BMXDKPBA0 = 0;
    sbit  BMXDKPBA0_bit at BMXDKPBA.B0;

sfr atomic unsigned long   volatile BMXDUDBA         absolute 0xBF882020;
sfr unsigned long   volatile BMXDUDBACLR      absolute 0xBF882024;
sfr unsigned long   volatile BMXDUDBASET      absolute 0xBF882028;
sfr unsigned long   volatile BMXDUDBAINV      absolute 0xBF88202C;
    // BMXDUDBA bits
    const register unsigned short int BMXDUDBA31 = 31;
    sbit  BMXDUDBA31_bit at BMXDUDBA.B31;
    const register unsigned short int BMXDUDBA30 = 30;
    sbit  BMXDUDBA30_bit at BMXDUDBA.B30;
    const register unsigned short int BMXDUDBA29 = 29;
    sbit  BMXDUDBA29_bit at BMXDUDBA.B29;
    const register unsigned short int BMXDUDBA28 = 28;
    sbit  BMXDUDBA28_bit at BMXDUDBA.B28;
    const register unsigned short int BMXDUDBA27 = 27;
    sbit  BMXDUDBA27_bit at BMXDUDBA.B27;
    const register unsigned short int BMXDUDBA26 = 26;
    sbit  BMXDUDBA26_bit at BMXDUDBA.B26;
    const register unsigned short int BMXDUDBA25 = 25;
    sbit  BMXDUDBA25_bit at BMXDUDBA.B25;
    const register unsigned short int BMXDUDBA24 = 24;
    sbit  BMXDUDBA24_bit at BMXDUDBA.B24;
    const register unsigned short int BMXDUDBA23 = 23;
    sbit  BMXDUDBA23_bit at BMXDUDBA.B23;
    const register unsigned short int BMXDUDBA22 = 22;
    sbit  BMXDUDBA22_bit at BMXDUDBA.B22;
    const register unsigned short int BMXDUDBA21 = 21;
    sbit  BMXDUDBA21_bit at BMXDUDBA.B21;
    const register unsigned short int BMXDUDBA20 = 20;
    sbit  BMXDUDBA20_bit at BMXDUDBA.B20;
    const register unsigned short int BMXDUDBA19 = 19;
    sbit  BMXDUDBA19_bit at BMXDUDBA.B19;
    const register unsigned short int BMXDUDBA18 = 18;
    sbit  BMXDUDBA18_bit at BMXDUDBA.B18;
    const register unsigned short int BMXDUDBA17 = 17;
    sbit  BMXDUDBA17_bit at BMXDUDBA.B17;
    const register unsigned short int BMXDUDBA16 = 16;
    sbit  BMXDUDBA16_bit at BMXDUDBA.B16;
    const register unsigned short int BMXDUDBA15 = 15;
    sbit  BMXDUDBA15_bit at BMXDUDBA.B15;
    const register unsigned short int BMXDUDBA14 = 14;
    sbit  BMXDUDBA14_bit at BMXDUDBA.B14;
    const register unsigned short int BMXDUDBA13 = 13;
    sbit  BMXDUDBA13_bit at BMXDUDBA.B13;
    const register unsigned short int BMXDUDBA12 = 12;
    sbit  BMXDUDBA12_bit at BMXDUDBA.B12;
    const register unsigned short int BMXDUDBA11 = 11;
    sbit  BMXDUDBA11_bit at BMXDUDBA.B11;
    const register unsigned short int BMXDUDBA10 = 10;
    sbit  BMXDUDBA10_bit at BMXDUDBA.B10;
    const register unsigned short int BMXDUDBA9 = 9;
    sbit  BMXDUDBA9_bit at BMXDUDBA.B9;
    const register unsigned short int BMXDUDBA8 = 8;
    sbit  BMXDUDBA8_bit at BMXDUDBA.B8;
    const register unsigned short int BMXDUDBA7 = 7;
    sbit  BMXDUDBA7_bit at BMXDUDBA.B7;
    const register unsigned short int BMXDUDBA6 = 6;
    sbit  BMXDUDBA6_bit at BMXDUDBA.B6;
    const register unsigned short int BMXDUDBA5 = 5;
    sbit  BMXDUDBA5_bit at BMXDUDBA.B5;
    const register unsigned short int BMXDUDBA4 = 4;
    sbit  BMXDUDBA4_bit at BMXDUDBA.B4;
    const register unsigned short int BMXDUDBA3 = 3;
    sbit  BMXDUDBA3_bit at BMXDUDBA.B3;
    const register unsigned short int BMXDUDBA2 = 2;
    sbit  BMXDUDBA2_bit at BMXDUDBA.B2;
    const register unsigned short int BMXDUDBA1 = 1;
    sbit  BMXDUDBA1_bit at BMXDUDBA.B1;
    const register unsigned short int BMXDUDBA0 = 0;
    sbit  BMXDUDBA0_bit at BMXDUDBA.B0;

sfr atomic unsigned long   volatile BMXDUPBA         absolute 0xBF882030;
sfr unsigned long   volatile BMXDUPBACLR      absolute 0xBF882034;
sfr unsigned long   volatile BMXDUPBASET      absolute 0xBF882038;
sfr unsigned long   volatile BMXDUPBAINV      absolute 0xBF88203C;
    // BMXDUPBA bits
    const register unsigned short int BMXDUPBA31 = 31;
    sbit  BMXDUPBA31_bit at BMXDUPBA.B31;
    const register unsigned short int BMXDUPBA30 = 30;
    sbit  BMXDUPBA30_bit at BMXDUPBA.B30;
    const register unsigned short int BMXDUPBA29 = 29;
    sbit  BMXDUPBA29_bit at BMXDUPBA.B29;
    const register unsigned short int BMXDUPBA28 = 28;
    sbit  BMXDUPBA28_bit at BMXDUPBA.B28;
    const register unsigned short int BMXDUPBA27 = 27;
    sbit  BMXDUPBA27_bit at BMXDUPBA.B27;
    const register unsigned short int BMXDUPBA26 = 26;
    sbit  BMXDUPBA26_bit at BMXDUPBA.B26;
    const register unsigned short int BMXDUPBA25 = 25;
    sbit  BMXDUPBA25_bit at BMXDUPBA.B25;
    const register unsigned short int BMXDUPBA24 = 24;
    sbit  BMXDUPBA24_bit at BMXDUPBA.B24;
    const register unsigned short int BMXDUPBA23 = 23;
    sbit  BMXDUPBA23_bit at BMXDUPBA.B23;
    const register unsigned short int BMXDUPBA22 = 22;
    sbit  BMXDUPBA22_bit at BMXDUPBA.B22;
    const register unsigned short int BMXDUPBA21 = 21;
    sbit  BMXDUPBA21_bit at BMXDUPBA.B21;
    const register unsigned short int BMXDUPBA20 = 20;
    sbit  BMXDUPBA20_bit at BMXDUPBA.B20;
    const register unsigned short int BMXDUPBA19 = 19;
    sbit  BMXDUPBA19_bit at BMXDUPBA.B19;
    const register unsigned short int BMXDUPBA18 = 18;
    sbit  BMXDUPBA18_bit at BMXDUPBA.B18;
    const register unsigned short int BMXDUPBA17 = 17;
    sbit  BMXDUPBA17_bit at BMXDUPBA.B17;
    const register unsigned short int BMXDUPBA16 = 16;
    sbit  BMXDUPBA16_bit at BMXDUPBA.B16;
    const register unsigned short int BMXDUPBA15 = 15;
    sbit  BMXDUPBA15_bit at BMXDUPBA.B15;
    const register unsigned short int BMXDUPBA14 = 14;
    sbit  BMXDUPBA14_bit at BMXDUPBA.B14;
    const register unsigned short int BMXDUPBA13 = 13;
    sbit  BMXDUPBA13_bit at BMXDUPBA.B13;
    const register unsigned short int BMXDUPBA12 = 12;
    sbit  BMXDUPBA12_bit at BMXDUPBA.B12;
    const register unsigned short int BMXDUPBA11 = 11;
    sbit  BMXDUPBA11_bit at BMXDUPBA.B11;
    const register unsigned short int BMXDUPBA10 = 10;
    sbit  BMXDUPBA10_bit at BMXDUPBA.B10;
    const register unsigned short int BMXDUPBA9 = 9;
    sbit  BMXDUPBA9_bit at BMXDUPBA.B9;
    const register unsigned short int BMXDUPBA8 = 8;
    sbit  BMXDUPBA8_bit at BMXDUPBA.B8;
    const register unsigned short int BMXDUPBA7 = 7;
    sbit  BMXDUPBA7_bit at BMXDUPBA.B7;
    const register unsigned short int BMXDUPBA6 = 6;
    sbit  BMXDUPBA6_bit at BMXDUPBA.B6;
    const register unsigned short int BMXDUPBA5 = 5;
    sbit  BMXDUPBA5_bit at BMXDUPBA.B5;
    const register unsigned short int BMXDUPBA4 = 4;
    sbit  BMXDUPBA4_bit at BMXDUPBA.B4;
    const register unsigned short int BMXDUPBA3 = 3;
    sbit  BMXDUPBA3_bit at BMXDUPBA.B3;
    const register unsigned short int BMXDUPBA2 = 2;
    sbit  BMXDUPBA2_bit at BMXDUPBA.B2;
    const register unsigned short int BMXDUPBA1 = 1;
    sbit  BMXDUPBA1_bit at BMXDUPBA.B1;
    const register unsigned short int BMXDUPBA0 = 0;
    sbit  BMXDUPBA0_bit at BMXDUPBA.B0;

sfr unsigned long   volatile BMXDRMSZ         absolute 0xBF882040;
    // BMXDRMSZ bits
    const register unsigned short int BMXDRMSZ31 = 31;
    sbit  BMXDRMSZ31_bit at BMXDRMSZ.B31;
    const register unsigned short int BMXDRMSZ30 = 30;
    sbit  BMXDRMSZ30_bit at BMXDRMSZ.B30;
    const register unsigned short int BMXDRMSZ29 = 29;
    sbit  BMXDRMSZ29_bit at BMXDRMSZ.B29;
    const register unsigned short int BMXDRMSZ28 = 28;
    sbit  BMXDRMSZ28_bit at BMXDRMSZ.B28;
    const register unsigned short int BMXDRMSZ27 = 27;
    sbit  BMXDRMSZ27_bit at BMXDRMSZ.B27;
    const register unsigned short int BMXDRMSZ26 = 26;
    sbit  BMXDRMSZ26_bit at BMXDRMSZ.B26;
    const register unsigned short int BMXDRMSZ25 = 25;
    sbit  BMXDRMSZ25_bit at BMXDRMSZ.B25;
    const register unsigned short int BMXDRMSZ24 = 24;
    sbit  BMXDRMSZ24_bit at BMXDRMSZ.B24;
    const register unsigned short int BMXDRMSZ23 = 23;
    sbit  BMXDRMSZ23_bit at BMXDRMSZ.B23;
    const register unsigned short int BMXDRMSZ22 = 22;
    sbit  BMXDRMSZ22_bit at BMXDRMSZ.B22;
    const register unsigned short int BMXDRMSZ21 = 21;
    sbit  BMXDRMSZ21_bit at BMXDRMSZ.B21;
    const register unsigned short int BMXDRMSZ20 = 20;
    sbit  BMXDRMSZ20_bit at BMXDRMSZ.B20;
    const register unsigned short int BMXDRMSZ19 = 19;
    sbit  BMXDRMSZ19_bit at BMXDRMSZ.B19;
    const register unsigned short int BMXDRMSZ18 = 18;
    sbit  BMXDRMSZ18_bit at BMXDRMSZ.B18;
    const register unsigned short int BMXDRMSZ17 = 17;
    sbit  BMXDRMSZ17_bit at BMXDRMSZ.B17;
    const register unsigned short int BMXDRMSZ16 = 16;
    sbit  BMXDRMSZ16_bit at BMXDRMSZ.B16;
    const register unsigned short int BMXDRMSZ15 = 15;
    sbit  BMXDRMSZ15_bit at BMXDRMSZ.B15;
    const register unsigned short int BMXDRMSZ14 = 14;
    sbit  BMXDRMSZ14_bit at BMXDRMSZ.B14;
    const register unsigned short int BMXDRMSZ13 = 13;
    sbit  BMXDRMSZ13_bit at BMXDRMSZ.B13;
    const register unsigned short int BMXDRMSZ12 = 12;
    sbit  BMXDRMSZ12_bit at BMXDRMSZ.B12;
    const register unsigned short int BMXDRMSZ11 = 11;
    sbit  BMXDRMSZ11_bit at BMXDRMSZ.B11;
    const register unsigned short int BMXDRMSZ10 = 10;
    sbit  BMXDRMSZ10_bit at BMXDRMSZ.B10;
    const register unsigned short int BMXDRMSZ9 = 9;
    sbit  BMXDRMSZ9_bit at BMXDRMSZ.B9;
    const register unsigned short int BMXDRMSZ8 = 8;
    sbit  BMXDRMSZ8_bit at BMXDRMSZ.B8;
    const register unsigned short int BMXDRMSZ7 = 7;
    sbit  BMXDRMSZ7_bit at BMXDRMSZ.B7;
    const register unsigned short int BMXDRMSZ6 = 6;
    sbit  BMXDRMSZ6_bit at BMXDRMSZ.B6;
    const register unsigned short int BMXDRMSZ5 = 5;
    sbit  BMXDRMSZ5_bit at BMXDRMSZ.B5;
    const register unsigned short int BMXDRMSZ4 = 4;
    sbit  BMXDRMSZ4_bit at BMXDRMSZ.B4;
    const register unsigned short int BMXDRMSZ3 = 3;
    sbit  BMXDRMSZ3_bit at BMXDRMSZ.B3;
    const register unsigned short int BMXDRMSZ2 = 2;
    sbit  BMXDRMSZ2_bit at BMXDRMSZ.B2;
    const register unsigned short int BMXDRMSZ1 = 1;
    sbit  BMXDRMSZ1_bit at BMXDRMSZ.B1;
    const register unsigned short int BMXDRMSZ0 = 0;
    sbit  BMXDRMSZ0_bit at BMXDRMSZ.B0;

sfr atomic unsigned long   volatile BMXPUPBA         absolute 0xBF882050;
sfr unsigned long   volatile BMXPUPBACLR      absolute 0xBF882054;
sfr unsigned long   volatile BMXPUPBASET      absolute 0xBF882058;
sfr unsigned long   volatile BMXPUPBAINV      absolute 0xBF88205C;
    // BMXPUPBA bits
    const register unsigned short int BMXPUPBA31 = 31;
    sbit  BMXPUPBA31_bit at BMXPUPBA.B31;
    const register unsigned short int BMXPUPBA30 = 30;
    sbit  BMXPUPBA30_bit at BMXPUPBA.B30;
    const register unsigned short int BMXPUPBA29 = 29;
    sbit  BMXPUPBA29_bit at BMXPUPBA.B29;
    const register unsigned short int BMXPUPBA28 = 28;
    sbit  BMXPUPBA28_bit at BMXPUPBA.B28;
    const register unsigned short int BMXPUPBA27 = 27;
    sbit  BMXPUPBA27_bit at BMXPUPBA.B27;
    const register unsigned short int BMXPUPBA26 = 26;
    sbit  BMXPUPBA26_bit at BMXPUPBA.B26;
    const register unsigned short int BMXPUPBA25 = 25;
    sbit  BMXPUPBA25_bit at BMXPUPBA.B25;
    const register unsigned short int BMXPUPBA24 = 24;
    sbit  BMXPUPBA24_bit at BMXPUPBA.B24;
    const register unsigned short int BMXPUPBA23 = 23;
    sbit  BMXPUPBA23_bit at BMXPUPBA.B23;
    const register unsigned short int BMXPUPBA22 = 22;
    sbit  BMXPUPBA22_bit at BMXPUPBA.B22;
    const register unsigned short int BMXPUPBA21 = 21;
    sbit  BMXPUPBA21_bit at BMXPUPBA.B21;
    const register unsigned short int BMXPUPBA20 = 20;
    sbit  BMXPUPBA20_bit at BMXPUPBA.B20;
    const register unsigned short int BMXPUPBA19 = 19;
    sbit  BMXPUPBA19_bit at BMXPUPBA.B19;
    const register unsigned short int BMXPUPBA18 = 18;
    sbit  BMXPUPBA18_bit at BMXPUPBA.B18;
    const register unsigned short int BMXPUPBA17 = 17;
    sbit  BMXPUPBA17_bit at BMXPUPBA.B17;
    const register unsigned short int BMXPUPBA16 = 16;
    sbit  BMXPUPBA16_bit at BMXPUPBA.B16;
    const register unsigned short int BMXPUPBA15 = 15;
    sbit  BMXPUPBA15_bit at BMXPUPBA.B15;
    const register unsigned short int BMXPUPBA14 = 14;
    sbit  BMXPUPBA14_bit at BMXPUPBA.B14;
    const register unsigned short int BMXPUPBA13 = 13;
    sbit  BMXPUPBA13_bit at BMXPUPBA.B13;
    const register unsigned short int BMXPUPBA12 = 12;
    sbit  BMXPUPBA12_bit at BMXPUPBA.B12;
    const register unsigned short int BMXPUPBA11 = 11;
    sbit  BMXPUPBA11_bit at BMXPUPBA.B11;
    const register unsigned short int BMXPUPBA10 = 10;
    sbit  BMXPUPBA10_bit at BMXPUPBA.B10;
    const register unsigned short int BMXPUPBA9 = 9;
    sbit  BMXPUPBA9_bit at BMXPUPBA.B9;
    const register unsigned short int BMXPUPBA8 = 8;
    sbit  BMXPUPBA8_bit at BMXPUPBA.B8;
    const register unsigned short int BMXPUPBA7 = 7;
    sbit  BMXPUPBA7_bit at BMXPUPBA.B7;
    const register unsigned short int BMXPUPBA6 = 6;
    sbit  BMXPUPBA6_bit at BMXPUPBA.B6;
    const register unsigned short int BMXPUPBA5 = 5;
    sbit  BMXPUPBA5_bit at BMXPUPBA.B5;
    const register unsigned short int BMXPUPBA4 = 4;
    sbit  BMXPUPBA4_bit at BMXPUPBA.B4;
    const register unsigned short int BMXPUPBA3 = 3;
    sbit  BMXPUPBA3_bit at BMXPUPBA.B3;
    const register unsigned short int BMXPUPBA2 = 2;
    sbit  BMXPUPBA2_bit at BMXPUPBA.B2;
    const register unsigned short int BMXPUPBA1 = 1;
    sbit  BMXPUPBA1_bit at BMXPUPBA.B1;
    const register unsigned short int BMXPUPBA0 = 0;
    sbit  BMXPUPBA0_bit at BMXPUPBA.B0;

sfr unsigned long   volatile BMXPFMSZ         absolute 0xBF882060;
    // BMXPFMSZ bits
    const register unsigned short int BMXPFMSZ31 = 31;
    sbit  BMXPFMSZ31_bit at BMXPFMSZ.B31;
    const register unsigned short int BMXPFMSZ30 = 30;
    sbit  BMXPFMSZ30_bit at BMXPFMSZ.B30;
    const register unsigned short int BMXPFMSZ29 = 29;
    sbit  BMXPFMSZ29_bit at BMXPFMSZ.B29;
    const register unsigned short int BMXPFMSZ28 = 28;
    sbit  BMXPFMSZ28_bit at BMXPFMSZ.B28;
    const register unsigned short int BMXPFMSZ27 = 27;
    sbit  BMXPFMSZ27_bit at BMXPFMSZ.B27;
    const register unsigned short int BMXPFMSZ26 = 26;
    sbit  BMXPFMSZ26_bit at BMXPFMSZ.B26;
    const register unsigned short int BMXPFMSZ25 = 25;
    sbit  BMXPFMSZ25_bit at BMXPFMSZ.B25;
    const register unsigned short int BMXPFMSZ24 = 24;
    sbit  BMXPFMSZ24_bit at BMXPFMSZ.B24;
    const register unsigned short int BMXPFMSZ23 = 23;
    sbit  BMXPFMSZ23_bit at BMXPFMSZ.B23;
    const register unsigned short int BMXPFMSZ22 = 22;
    sbit  BMXPFMSZ22_bit at BMXPFMSZ.B22;
    const register unsigned short int BMXPFMSZ21 = 21;
    sbit  BMXPFMSZ21_bit at BMXPFMSZ.B21;
    const register unsigned short int BMXPFMSZ20 = 20;
    sbit  BMXPFMSZ20_bit at BMXPFMSZ.B20;
    const register unsigned short int BMXPFMSZ19 = 19;
    sbit  BMXPFMSZ19_bit at BMXPFMSZ.B19;
    const register unsigned short int BMXPFMSZ18 = 18;
    sbit  BMXPFMSZ18_bit at BMXPFMSZ.B18;
    const register unsigned short int BMXPFMSZ17 = 17;
    sbit  BMXPFMSZ17_bit at BMXPFMSZ.B17;
    const register unsigned short int BMXPFMSZ16 = 16;
    sbit  BMXPFMSZ16_bit at BMXPFMSZ.B16;
    const register unsigned short int BMXPFMSZ15 = 15;
    sbit  BMXPFMSZ15_bit at BMXPFMSZ.B15;
    const register unsigned short int BMXPFMSZ14 = 14;
    sbit  BMXPFMSZ14_bit at BMXPFMSZ.B14;
    const register unsigned short int BMXPFMSZ13 = 13;
    sbit  BMXPFMSZ13_bit at BMXPFMSZ.B13;
    const register unsigned short int BMXPFMSZ12 = 12;
    sbit  BMXPFMSZ12_bit at BMXPFMSZ.B12;
    const register unsigned short int BMXPFMSZ11 = 11;
    sbit  BMXPFMSZ11_bit at BMXPFMSZ.B11;
    const register unsigned short int BMXPFMSZ10 = 10;
    sbit  BMXPFMSZ10_bit at BMXPFMSZ.B10;
    const register unsigned short int BMXPFMSZ9 = 9;
    sbit  BMXPFMSZ9_bit at BMXPFMSZ.B9;
    const register unsigned short int BMXPFMSZ8 = 8;
    sbit  BMXPFMSZ8_bit at BMXPFMSZ.B8;
    const register unsigned short int BMXPFMSZ7 = 7;
    sbit  BMXPFMSZ7_bit at BMXPFMSZ.B7;
    const register unsigned short int BMXPFMSZ6 = 6;
    sbit  BMXPFMSZ6_bit at BMXPFMSZ.B6;
    const register unsigned short int BMXPFMSZ5 = 5;
    sbit  BMXPFMSZ5_bit at BMXPFMSZ.B5;
    const register unsigned short int BMXPFMSZ4 = 4;
    sbit  BMXPFMSZ4_bit at BMXPFMSZ.B4;
    const register unsigned short int BMXPFMSZ3 = 3;
    sbit  BMXPFMSZ3_bit at BMXPFMSZ.B3;
    const register unsigned short int BMXPFMSZ2 = 2;
    sbit  BMXPFMSZ2_bit at BMXPFMSZ.B2;
    const register unsigned short int BMXPFMSZ1 = 1;
    sbit  BMXPFMSZ1_bit at BMXPFMSZ.B1;
    const register unsigned short int BMXPFMSZ0 = 0;
    sbit  BMXPFMSZ0_bit at BMXPFMSZ.B0;

sfr unsigned long   volatile BMXBOOTSZ        absolute 0xBF882070;
    // BMXBOOTSZ bits
    const register unsigned short int BMXBOOTSZ31 = 31;
    sbit  BMXBOOTSZ31_bit at BMXBOOTSZ.B31;
    const register unsigned short int BMXBOOTSZ30 = 30;
    sbit  BMXBOOTSZ30_bit at BMXBOOTSZ.B30;
    const register unsigned short int BMXBOOTSZ29 = 29;
    sbit  BMXBOOTSZ29_bit at BMXBOOTSZ.B29;
    const register unsigned short int BMXBOOTSZ28 = 28;
    sbit  BMXBOOTSZ28_bit at BMXBOOTSZ.B28;
    const register unsigned short int BMXBOOTSZ27 = 27;
    sbit  BMXBOOTSZ27_bit at BMXBOOTSZ.B27;
    const register unsigned short int BMXBOOTSZ26 = 26;
    sbit  BMXBOOTSZ26_bit at BMXBOOTSZ.B26;
    const register unsigned short int BMXBOOTSZ25 = 25;
    sbit  BMXBOOTSZ25_bit at BMXBOOTSZ.B25;
    const register unsigned short int BMXBOOTSZ24 = 24;
    sbit  BMXBOOTSZ24_bit at BMXBOOTSZ.B24;
    const register unsigned short int BMXBOOTSZ23 = 23;
    sbit  BMXBOOTSZ23_bit at BMXBOOTSZ.B23;
    const register unsigned short int BMXBOOTSZ22 = 22;
    sbit  BMXBOOTSZ22_bit at BMXBOOTSZ.B22;
    const register unsigned short int BMXBOOTSZ21 = 21;
    sbit  BMXBOOTSZ21_bit at BMXBOOTSZ.B21;
    const register unsigned short int BMXBOOTSZ20 = 20;
    sbit  BMXBOOTSZ20_bit at BMXBOOTSZ.B20;
    const register unsigned short int BMXBOOTSZ19 = 19;
    sbit  BMXBOOTSZ19_bit at BMXBOOTSZ.B19;
    const register unsigned short int BMXBOOTSZ18 = 18;
    sbit  BMXBOOTSZ18_bit at BMXBOOTSZ.B18;
    const register unsigned short int BMXBOOTSZ17 = 17;
    sbit  BMXBOOTSZ17_bit at BMXBOOTSZ.B17;
    const register unsigned short int BMXBOOTSZ16 = 16;
    sbit  BMXBOOTSZ16_bit at BMXBOOTSZ.B16;
    const register unsigned short int BMXBOOTSZ15 = 15;
    sbit  BMXBOOTSZ15_bit at BMXBOOTSZ.B15;
    const register unsigned short int BMXBOOTSZ14 = 14;
    sbit  BMXBOOTSZ14_bit at BMXBOOTSZ.B14;
    const register unsigned short int BMXBOOTSZ13 = 13;
    sbit  BMXBOOTSZ13_bit at BMXBOOTSZ.B13;
    const register unsigned short int BMXBOOTSZ12 = 12;
    sbit  BMXBOOTSZ12_bit at BMXBOOTSZ.B12;
    const register unsigned short int BMXBOOTSZ11 = 11;
    sbit  BMXBOOTSZ11_bit at BMXBOOTSZ.B11;
    const register unsigned short int BMXBOOTSZ10 = 10;
    sbit  BMXBOOTSZ10_bit at BMXBOOTSZ.B10;
    const register unsigned short int BMXBOOTSZ9 = 9;
    sbit  BMXBOOTSZ9_bit at BMXBOOTSZ.B9;
    const register unsigned short int BMXBOOTSZ8 = 8;
    sbit  BMXBOOTSZ8_bit at BMXBOOTSZ.B8;
    const register unsigned short int BMXBOOTSZ7 = 7;
    sbit  BMXBOOTSZ7_bit at BMXBOOTSZ.B7;
    const register unsigned short int BMXBOOTSZ6 = 6;
    sbit  BMXBOOTSZ6_bit at BMXBOOTSZ.B6;
    const register unsigned short int BMXBOOTSZ5 = 5;
    sbit  BMXBOOTSZ5_bit at BMXBOOTSZ.B5;
    const register unsigned short int BMXBOOTSZ4 = 4;
    sbit  BMXBOOTSZ4_bit at BMXBOOTSZ.B4;
    const register unsigned short int BMXBOOTSZ3 = 3;
    sbit  BMXBOOTSZ3_bit at BMXBOOTSZ.B3;
    const register unsigned short int BMXBOOTSZ2 = 2;
    sbit  BMXBOOTSZ2_bit at BMXBOOTSZ.B2;
    const register unsigned short int BMXBOOTSZ1 = 1;
    sbit  BMXBOOTSZ1_bit at BMXBOOTSZ.B1;
    const register unsigned short int BMXBOOTSZ0 = 0;
    sbit  BMXBOOTSZ0_bit at BMXBOOTSZ.B0;

sfr atomic unsigned long   volatile DMACON           absolute 0xBF883000;
sfr unsigned long   volatile DMACONCLR        absolute 0xBF883004;
sfr unsigned long   volatile DMACONSET        absolute 0xBF883008;
sfr unsigned long   volatile DMACONINV        absolute 0xBF88300C;
    // DMACON bits
    sbit  ON__DMACON_bit at DMACON.B15;
    const register unsigned short int SUSPEND = 12;
    sbit  SUSPEND_bit at DMACON.B12;
    const register unsigned short int DMABUSY = 11;
    sbit  DMABUSY_bit at DMACON.B11;

sfr atomic unsigned long   volatile DMASTAT          absolute 0xBF883010;
sfr unsigned long   volatile DMASTATCLR       absolute 0xBF883014;
sfr unsigned long   volatile DMASTATSET       absolute 0xBF883018;
sfr unsigned long   volatile DMASTATINV       absolute 0xBF88301C;
    // DMASTAT bits
    const register unsigned short int RDWR = 3;
    sbit  RDWR_bit at DMASTAT.B3;
    const register unsigned short int DMACH2 = 2;
    sbit  DMACH2_bit at DMASTAT.B2;
    const register unsigned short int DMACH1 = 1;
    sbit  DMACH1_bit at DMASTAT.B1;
    const register unsigned short int DMACH0 = 0;
    sbit  DMACH0_bit at DMASTAT.B0;

sfr atomic unsigned long   volatile DMAADDR          absolute 0xBF883020;
sfr unsigned long   volatile DMAADDRCLR       absolute 0xBF883024;
sfr unsigned long   volatile DMAADDRSET       absolute 0xBF883028;
sfr unsigned long   volatile DMAADDRINV       absolute 0xBF88302C;
    // DMAADDR bits
    const register unsigned short int DMAADDR31 = 31;
    sbit  DMAADDR31_bit at DMAADDR.B31;
    const register unsigned short int DMAADDR30 = 30;
    sbit  DMAADDR30_bit at DMAADDR.B30;
    const register unsigned short int DMAADDR29 = 29;
    sbit  DMAADDR29_bit at DMAADDR.B29;
    const register unsigned short int DMAADDR28 = 28;
    sbit  DMAADDR28_bit at DMAADDR.B28;
    const register unsigned short int DMAADDR27 = 27;
    sbit  DMAADDR27_bit at DMAADDR.B27;
    const register unsigned short int DMAADDR26 = 26;
    sbit  DMAADDR26_bit at DMAADDR.B26;
    const register unsigned short int DMAADDR25 = 25;
    sbit  DMAADDR25_bit at DMAADDR.B25;
    const register unsigned short int DMAADDR24 = 24;
    sbit  DMAADDR24_bit at DMAADDR.B24;
    const register unsigned short int DMAADDR23 = 23;
    sbit  DMAADDR23_bit at DMAADDR.B23;
    const register unsigned short int DMAADDR22 = 22;
    sbit  DMAADDR22_bit at DMAADDR.B22;
    const register unsigned short int DMAADDR21 = 21;
    sbit  DMAADDR21_bit at DMAADDR.B21;
    const register unsigned short int DMAADDR20 = 20;
    sbit  DMAADDR20_bit at DMAADDR.B20;
    const register unsigned short int DMAADDR19 = 19;
    sbit  DMAADDR19_bit at DMAADDR.B19;
    const register unsigned short int DMAADDR18 = 18;
    sbit  DMAADDR18_bit at DMAADDR.B18;
    const register unsigned short int DMAADDR17 = 17;
    sbit  DMAADDR17_bit at DMAADDR.B17;
    const register unsigned short int DMAADDR16 = 16;
    sbit  DMAADDR16_bit at DMAADDR.B16;
    const register unsigned short int DMAADDR15 = 15;
    sbit  DMAADDR15_bit at DMAADDR.B15;
    const register unsigned short int DMAADDR14 = 14;
    sbit  DMAADDR14_bit at DMAADDR.B14;
    const register unsigned short int DMAADDR13 = 13;
    sbit  DMAADDR13_bit at DMAADDR.B13;
    const register unsigned short int DMAADDR12 = 12;
    sbit  DMAADDR12_bit at DMAADDR.B12;
    const register unsigned short int DMAADDR11 = 11;
    sbit  DMAADDR11_bit at DMAADDR.B11;
    const register unsigned short int DMAADDR10 = 10;
    sbit  DMAADDR10_bit at DMAADDR.B10;
    const register unsigned short int DMAADDR9 = 9;
    sbit  DMAADDR9_bit at DMAADDR.B9;
    const register unsigned short int DMAADDR8 = 8;
    sbit  DMAADDR8_bit at DMAADDR.B8;
    const register unsigned short int DMAADDR7 = 7;
    sbit  DMAADDR7_bit at DMAADDR.B7;
    const register unsigned short int DMAADDR6 = 6;
    sbit  DMAADDR6_bit at DMAADDR.B6;
    const register unsigned short int DMAADDR5 = 5;
    sbit  DMAADDR5_bit at DMAADDR.B5;
    const register unsigned short int DMAADDR4 = 4;
    sbit  DMAADDR4_bit at DMAADDR.B4;
    const register unsigned short int DMAADDR3 = 3;
    sbit  DMAADDR3_bit at DMAADDR.B3;
    const register unsigned short int DMAADDR2 = 2;
    sbit  DMAADDR2_bit at DMAADDR.B2;
    const register unsigned short int DMAADDR1 = 1;
    sbit  DMAADDR1_bit at DMAADDR.B1;
    const register unsigned short int DMAADDR0 = 0;
    sbit  DMAADDR0_bit at DMAADDR.B0;

sfr atomic unsigned long   volatile DCRCCON          absolute 0xBF883030;
sfr unsigned long   volatile DCRCCONCLR       absolute 0xBF883034;
sfr unsigned long   volatile DCRCCONSET       absolute 0xBF883038;
sfr unsigned long   volatile DCRCCONINV       absolute 0xBF88303C;
    // DCRCCON bits
    const register unsigned short int BYTO1 = 29;
    sbit  BYTO1_bit at DCRCCON.B29;
    const register unsigned short int BYTO0 = 28;
    sbit  BYTO0_bit at DCRCCON.B28;
    const register unsigned short int WBO = 27;
    sbit  WBO_bit at DCRCCON.B27;
    const register unsigned short int BITO = 24;
    sbit  BITO_bit at DCRCCON.B24;
    const register unsigned short int PLEN4 = 12;
    sbit  PLEN4_bit at DCRCCON.B12;
    const register unsigned short int PLEN3 = 11;
    sbit  PLEN3_bit at DCRCCON.B11;
    const register unsigned short int PLEN2 = 10;
    sbit  PLEN2_bit at DCRCCON.B10;
    const register unsigned short int PLEN1 = 9;
    sbit  PLEN1_bit at DCRCCON.B9;
    const register unsigned short int PLEN0 = 8;
    sbit  PLEN0_bit at DCRCCON.B8;
    const register unsigned short int CRCEN = 7;
    sbit  CRCEN_bit at DCRCCON.B7;
    const register unsigned short int CRCAPP = 6;
    sbit  CRCAPP_bit at DCRCCON.B6;
    const register unsigned short int CRCTYP = 5;
    sbit  CRCTYP_bit at DCRCCON.B5;
    const register unsigned short int CRCCH2 = 2;
    sbit  CRCCH2_bit at DCRCCON.B2;
    const register unsigned short int CRCCH1 = 1;
    sbit  CRCCH1_bit at DCRCCON.B1;
    const register unsigned short int CRCCH0 = 0;
    sbit  CRCCH0_bit at DCRCCON.B0;

sfr atomic unsigned long   volatile DCRCDATA         absolute 0xBF883040;
sfr unsigned long   volatile DCRCDATACLR      absolute 0xBF883044;
sfr unsigned long   volatile DCRCDATASET      absolute 0xBF883048;
sfr unsigned long   volatile DCRCDATAINV      absolute 0xBF88304C;
    // DCRCDATA bits
    const register unsigned short int DCRCDATA31 = 31;
    sbit  DCRCDATA31_bit at DCRCDATA.B31;
    const register unsigned short int DCRCDATA30 = 30;
    sbit  DCRCDATA30_bit at DCRCDATA.B30;
    const register unsigned short int DCRCDATA29 = 29;
    sbit  DCRCDATA29_bit at DCRCDATA.B29;
    const register unsigned short int DCRCDATA28 = 28;
    sbit  DCRCDATA28_bit at DCRCDATA.B28;
    const register unsigned short int DCRCDATA27 = 27;
    sbit  DCRCDATA27_bit at DCRCDATA.B27;
    const register unsigned short int DCRCDATA26 = 26;
    sbit  DCRCDATA26_bit at DCRCDATA.B26;
    const register unsigned short int DCRCDATA25 = 25;
    sbit  DCRCDATA25_bit at DCRCDATA.B25;
    const register unsigned short int DCRCDATA24 = 24;
    sbit  DCRCDATA24_bit at DCRCDATA.B24;
    const register unsigned short int DCRCDATA23 = 23;
    sbit  DCRCDATA23_bit at DCRCDATA.B23;
    const register unsigned short int DCRCDATA22 = 22;
    sbit  DCRCDATA22_bit at DCRCDATA.B22;
    const register unsigned short int DCRCDATA21 = 21;
    sbit  DCRCDATA21_bit at DCRCDATA.B21;
    const register unsigned short int DCRCDATA20 = 20;
    sbit  DCRCDATA20_bit at DCRCDATA.B20;
    const register unsigned short int DCRCDATA19 = 19;
    sbit  DCRCDATA19_bit at DCRCDATA.B19;
    const register unsigned short int DCRCDATA18 = 18;
    sbit  DCRCDATA18_bit at DCRCDATA.B18;
    const register unsigned short int DCRCDATA17 = 17;
    sbit  DCRCDATA17_bit at DCRCDATA.B17;
    const register unsigned short int DCRCDATA16 = 16;
    sbit  DCRCDATA16_bit at DCRCDATA.B16;
    const register unsigned short int DCRCDATA15 = 15;
    sbit  DCRCDATA15_bit at DCRCDATA.B15;
    const register unsigned short int DCRCDATA14 = 14;
    sbit  DCRCDATA14_bit at DCRCDATA.B14;
    const register unsigned short int DCRCDATA13 = 13;
    sbit  DCRCDATA13_bit at DCRCDATA.B13;
    const register unsigned short int DCRCDATA12 = 12;
    sbit  DCRCDATA12_bit at DCRCDATA.B12;
    const register unsigned short int DCRCDATA11 = 11;
    sbit  DCRCDATA11_bit at DCRCDATA.B11;
    const register unsigned short int DCRCDATA10 = 10;
    sbit  DCRCDATA10_bit at DCRCDATA.B10;
    const register unsigned short int DCRCDATA9 = 9;
    sbit  DCRCDATA9_bit at DCRCDATA.B9;
    const register unsigned short int DCRCDATA8 = 8;
    sbit  DCRCDATA8_bit at DCRCDATA.B8;
    const register unsigned short int DCRCDATA7 = 7;
    sbit  DCRCDATA7_bit at DCRCDATA.B7;
    const register unsigned short int DCRCDATA6 = 6;
    sbit  DCRCDATA6_bit at DCRCDATA.B6;
    const register unsigned short int DCRCDATA5 = 5;
    sbit  DCRCDATA5_bit at DCRCDATA.B5;
    const register unsigned short int DCRCDATA4 = 4;
    sbit  DCRCDATA4_bit at DCRCDATA.B4;
    const register unsigned short int DCRCDATA3 = 3;
    sbit  DCRCDATA3_bit at DCRCDATA.B3;
    const register unsigned short int DCRCDATA2 = 2;
    sbit  DCRCDATA2_bit at DCRCDATA.B2;
    const register unsigned short int DCRCDATA1 = 1;
    sbit  DCRCDATA1_bit at DCRCDATA.B1;
    const register unsigned short int DCRCDATA0 = 0;
    sbit  DCRCDATA0_bit at DCRCDATA.B0;

sfr atomic unsigned long   volatile DCRCXOR          absolute 0xBF883050;
sfr unsigned long   volatile DCRCXORCLR       absolute 0xBF883054;
sfr unsigned long   volatile DCRCXORSET       absolute 0xBF883058;
sfr unsigned long   volatile DCRCXORINV       absolute 0xBF88305C;
    // DCRCXOR bits
    const register unsigned short int DCRCXOR31 = 31;
    sbit  DCRCXOR31_bit at DCRCXOR.B31;
    const register unsigned short int DCRCXOR30 = 30;
    sbit  DCRCXOR30_bit at DCRCXOR.B30;
    const register unsigned short int DCRCXOR29 = 29;
    sbit  DCRCXOR29_bit at DCRCXOR.B29;
    const register unsigned short int DCRCXOR28 = 28;
    sbit  DCRCXOR28_bit at DCRCXOR.B28;
    const register unsigned short int DCRCXOR27 = 27;
    sbit  DCRCXOR27_bit at DCRCXOR.B27;
    const register unsigned short int DCRCXOR26 = 26;
    sbit  DCRCXOR26_bit at DCRCXOR.B26;
    const register unsigned short int DCRCXOR25 = 25;
    sbit  DCRCXOR25_bit at DCRCXOR.B25;
    const register unsigned short int DCRCXOR24 = 24;
    sbit  DCRCXOR24_bit at DCRCXOR.B24;
    const register unsigned short int DCRCXOR23 = 23;
    sbit  DCRCXOR23_bit at DCRCXOR.B23;
    const register unsigned short int DCRCXOR22 = 22;
    sbit  DCRCXOR22_bit at DCRCXOR.B22;
    const register unsigned short int DCRCXOR21 = 21;
    sbit  DCRCXOR21_bit at DCRCXOR.B21;
    const register unsigned short int DCRCXOR20 = 20;
    sbit  DCRCXOR20_bit at DCRCXOR.B20;
    const register unsigned short int DCRCXOR19 = 19;
    sbit  DCRCXOR19_bit at DCRCXOR.B19;
    const register unsigned short int DCRCXOR18 = 18;
    sbit  DCRCXOR18_bit at DCRCXOR.B18;
    const register unsigned short int DCRCXOR17 = 17;
    sbit  DCRCXOR17_bit at DCRCXOR.B17;
    const register unsigned short int DCRCXOR16 = 16;
    sbit  DCRCXOR16_bit at DCRCXOR.B16;
    const register unsigned short int DCRCXOR15 = 15;
    sbit  DCRCXOR15_bit at DCRCXOR.B15;
    const register unsigned short int DCRCXOR14 = 14;
    sbit  DCRCXOR14_bit at DCRCXOR.B14;
    const register unsigned short int DCRCXOR13 = 13;
    sbit  DCRCXOR13_bit at DCRCXOR.B13;
    const register unsigned short int DCRCXOR12 = 12;
    sbit  DCRCXOR12_bit at DCRCXOR.B12;
    const register unsigned short int DCRCXOR11 = 11;
    sbit  DCRCXOR11_bit at DCRCXOR.B11;
    const register unsigned short int DCRCXOR10 = 10;
    sbit  DCRCXOR10_bit at DCRCXOR.B10;
    const register unsigned short int DCRCXOR9 = 9;
    sbit  DCRCXOR9_bit at DCRCXOR.B9;
    const register unsigned short int DCRCXOR8 = 8;
    sbit  DCRCXOR8_bit at DCRCXOR.B8;
    const register unsigned short int DCRCXOR7 = 7;
    sbit  DCRCXOR7_bit at DCRCXOR.B7;
    const register unsigned short int DCRCXOR6 = 6;
    sbit  DCRCXOR6_bit at DCRCXOR.B6;
    const register unsigned short int DCRCXOR5 = 5;
    sbit  DCRCXOR5_bit at DCRCXOR.B5;
    const register unsigned short int DCRCXOR4 = 4;
    sbit  DCRCXOR4_bit at DCRCXOR.B4;
    const register unsigned short int DCRCXOR3 = 3;
    sbit  DCRCXOR3_bit at DCRCXOR.B3;
    const register unsigned short int DCRCXOR2 = 2;
    sbit  DCRCXOR2_bit at DCRCXOR.B2;
    const register unsigned short int DCRCXOR1 = 1;
    sbit  DCRCXOR1_bit at DCRCXOR.B1;
    const register unsigned short int DCRCXOR0 = 0;
    sbit  DCRCXOR0_bit at DCRCXOR.B0;

sfr atomic unsigned long   volatile DCH0CON          absolute 0xBF883060;
sfr unsigned long   volatile DCH0CONCLR       absolute 0xBF883064;
sfr unsigned long   volatile DCH0CONSET       absolute 0xBF883068;
sfr unsigned long   volatile DCH0CONINV       absolute 0xBF88306C;
    // DCH0CON bits
    const register unsigned short int CHBUSY = 15;
    sbit  CHBUSY_bit at DCH0CON.B15;
    const register unsigned short int CHCHNS = 8;
    sbit  CHCHNS_bit at DCH0CON.B8;
    const register unsigned short int CHEN = 7;
    sbit  CHEN_bit at DCH0CON.B7;
    const register unsigned short int CHAED = 6;
    sbit  CHAED_bit at DCH0CON.B6;
    const register unsigned short int CHCHN = 5;
    sbit  CHCHN_bit at DCH0CON.B5;
    const register unsigned short int CHAEN = 4;
    sbit  CHAEN_bit at DCH0CON.B4;
    const register unsigned short int CHEDET = 2;
    sbit  CHEDET_bit at DCH0CON.B2;
    const register unsigned short int CHPRI1 = 1;
    sbit  CHPRI1_bit at DCH0CON.B1;
    const register unsigned short int CHPRI0 = 0;
    sbit  CHPRI0_bit at DCH0CON.B0;

sfr atomic unsigned long   volatile DCH0ECON         absolute 0xBF883070;
sfr unsigned long   volatile DCH0ECONCLR      absolute 0xBF883074;
sfr unsigned long   volatile DCH0ECONSET      absolute 0xBF883078;
sfr unsigned long   volatile DCH0ECONINV      absolute 0xBF88307C;
    // DCH0ECON bits
    const register unsigned short int CHAIRQ7 = 23;
    sbit  CHAIRQ7_bit at DCH0ECON.B23;
    const register unsigned short int CHAIRQ6 = 22;
    sbit  CHAIRQ6_bit at DCH0ECON.B22;
    const register unsigned short int CHAIRQ5 = 21;
    sbit  CHAIRQ5_bit at DCH0ECON.B21;
    const register unsigned short int CHAIRQ4 = 20;
    sbit  CHAIRQ4_bit at DCH0ECON.B20;
    const register unsigned short int CHAIRQ3 = 19;
    sbit  CHAIRQ3_bit at DCH0ECON.B19;
    const register unsigned short int CHAIRQ2 = 18;
    sbit  CHAIRQ2_bit at DCH0ECON.B18;
    const register unsigned short int CHAIRQ1 = 17;
    sbit  CHAIRQ1_bit at DCH0ECON.B17;
    const register unsigned short int CHAIRQ0 = 16;
    sbit  CHAIRQ0_bit at DCH0ECON.B16;
    const register unsigned short int CHSIRQ7 = 15;
    sbit  CHSIRQ7_bit at DCH0ECON.B15;
    const register unsigned short int CHSIRQ6 = 14;
    sbit  CHSIRQ6_bit at DCH0ECON.B14;
    const register unsigned short int CHSIRQ5 = 13;
    sbit  CHSIRQ5_bit at DCH0ECON.B13;
    const register unsigned short int CHSIRQ4 = 12;
    sbit  CHSIRQ4_bit at DCH0ECON.B12;
    const register unsigned short int CHSIRQ3 = 11;
    sbit  CHSIRQ3_bit at DCH0ECON.B11;
    const register unsigned short int CHSIRQ2 = 10;
    sbit  CHSIRQ2_bit at DCH0ECON.B10;
    const register unsigned short int CHSIRQ1 = 9;
    sbit  CHSIRQ1_bit at DCH0ECON.B9;
    const register unsigned short int CHSIRQ0 = 8;
    sbit  CHSIRQ0_bit at DCH0ECON.B8;
    const register unsigned short int CFORCE = 7;
    sbit  CFORCE_bit at DCH0ECON.B7;
    const register unsigned short int CABORT = 6;
    sbit  CABORT_bit at DCH0ECON.B6;
    const register unsigned short int PATEN = 5;
    sbit  PATEN_bit at DCH0ECON.B5;
    const register unsigned short int SIRQEN = 4;
    sbit  SIRQEN_bit at DCH0ECON.B4;
    const register unsigned short int AIRQEN = 3;
    sbit  AIRQEN_bit at DCH0ECON.B3;

sfr atomic unsigned long   volatile DCH0INT          absolute 0xBF883080;
sfr unsigned long   volatile DCH0INTCLR       absolute 0xBF883084;
sfr unsigned long   volatile DCH0INTSET       absolute 0xBF883088;
sfr unsigned long   volatile DCH0INTINV       absolute 0xBF88308C;
    // DCH0INT bits
    const register unsigned short int CHSDIE = 23;
    sbit  CHSDIE_bit at DCH0INT.B23;
    const register unsigned short int CHSHIE = 22;
    sbit  CHSHIE_bit at DCH0INT.B22;
    const register unsigned short int CHDDIE = 21;
    sbit  CHDDIE_bit at DCH0INT.B21;
    const register unsigned short int CHDHIE = 20;
    sbit  CHDHIE_bit at DCH0INT.B20;
    const register unsigned short int CHBCIE = 19;
    sbit  CHBCIE_bit at DCH0INT.B19;
    const register unsigned short int CHCCIE = 18;
    sbit  CHCCIE_bit at DCH0INT.B18;
    const register unsigned short int CHTAIE = 17;
    sbit  CHTAIE_bit at DCH0INT.B17;
    const register unsigned short int CHERIE = 16;
    sbit  CHERIE_bit at DCH0INT.B16;
    const register unsigned short int CHSDIF = 7;
    sbit  CHSDIF_bit at DCH0INT.B7;
    const register unsigned short int CHSHIF = 6;
    sbit  CHSHIF_bit at DCH0INT.B6;
    const register unsigned short int CHDDIF = 5;
    sbit  CHDDIF_bit at DCH0INT.B5;
    const register unsigned short int CHDHIF = 4;
    sbit  CHDHIF_bit at DCH0INT.B4;
    const register unsigned short int CHBCIF = 3;
    sbit  CHBCIF_bit at DCH0INT.B3;
    const register unsigned short int CHCCIF = 2;
    sbit  CHCCIF_bit at DCH0INT.B2;
    const register unsigned short int CHTAIF = 1;
    sbit  CHTAIF_bit at DCH0INT.B1;
    const register unsigned short int CHERIF = 0;
    sbit  CHERIF_bit at DCH0INT.B0;

sfr atomic unsigned long   volatile DCH0SSA          absolute 0xBF883090;
sfr unsigned long   volatile DCH0SSACLR       absolute 0xBF883094;
sfr unsigned long   volatile DCH0SSASET       absolute 0xBF883098;
sfr unsigned long   volatile DCH0SSAINV       absolute 0xBF88309C;
    // DCH0SSA bits
    const register unsigned short int DCH0SSA31 = 31;
    sbit  DCH0SSA31_bit at DCH0SSA.B31;
    const register unsigned short int DCH0SSA30 = 30;
    sbit  DCH0SSA30_bit at DCH0SSA.B30;
    const register unsigned short int DCH0SSA29 = 29;
    sbit  DCH0SSA29_bit at DCH0SSA.B29;
    const register unsigned short int DCH0SSA28 = 28;
    sbit  DCH0SSA28_bit at DCH0SSA.B28;
    const register unsigned short int DCH0SSA27 = 27;
    sbit  DCH0SSA27_bit at DCH0SSA.B27;
    const register unsigned short int DCH0SSA26 = 26;
    sbit  DCH0SSA26_bit at DCH0SSA.B26;
    const register unsigned short int DCH0SSA25 = 25;
    sbit  DCH0SSA25_bit at DCH0SSA.B25;
    const register unsigned short int DCH0SSA24 = 24;
    sbit  DCH0SSA24_bit at DCH0SSA.B24;
    const register unsigned short int DCH0SSA23 = 23;
    sbit  DCH0SSA23_bit at DCH0SSA.B23;
    const register unsigned short int DCH0SSA22 = 22;
    sbit  DCH0SSA22_bit at DCH0SSA.B22;
    const register unsigned short int DCH0SSA21 = 21;
    sbit  DCH0SSA21_bit at DCH0SSA.B21;
    const register unsigned short int DCH0SSA20 = 20;
    sbit  DCH0SSA20_bit at DCH0SSA.B20;
    const register unsigned short int DCH0SSA19 = 19;
    sbit  DCH0SSA19_bit at DCH0SSA.B19;
    const register unsigned short int DCH0SSA18 = 18;
    sbit  DCH0SSA18_bit at DCH0SSA.B18;
    const register unsigned short int DCH0SSA17 = 17;
    sbit  DCH0SSA17_bit at DCH0SSA.B17;
    const register unsigned short int DCH0SSA16 = 16;
    sbit  DCH0SSA16_bit at DCH0SSA.B16;
    const register unsigned short int DCH0SSA15 = 15;
    sbit  DCH0SSA15_bit at DCH0SSA.B15;
    const register unsigned short int DCH0SSA14 = 14;
    sbit  DCH0SSA14_bit at DCH0SSA.B14;
    const register unsigned short int DCH0SSA13 = 13;
    sbit  DCH0SSA13_bit at DCH0SSA.B13;
    const register unsigned short int DCH0SSA12 = 12;
    sbit  DCH0SSA12_bit at DCH0SSA.B12;
    const register unsigned short int DCH0SSA11 = 11;
    sbit  DCH0SSA11_bit at DCH0SSA.B11;
    const register unsigned short int DCH0SSA10 = 10;
    sbit  DCH0SSA10_bit at DCH0SSA.B10;
    const register unsigned short int DCH0SSA9 = 9;
    sbit  DCH0SSA9_bit at DCH0SSA.B9;
    const register unsigned short int DCH0SSA8 = 8;
    sbit  DCH0SSA8_bit at DCH0SSA.B8;
    const register unsigned short int DCH0SSA7 = 7;
    sbit  DCH0SSA7_bit at DCH0SSA.B7;
    const register unsigned short int DCH0SSA6 = 6;
    sbit  DCH0SSA6_bit at DCH0SSA.B6;
    const register unsigned short int DCH0SSA5 = 5;
    sbit  DCH0SSA5_bit at DCH0SSA.B5;
    const register unsigned short int DCH0SSA4 = 4;
    sbit  DCH0SSA4_bit at DCH0SSA.B4;
    const register unsigned short int DCH0SSA3 = 3;
    sbit  DCH0SSA3_bit at DCH0SSA.B3;
    const register unsigned short int DCH0SSA2 = 2;
    sbit  DCH0SSA2_bit at DCH0SSA.B2;
    const register unsigned short int DCH0SSA1 = 1;
    sbit  DCH0SSA1_bit at DCH0SSA.B1;
    const register unsigned short int DCH0SSA0 = 0;
    sbit  DCH0SSA0_bit at DCH0SSA.B0;

sfr atomic unsigned long   volatile DCH0DSA          absolute 0xBF8830A0;
sfr unsigned long   volatile DCH0DSACLR       absolute 0xBF8830A4;
sfr unsigned long   volatile DCH0DSASET       absolute 0xBF8830A8;
sfr unsigned long   volatile DCH0DSAINV       absolute 0xBF8830AC;
    // DCH0DSA bits
    const register unsigned short int DCH0DSA31 = 31;
    sbit  DCH0DSA31_bit at DCH0DSA.B31;
    const register unsigned short int DCH0DSA30 = 30;
    sbit  DCH0DSA30_bit at DCH0DSA.B30;
    const register unsigned short int DCH0DSA29 = 29;
    sbit  DCH0DSA29_bit at DCH0DSA.B29;
    const register unsigned short int DCH0DSA28 = 28;
    sbit  DCH0DSA28_bit at DCH0DSA.B28;
    const register unsigned short int DCH0DSA27 = 27;
    sbit  DCH0DSA27_bit at DCH0DSA.B27;
    const register unsigned short int DCH0DSA26 = 26;
    sbit  DCH0DSA26_bit at DCH0DSA.B26;
    const register unsigned short int DCH0DSA25 = 25;
    sbit  DCH0DSA25_bit at DCH0DSA.B25;
    const register unsigned short int DCH0DSA24 = 24;
    sbit  DCH0DSA24_bit at DCH0DSA.B24;
    const register unsigned short int DCH0DSA23 = 23;
    sbit  DCH0DSA23_bit at DCH0DSA.B23;
    const register unsigned short int DCH0DSA22 = 22;
    sbit  DCH0DSA22_bit at DCH0DSA.B22;
    const register unsigned short int DCH0DSA21 = 21;
    sbit  DCH0DSA21_bit at DCH0DSA.B21;
    const register unsigned short int DCH0DSA20 = 20;
    sbit  DCH0DSA20_bit at DCH0DSA.B20;
    const register unsigned short int DCH0DSA19 = 19;
    sbit  DCH0DSA19_bit at DCH0DSA.B19;
    const register unsigned short int DCH0DSA18 = 18;
    sbit  DCH0DSA18_bit at DCH0DSA.B18;
    const register unsigned short int DCH0DSA17 = 17;
    sbit  DCH0DSA17_bit at DCH0DSA.B17;
    const register unsigned short int DCH0DSA16 = 16;
    sbit  DCH0DSA16_bit at DCH0DSA.B16;
    const register unsigned short int DCH0DSA15 = 15;
    sbit  DCH0DSA15_bit at DCH0DSA.B15;
    const register unsigned short int DCH0DSA14 = 14;
    sbit  DCH0DSA14_bit at DCH0DSA.B14;
    const register unsigned short int DCH0DSA13 = 13;
    sbit  DCH0DSA13_bit at DCH0DSA.B13;
    const register unsigned short int DCH0DSA12 = 12;
    sbit  DCH0DSA12_bit at DCH0DSA.B12;
    const register unsigned short int DCH0DSA11 = 11;
    sbit  DCH0DSA11_bit at DCH0DSA.B11;
    const register unsigned short int DCH0DSA10 = 10;
    sbit  DCH0DSA10_bit at DCH0DSA.B10;
    const register unsigned short int DCH0DSA9 = 9;
    sbit  DCH0DSA9_bit at DCH0DSA.B9;
    const register unsigned short int DCH0DSA8 = 8;
    sbit  DCH0DSA8_bit at DCH0DSA.B8;
    const register unsigned short int DCH0DSA7 = 7;
    sbit  DCH0DSA7_bit at DCH0DSA.B7;
    const register unsigned short int DCH0DSA6 = 6;
    sbit  DCH0DSA6_bit at DCH0DSA.B6;
    const register unsigned short int DCH0DSA5 = 5;
    sbit  DCH0DSA5_bit at DCH0DSA.B5;
    const register unsigned short int DCH0DSA4 = 4;
    sbit  DCH0DSA4_bit at DCH0DSA.B4;
    const register unsigned short int DCH0DSA3 = 3;
    sbit  DCH0DSA3_bit at DCH0DSA.B3;
    const register unsigned short int DCH0DSA2 = 2;
    sbit  DCH0DSA2_bit at DCH0DSA.B2;
    const register unsigned short int DCH0DSA1 = 1;
    sbit  DCH0DSA1_bit at DCH0DSA.B1;
    const register unsigned short int DCH0DSA0 = 0;
    sbit  DCH0DSA0_bit at DCH0DSA.B0;

sfr atomic unsigned long   volatile DCH0SSIZ         absolute 0xBF8830B0;
sfr unsigned long   volatile DCH0SSIZCLR      absolute 0xBF8830B4;
sfr unsigned long   volatile DCH0SSIZSET      absolute 0xBF8830B8;
sfr unsigned long   volatile DCH0SSIZINV      absolute 0xBF8830BC;
    // DCH0SSIZ bits
    const register unsigned short int CHSSIZ15 = 15;
    sbit  CHSSIZ15_bit at DCH0SSIZ.B15;
    const register unsigned short int CHSSIZ14 = 14;
    sbit  CHSSIZ14_bit at DCH0SSIZ.B14;
    const register unsigned short int CHSSIZ13 = 13;
    sbit  CHSSIZ13_bit at DCH0SSIZ.B13;
    const register unsigned short int CHSSIZ12 = 12;
    sbit  CHSSIZ12_bit at DCH0SSIZ.B12;
    const register unsigned short int CHSSIZ11 = 11;
    sbit  CHSSIZ11_bit at DCH0SSIZ.B11;
    const register unsigned short int CHSSIZ10 = 10;
    sbit  CHSSIZ10_bit at DCH0SSIZ.B10;
    const register unsigned short int CHSSIZ9 = 9;
    sbit  CHSSIZ9_bit at DCH0SSIZ.B9;
    const register unsigned short int CHSSIZ8 = 8;
    sbit  CHSSIZ8_bit at DCH0SSIZ.B8;
    const register unsigned short int CHSSIZ7 = 7;
    sbit  CHSSIZ7_bit at DCH0SSIZ.B7;
    const register unsigned short int CHSSIZ6 = 6;
    sbit  CHSSIZ6_bit at DCH0SSIZ.B6;
    const register unsigned short int CHSSIZ5 = 5;
    sbit  CHSSIZ5_bit at DCH0SSIZ.B5;
    const register unsigned short int CHSSIZ4 = 4;
    sbit  CHSSIZ4_bit at DCH0SSIZ.B4;
    const register unsigned short int CHSSIZ3 = 3;
    sbit  CHSSIZ3_bit at DCH0SSIZ.B3;
    const register unsigned short int CHSSIZ2 = 2;
    sbit  CHSSIZ2_bit at DCH0SSIZ.B2;
    const register unsigned short int CHSSIZ1 = 1;
    sbit  CHSSIZ1_bit at DCH0SSIZ.B1;
    const register unsigned short int CHSSIZ0 = 0;
    sbit  CHSSIZ0_bit at DCH0SSIZ.B0;

sfr atomic unsigned long   volatile DCH0DSIZ         absolute 0xBF8830C0;
sfr unsigned long   volatile DCH0DSIZCLR      absolute 0xBF8830C4;
sfr unsigned long   volatile DCH0DSIZSET      absolute 0xBF8830C8;
sfr unsigned long   volatile DCH0DSIZINV      absolute 0xBF8830CC;
    // DCH0DSIZ bits
    const register unsigned short int CHDSIZ15 = 15;
    sbit  CHDSIZ15_bit at DCH0DSIZ.B15;
    const register unsigned short int CHDSIZ14 = 14;
    sbit  CHDSIZ14_bit at DCH0DSIZ.B14;
    const register unsigned short int CHDSIZ13 = 13;
    sbit  CHDSIZ13_bit at DCH0DSIZ.B13;
    const register unsigned short int CHDSIZ12 = 12;
    sbit  CHDSIZ12_bit at DCH0DSIZ.B12;
    const register unsigned short int CHDSIZ11 = 11;
    sbit  CHDSIZ11_bit at DCH0DSIZ.B11;
    const register unsigned short int CHDSIZ10 = 10;
    sbit  CHDSIZ10_bit at DCH0DSIZ.B10;
    const register unsigned short int CHDSIZ9 = 9;
    sbit  CHDSIZ9_bit at DCH0DSIZ.B9;
    const register unsigned short int CHDSIZ8 = 8;
    sbit  CHDSIZ8_bit at DCH0DSIZ.B8;
    const register unsigned short int CHDSIZ7 = 7;
    sbit  CHDSIZ7_bit at DCH0DSIZ.B7;
    const register unsigned short int CHDSIZ6 = 6;
    sbit  CHDSIZ6_bit at DCH0DSIZ.B6;
    const register unsigned short int CHDSIZ5 = 5;
    sbit  CHDSIZ5_bit at DCH0DSIZ.B5;
    const register unsigned short int CHDSIZ4 = 4;
    sbit  CHDSIZ4_bit at DCH0DSIZ.B4;
    const register unsigned short int CHDSIZ3 = 3;
    sbit  CHDSIZ3_bit at DCH0DSIZ.B3;
    const register unsigned short int CHDSIZ2 = 2;
    sbit  CHDSIZ2_bit at DCH0DSIZ.B2;
    const register unsigned short int CHDSIZ1 = 1;
    sbit  CHDSIZ1_bit at DCH0DSIZ.B1;
    const register unsigned short int CHDSIZ0 = 0;
    sbit  CHDSIZ0_bit at DCH0DSIZ.B0;

sfr atomic unsigned long   volatile DCH0SPTR         absolute 0xBF8830D0;
sfr unsigned long   volatile DCH0SPTRCLR      absolute 0xBF8830D4;
sfr unsigned long   volatile DCH0SPTRSET      absolute 0xBF8830D8;
sfr unsigned long   volatile DCH0SPTRINV      absolute 0xBF8830DC;
    // DCH0SPTR bits
    const register unsigned short int CHSPTR15 = 15;
    sbit  CHSPTR15_bit at DCH0SPTR.B15;
    const register unsigned short int CHSPTR14 = 14;
    sbit  CHSPTR14_bit at DCH0SPTR.B14;
    const register unsigned short int CHSPTR13 = 13;
    sbit  CHSPTR13_bit at DCH0SPTR.B13;
    const register unsigned short int CHSPTR12 = 12;
    sbit  CHSPTR12_bit at DCH0SPTR.B12;
    const register unsigned short int CHSPTR11 = 11;
    sbit  CHSPTR11_bit at DCH0SPTR.B11;
    const register unsigned short int CHSPTR10 = 10;
    sbit  CHSPTR10_bit at DCH0SPTR.B10;
    const register unsigned short int CHSPTR9 = 9;
    sbit  CHSPTR9_bit at DCH0SPTR.B9;
    const register unsigned short int CHSPTR8 = 8;
    sbit  CHSPTR8_bit at DCH0SPTR.B8;
    const register unsigned short int CHSPTR7 = 7;
    sbit  CHSPTR7_bit at DCH0SPTR.B7;
    const register unsigned short int CHSPTR6 = 6;
    sbit  CHSPTR6_bit at DCH0SPTR.B6;
    const register unsigned short int CHSPTR5 = 5;
    sbit  CHSPTR5_bit at DCH0SPTR.B5;
    const register unsigned short int CHSPTR4 = 4;
    sbit  CHSPTR4_bit at DCH0SPTR.B4;
    const register unsigned short int CHSPTR3 = 3;
    sbit  CHSPTR3_bit at DCH0SPTR.B3;
    const register unsigned short int CHSPTR2 = 2;
    sbit  CHSPTR2_bit at DCH0SPTR.B2;
    const register unsigned short int CHSPTR1 = 1;
    sbit  CHSPTR1_bit at DCH0SPTR.B1;
    const register unsigned short int CHSPTR0 = 0;
    sbit  CHSPTR0_bit at DCH0SPTR.B0;

sfr atomic unsigned long   volatile DCH0DPTR         absolute 0xBF8830E0;
sfr unsigned long   volatile DCH0DPTRCLR      absolute 0xBF8830E4;
sfr unsigned long   volatile DCH0DPTRSET      absolute 0xBF8830E8;
sfr unsigned long   volatile DCH0DPTRINV      absolute 0xBF8830EC;
    // DCH0DPTR bits
    const register unsigned short int CHDPTR15 = 15;
    sbit  CHDPTR15_bit at DCH0DPTR.B15;
    const register unsigned short int CHDPTR14 = 14;
    sbit  CHDPTR14_bit at DCH0DPTR.B14;
    const register unsigned short int CHDPTR13 = 13;
    sbit  CHDPTR13_bit at DCH0DPTR.B13;
    const register unsigned short int CHDPTR12 = 12;
    sbit  CHDPTR12_bit at DCH0DPTR.B12;
    const register unsigned short int CHDPTR11 = 11;
    sbit  CHDPTR11_bit at DCH0DPTR.B11;
    const register unsigned short int CHDPTR10 = 10;
    sbit  CHDPTR10_bit at DCH0DPTR.B10;
    const register unsigned short int CHDPTR9 = 9;
    sbit  CHDPTR9_bit at DCH0DPTR.B9;
    const register unsigned short int CHDPTR8 = 8;
    sbit  CHDPTR8_bit at DCH0DPTR.B8;
    const register unsigned short int CHDPTR7 = 7;
    sbit  CHDPTR7_bit at DCH0DPTR.B7;
    const register unsigned short int CHDPTR6 = 6;
    sbit  CHDPTR6_bit at DCH0DPTR.B6;
    const register unsigned short int CHDPTR5 = 5;
    sbit  CHDPTR5_bit at DCH0DPTR.B5;
    const register unsigned short int CHDPTR4 = 4;
    sbit  CHDPTR4_bit at DCH0DPTR.B4;
    const register unsigned short int CHDPTR3 = 3;
    sbit  CHDPTR3_bit at DCH0DPTR.B3;
    const register unsigned short int CHDPTR2 = 2;
    sbit  CHDPTR2_bit at DCH0DPTR.B2;
    const register unsigned short int CHDPTR1 = 1;
    sbit  CHDPTR1_bit at DCH0DPTR.B1;
    const register unsigned short int CHDPTR0 = 0;
    sbit  CHDPTR0_bit at DCH0DPTR.B0;

sfr atomic unsigned long   volatile DCH0CSIZ         absolute 0xBF8830F0;
sfr unsigned long   volatile DCH0CSIZCLR      absolute 0xBF8830F4;
sfr unsigned long   volatile DCH0CSIZSET      absolute 0xBF8830F8;
sfr unsigned long   volatile DCH0CSIZINV      absolute 0xBF8830FC;
    // DCH0CSIZ bits
    const register unsigned short int CHCSIZ15 = 15;
    sbit  CHCSIZ15_bit at DCH0CSIZ.B15;
    const register unsigned short int CHCSIZ14 = 14;
    sbit  CHCSIZ14_bit at DCH0CSIZ.B14;
    const register unsigned short int CHCSIZ13 = 13;
    sbit  CHCSIZ13_bit at DCH0CSIZ.B13;
    const register unsigned short int CHCSIZ12 = 12;
    sbit  CHCSIZ12_bit at DCH0CSIZ.B12;
    const register unsigned short int CHCSIZ11 = 11;
    sbit  CHCSIZ11_bit at DCH0CSIZ.B11;
    const register unsigned short int CHCSIZ10 = 10;
    sbit  CHCSIZ10_bit at DCH0CSIZ.B10;
    const register unsigned short int CHCSIZ9 = 9;
    sbit  CHCSIZ9_bit at DCH0CSIZ.B9;
    const register unsigned short int CHCSIZ8 = 8;
    sbit  CHCSIZ8_bit at DCH0CSIZ.B8;
    const register unsigned short int CHCSIZ7 = 7;
    sbit  CHCSIZ7_bit at DCH0CSIZ.B7;
    const register unsigned short int CHCSIZ6 = 6;
    sbit  CHCSIZ6_bit at DCH0CSIZ.B6;
    const register unsigned short int CHCSIZ5 = 5;
    sbit  CHCSIZ5_bit at DCH0CSIZ.B5;
    const register unsigned short int CHCSIZ4 = 4;
    sbit  CHCSIZ4_bit at DCH0CSIZ.B4;
    const register unsigned short int CHCSIZ3 = 3;
    sbit  CHCSIZ3_bit at DCH0CSIZ.B3;
    const register unsigned short int CHCSIZ2 = 2;
    sbit  CHCSIZ2_bit at DCH0CSIZ.B2;
    const register unsigned short int CHCSIZ1 = 1;
    sbit  CHCSIZ1_bit at DCH0CSIZ.B1;
    const register unsigned short int CHCSIZ0 = 0;
    sbit  CHCSIZ0_bit at DCH0CSIZ.B0;

sfr atomic unsigned long   volatile DCH0CPTR         absolute 0xBF883100;
sfr unsigned long   volatile DCH0CPTRCLR      absolute 0xBF883104;
sfr unsigned long   volatile DCH0CPTRSET      absolute 0xBF883108;
sfr unsigned long   volatile DCH0CPTRINV      absolute 0xBF88310C;
    // DCH0CPTR bits
    const register unsigned short int CHCPTR15 = 15;
    sbit  CHCPTR15_bit at DCH0CPTR.B15;
    const register unsigned short int CHCPTR14 = 14;
    sbit  CHCPTR14_bit at DCH0CPTR.B14;
    const register unsigned short int CHCPTR13 = 13;
    sbit  CHCPTR13_bit at DCH0CPTR.B13;
    const register unsigned short int CHCPTR12 = 12;
    sbit  CHCPTR12_bit at DCH0CPTR.B12;
    const register unsigned short int CHCPTR11 = 11;
    sbit  CHCPTR11_bit at DCH0CPTR.B11;
    const register unsigned short int CHCPTR10 = 10;
    sbit  CHCPTR10_bit at DCH0CPTR.B10;
    const register unsigned short int CHCPTR9 = 9;
    sbit  CHCPTR9_bit at DCH0CPTR.B9;
    const register unsigned short int CHCPTR8 = 8;
    sbit  CHCPTR8_bit at DCH0CPTR.B8;
    const register unsigned short int CHCPTR7 = 7;
    sbit  CHCPTR7_bit at DCH0CPTR.B7;
    const register unsigned short int CHCPTR6 = 6;
    sbit  CHCPTR6_bit at DCH0CPTR.B6;
    const register unsigned short int CHCPTR5 = 5;
    sbit  CHCPTR5_bit at DCH0CPTR.B5;
    const register unsigned short int CHCPTR4 = 4;
    sbit  CHCPTR4_bit at DCH0CPTR.B4;
    const register unsigned short int CHCPTR3 = 3;
    sbit  CHCPTR3_bit at DCH0CPTR.B3;
    const register unsigned short int CHCPTR2 = 2;
    sbit  CHCPTR2_bit at DCH0CPTR.B2;
    const register unsigned short int CHCPTR1 = 1;
    sbit  CHCPTR1_bit at DCH0CPTR.B1;
    const register unsigned short int CHCPTR0 = 0;
    sbit  CHCPTR0_bit at DCH0CPTR.B0;

sfr atomic unsigned long   volatile DCH0DAT          absolute 0xBF883110;
sfr unsigned long   volatile DCH0DATCLR       absolute 0xBF883114;
sfr unsigned long   volatile DCH0DATSET       absolute 0xBF883118;
sfr unsigned long   volatile DCH0DATINV       absolute 0xBF88311C;
    // DCH0DAT bits
    const register unsigned short int DCHPDAT7 = 7;
    sbit  DCHPDAT7_bit at DCH0DAT.B7;
    const register unsigned short int DCHPDAT6 = 6;
    sbit  DCHPDAT6_bit at DCH0DAT.B6;
    const register unsigned short int DCHPDAT5 = 5;
    sbit  DCHPDAT5_bit at DCH0DAT.B5;
    const register unsigned short int DCHPDAT4 = 4;
    sbit  DCHPDAT4_bit at DCH0DAT.B4;
    const register unsigned short int DCHPDAT3 = 3;
    sbit  DCHPDAT3_bit at DCH0DAT.B3;
    const register unsigned short int DCHPDAT2 = 2;
    sbit  DCHPDAT2_bit at DCH0DAT.B2;
    const register unsigned short int DCHPDAT1 = 1;
    sbit  DCHPDAT1_bit at DCH0DAT.B1;
    const register unsigned short int DCHPDAT0 = 0;
    sbit  DCHPDAT0_bit at DCH0DAT.B0;

sfr atomic unsigned long   volatile DCH1CON          absolute 0xBF883120;
sfr unsigned long   volatile DCH1CONCLR       absolute 0xBF883124;
sfr unsigned long   volatile DCH1CONSET       absolute 0xBF883128;
sfr unsigned long   volatile DCH1CONINV       absolute 0xBF88312C;
    // DCH1CON bits
    sbit  CHBUSY_DCH1CON_bit at DCH1CON.B15;
    sbit  CHCHNS_DCH1CON_bit at DCH1CON.B8;
    sbit  CHEN_DCH1CON_bit at DCH1CON.B7;
    sbit  CHAED_DCH1CON_bit at DCH1CON.B6;
    sbit  CHCHN_DCH1CON_bit at DCH1CON.B5;
    sbit  CHAEN_DCH1CON_bit at DCH1CON.B4;
    sbit  CHEDET_DCH1CON_bit at DCH1CON.B2;
    sbit  CHPRI1_DCH1CON_bit at DCH1CON.B1;
    sbit  CHPRI0_DCH1CON_bit at DCH1CON.B0;

sfr atomic unsigned long   volatile DCH1ECON         absolute 0xBF883130;
sfr unsigned long   volatile DCH1ECONCLR      absolute 0xBF883134;
sfr unsigned long   volatile DCH1ECONSET      absolute 0xBF883138;
sfr unsigned long   volatile DCH1ECONINV      absolute 0xBF88313C;
    // DCH1ECON bits
    sbit  CHAIRQ7_DCH1ECON_bit at DCH1ECON.B23;
    sbit  CHAIRQ6_DCH1ECON_bit at DCH1ECON.B22;
    sbit  CHAIRQ5_DCH1ECON_bit at DCH1ECON.B21;
    sbit  CHAIRQ4_DCH1ECON_bit at DCH1ECON.B20;
    sbit  CHAIRQ3_DCH1ECON_bit at DCH1ECON.B19;
    sbit  CHAIRQ2_DCH1ECON_bit at DCH1ECON.B18;
    sbit  CHAIRQ1_DCH1ECON_bit at DCH1ECON.B17;
    sbit  CHAIRQ0_DCH1ECON_bit at DCH1ECON.B16;
    sbit  CHSIRQ7_DCH1ECON_bit at DCH1ECON.B15;
    sbit  CHSIRQ6_DCH1ECON_bit at DCH1ECON.B14;
    sbit  CHSIRQ5_DCH1ECON_bit at DCH1ECON.B13;
    sbit  CHSIRQ4_DCH1ECON_bit at DCH1ECON.B12;
    sbit  CHSIRQ3_DCH1ECON_bit at DCH1ECON.B11;
    sbit  CHSIRQ2_DCH1ECON_bit at DCH1ECON.B10;
    sbit  CHSIRQ1_DCH1ECON_bit at DCH1ECON.B9;
    sbit  CHSIRQ0_DCH1ECON_bit at DCH1ECON.B8;
    sbit  CFORCE_DCH1ECON_bit at DCH1ECON.B7;
    sbit  CABORT_DCH1ECON_bit at DCH1ECON.B6;
    sbit  PATEN_DCH1ECON_bit at DCH1ECON.B5;
    sbit  SIRQEN_DCH1ECON_bit at DCH1ECON.B4;
    sbit  AIRQEN_DCH1ECON_bit at DCH1ECON.B3;

sfr atomic unsigned long   volatile DCH1INT          absolute 0xBF883140;
sfr unsigned long   volatile DCH1INTCLR       absolute 0xBF883144;
sfr unsigned long   volatile DCH1INTSET       absolute 0xBF883148;
sfr unsigned long   volatile DCH1INTINV       absolute 0xBF88314C;
    // DCH1INT bits
    sbit  CHSDIE_DCH1INT_bit at DCH1INT.B23;
    sbit  CHSHIE_DCH1INT_bit at DCH1INT.B22;
    sbit  CHDDIE_DCH1INT_bit at DCH1INT.B21;
    sbit  CHDHIE_DCH1INT_bit at DCH1INT.B20;
    sbit  CHBCIE_DCH1INT_bit at DCH1INT.B19;
    sbit  CHCCIE_DCH1INT_bit at DCH1INT.B18;
    sbit  CHTAIE_DCH1INT_bit at DCH1INT.B17;
    sbit  CHERIE_DCH1INT_bit at DCH1INT.B16;
    sbit  CHSDIF_DCH1INT_bit at DCH1INT.B7;
    sbit  CHSHIF_DCH1INT_bit at DCH1INT.B6;
    sbit  CHDDIF_DCH1INT_bit at DCH1INT.B5;
    sbit  CHDHIF_DCH1INT_bit at DCH1INT.B4;
    sbit  CHBCIF_DCH1INT_bit at DCH1INT.B3;
    sbit  CHCCIF_DCH1INT_bit at DCH1INT.B2;
    sbit  CHTAIF_DCH1INT_bit at DCH1INT.B1;
    sbit  CHERIF_DCH1INT_bit at DCH1INT.B0;

sfr atomic unsigned long   volatile DCH1SSA          absolute 0xBF883150;
sfr unsigned long   volatile DCH1SSACLR       absolute 0xBF883154;
sfr unsigned long   volatile DCH1SSASET       absolute 0xBF883158;
sfr unsigned long   volatile DCH1SSAINV       absolute 0xBF88315C;
    // DCH1SSA bits
    const register unsigned short int DCH1SSA31 = 31;
    sbit  DCH1SSA31_bit at DCH1SSA.B31;
    const register unsigned short int DCH1SSA30 = 30;
    sbit  DCH1SSA30_bit at DCH1SSA.B30;
    const register unsigned short int DCH1SSA29 = 29;
    sbit  DCH1SSA29_bit at DCH1SSA.B29;
    const register unsigned short int DCH1SSA28 = 28;
    sbit  DCH1SSA28_bit at DCH1SSA.B28;
    const register unsigned short int DCH1SSA27 = 27;
    sbit  DCH1SSA27_bit at DCH1SSA.B27;
    const register unsigned short int DCH1SSA26 = 26;
    sbit  DCH1SSA26_bit at DCH1SSA.B26;
    const register unsigned short int DCH1SSA25 = 25;
    sbit  DCH1SSA25_bit at DCH1SSA.B25;
    const register unsigned short int DCH1SSA24 = 24;
    sbit  DCH1SSA24_bit at DCH1SSA.B24;
    const register unsigned short int DCH1SSA23 = 23;
    sbit  DCH1SSA23_bit at DCH1SSA.B23;
    const register unsigned short int DCH1SSA22 = 22;
    sbit  DCH1SSA22_bit at DCH1SSA.B22;
    const register unsigned short int DCH1SSA21 = 21;
    sbit  DCH1SSA21_bit at DCH1SSA.B21;
    const register unsigned short int DCH1SSA20 = 20;
    sbit  DCH1SSA20_bit at DCH1SSA.B20;
    const register unsigned short int DCH1SSA19 = 19;
    sbit  DCH1SSA19_bit at DCH1SSA.B19;
    const register unsigned short int DCH1SSA18 = 18;
    sbit  DCH1SSA18_bit at DCH1SSA.B18;
    const register unsigned short int DCH1SSA17 = 17;
    sbit  DCH1SSA17_bit at DCH1SSA.B17;
    const register unsigned short int DCH1SSA16 = 16;
    sbit  DCH1SSA16_bit at DCH1SSA.B16;
    const register unsigned short int DCH1SSA15 = 15;
    sbit  DCH1SSA15_bit at DCH1SSA.B15;
    const register unsigned short int DCH1SSA14 = 14;
    sbit  DCH1SSA14_bit at DCH1SSA.B14;
    const register unsigned short int DCH1SSA13 = 13;
    sbit  DCH1SSA13_bit at DCH1SSA.B13;
    const register unsigned short int DCH1SSA12 = 12;
    sbit  DCH1SSA12_bit at DCH1SSA.B12;
    const register unsigned short int DCH1SSA11 = 11;
    sbit  DCH1SSA11_bit at DCH1SSA.B11;
    const register unsigned short int DCH1SSA10 = 10;
    sbit  DCH1SSA10_bit at DCH1SSA.B10;
    const register unsigned short int DCH1SSA9 = 9;
    sbit  DCH1SSA9_bit at DCH1SSA.B9;
    const register unsigned short int DCH1SSA8 = 8;
    sbit  DCH1SSA8_bit at DCH1SSA.B8;
    const register unsigned short int DCH1SSA7 = 7;
    sbit  DCH1SSA7_bit at DCH1SSA.B7;
    const register unsigned short int DCH1SSA6 = 6;
    sbit  DCH1SSA6_bit at DCH1SSA.B6;
    const register unsigned short int DCH1SSA5 = 5;
    sbit  DCH1SSA5_bit at DCH1SSA.B5;
    const register unsigned short int DCH1SSA4 = 4;
    sbit  DCH1SSA4_bit at DCH1SSA.B4;
    const register unsigned short int DCH1SSA3 = 3;
    sbit  DCH1SSA3_bit at DCH1SSA.B3;
    const register unsigned short int DCH1SSA2 = 2;
    sbit  DCH1SSA2_bit at DCH1SSA.B2;
    const register unsigned short int DCH1SSA1 = 1;
    sbit  DCH1SSA1_bit at DCH1SSA.B1;
    const register unsigned short int DCH1SSA0 = 0;
    sbit  DCH1SSA0_bit at DCH1SSA.B0;

sfr atomic unsigned long   volatile DCH1DSA          absolute 0xBF883160;
sfr unsigned long   volatile DCH1DSACLR       absolute 0xBF883164;
sfr unsigned long   volatile DCH1DSASET       absolute 0xBF883168;
sfr unsigned long   volatile DCH1DSAINV       absolute 0xBF88316C;
    // DCH1DSA bits
    const register unsigned short int DCH1DSA31 = 31;
    sbit  DCH1DSA31_bit at DCH1DSA.B31;
    const register unsigned short int DCH1DSA30 = 30;
    sbit  DCH1DSA30_bit at DCH1DSA.B30;
    const register unsigned short int DCH1DSA29 = 29;
    sbit  DCH1DSA29_bit at DCH1DSA.B29;
    const register unsigned short int DCH1DSA28 = 28;
    sbit  DCH1DSA28_bit at DCH1DSA.B28;
    const register unsigned short int DCH1DSA27 = 27;
    sbit  DCH1DSA27_bit at DCH1DSA.B27;
    const register unsigned short int DCH1DSA26 = 26;
    sbit  DCH1DSA26_bit at DCH1DSA.B26;
    const register unsigned short int DCH1DSA25 = 25;
    sbit  DCH1DSA25_bit at DCH1DSA.B25;
    const register unsigned short int DCH1DSA24 = 24;
    sbit  DCH1DSA24_bit at DCH1DSA.B24;
    const register unsigned short int DCH1DSA23 = 23;
    sbit  DCH1DSA23_bit at DCH1DSA.B23;
    const register unsigned short int DCH1DSA22 = 22;
    sbit  DCH1DSA22_bit at DCH1DSA.B22;
    const register unsigned short int DCH1DSA21 = 21;
    sbit  DCH1DSA21_bit at DCH1DSA.B21;
    const register unsigned short int DCH1DSA20 = 20;
    sbit  DCH1DSA20_bit at DCH1DSA.B20;
    const register unsigned short int DCH1DSA19 = 19;
    sbit  DCH1DSA19_bit at DCH1DSA.B19;
    const register unsigned short int DCH1DSA18 = 18;
    sbit  DCH1DSA18_bit at DCH1DSA.B18;
    const register unsigned short int DCH1DSA17 = 17;
    sbit  DCH1DSA17_bit at DCH1DSA.B17;
    const register unsigned short int DCH1DSA16 = 16;
    sbit  DCH1DSA16_bit at DCH1DSA.B16;
    const register unsigned short int DCH1DSA15 = 15;
    sbit  DCH1DSA15_bit at DCH1DSA.B15;
    const register unsigned short int DCH1DSA14 = 14;
    sbit  DCH1DSA14_bit at DCH1DSA.B14;
    const register unsigned short int DCH1DSA13 = 13;
    sbit  DCH1DSA13_bit at DCH1DSA.B13;
    const register unsigned short int DCH1DSA12 = 12;
    sbit  DCH1DSA12_bit at DCH1DSA.B12;
    const register unsigned short int DCH1DSA11 = 11;
    sbit  DCH1DSA11_bit at DCH1DSA.B11;
    const register unsigned short int DCH1DSA10 = 10;
    sbit  DCH1DSA10_bit at DCH1DSA.B10;
    const register unsigned short int DCH1DSA9 = 9;
    sbit  DCH1DSA9_bit at DCH1DSA.B9;
    const register unsigned short int DCH1DSA8 = 8;
    sbit  DCH1DSA8_bit at DCH1DSA.B8;
    const register unsigned short int DCH1DSA7 = 7;
    sbit  DCH1DSA7_bit at DCH1DSA.B7;
    const register unsigned short int DCH1DSA6 = 6;
    sbit  DCH1DSA6_bit at DCH1DSA.B6;
    const register unsigned short int DCH1DSA5 = 5;
    sbit  DCH1DSA5_bit at DCH1DSA.B5;
    const register unsigned short int DCH1DSA4 = 4;
    sbit  DCH1DSA4_bit at DCH1DSA.B4;
    const register unsigned short int DCH1DSA3 = 3;
    sbit  DCH1DSA3_bit at DCH1DSA.B3;
    const register unsigned short int DCH1DSA2 = 2;
    sbit  DCH1DSA2_bit at DCH1DSA.B2;
    const register unsigned short int DCH1DSA1 = 1;
    sbit  DCH1DSA1_bit at DCH1DSA.B1;
    const register unsigned short int DCH1DSA0 = 0;
    sbit  DCH1DSA0_bit at DCH1DSA.B0;

sfr atomic unsigned long   volatile DCH1SSIZ         absolute 0xBF883170;
sfr unsigned long   volatile DCH1SSIZCLR      absolute 0xBF883174;
sfr unsigned long   volatile DCH1SSIZSET      absolute 0xBF883178;
sfr unsigned long   volatile DCH1SSIZINV      absolute 0xBF88317C;
    // DCH1SSIZ bits
    sbit  CHSSIZ15_DCH1SSIZ_bit at DCH1SSIZ.B15;
    sbit  CHSSIZ14_DCH1SSIZ_bit at DCH1SSIZ.B14;
    sbit  CHSSIZ13_DCH1SSIZ_bit at DCH1SSIZ.B13;
    sbit  CHSSIZ12_DCH1SSIZ_bit at DCH1SSIZ.B12;
    sbit  CHSSIZ11_DCH1SSIZ_bit at DCH1SSIZ.B11;
    sbit  CHSSIZ10_DCH1SSIZ_bit at DCH1SSIZ.B10;
    sbit  CHSSIZ9_DCH1SSIZ_bit at DCH1SSIZ.B9;
    sbit  CHSSIZ8_DCH1SSIZ_bit at DCH1SSIZ.B8;
    sbit  CHSSIZ7_DCH1SSIZ_bit at DCH1SSIZ.B7;
    sbit  CHSSIZ6_DCH1SSIZ_bit at DCH1SSIZ.B6;
    sbit  CHSSIZ5_DCH1SSIZ_bit at DCH1SSIZ.B5;
    sbit  CHSSIZ4_DCH1SSIZ_bit at DCH1SSIZ.B4;
    sbit  CHSSIZ3_DCH1SSIZ_bit at DCH1SSIZ.B3;
    sbit  CHSSIZ2_DCH1SSIZ_bit at DCH1SSIZ.B2;
    sbit  CHSSIZ1_DCH1SSIZ_bit at DCH1SSIZ.B1;
    sbit  CHSSIZ0_DCH1SSIZ_bit at DCH1SSIZ.B0;

sfr atomic unsigned long   volatile DCH1DSIZ         absolute 0xBF883180;
sfr unsigned long   volatile DCH1DSIZCLR      absolute 0xBF883184;
sfr unsigned long   volatile DCH1DSIZSET      absolute 0xBF883188;
sfr unsigned long   volatile DCH1DSIZINV      absolute 0xBF88318C;
    // DCH1DSIZ bits
    sbit  CHDSIZ15_DCH1DSIZ_bit at DCH1DSIZ.B15;
    sbit  CHDSIZ14_DCH1DSIZ_bit at DCH1DSIZ.B14;
    sbit  CHDSIZ13_DCH1DSIZ_bit at DCH1DSIZ.B13;
    sbit  CHDSIZ12_DCH1DSIZ_bit at DCH1DSIZ.B12;
    sbit  CHDSIZ11_DCH1DSIZ_bit at DCH1DSIZ.B11;
    sbit  CHDSIZ10_DCH1DSIZ_bit at DCH1DSIZ.B10;
    sbit  CHDSIZ9_DCH1DSIZ_bit at DCH1DSIZ.B9;
    sbit  CHDSIZ8_DCH1DSIZ_bit at DCH1DSIZ.B8;
    sbit  CHDSIZ7_DCH1DSIZ_bit at DCH1DSIZ.B7;
    sbit  CHDSIZ6_DCH1DSIZ_bit at DCH1DSIZ.B6;
    sbit  CHDSIZ5_DCH1DSIZ_bit at DCH1DSIZ.B5;
    sbit  CHDSIZ4_DCH1DSIZ_bit at DCH1DSIZ.B4;
    sbit  CHDSIZ3_DCH1DSIZ_bit at DCH1DSIZ.B3;
    sbit  CHDSIZ2_DCH1DSIZ_bit at DCH1DSIZ.B2;
    sbit  CHDSIZ1_DCH1DSIZ_bit at DCH1DSIZ.B1;
    sbit  CHDSIZ0_DCH1DSIZ_bit at DCH1DSIZ.B0;

sfr atomic unsigned long   volatile DCH1SPTR         absolute 0xBF883190;
sfr unsigned long   volatile DCH1SPTRCLR      absolute 0xBF883194;
sfr unsigned long   volatile DCH1SPTRSET      absolute 0xBF883198;
sfr unsigned long   volatile DCH1SPTRINV      absolute 0xBF88319C;
    // DCH1SPTR bits
    sbit  CHSPTR15_DCH1SPTR_bit at DCH1SPTR.B15;
    sbit  CHSPTR14_DCH1SPTR_bit at DCH1SPTR.B14;
    sbit  CHSPTR13_DCH1SPTR_bit at DCH1SPTR.B13;
    sbit  CHSPTR12_DCH1SPTR_bit at DCH1SPTR.B12;
    sbit  CHSPTR11_DCH1SPTR_bit at DCH1SPTR.B11;
    sbit  CHSPTR10_DCH1SPTR_bit at DCH1SPTR.B10;
    sbit  CHSPTR9_DCH1SPTR_bit at DCH1SPTR.B9;
    sbit  CHSPTR8_DCH1SPTR_bit at DCH1SPTR.B8;
    sbit  CHSPTR7_DCH1SPTR_bit at DCH1SPTR.B7;
    sbit  CHSPTR6_DCH1SPTR_bit at DCH1SPTR.B6;
    sbit  CHSPTR5_DCH1SPTR_bit at DCH1SPTR.B5;
    sbit  CHSPTR4_DCH1SPTR_bit at DCH1SPTR.B4;
    sbit  CHSPTR3_DCH1SPTR_bit at DCH1SPTR.B3;
    sbit  CHSPTR2_DCH1SPTR_bit at DCH1SPTR.B2;
    sbit  CHSPTR1_DCH1SPTR_bit at DCH1SPTR.B1;
    sbit  CHSPTR0_DCH1SPTR_bit at DCH1SPTR.B0;

sfr atomic unsigned long   volatile DCH1DPTR         absolute 0xBF8831A0;
sfr unsigned long   volatile DCH1DPTRCLR      absolute 0xBF8831A4;
sfr unsigned long   volatile DCH1DPTRSET      absolute 0xBF8831A8;
sfr unsigned long   volatile DCH1DPTRINV      absolute 0xBF8831AC;
    // DCH1DPTR bits
    sbit  CHDPTR15_DCH1DPTR_bit at DCH1DPTR.B15;
    sbit  CHDPTR14_DCH1DPTR_bit at DCH1DPTR.B14;
    sbit  CHDPTR13_DCH1DPTR_bit at DCH1DPTR.B13;
    sbit  CHDPTR12_DCH1DPTR_bit at DCH1DPTR.B12;
    sbit  CHDPTR11_DCH1DPTR_bit at DCH1DPTR.B11;
    sbit  CHDPTR10_DCH1DPTR_bit at DCH1DPTR.B10;
    sbit  CHDPTR9_DCH1DPTR_bit at DCH1DPTR.B9;
    sbit  CHDPTR8_DCH1DPTR_bit at DCH1DPTR.B8;
    sbit  CHDPTR7_DCH1DPTR_bit at DCH1DPTR.B7;
    sbit  CHDPTR6_DCH1DPTR_bit at DCH1DPTR.B6;
    sbit  CHDPTR5_DCH1DPTR_bit at DCH1DPTR.B5;
    sbit  CHDPTR4_DCH1DPTR_bit at DCH1DPTR.B4;
    sbit  CHDPTR3_DCH1DPTR_bit at DCH1DPTR.B3;
    sbit  CHDPTR2_DCH1DPTR_bit at DCH1DPTR.B2;
    sbit  CHDPTR1_DCH1DPTR_bit at DCH1DPTR.B1;
    sbit  CHDPTR0_DCH1DPTR_bit at DCH1DPTR.B0;

sfr atomic unsigned long   volatile DCH1CSIZ         absolute 0xBF8831B0;
sfr unsigned long   volatile DCH1CSIZCLR      absolute 0xBF8831B4;
sfr unsigned long   volatile DCH1CSIZSET      absolute 0xBF8831B8;
sfr unsigned long   volatile DCH1CSIZINV      absolute 0xBF8831BC;
    // DCH1CSIZ bits
    sbit  CHCSIZ15_DCH1CSIZ_bit at DCH1CSIZ.B15;
    sbit  CHCSIZ14_DCH1CSIZ_bit at DCH1CSIZ.B14;
    sbit  CHCSIZ13_DCH1CSIZ_bit at DCH1CSIZ.B13;
    sbit  CHCSIZ12_DCH1CSIZ_bit at DCH1CSIZ.B12;
    sbit  CHCSIZ11_DCH1CSIZ_bit at DCH1CSIZ.B11;
    sbit  CHCSIZ10_DCH1CSIZ_bit at DCH1CSIZ.B10;
    sbit  CHCSIZ9_DCH1CSIZ_bit at DCH1CSIZ.B9;
    sbit  CHCSIZ8_DCH1CSIZ_bit at DCH1CSIZ.B8;
    sbit  CHCSIZ7_DCH1CSIZ_bit at DCH1CSIZ.B7;
    sbit  CHCSIZ6_DCH1CSIZ_bit at DCH1CSIZ.B6;
    sbit  CHCSIZ5_DCH1CSIZ_bit at DCH1CSIZ.B5;
    sbit  CHCSIZ4_DCH1CSIZ_bit at DCH1CSIZ.B4;
    sbit  CHCSIZ3_DCH1CSIZ_bit at DCH1CSIZ.B3;
    sbit  CHCSIZ2_DCH1CSIZ_bit at DCH1CSIZ.B2;
    sbit  CHCSIZ1_DCH1CSIZ_bit at DCH1CSIZ.B1;
    sbit  CHCSIZ0_DCH1CSIZ_bit at DCH1CSIZ.B0;

sfr atomic unsigned long   volatile DCH1CPTR         absolute 0xBF8831C0;
sfr unsigned long   volatile DCH1CPTRCLR      absolute 0xBF8831C4;
sfr unsigned long   volatile DCH1CPTRSET      absolute 0xBF8831C8;
sfr unsigned long   volatile DCH1CPTRINV      absolute 0xBF8831CC;
    // DCH1CPTR bits
    sbit  CHCPTR15_DCH1CPTR_bit at DCH1CPTR.B15;
    sbit  CHCPTR14_DCH1CPTR_bit at DCH1CPTR.B14;
    sbit  CHCPTR13_DCH1CPTR_bit at DCH1CPTR.B13;
    sbit  CHCPTR12_DCH1CPTR_bit at DCH1CPTR.B12;
    sbit  CHCPTR11_DCH1CPTR_bit at DCH1CPTR.B11;
    sbit  CHCPTR10_DCH1CPTR_bit at DCH1CPTR.B10;
    sbit  CHCPTR9_DCH1CPTR_bit at DCH1CPTR.B9;
    sbit  CHCPTR8_DCH1CPTR_bit at DCH1CPTR.B8;
    sbit  CHCPTR7_DCH1CPTR_bit at DCH1CPTR.B7;
    sbit  CHCPTR6_DCH1CPTR_bit at DCH1CPTR.B6;
    sbit  CHCPTR5_DCH1CPTR_bit at DCH1CPTR.B5;
    sbit  CHCPTR4_DCH1CPTR_bit at DCH1CPTR.B4;
    sbit  CHCPTR3_DCH1CPTR_bit at DCH1CPTR.B3;
    sbit  CHCPTR2_DCH1CPTR_bit at DCH1CPTR.B2;
    sbit  CHCPTR1_DCH1CPTR_bit at DCH1CPTR.B1;
    sbit  CHCPTR0_DCH1CPTR_bit at DCH1CPTR.B0;

sfr atomic unsigned long   volatile DCH1DAT          absolute 0xBF8831D0;
sfr unsigned long   volatile DCH1DATCLR       absolute 0xBF8831D4;
sfr unsigned long   volatile DCH1DATSET       absolute 0xBF8831D8;
sfr unsigned long   volatile DCH1DATINV       absolute 0xBF8831DC;
    // DCH1DAT bits
    sbit  DCHPDAT7_DCH1DAT_bit at DCH1DAT.B7;
    sbit  DCHPDAT6_DCH1DAT_bit at DCH1DAT.B6;
    sbit  DCHPDAT5_DCH1DAT_bit at DCH1DAT.B5;
    sbit  DCHPDAT4_DCH1DAT_bit at DCH1DAT.B4;
    sbit  DCHPDAT3_DCH1DAT_bit at DCH1DAT.B3;
    sbit  DCHPDAT2_DCH1DAT_bit at DCH1DAT.B2;
    sbit  DCHPDAT1_DCH1DAT_bit at DCH1DAT.B1;
    sbit  DCHPDAT0_DCH1DAT_bit at DCH1DAT.B0;

sfr atomic unsigned long   volatile DCH2CON          absolute 0xBF8831E0;
sfr unsigned long   volatile DCH2CONCLR       absolute 0xBF8831E4;
sfr unsigned long   volatile DCH2CONSET       absolute 0xBF8831E8;
sfr unsigned long   volatile DCH2CONINV       absolute 0xBF8831EC;
    // DCH2CON bits
    sbit  CHBUSY_DCH2CON_bit at DCH2CON.B15;
    sbit  CHCHNS_DCH2CON_bit at DCH2CON.B8;
    sbit  CHEN_DCH2CON_bit at DCH2CON.B7;
    sbit  CHAED_DCH2CON_bit at DCH2CON.B6;
    sbit  CHCHN_DCH2CON_bit at DCH2CON.B5;
    sbit  CHAEN_DCH2CON_bit at DCH2CON.B4;
    sbit  CHEDET_DCH2CON_bit at DCH2CON.B2;
    sbit  CHPRI1_DCH2CON_bit at DCH2CON.B1;
    sbit  CHPRI0_DCH2CON_bit at DCH2CON.B0;

sfr atomic unsigned long   volatile DCH2ECON         absolute 0xBF8831F0;
sfr unsigned long   volatile DCH2ECONCLR      absolute 0xBF8831F4;
sfr unsigned long   volatile DCH2ECONSET      absolute 0xBF8831F8;
sfr unsigned long   volatile DCH2ECONINV      absolute 0xBF8831FC;
    // DCH2ECON bits
    sbit  CHAIRQ7_DCH2ECON_bit at DCH2ECON.B23;
    sbit  CHAIRQ6_DCH2ECON_bit at DCH2ECON.B22;
    sbit  CHAIRQ5_DCH2ECON_bit at DCH2ECON.B21;
    sbit  CHAIRQ4_DCH2ECON_bit at DCH2ECON.B20;
    sbit  CHAIRQ3_DCH2ECON_bit at DCH2ECON.B19;
    sbit  CHAIRQ2_DCH2ECON_bit at DCH2ECON.B18;
    sbit  CHAIRQ1_DCH2ECON_bit at DCH2ECON.B17;
    sbit  CHAIRQ0_DCH2ECON_bit at DCH2ECON.B16;
    sbit  CHSIRQ7_DCH2ECON_bit at DCH2ECON.B15;
    sbit  CHSIRQ6_DCH2ECON_bit at DCH2ECON.B14;
    sbit  CHSIRQ5_DCH2ECON_bit at DCH2ECON.B13;
    sbit  CHSIRQ4_DCH2ECON_bit at DCH2ECON.B12;
    sbit  CHSIRQ3_DCH2ECON_bit at DCH2ECON.B11;
    sbit  CHSIRQ2_DCH2ECON_bit at DCH2ECON.B10;
    sbit  CHSIRQ1_DCH2ECON_bit at DCH2ECON.B9;
    sbit  CHSIRQ0_DCH2ECON_bit at DCH2ECON.B8;
    sbit  CFORCE_DCH2ECON_bit at DCH2ECON.B7;
    sbit  CABORT_DCH2ECON_bit at DCH2ECON.B6;
    sbit  PATEN_DCH2ECON_bit at DCH2ECON.B5;
    sbit  SIRQEN_DCH2ECON_bit at DCH2ECON.B4;
    sbit  AIRQEN_DCH2ECON_bit at DCH2ECON.B3;

sfr atomic unsigned long   volatile DCH2INT          absolute 0xBF883200;
sfr unsigned long   volatile DCH2INTCLR       absolute 0xBF883204;
sfr unsigned long   volatile DCH2INTSET       absolute 0xBF883208;
sfr unsigned long   volatile DCH2INTINV       absolute 0xBF88320C;
    // DCH2INT bits
    sbit  CHSDIE_DCH2INT_bit at DCH2INT.B23;
    sbit  CHSHIE_DCH2INT_bit at DCH2INT.B22;
    sbit  CHDDIE_DCH2INT_bit at DCH2INT.B21;
    sbit  CHDHIE_DCH2INT_bit at DCH2INT.B20;
    sbit  CHBCIE_DCH2INT_bit at DCH2INT.B19;
    sbit  CHCCIE_DCH2INT_bit at DCH2INT.B18;
    sbit  CHTAIE_DCH2INT_bit at DCH2INT.B17;
    sbit  CHERIE_DCH2INT_bit at DCH2INT.B16;
    sbit  CHSDIF_DCH2INT_bit at DCH2INT.B7;
    sbit  CHSHIF_DCH2INT_bit at DCH2INT.B6;
    sbit  CHDDIF_DCH2INT_bit at DCH2INT.B5;
    sbit  CHDHIF_DCH2INT_bit at DCH2INT.B4;
    sbit  CHBCIF_DCH2INT_bit at DCH2INT.B3;
    sbit  CHCCIF_DCH2INT_bit at DCH2INT.B2;
    sbit  CHTAIF_DCH2INT_bit at DCH2INT.B1;
    sbit  CHERIF_DCH2INT_bit at DCH2INT.B0;

sfr atomic unsigned long   volatile DCH2SSA          absolute 0xBF883210;
sfr unsigned long   volatile DCH2SSACLR       absolute 0xBF883214;
sfr unsigned long   volatile DCH2SSASET       absolute 0xBF883218;
sfr unsigned long   volatile DCH2SSAINV       absolute 0xBF88321C;
    // DCH2SSA bits
    const register unsigned short int DCH2SSA31 = 31;
    sbit  DCH2SSA31_bit at DCH2SSA.B31;
    const register unsigned short int DCH2SSA30 = 30;
    sbit  DCH2SSA30_bit at DCH2SSA.B30;
    const register unsigned short int DCH2SSA29 = 29;
    sbit  DCH2SSA29_bit at DCH2SSA.B29;
    const register unsigned short int DCH2SSA28 = 28;
    sbit  DCH2SSA28_bit at DCH2SSA.B28;
    const register unsigned short int DCH2SSA27 = 27;
    sbit  DCH2SSA27_bit at DCH2SSA.B27;
    const register unsigned short int DCH2SSA26 = 26;
    sbit  DCH2SSA26_bit at DCH2SSA.B26;
    const register unsigned short int DCH2SSA25 = 25;
    sbit  DCH2SSA25_bit at DCH2SSA.B25;
    const register unsigned short int DCH2SSA24 = 24;
    sbit  DCH2SSA24_bit at DCH2SSA.B24;
    const register unsigned short int DCH2SSA23 = 23;
    sbit  DCH2SSA23_bit at DCH2SSA.B23;
    const register unsigned short int DCH2SSA22 = 22;
    sbit  DCH2SSA22_bit at DCH2SSA.B22;
    const register unsigned short int DCH2SSA21 = 21;
    sbit  DCH2SSA21_bit at DCH2SSA.B21;
    const register unsigned short int DCH2SSA20 = 20;
    sbit  DCH2SSA20_bit at DCH2SSA.B20;
    const register unsigned short int DCH2SSA19 = 19;
    sbit  DCH2SSA19_bit at DCH2SSA.B19;
    const register unsigned short int DCH2SSA18 = 18;
    sbit  DCH2SSA18_bit at DCH2SSA.B18;
    const register unsigned short int DCH2SSA17 = 17;
    sbit  DCH2SSA17_bit at DCH2SSA.B17;
    const register unsigned short int DCH2SSA16 = 16;
    sbit  DCH2SSA16_bit at DCH2SSA.B16;
    const register unsigned short int DCH2SSA15 = 15;
    sbit  DCH2SSA15_bit at DCH2SSA.B15;
    const register unsigned short int DCH2SSA14 = 14;
    sbit  DCH2SSA14_bit at DCH2SSA.B14;
    const register unsigned short int DCH2SSA13 = 13;
    sbit  DCH2SSA13_bit at DCH2SSA.B13;
    const register unsigned short int DCH2SSA12 = 12;
    sbit  DCH2SSA12_bit at DCH2SSA.B12;
    const register unsigned short int DCH2SSA11 = 11;
    sbit  DCH2SSA11_bit at DCH2SSA.B11;
    const register unsigned short int DCH2SSA10 = 10;
    sbit  DCH2SSA10_bit at DCH2SSA.B10;
    const register unsigned short int DCH2SSA9 = 9;
    sbit  DCH2SSA9_bit at DCH2SSA.B9;
    const register unsigned short int DCH2SSA8 = 8;
    sbit  DCH2SSA8_bit at DCH2SSA.B8;
    const register unsigned short int DCH2SSA7 = 7;
    sbit  DCH2SSA7_bit at DCH2SSA.B7;
    const register unsigned short int DCH2SSA6 = 6;
    sbit  DCH2SSA6_bit at DCH2SSA.B6;
    const register unsigned short int DCH2SSA5 = 5;
    sbit  DCH2SSA5_bit at DCH2SSA.B5;
    const register unsigned short int DCH2SSA4 = 4;
    sbit  DCH2SSA4_bit at DCH2SSA.B4;
    const register unsigned short int DCH2SSA3 = 3;
    sbit  DCH2SSA3_bit at DCH2SSA.B3;
    const register unsigned short int DCH2SSA2 = 2;
    sbit  DCH2SSA2_bit at DCH2SSA.B2;
    const register unsigned short int DCH2SSA1 = 1;
    sbit  DCH2SSA1_bit at DCH2SSA.B1;
    const register unsigned short int DCH2SSA0 = 0;
    sbit  DCH2SSA0_bit at DCH2SSA.B0;

sfr atomic unsigned long   volatile DCH2DSA          absolute 0xBF883220;
sfr unsigned long   volatile DCH2DSACLR       absolute 0xBF883224;
sfr unsigned long   volatile DCH2DSASET       absolute 0xBF883228;
sfr unsigned long   volatile DCH2DSAINV       absolute 0xBF88322C;
    // DCH2DSA bits
    const register unsigned short int DCH2DSA31 = 31;
    sbit  DCH2DSA31_bit at DCH2DSA.B31;
    const register unsigned short int DCH2DSA30 = 30;
    sbit  DCH2DSA30_bit at DCH2DSA.B30;
    const register unsigned short int DCH2DSA29 = 29;
    sbit  DCH2DSA29_bit at DCH2DSA.B29;
    const register unsigned short int DCH2DSA28 = 28;
    sbit  DCH2DSA28_bit at DCH2DSA.B28;
    const register unsigned short int DCH2DSA27 = 27;
    sbit  DCH2DSA27_bit at DCH2DSA.B27;
    const register unsigned short int DCH2DSA26 = 26;
    sbit  DCH2DSA26_bit at DCH2DSA.B26;
    const register unsigned short int DCH2DSA25 = 25;
    sbit  DCH2DSA25_bit at DCH2DSA.B25;
    const register unsigned short int DCH2DSA24 = 24;
    sbit  DCH2DSA24_bit at DCH2DSA.B24;
    const register unsigned short int DCH2DSA23 = 23;
    sbit  DCH2DSA23_bit at DCH2DSA.B23;
    const register unsigned short int DCH2DSA22 = 22;
    sbit  DCH2DSA22_bit at DCH2DSA.B22;
    const register unsigned short int DCH2DSA21 = 21;
    sbit  DCH2DSA21_bit at DCH2DSA.B21;
    const register unsigned short int DCH2DSA20 = 20;
    sbit  DCH2DSA20_bit at DCH2DSA.B20;
    const register unsigned short int DCH2DSA19 = 19;
    sbit  DCH2DSA19_bit at DCH2DSA.B19;
    const register unsigned short int DCH2DSA18 = 18;
    sbit  DCH2DSA18_bit at DCH2DSA.B18;
    const register unsigned short int DCH2DSA17 = 17;
    sbit  DCH2DSA17_bit at DCH2DSA.B17;
    const register unsigned short int DCH2DSA16 = 16;
    sbit  DCH2DSA16_bit at DCH2DSA.B16;
    const register unsigned short int DCH2DSA15 = 15;
    sbit  DCH2DSA15_bit at DCH2DSA.B15;
    const register unsigned short int DCH2DSA14 = 14;
    sbit  DCH2DSA14_bit at DCH2DSA.B14;
    const register unsigned short int DCH2DSA13 = 13;
    sbit  DCH2DSA13_bit at DCH2DSA.B13;
    const register unsigned short int DCH2DSA12 = 12;
    sbit  DCH2DSA12_bit at DCH2DSA.B12;
    const register unsigned short int DCH2DSA11 = 11;
    sbit  DCH2DSA11_bit at DCH2DSA.B11;
    const register unsigned short int DCH2DSA10 = 10;
    sbit  DCH2DSA10_bit at DCH2DSA.B10;
    const register unsigned short int DCH2DSA9 = 9;
    sbit  DCH2DSA9_bit at DCH2DSA.B9;
    const register unsigned short int DCH2DSA8 = 8;
    sbit  DCH2DSA8_bit at DCH2DSA.B8;
    const register unsigned short int DCH2DSA7 = 7;
    sbit  DCH2DSA7_bit at DCH2DSA.B7;
    const register unsigned short int DCH2DSA6 = 6;
    sbit  DCH2DSA6_bit at DCH2DSA.B6;
    const register unsigned short int DCH2DSA5 = 5;
    sbit  DCH2DSA5_bit at DCH2DSA.B5;
    const register unsigned short int DCH2DSA4 = 4;
    sbit  DCH2DSA4_bit at DCH2DSA.B4;
    const register unsigned short int DCH2DSA3 = 3;
    sbit  DCH2DSA3_bit at DCH2DSA.B3;
    const register unsigned short int DCH2DSA2 = 2;
    sbit  DCH2DSA2_bit at DCH2DSA.B2;
    const register unsigned short int DCH2DSA1 = 1;
    sbit  DCH2DSA1_bit at DCH2DSA.B1;
    const register unsigned short int DCH2DSA0 = 0;
    sbit  DCH2DSA0_bit at DCH2DSA.B0;

sfr atomic unsigned long   volatile DCH2SSIZ         absolute 0xBF883230;
sfr unsigned long   volatile DCH2SSIZCLR      absolute 0xBF883234;
sfr unsigned long   volatile DCH2SSIZSET      absolute 0xBF883238;
sfr unsigned long   volatile DCH2SSIZINV      absolute 0xBF88323C;
    // DCH2SSIZ bits
    sbit  CHSSIZ15_DCH2SSIZ_bit at DCH2SSIZ.B15;
    sbit  CHSSIZ14_DCH2SSIZ_bit at DCH2SSIZ.B14;
    sbit  CHSSIZ13_DCH2SSIZ_bit at DCH2SSIZ.B13;
    sbit  CHSSIZ12_DCH2SSIZ_bit at DCH2SSIZ.B12;
    sbit  CHSSIZ11_DCH2SSIZ_bit at DCH2SSIZ.B11;
    sbit  CHSSIZ10_DCH2SSIZ_bit at DCH2SSIZ.B10;
    sbit  CHSSIZ9_DCH2SSIZ_bit at DCH2SSIZ.B9;
    sbit  CHSSIZ8_DCH2SSIZ_bit at DCH2SSIZ.B8;
    sbit  CHSSIZ7_DCH2SSIZ_bit at DCH2SSIZ.B7;
    sbit  CHSSIZ6_DCH2SSIZ_bit at DCH2SSIZ.B6;
    sbit  CHSSIZ5_DCH2SSIZ_bit at DCH2SSIZ.B5;
    sbit  CHSSIZ4_DCH2SSIZ_bit at DCH2SSIZ.B4;
    sbit  CHSSIZ3_DCH2SSIZ_bit at DCH2SSIZ.B3;
    sbit  CHSSIZ2_DCH2SSIZ_bit at DCH2SSIZ.B2;
    sbit  CHSSIZ1_DCH2SSIZ_bit at DCH2SSIZ.B1;
    sbit  CHSSIZ0_DCH2SSIZ_bit at DCH2SSIZ.B0;

sfr atomic unsigned long   volatile DCH2DSIZ         absolute 0xBF883240;
sfr unsigned long   volatile DCH2DSIZCLR      absolute 0xBF883244;
sfr unsigned long   volatile DCH2DSIZSET      absolute 0xBF883248;
sfr unsigned long   volatile DCH2DSIZINV      absolute 0xBF88324C;
    // DCH2DSIZ bits
    sbit  CHDSIZ15_DCH2DSIZ_bit at DCH2DSIZ.B15;
    sbit  CHDSIZ14_DCH2DSIZ_bit at DCH2DSIZ.B14;
    sbit  CHDSIZ13_DCH2DSIZ_bit at DCH2DSIZ.B13;
    sbit  CHDSIZ12_DCH2DSIZ_bit at DCH2DSIZ.B12;
    sbit  CHDSIZ11_DCH2DSIZ_bit at DCH2DSIZ.B11;
    sbit  CHDSIZ10_DCH2DSIZ_bit at DCH2DSIZ.B10;
    sbit  CHDSIZ9_DCH2DSIZ_bit at DCH2DSIZ.B9;
    sbit  CHDSIZ8_DCH2DSIZ_bit at DCH2DSIZ.B8;
    sbit  CHDSIZ7_DCH2DSIZ_bit at DCH2DSIZ.B7;
    sbit  CHDSIZ6_DCH2DSIZ_bit at DCH2DSIZ.B6;
    sbit  CHDSIZ5_DCH2DSIZ_bit at DCH2DSIZ.B5;
    sbit  CHDSIZ4_DCH2DSIZ_bit at DCH2DSIZ.B4;
    sbit  CHDSIZ3_DCH2DSIZ_bit at DCH2DSIZ.B3;
    sbit  CHDSIZ2_DCH2DSIZ_bit at DCH2DSIZ.B2;
    sbit  CHDSIZ1_DCH2DSIZ_bit at DCH2DSIZ.B1;
    sbit  CHDSIZ0_DCH2DSIZ_bit at DCH2DSIZ.B0;

sfr atomic unsigned long   volatile DCH2SPTR         absolute 0xBF883250;
sfr unsigned long   volatile DCH2SPTRCLR      absolute 0xBF883254;
sfr unsigned long   volatile DCH2SPTRSET      absolute 0xBF883258;
sfr unsigned long   volatile DCH2SPTRINV      absolute 0xBF88325C;
    // DCH2SPTR bits
    sbit  CHSPTR15_DCH2SPTR_bit at DCH2SPTR.B15;
    sbit  CHSPTR14_DCH2SPTR_bit at DCH2SPTR.B14;
    sbit  CHSPTR13_DCH2SPTR_bit at DCH2SPTR.B13;
    sbit  CHSPTR12_DCH2SPTR_bit at DCH2SPTR.B12;
    sbit  CHSPTR11_DCH2SPTR_bit at DCH2SPTR.B11;
    sbit  CHSPTR10_DCH2SPTR_bit at DCH2SPTR.B10;
    sbit  CHSPTR9_DCH2SPTR_bit at DCH2SPTR.B9;
    sbit  CHSPTR8_DCH2SPTR_bit at DCH2SPTR.B8;
    sbit  CHSPTR7_DCH2SPTR_bit at DCH2SPTR.B7;
    sbit  CHSPTR6_DCH2SPTR_bit at DCH2SPTR.B6;
    sbit  CHSPTR5_DCH2SPTR_bit at DCH2SPTR.B5;
    sbit  CHSPTR4_DCH2SPTR_bit at DCH2SPTR.B4;
    sbit  CHSPTR3_DCH2SPTR_bit at DCH2SPTR.B3;
    sbit  CHSPTR2_DCH2SPTR_bit at DCH2SPTR.B2;
    sbit  CHSPTR1_DCH2SPTR_bit at DCH2SPTR.B1;
    sbit  CHSPTR0_DCH2SPTR_bit at DCH2SPTR.B0;

sfr atomic unsigned long   volatile DCH2DPTR         absolute 0xBF883260;
sfr unsigned long   volatile DCH2DPTRCLR      absolute 0xBF883264;
sfr unsigned long   volatile DCH2DPTRSET      absolute 0xBF883268;
sfr unsigned long   volatile DCH2DPTRINV      absolute 0xBF88326C;
    // DCH2DPTR bits
    sbit  CHDPTR15_DCH2DPTR_bit at DCH2DPTR.B15;
    sbit  CHDPTR14_DCH2DPTR_bit at DCH2DPTR.B14;
    sbit  CHDPTR13_DCH2DPTR_bit at DCH2DPTR.B13;
    sbit  CHDPTR12_DCH2DPTR_bit at DCH2DPTR.B12;
    sbit  CHDPTR11_DCH2DPTR_bit at DCH2DPTR.B11;
    sbit  CHDPTR10_DCH2DPTR_bit at DCH2DPTR.B10;
    sbit  CHDPTR9_DCH2DPTR_bit at DCH2DPTR.B9;
    sbit  CHDPTR8_DCH2DPTR_bit at DCH2DPTR.B8;
    sbit  CHDPTR7_DCH2DPTR_bit at DCH2DPTR.B7;
    sbit  CHDPTR6_DCH2DPTR_bit at DCH2DPTR.B6;
    sbit  CHDPTR5_DCH2DPTR_bit at DCH2DPTR.B5;
    sbit  CHDPTR4_DCH2DPTR_bit at DCH2DPTR.B4;
    sbit  CHDPTR3_DCH2DPTR_bit at DCH2DPTR.B3;
    sbit  CHDPTR2_DCH2DPTR_bit at DCH2DPTR.B2;
    sbit  CHDPTR1_DCH2DPTR_bit at DCH2DPTR.B1;
    sbit  CHDPTR0_DCH2DPTR_bit at DCH2DPTR.B0;

sfr atomic unsigned long   volatile DCH2CSIZ         absolute 0xBF883270;
sfr unsigned long   volatile DCH2CSIZCLR      absolute 0xBF883274;
sfr unsigned long   volatile DCH2CSIZSET      absolute 0xBF883278;
sfr unsigned long   volatile DCH2CSIZINV      absolute 0xBF88327C;
    // DCH2CSIZ bits
    sbit  CHCSIZ15_DCH2CSIZ_bit at DCH2CSIZ.B15;
    sbit  CHCSIZ14_DCH2CSIZ_bit at DCH2CSIZ.B14;
    sbit  CHCSIZ13_DCH2CSIZ_bit at DCH2CSIZ.B13;
    sbit  CHCSIZ12_DCH2CSIZ_bit at DCH2CSIZ.B12;
    sbit  CHCSIZ11_DCH2CSIZ_bit at DCH2CSIZ.B11;
    sbit  CHCSIZ10_DCH2CSIZ_bit at DCH2CSIZ.B10;
    sbit  CHCSIZ9_DCH2CSIZ_bit at DCH2CSIZ.B9;
    sbit  CHCSIZ8_DCH2CSIZ_bit at DCH2CSIZ.B8;
    sbit  CHCSIZ7_DCH2CSIZ_bit at DCH2CSIZ.B7;
    sbit  CHCSIZ6_DCH2CSIZ_bit at DCH2CSIZ.B6;
    sbit  CHCSIZ5_DCH2CSIZ_bit at DCH2CSIZ.B5;
    sbit  CHCSIZ4_DCH2CSIZ_bit at DCH2CSIZ.B4;
    sbit  CHCSIZ3_DCH2CSIZ_bit at DCH2CSIZ.B3;
    sbit  CHCSIZ2_DCH2CSIZ_bit at DCH2CSIZ.B2;
    sbit  CHCSIZ1_DCH2CSIZ_bit at DCH2CSIZ.B1;
    sbit  CHCSIZ0_DCH2CSIZ_bit at DCH2CSIZ.B0;

sfr atomic unsigned long   volatile DCH2CPTR         absolute 0xBF883280;
sfr unsigned long   volatile DCH2CPTRCLR      absolute 0xBF883284;
sfr unsigned long   volatile DCH2CPTRSET      absolute 0xBF883288;
sfr unsigned long   volatile DCH2CPTRINV      absolute 0xBF88328C;
    // DCH2CPTR bits
    sbit  CHCPTR15_DCH2CPTR_bit at DCH2CPTR.B15;
    sbit  CHCPTR14_DCH2CPTR_bit at DCH2CPTR.B14;
    sbit  CHCPTR13_DCH2CPTR_bit at DCH2CPTR.B13;
    sbit  CHCPTR12_DCH2CPTR_bit at DCH2CPTR.B12;
    sbit  CHCPTR11_DCH2CPTR_bit at DCH2CPTR.B11;
    sbit  CHCPTR10_DCH2CPTR_bit at DCH2CPTR.B10;
    sbit  CHCPTR9_DCH2CPTR_bit at DCH2CPTR.B9;
    sbit  CHCPTR8_DCH2CPTR_bit at DCH2CPTR.B8;
    sbit  CHCPTR7_DCH2CPTR_bit at DCH2CPTR.B7;
    sbit  CHCPTR6_DCH2CPTR_bit at DCH2CPTR.B6;
    sbit  CHCPTR5_DCH2CPTR_bit at DCH2CPTR.B5;
    sbit  CHCPTR4_DCH2CPTR_bit at DCH2CPTR.B4;
    sbit  CHCPTR3_DCH2CPTR_bit at DCH2CPTR.B3;
    sbit  CHCPTR2_DCH2CPTR_bit at DCH2CPTR.B2;
    sbit  CHCPTR1_DCH2CPTR_bit at DCH2CPTR.B1;
    sbit  CHCPTR0_DCH2CPTR_bit at DCH2CPTR.B0;

sfr atomic unsigned long   volatile DCH2DAT          absolute 0xBF883290;
sfr unsigned long   volatile DCH2DATCLR       absolute 0xBF883294;
sfr unsigned long   volatile DCH2DATSET       absolute 0xBF883298;
sfr unsigned long   volatile DCH2DATINV       absolute 0xBF88329C;
    // DCH2DAT bits
    sbit  DCHPDAT7_DCH2DAT_bit at DCH2DAT.B7;
    sbit  DCHPDAT6_DCH2DAT_bit at DCH2DAT.B6;
    sbit  DCHPDAT5_DCH2DAT_bit at DCH2DAT.B5;
    sbit  DCHPDAT4_DCH2DAT_bit at DCH2DAT.B4;
    sbit  DCHPDAT3_DCH2DAT_bit at DCH2DAT.B3;
    sbit  DCHPDAT2_DCH2DAT_bit at DCH2DAT.B2;
    sbit  DCHPDAT1_DCH2DAT_bit at DCH2DAT.B1;
    sbit  DCHPDAT0_DCH2DAT_bit at DCH2DAT.B0;

sfr atomic unsigned long   volatile DCH3CON          absolute 0xBF8832A0;
sfr unsigned long   volatile DCH3CONCLR       absolute 0xBF8832A4;
sfr unsigned long   volatile DCH3CONSET       absolute 0xBF8832A8;
sfr unsigned long   volatile DCH3CONINV       absolute 0xBF8832AC;
    // DCH3CON bits
    sbit  CHBUSY_DCH3CON_bit at DCH3CON.B15;
    sbit  CHCHNS_DCH3CON_bit at DCH3CON.B8;
    sbit  CHEN_DCH3CON_bit at DCH3CON.B7;
    sbit  CHAED_DCH3CON_bit at DCH3CON.B6;
    sbit  CHCHN_DCH3CON_bit at DCH3CON.B5;
    sbit  CHAEN_DCH3CON_bit at DCH3CON.B4;
    sbit  CHEDET_DCH3CON_bit at DCH3CON.B2;
    sbit  CHPRI1_DCH3CON_bit at DCH3CON.B1;
    sbit  CHPRI0_DCH3CON_bit at DCH3CON.B0;

sfr atomic unsigned long   volatile DCH3ECON         absolute 0xBF8832B0;
sfr unsigned long   volatile DCH3ECONCLR      absolute 0xBF8832B4;
sfr unsigned long   volatile DCH3ECONSET      absolute 0xBF8832B8;
sfr unsigned long   volatile DCH3ECONINV      absolute 0xBF8832BC;
    // DCH3ECON bits
    sbit  CHAIRQ7_DCH3ECON_bit at DCH3ECON.B23;
    sbit  CHAIRQ6_DCH3ECON_bit at DCH3ECON.B22;
    sbit  CHAIRQ5_DCH3ECON_bit at DCH3ECON.B21;
    sbit  CHAIRQ4_DCH3ECON_bit at DCH3ECON.B20;
    sbit  CHAIRQ3_DCH3ECON_bit at DCH3ECON.B19;
    sbit  CHAIRQ2_DCH3ECON_bit at DCH3ECON.B18;
    sbit  CHAIRQ1_DCH3ECON_bit at DCH3ECON.B17;
    sbit  CHAIRQ0_DCH3ECON_bit at DCH3ECON.B16;
    sbit  CHSIRQ7_DCH3ECON_bit at DCH3ECON.B15;
    sbit  CHSIRQ6_DCH3ECON_bit at DCH3ECON.B14;
    sbit  CHSIRQ5_DCH3ECON_bit at DCH3ECON.B13;
    sbit  CHSIRQ4_DCH3ECON_bit at DCH3ECON.B12;
    sbit  CHSIRQ3_DCH3ECON_bit at DCH3ECON.B11;
    sbit  CHSIRQ2_DCH3ECON_bit at DCH3ECON.B10;
    sbit  CHSIRQ1_DCH3ECON_bit at DCH3ECON.B9;
    sbit  CHSIRQ0_DCH3ECON_bit at DCH3ECON.B8;
    sbit  CFORCE_DCH3ECON_bit at DCH3ECON.B7;
    sbit  CABORT_DCH3ECON_bit at DCH3ECON.B6;
    sbit  PATEN_DCH3ECON_bit at DCH3ECON.B5;
    sbit  SIRQEN_DCH3ECON_bit at DCH3ECON.B4;
    sbit  AIRQEN_DCH3ECON_bit at DCH3ECON.B3;

sfr atomic unsigned long   volatile DCH3INT          absolute 0xBF8832C0;
sfr unsigned long   volatile DCH3INTCLR       absolute 0xBF8832C4;
sfr unsigned long   volatile DCH3INTSET       absolute 0xBF8832C8;
sfr unsigned long   volatile DCH3INTINV       absolute 0xBF8832CC;
    // DCH3INT bits
    sbit  CHSDIE_DCH3INT_bit at DCH3INT.B23;
    sbit  CHSHIE_DCH3INT_bit at DCH3INT.B22;
    sbit  CHDDIE_DCH3INT_bit at DCH3INT.B21;
    sbit  CHDHIE_DCH3INT_bit at DCH3INT.B20;
    sbit  CHBCIE_DCH3INT_bit at DCH3INT.B19;
    sbit  CHCCIE_DCH3INT_bit at DCH3INT.B18;
    sbit  CHTAIE_DCH3INT_bit at DCH3INT.B17;
    sbit  CHERIE_DCH3INT_bit at DCH3INT.B16;
    sbit  CHSDIF_DCH3INT_bit at DCH3INT.B7;
    sbit  CHSHIF_DCH3INT_bit at DCH3INT.B6;
    sbit  CHDDIF_DCH3INT_bit at DCH3INT.B5;
    sbit  CHDHIF_DCH3INT_bit at DCH3INT.B4;
    sbit  CHBCIF_DCH3INT_bit at DCH3INT.B3;
    sbit  CHCCIF_DCH3INT_bit at DCH3INT.B2;
    sbit  CHTAIF_DCH3INT_bit at DCH3INT.B1;
    sbit  CHERIF_DCH3INT_bit at DCH3INT.B0;

sfr atomic unsigned long   volatile DCH3SSA          absolute 0xBF8832D0;
sfr unsigned long   volatile DCH3SSACLR       absolute 0xBF8832D4;
sfr unsigned long   volatile DCH3SSASET       absolute 0xBF8832D8;
sfr unsigned long   volatile DCH3SSAINV       absolute 0xBF8832DC;
    // DCH3SSA bits
    const register unsigned short int DCH3SSA31 = 31;
    sbit  DCH3SSA31_bit at DCH3SSA.B31;
    const register unsigned short int DCH3SSA30 = 30;
    sbit  DCH3SSA30_bit at DCH3SSA.B30;
    const register unsigned short int DCH3SSA29 = 29;
    sbit  DCH3SSA29_bit at DCH3SSA.B29;
    const register unsigned short int DCH3SSA28 = 28;
    sbit  DCH3SSA28_bit at DCH3SSA.B28;
    const register unsigned short int DCH3SSA27 = 27;
    sbit  DCH3SSA27_bit at DCH3SSA.B27;
    const register unsigned short int DCH3SSA26 = 26;
    sbit  DCH3SSA26_bit at DCH3SSA.B26;
    const register unsigned short int DCH3SSA25 = 25;
    sbit  DCH3SSA25_bit at DCH3SSA.B25;
    const register unsigned short int DCH3SSA24 = 24;
    sbit  DCH3SSA24_bit at DCH3SSA.B24;
    const register unsigned short int DCH3SSA23 = 23;
    sbit  DCH3SSA23_bit at DCH3SSA.B23;
    const register unsigned short int DCH3SSA22 = 22;
    sbit  DCH3SSA22_bit at DCH3SSA.B22;
    const register unsigned short int DCH3SSA21 = 21;
    sbit  DCH3SSA21_bit at DCH3SSA.B21;
    const register unsigned short int DCH3SSA20 = 20;
    sbit  DCH3SSA20_bit at DCH3SSA.B20;
    const register unsigned short int DCH3SSA19 = 19;
    sbit  DCH3SSA19_bit at DCH3SSA.B19;
    const register unsigned short int DCH3SSA18 = 18;
    sbit  DCH3SSA18_bit at DCH3SSA.B18;
    const register unsigned short int DCH3SSA17 = 17;
    sbit  DCH3SSA17_bit at DCH3SSA.B17;
    const register unsigned short int DCH3SSA16 = 16;
    sbit  DCH3SSA16_bit at DCH3SSA.B16;
    const register unsigned short int DCH3SSA15 = 15;
    sbit  DCH3SSA15_bit at DCH3SSA.B15;
    const register unsigned short int DCH3SSA14 = 14;
    sbit  DCH3SSA14_bit at DCH3SSA.B14;
    const register unsigned short int DCH3SSA13 = 13;
    sbit  DCH3SSA13_bit at DCH3SSA.B13;
    const register unsigned short int DCH3SSA12 = 12;
    sbit  DCH3SSA12_bit at DCH3SSA.B12;
    const register unsigned short int DCH3SSA11 = 11;
    sbit  DCH3SSA11_bit at DCH3SSA.B11;
    const register unsigned short int DCH3SSA10 = 10;
    sbit  DCH3SSA10_bit at DCH3SSA.B10;
    const register unsigned short int DCH3SSA9 = 9;
    sbit  DCH3SSA9_bit at DCH3SSA.B9;
    const register unsigned short int DCH3SSA8 = 8;
    sbit  DCH3SSA8_bit at DCH3SSA.B8;
    const register unsigned short int DCH3SSA7 = 7;
    sbit  DCH3SSA7_bit at DCH3SSA.B7;
    const register unsigned short int DCH3SSA6 = 6;
    sbit  DCH3SSA6_bit at DCH3SSA.B6;
    const register unsigned short int DCH3SSA5 = 5;
    sbit  DCH3SSA5_bit at DCH3SSA.B5;
    const register unsigned short int DCH3SSA4 = 4;
    sbit  DCH3SSA4_bit at DCH3SSA.B4;
    const register unsigned short int DCH3SSA3 = 3;
    sbit  DCH3SSA3_bit at DCH3SSA.B3;
    const register unsigned short int DCH3SSA2 = 2;
    sbit  DCH3SSA2_bit at DCH3SSA.B2;
    const register unsigned short int DCH3SSA1 = 1;
    sbit  DCH3SSA1_bit at DCH3SSA.B1;
    const register unsigned short int DCH3SSA0 = 0;
    sbit  DCH3SSA0_bit at DCH3SSA.B0;

sfr atomic unsigned long   volatile DCH3DSA          absolute 0xBF8832E0;
sfr unsigned long   volatile DCH3DSACLR       absolute 0xBF8832E4;
sfr unsigned long   volatile DCH3DSASET       absolute 0xBF8832E8;
sfr unsigned long   volatile DCH3DSAINV       absolute 0xBF8832EC;
    // DCH3DSA bits
    const register unsigned short int DCH3DSA31 = 31;
    sbit  DCH3DSA31_bit at DCH3DSA.B31;
    const register unsigned short int DCH3DSA30 = 30;
    sbit  DCH3DSA30_bit at DCH3DSA.B30;
    const register unsigned short int DCH3DSA29 = 29;
    sbit  DCH3DSA29_bit at DCH3DSA.B29;
    const register unsigned short int DCH3DSA28 = 28;
    sbit  DCH3DSA28_bit at DCH3DSA.B28;
    const register unsigned short int DCH3DSA27 = 27;
    sbit  DCH3DSA27_bit at DCH3DSA.B27;
    const register unsigned short int DCH3DSA26 = 26;
    sbit  DCH3DSA26_bit at DCH3DSA.B26;
    const register unsigned short int DCH3DSA25 = 25;
    sbit  DCH3DSA25_bit at DCH3DSA.B25;
    const register unsigned short int DCH3DSA24 = 24;
    sbit  DCH3DSA24_bit at DCH3DSA.B24;
    const register unsigned short int DCH3DSA23 = 23;
    sbit  DCH3DSA23_bit at DCH3DSA.B23;
    const register unsigned short int DCH3DSA22 = 22;
    sbit  DCH3DSA22_bit at DCH3DSA.B22;
    const register unsigned short int DCH3DSA21 = 21;
    sbit  DCH3DSA21_bit at DCH3DSA.B21;
    const register unsigned short int DCH3DSA20 = 20;
    sbit  DCH3DSA20_bit at DCH3DSA.B20;
    const register unsigned short int DCH3DSA19 = 19;
    sbit  DCH3DSA19_bit at DCH3DSA.B19;
    const register unsigned short int DCH3DSA18 = 18;
    sbit  DCH3DSA18_bit at DCH3DSA.B18;
    const register unsigned short int DCH3DSA17 = 17;
    sbit  DCH3DSA17_bit at DCH3DSA.B17;
    const register unsigned short int DCH3DSA16 = 16;
    sbit  DCH3DSA16_bit at DCH3DSA.B16;
    const register unsigned short int DCH3DSA15 = 15;
    sbit  DCH3DSA15_bit at DCH3DSA.B15;
    const register unsigned short int DCH3DSA14 = 14;
    sbit  DCH3DSA14_bit at DCH3DSA.B14;
    const register unsigned short int DCH3DSA13 = 13;
    sbit  DCH3DSA13_bit at DCH3DSA.B13;
    const register unsigned short int DCH3DSA12 = 12;
    sbit  DCH3DSA12_bit at DCH3DSA.B12;
    const register unsigned short int DCH3DSA11 = 11;
    sbit  DCH3DSA11_bit at DCH3DSA.B11;
    const register unsigned short int DCH3DSA10 = 10;
    sbit  DCH3DSA10_bit at DCH3DSA.B10;
    const register unsigned short int DCH3DSA9 = 9;
    sbit  DCH3DSA9_bit at DCH3DSA.B9;
    const register unsigned short int DCH3DSA8 = 8;
    sbit  DCH3DSA8_bit at DCH3DSA.B8;
    const register unsigned short int DCH3DSA7 = 7;
    sbit  DCH3DSA7_bit at DCH3DSA.B7;
    const register unsigned short int DCH3DSA6 = 6;
    sbit  DCH3DSA6_bit at DCH3DSA.B6;
    const register unsigned short int DCH3DSA5 = 5;
    sbit  DCH3DSA5_bit at DCH3DSA.B5;
    const register unsigned short int DCH3DSA4 = 4;
    sbit  DCH3DSA4_bit at DCH3DSA.B4;
    const register unsigned short int DCH3DSA3 = 3;
    sbit  DCH3DSA3_bit at DCH3DSA.B3;
    const register unsigned short int DCH3DSA2 = 2;
    sbit  DCH3DSA2_bit at DCH3DSA.B2;
    const register unsigned short int DCH3DSA1 = 1;
    sbit  DCH3DSA1_bit at DCH3DSA.B1;
    const register unsigned short int DCH3DSA0 = 0;
    sbit  DCH3DSA0_bit at DCH3DSA.B0;

sfr atomic unsigned long   volatile DCH3SSIZ         absolute 0xBF8832F0;
sfr unsigned long   volatile DCH3SSIZCLR      absolute 0xBF8832F4;
sfr unsigned long   volatile DCH3SSIZSET      absolute 0xBF8832F8;
sfr unsigned long   volatile DCH3SSIZINV      absolute 0xBF8832FC;
    // DCH3SSIZ bits
    sbit  CHSSIZ15_DCH3SSIZ_bit at DCH3SSIZ.B15;
    sbit  CHSSIZ14_DCH3SSIZ_bit at DCH3SSIZ.B14;
    sbit  CHSSIZ13_DCH3SSIZ_bit at DCH3SSIZ.B13;
    sbit  CHSSIZ12_DCH3SSIZ_bit at DCH3SSIZ.B12;
    sbit  CHSSIZ11_DCH3SSIZ_bit at DCH3SSIZ.B11;
    sbit  CHSSIZ10_DCH3SSIZ_bit at DCH3SSIZ.B10;
    sbit  CHSSIZ9_DCH3SSIZ_bit at DCH3SSIZ.B9;
    sbit  CHSSIZ8_DCH3SSIZ_bit at DCH3SSIZ.B8;
    sbit  CHSSIZ7_DCH3SSIZ_bit at DCH3SSIZ.B7;
    sbit  CHSSIZ6_DCH3SSIZ_bit at DCH3SSIZ.B6;
    sbit  CHSSIZ5_DCH3SSIZ_bit at DCH3SSIZ.B5;
    sbit  CHSSIZ4_DCH3SSIZ_bit at DCH3SSIZ.B4;
    sbit  CHSSIZ3_DCH3SSIZ_bit at DCH3SSIZ.B3;
    sbit  CHSSIZ2_DCH3SSIZ_bit at DCH3SSIZ.B2;
    sbit  CHSSIZ1_DCH3SSIZ_bit at DCH3SSIZ.B1;
    sbit  CHSSIZ0_DCH3SSIZ_bit at DCH3SSIZ.B0;

sfr atomic unsigned long   volatile DCH3DSIZ         absolute 0xBF883300;
sfr unsigned long   volatile DCH3DSIZCLR      absolute 0xBF883304;
sfr unsigned long   volatile DCH3DSIZSET      absolute 0xBF883308;
sfr unsigned long   volatile DCH3DSIZINV      absolute 0xBF88330C;
    // DCH3DSIZ bits
    sbit  CHDSIZ15_DCH3DSIZ_bit at DCH3DSIZ.B15;
    sbit  CHDSIZ14_DCH3DSIZ_bit at DCH3DSIZ.B14;
    sbit  CHDSIZ13_DCH3DSIZ_bit at DCH3DSIZ.B13;
    sbit  CHDSIZ12_DCH3DSIZ_bit at DCH3DSIZ.B12;
    sbit  CHDSIZ11_DCH3DSIZ_bit at DCH3DSIZ.B11;
    sbit  CHDSIZ10_DCH3DSIZ_bit at DCH3DSIZ.B10;
    sbit  CHDSIZ9_DCH3DSIZ_bit at DCH3DSIZ.B9;
    sbit  CHDSIZ8_DCH3DSIZ_bit at DCH3DSIZ.B8;
    sbit  CHDSIZ7_DCH3DSIZ_bit at DCH3DSIZ.B7;
    sbit  CHDSIZ6_DCH3DSIZ_bit at DCH3DSIZ.B6;
    sbit  CHDSIZ5_DCH3DSIZ_bit at DCH3DSIZ.B5;
    sbit  CHDSIZ4_DCH3DSIZ_bit at DCH3DSIZ.B4;
    sbit  CHDSIZ3_DCH3DSIZ_bit at DCH3DSIZ.B3;
    sbit  CHDSIZ2_DCH3DSIZ_bit at DCH3DSIZ.B2;
    sbit  CHDSIZ1_DCH3DSIZ_bit at DCH3DSIZ.B1;
    sbit  CHDSIZ0_DCH3DSIZ_bit at DCH3DSIZ.B0;

sfr atomic unsigned long   volatile DCH3SPTR         absolute 0xBF883310;
sfr unsigned long   volatile DCH3SPTRCLR      absolute 0xBF883314;
sfr unsigned long   volatile DCH3SPTRSET      absolute 0xBF883318;
sfr unsigned long   volatile DCH3SPTRINV      absolute 0xBF88331C;
    // DCH3SPTR bits
    sbit  CHSPTR15_DCH3SPTR_bit at DCH3SPTR.B15;
    sbit  CHSPTR14_DCH3SPTR_bit at DCH3SPTR.B14;
    sbit  CHSPTR13_DCH3SPTR_bit at DCH3SPTR.B13;
    sbit  CHSPTR12_DCH3SPTR_bit at DCH3SPTR.B12;
    sbit  CHSPTR11_DCH3SPTR_bit at DCH3SPTR.B11;
    sbit  CHSPTR10_DCH3SPTR_bit at DCH3SPTR.B10;
    sbit  CHSPTR9_DCH3SPTR_bit at DCH3SPTR.B9;
    sbit  CHSPTR8_DCH3SPTR_bit at DCH3SPTR.B8;
    sbit  CHSPTR7_DCH3SPTR_bit at DCH3SPTR.B7;
    sbit  CHSPTR6_DCH3SPTR_bit at DCH3SPTR.B6;
    sbit  CHSPTR5_DCH3SPTR_bit at DCH3SPTR.B5;
    sbit  CHSPTR4_DCH3SPTR_bit at DCH3SPTR.B4;
    sbit  CHSPTR3_DCH3SPTR_bit at DCH3SPTR.B3;
    sbit  CHSPTR2_DCH3SPTR_bit at DCH3SPTR.B2;
    sbit  CHSPTR1_DCH3SPTR_bit at DCH3SPTR.B1;
    sbit  CHSPTR0_DCH3SPTR_bit at DCH3SPTR.B0;

sfr atomic unsigned long   volatile DCH3DPTR         absolute 0xBF883320;
sfr unsigned long   volatile DCH3DPTRCLR      absolute 0xBF883324;
sfr unsigned long   volatile DCH3DPTRSET      absolute 0xBF883328;
sfr unsigned long   volatile DCH3DPTRINV      absolute 0xBF88332C;
    // DCH3DPTR bits
    sbit  CHDPTR15_DCH3DPTR_bit at DCH3DPTR.B15;
    sbit  CHDPTR14_DCH3DPTR_bit at DCH3DPTR.B14;
    sbit  CHDPTR13_DCH3DPTR_bit at DCH3DPTR.B13;
    sbit  CHDPTR12_DCH3DPTR_bit at DCH3DPTR.B12;
    sbit  CHDPTR11_DCH3DPTR_bit at DCH3DPTR.B11;
    sbit  CHDPTR10_DCH3DPTR_bit at DCH3DPTR.B10;
    sbit  CHDPTR9_DCH3DPTR_bit at DCH3DPTR.B9;
    sbit  CHDPTR8_DCH3DPTR_bit at DCH3DPTR.B8;
    sbit  CHDPTR7_DCH3DPTR_bit at DCH3DPTR.B7;
    sbit  CHDPTR6_DCH3DPTR_bit at DCH3DPTR.B6;
    sbit  CHDPTR5_DCH3DPTR_bit at DCH3DPTR.B5;
    sbit  CHDPTR4_DCH3DPTR_bit at DCH3DPTR.B4;
    sbit  CHDPTR3_DCH3DPTR_bit at DCH3DPTR.B3;
    sbit  CHDPTR2_DCH3DPTR_bit at DCH3DPTR.B2;
    sbit  CHDPTR1_DCH3DPTR_bit at DCH3DPTR.B1;
    sbit  CHDPTR0_DCH3DPTR_bit at DCH3DPTR.B0;

sfr atomic unsigned long   volatile DCH3CSIZ         absolute 0xBF883330;
sfr unsigned long   volatile DCH3CSIZCLR      absolute 0xBF883334;
sfr unsigned long   volatile DCH3CSIZSET      absolute 0xBF883338;
sfr unsigned long   volatile DCH3CSIZINV      absolute 0xBF88333C;
    // DCH3CSIZ bits
    sbit  CHCSIZ15_DCH3CSIZ_bit at DCH3CSIZ.B15;
    sbit  CHCSIZ14_DCH3CSIZ_bit at DCH3CSIZ.B14;
    sbit  CHCSIZ13_DCH3CSIZ_bit at DCH3CSIZ.B13;
    sbit  CHCSIZ12_DCH3CSIZ_bit at DCH3CSIZ.B12;
    sbit  CHCSIZ11_DCH3CSIZ_bit at DCH3CSIZ.B11;
    sbit  CHCSIZ10_DCH3CSIZ_bit at DCH3CSIZ.B10;
    sbit  CHCSIZ9_DCH3CSIZ_bit at DCH3CSIZ.B9;
    sbit  CHCSIZ8_DCH3CSIZ_bit at DCH3CSIZ.B8;
    sbit  CHCSIZ7_DCH3CSIZ_bit at DCH3CSIZ.B7;
    sbit  CHCSIZ6_DCH3CSIZ_bit at DCH3CSIZ.B6;
    sbit  CHCSIZ5_DCH3CSIZ_bit at DCH3CSIZ.B5;
    sbit  CHCSIZ4_DCH3CSIZ_bit at DCH3CSIZ.B4;
    sbit  CHCSIZ3_DCH3CSIZ_bit at DCH3CSIZ.B3;
    sbit  CHCSIZ2_DCH3CSIZ_bit at DCH3CSIZ.B2;
    sbit  CHCSIZ1_DCH3CSIZ_bit at DCH3CSIZ.B1;
    sbit  CHCSIZ0_DCH3CSIZ_bit at DCH3CSIZ.B0;

sfr atomic unsigned long   volatile DCH3CPTR         absolute 0xBF883340;
sfr unsigned long   volatile DCH3CPTRCLR      absolute 0xBF883344;
sfr unsigned long   volatile DCH3CPTRSET      absolute 0xBF883348;
sfr unsigned long   volatile DCH3CPTRINV      absolute 0xBF88334C;
    // DCH3CPTR bits
    sbit  CHCPTR15_DCH3CPTR_bit at DCH3CPTR.B15;
    sbit  CHCPTR14_DCH3CPTR_bit at DCH3CPTR.B14;
    sbit  CHCPTR13_DCH3CPTR_bit at DCH3CPTR.B13;
    sbit  CHCPTR12_DCH3CPTR_bit at DCH3CPTR.B12;
    sbit  CHCPTR11_DCH3CPTR_bit at DCH3CPTR.B11;
    sbit  CHCPTR10_DCH3CPTR_bit at DCH3CPTR.B10;
    sbit  CHCPTR9_DCH3CPTR_bit at DCH3CPTR.B9;
    sbit  CHCPTR8_DCH3CPTR_bit at DCH3CPTR.B8;
    sbit  CHCPTR7_DCH3CPTR_bit at DCH3CPTR.B7;
    sbit  CHCPTR6_DCH3CPTR_bit at DCH3CPTR.B6;
    sbit  CHCPTR5_DCH3CPTR_bit at DCH3CPTR.B5;
    sbit  CHCPTR4_DCH3CPTR_bit at DCH3CPTR.B4;
    sbit  CHCPTR3_DCH3CPTR_bit at DCH3CPTR.B3;
    sbit  CHCPTR2_DCH3CPTR_bit at DCH3CPTR.B2;
    sbit  CHCPTR1_DCH3CPTR_bit at DCH3CPTR.B1;
    sbit  CHCPTR0_DCH3CPTR_bit at DCH3CPTR.B0;

sfr atomic unsigned long   volatile DCH3DAT          absolute 0xBF883350;
sfr unsigned long   volatile DCH3DATCLR       absolute 0xBF883354;
sfr unsigned long   volatile DCH3DATSET       absolute 0xBF883358;
sfr unsigned long   volatile DCH3DATINV       absolute 0xBF88335C;
    // DCH3DAT bits
    sbit  DCHPDAT7_DCH3DAT_bit at DCH3DAT.B7;
    sbit  DCHPDAT6_DCH3DAT_bit at DCH3DAT.B6;
    sbit  DCHPDAT5_DCH3DAT_bit at DCH3DAT.B5;
    sbit  DCHPDAT4_DCH3DAT_bit at DCH3DAT.B4;
    sbit  DCHPDAT3_DCH3DAT_bit at DCH3DAT.B3;
    sbit  DCHPDAT2_DCH3DAT_bit at DCH3DAT.B2;
    sbit  DCHPDAT1_DCH3DAT_bit at DCH3DAT.B1;
    sbit  DCHPDAT0_DCH3DAT_bit at DCH3DAT.B0;

sfr unsigned long   volatile U1OTGIR          absolute 0xBF885040;
sfr unsigned long   volatile U1OTGIRCLR       absolute 0xBF885044;
    // U1OTGIR bits
    const register unsigned short int IDIF = 7;
    sbit  IDIF_bit at U1OTGIR.B7;
    const register unsigned short int T1MSECIF = 6;
    sbit  T1MSECIF_bit at U1OTGIR.B6;
    const register unsigned short int LSTATEIF = 5;
    sbit  LSTATEIF_bit at U1OTGIR.B5;
    const register unsigned short int ACTVIF = 4;
    sbit  ACTVIF_bit at U1OTGIR.B4;
    const register unsigned short int SESVDIF = 3;
    sbit  SESVDIF_bit at U1OTGIR.B3;
    const register unsigned short int SESENDIF = 2;
    sbit  SESENDIF_bit at U1OTGIR.B2;
    const register unsigned short int VBUSVDIF = 0;
    sbit  VBUSVDIF_bit at U1OTGIR.B0;

sfr unsigned long   volatile U1OTGIE          absolute 0xBF885050;
sfr unsigned long   volatile U1OTGIECLR       absolute 0xBF885054;
sfr unsigned long   volatile U1OTGIESET       absolute 0xBF885058;
sfr unsigned long   volatile U1OTGIEINV       absolute 0xBF88505C;
    // U1OTGIE bits
    const register unsigned short int IDIE = 7;
    sbit  IDIE_bit at U1OTGIE.B7;
    const register unsigned short int T1MSECIE = 6;
    sbit  T1MSECIE_bit at U1OTGIE.B6;
    const register unsigned short int LSTATEIE = 5;
    sbit  LSTATEIE_bit at U1OTGIE.B5;
    const register unsigned short int ACTVIE = 4;
    sbit  ACTVIE_bit at U1OTGIE.B4;
    const register unsigned short int SESVDIE = 3;
    sbit  SESVDIE_bit at U1OTGIE.B3;
    const register unsigned short int SESENDIE = 2;
    sbit  SESENDIE_bit at U1OTGIE.B2;
    const register unsigned short int VBUSVDIE = 0;
    sbit  VBUSVDIE_bit at U1OTGIE.B0;

sfr unsigned long   volatile U1OTGSTAT        absolute 0xBF885060;
    // U1OTGSTAT bits
    const register unsigned short int ID = 7;
    sbit  ID_bit at U1OTGSTAT.B7;
    const register unsigned short int LSTATE = 5;
    sbit  LSTATE_bit at U1OTGSTAT.B5;
    const register unsigned short int SESVD = 3;
    sbit  SESVD_bit at U1OTGSTAT.B3;
    const register unsigned short int SESEND = 2;
    sbit  SESEND_bit at U1OTGSTAT.B2;
    const register unsigned short int VBUSVD = 0;
    sbit  VBUSVD_bit at U1OTGSTAT.B0;

sfr unsigned long   volatile U1OTGCON         absolute 0xBF885070;
sfr unsigned long   volatile U1OTGCONCLR      absolute 0xBF885074;
sfr unsigned long   volatile U1OTGCONSET      absolute 0xBF885078;
sfr unsigned long   volatile U1OTGCONINV      absolute 0xBF88507C;
    // U1OTGCON bits
    const register unsigned short int DPPULUP = 7;
    sbit  DPPULUP_bit at U1OTGCON.B7;
    const register unsigned short int DMPULUP = 6;
    sbit  DMPULUP_bit at U1OTGCON.B6;
    const register unsigned short int DPPULDWN = 5;
    sbit  DPPULDWN_bit at U1OTGCON.B5;
    const register unsigned short int DMPULDWN = 4;
    sbit  DMPULDWN_bit at U1OTGCON.B4;
    const register unsigned short int VBUSON = 3;
    sbit  VBUSON_bit at U1OTGCON.B3;
    const register unsigned short int OTGEN = 2;
    sbit  OTGEN_bit at U1OTGCON.B2;
    const register unsigned short int VBUSCHG = 1;
    sbit  VBUSCHG_bit at U1OTGCON.B1;
    const register unsigned short int VBUSDIS = 0;
    sbit  VBUSDIS_bit at U1OTGCON.B0;

sfr unsigned long   volatile U1PWRC           absolute 0xBF885080;
sfr unsigned long   volatile U1PWRCCLR        absolute 0xBF885084;
sfr unsigned long   volatile U1PWRCSET        absolute 0xBF885088;
sfr unsigned long   volatile U1PWRCINV        absolute 0xBF88508C;
    // U1PWRC bits
    const register unsigned short int UACTPND = 7;
    sbit  UACTPND_bit at U1PWRC.B7;
    const register unsigned short int USLPGRD = 4;
    sbit  USLPGRD_bit at U1PWRC.B4;
    const register unsigned short int USBBUSY = 3;
    sbit  USBBUSY_bit at U1PWRC.B3;
    const register unsigned short int USUSPEND = 1;
    sbit  USUSPEND_bit at U1PWRC.B1;
    const register unsigned short int USBPWR = 0;
    sbit  USBPWR_bit at U1PWRC.B0;

sfr unsigned long   volatile U1IR             absolute 0xBF885200;
sfr unsigned long   volatile U1IRCLR          absolute 0xBF885204;
    // U1IR bits
    const register unsigned short int STALLIF = 7;
    sbit  STALLIF_bit at U1IR.B7;
    const register unsigned short int ATTACHIF = 6;
    sbit  ATTACHIF_bit at U1IR.B6;
    const register unsigned short int RESUMEIF = 5;
    sbit  RESUMEIF_bit at U1IR.B5;
    const register unsigned short int IDLEIF = 4;
    sbit  IDLEIF_bit at U1IR.B4;
    const register unsigned short int TRNIF = 3;
    sbit  TRNIF_bit at U1IR.B3;
    const register unsigned short int SOFIF = 2;
    sbit  SOFIF_bit at U1IR.B2;
    const register unsigned short int UERRIF = 1;
    sbit  UERRIF_bit at U1IR.B1;
    const register unsigned short int URSTIF_DETACHIF = 0;
    sbit  URSTIF_DETACHIF_bit at U1IR.B0;

sfr unsigned long   volatile U1IE             absolute 0xBF885210;
sfr unsigned long   volatile U1IECLR          absolute 0xBF885214;
sfr unsigned long   volatile U1IESET          absolute 0xBF885218;
sfr unsigned long   volatile U1IEINV          absolute 0xBF88521C;
    // U1IE bits
    const register unsigned short int STALLIE = 7;
    sbit  STALLIE_bit at U1IE.B7;
    const register unsigned short int ATTACHIE = 6;
    sbit  ATTACHIE_bit at U1IE.B6;
    const register unsigned short int RESUMEIE = 5;
    sbit  RESUMEIE_bit at U1IE.B5;
    const register unsigned short int IDLEIE = 4;
    sbit  IDLEIE_bit at U1IE.B4;
    const register unsigned short int TRNIE = 3;
    sbit  TRNIE_bit at U1IE.B3;
    const register unsigned short int SOFIE = 2;
    sbit  SOFIE_bit at U1IE.B2;
    const register unsigned short int UERRIE = 1;
    sbit  UERRIE_bit at U1IE.B1;
    const register unsigned short int URSTIE_DETACHIE = 0;
    sbit  URSTIE_DETACHIE_bit at U1IE.B0;

sfr unsigned long   volatile U1EIR            absolute 0xBF885220;
sfr unsigned long   volatile U1EIRCLR         absolute 0xBF885224;
    // U1EIR bits
    const register unsigned short int BTSEF = 7;
    sbit  BTSEF_bit at U1EIR.B7;
    const register unsigned short int BMXEF = 6;
    sbit  BMXEF_bit at U1EIR.B6;
    const register unsigned short int DMAEF = 5;
    sbit  DMAEF_bit at U1EIR.B5;
    const register unsigned short int BTOEF = 4;
    sbit  BTOEF_bit at U1EIR.B4;
    const register unsigned short int DFN8EF = 3;
    sbit  DFN8EF_bit at U1EIR.B3;
    const register unsigned short int CRC16EF = 2;
    sbit  CRC16EF_bit at U1EIR.B2;
    const register unsigned short int CRC5EF_EOFEF = 1;
    sbit  CRC5EF_EOFEF_bit at U1EIR.B1;
    const register unsigned short int PIDEF = 0;
    sbit  PIDEF_bit at U1EIR.B0;

sfr unsigned long   volatile U1EIE            absolute 0xBF885230;
sfr unsigned long   volatile U1EIECLR         absolute 0xBF885234;
sfr unsigned long   volatile U1EIESET         absolute 0xBF885238;
sfr unsigned long   volatile U1EIEINV         absolute 0xBF88523C;
    // U1EIE bits
    const register unsigned short int BTSEE = 7;
    sbit  BTSEE_bit at U1EIE.B7;
    const register unsigned short int BMXEE = 6;
    sbit  BMXEE_bit at U1EIE.B6;
    const register unsigned short int DMAEE = 5;
    sbit  DMAEE_bit at U1EIE.B5;
    const register unsigned short int BTOEE = 4;
    sbit  BTOEE_bit at U1EIE.B4;
    const register unsigned short int DFN8EE = 3;
    sbit  DFN8EE_bit at U1EIE.B3;
    const register unsigned short int CRC16EE = 2;
    sbit  CRC16EE_bit at U1EIE.B2;
    const register unsigned short int CRC5EE_EOFEE = 1;
    sbit  CRC5EE_EOFEE_bit at U1EIE.B1;
    const register unsigned short int PIDEE = 0;
    sbit  PIDEE_bit at U1EIE.B0;

sfr unsigned long   volatile U1STAT           absolute 0xBF885240;
    // U1STAT bits
    const register unsigned short int ENDPT3 = 7;
    sbit  ENDPT3_bit at U1STAT.B7;
    const register unsigned short int ENDPT2 = 6;
    sbit  ENDPT2_bit at U1STAT.B6;
    const register unsigned short int ENDPT1 = 5;
    sbit  ENDPT1_bit at U1STAT.B5;
    const register unsigned short int ENDPT0 = 4;
    sbit  ENDPT0_bit at U1STAT.B4;
    const register unsigned short int DIR_ = 3;
    sbit  DIR_bit at U1STAT.B3;
    const register unsigned short int PPBI = 2;
    sbit  PPBI_bit at U1STAT.B2;

sfr unsigned long   volatile U1CON            absolute 0xBF885250;
sfr unsigned long   volatile U1CONCLR         absolute 0xBF885254;
sfr unsigned long   volatile U1CONSET         absolute 0xBF885258;
sfr unsigned long   volatile U1CONINV         absolute 0xBF88525C;
    // U1CON bits
    const register unsigned short int JSTATE = 7;
    sbit  JSTATE_bit at U1CON.B7;
    const register unsigned short int SE0 = 6;
    sbit  SE0_bit at U1CON.B6;
    const register unsigned short int PKTDIS_TOKBUSY = 5;
    sbit  PKTDIS_TOKBUSY_bit at U1CON.B5;
    const register unsigned short int USBRST = 4;
    sbit  USBRST_bit at U1CON.B4;
    const register unsigned short int HOSTEN = 3;
    sbit  HOSTEN_bit at U1CON.B3;
    const register unsigned short int RESUME_ = 2;
    sbit  RESUME_bit at U1CON.B2;
    const register unsigned short int PPBRST = 1;
    sbit  PPBRST_bit at U1CON.B1;
    const register unsigned short int USBEN_SOFEN = 0;
    sbit  USBEN_SOFEN_bit at U1CON.B0;

sfr unsigned long   volatile U1ADDR           absolute 0xBF885260;
sfr unsigned long   volatile U1ADDRCLR        absolute 0xBF885264;
sfr unsigned long   volatile U1ADDRSET        absolute 0xBF885268;
sfr unsigned long   volatile U1ADDRINV        absolute 0xBF88526C;
    // U1ADDR bits
    const register unsigned short int LSPDEN = 7;
    sbit  LSPDEN_bit at U1ADDR.B7;
    const register unsigned short int DEVADDR6 = 6;
    sbit  DEVADDR6_bit at U1ADDR.B6;
    const register unsigned short int DEVADDR5 = 5;
    sbit  DEVADDR5_bit at U1ADDR.B5;
    const register unsigned short int DEVADDR4 = 4;
    sbit  DEVADDR4_bit at U1ADDR.B4;
    const register unsigned short int DEVADDR3 = 3;
    sbit  DEVADDR3_bit at U1ADDR.B3;
    const register unsigned short int DEVADDR2 = 2;
    sbit  DEVADDR2_bit at U1ADDR.B2;
    const register unsigned short int DEVADDR1 = 1;
    sbit  DEVADDR1_bit at U1ADDR.B1;
    const register unsigned short int DEVADDR0 = 0;
    sbit  DEVADDR0_bit at U1ADDR.B0;

sfr unsigned long   volatile U1BDTP1          absolute 0xBF885270;
sfr unsigned long   volatile U1BDTP1CLR       absolute 0xBF885274;
sfr unsigned long   volatile U1BDTP1SET       absolute 0xBF885278;
sfr unsigned long   volatile U1BDTP1INV       absolute 0xBF88527C;
    // U1BDTP1 bits
    const register unsigned short int BDTPTRL6 = 7;
    sbit  BDTPTRL6_bit at U1BDTP1.B7;
    const register unsigned short int BDTPTRL5 = 6;
    sbit  BDTPTRL5_bit at U1BDTP1.B6;
    const register unsigned short int BDTPTRL4 = 5;
    sbit  BDTPTRL4_bit at U1BDTP1.B5;
    const register unsigned short int BDTPTRL3 = 4;
    sbit  BDTPTRL3_bit at U1BDTP1.B4;
    const register unsigned short int BDTPTRL2 = 3;
    sbit  BDTPTRL2_bit at U1BDTP1.B3;
    const register unsigned short int BDTPTRL1 = 2;
    sbit  BDTPTRL1_bit at U1BDTP1.B2;
    const register unsigned short int BDTPTRL0 = 1;
    sbit  BDTPTRL0_bit at U1BDTP1.B1;

sfr unsigned long   volatile U1FRML           absolute 0xBF885280;
    // U1FRML bits
    const register unsigned short int FRML7 = 7;
    sbit  FRML7_bit at U1FRML.B7;
    const register unsigned short int FRML6 = 6;
    sbit  FRML6_bit at U1FRML.B6;
    const register unsigned short int FRML5 = 5;
    sbit  FRML5_bit at U1FRML.B5;
    const register unsigned short int FRML4 = 4;
    sbit  FRML4_bit at U1FRML.B4;
    const register unsigned short int FRML3 = 3;
    sbit  FRML3_bit at U1FRML.B3;
    const register unsigned short int FRML2 = 2;
    sbit  FRML2_bit at U1FRML.B2;
    const register unsigned short int FRML1 = 1;
    sbit  FRML1_bit at U1FRML.B1;
    const register unsigned short int FRML0 = 0;
    sbit  FRML0_bit at U1FRML.B0;

sfr unsigned long   volatile U1FRMH           absolute 0xBF885290;
    // U1FRMH bits
    const register unsigned short int FRMH2 = 2;
    sbit  FRMH2_bit at U1FRMH.B2;
    const register unsigned short int FRMH1 = 1;
    sbit  FRMH1_bit at U1FRMH.B1;
    const register unsigned short int FRMH0 = 0;
    sbit  FRMH0_bit at U1FRMH.B0;

sfr unsigned long   volatile U1TOK            absolute 0xBF8852A0;
sfr unsigned long   volatile U1TOKCLR         absolute 0xBF8852A4;
sfr unsigned long   volatile U1TOKSET         absolute 0xBF8852A8;
sfr unsigned long   volatile U1TOKINV         absolute 0xBF8852AC;
    // U1TOK bits
    const register unsigned short int PID3 = 7;
    sbit  PID3_bit at U1TOK.B7;
    const register unsigned short int PID2 = 6;
    sbit  PID2_bit at U1TOK.B6;
    const register unsigned short int PID1 = 5;
    sbit  PID1_bit at U1TOK.B5;
    const register unsigned short int PID0 = 4;
    sbit  PID0_bit at U1TOK.B4;
    const register unsigned short int EP3 = 3;
    sbit  EP3_bit at U1TOK.B3;
    const register unsigned short int EP2 = 2;
    sbit  EP2_bit at U1TOK.B2;
    const register unsigned short int EP1 = 1;
    sbit  EP1_bit at U1TOK.B1;
    const register unsigned short int EP0 = 0;
    sbit  EP0_bit at U1TOK.B0;

sfr unsigned long   volatile U1SOF            absolute 0xBF8852B0;
sfr unsigned long   volatile U1SOFCLR         absolute 0xBF8852B4;
sfr unsigned long   volatile U1SOFSET         absolute 0xBF8852B8;
sfr unsigned long   volatile U1SOFINV         absolute 0xBF8852BC;
    // U1SOF bits
    const register unsigned short int CNT7 = 7;
    sbit  CNT7_bit at U1SOF.B7;
    const register unsigned short int CNT6 = 6;
    sbit  CNT6_bit at U1SOF.B6;
    const register unsigned short int CNT5 = 5;
    sbit  CNT5_bit at U1SOF.B5;
    const register unsigned short int CNT4 = 4;
    sbit  CNT4_bit at U1SOF.B4;
    const register unsigned short int CNT3 = 3;
    sbit  CNT3_bit at U1SOF.B3;
    const register unsigned short int CNT2 = 2;
    sbit  CNT2_bit at U1SOF.B2;
    const register unsigned short int CNT1 = 1;
    sbit  CNT1_bit at U1SOF.B1;
    const register unsigned short int CNT0 = 0;
    sbit  CNT0_bit at U1SOF.B0;

sfr unsigned long   volatile U1BDTP2          absolute 0xBF8852C0;
sfr unsigned long   volatile U1BDTP2CLR       absolute 0xBF8852C4;
sfr unsigned long   volatile U1BDTP2SET       absolute 0xBF8852C8;
sfr unsigned long   volatile U1BDTP2INV       absolute 0xBF8852CC;
    // U1BDTP2 bits
    const register unsigned short int BDTPTRH7 = 7;
    sbit  BDTPTRH7_bit at U1BDTP2.B7;
    const register unsigned short int BDTPTRH6 = 6;
    sbit  BDTPTRH6_bit at U1BDTP2.B6;
    const register unsigned short int BDTPTRH5 = 5;
    sbit  BDTPTRH5_bit at U1BDTP2.B5;
    const register unsigned short int BDTPTRH4 = 4;
    sbit  BDTPTRH4_bit at U1BDTP2.B4;
    const register unsigned short int BDTPTRH3 = 3;
    sbit  BDTPTRH3_bit at U1BDTP2.B3;
    const register unsigned short int BDTPTRH2 = 2;
    sbit  BDTPTRH2_bit at U1BDTP2.B2;
    const register unsigned short int BDTPTRH1 = 1;
    sbit  BDTPTRH1_bit at U1BDTP2.B1;
    const register unsigned short int BDTPTRH0 = 0;
    sbit  BDTPTRH0_bit at U1BDTP2.B0;

sfr unsigned long   volatile U1BDTP3          absolute 0xBF8852D0;
sfr unsigned long   volatile U1BDTP3CLR       absolute 0xBF8852D4;
sfr unsigned long   volatile U1BDTP3SET       absolute 0xBF8852D8;
sfr unsigned long   volatile U1BDTP3INV       absolute 0xBF8852DC;
    // U1BDTP3 bits
    const register unsigned short int BDTPTRU7 = 7;
    sbit  BDTPTRU7_bit at U1BDTP3.B7;
    const register unsigned short int BDTPTRU6 = 6;
    sbit  BDTPTRU6_bit at U1BDTP3.B6;
    const register unsigned short int BDTPTRU5 = 5;
    sbit  BDTPTRU5_bit at U1BDTP3.B5;
    const register unsigned short int BDTPTRU4 = 4;
    sbit  BDTPTRU4_bit at U1BDTP3.B4;
    const register unsigned short int BDTPTRU3 = 3;
    sbit  BDTPTRU3_bit at U1BDTP3.B3;
    const register unsigned short int BDTPTRU2 = 2;
    sbit  BDTPTRU2_bit at U1BDTP3.B2;
    const register unsigned short int BDTPTRU1 = 1;
    sbit  BDTPTRU1_bit at U1BDTP3.B1;
    const register unsigned short int BDTPTRU0 = 0;
    sbit  BDTPTRU0_bit at U1BDTP3.B0;

sfr unsigned long   volatile U1CNFG1          absolute 0xBF8852E0;
sfr unsigned long   volatile U1CNFG1CLR       absolute 0xBF8852E4;
sfr unsigned long   volatile U1CNFG1SET       absolute 0xBF8852E8;
sfr unsigned long   volatile U1CNFG1INV       absolute 0xBF8852EC;
    // U1CNFG1 bits
    const register unsigned short int UTEYE = 7;
    sbit  UTEYE_bit at U1CNFG1.B7;
    const register unsigned short int UOEMON = 6;
    sbit  UOEMON_bit at U1CNFG1.B6;
    const register unsigned short int USBSIDL = 4;
    sbit  USBSIDL_bit at U1CNFG1.B4;
    const register unsigned short int UASUSPND = 0;
    sbit  UASUSPND_bit at U1CNFG1.B0;

sfr unsigned long   volatile U1EP0            absolute 0xBF885300;
sfr unsigned long   volatile U1EP0CLR         absolute 0xBF885304;
sfr unsigned long   volatile U1EP0SET         absolute 0xBF885308;
sfr unsigned long   volatile U1EP0INV         absolute 0xBF88530C;
    // U1EP0 bits
    const register unsigned short int LSPD = 7;
    sbit  LSPD_bit at U1EP0.B7;
    const register unsigned short int RETRYDIS = 6;
    sbit  RETRYDIS_bit at U1EP0.B6;
    const register unsigned short int EPCONDIS = 4;
    sbit  EPCONDIS_bit at U1EP0.B4;
    const register unsigned short int EPRXEN = 3;
    sbit  EPRXEN_bit at U1EP0.B3;
    const register unsigned short int EPTXEN = 2;
    sbit  EPTXEN_bit at U1EP0.B2;
    const register unsigned short int EPSTALL = 1;
    sbit  EPSTALL_bit at U1EP0.B1;
    const register unsigned short int EPHSHK = 0;
    sbit  EPHSHK_bit at U1EP0.B0;

sfr unsigned long   volatile U1EP1            absolute 0xBF885310;
sfr unsigned long   volatile U1EP1CLR         absolute 0xBF885314;
sfr unsigned long   volatile U1EP1SET         absolute 0xBF885318;
sfr unsigned long   volatile U1EP1INV         absolute 0xBF88531C;
    // U1EP1 bits
    sbit  EPCONDIS_U1EP1_bit at U1EP1.B4;
    sbit  EPRXEN_U1EP1_bit at U1EP1.B3;
    sbit  EPTXEN_U1EP1_bit at U1EP1.B2;
    sbit  EPSTALL_U1EP1_bit at U1EP1.B1;
    sbit  EPHSHK_U1EP1_bit at U1EP1.B0;

sfr unsigned long   volatile U1EP2            absolute 0xBF885320;
sfr unsigned long   volatile U1EP2CLR         absolute 0xBF885324;
sfr unsigned long   volatile U1EP2SET         absolute 0xBF885328;
sfr unsigned long   volatile U1EP2INV         absolute 0xBF88532C;
    // U1EP2 bits
    sbit  EPCONDIS_U1EP2_bit at U1EP2.B4;
    sbit  EPRXEN_U1EP2_bit at U1EP2.B3;
    sbit  EPTXEN_U1EP2_bit at U1EP2.B2;
    sbit  EPSTALL_U1EP2_bit at U1EP2.B1;
    sbit  EPHSHK_U1EP2_bit at U1EP2.B0;

sfr unsigned long   volatile U1EP3            absolute 0xBF885330;
sfr unsigned long   volatile U1EP3CLR         absolute 0xBF885334;
sfr unsigned long   volatile U1EP3SET         absolute 0xBF885338;
sfr unsigned long   volatile U1EP3INV         absolute 0xBF88533C;
    // U1EP3 bits
    sbit  EPCONDIS_U1EP3_bit at U1EP3.B4;
    sbit  EPRXEN_U1EP3_bit at U1EP3.B3;
    sbit  EPTXEN_U1EP3_bit at U1EP3.B2;
    sbit  EPSTALL_U1EP3_bit at U1EP3.B1;
    sbit  EPHSHK_U1EP3_bit at U1EP3.B0;

sfr unsigned long   volatile U1EP4            absolute 0xBF885340;
sfr unsigned long   volatile U1EP4CLR         absolute 0xBF885344;
sfr unsigned long   volatile U1EP4SET         absolute 0xBF885348;
sfr unsigned long   volatile U1EP4INV         absolute 0xBF88534C;
    // U1EP4 bits
    sbit  EPCONDIS_U1EP4_bit at U1EP4.B4;
    sbit  EPRXEN_U1EP4_bit at U1EP4.B3;
    sbit  EPTXEN_U1EP4_bit at U1EP4.B2;
    sbit  EPSTALL_U1EP4_bit at U1EP4.B1;
    sbit  EPHSHK_U1EP4_bit at U1EP4.B0;

sfr unsigned long   volatile U1EP5            absolute 0xBF885350;
sfr unsigned long   volatile U1EP5CLR         absolute 0xBF885354;
sfr unsigned long   volatile U1EP5SET         absolute 0xBF885358;
sfr unsigned long   volatile U1EP5INV         absolute 0xBF88535C;
    // U1EP5 bits
    sbit  EPCONDIS_U1EP5_bit at U1EP5.B4;
    sbit  EPRXEN_U1EP5_bit at U1EP5.B3;
    sbit  EPTXEN_U1EP5_bit at U1EP5.B2;
    sbit  EPSTALL_U1EP5_bit at U1EP5.B1;
    sbit  EPHSHK_U1EP5_bit at U1EP5.B0;

sfr unsigned long   volatile U1EP6            absolute 0xBF885360;
sfr unsigned long   volatile U1EP6CLR         absolute 0xBF885364;
sfr unsigned long   volatile U1EP6SET         absolute 0xBF885368;
sfr unsigned long   volatile U1EP6INV         absolute 0xBF88536C;
    // U1EP6 bits
    sbit  EPCONDIS_U1EP6_bit at U1EP6.B4;
    sbit  EPRXEN_U1EP6_bit at U1EP6.B3;
    sbit  EPTXEN_U1EP6_bit at U1EP6.B2;
    sbit  EPSTALL_U1EP6_bit at U1EP6.B1;
    sbit  EPHSHK_U1EP6_bit at U1EP6.B0;

sfr unsigned long   volatile U1EP7            absolute 0xBF885370;
sfr unsigned long   volatile U1EP7CLR         absolute 0xBF885374;
sfr unsigned long   volatile U1EP7SET         absolute 0xBF885378;
sfr unsigned long   volatile U1EP7INV         absolute 0xBF88537C;
    // U1EP7 bits
    sbit  EPCONDIS_U1EP7_bit at U1EP7.B4;
    sbit  EPRXEN_U1EP7_bit at U1EP7.B3;
    sbit  EPTXEN_U1EP7_bit at U1EP7.B2;
    sbit  EPSTALL_U1EP7_bit at U1EP7.B1;
    sbit  EPHSHK_U1EP7_bit at U1EP7.B0;

sfr unsigned long   volatile U1EP8            absolute 0xBF885380;
sfr unsigned long   volatile U1EP8CLR         absolute 0xBF885384;
sfr unsigned long   volatile U1EP8SET         absolute 0xBF885388;
sfr unsigned long   volatile U1EP8INV         absolute 0xBF88538C;
    // U1EP8 bits
    sbit  EPCONDIS_U1EP8_bit at U1EP8.B4;
    sbit  EPRXEN_U1EP8_bit at U1EP8.B3;
    sbit  EPTXEN_U1EP8_bit at U1EP8.B2;
    sbit  EPSTALL_U1EP8_bit at U1EP8.B1;
    sbit  EPHSHK_U1EP8_bit at U1EP8.B0;

sfr unsigned long   volatile U1EP9            absolute 0xBF885390;
sfr unsigned long   volatile U1EP9CLR         absolute 0xBF885394;
sfr unsigned long   volatile U1EP9SET         absolute 0xBF885398;
sfr unsigned long   volatile U1EP9INV         absolute 0xBF88539C;
    // U1EP9 bits
    sbit  EPCONDIS_U1EP9_bit at U1EP9.B4;
    sbit  EPRXEN_U1EP9_bit at U1EP9.B3;
    sbit  EPTXEN_U1EP9_bit at U1EP9.B2;
    sbit  EPSTALL_U1EP9_bit at U1EP9.B1;
    sbit  EPHSHK_U1EP9_bit at U1EP9.B0;

sfr unsigned long   volatile U1EP10           absolute 0xBF8853A0;
sfr unsigned long   volatile U1EP10CLR        absolute 0xBF8853A4;
sfr unsigned long   volatile U1EP10SET        absolute 0xBF8853A8;
sfr unsigned long   volatile U1EP10INV        absolute 0xBF8853AC;
    // U1EP10 bits
    sbit  EPCONDIS_U1EP10_bit at U1EP10.B4;
    sbit  EPRXEN_U1EP10_bit at U1EP10.B3;
    sbit  EPTXEN_U1EP10_bit at U1EP10.B2;
    sbit  EPSTALL_U1EP10_bit at U1EP10.B1;
    sbit  EPHSHK_U1EP10_bit at U1EP10.B0;

sfr unsigned long   volatile U1EP11           absolute 0xBF8853B0;
sfr unsigned long   volatile U1EP11CLR        absolute 0xBF8853B4;
sfr unsigned long   volatile U1EP11SET        absolute 0xBF8853B8;
sfr unsigned long   volatile U1EP11INV        absolute 0xBF8853BC;
    // U1EP11 bits
    sbit  EPCONDIS_U1EP11_bit at U1EP11.B4;
    sbit  EPRXEN_U1EP11_bit at U1EP11.B3;
    sbit  EPTXEN_U1EP11_bit at U1EP11.B2;
    sbit  EPSTALL_U1EP11_bit at U1EP11.B1;
    sbit  EPHSHK_U1EP11_bit at U1EP11.B0;

sfr unsigned long   volatile U1EP12           absolute 0xBF8853C0;
sfr unsigned long   volatile U1EP12CLR        absolute 0xBF8853C4;
sfr unsigned long   volatile U1EP12SET        absolute 0xBF8853C8;
sfr unsigned long   volatile U1EP12INV        absolute 0xBF8853CC;
    // U1EP12 bits
    sbit  EPCONDIS_U1EP12_bit at U1EP12.B4;
    sbit  EPRXEN_U1EP12_bit at U1EP12.B3;
    sbit  EPTXEN_U1EP12_bit at U1EP12.B2;
    sbit  EPSTALL_U1EP12_bit at U1EP12.B1;
    sbit  EPHSHK_U1EP12_bit at U1EP12.B0;

sfr unsigned long   volatile U1EP13           absolute 0xBF8853D0;
sfr unsigned long   volatile U1EP13CLR        absolute 0xBF8853D4;
sfr unsigned long   volatile U1EP13SET        absolute 0xBF8853D8;
sfr unsigned long   volatile U1EP13INV        absolute 0xBF8853DC;
    // U1EP13 bits
    sbit  EPCONDIS_U1EP13_bit at U1EP13.B4;
    sbit  EPRXEN_U1EP13_bit at U1EP13.B3;
    sbit  EPTXEN_U1EP13_bit at U1EP13.B2;
    sbit  EPSTALL_U1EP13_bit at U1EP13.B1;
    sbit  EPHSHK_U1EP13_bit at U1EP13.B0;

sfr unsigned long   volatile U1EP14           absolute 0xBF8853E0;
sfr unsigned long   volatile U1EP14CLR        absolute 0xBF8853E4;
sfr unsigned long   volatile U1EP14SET        absolute 0xBF8853E8;
sfr unsigned long   volatile U1EP14INV        absolute 0xBF8853EC;
    // U1EP14 bits
    sbit  EPCONDIS_U1EP14_bit at U1EP14.B4;
    sbit  EPRXEN_U1EP14_bit at U1EP14.B3;
    sbit  EPTXEN_U1EP14_bit at U1EP14.B2;
    sbit  EPSTALL_U1EP14_bit at U1EP14.B1;
    sbit  EPHSHK_U1EP14_bit at U1EP14.B0;

sfr unsigned long   volatile U1EP15           absolute 0xBF8853F0;
sfr unsigned long   volatile U1EP15CLR        absolute 0xBF8853F4;
sfr unsigned long   volatile U1EP15SET        absolute 0xBF8853F8;
sfr unsigned long   volatile U1EP15INV        absolute 0xBF8853FC;
    // U1EP15 bits
    sbit  EPCONDIS_U1EP15_bit at U1EP15.B4;
    sbit  EPRXEN_U1EP15_bit at U1EP15.B3;
    sbit  EPTXEN_U1EP15_bit at U1EP15.B2;
    sbit  EPSTALL_U1EP15_bit at U1EP15.B1;
    sbit  EPHSHK_U1EP15_bit at U1EP15.B0;

sfr atomic unsigned long   volatile ANSELA           absolute 0xBF886000;
sfr unsigned long   volatile ANSELACLR        absolute 0xBF886004;
sfr unsigned long   volatile ANSELASET        absolute 0xBF886008;
sfr unsigned long   volatile ANSELAINV        absolute 0xBF88600C;
    // ANSELA bits
    const register unsigned short int ANSA1 = 1;
    sbit  ANSA1_bit at ANSELA.B1;
    const register unsigned short int ANSA0 = 0;
    sbit  ANSA0_bit at ANSELA.B0;

sfr atomic unsigned long   volatile TRISA            absolute 0xBF886010;
sfr unsigned long   volatile TRISACLR         absolute 0xBF886014;
sfr unsigned long   volatile TRISASET         absolute 0xBF886018;
sfr unsigned long   volatile TRISAINV         absolute 0xBF88601C;
    // TRISA bits
    const register unsigned short int TRISA10 = 10;
    sbit  TRISA10_bit at TRISA.B10;
    const register unsigned short int TRISA9 = 9;
    sbit  TRISA9_bit at TRISA.B9;
    const register unsigned short int TRISA8 = 8;
    sbit  TRISA8_bit at TRISA.B8;
    const register unsigned short int TRISA7 = 7;
    sbit  TRISA7_bit at TRISA.B7;
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

sfr atomic unsigned long   volatile PORTA            absolute 0xBF886020;
sfr unsigned long   volatile PORTACLR         absolute 0xBF886024;
sfr unsigned long   volatile PORTASET         absolute 0xBF886028;
sfr unsigned long   volatile PORTAINV         absolute 0xBF88602C;
    // PORTA bits
    const register unsigned short int RA10 = 10;
    sbit  RA10_bit at PORTA.B10;
    const register unsigned short int RA9 = 9;
    sbit  RA9_bit at PORTA.B9;
    const register unsigned short int RA8 = 8;
    sbit  RA8_bit at PORTA.B8;
    const register unsigned short int RA7 = 7;
    sbit  RA7_bit at PORTA.B7;
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

sfr atomic unsigned long   volatile LATA             absolute 0xBF886030;
sfr unsigned long   volatile LATACLR          absolute 0xBF886034;
sfr unsigned long   volatile LATASET          absolute 0xBF886038;
sfr unsigned long   volatile LATAINV          absolute 0xBF88603C;
    // LATA bits
    const register unsigned short int LATA10 = 10;
    sbit  LATA10_bit at LATA.B10;
    const register unsigned short int LATA9 = 9;
    sbit  LATA9_bit at LATA.B9;
    const register unsigned short int LATA8 = 8;
    sbit  LATA8_bit at LATA.B8;
    const register unsigned short int LATA7 = 7;
    sbit  LATA7_bit at LATA.B7;
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

sfr atomic unsigned long   volatile ODCA             absolute 0xBF886040;
sfr unsigned long   volatile ODCACLR          absolute 0xBF886044;
sfr unsigned long   volatile ODCASET          absolute 0xBF886048;
sfr unsigned long   volatile ODCAINV          absolute 0xBF88604C;
    // ODCA bits
    const register unsigned short int ODCA10 = 10;
    sbit  ODCA10_bit at ODCA.B10;
    const register unsigned short int ODCA9 = 9;
    sbit  ODCA9_bit at ODCA.B9;
    const register unsigned short int ODCA8 = 8;
    sbit  ODCA8_bit at ODCA.B8;
    const register unsigned short int ODCA7 = 7;
    sbit  ODCA7_bit at ODCA.B7;

sfr atomic unsigned long   volatile CNPUA            absolute 0xBF886050;
sfr unsigned long   volatile CNPUACLR         absolute 0xBF886054;
sfr unsigned long   volatile CNPUASET         absolute 0xBF886058;
sfr unsigned long   volatile CNPUAINV         absolute 0xBF88605C;
    // CNPUA bits
    const register unsigned short int CNPUA10 = 10;
    sbit  CNPUA10_bit at CNPUA.B10;
    const register unsigned short int CNPUA9 = 9;
    sbit  CNPUA9_bit at CNPUA.B9;
    const register unsigned short int CNPUA8 = 8;
    sbit  CNPUA8_bit at CNPUA.B8;
    const register unsigned short int CNPUA7 = 7;
    sbit  CNPUA7_bit at CNPUA.B7;
    const register unsigned short int CNPUA4 = 4;
    sbit  CNPUA4_bit at CNPUA.B4;
    const register unsigned short int CNPUA3 = 3;
    sbit  CNPUA3_bit at CNPUA.B3;
    const register unsigned short int CNPUA2 = 2;
    sbit  CNPUA2_bit at CNPUA.B2;
    const register unsigned short int CNPUA1 = 1;
    sbit  CNPUA1_bit at CNPUA.B1;
    const register unsigned short int CNPUA0 = 0;
    sbit  CNPUA0_bit at CNPUA.B0;

sfr atomic unsigned long   volatile CNPDA            absolute 0xBF886060;
sfr unsigned long   volatile CNPDACLR         absolute 0xBF886064;
sfr unsigned long   volatile CNPDASET         absolute 0xBF886068;
sfr unsigned long   volatile CNPDAINV         absolute 0xBF88606C;
    // CNPDA bits
    const register unsigned short int CNPDA10 = 10;
    sbit  CNPDA10_bit at CNPDA.B10;
    const register unsigned short int CNPDA9 = 9;
    sbit  CNPDA9_bit at CNPDA.B9;
    const register unsigned short int CNPDA8 = 8;
    sbit  CNPDA8_bit at CNPDA.B8;
    const register unsigned short int CNPDA7 = 7;
    sbit  CNPDA7_bit at CNPDA.B7;
    const register unsigned short int CNPDA4 = 4;
    sbit  CNPDA4_bit at CNPDA.B4;
    const register unsigned short int CNPDA3 = 3;
    sbit  CNPDA3_bit at CNPDA.B3;
    const register unsigned short int CNPDA2 = 2;
    sbit  CNPDA2_bit at CNPDA.B2;
    const register unsigned short int CNPDA1 = 1;
    sbit  CNPDA1_bit at CNPDA.B1;
    const register unsigned short int CNPDA0 = 0;
    sbit  CNPDA0_bit at CNPDA.B0;

sfr atomic unsigned long   volatile CNCONA           absolute 0xBF886070;
sfr unsigned long   volatile CNCONACLR        absolute 0xBF886074;
sfr unsigned long   volatile CNCONASET        absolute 0xBF886078;
sfr unsigned long   volatile CNCONAINV        absolute 0xBF88607C;
    // CNCONA bits
    sbit  ON__CNCONA_bit at CNCONA.B15;
    sbit  SIDL_CNCONA_bit at CNCONA.B13;

sfr atomic unsigned long   volatile CNENA            absolute 0xBF886080;
sfr unsigned long   volatile CNENACLR         absolute 0xBF886084;
sfr unsigned long   volatile CNENASET         absolute 0xBF886088;
sfr unsigned long   volatile CNENAINV         absolute 0xBF88608C;
    // CNENA bits
    const register unsigned short int CNIEA10 = 10;
    sbit  CNIEA10_bit at CNENA.B10;
    const register unsigned short int CNIEA9 = 9;
    sbit  CNIEA9_bit at CNENA.B9;
    const register unsigned short int CNIEA8 = 8;
    sbit  CNIEA8_bit at CNENA.B8;
    const register unsigned short int CNIEA7 = 7;
    sbit  CNIEA7_bit at CNENA.B7;
    const register unsigned short int CNIEA4 = 4;
    sbit  CNIEA4_bit at CNENA.B4;
    const register unsigned short int CNIEA3 = 3;
    sbit  CNIEA3_bit at CNENA.B3;
    const register unsigned short int CNIEA2 = 2;
    sbit  CNIEA2_bit at CNENA.B2;
    const register unsigned short int CNIEA1 = 1;
    sbit  CNIEA1_bit at CNENA.B1;
    const register unsigned short int CNIEA0 = 0;
    sbit  CNIEA0_bit at CNENA.B0;

sfr atomic unsigned long   volatile CNSTATA          absolute 0xBF886090;
sfr unsigned long   volatile CNSTATACLR       absolute 0xBF886094;
sfr unsigned long   volatile CNSTATASET       absolute 0xBF886098;
sfr unsigned long   volatile CNSTATAINV       absolute 0xBF88609C;
    // CNSTATA bits
    const register unsigned short int CNSTATA10 = 10;
    sbit  CNSTATA10_bit at CNSTATA.B10;
    const register unsigned short int CNSTATA9 = 9;
    sbit  CNSTATA9_bit at CNSTATA.B9;
    const register unsigned short int CNSTATA8 = 8;
    sbit  CNSTATA8_bit at CNSTATA.B8;
    const register unsigned short int CNSTATA7 = 7;
    sbit  CNSTATA7_bit at CNSTATA.B7;
    const register unsigned short int CNSTATA4 = 4;
    sbit  CNSTATA4_bit at CNSTATA.B4;
    const register unsigned short int CNSTATA3 = 3;
    sbit  CNSTATA3_bit at CNSTATA.B3;
    const register unsigned short int CNSTATA2 = 2;
    sbit  CNSTATA2_bit at CNSTATA.B2;
    const register unsigned short int CNSTATA1 = 1;
    sbit  CNSTATA1_bit at CNSTATA.B1;
    const register unsigned short int CNSTATA0 = 0;
    sbit  CNSTATA0_bit at CNSTATA.B0;

sfr atomic unsigned long   volatile ANSELB           absolute 0xBF886100;
sfr unsigned long   volatile ANSELBCLR        absolute 0xBF886104;
sfr unsigned long   volatile ANSELBSET        absolute 0xBF886108;
sfr unsigned long   volatile ANSELBINV        absolute 0xBF88610C;
    // ANSELB bits
    const register unsigned short int ANSB15 = 15;
    sbit  ANSB15_bit at ANSELB.B15;
    const register unsigned short int ANSB14 = 14;
    sbit  ANSB14_bit at ANSELB.B14;
    const register unsigned short int ANSB13 = 13;
    sbit  ANSB13_bit at ANSELB.B13;
    const register unsigned short int ANSB12 = 12;
    sbit  ANSB12_bit at ANSELB.B12;
    const register unsigned short int ANSB3 = 3;
    sbit  ANSB3_bit at ANSELB.B3;
    const register unsigned short int ANSB2 = 2;
    sbit  ANSB2_bit at ANSELB.B2;
    const register unsigned short int ANSB1 = 1;
    sbit  ANSB1_bit at ANSELB.B1;
    const register unsigned short int ANSB0 = 0;
    sbit  ANSB0_bit at ANSELB.B0;

sfr atomic unsigned long   volatile TRISB            absolute 0xBF886110;
sfr unsigned long   volatile TRISBCLR         absolute 0xBF886114;
sfr unsigned long   volatile TRISBSET         absolute 0xBF886118;
sfr unsigned long   volatile TRISBINV         absolute 0xBF88611C;
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

sfr atomic unsigned long   volatile PORTB            absolute 0xBF886120;
sfr unsigned long   volatile PORTBCLR         absolute 0xBF886124;
sfr unsigned long   volatile PORTBSET         absolute 0xBF886128;
sfr unsigned long   volatile PORTBINV         absolute 0xBF88612C;
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

sfr atomic unsigned long   volatile LATB             absolute 0xBF886130;
sfr unsigned long   volatile LATBCLR          absolute 0xBF886134;
sfr unsigned long   volatile LATBSET          absolute 0xBF886138;
sfr unsigned long   volatile LATBINV          absolute 0xBF88613C;
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

sfr atomic unsigned long   volatile ODCB             absolute 0xBF886140;
sfr unsigned long   volatile ODCBCLR          absolute 0xBF886144;
sfr unsigned long   volatile ODCBSET          absolute 0xBF886148;
sfr unsigned long   volatile ODCBINV          absolute 0xBF88614C;
    // ODCB bits
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

sfr atomic unsigned long   volatile CNPUB            absolute 0xBF886150;
sfr unsigned long   volatile CNPUBCLR         absolute 0xBF886154;
sfr unsigned long   volatile CNPUBSET         absolute 0xBF886158;
sfr unsigned long   volatile CNPUBINV         absolute 0xBF88615C;
    // CNPUB bits
    const register unsigned short int CNPUB15 = 15;
    sbit  CNPUB15_bit at CNPUB.B15;
    const register unsigned short int CNPUB14 = 14;
    sbit  CNPUB14_bit at CNPUB.B14;
    const register unsigned short int CNPUB13 = 13;
    sbit  CNPUB13_bit at CNPUB.B13;
    const register unsigned short int CNPUB12 = 12;
    sbit  CNPUB12_bit at CNPUB.B12;
    const register unsigned short int CNPUB11 = 11;
    sbit  CNPUB11_bit at CNPUB.B11;
    const register unsigned short int CNPUB10 = 10;
    sbit  CNPUB10_bit at CNPUB.B10;
    const register unsigned short int CNPUB9 = 9;
    sbit  CNPUB9_bit at CNPUB.B9;
    const register unsigned short int CNPUB8 = 8;
    sbit  CNPUB8_bit at CNPUB.B8;
    const register unsigned short int CNPUB7 = 7;
    sbit  CNPUB7_bit at CNPUB.B7;
    const register unsigned short int CNPUB6 = 6;
    sbit  CNPUB6_bit at CNPUB.B6;
    const register unsigned short int CNPUB5 = 5;
    sbit  CNPUB5_bit at CNPUB.B5;
    const register unsigned short int CNPUB4 = 4;
    sbit  CNPUB4_bit at CNPUB.B4;
    const register unsigned short int CNPUB3 = 3;
    sbit  CNPUB3_bit at CNPUB.B3;
    const register unsigned short int CNPUB2 = 2;
    sbit  CNPUB2_bit at CNPUB.B2;
    const register unsigned short int CNPUB1 = 1;
    sbit  CNPUB1_bit at CNPUB.B1;
    const register unsigned short int CNPUB0 = 0;
    sbit  CNPUB0_bit at CNPUB.B0;

sfr atomic unsigned long   volatile CNPDB            absolute 0xBF886160;
sfr unsigned long   volatile CNPDBCLR         absolute 0xBF886164;
sfr unsigned long   volatile CNPDBSET         absolute 0xBF886168;
sfr unsigned long   volatile CNPDBINV         absolute 0xBF88616C;
    // CNPDB bits
    const register unsigned short int CNPDB15 = 15;
    sbit  CNPDB15_bit at CNPDB.B15;
    const register unsigned short int CNPDB14 = 14;
    sbit  CNPDB14_bit at CNPDB.B14;
    const register unsigned short int CNPDB13 = 13;
    sbit  CNPDB13_bit at CNPDB.B13;
    const register unsigned short int CNPDB12 = 12;
    sbit  CNPDB12_bit at CNPDB.B12;
    const register unsigned short int CNPDB11 = 11;
    sbit  CNPDB11_bit at CNPDB.B11;
    const register unsigned short int CNPDB10 = 10;
    sbit  CNPDB10_bit at CNPDB.B10;
    const register unsigned short int CNPDB9 = 9;
    sbit  CNPDB9_bit at CNPDB.B9;
    const register unsigned short int CNPDB8 = 8;
    sbit  CNPDB8_bit at CNPDB.B8;
    const register unsigned short int CNPDB7 = 7;
    sbit  CNPDB7_bit at CNPDB.B7;
    const register unsigned short int CNPDB6 = 6;
    sbit  CNPDB6_bit at CNPDB.B6;
    const register unsigned short int CNPDB5 = 5;
    sbit  CNPDB5_bit at CNPDB.B5;
    const register unsigned short int CNPDB4 = 4;
    sbit  CNPDB4_bit at CNPDB.B4;
    const register unsigned short int CNPDB3 = 3;
    sbit  CNPDB3_bit at CNPDB.B3;
    const register unsigned short int CNPDB2 = 2;
    sbit  CNPDB2_bit at CNPDB.B2;
    const register unsigned short int CNPDB1 = 1;
    sbit  CNPDB1_bit at CNPDB.B1;
    const register unsigned short int CNPDB0 = 0;
    sbit  CNPDB0_bit at CNPDB.B0;

sfr atomic unsigned long   volatile CNCONB           absolute 0xBF886170;
sfr unsigned long   volatile CNCONBCLR        absolute 0xBF886174;
sfr unsigned long   volatile CNCONBSET        absolute 0xBF886178;
sfr unsigned long   volatile CNCONBINV        absolute 0xBF88617C;
    // CNCONB bits
    sbit  ON__CNCONB_bit at CNCONB.B15;
    sbit  SIDL_CNCONB_bit at CNCONB.B13;

sfr atomic unsigned long   volatile CNENB            absolute 0xBF886180;
sfr unsigned long   volatile CNENBCLR         absolute 0xBF886184;
sfr unsigned long   volatile CNENBSET         absolute 0xBF886188;
sfr unsigned long   volatile CNENBINV         absolute 0xBF88618C;
    // CNENB bits
    const register unsigned short int CNIEB15 = 15;
    sbit  CNIEB15_bit at CNENB.B15;
    const register unsigned short int CNIEB14 = 14;
    sbit  CNIEB14_bit at CNENB.B14;
    const register unsigned short int CNIEB13 = 13;
    sbit  CNIEB13_bit at CNENB.B13;
    const register unsigned short int CNIEB12 = 12;
    sbit  CNIEB12_bit at CNENB.B12;
    const register unsigned short int CNIEB11 = 11;
    sbit  CNIEB11_bit at CNENB.B11;
    const register unsigned short int CNIEB10 = 10;
    sbit  CNIEB10_bit at CNENB.B10;
    const register unsigned short int CNIEB9 = 9;
    sbit  CNIEB9_bit at CNENB.B9;
    const register unsigned short int CNIEB8 = 8;
    sbit  CNIEB8_bit at CNENB.B8;
    const register unsigned short int CNIEB7 = 7;
    sbit  CNIEB7_bit at CNENB.B7;
    const register unsigned short int CNIEB6 = 6;
    sbit  CNIEB6_bit at CNENB.B6;
    const register unsigned short int CNIEB5 = 5;
    sbit  CNIEB5_bit at CNENB.B5;
    const register unsigned short int CNIEB4 = 4;
    sbit  CNIEB4_bit at CNENB.B4;
    const register unsigned short int CNIEB3 = 3;
    sbit  CNIEB3_bit at CNENB.B3;
    const register unsigned short int CNIEB2 = 2;
    sbit  CNIEB2_bit at CNENB.B2;
    const register unsigned short int CNIEB1 = 1;
    sbit  CNIEB1_bit at CNENB.B1;
    const register unsigned short int CNIEB0 = 0;
    sbit  CNIEB0_bit at CNENB.B0;

sfr atomic unsigned long   volatile CNSTATB          absolute 0xBF886190;
sfr unsigned long   volatile CNSTATBCLR       absolute 0xBF886194;
sfr unsigned long   volatile CNSTATBSET       absolute 0xBF886198;
sfr unsigned long   volatile CNSTATBINV       absolute 0xBF88619C;
    // CNSTATB bits
    const register unsigned short int CNSTATB15 = 15;
    sbit  CNSTATB15_bit at CNSTATB.B15;
    const register unsigned short int CNSTATB14 = 14;
    sbit  CNSTATB14_bit at CNSTATB.B14;
    const register unsigned short int CNSTATB13 = 13;
    sbit  CNSTATB13_bit at CNSTATB.B13;
    const register unsigned short int CNSTATB12 = 12;
    sbit  CNSTATB12_bit at CNSTATB.B12;
    const register unsigned short int CNSTATB11 = 11;
    sbit  CNSTATB11_bit at CNSTATB.B11;
    const register unsigned short int CNSTATB10 = 10;
    sbit  CNSTATB10_bit at CNSTATB.B10;
    const register unsigned short int CNSTATB9 = 9;
    sbit  CNSTATB9_bit at CNSTATB.B9;
    const register unsigned short int CNSTATB8 = 8;
    sbit  CNSTATB8_bit at CNSTATB.B8;
    const register unsigned short int CNSTATB7 = 7;
    sbit  CNSTATB7_bit at CNSTATB.B7;
    const register unsigned short int CNSTATB6 = 6;
    sbit  CNSTATB6_bit at CNSTATB.B6;
    const register unsigned short int CNSTATB5 = 5;
    sbit  CNSTATB5_bit at CNSTATB.B5;
    const register unsigned short int CNSTATB4 = 4;
    sbit  CNSTATB4_bit at CNSTATB.B4;
    const register unsigned short int CNSTATB3 = 3;
    sbit  CNSTATB3_bit at CNSTATB.B3;
    const register unsigned short int CNSTATB2 = 2;
    sbit  CNSTATB2_bit at CNSTATB.B2;
    const register unsigned short int CNSTATB1 = 1;
    sbit  CNSTATB1_bit at CNSTATB.B1;
    const register unsigned short int CNSTATB0 = 0;
    sbit  CNSTATB0_bit at CNSTATB.B0;

sfr atomic unsigned long   volatile ANSELC           absolute 0xBF886200;
sfr unsigned long   volatile ANSELCCLR        absolute 0xBF886204;
sfr unsigned long   volatile ANSELCSET        absolute 0xBF886208;
sfr unsigned long   volatile ANSELCINV        absolute 0xBF88620C;
    // ANSELC bits
    const register unsigned short int ANSC3 = 3;
    sbit  ANSC3_bit at ANSELC.B3;
    const register unsigned short int ANSC2 = 2;
    sbit  ANSC2_bit at ANSELC.B2;
    const register unsigned short int ANSC1 = 1;
    sbit  ANSC1_bit at ANSELC.B1;
    const register unsigned short int ANSC0 = 0;
    sbit  ANSC0_bit at ANSELC.B0;

sfr atomic unsigned long   volatile TRISC            absolute 0xBF886210;
sfr unsigned long   volatile TRISCCLR         absolute 0xBF886214;
sfr unsigned long   volatile TRISCSET         absolute 0xBF886218;
sfr unsigned long   volatile TRISCINV         absolute 0xBF88621C;
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

sfr atomic unsigned long   volatile PORTC            absolute 0xBF886220;
sfr unsigned long   volatile PORTCCLR         absolute 0xBF886224;
sfr unsigned long   volatile PORTCSET         absolute 0xBF886228;
sfr unsigned long   volatile PORTCINV         absolute 0xBF88622C;
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

sfr atomic unsigned long   volatile LATC             absolute 0xBF886230;
sfr unsigned long   volatile LATCCLR          absolute 0xBF886234;
sfr unsigned long   volatile LATCSET          absolute 0xBF886238;
sfr unsigned long   volatile LATCINV          absolute 0xBF88623C;
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

sfr atomic unsigned long   volatile ODCC             absolute 0xBF886240;
sfr unsigned long   volatile ODCCCLR          absolute 0xBF886244;
sfr unsigned long   volatile ODCCSET          absolute 0xBF886248;
sfr unsigned long   volatile ODCCINV          absolute 0xBF88624C;
    // ODCC bits
    const register unsigned short int ODCC9 = 9;
    sbit  ODCC9_bit at ODCC.B9;
    const register unsigned short int ODCC8 = 8;
    sbit  ODCC8_bit at ODCC.B8;
    const register unsigned short int ODCC7 = 7;
    sbit  ODCC7_bit at ODCC.B7;
    const register unsigned short int ODCC6 = 6;
    sbit  ODCC6_bit at ODCC.B6;
    const register unsigned short int ODCC5 = 5;
    sbit  ODCC5_bit at ODCC.B5;
    const register unsigned short int ODCC4 = 4;
    sbit  ODCC4_bit at ODCC.B4;

sfr atomic unsigned long   volatile CNPUC            absolute 0xBF886250;
sfr unsigned long   volatile CNPUCCLR         absolute 0xBF886254;
sfr unsigned long   volatile CNPUCSET         absolute 0xBF886258;
sfr unsigned long   volatile CNPUCINV         absolute 0xBF88625C;
    // CNPUC bits
    const register unsigned short int CNPUC9 = 9;
    sbit  CNPUC9_bit at CNPUC.B9;
    const register unsigned short int CNPUC8 = 8;
    sbit  CNPUC8_bit at CNPUC.B8;
    const register unsigned short int CNPUC7 = 7;
    sbit  CNPUC7_bit at CNPUC.B7;
    const register unsigned short int CNPUC6 = 6;
    sbit  CNPUC6_bit at CNPUC.B6;
    const register unsigned short int CNPUC5 = 5;
    sbit  CNPUC5_bit at CNPUC.B5;
    const register unsigned short int CNPUC4 = 4;
    sbit  CNPUC4_bit at CNPUC.B4;
    const register unsigned short int CNPUC3 = 3;
    sbit  CNPUC3_bit at CNPUC.B3;
    const register unsigned short int CNPUC2 = 2;
    sbit  CNPUC2_bit at CNPUC.B2;
    const register unsigned short int CNPUC1 = 1;
    sbit  CNPUC1_bit at CNPUC.B1;
    const register unsigned short int CNPUC0 = 0;
    sbit  CNPUC0_bit at CNPUC.B0;

sfr atomic unsigned long   volatile CNPDC            absolute 0xBF886260;
sfr unsigned long   volatile CNPDCCLR         absolute 0xBF886264;
sfr unsigned long   volatile CNPDCSET         absolute 0xBF886268;
sfr unsigned long   volatile CNPDCINV         absolute 0xBF88626C;
    // CNPDC bits
    const register unsigned short int CNPDC9 = 9;
    sbit  CNPDC9_bit at CNPDC.B9;
    const register unsigned short int CNPDC8 = 8;
    sbit  CNPDC8_bit at CNPDC.B8;
    const register unsigned short int CNPDC7 = 7;
    sbit  CNPDC7_bit at CNPDC.B7;
    const register unsigned short int CNPDC6 = 6;
    sbit  CNPDC6_bit at CNPDC.B6;
    const register unsigned short int CNPDC5 = 5;
    sbit  CNPDC5_bit at CNPDC.B5;
    const register unsigned short int CNPDC4 = 4;
    sbit  CNPDC4_bit at CNPDC.B4;
    const register unsigned short int CNPDC3 = 3;
    sbit  CNPDC3_bit at CNPDC.B3;
    const register unsigned short int CNPDC2 = 2;
    sbit  CNPDC2_bit at CNPDC.B2;
    const register unsigned short int CNPDC1 = 1;
    sbit  CNPDC1_bit at CNPDC.B1;
    const register unsigned short int CNPDC0 = 0;
    sbit  CNPDC0_bit at CNPDC.B0;

sfr atomic unsigned long   volatile CNCONC           absolute 0xBF886270;
sfr unsigned long   volatile CNCONCCLR        absolute 0xBF886274;
sfr unsigned long   volatile CNCONCSET        absolute 0xBF886278;
sfr unsigned long   volatile CNCONCINV        absolute 0xBF88627C;
    // CNCONC bits
    sbit  ON__CNCONC_bit at CNCONC.B15;
    sbit  SIDL_CNCONC_bit at CNCONC.B13;

sfr atomic unsigned long   volatile CNENC            absolute 0xBF886280;
sfr unsigned long   volatile CNENCCLR         absolute 0xBF886284;
sfr unsigned long   volatile CNENCSET         absolute 0xBF886288;
sfr unsigned long   volatile CNENCINV         absolute 0xBF88628C;
    // CNENC bits
    const register unsigned short int CNIEC9 = 9;
    sbit  CNIEC9_bit at CNENC.B9;
    const register unsigned short int CNIEC8 = 8;
    sbit  CNIEC8_bit at CNENC.B8;
    const register unsigned short int CNIEC7 = 7;
    sbit  CNIEC7_bit at CNENC.B7;
    const register unsigned short int CNIEC6 = 6;
    sbit  CNIEC6_bit at CNENC.B6;
    const register unsigned short int CNIEC5 = 5;
    sbit  CNIEC5_bit at CNENC.B5;
    const register unsigned short int CNIEC4 = 4;
    sbit  CNIEC4_bit at CNENC.B4;
    const register unsigned short int CNIEC3 = 3;
    sbit  CNIEC3_bit at CNENC.B3;
    const register unsigned short int CNIEC2 = 2;
    sbit  CNIEC2_bit at CNENC.B2;
    const register unsigned short int CNIEC1 = 1;
    sbit  CNIEC1_bit at CNENC.B1;
    const register unsigned short int CNIEC0 = 0;
    sbit  CNIEC0_bit at CNENC.B0;

sfr atomic unsigned long   volatile CNSTATC          absolute 0xBF886290;
sfr unsigned long   volatile CNSTATCCLR       absolute 0xBF886294;
sfr unsigned long   volatile CNSTATCSET       absolute 0xBF886298;
sfr unsigned long   volatile CNSTATCINV       absolute 0xBF88629C;
    // CNSTATC bits
    const register unsigned short int CNSTATC9 = 9;
    sbit  CNSTATC9_bit at CNSTATC.B9;
    const register unsigned short int CNSTATC8 = 8;
    sbit  CNSTATC8_bit at CNSTATC.B8;
    const register unsigned short int CNSTATC7 = 7;
    sbit  CNSTATC7_bit at CNSTATC.B7;
    const register unsigned short int CNSTATC6 = 6;
    sbit  CNSTATC6_bit at CNSTATC.B6;
    const register unsigned short int CNSTATC5 = 5;
    sbit  CNSTATC5_bit at CNSTATC.B5;
    const register unsigned short int CNSTATC4 = 4;
    sbit  CNSTATC4_bit at CNSTATC.B4;
    const register unsigned short int CNSTATC3 = 3;
    sbit  CNSTATC3_bit at CNSTATC.B3;
    const register unsigned short int CNSTATC2 = 2;
    sbit  CNSTATC2_bit at CNSTATC.B2;
    const register unsigned short int CNSTATC1 = 1;
    sbit  CNSTATC1_bit at CNSTATC.B1;
    const register unsigned short int CNSTATC0 = 0;
    sbit  CNSTATC0_bit at CNSTATC.B0;


    // Start of structures implementation


typedef struct tagWDTCONBITS {
union {
  struct {
    unsigned WDTCLR:1;
    unsigned WDTWINEN:1;
    unsigned SWDTPS:5;
    unsigned :8;
    unsigned ON:1;
  };
  struct {
    unsigned :2;
    unsigned SWDTPS0:1;
    unsigned SWDTPS1:1;
    unsigned SWDTPS2:1;
    unsigned SWDTPS3:1;
    unsigned SWDTPS4:1;
  };
  struct {
    unsigned :2;
    unsigned WDTPSTA:5;
  };
  struct {
    unsigned :2;
    unsigned WDTPS:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeWDTCONBITS;
sfr atomic volatile typeWDTCONBITS WDTCONbits absolute 0xBF800000;
sfr volatile typeWDTCONBITS WDTCONCLRbits absolute 0xBF800004;
sfr volatile typeWDTCONBITS WDTCONSETbits absolute 0xBF800008;
sfr volatile typeWDTCONBITS WDTCONINVbits absolute 0xBF80000C;

typedef struct tagRTCCONBITS {
union {
  struct {
    unsigned RTCOE:1;
    unsigned HALFSEC:1;
    unsigned RTCSYNC:1;
    unsigned RTCWREN:1;
    unsigned :2;
    unsigned RTCCLKON:1;
    unsigned RTSECSEL:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned CAL:10;
  };
  struct {
    unsigned w:32;
  };
};
} typeRTCCONBITS;
sfr atomic volatile typeRTCCONBITS RTCCONbits absolute 0xBF800200;
sfr volatile typeRTCCONBITS RTCCONCLRbits absolute 0xBF800204;
sfr volatile typeRTCCONBITS RTCCONSETbits absolute 0xBF800208;
sfr volatile typeRTCCONBITS RTCCONINVbits absolute 0xBF80020C;

typedef struct tagRTCALRMBITS {
union {
  struct {
    unsigned ARPT:8;
    unsigned AMASK:4;
    unsigned ALRMSYNC:1;
    unsigned PIV:1;
    unsigned CHIME:1;
    unsigned ALRMEN:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeRTCALRMBITS;
sfr atomic volatile typeRTCALRMBITS RTCALRMbits absolute 0xBF800210;
sfr volatile typeRTCALRMBITS RTCALRMCLRbits absolute 0xBF800214;
sfr volatile typeRTCALRMBITS RTCALRMSETbits absolute 0xBF800218;
sfr volatile typeRTCALRMBITS RTCALRMINVbits absolute 0xBF80021C;

typedef struct tagRTCTIMEBITS {
union {
  struct {
    unsigned :8;
    unsigned SEC01:4;
    unsigned SEC10:4;
    unsigned MIN01:4;
    unsigned MIN10:4;
    unsigned HR01:4;
    unsigned HR10:4;
  };
  struct {
    unsigned w:32;
  };
};
} typeRTCTIMEBITS;
sfr atomic volatile typeRTCTIMEBITS RTCTIMEbits absolute 0xBF800220;
sfr volatile typeRTCTIMEBITS RTCTIMECLRbits absolute 0xBF800224;
sfr volatile typeRTCTIMEBITS RTCTIMESETbits absolute 0xBF800228;
sfr volatile typeRTCTIMEBITS RTCTIMEINVbits absolute 0xBF80022C;

typedef struct tagRTCDATEBITS {
union {
  struct {
    unsigned WDAY01:4;
    unsigned :4;
    unsigned DAY01:4;
    unsigned DAY10:4;
    unsigned MONTH01:4;
    unsigned MONTH10:4;
    unsigned YEAR01:4;
    unsigned YEAR10:4;
  };
  struct {
    unsigned w:32;
  };
};
} typeRTCDATEBITS;
sfr atomic volatile typeRTCDATEBITS RTCDATEbits absolute 0xBF800230;
sfr volatile typeRTCDATEBITS RTCDATECLRbits absolute 0xBF800234;
sfr volatile typeRTCDATEBITS RTCDATESETbits absolute 0xBF800238;
sfr volatile typeRTCDATEBITS RTCDATEINVbits absolute 0xBF80023C;

typedef struct tagALRMTIMEBITS {
union {
  struct {
    unsigned :8;
    unsigned SEC01:4;
    unsigned SEC10:4;
    unsigned MIN01:4;
    unsigned MIN10:4;
    unsigned HR01:4;
    unsigned HR10:4;
  };
  struct {
    unsigned w:32;
  };
};
} typeALRMTIMEBITS;
sfr atomic volatile typeALRMTIMEBITS ALRMTIMEbits absolute 0xBF800240;
sfr volatile typeALRMTIMEBITS ALRMTIMECLRbits absolute 0xBF800244;
sfr volatile typeALRMTIMEBITS ALRMTIMESETbits absolute 0xBF800248;
sfr volatile typeALRMTIMEBITS ALRMTIMEINVbits absolute 0xBF80024C;

typedef struct tagALRMDATEBITS {
union {
  struct {
    unsigned WDAY01:4;
    unsigned :4;
    unsigned DAY01:4;
    unsigned DAY10:4;
    unsigned MONTH01:4;
    unsigned MONTH10:4;
  };
  struct {
    unsigned w:32;
  };
};
} typeALRMDATEBITS;
sfr atomic volatile typeALRMDATEBITS ALRMDATEbits absolute 0xBF800250;
sfr volatile typeALRMDATEBITS ALRMDATECLRbits absolute 0xBF800254;
sfr volatile typeALRMDATEBITS ALRMDATESETbits absolute 0xBF800258;
sfr volatile typeALRMDATEBITS ALRMDATEINVbits absolute 0xBF80025C;

typedef struct tagT1CONBITS {
union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned TSYNC:1;
    unsigned :1;
    unsigned TCKPS:2;
    unsigned :1;
    unsigned TGATE:1;
    unsigned :3;
    unsigned TWIP:1;
    unsigned TWDIS:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeT1CONBITS;
sfr atomic volatile typeT1CONBITS T1CONbits absolute 0xBF800600;
sfr volatile typeT1CONBITS T1CONCLRbits absolute 0xBF800604;
sfr volatile typeT1CONBITS T1CONSETbits absolute 0xBF800608;
sfr volatile typeT1CONBITS T1CONINVbits absolute 0xBF80060C;
sfr atomic volatile typeT1CONBITS TMR1bits absolute 0xBF800610;
sfr volatile typeT1CONBITS TMR1CLRbits absolute 0xBF800614;
sfr volatile typeT1CONBITS TMR1SETbits absolute 0xBF800618;
sfr volatile typeT1CONBITS TMR1INVbits absolute 0xBF80061C;
sfr atomic volatile typeT1CONBITS PR1bits absolute 0xBF800620;
sfr volatile typeT1CONBITS PR1CLRbits absolute 0xBF800624;
sfr volatile typeT1CONBITS PR1SETbits absolute 0xBF800628;
sfr volatile typeT1CONBITS PR1INVbits absolute 0xBF80062C;

typedef struct tagT2CONBITS {
union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :1;
    unsigned T32:1;
    unsigned TCKPS:3;
    unsigned TGATE:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned TCKPS2:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeT2CONBITS;
sfr atomic volatile typeT2CONBITS T2CONbits absolute 0xBF800800;
sfr volatile typeT2CONBITS T2CONCLRbits absolute 0xBF800804;
sfr volatile typeT2CONBITS T2CONSETbits absolute 0xBF800808;
sfr volatile typeT2CONBITS T2CONINVbits absolute 0xBF80080C;
sfr atomic volatile typeT2CONBITS TMR2bits absolute 0xBF800810;
sfr volatile typeT2CONBITS TMR2CLRbits absolute 0xBF800814;
sfr volatile typeT2CONBITS TMR2SETbits absolute 0xBF800818;
sfr volatile typeT2CONBITS TMR2INVbits absolute 0xBF80081C;
sfr atomic volatile typeT2CONBITS PR2bits absolute 0xBF800820;
sfr volatile typeT2CONBITS PR2CLRbits absolute 0xBF800824;
sfr volatile typeT2CONBITS PR2SETbits absolute 0xBF800828;
sfr volatile typeT2CONBITS PR2INVbits absolute 0xBF80082C;

typedef struct tagT3CONBITS {
union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :2;
    unsigned TCKPS:3;
    unsigned TGATE:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned TCKPS2:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeT3CONBITS;
sfr atomic volatile typeT3CONBITS T3CONbits absolute 0xBF800A00;
sfr volatile typeT3CONBITS T3CONCLRbits absolute 0xBF800A04;
sfr volatile typeT3CONBITS T3CONSETbits absolute 0xBF800A08;
sfr volatile typeT3CONBITS T3CONINVbits absolute 0xBF800A0C;
sfr atomic volatile typeT3CONBITS TMR3bits absolute 0xBF800A10;
sfr volatile typeT3CONBITS TMR3CLRbits absolute 0xBF800A14;
sfr volatile typeT3CONBITS TMR3SETbits absolute 0xBF800A18;
sfr volatile typeT3CONBITS TMR3INVbits absolute 0xBF800A1C;
sfr atomic volatile typeT3CONBITS PR3bits absolute 0xBF800A20;
sfr volatile typeT3CONBITS PR3CLRbits absolute 0xBF800A24;
sfr volatile typeT3CONBITS PR3SETbits absolute 0xBF800A28;
sfr volatile typeT3CONBITS PR3INVbits absolute 0xBF800A2C;

typedef struct tagT4CONBITS {
union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :1;
    unsigned T32:1;
    unsigned TCKPS:3;
    unsigned TGATE:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned TCKPS2:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeT4CONBITS;
sfr atomic volatile typeT4CONBITS T4CONbits absolute 0xBF800C00;
sfr volatile typeT4CONBITS T4CONCLRbits absolute 0xBF800C04;
sfr volatile typeT4CONBITS T4CONSETbits absolute 0xBF800C08;
sfr volatile typeT4CONBITS T4CONINVbits absolute 0xBF800C0C;
sfr atomic volatile typeT4CONBITS TMR4bits absolute 0xBF800C10;
sfr volatile typeT4CONBITS TMR4CLRbits absolute 0xBF800C14;
sfr volatile typeT4CONBITS TMR4SETbits absolute 0xBF800C18;
sfr volatile typeT4CONBITS TMR4INVbits absolute 0xBF800C1C;
sfr atomic volatile typeT4CONBITS PR4bits absolute 0xBF800C20;
sfr volatile typeT4CONBITS PR4CLRbits absolute 0xBF800C24;
sfr volatile typeT4CONBITS PR4SETbits absolute 0xBF800C28;
sfr volatile typeT4CONBITS PR4INVbits absolute 0xBF800C2C;

typedef struct tagT5CONBITS {
union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :2;
    unsigned TCKPS:3;
    unsigned TGATE:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned TCKPS2:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeT5CONBITS;
sfr atomic volatile typeT5CONBITS T5CONbits absolute 0xBF800E00;
sfr volatile typeT5CONBITS T5CONCLRbits absolute 0xBF800E04;
sfr volatile typeT5CONBITS T5CONSETbits absolute 0xBF800E08;
sfr volatile typeT5CONBITS T5CONINVbits absolute 0xBF800E0C;
sfr atomic volatile typeT5CONBITS TMR5bits absolute 0xBF800E10;
sfr volatile typeT5CONBITS TMR5CLRbits absolute 0xBF800E14;
sfr volatile typeT5CONBITS TMR5SETbits absolute 0xBF800E18;
sfr volatile typeT5CONBITS TMR5INVbits absolute 0xBF800E1C;
sfr atomic volatile typeT5CONBITS PR5bits absolute 0xBF800E20;
sfr volatile typeT5CONBITS PR5CLRbits absolute 0xBF800E24;
sfr volatile typeT5CONBITS PR5SETbits absolute 0xBF800E28;
sfr volatile typeT5CONBITS PR5INVbits absolute 0xBF800E2C;

typedef struct tagIC1CONBITS {
union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned C32:1;
    unsigned FEDGE:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
  struct {
    unsigned :13;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeIC1CONBITS;
sfr atomic volatile typeIC1CONBITS IC1CONbits absolute 0xBF802000;
sfr volatile typeIC1CONBITS IC1CONCLRbits absolute 0xBF802004;
sfr volatile typeIC1CONBITS IC1CONSETbits absolute 0xBF802008;
sfr volatile typeIC1CONBITS IC1CONINVbits absolute 0xBF80200C;
sfr volatile typeIC1CONBITS IC1BUFbits absolute 0xBF802010;

typedef struct tagIC2CONBITS {
union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned C32:1;
    unsigned FEDGE:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
  struct {
    unsigned :13;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeIC2CONBITS;
sfr atomic volatile typeIC2CONBITS IC2CONbits absolute 0xBF802200;
sfr volatile typeIC2CONBITS IC2CONCLRbits absolute 0xBF802204;
sfr volatile typeIC2CONBITS IC2CONSETbits absolute 0xBF802208;
sfr volatile typeIC2CONBITS IC2CONINVbits absolute 0xBF80220C;
sfr volatile typeIC2CONBITS IC2BUFbits absolute 0xBF802210;

typedef struct tagIC3CONBITS {
union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned C32:1;
    unsigned FEDGE:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
  struct {
    unsigned :13;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeIC3CONBITS;
sfr atomic volatile typeIC3CONBITS IC3CONbits absolute 0xBF802400;
sfr volatile typeIC3CONBITS IC3CONCLRbits absolute 0xBF802404;
sfr volatile typeIC3CONBITS IC3CONSETbits absolute 0xBF802408;
sfr volatile typeIC3CONBITS IC3CONINVbits absolute 0xBF80240C;
sfr volatile typeIC3CONBITS IC3BUFbits absolute 0xBF802410;

typedef struct tagIC4CONBITS {
union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned C32:1;
    unsigned FEDGE:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
  struct {
    unsigned :13;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeIC4CONBITS;
sfr atomic volatile typeIC4CONBITS IC4CONbits absolute 0xBF802600;
sfr volatile typeIC4CONBITS IC4CONCLRbits absolute 0xBF802604;
sfr volatile typeIC4CONBITS IC4CONSETbits absolute 0xBF802608;
sfr volatile typeIC4CONBITS IC4CONINVbits absolute 0xBF80260C;
sfr volatile typeIC4CONBITS IC4BUFbits absolute 0xBF802610;

typedef struct tagIC5CONBITS {
union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned C32:1;
    unsigned FEDGE:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
  struct {
    unsigned :13;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeIC5CONBITS;
sfr atomic volatile typeIC5CONBITS IC5CONbits absolute 0xBF802800;
sfr volatile typeIC5CONBITS IC5CONCLRbits absolute 0xBF802804;
sfr volatile typeIC5CONBITS IC5CONSETbits absolute 0xBF802808;
sfr volatile typeIC5CONBITS IC5CONINVbits absolute 0xBF80280C;
sfr volatile typeIC5CONBITS IC5BUFbits absolute 0xBF802810;

typedef struct tagOC1CONBITS {
union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeOC1CONBITS;
sfr atomic volatile typeOC1CONBITS OC1CONbits absolute 0xBF803000;
sfr volatile typeOC1CONBITS OC1CONCLRbits absolute 0xBF803004;
sfr volatile typeOC1CONBITS OC1CONSETbits absolute 0xBF803008;
sfr volatile typeOC1CONBITS OC1CONINVbits absolute 0xBF80300C;
sfr atomic volatile typeOC1CONBITS OC1Rbits absolute 0xBF803010;
sfr volatile typeOC1CONBITS OC1RCLRbits absolute 0xBF803014;
sfr volatile typeOC1CONBITS OC1RSETbits absolute 0xBF803018;
sfr volatile typeOC1CONBITS OC1RINVbits absolute 0xBF80301C;
sfr atomic volatile typeOC1CONBITS OC1RSbits absolute 0xBF803020;
sfr volatile typeOC1CONBITS OC1RSCLRbits absolute 0xBF803024;
sfr volatile typeOC1CONBITS OC1RSSETbits absolute 0xBF803028;
sfr volatile typeOC1CONBITS OC1RSINVbits absolute 0xBF80302C;

typedef struct tagOC2CONBITS {
union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeOC2CONBITS;
sfr atomic volatile typeOC2CONBITS OC2CONbits absolute 0xBF803200;
sfr volatile typeOC2CONBITS OC2CONCLRbits absolute 0xBF803204;
sfr volatile typeOC2CONBITS OC2CONSETbits absolute 0xBF803208;
sfr volatile typeOC2CONBITS OC2CONINVbits absolute 0xBF80320C;
sfr atomic volatile typeOC2CONBITS OC2Rbits absolute 0xBF803210;
sfr volatile typeOC2CONBITS OC2RCLRbits absolute 0xBF803214;
sfr volatile typeOC2CONBITS OC2RSETbits absolute 0xBF803218;
sfr volatile typeOC2CONBITS OC2RINVbits absolute 0xBF80321C;
sfr atomic volatile typeOC2CONBITS OC2RSbits absolute 0xBF803220;
sfr volatile typeOC2CONBITS OC2RSCLRbits absolute 0xBF803224;
sfr volatile typeOC2CONBITS OC2RSSETbits absolute 0xBF803228;
sfr volatile typeOC2CONBITS OC2RSINVbits absolute 0xBF80322C;

typedef struct tagOC3CONBITS {
union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeOC3CONBITS;
sfr atomic volatile typeOC3CONBITS OC3CONbits absolute 0xBF803400;
sfr volatile typeOC3CONBITS OC3CONCLRbits absolute 0xBF803404;
sfr volatile typeOC3CONBITS OC3CONSETbits absolute 0xBF803408;
sfr volatile typeOC3CONBITS OC3CONINVbits absolute 0xBF80340C;
sfr atomic volatile typeOC3CONBITS OC3Rbits absolute 0xBF803410;
sfr volatile typeOC3CONBITS OC3RCLRbits absolute 0xBF803414;
sfr volatile typeOC3CONBITS OC3RSETbits absolute 0xBF803418;
sfr volatile typeOC3CONBITS OC3RINVbits absolute 0xBF80341C;
sfr atomic volatile typeOC3CONBITS OC3RSbits absolute 0xBF803420;
sfr volatile typeOC3CONBITS OC3RSCLRbits absolute 0xBF803424;
sfr volatile typeOC3CONBITS OC3RSSETbits absolute 0xBF803428;
sfr volatile typeOC3CONBITS OC3RSINVbits absolute 0xBF80342C;

typedef struct tagOC4CONBITS {
union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeOC4CONBITS;
sfr atomic volatile typeOC4CONBITS OC4CONbits absolute 0xBF803600;
sfr volatile typeOC4CONBITS OC4CONCLRbits absolute 0xBF803604;
sfr volatile typeOC4CONBITS OC4CONSETbits absolute 0xBF803608;
sfr volatile typeOC4CONBITS OC4CONINVbits absolute 0xBF80360C;
sfr atomic volatile typeOC4CONBITS OC4Rbits absolute 0xBF803610;
sfr volatile typeOC4CONBITS OC4RCLRbits absolute 0xBF803614;
sfr volatile typeOC4CONBITS OC4RSETbits absolute 0xBF803618;
sfr volatile typeOC4CONBITS OC4RINVbits absolute 0xBF80361C;
sfr atomic volatile typeOC4CONBITS OC4RSbits absolute 0xBF803620;
sfr volatile typeOC4CONBITS OC4RSCLRbits absolute 0xBF803624;
sfr volatile typeOC4CONBITS OC4RSSETbits absolute 0xBF803628;
sfr volatile typeOC4CONBITS OC4RSINVbits absolute 0xBF80362C;

typedef struct tagOC5CONBITS {
union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeOC5CONBITS;
sfr atomic volatile typeOC5CONBITS OC5CONbits absolute 0xBF803800;
sfr volatile typeOC5CONBITS OC5CONCLRbits absolute 0xBF803804;
sfr volatile typeOC5CONBITS OC5CONSETbits absolute 0xBF803808;
sfr volatile typeOC5CONBITS OC5CONINVbits absolute 0xBF80380C;
sfr atomic volatile typeOC5CONBITS OC5Rbits absolute 0xBF803810;
sfr volatile typeOC5CONBITS OC5RCLRbits absolute 0xBF803814;
sfr volatile typeOC5CONBITS OC5RSETbits absolute 0xBF803818;
sfr volatile typeOC5CONBITS OC5RINVbits absolute 0xBF80381C;
sfr atomic volatile typeOC5CONBITS OC5RSbits absolute 0xBF803820;
sfr volatile typeOC5CONBITS OC5RSCLRbits absolute 0xBF803824;
sfr volatile typeOC5CONBITS OC5RSSETbits absolute 0xBF803828;
sfr volatile typeOC5CONBITS OC5RSINVbits absolute 0xBF80382C;

typedef struct tagI2C1CONBITS {
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
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeI2C1CONBITS;
sfr atomic volatile typeI2C1CONBITS I2C1CONbits absolute 0xBF805000;

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
    unsigned :3;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeI2C1STATBITS;
sfr atomic volatile typeI2C1STATBITS I2C1STATbits absolute 0xBF805010;
sfr atomic volatile typeI2C1STATBITS I2C1ADDbits absolute 0xBF805020;
sfr atomic volatile typeI2C1STATBITS I2C1MSKbits absolute 0xBF805030;
sfr atomic volatile typeI2C1STATBITS I2C1BRGbits absolute 0xBF805040;
sfr atomic volatile typeI2C1STATBITS I2C1TRNbits absolute 0xBF805050;
sfr volatile typeI2C1STATBITS I2C1RCVbits absolute 0xBF805060;

typedef struct tagI2C2CONBITS {
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
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeI2C2CONBITS;
sfr atomic volatile typeI2C2CONBITS I2C2CONbits absolute 0xBF805100;

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
    unsigned :3;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeI2C2STATBITS;
sfr atomic volatile typeI2C2STATBITS I2C2STATbits absolute 0xBF805110;
sfr atomic volatile typeI2C2STATBITS I2C2ADDbits absolute 0xBF805120;
sfr atomic volatile typeI2C2STATBITS I2C2MSKbits absolute 0xBF805130;
sfr atomic volatile typeI2C2STATBITS I2C2BRGbits absolute 0xBF805140;
sfr atomic volatile typeI2C2STATBITS I2C2TRNbits absolute 0xBF805150;
sfr volatile typeI2C2STATBITS I2C2RCVbits absolute 0xBF805160;

typedef struct tagSPI1CONBITS {
union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned DISSDI:1;
    unsigned MSTEN:1;
    unsigned CKP:1;
    unsigned SSEN:1;
    unsigned CKE:1;
    unsigned SMP:1;
    unsigned MODE16:1;
    unsigned MODE32:1;
    unsigned DISSDO:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned ENHBUF:1;
    unsigned SPIFE:1;
    unsigned :5;
    unsigned MCLKSEL:1;
    unsigned FRMCNT:3;
    unsigned FRMSYPW:1;
    unsigned MSSEN:1;
    unsigned FRMPOL:1;
    unsigned FRMSYNC:1;
    unsigned FRMEN:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeSPI1CONBITS;
sfr atomic volatile typeSPI1CONBITS SPI1CONbits absolute 0xBF805800;

typedef struct tagSPI1STATBITS {
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
    unsigned :3;
    unsigned TXBUFELM:5;
    unsigned :3;
    unsigned RXBUFELM:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeSPI1STATBITS;
sfr atomic volatile typeSPI1STATBITS SPI1STATbits absolute 0xBF805810;
sfr volatile typeSPI1STATBITS SPI1BUFbits absolute 0xBF805820;
sfr atomic volatile typeSPI1STATBITS SPI1BRGbits absolute 0xBF805830;

typedef struct tagSPI1CON2BITS {
union {
  struct {
    unsigned AUDMOD:2;
    unsigned :1;
    unsigned AUDMONO:1;
    unsigned :3;
    unsigned AUDEN:1;
    unsigned IGNTUR:1;
    unsigned IGNROV:1;
    unsigned SPITUREN:1;
    unsigned SPIROVEN:1;
    unsigned FRMERREN:1;
    unsigned :2;
    unsigned SPISGNEXT:1;
  };
  struct {
    unsigned AUDMOD0:1;
    unsigned AUDMOD1:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeSPI1CON2BITS;
sfr atomic volatile typeSPI1CON2BITS SPI1CON2bits absolute 0xBF805840;

typedef struct tagSPI2CONBITS {
union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned DISSDI:1;
    unsigned MSTEN:1;
    unsigned CKP:1;
    unsigned SSEN:1;
    unsigned CKE:1;
    unsigned SMP:1;
    unsigned MODE16:1;
    unsigned MODE32:1;
    unsigned DISSDO:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned ENHBUF:1;
    unsigned SPIFE:1;
    unsigned :5;
    unsigned MCLKSEL:1;
    unsigned FRMCNT:3;
    unsigned FRMSYPW:1;
    unsigned MSSEN:1;
    unsigned FRMPOL:1;
    unsigned FRMSYNC:1;
    unsigned FRMEN:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeSPI2CONBITS;
sfr atomic volatile typeSPI2CONBITS SPI2CONbits absolute 0xBF805A00;

typedef struct tagSPI2STATBITS {
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
    unsigned :3;
    unsigned TXBUFELM:5;
    unsigned :3;
    unsigned RXBUFELM:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeSPI2STATBITS;
sfr atomic volatile typeSPI2STATBITS SPI2STATbits absolute 0xBF805A10;
sfr volatile typeSPI2STATBITS SPI2BUFbits absolute 0xBF805A20;
sfr atomic volatile typeSPI2STATBITS SPI2BRGbits absolute 0xBF805A30;

typedef struct tagSPI2CON2BITS {
union {
  struct {
    unsigned AUDMOD:2;
    unsigned :1;
    unsigned AUDMONO:1;
    unsigned :3;
    unsigned AUDEN:1;
    unsigned IGNTUR:1;
    unsigned IGNROV:1;
    unsigned SPITUREN:1;
    unsigned SPIROVEN:1;
    unsigned FRMERREN:1;
    unsigned :2;
    unsigned SPISGNEXT:1;
  };
  struct {
    unsigned AUDMOD0:1;
    unsigned AUDMOD1:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeSPI2CON2BITS;
sfr atomic volatile typeSPI2CON2BITS SPI2CON2bits absolute 0xBF805A40;

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
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeU1MODEBITS;
sfr atomic volatile typeU1MODEBITS U1MODEbits absolute 0xBF806000;
sfr volatile typeU1MODEBITS U1MODECLRbits absolute 0xBF806004;
sfr volatile typeU1MODEBITS U1MODESETbits absolute 0xBF806008;
sfr volatile typeU1MODEBITS U1MODEINVbits absolute 0xBF80600C;

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
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
};
} typeU1STABITS;
sfr atomic volatile typeU1STABITS U1STAbits absolute 0xBF806010;
sfr volatile typeU1STABITS U1STACLRbits absolute 0xBF806014;
sfr volatile typeU1STABITS U1STASETbits absolute 0xBF806018;
sfr volatile typeU1STABITS U1STAINVbits absolute 0xBF80601C;
sfr volatile typeU1STABITS U1TXREGbits absolute 0xBF806020;
sfr volatile typeU1STABITS U1RXREGbits absolute 0xBF806030;
sfr atomic volatile typeU1STABITS U1BRGbits absolute 0xBF806040;
sfr volatile typeU1STABITS U1BRGCLRbits absolute 0xBF806044;
sfr volatile typeU1STABITS U1BRGSETbits absolute 0xBF806048;
sfr volatile typeU1STABITS U1BRGINVbits absolute 0xBF80604C;

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
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeU2MODEBITS;
sfr atomic volatile typeU2MODEBITS U2MODEbits absolute 0xBF806200;

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
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
};
} typeU2STABITS;
sfr atomic volatile typeU2STABITS U2STAbits absolute 0xBF806210;

typedef struct tagPMCONBITS {
union {
  struct {
    unsigned RDSP:1;
    unsigned WRSP:1;
    unsigned :1;
    unsigned CS1P:1;
    unsigned :1;
    unsigned ALP:1;
    unsigned CSF:2;
    unsigned PTRDEN:1;
    unsigned PTWREN:1;
    unsigned PMPTTL:1;
    unsigned ADRMUX:2;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :6;
    unsigned CSF0:1;
    unsigned CSF1:1;
    unsigned :3;
    unsigned ADRMUX0:1;
    unsigned ADRMUX1:1;
  };
  struct {
    unsigned :13;
    unsigned PSIDL:1;
    unsigned :1;
    unsigned PMPEN:1;
  };
  struct {
    unsigned w:32;
  };
};
} typePMCONBITS;
sfr atomic volatile typePMCONBITS PMCONbits absolute 0xBF807000;
sfr volatile typePMCONBITS PMCONCLRbits absolute 0xBF807004;
sfr volatile typePMCONBITS PMCONSETbits absolute 0xBF807008;
sfr volatile typePMCONBITS PMCONINVbits absolute 0xBF80700C;

typedef struct tagPMMODEBITS {
union {
  struct {
    unsigned WAITE:2;
    unsigned WAITM:4;
    unsigned WAITB:2;
    unsigned MODE:2;
    unsigned :1;
    unsigned INCM:2;
    unsigned IRQM:2;
    unsigned BUSY:1;
  };
  struct {
    unsigned WAITE0:1;
    unsigned WAITE1:1;
    unsigned WAITM0:1;
    unsigned WAITM1:1;
    unsigned WAITM2:1;
    unsigned WAITM3:1;
    unsigned WAITB0:1;
    unsigned WAITB1:1;
    unsigned MODE0:1;
    unsigned MODE1:1;
    unsigned :1;
    unsigned INCM0:1;
    unsigned INCM1:1;
    unsigned IRQM0:1;
    unsigned IRQM1:1;
  };
  struct {
    unsigned w:32;
  };
};
} typePMMODEBITS;
sfr atomic volatile typePMMODEBITS PMMODEbits absolute 0xBF807010;
sfr volatile typePMMODEBITS PMMODECLRbits absolute 0xBF807014;
sfr volatile typePMMODEBITS PMMODESETbits absolute 0xBF807018;
sfr volatile typePMMODEBITS PMMODEINVbits absolute 0xBF80701C;

typedef struct tagPMADDRBITS {
union {
  struct {
    unsigned ADDR:14;
    unsigned CS:2;
  };
  struct {
    unsigned PADDR:14;
  };
  struct {
    unsigned :14;
    unsigned CS1:1;
  };
  struct {
    unsigned w:32;
  };
};
} typePMADDRBITS;
sfr atomic volatile typePMADDRBITS PMADDRbits absolute 0xBF807020;
sfr volatile typePMADDRBITS PMADDRCLRbits absolute 0xBF807024;
sfr volatile typePMADDRBITS PMADDRSETbits absolute 0xBF807028;
sfr volatile typePMADDRBITS PMADDRINVbits absolute 0xBF80702C;
sfr atomic volatile typePMADDRBITS PMDOUTbits absolute 0xBF807030;
sfr volatile typePMADDRBITS PMDOUTCLRbits absolute 0xBF807034;
sfr volatile typePMADDRBITS PMDOUTSETbits absolute 0xBF807038;
sfr volatile typePMADDRBITS PMDOUTINVbits absolute 0xBF80703C;
sfr atomic volatile typePMADDRBITS PMDINbits absolute 0xBF807040;
sfr volatile typePMADDRBITS PMDINCLRbits absolute 0xBF807044;
sfr volatile typePMADDRBITS PMDINSETbits absolute 0xBF807048;
sfr volatile typePMADDRBITS PMDININVbits absolute 0xBF80704C;

typedef struct tagPMAENBITS {
union {
  struct {
    unsigned PTEN:16;
  };
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
  struct {
    unsigned w:32;
  };
};
} typePMAENBITS;
sfr atomic volatile typePMAENBITS PMAENbits absolute 0xBF807050;
sfr volatile typePMAENBITS PMAENCLRbits absolute 0xBF807054;
sfr volatile typePMAENBITS PMAENSETbits absolute 0xBF807058;
sfr volatile typePMAENBITS PMAENINVbits absolute 0xBF80705C;

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
  struct {
    unsigned w:32;
  };
};
} typePMSTATBITS;
sfr atomic volatile typePMSTATBITS PMSTATbits absolute 0xBF807060;
sfr volatile typePMSTATBITS PMSTATCLRbits absolute 0xBF807064;
sfr volatile typePMSTATBITS PMSTATSETbits absolute 0xBF807068;
sfr volatile typePMSTATBITS PMSTATINVbits absolute 0xBF80706C;

typedef struct tagAD1CON1BITS {
union {
  struct {
    unsigned DONE:1;
    unsigned SAMP:1;
    unsigned ASAM:1;
    unsigned :1;
    unsigned CLRASAM:1;
    unsigned SSRC:3;
    unsigned FORM:3;
    unsigned :2;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :5;
    unsigned SSRC0:1;
    unsigned SSRC1:1;
    unsigned SSRC2:1;
    unsigned FORM0:1;
    unsigned FORM1:1;
    unsigned FORM2:1;
  };
  struct {
    unsigned :13;
    unsigned ADSIDL:1;
    unsigned :1;
    unsigned ADON:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeAD1CON1BITS;
sfr atomic volatile typeAD1CON1BITS AD1CON1bits absolute 0xBF809000;
sfr volatile typeAD1CON1BITS AD1CON1CLRbits absolute 0xBF809004;
sfr volatile typeAD1CON1BITS AD1CON1SETbits absolute 0xBF809008;
sfr volatile typeAD1CON1BITS AD1CON1INVbits absolute 0xBF80900C;

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
  struct {
    unsigned w:32;
  };
};
} typeAD1CON2BITS;
sfr atomic volatile typeAD1CON2BITS AD1CON2bits absolute 0xBF809010;
sfr volatile typeAD1CON2BITS AD1CON2CLRbits absolute 0xBF809014;
sfr volatile typeAD1CON2BITS AD1CON2SETbits absolute 0xBF809018;
sfr volatile typeAD1CON2BITS AD1CON2INVbits absolute 0xBF80901C;

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
  struct {
    unsigned w:32;
  };
};
} typeAD1CON3BITS;
sfr atomic volatile typeAD1CON3BITS AD1CON3bits absolute 0xBF809020;
sfr volatile typeAD1CON3BITS AD1CON3CLRbits absolute 0xBF809024;
sfr volatile typeAD1CON3BITS AD1CON3SETbits absolute 0xBF809028;
sfr volatile typeAD1CON3BITS AD1CON3INVbits absolute 0xBF80902C;

typedef struct tagAD1CHSBITS {
union {
  struct {
    unsigned :16;
    unsigned CH0SA:4;
    unsigned :3;
    unsigned CH0NA:1;
    unsigned CH0SB:4;
    unsigned :3;
    unsigned CH0NB:1;
  };
  struct {
    unsigned :16;
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
  struct {
    unsigned w:32;
  };
};
} typeAD1CHSBITS;
sfr atomic volatile typeAD1CHSBITS AD1CHSbits absolute 0xBF809040;
sfr volatile typeAD1CHSBITS AD1CHSCLRbits absolute 0xBF809044;
sfr volatile typeAD1CHSBITS AD1CHSSETbits absolute 0xBF809048;
sfr volatile typeAD1CHSBITS AD1CHSINVbits absolute 0xBF80904C;

typedef struct tagAD1CSSLBITS {
union {
  struct {
    unsigned CSSL:16;
  };
  struct {
    unsigned CSSL0:1;
    unsigned CSSL1:1;
    unsigned CSSL2:1;
    unsigned CSSL3:1;
    unsigned CSSL4:1;
    unsigned CSSL5:1;
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
  };
  struct {
    unsigned w:32;
  };
};
} typeAD1CSSLBITS;
sfr atomic volatile typeAD1CSSLBITS AD1CSSLbits absolute 0xBF809050;
sfr volatile typeAD1CSSLBITS AD1CSSLCLRbits absolute 0xBF809054;
sfr volatile typeAD1CSSLBITS AD1CSSLSETbits absolute 0xBF809058;
sfr volatile typeAD1CSSLBITS AD1CSSLINVbits absolute 0xBF80905C;
sfr volatile typeAD1CSSLBITS ADC1BUF0bits absolute 0xBF809070;
sfr volatile typeAD1CSSLBITS ADC1BUF1bits absolute 0xBF809080;
sfr volatile typeAD1CSSLBITS ADC1BUF2bits absolute 0xBF809090;
sfr volatile typeAD1CSSLBITS ADC1BUF3bits absolute 0xBF8090A0;
sfr volatile typeAD1CSSLBITS ADC1BUF4bits absolute 0xBF8090B0;
sfr volatile typeAD1CSSLBITS ADC1BUF5bits absolute 0xBF8090C0;
sfr volatile typeAD1CSSLBITS ADC1BUF6bits absolute 0xBF8090D0;
sfr volatile typeAD1CSSLBITS ADC1BUF7bits absolute 0xBF8090E0;
sfr volatile typeAD1CSSLBITS ADC1BUF8bits absolute 0xBF8090F0;
sfr volatile typeAD1CSSLBITS ADC1BUF9bits absolute 0xBF809100;
sfr volatile typeAD1CSSLBITS ADC1BUFAbits absolute 0xBF809110;
sfr volatile typeAD1CSSLBITS ADC1BUFBbits absolute 0xBF809120;
sfr volatile typeAD1CSSLBITS ADC1BUFCbits absolute 0xBF809130;
sfr volatile typeAD1CSSLBITS ADC1BUFDbits absolute 0xBF809140;
sfr volatile typeAD1CSSLBITS ADC1BUFEbits absolute 0xBF809150;
sfr volatile typeAD1CSSLBITS ADC1BUFFbits absolute 0xBF809160;

typedef struct tagCVRCONBITS {
union {
  struct {
    unsigned CVR:4;
    unsigned CVRSS:1;
    unsigned CVRR:1;
    unsigned CVROE:1;
    unsigned :8;
    unsigned ON:1;
  };
  struct {
    unsigned CVR0:1;
    unsigned CVR1:1;
    unsigned CVR2:1;
    unsigned CVR3:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCVRCONBITS;
sfr atomic volatile typeCVRCONBITS CVRCONbits absolute 0xBF809800;
sfr volatile typeCVRCONBITS CVRCONCLRbits absolute 0xBF809804;
sfr volatile typeCVRCONBITS CVRCONSETbits absolute 0xBF809808;
sfr volatile typeCVRCONBITS CVRCONINVbits absolute 0xBF80980C;

typedef struct tagCM1CONBITS {
union {
  struct {
    unsigned CCH:2;
    unsigned :2;
    unsigned CREF:1;
    unsigned :1;
    unsigned EVPOL:2;
    unsigned COUT:1;
    unsigned :4;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned ON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :4;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCM1CONBITS;
sfr atomic volatile typeCM1CONBITS CM1CONbits absolute 0xBF80A000;
sfr volatile typeCM1CONBITS CM1CONCLRbits absolute 0xBF80A004;
sfr volatile typeCM1CONBITS CM1CONSETbits absolute 0xBF80A008;
sfr volatile typeCM1CONBITS CM1CONINVbits absolute 0xBF80A00C;

typedef struct tagCM2CONBITS {
union {
  struct {
    unsigned CCH:2;
    unsigned :2;
    unsigned CREF:1;
    unsigned :1;
    unsigned EVPOL:2;
    unsigned COUT:1;
    unsigned :4;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned ON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :4;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCM2CONBITS;
sfr atomic volatile typeCM2CONBITS CM2CONbits absolute 0xBF80A010;
sfr volatile typeCM2CONBITS CM2CONCLRbits absolute 0xBF80A014;
sfr volatile typeCM2CONBITS CM2CONSETbits absolute 0xBF80A018;
sfr volatile typeCM2CONBITS CM2CONINVbits absolute 0xBF80A01C;

typedef struct tagCM3CONBITS {
union {
  struct {
    unsigned CCH:2;
    unsigned :2;
    unsigned CREF:1;
    unsigned :1;
    unsigned EVPOL:2;
    unsigned COUT:1;
    unsigned :4;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned ON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :4;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCM3CONBITS;
sfr atomic volatile typeCM3CONBITS CM3CONbits absolute 0xBF80A020;
sfr volatile typeCM3CONBITS CM3CONCLRbits absolute 0xBF80A024;
sfr volatile typeCM3CONBITS CM3CONSETbits absolute 0xBF80A028;
sfr volatile typeCM3CONBITS CM3CONINVbits absolute 0xBF80A02C;

typedef struct tagCMSTATBITS {
union {
  struct {
    unsigned C1OUT:1;
    unsigned C2OUT:1;
    unsigned C3OUT:1;
    unsigned :10;
    unsigned SIDL:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCMSTATBITS;
sfr atomic volatile typeCMSTATBITS CMSTATbits absolute 0xBF80A060;
sfr volatile typeCMSTATBITS CMSTATCLRbits absolute 0xBF80A064;
sfr volatile typeCMSTATBITS CMSTATSETbits absolute 0xBF80A068;
sfr volatile typeCMSTATBITS CMSTATINVbits absolute 0xBF80A06C;

typedef struct tagCTMUCONBITS {
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
    unsigned ON:1;
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
    unsigned w:32;
  };
};
} typeCTMUCONBITS;
sfr atomic volatile typeCTMUCONBITS CTMUCONbits absolute 0xBF80A200;
sfr volatile typeCTMUCONBITS CTMUCONCLRbits absolute 0xBF80A204;
sfr volatile typeCTMUCONBITS CTMUCONSETbits absolute 0xBF80A208;
sfr volatile typeCTMUCONBITS CTMUCONINVbits absolute 0xBF80A20C;

typedef struct tagOSCCONBITS {
union {
  struct {
    unsigned OSWEN:1;
    unsigned SOSCEN:1;
    unsigned UFRCEN:1;
    unsigned CF:1;
    unsigned SLPEN:1;
    unsigned SLOCK:1;
    unsigned ULOCK:1;
    unsigned CLKLOCK:1;
    unsigned NOSC:3;
    unsigned :1;
    unsigned COSC:3;
    unsigned :1;
    unsigned PLLMULT:3;
    unsigned PBDIV:2;
    unsigned PBDIVRDY:1;
    unsigned SOSCRDY:1;
    unsigned :1;
    unsigned FRCDIV:3;
    unsigned PLLODIV:3;
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
    unsigned :1;
    unsigned PLLMULT0:1;
    unsigned PLLMULT1:1;
    unsigned PLLMULT2:1;
    unsigned PBDIV0:1;
    unsigned PBDIV1:1;
    unsigned :3;
    unsigned FRCDIV0:1;
    unsigned FRCDIV1:1;
    unsigned FRCDIV2:1;
    unsigned PLLODIV0:1;
    unsigned PLLODIV1:1;
    unsigned PLLODIV2:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeOSCCONBITS;
sfr atomic volatile typeOSCCONBITS OSCCONbits absolute 0xBF80F000;
sfr volatile typeOSCCONBITS OSCCONCLRbits absolute 0xBF80F004;
sfr volatile typeOSCCONBITS OSCCONSETbits absolute 0xBF80F008;
sfr volatile typeOSCCONBITS OSCCONINVbits absolute 0xBF80F00C;

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
  struct {
    unsigned w:32;
  };
};
} typeOSCTUNBITS;
sfr atomic volatile typeOSCTUNBITS OSCTUNbits absolute 0xBF80F010;
sfr volatile typeOSCTUNBITS OSCTUNCLRbits absolute 0xBF80F014;
sfr volatile typeOSCTUNBITS OSCTUNSETbits absolute 0xBF80F018;
sfr volatile typeOSCTUNBITS OSCTUNINVbits absolute 0xBF80F01C;

typedef struct tagREFOCONBITS {
union {
  struct {
    unsigned ROSEL:4;
    unsigned :4;
    unsigned ACTIVE:1;
    unsigned DIVSWEN:1;
    unsigned :1;
    unsigned RSLP:1;
    unsigned OE:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned RODIV:15;
  };
  struct {
    unsigned w:32;
  };
};
} typeREFOCONBITS;
sfr atomic volatile typeREFOCONBITS REFOCONbits absolute 0xBF80F020;
sfr volatile typeREFOCONBITS REFOCONCLRbits absolute 0xBF80F024;
sfr volatile typeREFOCONBITS REFOCONSETbits absolute 0xBF80F028;
sfr volatile typeREFOCONBITS REFOCONINVbits absolute 0xBF80F02C;

typedef struct tagREFOTRIMBITS {
union {
  struct {
    unsigned :23;
    unsigned ROTRIM:9;
  };
  struct {
    unsigned w:32;
  };
};
} typeREFOTRIMBITS;
sfr atomic volatile typeREFOTRIMBITS REFOTRIMbits absolute 0xBF80F030;
sfr volatile typeREFOTRIMBITS REFOTRIMCLRbits absolute 0xBF80F034;
sfr volatile typeREFOTRIMBITS REFOTRIMSETbits absolute 0xBF80F038;
sfr volatile typeREFOTRIMBITS REFOTRIMINVbits absolute 0xBF80F03C;

typedef struct tagCFGCONBITS {
union {
  unsigned TDOEN:1;
  unsigned :1;
  unsigned TROEN:1;
  unsigned JTAGEN:1;
  unsigned :8;
  unsigned PMDLOCK:1;
  unsigned IOLOCK:1;
};
} typeCFGCONBITS;
sfr volatile typeCFGCONBITS CFGCONbits absolute 0xBF80F200;

typedef struct tagDEVIDBITS {
union {
  unsigned DEVID:28;
  unsigned VER:4;
};
} typeDEVIDBITS;
sfr volatile typeDEVIDBITS DEVIDbits absolute 0xBF80F220;
sfr atomic volatile typeDEVIDBITS SYSKEYbits absolute 0xBF80F230;
sfr volatile typeDEVIDBITS SYSKEYCLRbits absolute 0xBF80F234;
sfr volatile typeDEVIDBITS SYSKEYSETbits absolute 0xBF80F238;
sfr volatile typeDEVIDBITS SYSKEYINVbits absolute 0xBF80F23C;

typedef struct tagPMD1BITS {
union {
  unsigned AD1MD:1;
  unsigned :7;
  unsigned CTMUMD:1;
  unsigned :3;
  unsigned CVRMD:1;
};
} typePMD1BITS;
sfr atomic volatile typePMD1BITS PMD1bits absolute 0xBF80F240;
sfr volatile typePMD1BITS PMD1CLRbits absolute 0xBF80F244;
sfr volatile typePMD1BITS PMD1SETbits absolute 0xBF80F248;
sfr volatile typePMD1BITS PMD1INVbits absolute 0xBF80F24C;

typedef struct tagPMD2BITS {
union {
  unsigned CMP1MD:1;
  unsigned CMP2MD:1;
  unsigned CMP3MD:1;
};
} typePMD2BITS;
sfr atomic volatile typePMD2BITS PMD2bits absolute 0xBF80F250;
sfr volatile typePMD2BITS PMD2CLRbits absolute 0xBF80F254;
sfr volatile typePMD2BITS PMD2SETbits absolute 0xBF80F258;
sfr volatile typePMD2BITS PMD2INVbits absolute 0xBF80F25C;

typedef struct tagPMD3BITS {
union {
  unsigned IC1MD:1;
  unsigned IC2MD:1;
  unsigned IC3MD:1;
  unsigned IC4MD:1;
  unsigned IC5MD:1;
  unsigned :11;
  unsigned OC1MD:1;
  unsigned OC2MD:1;
  unsigned OC3MD:1;
  unsigned OC4MD:1;
  unsigned OC5MD:1;
};
} typePMD3BITS;
sfr atomic volatile typePMD3BITS PMD3bits absolute 0xBF80F260;
sfr volatile typePMD3BITS PMD3CLRbits absolute 0xBF80F264;
sfr volatile typePMD3BITS PMD3SETbits absolute 0xBF80F268;
sfr volatile typePMD3BITS PMD3INVbits absolute 0xBF80F26C;

typedef struct tagPMD4BITS {
union {
  unsigned T1MD:1;
  unsigned T2MD:1;
  unsigned T3MD:1;
  unsigned T4MD:1;
  unsigned T5MD:1;
};
} typePMD4BITS;
sfr atomic volatile typePMD4BITS PMD4bits absolute 0xBF80F270;
sfr volatile typePMD4BITS PMD4CLRbits absolute 0xBF80F274;
sfr volatile typePMD4BITS PMD4SETbits absolute 0xBF80F278;
sfr volatile typePMD4BITS PMD4INVbits absolute 0xBF80F27C;

typedef struct tagPMD5BITS {
union {
  unsigned U1MD:1;
  unsigned U2MD:1;
  unsigned :6;
  unsigned SPI1MD:1;
  unsigned SPI2MD:1;
  unsigned :6;
  unsigned I2C1MD:1;
  unsigned I2C2MD:1;
};
} typePMD5BITS;
sfr atomic volatile typePMD5BITS PMD5bits absolute 0xBF80F280;
sfr volatile typePMD5BITS PMD5CLRbits absolute 0xBF80F284;
sfr volatile typePMD5BITS PMD5SETbits absolute 0xBF80F288;
sfr volatile typePMD5BITS PMD5INVbits absolute 0xBF80F28C;

typedef struct tagPMD6BITS {
union {
  unsigned RTCCMD:1;
  unsigned REFOMD:1;
  unsigned :14;
  unsigned PMPMD:1;
};
} typePMD6BITS;
sfr atomic volatile typePMD6BITS PMD6bits absolute 0xBF80F290;
sfr volatile typePMD6BITS PMD6CLRbits absolute 0xBF80F294;
sfr volatile typePMD6BITS PMD6SETbits absolute 0xBF80F298;
sfr volatile typePMD6BITS PMD6INVbits absolute 0xBF80F29C;

typedef struct tagNVMCONBITS {
union {
  struct {
    unsigned NVMOP:4;
    unsigned :7;
    unsigned LVDSTAT:1;
    unsigned LVDERR:1;
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
  struct {
    unsigned PROGOP:4;
  };
  struct {
    unsigned PROGOP0:1;
    unsigned PROGOP1:1;
    unsigned PROGOP2:1;
    unsigned PROGOP3:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeNVMCONBITS;
sfr atomic volatile typeNVMCONBITS NVMCONbits absolute 0xBF80F400;
sfr volatile typeNVMCONBITS NVMCONCLRbits absolute 0xBF80F404;
sfr volatile typeNVMCONBITS NVMCONSETbits absolute 0xBF80F408;
sfr volatile typeNVMCONBITS NVMCONINVbits absolute 0xBF80F40C;
sfr volatile typeNVMCONBITS NVMKEYbits absolute 0xBF80F410;
sfr atomic volatile typeNVMCONBITS NVMADDRbits absolute 0xBF80F420;
sfr volatile typeNVMCONBITS NVMADDRCLRbits absolute 0xBF80F424;
sfr volatile typeNVMCONBITS NVMADDRSETbits absolute 0xBF80F428;
sfr volatile typeNVMCONBITS NVMADDRINVbits absolute 0xBF80F42C;
sfr volatile typeNVMCONBITS NVMDATAbits absolute 0xBF80F430;
sfr volatile typeNVMCONBITS NVMSRCADDRbits absolute 0xBF80F440;

typedef struct tagRCONBITS {
union {
  struct {
    unsigned POR:1;
    unsigned BOR:1;
    unsigned IDLE:1;
    unsigned SLEEP:1;
    unsigned WDTO:1;
    unsigned :1;
    unsigned SWR:1;
    unsigned EXTR:1;
    unsigned VREGS:1;
    unsigned CMR:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeRCONBITS;
sfr atomic volatile typeRCONBITS RCONbits absolute 0xBF80F600;
sfr volatile typeRCONBITS RCONCLRbits absolute 0xBF80F604;
sfr volatile typeRCONBITS RCONSETbits absolute 0xBF80F608;
sfr volatile typeRCONBITS RCONINVbits absolute 0xBF80F60C;

typedef struct tagRSWRSTBITS {
union {
  struct {
    unsigned SWRST:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeRSWRSTBITS;
sfr atomic volatile typeRSWRSTBITS RSWRSTbits absolute 0xBF80F610;
sfr volatile typeRSWRSTBITS RSWRSTCLRbits absolute 0xBF80F614;
sfr volatile typeRSWRSTBITS RSWRSTSETbits absolute 0xBF80F618;
sfr volatile typeRSWRSTBITS RSWRSTINVbits absolute 0xBF80F61C;

typedef struct tagINT1RBITS {
union {
  unsigned INT1R:4;
};
} typeINT1RBITS;
sfr volatile typeINT1RBITS INT1Rbits absolute 0xBF80FA04;

typedef struct tagINT2RBITS {
union {
  unsigned INT2R:4;
};
} typeINT2RBITS;
sfr volatile typeINT2RBITS INT2Rbits absolute 0xBF80FA08;

typedef struct tagINT3RBITS {
union {
  unsigned INT3R:4;
};
} typeINT3RBITS;
sfr volatile typeINT3RBITS INT3Rbits absolute 0xBF80FA0C;

typedef struct tagINT4RBITS {
union {
  unsigned INT4R:4;
};
} typeINT4RBITS;
sfr volatile typeINT4RBITS INT4Rbits absolute 0xBF80FA10;

typedef struct tagT2CKRBITS {
union {
  unsigned T2CKR:4;
};
} typeT2CKRBITS;
sfr volatile typeT2CKRBITS T2CKRbits absolute 0xBF80FA18;

typedef struct tagT3CKRBITS {
union {
  unsigned T3CKR:4;
};
} typeT3CKRBITS;
sfr volatile typeT3CKRBITS T3CKRbits absolute 0xBF80FA1C;

typedef struct tagT4CKRBITS {
union {
  unsigned T4CKR:4;
};
} typeT4CKRBITS;
sfr volatile typeT4CKRBITS T4CKRbits absolute 0xBF80FA20;

typedef struct tagT5CKRBITS {
union {
  unsigned T5CKR:4;
};
} typeT5CKRBITS;
sfr volatile typeT5CKRBITS T5CKRbits absolute 0xBF80FA24;

typedef struct tagIC1RBITS {
union {
  unsigned IC1R:4;
};
} typeIC1RBITS;
sfr volatile typeIC1RBITS IC1Rbits absolute 0xBF80FA28;

typedef struct tagIC2RBITS {
union {
  unsigned IC2R:4;
};
} typeIC2RBITS;
sfr volatile typeIC2RBITS IC2Rbits absolute 0xBF80FA2C;

typedef struct tagIC3RBITS {
union {
  unsigned IC3R:4;
};
} typeIC3RBITS;
sfr volatile typeIC3RBITS IC3Rbits absolute 0xBF80FA30;

typedef struct tagIC4RBITS {
union {
  unsigned IC4R:4;
};
} typeIC4RBITS;
sfr volatile typeIC4RBITS IC4Rbits absolute 0xBF80FA34;

typedef struct tagIC5RBITS {
union {
  unsigned IC5R:4;
};
} typeIC5RBITS;
sfr volatile typeIC5RBITS IC5Rbits absolute 0xBF80FA38;

typedef struct tagOCFARBITS {
union {
  unsigned OCFAR:4;
};
} typeOCFARBITS;
sfr volatile typeOCFARBITS OCFARbits absolute 0xBF80FA48;

typedef struct tagOCFBRBITS {
union {
  unsigned OCFBR:4;
};
} typeOCFBRBITS;
sfr volatile typeOCFBRBITS OCFBRbits absolute 0xBF80FA4C;

typedef struct tagU1RXRBITS {
union {
  unsigned U1RXR:4;
};
} typeU1RXRBITS;
sfr volatile typeU1RXRBITS U1RXRbits absolute 0xBF80FA50;

typedef struct tagU1CTSRBITS {
union {
  unsigned U1CTSR:4;
};
} typeU1CTSRBITS;
sfr volatile typeU1CTSRBITS U1CTSRbits absolute 0xBF80FA54;

typedef struct tagU2RXRBITS {
union {
  unsigned U2RXR:4;
};
} typeU2RXRBITS;
sfr volatile typeU2RXRBITS U2RXRbits absolute 0xBF80FA58;

typedef struct tagU2CTSRBITS {
union {
  unsigned U2CTSR:4;
};
} typeU2CTSRBITS;
sfr volatile typeU2CTSRBITS U2CTSRbits absolute 0xBF80FA5C;

typedef struct tagSDI1RBITS {
union {
  unsigned SDI1R:4;
};
} typeSDI1RBITS;
sfr volatile typeSDI1RBITS SDI1Rbits absolute 0xBF80FA84;

typedef struct tagSS1RBITS {
union {
  unsigned SS1R:4;
};
} typeSS1RBITS;
sfr volatile typeSS1RBITS SS1Rbits absolute 0xBF80FA88;

typedef struct tagSDI2RBITS {
union {
  unsigned SDI2R:4;
};
} typeSDI2RBITS;
sfr volatile typeSDI2RBITS SDI2Rbits absolute 0xBF80FA90;

typedef struct tagSS2RBITS {
union {
  unsigned SS2R:4;
};
} typeSS2RBITS;
sfr volatile typeSS2RBITS SS2Rbits absolute 0xBF80FA94;

typedef struct tagREFCLKIRBITS {
union {
  unsigned REFCLKIR:4;
};
} typeREFCLKIRBITS;
sfr volatile typeREFCLKIRBITS REFCLKIRbits absolute 0xBF80FAB8;

typedef struct tagRPA0RBITS {
union {
  unsigned RPA0R:4;
};
} typeRPA0RBITS;
sfr volatile typeRPA0RBITS RPA0Rbits absolute 0xBF80FB00;

typedef struct tagRPA1RBITS {
union {
  unsigned RPA1R:4;
};
} typeRPA1RBITS;
sfr volatile typeRPA1RBITS RPA1Rbits absolute 0xBF80FB04;

typedef struct tagRPA2RBITS {
union {
  unsigned RPA2R:4;
};
} typeRPA2RBITS;
sfr volatile typeRPA2RBITS RPA2Rbits absolute 0xBF80FB08;

typedef struct tagRPA3RBITS {
union {
  unsigned RPA3R:4;
};
} typeRPA3RBITS;
sfr volatile typeRPA3RBITS RPA3Rbits absolute 0xBF80FB0C;

typedef struct tagRPA4RBITS {
union {
  unsigned RPA4R:4;
};
} typeRPA4RBITS;
sfr volatile typeRPA4RBITS RPA4Rbits absolute 0xBF80FB10;

typedef struct tagRPA8RBITS {
union {
  unsigned RPA8R:4;
};
} typeRPA8RBITS;
sfr volatile typeRPA8RBITS RPA8Rbits absolute 0xBF80FB20;

typedef struct tagRPA9RBITS {
union {
  unsigned RPA9R:4;
};
} typeRPA9RBITS;
sfr volatile typeRPA9RBITS RPA9Rbits absolute 0xBF80FB24;

typedef struct tagRPB0RBITS {
union {
  unsigned RPB0R:4;
};
} typeRPB0RBITS;
sfr volatile typeRPB0RBITS RPB0Rbits absolute 0xBF80FB2C;

typedef struct tagRPB1RBITS {
union {
  unsigned RPB1R:4;
};
} typeRPB1RBITS;
sfr volatile typeRPB1RBITS RPB1Rbits absolute 0xBF80FB30;

typedef struct tagRPB2RBITS {
union {
  unsigned RPB2R:4;
};
} typeRPB2RBITS;
sfr volatile typeRPB2RBITS RPB2Rbits absolute 0xBF80FB34;

typedef struct tagRPB3RBITS {
union {
  unsigned RPB3R:4;
};
} typeRPB3RBITS;
sfr volatile typeRPB3RBITS RPB3Rbits absolute 0xBF80FB38;

typedef struct tagRPB4RBITS {
union {
  unsigned RPB4R:4;
};
} typeRPB4RBITS;
sfr volatile typeRPB4RBITS RPB4Rbits absolute 0xBF80FB3C;

typedef struct tagRPB5RBITS {
union {
  unsigned RPB5R:4;
};
} typeRPB5RBITS;
sfr volatile typeRPB5RBITS RPB5Rbits absolute 0xBF80FB40;

typedef struct tagRPB6RBITS {
union {
  unsigned RPB6R:4;
};
} typeRPB6RBITS;
sfr volatile typeRPB6RBITS RPB6Rbits absolute 0xBF80FB44;

typedef struct tagRPB7RBITS {
union {
  unsigned RPB7R:4;
};
} typeRPB7RBITS;
sfr volatile typeRPB7RBITS RPB7Rbits absolute 0xBF80FB48;

typedef struct tagRPB8RBITS {
union {
  unsigned RPB8R:4;
};
} typeRPB8RBITS;
sfr volatile typeRPB8RBITS RPB8Rbits absolute 0xBF80FB4C;

typedef struct tagRPB9RBITS {
union {
  unsigned RPB9R:4;
};
} typeRPB9RBITS;
sfr volatile typeRPB9RBITS RPB9Rbits absolute 0xBF80FB50;

typedef struct tagRPB10RBITS {
union {
  unsigned RPB10R:4;
};
} typeRPB10RBITS;
sfr volatile typeRPB10RBITS RPB10Rbits absolute 0xBF80FB54;

typedef struct tagRPB11RBITS {
union {
  unsigned RPB11R:4;
};
} typeRPB11RBITS;
sfr volatile typeRPB11RBITS RPB11Rbits absolute 0xBF80FB58;

typedef struct tagRPB12RBITS {
union {
  unsigned RPB12R:4;
};
} typeRPB12RBITS;
sfr volatile typeRPB12RBITS RPB12Rbits absolute 0xBF80FB5C;

typedef struct tagRPB13RBITS {
union {
  unsigned RPB13R:4;
};
} typeRPB13RBITS;
sfr volatile typeRPB13RBITS RPB13Rbits absolute 0xBF80FB60;

typedef struct tagRPB14RBITS {
union {
  unsigned RPB14R:4;
};
} typeRPB14RBITS;
sfr volatile typeRPB14RBITS RPB14Rbits absolute 0xBF80FB64;

typedef struct tagRPB15RBITS {
union {
  unsigned RPB15R:4;
};
} typeRPB15RBITS;
sfr volatile typeRPB15RBITS RPB15Rbits absolute 0xBF80FB68;

typedef struct tagRPC0RBITS {
union {
  unsigned RPC0R:4;
};
} typeRPC0RBITS;
sfr volatile typeRPC0RBITS RPC0Rbits absolute 0xBF80FB6C;

typedef struct tagRPC1RBITS {
union {
  unsigned RPC1R:4;
};
} typeRPC1RBITS;
sfr volatile typeRPC1RBITS RPC1Rbits absolute 0xBF80FB70;

typedef struct tagRPC2RBITS {
union {
  unsigned RPC2R:4;
};
} typeRPC2RBITS;
sfr volatile typeRPC2RBITS RPC2Rbits absolute 0xBF80FB74;

typedef struct tagRPC3RBITS {
union {
  unsigned RPC3R:4;
};
} typeRPC3RBITS;
sfr volatile typeRPC3RBITS RPC3Rbits absolute 0xBF80FB78;

typedef struct tagRPC4RBITS {
union {
  unsigned RPC4R:4;
};
} typeRPC4RBITS;
sfr volatile typeRPC4RBITS RPC4Rbits absolute 0xBF80FB7C;

typedef struct tagRPC5RBITS {
union {
  unsigned RPC5R:4;
};
} typeRPC5RBITS;
sfr volatile typeRPC5RBITS RPC5Rbits absolute 0xBF80FB80;

typedef struct tagRPC6RBITS {
union {
  unsigned RPC6R:4;
};
} typeRPC6RBITS;
sfr volatile typeRPC6RBITS RPC6Rbits absolute 0xBF80FB84;

typedef struct tagRPC7RBITS {
union {
  unsigned RPC7R:4;
};
} typeRPC7RBITS;
sfr volatile typeRPC7RBITS RPC7Rbits absolute 0xBF80FB88;

typedef struct tagRPC8RBITS {
union {
  unsigned RPC8R:4;
};
} typeRPC8RBITS;
sfr volatile typeRPC8RBITS RPC8Rbits absolute 0xBF80FB8C;

typedef struct tagRPC9RBITS {
union {
  unsigned RPC9R:4;
};
} typeRPC9RBITS;
sfr volatile typeRPC9RBITS RPC9Rbits absolute 0xBF80FB90;

typedef struct tagINTCONBITS {
union {
  struct {
    unsigned INT0EP:1;
    unsigned INT1EP:1;
    unsigned INT2EP:1;
    unsigned INT3EP:1;
    unsigned INT4EP:1;
    unsigned :3;
    unsigned TPC:3;
    unsigned :1;
    unsigned MVEC:1;
    unsigned :3;
    unsigned SS0:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeINTCONBITS;
sfr atomic volatile typeINTCONBITS INTCONbits absolute 0xBF881000;
sfr volatile typeINTCONBITS INTCONCLRbits absolute 0xBF881004;
sfr volatile typeINTCONBITS INTCONSETbits absolute 0xBF881008;
sfr volatile typeINTCONBITS INTCONINVbits absolute 0xBF88100C;

typedef struct tagINTSTATBITS {
union {
  unsigned VEC:6;
  unsigned :2;
  unsigned SRIPL:3;
};
} typeINTSTATBITS;
sfr volatile typeINTSTATBITS INTSTATbits absolute 0xBF881010;
sfr atomic volatile typeINTSTATBITS IPTMRbits absolute 0xBF881020;
sfr volatile typeINTSTATBITS IPTMRCLRbits absolute 0xBF881024;
sfr volatile typeINTSTATBITS IPTMRSETbits absolute 0xBF881028;
sfr volatile typeINTSTATBITS IPTMRINVbits absolute 0xBF88102C;

typedef struct tagIFS0BITS {
union {
  struct {
    unsigned CTIF:1;
    unsigned CS0IF:1;
    unsigned CS1IF:1;
    unsigned INT0IF:1;
    unsigned T1IF:1;
    unsigned IC1EIF:1;
    unsigned IC1IF:1;
    unsigned OC1IF:1;
    unsigned INT1IF:1;
    unsigned T2IF:1;
    unsigned IC2EIF:1;
    unsigned IC2IF:1;
    unsigned OC2IF:1;
    unsigned INT2IF:1;
    unsigned T3IF:1;
    unsigned IC3EIF:1;
    unsigned IC3IF:1;
    unsigned OC3IF:1;
    unsigned INT3IF:1;
    unsigned T4IF:1;
    unsigned IC4EIF:1;
    unsigned IC4IF:1;
    unsigned OC4IF:1;
    unsigned INT4IF:1;
    unsigned T5IF:1;
    unsigned IC5EIF:1;
    unsigned IC5IF:1;
    unsigned OC5IF:1;
    unsigned AD1IF:1;
    unsigned FSCMIF:1;
    unsigned RTCCIF:1;
    unsigned FCEIF:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeIFS0BITS;
sfr atomic volatile typeIFS0BITS IFS0bits absolute 0xBF881030;
sfr volatile typeIFS0BITS IFS0CLRbits absolute 0xBF881034;
sfr volatile typeIFS0BITS IFS0SETbits absolute 0xBF881038;
sfr volatile typeIFS0BITS IFS0INVbits absolute 0xBF88103C;

typedef struct tagIFS1BITS {
union {
  struct {
    unsigned CMP1IF:1;
    unsigned CMP2IF:1;
    unsigned CMP3IF:1;
    unsigned :1;
    unsigned SPI1EIF:1;
    unsigned SPI1RXIF:1;
    unsigned SPI1TXIF:1;
    unsigned U1EIF:1;
    unsigned U1RXIF:1;
    unsigned U1TXIF:1;
    unsigned I2C1BIF:1;
    unsigned I2C1SIF:1;
    unsigned I2C1MIF:1;
    unsigned CNAIF:1;
    unsigned CNBIF:1;
    unsigned CNCIF:1;
    unsigned PMPIF:1;
    unsigned PMPEIF:1;
    unsigned SPI2EIF:1;
    unsigned SPI2RXIF:1;
    unsigned SPI2TXIF:1;
    unsigned U2EIF:1;
    unsigned U2RXIF:1;
    unsigned U2TXIF:1;
    unsigned I2C2BIF:1;
    unsigned I2C2SIF:1;
    unsigned I2C2MIF:1;
    unsigned CTMUIF:1;
    unsigned DMA0IF:1;
    unsigned DMA1IF:1;
    unsigned DMA2IF:1;
    unsigned DMA3IF:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeIFS1BITS;
sfr atomic volatile typeIFS1BITS IFS1bits absolute 0xBF881040;
sfr volatile typeIFS1BITS IFS1CLRbits absolute 0xBF881044;
sfr volatile typeIFS1BITS IFS1SETbits absolute 0xBF881048;
sfr volatile typeIFS1BITS IFS1INVbits absolute 0xBF88104C;

typedef struct tagIEC0BITS {
union {
  struct {
    unsigned CTIE:1;
    unsigned CS0IE:1;
    unsigned CS1IE:1;
    unsigned INT0IE:1;
    unsigned T1IE:1;
    unsigned IC1EIE:1;
    unsigned IC1IE:1;
    unsigned OC1IE:1;
    unsigned INT1IE:1;
    unsigned T2IE:1;
    unsigned IC2EIE:1;
    unsigned IC2IE:1;
    unsigned OC2IE:1;
    unsigned INT2IE:1;
    unsigned T3IE:1;
    unsigned IC3EIE:1;
    unsigned IC3IE:1;
    unsigned OC3IE:1;
    unsigned INT3IE:1;
    unsigned T4IE:1;
    unsigned IC4EIE:1;
    unsigned IC4IE:1;
    unsigned OC4IE:1;
    unsigned INT4IE:1;
    unsigned T5IE:1;
    unsigned IC5EIE:1;
    unsigned IC5IE:1;
    unsigned OC5IE:1;
    unsigned AD1IE:1;
    unsigned FSCMIE:1;
    unsigned RTCCIE:1;
    unsigned FCEIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeIEC0BITS;
sfr atomic volatile typeIEC0BITS IEC0bits absolute 0xBF881060;
sfr volatile typeIEC0BITS IEC0CLRbits absolute 0xBF881064;
sfr volatile typeIEC0BITS IEC0SETbits absolute 0xBF881068;
sfr volatile typeIEC0BITS IEC0INVbits absolute 0xBF88106C;

typedef struct tagIEC1BITS {
union {
  struct {
    unsigned CMP1IE:1;
    unsigned CMP2IE:1;
    unsigned CMP3IE:1;
    unsigned :1;
    unsigned SPI1EIE:1;
    unsigned SPI1RXIE:1;
    unsigned SPI1TXIE:1;
    unsigned U1EIE:1;
    unsigned U1RXIE:1;
    unsigned U1TXIE:1;
    unsigned I2C1BIE:1;
    unsigned I2C1SIE:1;
    unsigned I2C1MIE:1;
    unsigned CNAIE:1;
    unsigned CNBIE:1;
    unsigned CNCIE:1;
    unsigned PMPIE:1;
    unsigned PMPEIE:1;
    unsigned SPI2EIE:1;
    unsigned SPI2RXIE:1;
    unsigned SPI2TXIE:1;
    unsigned U2EIE:1;
    unsigned U2RXIE:1;
    unsigned U2TXIE:1;
    unsigned I2C2BIE:1;
    unsigned I2C2SIE:1;
    unsigned I2C2MIE:1;
    unsigned CTMUIE:1;
    unsigned DMA0IE:1;
    unsigned DMA1IE:1;
    unsigned DMA2IE:1;
    unsigned DMA3IE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeIEC1BITS;
sfr atomic volatile typeIEC1BITS IEC1bits absolute 0xBF881070;
sfr volatile typeIEC1BITS IEC1CLRbits absolute 0xBF881074;
sfr volatile typeIEC1BITS IEC1SETbits absolute 0xBF881078;
sfr volatile typeIEC1BITS IEC1INVbits absolute 0xBF88107C;

typedef struct tagIPC0BITS {
union {
  struct {
    unsigned CTIS:2;
    unsigned CTIP:3;
    unsigned :3;
    unsigned CS0IS:2;
    unsigned CS0IP:3;
    unsigned :3;
    unsigned CS1IS:2;
    unsigned CS1IP:3;
    unsigned :3;
    unsigned INT0IS:2;
    unsigned INT0IP:3;
  };
  struct {
    unsigned w:32;
  };
};
} typeIPC0BITS;
sfr atomic volatile typeIPC0BITS IPC0bits absolute 0xBF881090;
sfr volatile typeIPC0BITS IPC0CLRbits absolute 0xBF881094;
sfr volatile typeIPC0BITS IPC0SETbits absolute 0xBF881098;
sfr volatile typeIPC0BITS IPC0INVbits absolute 0xBF88109C;

typedef struct tagIPC1BITS {
union {
  struct {
    unsigned T1IS:2;
    unsigned T1IP:3;
    unsigned :3;
    unsigned IC1IS:2;
    unsigned IC1IP:3;
    unsigned :3;
    unsigned OC1IS:2;
    unsigned OC1IP:3;
    unsigned :3;
    unsigned INT1IS:2;
    unsigned INT1IP:3;
  };
  struct {
    unsigned w:32;
  };
};
} typeIPC1BITS;
sfr atomic volatile typeIPC1BITS IPC1bits absolute 0xBF8810A0;
sfr volatile typeIPC1BITS IPC1CLRbits absolute 0xBF8810A4;
sfr volatile typeIPC1BITS IPC1SETbits absolute 0xBF8810A8;
sfr volatile typeIPC1BITS IPC1INVbits absolute 0xBF8810AC;

typedef struct tagIPC2BITS {
union {
  struct {
    unsigned T2IS:2;
    unsigned T2IP:3;
    unsigned :3;
    unsigned IC2IS:2;
    unsigned IC2IP:3;
    unsigned :3;
    unsigned OC2IS:2;
    unsigned OC2IP:3;
    unsigned :3;
    unsigned INT2IS:2;
    unsigned INT2IP:3;
  };
  struct {
    unsigned w:32;
  };
};
} typeIPC2BITS;
sfr atomic volatile typeIPC2BITS IPC2bits absolute 0xBF8810B0;
sfr volatile typeIPC2BITS IPC2CLRbits absolute 0xBF8810B4;
sfr volatile typeIPC2BITS IPC2SETbits absolute 0xBF8810B8;
sfr volatile typeIPC2BITS IPC2INVbits absolute 0xBF8810BC;

typedef struct tagIPC3BITS {
union {
  struct {
    unsigned T3IS:2;
    unsigned T3IP:3;
    unsigned :3;
    unsigned IC3IS:2;
    unsigned IC3IP:3;
    unsigned :3;
    unsigned OC3IS:2;
    unsigned OC3IP:3;
    unsigned :3;
    unsigned INT3IS:2;
    unsigned INT3IP:3;
  };
  struct {
    unsigned w:32;
  };
};
} typeIPC3BITS;
sfr atomic volatile typeIPC3BITS IPC3bits absolute 0xBF8810C0;
sfr volatile typeIPC3BITS IPC3CLRbits absolute 0xBF8810C4;
sfr volatile typeIPC3BITS IPC3SETbits absolute 0xBF8810C8;
sfr volatile typeIPC3BITS IPC3INVbits absolute 0xBF8810CC;

typedef struct tagIPC4BITS {
union {
  struct {
    unsigned T4IS:2;
    unsigned T4IP:3;
    unsigned :3;
    unsigned IC4IS:2;
    unsigned IC4IP:3;
    unsigned :3;
    unsigned OC4IS:2;
    unsigned OC4IP:3;
    unsigned :3;
    unsigned INT4IS:2;
    unsigned INT4IP:3;
  };
  struct {
    unsigned w:32;
  };
};
} typeIPC4BITS;
sfr atomic volatile typeIPC4BITS IPC4bits absolute 0xBF8810D0;
sfr volatile typeIPC4BITS IPC4CLRbits absolute 0xBF8810D4;
sfr volatile typeIPC4BITS IPC4SETbits absolute 0xBF8810D8;
sfr volatile typeIPC4BITS IPC4INVbits absolute 0xBF8810DC;

typedef struct tagIPC5BITS {
union {
  struct {
    unsigned T5IS:2;
    unsigned T5IP:3;
    unsigned :3;
    unsigned IC5IS:2;
    unsigned IC5IP:3;
    unsigned :3;
    unsigned OC5IS:2;
    unsigned OC5IP:3;
    unsigned :3;
    unsigned AD1IS:2;
    unsigned AD1IP:3;
  };
  struct {
    unsigned w:32;
  };
};
} typeIPC5BITS;
sfr atomic volatile typeIPC5BITS IPC5bits absolute 0xBF8810E0;
sfr volatile typeIPC5BITS IPC5CLRbits absolute 0xBF8810E4;
sfr volatile typeIPC5BITS IPC5SETbits absolute 0xBF8810E8;
sfr volatile typeIPC5BITS IPC5INVbits absolute 0xBF8810EC;

typedef struct tagIPC6BITS {
union {
  struct {
    unsigned FSCMIS:2;
    unsigned FSCMIP:3;
    unsigned :3;
    unsigned RTCCIS:2;
    unsigned RTCCIP:3;
    unsigned :3;
    unsigned FCEIS:2;
    unsigned FCEIP:3;
    unsigned :3;
    unsigned CMP1IS:2;
    unsigned CMP1IP:3;
  };
  struct {
    unsigned w:32;
  };
};
} typeIPC6BITS;
sfr atomic volatile typeIPC6BITS IPC6bits absolute 0xBF8810F0;
sfr volatile typeIPC6BITS IPC6CLRbits absolute 0xBF8810F4;
sfr volatile typeIPC6BITS IPC6SETbits absolute 0xBF8810F8;
sfr volatile typeIPC6BITS IPC6INVbits absolute 0xBF8810FC;

typedef struct tagIPC7BITS {
union {
  struct {
    unsigned CMP2IS:2;
    unsigned CMP2IP:3;
    unsigned :3;
    unsigned CMP3IS:2;
    unsigned CMP3IP:3;
    unsigned :11;
    unsigned SPI1IS:2;
    unsigned SPI1IP:3;
  };
  struct {
    unsigned w:32;
  };
};
} typeIPC7BITS;
sfr atomic volatile typeIPC7BITS IPC7bits absolute 0xBF881100;
sfr volatile typeIPC7BITS IPC7CLRbits absolute 0xBF881104;
sfr volatile typeIPC7BITS IPC7SETbits absolute 0xBF881108;
sfr volatile typeIPC7BITS IPC7INVbits absolute 0xBF88110C;

typedef struct tagIPC8BITS {
union {
  struct {
    unsigned U1IS:2;
    unsigned U1IP:3;
    unsigned :3;
    unsigned I2C1IS:2;
    unsigned I2C1IP:3;
    unsigned :3;
    unsigned CNIS:2;
    unsigned CNIP:3;
    unsigned :3;
    unsigned PMPIS:2;
    unsigned PMPIP:3;
  };
  struct {
    unsigned w:32;
  };
};
} typeIPC8BITS;
sfr atomic volatile typeIPC8BITS IPC8bits absolute 0xBF881110;
sfr volatile typeIPC8BITS IPC8CLRbits absolute 0xBF881114;
sfr volatile typeIPC8BITS IPC8SETbits absolute 0xBF881118;
sfr volatile typeIPC8BITS IPC8INVbits absolute 0xBF88111C;

typedef struct tagIPC9BITS {
union {
  struct {
    unsigned SPI2IS:2;
    unsigned SPI2IP:3;
    unsigned :3;
    unsigned U2IS:2;
    unsigned U2IP:3;
    unsigned :3;
    unsigned I2C2IS:2;
    unsigned I2C2IP:3;
    unsigned :3;
    unsigned CTMUIS:2;
    unsigned CTMUIP:3;
  };
  struct {
    unsigned w:32;
  };
};
} typeIPC9BITS;
sfr atomic volatile typeIPC9BITS IPC9bits absolute 0xBF881120;
sfr volatile typeIPC9BITS IPC9CLRbits absolute 0xBF881124;
sfr volatile typeIPC9BITS IPC9SETbits absolute 0xBF881128;
sfr volatile typeIPC9BITS IPC9INVbits absolute 0xBF88112C;

typedef struct tagIPC10BITS {
union {
  struct {
    unsigned DMA0IS:2;
    unsigned DMA0IP:3;
    unsigned :3;
    unsigned DMA1IS:2;
    unsigned DMA1IP:3;
    unsigned :3;
    unsigned DMA2IS:2;
    unsigned DMA2IP:3;
    unsigned :3;
    unsigned DMA3IS:2;
    unsigned DMA3IP:3;
  };
  struct {
    unsigned w:32;
  };
};
} typeIPC10BITS;
sfr atomic volatile typeIPC10BITS IPC10bits absolute 0xBF881130;
sfr volatile typeIPC10BITS IPC10CLRbits absolute 0xBF881134;
sfr volatile typeIPC10BITS IPC10SETbits absolute 0xBF881138;
sfr volatile typeIPC10BITS IPC10INVbits absolute 0xBF88113C;

typedef struct tagBMXCONBITS {
union {
  struct {
    unsigned BMXARB:3;
    unsigned :3;
    unsigned BMXWSDRM:1;
    unsigned :9;
    unsigned BMXERRIS:1;
    unsigned BMXERRDS:1;
    unsigned BMXERRDMA:1;
    unsigned BMXERRICD:1;
    unsigned BMXERRIXI:1;
    unsigned :5;
    unsigned BMXCHEDMA:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeBMXCONBITS;
sfr atomic volatile typeBMXCONBITS BMXCONbits absolute 0xBF882000;
sfr volatile typeBMXCONBITS BMXCONCLRbits absolute 0xBF882004;
sfr volatile typeBMXCONBITS BMXCONSETbits absolute 0xBF882008;
sfr volatile typeBMXCONBITS BMXCONINVbits absolute 0xBF88200C;
sfr atomic volatile typeBMXCONBITS BMXDKPBAbits absolute 0xBF882010;
sfr volatile typeBMXCONBITS BMXDKPBACLRbits absolute 0xBF882014;
sfr volatile typeBMXCONBITS BMXDKPBASETbits absolute 0xBF882018;
sfr volatile typeBMXCONBITS BMXDKPBAINVbits absolute 0xBF88201C;
sfr atomic volatile typeBMXCONBITS BMXDUDBAbits absolute 0xBF882020;
sfr volatile typeBMXCONBITS BMXDUDBACLRbits absolute 0xBF882024;
sfr volatile typeBMXCONBITS BMXDUDBASETbits absolute 0xBF882028;
sfr volatile typeBMXCONBITS BMXDUDBAINVbits absolute 0xBF88202C;
sfr atomic volatile typeBMXCONBITS BMXDUPBAbits absolute 0xBF882030;
sfr volatile typeBMXCONBITS BMXDUPBACLRbits absolute 0xBF882034;
sfr volatile typeBMXCONBITS BMXDUPBASETbits absolute 0xBF882038;
sfr volatile typeBMXCONBITS BMXDUPBAINVbits absolute 0xBF88203C;
sfr volatile typeBMXCONBITS BMXDRMSZbits absolute 0xBF882040;
sfr atomic volatile typeBMXCONBITS BMXPUPBAbits absolute 0xBF882050;
sfr volatile typeBMXCONBITS BMXPUPBACLRbits absolute 0xBF882054;
sfr volatile typeBMXCONBITS BMXPUPBASETbits absolute 0xBF882058;
sfr volatile typeBMXCONBITS BMXPUPBAINVbits absolute 0xBF88205C;
sfr volatile typeBMXCONBITS BMXPFMSZbits absolute 0xBF882060;
sfr volatile typeBMXCONBITS BMXBOOTSZbits absolute 0xBF882070;

typedef struct tagDMACONBITS {
union {
  struct {
    unsigned :11;
    unsigned DMABUSY:1;
    unsigned SUSPEND:1;
    unsigned :2;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeDMACONBITS;
sfr atomic volatile typeDMACONBITS DMACONbits absolute 0xBF883000;
sfr volatile typeDMACONBITS DMACONCLRbits absolute 0xBF883004;
sfr volatile typeDMACONBITS DMACONSETbits absolute 0xBF883008;
sfr volatile typeDMACONBITS DMACONINVbits absolute 0xBF88300C;

typedef struct tagDMASTATBITS {
union {
  struct {
    unsigned DMACH:3;
    unsigned RDWR:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeDMASTATBITS;
sfr atomic volatile typeDMASTATBITS DMASTATbits absolute 0xBF883010;
sfr volatile typeDMASTATBITS DMASTATCLRbits absolute 0xBF883014;
sfr volatile typeDMASTATBITS DMASTATSETbits absolute 0xBF883018;
sfr volatile typeDMASTATBITS DMASTATINVbits absolute 0xBF88301C;
sfr atomic volatile typeDMASTATBITS DMAADDRbits absolute 0xBF883020;
sfr volatile typeDMASTATBITS DMAADDRCLRbits absolute 0xBF883024;
sfr volatile typeDMASTATBITS DMAADDRSETbits absolute 0xBF883028;
sfr volatile typeDMASTATBITS DMAADDRINVbits absolute 0xBF88302C;

typedef struct tagDCRCCONBITS {
union {
  struct {
    unsigned CRCCH:3;
    unsigned :2;
    unsigned CRCTYP:1;
    unsigned CRCAPP:1;
    unsigned CRCEN:1;
    unsigned PLEN:5;
    unsigned :11;
    unsigned BITO:1;
    unsigned :2;
    unsigned WBO:1;
    unsigned BYTO:2;
  };
  struct {
    unsigned w:32;
  };
};
} typeDCRCCONBITS;
sfr atomic volatile typeDCRCCONBITS DCRCCONbits absolute 0xBF883030;
sfr volatile typeDCRCCONBITS DCRCCONCLRbits absolute 0xBF883034;
sfr volatile typeDCRCCONBITS DCRCCONSETbits absolute 0xBF883038;
sfr volatile typeDCRCCONBITS DCRCCONINVbits absolute 0xBF88303C;
sfr atomic volatile typeDCRCCONBITS DCRCDATAbits absolute 0xBF883040;
sfr volatile typeDCRCCONBITS DCRCDATACLRbits absolute 0xBF883044;
sfr volatile typeDCRCCONBITS DCRCDATASETbits absolute 0xBF883048;
sfr volatile typeDCRCCONBITS DCRCDATAINVbits absolute 0xBF88304C;
sfr atomic volatile typeDCRCCONBITS DCRCXORbits absolute 0xBF883050;
sfr volatile typeDCRCCONBITS DCRCXORCLRbits absolute 0xBF883054;
sfr volatile typeDCRCCONBITS DCRCXORSETbits absolute 0xBF883058;
sfr volatile typeDCRCCONBITS DCRCXORINVbits absolute 0xBF88305C;

typedef struct tagDCH0CONBITS {
union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeDCH0CONBITS;
sfr atomic volatile typeDCH0CONBITS DCH0CONbits absolute 0xBF883060;
sfr volatile typeDCH0CONBITS DCH0CONCLRbits absolute 0xBF883064;
sfr volatile typeDCH0CONBITS DCH0CONSETbits absolute 0xBF883068;
sfr volatile typeDCH0CONBITS DCH0CONINVbits absolute 0xBF88306C;

typedef struct tagDCH0ECONBITS {
union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
};
} typeDCH0ECONBITS;
sfr atomic volatile typeDCH0ECONBITS DCH0ECONbits absolute 0xBF883070;
sfr volatile typeDCH0ECONBITS DCH0ECONCLRbits absolute 0xBF883074;
sfr volatile typeDCH0ECONBITS DCH0ECONSETbits absolute 0xBF883078;
sfr volatile typeDCH0ECONBITS DCH0ECONINVbits absolute 0xBF88307C;

typedef struct tagDCH0INTBITS {
union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeDCH0INTBITS;
sfr atomic volatile typeDCH0INTBITS DCH0INTbits absolute 0xBF883080;
sfr volatile typeDCH0INTBITS DCH0INTCLRbits absolute 0xBF883084;
sfr volatile typeDCH0INTBITS DCH0INTSETbits absolute 0xBF883088;
sfr volatile typeDCH0INTBITS DCH0INTINVbits absolute 0xBF88308C;
sfr atomic volatile typeDCH0INTBITS DCH0SSAbits absolute 0xBF883090;
sfr volatile typeDCH0INTBITS DCH0SSACLRbits absolute 0xBF883094;
sfr volatile typeDCH0INTBITS DCH0SSASETbits absolute 0xBF883098;
sfr volatile typeDCH0INTBITS DCH0SSAINVbits absolute 0xBF88309C;
sfr atomic volatile typeDCH0INTBITS DCH0DSAbits absolute 0xBF8830A0;
sfr volatile typeDCH0INTBITS DCH0DSACLRbits absolute 0xBF8830A4;
sfr volatile typeDCH0INTBITS DCH0DSASETbits absolute 0xBF8830A8;
sfr volatile typeDCH0INTBITS DCH0DSAINVbits absolute 0xBF8830AC;
sfr atomic volatile typeDCH0INTBITS DCH0SSIZbits absolute 0xBF8830B0;
sfr volatile typeDCH0INTBITS DCH0SSIZCLRbits absolute 0xBF8830B4;
sfr volatile typeDCH0INTBITS DCH0SSIZSETbits absolute 0xBF8830B8;
sfr volatile typeDCH0INTBITS DCH0SSIZINVbits absolute 0xBF8830BC;
sfr atomic volatile typeDCH0INTBITS DCH0DSIZbits absolute 0xBF8830C0;
sfr volatile typeDCH0INTBITS DCH0DSIZCLRbits absolute 0xBF8830C4;
sfr volatile typeDCH0INTBITS DCH0DSIZSETbits absolute 0xBF8830C8;
sfr volatile typeDCH0INTBITS DCH0DSIZINVbits absolute 0xBF8830CC;
sfr atomic volatile typeDCH0INTBITS DCH0SPTRbits absolute 0xBF8830D0;
sfr volatile typeDCH0INTBITS DCH0SPTRCLRbits absolute 0xBF8830D4;
sfr volatile typeDCH0INTBITS DCH0SPTRSETbits absolute 0xBF8830D8;
sfr volatile typeDCH0INTBITS DCH0SPTRINVbits absolute 0xBF8830DC;
sfr atomic volatile typeDCH0INTBITS DCH0DPTRbits absolute 0xBF8830E0;
sfr volatile typeDCH0INTBITS DCH0DPTRCLRbits absolute 0xBF8830E4;
sfr volatile typeDCH0INTBITS DCH0DPTRSETbits absolute 0xBF8830E8;
sfr volatile typeDCH0INTBITS DCH0DPTRINVbits absolute 0xBF8830EC;
sfr atomic volatile typeDCH0INTBITS DCH0CSIZbits absolute 0xBF8830F0;
sfr volatile typeDCH0INTBITS DCH0CSIZCLRbits absolute 0xBF8830F4;
sfr volatile typeDCH0INTBITS DCH0CSIZSETbits absolute 0xBF8830F8;
sfr volatile typeDCH0INTBITS DCH0CSIZINVbits absolute 0xBF8830FC;
sfr atomic volatile typeDCH0INTBITS DCH0CPTRbits absolute 0xBF883100;
sfr volatile typeDCH0INTBITS DCH0CPTRCLRbits absolute 0xBF883104;
sfr volatile typeDCH0INTBITS DCH0CPTRSETbits absolute 0xBF883108;
sfr volatile typeDCH0INTBITS DCH0CPTRINVbits absolute 0xBF88310C;
sfr atomic volatile typeDCH0INTBITS DCH0DATbits absolute 0xBF883110;
sfr volatile typeDCH0INTBITS DCH0DATCLRbits absolute 0xBF883114;
sfr volatile typeDCH0INTBITS DCH0DATSETbits absolute 0xBF883118;
sfr volatile typeDCH0INTBITS DCH0DATINVbits absolute 0xBF88311C;

typedef struct tagDCH1CONBITS {
union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeDCH1CONBITS;
sfr atomic volatile typeDCH1CONBITS DCH1CONbits absolute 0xBF883120;
sfr volatile typeDCH1CONBITS DCH1CONCLRbits absolute 0xBF883124;
sfr volatile typeDCH1CONBITS DCH1CONSETbits absolute 0xBF883128;
sfr volatile typeDCH1CONBITS DCH1CONINVbits absolute 0xBF88312C;

typedef struct tagDCH1ECONBITS {
union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
};
} typeDCH1ECONBITS;
sfr atomic volatile typeDCH1ECONBITS DCH1ECONbits absolute 0xBF883130;
sfr volatile typeDCH1ECONBITS DCH1ECONCLRbits absolute 0xBF883134;
sfr volatile typeDCH1ECONBITS DCH1ECONSETbits absolute 0xBF883138;
sfr volatile typeDCH1ECONBITS DCH1ECONINVbits absolute 0xBF88313C;

typedef struct tagDCH1INTBITS {
union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeDCH1INTBITS;
sfr atomic volatile typeDCH1INTBITS DCH1INTbits absolute 0xBF883140;
sfr volatile typeDCH1INTBITS DCH1INTCLRbits absolute 0xBF883144;
sfr volatile typeDCH1INTBITS DCH1INTSETbits absolute 0xBF883148;
sfr volatile typeDCH1INTBITS DCH1INTINVbits absolute 0xBF88314C;
sfr atomic volatile typeDCH1INTBITS DCH1SSAbits absolute 0xBF883150;
sfr volatile typeDCH1INTBITS DCH1SSACLRbits absolute 0xBF883154;
sfr volatile typeDCH1INTBITS DCH1SSASETbits absolute 0xBF883158;
sfr volatile typeDCH1INTBITS DCH1SSAINVbits absolute 0xBF88315C;
sfr atomic volatile typeDCH1INTBITS DCH1DSAbits absolute 0xBF883160;
sfr volatile typeDCH1INTBITS DCH1DSACLRbits absolute 0xBF883164;
sfr volatile typeDCH1INTBITS DCH1DSASETbits absolute 0xBF883168;
sfr volatile typeDCH1INTBITS DCH1DSAINVbits absolute 0xBF88316C;
sfr atomic volatile typeDCH1INTBITS DCH1SSIZbits absolute 0xBF883170;
sfr volatile typeDCH1INTBITS DCH1SSIZCLRbits absolute 0xBF883174;
sfr volatile typeDCH1INTBITS DCH1SSIZSETbits absolute 0xBF883178;
sfr volatile typeDCH1INTBITS DCH1SSIZINVbits absolute 0xBF88317C;
sfr atomic volatile typeDCH1INTBITS DCH1DSIZbits absolute 0xBF883180;
sfr volatile typeDCH1INTBITS DCH1DSIZCLRbits absolute 0xBF883184;
sfr volatile typeDCH1INTBITS DCH1DSIZSETbits absolute 0xBF883188;
sfr volatile typeDCH1INTBITS DCH1DSIZINVbits absolute 0xBF88318C;
sfr atomic volatile typeDCH1INTBITS DCH1SPTRbits absolute 0xBF883190;
sfr volatile typeDCH1INTBITS DCH1SPTRCLRbits absolute 0xBF883194;
sfr volatile typeDCH1INTBITS DCH1SPTRSETbits absolute 0xBF883198;
sfr volatile typeDCH1INTBITS DCH1SPTRINVbits absolute 0xBF88319C;
sfr atomic volatile typeDCH1INTBITS DCH1DPTRbits absolute 0xBF8831A0;
sfr volatile typeDCH1INTBITS DCH1DPTRCLRbits absolute 0xBF8831A4;
sfr volatile typeDCH1INTBITS DCH1DPTRSETbits absolute 0xBF8831A8;
sfr volatile typeDCH1INTBITS DCH1DPTRINVbits absolute 0xBF8831AC;
sfr atomic volatile typeDCH1INTBITS DCH1CSIZbits absolute 0xBF8831B0;
sfr volatile typeDCH1INTBITS DCH1CSIZCLRbits absolute 0xBF8831B4;
sfr volatile typeDCH1INTBITS DCH1CSIZSETbits absolute 0xBF8831B8;
sfr volatile typeDCH1INTBITS DCH1CSIZINVbits absolute 0xBF8831BC;
sfr atomic volatile typeDCH1INTBITS DCH1CPTRbits absolute 0xBF8831C0;
sfr volatile typeDCH1INTBITS DCH1CPTRCLRbits absolute 0xBF8831C4;
sfr volatile typeDCH1INTBITS DCH1CPTRSETbits absolute 0xBF8831C8;
sfr volatile typeDCH1INTBITS DCH1CPTRINVbits absolute 0xBF8831CC;
sfr atomic volatile typeDCH1INTBITS DCH1DATbits absolute 0xBF8831D0;
sfr volatile typeDCH1INTBITS DCH1DATCLRbits absolute 0xBF8831D4;
sfr volatile typeDCH1INTBITS DCH1DATSETbits absolute 0xBF8831D8;
sfr volatile typeDCH1INTBITS DCH1DATINVbits absolute 0xBF8831DC;

typedef struct tagDCH2CONBITS {
union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeDCH2CONBITS;
sfr atomic volatile typeDCH2CONBITS DCH2CONbits absolute 0xBF8831E0;
sfr volatile typeDCH2CONBITS DCH2CONCLRbits absolute 0xBF8831E4;
sfr volatile typeDCH2CONBITS DCH2CONSETbits absolute 0xBF8831E8;
sfr volatile typeDCH2CONBITS DCH2CONINVbits absolute 0xBF8831EC;

typedef struct tagDCH2ECONBITS {
union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
};
} typeDCH2ECONBITS;
sfr atomic volatile typeDCH2ECONBITS DCH2ECONbits absolute 0xBF8831F0;
sfr volatile typeDCH2ECONBITS DCH2ECONCLRbits absolute 0xBF8831F4;
sfr volatile typeDCH2ECONBITS DCH2ECONSETbits absolute 0xBF8831F8;
sfr volatile typeDCH2ECONBITS DCH2ECONINVbits absolute 0xBF8831FC;

typedef struct tagDCH2INTBITS {
union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeDCH2INTBITS;
sfr atomic volatile typeDCH2INTBITS DCH2INTbits absolute 0xBF883200;
sfr volatile typeDCH2INTBITS DCH2INTCLRbits absolute 0xBF883204;
sfr volatile typeDCH2INTBITS DCH2INTSETbits absolute 0xBF883208;
sfr volatile typeDCH2INTBITS DCH2INTINVbits absolute 0xBF88320C;
sfr atomic volatile typeDCH2INTBITS DCH2SSAbits absolute 0xBF883210;
sfr volatile typeDCH2INTBITS DCH2SSACLRbits absolute 0xBF883214;
sfr volatile typeDCH2INTBITS DCH2SSASETbits absolute 0xBF883218;
sfr volatile typeDCH2INTBITS DCH2SSAINVbits absolute 0xBF88321C;
sfr atomic volatile typeDCH2INTBITS DCH2DSAbits absolute 0xBF883220;
sfr volatile typeDCH2INTBITS DCH2DSACLRbits absolute 0xBF883224;
sfr volatile typeDCH2INTBITS DCH2DSASETbits absolute 0xBF883228;
sfr volatile typeDCH2INTBITS DCH2DSAINVbits absolute 0xBF88322C;
sfr atomic volatile typeDCH2INTBITS DCH2SSIZbits absolute 0xBF883230;
sfr volatile typeDCH2INTBITS DCH2SSIZCLRbits absolute 0xBF883234;
sfr volatile typeDCH2INTBITS DCH2SSIZSETbits absolute 0xBF883238;
sfr volatile typeDCH2INTBITS DCH2SSIZINVbits absolute 0xBF88323C;
sfr atomic volatile typeDCH2INTBITS DCH2DSIZbits absolute 0xBF883240;
sfr volatile typeDCH2INTBITS DCH2DSIZCLRbits absolute 0xBF883244;
sfr volatile typeDCH2INTBITS DCH2DSIZSETbits absolute 0xBF883248;
sfr volatile typeDCH2INTBITS DCH2DSIZINVbits absolute 0xBF88324C;
sfr atomic volatile typeDCH2INTBITS DCH2SPTRbits absolute 0xBF883250;
sfr volatile typeDCH2INTBITS DCH2SPTRCLRbits absolute 0xBF883254;
sfr volatile typeDCH2INTBITS DCH2SPTRSETbits absolute 0xBF883258;
sfr volatile typeDCH2INTBITS DCH2SPTRINVbits absolute 0xBF88325C;
sfr atomic volatile typeDCH2INTBITS DCH2DPTRbits absolute 0xBF883260;
sfr volatile typeDCH2INTBITS DCH2DPTRCLRbits absolute 0xBF883264;
sfr volatile typeDCH2INTBITS DCH2DPTRSETbits absolute 0xBF883268;
sfr volatile typeDCH2INTBITS DCH2DPTRINVbits absolute 0xBF88326C;
sfr atomic volatile typeDCH2INTBITS DCH2CSIZbits absolute 0xBF883270;
sfr volatile typeDCH2INTBITS DCH2CSIZCLRbits absolute 0xBF883274;
sfr volatile typeDCH2INTBITS DCH2CSIZSETbits absolute 0xBF883278;
sfr volatile typeDCH2INTBITS DCH2CSIZINVbits absolute 0xBF88327C;
sfr atomic volatile typeDCH2INTBITS DCH2CPTRbits absolute 0xBF883280;
sfr volatile typeDCH2INTBITS DCH2CPTRCLRbits absolute 0xBF883284;
sfr volatile typeDCH2INTBITS DCH2CPTRSETbits absolute 0xBF883288;
sfr volatile typeDCH2INTBITS DCH2CPTRINVbits absolute 0xBF88328C;
sfr atomic volatile typeDCH2INTBITS DCH2DATbits absolute 0xBF883290;
sfr volatile typeDCH2INTBITS DCH2DATCLRbits absolute 0xBF883294;
sfr volatile typeDCH2INTBITS DCH2DATSETbits absolute 0xBF883298;
sfr volatile typeDCH2INTBITS DCH2DATINVbits absolute 0xBF88329C;

typedef struct tagDCH3CONBITS {
union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeDCH3CONBITS;
sfr atomic volatile typeDCH3CONBITS DCH3CONbits absolute 0xBF8832A0;
sfr volatile typeDCH3CONBITS DCH3CONCLRbits absolute 0xBF8832A4;
sfr volatile typeDCH3CONBITS DCH3CONSETbits absolute 0xBF8832A8;
sfr volatile typeDCH3CONBITS DCH3CONINVbits absolute 0xBF8832AC;

typedef struct tagDCH3ECONBITS {
union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
};
} typeDCH3ECONBITS;
sfr atomic volatile typeDCH3ECONBITS DCH3ECONbits absolute 0xBF8832B0;
sfr volatile typeDCH3ECONBITS DCH3ECONCLRbits absolute 0xBF8832B4;
sfr volatile typeDCH3ECONBITS DCH3ECONSETbits absolute 0xBF8832B8;
sfr volatile typeDCH3ECONBITS DCH3ECONINVbits absolute 0xBF8832BC;

typedef struct tagDCH3INTBITS {
union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeDCH3INTBITS;
sfr atomic volatile typeDCH3INTBITS DCH3INTbits absolute 0xBF8832C0;
sfr volatile typeDCH3INTBITS DCH3INTCLRbits absolute 0xBF8832C4;
sfr volatile typeDCH3INTBITS DCH3INTSETbits absolute 0xBF8832C8;
sfr volatile typeDCH3INTBITS DCH3INTINVbits absolute 0xBF8832CC;
sfr atomic volatile typeDCH3INTBITS DCH3SSAbits absolute 0xBF8832D0;
sfr volatile typeDCH3INTBITS DCH3SSACLRbits absolute 0xBF8832D4;
sfr volatile typeDCH3INTBITS DCH3SSASETbits absolute 0xBF8832D8;
sfr volatile typeDCH3INTBITS DCH3SSAINVbits absolute 0xBF8832DC;
sfr atomic volatile typeDCH3INTBITS DCH3DSAbits absolute 0xBF8832E0;
sfr volatile typeDCH3INTBITS DCH3DSACLRbits absolute 0xBF8832E4;
sfr volatile typeDCH3INTBITS DCH3DSASETbits absolute 0xBF8832E8;
sfr volatile typeDCH3INTBITS DCH3DSAINVbits absolute 0xBF8832EC;
sfr atomic volatile typeDCH3INTBITS DCH3SSIZbits absolute 0xBF8832F0;
sfr volatile typeDCH3INTBITS DCH3SSIZCLRbits absolute 0xBF8832F4;
sfr volatile typeDCH3INTBITS DCH3SSIZSETbits absolute 0xBF8832F8;
sfr volatile typeDCH3INTBITS DCH3SSIZINVbits absolute 0xBF8832FC;
sfr atomic volatile typeDCH3INTBITS DCH3DSIZbits absolute 0xBF883300;
sfr volatile typeDCH3INTBITS DCH3DSIZCLRbits absolute 0xBF883304;
sfr volatile typeDCH3INTBITS DCH3DSIZSETbits absolute 0xBF883308;
sfr volatile typeDCH3INTBITS DCH3DSIZINVbits absolute 0xBF88330C;
sfr atomic volatile typeDCH3INTBITS DCH3SPTRbits absolute 0xBF883310;
sfr volatile typeDCH3INTBITS DCH3SPTRCLRbits absolute 0xBF883314;
sfr volatile typeDCH3INTBITS DCH3SPTRSETbits absolute 0xBF883318;
sfr volatile typeDCH3INTBITS DCH3SPTRINVbits absolute 0xBF88331C;
sfr atomic volatile typeDCH3INTBITS DCH3DPTRbits absolute 0xBF883320;
sfr volatile typeDCH3INTBITS DCH3DPTRCLRbits absolute 0xBF883324;
sfr volatile typeDCH3INTBITS DCH3DPTRSETbits absolute 0xBF883328;
sfr volatile typeDCH3INTBITS DCH3DPTRINVbits absolute 0xBF88332C;
sfr atomic volatile typeDCH3INTBITS DCH3CSIZbits absolute 0xBF883330;
sfr volatile typeDCH3INTBITS DCH3CSIZCLRbits absolute 0xBF883334;
sfr volatile typeDCH3INTBITS DCH3CSIZSETbits absolute 0xBF883338;
sfr volatile typeDCH3INTBITS DCH3CSIZINVbits absolute 0xBF88333C;
sfr atomic volatile typeDCH3INTBITS DCH3CPTRbits absolute 0xBF883340;
sfr volatile typeDCH3INTBITS DCH3CPTRCLRbits absolute 0xBF883344;
sfr volatile typeDCH3INTBITS DCH3CPTRSETbits absolute 0xBF883348;
sfr volatile typeDCH3INTBITS DCH3CPTRINVbits absolute 0xBF88334C;
sfr atomic volatile typeDCH3INTBITS DCH3DATbits absolute 0xBF883350;
sfr volatile typeDCH3INTBITS DCH3DATCLRbits absolute 0xBF883354;
sfr volatile typeDCH3INTBITS DCH3DATSETbits absolute 0xBF883358;
sfr volatile typeDCH3INTBITS DCH3DATINVbits absolute 0xBF88335C;

typedef struct tagU1OTGIRBITS {
union {
  unsigned VBUSVDIF:1;
  unsigned :1;
  unsigned SESENDIF:1;
  unsigned SESVDIF:1;
  unsigned ACTVIF:1;
  unsigned LSTATEIF:1;
  unsigned T1MSECIF:1;
  unsigned IDIF:1;
};
} typeU1OTGIRBITS;
sfr volatile typeU1OTGIRBITS U1OTGIRbits absolute 0xBF885040;
sfr volatile typeU1OTGIRBITS U1OTGIRCLRbits absolute 0xBF885044;

typedef struct tagU1OTGIEBITS {
union {
  unsigned VBUSVDIE:1;
  unsigned :1;
  unsigned SESENDIE:1;
  unsigned SESVDIE:1;
  unsigned ACTVIE:1;
  unsigned LSTATEIE:1;
  unsigned T1MSECIE:1;
  unsigned IDIE:1;
};
} typeU1OTGIEBITS;
sfr atomic volatile typeU1OTGIEBITS U1OTGIEbits absolute 0xBF885050;
sfr volatile typeU1OTGIEBITS U1OTGIECLRbits absolute 0xBF885054;
sfr volatile typeU1OTGIEBITS U1OTGIESETbits absolute 0xBF885058;
sfr volatile typeU1OTGIEBITS U1OTGIEINVbits absolute 0xBF88505C;

typedef struct tagU1OTGSTATBITS {
union {
  unsigned VBUSVD:1;
  unsigned :1;
  unsigned SESEND:1;
  unsigned SESVD:1;
  unsigned :1;
  unsigned LSTATE:1;
  unsigned :1;
  unsigned ID:1;
};
} typeU1OTGSTATBITS;
sfr volatile typeU1OTGSTATBITS U1OTGSTATbits absolute 0xBF885060;

typedef struct tagU1OTGCONBITS {
union {
  unsigned VBUSDIS:1;
  unsigned VBUSCHG:1;
  unsigned OTGEN:1;
  unsigned VBUSON:1;
  unsigned DMPULDWN:1;
  unsigned DPPULDWN:1;
  unsigned DMPULUP:1;
  unsigned DPPULUP:1;
};
} typeU1OTGCONBITS;
sfr atomic volatile typeU1OTGCONBITS U1OTGCONbits absolute 0xBF885070;
sfr volatile typeU1OTGCONBITS U1OTGCONCLRbits absolute 0xBF885074;
sfr volatile typeU1OTGCONBITS U1OTGCONSETbits absolute 0xBF885078;
sfr volatile typeU1OTGCONBITS U1OTGCONINVbits absolute 0xBF88507C;

typedef struct tagU1PWRCBITS {
union {
  unsigned USBPWR:1;
  unsigned USUSPEND:1;
  unsigned :1;
  unsigned USBBUSY:1;
  unsigned USLPGRD:1;
  unsigned :2;
  unsigned UACTPND:1;
};
} typeU1PWRCBITS;
sfr atomic volatile typeU1PWRCBITS U1PWRCbits absolute 0xBF885080;
sfr volatile typeU1PWRCBITS U1PWRCCLRbits absolute 0xBF885084;
sfr volatile typeU1PWRCBITS U1PWRCSETbits absolute 0xBF885088;
sfr volatile typeU1PWRCBITS U1PWRCINVbits absolute 0xBF88508C;

typedef struct tagU1IRBITS {
union {
  struct {
    unsigned URSTIF_DETACHIF:1;
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
  struct {
    unsigned URSTIF:1;
  };
};
} typeU1IRBITS;
sfr volatile typeU1IRBITS U1IRbits absolute 0xBF885200;
sfr volatile typeU1IRBITS U1IRCLRbits absolute 0xBF885204;

typedef struct tagU1IEBITS {
union {
  struct {
    unsigned URSTIE_DETACHIE:1;
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
  struct {
    unsigned URSTIE:1;
  };
};
} typeU1IEBITS;
sfr atomic volatile typeU1IEBITS U1IEbits absolute 0xBF885210;
sfr volatile typeU1IEBITS U1IECLRbits absolute 0xBF885214;
sfr volatile typeU1IEBITS U1IESETbits absolute 0xBF885218;
sfr volatile typeU1IEBITS U1IEINVbits absolute 0xBF88521C;

typedef struct tagU1EIRBITS {
union {
  struct {
    unsigned PIDEF:1;
    unsigned CRC5EF_EOFEF:1;
    unsigned CRC16EF:1;
    unsigned DFN8EF:1;
    unsigned BTOEF:1;
    unsigned DMAEF:1;
    unsigned BMXEF:1;
    unsigned BTSEF:1;
  };
  struct {
    unsigned :1;
    unsigned CRC5EF:1;
  };
  struct {
    unsigned :1;
    unsigned EOFEF:1;
  };
};
} typeU1EIRBITS;
sfr volatile typeU1EIRBITS U1EIRbits absolute 0xBF885220;
sfr volatile typeU1EIRBITS U1EIRCLRbits absolute 0xBF885224;

typedef struct tagU1EIEBITS {
union {
  struct {
    unsigned PIDEE:1;
    unsigned CRC5EE_EOFEE:1;
    unsigned CRC16EE:1;
    unsigned DFN8EE:1;
    unsigned BTOEE:1;
    unsigned DMAEE:1;
    unsigned BMXEE:1;
    unsigned BTSEE:1;
  };
  struct {
    unsigned :1;
    unsigned CRC5EE:1;
  };
  struct {
    unsigned :1;
    unsigned EOFEE:1;
  };
};
} typeU1EIEBITS;
sfr atomic volatile typeU1EIEBITS U1EIEbits absolute 0xBF885230;
sfr volatile typeU1EIEBITS U1EIECLRbits absolute 0xBF885234;
sfr volatile typeU1EIEBITS U1EIESETbits absolute 0xBF885238;
sfr volatile typeU1EIEBITS U1EIEINVbits absolute 0xBF88523C;

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
sfr volatile typeU1STATBITS U1STATbits absolute 0xBF885240;

typedef struct tagU1CONBITS {
union {
  struct {
    unsigned USBEN_SOFEN:1;
    unsigned PPBRST:1;
    unsigned RESUME:1;
    unsigned HOSTEN:1;
    unsigned USBRST:1;
    unsigned PKTDIS_TOKBUSY:1;
    unsigned SE0:1;
    unsigned JSTATE:1;
  };
  struct {
    unsigned USBEN:1;
  };
  struct {
    unsigned SOFEN:1;
    unsigned :4;
    unsigned PKTDIS:1;
  };
  struct {
    unsigned :5;
    unsigned TOKBUSY:1;
  };
};
} typeU1CONBITS;
sfr atomic volatile typeU1CONBITS U1CONbits absolute 0xBF885250;
sfr volatile typeU1CONBITS U1CONCLRbits absolute 0xBF885254;
sfr volatile typeU1CONBITS U1CONSETbits absolute 0xBF885258;
sfr volatile typeU1CONBITS U1CONINVbits absolute 0xBF88525C;

typedef struct tagU1ADDRBITS {
union {
  struct {
    unsigned DEVADDR:7;
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
  };
};
} typeU1ADDRBITS;
sfr atomic volatile typeU1ADDRBITS U1ADDRbits absolute 0xBF885260;
sfr volatile typeU1ADDRBITS U1ADDRCLRbits absolute 0xBF885264;
sfr volatile typeU1ADDRBITS U1ADDRSETbits absolute 0xBF885268;
sfr volatile typeU1ADDRBITS U1ADDRINVbits absolute 0xBF88526C;

typedef struct tagU1BDTP1BITS {
union {
  unsigned :1;
  unsigned BDTPTRL:7;
};
} typeU1BDTP1BITS;
sfr atomic volatile typeU1BDTP1BITS U1BDTP1bits absolute 0xBF885270;
sfr volatile typeU1BDTP1BITS U1BDTP1CLRbits absolute 0xBF885274;
sfr volatile typeU1BDTP1BITS U1BDTP1SETbits absolute 0xBF885278;
sfr volatile typeU1BDTP1BITS U1BDTP1INVbits absolute 0xBF88527C;

typedef struct tagU1FRMLBITS {
union {
  struct {
    unsigned FRML:8;
  };
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
sfr volatile typeU1FRMLBITS U1FRMLbits absolute 0xBF885280;

typedef struct tagU1FRMHBITS {
union {
  struct {
    unsigned FRMH:3;
  };
  struct {
    unsigned FRM8:1;
    unsigned FRM9:1;
    unsigned FRM10:1;
  };
};
} typeU1FRMHBITS;
sfr volatile typeU1FRMHBITS U1FRMHbits absolute 0xBF885290;

typedef struct tagU1TOKBITS {
union {
  struct {
    unsigned EP:4;
    unsigned PID:4;
  };
  struct {
    unsigned EP0:1;
  };
  struct {
    unsigned :1;
    unsigned EP1:1;
    unsigned EP2:1;
    unsigned EP3:1;
    unsigned PID0:1;
  };
  struct {
    unsigned :5;
    unsigned PID1:1;
    unsigned PID2:1;
    unsigned PID3:1;
  };
};
} typeU1TOKBITS;
sfr atomic volatile typeU1TOKBITS U1TOKbits absolute 0xBF8852A0;
sfr volatile typeU1TOKBITS U1TOKCLRbits absolute 0xBF8852A4;
sfr volatile typeU1TOKBITS U1TOKSETbits absolute 0xBF8852A8;
sfr volatile typeU1TOKBITS U1TOKINVbits absolute 0xBF8852AC;

typedef struct tagU1SOFBITS {
union {
  unsigned CNT:8;
};
} typeU1SOFBITS;
sfr atomic volatile typeU1SOFBITS U1SOFbits absolute 0xBF8852B0;
sfr volatile typeU1SOFBITS U1SOFCLRbits absolute 0xBF8852B4;
sfr volatile typeU1SOFBITS U1SOFSETbits absolute 0xBF8852B8;
sfr volatile typeU1SOFBITS U1SOFINVbits absolute 0xBF8852BC;

typedef struct tagU1BDTP2BITS {
union {
  unsigned BDTPTRH:8;
};
} typeU1BDTP2BITS;
sfr atomic volatile typeU1BDTP2BITS U1BDTP2bits absolute 0xBF8852C0;
sfr volatile typeU1BDTP2BITS U1BDTP2CLRbits absolute 0xBF8852C4;
sfr volatile typeU1BDTP2BITS U1BDTP2SETbits absolute 0xBF8852C8;
sfr volatile typeU1BDTP2BITS U1BDTP2INVbits absolute 0xBF8852CC;

typedef struct tagU1BDTP3BITS {
union {
  unsigned BDTPTRU:8;
};
} typeU1BDTP3BITS;
sfr atomic volatile typeU1BDTP3BITS U1BDTP3bits absolute 0xBF8852D0;
sfr volatile typeU1BDTP3BITS U1BDTP3CLRbits absolute 0xBF8852D4;
sfr volatile typeU1BDTP3BITS U1BDTP3SETbits absolute 0xBF8852D8;
sfr volatile typeU1BDTP3BITS U1BDTP3INVbits absolute 0xBF8852DC;

typedef struct tagU1CNFG1BITS {
union {
  unsigned UASUSPND:1;
  unsigned :3;
  unsigned USBSIDL:1;
  unsigned :1;
  unsigned UOEMON:1;
  unsigned UTEYE:1;
};
} typeU1CNFG1BITS;
sfr atomic volatile typeU1CNFG1BITS U1CNFG1bits absolute 0xBF8852E0;
sfr volatile typeU1CNFG1BITS U1CNFG1CLRbits absolute 0xBF8852E4;
sfr volatile typeU1CNFG1BITS U1CNFG1SETbits absolute 0xBF8852E8;
sfr volatile typeU1CNFG1BITS U1CNFG1INVbits absolute 0xBF8852EC;

typedef struct tagU1EP0BITS {
union {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
  unsigned :1;
  unsigned RETRYDIS:1;
  unsigned LSPD:1;
};
} typeU1EP0BITS;
sfr atomic volatile typeU1EP0BITS U1EP0bits absolute 0xBF885300;
sfr volatile typeU1EP0BITS U1EP0CLRbits absolute 0xBF885304;
sfr volatile typeU1EP0BITS U1EP0SETbits absolute 0xBF885308;
sfr volatile typeU1EP0BITS U1EP0INVbits absolute 0xBF88530C;

typedef struct tagU1EP1BITS {
union {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
};
} typeU1EP1BITS;
sfr atomic volatile typeU1EP1BITS U1EP1bits absolute 0xBF885310;
sfr volatile typeU1EP1BITS U1EP1CLRbits absolute 0xBF885314;
sfr volatile typeU1EP1BITS U1EP1SETbits absolute 0xBF885318;
sfr volatile typeU1EP1BITS U1EP1INVbits absolute 0xBF88531C;

typedef struct tagU1EP2BITS {
union {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
};
} typeU1EP2BITS;
sfr atomic volatile typeU1EP2BITS U1EP2bits absolute 0xBF885320;
sfr volatile typeU1EP2BITS U1EP2CLRbits absolute 0xBF885324;
sfr volatile typeU1EP2BITS U1EP2SETbits absolute 0xBF885328;
sfr volatile typeU1EP2BITS U1EP2INVbits absolute 0xBF88532C;

typedef struct tagU1EP3BITS {
union {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
};
} typeU1EP3BITS;
sfr atomic volatile typeU1EP3BITS U1EP3bits absolute 0xBF885330;
sfr volatile typeU1EP3BITS U1EP3CLRbits absolute 0xBF885334;
sfr volatile typeU1EP3BITS U1EP3SETbits absolute 0xBF885338;
sfr volatile typeU1EP3BITS U1EP3INVbits absolute 0xBF88533C;

typedef struct tagU1EP4BITS {
union {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
};
} typeU1EP4BITS;
sfr atomic volatile typeU1EP4BITS U1EP4bits absolute 0xBF885340;
sfr volatile typeU1EP4BITS U1EP4CLRbits absolute 0xBF885344;
sfr volatile typeU1EP4BITS U1EP4SETbits absolute 0xBF885348;
sfr volatile typeU1EP4BITS U1EP4INVbits absolute 0xBF88534C;

typedef struct tagU1EP5BITS {
union {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
};
} typeU1EP5BITS;
sfr atomic volatile typeU1EP5BITS U1EP5bits absolute 0xBF885350;
sfr volatile typeU1EP5BITS U1EP5CLRbits absolute 0xBF885354;
sfr volatile typeU1EP5BITS U1EP5SETbits absolute 0xBF885358;
sfr volatile typeU1EP5BITS U1EP5INVbits absolute 0xBF88535C;

typedef struct tagU1EP6BITS {
union {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
};
} typeU1EP6BITS;
sfr atomic volatile typeU1EP6BITS U1EP6bits absolute 0xBF885360;
sfr volatile typeU1EP6BITS U1EP6CLRbits absolute 0xBF885364;
sfr volatile typeU1EP6BITS U1EP6SETbits absolute 0xBF885368;
sfr volatile typeU1EP6BITS U1EP6INVbits absolute 0xBF88536C;

typedef struct tagU1EP7BITS {
union {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
};
} typeU1EP7BITS;
sfr atomic volatile typeU1EP7BITS U1EP7bits absolute 0xBF885370;
sfr volatile typeU1EP7BITS U1EP7CLRbits absolute 0xBF885374;
sfr volatile typeU1EP7BITS U1EP7SETbits absolute 0xBF885378;
sfr volatile typeU1EP7BITS U1EP7INVbits absolute 0xBF88537C;

typedef struct tagU1EP8BITS {
union {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
};
} typeU1EP8BITS;
sfr atomic volatile typeU1EP8BITS U1EP8bits absolute 0xBF885380;
sfr volatile typeU1EP8BITS U1EP8CLRbits absolute 0xBF885384;
sfr volatile typeU1EP8BITS U1EP8SETbits absolute 0xBF885388;
sfr volatile typeU1EP8BITS U1EP8INVbits absolute 0xBF88538C;

typedef struct tagU1EP9BITS {
union {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
};
} typeU1EP9BITS;
sfr atomic volatile typeU1EP9BITS U1EP9bits absolute 0xBF885390;
sfr volatile typeU1EP9BITS U1EP9CLRbits absolute 0xBF885394;
sfr volatile typeU1EP9BITS U1EP9SETbits absolute 0xBF885398;
sfr volatile typeU1EP9BITS U1EP9INVbits absolute 0xBF88539C;

typedef struct tagU1EP10BITS {
union {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
};
} typeU1EP10BITS;
sfr atomic volatile typeU1EP10BITS U1EP10bits absolute 0xBF8853A0;
sfr volatile typeU1EP10BITS U1EP10CLRbits absolute 0xBF8853A4;
sfr volatile typeU1EP10BITS U1EP10SETbits absolute 0xBF8853A8;
sfr volatile typeU1EP10BITS U1EP10INVbits absolute 0xBF8853AC;

typedef struct tagU1EP11BITS {
union {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
};
} typeU1EP11BITS;
sfr atomic volatile typeU1EP11BITS U1EP11bits absolute 0xBF8853B0;
sfr volatile typeU1EP11BITS U1EP11CLRbits absolute 0xBF8853B4;
sfr volatile typeU1EP11BITS U1EP11SETbits absolute 0xBF8853B8;
sfr volatile typeU1EP11BITS U1EP11INVbits absolute 0xBF8853BC;

typedef struct tagU1EP12BITS {
union {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
};
} typeU1EP12BITS;
sfr atomic volatile typeU1EP12BITS U1EP12bits absolute 0xBF8853C0;
sfr volatile typeU1EP12BITS U1EP12CLRbits absolute 0xBF8853C4;
sfr volatile typeU1EP12BITS U1EP12SETbits absolute 0xBF8853C8;
sfr volatile typeU1EP12BITS U1EP12INVbits absolute 0xBF8853CC;

typedef struct tagU1EP13BITS {
union {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
};
} typeU1EP13BITS;
sfr atomic volatile typeU1EP13BITS U1EP13bits absolute 0xBF8853D0;
sfr volatile typeU1EP13BITS U1EP13CLRbits absolute 0xBF8853D4;
sfr volatile typeU1EP13BITS U1EP13SETbits absolute 0xBF8853D8;
sfr volatile typeU1EP13BITS U1EP13INVbits absolute 0xBF8853DC;

typedef struct tagU1EP14BITS {
union {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
};
} typeU1EP14BITS;
sfr atomic volatile typeU1EP14BITS U1EP14bits absolute 0xBF8853E0;
sfr volatile typeU1EP14BITS U1EP14CLRbits absolute 0xBF8853E4;
sfr volatile typeU1EP14BITS U1EP14SETbits absolute 0xBF8853E8;
sfr volatile typeU1EP14BITS U1EP14INVbits absolute 0xBF8853EC;

typedef struct tagU1EP15BITS {
union {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
};
} typeU1EP15BITS;
sfr atomic volatile typeU1EP15BITS U1EP15bits absolute 0xBF8853F0;
sfr volatile typeU1EP15BITS U1EP15CLRbits absolute 0xBF8853F4;
sfr volatile typeU1EP15BITS U1EP15SETbits absolute 0xBF8853F8;
sfr volatile typeU1EP15BITS U1EP15INVbits absolute 0xBF8853FC;

typedef struct tagANSELABITS {
union {
  struct {
    unsigned ANSA0:1;
    unsigned ANSA1:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeANSELABITS;
sfr atomic volatile typeANSELABITS ANSELAbits absolute 0xBF886000;
sfr volatile typeANSELABITS ANSELACLRbits absolute 0xBF886004;
sfr volatile typeANSELABITS ANSELASETbits absolute 0xBF886008;
sfr volatile typeANSELABITS ANSELAINVbits absolute 0xBF88600C;

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
  struct {
    unsigned w:32;
  };
};
} typeTRISABITS;
sfr atomic volatile typeTRISABITS TRISAbits absolute 0xBF886010;
sfr volatile typeTRISABITS TRISACLRbits absolute 0xBF886014;
sfr volatile typeTRISABITS TRISASETbits absolute 0xBF886018;
sfr volatile typeTRISABITS TRISAINVbits absolute 0xBF88601C;

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
  struct {
    unsigned w:32;
  };
};
} typePORTABITS;
sfr atomic volatile typePORTABITS PORTAbits absolute 0xBF886020;
sfr volatile typePORTABITS PORTACLRbits absolute 0xBF886024;
sfr volatile typePORTABITS PORTASETbits absolute 0xBF886028;
sfr volatile typePORTABITS PORTAINVbits absolute 0xBF88602C;

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
  struct {
    unsigned w:32;
  };
};
} typeLATABITS;
sfr atomic volatile typeLATABITS LATAbits absolute 0xBF886030;
sfr volatile typeLATABITS LATACLRbits absolute 0xBF886034;
sfr volatile typeLATABITS LATASETbits absolute 0xBF886038;
sfr volatile typeLATABITS LATAINVbits absolute 0xBF88603C;

typedef struct tagODCABITS {
union {
  struct {
    unsigned :7;
    unsigned ODCA7:1;
    unsigned ODCA8:1;
    unsigned ODCA9:1;
    unsigned ODCA10:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeODCABITS;
sfr atomic volatile typeODCABITS ODCAbits absolute 0xBF886040;
sfr volatile typeODCABITS ODCACLRbits absolute 0xBF886044;
sfr volatile typeODCABITS ODCASETbits absolute 0xBF886048;
sfr volatile typeODCABITS ODCAINVbits absolute 0xBF88604C;

typedef struct tagCNPUABITS {
union {
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
  struct {
    unsigned w:32;
  };
};
} typeCNPUABITS;
sfr atomic volatile typeCNPUABITS CNPUAbits absolute 0xBF886050;
sfr volatile typeCNPUABITS CNPUACLRbits absolute 0xBF886054;
sfr volatile typeCNPUABITS CNPUASETbits absolute 0xBF886058;
sfr volatile typeCNPUABITS CNPUAINVbits absolute 0xBF88605C;

typedef struct tagCNPDABITS {
union {
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
  struct {
    unsigned w:32;
  };
};
} typeCNPDABITS;
sfr atomic volatile typeCNPDABITS CNPDAbits absolute 0xBF886060;
sfr volatile typeCNPDABITS CNPDACLRbits absolute 0xBF886064;
sfr volatile typeCNPDABITS CNPDASETbits absolute 0xBF886068;
sfr volatile typeCNPDABITS CNPDAINVbits absolute 0xBF88606C;

typedef struct tagCNCONABITS {
union {
  struct {
    unsigned :13;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNCONABITS;
sfr atomic volatile typeCNCONABITS CNCONAbits absolute 0xBF886070;
sfr volatile typeCNCONABITS CNCONACLRbits absolute 0xBF886074;
sfr volatile typeCNCONABITS CNCONASETbits absolute 0xBF886078;
sfr volatile typeCNCONABITS CNCONAINVbits absolute 0xBF88607C;

typedef struct tagCNENABITS {
union {
  struct {
    unsigned CNIEA0:1;
    unsigned CNIEA1:1;
    unsigned CNIEA2:1;
    unsigned CNIEA3:1;
    unsigned CNIEA4:1;
    unsigned :2;
    unsigned CNIEA7:1;
    unsigned CNIEA8:1;
    unsigned CNIEA9:1;
    unsigned CNIEA10:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNENABITS;
sfr atomic volatile typeCNENABITS CNENAbits absolute 0xBF886080;
sfr volatile typeCNENABITS CNENACLRbits absolute 0xBF886084;
sfr volatile typeCNENABITS CNENASETbits absolute 0xBF886088;
sfr volatile typeCNENABITS CNENAINVbits absolute 0xBF88608C;

typedef struct tagCNSTATABITS {
union {
  struct {
    unsigned CNSTATA0:1;
    unsigned CNSTATA1:1;
    unsigned CNSTATA2:1;
    unsigned CNSTATA3:1;
    unsigned CNSTATA4:1;
    unsigned :2;
    unsigned CNSTATA7:1;
    unsigned CNSTATA8:1;
    unsigned CNSTATA9:1;
    unsigned CNSTATA10:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNSTATABITS;
sfr atomic volatile typeCNSTATABITS CNSTATAbits absolute 0xBF886090;
sfr volatile typeCNSTATABITS CNSTATACLRbits absolute 0xBF886094;
sfr volatile typeCNSTATABITS CNSTATASETbits absolute 0xBF886098;
sfr volatile typeCNSTATABITS CNSTATAINVbits absolute 0xBF88609C;

typedef struct tagANSELBBITS {
union {
  struct {
    unsigned ANSB0:1;
    unsigned ANSB1:1;
    unsigned ANSB2:1;
    unsigned ANSB3:1;
    unsigned :8;
    unsigned ANSB12:1;
    unsigned ANSB13:1;
    unsigned ANSB14:1;
    unsigned ANSB15:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeANSELBBITS;
sfr atomic volatile typeANSELBBITS ANSELBbits absolute 0xBF886100;
sfr volatile typeANSELBBITS ANSELBCLRbits absolute 0xBF886104;
sfr volatile typeANSELBBITS ANSELBSETbits absolute 0xBF886108;
sfr volatile typeANSELBBITS ANSELBINVbits absolute 0xBF88610C;

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
  struct {
    unsigned w:32;
  };
};
} typeTRISBBITS;
sfr atomic volatile typeTRISBBITS TRISBbits absolute 0xBF886110;
sfr volatile typeTRISBBITS TRISBCLRbits absolute 0xBF886114;
sfr volatile typeTRISBBITS TRISBSETbits absolute 0xBF886118;
sfr volatile typeTRISBBITS TRISBINVbits absolute 0xBF88611C;

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
  struct {
    unsigned w:32;
  };
};
} typePORTBBITS;
sfr atomic volatile typePORTBBITS PORTBbits absolute 0xBF886120;
sfr volatile typePORTBBITS PORTBCLRbits absolute 0xBF886124;
sfr volatile typePORTBBITS PORTBSETbits absolute 0xBF886128;
sfr volatile typePORTBBITS PORTBINVbits absolute 0xBF88612C;

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
  struct {
    unsigned w:32;
  };
};
} typeLATBBITS;
sfr atomic volatile typeLATBBITS LATBbits absolute 0xBF886130;
sfr volatile typeLATBBITS LATBCLRbits absolute 0xBF886134;
sfr volatile typeLATBBITS LATBSETbits absolute 0xBF886138;
sfr volatile typeLATBBITS LATBINVbits absolute 0xBF88613C;

typedef struct tagODCBBITS {
union {
  struct {
    unsigned :4;
    unsigned ODCB4:1;
    unsigned ODCB5:1;
    unsigned ODCB6:1;
    unsigned ODCB7:1;
    unsigned ODCB8:1;
    unsigned ODCB9:1;
    unsigned ODCB10:1;
    unsigned ODCB11:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeODCBBITS;
sfr atomic volatile typeODCBBITS ODCBbits absolute 0xBF886140;
sfr volatile typeODCBBITS ODCBCLRbits absolute 0xBF886144;
sfr volatile typeODCBBITS ODCBSETbits absolute 0xBF886148;
sfr volatile typeODCBBITS ODCBINVbits absolute 0xBF88614C;

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
  struct {
    unsigned w:32;
  };
};
} typeCNPUBBITS;
sfr atomic volatile typeCNPUBBITS CNPUBbits absolute 0xBF886150;
sfr volatile typeCNPUBBITS CNPUBCLRbits absolute 0xBF886154;
sfr volatile typeCNPUBBITS CNPUBSETbits absolute 0xBF886158;
sfr volatile typeCNPUBBITS CNPUBINVbits absolute 0xBF88615C;

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
  struct {
    unsigned w:32;
  };
};
} typeCNPDBBITS;
sfr atomic volatile typeCNPDBBITS CNPDBbits absolute 0xBF886160;
sfr volatile typeCNPDBBITS CNPDBCLRbits absolute 0xBF886164;
sfr volatile typeCNPDBBITS CNPDBSETbits absolute 0xBF886168;
sfr volatile typeCNPDBBITS CNPDBINVbits absolute 0xBF88616C;

typedef struct tagCNCONBBITS {
union {
  struct {
    unsigned :13;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNCONBBITS;
sfr atomic volatile typeCNCONBBITS CNCONBbits absolute 0xBF886170;
sfr volatile typeCNCONBBITS CNCONBCLRbits absolute 0xBF886174;
sfr volatile typeCNCONBBITS CNCONBSETbits absolute 0xBF886178;
sfr volatile typeCNCONBBITS CNCONBINVbits absolute 0xBF88617C;

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
  struct {
    unsigned w:32;
  };
};
} typeCNENBBITS;
sfr atomic volatile typeCNENBBITS CNENBbits absolute 0xBF886180;
sfr volatile typeCNENBBITS CNENBCLRbits absolute 0xBF886184;
sfr volatile typeCNENBBITS CNENBSETbits absolute 0xBF886188;
sfr volatile typeCNENBBITS CNENBINVbits absolute 0xBF88618C;

typedef struct tagCNSTATBBITS {
union {
  struct {
    unsigned CNSTATB0:1;
    unsigned CNSTATB1:1;
    unsigned CNSTATB2:1;
    unsigned CNSTATB3:1;
    unsigned CNSTATB4:1;
    unsigned CNSTATB5:1;
    unsigned CNSTATB6:1;
    unsigned CNSTATB7:1;
    unsigned CNSTATB8:1;
    unsigned CNSTATB9:1;
    unsigned CNSTATB10:1;
    unsigned CNSTATB11:1;
    unsigned CNSTATB12:1;
    unsigned CNSTATB13:1;
    unsigned CNSTATB14:1;
    unsigned CNSTATB15:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNSTATBBITS;
sfr atomic volatile typeCNSTATBBITS CNSTATBbits absolute 0xBF886190;
sfr volatile typeCNSTATBBITS CNSTATBCLRbits absolute 0xBF886194;
sfr volatile typeCNSTATBBITS CNSTATBSETbits absolute 0xBF886198;
sfr volatile typeCNSTATBBITS CNSTATBINVbits absolute 0xBF88619C;

typedef struct tagANSELCBITS {
union {
  struct {
    unsigned ANSC0:1;
    unsigned ANSC1:1;
    unsigned ANSC2:1;
    unsigned ANSC3:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeANSELCBITS;
sfr atomic volatile typeANSELCBITS ANSELCbits absolute 0xBF886200;
sfr volatile typeANSELCBITS ANSELCCLRbits absolute 0xBF886204;
sfr volatile typeANSELCBITS ANSELCSETbits absolute 0xBF886208;
sfr volatile typeANSELCBITS ANSELCINVbits absolute 0xBF88620C;

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
  struct {
    unsigned w:32;
  };
};
} typeTRISCBITS;
sfr atomic volatile typeTRISCBITS TRISCbits absolute 0xBF886210;
sfr volatile typeTRISCBITS TRISCCLRbits absolute 0xBF886214;
sfr volatile typeTRISCBITS TRISCSETbits absolute 0xBF886218;
sfr volatile typeTRISCBITS TRISCINVbits absolute 0xBF88621C;

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
  struct {
    unsigned w:32;
  };
};
} typePORTCBITS;
sfr atomic volatile typePORTCBITS PORTCbits absolute 0xBF886220;
sfr volatile typePORTCBITS PORTCCLRbits absolute 0xBF886224;
sfr volatile typePORTCBITS PORTCSETbits absolute 0xBF886228;
sfr volatile typePORTCBITS PORTCINVbits absolute 0xBF88622C;

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
  struct {
    unsigned w:32;
  };
};
} typeLATCBITS;
sfr atomic volatile typeLATCBITS LATCbits absolute 0xBF886230;
sfr volatile typeLATCBITS LATCCLRbits absolute 0xBF886234;
sfr volatile typeLATCBITS LATCSETbits absolute 0xBF886238;
sfr volatile typeLATCBITS LATCINVbits absolute 0xBF88623C;

typedef struct tagODCCBITS {
union {
  struct {
    unsigned :4;
    unsigned ODCC4:1;
    unsigned ODCC5:1;
    unsigned ODCC6:1;
    unsigned ODCC7:1;
    unsigned ODCC8:1;
    unsigned ODCC9:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeODCCBITS;
sfr atomic volatile typeODCCBITS ODCCbits absolute 0xBF886240;
sfr volatile typeODCCBITS ODCCCLRbits absolute 0xBF886244;
sfr volatile typeODCCBITS ODCCSETbits absolute 0xBF886248;
sfr volatile typeODCCBITS ODCCINVbits absolute 0xBF88624C;

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
  };
  struct {
    unsigned w:32;
  };
};
} typeCNPUCBITS;
sfr atomic volatile typeCNPUCBITS CNPUCbits absolute 0xBF886250;
sfr volatile typeCNPUCBITS CNPUCCLRbits absolute 0xBF886254;
sfr volatile typeCNPUCBITS CNPUCSETbits absolute 0xBF886258;
sfr volatile typeCNPUCBITS CNPUCINVbits absolute 0xBF88625C;

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
  };
  struct {
    unsigned w:32;
  };
};
} typeCNPDCBITS;
sfr atomic volatile typeCNPDCBITS CNPDCbits absolute 0xBF886260;
sfr volatile typeCNPDCBITS CNPDCCLRbits absolute 0xBF886264;
sfr volatile typeCNPDCBITS CNPDCSETbits absolute 0xBF886268;
sfr volatile typeCNPDCBITS CNPDCINVbits absolute 0xBF88626C;

typedef struct tagCNCONCBITS {
union {
  struct {
    unsigned :13;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNCONCBITS;
sfr atomic volatile typeCNCONCBITS CNCONCbits absolute 0xBF886270;
sfr volatile typeCNCONCBITS CNCONCCLRbits absolute 0xBF886274;
sfr volatile typeCNCONCBITS CNCONCSETbits absolute 0xBF886278;
sfr volatile typeCNCONCBITS CNCONCINVbits absolute 0xBF88627C;

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
  };
  struct {
    unsigned w:32;
  };
};
} typeCNENCBITS;
sfr atomic volatile typeCNENCBITS CNENCbits absolute 0xBF886280;
sfr volatile typeCNENCBITS CNENCCLRbits absolute 0xBF886284;
sfr volatile typeCNENCBITS CNENCSETbits absolute 0xBF886288;
sfr volatile typeCNENCBITS CNENCINVbits absolute 0xBF88628C;

typedef struct tagCNSTATCBITS {
union {
  struct {
    unsigned CNSTATC0:1;
    unsigned CNSTATC1:1;
    unsigned CNSTATC2:1;
    unsigned CNSTATC3:1;
    unsigned CNSTATC4:1;
    unsigned CNSTATC5:1;
    unsigned CNSTATC6:1;
    unsigned CNSTATC7:1;
    unsigned CNSTATC8:1;
    unsigned CNSTATC9:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNSTATCBITS;
sfr atomic volatile typeCNSTATCBITS CNSTATCbits absolute 0xBF886290;
sfr volatile typeCNSTATCBITS CNSTATCCLRbits absolute 0xBF886294;
sfr volatile typeCNSTATCBITS CNSTATCSETbits absolute 0xBF886298;
sfr volatile typeCNSTATCBITS CNSTATCINVbits absolute 0xBF88629C;
