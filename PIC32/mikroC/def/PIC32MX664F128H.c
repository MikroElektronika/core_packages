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

const unsigned long __BOOT_FLASH_SIZE = 0x00002FF0;

const unsigned long __FLASH_SIZE = 0x00020000;

// FLASH library legacy constants & requirements
const unsigned int _FLASH_ERASE = 0x1000;
const unsigned int _FLASH_WRITE_LATCH = 0x0200;
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
const unsigned int IVT_SPI_1                 = 0x0017;
const unsigned int IVT_I2C_3                 = 0x0018;
const unsigned int IVT_I2C_1A                = 0x0018;
const unsigned int IVT_SPI_3                 = 0x0018;
const unsigned int IVT_SPI_1A                = 0x0018;
const unsigned int IVT_UART_1                = 0x0018;
const unsigned int IVT_UART_1A               = 0x0018;
const unsigned int IVT_I2C_1                 = 0x0019;
const unsigned int IVT_CHANGE_NOTICE         = 0x001A;
const unsigned int IVT_ADC                   = 0x001B;
const unsigned int IVT_PMP                   = 0x001C;
const unsigned int IVT_COMPARATOR_1          = 0x001D;
const unsigned int IVT_COMPARATOR_2          = 0x001E;
const unsigned int IVT_I2C_4                 = 0x001F;
const unsigned int IVT_I2C_2A                = 0x001F;
const unsigned int IVT_SPI_2                 = 0x001F;
const unsigned int IVT_SPI_2A                = 0x001F;
const unsigned int IVT_UART_3                = 0x001F;
const unsigned int IVT_UART_2A               = 0x001F;
const unsigned int IVT_I2C_5                 = 0x0020;
const unsigned int IVT_I2C_3A                = 0x0020;
const unsigned int IVT_SPI_4                 = 0x0020;
const unsigned int IVT_SPI_3A                = 0x0020;
const unsigned int IVT_UART_2                = 0x0020;
const unsigned int IVT_UART_3A               = 0x0020;
const unsigned int IVT_I2C_2                 = 0x0021;
const unsigned int IVT_FAIL_SAFE_MONITOR     = 0x0022;
const unsigned int IVT_RTCC                  = 0x0023;
const unsigned int IVT_DMA_0                 = 0x0024;
const unsigned int IVT_DMA_1                 = 0x0025;
const unsigned int IVT_DMA_2                 = 0x0026;
const unsigned int IVT_DMA_3                 = 0x0027;
const unsigned int IVT_DMA_4                 = 0x0028;
const unsigned int IVT_DMA_5                 = 0x0029;
const unsigned int IVT_DMA_6                 = 0x002A;
const unsigned int IVT_DMA_7                 = 0x002B;
const unsigned int IVT_FCE                   = 0x002C;
const unsigned int IVT_USB_1                 = 0x002D;
const unsigned int IVT_CAN_1                 = 0x002E;
const unsigned int IVT_CAN_2                 = 0x002F;
const unsigned int IVT_ETH                   = 0x0030;
const unsigned int IVT_UART_1B               = 0x0031;
const unsigned int IVT_UART_4                = 0x0031;
const unsigned int IVT_UART_6                = 0x0032;
const unsigned int IVT_UART_2B               = 0x0032;
const unsigned int IVT_UART_5                = 0x0033;
const unsigned int IVT_UART_3B               = 0x0033;



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

sfr atomic unsigned long   volatile I2C3CON          absolute 0xBF805000;
sfr unsigned long   volatile I2C3CONCLR       absolute 0xBF805004;
sfr unsigned long   volatile I2C3CONSET       absolute 0xBF805008;
sfr unsigned long   volatile I2C3CONINV       absolute 0xBF80500C;
    // I2C3CON bits
    sbit  ON__I2C3CON_bit at I2C3CON.B15;
    sbit  SIDL_I2C3CON_bit at I2C3CON.B13;
    const register unsigned short int SCLREL = 12;
    sbit  SCLREL_bit at I2C3CON.B12;
    const register unsigned short int STRICT = 11;
    sbit  STRICT_bit at I2C3CON.B11;
    const register unsigned short int A10M = 10;
    sbit  A10M_bit at I2C3CON.B10;
    const register unsigned short int DISSLW = 9;
    sbit  DISSLW_bit at I2C3CON.B9;
    const register unsigned short int SMEN = 8;
    sbit  SMEN_bit at I2C3CON.B8;
    const register unsigned short int GCEN = 7;
    sbit  GCEN_bit at I2C3CON.B7;
    const register unsigned short int STREN = 6;
    sbit  STREN_bit at I2C3CON.B6;
    const register unsigned short int ACKDT = 5;
    sbit  ACKDT_bit at I2C3CON.B5;
    const register unsigned short int ACKEN = 4;
    sbit  ACKEN_bit at I2C3CON.B4;
    const register unsigned short int RCEN = 3;
    sbit  RCEN_bit at I2C3CON.B3;
    const register unsigned short int PEN = 2;
    sbit  PEN_bit at I2C3CON.B2;
    const register unsigned short int RSEN = 1;
    sbit  RSEN_bit at I2C3CON.B1;
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at I2C3CON.B0;

sfr atomic unsigned long   volatile I2C3STAT         absolute 0xBF805010;
sfr unsigned long   volatile I2C3STATCLR      absolute 0xBF805014;
sfr unsigned long   volatile I2C3STATSET      absolute 0xBF805018;
sfr unsigned long   volatile I2C3STATINV      absolute 0xBF80501C;
    // I2C3STAT bits
    const register unsigned short int ACKSTAT = 15;
    sbit  ACKSTAT_bit at I2C3STAT.B15;
    const register unsigned short int TRSTAT = 14;
    sbit  TRSTAT_bit at I2C3STAT.B14;
    const register unsigned short int BCL = 10;
    sbit  BCL_bit at I2C3STAT.B10;
    const register unsigned short int GCSTAT = 9;
    sbit  GCSTAT_bit at I2C3STAT.B9;
    const register unsigned short int ADD10 = 8;
    sbit  ADD10_bit at I2C3STAT.B8;
    const register unsigned short int IWCOL = 7;
    sbit  IWCOL_bit at I2C3STAT.B7;
    const register unsigned short int I2COV = 6;
    sbit  I2COV_bit at I2C3STAT.B6;
    const register unsigned short int DA = 5;
    sbit  DA_bit at I2C3STAT.B5;
    const register unsigned short int P = 4;
    sbit  P_bit at I2C3STAT.B4;
    const register unsigned short int S = 3;
    sbit  S_bit at I2C3STAT.B3;
    const register unsigned short int RW = 2;
    sbit  RW_bit at I2C3STAT.B2;
    const register unsigned short int RBF = 1;
    sbit  RBF_bit at I2C3STAT.B1;
    const register unsigned short int TBF = 0;
    sbit  TBF_bit at I2C3STAT.B0;

sfr atomic unsigned long   volatile I2C3ADD          absolute 0xBF805020;
sfr unsigned long   volatile I2C3ADDCLR       absolute 0xBF805024;
sfr unsigned long   volatile I2C3ADDSET       absolute 0xBF805028;
sfr unsigned long   volatile I2C3ADDINV       absolute 0xBF80502C;
    // I2C3ADD bits
    const register unsigned short int I2CADD9 = 9;
    sbit  I2CADD9_bit at I2C3ADD.B9;
    const register unsigned short int I2CADD8 = 8;
    sbit  I2CADD8_bit at I2C3ADD.B8;
    const register unsigned short int I2CADD7 = 7;
    sbit  I2CADD7_bit at I2C3ADD.B7;
    const register unsigned short int I2CADD6 = 6;
    sbit  I2CADD6_bit at I2C3ADD.B6;
    const register unsigned short int I2CADD5 = 5;
    sbit  I2CADD5_bit at I2C3ADD.B5;
    const register unsigned short int I2CADD4 = 4;
    sbit  I2CADD4_bit at I2C3ADD.B4;
    const register unsigned short int I2CADD3 = 3;
    sbit  I2CADD3_bit at I2C3ADD.B3;
    const register unsigned short int I2CADD2 = 2;
    sbit  I2CADD2_bit at I2C3ADD.B2;
    const register unsigned short int I2CADD1 = 1;
    sbit  I2CADD1_bit at I2C3ADD.B1;
    const register unsigned short int I2CADD0 = 0;
    sbit  I2CADD0_bit at I2C3ADD.B0;

sfr atomic unsigned long   volatile I2C3MSK          absolute 0xBF805030;
sfr unsigned long   volatile I2C3MSKCLR       absolute 0xBF805034;
sfr unsigned long   volatile I2C3MSKSET       absolute 0xBF805038;
sfr unsigned long   volatile I2C3MSKINV       absolute 0xBF80503C;
    // I2C3MSK bits
    const register unsigned short int I2CMSK9 = 9;
    sbit  I2CMSK9_bit at I2C3MSK.B9;
    const register unsigned short int I2CMSK8 = 8;
    sbit  I2CMSK8_bit at I2C3MSK.B8;
    const register unsigned short int I2CMSK7 = 7;
    sbit  I2CMSK7_bit at I2C3MSK.B7;
    const register unsigned short int I2CMSK6 = 6;
    sbit  I2CMSK6_bit at I2C3MSK.B6;
    const register unsigned short int I2CMSK5 = 5;
    sbit  I2CMSK5_bit at I2C3MSK.B5;
    const register unsigned short int I2CMSK4 = 4;
    sbit  I2CMSK4_bit at I2C3MSK.B4;
    const register unsigned short int I2CMSK3 = 3;
    sbit  I2CMSK3_bit at I2C3MSK.B3;
    const register unsigned short int I2CMSK2 = 2;
    sbit  I2CMSK2_bit at I2C3MSK.B2;
    const register unsigned short int I2CMSK1 = 1;
    sbit  I2CMSK1_bit at I2C3MSK.B1;
    const register unsigned short int I2CMSK0 = 0;
    sbit  I2CMSK0_bit at I2C3MSK.B0;

sfr atomic unsigned long            I2C3BRG          absolute 0xBF805040;
sfr unsigned long   volatile I2C3BRGCLR       absolute 0xBF805044;
sfr unsigned long   volatile I2C3BRGSET       absolute 0xBF805048;
sfr unsigned long   volatile I2C3BRGINV       absolute 0xBF80504C;
    // I2C3BRG bits
    const register unsigned short int I2CBRG11 = 11;
    sbit  I2CBRG11_bit at I2C3BRG.B11;
    const register unsigned short int I2CBRG10 = 10;
    sbit  I2CBRG10_bit at I2C3BRG.B10;
    const register unsigned short int I2CBRG9 = 9;
    sbit  I2CBRG9_bit at I2C3BRG.B9;
    const register unsigned short int I2CBRG8 = 8;
    sbit  I2CBRG8_bit at I2C3BRG.B8;
    const register unsigned short int I2CBRG7 = 7;
    sbit  I2CBRG7_bit at I2C3BRG.B7;
    const register unsigned short int I2CBRG6 = 6;
    sbit  I2CBRG6_bit at I2C3BRG.B6;
    const register unsigned short int I2CBRG5 = 5;
    sbit  I2CBRG5_bit at I2C3BRG.B5;
    const register unsigned short int I2CBRG4 = 4;
    sbit  I2CBRG4_bit at I2C3BRG.B4;
    const register unsigned short int I2CBRG3 = 3;
    sbit  I2CBRG3_bit at I2C3BRG.B3;
    const register unsigned short int I2CBRG2 = 2;
    sbit  I2CBRG2_bit at I2C3BRG.B2;
    const register unsigned short int I2CBRG1 = 1;
    sbit  I2CBRG1_bit at I2C3BRG.B1;
    const register unsigned short int I2CBRG0 = 0;
    sbit  I2CBRG0_bit at I2C3BRG.B0;

sfr atomic unsigned long   volatile I2C3TRN          absolute 0xBF805050;
sfr unsigned long   volatile I2C3TRNCLR       absolute 0xBF805054;
sfr unsigned long   volatile I2C3TRNSET       absolute 0xBF805058;
sfr unsigned long   volatile I2C3TRNINV       absolute 0xBF80505C;
    // I2C3TRN bits
    const register unsigned short int I2CTRN7 = 7;
    sbit  I2CTRN7_bit at I2C3TRN.B7;
    const register unsigned short int I2CTRN6 = 6;
    sbit  I2CTRN6_bit at I2C3TRN.B6;
    const register unsigned short int I2CTRN5 = 5;
    sbit  I2CTRN5_bit at I2C3TRN.B5;
    const register unsigned short int I2CTRN4 = 4;
    sbit  I2CTRN4_bit at I2C3TRN.B4;
    const register unsigned short int I2CTRN3 = 3;
    sbit  I2CTRN3_bit at I2C3TRN.B3;
    const register unsigned short int I2CTRN2 = 2;
    sbit  I2CTRN2_bit at I2C3TRN.B2;
    const register unsigned short int I2CTRN1 = 1;
    sbit  I2CTRN1_bit at I2C3TRN.B1;
    const register unsigned short int I2CTRN0 = 0;
    sbit  I2CTRN0_bit at I2C3TRN.B0;

sfr unsigned long   volatile I2C3RCV          absolute 0xBF805060;
    // I2C3RCV bits
    const register unsigned short int I2CRCV7 = 7;
    sbit  I2CRCV7_bit at I2C3RCV.B7;
    const register unsigned short int I2CRCV6 = 6;
    sbit  I2CRCV6_bit at I2C3RCV.B6;
    const register unsigned short int I2CRCV5 = 5;
    sbit  I2CRCV5_bit at I2C3RCV.B5;
    const register unsigned short int I2CRCV4 = 4;
    sbit  I2CRCV4_bit at I2C3RCV.B4;
    const register unsigned short int I2CRCV3 = 3;
    sbit  I2CRCV3_bit at I2C3RCV.B3;
    const register unsigned short int I2CRCV2 = 2;
    sbit  I2CRCV2_bit at I2C3RCV.B2;
    const register unsigned short int I2CRCV1 = 1;
    sbit  I2CRCV1_bit at I2C3RCV.B1;
    const register unsigned short int I2CRCV0 = 0;
    sbit  I2CRCV0_bit at I2C3RCV.B0;

sfr atomic unsigned long   volatile I2C4CON          absolute 0xBF805100;
sfr unsigned long   volatile I2C4CONCLR       absolute 0xBF805104;
sfr unsigned long   volatile I2C4CONSET       absolute 0xBF805108;
sfr unsigned long   volatile I2C4CONINV       absolute 0xBF80510C;
    // I2C4CON bits
    sbit  ON__I2C4CON_bit at I2C4CON.B15;
    sbit  SIDL_I2C4CON_bit at I2C4CON.B13;
    sbit  SCLREL_I2C4CON_bit at I2C4CON.B12;
    sbit  STRICT_I2C4CON_bit at I2C4CON.B11;
    sbit  A10M_I2C4CON_bit at I2C4CON.B10;
    sbit  DISSLW_I2C4CON_bit at I2C4CON.B9;
    sbit  SMEN_I2C4CON_bit at I2C4CON.B8;
    sbit  GCEN_I2C4CON_bit at I2C4CON.B7;
    sbit  STREN_I2C4CON_bit at I2C4CON.B6;
    sbit  ACKDT_I2C4CON_bit at I2C4CON.B5;
    sbit  ACKEN_I2C4CON_bit at I2C4CON.B4;
    sbit  RCEN_I2C4CON_bit at I2C4CON.B3;
    sbit  PEN_I2C4CON_bit at I2C4CON.B2;
    sbit  RSEN_I2C4CON_bit at I2C4CON.B1;
    sbit  SEN_I2C4CON_bit at I2C4CON.B0;

sfr atomic unsigned long   volatile I2C4STAT         absolute 0xBF805110;
sfr unsigned long   volatile I2C4STATCLR      absolute 0xBF805114;
sfr unsigned long   volatile I2C4STATSET      absolute 0xBF805118;
sfr unsigned long   volatile I2C4STATINV      absolute 0xBF80511C;
    // I2C4STAT bits
    sbit  ACKSTAT_I2C4STAT_bit at I2C4STAT.B15;
    sbit  TRSTAT_I2C4STAT_bit at I2C4STAT.B14;
    sbit  BCL_I2C4STAT_bit at I2C4STAT.B10;
    sbit  GCSTAT_I2C4STAT_bit at I2C4STAT.B9;
    sbit  ADD10_I2C4STAT_bit at I2C4STAT.B8;
    sbit  IWCOL_I2C4STAT_bit at I2C4STAT.B7;
    sbit  I2COV_I2C4STAT_bit at I2C4STAT.B6;
    sbit  DA_I2C4STAT_bit at I2C4STAT.B5;
    sbit  P_I2C4STAT_bit at I2C4STAT.B4;
    sbit  S_I2C4STAT_bit at I2C4STAT.B3;
    sbit  RW_I2C4STAT_bit at I2C4STAT.B2;
    sbit  RBF_I2C4STAT_bit at I2C4STAT.B1;
    sbit  TBF_I2C4STAT_bit at I2C4STAT.B0;

sfr atomic unsigned long   volatile I2C4ADD          absolute 0xBF805120;
sfr unsigned long   volatile I2C4ADDCLR       absolute 0xBF805124;
sfr unsigned long   volatile I2C4ADDSET       absolute 0xBF805128;
sfr unsigned long   volatile I2C4ADDINV       absolute 0xBF80512C;
    // I2C4ADD bits
    sbit  I2CADD9_I2C4ADD_bit at I2C4ADD.B9;
    sbit  I2CADD8_I2C4ADD_bit at I2C4ADD.B8;
    sbit  I2CADD7_I2C4ADD_bit at I2C4ADD.B7;
    sbit  I2CADD6_I2C4ADD_bit at I2C4ADD.B6;
    sbit  I2CADD5_I2C4ADD_bit at I2C4ADD.B5;
    sbit  I2CADD4_I2C4ADD_bit at I2C4ADD.B4;
    sbit  I2CADD3_I2C4ADD_bit at I2C4ADD.B3;
    sbit  I2CADD2_I2C4ADD_bit at I2C4ADD.B2;
    sbit  I2CADD1_I2C4ADD_bit at I2C4ADD.B1;
    sbit  I2CADD0_I2C4ADD_bit at I2C4ADD.B0;

sfr atomic unsigned long   volatile I2C4MSK          absolute 0xBF805130;
sfr unsigned long   volatile I2C4MSKCLR       absolute 0xBF805134;
sfr unsigned long   volatile I2C4MSKSET       absolute 0xBF805138;
sfr unsigned long   volatile I2C4MSKINV       absolute 0xBF80513C;
    // I2C4MSK bits
    sbit  I2CMSK9_I2C4MSK_bit at I2C4MSK.B9;
    sbit  I2CMSK8_I2C4MSK_bit at I2C4MSK.B8;
    sbit  I2CMSK7_I2C4MSK_bit at I2C4MSK.B7;
    sbit  I2CMSK6_I2C4MSK_bit at I2C4MSK.B6;
    sbit  I2CMSK5_I2C4MSK_bit at I2C4MSK.B5;
    sbit  I2CMSK4_I2C4MSK_bit at I2C4MSK.B4;
    sbit  I2CMSK3_I2C4MSK_bit at I2C4MSK.B3;
    sbit  I2CMSK2_I2C4MSK_bit at I2C4MSK.B2;
    sbit  I2CMSK1_I2C4MSK_bit at I2C4MSK.B1;
    sbit  I2CMSK0_I2C4MSK_bit at I2C4MSK.B0;

sfr atomic unsigned long   volatile I2C4BRG          absolute 0xBF805140;
sfr unsigned long   volatile I2C4BRGCLR       absolute 0xBF805144;
sfr unsigned long   volatile I2C4BRGSET       absolute 0xBF805148;
sfr unsigned long   volatile I2C4BRGINV       absolute 0xBF80514C;
    // I2C4BRG bits
    sbit  I2CBRG11_I2C4BRG_bit at I2C4BRG.B11;
    sbit  I2CBRG10_I2C4BRG_bit at I2C4BRG.B10;
    sbit  I2CBRG9_I2C4BRG_bit at I2C4BRG.B9;
    sbit  I2CBRG8_I2C4BRG_bit at I2C4BRG.B8;
    sbit  I2CBRG7_I2C4BRG_bit at I2C4BRG.B7;
    sbit  I2CBRG6_I2C4BRG_bit at I2C4BRG.B6;
    sbit  I2CBRG5_I2C4BRG_bit at I2C4BRG.B5;
    sbit  I2CBRG4_I2C4BRG_bit at I2C4BRG.B4;
    sbit  I2CBRG3_I2C4BRG_bit at I2C4BRG.B3;
    sbit  I2CBRG2_I2C4BRG_bit at I2C4BRG.B2;
    sbit  I2CBRG1_I2C4BRG_bit at I2C4BRG.B1;
    sbit  I2CBRG0_I2C4BRG_bit at I2C4BRG.B0;

sfr atomic unsigned long   volatile I2C4TRN          absolute 0xBF805150;
sfr unsigned long   volatile I2C4TRNCLR       absolute 0xBF805154;
sfr unsigned long   volatile I2C4TRNSET       absolute 0xBF805158;
sfr unsigned long   volatile I2C4TRNINV       absolute 0xBF80515C;
    // I2C4TRN bits
    sbit  I2CTRN7_I2C4TRN_bit at I2C4TRN.B7;
    sbit  I2CTRN6_I2C4TRN_bit at I2C4TRN.B6;
    sbit  I2CTRN5_I2C4TRN_bit at I2C4TRN.B5;
    sbit  I2CTRN4_I2C4TRN_bit at I2C4TRN.B4;
    sbit  I2CTRN3_I2C4TRN_bit at I2C4TRN.B3;
    sbit  I2CTRN2_I2C4TRN_bit at I2C4TRN.B2;
    sbit  I2CTRN1_I2C4TRN_bit at I2C4TRN.B1;
    sbit  I2CTRN0_I2C4TRN_bit at I2C4TRN.B0;

sfr unsigned long   volatile I2C4RCV          absolute 0xBF805160;
    // I2C4RCV bits
    sbit  I2CRCV7_I2C4RCV_bit at I2C4RCV.B7;
    sbit  I2CRCV6_I2C4RCV_bit at I2C4RCV.B6;
    sbit  I2CRCV5_I2C4RCV_bit at I2C4RCV.B5;
    sbit  I2CRCV4_I2C4RCV_bit at I2C4RCV.B4;
    sbit  I2CRCV3_I2C4RCV_bit at I2C4RCV.B3;
    sbit  I2CRCV2_I2C4RCV_bit at I2C4RCV.B2;
    sbit  I2CRCV1_I2C4RCV_bit at I2C4RCV.B1;
    sbit  I2CRCV0_I2C4RCV_bit at I2C4RCV.B0;

sfr atomic unsigned long   volatile I2C5CON          absolute 0xBF805200;
sfr unsigned long   volatile I2C5CONCLR       absolute 0xBF805204;
sfr unsigned long   volatile I2C5CONSET       absolute 0xBF805208;
sfr unsigned long   volatile I2C5CONINV       absolute 0xBF80520C;
    // I2C5CON bits
    sbit  ON__I2C5CON_bit at I2C5CON.B15;
    sbit  SIDL_I2C5CON_bit at I2C5CON.B13;
    sbit  SCLREL_I2C5CON_bit at I2C5CON.B12;
    sbit  STRICT_I2C5CON_bit at I2C5CON.B11;
    sbit  A10M_I2C5CON_bit at I2C5CON.B10;
    sbit  DISSLW_I2C5CON_bit at I2C5CON.B9;
    sbit  SMEN_I2C5CON_bit at I2C5CON.B8;
    sbit  GCEN_I2C5CON_bit at I2C5CON.B7;
    sbit  STREN_I2C5CON_bit at I2C5CON.B6;
    sbit  ACKDT_I2C5CON_bit at I2C5CON.B5;
    sbit  ACKEN_I2C5CON_bit at I2C5CON.B4;
    sbit  RCEN_I2C5CON_bit at I2C5CON.B3;
    sbit  PEN_I2C5CON_bit at I2C5CON.B2;
    sbit  RSEN_I2C5CON_bit at I2C5CON.B1;
    sbit  SEN_I2C5CON_bit at I2C5CON.B0;

sfr atomic unsigned long   volatile I2C5STAT         absolute 0xBF805210;
sfr unsigned long   volatile I2C5STATCLR      absolute 0xBF805214;
sfr unsigned long   volatile I2C5STATSET      absolute 0xBF805218;
sfr unsigned long   volatile I2C5STATINV      absolute 0xBF80521C;
    // I2C5STAT bits
    sbit  ACKSTAT_I2C5STAT_bit at I2C5STAT.B15;
    sbit  TRSTAT_I2C5STAT_bit at I2C5STAT.B14;
    sbit  BCL_I2C5STAT_bit at I2C5STAT.B10;
    sbit  GCSTAT_I2C5STAT_bit at I2C5STAT.B9;
    sbit  ADD10_I2C5STAT_bit at I2C5STAT.B8;
    sbit  IWCOL_I2C5STAT_bit at I2C5STAT.B7;
    sbit  I2COV_I2C5STAT_bit at I2C5STAT.B6;
    sbit  DA_I2C5STAT_bit at I2C5STAT.B5;
    sbit  P_I2C5STAT_bit at I2C5STAT.B4;
    sbit  S_I2C5STAT_bit at I2C5STAT.B3;
    sbit  RW_I2C5STAT_bit at I2C5STAT.B2;
    sbit  RBF_I2C5STAT_bit at I2C5STAT.B1;
    sbit  TBF_I2C5STAT_bit at I2C5STAT.B0;

sfr atomic unsigned long   volatile I2C5ADD          absolute 0xBF805220;
sfr unsigned long   volatile I2C5ADDCLR       absolute 0xBF805224;
sfr unsigned long   volatile I2C5ADDSET       absolute 0xBF805228;
sfr unsigned long   volatile I2C5ADDINV       absolute 0xBF80522C;
    // I2C5ADD bits
    sbit  I2CADD9_I2C5ADD_bit at I2C5ADD.B9;
    sbit  I2CADD8_I2C5ADD_bit at I2C5ADD.B8;
    sbit  I2CADD7_I2C5ADD_bit at I2C5ADD.B7;
    sbit  I2CADD6_I2C5ADD_bit at I2C5ADD.B6;
    sbit  I2CADD5_I2C5ADD_bit at I2C5ADD.B5;
    sbit  I2CADD4_I2C5ADD_bit at I2C5ADD.B4;
    sbit  I2CADD3_I2C5ADD_bit at I2C5ADD.B3;
    sbit  I2CADD2_I2C5ADD_bit at I2C5ADD.B2;
    sbit  I2CADD1_I2C5ADD_bit at I2C5ADD.B1;
    sbit  I2CADD0_I2C5ADD_bit at I2C5ADD.B0;

sfr atomic unsigned long   volatile I2C5MSK          absolute 0xBF805230;
sfr unsigned long   volatile I2C5MSKCLR       absolute 0xBF805234;
sfr unsigned long   volatile I2C5MSKSET       absolute 0xBF805238;
sfr unsigned long   volatile I2C5MSKINV       absolute 0xBF80523C;
    // I2C5MSK bits
    sbit  I2CMSK9_I2C5MSK_bit at I2C5MSK.B9;
    sbit  I2CMSK8_I2C5MSK_bit at I2C5MSK.B8;
    sbit  I2CMSK7_I2C5MSK_bit at I2C5MSK.B7;
    sbit  I2CMSK6_I2C5MSK_bit at I2C5MSK.B6;
    sbit  I2CMSK5_I2C5MSK_bit at I2C5MSK.B5;
    sbit  I2CMSK4_I2C5MSK_bit at I2C5MSK.B4;
    sbit  I2CMSK3_I2C5MSK_bit at I2C5MSK.B3;
    sbit  I2CMSK2_I2C5MSK_bit at I2C5MSK.B2;
    sbit  I2CMSK1_I2C5MSK_bit at I2C5MSK.B1;
    sbit  I2CMSK0_I2C5MSK_bit at I2C5MSK.B0;

sfr atomic unsigned long   volatile I2C5BRG          absolute 0xBF805240;
sfr unsigned long   volatile I2C5BRGCLR       absolute 0xBF805244;
sfr unsigned long   volatile I2C5BRGSET       absolute 0xBF805248;
sfr unsigned long   volatile I2C5BRGINV       absolute 0xBF80524C;
    // I2C5BRG bits
    sbit  I2CBRG11_I2C5BRG_bit at I2C5BRG.B11;
    sbit  I2CBRG10_I2C5BRG_bit at I2C5BRG.B10;
    sbit  I2CBRG9_I2C5BRG_bit at I2C5BRG.B9;
    sbit  I2CBRG8_I2C5BRG_bit at I2C5BRG.B8;
    sbit  I2CBRG7_I2C5BRG_bit at I2C5BRG.B7;
    sbit  I2CBRG6_I2C5BRG_bit at I2C5BRG.B6;
    sbit  I2CBRG5_I2C5BRG_bit at I2C5BRG.B5;
    sbit  I2CBRG4_I2C5BRG_bit at I2C5BRG.B4;
    sbit  I2CBRG3_I2C5BRG_bit at I2C5BRG.B3;
    sbit  I2CBRG2_I2C5BRG_bit at I2C5BRG.B2;
    sbit  I2CBRG1_I2C5BRG_bit at I2C5BRG.B1;
    sbit  I2CBRG0_I2C5BRG_bit at I2C5BRG.B0;

sfr atomic unsigned long   volatile I2C5TRN          absolute 0xBF805250;
sfr unsigned long   volatile I2C5TRNCLR       absolute 0xBF805254;
sfr unsigned long   volatile I2C5TRNSET       absolute 0xBF805258;
sfr unsigned long   volatile I2C5TRNINV       absolute 0xBF80525C;
    // I2C5TRN bits
    sbit  I2CTRN7_I2C5TRN_bit at I2C5TRN.B7;
    sbit  I2CTRN6_I2C5TRN_bit at I2C5TRN.B6;
    sbit  I2CTRN5_I2C5TRN_bit at I2C5TRN.B5;
    sbit  I2CTRN4_I2C5TRN_bit at I2C5TRN.B4;
    sbit  I2CTRN3_I2C5TRN_bit at I2C5TRN.B3;
    sbit  I2CTRN2_I2C5TRN_bit at I2C5TRN.B2;
    sbit  I2CTRN1_I2C5TRN_bit at I2C5TRN.B1;
    sbit  I2CTRN0_I2C5TRN_bit at I2C5TRN.B0;

sfr unsigned long   volatile I2C5RCV          absolute 0xBF805260;
    // I2C5RCV bits
    sbit  I2CRCV7_I2C5RCV_bit at I2C5RCV.B7;
    sbit  I2CRCV6_I2C5RCV_bit at I2C5RCV.B6;
    sbit  I2CRCV5_I2C5RCV_bit at I2C5RCV.B5;
    sbit  I2CRCV4_I2C5RCV_bit at I2C5RCV.B4;
    sbit  I2CRCV3_I2C5RCV_bit at I2C5RCV.B3;
    sbit  I2CRCV2_I2C5RCV_bit at I2C5RCV.B2;
    sbit  I2CRCV1_I2C5RCV_bit at I2C5RCV.B1;
    sbit  I2CRCV0_I2C5RCV_bit at I2C5RCV.B0;

sfr atomic unsigned long   volatile I2C1CON          absolute 0xBF805300;
sfr unsigned long   volatile I2C1CONCLR       absolute 0xBF805304;
sfr unsigned long   volatile I2C1CONSET       absolute 0xBF805308;
sfr unsigned long   volatile I2C1CONINV       absolute 0xBF80530C;
    // I2C1CON bits
    sbit  ON__I2C1CON_bit at I2C1CON.B15;
    sbit  SIDL_I2C1CON_bit at I2C1CON.B13;
    sbit  SCLREL_I2C1CON_bit at I2C1CON.B12;
    sbit  STRICT_I2C1CON_bit at I2C1CON.B11;
    sbit  A10M_I2C1CON_bit at I2C1CON.B10;
    sbit  DISSLW_I2C1CON_bit at I2C1CON.B9;
    sbit  SMEN_I2C1CON_bit at I2C1CON.B8;
    sbit  GCEN_I2C1CON_bit at I2C1CON.B7;
    sbit  STREN_I2C1CON_bit at I2C1CON.B6;
    sbit  ACKDT_I2C1CON_bit at I2C1CON.B5;
    sbit  ACKEN_I2C1CON_bit at I2C1CON.B4;
    sbit  RCEN_I2C1CON_bit at I2C1CON.B3;
    sbit  PEN_I2C1CON_bit at I2C1CON.B2;
    sbit  RSEN_I2C1CON_bit at I2C1CON.B1;
    sbit  SEN_I2C1CON_bit at I2C1CON.B0;

sfr atomic unsigned long   volatile I2C1STAT         absolute 0xBF805310;
sfr unsigned long   volatile I2C1STATCLR      absolute 0xBF805314;
sfr unsigned long   volatile I2C1STATSET      absolute 0xBF805318;
sfr unsigned long   volatile I2C1STATINV      absolute 0xBF80531C;
    // I2C1STAT bits
    sbit  ACKSTAT_I2C1STAT_bit at I2C1STAT.B15;
    sbit  TRSTAT_I2C1STAT_bit at I2C1STAT.B14;
    sbit  BCL_I2C1STAT_bit at I2C1STAT.B10;
    sbit  GCSTAT_I2C1STAT_bit at I2C1STAT.B9;
    sbit  ADD10_I2C1STAT_bit at I2C1STAT.B8;
    sbit  IWCOL_I2C1STAT_bit at I2C1STAT.B7;
    sbit  I2COV_I2C1STAT_bit at I2C1STAT.B6;
    sbit  DA_I2C1STAT_bit at I2C1STAT.B5;
    sbit  P_I2C1STAT_bit at I2C1STAT.B4;
    sbit  S_I2C1STAT_bit at I2C1STAT.B3;
    sbit  RW_I2C1STAT_bit at I2C1STAT.B2;
    sbit  RBF_I2C1STAT_bit at I2C1STAT.B1;
    sbit  TBF_I2C1STAT_bit at I2C1STAT.B0;

sfr atomic unsigned long   volatile I2C1ADD          absolute 0xBF805320;
sfr unsigned long   volatile I2C1ADDCLR       absolute 0xBF805324;
sfr unsigned long   volatile I2C1ADDSET       absolute 0xBF805328;
sfr unsigned long   volatile I2C1ADDINV       absolute 0xBF80532C;
    // I2C1ADD bits
    sbit  I2CADD9_I2C1ADD_bit at I2C1ADD.B9;
    sbit  I2CADD8_I2C1ADD_bit at I2C1ADD.B8;
    sbit  I2CADD7_I2C1ADD_bit at I2C1ADD.B7;
    sbit  I2CADD6_I2C1ADD_bit at I2C1ADD.B6;
    sbit  I2CADD5_I2C1ADD_bit at I2C1ADD.B5;
    sbit  I2CADD4_I2C1ADD_bit at I2C1ADD.B4;
    sbit  I2CADD3_I2C1ADD_bit at I2C1ADD.B3;
    sbit  I2CADD2_I2C1ADD_bit at I2C1ADD.B2;
    sbit  I2CADD1_I2C1ADD_bit at I2C1ADD.B1;
    sbit  I2CADD0_I2C1ADD_bit at I2C1ADD.B0;

sfr atomic unsigned long   volatile I2C1MSK          absolute 0xBF805330;
sfr unsigned long   volatile I2C1MSKCLR       absolute 0xBF805334;
sfr unsigned long   volatile I2C1MSKSET       absolute 0xBF805338;
sfr unsigned long   volatile I2C1MSKINV       absolute 0xBF80533C;
    // I2C1MSK bits
    sbit  I2CMSK9_I2C1MSK_bit at I2C1MSK.B9;
    sbit  I2CMSK8_I2C1MSK_bit at I2C1MSK.B8;
    sbit  I2CMSK7_I2C1MSK_bit at I2C1MSK.B7;
    sbit  I2CMSK6_I2C1MSK_bit at I2C1MSK.B6;
    sbit  I2CMSK5_I2C1MSK_bit at I2C1MSK.B5;
    sbit  I2CMSK4_I2C1MSK_bit at I2C1MSK.B4;
    sbit  I2CMSK3_I2C1MSK_bit at I2C1MSK.B3;
    sbit  I2CMSK2_I2C1MSK_bit at I2C1MSK.B2;
    sbit  I2CMSK1_I2C1MSK_bit at I2C1MSK.B1;
    sbit  I2CMSK0_I2C1MSK_bit at I2C1MSK.B0;

sfr atomic unsigned long            I2C1BRG          absolute 0xBF805340;
sfr unsigned long   volatile I2C1BRGCLR       absolute 0xBF805344;
sfr unsigned long   volatile I2C1BRGSET       absolute 0xBF805348;
sfr unsigned long   volatile I2C1BRGINV       absolute 0xBF80534C;
    // I2C1BRG bits
    sbit  I2CBRG11_I2C1BRG_bit at I2C1BRG.B11;
    sbit  I2CBRG10_I2C1BRG_bit at I2C1BRG.B10;
    sbit  I2CBRG9_I2C1BRG_bit at I2C1BRG.B9;
    sbit  I2CBRG8_I2C1BRG_bit at I2C1BRG.B8;
    sbit  I2CBRG7_I2C1BRG_bit at I2C1BRG.B7;
    sbit  I2CBRG6_I2C1BRG_bit at I2C1BRG.B6;
    sbit  I2CBRG5_I2C1BRG_bit at I2C1BRG.B5;
    sbit  I2CBRG4_I2C1BRG_bit at I2C1BRG.B4;
    sbit  I2CBRG3_I2C1BRG_bit at I2C1BRG.B3;
    sbit  I2CBRG2_I2C1BRG_bit at I2C1BRG.B2;
    sbit  I2CBRG1_I2C1BRG_bit at I2C1BRG.B1;
    sbit  I2CBRG0_I2C1BRG_bit at I2C1BRG.B0;

sfr atomic unsigned long   volatile I2C1TRN          absolute 0xBF805350;
sfr unsigned long   volatile I2C1TRNCLR       absolute 0xBF805354;
sfr unsigned long   volatile I2C1TRNSET       absolute 0xBF805358;
sfr unsigned long   volatile I2C1TRNINV       absolute 0xBF80535C;
    // I2C1TRN bits
    sbit  I2CTRN7_I2C1TRN_bit at I2C1TRN.B7;
    sbit  I2CTRN6_I2C1TRN_bit at I2C1TRN.B6;
    sbit  I2CTRN5_I2C1TRN_bit at I2C1TRN.B5;
    sbit  I2CTRN4_I2C1TRN_bit at I2C1TRN.B4;
    sbit  I2CTRN3_I2C1TRN_bit at I2C1TRN.B3;
    sbit  I2CTRN2_I2C1TRN_bit at I2C1TRN.B2;
    sbit  I2CTRN1_I2C1TRN_bit at I2C1TRN.B1;
    sbit  I2CTRN0_I2C1TRN_bit at I2C1TRN.B0;

sfr unsigned long   volatile I2C1RCV          absolute 0xBF805360;
    // I2C1RCV bits
    sbit  I2CRCV7_I2C1RCV_bit at I2C1RCV.B7;
    sbit  I2CRCV6_I2C1RCV_bit at I2C1RCV.B6;
    sbit  I2CRCV5_I2C1RCV_bit at I2C1RCV.B5;
    sbit  I2CRCV4_I2C1RCV_bit at I2C1RCV.B4;
    sbit  I2CRCV3_I2C1RCV_bit at I2C1RCV.B3;
    sbit  I2CRCV2_I2C1RCV_bit at I2C1RCV.B2;
    sbit  I2CRCV1_I2C1RCV_bit at I2C1RCV.B1;
    sbit  I2CRCV0_I2C1RCV_bit at I2C1RCV.B0;

sfr atomic unsigned long   volatile SPI3CON          absolute 0xBF805800;
sfr unsigned long   volatile SPI3CONCLR       absolute 0xBF805804;
sfr unsigned long   volatile SPI3CONSET       absolute 0xBF805808;
sfr unsigned long   volatile SPI3CONINV       absolute 0xBF80580C;
    // SPI3CON bits
    const register unsigned short int FRMEN = 31;
    sbit  FRMEN_bit at SPI3CON.B31;
    const register unsigned short int FRMSYNC = 30;
    sbit  FRMSYNC_bit at SPI3CON.B30;
    const register unsigned short int FRMPOL = 29;
    sbit  FRMPOL_bit at SPI3CON.B29;
    const register unsigned short int MSSEN = 28;
    sbit  MSSEN_bit at SPI3CON.B28;
    const register unsigned short int FRMSYPW = 27;
    sbit  FRMSYPW_bit at SPI3CON.B27;
    const register unsigned short int FRMCNT2 = 26;
    sbit  FRMCNT2_bit at SPI3CON.B26;
    const register unsigned short int FRMCNT1 = 25;
    sbit  FRMCNT1_bit at SPI3CON.B25;
    const register unsigned short int FRMCNT0 = 24;
    sbit  FRMCNT0_bit at SPI3CON.B24;
    const register unsigned short int SPIFE = 17;
    sbit  SPIFE_bit at SPI3CON.B17;
    const register unsigned short int ENHBUF = 16;
    sbit  ENHBUF_bit at SPI3CON.B16;
    sbit  ON__SPI3CON_bit at SPI3CON.B15;
    sbit  SIDL_SPI3CON_bit at SPI3CON.B13;
    const register unsigned short int DISSDO = 12;
    sbit  DISSDO_bit at SPI3CON.B12;
    const register unsigned short int MODE32 = 11;
    sbit  MODE32_bit at SPI3CON.B11;
    const register unsigned short int MODE16 = 10;
    sbit  MODE16_bit at SPI3CON.B10;
    const register unsigned short int SMP = 9;
    sbit  SMP_bit at SPI3CON.B9;
    const register unsigned short int CKE = 8;
    sbit  CKE_bit at SPI3CON.B8;
    const register unsigned short int SSEN = 7;
    sbit  SSEN_bit at SPI3CON.B7;
    const register unsigned short int CKP = 6;
    sbit  CKP_bit at SPI3CON.B6;
    const register unsigned short int MSTEN = 5;
    sbit  MSTEN_bit at SPI3CON.B5;
    const register unsigned short int STXISEL1 = 3;
    sbit  STXISEL1_bit at SPI3CON.B3;
    const register unsigned short int STXISEL0 = 2;
    sbit  STXISEL0_bit at SPI3CON.B2;
    const register unsigned short int SRXISEL1 = 1;
    sbit  SRXISEL1_bit at SPI3CON.B1;
    const register unsigned short int SRXISEL0 = 0;
    sbit  SRXISEL0_bit at SPI3CON.B0;

sfr atomic unsigned long   volatile SPI3STAT         absolute 0xBF805810;
sfr unsigned long   volatile SPI3STATCLR      absolute 0xBF805814;
sfr unsigned long   volatile SPI3STATSET      absolute 0xBF805818;
sfr unsigned long   volatile SPI3STATINV      absolute 0xBF80581C;
    // SPI3STAT bits
    const register unsigned short int RXBUFELM4 = 28;
    sbit  RXBUFELM4_bit at SPI3STAT.B28;
    const register unsigned short int RXBUFELM3 = 27;
    sbit  RXBUFELM3_bit at SPI3STAT.B27;
    const register unsigned short int RXBUFELM2 = 26;
    sbit  RXBUFELM2_bit at SPI3STAT.B26;
    const register unsigned short int RXBUFELM1 = 25;
    sbit  RXBUFELM1_bit at SPI3STAT.B25;
    const register unsigned short int RXBUFELM0 = 24;
    sbit  RXBUFELM0_bit at SPI3STAT.B24;
    const register unsigned short int TXBUFELM4 = 20;
    sbit  TXBUFELM4_bit at SPI3STAT.B20;
    const register unsigned short int TXBUFELM3 = 19;
    sbit  TXBUFELM3_bit at SPI3STAT.B19;
    const register unsigned short int TXBUFELM2 = 18;
    sbit  TXBUFELM2_bit at SPI3STAT.B18;
    const register unsigned short int TXBUFELM1 = 17;
    sbit  TXBUFELM1_bit at SPI3STAT.B17;
    const register unsigned short int TXBUFELM0 = 16;
    sbit  TXBUFELM0_bit at SPI3STAT.B16;
    const register unsigned short int SPIBUSY = 11;
    sbit  SPIBUSY_bit at SPI3STAT.B11;
    const register unsigned short int SPITUR = 8;
    sbit  SPITUR_bit at SPI3STAT.B8;
    const register unsigned short int SRMT = 7;
    sbit  SRMT_bit at SPI3STAT.B7;
    const register unsigned short int SPIROV = 6;
    sbit  SPIROV_bit at SPI3STAT.B6;
    const register unsigned short int SPIRBE = 5;
    sbit  SPIRBE_bit at SPI3STAT.B5;
    const register unsigned short int SPITBE = 3;
    sbit  SPITBE_bit at SPI3STAT.B3;
    const register unsigned short int SPITBF = 1;
    sbit  SPITBF_bit at SPI3STAT.B1;
    const register unsigned short int SPIRBF = 0;
    sbit  SPIRBF_bit at SPI3STAT.B0;

sfr unsigned long   volatile SPI3BUF          absolute 0xBF805820;
    // SPI3BUF bits
    const register unsigned short int SPI3BUF31 = 31;
    sbit  SPI3BUF31_bit at SPI3BUF.B31;
    const register unsigned short int SPI3BUF30 = 30;
    sbit  SPI3BUF30_bit at SPI3BUF.B30;
    const register unsigned short int SPI3BUF29 = 29;
    sbit  SPI3BUF29_bit at SPI3BUF.B29;
    const register unsigned short int SPI3BUF28 = 28;
    sbit  SPI3BUF28_bit at SPI3BUF.B28;
    const register unsigned short int SPI3BUF27 = 27;
    sbit  SPI3BUF27_bit at SPI3BUF.B27;
    const register unsigned short int SPI3BUF26 = 26;
    sbit  SPI3BUF26_bit at SPI3BUF.B26;
    const register unsigned short int SPI3BUF25 = 25;
    sbit  SPI3BUF25_bit at SPI3BUF.B25;
    const register unsigned short int SPI3BUF24 = 24;
    sbit  SPI3BUF24_bit at SPI3BUF.B24;
    const register unsigned short int SPI3BUF23 = 23;
    sbit  SPI3BUF23_bit at SPI3BUF.B23;
    const register unsigned short int SPI3BUF22 = 22;
    sbit  SPI3BUF22_bit at SPI3BUF.B22;
    const register unsigned short int SPI3BUF21 = 21;
    sbit  SPI3BUF21_bit at SPI3BUF.B21;
    const register unsigned short int SPI3BUF20 = 20;
    sbit  SPI3BUF20_bit at SPI3BUF.B20;
    const register unsigned short int SPI3BUF19 = 19;
    sbit  SPI3BUF19_bit at SPI3BUF.B19;
    const register unsigned short int SPI3BUF18 = 18;
    sbit  SPI3BUF18_bit at SPI3BUF.B18;
    const register unsigned short int SPI3BUF17 = 17;
    sbit  SPI3BUF17_bit at SPI3BUF.B17;
    const register unsigned short int SPI3BUF16 = 16;
    sbit  SPI3BUF16_bit at SPI3BUF.B16;
    const register unsigned short int SPI3BUF15 = 15;
    sbit  SPI3BUF15_bit at SPI3BUF.B15;
    const register unsigned short int SPI3BUF14 = 14;
    sbit  SPI3BUF14_bit at SPI3BUF.B14;
    const register unsigned short int SPI3BUF13 = 13;
    sbit  SPI3BUF13_bit at SPI3BUF.B13;
    const register unsigned short int SPI3BUF12 = 12;
    sbit  SPI3BUF12_bit at SPI3BUF.B12;
    const register unsigned short int SPI3BUF11 = 11;
    sbit  SPI3BUF11_bit at SPI3BUF.B11;
    const register unsigned short int SPI3BUF10 = 10;
    sbit  SPI3BUF10_bit at SPI3BUF.B10;
    const register unsigned short int SPI3BUF9 = 9;
    sbit  SPI3BUF9_bit at SPI3BUF.B9;
    const register unsigned short int SPI3BUF8 = 8;
    sbit  SPI3BUF8_bit at SPI3BUF.B8;
    const register unsigned short int SPI3BUF7 = 7;
    sbit  SPI3BUF7_bit at SPI3BUF.B7;
    const register unsigned short int SPI3BUF6 = 6;
    sbit  SPI3BUF6_bit at SPI3BUF.B6;
    const register unsigned short int SPI3BUF5 = 5;
    sbit  SPI3BUF5_bit at SPI3BUF.B5;
    const register unsigned short int SPI3BUF4 = 4;
    sbit  SPI3BUF4_bit at SPI3BUF.B4;
    const register unsigned short int SPI3BUF3 = 3;
    sbit  SPI3BUF3_bit at SPI3BUF.B3;
    const register unsigned short int SPI3BUF2 = 2;
    sbit  SPI3BUF2_bit at SPI3BUF.B2;
    const register unsigned short int SPI3BUF1 = 1;
    sbit  SPI3BUF1_bit at SPI3BUF.B1;
    const register unsigned short int SPI3BUF0 = 0;
    sbit  SPI3BUF0_bit at SPI3BUF.B0;

sfr atomic unsigned long   volatile SPI3BRG          absolute 0xBF805830;
sfr unsigned long   volatile SPI3BRGCLR       absolute 0xBF805834;
sfr unsigned long   volatile SPI3BRGSET       absolute 0xBF805838;
sfr unsigned long   volatile SPI3BRGINV       absolute 0xBF80583C;
    // SPI3BRG bits
    const register unsigned short int SPI3BRG8 = 8;
    sbit  SPI3BRG8_bit at SPI3BRG.B8;
    const register unsigned short int SPI3BRG7 = 7;
    sbit  SPI3BRG7_bit at SPI3BRG.B7;
    const register unsigned short int SPI3BRG6 = 6;
    sbit  SPI3BRG6_bit at SPI3BRG.B6;
    const register unsigned short int SPI3BRG5 = 5;
    sbit  SPI3BRG5_bit at SPI3BRG.B5;
    const register unsigned short int SPI3BRG4 = 4;
    sbit  SPI3BRG4_bit at SPI3BRG.B4;
    const register unsigned short int SPI3BRG3 = 3;
    sbit  SPI3BRG3_bit at SPI3BRG.B3;
    const register unsigned short int SPI3BRG2 = 2;
    sbit  SPI3BRG2_bit at SPI3BRG.B2;
    const register unsigned short int SPI3BRG1 = 1;
    sbit  SPI3BRG1_bit at SPI3BRG.B1;
    const register unsigned short int SPI3BRG0 = 0;
    sbit  SPI3BRG0_bit at SPI3BRG.B0;

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

sfr atomic unsigned long   volatile SPI4CON          absolute 0xBF805C00;
sfr unsigned long   volatile SPI4CONCLR       absolute 0xBF805C04;
sfr unsigned long   volatile SPI4CONSET       absolute 0xBF805C08;
sfr unsigned long   volatile SPI4CONINV       absolute 0xBF805C0C;
    // SPI4CON bits
    sbit  FRMEN_SPI4CON_bit at SPI4CON.B31;
    sbit  FRMSYNC_SPI4CON_bit at SPI4CON.B30;
    sbit  FRMPOL_SPI4CON_bit at SPI4CON.B29;
    sbit  MSSEN_SPI4CON_bit at SPI4CON.B28;
    sbit  FRMSYPW_SPI4CON_bit at SPI4CON.B27;
    sbit  FRMCNT2_SPI4CON_bit at SPI4CON.B26;
    sbit  FRMCNT1_SPI4CON_bit at SPI4CON.B25;
    sbit  FRMCNT0_SPI4CON_bit at SPI4CON.B24;
    sbit  SPIFE_SPI4CON_bit at SPI4CON.B17;
    sbit  ENHBUF_SPI4CON_bit at SPI4CON.B16;
    sbit  ON__SPI4CON_bit at SPI4CON.B15;
    sbit  SIDL_SPI4CON_bit at SPI4CON.B13;
    sbit  DISSDO_SPI4CON_bit at SPI4CON.B12;
    sbit  MODE32_SPI4CON_bit at SPI4CON.B11;
    sbit  MODE16_SPI4CON_bit at SPI4CON.B10;
    sbit  SMP_SPI4CON_bit at SPI4CON.B9;
    sbit  CKE_SPI4CON_bit at SPI4CON.B8;
    sbit  SSEN_SPI4CON_bit at SPI4CON.B7;
    sbit  CKP_SPI4CON_bit at SPI4CON.B6;
    sbit  MSTEN_SPI4CON_bit at SPI4CON.B5;
    sbit  STXISEL1_SPI4CON_bit at SPI4CON.B3;
    sbit  STXISEL0_SPI4CON_bit at SPI4CON.B2;
    sbit  SRXISEL1_SPI4CON_bit at SPI4CON.B1;
    sbit  SRXISEL0_SPI4CON_bit at SPI4CON.B0;

sfr atomic unsigned long   volatile SPI4STAT         absolute 0xBF805C10;
sfr unsigned long   volatile SPI4STATCLR      absolute 0xBF805C14;
sfr unsigned long   volatile SPI4STATSET      absolute 0xBF805C18;
sfr unsigned long   volatile SPI4STATINV      absolute 0xBF805C1C;
    // SPI4STAT bits
    sbit  RXBUFELM4_SPI4STAT_bit at SPI4STAT.B28;
    sbit  RXBUFELM3_SPI4STAT_bit at SPI4STAT.B27;
    sbit  RXBUFELM2_SPI4STAT_bit at SPI4STAT.B26;
    sbit  RXBUFELM1_SPI4STAT_bit at SPI4STAT.B25;
    sbit  RXBUFELM0_SPI4STAT_bit at SPI4STAT.B24;
    sbit  TXBUFELM4_SPI4STAT_bit at SPI4STAT.B20;
    sbit  TXBUFELM3_SPI4STAT_bit at SPI4STAT.B19;
    sbit  TXBUFELM2_SPI4STAT_bit at SPI4STAT.B18;
    sbit  TXBUFELM1_SPI4STAT_bit at SPI4STAT.B17;
    sbit  TXBUFELM0_SPI4STAT_bit at SPI4STAT.B16;
    sbit  SPIBUSY_SPI4STAT_bit at SPI4STAT.B11;
    sbit  SPITUR_SPI4STAT_bit at SPI4STAT.B8;
    sbit  SRMT_SPI4STAT_bit at SPI4STAT.B7;
    sbit  SPIROV_SPI4STAT_bit at SPI4STAT.B6;
    sbit  SPIRBE_SPI4STAT_bit at SPI4STAT.B5;
    sbit  SPITBE_SPI4STAT_bit at SPI4STAT.B3;
    sbit  SPITBF_SPI4STAT_bit at SPI4STAT.B1;
    sbit  SPIRBF_SPI4STAT_bit at SPI4STAT.B0;

sfr unsigned long   volatile SPI4BUF          absolute 0xBF805C20;
    // SPI4BUF bits
    const register unsigned short int SPI4BUF31 = 31;
    sbit  SPI4BUF31_bit at SPI4BUF.B31;
    const register unsigned short int SPI4BUF30 = 30;
    sbit  SPI4BUF30_bit at SPI4BUF.B30;
    const register unsigned short int SPI4BUF29 = 29;
    sbit  SPI4BUF29_bit at SPI4BUF.B29;
    const register unsigned short int SPI4BUF28 = 28;
    sbit  SPI4BUF28_bit at SPI4BUF.B28;
    const register unsigned short int SPI4BUF27 = 27;
    sbit  SPI4BUF27_bit at SPI4BUF.B27;
    const register unsigned short int SPI4BUF26 = 26;
    sbit  SPI4BUF26_bit at SPI4BUF.B26;
    const register unsigned short int SPI4BUF25 = 25;
    sbit  SPI4BUF25_bit at SPI4BUF.B25;
    const register unsigned short int SPI4BUF24 = 24;
    sbit  SPI4BUF24_bit at SPI4BUF.B24;
    const register unsigned short int SPI4BUF23 = 23;
    sbit  SPI4BUF23_bit at SPI4BUF.B23;
    const register unsigned short int SPI4BUF22 = 22;
    sbit  SPI4BUF22_bit at SPI4BUF.B22;
    const register unsigned short int SPI4BUF21 = 21;
    sbit  SPI4BUF21_bit at SPI4BUF.B21;
    const register unsigned short int SPI4BUF20 = 20;
    sbit  SPI4BUF20_bit at SPI4BUF.B20;
    const register unsigned short int SPI4BUF19 = 19;
    sbit  SPI4BUF19_bit at SPI4BUF.B19;
    const register unsigned short int SPI4BUF18 = 18;
    sbit  SPI4BUF18_bit at SPI4BUF.B18;
    const register unsigned short int SPI4BUF17 = 17;
    sbit  SPI4BUF17_bit at SPI4BUF.B17;
    const register unsigned short int SPI4BUF16 = 16;
    sbit  SPI4BUF16_bit at SPI4BUF.B16;
    const register unsigned short int SPI4BUF15 = 15;
    sbit  SPI4BUF15_bit at SPI4BUF.B15;
    const register unsigned short int SPI4BUF14 = 14;
    sbit  SPI4BUF14_bit at SPI4BUF.B14;
    const register unsigned short int SPI4BUF13 = 13;
    sbit  SPI4BUF13_bit at SPI4BUF.B13;
    const register unsigned short int SPI4BUF12 = 12;
    sbit  SPI4BUF12_bit at SPI4BUF.B12;
    const register unsigned short int SPI4BUF11 = 11;
    sbit  SPI4BUF11_bit at SPI4BUF.B11;
    const register unsigned short int SPI4BUF10 = 10;
    sbit  SPI4BUF10_bit at SPI4BUF.B10;
    const register unsigned short int SPI4BUF9 = 9;
    sbit  SPI4BUF9_bit at SPI4BUF.B9;
    const register unsigned short int SPI4BUF8 = 8;
    sbit  SPI4BUF8_bit at SPI4BUF.B8;
    const register unsigned short int SPI4BUF7 = 7;
    sbit  SPI4BUF7_bit at SPI4BUF.B7;
    const register unsigned short int SPI4BUF6 = 6;
    sbit  SPI4BUF6_bit at SPI4BUF.B6;
    const register unsigned short int SPI4BUF5 = 5;
    sbit  SPI4BUF5_bit at SPI4BUF.B5;
    const register unsigned short int SPI4BUF4 = 4;
    sbit  SPI4BUF4_bit at SPI4BUF.B4;
    const register unsigned short int SPI4BUF3 = 3;
    sbit  SPI4BUF3_bit at SPI4BUF.B3;
    const register unsigned short int SPI4BUF2 = 2;
    sbit  SPI4BUF2_bit at SPI4BUF.B2;
    const register unsigned short int SPI4BUF1 = 1;
    sbit  SPI4BUF1_bit at SPI4BUF.B1;
    const register unsigned short int SPI4BUF0 = 0;
    sbit  SPI4BUF0_bit at SPI4BUF.B0;

sfr atomic unsigned long   volatile SPI4BRG          absolute 0xBF805C30;
sfr unsigned long   volatile SPI4BRGCLR       absolute 0xBF805C34;
sfr unsigned long   volatile SPI4BRGSET       absolute 0xBF805C38;
sfr unsigned long   volatile SPI4BRGINV       absolute 0xBF805C3C;
    // SPI4BRG bits
    const register unsigned short int SPI4BRG8 = 8;
    sbit  SPI4BRG8_bit at SPI4BRG.B8;
    const register unsigned short int SPI4BRG7 = 7;
    sbit  SPI4BRG7_bit at SPI4BRG.B7;
    const register unsigned short int SPI4BRG6 = 6;
    sbit  SPI4BRG6_bit at SPI4BRG.B6;
    const register unsigned short int SPI4BRG5 = 5;
    sbit  SPI4BRG5_bit at SPI4BRG.B5;
    const register unsigned short int SPI4BRG4 = 4;
    sbit  SPI4BRG4_bit at SPI4BRG.B4;
    const register unsigned short int SPI4BRG3 = 3;
    sbit  SPI4BRG3_bit at SPI4BRG.B3;
    const register unsigned short int SPI4BRG2 = 2;
    sbit  SPI4BRG2_bit at SPI4BRG.B2;
    const register unsigned short int SPI4BRG1 = 1;
    sbit  SPI4BRG1_bit at SPI4BRG.B1;
    const register unsigned short int SPI4BRG0 = 0;
    sbit  SPI4BRG0_bit at SPI4BRG.B0;

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

sfr atomic unsigned long   volatile U4MODE           absolute 0xBF806200;
sfr unsigned long   volatile U4MODECLR        absolute 0xBF806204;
sfr unsigned long   volatile U4MODESET        absolute 0xBF806208;
sfr unsigned long   volatile U4MODEINV        absolute 0xBF80620C;
    // U4MODE bits
    sbit  ON__U4MODE_bit at U4MODE.B15;
    sbit  SIDL_U4MODE_bit at U4MODE.B13;
    sbit  IREN_U4MODE_bit at U4MODE.B12;
    sbit  WAKE_U4MODE_bit at U4MODE.B7;
    sbit  LPBACK_U4MODE_bit at U4MODE.B6;
    sbit  ABAUD_U4MODE_bit at U4MODE.B5;
    sbit  RXINV_U4MODE_bit at U4MODE.B4;
    sbit  BRGH_U4MODE_bit at U4MODE.B3;
    sbit  PDSEL1_U4MODE_bit at U4MODE.B2;
    sbit  PDSEL0_U4MODE_bit at U4MODE.B1;
    sbit  STSEL_U4MODE_bit at U4MODE.B0;

sfr atomic unsigned long   volatile U4STA            absolute 0xBF806210;
sfr unsigned long   volatile U4STACLR         absolute 0xBF806214;
sfr unsigned long   volatile U4STASET         absolute 0xBF806218;
sfr unsigned long   volatile U4STAINV         absolute 0xBF80621C;
    // U4STA bits
    sbit  ADM_EN_U4STA_bit at U4STA.B24;
    sbit  ADDR7_U4STA_bit at U4STA.B23;
    sbit  ADDR6_U4STA_bit at U4STA.B22;
    sbit  ADDR5_U4STA_bit at U4STA.B21;
    sbit  ADDR4_U4STA_bit at U4STA.B20;
    sbit  ADDR3_U4STA_bit at U4STA.B19;
    sbit  ADDR2_U4STA_bit at U4STA.B18;
    sbit  ADDR1_U4STA_bit at U4STA.B17;
    sbit  ADDR0_U4STA_bit at U4STA.B16;
    sbit  UTXISEL1_U4STA_bit at U4STA.B15;
    sbit  UTXISEL0_U4STA_bit at U4STA.B14;
    sbit  UTXINV_U4STA_bit at U4STA.B13;
    sbit  URXEN_U4STA_bit at U4STA.B12;
    sbit  UTXBRK_U4STA_bit at U4STA.B11;
    sbit  UTXEN_U4STA_bit at U4STA.B10;
    sbit  UTXBF_U4STA_bit at U4STA.B9;
    sbit  TRMT_U4STA_bit at U4STA.B8;
    sbit  URXISEL1_U4STA_bit at U4STA.B7;
    sbit  URXISEL0_U4STA_bit at U4STA.B6;
    sbit  ADDEN_U4STA_bit at U4STA.B5;
    sbit  RIDLE_U4STA_bit at U4STA.B4;
    sbit  PERR_U4STA_bit at U4STA.B3;
    sbit  FERR_U4STA_bit at U4STA.B2;
    sbit  OERR_U4STA_bit at U4STA.B1;
    sbit  URXDA_U4STA_bit at U4STA.B0;

sfr unsigned long            U4TXREG          absolute 0xBF806220;
    // U4TXREG bits
    const register unsigned short int U4TXREG8 = 8;
    sbit  U4TXREG8_bit at U4TXREG.B8;
    const register unsigned short int U4TXREG7 = 7;
    sbit  U4TXREG7_bit at U4TXREG.B7;
    const register unsigned short int U4TXREG6 = 6;
    sbit  U4TXREG6_bit at U4TXREG.B6;
    const register unsigned short int U4TXREG5 = 5;
    sbit  U4TXREG5_bit at U4TXREG.B5;
    const register unsigned short int U4TXREG4 = 4;
    sbit  U4TXREG4_bit at U4TXREG.B4;
    const register unsigned short int U4TXREG3 = 3;
    sbit  U4TXREG3_bit at U4TXREG.B3;
    const register unsigned short int U4TXREG2 = 2;
    sbit  U4TXREG2_bit at U4TXREG.B2;
    const register unsigned short int U4TXREG1 = 1;
    sbit  U4TXREG1_bit at U4TXREG.B1;
    const register unsigned short int U4TXREG0 = 0;
    sbit  U4TXREG0_bit at U4TXREG.B0;

sfr unsigned long   volatile U4RXREG          absolute 0xBF806230;
    // U4RXREG bits
    const register unsigned short int U4RXREG8 = 8;
    sbit  U4RXREG8_bit at U4RXREG.B8;
    const register unsigned short int U4RXREG7 = 7;
    sbit  U4RXREG7_bit at U4RXREG.B7;
    const register unsigned short int U4RXREG6 = 6;
    sbit  U4RXREG6_bit at U4RXREG.B6;
    const register unsigned short int U4RXREG5 = 5;
    sbit  U4RXREG5_bit at U4RXREG.B5;
    const register unsigned short int U4RXREG4 = 4;
    sbit  U4RXREG4_bit at U4RXREG.B4;
    const register unsigned short int U4RXREG3 = 3;
    sbit  U4RXREG3_bit at U4RXREG.B3;
    const register unsigned short int U4RXREG2 = 2;
    sbit  U4RXREG2_bit at U4RXREG.B2;
    const register unsigned short int U4RXREG1 = 1;
    sbit  U4RXREG1_bit at U4RXREG.B1;
    const register unsigned short int U4RXREG0 = 0;
    sbit  U4RXREG0_bit at U4RXREG.B0;

sfr atomic unsigned long            U4BRG            absolute 0xBF806240;
sfr unsigned long   volatile U4BRGCLR         absolute 0xBF806244;
sfr unsigned long   volatile U4BRGSET         absolute 0xBF806248;
sfr unsigned long   volatile U4BRGINV         absolute 0xBF80624C;
    // U4BRG bits
    sbit  BRG15_U4BRG_bit at U4BRG.B15;
    sbit  BRG14_U4BRG_bit at U4BRG.B14;
    sbit  BRG13_U4BRG_bit at U4BRG.B13;
    sbit  BRG12_U4BRG_bit at U4BRG.B12;
    sbit  BRG11_U4BRG_bit at U4BRG.B11;
    sbit  BRG10_U4BRG_bit at U4BRG.B10;
    sbit  BRG9_U4BRG_bit at U4BRG.B9;
    sbit  BRG8_U4BRG_bit at U4BRG.B8;
    sbit  BRG7_U4BRG_bit at U4BRG.B7;
    sbit  BRG6_U4BRG_bit at U4BRG.B6;
    sbit  BRG5_U4BRG_bit at U4BRG.B5;
    sbit  BRG4_U4BRG_bit at U4BRG.B4;
    sbit  BRG3_U4BRG_bit at U4BRG.B3;
    sbit  BRG2_U4BRG_bit at U4BRG.B2;
    sbit  BRG1_U4BRG_bit at U4BRG.B1;
    sbit  BRG0_U4BRG_bit at U4BRG.B0;

sfr atomic unsigned long   volatile U3MODE           absolute 0xBF806400;
sfr unsigned long   volatile U3MODECLR        absolute 0xBF806404;
sfr unsigned long   volatile U3MODESET        absolute 0xBF806408;
sfr unsigned long   volatile U3MODEINV        absolute 0xBF80640C;
    // U3MODE bits
    sbit  ON__U3MODE_bit at U3MODE.B15;
    sbit  SIDL_U3MODE_bit at U3MODE.B13;
    sbit  IREN_U3MODE_bit at U3MODE.B12;
    sbit  RTSMD_U3MODE_bit at U3MODE.B11;
    sbit  UEN1_U3MODE_bit at U3MODE.B9;
    sbit  UEN0_U3MODE_bit at U3MODE.B8;
    sbit  WAKE_U3MODE_bit at U3MODE.B7;
    sbit  LPBACK_U3MODE_bit at U3MODE.B6;
    sbit  ABAUD_U3MODE_bit at U3MODE.B5;
    sbit  RXINV_U3MODE_bit at U3MODE.B4;
    sbit  BRGH_U3MODE_bit at U3MODE.B3;
    sbit  PDSEL1_U3MODE_bit at U3MODE.B2;
    sbit  PDSEL0_U3MODE_bit at U3MODE.B1;
    sbit  STSEL_U3MODE_bit at U3MODE.B0;

sfr atomic unsigned long   volatile U3STA            absolute 0xBF806410;
sfr unsigned long   volatile U3STACLR         absolute 0xBF806414;
sfr unsigned long   volatile U3STASET         absolute 0xBF806418;
sfr unsigned long   volatile U3STAINV         absolute 0xBF80641C;
    // U3STA bits
    sbit  ADM_EN_U3STA_bit at U3STA.B24;
    sbit  ADDR7_U3STA_bit at U3STA.B23;
    sbit  ADDR6_U3STA_bit at U3STA.B22;
    sbit  ADDR5_U3STA_bit at U3STA.B21;
    sbit  ADDR4_U3STA_bit at U3STA.B20;
    sbit  ADDR3_U3STA_bit at U3STA.B19;
    sbit  ADDR2_U3STA_bit at U3STA.B18;
    sbit  ADDR1_U3STA_bit at U3STA.B17;
    sbit  ADDR0_U3STA_bit at U3STA.B16;
    sbit  UTXISEL1_U3STA_bit at U3STA.B15;
    sbit  UTXISEL0_U3STA_bit at U3STA.B14;
    sbit  UTXINV_U3STA_bit at U3STA.B13;
    sbit  URXEN_U3STA_bit at U3STA.B12;
    sbit  UTXBRK_U3STA_bit at U3STA.B11;
    sbit  UTXEN_U3STA_bit at U3STA.B10;
    sbit  UTXBF_U3STA_bit at U3STA.B9;
    sbit  TRMT_U3STA_bit at U3STA.B8;
    sbit  URXISEL1_U3STA_bit at U3STA.B7;
    sbit  URXISEL0_U3STA_bit at U3STA.B6;
    sbit  ADDEN_U3STA_bit at U3STA.B5;
    sbit  RIDLE_U3STA_bit at U3STA.B4;
    sbit  PERR_U3STA_bit at U3STA.B3;
    sbit  FERR_U3STA_bit at U3STA.B2;
    sbit  OERR_U3STA_bit at U3STA.B1;
    sbit  URXDA_U3STA_bit at U3STA.B0;

sfr unsigned long            U3TXREG          absolute 0xBF806420;
    // U3TXREG bits
    const register unsigned short int U3TXREG8 = 8;
    sbit  U3TXREG8_bit at U3TXREG.B8;
    const register unsigned short int U3TXREG7 = 7;
    sbit  U3TXREG7_bit at U3TXREG.B7;
    const register unsigned short int U3TXREG6 = 6;
    sbit  U3TXREG6_bit at U3TXREG.B6;
    const register unsigned short int U3TXREG5 = 5;
    sbit  U3TXREG5_bit at U3TXREG.B5;
    const register unsigned short int U3TXREG4 = 4;
    sbit  U3TXREG4_bit at U3TXREG.B4;
    const register unsigned short int U3TXREG3 = 3;
    sbit  U3TXREG3_bit at U3TXREG.B3;
    const register unsigned short int U3TXREG2 = 2;
    sbit  U3TXREG2_bit at U3TXREG.B2;
    const register unsigned short int U3TXREG1 = 1;
    sbit  U3TXREG1_bit at U3TXREG.B1;
    const register unsigned short int U3TXREG0 = 0;
    sbit  U3TXREG0_bit at U3TXREG.B0;

sfr unsigned long   volatile U3RXREG          absolute 0xBF806430;
    // U3RXREG bits
    const register unsigned short int U3RXREG8 = 8;
    sbit  U3RXREG8_bit at U3RXREG.B8;
    const register unsigned short int U3RXREG7 = 7;
    sbit  U3RXREG7_bit at U3RXREG.B7;
    const register unsigned short int U3RXREG6 = 6;
    sbit  U3RXREG6_bit at U3RXREG.B6;
    const register unsigned short int U3RXREG5 = 5;
    sbit  U3RXREG5_bit at U3RXREG.B5;
    const register unsigned short int U3RXREG4 = 4;
    sbit  U3RXREG4_bit at U3RXREG.B4;
    const register unsigned short int U3RXREG3 = 3;
    sbit  U3RXREG3_bit at U3RXREG.B3;
    const register unsigned short int U3RXREG2 = 2;
    sbit  U3RXREG2_bit at U3RXREG.B2;
    const register unsigned short int U3RXREG1 = 1;
    sbit  U3RXREG1_bit at U3RXREG.B1;
    const register unsigned short int U3RXREG0 = 0;
    sbit  U3RXREG0_bit at U3RXREG.B0;

sfr atomic unsigned long            U3BRG            absolute 0xBF806440;
sfr unsigned long            U5RG             absolute 0xBF806440;
sfr unsigned long   volatile U3BRGCLR         absolute 0xBF806444;
sfr unsigned long   volatile U3BRGSET         absolute 0xBF806448;
sfr unsigned long   volatile U3BRGINV         absolute 0xBF80644C;
    // U3BRG bits
    sbit  BRG15_U3BRG_bit at U3BRG.B15;
    sbit  BRG14_U3BRG_bit at U3BRG.B14;
    sbit  BRG13_U3BRG_bit at U3BRG.B13;
    sbit  BRG12_U3BRG_bit at U3BRG.B12;
    sbit  BRG11_U3BRG_bit at U3BRG.B11;
    sbit  BRG10_U3BRG_bit at U3BRG.B10;
    sbit  BRG9_U3BRG_bit at U3BRG.B9;
    sbit  BRG8_U3BRG_bit at U3BRG.B8;
    sbit  BRG7_U3BRG_bit at U3BRG.B7;
    sbit  BRG6_U3BRG_bit at U3BRG.B6;
    sbit  BRG5_U3BRG_bit at U3BRG.B5;
    sbit  BRG4_U3BRG_bit at U3BRG.B4;
    sbit  BRG3_U3BRG_bit at U3BRG.B3;
    sbit  BRG2_U3BRG_bit at U3BRG.B2;
    sbit  BRG1_U3BRG_bit at U3BRG.B1;
    sbit  BRG0_U3BRG_bit at U3BRG.B0;

sfr atomic unsigned long   volatile U6MODE           absolute 0xBF806600;
sfr unsigned long   volatile U6MODECLR        absolute 0xBF806604;
sfr unsigned long   volatile U6MODESET        absolute 0xBF806608;
sfr unsigned long   volatile U6MODEINV        absolute 0xBF80660C;
    // U6MODE bits
    sbit  ON__U6MODE_bit at U6MODE.B15;
    sbit  SIDL_U6MODE_bit at U6MODE.B13;
    sbit  IREN_U6MODE_bit at U6MODE.B12;
    sbit  WAKE_U6MODE_bit at U6MODE.B7;
    sbit  LPBACK_U6MODE_bit at U6MODE.B6;
    sbit  ABAUD_U6MODE_bit at U6MODE.B5;
    sbit  RXINV_U6MODE_bit at U6MODE.B4;
    sbit  BRGH_U6MODE_bit at U6MODE.B3;
    sbit  PDSEL1_U6MODE_bit at U6MODE.B2;
    sbit  PDSEL0_U6MODE_bit at U6MODE.B1;
    sbit  STSEL_U6MODE_bit at U6MODE.B0;

sfr atomic unsigned long   volatile U6STA            absolute 0xBF806610;
sfr unsigned long   volatile U6STACLR         absolute 0xBF806614;
sfr unsigned long   volatile U6STASET         absolute 0xBF806618;
sfr unsigned long   volatile U6STAINV         absolute 0xBF80661C;
    // U6STA bits
    sbit  ADM_EN_U6STA_bit at U6STA.B24;
    sbit  ADDR7_U6STA_bit at U6STA.B23;
    sbit  ADDR6_U6STA_bit at U6STA.B22;
    sbit  ADDR5_U6STA_bit at U6STA.B21;
    sbit  ADDR4_U6STA_bit at U6STA.B20;
    sbit  ADDR3_U6STA_bit at U6STA.B19;
    sbit  ADDR2_U6STA_bit at U6STA.B18;
    sbit  ADDR1_U6STA_bit at U6STA.B17;
    sbit  ADDR0_U6STA_bit at U6STA.B16;
    sbit  UTXISEL1_U6STA_bit at U6STA.B15;
    sbit  UTXISEL0_U6STA_bit at U6STA.B14;
    sbit  UTXINV_U6STA_bit at U6STA.B13;
    sbit  URXEN_U6STA_bit at U6STA.B12;
    sbit  UTXBRK_U6STA_bit at U6STA.B11;
    sbit  UTXEN_U6STA_bit at U6STA.B10;
    sbit  UTXBF_U6STA_bit at U6STA.B9;
    sbit  TRMT_U6STA_bit at U6STA.B8;
    sbit  URXISEL1_U6STA_bit at U6STA.B7;
    sbit  URXISEL0_U6STA_bit at U6STA.B6;
    sbit  ADDEN_U6STA_bit at U6STA.B5;
    sbit  RIDLE_U6STA_bit at U6STA.B4;
    sbit  PERR_U6STA_bit at U6STA.B3;
    sbit  FERR_U6STA_bit at U6STA.B2;
    sbit  OERR_U6STA_bit at U6STA.B1;
    sbit  URXDA_U6STA_bit at U6STA.B0;

sfr unsigned long   volatile U6TXREG          absolute 0xBF806620;
    // U6TXREG bits
    const register unsigned short int U6TXREG8 = 8;
    sbit  U6TXREG8_bit at U6TXREG.B8;
    const register unsigned short int U6TXREG7 = 7;
    sbit  U6TXREG7_bit at U6TXREG.B7;
    const register unsigned short int U6TXREG6 = 6;
    sbit  U6TXREG6_bit at U6TXREG.B6;
    const register unsigned short int U6TXREG5 = 5;
    sbit  U6TXREG5_bit at U6TXREG.B5;
    const register unsigned short int U6TXREG4 = 4;
    sbit  U6TXREG4_bit at U6TXREG.B4;
    const register unsigned short int U6TXREG3 = 3;
    sbit  U6TXREG3_bit at U6TXREG.B3;
    const register unsigned short int U6TXREG2 = 2;
    sbit  U6TXREG2_bit at U6TXREG.B2;
    const register unsigned short int U6TXREG1 = 1;
    sbit  U6TXREG1_bit at U6TXREG.B1;
    const register unsigned short int U6TXREG0 = 0;
    sbit  U6TXREG0_bit at U6TXREG.B0;

sfr unsigned long   volatile U6RXREG          absolute 0xBF806630;
    // U6RXREG bits
    const register unsigned short int U6RXREG8 = 8;
    sbit  U6RXREG8_bit at U6RXREG.B8;
    const register unsigned short int U6RXREG7 = 7;
    sbit  U6RXREG7_bit at U6RXREG.B7;
    const register unsigned short int U6RXREG6 = 6;
    sbit  U6RXREG6_bit at U6RXREG.B6;
    const register unsigned short int U6RXREG5 = 5;
    sbit  U6RXREG5_bit at U6RXREG.B5;
    const register unsigned short int U6RXREG4 = 4;
    sbit  U6RXREG4_bit at U6RXREG.B4;
    const register unsigned short int U6RXREG3 = 3;
    sbit  U6RXREG3_bit at U6RXREG.B3;
    const register unsigned short int U6RXREG2 = 2;
    sbit  U6RXREG2_bit at U6RXREG.B2;
    const register unsigned short int U6RXREG1 = 1;
    sbit  U6RXREG1_bit at U6RXREG.B1;
    const register unsigned short int U6RXREG0 = 0;
    sbit  U6RXREG0_bit at U6RXREG.B0;

sfr atomic unsigned long   volatile U6BRG            absolute 0xBF806640;
sfr unsigned long   volatile U6BRGCLR         absolute 0xBF806644;
sfr unsigned long   volatile U6BRGSET         absolute 0xBF806648;
sfr unsigned long   volatile U6BRGINV         absolute 0xBF80664C;
    // U6BRG bits
    sbit  BRG15_U6BRG_bit at U6BRG.B15;
    sbit  BRG14_U6BRG_bit at U6BRG.B14;
    sbit  BRG13_U6BRG_bit at U6BRG.B13;
    sbit  BRG12_U6BRG_bit at U6BRG.B12;
    sbit  BRG11_U6BRG_bit at U6BRG.B11;
    sbit  BRG10_U6BRG_bit at U6BRG.B10;
    sbit  BRG9_U6BRG_bit at U6BRG.B9;
    sbit  BRG8_U6BRG_bit at U6BRG.B8;
    sbit  BRG7_U6BRG_bit at U6BRG.B7;
    sbit  BRG6_U6BRG_bit at U6BRG.B6;
    sbit  BRG5_U6BRG_bit at U6BRG.B5;
    sbit  BRG4_U6BRG_bit at U6BRG.B4;
    sbit  BRG3_U6BRG_bit at U6BRG.B3;
    sbit  BRG2_U6BRG_bit at U6BRG.B2;
    sbit  BRG1_U6BRG_bit at U6BRG.B1;
    sbit  BRG0_U6BRG_bit at U6BRG.B0;

sfr atomic unsigned long   volatile U2MODE           absolute 0xBF806800;
sfr unsigned long   volatile U2MODECLR        absolute 0xBF806804;
sfr unsigned long   volatile U2MODESET        absolute 0xBF806808;
sfr unsigned long   volatile U2MODEINV        absolute 0xBF80680C;
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

sfr atomic unsigned long   volatile U2STA            absolute 0xBF806810;
sfr unsigned long   volatile U2STACLR         absolute 0xBF806814;
sfr unsigned long   volatile U2STASET         absolute 0xBF806818;
sfr unsigned long   volatile U2STAINV         absolute 0xBF80681C;
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

sfr unsigned long            U2TXREG          absolute 0xBF806820;
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

sfr unsigned long   volatile U2RXREG          absolute 0xBF806830;
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

sfr atomic unsigned long            U2BRG            absolute 0xBF806840;
sfr unsigned long            U6RG             absolute 0xBF806840;
sfr unsigned long   volatile U2BRGCLR         absolute 0xBF806844;
sfr unsigned long   volatile U2BRGSET         absolute 0xBF806848;
sfr unsigned long   volatile U2BRGINV         absolute 0xBF80684C;
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

sfr atomic unsigned long   volatile U5MODE           absolute 0xBF806A00;
sfr unsigned long   volatile U5MODECLR        absolute 0xBF806A04;
sfr unsigned long   volatile U5MODESET        absolute 0xBF806A08;
sfr unsigned long   volatile U5MODEINV        absolute 0xBF806A0C;
    // U5MODE bits
    sbit  ON__U5MODE_bit at U5MODE.B15;
    sbit  SIDL_U5MODE_bit at U5MODE.B13;
    sbit  IREN_U5MODE_bit at U5MODE.B12;
    sbit  WAKE_U5MODE_bit at U5MODE.B7;
    sbit  LPBACK_U5MODE_bit at U5MODE.B6;
    sbit  ABAUD_U5MODE_bit at U5MODE.B5;
    sbit  RXINV_U5MODE_bit at U5MODE.B4;
    sbit  BRGH_U5MODE_bit at U5MODE.B3;
    sbit  PDSEL1_U5MODE_bit at U5MODE.B2;
    sbit  PDSEL0_U5MODE_bit at U5MODE.B1;
    sbit  STSEL_U5MODE_bit at U5MODE.B0;

sfr atomic unsigned long   volatile U5STA            absolute 0xBF806A10;
sfr unsigned long   volatile U5STACLR         absolute 0xBF806A14;
sfr unsigned long   volatile U5STASET         absolute 0xBF806A18;
sfr unsigned long   volatile U5STAINV         absolute 0xBF806A1C;
    // U5STA bits
    sbit  ADM_EN_U5STA_bit at U5STA.B24;
    sbit  ADDR7_U5STA_bit at U5STA.B23;
    sbit  ADDR6_U5STA_bit at U5STA.B22;
    sbit  ADDR5_U5STA_bit at U5STA.B21;
    sbit  ADDR4_U5STA_bit at U5STA.B20;
    sbit  ADDR3_U5STA_bit at U5STA.B19;
    sbit  ADDR2_U5STA_bit at U5STA.B18;
    sbit  ADDR1_U5STA_bit at U5STA.B17;
    sbit  ADDR0_U5STA_bit at U5STA.B16;
    sbit  UTXISEL1_U5STA_bit at U5STA.B15;
    sbit  UTXISEL0_U5STA_bit at U5STA.B14;
    sbit  UTXINV_U5STA_bit at U5STA.B13;
    sbit  URXEN_U5STA_bit at U5STA.B12;
    sbit  UTXBRK_U5STA_bit at U5STA.B11;
    sbit  UTXEN_U5STA_bit at U5STA.B10;
    sbit  UTXBF_U5STA_bit at U5STA.B9;
    sbit  TRMT_U5STA_bit at U5STA.B8;
    sbit  URXISEL1_U5STA_bit at U5STA.B7;
    sbit  URXISEL0_U5STA_bit at U5STA.B6;
    sbit  ADDEN_U5STA_bit at U5STA.B5;
    sbit  RIDLE_U5STA_bit at U5STA.B4;
    sbit  PERR_U5STA_bit at U5STA.B3;
    sbit  FERR_U5STA_bit at U5STA.B2;
    sbit  OERR_U5STA_bit at U5STA.B1;
    sbit  URXDA_U5STA_bit at U5STA.B0;

sfr unsigned long   volatile U5TXREG          absolute 0xBF806A20;
    // U5TXREG bits
    const register unsigned short int U5TXREG8 = 8;
    sbit  U5TXREG8_bit at U5TXREG.B8;
    const register unsigned short int U5TXREG7 = 7;
    sbit  U5TXREG7_bit at U5TXREG.B7;
    const register unsigned short int U5TXREG6 = 6;
    sbit  U5TXREG6_bit at U5TXREG.B6;
    const register unsigned short int U5TXREG5 = 5;
    sbit  U5TXREG5_bit at U5TXREG.B5;
    const register unsigned short int U5TXREG4 = 4;
    sbit  U5TXREG4_bit at U5TXREG.B4;
    const register unsigned short int U5TXREG3 = 3;
    sbit  U5TXREG3_bit at U5TXREG.B3;
    const register unsigned short int U5TXREG2 = 2;
    sbit  U5TXREG2_bit at U5TXREG.B2;
    const register unsigned short int U5TXREG1 = 1;
    sbit  U5TXREG1_bit at U5TXREG.B1;
    const register unsigned short int U5TXREG0 = 0;
    sbit  U5TXREG0_bit at U5TXREG.B0;

sfr unsigned long   volatile U5RXREG          absolute 0xBF806A30;
    // U5RXREG bits
    const register unsigned short int U5RXREG8 = 8;
    sbit  U5RXREG8_bit at U5RXREG.B8;
    const register unsigned short int U5RXREG7 = 7;
    sbit  U5RXREG7_bit at U5RXREG.B7;
    const register unsigned short int U5RXREG6 = 6;
    sbit  U5RXREG6_bit at U5RXREG.B6;
    const register unsigned short int U5RXREG5 = 5;
    sbit  U5RXREG5_bit at U5RXREG.B5;
    const register unsigned short int U5RXREG4 = 4;
    sbit  U5RXREG4_bit at U5RXREG.B4;
    const register unsigned short int U5RXREG3 = 3;
    sbit  U5RXREG3_bit at U5RXREG.B3;
    const register unsigned short int U5RXREG2 = 2;
    sbit  U5RXREG2_bit at U5RXREG.B2;
    const register unsigned short int U5RXREG1 = 1;
    sbit  U5RXREG1_bit at U5RXREG.B1;
    const register unsigned short int U5RXREG0 = 0;
    sbit  U5RXREG0_bit at U5RXREG.B0;

sfr atomic unsigned long   volatile U5BRG            absolute 0xBF806A40;
sfr unsigned long   volatile U5BRGCLR         absolute 0xBF806A44;
sfr unsigned long   volatile U5BRGSET         absolute 0xBF806A48;
sfr unsigned long   volatile U5BRGINV         absolute 0xBF806A4C;
    // U5BRG bits
    sbit  BRG15_U5BRG_bit at U5BRG.B15;
    sbit  BRG14_U5BRG_bit at U5BRG.B14;
    sbit  BRG13_U5BRG_bit at U5BRG.B13;
    sbit  BRG12_U5BRG_bit at U5BRG.B12;
    sbit  BRG11_U5BRG_bit at U5BRG.B11;
    sbit  BRG10_U5BRG_bit at U5BRG.B10;
    sbit  BRG9_U5BRG_bit at U5BRG.B9;
    sbit  BRG8_U5BRG_bit at U5BRG.B8;
    sbit  BRG7_U5BRG_bit at U5BRG.B7;
    sbit  BRG6_U5BRG_bit at U5BRG.B6;
    sbit  BRG5_U5BRG_bit at U5BRG.B5;
    sbit  BRG4_U5BRG_bit at U5BRG.B4;
    sbit  BRG3_U5BRG_bit at U5BRG.B3;
    sbit  BRG2_U5BRG_bit at U5BRG.B2;
    sbit  BRG1_U5BRG_bit at U5BRG.B1;
    sbit  BRG0_U5BRG_bit at U5BRG.B0;

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
    const register unsigned short int CS2P = 4;
    sbit  CS2P_bit at PMCON.B4;
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
    sbit  MODE16_PMMODE_bit at PMMODE.B10;
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

sfr atomic unsigned long            AD1PCFG          absolute 0xBF809060;
sfr unsigned long   volatile AD1PCFGCLR       absolute 0xBF809064;
sfr unsigned long   volatile AD1PCFGSET       absolute 0xBF809068;
sfr unsigned long   volatile AD1PCFGINV       absolute 0xBF80906C;
    // AD1PCFG bits
    const register unsigned short int PCFG15 = 15;
    sbit  PCFG15_bit at AD1PCFG.B15;
    const register unsigned short int PCFG14 = 14;
    sbit  PCFG14_bit at AD1PCFG.B14;
    const register unsigned short int PCFG13 = 13;
    sbit  PCFG13_bit at AD1PCFG.B13;
    const register unsigned short int PCFG12 = 12;
    sbit  PCFG12_bit at AD1PCFG.B12;
    const register unsigned short int PCFG11 = 11;
    sbit  PCFG11_bit at AD1PCFG.B11;
    const register unsigned short int PCFG10 = 10;
    sbit  PCFG10_bit at AD1PCFG.B10;
    const register unsigned short int PCFG9 = 9;
    sbit  PCFG9_bit at AD1PCFG.B9;
    const register unsigned short int PCFG8 = 8;
    sbit  PCFG8_bit at AD1PCFG.B8;
    const register unsigned short int PCFG7 = 7;
    sbit  PCFG7_bit at AD1PCFG.B7;
    const register unsigned short int PCFG6 = 6;
    sbit  PCFG6_bit at AD1PCFG.B6;
    const register unsigned short int PCFG5 = 5;
    sbit  PCFG5_bit at AD1PCFG.B5;
    const register unsigned short int PCFG4 = 4;
    sbit  PCFG4_bit at AD1PCFG.B4;
    const register unsigned short int PCFG3 = 3;
    sbit  PCFG3_bit at AD1PCFG.B3;
    const register unsigned short int PCFG2 = 2;
    sbit  PCFG2_bit at AD1PCFG.B2;
    const register unsigned short int PCFG1 = 1;
    sbit  PCFG1_bit at AD1PCFG.B1;
    const register unsigned short int PCFG0 = 0;
    sbit  PCFG0_bit at AD1PCFG.B0;

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
    const register unsigned short int VREFSEL = 10;
    sbit  VREFSEL_bit at CVRCON.B10;
    const register unsigned short int BGSEL1 = 9;
    sbit  BGSEL1_bit at CVRCON.B9;
    const register unsigned short int BGSEL0 = 8;
    sbit  BGSEL0_bit at CVRCON.B8;
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

sfr atomic unsigned long   volatile CMSTAT           absolute 0xBF80A060;
sfr unsigned long   volatile CMSTATCLR        absolute 0xBF80A064;
sfr unsigned long   volatile CMSTATSET        absolute 0xBF80A068;
sfr unsigned long   volatile CMSTATINV        absolute 0xBF80A06C;
    // CMSTAT bits
    sbit  SIDL_CMSTAT_bit at CMSTAT.B13;
    const register unsigned short int C2OUT = 1;
    sbit  C2OUT_bit at CMSTAT.B1;
    const register unsigned short int C1OUT = 0;
    sbit  C1OUT_bit at CMSTAT.B0;

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

sfr unsigned long   volatile DDPCON           absolute 0xBF80F200;
    // DDPCON bits
    const register unsigned short int JTAGEN = 3;
    sbit  JTAGEN_bit at DDPCON.B3;
    const register unsigned short int TROEN = 2;
    sbit  TROEN_bit at DDPCON.B2;
    const register unsigned short int TDOEN = 0;
    sbit  TDOEN_bit at DDPCON.B0;

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

sfr unsigned long   volatile _DDPSTAT         absolute 0xBF880140;
    // _DDPSTAT bits
    const register unsigned short int STOV15 = 31;
    sbit  STOV15_bit at _DDPSTAT.B31;
    const register unsigned short int STOV14 = 30;
    sbit  STOV14_bit at _DDPSTAT.B30;
    const register unsigned short int STOV13 = 29;
    sbit  STOV13_bit at _DDPSTAT.B29;
    const register unsigned short int STOV12 = 28;
    sbit  STOV12_bit at _DDPSTAT.B28;
    const register unsigned short int STOV11 = 27;
    sbit  STOV11_bit at _DDPSTAT.B27;
    const register unsigned short int STOV10 = 26;
    sbit  STOV10_bit at _DDPSTAT.B26;
    const register unsigned short int STOV9 = 25;
    sbit  STOV9_bit at _DDPSTAT.B25;
    const register unsigned short int STOV8 = 24;
    sbit  STOV8_bit at _DDPSTAT.B24;
    const register unsigned short int STOV7 = 23;
    sbit  STOV7_bit at _DDPSTAT.B23;
    const register unsigned short int STOV6 = 22;
    sbit  STOV6_bit at _DDPSTAT.B22;
    const register unsigned short int STOV5 = 21;
    sbit  STOV5_bit at _DDPSTAT.B21;
    const register unsigned short int STOV4 = 20;
    sbit  STOV4_bit at _DDPSTAT.B20;
    const register unsigned short int STOV3 = 19;
    sbit  STOV3_bit at _DDPSTAT.B19;
    const register unsigned short int STOV2 = 18;
    sbit  STOV2_bit at _DDPSTAT.B18;
    const register unsigned short int STOV1 = 17;
    sbit  STOV1_bit at _DDPSTAT.B17;
    const register unsigned short int STOV0 = 16;
    sbit  STOV0_bit at _DDPSTAT.B16;
    const register unsigned short int APOOV = 10;
    sbit  APOOV_bit at _DDPSTAT.B10;
    const register unsigned short int APIOV = 9;
    sbit  APIOV_bit at _DDPSTAT.B9;
    const register unsigned short int STRFUL = 3;
    sbit  STRFUL_bit at _DDPSTAT.B3;
    const register unsigned short int APOFUL = 2;
    sbit  APOFUL_bit at _DDPSTAT.B2;
    const register unsigned short int APIFUL = 1;
    sbit  APIFUL_bit at _DDPSTAT.B1;

sfr atomic unsigned long   volatile _STRO            absolute 0xBF880170;
sfr unsigned long   volatile _STROCLR         absolute 0xBF880174;
sfr unsigned long   volatile _STROSET         absolute 0xBF880178;
sfr unsigned long   volatile _STROINV         absolute 0xBF88017C;
    // _STRO bits
    const register unsigned short int _STRO31 = 31;
    sbit  _STRO31_bit at _STRO.B31;
    const register unsigned short int _STRO30 = 30;
    sbit  _STRO30_bit at _STRO.B30;
    const register unsigned short int _STRO29 = 29;
    sbit  _STRO29_bit at _STRO.B29;
    const register unsigned short int _STRO28 = 28;
    sbit  _STRO28_bit at _STRO.B28;
    const register unsigned short int _STRO27 = 27;
    sbit  _STRO27_bit at _STRO.B27;
    const register unsigned short int _STRO26 = 26;
    sbit  _STRO26_bit at _STRO.B26;
    const register unsigned short int _STRO25 = 25;
    sbit  _STRO25_bit at _STRO.B25;
    const register unsigned short int _STRO24 = 24;
    sbit  _STRO24_bit at _STRO.B24;
    const register unsigned short int _STRO23 = 23;
    sbit  _STRO23_bit at _STRO.B23;
    const register unsigned short int _STRO22 = 22;
    sbit  _STRO22_bit at _STRO.B22;
    const register unsigned short int _STRO21 = 21;
    sbit  _STRO21_bit at _STRO.B21;
    const register unsigned short int _STRO20 = 20;
    sbit  _STRO20_bit at _STRO.B20;
    const register unsigned short int _STRO19 = 19;
    sbit  _STRO19_bit at _STRO.B19;
    const register unsigned short int _STRO18 = 18;
    sbit  _STRO18_bit at _STRO.B18;
    const register unsigned short int _STRO17 = 17;
    sbit  _STRO17_bit at _STRO.B17;
    const register unsigned short int _STRO16 = 16;
    sbit  _STRO16_bit at _STRO.B16;
    const register unsigned short int _STRO15 = 15;
    sbit  _STRO15_bit at _STRO.B15;
    const register unsigned short int _STRO14 = 14;
    sbit  _STRO14_bit at _STRO.B14;
    const register unsigned short int _STRO13 = 13;
    sbit  _STRO13_bit at _STRO.B13;
    const register unsigned short int _STRO12 = 12;
    sbit  _STRO12_bit at _STRO.B12;
    const register unsigned short int _STRO11 = 11;
    sbit  _STRO11_bit at _STRO.B11;
    const register unsigned short int _STRO10 = 10;
    sbit  _STRO10_bit at _STRO.B10;
    const register unsigned short int _STRO9 = 9;
    sbit  _STRO9_bit at _STRO.B9;
    const register unsigned short int _STRO8 = 8;
    sbit  _STRO8_bit at _STRO.B8;
    const register unsigned short int _STRO7 = 7;
    sbit  _STRO7_bit at _STRO.B7;
    const register unsigned short int _STRO6 = 6;
    sbit  _STRO6_bit at _STRO.B6;
    const register unsigned short int _STRO5 = 5;
    sbit  _STRO5_bit at _STRO.B5;
    const register unsigned short int _STRO4 = 4;
    sbit  _STRO4_bit at _STRO.B4;
    const register unsigned short int _STRO3 = 3;
    sbit  _STRO3_bit at _STRO.B3;
    const register unsigned short int _STRO2 = 2;
    sbit  _STRO2_bit at _STRO.B2;
    const register unsigned short int _STRO1 = 1;
    sbit  _STRO1_bit at _STRO.B1;
    const register unsigned short int _STRO0 = 0;
    sbit  _STRO0_bit at _STRO.B0;

sfr atomic unsigned long   volatile _APPO            absolute 0xBF880180;
sfr unsigned long   volatile _APPOCLR         absolute 0xBF880184;
sfr unsigned long   volatile _APPOSET         absolute 0xBF880188;
sfr unsigned long   volatile _APPOINV         absolute 0xBF88018C;
    // _APPO bits
    const register unsigned short int _APPO31 = 31;
    sbit  _APPO31_bit at _APPO.B31;
    const register unsigned short int _APPO30 = 30;
    sbit  _APPO30_bit at _APPO.B30;
    const register unsigned short int _APPO29 = 29;
    sbit  _APPO29_bit at _APPO.B29;
    const register unsigned short int _APPO28 = 28;
    sbit  _APPO28_bit at _APPO.B28;
    const register unsigned short int _APPO27 = 27;
    sbit  _APPO27_bit at _APPO.B27;
    const register unsigned short int _APPO26 = 26;
    sbit  _APPO26_bit at _APPO.B26;
    const register unsigned short int _APPO25 = 25;
    sbit  _APPO25_bit at _APPO.B25;
    const register unsigned short int _APPO24 = 24;
    sbit  _APPO24_bit at _APPO.B24;
    const register unsigned short int _APPO23 = 23;
    sbit  _APPO23_bit at _APPO.B23;
    const register unsigned short int _APPO22 = 22;
    sbit  _APPO22_bit at _APPO.B22;
    const register unsigned short int _APPO21 = 21;
    sbit  _APPO21_bit at _APPO.B21;
    const register unsigned short int _APPO20 = 20;
    sbit  _APPO20_bit at _APPO.B20;
    const register unsigned short int _APPO19 = 19;
    sbit  _APPO19_bit at _APPO.B19;
    const register unsigned short int _APPO18 = 18;
    sbit  _APPO18_bit at _APPO.B18;
    const register unsigned short int _APPO17 = 17;
    sbit  _APPO17_bit at _APPO.B17;
    const register unsigned short int _APPO16 = 16;
    sbit  _APPO16_bit at _APPO.B16;
    const register unsigned short int _APPO15 = 15;
    sbit  _APPO15_bit at _APPO.B15;
    const register unsigned short int _APPO14 = 14;
    sbit  _APPO14_bit at _APPO.B14;
    const register unsigned short int _APPO13 = 13;
    sbit  _APPO13_bit at _APPO.B13;
    const register unsigned short int _APPO12 = 12;
    sbit  _APPO12_bit at _APPO.B12;
    const register unsigned short int _APPO11 = 11;
    sbit  _APPO11_bit at _APPO.B11;
    const register unsigned short int _APPO10 = 10;
    sbit  _APPO10_bit at _APPO.B10;
    const register unsigned short int _APPO9 = 9;
    sbit  _APPO9_bit at _APPO.B9;
    const register unsigned short int _APPO8 = 8;
    sbit  _APPO8_bit at _APPO.B8;
    const register unsigned short int _APPO7 = 7;
    sbit  _APPO7_bit at _APPO.B7;
    const register unsigned short int _APPO6 = 6;
    sbit  _APPO6_bit at _APPO.B6;
    const register unsigned short int _APPO5 = 5;
    sbit  _APPO5_bit at _APPO.B5;
    const register unsigned short int _APPO4 = 4;
    sbit  _APPO4_bit at _APPO.B4;
    const register unsigned short int _APPO3 = 3;
    sbit  _APPO3_bit at _APPO.B3;
    const register unsigned short int _APPO2 = 2;
    sbit  _APPO2_bit at _APPO.B2;
    const register unsigned short int _APPO1 = 1;
    sbit  _APPO1_bit at _APPO.B1;
    const register unsigned short int _APPO0 = 0;
    sbit  _APPO0_bit at _APPO.B0;

sfr unsigned long   volatile _APPI            absolute 0xBF880190;
    // _APPI bits
    const register unsigned short int _APPI31 = 31;
    sbit  _APPI31_bit at _APPI.B31;
    const register unsigned short int _APPI30 = 30;
    sbit  _APPI30_bit at _APPI.B30;
    const register unsigned short int _APPI29 = 29;
    sbit  _APPI29_bit at _APPI.B29;
    const register unsigned short int _APPI28 = 28;
    sbit  _APPI28_bit at _APPI.B28;
    const register unsigned short int _APPI27 = 27;
    sbit  _APPI27_bit at _APPI.B27;
    const register unsigned short int _APPI26 = 26;
    sbit  _APPI26_bit at _APPI.B26;
    const register unsigned short int _APPI25 = 25;
    sbit  _APPI25_bit at _APPI.B25;
    const register unsigned short int _APPI24 = 24;
    sbit  _APPI24_bit at _APPI.B24;
    const register unsigned short int _APPI23 = 23;
    sbit  _APPI23_bit at _APPI.B23;
    const register unsigned short int _APPI22 = 22;
    sbit  _APPI22_bit at _APPI.B22;
    const register unsigned short int _APPI21 = 21;
    sbit  _APPI21_bit at _APPI.B21;
    const register unsigned short int _APPI20 = 20;
    sbit  _APPI20_bit at _APPI.B20;
    const register unsigned short int _APPI19 = 19;
    sbit  _APPI19_bit at _APPI.B19;
    const register unsigned short int _APPI18 = 18;
    sbit  _APPI18_bit at _APPI.B18;
    const register unsigned short int _APPI17 = 17;
    sbit  _APPI17_bit at _APPI.B17;
    const register unsigned short int _APPI16 = 16;
    sbit  _APPI16_bit at _APPI.B16;
    const register unsigned short int _APPI15 = 15;
    sbit  _APPI15_bit at _APPI.B15;
    const register unsigned short int _APPI14 = 14;
    sbit  _APPI14_bit at _APPI.B14;
    const register unsigned short int _APPI13 = 13;
    sbit  _APPI13_bit at _APPI.B13;
    const register unsigned short int _APPI12 = 12;
    sbit  _APPI12_bit at _APPI.B12;
    const register unsigned short int _APPI11 = 11;
    sbit  _APPI11_bit at _APPI.B11;
    const register unsigned short int _APPI10 = 10;
    sbit  _APPI10_bit at _APPI.B10;
    const register unsigned short int _APPI9 = 9;
    sbit  _APPI9_bit at _APPI.B9;
    const register unsigned short int _APPI8 = 8;
    sbit  _APPI8_bit at _APPI.B8;
    const register unsigned short int _APPI7 = 7;
    sbit  _APPI7_bit at _APPI.B7;
    const register unsigned short int _APPI6 = 6;
    sbit  _APPI6_bit at _APPI.B6;
    const register unsigned short int _APPI5 = 5;
    sbit  _APPI5_bit at _APPI.B5;
    const register unsigned short int _APPI4 = 4;
    sbit  _APPI4_bit at _APPI.B4;
    const register unsigned short int _APPI3 = 3;
    sbit  _APPI3_bit at _APPI.B3;
    const register unsigned short int _APPI2 = 2;
    sbit  _APPI2_bit at _APPI.B2;
    const register unsigned short int _APPI1 = 1;
    sbit  _APPI1_bit at _APPI.B1;
    const register unsigned short int _APPI0 = 0;
    sbit  _APPI0_bit at _APPI.B0;

sfr atomic unsigned long   volatile INTCON           absolute 0xBF881000;
sfr unsigned long   volatile INTCONCLR        absolute 0xBF881004;
sfr unsigned long   volatile INTCONSET        absolute 0xBF881008;
sfr unsigned long   volatile INTCONINV        absolute 0xBF88100C;
    // INTCON bits
    const register unsigned short int SS0 = 16;
    sbit  SS0_bit at INTCON.B16;
    const register unsigned short int FRZ = 14;
    sbit  FRZ_bit at INTCON.B14;
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
    const register unsigned short int I2C1MIF = 31;
    sbit  I2C1MIF_bit at IFS0.B31;
    const register unsigned short int I2C1SIF = 30;
    sbit  I2C1SIF_bit at IFS0.B30;
    const register unsigned short int I2C1BIF = 29;
    sbit  I2C1BIF_bit at IFS0.B29;
    const register unsigned short int U1TXIF = 28;
    sbit  U1TXIF_bit at IFS0.B28;
    const register unsigned short int SPI3TXIF = 28;
    sbit  SPI3TXIF_bit at IFS0.B28;
    const register unsigned short int I2C3MIF = 28;
    sbit  I2C3MIF_bit at IFS0.B28;
    const register unsigned short int U1RXIF = 27;
    sbit  U1RXIF_bit at IFS0.B27;
    const register unsigned short int SPI3RXIF = 27;
    sbit  SPI3RXIF_bit at IFS0.B27;
    const register unsigned short int I2C3SIF = 27;
    sbit  I2C3SIF_bit at IFS0.B27;
    const register unsigned short int U1EIF = 26;
    sbit  U1EIF_bit at IFS0.B26;
    const register unsigned short int SPI3EIF = 26;
    sbit  SPI3EIF_bit at IFS0.B26;
    const register unsigned short int I2C3BIF = 26;
    sbit  I2C3BIF_bit at IFS0.B26;
    const register unsigned short int OC5IF = 22;
    sbit  OC5IF_bit at IFS0.B22;
    const register unsigned short int IC5IF = 21;
    sbit  IC5IF_bit at IFS0.B21;
    const register unsigned short int T5IF = 20;
    sbit  T5IF_bit at IFS0.B20;
    const register unsigned short int INT4IF = 19;
    sbit  INT4IF_bit at IFS0.B19;
    const register unsigned short int OC4IF = 18;
    sbit  OC4IF_bit at IFS0.B18;
    const register unsigned short int IC4IF = 17;
    sbit  IC4IF_bit at IFS0.B17;
    const register unsigned short int T4IF = 16;
    sbit  T4IF_bit at IFS0.B16;
    const register unsigned short int INT3IF = 15;
    sbit  INT3IF_bit at IFS0.B15;
    const register unsigned short int OC3IF = 14;
    sbit  OC3IF_bit at IFS0.B14;
    const register unsigned short int IC3IF = 13;
    sbit  IC3IF_bit at IFS0.B13;
    const register unsigned short int T3IF = 12;
    sbit  T3IF_bit at IFS0.B12;
    const register unsigned short int INT2IF = 11;
    sbit  INT2IF_bit at IFS0.B11;
    const register unsigned short int OC2IF = 10;
    sbit  OC2IF_bit at IFS0.B10;
    const register unsigned short int IC2IF = 9;
    sbit  IC2IF_bit at IFS0.B9;
    const register unsigned short int T2IF = 8;
    sbit  T2IF_bit at IFS0.B8;
    const register unsigned short int INT1IF = 7;
    sbit  INT1IF_bit at IFS0.B7;
    const register unsigned short int OC1IF = 6;
    sbit  OC1IF_bit at IFS0.B6;
    const register unsigned short int IC1IF = 5;
    sbit  IC1IF_bit at IFS0.B5;
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
    const register unsigned short int IC3EIF = 31;
    sbit  IC3EIF_bit at IFS1.B31;
    const register unsigned short int IC2EIF = 30;
    sbit  IC2EIF_bit at IFS1.B30;
    const register unsigned short int IC1EIF = 29;
    sbit  IC1EIF_bit at IFS1.B29;
    const register unsigned short int ETHIF = 28;
    sbit  ETHIF_bit at IFS1.B28;
    const register unsigned short int CAN2IF = 27;
    sbit  CAN2IF_bit at IFS1.B27;
    const register unsigned short int CAN1IF = 26;
    sbit  CAN1IF_bit at IFS1.B26;
    const register unsigned short int USBIF = 25;
    sbit  USBIF_bit at IFS1.B25;
    const register unsigned short int FCEIF = 24;
    sbit  FCEIF_bit at IFS1.B24;
    const register unsigned short int DMA3IF = 19;
    sbit  DMA3IF_bit at IFS1.B19;
    const register unsigned short int DMA2IF = 18;
    sbit  DMA2IF_bit at IFS1.B18;
    const register unsigned short int DMA1IF = 17;
    sbit  DMA1IF_bit at IFS1.B17;
    const register unsigned short int DMA0IF = 16;
    sbit  DMA0IF_bit at IFS1.B16;
    const register unsigned short int RTCCIF = 15;
    sbit  RTCCIF_bit at IFS1.B15;
    const register unsigned short int FSCMIF = 14;
    sbit  FSCMIF_bit at IFS1.B14;
    const register unsigned short int I2C2MIF = 13;
    sbit  I2C2MIF_bit at IFS1.B13;
    const register unsigned short int I2C2SIF = 12;
    sbit  I2C2SIF_bit at IFS1.B12;
    const register unsigned short int I2C2BIF = 11;
    sbit  I2C2BIF_bit at IFS1.B11;
    const register unsigned short int U2TXIF = 10;
    sbit  U2TXIF_bit at IFS1.B10;
    const register unsigned short int SPI4TXIF = 10;
    sbit  SPI4TXIF_bit at IFS1.B10;
    const register unsigned short int I2C5MIF = 10;
    sbit  I2C5MIF_bit at IFS1.B10;
    const register unsigned short int U2RXIF = 9;
    sbit  U2RXIF_bit at IFS1.B9;
    const register unsigned short int SPI4RXIF = 9;
    sbit  SPI4RXIF_bit at IFS1.B9;
    const register unsigned short int I2C5SIF = 9;
    sbit  I2C5SIF_bit at IFS1.B9;
    const register unsigned short int U2EIF = 8;
    sbit  U2EIF_bit at IFS1.B8;
    const register unsigned short int SPI4EIF = 8;
    sbit  SPI4EIF_bit at IFS1.B8;
    const register unsigned short int I2C5BIF = 8;
    sbit  I2C5BIF_bit at IFS1.B8;
    const register unsigned short int U3TXIF = 7;
    sbit  U3TXIF_bit at IFS1.B7;
    const register unsigned short int SPI2TXIF = 7;
    sbit  SPI2TXIF_bit at IFS1.B7;
    const register unsigned short int I2C4MIF = 7;
    sbit  I2C4MIF_bit at IFS1.B7;
    const register unsigned short int U3RXIF = 6;
    sbit  U3RXIF_bit at IFS1.B6;
    const register unsigned short int SPI2RXIF = 6;
    sbit  SPI2RXIF_bit at IFS1.B6;
    const register unsigned short int I2C4SIF = 6;
    sbit  I2C4SIF_bit at IFS1.B6;
    const register unsigned short int U3EIF = 5;
    sbit  U3EIF_bit at IFS1.B5;
    const register unsigned short int SPI2EIF = 5;
    sbit  SPI2EIF_bit at IFS1.B5;
    const register unsigned short int I2C4BIF = 5;
    sbit  I2C4BIF_bit at IFS1.B5;
    const register unsigned short int CMP2IF = 4;
    sbit  CMP2IF_bit at IFS1.B4;
    const register unsigned short int CMP1IF = 3;
    sbit  CMP1IF_bit at IFS1.B3;
    const register unsigned short int PMPIF = 2;
    sbit  PMPIF_bit at IFS1.B2;
    const register unsigned short int AD1IF = 1;
    sbit  AD1IF_bit at IFS1.B1;
    const register unsigned short int CNIF = 0;
    sbit  CNIF_bit at IFS1.B0;

sfr atomic unsigned long   volatile IFS2             absolute 0xBF881050;
sfr unsigned long   volatile IFS2CLR          absolute 0xBF881054;
sfr unsigned long   volatile IFS2SET          absolute 0xBF881058;
sfr unsigned long   volatile IFS2INV          absolute 0xBF88105C;
    // IFS2 bits
    const register unsigned short int U5TXIF = 11;
    sbit  U5TXIF_bit at IFS2.B11;
    const register unsigned short int U5RXIF = 10;
    sbit  U5RXIF_bit at IFS2.B10;
    const register unsigned short int U5EIF = 9;
    sbit  U5EIF_bit at IFS2.B9;
    const register unsigned short int U6TXIF = 8;
    sbit  U6TXIF_bit at IFS2.B8;
    const register unsigned short int U6RXIF = 7;
    sbit  U6RXIF_bit at IFS2.B7;
    const register unsigned short int U6EIF = 6;
    sbit  U6EIF_bit at IFS2.B6;
    const register unsigned short int U4TXIF = 5;
    sbit  U4TXIF_bit at IFS2.B5;
    const register unsigned short int U4RXIF = 4;
    sbit  U4RXIF_bit at IFS2.B4;
    const register unsigned short int U4EIF = 3;
    sbit  U4EIF_bit at IFS2.B3;

sfr atomic unsigned long            IEC0             absolute 0xBF881060;
sfr unsigned long   volatile IEC0CLR          absolute 0xBF881064;
sfr unsigned long   volatile IEC0SET          absolute 0xBF881068;
sfr unsigned long   volatile IEC0INV          absolute 0xBF88106C;
    // IEC0 bits
    const register unsigned short int I2C1MIE = 31;
    sbit  I2C1MIE_bit at IEC0.B31;
    const register unsigned short int I2C1SIE = 30;
    sbit  I2C1SIE_bit at IEC0.B30;
    const register unsigned short int I2C1BIE = 29;
    sbit  I2C1BIE_bit at IEC0.B29;
    const register unsigned short int U1TXIE = 28;
    sbit  U1TXIE_bit at IEC0.B28;
    const register unsigned short int SPI3TXIE = 28;
    sbit  SPI3TXIE_bit at IEC0.B28;
    const register unsigned short int I2C3MIE = 28;
    sbit  I2C3MIE_bit at IEC0.B28;
    const register unsigned short int U1RXIE = 27;
    sbit  U1RXIE_bit at IEC0.B27;
    const register unsigned short int SPI3RXIE = 27;
    sbit  SPI3RXIE_bit at IEC0.B27;
    const register unsigned short int I2C3SIE = 27;
    sbit  I2C3SIE_bit at IEC0.B27;
    const register unsigned short int U1EIE_ = 26;
    sbit  U1EIE_bit at IEC0.B26;
    const register unsigned short int SPI3EIE = 26;
    sbit  SPI3EIE_bit at IEC0.B26;
    const register unsigned short int I2C3BIE = 26;
    sbit  I2C3BIE_bit at IEC0.B26;
    const register unsigned short int OC5IE = 22;
    sbit  OC5IE_bit at IEC0.B22;
    const register unsigned short int IC5IE = 21;
    sbit  IC5IE_bit at IEC0.B21;
    const register unsigned short int T5IE = 20;
    sbit  T5IE_bit at IEC0.B20;
    const register unsigned short int INT4IE = 19;
    sbit  INT4IE_bit at IEC0.B19;
    const register unsigned short int OC4IE = 18;
    sbit  OC4IE_bit at IEC0.B18;
    const register unsigned short int IC4IE = 17;
    sbit  IC4IE_bit at IEC0.B17;
    const register unsigned short int T4IE = 16;
    sbit  T4IE_bit at IEC0.B16;
    const register unsigned short int INT3IE = 15;
    sbit  INT3IE_bit at IEC0.B15;
    const register unsigned short int OC3IE = 14;
    sbit  OC3IE_bit at IEC0.B14;
    const register unsigned short int IC3IE = 13;
    sbit  IC3IE_bit at IEC0.B13;
    const register unsigned short int T3IE = 12;
    sbit  T3IE_bit at IEC0.B12;
    const register unsigned short int INT2IE = 11;
    sbit  INT2IE_bit at IEC0.B11;
    const register unsigned short int OC2IE = 10;
    sbit  OC2IE_bit at IEC0.B10;
    const register unsigned short int IC2IE = 9;
    sbit  IC2IE_bit at IEC0.B9;
    const register unsigned short int T2IE = 8;
    sbit  T2IE_bit at IEC0.B8;
    const register unsigned short int INT1IE = 7;
    sbit  INT1IE_bit at IEC0.B7;
    const register unsigned short int OC1IE = 6;
    sbit  OC1IE_bit at IEC0.B6;
    const register unsigned short int IC1IE = 5;
    sbit  IC1IE_bit at IEC0.B5;
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
    const register unsigned short int IC3EIE = 31;
    sbit  IC3EIE_bit at IEC1.B31;
    const register unsigned short int IC2EIE = 30;
    sbit  IC2EIE_bit at IEC1.B30;
    const register unsigned short int IC1EIE = 29;
    sbit  IC1EIE_bit at IEC1.B29;
    const register unsigned short int ETHIE = 28;
    sbit  ETHIE_bit at IEC1.B28;
    const register unsigned short int CAN2IE = 27;
    sbit  CAN2IE_bit at IEC1.B27;
    const register unsigned short int CAN1IE = 26;
    sbit  CAN1IE_bit at IEC1.B26;
    const register unsigned short int USBIE = 25;
    sbit  USBIE_bit at IEC1.B25;
    const register unsigned short int FCEIE = 24;
    sbit  FCEIE_bit at IEC1.B24;
    const register unsigned short int DMA3IE = 19;
    sbit  DMA3IE_bit at IEC1.B19;
    const register unsigned short int DMA2IE = 18;
    sbit  DMA2IE_bit at IEC1.B18;
    const register unsigned short int DMA1IE = 17;
    sbit  DMA1IE_bit at IEC1.B17;
    const register unsigned short int DMA0IE = 16;
    sbit  DMA0IE_bit at IEC1.B16;
    const register unsigned short int RTCCIE = 15;
    sbit  RTCCIE_bit at IEC1.B15;
    const register unsigned short int FSCMIE = 14;
    sbit  FSCMIE_bit at IEC1.B14;
    const register unsigned short int I2C2MIE = 13;
    sbit  I2C2MIE_bit at IEC1.B13;
    const register unsigned short int I2C2SIE = 12;
    sbit  I2C2SIE_bit at IEC1.B12;
    const register unsigned short int I2C2BIE = 11;
    sbit  I2C2BIE_bit at IEC1.B11;
    const register unsigned short int U2TXIE = 10;
    sbit  U2TXIE_bit at IEC1.B10;
    const register unsigned short int SPI4TXIE = 10;
    sbit  SPI4TXIE_bit at IEC1.B10;
    const register unsigned short int I2C5MIE = 10;
    sbit  I2C5MIE_bit at IEC1.B10;
    const register unsigned short int U2RXIE = 9;
    sbit  U2RXIE_bit at IEC1.B9;
    const register unsigned short int SPI4RXIE = 9;
    sbit  SPI4RXIE_bit at IEC1.B9;
    const register unsigned short int I2C5SIE = 9;
    sbit  I2C5SIE_bit at IEC1.B9;
    const register unsigned short int U2EIE = 8;
    sbit  U2EIE_bit at IEC1.B8;
    const register unsigned short int SPI4EIE = 8;
    sbit  SPI4EIE_bit at IEC1.B8;
    const register unsigned short int I2C5BIE = 8;
    sbit  I2C5BIE_bit at IEC1.B8;
    const register unsigned short int U3TXIE = 7;
    sbit  U3TXIE_bit at IEC1.B7;
    const register unsigned short int SPI2TXIE = 7;
    sbit  SPI2TXIE_bit at IEC1.B7;
    const register unsigned short int I2C4MIE = 7;
    sbit  I2C4MIE_bit at IEC1.B7;
    const register unsigned short int U3RXIE = 6;
    sbit  U3RXIE_bit at IEC1.B6;
    const register unsigned short int SPI2RXIE = 6;
    sbit  SPI2RXIE_bit at IEC1.B6;
    const register unsigned short int I2C4SIE = 6;
    sbit  I2C4SIE_bit at IEC1.B6;
    const register unsigned short int U3EIE = 5;
    sbit  U3EIE_bit at IEC1.B5;
    const register unsigned short int SPI2EIE = 5;
    sbit  SPI2EIE_bit at IEC1.B5;
    const register unsigned short int I2C4BIE = 5;
    sbit  I2C4BIE_bit at IEC1.B5;
    const register unsigned short int CMP2IE = 4;
    sbit  CMP2IE_bit at IEC1.B4;
    const register unsigned short int CMP1IE = 3;
    sbit  CMP1IE_bit at IEC1.B3;
    const register unsigned short int PMPIE = 2;
    sbit  PMPIE_bit at IEC1.B2;
    const register unsigned short int AD1IE = 1;
    sbit  AD1IE_bit at IEC1.B1;
    const register unsigned short int CNIE = 0;
    sbit  CNIE_bit at IEC1.B0;

sfr atomic unsigned long            IEC2             absolute 0xBF881080;
sfr unsigned long   volatile IEC2CLR          absolute 0xBF881084;
sfr unsigned long   volatile IEC2SET          absolute 0xBF881088;
sfr unsigned long   volatile IEC2INV          absolute 0xBF88108C;
    // IEC2 bits
    const register unsigned short int U5TXIE = 11;
    sbit  U5TXIE_bit at IEC2.B11;
    const register unsigned short int U5RXIE = 10;
    sbit  U5RXIE_bit at IEC2.B10;
    const register unsigned short int U5EIE = 9;
    sbit  U5EIE_bit at IEC2.B9;
    const register unsigned short int U6TXIE = 8;
    sbit  U6TXIE_bit at IEC2.B8;
    const register unsigned short int U6RXIE = 7;
    sbit  U6RXIE_bit at IEC2.B7;
    const register unsigned short int U6EIE = 6;
    sbit  U6EIE_bit at IEC2.B6;
    const register unsigned short int U4TXIE = 5;
    sbit  U4TXIE_bit at IEC2.B5;
    const register unsigned short int U4RXIE = 4;
    sbit  U4RXIE_bit at IEC2.B4;
    const register unsigned short int U4EIE = 3;
    sbit  U4EIE_bit at IEC2.B3;

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
    const register unsigned short int AD1IP2 = 28;
    sbit  AD1IP2_bit at IPC6.B28;
    const register unsigned short int AD1IP1 = 27;
    sbit  AD1IP1_bit at IPC6.B27;
    const register unsigned short int AD1IP0 = 26;
    sbit  AD1IP0_bit at IPC6.B26;
    const register unsigned short int AD1IS1 = 25;
    sbit  AD1IS1_bit at IPC6.B25;
    const register unsigned short int AD1IS0 = 24;
    sbit  AD1IS0_bit at IPC6.B24;
    const register unsigned short int CNIP2 = 20;
    sbit  CNIP2_bit at IPC6.B20;
    const register unsigned short int CNIP1 = 19;
    sbit  CNIP1_bit at IPC6.B19;
    const register unsigned short int CNIP0 = 18;
    sbit  CNIP0_bit at IPC6.B18;
    const register unsigned short int CNIS1 = 17;
    sbit  CNIS1_bit at IPC6.B17;
    const register unsigned short int CNIS0 = 16;
    sbit  CNIS0_bit at IPC6.B16;
    const register unsigned short int I2C1IP2 = 12;
    sbit  I2C1IP2_bit at IPC6.B12;
    const register unsigned short int I2C1IP1 = 11;
    sbit  I2C1IP1_bit at IPC6.B11;
    const register unsigned short int I2C1IP0 = 10;
    sbit  I2C1IP0_bit at IPC6.B10;
    const register unsigned short int I2C1IS1 = 9;
    sbit  I2C1IS1_bit at IPC6.B9;
    const register unsigned short int I2C1IS0 = 8;
    sbit  I2C1IS0_bit at IPC6.B8;
    const register unsigned short int U1IP2 = 4;
    sbit  U1IP2_bit at IPC6.B4;
    const register unsigned short int U1IP1 = 3;
    sbit  U1IP1_bit at IPC6.B3;
    const register unsigned short int U1IP0 = 2;
    sbit  U1IP0_bit at IPC6.B2;
    const register unsigned short int U1IS1 = 1;
    sbit  U1IS1_bit at IPC6.B1;
    const register unsigned short int U1IS0 = 0;
    sbit  U1IS0_bit at IPC6.B0;

sfr atomic unsigned long            IPC7             absolute 0xBF881100;
sfr unsigned long   volatile IPC7CLR          absolute 0xBF881104;
sfr unsigned long   volatile IPC7SET          absolute 0xBF881108;
sfr unsigned long   volatile IPC7INV          absolute 0xBF88110C;
    // IPC7 bits
    const register unsigned short int U3IP2 = 28;
    sbit  U3IP2_bit at IPC7.B28;
    const register unsigned short int U3IP1 = 27;
    sbit  U3IP1_bit at IPC7.B27;
    const register unsigned short int U3IP0 = 26;
    sbit  U3IP0_bit at IPC7.B26;
    const register unsigned short int U3IS1 = 25;
    sbit  U3IS1_bit at IPC7.B25;
    const register unsigned short int U3IS0 = 24;
    sbit  U3IS0_bit at IPC7.B24;
    const register unsigned short int CMP2IP2 = 20;
    sbit  CMP2IP2_bit at IPC7.B20;
    const register unsigned short int CMP2IP1 = 19;
    sbit  CMP2IP1_bit at IPC7.B19;
    const register unsigned short int CMP2IP0 = 18;
    sbit  CMP2IP0_bit at IPC7.B18;
    const register unsigned short int CMP2IS1 = 17;
    sbit  CMP2IS1_bit at IPC7.B17;
    const register unsigned short int CMP2IS0 = 16;
    sbit  CMP2IS0_bit at IPC7.B16;
    const register unsigned short int CMP1IP2 = 12;
    sbit  CMP1IP2_bit at IPC7.B12;
    const register unsigned short int CMP1IP1 = 11;
    sbit  CMP1IP1_bit at IPC7.B11;
    const register unsigned short int CMP1IP0 = 10;
    sbit  CMP1IP0_bit at IPC7.B10;
    const register unsigned short int CMP1IS1 = 9;
    sbit  CMP1IS1_bit at IPC7.B9;
    const register unsigned short int CMP1IS0 = 8;
    sbit  CMP1IS0_bit at IPC7.B8;
    const register unsigned short int PMPIP2 = 4;
    sbit  PMPIP2_bit at IPC7.B4;
    const register unsigned short int PMPIP1 = 3;
    sbit  PMPIP1_bit at IPC7.B3;
    const register unsigned short int PMPIP0 = 2;
    sbit  PMPIP0_bit at IPC7.B2;
    const register unsigned short int PMPIS1 = 1;
    sbit  PMPIS1_bit at IPC7.B1;
    const register unsigned short int PMPIS0 = 0;
    sbit  PMPIS0_bit at IPC7.B0;

sfr atomic unsigned long            IPC8             absolute 0xBF881110;
sfr unsigned long   volatile IPC8CLR          absolute 0xBF881114;
sfr unsigned long   volatile IPC8SET          absolute 0xBF881118;
sfr unsigned long   volatile IPC8INV          absolute 0xBF88111C;
    // IPC8 bits
    const register unsigned short int RTCCIP2 = 28;
    sbit  RTCCIP2_bit at IPC8.B28;
    const register unsigned short int RTCCIP1 = 27;
    sbit  RTCCIP1_bit at IPC8.B27;
    const register unsigned short int RTCCIP0 = 26;
    sbit  RTCCIP0_bit at IPC8.B26;
    const register unsigned short int RTCCIS1 = 25;
    sbit  RTCCIS1_bit at IPC8.B25;
    const register unsigned short int RTCCIS0 = 24;
    sbit  RTCCIS0_bit at IPC8.B24;
    const register unsigned short int FSCMIP2 = 20;
    sbit  FSCMIP2_bit at IPC8.B20;
    const register unsigned short int FSCMIP1 = 19;
    sbit  FSCMIP1_bit at IPC8.B19;
    const register unsigned short int FSCMIP0 = 18;
    sbit  FSCMIP0_bit at IPC8.B18;
    const register unsigned short int FSCMIS1 = 17;
    sbit  FSCMIS1_bit at IPC8.B17;
    const register unsigned short int FSCMIS0 = 16;
    sbit  FSCMIS0_bit at IPC8.B16;
    const register unsigned short int I2C2IP2 = 12;
    sbit  I2C2IP2_bit at IPC8.B12;
    const register unsigned short int I2C2IP1 = 11;
    sbit  I2C2IP1_bit at IPC8.B11;
    const register unsigned short int I2C2IP0 = 10;
    sbit  I2C2IP0_bit at IPC8.B10;
    const register unsigned short int I2C2IS1 = 9;
    sbit  I2C2IS1_bit at IPC8.B9;
    const register unsigned short int I2C2IS0 = 8;
    sbit  I2C2IS0_bit at IPC8.B8;
    const register unsigned short int U2IP2 = 4;
    sbit  U2IP2_bit at IPC8.B4;
    const register unsigned short int U2IP1 = 3;
    sbit  U2IP1_bit at IPC8.B3;
    const register unsigned short int U2IP0 = 2;
    sbit  U2IP0_bit at IPC8.B2;
    const register unsigned short int U2IS1 = 1;
    sbit  U2IS1_bit at IPC8.B1;
    const register unsigned short int U2IS0 = 0;
    sbit  U2IS0_bit at IPC8.B0;

sfr atomic unsigned long            IPC9             absolute 0xBF881120;
sfr unsigned long   volatile IPC9CLR          absolute 0xBF881124;
sfr unsigned long   volatile IPC9SET          absolute 0xBF881128;
sfr unsigned long   volatile IPC9INV          absolute 0xBF88112C;
    // IPC9 bits
    const register unsigned short int DMA3IP2 = 28;
    sbit  DMA3IP2_bit at IPC9.B28;
    const register unsigned short int DMA3IP1 = 27;
    sbit  DMA3IP1_bit at IPC9.B27;
    const register unsigned short int DMA3IP0 = 26;
    sbit  DMA3IP0_bit at IPC9.B26;
    const register unsigned short int DMA3IS1 = 25;
    sbit  DMA3IS1_bit at IPC9.B25;
    const register unsigned short int DMA3IS0 = 24;
    sbit  DMA3IS0_bit at IPC9.B24;
    const register unsigned short int DMA2IP2 = 20;
    sbit  DMA2IP2_bit at IPC9.B20;
    const register unsigned short int DMA2IP1 = 19;
    sbit  DMA2IP1_bit at IPC9.B19;
    const register unsigned short int DMA2IP0 = 18;
    sbit  DMA2IP0_bit at IPC9.B18;
    const register unsigned short int DMA2IS1 = 17;
    sbit  DMA2IS1_bit at IPC9.B17;
    const register unsigned short int DMA2IS0 = 16;
    sbit  DMA2IS0_bit at IPC9.B16;
    const register unsigned short int DMA1IP2 = 12;
    sbit  DMA1IP2_bit at IPC9.B12;
    const register unsigned short int DMA1IP1 = 11;
    sbit  DMA1IP1_bit at IPC9.B11;
    const register unsigned short int DMA1IP0 = 10;
    sbit  DMA1IP0_bit at IPC9.B10;
    const register unsigned short int DMA1IS1 = 9;
    sbit  DMA1IS1_bit at IPC9.B9;
    const register unsigned short int DMA1IS0 = 8;
    sbit  DMA1IS0_bit at IPC9.B8;
    const register unsigned short int DMA0IP2 = 4;
    sbit  DMA0IP2_bit at IPC9.B4;
    const register unsigned short int DMA0IP1 = 3;
    sbit  DMA0IP1_bit at IPC9.B3;
    const register unsigned short int DMA0IP0 = 2;
    sbit  DMA0IP0_bit at IPC9.B2;
    const register unsigned short int DMA0IS1 = 1;
    sbit  DMA0IS1_bit at IPC9.B1;
    const register unsigned short int DMA0IS0 = 0;
    sbit  DMA0IS0_bit at IPC9.B0;

sfr atomic unsigned long            IPC10            absolute 0xBF881130;
sfr unsigned long   volatile IPC10CLR         absolute 0xBF881134;
sfr unsigned long   volatile IPC10SET         absolute 0xBF881138;
sfr unsigned long   volatile IPC10INV         absolute 0xBF88113C;
    // IPC10 bits

sfr atomic unsigned long            IPC11            absolute 0xBF881140;
sfr unsigned long   volatile IPC11CLR         absolute 0xBF881144;
sfr unsigned long   volatile IPC11SET         absolute 0xBF881148;
sfr unsigned long   volatile IPC11INV         absolute 0xBF88114C;
    // IPC11 bits
    const register unsigned short int CAN2IP2 = 28;
    sbit  CAN2IP2_bit at IPC11.B28;
    const register unsigned short int CAN2IP1 = 27;
    sbit  CAN2IP1_bit at IPC11.B27;
    const register unsigned short int CAN2IP0 = 26;
    sbit  CAN2IP0_bit at IPC11.B26;
    const register unsigned short int CAN2IS1 = 25;
    sbit  CAN2IS1_bit at IPC11.B25;
    const register unsigned short int CAN2IS0 = 24;
    sbit  CAN2IS0_bit at IPC11.B24;
    const register unsigned short int CAN1IP2 = 20;
    sbit  CAN1IP2_bit at IPC11.B20;
    const register unsigned short int CAN1IP1 = 19;
    sbit  CAN1IP1_bit at IPC11.B19;
    const register unsigned short int CAN1IP0 = 18;
    sbit  CAN1IP0_bit at IPC11.B18;
    const register unsigned short int CAN1IS1 = 17;
    sbit  CAN1IS1_bit at IPC11.B17;
    const register unsigned short int CAN1IS0 = 16;
    sbit  CAN1IS0_bit at IPC11.B16;
    const register unsigned short int USBIP2 = 12;
    sbit  USBIP2_bit at IPC11.B12;
    const register unsigned short int USBIP1 = 11;
    sbit  USBIP1_bit at IPC11.B11;
    const register unsigned short int USBIP0 = 10;
    sbit  USBIP0_bit at IPC11.B10;
    const register unsigned short int USBIS1 = 9;
    sbit  USBIS1_bit at IPC11.B9;
    const register unsigned short int USBIS0 = 8;
    sbit  USBIS0_bit at IPC11.B8;
    const register unsigned short int FCEIP2 = 4;
    sbit  FCEIP2_bit at IPC11.B4;
    const register unsigned short int FCEIP1 = 3;
    sbit  FCEIP1_bit at IPC11.B3;
    const register unsigned short int FCEIP0 = 2;
    sbit  FCEIP0_bit at IPC11.B2;
    const register unsigned short int FCEIS1 = 1;
    sbit  FCEIS1_bit at IPC11.B1;
    const register unsigned short int FCEIS0 = 0;
    sbit  FCEIS0_bit at IPC11.B0;

sfr atomic unsigned long            IPC12            absolute 0xBF881150;
sfr unsigned long   volatile IPC12CLR         absolute 0xBF881154;
sfr unsigned long   volatile IPC12SET         absolute 0xBF881158;
sfr unsigned long   volatile IPC12INV         absolute 0xBF88115C;
    // IPC12 bits
    const register unsigned short int U5IP2 = 28;
    sbit  U5IP2_bit at IPC12.B28;
    const register unsigned short int U5IP1 = 27;
    sbit  U5IP1_bit at IPC12.B27;
    const register unsigned short int U5IP0 = 26;
    sbit  U5IP0_bit at IPC12.B26;
    const register unsigned short int U5IS1 = 25;
    sbit  U5IS1_bit at IPC12.B25;
    const register unsigned short int U5IS0 = 24;
    sbit  U5IS0_bit at IPC12.B24;
    const register unsigned short int U6IP2 = 20;
    sbit  U6IP2_bit at IPC12.B20;
    const register unsigned short int U6IP1 = 19;
    sbit  U6IP1_bit at IPC12.B19;
    const register unsigned short int U6IP0 = 18;
    sbit  U6IP0_bit at IPC12.B18;
    const register unsigned short int U6IS1 = 17;
    sbit  U6IS1_bit at IPC12.B17;
    const register unsigned short int U6IS0 = 16;
    sbit  U6IS0_bit at IPC12.B16;
    const register unsigned short int U4IP2 = 12;
    sbit  U4IP2_bit at IPC12.B12;
    const register unsigned short int U4IP1 = 11;
    sbit  U4IP1_bit at IPC12.B11;
    const register unsigned short int U4IP0 = 10;
    sbit  U4IP0_bit at IPC12.B10;
    const register unsigned short int U4IS1 = 9;
    sbit  U4IS1_bit at IPC12.B9;
    const register unsigned short int U4IS0 = 8;
    sbit  U4IS0_bit at IPC12.B8;
    const register unsigned short int ETHIP2 = 4;
    sbit  ETHIP2_bit at IPC12.B4;
    const register unsigned short int ETHIP1 = 3;
    sbit  ETHIP1_bit at IPC12.B3;
    const register unsigned short int ETHIP0 = 2;
    sbit  ETHIP0_bit at IPC12.B2;
    const register unsigned short int ETHIS1 = 1;
    sbit  ETHIS1_bit at IPC12.B1;
    const register unsigned short int ETHIS0 = 0;
    sbit  ETHIS0_bit at IPC12.B0;

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

sfr atomic unsigned long   volatile CHECON           absolute 0xBF884000;
sfr unsigned long   volatile CHECONCLR        absolute 0xBF884004;
sfr unsigned long   volatile CHECONSET        absolute 0xBF884008;
sfr unsigned long   volatile CHECONINV        absolute 0xBF88400C;
    // CHECON bits
    const register unsigned short int CHECOH = 16;
    sbit  CHECOH_bit at CHECON.B16;
    const register unsigned short int DCSZ1 = 9;
    sbit  DCSZ1_bit at CHECON.B9;
    const register unsigned short int DCSZ0 = 8;
    sbit  DCSZ0_bit at CHECON.B8;
    const register unsigned short int PREFEN1 = 5;
    sbit  PREFEN1_bit at CHECON.B5;
    const register unsigned short int PREFEN0 = 4;
    sbit  PREFEN0_bit at CHECON.B4;
    const register unsigned short int PFMWS2 = 2;
    sbit  PFMWS2_bit at CHECON.B2;
    const register unsigned short int PFMWS1 = 1;
    sbit  PFMWS1_bit at CHECON.B1;
    const register unsigned short int PFMWS0 = 0;
    sbit  PFMWS0_bit at CHECON.B0;

sfr atomic unsigned long   volatile CHEACC           absolute 0xBF884010;
sfr unsigned long   volatile CHEACCCLR        absolute 0xBF884014;
sfr unsigned long   volatile CHEACCSET        absolute 0xBF884018;
sfr unsigned long   volatile CHEACCINV        absolute 0xBF88401C;
    // CHEACC bits
    const register unsigned short int CHEWEN = 31;
    sbit  CHEWEN_bit at CHEACC.B31;
    const register unsigned short int CHEIDX3 = 3;
    sbit  CHEIDX3_bit at CHEACC.B3;
    const register unsigned short int CHEIDX2 = 2;
    sbit  CHEIDX2_bit at CHEACC.B2;
    const register unsigned short int CHEIDX1 = 1;
    sbit  CHEIDX1_bit at CHEACC.B1;
    const register unsigned short int CHEIDX0 = 0;
    sbit  CHEIDX0_bit at CHEACC.B0;

sfr atomic unsigned long   volatile CHETAG           absolute 0xBF884020;
sfr unsigned long   volatile CHETAGCLR        absolute 0xBF884024;
sfr unsigned long   volatile CHETAGSET        absolute 0xBF884028;
sfr unsigned long   volatile CHETAGINV        absolute 0xBF88402C;
    // CHETAG bits
    const register unsigned short int LTAGBOOT = 31;
    sbit  LTAGBOOT_bit at CHETAG.B31;
    const register unsigned short int LTAG19 = 23;
    sbit  LTAG19_bit at CHETAG.B23;
    const register unsigned short int LTAG18 = 22;
    sbit  LTAG18_bit at CHETAG.B22;
    const register unsigned short int LTAG17 = 21;
    sbit  LTAG17_bit at CHETAG.B21;
    const register unsigned short int LTAG16 = 20;
    sbit  LTAG16_bit at CHETAG.B20;
    const register unsigned short int LTAG15 = 19;
    sbit  LTAG15_bit at CHETAG.B19;
    const register unsigned short int LTAG14 = 18;
    sbit  LTAG14_bit at CHETAG.B18;
    const register unsigned short int LTAG13 = 17;
    sbit  LTAG13_bit at CHETAG.B17;
    const register unsigned short int LTAG12 = 16;
    sbit  LTAG12_bit at CHETAG.B16;
    const register unsigned short int LTAG11 = 15;
    sbit  LTAG11_bit at CHETAG.B15;
    const register unsigned short int LTAG10 = 14;
    sbit  LTAG10_bit at CHETAG.B14;
    const register unsigned short int LTAG9 = 13;
    sbit  LTAG9_bit at CHETAG.B13;
    const register unsigned short int LTAG8 = 12;
    sbit  LTAG8_bit at CHETAG.B12;
    const register unsigned short int LTAG7 = 11;
    sbit  LTAG7_bit at CHETAG.B11;
    const register unsigned short int LTAG6 = 10;
    sbit  LTAG6_bit at CHETAG.B10;
    const register unsigned short int LTAG5 = 9;
    sbit  LTAG5_bit at CHETAG.B9;
    const register unsigned short int LTAG4 = 8;
    sbit  LTAG4_bit at CHETAG.B8;
    const register unsigned short int LTAG3 = 7;
    sbit  LTAG3_bit at CHETAG.B7;
    const register unsigned short int LTAG2 = 6;
    sbit  LTAG2_bit at CHETAG.B6;
    const register unsigned short int LTAG1 = 5;
    sbit  LTAG1_bit at CHETAG.B5;
    const register unsigned short int LTAG0 = 4;
    sbit  LTAG0_bit at CHETAG.B4;
    const register unsigned short int LVALID = 3;
    sbit  LVALID_bit at CHETAG.B3;
    const register unsigned short int LLOCK = 2;
    sbit  LLOCK_bit at CHETAG.B2;
    const register unsigned short int LTYPE = 1;
    sbit  LTYPE_bit at CHETAG.B1;

sfr atomic unsigned long   volatile CHEMSK           absolute 0xBF884030;
sfr unsigned long   volatile CHEMSKCLR        absolute 0xBF884034;
sfr unsigned long   volatile CHEMSKSET        absolute 0xBF884038;
sfr unsigned long   volatile CHEMSKINV        absolute 0xBF88403C;
    // CHEMSK bits
    const register unsigned short int LMASK10 = 15;
    sbit  LMASK10_bit at CHEMSK.B15;
    const register unsigned short int LMASK9 = 14;
    sbit  LMASK9_bit at CHEMSK.B14;
    const register unsigned short int LMASK8 = 13;
    sbit  LMASK8_bit at CHEMSK.B13;
    const register unsigned short int LMASK7 = 12;
    sbit  LMASK7_bit at CHEMSK.B12;
    const register unsigned short int LMASK6 = 11;
    sbit  LMASK6_bit at CHEMSK.B11;
    const register unsigned short int LMASK5 = 10;
    sbit  LMASK5_bit at CHEMSK.B10;
    const register unsigned short int LMASK4 = 9;
    sbit  LMASK4_bit at CHEMSK.B9;
    const register unsigned short int LMASK3 = 8;
    sbit  LMASK3_bit at CHEMSK.B8;
    const register unsigned short int LMASK2 = 7;
    sbit  LMASK2_bit at CHEMSK.B7;
    const register unsigned short int LMASK1 = 6;
    sbit  LMASK1_bit at CHEMSK.B6;
    const register unsigned short int LMASK0 = 5;
    sbit  LMASK0_bit at CHEMSK.B5;

sfr unsigned long   volatile CHEW0            absolute 0xBF884040;
    // CHEW0 bits
    const register unsigned short int CHEW031 = 31;
    sbit  CHEW031_bit at CHEW0.B31;
    const register unsigned short int CHEW030 = 30;
    sbit  CHEW030_bit at CHEW0.B30;
    const register unsigned short int CHEW029 = 29;
    sbit  CHEW029_bit at CHEW0.B29;
    const register unsigned short int CHEW028 = 28;
    sbit  CHEW028_bit at CHEW0.B28;
    const register unsigned short int CHEW027 = 27;
    sbit  CHEW027_bit at CHEW0.B27;
    const register unsigned short int CHEW026 = 26;
    sbit  CHEW026_bit at CHEW0.B26;
    const register unsigned short int CHEW025 = 25;
    sbit  CHEW025_bit at CHEW0.B25;
    const register unsigned short int CHEW024 = 24;
    sbit  CHEW024_bit at CHEW0.B24;
    const register unsigned short int CHEW023 = 23;
    sbit  CHEW023_bit at CHEW0.B23;
    const register unsigned short int CHEW022 = 22;
    sbit  CHEW022_bit at CHEW0.B22;
    const register unsigned short int CHEW021 = 21;
    sbit  CHEW021_bit at CHEW0.B21;
    const register unsigned short int CHEW020 = 20;
    sbit  CHEW020_bit at CHEW0.B20;
    const register unsigned short int CHEW019 = 19;
    sbit  CHEW019_bit at CHEW0.B19;
    const register unsigned short int CHEW018 = 18;
    sbit  CHEW018_bit at CHEW0.B18;
    const register unsigned short int CHEW017 = 17;
    sbit  CHEW017_bit at CHEW0.B17;
    const register unsigned short int CHEW016 = 16;
    sbit  CHEW016_bit at CHEW0.B16;
    const register unsigned short int CHEW015 = 15;
    sbit  CHEW015_bit at CHEW0.B15;
    const register unsigned short int CHEW014 = 14;
    sbit  CHEW014_bit at CHEW0.B14;
    const register unsigned short int CHEW013 = 13;
    sbit  CHEW013_bit at CHEW0.B13;
    const register unsigned short int CHEW012 = 12;
    sbit  CHEW012_bit at CHEW0.B12;
    const register unsigned short int CHEW011 = 11;
    sbit  CHEW011_bit at CHEW0.B11;
    const register unsigned short int CHEW010 = 10;
    sbit  CHEW010_bit at CHEW0.B10;
    const register unsigned short int CHEW09 = 9;
    sbit  CHEW09_bit at CHEW0.B9;
    const register unsigned short int CHEW08 = 8;
    sbit  CHEW08_bit at CHEW0.B8;
    const register unsigned short int CHEW07 = 7;
    sbit  CHEW07_bit at CHEW0.B7;
    const register unsigned short int CHEW06 = 6;
    sbit  CHEW06_bit at CHEW0.B6;
    const register unsigned short int CHEW05 = 5;
    sbit  CHEW05_bit at CHEW0.B5;
    const register unsigned short int CHEW04 = 4;
    sbit  CHEW04_bit at CHEW0.B4;
    const register unsigned short int CHEW03 = 3;
    sbit  CHEW03_bit at CHEW0.B3;
    const register unsigned short int CHEW02 = 2;
    sbit  CHEW02_bit at CHEW0.B2;
    const register unsigned short int CHEW01 = 1;
    sbit  CHEW01_bit at CHEW0.B1;
    const register unsigned short int CHEW00 = 0;
    sbit  CHEW00_bit at CHEW0.B0;

sfr unsigned long   volatile CHEW1            absolute 0xBF884050;
    // CHEW1 bits
    const register unsigned short int CHEW131 = 31;
    sbit  CHEW131_bit at CHEW1.B31;
    const register unsigned short int CHEW130 = 30;
    sbit  CHEW130_bit at CHEW1.B30;
    const register unsigned short int CHEW129 = 29;
    sbit  CHEW129_bit at CHEW1.B29;
    const register unsigned short int CHEW128 = 28;
    sbit  CHEW128_bit at CHEW1.B28;
    const register unsigned short int CHEW127 = 27;
    sbit  CHEW127_bit at CHEW1.B27;
    const register unsigned short int CHEW126 = 26;
    sbit  CHEW126_bit at CHEW1.B26;
    const register unsigned short int CHEW125 = 25;
    sbit  CHEW125_bit at CHEW1.B25;
    const register unsigned short int CHEW124 = 24;
    sbit  CHEW124_bit at CHEW1.B24;
    const register unsigned short int CHEW123 = 23;
    sbit  CHEW123_bit at CHEW1.B23;
    const register unsigned short int CHEW122 = 22;
    sbit  CHEW122_bit at CHEW1.B22;
    const register unsigned short int CHEW121 = 21;
    sbit  CHEW121_bit at CHEW1.B21;
    const register unsigned short int CHEW120 = 20;
    sbit  CHEW120_bit at CHEW1.B20;
    const register unsigned short int CHEW119 = 19;
    sbit  CHEW119_bit at CHEW1.B19;
    const register unsigned short int CHEW118 = 18;
    sbit  CHEW118_bit at CHEW1.B18;
    const register unsigned short int CHEW117 = 17;
    sbit  CHEW117_bit at CHEW1.B17;
    const register unsigned short int CHEW116 = 16;
    sbit  CHEW116_bit at CHEW1.B16;
    const register unsigned short int CHEW115 = 15;
    sbit  CHEW115_bit at CHEW1.B15;
    const register unsigned short int CHEW114 = 14;
    sbit  CHEW114_bit at CHEW1.B14;
    const register unsigned short int CHEW113 = 13;
    sbit  CHEW113_bit at CHEW1.B13;
    const register unsigned short int CHEW112 = 12;
    sbit  CHEW112_bit at CHEW1.B12;
    const register unsigned short int CHEW111 = 11;
    sbit  CHEW111_bit at CHEW1.B11;
    const register unsigned short int CHEW110 = 10;
    sbit  CHEW110_bit at CHEW1.B10;
    const register unsigned short int CHEW19 = 9;
    sbit  CHEW19_bit at CHEW1.B9;
    const register unsigned short int CHEW18 = 8;
    sbit  CHEW18_bit at CHEW1.B8;
    const register unsigned short int CHEW17 = 7;
    sbit  CHEW17_bit at CHEW1.B7;
    const register unsigned short int CHEW16 = 6;
    sbit  CHEW16_bit at CHEW1.B6;
    const register unsigned short int CHEW15 = 5;
    sbit  CHEW15_bit at CHEW1.B5;
    const register unsigned short int CHEW14 = 4;
    sbit  CHEW14_bit at CHEW1.B4;
    const register unsigned short int CHEW13 = 3;
    sbit  CHEW13_bit at CHEW1.B3;
    const register unsigned short int CHEW12 = 2;
    sbit  CHEW12_bit at CHEW1.B2;
    const register unsigned short int CHEW11 = 1;
    sbit  CHEW11_bit at CHEW1.B1;
    const register unsigned short int CHEW10 = 0;
    sbit  CHEW10_bit at CHEW1.B0;

sfr unsigned long   volatile CHEW2            absolute 0xBF884060;
    // CHEW2 bits
    const register unsigned short int CHEW231 = 31;
    sbit  CHEW231_bit at CHEW2.B31;
    const register unsigned short int CHEW230 = 30;
    sbit  CHEW230_bit at CHEW2.B30;
    const register unsigned short int CHEW229 = 29;
    sbit  CHEW229_bit at CHEW2.B29;
    const register unsigned short int CHEW228 = 28;
    sbit  CHEW228_bit at CHEW2.B28;
    const register unsigned short int CHEW227 = 27;
    sbit  CHEW227_bit at CHEW2.B27;
    const register unsigned short int CHEW226 = 26;
    sbit  CHEW226_bit at CHEW2.B26;
    const register unsigned short int CHEW225 = 25;
    sbit  CHEW225_bit at CHEW2.B25;
    const register unsigned short int CHEW224 = 24;
    sbit  CHEW224_bit at CHEW2.B24;
    const register unsigned short int CHEW223 = 23;
    sbit  CHEW223_bit at CHEW2.B23;
    const register unsigned short int CHEW222 = 22;
    sbit  CHEW222_bit at CHEW2.B22;
    const register unsigned short int CHEW221 = 21;
    sbit  CHEW221_bit at CHEW2.B21;
    const register unsigned short int CHEW220 = 20;
    sbit  CHEW220_bit at CHEW2.B20;
    const register unsigned short int CHEW219 = 19;
    sbit  CHEW219_bit at CHEW2.B19;
    const register unsigned short int CHEW218 = 18;
    sbit  CHEW218_bit at CHEW2.B18;
    const register unsigned short int CHEW217 = 17;
    sbit  CHEW217_bit at CHEW2.B17;
    const register unsigned short int CHEW216 = 16;
    sbit  CHEW216_bit at CHEW2.B16;
    const register unsigned short int CHEW215 = 15;
    sbit  CHEW215_bit at CHEW2.B15;
    const register unsigned short int CHEW214 = 14;
    sbit  CHEW214_bit at CHEW2.B14;
    const register unsigned short int CHEW213 = 13;
    sbit  CHEW213_bit at CHEW2.B13;
    const register unsigned short int CHEW212 = 12;
    sbit  CHEW212_bit at CHEW2.B12;
    const register unsigned short int CHEW211 = 11;
    sbit  CHEW211_bit at CHEW2.B11;
    const register unsigned short int CHEW210 = 10;
    sbit  CHEW210_bit at CHEW2.B10;
    const register unsigned short int CHEW29 = 9;
    sbit  CHEW29_bit at CHEW2.B9;
    const register unsigned short int CHEW28 = 8;
    sbit  CHEW28_bit at CHEW2.B8;
    const register unsigned short int CHEW27 = 7;
    sbit  CHEW27_bit at CHEW2.B7;
    const register unsigned short int CHEW26 = 6;
    sbit  CHEW26_bit at CHEW2.B6;
    const register unsigned short int CHEW25 = 5;
    sbit  CHEW25_bit at CHEW2.B5;
    const register unsigned short int CHEW24 = 4;
    sbit  CHEW24_bit at CHEW2.B4;
    const register unsigned short int CHEW23 = 3;
    sbit  CHEW23_bit at CHEW2.B3;
    const register unsigned short int CHEW22 = 2;
    sbit  CHEW22_bit at CHEW2.B2;
    const register unsigned short int CHEW21 = 1;
    sbit  CHEW21_bit at CHEW2.B1;
    const register unsigned short int CHEW20 = 0;
    sbit  CHEW20_bit at CHEW2.B0;

sfr unsigned long   volatile CHEW3            absolute 0xBF884070;
    // CHEW3 bits
    const register unsigned short int CHEW331 = 31;
    sbit  CHEW331_bit at CHEW3.B31;
    const register unsigned short int CHEW330 = 30;
    sbit  CHEW330_bit at CHEW3.B30;
    const register unsigned short int CHEW329 = 29;
    sbit  CHEW329_bit at CHEW3.B29;
    const register unsigned short int CHEW328 = 28;
    sbit  CHEW328_bit at CHEW3.B28;
    const register unsigned short int CHEW327 = 27;
    sbit  CHEW327_bit at CHEW3.B27;
    const register unsigned short int CHEW326 = 26;
    sbit  CHEW326_bit at CHEW3.B26;
    const register unsigned short int CHEW325 = 25;
    sbit  CHEW325_bit at CHEW3.B25;
    const register unsigned short int CHEW324 = 24;
    sbit  CHEW324_bit at CHEW3.B24;
    const register unsigned short int CHEW323 = 23;
    sbit  CHEW323_bit at CHEW3.B23;
    const register unsigned short int CHEW322 = 22;
    sbit  CHEW322_bit at CHEW3.B22;
    const register unsigned short int CHEW321 = 21;
    sbit  CHEW321_bit at CHEW3.B21;
    const register unsigned short int CHEW320 = 20;
    sbit  CHEW320_bit at CHEW3.B20;
    const register unsigned short int CHEW319 = 19;
    sbit  CHEW319_bit at CHEW3.B19;
    const register unsigned short int CHEW318 = 18;
    sbit  CHEW318_bit at CHEW3.B18;
    const register unsigned short int CHEW317 = 17;
    sbit  CHEW317_bit at CHEW3.B17;
    const register unsigned short int CHEW316 = 16;
    sbit  CHEW316_bit at CHEW3.B16;
    const register unsigned short int CHEW315 = 15;
    sbit  CHEW315_bit at CHEW3.B15;
    const register unsigned short int CHEW314 = 14;
    sbit  CHEW314_bit at CHEW3.B14;
    const register unsigned short int CHEW313 = 13;
    sbit  CHEW313_bit at CHEW3.B13;
    const register unsigned short int CHEW312 = 12;
    sbit  CHEW312_bit at CHEW3.B12;
    const register unsigned short int CHEW311 = 11;
    sbit  CHEW311_bit at CHEW3.B11;
    const register unsigned short int CHEW310 = 10;
    sbit  CHEW310_bit at CHEW3.B10;
    const register unsigned short int CHEW39 = 9;
    sbit  CHEW39_bit at CHEW3.B9;
    const register unsigned short int CHEW38 = 8;
    sbit  CHEW38_bit at CHEW3.B8;
    const register unsigned short int CHEW37 = 7;
    sbit  CHEW37_bit at CHEW3.B7;
    const register unsigned short int CHEW36 = 6;
    sbit  CHEW36_bit at CHEW3.B6;
    const register unsigned short int CHEW35 = 5;
    sbit  CHEW35_bit at CHEW3.B5;
    const register unsigned short int CHEW34 = 4;
    sbit  CHEW34_bit at CHEW3.B4;
    const register unsigned short int CHEW33 = 3;
    sbit  CHEW33_bit at CHEW3.B3;
    const register unsigned short int CHEW32 = 2;
    sbit  CHEW32_bit at CHEW3.B2;
    const register unsigned short int CHEW31 = 1;
    sbit  CHEW31_bit at CHEW3.B1;
    const register unsigned short int CHEW30 = 0;
    sbit  CHEW30_bit at CHEW3.B0;

sfr unsigned long   volatile CHELRU           absolute 0xBF884080;
    // CHELRU bits
    const register unsigned short int CHELRU24 = 24;
    sbit  CHELRU24_bit at CHELRU.B24;
    const register unsigned short int CHELRU23 = 23;
    sbit  CHELRU23_bit at CHELRU.B23;
    const register unsigned short int CHELRU22 = 22;
    sbit  CHELRU22_bit at CHELRU.B22;
    const register unsigned short int CHELRU21 = 21;
    sbit  CHELRU21_bit at CHELRU.B21;
    const register unsigned short int CHELRU20 = 20;
    sbit  CHELRU20_bit at CHELRU.B20;
    const register unsigned short int CHELRU19 = 19;
    sbit  CHELRU19_bit at CHELRU.B19;
    const register unsigned short int CHELRU18 = 18;
    sbit  CHELRU18_bit at CHELRU.B18;
    const register unsigned short int CHELRU17 = 17;
    sbit  CHELRU17_bit at CHELRU.B17;
    const register unsigned short int CHELRU16 = 16;
    sbit  CHELRU16_bit at CHELRU.B16;
    const register unsigned short int CHELRU15 = 15;
    sbit  CHELRU15_bit at CHELRU.B15;
    const register unsigned short int CHELRU14 = 14;
    sbit  CHELRU14_bit at CHELRU.B14;
    const register unsigned short int CHELRU13 = 13;
    sbit  CHELRU13_bit at CHELRU.B13;
    const register unsigned short int CHELRU12 = 12;
    sbit  CHELRU12_bit at CHELRU.B12;
    const register unsigned short int CHELRU11 = 11;
    sbit  CHELRU11_bit at CHELRU.B11;
    const register unsigned short int CHELRU10 = 10;
    sbit  CHELRU10_bit at CHELRU.B10;
    const register unsigned short int CHELRU9 = 9;
    sbit  CHELRU9_bit at CHELRU.B9;
    const register unsigned short int CHELRU8 = 8;
    sbit  CHELRU8_bit at CHELRU.B8;
    const register unsigned short int CHELRU7 = 7;
    sbit  CHELRU7_bit at CHELRU.B7;
    const register unsigned short int CHELRU6 = 6;
    sbit  CHELRU6_bit at CHELRU.B6;
    const register unsigned short int CHELRU5 = 5;
    sbit  CHELRU5_bit at CHELRU.B5;
    const register unsigned short int CHELRU4 = 4;
    sbit  CHELRU4_bit at CHELRU.B4;
    const register unsigned short int CHELRU3 = 3;
    sbit  CHELRU3_bit at CHELRU.B3;
    const register unsigned short int CHELRU2 = 2;
    sbit  CHELRU2_bit at CHELRU.B2;
    const register unsigned short int CHELRU1 = 1;
    sbit  CHELRU1_bit at CHELRU.B1;
    const register unsigned short int CHELRU0 = 0;
    sbit  CHELRU0_bit at CHELRU.B0;

sfr unsigned long   volatile CHEHIT           absolute 0xBF884090;
    // CHEHIT bits
    const register unsigned short int CHEHIT31 = 31;
    sbit  CHEHIT31_bit at CHEHIT.B31;
    const register unsigned short int CHEHIT30 = 30;
    sbit  CHEHIT30_bit at CHEHIT.B30;
    const register unsigned short int CHEHIT29 = 29;
    sbit  CHEHIT29_bit at CHEHIT.B29;
    const register unsigned short int CHEHIT28 = 28;
    sbit  CHEHIT28_bit at CHEHIT.B28;
    const register unsigned short int CHEHIT27 = 27;
    sbit  CHEHIT27_bit at CHEHIT.B27;
    const register unsigned short int CHEHIT26 = 26;
    sbit  CHEHIT26_bit at CHEHIT.B26;
    const register unsigned short int CHEHIT25 = 25;
    sbit  CHEHIT25_bit at CHEHIT.B25;
    const register unsigned short int CHEHIT24 = 24;
    sbit  CHEHIT24_bit at CHEHIT.B24;
    const register unsigned short int CHEHIT23 = 23;
    sbit  CHEHIT23_bit at CHEHIT.B23;
    const register unsigned short int CHEHIT22 = 22;
    sbit  CHEHIT22_bit at CHEHIT.B22;
    const register unsigned short int CHEHIT21 = 21;
    sbit  CHEHIT21_bit at CHEHIT.B21;
    const register unsigned short int CHEHIT20 = 20;
    sbit  CHEHIT20_bit at CHEHIT.B20;
    const register unsigned short int CHEHIT19 = 19;
    sbit  CHEHIT19_bit at CHEHIT.B19;
    const register unsigned short int CHEHIT18 = 18;
    sbit  CHEHIT18_bit at CHEHIT.B18;
    const register unsigned short int CHEHIT17 = 17;
    sbit  CHEHIT17_bit at CHEHIT.B17;
    const register unsigned short int CHEHIT16 = 16;
    sbit  CHEHIT16_bit at CHEHIT.B16;
    const register unsigned short int CHEHIT15 = 15;
    sbit  CHEHIT15_bit at CHEHIT.B15;
    const register unsigned short int CHEHIT14 = 14;
    sbit  CHEHIT14_bit at CHEHIT.B14;
    const register unsigned short int CHEHIT13 = 13;
    sbit  CHEHIT13_bit at CHEHIT.B13;
    const register unsigned short int CHEHIT12 = 12;
    sbit  CHEHIT12_bit at CHEHIT.B12;
    const register unsigned short int CHEHIT11 = 11;
    sbit  CHEHIT11_bit at CHEHIT.B11;
    const register unsigned short int CHEHIT10 = 10;
    sbit  CHEHIT10_bit at CHEHIT.B10;
    const register unsigned short int CHEHIT9 = 9;
    sbit  CHEHIT9_bit at CHEHIT.B9;
    const register unsigned short int CHEHIT8 = 8;
    sbit  CHEHIT8_bit at CHEHIT.B8;
    const register unsigned short int CHEHIT7 = 7;
    sbit  CHEHIT7_bit at CHEHIT.B7;
    const register unsigned short int CHEHIT6 = 6;
    sbit  CHEHIT6_bit at CHEHIT.B6;
    const register unsigned short int CHEHIT5 = 5;
    sbit  CHEHIT5_bit at CHEHIT.B5;
    const register unsigned short int CHEHIT4 = 4;
    sbit  CHEHIT4_bit at CHEHIT.B4;
    const register unsigned short int CHEHIT3 = 3;
    sbit  CHEHIT3_bit at CHEHIT.B3;
    const register unsigned short int CHEHIT2 = 2;
    sbit  CHEHIT2_bit at CHEHIT.B2;
    const register unsigned short int CHEHIT1 = 1;
    sbit  CHEHIT1_bit at CHEHIT.B1;
    const register unsigned short int CHEHIT0 = 0;
    sbit  CHEHIT0_bit at CHEHIT.B0;

sfr unsigned long   volatile CHEMIS           absolute 0xBF8840A0;
    // CHEMIS bits
    const register unsigned short int CHEMIS31 = 31;
    sbit  CHEMIS31_bit at CHEMIS.B31;
    const register unsigned short int CHEMIS30 = 30;
    sbit  CHEMIS30_bit at CHEMIS.B30;
    const register unsigned short int CHEMIS29 = 29;
    sbit  CHEMIS29_bit at CHEMIS.B29;
    const register unsigned short int CHEMIS28 = 28;
    sbit  CHEMIS28_bit at CHEMIS.B28;
    const register unsigned short int CHEMIS27 = 27;
    sbit  CHEMIS27_bit at CHEMIS.B27;
    const register unsigned short int CHEMIS26 = 26;
    sbit  CHEMIS26_bit at CHEMIS.B26;
    const register unsigned short int CHEMIS25 = 25;
    sbit  CHEMIS25_bit at CHEMIS.B25;
    const register unsigned short int CHEMIS24 = 24;
    sbit  CHEMIS24_bit at CHEMIS.B24;
    const register unsigned short int CHEMIS23 = 23;
    sbit  CHEMIS23_bit at CHEMIS.B23;
    const register unsigned short int CHEMIS22 = 22;
    sbit  CHEMIS22_bit at CHEMIS.B22;
    const register unsigned short int CHEMIS21 = 21;
    sbit  CHEMIS21_bit at CHEMIS.B21;
    const register unsigned short int CHEMIS20 = 20;
    sbit  CHEMIS20_bit at CHEMIS.B20;
    const register unsigned short int CHEMIS19 = 19;
    sbit  CHEMIS19_bit at CHEMIS.B19;
    const register unsigned short int CHEMIS18 = 18;
    sbit  CHEMIS18_bit at CHEMIS.B18;
    const register unsigned short int CHEMIS17 = 17;
    sbit  CHEMIS17_bit at CHEMIS.B17;
    const register unsigned short int CHEMIS16 = 16;
    sbit  CHEMIS16_bit at CHEMIS.B16;
    const register unsigned short int CHEMIS15 = 15;
    sbit  CHEMIS15_bit at CHEMIS.B15;
    const register unsigned short int CHEMIS14 = 14;
    sbit  CHEMIS14_bit at CHEMIS.B14;
    const register unsigned short int CHEMIS13 = 13;
    sbit  CHEMIS13_bit at CHEMIS.B13;
    const register unsigned short int CHEMIS12 = 12;
    sbit  CHEMIS12_bit at CHEMIS.B12;
    const register unsigned short int CHEMIS11 = 11;
    sbit  CHEMIS11_bit at CHEMIS.B11;
    const register unsigned short int CHEMIS10 = 10;
    sbit  CHEMIS10_bit at CHEMIS.B10;
    const register unsigned short int CHEMIS9 = 9;
    sbit  CHEMIS9_bit at CHEMIS.B9;
    const register unsigned short int CHEMIS8 = 8;
    sbit  CHEMIS8_bit at CHEMIS.B8;
    const register unsigned short int CHEMIS7 = 7;
    sbit  CHEMIS7_bit at CHEMIS.B7;
    const register unsigned short int CHEMIS6 = 6;
    sbit  CHEMIS6_bit at CHEMIS.B6;
    const register unsigned short int CHEMIS5 = 5;
    sbit  CHEMIS5_bit at CHEMIS.B5;
    const register unsigned short int CHEMIS4 = 4;
    sbit  CHEMIS4_bit at CHEMIS.B4;
    const register unsigned short int CHEMIS3 = 3;
    sbit  CHEMIS3_bit at CHEMIS.B3;
    const register unsigned short int CHEMIS2 = 2;
    sbit  CHEMIS2_bit at CHEMIS.B2;
    const register unsigned short int CHEMIS1 = 1;
    sbit  CHEMIS1_bit at CHEMIS.B1;
    const register unsigned short int CHEMIS0 = 0;
    sbit  CHEMIS0_bit at CHEMIS.B0;

sfr unsigned long   volatile CHEPFABT         absolute 0xBF8840C0;
    // CHEPFABT bits
    const register unsigned short int CHEPFABT31 = 31;
    sbit  CHEPFABT31_bit at CHEPFABT.B31;
    const register unsigned short int CHEPFABT30 = 30;
    sbit  CHEPFABT30_bit at CHEPFABT.B30;
    const register unsigned short int CHEPFABT29 = 29;
    sbit  CHEPFABT29_bit at CHEPFABT.B29;
    const register unsigned short int CHEPFABT28 = 28;
    sbit  CHEPFABT28_bit at CHEPFABT.B28;
    const register unsigned short int CHEPFABT27 = 27;
    sbit  CHEPFABT27_bit at CHEPFABT.B27;
    const register unsigned short int CHEPFABT26 = 26;
    sbit  CHEPFABT26_bit at CHEPFABT.B26;
    const register unsigned short int CHEPFABT25 = 25;
    sbit  CHEPFABT25_bit at CHEPFABT.B25;
    const register unsigned short int CHEPFABT24 = 24;
    sbit  CHEPFABT24_bit at CHEPFABT.B24;
    const register unsigned short int CHEPFABT23 = 23;
    sbit  CHEPFABT23_bit at CHEPFABT.B23;
    const register unsigned short int CHEPFABT22 = 22;
    sbit  CHEPFABT22_bit at CHEPFABT.B22;
    const register unsigned short int CHEPFABT21 = 21;
    sbit  CHEPFABT21_bit at CHEPFABT.B21;
    const register unsigned short int CHEPFABT20 = 20;
    sbit  CHEPFABT20_bit at CHEPFABT.B20;
    const register unsigned short int CHEPFABT19 = 19;
    sbit  CHEPFABT19_bit at CHEPFABT.B19;
    const register unsigned short int CHEPFABT18 = 18;
    sbit  CHEPFABT18_bit at CHEPFABT.B18;
    const register unsigned short int CHEPFABT17 = 17;
    sbit  CHEPFABT17_bit at CHEPFABT.B17;
    const register unsigned short int CHEPFABT16 = 16;
    sbit  CHEPFABT16_bit at CHEPFABT.B16;
    const register unsigned short int CHEPFABT15 = 15;
    sbit  CHEPFABT15_bit at CHEPFABT.B15;
    const register unsigned short int CHEPFABT14 = 14;
    sbit  CHEPFABT14_bit at CHEPFABT.B14;
    const register unsigned short int CHEPFABT13 = 13;
    sbit  CHEPFABT13_bit at CHEPFABT.B13;
    const register unsigned short int CHEPFABT12 = 12;
    sbit  CHEPFABT12_bit at CHEPFABT.B12;
    const register unsigned short int CHEPFABT11 = 11;
    sbit  CHEPFABT11_bit at CHEPFABT.B11;
    const register unsigned short int CHEPFABT10 = 10;
    sbit  CHEPFABT10_bit at CHEPFABT.B10;
    const register unsigned short int CHEPFABT9 = 9;
    sbit  CHEPFABT9_bit at CHEPFABT.B9;
    const register unsigned short int CHEPFABT8 = 8;
    sbit  CHEPFABT8_bit at CHEPFABT.B8;
    const register unsigned short int CHEPFABT7 = 7;
    sbit  CHEPFABT7_bit at CHEPFABT.B7;
    const register unsigned short int CHEPFABT6 = 6;
    sbit  CHEPFABT6_bit at CHEPFABT.B6;
    const register unsigned short int CHEPFABT5 = 5;
    sbit  CHEPFABT5_bit at CHEPFABT.B5;
    const register unsigned short int CHEPFABT4 = 4;
    sbit  CHEPFABT4_bit at CHEPFABT.B4;
    const register unsigned short int CHEPFABT3 = 3;
    sbit  CHEPFABT3_bit at CHEPFABT.B3;
    const register unsigned short int CHEPFABT2 = 2;
    sbit  CHEPFABT2_bit at CHEPFABT.B2;
    const register unsigned short int CHEPFABT1 = 1;
    sbit  CHEPFABT1_bit at CHEPFABT.B1;
    const register unsigned short int CHEPFABT0 = 0;
    sbit  CHEPFABT0_bit at CHEPFABT.B0;

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

sfr atomic unsigned long   volatile TRISB            absolute 0xBF886040;
sfr unsigned long   volatile TRISBCLR         absolute 0xBF886044;
sfr unsigned long   volatile TRISBSET         absolute 0xBF886048;
sfr unsigned long   volatile TRISBINV         absolute 0xBF88604C;
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

sfr atomic unsigned long   volatile PORTB            absolute 0xBF886050;
sfr unsigned long   volatile PORTBCLR         absolute 0xBF886054;
sfr unsigned long   volatile PORTBSET         absolute 0xBF886058;
sfr unsigned long   volatile PORTBINV         absolute 0xBF88605C;
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

sfr atomic unsigned long   volatile LATB             absolute 0xBF886060;
sfr unsigned long   volatile LATBCLR          absolute 0xBF886064;
sfr unsigned long   volatile LATBSET          absolute 0xBF886068;
sfr unsigned long   volatile LATBINV          absolute 0xBF88606C;
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

sfr atomic unsigned long   volatile ODCB             absolute 0xBF886070;
sfr unsigned long   volatile ODCBCLR          absolute 0xBF886074;
sfr unsigned long   volatile ODCBSET          absolute 0xBF886078;
sfr unsigned long   volatile ODCBINV          absolute 0xBF88607C;
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

sfr atomic unsigned long   volatile TRISC            absolute 0xBF886080;
sfr unsigned long   volatile TRISCCLR         absolute 0xBF886084;
sfr unsigned long   volatile TRISCSET         absolute 0xBF886088;
sfr unsigned long   volatile TRISCINV         absolute 0xBF88608C;
    // TRISC bits
    const register unsigned short int TRISC15 = 15;
    sbit  TRISC15_bit at TRISC.B15;
    const register unsigned short int TRISC14 = 14;
    sbit  TRISC14_bit at TRISC.B14;
    const register unsigned short int TRISC13 = 13;
    sbit  TRISC13_bit at TRISC.B13;
    const register unsigned short int TRISC12 = 12;
    sbit  TRISC12_bit at TRISC.B12;

sfr atomic unsigned long   volatile PORTC            absolute 0xBF886090;
sfr unsigned long   volatile PORTCCLR         absolute 0xBF886094;
sfr unsigned long   volatile PORTCSET         absolute 0xBF886098;
sfr unsigned long   volatile PORTCINV         absolute 0xBF88609C;
    // PORTC bits
    const register unsigned short int RC15 = 15;
    sbit  RC15_bit at PORTC.B15;
    const register unsigned short int RC14 = 14;
    sbit  RC14_bit at PORTC.B14;
    const register unsigned short int RC13 = 13;
    sbit  RC13_bit at PORTC.B13;
    const register unsigned short int RC12 = 12;
    sbit  RC12_bit at PORTC.B12;

sfr atomic unsigned long   volatile LATC             absolute 0xBF8860A0;
sfr unsigned long   volatile LATCCLR          absolute 0xBF8860A4;
sfr unsigned long   volatile LATCSET          absolute 0xBF8860A8;
sfr unsigned long   volatile LATCINV          absolute 0xBF8860AC;
    // LATC bits
    const register unsigned short int LATC15 = 15;
    sbit  LATC15_bit at LATC.B15;
    const register unsigned short int LATC14 = 14;
    sbit  LATC14_bit at LATC.B14;
    const register unsigned short int LATC13 = 13;
    sbit  LATC13_bit at LATC.B13;
    const register unsigned short int LATC12 = 12;
    sbit  LATC12_bit at LATC.B12;

sfr atomic unsigned long   volatile ODCC             absolute 0xBF8860B0;
sfr unsigned long   volatile ODCCCLR          absolute 0xBF8860B4;
sfr unsigned long   volatile ODCCSET          absolute 0xBF8860B8;
sfr unsigned long   volatile ODCCINV          absolute 0xBF8860BC;
    // ODCC bits
    const register unsigned short int ODCC15 = 15;
    sbit  ODCC15_bit at ODCC.B15;
    const register unsigned short int ODCC14 = 14;
    sbit  ODCC14_bit at ODCC.B14;
    const register unsigned short int ODCC13 = 13;
    sbit  ODCC13_bit at ODCC.B13;
    const register unsigned short int ODCC12 = 12;
    sbit  ODCC12_bit at ODCC.B12;

sfr atomic unsigned long   volatile TRISD            absolute 0xBF8860C0;
sfr unsigned long   volatile TRISDCLR         absolute 0xBF8860C4;
sfr unsigned long   volatile TRISDSET         absolute 0xBF8860C8;
sfr unsigned long   volatile TRISDINV         absolute 0xBF8860CC;
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

sfr atomic unsigned long   volatile PORTD            absolute 0xBF8860D0;
sfr unsigned long   volatile PORTDCLR         absolute 0xBF8860D4;
sfr unsigned long   volatile PORTDSET         absolute 0xBF8860D8;
sfr unsigned long   volatile PORTDINV         absolute 0xBF8860DC;
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

sfr atomic unsigned long   volatile LATD             absolute 0xBF8860E0;
sfr unsigned long   volatile LATDCLR          absolute 0xBF8860E4;
sfr unsigned long   volatile LATDSET          absolute 0xBF8860E8;
sfr unsigned long   volatile LATDINV          absolute 0xBF8860EC;
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

sfr atomic unsigned long   volatile ODCD             absolute 0xBF8860F0;
sfr unsigned long   volatile ODCDCLR          absolute 0xBF8860F4;
sfr unsigned long   volatile ODCDSET          absolute 0xBF8860F8;
sfr unsigned long   volatile ODCDINV          absolute 0xBF8860FC;
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

sfr atomic unsigned long   volatile TRISE            absolute 0xBF886100;
sfr unsigned long   volatile TRISECLR         absolute 0xBF886104;
sfr unsigned long   volatile TRISESET         absolute 0xBF886108;
sfr unsigned long   volatile TRISEINV         absolute 0xBF88610C;
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

sfr atomic unsigned long   volatile PORTE            absolute 0xBF886110;
sfr unsigned long   volatile PORTECLR         absolute 0xBF886114;
sfr unsigned long   volatile PORTESET         absolute 0xBF886118;
sfr unsigned long   volatile PORTEINV         absolute 0xBF88611C;
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

sfr atomic unsigned long   volatile LATE             absolute 0xBF886120;
sfr unsigned long   volatile LATECLR          absolute 0xBF886124;
sfr unsigned long   volatile LATESET          absolute 0xBF886128;
sfr unsigned long   volatile LATEINV          absolute 0xBF88612C;
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

sfr atomic unsigned long   volatile ODCE             absolute 0xBF886130;
sfr unsigned long   volatile ODCECLR          absolute 0xBF886134;
sfr unsigned long   volatile ODCESET          absolute 0xBF886138;
sfr unsigned long   volatile ODCEINV          absolute 0xBF88613C;
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

sfr atomic unsigned long   volatile TRISF            absolute 0xBF886140;
sfr unsigned long   volatile TRISFCLR         absolute 0xBF886144;
sfr unsigned long   volatile TRISFSET         absolute 0xBF886148;
sfr unsigned long   volatile TRISFINV         absolute 0xBF88614C;
    // TRISF bits
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

sfr atomic unsigned long   volatile PORTF            absolute 0xBF886150;
sfr unsigned long   volatile PORTFCLR         absolute 0xBF886154;
sfr unsigned long   volatile PORTFSET         absolute 0xBF886158;
sfr unsigned long   volatile PORTFINV         absolute 0xBF88615C;
    // PORTF bits
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

sfr atomic unsigned long   volatile LATF             absolute 0xBF886160;
sfr unsigned long   volatile LATFCLR          absolute 0xBF886164;
sfr unsigned long   volatile LATFSET          absolute 0xBF886168;
sfr unsigned long   volatile LATFINV          absolute 0xBF88616C;
    // LATF bits
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

sfr atomic unsigned long   volatile ODCF             absolute 0xBF886170;
sfr unsigned long   volatile ODCFCLR          absolute 0xBF886174;
sfr unsigned long   volatile ODCFSET          absolute 0xBF886178;
sfr unsigned long   volatile ODCFINV          absolute 0xBF88617C;
    // ODCF bits
    const register unsigned short int ODCF5 = 5;
    sbit  ODCF5_bit at ODCF.B5;
    const register unsigned short int ODCF4 = 4;
    sbit  ODCF4_bit at ODCF.B4;
    const register unsigned short int ODCF3 = 3;
    sbit  ODCF3_bit at ODCF.B3;
    const register unsigned short int ODCF2 = 2;
    sbit  ODCF2_bit at ODCF.B2;
    const register unsigned short int ODCF1 = 1;
    sbit  ODCF1_bit at ODCF.B1;
    const register unsigned short int ODCF0 = 0;
    sbit  ODCF0_bit at ODCF.B0;

sfr atomic unsigned long   volatile TRISG            absolute 0xBF886180;
sfr unsigned long   volatile TRISGCLR         absolute 0xBF886184;
sfr unsigned long   volatile TRISGSET         absolute 0xBF886188;
sfr unsigned long   volatile TRISGINV         absolute 0xBF88618C;
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

sfr atomic unsigned long   volatile PORTG            absolute 0xBF886190;
sfr unsigned long   volatile PORTGCLR         absolute 0xBF886194;
sfr unsigned long   volatile PORTGSET         absolute 0xBF886198;
sfr unsigned long   volatile PORTGINV         absolute 0xBF88619C;
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

sfr atomic unsigned long   volatile LATG             absolute 0xBF8861A0;
sfr unsigned long   volatile LATGCLR          absolute 0xBF8861A4;
sfr unsigned long   volatile LATGSET          absolute 0xBF8861A8;
sfr unsigned long   volatile LATGINV          absolute 0xBF8861AC;
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

sfr atomic unsigned long   volatile ODCG             absolute 0xBF8861B0;
sfr unsigned long   volatile ODCGCLR          absolute 0xBF8861B4;
sfr unsigned long   volatile ODCGSET          absolute 0xBF8861B8;
sfr unsigned long   volatile ODCGINV          absolute 0xBF8861BC;
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

sfr atomic unsigned long   volatile CNCON            absolute 0xBF8861C0;
sfr unsigned long   volatile CNCONCLR         absolute 0xBF8861C4;
sfr unsigned long   volatile CNCONSET         absolute 0xBF8861C8;
sfr unsigned long   volatile CNCONINV         absolute 0xBF8861CC;
    // CNCON bits
    sbit  ON__CNCON_bit at CNCON.B15;
    sbit  SIDL_CNCON_bit at CNCON.B13;

sfr atomic unsigned long   volatile CNEN             absolute 0xBF8861D0;
sfr unsigned long   volatile CNENCLR          absolute 0xBF8861D4;
sfr unsigned long   volatile CNENSET          absolute 0xBF8861D8;
sfr unsigned long   volatile CNENINV          absolute 0xBF8861DC;
    // CNEN bits
    const register unsigned short int CNEN18 = 18;
    sbit  CNEN18_bit at CNEN.B18;
    const register unsigned short int CNEN17 = 17;
    sbit  CNEN17_bit at CNEN.B17;
    const register unsigned short int CNEN16 = 16;
    sbit  CNEN16_bit at CNEN.B16;
    const register unsigned short int CNEN15 = 15;
    sbit  CNEN15_bit at CNEN.B15;
    const register unsigned short int CNEN14 = 14;
    sbit  CNEN14_bit at CNEN.B14;
    const register unsigned short int CNEN13 = 13;
    sbit  CNEN13_bit at CNEN.B13;
    const register unsigned short int CNEN12 = 12;
    sbit  CNEN12_bit at CNEN.B12;
    const register unsigned short int CNEN11 = 11;
    sbit  CNEN11_bit at CNEN.B11;
    const register unsigned short int CNEN10 = 10;
    sbit  CNEN10_bit at CNEN.B10;
    const register unsigned short int CNEN9 = 9;
    sbit  CNEN9_bit at CNEN.B9;
    const register unsigned short int CNEN8 = 8;
    sbit  CNEN8_bit at CNEN.B8;
    const register unsigned short int CNEN7 = 7;
    sbit  CNEN7_bit at CNEN.B7;
    const register unsigned short int CNEN6 = 6;
    sbit  CNEN6_bit at CNEN.B6;
    const register unsigned short int CNEN5 = 5;
    sbit  CNEN5_bit at CNEN.B5;
    const register unsigned short int CNEN4 = 4;
    sbit  CNEN4_bit at CNEN.B4;
    const register unsigned short int CNEN3 = 3;
    sbit  CNEN3_bit at CNEN.B3;
    const register unsigned short int CNEN2 = 2;
    sbit  CNEN2_bit at CNEN.B2;
    const register unsigned short int CNEN1 = 1;
    sbit  CNEN1_bit at CNEN.B1;
    const register unsigned short int CNEN0 = 0;
    sbit  CNEN0_bit at CNEN.B0;

sfr atomic unsigned long   volatile CNPUE            absolute 0xBF8861E0;
sfr unsigned long   volatile CNPUECLR         absolute 0xBF8861E4;
sfr unsigned long   volatile CNPUESET         absolute 0xBF8861E8;
sfr unsigned long   volatile CNPUEINV         absolute 0xBF8861EC;
    // CNPUE bits
    const register unsigned short int CNPUE18 = 18;
    sbit  CNPUE18_bit at CNPUE.B18;
    const register unsigned short int CNPUE17 = 17;
    sbit  CNPUE17_bit at CNPUE.B17;
    const register unsigned short int CNPUE16 = 16;
    sbit  CNPUE16_bit at CNPUE.B16;
    const register unsigned short int CNPUE15 = 15;
    sbit  CNPUE15_bit at CNPUE.B15;
    const register unsigned short int CNPUE14 = 14;
    sbit  CNPUE14_bit at CNPUE.B14;
    const register unsigned short int CNPUE13 = 13;
    sbit  CNPUE13_bit at CNPUE.B13;
    const register unsigned short int CNPUE12 = 12;
    sbit  CNPUE12_bit at CNPUE.B12;
    const register unsigned short int CNPUE11 = 11;
    sbit  CNPUE11_bit at CNPUE.B11;
    const register unsigned short int CNPUE10 = 10;
    sbit  CNPUE10_bit at CNPUE.B10;
    const register unsigned short int CNPUE9 = 9;
    sbit  CNPUE9_bit at CNPUE.B9;
    const register unsigned short int CNPUE8 = 8;
    sbit  CNPUE8_bit at CNPUE.B8;
    const register unsigned short int CNPUE7 = 7;
    sbit  CNPUE7_bit at CNPUE.B7;
    const register unsigned short int CNPUE6 = 6;
    sbit  CNPUE6_bit at CNPUE.B6;
    const register unsigned short int CNPUE5 = 5;
    sbit  CNPUE5_bit at CNPUE.B5;
    const register unsigned short int CNPUE4 = 4;
    sbit  CNPUE4_bit at CNPUE.B4;
    const register unsigned short int CNPUE3 = 3;
    sbit  CNPUE3_bit at CNPUE.B3;
    const register unsigned short int CNPUE2 = 2;
    sbit  CNPUE2_bit at CNPUE.B2;
    const register unsigned short int CNPUE1 = 1;
    sbit  CNPUE1_bit at CNPUE.B1;
    const register unsigned short int CNPUE0 = 0;
    sbit  CNPUE0_bit at CNPUE.B0;

sfr atomic unsigned long   volatile ETHCON1          absolute 0xBF889000;
sfr unsigned long   volatile ETHCON1CLR       absolute 0xBF889004;
sfr unsigned long   volatile ETHCON1SET       absolute 0xBF889008;
sfr unsigned long   volatile ETHCON1INV       absolute 0xBF88900C;
    // ETHCON1 bits
    const register unsigned short int PTV15 = 31;
    sbit  PTV15_bit at ETHCON1.B31;
    const register unsigned short int PTV14 = 30;
    sbit  PTV14_bit at ETHCON1.B30;
    const register unsigned short int PTV13 = 29;
    sbit  PTV13_bit at ETHCON1.B29;
    const register unsigned short int PTV12 = 28;
    sbit  PTV12_bit at ETHCON1.B28;
    const register unsigned short int PTV11 = 27;
    sbit  PTV11_bit at ETHCON1.B27;
    const register unsigned short int PTV10 = 26;
    sbit  PTV10_bit at ETHCON1.B26;
    const register unsigned short int PTV9 = 25;
    sbit  PTV9_bit at ETHCON1.B25;
    const register unsigned short int PTV8 = 24;
    sbit  PTV8_bit at ETHCON1.B24;
    const register unsigned short int PTV7 = 23;
    sbit  PTV7_bit at ETHCON1.B23;
    const register unsigned short int PTV6 = 22;
    sbit  PTV6_bit at ETHCON1.B22;
    const register unsigned short int PTV5 = 21;
    sbit  PTV5_bit at ETHCON1.B21;
    const register unsigned short int PTV4 = 20;
    sbit  PTV4_bit at ETHCON1.B20;
    const register unsigned short int PTV3 = 19;
    sbit  PTV3_bit at ETHCON1.B19;
    const register unsigned short int PTV2 = 18;
    sbit  PTV2_bit at ETHCON1.B18;
    const register unsigned short int PTV1 = 17;
    sbit  PTV1_bit at ETHCON1.B17;
    const register unsigned short int PTV0 = 16;
    sbit  PTV0_bit at ETHCON1.B16;
    sbit  ON__ETHCON1_bit at ETHCON1.B15;
    sbit  SIDL_ETHCON1_bit at ETHCON1.B13;
    const register unsigned short int TXRTS = 9;
    sbit  TXRTS_bit at ETHCON1.B9;
    const register unsigned short int RXEN = 8;
    sbit  RXEN_bit at ETHCON1.B8;
    const register unsigned short int AUTOFC = 7;
    sbit  AUTOFC_bit at ETHCON1.B7;
    const register unsigned short int MANFC = 4;
    sbit  MANFC_bit at ETHCON1.B4;
    const register unsigned short int BUFCDEC = 0;
    sbit  BUFCDEC_bit at ETHCON1.B0;

sfr atomic unsigned long   volatile ETHCON2          absolute 0xBF889010;
sfr unsigned long   volatile ETHCON2CLR       absolute 0xBF889014;
sfr unsigned long   volatile ETHCON2SET       absolute 0xBF889018;
sfr unsigned long   volatile ETHCON2INV       absolute 0xBF88901C;
    // ETHCON2 bits
    const register unsigned short int RXBUF_SZ6 = 10;
    sbit  RXBUF_SZ6_bit at ETHCON2.B10;
    const register unsigned short int RXBUF_SZ5 = 9;
    sbit  RXBUF_SZ5_bit at ETHCON2.B9;
    const register unsigned short int RXBUF_SZ4 = 8;
    sbit  RXBUF_SZ4_bit at ETHCON2.B8;
    const register unsigned short int RXBUF_SZ3 = 7;
    sbit  RXBUF_SZ3_bit at ETHCON2.B7;
    const register unsigned short int RXBUF_SZ2 = 6;
    sbit  RXBUF_SZ2_bit at ETHCON2.B6;
    const register unsigned short int RXBUF_SZ1 = 5;
    sbit  RXBUF_SZ1_bit at ETHCON2.B5;
    const register unsigned short int RXBUF_SZ0 = 4;
    sbit  RXBUF_SZ0_bit at ETHCON2.B4;

sfr atomic unsigned long   volatile ETHTXST          absolute 0xBF889020;
sfr unsigned long   volatile ETHTXSTCLR       absolute 0xBF889024;
sfr unsigned long   volatile ETHTXSTSET       absolute 0xBF889028;
sfr unsigned long   volatile ETHTXSTINV       absolute 0xBF88902C;
    // ETHTXST bits
    const register unsigned short int TXSTADDR29 = 31;
    sbit  TXSTADDR29_bit at ETHTXST.B31;
    const register unsigned short int TXSTADDR28 = 30;
    sbit  TXSTADDR28_bit at ETHTXST.B30;
    const register unsigned short int TXSTADDR27 = 29;
    sbit  TXSTADDR27_bit at ETHTXST.B29;
    const register unsigned short int TXSTADDR26 = 28;
    sbit  TXSTADDR26_bit at ETHTXST.B28;
    const register unsigned short int TXSTADDR25 = 27;
    sbit  TXSTADDR25_bit at ETHTXST.B27;
    const register unsigned short int TXSTADDR24 = 26;
    sbit  TXSTADDR24_bit at ETHTXST.B26;
    const register unsigned short int TXSTADDR23 = 25;
    sbit  TXSTADDR23_bit at ETHTXST.B25;
    const register unsigned short int TXSTADDR22 = 24;
    sbit  TXSTADDR22_bit at ETHTXST.B24;
    const register unsigned short int TXSTADDR21 = 23;
    sbit  TXSTADDR21_bit at ETHTXST.B23;
    const register unsigned short int TXSTADDR20 = 22;
    sbit  TXSTADDR20_bit at ETHTXST.B22;
    const register unsigned short int TXSTADDR19 = 21;
    sbit  TXSTADDR19_bit at ETHTXST.B21;
    const register unsigned short int TXSTADDR18 = 20;
    sbit  TXSTADDR18_bit at ETHTXST.B20;
    const register unsigned short int TXSTADDR17 = 19;
    sbit  TXSTADDR17_bit at ETHTXST.B19;
    const register unsigned short int TXSTADDR16 = 18;
    sbit  TXSTADDR16_bit at ETHTXST.B18;
    const register unsigned short int TXSTADDR15 = 17;
    sbit  TXSTADDR15_bit at ETHTXST.B17;
    const register unsigned short int TXSTADDR14 = 16;
    sbit  TXSTADDR14_bit at ETHTXST.B16;
    const register unsigned short int TXSTADDR13 = 15;
    sbit  TXSTADDR13_bit at ETHTXST.B15;
    const register unsigned short int TXSTADDR12 = 14;
    sbit  TXSTADDR12_bit at ETHTXST.B14;
    const register unsigned short int TXSTADDR11 = 13;
    sbit  TXSTADDR11_bit at ETHTXST.B13;
    const register unsigned short int TXSTADDR10 = 12;
    sbit  TXSTADDR10_bit at ETHTXST.B12;
    const register unsigned short int TXSTADDR9 = 11;
    sbit  TXSTADDR9_bit at ETHTXST.B11;
    const register unsigned short int TXSTADDR8 = 10;
    sbit  TXSTADDR8_bit at ETHTXST.B10;
    const register unsigned short int TXSTADDR7 = 9;
    sbit  TXSTADDR7_bit at ETHTXST.B9;
    const register unsigned short int TXSTADDR6 = 8;
    sbit  TXSTADDR6_bit at ETHTXST.B8;
    const register unsigned short int TXSTADDR5 = 7;
    sbit  TXSTADDR5_bit at ETHTXST.B7;
    const register unsigned short int TXSTADDR4 = 6;
    sbit  TXSTADDR4_bit at ETHTXST.B6;
    const register unsigned short int TXSTADDR3 = 5;
    sbit  TXSTADDR3_bit at ETHTXST.B5;
    const register unsigned short int TXSTADDR2 = 4;
    sbit  TXSTADDR2_bit at ETHTXST.B4;
    const register unsigned short int TXSTADDR1 = 3;
    sbit  TXSTADDR1_bit at ETHTXST.B3;
    const register unsigned short int TXSTADDR0 = 2;
    sbit  TXSTADDR0_bit at ETHTXST.B2;

sfr atomic unsigned long   volatile ETHRXST          absolute 0xBF889030;
sfr unsigned long   volatile ETHRXSTCLR       absolute 0xBF889034;
sfr unsigned long   volatile ETHRXSTSET       absolute 0xBF889038;
sfr unsigned long   volatile ETHRXSTINV       absolute 0xBF88903C;
    // ETHRXST bits
    const register unsigned short int RXSTADDR29 = 31;
    sbit  RXSTADDR29_bit at ETHRXST.B31;
    const register unsigned short int RXSTADDR28 = 30;
    sbit  RXSTADDR28_bit at ETHRXST.B30;
    const register unsigned short int RXSTADDR27 = 29;
    sbit  RXSTADDR27_bit at ETHRXST.B29;
    const register unsigned short int RXSTADDR26 = 28;
    sbit  RXSTADDR26_bit at ETHRXST.B28;
    const register unsigned short int RXSTADDR25 = 27;
    sbit  RXSTADDR25_bit at ETHRXST.B27;
    const register unsigned short int RXSTADDR24 = 26;
    sbit  RXSTADDR24_bit at ETHRXST.B26;
    const register unsigned short int RXSTADDR23 = 25;
    sbit  RXSTADDR23_bit at ETHRXST.B25;
    const register unsigned short int RXSTADDR22 = 24;
    sbit  RXSTADDR22_bit at ETHRXST.B24;
    const register unsigned short int RXSTADDR21 = 23;
    sbit  RXSTADDR21_bit at ETHRXST.B23;
    const register unsigned short int RXSTADDR20 = 22;
    sbit  RXSTADDR20_bit at ETHRXST.B22;
    const register unsigned short int RXSTADDR19 = 21;
    sbit  RXSTADDR19_bit at ETHRXST.B21;
    const register unsigned short int RXSTADDR18 = 20;
    sbit  RXSTADDR18_bit at ETHRXST.B20;
    const register unsigned short int RXSTADDR17 = 19;
    sbit  RXSTADDR17_bit at ETHRXST.B19;
    const register unsigned short int RXSTADDR16 = 18;
    sbit  RXSTADDR16_bit at ETHRXST.B18;
    const register unsigned short int RXSTADDR15 = 17;
    sbit  RXSTADDR15_bit at ETHRXST.B17;
    const register unsigned short int RXSTADDR14 = 16;
    sbit  RXSTADDR14_bit at ETHRXST.B16;
    const register unsigned short int RXSTADDR13 = 15;
    sbit  RXSTADDR13_bit at ETHRXST.B15;
    const register unsigned short int RXSTADDR12 = 14;
    sbit  RXSTADDR12_bit at ETHRXST.B14;
    const register unsigned short int RXSTADDR11 = 13;
    sbit  RXSTADDR11_bit at ETHRXST.B13;
    const register unsigned short int RXSTADDR10 = 12;
    sbit  RXSTADDR10_bit at ETHRXST.B12;
    const register unsigned short int RXSTADDR9 = 11;
    sbit  RXSTADDR9_bit at ETHRXST.B11;
    const register unsigned short int RXSTADDR8 = 10;
    sbit  RXSTADDR8_bit at ETHRXST.B10;
    const register unsigned short int RXSTADDR7 = 9;
    sbit  RXSTADDR7_bit at ETHRXST.B9;
    const register unsigned short int RXSTADDR6 = 8;
    sbit  RXSTADDR6_bit at ETHRXST.B8;
    const register unsigned short int RXSTADDR5 = 7;
    sbit  RXSTADDR5_bit at ETHRXST.B7;
    const register unsigned short int RXSTADDR4 = 6;
    sbit  RXSTADDR4_bit at ETHRXST.B6;
    const register unsigned short int RXSTADDR3 = 5;
    sbit  RXSTADDR3_bit at ETHRXST.B5;
    const register unsigned short int RXSTADDR2 = 4;
    sbit  RXSTADDR2_bit at ETHRXST.B4;
    const register unsigned short int RXSTADDR1 = 3;
    sbit  RXSTADDR1_bit at ETHRXST.B3;
    const register unsigned short int RXSTADDR0 = 2;
    sbit  RXSTADDR0_bit at ETHRXST.B2;

sfr atomic unsigned long   volatile ETHHT0           absolute 0xBF889040;
sfr unsigned long   volatile ETHHT0CLR        absolute 0xBF889044;
sfr unsigned long   volatile ETHHT0SET        absolute 0xBF889048;
sfr unsigned long   volatile ETHHT0INV        absolute 0xBF88904C;
    // ETHHT0 bits
    const register unsigned short int HT31 = 31;
    sbit  HT31_bit at ETHHT0.B31;
    const register unsigned short int HT30 = 30;
    sbit  HT30_bit at ETHHT0.B30;
    const register unsigned short int HT29 = 29;
    sbit  HT29_bit at ETHHT0.B29;
    const register unsigned short int HT28 = 28;
    sbit  HT28_bit at ETHHT0.B28;
    const register unsigned short int HT27 = 27;
    sbit  HT27_bit at ETHHT0.B27;
    const register unsigned short int HT26 = 26;
    sbit  HT26_bit at ETHHT0.B26;
    const register unsigned short int HT25 = 25;
    sbit  HT25_bit at ETHHT0.B25;
    const register unsigned short int HT24 = 24;
    sbit  HT24_bit at ETHHT0.B24;
    const register unsigned short int HT23 = 23;
    sbit  HT23_bit at ETHHT0.B23;
    const register unsigned short int HT22 = 22;
    sbit  HT22_bit at ETHHT0.B22;
    const register unsigned short int HT21 = 21;
    sbit  HT21_bit at ETHHT0.B21;
    const register unsigned short int HT20 = 20;
    sbit  HT20_bit at ETHHT0.B20;
    const register unsigned short int HT19 = 19;
    sbit  HT19_bit at ETHHT0.B19;
    const register unsigned short int HT18 = 18;
    sbit  HT18_bit at ETHHT0.B18;
    const register unsigned short int HT17 = 17;
    sbit  HT17_bit at ETHHT0.B17;
    const register unsigned short int HT16 = 16;
    sbit  HT16_bit at ETHHT0.B16;
    const register unsigned short int HT15 = 15;
    sbit  HT15_bit at ETHHT0.B15;
    const register unsigned short int HT14 = 14;
    sbit  HT14_bit at ETHHT0.B14;
    const register unsigned short int HT13 = 13;
    sbit  HT13_bit at ETHHT0.B13;
    const register unsigned short int HT12 = 12;
    sbit  HT12_bit at ETHHT0.B12;
    const register unsigned short int HT11 = 11;
    sbit  HT11_bit at ETHHT0.B11;
    const register unsigned short int HT10 = 10;
    sbit  HT10_bit at ETHHT0.B10;
    const register unsigned short int HT9 = 9;
    sbit  HT9_bit at ETHHT0.B9;
    const register unsigned short int HT8 = 8;
    sbit  HT8_bit at ETHHT0.B8;
    const register unsigned short int HT7 = 7;
    sbit  HT7_bit at ETHHT0.B7;
    const register unsigned short int HT6 = 6;
    sbit  HT6_bit at ETHHT0.B6;
    const register unsigned short int HT5 = 5;
    sbit  HT5_bit at ETHHT0.B5;
    const register unsigned short int HT4 = 4;
    sbit  HT4_bit at ETHHT0.B4;
    const register unsigned short int HT3 = 3;
    sbit  HT3_bit at ETHHT0.B3;
    const register unsigned short int HT2 = 2;
    sbit  HT2_bit at ETHHT0.B2;
    const register unsigned short int HT1 = 1;
    sbit  HT1_bit at ETHHT0.B1;
    const register unsigned short int HT0 = 0;
    sbit  HT0_bit at ETHHT0.B0;

sfr atomic unsigned long   volatile ETHHT1           absolute 0xBF889050;
sfr unsigned long   volatile ETHHT1CLR        absolute 0xBF889054;
sfr unsigned long   volatile ETHHT1SET        absolute 0xBF889058;
sfr unsigned long   volatile ETHHT1INV        absolute 0xBF88905C;
    // ETHHT1 bits
    sbit  HT31_ETHHT1_bit at ETHHT1.B31;
    sbit  HT30_ETHHT1_bit at ETHHT1.B30;
    sbit  HT29_ETHHT1_bit at ETHHT1.B29;
    sbit  HT28_ETHHT1_bit at ETHHT1.B28;
    sbit  HT27_ETHHT1_bit at ETHHT1.B27;
    sbit  HT26_ETHHT1_bit at ETHHT1.B26;
    sbit  HT25_ETHHT1_bit at ETHHT1.B25;
    sbit  HT24_ETHHT1_bit at ETHHT1.B24;
    sbit  HT23_ETHHT1_bit at ETHHT1.B23;
    sbit  HT22_ETHHT1_bit at ETHHT1.B22;
    sbit  HT21_ETHHT1_bit at ETHHT1.B21;
    sbit  HT20_ETHHT1_bit at ETHHT1.B20;
    sbit  HT19_ETHHT1_bit at ETHHT1.B19;
    sbit  HT18_ETHHT1_bit at ETHHT1.B18;
    sbit  HT17_ETHHT1_bit at ETHHT1.B17;
    sbit  HT16_ETHHT1_bit at ETHHT1.B16;
    sbit  HT15_ETHHT1_bit at ETHHT1.B15;
    sbit  HT14_ETHHT1_bit at ETHHT1.B14;
    sbit  HT13_ETHHT1_bit at ETHHT1.B13;
    sbit  HT12_ETHHT1_bit at ETHHT1.B12;
    sbit  HT11_ETHHT1_bit at ETHHT1.B11;
    sbit  HT10_ETHHT1_bit at ETHHT1.B10;
    sbit  HT9_ETHHT1_bit at ETHHT1.B9;
    sbit  HT8_ETHHT1_bit at ETHHT1.B8;
    sbit  HT7_ETHHT1_bit at ETHHT1.B7;
    sbit  HT6_ETHHT1_bit at ETHHT1.B6;
    sbit  HT5_ETHHT1_bit at ETHHT1.B5;
    sbit  HT4_ETHHT1_bit at ETHHT1.B4;
    sbit  HT3_ETHHT1_bit at ETHHT1.B3;
    sbit  HT2_ETHHT1_bit at ETHHT1.B2;
    sbit  HT1_ETHHT1_bit at ETHHT1.B1;
    sbit  HT0_ETHHT1_bit at ETHHT1.B0;

sfr atomic unsigned long   volatile ETHPMM0          absolute 0xBF889060;
sfr unsigned long   volatile ETHPMM0CLR       absolute 0xBF889064;
sfr unsigned long   volatile ETHPMM0SET       absolute 0xBF889068;
sfr unsigned long   volatile ETHPMM0INV       absolute 0xBF88906C;
    // ETHPMM0 bits
    const register unsigned short int PMM31 = 31;
    sbit  PMM31_bit at ETHPMM0.B31;
    const register unsigned short int PMM30 = 30;
    sbit  PMM30_bit at ETHPMM0.B30;
    const register unsigned short int PMM29 = 29;
    sbit  PMM29_bit at ETHPMM0.B29;
    const register unsigned short int PMM28 = 28;
    sbit  PMM28_bit at ETHPMM0.B28;
    const register unsigned short int PMM27 = 27;
    sbit  PMM27_bit at ETHPMM0.B27;
    const register unsigned short int PMM26 = 26;
    sbit  PMM26_bit at ETHPMM0.B26;
    const register unsigned short int PMM25 = 25;
    sbit  PMM25_bit at ETHPMM0.B25;
    const register unsigned short int PMM24 = 24;
    sbit  PMM24_bit at ETHPMM0.B24;
    const register unsigned short int PMM23 = 23;
    sbit  PMM23_bit at ETHPMM0.B23;
    const register unsigned short int PMM22 = 22;
    sbit  PMM22_bit at ETHPMM0.B22;
    const register unsigned short int PMM21 = 21;
    sbit  PMM21_bit at ETHPMM0.B21;
    const register unsigned short int PMM20 = 20;
    sbit  PMM20_bit at ETHPMM0.B20;
    const register unsigned short int PMM19 = 19;
    sbit  PMM19_bit at ETHPMM0.B19;
    const register unsigned short int PMM18 = 18;
    sbit  PMM18_bit at ETHPMM0.B18;
    const register unsigned short int PMM17 = 17;
    sbit  PMM17_bit at ETHPMM0.B17;
    const register unsigned short int PMM16 = 16;
    sbit  PMM16_bit at ETHPMM0.B16;
    const register unsigned short int PMM15 = 15;
    sbit  PMM15_bit at ETHPMM0.B15;
    const register unsigned short int PMM14 = 14;
    sbit  PMM14_bit at ETHPMM0.B14;
    const register unsigned short int PMM13 = 13;
    sbit  PMM13_bit at ETHPMM0.B13;
    const register unsigned short int PMM12 = 12;
    sbit  PMM12_bit at ETHPMM0.B12;
    const register unsigned short int PMM11 = 11;
    sbit  PMM11_bit at ETHPMM0.B11;
    const register unsigned short int PMM10 = 10;
    sbit  PMM10_bit at ETHPMM0.B10;
    const register unsigned short int PMM9 = 9;
    sbit  PMM9_bit at ETHPMM0.B9;
    const register unsigned short int PMM8 = 8;
    sbit  PMM8_bit at ETHPMM0.B8;
    const register unsigned short int PMM7 = 7;
    sbit  PMM7_bit at ETHPMM0.B7;
    const register unsigned short int PMM6 = 6;
    sbit  PMM6_bit at ETHPMM0.B6;
    const register unsigned short int PMM5 = 5;
    sbit  PMM5_bit at ETHPMM0.B5;
    const register unsigned short int PMM4 = 4;
    sbit  PMM4_bit at ETHPMM0.B4;
    const register unsigned short int PMM3 = 3;
    sbit  PMM3_bit at ETHPMM0.B3;
    const register unsigned short int PMM2 = 2;
    sbit  PMM2_bit at ETHPMM0.B2;
    const register unsigned short int PMM1 = 1;
    sbit  PMM1_bit at ETHPMM0.B1;
    const register unsigned short int PMM0 = 0;
    sbit  PMM0_bit at ETHPMM0.B0;

sfr atomic unsigned long   volatile ETHPMM1          absolute 0xBF889070;
sfr unsigned long   volatile ETHPMM1CLR       absolute 0xBF889074;
sfr unsigned long   volatile ETHPMM1SET       absolute 0xBF889078;
sfr unsigned long   volatile ETHPMM1INV       absolute 0xBF88907C;
    // ETHPMM1 bits
    sbit  PMM31_ETHPMM1_bit at ETHPMM1.B31;
    sbit  PMM30_ETHPMM1_bit at ETHPMM1.B30;
    sbit  PMM29_ETHPMM1_bit at ETHPMM1.B29;
    sbit  PMM28_ETHPMM1_bit at ETHPMM1.B28;
    sbit  PMM27_ETHPMM1_bit at ETHPMM1.B27;
    sbit  PMM26_ETHPMM1_bit at ETHPMM1.B26;
    sbit  PMM25_ETHPMM1_bit at ETHPMM1.B25;
    sbit  PMM24_ETHPMM1_bit at ETHPMM1.B24;
    sbit  PMM23_ETHPMM1_bit at ETHPMM1.B23;
    sbit  PMM22_ETHPMM1_bit at ETHPMM1.B22;
    sbit  PMM21_ETHPMM1_bit at ETHPMM1.B21;
    sbit  PMM20_ETHPMM1_bit at ETHPMM1.B20;
    sbit  PMM19_ETHPMM1_bit at ETHPMM1.B19;
    sbit  PMM18_ETHPMM1_bit at ETHPMM1.B18;
    sbit  PMM17_ETHPMM1_bit at ETHPMM1.B17;
    sbit  PMM16_ETHPMM1_bit at ETHPMM1.B16;
    sbit  PMM15_ETHPMM1_bit at ETHPMM1.B15;
    sbit  PMM14_ETHPMM1_bit at ETHPMM1.B14;
    sbit  PMM13_ETHPMM1_bit at ETHPMM1.B13;
    sbit  PMM12_ETHPMM1_bit at ETHPMM1.B12;
    sbit  PMM11_ETHPMM1_bit at ETHPMM1.B11;
    sbit  PMM10_ETHPMM1_bit at ETHPMM1.B10;
    sbit  PMM9_ETHPMM1_bit at ETHPMM1.B9;
    sbit  PMM8_ETHPMM1_bit at ETHPMM1.B8;
    sbit  PMM7_ETHPMM1_bit at ETHPMM1.B7;
    sbit  PMM6_ETHPMM1_bit at ETHPMM1.B6;
    sbit  PMM5_ETHPMM1_bit at ETHPMM1.B5;
    sbit  PMM4_ETHPMM1_bit at ETHPMM1.B4;
    sbit  PMM3_ETHPMM1_bit at ETHPMM1.B3;
    sbit  PMM2_ETHPMM1_bit at ETHPMM1.B2;
    sbit  PMM1_ETHPMM1_bit at ETHPMM1.B1;
    sbit  PMM0_ETHPMM1_bit at ETHPMM1.B0;

sfr atomic unsigned long   volatile ETHPMCS          absolute 0xBF889080;
sfr unsigned long   volatile ETHPMCSCLR       absolute 0xBF889084;
sfr unsigned long   volatile ETHPMCSSET       absolute 0xBF889088;
sfr unsigned long   volatile ETHPMCSINV       absolute 0xBF88908C;
    // ETHPMCS bits
    const register unsigned short int PMCS15 = 15;
    sbit  PMCS15_bit at ETHPMCS.B15;
    const register unsigned short int PMCS14 = 14;
    sbit  PMCS14_bit at ETHPMCS.B14;
    const register unsigned short int PMCS13 = 13;
    sbit  PMCS13_bit at ETHPMCS.B13;
    const register unsigned short int PMCS12 = 12;
    sbit  PMCS12_bit at ETHPMCS.B12;
    const register unsigned short int PMCS11 = 11;
    sbit  PMCS11_bit at ETHPMCS.B11;
    const register unsigned short int PMCS10 = 10;
    sbit  PMCS10_bit at ETHPMCS.B10;
    const register unsigned short int PMCS9 = 9;
    sbit  PMCS9_bit at ETHPMCS.B9;
    const register unsigned short int PMCS8 = 8;
    sbit  PMCS8_bit at ETHPMCS.B8;
    const register unsigned short int PMCS7 = 7;
    sbit  PMCS7_bit at ETHPMCS.B7;
    const register unsigned short int PMCS6 = 6;
    sbit  PMCS6_bit at ETHPMCS.B6;
    const register unsigned short int PMCS5 = 5;
    sbit  PMCS5_bit at ETHPMCS.B5;
    const register unsigned short int PMCS4 = 4;
    sbit  PMCS4_bit at ETHPMCS.B4;
    const register unsigned short int PMCS3 = 3;
    sbit  PMCS3_bit at ETHPMCS.B3;
    const register unsigned short int PMCS2 = 2;
    sbit  PMCS2_bit at ETHPMCS.B2;
    const register unsigned short int PMCS1 = 1;
    sbit  PMCS1_bit at ETHPMCS.B1;
    const register unsigned short int PMCS0 = 0;
    sbit  PMCS0_bit at ETHPMCS.B0;

sfr atomic unsigned long   volatile ETHPMO           absolute 0xBF889090;
sfr unsigned long   volatile ETHPMOCLR        absolute 0xBF889094;
sfr unsigned long   volatile ETHPMOSET        absolute 0xBF889098;
sfr unsigned long   volatile ETHPMOINV        absolute 0xBF88909C;
    // ETHPMO bits
    const register unsigned short int PMO15 = 15;
    sbit  PMO15_bit at ETHPMO.B15;
    const register unsigned short int PMO14 = 14;
    sbit  PMO14_bit at ETHPMO.B14;
    const register unsigned short int PMO13 = 13;
    sbit  PMO13_bit at ETHPMO.B13;
    const register unsigned short int PMO12 = 12;
    sbit  PMO12_bit at ETHPMO.B12;
    const register unsigned short int PMO11 = 11;
    sbit  PMO11_bit at ETHPMO.B11;
    const register unsigned short int PMO10 = 10;
    sbit  PMO10_bit at ETHPMO.B10;
    const register unsigned short int PMO9 = 9;
    sbit  PMO9_bit at ETHPMO.B9;
    const register unsigned short int PMO8 = 8;
    sbit  PMO8_bit at ETHPMO.B8;
    const register unsigned short int PMO7 = 7;
    sbit  PMO7_bit at ETHPMO.B7;
    const register unsigned short int PMO6 = 6;
    sbit  PMO6_bit at ETHPMO.B6;
    const register unsigned short int PMO5 = 5;
    sbit  PMO5_bit at ETHPMO.B5;
    const register unsigned short int PMO4 = 4;
    sbit  PMO4_bit at ETHPMO.B4;
    const register unsigned short int PMO3 = 3;
    sbit  PMO3_bit at ETHPMO.B3;
    const register unsigned short int PMO2 = 2;
    sbit  PMO2_bit at ETHPMO.B2;
    const register unsigned short int PMO1 = 1;
    sbit  PMO1_bit at ETHPMO.B1;
    const register unsigned short int PMO0 = 0;
    sbit  PMO0_bit at ETHPMO.B0;

sfr atomic unsigned long   volatile ETHRXFC          absolute 0xBF8890A0;
sfr unsigned long   volatile ETHRXFCCLR       absolute 0xBF8890A4;
sfr unsigned long   volatile ETHRXFCSET       absolute 0xBF8890A8;
sfr unsigned long   volatile ETHRXFCINV       absolute 0xBF8890AC;
    // ETHRXFC bits
    const register unsigned short int HTEN = 15;
    sbit  HTEN_bit at ETHRXFC.B15;
    const register unsigned short int MPEN = 14;
    sbit  MPEN_bit at ETHRXFC.B14;
    const register unsigned short int NOTPM = 12;
    sbit  NOTPM_bit at ETHRXFC.B12;
    const register unsigned short int PMMODE3 = 11;
    sbit  PMMODE3_bit at ETHRXFC.B11;
    const register unsigned short int PMMODE2 = 10;
    sbit  PMMODE2_bit at ETHRXFC.B10;
    const register unsigned short int PMMODE1 = 9;
    sbit  PMMODE1_bit at ETHRXFC.B9;
    const register unsigned short int PMMODE0 = 8;
    sbit  PMMODE0_bit at ETHRXFC.B8;
    const register unsigned short int CRCERREN = 7;
    sbit  CRCERREN_bit at ETHRXFC.B7;
    const register unsigned short int CRCOKEN = 6;
    sbit  CRCOKEN_bit at ETHRXFC.B6;
    const register unsigned short int RUNTERREN = 5;
    sbit  RUNTERREN_bit at ETHRXFC.B5;
    const register unsigned short int RUNTEN = 4;
    sbit  RUNTEN_bit at ETHRXFC.B4;
    const register unsigned short int UCEN = 3;
    sbit  UCEN_bit at ETHRXFC.B3;
    const register unsigned short int NOTMEEN = 2;
    sbit  NOTMEEN_bit at ETHRXFC.B2;
    const register unsigned short int MCEN = 1;
    sbit  MCEN_bit at ETHRXFC.B1;
    const register unsigned short int BCEN = 0;
    sbit  BCEN_bit at ETHRXFC.B0;

sfr atomic unsigned long   volatile ETHRXWM          absolute 0xBF8890B0;
sfr unsigned long   volatile ETHRXWMCLR       absolute 0xBF8890B4;
sfr unsigned long   volatile ETHRXWMSET       absolute 0xBF8890B8;
sfr unsigned long   volatile ETHRXWMINV       absolute 0xBF8890BC;
    // ETHRXWM bits
    const register unsigned short int RXFWM7 = 23;
    sbit  RXFWM7_bit at ETHRXWM.B23;
    const register unsigned short int RXFWM6 = 22;
    sbit  RXFWM6_bit at ETHRXWM.B22;
    const register unsigned short int RXFWM5 = 21;
    sbit  RXFWM5_bit at ETHRXWM.B21;
    const register unsigned short int RXFWM4 = 20;
    sbit  RXFWM4_bit at ETHRXWM.B20;
    const register unsigned short int RXFWM3 = 19;
    sbit  RXFWM3_bit at ETHRXWM.B19;
    const register unsigned short int RXFWM2 = 18;
    sbit  RXFWM2_bit at ETHRXWM.B18;
    const register unsigned short int RXFWM1 = 17;
    sbit  RXFWM1_bit at ETHRXWM.B17;
    const register unsigned short int RXFWM0 = 16;
    sbit  RXFWM0_bit at ETHRXWM.B16;
    const register unsigned short int RXEWM7 = 7;
    sbit  RXEWM7_bit at ETHRXWM.B7;
    const register unsigned short int RXEWM6 = 6;
    sbit  RXEWM6_bit at ETHRXWM.B6;
    const register unsigned short int RXEWM5 = 5;
    sbit  RXEWM5_bit at ETHRXWM.B5;
    const register unsigned short int RXEWM4 = 4;
    sbit  RXEWM4_bit at ETHRXWM.B4;
    const register unsigned short int RXEWM3 = 3;
    sbit  RXEWM3_bit at ETHRXWM.B3;
    const register unsigned short int RXEWM2 = 2;
    sbit  RXEWM2_bit at ETHRXWM.B2;
    const register unsigned short int RXEWM1 = 1;
    sbit  RXEWM1_bit at ETHRXWM.B1;
    const register unsigned short int RXEWM0 = 0;
    sbit  RXEWM0_bit at ETHRXWM.B0;

sfr atomic unsigned long   volatile ETHIEN           absolute 0xBF8890C0;
sfr unsigned long   volatile ETHIENCLR        absolute 0xBF8890C4;
sfr unsigned long   volatile ETHIENSET        absolute 0xBF8890C8;
sfr unsigned long   volatile ETHIENINV        absolute 0xBF8890CC;
    // ETHIEN bits
    const register unsigned short int TXBUSEIE = 14;
    sbit  TXBUSEIE_bit at ETHIEN.B14;
    const register unsigned short int RXBUSEIE = 13;
    sbit  RXBUSEIE_bit at ETHIEN.B13;
    const register unsigned short int EWMARKIE = 9;
    sbit  EWMARKIE_bit at ETHIEN.B9;
    const register unsigned short int FWMARKIE = 8;
    sbit  FWMARKIE_bit at ETHIEN.B8;
    const register unsigned short int RXDONEIE = 7;
    sbit  RXDONEIE_bit at ETHIEN.B7;
    const register unsigned short int PKTPENDIE = 6;
    sbit  PKTPENDIE_bit at ETHIEN.B6;
    const register unsigned short int RXACTIE = 5;
    sbit  RXACTIE_bit at ETHIEN.B5;
    const register unsigned short int TXDONEIE = 3;
    sbit  TXDONEIE_bit at ETHIEN.B3;
    const register unsigned short int TXABORTIE = 2;
    sbit  TXABORTIE_bit at ETHIEN.B2;
    const register unsigned short int RXBUFNAIE = 1;
    sbit  RXBUFNAIE_bit at ETHIEN.B1;
    const register unsigned short int RXOVFLWIE = 0;
    sbit  RXOVFLWIE_bit at ETHIEN.B0;

sfr atomic unsigned long   volatile ETHIRQ           absolute 0xBF8890D0;
sfr unsigned long   volatile ETHIRQCLR        absolute 0xBF8890D4;
sfr unsigned long   volatile ETHIRQSET        absolute 0xBF8890D8;
sfr unsigned long   volatile ETHIRQINV        absolute 0xBF8890DC;
    // ETHIRQ bits
    const register unsigned short int TXBUSE = 14;
    sbit  TXBUSE_bit at ETHIRQ.B14;
    const register unsigned short int RXBUSE = 13;
    sbit  RXBUSE_bit at ETHIRQ.B13;
    const register unsigned short int EWMARK = 9;
    sbit  EWMARK_bit at ETHIRQ.B9;
    const register unsigned short int FWMARK = 8;
    sbit  FWMARK_bit at ETHIRQ.B8;
    const register unsigned short int RXDONE = 7;
    sbit  RXDONE_bit at ETHIRQ.B7;
    const register unsigned short int PKTPEND = 6;
    sbit  PKTPEND_bit at ETHIRQ.B6;
    const register unsigned short int RXACT = 5;
    sbit  RXACT_bit at ETHIRQ.B5;
    const register unsigned short int TXDONE = 3;
    sbit  TXDONE_bit at ETHIRQ.B3;
    const register unsigned short int TXABORT = 2;
    sbit  TXABORT_bit at ETHIRQ.B2;
    const register unsigned short int RXBUFNA = 1;
    sbit  RXBUFNA_bit at ETHIRQ.B1;
    const register unsigned short int RXOVFLW = 0;
    sbit  RXOVFLW_bit at ETHIRQ.B0;

sfr atomic unsigned long   volatile ETHSTAT          absolute 0xBF8890E0;
sfr unsigned long   volatile ETHSTATCLR       absolute 0xBF8890E4;
sfr unsigned long   volatile ETHSTATSET       absolute 0xBF8890E8;
sfr unsigned long   volatile ETHSTATINV       absolute 0xBF8890EC;
    // ETHSTAT bits
    const register unsigned short int BUFCNT7 = 23;
    sbit  BUFCNT7_bit at ETHSTAT.B23;
    const register unsigned short int BUFCNT6 = 22;
    sbit  BUFCNT6_bit at ETHSTAT.B22;
    const register unsigned short int BUFCNT5 = 21;
    sbit  BUFCNT5_bit at ETHSTAT.B21;
    const register unsigned short int BUFCNT4 = 20;
    sbit  BUFCNT4_bit at ETHSTAT.B20;
    const register unsigned short int BUFCNT3 = 19;
    sbit  BUFCNT3_bit at ETHSTAT.B19;
    const register unsigned short int BUFCNT2 = 18;
    sbit  BUFCNT2_bit at ETHSTAT.B18;
    const register unsigned short int BUFCNT1 = 17;
    sbit  BUFCNT1_bit at ETHSTAT.B17;
    const register unsigned short int BUFCNT0 = 16;
    sbit  BUFCNT0_bit at ETHSTAT.B16;
    sbit  BUSY_ETHSTAT_bit at ETHSTAT.B7;
    const register unsigned short int TXBUSY = 6;
    sbit  TXBUSY_bit at ETHSTAT.B6;
    const register unsigned short int RXBUSY = 5;
    sbit  RXBUSY_bit at ETHSTAT.B5;

sfr atomic unsigned long   volatile ETHRXOVFLOW      absolute 0xBF889100;
sfr unsigned long   volatile ETHRXOVFLOWCLR   absolute 0xBF889104;
sfr unsigned long   volatile ETHRXOVFLOWSET   absolute 0xBF889108;
sfr unsigned long   volatile ETHRXOVFLOWINV   absolute 0xBF88910C;
    // ETHRXOVFLOW bits
    const register unsigned short int RXOVFLWCNT15 = 15;
    sbit  RXOVFLWCNT15_bit at ETHRXOVFLOW.B15;
    const register unsigned short int RXOVFLWCNT14 = 14;
    sbit  RXOVFLWCNT14_bit at ETHRXOVFLOW.B14;
    const register unsigned short int RXOVFLWCNT13 = 13;
    sbit  RXOVFLWCNT13_bit at ETHRXOVFLOW.B13;
    const register unsigned short int RXOVFLWCNT12 = 12;
    sbit  RXOVFLWCNT12_bit at ETHRXOVFLOW.B12;
    const register unsigned short int RXOVFLWCNT11 = 11;
    sbit  RXOVFLWCNT11_bit at ETHRXOVFLOW.B11;
    const register unsigned short int RXOVFLWCNT10 = 10;
    sbit  RXOVFLWCNT10_bit at ETHRXOVFLOW.B10;
    const register unsigned short int RXOVFLWCNT9 = 9;
    sbit  RXOVFLWCNT9_bit at ETHRXOVFLOW.B9;
    const register unsigned short int RXOVFLWCNT8 = 8;
    sbit  RXOVFLWCNT8_bit at ETHRXOVFLOW.B8;
    const register unsigned short int RXOVFLWCNT7 = 7;
    sbit  RXOVFLWCNT7_bit at ETHRXOVFLOW.B7;
    const register unsigned short int RXOVFLWCNT6 = 6;
    sbit  RXOVFLWCNT6_bit at ETHRXOVFLOW.B6;
    const register unsigned short int RXOVFLWCNT5 = 5;
    sbit  RXOVFLWCNT5_bit at ETHRXOVFLOW.B5;
    const register unsigned short int RXOVFLWCNT4 = 4;
    sbit  RXOVFLWCNT4_bit at ETHRXOVFLOW.B4;
    const register unsigned short int RXOVFLWCNT3 = 3;
    sbit  RXOVFLWCNT3_bit at ETHRXOVFLOW.B3;
    const register unsigned short int RXOVFLWCNT2 = 2;
    sbit  RXOVFLWCNT2_bit at ETHRXOVFLOW.B2;
    const register unsigned short int RXOVFLWCNT1 = 1;
    sbit  RXOVFLWCNT1_bit at ETHRXOVFLOW.B1;
    const register unsigned short int RXOVFLWCNT0 = 0;
    sbit  RXOVFLWCNT0_bit at ETHRXOVFLOW.B0;

sfr atomic unsigned long   volatile ETHFRMTXOK       absolute 0xBF889110;
sfr unsigned long   volatile ETHFRMTXOKCLR    absolute 0xBF889114;
sfr unsigned long   volatile ETHFRMTXOKSET    absolute 0xBF889118;
sfr unsigned long   volatile ETHFRMTXOKINV    absolute 0xBF88911C;
    // ETHFRMTXOK bits
    const register unsigned short int FRMTXOKCNT15 = 15;
    sbit  FRMTXOKCNT15_bit at ETHFRMTXOK.B15;
    const register unsigned short int FRMTXOKCNT14 = 14;
    sbit  FRMTXOKCNT14_bit at ETHFRMTXOK.B14;
    const register unsigned short int FRMTXOKCNT13 = 13;
    sbit  FRMTXOKCNT13_bit at ETHFRMTXOK.B13;
    const register unsigned short int FRMTXOKCNT12 = 12;
    sbit  FRMTXOKCNT12_bit at ETHFRMTXOK.B12;
    const register unsigned short int FRMTXOKCNT11 = 11;
    sbit  FRMTXOKCNT11_bit at ETHFRMTXOK.B11;
    const register unsigned short int FRMTXOKCNT10 = 10;
    sbit  FRMTXOKCNT10_bit at ETHFRMTXOK.B10;
    const register unsigned short int FRMTXOKCNT9 = 9;
    sbit  FRMTXOKCNT9_bit at ETHFRMTXOK.B9;
    const register unsigned short int FRMTXOKCNT8 = 8;
    sbit  FRMTXOKCNT8_bit at ETHFRMTXOK.B8;
    const register unsigned short int FRMTXOKCNT7 = 7;
    sbit  FRMTXOKCNT7_bit at ETHFRMTXOK.B7;
    const register unsigned short int FRMTXOKCNT6 = 6;
    sbit  FRMTXOKCNT6_bit at ETHFRMTXOK.B6;
    const register unsigned short int FRMTXOKCNT5 = 5;
    sbit  FRMTXOKCNT5_bit at ETHFRMTXOK.B5;
    const register unsigned short int FRMTXOKCNT4 = 4;
    sbit  FRMTXOKCNT4_bit at ETHFRMTXOK.B4;
    const register unsigned short int FRMTXOKCNT3 = 3;
    sbit  FRMTXOKCNT3_bit at ETHFRMTXOK.B3;
    const register unsigned short int FRMTXOKCNT2 = 2;
    sbit  FRMTXOKCNT2_bit at ETHFRMTXOK.B2;
    const register unsigned short int FRMTXOKCNT1 = 1;
    sbit  FRMTXOKCNT1_bit at ETHFRMTXOK.B1;
    const register unsigned short int FRMTXOKCNT0 = 0;
    sbit  FRMTXOKCNT0_bit at ETHFRMTXOK.B0;

sfr atomic unsigned long   volatile ETHSCOLFRM       absolute 0xBF889120;
sfr unsigned long   volatile ETHSCOLFRMCLR    absolute 0xBF889124;
sfr unsigned long   volatile ETHSCOLFRMSET    absolute 0xBF889128;
sfr unsigned long   volatile ETHSCOLFRMINV    absolute 0xBF88912C;
    // ETHSCOLFRM bits
    const register unsigned short int SCOLFRMCNT15 = 15;
    sbit  SCOLFRMCNT15_bit at ETHSCOLFRM.B15;
    const register unsigned short int SCOLFRMCNT14 = 14;
    sbit  SCOLFRMCNT14_bit at ETHSCOLFRM.B14;
    const register unsigned short int SCOLFRMCNT13 = 13;
    sbit  SCOLFRMCNT13_bit at ETHSCOLFRM.B13;
    const register unsigned short int SCOLFRMCNT12 = 12;
    sbit  SCOLFRMCNT12_bit at ETHSCOLFRM.B12;
    const register unsigned short int SCOLFRMCNT11 = 11;
    sbit  SCOLFRMCNT11_bit at ETHSCOLFRM.B11;
    const register unsigned short int SCOLFRMCNT10 = 10;
    sbit  SCOLFRMCNT10_bit at ETHSCOLFRM.B10;
    const register unsigned short int SCOLFRMCNT9 = 9;
    sbit  SCOLFRMCNT9_bit at ETHSCOLFRM.B9;
    const register unsigned short int SCOLFRMCNT8 = 8;
    sbit  SCOLFRMCNT8_bit at ETHSCOLFRM.B8;
    const register unsigned short int SCOLFRMCNT7 = 7;
    sbit  SCOLFRMCNT7_bit at ETHSCOLFRM.B7;
    const register unsigned short int SCOLFRMCNT6 = 6;
    sbit  SCOLFRMCNT6_bit at ETHSCOLFRM.B6;
    const register unsigned short int SCOLFRMCNT5 = 5;
    sbit  SCOLFRMCNT5_bit at ETHSCOLFRM.B5;
    const register unsigned short int SCOLFRMCNT4 = 4;
    sbit  SCOLFRMCNT4_bit at ETHSCOLFRM.B4;
    const register unsigned short int SCOLFRMCNT3 = 3;
    sbit  SCOLFRMCNT3_bit at ETHSCOLFRM.B3;
    const register unsigned short int SCOLFRMCNT2 = 2;
    sbit  SCOLFRMCNT2_bit at ETHSCOLFRM.B2;
    const register unsigned short int SCOLFRMCNT1 = 1;
    sbit  SCOLFRMCNT1_bit at ETHSCOLFRM.B1;
    const register unsigned short int SCOLFRMCNT0 = 0;
    sbit  SCOLFRMCNT0_bit at ETHSCOLFRM.B0;

sfr atomic unsigned long   volatile ETHMCOLFRM       absolute 0xBF889130;
sfr unsigned long   volatile ETHMCOLFRMCLR    absolute 0xBF889134;
sfr unsigned long   volatile ETHMCOLFRMSET    absolute 0xBF889138;
sfr unsigned long   volatile ETHMCOLFRMINV    absolute 0xBF88913C;
    // ETHMCOLFRM bits
    const register unsigned short int MCOLFRMCNT15 = 15;
    sbit  MCOLFRMCNT15_bit at ETHMCOLFRM.B15;
    const register unsigned short int MCOLFRMCNT14 = 14;
    sbit  MCOLFRMCNT14_bit at ETHMCOLFRM.B14;
    const register unsigned short int MCOLFRMCNT13 = 13;
    sbit  MCOLFRMCNT13_bit at ETHMCOLFRM.B13;
    const register unsigned short int MCOLFRMCNT12 = 12;
    sbit  MCOLFRMCNT12_bit at ETHMCOLFRM.B12;
    const register unsigned short int MCOLFRMCNT11 = 11;
    sbit  MCOLFRMCNT11_bit at ETHMCOLFRM.B11;
    const register unsigned short int MCOLFRMCNT10 = 10;
    sbit  MCOLFRMCNT10_bit at ETHMCOLFRM.B10;
    const register unsigned short int MCOLFRMCNT9 = 9;
    sbit  MCOLFRMCNT9_bit at ETHMCOLFRM.B9;
    const register unsigned short int MCOLFRMCNT8 = 8;
    sbit  MCOLFRMCNT8_bit at ETHMCOLFRM.B8;
    const register unsigned short int MCOLFRMCNT7 = 7;
    sbit  MCOLFRMCNT7_bit at ETHMCOLFRM.B7;
    const register unsigned short int MCOLFRMCNT6 = 6;
    sbit  MCOLFRMCNT6_bit at ETHMCOLFRM.B6;
    const register unsigned short int MCOLFRMCNT5 = 5;
    sbit  MCOLFRMCNT5_bit at ETHMCOLFRM.B5;
    const register unsigned short int MCOLFRMCNT4 = 4;
    sbit  MCOLFRMCNT4_bit at ETHMCOLFRM.B4;
    const register unsigned short int MCOLFRMCNT3 = 3;
    sbit  MCOLFRMCNT3_bit at ETHMCOLFRM.B3;
    const register unsigned short int MCOLFRMCNT2 = 2;
    sbit  MCOLFRMCNT2_bit at ETHMCOLFRM.B2;
    const register unsigned short int MCOLFRMCNT1 = 1;
    sbit  MCOLFRMCNT1_bit at ETHMCOLFRM.B1;
    const register unsigned short int MCOLFRMCNT0 = 0;
    sbit  MCOLFRMCNT0_bit at ETHMCOLFRM.B0;

sfr atomic unsigned long   volatile ETHFRMRXOK       absolute 0xBF889140;
sfr unsigned long   volatile ETHFRMRXOKCLR    absolute 0xBF889144;
sfr unsigned long   volatile ETHFRMRXOKSET    absolute 0xBF889148;
sfr unsigned long   volatile ETHFRMRXOKINV    absolute 0xBF88914C;
    // ETHFRMRXOK bits
    const register unsigned short int FRMRXOKCNT15 = 15;
    sbit  FRMRXOKCNT15_bit at ETHFRMRXOK.B15;
    const register unsigned short int FRMRXOKCNT14 = 14;
    sbit  FRMRXOKCNT14_bit at ETHFRMRXOK.B14;
    const register unsigned short int FRMRXOKCNT13 = 13;
    sbit  FRMRXOKCNT13_bit at ETHFRMRXOK.B13;
    const register unsigned short int FRMRXOKCNT12 = 12;
    sbit  FRMRXOKCNT12_bit at ETHFRMRXOK.B12;
    const register unsigned short int FRMRXOKCNT11 = 11;
    sbit  FRMRXOKCNT11_bit at ETHFRMRXOK.B11;
    const register unsigned short int FRMRXOKCNT10 = 10;
    sbit  FRMRXOKCNT10_bit at ETHFRMRXOK.B10;
    const register unsigned short int FRMRXOKCNT9 = 9;
    sbit  FRMRXOKCNT9_bit at ETHFRMRXOK.B9;
    const register unsigned short int FRMRXOKCNT8 = 8;
    sbit  FRMRXOKCNT8_bit at ETHFRMRXOK.B8;
    const register unsigned short int FRMRXOKCNT7 = 7;
    sbit  FRMRXOKCNT7_bit at ETHFRMRXOK.B7;
    const register unsigned short int FRMRXOKCNT6 = 6;
    sbit  FRMRXOKCNT6_bit at ETHFRMRXOK.B6;
    const register unsigned short int FRMRXOKCNT5 = 5;
    sbit  FRMRXOKCNT5_bit at ETHFRMRXOK.B5;
    const register unsigned short int FRMRXOKCNT4 = 4;
    sbit  FRMRXOKCNT4_bit at ETHFRMRXOK.B4;
    const register unsigned short int FRMRXOKCNT3 = 3;
    sbit  FRMRXOKCNT3_bit at ETHFRMRXOK.B3;
    const register unsigned short int FRMRXOKCNT2 = 2;
    sbit  FRMRXOKCNT2_bit at ETHFRMRXOK.B2;
    const register unsigned short int FRMRXOKCNT1 = 1;
    sbit  FRMRXOKCNT1_bit at ETHFRMRXOK.B1;
    const register unsigned short int FRMRXOKCNT0 = 0;
    sbit  FRMRXOKCNT0_bit at ETHFRMRXOK.B0;

sfr atomic unsigned long   volatile ETHFCSERR        absolute 0xBF889150;
sfr unsigned long   volatile ETHFCSERRCLR     absolute 0xBF889154;
sfr unsigned long   volatile ETHFCSERRSET     absolute 0xBF889158;
sfr unsigned long   volatile ETHFCSERRINV     absolute 0xBF88915C;
    // ETHFCSERR bits
    const register unsigned short int FCSERRCNT15 = 15;
    sbit  FCSERRCNT15_bit at ETHFCSERR.B15;
    const register unsigned short int FCSERRCNT14 = 14;
    sbit  FCSERRCNT14_bit at ETHFCSERR.B14;
    const register unsigned short int FCSERRCNT13 = 13;
    sbit  FCSERRCNT13_bit at ETHFCSERR.B13;
    const register unsigned short int FCSERRCNT12 = 12;
    sbit  FCSERRCNT12_bit at ETHFCSERR.B12;
    const register unsigned short int FCSERRCNT11 = 11;
    sbit  FCSERRCNT11_bit at ETHFCSERR.B11;
    const register unsigned short int FCSERRCNT10 = 10;
    sbit  FCSERRCNT10_bit at ETHFCSERR.B10;
    const register unsigned short int FCSERRCNT9 = 9;
    sbit  FCSERRCNT9_bit at ETHFCSERR.B9;
    const register unsigned short int FCSERRCNT8 = 8;
    sbit  FCSERRCNT8_bit at ETHFCSERR.B8;
    const register unsigned short int FCSERRCNT7 = 7;
    sbit  FCSERRCNT7_bit at ETHFCSERR.B7;
    const register unsigned short int FCSERRCNT6 = 6;
    sbit  FCSERRCNT6_bit at ETHFCSERR.B6;
    const register unsigned short int FCSERRCNT5 = 5;
    sbit  FCSERRCNT5_bit at ETHFCSERR.B5;
    const register unsigned short int FCSERRCNT4 = 4;
    sbit  FCSERRCNT4_bit at ETHFCSERR.B4;
    const register unsigned short int FCSERRCNT3 = 3;
    sbit  FCSERRCNT3_bit at ETHFCSERR.B3;
    const register unsigned short int FCSERRCNT2 = 2;
    sbit  FCSERRCNT2_bit at ETHFCSERR.B2;
    const register unsigned short int FCSERRCNT1 = 1;
    sbit  FCSERRCNT1_bit at ETHFCSERR.B1;
    const register unsigned short int FCSERRCNT0 = 0;
    sbit  FCSERRCNT0_bit at ETHFCSERR.B0;

sfr atomic unsigned long   volatile ETHALGNERR       absolute 0xBF889160;
sfr unsigned long   volatile ETHALGNERRCLR    absolute 0xBF889164;
sfr unsigned long   volatile ETHALGNERRSET    absolute 0xBF889168;
sfr unsigned long   volatile ETHALGNERRINV    absolute 0xBF88916C;
    // ETHALGNERR bits
    const register unsigned short int ALGNERRCNT15 = 15;
    sbit  ALGNERRCNT15_bit at ETHALGNERR.B15;
    const register unsigned short int ALGNERRCNT14 = 14;
    sbit  ALGNERRCNT14_bit at ETHALGNERR.B14;
    const register unsigned short int ALGNERRCNT13 = 13;
    sbit  ALGNERRCNT13_bit at ETHALGNERR.B13;
    const register unsigned short int ALGNERRCNT12 = 12;
    sbit  ALGNERRCNT12_bit at ETHALGNERR.B12;
    const register unsigned short int ALGNERRCNT11 = 11;
    sbit  ALGNERRCNT11_bit at ETHALGNERR.B11;
    const register unsigned short int ALGNERRCNT10 = 10;
    sbit  ALGNERRCNT10_bit at ETHALGNERR.B10;
    const register unsigned short int ALGNERRCNT9 = 9;
    sbit  ALGNERRCNT9_bit at ETHALGNERR.B9;
    const register unsigned short int ALGNERRCNT8 = 8;
    sbit  ALGNERRCNT8_bit at ETHALGNERR.B8;
    const register unsigned short int ALGNERRCNT7 = 7;
    sbit  ALGNERRCNT7_bit at ETHALGNERR.B7;
    const register unsigned short int ALGNERRCNT6 = 6;
    sbit  ALGNERRCNT6_bit at ETHALGNERR.B6;
    const register unsigned short int ALGNERRCNT5 = 5;
    sbit  ALGNERRCNT5_bit at ETHALGNERR.B5;
    const register unsigned short int ALGNERRCNT4 = 4;
    sbit  ALGNERRCNT4_bit at ETHALGNERR.B4;
    const register unsigned short int ALGNERRCNT3 = 3;
    sbit  ALGNERRCNT3_bit at ETHALGNERR.B3;
    const register unsigned short int ALGNERRCNT2 = 2;
    sbit  ALGNERRCNT2_bit at ETHALGNERR.B2;
    const register unsigned short int ALGNERRCNT1 = 1;
    sbit  ALGNERRCNT1_bit at ETHALGNERR.B1;
    const register unsigned short int ALGNERRCNT0 = 0;
    sbit  ALGNERRCNT0_bit at ETHALGNERR.B0;

sfr atomic unsigned long   volatile EMAC1CFG1        absolute 0xBF889200;
sfr unsigned long   volatile EMACxCFG1        absolute 0xBF889200;
sfr unsigned long   volatile EMACxCFG1CLR     absolute 0xBF889204;
sfr unsigned long   volatile EMACxCFG1SET     absolute 0xBF889208;
sfr unsigned long   volatile EMACxCFG1INV     absolute 0xBF88920C;
sfr unsigned long   volatile EMAC1CFG1CLR     absolute 0xBF889204;
sfr unsigned long   volatile EMAC1CFG1SET     absolute 0xBF889208;
sfr unsigned long   volatile EMAC1CFG1INV     absolute 0xBF88920C;
    // EMAC1CFG1 bits
    const register unsigned short int SOFTRESET = 15;
    sbit  SOFTRESET_bit at EMAC1CFG1.B15;
    const register unsigned short int SIMRESET = 14;
    sbit  SIMRESET_bit at EMAC1CFG1.B14;
    const register unsigned short int RESETRMCS = 11;
    sbit  RESETRMCS_bit at EMAC1CFG1.B11;
    const register unsigned short int RESETRFUN = 10;
    sbit  RESETRFUN_bit at EMAC1CFG1.B10;
    const register unsigned short int RESETTMCS = 9;
    sbit  RESETTMCS_bit at EMAC1CFG1.B9;
    const register unsigned short int RESETTFUN = 8;
    sbit  RESETTFUN_bit at EMAC1CFG1.B8;
    const register unsigned short int LOOPBACK = 4;
    sbit  LOOPBACK_bit at EMAC1CFG1.B4;
    const register unsigned short int TXPAUSE = 3;
    sbit  TXPAUSE_bit at EMAC1CFG1.B3;
    const register unsigned short int RXPAUSE = 2;
    sbit  RXPAUSE_bit at EMAC1CFG1.B2;
    const register unsigned short int PASSALL = 1;
    sbit  PASSALL_bit at EMAC1CFG1.B1;
    const register unsigned short int RXENABLE = 0;
    sbit  RXENABLE_bit at EMAC1CFG1.B0;

sfr atomic unsigned long   volatile EMAC1CFG2        absolute 0xBF889210;
sfr unsigned long   volatile EMACxCFG2        absolute 0xBF889210;
sfr unsigned long   volatile EMACxCFG2CLR     absolute 0xBF889214;
sfr unsigned long   volatile EMACxCFG2SET     absolute 0xBF889218;
sfr unsigned long   volatile EMACxCFG2INV     absolute 0xBF88921C;
sfr unsigned long   volatile EMAC1CFG2CLR     absolute 0xBF889214;
sfr unsigned long   volatile EMAC1CFG2SET     absolute 0xBF889218;
sfr unsigned long   volatile EMAC1CFG2INV     absolute 0xBF88921C;
    // EMAC1CFG2 bits
    const register unsigned short int EXCESSDFR = 14;
    sbit  EXCESSDFR_bit at EMAC1CFG2.B14;
    const register unsigned short int BPNOBKOFF = 13;
    sbit  BPNOBKOFF_bit at EMAC1CFG2.B13;
    const register unsigned short int NOBKOFF = 12;
    sbit  NOBKOFF_bit at EMAC1CFG2.B12;
    const register unsigned short int LONGPRE = 9;
    sbit  LONGPRE_bit at EMAC1CFG2.B9;
    const register unsigned short int PUREPRE = 8;
    sbit  PUREPRE_bit at EMAC1CFG2.B8;
    const register unsigned short int AUTOPAD = 7;
    sbit  AUTOPAD_bit at EMAC1CFG2.B7;
    const register unsigned short int VLANPAD = 6;
    sbit  VLANPAD_bit at EMAC1CFG2.B6;
    const register unsigned short int PADENABLE = 5;
    sbit  PADENABLE_bit at EMAC1CFG2.B5;
    const register unsigned short int CRCENABLE = 4;
    sbit  CRCENABLE_bit at EMAC1CFG2.B4;
    const register unsigned short int DELAYCRC = 3;
    sbit  DELAYCRC_bit at EMAC1CFG2.B3;
    const register unsigned short int HUGEFRM = 2;
    sbit  HUGEFRM_bit at EMAC1CFG2.B2;
    const register unsigned short int LENGTHCK = 1;
    sbit  LENGTHCK_bit at EMAC1CFG2.B1;
    const register unsigned short int FULLDPLX = 0;
    sbit  FULLDPLX_bit at EMAC1CFG2.B0;

sfr atomic unsigned long   volatile EMAC1IPGT        absolute 0xBF889220;
sfr unsigned long   volatile EMACxIPGT        absolute 0xBF889220;
sfr unsigned long   volatile EMACxIPGTCLR     absolute 0xBF889224;
sfr unsigned long   volatile EMACxIPGTSET     absolute 0xBF889228;
sfr unsigned long   volatile EMACxIPGTINV     absolute 0xBF88922C;
sfr unsigned long   volatile EMAC1IPGTCLR     absolute 0xBF889224;
sfr unsigned long   volatile EMAC1IPGTSET     absolute 0xBF889228;
sfr unsigned long   volatile EMAC1IPGTINV     absolute 0xBF88922C;
    // EMAC1IPGT bits
    const register unsigned short int B2BIPKTGP6 = 6;
    sbit  B2BIPKTGP6_bit at EMAC1IPGT.B6;
    const register unsigned short int B2BIPKTGP5 = 5;
    sbit  B2BIPKTGP5_bit at EMAC1IPGT.B5;
    const register unsigned short int B2BIPKTGP4 = 4;
    sbit  B2BIPKTGP4_bit at EMAC1IPGT.B4;
    const register unsigned short int B2BIPKTGP3 = 3;
    sbit  B2BIPKTGP3_bit at EMAC1IPGT.B3;
    const register unsigned short int B2BIPKTGP2 = 2;
    sbit  B2BIPKTGP2_bit at EMAC1IPGT.B2;
    const register unsigned short int B2BIPKTGP1 = 1;
    sbit  B2BIPKTGP1_bit at EMAC1IPGT.B1;
    const register unsigned short int B2BIPKTGP0 = 0;
    sbit  B2BIPKTGP0_bit at EMAC1IPGT.B0;

sfr atomic unsigned long   volatile EMAC1IPGR        absolute 0xBF889230;
sfr unsigned long   volatile EMACxIPGR        absolute 0xBF889230;
sfr unsigned long   volatile EMACxIPGRCLR     absolute 0xBF889234;
sfr unsigned long   volatile EMACxIPGRSET     absolute 0xBF889238;
sfr unsigned long   volatile EMACxIPGRINV     absolute 0xBF88923C;
sfr unsigned long   volatile EMAC1IPGRCLR     absolute 0xBF889234;
sfr unsigned long   volatile EMAC1IPGRSET     absolute 0xBF889238;
sfr unsigned long   volatile EMAC1IPGRINV     absolute 0xBF88923C;
    // EMAC1IPGR bits
    const register unsigned short int NB2BIPKTGP16 = 14;
    sbit  NB2BIPKTGP16_bit at EMAC1IPGR.B14;
    const register unsigned short int NB2BIPKTGP15 = 13;
    sbit  NB2BIPKTGP15_bit at EMAC1IPGR.B13;
    const register unsigned short int NB2BIPKTGP14 = 12;
    sbit  NB2BIPKTGP14_bit at EMAC1IPGR.B12;
    const register unsigned short int NB2BIPKTGP13 = 11;
    sbit  NB2BIPKTGP13_bit at EMAC1IPGR.B11;
    const register unsigned short int NB2BIPKTGP12 = 10;
    sbit  NB2BIPKTGP12_bit at EMAC1IPGR.B10;
    const register unsigned short int NB2BIPKTGP11 = 9;
    sbit  NB2BIPKTGP11_bit at EMAC1IPGR.B9;
    const register unsigned short int NB2BIPKTGP10 = 8;
    sbit  NB2BIPKTGP10_bit at EMAC1IPGR.B8;
    const register unsigned short int NB2BIPKTGP26 = 6;
    sbit  NB2BIPKTGP26_bit at EMAC1IPGR.B6;
    const register unsigned short int NB2BIPKTGP25 = 5;
    sbit  NB2BIPKTGP25_bit at EMAC1IPGR.B5;
    const register unsigned short int NB2BIPKTGP24 = 4;
    sbit  NB2BIPKTGP24_bit at EMAC1IPGR.B4;
    const register unsigned short int NB2BIPKTGP23 = 3;
    sbit  NB2BIPKTGP23_bit at EMAC1IPGR.B3;
    const register unsigned short int NB2BIPKTGP22 = 2;
    sbit  NB2BIPKTGP22_bit at EMAC1IPGR.B2;
    const register unsigned short int NB2BIPKTGP21 = 1;
    sbit  NB2BIPKTGP21_bit at EMAC1IPGR.B1;
    const register unsigned short int NB2BIPKTGP20 = 0;
    sbit  NB2BIPKTGP20_bit at EMAC1IPGR.B0;

sfr atomic unsigned long   volatile EMAC1CLRT        absolute 0xBF889240;
sfr unsigned long   volatile EMACxCLRT        absolute 0xBF889240;
sfr unsigned long   volatile EMACxCLRTCLR     absolute 0xBF889244;
sfr unsigned long   volatile EMACxCLRTSET     absolute 0xBF889248;
sfr unsigned long   volatile EMACxCLRTINV     absolute 0xBF88924C;
sfr unsigned long   volatile EMAC1CLRTCLR     absolute 0xBF889244;
sfr unsigned long   volatile EMAC1CLRTSET     absolute 0xBF889248;
sfr unsigned long   volatile EMAC1CLRTINV     absolute 0xBF88924C;
    // EMAC1CLRT bits
    const register unsigned short int CWINDOW5 = 13;
    sbit  CWINDOW5_bit at EMAC1CLRT.B13;
    const register unsigned short int CWINDOW4 = 12;
    sbit  CWINDOW4_bit at EMAC1CLRT.B12;
    const register unsigned short int CWINDOW3 = 11;
    sbit  CWINDOW3_bit at EMAC1CLRT.B11;
    const register unsigned short int CWINDOW2 = 10;
    sbit  CWINDOW2_bit at EMAC1CLRT.B10;
    const register unsigned short int CWINDOW1 = 9;
    sbit  CWINDOW1_bit at EMAC1CLRT.B9;
    const register unsigned short int CWINDOW0 = 8;
    sbit  CWINDOW0_bit at EMAC1CLRT.B8;
    const register unsigned short int RETX3 = 3;
    sbit  RETX3_bit at EMAC1CLRT.B3;
    const register unsigned short int RETX2 = 2;
    sbit  RETX2_bit at EMAC1CLRT.B2;
    const register unsigned short int RETX1 = 1;
    sbit  RETX1_bit at EMAC1CLRT.B1;
    const register unsigned short int RETX0 = 0;
    sbit  RETX0_bit at EMAC1CLRT.B0;

sfr atomic unsigned long   volatile EMAC1MAXF        absolute 0xBF889250;
sfr unsigned long   volatile EMACxMAXF        absolute 0xBF889250;
sfr unsigned long   volatile EMACxMAXFCLR     absolute 0xBF889254;
sfr unsigned long   volatile EMACxMAXFSET     absolute 0xBF889258;
sfr unsigned long   volatile EMACxMAXFINV     absolute 0xBF88925C;
sfr unsigned long   volatile EMAC1MAXFCLR     absolute 0xBF889254;
sfr unsigned long   volatile EMAC1MAXFSET     absolute 0xBF889258;
sfr unsigned long   volatile EMAC1MAXFINV     absolute 0xBF88925C;
    // EMAC1MAXF bits
    const register unsigned short int MACMAXF15 = 15;
    sbit  MACMAXF15_bit at EMAC1MAXF.B15;
    const register unsigned short int MACMAXF14 = 14;
    sbit  MACMAXF14_bit at EMAC1MAXF.B14;
    const register unsigned short int MACMAXF13 = 13;
    sbit  MACMAXF13_bit at EMAC1MAXF.B13;
    const register unsigned short int MACMAXF12 = 12;
    sbit  MACMAXF12_bit at EMAC1MAXF.B12;
    const register unsigned short int MACMAXF11 = 11;
    sbit  MACMAXF11_bit at EMAC1MAXF.B11;
    const register unsigned short int MACMAXF10 = 10;
    sbit  MACMAXF10_bit at EMAC1MAXF.B10;
    const register unsigned short int MACMAXF9 = 9;
    sbit  MACMAXF9_bit at EMAC1MAXF.B9;
    const register unsigned short int MACMAXF8 = 8;
    sbit  MACMAXF8_bit at EMAC1MAXF.B8;
    const register unsigned short int MACMAXF7 = 7;
    sbit  MACMAXF7_bit at EMAC1MAXF.B7;
    const register unsigned short int MACMAXF6 = 6;
    sbit  MACMAXF6_bit at EMAC1MAXF.B6;
    const register unsigned short int MACMAXF5 = 5;
    sbit  MACMAXF5_bit at EMAC1MAXF.B5;
    const register unsigned short int MACMAXF4 = 4;
    sbit  MACMAXF4_bit at EMAC1MAXF.B4;
    const register unsigned short int MACMAXF3 = 3;
    sbit  MACMAXF3_bit at EMAC1MAXF.B3;
    const register unsigned short int MACMAXF2 = 2;
    sbit  MACMAXF2_bit at EMAC1MAXF.B2;
    const register unsigned short int MACMAXF1 = 1;
    sbit  MACMAXF1_bit at EMAC1MAXF.B1;
    const register unsigned short int MACMAXF0 = 0;
    sbit  MACMAXF0_bit at EMAC1MAXF.B0;

sfr atomic unsigned long   volatile EMAC1SUPP        absolute 0xBF889260;
sfr unsigned long   volatile EMACxSUPP        absolute 0xBF889260;
sfr unsigned long   volatile EMACxSUPPCLR     absolute 0xBF889264;
sfr unsigned long   volatile EMACxSUPPSET     absolute 0xBF889268;
sfr unsigned long   volatile EMACxSUPPINV     absolute 0xBF88926C;
sfr unsigned long   volatile EMAC1SUPPCLR     absolute 0xBF889264;
sfr unsigned long   volatile EMAC1SUPPSET     absolute 0xBF889268;
sfr unsigned long   volatile EMAC1SUPPINV     absolute 0xBF88926C;
    // EMAC1SUPP bits
    const register unsigned short int RESETRMII = 11;
    sbit  RESETRMII_bit at EMAC1SUPP.B11;
    const register unsigned short int SPEEDRMII = 8;
    sbit  SPEEDRMII_bit at EMAC1SUPP.B8;

sfr atomic unsigned long   volatile EMAC1TEST        absolute 0xBF889270;
sfr unsigned long   volatile EMACxTEST        absolute 0xBF889270;
sfr unsigned long   volatile EMACxTESTCLR     absolute 0xBF889274;
sfr unsigned long   volatile EMACxTESTSET     absolute 0xBF889278;
sfr unsigned long   volatile EMACxTESTINV     absolute 0xBF88927C;
sfr unsigned long   volatile EMAC1TESTCLR     absolute 0xBF889274;
sfr unsigned long   volatile EMAC1TESTSET     absolute 0xBF889278;
sfr unsigned long   volatile EMAC1TESTINV     absolute 0xBF88927C;
    // EMAC1TEST bits
    const register unsigned short int TESTBP = 2;
    sbit  TESTBP_bit at EMAC1TEST.B2;
    const register unsigned short int TESTPAUSE = 1;
    sbit  TESTPAUSE_bit at EMAC1TEST.B1;
    const register unsigned short int SHRTQNTA = 0;
    sbit  SHRTQNTA_bit at EMAC1TEST.B0;

sfr atomic unsigned long   volatile EMAC1MCFG        absolute 0xBF889280;
sfr unsigned long   volatile EMACxMCFG        absolute 0xBF889280;
sfr unsigned long   volatile EMACxMCFGCLR     absolute 0xBF889284;
sfr unsigned long   volatile EMACxMCFGSET     absolute 0xBF889288;
sfr unsigned long   volatile EMACxMCFGINV     absolute 0xBF88928C;
sfr unsigned long   volatile EMAC1MCFGCLR     absolute 0xBF889284;
sfr unsigned long   volatile EMAC1MCFGSET     absolute 0xBF889288;
sfr unsigned long   volatile EMAC1MCFGINV     absolute 0xBF88928C;
    // EMAC1MCFG bits
    const register unsigned short int RESETMGMT = 15;
    sbit  RESETMGMT_bit at EMAC1MCFG.B15;
    const register unsigned short int CLKSEL3 = 5;
    sbit  CLKSEL3_bit at EMAC1MCFG.B5;
    const register unsigned short int CLKSEL2 = 4;
    sbit  CLKSEL2_bit at EMAC1MCFG.B4;
    const register unsigned short int CLKSEL1 = 3;
    sbit  CLKSEL1_bit at EMAC1MCFG.B3;
    const register unsigned short int CLKSEL0 = 2;
    sbit  CLKSEL0_bit at EMAC1MCFG.B2;
    const register unsigned short int NOPRE = 1;
    sbit  NOPRE_bit at EMAC1MCFG.B1;
    const register unsigned short int SCANINC = 0;
    sbit  SCANINC_bit at EMAC1MCFG.B0;

sfr atomic unsigned long   volatile EMAC1MCMD        absolute 0xBF889290;
sfr unsigned long   volatile EMACxMCMD        absolute 0xBF889290;
sfr unsigned long   volatile EMACxMCMDCLR     absolute 0xBF889294;
sfr unsigned long   volatile EMACxMCMDSET     absolute 0xBF889298;
sfr unsigned long   volatile EMACxMCMDINV     absolute 0xBF88929C;
sfr unsigned long   volatile EMAC1MCMDCLR     absolute 0xBF889294;
sfr unsigned long   volatile EMAC1MCMDSET     absolute 0xBF889298;
sfr unsigned long   volatile EMAC1MCMDINV     absolute 0xBF88929C;
    // EMAC1MCMD bits
    const register unsigned short int SCAN = 1;
    sbit  SCAN_bit at EMAC1MCMD.B1;
    const register unsigned short int READ_ = 0;
    sbit  READ_bit at EMAC1MCMD.B0;

sfr atomic unsigned long   volatile EMAC1MADR        absolute 0xBF8892A0;
sfr unsigned long   volatile EMACxMADR        absolute 0xBF8892A0;
sfr unsigned long   volatile EMACxMADRCLR     absolute 0xBF8892A4;
sfr unsigned long   volatile EMACxMADRSET     absolute 0xBF8892A8;
sfr unsigned long   volatile EMACxMADRINV     absolute 0xBF8892AC;
sfr unsigned long   volatile EMAC1MADRCLR     absolute 0xBF8892A4;
sfr unsigned long   volatile EMAC1MADRSET     absolute 0xBF8892A8;
sfr unsigned long   volatile EMAC1MADRINV     absolute 0xBF8892AC;
    // EMAC1MADR bits
    const register unsigned short int PHYADDR4 = 12;
    sbit  PHYADDR4_bit at EMAC1MADR.B12;
    const register unsigned short int PHYADDR3 = 11;
    sbit  PHYADDR3_bit at EMAC1MADR.B11;
    const register unsigned short int PHYADDR2 = 10;
    sbit  PHYADDR2_bit at EMAC1MADR.B10;
    const register unsigned short int PHYADDR1 = 9;
    sbit  PHYADDR1_bit at EMAC1MADR.B9;
    const register unsigned short int PHYADDR0 = 8;
    sbit  PHYADDR0_bit at EMAC1MADR.B8;
    const register unsigned short int REGADDR4 = 4;
    sbit  REGADDR4_bit at EMAC1MADR.B4;
    const register unsigned short int REGADDR3 = 3;
    sbit  REGADDR3_bit at EMAC1MADR.B3;
    const register unsigned short int REGADDR2 = 2;
    sbit  REGADDR2_bit at EMAC1MADR.B2;
    const register unsigned short int REGADDR1 = 1;
    sbit  REGADDR1_bit at EMAC1MADR.B1;
    const register unsigned short int REGADDR0 = 0;
    sbit  REGADDR0_bit at EMAC1MADR.B0;

sfr atomic unsigned long   volatile EMAC1MWTD        absolute 0xBF8892B0;
sfr unsigned long   volatile EMACxMWTD        absolute 0xBF8892B0;
sfr unsigned long   volatile EMACxMWTDCLR     absolute 0xBF8892B4;
sfr unsigned long   volatile EMACxMWTDSET     absolute 0xBF8892B8;
sfr unsigned long   volatile EMACxMWTDINV     absolute 0xBF8892BC;
sfr unsigned long   volatile EMAC1MWTDCLR     absolute 0xBF8892B4;
sfr unsigned long   volatile EMAC1MWTDSET     absolute 0xBF8892B8;
sfr unsigned long   volatile EMAC1MWTDINV     absolute 0xBF8892BC;
    // EMAC1MWTD bits
    const register unsigned short int PEMACMWTD15 = 15;
    sbit  PEMACMWTD15_bit at EMAC1MWTD.B15;
    const register unsigned short int PEMACMWTD14 = 14;
    sbit  PEMACMWTD14_bit at EMAC1MWTD.B14;
    const register unsigned short int PEMACMWTD13 = 13;
    sbit  PEMACMWTD13_bit at EMAC1MWTD.B13;
    const register unsigned short int PEMACMWTD12 = 12;
    sbit  PEMACMWTD12_bit at EMAC1MWTD.B12;
    const register unsigned short int PEMACMWTD11 = 11;
    sbit  PEMACMWTD11_bit at EMAC1MWTD.B11;
    const register unsigned short int PEMACMWTD10 = 10;
    sbit  PEMACMWTD10_bit at EMAC1MWTD.B10;
    const register unsigned short int PEMACMWTD9 = 9;
    sbit  PEMACMWTD9_bit at EMAC1MWTD.B9;
    const register unsigned short int PEMACMWTD8 = 8;
    sbit  PEMACMWTD8_bit at EMAC1MWTD.B8;
    const register unsigned short int PEMACMWTD7 = 7;
    sbit  PEMACMWTD7_bit at EMAC1MWTD.B7;
    const register unsigned short int PEMACMWTD6 = 6;
    sbit  PEMACMWTD6_bit at EMAC1MWTD.B6;
    const register unsigned short int PEMACMWTD5 = 5;
    sbit  PEMACMWTD5_bit at EMAC1MWTD.B5;
    const register unsigned short int PEMACMWTD4 = 4;
    sbit  PEMACMWTD4_bit at EMAC1MWTD.B4;
    const register unsigned short int PEMACMWTD3 = 3;
    sbit  PEMACMWTD3_bit at EMAC1MWTD.B3;
    const register unsigned short int PEMACMWTD2 = 2;
    sbit  PEMACMWTD2_bit at EMAC1MWTD.B2;
    const register unsigned short int PEMACMWTD1 = 1;
    sbit  PEMACMWTD1_bit at EMAC1MWTD.B1;
    const register unsigned short int PEMACMWTD0 = 0;
    sbit  PEMACMWTD0_bit at EMAC1MWTD.B0;

sfr atomic unsigned long   volatile EMAC1MRDD        absolute 0xBF8892C0;
sfr unsigned long   volatile EMACxMRDD        absolute 0xBF8892C0;
sfr unsigned long   volatile EMACxMRDDCLR     absolute 0xBF8892C4;
sfr unsigned long   volatile EMACxMRDDSET     absolute 0xBF8892C8;
sfr unsigned long   volatile EMACxMRDDINV     absolute 0xBF8892CC;
sfr unsigned long   volatile EMAC1MRDDCLR     absolute 0xBF8892C4;
sfr unsigned long   volatile EMAC1MRDDSET     absolute 0xBF8892C8;
sfr unsigned long   volatile EMAC1MRDDINV     absolute 0xBF8892CC;
    // EMAC1MRDD bits
    const register unsigned short int MRDD15 = 15;
    sbit  MRDD15_bit at EMAC1MRDD.B15;
    const register unsigned short int MRDD14 = 14;
    sbit  MRDD14_bit at EMAC1MRDD.B14;
    const register unsigned short int MRDD13 = 13;
    sbit  MRDD13_bit at EMAC1MRDD.B13;
    const register unsigned short int MRDD12 = 12;
    sbit  MRDD12_bit at EMAC1MRDD.B12;
    const register unsigned short int MRDD11 = 11;
    sbit  MRDD11_bit at EMAC1MRDD.B11;
    const register unsigned short int MRDD10 = 10;
    sbit  MRDD10_bit at EMAC1MRDD.B10;
    const register unsigned short int MRDD9 = 9;
    sbit  MRDD9_bit at EMAC1MRDD.B9;
    const register unsigned short int MRDD8 = 8;
    sbit  MRDD8_bit at EMAC1MRDD.B8;
    const register unsigned short int MRDD7 = 7;
    sbit  MRDD7_bit at EMAC1MRDD.B7;
    const register unsigned short int MRDD6 = 6;
    sbit  MRDD6_bit at EMAC1MRDD.B6;
    const register unsigned short int MRDD5 = 5;
    sbit  MRDD5_bit at EMAC1MRDD.B5;
    const register unsigned short int MRDD4 = 4;
    sbit  MRDD4_bit at EMAC1MRDD.B4;
    const register unsigned short int MRDD3 = 3;
    sbit  MRDD3_bit at EMAC1MRDD.B3;
    const register unsigned short int MRDD2 = 2;
    sbit  MRDD2_bit at EMAC1MRDD.B2;
    const register unsigned short int MRDD1 = 1;
    sbit  MRDD1_bit at EMAC1MRDD.B1;
    const register unsigned short int MRDD0 = 0;
    sbit  MRDD0_bit at EMAC1MRDD.B0;

sfr atomic unsigned long   volatile EMAC1MIND        absolute 0xBF8892D0;
sfr unsigned long   volatile EMACxMIND        absolute 0xBF8892D0;
sfr unsigned long   volatile EMACxMINDCLR     absolute 0xBF8892D4;
sfr unsigned long   volatile EMACxMINDSET     absolute 0xBF8892D8;
sfr unsigned long   volatile EMACxMINDINV     absolute 0xBF8892DC;
sfr unsigned long   volatile EMAC1MINDCLR     absolute 0xBF8892D4;
sfr unsigned long   volatile EMAC1MINDSET     absolute 0xBF8892D8;
sfr unsigned long   volatile EMAC1MINDINV     absolute 0xBF8892DC;
    // EMAC1MIND bits
    const register unsigned short int LINKFAIL = 3;
    sbit  LINKFAIL_bit at EMAC1MIND.B3;
    const register unsigned short int NOTVALID = 2;
    sbit  NOTVALID_bit at EMAC1MIND.B2;
    sbit  SCAN_EMAC1MIND_bit at EMAC1MIND.B1;
    const register unsigned short int MIIMBUSY = 0;
    sbit  MIIMBUSY_bit at EMAC1MIND.B0;

sfr atomic unsigned long   volatile EMAC1SA0         absolute 0xBF889300;
sfr unsigned long   volatile EMACxSA0         absolute 0xBF889300;
sfr unsigned long   volatile EMACxSA0CLR      absolute 0xBF889304;
sfr unsigned long   volatile EMACxSA0SET      absolute 0xBF889308;
sfr unsigned long   volatile EMACxSA0INV      absolute 0xBF88930C;
sfr unsigned long   volatile EMAC1SA0CLR      absolute 0xBF889304;
sfr unsigned long   volatile EMAC1SA0SET      absolute 0xBF889308;
sfr unsigned long   volatile EMAC1SA0INV      absolute 0xBF88930C;
    // EMAC1SA0 bits
    const register unsigned short int STNADDR67 = 15;
    sbit  STNADDR67_bit at EMAC1SA0.B15;
    const register unsigned short int STNADDR66 = 14;
    sbit  STNADDR66_bit at EMAC1SA0.B14;
    const register unsigned short int STNADDR65 = 13;
    sbit  STNADDR65_bit at EMAC1SA0.B13;
    const register unsigned short int STNADDR64 = 12;
    sbit  STNADDR64_bit at EMAC1SA0.B12;
    const register unsigned short int STNADDR63 = 11;
    sbit  STNADDR63_bit at EMAC1SA0.B11;
    const register unsigned short int STNADDR62 = 10;
    sbit  STNADDR62_bit at EMAC1SA0.B10;
    const register unsigned short int STNADDR61 = 9;
    sbit  STNADDR61_bit at EMAC1SA0.B9;
    const register unsigned short int STNADDR60 = 8;
    sbit  STNADDR60_bit at EMAC1SA0.B8;
    const register unsigned short int STNADDR57 = 7;
    sbit  STNADDR57_bit at EMAC1SA0.B7;
    const register unsigned short int STNADDR56 = 6;
    sbit  STNADDR56_bit at EMAC1SA0.B6;
    const register unsigned short int STNADDR55 = 5;
    sbit  STNADDR55_bit at EMAC1SA0.B5;
    const register unsigned short int STNADDR54 = 4;
    sbit  STNADDR54_bit at EMAC1SA0.B4;
    const register unsigned short int STNADDR53 = 3;
    sbit  STNADDR53_bit at EMAC1SA0.B3;
    const register unsigned short int STNADDR52 = 2;
    sbit  STNADDR52_bit at EMAC1SA0.B2;
    const register unsigned short int STNADDR51 = 1;
    sbit  STNADDR51_bit at EMAC1SA0.B1;
    const register unsigned short int STNADDR50 = 0;
    sbit  STNADDR50_bit at EMAC1SA0.B0;

sfr atomic unsigned long   volatile EMAC1SA1         absolute 0xBF889310;
sfr unsigned long   volatile EMACxSA1         absolute 0xBF889310;
sfr unsigned long   volatile EMACxSA1CLR      absolute 0xBF889314;
sfr unsigned long   volatile EMACxSA1SET      absolute 0xBF889318;
sfr unsigned long   volatile EMACxSA1INV      absolute 0xBF88931C;
sfr unsigned long   volatile EMAC1SA1CLR      absolute 0xBF889314;
sfr unsigned long   volatile EMAC1SA1SET      absolute 0xBF889318;
sfr unsigned long   volatile EMAC1SA1INV      absolute 0xBF88931C;
    // EMAC1SA1 bits
    const register unsigned short int STNADDR47 = 15;
    sbit  STNADDR47_bit at EMAC1SA1.B15;
    const register unsigned short int STNADDR46 = 14;
    sbit  STNADDR46_bit at EMAC1SA1.B14;
    const register unsigned short int STNADDR45 = 13;
    sbit  STNADDR45_bit at EMAC1SA1.B13;
    const register unsigned short int STNADDR44 = 12;
    sbit  STNADDR44_bit at EMAC1SA1.B12;
    const register unsigned short int STNADDR43 = 11;
    sbit  STNADDR43_bit at EMAC1SA1.B11;
    const register unsigned short int STNADDR42 = 10;
    sbit  STNADDR42_bit at EMAC1SA1.B10;
    const register unsigned short int STNADDR41 = 9;
    sbit  STNADDR41_bit at EMAC1SA1.B9;
    const register unsigned short int STNADDR40 = 8;
    sbit  STNADDR40_bit at EMAC1SA1.B8;
    const register unsigned short int STNADDR37 = 7;
    sbit  STNADDR37_bit at EMAC1SA1.B7;
    const register unsigned short int STNADDR36 = 6;
    sbit  STNADDR36_bit at EMAC1SA1.B6;
    const register unsigned short int STNADDR35 = 5;
    sbit  STNADDR35_bit at EMAC1SA1.B5;
    const register unsigned short int STNADDR34 = 4;
    sbit  STNADDR34_bit at EMAC1SA1.B4;
    const register unsigned short int STNADDR33 = 3;
    sbit  STNADDR33_bit at EMAC1SA1.B3;
    const register unsigned short int STNADDR32 = 2;
    sbit  STNADDR32_bit at EMAC1SA1.B2;
    const register unsigned short int STNADDR31 = 1;
    sbit  STNADDR31_bit at EMAC1SA1.B1;
    const register unsigned short int STNADDR30 = 0;
    sbit  STNADDR30_bit at EMAC1SA1.B0;

sfr atomic unsigned long   volatile EMAC1SA2         absolute 0xBF889320;
sfr unsigned long   volatile EMACxSA2         absolute 0xBF889320;
sfr unsigned long   volatile EMACxSA2CLR      absolute 0xBF889324;
sfr unsigned long   volatile EMACxSA2SET      absolute 0xBF889328;
sfr unsigned long   volatile EMACxSA2INV      absolute 0xBF88932C;
sfr unsigned long   volatile EMAC1SA2CLR      absolute 0xBF889324;
sfr unsigned long   volatile EMAC1SA2SET      absolute 0xBF889328;
sfr unsigned long   volatile EMAC1SA2INV      absolute 0xBF88932C;
    // EMAC1SA2 bits
    const register unsigned short int STNADDR27 = 15;
    sbit  STNADDR27_bit at EMAC1SA2.B15;
    const register unsigned short int STNADDR26 = 14;
    sbit  STNADDR26_bit at EMAC1SA2.B14;
    const register unsigned short int STNADDR25 = 13;
    sbit  STNADDR25_bit at EMAC1SA2.B13;
    const register unsigned short int STNADDR24 = 12;
    sbit  STNADDR24_bit at EMAC1SA2.B12;
    const register unsigned short int STNADDR23 = 11;
    sbit  STNADDR23_bit at EMAC1SA2.B11;
    const register unsigned short int STNADDR22 = 10;
    sbit  STNADDR22_bit at EMAC1SA2.B10;
    const register unsigned short int STNADDR21 = 9;
    sbit  STNADDR21_bit at EMAC1SA2.B9;
    const register unsigned short int STNADDR20 = 8;
    sbit  STNADDR20_bit at EMAC1SA2.B8;
    const register unsigned short int STNADDR17 = 7;
    sbit  STNADDR17_bit at EMAC1SA2.B7;
    const register unsigned short int STNADDR16 = 6;
    sbit  STNADDR16_bit at EMAC1SA2.B6;
    const register unsigned short int STNADDR15 = 5;
    sbit  STNADDR15_bit at EMAC1SA2.B5;
    const register unsigned short int STNADDR14 = 4;
    sbit  STNADDR14_bit at EMAC1SA2.B4;
    const register unsigned short int STNADDR13 = 3;
    sbit  STNADDR13_bit at EMAC1SA2.B3;
    const register unsigned short int STNADDR12 = 2;
    sbit  STNADDR12_bit at EMAC1SA2.B2;
    const register unsigned short int STNADDR11 = 1;
    sbit  STNADDR11_bit at EMAC1SA2.B1;
    const register unsigned short int STNADDR10 = 0;
    sbit  STNADDR10_bit at EMAC1SA2.B0;


    // Start of structures implementation


typedef struct tagWDTCONBITS {
union {
  struct {
    unsigned WDTCLR:1;
    unsigned :1;
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
    unsigned :3;
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
    unsigned :4;
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
    unsigned :3;
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
    unsigned :4;
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

typedef struct tagI2C3CONBITS {
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
} typeI2C3CONBITS;
sfr atomic volatile typeI2C3CONBITS I2C3CONbits absolute 0xBF805000;

typedef struct tagI2C3STATBITS {
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
} typeI2C3STATBITS;
sfr atomic volatile typeI2C3STATBITS I2C3STATbits absolute 0xBF805010;
sfr atomic volatile typeI2C3STATBITS I2C3ADDbits absolute 0xBF805020;
sfr atomic volatile typeI2C3STATBITS I2C3MSKbits absolute 0xBF805030;
sfr atomic volatile typeI2C3STATBITS I2C3BRGbits absolute 0xBF805040;
sfr atomic volatile typeI2C3STATBITS I2C3TRNbits absolute 0xBF805050;
sfr volatile typeI2C3STATBITS I2C3RCVbits absolute 0xBF805060;

typedef struct tagI2C4CONBITS {
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
} typeI2C4CONBITS;
sfr atomic volatile typeI2C4CONBITS I2C4CONbits absolute 0xBF805100;

typedef struct tagI2C4STATBITS {
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
} typeI2C4STATBITS;
sfr atomic volatile typeI2C4STATBITS I2C4STATbits absolute 0xBF805110;
sfr atomic volatile typeI2C4STATBITS I2C4ADDbits absolute 0xBF805120;
sfr atomic volatile typeI2C4STATBITS I2C4MSKbits absolute 0xBF805130;
sfr atomic volatile typeI2C4STATBITS I2C4BRGbits absolute 0xBF805140;
sfr atomic volatile typeI2C4STATBITS I2C4TRNbits absolute 0xBF805150;
sfr volatile typeI2C4STATBITS I2C4RCVbits absolute 0xBF805160;

typedef struct tagI2C5CONBITS {
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
} typeI2C5CONBITS;
sfr atomic volatile typeI2C5CONBITS I2C5CONbits absolute 0xBF805200;

typedef struct tagI2C5STATBITS {
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
} typeI2C5STATBITS;
sfr atomic volatile typeI2C5STATBITS I2C5STATbits absolute 0xBF805210;
sfr atomic volatile typeI2C5STATBITS I2C5ADDbits absolute 0xBF805220;
sfr atomic volatile typeI2C5STATBITS I2C5MSKbits absolute 0xBF805230;
sfr atomic volatile typeI2C5STATBITS I2C5BRGbits absolute 0xBF805240;
sfr atomic volatile typeI2C5STATBITS I2C5TRNbits absolute 0xBF805250;
sfr volatile typeI2C5STATBITS I2C5RCVbits absolute 0xBF805260;

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
sfr atomic volatile typeI2C1CONBITS I2C1CONbits absolute 0xBF805300;

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
sfr atomic volatile typeI2C1STATBITS I2C1STATbits absolute 0xBF805310;
sfr atomic volatile typeI2C1STATBITS I2C1ADDbits absolute 0xBF805320;
sfr atomic volatile typeI2C1STATBITS I2C1MSKbits absolute 0xBF805330;
sfr atomic volatile typeI2C1STATBITS I2C1BRGbits absolute 0xBF805340;
sfr atomic volatile typeI2C1STATBITS I2C1TRNbits absolute 0xBF805350;
sfr volatile typeI2C1STATBITS I2C1RCVbits absolute 0xBF805360;

typedef struct tagSPI3CONBITS {
union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned :1;
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
    unsigned :6;
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
} typeSPI3CONBITS;
sfr atomic volatile typeSPI3CONBITS SPI3CONbits absolute 0xBF805800;

typedef struct tagSPI3STATBITS {
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
    unsigned :4;
    unsigned TXBUFELM:5;
    unsigned :3;
    unsigned RXBUFELM:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeSPI3STATBITS;
sfr atomic volatile typeSPI3STATBITS SPI3STATbits absolute 0xBF805810;
sfr volatile typeSPI3STATBITS SPI3BUFbits absolute 0xBF805820;
sfr atomic volatile typeSPI3STATBITS SPI3BRGbits absolute 0xBF805830;

typedef struct tagSPI2CONBITS {
union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned :1;
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
    unsigned :6;
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
    unsigned :4;
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

typedef struct tagSPI4CONBITS {
union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned :1;
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
    unsigned :6;
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
} typeSPI4CONBITS;
sfr atomic volatile typeSPI4CONBITS SPI4CONbits absolute 0xBF805C00;

typedef struct tagSPI4STATBITS {
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
    unsigned :4;
    unsigned TXBUFELM:5;
    unsigned :3;
    unsigned RXBUFELM:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeSPI4STATBITS;
sfr atomic volatile typeSPI4STATBITS SPI4STATbits absolute 0xBF805C10;
sfr volatile typeSPI4STATBITS SPI4BUFbits absolute 0xBF805C20;
sfr atomic volatile typeSPI4STATBITS SPI4BRGbits absolute 0xBF805C30;

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

typedef struct tagU4MODEBITS {
union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned :4;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
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
} typeU4MODEBITS;
sfr atomic volatile typeU4MODEBITS U4MODEbits absolute 0xBF806200;
sfr volatile typeU4MODEBITS U4MODECLRbits absolute 0xBF806204;
sfr volatile typeU4MODEBITS U4MODESETbits absolute 0xBF806208;
sfr volatile typeU4MODEBITS U4MODEINVbits absolute 0xBF80620C;

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
} typeU4STABITS;
sfr atomic volatile typeU4STABITS U4STAbits absolute 0xBF806210;
sfr volatile typeU4STABITS U4STACLRbits absolute 0xBF806214;
sfr volatile typeU4STABITS U4STASETbits absolute 0xBF806218;
sfr volatile typeU4STABITS U4STAINVbits absolute 0xBF80621C;
sfr volatile typeU4STABITS U4TXREGbits absolute 0xBF806220;
sfr volatile typeU4STABITS U4RXREGbits absolute 0xBF806230;
sfr atomic volatile typeU4STABITS U4BRGbits absolute 0xBF806240;
sfr volatile typeU4STABITS U4BRGCLRbits absolute 0xBF806244;
sfr volatile typeU4STABITS U4BRGSETbits absolute 0xBF806248;
sfr volatile typeU4STABITS U4BRGINVbits absolute 0xBF80624C;

typedef struct tagU3MODEBITS {
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
} typeU3MODEBITS;
sfr atomic volatile typeU3MODEBITS U3MODEbits absolute 0xBF806400;
sfr volatile typeU3MODEBITS U3MODECLRbits absolute 0xBF806404;
sfr volatile typeU3MODEBITS U3MODESETbits absolute 0xBF806408;
sfr volatile typeU3MODEBITS U3MODEINVbits absolute 0xBF80640C;

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
} typeU3STABITS;
sfr atomic volatile typeU3STABITS U3STAbits absolute 0xBF806410;
sfr volatile typeU3STABITS U3STACLRbits absolute 0xBF806414;
sfr volatile typeU3STABITS U3STASETbits absolute 0xBF806418;
sfr volatile typeU3STABITS U3STAINVbits absolute 0xBF80641C;
sfr volatile typeU3STABITS U3TXREGbits absolute 0xBF806420;
sfr volatile typeU3STABITS U3RXREGbits absolute 0xBF806430;
sfr atomic volatile typeU3STABITS U3BRGbits absolute 0xBF806440;
sfr volatile typeU3STABITS U3BRGCLRbits absolute 0xBF806444;
sfr volatile typeU3STABITS U3BRGSETbits absolute 0xBF806448;
sfr volatile typeU3STABITS U3BRGINVbits absolute 0xBF80644C;

typedef struct tagU6MODEBITS {
union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned :4;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
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
} typeU6MODEBITS;
sfr atomic volatile typeU6MODEBITS U6MODEbits absolute 0xBF806600;
sfr volatile typeU6MODEBITS U6MODECLRbits absolute 0xBF806604;
sfr volatile typeU6MODEBITS U6MODESETbits absolute 0xBF806608;
sfr volatile typeU6MODEBITS U6MODEINVbits absolute 0xBF80660C;

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
} typeU6STABITS;
sfr atomic volatile typeU6STABITS U6STAbits absolute 0xBF806610;
sfr volatile typeU6STABITS U6STACLRbits absolute 0xBF806614;
sfr volatile typeU6STABITS U6STASETbits absolute 0xBF806618;
sfr volatile typeU6STABITS U6STAINVbits absolute 0xBF80661C;
sfr volatile typeU6STABITS U6TXREGbits absolute 0xBF806620;
sfr volatile typeU6STABITS U6RXREGbits absolute 0xBF806630;
sfr atomic volatile typeU6STABITS U6BRGbits absolute 0xBF806640;
sfr volatile typeU6STABITS U6BRGCLRbits absolute 0xBF806644;
sfr volatile typeU6STABITS U6BRGSETbits absolute 0xBF806648;
sfr volatile typeU6STABITS U6BRGINVbits absolute 0xBF80664C;

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
sfr atomic volatile typeU2MODEBITS U2MODEbits absolute 0xBF806800;

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
sfr atomic volatile typeU2STABITS U2STAbits absolute 0xBF806810;

typedef struct tagU5MODEBITS {
union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned :4;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
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
} typeU5MODEBITS;
sfr atomic volatile typeU5MODEBITS U5MODEbits absolute 0xBF806A00;
sfr volatile typeU5MODEBITS U5MODECLRbits absolute 0xBF806A04;
sfr volatile typeU5MODEBITS U5MODESETbits absolute 0xBF806A08;
sfr volatile typeU5MODEBITS U5MODEINVbits absolute 0xBF806A0C;

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
} typeU5STABITS;
sfr atomic volatile typeU5STABITS U5STAbits absolute 0xBF806A10;
sfr volatile typeU5STABITS U5STACLRbits absolute 0xBF806A14;
sfr volatile typeU5STABITS U5STASETbits absolute 0xBF806A18;
sfr volatile typeU5STABITS U5STAINVbits absolute 0xBF806A1C;
sfr volatile typeU5STABITS U5TXREGbits absolute 0xBF806A20;
sfr volatile typeU5STABITS U5RXREGbits absolute 0xBF806A30;
sfr atomic volatile typeU5STABITS U5BRGbits absolute 0xBF806A40;
sfr volatile typeU5STABITS U5BRGCLRbits absolute 0xBF806A44;
sfr volatile typeU5STABITS U5BRGSETbits absolute 0xBF806A48;
sfr volatile typeU5STABITS U5BRGINVbits absolute 0xBF806A4C;

typedef struct tagPMCONBITS {
union {
  struct {
    unsigned RDSP:1;
    unsigned WRSP:1;
    unsigned :1;
    unsigned CS1P:1;
    unsigned CS2P:1;
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
    unsigned MODE16:1;
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
    unsigned CS2:1;
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

typedef struct tagAD1PCFGBITS {
union {
  struct {
    unsigned PCFG:16;
  };
  struct {
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
  };
  struct {
    unsigned w:32;
  };
};
} typeAD1PCFGBITS;
sfr atomic volatile typeAD1PCFGBITS AD1PCFGbits absolute 0xBF809060;
sfr volatile typeAD1PCFGBITS AD1PCFGCLRbits absolute 0xBF809064;
sfr volatile typeAD1PCFGBITS AD1PCFGSETbits absolute 0xBF809068;
sfr volatile typeAD1PCFGBITS AD1PCFGINVbits absolute 0xBF80906C;
sfr volatile typeAD1PCFGBITS ADC1BUF0bits absolute 0xBF809070;
sfr volatile typeAD1PCFGBITS ADC1BUF1bits absolute 0xBF809080;
sfr volatile typeAD1PCFGBITS ADC1BUF2bits absolute 0xBF809090;
sfr volatile typeAD1PCFGBITS ADC1BUF3bits absolute 0xBF8090A0;
sfr volatile typeAD1PCFGBITS ADC1BUF4bits absolute 0xBF8090B0;
sfr volatile typeAD1PCFGBITS ADC1BUF5bits absolute 0xBF8090C0;
sfr volatile typeAD1PCFGBITS ADC1BUF6bits absolute 0xBF8090D0;
sfr volatile typeAD1PCFGBITS ADC1BUF7bits absolute 0xBF8090E0;
sfr volatile typeAD1PCFGBITS ADC1BUF8bits absolute 0xBF8090F0;
sfr volatile typeAD1PCFGBITS ADC1BUF9bits absolute 0xBF809100;
sfr volatile typeAD1PCFGBITS ADC1BUFAbits absolute 0xBF809110;
sfr volatile typeAD1PCFGBITS ADC1BUFBbits absolute 0xBF809120;
sfr volatile typeAD1PCFGBITS ADC1BUFCbits absolute 0xBF809130;
sfr volatile typeAD1PCFGBITS ADC1BUFDbits absolute 0xBF809140;
sfr volatile typeAD1PCFGBITS ADC1BUFEbits absolute 0xBF809150;
sfr volatile typeAD1PCFGBITS ADC1BUFFbits absolute 0xBF809160;

typedef struct tagCVRCONBITS {
union {
  struct {
    unsigned CVR:4;
    unsigned CVRSS:1;
    unsigned CVRR:1;
    unsigned CVROE:1;
    unsigned :1;
    unsigned BGSEL:2;
    unsigned VREFSEL:1;
    unsigned :4;
    unsigned ON:1;
  };
  struct {
    unsigned CVR0:1;
    unsigned CVR1:1;
    unsigned CVR2:1;
    unsigned CVR3:1;
    unsigned :4;
    unsigned BGSEL0:1;
    unsigned BGSEL1:1;
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

typedef struct tagCMSTATBITS {
union {
  struct {
    unsigned C1OUT:1;
    unsigned C2OUT:1;
    unsigned :11;
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
    unsigned :1;
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

typedef struct tagDDPCONBITS {
union {
  unsigned TDOEN:1;
  unsigned :1;
  unsigned TROEN:1;
  unsigned JTAGEN:1;
};
} typeDDPCONBITS;
sfr volatile typeDDPCONBITS DDPCONbits absolute 0xBF80F200;

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

typedef struct tag_DDPSTATBITS {
union {
  unsigned :1;
  unsigned APIFUL:1;
  unsigned APOFUL:1;
  unsigned STRFUL:1;
  unsigned :5;
  unsigned APIOV:1;
  unsigned APOOV:1;
  unsigned :5;
  unsigned STOV:16;
};
} type_DDPSTATBITS;
sfr volatile type_DDPSTATBITS _DDPSTATbits absolute 0xBF880140;
sfr atomic volatile type_DDPSTATBITS _STRObits absolute 0xBF880170;
sfr volatile type_DDPSTATBITS _STROCLRbits absolute 0xBF880174;
sfr volatile type_DDPSTATBITS _STROSETbits absolute 0xBF880178;
sfr volatile type_DDPSTATBITS _STROINVbits absolute 0xBF88017C;
sfr atomic volatile type_DDPSTATBITS _APPObits absolute 0xBF880180;
sfr volatile type_DDPSTATBITS _APPOCLRbits absolute 0xBF880184;
sfr volatile type_DDPSTATBITS _APPOSETbits absolute 0xBF880188;
sfr volatile type_DDPSTATBITS _APPOINVbits absolute 0xBF88018C;
sfr volatile type_DDPSTATBITS _APPIbits absolute 0xBF880190;

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
    unsigned :1;
    unsigned FRZ:1;
    unsigned :1;
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
    unsigned IC1IF:1;
    unsigned OC1IF:1;
    unsigned INT1IF:1;
    unsigned T2IF:1;
    unsigned IC2IF:1;
    unsigned OC2IF:1;
    unsigned INT2IF:1;
    unsigned T3IF:1;
    unsigned IC3IF:1;
    unsigned OC3IF:1;
    unsigned INT3IF:1;
    unsigned T4IF:1;
    unsigned IC4IF:1;
    unsigned OC4IF:1;
    unsigned INT4IF:1;
    unsigned T5IF:1;
    unsigned IC5IF:1;
    unsigned OC5IF:1;
    unsigned :3;
    unsigned U1EIF:1;
    unsigned U1RXIF:1;
    unsigned U1TXIF:1;
    unsigned I2C1BIF:1;
    unsigned I2C1SIF:1;
    unsigned I2C1MIF:1;
  };
  struct {
    unsigned :26;
    unsigned U1AEIF:1;
    unsigned U1ARXIF:1;
    unsigned U1ATXIF:1;
  };
  struct {
    unsigned :26;
    unsigned SPI3EIF:1;
    unsigned SPI3RXIF:1;
    unsigned SPI3TXIF:1;
  };
  struct {
    unsigned :26;
    unsigned SPI1AEIF:1;
    unsigned SPI1ARXIF:1;
    unsigned SPI1ATXIF:1;
  };
  struct {
    unsigned :26;
    unsigned I2C3BIF:1;
    unsigned I2C3SIF:1;
    unsigned I2C3MIF:1;
  };
  struct {
    unsigned :26;
    unsigned I2C1ABIF:1;
    unsigned I2C1ASIF:1;
    unsigned I2C1AMIF:1;
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
    unsigned CNIF:1;
    unsigned AD1IF:1;
    unsigned PMPIF:1;
    unsigned CMP1IF:1;
    unsigned CMP2IF:1;
    unsigned U3EIF:1;
    unsigned U3RXIF:1;
    unsigned U3TXIF:1;
    unsigned U2EIF:1;
    unsigned U2RXIF:1;
    unsigned U2TXIF:1;
    unsigned I2C2BIF:1;
    unsigned I2C2SIF:1;
    unsigned I2C2MIF:1;
    unsigned FSCMIF:1;
    unsigned RTCCIF:1;
    unsigned DMA0IF:1;
    unsigned DMA1IF:1;
    unsigned DMA2IF:1;
    unsigned DMA3IF:1;
    unsigned :4;
    unsigned FCEIF:1;
    unsigned USBIF:1;
    unsigned CAN1IF:1;
    unsigned CAN2IF:1;
    unsigned ETHIF:1;
    unsigned IC1EIF:1;
    unsigned IC2EIF:1;
    unsigned IC3EIF:1;
  };
  struct {
    unsigned :5;
    unsigned U2AEIF:1;
    unsigned U2ARXIF:1;
    unsigned U2ATXIF:1;
    unsigned U3AEIF:1;
    unsigned U3ARXIF:1;
    unsigned U3ATXIF:1;
  };
  struct {
    unsigned :5;
    unsigned SPI2EIF:1;
    unsigned SPI2RXIF:1;
    unsigned SPI2TXIF:1;
    unsigned SPI4EIF:1;
    unsigned SPI4RXIF:1;
    unsigned SPI4TXIF:1;
  };
  struct {
    unsigned :5;
    unsigned SPI2AEIF:1;
    unsigned SPI2ARXIF:1;
    unsigned SPI2ATXIF:1;
    unsigned SPI3AEIF:1;
    unsigned SPI3ARXIF:1;
    unsigned SPI3ATXIF:1;
  };
  struct {
    unsigned :5;
    unsigned I2C4BIF:1;
    unsigned I2C4SIF:1;
    unsigned I2C4MIF:1;
    unsigned I2C5BIF:1;
    unsigned I2C5SIF:1;
    unsigned I2C5MIF:1;
  };
  struct {
    unsigned :5;
    unsigned I2C2ABIF:1;
    unsigned I2C2ASIF:1;
    unsigned I2C2AMIF:1;
    unsigned I2C3ABIF:1;
    unsigned I2C3ASIF:1;
    unsigned I2C3AMIF:1;
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

typedef struct tagIFS2BITS {
union {
  struct {
    unsigned IC4EIF:1;
    unsigned IC5EIF:1;
    unsigned PMPEIF:1;
    unsigned U1BEIF:1;
    unsigned U1BRXIF:1;
    unsigned U1BTXIF:1;
    unsigned U2BEIF:1;
    unsigned U2BRXIF:1;
    unsigned U2BTXIF:1;
    unsigned U3BEIF:1;
    unsigned U3BRXIF:1;
    unsigned U3BTXIF:1;
  };
  struct {
    unsigned :3;
    unsigned U4EIF:1;
    unsigned U4RXIF:1;
    unsigned U4TXIF:1;
    unsigned U6EIF:1;
    unsigned U6RXIF:1;
    unsigned U6TXIF:1;
    unsigned U5EIF:1;
    unsigned U5RXIF:1;
    unsigned U5TXIF:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeIFS2BITS;
sfr atomic volatile typeIFS2BITS IFS2bits absolute 0xBF881050;
sfr volatile typeIFS2BITS IFS2CLRbits absolute 0xBF881054;
sfr volatile typeIFS2BITS IFS2SETbits absolute 0xBF881058;
sfr volatile typeIFS2BITS IFS2INVbits absolute 0xBF88105C;

typedef struct tagIEC0BITS {
union {
  struct {
    unsigned CTIE:1;
    unsigned CS0IE:1;
    unsigned CS1IE:1;
    unsigned INT0IE:1;
    unsigned T1IE:1;
    unsigned IC1IE:1;
    unsigned OC1IE:1;
    unsigned INT1IE:1;
    unsigned T2IE:1;
    unsigned IC2IE:1;
    unsigned OC2IE:1;
    unsigned INT2IE:1;
    unsigned T3IE:1;
    unsigned IC3IE:1;
    unsigned OC3IE:1;
    unsigned INT3IE:1;
    unsigned T4IE:1;
    unsigned IC4IE:1;
    unsigned OC4IE:1;
    unsigned INT4IE:1;
    unsigned T5IE:1;
    unsigned IC5IE:1;
    unsigned OC5IE:1;
    unsigned :3;
    unsigned U1EIE:1;
    unsigned U1RXIE:1;
    unsigned U1TXIE:1;
    unsigned I2C1BIE:1;
    unsigned I2C1SIE:1;
    unsigned I2C1MIE:1;
  };
  struct {
    unsigned :26;
    unsigned U1AEIE:1;
    unsigned U1ARXIE:1;
    unsigned U1ATXIE:1;
  };
  struct {
    unsigned :26;
    unsigned SPI3EIE:1;
    unsigned SPI3RXIE:1;
    unsigned SPI3TXIE:1;
  };
  struct {
    unsigned :26;
    unsigned SPI1AEIE:1;
    unsigned SPI1ARXIE:1;
    unsigned SPI1ATXIE:1;
  };
  struct {
    unsigned :26;
    unsigned I2C3BIE:1;
    unsigned I2C3SIE:1;
    unsigned I2C3MIE:1;
  };
  struct {
    unsigned :26;
    unsigned I2C1ABIE:1;
    unsigned I2C1ASIE:1;
    unsigned I2C1AMIE:1;
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
    unsigned CNIE:1;
    unsigned AD1IE:1;
    unsigned PMPIE:1;
    unsigned CMP1IE:1;
    unsigned CMP2IE:1;
    unsigned U3EIE:1;
    unsigned U3RXIE:1;
    unsigned U3TXIE:1;
    unsigned U2EIE:1;
    unsigned U2RXIE:1;
    unsigned U2TXIE:1;
    unsigned I2C2BIE:1;
    unsigned I2C2SIE:1;
    unsigned I2C2MIE:1;
    unsigned FSCMIE:1;
    unsigned RTCCIE:1;
    unsigned DMA0IE:1;
    unsigned DMA1IE:1;
    unsigned DMA2IE:1;
    unsigned DMA3IE:1;
    unsigned :4;
    unsigned FCEIE:1;
    unsigned USBIE:1;
    unsigned CAN1IE:1;
    unsigned CAN2IE:1;
    unsigned ETHIE:1;
    unsigned IC1EIE:1;
    unsigned IC2EIE:1;
    unsigned IC3EIE:1;
  };
  struct {
    unsigned :5;
    unsigned U2AEIE:1;
    unsigned U2ARXIE:1;
    unsigned U2ATXIE:1;
    unsigned U3AEIE:1;
    unsigned U3ARXIE:1;
    unsigned U3ATXIE:1;
  };
  struct {
    unsigned :5;
    unsigned SPI2EIE:1;
    unsigned SPI2RXIE:1;
    unsigned SPI2TXIE:1;
    unsigned SPI4EIE:1;
    unsigned SPI4RXIE:1;
    unsigned SPI4TXIE:1;
  };
  struct {
    unsigned :5;
    unsigned SPI2AEIE:1;
    unsigned SPI2ARXIE:1;
    unsigned SPI2ATXIE:1;
    unsigned SPI3AEIE:1;
    unsigned SPI3ARXIE:1;
    unsigned SPI3ATXIE:1;
  };
  struct {
    unsigned :5;
    unsigned I2C4BIE:1;
    unsigned I2C4SIE:1;
    unsigned I2C4MIE:1;
    unsigned I2C5BIE:1;
    unsigned I2C5SIE:1;
    unsigned I2C5MIE:1;
  };
  struct {
    unsigned :5;
    unsigned I2C2ABIE:1;
    unsigned I2C2ASIE:1;
    unsigned I2C2AMIE:1;
    unsigned I2C3ABIE:1;
    unsigned I2C3ASIE:1;
    unsigned I2C3AMIE:1;
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

typedef struct tagIEC2BITS {
union {
  struct {
    unsigned IC4EIE:1;
    unsigned IC5EIE:1;
    unsigned PMPEIE:1;
    unsigned U1BEIE:1;
    unsigned U1BRXIE:1;
    unsigned U1BTXIE:1;
    unsigned U2BEIE:1;
    unsigned U2BRXIE:1;
    unsigned U2BTXIE:1;
    unsigned U3BEIE:1;
    unsigned U3BRXIE:1;
    unsigned U3BTXIE:1;
  };
  struct {
    unsigned :3;
    unsigned U4EIE:1;
    unsigned U4RXIE:1;
    unsigned U4TXIE:1;
    unsigned U6EIE:1;
    unsigned U6RXIE:1;
    unsigned U6TXIE:1;
    unsigned U5EIE:1;
    unsigned U5RXIE:1;
    unsigned U5TXIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeIEC2BITS;
sfr atomic volatile typeIEC2BITS IEC2bits absolute 0xBF881080;
sfr volatile typeIEC2BITS IEC2CLRbits absolute 0xBF881084;
sfr volatile typeIEC2BITS IEC2SETbits absolute 0xBF881088;
sfr volatile typeIEC2BITS IEC2INVbits absolute 0xBF88108C;

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
    unsigned U1IS:2;
    unsigned U1IP:3;
    unsigned :3;
    unsigned I2C1IS:2;
    unsigned I2C1IP:3;
    unsigned :3;
    unsigned CNIS:2;
    unsigned CNIP:3;
    unsigned :3;
    unsigned AD1IS:2;
    unsigned AD1IP:3;
  };
  struct {
    unsigned U1AIS:2;
    unsigned U1AIP:3;
  };
  struct {
    unsigned SPI3IS:2;
    unsigned SPI3IP:3;
  };
  struct {
    unsigned SPI1AIS:2;
    unsigned SPI1AIP:3;
  };
  struct {
    unsigned I2C3IS:2;
    unsigned I2C3IP:3;
  };
  struct {
    unsigned I2C1AIS:2;
    unsigned I2C1AIP:3;
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
    unsigned PMPIS:2;
    unsigned PMPIP:3;
    unsigned :3;
    unsigned CMP1IS:2;
    unsigned CMP1IP:3;
    unsigned :3;
    unsigned CMP2IS:2;
    unsigned CMP2IP:3;
    unsigned :3;
    unsigned U3IS:2;
    unsigned U3IP:3;
  };
  struct {
    unsigned :24;
    unsigned U2AIS:2;
    unsigned U2AIP:3;
  };
  struct {
    unsigned :24;
    unsigned SPI2IS:2;
    unsigned SPI2IP:3;
  };
  struct {
    unsigned :24;
    unsigned SPI2AIS:2;
    unsigned SPI2AIP:3;
  };
  struct {
    unsigned :24;
    unsigned I2C4IS:2;
    unsigned I2C4IP:3;
  };
  struct {
    unsigned :24;
    unsigned I2C2AIS:2;
    unsigned I2C2AIP:3;
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
    unsigned U2IS:2;
    unsigned U2IP:3;
    unsigned :3;
    unsigned I2C2IS:2;
    unsigned I2C2IP:3;
    unsigned :3;
    unsigned FSCMIS:2;
    unsigned FSCMIP:3;
    unsigned :3;
    unsigned RTCCIS:2;
    unsigned RTCCIP:3;
  };
  struct {
    unsigned U3AIS:2;
    unsigned U3AIP:3;
  };
  struct {
    unsigned SPI4IS:2;
    unsigned SPI4IP:3;
  };
  struct {
    unsigned SPI3AIS:2;
    unsigned SPI3AIP:3;
  };
  struct {
    unsigned I2C5IS:2;
    unsigned I2C5IP:3;
  };
  struct {
    unsigned I2C3AIS:2;
    unsigned I2C3AIP:3;
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
} typeIPC9BITS;
sfr atomic volatile typeIPC9BITS IPC9bits absolute 0xBF881120;
sfr volatile typeIPC9BITS IPC9CLRbits absolute 0xBF881124;
sfr volatile typeIPC9BITS IPC9SETbits absolute 0xBF881128;
sfr volatile typeIPC9BITS IPC9INVbits absolute 0xBF88112C;

typedef struct tagIPC10BITS {
union {
  unsigned w:32;
};
} typeIPC10BITS;
sfr atomic volatile typeIPC10BITS IPC10bits absolute 0xBF881130;
sfr volatile typeIPC10BITS IPC10CLRbits absolute 0xBF881134;
sfr volatile typeIPC10BITS IPC10SETbits absolute 0xBF881138;
sfr volatile typeIPC10BITS IPC10INVbits absolute 0xBF88113C;

typedef struct tagIPC11BITS {
union {
  struct {
    unsigned FCEIS:2;
    unsigned FCEIP:3;
    unsigned :3;
    unsigned USBIS:2;
    unsigned USBIP:3;
    unsigned :3;
    unsigned CAN1IS:2;
    unsigned CAN1IP:3;
    unsigned :3;
    unsigned CAN2IS:2;
    unsigned CAN2IP:3;
  };
  struct {
    unsigned w:32;
  };
};
} typeIPC11BITS;
sfr atomic volatile typeIPC11BITS IPC11bits absolute 0xBF881140;
sfr volatile typeIPC11BITS IPC11CLRbits absolute 0xBF881144;
sfr volatile typeIPC11BITS IPC11SETbits absolute 0xBF881148;
sfr volatile typeIPC11BITS IPC11INVbits absolute 0xBF88114C;

typedef struct tagIPC12BITS {
union {
  struct {
    unsigned ETHIS:2;
    unsigned ETHIP:3;
    unsigned :3;
    unsigned U4IS:2;
    unsigned U4IP:3;
    unsigned :3;
    unsigned U6IS:2;
    unsigned U6IP:3;
    unsigned :3;
    unsigned U5IS:2;
    unsigned U5IP:3;
  };
  struct {
    unsigned :8;
    unsigned U1BIS:2;
    unsigned U1BIP:3;
    unsigned :3;
    unsigned U2BIS:2;
    unsigned U2BIP:3;
    unsigned :3;
    unsigned U3BIS:2;
    unsigned U3BIP:3;
  };
  struct {
    unsigned w:32;
  };
};
} typeIPC12BITS;
sfr atomic volatile typeIPC12BITS IPC12bits absolute 0xBF881150;
sfr volatile typeIPC12BITS IPC12CLRbits absolute 0xBF881154;
sfr volatile typeIPC12BITS IPC12SETbits absolute 0xBF881158;
sfr volatile typeIPC12BITS IPC12INVbits absolute 0xBF88115C;

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

typedef struct tagCHECONBITS {
union {
  struct {
    unsigned PFMWS:3;
    unsigned :1;
    unsigned PREFEN:2;
    unsigned :2;
    unsigned DCSZ:2;
    unsigned :6;
    unsigned CHECOH:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCHECONBITS;
sfr atomic volatile typeCHECONBITS CHECONbits absolute 0xBF884000;
sfr volatile typeCHECONBITS CHECONCLRbits absolute 0xBF884004;
sfr volatile typeCHECONBITS CHECONSETbits absolute 0xBF884008;
sfr volatile typeCHECONBITS CHECONINVbits absolute 0xBF88400C;
sfr atomic volatile typeCHECONBITS CHEACCbits absolute 0xBF884010;
sfr volatile typeCHECONBITS CHEACCCLRbits absolute 0xBF884014;
sfr volatile typeCHECONBITS CHEACCSETbits absolute 0xBF884018;
sfr volatile typeCHECONBITS CHEACCINVbits absolute 0xBF88401C;

typedef struct tagCHETAGBITS {
union {
  struct {
    unsigned :1;
    unsigned LTYPE:1;
    unsigned LLOCK:1;
    unsigned LVALID:1;
    unsigned LTAG:20;
    unsigned :7;
    unsigned LTAGBOOT:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCHETAGBITS;
sfr atomic volatile typeCHETAGBITS CHETAGbits absolute 0xBF884020;
sfr volatile typeCHETAGBITS CHETAGCLRbits absolute 0xBF884024;
sfr volatile typeCHETAGBITS CHETAGSETbits absolute 0xBF884028;
sfr volatile typeCHETAGBITS CHETAGINVbits absolute 0xBF88402C;
sfr atomic volatile typeCHETAGBITS CHEMSKbits absolute 0xBF884030;
sfr volatile typeCHETAGBITS CHEMSKCLRbits absolute 0xBF884034;
sfr volatile typeCHETAGBITS CHEMSKSETbits absolute 0xBF884038;
sfr volatile typeCHETAGBITS CHEMSKINVbits absolute 0xBF88403C;
sfr volatile typeCHETAGBITS CHEW0bits absolute 0xBF884040;
sfr volatile typeCHETAGBITS CHEW1bits absolute 0xBF884050;
sfr volatile typeCHETAGBITS CHEW2bits absolute 0xBF884060;
sfr volatile typeCHETAGBITS CHEW3bits absolute 0xBF884070;
sfr volatile typeCHETAGBITS CHELRUbits absolute 0xBF884080;
sfr volatile typeCHETAGBITS CHEHITbits absolute 0xBF884090;
sfr volatile typeCHETAGBITS CHEMISbits absolute 0xBF8840A0;
sfr volatile typeCHETAGBITS CHEPFABTbits absolute 0xBF8840C0;

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
sfr atomic volatile typeTRISBBITS TRISBbits absolute 0xBF886040;
sfr volatile typeTRISBBITS TRISBCLRbits absolute 0xBF886044;
sfr volatile typeTRISBBITS TRISBSETbits absolute 0xBF886048;
sfr volatile typeTRISBBITS TRISBINVbits absolute 0xBF88604C;

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
sfr atomic volatile typePORTBBITS PORTBbits absolute 0xBF886050;
sfr volatile typePORTBBITS PORTBCLRbits absolute 0xBF886054;
sfr volatile typePORTBBITS PORTBSETbits absolute 0xBF886058;
sfr volatile typePORTBBITS PORTBINVbits absolute 0xBF88605C;

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
sfr atomic volatile typeLATBBITS LATBbits absolute 0xBF886060;
sfr volatile typeLATBBITS LATBCLRbits absolute 0xBF886064;
sfr volatile typeLATBBITS LATBSETbits absolute 0xBF886068;
sfr volatile typeLATBBITS LATBINVbits absolute 0xBF88606C;

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
  struct {
    unsigned w:32;
  };
};
} typeODCBBITS;
sfr atomic volatile typeODCBBITS ODCBbits absolute 0xBF886070;
sfr volatile typeODCBBITS ODCBCLRbits absolute 0xBF886074;
sfr volatile typeODCBBITS ODCBSETbits absolute 0xBF886078;
sfr volatile typeODCBBITS ODCBINVbits absolute 0xBF88607C;

typedef struct tagTRISCBITS {
union {
  struct {
    unsigned :12;
    unsigned TRISC12:1;
    unsigned TRISC13:1;
    unsigned TRISC14:1;
    unsigned TRISC15:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeTRISCBITS;
sfr atomic volatile typeTRISCBITS TRISCbits absolute 0xBF886080;
sfr volatile typeTRISCBITS TRISCCLRbits absolute 0xBF886084;
sfr volatile typeTRISCBITS TRISCSETbits absolute 0xBF886088;
sfr volatile typeTRISCBITS TRISCINVbits absolute 0xBF88608C;

typedef struct tagPORTCBITS {
union {
  struct {
    unsigned :12;
    unsigned RC12:1;
    unsigned RC13:1;
    unsigned RC14:1;
    unsigned RC15:1;
  };
  struct {
    unsigned w:32;
  };
};
} typePORTCBITS;
sfr atomic volatile typePORTCBITS PORTCbits absolute 0xBF886090;
sfr volatile typePORTCBITS PORTCCLRbits absolute 0xBF886094;
sfr volatile typePORTCBITS PORTCSETbits absolute 0xBF886098;
sfr volatile typePORTCBITS PORTCINVbits absolute 0xBF88609C;

typedef struct tagLATCBITS {
union {
  struct {
    unsigned :12;
    unsigned LATC12:1;
    unsigned LATC13:1;
    unsigned LATC14:1;
    unsigned LATC15:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeLATCBITS;
sfr atomic volatile typeLATCBITS LATCbits absolute 0xBF8860A0;
sfr volatile typeLATCBITS LATCCLRbits absolute 0xBF8860A4;
sfr volatile typeLATCBITS LATCSETbits absolute 0xBF8860A8;
sfr volatile typeLATCBITS LATCINVbits absolute 0xBF8860AC;

typedef struct tagODCCBITS {
union {
  struct {
    unsigned :12;
    unsigned ODCC12:1;
    unsigned ODCC13:1;
    unsigned ODCC14:1;
    unsigned ODCC15:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeODCCBITS;
sfr atomic volatile typeODCCBITS ODCCbits absolute 0xBF8860B0;
sfr volatile typeODCCBITS ODCCCLRbits absolute 0xBF8860B4;
sfr volatile typeODCCBITS ODCCSETbits absolute 0xBF8860B8;
sfr volatile typeODCCBITS ODCCINVbits absolute 0xBF8860BC;

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
  };
  struct {
    unsigned w:32;
  };
};
} typeTRISDBITS;
sfr atomic volatile typeTRISDBITS TRISDbits absolute 0xBF8860C0;
sfr volatile typeTRISDBITS TRISDCLRbits absolute 0xBF8860C4;
sfr volatile typeTRISDBITS TRISDSETbits absolute 0xBF8860C8;
sfr volatile typeTRISDBITS TRISDINVbits absolute 0xBF8860CC;

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
  };
  struct {
    unsigned w:32;
  };
};
} typePORTDBITS;
sfr atomic volatile typePORTDBITS PORTDbits absolute 0xBF8860D0;
sfr volatile typePORTDBITS PORTDCLRbits absolute 0xBF8860D4;
sfr volatile typePORTDBITS PORTDSETbits absolute 0xBF8860D8;
sfr volatile typePORTDBITS PORTDINVbits absolute 0xBF8860DC;

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
  };
  struct {
    unsigned w:32;
  };
};
} typeLATDBITS;
sfr atomic volatile typeLATDBITS LATDbits absolute 0xBF8860E0;
sfr volatile typeLATDBITS LATDCLRbits absolute 0xBF8860E4;
sfr volatile typeLATDBITS LATDSETbits absolute 0xBF8860E8;
sfr volatile typeLATDBITS LATDINVbits absolute 0xBF8860EC;

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
  };
  struct {
    unsigned w:32;
  };
};
} typeODCDBITS;
sfr atomic volatile typeODCDBITS ODCDbits absolute 0xBF8860F0;
sfr volatile typeODCDBITS ODCDCLRbits absolute 0xBF8860F4;
sfr volatile typeODCDBITS ODCDSETbits absolute 0xBF8860F8;
sfr volatile typeODCDBITS ODCDINVbits absolute 0xBF8860FC;

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
  };
  struct {
    unsigned w:32;
  };
};
} typeTRISEBITS;
sfr atomic volatile typeTRISEBITS TRISEbits absolute 0xBF886100;
sfr volatile typeTRISEBITS TRISECLRbits absolute 0xBF886104;
sfr volatile typeTRISEBITS TRISESETbits absolute 0xBF886108;
sfr volatile typeTRISEBITS TRISEINVbits absolute 0xBF88610C;

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
  };
  struct {
    unsigned w:32;
  };
};
} typePORTEBITS;
sfr atomic volatile typePORTEBITS PORTEbits absolute 0xBF886110;
sfr volatile typePORTEBITS PORTECLRbits absolute 0xBF886114;
sfr volatile typePORTEBITS PORTESETbits absolute 0xBF886118;
sfr volatile typePORTEBITS PORTEINVbits absolute 0xBF88611C;

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
  };
  struct {
    unsigned w:32;
  };
};
} typeLATEBITS;
sfr atomic volatile typeLATEBITS LATEbits absolute 0xBF886120;
sfr volatile typeLATEBITS LATECLRbits absolute 0xBF886124;
sfr volatile typeLATEBITS LATESETbits absolute 0xBF886128;
sfr volatile typeLATEBITS LATEINVbits absolute 0xBF88612C;

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
  };
  struct {
    unsigned w:32;
  };
};
} typeODCEBITS;
sfr atomic volatile typeODCEBITS ODCEbits absolute 0xBF886130;
sfr volatile typeODCEBITS ODCECLRbits absolute 0xBF886134;
sfr volatile typeODCEBITS ODCESETbits absolute 0xBF886138;
sfr volatile typeODCEBITS ODCEINVbits absolute 0xBF88613C;

typedef struct tagTRISFBITS {
union {
  struct {
    unsigned TRISF0:1;
    unsigned TRISF1:1;
    unsigned TRISF2:1;
    unsigned TRISF3:1;
    unsigned TRISF4:1;
    unsigned TRISF5:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeTRISFBITS;
sfr atomic volatile typeTRISFBITS TRISFbits absolute 0xBF886140;
sfr volatile typeTRISFBITS TRISFCLRbits absolute 0xBF886144;
sfr volatile typeTRISFBITS TRISFSETbits absolute 0xBF886148;
sfr volatile typeTRISFBITS TRISFINVbits absolute 0xBF88614C;

typedef struct tagPORTFBITS {
union {
  struct {
    unsigned RF0:1;
    unsigned RF1:1;
    unsigned RF2:1;
    unsigned RF3:1;
    unsigned RF4:1;
    unsigned RF5:1;
  };
  struct {
    unsigned w:32;
  };
};
} typePORTFBITS;
sfr atomic volatile typePORTFBITS PORTFbits absolute 0xBF886150;
sfr volatile typePORTFBITS PORTFCLRbits absolute 0xBF886154;
sfr volatile typePORTFBITS PORTFSETbits absolute 0xBF886158;
sfr volatile typePORTFBITS PORTFINVbits absolute 0xBF88615C;

typedef struct tagLATFBITS {
union {
  struct {
    unsigned LATF0:1;
    unsigned LATF1:1;
    unsigned LATF2:1;
    unsigned LATF3:1;
    unsigned LATF4:1;
    unsigned LATF5:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeLATFBITS;
sfr atomic volatile typeLATFBITS LATFbits absolute 0xBF886160;
sfr volatile typeLATFBITS LATFCLRbits absolute 0xBF886164;
sfr volatile typeLATFBITS LATFSETbits absolute 0xBF886168;
sfr volatile typeLATFBITS LATFINVbits absolute 0xBF88616C;

typedef struct tagODCFBITS {
union {
  struct {
    unsigned ODCF0:1;
    unsigned ODCF1:1;
    unsigned ODCF2:1;
    unsigned ODCF3:1;
    unsigned ODCF4:1;
    unsigned ODCF5:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeODCFBITS;
sfr atomic volatile typeODCFBITS ODCFbits absolute 0xBF886170;
sfr volatile typeODCFBITS ODCFCLRbits absolute 0xBF886174;
sfr volatile typeODCFBITS ODCFSETbits absolute 0xBF886178;
sfr volatile typeODCFBITS ODCFINVbits absolute 0xBF88617C;

typedef struct tagTRISGBITS {
union {
  struct {
    unsigned :2;
    unsigned TRISG2:1;
    unsigned TRISG3:1;
    unsigned :2;
    unsigned TRISG6:1;
    unsigned TRISG7:1;
    unsigned TRISG8:1;
    unsigned TRISG9:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeTRISGBITS;
sfr atomic volatile typeTRISGBITS TRISGbits absolute 0xBF886180;
sfr volatile typeTRISGBITS TRISGCLRbits absolute 0xBF886184;
sfr volatile typeTRISGBITS TRISGSETbits absolute 0xBF886188;
sfr volatile typeTRISGBITS TRISGINVbits absolute 0xBF88618C;

typedef struct tagPORTGBITS {
union {
  struct {
    unsigned :2;
    unsigned RG2:1;
    unsigned RG3:1;
    unsigned :2;
    unsigned RG6:1;
    unsigned RG7:1;
    unsigned RG8:1;
    unsigned RG9:1;
  };
  struct {
    unsigned w:32;
  };
};
} typePORTGBITS;
sfr atomic volatile typePORTGBITS PORTGbits absolute 0xBF886190;
sfr volatile typePORTGBITS PORTGCLRbits absolute 0xBF886194;
sfr volatile typePORTGBITS PORTGSETbits absolute 0xBF886198;
sfr volatile typePORTGBITS PORTGINVbits absolute 0xBF88619C;

typedef struct tagLATGBITS {
union {
  struct {
    unsigned :2;
    unsigned LATG2:1;
    unsigned LATG3:1;
    unsigned :2;
    unsigned LATG6:1;
    unsigned LATG7:1;
    unsigned LATG8:1;
    unsigned LATG9:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeLATGBITS;
sfr atomic volatile typeLATGBITS LATGbits absolute 0xBF8861A0;
sfr volatile typeLATGBITS LATGCLRbits absolute 0xBF8861A4;
sfr volatile typeLATGBITS LATGSETbits absolute 0xBF8861A8;
sfr volatile typeLATGBITS LATGINVbits absolute 0xBF8861AC;

typedef struct tagODCGBITS {
union {
  struct {
    unsigned :2;
    unsigned ODCG2:1;
    unsigned ODCG3:1;
    unsigned :2;
    unsigned ODCG6:1;
    unsigned ODCG7:1;
    unsigned ODCG8:1;
    unsigned ODCG9:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeODCGBITS;
sfr atomic volatile typeODCGBITS ODCGbits absolute 0xBF8861B0;
sfr volatile typeODCGBITS ODCGCLRbits absolute 0xBF8861B4;
sfr volatile typeODCGBITS ODCGSETbits absolute 0xBF8861B8;
sfr volatile typeODCGBITS ODCGINVbits absolute 0xBF8861BC;

typedef struct tagCNCONBITS {
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
} typeCNCONBITS;
sfr atomic volatile typeCNCONBITS CNCONbits absolute 0xBF8861C0;
sfr volatile typeCNCONBITS CNCONCLRbits absolute 0xBF8861C4;
sfr volatile typeCNCONBITS CNCONSETbits absolute 0xBF8861C8;
sfr volatile typeCNCONBITS CNCONINVbits absolute 0xBF8861CC;

typedef struct tagCNENBITS {
union {
  struct {
    unsigned CNEN0:1;
    unsigned CNEN1:1;
    unsigned CNEN2:1;
    unsigned CNEN3:1;
    unsigned CNEN4:1;
    unsigned CNEN5:1;
    unsigned CNEN6:1;
    unsigned CNEN7:1;
    unsigned CNEN8:1;
    unsigned CNEN9:1;
    unsigned CNEN10:1;
    unsigned CNEN11:1;
    unsigned CNEN12:1;
    unsigned CNEN13:1;
    unsigned CNEN14:1;
    unsigned CNEN15:1;
    unsigned CNEN16:1;
    unsigned CNEN17:1;
    unsigned CNEN18:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNENBITS;
sfr atomic volatile typeCNENBITS CNENbits absolute 0xBF8861D0;
sfr volatile typeCNENBITS CNENCLRbits absolute 0xBF8861D4;
sfr volatile typeCNENBITS CNENSETbits absolute 0xBF8861D8;
sfr volatile typeCNENBITS CNENINVbits absolute 0xBF8861DC;

typedef struct tagCNPUEBITS {
union {
  struct {
    unsigned CNPUE0:1;
    unsigned CNPUE1:1;
    unsigned CNPUE2:1;
    unsigned CNPUE3:1;
    unsigned CNPUE4:1;
    unsigned CNPUE5:1;
    unsigned CNPUE6:1;
    unsigned CNPUE7:1;
    unsigned CNPUE8:1;
    unsigned CNPUE9:1;
    unsigned CNPUE10:1;
    unsigned CNPUE11:1;
    unsigned CNPUE12:1;
    unsigned CNPUE13:1;
    unsigned CNPUE14:1;
    unsigned CNPUE15:1;
    unsigned CNPUE16:1;
    unsigned CNPUE17:1;
    unsigned CNPUE18:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNPUEBITS;
sfr atomic volatile typeCNPUEBITS CNPUEbits absolute 0xBF8861E0;
sfr volatile typeCNPUEBITS CNPUECLRbits absolute 0xBF8861E4;
sfr volatile typeCNPUEBITS CNPUESETbits absolute 0xBF8861E8;
sfr volatile typeCNPUEBITS CNPUEINVbits absolute 0xBF8861EC;

typedef struct tagETHCON1BITS {
union {
  struct {
    unsigned BUFCDEC:1;
    unsigned :3;
    unsigned MANFC:1;
    unsigned :2;
    unsigned AUTOFC:1;
    unsigned RXEN:1;
    unsigned TXRTS:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned PTV:16;
  };
  struct {
    unsigned w:32;
  };
};
} typeETHCON1BITS;
sfr atomic volatile typeETHCON1BITS ETHCON1bits absolute 0xBF889000;
sfr volatile typeETHCON1BITS ETHCON1CLRbits absolute 0xBF889004;
sfr volatile typeETHCON1BITS ETHCON1SETbits absolute 0xBF889008;
sfr volatile typeETHCON1BITS ETHCON1INVbits absolute 0xBF88900C;

typedef struct tagETHCON2BITS {
union {
  struct {
    unsigned :4;
    unsigned RXBUF_SZ:7;
  };
  struct {
    unsigned w:32;
  };
};
} typeETHCON2BITS;
sfr atomic volatile typeETHCON2BITS ETHCON2bits absolute 0xBF889010;
sfr volatile typeETHCON2BITS ETHCON2CLRbits absolute 0xBF889014;
sfr volatile typeETHCON2BITS ETHCON2SETbits absolute 0xBF889018;
sfr volatile typeETHCON2BITS ETHCON2INVbits absolute 0xBF88901C;

typedef struct tagETHTXSTBITS {
union {
  struct {
    unsigned :2;
    unsigned TXSTADDR:30;
  };
  struct {
    unsigned w:32;
  };
};
} typeETHTXSTBITS;
sfr atomic volatile typeETHTXSTBITS ETHTXSTbits absolute 0xBF889020;
sfr volatile typeETHTXSTBITS ETHTXSTCLRbits absolute 0xBF889024;
sfr volatile typeETHTXSTBITS ETHTXSTSETbits absolute 0xBF889028;
sfr volatile typeETHTXSTBITS ETHTXSTINVbits absolute 0xBF88902C;

typedef struct tagETHRXSTBITS {
union {
  struct {
    unsigned :2;
    unsigned RXSTADDR:30;
  };
  struct {
    unsigned w:32;
  };
};
} typeETHRXSTBITS;
sfr atomic volatile typeETHRXSTBITS ETHRXSTbits absolute 0xBF889030;
sfr volatile typeETHRXSTBITS ETHRXSTCLRbits absolute 0xBF889034;
sfr volatile typeETHRXSTBITS ETHRXSTSETbits absolute 0xBF889038;
sfr volatile typeETHRXSTBITS ETHRXSTINVbits absolute 0xBF88903C;
sfr atomic volatile typeETHRXSTBITS ETHHT0bits absolute 0xBF889040;
sfr volatile typeETHRXSTBITS ETHHT0CLRbits absolute 0xBF889044;
sfr volatile typeETHRXSTBITS ETHHT0SETbits absolute 0xBF889048;
sfr volatile typeETHRXSTBITS ETHHT0INVbits absolute 0xBF88904C;
sfr atomic volatile typeETHRXSTBITS ETHHT1bits absolute 0xBF889050;
sfr volatile typeETHRXSTBITS ETHHT1CLRbits absolute 0xBF889054;
sfr volatile typeETHRXSTBITS ETHHT1SETbits absolute 0xBF889058;
sfr volatile typeETHRXSTBITS ETHHT1INVbits absolute 0xBF88905C;
sfr atomic volatile typeETHRXSTBITS ETHPMM0bits absolute 0xBF889060;
sfr volatile typeETHRXSTBITS ETHPMM0CLRbits absolute 0xBF889064;
sfr volatile typeETHRXSTBITS ETHPMM0SETbits absolute 0xBF889068;
sfr volatile typeETHRXSTBITS ETHPMM0INVbits absolute 0xBF88906C;
sfr atomic volatile typeETHRXSTBITS ETHPMM1bits absolute 0xBF889070;
sfr volatile typeETHRXSTBITS ETHPMM1CLRbits absolute 0xBF889074;
sfr volatile typeETHRXSTBITS ETHPMM1SETbits absolute 0xBF889078;
sfr volatile typeETHRXSTBITS ETHPMM1INVbits absolute 0xBF88907C;

typedef struct tagETHPMCSBITS {
union {
  struct {
    unsigned PMCS:16;
  };
  struct {
    unsigned w:32;
  };
};
} typeETHPMCSBITS;
sfr atomic volatile typeETHPMCSBITS ETHPMCSbits absolute 0xBF889080;
sfr volatile typeETHPMCSBITS ETHPMCSCLRbits absolute 0xBF889084;
sfr volatile typeETHPMCSBITS ETHPMCSSETbits absolute 0xBF889088;
sfr volatile typeETHPMCSBITS ETHPMCSINVbits absolute 0xBF88908C;

typedef struct tagETHPMOBITS {
union {
  struct {
    unsigned PMO:16;
  };
  struct {
    unsigned w:32;
  };
};
} typeETHPMOBITS;
sfr atomic volatile typeETHPMOBITS ETHPMObits absolute 0xBF889090;
sfr volatile typeETHPMOBITS ETHPMOCLRbits absolute 0xBF889094;
sfr volatile typeETHPMOBITS ETHPMOSETbits absolute 0xBF889098;
sfr volatile typeETHPMOBITS ETHPMOINVbits absolute 0xBF88909C;

typedef struct tagETHRXFCBITS {
union {
  struct {
    unsigned BCEN:1;
    unsigned MCEN:1;
    unsigned NOTMEEN:1;
    unsigned UCEN:1;
    unsigned RUNTEN:1;
    unsigned RUNTERREN:1;
    unsigned CRCOKEN:1;
    unsigned CRCERREN:1;
    unsigned PMMODE:4;
    unsigned NOTPM:1;
    unsigned :1;
    unsigned MPEN:1;
    unsigned HTEN:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeETHRXFCBITS;
sfr atomic volatile typeETHRXFCBITS ETHRXFCbits absolute 0xBF8890A0;
sfr volatile typeETHRXFCBITS ETHRXFCCLRbits absolute 0xBF8890A4;
sfr volatile typeETHRXFCBITS ETHRXFCSETbits absolute 0xBF8890A8;
sfr volatile typeETHRXFCBITS ETHRXFCINVbits absolute 0xBF8890AC;

typedef struct tagETHRXWMBITS {
union {
  struct {
    unsigned RXEWM:8;
    unsigned :8;
    unsigned RXFWM:8;
  };
  struct {
    unsigned w:32;
  };
};
} typeETHRXWMBITS;
sfr atomic volatile typeETHRXWMBITS ETHRXWMbits absolute 0xBF8890B0;
sfr volatile typeETHRXWMBITS ETHRXWMCLRbits absolute 0xBF8890B4;
sfr volatile typeETHRXWMBITS ETHRXWMSETbits absolute 0xBF8890B8;
sfr volatile typeETHRXWMBITS ETHRXWMINVbits absolute 0xBF8890BC;

typedef struct tagETHIENBITS {
union {
  struct {
    unsigned RXOVFLWIE:1;
    unsigned RXBUFNAIE:1;
    unsigned TXABORTIE:1;
    unsigned TXDONEIE:1;
    unsigned :1;
    unsigned RXACTIE:1;
    unsigned PKTPENDIE:1;
    unsigned RXDONEIE:1;
    unsigned FWMARKIE:1;
    unsigned EWMARKIE:1;
    unsigned :3;
    unsigned RXBUSEIE:1;
    unsigned TXBUSEIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeETHIENBITS;
sfr atomic volatile typeETHIENBITS ETHIENbits absolute 0xBF8890C0;
sfr volatile typeETHIENBITS ETHIENCLRbits absolute 0xBF8890C4;
sfr volatile typeETHIENBITS ETHIENSETbits absolute 0xBF8890C8;
sfr volatile typeETHIENBITS ETHIENINVbits absolute 0xBF8890CC;

typedef struct tagETHIRQBITS {
union {
  struct {
    unsigned RXOVFLW:1;
    unsigned RXBUFNA:1;
    unsigned TXABORT:1;
    unsigned TXDONE:1;
    unsigned :1;
    unsigned RXACT:1;
    unsigned PKTPEND:1;
    unsigned RXDONE:1;
    unsigned FWMARK:1;
    unsigned EWMARK:1;
    unsigned :3;
    unsigned RXBUSE:1;
    unsigned TXBUSE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeETHIRQBITS;
sfr atomic volatile typeETHIRQBITS ETHIRQbits absolute 0xBF8890D0;
sfr volatile typeETHIRQBITS ETHIRQCLRbits absolute 0xBF8890D4;
sfr volatile typeETHIRQBITS ETHIRQSETbits absolute 0xBF8890D8;
sfr volatile typeETHIRQBITS ETHIRQINVbits absolute 0xBF8890DC;

typedef struct tagETHSTATBITS {
union {
  struct {
    unsigned :5;
    unsigned RXBUSY:1;
    unsigned TXBUSY:1;
    unsigned BUSY:1;
    unsigned :8;
    unsigned BUFCNT:8;
  };
  struct {
    unsigned :7;
    unsigned ETHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeETHSTATBITS;
sfr atomic volatile typeETHSTATBITS ETHSTATbits absolute 0xBF8890E0;
sfr volatile typeETHSTATBITS ETHSTATCLRbits absolute 0xBF8890E4;
sfr volatile typeETHSTATBITS ETHSTATSETbits absolute 0xBF8890E8;
sfr volatile typeETHSTATBITS ETHSTATINVbits absolute 0xBF8890EC;

typedef struct tagETHRXOVFLOWBITS {
union {
  struct {
    unsigned RXOVFLWCNT:16;
  };
  struct {
    unsigned w:32;
  };
};
} typeETHRXOVFLOWBITS;
sfr atomic volatile typeETHRXOVFLOWBITS ETHRXOVFLOWbits absolute 0xBF889100;
sfr volatile typeETHRXOVFLOWBITS ETHRXOVFLOWCLRbits absolute 0xBF889104;
sfr volatile typeETHRXOVFLOWBITS ETHRXOVFLOWSETbits absolute 0xBF889108;
sfr volatile typeETHRXOVFLOWBITS ETHRXOVFLOWINVbits absolute 0xBF88910C;

typedef struct tagETHFRMTXOKBITS {
union {
  struct {
    unsigned FRMTXOKCNT:16;
  };
  struct {
    unsigned w:32;
  };
};
} typeETHFRMTXOKBITS;
sfr atomic volatile typeETHFRMTXOKBITS ETHFRMTXOKbits absolute 0xBF889110;
sfr volatile typeETHFRMTXOKBITS ETHFRMTXOKCLRbits absolute 0xBF889114;
sfr volatile typeETHFRMTXOKBITS ETHFRMTXOKSETbits absolute 0xBF889118;
sfr volatile typeETHFRMTXOKBITS ETHFRMTXOKINVbits absolute 0xBF88911C;

typedef struct tagETHSCOLFRMBITS {
union {
  struct {
    unsigned SCOLFRMCNT:16;
  };
  struct {
    unsigned w:32;
  };
};
} typeETHSCOLFRMBITS;
sfr atomic volatile typeETHSCOLFRMBITS ETHSCOLFRMbits absolute 0xBF889120;
sfr volatile typeETHSCOLFRMBITS ETHSCOLFRMCLRbits absolute 0xBF889124;
sfr volatile typeETHSCOLFRMBITS ETHSCOLFRMSETbits absolute 0xBF889128;
sfr volatile typeETHSCOLFRMBITS ETHSCOLFRMINVbits absolute 0xBF88912C;

typedef struct tagETHMCOLFRMBITS {
union {
  struct {
    unsigned MCOLFRMCNT:16;
  };
  struct {
    unsigned MCOLFRM_CNT:16;
  };
  struct {
    unsigned w:32;
  };
};
} typeETHMCOLFRMBITS;
sfr atomic volatile typeETHMCOLFRMBITS ETHMCOLFRMbits absolute 0xBF889130;
sfr volatile typeETHMCOLFRMBITS ETHMCOLFRMCLRbits absolute 0xBF889134;
sfr volatile typeETHMCOLFRMBITS ETHMCOLFRMSETbits absolute 0xBF889138;
sfr volatile typeETHMCOLFRMBITS ETHMCOLFRMINVbits absolute 0xBF88913C;

typedef struct tagETHFRMRXOKBITS {
union {
  struct {
    unsigned FRMRXOKCNT:16;
  };
  struct {
    unsigned w:32;
  };
};
} typeETHFRMRXOKBITS;
sfr atomic volatile typeETHFRMRXOKBITS ETHFRMRXOKbits absolute 0xBF889140;
sfr volatile typeETHFRMRXOKBITS ETHFRMRXOKCLRbits absolute 0xBF889144;
sfr volatile typeETHFRMRXOKBITS ETHFRMRXOKSETbits absolute 0xBF889148;
sfr volatile typeETHFRMRXOKBITS ETHFRMRXOKINVbits absolute 0xBF88914C;

typedef struct tagETHFCSERRBITS {
union {
  struct {
    unsigned FCSERRCNT:16;
  };
  struct {
    unsigned w:32;
  };
};
} typeETHFCSERRBITS;
sfr atomic volatile typeETHFCSERRBITS ETHFCSERRbits absolute 0xBF889150;
sfr volatile typeETHFCSERRBITS ETHFCSERRCLRbits absolute 0xBF889154;
sfr volatile typeETHFCSERRBITS ETHFCSERRSETbits absolute 0xBF889158;
sfr volatile typeETHFCSERRBITS ETHFCSERRINVbits absolute 0xBF88915C;

typedef struct tagETHALGNERRBITS {
union {
  struct {
    unsigned ALGNERRCNT:16;
  };
  struct {
    unsigned w:32;
  };
};
} typeETHALGNERRBITS;
sfr atomic volatile typeETHALGNERRBITS ETHALGNERRbits absolute 0xBF889160;
sfr volatile typeETHALGNERRBITS ETHALGNERRCLRbits absolute 0xBF889164;
sfr volatile typeETHALGNERRBITS ETHALGNERRSETbits absolute 0xBF889168;
sfr volatile typeETHALGNERRBITS ETHALGNERRINVbits absolute 0xBF88916C;

typedef struct tagEMAC1CFG1BITS {
union {
  struct {
    unsigned RXENABLE:1;
    unsigned PASSALL:1;
    unsigned RXPAUSE:1;
    unsigned TXPAUSE:1;
    unsigned LOOPBACK:1;
    unsigned :3;
    unsigned RESETTFUN:1;
    unsigned RESETTMCS:1;
    unsigned RESETRFUN:1;
    unsigned RESETRMCS:1;
    unsigned :2;
    unsigned SIMRESET:1;
    unsigned SOFTRESET:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMAC1CFG1BITS;
sfr atomic volatile typeEMAC1CFG1BITS EMAC1CFG1bits absolute 0xBF889200;

typedef struct tagEMACxCFG1BITS {
union {
  struct {
    unsigned RXENABLE:1;
    unsigned PASSALL:1;
    unsigned RXPAUSE:1;
    unsigned TXPAUSE:1;
    unsigned LOOPBACK:1;
    unsigned :3;
    unsigned RESETTFUN:1;
    unsigned RESETTMCS:1;
    unsigned RESETRFUN:1;
    unsigned RESETRMCS:1;
    unsigned :2;
    unsigned SIMRESET:1;
    unsigned SOFTRESET:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMACxCFG1BITS;
sfr atomic volatile typeEMACxCFG1BITS EMACxCFG1bits absolute 0xBF889200;
sfr volatile typeEMACxCFG1BITS EMAC1CFG1CLRbits absolute 0xBF889204;
sfr volatile typeEMACxCFG1BITS EMAC1CFG1SETbits absolute 0xBF889208;
sfr volatile typeEMACxCFG1BITS EMAC1CFG1INVbits absolute 0xBF88920C;

typedef struct tagEMAC1CFG2BITS {
union {
  struct {
    unsigned FULLDPLX:1;
    unsigned LENGTHCK:1;
    unsigned HUGEFRM:1;
    unsigned DELAYCRC:1;
    unsigned CRCENABLE:1;
    unsigned PADENABLE:1;
    unsigned VLANPAD:1;
    unsigned AUTOPAD:1;
    unsigned PUREPRE:1;
    unsigned LONGPRE:1;
    unsigned :2;
    unsigned NOBKOFF:1;
    unsigned BPNOBKOFF:1;
    unsigned EXCESSDFR:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMAC1CFG2BITS;
sfr atomic volatile typeEMAC1CFG2BITS EMAC1CFG2bits absolute 0xBF889210;

typedef struct tagEMACxCFG2BITS {
union {
  struct {
    unsigned FULLDPLX:1;
    unsigned LENGTHCK:1;
    unsigned HUGEFRM:1;
    unsigned DELAYCRC:1;
    unsigned CRCENABLE:1;
    unsigned PADENABLE:1;
    unsigned VLANPAD:1;
    unsigned AUTOPAD:1;
    unsigned PUREPRE:1;
    unsigned LONGPRE:1;
    unsigned :2;
    unsigned NOBKOFF:1;
    unsigned BPNOBKOFF:1;
    unsigned EXCESSDFR:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMACxCFG2BITS;
sfr atomic volatile typeEMACxCFG2BITS EMACxCFG2bits absolute 0xBF889210;
sfr volatile typeEMACxCFG2BITS EMAC1CFG2CLRbits absolute 0xBF889214;
sfr volatile typeEMACxCFG2BITS EMAC1CFG2SETbits absolute 0xBF889218;
sfr volatile typeEMACxCFG2BITS EMAC1CFG2INVbits absolute 0xBF88921C;

typedef struct tagEMAC1IPGTBITS {
union {
  struct {
    unsigned B2BIPKTGP:7;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMAC1IPGTBITS;
sfr atomic volatile typeEMAC1IPGTBITS EMAC1IPGTbits absolute 0xBF889220;

typedef struct tagEMACxIPGTBITS {
union {
  struct {
    unsigned B2BIPKTGP:7;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMACxIPGTBITS;
sfr atomic volatile typeEMACxIPGTBITS EMACxIPGTbits absolute 0xBF889220;
sfr volatile typeEMACxIPGTBITS EMAC1IPGTCLRbits absolute 0xBF889224;
sfr volatile typeEMACxIPGTBITS EMAC1IPGTSETbits absolute 0xBF889228;
sfr volatile typeEMACxIPGTBITS EMAC1IPGTINVbits absolute 0xBF88922C;

typedef struct tagEMAC1IPGRBITS {
union {
  struct {
    unsigned NB2BIPKTGP2:7;
    unsigned :1;
    unsigned NB2BIPKTGP1:7;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMAC1IPGRBITS;
sfr atomic volatile typeEMAC1IPGRBITS EMAC1IPGRbits absolute 0xBF889230;

typedef struct tagEMACxIPGRBITS {
union {
  struct {
    unsigned NB2BIPKTGP2:7;
    unsigned :1;
    unsigned NB2BIPKTGP1:7;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMACxIPGRBITS;
sfr atomic volatile typeEMACxIPGRBITS EMACxIPGRbits absolute 0xBF889230;
sfr volatile typeEMACxIPGRBITS EMAC1IPGRCLRbits absolute 0xBF889234;
sfr volatile typeEMACxIPGRBITS EMAC1IPGRSETbits absolute 0xBF889238;
sfr volatile typeEMACxIPGRBITS EMAC1IPGRINVbits absolute 0xBF88923C;

typedef struct tagEMAC1CLRTBITS {
union {
  struct {
    unsigned RETX:4;
    unsigned :4;
    unsigned CWINDOW:6;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMAC1CLRTBITS;
sfr atomic volatile typeEMAC1CLRTBITS EMAC1CLRTbits absolute 0xBF889240;

typedef struct tagEMACxCLRTBITS {
union {
  struct {
    unsigned RETX:4;
    unsigned :4;
    unsigned CWINDOW:6;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMACxCLRTBITS;
sfr atomic volatile typeEMACxCLRTBITS EMACxCLRTbits absolute 0xBF889240;
sfr volatile typeEMACxCLRTBITS EMAC1CLRTCLRbits absolute 0xBF889244;
sfr volatile typeEMACxCLRTBITS EMAC1CLRTSETbits absolute 0xBF889248;
sfr volatile typeEMACxCLRTBITS EMAC1CLRTINVbits absolute 0xBF88924C;

typedef struct tagEMAC1MAXFBITS {
union {
  struct {
    unsigned MACMAXF:16;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMAC1MAXFBITS;
sfr atomic volatile typeEMAC1MAXFBITS EMAC1MAXFbits absolute 0xBF889250;

typedef struct tagEMACxMAXFBITS {
union {
  struct {
    unsigned MACMAXF:16;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMACxMAXFBITS;
sfr atomic volatile typeEMACxMAXFBITS EMACxMAXFbits absolute 0xBF889250;
sfr volatile typeEMACxMAXFBITS EMAC1MAXFCLRbits absolute 0xBF889254;
sfr volatile typeEMACxMAXFBITS EMAC1MAXFSETbits absolute 0xBF889258;
sfr volatile typeEMACxMAXFBITS EMAC1MAXFINVbits absolute 0xBF88925C;

typedef struct tagEMAC1SUPPBITS {
union {
  struct {
    unsigned :8;
    unsigned SPEEDRMII:1;
    unsigned :2;
    unsigned RESETRMII:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMAC1SUPPBITS;
sfr atomic volatile typeEMAC1SUPPBITS EMAC1SUPPbits absolute 0xBF889260;

typedef struct tagEMACxSUPPBITS {
union {
  struct {
    unsigned :8;
    unsigned SPEEDRMII:1;
    unsigned :2;
    unsigned RESETRMII:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMACxSUPPBITS;
sfr atomic volatile typeEMACxSUPPBITS EMACxSUPPbits absolute 0xBF889260;
sfr volatile typeEMACxSUPPBITS EMAC1SUPPCLRbits absolute 0xBF889264;
sfr volatile typeEMACxSUPPBITS EMAC1SUPPSETbits absolute 0xBF889268;
sfr volatile typeEMACxSUPPBITS EMAC1SUPPINVbits absolute 0xBF88926C;

typedef struct tagEMAC1TESTBITS {
union {
  struct {
    unsigned SHRTQNTA:1;
    unsigned TESTPAUSE:1;
    unsigned TESTBP:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMAC1TESTBITS;
sfr atomic volatile typeEMAC1TESTBITS EMAC1TESTbits absolute 0xBF889270;

typedef struct tagEMACxTESTBITS {
union {
  struct {
    unsigned SHRTQNTA:1;
    unsigned TESTPAUSE:1;
    unsigned TESTBP:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMACxTESTBITS;
sfr atomic volatile typeEMACxTESTBITS EMACxTESTbits absolute 0xBF889270;
sfr volatile typeEMACxTESTBITS EMAC1TESTCLRbits absolute 0xBF889274;
sfr volatile typeEMACxTESTBITS EMAC1TESTSETbits absolute 0xBF889278;
sfr volatile typeEMACxTESTBITS EMAC1TESTINVbits absolute 0xBF88927C;

typedef struct tagEMAC1MCFGBITS {
union {
  struct {
    unsigned SCANINC:1;
    unsigned NOPRE:1;
    unsigned CLKSEL:4;
    unsigned :9;
    unsigned RESETMGMT:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMAC1MCFGBITS;
sfr atomic volatile typeEMAC1MCFGBITS EMAC1MCFGbits absolute 0xBF889280;

typedef struct tagEMACxMCFGBITS {
union {
  struct {
    unsigned SCANINC:1;
    unsigned NOPRE:1;
    unsigned CLKSEL:4;
    unsigned :9;
    unsigned RESETMGMT:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMACxMCFGBITS;
sfr atomic volatile typeEMACxMCFGBITS EMACxMCFGbits absolute 0xBF889280;
sfr volatile typeEMACxMCFGBITS EMAC1MCFGCLRbits absolute 0xBF889284;
sfr volatile typeEMACxMCFGBITS EMAC1MCFGSETbits absolute 0xBF889288;
sfr volatile typeEMACxMCFGBITS EMAC1MCFGINVbits absolute 0xBF88928C;

typedef struct tagEMAC1MCMDBITS {
union {
  struct {
    unsigned READ:1;
    unsigned SCAN:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMAC1MCMDBITS;
sfr atomic volatile typeEMAC1MCMDBITS EMAC1MCMDbits absolute 0xBF889290;

typedef struct tagEMACxMCMDBITS {
union {
  struct {
    unsigned READ:1;
    unsigned SCAN:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMACxMCMDBITS;
sfr atomic volatile typeEMACxMCMDBITS EMACxMCMDbits absolute 0xBF889290;
sfr volatile typeEMACxMCMDBITS EMAC1MCMDCLRbits absolute 0xBF889294;
sfr volatile typeEMACxMCMDBITS EMAC1MCMDSETbits absolute 0xBF889298;
sfr volatile typeEMACxMCMDBITS EMAC1MCMDINVbits absolute 0xBF88929C;

typedef struct tagEMAC1MADRBITS {
union {
  struct {
    unsigned REGADDR:5;
    unsigned :3;
    unsigned PHYADDR:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMAC1MADRBITS;
sfr atomic volatile typeEMAC1MADRBITS EMAC1MADRbits absolute 0xBF8892A0;

typedef struct tagEMACxMADRBITS {
union {
  struct {
    unsigned REGADDR:5;
    unsigned :3;
    unsigned PHYADDR:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMACxMADRBITS;
sfr atomic volatile typeEMACxMADRBITS EMACxMADRbits absolute 0xBF8892A0;
sfr volatile typeEMACxMADRBITS EMAC1MADRCLRbits absolute 0xBF8892A4;
sfr volatile typeEMACxMADRBITS EMAC1MADRSETbits absolute 0xBF8892A8;
sfr volatile typeEMACxMADRBITS EMAC1MADRINVbits absolute 0xBF8892AC;

typedef struct tagEMAC1MWTDBITS {
union {
  struct {
    unsigned MWTD:16;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMAC1MWTDBITS;
sfr atomic volatile typeEMAC1MWTDBITS EMAC1MWTDbits absolute 0xBF8892B0;

typedef struct tagEMACxMWTDBITS {
union {
  struct {
    unsigned MWTD:16;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMACxMWTDBITS;
sfr atomic volatile typeEMACxMWTDBITS EMACxMWTDbits absolute 0xBF8892B0;
sfr volatile typeEMACxMWTDBITS EMAC1MWTDCLRbits absolute 0xBF8892B4;
sfr volatile typeEMACxMWTDBITS EMAC1MWTDSETbits absolute 0xBF8892B8;
sfr volatile typeEMACxMWTDBITS EMAC1MWTDINVbits absolute 0xBF8892BC;

typedef struct tagEMAC1MRDDBITS {
union {
  struct {
    unsigned MRDD:16;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMAC1MRDDBITS;
sfr atomic volatile typeEMAC1MRDDBITS EMAC1MRDDbits absolute 0xBF8892C0;

typedef struct tagEMACxMRDDBITS {
union {
  struct {
    unsigned MRDD:16;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMACxMRDDBITS;
sfr atomic volatile typeEMACxMRDDBITS EMACxMRDDbits absolute 0xBF8892C0;
sfr volatile typeEMACxMRDDBITS EMAC1MRDDCLRbits absolute 0xBF8892C4;
sfr volatile typeEMACxMRDDBITS EMAC1MRDDSETbits absolute 0xBF8892C8;
sfr volatile typeEMACxMRDDBITS EMAC1MRDDINVbits absolute 0xBF8892CC;

typedef struct tagEMAC1MINDBITS {
union {
  struct {
    unsigned MIIMBUSY:1;
    unsigned SCAN:1;
    unsigned NOTVALID:1;
    unsigned LINKFAIL:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMAC1MINDBITS;
sfr atomic volatile typeEMAC1MINDBITS EMAC1MINDbits absolute 0xBF8892D0;

typedef struct tagEMACxMINDBITS {
union {
  struct {
    unsigned MIIMBUSY:1;
    unsigned SCAN:1;
    unsigned NOTVALID:1;
    unsigned LINKFAIL:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMACxMINDBITS;
sfr atomic volatile typeEMACxMINDBITS EMACxMINDbits absolute 0xBF8892D0;
sfr volatile typeEMACxMINDBITS EMAC1MINDCLRbits absolute 0xBF8892D4;
sfr volatile typeEMACxMINDBITS EMAC1MINDSETbits absolute 0xBF8892D8;
sfr volatile typeEMACxMINDBITS EMAC1MINDINVbits absolute 0xBF8892DC;

typedef struct tagEMAC1SA0BITS {
union {
  struct {
    unsigned STNADDR5:8;
    unsigned STNADDR6:8;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMAC1SA0BITS;
sfr atomic volatile typeEMAC1SA0BITS EMAC1SA0bits absolute 0xBF889300;

typedef struct tagEMACxSA0BITS {
union {
  struct {
    unsigned STNADDR5:8;
    unsigned STNADDR6:8;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMACxSA0BITS;
sfr atomic volatile typeEMACxSA0BITS EMACxSA0bits absolute 0xBF889300;
sfr volatile typeEMACxSA0BITS EMAC1SA0CLRbits absolute 0xBF889304;
sfr volatile typeEMACxSA0BITS EMAC1SA0SETbits absolute 0xBF889308;
sfr volatile typeEMACxSA0BITS EMAC1SA0INVbits absolute 0xBF88930C;

typedef struct tagEMAC1SA1BITS {
union {
  struct {
    unsigned STNADDR3:8;
    unsigned STNADDR4:8;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMAC1SA1BITS;
sfr atomic volatile typeEMAC1SA1BITS EMAC1SA1bits absolute 0xBF889310;

typedef struct tagEMACxSA1BITS {
union {
  struct {
    unsigned STNADDR3:8;
    unsigned STNADDR4:8;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMACxSA1BITS;
sfr atomic volatile typeEMACxSA1BITS EMACxSA1bits absolute 0xBF889310;
sfr volatile typeEMACxSA1BITS EMAC1SA1CLRbits absolute 0xBF889314;
sfr volatile typeEMACxSA1BITS EMAC1SA1SETbits absolute 0xBF889318;
sfr volatile typeEMACxSA1BITS EMAC1SA1INVbits absolute 0xBF88931C;

typedef struct tagEMAC1SA2BITS {
union {
  struct {
    unsigned STNADDR1:8;
    unsigned STNADDR2:8;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMAC1SA2BITS;
sfr atomic volatile typeEMAC1SA2BITS EMAC1SA2bits absolute 0xBF889320;

typedef struct tagEMACxSA2BITS {
union {
  struct {
    unsigned STNADDR1:8;
    unsigned STNADDR2:8;
  };
  struct {
    unsigned w:32;
  };
};
} typeEMACxSA2BITS;
sfr atomic volatile typeEMACxSA2BITS EMACxSA2bits absolute 0xBF889320;
sfr volatile typeEMACxSA2BITS EMAC1SA2CLRbits absolute 0xBF889324;
sfr volatile typeEMACxSA2BITS EMAC1SA2SETbits absolute 0xBF889328;
sfr volatile typeEMACxSA2BITS EMAC1SA2INVbits absolute 0xBF88932C;
