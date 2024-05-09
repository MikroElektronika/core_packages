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

const unsigned long __BOOT_FLASH_SIZE = 0x00028000;

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
const unsigned int IVT_USB_1                 = 0x001D;
const unsigned int IVT_SPI_1                 = 0x001E;
const unsigned int IVT_UART_1                = 0x001F;
const unsigned int IVT_I2C_1                 = 0x0020;
const unsigned int IVT_CHANGE_NOTICE         = 0x0021;
const unsigned int IVT_PMP                   = 0x0022;
const unsigned int IVT_SPI_2                 = 0x0023;
const unsigned int IVT_UART_2                = 0x0024;
const unsigned int IVT_I2C_2                 = 0x0025;
const unsigned int IVT_UART_3                = 0x0026;
const unsigned int IVT_UART_4                = 0x0027;
const unsigned int IVT_UART_5                = 0x0028;
const unsigned int IVT_CTMU                  = 0x0029;
const unsigned int IVT_DMA_0                 = 0x002A;
const unsigned int IVT_DMA_1                 = 0x002B;
const unsigned int IVT_DMA_2                 = 0x002C;
const unsigned int IVT_DMA_3                 = 0x002D;
const unsigned int IVT_COMPARATOR_3          = 0x002E;
const unsigned int IVT_CAN_1                 = 0x002F;
const unsigned int IVT_SPI_3                 = 0x0030;
const unsigned int IVT_SPI_4                 = 0x0031;


// Special function registers (SFRs)
sfr atomic unsigned long   volatile WDTCON           absolute 0xBF800000;
    const register unsigned short int WDTCLR = 0;
    sbit  WDTCLR_bit at WDTCON.B0;
    const register unsigned short int WDTWINEN = 1;
    sbit  WDTWINEN_bit at WDTCON.B1;
    const register unsigned short int SWDTPS0 = 2;
    sbit  SWDTPS0_bit at WDTCON.B2;
    const register unsigned short int SWDTPS1 = 3;
    sbit  SWDTPS1_bit at WDTCON.B3;
    const register unsigned short int SWDTPS2 = 4;
    sbit  SWDTPS2_bit at WDTCON.B4;
    const register unsigned short int SWDTPS3 = 5;
    sbit  SWDTPS3_bit at WDTCON.B5;
    const register unsigned short int SWDTPS4 = 6;
    sbit  SWDTPS4_bit at WDTCON.B6;
    const register unsigned short int ON_ = 15;
    sbit  ON_bit at WDTCON.B15;
    sbit  SWDTPS0_WDTCON_bit at WDTCON.B2;
    sbit  SWDTPS1_WDTCON_bit at WDTCON.B3;
    sbit  SWDTPS2_WDTCON_bit at WDTCON.B4;
    sbit  SWDTPS3_WDTCON_bit at WDTCON.B5;
    sbit  SWDTPS4_WDTCON_bit at WDTCON.B6;
    const register unsigned short int WDTPSTA0 = 2;
    sbit  WDTPSTA0_bit at WDTCON.B2;
    const register unsigned short int WDTPSTA1 = 3;
    sbit  WDTPSTA1_bit at WDTCON.B3;
    const register unsigned short int WDTPSTA2 = 4;
    sbit  WDTPSTA2_bit at WDTCON.B4;
    const register unsigned short int WDTPSTA3 = 5;
    sbit  WDTPSTA3_bit at WDTCON.B5;
    const register unsigned short int WDTPSTA4 = 6;
    sbit  WDTPSTA4_bit at WDTCON.B6;
    const register unsigned short int WDTPS0 = 2;
    sbit  WDTPS0_bit at WDTCON.B2;
    const register unsigned short int WDTPS1 = 3;
    sbit  WDTPS1_bit at WDTCON.B3;
    const register unsigned short int WDTPS2 = 4;
    sbit  WDTPS2_bit at WDTCON.B4;
    const register unsigned short int WDTPS3 = 5;
    sbit  WDTPS3_bit at WDTCON.B5;
    const register unsigned short int WDTPS4 = 6;
    sbit  WDTPS4_bit at WDTCON.B6;
sfr unsigned long   volatile WDTCONCLR        absolute 0xBF800004;
sfr unsigned long   volatile WDTCONSET        absolute 0xBF800008;
sfr unsigned long   volatile WDTCONINV        absolute 0xBF80000C;
sfr atomic unsigned long   volatile RTCCON           absolute 0xBF800200;
    const register unsigned short int RTCOE = 0;
    sbit  RTCOE_bit at RTCCON.B0;
    const register unsigned short int HALFSEC = 1;
    sbit  HALFSEC_bit at RTCCON.B1;
    const register unsigned short int RTCSYNC = 2;
    sbit  RTCSYNC_bit at RTCCON.B2;
    const register unsigned short int RTCWREN = 3;
    sbit  RTCWREN_bit at RTCCON.B3;
    const register unsigned short int RTCCLKON = 6;
    sbit  RTCCLKON_bit at RTCCON.B6;
    const register unsigned short int RTSECSEL = 7;
    sbit  RTSECSEL_bit at RTCCON.B7;
    const register unsigned short int SIDL = 13;
    sbit  SIDL_bit at RTCCON.B13;
    sbit  ON_RTCCON_bit at RTCCON.B15;
    const register unsigned short int CAL0 = 16;
    sbit  CAL0_bit at RTCCON.B16;
    const register unsigned short int CAL1 = 17;
    sbit  CAL1_bit at RTCCON.B17;
    const register unsigned short int CAL2 = 18;
    sbit  CAL2_bit at RTCCON.B18;
    const register unsigned short int CAL3 = 19;
    sbit  CAL3_bit at RTCCON.B19;
    const register unsigned short int CAL4 = 20;
    sbit  CAL4_bit at RTCCON.B20;
    const register unsigned short int CAL5 = 21;
    sbit  CAL5_bit at RTCCON.B21;
    const register unsigned short int CAL6 = 22;
    sbit  CAL6_bit at RTCCON.B22;
    const register unsigned short int CAL7 = 23;
    sbit  CAL7_bit at RTCCON.B23;
    const register unsigned short int CAL8 = 24;
    sbit  CAL8_bit at RTCCON.B24;
    const register unsigned short int CAL9 = 25;
    sbit  CAL9_bit at RTCCON.B25;
sfr unsigned long   volatile RTCCONCLR        absolute 0xBF800204;
sfr unsigned long   volatile RTCCONSET        absolute 0xBF800208;
sfr unsigned long   volatile RTCCONINV        absolute 0xBF80020C;
sfr atomic unsigned long   volatile RTCALRM          absolute 0xBF800210;
    const register unsigned short int ARPT0 = 0;
    sbit  ARPT0_bit at RTCALRM.B0;
    const register unsigned short int ARPT1 = 1;
    sbit  ARPT1_bit at RTCALRM.B1;
    const register unsigned short int ARPT2 = 2;
    sbit  ARPT2_bit at RTCALRM.B2;
    const register unsigned short int ARPT3 = 3;
    sbit  ARPT3_bit at RTCALRM.B3;
    const register unsigned short int ARPT4 = 4;
    sbit  ARPT4_bit at RTCALRM.B4;
    const register unsigned short int ARPT5 = 5;
    sbit  ARPT5_bit at RTCALRM.B5;
    const register unsigned short int ARPT6 = 6;
    sbit  ARPT6_bit at RTCALRM.B6;
    const register unsigned short int ARPT7 = 7;
    sbit  ARPT7_bit at RTCALRM.B7;
    const register unsigned short int AMASK0 = 8;
    sbit  AMASK0_bit at RTCALRM.B8;
    const register unsigned short int AMASK1 = 9;
    sbit  AMASK1_bit at RTCALRM.B9;
    const register unsigned short int AMASK2 = 10;
    sbit  AMASK2_bit at RTCALRM.B10;
    const register unsigned short int AMASK3 = 11;
    sbit  AMASK3_bit at RTCALRM.B11;
    const register unsigned short int ALRMSYNC = 12;
    sbit  ALRMSYNC_bit at RTCALRM.B12;
    const register unsigned short int PIV = 13;
    sbit  PIV_bit at RTCALRM.B13;
    const register unsigned short int CHIME = 14;
    sbit  CHIME_bit at RTCALRM.B14;
    const register unsigned short int ALRMEN = 15;
    sbit  ALRMEN_bit at RTCALRM.B15;
sfr unsigned long   volatile RTCALRMCLR       absolute 0xBF800214;
sfr unsigned long   volatile RTCALRMSET       absolute 0xBF800218;
sfr unsigned long   volatile RTCALRMINV       absolute 0xBF80021C;
sfr atomic unsigned long   volatile RTCTIME          absolute 0xBF800220;
    const register unsigned short int SEC010 = 8;
    sbit  SEC010_bit at RTCTIME.B8;
    const register unsigned short int SEC011 = 9;
    sbit  SEC011_bit at RTCTIME.B9;
    const register unsigned short int SEC012 = 10;
    sbit  SEC012_bit at RTCTIME.B10;
    const register unsigned short int SEC013 = 11;
    sbit  SEC013_bit at RTCTIME.B11;
    const register unsigned short int SEC100 = 12;
    sbit  SEC100_bit at RTCTIME.B12;
    const register unsigned short int SEC101 = 13;
    sbit  SEC101_bit at RTCTIME.B13;
    const register unsigned short int SEC102 = 14;
    sbit  SEC102_bit at RTCTIME.B14;
    const register unsigned short int SEC103 = 15;
    sbit  SEC103_bit at RTCTIME.B15;
    const register unsigned short int MIN010 = 16;
    sbit  MIN010_bit at RTCTIME.B16;
    const register unsigned short int MIN011 = 17;
    sbit  MIN011_bit at RTCTIME.B17;
    const register unsigned short int MIN012 = 18;
    sbit  MIN012_bit at RTCTIME.B18;
    const register unsigned short int MIN013 = 19;
    sbit  MIN013_bit at RTCTIME.B19;
    const register unsigned short int MIN100 = 20;
    sbit  MIN100_bit at RTCTIME.B20;
    const register unsigned short int MIN101 = 21;
    sbit  MIN101_bit at RTCTIME.B21;
    const register unsigned short int MIN102 = 22;
    sbit  MIN102_bit at RTCTIME.B22;
    const register unsigned short int MIN103 = 23;
    sbit  MIN103_bit at RTCTIME.B23;
    const register unsigned short int HR010 = 24;
    sbit  HR010_bit at RTCTIME.B24;
    const register unsigned short int HR011 = 25;
    sbit  HR011_bit at RTCTIME.B25;
    const register unsigned short int HR012 = 26;
    sbit  HR012_bit at RTCTIME.B26;
    const register unsigned short int HR013 = 27;
    sbit  HR013_bit at RTCTIME.B27;
    const register unsigned short int HR100 = 28;
    sbit  HR100_bit at RTCTIME.B28;
    const register unsigned short int HR101 = 29;
    sbit  HR101_bit at RTCTIME.B29;
    const register unsigned short int HR102 = 30;
    sbit  HR102_bit at RTCTIME.B30;
    const register unsigned short int HR103 = 31;
    sbit  HR103_bit at RTCTIME.B31;
sfr unsigned long   volatile RTCTIMECLR       absolute 0xBF800224;
sfr unsigned long   volatile RTCTIMESET       absolute 0xBF800228;
sfr unsigned long   volatile RTCTIMEINV       absolute 0xBF80022C;
sfr atomic unsigned long   volatile RTCDATE          absolute 0xBF800230;
    const register unsigned short int WDAY010 = 0;
    sbit  WDAY010_bit at RTCDATE.B0;
    const register unsigned short int WDAY011 = 1;
    sbit  WDAY011_bit at RTCDATE.B1;
    const register unsigned short int WDAY012 = 2;
    sbit  WDAY012_bit at RTCDATE.B2;
    const register unsigned short int WDAY013 = 3;
    sbit  WDAY013_bit at RTCDATE.B3;
    const register unsigned short int DAY010 = 8;
    sbit  DAY010_bit at RTCDATE.B8;
    const register unsigned short int DAY011 = 9;
    sbit  DAY011_bit at RTCDATE.B9;
    const register unsigned short int DAY012 = 10;
    sbit  DAY012_bit at RTCDATE.B10;
    const register unsigned short int DAY013 = 11;
    sbit  DAY013_bit at RTCDATE.B11;
    const register unsigned short int DAY100 = 12;
    sbit  DAY100_bit at RTCDATE.B12;
    const register unsigned short int DAY101 = 13;
    sbit  DAY101_bit at RTCDATE.B13;
    const register unsigned short int DAY102 = 14;
    sbit  DAY102_bit at RTCDATE.B14;
    const register unsigned short int DAY103 = 15;
    sbit  DAY103_bit at RTCDATE.B15;
    const register unsigned short int MONTH010 = 16;
    sbit  MONTH010_bit at RTCDATE.B16;
    const register unsigned short int MONTH011 = 17;
    sbit  MONTH011_bit at RTCDATE.B17;
    const register unsigned short int MONTH012 = 18;
    sbit  MONTH012_bit at RTCDATE.B18;
    const register unsigned short int MONTH013 = 19;
    sbit  MONTH013_bit at RTCDATE.B19;
    const register unsigned short int MONTH100 = 20;
    sbit  MONTH100_bit at RTCDATE.B20;
    const register unsigned short int MONTH101 = 21;
    sbit  MONTH101_bit at RTCDATE.B21;
    const register unsigned short int MONTH102 = 22;
    sbit  MONTH102_bit at RTCDATE.B22;
    const register unsigned short int MONTH103 = 23;
    sbit  MONTH103_bit at RTCDATE.B23;
    const register unsigned short int YEAR010 = 24;
    sbit  YEAR010_bit at RTCDATE.B24;
    const register unsigned short int YEAR011 = 25;
    sbit  YEAR011_bit at RTCDATE.B25;
    const register unsigned short int YEAR012 = 26;
    sbit  YEAR012_bit at RTCDATE.B26;
    const register unsigned short int YEAR013 = 27;
    sbit  YEAR013_bit at RTCDATE.B27;
    const register unsigned short int YEAR100 = 28;
    sbit  YEAR100_bit at RTCDATE.B28;
    const register unsigned short int YEAR101 = 29;
    sbit  YEAR101_bit at RTCDATE.B29;
    const register unsigned short int YEAR102 = 30;
    sbit  YEAR102_bit at RTCDATE.B30;
    const register unsigned short int YEAR103 = 31;
    sbit  YEAR103_bit at RTCDATE.B31;
sfr unsigned long   volatile RTCDATECLR       absolute 0xBF800234;
sfr unsigned long   volatile RTCDATESET       absolute 0xBF800238;
sfr unsigned long   volatile RTCDATEINV       absolute 0xBF80023C;
sfr atomic unsigned long   volatile ALRMTIME         absolute 0xBF800240;
    sbit  SEC010_ALRMTIME_bit at ALRMTIME.B8;
    sbit  SEC011_ALRMTIME_bit at ALRMTIME.B9;
    sbit  SEC012_ALRMTIME_bit at ALRMTIME.B10;
    sbit  SEC013_ALRMTIME_bit at ALRMTIME.B11;
    sbit  SEC100_ALRMTIME_bit at ALRMTIME.B12;
    sbit  SEC101_ALRMTIME_bit at ALRMTIME.B13;
    sbit  SEC102_ALRMTIME_bit at ALRMTIME.B14;
    sbit  SEC103_ALRMTIME_bit at ALRMTIME.B15;
    sbit  MIN010_ALRMTIME_bit at ALRMTIME.B16;
    sbit  MIN011_ALRMTIME_bit at ALRMTIME.B17;
    sbit  MIN012_ALRMTIME_bit at ALRMTIME.B18;
    sbit  MIN013_ALRMTIME_bit at ALRMTIME.B19;
    sbit  MIN100_ALRMTIME_bit at ALRMTIME.B20;
    sbit  MIN101_ALRMTIME_bit at ALRMTIME.B21;
    sbit  MIN102_ALRMTIME_bit at ALRMTIME.B22;
    sbit  MIN103_ALRMTIME_bit at ALRMTIME.B23;
    sbit  HR010_ALRMTIME_bit at ALRMTIME.B24;
    sbit  HR011_ALRMTIME_bit at ALRMTIME.B25;
    sbit  HR012_ALRMTIME_bit at ALRMTIME.B26;
    sbit  HR013_ALRMTIME_bit at ALRMTIME.B27;
    sbit  HR100_ALRMTIME_bit at ALRMTIME.B28;
    sbit  HR101_ALRMTIME_bit at ALRMTIME.B29;
    sbit  HR102_ALRMTIME_bit at ALRMTIME.B30;
    sbit  HR103_ALRMTIME_bit at ALRMTIME.B31;
sfr unsigned long   volatile ALRMTIMECLR      absolute 0xBF800244;
sfr unsigned long   volatile ALRMTIMESET      absolute 0xBF800248;
sfr unsigned long   volatile ALRMTIMEINV      absolute 0xBF80024C;
sfr atomic unsigned long   volatile ALRMDATE         absolute 0xBF800250;
    sbit  WDAY010_ALRMDATE_bit at ALRMDATE.B0;
    sbit  WDAY011_ALRMDATE_bit at ALRMDATE.B1;
    sbit  WDAY012_ALRMDATE_bit at ALRMDATE.B2;
    sbit  WDAY013_ALRMDATE_bit at ALRMDATE.B3;
    sbit  DAY010_ALRMDATE_bit at ALRMDATE.B8;
    sbit  DAY011_ALRMDATE_bit at ALRMDATE.B9;
    sbit  DAY012_ALRMDATE_bit at ALRMDATE.B10;
    sbit  DAY013_ALRMDATE_bit at ALRMDATE.B11;
    sbit  DAY100_ALRMDATE_bit at ALRMDATE.B12;
    sbit  DAY101_ALRMDATE_bit at ALRMDATE.B13;
    sbit  DAY102_ALRMDATE_bit at ALRMDATE.B14;
    sbit  DAY103_ALRMDATE_bit at ALRMDATE.B15;
    sbit  MONTH010_ALRMDATE_bit at ALRMDATE.B16;
    sbit  MONTH011_ALRMDATE_bit at ALRMDATE.B17;
    sbit  MONTH012_ALRMDATE_bit at ALRMDATE.B18;
    sbit  MONTH013_ALRMDATE_bit at ALRMDATE.B19;
    sbit  MONTH100_ALRMDATE_bit at ALRMDATE.B20;
    sbit  MONTH101_ALRMDATE_bit at ALRMDATE.B21;
    sbit  MONTH102_ALRMDATE_bit at ALRMDATE.B22;
    sbit  MONTH103_ALRMDATE_bit at ALRMDATE.B23;
sfr unsigned long   volatile ALRMDATECLR      absolute 0xBF800254;
sfr unsigned long   volatile ALRMDATESET      absolute 0xBF800258;
sfr unsigned long   volatile ALRMDATEINV      absolute 0xBF80025C;
sfr atomic unsigned long   volatile T1CON            absolute 0xBF800600;
    const register unsigned short int TCS = 1;
    sbit  TCS_bit at T1CON.B1;
    const register unsigned short int TSYNC = 2;
    sbit  TSYNC_bit at T1CON.B2;
    const register unsigned short int TCKPS0 = 4;
    sbit  TCKPS0_bit at T1CON.B4;
    const register unsigned short int TCKPS1 = 5;
    sbit  TCKPS1_bit at T1CON.B5;
    const register unsigned short int TGATE = 7;
    sbit  TGATE_bit at T1CON.B7;
    const register unsigned short int TWIP = 11;
    sbit  TWIP_bit at T1CON.B11;
    const register unsigned short int TWDIS = 12;
    sbit  TWDIS_bit at T1CON.B12;
    sbit  SIDL_T1CON_bit at T1CON.B13;
    sbit  ON_T1CON_bit at T1CON.B15;
    sbit  TCKPS0_T1CON_bit at T1CON.B4;
    sbit  TCKPS1_T1CON_bit at T1CON.B5;
    const register unsigned short int TSIDL = 13;
    sbit  TSIDL_bit at T1CON.B13;
    const register unsigned short int TON = 15;
    sbit  TON_bit at T1CON.B15;
sfr unsigned long   volatile T1CONCLR         absolute 0xBF800604;
sfr unsigned long   volatile T1CONSET         absolute 0xBF800608;
sfr unsigned long   volatile T1CONINV         absolute 0xBF80060C;
sfr atomic unsigned long   volatile TMR1             absolute 0xBF800610;
sfr unsigned long   volatile TMR1CLR          absolute 0xBF800614;
sfr unsigned long   volatile TMR1SET          absolute 0xBF800618;
sfr unsigned long   volatile TMR1INV          absolute 0xBF80061C;
sfr atomic unsigned long   volatile PR1              absolute 0xBF800620;
sfr unsigned long   volatile PR1CLR           absolute 0xBF800624;
sfr unsigned long   volatile PR1SET           absolute 0xBF800628;
sfr unsigned long   volatile PR1INV           absolute 0xBF80062C;
sfr atomic unsigned long   volatile T2CON            absolute 0xBF800800;
    sbit  TCS_T2CON_bit at T2CON.B1;
    const register unsigned short int T32 = 3;
    sbit  T32_bit at T2CON.B3;
    sbit  TCKPS0_T2CON_bit at T2CON.B4;
    sbit  TCKPS1_T2CON_bit at T2CON.B5;
    const register unsigned short int TCKPS2 = 6;
    sbit  TCKPS2_bit at T2CON.B6;
    sbit  TGATE_T2CON_bit at T2CON.B7;
    sbit  SIDL_T2CON_bit at T2CON.B13;
    sbit  ON_T2CON_bit at T2CON.B15;
    sbit  TCKPS2_T2CON_bit at T2CON.B6;
    sbit  TSIDL_T2CON_bit at T2CON.B13;
    sbit  TON_T2CON_bit at T2CON.B15;
sfr unsigned long   volatile T2CONCLR         absolute 0xBF800804;
sfr unsigned long   volatile T2CONSET         absolute 0xBF800808;
sfr unsigned long   volatile T2CONINV         absolute 0xBF80080C;
sfr atomic unsigned long   volatile TMR2             absolute 0xBF800810;
sfr unsigned long   volatile TMR2CLR          absolute 0xBF800814;
sfr unsigned long   volatile TMR2SET          absolute 0xBF800818;
sfr unsigned long   volatile TMR2INV          absolute 0xBF80081C;
sfr atomic unsigned long   volatile PR2              absolute 0xBF800820;
sfr unsigned long   volatile PR2CLR           absolute 0xBF800824;
sfr unsigned long   volatile PR2SET           absolute 0xBF800828;
sfr unsigned long   volatile PR2INV           absolute 0xBF80082C;
sfr atomic unsigned long   volatile T3CON            absolute 0xBF800A00;
    sbit  TCS_T3CON_bit at T3CON.B1;
    sbit  TCKPS0_T3CON_bit at T3CON.B4;
    sbit  TCKPS1_T3CON_bit at T3CON.B5;
    sbit  TCKPS2_T3CON_bit at T3CON.B6;
    sbit  TGATE_T3CON_bit at T3CON.B7;
    sbit  SIDL_T3CON_bit at T3CON.B13;
    sbit  ON_T3CON_bit at T3CON.B15;
    sbit  TSIDL_T3CON_bit at T3CON.B13;
    sbit  TON_T3CON_bit at T3CON.B15;
sfr unsigned long   volatile T3CONCLR         absolute 0xBF800A04;
sfr unsigned long   volatile T3CONSET         absolute 0xBF800A08;
sfr unsigned long   volatile T3CONINV         absolute 0xBF800A0C;
sfr atomic unsigned long   volatile TMR3             absolute 0xBF800A10;
sfr unsigned long   volatile TMR3CLR          absolute 0xBF800A14;
sfr unsigned long   volatile TMR3SET          absolute 0xBF800A18;
sfr unsigned long   volatile TMR3INV          absolute 0xBF800A1C;
sfr atomic unsigned long   volatile PR3              absolute 0xBF800A20;
sfr unsigned long   volatile PR3CLR           absolute 0xBF800A24;
sfr unsigned long   volatile PR3SET           absolute 0xBF800A28;
sfr unsigned long   volatile PR3INV           absolute 0xBF800A2C;
sfr atomic unsigned long   volatile T4CON            absolute 0xBF800C00;
    sbit  TCS_T4CON_bit at T4CON.B1;
    sbit  T32_T4CON_bit at T4CON.B3;
    sbit  TCKPS0_T4CON_bit at T4CON.B4;
    sbit  TCKPS1_T4CON_bit at T4CON.B5;
    sbit  TCKPS2_T4CON_bit at T4CON.B6;
    sbit  TGATE_T4CON_bit at T4CON.B7;
    sbit  SIDL_T4CON_bit at T4CON.B13;
    sbit  ON_T4CON_bit at T4CON.B15;
    sbit  TSIDL_T4CON_bit at T4CON.B13;
    sbit  TON_T4CON_bit at T4CON.B15;
sfr unsigned long   volatile T4CONCLR         absolute 0xBF800C04;
sfr unsigned long   volatile T4CONSET         absolute 0xBF800C08;
sfr unsigned long   volatile T4CONINV         absolute 0xBF800C0C;
sfr atomic unsigned long   volatile TMR4             absolute 0xBF800C10;
sfr unsigned long   volatile TMR4CLR          absolute 0xBF800C14;
sfr unsigned long   volatile TMR4SET          absolute 0xBF800C18;
sfr unsigned long   volatile TMR4INV          absolute 0xBF800C1C;
sfr atomic unsigned long   volatile PR4              absolute 0xBF800C20;
sfr unsigned long   volatile PR4CLR           absolute 0xBF800C24;
sfr unsigned long   volatile PR4SET           absolute 0xBF800C28;
sfr unsigned long   volatile PR4INV           absolute 0xBF800C2C;
sfr atomic unsigned long   volatile T5CON            absolute 0xBF800E00;
    sbit  TCS_T5CON_bit at T5CON.B1;
    sbit  TCKPS0_T5CON_bit at T5CON.B4;
    sbit  TCKPS1_T5CON_bit at T5CON.B5;
    sbit  TCKPS2_T5CON_bit at T5CON.B6;
    sbit  TGATE_T5CON_bit at T5CON.B7;
    sbit  SIDL_T5CON_bit at T5CON.B13;
    sbit  ON_T5CON_bit at T5CON.B15;
    sbit  TSIDL_T5CON_bit at T5CON.B13;
    sbit  TON_T5CON_bit at T5CON.B15;
sfr unsigned long   volatile T5CONCLR         absolute 0xBF800E04;
sfr unsigned long   volatile T5CONSET         absolute 0xBF800E08;
sfr unsigned long   volatile T5CONINV         absolute 0xBF800E0C;
sfr atomic unsigned long   volatile TMR5             absolute 0xBF800E10;
sfr unsigned long   volatile TMR5CLR          absolute 0xBF800E14;
sfr unsigned long   volatile TMR5SET          absolute 0xBF800E18;
sfr unsigned long   volatile TMR5INV          absolute 0xBF800E1C;
sfr atomic unsigned long   volatile PR5              absolute 0xBF800E20;
sfr unsigned long   volatile PR5CLR           absolute 0xBF800E24;
sfr unsigned long   volatile PR5SET           absolute 0xBF800E28;
sfr unsigned long   volatile PR5INV           absolute 0xBF800E2C;
sfr atomic unsigned long   volatile IC1CON           absolute 0xBF802000;
    const register unsigned short int ICM0 = 0;
    sbit  ICM0_bit at IC1CON.B0;
    const register unsigned short int ICM1 = 1;
    sbit  ICM1_bit at IC1CON.B1;
    const register unsigned short int ICM2 = 2;
    sbit  ICM2_bit at IC1CON.B2;
    const register unsigned short int ICBNE = 3;
    sbit  ICBNE_bit at IC1CON.B3;
    const register unsigned short int ICOV = 4;
    sbit  ICOV_bit at IC1CON.B4;
    const register unsigned short int ICI0 = 5;
    sbit  ICI0_bit at IC1CON.B5;
    const register unsigned short int ICI1 = 6;
    sbit  ICI1_bit at IC1CON.B6;
    const register unsigned short int ICTMR = 7;
    sbit  ICTMR_bit at IC1CON.B7;
    const register unsigned short int C32 = 8;
    sbit  C32_bit at IC1CON.B8;
    const register unsigned short int FEDGE = 9;
    sbit  FEDGE_bit at IC1CON.B9;
    sbit  SIDL_IC1CON_bit at IC1CON.B13;
    sbit  ON_IC1CON_bit at IC1CON.B15;
    sbit  ICM0_IC1CON_bit at IC1CON.B0;
    sbit  ICM1_IC1CON_bit at IC1CON.B1;
    sbit  ICM2_IC1CON_bit at IC1CON.B2;
    sbit  ICI0_IC1CON_bit at IC1CON.B5;
    sbit  ICI1_IC1CON_bit at IC1CON.B6;
    const register unsigned short int ICSIDL = 13;
    sbit  ICSIDL_bit at IC1CON.B13;
sfr unsigned long   volatile IC1CONCLR        absolute 0xBF802004;
sfr unsigned long   volatile IC1CONSET        absolute 0xBF802008;
sfr unsigned long   volatile IC1CONINV        absolute 0xBF80200C;
sfr unsigned long   volatile IC1BUF           absolute 0xBF802010;
sfr atomic unsigned long   volatile IC2CON           absolute 0xBF802200;
    sbit  ICM0_IC2CON_bit at IC2CON.B0;
    sbit  ICM1_IC2CON_bit at IC2CON.B1;
    sbit  ICM2_IC2CON_bit at IC2CON.B2;
    sbit  ICBNE_IC2CON_bit at IC2CON.B3;
    sbit  ICOV_IC2CON_bit at IC2CON.B4;
    sbit  ICI0_IC2CON_bit at IC2CON.B5;
    sbit  ICI1_IC2CON_bit at IC2CON.B6;
    sbit  ICTMR_IC2CON_bit at IC2CON.B7;
    sbit  C32_IC2CON_bit at IC2CON.B8;
    sbit  FEDGE_IC2CON_bit at IC2CON.B9;
    sbit  SIDL_IC2CON_bit at IC2CON.B13;
    sbit  ON_IC2CON_bit at IC2CON.B15;
    sbit  ICSIDL_IC2CON_bit at IC2CON.B13;
sfr unsigned long   volatile IC2CONCLR        absolute 0xBF802204;
sfr unsigned long   volatile IC2CONSET        absolute 0xBF802208;
sfr unsigned long   volatile IC2CONINV        absolute 0xBF80220C;
sfr unsigned long   volatile IC2BUF           absolute 0xBF802210;
sfr atomic unsigned long   volatile IC3CON           absolute 0xBF802400;
    sbit  ICM0_IC3CON_bit at IC3CON.B0;
    sbit  ICM1_IC3CON_bit at IC3CON.B1;
    sbit  ICM2_IC3CON_bit at IC3CON.B2;
    sbit  ICBNE_IC3CON_bit at IC3CON.B3;
    sbit  ICOV_IC3CON_bit at IC3CON.B4;
    sbit  ICI0_IC3CON_bit at IC3CON.B5;
    sbit  ICI1_IC3CON_bit at IC3CON.B6;
    sbit  ICTMR_IC3CON_bit at IC3CON.B7;
    sbit  C32_IC3CON_bit at IC3CON.B8;
    sbit  FEDGE_IC3CON_bit at IC3CON.B9;
    sbit  SIDL_IC3CON_bit at IC3CON.B13;
    sbit  ON_IC3CON_bit at IC3CON.B15;
    sbit  ICSIDL_IC3CON_bit at IC3CON.B13;
sfr unsigned long   volatile IC3CONCLR        absolute 0xBF802404;
sfr unsigned long   volatile IC3CONSET        absolute 0xBF802408;
sfr unsigned long   volatile IC3CONINV        absolute 0xBF80240C;
sfr unsigned long   volatile IC3BUF           absolute 0xBF802410;
sfr atomic unsigned long   volatile IC4CON           absolute 0xBF802600;
    sbit  ICM0_IC4CON_bit at IC4CON.B0;
    sbit  ICM1_IC4CON_bit at IC4CON.B1;
    sbit  ICM2_IC4CON_bit at IC4CON.B2;
    sbit  ICBNE_IC4CON_bit at IC4CON.B3;
    sbit  ICOV_IC4CON_bit at IC4CON.B4;
    sbit  ICI0_IC4CON_bit at IC4CON.B5;
    sbit  ICI1_IC4CON_bit at IC4CON.B6;
    sbit  ICTMR_IC4CON_bit at IC4CON.B7;
    sbit  C32_IC4CON_bit at IC4CON.B8;
    sbit  FEDGE_IC4CON_bit at IC4CON.B9;
    sbit  SIDL_IC4CON_bit at IC4CON.B13;
    sbit  ON_IC4CON_bit at IC4CON.B15;
    sbit  ICSIDL_IC4CON_bit at IC4CON.B13;
sfr unsigned long   volatile IC4CONCLR        absolute 0xBF802604;
sfr unsigned long   volatile IC4CONSET        absolute 0xBF802608;
sfr unsigned long   volatile IC4CONINV        absolute 0xBF80260C;
sfr unsigned long   volatile IC4BUF           absolute 0xBF802610;
sfr atomic unsigned long   volatile IC5CON           absolute 0xBF802800;
    sbit  ICM0_IC5CON_bit at IC5CON.B0;
    sbit  ICM1_IC5CON_bit at IC5CON.B1;
    sbit  ICM2_IC5CON_bit at IC5CON.B2;
    sbit  ICBNE_IC5CON_bit at IC5CON.B3;
    sbit  ICOV_IC5CON_bit at IC5CON.B4;
    sbit  ICI0_IC5CON_bit at IC5CON.B5;
    sbit  ICI1_IC5CON_bit at IC5CON.B6;
    sbit  ICTMR_IC5CON_bit at IC5CON.B7;
    sbit  C32_IC5CON_bit at IC5CON.B8;
    sbit  FEDGE_IC5CON_bit at IC5CON.B9;
    sbit  SIDL_IC5CON_bit at IC5CON.B13;
    sbit  ON_IC5CON_bit at IC5CON.B15;
    sbit  ICSIDL_IC5CON_bit at IC5CON.B13;
sfr unsigned long   volatile IC5CONCLR        absolute 0xBF802804;
sfr unsigned long   volatile IC5CONSET        absolute 0xBF802808;
sfr unsigned long   volatile IC5CONINV        absolute 0xBF80280C;
sfr unsigned long   volatile IC5BUF           absolute 0xBF802810;
sfr atomic unsigned long   volatile OC1CON           absolute 0xBF803000;
    const register unsigned short int OCM0 = 0;
    sbit  OCM0_bit at OC1CON.B0;
    const register unsigned short int OCM1 = 1;
    sbit  OCM1_bit at OC1CON.B1;
    const register unsigned short int OCM2 = 2;
    sbit  OCM2_bit at OC1CON.B2;
    const register unsigned short int OCTSEL = 3;
    sbit  OCTSEL_bit at OC1CON.B3;
    const register unsigned short int OCFLT = 4;
    sbit  OCFLT_bit at OC1CON.B4;
    const register unsigned short int OC32 = 5;
    sbit  OC32_bit at OC1CON.B5;
    sbit  SIDL_OC1CON_bit at OC1CON.B13;
    sbit  ON_OC1CON_bit at OC1CON.B15;
    sbit  OCM0_OC1CON_bit at OC1CON.B0;
    sbit  OCM1_OC1CON_bit at OC1CON.B1;
    sbit  OCM2_OC1CON_bit at OC1CON.B2;
    const register unsigned short int OCSIDL = 13;
    sbit  OCSIDL_bit at OC1CON.B13;
sfr unsigned long   volatile OC1CONCLR        absolute 0xBF803004;
sfr unsigned long   volatile OC1CONSET        absolute 0xBF803008;
sfr unsigned long   volatile OC1CONINV        absolute 0xBF80300C;
sfr atomic unsigned long   volatile OC1R             absolute 0xBF803010;
sfr unsigned long   volatile OC1RCLR          absolute 0xBF803014;
sfr unsigned long   volatile OC1RSET          absolute 0xBF803018;
sfr unsigned long   volatile OC1RINV          absolute 0xBF80301C;
sfr atomic unsigned long            OC1RS            absolute 0xBF803020;
sfr unsigned long   volatile OC1RSCLR         absolute 0xBF803024;
sfr unsigned long   volatile OC1RSSET         absolute 0xBF803028;
sfr unsigned long   volatile OC1RSINV         absolute 0xBF80302C;
sfr atomic unsigned long   volatile OC2CON           absolute 0xBF803200;
    sbit  OCM0_OC2CON_bit at OC2CON.B0;
    sbit  OCM1_OC2CON_bit at OC2CON.B1;
    sbit  OCM2_OC2CON_bit at OC2CON.B2;
    sbit  OCTSEL_OC2CON_bit at OC2CON.B3;
    sbit  OCFLT_OC2CON_bit at OC2CON.B4;
    sbit  OC32_OC2CON_bit at OC2CON.B5;
    sbit  SIDL_OC2CON_bit at OC2CON.B13;
    sbit  ON_OC2CON_bit at OC2CON.B15;
    sbit  OCSIDL_OC2CON_bit at OC2CON.B13;
sfr unsigned long   volatile OC2CONCLR        absolute 0xBF803204;
sfr unsigned long   volatile OC2CONSET        absolute 0xBF803208;
sfr unsigned long   volatile OC2CONINV        absolute 0xBF80320C;
sfr atomic unsigned long   volatile OC2R             absolute 0xBF803210;
sfr unsigned long   volatile OC2RCLR          absolute 0xBF803214;
sfr unsigned long   volatile OC2RSET          absolute 0xBF803218;
sfr unsigned long   volatile OC2RINV          absolute 0xBF80321C;
sfr atomic unsigned long            OC2RS            absolute 0xBF803220;
sfr unsigned long   volatile OC2RSCLR         absolute 0xBF803224;
sfr unsigned long   volatile OC2RSSET         absolute 0xBF803228;
sfr unsigned long   volatile OC2RSINV         absolute 0xBF80322C;
sfr atomic unsigned long   volatile OC3CON           absolute 0xBF803400;
    sbit  OCM0_OC3CON_bit at OC3CON.B0;
    sbit  OCM1_OC3CON_bit at OC3CON.B1;
    sbit  OCM2_OC3CON_bit at OC3CON.B2;
    sbit  OCTSEL_OC3CON_bit at OC3CON.B3;
    sbit  OCFLT_OC3CON_bit at OC3CON.B4;
    sbit  OC32_OC3CON_bit at OC3CON.B5;
    sbit  SIDL_OC3CON_bit at OC3CON.B13;
    sbit  ON_OC3CON_bit at OC3CON.B15;
    sbit  OCSIDL_OC3CON_bit at OC3CON.B13;
sfr unsigned long   volatile OC3CONCLR        absolute 0xBF803404;
sfr unsigned long   volatile OC3CONSET        absolute 0xBF803408;
sfr unsigned long   volatile OC3CONINV        absolute 0xBF80340C;
sfr atomic unsigned long   volatile OC3R             absolute 0xBF803410;
sfr unsigned long   volatile OC3RCLR          absolute 0xBF803414;
sfr unsigned long   volatile OC3RSET          absolute 0xBF803418;
sfr unsigned long   volatile OC3RINV          absolute 0xBF80341C;
sfr atomic unsigned long            OC3RS            absolute 0xBF803420;
sfr unsigned long   volatile OC3RSCLR         absolute 0xBF803424;
sfr unsigned long   volatile OC3RSSET         absolute 0xBF803428;
sfr unsigned long   volatile OC3RSINV         absolute 0xBF80342C;
sfr atomic unsigned long   volatile OC4CON           absolute 0xBF803600;
    sbit  OCM0_OC4CON_bit at OC4CON.B0;
    sbit  OCM1_OC4CON_bit at OC4CON.B1;
    sbit  OCM2_OC4CON_bit at OC4CON.B2;
    sbit  OCTSEL_OC4CON_bit at OC4CON.B3;
    sbit  OCFLT_OC4CON_bit at OC4CON.B4;
    sbit  OC32_OC4CON_bit at OC4CON.B5;
    sbit  SIDL_OC4CON_bit at OC4CON.B13;
    sbit  ON_OC4CON_bit at OC4CON.B15;
    sbit  OCSIDL_OC4CON_bit at OC4CON.B13;
sfr unsigned long   volatile OC4CONCLR        absolute 0xBF803604;
sfr unsigned long   volatile OC4CONSET        absolute 0xBF803608;
sfr unsigned long   volatile OC4CONINV        absolute 0xBF80360C;
sfr atomic unsigned long   volatile OC4R             absolute 0xBF803610;
sfr unsigned long   volatile OC4RCLR          absolute 0xBF803614;
sfr unsigned long   volatile OC4RSET          absolute 0xBF803618;
sfr unsigned long   volatile OC4RINV          absolute 0xBF80361C;
sfr atomic unsigned long            OC4RS            absolute 0xBF803620;
sfr unsigned long   volatile OC4RSCLR         absolute 0xBF803624;
sfr unsigned long   volatile OC4RSSET         absolute 0xBF803628;
sfr unsigned long   volatile OC4RSINV         absolute 0xBF80362C;
sfr atomic unsigned long   volatile OC5CON           absolute 0xBF803800;
    sbit  OCM0_OC5CON_bit at OC5CON.B0;
    sbit  OCM1_OC5CON_bit at OC5CON.B1;
    sbit  OCM2_OC5CON_bit at OC5CON.B2;
    sbit  OCTSEL_OC5CON_bit at OC5CON.B3;
    sbit  OCFLT_OC5CON_bit at OC5CON.B4;
    sbit  OC32_OC5CON_bit at OC5CON.B5;
    sbit  SIDL_OC5CON_bit at OC5CON.B13;
    sbit  ON_OC5CON_bit at OC5CON.B15;
    sbit  OCSIDL_OC5CON_bit at OC5CON.B13;
sfr unsigned long   volatile OC5CONCLR        absolute 0xBF803804;
sfr unsigned long   volatile OC5CONSET        absolute 0xBF803808;
sfr unsigned long   volatile OC5CONINV        absolute 0xBF80380C;
sfr atomic unsigned long   volatile OC5R             absolute 0xBF803810;
sfr unsigned long   volatile OC5RCLR          absolute 0xBF803814;
sfr unsigned long   volatile OC5RSET          absolute 0xBF803818;
sfr unsigned long   volatile OC5RINV          absolute 0xBF80381C;
sfr atomic unsigned long            OC5RS            absolute 0xBF803820;
sfr unsigned long   volatile OC5RSCLR         absolute 0xBF803824;
sfr unsigned long   volatile OC5RSSET         absolute 0xBF803828;
sfr unsigned long   volatile OC5RSINV         absolute 0xBF80382C;
sfr atomic unsigned long   volatile I2C1CON          absolute 0xBF805000;
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at I2C1CON.B0;
    const register unsigned short int RSEN = 1;
    sbit  RSEN_bit at I2C1CON.B1;
    const register unsigned short int PEN = 2;
    sbit  PEN_bit at I2C1CON.B2;
    const register unsigned short int RCEN = 3;
    sbit  RCEN_bit at I2C1CON.B3;
    const register unsigned short int ACKEN = 4;
    sbit  ACKEN_bit at I2C1CON.B4;
    const register unsigned short int ACKDT = 5;
    sbit  ACKDT_bit at I2C1CON.B5;
    const register unsigned short int STREN = 6;
    sbit  STREN_bit at I2C1CON.B6;
    const register unsigned short int GCEN = 7;
    sbit  GCEN_bit at I2C1CON.B7;
    const register unsigned short int SMEN = 8;
    sbit  SMEN_bit at I2C1CON.B8;
    const register unsigned short int DISSLW = 9;
    sbit  DISSLW_bit at I2C1CON.B9;
    const register unsigned short int A10M = 10;
    sbit  A10M_bit at I2C1CON.B10;
    const register unsigned short int STRICT = 11;
    sbit  STRICT_bit at I2C1CON.B11;
    const register unsigned short int SCLREL = 12;
    sbit  SCLREL_bit at I2C1CON.B12;
    sbit  SIDL_I2C1CON_bit at I2C1CON.B13;
    sbit  ON_I2C1CON_bit at I2C1CON.B15;
    const register unsigned short int IPMIEN = 11;
    sbit  IPMIEN_bit at I2C1CON.B11;
    const register unsigned short int I2CSIDL = 13;
    sbit  I2CSIDL_bit at I2C1CON.B13;
    const register unsigned short int I2CEN = 15;
    sbit  I2CEN_bit at I2C1CON.B15;
sfr atomic unsigned long   volatile I2C1ACON         absolute 0xBF805000;
    sbit  SEN_I2C1ACON_bit at I2C1ACON.B0;
    sbit  RSEN_I2C1ACON_bit at I2C1ACON.B1;
    sbit  PEN_I2C1ACON_bit at I2C1ACON.B2;
    sbit  RCEN_I2C1ACON_bit at I2C1ACON.B3;
    sbit  ACKEN_I2C1ACON_bit at I2C1ACON.B4;
    sbit  ACKDT_I2C1ACON_bit at I2C1ACON.B5;
    sbit  STREN_I2C1ACON_bit at I2C1ACON.B6;
    sbit  GCEN_I2C1ACON_bit at I2C1ACON.B7;
    sbit  SMEN_I2C1ACON_bit at I2C1ACON.B8;
    sbit  DISSLW_I2C1ACON_bit at I2C1ACON.B9;
    sbit  A10M_I2C1ACON_bit at I2C1ACON.B10;
    sbit  STRICT_I2C1ACON_bit at I2C1ACON.B11;
    sbit  SCLREL_I2C1ACON_bit at I2C1ACON.B12;
    sbit  SIDL_I2C1ACON_bit at I2C1ACON.B13;
    sbit  ON_I2C1ACON_bit at I2C1ACON.B15;
    sbit  IPMIEN_I2C1ACON_bit at I2C1ACON.B11;
    sbit  I2CSIDL_I2C1ACON_bit at I2C1ACON.B13;
    sbit  I2CEN_I2C1ACON_bit at I2C1ACON.B15;
sfr unsigned long   volatile I2C1CONCLR       absolute 0xBF805004;
sfr unsigned long   volatile I2C1ACONCLR      absolute 0xBF805004;
sfr unsigned long   volatile I2C1CONSET       absolute 0xBF805008;
sfr unsigned long   volatile I2C1ACONSET      absolute 0xBF805008;
sfr unsigned long   volatile I2C1CONINV       absolute 0xBF80500C;
sfr unsigned long   volatile I2C1ACONINV      absolute 0xBF80500C;
sfr atomic unsigned long   volatile I2C1STAT         absolute 0xBF805010;
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
    const register unsigned short int BCL = 10;
    sbit  BCL_bit at I2C1STAT.B10;
    const register unsigned short int TRSTAT = 14;
    sbit  TRSTAT_bit at I2C1STAT.B14;
    const register unsigned short int ACKSTAT = 15;
    sbit  ACKSTAT_bit at I2C1STAT.B15;
    const register unsigned short int I2CPOV = 6;
    sbit  I2CPOV_bit at I2C1STAT.B6;
sfr atomic unsigned long   volatile I2C1ASTAT        absolute 0xBF805010;
    sbit  TBF_I2C1ASTAT_bit at I2C1ASTAT.B0;
    sbit  RBF_I2C1ASTAT_bit at I2C1ASTAT.B1;
    sbit  R_W_I2C1ASTAT_bit at I2C1ASTAT.B2;
    sbit  S_I2C1ASTAT_bit at I2C1ASTAT.B3;
    sbit  P_I2C1ASTAT_bit at I2C1ASTAT.B4;
    sbit  D_A_I2C1ASTAT_bit at I2C1ASTAT.B5;
    sbit  I2COV_I2C1ASTAT_bit at I2C1ASTAT.B6;
    sbit  IWCOL_I2C1ASTAT_bit at I2C1ASTAT.B7;
    sbit  ADD10_I2C1ASTAT_bit at I2C1ASTAT.B8;
    sbit  GCSTAT_I2C1ASTAT_bit at I2C1ASTAT.B9;
    sbit  BCL_I2C1ASTAT_bit at I2C1ASTAT.B10;
    sbit  TRSTAT_I2C1ASTAT_bit at I2C1ASTAT.B14;
    sbit  ACKSTAT_I2C1ASTAT_bit at I2C1ASTAT.B15;
    sbit  I2CPOV_I2C1ASTAT_bit at I2C1ASTAT.B6;
sfr unsigned long   volatile I2C1STATCLR      absolute 0xBF805014;
sfr unsigned long   volatile I2C1ASTATCLR     absolute 0xBF805014;
sfr unsigned long   volatile I2C1STATSET      absolute 0xBF805018;
sfr unsigned long   volatile I2C1ASTATSET     absolute 0xBF805018;
sfr unsigned long   volatile I2C1STATINV      absolute 0xBF80501C;
sfr unsigned long   volatile I2C1ASTATINV     absolute 0xBF80501C;
sfr atomic unsigned long   volatile I2C1ADD          absolute 0xBF805020;
sfr atomic unsigned long   volatile I2C1AADD         absolute 0xBF805020;
sfr unsigned long   volatile I2C1ADDCLR       absolute 0xBF805024;
sfr unsigned long   volatile I2C1AADDCLR      absolute 0xBF805024;
sfr unsigned long   volatile I2C1ADDSET       absolute 0xBF805028;
sfr unsigned long   volatile I2C1AADDSET      absolute 0xBF805028;
sfr unsigned long   volatile I2C1ADDINV       absolute 0xBF80502C;
sfr unsigned long   volatile I2C1AADDINV      absolute 0xBF80502C;
sfr atomic unsigned long   volatile I2C1MSK          absolute 0xBF805030;
sfr atomic unsigned long   volatile I2C1AMSK         absolute 0xBF805030;
sfr unsigned long   volatile I2C1MSKCLR       absolute 0xBF805034;
sfr unsigned long   volatile I2C1AMSKCLR      absolute 0xBF805034;
sfr unsigned long   volatile I2C1MSKSET       absolute 0xBF805038;
sfr unsigned long   volatile I2C1AMSKSET      absolute 0xBF805038;
sfr unsigned long   volatile I2C1MSKINV       absolute 0xBF80503C;
sfr unsigned long   volatile I2C1AMSKINV      absolute 0xBF80503C;
sfr atomic unsigned long            I2C1BRG          absolute 0xBF805040;
sfr atomic unsigned long   volatile I2C1ABRG         absolute 0xBF805040;
sfr unsigned long   volatile I2C1BRGCLR       absolute 0xBF805044;
sfr unsigned long   volatile I2C1ABRGCLR      absolute 0xBF805044;
sfr unsigned long   volatile I2C1BRGSET       absolute 0xBF805048;
sfr unsigned long   volatile I2C1ABRGSET      absolute 0xBF805048;
sfr unsigned long   volatile I2C1BRGINV       absolute 0xBF80504C;
sfr unsigned long   volatile I2C1ABRGINV      absolute 0xBF80504C;
sfr atomic unsigned long   volatile I2C1TRN          absolute 0xBF805050;
sfr atomic unsigned long   volatile I2C1ATRN         absolute 0xBF805050;
sfr unsigned long   volatile I2C1TRNCLR       absolute 0xBF805054;
sfr unsigned long   volatile I2C1ATRNCLR      absolute 0xBF805054;
sfr unsigned long   volatile I2C1TRNSET       absolute 0xBF805058;
sfr unsigned long   volatile I2C1ATRNSET      absolute 0xBF805058;
sfr unsigned long   volatile I2C1TRNINV       absolute 0xBF80505C;
sfr unsigned long   volatile I2C1ATRNINV      absolute 0xBF80505C;
sfr unsigned long   volatile I2C1RCV          absolute 0xBF805060;
sfr unsigned long   volatile I2C1ARCV         absolute 0xBF805060;
sfr atomic unsigned long   volatile I2C2CON          absolute 0xBF805100;
    sbit  SEN_I2C2CON_bit at I2C2CON.B0;
    sbit  RSEN_I2C2CON_bit at I2C2CON.B1;
    sbit  PEN_I2C2CON_bit at I2C2CON.B2;
    sbit  RCEN_I2C2CON_bit at I2C2CON.B3;
    sbit  ACKEN_I2C2CON_bit at I2C2CON.B4;
    sbit  ACKDT_I2C2CON_bit at I2C2CON.B5;
    sbit  STREN_I2C2CON_bit at I2C2CON.B6;
    sbit  GCEN_I2C2CON_bit at I2C2CON.B7;
    sbit  SMEN_I2C2CON_bit at I2C2CON.B8;
    sbit  DISSLW_I2C2CON_bit at I2C2CON.B9;
    sbit  A10M_I2C2CON_bit at I2C2CON.B10;
    sbit  STRICT_I2C2CON_bit at I2C2CON.B11;
    sbit  SCLREL_I2C2CON_bit at I2C2CON.B12;
    sbit  SIDL_I2C2CON_bit at I2C2CON.B13;
    sbit  ON_I2C2CON_bit at I2C2CON.B15;
    sbit  IPMIEN_I2C2CON_bit at I2C2CON.B11;
    sbit  I2CSIDL_I2C2CON_bit at I2C2CON.B13;
    sbit  I2CEN_I2C2CON_bit at I2C2CON.B15;
sfr atomic unsigned long   volatile I2C2ACON         absolute 0xBF805100;
    sbit  SEN_I2C2ACON_bit at I2C2ACON.B0;
    sbit  RSEN_I2C2ACON_bit at I2C2ACON.B1;
    sbit  PEN_I2C2ACON_bit at I2C2ACON.B2;
    sbit  RCEN_I2C2ACON_bit at I2C2ACON.B3;
    sbit  ACKEN_I2C2ACON_bit at I2C2ACON.B4;
    sbit  ACKDT_I2C2ACON_bit at I2C2ACON.B5;
    sbit  STREN_I2C2ACON_bit at I2C2ACON.B6;
    sbit  GCEN_I2C2ACON_bit at I2C2ACON.B7;
    sbit  SMEN_I2C2ACON_bit at I2C2ACON.B8;
    sbit  DISSLW_I2C2ACON_bit at I2C2ACON.B9;
    sbit  A10M_I2C2ACON_bit at I2C2ACON.B10;
    sbit  STRICT_I2C2ACON_bit at I2C2ACON.B11;
    sbit  SCLREL_I2C2ACON_bit at I2C2ACON.B12;
    sbit  SIDL_I2C2ACON_bit at I2C2ACON.B13;
    sbit  ON_I2C2ACON_bit at I2C2ACON.B15;
    sbit  IPMIEN_I2C2ACON_bit at I2C2ACON.B11;
    sbit  I2CSIDL_I2C2ACON_bit at I2C2ACON.B13;
    sbit  I2CEN_I2C2ACON_bit at I2C2ACON.B15;
sfr unsigned long   volatile I2C2CONCLR       absolute 0xBF805104;
sfr unsigned long   volatile I2C2ACONCLR      absolute 0xBF805104;
sfr unsigned long   volatile I2C2CONSET       absolute 0xBF805108;
sfr unsigned long   volatile I2C2ACONSET      absolute 0xBF805108;
sfr unsigned long   volatile I2C2CONINV       absolute 0xBF80510C;
sfr unsigned long   volatile I2C2ACONINV      absolute 0xBF80510C;
sfr atomic unsigned long   volatile I2C2STAT         absolute 0xBF805110;
    sbit  TBF_I2C2STAT_bit at I2C2STAT.B0;
    sbit  RBF_I2C2STAT_bit at I2C2STAT.B1;
    sbit  R_W_I2C2STAT_bit at I2C2STAT.B2;
    sbit  S_I2C2STAT_bit at I2C2STAT.B3;
    sbit  P_I2C2STAT_bit at I2C2STAT.B4;
    sbit  D_A_I2C2STAT_bit at I2C2STAT.B5;
    sbit  I2COV_I2C2STAT_bit at I2C2STAT.B6;
    sbit  IWCOL_I2C2STAT_bit at I2C2STAT.B7;
    sbit  ADD10_I2C2STAT_bit at I2C2STAT.B8;
    sbit  GCSTAT_I2C2STAT_bit at I2C2STAT.B9;
    sbit  BCL_I2C2STAT_bit at I2C2STAT.B10;
    sbit  TRSTAT_I2C2STAT_bit at I2C2STAT.B14;
    sbit  ACKSTAT_I2C2STAT_bit at I2C2STAT.B15;
    sbit  I2CPOV_I2C2STAT_bit at I2C2STAT.B6;
sfr atomic unsigned long   volatile I2C2ASTAT        absolute 0xBF805110;
    sbit  TBF_I2C2ASTAT_bit at I2C2ASTAT.B0;
    sbit  RBF_I2C2ASTAT_bit at I2C2ASTAT.B1;
    sbit  R_W_I2C2ASTAT_bit at I2C2ASTAT.B2;
    sbit  S_I2C2ASTAT_bit at I2C2ASTAT.B3;
    sbit  P_I2C2ASTAT_bit at I2C2ASTAT.B4;
    sbit  D_A_I2C2ASTAT_bit at I2C2ASTAT.B5;
    sbit  I2COV_I2C2ASTAT_bit at I2C2ASTAT.B6;
    sbit  IWCOL_I2C2ASTAT_bit at I2C2ASTAT.B7;
    sbit  ADD10_I2C2ASTAT_bit at I2C2ASTAT.B8;
    sbit  GCSTAT_I2C2ASTAT_bit at I2C2ASTAT.B9;
    sbit  BCL_I2C2ASTAT_bit at I2C2ASTAT.B10;
    sbit  TRSTAT_I2C2ASTAT_bit at I2C2ASTAT.B14;
    sbit  ACKSTAT_I2C2ASTAT_bit at I2C2ASTAT.B15;
    sbit  I2CPOV_I2C2ASTAT_bit at I2C2ASTAT.B6;
sfr unsigned long   volatile I2C2STATCLR      absolute 0xBF805114;
sfr unsigned long   volatile I2C2ASTATCLR     absolute 0xBF805114;
sfr unsigned long   volatile I2C2STATSET      absolute 0xBF805118;
sfr unsigned long   volatile I2C2ASTATSET     absolute 0xBF805118;
sfr unsigned long   volatile I2C2STATINV      absolute 0xBF80511C;
sfr unsigned long   volatile I2C2ASTATINV     absolute 0xBF80511C;
sfr atomic unsigned long   volatile I2C2ADD          absolute 0xBF805120;
sfr atomic unsigned long   volatile I2C2AADD         absolute 0xBF805120;
sfr unsigned long   volatile I2C2ADDCLR       absolute 0xBF805124;
sfr unsigned long   volatile I2C2AADDCLR      absolute 0xBF805124;
sfr unsigned long   volatile I2C2ADDSET       absolute 0xBF805128;
sfr unsigned long   volatile I2C2AADDSET      absolute 0xBF805128;
sfr unsigned long   volatile I2C2ADDINV       absolute 0xBF80512C;
sfr unsigned long   volatile I2C2AADDINV      absolute 0xBF80512C;
sfr atomic unsigned long   volatile I2C2MSK          absolute 0xBF805130;
sfr atomic unsigned long   volatile I2C2AMSK         absolute 0xBF805130;
sfr unsigned long   volatile I2C2MSKCLR       absolute 0xBF805134;
sfr unsigned long   volatile I2C2AMSKCLR      absolute 0xBF805134;
sfr unsigned long   volatile I2C2MSKSET       absolute 0xBF805138;
sfr unsigned long   volatile I2C2AMSKSET      absolute 0xBF805138;
sfr unsigned long   volatile I2C2MSKINV       absolute 0xBF80513C;
sfr unsigned long   volatile I2C2AMSKINV      absolute 0xBF80513C;
sfr atomic unsigned long            I2C2BRG          absolute 0xBF805140;
sfr atomic unsigned long   volatile I2C2ABRG         absolute 0xBF805140;
sfr unsigned long   volatile I2C2BRGCLR       absolute 0xBF805144;
sfr unsigned long   volatile I2C2ABRGCLR      absolute 0xBF805144;
sfr unsigned long   volatile I2C2BRGSET       absolute 0xBF805148;
sfr unsigned long   volatile I2C2ABRGSET      absolute 0xBF805148;
sfr unsigned long   volatile I2C2BRGINV       absolute 0xBF80514C;
sfr unsigned long   volatile I2C2ABRGINV      absolute 0xBF80514C;
sfr atomic unsigned long   volatile I2C2TRN          absolute 0xBF805150;
sfr atomic unsigned long   volatile I2C2ATRN         absolute 0xBF805150;
sfr unsigned long   volatile I2C2TRNCLR       absolute 0xBF805154;
sfr unsigned long   volatile I2C2ATRNCLR      absolute 0xBF805154;
sfr unsigned long   volatile I2C2TRNSET       absolute 0xBF805158;
sfr unsigned long   volatile I2C2ATRNSET      absolute 0xBF805158;
sfr unsigned long   volatile I2C2TRNINV       absolute 0xBF80515C;
sfr unsigned long   volatile I2C2ATRNINV      absolute 0xBF80515C;
sfr unsigned long   volatile I2C2RCV          absolute 0xBF805160;
sfr unsigned long   volatile I2C2ARCV         absolute 0xBF805160;
sfr atomic unsigned long   volatile SPI1CON          absolute 0xBF805800;
    const register unsigned short int SRXISEL0 = 0;
    sbit  SRXISEL0_bit at SPI1CON.B0;
    const register unsigned short int SRXISEL1 = 1;
    sbit  SRXISEL1_bit at SPI1CON.B1;
    const register unsigned short int STXISEL0 = 2;
    sbit  STXISEL0_bit at SPI1CON.B2;
    const register unsigned short int STXISEL1 = 3;
    sbit  STXISEL1_bit at SPI1CON.B3;
    const register unsigned short int DISSDI = 4;
    sbit  DISSDI_bit at SPI1CON.B4;
    const register unsigned short int MSTEN = 5;
    sbit  MSTEN_bit at SPI1CON.B5;
    const register unsigned short int CKP = 6;
    sbit  CKP_bit at SPI1CON.B6;
    const register unsigned short int SSEN = 7;
    sbit  SSEN_bit at SPI1CON.B7;
    const register unsigned short int CKE = 8;
    sbit  CKE_bit at SPI1CON.B8;
    const register unsigned short int SMP = 9;
    sbit  SMP_bit at SPI1CON.B9;
    const register unsigned short int MODE16 = 10;
    sbit  MODE16_bit at SPI1CON.B10;
    const register unsigned short int MODE32 = 11;
    sbit  MODE32_bit at SPI1CON.B11;
    const register unsigned short int DISSDO = 12;
    sbit  DISSDO_bit at SPI1CON.B12;
    sbit  SIDL_SPI1CON_bit at SPI1CON.B13;
    sbit  ON_SPI1CON_bit at SPI1CON.B15;
    const register unsigned short int ENHBUF = 16;
    sbit  ENHBUF_bit at SPI1CON.B16;
    const register unsigned short int SPIFE = 17;
    sbit  SPIFE_bit at SPI1CON.B17;
    const register unsigned short int MCLKSEL = 23;
    sbit  MCLKSEL_bit at SPI1CON.B23;
    const register unsigned short int FRMCNT0 = 24;
    sbit  FRMCNT0_bit at SPI1CON.B24;
    const register unsigned short int FRMCNT1 = 25;
    sbit  FRMCNT1_bit at SPI1CON.B25;
    const register unsigned short int FRMCNT2 = 26;
    sbit  FRMCNT2_bit at SPI1CON.B26;
    const register unsigned short int FRMSYPW = 27;
    sbit  FRMSYPW_bit at SPI1CON.B27;
    const register unsigned short int MSSEN = 28;
    sbit  MSSEN_bit at SPI1CON.B28;
    const register unsigned short int FRMPOL = 29;
    sbit  FRMPOL_bit at SPI1CON.B29;
    const register unsigned short int FRMSYNC = 30;
    sbit  FRMSYNC_bit at SPI1CON.B30;
    const register unsigned short int FRMEN = 31;
    sbit  FRMEN_bit at SPI1CON.B31;
sfr unsigned long   volatile SPI1CONCLR       absolute 0xBF805804;
sfr unsigned long   volatile SPI1CONSET       absolute 0xBF805808;
sfr unsigned long   volatile SPI1CONINV       absolute 0xBF80580C;
sfr atomic unsigned long   volatile SPI1STAT         absolute 0xBF805810;
    const register unsigned short int SPIRBF = 0;
    sbit  SPIRBF_bit at SPI1STAT.B0;
    const register unsigned short int SPITBF = 1;
    sbit  SPITBF_bit at SPI1STAT.B1;
    const register unsigned short int SPITBE = 3;
    sbit  SPITBE_bit at SPI1STAT.B3;
    const register unsigned short int SPIRBE = 5;
    sbit  SPIRBE_bit at SPI1STAT.B5;
    const register unsigned short int SPIROV = 6;
    sbit  SPIROV_bit at SPI1STAT.B6;
    const register unsigned short int SRMT = 7;
    sbit  SRMT_bit at SPI1STAT.B7;
    const register unsigned short int SPITUR = 8;
    sbit  SPITUR_bit at SPI1STAT.B8;
    const register unsigned short int SPIBUSY = 11;
    sbit  SPIBUSY_bit at SPI1STAT.B11;
    const register unsigned short int FRMERR = 12;
    sbit  FRMERR_bit at SPI1STAT.B12;
    const register unsigned short int TXBUFELM0 = 16;
    sbit  TXBUFELM0_bit at SPI1STAT.B16;
    const register unsigned short int TXBUFELM1 = 17;
    sbit  TXBUFELM1_bit at SPI1STAT.B17;
    const register unsigned short int TXBUFELM2 = 18;
    sbit  TXBUFELM2_bit at SPI1STAT.B18;
    const register unsigned short int TXBUFELM3 = 19;
    sbit  TXBUFELM3_bit at SPI1STAT.B19;
    const register unsigned short int TXBUFELM4 = 20;
    sbit  TXBUFELM4_bit at SPI1STAT.B20;
    const register unsigned short int RXBUFELM0 = 24;
    sbit  RXBUFELM0_bit at SPI1STAT.B24;
    const register unsigned short int RXBUFELM1 = 25;
    sbit  RXBUFELM1_bit at SPI1STAT.B25;
    const register unsigned short int RXBUFELM2 = 26;
    sbit  RXBUFELM2_bit at SPI1STAT.B26;
    const register unsigned short int RXBUFELM3 = 27;
    sbit  RXBUFELM3_bit at SPI1STAT.B27;
    const register unsigned short int RXBUFELM4 = 28;
    sbit  RXBUFELM4_bit at SPI1STAT.B28;
sfr unsigned long   volatile SPI1STATCLR      absolute 0xBF805814;
sfr unsigned long   volatile SPI1STATSET      absolute 0xBF805818;
sfr unsigned long   volatile SPI1STATINV      absolute 0xBF80581C;
sfr unsigned long   volatile SPI1BUF          absolute 0xBF805820;
sfr atomic unsigned long   volatile SPI1BRG          absolute 0xBF805830;
sfr unsigned long   volatile SPI1BRGCLR       absolute 0xBF805834;
sfr unsigned long   volatile SPI1BRGSET       absolute 0xBF805838;
sfr unsigned long   volatile SPI1BRGINV       absolute 0xBF80583C;
sfr atomic unsigned long   volatile SPI1CON2         absolute 0xBF805840;
    const register unsigned short int AUDMOD0 = 0;
    sbit  AUDMOD0_bit at SPI1CON2.B0;
    const register unsigned short int AUDMOD1 = 1;
    sbit  AUDMOD1_bit at SPI1CON2.B1;
    const register unsigned short int AUDMONO = 3;
    sbit  AUDMONO_bit at SPI1CON2.B3;
    const register unsigned short int AUDEN = 7;
    sbit  AUDEN_bit at SPI1CON2.B7;
    const register unsigned short int IGNTUR = 8;
    sbit  IGNTUR_bit at SPI1CON2.B8;
    const register unsigned short int IGNROV = 9;
    sbit  IGNROV_bit at SPI1CON2.B9;
    const register unsigned short int SPITUREN = 10;
    sbit  SPITUREN_bit at SPI1CON2.B10;
    const register unsigned short int SPIROVEN = 11;
    sbit  SPIROVEN_bit at SPI1CON2.B11;
    const register unsigned short int FRMERREN = 12;
    sbit  FRMERREN_bit at SPI1CON2.B12;
    const register unsigned short int SPISGNEXT = 15;
    sbit  SPISGNEXT_bit at SPI1CON2.B15;
    sbit  AUDMOD0_SPI1CON2_bit at SPI1CON2.B0;
    sbit  AUDMOD1_SPI1CON2_bit at SPI1CON2.B1;
sfr unsigned long   volatile SPI1CON2CLR      absolute 0xBF805844;
sfr unsigned long   volatile SPI1CON2SET      absolute 0xBF805848;
sfr unsigned long   volatile SPI1CON2INV      absolute 0xBF80584C;
sfr atomic unsigned long   volatile SPI2CON          absolute 0xBF805A00;
    sbit  SRXISEL0_SPI2CON_bit at SPI2CON.B0;
    sbit  SRXISEL1_SPI2CON_bit at SPI2CON.B1;
    sbit  STXISEL0_SPI2CON_bit at SPI2CON.B2;
    sbit  STXISEL1_SPI2CON_bit at SPI2CON.B3;
    sbit  DISSDI_SPI2CON_bit at SPI2CON.B4;
    sbit  MSTEN_SPI2CON_bit at SPI2CON.B5;
    sbit  CKP_SPI2CON_bit at SPI2CON.B6;
    sbit  SSEN_SPI2CON_bit at SPI2CON.B7;
    sbit  CKE_SPI2CON_bit at SPI2CON.B8;
    sbit  SMP_SPI2CON_bit at SPI2CON.B9;
    sbit  MODE16_SPI2CON_bit at SPI2CON.B10;
    sbit  MODE32_SPI2CON_bit at SPI2CON.B11;
    sbit  DISSDO_SPI2CON_bit at SPI2CON.B12;
    sbit  SIDL_SPI2CON_bit at SPI2CON.B13;
    sbit  ON_SPI2CON_bit at SPI2CON.B15;
    sbit  ENHBUF_SPI2CON_bit at SPI2CON.B16;
    sbit  SPIFE_SPI2CON_bit at SPI2CON.B17;
    sbit  MCLKSEL_SPI2CON_bit at SPI2CON.B23;
    sbit  FRMCNT0_SPI2CON_bit at SPI2CON.B24;
    sbit  FRMCNT1_SPI2CON_bit at SPI2CON.B25;
    sbit  FRMCNT2_SPI2CON_bit at SPI2CON.B26;
    sbit  FRMSYPW_SPI2CON_bit at SPI2CON.B27;
    sbit  MSSEN_SPI2CON_bit at SPI2CON.B28;
    sbit  FRMPOL_SPI2CON_bit at SPI2CON.B29;
    sbit  FRMSYNC_SPI2CON_bit at SPI2CON.B30;
    sbit  FRMEN_SPI2CON_bit at SPI2CON.B31;
sfr unsigned long   volatile SPI2CONCLR       absolute 0xBF805A04;
sfr unsigned long   volatile SPI2CONSET       absolute 0xBF805A08;
sfr unsigned long   volatile SPI2CONINV       absolute 0xBF805A0C;
sfr atomic unsigned long   volatile SPI2STAT         absolute 0xBF805A10;
    sbit  SPIRBF_SPI2STAT_bit at SPI2STAT.B0;
    sbit  SPITBF_SPI2STAT_bit at SPI2STAT.B1;
    sbit  SPITBE_SPI2STAT_bit at SPI2STAT.B3;
    sbit  SPIRBE_SPI2STAT_bit at SPI2STAT.B5;
    sbit  SPIROV_SPI2STAT_bit at SPI2STAT.B6;
    sbit  SRMT_SPI2STAT_bit at SPI2STAT.B7;
    sbit  SPITUR_SPI2STAT_bit at SPI2STAT.B8;
    sbit  SPIBUSY_SPI2STAT_bit at SPI2STAT.B11;
    sbit  FRMERR_SPI2STAT_bit at SPI2STAT.B12;
    sbit  TXBUFELM0_SPI2STAT_bit at SPI2STAT.B16;
    sbit  TXBUFELM1_SPI2STAT_bit at SPI2STAT.B17;
    sbit  TXBUFELM2_SPI2STAT_bit at SPI2STAT.B18;
    sbit  TXBUFELM3_SPI2STAT_bit at SPI2STAT.B19;
    sbit  TXBUFELM4_SPI2STAT_bit at SPI2STAT.B20;
    sbit  RXBUFELM0_SPI2STAT_bit at SPI2STAT.B24;
    sbit  RXBUFELM1_SPI2STAT_bit at SPI2STAT.B25;
    sbit  RXBUFELM2_SPI2STAT_bit at SPI2STAT.B26;
    sbit  RXBUFELM3_SPI2STAT_bit at SPI2STAT.B27;
    sbit  RXBUFELM4_SPI2STAT_bit at SPI2STAT.B28;
sfr unsigned long   volatile SPI2STATCLR      absolute 0xBF805A14;
sfr unsigned long   volatile SPI2STATSET      absolute 0xBF805A18;
sfr unsigned long   volatile SPI2STATINV      absolute 0xBF805A1C;
sfr unsigned long   volatile SPI2BUF          absolute 0xBF805A20;
sfr atomic unsigned long   volatile SPI2BRG          absolute 0xBF805A30;
sfr unsigned long   volatile SPI2BRGCLR       absolute 0xBF805A34;
sfr unsigned long   volatile SPI2BRGSET       absolute 0xBF805A38;
sfr unsigned long   volatile SPI2BRGINV       absolute 0xBF805A3C;
sfr atomic unsigned long   volatile SPI2CON2         absolute 0xBF805A40;
    sbit  AUDMOD0_SPI2CON2_bit at SPI2CON2.B0;
    sbit  AUDMOD1_SPI2CON2_bit at SPI2CON2.B1;
    sbit  AUDMONO_SPI2CON2_bit at SPI2CON2.B3;
    sbit  AUDEN_SPI2CON2_bit at SPI2CON2.B7;
    sbit  IGNTUR_SPI2CON2_bit at SPI2CON2.B8;
    sbit  IGNROV_SPI2CON2_bit at SPI2CON2.B9;
    sbit  SPITUREN_SPI2CON2_bit at SPI2CON2.B10;
    sbit  SPIROVEN_SPI2CON2_bit at SPI2CON2.B11;
    sbit  FRMERREN_SPI2CON2_bit at SPI2CON2.B12;
    sbit  SPISGNEXT_SPI2CON2_bit at SPI2CON2.B15;
sfr unsigned long   volatile SPI2CON2CLR      absolute 0xBF805A44;
sfr unsigned long   volatile SPI2CON2SET      absolute 0xBF805A48;
sfr unsigned long   volatile SPI2CON2INV      absolute 0xBF805A4C;
sfr atomic unsigned long   volatile SPI3CON          absolute 0xBF805C00;
    sbit  SRXISEL0_SPI3CON_bit at SPI3CON.B0;
    sbit  SRXISEL1_SPI3CON_bit at SPI3CON.B1;
    sbit  STXISEL0_SPI3CON_bit at SPI3CON.B2;
    sbit  STXISEL1_SPI3CON_bit at SPI3CON.B3;
    sbit  DISSDI_SPI3CON_bit at SPI3CON.B4;
    sbit  MSTEN_SPI3CON_bit at SPI3CON.B5;
    sbit  CKP_SPI3CON_bit at SPI3CON.B6;
    sbit  SSEN_SPI3CON_bit at SPI3CON.B7;
    sbit  CKE_SPI3CON_bit at SPI3CON.B8;
    sbit  SMP_SPI3CON_bit at SPI3CON.B9;
    sbit  MODE16_SPI3CON_bit at SPI3CON.B10;
    sbit  MODE32_SPI3CON_bit at SPI3CON.B11;
    sbit  DISSDO_SPI3CON_bit at SPI3CON.B12;
    sbit  SIDL_SPI3CON_bit at SPI3CON.B13;
    sbit  ON_SPI3CON_bit at SPI3CON.B15;
    sbit  ENHBUF_SPI3CON_bit at SPI3CON.B16;
    sbit  SPIFE_SPI3CON_bit at SPI3CON.B17;
    sbit  MCLKSEL_SPI3CON_bit at SPI3CON.B23;
    sbit  FRMCNT0_SPI3CON_bit at SPI3CON.B24;
    sbit  FRMCNT1_SPI3CON_bit at SPI3CON.B25;
    sbit  FRMCNT2_SPI3CON_bit at SPI3CON.B26;
    sbit  FRMSYPW_SPI3CON_bit at SPI3CON.B27;
    sbit  MSSEN_SPI3CON_bit at SPI3CON.B28;
    sbit  FRMPOL_SPI3CON_bit at SPI3CON.B29;
    sbit  FRMSYNC_SPI3CON_bit at SPI3CON.B30;
    sbit  FRMEN_SPI3CON_bit at SPI3CON.B31;
sfr unsigned long   volatile SPI3CONCLR       absolute 0xBF805C04;
sfr unsigned long   volatile SPI3CONSET       absolute 0xBF805C08;
sfr unsigned long   volatile SPI3CONINV       absolute 0xBF805C0C;
sfr atomic unsigned long   volatile SPI3STAT         absolute 0xBF805C10;
    sbit  SPIRBF_SPI3STAT_bit at SPI3STAT.B0;
    sbit  SPITBF_SPI3STAT_bit at SPI3STAT.B1;
    sbit  SPITBE_SPI3STAT_bit at SPI3STAT.B3;
    sbit  SPIRBE_SPI3STAT_bit at SPI3STAT.B5;
    sbit  SPIROV_SPI3STAT_bit at SPI3STAT.B6;
    sbit  SRMT_SPI3STAT_bit at SPI3STAT.B7;
    sbit  SPITUR_SPI3STAT_bit at SPI3STAT.B8;
    sbit  SPIBUSY_SPI3STAT_bit at SPI3STAT.B11;
    sbit  FRMERR_SPI3STAT_bit at SPI3STAT.B12;
    sbit  TXBUFELM0_SPI3STAT_bit at SPI3STAT.B16;
    sbit  TXBUFELM1_SPI3STAT_bit at SPI3STAT.B17;
    sbit  TXBUFELM2_SPI3STAT_bit at SPI3STAT.B18;
    sbit  TXBUFELM3_SPI3STAT_bit at SPI3STAT.B19;
    sbit  TXBUFELM4_SPI3STAT_bit at SPI3STAT.B20;
    sbit  RXBUFELM0_SPI3STAT_bit at SPI3STAT.B24;
    sbit  RXBUFELM1_SPI3STAT_bit at SPI3STAT.B25;
    sbit  RXBUFELM2_SPI3STAT_bit at SPI3STAT.B26;
    sbit  RXBUFELM3_SPI3STAT_bit at SPI3STAT.B27;
    sbit  RXBUFELM4_SPI3STAT_bit at SPI3STAT.B28;
sfr unsigned long   volatile SPI3STATCLR      absolute 0xBF805C14;
sfr unsigned long   volatile SPI3STATSET      absolute 0xBF805C18;
sfr unsigned long   volatile SPI3STATINV      absolute 0xBF805C1C;
sfr unsigned long   volatile SPI3BUF          absolute 0xBF805C20;
sfr atomic unsigned long   volatile SPI3BRG          absolute 0xBF805C30;
sfr unsigned long   volatile SPI3BRGCLR       absolute 0xBF805C34;
sfr unsigned long   volatile SPI3BRGSET       absolute 0xBF805C38;
sfr unsigned long   volatile SPI3BRGINV       absolute 0xBF805C3C;
sfr atomic unsigned long   volatile SPI3CON2         absolute 0xBF805C40;
    sbit  AUDMOD0_SPI3CON2_bit at SPI3CON2.B0;
    sbit  AUDMOD1_SPI3CON2_bit at SPI3CON2.B1;
    sbit  AUDMONO_SPI3CON2_bit at SPI3CON2.B3;
    sbit  AUDEN_SPI3CON2_bit at SPI3CON2.B7;
    sbit  IGNTUR_SPI3CON2_bit at SPI3CON2.B8;
    sbit  IGNROV_SPI3CON2_bit at SPI3CON2.B9;
    sbit  SPITUREN_SPI3CON2_bit at SPI3CON2.B10;
    sbit  SPIROVEN_SPI3CON2_bit at SPI3CON2.B11;
    sbit  FRMERREN_SPI3CON2_bit at SPI3CON2.B12;
    sbit  SPISGNEXT_SPI3CON2_bit at SPI3CON2.B15;
sfr unsigned long   volatile SPI3CON2CLR      absolute 0xBF805C44;
sfr unsigned long   volatile SPI3CON2SET      absolute 0xBF805C48;
sfr unsigned long   volatile SPI3CON2INV      absolute 0xBF805C4C;
sfr atomic unsigned long   volatile U1MODE           absolute 0xBF806000;
    const register unsigned short int STSEL = 0;
    sbit  STSEL_bit at U1MODE.B0;
    const register unsigned short int PDSEL0 = 1;
    sbit  PDSEL0_bit at U1MODE.B1;
    const register unsigned short int PDSEL1 = 2;
    sbit  PDSEL1_bit at U1MODE.B2;
    const register unsigned short int BRGH = 3;
    sbit  BRGH_bit at U1MODE.B3;
    const register unsigned short int RXINV = 4;
    sbit  RXINV_bit at U1MODE.B4;
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
    sbit  SIDL_U1MODE_bit at U1MODE.B13;
    sbit  ON_U1MODE_bit at U1MODE.B15;
    sbit  PDSEL0_U1MODE_bit at U1MODE.B1;
    sbit  PDSEL1_U1MODE_bit at U1MODE.B2;
    sbit  UEN0_U1MODE_bit at U1MODE.B8;
    sbit  UEN1_U1MODE_bit at U1MODE.B9;
    const register unsigned short int USIDL = 13;
    sbit  USIDL_bit at U1MODE.B13;
    const register unsigned short int UARTEN = 15;
    sbit  UARTEN_bit at U1MODE.B15;
sfr atomic unsigned long   volatile U1AMODE          absolute 0xBF806000;
    sbit  STSEL_U1AMODE_bit at U1AMODE.B0;
    sbit  PDSEL0_U1AMODE_bit at U1AMODE.B1;
    sbit  PDSEL1_U1AMODE_bit at U1AMODE.B2;
    sbit  BRGH_U1AMODE_bit at U1AMODE.B3;
    sbit  RXINV_U1AMODE_bit at U1AMODE.B4;
    sbit  ABAUD_U1AMODE_bit at U1AMODE.B5;
    sbit  LPBACK_U1AMODE_bit at U1AMODE.B6;
    sbit  WAKE_U1AMODE_bit at U1AMODE.B7;
    sbit  UEN0_U1AMODE_bit at U1AMODE.B8;
    sbit  UEN1_U1AMODE_bit at U1AMODE.B9;
    sbit  RTSMD_U1AMODE_bit at U1AMODE.B11;
    sbit  IREN_U1AMODE_bit at U1AMODE.B12;
    sbit  SIDL_U1AMODE_bit at U1AMODE.B13;
    sbit  ON_U1AMODE_bit at U1AMODE.B15;
    sbit  USIDL_U1AMODE_bit at U1AMODE.B13;
    sbit  UARTEN_U1AMODE_bit at U1AMODE.B15;
sfr unsigned long   volatile U1MODECLR        absolute 0xBF806004;
sfr unsigned long   volatile U1AMODECLR       absolute 0xBF806004;
sfr unsigned long   volatile U1MODESET        absolute 0xBF806008;
sfr unsigned long   volatile U1AMODESET       absolute 0xBF806008;
sfr unsigned long   volatile U1MODEINV        absolute 0xBF80600C;
sfr unsigned long   volatile U1AMODEINV       absolute 0xBF80600C;
sfr atomic unsigned long   volatile U1STA            absolute 0xBF806010;
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
    const register unsigned short int UTXINV = 13;
    sbit  UTXINV_bit at U1STA.B13;
    const register unsigned short int UTXISEL0 = 14;
    sbit  UTXISEL0_bit at U1STA.B14;
    const register unsigned short int UTXISEL1 = 15;
    sbit  UTXISEL1_bit at U1STA.B15;
    const register unsigned short int ADDR0 = 16;
    sbit  ADDR0_bit at U1STA.B16;
    const register unsigned short int ADDR1 = 17;
    sbit  ADDR1_bit at U1STA.B17;
    const register unsigned short int ADDR2 = 18;
    sbit  ADDR2_bit at U1STA.B18;
    const register unsigned short int ADDR3 = 19;
    sbit  ADDR3_bit at U1STA.B19;
    const register unsigned short int ADDR4 = 20;
    sbit  ADDR4_bit at U1STA.B20;
    const register unsigned short int ADDR5 = 21;
    sbit  ADDR5_bit at U1STA.B21;
    const register unsigned short int ADDR6 = 22;
    sbit  ADDR6_bit at U1STA.B22;
    const register unsigned short int ADDR7 = 23;
    sbit  ADDR7_bit at U1STA.B23;
    const register unsigned short int ADM_EN = 24;
    sbit  ADM_EN_bit at U1STA.B24;
    sbit  URXISEL0_U1STA_bit at U1STA.B6;
    sbit  URXISEL1_U1STA_bit at U1STA.B7;
    sbit  UTXISEL0_U1STA_bit at U1STA.B14;
    sbit  UTXISEL1_U1STA_bit at U1STA.B15;
    const register unsigned short int UTXSEL0 = 14;
    sbit  UTXSEL0_bit at U1STA.B14;
    const register unsigned short int UTXSEL1 = 15;
    sbit  UTXSEL1_bit at U1STA.B15;
sfr atomic unsigned long   volatile U1ASTA           absolute 0xBF806010;
    sbit  URXDA_U1ASTA_bit at U1ASTA.B0;
    sbit  OERR_U1ASTA_bit at U1ASTA.B1;
    sbit  FERR_U1ASTA_bit at U1ASTA.B2;
    sbit  PERR_U1ASTA_bit at U1ASTA.B3;
    sbit  RIDLE_U1ASTA_bit at U1ASTA.B4;
    sbit  ADDEN_U1ASTA_bit at U1ASTA.B5;
    sbit  URXISEL0_U1ASTA_bit at U1ASTA.B6;
    sbit  URXISEL1_U1ASTA_bit at U1ASTA.B7;
    sbit  TRMT_U1ASTA_bit at U1ASTA.B8;
    sbit  UTXBF_U1ASTA_bit at U1ASTA.B9;
    sbit  UTXEN_U1ASTA_bit at U1ASTA.B10;
    sbit  UTXBRK_U1ASTA_bit at U1ASTA.B11;
    sbit  URXEN_U1ASTA_bit at U1ASTA.B12;
    sbit  UTXINV_U1ASTA_bit at U1ASTA.B13;
    sbit  UTXISEL0_U1ASTA_bit at U1ASTA.B14;
    sbit  UTXISEL1_U1ASTA_bit at U1ASTA.B15;
    sbit  ADDR0_U1ASTA_bit at U1ASTA.B16;
    sbit  ADDR1_U1ASTA_bit at U1ASTA.B17;
    sbit  ADDR2_U1ASTA_bit at U1ASTA.B18;
    sbit  ADDR3_U1ASTA_bit at U1ASTA.B19;
    sbit  ADDR4_U1ASTA_bit at U1ASTA.B20;
    sbit  ADDR5_U1ASTA_bit at U1ASTA.B21;
    sbit  ADDR6_U1ASTA_bit at U1ASTA.B22;
    sbit  ADDR7_U1ASTA_bit at U1ASTA.B23;
    sbit  ADM_EN_U1ASTA_bit at U1ASTA.B24;
    sbit  UTXSEL0_U1ASTA_bit at U1ASTA.B14;
    sbit  UTXSEL1_U1ASTA_bit at U1ASTA.B15;
sfr unsigned long   volatile U1STACLR         absolute 0xBF806014;
sfr unsigned long   volatile U1ASTACLR        absolute 0xBF806014;
sfr unsigned long   volatile U1STASET         absolute 0xBF806018;
sfr unsigned long   volatile U1ASTASET        absolute 0xBF806018;
sfr unsigned long   volatile U1STAINV         absolute 0xBF80601C;
sfr unsigned long   volatile U1ASTAINV        absolute 0xBF80601C;
sfr unsigned long            U1TXREG          absolute 0xBF806020;
sfr unsigned long   volatile U1ATXREG         absolute 0xBF806020;
sfr unsigned long   volatile U1RXREG          absolute 0xBF806030;
sfr unsigned long   volatile U1ARXREG         absolute 0xBF806030;
sfr atomic unsigned long            U1BRG            absolute 0xBF806040;
sfr atomic unsigned long   volatile U1ABRG           absolute 0xBF806040;
sfr unsigned long   volatile U1BRGCLR         absolute 0xBF806044;
sfr unsigned long   volatile U1ABRGCLR        absolute 0xBF806044;
sfr unsigned long   volatile U1BRGSET         absolute 0xBF806048;
sfr unsigned long   volatile U1ABRGSET        absolute 0xBF806048;
sfr unsigned long   volatile U1BRGINV         absolute 0xBF80604C;
sfr unsigned long   volatile U1ABRGINV        absolute 0xBF80604C;
sfr atomic unsigned long   volatile U2MODE           absolute 0xBF806200;
    sbit  STSEL_U2MODE_bit at U2MODE.B0;
    sbit  PDSEL0_U2MODE_bit at U2MODE.B1;
    sbit  PDSEL1_U2MODE_bit at U2MODE.B2;
    sbit  BRGH_U2MODE_bit at U2MODE.B3;
    sbit  RXINV_U2MODE_bit at U2MODE.B4;
    sbit  ABAUD_U2MODE_bit at U2MODE.B5;
    sbit  LPBACK_U2MODE_bit at U2MODE.B6;
    sbit  WAKE_U2MODE_bit at U2MODE.B7;
    sbit  UEN0_U2MODE_bit at U2MODE.B8;
    sbit  UEN1_U2MODE_bit at U2MODE.B9;
    sbit  RTSMD_U2MODE_bit at U2MODE.B11;
    sbit  IREN_U2MODE_bit at U2MODE.B12;
    sbit  SIDL_U2MODE_bit at U2MODE.B13;
    sbit  ON_U2MODE_bit at U2MODE.B15;
    sbit  USIDL_U2MODE_bit at U2MODE.B13;
    sbit  UARTEN_U2MODE_bit at U2MODE.B15;
sfr atomic unsigned long   volatile U3AMODE          absolute 0xBF806200;
    sbit  STSEL_U3AMODE_bit at U3AMODE.B0;
    sbit  PDSEL0_U3AMODE_bit at U3AMODE.B1;
    sbit  PDSEL1_U3AMODE_bit at U3AMODE.B2;
    sbit  BRGH_U3AMODE_bit at U3AMODE.B3;
    sbit  RXINV_U3AMODE_bit at U3AMODE.B4;
    sbit  ABAUD_U3AMODE_bit at U3AMODE.B5;
    sbit  LPBACK_U3AMODE_bit at U3AMODE.B6;
    sbit  WAKE_U3AMODE_bit at U3AMODE.B7;
    sbit  UEN0_U3AMODE_bit at U3AMODE.B8;
    sbit  UEN1_U3AMODE_bit at U3AMODE.B9;
    sbit  RTSMD_U3AMODE_bit at U3AMODE.B11;
    sbit  IREN_U3AMODE_bit at U3AMODE.B12;
    sbit  SIDL_U3AMODE_bit at U3AMODE.B13;
    sbit  ON_U3AMODE_bit at U3AMODE.B15;
    sbit  USIDL_U3AMODE_bit at U3AMODE.B13;
    sbit  UARTEN_U3AMODE_bit at U3AMODE.B15;
sfr unsigned long   volatile U2MODECLR        absolute 0xBF806204;
sfr unsigned long   volatile U3AMODECLR       absolute 0xBF806204;
sfr unsigned long   volatile U2MODESET        absolute 0xBF806208;
sfr unsigned long   volatile U3AMODESET       absolute 0xBF806208;
sfr unsigned long   volatile U2MODEINV        absolute 0xBF80620C;
sfr unsigned long   volatile U3AMODEINV       absolute 0xBF80620C;
sfr atomic unsigned long   volatile U2STA            absolute 0xBF806210;
    sbit  URXDA_U2STA_bit at U2STA.B0;
    sbit  OERR_U2STA_bit at U2STA.B1;
    sbit  FERR_U2STA_bit at U2STA.B2;
    sbit  PERR_U2STA_bit at U2STA.B3;
    sbit  RIDLE_U2STA_bit at U2STA.B4;
    sbit  ADDEN_U2STA_bit at U2STA.B5;
    sbit  URXISEL0_U2STA_bit at U2STA.B6;
    sbit  URXISEL1_U2STA_bit at U2STA.B7;
    sbit  TRMT_U2STA_bit at U2STA.B8;
    sbit  UTXBF_U2STA_bit at U2STA.B9;
    sbit  UTXEN_U2STA_bit at U2STA.B10;
    sbit  UTXBRK_U2STA_bit at U2STA.B11;
    sbit  URXEN_U2STA_bit at U2STA.B12;
    sbit  UTXINV_U2STA_bit at U2STA.B13;
    sbit  UTXISEL0_U2STA_bit at U2STA.B14;
    sbit  UTXISEL1_U2STA_bit at U2STA.B15;
    sbit  ADDR0_U2STA_bit at U2STA.B16;
    sbit  ADDR1_U2STA_bit at U2STA.B17;
    sbit  ADDR2_U2STA_bit at U2STA.B18;
    sbit  ADDR3_U2STA_bit at U2STA.B19;
    sbit  ADDR4_U2STA_bit at U2STA.B20;
    sbit  ADDR5_U2STA_bit at U2STA.B21;
    sbit  ADDR6_U2STA_bit at U2STA.B22;
    sbit  ADDR7_U2STA_bit at U2STA.B23;
    sbit  ADM_EN_U2STA_bit at U2STA.B24;
    sbit  UTXSEL0_U2STA_bit at U2STA.B14;
    sbit  UTXSEL1_U2STA_bit at U2STA.B15;
sfr atomic unsigned long   volatile U3ASTA           absolute 0xBF806210;
    sbit  URXDA_U3ASTA_bit at U3ASTA.B0;
    sbit  OERR_U3ASTA_bit at U3ASTA.B1;
    sbit  FERR_U3ASTA_bit at U3ASTA.B2;
    sbit  PERR_U3ASTA_bit at U3ASTA.B3;
    sbit  RIDLE_U3ASTA_bit at U3ASTA.B4;
    sbit  ADDEN_U3ASTA_bit at U3ASTA.B5;
    sbit  URXISEL0_U3ASTA_bit at U3ASTA.B6;
    sbit  URXISEL1_U3ASTA_bit at U3ASTA.B7;
    sbit  TRMT_U3ASTA_bit at U3ASTA.B8;
    sbit  UTXBF_U3ASTA_bit at U3ASTA.B9;
    sbit  UTXEN_U3ASTA_bit at U3ASTA.B10;
    sbit  UTXBRK_U3ASTA_bit at U3ASTA.B11;
    sbit  URXEN_U3ASTA_bit at U3ASTA.B12;
    sbit  UTXINV_U3ASTA_bit at U3ASTA.B13;
    sbit  UTXISEL0_U3ASTA_bit at U3ASTA.B14;
    sbit  UTXISEL1_U3ASTA_bit at U3ASTA.B15;
    sbit  ADDR0_U3ASTA_bit at U3ASTA.B16;
    sbit  ADDR1_U3ASTA_bit at U3ASTA.B17;
    sbit  ADDR2_U3ASTA_bit at U3ASTA.B18;
    sbit  ADDR3_U3ASTA_bit at U3ASTA.B19;
    sbit  ADDR4_U3ASTA_bit at U3ASTA.B20;
    sbit  ADDR5_U3ASTA_bit at U3ASTA.B21;
    sbit  ADDR6_U3ASTA_bit at U3ASTA.B22;
    sbit  ADDR7_U3ASTA_bit at U3ASTA.B23;
    sbit  ADM_EN_U3ASTA_bit at U3ASTA.B24;
    sbit  UTXSEL0_U3ASTA_bit at U3ASTA.B14;
    sbit  UTXSEL1_U3ASTA_bit at U3ASTA.B15;
sfr unsigned long   volatile U2STACLR         absolute 0xBF806214;
sfr unsigned long   volatile U3ASTACLR        absolute 0xBF806214;
sfr unsigned long   volatile U2STASET         absolute 0xBF806218;
sfr unsigned long   volatile U3ASTASET        absolute 0xBF806218;
sfr unsigned long   volatile U2STAINV         absolute 0xBF80621C;
sfr unsigned long   volatile U3ASTAINV        absolute 0xBF80621C;
sfr unsigned long            U2TXREG          absolute 0xBF806220;
sfr unsigned long   volatile U3ATXREG         absolute 0xBF806220;
sfr unsigned long   volatile U2RXREG          absolute 0xBF806230;
sfr unsigned long   volatile U3ARXREG         absolute 0xBF806230;
sfr atomic unsigned long            U2BRG            absolute 0xBF806240;
sfr atomic unsigned long   volatile U3ABRG           absolute 0xBF806240;
sfr unsigned long   volatile U2BRGCLR         absolute 0xBF806244;
sfr unsigned long   volatile U3ABRGCLR        absolute 0xBF806244;
sfr unsigned long   volatile U2BRGSET         absolute 0xBF806248;
sfr unsigned long   volatile U3ABRGSET        absolute 0xBF806248;
sfr unsigned long   volatile U2BRGINV         absolute 0xBF80624C;
sfr unsigned long   volatile U3ABRGINV        absolute 0xBF80624C;
sfr atomic unsigned long   volatile U3MODE           absolute 0xBF806400;
    sbit  STSEL_U3MODE_bit at U3MODE.B0;
    sbit  PDSEL0_U3MODE_bit at U3MODE.B1;
    sbit  PDSEL1_U3MODE_bit at U3MODE.B2;
    sbit  BRGH_U3MODE_bit at U3MODE.B3;
    sbit  RXINV_U3MODE_bit at U3MODE.B4;
    sbit  ABAUD_U3MODE_bit at U3MODE.B5;
    sbit  LPBACK_U3MODE_bit at U3MODE.B6;
    sbit  WAKE_U3MODE_bit at U3MODE.B7;
    sbit  UEN0_U3MODE_bit at U3MODE.B8;
    sbit  UEN1_U3MODE_bit at U3MODE.B9;
    sbit  RTSMD_U3MODE_bit at U3MODE.B11;
    sbit  IREN_U3MODE_bit at U3MODE.B12;
    sbit  SIDL_U3MODE_bit at U3MODE.B13;
    sbit  ON_U3MODE_bit at U3MODE.B15;
    sbit  USIDL_U3MODE_bit at U3MODE.B13;
    sbit  UARTEN_U3MODE_bit at U3MODE.B15;
sfr atomic unsigned long   volatile U5aMODE          absolute 0xBF806400;
    sbit  STSEL_U5aMODE_bit at U5aMODE.B0;
    sbit  PDSEL0_U5aMODE_bit at U5aMODE.B1;
    sbit  PDSEL1_U5aMODE_bit at U5aMODE.B2;
    sbit  BRGH_U5aMODE_bit at U5aMODE.B3;
    sbit  RXINV_U5aMODE_bit at U5aMODE.B4;
    sbit  ABAUD_U5aMODE_bit at U5aMODE.B5;
    sbit  LPBACK_U5aMODE_bit at U5aMODE.B6;
    sbit  WAKE_U5aMODE_bit at U5aMODE.B7;
    sbit  UEN0_U5aMODE_bit at U5aMODE.B8;
    sbit  UEN1_U5aMODE_bit at U5aMODE.B9;
    sbit  RTSMD_U5aMODE_bit at U5aMODE.B11;
    sbit  IREN_U5aMODE_bit at U5aMODE.B12;
    sbit  SIDL_U5aMODE_bit at U5aMODE.B13;
    sbit  ON_U5aMODE_bit at U5aMODE.B15;
    sbit  USIDL_U5aMODE_bit at U5aMODE.B13;
    sbit  UARTEN_U5aMODE_bit at U5aMODE.B15;
sfr unsigned long   volatile U3MODECLR        absolute 0xBF806404;
sfr unsigned long   volatile U5aMODECLR       absolute 0xBF806404;
sfr unsigned long   volatile U3MODESET        absolute 0xBF806408;
sfr unsigned long   volatile U5aMODESET       absolute 0xBF806408;
sfr unsigned long   volatile U3MODEINV        absolute 0xBF80640C;
sfr unsigned long   volatile U5aMODEINV       absolute 0xBF80640C;
sfr atomic unsigned long   volatile U3STA            absolute 0xBF806410;
    sbit  URXDA_U3STA_bit at U3STA.B0;
    sbit  OERR_U3STA_bit at U3STA.B1;
    sbit  FERR_U3STA_bit at U3STA.B2;
    sbit  PERR_U3STA_bit at U3STA.B3;
    sbit  RIDLE_U3STA_bit at U3STA.B4;
    sbit  ADDEN_U3STA_bit at U3STA.B5;
    sbit  URXISEL0_U3STA_bit at U3STA.B6;
    sbit  URXISEL1_U3STA_bit at U3STA.B7;
    sbit  TRMT_U3STA_bit at U3STA.B8;
    sbit  UTXBF_U3STA_bit at U3STA.B9;
    sbit  UTXEN_U3STA_bit at U3STA.B10;
    sbit  UTXBRK_U3STA_bit at U3STA.B11;
    sbit  URXEN_U3STA_bit at U3STA.B12;
    sbit  UTXINV_U3STA_bit at U3STA.B13;
    sbit  UTXISEL0_U3STA_bit at U3STA.B14;
    sbit  UTXISEL1_U3STA_bit at U3STA.B15;
    sbit  ADDR0_U3STA_bit at U3STA.B16;
    sbit  ADDR1_U3STA_bit at U3STA.B17;
    sbit  ADDR2_U3STA_bit at U3STA.B18;
    sbit  ADDR3_U3STA_bit at U3STA.B19;
    sbit  ADDR4_U3STA_bit at U3STA.B20;
    sbit  ADDR5_U3STA_bit at U3STA.B21;
    sbit  ADDR6_U3STA_bit at U3STA.B22;
    sbit  ADDR7_U3STA_bit at U3STA.B23;
    sbit  ADM_EN_U3STA_bit at U3STA.B24;
    sbit  UTXSEL0_U3STA_bit at U3STA.B14;
    sbit  UTXSEL1_U3STA_bit at U3STA.B15;
sfr atomic unsigned long   volatile U5aSTA           absolute 0xBF806410;
    sbit  URXDA_U5aSTA_bit at U5aSTA.B0;
    sbit  OERR_U5aSTA_bit at U5aSTA.B1;
    sbit  FERR_U5aSTA_bit at U5aSTA.B2;
    sbit  PERR_U5aSTA_bit at U5aSTA.B3;
    sbit  RIDLE_U5aSTA_bit at U5aSTA.B4;
    sbit  ADDEN_U5aSTA_bit at U5aSTA.B5;
    sbit  URXISEL0_U5aSTA_bit at U5aSTA.B6;
    sbit  URXISEL1_U5aSTA_bit at U5aSTA.B7;
    sbit  TRMT_U5aSTA_bit at U5aSTA.B8;
    sbit  UTXBF_U5aSTA_bit at U5aSTA.B9;
    sbit  UTXEN_U5aSTA_bit at U5aSTA.B10;
    sbit  UTXBRK_U5aSTA_bit at U5aSTA.B11;
    sbit  URXEN_U5aSTA_bit at U5aSTA.B12;
    sbit  UTXINV_U5aSTA_bit at U5aSTA.B13;
    sbit  UTXISEL0_U5aSTA_bit at U5aSTA.B14;
    sbit  UTXISEL1_U5aSTA_bit at U5aSTA.B15;
    sbit  ADDR0_U5aSTA_bit at U5aSTA.B16;
    sbit  ADDR1_U5aSTA_bit at U5aSTA.B17;
    sbit  ADDR2_U5aSTA_bit at U5aSTA.B18;
    sbit  ADDR3_U5aSTA_bit at U5aSTA.B19;
    sbit  ADDR4_U5aSTA_bit at U5aSTA.B20;
    sbit  ADDR5_U5aSTA_bit at U5aSTA.B21;
    sbit  ADDR6_U5aSTA_bit at U5aSTA.B22;
    sbit  ADDR7_U5aSTA_bit at U5aSTA.B23;
    sbit  ADM_EN_U5aSTA_bit at U5aSTA.B24;
    sbit  UTXSEL0_U5aSTA_bit at U5aSTA.B14;
    sbit  UTXSEL1_U5aSTA_bit at U5aSTA.B15;
sfr unsigned long   volatile U3STACLR         absolute 0xBF806414;
sfr unsigned long   volatile U5aSTACLR        absolute 0xBF806414;
sfr unsigned long   volatile U3STASET         absolute 0xBF806418;
sfr unsigned long   volatile U5aSTASET        absolute 0xBF806418;
sfr unsigned long   volatile U3STAINV         absolute 0xBF80641C;
sfr unsigned long   volatile U5aSTAINV        absolute 0xBF80641C;
sfr unsigned long            U3TXREG          absolute 0xBF806420;
sfr unsigned long   volatile U5aTXREG         absolute 0xBF806420;
sfr unsigned long   volatile U3RXREG          absolute 0xBF806430;
sfr unsigned long   volatile U5aRXREG         absolute 0xBF806430;
sfr atomic unsigned long            U3BRG            absolute 0xBF806440;
sfr atomic unsigned long   volatile U5aBRG           absolute 0xBF806440;
sfr unsigned long   volatile U3BRGCLR         absolute 0xBF806444;
sfr unsigned long   volatile U5aBRGCLR        absolute 0xBF806444;
sfr unsigned long   volatile U3BRGSET         absolute 0xBF806448;
sfr unsigned long   volatile U5aBRGSET        absolute 0xBF806448;
sfr unsigned long   volatile U3BRGINV         absolute 0xBF80644C;
sfr unsigned long   volatile U5aBRGINV        absolute 0xBF80644C;
sfr atomic unsigned long   volatile U4MODE           absolute 0xBF806600;
    sbit  STSEL_U4MODE_bit at U4MODE.B0;
    sbit  PDSEL0_U4MODE_bit at U4MODE.B1;
    sbit  PDSEL1_U4MODE_bit at U4MODE.B2;
    sbit  BRGH_U4MODE_bit at U4MODE.B3;
    sbit  RXINV_U4MODE_bit at U4MODE.B4;
    sbit  ABAUD_U4MODE_bit at U4MODE.B5;
    sbit  LPBACK_U4MODE_bit at U4MODE.B6;
    sbit  WAKE_U4MODE_bit at U4MODE.B7;
    sbit  UEN0_U4MODE_bit at U4MODE.B8;
    sbit  UEN1_U4MODE_bit at U4MODE.B9;
    sbit  RTSMD_U4MODE_bit at U4MODE.B11;
    sbit  IREN_U4MODE_bit at U4MODE.B12;
    sbit  SIDL_U4MODE_bit at U4MODE.B13;
    sbit  ON_U4MODE_bit at U4MODE.B15;
    sbit  USIDL_U4MODE_bit at U4MODE.B13;
    sbit  UARTEN_U4MODE_bit at U4MODE.B15;
sfr atomic unsigned long   volatile U7AMODE          absolute 0xBF806600;
    sbit  STSEL_U7AMODE_bit at U7AMODE.B0;
    sbit  PDSEL0_U7AMODE_bit at U7AMODE.B1;
    sbit  PDSEL1_U7AMODE_bit at U7AMODE.B2;
    sbit  BRGH_U7AMODE_bit at U7AMODE.B3;
    sbit  RXINV_U7AMODE_bit at U7AMODE.B4;
    sbit  ABAUD_U7AMODE_bit at U7AMODE.B5;
    sbit  LPBACK_U7AMODE_bit at U7AMODE.B6;
    sbit  WAKE_U7AMODE_bit at U7AMODE.B7;
    sbit  UEN0_U7AMODE_bit at U7AMODE.B8;
    sbit  UEN1_U7AMODE_bit at U7AMODE.B9;
    sbit  RTSMD_U7AMODE_bit at U7AMODE.B11;
    sbit  IREN_U7AMODE_bit at U7AMODE.B12;
    sbit  SIDL_U7AMODE_bit at U7AMODE.B13;
    sbit  ON_U7AMODE_bit at U7AMODE.B15;
    sbit  USIDL_U7AMODE_bit at U7AMODE.B13;
    sbit  UARTEN_U7AMODE_bit at U7AMODE.B15;
sfr unsigned long   volatile U4MODECLR        absolute 0xBF806604;
sfr unsigned long   volatile U7AMODECLR       absolute 0xBF806604;
sfr unsigned long   volatile U4MODESET        absolute 0xBF806608;
sfr unsigned long   volatile U7AMODESET       absolute 0xBF806608;
sfr unsigned long   volatile U4MODEINV        absolute 0xBF80660C;
sfr unsigned long   volatile U7AMODEINV       absolute 0xBF80660C;
sfr atomic unsigned long   volatile U4STA            absolute 0xBF806610;
    sbit  URXDA_U4STA_bit at U4STA.B0;
    sbit  OERR_U4STA_bit at U4STA.B1;
    sbit  FERR_U4STA_bit at U4STA.B2;
    sbit  PERR_U4STA_bit at U4STA.B3;
    sbit  RIDLE_U4STA_bit at U4STA.B4;
    sbit  ADDEN_U4STA_bit at U4STA.B5;
    sbit  URXISEL0_U4STA_bit at U4STA.B6;
    sbit  URXISEL1_U4STA_bit at U4STA.B7;
    sbit  TRMT_U4STA_bit at U4STA.B8;
    sbit  UTXBF_U4STA_bit at U4STA.B9;
    sbit  UTXEN_U4STA_bit at U4STA.B10;
    sbit  UTXBRK_U4STA_bit at U4STA.B11;
    sbit  URXEN_U4STA_bit at U4STA.B12;
    sbit  UTXINV_U4STA_bit at U4STA.B13;
    sbit  UTXISEL0_U4STA_bit at U4STA.B14;
    sbit  UTXISEL1_U4STA_bit at U4STA.B15;
    sbit  ADDR0_U4STA_bit at U4STA.B16;
    sbit  ADDR1_U4STA_bit at U4STA.B17;
    sbit  ADDR2_U4STA_bit at U4STA.B18;
    sbit  ADDR3_U4STA_bit at U4STA.B19;
    sbit  ADDR4_U4STA_bit at U4STA.B20;
    sbit  ADDR5_U4STA_bit at U4STA.B21;
    sbit  ADDR6_U4STA_bit at U4STA.B22;
    sbit  ADDR7_U4STA_bit at U4STA.B23;
    sbit  ADM_EN_U4STA_bit at U4STA.B24;
    sbit  UTXSEL0_U4STA_bit at U4STA.B14;
    sbit  UTXSEL1_U4STA_bit at U4STA.B15;
sfr atomic unsigned long   volatile U7ASTA           absolute 0xBF806610;
    sbit  URXDA_U7ASTA_bit at U7ASTA.B0;
    sbit  OERR_U7ASTA_bit at U7ASTA.B1;
    sbit  FERR_U7ASTA_bit at U7ASTA.B2;
    sbit  PERR_U7ASTA_bit at U7ASTA.B3;
    sbit  RIDLE_U7ASTA_bit at U7ASTA.B4;
    sbit  ADDEN_U7ASTA_bit at U7ASTA.B5;
    sbit  URXISEL0_U7ASTA_bit at U7ASTA.B6;
    sbit  URXISEL1_U7ASTA_bit at U7ASTA.B7;
    sbit  TRMT_U7ASTA_bit at U7ASTA.B8;
    sbit  UTXBF_U7ASTA_bit at U7ASTA.B9;
    sbit  UTXEN_U7ASTA_bit at U7ASTA.B10;
    sbit  UTXBRK_U7ASTA_bit at U7ASTA.B11;
    sbit  URXEN_U7ASTA_bit at U7ASTA.B12;
    sbit  UTXINV_U7ASTA_bit at U7ASTA.B13;
    sbit  UTXISEL0_U7ASTA_bit at U7ASTA.B14;
    sbit  UTXISEL1_U7ASTA_bit at U7ASTA.B15;
    sbit  ADDR0_U7ASTA_bit at U7ASTA.B16;
    sbit  ADDR1_U7ASTA_bit at U7ASTA.B17;
    sbit  ADDR2_U7ASTA_bit at U7ASTA.B18;
    sbit  ADDR3_U7ASTA_bit at U7ASTA.B19;
    sbit  ADDR4_U7ASTA_bit at U7ASTA.B20;
    sbit  ADDR5_U7ASTA_bit at U7ASTA.B21;
    sbit  ADDR6_U7ASTA_bit at U7ASTA.B22;
    sbit  ADDR7_U7ASTA_bit at U7ASTA.B23;
    sbit  ADM_EN_U7ASTA_bit at U7ASTA.B24;
    sbit  UTXSEL0_U7ASTA_bit at U7ASTA.B14;
    sbit  UTXSEL1_U7ASTA_bit at U7ASTA.B15;
sfr unsigned long   volatile U4STACLR         absolute 0xBF806614;
sfr unsigned long   volatile U7ASTACLR        absolute 0xBF806614;
sfr unsigned long   volatile U4STASET         absolute 0xBF806618;
sfr unsigned long   volatile U7ASTASET        absolute 0xBF806618;
sfr unsigned long   volatile U4STAINV         absolute 0xBF80661C;
sfr unsigned long   volatile U7ASTAINV        absolute 0xBF80661C;
sfr unsigned long            U4TXREG          absolute 0xBF806620;
sfr unsigned long   volatile U7ATXREG         absolute 0xBF806620;
sfr unsigned long   volatile U4RXREG          absolute 0xBF806630;
sfr unsigned long   volatile U7ARXREG         absolute 0xBF806630;
sfr atomic unsigned long            U4BRG            absolute 0xBF806640;
sfr atomic unsigned long   volatile U7ABRG           absolute 0xBF806640;
sfr unsigned long   volatile U4BRGCLR         absolute 0xBF806644;
sfr unsigned long   volatile U7ABRGCLR        absolute 0xBF806644;
sfr unsigned long   volatile U4BRGSET         absolute 0xBF806648;
sfr unsigned long   volatile U7ABRGSET        absolute 0xBF806648;
sfr unsigned long   volatile U4BRGINV         absolute 0xBF80664C;
sfr unsigned long   volatile U7ABRGINV        absolute 0xBF80664C;
sfr atomic unsigned long            PMCON            absolute 0xBF807000;
    const register unsigned short int RDSP = 0;
    sbit  RDSP_bit at PMCON.B0;
    const register unsigned short int WRSP = 1;
    sbit  WRSP_bit at PMCON.B1;
    const register unsigned short int CS1P = 3;
    sbit  CS1P_bit at PMCON.B3;
    const register unsigned short int CS2P = 4;
    sbit  CS2P_bit at PMCON.B4;
    const register unsigned short int ALP = 5;
    sbit  ALP_bit at PMCON.B5;
    const register unsigned short int CSF0 = 6;
    sbit  CSF0_bit at PMCON.B6;
    const register unsigned short int CSF1 = 7;
    sbit  CSF1_bit at PMCON.B7;
    const register unsigned short int PTRDEN = 8;
    sbit  PTRDEN_bit at PMCON.B8;
    const register unsigned short int PTWREN = 9;
    sbit  PTWREN_bit at PMCON.B9;
    const register unsigned short int PMPTTL = 10;
    sbit  PMPTTL_bit at PMCON.B10;
    const register unsigned short int ADRMUX0 = 11;
    sbit  ADRMUX0_bit at PMCON.B11;
    const register unsigned short int ADRMUX1 = 12;
    sbit  ADRMUX1_bit at PMCON.B12;
    sbit  SIDL_PMCON_bit at PMCON.B13;
    sbit  ON_PMCON_bit at PMCON.B15;
    const register unsigned short int DUALBUF = 17;
    sbit  DUALBUF_bit at PMCON.B17;
    const register unsigned short int RDSTART = 23;
    sbit  RDSTART_bit at PMCON.B23;
    sbit  CSF0_PMCON_bit at PMCON.B6;
    sbit  CSF1_PMCON_bit at PMCON.B7;
    sbit  ADRMUX0_PMCON_bit at PMCON.B11;
    sbit  ADRMUX1_PMCON_bit at PMCON.B12;
    const register unsigned short int PSIDL = 13;
    sbit  PSIDL_bit at PMCON.B13;
    const register unsigned short int PMPEN = 15;
    sbit  PMPEN_bit at PMCON.B15;
sfr unsigned long   volatile PMCONCLR         absolute 0xBF807004;
sfr unsigned long   volatile PMCONSET         absolute 0xBF807008;
sfr unsigned long   volatile PMCONINV         absolute 0xBF80700C;
sfr atomic unsigned long   volatile PMMODE           absolute 0xBF807010;
    const register unsigned short int WAITE0 = 0;
    sbit  WAITE0_bit at PMMODE.B0;
    const register unsigned short int WAITE1 = 1;
    sbit  WAITE1_bit at PMMODE.B1;
    const register unsigned short int WAITM0 = 2;
    sbit  WAITM0_bit at PMMODE.B2;
    const register unsigned short int WAITM1 = 3;
    sbit  WAITM1_bit at PMMODE.B3;
    const register unsigned short int WAITM2 = 4;
    sbit  WAITM2_bit at PMMODE.B4;
    const register unsigned short int WAITM3 = 5;
    sbit  WAITM3_bit at PMMODE.B5;
    const register unsigned short int WAITB0 = 6;
    sbit  WAITB0_bit at PMMODE.B6;
    const register unsigned short int WAITB1 = 7;
    sbit  WAITB1_bit at PMMODE.B7;
    const register unsigned short int MODE0 = 8;
    sbit  MODE0_bit at PMMODE.B8;
    const register unsigned short int MODE1 = 9;
    sbit  MODE1_bit at PMMODE.B9;
    sbit  MODE16_PMMODE_bit at PMMODE.B10;
    const register unsigned short int INCM0 = 11;
    sbit  INCM0_bit at PMMODE.B11;
    const register unsigned short int INCM1 = 12;
    sbit  INCM1_bit at PMMODE.B12;
    const register unsigned short int IRQM0 = 13;
    sbit  IRQM0_bit at PMMODE.B13;
    const register unsigned short int IRQM1 = 14;
    sbit  IRQM1_bit at PMMODE.B14;
    const register unsigned short int BUSY = 15;
    sbit  BUSY_bit at PMMODE.B15;
    sbit  WAITE0_PMMODE_bit at PMMODE.B0;
    sbit  WAITE1_PMMODE_bit at PMMODE.B1;
    sbit  WAITM0_PMMODE_bit at PMMODE.B2;
    sbit  WAITM1_PMMODE_bit at PMMODE.B3;
    sbit  WAITM2_PMMODE_bit at PMMODE.B4;
    sbit  WAITM3_PMMODE_bit at PMMODE.B5;
    sbit  WAITB0_PMMODE_bit at PMMODE.B6;
    sbit  WAITB1_PMMODE_bit at PMMODE.B7;
    sbit  MODE0_PMMODE_bit at PMMODE.B8;
    sbit  MODE1_PMMODE_bit at PMMODE.B9;
    sbit  INCM0_PMMODE_bit at PMMODE.B11;
    sbit  INCM1_PMMODE_bit at PMMODE.B12;
    sbit  IRQM0_PMMODE_bit at PMMODE.B13;
    sbit  IRQM1_PMMODE_bit at PMMODE.B14;
sfr unsigned long   volatile PMMODECLR        absolute 0xBF807014;
sfr unsigned long   volatile PMMODESET        absolute 0xBF807018;
sfr unsigned long   volatile PMMODEINV        absolute 0xBF80701C;
sfr atomic unsigned long   volatile PMADDR           absolute 0xBF807020;
    sbit  ADDR0_PMADDR_bit at PMADDR.B0;
    sbit  ADDR1_PMADDR_bit at PMADDR.B1;
    sbit  ADDR2_PMADDR_bit at PMADDR.B2;
    sbit  ADDR3_PMADDR_bit at PMADDR.B3;
    sbit  ADDR4_PMADDR_bit at PMADDR.B4;
    sbit  ADDR5_PMADDR_bit at PMADDR.B5;
    sbit  ADDR6_PMADDR_bit at PMADDR.B6;
    sbit  ADDR7_PMADDR_bit at PMADDR.B7;
    const register unsigned short int ADDR8 = 8;
    sbit  ADDR8_bit at PMADDR.B8;
    const register unsigned short int ADDR9 = 9;
    sbit  ADDR9_bit at PMADDR.B9;
    const register unsigned short int ADDR10 = 10;
    sbit  ADDR10_bit at PMADDR.B10;
    const register unsigned short int ADDR11 = 11;
    sbit  ADDR11_bit at PMADDR.B11;
    const register unsigned short int ADDR12 = 12;
    sbit  ADDR12_bit at PMADDR.B12;
    const register unsigned short int ADDR13 = 13;
    sbit  ADDR13_bit at PMADDR.B13;
    const register unsigned short int ADDR14 = 14;
    sbit  ADDR14_bit at PMADDR.B14;
    const register unsigned short int ADDR15 = 15;
    sbit  ADDR15_bit at PMADDR.B15;
    const register unsigned short int CS0 = 14;
    sbit  CS0_bit at PMADDR.B14;
    const register unsigned short int CS1 = 15;
    sbit  CS1_bit at PMADDR.B15;
    sbit  CS1_PMADDR_bit at PMADDR.B14;
    const register unsigned short int CS2 = 15;
    sbit  CS2_bit at PMADDR.B15;
sfr unsigned long   volatile PMADDRCLR        absolute 0xBF807024;
sfr unsigned long   volatile PMADDRSET        absolute 0xBF807028;
sfr unsigned long   volatile PMADDRINV        absolute 0xBF80702C;
sfr atomic unsigned long   volatile PMDOUT           absolute 0xBF807030;
    const register unsigned short int DATAOUT0 = 0;
    sbit  DATAOUT0_bit at PMDOUT.B0;
    const register unsigned short int DATAOUT1 = 1;
    sbit  DATAOUT1_bit at PMDOUT.B1;
    const register unsigned short int DATAOUT2 = 2;
    sbit  DATAOUT2_bit at PMDOUT.B2;
    const register unsigned short int DATAOUT3 = 3;
    sbit  DATAOUT3_bit at PMDOUT.B3;
    const register unsigned short int DATAOUT4 = 4;
    sbit  DATAOUT4_bit at PMDOUT.B4;
    const register unsigned short int DATAOUT5 = 5;
    sbit  DATAOUT5_bit at PMDOUT.B5;
    const register unsigned short int DATAOUT6 = 6;
    sbit  DATAOUT6_bit at PMDOUT.B6;
    const register unsigned short int DATAOUT7 = 7;
    sbit  DATAOUT7_bit at PMDOUT.B7;
    const register unsigned short int DATAOUT8 = 8;
    sbit  DATAOUT8_bit at PMDOUT.B8;
    const register unsigned short int DATAOUT9 = 9;
    sbit  DATAOUT9_bit at PMDOUT.B9;
    const register unsigned short int DATAOUT10 = 10;
    sbit  DATAOUT10_bit at PMDOUT.B10;
    const register unsigned short int DATAOUT11 = 11;
    sbit  DATAOUT11_bit at PMDOUT.B11;
    const register unsigned short int DATAOUT12 = 12;
    sbit  DATAOUT12_bit at PMDOUT.B12;
    const register unsigned short int DATAOUT13 = 13;
    sbit  DATAOUT13_bit at PMDOUT.B13;
    const register unsigned short int DATAOUT14 = 14;
    sbit  DATAOUT14_bit at PMDOUT.B14;
    const register unsigned short int DATAOUT15 = 15;
    sbit  DATAOUT15_bit at PMDOUT.B15;
    const register unsigned short int DATAOUT16 = 16;
    sbit  DATAOUT16_bit at PMDOUT.B16;
    const register unsigned short int DATAOUT17 = 17;
    sbit  DATAOUT17_bit at PMDOUT.B17;
    const register unsigned short int DATAOUT18 = 18;
    sbit  DATAOUT18_bit at PMDOUT.B18;
    const register unsigned short int DATAOUT19 = 19;
    sbit  DATAOUT19_bit at PMDOUT.B19;
    const register unsigned short int DATAOUT20 = 20;
    sbit  DATAOUT20_bit at PMDOUT.B20;
    const register unsigned short int DATAOUT21 = 21;
    sbit  DATAOUT21_bit at PMDOUT.B21;
    const register unsigned short int DATAOUT22 = 22;
    sbit  DATAOUT22_bit at PMDOUT.B22;
    const register unsigned short int DATAOUT23 = 23;
    sbit  DATAOUT23_bit at PMDOUT.B23;
    const register unsigned short int DATAOUT24 = 24;
    sbit  DATAOUT24_bit at PMDOUT.B24;
    const register unsigned short int DATAOUT25 = 25;
    sbit  DATAOUT25_bit at PMDOUT.B25;
    const register unsigned short int DATAOUT26 = 26;
    sbit  DATAOUT26_bit at PMDOUT.B26;
    const register unsigned short int DATAOUT27 = 27;
    sbit  DATAOUT27_bit at PMDOUT.B27;
    const register unsigned short int DATAOUT28 = 28;
    sbit  DATAOUT28_bit at PMDOUT.B28;
    const register unsigned short int DATAOUT29 = 29;
    sbit  DATAOUT29_bit at PMDOUT.B29;
    const register unsigned short int DATAOUT30 = 30;
    sbit  DATAOUT30_bit at PMDOUT.B30;
    const register unsigned short int DATAOUT31 = 31;
    sbit  DATAOUT31_bit at PMDOUT.B31;
sfr unsigned long   volatile PMDOUTCLR        absolute 0xBF807034;
sfr unsigned long   volatile PMDOUTSET        absolute 0xBF807038;
sfr unsigned long   volatile PMDOUTINV        absolute 0xBF80703C;
sfr atomic unsigned long   volatile PMDIN            absolute 0xBF807040;
    const register unsigned short int DATAIN0 = 0;
    sbit  DATAIN0_bit at PMDIN.B0;
    const register unsigned short int DATAIN1 = 1;
    sbit  DATAIN1_bit at PMDIN.B1;
    const register unsigned short int DATAIN2 = 2;
    sbit  DATAIN2_bit at PMDIN.B2;
    const register unsigned short int DATAIN3 = 3;
    sbit  DATAIN3_bit at PMDIN.B3;
    const register unsigned short int DATAIN4 = 4;
    sbit  DATAIN4_bit at PMDIN.B4;
    const register unsigned short int DATAIN5 = 5;
    sbit  DATAIN5_bit at PMDIN.B5;
    const register unsigned short int DATAIN6 = 6;
    sbit  DATAIN6_bit at PMDIN.B6;
    const register unsigned short int DATAIN7 = 7;
    sbit  DATAIN7_bit at PMDIN.B7;
    const register unsigned short int DATAIN8 = 8;
    sbit  DATAIN8_bit at PMDIN.B8;
    const register unsigned short int DATAIN9 = 9;
    sbit  DATAIN9_bit at PMDIN.B9;
    const register unsigned short int DATAIN10 = 10;
    sbit  DATAIN10_bit at PMDIN.B10;
    const register unsigned short int DATAIN11 = 11;
    sbit  DATAIN11_bit at PMDIN.B11;
    const register unsigned short int DATAIN12 = 12;
    sbit  DATAIN12_bit at PMDIN.B12;
    const register unsigned short int DATAIN13 = 13;
    sbit  DATAIN13_bit at PMDIN.B13;
    const register unsigned short int DATAIN14 = 14;
    sbit  DATAIN14_bit at PMDIN.B14;
    const register unsigned short int DATAIN15 = 15;
    sbit  DATAIN15_bit at PMDIN.B15;
    const register unsigned short int DATAIN16 = 16;
    sbit  DATAIN16_bit at PMDIN.B16;
    const register unsigned short int DATAIN17 = 17;
    sbit  DATAIN17_bit at PMDIN.B17;
    const register unsigned short int DATAIN18 = 18;
    sbit  DATAIN18_bit at PMDIN.B18;
    const register unsigned short int DATAIN19 = 19;
    sbit  DATAIN19_bit at PMDIN.B19;
    const register unsigned short int DATAIN20 = 20;
    sbit  DATAIN20_bit at PMDIN.B20;
    const register unsigned short int DATAIN21 = 21;
    sbit  DATAIN21_bit at PMDIN.B21;
    const register unsigned short int DATAIN22 = 22;
    sbit  DATAIN22_bit at PMDIN.B22;
    const register unsigned short int DATAIN23 = 23;
    sbit  DATAIN23_bit at PMDIN.B23;
    const register unsigned short int DATAIN24 = 24;
    sbit  DATAIN24_bit at PMDIN.B24;
    const register unsigned short int DATAIN25 = 25;
    sbit  DATAIN25_bit at PMDIN.B25;
    const register unsigned short int DATAIN26 = 26;
    sbit  DATAIN26_bit at PMDIN.B26;
    const register unsigned short int DATAIN27 = 27;
    sbit  DATAIN27_bit at PMDIN.B27;
    const register unsigned short int DATAIN28 = 28;
    sbit  DATAIN28_bit at PMDIN.B28;
    const register unsigned short int DATAIN29 = 29;
    sbit  DATAIN29_bit at PMDIN.B29;
    const register unsigned short int DATAIN30 = 30;
    sbit  DATAIN30_bit at PMDIN.B30;
    const register unsigned short int DATAIN31 = 31;
    sbit  DATAIN31_bit at PMDIN.B31;
sfr unsigned long   volatile PMDINCLR         absolute 0xBF807044;
sfr unsigned long   volatile PMDINSET         absolute 0xBF807048;
sfr unsigned long   volatile PMDININV         absolute 0xBF80704C;
sfr atomic unsigned long   volatile PMAEN            absolute 0xBF807050;
    const register unsigned short int PTEN0 = 0;
    sbit  PTEN0_bit at PMAEN.B0;
    const register unsigned short int PTEN1 = 1;
    sbit  PTEN1_bit at PMAEN.B1;
    const register unsigned short int PTEN2 = 2;
    sbit  PTEN2_bit at PMAEN.B2;
    const register unsigned short int PTEN3 = 3;
    sbit  PTEN3_bit at PMAEN.B3;
    const register unsigned short int PTEN4 = 4;
    sbit  PTEN4_bit at PMAEN.B4;
    const register unsigned short int PTEN5 = 5;
    sbit  PTEN5_bit at PMAEN.B5;
    const register unsigned short int PTEN6 = 6;
    sbit  PTEN6_bit at PMAEN.B6;
    const register unsigned short int PTEN7 = 7;
    sbit  PTEN7_bit at PMAEN.B7;
    const register unsigned short int PTEN8 = 8;
    sbit  PTEN8_bit at PMAEN.B8;
    const register unsigned short int PTEN9 = 9;
    sbit  PTEN9_bit at PMAEN.B9;
    const register unsigned short int PTEN10 = 10;
    sbit  PTEN10_bit at PMAEN.B10;
    const register unsigned short int PTEN11 = 11;
    sbit  PTEN11_bit at PMAEN.B11;
    const register unsigned short int PTEN12 = 12;
    sbit  PTEN12_bit at PMAEN.B12;
    const register unsigned short int PTEN13 = 13;
    sbit  PTEN13_bit at PMAEN.B13;
    const register unsigned short int PTEN14 = 14;
    sbit  PTEN14_bit at PMAEN.B14;
    const register unsigned short int PTEN15 = 15;
    sbit  PTEN15_bit at PMAEN.B15;
    const register unsigned short int PTEN16 = 16;
    sbit  PTEN16_bit at PMAEN.B16;
    const register unsigned short int PTEN17 = 17;
    sbit  PTEN17_bit at PMAEN.B17;
    const register unsigned short int PTEN18 = 18;
    sbit  PTEN18_bit at PMAEN.B18;
    const register unsigned short int PTEN19 = 19;
    sbit  PTEN19_bit at PMAEN.B19;
    const register unsigned short int PTEN20 = 20;
    sbit  PTEN20_bit at PMAEN.B20;
    const register unsigned short int PTEN21 = 21;
    sbit  PTEN21_bit at PMAEN.B21;
    const register unsigned short int PTEN22 = 22;
    sbit  PTEN22_bit at PMAEN.B22;
    const register unsigned short int PTEN23 = 23;
    sbit  PTEN23_bit at PMAEN.B23;
sfr unsigned long   volatile PMAENCLR         absolute 0xBF807054;
sfr unsigned long   volatile PMAENSET         absolute 0xBF807058;
sfr unsigned long   volatile PMAENINV         absolute 0xBF80705C;
sfr atomic unsigned long   volatile PMSTAT           absolute 0xBF807060;
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
sfr unsigned long   volatile PMSTATCLR        absolute 0xBF807064;
sfr unsigned long   volatile PMSTATSET        absolute 0xBF807068;
sfr unsigned long   volatile PMSTATINV        absolute 0xBF80706C;
sfr atomic unsigned long   volatile PMWADDR          absolute 0xBF807070;
    const register unsigned short int WADDR0 = 0;
    sbit  WADDR0_bit at PMWADDR.B0;
    const register unsigned short int WADDR1 = 1;
    sbit  WADDR1_bit at PMWADDR.B1;
    const register unsigned short int WADDR2 = 2;
    sbit  WADDR2_bit at PMWADDR.B2;
    const register unsigned short int WADDR3 = 3;
    sbit  WADDR3_bit at PMWADDR.B3;
    const register unsigned short int WADDR4 = 4;
    sbit  WADDR4_bit at PMWADDR.B4;
    const register unsigned short int WADDR5 = 5;
    sbit  WADDR5_bit at PMWADDR.B5;
    const register unsigned short int WADDR6 = 6;
    sbit  WADDR6_bit at PMWADDR.B6;
    const register unsigned short int WADDR7 = 7;
    sbit  WADDR7_bit at PMWADDR.B7;
    const register unsigned short int WADDR8 = 8;
    sbit  WADDR8_bit at PMWADDR.B8;
    const register unsigned short int WADDR9 = 9;
    sbit  WADDR9_bit at PMWADDR.B9;
    const register unsigned short int WADDR10 = 10;
    sbit  WADDR10_bit at PMWADDR.B10;
    const register unsigned short int WADDR11 = 11;
    sbit  WADDR11_bit at PMWADDR.B11;
    const register unsigned short int WADDR12 = 12;
    sbit  WADDR12_bit at PMWADDR.B12;
    const register unsigned short int WADDR13 = 13;
    sbit  WADDR13_bit at PMWADDR.B13;
    const register unsigned short int WADDR14 = 14;
    sbit  WADDR14_bit at PMWADDR.B14;
    const register unsigned short int WADDR15 = 15;
    sbit  WADDR15_bit at PMWADDR.B15;
    const register unsigned short int WADDR16 = 16;
    sbit  WADDR16_bit at PMWADDR.B16;
    const register unsigned short int WADDR17 = 17;
    sbit  WADDR17_bit at PMWADDR.B17;
    const register unsigned short int WADDR18 = 18;
    sbit  WADDR18_bit at PMWADDR.B18;
    const register unsigned short int WADDR19 = 19;
    sbit  WADDR19_bit at PMWADDR.B19;
    const register unsigned short int WADDR20 = 20;
    sbit  WADDR20_bit at PMWADDR.B20;
    const register unsigned short int WADDR21 = 21;
    sbit  WADDR21_bit at PMWADDR.B21;
    const register unsigned short int WADDR22 = 22;
    sbit  WADDR22_bit at PMWADDR.B22;
    const register unsigned short int WADDR23 = 23;
    sbit  WADDR23_bit at PMWADDR.B23;
    const register unsigned short int WCS0 = 14;
    sbit  WCS0_bit at PMWADDR.B14;
    const register unsigned short int WCS1 = 15;
    sbit  WCS1_bit at PMWADDR.B15;
    const register unsigned short int WCSA0 = 22;
    sbit  WCSA0_bit at PMWADDR.B22;
    const register unsigned short int WCSA1 = 23;
    sbit  WCSA1_bit at PMWADDR.B23;
    sbit  WCS1_PMWADDR_bit at PMWADDR.B14;
    const register unsigned short int WCS2 = 15;
    sbit  WCS2_bit at PMWADDR.B15;
    const register unsigned short int WCS1A = 22;
    sbit  WCS1A_bit at PMWADDR.B22;
    const register unsigned short int WCS2A = 23;
    sbit  WCS2A_bit at PMWADDR.B23;
    sbit  WADDR14_PMWADDR_bit at PMWADDR.B14;
    sbit  WADDR15_PMWADDR_bit at PMWADDR.B15;
    sbit  WADDR22_PMWADDR_bit at PMWADDR.B22;
    sbit  WADDR23_PMWADDR_bit at PMWADDR.B23;
sfr unsigned long   volatile PMWADDRCLR       absolute 0xBF807074;
sfr unsigned long   volatile PMWADDRSET       absolute 0xBF807078;
sfr unsigned long   volatile PMWADDRINV       absolute 0xBF80707C;
sfr atomic unsigned long   volatile PMRADDR          absolute 0xBF807080;
    const register unsigned short int RADDR0 = 0;
    sbit  RADDR0_bit at PMRADDR.B0;
    const register unsigned short int RADDR1 = 1;
    sbit  RADDR1_bit at PMRADDR.B1;
    const register unsigned short int RADDR2 = 2;
    sbit  RADDR2_bit at PMRADDR.B2;
    const register unsigned short int RADDR3 = 3;
    sbit  RADDR3_bit at PMRADDR.B3;
    const register unsigned short int RADDR4 = 4;
    sbit  RADDR4_bit at PMRADDR.B4;
    const register unsigned short int RADDR5 = 5;
    sbit  RADDR5_bit at PMRADDR.B5;
    const register unsigned short int RADDR6 = 6;
    sbit  RADDR6_bit at PMRADDR.B6;
    const register unsigned short int RADDR7 = 7;
    sbit  RADDR7_bit at PMRADDR.B7;
    const register unsigned short int RADDR8 = 8;
    sbit  RADDR8_bit at PMRADDR.B8;
    const register unsigned short int RADDR9 = 9;
    sbit  RADDR9_bit at PMRADDR.B9;
    const register unsigned short int RADDR10 = 10;
    sbit  RADDR10_bit at PMRADDR.B10;
    const register unsigned short int RADDR11 = 11;
    sbit  RADDR11_bit at PMRADDR.B11;
    const register unsigned short int RADDR12 = 12;
    sbit  RADDR12_bit at PMRADDR.B12;
    const register unsigned short int RADDR13 = 13;
    sbit  RADDR13_bit at PMRADDR.B13;
    const register unsigned short int RADDR14 = 14;
    sbit  RADDR14_bit at PMRADDR.B14;
    const register unsigned short int RADDR15 = 15;
    sbit  RADDR15_bit at PMRADDR.B15;
    const register unsigned short int RCS0 = 14;
    sbit  RCS0_bit at PMRADDR.B14;
    const register unsigned short int RCS1 = 15;
    sbit  RCS1_bit at PMRADDR.B15;
    sbit  RCS1_PMRADDR_bit at PMRADDR.B14;
    const register unsigned short int RCS2 = 15;
    sbit  RCS2_bit at PMRADDR.B15;
sfr unsigned long   volatile PMRADDRCLR       absolute 0xBF807084;
sfr unsigned long   volatile PMRADDRSET       absolute 0xBF807088;
sfr unsigned long   volatile PMRADDRINV       absolute 0xBF80708C;
sfr atomic unsigned long   volatile PMRDIN           absolute 0xBF807090;
    const register unsigned short int RDATAIN0 = 0;
    sbit  RDATAIN0_bit at PMRDIN.B0;
    const register unsigned short int RDATAIN1 = 1;
    sbit  RDATAIN1_bit at PMRDIN.B1;
    const register unsigned short int RDATAIN2 = 2;
    sbit  RDATAIN2_bit at PMRDIN.B2;
    const register unsigned short int RDATAIN3 = 3;
    sbit  RDATAIN3_bit at PMRDIN.B3;
    const register unsigned short int RDATAIN4 = 4;
    sbit  RDATAIN4_bit at PMRDIN.B4;
    const register unsigned short int RDATAIN5 = 5;
    sbit  RDATAIN5_bit at PMRDIN.B5;
    const register unsigned short int RDATAIN6 = 6;
    sbit  RDATAIN6_bit at PMRDIN.B6;
    const register unsigned short int RDATAIN7 = 7;
    sbit  RDATAIN7_bit at PMRDIN.B7;
    const register unsigned short int RDATAIN8 = 8;
    sbit  RDATAIN8_bit at PMRDIN.B8;
    const register unsigned short int RDATAIN9 = 9;
    sbit  RDATAIN9_bit at PMRDIN.B9;
    const register unsigned short int RDATAIN10 = 10;
    sbit  RDATAIN10_bit at PMRDIN.B10;
    const register unsigned short int RDATAIN11 = 11;
    sbit  RDATAIN11_bit at PMRDIN.B11;
    const register unsigned short int RDATAIN12 = 12;
    sbit  RDATAIN12_bit at PMRDIN.B12;
    const register unsigned short int RDATAIN13 = 13;
    sbit  RDATAIN13_bit at PMRDIN.B13;
    const register unsigned short int RDATAIN14 = 14;
    sbit  RDATAIN14_bit at PMRDIN.B14;
    const register unsigned short int RDATAIN15 = 15;
    sbit  RDATAIN15_bit at PMRDIN.B15;
    const register unsigned short int RDATAIN16 = 16;
    sbit  RDATAIN16_bit at PMRDIN.B16;
    const register unsigned short int RDATAIN17 = 17;
    sbit  RDATAIN17_bit at PMRDIN.B17;
    const register unsigned short int RDATAIN18 = 18;
    sbit  RDATAIN18_bit at PMRDIN.B18;
    const register unsigned short int RDATAIN19 = 19;
    sbit  RDATAIN19_bit at PMRDIN.B19;
    const register unsigned short int RDATAIN20 = 20;
    sbit  RDATAIN20_bit at PMRDIN.B20;
    const register unsigned short int RDATAIN21 = 21;
    sbit  RDATAIN21_bit at PMRDIN.B21;
    const register unsigned short int RDATAIN22 = 22;
    sbit  RDATAIN22_bit at PMRDIN.B22;
    const register unsigned short int RDATAIN23 = 23;
    sbit  RDATAIN23_bit at PMRDIN.B23;
    const register unsigned short int RDATAIN24 = 24;
    sbit  RDATAIN24_bit at PMRDIN.B24;
    const register unsigned short int RDATAIN25 = 25;
    sbit  RDATAIN25_bit at PMRDIN.B25;
    const register unsigned short int RDATAIN26 = 26;
    sbit  RDATAIN26_bit at PMRDIN.B26;
    const register unsigned short int RDATAIN27 = 27;
    sbit  RDATAIN27_bit at PMRDIN.B27;
    const register unsigned short int RDATAIN28 = 28;
    sbit  RDATAIN28_bit at PMRDIN.B28;
    const register unsigned short int RDATAIN29 = 29;
    sbit  RDATAIN29_bit at PMRDIN.B29;
    const register unsigned short int RDATAIN30 = 30;
    sbit  RDATAIN30_bit at PMRDIN.B30;
    const register unsigned short int RDATAIN31 = 31;
    sbit  RDATAIN31_bit at PMRDIN.B31;
sfr unsigned long   volatile PMRDINCLR        absolute 0xBF807094;
sfr unsigned long   volatile PMRDINSET        absolute 0xBF807098;
sfr unsigned long   volatile PMRDININV        absolute 0xBF80709C;
sfr atomic unsigned long   volatile AD1CON1          absolute 0xBF809000;
    const register unsigned short int DONE = 0;
    sbit  DONE_bit at AD1CON1.B0;
    const register unsigned short int SAMP = 1;
    sbit  SAMP_bit at AD1CON1.B1;
    const register unsigned short int ASAM = 2;
    sbit  ASAM_bit at AD1CON1.B2;
    const register unsigned short int CLRASAM = 4;
    sbit  CLRASAM_bit at AD1CON1.B4;
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
    const register unsigned short int FORM2 = 10;
    sbit  FORM2_bit at AD1CON1.B10;
    sbit  SIDL_AD1CON1_bit at AD1CON1.B13;
    sbit  ON_AD1CON1_bit at AD1CON1.B15;
    sbit  SSRC0_AD1CON1_bit at AD1CON1.B5;
    sbit  SSRC1_AD1CON1_bit at AD1CON1.B6;
    sbit  SSRC2_AD1CON1_bit at AD1CON1.B7;
    sbit  FORM0_AD1CON1_bit at AD1CON1.B8;
    sbit  FORM1_AD1CON1_bit at AD1CON1.B9;
    sbit  FORM2_AD1CON1_bit at AD1CON1.B10;
    const register unsigned short int ADSIDL = 13;
    sbit  ADSIDL_bit at AD1CON1.B13;
    const register unsigned short int ADON = 15;
    sbit  ADON_bit at AD1CON1.B15;
sfr unsigned long   volatile AD1CON1CLR       absolute 0xBF809004;
sfr unsigned long   volatile AD1CON1SET       absolute 0xBF809008;
sfr unsigned long   volatile AD1CON1INV       absolute 0xBF80900C;
sfr atomic unsigned long   volatile AD1CON2          absolute 0xBF809010;
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
    const register unsigned short int BUFS = 7;
    sbit  BUFS_bit at AD1CON2.B7;
    const register unsigned short int CSCNA = 10;
    sbit  CSCNA_bit at AD1CON2.B10;
    const register unsigned short int OFFCAL = 12;
    sbit  OFFCAL_bit at AD1CON2.B12;
    const register unsigned short int VCFG0 = 13;
    sbit  VCFG0_bit at AD1CON2.B13;
    const register unsigned short int VCFG1 = 14;
    sbit  VCFG1_bit at AD1CON2.B14;
    const register unsigned short int VCFG2 = 15;
    sbit  VCFG2_bit at AD1CON2.B15;
    sbit  SMPI0_AD1CON2_bit at AD1CON2.B2;
    sbit  SMPI1_AD1CON2_bit at AD1CON2.B3;
    sbit  SMPI2_AD1CON2_bit at AD1CON2.B4;
    sbit  SMPI3_AD1CON2_bit at AD1CON2.B5;
    sbit  VCFG0_AD1CON2_bit at AD1CON2.B13;
    sbit  VCFG1_AD1CON2_bit at AD1CON2.B14;
    sbit  VCFG2_AD1CON2_bit at AD1CON2.B15;
sfr unsigned long   volatile AD1CON2CLR       absolute 0xBF809014;
sfr unsigned long   volatile AD1CON2SET       absolute 0xBF809018;
sfr unsigned long   volatile AD1CON2INV       absolute 0xBF80901C;
sfr atomic unsigned long   volatile AD1CON3          absolute 0xBF809020;
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
    sbit  ADCS0_AD1CON3_bit at AD1CON3.B0;
    sbit  ADCS1_AD1CON3_bit at AD1CON3.B1;
    sbit  ADCS2_AD1CON3_bit at AD1CON3.B2;
    sbit  ADCS3_AD1CON3_bit at AD1CON3.B3;
    sbit  ADCS4_AD1CON3_bit at AD1CON3.B4;
    sbit  ADCS5_AD1CON3_bit at AD1CON3.B5;
    sbit  ADCS6_AD1CON3_bit at AD1CON3.B6;
    sbit  ADCS7_AD1CON3_bit at AD1CON3.B7;
    sbit  SAMC0_AD1CON3_bit at AD1CON3.B8;
    sbit  SAMC1_AD1CON3_bit at AD1CON3.B9;
    sbit  SAMC2_AD1CON3_bit at AD1CON3.B10;
    sbit  SAMC3_AD1CON3_bit at AD1CON3.B11;
    sbit  SAMC4_AD1CON3_bit at AD1CON3.B12;
sfr unsigned long   volatile AD1CON3CLR       absolute 0xBF809024;
sfr unsigned long   volatile AD1CON3SET       absolute 0xBF809028;
sfr unsigned long   volatile AD1CON3INV       absolute 0xBF80902C;
sfr atomic unsigned long            AD1CHS           absolute 0xBF809040;
    const register unsigned short int CH0SA0 = 16;
    sbit  CH0SA0_bit at AD1CHS.B16;
    const register unsigned short int CH0SA1 = 17;
    sbit  CH0SA1_bit at AD1CHS.B17;
    const register unsigned short int CH0SA2 = 18;
    sbit  CH0SA2_bit at AD1CHS.B18;
    const register unsigned short int CH0SA3 = 19;
    sbit  CH0SA3_bit at AD1CHS.B19;
    const register unsigned short int CH0SA4 = 20;
    sbit  CH0SA4_bit at AD1CHS.B20;
    const register unsigned short int CH0SA5 = 21;
    sbit  CH0SA5_bit at AD1CHS.B21;
    const register unsigned short int CH0NA = 23;
    sbit  CH0NA_bit at AD1CHS.B23;
    const register unsigned short int CH0SB0 = 24;
    sbit  CH0SB0_bit at AD1CHS.B24;
    const register unsigned short int CH0SB1 = 25;
    sbit  CH0SB1_bit at AD1CHS.B25;
    const register unsigned short int CH0SB2 = 26;
    sbit  CH0SB2_bit at AD1CHS.B26;
    const register unsigned short int CH0SB3 = 27;
    sbit  CH0SB3_bit at AD1CHS.B27;
    const register unsigned short int CH0SB4 = 28;
    sbit  CH0SB4_bit at AD1CHS.B28;
    const register unsigned short int CH0SB5 = 29;
    sbit  CH0SB5_bit at AD1CHS.B29;
    const register unsigned short int CH0NB = 31;
    sbit  CH0NB_bit at AD1CHS.B31;
    sbit  CH0SA0_AD1CHS_bit at AD1CHS.B16;
    sbit  CH0SA1_AD1CHS_bit at AD1CHS.B17;
    sbit  CH0SA2_AD1CHS_bit at AD1CHS.B18;
    sbit  CH0SA3_AD1CHS_bit at AD1CHS.B19;
    sbit  CH0SA4_AD1CHS_bit at AD1CHS.B20;
    sbit  CH0SB0_AD1CHS_bit at AD1CHS.B24;
    sbit  CH0SB1_AD1CHS_bit at AD1CHS.B25;
    sbit  CH0SB2_AD1CHS_bit at AD1CHS.B26;
    sbit  CH0SB3_AD1CHS_bit at AD1CHS.B27;
    sbit  CH0SB4_AD1CHS_bit at AD1CHS.B28;
sfr unsigned long   volatile AD1CHSCLR        absolute 0xBF809044;
sfr unsigned long   volatile AD1CHSSET        absolute 0xBF809048;
sfr unsigned long   volatile AD1CHSINV        absolute 0xBF80904C;
sfr atomic unsigned long            AD1CSSL          absolute 0xBF809050;
    const register unsigned short int CSSL0 = 0;
    sbit  CSSL0_bit at AD1CSSL.B0;
    const register unsigned short int CSSL1 = 1;
    sbit  CSSL1_bit at AD1CSSL.B1;
    const register unsigned short int CSSL2 = 2;
    sbit  CSSL2_bit at AD1CSSL.B2;
    const register unsigned short int CSSL3 = 3;
    sbit  CSSL3_bit at AD1CSSL.B3;
    const register unsigned short int CSSL4 = 4;
    sbit  CSSL4_bit at AD1CSSL.B4;
    const register unsigned short int CSSL5 = 5;
    sbit  CSSL5_bit at AD1CSSL.B5;
    const register unsigned short int CSSL6 = 6;
    sbit  CSSL6_bit at AD1CSSL.B6;
    const register unsigned short int CSSL7 = 7;
    sbit  CSSL7_bit at AD1CSSL.B7;
    const register unsigned short int CSSL8 = 8;
    sbit  CSSL8_bit at AD1CSSL.B8;
    const register unsigned short int CSSL9 = 9;
    sbit  CSSL9_bit at AD1CSSL.B9;
    const register unsigned short int CSSL10 = 10;
    sbit  CSSL10_bit at AD1CSSL.B10;
    const register unsigned short int CSSL11 = 11;
    sbit  CSSL11_bit at AD1CSSL.B11;
    const register unsigned short int CSSL12 = 12;
    sbit  CSSL12_bit at AD1CSSL.B12;
    const register unsigned short int CSSL13 = 13;
    sbit  CSSL13_bit at AD1CSSL.B13;
    const register unsigned short int CSSL14 = 14;
    sbit  CSSL14_bit at AD1CSSL.B14;
    const register unsigned short int CSSL15 = 15;
    sbit  CSSL15_bit at AD1CSSL.B15;
    const register unsigned short int CSSL16 = 16;
    sbit  CSSL16_bit at AD1CSSL.B16;
    const register unsigned short int CSSL17 = 17;
    sbit  CSSL17_bit at AD1CSSL.B17;
    const register unsigned short int CSSL18 = 18;
    sbit  CSSL18_bit at AD1CSSL.B18;
    const register unsigned short int CSSL19 = 19;
    sbit  CSSL19_bit at AD1CSSL.B19;
    const register unsigned short int CSSL20 = 20;
    sbit  CSSL20_bit at AD1CSSL.B20;
    const register unsigned short int CSSL21 = 21;
    sbit  CSSL21_bit at AD1CSSL.B21;
    const register unsigned short int CSSL22 = 22;
    sbit  CSSL22_bit at AD1CSSL.B22;
    const register unsigned short int CSSL23 = 23;
    sbit  CSSL23_bit at AD1CSSL.B23;
    const register unsigned short int CSSL24 = 24;
    sbit  CSSL24_bit at AD1CSSL.B24;
    const register unsigned short int CSSL25 = 25;
    sbit  CSSL25_bit at AD1CSSL.B25;
    const register unsigned short int CSSL26 = 26;
    sbit  CSSL26_bit at AD1CSSL.B26;
    const register unsigned short int CSSL27 = 27;
    sbit  CSSL27_bit at AD1CSSL.B27;
    sbit  CSSL0_AD1CSSL_bit at AD1CSSL.B0;
    sbit  CSSL1_AD1CSSL_bit at AD1CSSL.B1;
    sbit  CSSL2_AD1CSSL_bit at AD1CSSL.B2;
    sbit  CSSL3_AD1CSSL_bit at AD1CSSL.B3;
    sbit  CSSL4_AD1CSSL_bit at AD1CSSL.B4;
    sbit  CSSL5_AD1CSSL_bit at AD1CSSL.B5;
    sbit  CSSL6_AD1CSSL_bit at AD1CSSL.B6;
    sbit  CSSL7_AD1CSSL_bit at AD1CSSL.B7;
    sbit  CSSL8_AD1CSSL_bit at AD1CSSL.B8;
    sbit  CSSL9_AD1CSSL_bit at AD1CSSL.B9;
    sbit  CSSL10_AD1CSSL_bit at AD1CSSL.B10;
    sbit  CSSL11_AD1CSSL_bit at AD1CSSL.B11;
    sbit  CSSL12_AD1CSSL_bit at AD1CSSL.B12;
    sbit  CSSL13_AD1CSSL_bit at AD1CSSL.B13;
    sbit  CSSL14_AD1CSSL_bit at AD1CSSL.B14;
    sbit  CSSL15_AD1CSSL_bit at AD1CSSL.B15;
    sbit  CSSL16_AD1CSSL_bit at AD1CSSL.B16;
    sbit  CSSL17_AD1CSSL_bit at AD1CSSL.B17;
    sbit  CSSL18_AD1CSSL_bit at AD1CSSL.B18;
    sbit  CSSL19_AD1CSSL_bit at AD1CSSL.B19;
    sbit  CSSL20_AD1CSSL_bit at AD1CSSL.B20;
    sbit  CSSL21_AD1CSSL_bit at AD1CSSL.B21;
    sbit  CSSL22_AD1CSSL_bit at AD1CSSL.B22;
    sbit  CSSL23_AD1CSSL_bit at AD1CSSL.B23;
    sbit  CSSL24_AD1CSSL_bit at AD1CSSL.B24;
    sbit  CSSL25_AD1CSSL_bit at AD1CSSL.B25;
    sbit  CSSL26_AD1CSSL_bit at AD1CSSL.B26;
    sbit  CSSL27_AD1CSSL_bit at AD1CSSL.B27;
    const register unsigned short int CSSL28 = 28;
    sbit  CSSL28_bit at AD1CSSL.B28;
    const register unsigned short int CSSL29 = 29;
    sbit  CSSL29_bit at AD1CSSL.B29;
    const register unsigned short int CSSL30 = 30;
    sbit  CSSL30_bit at AD1CSSL.B30;
    const register unsigned short int CSSL31 = 31;
    sbit  CSSL31_bit at AD1CSSL.B31;
sfr unsigned long   volatile AD1CSSLCLR       absolute 0xBF809054;
sfr unsigned long   volatile AD1CSSLSET       absolute 0xBF809058;
sfr unsigned long   volatile AD1CSSLINV       absolute 0xBF80905C;
sfr atomic unsigned long   volatile AD1CSSL2         absolute 0xBF809060;
sfr unsigned long   volatile AD1CSSL2CLR      absolute 0xBF809064;
sfr unsigned long   volatile AD1CSSL2SET      absolute 0xBF809068;
sfr unsigned long   volatile AD1CSSL2INV      absolute 0xBF80906C;
sfr unsigned long   volatile ADC1BUF0         absolute 0xBF809070;
sfr unsigned long   volatile ADC1BUF1         absolute 0xBF809080;
sfr unsigned long   volatile ADC1BUF2         absolute 0xBF809090;
sfr unsigned long   volatile ADC1BUF3         absolute 0xBF8090A0;
sfr unsigned long   volatile ADC1BUF4         absolute 0xBF8090B0;
sfr unsigned long   volatile ADC1BUF5         absolute 0xBF8090C0;
sfr unsigned long   volatile ADC1BUF6         absolute 0xBF8090D0;
sfr unsigned long   volatile ADC1BUF7         absolute 0xBF8090E0;
sfr unsigned long   volatile ADC1BUF8         absolute 0xBF8090F0;
sfr unsigned long   volatile ADC1BUF9         absolute 0xBF809100;
sfr unsigned long   volatile ADC1BUFA         absolute 0xBF809110;
sfr unsigned long   volatile ADC1BUFB         absolute 0xBF809120;
sfr unsigned long   volatile ADC1BUFC         absolute 0xBF809130;
sfr unsigned long   volatile ADC1BUFD         absolute 0xBF809140;
sfr unsigned long   volatile ADC1BUFE         absolute 0xBF809150;
sfr unsigned long   volatile ADC1BUFF         absolute 0xBF809160;
sfr atomic unsigned long            CVRCON           absolute 0xBF809800;
    const register unsigned short int CVR0 = 0;
    sbit  CVR0_bit at CVRCON.B0;
    const register unsigned short int CVR1 = 1;
    sbit  CVR1_bit at CVRCON.B1;
    const register unsigned short int CVR2 = 2;
    sbit  CVR2_bit at CVRCON.B2;
    const register unsigned short int CVR3 = 3;
    sbit  CVR3_bit at CVRCON.B3;
    const register unsigned short int CVRSS = 4;
    sbit  CVRSS_bit at CVRCON.B4;
    const register unsigned short int CVRR = 5;
    sbit  CVRR_bit at CVRCON.B5;
    const register unsigned short int CVROE = 6;
    sbit  CVROE_bit at CVRCON.B6;
    sbit  ON_CVRCON_bit at CVRCON.B15;
    sbit  CVR0_CVRCON_bit at CVRCON.B0;
    sbit  CVR1_CVRCON_bit at CVRCON.B1;
    sbit  CVR2_CVRCON_bit at CVRCON.B2;
    sbit  CVR3_CVRCON_bit at CVRCON.B3;
sfr unsigned long   volatile CVRCONCLR        absolute 0xBF809804;
sfr unsigned long   volatile CVRCONSET        absolute 0xBF809808;
sfr unsigned long   volatile CVRCONINV        absolute 0xBF80980C;
sfr atomic unsigned long   volatile CM1CON           absolute 0xBF80A000;
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
    const register unsigned short int CPOL = 13;
    sbit  CPOL_bit at CM1CON.B13;
    const register unsigned short int COE = 14;
    sbit  COE_bit at CM1CON.B14;
    sbit  ON_CM1CON_bit at CM1CON.B15;
    sbit  CCH0_CM1CON_bit at CM1CON.B0;
    sbit  CCH1_CM1CON_bit at CM1CON.B1;
    sbit  EVPOL0_CM1CON_bit at CM1CON.B6;
    sbit  EVPOL1_CM1CON_bit at CM1CON.B7;
sfr unsigned long   volatile CM1CONCLR        absolute 0xBF80A004;
sfr unsigned long   volatile CM1CONSET        absolute 0xBF80A008;
sfr unsigned long   volatile CM1CONINV        absolute 0xBF80A00C;
sfr atomic unsigned long   volatile CM2CON           absolute 0xBF80A010;
    sbit  CCH0_CM2CON_bit at CM2CON.B0;
    sbit  CCH1_CM2CON_bit at CM2CON.B1;
    sbit  CREF_CM2CON_bit at CM2CON.B4;
    sbit  EVPOL0_CM2CON_bit at CM2CON.B6;
    sbit  EVPOL1_CM2CON_bit at CM2CON.B7;
    sbit  COUT_CM2CON_bit at CM2CON.B8;
    sbit  CPOL_CM2CON_bit at CM2CON.B13;
    sbit  COE_CM2CON_bit at CM2CON.B14;
    sbit  ON_CM2CON_bit at CM2CON.B15;
sfr unsigned long   volatile CM2CONCLR        absolute 0xBF80A014;
sfr unsigned long   volatile CM2CONSET        absolute 0xBF80A018;
sfr unsigned long   volatile CM2CONINV        absolute 0xBF80A01C;
sfr atomic unsigned long   volatile CM3CON           absolute 0xBF80A020;
    sbit  CCH0_CM3CON_bit at CM3CON.B0;
    sbit  CCH1_CM3CON_bit at CM3CON.B1;
    sbit  CREF_CM3CON_bit at CM3CON.B4;
    sbit  EVPOL0_CM3CON_bit at CM3CON.B6;
    sbit  EVPOL1_CM3CON_bit at CM3CON.B7;
    sbit  COUT_CM3CON_bit at CM3CON.B8;
    sbit  CPOL_CM3CON_bit at CM3CON.B13;
    sbit  COE_CM3CON_bit at CM3CON.B14;
    sbit  ON_CM3CON_bit at CM3CON.B15;
sfr unsigned long   volatile CM3CONCLR        absolute 0xBF80A024;
sfr unsigned long   volatile CM3CONSET        absolute 0xBF80A028;
sfr unsigned long   volatile CM3CONINV        absolute 0xBF80A02C;
sfr atomic unsigned long   volatile CMSTAT           absolute 0xBF80A060;
    const register unsigned short int C1OUT = 0;
    sbit  C1OUT_bit at CMSTAT.B0;
    const register unsigned short int C2OUT = 1;
    sbit  C2OUT_bit at CMSTAT.B1;
    const register unsigned short int C3OUT = 2;
    sbit  C3OUT_bit at CMSTAT.B2;
    sbit  SIDL_CMSTAT_bit at CMSTAT.B13;
sfr unsigned long   volatile CMSTATCLR        absolute 0xBF80A064;
sfr unsigned long   volatile CMSTATSET        absolute 0xBF80A068;
sfr unsigned long   volatile CMSTATINV        absolute 0xBF80A06C;
sfr atomic unsigned long   volatile CTMUCON          absolute 0xBF80A200;
    const register unsigned short int IRNG0 = 0;
    sbit  IRNG0_bit at CTMUCON.B0;
    const register unsigned short int IRNG1 = 1;
    sbit  IRNG1_bit at CTMUCON.B1;
    const register unsigned short int ITRIM0 = 2;
    sbit  ITRIM0_bit at CTMUCON.B2;
    const register unsigned short int ITRIM1 = 3;
    sbit  ITRIM1_bit at CTMUCON.B3;
    const register unsigned short int ITRIM2 = 4;
    sbit  ITRIM2_bit at CTMUCON.B4;
    const register unsigned short int ITRIM3 = 5;
    sbit  ITRIM3_bit at CTMUCON.B5;
    const register unsigned short int ITRIM4 = 6;
    sbit  ITRIM4_bit at CTMUCON.B6;
    const register unsigned short int ITRIM5 = 7;
    sbit  ITRIM5_bit at CTMUCON.B7;
    const register unsigned short int CTTRIG = 8;
    sbit  CTTRIG_bit at CTMUCON.B8;
    const register unsigned short int IDISSEN = 9;
    sbit  IDISSEN_bit at CTMUCON.B9;
    const register unsigned short int EDGSEQEN = 10;
    sbit  EDGSEQEN_bit at CTMUCON.B10;
    const register unsigned short int EDGEN = 11;
    sbit  EDGEN_bit at CTMUCON.B11;
    const register unsigned short int TGEN = 12;
    sbit  TGEN_bit at CTMUCON.B12;
    const register unsigned short int CTMUSIDL = 13;
    sbit  CTMUSIDL_bit at CTMUCON.B13;
    sbit  ON_CTMUCON_bit at CTMUCON.B15;
    const register unsigned short int EDG2SEL0 = 18;
    sbit  EDG2SEL0_bit at CTMUCON.B18;
    const register unsigned short int EDG2SEL1 = 19;
    sbit  EDG2SEL1_bit at CTMUCON.B19;
    const register unsigned short int EDG2SEL2 = 20;
    sbit  EDG2SEL2_bit at CTMUCON.B20;
    const register unsigned short int EDG2SEL3 = 21;
    sbit  EDG2SEL3_bit at CTMUCON.B21;
    const register unsigned short int EDG2POL = 22;
    sbit  EDG2POL_bit at CTMUCON.B22;
    const register unsigned short int EDG2MOD = 23;
    sbit  EDG2MOD_bit at CTMUCON.B23;
    const register unsigned short int EDG1STAT = 24;
    sbit  EDG1STAT_bit at CTMUCON.B24;
    const register unsigned short int EDG2STAT = 25;
    sbit  EDG2STAT_bit at CTMUCON.B25;
    const register unsigned short int EDG1SEL0 = 26;
    sbit  EDG1SEL0_bit at CTMUCON.B26;
    const register unsigned short int EDG1SEL1 = 27;
    sbit  EDG1SEL1_bit at CTMUCON.B27;
    const register unsigned short int EDG1SEL2 = 28;
    sbit  EDG1SEL2_bit at CTMUCON.B28;
    const register unsigned short int EDG1SEL3 = 29;
    sbit  EDG1SEL3_bit at CTMUCON.B29;
    const register unsigned short int EDG1POL = 30;
    sbit  EDG1POL_bit at CTMUCON.B30;
    const register unsigned short int EDG1MOD = 31;
    sbit  EDG1MOD_bit at CTMUCON.B31;
sfr unsigned long   volatile CTMUCONCLR       absolute 0xBF80A204;
sfr unsigned long   volatile CTMUCONSET       absolute 0xBF80A208;
sfr unsigned long   volatile CTMUCONINV       absolute 0xBF80A20C;
sfr atomic unsigned long   volatile OSCCON           absolute 0xBF80F000;
    const register unsigned short int OSWEN = 0;
    sbit  OSWEN_bit at OSCCON.B0;
    const register unsigned short int SOSCEN = 1;
    sbit  SOSCEN_bit at OSCCON.B1;
    const register unsigned short int UFRCEN = 2;
    sbit  UFRCEN_bit at OSCCON.B2;
    const register unsigned short int CF = 3;
    sbit  CF_bit at OSCCON.B3;
    const register unsigned short int SLPEN = 4;
    sbit  SLPEN_bit at OSCCON.B4;
    const register unsigned short int SLOCK = 5;
    sbit  SLOCK_bit at OSCCON.B5;
    const register unsigned short int ULOCK = 6;
    sbit  ULOCK_bit at OSCCON.B6;
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
    const register unsigned short int PLLMULT0 = 16;
    sbit  PLLMULT0_bit at OSCCON.B16;
    const register unsigned short int PLLMULT1 = 17;
    sbit  PLLMULT1_bit at OSCCON.B17;
    const register unsigned short int PLLMULT2 = 18;
    sbit  PLLMULT2_bit at OSCCON.B18;
    const register unsigned short int PBDIV0 = 19;
    sbit  PBDIV0_bit at OSCCON.B19;
    const register unsigned short int PBDIV1 = 20;
    sbit  PBDIV1_bit at OSCCON.B20;
    const register unsigned short int PBDIVRDY = 21;
    sbit  PBDIVRDY_bit at OSCCON.B21;
    const register unsigned short int SOSCRDY = 22;
    sbit  SOSCRDY_bit at OSCCON.B22;
    const register unsigned short int FRCDIV0 = 24;
    sbit  FRCDIV0_bit at OSCCON.B24;
    const register unsigned short int FRCDIV1 = 25;
    sbit  FRCDIV1_bit at OSCCON.B25;
    const register unsigned short int FRCDIV2 = 26;
    sbit  FRCDIV2_bit at OSCCON.B26;
    const register unsigned short int PLLODIV0 = 27;
    sbit  PLLODIV0_bit at OSCCON.B27;
    const register unsigned short int PLLODIV1 = 28;
    sbit  PLLODIV1_bit at OSCCON.B28;
    const register unsigned short int PLLODIV2 = 29;
    sbit  PLLODIV2_bit at OSCCON.B29;
    sbit  NOSC0_OSCCON_bit at OSCCON.B8;
    sbit  NOSC1_OSCCON_bit at OSCCON.B9;
    sbit  NOSC2_OSCCON_bit at OSCCON.B10;
    sbit  COSC0_OSCCON_bit at OSCCON.B12;
    sbit  COSC1_OSCCON_bit at OSCCON.B13;
    sbit  COSC2_OSCCON_bit at OSCCON.B14;
    sbit  PLLMULT0_OSCCON_bit at OSCCON.B16;
    sbit  PLLMULT1_OSCCON_bit at OSCCON.B17;
    sbit  PLLMULT2_OSCCON_bit at OSCCON.B18;
    sbit  PBDIV0_OSCCON_bit at OSCCON.B19;
    sbit  PBDIV1_OSCCON_bit at OSCCON.B20;
    sbit  FRCDIV0_OSCCON_bit at OSCCON.B24;
    sbit  FRCDIV1_OSCCON_bit at OSCCON.B25;
    sbit  FRCDIV2_OSCCON_bit at OSCCON.B26;
    sbit  PLLODIV0_OSCCON_bit at OSCCON.B27;
    sbit  PLLODIV1_OSCCON_bit at OSCCON.B28;
    sbit  PLLODIV2_OSCCON_bit at OSCCON.B29;
sfr unsigned long   volatile OSCCONCLR        absolute 0xBF80F004;
sfr unsigned long   volatile OSCCONSET        absolute 0xBF80F008;
sfr unsigned long   volatile OSCCONINV        absolute 0xBF80F00C;
sfr atomic unsigned long   volatile OSCTUN           absolute 0xBF80F010;
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
    sbit  TUN0_OSCTUN_bit at OSCTUN.B0;
    sbit  TUN1_OSCTUN_bit at OSCTUN.B1;
    sbit  TUN2_OSCTUN_bit at OSCTUN.B2;
    sbit  TUN3_OSCTUN_bit at OSCTUN.B3;
    sbit  TUN4_OSCTUN_bit at OSCTUN.B4;
    sbit  TUN5_OSCTUN_bit at OSCTUN.B5;
sfr unsigned long   volatile OSCTUNCLR        absolute 0xBF80F014;
sfr unsigned long   volatile OSCTUNSET        absolute 0xBF80F018;
sfr unsigned long   volatile OSCTUNINV        absolute 0xBF80F01C;
sfr atomic unsigned long            REFOCON          absolute 0xBF80F020;
    const register unsigned short int ROSEL0 = 0;
    sbit  ROSEL0_bit at REFOCON.B0;
    const register unsigned short int ROSEL1 = 1;
    sbit  ROSEL1_bit at REFOCON.B1;
    const register unsigned short int ROSEL2 = 2;
    sbit  ROSEL2_bit at REFOCON.B2;
    const register unsigned short int ROSEL3 = 3;
    sbit  ROSEL3_bit at REFOCON.B3;
    const register unsigned short int ACTIVE = 8;
    sbit  ACTIVE_bit at REFOCON.B8;
    const register unsigned short int DIVSWEN = 9;
    sbit  DIVSWEN_bit at REFOCON.B9;
    const register unsigned short int RSLP = 11;
    sbit  RSLP_bit at REFOCON.B11;
    const register unsigned short int OE = 12;
    sbit  OE_bit at REFOCON.B12;
    sbit  SIDL_REFOCON_bit at REFOCON.B13;
    sbit  ON_REFOCON_bit at REFOCON.B15;
    const register unsigned short int RODIV0 = 16;
    sbit  RODIV0_bit at REFOCON.B16;
    const register unsigned short int RODIV1 = 17;
    sbit  RODIV1_bit at REFOCON.B17;
    const register unsigned short int RODIV2 = 18;
    sbit  RODIV2_bit at REFOCON.B18;
    const register unsigned short int RODIV3 = 19;
    sbit  RODIV3_bit at REFOCON.B19;
    const register unsigned short int RODIV4 = 20;
    sbit  RODIV4_bit at REFOCON.B20;
    const register unsigned short int RODIV5 = 21;
    sbit  RODIV5_bit at REFOCON.B21;
    const register unsigned short int RODIV6 = 22;
    sbit  RODIV6_bit at REFOCON.B22;
    const register unsigned short int RODIV7 = 23;
    sbit  RODIV7_bit at REFOCON.B23;
    const register unsigned short int RODIV8 = 24;
    sbit  RODIV8_bit at REFOCON.B24;
    const register unsigned short int RODIV9 = 25;
    sbit  RODIV9_bit at REFOCON.B25;
    const register unsigned short int RODIV10 = 26;
    sbit  RODIV10_bit at REFOCON.B26;
    const register unsigned short int RODIV11 = 27;
    sbit  RODIV11_bit at REFOCON.B27;
    const register unsigned short int RODIV12 = 28;
    sbit  RODIV12_bit at REFOCON.B28;
    const register unsigned short int RODIV13 = 29;
    sbit  RODIV13_bit at REFOCON.B29;
    const register unsigned short int RODIV14 = 30;
    sbit  RODIV14_bit at REFOCON.B30;
sfr unsigned long   volatile REFOCONCLR       absolute 0xBF80F024;
sfr unsigned long   volatile REFOCONSET       absolute 0xBF80F028;
sfr unsigned long   volatile REFOCONINV       absolute 0xBF80F02C;
sfr atomic unsigned long   volatile REFOTRIM         absolute 0xBF80F030;
    const register unsigned short int ROTRIM0 = 23;
    sbit  ROTRIM0_bit at REFOTRIM.B23;
    const register unsigned short int ROTRIM1 = 24;
    sbit  ROTRIM1_bit at REFOTRIM.B24;
    const register unsigned short int ROTRIM2 = 25;
    sbit  ROTRIM2_bit at REFOTRIM.B25;
    const register unsigned short int ROTRIM3 = 26;
    sbit  ROTRIM3_bit at REFOTRIM.B26;
    const register unsigned short int ROTRIM4 = 27;
    sbit  ROTRIM4_bit at REFOTRIM.B27;
    const register unsigned short int ROTRIM5 = 28;
    sbit  ROTRIM5_bit at REFOTRIM.B28;
    const register unsigned short int ROTRIM6 = 29;
    sbit  ROTRIM6_bit at REFOTRIM.B29;
    const register unsigned short int ROTRIM7 = 30;
    sbit  ROTRIM7_bit at REFOTRIM.B30;
    const register unsigned short int ROTRIM8 = 31;
    sbit  ROTRIM8_bit at REFOTRIM.B31;
sfr unsigned long   volatile REFOTRIMCLR      absolute 0xBF80F034;
sfr unsigned long   volatile REFOTRIMSET      absolute 0xBF80F038;
sfr unsigned long   volatile REFOTRIMINV      absolute 0xBF80F03C;
sfr unsigned long   volatile CFGCON           absolute 0xBF80F200;
    const register unsigned short int TDOEN = 0;
    sbit  TDOEN_bit at CFGCON.B0;
    const register unsigned short int JTAGEN = 3;
    sbit  JTAGEN_bit at CFGCON.B3;
    const register unsigned short int PMDLOCK = 12;
    sbit  PMDLOCK_bit at CFGCON.B12;
    const register unsigned short int IOLOCK = 13;
    sbit  IOLOCK_bit at CFGCON.B13;
sfr unsigned long   volatile DDPCON           absolute 0xBF80F200;
    sbit  TDOEN_DDPCON_bit at DDPCON.B0;
    sbit  JTAGEN_DDPCON_bit at DDPCON.B3;
    sbit  PMDLOCK_DDPCON_bit at DDPCON.B12;
    sbit  IOLOCK_DDPCON_bit at DDPCON.B13;
sfr unsigned long   volatile DEVID            absolute 0xBF80F220;
    const register unsigned short int DEVID0 = 0;
    sbit  DEVID0_bit at DEVID.B0;
    const register unsigned short int DEVID1 = 1;
    sbit  DEVID1_bit at DEVID.B1;
    const register unsigned short int DEVID2 = 2;
    sbit  DEVID2_bit at DEVID.B2;
    const register unsigned short int DEVID3 = 3;
    sbit  DEVID3_bit at DEVID.B3;
    const register unsigned short int DEVID4 = 4;
    sbit  DEVID4_bit at DEVID.B4;
    const register unsigned short int DEVID5 = 5;
    sbit  DEVID5_bit at DEVID.B5;
    const register unsigned short int DEVID6 = 6;
    sbit  DEVID6_bit at DEVID.B6;
    const register unsigned short int DEVID7 = 7;
    sbit  DEVID7_bit at DEVID.B7;
    const register unsigned short int DEVID8 = 8;
    sbit  DEVID8_bit at DEVID.B8;
    const register unsigned short int DEVID9 = 9;
    sbit  DEVID9_bit at DEVID.B9;
    const register unsigned short int DEVID10 = 10;
    sbit  DEVID10_bit at DEVID.B10;
    const register unsigned short int DEVID11 = 11;
    sbit  DEVID11_bit at DEVID.B11;
    const register unsigned short int DEVID12 = 12;
    sbit  DEVID12_bit at DEVID.B12;
    const register unsigned short int DEVID13 = 13;
    sbit  DEVID13_bit at DEVID.B13;
    const register unsigned short int DEVID14 = 14;
    sbit  DEVID14_bit at DEVID.B14;
    const register unsigned short int DEVID15 = 15;
    sbit  DEVID15_bit at DEVID.B15;
    const register unsigned short int DEVID16 = 16;
    sbit  DEVID16_bit at DEVID.B16;
    const register unsigned short int DEVID17 = 17;
    sbit  DEVID17_bit at DEVID.B17;
    const register unsigned short int DEVID18 = 18;
    sbit  DEVID18_bit at DEVID.B18;
    const register unsigned short int DEVID19 = 19;
    sbit  DEVID19_bit at DEVID.B19;
    const register unsigned short int DEVID20 = 20;
    sbit  DEVID20_bit at DEVID.B20;
    const register unsigned short int DEVID21 = 21;
    sbit  DEVID21_bit at DEVID.B21;
    const register unsigned short int DEVID22 = 22;
    sbit  DEVID22_bit at DEVID.B22;
    const register unsigned short int DEVID23 = 23;
    sbit  DEVID23_bit at DEVID.B23;
    const register unsigned short int DEVID24 = 24;
    sbit  DEVID24_bit at DEVID.B24;
    const register unsigned short int DEVID25 = 25;
    sbit  DEVID25_bit at DEVID.B25;
    const register unsigned short int DEVID26 = 26;
    sbit  DEVID26_bit at DEVID.B26;
    const register unsigned short int DEVID27 = 27;
    sbit  DEVID27_bit at DEVID.B27;
    const register unsigned short int VER0 = 28;
    sbit  VER0_bit at DEVID.B28;
    const register unsigned short int VER1 = 29;
    sbit  VER1_bit at DEVID.B29;
    const register unsigned short int VER2 = 30;
    sbit  VER2_bit at DEVID.B30;
    const register unsigned short int VER3 = 31;
    sbit  VER3_bit at DEVID.B31;
sfr atomic unsigned long   volatile SYSKEY           absolute 0xBF80F230;
sfr unsigned long   volatile SYSKEYCLR        absolute 0xBF80F234;
sfr unsigned long   volatile SYSKEYSET        absolute 0xBF80F238;
sfr unsigned long   volatile SYSKEYINV        absolute 0xBF80F23C;
sfr atomic unsigned long            PMD1             absolute 0xBF80F240;
    const register unsigned short int AD1MD = 0;
    sbit  AD1MD_bit at PMD1.B0;
    const register unsigned short int CTMUMD = 8;
    sbit  CTMUMD_bit at PMD1.B8;
    const register unsigned short int CVRMD = 12;
    sbit  CVRMD_bit at PMD1.B12;
sfr unsigned long   volatile PMD1CLR          absolute 0xBF80F244;
sfr unsigned long   volatile PMD1SET          absolute 0xBF80F248;
sfr unsigned long   volatile PMD1INV          absolute 0xBF80F24C;
sfr atomic unsigned long            PMD2             absolute 0xBF80F250;
    const register unsigned short int CMP1MD = 0;
    sbit  CMP1MD_bit at PMD2.B0;
    const register unsigned short int CMP2MD = 1;
    sbit  CMP2MD_bit at PMD2.B1;
    const register unsigned short int CMP3MD = 2;
    sbit  CMP3MD_bit at PMD2.B2;
sfr unsigned long   volatile PMD2CLR          absolute 0xBF80F254;
sfr unsigned long   volatile PMD2SET          absolute 0xBF80F258;
sfr unsigned long   volatile PMD2INV          absolute 0xBF80F25C;
sfr atomic unsigned long            PMD3             absolute 0xBF80F260;
    const register unsigned short int IC1MD = 0;
    sbit  IC1MD_bit at PMD3.B0;
    const register unsigned short int IC2MD = 1;
    sbit  IC2MD_bit at PMD3.B1;
    const register unsigned short int IC3MD = 2;
    sbit  IC3MD_bit at PMD3.B2;
    const register unsigned short int IC4MD = 3;
    sbit  IC4MD_bit at PMD3.B3;
    const register unsigned short int IC5MD = 4;
    sbit  IC5MD_bit at PMD3.B4;
    const register unsigned short int OC1MD = 16;
    sbit  OC1MD_bit at PMD3.B16;
    const register unsigned short int OC2MD = 17;
    sbit  OC2MD_bit at PMD3.B17;
    const register unsigned short int OC3MD = 18;
    sbit  OC3MD_bit at PMD3.B18;
    const register unsigned short int OC4MD = 19;
    sbit  OC4MD_bit at PMD3.B19;
    const register unsigned short int OC5MD = 20;
    sbit  OC5MD_bit at PMD3.B20;
sfr unsigned long   volatile PMD3CLR          absolute 0xBF80F264;
sfr unsigned long   volatile PMD3SET          absolute 0xBF80F268;
sfr unsigned long   volatile PMD3INV          absolute 0xBF80F26C;
sfr atomic unsigned long   volatile PMD4             absolute 0xBF80F270;
    const register unsigned short int T1MD = 0;
    sbit  T1MD_bit at PMD4.B0;
    const register unsigned short int T2MD = 1;
    sbit  T2MD_bit at PMD4.B1;
    const register unsigned short int T3MD = 2;
    sbit  T3MD_bit at PMD4.B2;
    const register unsigned short int T4MD = 3;
    sbit  T4MD_bit at PMD4.B3;
    const register unsigned short int T5MD = 4;
    sbit  T5MD_bit at PMD4.B4;
sfr unsigned long   volatile PMD4CLR          absolute 0xBF80F274;
sfr unsigned long   volatile PMD4SET          absolute 0xBF80F278;
sfr unsigned long   volatile PMD4INV          absolute 0xBF80F27C;
sfr atomic unsigned long   volatile PMD5             absolute 0xBF80F280;
    const register unsigned short int U1MD = 0;
    sbit  U1MD_bit at PMD5.B0;
    const register unsigned short int U2MD = 1;
    sbit  U2MD_bit at PMD5.B1;
    const register unsigned short int U3MD = 2;
    sbit  U3MD_bit at PMD5.B2;
    const register unsigned short int U4MD = 3;
    sbit  U4MD_bit at PMD5.B3;
    const register unsigned short int SPI1MD = 8;
    sbit  SPI1MD_bit at PMD5.B8;
    const register unsigned short int SPI2MD = 9;
    sbit  SPI2MD_bit at PMD5.B9;
    const register unsigned short int SPI3MD = 10;
    sbit  SPI3MD_bit at PMD5.B10;
    const register unsigned short int I2C1MD = 16;
    sbit  I2C1MD_bit at PMD5.B16;
    const register unsigned short int I2C2MD = 17;
    sbit  I2C2MD_bit at PMD5.B17;
    const register unsigned short int USB1MD = 24;
    sbit  USB1MD_bit at PMD5.B24;
    const register unsigned short int CAN1MD = 28;
    sbit  CAN1MD_bit at PMD5.B28;
    const register unsigned short int USBMD = 24;
    sbit  USBMD_bit at PMD5.B24;
sfr unsigned long   volatile PMD5CLR          absolute 0xBF80F284;
sfr unsigned long   volatile PMD5SET          absolute 0xBF80F288;
sfr unsigned long   volatile PMD5INV          absolute 0xBF80F28C;
sfr atomic unsigned long   volatile PMD6             absolute 0xBF80F290;
    const register unsigned short int RTCCMD = 0;
    sbit  RTCCMD_bit at PMD6.B0;
    const register unsigned short int REFOMD = 1;
    sbit  REFOMD_bit at PMD6.B1;
    const register unsigned short int PMPMD = 16;
    sbit  PMPMD_bit at PMD6.B16;
sfr unsigned long   volatile PMD6CLR          absolute 0xBF80F294;
sfr unsigned long   volatile PMD6SET          absolute 0xBF80F298;
sfr unsigned long   volatile PMD6INV          absolute 0xBF80F29C;
sfr atomic unsigned long   volatile NVMCON           absolute 0xBF80F400;
    const register unsigned short int NVMOP0 = 0;
    sbit  NVMOP0_bit at NVMCON.B0;
    const register unsigned short int NVMOP1 = 1;
    sbit  NVMOP1_bit at NVMCON.B1;
    const register unsigned short int NVMOP2 = 2;
    sbit  NVMOP2_bit at NVMCON.B2;
    const register unsigned short int NVMOP3 = 3;
    sbit  NVMOP3_bit at NVMCON.B3;
    const register unsigned short int LVDSTAT = 11;
    sbit  LVDSTAT_bit at NVMCON.B11;
    const register unsigned short int LVDERR = 12;
    sbit  LVDERR_bit at NVMCON.B12;
    const register unsigned short int WRERR = 13;
    sbit  WRERR_bit at NVMCON.B13;
    const register unsigned short int WREN = 14;
    sbit  WREN_bit at NVMCON.B14;
    const register unsigned short int WR = 15;
    sbit  WR_bit at NVMCON.B15;
    sbit  NVMOP0_NVMCON_bit at NVMCON.B0;
    sbit  NVMOP1_NVMCON_bit at NVMCON.B1;
    sbit  NVMOP2_NVMCON_bit at NVMCON.B2;
    sbit  NVMOP3_NVMCON_bit at NVMCON.B3;
    const register unsigned short int PROGOP0 = 0;
    sbit  PROGOP0_bit at NVMCON.B0;
    const register unsigned short int PROGOP1 = 1;
    sbit  PROGOP1_bit at NVMCON.B1;
    const register unsigned short int PROGOP2 = 2;
    sbit  PROGOP2_bit at NVMCON.B2;
    const register unsigned short int PROGOP3 = 3;
    sbit  PROGOP3_bit at NVMCON.B3;
    sbit  PROGOP0_NVMCON_bit at NVMCON.B0;
    sbit  PROGOP1_NVMCON_bit at NVMCON.B1;
    sbit  PROGOP2_NVMCON_bit at NVMCON.B2;
    sbit  PROGOP3_NVMCON_bit at NVMCON.B3;
sfr unsigned long   volatile NVMCONCLR        absolute 0xBF80F404;
sfr unsigned long   volatile NVMCONSET        absolute 0xBF80F408;
sfr unsigned long   volatile NVMCONINV        absolute 0xBF80F40C;
sfr unsigned long            NVMKEY           absolute 0xBF80F410;
sfr atomic unsigned long   volatile NVMADDR          absolute 0xBF80F420;
sfr unsigned long   volatile NVMADDRCLR       absolute 0xBF80F424;
sfr unsigned long   volatile NVMADDRSET       absolute 0xBF80F428;
sfr unsigned long   volatile NVMADDRINV       absolute 0xBF80F42C;
sfr unsigned long   volatile NVMDATA          absolute 0xBF80F430;
sfr unsigned long   volatile NVMSRCADDR       absolute 0xBF80F440;
sfr atomic unsigned long   volatile RCON             absolute 0xBF80F600;
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
    const register unsigned short int SWR = 6;
    sbit  SWR_bit at RCON.B6;
    const register unsigned short int EXTR = 7;
    sbit  EXTR_bit at RCON.B7;
    const register unsigned short int VREGS = 8;
    sbit  VREGS_bit at RCON.B8;
    const register unsigned short int CMR = 9;
    sbit  CMR_bit at RCON.B9;
    const register unsigned short int HVDR = 29;
    sbit  HVDR_bit at RCON.B29;
sfr unsigned long   volatile RCONCLR          absolute 0xBF80F604;
sfr unsigned long   volatile RCONSET          absolute 0xBF80F608;
sfr unsigned long   volatile RCONINV          absolute 0xBF80F60C;
sfr atomic unsigned long   volatile RSWRST           absolute 0xBF80F610;
    const register unsigned short int SWRST = 0;
    sbit  SWRST_bit at RSWRST.B0;
sfr unsigned long   volatile RSWRSTCLR        absolute 0xBF80F614;
sfr unsigned long   volatile RSWRSTSET        absolute 0xBF80F618;
sfr unsigned long   volatile RSWRSTINV        absolute 0xBF80F61C;
sfr unsigned long   volatile INT1R            absolute 0xBF80FA04;
    const register unsigned short int INT1R0 = 0;
    sbit  INT1R0_bit at INT1R.B0;
    const register unsigned short int INT1R1 = 1;
    sbit  INT1R1_bit at INT1R.B1;
    const register unsigned short int INT1R2 = 2;
    sbit  INT1R2_bit at INT1R.B2;
    const register unsigned short int INT1R3 = 3;
    sbit  INT1R3_bit at INT1R.B3;
sfr unsigned long   volatile INT2R            absolute 0xBF80FA08;
    const register unsigned short int INT2R0 = 0;
    sbit  INT2R0_bit at INT2R.B0;
    const register unsigned short int INT2R1 = 1;
    sbit  INT2R1_bit at INT2R.B1;
    const register unsigned short int INT2R2 = 2;
    sbit  INT2R2_bit at INT2R.B2;
    const register unsigned short int INT2R3 = 3;
    sbit  INT2R3_bit at INT2R.B3;
sfr unsigned long   volatile INT3R            absolute 0xBF80FA0C;
    const register unsigned short int INT3R0 = 0;
    sbit  INT3R0_bit at INT3R.B0;
    const register unsigned short int INT3R1 = 1;
    sbit  INT3R1_bit at INT3R.B1;
    const register unsigned short int INT3R2 = 2;
    sbit  INT3R2_bit at INT3R.B2;
    const register unsigned short int INT3R3 = 3;
    sbit  INT3R3_bit at INT3R.B3;
sfr unsigned long   volatile INT4R            absolute 0xBF80FA10;
    const register unsigned short int INT4R0 = 0;
    sbit  INT4R0_bit at INT4R.B0;
    const register unsigned short int INT4R1 = 1;
    sbit  INT4R1_bit at INT4R.B1;
    const register unsigned short int INT4R2 = 2;
    sbit  INT4R2_bit at INT4R.B2;
    const register unsigned short int INT4R3 = 3;
    sbit  INT4R3_bit at INT4R.B3;
sfr unsigned long   volatile T2CKR            absolute 0xBF80FA18;
    const register unsigned short int T2CKR0 = 0;
    sbit  T2CKR0_bit at T2CKR.B0;
    const register unsigned short int T2CKR1 = 1;
    sbit  T2CKR1_bit at T2CKR.B1;
    const register unsigned short int T2CKR2 = 2;
    sbit  T2CKR2_bit at T2CKR.B2;
    const register unsigned short int T2CKR3 = 3;
    sbit  T2CKR3_bit at T2CKR.B3;
sfr unsigned long   volatile T3CKR            absolute 0xBF80FA1C;
    const register unsigned short int T3CKR0 = 0;
    sbit  T3CKR0_bit at T3CKR.B0;
    const register unsigned short int T3CKR1 = 1;
    sbit  T3CKR1_bit at T3CKR.B1;
    const register unsigned short int T3CKR2 = 2;
    sbit  T3CKR2_bit at T3CKR.B2;
    const register unsigned short int T3CKR3 = 3;
    sbit  T3CKR3_bit at T3CKR.B3;
sfr unsigned long   volatile T4CKR            absolute 0xBF80FA20;
    const register unsigned short int T4CKR0 = 0;
    sbit  T4CKR0_bit at T4CKR.B0;
    const register unsigned short int T4CKR1 = 1;
    sbit  T4CKR1_bit at T4CKR.B1;
    const register unsigned short int T4CKR2 = 2;
    sbit  T4CKR2_bit at T4CKR.B2;
    const register unsigned short int T4CKR3 = 3;
    sbit  T4CKR3_bit at T4CKR.B3;
sfr unsigned long   volatile T5CKR            absolute 0xBF80FA24;
    const register unsigned short int T5CKR0 = 0;
    sbit  T5CKR0_bit at T5CKR.B0;
    const register unsigned short int T5CKR1 = 1;
    sbit  T5CKR1_bit at T5CKR.B1;
    const register unsigned short int T5CKR2 = 2;
    sbit  T5CKR2_bit at T5CKR.B2;
    const register unsigned short int T5CKR3 = 3;
    sbit  T5CKR3_bit at T5CKR.B3;
sfr unsigned long   volatile IC1R             absolute 0xBF80FA28;
    const register unsigned short int IC1R0 = 0;
    sbit  IC1R0_bit at IC1R.B0;
    const register unsigned short int IC1R1 = 1;
    sbit  IC1R1_bit at IC1R.B1;
    const register unsigned short int IC1R2 = 2;
    sbit  IC1R2_bit at IC1R.B2;
    const register unsigned short int IC1R3 = 3;
    sbit  IC1R3_bit at IC1R.B3;
sfr unsigned long   volatile IC2R             absolute 0xBF80FA2C;
    const register unsigned short int IC2R0 = 0;
    sbit  IC2R0_bit at IC2R.B0;
    const register unsigned short int IC2R1 = 1;
    sbit  IC2R1_bit at IC2R.B1;
    const register unsigned short int IC2R2 = 2;
    sbit  IC2R2_bit at IC2R.B2;
    const register unsigned short int IC2R3 = 3;
    sbit  IC2R3_bit at IC2R.B3;
sfr unsigned long   volatile IC3R             absolute 0xBF80FA30;
    const register unsigned short int IC3R0 = 0;
    sbit  IC3R0_bit at IC3R.B0;
    const register unsigned short int IC3R1 = 1;
    sbit  IC3R1_bit at IC3R.B1;
    const register unsigned short int IC3R2 = 2;
    sbit  IC3R2_bit at IC3R.B2;
    const register unsigned short int IC3R3 = 3;
    sbit  IC3R3_bit at IC3R.B3;
sfr unsigned long   volatile IC4R             absolute 0xBF80FA34;
    const register unsigned short int IC4R0 = 0;
    sbit  IC4R0_bit at IC4R.B0;
    const register unsigned short int IC4R1 = 1;
    sbit  IC4R1_bit at IC4R.B1;
    const register unsigned short int IC4R2 = 2;
    sbit  IC4R2_bit at IC4R.B2;
    const register unsigned short int IC4R3 = 3;
    sbit  IC4R3_bit at IC4R.B3;
sfr unsigned long   volatile IC5R             absolute 0xBF80FA38;
    const register unsigned short int IC5R0 = 0;
    sbit  IC5R0_bit at IC5R.B0;
    const register unsigned short int IC5R1 = 1;
    sbit  IC5R1_bit at IC5R.B1;
    const register unsigned short int IC5R2 = 2;
    sbit  IC5R2_bit at IC5R.B2;
    const register unsigned short int IC5R3 = 3;
    sbit  IC5R3_bit at IC5R.B3;
sfr unsigned long   volatile IC6R             absolute 0xBF80FA3C;
    const register unsigned short int IC6R0 = 0;
    sbit  IC6R0_bit at IC6R.B0;
    const register unsigned short int IC6R1 = 1;
    sbit  IC6R1_bit at IC6R.B1;
    const register unsigned short int IC6R2 = 2;
    sbit  IC6R2_bit at IC6R.B2;
    const register unsigned short int IC6R3 = 3;
    sbit  IC6R3_bit at IC6R.B3;
sfr unsigned long   volatile IC7R             absolute 0xBF80FA40;
    const register unsigned short int IC7R0 = 0;
    sbit  IC7R0_bit at IC7R.B0;
    const register unsigned short int IC7R1 = 1;
    sbit  IC7R1_bit at IC7R.B1;
    const register unsigned short int IC7R2 = 2;
    sbit  IC7R2_bit at IC7R.B2;
    const register unsigned short int IC7R3 = 3;
    sbit  IC7R3_bit at IC7R.B3;
sfr unsigned long   volatile IC8R             absolute 0xBF80FA44;
    const register unsigned short int IC8R0 = 0;
    sbit  IC8R0_bit at IC8R.B0;
    const register unsigned short int IC8R1 = 1;
    sbit  IC8R1_bit at IC8R.B1;
    const register unsigned short int IC8R2 = 2;
    sbit  IC8R2_bit at IC8R.B2;
    const register unsigned short int IC8R3 = 3;
    sbit  IC8R3_bit at IC8R.B3;
sfr unsigned long   volatile OCFAR            absolute 0xBF80FA48;
    const register unsigned short int OCFAR0 = 0;
    sbit  OCFAR0_bit at OCFAR.B0;
    const register unsigned short int OCFAR1 = 1;
    sbit  OCFAR1_bit at OCFAR.B1;
    const register unsigned short int OCFAR2 = 2;
    sbit  OCFAR2_bit at OCFAR.B2;
    const register unsigned short int OCFAR3 = 3;
    sbit  OCFAR3_bit at OCFAR.B3;
sfr unsigned long   volatile OCFBR            absolute 0xBF80FA4C;
    const register unsigned short int OCFBR0 = 0;
    sbit  OCFBR0_bit at OCFBR.B0;
    const register unsigned short int OCFBR1 = 1;
    sbit  OCFBR1_bit at OCFBR.B1;
    const register unsigned short int OCFBR2 = 2;
    sbit  OCFBR2_bit at OCFBR.B2;
    const register unsigned short int OCFBR3 = 3;
    sbit  OCFBR3_bit at OCFBR.B3;
sfr unsigned long   volatile U1RXR            absolute 0xBF80FA50;
    const register unsigned short int U1RXR0 = 0;
    sbit  U1RXR0_bit at U1RXR.B0;
    const register unsigned short int U1RXR1 = 1;
    sbit  U1RXR1_bit at U1RXR.B1;
    const register unsigned short int U1RXR2 = 2;
    sbit  U1RXR2_bit at U1RXR.B2;
    const register unsigned short int U1RXR3 = 3;
    sbit  U1RXR3_bit at U1RXR.B3;
sfr unsigned long   volatile U1CTSR           absolute 0xBF80FA54;
    const register unsigned short int U1CTSR0 = 0;
    sbit  U1CTSR0_bit at U1CTSR.B0;
    const register unsigned short int U1CTSR1 = 1;
    sbit  U1CTSR1_bit at U1CTSR.B1;
    const register unsigned short int U1CTSR2 = 2;
    sbit  U1CTSR2_bit at U1CTSR.B2;
    const register unsigned short int U1CTSR3 = 3;
    sbit  U1CTSR3_bit at U1CTSR.B3;
sfr unsigned long   volatile U2RXR            absolute 0xBF80FA58;
    const register unsigned short int U2RXR0 = 0;
    sbit  U2RXR0_bit at U2RXR.B0;
    const register unsigned short int U2RXR1 = 1;
    sbit  U2RXR1_bit at U2RXR.B1;
    const register unsigned short int U2RXR2 = 2;
    sbit  U2RXR2_bit at U2RXR.B2;
    const register unsigned short int U2RXR3 = 3;
    sbit  U2RXR3_bit at U2RXR.B3;
sfr unsigned long   volatile U2CTSR           absolute 0xBF80FA5C;
    const register unsigned short int U2CTSR0 = 0;
    sbit  U2CTSR0_bit at U2CTSR.B0;
    const register unsigned short int U2CTSR1 = 1;
    sbit  U2CTSR1_bit at U2CTSR.B1;
    const register unsigned short int U2CTSR2 = 2;
    sbit  U2CTSR2_bit at U2CTSR.B2;
    const register unsigned short int U2CTSR3 = 3;
    sbit  U2CTSR3_bit at U2CTSR.B3;
sfr unsigned long   volatile U3RXR            absolute 0xBF80FA60;
    const register unsigned short int U3RXR0 = 0;
    sbit  U3RXR0_bit at U3RXR.B0;
    const register unsigned short int U3RXR1 = 1;
    sbit  U3RXR1_bit at U3RXR.B1;
    const register unsigned short int U3RXR2 = 2;
    sbit  U3RXR2_bit at U3RXR.B2;
    const register unsigned short int U3RXR3 = 3;
    sbit  U3RXR3_bit at U3RXR.B3;
sfr unsigned long   volatile U3CTSR           absolute 0xBF80FA64;
    const register unsigned short int U3CTSR0 = 0;
    sbit  U3CTSR0_bit at U3CTSR.B0;
    const register unsigned short int U3CTSR1 = 1;
    sbit  U3CTSR1_bit at U3CTSR.B1;
    const register unsigned short int U3CTSR2 = 2;
    sbit  U3CTSR2_bit at U3CTSR.B2;
    const register unsigned short int U3CTSR3 = 3;
    sbit  U3CTSR3_bit at U3CTSR.B3;
sfr unsigned long   volatile U4RXR            absolute 0xBF80FA68;
    const register unsigned short int U4RXR0 = 0;
    sbit  U4RXR0_bit at U4RXR.B0;
    const register unsigned short int U4RXR1 = 1;
    sbit  U4RXR1_bit at U4RXR.B1;
    const register unsigned short int U4RXR2 = 2;
    sbit  U4RXR2_bit at U4RXR.B2;
    const register unsigned short int U4RXR3 = 3;
    sbit  U4RXR3_bit at U4RXR.B3;
sfr unsigned long   volatile U4CTSR           absolute 0xBF80FA6C;
    const register unsigned short int U4CTSR0 = 0;
    sbit  U4CTSR0_bit at U4CTSR.B0;
    const register unsigned short int U4CTSR1 = 1;
    sbit  U4CTSR1_bit at U4CTSR.B1;
    const register unsigned short int U4CTSR2 = 2;
    sbit  U4CTSR2_bit at U4CTSR.B2;
    const register unsigned short int U4CTSR3 = 3;
    sbit  U4CTSR3_bit at U4CTSR.B3;
sfr unsigned long   volatile U5RXR            absolute 0xBF80FA70;
    const register unsigned short int U5RXR0 = 0;
    sbit  U5RXR0_bit at U5RXR.B0;
    const register unsigned short int U5RXR1 = 1;
    sbit  U5RXR1_bit at U5RXR.B1;
    const register unsigned short int U5RXR2 = 2;
    sbit  U5RXR2_bit at U5RXR.B2;
    const register unsigned short int U5RXR3 = 3;
    sbit  U5RXR3_bit at U5RXR.B3;
sfr unsigned long   volatile U5CTSR           absolute 0xBF80FA74;
    const register unsigned short int U5CTSR0 = 0;
    sbit  U5CTSR0_bit at U5CTSR.B0;
    const register unsigned short int U5CTSR1 = 1;
    sbit  U5CTSR1_bit at U5CTSR.B1;
    const register unsigned short int U5CTSR2 = 2;
    sbit  U5CTSR2_bit at U5CTSR.B2;
    const register unsigned short int U5CTSR3 = 3;
    sbit  U5CTSR3_bit at U5CTSR.B3;
sfr unsigned long   volatile U6RXR            absolute 0xBF80FA78;
    const register unsigned short int U6RXR0 = 0;
    sbit  U6RXR0_bit at U6RXR.B0;
    const register unsigned short int U6RXR1 = 1;
    sbit  U6RXR1_bit at U6RXR.B1;
    const register unsigned short int U6RXR2 = 2;
    sbit  U6RXR2_bit at U6RXR.B2;
    const register unsigned short int U6RXR3 = 3;
    sbit  U6RXR3_bit at U6RXR.B3;
sfr unsigned long   volatile U6CTSR           absolute 0xBF80FA7C;
    const register unsigned short int U6CTSR0 = 0;
    sbit  U6CTSR0_bit at U6CTSR.B0;
    const register unsigned short int U6CTSR1 = 1;
    sbit  U6CTSR1_bit at U6CTSR.B1;
    const register unsigned short int U6CTSR2 = 2;
    sbit  U6CTSR2_bit at U6CTSR.B2;
    const register unsigned short int U6CTSR3 = 3;
    sbit  U6CTSR3_bit at U6CTSR.B3;
sfr unsigned long   volatile SDI1R            absolute 0xBF80FA84;
    const register unsigned short int SDI1R0 = 0;
    sbit  SDI1R0_bit at SDI1R.B0;
    const register unsigned short int SDI1R1 = 1;
    sbit  SDI1R1_bit at SDI1R.B1;
    const register unsigned short int SDI1R2 = 2;
    sbit  SDI1R2_bit at SDI1R.B2;
    const register unsigned short int SDI1R3 = 3;
    sbit  SDI1R3_bit at SDI1R.B3;
sfr unsigned long   volatile SS1R             absolute 0xBF80FA88;
    const register unsigned short int SS1R0 = 0;
    sbit  SS1R0_bit at SS1R.B0;
    const register unsigned short int SS1R1 = 1;
    sbit  SS1R1_bit at SS1R.B1;
    const register unsigned short int SS1R2 = 2;
    sbit  SS1R2_bit at SS1R.B2;
    const register unsigned short int SS1R3 = 3;
    sbit  SS1R3_bit at SS1R.B3;
sfr unsigned long   volatile SDI2R            absolute 0xBF80FA90;
    const register unsigned short int SDI2R0 = 0;
    sbit  SDI2R0_bit at SDI2R.B0;
    const register unsigned short int SDI2R1 = 1;
    sbit  SDI2R1_bit at SDI2R.B1;
    const register unsigned short int SDI2R2 = 2;
    sbit  SDI2R2_bit at SDI2R.B2;
    const register unsigned short int SDI2R3 = 3;
    sbit  SDI2R3_bit at SDI2R.B3;
sfr unsigned long   volatile SS2R             absolute 0xBF80FA94;
    const register unsigned short int SS2R0 = 0;
    sbit  SS2R0_bit at SS2R.B0;
    const register unsigned short int SS2R1 = 1;
    sbit  SS2R1_bit at SS2R.B1;
    const register unsigned short int SS2R2 = 2;
    sbit  SS2R2_bit at SS2R.B2;
    const register unsigned short int SS2R3 = 3;
    sbit  SS2R3_bit at SS2R.B3;
sfr unsigned long   volatile SDI3R            absolute 0xBF80FA9C;
    const register unsigned short int SDI3R0 = 0;
    sbit  SDI3R0_bit at SDI3R.B0;
    const register unsigned short int SDI3R1 = 1;
    sbit  SDI3R1_bit at SDI3R.B1;
    const register unsigned short int SDI3R2 = 2;
    sbit  SDI3R2_bit at SDI3R.B2;
    const register unsigned short int SDI3R3 = 3;
    sbit  SDI3R3_bit at SDI3R.B3;
sfr unsigned long   volatile SS3R             absolute 0xBF80FAA0;
    const register unsigned short int SS3R0 = 0;
    sbit  SS3R0_bit at SS3R.B0;
    const register unsigned short int SS3R1 = 1;
    sbit  SS3R1_bit at SS3R.B1;
    const register unsigned short int SS3R2 = 2;
    sbit  SS3R2_bit at SS3R.B2;
    const register unsigned short int SS3R3 = 3;
    sbit  SS3R3_bit at SS3R.B3;
sfr unsigned long   volatile SDI4R            absolute 0xBF80FAA8;
    const register unsigned short int SDI4R0 = 0;
    sbit  SDI4R0_bit at SDI4R.B0;
    const register unsigned short int SDI4R1 = 1;
    sbit  SDI4R1_bit at SDI4R.B1;
    const register unsigned short int SDI4R2 = 2;
    sbit  SDI4R2_bit at SDI4R.B2;
    const register unsigned short int SDI4R3 = 3;
    sbit  SDI4R3_bit at SDI4R.B3;
sfr unsigned long   volatile SS4R             absolute 0xBF80FAAC;
    const register unsigned short int SS4R0 = 0;
    sbit  SS4R0_bit at SS4R.B0;
    const register unsigned short int SS4R1 = 1;
    sbit  SS4R1_bit at SS4R.B1;
    const register unsigned short int SS4R2 = 2;
    sbit  SS4R2_bit at SS4R.B2;
    const register unsigned short int SS4R3 = 3;
    sbit  SS4R3_bit at SS4R.B3;
sfr unsigned long   volatile SDI5R            absolute 0xBF80FAB4;
    const register unsigned short int SDI5R0 = 0;
    sbit  SDI5R0_bit at SDI5R.B0;
    const register unsigned short int SDI5R1 = 1;
    sbit  SDI5R1_bit at SDI5R.B1;
    const register unsigned short int SDI5R2 = 2;
    sbit  SDI5R2_bit at SDI5R.B2;
    const register unsigned short int SDI5R3 = 3;
    sbit  SDI5R3_bit at SDI5R.B3;
sfr unsigned long   volatile SS5R             absolute 0xBF80FAB8;
    const register unsigned short int SS5R0 = 0;
    sbit  SS5R0_bit at SS5R.B0;
    const register unsigned short int SS5R1 = 1;
    sbit  SS5R1_bit at SS5R.B1;
    const register unsigned short int SS5R2 = 2;
    sbit  SS5R2_bit at SS5R.B2;
    const register unsigned short int SS5R3 = 3;
    sbit  SS5R3_bit at SS5R.B3;
sfr unsigned long   volatile SDI6R            absolute 0xBF80FAC0;
    const register unsigned short int SDI6R0 = 0;
    sbit  SDI6R0_bit at SDI6R.B0;
    const register unsigned short int SDI6R1 = 1;
    sbit  SDI6R1_bit at SDI6R.B1;
    const register unsigned short int SDI6R2 = 2;
    sbit  SDI6R2_bit at SDI6R.B2;
    const register unsigned short int SDI6R3 = 3;
    sbit  SDI6R3_bit at SDI6R.B3;
sfr unsigned long   volatile SS6R             absolute 0xBF80FAC4;
    const register unsigned short int SS6R0 = 0;
    sbit  SS6R0_bit at SS6R.B0;
    const register unsigned short int SS6R1 = 1;
    sbit  SS6R1_bit at SS6R.B1;
    const register unsigned short int SS6R2 = 2;
    sbit  SS6R2_bit at SS6R.B2;
    const register unsigned short int SS6R3 = 3;
    sbit  SS6R3_bit at SS6R.B3;
sfr unsigned long   volatile C1RXR            absolute 0xBF80FAC8;
    const register unsigned short int C1RXR0 = 0;
    sbit  C1RXR0_bit at C1RXR.B0;
    const register unsigned short int C1RXR1 = 1;
    sbit  C1RXR1_bit at C1RXR.B1;
    const register unsigned short int C1RXR2 = 2;
    sbit  C1RXR2_bit at C1RXR.B2;
    const register unsigned short int C1RXR3 = 3;
    sbit  C1RXR3_bit at C1RXR.B3;
sfr unsigned long   volatile C2RXR            absolute 0xBF80FACC;
    const register unsigned short int C2RXR0 = 0;
    sbit  C2RXR0_bit at C2RXR.B0;
    const register unsigned short int C2RXR1 = 1;
    sbit  C2RXR1_bit at C2RXR.B1;
    const register unsigned short int C2RXR2 = 2;
    sbit  C2RXR2_bit at C2RXR.B2;
    const register unsigned short int C2RXR3 = 3;
    sbit  C2RXR3_bit at C2RXR.B3;
sfr unsigned long   volatile REFCLKIR         absolute 0xBF80FAD0;
    const register unsigned short int REFCLKIR0 = 0;
    sbit  REFCLKIR0_bit at REFCLKIR.B0;
    const register unsigned short int REFCLKIR1 = 1;
    sbit  REFCLKIR1_bit at REFCLKIR.B1;
    const register unsigned short int REFCLKIR2 = 2;
    sbit  REFCLKIR2_bit at REFCLKIR.B2;
    const register unsigned short int REFCLKIR3 = 3;
    sbit  REFCLKIR3_bit at REFCLKIR.B3;
sfr unsigned long   volatile REFI2R           absolute 0xBF80FAD4;
    const register unsigned short int REFI2R0 = 0;
    sbit  REFI2R0_bit at REFI2R.B0;
    const register unsigned short int REFI2R1 = 1;
    sbit  REFI2R1_bit at REFI2R.B1;
    const register unsigned short int REFI2R2 = 2;
    sbit  REFI2R2_bit at REFI2R.B2;
    const register unsigned short int REFI2R3 = 3;
    sbit  REFI2R3_bit at REFI2R.B3;
sfr unsigned long   volatile REFI3R           absolute 0xBF80FAD8;
    const register unsigned short int REFI3R0 = 0;
    sbit  REFI3R0_bit at REFI3R.B0;
    const register unsigned short int REFI3R1 = 1;
    sbit  REFI3R1_bit at REFI3R.B1;
    const register unsigned short int REFI3R2 = 2;
    sbit  REFI3R2_bit at REFI3R.B2;
    const register unsigned short int REFI3R3 = 3;
    sbit  REFI3R3_bit at REFI3R.B3;
sfr unsigned long   volatile REFI4R           absolute 0xBF80FADC;
    const register unsigned short int REFI4R0 = 0;
    sbit  REFI4R0_bit at REFI4R.B0;
    const register unsigned short int REFI4R1 = 1;
    sbit  REFI4R1_bit at REFI4R.B1;
    const register unsigned short int REFI4R2 = 2;
    sbit  REFI4R2_bit at REFI4R.B2;
    const register unsigned short int REFI4R3 = 3;
    sbit  REFI4R3_bit at REFI4R.B3;
sfr unsigned long   volatile RPA0R            absolute 0xBF80FB00;
    const register unsigned short int RPA0R0 = 0;
    sbit  RPA0R0_bit at RPA0R.B0;
    const register unsigned short int RPA0R1 = 1;
    sbit  RPA0R1_bit at RPA0R.B1;
    const register unsigned short int RPA0R2 = 2;
    sbit  RPA0R2_bit at RPA0R.B2;
    const register unsigned short int RPA0R3 = 3;
    sbit  RPA0R3_bit at RPA0R.B3;
sfr unsigned long   volatile RPA1R            absolute 0xBF80FB04;
    const register unsigned short int RPA1R0 = 0;
    sbit  RPA1R0_bit at RPA1R.B0;
    const register unsigned short int RPA1R1 = 1;
    sbit  RPA1R1_bit at RPA1R.B1;
    const register unsigned short int RPA1R2 = 2;
    sbit  RPA1R2_bit at RPA1R.B2;
    const register unsigned short int RPA1R3 = 3;
    sbit  RPA1R3_bit at RPA1R.B3;
sfr unsigned long   volatile RPA2R            absolute 0xBF80FB08;
    const register unsigned short int RPA2R0 = 0;
    sbit  RPA2R0_bit at RPA2R.B0;
    const register unsigned short int RPA2R1 = 1;
    sbit  RPA2R1_bit at RPA2R.B1;
    const register unsigned short int RPA2R2 = 2;
    sbit  RPA2R2_bit at RPA2R.B2;
    const register unsigned short int RPA2R3 = 3;
    sbit  RPA2R3_bit at RPA2R.B3;
sfr unsigned long   volatile RPA3R            absolute 0xBF80FB0C;
    const register unsigned short int RPA3R0 = 0;
    sbit  RPA3R0_bit at RPA3R.B0;
    const register unsigned short int RPA3R1 = 1;
    sbit  RPA3R1_bit at RPA3R.B1;
    const register unsigned short int RPA3R2 = 2;
    sbit  RPA3R2_bit at RPA3R.B2;
    const register unsigned short int RPA3R3 = 3;
    sbit  RPA3R3_bit at RPA3R.B3;
sfr unsigned long   volatile RPA4R            absolute 0xBF80FB10;
    const register unsigned short int RPA4R0 = 0;
    sbit  RPA4R0_bit at RPA4R.B0;
    const register unsigned short int RPA4R1 = 1;
    sbit  RPA4R1_bit at RPA4R.B1;
    const register unsigned short int RPA4R2 = 2;
    sbit  RPA4R2_bit at RPA4R.B2;
    const register unsigned short int RPA4R3 = 3;
    sbit  RPA4R3_bit at RPA4R.B3;
sfr unsigned long   volatile RPA5R            absolute 0xBF80FB14;
    const register unsigned short int RPA5R0 = 0;
    sbit  RPA5R0_bit at RPA5R.B0;
    const register unsigned short int RPA5R1 = 1;
    sbit  RPA5R1_bit at RPA5R.B1;
    const register unsigned short int RPA5R2 = 2;
    sbit  RPA5R2_bit at RPA5R.B2;
    const register unsigned short int RPA5R3 = 3;
    sbit  RPA5R3_bit at RPA5R.B3;
sfr unsigned long   volatile RPA6R            absolute 0xBF80FB18;
    const register unsigned short int RPA6R0 = 0;
    sbit  RPA6R0_bit at RPA6R.B0;
    const register unsigned short int RPA6R1 = 1;
    sbit  RPA6R1_bit at RPA6R.B1;
    const register unsigned short int RPA6R2 = 2;
    sbit  RPA6R2_bit at RPA6R.B2;
    const register unsigned short int RPA6R3 = 3;
    sbit  RPA6R3_bit at RPA6R.B3;
sfr unsigned long   volatile RPA7R            absolute 0xBF80FB1C;
    const register unsigned short int RPA7R0 = 0;
    sbit  RPA7R0_bit at RPA7R.B0;
    const register unsigned short int RPA7R1 = 1;
    sbit  RPA7R1_bit at RPA7R.B1;
    const register unsigned short int RPA7R2 = 2;
    sbit  RPA7R2_bit at RPA7R.B2;
    const register unsigned short int RPA7R3 = 3;
    sbit  RPA7R3_bit at RPA7R.B3;
sfr unsigned long   volatile RPA8R            absolute 0xBF80FB20;
    const register unsigned short int RPA8R0 = 0;
    sbit  RPA8R0_bit at RPA8R.B0;
    const register unsigned short int RPA8R1 = 1;
    sbit  RPA8R1_bit at RPA8R.B1;
    const register unsigned short int RPA8R2 = 2;
    sbit  RPA8R2_bit at RPA8R.B2;
    const register unsigned short int RPA8R3 = 3;
    sbit  RPA8R3_bit at RPA8R.B3;
sfr unsigned long   volatile RPA9R            absolute 0xBF80FB24;
    const register unsigned short int RPA9R0 = 0;
    sbit  RPA9R0_bit at RPA9R.B0;
    const register unsigned short int RPA9R1 = 1;
    sbit  RPA9R1_bit at RPA9R.B1;
    const register unsigned short int RPA9R2 = 2;
    sbit  RPA9R2_bit at RPA9R.B2;
    const register unsigned short int RPA9R3 = 3;
    sbit  RPA9R3_bit at RPA9R.B3;
sfr unsigned long   volatile RPA10R           absolute 0xBF80FB28;
    const register unsigned short int RPA10R0 = 0;
    sbit  RPA10R0_bit at RPA10R.B0;
    const register unsigned short int RPA10R1 = 1;
    sbit  RPA10R1_bit at RPA10R.B1;
    const register unsigned short int RPA10R2 = 2;
    sbit  RPA10R2_bit at RPA10R.B2;
    const register unsigned short int RPA10R3 = 3;
    sbit  RPA10R3_bit at RPA10R.B3;
sfr unsigned long   volatile RPA11R           absolute 0xBF80FB2C;
    const register unsigned short int RPA11R0 = 0;
    sbit  RPA11R0_bit at RPA11R.B0;
    const register unsigned short int RPA11R1 = 1;
    sbit  RPA11R1_bit at RPA11R.B1;
    const register unsigned short int RPA11R2 = 2;
    sbit  RPA11R2_bit at RPA11R.B2;
    const register unsigned short int RPA11R3 = 3;
    sbit  RPA11R3_bit at RPA11R.B3;
sfr unsigned long   volatile RPA12R           absolute 0xBF80FB30;
    const register unsigned short int RPA12R0 = 0;
    sbit  RPA12R0_bit at RPA12R.B0;
    const register unsigned short int RPA12R1 = 1;
    sbit  RPA12R1_bit at RPA12R.B1;
    const register unsigned short int RPA12R2 = 2;
    sbit  RPA12R2_bit at RPA12R.B2;
    const register unsigned short int RPA12R3 = 3;
    sbit  RPA12R3_bit at RPA12R.B3;
sfr unsigned long   volatile RPA13R           absolute 0xBF80FB34;
    const register unsigned short int RPA13R0 = 0;
    sbit  RPA13R0_bit at RPA13R.B0;
    const register unsigned short int RPA13R1 = 1;
    sbit  RPA13R1_bit at RPA13R.B1;
    const register unsigned short int RPA13R2 = 2;
    sbit  RPA13R2_bit at RPA13R.B2;
    const register unsigned short int RPA13R3 = 3;
    sbit  RPA13R3_bit at RPA13R.B3;
sfr unsigned long   volatile RPA14R           absolute 0xBF80FB38;
    const register unsigned short int RPA14R0 = 0;
    sbit  RPA14R0_bit at RPA14R.B0;
    const register unsigned short int RPA14R1 = 1;
    sbit  RPA14R1_bit at RPA14R.B1;
    const register unsigned short int RPA14R2 = 2;
    sbit  RPA14R2_bit at RPA14R.B2;
    const register unsigned short int RPA14R3 = 3;
    sbit  RPA14R3_bit at RPA14R.B3;
sfr unsigned long   volatile RPA15R           absolute 0xBF80FB3C;
    const register unsigned short int RPA15R0 = 0;
    sbit  RPA15R0_bit at RPA15R.B0;
    const register unsigned short int RPA15R1 = 1;
    sbit  RPA15R1_bit at RPA15R.B1;
    const register unsigned short int RPA15R2 = 2;
    sbit  RPA15R2_bit at RPA15R.B2;
    const register unsigned short int RPA15R3 = 3;
    sbit  RPA15R3_bit at RPA15R.B3;
sfr unsigned long   volatile RPB0R            absolute 0xBF80FB40;
    const register unsigned short int RPB0R0 = 0;
    sbit  RPB0R0_bit at RPB0R.B0;
    const register unsigned short int RPB0R1 = 1;
    sbit  RPB0R1_bit at RPB0R.B1;
    const register unsigned short int RPB0R2 = 2;
    sbit  RPB0R2_bit at RPB0R.B2;
    const register unsigned short int RPB0R3 = 3;
    sbit  RPB0R3_bit at RPB0R.B3;
sfr unsigned long   volatile RPB1R            absolute 0xBF80FB44;
    const register unsigned short int RPB1R0 = 0;
    sbit  RPB1R0_bit at RPB1R.B0;
    const register unsigned short int RPB1R1 = 1;
    sbit  RPB1R1_bit at RPB1R.B1;
    const register unsigned short int RPB1R2 = 2;
    sbit  RPB1R2_bit at RPB1R.B2;
    const register unsigned short int RPB1R3 = 3;
    sbit  RPB1R3_bit at RPB1R.B3;
sfr unsigned long   volatile RPB2R            absolute 0xBF80FB48;
    const register unsigned short int RPB2R0 = 0;
    sbit  RPB2R0_bit at RPB2R.B0;
    const register unsigned short int RPB2R1 = 1;
    sbit  RPB2R1_bit at RPB2R.B1;
    const register unsigned short int RPB2R2 = 2;
    sbit  RPB2R2_bit at RPB2R.B2;
    const register unsigned short int RPB2R3 = 3;
    sbit  RPB2R3_bit at RPB2R.B3;
sfr unsigned long   volatile RPB3R            absolute 0xBF80FB4C;
    const register unsigned short int RPB3R0 = 0;
    sbit  RPB3R0_bit at RPB3R.B0;
    const register unsigned short int RPB3R1 = 1;
    sbit  RPB3R1_bit at RPB3R.B1;
    const register unsigned short int RPB3R2 = 2;
    sbit  RPB3R2_bit at RPB3R.B2;
    const register unsigned short int RPB3R3 = 3;
    sbit  RPB3R3_bit at RPB3R.B3;
sfr unsigned long   volatile RPB4R            absolute 0xBF80FB50;
    const register unsigned short int RPB4R0 = 0;
    sbit  RPB4R0_bit at RPB4R.B0;
    const register unsigned short int RPB4R1 = 1;
    sbit  RPB4R1_bit at RPB4R.B1;
    const register unsigned short int RPB4R2 = 2;
    sbit  RPB4R2_bit at RPB4R.B2;
    const register unsigned short int RPB4R3 = 3;
    sbit  RPB4R3_bit at RPB4R.B3;
sfr unsigned long   volatile RPB5R            absolute 0xBF80FB54;
    const register unsigned short int RPB5R0 = 0;
    sbit  RPB5R0_bit at RPB5R.B0;
    const register unsigned short int RPB5R1 = 1;
    sbit  RPB5R1_bit at RPB5R.B1;
    const register unsigned short int RPB5R2 = 2;
    sbit  RPB5R2_bit at RPB5R.B2;
    const register unsigned short int RPB5R3 = 3;
    sbit  RPB5R3_bit at RPB5R.B3;
sfr unsigned long   volatile RPB6R            absolute 0xBF80FB58;
    const register unsigned short int RPB6R0 = 0;
    sbit  RPB6R0_bit at RPB6R.B0;
    const register unsigned short int RPB6R1 = 1;
    sbit  RPB6R1_bit at RPB6R.B1;
    const register unsigned short int RPB6R2 = 2;
    sbit  RPB6R2_bit at RPB6R.B2;
    const register unsigned short int RPB6R3 = 3;
    sbit  RPB6R3_bit at RPB6R.B3;
sfr unsigned long   volatile RPB7R            absolute 0xBF80FB5C;
    const register unsigned short int RPB7R0 = 0;
    sbit  RPB7R0_bit at RPB7R.B0;
    const register unsigned short int RPB7R1 = 1;
    sbit  RPB7R1_bit at RPB7R.B1;
    const register unsigned short int RPB7R2 = 2;
    sbit  RPB7R2_bit at RPB7R.B2;
    const register unsigned short int RPB7R3 = 3;
    sbit  RPB7R3_bit at RPB7R.B3;
sfr unsigned long   volatile RPB8R            absolute 0xBF80FB60;
    const register unsigned short int RPB8R0 = 0;
    sbit  RPB8R0_bit at RPB8R.B0;
    const register unsigned short int RPB8R1 = 1;
    sbit  RPB8R1_bit at RPB8R.B1;
    const register unsigned short int RPB8R2 = 2;
    sbit  RPB8R2_bit at RPB8R.B2;
    const register unsigned short int RPB8R3 = 3;
    sbit  RPB8R3_bit at RPB8R.B3;
sfr unsigned long   volatile RPB9R            absolute 0xBF80FB64;
    const register unsigned short int RPB9R0 = 0;
    sbit  RPB9R0_bit at RPB9R.B0;
    const register unsigned short int RPB9R1 = 1;
    sbit  RPB9R1_bit at RPB9R.B1;
    const register unsigned short int RPB9R2 = 2;
    sbit  RPB9R2_bit at RPB9R.B2;
    const register unsigned short int RPB9R3 = 3;
    sbit  RPB9R3_bit at RPB9R.B3;
sfr unsigned long   volatile RPB10R           absolute 0xBF80FB68;
    const register unsigned short int RPB10R0 = 0;
    sbit  RPB10R0_bit at RPB10R.B0;
    const register unsigned short int RPB10R1 = 1;
    sbit  RPB10R1_bit at RPB10R.B1;
    const register unsigned short int RPB10R2 = 2;
    sbit  RPB10R2_bit at RPB10R.B2;
    const register unsigned short int RPB10R3 = 3;
    sbit  RPB10R3_bit at RPB10R.B3;
sfr unsigned long   volatile RPB11R           absolute 0xBF80FB6C;
    const register unsigned short int RPB11R0 = 0;
    sbit  RPB11R0_bit at RPB11R.B0;
    const register unsigned short int RPB11R1 = 1;
    sbit  RPB11R1_bit at RPB11R.B1;
    const register unsigned short int RPB11R2 = 2;
    sbit  RPB11R2_bit at RPB11R.B2;
    const register unsigned short int RPB11R3 = 3;
    sbit  RPB11R3_bit at RPB11R.B3;
sfr unsigned long   volatile RPB12R           absolute 0xBF80FB70;
    const register unsigned short int RPB12R0 = 0;
    sbit  RPB12R0_bit at RPB12R.B0;
    const register unsigned short int RPB12R1 = 1;
    sbit  RPB12R1_bit at RPB12R.B1;
    const register unsigned short int RPB12R2 = 2;
    sbit  RPB12R2_bit at RPB12R.B2;
    const register unsigned short int RPB12R3 = 3;
    sbit  RPB12R3_bit at RPB12R.B3;
sfr unsigned long   volatile RPB13R           absolute 0xBF80FB74;
    const register unsigned short int RPB13R0 = 0;
    sbit  RPB13R0_bit at RPB13R.B0;
    const register unsigned short int RPB13R1 = 1;
    sbit  RPB13R1_bit at RPB13R.B1;
    const register unsigned short int RPB13R2 = 2;
    sbit  RPB13R2_bit at RPB13R.B2;
    const register unsigned short int RPB13R3 = 3;
    sbit  RPB13R3_bit at RPB13R.B3;
sfr unsigned long   volatile RPB14R           absolute 0xBF80FB78;
    const register unsigned short int RPB14R0 = 0;
    sbit  RPB14R0_bit at RPB14R.B0;
    const register unsigned short int RPB14R1 = 1;
    sbit  RPB14R1_bit at RPB14R.B1;
    const register unsigned short int RPB14R2 = 2;
    sbit  RPB14R2_bit at RPB14R.B2;
    const register unsigned short int RPB14R3 = 3;
    sbit  RPB14R3_bit at RPB14R.B3;
sfr unsigned long   volatile RPB15R           absolute 0xBF80FB7C;
    const register unsigned short int RPB15R0 = 0;
    sbit  RPB15R0_bit at RPB15R.B0;
    const register unsigned short int RPB15R1 = 1;
    sbit  RPB15R1_bit at RPB15R.B1;
    const register unsigned short int RPB15R2 = 2;
    sbit  RPB15R2_bit at RPB15R.B2;
    const register unsigned short int RPB15R3 = 3;
    sbit  RPB15R3_bit at RPB15R.B3;
sfr unsigned long   volatile RPC0R            absolute 0xBF80FB80;
    const register unsigned short int RPC0R0 = 0;
    sbit  RPC0R0_bit at RPC0R.B0;
    const register unsigned short int RPC0R1 = 1;
    sbit  RPC0R1_bit at RPC0R.B1;
    const register unsigned short int RPC0R2 = 2;
    sbit  RPC0R2_bit at RPC0R.B2;
    const register unsigned short int RPC0R3 = 3;
    sbit  RPC0R3_bit at RPC0R.B3;
sfr unsigned long   volatile RPC1R            absolute 0xBF80FB84;
    const register unsigned short int RPC1R0 = 0;
    sbit  RPC1R0_bit at RPC1R.B0;
    const register unsigned short int RPC1R1 = 1;
    sbit  RPC1R1_bit at RPC1R.B1;
    const register unsigned short int RPC1R2 = 2;
    sbit  RPC1R2_bit at RPC1R.B2;
    const register unsigned short int RPC1R3 = 3;
    sbit  RPC1R3_bit at RPC1R.B3;
sfr unsigned long   volatile RPC2R            absolute 0xBF80FB88;
    const register unsigned short int RPC2R0 = 0;
    sbit  RPC2R0_bit at RPC2R.B0;
    const register unsigned short int RPC2R1 = 1;
    sbit  RPC2R1_bit at RPC2R.B1;
    const register unsigned short int RPC2R2 = 2;
    sbit  RPC2R2_bit at RPC2R.B2;
    const register unsigned short int RPC2R3 = 3;
    sbit  RPC2R3_bit at RPC2R.B3;
sfr unsigned long   volatile RPC3R            absolute 0xBF80FB8C;
    const register unsigned short int RPC3R0 = 0;
    sbit  RPC3R0_bit at RPC3R.B0;
    const register unsigned short int RPC3R1 = 1;
    sbit  RPC3R1_bit at RPC3R.B1;
    const register unsigned short int RPC3R2 = 2;
    sbit  RPC3R2_bit at RPC3R.B2;
    const register unsigned short int RPC3R3 = 3;
    sbit  RPC3R3_bit at RPC3R.B3;
sfr unsigned long   volatile RPC4R            absolute 0xBF80FB90;
    const register unsigned short int RPC4R0 = 0;
    sbit  RPC4R0_bit at RPC4R.B0;
    const register unsigned short int RPC4R1 = 1;
    sbit  RPC4R1_bit at RPC4R.B1;
    const register unsigned short int RPC4R2 = 2;
    sbit  RPC4R2_bit at RPC4R.B2;
    const register unsigned short int RPC4R3 = 3;
    sbit  RPC4R3_bit at RPC4R.B3;
sfr unsigned long   volatile RPC5R            absolute 0xBF80FB94;
    const register unsigned short int RPC5R0 = 0;
    sbit  RPC5R0_bit at RPC5R.B0;
    const register unsigned short int RPC5R1 = 1;
    sbit  RPC5R1_bit at RPC5R.B1;
    const register unsigned short int RPC5R2 = 2;
    sbit  RPC5R2_bit at RPC5R.B2;
    const register unsigned short int RPC5R3 = 3;
    sbit  RPC5R3_bit at RPC5R.B3;
sfr unsigned long   volatile RPC6R            absolute 0xBF80FB98;
    const register unsigned short int RPC6R0 = 0;
    sbit  RPC6R0_bit at RPC6R.B0;
    const register unsigned short int RPC6R1 = 1;
    sbit  RPC6R1_bit at RPC6R.B1;
    const register unsigned short int RPC6R2 = 2;
    sbit  RPC6R2_bit at RPC6R.B2;
    const register unsigned short int RPC6R3 = 3;
    sbit  RPC6R3_bit at RPC6R.B3;
sfr unsigned long   volatile RPC7R            absolute 0xBF80FB9C;
    const register unsigned short int RPC7R0 = 0;
    sbit  RPC7R0_bit at RPC7R.B0;
    const register unsigned short int RPC7R1 = 1;
    sbit  RPC7R1_bit at RPC7R.B1;
    const register unsigned short int RPC7R2 = 2;
    sbit  RPC7R2_bit at RPC7R.B2;
    const register unsigned short int RPC7R3 = 3;
    sbit  RPC7R3_bit at RPC7R.B3;
sfr unsigned long   volatile RPC8R            absolute 0xBF80FBA0;
    const register unsigned short int RPC8R0 = 0;
    sbit  RPC8R0_bit at RPC8R.B0;
    const register unsigned short int RPC8R1 = 1;
    sbit  RPC8R1_bit at RPC8R.B1;
    const register unsigned short int RPC8R2 = 2;
    sbit  RPC8R2_bit at RPC8R.B2;
    const register unsigned short int RPC8R3 = 3;
    sbit  RPC8R3_bit at RPC8R.B3;
sfr unsigned long   volatile RPC9R            absolute 0xBF80FBA4;
    const register unsigned short int RPC9R0 = 0;
    sbit  RPC9R0_bit at RPC9R.B0;
    const register unsigned short int RPC9R1 = 1;
    sbit  RPC9R1_bit at RPC9R.B1;
    const register unsigned short int RPC9R2 = 2;
    sbit  RPC9R2_bit at RPC9R.B2;
    const register unsigned short int RPC9R3 = 3;
    sbit  RPC9R3_bit at RPC9R.B3;
sfr unsigned long   volatile RPC10R           absolute 0xBF80FBA8;
    const register unsigned short int RPC10R0 = 0;
    sbit  RPC10R0_bit at RPC10R.B0;
    const register unsigned short int RPC10R1 = 1;
    sbit  RPC10R1_bit at RPC10R.B1;
    const register unsigned short int RPC10R2 = 2;
    sbit  RPC10R2_bit at RPC10R.B2;
    const register unsigned short int RPC10R3 = 3;
    sbit  RPC10R3_bit at RPC10R.B3;
sfr unsigned long   volatile RPC11R           absolute 0xBF80FBAC;
    const register unsigned short int RPC11R0 = 0;
    sbit  RPC11R0_bit at RPC11R.B0;
    const register unsigned short int RPC11R1 = 1;
    sbit  RPC11R1_bit at RPC11R.B1;
    const register unsigned short int RPC11R2 = 2;
    sbit  RPC11R2_bit at RPC11R.B2;
    const register unsigned short int RPC11R3 = 3;
    sbit  RPC11R3_bit at RPC11R.B3;
sfr unsigned long   volatile RPC12R           absolute 0xBF80FBB0;
    const register unsigned short int RPC12R0 = 0;
    sbit  RPC12R0_bit at RPC12R.B0;
    const register unsigned short int RPC12R1 = 1;
    sbit  RPC12R1_bit at RPC12R.B1;
    const register unsigned short int RPC12R2 = 2;
    sbit  RPC12R2_bit at RPC12R.B2;
    const register unsigned short int RPC12R3 = 3;
    sbit  RPC12R3_bit at RPC12R.B3;
sfr unsigned long   volatile RPC13R           absolute 0xBF80FBB4;
    const register unsigned short int RPC13R0 = 0;
    sbit  RPC13R0_bit at RPC13R.B0;
    const register unsigned short int RPC13R1 = 1;
    sbit  RPC13R1_bit at RPC13R.B1;
    const register unsigned short int RPC13R2 = 2;
    sbit  RPC13R2_bit at RPC13R.B2;
    const register unsigned short int RPC13R3 = 3;
    sbit  RPC13R3_bit at RPC13R.B3;
sfr unsigned long   volatile RPC14R           absolute 0xBF80FBB8;
    const register unsigned short int RPC14R0 = 0;
    sbit  RPC14R0_bit at RPC14R.B0;
    const register unsigned short int RPC14R1 = 1;
    sbit  RPC14R1_bit at RPC14R.B1;
    const register unsigned short int RPC14R2 = 2;
    sbit  RPC14R2_bit at RPC14R.B2;
    const register unsigned short int RPC14R3 = 3;
    sbit  RPC14R3_bit at RPC14R.B3;
sfr unsigned long   volatile RPC15R           absolute 0xBF80FBBC;
    const register unsigned short int RPC15R0 = 0;
    sbit  RPC15R0_bit at RPC15R.B0;
    const register unsigned short int RPC15R1 = 1;
    sbit  RPC15R1_bit at RPC15R.B1;
    const register unsigned short int RPC15R2 = 2;
    sbit  RPC15R2_bit at RPC15R.B2;
    const register unsigned short int RPC15R3 = 3;
    sbit  RPC15R3_bit at RPC15R.B3;
sfr unsigned long   volatile RPD0R            absolute 0xBF80FBC0;
    const register unsigned short int RPD0R0 = 0;
    sbit  RPD0R0_bit at RPD0R.B0;
    const register unsigned short int RPD0R1 = 1;
    sbit  RPD0R1_bit at RPD0R.B1;
    const register unsigned short int RPD0R2 = 2;
    sbit  RPD0R2_bit at RPD0R.B2;
    const register unsigned short int RPD0R3 = 3;
    sbit  RPD0R3_bit at RPD0R.B3;
sfr unsigned long   volatile RPD1R            absolute 0xBF80FBC4;
    const register unsigned short int RPD1R0 = 0;
    sbit  RPD1R0_bit at RPD1R.B0;
    const register unsigned short int RPD1R1 = 1;
    sbit  RPD1R1_bit at RPD1R.B1;
    const register unsigned short int RPD1R2 = 2;
    sbit  RPD1R2_bit at RPD1R.B2;
    const register unsigned short int RPD1R3 = 3;
    sbit  RPD1R3_bit at RPD1R.B3;
sfr unsigned long   volatile RPD2R            absolute 0xBF80FBC8;
    const register unsigned short int RPD2R0 = 0;
    sbit  RPD2R0_bit at RPD2R.B0;
    const register unsigned short int RPD2R1 = 1;
    sbit  RPD2R1_bit at RPD2R.B1;
    const register unsigned short int RPD2R2 = 2;
    sbit  RPD2R2_bit at RPD2R.B2;
    const register unsigned short int RPD2R3 = 3;
    sbit  RPD2R3_bit at RPD2R.B3;
sfr unsigned long   volatile RPD3R            absolute 0xBF80FBCC;
    const register unsigned short int RPD3R0 = 0;
    sbit  RPD3R0_bit at RPD3R.B0;
    const register unsigned short int RPD3R1 = 1;
    sbit  RPD3R1_bit at RPD3R.B1;
    const register unsigned short int RPD3R2 = 2;
    sbit  RPD3R2_bit at RPD3R.B2;
    const register unsigned short int RPD3R3 = 3;
    sbit  RPD3R3_bit at RPD3R.B3;
sfr unsigned long   volatile RPD4R            absolute 0xBF80FBD0;
    const register unsigned short int RPD4R0 = 0;
    sbit  RPD4R0_bit at RPD4R.B0;
    const register unsigned short int RPD4R1 = 1;
    sbit  RPD4R1_bit at RPD4R.B1;
    const register unsigned short int RPD4R2 = 2;
    sbit  RPD4R2_bit at RPD4R.B2;
    const register unsigned short int RPD4R3 = 3;
    sbit  RPD4R3_bit at RPD4R.B3;
sfr unsigned long   volatile RPD5R            absolute 0xBF80FBD4;
    const register unsigned short int RPD5R0 = 0;
    sbit  RPD5R0_bit at RPD5R.B0;
    const register unsigned short int RPD5R1 = 1;
    sbit  RPD5R1_bit at RPD5R.B1;
    const register unsigned short int RPD5R2 = 2;
    sbit  RPD5R2_bit at RPD5R.B2;
    const register unsigned short int RPD5R3 = 3;
    sbit  RPD5R3_bit at RPD5R.B3;
sfr unsigned long   volatile RPD6R            absolute 0xBF80FBD8;
    const register unsigned short int RPD6R0 = 0;
    sbit  RPD6R0_bit at RPD6R.B0;
    const register unsigned short int RPD6R1 = 1;
    sbit  RPD6R1_bit at RPD6R.B1;
    const register unsigned short int RPD6R2 = 2;
    sbit  RPD6R2_bit at RPD6R.B2;
    const register unsigned short int RPD6R3 = 3;
    sbit  RPD6R3_bit at RPD6R.B3;
sfr unsigned long   volatile RPD7R            absolute 0xBF80FBDC;
    const register unsigned short int RPD7R0 = 0;
    sbit  RPD7R0_bit at RPD7R.B0;
    const register unsigned short int RPD7R1 = 1;
    sbit  RPD7R1_bit at RPD7R.B1;
    const register unsigned short int RPD7R2 = 2;
    sbit  RPD7R2_bit at RPD7R.B2;
    const register unsigned short int RPD7R3 = 3;
    sbit  RPD7R3_bit at RPD7R.B3;
sfr unsigned long   volatile RPD8R            absolute 0xBF80FBE0;
    const register unsigned short int RPD8R0 = 0;
    sbit  RPD8R0_bit at RPD8R.B0;
    const register unsigned short int RPD8R1 = 1;
    sbit  RPD8R1_bit at RPD8R.B1;
    const register unsigned short int RPD8R2 = 2;
    sbit  RPD8R2_bit at RPD8R.B2;
    const register unsigned short int RPD8R3 = 3;
    sbit  RPD8R3_bit at RPD8R.B3;
sfr unsigned long   volatile RPD9R            absolute 0xBF80FBE4;
    const register unsigned short int RPD9R0 = 0;
    sbit  RPD9R0_bit at RPD9R.B0;
    const register unsigned short int RPD9R1 = 1;
    sbit  RPD9R1_bit at RPD9R.B1;
    const register unsigned short int RPD9R2 = 2;
    sbit  RPD9R2_bit at RPD9R.B2;
    const register unsigned short int RPD9R3 = 3;
    sbit  RPD9R3_bit at RPD9R.B3;
sfr unsigned long   volatile RPD10R           absolute 0xBF80FBE8;
    const register unsigned short int RPD10R0 = 0;
    sbit  RPD10R0_bit at RPD10R.B0;
    const register unsigned short int RPD10R1 = 1;
    sbit  RPD10R1_bit at RPD10R.B1;
    const register unsigned short int RPD10R2 = 2;
    sbit  RPD10R2_bit at RPD10R.B2;
    const register unsigned short int RPD10R3 = 3;
    sbit  RPD10R3_bit at RPD10R.B3;
sfr unsigned long   volatile RPD11R           absolute 0xBF80FBEC;
    const register unsigned short int RPD11R0 = 0;
    sbit  RPD11R0_bit at RPD11R.B0;
    const register unsigned short int RPD11R1 = 1;
    sbit  RPD11R1_bit at RPD11R.B1;
    const register unsigned short int RPD11R2 = 2;
    sbit  RPD11R2_bit at RPD11R.B2;
    const register unsigned short int RPD11R3 = 3;
    sbit  RPD11R3_bit at RPD11R.B3;
sfr unsigned long   volatile RPD12R           absolute 0xBF80FBF0;
    const register unsigned short int RPD12R0 = 0;
    sbit  RPD12R0_bit at RPD12R.B0;
    const register unsigned short int RPD12R1 = 1;
    sbit  RPD12R1_bit at RPD12R.B1;
    const register unsigned short int RPD12R2 = 2;
    sbit  RPD12R2_bit at RPD12R.B2;
    const register unsigned short int RPD12R3 = 3;
    sbit  RPD12R3_bit at RPD12R.B3;
sfr unsigned long   volatile RPD13R           absolute 0xBF80FBF4;
    const register unsigned short int RPD13R0 = 0;
    sbit  RPD13R0_bit at RPD13R.B0;
    const register unsigned short int RPD13R1 = 1;
    sbit  RPD13R1_bit at RPD13R.B1;
    const register unsigned short int RPD13R2 = 2;
    sbit  RPD13R2_bit at RPD13R.B2;
    const register unsigned short int RPD13R3 = 3;
    sbit  RPD13R3_bit at RPD13R.B3;
sfr unsigned long   volatile RPD14R           absolute 0xBF80FBF8;
    const register unsigned short int RPD14R0 = 0;
    sbit  RPD14R0_bit at RPD14R.B0;
    const register unsigned short int RPD14R1 = 1;
    sbit  RPD14R1_bit at RPD14R.B1;
    const register unsigned short int RPD14R2 = 2;
    sbit  RPD14R2_bit at RPD14R.B2;
    const register unsigned short int RPD14R3 = 3;
    sbit  RPD14R3_bit at RPD14R.B3;
sfr unsigned long   volatile RPD15R           absolute 0xBF80FBFC;
    const register unsigned short int RPD15R0 = 0;
    sbit  RPD15R0_bit at RPD15R.B0;
    const register unsigned short int RPD15R1 = 1;
    sbit  RPD15R1_bit at RPD15R.B1;
    const register unsigned short int RPD15R2 = 2;
    sbit  RPD15R2_bit at RPD15R.B2;
    const register unsigned short int RPD15R3 = 3;
    sbit  RPD15R3_bit at RPD15R.B3;
sfr unsigned long   volatile RPE0R            absolute 0xBF80FC00;
    const register unsigned short int RPE0R0 = 0;
    sbit  RPE0R0_bit at RPE0R.B0;
    const register unsigned short int RPE0R1 = 1;
    sbit  RPE0R1_bit at RPE0R.B1;
    const register unsigned short int RPE0R2 = 2;
    sbit  RPE0R2_bit at RPE0R.B2;
    const register unsigned short int RPE0R3 = 3;
    sbit  RPE0R3_bit at RPE0R.B3;
sfr unsigned long   volatile RPE1R            absolute 0xBF80FC04;
    const register unsigned short int RPE1R0 = 0;
    sbit  RPE1R0_bit at RPE1R.B0;
    const register unsigned short int RPE1R1 = 1;
    sbit  RPE1R1_bit at RPE1R.B1;
    const register unsigned short int RPE1R2 = 2;
    sbit  RPE1R2_bit at RPE1R.B2;
    const register unsigned short int RPE1R3 = 3;
    sbit  RPE1R3_bit at RPE1R.B3;
sfr unsigned long   volatile RPE2R            absolute 0xBF80FC08;
    const register unsigned short int RPE2R0 = 0;
    sbit  RPE2R0_bit at RPE2R.B0;
    const register unsigned short int RPE2R1 = 1;
    sbit  RPE2R1_bit at RPE2R.B1;
    const register unsigned short int RPE2R2 = 2;
    sbit  RPE2R2_bit at RPE2R.B2;
    const register unsigned short int RPE2R3 = 3;
    sbit  RPE2R3_bit at RPE2R.B3;
sfr unsigned long   volatile RPE3R            absolute 0xBF80FC0C;
    const register unsigned short int RPE3R0 = 0;
    sbit  RPE3R0_bit at RPE3R.B0;
    const register unsigned short int RPE3R1 = 1;
    sbit  RPE3R1_bit at RPE3R.B1;
    const register unsigned short int RPE3R2 = 2;
    sbit  RPE3R2_bit at RPE3R.B2;
    const register unsigned short int RPE3R3 = 3;
    sbit  RPE3R3_bit at RPE3R.B3;
sfr unsigned long   volatile RPE4R            absolute 0xBF80FC10;
    const register unsigned short int RPE4R0 = 0;
    sbit  RPE4R0_bit at RPE4R.B0;
    const register unsigned short int RPE4R1 = 1;
    sbit  RPE4R1_bit at RPE4R.B1;
    const register unsigned short int RPE4R2 = 2;
    sbit  RPE4R2_bit at RPE4R.B2;
    const register unsigned short int RPE4R3 = 3;
    sbit  RPE4R3_bit at RPE4R.B3;
sfr unsigned long   volatile RPE5R            absolute 0xBF80FC14;
    const register unsigned short int RPE5R0 = 0;
    sbit  RPE5R0_bit at RPE5R.B0;
    const register unsigned short int RPE5R1 = 1;
    sbit  RPE5R1_bit at RPE5R.B1;
    const register unsigned short int RPE5R2 = 2;
    sbit  RPE5R2_bit at RPE5R.B2;
    const register unsigned short int RPE5R3 = 3;
    sbit  RPE5R3_bit at RPE5R.B3;
sfr unsigned long   volatile RPE6R            absolute 0xBF80FC18;
    const register unsigned short int RPE6R0 = 0;
    sbit  RPE6R0_bit at RPE6R.B0;
    const register unsigned short int RPE6R1 = 1;
    sbit  RPE6R1_bit at RPE6R.B1;
    const register unsigned short int RPE6R2 = 2;
    sbit  RPE6R2_bit at RPE6R.B2;
    const register unsigned short int RPE6R3 = 3;
    sbit  RPE6R3_bit at RPE6R.B3;
sfr unsigned long   volatile RPE7R            absolute 0xBF80FC1C;
    const register unsigned short int RPE7R0 = 0;
    sbit  RPE7R0_bit at RPE7R.B0;
    const register unsigned short int RPE7R1 = 1;
    sbit  RPE7R1_bit at RPE7R.B1;
    const register unsigned short int RPE7R2 = 2;
    sbit  RPE7R2_bit at RPE7R.B2;
    const register unsigned short int RPE7R3 = 3;
    sbit  RPE7R3_bit at RPE7R.B3;
sfr unsigned long   volatile RPE8R            absolute 0xBF80FC20;
    const register unsigned short int RPE8R0 = 0;
    sbit  RPE8R0_bit at RPE8R.B0;
    const register unsigned short int RPE8R1 = 1;
    sbit  RPE8R1_bit at RPE8R.B1;
    const register unsigned short int RPE8R2 = 2;
    sbit  RPE8R2_bit at RPE8R.B2;
    const register unsigned short int RPE8R3 = 3;
    sbit  RPE8R3_bit at RPE8R.B3;
sfr unsigned long   volatile RPE9R            absolute 0xBF80FC24;
    const register unsigned short int RPE9R0 = 0;
    sbit  RPE9R0_bit at RPE9R.B0;
    const register unsigned short int RPE9R1 = 1;
    sbit  RPE9R1_bit at RPE9R.B1;
    const register unsigned short int RPE9R2 = 2;
    sbit  RPE9R2_bit at RPE9R.B2;
    const register unsigned short int RPE9R3 = 3;
    sbit  RPE9R3_bit at RPE9R.B3;
sfr unsigned long   volatile RPE10R           absolute 0xBF80FC28;
    const register unsigned short int RPE10R0 = 0;
    sbit  RPE10R0_bit at RPE10R.B0;
    const register unsigned short int RPE10R1 = 1;
    sbit  RPE10R1_bit at RPE10R.B1;
    const register unsigned short int RPE10R2 = 2;
    sbit  RPE10R2_bit at RPE10R.B2;
    const register unsigned short int RPE10R3 = 3;
    sbit  RPE10R3_bit at RPE10R.B3;
sfr unsigned long   volatile RPE11R           absolute 0xBF80FC2C;
    const register unsigned short int RPE11R0 = 0;
    sbit  RPE11R0_bit at RPE11R.B0;
    const register unsigned short int RPE11R1 = 1;
    sbit  RPE11R1_bit at RPE11R.B1;
    const register unsigned short int RPE11R2 = 2;
    sbit  RPE11R2_bit at RPE11R.B2;
    const register unsigned short int RPE11R3 = 3;
    sbit  RPE11R3_bit at RPE11R.B3;
sfr unsigned long   volatile RPE12R           absolute 0xBF80FC30;
    const register unsigned short int RPE12R0 = 0;
    sbit  RPE12R0_bit at RPE12R.B0;
    const register unsigned short int RPE12R1 = 1;
    sbit  RPE12R1_bit at RPE12R.B1;
    const register unsigned short int RPE12R2 = 2;
    sbit  RPE12R2_bit at RPE12R.B2;
    const register unsigned short int RPE12R3 = 3;
    sbit  RPE12R3_bit at RPE12R.B3;
sfr unsigned long   volatile RPE13R           absolute 0xBF80FC34;
    const register unsigned short int RPE13R0 = 0;
    sbit  RPE13R0_bit at RPE13R.B0;
    const register unsigned short int RPE13R1 = 1;
    sbit  RPE13R1_bit at RPE13R.B1;
    const register unsigned short int RPE13R2 = 2;
    sbit  RPE13R2_bit at RPE13R.B2;
    const register unsigned short int RPE13R3 = 3;
    sbit  RPE13R3_bit at RPE13R.B3;
sfr unsigned long   volatile RPE14R           absolute 0xBF80FC38;
    const register unsigned short int RPE14R0 = 0;
    sbit  RPE14R0_bit at RPE14R.B0;
    const register unsigned short int RPE14R1 = 1;
    sbit  RPE14R1_bit at RPE14R.B1;
    const register unsigned short int RPE14R2 = 2;
    sbit  RPE14R2_bit at RPE14R.B2;
    const register unsigned short int RPE14R3 = 3;
    sbit  RPE14R3_bit at RPE14R.B3;
sfr unsigned long   volatile RPE15R           absolute 0xBF80FC3C;
    const register unsigned short int RPE15R0 = 0;
    sbit  RPE15R0_bit at RPE15R.B0;
    const register unsigned short int RPE15R1 = 1;
    sbit  RPE15R1_bit at RPE15R.B1;
    const register unsigned short int RPE15R2 = 2;
    sbit  RPE15R2_bit at RPE15R.B2;
    const register unsigned short int RPE15R3 = 3;
    sbit  RPE15R3_bit at RPE15R.B3;
sfr unsigned long   volatile RPF0R            absolute 0xBF80FC40;
    const register unsigned short int RPF0R0 = 0;
    sbit  RPF0R0_bit at RPF0R.B0;
    const register unsigned short int RPF0R1 = 1;
    sbit  RPF0R1_bit at RPF0R.B1;
    const register unsigned short int RPF0R2 = 2;
    sbit  RPF0R2_bit at RPF0R.B2;
    const register unsigned short int RPF0R3 = 3;
    sbit  RPF0R3_bit at RPF0R.B3;
sfr unsigned long   volatile RPF1R            absolute 0xBF80FC44;
    const register unsigned short int RPF1R0 = 0;
    sbit  RPF1R0_bit at RPF1R.B0;
    const register unsigned short int RPF1R1 = 1;
    sbit  RPF1R1_bit at RPF1R.B1;
    const register unsigned short int RPF1R2 = 2;
    sbit  RPF1R2_bit at RPF1R.B2;
    const register unsigned short int RPF1R3 = 3;
    sbit  RPF1R3_bit at RPF1R.B3;
sfr unsigned long   volatile RPF2R            absolute 0xBF80FC48;
    const register unsigned short int RPF2R0 = 0;
    sbit  RPF2R0_bit at RPF2R.B0;
    const register unsigned short int RPF2R1 = 1;
    sbit  RPF2R1_bit at RPF2R.B1;
    const register unsigned short int RPF2R2 = 2;
    sbit  RPF2R2_bit at RPF2R.B2;
    const register unsigned short int RPF2R3 = 3;
    sbit  RPF2R3_bit at RPF2R.B3;
sfr unsigned long   volatile RPF3R            absolute 0xBF80FC4C;
    const register unsigned short int RPF3R0 = 0;
    sbit  RPF3R0_bit at RPF3R.B0;
    const register unsigned short int RPF3R1 = 1;
    sbit  RPF3R1_bit at RPF3R.B1;
    const register unsigned short int RPF3R2 = 2;
    sbit  RPF3R2_bit at RPF3R.B2;
    const register unsigned short int RPF3R3 = 3;
    sbit  RPF3R3_bit at RPF3R.B3;
sfr unsigned long   volatile RPF4R            absolute 0xBF80FC50;
    const register unsigned short int RPF4R0 = 0;
    sbit  RPF4R0_bit at RPF4R.B0;
    const register unsigned short int RPF4R1 = 1;
    sbit  RPF4R1_bit at RPF4R.B1;
    const register unsigned short int RPF4R2 = 2;
    sbit  RPF4R2_bit at RPF4R.B2;
    const register unsigned short int RPF4R3 = 3;
    sbit  RPF4R3_bit at RPF4R.B3;
sfr unsigned long   volatile RPF5R            absolute 0xBF80FC54;
    const register unsigned short int RPF5R0 = 0;
    sbit  RPF5R0_bit at RPF5R.B0;
    const register unsigned short int RPF5R1 = 1;
    sbit  RPF5R1_bit at RPF5R.B1;
    const register unsigned short int RPF5R2 = 2;
    sbit  RPF5R2_bit at RPF5R.B2;
    const register unsigned short int RPF5R3 = 3;
    sbit  RPF5R3_bit at RPF5R.B3;
sfr unsigned long   volatile RPF6R            absolute 0xBF80FC58;
    const register unsigned short int RPF6R0 = 0;
    sbit  RPF6R0_bit at RPF6R.B0;
    const register unsigned short int RPF6R1 = 1;
    sbit  RPF6R1_bit at RPF6R.B1;
    const register unsigned short int RPF6R2 = 2;
    sbit  RPF6R2_bit at RPF6R.B2;
    const register unsigned short int RPF6R3 = 3;
    sbit  RPF6R3_bit at RPF6R.B3;
sfr unsigned long   volatile RPF7R            absolute 0xBF80FC5C;
    const register unsigned short int RPF7R0 = 0;
    sbit  RPF7R0_bit at RPF7R.B0;
    const register unsigned short int RPF7R1 = 1;
    sbit  RPF7R1_bit at RPF7R.B1;
    const register unsigned short int RPF7R2 = 2;
    sbit  RPF7R2_bit at RPF7R.B2;
    const register unsigned short int RPF7R3 = 3;
    sbit  RPF7R3_bit at RPF7R.B3;
sfr unsigned long   volatile RPF8R            absolute 0xBF80FC60;
    const register unsigned short int RPF8R0 = 0;
    sbit  RPF8R0_bit at RPF8R.B0;
    const register unsigned short int RPF8R1 = 1;
    sbit  RPF8R1_bit at RPF8R.B1;
    const register unsigned short int RPF8R2 = 2;
    sbit  RPF8R2_bit at RPF8R.B2;
    const register unsigned short int RPF8R3 = 3;
    sbit  RPF8R3_bit at RPF8R.B3;
sfr unsigned long   volatile RPF9R            absolute 0xBF80FC64;
    const register unsigned short int RPF9R0 = 0;
    sbit  RPF9R0_bit at RPF9R.B0;
    const register unsigned short int RPF9R1 = 1;
    sbit  RPF9R1_bit at RPF9R.B1;
    const register unsigned short int RPF9R2 = 2;
    sbit  RPF9R2_bit at RPF9R.B2;
    const register unsigned short int RPF9R3 = 3;
    sbit  RPF9R3_bit at RPF9R.B3;
sfr unsigned long   volatile RPF10R           absolute 0xBF80FC68;
    const register unsigned short int RPF10R0 = 0;
    sbit  RPF10R0_bit at RPF10R.B0;
    const register unsigned short int RPF10R1 = 1;
    sbit  RPF10R1_bit at RPF10R.B1;
    const register unsigned short int RPF10R2 = 2;
    sbit  RPF10R2_bit at RPF10R.B2;
    const register unsigned short int RPF10R3 = 3;
    sbit  RPF10R3_bit at RPF10R.B3;
sfr unsigned long   volatile RPF11R           absolute 0xBF80FC6C;
    const register unsigned short int RPF11R0 = 0;
    sbit  RPF11R0_bit at RPF11R.B0;
    const register unsigned short int RPF11R1 = 1;
    sbit  RPF11R1_bit at RPF11R.B1;
    const register unsigned short int RPF11R2 = 2;
    sbit  RPF11R2_bit at RPF11R.B2;
    const register unsigned short int RPF11R3 = 3;
    sbit  RPF11R3_bit at RPF11R.B3;
sfr unsigned long   volatile RPF12R           absolute 0xBF80FC70;
    const register unsigned short int RPF12R0 = 0;
    sbit  RPF12R0_bit at RPF12R.B0;
    const register unsigned short int RPF12R1 = 1;
    sbit  RPF12R1_bit at RPF12R.B1;
    const register unsigned short int RPF12R2 = 2;
    sbit  RPF12R2_bit at RPF12R.B2;
    const register unsigned short int RPF12R3 = 3;
    sbit  RPF12R3_bit at RPF12R.B3;
sfr unsigned long   volatile RPF13R           absolute 0xBF80FC74;
    const register unsigned short int RPF13R0 = 0;
    sbit  RPF13R0_bit at RPF13R.B0;
    const register unsigned short int RPF13R1 = 1;
    sbit  RPF13R1_bit at RPF13R.B1;
    const register unsigned short int RPF13R2 = 2;
    sbit  RPF13R2_bit at RPF13R.B2;
    const register unsigned short int RPF13R3 = 3;
    sbit  RPF13R3_bit at RPF13R.B3;
sfr unsigned long   volatile RPF14R           absolute 0xBF80FC78;
    const register unsigned short int RPF14R0 = 0;
    sbit  RPF14R0_bit at RPF14R.B0;
    const register unsigned short int RPF14R1 = 1;
    sbit  RPF14R1_bit at RPF14R.B1;
    const register unsigned short int RPF14R2 = 2;
    sbit  RPF14R2_bit at RPF14R.B2;
    const register unsigned short int RPF14R3 = 3;
    sbit  RPF14R3_bit at RPF14R.B3;
sfr unsigned long   volatile RPF15R           absolute 0xBF80FC7C;
    const register unsigned short int RPF15R0 = 0;
    sbit  RPF15R0_bit at RPF15R.B0;
    const register unsigned short int RPF15R1 = 1;
    sbit  RPF15R1_bit at RPF15R.B1;
    const register unsigned short int RPF15R2 = 2;
    sbit  RPF15R2_bit at RPF15R.B2;
    const register unsigned short int RPF15R3 = 3;
    sbit  RPF15R3_bit at RPF15R.B3;
sfr unsigned long   volatile RPG0R            absolute 0xBF80FC80;
    const register unsigned short int RPG0R0 = 0;
    sbit  RPG0R0_bit at RPG0R.B0;
    const register unsigned short int RPG0R1 = 1;
    sbit  RPG0R1_bit at RPG0R.B1;
    const register unsigned short int RPG0R2 = 2;
    sbit  RPG0R2_bit at RPG0R.B2;
    const register unsigned short int RPG0R3 = 3;
    sbit  RPG0R3_bit at RPG0R.B3;
sfr unsigned long   volatile RPG1R            absolute 0xBF80FC84;
    const register unsigned short int RPG1R0 = 0;
    sbit  RPG1R0_bit at RPG1R.B0;
    const register unsigned short int RPG1R1 = 1;
    sbit  RPG1R1_bit at RPG1R.B1;
    const register unsigned short int RPG1R2 = 2;
    sbit  RPG1R2_bit at RPG1R.B2;
    const register unsigned short int RPG1R3 = 3;
    sbit  RPG1R3_bit at RPG1R.B3;
sfr unsigned long   volatile RPG2R            absolute 0xBF80FC88;
    const register unsigned short int RPG2R0 = 0;
    sbit  RPG2R0_bit at RPG2R.B0;
    const register unsigned short int RPG2R1 = 1;
    sbit  RPG2R1_bit at RPG2R.B1;
    const register unsigned short int RPG2R2 = 2;
    sbit  RPG2R2_bit at RPG2R.B2;
    const register unsigned short int RPG2R3 = 3;
    sbit  RPG2R3_bit at RPG2R.B3;
sfr unsigned long   volatile RPG3R            absolute 0xBF80FC8C;
    const register unsigned short int RPG3R0 = 0;
    sbit  RPG3R0_bit at RPG3R.B0;
    const register unsigned short int RPG3R1 = 1;
    sbit  RPG3R1_bit at RPG3R.B1;
    const register unsigned short int RPG3R2 = 2;
    sbit  RPG3R2_bit at RPG3R.B2;
    const register unsigned short int RPG3R3 = 3;
    sbit  RPG3R3_bit at RPG3R.B3;
sfr unsigned long   volatile RPG4R            absolute 0xBF80FC90;
    const register unsigned short int RPG4R0 = 0;
    sbit  RPG4R0_bit at RPG4R.B0;
    const register unsigned short int RPG4R1 = 1;
    sbit  RPG4R1_bit at RPG4R.B1;
    const register unsigned short int RPG4R2 = 2;
    sbit  RPG4R2_bit at RPG4R.B2;
    const register unsigned short int RPG4R3 = 3;
    sbit  RPG4R3_bit at RPG4R.B3;
sfr unsigned long   volatile RPG5R            absolute 0xBF80FC94;
    const register unsigned short int RPG5R0 = 0;
    sbit  RPG5R0_bit at RPG5R.B0;
    const register unsigned short int RPG5R1 = 1;
    sbit  RPG5R1_bit at RPG5R.B1;
    const register unsigned short int RPG5R2 = 2;
    sbit  RPG5R2_bit at RPG5R.B2;
    const register unsigned short int RPG5R3 = 3;
    sbit  RPG5R3_bit at RPG5R.B3;
sfr unsigned long   volatile RPG6R            absolute 0xBF80FC98;
    const register unsigned short int RPG6R0 = 0;
    sbit  RPG6R0_bit at RPG6R.B0;
    const register unsigned short int RPG6R1 = 1;
    sbit  RPG6R1_bit at RPG6R.B1;
    const register unsigned short int RPG6R2 = 2;
    sbit  RPG6R2_bit at RPG6R.B2;
    const register unsigned short int RPG6R3 = 3;
    sbit  RPG6R3_bit at RPG6R.B3;
sfr unsigned long   volatile RPG7R            absolute 0xBF80FC9C;
    const register unsigned short int RPG7R0 = 0;
    sbit  RPG7R0_bit at RPG7R.B0;
    const register unsigned short int RPG7R1 = 1;
    sbit  RPG7R1_bit at RPG7R.B1;
    const register unsigned short int RPG7R2 = 2;
    sbit  RPG7R2_bit at RPG7R.B2;
    const register unsigned short int RPG7R3 = 3;
    sbit  RPG7R3_bit at RPG7R.B3;
sfr unsigned long   volatile RPG8R            absolute 0xBF80FCA0;
    const register unsigned short int RPG8R0 = 0;
    sbit  RPG8R0_bit at RPG8R.B0;
    const register unsigned short int RPG8R1 = 1;
    sbit  RPG8R1_bit at RPG8R.B1;
    const register unsigned short int RPG8R2 = 2;
    sbit  RPG8R2_bit at RPG8R.B2;
    const register unsigned short int RPG8R3 = 3;
    sbit  RPG8R3_bit at RPG8R.B3;
sfr unsigned long   volatile RPG9R            absolute 0xBF80FCA4;
    const register unsigned short int RPG9R0 = 0;
    sbit  RPG9R0_bit at RPG9R.B0;
    const register unsigned short int RPG9R1 = 1;
    sbit  RPG9R1_bit at RPG9R.B1;
    const register unsigned short int RPG9R2 = 2;
    sbit  RPG9R2_bit at RPG9R.B2;
    const register unsigned short int RPG9R3 = 3;
    sbit  RPG9R3_bit at RPG9R.B3;
sfr unsigned long   volatile RPG10R           absolute 0xBF80FCA8;
    const register unsigned short int RPG10R0 = 0;
    sbit  RPG10R0_bit at RPG10R.B0;
    const register unsigned short int RPG10R1 = 1;
    sbit  RPG10R1_bit at RPG10R.B1;
    const register unsigned short int RPG10R2 = 2;
    sbit  RPG10R2_bit at RPG10R.B2;
    const register unsigned short int RPG10R3 = 3;
    sbit  RPG10R3_bit at RPG10R.B3;
sfr unsigned long   volatile RPG11R           absolute 0xBF80FCAC;
    const register unsigned short int RPG11R0 = 0;
    sbit  RPG11R0_bit at RPG11R.B0;
    const register unsigned short int RPG11R1 = 1;
    sbit  RPG11R1_bit at RPG11R.B1;
    const register unsigned short int RPG11R2 = 2;
    sbit  RPG11R2_bit at RPG11R.B2;
    const register unsigned short int RPG11R3 = 3;
    sbit  RPG11R3_bit at RPG11R.B3;
sfr unsigned long   volatile RPG12R           absolute 0xBF80FCB0;
    const register unsigned short int RPG12R0 = 0;
    sbit  RPG12R0_bit at RPG12R.B0;
    const register unsigned short int RPG12R1 = 1;
    sbit  RPG12R1_bit at RPG12R.B1;
    const register unsigned short int RPG12R2 = 2;
    sbit  RPG12R2_bit at RPG12R.B2;
    const register unsigned short int RPG12R3 = 3;
    sbit  RPG12R3_bit at RPG12R.B3;
sfr unsigned long   volatile RPG13R           absolute 0xBF80FCB4;
    const register unsigned short int RPG13R0 = 0;
    sbit  RPG13R0_bit at RPG13R.B0;
    const register unsigned short int RPG13R1 = 1;
    sbit  RPG13R1_bit at RPG13R.B1;
    const register unsigned short int RPG13R2 = 2;
    sbit  RPG13R2_bit at RPG13R.B2;
    const register unsigned short int RPG13R3 = 3;
    sbit  RPG13R3_bit at RPG13R.B3;
sfr unsigned long   volatile RPG14R           absolute 0xBF80FCB8;
    const register unsigned short int RPG14R0 = 0;
    sbit  RPG14R0_bit at RPG14R.B0;
    const register unsigned short int RPG14R1 = 1;
    sbit  RPG14R1_bit at RPG14R.B1;
    const register unsigned short int RPG14R2 = 2;
    sbit  RPG14R2_bit at RPG14R.B2;
    const register unsigned short int RPG14R3 = 3;
    sbit  RPG14R3_bit at RPG14R.B3;
sfr unsigned long   volatile RPG15R           absolute 0xBF80FCBC;
    const register unsigned short int RPG15R0 = 0;
    sbit  RPG15R0_bit at RPG15R.B0;
    const register unsigned short int RPG15R1 = 1;
    sbit  RPG15R1_bit at RPG15R.B1;
    const register unsigned short int RPG15R2 = 2;
    sbit  RPG15R2_bit at RPG15R.B2;
    const register unsigned short int RPG15R3 = 3;
    sbit  RPG15R3_bit at RPG15R.B3;
sfr atomic unsigned long   volatile INTCON           absolute 0xBF881000;
    const register unsigned short int INT0EP = 0;
    sbit  INT0EP_bit at INTCON.B0;
    const register unsigned short int INT1EP = 1;
    sbit  INT1EP_bit at INTCON.B1;
    const register unsigned short int INT2EP = 2;
    sbit  INT2EP_bit at INTCON.B2;
    const register unsigned short int INT3EP = 3;
    sbit  INT3EP_bit at INTCON.B3;
    const register unsigned short int INT4EP = 4;
    sbit  INT4EP_bit at INTCON.B4;
    const register unsigned short int TPC0 = 8;
    sbit  TPC0_bit at INTCON.B8;
    const register unsigned short int TPC1 = 9;
    sbit  TPC1_bit at INTCON.B9;
    const register unsigned short int TPC2 = 10;
    sbit  TPC2_bit at INTCON.B10;
    const register unsigned short int MVEC = 12;
    sbit  MVEC_bit at INTCON.B12;
    const register unsigned short int SS0 = 16;
    sbit  SS0_bit at INTCON.B16;
sfr unsigned long   volatile INTCONCLR        absolute 0xBF881004;
sfr unsigned long   volatile INTCONSET        absolute 0xBF881008;
sfr unsigned long   volatile INTCONINV        absolute 0xBF88100C;
sfr unsigned long   volatile INTSTAT          absolute 0xBF881010;
    const register unsigned short int VEC0 = 0;
    sbit  VEC0_bit at INTSTAT.B0;
    const register unsigned short int VEC1 = 1;
    sbit  VEC1_bit at INTSTAT.B1;
    const register unsigned short int VEC2 = 2;
    sbit  VEC2_bit at INTSTAT.B2;
    const register unsigned short int VEC3 = 3;
    sbit  VEC3_bit at INTSTAT.B3;
    const register unsigned short int VEC4 = 4;
    sbit  VEC4_bit at INTSTAT.B4;
    const register unsigned short int VEC5 = 5;
    sbit  VEC5_bit at INTSTAT.B5;
    const register unsigned short int SRIPL0 = 8;
    sbit  SRIPL0_bit at INTSTAT.B8;
    const register unsigned short int SRIPL1 = 9;
    sbit  SRIPL1_bit at INTSTAT.B9;
    const register unsigned short int SRIPL2 = 10;
    sbit  SRIPL2_bit at INTSTAT.B10;
sfr atomic unsigned long   volatile IPTMR            absolute 0xBF881020;
sfr unsigned long   volatile IPTMRCLR         absolute 0xBF881024;
sfr unsigned long   volatile IPTMRSET         absolute 0xBF881028;
sfr unsigned long   volatile IPTMRINV         absolute 0xBF88102C;
sfr atomic unsigned long   volatile IFS0             absolute 0xBF881030;
    const register unsigned short int CTIF = 0;
    sbit  CTIF_bit at IFS0.B0;
    const register unsigned short int CS0IF = 1;
    sbit  CS0IF_bit at IFS0.B1;
    const register unsigned short int CS1IF = 2;
    sbit  CS1IF_bit at IFS0.B2;
    const register unsigned short int INT0IF = 3;
    sbit  INT0IF_bit at IFS0.B3;
    const register unsigned short int T1IF = 4;
    sbit  T1IF_bit at IFS0.B4;
    const register unsigned short int IC1EIF = 5;
    sbit  IC1EIF_bit at IFS0.B5;
    const register unsigned short int IC1IF = 6;
    sbit  IC1IF_bit at IFS0.B6;
    const register unsigned short int OC1IF = 7;
    sbit  OC1IF_bit at IFS0.B7;
    const register unsigned short int INT1IF = 8;
    sbit  INT1IF_bit at IFS0.B8;
    const register unsigned short int T2IF = 9;
    sbit  T2IF_bit at IFS0.B9;
    const register unsigned short int IC2EIF = 10;
    sbit  IC2EIF_bit at IFS0.B10;
    const register unsigned short int IC2IF = 11;
    sbit  IC2IF_bit at IFS0.B11;
    const register unsigned short int OC2IF = 12;
    sbit  OC2IF_bit at IFS0.B12;
    const register unsigned short int INT2IF = 13;
    sbit  INT2IF_bit at IFS0.B13;
    const register unsigned short int T3IF = 14;
    sbit  T3IF_bit at IFS0.B14;
    const register unsigned short int IC3EIF = 15;
    sbit  IC3EIF_bit at IFS0.B15;
    const register unsigned short int IC3IF = 16;
    sbit  IC3IF_bit at IFS0.B16;
    const register unsigned short int OC3IF = 17;
    sbit  OC3IF_bit at IFS0.B17;
    const register unsigned short int INT3IF = 18;
    sbit  INT3IF_bit at IFS0.B18;
    const register unsigned short int T4IF = 19;
    sbit  T4IF_bit at IFS0.B19;
    const register unsigned short int IC4EIF = 20;
    sbit  IC4EIF_bit at IFS0.B20;
    const register unsigned short int IC4IF = 21;
    sbit  IC4IF_bit at IFS0.B21;
    const register unsigned short int OC4IF = 22;
    sbit  OC4IF_bit at IFS0.B22;
    const register unsigned short int INT4IF = 23;
    sbit  INT4IF_bit at IFS0.B23;
    const register unsigned short int T5IF = 24;
    sbit  T5IF_bit at IFS0.B24;
    const register unsigned short int IC5EIF = 25;
    sbit  IC5EIF_bit at IFS0.B25;
    const register unsigned short int IC5IF = 26;
    sbit  IC5IF_bit at IFS0.B26;
    const register unsigned short int OC5IF = 27;
    sbit  OC5IF_bit at IFS0.B27;
    const register unsigned short int AD1IF = 28;
    sbit  AD1IF_bit at IFS0.B28;
    const register unsigned short int FSCMIF = 29;
    sbit  FSCMIF_bit at IFS0.B29;
    const register unsigned short int RTCCIF = 30;
    sbit  RTCCIF_bit at IFS0.B30;
    const register unsigned short int FCEIF = 31;
    sbit  FCEIF_bit at IFS0.B31;
sfr unsigned long   volatile IFS0CLR          absolute 0xBF881034;
sfr unsigned long   volatile IFS0SET          absolute 0xBF881038;
sfr unsigned long   volatile IFS0INV          absolute 0xBF88103C;
sfr atomic unsigned long   volatile IFS1             absolute 0xBF881040;
    const register unsigned short int CMP1IF = 0;
    sbit  CMP1IF_bit at IFS1.B0;
    const register unsigned short int CMP2IF = 1;
    sbit  CMP2IF_bit at IFS1.B1;
    const register unsigned short int USBIF = 2;
    sbit  USBIF_bit at IFS1.B2;
    const register unsigned short int SPI1EIF = 3;
    sbit  SPI1EIF_bit at IFS1.B3;
    const register unsigned short int SPI1RXIF = 4;
    sbit  SPI1RXIF_bit at IFS1.B4;
    const register unsigned short int SPI1TXIF = 5;
    sbit  SPI1TXIF_bit at IFS1.B5;
    const register unsigned short int U1EIF = 6;
    sbit  U1EIF_bit at IFS1.B6;
    const register unsigned short int U1RXIF = 7;
    sbit  U1RXIF_bit at IFS1.B7;
    const register unsigned short int U1TXIF = 8;
    sbit  U1TXIF_bit at IFS1.B8;
    const register unsigned short int I2C1BIF = 9;
    sbit  I2C1BIF_bit at IFS1.B9;
    const register unsigned short int I2C1SIF = 10;
    sbit  I2C1SIF_bit at IFS1.B10;
    const register unsigned short int I2C1MIF = 11;
    sbit  I2C1MIF_bit at IFS1.B11;
    const register unsigned short int CNAIF = 12;
    sbit  CNAIF_bit at IFS1.B12;
    const register unsigned short int CNBIF = 13;
    sbit  CNBIF_bit at IFS1.B13;
    const register unsigned short int CNCIF = 14;
    sbit  CNCIF_bit at IFS1.B14;
    const register unsigned short int CNDIF = 15;
    sbit  CNDIF_bit at IFS1.B15;
    const register unsigned short int CNEIF = 16;
    sbit  CNEIF_bit at IFS1.B16;
    const register unsigned short int CNFIF = 17;
    sbit  CNFIF_bit at IFS1.B17;
    const register unsigned short int CNGIF = 18;
    sbit  CNGIF_bit at IFS1.B18;
    const register unsigned short int PMPIF = 19;
    sbit  PMPIF_bit at IFS1.B19;
    const register unsigned short int PMPEIF = 20;
    sbit  PMPEIF_bit at IFS1.B20;
    const register unsigned short int SPI2EIF = 21;
    sbit  SPI2EIF_bit at IFS1.B21;
    const register unsigned short int SPI2RXIF = 22;
    sbit  SPI2RXIF_bit at IFS1.B22;
    const register unsigned short int SPI2TXIF = 23;
    sbit  SPI2TXIF_bit at IFS1.B23;
    const register unsigned short int U2EIF = 24;
    sbit  U2EIF_bit at IFS1.B24;
    const register unsigned short int U2RXIF = 25;
    sbit  U2RXIF_bit at IFS1.B25;
    const register unsigned short int U2TXIF = 26;
    sbit  U2TXIF_bit at IFS1.B26;
    const register unsigned short int I2C2BIF = 27;
    sbit  I2C2BIF_bit at IFS1.B27;
    const register unsigned short int I2C2SIF = 28;
    sbit  I2C2SIF_bit at IFS1.B28;
    const register unsigned short int I2C2MIF = 29;
    sbit  I2C2MIF_bit at IFS1.B29;
    const register unsigned short int U3EIF = 30;
    sbit  U3EIF_bit at IFS1.B30;
    const register unsigned short int U3RXIF = 31;
    sbit  U3RXIF_bit at IFS1.B31;
sfr unsigned long   volatile IFS1CLR          absolute 0xBF881044;
sfr unsigned long   volatile IFS1SET          absolute 0xBF881048;
sfr unsigned long   volatile IFS1INV          absolute 0xBF88104C;
sfr atomic unsigned long   volatile IFS2             absolute 0xBF881050;
    const register unsigned short int U3TXIF = 0;
    sbit  U3TXIF_bit at IFS2.B0;
    const register unsigned short int U4EIF = 1;
    sbit  U4EIF_bit at IFS2.B1;
    const register unsigned short int U4RXIF = 2;
    sbit  U4RXIF_bit at IFS2.B2;
    const register unsigned short int U4TXIF = 3;
    sbit  U4TXIF_bit at IFS2.B3;
    const register unsigned short int CTMUIF = 7;
    sbit  CTMUIF_bit at IFS2.B7;
    const register unsigned short int DMA0IF = 8;
    sbit  DMA0IF_bit at IFS2.B8;
    const register unsigned short int DMA1IF = 9;
    sbit  DMA1IF_bit at IFS2.B9;
    const register unsigned short int DMA2IF = 10;
    sbit  DMA2IF_bit at IFS2.B10;
    const register unsigned short int DMA3IF = 11;
    sbit  DMA3IF_bit at IFS2.B11;
    const register unsigned short int CMP3IF = 12;
    sbit  CMP3IF_bit at IFS2.B12;
    const register unsigned short int CAN1IF = 13;
    sbit  CAN1IF_bit at IFS2.B13;
    const register unsigned short int SPI3EIF = 14;
    sbit  SPI3EIF_bit at IFS2.B14;
    const register unsigned short int SPI3RXIF = 15;
    sbit  SPI3RXIF_bit at IFS2.B15;
    const register unsigned short int SPI3TXIF = 16;
    sbit  SPI3TXIF_bit at IFS2.B16;
sfr unsigned long   volatile IFS2CLR          absolute 0xBF881054;
sfr unsigned long   volatile IFS2SET          absolute 0xBF881058;
sfr unsigned long   volatile IFS2INV          absolute 0xBF88105C;
sfr atomic unsigned long            IEC0             absolute 0xBF881060;
    const register unsigned short int CTIE = 0;
    sbit  CTIE_bit at IEC0.B0;
    const register unsigned short int CS0IE = 1;
    sbit  CS0IE_bit at IEC0.B1;
    const register unsigned short int CS1IE = 2;
    sbit  CS1IE_bit at IEC0.B2;
    const register unsigned short int INT0IE = 3;
    sbit  INT0IE_bit at IEC0.B3;
    const register unsigned short int T1IE = 4;
    sbit  T1IE_bit at IEC0.B4;
    const register unsigned short int IC1EIE = 5;
    sbit  IC1EIE_bit at IEC0.B5;
    const register unsigned short int IC1IE = 6;
    sbit  IC1IE_bit at IEC0.B6;
    const register unsigned short int OC1IE = 7;
    sbit  OC1IE_bit at IEC0.B7;
    const register unsigned short int INT1IE = 8;
    sbit  INT1IE_bit at IEC0.B8;
    const register unsigned short int T2IE = 9;
    sbit  T2IE_bit at IEC0.B9;
    const register unsigned short int IC2EIE = 10;
    sbit  IC2EIE_bit at IEC0.B10;
    const register unsigned short int IC2IE = 11;
    sbit  IC2IE_bit at IEC0.B11;
    const register unsigned short int OC2IE = 12;
    sbit  OC2IE_bit at IEC0.B12;
    const register unsigned short int INT2IE = 13;
    sbit  INT2IE_bit at IEC0.B13;
    const register unsigned short int T3IE = 14;
    sbit  T3IE_bit at IEC0.B14;
    const register unsigned short int IC3EIE = 15;
    sbit  IC3EIE_bit at IEC0.B15;
    const register unsigned short int IC3IE = 16;
    sbit  IC3IE_bit at IEC0.B16;
    const register unsigned short int OC3IE = 17;
    sbit  OC3IE_bit at IEC0.B17;
    const register unsigned short int INT3IE = 18;
    sbit  INT3IE_bit at IEC0.B18;
    const register unsigned short int T4IE = 19;
    sbit  T4IE_bit at IEC0.B19;
    const register unsigned short int IC4EIE = 20;
    sbit  IC4EIE_bit at IEC0.B20;
    const register unsigned short int IC4IE = 21;
    sbit  IC4IE_bit at IEC0.B21;
    const register unsigned short int OC4IE = 22;
    sbit  OC4IE_bit at IEC0.B22;
    const register unsigned short int INT4IE = 23;
    sbit  INT4IE_bit at IEC0.B23;
    const register unsigned short int T5IE = 24;
    sbit  T5IE_bit at IEC0.B24;
    const register unsigned short int IC5EIE = 25;
    sbit  IC5EIE_bit at IEC0.B25;
    const register unsigned short int IC5IE = 26;
    sbit  IC5IE_bit at IEC0.B26;
    const register unsigned short int OC5IE = 27;
    sbit  OC5IE_bit at IEC0.B27;
    const register unsigned short int AD1IE = 28;
    sbit  AD1IE_bit at IEC0.B28;
    const register unsigned short int FSCMIE = 29;
    sbit  FSCMIE_bit at IEC0.B29;
    const register unsigned short int RTCCIE = 30;
    sbit  RTCCIE_bit at IEC0.B30;
    const register unsigned short int FCEIE = 31;
    sbit  FCEIE_bit at IEC0.B31;
sfr unsigned long   volatile IEC0CLR          absolute 0xBF881064;
sfr unsigned long   volatile IEC0SET          absolute 0xBF881068;
sfr unsigned long   volatile IEC0INV          absolute 0xBF88106C;
sfr atomic unsigned long            IEC1             absolute 0xBF881070;
    const register unsigned short int CMP1IE = 0;
    sbit  CMP1IE_bit at IEC1.B0;
    const register unsigned short int CMP2IE = 1;
    sbit  CMP2IE_bit at IEC1.B1;
    const register unsigned short int USBIE = 2;
    sbit  USBIE_bit at IEC1.B2;
    const register unsigned short int SPI1EIE = 3;
    sbit  SPI1EIE_bit at IEC1.B3;
    const register unsigned short int SPI1RXIE = 4;
    sbit  SPI1RXIE_bit at IEC1.B4;
    const register unsigned short int SPI1TXIE = 5;
    sbit  SPI1TXIE_bit at IEC1.B5;
    const register unsigned short int U1EIE_CONST = 6;
    sbit  U1EIE_CONST_bit at IEC1.B6;
    const register unsigned short int U1RXIE = 7;
    sbit  U1RXIE_bit at IEC1.B7;
    const register unsigned short int U1TXIE = 8;
    sbit  U1TXIE_bit at IEC1.B8;
    const register unsigned short int I2C1BIE = 9;
    sbit  I2C1BIE_bit at IEC1.B9;
    const register unsigned short int I2C1SIE = 10;
    sbit  I2C1SIE_bit at IEC1.B10;
    const register unsigned short int I2C1MIE = 11;
    sbit  I2C1MIE_bit at IEC1.B11;
    const register unsigned short int CNAIE = 12;
    sbit  CNAIE_bit at IEC1.B12;
    const register unsigned short int CNBIE = 13;
    sbit  CNBIE_bit at IEC1.B13;
    const register unsigned short int CNCIE = 14;
    sbit  CNCIE_bit at IEC1.B14;
    const register unsigned short int CNDIE = 15;
    sbit  CNDIE_bit at IEC1.B15;
    const register unsigned short int CNEIE = 16;
    sbit  CNEIE_bit at IEC1.B16;
    const register unsigned short int CNFIE = 17;
    sbit  CNFIE_bit at IEC1.B17;
    const register unsigned short int CNGIE = 18;
    sbit  CNGIE_bit at IEC1.B18;
    const register unsigned short int PMPIE = 19;
    sbit  PMPIE_bit at IEC1.B19;
    const register unsigned short int PMPEIE = 20;
    sbit  PMPEIE_bit at IEC1.B20;
    const register unsigned short int SPI2EIE = 21;
    sbit  SPI2EIE_bit at IEC1.B21;
    const register unsigned short int SPI2RXIE = 22;
    sbit  SPI2RXIE_bit at IEC1.B22;
    const register unsigned short int SPI2TXIE = 23;
    sbit  SPI2TXIE_bit at IEC1.B23;
    const register unsigned short int U2EIE = 24;
    sbit  U2EIE_bit at IEC1.B24;
    const register unsigned short int U2RXIE = 25;
    sbit  U2RXIE_bit at IEC1.B25;
    const register unsigned short int U2TXIE = 26;
    sbit  U2TXIE_bit at IEC1.B26;
    const register unsigned short int I2C2BIE = 27;
    sbit  I2C2BIE_bit at IEC1.B27;
    const register unsigned short int I2C2SIE = 28;
    sbit  I2C2SIE_bit at IEC1.B28;
    const register unsigned short int I2C2MIE = 29;
    sbit  I2C2MIE_bit at IEC1.B29;
    const register unsigned short int U3EIE = 30;
    sbit  U3EIE_bit at IEC1.B30;
    const register unsigned short int U3RXIE = 31;
    sbit  U3RXIE_bit at IEC1.B31;
sfr unsigned long   volatile IEC1CLR          absolute 0xBF881074;
sfr unsigned long   volatile IEC1SET          absolute 0xBF881078;
sfr unsigned long   volatile IEC1INV          absolute 0xBF88107C;
sfr atomic unsigned long            IEC2             absolute 0xBF881080;
    const register unsigned short int U3TXIE = 0;
    sbit  U3TXIE_bit at IEC2.B0;
    const register unsigned short int U4EIE = 1;
    sbit  U4EIE_bit at IEC2.B1;
    const register unsigned short int U4RXIE = 2;
    sbit  U4RXIE_bit at IEC2.B2;
    const register unsigned short int U4TXIE = 3;
    sbit  U4TXIE_bit at IEC2.B3;
    const register unsigned short int CTMUIE = 7;
    sbit  CTMUIE_bit at IEC2.B7;
    const register unsigned short int DMA0IE = 8;
    sbit  DMA0IE_bit at IEC2.B8;
    const register unsigned short int DMA1IE = 9;
    sbit  DMA1IE_bit at IEC2.B9;
    const register unsigned short int DMA2IE = 10;
    sbit  DMA2IE_bit at IEC2.B10;
    const register unsigned short int DMA3IE = 11;
    sbit  DMA3IE_bit at IEC2.B11;
    const register unsigned short int CMP3IE = 12;
    sbit  CMP3IE_bit at IEC2.B12;
    const register unsigned short int CAN1IE = 13;
    sbit  CAN1IE_bit at IEC2.B13;
    const register unsigned short int SPI3EIE = 14;
    sbit  SPI3EIE_bit at IEC2.B14;
    const register unsigned short int SPI3RXIE = 15;
    sbit  SPI3RXIE_bit at IEC2.B15;
    const register unsigned short int SPI3TXIE = 16;
    sbit  SPI3TXIE_bit at IEC2.B16;
sfr unsigned long   volatile IEC2CLR          absolute 0xBF881084;
sfr unsigned long   volatile IEC2SET          absolute 0xBF881088;
sfr unsigned long   volatile IEC2INV          absolute 0xBF88108C;
sfr atomic unsigned long            IPC0             absolute 0xBF881090;
    const register unsigned short int CTIS0 = 0;
    sbit  CTIS0_bit at IPC0.B0;
    const register unsigned short int CTIS1 = 1;
    sbit  CTIS1_bit at IPC0.B1;
    const register unsigned short int CTIP0 = 2;
    sbit  CTIP0_bit at IPC0.B2;
    const register unsigned short int CTIP1 = 3;
    sbit  CTIP1_bit at IPC0.B3;
    const register unsigned short int CTIP2 = 4;
    sbit  CTIP2_bit at IPC0.B4;
    const register unsigned short int CS0IS0 = 8;
    sbit  CS0IS0_bit at IPC0.B8;
    const register unsigned short int CS0IS1 = 9;
    sbit  CS0IS1_bit at IPC0.B9;
    const register unsigned short int CS0IP0 = 10;
    sbit  CS0IP0_bit at IPC0.B10;
    const register unsigned short int CS0IP1 = 11;
    sbit  CS0IP1_bit at IPC0.B11;
    const register unsigned short int CS0IP2 = 12;
    sbit  CS0IP2_bit at IPC0.B12;
    const register unsigned short int CS1IS0 = 16;
    sbit  CS1IS0_bit at IPC0.B16;
    const register unsigned short int CS1IS1 = 17;
    sbit  CS1IS1_bit at IPC0.B17;
    const register unsigned short int CS1IP0 = 18;
    sbit  CS1IP0_bit at IPC0.B18;
    const register unsigned short int CS1IP1 = 19;
    sbit  CS1IP1_bit at IPC0.B19;
    const register unsigned short int CS1IP2 = 20;
    sbit  CS1IP2_bit at IPC0.B20;
    const register unsigned short int INT0IS0 = 24;
    sbit  INT0IS0_bit at IPC0.B24;
    const register unsigned short int INT0IS1 = 25;
    sbit  INT0IS1_bit at IPC0.B25;
    const register unsigned short int INT0IP0 = 26;
    sbit  INT0IP0_bit at IPC0.B26;
    const register unsigned short int INT0IP1 = 27;
    sbit  INT0IP1_bit at IPC0.B27;
    const register unsigned short int INT0IP2 = 28;
    sbit  INT0IP2_bit at IPC0.B28;
sfr unsigned long   volatile IPC0CLR          absolute 0xBF881094;
sfr unsigned long   volatile IPC0SET          absolute 0xBF881098;
sfr unsigned long   volatile IPC0INV          absolute 0xBF88109C;
sfr atomic unsigned long            IPC1             absolute 0xBF8810A0;
    const register unsigned short int T1IS0 = 0;
    sbit  T1IS0_bit at IPC1.B0;
    const register unsigned short int T1IS1 = 1;
    sbit  T1IS1_bit at IPC1.B1;
    const register unsigned short int T1IP0 = 2;
    sbit  T1IP0_bit at IPC1.B2;
    const register unsigned short int T1IP1 = 3;
    sbit  T1IP1_bit at IPC1.B3;
    const register unsigned short int T1IP2 = 4;
    sbit  T1IP2_bit at IPC1.B4;
    const register unsigned short int IC1IS0 = 8;
    sbit  IC1IS0_bit at IPC1.B8;
    const register unsigned short int IC1IS1 = 9;
    sbit  IC1IS1_bit at IPC1.B9;
    const register unsigned short int IC1IP0 = 10;
    sbit  IC1IP0_bit at IPC1.B10;
    const register unsigned short int IC1IP1 = 11;
    sbit  IC1IP1_bit at IPC1.B11;
    const register unsigned short int IC1IP2 = 12;
    sbit  IC1IP2_bit at IPC1.B12;
    const register unsigned short int OC1IS0 = 16;
    sbit  OC1IS0_bit at IPC1.B16;
    const register unsigned short int OC1IS1 = 17;
    sbit  OC1IS1_bit at IPC1.B17;
    const register unsigned short int OC1IP0 = 18;
    sbit  OC1IP0_bit at IPC1.B18;
    const register unsigned short int OC1IP1 = 19;
    sbit  OC1IP1_bit at IPC1.B19;
    const register unsigned short int OC1IP2 = 20;
    sbit  OC1IP2_bit at IPC1.B20;
    const register unsigned short int INT1IS0 = 24;
    sbit  INT1IS0_bit at IPC1.B24;
    const register unsigned short int INT1IS1 = 25;
    sbit  INT1IS1_bit at IPC1.B25;
    const register unsigned short int INT1IP0 = 26;
    sbit  INT1IP0_bit at IPC1.B26;
    const register unsigned short int INT1IP1 = 27;
    sbit  INT1IP1_bit at IPC1.B27;
    const register unsigned short int INT1IP2 = 28;
    sbit  INT1IP2_bit at IPC1.B28;
sfr unsigned long   volatile IPC1CLR          absolute 0xBF8810A4;
sfr unsigned long   volatile IPC1SET          absolute 0xBF8810A8;
sfr unsigned long   volatile IPC1INV          absolute 0xBF8810AC;
sfr atomic unsigned long            IPC2             absolute 0xBF8810B0;
    const register unsigned short int T2IS0 = 0;
    sbit  T2IS0_bit at IPC2.B0;
    const register unsigned short int T2IS1 = 1;
    sbit  T2IS1_bit at IPC2.B1;
    const register unsigned short int T2IP0 = 2;
    sbit  T2IP0_bit at IPC2.B2;
    const register unsigned short int T2IP1 = 3;
    sbit  T2IP1_bit at IPC2.B3;
    const register unsigned short int T2IP2 = 4;
    sbit  T2IP2_bit at IPC2.B4;
    const register unsigned short int IC2IS0 = 8;
    sbit  IC2IS0_bit at IPC2.B8;
    const register unsigned short int IC2IS1 = 9;
    sbit  IC2IS1_bit at IPC2.B9;
    const register unsigned short int IC2IP0 = 10;
    sbit  IC2IP0_bit at IPC2.B10;
    const register unsigned short int IC2IP1 = 11;
    sbit  IC2IP1_bit at IPC2.B11;
    const register unsigned short int IC2IP2 = 12;
    sbit  IC2IP2_bit at IPC2.B12;
    const register unsigned short int OC2IS0 = 16;
    sbit  OC2IS0_bit at IPC2.B16;
    const register unsigned short int OC2IS1 = 17;
    sbit  OC2IS1_bit at IPC2.B17;
    const register unsigned short int OC2IP0 = 18;
    sbit  OC2IP0_bit at IPC2.B18;
    const register unsigned short int OC2IP1 = 19;
    sbit  OC2IP1_bit at IPC2.B19;
    const register unsigned short int OC2IP2 = 20;
    sbit  OC2IP2_bit at IPC2.B20;
    const register unsigned short int INT2IS0 = 24;
    sbit  INT2IS0_bit at IPC2.B24;
    const register unsigned short int INT2IS1 = 25;
    sbit  INT2IS1_bit at IPC2.B25;
    const register unsigned short int INT2IP0 = 26;
    sbit  INT2IP0_bit at IPC2.B26;
    const register unsigned short int INT2IP1 = 27;
    sbit  INT2IP1_bit at IPC2.B27;
    const register unsigned short int INT2IP2 = 28;
    sbit  INT2IP2_bit at IPC2.B28;
sfr unsigned long   volatile IPC2CLR          absolute 0xBF8810B4;
sfr unsigned long   volatile IPC2SET          absolute 0xBF8810B8;
sfr unsigned long   volatile IPC2INV          absolute 0xBF8810BC;
sfr atomic unsigned long            IPC3             absolute 0xBF8810C0;
    const register unsigned short int T3IS0 = 0;
    sbit  T3IS0_bit at IPC3.B0;
    const register unsigned short int T3IS1 = 1;
    sbit  T3IS1_bit at IPC3.B1;
    const register unsigned short int T3IP0 = 2;
    sbit  T3IP0_bit at IPC3.B2;
    const register unsigned short int T3IP1 = 3;
    sbit  T3IP1_bit at IPC3.B3;
    const register unsigned short int T3IP2 = 4;
    sbit  T3IP2_bit at IPC3.B4;
    const register unsigned short int IC3IS0 = 8;
    sbit  IC3IS0_bit at IPC3.B8;
    const register unsigned short int IC3IS1 = 9;
    sbit  IC3IS1_bit at IPC3.B9;
    const register unsigned short int IC3IP0 = 10;
    sbit  IC3IP0_bit at IPC3.B10;
    const register unsigned short int IC3IP1 = 11;
    sbit  IC3IP1_bit at IPC3.B11;
    const register unsigned short int IC3IP2 = 12;
    sbit  IC3IP2_bit at IPC3.B12;
    const register unsigned short int OC3IS0 = 16;
    sbit  OC3IS0_bit at IPC3.B16;
    const register unsigned short int OC3IS1 = 17;
    sbit  OC3IS1_bit at IPC3.B17;
    const register unsigned short int OC3IP0 = 18;
    sbit  OC3IP0_bit at IPC3.B18;
    const register unsigned short int OC3IP1 = 19;
    sbit  OC3IP1_bit at IPC3.B19;
    const register unsigned short int OC3IP2 = 20;
    sbit  OC3IP2_bit at IPC3.B20;
    const register unsigned short int INT3IS0 = 24;
    sbit  INT3IS0_bit at IPC3.B24;
    const register unsigned short int INT3IS1 = 25;
    sbit  INT3IS1_bit at IPC3.B25;
    const register unsigned short int INT3IP0 = 26;
    sbit  INT3IP0_bit at IPC3.B26;
    const register unsigned short int INT3IP1 = 27;
    sbit  INT3IP1_bit at IPC3.B27;
    const register unsigned short int INT3IP2 = 28;
    sbit  INT3IP2_bit at IPC3.B28;
sfr unsigned long   volatile IPC3CLR          absolute 0xBF8810C4;
sfr unsigned long   volatile IPC3SET          absolute 0xBF8810C8;
sfr unsigned long   volatile IPC3INV          absolute 0xBF8810CC;
sfr atomic unsigned long            IPC4             absolute 0xBF8810D0;
    const register unsigned short int T4IS0 = 0;
    sbit  T4IS0_bit at IPC4.B0;
    const register unsigned short int T4IS1 = 1;
    sbit  T4IS1_bit at IPC4.B1;
    const register unsigned short int T4IP0 = 2;
    sbit  T4IP0_bit at IPC4.B2;
    const register unsigned short int T4IP1 = 3;
    sbit  T4IP1_bit at IPC4.B3;
    const register unsigned short int T4IP2 = 4;
    sbit  T4IP2_bit at IPC4.B4;
    const register unsigned short int IC4IS0 = 8;
    sbit  IC4IS0_bit at IPC4.B8;
    const register unsigned short int IC4IS1 = 9;
    sbit  IC4IS1_bit at IPC4.B9;
    const register unsigned short int IC4IP0 = 10;
    sbit  IC4IP0_bit at IPC4.B10;
    const register unsigned short int IC4IP1 = 11;
    sbit  IC4IP1_bit at IPC4.B11;
    const register unsigned short int IC4IP2 = 12;
    sbit  IC4IP2_bit at IPC4.B12;
    const register unsigned short int OC4IS0 = 16;
    sbit  OC4IS0_bit at IPC4.B16;
    const register unsigned short int OC4IS1 = 17;
    sbit  OC4IS1_bit at IPC4.B17;
    const register unsigned short int OC4IP0 = 18;
    sbit  OC4IP0_bit at IPC4.B18;
    const register unsigned short int OC4IP1 = 19;
    sbit  OC4IP1_bit at IPC4.B19;
    const register unsigned short int OC4IP2 = 20;
    sbit  OC4IP2_bit at IPC4.B20;
    const register unsigned short int INT4IS0 = 24;
    sbit  INT4IS0_bit at IPC4.B24;
    const register unsigned short int INT4IS1 = 25;
    sbit  INT4IS1_bit at IPC4.B25;
    const register unsigned short int INT4IP0 = 26;
    sbit  INT4IP0_bit at IPC4.B26;
    const register unsigned short int INT4IP1 = 27;
    sbit  INT4IP1_bit at IPC4.B27;
    const register unsigned short int INT4IP2 = 28;
    sbit  INT4IP2_bit at IPC4.B28;
sfr unsigned long   volatile IPC4CLR          absolute 0xBF8810D4;
sfr unsigned long   volatile IPC4SET          absolute 0xBF8810D8;
sfr unsigned long   volatile IPC4INV          absolute 0xBF8810DC;
sfr atomic unsigned long            IPC5             absolute 0xBF8810E0;
    const register unsigned short int T5IS0 = 0;
    sbit  T5IS0_bit at IPC5.B0;
    const register unsigned short int T5IS1 = 1;
    sbit  T5IS1_bit at IPC5.B1;
    const register unsigned short int T5IP0 = 2;
    sbit  T5IP0_bit at IPC5.B2;
    const register unsigned short int T5IP1 = 3;
    sbit  T5IP1_bit at IPC5.B3;
    const register unsigned short int T5IP2 = 4;
    sbit  T5IP2_bit at IPC5.B4;
    const register unsigned short int IC5IS0 = 8;
    sbit  IC5IS0_bit at IPC5.B8;
    const register unsigned short int IC5IS1 = 9;
    sbit  IC5IS1_bit at IPC5.B9;
    const register unsigned short int IC5IP0 = 10;
    sbit  IC5IP0_bit at IPC5.B10;
    const register unsigned short int IC5IP1 = 11;
    sbit  IC5IP1_bit at IPC5.B11;
    const register unsigned short int IC5IP2 = 12;
    sbit  IC5IP2_bit at IPC5.B12;
    const register unsigned short int OC5IS0 = 16;
    sbit  OC5IS0_bit at IPC5.B16;
    const register unsigned short int OC5IS1 = 17;
    sbit  OC5IS1_bit at IPC5.B17;
    const register unsigned short int OC5IP0 = 18;
    sbit  OC5IP0_bit at IPC5.B18;
    const register unsigned short int OC5IP1 = 19;
    sbit  OC5IP1_bit at IPC5.B19;
    const register unsigned short int OC5IP2 = 20;
    sbit  OC5IP2_bit at IPC5.B20;
    const register unsigned short int AD1IS0 = 24;
    sbit  AD1IS0_bit at IPC5.B24;
    const register unsigned short int AD1IS1 = 25;
    sbit  AD1IS1_bit at IPC5.B25;
    const register unsigned short int AD1IP0 = 26;
    sbit  AD1IP0_bit at IPC5.B26;
    const register unsigned short int AD1IP1 = 27;
    sbit  AD1IP1_bit at IPC5.B27;
    const register unsigned short int AD1IP2 = 28;
    sbit  AD1IP2_bit at IPC5.B28;
sfr unsigned long   volatile IPC5CLR          absolute 0xBF8810E4;
sfr unsigned long   volatile IPC5SET          absolute 0xBF8810E8;
sfr unsigned long   volatile IPC5INV          absolute 0xBF8810EC;
sfr atomic unsigned long            IPC6             absolute 0xBF8810F0;
    const register unsigned short int FSCMIS0 = 0;
    sbit  FSCMIS0_bit at IPC6.B0;
    const register unsigned short int FSCMIS1 = 1;
    sbit  FSCMIS1_bit at IPC6.B1;
    const register unsigned short int FSCMIP0 = 2;
    sbit  FSCMIP0_bit at IPC6.B2;
    const register unsigned short int FSCMIP1 = 3;
    sbit  FSCMIP1_bit at IPC6.B3;
    const register unsigned short int FSCMIP2 = 4;
    sbit  FSCMIP2_bit at IPC6.B4;
    const register unsigned short int RTCCIS0 = 8;
    sbit  RTCCIS0_bit at IPC6.B8;
    const register unsigned short int RTCCIS1 = 9;
    sbit  RTCCIS1_bit at IPC6.B9;
    const register unsigned short int RTCCIP0 = 10;
    sbit  RTCCIP0_bit at IPC6.B10;
    const register unsigned short int RTCCIP1 = 11;
    sbit  RTCCIP1_bit at IPC6.B11;
    const register unsigned short int RTCCIP2 = 12;
    sbit  RTCCIP2_bit at IPC6.B12;
    const register unsigned short int FCEIS0 = 16;
    sbit  FCEIS0_bit at IPC6.B16;
    const register unsigned short int FCEIS1 = 17;
    sbit  FCEIS1_bit at IPC6.B17;
    const register unsigned short int FCEIP0 = 18;
    sbit  FCEIP0_bit at IPC6.B18;
    const register unsigned short int FCEIP1 = 19;
    sbit  FCEIP1_bit at IPC6.B19;
    const register unsigned short int FCEIP2 = 20;
    sbit  FCEIP2_bit at IPC6.B20;
    const register unsigned short int CMP1IS0 = 24;
    sbit  CMP1IS0_bit at IPC6.B24;
    const register unsigned short int CMP1IS1 = 25;
    sbit  CMP1IS1_bit at IPC6.B25;
    const register unsigned short int CMP1IP0 = 26;
    sbit  CMP1IP0_bit at IPC6.B26;
    const register unsigned short int CMP1IP1 = 27;
    sbit  CMP1IP1_bit at IPC6.B27;
    const register unsigned short int CMP1IP2 = 28;
    sbit  CMP1IP2_bit at IPC6.B28;
sfr unsigned long   volatile IPC6CLR          absolute 0xBF8810F4;
sfr unsigned long   volatile IPC6SET          absolute 0xBF8810F8;
sfr unsigned long   volatile IPC6INV          absolute 0xBF8810FC;
sfr atomic unsigned long            IPC7             absolute 0xBF881100;
    const register unsigned short int CMP2IS0 = 0;
    sbit  CMP2IS0_bit at IPC7.B0;
    const register unsigned short int CMP2IS1 = 1;
    sbit  CMP2IS1_bit at IPC7.B1;
    const register unsigned short int CMP2IP0 = 2;
    sbit  CMP2IP0_bit at IPC7.B2;
    const register unsigned short int CMP2IP1 = 3;
    sbit  CMP2IP1_bit at IPC7.B3;
    const register unsigned short int CMP2IP2 = 4;
    sbit  CMP2IP2_bit at IPC7.B4;
    const register unsigned short int USBIS0 = 8;
    sbit  USBIS0_bit at IPC7.B8;
    const register unsigned short int USBIS1 = 9;
    sbit  USBIS1_bit at IPC7.B9;
    const register unsigned short int USBIP0 = 10;
    sbit  USBIP0_bit at IPC7.B10;
    const register unsigned short int USBIP1 = 11;
    sbit  USBIP1_bit at IPC7.B11;
    const register unsigned short int USBIP2 = 12;
    sbit  USBIP2_bit at IPC7.B12;
    const register unsigned short int SPI1IS0 = 16;
    sbit  SPI1IS0_bit at IPC7.B16;
    const register unsigned short int SPI1IS1 = 17;
    sbit  SPI1IS1_bit at IPC7.B17;
    const register unsigned short int SPI1IP0 = 18;
    sbit  SPI1IP0_bit at IPC7.B18;
    const register unsigned short int SPI1IP1 = 19;
    sbit  SPI1IP1_bit at IPC7.B19;
    const register unsigned short int SPI1IP2 = 20;
    sbit  SPI1IP2_bit at IPC7.B20;
    const register unsigned short int U1IS0 = 24;
    sbit  U1IS0_bit at IPC7.B24;
    const register unsigned short int U1IS1 = 25;
    sbit  U1IS1_bit at IPC7.B25;
    const register unsigned short int U1IP0 = 26;
    sbit  U1IP0_bit at IPC7.B26;
    const register unsigned short int U1IP1 = 27;
    sbit  U1IP1_bit at IPC7.B27;
    const register unsigned short int U1IP2 = 28;
    sbit  U1IP2_bit at IPC7.B28;
sfr unsigned long   volatile IPC7CLR          absolute 0xBF881104;
sfr unsigned long   volatile IPC7SET          absolute 0xBF881108;
sfr unsigned long   volatile IPC7INV          absolute 0xBF88110C;
sfr atomic unsigned long            IPC8             absolute 0xBF881110;
    const register unsigned short int I2C1IS0 = 0;
    sbit  I2C1IS0_bit at IPC8.B0;
    const register unsigned short int I2C1IS1 = 1;
    sbit  I2C1IS1_bit at IPC8.B1;
    const register unsigned short int I2C1IP0 = 2;
    sbit  I2C1IP0_bit at IPC8.B2;
    const register unsigned short int I2C1IP1 = 3;
    sbit  I2C1IP1_bit at IPC8.B3;
    const register unsigned short int I2C1IP2 = 4;
    sbit  I2C1IP2_bit at IPC8.B4;
    const register unsigned short int CNIS0 = 8;
    sbit  CNIS0_bit at IPC8.B8;
    const register unsigned short int CNIS1 = 9;
    sbit  CNIS1_bit at IPC8.B9;
    const register unsigned short int CNIP0 = 10;
    sbit  CNIP0_bit at IPC8.B10;
    const register unsigned short int CNIP1 = 11;
    sbit  CNIP1_bit at IPC8.B11;
    const register unsigned short int CNIP2 = 12;
    sbit  CNIP2_bit at IPC8.B12;
    const register unsigned short int PMPIS0 = 16;
    sbit  PMPIS0_bit at IPC8.B16;
    const register unsigned short int PMPIS1 = 17;
    sbit  PMPIS1_bit at IPC8.B17;
    const register unsigned short int PMPIP0 = 18;
    sbit  PMPIP0_bit at IPC8.B18;
    const register unsigned short int PMPIP1 = 19;
    sbit  PMPIP1_bit at IPC8.B19;
    const register unsigned short int PMPIP2 = 20;
    sbit  PMPIP2_bit at IPC8.B20;
    const register unsigned short int SPI2IS0 = 24;
    sbit  SPI2IS0_bit at IPC8.B24;
    const register unsigned short int SPI2IS1 = 25;
    sbit  SPI2IS1_bit at IPC8.B25;
    const register unsigned short int SPI2IP0 = 26;
    sbit  SPI2IP0_bit at IPC8.B26;
    const register unsigned short int SPI2IP1 = 27;
    sbit  SPI2IP1_bit at IPC8.B27;
    const register unsigned short int SPI2IP2 = 28;
    sbit  SPI2IP2_bit at IPC8.B28;
sfr unsigned long   volatile IPC8CLR          absolute 0xBF881114;
sfr unsigned long   volatile IPC8SET          absolute 0xBF881118;
sfr unsigned long   volatile IPC8INV          absolute 0xBF88111C;
sfr atomic unsigned long            IPC9             absolute 0xBF881120;
    const register unsigned short int U2IS0 = 0;
    sbit  U2IS0_bit at IPC9.B0;
    const register unsigned short int U2IS1 = 1;
    sbit  U2IS1_bit at IPC9.B1;
    const register unsigned short int U2IP0 = 2;
    sbit  U2IP0_bit at IPC9.B2;
    const register unsigned short int U2IP1 = 3;
    sbit  U2IP1_bit at IPC9.B3;
    const register unsigned short int U2IP2 = 4;
    sbit  U2IP2_bit at IPC9.B4;
    const register unsigned short int I2C2IS0 = 8;
    sbit  I2C2IS0_bit at IPC9.B8;
    const register unsigned short int I2C2IS1 = 9;
    sbit  I2C2IS1_bit at IPC9.B9;
    const register unsigned short int I2C2IP0 = 10;
    sbit  I2C2IP0_bit at IPC9.B10;
    const register unsigned short int I2C2IP1 = 11;
    sbit  I2C2IP1_bit at IPC9.B11;
    const register unsigned short int I2C2IP2 = 12;
    sbit  I2C2IP2_bit at IPC9.B12;
    const register unsigned short int U3IS0 = 16;
    sbit  U3IS0_bit at IPC9.B16;
    const register unsigned short int U3IS1 = 17;
    sbit  U3IS1_bit at IPC9.B17;
    const register unsigned short int U3IP0 = 18;
    sbit  U3IP0_bit at IPC9.B18;
    const register unsigned short int U3IP1 = 19;
    sbit  U3IP1_bit at IPC9.B19;
    const register unsigned short int U3IP2 = 20;
    sbit  U3IP2_bit at IPC9.B20;
    const register unsigned short int U4IS0 = 24;
    sbit  U4IS0_bit at IPC9.B24;
    const register unsigned short int U4IS1 = 25;
    sbit  U4IS1_bit at IPC9.B25;
    const register unsigned short int U4IP0 = 26;
    sbit  U4IP0_bit at IPC9.B26;
    const register unsigned short int U4IP1 = 27;
    sbit  U4IP1_bit at IPC9.B27;
    const register unsigned short int U4IP2 = 28;
    sbit  U4IP2_bit at IPC9.B28;
sfr unsigned long   volatile IPC9CLR          absolute 0xBF881124;
sfr unsigned long   volatile IPC9SET          absolute 0xBF881128;
sfr unsigned long   volatile IPC9INV          absolute 0xBF88112C;
sfr atomic unsigned long            IPC10            absolute 0xBF881130;
    const register unsigned short int CTMUIS0 = 8;
    sbit  CTMUIS0_bit at IPC10.B8;
    const register unsigned short int CTMUIS1 = 9;
    sbit  CTMUIS1_bit at IPC10.B9;
    const register unsigned short int CTMUIP0 = 10;
    sbit  CTMUIP0_bit at IPC10.B10;
    const register unsigned short int CTMUIP1 = 11;
    sbit  CTMUIP1_bit at IPC10.B11;
    const register unsigned short int CTMUIP2 = 12;
    sbit  CTMUIP2_bit at IPC10.B12;
    const register unsigned short int DMA0IS0 = 16;
    sbit  DMA0IS0_bit at IPC10.B16;
    const register unsigned short int DMA0IS1 = 17;
    sbit  DMA0IS1_bit at IPC10.B17;
    const register unsigned short int DMA0IP0 = 18;
    sbit  DMA0IP0_bit at IPC10.B18;
    const register unsigned short int DMA0IP1 = 19;
    sbit  DMA0IP1_bit at IPC10.B19;
    const register unsigned short int DMA0IP2 = 20;
    sbit  DMA0IP2_bit at IPC10.B20;
    const register unsigned short int DMA1IS0 = 24;
    sbit  DMA1IS0_bit at IPC10.B24;
    const register unsigned short int DMA1IS1 = 25;
    sbit  DMA1IS1_bit at IPC10.B25;
    const register unsigned short int DMA1IP0 = 26;
    sbit  DMA1IP0_bit at IPC10.B26;
    const register unsigned short int DMA1IP1 = 27;
    sbit  DMA1IP1_bit at IPC10.B27;
    const register unsigned short int DMA1IP2 = 28;
    sbit  DMA1IP2_bit at IPC10.B28;
sfr unsigned long   volatile IPC10CLR         absolute 0xBF881134;
sfr unsigned long   volatile IPC10SET         absolute 0xBF881138;
sfr unsigned long   volatile IPC10INV         absolute 0xBF88113C;
sfr atomic unsigned long            IPC11            absolute 0xBF881140;
    const register unsigned short int DMA2IS0 = 0;
    sbit  DMA2IS0_bit at IPC11.B0;
    const register unsigned short int DMA2IS1 = 1;
    sbit  DMA2IS1_bit at IPC11.B1;
    const register unsigned short int DMA2IP0 = 2;
    sbit  DMA2IP0_bit at IPC11.B2;
    const register unsigned short int DMA2IP1 = 3;
    sbit  DMA2IP1_bit at IPC11.B3;
    const register unsigned short int DMA2IP2 = 4;
    sbit  DMA2IP2_bit at IPC11.B4;
    const register unsigned short int DMA3IS0 = 8;
    sbit  DMA3IS0_bit at IPC11.B8;
    const register unsigned short int DMA3IS1 = 9;
    sbit  DMA3IS1_bit at IPC11.B9;
    const register unsigned short int DMA3IP0 = 10;
    sbit  DMA3IP0_bit at IPC11.B10;
    const register unsigned short int DMA3IP1 = 11;
    sbit  DMA3IP1_bit at IPC11.B11;
    const register unsigned short int DMA3IP2 = 12;
    sbit  DMA3IP2_bit at IPC11.B12;
    const register unsigned short int CMP3IS0 = 16;
    sbit  CMP3IS0_bit at IPC11.B16;
    const register unsigned short int CMP3IS1 = 17;
    sbit  CMP3IS1_bit at IPC11.B17;
    const register unsigned short int CMP3IP0 = 18;
    sbit  CMP3IP0_bit at IPC11.B18;
    const register unsigned short int CMP3IP1 = 19;
    sbit  CMP3IP1_bit at IPC11.B19;
    const register unsigned short int CMP3IP2 = 20;
    sbit  CMP3IP2_bit at IPC11.B20;
    const register unsigned short int CAN1IS0 = 24;
    sbit  CAN1IS0_bit at IPC11.B24;
    const register unsigned short int CAN1IS1 = 25;
    sbit  CAN1IS1_bit at IPC11.B25;
    const register unsigned short int CAN1IP0 = 26;
    sbit  CAN1IP0_bit at IPC11.B26;
    const register unsigned short int CAN1IP1 = 27;
    sbit  CAN1IP1_bit at IPC11.B27;
    const register unsigned short int CAN1IP2 = 28;
    sbit  CAN1IP2_bit at IPC11.B28;
sfr unsigned long   volatile IPC11CLR         absolute 0xBF881144;
sfr unsigned long   volatile IPC11SET         absolute 0xBF881148;
sfr unsigned long   volatile IPC11INV         absolute 0xBF88114C;
sfr atomic unsigned long            IPC12            absolute 0xBF881150;
    const register unsigned short int SPI3IS0 = 0;
    sbit  SPI3IS0_bit at IPC12.B0;
    const register unsigned short int SPI3IS1 = 1;
    sbit  SPI3IS1_bit at IPC12.B1;
    const register unsigned short int SPI3IP0 = 2;
    sbit  SPI3IP0_bit at IPC12.B2;
    const register unsigned short int SPI3IP1 = 3;
    sbit  SPI3IP1_bit at IPC12.B3;
    const register unsigned short int SPI3IP2 = 4;
    sbit  SPI3IP2_bit at IPC12.B4;
sfr unsigned long   volatile IPC12CLR         absolute 0xBF881154;
sfr unsigned long   volatile IPC12SET         absolute 0xBF881158;
sfr unsigned long   volatile IPC12INV         absolute 0xBF88115C;
sfr atomic unsigned long   volatile BMXCON           absolute 0xBF882000;
    const register unsigned short int BMXARB0 = 0;
    sbit  BMXARB0_bit at BMXCON.B0;
    const register unsigned short int BMXARB1 = 1;
    sbit  BMXARB1_bit at BMXCON.B1;
    const register unsigned short int BMXARB2 = 2;
    sbit  BMXARB2_bit at BMXCON.B2;
    const register unsigned short int BMXWSDRM = 6;
    sbit  BMXWSDRM_bit at BMXCON.B6;
    const register unsigned short int BMXERRIS = 16;
    sbit  BMXERRIS_bit at BMXCON.B16;
    const register unsigned short int BMXERRDS = 17;
    sbit  BMXERRDS_bit at BMXCON.B17;
    const register unsigned short int BMXERRDMA = 18;
    sbit  BMXERRDMA_bit at BMXCON.B18;
    const register unsigned short int BMXERRICD = 19;
    sbit  BMXERRICD_bit at BMXCON.B19;
    const register unsigned short int BMXERRIXI = 20;
    sbit  BMXERRIXI_bit at BMXCON.B20;
    const register unsigned short int BMXCHEDMA = 26;
    sbit  BMXCHEDMA_bit at BMXCON.B26;
sfr unsigned long   volatile BMXCONCLR        absolute 0xBF882004;
sfr unsigned long   volatile BMXCONSET        absolute 0xBF882008;
sfr unsigned long   volatile BMXCONINV        absolute 0xBF88200C;
sfr atomic unsigned long   volatile BMXDKPBA         absolute 0xBF882010;
sfr unsigned long   volatile BMXDKPBACLR      absolute 0xBF882014;
sfr unsigned long   volatile BMXDKPBASET      absolute 0xBF882018;
sfr unsigned long   volatile BMXDKPBAINV      absolute 0xBF88201C;
sfr atomic unsigned long   volatile BMXDUDBA         absolute 0xBF882020;
sfr unsigned long   volatile BMXDUDBACLR      absolute 0xBF882024;
sfr unsigned long   volatile BMXDUDBASET      absolute 0xBF882028;
sfr unsigned long   volatile BMXDUDBAINV      absolute 0xBF88202C;
sfr atomic unsigned long   volatile BMXDUPBA         absolute 0xBF882030;
sfr unsigned long   volatile BMXDUPBACLR      absolute 0xBF882034;
sfr unsigned long   volatile BMXDUPBASET      absolute 0xBF882038;
sfr unsigned long   volatile BMXDUPBAINV      absolute 0xBF88203C;
sfr unsigned long   volatile BMXDRMSZ         absolute 0xBF882040;
sfr atomic unsigned long   volatile BMXPUPBA         absolute 0xBF882050;
sfr unsigned long   volatile BMXPUPBACLR      absolute 0xBF882054;
sfr unsigned long   volatile BMXPUPBASET      absolute 0xBF882058;
sfr unsigned long   volatile BMXPUPBAINV      absolute 0xBF88205C;
sfr unsigned long   volatile BMXPFMSZ         absolute 0xBF882060;
sfr unsigned long   volatile BMXBOOTSZ        absolute 0xBF882070;
sfr atomic unsigned long   volatile DMACON           absolute 0xBF883000;
    const register unsigned short int DMABUSY = 11;
    sbit  DMABUSY_bit at DMACON.B11;
    const register unsigned short int SUSPEND = 12;
    sbit  SUSPEND_bit at DMACON.B12;
    sbit  ON_DMACON_bit at DMACON.B15;
sfr unsigned long   volatile DMACONCLR        absolute 0xBF883004;
sfr unsigned long   volatile DMACONSET        absolute 0xBF883008;
sfr unsigned long   volatile DMACONINV        absolute 0xBF88300C;
sfr atomic unsigned long   volatile DMASTAT          absolute 0xBF883010;
    const register unsigned short int DMACH0 = 0;
    sbit  DMACH0_bit at DMASTAT.B0;
    const register unsigned short int DMACH1 = 1;
    sbit  DMACH1_bit at DMASTAT.B1;
    const register unsigned short int DMACH2 = 2;
    sbit  DMACH2_bit at DMASTAT.B2;
    const register unsigned short int RDWR = 3;
    sbit  RDWR_bit at DMASTAT.B3;
sfr unsigned long   volatile DMASTATCLR       absolute 0xBF883014;
sfr unsigned long   volatile DMASTATSET       absolute 0xBF883018;
sfr unsigned long   volatile DMASTATINV       absolute 0xBF88301C;
sfr atomic unsigned long   volatile DMAADDR          absolute 0xBF883020;
sfr unsigned long   volatile DMAADDRCLR       absolute 0xBF883024;
sfr unsigned long   volatile DMAADDRSET       absolute 0xBF883028;
sfr unsigned long   volatile DMAADDRINV       absolute 0xBF88302C;
sfr atomic unsigned long   volatile DCRCCON          absolute 0xBF883030;
    const register unsigned short int CRCCH0 = 0;
    sbit  CRCCH0_bit at DCRCCON.B0;
    const register unsigned short int CRCCH1 = 1;
    sbit  CRCCH1_bit at DCRCCON.B1;
    const register unsigned short int CRCCH2 = 2;
    sbit  CRCCH2_bit at DCRCCON.B2;
    const register unsigned short int CRCTYP = 5;
    sbit  CRCTYP_bit at DCRCCON.B5;
    const register unsigned short int CRCAPP = 6;
    sbit  CRCAPP_bit at DCRCCON.B6;
    const register unsigned short int CRCEN = 7;
    sbit  CRCEN_bit at DCRCCON.B7;
    const register unsigned short int PLEN0 = 8;
    sbit  PLEN0_bit at DCRCCON.B8;
    const register unsigned short int PLEN1 = 9;
    sbit  PLEN1_bit at DCRCCON.B9;
    const register unsigned short int PLEN2 = 10;
    sbit  PLEN2_bit at DCRCCON.B10;
    const register unsigned short int PLEN3 = 11;
    sbit  PLEN3_bit at DCRCCON.B11;
    const register unsigned short int PLEN4 = 12;
    sbit  PLEN4_bit at DCRCCON.B12;
    const register unsigned short int BITO = 24;
    sbit  BITO_bit at DCRCCON.B24;
    const register unsigned short int WBO = 27;
    sbit  WBO_bit at DCRCCON.B27;
    const register unsigned short int BYTO0 = 28;
    sbit  BYTO0_bit at DCRCCON.B28;
    const register unsigned short int BYTO1 = 29;
    sbit  BYTO1_bit at DCRCCON.B29;
sfr unsigned long   volatile DCRCCONCLR       absolute 0xBF883034;
sfr unsigned long   volatile DCRCCONSET       absolute 0xBF883038;
sfr unsigned long   volatile DCRCCONINV       absolute 0xBF88303C;
sfr atomic unsigned long   volatile DCRCDATA         absolute 0xBF883040;
sfr unsigned long   volatile DCRCDATACLR      absolute 0xBF883044;
sfr unsigned long   volatile DCRCDATASET      absolute 0xBF883048;
sfr unsigned long   volatile DCRCDATAINV      absolute 0xBF88304C;
sfr atomic unsigned long   volatile DCRCXOR          absolute 0xBF883050;
sfr unsigned long   volatile DCRCXORCLR       absolute 0xBF883054;
sfr unsigned long   volatile DCRCXORSET       absolute 0xBF883058;
sfr unsigned long   volatile DCRCXORINV       absolute 0xBF88305C;
sfr atomic unsigned long   volatile DCH0CON          absolute 0xBF883060;
    const register unsigned short int CHPRI0 = 0;
    sbit  CHPRI0_bit at DCH0CON.B0;
    const register unsigned short int CHPRI1 = 1;
    sbit  CHPRI1_bit at DCH0CON.B1;
    const register unsigned short int CHEDET = 2;
    sbit  CHEDET_bit at DCH0CON.B2;
    const register unsigned short int CHAEN = 4;
    sbit  CHAEN_bit at DCH0CON.B4;
    const register unsigned short int CHCHN = 5;
    sbit  CHCHN_bit at DCH0CON.B5;
    const register unsigned short int CHAED = 6;
    sbit  CHAED_bit at DCH0CON.B6;
    const register unsigned short int CHEN = 7;
    sbit  CHEN_bit at DCH0CON.B7;
    const register unsigned short int CHCHNS = 8;
    sbit  CHCHNS_bit at DCH0CON.B8;
    const register unsigned short int CHBUSY = 15;
    sbit  CHBUSY_bit at DCH0CON.B15;
sfr unsigned long   volatile DCH0CONCLR       absolute 0xBF883064;
sfr unsigned long   volatile DCH0CONSET       absolute 0xBF883068;
sfr unsigned long   volatile DCH0CONINV       absolute 0xBF88306C;
sfr atomic unsigned long   volatile DCH0ECON         absolute 0xBF883070;
    const register unsigned short int AIRQEN = 3;
    sbit  AIRQEN_bit at DCH0ECON.B3;
    const register unsigned short int SIRQEN = 4;
    sbit  SIRQEN_bit at DCH0ECON.B4;
    const register unsigned short int PATEN = 5;
    sbit  PATEN_bit at DCH0ECON.B5;
    const register unsigned short int CABORT = 6;
    sbit  CABORT_bit at DCH0ECON.B6;
    const register unsigned short int CFORCE = 7;
    sbit  CFORCE_bit at DCH0ECON.B7;
    const register unsigned short int CHSIRQ0 = 8;
    sbit  CHSIRQ0_bit at DCH0ECON.B8;
    const register unsigned short int CHSIRQ1 = 9;
    sbit  CHSIRQ1_bit at DCH0ECON.B9;
    const register unsigned short int CHSIRQ2 = 10;
    sbit  CHSIRQ2_bit at DCH0ECON.B10;
    const register unsigned short int CHSIRQ3 = 11;
    sbit  CHSIRQ3_bit at DCH0ECON.B11;
    const register unsigned short int CHSIRQ4 = 12;
    sbit  CHSIRQ4_bit at DCH0ECON.B12;
    const register unsigned short int CHSIRQ5 = 13;
    sbit  CHSIRQ5_bit at DCH0ECON.B13;
    const register unsigned short int CHSIRQ6 = 14;
    sbit  CHSIRQ6_bit at DCH0ECON.B14;
    const register unsigned short int CHSIRQ7 = 15;
    sbit  CHSIRQ7_bit at DCH0ECON.B15;
    const register unsigned short int CHAIRQ0 = 16;
    sbit  CHAIRQ0_bit at DCH0ECON.B16;
    const register unsigned short int CHAIRQ1 = 17;
    sbit  CHAIRQ1_bit at DCH0ECON.B17;
    const register unsigned short int CHAIRQ2 = 18;
    sbit  CHAIRQ2_bit at DCH0ECON.B18;
    const register unsigned short int CHAIRQ3 = 19;
    sbit  CHAIRQ3_bit at DCH0ECON.B19;
    const register unsigned short int CHAIRQ4 = 20;
    sbit  CHAIRQ4_bit at DCH0ECON.B20;
    const register unsigned short int CHAIRQ5 = 21;
    sbit  CHAIRQ5_bit at DCH0ECON.B21;
    const register unsigned short int CHAIRQ6 = 22;
    sbit  CHAIRQ6_bit at DCH0ECON.B22;
    const register unsigned short int CHAIRQ7 = 23;
    sbit  CHAIRQ7_bit at DCH0ECON.B23;
sfr unsigned long   volatile DCH0ECONCLR      absolute 0xBF883074;
sfr unsigned long   volatile DCH0ECONSET      absolute 0xBF883078;
sfr unsigned long   volatile DCH0ECONINV      absolute 0xBF88307C;
sfr atomic unsigned long   volatile DCH0INT          absolute 0xBF883080;
    const register unsigned short int CHERIF = 0;
    sbit  CHERIF_bit at DCH0INT.B0;
    const register unsigned short int CHTAIF = 1;
    sbit  CHTAIF_bit at DCH0INT.B1;
    const register unsigned short int CHCCIF = 2;
    sbit  CHCCIF_bit at DCH0INT.B2;
    const register unsigned short int CHBCIF = 3;
    sbit  CHBCIF_bit at DCH0INT.B3;
    const register unsigned short int CHDHIF = 4;
    sbit  CHDHIF_bit at DCH0INT.B4;
    const register unsigned short int CHDDIF = 5;
    sbit  CHDDIF_bit at DCH0INT.B5;
    const register unsigned short int CHSHIF = 6;
    sbit  CHSHIF_bit at DCH0INT.B6;
    const register unsigned short int CHSDIF = 7;
    sbit  CHSDIF_bit at DCH0INT.B7;
    const register unsigned short int CHERIE = 16;
    sbit  CHERIE_bit at DCH0INT.B16;
    const register unsigned short int CHTAIE = 17;
    sbit  CHTAIE_bit at DCH0INT.B17;
    const register unsigned short int CHCCIE = 18;
    sbit  CHCCIE_bit at DCH0INT.B18;
    const register unsigned short int CHBCIE = 19;
    sbit  CHBCIE_bit at DCH0INT.B19;
    const register unsigned short int CHDHIE = 20;
    sbit  CHDHIE_bit at DCH0INT.B20;
    const register unsigned short int CHDDIE = 21;
    sbit  CHDDIE_bit at DCH0INT.B21;
    const register unsigned short int CHSHIE = 22;
    sbit  CHSHIE_bit at DCH0INT.B22;
    const register unsigned short int CHSDIE = 23;
    sbit  CHSDIE_bit at DCH0INT.B23;
sfr unsigned long   volatile DCH0INTCLR       absolute 0xBF883084;
sfr unsigned long   volatile DCH0INTSET       absolute 0xBF883088;
sfr unsigned long   volatile DCH0INTINV       absolute 0xBF88308C;
sfr atomic unsigned long   volatile DCH0SSA          absolute 0xBF883090;
    const register unsigned short int CHSSA0 = 0;
    sbit  CHSSA0_bit at DCH0SSA.B0;
    const register unsigned short int CHSSA1 = 1;
    sbit  CHSSA1_bit at DCH0SSA.B1;
    const register unsigned short int CHSSA2 = 2;
    sbit  CHSSA2_bit at DCH0SSA.B2;
    const register unsigned short int CHSSA3 = 3;
    sbit  CHSSA3_bit at DCH0SSA.B3;
    const register unsigned short int CHSSA4 = 4;
    sbit  CHSSA4_bit at DCH0SSA.B4;
    const register unsigned short int CHSSA5 = 5;
    sbit  CHSSA5_bit at DCH0SSA.B5;
    const register unsigned short int CHSSA6 = 6;
    sbit  CHSSA6_bit at DCH0SSA.B6;
    const register unsigned short int CHSSA7 = 7;
    sbit  CHSSA7_bit at DCH0SSA.B7;
    const register unsigned short int CHSSA8 = 8;
    sbit  CHSSA8_bit at DCH0SSA.B8;
    const register unsigned short int CHSSA9 = 9;
    sbit  CHSSA9_bit at DCH0SSA.B9;
    const register unsigned short int CHSSA10 = 10;
    sbit  CHSSA10_bit at DCH0SSA.B10;
    const register unsigned short int CHSSA11 = 11;
    sbit  CHSSA11_bit at DCH0SSA.B11;
    const register unsigned short int CHSSA12 = 12;
    sbit  CHSSA12_bit at DCH0SSA.B12;
    const register unsigned short int CHSSA13 = 13;
    sbit  CHSSA13_bit at DCH0SSA.B13;
    const register unsigned short int CHSSA14 = 14;
    sbit  CHSSA14_bit at DCH0SSA.B14;
    const register unsigned short int CHSSA15 = 15;
    sbit  CHSSA15_bit at DCH0SSA.B15;
    const register unsigned short int CHSSA16 = 16;
    sbit  CHSSA16_bit at DCH0SSA.B16;
    const register unsigned short int CHSSA17 = 17;
    sbit  CHSSA17_bit at DCH0SSA.B17;
    const register unsigned short int CHSSA18 = 18;
    sbit  CHSSA18_bit at DCH0SSA.B18;
    const register unsigned short int CHSSA19 = 19;
    sbit  CHSSA19_bit at DCH0SSA.B19;
    const register unsigned short int CHSSA20 = 20;
    sbit  CHSSA20_bit at DCH0SSA.B20;
    const register unsigned short int CHSSA21 = 21;
    sbit  CHSSA21_bit at DCH0SSA.B21;
    const register unsigned short int CHSSA22 = 22;
    sbit  CHSSA22_bit at DCH0SSA.B22;
    const register unsigned short int CHSSA23 = 23;
    sbit  CHSSA23_bit at DCH0SSA.B23;
    const register unsigned short int CHSSA24 = 24;
    sbit  CHSSA24_bit at DCH0SSA.B24;
    const register unsigned short int CHSSA25 = 25;
    sbit  CHSSA25_bit at DCH0SSA.B25;
    const register unsigned short int CHSSA26 = 26;
    sbit  CHSSA26_bit at DCH0SSA.B26;
    const register unsigned short int CHSSA27 = 27;
    sbit  CHSSA27_bit at DCH0SSA.B27;
    const register unsigned short int CHSSA28 = 28;
    sbit  CHSSA28_bit at DCH0SSA.B28;
    const register unsigned short int CHSSA29 = 29;
    sbit  CHSSA29_bit at DCH0SSA.B29;
    const register unsigned short int CHSSA30 = 30;
    sbit  CHSSA30_bit at DCH0SSA.B30;
    const register unsigned short int CHSSA31 = 31;
    sbit  CHSSA31_bit at DCH0SSA.B31;
sfr unsigned long   volatile DCH0SSACLR       absolute 0xBF883094;
sfr unsigned long   volatile DCH0SSASET       absolute 0xBF883098;
sfr unsigned long   volatile DCH0SSAINV       absolute 0xBF88309C;
sfr atomic unsigned long   volatile DCH0DSA          absolute 0xBF8830A0;
    const register unsigned short int CHDSA0 = 0;
    sbit  CHDSA0_bit at DCH0DSA.B0;
    const register unsigned short int CHDSA1 = 1;
    sbit  CHDSA1_bit at DCH0DSA.B1;
    const register unsigned short int CHDSA2 = 2;
    sbit  CHDSA2_bit at DCH0DSA.B2;
    const register unsigned short int CHDSA3 = 3;
    sbit  CHDSA3_bit at DCH0DSA.B3;
    const register unsigned short int CHDSA4 = 4;
    sbit  CHDSA4_bit at DCH0DSA.B4;
    const register unsigned short int CHDSA5 = 5;
    sbit  CHDSA5_bit at DCH0DSA.B5;
    const register unsigned short int CHDSA6 = 6;
    sbit  CHDSA6_bit at DCH0DSA.B6;
    const register unsigned short int CHDSA7 = 7;
    sbit  CHDSA7_bit at DCH0DSA.B7;
    const register unsigned short int CHDSA8 = 8;
    sbit  CHDSA8_bit at DCH0DSA.B8;
    const register unsigned short int CHDSA9 = 9;
    sbit  CHDSA9_bit at DCH0DSA.B9;
    const register unsigned short int CHDSA10 = 10;
    sbit  CHDSA10_bit at DCH0DSA.B10;
    const register unsigned short int CHDSA11 = 11;
    sbit  CHDSA11_bit at DCH0DSA.B11;
    const register unsigned short int CHDSA12 = 12;
    sbit  CHDSA12_bit at DCH0DSA.B12;
    const register unsigned short int CHDSA13 = 13;
    sbit  CHDSA13_bit at DCH0DSA.B13;
    const register unsigned short int CHDSA14 = 14;
    sbit  CHDSA14_bit at DCH0DSA.B14;
    const register unsigned short int CHDSA15 = 15;
    sbit  CHDSA15_bit at DCH0DSA.B15;
    const register unsigned short int CHDSA16 = 16;
    sbit  CHDSA16_bit at DCH0DSA.B16;
    const register unsigned short int CHDSA17 = 17;
    sbit  CHDSA17_bit at DCH0DSA.B17;
    const register unsigned short int CHDSA18 = 18;
    sbit  CHDSA18_bit at DCH0DSA.B18;
    const register unsigned short int CHDSA19 = 19;
    sbit  CHDSA19_bit at DCH0DSA.B19;
    const register unsigned short int CHDSA20 = 20;
    sbit  CHDSA20_bit at DCH0DSA.B20;
    const register unsigned short int CHDSA21 = 21;
    sbit  CHDSA21_bit at DCH0DSA.B21;
    const register unsigned short int CHDSA22 = 22;
    sbit  CHDSA22_bit at DCH0DSA.B22;
    const register unsigned short int CHDSA23 = 23;
    sbit  CHDSA23_bit at DCH0DSA.B23;
    const register unsigned short int CHDSA24 = 24;
    sbit  CHDSA24_bit at DCH0DSA.B24;
    const register unsigned short int CHDSA25 = 25;
    sbit  CHDSA25_bit at DCH0DSA.B25;
    const register unsigned short int CHDSA26 = 26;
    sbit  CHDSA26_bit at DCH0DSA.B26;
    const register unsigned short int CHDSA27 = 27;
    sbit  CHDSA27_bit at DCH0DSA.B27;
    const register unsigned short int CHDSA28 = 28;
    sbit  CHDSA28_bit at DCH0DSA.B28;
    const register unsigned short int CHDSA29 = 29;
    sbit  CHDSA29_bit at DCH0DSA.B29;
    const register unsigned short int CHDSA30 = 30;
    sbit  CHDSA30_bit at DCH0DSA.B30;
    const register unsigned short int CHDSA31 = 31;
    sbit  CHDSA31_bit at DCH0DSA.B31;
sfr unsigned long   volatile DCH0DSACLR       absolute 0xBF8830A4;
sfr unsigned long   volatile DCH0DSASET       absolute 0xBF8830A8;
sfr unsigned long   volatile DCH0DSAINV       absolute 0xBF8830AC;
sfr atomic unsigned long   volatile DCH0SSIZ         absolute 0xBF8830B0;
sfr unsigned long   volatile DCH0SSIZCLR      absolute 0xBF8830B4;
sfr unsigned long   volatile DCH0SSIZSET      absolute 0xBF8830B8;
sfr unsigned long   volatile DCH0SSIZINV      absolute 0xBF8830BC;
sfr atomic unsigned long   volatile DCH0DSIZ         absolute 0xBF8830C0;
sfr unsigned long   volatile DCH0DSIZCLR      absolute 0xBF8830C4;
sfr unsigned long   volatile DCH0DSIZSET      absolute 0xBF8830C8;
sfr unsigned long   volatile DCH0DSIZINV      absolute 0xBF8830CC;
sfr atomic unsigned long   volatile DCH0SPTR         absolute 0xBF8830D0;
sfr unsigned long   volatile DCH0SPTRCLR      absolute 0xBF8830D4;
sfr unsigned long   volatile DCH0SPTRSET      absolute 0xBF8830D8;
sfr unsigned long   volatile DCH0SPTRINV      absolute 0xBF8830DC;
sfr atomic unsigned long   volatile DCH0DPTR         absolute 0xBF8830E0;
sfr unsigned long   volatile DCH0DPTRCLR      absolute 0xBF8830E4;
sfr unsigned long   volatile DCH0DPTRSET      absolute 0xBF8830E8;
sfr unsigned long   volatile DCH0DPTRINV      absolute 0xBF8830EC;
sfr atomic unsigned long   volatile DCH0CSIZ         absolute 0xBF8830F0;
sfr unsigned long   volatile DCH0CSIZCLR      absolute 0xBF8830F4;
sfr unsigned long   volatile DCH0CSIZSET      absolute 0xBF8830F8;
sfr unsigned long   volatile DCH0CSIZINV      absolute 0xBF8830FC;
sfr atomic unsigned long   volatile DCH0CPTR         absolute 0xBF883100;
sfr unsigned long   volatile DCH0CPTRCLR      absolute 0xBF883104;
sfr unsigned long   volatile DCH0CPTRSET      absolute 0xBF883108;
sfr unsigned long   volatile DCH0CPTRINV      absolute 0xBF88310C;
sfr atomic unsigned long   volatile DCH0DAT          absolute 0xBF883110;
sfr unsigned long   volatile DCH0DATCLR       absolute 0xBF883114;
sfr unsigned long   volatile DCH0DATSET       absolute 0xBF883118;
sfr unsigned long   volatile DCH0DATINV       absolute 0xBF88311C;
sfr atomic unsigned long   volatile DCH1CON          absolute 0xBF883120;
    sbit  CHPRI0_DCH1CON_bit at DCH1CON.B0;
    sbit  CHPRI1_DCH1CON_bit at DCH1CON.B1;
    sbit  CHEDET_DCH1CON_bit at DCH1CON.B2;
    sbit  CHAEN_DCH1CON_bit at DCH1CON.B4;
    sbit  CHCHN_DCH1CON_bit at DCH1CON.B5;
    sbit  CHAED_DCH1CON_bit at DCH1CON.B6;
    sbit  CHEN_DCH1CON_bit at DCH1CON.B7;
    sbit  CHCHNS_DCH1CON_bit at DCH1CON.B8;
    sbit  CHBUSY_DCH1CON_bit at DCH1CON.B15;
sfr unsigned long   volatile DCH1CONCLR       absolute 0xBF883124;
sfr unsigned long   volatile DCH1CONSET       absolute 0xBF883128;
sfr unsigned long   volatile DCH1CONINV       absolute 0xBF88312C;
sfr atomic unsigned long   volatile DCH1ECON         absolute 0xBF883130;
    sbit  AIRQEN_DCH1ECON_bit at DCH1ECON.B3;
    sbit  SIRQEN_DCH1ECON_bit at DCH1ECON.B4;
    sbit  PATEN_DCH1ECON_bit at DCH1ECON.B5;
    sbit  CABORT_DCH1ECON_bit at DCH1ECON.B6;
    sbit  CFORCE_DCH1ECON_bit at DCH1ECON.B7;
    sbit  CHSIRQ0_DCH1ECON_bit at DCH1ECON.B8;
    sbit  CHSIRQ1_DCH1ECON_bit at DCH1ECON.B9;
    sbit  CHSIRQ2_DCH1ECON_bit at DCH1ECON.B10;
    sbit  CHSIRQ3_DCH1ECON_bit at DCH1ECON.B11;
    sbit  CHSIRQ4_DCH1ECON_bit at DCH1ECON.B12;
    sbit  CHSIRQ5_DCH1ECON_bit at DCH1ECON.B13;
    sbit  CHSIRQ6_DCH1ECON_bit at DCH1ECON.B14;
    sbit  CHSIRQ7_DCH1ECON_bit at DCH1ECON.B15;
    sbit  CHAIRQ0_DCH1ECON_bit at DCH1ECON.B16;
    sbit  CHAIRQ1_DCH1ECON_bit at DCH1ECON.B17;
    sbit  CHAIRQ2_DCH1ECON_bit at DCH1ECON.B18;
    sbit  CHAIRQ3_DCH1ECON_bit at DCH1ECON.B19;
    sbit  CHAIRQ4_DCH1ECON_bit at DCH1ECON.B20;
    sbit  CHAIRQ5_DCH1ECON_bit at DCH1ECON.B21;
    sbit  CHAIRQ6_DCH1ECON_bit at DCH1ECON.B22;
    sbit  CHAIRQ7_DCH1ECON_bit at DCH1ECON.B23;
sfr unsigned long   volatile DCH1ECONCLR      absolute 0xBF883134;
sfr unsigned long   volatile DCH1ECONSET      absolute 0xBF883138;
sfr unsigned long   volatile DCH1ECONINV      absolute 0xBF88313C;
sfr atomic unsigned long   volatile DCH1INT          absolute 0xBF883140;
    sbit  CHERIF_DCH1INT_bit at DCH1INT.B0;
    sbit  CHTAIF_DCH1INT_bit at DCH1INT.B1;
    sbit  CHCCIF_DCH1INT_bit at DCH1INT.B2;
    sbit  CHBCIF_DCH1INT_bit at DCH1INT.B3;
    sbit  CHDHIF_DCH1INT_bit at DCH1INT.B4;
    sbit  CHDDIF_DCH1INT_bit at DCH1INT.B5;
    sbit  CHSHIF_DCH1INT_bit at DCH1INT.B6;
    sbit  CHSDIF_DCH1INT_bit at DCH1INT.B7;
    sbit  CHERIE_DCH1INT_bit at DCH1INT.B16;
    sbit  CHTAIE_DCH1INT_bit at DCH1INT.B17;
    sbit  CHCCIE_DCH1INT_bit at DCH1INT.B18;
    sbit  CHBCIE_DCH1INT_bit at DCH1INT.B19;
    sbit  CHDHIE_DCH1INT_bit at DCH1INT.B20;
    sbit  CHDDIE_DCH1INT_bit at DCH1INT.B21;
    sbit  CHSHIE_DCH1INT_bit at DCH1INT.B22;
    sbit  CHSDIE_DCH1INT_bit at DCH1INT.B23;
sfr unsigned long   volatile DCH1INTCLR       absolute 0xBF883144;
sfr unsigned long   volatile DCH1INTSET       absolute 0xBF883148;
sfr unsigned long   volatile DCH1INTINV       absolute 0xBF88314C;
sfr atomic unsigned long   volatile DCH1SSA          absolute 0xBF883150;
    sbit  CHSSA0_DCH1SSA_bit at DCH1SSA.B0;
    sbit  CHSSA1_DCH1SSA_bit at DCH1SSA.B1;
    sbit  CHSSA2_DCH1SSA_bit at DCH1SSA.B2;
    sbit  CHSSA3_DCH1SSA_bit at DCH1SSA.B3;
    sbit  CHSSA4_DCH1SSA_bit at DCH1SSA.B4;
    sbit  CHSSA5_DCH1SSA_bit at DCH1SSA.B5;
    sbit  CHSSA6_DCH1SSA_bit at DCH1SSA.B6;
    sbit  CHSSA7_DCH1SSA_bit at DCH1SSA.B7;
    sbit  CHSSA8_DCH1SSA_bit at DCH1SSA.B8;
    sbit  CHSSA9_DCH1SSA_bit at DCH1SSA.B9;
    sbit  CHSSA10_DCH1SSA_bit at DCH1SSA.B10;
    sbit  CHSSA11_DCH1SSA_bit at DCH1SSA.B11;
    sbit  CHSSA12_DCH1SSA_bit at DCH1SSA.B12;
    sbit  CHSSA13_DCH1SSA_bit at DCH1SSA.B13;
    sbit  CHSSA14_DCH1SSA_bit at DCH1SSA.B14;
    sbit  CHSSA15_DCH1SSA_bit at DCH1SSA.B15;
    sbit  CHSSA16_DCH1SSA_bit at DCH1SSA.B16;
    sbit  CHSSA17_DCH1SSA_bit at DCH1SSA.B17;
    sbit  CHSSA18_DCH1SSA_bit at DCH1SSA.B18;
    sbit  CHSSA19_DCH1SSA_bit at DCH1SSA.B19;
    sbit  CHSSA20_DCH1SSA_bit at DCH1SSA.B20;
    sbit  CHSSA21_DCH1SSA_bit at DCH1SSA.B21;
    sbit  CHSSA22_DCH1SSA_bit at DCH1SSA.B22;
    sbit  CHSSA23_DCH1SSA_bit at DCH1SSA.B23;
    sbit  CHSSA24_DCH1SSA_bit at DCH1SSA.B24;
    sbit  CHSSA25_DCH1SSA_bit at DCH1SSA.B25;
    sbit  CHSSA26_DCH1SSA_bit at DCH1SSA.B26;
    sbit  CHSSA27_DCH1SSA_bit at DCH1SSA.B27;
    sbit  CHSSA28_DCH1SSA_bit at DCH1SSA.B28;
    sbit  CHSSA29_DCH1SSA_bit at DCH1SSA.B29;
    sbit  CHSSA30_DCH1SSA_bit at DCH1SSA.B30;
    sbit  CHSSA31_DCH1SSA_bit at DCH1SSA.B31;
sfr unsigned long   volatile DCH1SSACLR       absolute 0xBF883154;
sfr unsigned long   volatile DCH1SSASET       absolute 0xBF883158;
sfr unsigned long   volatile DCH1SSAINV       absolute 0xBF88315C;
sfr atomic unsigned long   volatile DCH1DSA          absolute 0xBF883160;
    sbit  CHDSA0_DCH1DSA_bit at DCH1DSA.B0;
    sbit  CHDSA1_DCH1DSA_bit at DCH1DSA.B1;
    sbit  CHDSA2_DCH1DSA_bit at DCH1DSA.B2;
    sbit  CHDSA3_DCH1DSA_bit at DCH1DSA.B3;
    sbit  CHDSA4_DCH1DSA_bit at DCH1DSA.B4;
    sbit  CHDSA5_DCH1DSA_bit at DCH1DSA.B5;
    sbit  CHDSA6_DCH1DSA_bit at DCH1DSA.B6;
    sbit  CHDSA7_DCH1DSA_bit at DCH1DSA.B7;
    sbit  CHDSA8_DCH1DSA_bit at DCH1DSA.B8;
    sbit  CHDSA9_DCH1DSA_bit at DCH1DSA.B9;
    sbit  CHDSA10_DCH1DSA_bit at DCH1DSA.B10;
    sbit  CHDSA11_DCH1DSA_bit at DCH1DSA.B11;
    sbit  CHDSA12_DCH1DSA_bit at DCH1DSA.B12;
    sbit  CHDSA13_DCH1DSA_bit at DCH1DSA.B13;
    sbit  CHDSA14_DCH1DSA_bit at DCH1DSA.B14;
    sbit  CHDSA15_DCH1DSA_bit at DCH1DSA.B15;
    sbit  CHDSA16_DCH1DSA_bit at DCH1DSA.B16;
    sbit  CHDSA17_DCH1DSA_bit at DCH1DSA.B17;
    sbit  CHDSA18_DCH1DSA_bit at DCH1DSA.B18;
    sbit  CHDSA19_DCH1DSA_bit at DCH1DSA.B19;
    sbit  CHDSA20_DCH1DSA_bit at DCH1DSA.B20;
    sbit  CHDSA21_DCH1DSA_bit at DCH1DSA.B21;
    sbit  CHDSA22_DCH1DSA_bit at DCH1DSA.B22;
    sbit  CHDSA23_DCH1DSA_bit at DCH1DSA.B23;
    sbit  CHDSA24_DCH1DSA_bit at DCH1DSA.B24;
    sbit  CHDSA25_DCH1DSA_bit at DCH1DSA.B25;
    sbit  CHDSA26_DCH1DSA_bit at DCH1DSA.B26;
    sbit  CHDSA27_DCH1DSA_bit at DCH1DSA.B27;
    sbit  CHDSA28_DCH1DSA_bit at DCH1DSA.B28;
    sbit  CHDSA29_DCH1DSA_bit at DCH1DSA.B29;
    sbit  CHDSA30_DCH1DSA_bit at DCH1DSA.B30;
    sbit  CHDSA31_DCH1DSA_bit at DCH1DSA.B31;
sfr unsigned long   volatile DCH1DSACLR       absolute 0xBF883164;
sfr unsigned long   volatile DCH1DSASET       absolute 0xBF883168;
sfr unsigned long   volatile DCH1DSAINV       absolute 0xBF88316C;
sfr atomic unsigned long   volatile DCH1SSIZ         absolute 0xBF883170;
sfr unsigned long   volatile DCH1SSIZCLR      absolute 0xBF883174;
sfr unsigned long   volatile DCH1SSIZSET      absolute 0xBF883178;
sfr unsigned long   volatile DCH1SSIZINV      absolute 0xBF88317C;
sfr atomic unsigned long   volatile DCH1DSIZ         absolute 0xBF883180;
sfr unsigned long   volatile DCH1DSIZCLR      absolute 0xBF883184;
sfr unsigned long   volatile DCH1DSIZSET      absolute 0xBF883188;
sfr unsigned long   volatile DCH1DSIZINV      absolute 0xBF88318C;
sfr atomic unsigned long   volatile DCH1SPTR         absolute 0xBF883190;
sfr unsigned long   volatile DCH1SPTRCLR      absolute 0xBF883194;
sfr unsigned long   volatile DCH1SPTRSET      absolute 0xBF883198;
sfr unsigned long   volatile DCH1SPTRINV      absolute 0xBF88319C;
sfr atomic unsigned long   volatile DCH1DPTR         absolute 0xBF8831A0;
sfr unsigned long   volatile DCH1DPTRCLR      absolute 0xBF8831A4;
sfr unsigned long   volatile DCH1DPTRSET      absolute 0xBF8831A8;
sfr unsigned long   volatile DCH1DPTRINV      absolute 0xBF8831AC;
sfr atomic unsigned long   volatile DCH1CSIZ         absolute 0xBF8831B0;
sfr unsigned long   volatile DCH1CSIZCLR      absolute 0xBF8831B4;
sfr unsigned long   volatile DCH1CSIZSET      absolute 0xBF8831B8;
sfr unsigned long   volatile DCH1CSIZINV      absolute 0xBF8831BC;
sfr atomic unsigned long   volatile DCH1CPTR         absolute 0xBF8831C0;
sfr unsigned long   volatile DCH1CPTRCLR      absolute 0xBF8831C4;
sfr unsigned long   volatile DCH1CPTRSET      absolute 0xBF8831C8;
sfr unsigned long   volatile DCH1CPTRINV      absolute 0xBF8831CC;
sfr atomic unsigned long   volatile DCH1DAT          absolute 0xBF8831D0;
sfr unsigned long   volatile DCH1DATCLR       absolute 0xBF8831D4;
sfr unsigned long   volatile DCH1DATSET       absolute 0xBF8831D8;
sfr unsigned long   volatile DCH1DATINV       absolute 0xBF8831DC;
sfr atomic unsigned long   volatile DCH2CON          absolute 0xBF8831E0;
    sbit  CHPRI0_DCH2CON_bit at DCH2CON.B0;
    sbit  CHPRI1_DCH2CON_bit at DCH2CON.B1;
    sbit  CHEDET_DCH2CON_bit at DCH2CON.B2;
    sbit  CHAEN_DCH2CON_bit at DCH2CON.B4;
    sbit  CHCHN_DCH2CON_bit at DCH2CON.B5;
    sbit  CHAED_DCH2CON_bit at DCH2CON.B6;
    sbit  CHEN_DCH2CON_bit at DCH2CON.B7;
    sbit  CHCHNS_DCH2CON_bit at DCH2CON.B8;
    sbit  CHBUSY_DCH2CON_bit at DCH2CON.B15;
sfr unsigned long   volatile DCH2CONCLR       absolute 0xBF8831E4;
sfr unsigned long   volatile DCH2CONSET       absolute 0xBF8831E8;
sfr unsigned long   volatile DCH2CONINV       absolute 0xBF8831EC;
sfr atomic unsigned long   volatile DCH2ECON         absolute 0xBF8831F0;
    sbit  AIRQEN_DCH2ECON_bit at DCH2ECON.B3;
    sbit  SIRQEN_DCH2ECON_bit at DCH2ECON.B4;
    sbit  PATEN_DCH2ECON_bit at DCH2ECON.B5;
    sbit  CABORT_DCH2ECON_bit at DCH2ECON.B6;
    sbit  CFORCE_DCH2ECON_bit at DCH2ECON.B7;
    sbit  CHSIRQ0_DCH2ECON_bit at DCH2ECON.B8;
    sbit  CHSIRQ1_DCH2ECON_bit at DCH2ECON.B9;
    sbit  CHSIRQ2_DCH2ECON_bit at DCH2ECON.B10;
    sbit  CHSIRQ3_DCH2ECON_bit at DCH2ECON.B11;
    sbit  CHSIRQ4_DCH2ECON_bit at DCH2ECON.B12;
    sbit  CHSIRQ5_DCH2ECON_bit at DCH2ECON.B13;
    sbit  CHSIRQ6_DCH2ECON_bit at DCH2ECON.B14;
    sbit  CHSIRQ7_DCH2ECON_bit at DCH2ECON.B15;
    sbit  CHAIRQ0_DCH2ECON_bit at DCH2ECON.B16;
    sbit  CHAIRQ1_DCH2ECON_bit at DCH2ECON.B17;
    sbit  CHAIRQ2_DCH2ECON_bit at DCH2ECON.B18;
    sbit  CHAIRQ3_DCH2ECON_bit at DCH2ECON.B19;
    sbit  CHAIRQ4_DCH2ECON_bit at DCH2ECON.B20;
    sbit  CHAIRQ5_DCH2ECON_bit at DCH2ECON.B21;
    sbit  CHAIRQ6_DCH2ECON_bit at DCH2ECON.B22;
    sbit  CHAIRQ7_DCH2ECON_bit at DCH2ECON.B23;
sfr unsigned long   volatile DCH2ECONCLR      absolute 0xBF8831F4;
sfr unsigned long   volatile DCH2ECONSET      absolute 0xBF8831F8;
sfr unsigned long   volatile DCH2ECONINV      absolute 0xBF8831FC;
sfr atomic unsigned long   volatile DCH2INT          absolute 0xBF883200;
    sbit  CHERIF_DCH2INT_bit at DCH2INT.B0;
    sbit  CHTAIF_DCH2INT_bit at DCH2INT.B1;
    sbit  CHCCIF_DCH2INT_bit at DCH2INT.B2;
    sbit  CHBCIF_DCH2INT_bit at DCH2INT.B3;
    sbit  CHDHIF_DCH2INT_bit at DCH2INT.B4;
    sbit  CHDDIF_DCH2INT_bit at DCH2INT.B5;
    sbit  CHSHIF_DCH2INT_bit at DCH2INT.B6;
    sbit  CHSDIF_DCH2INT_bit at DCH2INT.B7;
    sbit  CHERIE_DCH2INT_bit at DCH2INT.B16;
    sbit  CHTAIE_DCH2INT_bit at DCH2INT.B17;
    sbit  CHCCIE_DCH2INT_bit at DCH2INT.B18;
    sbit  CHBCIE_DCH2INT_bit at DCH2INT.B19;
    sbit  CHDHIE_DCH2INT_bit at DCH2INT.B20;
    sbit  CHDDIE_DCH2INT_bit at DCH2INT.B21;
    sbit  CHSHIE_DCH2INT_bit at DCH2INT.B22;
    sbit  CHSDIE_DCH2INT_bit at DCH2INT.B23;
sfr unsigned long   volatile DCH2INTCLR       absolute 0xBF883204;
sfr unsigned long   volatile DCH2INTSET       absolute 0xBF883208;
sfr unsigned long   volatile DCH2INTINV       absolute 0xBF88320C;
sfr atomic unsigned long   volatile DCH2SSA          absolute 0xBF883210;
    sbit  CHSSA0_DCH2SSA_bit at DCH2SSA.B0;
    sbit  CHSSA1_DCH2SSA_bit at DCH2SSA.B1;
    sbit  CHSSA2_DCH2SSA_bit at DCH2SSA.B2;
    sbit  CHSSA3_DCH2SSA_bit at DCH2SSA.B3;
    sbit  CHSSA4_DCH2SSA_bit at DCH2SSA.B4;
    sbit  CHSSA5_DCH2SSA_bit at DCH2SSA.B5;
    sbit  CHSSA6_DCH2SSA_bit at DCH2SSA.B6;
    sbit  CHSSA7_DCH2SSA_bit at DCH2SSA.B7;
    sbit  CHSSA8_DCH2SSA_bit at DCH2SSA.B8;
    sbit  CHSSA9_DCH2SSA_bit at DCH2SSA.B9;
    sbit  CHSSA10_DCH2SSA_bit at DCH2SSA.B10;
    sbit  CHSSA11_DCH2SSA_bit at DCH2SSA.B11;
    sbit  CHSSA12_DCH2SSA_bit at DCH2SSA.B12;
    sbit  CHSSA13_DCH2SSA_bit at DCH2SSA.B13;
    sbit  CHSSA14_DCH2SSA_bit at DCH2SSA.B14;
    sbit  CHSSA15_DCH2SSA_bit at DCH2SSA.B15;
    sbit  CHSSA16_DCH2SSA_bit at DCH2SSA.B16;
    sbit  CHSSA17_DCH2SSA_bit at DCH2SSA.B17;
    sbit  CHSSA18_DCH2SSA_bit at DCH2SSA.B18;
    sbit  CHSSA19_DCH2SSA_bit at DCH2SSA.B19;
    sbit  CHSSA20_DCH2SSA_bit at DCH2SSA.B20;
    sbit  CHSSA21_DCH2SSA_bit at DCH2SSA.B21;
    sbit  CHSSA22_DCH2SSA_bit at DCH2SSA.B22;
    sbit  CHSSA23_DCH2SSA_bit at DCH2SSA.B23;
    sbit  CHSSA24_DCH2SSA_bit at DCH2SSA.B24;
    sbit  CHSSA25_DCH2SSA_bit at DCH2SSA.B25;
    sbit  CHSSA26_DCH2SSA_bit at DCH2SSA.B26;
    sbit  CHSSA27_DCH2SSA_bit at DCH2SSA.B27;
    sbit  CHSSA28_DCH2SSA_bit at DCH2SSA.B28;
    sbit  CHSSA29_DCH2SSA_bit at DCH2SSA.B29;
    sbit  CHSSA30_DCH2SSA_bit at DCH2SSA.B30;
    sbit  CHSSA31_DCH2SSA_bit at DCH2SSA.B31;
sfr unsigned long   volatile DCH2SSACLR       absolute 0xBF883214;
sfr unsigned long   volatile DCH2SSASET       absolute 0xBF883218;
sfr unsigned long   volatile DCH2SSAINV       absolute 0xBF88321C;
sfr atomic unsigned long   volatile DCH2DSA          absolute 0xBF883220;
    sbit  CHDSA0_DCH2DSA_bit at DCH2DSA.B0;
    sbit  CHDSA1_DCH2DSA_bit at DCH2DSA.B1;
    sbit  CHDSA2_DCH2DSA_bit at DCH2DSA.B2;
    sbit  CHDSA3_DCH2DSA_bit at DCH2DSA.B3;
    sbit  CHDSA4_DCH2DSA_bit at DCH2DSA.B4;
    sbit  CHDSA5_DCH2DSA_bit at DCH2DSA.B5;
    sbit  CHDSA6_DCH2DSA_bit at DCH2DSA.B6;
    sbit  CHDSA7_DCH2DSA_bit at DCH2DSA.B7;
    sbit  CHDSA8_DCH2DSA_bit at DCH2DSA.B8;
    sbit  CHDSA9_DCH2DSA_bit at DCH2DSA.B9;
    sbit  CHDSA10_DCH2DSA_bit at DCH2DSA.B10;
    sbit  CHDSA11_DCH2DSA_bit at DCH2DSA.B11;
    sbit  CHDSA12_DCH2DSA_bit at DCH2DSA.B12;
    sbit  CHDSA13_DCH2DSA_bit at DCH2DSA.B13;
    sbit  CHDSA14_DCH2DSA_bit at DCH2DSA.B14;
    sbit  CHDSA15_DCH2DSA_bit at DCH2DSA.B15;
    sbit  CHDSA16_DCH2DSA_bit at DCH2DSA.B16;
    sbit  CHDSA17_DCH2DSA_bit at DCH2DSA.B17;
    sbit  CHDSA18_DCH2DSA_bit at DCH2DSA.B18;
    sbit  CHDSA19_DCH2DSA_bit at DCH2DSA.B19;
    sbit  CHDSA20_DCH2DSA_bit at DCH2DSA.B20;
    sbit  CHDSA21_DCH2DSA_bit at DCH2DSA.B21;
    sbit  CHDSA22_DCH2DSA_bit at DCH2DSA.B22;
    sbit  CHDSA23_DCH2DSA_bit at DCH2DSA.B23;
    sbit  CHDSA24_DCH2DSA_bit at DCH2DSA.B24;
    sbit  CHDSA25_DCH2DSA_bit at DCH2DSA.B25;
    sbit  CHDSA26_DCH2DSA_bit at DCH2DSA.B26;
    sbit  CHDSA27_DCH2DSA_bit at DCH2DSA.B27;
    sbit  CHDSA28_DCH2DSA_bit at DCH2DSA.B28;
    sbit  CHDSA29_DCH2DSA_bit at DCH2DSA.B29;
    sbit  CHDSA30_DCH2DSA_bit at DCH2DSA.B30;
    sbit  CHDSA31_DCH2DSA_bit at DCH2DSA.B31;
sfr unsigned long   volatile DCH2DSACLR       absolute 0xBF883224;
sfr unsigned long   volatile DCH2DSASET       absolute 0xBF883228;
sfr unsigned long   volatile DCH2DSAINV       absolute 0xBF88322C;
sfr atomic unsigned long   volatile DCH2SSIZ         absolute 0xBF883230;
sfr unsigned long   volatile DCH2SSIZCLR      absolute 0xBF883234;
sfr unsigned long   volatile DCH2SSIZSET      absolute 0xBF883238;
sfr unsigned long   volatile DCH2SSIZINV      absolute 0xBF88323C;
sfr atomic unsigned long   volatile DCH2DSIZ         absolute 0xBF883240;
sfr unsigned long   volatile DCH2DSIZCLR      absolute 0xBF883244;
sfr unsigned long   volatile DCH2DSIZSET      absolute 0xBF883248;
sfr unsigned long   volatile DCH2DSIZINV      absolute 0xBF88324C;
sfr atomic unsigned long   volatile DCH2SPTR         absolute 0xBF883250;
sfr unsigned long   volatile DCH2SPTRCLR      absolute 0xBF883254;
sfr unsigned long   volatile DCH2SPTRSET      absolute 0xBF883258;
sfr unsigned long   volatile DCH2SPTRINV      absolute 0xBF88325C;
sfr atomic unsigned long   volatile DCH2DPTR         absolute 0xBF883260;
sfr unsigned long   volatile DCH2DPTRCLR      absolute 0xBF883264;
sfr unsigned long   volatile DCH2DPTRSET      absolute 0xBF883268;
sfr unsigned long   volatile DCH2DPTRINV      absolute 0xBF88326C;
sfr atomic unsigned long   volatile DCH2CSIZ         absolute 0xBF883270;
sfr unsigned long   volatile DCH2CSIZCLR      absolute 0xBF883274;
sfr unsigned long   volatile DCH2CSIZSET      absolute 0xBF883278;
sfr unsigned long   volatile DCH2CSIZINV      absolute 0xBF88327C;
sfr atomic unsigned long   volatile DCH2CPTR         absolute 0xBF883280;
sfr unsigned long   volatile DCH2CPTRCLR      absolute 0xBF883284;
sfr unsigned long   volatile DCH2CPTRSET      absolute 0xBF883288;
sfr unsigned long   volatile DCH2CPTRINV      absolute 0xBF88328C;
sfr atomic unsigned long   volatile DCH2DAT          absolute 0xBF883290;
sfr unsigned long   volatile DCH2DATCLR       absolute 0xBF883294;
sfr unsigned long   volatile DCH2DATSET       absolute 0xBF883298;
sfr unsigned long   volatile DCH2DATINV       absolute 0xBF88329C;
sfr atomic unsigned long   volatile DCH3CON          absolute 0xBF8832A0;
    sbit  CHPRI0_DCH3CON_bit at DCH3CON.B0;
    sbit  CHPRI1_DCH3CON_bit at DCH3CON.B1;
    sbit  CHEDET_DCH3CON_bit at DCH3CON.B2;
    sbit  CHAEN_DCH3CON_bit at DCH3CON.B4;
    sbit  CHCHN_DCH3CON_bit at DCH3CON.B5;
    sbit  CHAED_DCH3CON_bit at DCH3CON.B6;
    sbit  CHEN_DCH3CON_bit at DCH3CON.B7;
    sbit  CHCHNS_DCH3CON_bit at DCH3CON.B8;
    sbit  CHBUSY_DCH3CON_bit at DCH3CON.B15;
sfr unsigned long   volatile DCH3CONCLR       absolute 0xBF8832A4;
sfr unsigned long   volatile DCH3CONSET       absolute 0xBF8832A8;
sfr unsigned long   volatile DCH3CONINV       absolute 0xBF8832AC;
sfr atomic unsigned long   volatile DCH3ECON         absolute 0xBF8832B0;
    sbit  AIRQEN_DCH3ECON_bit at DCH3ECON.B3;
    sbit  SIRQEN_DCH3ECON_bit at DCH3ECON.B4;
    sbit  PATEN_DCH3ECON_bit at DCH3ECON.B5;
    sbit  CABORT_DCH3ECON_bit at DCH3ECON.B6;
    sbit  CFORCE_DCH3ECON_bit at DCH3ECON.B7;
    sbit  CHSIRQ0_DCH3ECON_bit at DCH3ECON.B8;
    sbit  CHSIRQ1_DCH3ECON_bit at DCH3ECON.B9;
    sbit  CHSIRQ2_DCH3ECON_bit at DCH3ECON.B10;
    sbit  CHSIRQ3_DCH3ECON_bit at DCH3ECON.B11;
    sbit  CHSIRQ4_DCH3ECON_bit at DCH3ECON.B12;
    sbit  CHSIRQ5_DCH3ECON_bit at DCH3ECON.B13;
    sbit  CHSIRQ6_DCH3ECON_bit at DCH3ECON.B14;
    sbit  CHSIRQ7_DCH3ECON_bit at DCH3ECON.B15;
    sbit  CHAIRQ0_DCH3ECON_bit at DCH3ECON.B16;
    sbit  CHAIRQ1_DCH3ECON_bit at DCH3ECON.B17;
    sbit  CHAIRQ2_DCH3ECON_bit at DCH3ECON.B18;
    sbit  CHAIRQ3_DCH3ECON_bit at DCH3ECON.B19;
    sbit  CHAIRQ4_DCH3ECON_bit at DCH3ECON.B20;
    sbit  CHAIRQ5_DCH3ECON_bit at DCH3ECON.B21;
    sbit  CHAIRQ6_DCH3ECON_bit at DCH3ECON.B22;
    sbit  CHAIRQ7_DCH3ECON_bit at DCH3ECON.B23;
sfr unsigned long   volatile DCH3ECONCLR      absolute 0xBF8832B4;
sfr unsigned long   volatile DCH3ECONSET      absolute 0xBF8832B8;
sfr unsigned long   volatile DCH3ECONINV      absolute 0xBF8832BC;
sfr atomic unsigned long   volatile DCH3INT          absolute 0xBF8832C0;
    sbit  CHERIF_DCH3INT_bit at DCH3INT.B0;
    sbit  CHTAIF_DCH3INT_bit at DCH3INT.B1;
    sbit  CHCCIF_DCH3INT_bit at DCH3INT.B2;
    sbit  CHBCIF_DCH3INT_bit at DCH3INT.B3;
    sbit  CHDHIF_DCH3INT_bit at DCH3INT.B4;
    sbit  CHDDIF_DCH3INT_bit at DCH3INT.B5;
    sbit  CHSHIF_DCH3INT_bit at DCH3INT.B6;
    sbit  CHSDIF_DCH3INT_bit at DCH3INT.B7;
    sbit  CHERIE_DCH3INT_bit at DCH3INT.B16;
    sbit  CHTAIE_DCH3INT_bit at DCH3INT.B17;
    sbit  CHCCIE_DCH3INT_bit at DCH3INT.B18;
    sbit  CHBCIE_DCH3INT_bit at DCH3INT.B19;
    sbit  CHDHIE_DCH3INT_bit at DCH3INT.B20;
    sbit  CHDDIE_DCH3INT_bit at DCH3INT.B21;
    sbit  CHSHIE_DCH3INT_bit at DCH3INT.B22;
    sbit  CHSDIE_DCH3INT_bit at DCH3INT.B23;
sfr unsigned long   volatile DCH3INTCLR       absolute 0xBF8832C4;
sfr unsigned long   volatile DCH3INTSET       absolute 0xBF8832C8;
sfr unsigned long   volatile DCH3INTINV       absolute 0xBF8832CC;
sfr atomic unsigned long   volatile DCH3SSA          absolute 0xBF8832D0;
    sbit  CHSSA0_DCH3SSA_bit at DCH3SSA.B0;
    sbit  CHSSA1_DCH3SSA_bit at DCH3SSA.B1;
    sbit  CHSSA2_DCH3SSA_bit at DCH3SSA.B2;
    sbit  CHSSA3_DCH3SSA_bit at DCH3SSA.B3;
    sbit  CHSSA4_DCH3SSA_bit at DCH3SSA.B4;
    sbit  CHSSA5_DCH3SSA_bit at DCH3SSA.B5;
    sbit  CHSSA6_DCH3SSA_bit at DCH3SSA.B6;
    sbit  CHSSA7_DCH3SSA_bit at DCH3SSA.B7;
    sbit  CHSSA8_DCH3SSA_bit at DCH3SSA.B8;
    sbit  CHSSA9_DCH3SSA_bit at DCH3SSA.B9;
    sbit  CHSSA10_DCH3SSA_bit at DCH3SSA.B10;
    sbit  CHSSA11_DCH3SSA_bit at DCH3SSA.B11;
    sbit  CHSSA12_DCH3SSA_bit at DCH3SSA.B12;
    sbit  CHSSA13_DCH3SSA_bit at DCH3SSA.B13;
    sbit  CHSSA14_DCH3SSA_bit at DCH3SSA.B14;
    sbit  CHSSA15_DCH3SSA_bit at DCH3SSA.B15;
    sbit  CHSSA16_DCH3SSA_bit at DCH3SSA.B16;
    sbit  CHSSA17_DCH3SSA_bit at DCH3SSA.B17;
    sbit  CHSSA18_DCH3SSA_bit at DCH3SSA.B18;
    sbit  CHSSA19_DCH3SSA_bit at DCH3SSA.B19;
    sbit  CHSSA20_DCH3SSA_bit at DCH3SSA.B20;
    sbit  CHSSA21_DCH3SSA_bit at DCH3SSA.B21;
    sbit  CHSSA22_DCH3SSA_bit at DCH3SSA.B22;
    sbit  CHSSA23_DCH3SSA_bit at DCH3SSA.B23;
    sbit  CHSSA24_DCH3SSA_bit at DCH3SSA.B24;
    sbit  CHSSA25_DCH3SSA_bit at DCH3SSA.B25;
    sbit  CHSSA26_DCH3SSA_bit at DCH3SSA.B26;
    sbit  CHSSA27_DCH3SSA_bit at DCH3SSA.B27;
    sbit  CHSSA28_DCH3SSA_bit at DCH3SSA.B28;
    sbit  CHSSA29_DCH3SSA_bit at DCH3SSA.B29;
    sbit  CHSSA30_DCH3SSA_bit at DCH3SSA.B30;
    sbit  CHSSA31_DCH3SSA_bit at DCH3SSA.B31;
sfr unsigned long   volatile DCH3SSACLR       absolute 0xBF8832D4;
sfr unsigned long   volatile DCH3SSASET       absolute 0xBF8832D8;
sfr unsigned long   volatile DCH3SSAINV       absolute 0xBF8832DC;
sfr atomic unsigned long   volatile DCH3DSA          absolute 0xBF8832E0;
    sbit  CHDSA0_DCH3DSA_bit at DCH3DSA.B0;
    sbit  CHDSA1_DCH3DSA_bit at DCH3DSA.B1;
    sbit  CHDSA2_DCH3DSA_bit at DCH3DSA.B2;
    sbit  CHDSA3_DCH3DSA_bit at DCH3DSA.B3;
    sbit  CHDSA4_DCH3DSA_bit at DCH3DSA.B4;
    sbit  CHDSA5_DCH3DSA_bit at DCH3DSA.B5;
    sbit  CHDSA6_DCH3DSA_bit at DCH3DSA.B6;
    sbit  CHDSA7_DCH3DSA_bit at DCH3DSA.B7;
    sbit  CHDSA8_DCH3DSA_bit at DCH3DSA.B8;
    sbit  CHDSA9_DCH3DSA_bit at DCH3DSA.B9;
    sbit  CHDSA10_DCH3DSA_bit at DCH3DSA.B10;
    sbit  CHDSA11_DCH3DSA_bit at DCH3DSA.B11;
    sbit  CHDSA12_DCH3DSA_bit at DCH3DSA.B12;
    sbit  CHDSA13_DCH3DSA_bit at DCH3DSA.B13;
    sbit  CHDSA14_DCH3DSA_bit at DCH3DSA.B14;
    sbit  CHDSA15_DCH3DSA_bit at DCH3DSA.B15;
    sbit  CHDSA16_DCH3DSA_bit at DCH3DSA.B16;
    sbit  CHDSA17_DCH3DSA_bit at DCH3DSA.B17;
    sbit  CHDSA18_DCH3DSA_bit at DCH3DSA.B18;
    sbit  CHDSA19_DCH3DSA_bit at DCH3DSA.B19;
    sbit  CHDSA20_DCH3DSA_bit at DCH3DSA.B20;
    sbit  CHDSA21_DCH3DSA_bit at DCH3DSA.B21;
    sbit  CHDSA22_DCH3DSA_bit at DCH3DSA.B22;
    sbit  CHDSA23_DCH3DSA_bit at DCH3DSA.B23;
    sbit  CHDSA24_DCH3DSA_bit at DCH3DSA.B24;
    sbit  CHDSA25_DCH3DSA_bit at DCH3DSA.B25;
    sbit  CHDSA26_DCH3DSA_bit at DCH3DSA.B26;
    sbit  CHDSA27_DCH3DSA_bit at DCH3DSA.B27;
    sbit  CHDSA28_DCH3DSA_bit at DCH3DSA.B28;
    sbit  CHDSA29_DCH3DSA_bit at DCH3DSA.B29;
    sbit  CHDSA30_DCH3DSA_bit at DCH3DSA.B30;
    sbit  CHDSA31_DCH3DSA_bit at DCH3DSA.B31;
sfr unsigned long   volatile DCH3DSACLR       absolute 0xBF8832E4;
sfr unsigned long   volatile DCH3DSASET       absolute 0xBF8832E8;
sfr unsigned long   volatile DCH3DSAINV       absolute 0xBF8832EC;
sfr atomic unsigned long   volatile DCH3SSIZ         absolute 0xBF8832F0;
sfr unsigned long   volatile DCH3SSIZCLR      absolute 0xBF8832F4;
sfr unsigned long   volatile DCH3SSIZSET      absolute 0xBF8832F8;
sfr unsigned long   volatile DCH3SSIZINV      absolute 0xBF8832FC;
sfr atomic unsigned long   volatile DCH3DSIZ         absolute 0xBF883300;
sfr unsigned long   volatile DCH3DSIZCLR      absolute 0xBF883304;
sfr unsigned long   volatile DCH3DSIZSET      absolute 0xBF883308;
sfr unsigned long   volatile DCH3DSIZINV      absolute 0xBF88330C;
sfr atomic unsigned long   volatile DCH3SPTR         absolute 0xBF883310;
sfr unsigned long   volatile DCH3SPTRCLR      absolute 0xBF883314;
sfr unsigned long   volatile DCH3SPTRSET      absolute 0xBF883318;
sfr unsigned long   volatile DCH3SPTRINV      absolute 0xBF88331C;
sfr atomic unsigned long   volatile DCH3DPTR         absolute 0xBF883320;
sfr unsigned long   volatile DCH3DPTRCLR      absolute 0xBF883324;
sfr unsigned long   volatile DCH3DPTRSET      absolute 0xBF883328;
sfr unsigned long   volatile DCH3DPTRINV      absolute 0xBF88332C;
sfr atomic unsigned long   volatile DCH3CSIZ         absolute 0xBF883330;
sfr unsigned long   volatile DCH3CSIZCLR      absolute 0xBF883334;
sfr unsigned long   volatile DCH3CSIZSET      absolute 0xBF883338;
sfr unsigned long   volatile DCH3CSIZINV      absolute 0xBF88333C;
sfr atomic unsigned long   volatile DCH3CPTR         absolute 0xBF883340;
sfr unsigned long   volatile DCH3CPTRCLR      absolute 0xBF883344;
sfr unsigned long   volatile DCH3CPTRSET      absolute 0xBF883348;
sfr unsigned long   volatile DCH3CPTRINV      absolute 0xBF88334C;
sfr atomic unsigned long   volatile DCH3DAT          absolute 0xBF883350;
sfr unsigned long   volatile DCH3DATCLR       absolute 0xBF883354;
sfr unsigned long   volatile DCH3DATSET       absolute 0xBF883358;
sfr unsigned long   volatile DCH3DATINV       absolute 0xBF88335C;
sfr unsigned long   volatile U1OTGIR          absolute 0xBF885040;
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
sfr unsigned long   volatile U1OTGIRCLR       absolute 0xBF885044;
sfr unsigned long   volatile U1OTGIE          absolute 0xBF885050;
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
sfr unsigned long   volatile U1OTGIECLR       absolute 0xBF885054;
sfr unsigned long   volatile U1OTGIESET       absolute 0xBF885058;
sfr unsigned long   volatile U1OTGIEINV       absolute 0xBF88505C;
sfr unsigned long   volatile U1OTGSTAT        absolute 0xBF885060;
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
sfr unsigned long   volatile U1OTGCON         absolute 0xBF885070;
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
sfr unsigned long   volatile U1OTGCONCLR      absolute 0xBF885074;
sfr unsigned long   volatile U1OTGCONSET      absolute 0xBF885078;
sfr unsigned long   volatile U1OTGCONINV      absolute 0xBF88507C;
sfr unsigned long   volatile U1PWRC           absolute 0xBF885080;
    const register unsigned short int USBPWR = 0;
    sbit  USBPWR_bit at U1PWRC.B0;
    const register unsigned short int USUSPEND = 1;
    sbit  USUSPEND_bit at U1PWRC.B1;
    const register unsigned short int USBBUSY = 3;
    sbit  USBBUSY_bit at U1PWRC.B3;
    const register unsigned short int USLPGRD = 4;
    sbit  USLPGRD_bit at U1PWRC.B4;
    const register unsigned short int UACTPND = 7;
    sbit  UACTPND_bit at U1PWRC.B7;
sfr unsigned long   volatile U1PWRCCLR        absolute 0xBF885084;
sfr unsigned long   volatile U1PWRCSET        absolute 0xBF885088;
sfr unsigned long   volatile U1PWRCINV        absolute 0xBF88508C;
sfr unsigned long   volatile U1IR             absolute 0xBF885200;
    const register unsigned short int URSTIF_DETACHIF = 0;
    sbit  URSTIF_DETACHIF_bit at U1IR.B0;
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
    const register unsigned short int URSTIF = 0;
    sbit  URSTIF_bit at U1IR.B0;
sfr unsigned long   volatile U1IRCLR          absolute 0xBF885204;
sfr unsigned long   volatile U1IE             absolute 0xBF885210;
    const register unsigned short int URSTIE_DETACHIE = 0;
    sbit  URSTIE_DETACHIE_bit at U1IE.B0;
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
    const register unsigned short int URSTIE = 0;
    sbit  URSTIE_bit at U1IE.B0;
sfr unsigned long   volatile U1IECLR          absolute 0xBF885214;
sfr unsigned long   volatile U1IESET          absolute 0xBF885218;
sfr unsigned long   volatile U1IEINV          absolute 0xBF88521C;
sfr unsigned long   volatile U1EIR            absolute 0xBF885220;
    const register unsigned short int PIDEF = 0;
    sbit  PIDEF_bit at U1EIR.B0;
    const register unsigned short int CRC5EF_EOFEF = 1;
    sbit  CRC5EF_EOFEF_bit at U1EIR.B1;
    const register unsigned short int CRC16EF = 2;
    sbit  CRC16EF_bit at U1EIR.B2;
    const register unsigned short int DFN8EF = 3;
    sbit  DFN8EF_bit at U1EIR.B3;
    const register unsigned short int BTOEF = 4;
    sbit  BTOEF_bit at U1EIR.B4;
    const register unsigned short int DMAEF = 5;
    sbit  DMAEF_bit at U1EIR.B5;
    const register unsigned short int BMXEF = 6;
    sbit  BMXEF_bit at U1EIR.B6;
    const register unsigned short int BTSEF = 7;
    sbit  BTSEF_bit at U1EIR.B7;
    const register unsigned short int CRC5EF = 1;
    sbit  CRC5EF_bit at U1EIR.B1;
    const register unsigned short int EOFEF = 1;
    sbit  EOFEF_bit at U1EIR.B1;
sfr unsigned long   volatile U1EIRCLR         absolute 0xBF885224;
sfr unsigned long   volatile U1EIE            absolute 0xBF885230;
    const register unsigned short int PIDEE = 0;
    sbit  PIDEE_bit at U1EIE.B0;
    const register unsigned short int CRC5EE_EOFEE = 1;
    sbit  CRC5EE_EOFEE_bit at U1EIE.B1;
    const register unsigned short int CRC16EE = 2;
    sbit  CRC16EE_bit at U1EIE.B2;
    const register unsigned short int DFN8EE = 3;
    sbit  DFN8EE_bit at U1EIE.B3;
    const register unsigned short int BTOEE = 4;
    sbit  BTOEE_bit at U1EIE.B4;
    const register unsigned short int DMAEE = 5;
    sbit  DMAEE_bit at U1EIE.B5;
    const register unsigned short int BMXEE = 6;
    sbit  BMXEE_bit at U1EIE.B6;
    const register unsigned short int BTSEE = 7;
    sbit  BTSEE_bit at U1EIE.B7;
    const register unsigned short int CRC5EE = 1;
    sbit  CRC5EE_bit at U1EIE.B1;
    const register unsigned short int EOFEE = 1;
    sbit  EOFEE_bit at U1EIE.B1;
sfr unsigned long   volatile U1EIECLR         absolute 0xBF885234;
sfr unsigned long   volatile U1EIESET         absolute 0xBF885238;
sfr unsigned long   volatile U1EIEINV         absolute 0xBF88523C;
sfr unsigned long   volatile U1STAT           absolute 0xBF885240;
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
    sbit  ENDPT0_U1STAT_bit at U1STAT.B4;
    sbit  ENDPT1_U1STAT_bit at U1STAT.B5;
    sbit  ENDPT2_U1STAT_bit at U1STAT.B6;
    sbit  ENDPT3_U1STAT_bit at U1STAT.B7;
sfr unsigned long   volatile U1CON            absolute 0xBF885250;
    const register unsigned short int USBEN_SOFEN = 0;
    sbit  USBEN_SOFEN_bit at U1CON.B0;
    const register unsigned short int PPBRST = 1;
    sbit  PPBRST_bit at U1CON.B1;
    const register unsigned short int RESUME_ = 2;
    sbit  RESUME_bit at U1CON.B2;
    const register unsigned short int HOSTEN = 3;
    sbit  HOSTEN_bit at U1CON.B3;
    const register unsigned short int USBRST = 4;
    sbit  USBRST_bit at U1CON.B4;
    const register unsigned short int PKTDIS_TOKBUSY = 5;
    sbit  PKTDIS_TOKBUSY_bit at U1CON.B5;
    const register unsigned short int SE0 = 6;
    sbit  SE0_bit at U1CON.B6;
    const register unsigned short int JSTATE = 7;
    sbit  JSTATE_bit at U1CON.B7;
    const register unsigned short int USBEN = 0;
    sbit  USBEN_bit at U1CON.B0;
    const register unsigned short int SOFEN = 0;
    sbit  SOFEN_bit at U1CON.B0;
    const register unsigned short int PKTDIS = 5;
    sbit  PKTDIS_bit at U1CON.B5;
    const register unsigned short int TOKBUSY = 5;
    sbit  TOKBUSY_bit at U1CON.B5;
sfr unsigned long   volatile U1CONCLR         absolute 0xBF885254;
sfr unsigned long   volatile U1CONSET         absolute 0xBF885258;
sfr unsigned long   volatile U1CONINV         absolute 0xBF88525C;
sfr unsigned long   volatile U1ADDR           absolute 0xBF885260;
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
    sbit  DEVADDR0_U1ADDR_bit at U1ADDR.B0;
    sbit  DEVADDR1_U1ADDR_bit at U1ADDR.B1;
    sbit  DEVADDR2_U1ADDR_bit at U1ADDR.B2;
    sbit  DEVADDR3_U1ADDR_bit at U1ADDR.B3;
    sbit  DEVADDR4_U1ADDR_bit at U1ADDR.B4;
    sbit  DEVADDR5_U1ADDR_bit at U1ADDR.B5;
    sbit  DEVADDR6_U1ADDR_bit at U1ADDR.B6;
sfr unsigned long   volatile U1ADDRCLR        absolute 0xBF885264;
sfr unsigned long   volatile U1ADDRSET        absolute 0xBF885268;
sfr unsigned long   volatile U1ADDRINV        absolute 0xBF88526C;
sfr unsigned long   volatile U1BDTP1          absolute 0xBF885270;
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
sfr unsigned long   volatile U1BDTP1CLR       absolute 0xBF885274;
sfr unsigned long   volatile U1BDTP1SET       absolute 0xBF885278;
sfr unsigned long   volatile U1BDTP1INV       absolute 0xBF88527C;
sfr unsigned long   volatile U1FRML           absolute 0xBF885280;
    const register unsigned short int FRML0 = 0;
    sbit  FRML0_bit at U1FRML.B0;
    const register unsigned short int FRML1 = 1;
    sbit  FRML1_bit at U1FRML.B1;
    const register unsigned short int FRML2 = 2;
    sbit  FRML2_bit at U1FRML.B2;
    const register unsigned short int FRML3 = 3;
    sbit  FRML3_bit at U1FRML.B3;
    const register unsigned short int FRML4 = 4;
    sbit  FRML4_bit at U1FRML.B4;
    const register unsigned short int FRML5 = 5;
    sbit  FRML5_bit at U1FRML.B5;
    const register unsigned short int FRML6 = 6;
    sbit  FRML6_bit at U1FRML.B6;
    const register unsigned short int FRML7 = 7;
    sbit  FRML7_bit at U1FRML.B7;
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
sfr unsigned long   volatile U1FRMH           absolute 0xBF885290;
    const register unsigned short int FRMH0 = 0;
    sbit  FRMH0_bit at U1FRMH.B0;
    const register unsigned short int FRMH1 = 1;
    sbit  FRMH1_bit at U1FRMH.B1;
    const register unsigned short int FRMH2 = 2;
    sbit  FRMH2_bit at U1FRMH.B2;
    const register unsigned short int FRM8 = 0;
    sbit  FRM8_bit at U1FRMH.B0;
    const register unsigned short int FRM9 = 1;
    sbit  FRM9_bit at U1FRMH.B1;
    const register unsigned short int FRM10 = 2;
    sbit  FRM10_bit at U1FRMH.B2;
sfr unsigned long   volatile U1TOK            absolute 0xBF8852A0;
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
    sbit  EP0_U1TOK_bit at U1TOK.B0;
    sbit  EP1_U1TOK_bit at U1TOK.B1;
    sbit  EP2_U1TOK_bit at U1TOK.B2;
    sbit  EP3_U1TOK_bit at U1TOK.B3;
    sbit  PID0_U1TOK_bit at U1TOK.B4;
    sbit  PID1_U1TOK_bit at U1TOK.B5;
    sbit  PID2_U1TOK_bit at U1TOK.B6;
    sbit  PID3_U1TOK_bit at U1TOK.B7;
sfr unsigned long   volatile U1TOKCLR         absolute 0xBF8852A4;
sfr unsigned long   volatile U1TOKSET         absolute 0xBF8852A8;
sfr unsigned long   volatile U1TOKINV         absolute 0xBF8852AC;
sfr unsigned long   volatile U1SOF            absolute 0xBF8852B0;
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
sfr unsigned long   volatile U1SOFCLR         absolute 0xBF8852B4;
sfr unsigned long   volatile U1SOFSET         absolute 0xBF8852B8;
sfr unsigned long   volatile U1SOFINV         absolute 0xBF8852BC;
sfr unsigned long   volatile U1BDTP2          absolute 0xBF8852C0;
    const register unsigned short int BDTPTRH0 = 0;
    sbit  BDTPTRH0_bit at U1BDTP2.B0;
    const register unsigned short int BDTPTRH1 = 1;
    sbit  BDTPTRH1_bit at U1BDTP2.B1;
    const register unsigned short int BDTPTRH2 = 2;
    sbit  BDTPTRH2_bit at U1BDTP2.B2;
    const register unsigned short int BDTPTRH3 = 3;
    sbit  BDTPTRH3_bit at U1BDTP2.B3;
    const register unsigned short int BDTPTRH4 = 4;
    sbit  BDTPTRH4_bit at U1BDTP2.B4;
    const register unsigned short int BDTPTRH5 = 5;
    sbit  BDTPTRH5_bit at U1BDTP2.B5;
    const register unsigned short int BDTPTRH6 = 6;
    sbit  BDTPTRH6_bit at U1BDTP2.B6;
    const register unsigned short int BDTPTRH7 = 7;
    sbit  BDTPTRH7_bit at U1BDTP2.B7;
sfr unsigned long   volatile U1BDTP2CLR       absolute 0xBF8852C4;
sfr unsigned long   volatile U1BDTP2SET       absolute 0xBF8852C8;
sfr unsigned long   volatile U1BDTP2INV       absolute 0xBF8852CC;
sfr unsigned long   volatile U1BDTP3          absolute 0xBF8852D0;
    const register unsigned short int BDTPTRU0 = 0;
    sbit  BDTPTRU0_bit at U1BDTP3.B0;
    const register unsigned short int BDTPTRU1 = 1;
    sbit  BDTPTRU1_bit at U1BDTP3.B1;
    const register unsigned short int BDTPTRU2 = 2;
    sbit  BDTPTRU2_bit at U1BDTP3.B2;
    const register unsigned short int BDTPTRU3 = 3;
    sbit  BDTPTRU3_bit at U1BDTP3.B3;
    const register unsigned short int BDTPTRU4 = 4;
    sbit  BDTPTRU4_bit at U1BDTP3.B4;
    const register unsigned short int BDTPTRU5 = 5;
    sbit  BDTPTRU5_bit at U1BDTP3.B5;
    const register unsigned short int BDTPTRU6 = 6;
    sbit  BDTPTRU6_bit at U1BDTP3.B6;
    const register unsigned short int BDTPTRU7 = 7;
    sbit  BDTPTRU7_bit at U1BDTP3.B7;
sfr unsigned long   volatile U1BDTP3CLR       absolute 0xBF8852D4;
sfr unsigned long   volatile U1BDTP3SET       absolute 0xBF8852D8;
sfr unsigned long   volatile U1BDTP3INV       absolute 0xBF8852DC;
sfr unsigned long   volatile U1CNFG1          absolute 0xBF8852E0;
    const register unsigned short int UASUSPND = 0;
    sbit  UASUSPND_bit at U1CNFG1.B0;
    const register unsigned short int USBSIDL = 4;
    sbit  USBSIDL_bit at U1CNFG1.B4;
    const register unsigned short int UOEMON = 6;
    sbit  UOEMON_bit at U1CNFG1.B6;
    const register unsigned short int UTEYE = 7;
    sbit  UTEYE_bit at U1CNFG1.B7;
sfr unsigned long   volatile U1CNFG1CLR       absolute 0xBF8852E4;
sfr unsigned long   volatile U1CNFG1SET       absolute 0xBF8852E8;
sfr unsigned long   volatile U1CNFG1INV       absolute 0xBF8852EC;
sfr unsigned long   volatile U1EP0            absolute 0xBF885300;
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
sfr unsigned long   volatile U1EP0CLR         absolute 0xBF885304;
sfr unsigned long   volatile U1EP0SET         absolute 0xBF885308;
sfr unsigned long   volatile U1EP0INV         absolute 0xBF88530C;
sfr unsigned long   volatile U1EP1            absolute 0xBF885310;
    sbit  EPHSHK_U1EP1_bit at U1EP1.B0;
    sbit  EPSTALL_U1EP1_bit at U1EP1.B1;
    sbit  EPTXEN_U1EP1_bit at U1EP1.B2;
    sbit  EPRXEN_U1EP1_bit at U1EP1.B3;
    sbit  EPCONDIS_U1EP1_bit at U1EP1.B4;
sfr unsigned long   volatile U1EP1CLR         absolute 0xBF885314;
sfr unsigned long   volatile U1EP1SET         absolute 0xBF885318;
sfr unsigned long   volatile U1EP1INV         absolute 0xBF88531C;
sfr unsigned long   volatile U1EP2            absolute 0xBF885320;
    sbit  EPHSHK_U1EP2_bit at U1EP2.B0;
    sbit  EPSTALL_U1EP2_bit at U1EP2.B1;
    sbit  EPTXEN_U1EP2_bit at U1EP2.B2;
    sbit  EPRXEN_U1EP2_bit at U1EP2.B3;
    sbit  EPCONDIS_U1EP2_bit at U1EP2.B4;
sfr unsigned long   volatile U1EP2CLR         absolute 0xBF885324;
sfr unsigned long   volatile U1EP2SET         absolute 0xBF885328;
sfr unsigned long   volatile U1EP2INV         absolute 0xBF88532C;
sfr unsigned long   volatile U1EP3            absolute 0xBF885330;
    sbit  EPHSHK_U1EP3_bit at U1EP3.B0;
    sbit  EPSTALL_U1EP3_bit at U1EP3.B1;
    sbit  EPTXEN_U1EP3_bit at U1EP3.B2;
    sbit  EPRXEN_U1EP3_bit at U1EP3.B3;
    sbit  EPCONDIS_U1EP3_bit at U1EP3.B4;
sfr unsigned long   volatile U1EP3CLR         absolute 0xBF885334;
sfr unsigned long   volatile U1EP3SET         absolute 0xBF885338;
sfr unsigned long   volatile U1EP3INV         absolute 0xBF88533C;
sfr unsigned long   volatile U1EP4            absolute 0xBF885340;
    sbit  EPHSHK_U1EP4_bit at U1EP4.B0;
    sbit  EPSTALL_U1EP4_bit at U1EP4.B1;
    sbit  EPTXEN_U1EP4_bit at U1EP4.B2;
    sbit  EPRXEN_U1EP4_bit at U1EP4.B3;
    sbit  EPCONDIS_U1EP4_bit at U1EP4.B4;
sfr unsigned long   volatile U1EP4CLR         absolute 0xBF885344;
sfr unsigned long   volatile U1EP4SET         absolute 0xBF885348;
sfr unsigned long   volatile U1EP4INV         absolute 0xBF88534C;
sfr unsigned long   volatile U1EP5            absolute 0xBF885350;
    sbit  EPHSHK_U1EP5_bit at U1EP5.B0;
    sbit  EPSTALL_U1EP5_bit at U1EP5.B1;
    sbit  EPTXEN_U1EP5_bit at U1EP5.B2;
    sbit  EPRXEN_U1EP5_bit at U1EP5.B3;
    sbit  EPCONDIS_U1EP5_bit at U1EP5.B4;
sfr unsigned long   volatile U1EP5CLR         absolute 0xBF885354;
sfr unsigned long   volatile U1EP5SET         absolute 0xBF885358;
sfr unsigned long   volatile U1EP5INV         absolute 0xBF88535C;
sfr unsigned long   volatile U1EP6            absolute 0xBF885360;
    sbit  EPHSHK_U1EP6_bit at U1EP6.B0;
    sbit  EPSTALL_U1EP6_bit at U1EP6.B1;
    sbit  EPTXEN_U1EP6_bit at U1EP6.B2;
    sbit  EPRXEN_U1EP6_bit at U1EP6.B3;
    sbit  EPCONDIS_U1EP6_bit at U1EP6.B4;
sfr unsigned long   volatile U1EP6CLR         absolute 0xBF885364;
sfr unsigned long   volatile U1EP6SET         absolute 0xBF885368;
sfr unsigned long   volatile U1EP6INV         absolute 0xBF88536C;
sfr unsigned long   volatile U1EP7            absolute 0xBF885370;
    sbit  EPHSHK_U1EP7_bit at U1EP7.B0;
    sbit  EPSTALL_U1EP7_bit at U1EP7.B1;
    sbit  EPTXEN_U1EP7_bit at U1EP7.B2;
    sbit  EPRXEN_U1EP7_bit at U1EP7.B3;
    sbit  EPCONDIS_U1EP7_bit at U1EP7.B4;
sfr unsigned long   volatile U1EP7CLR         absolute 0xBF885374;
sfr unsigned long   volatile U1EP7SET         absolute 0xBF885378;
sfr unsigned long   volatile U1EP7INV         absolute 0xBF88537C;
sfr unsigned long   volatile U1EP8            absolute 0xBF885380;
    sbit  EPHSHK_U1EP8_bit at U1EP8.B0;
    sbit  EPSTALL_U1EP8_bit at U1EP8.B1;
    sbit  EPTXEN_U1EP8_bit at U1EP8.B2;
    sbit  EPRXEN_U1EP8_bit at U1EP8.B3;
    sbit  EPCONDIS_U1EP8_bit at U1EP8.B4;
sfr unsigned long   volatile U1EP8CLR         absolute 0xBF885384;
sfr unsigned long   volatile U1EP8SET         absolute 0xBF885388;
sfr unsigned long   volatile U1EP8INV         absolute 0xBF88538C;
sfr unsigned long   volatile U1EP9            absolute 0xBF885390;
    sbit  EPHSHK_U1EP9_bit at U1EP9.B0;
    sbit  EPSTALL_U1EP9_bit at U1EP9.B1;
    sbit  EPTXEN_U1EP9_bit at U1EP9.B2;
    sbit  EPRXEN_U1EP9_bit at U1EP9.B3;
    sbit  EPCONDIS_U1EP9_bit at U1EP9.B4;
sfr unsigned long   volatile U1EP9CLR         absolute 0xBF885394;
sfr unsigned long   volatile U1EP9SET         absolute 0xBF885398;
sfr unsigned long   volatile U1EP9INV         absolute 0xBF88539C;
sfr unsigned long   volatile U1EP10           absolute 0xBF8853A0;
    sbit  EPHSHK_U1EP10_bit at U1EP10.B0;
    sbit  EPSTALL_U1EP10_bit at U1EP10.B1;
    sbit  EPTXEN_U1EP10_bit at U1EP10.B2;
    sbit  EPRXEN_U1EP10_bit at U1EP10.B3;
    sbit  EPCONDIS_U1EP10_bit at U1EP10.B4;
sfr unsigned long   volatile U1EP10CLR        absolute 0xBF8853A4;
sfr unsigned long   volatile U1EP10SET        absolute 0xBF8853A8;
sfr unsigned long   volatile U1EP10INV        absolute 0xBF8853AC;
sfr unsigned long   volatile U1EP11           absolute 0xBF8853B0;
    sbit  EPHSHK_U1EP11_bit at U1EP11.B0;
    sbit  EPSTALL_U1EP11_bit at U1EP11.B1;
    sbit  EPTXEN_U1EP11_bit at U1EP11.B2;
    sbit  EPRXEN_U1EP11_bit at U1EP11.B3;
    sbit  EPCONDIS_U1EP11_bit at U1EP11.B4;
sfr unsigned long   volatile U1EP11CLR        absolute 0xBF8853B4;
sfr unsigned long   volatile U1EP11SET        absolute 0xBF8853B8;
sfr unsigned long   volatile U1EP11INV        absolute 0xBF8853BC;
sfr unsigned long   volatile U1EP12           absolute 0xBF8853C0;
    sbit  EPHSHK_U1EP12_bit at U1EP12.B0;
    sbit  EPSTALL_U1EP12_bit at U1EP12.B1;
    sbit  EPTXEN_U1EP12_bit at U1EP12.B2;
    sbit  EPRXEN_U1EP12_bit at U1EP12.B3;
    sbit  EPCONDIS_U1EP12_bit at U1EP12.B4;
sfr unsigned long   volatile U1EP12CLR        absolute 0xBF8853C4;
sfr unsigned long   volatile U1EP12SET        absolute 0xBF8853C8;
sfr unsigned long   volatile U1EP12INV        absolute 0xBF8853CC;
sfr unsigned long   volatile U1EP13           absolute 0xBF8853D0;
    sbit  EPHSHK_U1EP13_bit at U1EP13.B0;
    sbit  EPSTALL_U1EP13_bit at U1EP13.B1;
    sbit  EPTXEN_U1EP13_bit at U1EP13.B2;
    sbit  EPRXEN_U1EP13_bit at U1EP13.B3;
    sbit  EPCONDIS_U1EP13_bit at U1EP13.B4;
sfr unsigned long   volatile U1EP13CLR        absolute 0xBF8853D4;
sfr unsigned long   volatile U1EP13SET        absolute 0xBF8853D8;
sfr unsigned long   volatile U1EP13INV        absolute 0xBF8853DC;
sfr unsigned long   volatile U1EP14           absolute 0xBF8853E0;
    sbit  EPHSHK_U1EP14_bit at U1EP14.B0;
    sbit  EPSTALL_U1EP14_bit at U1EP14.B1;
    sbit  EPTXEN_U1EP14_bit at U1EP14.B2;
    sbit  EPRXEN_U1EP14_bit at U1EP14.B3;
    sbit  EPCONDIS_U1EP14_bit at U1EP14.B4;
sfr unsigned long   volatile U1EP14CLR        absolute 0xBF8853E4;
sfr unsigned long   volatile U1EP14SET        absolute 0xBF8853E8;
sfr unsigned long   volatile U1EP14INV        absolute 0xBF8853EC;
sfr unsigned long   volatile U1EP15           absolute 0xBF8853F0;
    sbit  EPHSHK_U1EP15_bit at U1EP15.B0;
    sbit  EPSTALL_U1EP15_bit at U1EP15.B1;
    sbit  EPTXEN_U1EP15_bit at U1EP15.B2;
    sbit  EPRXEN_U1EP15_bit at U1EP15.B3;
    sbit  EPCONDIS_U1EP15_bit at U1EP15.B4;
sfr unsigned long   volatile U1EP15CLR        absolute 0xBF8853F4;
sfr unsigned long   volatile U1EP15SET        absolute 0xBF8853F8;
sfr unsigned long   volatile U1EP15INV        absolute 0xBF8853FC;
sfr atomic unsigned long   volatile ANSELB           absolute 0xBF886100;
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
    const register unsigned short int ANSB8 = 8;
    sbit  ANSB8_bit at ANSELB.B8;
    const register unsigned short int ANSB9 = 9;
    sbit  ANSB9_bit at ANSELB.B9;
    const register unsigned short int ANSB10 = 10;
    sbit  ANSB10_bit at ANSELB.B10;
    const register unsigned short int ANSB11 = 11;
    sbit  ANSB11_bit at ANSELB.B11;
    const register unsigned short int ANSB12 = 12;
    sbit  ANSB12_bit at ANSELB.B12;
    const register unsigned short int ANSB13 = 13;
    sbit  ANSB13_bit at ANSELB.B13;
    const register unsigned short int ANSB14 = 14;
    sbit  ANSB14_bit at ANSELB.B14;
    const register unsigned short int ANSB15 = 15;
    sbit  ANSB15_bit at ANSELB.B15;
sfr unsigned long   volatile ANSELBCLR        absolute 0xBF886104;
sfr unsigned long   volatile ANSELBSET        absolute 0xBF886108;
sfr unsigned long   volatile ANSELBINV        absolute 0xBF88610C;
sfr atomic unsigned long   volatile TRISB            absolute 0xBF886110;
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
sfr unsigned long   volatile TRISBCLR         absolute 0xBF886114;
sfr unsigned long   volatile TRISBSET         absolute 0xBF886118;
sfr unsigned long   volatile TRISBINV         absolute 0xBF88611C;
sfr atomic unsigned long   volatile PORTB            absolute 0xBF886120;
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
sfr unsigned long   volatile PORTBCLR         absolute 0xBF886124;
sfr unsigned long   volatile PORTBSET         absolute 0xBF886128;
sfr unsigned long   volatile PORTBINV         absolute 0xBF88612C;
sfr atomic unsigned long   volatile LATB             absolute 0xBF886130;
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
sfr unsigned long   volatile LATBCLR          absolute 0xBF886134;
sfr unsigned long   volatile LATBSET          absolute 0xBF886138;
sfr unsigned long   volatile LATBINV          absolute 0xBF88613C;
sfr atomic unsigned long   volatile ODCB             absolute 0xBF886140;
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
sfr unsigned long   volatile ODCBCLR          absolute 0xBF886144;
sfr unsigned long   volatile ODCBSET          absolute 0xBF886148;
sfr unsigned long   volatile ODCBINV          absolute 0xBF88614C;
sfr atomic unsigned long   volatile CNPUB            absolute 0xBF886150;
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
sfr unsigned long   volatile CNPUBCLR         absolute 0xBF886154;
sfr unsigned long   volatile CNPUBSET         absolute 0xBF886158;
sfr unsigned long   volatile CNPUBINV         absolute 0xBF88615C;
sfr atomic unsigned long   volatile CNPDB            absolute 0xBF886160;
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
sfr unsigned long   volatile CNPDBCLR         absolute 0xBF886164;
sfr unsigned long   volatile CNPDBSET         absolute 0xBF886168;
sfr unsigned long   volatile CNPDBINV         absolute 0xBF88616C;
sfr atomic unsigned long   volatile CNCONB           absolute 0xBF886170;
    sbit  SIDL_CNCONB_bit at CNCONB.B13;
    sbit  ON_CNCONB_bit at CNCONB.B15;
sfr unsigned long   volatile CNCONBCLR        absolute 0xBF886174;
sfr unsigned long   volatile CNCONBSET        absolute 0xBF886178;
sfr unsigned long   volatile CNCONBINV        absolute 0xBF88617C;
sfr atomic unsigned long   volatile CNENB            absolute 0xBF886180;
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
sfr unsigned long   volatile CNENBCLR         absolute 0xBF886184;
sfr unsigned long   volatile CNENBSET         absolute 0xBF886188;
sfr unsigned long   volatile CNENBINV         absolute 0xBF88618C;
sfr atomic unsigned long   volatile CNSTATB          absolute 0xBF886190;
    const register unsigned short int CNSTATB0 = 0;
    sbit  CNSTATB0_bit at CNSTATB.B0;
    const register unsigned short int CNSTATB1 = 1;
    sbit  CNSTATB1_bit at CNSTATB.B1;
    const register unsigned short int CNSTATB2 = 2;
    sbit  CNSTATB2_bit at CNSTATB.B2;
    const register unsigned short int CNSTATB3 = 3;
    sbit  CNSTATB3_bit at CNSTATB.B3;
    const register unsigned short int CNSTATB4 = 4;
    sbit  CNSTATB4_bit at CNSTATB.B4;
    const register unsigned short int CNSTATB5 = 5;
    sbit  CNSTATB5_bit at CNSTATB.B5;
    const register unsigned short int CNSTATB6 = 6;
    sbit  CNSTATB6_bit at CNSTATB.B6;
    const register unsigned short int CNSTATB7 = 7;
    sbit  CNSTATB7_bit at CNSTATB.B7;
    const register unsigned short int CNSTATB8 = 8;
    sbit  CNSTATB8_bit at CNSTATB.B8;
    const register unsigned short int CNSTATB9 = 9;
    sbit  CNSTATB9_bit at CNSTATB.B9;
    const register unsigned short int CNSTATB10 = 10;
    sbit  CNSTATB10_bit at CNSTATB.B10;
    const register unsigned short int CNSTATB11 = 11;
    sbit  CNSTATB11_bit at CNSTATB.B11;
    const register unsigned short int CNSTATB12 = 12;
    sbit  CNSTATB12_bit at CNSTATB.B12;
    const register unsigned short int CNSTATB13 = 13;
    sbit  CNSTATB13_bit at CNSTATB.B13;
    const register unsigned short int CNSTATB14 = 14;
    sbit  CNSTATB14_bit at CNSTATB.B14;
    const register unsigned short int CNSTATB15 = 15;
    sbit  CNSTATB15_bit at CNSTATB.B15;
sfr unsigned long   volatile CNSTATBCLR       absolute 0xBF886194;
sfr unsigned long   volatile CNSTATBSET       absolute 0xBF886198;
sfr unsigned long   volatile CNSTATBINV       absolute 0xBF88619C;
sfr atomic unsigned long   volatile ANSELC           absolute 0xBF886200;
sfr unsigned long   volatile ANSELCCLR        absolute 0xBF886204;
sfr unsigned long   volatile ANSELCSET        absolute 0xBF886208;
sfr unsigned long   volatile ANSELCINV        absolute 0xBF88620C;
sfr atomic unsigned long   volatile TRISC            absolute 0xBF886210;
    const register unsigned short int TRISC12 = 12;
    sbit  TRISC12_bit at TRISC.B12;
    const register unsigned short int TRISC13 = 13;
    sbit  TRISC13_bit at TRISC.B13;
    const register unsigned short int TRISC14 = 14;
    sbit  TRISC14_bit at TRISC.B14;
    const register unsigned short int TRISC15 = 15;
    sbit  TRISC15_bit at TRISC.B15;
sfr unsigned long   volatile TRISCCLR         absolute 0xBF886214;
sfr unsigned long   volatile TRISCSET         absolute 0xBF886218;
sfr unsigned long   volatile TRISCINV         absolute 0xBF88621C;
sfr atomic unsigned long   volatile PORTC            absolute 0xBF886220;
    const register unsigned short int RC12 = 12;
    sbit  RC12_bit at PORTC.B12;
    const register unsigned short int RC13 = 13;
    sbit  RC13_bit at PORTC.B13;
    const register unsigned short int RC14 = 14;
    sbit  RC14_bit at PORTC.B14;
    const register unsigned short int RC15 = 15;
    sbit  RC15_bit at PORTC.B15;
sfr unsigned long   volatile PORTCCLR         absolute 0xBF886224;
sfr unsigned long   volatile PORTCSET         absolute 0xBF886228;
sfr unsigned long   volatile PORTCINV         absolute 0xBF88622C;
sfr atomic unsigned long   volatile LATC             absolute 0xBF886230;
    const register unsigned short int LATC12 = 12;
    sbit  LATC12_bit at LATC.B12;
    const register unsigned short int LATC13 = 13;
    sbit  LATC13_bit at LATC.B13;
    const register unsigned short int LATC14 = 14;
    sbit  LATC14_bit at LATC.B14;
    const register unsigned short int LATC15 = 15;
    sbit  LATC15_bit at LATC.B15;
sfr unsigned long   volatile LATCCLR          absolute 0xBF886234;
sfr unsigned long   volatile LATCSET          absolute 0xBF886238;
sfr unsigned long   volatile LATCINV          absolute 0xBF88623C;
sfr atomic unsigned long   volatile ODCC             absolute 0xBF886240;
    const register unsigned short int ODCC12 = 12;
    sbit  ODCC12_bit at ODCC.B12;
    const register unsigned short int ODCC13 = 13;
    sbit  ODCC13_bit at ODCC.B13;
    const register unsigned short int ODCC14 = 14;
    sbit  ODCC14_bit at ODCC.B14;
    const register unsigned short int ODCC15 = 15;
    sbit  ODCC15_bit at ODCC.B15;
sfr unsigned long   volatile ODCCCLR          absolute 0xBF886244;
sfr unsigned long   volatile ODCCSET          absolute 0xBF886248;
sfr unsigned long   volatile ODCCINV          absolute 0xBF88624C;
sfr atomic unsigned long   volatile CNPUC            absolute 0xBF886250;
    const register unsigned short int CNPUC12 = 12;
    sbit  CNPUC12_bit at CNPUC.B12;
    const register unsigned short int CNPUC13 = 13;
    sbit  CNPUC13_bit at CNPUC.B13;
    const register unsigned short int CNPUC14 = 14;
    sbit  CNPUC14_bit at CNPUC.B14;
    const register unsigned short int CNPUC15 = 15;
    sbit  CNPUC15_bit at CNPUC.B15;
sfr unsigned long   volatile CNPUCCLR         absolute 0xBF886254;
sfr unsigned long   volatile CNPUCSET         absolute 0xBF886258;
sfr unsigned long   volatile CNPUCINV         absolute 0xBF88625C;
sfr atomic unsigned long   volatile CNPDC            absolute 0xBF886260;
    const register unsigned short int CNPDC12 = 12;
    sbit  CNPDC12_bit at CNPDC.B12;
    const register unsigned short int CNPDC13 = 13;
    sbit  CNPDC13_bit at CNPDC.B13;
    const register unsigned short int CNPDC14 = 14;
    sbit  CNPDC14_bit at CNPDC.B14;
    const register unsigned short int CNPDC15 = 15;
    sbit  CNPDC15_bit at CNPDC.B15;
sfr unsigned long   volatile CNPDCCLR         absolute 0xBF886264;
sfr unsigned long   volatile CNPDCSET         absolute 0xBF886268;
sfr unsigned long   volatile CNPDCINV         absolute 0xBF88626C;
sfr atomic unsigned long   volatile CNCONC           absolute 0xBF886270;
    sbit  SIDL_CNCONC_bit at CNCONC.B13;
    sbit  ON_CNCONC_bit at CNCONC.B15;
sfr unsigned long   volatile CNCONCCLR        absolute 0xBF886274;
sfr unsigned long   volatile CNCONCSET        absolute 0xBF886278;
sfr unsigned long   volatile CNCONCINV        absolute 0xBF88627C;
sfr atomic unsigned long   volatile CNENC            absolute 0xBF886280;
    const register unsigned short int CNIEC12 = 12;
    sbit  CNIEC12_bit at CNENC.B12;
    const register unsigned short int CNIEC13 = 13;
    sbit  CNIEC13_bit at CNENC.B13;
    const register unsigned short int CNIEC14 = 14;
    sbit  CNIEC14_bit at CNENC.B14;
    const register unsigned short int CNIEC15 = 15;
    sbit  CNIEC15_bit at CNENC.B15;
sfr unsigned long   volatile CNENCCLR         absolute 0xBF886284;
sfr unsigned long   volatile CNENCSET         absolute 0xBF886288;
sfr unsigned long   volatile CNENCINV         absolute 0xBF88628C;
sfr atomic unsigned long   volatile CNSTATC          absolute 0xBF886290;
    const register unsigned short int CNSTATC12 = 12;
    sbit  CNSTATC12_bit at CNSTATC.B12;
    const register unsigned short int CNSTATC13 = 13;
    sbit  CNSTATC13_bit at CNSTATC.B13;
    const register unsigned short int CNSTATC14 = 14;
    sbit  CNSTATC14_bit at CNSTATC.B14;
    const register unsigned short int CNSTATC15 = 15;
    sbit  CNSTATC15_bit at CNSTATC.B15;
sfr unsigned long   volatile CNSTATCCLR       absolute 0xBF886294;
sfr unsigned long   volatile CNSTATCSET       absolute 0xBF886298;
sfr unsigned long   volatile CNSTATCINV       absolute 0xBF88629C;
sfr atomic unsigned long   volatile ANSELD           absolute 0xBF886300;
    const register unsigned short int ANSD1 = 1;
    sbit  ANSD1_bit at ANSELD.B1;
    const register unsigned short int ANSD2 = 2;
    sbit  ANSD2_bit at ANSELD.B2;
    const register unsigned short int ANSD3 = 3;
    sbit  ANSD3_bit at ANSELD.B3;
sfr unsigned long   volatile ANSELDCLR        absolute 0xBF886304;
sfr unsigned long   volatile ANSELDSET        absolute 0xBF886308;
sfr unsigned long   volatile ANSELDINV        absolute 0xBF88630C;
sfr atomic unsigned long   volatile TRISD            absolute 0xBF886310;
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
sfr unsigned long   volatile TRISDCLR         absolute 0xBF886314;
sfr unsigned long   volatile TRISDSET         absolute 0xBF886318;
sfr unsigned long   volatile TRISDINV         absolute 0xBF88631C;
sfr atomic unsigned long   volatile PORTD            absolute 0xBF886320;
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
sfr unsigned long   volatile PORTDCLR         absolute 0xBF886324;
sfr unsigned long   volatile PORTDSET         absolute 0xBF886328;
sfr unsigned long   volatile PORTDINV         absolute 0xBF88632C;
sfr atomic unsigned long   volatile LATD             absolute 0xBF886330;
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
sfr unsigned long   volatile LATDCLR          absolute 0xBF886334;
sfr unsigned long   volatile LATDSET          absolute 0xBF886338;
sfr unsigned long   volatile LATDINV          absolute 0xBF88633C;
sfr atomic unsigned long   volatile ODCD             absolute 0xBF886340;
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
sfr unsigned long   volatile ODCDCLR          absolute 0xBF886344;
sfr unsigned long   volatile ODCDSET          absolute 0xBF886348;
sfr unsigned long   volatile ODCDINV          absolute 0xBF88634C;
sfr atomic unsigned long   volatile CNPUD            absolute 0xBF886350;
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
sfr unsigned long   volatile CNPUDCLR         absolute 0xBF886354;
sfr unsigned long   volatile CNPUDSET         absolute 0xBF886358;
sfr unsigned long   volatile CNPUDINV         absolute 0xBF88635C;
sfr atomic unsigned long   volatile CNPDD            absolute 0xBF886360;
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
sfr unsigned long   volatile CNPDDCLR         absolute 0xBF886364;
sfr unsigned long   volatile CNPDDSET         absolute 0xBF886368;
sfr unsigned long   volatile CNPDDINV         absolute 0xBF88636C;
sfr atomic unsigned long   volatile CNCOND           absolute 0xBF886370;
    sbit  SIDL_CNCOND_bit at CNCOND.B13;
    sbit  ON_CNCOND_bit at CNCOND.B15;
sfr unsigned long   volatile CNCONDCLR        absolute 0xBF886374;
sfr unsigned long   volatile CNCONDSET        absolute 0xBF886378;
sfr unsigned long   volatile CNCONDINV        absolute 0xBF88637C;
sfr atomic unsigned long   volatile CNEND            absolute 0xBF886380;
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
sfr unsigned long   volatile CNENDCLR         absolute 0xBF886384;
sfr unsigned long   volatile CNENDSET         absolute 0xBF886388;
sfr unsigned long   volatile CNENDINV         absolute 0xBF88638C;
sfr atomic unsigned long   volatile CNSTATD          absolute 0xBF886390;
    const register unsigned short int CNSTATD0 = 0;
    sbit  CNSTATD0_bit at CNSTATD.B0;
    const register unsigned short int CNSTATD1 = 1;
    sbit  CNSTATD1_bit at CNSTATD.B1;
    const register unsigned short int CNSTATD2 = 2;
    sbit  CNSTATD2_bit at CNSTATD.B2;
    const register unsigned short int CNSTATD3 = 3;
    sbit  CNSTATD3_bit at CNSTATD.B3;
    const register unsigned short int CNSTATD4 = 4;
    sbit  CNSTATD4_bit at CNSTATD.B4;
    const register unsigned short int CNSTATD5 = 5;
    sbit  CNSTATD5_bit at CNSTATD.B5;
    const register unsigned short int CNSTATD6 = 6;
    sbit  CNSTATD6_bit at CNSTATD.B6;
    const register unsigned short int CNSTATD7 = 7;
    sbit  CNSTATD7_bit at CNSTATD.B7;
    const register unsigned short int CNSTATD8 = 8;
    sbit  CNSTATD8_bit at CNSTATD.B8;
    const register unsigned short int CNSTATD9 = 9;
    sbit  CNSTATD9_bit at CNSTATD.B9;
    const register unsigned short int CNSTATD10 = 10;
    sbit  CNSTATD10_bit at CNSTATD.B10;
    const register unsigned short int CNSTATD11 = 11;
    sbit  CNSTATD11_bit at CNSTATD.B11;
sfr unsigned long   volatile CNSTATDCLR       absolute 0xBF886394;
sfr unsigned long   volatile CNSTATDSET       absolute 0xBF886398;
sfr unsigned long   volatile CNSTATDINV       absolute 0xBF88639C;
sfr atomic unsigned long   volatile ANSELE           absolute 0xBF886400;
    const register unsigned short int ANSE2 = 2;
    sbit  ANSE2_bit at ANSELE.B2;
    const register unsigned short int ANSE4 = 4;
    sbit  ANSE4_bit at ANSELE.B4;
    const register unsigned short int ANSE5 = 5;
    sbit  ANSE5_bit at ANSELE.B5;
    const register unsigned short int ANSE6 = 6;
    sbit  ANSE6_bit at ANSELE.B6;
    const register unsigned short int ANSE7 = 7;
    sbit  ANSE7_bit at ANSELE.B7;
sfr unsigned long   volatile ANSELECLR        absolute 0xBF886404;
sfr unsigned long   volatile ANSELESET        absolute 0xBF886408;
sfr unsigned long   volatile ANSELEINV        absolute 0xBF88640C;
sfr atomic unsigned long   volatile TRISE            absolute 0xBF886410;
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
sfr unsigned long   volatile TRISECLR         absolute 0xBF886414;
sfr unsigned long   volatile TRISESET         absolute 0xBF886418;
sfr unsigned long   volatile TRISEINV         absolute 0xBF88641C;
sfr atomic unsigned long   volatile PORTE            absolute 0xBF886420;
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
sfr unsigned long   volatile PORTECLR         absolute 0xBF886424;
sfr unsigned long   volatile PORTESET         absolute 0xBF886428;
sfr unsigned long   volatile PORTEINV         absolute 0xBF88642C;
sfr atomic unsigned long   volatile LATE             absolute 0xBF886430;
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
sfr unsigned long   volatile LATECLR          absolute 0xBF886434;
sfr unsigned long   volatile LATESET          absolute 0xBF886438;
sfr unsigned long   volatile LATEINV          absolute 0xBF88643C;
sfr atomic unsigned long   volatile ODCE             absolute 0xBF886440;
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
sfr unsigned long   volatile ODCECLR          absolute 0xBF886444;
sfr unsigned long   volatile ODCESET          absolute 0xBF886448;
sfr unsigned long   volatile ODCEINV          absolute 0xBF88644C;
sfr atomic unsigned long   volatile CNPUE            absolute 0xBF886450;
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
sfr unsigned long   volatile CNPUECLR         absolute 0xBF886454;
sfr unsigned long   volatile CNPUESET         absolute 0xBF886458;
sfr unsigned long   volatile CNPUEINV         absolute 0xBF88645C;
sfr atomic unsigned long   volatile CNPDE            absolute 0xBF886460;
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
sfr unsigned long   volatile CNPDECLR         absolute 0xBF886464;
sfr unsigned long   volatile CNPDESET         absolute 0xBF886468;
sfr unsigned long   volatile CNPDEINV         absolute 0xBF88646C;
sfr atomic unsigned long   volatile CNCONE           absolute 0xBF886470;
    sbit  SIDL_CNCONE_bit at CNCONE.B13;
    sbit  ON_CNCONE_bit at CNCONE.B15;
sfr unsigned long   volatile CNCONECLR        absolute 0xBF886474;
sfr unsigned long   volatile CNCONESET        absolute 0xBF886478;
sfr unsigned long   volatile CNCONEINV        absolute 0xBF88647C;
sfr atomic unsigned long   volatile CNENE            absolute 0xBF886480;
    const register unsigned short int CNIEE0 = 0;
    sbit  CNIEE0_bit at CNENE.B0;
    const register unsigned short int CNIEE1 = 1;
    sbit  CNIEE1_bit at CNENE.B1;
    const register unsigned short int CNIEE2 = 2;
    sbit  CNIEE2_bit at CNENE.B2;
    const register unsigned short int CNIEE3 = 3;
    sbit  CNIEE3_bit at CNENE.B3;
    const register unsigned short int CNIEE4 = 4;
    sbit  CNIEE4_bit at CNENE.B4;
    const register unsigned short int CNIEE5 = 5;
    sbit  CNIEE5_bit at CNENE.B5;
    const register unsigned short int CNIEE6 = 6;
    sbit  CNIEE6_bit at CNENE.B6;
    const register unsigned short int CNIEE7 = 7;
    sbit  CNIEE7_bit at CNENE.B7;
sfr unsigned long   volatile CNENECLR         absolute 0xBF886484;
sfr unsigned long   volatile CNENESET         absolute 0xBF886488;
sfr unsigned long   volatile CNENEINV         absolute 0xBF88648C;
sfr atomic unsigned long   volatile CNSTATE          absolute 0xBF886490;
    const register unsigned short int CNSTATE0 = 0;
    sbit  CNSTATE0_bit at CNSTATE.B0;
    const register unsigned short int CNSTATE1 = 1;
    sbit  CNSTATE1_bit at CNSTATE.B1;
    const register unsigned short int CNSTATE2 = 2;
    sbit  CNSTATE2_bit at CNSTATE.B2;
    const register unsigned short int CNSTATE3 = 3;
    sbit  CNSTATE3_bit at CNSTATE.B3;
    const register unsigned short int CNSTATE4 = 4;
    sbit  CNSTATE4_bit at CNSTATE.B4;
    const register unsigned short int CNSTATE5 = 5;
    sbit  CNSTATE5_bit at CNSTATE.B5;
    const register unsigned short int CNSTATE6 = 6;
    sbit  CNSTATE6_bit at CNSTATE.B6;
    const register unsigned short int CNSTATE7 = 7;
    sbit  CNSTATE7_bit at CNSTATE.B7;
sfr unsigned long   volatile CNSTATECLR       absolute 0xBF886494;
sfr unsigned long   volatile CNSTATESET       absolute 0xBF886498;
sfr unsigned long   volatile CNSTATEINV       absolute 0xBF88649C;
sfr atomic unsigned long   volatile ANSELF           absolute 0xBF886500;
sfr unsigned long   volatile ANSELFCLR        absolute 0xBF886504;
sfr unsigned long   volatile ANSELFSET        absolute 0xBF886508;
sfr unsigned long   volatile ANSELFINV        absolute 0xBF88650C;
sfr atomic unsigned long   volatile TRISF            absolute 0xBF886510;
    const register unsigned short int TRISF0 = 0;
    sbit  TRISF0_bit at TRISF.B0;
    const register unsigned short int TRISF1 = 1;
    sbit  TRISF1_bit at TRISF.B1;
    const register unsigned short int TRISF3 = 3;
    sbit  TRISF3_bit at TRISF.B3;
    const register unsigned short int TRISF4 = 4;
    sbit  TRISF4_bit at TRISF.B4;
    const register unsigned short int TRISF5 = 5;
    sbit  TRISF5_bit at TRISF.B5;
sfr unsigned long   volatile TRISFCLR         absolute 0xBF886514;
sfr unsigned long   volatile TRISFSET         absolute 0xBF886518;
sfr unsigned long   volatile TRISFINV         absolute 0xBF88651C;
sfr atomic unsigned long   volatile PORTF            absolute 0xBF886520;
    const register unsigned short int RF0 = 0;
    sbit  RF0_bit at PORTF.B0;
    const register unsigned short int RF1 = 1;
    sbit  RF1_bit at PORTF.B1;
    const register unsigned short int RF3 = 3;
    sbit  RF3_bit at PORTF.B3;
    const register unsigned short int RF4 = 4;
    sbit  RF4_bit at PORTF.B4;
    const register unsigned short int RF5 = 5;
    sbit  RF5_bit at PORTF.B5;
sfr unsigned long   volatile PORTFCLR         absolute 0xBF886524;
sfr unsigned long   volatile PORTFSET         absolute 0xBF886528;
sfr unsigned long   volatile PORTFINV         absolute 0xBF88652C;
sfr atomic unsigned long   volatile LATF             absolute 0xBF886530;
    const register unsigned short int LATF0 = 0;
    sbit  LATF0_bit at LATF.B0;
    const register unsigned short int LATF1 = 1;
    sbit  LATF1_bit at LATF.B1;
    const register unsigned short int LATF3 = 3;
    sbit  LATF3_bit at LATF.B3;
    const register unsigned short int LATF4 = 4;
    sbit  LATF4_bit at LATF.B4;
    const register unsigned short int LATF5 = 5;
    sbit  LATF5_bit at LATF.B5;
sfr unsigned long   volatile LATFCLR          absolute 0xBF886534;
sfr unsigned long   volatile LATFSET          absolute 0xBF886538;
sfr unsigned long   volatile LATFINV          absolute 0xBF88653C;
sfr atomic unsigned long   volatile ODCF             absolute 0xBF886540;
    const register unsigned short int ODCF0 = 0;
    sbit  ODCF0_bit at ODCF.B0;
    const register unsigned short int ODCF1 = 1;
    sbit  ODCF1_bit at ODCF.B1;
    const register unsigned short int ODCF3 = 3;
    sbit  ODCF3_bit at ODCF.B3;
    const register unsigned short int ODCF4 = 4;
    sbit  ODCF4_bit at ODCF.B4;
    const register unsigned short int ODCF5 = 5;
    sbit  ODCF5_bit at ODCF.B5;
sfr unsigned long   volatile ODCFCLR          absolute 0xBF886544;
sfr unsigned long   volatile ODCFSET          absolute 0xBF886548;
sfr unsigned long   volatile ODCFINV          absolute 0xBF88654C;
sfr atomic unsigned long   volatile CNPUF            absolute 0xBF886550;
    const register unsigned short int CNPUF0 = 0;
    sbit  CNPUF0_bit at CNPUF.B0;
    const register unsigned short int CNPUF1 = 1;
    sbit  CNPUF1_bit at CNPUF.B1;
    const register unsigned short int CNPUF3 = 3;
    sbit  CNPUF3_bit at CNPUF.B3;
    const register unsigned short int CNPUF4 = 4;
    sbit  CNPUF4_bit at CNPUF.B4;
    const register unsigned short int CNPUF5 = 5;
    sbit  CNPUF5_bit at CNPUF.B5;
sfr unsigned long   volatile CNPUFCLR         absolute 0xBF886554;
sfr unsigned long   volatile CNPUFSET         absolute 0xBF886558;
sfr unsigned long   volatile CNPUFINV         absolute 0xBF88655C;
sfr atomic unsigned long   volatile CNPDF            absolute 0xBF886560;
    const register unsigned short int CNPDF0 = 0;
    sbit  CNPDF0_bit at CNPDF.B0;
    const register unsigned short int CNPDF1 = 1;
    sbit  CNPDF1_bit at CNPDF.B1;
    const register unsigned short int CNPDF3 = 3;
    sbit  CNPDF3_bit at CNPDF.B3;
    const register unsigned short int CNPDF4 = 4;
    sbit  CNPDF4_bit at CNPDF.B4;
    const register unsigned short int CNPDF5 = 5;
    sbit  CNPDF5_bit at CNPDF.B5;
sfr unsigned long   volatile CNPDFCLR         absolute 0xBF886564;
sfr unsigned long   volatile CNPDFSET         absolute 0xBF886568;
sfr unsigned long   volatile CNPDFINV         absolute 0xBF88656C;
sfr atomic unsigned long   volatile CNCONF           absolute 0xBF886570;
    sbit  SIDL_CNCONF_bit at CNCONF.B13;
    sbit  ON_CNCONF_bit at CNCONF.B15;
sfr unsigned long   volatile CNCONFCLR        absolute 0xBF886574;
sfr unsigned long   volatile CNCONFSET        absolute 0xBF886578;
sfr unsigned long   volatile CNCONFINV        absolute 0xBF88657C;
sfr atomic unsigned long   volatile CNENF            absolute 0xBF886580;
    const register unsigned short int CNIEF0 = 0;
    sbit  CNIEF0_bit at CNENF.B0;
    const register unsigned short int CNIEF1 = 1;
    sbit  CNIEF1_bit at CNENF.B1;
    const register unsigned short int CNIEF3 = 3;
    sbit  CNIEF3_bit at CNENF.B3;
    const register unsigned short int CNIEF4 = 4;
    sbit  CNIEF4_bit at CNENF.B4;
    const register unsigned short int CNIEF5 = 5;
    sbit  CNIEF5_bit at CNENF.B5;
sfr unsigned long   volatile CNENFCLR         absolute 0xBF886584;
sfr unsigned long   volatile CNENFSET         absolute 0xBF886588;
sfr unsigned long   volatile CNENFINV         absolute 0xBF88658C;
sfr atomic unsigned long   volatile CNSTATF          absolute 0xBF886590;
    const register unsigned short int CNSTATF0 = 0;
    sbit  CNSTATF0_bit at CNSTATF.B0;
    const register unsigned short int CNSTATF1 = 1;
    sbit  CNSTATF1_bit at CNSTATF.B1;
    const register unsigned short int CNSTATF3 = 3;
    sbit  CNSTATF3_bit at CNSTATF.B3;
    const register unsigned short int CNSTATF4 = 4;
    sbit  CNSTATF4_bit at CNSTATF.B4;
    const register unsigned short int CNSTATF5 = 5;
    sbit  CNSTATF5_bit at CNSTATF.B5;
sfr unsigned long   volatile CNSTATFCLR       absolute 0xBF886594;
sfr unsigned long   volatile CNSTATFSET       absolute 0xBF886598;
sfr unsigned long   volatile CNSTATFINV       absolute 0xBF88659C;
sfr atomic unsigned long   volatile ANSELG           absolute 0xBF886600;
    const register unsigned short int ANSG6 = 6;
    sbit  ANSG6_bit at ANSELG.B6;
    const register unsigned short int ANSG7 = 7;
    sbit  ANSG7_bit at ANSELG.B7;
    const register unsigned short int ANSG8 = 8;
    sbit  ANSG8_bit at ANSELG.B8;
    const register unsigned short int ANSG9 = 9;
    sbit  ANSG9_bit at ANSELG.B9;
sfr unsigned long   volatile ANSELGCLR        absolute 0xBF886604;
sfr unsigned long   volatile ANSELGSET        absolute 0xBF886608;
sfr unsigned long   volatile ANSELGINV        absolute 0xBF88660C;
sfr atomic unsigned long   volatile TRISG            absolute 0xBF886610;
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
sfr unsigned long   volatile TRISGCLR         absolute 0xBF886614;
sfr unsigned long   volatile TRISGSET         absolute 0xBF886618;
sfr unsigned long   volatile TRISGINV         absolute 0xBF88661C;
sfr atomic unsigned long   volatile PORTG            absolute 0xBF886620;
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
sfr unsigned long   volatile PORTGCLR         absolute 0xBF886624;
sfr unsigned long   volatile PORTGSET         absolute 0xBF886628;
sfr unsigned long   volatile PORTGINV         absolute 0xBF88662C;
sfr atomic unsigned long   volatile LATG             absolute 0xBF886630;
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
sfr unsigned long   volatile LATGCLR          absolute 0xBF886634;
sfr unsigned long   volatile LATGSET          absolute 0xBF886638;
sfr unsigned long   volatile LATGINV          absolute 0xBF88663C;
sfr atomic unsigned long   volatile ODCG             absolute 0xBF886640;
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
sfr unsigned long   volatile ODCGCLR          absolute 0xBF886644;
sfr unsigned long   volatile ODCGSET          absolute 0xBF886648;
sfr unsigned long   volatile ODCGINV          absolute 0xBF88664C;
sfr atomic unsigned long   volatile CNPUG            absolute 0xBF886650;
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
sfr unsigned long   volatile CNPUGCLR         absolute 0xBF886654;
sfr unsigned long   volatile CNPUGSET         absolute 0xBF886658;
sfr unsigned long   volatile CNPUGINV         absolute 0xBF88665C;
sfr atomic unsigned long   volatile CNPDG            absolute 0xBF886660;
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
sfr unsigned long   volatile CNPDGCLR         absolute 0xBF886664;
sfr unsigned long   volatile CNPDGSET         absolute 0xBF886668;
sfr unsigned long   volatile CNPDGINV         absolute 0xBF88666C;
sfr atomic unsigned long   volatile CNCONG           absolute 0xBF886670;
    sbit  SIDL_CNCONG_bit at CNCONG.B13;
    sbit  ON_CNCONG_bit at CNCONG.B15;
sfr unsigned long   volatile CNCONGCLR        absolute 0xBF886674;
sfr unsigned long   volatile CNCONGSET        absolute 0xBF886678;
sfr unsigned long   volatile CNCONGINV        absolute 0xBF88667C;
sfr atomic unsigned long   volatile CNENG            absolute 0xBF886680;
    const register unsigned short int CNIEG2 = 2;
    sbit  CNIEG2_bit at CNENG.B2;
    const register unsigned short int CNIEG3 = 3;
    sbit  CNIEG3_bit at CNENG.B3;
    const register unsigned short int CNIEG6 = 6;
    sbit  CNIEG6_bit at CNENG.B6;
    const register unsigned short int CNIEG7 = 7;
    sbit  CNIEG7_bit at CNENG.B7;
    const register unsigned short int CNIEG8 = 8;
    sbit  CNIEG8_bit at CNENG.B8;
    const register unsigned short int CNIEG9 = 9;
    sbit  CNIEG9_bit at CNENG.B9;
sfr unsigned long   volatile CNENGCLR         absolute 0xBF886684;
sfr unsigned long   volatile CNENGSET         absolute 0xBF886688;
sfr unsigned long   volatile CNENGINV         absolute 0xBF88668C;
sfr atomic unsigned long   volatile CNSTATG          absolute 0xBF886690;
    const register unsigned short int CNSTATG2 = 2;
    sbit  CNSTATG2_bit at CNSTATG.B2;
    const register unsigned short int CNSTATG3 = 3;
    sbit  CNSTATG3_bit at CNSTATG.B3;
    const register unsigned short int CNSTATG6 = 6;
    sbit  CNSTATG6_bit at CNSTATG.B6;
    const register unsigned short int CNSTATG7 = 7;
    sbit  CNSTATG7_bit at CNSTATG.B7;
    const register unsigned short int CNSTATG8 = 8;
    sbit  CNSTATG8_bit at CNSTATG.B8;
    const register unsigned short int CNSTATG9 = 9;
    sbit  CNSTATG9_bit at CNSTATG.B9;
sfr unsigned long   volatile CNSTATGCLR       absolute 0xBF886694;
sfr unsigned long   volatile CNSTATGSET       absolute 0xBF886698;
sfr unsigned long   volatile CNSTATGINV       absolute 0xBF88669C;
sfr atomic unsigned long   volatile C1CON            absolute 0xBF88B000;
    const register unsigned short int DNCNT0 = 0;
    sbit  DNCNT0_bit at C1CON.B0;
    const register unsigned short int DNCNT1 = 1;
    sbit  DNCNT1_bit at C1CON.B1;
    const register unsigned short int DNCNT2 = 2;
    sbit  DNCNT2_bit at C1CON.B2;
    const register unsigned short int DNCNT3 = 3;
    sbit  DNCNT3_bit at C1CON.B3;
    const register unsigned short int DNCNT4 = 4;
    sbit  DNCNT4_bit at C1CON.B4;
    const register unsigned short int CANBUSY = 11;
    sbit  CANBUSY_bit at C1CON.B11;
    sbit  SIDL_C1CON_bit at C1CON.B13;
    sbit  ON_C1CON_bit at C1CON.B15;
    const register unsigned short int CANCAP = 20;
    sbit  CANCAP_bit at C1CON.B20;
    const register unsigned short int OPMOD0 = 21;
    sbit  OPMOD0_bit at C1CON.B21;
    const register unsigned short int OPMOD1 = 22;
    sbit  OPMOD1_bit at C1CON.B22;
    const register unsigned short int OPMOD2 = 23;
    sbit  OPMOD2_bit at C1CON.B23;
    const register unsigned short int REQOP0 = 24;
    sbit  REQOP0_bit at C1CON.B24;
    const register unsigned short int REQOP1 = 25;
    sbit  REQOP1_bit at C1CON.B25;
    const register unsigned short int REQOP2 = 26;
    sbit  REQOP2_bit at C1CON.B26;
    const register unsigned short int ABAT = 27;
    sbit  ABAT_bit at C1CON.B27;
sfr unsigned long   volatile C1CONCLR         absolute 0xBF88B004;
sfr unsigned long   volatile C1CONSET         absolute 0xBF88B008;
sfr unsigned long   volatile C1CONINV         absolute 0xBF88B00C;
sfr atomic unsigned long   volatile C1CFG            absolute 0xBF88B010;
    const register unsigned short int BRP0 = 0;
    sbit  BRP0_bit at C1CFG.B0;
    const register unsigned short int BRP1 = 1;
    sbit  BRP1_bit at C1CFG.B1;
    const register unsigned short int BRP2 = 2;
    sbit  BRP2_bit at C1CFG.B2;
    const register unsigned short int BRP3 = 3;
    sbit  BRP3_bit at C1CFG.B3;
    const register unsigned short int BRP4 = 4;
    sbit  BRP4_bit at C1CFG.B4;
    const register unsigned short int BRP5 = 5;
    sbit  BRP5_bit at C1CFG.B5;
    const register unsigned short int SJW0 = 6;
    sbit  SJW0_bit at C1CFG.B6;
    const register unsigned short int SJW1 = 7;
    sbit  SJW1_bit at C1CFG.B7;
    const register unsigned short int PRSEG0 = 8;
    sbit  PRSEG0_bit at C1CFG.B8;
    const register unsigned short int PRSEG1 = 9;
    sbit  PRSEG1_bit at C1CFG.B9;
    const register unsigned short int PRSEG2 = 10;
    sbit  PRSEG2_bit at C1CFG.B10;
    const register unsigned short int SEG1PH0 = 11;
    sbit  SEG1PH0_bit at C1CFG.B11;
    const register unsigned short int SEG1PH1 = 12;
    sbit  SEG1PH1_bit at C1CFG.B12;
    const register unsigned short int SEG1PH2 = 13;
    sbit  SEG1PH2_bit at C1CFG.B13;
    const register unsigned short int SAM = 14;
    sbit  SAM_bit at C1CFG.B14;
    const register unsigned short int SEG2PHTS = 15;
    sbit  SEG2PHTS_bit at C1CFG.B15;
    const register unsigned short int SEG2PH0 = 16;
    sbit  SEG2PH0_bit at C1CFG.B16;
    const register unsigned short int SEG2PH1 = 17;
    sbit  SEG2PH1_bit at C1CFG.B17;
    const register unsigned short int SEG2PH2 = 18;
    sbit  SEG2PH2_bit at C1CFG.B18;
    const register unsigned short int WAKFIL = 22;
    sbit  WAKFIL_bit at C1CFG.B22;
sfr unsigned long   volatile C1CFGCLR         absolute 0xBF88B014;
sfr unsigned long   volatile C1CFGSET         absolute 0xBF88B018;
sfr unsigned long   volatile C1CFGINV         absolute 0xBF88B01C;
sfr atomic unsigned long   volatile C1INT            absolute 0xBF88B020;
    const register unsigned short int TBIF = 0;
    sbit  TBIF_bit at C1INT.B0;
    const register unsigned short int RBIF = 1;
    sbit  RBIF_bit at C1INT.B1;
    const register unsigned short int CTMRIF = 2;
    sbit  CTMRIF_bit at C1INT.B2;
    const register unsigned short int MODIF = 3;
    sbit  MODIF_bit at C1INT.B3;
    const register unsigned short int RBOVIF = 11;
    sbit  RBOVIF_bit at C1INT.B11;
    const register unsigned short int SERRIF = 12;
    sbit  SERRIF_bit at C1INT.B12;
    const register unsigned short int CERRIF = 13;
    sbit  CERRIF_bit at C1INT.B13;
    const register unsigned short int WAKIF = 14;
    sbit  WAKIF_bit at C1INT.B14;
    const register unsigned short int IVRIF = 15;
    sbit  IVRIF_bit at C1INT.B15;
    const register unsigned short int TBIE = 16;
    sbit  TBIE_bit at C1INT.B16;
    const register unsigned short int RBIE = 17;
    sbit  RBIE_bit at C1INT.B17;
    const register unsigned short int CTMRIE = 18;
    sbit  CTMRIE_bit at C1INT.B18;
    const register unsigned short int MODIE = 19;
    sbit  MODIE_bit at C1INT.B19;
    const register unsigned short int RBOVIE = 27;
    sbit  RBOVIE_bit at C1INT.B27;
    const register unsigned short int SERRIE = 28;
    sbit  SERRIE_bit at C1INT.B28;
    const register unsigned short int CERRIE = 29;
    sbit  CERRIE_bit at C1INT.B29;
    const register unsigned short int WAKIE = 30;
    sbit  WAKIE_bit at C1INT.B30;
    const register unsigned short int IVRIE = 31;
    sbit  IVRIE_bit at C1INT.B31;
sfr unsigned long   volatile C1INTCLR         absolute 0xBF88B024;
sfr unsigned long   volatile C1INTSET         absolute 0xBF88B028;
sfr unsigned long   volatile C1INTINV         absolute 0xBF88B02C;
sfr atomic unsigned long   volatile C1VEC            absolute 0xBF88B030;
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
sfr unsigned long   volatile C1VECCLR         absolute 0xBF88B034;
sfr unsigned long   volatile C1VECSET         absolute 0xBF88B038;
sfr unsigned long   volatile C1VECINV         absolute 0xBF88B03C;
sfr atomic unsigned long   volatile C1TREC           absolute 0xBF88B040;
    const register unsigned short int RERRCNT0 = 0;
    sbit  RERRCNT0_bit at C1TREC.B0;
    const register unsigned short int RERRCNT1 = 1;
    sbit  RERRCNT1_bit at C1TREC.B1;
    const register unsigned short int RERRCNT2 = 2;
    sbit  RERRCNT2_bit at C1TREC.B2;
    const register unsigned short int RERRCNT3 = 3;
    sbit  RERRCNT3_bit at C1TREC.B3;
    const register unsigned short int RERRCNT4 = 4;
    sbit  RERRCNT4_bit at C1TREC.B4;
    const register unsigned short int RERRCNT5 = 5;
    sbit  RERRCNT5_bit at C1TREC.B5;
    const register unsigned short int RERRCNT6 = 6;
    sbit  RERRCNT6_bit at C1TREC.B6;
    const register unsigned short int RERRCNT7 = 7;
    sbit  RERRCNT7_bit at C1TREC.B7;
    const register unsigned short int TERRCNT0 = 8;
    sbit  TERRCNT0_bit at C1TREC.B8;
    const register unsigned short int TERRCNT1 = 9;
    sbit  TERRCNT1_bit at C1TREC.B9;
    const register unsigned short int TERRCNT2 = 10;
    sbit  TERRCNT2_bit at C1TREC.B10;
    const register unsigned short int TERRCNT3 = 11;
    sbit  TERRCNT3_bit at C1TREC.B11;
    const register unsigned short int TERRCNT4 = 12;
    sbit  TERRCNT4_bit at C1TREC.B12;
    const register unsigned short int TERRCNT5 = 13;
    sbit  TERRCNT5_bit at C1TREC.B13;
    const register unsigned short int TERRCNT6 = 14;
    sbit  TERRCNT6_bit at C1TREC.B14;
    const register unsigned short int TERRCNT7 = 15;
    sbit  TERRCNT7_bit at C1TREC.B15;
    const register unsigned short int EWARN = 16;
    sbit  EWARN_bit at C1TREC.B16;
    const register unsigned short int RXWARN = 17;
    sbit  RXWARN_bit at C1TREC.B17;
    const register unsigned short int TXWARN = 18;
    sbit  TXWARN_bit at C1TREC.B18;
    const register unsigned short int RXBP = 19;
    sbit  RXBP_bit at C1TREC.B19;
    const register unsigned short int TXBP = 20;
    sbit  TXBP_bit at C1TREC.B20;
    const register unsigned short int TXBO = 21;
    sbit  TXBO_bit at C1TREC.B21;
sfr unsigned long   volatile C1TRECCLR        absolute 0xBF88B044;
sfr unsigned long   volatile C1TRECSET        absolute 0xBF88B048;
sfr unsigned long   volatile C1TRECINV        absolute 0xBF88B04C;
sfr atomic unsigned long   volatile C1FSTAT          absolute 0xBF88B050;
    const register unsigned short int FIFOIP0 = 0;
    sbit  FIFOIP0_bit at C1FSTAT.B0;
    const register unsigned short int FIFOIP1 = 1;
    sbit  FIFOIP1_bit at C1FSTAT.B1;
    const register unsigned short int FIFOIP2 = 2;
    sbit  FIFOIP2_bit at C1FSTAT.B2;
    const register unsigned short int FIFOIP3 = 3;
    sbit  FIFOIP3_bit at C1FSTAT.B3;
    const register unsigned short int FIFOIP4 = 4;
    sbit  FIFOIP4_bit at C1FSTAT.B4;
    const register unsigned short int FIFOIP5 = 5;
    sbit  FIFOIP5_bit at C1FSTAT.B5;
    const register unsigned short int FIFOIP6 = 6;
    sbit  FIFOIP6_bit at C1FSTAT.B6;
    const register unsigned short int FIFOIP7 = 7;
    sbit  FIFOIP7_bit at C1FSTAT.B7;
    const register unsigned short int FIFOIP8 = 8;
    sbit  FIFOIP8_bit at C1FSTAT.B8;
    const register unsigned short int FIFOIP9 = 9;
    sbit  FIFOIP9_bit at C1FSTAT.B9;
    const register unsigned short int FIFOIP10 = 10;
    sbit  FIFOIP10_bit at C1FSTAT.B10;
    const register unsigned short int FIFOIP11 = 11;
    sbit  FIFOIP11_bit at C1FSTAT.B11;
    const register unsigned short int FIFOIP12 = 12;
    sbit  FIFOIP12_bit at C1FSTAT.B12;
    const register unsigned short int FIFOIP13 = 13;
    sbit  FIFOIP13_bit at C1FSTAT.B13;
    const register unsigned short int FIFOIP14 = 14;
    sbit  FIFOIP14_bit at C1FSTAT.B14;
    const register unsigned short int FIFOIP15 = 15;
    sbit  FIFOIP15_bit at C1FSTAT.B15;
    const register unsigned short int FIFOIP16 = 16;
    sbit  FIFOIP16_bit at C1FSTAT.B16;
    const register unsigned short int FIFOIP17 = 17;
    sbit  FIFOIP17_bit at C1FSTAT.B17;
    const register unsigned short int FIFOIP18 = 18;
    sbit  FIFOIP18_bit at C1FSTAT.B18;
    const register unsigned short int FIFOIP19 = 19;
    sbit  FIFOIP19_bit at C1FSTAT.B19;
    const register unsigned short int FIFOIP20 = 20;
    sbit  FIFOIP20_bit at C1FSTAT.B20;
    const register unsigned short int FIFOIP21 = 21;
    sbit  FIFOIP21_bit at C1FSTAT.B21;
    const register unsigned short int FIFOIP22 = 22;
    sbit  FIFOIP22_bit at C1FSTAT.B22;
    const register unsigned short int FIFOIP23 = 23;
    sbit  FIFOIP23_bit at C1FSTAT.B23;
    const register unsigned short int FIFOIP24 = 24;
    sbit  FIFOIP24_bit at C1FSTAT.B24;
    const register unsigned short int FIFOIP25 = 25;
    sbit  FIFOIP25_bit at C1FSTAT.B25;
    const register unsigned short int FIFOIP26 = 26;
    sbit  FIFOIP26_bit at C1FSTAT.B26;
    const register unsigned short int FIFOIP27 = 27;
    sbit  FIFOIP27_bit at C1FSTAT.B27;
    const register unsigned short int FIFOIP28 = 28;
    sbit  FIFOIP28_bit at C1FSTAT.B28;
    const register unsigned short int FIFOIP29 = 29;
    sbit  FIFOIP29_bit at C1FSTAT.B29;
    const register unsigned short int FIFOIP30 = 30;
    sbit  FIFOIP30_bit at C1FSTAT.B30;
    const register unsigned short int FIFOIP31 = 31;
    sbit  FIFOIP31_bit at C1FSTAT.B31;
    sbit  FIFOIP0_C1FSTAT_bit at C1FSTAT.B0;
    sbit  FIFOIP1_C1FSTAT_bit at C1FSTAT.B1;
    sbit  FIFOIP2_C1FSTAT_bit at C1FSTAT.B2;
    sbit  FIFOIP3_C1FSTAT_bit at C1FSTAT.B3;
    sbit  FIFOIP4_C1FSTAT_bit at C1FSTAT.B4;
    sbit  FIFOIP5_C1FSTAT_bit at C1FSTAT.B5;
    sbit  FIFOIP6_C1FSTAT_bit at C1FSTAT.B6;
    sbit  FIFOIP7_C1FSTAT_bit at C1FSTAT.B7;
    sbit  FIFOIP8_C1FSTAT_bit at C1FSTAT.B8;
    sbit  FIFOIP9_C1FSTAT_bit at C1FSTAT.B9;
    sbit  FIFOIP10_C1FSTAT_bit at C1FSTAT.B10;
    sbit  FIFOIP11_C1FSTAT_bit at C1FSTAT.B11;
    sbit  FIFOIP12_C1FSTAT_bit at C1FSTAT.B12;
    sbit  FIFOIP13_C1FSTAT_bit at C1FSTAT.B13;
    sbit  FIFOIP14_C1FSTAT_bit at C1FSTAT.B14;
    sbit  FIFOIP15_C1FSTAT_bit at C1FSTAT.B15;
    sbit  FIFOIP16_C1FSTAT_bit at C1FSTAT.B16;
    sbit  FIFOIP17_C1FSTAT_bit at C1FSTAT.B17;
    sbit  FIFOIP18_C1FSTAT_bit at C1FSTAT.B18;
    sbit  FIFOIP19_C1FSTAT_bit at C1FSTAT.B19;
    sbit  FIFOIP20_C1FSTAT_bit at C1FSTAT.B20;
    sbit  FIFOIP21_C1FSTAT_bit at C1FSTAT.B21;
    sbit  FIFOIP22_C1FSTAT_bit at C1FSTAT.B22;
    sbit  FIFOIP23_C1FSTAT_bit at C1FSTAT.B23;
    sbit  FIFOIP24_C1FSTAT_bit at C1FSTAT.B24;
    sbit  FIFOIP25_C1FSTAT_bit at C1FSTAT.B25;
    sbit  FIFOIP26_C1FSTAT_bit at C1FSTAT.B26;
    sbit  FIFOIP27_C1FSTAT_bit at C1FSTAT.B27;
    sbit  FIFOIP28_C1FSTAT_bit at C1FSTAT.B28;
    sbit  FIFOIP29_C1FSTAT_bit at C1FSTAT.B29;
    sbit  FIFOIP30_C1FSTAT_bit at C1FSTAT.B30;
    sbit  FIFOIP31_C1FSTAT_bit at C1FSTAT.B31;
sfr unsigned long   volatile C1FSTATCLR       absolute 0xBF88B054;
sfr unsigned long   volatile C1FSTATSET       absolute 0xBF88B058;
sfr unsigned long   volatile C1FSTATINV       absolute 0xBF88B05C;
sfr atomic unsigned long   volatile C1RXOVF          absolute 0xBF88B060;
    const register unsigned short int RXOVF0 = 0;
    sbit  RXOVF0_bit at C1RXOVF.B0;
    const register unsigned short int RXOVF1 = 1;
    sbit  RXOVF1_bit at C1RXOVF.B1;
    const register unsigned short int RXOVF2 = 2;
    sbit  RXOVF2_bit at C1RXOVF.B2;
    const register unsigned short int RXOVF3 = 3;
    sbit  RXOVF3_bit at C1RXOVF.B3;
    const register unsigned short int RXOVF4 = 4;
    sbit  RXOVF4_bit at C1RXOVF.B4;
    const register unsigned short int RXOVF5 = 5;
    sbit  RXOVF5_bit at C1RXOVF.B5;
    const register unsigned short int RXOVF6 = 6;
    sbit  RXOVF6_bit at C1RXOVF.B6;
    const register unsigned short int RXOVF7 = 7;
    sbit  RXOVF7_bit at C1RXOVF.B7;
    const register unsigned short int RXOVF8 = 8;
    sbit  RXOVF8_bit at C1RXOVF.B8;
    const register unsigned short int RXOVF9 = 9;
    sbit  RXOVF9_bit at C1RXOVF.B9;
    const register unsigned short int RXOVF10 = 10;
    sbit  RXOVF10_bit at C1RXOVF.B10;
    const register unsigned short int RXOVF11 = 11;
    sbit  RXOVF11_bit at C1RXOVF.B11;
    const register unsigned short int RXOVF12 = 12;
    sbit  RXOVF12_bit at C1RXOVF.B12;
    const register unsigned short int RXOVF13 = 13;
    sbit  RXOVF13_bit at C1RXOVF.B13;
    const register unsigned short int RXOVF14 = 14;
    sbit  RXOVF14_bit at C1RXOVF.B14;
    const register unsigned short int RXOVF15 = 15;
    sbit  RXOVF15_bit at C1RXOVF.B15;
    const register unsigned short int RXOVF16 = 16;
    sbit  RXOVF16_bit at C1RXOVF.B16;
    const register unsigned short int RXOVF17 = 17;
    sbit  RXOVF17_bit at C1RXOVF.B17;
    const register unsigned short int RXOVF18 = 18;
    sbit  RXOVF18_bit at C1RXOVF.B18;
    const register unsigned short int RXOVF19 = 19;
    sbit  RXOVF19_bit at C1RXOVF.B19;
    const register unsigned short int RXOVF20 = 20;
    sbit  RXOVF20_bit at C1RXOVF.B20;
    const register unsigned short int RXOVF21 = 21;
    sbit  RXOVF21_bit at C1RXOVF.B21;
    const register unsigned short int RXOVF22 = 22;
    sbit  RXOVF22_bit at C1RXOVF.B22;
    const register unsigned short int RXOVF23 = 23;
    sbit  RXOVF23_bit at C1RXOVF.B23;
    const register unsigned short int RXOVF24 = 24;
    sbit  RXOVF24_bit at C1RXOVF.B24;
    const register unsigned short int RXOVF25 = 25;
    sbit  RXOVF25_bit at C1RXOVF.B25;
    const register unsigned short int RXOVF26 = 26;
    sbit  RXOVF26_bit at C1RXOVF.B26;
    const register unsigned short int RXOVF27 = 27;
    sbit  RXOVF27_bit at C1RXOVF.B27;
    const register unsigned short int RXOVF28 = 28;
    sbit  RXOVF28_bit at C1RXOVF.B28;
    const register unsigned short int RXOVF29 = 29;
    sbit  RXOVF29_bit at C1RXOVF.B29;
    const register unsigned short int RXOVF30 = 30;
    sbit  RXOVF30_bit at C1RXOVF.B30;
    const register unsigned short int RXOVF31 = 31;
    sbit  RXOVF31_bit at C1RXOVF.B31;
    sbit  RXOVF0_C1RXOVF_bit at C1RXOVF.B0;
    sbit  RXOVF1_C1RXOVF_bit at C1RXOVF.B1;
    sbit  RXOVF2_C1RXOVF_bit at C1RXOVF.B2;
    sbit  RXOVF3_C1RXOVF_bit at C1RXOVF.B3;
    sbit  RXOVF4_C1RXOVF_bit at C1RXOVF.B4;
    sbit  RXOVF5_C1RXOVF_bit at C1RXOVF.B5;
    sbit  RXOVF6_C1RXOVF_bit at C1RXOVF.B6;
    sbit  RXOVF7_C1RXOVF_bit at C1RXOVF.B7;
    sbit  RXOVF8_C1RXOVF_bit at C1RXOVF.B8;
    sbit  RXOVF9_C1RXOVF_bit at C1RXOVF.B9;
    sbit  RXOVF10_C1RXOVF_bit at C1RXOVF.B10;
    sbit  RXOVF11_C1RXOVF_bit at C1RXOVF.B11;
    sbit  RXOVF12_C1RXOVF_bit at C1RXOVF.B12;
    sbit  RXOVF13_C1RXOVF_bit at C1RXOVF.B13;
    sbit  RXOVF14_C1RXOVF_bit at C1RXOVF.B14;
    sbit  RXOVF15_C1RXOVF_bit at C1RXOVF.B15;
    sbit  RXOVF16_C1RXOVF_bit at C1RXOVF.B16;
    sbit  RXOVF17_C1RXOVF_bit at C1RXOVF.B17;
    sbit  RXOVF18_C1RXOVF_bit at C1RXOVF.B18;
    sbit  RXOVF19_C1RXOVF_bit at C1RXOVF.B19;
    sbit  RXOVF20_C1RXOVF_bit at C1RXOVF.B20;
    sbit  RXOVF21_C1RXOVF_bit at C1RXOVF.B21;
    sbit  RXOVF22_C1RXOVF_bit at C1RXOVF.B22;
    sbit  RXOVF23_C1RXOVF_bit at C1RXOVF.B23;
    sbit  RXOVF24_C1RXOVF_bit at C1RXOVF.B24;
    sbit  RXOVF25_C1RXOVF_bit at C1RXOVF.B25;
    sbit  RXOVF26_C1RXOVF_bit at C1RXOVF.B26;
    sbit  RXOVF27_C1RXOVF_bit at C1RXOVF.B27;
    sbit  RXOVF28_C1RXOVF_bit at C1RXOVF.B28;
    sbit  RXOVF29_C1RXOVF_bit at C1RXOVF.B29;
    sbit  RXOVF30_C1RXOVF_bit at C1RXOVF.B30;
    sbit  RXOVF31_C1RXOVF_bit at C1RXOVF.B31;
sfr unsigned long   volatile C1RXOVFCLR       absolute 0xBF88B064;
sfr unsigned long   volatile C1RXOVFSET       absolute 0xBF88B068;
sfr unsigned long   volatile C1RXOVFINV       absolute 0xBF88B06C;
sfr atomic unsigned long   volatile C1TMR            absolute 0xBF88B070;
    const register unsigned short int CANTSPRE0 = 0;
    sbit  CANTSPRE0_bit at C1TMR.B0;
    const register unsigned short int CANTSPRE1 = 1;
    sbit  CANTSPRE1_bit at C1TMR.B1;
    const register unsigned short int CANTSPRE2 = 2;
    sbit  CANTSPRE2_bit at C1TMR.B2;
    const register unsigned short int CANTSPRE3 = 3;
    sbit  CANTSPRE3_bit at C1TMR.B3;
    const register unsigned short int CANTSPRE4 = 4;
    sbit  CANTSPRE4_bit at C1TMR.B4;
    const register unsigned short int CANTSPRE5 = 5;
    sbit  CANTSPRE5_bit at C1TMR.B5;
    const register unsigned short int CANTSPRE6 = 6;
    sbit  CANTSPRE6_bit at C1TMR.B6;
    const register unsigned short int CANTSPRE7 = 7;
    sbit  CANTSPRE7_bit at C1TMR.B7;
    const register unsigned short int CANTSPRE8 = 8;
    sbit  CANTSPRE8_bit at C1TMR.B8;
    const register unsigned short int CANTSPRE9 = 9;
    sbit  CANTSPRE9_bit at C1TMR.B9;
    const register unsigned short int CANTSPRE10 = 10;
    sbit  CANTSPRE10_bit at C1TMR.B10;
    const register unsigned short int CANTSPRE11 = 11;
    sbit  CANTSPRE11_bit at C1TMR.B11;
    const register unsigned short int CANTSPRE12 = 12;
    sbit  CANTSPRE12_bit at C1TMR.B12;
    const register unsigned short int CANTSPRE13 = 13;
    sbit  CANTSPRE13_bit at C1TMR.B13;
    const register unsigned short int CANTSPRE14 = 14;
    sbit  CANTSPRE14_bit at C1TMR.B14;
    const register unsigned short int CANTSPRE15 = 15;
    sbit  CANTSPRE15_bit at C1TMR.B15;
    const register unsigned short int CANTS0 = 16;
    sbit  CANTS0_bit at C1TMR.B16;
    const register unsigned short int CANTS1 = 17;
    sbit  CANTS1_bit at C1TMR.B17;
    const register unsigned short int CANTS2 = 18;
    sbit  CANTS2_bit at C1TMR.B18;
    const register unsigned short int CANTS3 = 19;
    sbit  CANTS3_bit at C1TMR.B19;
    const register unsigned short int CANTS4 = 20;
    sbit  CANTS4_bit at C1TMR.B20;
    const register unsigned short int CANTS5 = 21;
    sbit  CANTS5_bit at C1TMR.B21;
    const register unsigned short int CANTS6 = 22;
    sbit  CANTS6_bit at C1TMR.B22;
    const register unsigned short int CANTS7 = 23;
    sbit  CANTS7_bit at C1TMR.B23;
    const register unsigned short int CANTS8 = 24;
    sbit  CANTS8_bit at C1TMR.B24;
    const register unsigned short int CANTS9 = 25;
    sbit  CANTS9_bit at C1TMR.B25;
    const register unsigned short int CANTS10 = 26;
    sbit  CANTS10_bit at C1TMR.B26;
    const register unsigned short int CANTS11 = 27;
    sbit  CANTS11_bit at C1TMR.B27;
    const register unsigned short int CANTS12 = 28;
    sbit  CANTS12_bit at C1TMR.B28;
    const register unsigned short int CANTS13 = 29;
    sbit  CANTS13_bit at C1TMR.B29;
    const register unsigned short int CANTS14 = 30;
    sbit  CANTS14_bit at C1TMR.B30;
    const register unsigned short int CANTS15 = 31;
    sbit  CANTS15_bit at C1TMR.B31;
sfr unsigned long   volatile C1TMRCLR         absolute 0xBF88B074;
sfr unsigned long   volatile C1TMRSET         absolute 0xBF88B078;
sfr unsigned long   volatile C1TMRINV         absolute 0xBF88B07C;
sfr atomic unsigned long   volatile C1RXM0           absolute 0xBF88B080;
    const register unsigned short int EID0 = 0;
    sbit  EID0_bit at C1RXM0.B0;
    const register unsigned short int EID1 = 1;
    sbit  EID1_bit at C1RXM0.B1;
    const register unsigned short int EID2 = 2;
    sbit  EID2_bit at C1RXM0.B2;
    const register unsigned short int EID3 = 3;
    sbit  EID3_bit at C1RXM0.B3;
    const register unsigned short int EID4 = 4;
    sbit  EID4_bit at C1RXM0.B4;
    const register unsigned short int EID5 = 5;
    sbit  EID5_bit at C1RXM0.B5;
    const register unsigned short int EID6 = 6;
    sbit  EID6_bit at C1RXM0.B6;
    const register unsigned short int EID7 = 7;
    sbit  EID7_bit at C1RXM0.B7;
    const register unsigned short int EID8 = 8;
    sbit  EID8_bit at C1RXM0.B8;
    const register unsigned short int EID9 = 9;
    sbit  EID9_bit at C1RXM0.B9;
    const register unsigned short int EID10 = 10;
    sbit  EID10_bit at C1RXM0.B10;
    const register unsigned short int EID11 = 11;
    sbit  EID11_bit at C1RXM0.B11;
    const register unsigned short int EID12 = 12;
    sbit  EID12_bit at C1RXM0.B12;
    const register unsigned short int EID13 = 13;
    sbit  EID13_bit at C1RXM0.B13;
    const register unsigned short int EID14 = 14;
    sbit  EID14_bit at C1RXM0.B14;
    const register unsigned short int EID15 = 15;
    sbit  EID15_bit at C1RXM0.B15;
    const register unsigned short int EID16 = 16;
    sbit  EID16_bit at C1RXM0.B16;
    const register unsigned short int EID17 = 17;
    sbit  EID17_bit at C1RXM0.B17;
    const register unsigned short int MIDE = 19;
    sbit  MIDE_bit at C1RXM0.B19;
    const register unsigned short int SID0 = 21;
    sbit  SID0_bit at C1RXM0.B21;
    const register unsigned short int SID1 = 22;
    sbit  SID1_bit at C1RXM0.B22;
    const register unsigned short int SID2 = 23;
    sbit  SID2_bit at C1RXM0.B23;
    const register unsigned short int SID3 = 24;
    sbit  SID3_bit at C1RXM0.B24;
    const register unsigned short int SID4 = 25;
    sbit  SID4_bit at C1RXM0.B25;
    const register unsigned short int SID5 = 26;
    sbit  SID5_bit at C1RXM0.B26;
    const register unsigned short int SID6 = 27;
    sbit  SID6_bit at C1RXM0.B27;
    const register unsigned short int SID7 = 28;
    sbit  SID7_bit at C1RXM0.B28;
    const register unsigned short int SID8 = 29;
    sbit  SID8_bit at C1RXM0.B29;
    const register unsigned short int SID9 = 30;
    sbit  SID9_bit at C1RXM0.B30;
    const register unsigned short int SID10 = 31;
    sbit  SID10_bit at C1RXM0.B31;
sfr unsigned long   volatile C1RXM0CLR        absolute 0xBF88B084;
sfr unsigned long   volatile C1RXM0SET        absolute 0xBF88B088;
sfr unsigned long   volatile C1RXM0INV        absolute 0xBF88B08C;
sfr atomic unsigned long   volatile C1RXM1           absolute 0xBF88B090;
    sbit  EID0_C1RXM1_bit at C1RXM1.B0;
    sbit  EID1_C1RXM1_bit at C1RXM1.B1;
    sbit  EID2_C1RXM1_bit at C1RXM1.B2;
    sbit  EID3_C1RXM1_bit at C1RXM1.B3;
    sbit  EID4_C1RXM1_bit at C1RXM1.B4;
    sbit  EID5_C1RXM1_bit at C1RXM1.B5;
    sbit  EID6_C1RXM1_bit at C1RXM1.B6;
    sbit  EID7_C1RXM1_bit at C1RXM1.B7;
    sbit  EID8_C1RXM1_bit at C1RXM1.B8;
    sbit  EID9_C1RXM1_bit at C1RXM1.B9;
    sbit  EID10_C1RXM1_bit at C1RXM1.B10;
    sbit  EID11_C1RXM1_bit at C1RXM1.B11;
    sbit  EID12_C1RXM1_bit at C1RXM1.B12;
    sbit  EID13_C1RXM1_bit at C1RXM1.B13;
    sbit  EID14_C1RXM1_bit at C1RXM1.B14;
    sbit  EID15_C1RXM1_bit at C1RXM1.B15;
    sbit  EID16_C1RXM1_bit at C1RXM1.B16;
    sbit  EID17_C1RXM1_bit at C1RXM1.B17;
    sbit  MIDE_C1RXM1_bit at C1RXM1.B19;
    sbit  SID0_C1RXM1_bit at C1RXM1.B21;
    sbit  SID1_C1RXM1_bit at C1RXM1.B22;
    sbit  SID2_C1RXM1_bit at C1RXM1.B23;
    sbit  SID3_C1RXM1_bit at C1RXM1.B24;
    sbit  SID4_C1RXM1_bit at C1RXM1.B25;
    sbit  SID5_C1RXM1_bit at C1RXM1.B26;
    sbit  SID6_C1RXM1_bit at C1RXM1.B27;
    sbit  SID7_C1RXM1_bit at C1RXM1.B28;
    sbit  SID8_C1RXM1_bit at C1RXM1.B29;
    sbit  SID9_C1RXM1_bit at C1RXM1.B30;
    sbit  SID10_C1RXM1_bit at C1RXM1.B31;
sfr unsigned long   volatile C1RXM1CLR        absolute 0xBF88B094;
sfr unsigned long   volatile C1RXM1SET        absolute 0xBF88B098;
sfr unsigned long   volatile C1RXM1INV        absolute 0xBF88B09C;
sfr atomic unsigned long   volatile C1RXM2           absolute 0xBF88B0A0;
    sbit  EID0_C1RXM2_bit at C1RXM2.B0;
    sbit  EID1_C1RXM2_bit at C1RXM2.B1;
    sbit  EID2_C1RXM2_bit at C1RXM2.B2;
    sbit  EID3_C1RXM2_bit at C1RXM2.B3;
    sbit  EID4_C1RXM2_bit at C1RXM2.B4;
    sbit  EID5_C1RXM2_bit at C1RXM2.B5;
    sbit  EID6_C1RXM2_bit at C1RXM2.B6;
    sbit  EID7_C1RXM2_bit at C1RXM2.B7;
    sbit  EID8_C1RXM2_bit at C1RXM2.B8;
    sbit  EID9_C1RXM2_bit at C1RXM2.B9;
    sbit  EID10_C1RXM2_bit at C1RXM2.B10;
    sbit  EID11_C1RXM2_bit at C1RXM2.B11;
    sbit  EID12_C1RXM2_bit at C1RXM2.B12;
    sbit  EID13_C1RXM2_bit at C1RXM2.B13;
    sbit  EID14_C1RXM2_bit at C1RXM2.B14;
    sbit  EID15_C1RXM2_bit at C1RXM2.B15;
    sbit  EID16_C1RXM2_bit at C1RXM2.B16;
    sbit  EID17_C1RXM2_bit at C1RXM2.B17;
    sbit  MIDE_C1RXM2_bit at C1RXM2.B19;
    sbit  SID0_C1RXM2_bit at C1RXM2.B21;
    sbit  SID1_C1RXM2_bit at C1RXM2.B22;
    sbit  SID2_C1RXM2_bit at C1RXM2.B23;
    sbit  SID3_C1RXM2_bit at C1RXM2.B24;
    sbit  SID4_C1RXM2_bit at C1RXM2.B25;
    sbit  SID5_C1RXM2_bit at C1RXM2.B26;
    sbit  SID6_C1RXM2_bit at C1RXM2.B27;
    sbit  SID7_C1RXM2_bit at C1RXM2.B28;
    sbit  SID8_C1RXM2_bit at C1RXM2.B29;
    sbit  SID9_C1RXM2_bit at C1RXM2.B30;
    sbit  SID10_C1RXM2_bit at C1RXM2.B31;
sfr unsigned long   volatile C1RXM2CLR        absolute 0xBF88B0A4;
sfr unsigned long   volatile C1RXM2SET        absolute 0xBF88B0A8;
sfr unsigned long   volatile C1RXM2INV        absolute 0xBF88B0AC;
sfr atomic unsigned long   volatile C1RXM3           absolute 0xBF88B0B0;
    sbit  EID0_C1RXM3_bit at C1RXM3.B0;
    sbit  EID1_C1RXM3_bit at C1RXM3.B1;
    sbit  EID2_C1RXM3_bit at C1RXM3.B2;
    sbit  EID3_C1RXM3_bit at C1RXM3.B3;
    sbit  EID4_C1RXM3_bit at C1RXM3.B4;
    sbit  EID5_C1RXM3_bit at C1RXM3.B5;
    sbit  EID6_C1RXM3_bit at C1RXM3.B6;
    sbit  EID7_C1RXM3_bit at C1RXM3.B7;
    sbit  EID8_C1RXM3_bit at C1RXM3.B8;
    sbit  EID9_C1RXM3_bit at C1RXM3.B9;
    sbit  EID10_C1RXM3_bit at C1RXM3.B10;
    sbit  EID11_C1RXM3_bit at C1RXM3.B11;
    sbit  EID12_C1RXM3_bit at C1RXM3.B12;
    sbit  EID13_C1RXM3_bit at C1RXM3.B13;
    sbit  EID14_C1RXM3_bit at C1RXM3.B14;
    sbit  EID15_C1RXM3_bit at C1RXM3.B15;
    sbit  EID16_C1RXM3_bit at C1RXM3.B16;
    sbit  EID17_C1RXM3_bit at C1RXM3.B17;
    sbit  MIDE_C1RXM3_bit at C1RXM3.B19;
    sbit  SID0_C1RXM3_bit at C1RXM3.B21;
    sbit  SID1_C1RXM3_bit at C1RXM3.B22;
    sbit  SID2_C1RXM3_bit at C1RXM3.B23;
    sbit  SID3_C1RXM3_bit at C1RXM3.B24;
    sbit  SID4_C1RXM3_bit at C1RXM3.B25;
    sbit  SID5_C1RXM3_bit at C1RXM3.B26;
    sbit  SID6_C1RXM3_bit at C1RXM3.B27;
    sbit  SID7_C1RXM3_bit at C1RXM3.B28;
    sbit  SID8_C1RXM3_bit at C1RXM3.B29;
    sbit  SID9_C1RXM3_bit at C1RXM3.B30;
    sbit  SID10_C1RXM3_bit at C1RXM3.B31;
sfr unsigned long   volatile C1RXM3CLR        absolute 0xBF88B0B4;
sfr unsigned long   volatile C1RXM3SET        absolute 0xBF88B0B8;
sfr unsigned long   volatile C1RXM3INV        absolute 0xBF88B0BC;
sfr atomic unsigned long   volatile C1FLTCON0        absolute 0xBF88B0C0;
    const register unsigned short int FSEL00 = 0;
    sbit  FSEL00_bit at C1FLTCON0.B0;
    const register unsigned short int FSEL01 = 1;
    sbit  FSEL01_bit at C1FLTCON0.B1;
    const register unsigned short int FSEL02 = 2;
    sbit  FSEL02_bit at C1FLTCON0.B2;
    const register unsigned short int FSEL03 = 3;
    sbit  FSEL03_bit at C1FLTCON0.B3;
    const register unsigned short int FSEL04 = 4;
    sbit  FSEL04_bit at C1FLTCON0.B4;
    const register unsigned short int MSEL00 = 5;
    sbit  MSEL00_bit at C1FLTCON0.B5;
    const register unsigned short int MSEL01 = 6;
    sbit  MSEL01_bit at C1FLTCON0.B6;
    const register unsigned short int FLTEN0 = 7;
    sbit  FLTEN0_bit at C1FLTCON0.B7;
    const register unsigned short int FSEL10 = 8;
    sbit  FSEL10_bit at C1FLTCON0.B8;
    const register unsigned short int FSEL11 = 9;
    sbit  FSEL11_bit at C1FLTCON0.B9;
    const register unsigned short int FSEL12 = 10;
    sbit  FSEL12_bit at C1FLTCON0.B10;
    const register unsigned short int FSEL13 = 11;
    sbit  FSEL13_bit at C1FLTCON0.B11;
    const register unsigned short int FSEL14 = 12;
    sbit  FSEL14_bit at C1FLTCON0.B12;
    const register unsigned short int MSEL10 = 13;
    sbit  MSEL10_bit at C1FLTCON0.B13;
    const register unsigned short int MSEL11 = 14;
    sbit  MSEL11_bit at C1FLTCON0.B14;
    const register unsigned short int FLTEN1 = 15;
    sbit  FLTEN1_bit at C1FLTCON0.B15;
    const register unsigned short int FSEL20 = 16;
    sbit  FSEL20_bit at C1FLTCON0.B16;
    const register unsigned short int FSEL21 = 17;
    sbit  FSEL21_bit at C1FLTCON0.B17;
    const register unsigned short int FSEL22 = 18;
    sbit  FSEL22_bit at C1FLTCON0.B18;
    const register unsigned short int FSEL23 = 19;
    sbit  FSEL23_bit at C1FLTCON0.B19;
    const register unsigned short int FSEL24 = 20;
    sbit  FSEL24_bit at C1FLTCON0.B20;
    const register unsigned short int MSEL20 = 21;
    sbit  MSEL20_bit at C1FLTCON0.B21;
    const register unsigned short int MSEL21 = 22;
    sbit  MSEL21_bit at C1FLTCON0.B22;
    const register unsigned short int FLTEN2 = 23;
    sbit  FLTEN2_bit at C1FLTCON0.B23;
    const register unsigned short int FSEL30 = 24;
    sbit  FSEL30_bit at C1FLTCON0.B24;
    const register unsigned short int FSEL31 = 25;
    sbit  FSEL31_bit at C1FLTCON0.B25;
    const register unsigned short int FSEL32 = 26;
    sbit  FSEL32_bit at C1FLTCON0.B26;
    const register unsigned short int FSEL33 = 27;
    sbit  FSEL33_bit at C1FLTCON0.B27;
    const register unsigned short int FSEL34 = 28;
    sbit  FSEL34_bit at C1FLTCON0.B28;
    const register unsigned short int MSEL30 = 29;
    sbit  MSEL30_bit at C1FLTCON0.B29;
    const register unsigned short int MSEL31 = 30;
    sbit  MSEL31_bit at C1FLTCON0.B30;
    const register unsigned short int FLTEN3 = 31;
    sbit  FLTEN3_bit at C1FLTCON0.B31;
sfr unsigned long   volatile C1FLTCON0CLR     absolute 0xBF88B0C4;
sfr unsigned long   volatile C1FLTCON0SET     absolute 0xBF88B0C8;
sfr unsigned long   volatile C1FLTCON0INV     absolute 0xBF88B0CC;
sfr atomic unsigned long   volatile C1FLTCON1        absolute 0xBF88B0D0;
    const register unsigned short int FSEL40 = 0;
    sbit  FSEL40_bit at C1FLTCON1.B0;
    const register unsigned short int FSEL41 = 1;
    sbit  FSEL41_bit at C1FLTCON1.B1;
    const register unsigned short int FSEL42 = 2;
    sbit  FSEL42_bit at C1FLTCON1.B2;
    const register unsigned short int FSEL43 = 3;
    sbit  FSEL43_bit at C1FLTCON1.B3;
    const register unsigned short int FSEL44 = 4;
    sbit  FSEL44_bit at C1FLTCON1.B4;
    const register unsigned short int MSEL40 = 5;
    sbit  MSEL40_bit at C1FLTCON1.B5;
    const register unsigned short int MSEL41 = 6;
    sbit  MSEL41_bit at C1FLTCON1.B6;
    const register unsigned short int FLTEN4 = 7;
    sbit  FLTEN4_bit at C1FLTCON1.B7;
    const register unsigned short int FSEL50 = 8;
    sbit  FSEL50_bit at C1FLTCON1.B8;
    const register unsigned short int FSEL51 = 9;
    sbit  FSEL51_bit at C1FLTCON1.B9;
    const register unsigned short int FSEL52 = 10;
    sbit  FSEL52_bit at C1FLTCON1.B10;
    const register unsigned short int FSEL53 = 11;
    sbit  FSEL53_bit at C1FLTCON1.B11;
    const register unsigned short int FSEL54 = 12;
    sbit  FSEL54_bit at C1FLTCON1.B12;
    const register unsigned short int MSEL50 = 13;
    sbit  MSEL50_bit at C1FLTCON1.B13;
    const register unsigned short int MSEL51 = 14;
    sbit  MSEL51_bit at C1FLTCON1.B14;
    const register unsigned short int FLTEN5 = 15;
    sbit  FLTEN5_bit at C1FLTCON1.B15;
    const register unsigned short int FSEL60 = 16;
    sbit  FSEL60_bit at C1FLTCON1.B16;
    const register unsigned short int FSEL61 = 17;
    sbit  FSEL61_bit at C1FLTCON1.B17;
    const register unsigned short int FSEL62 = 18;
    sbit  FSEL62_bit at C1FLTCON1.B18;
    const register unsigned short int FSEL63 = 19;
    sbit  FSEL63_bit at C1FLTCON1.B19;
    const register unsigned short int FSEL64 = 20;
    sbit  FSEL64_bit at C1FLTCON1.B20;
    const register unsigned short int MSEL60 = 21;
    sbit  MSEL60_bit at C1FLTCON1.B21;
    const register unsigned short int MSEL61 = 22;
    sbit  MSEL61_bit at C1FLTCON1.B22;
    const register unsigned short int FLTEN6 = 23;
    sbit  FLTEN6_bit at C1FLTCON1.B23;
    const register unsigned short int FSEL70 = 24;
    sbit  FSEL70_bit at C1FLTCON1.B24;
    const register unsigned short int FSEL71 = 25;
    sbit  FSEL71_bit at C1FLTCON1.B25;
    const register unsigned short int FSEL72 = 26;
    sbit  FSEL72_bit at C1FLTCON1.B26;
    const register unsigned short int FSEL73 = 27;
    sbit  FSEL73_bit at C1FLTCON1.B27;
    const register unsigned short int FSEL74 = 28;
    sbit  FSEL74_bit at C1FLTCON1.B28;
    const register unsigned short int MSEL70 = 29;
    sbit  MSEL70_bit at C1FLTCON1.B29;
    const register unsigned short int MSEL71 = 30;
    sbit  MSEL71_bit at C1FLTCON1.B30;
    const register unsigned short int FLTEN7 = 31;
    sbit  FLTEN7_bit at C1FLTCON1.B31;
sfr unsigned long   volatile C1FLTCON1CLR     absolute 0xBF88B0D4;
sfr unsigned long   volatile C1FLTCON1SET     absolute 0xBF88B0D8;
sfr unsigned long   volatile C1FLTCON1INV     absolute 0xBF88B0DC;
sfr atomic unsigned long   volatile C1FLTCON2        absolute 0xBF88B0E0;
    const register unsigned short int FSEL80 = 0;
    sbit  FSEL80_bit at C1FLTCON2.B0;
    const register unsigned short int FSEL81 = 1;
    sbit  FSEL81_bit at C1FLTCON2.B1;
    const register unsigned short int FSEL82 = 2;
    sbit  FSEL82_bit at C1FLTCON2.B2;
    const register unsigned short int FSEL83 = 3;
    sbit  FSEL83_bit at C1FLTCON2.B3;
    const register unsigned short int FSEL84 = 4;
    sbit  FSEL84_bit at C1FLTCON2.B4;
    const register unsigned short int MSEL80 = 5;
    sbit  MSEL80_bit at C1FLTCON2.B5;
    const register unsigned short int MSEL81 = 6;
    sbit  MSEL81_bit at C1FLTCON2.B6;
    const register unsigned short int FLTEN8 = 7;
    sbit  FLTEN8_bit at C1FLTCON2.B7;
    const register unsigned short int FSEL90 = 8;
    sbit  FSEL90_bit at C1FLTCON2.B8;
    const register unsigned short int FSEL91 = 9;
    sbit  FSEL91_bit at C1FLTCON2.B9;
    const register unsigned short int FSEL92 = 10;
    sbit  FSEL92_bit at C1FLTCON2.B10;
    const register unsigned short int FSEL93 = 11;
    sbit  FSEL93_bit at C1FLTCON2.B11;
    const register unsigned short int FSEL94 = 12;
    sbit  FSEL94_bit at C1FLTCON2.B12;
    const register unsigned short int MSEL90 = 13;
    sbit  MSEL90_bit at C1FLTCON2.B13;
    const register unsigned short int MSEL91 = 14;
    sbit  MSEL91_bit at C1FLTCON2.B14;
    const register unsigned short int FLTEN9 = 15;
    sbit  FLTEN9_bit at C1FLTCON2.B15;
    const register unsigned short int FSEL100 = 16;
    sbit  FSEL100_bit at C1FLTCON2.B16;
    const register unsigned short int FSEL101 = 17;
    sbit  FSEL101_bit at C1FLTCON2.B17;
    const register unsigned short int FSEL102 = 18;
    sbit  FSEL102_bit at C1FLTCON2.B18;
    const register unsigned short int FSEL103 = 19;
    sbit  FSEL103_bit at C1FLTCON2.B19;
    const register unsigned short int FSEL104 = 20;
    sbit  FSEL104_bit at C1FLTCON2.B20;
    const register unsigned short int MSEL100 = 21;
    sbit  MSEL100_bit at C1FLTCON2.B21;
    const register unsigned short int MSEL101 = 22;
    sbit  MSEL101_bit at C1FLTCON2.B22;
    const register unsigned short int FLTEN10 = 23;
    sbit  FLTEN10_bit at C1FLTCON2.B23;
    const register unsigned short int FSEL110 = 24;
    sbit  FSEL110_bit at C1FLTCON2.B24;
    const register unsigned short int FSEL111 = 25;
    sbit  FSEL111_bit at C1FLTCON2.B25;
    const register unsigned short int FSEL112 = 26;
    sbit  FSEL112_bit at C1FLTCON2.B26;
    const register unsigned short int FSEL113 = 27;
    sbit  FSEL113_bit at C1FLTCON2.B27;
    const register unsigned short int FSEL114 = 28;
    sbit  FSEL114_bit at C1FLTCON2.B28;
    const register unsigned short int MSEL110 = 29;
    sbit  MSEL110_bit at C1FLTCON2.B29;
    const register unsigned short int MSEL111 = 30;
    sbit  MSEL111_bit at C1FLTCON2.B30;
    const register unsigned short int FLTEN11 = 31;
    sbit  FLTEN11_bit at C1FLTCON2.B31;
sfr unsigned long   volatile C1FLTCON2CLR     absolute 0xBF88B0E4;
sfr unsigned long   volatile C1FLTCON2SET     absolute 0xBF88B0E8;
sfr unsigned long   volatile C1FLTCON2INV     absolute 0xBF88B0EC;
sfr atomic unsigned long   volatile C1FLTCON3        absolute 0xBF88B0F0;
    const register unsigned short int FSEL120 = 0;
    sbit  FSEL120_bit at C1FLTCON3.B0;
    const register unsigned short int FSEL121 = 1;
    sbit  FSEL121_bit at C1FLTCON3.B1;
    const register unsigned short int FSEL122 = 2;
    sbit  FSEL122_bit at C1FLTCON3.B2;
    const register unsigned short int FSEL123 = 3;
    sbit  FSEL123_bit at C1FLTCON3.B3;
    const register unsigned short int FSEL124 = 4;
    sbit  FSEL124_bit at C1FLTCON3.B4;
    const register unsigned short int MSEL120 = 5;
    sbit  MSEL120_bit at C1FLTCON3.B5;
    const register unsigned short int MSEL121 = 6;
    sbit  MSEL121_bit at C1FLTCON3.B6;
    const register unsigned short int FLTEN12 = 7;
    sbit  FLTEN12_bit at C1FLTCON3.B7;
    const register unsigned short int FSEL130 = 8;
    sbit  FSEL130_bit at C1FLTCON3.B8;
    const register unsigned short int FSEL131 = 9;
    sbit  FSEL131_bit at C1FLTCON3.B9;
    const register unsigned short int FSEL132 = 10;
    sbit  FSEL132_bit at C1FLTCON3.B10;
    const register unsigned short int FSEL133 = 11;
    sbit  FSEL133_bit at C1FLTCON3.B11;
    const register unsigned short int FSEL134 = 12;
    sbit  FSEL134_bit at C1FLTCON3.B12;
    const register unsigned short int MSEL130 = 13;
    sbit  MSEL130_bit at C1FLTCON3.B13;
    const register unsigned short int MSEL131 = 14;
    sbit  MSEL131_bit at C1FLTCON3.B14;
    const register unsigned short int FLTEN13 = 15;
    sbit  FLTEN13_bit at C1FLTCON3.B15;
    const register unsigned short int FSEL140 = 16;
    sbit  FSEL140_bit at C1FLTCON3.B16;
    const register unsigned short int FSEL141 = 17;
    sbit  FSEL141_bit at C1FLTCON3.B17;
    const register unsigned short int FSEL142 = 18;
    sbit  FSEL142_bit at C1FLTCON3.B18;
    const register unsigned short int FSEL143 = 19;
    sbit  FSEL143_bit at C1FLTCON3.B19;
    const register unsigned short int FSEL144 = 20;
    sbit  FSEL144_bit at C1FLTCON3.B20;
    const register unsigned short int MSEL140 = 21;
    sbit  MSEL140_bit at C1FLTCON3.B21;
    const register unsigned short int MSEL141 = 22;
    sbit  MSEL141_bit at C1FLTCON3.B22;
    const register unsigned short int FLTEN14 = 23;
    sbit  FLTEN14_bit at C1FLTCON3.B23;
    const register unsigned short int FSEL150 = 24;
    sbit  FSEL150_bit at C1FLTCON3.B24;
    const register unsigned short int FSEL151 = 25;
    sbit  FSEL151_bit at C1FLTCON3.B25;
    const register unsigned short int FSEL152 = 26;
    sbit  FSEL152_bit at C1FLTCON3.B26;
    const register unsigned short int FSEL153 = 27;
    sbit  FSEL153_bit at C1FLTCON3.B27;
    const register unsigned short int FSEL154 = 28;
    sbit  FSEL154_bit at C1FLTCON3.B28;
    const register unsigned short int MSEL150 = 29;
    sbit  MSEL150_bit at C1FLTCON3.B29;
    const register unsigned short int MSEL151 = 30;
    sbit  MSEL151_bit at C1FLTCON3.B30;
    const register unsigned short int FLTEN15 = 31;
    sbit  FLTEN15_bit at C1FLTCON3.B31;
sfr unsigned long   volatile C1FLTCON3CLR     absolute 0xBF88B0F4;
sfr unsigned long   volatile C1FLTCON3SET     absolute 0xBF88B0F8;
sfr unsigned long   volatile C1FLTCON3INV     absolute 0xBF88B0FC;
sfr atomic unsigned long   volatile C1FLTCON4        absolute 0xBF88B100;
    const register unsigned short int FSEL160 = 0;
    sbit  FSEL160_bit at C1FLTCON4.B0;
    const register unsigned short int FSEL161 = 1;
    sbit  FSEL161_bit at C1FLTCON4.B1;
    const register unsigned short int FSEL162 = 2;
    sbit  FSEL162_bit at C1FLTCON4.B2;
    const register unsigned short int FSEL163 = 3;
    sbit  FSEL163_bit at C1FLTCON4.B3;
    const register unsigned short int FSEL164 = 4;
    sbit  FSEL164_bit at C1FLTCON4.B4;
    const register unsigned short int MSEL160 = 5;
    sbit  MSEL160_bit at C1FLTCON4.B5;
    const register unsigned short int MSEL161 = 6;
    sbit  MSEL161_bit at C1FLTCON4.B6;
    const register unsigned short int FLTEN16 = 7;
    sbit  FLTEN16_bit at C1FLTCON4.B7;
    const register unsigned short int FSEL170 = 8;
    sbit  FSEL170_bit at C1FLTCON4.B8;
    const register unsigned short int FSEL171 = 9;
    sbit  FSEL171_bit at C1FLTCON4.B9;
    const register unsigned short int FSEL172 = 10;
    sbit  FSEL172_bit at C1FLTCON4.B10;
    const register unsigned short int FSEL173 = 11;
    sbit  FSEL173_bit at C1FLTCON4.B11;
    const register unsigned short int FSEL174 = 12;
    sbit  FSEL174_bit at C1FLTCON4.B12;
    const register unsigned short int MSEL170 = 13;
    sbit  MSEL170_bit at C1FLTCON4.B13;
    const register unsigned short int MSEL171 = 14;
    sbit  MSEL171_bit at C1FLTCON4.B14;
    const register unsigned short int FLTEN17 = 15;
    sbit  FLTEN17_bit at C1FLTCON4.B15;
    const register unsigned short int FSEL180 = 16;
    sbit  FSEL180_bit at C1FLTCON4.B16;
    const register unsigned short int FSEL181 = 17;
    sbit  FSEL181_bit at C1FLTCON4.B17;
    const register unsigned short int FSEL182 = 18;
    sbit  FSEL182_bit at C1FLTCON4.B18;
    const register unsigned short int FSEL183 = 19;
    sbit  FSEL183_bit at C1FLTCON4.B19;
    const register unsigned short int FSEL184 = 20;
    sbit  FSEL184_bit at C1FLTCON4.B20;
    const register unsigned short int MSEL180 = 21;
    sbit  MSEL180_bit at C1FLTCON4.B21;
    const register unsigned short int MSEL181 = 22;
    sbit  MSEL181_bit at C1FLTCON4.B22;
    const register unsigned short int FLTEN18 = 23;
    sbit  FLTEN18_bit at C1FLTCON4.B23;
    const register unsigned short int FSEL190 = 24;
    sbit  FSEL190_bit at C1FLTCON4.B24;
    const register unsigned short int FSEL191 = 25;
    sbit  FSEL191_bit at C1FLTCON4.B25;
    const register unsigned short int FSEL192 = 26;
    sbit  FSEL192_bit at C1FLTCON4.B26;
    const register unsigned short int FSEL193 = 27;
    sbit  FSEL193_bit at C1FLTCON4.B27;
    const register unsigned short int FSEL194 = 28;
    sbit  FSEL194_bit at C1FLTCON4.B28;
    const register unsigned short int MSEL190 = 29;
    sbit  MSEL190_bit at C1FLTCON4.B29;
    const register unsigned short int MSEL191 = 30;
    sbit  MSEL191_bit at C1FLTCON4.B30;
    const register unsigned short int FLTEN19 = 31;
    sbit  FLTEN19_bit at C1FLTCON4.B31;
sfr unsigned long   volatile C1FLTCON4CLR     absolute 0xBF88B104;
sfr unsigned long   volatile C1FLTCON4SET     absolute 0xBF88B108;
sfr unsigned long   volatile C1FLTCON4INV     absolute 0xBF88B10C;
sfr atomic unsigned long   volatile C1FLTCON5        absolute 0xBF88B110;
    const register unsigned short int FSEL200 = 0;
    sbit  FSEL200_bit at C1FLTCON5.B0;
    const register unsigned short int FSEL201 = 1;
    sbit  FSEL201_bit at C1FLTCON5.B1;
    const register unsigned short int FSEL202 = 2;
    sbit  FSEL202_bit at C1FLTCON5.B2;
    const register unsigned short int FSEL203 = 3;
    sbit  FSEL203_bit at C1FLTCON5.B3;
    const register unsigned short int FSEL204 = 4;
    sbit  FSEL204_bit at C1FLTCON5.B4;
    const register unsigned short int MSEL200 = 5;
    sbit  MSEL200_bit at C1FLTCON5.B5;
    const register unsigned short int MSEL201 = 6;
    sbit  MSEL201_bit at C1FLTCON5.B6;
    const register unsigned short int FLTEN20 = 7;
    sbit  FLTEN20_bit at C1FLTCON5.B7;
    const register unsigned short int FSEL210 = 8;
    sbit  FSEL210_bit at C1FLTCON5.B8;
    const register unsigned short int FSEL211 = 9;
    sbit  FSEL211_bit at C1FLTCON5.B9;
    const register unsigned short int FSEL212 = 10;
    sbit  FSEL212_bit at C1FLTCON5.B10;
    const register unsigned short int FSEL213 = 11;
    sbit  FSEL213_bit at C1FLTCON5.B11;
    const register unsigned short int FSEL214 = 12;
    sbit  FSEL214_bit at C1FLTCON5.B12;
    const register unsigned short int MSEL210 = 13;
    sbit  MSEL210_bit at C1FLTCON5.B13;
    const register unsigned short int MSEL211 = 14;
    sbit  MSEL211_bit at C1FLTCON5.B14;
    const register unsigned short int FLTEN21 = 15;
    sbit  FLTEN21_bit at C1FLTCON5.B15;
    const register unsigned short int FSEL220 = 16;
    sbit  FSEL220_bit at C1FLTCON5.B16;
    const register unsigned short int FSEL221 = 17;
    sbit  FSEL221_bit at C1FLTCON5.B17;
    const register unsigned short int FSEL222 = 18;
    sbit  FSEL222_bit at C1FLTCON5.B18;
    const register unsigned short int FSEL223 = 19;
    sbit  FSEL223_bit at C1FLTCON5.B19;
    const register unsigned short int FSEL224 = 20;
    sbit  FSEL224_bit at C1FLTCON5.B20;
    const register unsigned short int MSEL220 = 21;
    sbit  MSEL220_bit at C1FLTCON5.B21;
    const register unsigned short int MSEL221 = 22;
    sbit  MSEL221_bit at C1FLTCON5.B22;
    const register unsigned short int FLTEN22 = 23;
    sbit  FLTEN22_bit at C1FLTCON5.B23;
    const register unsigned short int FSEL230 = 24;
    sbit  FSEL230_bit at C1FLTCON5.B24;
    const register unsigned short int FSEL231 = 25;
    sbit  FSEL231_bit at C1FLTCON5.B25;
    const register unsigned short int FSEL232 = 26;
    sbit  FSEL232_bit at C1FLTCON5.B26;
    const register unsigned short int FSEL233 = 27;
    sbit  FSEL233_bit at C1FLTCON5.B27;
    const register unsigned short int FSEL234 = 28;
    sbit  FSEL234_bit at C1FLTCON5.B28;
    const register unsigned short int MSEL230 = 29;
    sbit  MSEL230_bit at C1FLTCON5.B29;
    const register unsigned short int MSEL231 = 30;
    sbit  MSEL231_bit at C1FLTCON5.B30;
    const register unsigned short int FLTEN23 = 31;
    sbit  FLTEN23_bit at C1FLTCON5.B31;
sfr unsigned long   volatile C1FLTCON5CLR     absolute 0xBF88B114;
sfr unsigned long   volatile C1FLTCON5SET     absolute 0xBF88B118;
sfr unsigned long   volatile C1FLTCON5INV     absolute 0xBF88B11C;
sfr atomic unsigned long   volatile C1FLTCON6        absolute 0xBF88B120;
    const register unsigned short int FSEL240 = 0;
    sbit  FSEL240_bit at C1FLTCON6.B0;
    const register unsigned short int FSEL241 = 1;
    sbit  FSEL241_bit at C1FLTCON6.B1;
    const register unsigned short int FSEL242 = 2;
    sbit  FSEL242_bit at C1FLTCON6.B2;
    const register unsigned short int FSEL243 = 3;
    sbit  FSEL243_bit at C1FLTCON6.B3;
    const register unsigned short int FSEL244 = 4;
    sbit  FSEL244_bit at C1FLTCON6.B4;
    const register unsigned short int MSEL240 = 5;
    sbit  MSEL240_bit at C1FLTCON6.B5;
    const register unsigned short int MSEL241 = 6;
    sbit  MSEL241_bit at C1FLTCON6.B6;
    const register unsigned short int FLTEN24 = 7;
    sbit  FLTEN24_bit at C1FLTCON6.B7;
    const register unsigned short int FSEL250 = 8;
    sbit  FSEL250_bit at C1FLTCON6.B8;
    const register unsigned short int FSEL251 = 9;
    sbit  FSEL251_bit at C1FLTCON6.B9;
    const register unsigned short int FSEL252 = 10;
    sbit  FSEL252_bit at C1FLTCON6.B10;
    const register unsigned short int FSEL253 = 11;
    sbit  FSEL253_bit at C1FLTCON6.B11;
    const register unsigned short int FSEL254 = 12;
    sbit  FSEL254_bit at C1FLTCON6.B12;
    const register unsigned short int MSEL250 = 13;
    sbit  MSEL250_bit at C1FLTCON6.B13;
    const register unsigned short int MSEL251 = 14;
    sbit  MSEL251_bit at C1FLTCON6.B14;
    const register unsigned short int FLTEN25 = 15;
    sbit  FLTEN25_bit at C1FLTCON6.B15;
    const register unsigned short int FSEL260 = 16;
    sbit  FSEL260_bit at C1FLTCON6.B16;
    const register unsigned short int FSEL261 = 17;
    sbit  FSEL261_bit at C1FLTCON6.B17;
    const register unsigned short int FSEL262 = 18;
    sbit  FSEL262_bit at C1FLTCON6.B18;
    const register unsigned short int FSEL263 = 19;
    sbit  FSEL263_bit at C1FLTCON6.B19;
    const register unsigned short int FSEL264 = 20;
    sbit  FSEL264_bit at C1FLTCON6.B20;
    const register unsigned short int MSEL260 = 21;
    sbit  MSEL260_bit at C1FLTCON6.B21;
    const register unsigned short int MSEL261 = 22;
    sbit  MSEL261_bit at C1FLTCON6.B22;
    const register unsigned short int FLTEN26 = 23;
    sbit  FLTEN26_bit at C1FLTCON6.B23;
    const register unsigned short int FSEL270 = 24;
    sbit  FSEL270_bit at C1FLTCON6.B24;
    const register unsigned short int FSEL271 = 25;
    sbit  FSEL271_bit at C1FLTCON6.B25;
    const register unsigned short int FSEL272 = 26;
    sbit  FSEL272_bit at C1FLTCON6.B26;
    const register unsigned short int FSEL273 = 27;
    sbit  FSEL273_bit at C1FLTCON6.B27;
    const register unsigned short int FSEL274 = 28;
    sbit  FSEL274_bit at C1FLTCON6.B28;
    const register unsigned short int MSEL270 = 29;
    sbit  MSEL270_bit at C1FLTCON6.B29;
    const register unsigned short int MSEL271 = 30;
    sbit  MSEL271_bit at C1FLTCON6.B30;
    const register unsigned short int FLTEN27 = 31;
    sbit  FLTEN27_bit at C1FLTCON6.B31;
sfr unsigned long   volatile C1FLTCON6CLR     absolute 0xBF88B124;
sfr unsigned long   volatile C1FLTCON6SET     absolute 0xBF88B128;
sfr unsigned long   volatile C1FLTCON6INV     absolute 0xBF88B12C;
sfr atomic unsigned long   volatile C1FLTCON7        absolute 0xBF88B130;
    const register unsigned short int FSEL280 = 0;
    sbit  FSEL280_bit at C1FLTCON7.B0;
    const register unsigned short int FSEL281 = 1;
    sbit  FSEL281_bit at C1FLTCON7.B1;
    const register unsigned short int FSEL282 = 2;
    sbit  FSEL282_bit at C1FLTCON7.B2;
    const register unsigned short int FSEL283 = 3;
    sbit  FSEL283_bit at C1FLTCON7.B3;
    const register unsigned short int FSEL284 = 4;
    sbit  FSEL284_bit at C1FLTCON7.B4;
    const register unsigned short int MSEL280 = 5;
    sbit  MSEL280_bit at C1FLTCON7.B5;
    const register unsigned short int MSEL281 = 6;
    sbit  MSEL281_bit at C1FLTCON7.B6;
    const register unsigned short int FLTEN28 = 7;
    sbit  FLTEN28_bit at C1FLTCON7.B7;
    const register unsigned short int FSEL290 = 8;
    sbit  FSEL290_bit at C1FLTCON7.B8;
    const register unsigned short int FSEL291 = 9;
    sbit  FSEL291_bit at C1FLTCON7.B9;
    const register unsigned short int FSEL292 = 10;
    sbit  FSEL292_bit at C1FLTCON7.B10;
    const register unsigned short int FSEL293 = 11;
    sbit  FSEL293_bit at C1FLTCON7.B11;
    const register unsigned short int FSEL294 = 12;
    sbit  FSEL294_bit at C1FLTCON7.B12;
    const register unsigned short int MSEL290 = 13;
    sbit  MSEL290_bit at C1FLTCON7.B13;
    const register unsigned short int MSEL291 = 14;
    sbit  MSEL291_bit at C1FLTCON7.B14;
    const register unsigned short int FLTEN29 = 15;
    sbit  FLTEN29_bit at C1FLTCON7.B15;
    const register unsigned short int FSEL300 = 16;
    sbit  FSEL300_bit at C1FLTCON7.B16;
    const register unsigned short int FSEL301 = 17;
    sbit  FSEL301_bit at C1FLTCON7.B17;
    const register unsigned short int FSEL302 = 18;
    sbit  FSEL302_bit at C1FLTCON7.B18;
    const register unsigned short int FSEL303 = 19;
    sbit  FSEL303_bit at C1FLTCON7.B19;
    const register unsigned short int FSEL304 = 20;
    sbit  FSEL304_bit at C1FLTCON7.B20;
    const register unsigned short int MSEL300 = 21;
    sbit  MSEL300_bit at C1FLTCON7.B21;
    const register unsigned short int MSEL301 = 22;
    sbit  MSEL301_bit at C1FLTCON7.B22;
    const register unsigned short int FLTEN30 = 23;
    sbit  FLTEN30_bit at C1FLTCON7.B23;
    const register unsigned short int FSEL310 = 24;
    sbit  FSEL310_bit at C1FLTCON7.B24;
    const register unsigned short int FSEL311 = 25;
    sbit  FSEL311_bit at C1FLTCON7.B25;
    const register unsigned short int FSEL312 = 26;
    sbit  FSEL312_bit at C1FLTCON7.B26;
    const register unsigned short int FSEL313 = 27;
    sbit  FSEL313_bit at C1FLTCON7.B27;
    const register unsigned short int FSEL314 = 28;
    sbit  FSEL314_bit at C1FLTCON7.B28;
    const register unsigned short int MSEL310 = 29;
    sbit  MSEL310_bit at C1FLTCON7.B29;
    const register unsigned short int MSEL311 = 30;
    sbit  MSEL311_bit at C1FLTCON7.B30;
    const register unsigned short int FLTEN31 = 31;
    sbit  FLTEN31_bit at C1FLTCON7.B31;
sfr unsigned long   volatile C1FLTCON7CLR     absolute 0xBF88B134;
sfr unsigned long   volatile C1FLTCON7SET     absolute 0xBF88B138;
sfr unsigned long   volatile C1FLTCON7INV     absolute 0xBF88B13C;
sfr atomic unsigned long   volatile C1RXF0           absolute 0xBF88B140;
    sbit  EID0_C1RXF0_bit at C1RXF0.B0;
    sbit  EID1_C1RXF0_bit at C1RXF0.B1;
    sbit  EID2_C1RXF0_bit at C1RXF0.B2;
    sbit  EID3_C1RXF0_bit at C1RXF0.B3;
    sbit  EID4_C1RXF0_bit at C1RXF0.B4;
    sbit  EID5_C1RXF0_bit at C1RXF0.B5;
    sbit  EID6_C1RXF0_bit at C1RXF0.B6;
    sbit  EID7_C1RXF0_bit at C1RXF0.B7;
    sbit  EID8_C1RXF0_bit at C1RXF0.B8;
    sbit  EID9_C1RXF0_bit at C1RXF0.B9;
    sbit  EID10_C1RXF0_bit at C1RXF0.B10;
    sbit  EID11_C1RXF0_bit at C1RXF0.B11;
    sbit  EID12_C1RXF0_bit at C1RXF0.B12;
    sbit  EID13_C1RXF0_bit at C1RXF0.B13;
    sbit  EID14_C1RXF0_bit at C1RXF0.B14;
    sbit  EID15_C1RXF0_bit at C1RXF0.B15;
    sbit  EID16_C1RXF0_bit at C1RXF0.B16;
    sbit  EID17_C1RXF0_bit at C1RXF0.B17;
    const register unsigned short int EXID = 19;
    sbit  EXID_bit at C1RXF0.B19;
    sbit  SID0_C1RXF0_bit at C1RXF0.B21;
    sbit  SID1_C1RXF0_bit at C1RXF0.B22;
    sbit  SID2_C1RXF0_bit at C1RXF0.B23;
    sbit  SID3_C1RXF0_bit at C1RXF0.B24;
    sbit  SID4_C1RXF0_bit at C1RXF0.B25;
    sbit  SID5_C1RXF0_bit at C1RXF0.B26;
    sbit  SID6_C1RXF0_bit at C1RXF0.B27;
    sbit  SID7_C1RXF0_bit at C1RXF0.B28;
    sbit  SID8_C1RXF0_bit at C1RXF0.B29;
    sbit  SID9_C1RXF0_bit at C1RXF0.B30;
    sbit  SID10_C1RXF0_bit at C1RXF0.B31;
sfr unsigned long   volatile C1RXF0CLR        absolute 0xBF88B144;
sfr unsigned long   volatile C1RXF0SET        absolute 0xBF88B148;
sfr unsigned long   volatile C1RXF0INV        absolute 0xBF88B14C;
sfr atomic unsigned long   volatile C1RXF1           absolute 0xBF88B150;
    sbit  EID0_C1RXF1_bit at C1RXF1.B0;
    sbit  EID1_C1RXF1_bit at C1RXF1.B1;
    sbit  EID2_C1RXF1_bit at C1RXF1.B2;
    sbit  EID3_C1RXF1_bit at C1RXF1.B3;
    sbit  EID4_C1RXF1_bit at C1RXF1.B4;
    sbit  EID5_C1RXF1_bit at C1RXF1.B5;
    sbit  EID6_C1RXF1_bit at C1RXF1.B6;
    sbit  EID7_C1RXF1_bit at C1RXF1.B7;
    sbit  EID8_C1RXF1_bit at C1RXF1.B8;
    sbit  EID9_C1RXF1_bit at C1RXF1.B9;
    sbit  EID10_C1RXF1_bit at C1RXF1.B10;
    sbit  EID11_C1RXF1_bit at C1RXF1.B11;
    sbit  EID12_C1RXF1_bit at C1RXF1.B12;
    sbit  EID13_C1RXF1_bit at C1RXF1.B13;
    sbit  EID14_C1RXF1_bit at C1RXF1.B14;
    sbit  EID15_C1RXF1_bit at C1RXF1.B15;
    sbit  EID16_C1RXF1_bit at C1RXF1.B16;
    sbit  EID17_C1RXF1_bit at C1RXF1.B17;
    sbit  EXID_C1RXF1_bit at C1RXF1.B19;
    sbit  SID0_C1RXF1_bit at C1RXF1.B21;
    sbit  SID1_C1RXF1_bit at C1RXF1.B22;
    sbit  SID2_C1RXF1_bit at C1RXF1.B23;
    sbit  SID3_C1RXF1_bit at C1RXF1.B24;
    sbit  SID4_C1RXF1_bit at C1RXF1.B25;
    sbit  SID5_C1RXF1_bit at C1RXF1.B26;
    sbit  SID6_C1RXF1_bit at C1RXF1.B27;
    sbit  SID7_C1RXF1_bit at C1RXF1.B28;
    sbit  SID8_C1RXF1_bit at C1RXF1.B29;
    sbit  SID9_C1RXF1_bit at C1RXF1.B30;
    sbit  SID10_C1RXF1_bit at C1RXF1.B31;
sfr unsigned long   volatile C1RXF1CLR        absolute 0xBF88B154;
sfr unsigned long   volatile C1RXF1SET        absolute 0xBF88B158;
sfr unsigned long   volatile C1RXF1INV        absolute 0xBF88B15C;
sfr atomic unsigned long   volatile C1RXF2           absolute 0xBF88B160;
    sbit  EID0_C1RXF2_bit at C1RXF2.B0;
    sbit  EID1_C1RXF2_bit at C1RXF2.B1;
    sbit  EID2_C1RXF2_bit at C1RXF2.B2;
    sbit  EID3_C1RXF2_bit at C1RXF2.B3;
    sbit  EID4_C1RXF2_bit at C1RXF2.B4;
    sbit  EID5_C1RXF2_bit at C1RXF2.B5;
    sbit  EID6_C1RXF2_bit at C1RXF2.B6;
    sbit  EID7_C1RXF2_bit at C1RXF2.B7;
    sbit  EID8_C1RXF2_bit at C1RXF2.B8;
    sbit  EID9_C1RXF2_bit at C1RXF2.B9;
    sbit  EID10_C1RXF2_bit at C1RXF2.B10;
    sbit  EID11_C1RXF2_bit at C1RXF2.B11;
    sbit  EID12_C1RXF2_bit at C1RXF2.B12;
    sbit  EID13_C1RXF2_bit at C1RXF2.B13;
    sbit  EID14_C1RXF2_bit at C1RXF2.B14;
    sbit  EID15_C1RXF2_bit at C1RXF2.B15;
    sbit  EID16_C1RXF2_bit at C1RXF2.B16;
    sbit  EID17_C1RXF2_bit at C1RXF2.B17;
    sbit  EXID_C1RXF2_bit at C1RXF2.B19;
    sbit  SID0_C1RXF2_bit at C1RXF2.B21;
    sbit  SID1_C1RXF2_bit at C1RXF2.B22;
    sbit  SID2_C1RXF2_bit at C1RXF2.B23;
    sbit  SID3_C1RXF2_bit at C1RXF2.B24;
    sbit  SID4_C1RXF2_bit at C1RXF2.B25;
    sbit  SID5_C1RXF2_bit at C1RXF2.B26;
    sbit  SID6_C1RXF2_bit at C1RXF2.B27;
    sbit  SID7_C1RXF2_bit at C1RXF2.B28;
    sbit  SID8_C1RXF2_bit at C1RXF2.B29;
    sbit  SID9_C1RXF2_bit at C1RXF2.B30;
    sbit  SID10_C1RXF2_bit at C1RXF2.B31;
sfr unsigned long   volatile C1RXF2CLR        absolute 0xBF88B164;
sfr unsigned long   volatile C1RXF2SET        absolute 0xBF88B168;
sfr unsigned long   volatile C1RXF2INV        absolute 0xBF88B16C;
sfr atomic unsigned long   volatile C1RXF3           absolute 0xBF88B170;
    sbit  EID0_C1RXF3_bit at C1RXF3.B0;
    sbit  EID1_C1RXF3_bit at C1RXF3.B1;
    sbit  EID2_C1RXF3_bit at C1RXF3.B2;
    sbit  EID3_C1RXF3_bit at C1RXF3.B3;
    sbit  EID4_C1RXF3_bit at C1RXF3.B4;
    sbit  EID5_C1RXF3_bit at C1RXF3.B5;
    sbit  EID6_C1RXF3_bit at C1RXF3.B6;
    sbit  EID7_C1RXF3_bit at C1RXF3.B7;
    sbit  EID8_C1RXF3_bit at C1RXF3.B8;
    sbit  EID9_C1RXF3_bit at C1RXF3.B9;
    sbit  EID10_C1RXF3_bit at C1RXF3.B10;
    sbit  EID11_C1RXF3_bit at C1RXF3.B11;
    sbit  EID12_C1RXF3_bit at C1RXF3.B12;
    sbit  EID13_C1RXF3_bit at C1RXF3.B13;
    sbit  EID14_C1RXF3_bit at C1RXF3.B14;
    sbit  EID15_C1RXF3_bit at C1RXF3.B15;
    sbit  EID16_C1RXF3_bit at C1RXF3.B16;
    sbit  EID17_C1RXF3_bit at C1RXF3.B17;
    sbit  EXID_C1RXF3_bit at C1RXF3.B19;
    sbit  SID0_C1RXF3_bit at C1RXF3.B21;
    sbit  SID1_C1RXF3_bit at C1RXF3.B22;
    sbit  SID2_C1RXF3_bit at C1RXF3.B23;
    sbit  SID3_C1RXF3_bit at C1RXF3.B24;
    sbit  SID4_C1RXF3_bit at C1RXF3.B25;
    sbit  SID5_C1RXF3_bit at C1RXF3.B26;
    sbit  SID6_C1RXF3_bit at C1RXF3.B27;
    sbit  SID7_C1RXF3_bit at C1RXF3.B28;
    sbit  SID8_C1RXF3_bit at C1RXF3.B29;
    sbit  SID9_C1RXF3_bit at C1RXF3.B30;
    sbit  SID10_C1RXF3_bit at C1RXF3.B31;
sfr unsigned long   volatile C1RXF3CLR        absolute 0xBF88B174;
sfr unsigned long   volatile C1RXF3SET        absolute 0xBF88B178;
sfr unsigned long   volatile C1RXF3INV        absolute 0xBF88B17C;
sfr atomic unsigned long   volatile C1RXF4           absolute 0xBF88B180;
    sbit  EID0_C1RXF4_bit at C1RXF4.B0;
    sbit  EID1_C1RXF4_bit at C1RXF4.B1;
    sbit  EID2_C1RXF4_bit at C1RXF4.B2;
    sbit  EID3_C1RXF4_bit at C1RXF4.B3;
    sbit  EID4_C1RXF4_bit at C1RXF4.B4;
    sbit  EID5_C1RXF4_bit at C1RXF4.B5;
    sbit  EID6_C1RXF4_bit at C1RXF4.B6;
    sbit  EID7_C1RXF4_bit at C1RXF4.B7;
    sbit  EID8_C1RXF4_bit at C1RXF4.B8;
    sbit  EID9_C1RXF4_bit at C1RXF4.B9;
    sbit  EID10_C1RXF4_bit at C1RXF4.B10;
    sbit  EID11_C1RXF4_bit at C1RXF4.B11;
    sbit  EID12_C1RXF4_bit at C1RXF4.B12;
    sbit  EID13_C1RXF4_bit at C1RXF4.B13;
    sbit  EID14_C1RXF4_bit at C1RXF4.B14;
    sbit  EID15_C1RXF4_bit at C1RXF4.B15;
    sbit  EID16_C1RXF4_bit at C1RXF4.B16;
    sbit  EID17_C1RXF4_bit at C1RXF4.B17;
    sbit  EXID_C1RXF4_bit at C1RXF4.B19;
    sbit  SID0_C1RXF4_bit at C1RXF4.B21;
    sbit  SID1_C1RXF4_bit at C1RXF4.B22;
    sbit  SID2_C1RXF4_bit at C1RXF4.B23;
    sbit  SID3_C1RXF4_bit at C1RXF4.B24;
    sbit  SID4_C1RXF4_bit at C1RXF4.B25;
    sbit  SID5_C1RXF4_bit at C1RXF4.B26;
    sbit  SID6_C1RXF4_bit at C1RXF4.B27;
    sbit  SID7_C1RXF4_bit at C1RXF4.B28;
    sbit  SID8_C1RXF4_bit at C1RXF4.B29;
    sbit  SID9_C1RXF4_bit at C1RXF4.B30;
    sbit  SID10_C1RXF4_bit at C1RXF4.B31;
sfr unsigned long   volatile C1RXF4CLR        absolute 0xBF88B184;
sfr unsigned long   volatile C1RXF4SET        absolute 0xBF88B188;
sfr unsigned long   volatile C1RXF4INV        absolute 0xBF88B18C;
sfr atomic unsigned long   volatile C1RXF5           absolute 0xBF88B190;
    sbit  EID0_C1RXF5_bit at C1RXF5.B0;
    sbit  EID1_C1RXF5_bit at C1RXF5.B1;
    sbit  EID2_C1RXF5_bit at C1RXF5.B2;
    sbit  EID3_C1RXF5_bit at C1RXF5.B3;
    sbit  EID4_C1RXF5_bit at C1RXF5.B4;
    sbit  EID5_C1RXF5_bit at C1RXF5.B5;
    sbit  EID6_C1RXF5_bit at C1RXF5.B6;
    sbit  EID7_C1RXF5_bit at C1RXF5.B7;
    sbit  EID8_C1RXF5_bit at C1RXF5.B8;
    sbit  EID9_C1RXF5_bit at C1RXF5.B9;
    sbit  EID10_C1RXF5_bit at C1RXF5.B10;
    sbit  EID11_C1RXF5_bit at C1RXF5.B11;
    sbit  EID12_C1RXF5_bit at C1RXF5.B12;
    sbit  EID13_C1RXF5_bit at C1RXF5.B13;
    sbit  EID14_C1RXF5_bit at C1RXF5.B14;
    sbit  EID15_C1RXF5_bit at C1RXF5.B15;
    sbit  EID16_C1RXF5_bit at C1RXF5.B16;
    sbit  EID17_C1RXF5_bit at C1RXF5.B17;
    sbit  EXID_C1RXF5_bit at C1RXF5.B19;
    sbit  SID0_C1RXF5_bit at C1RXF5.B21;
    sbit  SID1_C1RXF5_bit at C1RXF5.B22;
    sbit  SID2_C1RXF5_bit at C1RXF5.B23;
    sbit  SID3_C1RXF5_bit at C1RXF5.B24;
    sbit  SID4_C1RXF5_bit at C1RXF5.B25;
    sbit  SID5_C1RXF5_bit at C1RXF5.B26;
    sbit  SID6_C1RXF5_bit at C1RXF5.B27;
    sbit  SID7_C1RXF5_bit at C1RXF5.B28;
    sbit  SID8_C1RXF5_bit at C1RXF5.B29;
    sbit  SID9_C1RXF5_bit at C1RXF5.B30;
    sbit  SID10_C1RXF5_bit at C1RXF5.B31;
sfr unsigned long   volatile C1RXF5CLR        absolute 0xBF88B194;
sfr unsigned long   volatile C1RXF5SET        absolute 0xBF88B198;
sfr unsigned long   volatile C1RXF5INV        absolute 0xBF88B19C;
sfr atomic unsigned long   volatile C1RXF6           absolute 0xBF88B1A0;
    sbit  EID0_C1RXF6_bit at C1RXF6.B0;
    sbit  EID1_C1RXF6_bit at C1RXF6.B1;
    sbit  EID2_C1RXF6_bit at C1RXF6.B2;
    sbit  EID3_C1RXF6_bit at C1RXF6.B3;
    sbit  EID4_C1RXF6_bit at C1RXF6.B4;
    sbit  EID5_C1RXF6_bit at C1RXF6.B5;
    sbit  EID6_C1RXF6_bit at C1RXF6.B6;
    sbit  EID7_C1RXF6_bit at C1RXF6.B7;
    sbit  EID8_C1RXF6_bit at C1RXF6.B8;
    sbit  EID9_C1RXF6_bit at C1RXF6.B9;
    sbit  EID10_C1RXF6_bit at C1RXF6.B10;
    sbit  EID11_C1RXF6_bit at C1RXF6.B11;
    sbit  EID12_C1RXF6_bit at C1RXF6.B12;
    sbit  EID13_C1RXF6_bit at C1RXF6.B13;
    sbit  EID14_C1RXF6_bit at C1RXF6.B14;
    sbit  EID15_C1RXF6_bit at C1RXF6.B15;
    sbit  EID16_C1RXF6_bit at C1RXF6.B16;
    sbit  EID17_C1RXF6_bit at C1RXF6.B17;
    sbit  EXID_C1RXF6_bit at C1RXF6.B19;
    sbit  SID0_C1RXF6_bit at C1RXF6.B21;
    sbit  SID1_C1RXF6_bit at C1RXF6.B22;
    sbit  SID2_C1RXF6_bit at C1RXF6.B23;
    sbit  SID3_C1RXF6_bit at C1RXF6.B24;
    sbit  SID4_C1RXF6_bit at C1RXF6.B25;
    sbit  SID5_C1RXF6_bit at C1RXF6.B26;
    sbit  SID6_C1RXF6_bit at C1RXF6.B27;
    sbit  SID7_C1RXF6_bit at C1RXF6.B28;
    sbit  SID8_C1RXF6_bit at C1RXF6.B29;
    sbit  SID9_C1RXF6_bit at C1RXF6.B30;
    sbit  SID10_C1RXF6_bit at C1RXF6.B31;
sfr unsigned long   volatile C1RXF6CLR        absolute 0xBF88B1A4;
sfr unsigned long   volatile C1RXF6SET        absolute 0xBF88B1A8;
sfr unsigned long   volatile C1RXF6INV        absolute 0xBF88B1AC;
sfr atomic unsigned long   volatile C1RXF7           absolute 0xBF88B1B0;
    sbit  EID0_C1RXF7_bit at C1RXF7.B0;
    sbit  EID1_C1RXF7_bit at C1RXF7.B1;
    sbit  EID2_C1RXF7_bit at C1RXF7.B2;
    sbit  EID3_C1RXF7_bit at C1RXF7.B3;
    sbit  EID4_C1RXF7_bit at C1RXF7.B4;
    sbit  EID5_C1RXF7_bit at C1RXF7.B5;
    sbit  EID6_C1RXF7_bit at C1RXF7.B6;
    sbit  EID7_C1RXF7_bit at C1RXF7.B7;
    sbit  EID8_C1RXF7_bit at C1RXF7.B8;
    sbit  EID9_C1RXF7_bit at C1RXF7.B9;
    sbit  EID10_C1RXF7_bit at C1RXF7.B10;
    sbit  EID11_C1RXF7_bit at C1RXF7.B11;
    sbit  EID12_C1RXF7_bit at C1RXF7.B12;
    sbit  EID13_C1RXF7_bit at C1RXF7.B13;
    sbit  EID14_C1RXF7_bit at C1RXF7.B14;
    sbit  EID15_C1RXF7_bit at C1RXF7.B15;
    sbit  EID16_C1RXF7_bit at C1RXF7.B16;
    sbit  EID17_C1RXF7_bit at C1RXF7.B17;
    sbit  EXID_C1RXF7_bit at C1RXF7.B19;
    sbit  SID0_C1RXF7_bit at C1RXF7.B21;
    sbit  SID1_C1RXF7_bit at C1RXF7.B22;
    sbit  SID2_C1RXF7_bit at C1RXF7.B23;
    sbit  SID3_C1RXF7_bit at C1RXF7.B24;
    sbit  SID4_C1RXF7_bit at C1RXF7.B25;
    sbit  SID5_C1RXF7_bit at C1RXF7.B26;
    sbit  SID6_C1RXF7_bit at C1RXF7.B27;
    sbit  SID7_C1RXF7_bit at C1RXF7.B28;
    sbit  SID8_C1RXF7_bit at C1RXF7.B29;
    sbit  SID9_C1RXF7_bit at C1RXF7.B30;
    sbit  SID10_C1RXF7_bit at C1RXF7.B31;
sfr unsigned long   volatile C1RXF7CLR        absolute 0xBF88B1B4;
sfr unsigned long   volatile C1RXF7SET        absolute 0xBF88B1B8;
sfr unsigned long   volatile C1RXF7INV        absolute 0xBF88B1BC;
sfr atomic unsigned long   volatile C1RXF8           absolute 0xBF88B1C0;
    sbit  EID0_C1RXF8_bit at C1RXF8.B0;
    sbit  EID1_C1RXF8_bit at C1RXF8.B1;
    sbit  EID2_C1RXF8_bit at C1RXF8.B2;
    sbit  EID3_C1RXF8_bit at C1RXF8.B3;
    sbit  EID4_C1RXF8_bit at C1RXF8.B4;
    sbit  EID5_C1RXF8_bit at C1RXF8.B5;
    sbit  EID6_C1RXF8_bit at C1RXF8.B6;
    sbit  EID7_C1RXF8_bit at C1RXF8.B7;
    sbit  EID8_C1RXF8_bit at C1RXF8.B8;
    sbit  EID9_C1RXF8_bit at C1RXF8.B9;
    sbit  EID10_C1RXF8_bit at C1RXF8.B10;
    sbit  EID11_C1RXF8_bit at C1RXF8.B11;
    sbit  EID12_C1RXF8_bit at C1RXF8.B12;
    sbit  EID13_C1RXF8_bit at C1RXF8.B13;
    sbit  EID14_C1RXF8_bit at C1RXF8.B14;
    sbit  EID15_C1RXF8_bit at C1RXF8.B15;
    sbit  EID16_C1RXF8_bit at C1RXF8.B16;
    sbit  EID17_C1RXF8_bit at C1RXF8.B17;
    sbit  EXID_C1RXF8_bit at C1RXF8.B19;
    sbit  SID0_C1RXF8_bit at C1RXF8.B21;
    sbit  SID1_C1RXF8_bit at C1RXF8.B22;
    sbit  SID2_C1RXF8_bit at C1RXF8.B23;
    sbit  SID3_C1RXF8_bit at C1RXF8.B24;
    sbit  SID4_C1RXF8_bit at C1RXF8.B25;
    sbit  SID5_C1RXF8_bit at C1RXF8.B26;
    sbit  SID6_C1RXF8_bit at C1RXF8.B27;
    sbit  SID7_C1RXF8_bit at C1RXF8.B28;
    sbit  SID8_C1RXF8_bit at C1RXF8.B29;
    sbit  SID9_C1RXF8_bit at C1RXF8.B30;
    sbit  SID10_C1RXF8_bit at C1RXF8.B31;
sfr unsigned long   volatile C1RXF8CLR        absolute 0xBF88B1C4;
sfr unsigned long   volatile C1RXF8SET        absolute 0xBF88B1C8;
sfr unsigned long   volatile C1RXF8INV        absolute 0xBF88B1CC;
sfr atomic unsigned long   volatile C1RXF9           absolute 0xBF88B1D0;
    sbit  EID0_C1RXF9_bit at C1RXF9.B0;
    sbit  EID1_C1RXF9_bit at C1RXF9.B1;
    sbit  EID2_C1RXF9_bit at C1RXF9.B2;
    sbit  EID3_C1RXF9_bit at C1RXF9.B3;
    sbit  EID4_C1RXF9_bit at C1RXF9.B4;
    sbit  EID5_C1RXF9_bit at C1RXF9.B5;
    sbit  EID6_C1RXF9_bit at C1RXF9.B6;
    sbit  EID7_C1RXF9_bit at C1RXF9.B7;
    sbit  EID8_C1RXF9_bit at C1RXF9.B8;
    sbit  EID9_C1RXF9_bit at C1RXF9.B9;
    sbit  EID10_C1RXF9_bit at C1RXF9.B10;
    sbit  EID11_C1RXF9_bit at C1RXF9.B11;
    sbit  EID12_C1RXF9_bit at C1RXF9.B12;
    sbit  EID13_C1RXF9_bit at C1RXF9.B13;
    sbit  EID14_C1RXF9_bit at C1RXF9.B14;
    sbit  EID15_C1RXF9_bit at C1RXF9.B15;
    sbit  EID16_C1RXF9_bit at C1RXF9.B16;
    sbit  EID17_C1RXF9_bit at C1RXF9.B17;
    sbit  EXID_C1RXF9_bit at C1RXF9.B19;
    sbit  SID0_C1RXF9_bit at C1RXF9.B21;
    sbit  SID1_C1RXF9_bit at C1RXF9.B22;
    sbit  SID2_C1RXF9_bit at C1RXF9.B23;
    sbit  SID3_C1RXF9_bit at C1RXF9.B24;
    sbit  SID4_C1RXF9_bit at C1RXF9.B25;
    sbit  SID5_C1RXF9_bit at C1RXF9.B26;
    sbit  SID6_C1RXF9_bit at C1RXF9.B27;
    sbit  SID7_C1RXF9_bit at C1RXF9.B28;
    sbit  SID8_C1RXF9_bit at C1RXF9.B29;
    sbit  SID9_C1RXF9_bit at C1RXF9.B30;
    sbit  SID10_C1RXF9_bit at C1RXF9.B31;
sfr unsigned long   volatile C1RXF9CLR        absolute 0xBF88B1D4;
sfr unsigned long   volatile C1RXF9SET        absolute 0xBF88B1D8;
sfr unsigned long   volatile C1RXF9INV        absolute 0xBF88B1DC;
sfr atomic unsigned long   volatile C1RXF10          absolute 0xBF88B1E0;
    sbit  EID0_C1RXF10_bit at C1RXF10.B0;
    sbit  EID1_C1RXF10_bit at C1RXF10.B1;
    sbit  EID2_C1RXF10_bit at C1RXF10.B2;
    sbit  EID3_C1RXF10_bit at C1RXF10.B3;
    sbit  EID4_C1RXF10_bit at C1RXF10.B4;
    sbit  EID5_C1RXF10_bit at C1RXF10.B5;
    sbit  EID6_C1RXF10_bit at C1RXF10.B6;
    sbit  EID7_C1RXF10_bit at C1RXF10.B7;
    sbit  EID8_C1RXF10_bit at C1RXF10.B8;
    sbit  EID9_C1RXF10_bit at C1RXF10.B9;
    sbit  EID10_C1RXF10_bit at C1RXF10.B10;
    sbit  EID11_C1RXF10_bit at C1RXF10.B11;
    sbit  EID12_C1RXF10_bit at C1RXF10.B12;
    sbit  EID13_C1RXF10_bit at C1RXF10.B13;
    sbit  EID14_C1RXF10_bit at C1RXF10.B14;
    sbit  EID15_C1RXF10_bit at C1RXF10.B15;
    sbit  EID16_C1RXF10_bit at C1RXF10.B16;
    sbit  EID17_C1RXF10_bit at C1RXF10.B17;
    sbit  EXID_C1RXF10_bit at C1RXF10.B19;
    sbit  SID0_C1RXF10_bit at C1RXF10.B21;
    sbit  SID1_C1RXF10_bit at C1RXF10.B22;
    sbit  SID2_C1RXF10_bit at C1RXF10.B23;
    sbit  SID3_C1RXF10_bit at C1RXF10.B24;
    sbit  SID4_C1RXF10_bit at C1RXF10.B25;
    sbit  SID5_C1RXF10_bit at C1RXF10.B26;
    sbit  SID6_C1RXF10_bit at C1RXF10.B27;
    sbit  SID7_C1RXF10_bit at C1RXF10.B28;
    sbit  SID8_C1RXF10_bit at C1RXF10.B29;
    sbit  SID9_C1RXF10_bit at C1RXF10.B30;
    sbit  SID10_C1RXF10_bit at C1RXF10.B31;
sfr unsigned long   volatile C1RXF10CLR       absolute 0xBF88B1E4;
sfr unsigned long   volatile C1RXF10SET       absolute 0xBF88B1E8;
sfr unsigned long   volatile C1RXF10INV       absolute 0xBF88B1EC;
sfr atomic unsigned long   volatile C1RXF11          absolute 0xBF88B1F0;
    sbit  EID0_C1RXF11_bit at C1RXF11.B0;
    sbit  EID1_C1RXF11_bit at C1RXF11.B1;
    sbit  EID2_C1RXF11_bit at C1RXF11.B2;
    sbit  EID3_C1RXF11_bit at C1RXF11.B3;
    sbit  EID4_C1RXF11_bit at C1RXF11.B4;
    sbit  EID5_C1RXF11_bit at C1RXF11.B5;
    sbit  EID6_C1RXF11_bit at C1RXF11.B6;
    sbit  EID7_C1RXF11_bit at C1RXF11.B7;
    sbit  EID8_C1RXF11_bit at C1RXF11.B8;
    sbit  EID9_C1RXF11_bit at C1RXF11.B9;
    sbit  EID10_C1RXF11_bit at C1RXF11.B10;
    sbit  EID11_C1RXF11_bit at C1RXF11.B11;
    sbit  EID12_C1RXF11_bit at C1RXF11.B12;
    sbit  EID13_C1RXF11_bit at C1RXF11.B13;
    sbit  EID14_C1RXF11_bit at C1RXF11.B14;
    sbit  EID15_C1RXF11_bit at C1RXF11.B15;
    sbit  EID16_C1RXF11_bit at C1RXF11.B16;
    sbit  EID17_C1RXF11_bit at C1RXF11.B17;
    sbit  EXID_C1RXF11_bit at C1RXF11.B19;
    sbit  SID0_C1RXF11_bit at C1RXF11.B21;
    sbit  SID1_C1RXF11_bit at C1RXF11.B22;
    sbit  SID2_C1RXF11_bit at C1RXF11.B23;
    sbit  SID3_C1RXF11_bit at C1RXF11.B24;
    sbit  SID4_C1RXF11_bit at C1RXF11.B25;
    sbit  SID5_C1RXF11_bit at C1RXF11.B26;
    sbit  SID6_C1RXF11_bit at C1RXF11.B27;
    sbit  SID7_C1RXF11_bit at C1RXF11.B28;
    sbit  SID8_C1RXF11_bit at C1RXF11.B29;
    sbit  SID9_C1RXF11_bit at C1RXF11.B30;
    sbit  SID10_C1RXF11_bit at C1RXF11.B31;
sfr unsigned long   volatile C1RXF11CLR       absolute 0xBF88B1F4;
sfr unsigned long   volatile C1RXF11SET       absolute 0xBF88B1F8;
sfr unsigned long   volatile C1RXF11INV       absolute 0xBF88B1FC;
sfr atomic unsigned long   volatile C1RXF12          absolute 0xBF88B200;
    sbit  EID0_C1RXF12_bit at C1RXF12.B0;
    sbit  EID1_C1RXF12_bit at C1RXF12.B1;
    sbit  EID2_C1RXF12_bit at C1RXF12.B2;
    sbit  EID3_C1RXF12_bit at C1RXF12.B3;
    sbit  EID4_C1RXF12_bit at C1RXF12.B4;
    sbit  EID5_C1RXF12_bit at C1RXF12.B5;
    sbit  EID6_C1RXF12_bit at C1RXF12.B6;
    sbit  EID7_C1RXF12_bit at C1RXF12.B7;
    sbit  EID8_C1RXF12_bit at C1RXF12.B8;
    sbit  EID9_C1RXF12_bit at C1RXF12.B9;
    sbit  EID10_C1RXF12_bit at C1RXF12.B10;
    sbit  EID11_C1RXF12_bit at C1RXF12.B11;
    sbit  EID12_C1RXF12_bit at C1RXF12.B12;
    sbit  EID13_C1RXF12_bit at C1RXF12.B13;
    sbit  EID14_C1RXF12_bit at C1RXF12.B14;
    sbit  EID15_C1RXF12_bit at C1RXF12.B15;
    sbit  EID16_C1RXF12_bit at C1RXF12.B16;
    sbit  EID17_C1RXF12_bit at C1RXF12.B17;
    sbit  EXID_C1RXF12_bit at C1RXF12.B19;
    sbit  SID0_C1RXF12_bit at C1RXF12.B21;
    sbit  SID1_C1RXF12_bit at C1RXF12.B22;
    sbit  SID2_C1RXF12_bit at C1RXF12.B23;
    sbit  SID3_C1RXF12_bit at C1RXF12.B24;
    sbit  SID4_C1RXF12_bit at C1RXF12.B25;
    sbit  SID5_C1RXF12_bit at C1RXF12.B26;
    sbit  SID6_C1RXF12_bit at C1RXF12.B27;
    sbit  SID7_C1RXF12_bit at C1RXF12.B28;
    sbit  SID8_C1RXF12_bit at C1RXF12.B29;
    sbit  SID9_C1RXF12_bit at C1RXF12.B30;
    sbit  SID10_C1RXF12_bit at C1RXF12.B31;
sfr unsigned long   volatile C1RXF12CLR       absolute 0xBF88B204;
sfr unsigned long   volatile C1RXF12SET       absolute 0xBF88B208;
sfr unsigned long   volatile C1RXF12INV       absolute 0xBF88B20C;
sfr atomic unsigned long   volatile C1RXF13          absolute 0xBF88B210;
    sbit  EID0_C1RXF13_bit at C1RXF13.B0;
    sbit  EID1_C1RXF13_bit at C1RXF13.B1;
    sbit  EID2_C1RXF13_bit at C1RXF13.B2;
    sbit  EID3_C1RXF13_bit at C1RXF13.B3;
    sbit  EID4_C1RXF13_bit at C1RXF13.B4;
    sbit  EID5_C1RXF13_bit at C1RXF13.B5;
    sbit  EID6_C1RXF13_bit at C1RXF13.B6;
    sbit  EID7_C1RXF13_bit at C1RXF13.B7;
    sbit  EID8_C1RXF13_bit at C1RXF13.B8;
    sbit  EID9_C1RXF13_bit at C1RXF13.B9;
    sbit  EID10_C1RXF13_bit at C1RXF13.B10;
    sbit  EID11_C1RXF13_bit at C1RXF13.B11;
    sbit  EID12_C1RXF13_bit at C1RXF13.B12;
    sbit  EID13_C1RXF13_bit at C1RXF13.B13;
    sbit  EID14_C1RXF13_bit at C1RXF13.B14;
    sbit  EID15_C1RXF13_bit at C1RXF13.B15;
    sbit  EID16_C1RXF13_bit at C1RXF13.B16;
    sbit  EID17_C1RXF13_bit at C1RXF13.B17;
    sbit  EXID_C1RXF13_bit at C1RXF13.B19;
    sbit  SID0_C1RXF13_bit at C1RXF13.B21;
    sbit  SID1_C1RXF13_bit at C1RXF13.B22;
    sbit  SID2_C1RXF13_bit at C1RXF13.B23;
    sbit  SID3_C1RXF13_bit at C1RXF13.B24;
    sbit  SID4_C1RXF13_bit at C1RXF13.B25;
    sbit  SID5_C1RXF13_bit at C1RXF13.B26;
    sbit  SID6_C1RXF13_bit at C1RXF13.B27;
    sbit  SID7_C1RXF13_bit at C1RXF13.B28;
    sbit  SID8_C1RXF13_bit at C1RXF13.B29;
    sbit  SID9_C1RXF13_bit at C1RXF13.B30;
    sbit  SID10_C1RXF13_bit at C1RXF13.B31;
sfr unsigned long   volatile C1RXF13CLR       absolute 0xBF88B214;
sfr unsigned long   volatile C1RXF13SET       absolute 0xBF88B218;
sfr unsigned long   volatile C1RXF13INV       absolute 0xBF88B21C;
sfr atomic unsigned long   volatile C1RXF14          absolute 0xBF88B220;
    sbit  EID0_C1RXF14_bit at C1RXF14.B0;
    sbit  EID1_C1RXF14_bit at C1RXF14.B1;
    sbit  EID2_C1RXF14_bit at C1RXF14.B2;
    sbit  EID3_C1RXF14_bit at C1RXF14.B3;
    sbit  EID4_C1RXF14_bit at C1RXF14.B4;
    sbit  EID5_C1RXF14_bit at C1RXF14.B5;
    sbit  EID6_C1RXF14_bit at C1RXF14.B6;
    sbit  EID7_C1RXF14_bit at C1RXF14.B7;
    sbit  EID8_C1RXF14_bit at C1RXF14.B8;
    sbit  EID9_C1RXF14_bit at C1RXF14.B9;
    sbit  EID10_C1RXF14_bit at C1RXF14.B10;
    sbit  EID11_C1RXF14_bit at C1RXF14.B11;
    sbit  EID12_C1RXF14_bit at C1RXF14.B12;
    sbit  EID13_C1RXF14_bit at C1RXF14.B13;
    sbit  EID14_C1RXF14_bit at C1RXF14.B14;
    sbit  EID15_C1RXF14_bit at C1RXF14.B15;
    sbit  EID16_C1RXF14_bit at C1RXF14.B16;
    sbit  EID17_C1RXF14_bit at C1RXF14.B17;
    sbit  EXID_C1RXF14_bit at C1RXF14.B19;
    sbit  SID0_C1RXF14_bit at C1RXF14.B21;
    sbit  SID1_C1RXF14_bit at C1RXF14.B22;
    sbit  SID2_C1RXF14_bit at C1RXF14.B23;
    sbit  SID3_C1RXF14_bit at C1RXF14.B24;
    sbit  SID4_C1RXF14_bit at C1RXF14.B25;
    sbit  SID5_C1RXF14_bit at C1RXF14.B26;
    sbit  SID6_C1RXF14_bit at C1RXF14.B27;
    sbit  SID7_C1RXF14_bit at C1RXF14.B28;
    sbit  SID8_C1RXF14_bit at C1RXF14.B29;
    sbit  SID9_C1RXF14_bit at C1RXF14.B30;
    sbit  SID10_C1RXF14_bit at C1RXF14.B31;
sfr unsigned long   volatile C1RXF14CLR       absolute 0xBF88B224;
sfr unsigned long   volatile C1RXF14SET       absolute 0xBF88B228;
sfr unsigned long   volatile C1RXF14INV       absolute 0xBF88B22C;
sfr atomic unsigned long   volatile C1RXF15          absolute 0xBF88B230;
    sbit  EID0_C1RXF15_bit at C1RXF15.B0;
    sbit  EID1_C1RXF15_bit at C1RXF15.B1;
    sbit  EID2_C1RXF15_bit at C1RXF15.B2;
    sbit  EID3_C1RXF15_bit at C1RXF15.B3;
    sbit  EID4_C1RXF15_bit at C1RXF15.B4;
    sbit  EID5_C1RXF15_bit at C1RXF15.B5;
    sbit  EID6_C1RXF15_bit at C1RXF15.B6;
    sbit  EID7_C1RXF15_bit at C1RXF15.B7;
    sbit  EID8_C1RXF15_bit at C1RXF15.B8;
    sbit  EID9_C1RXF15_bit at C1RXF15.B9;
    sbit  EID10_C1RXF15_bit at C1RXF15.B10;
    sbit  EID11_C1RXF15_bit at C1RXF15.B11;
    sbit  EID12_C1RXF15_bit at C1RXF15.B12;
    sbit  EID13_C1RXF15_bit at C1RXF15.B13;
    sbit  EID14_C1RXF15_bit at C1RXF15.B14;
    sbit  EID15_C1RXF15_bit at C1RXF15.B15;
    sbit  EID16_C1RXF15_bit at C1RXF15.B16;
    sbit  EID17_C1RXF15_bit at C1RXF15.B17;
    sbit  EXID_C1RXF15_bit at C1RXF15.B19;
    sbit  SID0_C1RXF15_bit at C1RXF15.B21;
    sbit  SID1_C1RXF15_bit at C1RXF15.B22;
    sbit  SID2_C1RXF15_bit at C1RXF15.B23;
    sbit  SID3_C1RXF15_bit at C1RXF15.B24;
    sbit  SID4_C1RXF15_bit at C1RXF15.B25;
    sbit  SID5_C1RXF15_bit at C1RXF15.B26;
    sbit  SID6_C1RXF15_bit at C1RXF15.B27;
    sbit  SID7_C1RXF15_bit at C1RXF15.B28;
    sbit  SID8_C1RXF15_bit at C1RXF15.B29;
    sbit  SID9_C1RXF15_bit at C1RXF15.B30;
    sbit  SID10_C1RXF15_bit at C1RXF15.B31;
sfr unsigned long   volatile C1RXF15CLR       absolute 0xBF88B234;
sfr unsigned long   volatile C1RXF15SET       absolute 0xBF88B238;
sfr unsigned long   volatile C1RXF15INV       absolute 0xBF88B23C;
sfr atomic unsigned long   volatile C1RXF16          absolute 0xBF88B240;
    sbit  EID0_C1RXF16_bit at C1RXF16.B0;
    sbit  EID1_C1RXF16_bit at C1RXF16.B1;
    sbit  EID2_C1RXF16_bit at C1RXF16.B2;
    sbit  EID3_C1RXF16_bit at C1RXF16.B3;
    sbit  EID4_C1RXF16_bit at C1RXF16.B4;
    sbit  EID5_C1RXF16_bit at C1RXF16.B5;
    sbit  EID6_C1RXF16_bit at C1RXF16.B6;
    sbit  EID7_C1RXF16_bit at C1RXF16.B7;
    sbit  EID8_C1RXF16_bit at C1RXF16.B8;
    sbit  EID9_C1RXF16_bit at C1RXF16.B9;
    sbit  EID10_C1RXF16_bit at C1RXF16.B10;
    sbit  EID11_C1RXF16_bit at C1RXF16.B11;
    sbit  EID12_C1RXF16_bit at C1RXF16.B12;
    sbit  EID13_C1RXF16_bit at C1RXF16.B13;
    sbit  EID14_C1RXF16_bit at C1RXF16.B14;
    sbit  EID15_C1RXF16_bit at C1RXF16.B15;
    sbit  EID16_C1RXF16_bit at C1RXF16.B16;
    sbit  EID17_C1RXF16_bit at C1RXF16.B17;
    sbit  EXID_C1RXF16_bit at C1RXF16.B19;
    sbit  SID0_C1RXF16_bit at C1RXF16.B21;
    sbit  SID1_C1RXF16_bit at C1RXF16.B22;
    sbit  SID2_C1RXF16_bit at C1RXF16.B23;
    sbit  SID3_C1RXF16_bit at C1RXF16.B24;
    sbit  SID4_C1RXF16_bit at C1RXF16.B25;
    sbit  SID5_C1RXF16_bit at C1RXF16.B26;
    sbit  SID6_C1RXF16_bit at C1RXF16.B27;
    sbit  SID7_C1RXF16_bit at C1RXF16.B28;
    sbit  SID8_C1RXF16_bit at C1RXF16.B29;
    sbit  SID9_C1RXF16_bit at C1RXF16.B30;
    sbit  SID10_C1RXF16_bit at C1RXF16.B31;
sfr unsigned long   volatile C1RXF16CLR       absolute 0xBF88B244;
sfr unsigned long   volatile C1RXF16SET       absolute 0xBF88B248;
sfr unsigned long   volatile C1RXF16INV       absolute 0xBF88B24C;
sfr atomic unsigned long   volatile C1RXF17          absolute 0xBF88B250;
    sbit  EID0_C1RXF17_bit at C1RXF17.B0;
    sbit  EID1_C1RXF17_bit at C1RXF17.B1;
    sbit  EID2_C1RXF17_bit at C1RXF17.B2;
    sbit  EID3_C1RXF17_bit at C1RXF17.B3;
    sbit  EID4_C1RXF17_bit at C1RXF17.B4;
    sbit  EID5_C1RXF17_bit at C1RXF17.B5;
    sbit  EID6_C1RXF17_bit at C1RXF17.B6;
    sbit  EID7_C1RXF17_bit at C1RXF17.B7;
    sbit  EID8_C1RXF17_bit at C1RXF17.B8;
    sbit  EID9_C1RXF17_bit at C1RXF17.B9;
    sbit  EID10_C1RXF17_bit at C1RXF17.B10;
    sbit  EID11_C1RXF17_bit at C1RXF17.B11;
    sbit  EID12_C1RXF17_bit at C1RXF17.B12;
    sbit  EID13_C1RXF17_bit at C1RXF17.B13;
    sbit  EID14_C1RXF17_bit at C1RXF17.B14;
    sbit  EID15_C1RXF17_bit at C1RXF17.B15;
    sbit  EID16_C1RXF17_bit at C1RXF17.B16;
    sbit  EID17_C1RXF17_bit at C1RXF17.B17;
    sbit  EXID_C1RXF17_bit at C1RXF17.B19;
    sbit  SID0_C1RXF17_bit at C1RXF17.B21;
    sbit  SID1_C1RXF17_bit at C1RXF17.B22;
    sbit  SID2_C1RXF17_bit at C1RXF17.B23;
    sbit  SID3_C1RXF17_bit at C1RXF17.B24;
    sbit  SID4_C1RXF17_bit at C1RXF17.B25;
    sbit  SID5_C1RXF17_bit at C1RXF17.B26;
    sbit  SID6_C1RXF17_bit at C1RXF17.B27;
    sbit  SID7_C1RXF17_bit at C1RXF17.B28;
    sbit  SID8_C1RXF17_bit at C1RXF17.B29;
    sbit  SID9_C1RXF17_bit at C1RXF17.B30;
    sbit  SID10_C1RXF17_bit at C1RXF17.B31;
sfr unsigned long   volatile C1RXF17CLR       absolute 0xBF88B254;
sfr unsigned long   volatile C1RXF17SET       absolute 0xBF88B258;
sfr unsigned long   volatile C1RXF17INV       absolute 0xBF88B25C;
sfr atomic unsigned long   volatile C1RXF18          absolute 0xBF88B260;
    sbit  EID0_C1RXF18_bit at C1RXF18.B0;
    sbit  EID1_C1RXF18_bit at C1RXF18.B1;
    sbit  EID2_C1RXF18_bit at C1RXF18.B2;
    sbit  EID3_C1RXF18_bit at C1RXF18.B3;
    sbit  EID4_C1RXF18_bit at C1RXF18.B4;
    sbit  EID5_C1RXF18_bit at C1RXF18.B5;
    sbit  EID6_C1RXF18_bit at C1RXF18.B6;
    sbit  EID7_C1RXF18_bit at C1RXF18.B7;
    sbit  EID8_C1RXF18_bit at C1RXF18.B8;
    sbit  EID9_C1RXF18_bit at C1RXF18.B9;
    sbit  EID10_C1RXF18_bit at C1RXF18.B10;
    sbit  EID11_C1RXF18_bit at C1RXF18.B11;
    sbit  EID12_C1RXF18_bit at C1RXF18.B12;
    sbit  EID13_C1RXF18_bit at C1RXF18.B13;
    sbit  EID14_C1RXF18_bit at C1RXF18.B14;
    sbit  EID15_C1RXF18_bit at C1RXF18.B15;
    sbit  EID16_C1RXF18_bit at C1RXF18.B16;
    sbit  EID17_C1RXF18_bit at C1RXF18.B17;
    sbit  EXID_C1RXF18_bit at C1RXF18.B19;
    sbit  SID0_C1RXF18_bit at C1RXF18.B21;
    sbit  SID1_C1RXF18_bit at C1RXF18.B22;
    sbit  SID2_C1RXF18_bit at C1RXF18.B23;
    sbit  SID3_C1RXF18_bit at C1RXF18.B24;
    sbit  SID4_C1RXF18_bit at C1RXF18.B25;
    sbit  SID5_C1RXF18_bit at C1RXF18.B26;
    sbit  SID6_C1RXF18_bit at C1RXF18.B27;
    sbit  SID7_C1RXF18_bit at C1RXF18.B28;
    sbit  SID8_C1RXF18_bit at C1RXF18.B29;
    sbit  SID9_C1RXF18_bit at C1RXF18.B30;
    sbit  SID10_C1RXF18_bit at C1RXF18.B31;
sfr unsigned long   volatile C1RXF18CLR       absolute 0xBF88B264;
sfr unsigned long   volatile C1RXF18SET       absolute 0xBF88B268;
sfr unsigned long   volatile C1RXF18INV       absolute 0xBF88B26C;
sfr atomic unsigned long   volatile C1RXF19          absolute 0xBF88B270;
    sbit  EID0_C1RXF19_bit at C1RXF19.B0;
    sbit  EID1_C1RXF19_bit at C1RXF19.B1;
    sbit  EID2_C1RXF19_bit at C1RXF19.B2;
    sbit  EID3_C1RXF19_bit at C1RXF19.B3;
    sbit  EID4_C1RXF19_bit at C1RXF19.B4;
    sbit  EID5_C1RXF19_bit at C1RXF19.B5;
    sbit  EID6_C1RXF19_bit at C1RXF19.B6;
    sbit  EID7_C1RXF19_bit at C1RXF19.B7;
    sbit  EID8_C1RXF19_bit at C1RXF19.B8;
    sbit  EID9_C1RXF19_bit at C1RXF19.B9;
    sbit  EID10_C1RXF19_bit at C1RXF19.B10;
    sbit  EID11_C1RXF19_bit at C1RXF19.B11;
    sbit  EID12_C1RXF19_bit at C1RXF19.B12;
    sbit  EID13_C1RXF19_bit at C1RXF19.B13;
    sbit  EID14_C1RXF19_bit at C1RXF19.B14;
    sbit  EID15_C1RXF19_bit at C1RXF19.B15;
    sbit  EID16_C1RXF19_bit at C1RXF19.B16;
    sbit  EID17_C1RXF19_bit at C1RXF19.B17;
    sbit  EXID_C1RXF19_bit at C1RXF19.B19;
    sbit  SID0_C1RXF19_bit at C1RXF19.B21;
    sbit  SID1_C1RXF19_bit at C1RXF19.B22;
    sbit  SID2_C1RXF19_bit at C1RXF19.B23;
    sbit  SID3_C1RXF19_bit at C1RXF19.B24;
    sbit  SID4_C1RXF19_bit at C1RXF19.B25;
    sbit  SID5_C1RXF19_bit at C1RXF19.B26;
    sbit  SID6_C1RXF19_bit at C1RXF19.B27;
    sbit  SID7_C1RXF19_bit at C1RXF19.B28;
    sbit  SID8_C1RXF19_bit at C1RXF19.B29;
    sbit  SID9_C1RXF19_bit at C1RXF19.B30;
    sbit  SID10_C1RXF19_bit at C1RXF19.B31;
sfr unsigned long   volatile C1RXF19CLR       absolute 0xBF88B274;
sfr unsigned long   volatile C1RXF19SET       absolute 0xBF88B278;
sfr unsigned long   volatile C1RXF19INV       absolute 0xBF88B27C;
sfr atomic unsigned long   volatile C1RXF20          absolute 0xBF88B280;
    sbit  EID0_C1RXF20_bit at C1RXF20.B0;
    sbit  EID1_C1RXF20_bit at C1RXF20.B1;
    sbit  EID2_C1RXF20_bit at C1RXF20.B2;
    sbit  EID3_C1RXF20_bit at C1RXF20.B3;
    sbit  EID4_C1RXF20_bit at C1RXF20.B4;
    sbit  EID5_C1RXF20_bit at C1RXF20.B5;
    sbit  EID6_C1RXF20_bit at C1RXF20.B6;
    sbit  EID7_C1RXF20_bit at C1RXF20.B7;
    sbit  EID8_C1RXF20_bit at C1RXF20.B8;
    sbit  EID9_C1RXF20_bit at C1RXF20.B9;
    sbit  EID10_C1RXF20_bit at C1RXF20.B10;
    sbit  EID11_C1RXF20_bit at C1RXF20.B11;
    sbit  EID12_C1RXF20_bit at C1RXF20.B12;
    sbit  EID13_C1RXF20_bit at C1RXF20.B13;
    sbit  EID14_C1RXF20_bit at C1RXF20.B14;
    sbit  EID15_C1RXF20_bit at C1RXF20.B15;
    sbit  EID16_C1RXF20_bit at C1RXF20.B16;
    sbit  EID17_C1RXF20_bit at C1RXF20.B17;
    sbit  EXID_C1RXF20_bit at C1RXF20.B19;
    sbit  SID0_C1RXF20_bit at C1RXF20.B21;
    sbit  SID1_C1RXF20_bit at C1RXF20.B22;
    sbit  SID2_C1RXF20_bit at C1RXF20.B23;
    sbit  SID3_C1RXF20_bit at C1RXF20.B24;
    sbit  SID4_C1RXF20_bit at C1RXF20.B25;
    sbit  SID5_C1RXF20_bit at C1RXF20.B26;
    sbit  SID6_C1RXF20_bit at C1RXF20.B27;
    sbit  SID7_C1RXF20_bit at C1RXF20.B28;
    sbit  SID8_C1RXF20_bit at C1RXF20.B29;
    sbit  SID9_C1RXF20_bit at C1RXF20.B30;
    sbit  SID10_C1RXF20_bit at C1RXF20.B31;
sfr unsigned long   volatile C1RXF20CLR       absolute 0xBF88B284;
sfr unsigned long   volatile C1RXF20SET       absolute 0xBF88B288;
sfr unsigned long   volatile C1RXF20INV       absolute 0xBF88B28C;
sfr atomic unsigned long   volatile C1RXF21          absolute 0xBF88B290;
    sbit  EID0_C1RXF21_bit at C1RXF21.B0;
    sbit  EID1_C1RXF21_bit at C1RXF21.B1;
    sbit  EID2_C1RXF21_bit at C1RXF21.B2;
    sbit  EID3_C1RXF21_bit at C1RXF21.B3;
    sbit  EID4_C1RXF21_bit at C1RXF21.B4;
    sbit  EID5_C1RXF21_bit at C1RXF21.B5;
    sbit  EID6_C1RXF21_bit at C1RXF21.B6;
    sbit  EID7_C1RXF21_bit at C1RXF21.B7;
    sbit  EID8_C1RXF21_bit at C1RXF21.B8;
    sbit  EID9_C1RXF21_bit at C1RXF21.B9;
    sbit  EID10_C1RXF21_bit at C1RXF21.B10;
    sbit  EID11_C1RXF21_bit at C1RXF21.B11;
    sbit  EID12_C1RXF21_bit at C1RXF21.B12;
    sbit  EID13_C1RXF21_bit at C1RXF21.B13;
    sbit  EID14_C1RXF21_bit at C1RXF21.B14;
    sbit  EID15_C1RXF21_bit at C1RXF21.B15;
    sbit  EID16_C1RXF21_bit at C1RXF21.B16;
    sbit  EID17_C1RXF21_bit at C1RXF21.B17;
    sbit  EXID_C1RXF21_bit at C1RXF21.B19;
    sbit  SID0_C1RXF21_bit at C1RXF21.B21;
    sbit  SID1_C1RXF21_bit at C1RXF21.B22;
    sbit  SID2_C1RXF21_bit at C1RXF21.B23;
    sbit  SID3_C1RXF21_bit at C1RXF21.B24;
    sbit  SID4_C1RXF21_bit at C1RXF21.B25;
    sbit  SID5_C1RXF21_bit at C1RXF21.B26;
    sbit  SID6_C1RXF21_bit at C1RXF21.B27;
    sbit  SID7_C1RXF21_bit at C1RXF21.B28;
    sbit  SID8_C1RXF21_bit at C1RXF21.B29;
    sbit  SID9_C1RXF21_bit at C1RXF21.B30;
    sbit  SID10_C1RXF21_bit at C1RXF21.B31;
sfr unsigned long   volatile C1RXF21CLR       absolute 0xBF88B294;
sfr unsigned long   volatile C1RXF21SET       absolute 0xBF88B298;
sfr unsigned long   volatile C1RXF21INV       absolute 0xBF88B29C;
sfr atomic unsigned long   volatile C1RXF22          absolute 0xBF88B2A0;
    sbit  EID0_C1RXF22_bit at C1RXF22.B0;
    sbit  EID1_C1RXF22_bit at C1RXF22.B1;
    sbit  EID2_C1RXF22_bit at C1RXF22.B2;
    sbit  EID3_C1RXF22_bit at C1RXF22.B3;
    sbit  EID4_C1RXF22_bit at C1RXF22.B4;
    sbit  EID5_C1RXF22_bit at C1RXF22.B5;
    sbit  EID6_C1RXF22_bit at C1RXF22.B6;
    sbit  EID7_C1RXF22_bit at C1RXF22.B7;
    sbit  EID8_C1RXF22_bit at C1RXF22.B8;
    sbit  EID9_C1RXF22_bit at C1RXF22.B9;
    sbit  EID10_C1RXF22_bit at C1RXF22.B10;
    sbit  EID11_C1RXF22_bit at C1RXF22.B11;
    sbit  EID12_C1RXF22_bit at C1RXF22.B12;
    sbit  EID13_C1RXF22_bit at C1RXF22.B13;
    sbit  EID14_C1RXF22_bit at C1RXF22.B14;
    sbit  EID15_C1RXF22_bit at C1RXF22.B15;
    sbit  EID16_C1RXF22_bit at C1RXF22.B16;
    sbit  EID17_C1RXF22_bit at C1RXF22.B17;
    sbit  EXID_C1RXF22_bit at C1RXF22.B19;
    sbit  SID0_C1RXF22_bit at C1RXF22.B21;
    sbit  SID1_C1RXF22_bit at C1RXF22.B22;
    sbit  SID2_C1RXF22_bit at C1RXF22.B23;
    sbit  SID3_C1RXF22_bit at C1RXF22.B24;
    sbit  SID4_C1RXF22_bit at C1RXF22.B25;
    sbit  SID5_C1RXF22_bit at C1RXF22.B26;
    sbit  SID6_C1RXF22_bit at C1RXF22.B27;
    sbit  SID7_C1RXF22_bit at C1RXF22.B28;
    sbit  SID8_C1RXF22_bit at C1RXF22.B29;
    sbit  SID9_C1RXF22_bit at C1RXF22.B30;
    sbit  SID10_C1RXF22_bit at C1RXF22.B31;
sfr unsigned long   volatile C1RXF22CLR       absolute 0xBF88B2A4;
sfr unsigned long   volatile C1RXF22SET       absolute 0xBF88B2A8;
sfr unsigned long   volatile C1RXF22INV       absolute 0xBF88B2AC;
sfr atomic unsigned long   volatile C1RXF23          absolute 0xBF88B2B0;
    sbit  EID0_C1RXF23_bit at C1RXF23.B0;
    sbit  EID1_C1RXF23_bit at C1RXF23.B1;
    sbit  EID2_C1RXF23_bit at C1RXF23.B2;
    sbit  EID3_C1RXF23_bit at C1RXF23.B3;
    sbit  EID4_C1RXF23_bit at C1RXF23.B4;
    sbit  EID5_C1RXF23_bit at C1RXF23.B5;
    sbit  EID6_C1RXF23_bit at C1RXF23.B6;
    sbit  EID7_C1RXF23_bit at C1RXF23.B7;
    sbit  EID8_C1RXF23_bit at C1RXF23.B8;
    sbit  EID9_C1RXF23_bit at C1RXF23.B9;
    sbit  EID10_C1RXF23_bit at C1RXF23.B10;
    sbit  EID11_C1RXF23_bit at C1RXF23.B11;
    sbit  EID12_C1RXF23_bit at C1RXF23.B12;
    sbit  EID13_C1RXF23_bit at C1RXF23.B13;
    sbit  EID14_C1RXF23_bit at C1RXF23.B14;
    sbit  EID15_C1RXF23_bit at C1RXF23.B15;
    sbit  EID16_C1RXF23_bit at C1RXF23.B16;
    sbit  EID17_C1RXF23_bit at C1RXF23.B17;
    sbit  EXID_C1RXF23_bit at C1RXF23.B19;
    sbit  SID0_C1RXF23_bit at C1RXF23.B21;
    sbit  SID1_C1RXF23_bit at C1RXF23.B22;
    sbit  SID2_C1RXF23_bit at C1RXF23.B23;
    sbit  SID3_C1RXF23_bit at C1RXF23.B24;
    sbit  SID4_C1RXF23_bit at C1RXF23.B25;
    sbit  SID5_C1RXF23_bit at C1RXF23.B26;
    sbit  SID6_C1RXF23_bit at C1RXF23.B27;
    sbit  SID7_C1RXF23_bit at C1RXF23.B28;
    sbit  SID8_C1RXF23_bit at C1RXF23.B29;
    sbit  SID9_C1RXF23_bit at C1RXF23.B30;
    sbit  SID10_C1RXF23_bit at C1RXF23.B31;
sfr unsigned long   volatile C1RXF23CLR       absolute 0xBF88B2B4;
sfr unsigned long   volatile C1RXF23SET       absolute 0xBF88B2B8;
sfr unsigned long   volatile C1RXF23INV       absolute 0xBF88B2BC;
sfr atomic unsigned long   volatile C1RXF24          absolute 0xBF88B2C0;
    sbit  EID0_C1RXF24_bit at C1RXF24.B0;
    sbit  EID1_C1RXF24_bit at C1RXF24.B1;
    sbit  EID2_C1RXF24_bit at C1RXF24.B2;
    sbit  EID3_C1RXF24_bit at C1RXF24.B3;
    sbit  EID4_C1RXF24_bit at C1RXF24.B4;
    sbit  EID5_C1RXF24_bit at C1RXF24.B5;
    sbit  EID6_C1RXF24_bit at C1RXF24.B6;
    sbit  EID7_C1RXF24_bit at C1RXF24.B7;
    sbit  EID8_C1RXF24_bit at C1RXF24.B8;
    sbit  EID9_C1RXF24_bit at C1RXF24.B9;
    sbit  EID10_C1RXF24_bit at C1RXF24.B10;
    sbit  EID11_C1RXF24_bit at C1RXF24.B11;
    sbit  EID12_C1RXF24_bit at C1RXF24.B12;
    sbit  EID13_C1RXF24_bit at C1RXF24.B13;
    sbit  EID14_C1RXF24_bit at C1RXF24.B14;
    sbit  EID15_C1RXF24_bit at C1RXF24.B15;
    sbit  EID16_C1RXF24_bit at C1RXF24.B16;
    sbit  EID17_C1RXF24_bit at C1RXF24.B17;
    sbit  EXID_C1RXF24_bit at C1RXF24.B19;
    sbit  SID0_C1RXF24_bit at C1RXF24.B21;
    sbit  SID1_C1RXF24_bit at C1RXF24.B22;
    sbit  SID2_C1RXF24_bit at C1RXF24.B23;
    sbit  SID3_C1RXF24_bit at C1RXF24.B24;
    sbit  SID4_C1RXF24_bit at C1RXF24.B25;
    sbit  SID5_C1RXF24_bit at C1RXF24.B26;
    sbit  SID6_C1RXF24_bit at C1RXF24.B27;
    sbit  SID7_C1RXF24_bit at C1RXF24.B28;
    sbit  SID8_C1RXF24_bit at C1RXF24.B29;
    sbit  SID9_C1RXF24_bit at C1RXF24.B30;
    sbit  SID10_C1RXF24_bit at C1RXF24.B31;
sfr unsigned long   volatile C1RXF24CLR       absolute 0xBF88B2C4;
sfr unsigned long   volatile C1RXF24SET       absolute 0xBF88B2C8;
sfr unsigned long   volatile C1RXF24INV       absolute 0xBF88B2CC;
sfr atomic unsigned long   volatile C1RXF25          absolute 0xBF88B2D0;
    sbit  EID0_C1RXF25_bit at C1RXF25.B0;
    sbit  EID1_C1RXF25_bit at C1RXF25.B1;
    sbit  EID2_C1RXF25_bit at C1RXF25.B2;
    sbit  EID3_C1RXF25_bit at C1RXF25.B3;
    sbit  EID4_C1RXF25_bit at C1RXF25.B4;
    sbit  EID5_C1RXF25_bit at C1RXF25.B5;
    sbit  EID6_C1RXF25_bit at C1RXF25.B6;
    sbit  EID7_C1RXF25_bit at C1RXF25.B7;
    sbit  EID8_C1RXF25_bit at C1RXF25.B8;
    sbit  EID9_C1RXF25_bit at C1RXF25.B9;
    sbit  EID10_C1RXF25_bit at C1RXF25.B10;
    sbit  EID11_C1RXF25_bit at C1RXF25.B11;
    sbit  EID12_C1RXF25_bit at C1RXF25.B12;
    sbit  EID13_C1RXF25_bit at C1RXF25.B13;
    sbit  EID14_C1RXF25_bit at C1RXF25.B14;
    sbit  EID15_C1RXF25_bit at C1RXF25.B15;
    sbit  EID16_C1RXF25_bit at C1RXF25.B16;
    sbit  EID17_C1RXF25_bit at C1RXF25.B17;
    sbit  EXID_C1RXF25_bit at C1RXF25.B19;
    sbit  SID0_C1RXF25_bit at C1RXF25.B21;
    sbit  SID1_C1RXF25_bit at C1RXF25.B22;
    sbit  SID2_C1RXF25_bit at C1RXF25.B23;
    sbit  SID3_C1RXF25_bit at C1RXF25.B24;
    sbit  SID4_C1RXF25_bit at C1RXF25.B25;
    sbit  SID5_C1RXF25_bit at C1RXF25.B26;
    sbit  SID6_C1RXF25_bit at C1RXF25.B27;
    sbit  SID7_C1RXF25_bit at C1RXF25.B28;
    sbit  SID8_C1RXF25_bit at C1RXF25.B29;
    sbit  SID9_C1RXF25_bit at C1RXF25.B30;
    sbit  SID10_C1RXF25_bit at C1RXF25.B31;
sfr unsigned long   volatile C1RXF25CLR       absolute 0xBF88B2D4;
sfr unsigned long   volatile C1RXF25SET       absolute 0xBF88B2D8;
sfr unsigned long   volatile C1RXF25INV       absolute 0xBF88B2DC;
sfr atomic unsigned long   volatile C1RXF26          absolute 0xBF88B2E0;
    sbit  EID0_C1RXF26_bit at C1RXF26.B0;
    sbit  EID1_C1RXF26_bit at C1RXF26.B1;
    sbit  EID2_C1RXF26_bit at C1RXF26.B2;
    sbit  EID3_C1RXF26_bit at C1RXF26.B3;
    sbit  EID4_C1RXF26_bit at C1RXF26.B4;
    sbit  EID5_C1RXF26_bit at C1RXF26.B5;
    sbit  EID6_C1RXF26_bit at C1RXF26.B6;
    sbit  EID7_C1RXF26_bit at C1RXF26.B7;
    sbit  EID8_C1RXF26_bit at C1RXF26.B8;
    sbit  EID9_C1RXF26_bit at C1RXF26.B9;
    sbit  EID10_C1RXF26_bit at C1RXF26.B10;
    sbit  EID11_C1RXF26_bit at C1RXF26.B11;
    sbit  EID12_C1RXF26_bit at C1RXF26.B12;
    sbit  EID13_C1RXF26_bit at C1RXF26.B13;
    sbit  EID14_C1RXF26_bit at C1RXF26.B14;
    sbit  EID15_C1RXF26_bit at C1RXF26.B15;
    sbit  EID16_C1RXF26_bit at C1RXF26.B16;
    sbit  EID17_C1RXF26_bit at C1RXF26.B17;
    sbit  EXID_C1RXF26_bit at C1RXF26.B19;
    sbit  SID0_C1RXF26_bit at C1RXF26.B21;
    sbit  SID1_C1RXF26_bit at C1RXF26.B22;
    sbit  SID2_C1RXF26_bit at C1RXF26.B23;
    sbit  SID3_C1RXF26_bit at C1RXF26.B24;
    sbit  SID4_C1RXF26_bit at C1RXF26.B25;
    sbit  SID5_C1RXF26_bit at C1RXF26.B26;
    sbit  SID6_C1RXF26_bit at C1RXF26.B27;
    sbit  SID7_C1RXF26_bit at C1RXF26.B28;
    sbit  SID8_C1RXF26_bit at C1RXF26.B29;
    sbit  SID9_C1RXF26_bit at C1RXF26.B30;
    sbit  SID10_C1RXF26_bit at C1RXF26.B31;
sfr unsigned long   volatile C1RXF26CLR       absolute 0xBF88B2E4;
sfr unsigned long   volatile C1RXF26SET       absolute 0xBF88B2E8;
sfr unsigned long   volatile C1RXF26INV       absolute 0xBF88B2EC;
sfr atomic unsigned long   volatile C1RXF27          absolute 0xBF88B2F0;
    sbit  EID0_C1RXF27_bit at C1RXF27.B0;
    sbit  EID1_C1RXF27_bit at C1RXF27.B1;
    sbit  EID2_C1RXF27_bit at C1RXF27.B2;
    sbit  EID3_C1RXF27_bit at C1RXF27.B3;
    sbit  EID4_C1RXF27_bit at C1RXF27.B4;
    sbit  EID5_C1RXF27_bit at C1RXF27.B5;
    sbit  EID6_C1RXF27_bit at C1RXF27.B6;
    sbit  EID7_C1RXF27_bit at C1RXF27.B7;
    sbit  EID8_C1RXF27_bit at C1RXF27.B8;
    sbit  EID9_C1RXF27_bit at C1RXF27.B9;
    sbit  EID10_C1RXF27_bit at C1RXF27.B10;
    sbit  EID11_C1RXF27_bit at C1RXF27.B11;
    sbit  EID12_C1RXF27_bit at C1RXF27.B12;
    sbit  EID13_C1RXF27_bit at C1RXF27.B13;
    sbit  EID14_C1RXF27_bit at C1RXF27.B14;
    sbit  EID15_C1RXF27_bit at C1RXF27.B15;
    sbit  EID16_C1RXF27_bit at C1RXF27.B16;
    sbit  EID17_C1RXF27_bit at C1RXF27.B17;
    sbit  EXID_C1RXF27_bit at C1RXF27.B19;
    sbit  SID0_C1RXF27_bit at C1RXF27.B21;
    sbit  SID1_C1RXF27_bit at C1RXF27.B22;
    sbit  SID2_C1RXF27_bit at C1RXF27.B23;
    sbit  SID3_C1RXF27_bit at C1RXF27.B24;
    sbit  SID4_C1RXF27_bit at C1RXF27.B25;
    sbit  SID5_C1RXF27_bit at C1RXF27.B26;
    sbit  SID6_C1RXF27_bit at C1RXF27.B27;
    sbit  SID7_C1RXF27_bit at C1RXF27.B28;
    sbit  SID8_C1RXF27_bit at C1RXF27.B29;
    sbit  SID9_C1RXF27_bit at C1RXF27.B30;
    sbit  SID10_C1RXF27_bit at C1RXF27.B31;
sfr unsigned long   volatile C1RXF27CLR       absolute 0xBF88B2F4;
sfr unsigned long   volatile C1RXF27SET       absolute 0xBF88B2F8;
sfr unsigned long   volatile C1RXF27INV       absolute 0xBF88B2FC;
sfr atomic unsigned long   volatile C1RXF28          absolute 0xBF88B300;
    sbit  EID0_C1RXF28_bit at C1RXF28.B0;
    sbit  EID1_C1RXF28_bit at C1RXF28.B1;
    sbit  EID2_C1RXF28_bit at C1RXF28.B2;
    sbit  EID3_C1RXF28_bit at C1RXF28.B3;
    sbit  EID4_C1RXF28_bit at C1RXF28.B4;
    sbit  EID5_C1RXF28_bit at C1RXF28.B5;
    sbit  EID6_C1RXF28_bit at C1RXF28.B6;
    sbit  EID7_C1RXF28_bit at C1RXF28.B7;
    sbit  EID8_C1RXF28_bit at C1RXF28.B8;
    sbit  EID9_C1RXF28_bit at C1RXF28.B9;
    sbit  EID10_C1RXF28_bit at C1RXF28.B10;
    sbit  EID11_C1RXF28_bit at C1RXF28.B11;
    sbit  EID12_C1RXF28_bit at C1RXF28.B12;
    sbit  EID13_C1RXF28_bit at C1RXF28.B13;
    sbit  EID14_C1RXF28_bit at C1RXF28.B14;
    sbit  EID15_C1RXF28_bit at C1RXF28.B15;
    sbit  EID16_C1RXF28_bit at C1RXF28.B16;
    sbit  EID17_C1RXF28_bit at C1RXF28.B17;
    sbit  EXID_C1RXF28_bit at C1RXF28.B19;
    sbit  SID0_C1RXF28_bit at C1RXF28.B21;
    sbit  SID1_C1RXF28_bit at C1RXF28.B22;
    sbit  SID2_C1RXF28_bit at C1RXF28.B23;
    sbit  SID3_C1RXF28_bit at C1RXF28.B24;
    sbit  SID4_C1RXF28_bit at C1RXF28.B25;
    sbit  SID5_C1RXF28_bit at C1RXF28.B26;
    sbit  SID6_C1RXF28_bit at C1RXF28.B27;
    sbit  SID7_C1RXF28_bit at C1RXF28.B28;
    sbit  SID8_C1RXF28_bit at C1RXF28.B29;
    sbit  SID9_C1RXF28_bit at C1RXF28.B30;
    sbit  SID10_C1RXF28_bit at C1RXF28.B31;
sfr unsigned long   volatile C1RXF28CLR       absolute 0xBF88B304;
sfr unsigned long   volatile C1RXF28SET       absolute 0xBF88B308;
sfr unsigned long   volatile C1RXF28INV       absolute 0xBF88B30C;
sfr atomic unsigned long   volatile C1RXF29          absolute 0xBF88B310;
    sbit  EID0_C1RXF29_bit at C1RXF29.B0;
    sbit  EID1_C1RXF29_bit at C1RXF29.B1;
    sbit  EID2_C1RXF29_bit at C1RXF29.B2;
    sbit  EID3_C1RXF29_bit at C1RXF29.B3;
    sbit  EID4_C1RXF29_bit at C1RXF29.B4;
    sbit  EID5_C1RXF29_bit at C1RXF29.B5;
    sbit  EID6_C1RXF29_bit at C1RXF29.B6;
    sbit  EID7_C1RXF29_bit at C1RXF29.B7;
    sbit  EID8_C1RXF29_bit at C1RXF29.B8;
    sbit  EID9_C1RXF29_bit at C1RXF29.B9;
    sbit  EID10_C1RXF29_bit at C1RXF29.B10;
    sbit  EID11_C1RXF29_bit at C1RXF29.B11;
    sbit  EID12_C1RXF29_bit at C1RXF29.B12;
    sbit  EID13_C1RXF29_bit at C1RXF29.B13;
    sbit  EID14_C1RXF29_bit at C1RXF29.B14;
    sbit  EID15_C1RXF29_bit at C1RXF29.B15;
    sbit  EID16_C1RXF29_bit at C1RXF29.B16;
    sbit  EID17_C1RXF29_bit at C1RXF29.B17;
    sbit  EXID_C1RXF29_bit at C1RXF29.B19;
    sbit  SID0_C1RXF29_bit at C1RXF29.B21;
    sbit  SID1_C1RXF29_bit at C1RXF29.B22;
    sbit  SID2_C1RXF29_bit at C1RXF29.B23;
    sbit  SID3_C1RXF29_bit at C1RXF29.B24;
    sbit  SID4_C1RXF29_bit at C1RXF29.B25;
    sbit  SID5_C1RXF29_bit at C1RXF29.B26;
    sbit  SID6_C1RXF29_bit at C1RXF29.B27;
    sbit  SID7_C1RXF29_bit at C1RXF29.B28;
    sbit  SID8_C1RXF29_bit at C1RXF29.B29;
    sbit  SID9_C1RXF29_bit at C1RXF29.B30;
    sbit  SID10_C1RXF29_bit at C1RXF29.B31;
sfr unsigned long   volatile C1RXF29CLR       absolute 0xBF88B314;
sfr unsigned long   volatile C1RXF29SET       absolute 0xBF88B318;
sfr unsigned long   volatile C1RXF29INV       absolute 0xBF88B31C;
sfr atomic unsigned long   volatile C1RXF30          absolute 0xBF88B320;
    sbit  EID0_C1RXF30_bit at C1RXF30.B0;
    sbit  EID1_C1RXF30_bit at C1RXF30.B1;
    sbit  EID2_C1RXF30_bit at C1RXF30.B2;
    sbit  EID3_C1RXF30_bit at C1RXF30.B3;
    sbit  EID4_C1RXF30_bit at C1RXF30.B4;
    sbit  EID5_C1RXF30_bit at C1RXF30.B5;
    sbit  EID6_C1RXF30_bit at C1RXF30.B6;
    sbit  EID7_C1RXF30_bit at C1RXF30.B7;
    sbit  EID8_C1RXF30_bit at C1RXF30.B8;
    sbit  EID9_C1RXF30_bit at C1RXF30.B9;
    sbit  EID10_C1RXF30_bit at C1RXF30.B10;
    sbit  EID11_C1RXF30_bit at C1RXF30.B11;
    sbit  EID12_C1RXF30_bit at C1RXF30.B12;
    sbit  EID13_C1RXF30_bit at C1RXF30.B13;
    sbit  EID14_C1RXF30_bit at C1RXF30.B14;
    sbit  EID15_C1RXF30_bit at C1RXF30.B15;
    sbit  EID16_C1RXF30_bit at C1RXF30.B16;
    sbit  EID17_C1RXF30_bit at C1RXF30.B17;
    sbit  EXID_C1RXF30_bit at C1RXF30.B19;
    sbit  SID0_C1RXF30_bit at C1RXF30.B21;
    sbit  SID1_C1RXF30_bit at C1RXF30.B22;
    sbit  SID2_C1RXF30_bit at C1RXF30.B23;
    sbit  SID3_C1RXF30_bit at C1RXF30.B24;
    sbit  SID4_C1RXF30_bit at C1RXF30.B25;
    sbit  SID5_C1RXF30_bit at C1RXF30.B26;
    sbit  SID6_C1RXF30_bit at C1RXF30.B27;
    sbit  SID7_C1RXF30_bit at C1RXF30.B28;
    sbit  SID8_C1RXF30_bit at C1RXF30.B29;
    sbit  SID9_C1RXF30_bit at C1RXF30.B30;
    sbit  SID10_C1RXF30_bit at C1RXF30.B31;
sfr unsigned long   volatile C1RXF30CLR       absolute 0xBF88B324;
sfr unsigned long   volatile C1RXF30SET       absolute 0xBF88B328;
sfr unsigned long   volatile C1RXF30INV       absolute 0xBF88B32C;
sfr atomic unsigned long   volatile C1RXF31          absolute 0xBF88B330;
    sbit  EID0_C1RXF31_bit at C1RXF31.B0;
    sbit  EID1_C1RXF31_bit at C1RXF31.B1;
    sbit  EID2_C1RXF31_bit at C1RXF31.B2;
    sbit  EID3_C1RXF31_bit at C1RXF31.B3;
    sbit  EID4_C1RXF31_bit at C1RXF31.B4;
    sbit  EID5_C1RXF31_bit at C1RXF31.B5;
    sbit  EID6_C1RXF31_bit at C1RXF31.B6;
    sbit  EID7_C1RXF31_bit at C1RXF31.B7;
    sbit  EID8_C1RXF31_bit at C1RXF31.B8;
    sbit  EID9_C1RXF31_bit at C1RXF31.B9;
    sbit  EID10_C1RXF31_bit at C1RXF31.B10;
    sbit  EID11_C1RXF31_bit at C1RXF31.B11;
    sbit  EID12_C1RXF31_bit at C1RXF31.B12;
    sbit  EID13_C1RXF31_bit at C1RXF31.B13;
    sbit  EID14_C1RXF31_bit at C1RXF31.B14;
    sbit  EID15_C1RXF31_bit at C1RXF31.B15;
    sbit  EID16_C1RXF31_bit at C1RXF31.B16;
    sbit  EID17_C1RXF31_bit at C1RXF31.B17;
    sbit  EXID_C1RXF31_bit at C1RXF31.B19;
    sbit  SID0_C1RXF31_bit at C1RXF31.B21;
    sbit  SID1_C1RXF31_bit at C1RXF31.B22;
    sbit  SID2_C1RXF31_bit at C1RXF31.B23;
    sbit  SID3_C1RXF31_bit at C1RXF31.B24;
    sbit  SID4_C1RXF31_bit at C1RXF31.B25;
    sbit  SID5_C1RXF31_bit at C1RXF31.B26;
    sbit  SID6_C1RXF31_bit at C1RXF31.B27;
    sbit  SID7_C1RXF31_bit at C1RXF31.B28;
    sbit  SID8_C1RXF31_bit at C1RXF31.B29;
    sbit  SID9_C1RXF31_bit at C1RXF31.B30;
    sbit  SID10_C1RXF31_bit at C1RXF31.B31;
sfr unsigned long   volatile C1RXF31CLR       absolute 0xBF88B334;
sfr unsigned long   volatile C1RXF31SET       absolute 0xBF88B338;
sfr unsigned long   volatile C1RXF31INV       absolute 0xBF88B33C;
sfr atomic unsigned long   volatile C1FIFOBA         absolute 0xBF88B340;
sfr unsigned long   volatile C1FIFOBACLR      absolute 0xBF88B344;
sfr unsigned long   volatile C1FIFOBASET      absolute 0xBF88B348;
sfr unsigned long   volatile C1FIFOBAINV      absolute 0xBF88B34C;
sfr atomic unsigned long   volatile C1FIFOCON0       absolute 0xBF88B350;
    const register unsigned short int TXPRI0 = 0;
    sbit  TXPRI0_bit at C1FIFOCON0.B0;
    const register unsigned short int TXPRI1 = 1;
    sbit  TXPRI1_bit at C1FIFOCON0.B1;
    const register unsigned short int RTREN = 2;
    sbit  RTREN_bit at C1FIFOCON0.B2;
    const register unsigned short int TXREQ = 3;
    sbit  TXREQ_bit at C1FIFOCON0.B3;
    const register unsigned short int TXERR = 4;
    sbit  TXERR_bit at C1FIFOCON0.B4;
    const register unsigned short int TXLARB = 5;
    sbit  TXLARB_bit at C1FIFOCON0.B5;
    const register unsigned short int TXABAT = 6;
    sbit  TXABAT_bit at C1FIFOCON0.B6;
    const register unsigned short int TXEN = 7;
    sbit  TXEN_bit at C1FIFOCON0.B7;
    const register unsigned short int DONLY = 12;
    sbit  DONLY_bit at C1FIFOCON0.B12;
    const register unsigned short int UINC = 13;
    sbit  UINC_bit at C1FIFOCON0.B13;
    const register unsigned short int FRESET = 14;
    sbit  FRESET_bit at C1FIFOCON0.B14;
    const register unsigned short int FSIZE0 = 16;
    sbit  FSIZE0_bit at C1FIFOCON0.B16;
    const register unsigned short int FSIZE1 = 17;
    sbit  FSIZE1_bit at C1FIFOCON0.B17;
    const register unsigned short int FSIZE2 = 18;
    sbit  FSIZE2_bit at C1FIFOCON0.B18;
    const register unsigned short int FSIZE3 = 19;
    sbit  FSIZE3_bit at C1FIFOCON0.B19;
    const register unsigned short int FSIZE4 = 20;
    sbit  FSIZE4_bit at C1FIFOCON0.B20;
sfr unsigned long   volatile C1FIFOCON0CLR    absolute 0xBF88B354;
sfr unsigned long   volatile C1FIFOCON0SET    absolute 0xBF88B358;
sfr unsigned long   volatile C1FIFOCON0INV    absolute 0xBF88B35C;
sfr atomic unsigned long   volatile C1FIFOINT0       absolute 0xBF88B360;
    const register unsigned short int RXNEMPTYIF = 0;
    sbit  RXNEMPTYIF_bit at C1FIFOINT0.B0;
    const register unsigned short int RXHALFIF = 1;
    sbit  RXHALFIF_bit at C1FIFOINT0.B1;
    const register unsigned short int RXFULLIF = 2;
    sbit  RXFULLIF_bit at C1FIFOINT0.B2;
    const register unsigned short int RXOVFLIF = 3;
    sbit  RXOVFLIF_bit at C1FIFOINT0.B3;
    const register unsigned short int TXEMPTYIF = 8;
    sbit  TXEMPTYIF_bit at C1FIFOINT0.B8;
    const register unsigned short int TXHALFIF = 9;
    sbit  TXHALFIF_bit at C1FIFOINT0.B9;
    const register unsigned short int TXNFULLIF = 10;
    sbit  TXNFULLIF_bit at C1FIFOINT0.B10;
    const register unsigned short int RXNEMPTYIE = 16;
    sbit  RXNEMPTYIE_bit at C1FIFOINT0.B16;
    const register unsigned short int RXHALFIE = 17;
    sbit  RXHALFIE_bit at C1FIFOINT0.B17;
    const register unsigned short int RXFULLIE = 18;
    sbit  RXFULLIE_bit at C1FIFOINT0.B18;
    const register unsigned short int RXOVFLIE = 19;
    sbit  RXOVFLIE_bit at C1FIFOINT0.B19;
    const register unsigned short int TXEMPTYIE = 24;
    sbit  TXEMPTYIE_bit at C1FIFOINT0.B24;
    const register unsigned short int TXHALFIE = 25;
    sbit  TXHALFIE_bit at C1FIFOINT0.B25;
    const register unsigned short int TXNFULLIE = 26;
    sbit  TXNFULLIE_bit at C1FIFOINT0.B26;
sfr unsigned long   volatile C1FIFOINT0CLR    absolute 0xBF88B364;
sfr unsigned long   volatile C1FIFOINT0SET    absolute 0xBF88B368;
sfr unsigned long   volatile C1FIFOINT0INV    absolute 0xBF88B36C;
sfr atomic unsigned long   volatile C1FIFOUA0        absolute 0xBF88B370;
sfr unsigned long   volatile C1FIFOUA0CLR     absolute 0xBF88B374;
sfr unsigned long   volatile C1FIFOUA0SET     absolute 0xBF88B378;
sfr unsigned long   volatile C1FIFOUA0INV     absolute 0xBF88B37C;
sfr atomic unsigned long   volatile C1FIFOCI0        absolute 0xBF88B380;
    const register unsigned short int CFIFOCI0 = 0;
    sbit  CFIFOCI0_bit at C1FIFOCI0.B0;
    const register unsigned short int CFIFOCI1 = 1;
    sbit  CFIFOCI1_bit at C1FIFOCI0.B1;
    const register unsigned short int CFIFOCI2 = 2;
    sbit  CFIFOCI2_bit at C1FIFOCI0.B2;
    const register unsigned short int CFIFOCI3 = 3;
    sbit  CFIFOCI3_bit at C1FIFOCI0.B3;
    const register unsigned short int CFIFOCI4 = 4;
    sbit  CFIFOCI4_bit at C1FIFOCI0.B4;
sfr unsigned long   volatile C1FIFOCI0CLR     absolute 0xBF88B384;
sfr unsigned long   volatile C1FIFOCI0SET     absolute 0xBF88B388;
sfr unsigned long   volatile C1FIFOCI0INV     absolute 0xBF88B38C;
sfr atomic unsigned long   volatile C1FIFOCON1       absolute 0xBF88B390;
    sbit  TXPRI0_C1FIFOCON1_bit at C1FIFOCON1.B0;
    sbit  TXPRI1_C1FIFOCON1_bit at C1FIFOCON1.B1;
    sbit  RTREN_C1FIFOCON1_bit at C1FIFOCON1.B2;
    sbit  TXREQ_C1FIFOCON1_bit at C1FIFOCON1.B3;
    sbit  TXERR_C1FIFOCON1_bit at C1FIFOCON1.B4;
    sbit  TXLARB_C1FIFOCON1_bit at C1FIFOCON1.B5;
    sbit  TXABAT_C1FIFOCON1_bit at C1FIFOCON1.B6;
    sbit  TXEN_C1FIFOCON1_bit at C1FIFOCON1.B7;
    sbit  DONLY_C1FIFOCON1_bit at C1FIFOCON1.B12;
    sbit  UINC_C1FIFOCON1_bit at C1FIFOCON1.B13;
    sbit  FRESET_C1FIFOCON1_bit at C1FIFOCON1.B14;
    sbit  FSIZE0_C1FIFOCON1_bit at C1FIFOCON1.B16;
    sbit  FSIZE1_C1FIFOCON1_bit at C1FIFOCON1.B17;
    sbit  FSIZE2_C1FIFOCON1_bit at C1FIFOCON1.B18;
    sbit  FSIZE3_C1FIFOCON1_bit at C1FIFOCON1.B19;
    sbit  FSIZE4_C1FIFOCON1_bit at C1FIFOCON1.B20;
sfr unsigned long   volatile C1FIFOCON1CLR    absolute 0xBF88B394;
sfr unsigned long   volatile C1FIFOCON1SET    absolute 0xBF88B398;
sfr unsigned long   volatile C1FIFOCON1INV    absolute 0xBF88B39C;
sfr atomic unsigned long   volatile C1FIFOINT1       absolute 0xBF88B3A0;
    sbit  RXNEMPTYIF_C1FIFOINT1_bit at C1FIFOINT1.B0;
    sbit  RXHALFIF_C1FIFOINT1_bit at C1FIFOINT1.B1;
    sbit  RXFULLIF_C1FIFOINT1_bit at C1FIFOINT1.B2;
    sbit  RXOVFLIF_C1FIFOINT1_bit at C1FIFOINT1.B3;
    sbit  TXEMPTYIF_C1FIFOINT1_bit at C1FIFOINT1.B8;
    sbit  TXHALFIF_C1FIFOINT1_bit at C1FIFOINT1.B9;
    sbit  TXNFULLIF_C1FIFOINT1_bit at C1FIFOINT1.B10;
    sbit  RXNEMPTYIE_C1FIFOINT1_bit at C1FIFOINT1.B16;
    sbit  RXHALFIE_C1FIFOINT1_bit at C1FIFOINT1.B17;
    sbit  RXFULLIE_C1FIFOINT1_bit at C1FIFOINT1.B18;
    sbit  RXOVFLIE_C1FIFOINT1_bit at C1FIFOINT1.B19;
    sbit  TXEMPTYIE_C1FIFOINT1_bit at C1FIFOINT1.B24;
    sbit  TXHALFIE_C1FIFOINT1_bit at C1FIFOINT1.B25;
    sbit  TXNFULLIE_C1FIFOINT1_bit at C1FIFOINT1.B26;
sfr unsigned long   volatile C1FIFOINT1CLR    absolute 0xBF88B3A4;
sfr unsigned long   volatile C1FIFOINT1SET    absolute 0xBF88B3A8;
sfr unsigned long   volatile C1FIFOINT1INV    absolute 0xBF88B3AC;
sfr atomic unsigned long   volatile C1FIFOUA1        absolute 0xBF88B3B0;
sfr unsigned long   volatile C1FIFOUA1CLR     absolute 0xBF88B3B4;
sfr unsigned long   volatile C1FIFOUA1SET     absolute 0xBF88B3B8;
sfr unsigned long   volatile C1FIFOUA1INV     absolute 0xBF88B3BC;
sfr atomic unsigned long   volatile C1FIFOCI1        absolute 0xBF88B3C0;
    sbit  CFIFOCI0_C1FIFOCI1_bit at C1FIFOCI1.B0;
    sbit  CFIFOCI1_C1FIFOCI1_bit at C1FIFOCI1.B1;
    sbit  CFIFOCI2_C1FIFOCI1_bit at C1FIFOCI1.B2;
    sbit  CFIFOCI3_C1FIFOCI1_bit at C1FIFOCI1.B3;
    sbit  CFIFOCI4_C1FIFOCI1_bit at C1FIFOCI1.B4;
sfr unsigned long   volatile C1FIFOCI1CLR     absolute 0xBF88B3C4;
sfr unsigned long   volatile C1FIFOCI1SET     absolute 0xBF88B3C8;
sfr unsigned long   volatile C1FIFOCI1INV     absolute 0xBF88B3CC;
sfr atomic unsigned long   volatile C1FIFOCON2       absolute 0xBF88B3D0;
    sbit  TXPRI0_C1FIFOCON2_bit at C1FIFOCON2.B0;
    sbit  TXPRI1_C1FIFOCON2_bit at C1FIFOCON2.B1;
    sbit  RTREN_C1FIFOCON2_bit at C1FIFOCON2.B2;
    sbit  TXREQ_C1FIFOCON2_bit at C1FIFOCON2.B3;
    sbit  TXERR_C1FIFOCON2_bit at C1FIFOCON2.B4;
    sbit  TXLARB_C1FIFOCON2_bit at C1FIFOCON2.B5;
    sbit  TXABAT_C1FIFOCON2_bit at C1FIFOCON2.B6;
    sbit  TXEN_C1FIFOCON2_bit at C1FIFOCON2.B7;
    sbit  DONLY_C1FIFOCON2_bit at C1FIFOCON2.B12;
    sbit  UINC_C1FIFOCON2_bit at C1FIFOCON2.B13;
    sbit  FRESET_C1FIFOCON2_bit at C1FIFOCON2.B14;
    sbit  FSIZE0_C1FIFOCON2_bit at C1FIFOCON2.B16;
    sbit  FSIZE1_C1FIFOCON2_bit at C1FIFOCON2.B17;
    sbit  FSIZE2_C1FIFOCON2_bit at C1FIFOCON2.B18;
    sbit  FSIZE3_C1FIFOCON2_bit at C1FIFOCON2.B19;
    sbit  FSIZE4_C1FIFOCON2_bit at C1FIFOCON2.B20;
sfr unsigned long   volatile C1FIFOCON2CLR    absolute 0xBF88B3D4;
sfr unsigned long   volatile C1FIFOCON2SET    absolute 0xBF88B3D8;
sfr unsigned long   volatile C1FIFOCON2INV    absolute 0xBF88B3DC;
sfr atomic unsigned long   volatile C1FIFOINT2       absolute 0xBF88B3E0;
    sbit  RXNEMPTYIF_C1FIFOINT2_bit at C1FIFOINT2.B0;
    sbit  RXHALFIF_C1FIFOINT2_bit at C1FIFOINT2.B1;
    sbit  RXFULLIF_C1FIFOINT2_bit at C1FIFOINT2.B2;
    sbit  RXOVFLIF_C1FIFOINT2_bit at C1FIFOINT2.B3;
    sbit  TXEMPTYIF_C1FIFOINT2_bit at C1FIFOINT2.B8;
    sbit  TXHALFIF_C1FIFOINT2_bit at C1FIFOINT2.B9;
    sbit  TXNFULLIF_C1FIFOINT2_bit at C1FIFOINT2.B10;
    sbit  RXNEMPTYIE_C1FIFOINT2_bit at C1FIFOINT2.B16;
    sbit  RXHALFIE_C1FIFOINT2_bit at C1FIFOINT2.B17;
    sbit  RXFULLIE_C1FIFOINT2_bit at C1FIFOINT2.B18;
    sbit  RXOVFLIE_C1FIFOINT2_bit at C1FIFOINT2.B19;
    sbit  TXEMPTYIE_C1FIFOINT2_bit at C1FIFOINT2.B24;
    sbit  TXHALFIE_C1FIFOINT2_bit at C1FIFOINT2.B25;
    sbit  TXNFULLIE_C1FIFOINT2_bit at C1FIFOINT2.B26;
sfr unsigned long   volatile C1FIFOINT2CLR    absolute 0xBF88B3E4;
sfr unsigned long   volatile C1FIFOINT2SET    absolute 0xBF88B3E8;
sfr unsigned long   volatile C1FIFOINT2INV    absolute 0xBF88B3EC;
sfr atomic unsigned long   volatile C1FIFOUA2        absolute 0xBF88B3F0;
sfr unsigned long   volatile C1FIFOUA2CLR     absolute 0xBF88B3F4;
sfr unsigned long   volatile C1FIFOUA2SET     absolute 0xBF88B3F8;
sfr unsigned long   volatile C1FIFOUA2INV     absolute 0xBF88B3FC;
sfr atomic unsigned long   volatile C1FIFOCI2        absolute 0xBF88B400;
    sbit  CFIFOCI0_C1FIFOCI2_bit at C1FIFOCI2.B0;
    sbit  CFIFOCI1_C1FIFOCI2_bit at C1FIFOCI2.B1;
    sbit  CFIFOCI2_C1FIFOCI2_bit at C1FIFOCI2.B2;
    sbit  CFIFOCI3_C1FIFOCI2_bit at C1FIFOCI2.B3;
    sbit  CFIFOCI4_C1FIFOCI2_bit at C1FIFOCI2.B4;
sfr unsigned long   volatile C1FIFOCI2CLR     absolute 0xBF88B404;
sfr unsigned long   volatile C1FIFOCI2SET     absolute 0xBF88B408;
sfr unsigned long   volatile C1FIFOCI2INV     absolute 0xBF88B40C;
sfr atomic unsigned long   volatile C1FIFOCON3       absolute 0xBF88B410;
    sbit  TXPRI0_C1FIFOCON3_bit at C1FIFOCON3.B0;
    sbit  TXPRI1_C1FIFOCON3_bit at C1FIFOCON3.B1;
    sbit  RTREN_C1FIFOCON3_bit at C1FIFOCON3.B2;
    sbit  TXREQ_C1FIFOCON3_bit at C1FIFOCON3.B3;
    sbit  TXERR_C1FIFOCON3_bit at C1FIFOCON3.B4;
    sbit  TXLARB_C1FIFOCON3_bit at C1FIFOCON3.B5;
    sbit  TXABAT_C1FIFOCON3_bit at C1FIFOCON3.B6;
    sbit  TXEN_C1FIFOCON3_bit at C1FIFOCON3.B7;
    sbit  DONLY_C1FIFOCON3_bit at C1FIFOCON3.B12;
    sbit  UINC_C1FIFOCON3_bit at C1FIFOCON3.B13;
    sbit  FRESET_C1FIFOCON3_bit at C1FIFOCON3.B14;
    sbit  FSIZE0_C1FIFOCON3_bit at C1FIFOCON3.B16;
    sbit  FSIZE1_C1FIFOCON3_bit at C1FIFOCON3.B17;
    sbit  FSIZE2_C1FIFOCON3_bit at C1FIFOCON3.B18;
    sbit  FSIZE3_C1FIFOCON3_bit at C1FIFOCON3.B19;
    sbit  FSIZE4_C1FIFOCON3_bit at C1FIFOCON3.B20;
sfr unsigned long   volatile C1FIFOCON3CLR    absolute 0xBF88B414;
sfr unsigned long   volatile C1FIFOCON3SET    absolute 0xBF88B418;
sfr unsigned long   volatile C1FIFOCON3INV    absolute 0xBF88B41C;
sfr atomic unsigned long   volatile C1FIFOINT3       absolute 0xBF88B420;
    sbit  RXNEMPTYIF_C1FIFOINT3_bit at C1FIFOINT3.B0;
    sbit  RXHALFIF_C1FIFOINT3_bit at C1FIFOINT3.B1;
    sbit  RXFULLIF_C1FIFOINT3_bit at C1FIFOINT3.B2;
    sbit  RXOVFLIF_C1FIFOINT3_bit at C1FIFOINT3.B3;
    sbit  TXEMPTYIF_C1FIFOINT3_bit at C1FIFOINT3.B8;
    sbit  TXHALFIF_C1FIFOINT3_bit at C1FIFOINT3.B9;
    sbit  TXNFULLIF_C1FIFOINT3_bit at C1FIFOINT3.B10;
    sbit  RXNEMPTYIE_C1FIFOINT3_bit at C1FIFOINT3.B16;
    sbit  RXHALFIE_C1FIFOINT3_bit at C1FIFOINT3.B17;
    sbit  RXFULLIE_C1FIFOINT3_bit at C1FIFOINT3.B18;
    sbit  RXOVFLIE_C1FIFOINT3_bit at C1FIFOINT3.B19;
    sbit  TXEMPTYIE_C1FIFOINT3_bit at C1FIFOINT3.B24;
    sbit  TXHALFIE_C1FIFOINT3_bit at C1FIFOINT3.B25;
    sbit  TXNFULLIE_C1FIFOINT3_bit at C1FIFOINT3.B26;
sfr unsigned long   volatile C1FIFOINT3CLR    absolute 0xBF88B424;
sfr unsigned long   volatile C1FIFOINT3SET    absolute 0xBF88B428;
sfr unsigned long   volatile C1FIFOINT3INV    absolute 0xBF88B42C;
sfr atomic unsigned long   volatile C1FIFOUA3        absolute 0xBF88B430;
sfr unsigned long   volatile C1FIFOUA3CLR     absolute 0xBF88B434;
sfr unsigned long   volatile C1FIFOUA3SET     absolute 0xBF88B438;
sfr unsigned long   volatile C1FIFOUA3INV     absolute 0xBF88B43C;
sfr atomic unsigned long   volatile C1FIFOCI3        absolute 0xBF88B440;
    sbit  CFIFOCI0_C1FIFOCI3_bit at C1FIFOCI3.B0;
    sbit  CFIFOCI1_C1FIFOCI3_bit at C1FIFOCI3.B1;
    sbit  CFIFOCI2_C1FIFOCI3_bit at C1FIFOCI3.B2;
    sbit  CFIFOCI3_C1FIFOCI3_bit at C1FIFOCI3.B3;
    sbit  CFIFOCI4_C1FIFOCI3_bit at C1FIFOCI3.B4;
sfr unsigned long   volatile C1FIFOCI3CLR     absolute 0xBF88B444;
sfr unsigned long   volatile C1FIFOCI3SET     absolute 0xBF88B448;
sfr unsigned long   volatile C1FIFOCI3INV     absolute 0xBF88B44C;
sfr atomic unsigned long   volatile C1FIFOCON4       absolute 0xBF88B450;
    sbit  TXPRI0_C1FIFOCON4_bit at C1FIFOCON4.B0;
    sbit  TXPRI1_C1FIFOCON4_bit at C1FIFOCON4.B1;
    sbit  RTREN_C1FIFOCON4_bit at C1FIFOCON4.B2;
    sbit  TXREQ_C1FIFOCON4_bit at C1FIFOCON4.B3;
    sbit  TXERR_C1FIFOCON4_bit at C1FIFOCON4.B4;
    sbit  TXLARB_C1FIFOCON4_bit at C1FIFOCON4.B5;
    sbit  TXABAT_C1FIFOCON4_bit at C1FIFOCON4.B6;
    sbit  TXEN_C1FIFOCON4_bit at C1FIFOCON4.B7;
    sbit  DONLY_C1FIFOCON4_bit at C1FIFOCON4.B12;
    sbit  UINC_C1FIFOCON4_bit at C1FIFOCON4.B13;
    sbit  FRESET_C1FIFOCON4_bit at C1FIFOCON4.B14;
    sbit  FSIZE0_C1FIFOCON4_bit at C1FIFOCON4.B16;
    sbit  FSIZE1_C1FIFOCON4_bit at C1FIFOCON4.B17;
    sbit  FSIZE2_C1FIFOCON4_bit at C1FIFOCON4.B18;
    sbit  FSIZE3_C1FIFOCON4_bit at C1FIFOCON4.B19;
    sbit  FSIZE4_C1FIFOCON4_bit at C1FIFOCON4.B20;
sfr unsigned long   volatile C1FIFOCON4CLR    absolute 0xBF88B454;
sfr unsigned long   volatile C1FIFOCON4SET    absolute 0xBF88B458;
sfr unsigned long   volatile C1FIFOCON4INV    absolute 0xBF88B45C;
sfr atomic unsigned long   volatile C1FIFOINT4       absolute 0xBF88B460;
    sbit  RXNEMPTYIF_C1FIFOINT4_bit at C1FIFOINT4.B0;
    sbit  RXHALFIF_C1FIFOINT4_bit at C1FIFOINT4.B1;
    sbit  RXFULLIF_C1FIFOINT4_bit at C1FIFOINT4.B2;
    sbit  RXOVFLIF_C1FIFOINT4_bit at C1FIFOINT4.B3;
    sbit  TXEMPTYIF_C1FIFOINT4_bit at C1FIFOINT4.B8;
    sbit  TXHALFIF_C1FIFOINT4_bit at C1FIFOINT4.B9;
    sbit  TXNFULLIF_C1FIFOINT4_bit at C1FIFOINT4.B10;
    sbit  RXNEMPTYIE_C1FIFOINT4_bit at C1FIFOINT4.B16;
    sbit  RXHALFIE_C1FIFOINT4_bit at C1FIFOINT4.B17;
    sbit  RXFULLIE_C1FIFOINT4_bit at C1FIFOINT4.B18;
    sbit  RXOVFLIE_C1FIFOINT4_bit at C1FIFOINT4.B19;
    sbit  TXEMPTYIE_C1FIFOINT4_bit at C1FIFOINT4.B24;
    sbit  TXHALFIE_C1FIFOINT4_bit at C1FIFOINT4.B25;
    sbit  TXNFULLIE_C1FIFOINT4_bit at C1FIFOINT4.B26;
sfr unsigned long   volatile C1FIFOINT4CLR    absolute 0xBF88B464;
sfr unsigned long   volatile C1FIFOINT4SET    absolute 0xBF88B468;
sfr unsigned long   volatile C1FIFOINT4INV    absolute 0xBF88B46C;
sfr atomic unsigned long   volatile C1FIFOUA4        absolute 0xBF88B470;
sfr unsigned long   volatile C1FIFOUA4CLR     absolute 0xBF88B474;
sfr unsigned long   volatile C1FIFOUA4SET     absolute 0xBF88B478;
sfr unsigned long   volatile C1FIFOUA4INV     absolute 0xBF88B47C;
sfr atomic unsigned long   volatile C1FIFOCI4        absolute 0xBF88B480;
    sbit  CFIFOCI0_C1FIFOCI4_bit at C1FIFOCI4.B0;
    sbit  CFIFOCI1_C1FIFOCI4_bit at C1FIFOCI4.B1;
    sbit  CFIFOCI2_C1FIFOCI4_bit at C1FIFOCI4.B2;
    sbit  CFIFOCI3_C1FIFOCI4_bit at C1FIFOCI4.B3;
    sbit  CFIFOCI4_C1FIFOCI4_bit at C1FIFOCI4.B4;
sfr unsigned long   volatile C1FIFOCI4CLR     absolute 0xBF88B484;
sfr unsigned long   volatile C1FIFOCI4SET     absolute 0xBF88B488;
sfr unsigned long   volatile C1FIFOCI4INV     absolute 0xBF88B48C;
sfr atomic unsigned long   volatile C1FIFOCON5       absolute 0xBF88B490;
    sbit  TXPRI0_C1FIFOCON5_bit at C1FIFOCON5.B0;
    sbit  TXPRI1_C1FIFOCON5_bit at C1FIFOCON5.B1;
    sbit  RTREN_C1FIFOCON5_bit at C1FIFOCON5.B2;
    sbit  TXREQ_C1FIFOCON5_bit at C1FIFOCON5.B3;
    sbit  TXERR_C1FIFOCON5_bit at C1FIFOCON5.B4;
    sbit  TXLARB_C1FIFOCON5_bit at C1FIFOCON5.B5;
    sbit  TXABAT_C1FIFOCON5_bit at C1FIFOCON5.B6;
    sbit  TXEN_C1FIFOCON5_bit at C1FIFOCON5.B7;
    sbit  DONLY_C1FIFOCON5_bit at C1FIFOCON5.B12;
    sbit  UINC_C1FIFOCON5_bit at C1FIFOCON5.B13;
    sbit  FRESET_C1FIFOCON5_bit at C1FIFOCON5.B14;
    sbit  FSIZE0_C1FIFOCON5_bit at C1FIFOCON5.B16;
    sbit  FSIZE1_C1FIFOCON5_bit at C1FIFOCON5.B17;
    sbit  FSIZE2_C1FIFOCON5_bit at C1FIFOCON5.B18;
    sbit  FSIZE3_C1FIFOCON5_bit at C1FIFOCON5.B19;
    sbit  FSIZE4_C1FIFOCON5_bit at C1FIFOCON5.B20;
sfr unsigned long   volatile C1FIFOCON5CLR    absolute 0xBF88B494;
sfr unsigned long   volatile C1FIFOCON5SET    absolute 0xBF88B498;
sfr unsigned long   volatile C1FIFOCON5INV    absolute 0xBF88B49C;
sfr atomic unsigned long   volatile C1FIFOINT5       absolute 0xBF88B4A0;
    sbit  RXNEMPTYIF_C1FIFOINT5_bit at C1FIFOINT5.B0;
    sbit  RXHALFIF_C1FIFOINT5_bit at C1FIFOINT5.B1;
    sbit  RXFULLIF_C1FIFOINT5_bit at C1FIFOINT5.B2;
    sbit  RXOVFLIF_C1FIFOINT5_bit at C1FIFOINT5.B3;
    sbit  TXEMPTYIF_C1FIFOINT5_bit at C1FIFOINT5.B8;
    sbit  TXHALFIF_C1FIFOINT5_bit at C1FIFOINT5.B9;
    sbit  TXNFULLIF_C1FIFOINT5_bit at C1FIFOINT5.B10;
    sbit  RXNEMPTYIE_C1FIFOINT5_bit at C1FIFOINT5.B16;
    sbit  RXHALFIE_C1FIFOINT5_bit at C1FIFOINT5.B17;
    sbit  RXFULLIE_C1FIFOINT5_bit at C1FIFOINT5.B18;
    sbit  RXOVFLIE_C1FIFOINT5_bit at C1FIFOINT5.B19;
    sbit  TXEMPTYIE_C1FIFOINT5_bit at C1FIFOINT5.B24;
    sbit  TXHALFIE_C1FIFOINT5_bit at C1FIFOINT5.B25;
    sbit  TXNFULLIE_C1FIFOINT5_bit at C1FIFOINT5.B26;
sfr unsigned long   volatile C1FIFOINT5CLR    absolute 0xBF88B4A4;
sfr unsigned long   volatile C1FIFOINT5SET    absolute 0xBF88B4A8;
sfr unsigned long   volatile C1FIFOINT5INV    absolute 0xBF88B4AC;
sfr atomic unsigned long   volatile C1FIFOUA5        absolute 0xBF88B4B0;
sfr unsigned long   volatile C1FIFOUA5CLR     absolute 0xBF88B4B4;
sfr unsigned long   volatile C1FIFOUA5SET     absolute 0xBF88B4B8;
sfr unsigned long   volatile C1FIFOUA5INV     absolute 0xBF88B4BC;
sfr atomic unsigned long   volatile C1FIFOCI5        absolute 0xBF88B4C0;
    sbit  CFIFOCI0_C1FIFOCI5_bit at C1FIFOCI5.B0;
    sbit  CFIFOCI1_C1FIFOCI5_bit at C1FIFOCI5.B1;
    sbit  CFIFOCI2_C1FIFOCI5_bit at C1FIFOCI5.B2;
    sbit  CFIFOCI3_C1FIFOCI5_bit at C1FIFOCI5.B3;
    sbit  CFIFOCI4_C1FIFOCI5_bit at C1FIFOCI5.B4;
sfr unsigned long   volatile C1FIFOCI5CLR     absolute 0xBF88B4C4;
sfr unsigned long   volatile C1FIFOCI5SET     absolute 0xBF88B4C8;
sfr unsigned long   volatile C1FIFOCI5INV     absolute 0xBF88B4CC;
sfr atomic unsigned long   volatile C1FIFOCON6       absolute 0xBF88B4D0;
    sbit  TXPRI0_C1FIFOCON6_bit at C1FIFOCON6.B0;
    sbit  TXPRI1_C1FIFOCON6_bit at C1FIFOCON6.B1;
    sbit  RTREN_C1FIFOCON6_bit at C1FIFOCON6.B2;
    sbit  TXREQ_C1FIFOCON6_bit at C1FIFOCON6.B3;
    sbit  TXERR_C1FIFOCON6_bit at C1FIFOCON6.B4;
    sbit  TXLARB_C1FIFOCON6_bit at C1FIFOCON6.B5;
    sbit  TXABAT_C1FIFOCON6_bit at C1FIFOCON6.B6;
    sbit  TXEN_C1FIFOCON6_bit at C1FIFOCON6.B7;
    sbit  DONLY_C1FIFOCON6_bit at C1FIFOCON6.B12;
    sbit  UINC_C1FIFOCON6_bit at C1FIFOCON6.B13;
    sbit  FRESET_C1FIFOCON6_bit at C1FIFOCON6.B14;
    sbit  FSIZE0_C1FIFOCON6_bit at C1FIFOCON6.B16;
    sbit  FSIZE1_C1FIFOCON6_bit at C1FIFOCON6.B17;
    sbit  FSIZE2_C1FIFOCON6_bit at C1FIFOCON6.B18;
    sbit  FSIZE3_C1FIFOCON6_bit at C1FIFOCON6.B19;
    sbit  FSIZE4_C1FIFOCON6_bit at C1FIFOCON6.B20;
sfr unsigned long   volatile C1FIFOCON6CLR    absolute 0xBF88B4D4;
sfr unsigned long   volatile C1FIFOCON6SET    absolute 0xBF88B4D8;
sfr unsigned long   volatile C1FIFOCON6INV    absolute 0xBF88B4DC;
sfr atomic unsigned long   volatile C1FIFOINT6       absolute 0xBF88B4E0;
    sbit  RXNEMPTYIF_C1FIFOINT6_bit at C1FIFOINT6.B0;
    sbit  RXHALFIF_C1FIFOINT6_bit at C1FIFOINT6.B1;
    sbit  RXFULLIF_C1FIFOINT6_bit at C1FIFOINT6.B2;
    sbit  RXOVFLIF_C1FIFOINT6_bit at C1FIFOINT6.B3;
    sbit  TXEMPTYIF_C1FIFOINT6_bit at C1FIFOINT6.B8;
    sbit  TXHALFIF_C1FIFOINT6_bit at C1FIFOINT6.B9;
    sbit  TXNFULLIF_C1FIFOINT6_bit at C1FIFOINT6.B10;
    sbit  RXNEMPTYIE_C1FIFOINT6_bit at C1FIFOINT6.B16;
    sbit  RXHALFIE_C1FIFOINT6_bit at C1FIFOINT6.B17;
    sbit  RXFULLIE_C1FIFOINT6_bit at C1FIFOINT6.B18;
    sbit  RXOVFLIE_C1FIFOINT6_bit at C1FIFOINT6.B19;
    sbit  TXEMPTYIE_C1FIFOINT6_bit at C1FIFOINT6.B24;
    sbit  TXHALFIE_C1FIFOINT6_bit at C1FIFOINT6.B25;
    sbit  TXNFULLIE_C1FIFOINT6_bit at C1FIFOINT6.B26;
sfr unsigned long   volatile C1FIFOINT6CLR    absolute 0xBF88B4E4;
sfr unsigned long   volatile C1FIFOINT6SET    absolute 0xBF88B4E8;
sfr unsigned long   volatile C1FIFOINT6INV    absolute 0xBF88B4EC;
sfr atomic unsigned long   volatile C1FIFOUA6        absolute 0xBF88B4F0;
sfr unsigned long   volatile C1FIFOUA6CLR     absolute 0xBF88B4F4;
sfr unsigned long   volatile C1FIFOUA6SET     absolute 0xBF88B4F8;
sfr unsigned long   volatile C1FIFOUA6INV     absolute 0xBF88B4FC;
sfr atomic unsigned long   volatile C1FIFOCI6        absolute 0xBF88B500;
    sbit  CFIFOCI0_C1FIFOCI6_bit at C1FIFOCI6.B0;
    sbit  CFIFOCI1_C1FIFOCI6_bit at C1FIFOCI6.B1;
    sbit  CFIFOCI2_C1FIFOCI6_bit at C1FIFOCI6.B2;
    sbit  CFIFOCI3_C1FIFOCI6_bit at C1FIFOCI6.B3;
    sbit  CFIFOCI4_C1FIFOCI6_bit at C1FIFOCI6.B4;
sfr unsigned long   volatile C1FIFOCI6CLR     absolute 0xBF88B504;
sfr unsigned long   volatile C1FIFOCI6SET     absolute 0xBF88B508;
sfr unsigned long   volatile C1FIFOCI6INV     absolute 0xBF88B50C;
sfr atomic unsigned long   volatile C1FIFOCON7       absolute 0xBF88B510;
    sbit  TXPRI0_C1FIFOCON7_bit at C1FIFOCON7.B0;
    sbit  TXPRI1_C1FIFOCON7_bit at C1FIFOCON7.B1;
    sbit  RTREN_C1FIFOCON7_bit at C1FIFOCON7.B2;
    sbit  TXREQ_C1FIFOCON7_bit at C1FIFOCON7.B3;
    sbit  TXERR_C1FIFOCON7_bit at C1FIFOCON7.B4;
    sbit  TXLARB_C1FIFOCON7_bit at C1FIFOCON7.B5;
    sbit  TXABAT_C1FIFOCON7_bit at C1FIFOCON7.B6;
    sbit  TXEN_C1FIFOCON7_bit at C1FIFOCON7.B7;
    sbit  DONLY_C1FIFOCON7_bit at C1FIFOCON7.B12;
    sbit  UINC_C1FIFOCON7_bit at C1FIFOCON7.B13;
    sbit  FRESET_C1FIFOCON7_bit at C1FIFOCON7.B14;
    sbit  FSIZE0_C1FIFOCON7_bit at C1FIFOCON7.B16;
    sbit  FSIZE1_C1FIFOCON7_bit at C1FIFOCON7.B17;
    sbit  FSIZE2_C1FIFOCON7_bit at C1FIFOCON7.B18;
    sbit  FSIZE3_C1FIFOCON7_bit at C1FIFOCON7.B19;
    sbit  FSIZE4_C1FIFOCON7_bit at C1FIFOCON7.B20;
sfr unsigned long   volatile C1FIFOCON7CLR    absolute 0xBF88B514;
sfr unsigned long   volatile C1FIFOCON7SET    absolute 0xBF88B518;
sfr unsigned long   volatile C1FIFOCON7INV    absolute 0xBF88B51C;
sfr atomic unsigned long   volatile C1FIFOINT7       absolute 0xBF88B520;
    sbit  RXNEMPTYIF_C1FIFOINT7_bit at C1FIFOINT7.B0;
    sbit  RXHALFIF_C1FIFOINT7_bit at C1FIFOINT7.B1;
    sbit  RXFULLIF_C1FIFOINT7_bit at C1FIFOINT7.B2;
    sbit  RXOVFLIF_C1FIFOINT7_bit at C1FIFOINT7.B3;
    sbit  TXEMPTYIF_C1FIFOINT7_bit at C1FIFOINT7.B8;
    sbit  TXHALFIF_C1FIFOINT7_bit at C1FIFOINT7.B9;
    sbit  TXNFULLIF_C1FIFOINT7_bit at C1FIFOINT7.B10;
    sbit  RXNEMPTYIE_C1FIFOINT7_bit at C1FIFOINT7.B16;
    sbit  RXHALFIE_C1FIFOINT7_bit at C1FIFOINT7.B17;
    sbit  RXFULLIE_C1FIFOINT7_bit at C1FIFOINT7.B18;
    sbit  RXOVFLIE_C1FIFOINT7_bit at C1FIFOINT7.B19;
    sbit  TXEMPTYIE_C1FIFOINT7_bit at C1FIFOINT7.B24;
    sbit  TXHALFIE_C1FIFOINT7_bit at C1FIFOINT7.B25;
    sbit  TXNFULLIE_C1FIFOINT7_bit at C1FIFOINT7.B26;
sfr unsigned long   volatile C1FIFOINT7CLR    absolute 0xBF88B524;
sfr unsigned long   volatile C1FIFOINT7SET    absolute 0xBF88B528;
sfr unsigned long   volatile C1FIFOINT7INV    absolute 0xBF88B52C;
sfr atomic unsigned long   volatile C1FIFOUA7        absolute 0xBF88B530;
sfr unsigned long   volatile C1FIFOUA7CLR     absolute 0xBF88B534;
sfr unsigned long   volatile C1FIFOUA7SET     absolute 0xBF88B538;
sfr unsigned long   volatile C1FIFOUA7INV     absolute 0xBF88B53C;
sfr atomic unsigned long   volatile C1FIFOCI7        absolute 0xBF88B540;
    sbit  CFIFOCI0_C1FIFOCI7_bit at C1FIFOCI7.B0;
    sbit  CFIFOCI1_C1FIFOCI7_bit at C1FIFOCI7.B1;
    sbit  CFIFOCI2_C1FIFOCI7_bit at C1FIFOCI7.B2;
    sbit  CFIFOCI3_C1FIFOCI7_bit at C1FIFOCI7.B3;
    sbit  CFIFOCI4_C1FIFOCI7_bit at C1FIFOCI7.B4;
sfr unsigned long   volatile C1FIFOCI7CLR     absolute 0xBF88B544;
sfr unsigned long   volatile C1FIFOCI7SET     absolute 0xBF88B548;
sfr unsigned long   volatile C1FIFOCI7INV     absolute 0xBF88B54C;
sfr atomic unsigned long   volatile C1FIFOCON8       absolute 0xBF88B550;
    sbit  TXPRI0_C1FIFOCON8_bit at C1FIFOCON8.B0;
    sbit  TXPRI1_C1FIFOCON8_bit at C1FIFOCON8.B1;
    sbit  RTREN_C1FIFOCON8_bit at C1FIFOCON8.B2;
    sbit  TXREQ_C1FIFOCON8_bit at C1FIFOCON8.B3;
    sbit  TXERR_C1FIFOCON8_bit at C1FIFOCON8.B4;
    sbit  TXLARB_C1FIFOCON8_bit at C1FIFOCON8.B5;
    sbit  TXABAT_C1FIFOCON8_bit at C1FIFOCON8.B6;
    sbit  TXEN_C1FIFOCON8_bit at C1FIFOCON8.B7;
    sbit  DONLY_C1FIFOCON8_bit at C1FIFOCON8.B12;
    sbit  UINC_C1FIFOCON8_bit at C1FIFOCON8.B13;
    sbit  FRESET_C1FIFOCON8_bit at C1FIFOCON8.B14;
    sbit  FSIZE0_C1FIFOCON8_bit at C1FIFOCON8.B16;
    sbit  FSIZE1_C1FIFOCON8_bit at C1FIFOCON8.B17;
    sbit  FSIZE2_C1FIFOCON8_bit at C1FIFOCON8.B18;
    sbit  FSIZE3_C1FIFOCON8_bit at C1FIFOCON8.B19;
    sbit  FSIZE4_C1FIFOCON8_bit at C1FIFOCON8.B20;
sfr unsigned long   volatile C1FIFOCON8CLR    absolute 0xBF88B554;
sfr unsigned long   volatile C1FIFOCON8SET    absolute 0xBF88B558;
sfr unsigned long   volatile C1FIFOCON8INV    absolute 0xBF88B55C;
sfr atomic unsigned long   volatile C1FIFOINT8       absolute 0xBF88B560;
    sbit  RXNEMPTYIF_C1FIFOINT8_bit at C1FIFOINT8.B0;
    sbit  RXHALFIF_C1FIFOINT8_bit at C1FIFOINT8.B1;
    sbit  RXFULLIF_C1FIFOINT8_bit at C1FIFOINT8.B2;
    sbit  RXOVFLIF_C1FIFOINT8_bit at C1FIFOINT8.B3;
    sbit  TXEMPTYIF_C1FIFOINT8_bit at C1FIFOINT8.B8;
    sbit  TXHALFIF_C1FIFOINT8_bit at C1FIFOINT8.B9;
    sbit  TXNFULLIF_C1FIFOINT8_bit at C1FIFOINT8.B10;
    sbit  RXNEMPTYIE_C1FIFOINT8_bit at C1FIFOINT8.B16;
    sbit  RXHALFIE_C1FIFOINT8_bit at C1FIFOINT8.B17;
    sbit  RXFULLIE_C1FIFOINT8_bit at C1FIFOINT8.B18;
    sbit  RXOVFLIE_C1FIFOINT8_bit at C1FIFOINT8.B19;
    sbit  TXEMPTYIE_C1FIFOINT8_bit at C1FIFOINT8.B24;
    sbit  TXHALFIE_C1FIFOINT8_bit at C1FIFOINT8.B25;
    sbit  TXNFULLIE_C1FIFOINT8_bit at C1FIFOINT8.B26;
sfr unsigned long   volatile C1FIFOINT8CLR    absolute 0xBF88B564;
sfr unsigned long   volatile C1FIFOINT8SET    absolute 0xBF88B568;
sfr unsigned long   volatile C1FIFOINT8INV    absolute 0xBF88B56C;
sfr atomic unsigned long   volatile C1FIFOUA8        absolute 0xBF88B570;
sfr unsigned long   volatile C1FIFOUA8CLR     absolute 0xBF88B574;
sfr unsigned long   volatile C1FIFOUA8SET     absolute 0xBF88B578;
sfr unsigned long   volatile C1FIFOUA8INV     absolute 0xBF88B57C;
sfr atomic unsigned long   volatile C1FIFOCI8        absolute 0xBF88B580;
    sbit  CFIFOCI0_C1FIFOCI8_bit at C1FIFOCI8.B0;
    sbit  CFIFOCI1_C1FIFOCI8_bit at C1FIFOCI8.B1;
    sbit  CFIFOCI2_C1FIFOCI8_bit at C1FIFOCI8.B2;
    sbit  CFIFOCI3_C1FIFOCI8_bit at C1FIFOCI8.B3;
    sbit  CFIFOCI4_C1FIFOCI8_bit at C1FIFOCI8.B4;
sfr unsigned long   volatile C1FIFOCI8CLR     absolute 0xBF88B584;
sfr unsigned long   volatile C1FIFOCI8SET     absolute 0xBF88B588;
sfr unsigned long   volatile C1FIFOCI8INV     absolute 0xBF88B58C;
sfr atomic unsigned long   volatile C1FIFOCON9       absolute 0xBF88B590;
    sbit  TXPRI0_C1FIFOCON9_bit at C1FIFOCON9.B0;
    sbit  TXPRI1_C1FIFOCON9_bit at C1FIFOCON9.B1;
    sbit  RTREN_C1FIFOCON9_bit at C1FIFOCON9.B2;
    sbit  TXREQ_C1FIFOCON9_bit at C1FIFOCON9.B3;
    sbit  TXERR_C1FIFOCON9_bit at C1FIFOCON9.B4;
    sbit  TXLARB_C1FIFOCON9_bit at C1FIFOCON9.B5;
    sbit  TXABAT_C1FIFOCON9_bit at C1FIFOCON9.B6;
    sbit  TXEN_C1FIFOCON9_bit at C1FIFOCON9.B7;
    sbit  DONLY_C1FIFOCON9_bit at C1FIFOCON9.B12;
    sbit  UINC_C1FIFOCON9_bit at C1FIFOCON9.B13;
    sbit  FRESET_C1FIFOCON9_bit at C1FIFOCON9.B14;
    sbit  FSIZE0_C1FIFOCON9_bit at C1FIFOCON9.B16;
    sbit  FSIZE1_C1FIFOCON9_bit at C1FIFOCON9.B17;
    sbit  FSIZE2_C1FIFOCON9_bit at C1FIFOCON9.B18;
    sbit  FSIZE3_C1FIFOCON9_bit at C1FIFOCON9.B19;
    sbit  FSIZE4_C1FIFOCON9_bit at C1FIFOCON9.B20;
sfr unsigned long   volatile C1FIFOCON9CLR    absolute 0xBF88B594;
sfr unsigned long   volatile C1FIFOCON9SET    absolute 0xBF88B598;
sfr unsigned long   volatile C1FIFOCON9INV    absolute 0xBF88B59C;
sfr atomic unsigned long   volatile C1FIFOINT9       absolute 0xBF88B5A0;
    sbit  RXNEMPTYIF_C1FIFOINT9_bit at C1FIFOINT9.B0;
    sbit  RXHALFIF_C1FIFOINT9_bit at C1FIFOINT9.B1;
    sbit  RXFULLIF_C1FIFOINT9_bit at C1FIFOINT9.B2;
    sbit  RXOVFLIF_C1FIFOINT9_bit at C1FIFOINT9.B3;
    sbit  TXEMPTYIF_C1FIFOINT9_bit at C1FIFOINT9.B8;
    sbit  TXHALFIF_C1FIFOINT9_bit at C1FIFOINT9.B9;
    sbit  TXNFULLIF_C1FIFOINT9_bit at C1FIFOINT9.B10;
    sbit  RXNEMPTYIE_C1FIFOINT9_bit at C1FIFOINT9.B16;
    sbit  RXHALFIE_C1FIFOINT9_bit at C1FIFOINT9.B17;
    sbit  RXFULLIE_C1FIFOINT9_bit at C1FIFOINT9.B18;
    sbit  RXOVFLIE_C1FIFOINT9_bit at C1FIFOINT9.B19;
    sbit  TXEMPTYIE_C1FIFOINT9_bit at C1FIFOINT9.B24;
    sbit  TXHALFIE_C1FIFOINT9_bit at C1FIFOINT9.B25;
    sbit  TXNFULLIE_C1FIFOINT9_bit at C1FIFOINT9.B26;
sfr unsigned long   volatile C1FIFOINT9CLR    absolute 0xBF88B5A4;
sfr unsigned long   volatile C1FIFOINT9SET    absolute 0xBF88B5A8;
sfr unsigned long   volatile C1FIFOINT9INV    absolute 0xBF88B5AC;
sfr atomic unsigned long   volatile C1FIFOUA9        absolute 0xBF88B5B0;
sfr unsigned long   volatile C1FIFOUA9CLR     absolute 0xBF88B5B4;
sfr unsigned long   volatile C1FIFOUA9SET     absolute 0xBF88B5B8;
sfr unsigned long   volatile C1FIFOUA9INV     absolute 0xBF88B5BC;
sfr atomic unsigned long   volatile C1FIFOCI9        absolute 0xBF88B5C0;
    sbit  CFIFOCI0_C1FIFOCI9_bit at C1FIFOCI9.B0;
    sbit  CFIFOCI1_C1FIFOCI9_bit at C1FIFOCI9.B1;
    sbit  CFIFOCI2_C1FIFOCI9_bit at C1FIFOCI9.B2;
    sbit  CFIFOCI3_C1FIFOCI9_bit at C1FIFOCI9.B3;
    sbit  CFIFOCI4_C1FIFOCI9_bit at C1FIFOCI9.B4;
sfr unsigned long   volatile C1FIFOCI9CLR     absolute 0xBF88B5C4;
sfr unsigned long   volatile C1FIFOCI9SET     absolute 0xBF88B5C8;
sfr unsigned long   volatile C1FIFOCI9INV     absolute 0xBF88B5CC;
sfr atomic unsigned long   volatile C1FIFOCON10      absolute 0xBF88B5D0;
    sbit  TXPRI0_C1FIFOCON10_bit at C1FIFOCON10.B0;
    sbit  TXPRI1_C1FIFOCON10_bit at C1FIFOCON10.B1;
    sbit  RTREN_C1FIFOCON10_bit at C1FIFOCON10.B2;
    sbit  TXREQ_C1FIFOCON10_bit at C1FIFOCON10.B3;
    sbit  TXERR_C1FIFOCON10_bit at C1FIFOCON10.B4;
    sbit  TXLARB_C1FIFOCON10_bit at C1FIFOCON10.B5;
    sbit  TXABAT_C1FIFOCON10_bit at C1FIFOCON10.B6;
    sbit  TXEN_C1FIFOCON10_bit at C1FIFOCON10.B7;
    sbit  DONLY_C1FIFOCON10_bit at C1FIFOCON10.B12;
    sbit  UINC_C1FIFOCON10_bit at C1FIFOCON10.B13;
    sbit  FRESET_C1FIFOCON10_bit at C1FIFOCON10.B14;
    sbit  FSIZE0_C1FIFOCON10_bit at C1FIFOCON10.B16;
    sbit  FSIZE1_C1FIFOCON10_bit at C1FIFOCON10.B17;
    sbit  FSIZE2_C1FIFOCON10_bit at C1FIFOCON10.B18;
    sbit  FSIZE3_C1FIFOCON10_bit at C1FIFOCON10.B19;
    sbit  FSIZE4_C1FIFOCON10_bit at C1FIFOCON10.B20;
sfr unsigned long   volatile C1FIFOCON10CLR   absolute 0xBF88B5D4;
sfr unsigned long   volatile C1FIFOCON10SET   absolute 0xBF88B5D8;
sfr unsigned long   volatile C1FIFOCON10INV   absolute 0xBF88B5DC;
sfr atomic unsigned long   volatile C1FIFOINT10      absolute 0xBF88B5E0;
    sbit  RXNEMPTYIF_C1FIFOINT10_bit at C1FIFOINT10.B0;
    sbit  RXHALFIF_C1FIFOINT10_bit at C1FIFOINT10.B1;
    sbit  RXFULLIF_C1FIFOINT10_bit at C1FIFOINT10.B2;
    sbit  RXOVFLIF_C1FIFOINT10_bit at C1FIFOINT10.B3;
    sbit  TXEMPTYIF_C1FIFOINT10_bit at C1FIFOINT10.B8;
    sbit  TXHALFIF_C1FIFOINT10_bit at C1FIFOINT10.B9;
    sbit  TXNFULLIF_C1FIFOINT10_bit at C1FIFOINT10.B10;
    sbit  RXNEMPTYIE_C1FIFOINT10_bit at C1FIFOINT10.B16;
    sbit  RXHALFIE_C1FIFOINT10_bit at C1FIFOINT10.B17;
    sbit  RXFULLIE_C1FIFOINT10_bit at C1FIFOINT10.B18;
    sbit  RXOVFLIE_C1FIFOINT10_bit at C1FIFOINT10.B19;
    sbit  TXEMPTYIE_C1FIFOINT10_bit at C1FIFOINT10.B24;
    sbit  TXHALFIE_C1FIFOINT10_bit at C1FIFOINT10.B25;
    sbit  TXNFULLIE_C1FIFOINT10_bit at C1FIFOINT10.B26;
sfr unsigned long   volatile C1FIFOINT10CLR   absolute 0xBF88B5E4;
sfr unsigned long   volatile C1FIFOINT10SET   absolute 0xBF88B5E8;
sfr unsigned long   volatile C1FIFOINT10INV   absolute 0xBF88B5EC;
sfr atomic unsigned long   volatile C1FIFOUA10       absolute 0xBF88B5F0;
sfr unsigned long   volatile C1FIFOUA10CLR    absolute 0xBF88B5F4;
sfr unsigned long   volatile C1FIFOUA10SET    absolute 0xBF88B5F8;
sfr unsigned long   volatile C1FIFOUA10INV    absolute 0xBF88B5FC;
sfr atomic unsigned long   volatile C1FIFOCI10       absolute 0xBF88B600;
    sbit  CFIFOCI0_C1FIFOCI10_bit at C1FIFOCI10.B0;
    sbit  CFIFOCI1_C1FIFOCI10_bit at C1FIFOCI10.B1;
    sbit  CFIFOCI2_C1FIFOCI10_bit at C1FIFOCI10.B2;
    sbit  CFIFOCI3_C1FIFOCI10_bit at C1FIFOCI10.B3;
    sbit  CFIFOCI4_C1FIFOCI10_bit at C1FIFOCI10.B4;
sfr unsigned long   volatile C1FIFOCI10CLR    absolute 0xBF88B604;
sfr unsigned long   volatile C1FIFOCI10SET    absolute 0xBF88B608;
sfr unsigned long   volatile C1FIFOCI10INV    absolute 0xBF88B60C;
sfr atomic unsigned long   volatile C1FIFOCON11      absolute 0xBF88B610;
    sbit  TXPRI0_C1FIFOCON11_bit at C1FIFOCON11.B0;
    sbit  TXPRI1_C1FIFOCON11_bit at C1FIFOCON11.B1;
    sbit  RTREN_C1FIFOCON11_bit at C1FIFOCON11.B2;
    sbit  TXREQ_C1FIFOCON11_bit at C1FIFOCON11.B3;
    sbit  TXERR_C1FIFOCON11_bit at C1FIFOCON11.B4;
    sbit  TXLARB_C1FIFOCON11_bit at C1FIFOCON11.B5;
    sbit  TXABAT_C1FIFOCON11_bit at C1FIFOCON11.B6;
    sbit  TXEN_C1FIFOCON11_bit at C1FIFOCON11.B7;
    sbit  DONLY_C1FIFOCON11_bit at C1FIFOCON11.B12;
    sbit  UINC_C1FIFOCON11_bit at C1FIFOCON11.B13;
    sbit  FRESET_C1FIFOCON11_bit at C1FIFOCON11.B14;
    sbit  FSIZE0_C1FIFOCON11_bit at C1FIFOCON11.B16;
    sbit  FSIZE1_C1FIFOCON11_bit at C1FIFOCON11.B17;
    sbit  FSIZE2_C1FIFOCON11_bit at C1FIFOCON11.B18;
    sbit  FSIZE3_C1FIFOCON11_bit at C1FIFOCON11.B19;
    sbit  FSIZE4_C1FIFOCON11_bit at C1FIFOCON11.B20;
sfr unsigned long   volatile C1FIFOCON11CLR   absolute 0xBF88B614;
sfr unsigned long   volatile C1FIFOCON11SET   absolute 0xBF88B618;
sfr unsigned long   volatile C1FIFOCON11INV   absolute 0xBF88B61C;
sfr atomic unsigned long   volatile C1FIFOINT11      absolute 0xBF88B620;
    sbit  RXNEMPTYIF_C1FIFOINT11_bit at C1FIFOINT11.B0;
    sbit  RXHALFIF_C1FIFOINT11_bit at C1FIFOINT11.B1;
    sbit  RXFULLIF_C1FIFOINT11_bit at C1FIFOINT11.B2;
    sbit  RXOVFLIF_C1FIFOINT11_bit at C1FIFOINT11.B3;
    sbit  TXEMPTYIF_C1FIFOINT11_bit at C1FIFOINT11.B8;
    sbit  TXHALFIF_C1FIFOINT11_bit at C1FIFOINT11.B9;
    sbit  TXNFULLIF_C1FIFOINT11_bit at C1FIFOINT11.B10;
    sbit  RXNEMPTYIE_C1FIFOINT11_bit at C1FIFOINT11.B16;
    sbit  RXHALFIE_C1FIFOINT11_bit at C1FIFOINT11.B17;
    sbit  RXFULLIE_C1FIFOINT11_bit at C1FIFOINT11.B18;
    sbit  RXOVFLIE_C1FIFOINT11_bit at C1FIFOINT11.B19;
    sbit  TXEMPTYIE_C1FIFOINT11_bit at C1FIFOINT11.B24;
    sbit  TXHALFIE_C1FIFOINT11_bit at C1FIFOINT11.B25;
    sbit  TXNFULLIE_C1FIFOINT11_bit at C1FIFOINT11.B26;
sfr unsigned long   volatile C1FIFOINT11CLR   absolute 0xBF88B624;
sfr unsigned long   volatile C1FIFOINT11SET   absolute 0xBF88B628;
sfr unsigned long   volatile C1FIFOINT11INV   absolute 0xBF88B62C;
sfr atomic unsigned long   volatile C1FIFOUA11       absolute 0xBF88B630;
sfr unsigned long   volatile C1FIFOUA11CLR    absolute 0xBF88B634;
sfr unsigned long   volatile C1FIFOUA11SET    absolute 0xBF88B638;
sfr unsigned long   volatile C1FIFOUA11INV    absolute 0xBF88B63C;
sfr atomic unsigned long   volatile C1FIFOCI11       absolute 0xBF88B640;
    sbit  CFIFOCI0_C1FIFOCI11_bit at C1FIFOCI11.B0;
    sbit  CFIFOCI1_C1FIFOCI11_bit at C1FIFOCI11.B1;
    sbit  CFIFOCI2_C1FIFOCI11_bit at C1FIFOCI11.B2;
    sbit  CFIFOCI3_C1FIFOCI11_bit at C1FIFOCI11.B3;
    sbit  CFIFOCI4_C1FIFOCI11_bit at C1FIFOCI11.B4;
sfr unsigned long   volatile C1FIFOCI11CLR    absolute 0xBF88B644;
sfr unsigned long   volatile C1FIFOCI11SET    absolute 0xBF88B648;
sfr unsigned long   volatile C1FIFOCI11INV    absolute 0xBF88B64C;
sfr atomic unsigned long   volatile C1FIFOCON12      absolute 0xBF88B650;
    sbit  TXPRI0_C1FIFOCON12_bit at C1FIFOCON12.B0;
    sbit  TXPRI1_C1FIFOCON12_bit at C1FIFOCON12.B1;
    sbit  RTREN_C1FIFOCON12_bit at C1FIFOCON12.B2;
    sbit  TXREQ_C1FIFOCON12_bit at C1FIFOCON12.B3;
    sbit  TXERR_C1FIFOCON12_bit at C1FIFOCON12.B4;
    sbit  TXLARB_C1FIFOCON12_bit at C1FIFOCON12.B5;
    sbit  TXABAT_C1FIFOCON12_bit at C1FIFOCON12.B6;
    sbit  TXEN_C1FIFOCON12_bit at C1FIFOCON12.B7;
    sbit  DONLY_C1FIFOCON12_bit at C1FIFOCON12.B12;
    sbit  UINC_C1FIFOCON12_bit at C1FIFOCON12.B13;
    sbit  FRESET_C1FIFOCON12_bit at C1FIFOCON12.B14;
    sbit  FSIZE0_C1FIFOCON12_bit at C1FIFOCON12.B16;
    sbit  FSIZE1_C1FIFOCON12_bit at C1FIFOCON12.B17;
    sbit  FSIZE2_C1FIFOCON12_bit at C1FIFOCON12.B18;
    sbit  FSIZE3_C1FIFOCON12_bit at C1FIFOCON12.B19;
    sbit  FSIZE4_C1FIFOCON12_bit at C1FIFOCON12.B20;
sfr unsigned long   volatile C1FIFOCON12CLR   absolute 0xBF88B654;
sfr unsigned long   volatile C1FIFOCON12SET   absolute 0xBF88B658;
sfr unsigned long   volatile C1FIFOCON12INV   absolute 0xBF88B65C;
sfr atomic unsigned long   volatile C1FIFOINT12      absolute 0xBF88B660;
    sbit  RXNEMPTYIF_C1FIFOINT12_bit at C1FIFOINT12.B0;
    sbit  RXHALFIF_C1FIFOINT12_bit at C1FIFOINT12.B1;
    sbit  RXFULLIF_C1FIFOINT12_bit at C1FIFOINT12.B2;
    sbit  RXOVFLIF_C1FIFOINT12_bit at C1FIFOINT12.B3;
    sbit  TXEMPTYIF_C1FIFOINT12_bit at C1FIFOINT12.B8;
    sbit  TXHALFIF_C1FIFOINT12_bit at C1FIFOINT12.B9;
    sbit  TXNFULLIF_C1FIFOINT12_bit at C1FIFOINT12.B10;
    sbit  RXNEMPTYIE_C1FIFOINT12_bit at C1FIFOINT12.B16;
    sbit  RXHALFIE_C1FIFOINT12_bit at C1FIFOINT12.B17;
    sbit  RXFULLIE_C1FIFOINT12_bit at C1FIFOINT12.B18;
    sbit  RXOVFLIE_C1FIFOINT12_bit at C1FIFOINT12.B19;
    sbit  TXEMPTYIE_C1FIFOINT12_bit at C1FIFOINT12.B24;
    sbit  TXHALFIE_C1FIFOINT12_bit at C1FIFOINT12.B25;
    sbit  TXNFULLIE_C1FIFOINT12_bit at C1FIFOINT12.B26;
sfr unsigned long   volatile C1FIFOINT12CLR   absolute 0xBF88B664;
sfr unsigned long   volatile C1FIFOINT12SET   absolute 0xBF88B668;
sfr unsigned long   volatile C1FIFOINT12INV   absolute 0xBF88B66C;
sfr atomic unsigned long   volatile C1FIFOUA12       absolute 0xBF88B670;
sfr unsigned long   volatile C1FIFOUA12CLR    absolute 0xBF88B674;
sfr unsigned long   volatile C1FIFOUA12SET    absolute 0xBF88B678;
sfr unsigned long   volatile C1FIFOUA12INV    absolute 0xBF88B67C;
sfr atomic unsigned long   volatile C1FIFOCI12       absolute 0xBF88B680;
    sbit  CFIFOCI0_C1FIFOCI12_bit at C1FIFOCI12.B0;
    sbit  CFIFOCI1_C1FIFOCI12_bit at C1FIFOCI12.B1;
    sbit  CFIFOCI2_C1FIFOCI12_bit at C1FIFOCI12.B2;
    sbit  CFIFOCI3_C1FIFOCI12_bit at C1FIFOCI12.B3;
    sbit  CFIFOCI4_C1FIFOCI12_bit at C1FIFOCI12.B4;
sfr unsigned long   volatile C1FIFOCI12CLR    absolute 0xBF88B684;
sfr unsigned long   volatile C1FIFOCI12SET    absolute 0xBF88B688;
sfr unsigned long   volatile C1FIFOCI12INV    absolute 0xBF88B68C;
sfr atomic unsigned long   volatile C1FIFOCON13      absolute 0xBF88B690;
    sbit  TXPRI0_C1FIFOCON13_bit at C1FIFOCON13.B0;
    sbit  TXPRI1_C1FIFOCON13_bit at C1FIFOCON13.B1;
    sbit  RTREN_C1FIFOCON13_bit at C1FIFOCON13.B2;
    sbit  TXREQ_C1FIFOCON13_bit at C1FIFOCON13.B3;
    sbit  TXERR_C1FIFOCON13_bit at C1FIFOCON13.B4;
    sbit  TXLARB_C1FIFOCON13_bit at C1FIFOCON13.B5;
    sbit  TXABAT_C1FIFOCON13_bit at C1FIFOCON13.B6;
    sbit  TXEN_C1FIFOCON13_bit at C1FIFOCON13.B7;
    sbit  DONLY_C1FIFOCON13_bit at C1FIFOCON13.B12;
    sbit  UINC_C1FIFOCON13_bit at C1FIFOCON13.B13;
    sbit  FRESET_C1FIFOCON13_bit at C1FIFOCON13.B14;
    sbit  FSIZE0_C1FIFOCON13_bit at C1FIFOCON13.B16;
    sbit  FSIZE1_C1FIFOCON13_bit at C1FIFOCON13.B17;
    sbit  FSIZE2_C1FIFOCON13_bit at C1FIFOCON13.B18;
    sbit  FSIZE3_C1FIFOCON13_bit at C1FIFOCON13.B19;
    sbit  FSIZE4_C1FIFOCON13_bit at C1FIFOCON13.B20;
sfr unsigned long   volatile C1FIFOCON13CLR   absolute 0xBF88B694;
sfr unsigned long   volatile C1FIFOCON13SET   absolute 0xBF88B698;
sfr unsigned long   volatile C1FIFOCON13INV   absolute 0xBF88B69C;
sfr atomic unsigned long   volatile C1FIFOINT13      absolute 0xBF88B6A0;
    sbit  RXNEMPTYIF_C1FIFOINT13_bit at C1FIFOINT13.B0;
    sbit  RXHALFIF_C1FIFOINT13_bit at C1FIFOINT13.B1;
    sbit  RXFULLIF_C1FIFOINT13_bit at C1FIFOINT13.B2;
    sbit  RXOVFLIF_C1FIFOINT13_bit at C1FIFOINT13.B3;
    sbit  TXEMPTYIF_C1FIFOINT13_bit at C1FIFOINT13.B8;
    sbit  TXHALFIF_C1FIFOINT13_bit at C1FIFOINT13.B9;
    sbit  TXNFULLIF_C1FIFOINT13_bit at C1FIFOINT13.B10;
    sbit  RXNEMPTYIE_C1FIFOINT13_bit at C1FIFOINT13.B16;
    sbit  RXHALFIE_C1FIFOINT13_bit at C1FIFOINT13.B17;
    sbit  RXFULLIE_C1FIFOINT13_bit at C1FIFOINT13.B18;
    sbit  RXOVFLIE_C1FIFOINT13_bit at C1FIFOINT13.B19;
    sbit  TXEMPTYIE_C1FIFOINT13_bit at C1FIFOINT13.B24;
    sbit  TXHALFIE_C1FIFOINT13_bit at C1FIFOINT13.B25;
    sbit  TXNFULLIE_C1FIFOINT13_bit at C1FIFOINT13.B26;
sfr unsigned long   volatile C1FIFOINT13CLR   absolute 0xBF88B6A4;
sfr unsigned long   volatile C1FIFOINT13SET   absolute 0xBF88B6A8;
sfr unsigned long   volatile C1FIFOINT13INV   absolute 0xBF88B6AC;
sfr atomic unsigned long   volatile C1FIFOUA13       absolute 0xBF88B6B0;
sfr unsigned long   volatile C1FIFOUA13CLR    absolute 0xBF88B6B4;
sfr unsigned long   volatile C1FIFOUA13SET    absolute 0xBF88B6B8;
sfr unsigned long   volatile C1FIFOUA13INV    absolute 0xBF88B6BC;
sfr atomic unsigned long   volatile C1FIFOCI13       absolute 0xBF88B6C0;
    sbit  CFIFOCI0_C1FIFOCI13_bit at C1FIFOCI13.B0;
    sbit  CFIFOCI1_C1FIFOCI13_bit at C1FIFOCI13.B1;
    sbit  CFIFOCI2_C1FIFOCI13_bit at C1FIFOCI13.B2;
    sbit  CFIFOCI3_C1FIFOCI13_bit at C1FIFOCI13.B3;
    sbit  CFIFOCI4_C1FIFOCI13_bit at C1FIFOCI13.B4;
sfr unsigned long   volatile C1FIFOCI13CLR    absolute 0xBF88B6C4;
sfr unsigned long   volatile C1FIFOCI13SET    absolute 0xBF88B6C8;
sfr unsigned long   volatile C1FIFOCI13INV    absolute 0xBF88B6CC;
sfr atomic unsigned long   volatile C1FIFOCON14      absolute 0xBF88B6D0;
    sbit  TXPRI0_C1FIFOCON14_bit at C1FIFOCON14.B0;
    sbit  TXPRI1_C1FIFOCON14_bit at C1FIFOCON14.B1;
    sbit  RTREN_C1FIFOCON14_bit at C1FIFOCON14.B2;
    sbit  TXREQ_C1FIFOCON14_bit at C1FIFOCON14.B3;
    sbit  TXERR_C1FIFOCON14_bit at C1FIFOCON14.B4;
    sbit  TXLARB_C1FIFOCON14_bit at C1FIFOCON14.B5;
    sbit  TXABAT_C1FIFOCON14_bit at C1FIFOCON14.B6;
    sbit  TXEN_C1FIFOCON14_bit at C1FIFOCON14.B7;
    sbit  DONLY_C1FIFOCON14_bit at C1FIFOCON14.B12;
    sbit  UINC_C1FIFOCON14_bit at C1FIFOCON14.B13;
    sbit  FRESET_C1FIFOCON14_bit at C1FIFOCON14.B14;
    sbit  FSIZE0_C1FIFOCON14_bit at C1FIFOCON14.B16;
    sbit  FSIZE1_C1FIFOCON14_bit at C1FIFOCON14.B17;
    sbit  FSIZE2_C1FIFOCON14_bit at C1FIFOCON14.B18;
    sbit  FSIZE3_C1FIFOCON14_bit at C1FIFOCON14.B19;
    sbit  FSIZE4_C1FIFOCON14_bit at C1FIFOCON14.B20;
sfr unsigned long   volatile C1FIFOCON14CLR   absolute 0xBF88B6D4;
sfr unsigned long   volatile C1FIFOCON14SET   absolute 0xBF88B6D8;
sfr unsigned long   volatile C1FIFOCON14INV   absolute 0xBF88B6DC;
sfr atomic unsigned long   volatile C1FIFOINT14      absolute 0xBF88B6E0;
    sbit  RXNEMPTYIF_C1FIFOINT14_bit at C1FIFOINT14.B0;
    sbit  RXHALFIF_C1FIFOINT14_bit at C1FIFOINT14.B1;
    sbit  RXFULLIF_C1FIFOINT14_bit at C1FIFOINT14.B2;
    sbit  RXOVFLIF_C1FIFOINT14_bit at C1FIFOINT14.B3;
    sbit  TXEMPTYIF_C1FIFOINT14_bit at C1FIFOINT14.B8;
    sbit  TXHALFIF_C1FIFOINT14_bit at C1FIFOINT14.B9;
    sbit  TXNFULLIF_C1FIFOINT14_bit at C1FIFOINT14.B10;
    sbit  RXNEMPTYIE_C1FIFOINT14_bit at C1FIFOINT14.B16;
    sbit  RXHALFIE_C1FIFOINT14_bit at C1FIFOINT14.B17;
    sbit  RXFULLIE_C1FIFOINT14_bit at C1FIFOINT14.B18;
    sbit  RXOVFLIE_C1FIFOINT14_bit at C1FIFOINT14.B19;
    sbit  TXEMPTYIE_C1FIFOINT14_bit at C1FIFOINT14.B24;
    sbit  TXHALFIE_C1FIFOINT14_bit at C1FIFOINT14.B25;
    sbit  TXNFULLIE_C1FIFOINT14_bit at C1FIFOINT14.B26;
sfr unsigned long   volatile C1FIFOINT14CLR   absolute 0xBF88B6E4;
sfr unsigned long   volatile C1FIFOINT14SET   absolute 0xBF88B6E8;
sfr unsigned long   volatile C1FIFOINT14INV   absolute 0xBF88B6EC;
sfr atomic unsigned long   volatile C1FIFOUA14       absolute 0xBF88B6F0;
sfr unsigned long   volatile C1FIFOUA14CLR    absolute 0xBF88B6F4;
sfr unsigned long   volatile C1FIFOUA14SET    absolute 0xBF88B6F8;
sfr unsigned long   volatile C1FIFOUA14INV    absolute 0xBF88B6FC;
sfr atomic unsigned long   volatile C1FIFOCI14       absolute 0xBF88B700;
    sbit  CFIFOCI0_C1FIFOCI14_bit at C1FIFOCI14.B0;
    sbit  CFIFOCI1_C1FIFOCI14_bit at C1FIFOCI14.B1;
    sbit  CFIFOCI2_C1FIFOCI14_bit at C1FIFOCI14.B2;
    sbit  CFIFOCI3_C1FIFOCI14_bit at C1FIFOCI14.B3;
    sbit  CFIFOCI4_C1FIFOCI14_bit at C1FIFOCI14.B4;
sfr unsigned long   volatile C1FIFOCI14CLR    absolute 0xBF88B704;
sfr unsigned long   volatile C1FIFOCI14SET    absolute 0xBF88B708;
sfr unsigned long   volatile C1FIFOCI14INV    absolute 0xBF88B70C;
sfr atomic unsigned long   volatile C1FIFOCON15      absolute 0xBF88B710;
    sbit  TXPRI0_C1FIFOCON15_bit at C1FIFOCON15.B0;
    sbit  TXPRI1_C1FIFOCON15_bit at C1FIFOCON15.B1;
    sbit  RTREN_C1FIFOCON15_bit at C1FIFOCON15.B2;
    sbit  TXREQ_C1FIFOCON15_bit at C1FIFOCON15.B3;
    sbit  TXERR_C1FIFOCON15_bit at C1FIFOCON15.B4;
    sbit  TXLARB_C1FIFOCON15_bit at C1FIFOCON15.B5;
    sbit  TXABAT_C1FIFOCON15_bit at C1FIFOCON15.B6;
    sbit  TXEN_C1FIFOCON15_bit at C1FIFOCON15.B7;
    sbit  DONLY_C1FIFOCON15_bit at C1FIFOCON15.B12;
    sbit  UINC_C1FIFOCON15_bit at C1FIFOCON15.B13;
    sbit  FRESET_C1FIFOCON15_bit at C1FIFOCON15.B14;
    sbit  FSIZE0_C1FIFOCON15_bit at C1FIFOCON15.B16;
    sbit  FSIZE1_C1FIFOCON15_bit at C1FIFOCON15.B17;
    sbit  FSIZE2_C1FIFOCON15_bit at C1FIFOCON15.B18;
    sbit  FSIZE3_C1FIFOCON15_bit at C1FIFOCON15.B19;
    sbit  FSIZE4_C1FIFOCON15_bit at C1FIFOCON15.B20;
sfr unsigned long   volatile C1FIFOCON15CLR   absolute 0xBF88B714;
sfr unsigned long   volatile C1FIFOCON15SET   absolute 0xBF88B718;
sfr unsigned long   volatile C1FIFOCON15INV   absolute 0xBF88B71C;
sfr atomic unsigned long   volatile C1FIFOINT15      absolute 0xBF88B720;
    sbit  RXNEMPTYIF_C1FIFOINT15_bit at C1FIFOINT15.B0;
    sbit  RXHALFIF_C1FIFOINT15_bit at C1FIFOINT15.B1;
    sbit  RXFULLIF_C1FIFOINT15_bit at C1FIFOINT15.B2;
    sbit  RXOVFLIF_C1FIFOINT15_bit at C1FIFOINT15.B3;
    sbit  TXEMPTYIF_C1FIFOINT15_bit at C1FIFOINT15.B8;
    sbit  TXHALFIF_C1FIFOINT15_bit at C1FIFOINT15.B9;
    sbit  TXNFULLIF_C1FIFOINT15_bit at C1FIFOINT15.B10;
    sbit  RXNEMPTYIE_C1FIFOINT15_bit at C1FIFOINT15.B16;
    sbit  RXHALFIE_C1FIFOINT15_bit at C1FIFOINT15.B17;
    sbit  RXFULLIE_C1FIFOINT15_bit at C1FIFOINT15.B18;
    sbit  RXOVFLIE_C1FIFOINT15_bit at C1FIFOINT15.B19;
    sbit  TXEMPTYIE_C1FIFOINT15_bit at C1FIFOINT15.B24;
    sbit  TXHALFIE_C1FIFOINT15_bit at C1FIFOINT15.B25;
    sbit  TXNFULLIE_C1FIFOINT15_bit at C1FIFOINT15.B26;
sfr unsigned long   volatile C1FIFOINT15CLR   absolute 0xBF88B724;
sfr unsigned long   volatile C1FIFOINT15SET   absolute 0xBF88B728;
sfr unsigned long   volatile C1FIFOINT15INV   absolute 0xBF88B72C;
sfr atomic unsigned long   volatile C1FIFOUA15       absolute 0xBF88B730;
sfr unsigned long   volatile C1FIFOUA15CLR    absolute 0xBF88B734;
sfr unsigned long   volatile C1FIFOUA15SET    absolute 0xBF88B738;
sfr unsigned long   volatile C1FIFOUA15INV    absolute 0xBF88B73C;
sfr atomic unsigned long   volatile C1FIFOCI15       absolute 0xBF88B740;
    sbit  CFIFOCI0_C1FIFOCI15_bit at C1FIFOCI15.B0;
    sbit  CFIFOCI1_C1FIFOCI15_bit at C1FIFOCI15.B1;
    sbit  CFIFOCI2_C1FIFOCI15_bit at C1FIFOCI15.B2;
    sbit  CFIFOCI3_C1FIFOCI15_bit at C1FIFOCI15.B3;
    sbit  CFIFOCI4_C1FIFOCI15_bit at C1FIFOCI15.B4;
sfr unsigned long   volatile C1FIFOCI15CLR    absolute 0xBF88B744;
sfr unsigned long   volatile C1FIFOCI15SET    absolute 0xBF88B748;
sfr unsigned long   volatile C1FIFOCI15INV    absolute 0xBF88B74C;
sfr atomic unsigned long   volatile C1FIFOCON16      absolute 0xBF88B750;
    sbit  TXPRI0_C1FIFOCON16_bit at C1FIFOCON16.B0;
    sbit  TXPRI1_C1FIFOCON16_bit at C1FIFOCON16.B1;
    sbit  RTREN_C1FIFOCON16_bit at C1FIFOCON16.B2;
    sbit  TXREQ_C1FIFOCON16_bit at C1FIFOCON16.B3;
    sbit  TXERR_C1FIFOCON16_bit at C1FIFOCON16.B4;
    sbit  TXLARB_C1FIFOCON16_bit at C1FIFOCON16.B5;
    sbit  TXABAT_C1FIFOCON16_bit at C1FIFOCON16.B6;
    sbit  TXEN_C1FIFOCON16_bit at C1FIFOCON16.B7;
    sbit  DONLY_C1FIFOCON16_bit at C1FIFOCON16.B12;
    sbit  UINC_C1FIFOCON16_bit at C1FIFOCON16.B13;
    sbit  FRESET_C1FIFOCON16_bit at C1FIFOCON16.B14;
    sbit  FSIZE0_C1FIFOCON16_bit at C1FIFOCON16.B16;
    sbit  FSIZE1_C1FIFOCON16_bit at C1FIFOCON16.B17;
    sbit  FSIZE2_C1FIFOCON16_bit at C1FIFOCON16.B18;
    sbit  FSIZE3_C1FIFOCON16_bit at C1FIFOCON16.B19;
    sbit  FSIZE4_C1FIFOCON16_bit at C1FIFOCON16.B20;
sfr unsigned long   volatile C1FIFOCON16CLR   absolute 0xBF88B754;
sfr unsigned long   volatile C1FIFOCON16SET   absolute 0xBF88B758;
sfr unsigned long   volatile C1FIFOCON16INV   absolute 0xBF88B75C;
sfr atomic unsigned long   volatile C1FIFOINT16      absolute 0xBF88B760;
    sbit  RXNEMPTYIF_C1FIFOINT16_bit at C1FIFOINT16.B0;
    sbit  RXHALFIF_C1FIFOINT16_bit at C1FIFOINT16.B1;
    sbit  RXFULLIF_C1FIFOINT16_bit at C1FIFOINT16.B2;
    sbit  RXOVFLIF_C1FIFOINT16_bit at C1FIFOINT16.B3;
    sbit  TXEMPTYIF_C1FIFOINT16_bit at C1FIFOINT16.B8;
    sbit  TXHALFIF_C1FIFOINT16_bit at C1FIFOINT16.B9;
    sbit  TXNFULLIF_C1FIFOINT16_bit at C1FIFOINT16.B10;
    sbit  RXNEMPTYIE_C1FIFOINT16_bit at C1FIFOINT16.B16;
    sbit  RXHALFIE_C1FIFOINT16_bit at C1FIFOINT16.B17;
    sbit  RXFULLIE_C1FIFOINT16_bit at C1FIFOINT16.B18;
    sbit  RXOVFLIE_C1FIFOINT16_bit at C1FIFOINT16.B19;
    sbit  TXEMPTYIE_C1FIFOINT16_bit at C1FIFOINT16.B24;
    sbit  TXHALFIE_C1FIFOINT16_bit at C1FIFOINT16.B25;
    sbit  TXNFULLIE_C1FIFOINT16_bit at C1FIFOINT16.B26;
sfr unsigned long   volatile C1FIFOINT16CLR   absolute 0xBF88B764;
sfr unsigned long   volatile C1FIFOINT16SET   absolute 0xBF88B768;
sfr unsigned long   volatile C1FIFOINT16INV   absolute 0xBF88B76C;
sfr atomic unsigned long   volatile C1FIFOUA16       absolute 0xBF88B770;
sfr unsigned long   volatile C1FIFOUA16CLR    absolute 0xBF88B774;
sfr unsigned long   volatile C1FIFOUA16SET    absolute 0xBF88B778;
sfr unsigned long   volatile C1FIFOUA16INV    absolute 0xBF88B77C;
sfr atomic unsigned long   volatile C1FIFOCI16       absolute 0xBF88B780;
    sbit  CFIFOCI0_C1FIFOCI16_bit at C1FIFOCI16.B0;
    sbit  CFIFOCI1_C1FIFOCI16_bit at C1FIFOCI16.B1;
    sbit  CFIFOCI2_C1FIFOCI16_bit at C1FIFOCI16.B2;
    sbit  CFIFOCI3_C1FIFOCI16_bit at C1FIFOCI16.B3;
    sbit  CFIFOCI4_C1FIFOCI16_bit at C1FIFOCI16.B4;
sfr unsigned long   volatile C1FIFOCI16CLR    absolute 0xBF88B784;
sfr unsigned long   volatile C1FIFOCI16SET    absolute 0xBF88B788;
sfr unsigned long   volatile C1FIFOCI16INV    absolute 0xBF88B78C;
sfr atomic unsigned long   volatile C1FIFOCON17      absolute 0xBF88B790;
    sbit  TXPRI0_C1FIFOCON17_bit at C1FIFOCON17.B0;
    sbit  TXPRI1_C1FIFOCON17_bit at C1FIFOCON17.B1;
    sbit  RTREN_C1FIFOCON17_bit at C1FIFOCON17.B2;
    sbit  TXREQ_C1FIFOCON17_bit at C1FIFOCON17.B3;
    sbit  TXERR_C1FIFOCON17_bit at C1FIFOCON17.B4;
    sbit  TXLARB_C1FIFOCON17_bit at C1FIFOCON17.B5;
    sbit  TXABAT_C1FIFOCON17_bit at C1FIFOCON17.B6;
    sbit  TXEN_C1FIFOCON17_bit at C1FIFOCON17.B7;
    sbit  DONLY_C1FIFOCON17_bit at C1FIFOCON17.B12;
    sbit  UINC_C1FIFOCON17_bit at C1FIFOCON17.B13;
    sbit  FRESET_C1FIFOCON17_bit at C1FIFOCON17.B14;
    sbit  FSIZE0_C1FIFOCON17_bit at C1FIFOCON17.B16;
    sbit  FSIZE1_C1FIFOCON17_bit at C1FIFOCON17.B17;
    sbit  FSIZE2_C1FIFOCON17_bit at C1FIFOCON17.B18;
    sbit  FSIZE3_C1FIFOCON17_bit at C1FIFOCON17.B19;
    sbit  FSIZE4_C1FIFOCON17_bit at C1FIFOCON17.B20;
sfr unsigned long   volatile C1FIFOCON17CLR   absolute 0xBF88B794;
sfr unsigned long   volatile C1FIFOCON17SET   absolute 0xBF88B798;
sfr unsigned long   volatile C1FIFOCON17INV   absolute 0xBF88B79C;
sfr atomic unsigned long   volatile C1FIFOINT17      absolute 0xBF88B7A0;
    sbit  RXNEMPTYIF_C1FIFOINT17_bit at C1FIFOINT17.B0;
    sbit  RXHALFIF_C1FIFOINT17_bit at C1FIFOINT17.B1;
    sbit  RXFULLIF_C1FIFOINT17_bit at C1FIFOINT17.B2;
    sbit  RXOVFLIF_C1FIFOINT17_bit at C1FIFOINT17.B3;
    sbit  TXEMPTYIF_C1FIFOINT17_bit at C1FIFOINT17.B8;
    sbit  TXHALFIF_C1FIFOINT17_bit at C1FIFOINT17.B9;
    sbit  TXNFULLIF_C1FIFOINT17_bit at C1FIFOINT17.B10;
    sbit  RXNEMPTYIE_C1FIFOINT17_bit at C1FIFOINT17.B16;
    sbit  RXHALFIE_C1FIFOINT17_bit at C1FIFOINT17.B17;
    sbit  RXFULLIE_C1FIFOINT17_bit at C1FIFOINT17.B18;
    sbit  RXOVFLIE_C1FIFOINT17_bit at C1FIFOINT17.B19;
    sbit  TXEMPTYIE_C1FIFOINT17_bit at C1FIFOINT17.B24;
    sbit  TXHALFIE_C1FIFOINT17_bit at C1FIFOINT17.B25;
    sbit  TXNFULLIE_C1FIFOINT17_bit at C1FIFOINT17.B26;
sfr unsigned long   volatile C1FIFOINT17CLR   absolute 0xBF88B7A4;
sfr unsigned long   volatile C1FIFOINT17SET   absolute 0xBF88B7A8;
sfr unsigned long   volatile C1FIFOINT17INV   absolute 0xBF88B7AC;
sfr atomic unsigned long   volatile C1FIFOUA17       absolute 0xBF88B7B0;
sfr unsigned long   volatile C1FIFOUA17CLR    absolute 0xBF88B7B4;
sfr unsigned long   volatile C1FIFOUA17SET    absolute 0xBF88B7B8;
sfr unsigned long   volatile C1FIFOUA17INV    absolute 0xBF88B7BC;
sfr atomic unsigned long   volatile C1FIFOCI17       absolute 0xBF88B7C0;
    sbit  CFIFOCI0_C1FIFOCI17_bit at C1FIFOCI17.B0;
    sbit  CFIFOCI1_C1FIFOCI17_bit at C1FIFOCI17.B1;
    sbit  CFIFOCI2_C1FIFOCI17_bit at C1FIFOCI17.B2;
    sbit  CFIFOCI3_C1FIFOCI17_bit at C1FIFOCI17.B3;
    sbit  CFIFOCI4_C1FIFOCI17_bit at C1FIFOCI17.B4;
sfr unsigned long   volatile C1FIFOCI17CLR    absolute 0xBF88B7C4;
sfr unsigned long   volatile C1FIFOCI17SET    absolute 0xBF88B7C8;
sfr unsigned long   volatile C1FIFOCI17INV    absolute 0xBF88B7CC;
sfr atomic unsigned long   volatile C1FIFOCON18      absolute 0xBF88B7D0;
    sbit  TXPRI0_C1FIFOCON18_bit at C1FIFOCON18.B0;
    sbit  TXPRI1_C1FIFOCON18_bit at C1FIFOCON18.B1;
    sbit  RTREN_C1FIFOCON18_bit at C1FIFOCON18.B2;
    sbit  TXREQ_C1FIFOCON18_bit at C1FIFOCON18.B3;
    sbit  TXERR_C1FIFOCON18_bit at C1FIFOCON18.B4;
    sbit  TXLARB_C1FIFOCON18_bit at C1FIFOCON18.B5;
    sbit  TXABAT_C1FIFOCON18_bit at C1FIFOCON18.B6;
    sbit  TXEN_C1FIFOCON18_bit at C1FIFOCON18.B7;
    sbit  DONLY_C1FIFOCON18_bit at C1FIFOCON18.B12;
    sbit  UINC_C1FIFOCON18_bit at C1FIFOCON18.B13;
    sbit  FRESET_C1FIFOCON18_bit at C1FIFOCON18.B14;
    sbit  FSIZE0_C1FIFOCON18_bit at C1FIFOCON18.B16;
    sbit  FSIZE1_C1FIFOCON18_bit at C1FIFOCON18.B17;
    sbit  FSIZE2_C1FIFOCON18_bit at C1FIFOCON18.B18;
    sbit  FSIZE3_C1FIFOCON18_bit at C1FIFOCON18.B19;
    sbit  FSIZE4_C1FIFOCON18_bit at C1FIFOCON18.B20;
sfr unsigned long   volatile C1FIFOCON18CLR   absolute 0xBF88B7D4;
sfr unsigned long   volatile C1FIFOCON18SET   absolute 0xBF88B7D8;
sfr unsigned long   volatile C1FIFOCON18INV   absolute 0xBF88B7DC;
sfr atomic unsigned long   volatile C1FIFOINT18      absolute 0xBF88B7E0;
    sbit  RXNEMPTYIF_C1FIFOINT18_bit at C1FIFOINT18.B0;
    sbit  RXHALFIF_C1FIFOINT18_bit at C1FIFOINT18.B1;
    sbit  RXFULLIF_C1FIFOINT18_bit at C1FIFOINT18.B2;
    sbit  RXOVFLIF_C1FIFOINT18_bit at C1FIFOINT18.B3;
    sbit  TXEMPTYIF_C1FIFOINT18_bit at C1FIFOINT18.B8;
    sbit  TXHALFIF_C1FIFOINT18_bit at C1FIFOINT18.B9;
    sbit  TXNFULLIF_C1FIFOINT18_bit at C1FIFOINT18.B10;
    sbit  RXNEMPTYIE_C1FIFOINT18_bit at C1FIFOINT18.B16;
    sbit  RXHALFIE_C1FIFOINT18_bit at C1FIFOINT18.B17;
    sbit  RXFULLIE_C1FIFOINT18_bit at C1FIFOINT18.B18;
    sbit  RXOVFLIE_C1FIFOINT18_bit at C1FIFOINT18.B19;
    sbit  TXEMPTYIE_C1FIFOINT18_bit at C1FIFOINT18.B24;
    sbit  TXHALFIE_C1FIFOINT18_bit at C1FIFOINT18.B25;
    sbit  TXNFULLIE_C1FIFOINT18_bit at C1FIFOINT18.B26;
sfr unsigned long   volatile C1FIFOINT18CLR   absolute 0xBF88B7E4;
sfr unsigned long   volatile C1FIFOINT18SET   absolute 0xBF88B7E8;
sfr unsigned long   volatile C1FIFOINT18INV   absolute 0xBF88B7EC;
sfr atomic unsigned long   volatile C1FIFOUA18       absolute 0xBF88B7F0;
sfr unsigned long   volatile C1FIFOUA18CLR    absolute 0xBF88B7F4;
sfr unsigned long   volatile C1FIFOUA18SET    absolute 0xBF88B7F8;
sfr unsigned long   volatile C1FIFOUA18INV    absolute 0xBF88B7FC;
sfr atomic unsigned long   volatile C1FIFOCI18       absolute 0xBF88B800;
    sbit  CFIFOCI0_C1FIFOCI18_bit at C1FIFOCI18.B0;
    sbit  CFIFOCI1_C1FIFOCI18_bit at C1FIFOCI18.B1;
    sbit  CFIFOCI2_C1FIFOCI18_bit at C1FIFOCI18.B2;
    sbit  CFIFOCI3_C1FIFOCI18_bit at C1FIFOCI18.B3;
    sbit  CFIFOCI4_C1FIFOCI18_bit at C1FIFOCI18.B4;
sfr unsigned long   volatile C1FIFOCI18CLR    absolute 0xBF88B804;
sfr unsigned long   volatile C1FIFOCI18SET    absolute 0xBF88B808;
sfr unsigned long   volatile C1FIFOCI18INV    absolute 0xBF88B80C;
sfr atomic unsigned long   volatile C1FIFOCON19      absolute 0xBF88B810;
    sbit  TXPRI0_C1FIFOCON19_bit at C1FIFOCON19.B0;
    sbit  TXPRI1_C1FIFOCON19_bit at C1FIFOCON19.B1;
    sbit  RTREN_C1FIFOCON19_bit at C1FIFOCON19.B2;
    sbit  TXREQ_C1FIFOCON19_bit at C1FIFOCON19.B3;
    sbit  TXERR_C1FIFOCON19_bit at C1FIFOCON19.B4;
    sbit  TXLARB_C1FIFOCON19_bit at C1FIFOCON19.B5;
    sbit  TXABAT_C1FIFOCON19_bit at C1FIFOCON19.B6;
    sbit  TXEN_C1FIFOCON19_bit at C1FIFOCON19.B7;
    sbit  DONLY_C1FIFOCON19_bit at C1FIFOCON19.B12;
    sbit  UINC_C1FIFOCON19_bit at C1FIFOCON19.B13;
    sbit  FRESET_C1FIFOCON19_bit at C1FIFOCON19.B14;
    sbit  FSIZE0_C1FIFOCON19_bit at C1FIFOCON19.B16;
    sbit  FSIZE1_C1FIFOCON19_bit at C1FIFOCON19.B17;
    sbit  FSIZE2_C1FIFOCON19_bit at C1FIFOCON19.B18;
    sbit  FSIZE3_C1FIFOCON19_bit at C1FIFOCON19.B19;
    sbit  FSIZE4_C1FIFOCON19_bit at C1FIFOCON19.B20;
sfr unsigned long   volatile C1FIFOCON19CLR   absolute 0xBF88B814;
sfr unsigned long   volatile C1FIFOCON19SET   absolute 0xBF88B818;
sfr unsigned long   volatile C1FIFOCON19INV   absolute 0xBF88B81C;
sfr atomic unsigned long   volatile C1FIFOINT19      absolute 0xBF88B820;
    sbit  RXNEMPTYIF_C1FIFOINT19_bit at C1FIFOINT19.B0;
    sbit  RXHALFIF_C1FIFOINT19_bit at C1FIFOINT19.B1;
    sbit  RXFULLIF_C1FIFOINT19_bit at C1FIFOINT19.B2;
    sbit  RXOVFLIF_C1FIFOINT19_bit at C1FIFOINT19.B3;
    sbit  TXEMPTYIF_C1FIFOINT19_bit at C1FIFOINT19.B8;
    sbit  TXHALFIF_C1FIFOINT19_bit at C1FIFOINT19.B9;
    sbit  TXNFULLIF_C1FIFOINT19_bit at C1FIFOINT19.B10;
    sbit  RXNEMPTYIE_C1FIFOINT19_bit at C1FIFOINT19.B16;
    sbit  RXHALFIE_C1FIFOINT19_bit at C1FIFOINT19.B17;
    sbit  RXFULLIE_C1FIFOINT19_bit at C1FIFOINT19.B18;
    sbit  RXOVFLIE_C1FIFOINT19_bit at C1FIFOINT19.B19;
    sbit  TXEMPTYIE_C1FIFOINT19_bit at C1FIFOINT19.B24;
    sbit  TXHALFIE_C1FIFOINT19_bit at C1FIFOINT19.B25;
    sbit  TXNFULLIE_C1FIFOINT19_bit at C1FIFOINT19.B26;
sfr unsigned long   volatile C1FIFOINT19CLR   absolute 0xBF88B824;
sfr unsigned long   volatile C1FIFOINT19SET   absolute 0xBF88B828;
sfr unsigned long   volatile C1FIFOINT19INV   absolute 0xBF88B82C;
sfr atomic unsigned long   volatile C1FIFOUA19       absolute 0xBF88B830;
sfr unsigned long   volatile C1FIFOUA19CLR    absolute 0xBF88B834;
sfr unsigned long   volatile C1FIFOUA19SET    absolute 0xBF88B838;
sfr unsigned long   volatile C1FIFOUA19INV    absolute 0xBF88B83C;
sfr atomic unsigned long   volatile C1FIFOCI19       absolute 0xBF88B840;
    sbit  CFIFOCI0_C1FIFOCI19_bit at C1FIFOCI19.B0;
    sbit  CFIFOCI1_C1FIFOCI19_bit at C1FIFOCI19.B1;
    sbit  CFIFOCI2_C1FIFOCI19_bit at C1FIFOCI19.B2;
    sbit  CFIFOCI3_C1FIFOCI19_bit at C1FIFOCI19.B3;
    sbit  CFIFOCI4_C1FIFOCI19_bit at C1FIFOCI19.B4;
sfr unsigned long   volatile C1FIFOCI19CLR    absolute 0xBF88B844;
sfr unsigned long   volatile C1FIFOCI19SET    absolute 0xBF88B848;
sfr unsigned long   volatile C1FIFOCI19INV    absolute 0xBF88B84C;
sfr atomic unsigned long   volatile C1FIFOCON20      absolute 0xBF88B850;
    sbit  TXPRI0_C1FIFOCON20_bit at C1FIFOCON20.B0;
    sbit  TXPRI1_C1FIFOCON20_bit at C1FIFOCON20.B1;
    sbit  RTREN_C1FIFOCON20_bit at C1FIFOCON20.B2;
    sbit  TXREQ_C1FIFOCON20_bit at C1FIFOCON20.B3;
    sbit  TXERR_C1FIFOCON20_bit at C1FIFOCON20.B4;
    sbit  TXLARB_C1FIFOCON20_bit at C1FIFOCON20.B5;
    sbit  TXABAT_C1FIFOCON20_bit at C1FIFOCON20.B6;
    sbit  TXEN_C1FIFOCON20_bit at C1FIFOCON20.B7;
    sbit  DONLY_C1FIFOCON20_bit at C1FIFOCON20.B12;
    sbit  UINC_C1FIFOCON20_bit at C1FIFOCON20.B13;
    sbit  FRESET_C1FIFOCON20_bit at C1FIFOCON20.B14;
    sbit  FSIZE0_C1FIFOCON20_bit at C1FIFOCON20.B16;
    sbit  FSIZE1_C1FIFOCON20_bit at C1FIFOCON20.B17;
    sbit  FSIZE2_C1FIFOCON20_bit at C1FIFOCON20.B18;
    sbit  FSIZE3_C1FIFOCON20_bit at C1FIFOCON20.B19;
    sbit  FSIZE4_C1FIFOCON20_bit at C1FIFOCON20.B20;
sfr unsigned long   volatile C1FIFOCON20CLR   absolute 0xBF88B854;
sfr unsigned long   volatile C1FIFOCON20SET   absolute 0xBF88B858;
sfr unsigned long   volatile C1FIFOCON20INV   absolute 0xBF88B85C;
sfr atomic unsigned long   volatile C1FIFOINT20      absolute 0xBF88B860;
    sbit  RXNEMPTYIF_C1FIFOINT20_bit at C1FIFOINT20.B0;
    sbit  RXHALFIF_C1FIFOINT20_bit at C1FIFOINT20.B1;
    sbit  RXFULLIF_C1FIFOINT20_bit at C1FIFOINT20.B2;
    sbit  RXOVFLIF_C1FIFOINT20_bit at C1FIFOINT20.B3;
    sbit  TXEMPTYIF_C1FIFOINT20_bit at C1FIFOINT20.B8;
    sbit  TXHALFIF_C1FIFOINT20_bit at C1FIFOINT20.B9;
    sbit  TXNFULLIF_C1FIFOINT20_bit at C1FIFOINT20.B10;
    sbit  RXNEMPTYIE_C1FIFOINT20_bit at C1FIFOINT20.B16;
    sbit  RXHALFIE_C1FIFOINT20_bit at C1FIFOINT20.B17;
    sbit  RXFULLIE_C1FIFOINT20_bit at C1FIFOINT20.B18;
    sbit  RXOVFLIE_C1FIFOINT20_bit at C1FIFOINT20.B19;
    sbit  TXEMPTYIE_C1FIFOINT20_bit at C1FIFOINT20.B24;
    sbit  TXHALFIE_C1FIFOINT20_bit at C1FIFOINT20.B25;
    sbit  TXNFULLIE_C1FIFOINT20_bit at C1FIFOINT20.B26;
sfr unsigned long   volatile C1FIFOINT20CLR   absolute 0xBF88B864;
sfr unsigned long   volatile C1FIFOINT20SET   absolute 0xBF88B868;
sfr unsigned long   volatile C1FIFOINT20INV   absolute 0xBF88B86C;
sfr atomic unsigned long   volatile C1FIFOUA20       absolute 0xBF88B870;
sfr unsigned long   volatile C1FIFOUA20CLR    absolute 0xBF88B874;
sfr unsigned long   volatile C1FIFOUA20SET    absolute 0xBF88B878;
sfr unsigned long   volatile C1FIFOUA20INV    absolute 0xBF88B87C;
sfr atomic unsigned long   volatile C1FIFOCI20       absolute 0xBF88B880;
    sbit  CFIFOCI0_C1FIFOCI20_bit at C1FIFOCI20.B0;
    sbit  CFIFOCI1_C1FIFOCI20_bit at C1FIFOCI20.B1;
    sbit  CFIFOCI2_C1FIFOCI20_bit at C1FIFOCI20.B2;
    sbit  CFIFOCI3_C1FIFOCI20_bit at C1FIFOCI20.B3;
    sbit  CFIFOCI4_C1FIFOCI20_bit at C1FIFOCI20.B4;
sfr unsigned long   volatile C1FIFOCI20CLR    absolute 0xBF88B884;
sfr unsigned long   volatile C1FIFOCI20SET    absolute 0xBF88B888;
sfr unsigned long   volatile C1FIFOCI20INV    absolute 0xBF88B88C;
sfr atomic unsigned long   volatile C1FIFOCON21      absolute 0xBF88B890;
    sbit  TXPRI0_C1FIFOCON21_bit at C1FIFOCON21.B0;
    sbit  TXPRI1_C1FIFOCON21_bit at C1FIFOCON21.B1;
    sbit  RTREN_C1FIFOCON21_bit at C1FIFOCON21.B2;
    sbit  TXREQ_C1FIFOCON21_bit at C1FIFOCON21.B3;
    sbit  TXERR_C1FIFOCON21_bit at C1FIFOCON21.B4;
    sbit  TXLARB_C1FIFOCON21_bit at C1FIFOCON21.B5;
    sbit  TXABAT_C1FIFOCON21_bit at C1FIFOCON21.B6;
    sbit  TXEN_C1FIFOCON21_bit at C1FIFOCON21.B7;
    sbit  DONLY_C1FIFOCON21_bit at C1FIFOCON21.B12;
    sbit  UINC_C1FIFOCON21_bit at C1FIFOCON21.B13;
    sbit  FRESET_C1FIFOCON21_bit at C1FIFOCON21.B14;
    sbit  FSIZE0_C1FIFOCON21_bit at C1FIFOCON21.B16;
    sbit  FSIZE1_C1FIFOCON21_bit at C1FIFOCON21.B17;
    sbit  FSIZE2_C1FIFOCON21_bit at C1FIFOCON21.B18;
    sbit  FSIZE3_C1FIFOCON21_bit at C1FIFOCON21.B19;
    sbit  FSIZE4_C1FIFOCON21_bit at C1FIFOCON21.B20;
sfr unsigned long   volatile C1FIFOCON21CLR   absolute 0xBF88B894;
sfr unsigned long   volatile C1FIFOCON21SET   absolute 0xBF88B898;
sfr unsigned long   volatile C1FIFOCON21INV   absolute 0xBF88B89C;
sfr atomic unsigned long   volatile C1FIFOINT21      absolute 0xBF88B8A0;
    sbit  RXNEMPTYIF_C1FIFOINT21_bit at C1FIFOINT21.B0;
    sbit  RXHALFIF_C1FIFOINT21_bit at C1FIFOINT21.B1;
    sbit  RXFULLIF_C1FIFOINT21_bit at C1FIFOINT21.B2;
    sbit  RXOVFLIF_C1FIFOINT21_bit at C1FIFOINT21.B3;
    sbit  TXEMPTYIF_C1FIFOINT21_bit at C1FIFOINT21.B8;
    sbit  TXHALFIF_C1FIFOINT21_bit at C1FIFOINT21.B9;
    sbit  TXNFULLIF_C1FIFOINT21_bit at C1FIFOINT21.B10;
    sbit  RXNEMPTYIE_C1FIFOINT21_bit at C1FIFOINT21.B16;
    sbit  RXHALFIE_C1FIFOINT21_bit at C1FIFOINT21.B17;
    sbit  RXFULLIE_C1FIFOINT21_bit at C1FIFOINT21.B18;
    sbit  RXOVFLIE_C1FIFOINT21_bit at C1FIFOINT21.B19;
    sbit  TXEMPTYIE_C1FIFOINT21_bit at C1FIFOINT21.B24;
    sbit  TXHALFIE_C1FIFOINT21_bit at C1FIFOINT21.B25;
    sbit  TXNFULLIE_C1FIFOINT21_bit at C1FIFOINT21.B26;
sfr unsigned long   volatile C1FIFOINT21CLR   absolute 0xBF88B8A4;
sfr unsigned long   volatile C1FIFOINT21SET   absolute 0xBF88B8A8;
sfr unsigned long   volatile C1FIFOINT21INV   absolute 0xBF88B8AC;
sfr atomic unsigned long   volatile C1FIFOUA21       absolute 0xBF88B8B0;
sfr unsigned long   volatile C1FIFOUA21CLR    absolute 0xBF88B8B4;
sfr unsigned long   volatile C1FIFOUA21SET    absolute 0xBF88B8B8;
sfr unsigned long   volatile C1FIFOUA21INV    absolute 0xBF88B8BC;
sfr atomic unsigned long   volatile C1FIFOCI21       absolute 0xBF88B8C0;
    sbit  CFIFOCI0_C1FIFOCI21_bit at C1FIFOCI21.B0;
    sbit  CFIFOCI1_C1FIFOCI21_bit at C1FIFOCI21.B1;
    sbit  CFIFOCI2_C1FIFOCI21_bit at C1FIFOCI21.B2;
    sbit  CFIFOCI3_C1FIFOCI21_bit at C1FIFOCI21.B3;
    sbit  CFIFOCI4_C1FIFOCI21_bit at C1FIFOCI21.B4;
sfr unsigned long   volatile C1FIFOCI21CLR    absolute 0xBF88B8C4;
sfr unsigned long   volatile C1FIFOCI21SET    absolute 0xBF88B8C8;
sfr unsigned long   volatile C1FIFOCI21INV    absolute 0xBF88B8CC;
sfr atomic unsigned long   volatile C1FIFOCON22      absolute 0xBF88B8D0;
    sbit  TXPRI0_C1FIFOCON22_bit at C1FIFOCON22.B0;
    sbit  TXPRI1_C1FIFOCON22_bit at C1FIFOCON22.B1;
    sbit  RTREN_C1FIFOCON22_bit at C1FIFOCON22.B2;
    sbit  TXREQ_C1FIFOCON22_bit at C1FIFOCON22.B3;
    sbit  TXERR_C1FIFOCON22_bit at C1FIFOCON22.B4;
    sbit  TXLARB_C1FIFOCON22_bit at C1FIFOCON22.B5;
    sbit  TXABAT_C1FIFOCON22_bit at C1FIFOCON22.B6;
    sbit  TXEN_C1FIFOCON22_bit at C1FIFOCON22.B7;
    sbit  DONLY_C1FIFOCON22_bit at C1FIFOCON22.B12;
    sbit  UINC_C1FIFOCON22_bit at C1FIFOCON22.B13;
    sbit  FRESET_C1FIFOCON22_bit at C1FIFOCON22.B14;
    sbit  FSIZE0_C1FIFOCON22_bit at C1FIFOCON22.B16;
    sbit  FSIZE1_C1FIFOCON22_bit at C1FIFOCON22.B17;
    sbit  FSIZE2_C1FIFOCON22_bit at C1FIFOCON22.B18;
    sbit  FSIZE3_C1FIFOCON22_bit at C1FIFOCON22.B19;
    sbit  FSIZE4_C1FIFOCON22_bit at C1FIFOCON22.B20;
sfr unsigned long   volatile C1FIFOCON22CLR   absolute 0xBF88B8D4;
sfr unsigned long   volatile C1FIFOCON22SET   absolute 0xBF88B8D8;
sfr unsigned long   volatile C1FIFOCON22INV   absolute 0xBF88B8DC;
sfr atomic unsigned long   volatile C1FIFOINT22      absolute 0xBF88B8E0;
    sbit  RXNEMPTYIF_C1FIFOINT22_bit at C1FIFOINT22.B0;
    sbit  RXHALFIF_C1FIFOINT22_bit at C1FIFOINT22.B1;
    sbit  RXFULLIF_C1FIFOINT22_bit at C1FIFOINT22.B2;
    sbit  RXOVFLIF_C1FIFOINT22_bit at C1FIFOINT22.B3;
    sbit  TXEMPTYIF_C1FIFOINT22_bit at C1FIFOINT22.B8;
    sbit  TXHALFIF_C1FIFOINT22_bit at C1FIFOINT22.B9;
    sbit  TXNFULLIF_C1FIFOINT22_bit at C1FIFOINT22.B10;
    sbit  RXNEMPTYIE_C1FIFOINT22_bit at C1FIFOINT22.B16;
    sbit  RXHALFIE_C1FIFOINT22_bit at C1FIFOINT22.B17;
    sbit  RXFULLIE_C1FIFOINT22_bit at C1FIFOINT22.B18;
    sbit  RXOVFLIE_C1FIFOINT22_bit at C1FIFOINT22.B19;
    sbit  TXEMPTYIE_C1FIFOINT22_bit at C1FIFOINT22.B24;
    sbit  TXHALFIE_C1FIFOINT22_bit at C1FIFOINT22.B25;
    sbit  TXNFULLIE_C1FIFOINT22_bit at C1FIFOINT22.B26;
sfr unsigned long   volatile C1FIFOINT22CLR   absolute 0xBF88B8E4;
sfr unsigned long   volatile C1FIFOINT22SET   absolute 0xBF88B8E8;
sfr unsigned long   volatile C1FIFOINT22INV   absolute 0xBF88B8EC;
sfr atomic unsigned long   volatile C1FIFOUA22       absolute 0xBF88B8F0;
sfr unsigned long   volatile C1FIFOUA22CLR    absolute 0xBF88B8F4;
sfr unsigned long   volatile C1FIFOUA22SET    absolute 0xBF88B8F8;
sfr unsigned long   volatile C1FIFOUA22INV    absolute 0xBF88B8FC;
sfr atomic unsigned long   volatile C1FIFOCI22       absolute 0xBF88B900;
    sbit  CFIFOCI0_C1FIFOCI22_bit at C1FIFOCI22.B0;
    sbit  CFIFOCI1_C1FIFOCI22_bit at C1FIFOCI22.B1;
    sbit  CFIFOCI2_C1FIFOCI22_bit at C1FIFOCI22.B2;
    sbit  CFIFOCI3_C1FIFOCI22_bit at C1FIFOCI22.B3;
    sbit  CFIFOCI4_C1FIFOCI22_bit at C1FIFOCI22.B4;
sfr unsigned long   volatile C1FIFOCI22CLR    absolute 0xBF88B904;
sfr unsigned long   volatile C1FIFOCI22SET    absolute 0xBF88B908;
sfr unsigned long   volatile C1FIFOCI22INV    absolute 0xBF88B90C;
sfr atomic unsigned long   volatile C1FIFOCON23      absolute 0xBF88B910;
    sbit  TXPRI0_C1FIFOCON23_bit at C1FIFOCON23.B0;
    sbit  TXPRI1_C1FIFOCON23_bit at C1FIFOCON23.B1;
    sbit  RTREN_C1FIFOCON23_bit at C1FIFOCON23.B2;
    sbit  TXREQ_C1FIFOCON23_bit at C1FIFOCON23.B3;
    sbit  TXERR_C1FIFOCON23_bit at C1FIFOCON23.B4;
    sbit  TXLARB_C1FIFOCON23_bit at C1FIFOCON23.B5;
    sbit  TXABAT_C1FIFOCON23_bit at C1FIFOCON23.B6;
    sbit  TXEN_C1FIFOCON23_bit at C1FIFOCON23.B7;
    sbit  DONLY_C1FIFOCON23_bit at C1FIFOCON23.B12;
    sbit  UINC_C1FIFOCON23_bit at C1FIFOCON23.B13;
    sbit  FRESET_C1FIFOCON23_bit at C1FIFOCON23.B14;
    sbit  FSIZE0_C1FIFOCON23_bit at C1FIFOCON23.B16;
    sbit  FSIZE1_C1FIFOCON23_bit at C1FIFOCON23.B17;
    sbit  FSIZE2_C1FIFOCON23_bit at C1FIFOCON23.B18;
    sbit  FSIZE3_C1FIFOCON23_bit at C1FIFOCON23.B19;
    sbit  FSIZE4_C1FIFOCON23_bit at C1FIFOCON23.B20;
sfr unsigned long   volatile C1FIFOCON23CLR   absolute 0xBF88B914;
sfr unsigned long   volatile C1FIFOCON23SET   absolute 0xBF88B918;
sfr unsigned long   volatile C1FIFOCON23INV   absolute 0xBF88B91C;
sfr atomic unsigned long   volatile C1FIFOINT23      absolute 0xBF88B920;
    sbit  RXNEMPTYIF_C1FIFOINT23_bit at C1FIFOINT23.B0;
    sbit  RXHALFIF_C1FIFOINT23_bit at C1FIFOINT23.B1;
    sbit  RXFULLIF_C1FIFOINT23_bit at C1FIFOINT23.B2;
    sbit  RXOVFLIF_C1FIFOINT23_bit at C1FIFOINT23.B3;
    sbit  TXEMPTYIF_C1FIFOINT23_bit at C1FIFOINT23.B8;
    sbit  TXHALFIF_C1FIFOINT23_bit at C1FIFOINT23.B9;
    sbit  TXNFULLIF_C1FIFOINT23_bit at C1FIFOINT23.B10;
    sbit  RXNEMPTYIE_C1FIFOINT23_bit at C1FIFOINT23.B16;
    sbit  RXHALFIE_C1FIFOINT23_bit at C1FIFOINT23.B17;
    sbit  RXFULLIE_C1FIFOINT23_bit at C1FIFOINT23.B18;
    sbit  RXOVFLIE_C1FIFOINT23_bit at C1FIFOINT23.B19;
    sbit  TXEMPTYIE_C1FIFOINT23_bit at C1FIFOINT23.B24;
    sbit  TXHALFIE_C1FIFOINT23_bit at C1FIFOINT23.B25;
    sbit  TXNFULLIE_C1FIFOINT23_bit at C1FIFOINT23.B26;
sfr unsigned long   volatile C1FIFOINT23CLR   absolute 0xBF88B924;
sfr unsigned long   volatile C1FIFOINT23SET   absolute 0xBF88B928;
sfr unsigned long   volatile C1FIFOINT23INV   absolute 0xBF88B92C;
sfr atomic unsigned long   volatile C1FIFOUA23       absolute 0xBF88B930;
sfr unsigned long   volatile C1FIFOUA23CLR    absolute 0xBF88B934;
sfr unsigned long   volatile C1FIFOUA23SET    absolute 0xBF88B938;
sfr unsigned long   volatile C1FIFOUA23INV    absolute 0xBF88B93C;
sfr atomic unsigned long   volatile C1FIFOCI23       absolute 0xBF88B940;
    sbit  CFIFOCI0_C1FIFOCI23_bit at C1FIFOCI23.B0;
    sbit  CFIFOCI1_C1FIFOCI23_bit at C1FIFOCI23.B1;
    sbit  CFIFOCI2_C1FIFOCI23_bit at C1FIFOCI23.B2;
    sbit  CFIFOCI3_C1FIFOCI23_bit at C1FIFOCI23.B3;
    sbit  CFIFOCI4_C1FIFOCI23_bit at C1FIFOCI23.B4;
sfr unsigned long   volatile C1FIFOCI23CLR    absolute 0xBF88B944;
sfr unsigned long   volatile C1FIFOCI23SET    absolute 0xBF88B948;
sfr unsigned long   volatile C1FIFOCI23INV    absolute 0xBF88B94C;
sfr atomic unsigned long   volatile C1FIFOCON24      absolute 0xBF88B950;
    sbit  TXPRI0_C1FIFOCON24_bit at C1FIFOCON24.B0;
    sbit  TXPRI1_C1FIFOCON24_bit at C1FIFOCON24.B1;
    sbit  RTREN_C1FIFOCON24_bit at C1FIFOCON24.B2;
    sbit  TXREQ_C1FIFOCON24_bit at C1FIFOCON24.B3;
    sbit  TXERR_C1FIFOCON24_bit at C1FIFOCON24.B4;
    sbit  TXLARB_C1FIFOCON24_bit at C1FIFOCON24.B5;
    sbit  TXABAT_C1FIFOCON24_bit at C1FIFOCON24.B6;
    sbit  TXEN_C1FIFOCON24_bit at C1FIFOCON24.B7;
    sbit  DONLY_C1FIFOCON24_bit at C1FIFOCON24.B12;
    sbit  UINC_C1FIFOCON24_bit at C1FIFOCON24.B13;
    sbit  FRESET_C1FIFOCON24_bit at C1FIFOCON24.B14;
    sbit  FSIZE0_C1FIFOCON24_bit at C1FIFOCON24.B16;
    sbit  FSIZE1_C1FIFOCON24_bit at C1FIFOCON24.B17;
    sbit  FSIZE2_C1FIFOCON24_bit at C1FIFOCON24.B18;
    sbit  FSIZE3_C1FIFOCON24_bit at C1FIFOCON24.B19;
    sbit  FSIZE4_C1FIFOCON24_bit at C1FIFOCON24.B20;
sfr unsigned long   volatile C1FIFOCON24CLR   absolute 0xBF88B954;
sfr unsigned long   volatile C1FIFOCON24SET   absolute 0xBF88B958;
sfr unsigned long   volatile C1FIFOCON24INV   absolute 0xBF88B95C;
sfr atomic unsigned long   volatile C1FIFOINT24      absolute 0xBF88B960;
    sbit  RXNEMPTYIF_C1FIFOINT24_bit at C1FIFOINT24.B0;
    sbit  RXHALFIF_C1FIFOINT24_bit at C1FIFOINT24.B1;
    sbit  RXFULLIF_C1FIFOINT24_bit at C1FIFOINT24.B2;
    sbit  RXOVFLIF_C1FIFOINT24_bit at C1FIFOINT24.B3;
    sbit  TXEMPTYIF_C1FIFOINT24_bit at C1FIFOINT24.B8;
    sbit  TXHALFIF_C1FIFOINT24_bit at C1FIFOINT24.B9;
    sbit  TXNFULLIF_C1FIFOINT24_bit at C1FIFOINT24.B10;
    sbit  RXNEMPTYIE_C1FIFOINT24_bit at C1FIFOINT24.B16;
    sbit  RXHALFIE_C1FIFOINT24_bit at C1FIFOINT24.B17;
    sbit  RXFULLIE_C1FIFOINT24_bit at C1FIFOINT24.B18;
    sbit  RXOVFLIE_C1FIFOINT24_bit at C1FIFOINT24.B19;
    sbit  TXEMPTYIE_C1FIFOINT24_bit at C1FIFOINT24.B24;
    sbit  TXHALFIE_C1FIFOINT24_bit at C1FIFOINT24.B25;
    sbit  TXNFULLIE_C1FIFOINT24_bit at C1FIFOINT24.B26;
sfr unsigned long   volatile C1FIFOINT24CLR   absolute 0xBF88B964;
sfr unsigned long   volatile C1FIFOINT24SET   absolute 0xBF88B968;
sfr unsigned long   volatile C1FIFOINT24INV   absolute 0xBF88B96C;
sfr atomic unsigned long   volatile C1FIFOUA24       absolute 0xBF88B970;
sfr unsigned long   volatile C1FIFOUA24CLR    absolute 0xBF88B974;
sfr unsigned long   volatile C1FIFOUA24SET    absolute 0xBF88B978;
sfr unsigned long   volatile C1FIFOUA24INV    absolute 0xBF88B97C;
sfr atomic unsigned long   volatile C1FIFOCI24       absolute 0xBF88B980;
    sbit  CFIFOCI0_C1FIFOCI24_bit at C1FIFOCI24.B0;
    sbit  CFIFOCI1_C1FIFOCI24_bit at C1FIFOCI24.B1;
    sbit  CFIFOCI2_C1FIFOCI24_bit at C1FIFOCI24.B2;
    sbit  CFIFOCI3_C1FIFOCI24_bit at C1FIFOCI24.B3;
    sbit  CFIFOCI4_C1FIFOCI24_bit at C1FIFOCI24.B4;
sfr unsigned long   volatile C1FIFOCI24CLR    absolute 0xBF88B984;
sfr unsigned long   volatile C1FIFOCI24SET    absolute 0xBF88B988;
sfr unsigned long   volatile C1FIFOCI24INV    absolute 0xBF88B98C;
sfr atomic unsigned long   volatile C1FIFOCON25      absolute 0xBF88B990;
    sbit  TXPRI0_C1FIFOCON25_bit at C1FIFOCON25.B0;
    sbit  TXPRI1_C1FIFOCON25_bit at C1FIFOCON25.B1;
    sbit  RTREN_C1FIFOCON25_bit at C1FIFOCON25.B2;
    sbit  TXREQ_C1FIFOCON25_bit at C1FIFOCON25.B3;
    sbit  TXERR_C1FIFOCON25_bit at C1FIFOCON25.B4;
    sbit  TXLARB_C1FIFOCON25_bit at C1FIFOCON25.B5;
    sbit  TXABAT_C1FIFOCON25_bit at C1FIFOCON25.B6;
    sbit  TXEN_C1FIFOCON25_bit at C1FIFOCON25.B7;
    sbit  DONLY_C1FIFOCON25_bit at C1FIFOCON25.B12;
    sbit  UINC_C1FIFOCON25_bit at C1FIFOCON25.B13;
    sbit  FRESET_C1FIFOCON25_bit at C1FIFOCON25.B14;
    sbit  FSIZE0_C1FIFOCON25_bit at C1FIFOCON25.B16;
    sbit  FSIZE1_C1FIFOCON25_bit at C1FIFOCON25.B17;
    sbit  FSIZE2_C1FIFOCON25_bit at C1FIFOCON25.B18;
    sbit  FSIZE3_C1FIFOCON25_bit at C1FIFOCON25.B19;
    sbit  FSIZE4_C1FIFOCON25_bit at C1FIFOCON25.B20;
sfr unsigned long   volatile C1FIFOCON25CLR   absolute 0xBF88B994;
sfr unsigned long   volatile C1FIFOCON25SET   absolute 0xBF88B998;
sfr unsigned long   volatile C1FIFOCON25INV   absolute 0xBF88B99C;
sfr atomic unsigned long   volatile C1FIFOINT25      absolute 0xBF88B9A0;
    sbit  RXNEMPTYIF_C1FIFOINT25_bit at C1FIFOINT25.B0;
    sbit  RXHALFIF_C1FIFOINT25_bit at C1FIFOINT25.B1;
    sbit  RXFULLIF_C1FIFOINT25_bit at C1FIFOINT25.B2;
    sbit  RXOVFLIF_C1FIFOINT25_bit at C1FIFOINT25.B3;
    sbit  TXEMPTYIF_C1FIFOINT25_bit at C1FIFOINT25.B8;
    sbit  TXHALFIF_C1FIFOINT25_bit at C1FIFOINT25.B9;
    sbit  TXNFULLIF_C1FIFOINT25_bit at C1FIFOINT25.B10;
    sbit  RXNEMPTYIE_C1FIFOINT25_bit at C1FIFOINT25.B16;
    sbit  RXHALFIE_C1FIFOINT25_bit at C1FIFOINT25.B17;
    sbit  RXFULLIE_C1FIFOINT25_bit at C1FIFOINT25.B18;
    sbit  RXOVFLIE_C1FIFOINT25_bit at C1FIFOINT25.B19;
    sbit  TXEMPTYIE_C1FIFOINT25_bit at C1FIFOINT25.B24;
    sbit  TXHALFIE_C1FIFOINT25_bit at C1FIFOINT25.B25;
    sbit  TXNFULLIE_C1FIFOINT25_bit at C1FIFOINT25.B26;
sfr unsigned long   volatile C1FIFOINT25CLR   absolute 0xBF88B9A4;
sfr unsigned long   volatile C1FIFOINT25SET   absolute 0xBF88B9A8;
sfr unsigned long   volatile C1FIFOINT25INV   absolute 0xBF88B9AC;
sfr atomic unsigned long   volatile C1FIFOUA25       absolute 0xBF88B9B0;
sfr unsigned long   volatile C1FIFOUA25CLR    absolute 0xBF88B9B4;
sfr unsigned long   volatile C1FIFOUA25SET    absolute 0xBF88B9B8;
sfr unsigned long   volatile C1FIFOUA25INV    absolute 0xBF88B9BC;
sfr atomic unsigned long   volatile C1FIFOCI25       absolute 0xBF88B9C0;
    sbit  CFIFOCI0_C1FIFOCI25_bit at C1FIFOCI25.B0;
    sbit  CFIFOCI1_C1FIFOCI25_bit at C1FIFOCI25.B1;
    sbit  CFIFOCI2_C1FIFOCI25_bit at C1FIFOCI25.B2;
    sbit  CFIFOCI3_C1FIFOCI25_bit at C1FIFOCI25.B3;
    sbit  CFIFOCI4_C1FIFOCI25_bit at C1FIFOCI25.B4;
sfr unsigned long   volatile C1FIFOCI25CLR    absolute 0xBF88B9C4;
sfr unsigned long   volatile C1FIFOCI25SET    absolute 0xBF88B9C8;
sfr unsigned long   volatile C1FIFOCI25INV    absolute 0xBF88B9CC;
sfr atomic unsigned long   volatile C1FIFOCON26      absolute 0xBF88B9D0;
    sbit  TXPRI0_C1FIFOCON26_bit at C1FIFOCON26.B0;
    sbit  TXPRI1_C1FIFOCON26_bit at C1FIFOCON26.B1;
    sbit  RTREN_C1FIFOCON26_bit at C1FIFOCON26.B2;
    sbit  TXREQ_C1FIFOCON26_bit at C1FIFOCON26.B3;
    sbit  TXERR_C1FIFOCON26_bit at C1FIFOCON26.B4;
    sbit  TXLARB_C1FIFOCON26_bit at C1FIFOCON26.B5;
    sbit  TXABAT_C1FIFOCON26_bit at C1FIFOCON26.B6;
    sbit  TXEN_C1FIFOCON26_bit at C1FIFOCON26.B7;
    sbit  DONLY_C1FIFOCON26_bit at C1FIFOCON26.B12;
    sbit  UINC_C1FIFOCON26_bit at C1FIFOCON26.B13;
    sbit  FRESET_C1FIFOCON26_bit at C1FIFOCON26.B14;
    sbit  FSIZE0_C1FIFOCON26_bit at C1FIFOCON26.B16;
    sbit  FSIZE1_C1FIFOCON26_bit at C1FIFOCON26.B17;
    sbit  FSIZE2_C1FIFOCON26_bit at C1FIFOCON26.B18;
    sbit  FSIZE3_C1FIFOCON26_bit at C1FIFOCON26.B19;
    sbit  FSIZE4_C1FIFOCON26_bit at C1FIFOCON26.B20;
sfr unsigned long   volatile C1FIFOCON26CLR   absolute 0xBF88B9D4;
sfr unsigned long   volatile C1FIFOCON26SET   absolute 0xBF88B9D8;
sfr unsigned long   volatile C1FIFOCON26INV   absolute 0xBF88B9DC;
sfr atomic unsigned long   volatile C1FIFOINT26      absolute 0xBF88B9E0;
    sbit  RXNEMPTYIF_C1FIFOINT26_bit at C1FIFOINT26.B0;
    sbit  RXHALFIF_C1FIFOINT26_bit at C1FIFOINT26.B1;
    sbit  RXFULLIF_C1FIFOINT26_bit at C1FIFOINT26.B2;
    sbit  RXOVFLIF_C1FIFOINT26_bit at C1FIFOINT26.B3;
    sbit  TXEMPTYIF_C1FIFOINT26_bit at C1FIFOINT26.B8;
    sbit  TXHALFIF_C1FIFOINT26_bit at C1FIFOINT26.B9;
    sbit  TXNFULLIF_C1FIFOINT26_bit at C1FIFOINT26.B10;
    sbit  RXNEMPTYIE_C1FIFOINT26_bit at C1FIFOINT26.B16;
    sbit  RXHALFIE_C1FIFOINT26_bit at C1FIFOINT26.B17;
    sbit  RXFULLIE_C1FIFOINT26_bit at C1FIFOINT26.B18;
    sbit  RXOVFLIE_C1FIFOINT26_bit at C1FIFOINT26.B19;
    sbit  TXEMPTYIE_C1FIFOINT26_bit at C1FIFOINT26.B24;
    sbit  TXHALFIE_C1FIFOINT26_bit at C1FIFOINT26.B25;
    sbit  TXNFULLIE_C1FIFOINT26_bit at C1FIFOINT26.B26;
sfr unsigned long   volatile C1FIFOINT26CLR   absolute 0xBF88B9E4;
sfr unsigned long   volatile C1FIFOINT26SET   absolute 0xBF88B9E8;
sfr unsigned long   volatile C1FIFOINT26INV   absolute 0xBF88B9EC;
sfr atomic unsigned long   volatile C1FIFOUA26       absolute 0xBF88B9F0;
sfr unsigned long   volatile C1FIFOUA26CLR    absolute 0xBF88B9F4;
sfr unsigned long   volatile C1FIFOUA26SET    absolute 0xBF88B9F8;
sfr unsigned long   volatile C1FIFOUA26INV    absolute 0xBF88B9FC;
sfr atomic unsigned long   volatile C1FIFOCI26       absolute 0xBF88BA00;
    sbit  CFIFOCI0_C1FIFOCI26_bit at C1FIFOCI26.B0;
    sbit  CFIFOCI1_C1FIFOCI26_bit at C1FIFOCI26.B1;
    sbit  CFIFOCI2_C1FIFOCI26_bit at C1FIFOCI26.B2;
    sbit  CFIFOCI3_C1FIFOCI26_bit at C1FIFOCI26.B3;
    sbit  CFIFOCI4_C1FIFOCI26_bit at C1FIFOCI26.B4;
sfr unsigned long   volatile C1FIFOCI26CLR    absolute 0xBF88BA04;
sfr unsigned long   volatile C1FIFOCI26SET    absolute 0xBF88BA08;
sfr unsigned long   volatile C1FIFOCI26INV    absolute 0xBF88BA0C;
sfr atomic unsigned long   volatile C1FIFOCON27      absolute 0xBF88BA10;
    sbit  TXPRI0_C1FIFOCON27_bit at C1FIFOCON27.B0;
    sbit  TXPRI1_C1FIFOCON27_bit at C1FIFOCON27.B1;
    sbit  RTREN_C1FIFOCON27_bit at C1FIFOCON27.B2;
    sbit  TXREQ_C1FIFOCON27_bit at C1FIFOCON27.B3;
    sbit  TXERR_C1FIFOCON27_bit at C1FIFOCON27.B4;
    sbit  TXLARB_C1FIFOCON27_bit at C1FIFOCON27.B5;
    sbit  TXABAT_C1FIFOCON27_bit at C1FIFOCON27.B6;
    sbit  TXEN_C1FIFOCON27_bit at C1FIFOCON27.B7;
    sbit  DONLY_C1FIFOCON27_bit at C1FIFOCON27.B12;
    sbit  UINC_C1FIFOCON27_bit at C1FIFOCON27.B13;
    sbit  FRESET_C1FIFOCON27_bit at C1FIFOCON27.B14;
    sbit  FSIZE0_C1FIFOCON27_bit at C1FIFOCON27.B16;
    sbit  FSIZE1_C1FIFOCON27_bit at C1FIFOCON27.B17;
    sbit  FSIZE2_C1FIFOCON27_bit at C1FIFOCON27.B18;
    sbit  FSIZE3_C1FIFOCON27_bit at C1FIFOCON27.B19;
    sbit  FSIZE4_C1FIFOCON27_bit at C1FIFOCON27.B20;
sfr unsigned long   volatile C1FIFOCON27CLR   absolute 0xBF88BA14;
sfr unsigned long   volatile C1FIFOCON27SET   absolute 0xBF88BA18;
sfr unsigned long   volatile C1FIFOCON27INV   absolute 0xBF88BA1C;
sfr atomic unsigned long   volatile C1FIFOINT27      absolute 0xBF88BA20;
    sbit  RXNEMPTYIF_C1FIFOINT27_bit at C1FIFOINT27.B0;
    sbit  RXHALFIF_C1FIFOINT27_bit at C1FIFOINT27.B1;
    sbit  RXFULLIF_C1FIFOINT27_bit at C1FIFOINT27.B2;
    sbit  RXOVFLIF_C1FIFOINT27_bit at C1FIFOINT27.B3;
    sbit  TXEMPTYIF_C1FIFOINT27_bit at C1FIFOINT27.B8;
    sbit  TXHALFIF_C1FIFOINT27_bit at C1FIFOINT27.B9;
    sbit  TXNFULLIF_C1FIFOINT27_bit at C1FIFOINT27.B10;
    sbit  RXNEMPTYIE_C1FIFOINT27_bit at C1FIFOINT27.B16;
    sbit  RXHALFIE_C1FIFOINT27_bit at C1FIFOINT27.B17;
    sbit  RXFULLIE_C1FIFOINT27_bit at C1FIFOINT27.B18;
    sbit  RXOVFLIE_C1FIFOINT27_bit at C1FIFOINT27.B19;
    sbit  TXEMPTYIE_C1FIFOINT27_bit at C1FIFOINT27.B24;
    sbit  TXHALFIE_C1FIFOINT27_bit at C1FIFOINT27.B25;
    sbit  TXNFULLIE_C1FIFOINT27_bit at C1FIFOINT27.B26;
sfr unsigned long   volatile C1FIFOINT27CLR   absolute 0xBF88BA24;
sfr unsigned long   volatile C1FIFOINT27SET   absolute 0xBF88BA28;
sfr unsigned long   volatile C1FIFOINT27INV   absolute 0xBF88BA2C;
sfr atomic unsigned long   volatile C1FIFOUA27       absolute 0xBF88BA30;
sfr unsigned long   volatile C1FIFOUA27CLR    absolute 0xBF88BA34;
sfr unsigned long   volatile C1FIFOUA27SET    absolute 0xBF88BA38;
sfr unsigned long   volatile C1FIFOUA27INV    absolute 0xBF88BA3C;
sfr atomic unsigned long   volatile C1FIFOCI27       absolute 0xBF88BA40;
    sbit  CFIFOCI0_C1FIFOCI27_bit at C1FIFOCI27.B0;
    sbit  CFIFOCI1_C1FIFOCI27_bit at C1FIFOCI27.B1;
    sbit  CFIFOCI2_C1FIFOCI27_bit at C1FIFOCI27.B2;
    sbit  CFIFOCI3_C1FIFOCI27_bit at C1FIFOCI27.B3;
    sbit  CFIFOCI4_C1FIFOCI27_bit at C1FIFOCI27.B4;
sfr unsigned long   volatile C1FIFOCI27CLR    absolute 0xBF88BA44;
sfr unsigned long   volatile C1FIFOCI27SET    absolute 0xBF88BA48;
sfr unsigned long   volatile C1FIFOCI27INV    absolute 0xBF88BA4C;
sfr atomic unsigned long   volatile C1FIFOCON28      absolute 0xBF88BA50;
    sbit  TXPRI0_C1FIFOCON28_bit at C1FIFOCON28.B0;
    sbit  TXPRI1_C1FIFOCON28_bit at C1FIFOCON28.B1;
    sbit  RTREN_C1FIFOCON28_bit at C1FIFOCON28.B2;
    sbit  TXREQ_C1FIFOCON28_bit at C1FIFOCON28.B3;
    sbit  TXERR_C1FIFOCON28_bit at C1FIFOCON28.B4;
    sbit  TXLARB_C1FIFOCON28_bit at C1FIFOCON28.B5;
    sbit  TXABAT_C1FIFOCON28_bit at C1FIFOCON28.B6;
    sbit  TXEN_C1FIFOCON28_bit at C1FIFOCON28.B7;
    sbit  DONLY_C1FIFOCON28_bit at C1FIFOCON28.B12;
    sbit  UINC_C1FIFOCON28_bit at C1FIFOCON28.B13;
    sbit  FRESET_C1FIFOCON28_bit at C1FIFOCON28.B14;
    sbit  FSIZE0_C1FIFOCON28_bit at C1FIFOCON28.B16;
    sbit  FSIZE1_C1FIFOCON28_bit at C1FIFOCON28.B17;
    sbit  FSIZE2_C1FIFOCON28_bit at C1FIFOCON28.B18;
    sbit  FSIZE3_C1FIFOCON28_bit at C1FIFOCON28.B19;
    sbit  FSIZE4_C1FIFOCON28_bit at C1FIFOCON28.B20;
sfr unsigned long   volatile C1FIFOCON28CLR   absolute 0xBF88BA54;
sfr unsigned long   volatile C1FIFOCON28SET   absolute 0xBF88BA58;
sfr unsigned long   volatile C1FIFOCON28INV   absolute 0xBF88BA5C;
sfr atomic unsigned long   volatile C1FIFOINT28      absolute 0xBF88BA60;
    sbit  RXNEMPTYIF_C1FIFOINT28_bit at C1FIFOINT28.B0;
    sbit  RXHALFIF_C1FIFOINT28_bit at C1FIFOINT28.B1;
    sbit  RXFULLIF_C1FIFOINT28_bit at C1FIFOINT28.B2;
    sbit  RXOVFLIF_C1FIFOINT28_bit at C1FIFOINT28.B3;
    sbit  TXEMPTYIF_C1FIFOINT28_bit at C1FIFOINT28.B8;
    sbit  TXHALFIF_C1FIFOINT28_bit at C1FIFOINT28.B9;
    sbit  TXNFULLIF_C1FIFOINT28_bit at C1FIFOINT28.B10;
    sbit  RXNEMPTYIE_C1FIFOINT28_bit at C1FIFOINT28.B16;
    sbit  RXHALFIE_C1FIFOINT28_bit at C1FIFOINT28.B17;
    sbit  RXFULLIE_C1FIFOINT28_bit at C1FIFOINT28.B18;
    sbit  RXOVFLIE_C1FIFOINT28_bit at C1FIFOINT28.B19;
    sbit  TXEMPTYIE_C1FIFOINT28_bit at C1FIFOINT28.B24;
    sbit  TXHALFIE_C1FIFOINT28_bit at C1FIFOINT28.B25;
    sbit  TXNFULLIE_C1FIFOINT28_bit at C1FIFOINT28.B26;
sfr unsigned long   volatile C1FIFOINT28CLR   absolute 0xBF88BA64;
sfr unsigned long   volatile C1FIFOINT28SET   absolute 0xBF88BA68;
sfr unsigned long   volatile C1FIFOINT28INV   absolute 0xBF88BA6C;
sfr atomic unsigned long   volatile C1FIFOUA28       absolute 0xBF88BA70;
sfr unsigned long   volatile C1FIFOUA28CLR    absolute 0xBF88BA74;
sfr unsigned long   volatile C1FIFOUA28SET    absolute 0xBF88BA78;
sfr unsigned long   volatile C1FIFOUA28INV    absolute 0xBF88BA7C;
sfr atomic unsigned long   volatile C1FIFOCI28       absolute 0xBF88BA80;
    sbit  CFIFOCI0_C1FIFOCI28_bit at C1FIFOCI28.B0;
    sbit  CFIFOCI1_C1FIFOCI28_bit at C1FIFOCI28.B1;
    sbit  CFIFOCI2_C1FIFOCI28_bit at C1FIFOCI28.B2;
    sbit  CFIFOCI3_C1FIFOCI28_bit at C1FIFOCI28.B3;
    sbit  CFIFOCI4_C1FIFOCI28_bit at C1FIFOCI28.B4;
sfr unsigned long   volatile C1FIFOCI28CLR    absolute 0xBF88BA84;
sfr unsigned long   volatile C1FIFOCI28SET    absolute 0xBF88BA88;
sfr unsigned long   volatile C1FIFOCI28INV    absolute 0xBF88BA8C;
sfr atomic unsigned long   volatile C1FIFOCON29      absolute 0xBF88BA90;
    sbit  TXPRI0_C1FIFOCON29_bit at C1FIFOCON29.B0;
    sbit  TXPRI1_C1FIFOCON29_bit at C1FIFOCON29.B1;
    sbit  RTREN_C1FIFOCON29_bit at C1FIFOCON29.B2;
    sbit  TXREQ_C1FIFOCON29_bit at C1FIFOCON29.B3;
    sbit  TXERR_C1FIFOCON29_bit at C1FIFOCON29.B4;
    sbit  TXLARB_C1FIFOCON29_bit at C1FIFOCON29.B5;
    sbit  TXABAT_C1FIFOCON29_bit at C1FIFOCON29.B6;
    sbit  TXEN_C1FIFOCON29_bit at C1FIFOCON29.B7;
    sbit  DONLY_C1FIFOCON29_bit at C1FIFOCON29.B12;
    sbit  UINC_C1FIFOCON29_bit at C1FIFOCON29.B13;
    sbit  FRESET_C1FIFOCON29_bit at C1FIFOCON29.B14;
    sbit  FSIZE0_C1FIFOCON29_bit at C1FIFOCON29.B16;
    sbit  FSIZE1_C1FIFOCON29_bit at C1FIFOCON29.B17;
    sbit  FSIZE2_C1FIFOCON29_bit at C1FIFOCON29.B18;
    sbit  FSIZE3_C1FIFOCON29_bit at C1FIFOCON29.B19;
    sbit  FSIZE4_C1FIFOCON29_bit at C1FIFOCON29.B20;
sfr unsigned long   volatile C1FIFOCON29CLR   absolute 0xBF88BA94;
sfr unsigned long   volatile C1FIFOCON29SET   absolute 0xBF88BA98;
sfr unsigned long   volatile C1FIFOCON29INV   absolute 0xBF88BA9C;
sfr atomic unsigned long   volatile C1FIFOINT29      absolute 0xBF88BAA0;
    sbit  RXNEMPTYIF_C1FIFOINT29_bit at C1FIFOINT29.B0;
    sbit  RXHALFIF_C1FIFOINT29_bit at C1FIFOINT29.B1;
    sbit  RXFULLIF_C1FIFOINT29_bit at C1FIFOINT29.B2;
    sbit  RXOVFLIF_C1FIFOINT29_bit at C1FIFOINT29.B3;
    sbit  TXEMPTYIF_C1FIFOINT29_bit at C1FIFOINT29.B8;
    sbit  TXHALFIF_C1FIFOINT29_bit at C1FIFOINT29.B9;
    sbit  TXNFULLIF_C1FIFOINT29_bit at C1FIFOINT29.B10;
    sbit  RXNEMPTYIE_C1FIFOINT29_bit at C1FIFOINT29.B16;
    sbit  RXHALFIE_C1FIFOINT29_bit at C1FIFOINT29.B17;
    sbit  RXFULLIE_C1FIFOINT29_bit at C1FIFOINT29.B18;
    sbit  RXOVFLIE_C1FIFOINT29_bit at C1FIFOINT29.B19;
    sbit  TXEMPTYIE_C1FIFOINT29_bit at C1FIFOINT29.B24;
    sbit  TXHALFIE_C1FIFOINT29_bit at C1FIFOINT29.B25;
    sbit  TXNFULLIE_C1FIFOINT29_bit at C1FIFOINT29.B26;
sfr unsigned long   volatile C1FIFOINT29CLR   absolute 0xBF88BAA4;
sfr unsigned long   volatile C1FIFOINT29SET   absolute 0xBF88BAA8;
sfr unsigned long   volatile C1FIFOINT29INV   absolute 0xBF88BAAC;
sfr atomic unsigned long   volatile C1FIFOUA29       absolute 0xBF88BAB0;
sfr unsigned long   volatile C1FIFOUA29CLR    absolute 0xBF88BAB4;
sfr unsigned long   volatile C1FIFOUA29SET    absolute 0xBF88BAB8;
sfr unsigned long   volatile C1FIFOUA29INV    absolute 0xBF88BABC;
sfr atomic unsigned long   volatile C1FIFOCI29       absolute 0xBF88BAC0;
    sbit  CFIFOCI0_C1FIFOCI29_bit at C1FIFOCI29.B0;
    sbit  CFIFOCI1_C1FIFOCI29_bit at C1FIFOCI29.B1;
    sbit  CFIFOCI2_C1FIFOCI29_bit at C1FIFOCI29.B2;
    sbit  CFIFOCI3_C1FIFOCI29_bit at C1FIFOCI29.B3;
    sbit  CFIFOCI4_C1FIFOCI29_bit at C1FIFOCI29.B4;
sfr unsigned long   volatile C1FIFOCI29CLR    absolute 0xBF88BAC4;
sfr unsigned long   volatile C1FIFOCI29SET    absolute 0xBF88BAC8;
sfr unsigned long   volatile C1FIFOCI29INV    absolute 0xBF88BACC;
sfr atomic unsigned long   volatile C1FIFOCON30      absolute 0xBF88BAD0;
    sbit  TXPRI0_C1FIFOCON30_bit at C1FIFOCON30.B0;
    sbit  TXPRI1_C1FIFOCON30_bit at C1FIFOCON30.B1;
    sbit  RTREN_C1FIFOCON30_bit at C1FIFOCON30.B2;
    sbit  TXREQ_C1FIFOCON30_bit at C1FIFOCON30.B3;
    sbit  TXERR_C1FIFOCON30_bit at C1FIFOCON30.B4;
    sbit  TXLARB_C1FIFOCON30_bit at C1FIFOCON30.B5;
    sbit  TXABAT_C1FIFOCON30_bit at C1FIFOCON30.B6;
    sbit  TXEN_C1FIFOCON30_bit at C1FIFOCON30.B7;
    sbit  DONLY_C1FIFOCON30_bit at C1FIFOCON30.B12;
    sbit  UINC_C1FIFOCON30_bit at C1FIFOCON30.B13;
    sbit  FRESET_C1FIFOCON30_bit at C1FIFOCON30.B14;
    sbit  FSIZE0_C1FIFOCON30_bit at C1FIFOCON30.B16;
    sbit  FSIZE1_C1FIFOCON30_bit at C1FIFOCON30.B17;
    sbit  FSIZE2_C1FIFOCON30_bit at C1FIFOCON30.B18;
    sbit  FSIZE3_C1FIFOCON30_bit at C1FIFOCON30.B19;
    sbit  FSIZE4_C1FIFOCON30_bit at C1FIFOCON30.B20;
sfr unsigned long   volatile C1FIFOCON30CLR   absolute 0xBF88BAD4;
sfr unsigned long   volatile C1FIFOCON30SET   absolute 0xBF88BAD8;
sfr unsigned long   volatile C1FIFOCON30INV   absolute 0xBF88BADC;
sfr atomic unsigned long   volatile C1FIFOINT30      absolute 0xBF88BAE0;
    sbit  RXNEMPTYIF_C1FIFOINT30_bit at C1FIFOINT30.B0;
    sbit  RXHALFIF_C1FIFOINT30_bit at C1FIFOINT30.B1;
    sbit  RXFULLIF_C1FIFOINT30_bit at C1FIFOINT30.B2;
    sbit  RXOVFLIF_C1FIFOINT30_bit at C1FIFOINT30.B3;
    sbit  TXEMPTYIF_C1FIFOINT30_bit at C1FIFOINT30.B8;
    sbit  TXHALFIF_C1FIFOINT30_bit at C1FIFOINT30.B9;
    sbit  TXNFULLIF_C1FIFOINT30_bit at C1FIFOINT30.B10;
    sbit  RXNEMPTYIE_C1FIFOINT30_bit at C1FIFOINT30.B16;
    sbit  RXHALFIE_C1FIFOINT30_bit at C1FIFOINT30.B17;
    sbit  RXFULLIE_C1FIFOINT30_bit at C1FIFOINT30.B18;
    sbit  RXOVFLIE_C1FIFOINT30_bit at C1FIFOINT30.B19;
    sbit  TXEMPTYIE_C1FIFOINT30_bit at C1FIFOINT30.B24;
    sbit  TXHALFIE_C1FIFOINT30_bit at C1FIFOINT30.B25;
    sbit  TXNFULLIE_C1FIFOINT30_bit at C1FIFOINT30.B26;
sfr unsigned long   volatile C1FIFOINT30CLR   absolute 0xBF88BAE4;
sfr unsigned long   volatile C1FIFOINT30SET   absolute 0xBF88BAE8;
sfr unsigned long   volatile C1FIFOINT30INV   absolute 0xBF88BAEC;
sfr atomic unsigned long   volatile C1FIFOUA30       absolute 0xBF88BAF0;
sfr unsigned long   volatile C1FIFOUA30CLR    absolute 0xBF88BAF4;
sfr unsigned long   volatile C1FIFOUA30SET    absolute 0xBF88BAF8;
sfr unsigned long   volatile C1FIFOUA30INV    absolute 0xBF88BAFC;
sfr atomic unsigned long   volatile C1FIFOCI30       absolute 0xBF88BB00;
    sbit  CFIFOCI0_C1FIFOCI30_bit at C1FIFOCI30.B0;
    sbit  CFIFOCI1_C1FIFOCI30_bit at C1FIFOCI30.B1;
    sbit  CFIFOCI2_C1FIFOCI30_bit at C1FIFOCI30.B2;
    sbit  CFIFOCI3_C1FIFOCI30_bit at C1FIFOCI30.B3;
    sbit  CFIFOCI4_C1FIFOCI30_bit at C1FIFOCI30.B4;
sfr unsigned long   volatile C1FIFOCI30CLR    absolute 0xBF88BB04;
sfr unsigned long   volatile C1FIFOCI30SET    absolute 0xBF88BB08;
sfr unsigned long   volatile C1FIFOCI30INV    absolute 0xBF88BB0C;
sfr atomic unsigned long   volatile C1FIFOCON31      absolute 0xBF88BB10;
    sbit  TXPRI0_C1FIFOCON31_bit at C1FIFOCON31.B0;
    sbit  TXPRI1_C1FIFOCON31_bit at C1FIFOCON31.B1;
    sbit  RTREN_C1FIFOCON31_bit at C1FIFOCON31.B2;
    sbit  TXREQ_C1FIFOCON31_bit at C1FIFOCON31.B3;
    sbit  TXERR_C1FIFOCON31_bit at C1FIFOCON31.B4;
    sbit  TXLARB_C1FIFOCON31_bit at C1FIFOCON31.B5;
    sbit  TXABAT_C1FIFOCON31_bit at C1FIFOCON31.B6;
    sbit  TXEN_C1FIFOCON31_bit at C1FIFOCON31.B7;
    sbit  DONLY_C1FIFOCON31_bit at C1FIFOCON31.B12;
    sbit  UINC_C1FIFOCON31_bit at C1FIFOCON31.B13;
    sbit  FRESET_C1FIFOCON31_bit at C1FIFOCON31.B14;
    sbit  FSIZE0_C1FIFOCON31_bit at C1FIFOCON31.B16;
    sbit  FSIZE1_C1FIFOCON31_bit at C1FIFOCON31.B17;
    sbit  FSIZE2_C1FIFOCON31_bit at C1FIFOCON31.B18;
    sbit  FSIZE3_C1FIFOCON31_bit at C1FIFOCON31.B19;
    sbit  FSIZE4_C1FIFOCON31_bit at C1FIFOCON31.B20;
sfr unsigned long   volatile C1FIFOCON31CLR   absolute 0xBF88BB14;
sfr unsigned long   volatile C1FIFOCON31SET   absolute 0xBF88BB18;
sfr unsigned long   volatile C1FIFOCON31INV   absolute 0xBF88BB1C;
sfr atomic unsigned long   volatile C1FIFOINT31      absolute 0xBF88BB20;
    sbit  RXNEMPTYIF_C1FIFOINT31_bit at C1FIFOINT31.B0;
    sbit  RXHALFIF_C1FIFOINT31_bit at C1FIFOINT31.B1;
    sbit  RXFULLIF_C1FIFOINT31_bit at C1FIFOINT31.B2;
    sbit  RXOVFLIF_C1FIFOINT31_bit at C1FIFOINT31.B3;
    sbit  TXEMPTYIF_C1FIFOINT31_bit at C1FIFOINT31.B8;
    sbit  TXHALFIF_C1FIFOINT31_bit at C1FIFOINT31.B9;
    sbit  TXNFULLIF_C1FIFOINT31_bit at C1FIFOINT31.B10;
    sbit  RXNEMPTYIE_C1FIFOINT31_bit at C1FIFOINT31.B16;
    sbit  RXHALFIE_C1FIFOINT31_bit at C1FIFOINT31.B17;
    sbit  RXFULLIE_C1FIFOINT31_bit at C1FIFOINT31.B18;
    sbit  RXOVFLIE_C1FIFOINT31_bit at C1FIFOINT31.B19;
    sbit  TXEMPTYIE_C1FIFOINT31_bit at C1FIFOINT31.B24;
    sbit  TXHALFIE_C1FIFOINT31_bit at C1FIFOINT31.B25;
    sbit  TXNFULLIE_C1FIFOINT31_bit at C1FIFOINT31.B26;
sfr unsigned long   volatile C1FIFOINT31CLR   absolute 0xBF88BB24;
sfr unsigned long   volatile C1FIFOINT31SET   absolute 0xBF88BB28;
sfr unsigned long   volatile C1FIFOINT31INV   absolute 0xBF88BB2C;
sfr atomic unsigned long   volatile C1FIFOUA31       absolute 0xBF88BB30;
sfr unsigned long   volatile C1FIFOUA31CLR    absolute 0xBF88BB34;
sfr unsigned long   volatile C1FIFOUA31SET    absolute 0xBF88BB38;
sfr unsigned long   volatile C1FIFOUA31INV    absolute 0xBF88BB3C;
sfr atomic unsigned long   volatile C1FIFOCI31       absolute 0xBF88BB40;
    sbit  CFIFOCI0_C1FIFOCI31_bit at C1FIFOCI31.B0;
    sbit  CFIFOCI1_C1FIFOCI31_bit at C1FIFOCI31.B1;
    sbit  CFIFOCI2_C1FIFOCI31_bit at C1FIFOCI31.B2;
    sbit  CFIFOCI3_C1FIFOCI31_bit at C1FIFOCI31.B3;
    sbit  CFIFOCI4_C1FIFOCI31_bit at C1FIFOCI31.B4;
sfr unsigned long   volatile C1FIFOCI31CLR    absolute 0xBF88BB44;
sfr unsigned long   volatile C1FIFOCI31SET    absolute 0xBF88BB48;
sfr unsigned long   volatile C1FIFOCI31INV    absolute 0xBF88BB4C;
sfr unsigned long   volatile DEVCFG3          absolute 0xBFC00BF0;
    const register unsigned short int USERID0 = 0;
    sbit  USERID0_bit at DEVCFG3.B0;
    const register unsigned short int USERID1 = 1;
    sbit  USERID1_bit at DEVCFG3.B1;
    const register unsigned short int USERID2 = 2;
    sbit  USERID2_bit at DEVCFG3.B2;
    const register unsigned short int USERID3 = 3;
    sbit  USERID3_bit at DEVCFG3.B3;
    const register unsigned short int USERID4 = 4;
    sbit  USERID4_bit at DEVCFG3.B4;
    const register unsigned short int USERID5 = 5;
    sbit  USERID5_bit at DEVCFG3.B5;
    const register unsigned short int USERID6 = 6;
    sbit  USERID6_bit at DEVCFG3.B6;
    const register unsigned short int USERID7 = 7;
    sbit  USERID7_bit at DEVCFG3.B7;
    const register unsigned short int USERID8 = 8;
    sbit  USERID8_bit at DEVCFG3.B8;
    const register unsigned short int USERID9 = 9;
    sbit  USERID9_bit at DEVCFG3.B9;
    const register unsigned short int USERID10 = 10;
    sbit  USERID10_bit at DEVCFG3.B10;
    const register unsigned short int USERID11 = 11;
    sbit  USERID11_bit at DEVCFG3.B11;
    const register unsigned short int USERID12 = 12;
    sbit  USERID12_bit at DEVCFG3.B12;
    const register unsigned short int USERID13 = 13;
    sbit  USERID13_bit at DEVCFG3.B13;
    const register unsigned short int USERID14 = 14;
    sbit  USERID14_bit at DEVCFG3.B14;
    const register unsigned short int USERID15 = 15;
    sbit  USERID15_bit at DEVCFG3.B15;
    const register unsigned short int PMDL1WAY = 28;
    sbit  PMDL1WAY_bit at DEVCFG3.B28;
    const register unsigned short int IOL1WAY = 29;
    sbit  IOL1WAY_bit at DEVCFG3.B29;
    const register unsigned short int FUSBIDIO = 30;
    sbit  FUSBIDIO_bit at DEVCFG3.B30;
    const register unsigned short int FVBUSONIO = 31;
    sbit  FVBUSONIO_bit at DEVCFG3.B31;
sfr unsigned long   volatile DEVCFG2          absolute 0xBFC00BF4;
    const register unsigned short int FPLLIDIV0 = 0;
    sbit  FPLLIDIV0_bit at DEVCFG2.B0;
    const register unsigned short int FPLLIDIV1 = 1;
    sbit  FPLLIDIV1_bit at DEVCFG2.B1;
    const register unsigned short int FPLLIDIV2 = 2;
    sbit  FPLLIDIV2_bit at DEVCFG2.B2;
    const register unsigned short int FPLLMUL0 = 4;
    sbit  FPLLMUL0_bit at DEVCFG2.B4;
    const register unsigned short int FPLLMUL1 = 5;
    sbit  FPLLMUL1_bit at DEVCFG2.B5;
    const register unsigned short int FPLLMUL2 = 6;
    sbit  FPLLMUL2_bit at DEVCFG2.B6;
    const register unsigned short int UPLLIDIV0 = 8;
    sbit  UPLLIDIV0_bit at DEVCFG2.B8;
    const register unsigned short int UPLLIDIV1 = 9;
    sbit  UPLLIDIV1_bit at DEVCFG2.B9;
    const register unsigned short int UPLLIDIV2 = 10;
    sbit  UPLLIDIV2_bit at DEVCFG2.B10;
    const register unsigned short int UPLLEN = 15;
    sbit  UPLLEN_bit at DEVCFG2.B15;
    const register unsigned short int FPLLODIV0 = 16;
    sbit  FPLLODIV0_bit at DEVCFG2.B16;
    const register unsigned short int FPLLODIV1 = 17;
    sbit  FPLLODIV1_bit at DEVCFG2.B17;
    const register unsigned short int FPLLODIV2 = 18;
    sbit  FPLLODIV2_bit at DEVCFG2.B18;
sfr unsigned long   volatile DEVCFG1          absolute 0xBFC00BF8;
    const register unsigned short int FNOSC0 = 0;
    sbit  FNOSC0_bit at DEVCFG1.B0;
    const register unsigned short int FNOSC1 = 1;
    sbit  FNOSC1_bit at DEVCFG1.B1;
    const register unsigned short int FNOSC2 = 2;
    sbit  FNOSC2_bit at DEVCFG1.B2;
    const register unsigned short int FSOSCEN = 5;
    sbit  FSOSCEN_bit at DEVCFG1.B5;
    const register unsigned short int IESO = 7;
    sbit  IESO_bit at DEVCFG1.B7;
    const register unsigned short int POSCMOD0 = 8;
    sbit  POSCMOD0_bit at DEVCFG1.B8;
    const register unsigned short int POSCMOD1 = 9;
    sbit  POSCMOD1_bit at DEVCFG1.B9;
    const register unsigned short int OSCIOFNC = 10;
    sbit  OSCIOFNC_bit at DEVCFG1.B10;
    const register unsigned short int FPBDIV0 = 12;
    sbit  FPBDIV0_bit at DEVCFG1.B12;
    const register unsigned short int FPBDIV1 = 13;
    sbit  FPBDIV1_bit at DEVCFG1.B13;
    const register unsigned short int FCKSM0 = 14;
    sbit  FCKSM0_bit at DEVCFG1.B14;
    const register unsigned short int FCKSM1 = 15;
    sbit  FCKSM1_bit at DEVCFG1.B15;
    sbit  WDTPS0_DEVCFG1_bit at DEVCFG1.B16;
    sbit  WDTPS1_DEVCFG1_bit at DEVCFG1.B17;
    sbit  WDTPS2_DEVCFG1_bit at DEVCFG1.B18;
    sbit  WDTPS3_DEVCFG1_bit at DEVCFG1.B19;
    sbit  WDTPS4_DEVCFG1_bit at DEVCFG1.B20;
    const register unsigned short int WINDIS = 22;
    sbit  WINDIS_bit at DEVCFG1.B22;
    const register unsigned short int FWDTEN = 23;
    sbit  FWDTEN_bit at DEVCFG1.B23;
    const register unsigned short int FWDTWINSZ0 = 24;
    sbit  FWDTWINSZ0_bit at DEVCFG1.B24;
    const register unsigned short int FWDTWINSZ1 = 25;
    sbit  FWDTWINSZ1_bit at DEVCFG1.B25;

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

typedef struct tagI2C1ACONBITS {
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
} typeI2C1ACONBITS;
sfr atomic volatile typeI2C1ACONBITS I2C1ACONbits absolute 0xBF805000;

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
sfr volatile typeI2C1CONBITS I2C1ACONCLRbits absolute 0xBF805004;
sfr volatile typeI2C1CONBITS I2C1ACONSETbits absolute 0xBF805008;
sfr volatile typeI2C1CONBITS I2C1ACONINVbits absolute 0xBF80500C;

typedef struct tagI2C1ASTATBITS {
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
} typeI2C1ASTATBITS;
sfr atomic volatile typeI2C1ASTATBITS I2C1ASTATbits absolute 0xBF805010;

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
sfr volatile typeI2C1STATBITS I2C1ASTATCLRbits absolute 0xBF805014;
sfr volatile typeI2C1STATBITS I2C1ASTATSETbits absolute 0xBF805018;
sfr volatile typeI2C1STATBITS I2C1ASTATINVbits absolute 0xBF80501C;
sfr atomic volatile typeI2C1STATBITS I2C1AADDbits absolute 0xBF805020;
sfr volatile typeI2C1STATBITS I2C1AADDCLRbits absolute 0xBF805024;
sfr volatile typeI2C1STATBITS I2C1AADDSETbits absolute 0xBF805028;
sfr volatile typeI2C1STATBITS I2C1AADDINVbits absolute 0xBF80502C;
sfr atomic volatile typeI2C1STATBITS I2C1AMSKbits absolute 0xBF805030;
sfr volatile typeI2C1STATBITS I2C1AMSKCLRbits absolute 0xBF805034;
sfr volatile typeI2C1STATBITS I2C1AMSKSETbits absolute 0xBF805038;
sfr volatile typeI2C1STATBITS I2C1AMSKINVbits absolute 0xBF80503C;
sfr atomic volatile typeI2C1STATBITS I2C1ABRGbits absolute 0xBF805040;
sfr volatile typeI2C1STATBITS I2C1ABRGCLRbits absolute 0xBF805044;
sfr volatile typeI2C1STATBITS I2C1ABRGSETbits absolute 0xBF805048;
sfr volatile typeI2C1STATBITS I2C1ABRGINVbits absolute 0xBF80504C;
sfr atomic volatile typeI2C1STATBITS I2C1ATRNbits absolute 0xBF805050;
sfr volatile typeI2C1STATBITS I2C1ATRNCLRbits absolute 0xBF805054;
sfr volatile typeI2C1STATBITS I2C1ATRNSETbits absolute 0xBF805058;
sfr volatile typeI2C1STATBITS I2C1ATRNINVbits absolute 0xBF80505C;
sfr volatile typeI2C1STATBITS I2C1ARCVbits absolute 0xBF805060;

typedef struct tagI2C2ACONBITS {
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
} typeI2C2ACONBITS;
sfr atomic volatile typeI2C2ACONBITS I2C2ACONbits absolute 0xBF805100;

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
sfr volatile typeI2C2CONBITS I2C2ACONCLRbits absolute 0xBF805104;
sfr volatile typeI2C2CONBITS I2C2ACONSETbits absolute 0xBF805108;
sfr volatile typeI2C2CONBITS I2C2ACONINVbits absolute 0xBF80510C;

typedef struct tagI2C2ASTATBITS {
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
} typeI2C2ASTATBITS;
sfr atomic volatile typeI2C2ASTATBITS I2C2ASTATbits absolute 0xBF805110;

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
sfr volatile typeI2C2STATBITS I2C2ASTATCLRbits absolute 0xBF805114;
sfr volatile typeI2C2STATBITS I2C2ASTATSETbits absolute 0xBF805118;
sfr volatile typeI2C2STATBITS I2C2ASTATINVbits absolute 0xBF80511C;
sfr atomic volatile typeI2C2STATBITS I2C2AADDbits absolute 0xBF805120;
sfr volatile typeI2C2STATBITS I2C2AADDCLRbits absolute 0xBF805124;
sfr volatile typeI2C2STATBITS I2C2AADDSETbits absolute 0xBF805128;
sfr volatile typeI2C2STATBITS I2C2AADDINVbits absolute 0xBF80512C;
sfr atomic volatile typeI2C2STATBITS I2C2AMSKbits absolute 0xBF805130;
sfr volatile typeI2C2STATBITS I2C2AMSKCLRbits absolute 0xBF805134;
sfr volatile typeI2C2STATBITS I2C2AMSKSETbits absolute 0xBF805138;
sfr volatile typeI2C2STATBITS I2C2AMSKINVbits absolute 0xBF80513C;
sfr atomic volatile typeI2C2STATBITS I2C2ABRGbits absolute 0xBF805140;
sfr volatile typeI2C2STATBITS I2C2ABRGCLRbits absolute 0xBF805144;
sfr volatile typeI2C2STATBITS I2C2ABRGSETbits absolute 0xBF805148;
sfr volatile typeI2C2STATBITS I2C2ABRGINVbits absolute 0xBF80514C;
sfr atomic volatile typeI2C2STATBITS I2C2ATRNbits absolute 0xBF805150;
sfr volatile typeI2C2STATBITS I2C2ATRNCLRbits absolute 0xBF805154;
sfr volatile typeI2C2STATBITS I2C2ATRNSETbits absolute 0xBF805158;
sfr volatile typeI2C2STATBITS I2C2ATRNINVbits absolute 0xBF80515C;
sfr volatile typeI2C2STATBITS I2C2ARCVbits absolute 0xBF805160;

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
sfr volatile typeSPI1CONBITS SPI1CONCLRbits absolute 0xBF805804;
sfr volatile typeSPI1CONBITS SPI1CONSETbits absolute 0xBF805808;
sfr volatile typeSPI1CONBITS SPI1CONINVbits absolute 0xBF80580C;

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
sfr volatile typeSPI1STATBITS SPI1STATCLRbits absolute 0xBF805814;
sfr volatile typeSPI1STATBITS SPI1STATSETbits absolute 0xBF805818;
sfr volatile typeSPI1STATBITS SPI1STATINVbits absolute 0xBF80581C;
sfr volatile typeSPI1STATBITS SPI1BUFbits absolute 0xBF805820;
sfr atomic volatile typeSPI1STATBITS SPI1BRGbits absolute 0xBF805830;
sfr volatile typeSPI1STATBITS SPI1BRGCLRbits absolute 0xBF805834;
sfr volatile typeSPI1STATBITS SPI1BRGSETbits absolute 0xBF805838;
sfr volatile typeSPI1STATBITS SPI1BRGINVbits absolute 0xBF80583C;

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
sfr volatile typeSPI1CON2BITS SPI1CON2CLRbits absolute 0xBF805844;
sfr volatile typeSPI1CON2BITS SPI1CON2SETbits absolute 0xBF805848;
sfr volatile typeSPI1CON2BITS SPI1CON2INVbits absolute 0xBF80584C;

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
sfr volatile typeSPI2CONBITS SPI2CONCLRbits absolute 0xBF805A04;
sfr volatile typeSPI2CONBITS SPI2CONSETbits absolute 0xBF805A08;
sfr volatile typeSPI2CONBITS SPI2CONINVbits absolute 0xBF805A0C;

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
sfr volatile typeSPI2STATBITS SPI2STATCLRbits absolute 0xBF805A14;
sfr volatile typeSPI2STATBITS SPI2STATSETbits absolute 0xBF805A18;
sfr volatile typeSPI2STATBITS SPI2STATINVbits absolute 0xBF805A1C;
sfr volatile typeSPI2STATBITS SPI2BUFbits absolute 0xBF805A20;
sfr atomic volatile typeSPI2STATBITS SPI2BRGbits absolute 0xBF805A30;
sfr volatile typeSPI2STATBITS SPI2BRGCLRbits absolute 0xBF805A34;
sfr volatile typeSPI2STATBITS SPI2BRGSETbits absolute 0xBF805A38;
sfr volatile typeSPI2STATBITS SPI2BRGINVbits absolute 0xBF805A3C;

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
sfr volatile typeSPI2CON2BITS SPI2CON2CLRbits absolute 0xBF805A44;
sfr volatile typeSPI2CON2BITS SPI2CON2SETbits absolute 0xBF805A48;
sfr volatile typeSPI2CON2BITS SPI2CON2INVbits absolute 0xBF805A4C;

typedef struct tagSPI3CONBITS {
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
} typeSPI3CONBITS;
sfr atomic volatile typeSPI3CONBITS SPI3CONbits absolute 0xBF805C00;
sfr volatile typeSPI3CONBITS SPI3CONCLRbits absolute 0xBF805C04;
sfr volatile typeSPI3CONBITS SPI3CONSETbits absolute 0xBF805C08;
sfr volatile typeSPI3CONBITS SPI3CONINVbits absolute 0xBF805C0C;

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
} typeSPI3STATBITS;
sfr atomic volatile typeSPI3STATBITS SPI3STATbits absolute 0xBF805C10;
sfr volatile typeSPI3STATBITS SPI3STATCLRbits absolute 0xBF805C14;
sfr volatile typeSPI3STATBITS SPI3STATSETbits absolute 0xBF805C18;
sfr volatile typeSPI3STATBITS SPI3STATINVbits absolute 0xBF805C1C;
sfr volatile typeSPI3STATBITS SPI3BUFbits absolute 0xBF805C20;
sfr atomic volatile typeSPI3STATBITS SPI3BRGbits absolute 0xBF805C30;
sfr volatile typeSPI3STATBITS SPI3BRGCLRbits absolute 0xBF805C34;
sfr volatile typeSPI3STATBITS SPI3BRGSETbits absolute 0xBF805C38;
sfr volatile typeSPI3STATBITS SPI3BRGINVbits absolute 0xBF805C3C;

typedef struct tagSPI3CON2BITS {
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
} typeSPI3CON2BITS;
sfr atomic volatile typeSPI3CON2BITS SPI3CON2bits absolute 0xBF805C40;
sfr volatile typeSPI3CON2BITS SPI3CON2CLRbits absolute 0xBF805C44;
sfr volatile typeSPI3CON2BITS SPI3CON2SETbits absolute 0xBF805C48;
sfr volatile typeSPI3CON2BITS SPI3CON2INVbits absolute 0xBF805C4C;

typedef struct tagU1AMODEBITS {
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
} typeU1AMODEBITS;
sfr atomic volatile typeU1AMODEBITS U1AMODEbits absolute 0xBF806000;

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
sfr volatile typeU1MODEBITS U1AMODECLRbits absolute 0xBF806004;
sfr volatile typeU1MODEBITS U1AMODESETbits absolute 0xBF806008;
sfr volatile typeU1MODEBITS U1AMODEINVbits absolute 0xBF80600C;

typedef struct tagU1ASTABITS {
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
} typeU1ASTABITS;
sfr atomic volatile typeU1ASTABITS U1ASTAbits absolute 0xBF806010;

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
sfr volatile typeU1STABITS U1ASTACLRbits absolute 0xBF806014;
sfr volatile typeU1STABITS U1ASTASETbits absolute 0xBF806018;
sfr volatile typeU1STABITS U1ASTAINVbits absolute 0xBF80601C;
sfr volatile typeU1STABITS U1ATXREGbits absolute 0xBF806020;
sfr volatile typeU1STABITS U1ARXREGbits absolute 0xBF806030;
sfr atomic volatile typeU1STABITS U1ABRGbits absolute 0xBF806040;
sfr volatile typeU1STABITS U1ABRGCLRbits absolute 0xBF806044;
sfr volatile typeU1STABITS U1ABRGSETbits absolute 0xBF806048;
sfr volatile typeU1STABITS U1ABRGINVbits absolute 0xBF80604C;

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

typedef struct tagU3AMODEBITS {
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
} typeU3AMODEBITS;
sfr atomic volatile typeU3AMODEBITS U3AMODEbits absolute 0xBF806200;
sfr volatile typeU3AMODEBITS U2MODECLRbits absolute 0xBF806204;
sfr volatile typeU3AMODEBITS U2MODESETbits absolute 0xBF806208;
sfr volatile typeU3AMODEBITS U2MODEINVbits absolute 0xBF80620C;

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

typedef struct tagU3ASTABITS {
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
} typeU3ASTABITS;
sfr atomic volatile typeU3ASTABITS U3ASTAbits absolute 0xBF806210;
sfr volatile typeU3ASTABITS U2STACLRbits absolute 0xBF806214;
sfr volatile typeU3ASTABITS U2STASETbits absolute 0xBF806218;
sfr volatile typeU3ASTABITS U2STAINVbits absolute 0xBF80621C;
sfr volatile typeU3ASTABITS U2TXREGbits absolute 0xBF806220;
sfr volatile typeU3ASTABITS U2RXREGbits absolute 0xBF806230;
sfr atomic volatile typeU3ASTABITS U2BRGbits absolute 0xBF806240;
sfr volatile typeU3ASTABITS U2BRGCLRbits absolute 0xBF806244;
sfr volatile typeU3ASTABITS U2BRGSETbits absolute 0xBF806248;
sfr volatile typeU3ASTABITS U2BRGINVbits absolute 0xBF80624C;

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

typedef struct tagU5aMODEBITS {
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
} typeU5aMODEBITS;
sfr atomic volatile typeU5aMODEBITS U5aMODEbits absolute 0xBF806400;
sfr volatile typeU5aMODEBITS U3MODECLRbits absolute 0xBF806404;
sfr volatile typeU5aMODEBITS U3MODESETbits absolute 0xBF806408;
sfr volatile typeU5aMODEBITS U3MODEINVbits absolute 0xBF80640C;

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

typedef struct tagU5aSTABITS {
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
} typeU5aSTABITS;
sfr atomic volatile typeU5aSTABITS U5aSTAbits absolute 0xBF806410;
sfr volatile typeU5aSTABITS U3STACLRbits absolute 0xBF806414;
sfr volatile typeU5aSTABITS U3STASETbits absolute 0xBF806418;
sfr volatile typeU5aSTABITS U3STAINVbits absolute 0xBF80641C;
sfr volatile typeU5aSTABITS U3TXREGbits absolute 0xBF806420;
sfr volatile typeU5aSTABITS U3RXREGbits absolute 0xBF806430;
sfr atomic volatile typeU5aSTABITS U3BRGbits absolute 0xBF806440;
sfr volatile typeU5aSTABITS U3BRGCLRbits absolute 0xBF806444;
sfr volatile typeU5aSTABITS U3BRGSETbits absolute 0xBF806448;
sfr volatile typeU5aSTABITS U3BRGINVbits absolute 0xBF80644C;

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
} typeU4MODEBITS;
sfr atomic volatile typeU4MODEBITS U4MODEbits absolute 0xBF806600;

typedef struct tagU7AMODEBITS {
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
} typeU7AMODEBITS;
sfr atomic volatile typeU7AMODEBITS U7AMODEbits absolute 0xBF806600;
sfr volatile typeU7AMODEBITS U4MODECLRbits absolute 0xBF806604;
sfr volatile typeU7AMODEBITS U4MODESETbits absolute 0xBF806608;
sfr volatile typeU7AMODEBITS U4MODEINVbits absolute 0xBF80660C;

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
sfr atomic volatile typeU4STABITS U4STAbits absolute 0xBF806610;

typedef struct tagU7ASTABITS {
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
} typeU7ASTABITS;
sfr atomic volatile typeU7ASTABITS U7ASTAbits absolute 0xBF806610;
sfr volatile typeU7ASTABITS U4STACLRbits absolute 0xBF806614;
sfr volatile typeU7ASTABITS U4STASETbits absolute 0xBF806618;
sfr volatile typeU7ASTABITS U4STAINVbits absolute 0xBF80661C;
sfr volatile typeU7ASTABITS U4TXREGbits absolute 0xBF806620;
sfr volatile typeU7ASTABITS U4RXREGbits absolute 0xBF806630;
sfr atomic volatile typeU7ASTABITS U4BRGbits absolute 0xBF806640;
sfr volatile typeU7ASTABITS U4BRGCLRbits absolute 0xBF806644;
sfr volatile typeU7ASTABITS U4BRGSETbits absolute 0xBF806648;
sfr volatile typeU7ASTABITS U4BRGINVbits absolute 0xBF80664C;

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
    unsigned :1;
    unsigned DUALBUF:1;
    unsigned :5;
    unsigned RDSTART:1;
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
    unsigned ADDR14:1;
    unsigned ADDR15:1;
  };
  struct {
    unsigned :14;
    unsigned CS:2;
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

typedef struct tagPMDOUTBITS {
union {
  struct {
    unsigned DATAOUT:32;
  };
  struct {
    unsigned w:32;
  };
};
} typePMDOUTBITS;
sfr atomic volatile typePMDOUTBITS PMDOUTbits absolute 0xBF807030;
sfr volatile typePMDOUTBITS PMDOUTCLRbits absolute 0xBF807034;
sfr volatile typePMDOUTBITS PMDOUTSETbits absolute 0xBF807038;
sfr volatile typePMDOUTBITS PMDOUTINVbits absolute 0xBF80703C;

typedef struct tagPMDINBITS {
union {
  struct {
    unsigned DATAIN:32;
  };
  struct {
    unsigned w:32;
  };
};
} typePMDINBITS;
sfr atomic volatile typePMDINBITS PMDINbits absolute 0xBF807040;
sfr volatile typePMDINBITS PMDINCLRbits absolute 0xBF807044;
sfr volatile typePMDINBITS PMDINSETbits absolute 0xBF807048;
sfr volatile typePMDINBITS PMDININVbits absolute 0xBF80704C;

typedef struct tagPMAENBITS {
union {
  struct {
    unsigned PTEN:24;
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

typedef struct tagPMWADDRBITS {
union {
  struct {
    unsigned WADDR:24;
  };
  struct {
    unsigned :14;
    unsigned WCS:2;
    unsigned :6;
    unsigned WCSA:2;
  };
  struct {
    unsigned :14;
    unsigned WCS1:1;
    unsigned WCS2:1;
    unsigned :6;
    unsigned WCS1A:1;
    unsigned WCS2A:1;
  };
  struct {
    unsigned w:32;
  };
  struct {
    unsigned :14;
    unsigned WADDR14:1;
    unsigned WADDR15:1;
    unsigned :6;
    unsigned WADDR22:1;
    unsigned WADDR23:1;
  };
};
} typePMWADDRBITS;
sfr atomic volatile typePMWADDRBITS PMWADDRbits absolute 0xBF807070;
sfr volatile typePMWADDRBITS PMWADDRCLRbits absolute 0xBF807074;
sfr volatile typePMWADDRBITS PMWADDRSETbits absolute 0xBF807078;
sfr volatile typePMWADDRBITS PMWADDRINVbits absolute 0xBF80707C;

typedef struct tagPMRADDRBITS {
union {
  struct {
    unsigned RADDR:14;
    unsigned RADDR14:1;
    unsigned RADDR15:1;
  };
  struct {
    unsigned :14;
    unsigned RCS:2;
  };
  struct {
    unsigned :14;
    unsigned RCS1:1;
    unsigned RCS2:1;
  };
  struct {
    unsigned w:32;
  };
};
} typePMRADDRBITS;
sfr atomic volatile typePMRADDRBITS PMRADDRbits absolute 0xBF807080;
sfr volatile typePMRADDRBITS PMRADDRCLRbits absolute 0xBF807084;
sfr volatile typePMRADDRBITS PMRADDRSETbits absolute 0xBF807088;
sfr volatile typePMRADDRBITS PMRADDRINVbits absolute 0xBF80708C;

typedef struct tagPMRDINBITS {
union {
  struct {
    unsigned RDATAIN:32;
  };
  struct {
    unsigned w:32;
  };
};
} typePMRDINBITS;
sfr atomic volatile typePMRDINBITS PMRDINbits absolute 0xBF807090;
sfr volatile typePMRDINBITS PMRDINCLRbits absolute 0xBF807094;
sfr volatile typePMRDINBITS PMRDINSETbits absolute 0xBF807098;
sfr volatile typePMRDINBITS PMRDININVbits absolute 0xBF80709C;

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
    unsigned CH0SA:6;
    unsigned :1;
    unsigned CH0NA:1;
    unsigned CH0SB:6;
    unsigned :1;
    unsigned CH0NB:1;
  };
  struct {
    unsigned :16;
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
    unsigned CSSL16:1;
    unsigned CSSL17:1;
    unsigned CSSL18:1;
    unsigned CSSL19:1;
    unsigned CSSL20:1;
    unsigned CSSL21:1;
    unsigned CSSL22:1;
    unsigned CSSL23:1;
    unsigned CSSL24:1;
    unsigned CSSL25:1;
    unsigned CSSL26:1;
    unsigned CSSL27:1;
  };
  struct {
    unsigned CSSL:32;
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
sfr atomic volatile typeAD1CSSLBITS AD1CSSL2bits absolute 0xBF809060;
sfr volatile typeAD1CSSLBITS AD1CSSL2CLRbits absolute 0xBF809064;
sfr volatile typeAD1CSSLBITS AD1CSSL2SETbits absolute 0xBF809068;
sfr volatile typeAD1CSSLBITS AD1CSSL2INVbits absolute 0xBF80906C;
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
  unsigned :2;
  unsigned JTAGEN:1;
  unsigned :8;
  unsigned PMDLOCK:1;
  unsigned IOLOCK:1;
};
} typeCFGCONBITS;
sfr volatile typeCFGCONBITS CFGCONbits absolute 0xBF80F200;

typedef struct tagDDPCONBITS {
union {
  unsigned TDOEN:1;
  unsigned :2;
  unsigned JTAGEN:1;
  unsigned :8;
  unsigned PMDLOCK:1;
  unsigned IOLOCK:1;
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
  struct {
    unsigned U1MD:1;
    unsigned U2MD:1;
    unsigned U3MD:1;
    unsigned U4MD:1;
    unsigned :4;
    unsigned SPI1MD:1;
    unsigned SPI2MD:1;
    unsigned SPI3MD:1;
    unsigned :5;
    unsigned I2C1MD:1;
    unsigned I2C2MD:1;
    unsigned :6;
    unsigned USB1MD:1;
    unsigned :3;
    unsigned CAN1MD:1;
  };
  struct {
    unsigned :24;
    unsigned USBMD:1;
  };
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
    unsigned :19;
    unsigned HVDR:1;
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

typedef struct tagIC6RBITS {
union {
  unsigned IC6R:4;
};
} typeIC6RBITS;
sfr volatile typeIC6RBITS IC6Rbits absolute 0xBF80FA3C;

typedef struct tagIC7RBITS {
union {
  unsigned IC7R:4;
};
} typeIC7RBITS;
sfr volatile typeIC7RBITS IC7Rbits absolute 0xBF80FA40;

typedef struct tagIC8RBITS {
union {
  unsigned IC8R:4;
};
} typeIC8RBITS;
sfr volatile typeIC8RBITS IC8Rbits absolute 0xBF80FA44;

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

typedef struct tagU3RXRBITS {
union {
  unsigned U3RXR:4;
};
} typeU3RXRBITS;
sfr volatile typeU3RXRBITS U3RXRbits absolute 0xBF80FA60;

typedef struct tagU3CTSRBITS {
union {
  unsigned U3CTSR:4;
};
} typeU3CTSRBITS;
sfr volatile typeU3CTSRBITS U3CTSRbits absolute 0xBF80FA64;

typedef struct tagU4RXRBITS {
union {
  unsigned U4RXR:4;
};
} typeU4RXRBITS;
sfr volatile typeU4RXRBITS U4RXRbits absolute 0xBF80FA68;

typedef struct tagU4CTSRBITS {
union {
  unsigned U4CTSR:4;
};
} typeU4CTSRBITS;
sfr volatile typeU4CTSRBITS U4CTSRbits absolute 0xBF80FA6C;

typedef struct tagU5RXRBITS {
union {
  unsigned U5RXR:4;
};
} typeU5RXRBITS;
sfr volatile typeU5RXRBITS U5RXRbits absolute 0xBF80FA70;

typedef struct tagU5CTSRBITS {
union {
  unsigned U5CTSR:4;
};
} typeU5CTSRBITS;
sfr volatile typeU5CTSRBITS U5CTSRbits absolute 0xBF80FA74;

typedef struct tagU6RXRBITS {
union {
  unsigned U6RXR:4;
};
} typeU6RXRBITS;
sfr volatile typeU6RXRBITS U6RXRbits absolute 0xBF80FA78;

typedef struct tagU6CTSRBITS {
union {
  unsigned U6CTSR:4;
};
} typeU6CTSRBITS;
sfr volatile typeU6CTSRBITS U6CTSRbits absolute 0xBF80FA7C;

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

typedef struct tagSDI3RBITS {
union {
  unsigned SDI3R:4;
};
} typeSDI3RBITS;
sfr volatile typeSDI3RBITS SDI3Rbits absolute 0xBF80FA9C;

typedef struct tagSS3RBITS {
union {
  unsigned SS3R:4;
};
} typeSS3RBITS;
sfr volatile typeSS3RBITS SS3Rbits absolute 0xBF80FAA0;

typedef struct tagSDI4RBITS {
union {
  unsigned SDI4R:4;
};
} typeSDI4RBITS;
sfr volatile typeSDI4RBITS SDI4Rbits absolute 0xBF80FAA8;

typedef struct tagSS4RBITS {
union {
  unsigned SS4R:4;
};
} typeSS4RBITS;
sfr volatile typeSS4RBITS SS4Rbits absolute 0xBF80FAAC;

typedef struct tagSDI5RBITS {
union {
  unsigned SDI5R:4;
};
} typeSDI5RBITS;
sfr volatile typeSDI5RBITS SDI5Rbits absolute 0xBF80FAB4;

typedef struct tagSS5RBITS {
union {
  unsigned SS5R:4;
};
} typeSS5RBITS;
sfr volatile typeSS5RBITS SS5Rbits absolute 0xBF80FAB8;

typedef struct tagSDI6RBITS {
union {
  unsigned SDI6R:4;
};
} typeSDI6RBITS;
sfr volatile typeSDI6RBITS SDI6Rbits absolute 0xBF80FAC0;

typedef struct tagSS6RBITS {
union {
  unsigned SS6R:4;
};
} typeSS6RBITS;
sfr volatile typeSS6RBITS SS6Rbits absolute 0xBF80FAC4;

typedef struct tagC1RXRBITS {
union {
  unsigned C1RXR:4;
};
} typeC1RXRBITS;
sfr volatile typeC1RXRBITS C1RXRbits absolute 0xBF80FAC8;

typedef struct tagC2RXRBITS {
union {
  unsigned C2RXR:4;
};
} typeC2RXRBITS;
sfr volatile typeC2RXRBITS C2RXRbits absolute 0xBF80FACC;

typedef struct tagREFCLKIRBITS {
union {
  unsigned REFCLKIR:4;
};
} typeREFCLKIRBITS;
sfr volatile typeREFCLKIRBITS REFCLKIRbits absolute 0xBF80FAD0;

typedef struct tagREFI2RBITS {
union {
  unsigned REFI2R:4;
};
} typeREFI2RBITS;
sfr volatile typeREFI2RBITS REFI2Rbits absolute 0xBF80FAD4;

typedef struct tagREFI3RBITS {
union {
  unsigned REFI3R:4;
};
} typeREFI3RBITS;
sfr volatile typeREFI3RBITS REFI3Rbits absolute 0xBF80FAD8;

typedef struct tagREFI4RBITS {
union {
  unsigned REFI4R:4;
};
} typeREFI4RBITS;
sfr volatile typeREFI4RBITS REFI4Rbits absolute 0xBF80FADC;

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

typedef struct tagRPA5RBITS {
union {
  unsigned RPA5R:4;
};
} typeRPA5RBITS;
sfr volatile typeRPA5RBITS RPA5Rbits absolute 0xBF80FB14;

typedef struct tagRPA6RBITS {
union {
  unsigned RPA6R:4;
};
} typeRPA6RBITS;
sfr volatile typeRPA6RBITS RPA6Rbits absolute 0xBF80FB18;

typedef struct tagRPA7RBITS {
union {
  unsigned RPA7R:4;
};
} typeRPA7RBITS;
sfr volatile typeRPA7RBITS RPA7Rbits absolute 0xBF80FB1C;

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

typedef struct tagRPA10RBITS {
union {
  unsigned RPA10R:4;
};
} typeRPA10RBITS;
sfr volatile typeRPA10RBITS RPA10Rbits absolute 0xBF80FB28;

typedef struct tagRPA11RBITS {
union {
  unsigned RPA11R:4;
};
} typeRPA11RBITS;
sfr volatile typeRPA11RBITS RPA11Rbits absolute 0xBF80FB2C;

typedef struct tagRPA12RBITS {
union {
  unsigned RPA12R:4;
};
} typeRPA12RBITS;
sfr volatile typeRPA12RBITS RPA12Rbits absolute 0xBF80FB30;

typedef struct tagRPA13RBITS {
union {
  unsigned RPA13R:4;
};
} typeRPA13RBITS;
sfr volatile typeRPA13RBITS RPA13Rbits absolute 0xBF80FB34;

typedef struct tagRPA14RBITS {
union {
  unsigned RPA14R:4;
};
} typeRPA14RBITS;
sfr volatile typeRPA14RBITS RPA14Rbits absolute 0xBF80FB38;

typedef struct tagRPA15RBITS {
union {
  unsigned RPA15R:4;
};
} typeRPA15RBITS;
sfr volatile typeRPA15RBITS RPA15Rbits absolute 0xBF80FB3C;

typedef struct tagRPB0RBITS {
union {
  unsigned RPB0R:4;
};
} typeRPB0RBITS;
sfr volatile typeRPB0RBITS RPB0Rbits absolute 0xBF80FB40;

typedef struct tagRPB1RBITS {
union {
  unsigned RPB1R:4;
};
} typeRPB1RBITS;
sfr volatile typeRPB1RBITS RPB1Rbits absolute 0xBF80FB44;

typedef struct tagRPB2RBITS {
union {
  unsigned RPB2R:4;
};
} typeRPB2RBITS;
sfr volatile typeRPB2RBITS RPB2Rbits absolute 0xBF80FB48;

typedef struct tagRPB3RBITS {
union {
  unsigned RPB3R:4;
};
} typeRPB3RBITS;
sfr volatile typeRPB3RBITS RPB3Rbits absolute 0xBF80FB4C;

typedef struct tagRPB4RBITS {
union {
  unsigned RPB4R:4;
};
} typeRPB4RBITS;
sfr volatile typeRPB4RBITS RPB4Rbits absolute 0xBF80FB50;

typedef struct tagRPB5RBITS {
union {
  unsigned RPB5R:4;
};
} typeRPB5RBITS;
sfr volatile typeRPB5RBITS RPB5Rbits absolute 0xBF80FB54;

typedef struct tagRPB6RBITS {
union {
  unsigned RPB6R:4;
};
} typeRPB6RBITS;
sfr volatile typeRPB6RBITS RPB6Rbits absolute 0xBF80FB58;

typedef struct tagRPB7RBITS {
union {
  unsigned RPB7R:4;
};
} typeRPB7RBITS;
sfr volatile typeRPB7RBITS RPB7Rbits absolute 0xBF80FB5C;

typedef struct tagRPB8RBITS {
union {
  unsigned RPB8R:4;
};
} typeRPB8RBITS;
sfr volatile typeRPB8RBITS RPB8Rbits absolute 0xBF80FB60;

typedef struct tagRPB9RBITS {
union {
  unsigned RPB9R:4;
};
} typeRPB9RBITS;
sfr volatile typeRPB9RBITS RPB9Rbits absolute 0xBF80FB64;

typedef struct tagRPB10RBITS {
union {
  unsigned RPB10R:4;
};
} typeRPB10RBITS;
sfr volatile typeRPB10RBITS RPB10Rbits absolute 0xBF80FB68;

typedef struct tagRPB11RBITS {
union {
  unsigned RPB11R:4;
};
} typeRPB11RBITS;
sfr volatile typeRPB11RBITS RPB11Rbits absolute 0xBF80FB6C;

typedef struct tagRPB12RBITS {
union {
  unsigned RPB12R:4;
};
} typeRPB12RBITS;
sfr volatile typeRPB12RBITS RPB12Rbits absolute 0xBF80FB70;

typedef struct tagRPB13RBITS {
union {
  unsigned RPB13R:4;
};
} typeRPB13RBITS;
sfr volatile typeRPB13RBITS RPB13Rbits absolute 0xBF80FB74;

typedef struct tagRPB14RBITS {
union {
  unsigned RPB14R:4;
};
} typeRPB14RBITS;
sfr volatile typeRPB14RBITS RPB14Rbits absolute 0xBF80FB78;

typedef struct tagRPB15RBITS {
union {
  unsigned RPB15R:4;
};
} typeRPB15RBITS;
sfr volatile typeRPB15RBITS RPB15Rbits absolute 0xBF80FB7C;

typedef struct tagRPC0RBITS {
union {
  unsigned RPC0R:4;
};
} typeRPC0RBITS;
sfr volatile typeRPC0RBITS RPC0Rbits absolute 0xBF80FB80;

typedef struct tagRPC1RBITS {
union {
  unsigned RPC1R:4;
};
} typeRPC1RBITS;
sfr volatile typeRPC1RBITS RPC1Rbits absolute 0xBF80FB84;

typedef struct tagRPC2RBITS {
union {
  unsigned RPC2R:4;
};
} typeRPC2RBITS;
sfr volatile typeRPC2RBITS RPC2Rbits absolute 0xBF80FB88;

typedef struct tagRPC3RBITS {
union {
  unsigned RPC3R:4;
};
} typeRPC3RBITS;
sfr volatile typeRPC3RBITS RPC3Rbits absolute 0xBF80FB8C;

typedef struct tagRPC4RBITS {
union {
  unsigned RPC4R:4;
};
} typeRPC4RBITS;
sfr volatile typeRPC4RBITS RPC4Rbits absolute 0xBF80FB90;

typedef struct tagRPC5RBITS {
union {
  unsigned RPC5R:4;
};
} typeRPC5RBITS;
sfr volatile typeRPC5RBITS RPC5Rbits absolute 0xBF80FB94;

typedef struct tagRPC6RBITS {
union {
  unsigned RPC6R:4;
};
} typeRPC6RBITS;
sfr volatile typeRPC6RBITS RPC6Rbits absolute 0xBF80FB98;

typedef struct tagRPC7RBITS {
union {
  unsigned RPC7R:4;
};
} typeRPC7RBITS;
sfr volatile typeRPC7RBITS RPC7Rbits absolute 0xBF80FB9C;

typedef struct tagRPC8RBITS {
union {
  unsigned RPC8R:4;
};
} typeRPC8RBITS;
sfr volatile typeRPC8RBITS RPC8Rbits absolute 0xBF80FBA0;

typedef struct tagRPC9RBITS {
union {
  unsigned RPC9R:4;
};
} typeRPC9RBITS;
sfr volatile typeRPC9RBITS RPC9Rbits absolute 0xBF80FBA4;

typedef struct tagRPC10RBITS {
union {
  unsigned RPC10R:4;
};
} typeRPC10RBITS;
sfr volatile typeRPC10RBITS RPC10Rbits absolute 0xBF80FBA8;

typedef struct tagRPC11RBITS {
union {
  unsigned RPC11R:4;
};
} typeRPC11RBITS;
sfr volatile typeRPC11RBITS RPC11Rbits absolute 0xBF80FBAC;

typedef struct tagRPC12RBITS {
union {
  unsigned RPC12R:4;
};
} typeRPC12RBITS;
sfr volatile typeRPC12RBITS RPC12Rbits absolute 0xBF80FBB0;

typedef struct tagRPC13RBITS {
union {
  unsigned RPC13R:4;
};
} typeRPC13RBITS;
sfr volatile typeRPC13RBITS RPC13Rbits absolute 0xBF80FBB4;

typedef struct tagRPC14RBITS {
union {
  unsigned RPC14R:4;
};
} typeRPC14RBITS;
sfr volatile typeRPC14RBITS RPC14Rbits absolute 0xBF80FBB8;

typedef struct tagRPC15RBITS {
union {
  unsigned RPC15R:4;
};
} typeRPC15RBITS;
sfr volatile typeRPC15RBITS RPC15Rbits absolute 0xBF80FBBC;

typedef struct tagRPD0RBITS {
union {
  unsigned RPD0R:4;
};
} typeRPD0RBITS;
sfr volatile typeRPD0RBITS RPD0Rbits absolute 0xBF80FBC0;

typedef struct tagRPD1RBITS {
union {
  unsigned RPD1R:4;
};
} typeRPD1RBITS;
sfr volatile typeRPD1RBITS RPD1Rbits absolute 0xBF80FBC4;

typedef struct tagRPD2RBITS {
union {
  unsigned RPD2R:4;
};
} typeRPD2RBITS;
sfr volatile typeRPD2RBITS RPD2Rbits absolute 0xBF80FBC8;

typedef struct tagRPD3RBITS {
union {
  unsigned RPD3R:4;
};
} typeRPD3RBITS;
sfr volatile typeRPD3RBITS RPD3Rbits absolute 0xBF80FBCC;

typedef struct tagRPD4RBITS {
union {
  unsigned RPD4R:4;
};
} typeRPD4RBITS;
sfr volatile typeRPD4RBITS RPD4Rbits absolute 0xBF80FBD0;

typedef struct tagRPD5RBITS {
union {
  unsigned RPD5R:4;
};
} typeRPD5RBITS;
sfr volatile typeRPD5RBITS RPD5Rbits absolute 0xBF80FBD4;

typedef struct tagRPD6RBITS {
union {
  unsigned RPD6R:4;
};
} typeRPD6RBITS;
sfr volatile typeRPD6RBITS RPD6Rbits absolute 0xBF80FBD8;

typedef struct tagRPD7RBITS {
union {
  unsigned RPD7R:4;
};
} typeRPD7RBITS;
sfr volatile typeRPD7RBITS RPD7Rbits absolute 0xBF80FBDC;

typedef struct tagRPD8RBITS {
union {
  unsigned RPD8R:4;
};
} typeRPD8RBITS;
sfr volatile typeRPD8RBITS RPD8Rbits absolute 0xBF80FBE0;

typedef struct tagRPD9RBITS {
union {
  unsigned RPD9R:4;
};
} typeRPD9RBITS;
sfr volatile typeRPD9RBITS RPD9Rbits absolute 0xBF80FBE4;

typedef struct tagRPD10RBITS {
union {
  unsigned RPD10R:4;
};
} typeRPD10RBITS;
sfr volatile typeRPD10RBITS RPD10Rbits absolute 0xBF80FBE8;

typedef struct tagRPD11RBITS {
union {
  unsigned RPD11R:4;
};
} typeRPD11RBITS;
sfr volatile typeRPD11RBITS RPD11Rbits absolute 0xBF80FBEC;

typedef struct tagRPD12RBITS {
union {
  unsigned RPD12R:4;
};
} typeRPD12RBITS;
sfr volatile typeRPD12RBITS RPD12Rbits absolute 0xBF80FBF0;

typedef struct tagRPD13RBITS {
union {
  unsigned RPD13R:4;
};
} typeRPD13RBITS;
sfr volatile typeRPD13RBITS RPD13Rbits absolute 0xBF80FBF4;

typedef struct tagRPD14RBITS {
union {
  unsigned RPD14R:4;
};
} typeRPD14RBITS;
sfr volatile typeRPD14RBITS RPD14Rbits absolute 0xBF80FBF8;

typedef struct tagRPD15RBITS {
union {
  unsigned RPD15R:4;
};
} typeRPD15RBITS;
sfr volatile typeRPD15RBITS RPD15Rbits absolute 0xBF80FBFC;

typedef struct tagRPE0RBITS {
union {
  unsigned RPE0R:4;
};
} typeRPE0RBITS;
sfr volatile typeRPE0RBITS RPE0Rbits absolute 0xBF80FC00;

typedef struct tagRPE1RBITS {
union {
  unsigned RPE1R:4;
};
} typeRPE1RBITS;
sfr volatile typeRPE1RBITS RPE1Rbits absolute 0xBF80FC04;

typedef struct tagRPE2RBITS {
union {
  unsigned RPE2R:4;
};
} typeRPE2RBITS;
sfr volatile typeRPE2RBITS RPE2Rbits absolute 0xBF80FC08;

typedef struct tagRPE3RBITS {
union {
  unsigned RPE3R:4;
};
} typeRPE3RBITS;
sfr volatile typeRPE3RBITS RPE3Rbits absolute 0xBF80FC0C;

typedef struct tagRPE4RBITS {
union {
  unsigned RPE4R:4;
};
} typeRPE4RBITS;
sfr volatile typeRPE4RBITS RPE4Rbits absolute 0xBF80FC10;

typedef struct tagRPE5RBITS {
union {
  unsigned RPE5R:4;
};
} typeRPE5RBITS;
sfr volatile typeRPE5RBITS RPE5Rbits absolute 0xBF80FC14;

typedef struct tagRPE6RBITS {
union {
  unsigned RPE6R:4;
};
} typeRPE6RBITS;
sfr volatile typeRPE6RBITS RPE6Rbits absolute 0xBF80FC18;

typedef struct tagRPE7RBITS {
union {
  unsigned RPE7R:4;
};
} typeRPE7RBITS;
sfr volatile typeRPE7RBITS RPE7Rbits absolute 0xBF80FC1C;

typedef struct tagRPE8RBITS {
union {
  unsigned RPE8R:4;
};
} typeRPE8RBITS;
sfr volatile typeRPE8RBITS RPE8Rbits absolute 0xBF80FC20;

typedef struct tagRPE9RBITS {
union {
  unsigned RPE9R:4;
};
} typeRPE9RBITS;
sfr volatile typeRPE9RBITS RPE9Rbits absolute 0xBF80FC24;

typedef struct tagRPE10RBITS {
union {
  unsigned RPE10R:4;
};
} typeRPE10RBITS;
sfr volatile typeRPE10RBITS RPE10Rbits absolute 0xBF80FC28;

typedef struct tagRPE11RBITS {
union {
  unsigned RPE11R:4;
};
} typeRPE11RBITS;
sfr volatile typeRPE11RBITS RPE11Rbits absolute 0xBF80FC2C;

typedef struct tagRPE12RBITS {
union {
  unsigned RPE12R:4;
};
} typeRPE12RBITS;
sfr volatile typeRPE12RBITS RPE12Rbits absolute 0xBF80FC30;

typedef struct tagRPE13RBITS {
union {
  unsigned RPE13R:4;
};
} typeRPE13RBITS;
sfr volatile typeRPE13RBITS RPE13Rbits absolute 0xBF80FC34;

typedef struct tagRPE14RBITS {
union {
  unsigned RPE14R:4;
};
} typeRPE14RBITS;
sfr volatile typeRPE14RBITS RPE14Rbits absolute 0xBF80FC38;

typedef struct tagRPE15RBITS {
union {
  unsigned RPE15R:4;
};
} typeRPE15RBITS;
sfr volatile typeRPE15RBITS RPE15Rbits absolute 0xBF80FC3C;

typedef struct tagRPF0RBITS {
union {
  unsigned RPF0R:4;
};
} typeRPF0RBITS;
sfr volatile typeRPF0RBITS RPF0Rbits absolute 0xBF80FC40;

typedef struct tagRPF1RBITS {
union {
  unsigned RPF1R:4;
};
} typeRPF1RBITS;
sfr volatile typeRPF1RBITS RPF1Rbits absolute 0xBF80FC44;

typedef struct tagRPF2RBITS {
union {
  unsigned RPF2R:4;
};
} typeRPF2RBITS;
sfr volatile typeRPF2RBITS RPF2Rbits absolute 0xBF80FC48;

typedef struct tagRPF3RBITS {
union {
  unsigned RPF3R:4;
};
} typeRPF3RBITS;
sfr volatile typeRPF3RBITS RPF3Rbits absolute 0xBF80FC4C;

typedef struct tagRPF4RBITS {
union {
  unsigned RPF4R:4;
};
} typeRPF4RBITS;
sfr volatile typeRPF4RBITS RPF4Rbits absolute 0xBF80FC50;

typedef struct tagRPF5RBITS {
union {
  unsigned RPF5R:4;
};
} typeRPF5RBITS;
sfr volatile typeRPF5RBITS RPF5Rbits absolute 0xBF80FC54;

typedef struct tagRPF6RBITS {
union {
  unsigned RPF6R:4;
};
} typeRPF6RBITS;
sfr volatile typeRPF6RBITS RPF6Rbits absolute 0xBF80FC58;

typedef struct tagRPF7RBITS {
union {
  unsigned RPF7R:4;
};
} typeRPF7RBITS;
sfr volatile typeRPF7RBITS RPF7Rbits absolute 0xBF80FC5C;

typedef struct tagRPF8RBITS {
union {
  unsigned RPF8R:4;
};
} typeRPF8RBITS;
sfr volatile typeRPF8RBITS RPF8Rbits absolute 0xBF80FC60;

typedef struct tagRPF9RBITS {
union {
  unsigned RPF9R:4;
};
} typeRPF9RBITS;
sfr volatile typeRPF9RBITS RPF9Rbits absolute 0xBF80FC64;

typedef struct tagRPF10RBITS {
union {
  unsigned RPF10R:4;
};
} typeRPF10RBITS;
sfr volatile typeRPF10RBITS RPF10Rbits absolute 0xBF80FC68;

typedef struct tagRPF11RBITS {
union {
  unsigned RPF11R:4;
};
} typeRPF11RBITS;
sfr volatile typeRPF11RBITS RPF11Rbits absolute 0xBF80FC6C;

typedef struct tagRPF12RBITS {
union {
  unsigned RPF12R:4;
};
} typeRPF12RBITS;
sfr volatile typeRPF12RBITS RPF12Rbits absolute 0xBF80FC70;

typedef struct tagRPF13RBITS {
union {
  unsigned RPF13R:4;
};
} typeRPF13RBITS;
sfr volatile typeRPF13RBITS RPF13Rbits absolute 0xBF80FC74;

typedef struct tagRPF14RBITS {
union {
  unsigned RPF14R:4;
};
} typeRPF14RBITS;
sfr volatile typeRPF14RBITS RPF14Rbits absolute 0xBF80FC78;

typedef struct tagRPF15RBITS {
union {
  unsigned RPF15R:4;
};
} typeRPF15RBITS;
sfr volatile typeRPF15RBITS RPF15Rbits absolute 0xBF80FC7C;

typedef struct tagRPG0RBITS {
union {
  unsigned RPG0R:4;
};
} typeRPG0RBITS;
sfr volatile typeRPG0RBITS RPG0Rbits absolute 0xBF80FC80;

typedef struct tagRPG1RBITS {
union {
  unsigned RPG1R:4;
};
} typeRPG1RBITS;
sfr volatile typeRPG1RBITS RPG1Rbits absolute 0xBF80FC84;

typedef struct tagRPG2RBITS {
union {
  unsigned RPG2R:4;
};
} typeRPG2RBITS;
sfr volatile typeRPG2RBITS RPG2Rbits absolute 0xBF80FC88;

typedef struct tagRPG3RBITS {
union {
  unsigned RPG3R:4;
};
} typeRPG3RBITS;
sfr volatile typeRPG3RBITS RPG3Rbits absolute 0xBF80FC8C;

typedef struct tagRPG4RBITS {
union {
  unsigned RPG4R:4;
};
} typeRPG4RBITS;
sfr volatile typeRPG4RBITS RPG4Rbits absolute 0xBF80FC90;

typedef struct tagRPG5RBITS {
union {
  unsigned RPG5R:4;
};
} typeRPG5RBITS;
sfr volatile typeRPG5RBITS RPG5Rbits absolute 0xBF80FC94;

typedef struct tagRPG6RBITS {
union {
  unsigned RPG6R:4;
};
} typeRPG6RBITS;
sfr volatile typeRPG6RBITS RPG6Rbits absolute 0xBF80FC98;

typedef struct tagRPG7RBITS {
union {
  unsigned RPG7R:4;
};
} typeRPG7RBITS;
sfr volatile typeRPG7RBITS RPG7Rbits absolute 0xBF80FC9C;

typedef struct tagRPG8RBITS {
union {
  unsigned RPG8R:4;
};
} typeRPG8RBITS;
sfr volatile typeRPG8RBITS RPG8Rbits absolute 0xBF80FCA0;

typedef struct tagRPG9RBITS {
union {
  unsigned RPG9R:4;
};
} typeRPG9RBITS;
sfr volatile typeRPG9RBITS RPG9Rbits absolute 0xBF80FCA4;

typedef struct tagRPG10RBITS {
union {
  unsigned RPG10R:4;
};
} typeRPG10RBITS;
sfr volatile typeRPG10RBITS RPG10Rbits absolute 0xBF80FCA8;

typedef struct tagRPG11RBITS {
union {
  unsigned RPG11R:4;
};
} typeRPG11RBITS;
sfr volatile typeRPG11RBITS RPG11Rbits absolute 0xBF80FCAC;

typedef struct tagRPG12RBITS {
union {
  unsigned RPG12R:4;
};
} typeRPG12RBITS;
sfr volatile typeRPG12RBITS RPG12Rbits absolute 0xBF80FCB0;

typedef struct tagRPG13RBITS {
union {
  unsigned RPG13R:4;
};
} typeRPG13RBITS;
sfr volatile typeRPG13RBITS RPG13Rbits absolute 0xBF80FCB4;

typedef struct tagRPG14RBITS {
union {
  unsigned RPG14R:4;
};
} typeRPG14RBITS;
sfr volatile typeRPG14RBITS RPG14Rbits absolute 0xBF80FCB8;

typedef struct tagRPG15RBITS {
union {
  unsigned RPG15R:4;
};
} typeRPG15RBITS;
sfr volatile typeRPG15RBITS RPG15Rbits absolute 0xBF80FCBC;

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
    unsigned USBIF:1;
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
    unsigned CNDIF:1;
    unsigned CNEIF:1;
    unsigned CNFIF:1;
    unsigned CNGIF:1;
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
    unsigned U3EIF:1;
    unsigned U3RXIF:1;
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
    unsigned U3TXIF:1;
    unsigned U4EIF:1;
    unsigned U4RXIF:1;
    unsigned U4TXIF:1;
    unsigned :3;
    unsigned CTMUIF:1;
    unsigned DMA0IF:1;
    unsigned DMA1IF:1;
    unsigned DMA2IF:1;
    unsigned DMA3IF:1;
    unsigned CMP3IF:1;
    unsigned CAN1IF:1;
    unsigned SPI3EIF:1;
    unsigned SPI3RXIF:1;
    unsigned SPI3TXIF:1;
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
    unsigned USBIE:1;
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
    unsigned CNDIE:1;
    unsigned CNEIE:1;
    unsigned CNFIE:1;
    unsigned CNGIE:1;
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
    unsigned U3EIE:1;
    unsigned U3RXIE:1;
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
    unsigned U3TXIE:1;
    unsigned U4EIE:1;
    unsigned U4RXIE:1;
    unsigned U4TXIE:1;
    unsigned :3;
    unsigned CTMUIE:1;
    unsigned DMA0IE:1;
    unsigned DMA1IE:1;
    unsigned DMA2IE:1;
    unsigned DMA3IE:1;
    unsigned CMP3IE:1;
    unsigned CAN1IE:1;
    unsigned SPI3EIE:1;
    unsigned SPI3RXIE:1;
    unsigned SPI3TXIE:1;
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
    unsigned USBIS:2;
    unsigned USBIP:3;
    unsigned :3;
    unsigned SPI1IS:2;
    unsigned SPI1IP:3;
    unsigned :3;
    unsigned U1IS:2;
    unsigned U1IP:3;
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
    unsigned I2C1IS:2;
    unsigned I2C1IP:3;
    unsigned :3;
    unsigned CNIS:2;
    unsigned CNIP:3;
    unsigned :3;
    unsigned PMPIS:2;
    unsigned PMPIP:3;
    unsigned :3;
    unsigned SPI2IS:2;
    unsigned SPI2IP:3;
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
    unsigned U2IS:2;
    unsigned U2IP:3;
    unsigned :3;
    unsigned I2C2IS:2;
    unsigned I2C2IP:3;
    unsigned :3;
    unsigned U3IS:2;
    unsigned U3IP:3;
    unsigned :3;
    unsigned U4IS:2;
    unsigned U4IP:3;
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
    unsigned :8;
    unsigned CTMUIS:2;
    unsigned CTMUIP:3;
    unsigned :3;
    unsigned DMA0IS:2;
    unsigned DMA0IP:3;
    unsigned :3;
    unsigned DMA1IS:2;
    unsigned DMA1IP:3;
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

typedef struct tagIPC11BITS {
union {
  struct {
    unsigned DMA2IS:2;
    unsigned DMA2IP:3;
    unsigned :3;
    unsigned DMA3IS:2;
    unsigned DMA3IP:3;
    unsigned :3;
    unsigned CMP3IS:2;
    unsigned CMP3IP:3;
    unsigned :3;
    unsigned CAN1IS:2;
    unsigned CAN1IP:3;
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
    unsigned SPI3IS:2;
    unsigned SPI3IP:3;
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

typedef struct tagDCH0SSABITS {
union {
  unsigned CHSSA:32;
};
} typeDCH0SSABITS;
sfr atomic volatile typeDCH0SSABITS DCH0SSAbits absolute 0xBF883090;
sfr volatile typeDCH0SSABITS DCH0SSACLRbits absolute 0xBF883094;
sfr volatile typeDCH0SSABITS DCH0SSASETbits absolute 0xBF883098;
sfr volatile typeDCH0SSABITS DCH0SSAINVbits absolute 0xBF88309C;

typedef struct tagDCH0DSABITS {
union {
  unsigned CHDSA:32;
};
} typeDCH0DSABITS;
sfr atomic volatile typeDCH0DSABITS DCH0DSAbits absolute 0xBF8830A0;
sfr volatile typeDCH0DSABITS DCH0DSACLRbits absolute 0xBF8830A4;
sfr volatile typeDCH0DSABITS DCH0DSASETbits absolute 0xBF8830A8;
sfr volatile typeDCH0DSABITS DCH0DSAINVbits absolute 0xBF8830AC;
sfr atomic volatile typeDCH0DSABITS DCH0SSIZbits absolute 0xBF8830B0;
sfr volatile typeDCH0DSABITS DCH0SSIZCLRbits absolute 0xBF8830B4;
sfr volatile typeDCH0DSABITS DCH0SSIZSETbits absolute 0xBF8830B8;
sfr volatile typeDCH0DSABITS DCH0SSIZINVbits absolute 0xBF8830BC;
sfr atomic volatile typeDCH0DSABITS DCH0DSIZbits absolute 0xBF8830C0;
sfr volatile typeDCH0DSABITS DCH0DSIZCLRbits absolute 0xBF8830C4;
sfr volatile typeDCH0DSABITS DCH0DSIZSETbits absolute 0xBF8830C8;
sfr volatile typeDCH0DSABITS DCH0DSIZINVbits absolute 0xBF8830CC;
sfr atomic volatile typeDCH0DSABITS DCH0SPTRbits absolute 0xBF8830D0;
sfr volatile typeDCH0DSABITS DCH0SPTRCLRbits absolute 0xBF8830D4;
sfr volatile typeDCH0DSABITS DCH0SPTRSETbits absolute 0xBF8830D8;
sfr volatile typeDCH0DSABITS DCH0SPTRINVbits absolute 0xBF8830DC;
sfr atomic volatile typeDCH0DSABITS DCH0DPTRbits absolute 0xBF8830E0;
sfr volatile typeDCH0DSABITS DCH0DPTRCLRbits absolute 0xBF8830E4;
sfr volatile typeDCH0DSABITS DCH0DPTRSETbits absolute 0xBF8830E8;
sfr volatile typeDCH0DSABITS DCH0DPTRINVbits absolute 0xBF8830EC;
sfr atomic volatile typeDCH0DSABITS DCH0CSIZbits absolute 0xBF8830F0;
sfr volatile typeDCH0DSABITS DCH0CSIZCLRbits absolute 0xBF8830F4;
sfr volatile typeDCH0DSABITS DCH0CSIZSETbits absolute 0xBF8830F8;
sfr volatile typeDCH0DSABITS DCH0CSIZINVbits absolute 0xBF8830FC;
sfr atomic volatile typeDCH0DSABITS DCH0CPTRbits absolute 0xBF883100;
sfr volatile typeDCH0DSABITS DCH0CPTRCLRbits absolute 0xBF883104;
sfr volatile typeDCH0DSABITS DCH0CPTRSETbits absolute 0xBF883108;
sfr volatile typeDCH0DSABITS DCH0CPTRINVbits absolute 0xBF88310C;
sfr atomic volatile typeDCH0DSABITS DCH0DATbits absolute 0xBF883110;
sfr volatile typeDCH0DSABITS DCH0DATCLRbits absolute 0xBF883114;
sfr volatile typeDCH0DSABITS DCH0DATSETbits absolute 0xBF883118;
sfr volatile typeDCH0DSABITS DCH0DATINVbits absolute 0xBF88311C;

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

typedef struct tagDCH1SSABITS {
union {
  unsigned CHSSA:32;
};
} typeDCH1SSABITS;
sfr atomic volatile typeDCH1SSABITS DCH1SSAbits absolute 0xBF883150;
sfr volatile typeDCH1SSABITS DCH1SSACLRbits absolute 0xBF883154;
sfr volatile typeDCH1SSABITS DCH1SSASETbits absolute 0xBF883158;
sfr volatile typeDCH1SSABITS DCH1SSAINVbits absolute 0xBF88315C;

typedef struct tagDCH1DSABITS {
union {
  unsigned CHDSA:32;
};
} typeDCH1DSABITS;
sfr atomic volatile typeDCH1DSABITS DCH1DSAbits absolute 0xBF883160;
sfr volatile typeDCH1DSABITS DCH1DSACLRbits absolute 0xBF883164;
sfr volatile typeDCH1DSABITS DCH1DSASETbits absolute 0xBF883168;
sfr volatile typeDCH1DSABITS DCH1DSAINVbits absolute 0xBF88316C;
sfr atomic volatile typeDCH1DSABITS DCH1SSIZbits absolute 0xBF883170;
sfr volatile typeDCH1DSABITS DCH1SSIZCLRbits absolute 0xBF883174;
sfr volatile typeDCH1DSABITS DCH1SSIZSETbits absolute 0xBF883178;
sfr volatile typeDCH1DSABITS DCH1SSIZINVbits absolute 0xBF88317C;
sfr atomic volatile typeDCH1DSABITS DCH1DSIZbits absolute 0xBF883180;
sfr volatile typeDCH1DSABITS DCH1DSIZCLRbits absolute 0xBF883184;
sfr volatile typeDCH1DSABITS DCH1DSIZSETbits absolute 0xBF883188;
sfr volatile typeDCH1DSABITS DCH1DSIZINVbits absolute 0xBF88318C;
sfr atomic volatile typeDCH1DSABITS DCH1SPTRbits absolute 0xBF883190;
sfr volatile typeDCH1DSABITS DCH1SPTRCLRbits absolute 0xBF883194;
sfr volatile typeDCH1DSABITS DCH1SPTRSETbits absolute 0xBF883198;
sfr volatile typeDCH1DSABITS DCH1SPTRINVbits absolute 0xBF88319C;
sfr atomic volatile typeDCH1DSABITS DCH1DPTRbits absolute 0xBF8831A0;
sfr volatile typeDCH1DSABITS DCH1DPTRCLRbits absolute 0xBF8831A4;
sfr volatile typeDCH1DSABITS DCH1DPTRSETbits absolute 0xBF8831A8;
sfr volatile typeDCH1DSABITS DCH1DPTRINVbits absolute 0xBF8831AC;
sfr atomic volatile typeDCH1DSABITS DCH1CSIZbits absolute 0xBF8831B0;
sfr volatile typeDCH1DSABITS DCH1CSIZCLRbits absolute 0xBF8831B4;
sfr volatile typeDCH1DSABITS DCH1CSIZSETbits absolute 0xBF8831B8;
sfr volatile typeDCH1DSABITS DCH1CSIZINVbits absolute 0xBF8831BC;
sfr atomic volatile typeDCH1DSABITS DCH1CPTRbits absolute 0xBF8831C0;
sfr volatile typeDCH1DSABITS DCH1CPTRCLRbits absolute 0xBF8831C4;
sfr volatile typeDCH1DSABITS DCH1CPTRSETbits absolute 0xBF8831C8;
sfr volatile typeDCH1DSABITS DCH1CPTRINVbits absolute 0xBF8831CC;
sfr atomic volatile typeDCH1DSABITS DCH1DATbits absolute 0xBF8831D0;
sfr volatile typeDCH1DSABITS DCH1DATCLRbits absolute 0xBF8831D4;
sfr volatile typeDCH1DSABITS DCH1DATSETbits absolute 0xBF8831D8;
sfr volatile typeDCH1DSABITS DCH1DATINVbits absolute 0xBF8831DC;

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

typedef struct tagDCH2SSABITS {
union {
  unsigned CHSSA:32;
};
} typeDCH2SSABITS;
sfr atomic volatile typeDCH2SSABITS DCH2SSAbits absolute 0xBF883210;
sfr volatile typeDCH2SSABITS DCH2SSACLRbits absolute 0xBF883214;
sfr volatile typeDCH2SSABITS DCH2SSASETbits absolute 0xBF883218;
sfr volatile typeDCH2SSABITS DCH2SSAINVbits absolute 0xBF88321C;

typedef struct tagDCH2DSABITS {
union {
  unsigned CHDSA:32;
};
} typeDCH2DSABITS;
sfr atomic volatile typeDCH2DSABITS DCH2DSAbits absolute 0xBF883220;
sfr volatile typeDCH2DSABITS DCH2DSACLRbits absolute 0xBF883224;
sfr volatile typeDCH2DSABITS DCH2DSASETbits absolute 0xBF883228;
sfr volatile typeDCH2DSABITS DCH2DSAINVbits absolute 0xBF88322C;
sfr atomic volatile typeDCH2DSABITS DCH2SSIZbits absolute 0xBF883230;
sfr volatile typeDCH2DSABITS DCH2SSIZCLRbits absolute 0xBF883234;
sfr volatile typeDCH2DSABITS DCH2SSIZSETbits absolute 0xBF883238;
sfr volatile typeDCH2DSABITS DCH2SSIZINVbits absolute 0xBF88323C;
sfr atomic volatile typeDCH2DSABITS DCH2DSIZbits absolute 0xBF883240;
sfr volatile typeDCH2DSABITS DCH2DSIZCLRbits absolute 0xBF883244;
sfr volatile typeDCH2DSABITS DCH2DSIZSETbits absolute 0xBF883248;
sfr volatile typeDCH2DSABITS DCH2DSIZINVbits absolute 0xBF88324C;
sfr atomic volatile typeDCH2DSABITS DCH2SPTRbits absolute 0xBF883250;
sfr volatile typeDCH2DSABITS DCH2SPTRCLRbits absolute 0xBF883254;
sfr volatile typeDCH2DSABITS DCH2SPTRSETbits absolute 0xBF883258;
sfr volatile typeDCH2DSABITS DCH2SPTRINVbits absolute 0xBF88325C;
sfr atomic volatile typeDCH2DSABITS DCH2DPTRbits absolute 0xBF883260;
sfr volatile typeDCH2DSABITS DCH2DPTRCLRbits absolute 0xBF883264;
sfr volatile typeDCH2DSABITS DCH2DPTRSETbits absolute 0xBF883268;
sfr volatile typeDCH2DSABITS DCH2DPTRINVbits absolute 0xBF88326C;
sfr atomic volatile typeDCH2DSABITS DCH2CSIZbits absolute 0xBF883270;
sfr volatile typeDCH2DSABITS DCH2CSIZCLRbits absolute 0xBF883274;
sfr volatile typeDCH2DSABITS DCH2CSIZSETbits absolute 0xBF883278;
sfr volatile typeDCH2DSABITS DCH2CSIZINVbits absolute 0xBF88327C;
sfr atomic volatile typeDCH2DSABITS DCH2CPTRbits absolute 0xBF883280;
sfr volatile typeDCH2DSABITS DCH2CPTRCLRbits absolute 0xBF883284;
sfr volatile typeDCH2DSABITS DCH2CPTRSETbits absolute 0xBF883288;
sfr volatile typeDCH2DSABITS DCH2CPTRINVbits absolute 0xBF88328C;
sfr atomic volatile typeDCH2DSABITS DCH2DATbits absolute 0xBF883290;
sfr volatile typeDCH2DSABITS DCH2DATCLRbits absolute 0xBF883294;
sfr volatile typeDCH2DSABITS DCH2DATSETbits absolute 0xBF883298;
sfr volatile typeDCH2DSABITS DCH2DATINVbits absolute 0xBF88329C;

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

typedef struct tagDCH3SSABITS {
union {
  unsigned CHSSA:32;
};
} typeDCH3SSABITS;
sfr atomic volatile typeDCH3SSABITS DCH3SSAbits absolute 0xBF8832D0;
sfr volatile typeDCH3SSABITS DCH3SSACLRbits absolute 0xBF8832D4;
sfr volatile typeDCH3SSABITS DCH3SSASETbits absolute 0xBF8832D8;
sfr volatile typeDCH3SSABITS DCH3SSAINVbits absolute 0xBF8832DC;

typedef struct tagDCH3DSABITS {
union {
  unsigned CHDSA:32;
};
} typeDCH3DSABITS;
sfr atomic volatile typeDCH3DSABITS DCH3DSAbits absolute 0xBF8832E0;
sfr volatile typeDCH3DSABITS DCH3DSACLRbits absolute 0xBF8832E4;
sfr volatile typeDCH3DSABITS DCH3DSASETbits absolute 0xBF8832E8;
sfr volatile typeDCH3DSABITS DCH3DSAINVbits absolute 0xBF8832EC;
sfr atomic volatile typeDCH3DSABITS DCH3SSIZbits absolute 0xBF8832F0;
sfr volatile typeDCH3DSABITS DCH3SSIZCLRbits absolute 0xBF8832F4;
sfr volatile typeDCH3DSABITS DCH3SSIZSETbits absolute 0xBF8832F8;
sfr volatile typeDCH3DSABITS DCH3SSIZINVbits absolute 0xBF8832FC;
sfr atomic volatile typeDCH3DSABITS DCH3DSIZbits absolute 0xBF883300;
sfr volatile typeDCH3DSABITS DCH3DSIZCLRbits absolute 0xBF883304;
sfr volatile typeDCH3DSABITS DCH3DSIZSETbits absolute 0xBF883308;
sfr volatile typeDCH3DSABITS DCH3DSIZINVbits absolute 0xBF88330C;
sfr atomic volatile typeDCH3DSABITS DCH3SPTRbits absolute 0xBF883310;
sfr volatile typeDCH3DSABITS DCH3SPTRCLRbits absolute 0xBF883314;
sfr volatile typeDCH3DSABITS DCH3SPTRSETbits absolute 0xBF883318;
sfr volatile typeDCH3DSABITS DCH3SPTRINVbits absolute 0xBF88331C;
sfr atomic volatile typeDCH3DSABITS DCH3DPTRbits absolute 0xBF883320;
sfr volatile typeDCH3DSABITS DCH3DPTRCLRbits absolute 0xBF883324;
sfr volatile typeDCH3DSABITS DCH3DPTRSETbits absolute 0xBF883328;
sfr volatile typeDCH3DSABITS DCH3DPTRINVbits absolute 0xBF88332C;
sfr atomic volatile typeDCH3DSABITS DCH3CSIZbits absolute 0xBF883330;
sfr volatile typeDCH3DSABITS DCH3CSIZCLRbits absolute 0xBF883334;
sfr volatile typeDCH3DSABITS DCH3CSIZSETbits absolute 0xBF883338;
sfr volatile typeDCH3DSABITS DCH3CSIZINVbits absolute 0xBF88333C;
sfr atomic volatile typeDCH3DSABITS DCH3CPTRbits absolute 0xBF883340;
sfr volatile typeDCH3DSABITS DCH3CPTRCLRbits absolute 0xBF883344;
sfr volatile typeDCH3DSABITS DCH3CPTRSETbits absolute 0xBF883348;
sfr volatile typeDCH3DSABITS DCH3CPTRINVbits absolute 0xBF88334C;
sfr atomic volatile typeDCH3DSABITS DCH3DATbits absolute 0xBF883350;
sfr volatile typeDCH3DSABITS DCH3DATCLRbits absolute 0xBF883354;
sfr volatile typeDCH3DSABITS DCH3DATSETbits absolute 0xBF883358;
sfr volatile typeDCH3DSABITS DCH3DATINVbits absolute 0xBF88335C;

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
    unsigned ANSB8:1;
    unsigned ANSB9:1;
    unsigned ANSB10:1;
    unsigned ANSB11:1;
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
  unsigned w:32;
};
} typeANSELCBITS;
sfr atomic volatile typeANSELCBITS ANSELCbits absolute 0xBF886200;
sfr volatile typeANSELCBITS ANSELCCLRbits absolute 0xBF886204;
sfr volatile typeANSELCBITS ANSELCSETbits absolute 0xBF886208;
sfr volatile typeANSELCBITS ANSELCINVbits absolute 0xBF88620C;

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
sfr atomic volatile typeTRISCBITS TRISCbits absolute 0xBF886210;
sfr volatile typeTRISCBITS TRISCCLRbits absolute 0xBF886214;
sfr volatile typeTRISCBITS TRISCSETbits absolute 0xBF886218;
sfr volatile typeTRISCBITS TRISCINVbits absolute 0xBF88621C;

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
sfr atomic volatile typePORTCBITS PORTCbits absolute 0xBF886220;
sfr volatile typePORTCBITS PORTCCLRbits absolute 0xBF886224;
sfr volatile typePORTCBITS PORTCSETbits absolute 0xBF886228;
sfr volatile typePORTCBITS PORTCINVbits absolute 0xBF88622C;

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
sfr atomic volatile typeLATCBITS LATCbits absolute 0xBF886230;
sfr volatile typeLATCBITS LATCCLRbits absolute 0xBF886234;
sfr volatile typeLATCBITS LATCSETbits absolute 0xBF886238;
sfr volatile typeLATCBITS LATCINVbits absolute 0xBF88623C;

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
sfr atomic volatile typeODCCBITS ODCCbits absolute 0xBF886240;
sfr volatile typeODCCBITS ODCCCLRbits absolute 0xBF886244;
sfr volatile typeODCCBITS ODCCSETbits absolute 0xBF886248;
sfr volatile typeODCCBITS ODCCINVbits absolute 0xBF88624C;

typedef struct tagCNPUCBITS {
union {
  struct {
    unsigned :12;
    unsigned CNPUC12:1;
    unsigned CNPUC13:1;
    unsigned CNPUC14:1;
    unsigned CNPUC15:1;
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
    unsigned :12;
    unsigned CNPDC12:1;
    unsigned CNPDC13:1;
    unsigned CNPDC14:1;
    unsigned CNPDC15:1;
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
    unsigned :12;
    unsigned CNIEC12:1;
    unsigned CNIEC13:1;
    unsigned CNIEC14:1;
    unsigned CNIEC15:1;
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
    unsigned :12;
    unsigned CNSTATC12:1;
    unsigned CNSTATC13:1;
    unsigned CNSTATC14:1;
    unsigned CNSTATC15:1;
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

typedef struct tagANSELDBITS {
union {
  struct {
    unsigned :1;
    unsigned ANSD1:1;
    unsigned ANSD2:1;
    unsigned ANSD3:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeANSELDBITS;
sfr atomic volatile typeANSELDBITS ANSELDbits absolute 0xBF886300;
sfr volatile typeANSELDBITS ANSELDCLRbits absolute 0xBF886304;
sfr volatile typeANSELDBITS ANSELDSETbits absolute 0xBF886308;
sfr volatile typeANSELDBITS ANSELDINVbits absolute 0xBF88630C;

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
sfr atomic volatile typeTRISDBITS TRISDbits absolute 0xBF886310;
sfr volatile typeTRISDBITS TRISDCLRbits absolute 0xBF886314;
sfr volatile typeTRISDBITS TRISDSETbits absolute 0xBF886318;
sfr volatile typeTRISDBITS TRISDINVbits absolute 0xBF88631C;

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
sfr atomic volatile typePORTDBITS PORTDbits absolute 0xBF886320;
sfr volatile typePORTDBITS PORTDCLRbits absolute 0xBF886324;
sfr volatile typePORTDBITS PORTDSETbits absolute 0xBF886328;
sfr volatile typePORTDBITS PORTDINVbits absolute 0xBF88632C;

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
sfr atomic volatile typeLATDBITS LATDbits absolute 0xBF886330;
sfr volatile typeLATDBITS LATDCLRbits absolute 0xBF886334;
sfr volatile typeLATDBITS LATDSETbits absolute 0xBF886338;
sfr volatile typeLATDBITS LATDINVbits absolute 0xBF88633C;

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
sfr atomic volatile typeODCDBITS ODCDbits absolute 0xBF886340;
sfr volatile typeODCDBITS ODCDCLRbits absolute 0xBF886344;
sfr volatile typeODCDBITS ODCDSETbits absolute 0xBF886348;
sfr volatile typeODCDBITS ODCDINVbits absolute 0xBF88634C;

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
  };
  struct {
    unsigned w:32;
  };
};
} typeCNPUDBITS;
sfr atomic volatile typeCNPUDBITS CNPUDbits absolute 0xBF886350;
sfr volatile typeCNPUDBITS CNPUDCLRbits absolute 0xBF886354;
sfr volatile typeCNPUDBITS CNPUDSETbits absolute 0xBF886358;
sfr volatile typeCNPUDBITS CNPUDINVbits absolute 0xBF88635C;

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
  };
  struct {
    unsigned w:32;
  };
};
} typeCNPDDBITS;
sfr atomic volatile typeCNPDDBITS CNPDDbits absolute 0xBF886360;
sfr volatile typeCNPDDBITS CNPDDCLRbits absolute 0xBF886364;
sfr volatile typeCNPDDBITS CNPDDSETbits absolute 0xBF886368;
sfr volatile typeCNPDDBITS CNPDDINVbits absolute 0xBF88636C;

typedef struct tagCNCONDBITS {
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
} typeCNCONDBITS;
sfr atomic volatile typeCNCONDBITS CNCONDbits absolute 0xBF886370;
sfr volatile typeCNCONDBITS CNCONDCLRbits absolute 0xBF886374;
sfr volatile typeCNCONDBITS CNCONDSETbits absolute 0xBF886378;
sfr volatile typeCNCONDBITS CNCONDINVbits absolute 0xBF88637C;

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
  };
  struct {
    unsigned w:32;
  };
};
} typeCNENDBITS;
sfr atomic volatile typeCNENDBITS CNENDbits absolute 0xBF886380;
sfr volatile typeCNENDBITS CNENDCLRbits absolute 0xBF886384;
sfr volatile typeCNENDBITS CNENDSETbits absolute 0xBF886388;
sfr volatile typeCNENDBITS CNENDINVbits absolute 0xBF88638C;

typedef struct tagCNSTATDBITS {
union {
  struct {
    unsigned CNSTATD0:1;
    unsigned CNSTATD1:1;
    unsigned CNSTATD2:1;
    unsigned CNSTATD3:1;
    unsigned CNSTATD4:1;
    unsigned CNSTATD5:1;
    unsigned CNSTATD6:1;
    unsigned CNSTATD7:1;
    unsigned CNSTATD8:1;
    unsigned CNSTATD9:1;
    unsigned CNSTATD10:1;
    unsigned CNSTATD11:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNSTATDBITS;
sfr atomic volatile typeCNSTATDBITS CNSTATDbits absolute 0xBF886390;
sfr volatile typeCNSTATDBITS CNSTATDCLRbits absolute 0xBF886394;
sfr volatile typeCNSTATDBITS CNSTATDSETbits absolute 0xBF886398;
sfr volatile typeCNSTATDBITS CNSTATDINVbits absolute 0xBF88639C;

typedef struct tagANSELEBITS {
union {
  struct {
    unsigned :2;
    unsigned ANSE2:1;
    unsigned :1;
    unsigned ANSE4:1;
    unsigned ANSE5:1;
    unsigned ANSE6:1;
    unsigned ANSE7:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeANSELEBITS;
sfr atomic volatile typeANSELEBITS ANSELEbits absolute 0xBF886400;
sfr volatile typeANSELEBITS ANSELECLRbits absolute 0xBF886404;
sfr volatile typeANSELEBITS ANSELESETbits absolute 0xBF886408;
sfr volatile typeANSELEBITS ANSELEINVbits absolute 0xBF88640C;

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
sfr atomic volatile typeTRISEBITS TRISEbits absolute 0xBF886410;
sfr volatile typeTRISEBITS TRISECLRbits absolute 0xBF886414;
sfr volatile typeTRISEBITS TRISESETbits absolute 0xBF886418;
sfr volatile typeTRISEBITS TRISEINVbits absolute 0xBF88641C;

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
sfr atomic volatile typePORTEBITS PORTEbits absolute 0xBF886420;
sfr volatile typePORTEBITS PORTECLRbits absolute 0xBF886424;
sfr volatile typePORTEBITS PORTESETbits absolute 0xBF886428;
sfr volatile typePORTEBITS PORTEINVbits absolute 0xBF88642C;

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
sfr atomic volatile typeLATEBITS LATEbits absolute 0xBF886430;
sfr volatile typeLATEBITS LATECLRbits absolute 0xBF886434;
sfr volatile typeLATEBITS LATESETbits absolute 0xBF886438;
sfr volatile typeLATEBITS LATEINVbits absolute 0xBF88643C;

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
sfr atomic volatile typeODCEBITS ODCEbits absolute 0xBF886440;
sfr volatile typeODCEBITS ODCECLRbits absolute 0xBF886444;
sfr volatile typeODCEBITS ODCESETbits absolute 0xBF886448;
sfr volatile typeODCEBITS ODCEINVbits absolute 0xBF88644C;

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
  };
  struct {
    unsigned w:32;
  };
};
} typeCNPUEBITS;
sfr atomic volatile typeCNPUEBITS CNPUEbits absolute 0xBF886450;
sfr volatile typeCNPUEBITS CNPUECLRbits absolute 0xBF886454;
sfr volatile typeCNPUEBITS CNPUESETbits absolute 0xBF886458;
sfr volatile typeCNPUEBITS CNPUEINVbits absolute 0xBF88645C;

typedef struct tagCNPDEBITS {
union {
  struct {
    unsigned CNPDE0:1;
    unsigned CNPDE1:1;
    unsigned CNPDE2:1;
    unsigned CNPDE3:1;
    unsigned CNPDE4:1;
    unsigned CNPDE5:1;
    unsigned CNPDE6:1;
    unsigned CNPDE7:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNPDEBITS;
sfr atomic volatile typeCNPDEBITS CNPDEbits absolute 0xBF886460;
sfr volatile typeCNPDEBITS CNPDECLRbits absolute 0xBF886464;
sfr volatile typeCNPDEBITS CNPDESETbits absolute 0xBF886468;
sfr volatile typeCNPDEBITS CNPDEINVbits absolute 0xBF88646C;

typedef struct tagCNCONEBITS {
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
} typeCNCONEBITS;
sfr atomic volatile typeCNCONEBITS CNCONEbits absolute 0xBF886470;
sfr volatile typeCNCONEBITS CNCONECLRbits absolute 0xBF886474;
sfr volatile typeCNCONEBITS CNCONESETbits absolute 0xBF886478;
sfr volatile typeCNCONEBITS CNCONEINVbits absolute 0xBF88647C;

typedef struct tagCNENEBITS {
union {
  struct {
    unsigned CNIEE0:1;
    unsigned CNIEE1:1;
    unsigned CNIEE2:1;
    unsigned CNIEE3:1;
    unsigned CNIEE4:1;
    unsigned CNIEE5:1;
    unsigned CNIEE6:1;
    unsigned CNIEE7:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNENEBITS;
sfr atomic volatile typeCNENEBITS CNENEbits absolute 0xBF886480;
sfr volatile typeCNENEBITS CNENECLRbits absolute 0xBF886484;
sfr volatile typeCNENEBITS CNENESETbits absolute 0xBF886488;
sfr volatile typeCNENEBITS CNENEINVbits absolute 0xBF88648C;

typedef struct tagCNSTATEBITS {
union {
  struct {
    unsigned CNSTATE0:1;
    unsigned CNSTATE1:1;
    unsigned CNSTATE2:1;
    unsigned CNSTATE3:1;
    unsigned CNSTATE4:1;
    unsigned CNSTATE5:1;
    unsigned CNSTATE6:1;
    unsigned CNSTATE7:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNSTATEBITS;
sfr atomic volatile typeCNSTATEBITS CNSTATEbits absolute 0xBF886490;
sfr volatile typeCNSTATEBITS CNSTATECLRbits absolute 0xBF886494;
sfr volatile typeCNSTATEBITS CNSTATESETbits absolute 0xBF886498;
sfr volatile typeCNSTATEBITS CNSTATEINVbits absolute 0xBF88649C;

typedef struct tagANSELFBITS {
union {
  unsigned w:32;
};
} typeANSELFBITS;
sfr atomic volatile typeANSELFBITS ANSELFbits absolute 0xBF886500;
sfr volatile typeANSELFBITS ANSELFCLRbits absolute 0xBF886504;
sfr volatile typeANSELFBITS ANSELFSETbits absolute 0xBF886508;
sfr volatile typeANSELFBITS ANSELFINVbits absolute 0xBF88650C;

typedef struct tagTRISFBITS {
union {
  struct {
    unsigned TRISF0:1;
    unsigned TRISF1:1;
    unsigned :1;
    unsigned TRISF3:1;
    unsigned TRISF4:1;
    unsigned TRISF5:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeTRISFBITS;
sfr atomic volatile typeTRISFBITS TRISFbits absolute 0xBF886510;
sfr volatile typeTRISFBITS TRISFCLRbits absolute 0xBF886514;
sfr volatile typeTRISFBITS TRISFSETbits absolute 0xBF886518;
sfr volatile typeTRISFBITS TRISFINVbits absolute 0xBF88651C;

typedef struct tagPORTFBITS {
union {
  struct {
    unsigned RF0:1;
    unsigned RF1:1;
    unsigned :1;
    unsigned RF3:1;
    unsigned RF4:1;
    unsigned RF5:1;
  };
  struct {
    unsigned w:32;
  };
};
} typePORTFBITS;
sfr atomic volatile typePORTFBITS PORTFbits absolute 0xBF886520;
sfr volatile typePORTFBITS PORTFCLRbits absolute 0xBF886524;
sfr volatile typePORTFBITS PORTFSETbits absolute 0xBF886528;
sfr volatile typePORTFBITS PORTFINVbits absolute 0xBF88652C;

typedef struct tagLATFBITS {
union {
  struct {
    unsigned LATF0:1;
    unsigned LATF1:1;
    unsigned :1;
    unsigned LATF3:1;
    unsigned LATF4:1;
    unsigned LATF5:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeLATFBITS;
sfr atomic volatile typeLATFBITS LATFbits absolute 0xBF886530;
sfr volatile typeLATFBITS LATFCLRbits absolute 0xBF886534;
sfr volatile typeLATFBITS LATFSETbits absolute 0xBF886538;
sfr volatile typeLATFBITS LATFINVbits absolute 0xBF88653C;

typedef struct tagODCFBITS {
union {
  struct {
    unsigned ODCF0:1;
    unsigned ODCF1:1;
    unsigned :1;
    unsigned ODCF3:1;
    unsigned ODCF4:1;
    unsigned ODCF5:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeODCFBITS;
sfr atomic volatile typeODCFBITS ODCFbits absolute 0xBF886540;
sfr volatile typeODCFBITS ODCFCLRbits absolute 0xBF886544;
sfr volatile typeODCFBITS ODCFSETbits absolute 0xBF886548;
sfr volatile typeODCFBITS ODCFINVbits absolute 0xBF88654C;

typedef struct tagCNPUFBITS {
union {
  struct {
    unsigned CNPUF0:1;
    unsigned CNPUF1:1;
    unsigned :1;
    unsigned CNPUF3:1;
    unsigned CNPUF4:1;
    unsigned CNPUF5:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNPUFBITS;
sfr atomic volatile typeCNPUFBITS CNPUFbits absolute 0xBF886550;
sfr volatile typeCNPUFBITS CNPUFCLRbits absolute 0xBF886554;
sfr volatile typeCNPUFBITS CNPUFSETbits absolute 0xBF886558;
sfr volatile typeCNPUFBITS CNPUFINVbits absolute 0xBF88655C;

typedef struct tagCNPDFBITS {
union {
  struct {
    unsigned CNPDF0:1;
    unsigned CNPDF1:1;
    unsigned :1;
    unsigned CNPDF3:1;
    unsigned CNPDF4:1;
    unsigned CNPDF5:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNPDFBITS;
sfr atomic volatile typeCNPDFBITS CNPDFbits absolute 0xBF886560;
sfr volatile typeCNPDFBITS CNPDFCLRbits absolute 0xBF886564;
sfr volatile typeCNPDFBITS CNPDFSETbits absolute 0xBF886568;
sfr volatile typeCNPDFBITS CNPDFINVbits absolute 0xBF88656C;

typedef struct tagCNCONFBITS {
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
} typeCNCONFBITS;
sfr atomic volatile typeCNCONFBITS CNCONFbits absolute 0xBF886570;
sfr volatile typeCNCONFBITS CNCONFCLRbits absolute 0xBF886574;
sfr volatile typeCNCONFBITS CNCONFSETbits absolute 0xBF886578;
sfr volatile typeCNCONFBITS CNCONFINVbits absolute 0xBF88657C;

typedef struct tagCNENFBITS {
union {
  struct {
    unsigned CNIEF0:1;
    unsigned CNIEF1:1;
    unsigned :1;
    unsigned CNIEF3:1;
    unsigned CNIEF4:1;
    unsigned CNIEF5:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNENFBITS;
sfr atomic volatile typeCNENFBITS CNENFbits absolute 0xBF886580;
sfr volatile typeCNENFBITS CNENFCLRbits absolute 0xBF886584;
sfr volatile typeCNENFBITS CNENFSETbits absolute 0xBF886588;
sfr volatile typeCNENFBITS CNENFINVbits absolute 0xBF88658C;

typedef struct tagCNSTATFBITS {
union {
  struct {
    unsigned CNSTATF0:1;
    unsigned CNSTATF1:1;
    unsigned :1;
    unsigned CNSTATF3:1;
    unsigned CNSTATF4:1;
    unsigned CNSTATF5:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNSTATFBITS;
sfr atomic volatile typeCNSTATFBITS CNSTATFbits absolute 0xBF886590;
sfr volatile typeCNSTATFBITS CNSTATFCLRbits absolute 0xBF886594;
sfr volatile typeCNSTATFBITS CNSTATFSETbits absolute 0xBF886598;
sfr volatile typeCNSTATFBITS CNSTATFINVbits absolute 0xBF88659C;

typedef struct tagANSELGBITS {
union {
  struct {
    unsigned :6;
    unsigned ANSG6:1;
    unsigned ANSG7:1;
    unsigned ANSG8:1;
    unsigned ANSG9:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeANSELGBITS;
sfr atomic volatile typeANSELGBITS ANSELGbits absolute 0xBF886600;
sfr volatile typeANSELGBITS ANSELGCLRbits absolute 0xBF886604;
sfr volatile typeANSELGBITS ANSELGSETbits absolute 0xBF886608;
sfr volatile typeANSELGBITS ANSELGINVbits absolute 0xBF88660C;

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
sfr atomic volatile typeTRISGBITS TRISGbits absolute 0xBF886610;
sfr volatile typeTRISGBITS TRISGCLRbits absolute 0xBF886614;
sfr volatile typeTRISGBITS TRISGSETbits absolute 0xBF886618;
sfr volatile typeTRISGBITS TRISGINVbits absolute 0xBF88661C;

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
sfr atomic volatile typePORTGBITS PORTGbits absolute 0xBF886620;
sfr volatile typePORTGBITS PORTGCLRbits absolute 0xBF886624;
sfr volatile typePORTGBITS PORTGSETbits absolute 0xBF886628;
sfr volatile typePORTGBITS PORTGINVbits absolute 0xBF88662C;

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
sfr atomic volatile typeLATGBITS LATGbits absolute 0xBF886630;
sfr volatile typeLATGBITS LATGCLRbits absolute 0xBF886634;
sfr volatile typeLATGBITS LATGSETbits absolute 0xBF886638;
sfr volatile typeLATGBITS LATGINVbits absolute 0xBF88663C;

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
sfr atomic volatile typeODCGBITS ODCGbits absolute 0xBF886640;
sfr volatile typeODCGBITS ODCGCLRbits absolute 0xBF886644;
sfr volatile typeODCGBITS ODCGSETbits absolute 0xBF886648;
sfr volatile typeODCGBITS ODCGINVbits absolute 0xBF88664C;

typedef struct tagCNPUGBITS {
union {
  struct {
    unsigned :2;
    unsigned CNPUG2:1;
    unsigned CNPUG3:1;
    unsigned :2;
    unsigned CNPUG6:1;
    unsigned CNPUG7:1;
    unsigned CNPUG8:1;
    unsigned CNPUG9:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNPUGBITS;
sfr atomic volatile typeCNPUGBITS CNPUGbits absolute 0xBF886650;
sfr volatile typeCNPUGBITS CNPUGCLRbits absolute 0xBF886654;
sfr volatile typeCNPUGBITS CNPUGSETbits absolute 0xBF886658;
sfr volatile typeCNPUGBITS CNPUGINVbits absolute 0xBF88665C;

typedef struct tagCNPDGBITS {
union {
  struct {
    unsigned :2;
    unsigned CNPDG2:1;
    unsigned CNPDG3:1;
    unsigned :2;
    unsigned CNPDG6:1;
    unsigned CNPDG7:1;
    unsigned CNPDG8:1;
    unsigned CNPDG9:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNPDGBITS;
sfr atomic volatile typeCNPDGBITS CNPDGbits absolute 0xBF886660;
sfr volatile typeCNPDGBITS CNPDGCLRbits absolute 0xBF886664;
sfr volatile typeCNPDGBITS CNPDGSETbits absolute 0xBF886668;
sfr volatile typeCNPDGBITS CNPDGINVbits absolute 0xBF88666C;

typedef struct tagCNCONGBITS {
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
} typeCNCONGBITS;
sfr atomic volatile typeCNCONGBITS CNCONGbits absolute 0xBF886670;
sfr volatile typeCNCONGBITS CNCONGCLRbits absolute 0xBF886674;
sfr volatile typeCNCONGBITS CNCONGSETbits absolute 0xBF886678;
sfr volatile typeCNCONGBITS CNCONGINVbits absolute 0xBF88667C;

typedef struct tagCNENGBITS {
union {
  struct {
    unsigned :2;
    unsigned CNIEG2:1;
    unsigned CNIEG3:1;
    unsigned :2;
    unsigned CNIEG6:1;
    unsigned CNIEG7:1;
    unsigned CNIEG8:1;
    unsigned CNIEG9:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNENGBITS;
sfr atomic volatile typeCNENGBITS CNENGbits absolute 0xBF886680;
sfr volatile typeCNENGBITS CNENGCLRbits absolute 0xBF886684;
sfr volatile typeCNENGBITS CNENGSETbits absolute 0xBF886688;
sfr volatile typeCNENGBITS CNENGINVbits absolute 0xBF88668C;

typedef struct tagCNSTATGBITS {
union {
  struct {
    unsigned :2;
    unsigned CNSTATG2:1;
    unsigned CNSTATG3:1;
    unsigned :2;
    unsigned CNSTATG6:1;
    unsigned CNSTATG7:1;
    unsigned CNSTATG8:1;
    unsigned CNSTATG9:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeCNSTATGBITS;
sfr atomic volatile typeCNSTATGBITS CNSTATGbits absolute 0xBF886690;
sfr volatile typeCNSTATGBITS CNSTATGCLRbits absolute 0xBF886694;
sfr volatile typeCNSTATGBITS CNSTATGSETbits absolute 0xBF886698;
sfr volatile typeCNSTATGBITS CNSTATGINVbits absolute 0xBF88669C;

typedef struct tagC1CONBITS {
union {
  struct {
    unsigned DNCNT:5;
    unsigned :6;
    unsigned CANBUSY:1;
    unsigned :1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned :4;
    unsigned CANCAP:1;
    unsigned OPMOD:3;
    unsigned REQOP:3;
    unsigned ABAT:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1CONBITS;
sfr atomic volatile typeC1CONBITS C1CONbits absolute 0xBF88B000;
sfr volatile typeC1CONBITS C1CONCLRbits absolute 0xBF88B004;
sfr volatile typeC1CONBITS C1CONSETbits absolute 0xBF88B008;
sfr volatile typeC1CONBITS C1CONINVbits absolute 0xBF88B00C;

typedef struct tagC1CFGBITS {
union {
  struct {
    unsigned BRP:6;
    unsigned SJW:2;
    unsigned PRSEG:3;
    unsigned SEG1PH:3;
    unsigned SAM:1;
    unsigned SEG2PHTS:1;
    unsigned SEG2PH:3;
    unsigned :3;
    unsigned WAKFIL:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1CFGBITS;
sfr atomic volatile typeC1CFGBITS C1CFGbits absolute 0xBF88B010;
sfr volatile typeC1CFGBITS C1CFGCLRbits absolute 0xBF88B014;
sfr volatile typeC1CFGBITS C1CFGSETbits absolute 0xBF88B018;
sfr volatile typeC1CFGBITS C1CFGINVbits absolute 0xBF88B01C;

typedef struct tagC1INTBITS {
union {
  struct {
    unsigned TBIF:1;
    unsigned RBIF:1;
    unsigned CTMRIF:1;
    unsigned MODIF:1;
    unsigned :7;
    unsigned RBOVIF:1;
    unsigned SERRIF:1;
    unsigned CERRIF:1;
    unsigned WAKIF:1;
    unsigned IVRIF:1;
    unsigned TBIE:1;
    unsigned RBIE:1;
    unsigned CTMRIE:1;
    unsigned MODIE:1;
    unsigned :7;
    unsigned RBOVIE:1;
    unsigned SERRIE:1;
    unsigned CERRIE:1;
    unsigned WAKIE:1;
    unsigned IVRIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1INTBITS;
sfr atomic volatile typeC1INTBITS C1INTbits absolute 0xBF88B020;
sfr volatile typeC1INTBITS C1INTCLRbits absolute 0xBF88B024;
sfr volatile typeC1INTBITS C1INTSETbits absolute 0xBF88B028;
sfr volatile typeC1INTBITS C1INTINVbits absolute 0xBF88B02C;

typedef struct tagC1VECBITS {
union {
  struct {
    unsigned ICODE:7;
    unsigned :1;
    unsigned FILHIT:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1VECBITS;
sfr atomic volatile typeC1VECBITS C1VECbits absolute 0xBF88B030;
sfr volatile typeC1VECBITS C1VECCLRbits absolute 0xBF88B034;
sfr volatile typeC1VECBITS C1VECSETbits absolute 0xBF88B038;
sfr volatile typeC1VECBITS C1VECINVbits absolute 0xBF88B03C;

typedef struct tagC1TRECBITS {
union {
  struct {
    unsigned RERRCNT:8;
    unsigned TERRCNT:8;
    unsigned EWARN:1;
    unsigned RXWARN:1;
    unsigned TXWARN:1;
    unsigned RXBP:1;
    unsigned TXBP:1;
    unsigned TXBO:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1TRECBITS;
sfr atomic volatile typeC1TRECBITS C1TRECbits absolute 0xBF88B040;
sfr volatile typeC1TRECBITS C1TRECCLRbits absolute 0xBF88B044;
sfr volatile typeC1TRECBITS C1TRECSETbits absolute 0xBF88B048;
sfr volatile typeC1TRECBITS C1TRECINVbits absolute 0xBF88B04C;

typedef struct tagC1FSTATBITS {
union {
  struct {
    unsigned FIFOIP:32;
  };
  struct {
    unsigned FIFOIP0:1;
    unsigned FIFOIP1:1;
    unsigned FIFOIP2:1;
    unsigned FIFOIP3:1;
    unsigned FIFOIP4:1;
    unsigned FIFOIP5:1;
    unsigned FIFOIP6:1;
    unsigned FIFOIP7:1;
    unsigned FIFOIP8:1;
    unsigned FIFOIP9:1;
    unsigned FIFOIP10:1;
    unsigned FIFOIP11:1;
    unsigned FIFOIP12:1;
    unsigned FIFOIP13:1;
    unsigned FIFOIP14:1;
    unsigned FIFOIP15:1;
    unsigned FIFOIP16:1;
    unsigned FIFOIP17:1;
    unsigned FIFOIP18:1;
    unsigned FIFOIP19:1;
    unsigned FIFOIP20:1;
    unsigned FIFOIP21:1;
    unsigned FIFOIP22:1;
    unsigned FIFOIP23:1;
    unsigned FIFOIP24:1;
    unsigned FIFOIP25:1;
    unsigned FIFOIP26:1;
    unsigned FIFOIP27:1;
    unsigned FIFOIP28:1;
    unsigned FIFOIP29:1;
    unsigned FIFOIP30:1;
    unsigned FIFOIP31:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FSTATBITS;
sfr atomic volatile typeC1FSTATBITS C1FSTATbits absolute 0xBF88B050;
sfr volatile typeC1FSTATBITS C1FSTATCLRbits absolute 0xBF88B054;
sfr volatile typeC1FSTATBITS C1FSTATSETbits absolute 0xBF88B058;
sfr volatile typeC1FSTATBITS C1FSTATINVbits absolute 0xBF88B05C;

typedef struct tagC1RXOVFBITS {
union {
  struct {
    unsigned RXOVF:32;
  };
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
  struct {
    unsigned w:32;
  };
};
} typeC1RXOVFBITS;
sfr atomic volatile typeC1RXOVFBITS C1RXOVFbits absolute 0xBF88B060;
sfr volatile typeC1RXOVFBITS C1RXOVFCLRbits absolute 0xBF88B064;
sfr volatile typeC1RXOVFBITS C1RXOVFSETbits absolute 0xBF88B068;
sfr volatile typeC1RXOVFBITS C1RXOVFINVbits absolute 0xBF88B06C;

typedef struct tagC1TMRBITS {
union {
  struct {
    unsigned CANTSPRE:16;
    unsigned CANTS:16;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1TMRBITS;
sfr atomic volatile typeC1TMRBITS C1TMRbits absolute 0xBF88B070;
sfr volatile typeC1TMRBITS C1TMRCLRbits absolute 0xBF88B074;
sfr volatile typeC1TMRBITS C1TMRSETbits absolute 0xBF88B078;
sfr volatile typeC1TMRBITS C1TMRINVbits absolute 0xBF88B07C;

typedef struct tagC1RXM0BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned MIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXM0BITS;
sfr atomic volatile typeC1RXM0BITS C1RXM0bits absolute 0xBF88B080;
sfr volatile typeC1RXM0BITS C1RXM0CLRbits absolute 0xBF88B084;
sfr volatile typeC1RXM0BITS C1RXM0SETbits absolute 0xBF88B088;
sfr volatile typeC1RXM0BITS C1RXM0INVbits absolute 0xBF88B08C;

typedef struct tagC1RXM1BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned MIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXM1BITS;
sfr atomic volatile typeC1RXM1BITS C1RXM1bits absolute 0xBF88B090;
sfr volatile typeC1RXM1BITS C1RXM1CLRbits absolute 0xBF88B094;
sfr volatile typeC1RXM1BITS C1RXM1SETbits absolute 0xBF88B098;
sfr volatile typeC1RXM1BITS C1RXM1INVbits absolute 0xBF88B09C;

typedef struct tagC1RXM2BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned MIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXM2BITS;
sfr atomic volatile typeC1RXM2BITS C1RXM2bits absolute 0xBF88B0A0;
sfr volatile typeC1RXM2BITS C1RXM2CLRbits absolute 0xBF88B0A4;
sfr volatile typeC1RXM2BITS C1RXM2SETbits absolute 0xBF88B0A8;
sfr volatile typeC1RXM2BITS C1RXM2INVbits absolute 0xBF88B0AC;

typedef struct tagC1RXM3BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned MIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXM3BITS;
sfr atomic volatile typeC1RXM3BITS C1RXM3bits absolute 0xBF88B0B0;
sfr volatile typeC1RXM3BITS C1RXM3CLRbits absolute 0xBF88B0B4;
sfr volatile typeC1RXM3BITS C1RXM3SETbits absolute 0xBF88B0B8;
sfr volatile typeC1RXM3BITS C1RXM3INVbits absolute 0xBF88B0BC;

typedef struct tagC1FLTCON0BITS {
union {
  struct {
    unsigned FSEL0:5;
    unsigned MSEL0:2;
    unsigned FLTEN0:1;
    unsigned FSEL1:5;
    unsigned MSEL1:2;
    unsigned FLTEN1:1;
    unsigned FSEL2:5;
    unsigned MSEL2:2;
    unsigned FLTEN2:1;
    unsigned FSEL3:5;
    unsigned MSEL3:2;
    unsigned FLTEN3:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FLTCON0BITS;
sfr atomic volatile typeC1FLTCON0BITS C1FLTCON0bits absolute 0xBF88B0C0;
sfr volatile typeC1FLTCON0BITS C1FLTCON0CLRbits absolute 0xBF88B0C4;
sfr volatile typeC1FLTCON0BITS C1FLTCON0SETbits absolute 0xBF88B0C8;
sfr volatile typeC1FLTCON0BITS C1FLTCON0INVbits absolute 0xBF88B0CC;

typedef struct tagC1FLTCON1BITS {
union {
  struct {
    unsigned FSEL4:5;
    unsigned MSEL4:2;
    unsigned FLTEN4:1;
    unsigned FSEL5:5;
    unsigned MSEL5:2;
    unsigned FLTEN5:1;
    unsigned FSEL6:5;
    unsigned MSEL6:2;
    unsigned FLTEN6:1;
    unsigned FSEL7:5;
    unsigned MSEL7:2;
    unsigned FLTEN7:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FLTCON1BITS;
sfr atomic volatile typeC1FLTCON1BITS C1FLTCON1bits absolute 0xBF88B0D0;
sfr volatile typeC1FLTCON1BITS C1FLTCON1CLRbits absolute 0xBF88B0D4;
sfr volatile typeC1FLTCON1BITS C1FLTCON1SETbits absolute 0xBF88B0D8;
sfr volatile typeC1FLTCON1BITS C1FLTCON1INVbits absolute 0xBF88B0DC;

typedef struct tagC1FLTCON2BITS {
union {
  struct {
    unsigned FSEL8:5;
    unsigned MSEL8:2;
    unsigned FLTEN8:1;
    unsigned FSEL9:5;
    unsigned MSEL9:2;
    unsigned FLTEN9:1;
    unsigned FSEL10:5;
    unsigned MSEL10:2;
    unsigned FLTEN10:1;
    unsigned FSEL11:5;
    unsigned MSEL11:2;
    unsigned FLTEN11:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FLTCON2BITS;
sfr atomic volatile typeC1FLTCON2BITS C1FLTCON2bits absolute 0xBF88B0E0;
sfr volatile typeC1FLTCON2BITS C1FLTCON2CLRbits absolute 0xBF88B0E4;
sfr volatile typeC1FLTCON2BITS C1FLTCON2SETbits absolute 0xBF88B0E8;
sfr volatile typeC1FLTCON2BITS C1FLTCON2INVbits absolute 0xBF88B0EC;

typedef struct tagC1FLTCON3BITS {
union {
  struct {
    unsigned FSEL12:5;
    unsigned MSEL12:2;
    unsigned FLTEN12:1;
    unsigned FSEL13:5;
    unsigned MSEL13:2;
    unsigned FLTEN13:1;
    unsigned FSEL14:5;
    unsigned MSEL14:2;
    unsigned FLTEN14:1;
    unsigned FSEL15:5;
    unsigned MSEL15:2;
    unsigned FLTEN15:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FLTCON3BITS;
sfr atomic volatile typeC1FLTCON3BITS C1FLTCON3bits absolute 0xBF88B0F0;
sfr volatile typeC1FLTCON3BITS C1FLTCON3CLRbits absolute 0xBF88B0F4;
sfr volatile typeC1FLTCON3BITS C1FLTCON3SETbits absolute 0xBF88B0F8;
sfr volatile typeC1FLTCON3BITS C1FLTCON3INVbits absolute 0xBF88B0FC;

typedef struct tagC1FLTCON4BITS {
union {
  struct {
    unsigned FSEL16:5;
    unsigned MSEL16:2;
    unsigned FLTEN16:1;
    unsigned FSEL17:5;
    unsigned MSEL17:2;
    unsigned FLTEN17:1;
    unsigned FSEL18:5;
    unsigned MSEL18:2;
    unsigned FLTEN18:1;
    unsigned FSEL19:5;
    unsigned MSEL19:2;
    unsigned FLTEN19:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FLTCON4BITS;
sfr atomic volatile typeC1FLTCON4BITS C1FLTCON4bits absolute 0xBF88B100;
sfr volatile typeC1FLTCON4BITS C1FLTCON4CLRbits absolute 0xBF88B104;
sfr volatile typeC1FLTCON4BITS C1FLTCON4SETbits absolute 0xBF88B108;
sfr volatile typeC1FLTCON4BITS C1FLTCON4INVbits absolute 0xBF88B10C;

typedef struct tagC1FLTCON5BITS {
union {
  struct {
    unsigned FSEL20:5;
    unsigned MSEL20:2;
    unsigned FLTEN20:1;
    unsigned FSEL21:5;
    unsigned MSEL21:2;
    unsigned FLTEN21:1;
    unsigned FSEL22:5;
    unsigned MSEL22:2;
    unsigned FLTEN22:1;
    unsigned FSEL23:5;
    unsigned MSEL23:2;
    unsigned FLTEN23:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FLTCON5BITS;
sfr atomic volatile typeC1FLTCON5BITS C1FLTCON5bits absolute 0xBF88B110;
sfr volatile typeC1FLTCON5BITS C1FLTCON5CLRbits absolute 0xBF88B114;
sfr volatile typeC1FLTCON5BITS C1FLTCON5SETbits absolute 0xBF88B118;
sfr volatile typeC1FLTCON5BITS C1FLTCON5INVbits absolute 0xBF88B11C;

typedef struct tagC1FLTCON6BITS {
union {
  struct {
    unsigned FSEL24:5;
    unsigned MSEL24:2;
    unsigned FLTEN24:1;
    unsigned FSEL25:5;
    unsigned MSEL25:2;
    unsigned FLTEN25:1;
    unsigned FSEL26:5;
    unsigned MSEL26:2;
    unsigned FLTEN26:1;
    unsigned FSEL27:5;
    unsigned MSEL27:2;
    unsigned FLTEN27:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FLTCON6BITS;
sfr atomic volatile typeC1FLTCON6BITS C1FLTCON6bits absolute 0xBF88B120;
sfr volatile typeC1FLTCON6BITS C1FLTCON6CLRbits absolute 0xBF88B124;
sfr volatile typeC1FLTCON6BITS C1FLTCON6SETbits absolute 0xBF88B128;
sfr volatile typeC1FLTCON6BITS C1FLTCON6INVbits absolute 0xBF88B12C;

typedef struct tagC1FLTCON7BITS {
union {
  struct {
    unsigned FSEL28:5;
    unsigned MSEL28:2;
    unsigned FLTEN28:1;
    unsigned FSEL29:5;
    unsigned MSEL29:2;
    unsigned FLTEN29:1;
    unsigned FSEL30:5;
    unsigned MSEL30:2;
    unsigned FLTEN30:1;
    unsigned FSEL31:5;
    unsigned MSEL31:2;
    unsigned FLTEN31:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FLTCON7BITS;
sfr atomic volatile typeC1FLTCON7BITS C1FLTCON7bits absolute 0xBF88B130;
sfr volatile typeC1FLTCON7BITS C1FLTCON7CLRbits absolute 0xBF88B134;
sfr volatile typeC1FLTCON7BITS C1FLTCON7SETbits absolute 0xBF88B138;
sfr volatile typeC1FLTCON7BITS C1FLTCON7INVbits absolute 0xBF88B13C;

typedef struct tagC1RXF0BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF0BITS;
sfr atomic volatile typeC1RXF0BITS C1RXF0bits absolute 0xBF88B140;
sfr volatile typeC1RXF0BITS C1RXF0CLRbits absolute 0xBF88B144;
sfr volatile typeC1RXF0BITS C1RXF0SETbits absolute 0xBF88B148;
sfr volatile typeC1RXF0BITS C1RXF0INVbits absolute 0xBF88B14C;

typedef struct tagC1RXF1BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF1BITS;
sfr atomic volatile typeC1RXF1BITS C1RXF1bits absolute 0xBF88B150;
sfr volatile typeC1RXF1BITS C1RXF1CLRbits absolute 0xBF88B154;
sfr volatile typeC1RXF1BITS C1RXF1SETbits absolute 0xBF88B158;
sfr volatile typeC1RXF1BITS C1RXF1INVbits absolute 0xBF88B15C;

typedef struct tagC1RXF2BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF2BITS;
sfr atomic volatile typeC1RXF2BITS C1RXF2bits absolute 0xBF88B160;
sfr volatile typeC1RXF2BITS C1RXF2CLRbits absolute 0xBF88B164;
sfr volatile typeC1RXF2BITS C1RXF2SETbits absolute 0xBF88B168;
sfr volatile typeC1RXF2BITS C1RXF2INVbits absolute 0xBF88B16C;

typedef struct tagC1RXF3BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF3BITS;
sfr atomic volatile typeC1RXF3BITS C1RXF3bits absolute 0xBF88B170;
sfr volatile typeC1RXF3BITS C1RXF3CLRbits absolute 0xBF88B174;
sfr volatile typeC1RXF3BITS C1RXF3SETbits absolute 0xBF88B178;
sfr volatile typeC1RXF3BITS C1RXF3INVbits absolute 0xBF88B17C;

typedef struct tagC1RXF4BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF4BITS;
sfr atomic volatile typeC1RXF4BITS C1RXF4bits absolute 0xBF88B180;
sfr volatile typeC1RXF4BITS C1RXF4CLRbits absolute 0xBF88B184;
sfr volatile typeC1RXF4BITS C1RXF4SETbits absolute 0xBF88B188;
sfr volatile typeC1RXF4BITS C1RXF4INVbits absolute 0xBF88B18C;

typedef struct tagC1RXF5BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF5BITS;
sfr atomic volatile typeC1RXF5BITS C1RXF5bits absolute 0xBF88B190;
sfr volatile typeC1RXF5BITS C1RXF5CLRbits absolute 0xBF88B194;
sfr volatile typeC1RXF5BITS C1RXF5SETbits absolute 0xBF88B198;
sfr volatile typeC1RXF5BITS C1RXF5INVbits absolute 0xBF88B19C;

typedef struct tagC1RXF6BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF6BITS;
sfr atomic volatile typeC1RXF6BITS C1RXF6bits absolute 0xBF88B1A0;
sfr volatile typeC1RXF6BITS C1RXF6CLRbits absolute 0xBF88B1A4;
sfr volatile typeC1RXF6BITS C1RXF6SETbits absolute 0xBF88B1A8;
sfr volatile typeC1RXF6BITS C1RXF6INVbits absolute 0xBF88B1AC;

typedef struct tagC1RXF7BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF7BITS;
sfr atomic volatile typeC1RXF7BITS C1RXF7bits absolute 0xBF88B1B0;
sfr volatile typeC1RXF7BITS C1RXF7CLRbits absolute 0xBF88B1B4;
sfr volatile typeC1RXF7BITS C1RXF7SETbits absolute 0xBF88B1B8;
sfr volatile typeC1RXF7BITS C1RXF7INVbits absolute 0xBF88B1BC;

typedef struct tagC1RXF8BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF8BITS;
sfr atomic volatile typeC1RXF8BITS C1RXF8bits absolute 0xBF88B1C0;
sfr volatile typeC1RXF8BITS C1RXF8CLRbits absolute 0xBF88B1C4;
sfr volatile typeC1RXF8BITS C1RXF8SETbits absolute 0xBF88B1C8;
sfr volatile typeC1RXF8BITS C1RXF8INVbits absolute 0xBF88B1CC;

typedef struct tagC1RXF9BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF9BITS;
sfr atomic volatile typeC1RXF9BITS C1RXF9bits absolute 0xBF88B1D0;
sfr volatile typeC1RXF9BITS C1RXF9CLRbits absolute 0xBF88B1D4;
sfr volatile typeC1RXF9BITS C1RXF9SETbits absolute 0xBF88B1D8;
sfr volatile typeC1RXF9BITS C1RXF9INVbits absolute 0xBF88B1DC;

typedef struct tagC1RXF10BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF10BITS;
sfr atomic volatile typeC1RXF10BITS C1RXF10bits absolute 0xBF88B1E0;
sfr volatile typeC1RXF10BITS C1RXF10CLRbits absolute 0xBF88B1E4;
sfr volatile typeC1RXF10BITS C1RXF10SETbits absolute 0xBF88B1E8;
sfr volatile typeC1RXF10BITS C1RXF10INVbits absolute 0xBF88B1EC;

typedef struct tagC1RXF11BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF11BITS;
sfr atomic volatile typeC1RXF11BITS C1RXF11bits absolute 0xBF88B1F0;
sfr volatile typeC1RXF11BITS C1RXF11CLRbits absolute 0xBF88B1F4;
sfr volatile typeC1RXF11BITS C1RXF11SETbits absolute 0xBF88B1F8;
sfr volatile typeC1RXF11BITS C1RXF11INVbits absolute 0xBF88B1FC;

typedef struct tagC1RXF12BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF12BITS;
sfr atomic volatile typeC1RXF12BITS C1RXF12bits absolute 0xBF88B200;
sfr volatile typeC1RXF12BITS C1RXF12CLRbits absolute 0xBF88B204;
sfr volatile typeC1RXF12BITS C1RXF12SETbits absolute 0xBF88B208;
sfr volatile typeC1RXF12BITS C1RXF12INVbits absolute 0xBF88B20C;

typedef struct tagC1RXF13BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF13BITS;
sfr atomic volatile typeC1RXF13BITS C1RXF13bits absolute 0xBF88B210;
sfr volatile typeC1RXF13BITS C1RXF13CLRbits absolute 0xBF88B214;
sfr volatile typeC1RXF13BITS C1RXF13SETbits absolute 0xBF88B218;
sfr volatile typeC1RXF13BITS C1RXF13INVbits absolute 0xBF88B21C;

typedef struct tagC1RXF14BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF14BITS;
sfr atomic volatile typeC1RXF14BITS C1RXF14bits absolute 0xBF88B220;
sfr volatile typeC1RXF14BITS C1RXF14CLRbits absolute 0xBF88B224;
sfr volatile typeC1RXF14BITS C1RXF14SETbits absolute 0xBF88B228;
sfr volatile typeC1RXF14BITS C1RXF14INVbits absolute 0xBF88B22C;

typedef struct tagC1RXF15BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF15BITS;
sfr atomic volatile typeC1RXF15BITS C1RXF15bits absolute 0xBF88B230;
sfr volatile typeC1RXF15BITS C1RXF15CLRbits absolute 0xBF88B234;
sfr volatile typeC1RXF15BITS C1RXF15SETbits absolute 0xBF88B238;
sfr volatile typeC1RXF15BITS C1RXF15INVbits absolute 0xBF88B23C;

typedef struct tagC1RXF16BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF16BITS;
sfr atomic volatile typeC1RXF16BITS C1RXF16bits absolute 0xBF88B240;
sfr volatile typeC1RXF16BITS C1RXF16CLRbits absolute 0xBF88B244;
sfr volatile typeC1RXF16BITS C1RXF16SETbits absolute 0xBF88B248;
sfr volatile typeC1RXF16BITS C1RXF16INVbits absolute 0xBF88B24C;

typedef struct tagC1RXF17BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF17BITS;
sfr atomic volatile typeC1RXF17BITS C1RXF17bits absolute 0xBF88B250;
sfr volatile typeC1RXF17BITS C1RXF17CLRbits absolute 0xBF88B254;
sfr volatile typeC1RXF17BITS C1RXF17SETbits absolute 0xBF88B258;
sfr volatile typeC1RXF17BITS C1RXF17INVbits absolute 0xBF88B25C;

typedef struct tagC1RXF18BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF18BITS;
sfr atomic volatile typeC1RXF18BITS C1RXF18bits absolute 0xBF88B260;
sfr volatile typeC1RXF18BITS C1RXF18CLRbits absolute 0xBF88B264;
sfr volatile typeC1RXF18BITS C1RXF18SETbits absolute 0xBF88B268;
sfr volatile typeC1RXF18BITS C1RXF18INVbits absolute 0xBF88B26C;

typedef struct tagC1RXF19BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF19BITS;
sfr atomic volatile typeC1RXF19BITS C1RXF19bits absolute 0xBF88B270;
sfr volatile typeC1RXF19BITS C1RXF19CLRbits absolute 0xBF88B274;
sfr volatile typeC1RXF19BITS C1RXF19SETbits absolute 0xBF88B278;
sfr volatile typeC1RXF19BITS C1RXF19INVbits absolute 0xBF88B27C;

typedef struct tagC1RXF20BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF20BITS;
sfr atomic volatile typeC1RXF20BITS C1RXF20bits absolute 0xBF88B280;
sfr volatile typeC1RXF20BITS C1RXF20CLRbits absolute 0xBF88B284;
sfr volatile typeC1RXF20BITS C1RXF20SETbits absolute 0xBF88B288;
sfr volatile typeC1RXF20BITS C1RXF20INVbits absolute 0xBF88B28C;

typedef struct tagC1RXF21BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF21BITS;
sfr atomic volatile typeC1RXF21BITS C1RXF21bits absolute 0xBF88B290;
sfr volatile typeC1RXF21BITS C1RXF21CLRbits absolute 0xBF88B294;
sfr volatile typeC1RXF21BITS C1RXF21SETbits absolute 0xBF88B298;
sfr volatile typeC1RXF21BITS C1RXF21INVbits absolute 0xBF88B29C;

typedef struct tagC1RXF22BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF22BITS;
sfr atomic volatile typeC1RXF22BITS C1RXF22bits absolute 0xBF88B2A0;
sfr volatile typeC1RXF22BITS C1RXF22CLRbits absolute 0xBF88B2A4;
sfr volatile typeC1RXF22BITS C1RXF22SETbits absolute 0xBF88B2A8;
sfr volatile typeC1RXF22BITS C1RXF22INVbits absolute 0xBF88B2AC;

typedef struct tagC1RXF23BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF23BITS;
sfr atomic volatile typeC1RXF23BITS C1RXF23bits absolute 0xBF88B2B0;
sfr volatile typeC1RXF23BITS C1RXF23CLRbits absolute 0xBF88B2B4;
sfr volatile typeC1RXF23BITS C1RXF23SETbits absolute 0xBF88B2B8;
sfr volatile typeC1RXF23BITS C1RXF23INVbits absolute 0xBF88B2BC;

typedef struct tagC1RXF24BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF24BITS;
sfr atomic volatile typeC1RXF24BITS C1RXF24bits absolute 0xBF88B2C0;
sfr volatile typeC1RXF24BITS C1RXF24CLRbits absolute 0xBF88B2C4;
sfr volatile typeC1RXF24BITS C1RXF24SETbits absolute 0xBF88B2C8;
sfr volatile typeC1RXF24BITS C1RXF24INVbits absolute 0xBF88B2CC;

typedef struct tagC1RXF25BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF25BITS;
sfr atomic volatile typeC1RXF25BITS C1RXF25bits absolute 0xBF88B2D0;
sfr volatile typeC1RXF25BITS C1RXF25CLRbits absolute 0xBF88B2D4;
sfr volatile typeC1RXF25BITS C1RXF25SETbits absolute 0xBF88B2D8;
sfr volatile typeC1RXF25BITS C1RXF25INVbits absolute 0xBF88B2DC;

typedef struct tagC1RXF26BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF26BITS;
sfr atomic volatile typeC1RXF26BITS C1RXF26bits absolute 0xBF88B2E0;
sfr volatile typeC1RXF26BITS C1RXF26CLRbits absolute 0xBF88B2E4;
sfr volatile typeC1RXF26BITS C1RXF26SETbits absolute 0xBF88B2E8;
sfr volatile typeC1RXF26BITS C1RXF26INVbits absolute 0xBF88B2EC;

typedef struct tagC1RXF27BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF27BITS;
sfr atomic volatile typeC1RXF27BITS C1RXF27bits absolute 0xBF88B2F0;
sfr volatile typeC1RXF27BITS C1RXF27CLRbits absolute 0xBF88B2F4;
sfr volatile typeC1RXF27BITS C1RXF27SETbits absolute 0xBF88B2F8;
sfr volatile typeC1RXF27BITS C1RXF27INVbits absolute 0xBF88B2FC;

typedef struct tagC1RXF28BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF28BITS;
sfr atomic volatile typeC1RXF28BITS C1RXF28bits absolute 0xBF88B300;
sfr volatile typeC1RXF28BITS C1RXF28CLRbits absolute 0xBF88B304;
sfr volatile typeC1RXF28BITS C1RXF28SETbits absolute 0xBF88B308;
sfr volatile typeC1RXF28BITS C1RXF28INVbits absolute 0xBF88B30C;

typedef struct tagC1RXF29BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF29BITS;
sfr atomic volatile typeC1RXF29BITS C1RXF29bits absolute 0xBF88B310;
sfr volatile typeC1RXF29BITS C1RXF29CLRbits absolute 0xBF88B314;
sfr volatile typeC1RXF29BITS C1RXF29SETbits absolute 0xBF88B318;
sfr volatile typeC1RXF29BITS C1RXF29INVbits absolute 0xBF88B31C;

typedef struct tagC1RXF30BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF30BITS;
sfr atomic volatile typeC1RXF30BITS C1RXF30bits absolute 0xBF88B320;
sfr volatile typeC1RXF30BITS C1RXF30CLRbits absolute 0xBF88B324;
sfr volatile typeC1RXF30BITS C1RXF30SETbits absolute 0xBF88B328;
sfr volatile typeC1RXF30BITS C1RXF30INVbits absolute 0xBF88B32C;

typedef struct tagC1RXF31BITS {
union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1RXF31BITS;
sfr atomic volatile typeC1RXF31BITS C1RXF31bits absolute 0xBF88B330;
sfr volatile typeC1RXF31BITS C1RXF31CLRbits absolute 0xBF88B334;
sfr volatile typeC1RXF31BITS C1RXF31SETbits absolute 0xBF88B338;
sfr volatile typeC1RXF31BITS C1RXF31INVbits absolute 0xBF88B33C;
sfr atomic volatile typeC1RXF31BITS C1FIFOBAbits absolute 0xBF88B340;
sfr volatile typeC1RXF31BITS C1FIFOBACLRbits absolute 0xBF88B344;
sfr volatile typeC1RXF31BITS C1FIFOBASETbits absolute 0xBF88B348;
sfr volatile typeC1RXF31BITS C1FIFOBAINVbits absolute 0xBF88B34C;

typedef struct tagC1FIFOCON0BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON0BITS;
sfr atomic volatile typeC1FIFOCON0BITS C1FIFOCON0bits absolute 0xBF88B350;
sfr volatile typeC1FIFOCON0BITS C1FIFOCON0CLRbits absolute 0xBF88B354;
sfr volatile typeC1FIFOCON0BITS C1FIFOCON0SETbits absolute 0xBF88B358;
sfr volatile typeC1FIFOCON0BITS C1FIFOCON0INVbits absolute 0xBF88B35C;

typedef struct tagC1FIFOINT0BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT0BITS;
sfr atomic volatile typeC1FIFOINT0BITS C1FIFOINT0bits absolute 0xBF88B360;
sfr volatile typeC1FIFOINT0BITS C1FIFOINT0CLRbits absolute 0xBF88B364;
sfr volatile typeC1FIFOINT0BITS C1FIFOINT0SETbits absolute 0xBF88B368;
sfr volatile typeC1FIFOINT0BITS C1FIFOINT0INVbits absolute 0xBF88B36C;
sfr atomic volatile typeC1FIFOINT0BITS C1FIFOUA0bits absolute 0xBF88B370;
sfr volatile typeC1FIFOINT0BITS C1FIFOUA0CLRbits absolute 0xBF88B374;
sfr volatile typeC1FIFOINT0BITS C1FIFOUA0SETbits absolute 0xBF88B378;
sfr volatile typeC1FIFOINT0BITS C1FIFOUA0INVbits absolute 0xBF88B37C;

typedef struct tagC1FIFOCI0BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI0BITS;
sfr atomic volatile typeC1FIFOCI0BITS C1FIFOCI0bits absolute 0xBF88B380;
sfr volatile typeC1FIFOCI0BITS C1FIFOCI0CLRbits absolute 0xBF88B384;
sfr volatile typeC1FIFOCI0BITS C1FIFOCI0SETbits absolute 0xBF88B388;
sfr volatile typeC1FIFOCI0BITS C1FIFOCI0INVbits absolute 0xBF88B38C;

typedef struct tagC1FIFOCON1BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON1BITS;
sfr atomic volatile typeC1FIFOCON1BITS C1FIFOCON1bits absolute 0xBF88B390;
sfr volatile typeC1FIFOCON1BITS C1FIFOCON1CLRbits absolute 0xBF88B394;
sfr volatile typeC1FIFOCON1BITS C1FIFOCON1SETbits absolute 0xBF88B398;
sfr volatile typeC1FIFOCON1BITS C1FIFOCON1INVbits absolute 0xBF88B39C;

typedef struct tagC1FIFOINT1BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT1BITS;
sfr atomic volatile typeC1FIFOINT1BITS C1FIFOINT1bits absolute 0xBF88B3A0;
sfr volatile typeC1FIFOINT1BITS C1FIFOINT1CLRbits absolute 0xBF88B3A4;
sfr volatile typeC1FIFOINT1BITS C1FIFOINT1SETbits absolute 0xBF88B3A8;
sfr volatile typeC1FIFOINT1BITS C1FIFOINT1INVbits absolute 0xBF88B3AC;
sfr atomic volatile typeC1FIFOINT1BITS C1FIFOUA1bits absolute 0xBF88B3B0;
sfr volatile typeC1FIFOINT1BITS C1FIFOUA1CLRbits absolute 0xBF88B3B4;
sfr volatile typeC1FIFOINT1BITS C1FIFOUA1SETbits absolute 0xBF88B3B8;
sfr volatile typeC1FIFOINT1BITS C1FIFOUA1INVbits absolute 0xBF88B3BC;

typedef struct tagC1FIFOCI1BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI1BITS;
sfr atomic volatile typeC1FIFOCI1BITS C1FIFOCI1bits absolute 0xBF88B3C0;
sfr volatile typeC1FIFOCI1BITS C1FIFOCI1CLRbits absolute 0xBF88B3C4;
sfr volatile typeC1FIFOCI1BITS C1FIFOCI1SETbits absolute 0xBF88B3C8;
sfr volatile typeC1FIFOCI1BITS C1FIFOCI1INVbits absolute 0xBF88B3CC;

typedef struct tagC1FIFOCON2BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON2BITS;
sfr atomic volatile typeC1FIFOCON2BITS C1FIFOCON2bits absolute 0xBF88B3D0;
sfr volatile typeC1FIFOCON2BITS C1FIFOCON2CLRbits absolute 0xBF88B3D4;
sfr volatile typeC1FIFOCON2BITS C1FIFOCON2SETbits absolute 0xBF88B3D8;
sfr volatile typeC1FIFOCON2BITS C1FIFOCON2INVbits absolute 0xBF88B3DC;

typedef struct tagC1FIFOINT2BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT2BITS;
sfr atomic volatile typeC1FIFOINT2BITS C1FIFOINT2bits absolute 0xBF88B3E0;
sfr volatile typeC1FIFOINT2BITS C1FIFOINT2CLRbits absolute 0xBF88B3E4;
sfr volatile typeC1FIFOINT2BITS C1FIFOINT2SETbits absolute 0xBF88B3E8;
sfr volatile typeC1FIFOINT2BITS C1FIFOINT2INVbits absolute 0xBF88B3EC;
sfr atomic volatile typeC1FIFOINT2BITS C1FIFOUA2bits absolute 0xBF88B3F0;
sfr volatile typeC1FIFOINT2BITS C1FIFOUA2CLRbits absolute 0xBF88B3F4;
sfr volatile typeC1FIFOINT2BITS C1FIFOUA2SETbits absolute 0xBF88B3F8;
sfr volatile typeC1FIFOINT2BITS C1FIFOUA2INVbits absolute 0xBF88B3FC;

typedef struct tagC1FIFOCI2BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI2BITS;
sfr atomic volatile typeC1FIFOCI2BITS C1FIFOCI2bits absolute 0xBF88B400;
sfr volatile typeC1FIFOCI2BITS C1FIFOCI2CLRbits absolute 0xBF88B404;
sfr volatile typeC1FIFOCI2BITS C1FIFOCI2SETbits absolute 0xBF88B408;
sfr volatile typeC1FIFOCI2BITS C1FIFOCI2INVbits absolute 0xBF88B40C;

typedef struct tagC1FIFOCON3BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON3BITS;
sfr atomic volatile typeC1FIFOCON3BITS C1FIFOCON3bits absolute 0xBF88B410;
sfr volatile typeC1FIFOCON3BITS C1FIFOCON3CLRbits absolute 0xBF88B414;
sfr volatile typeC1FIFOCON3BITS C1FIFOCON3SETbits absolute 0xBF88B418;
sfr volatile typeC1FIFOCON3BITS C1FIFOCON3INVbits absolute 0xBF88B41C;

typedef struct tagC1FIFOINT3BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT3BITS;
sfr atomic volatile typeC1FIFOINT3BITS C1FIFOINT3bits absolute 0xBF88B420;
sfr volatile typeC1FIFOINT3BITS C1FIFOINT3CLRbits absolute 0xBF88B424;
sfr volatile typeC1FIFOINT3BITS C1FIFOINT3SETbits absolute 0xBF88B428;
sfr volatile typeC1FIFOINT3BITS C1FIFOINT3INVbits absolute 0xBF88B42C;
sfr atomic volatile typeC1FIFOINT3BITS C1FIFOUA3bits absolute 0xBF88B430;
sfr volatile typeC1FIFOINT3BITS C1FIFOUA3CLRbits absolute 0xBF88B434;
sfr volatile typeC1FIFOINT3BITS C1FIFOUA3SETbits absolute 0xBF88B438;
sfr volatile typeC1FIFOINT3BITS C1FIFOUA3INVbits absolute 0xBF88B43C;

typedef struct tagC1FIFOCI3BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI3BITS;
sfr atomic volatile typeC1FIFOCI3BITS C1FIFOCI3bits absolute 0xBF88B440;
sfr volatile typeC1FIFOCI3BITS C1FIFOCI3CLRbits absolute 0xBF88B444;
sfr volatile typeC1FIFOCI3BITS C1FIFOCI3SETbits absolute 0xBF88B448;
sfr volatile typeC1FIFOCI3BITS C1FIFOCI3INVbits absolute 0xBF88B44C;

typedef struct tagC1FIFOCON4BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON4BITS;
sfr atomic volatile typeC1FIFOCON4BITS C1FIFOCON4bits absolute 0xBF88B450;
sfr volatile typeC1FIFOCON4BITS C1FIFOCON4CLRbits absolute 0xBF88B454;
sfr volatile typeC1FIFOCON4BITS C1FIFOCON4SETbits absolute 0xBF88B458;
sfr volatile typeC1FIFOCON4BITS C1FIFOCON4INVbits absolute 0xBF88B45C;

typedef struct tagC1FIFOINT4BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT4BITS;
sfr atomic volatile typeC1FIFOINT4BITS C1FIFOINT4bits absolute 0xBF88B460;
sfr volatile typeC1FIFOINT4BITS C1FIFOINT4CLRbits absolute 0xBF88B464;
sfr volatile typeC1FIFOINT4BITS C1FIFOINT4SETbits absolute 0xBF88B468;
sfr volatile typeC1FIFOINT4BITS C1FIFOINT4INVbits absolute 0xBF88B46C;
sfr atomic volatile typeC1FIFOINT4BITS C1FIFOUA4bits absolute 0xBF88B470;
sfr volatile typeC1FIFOINT4BITS C1FIFOUA4CLRbits absolute 0xBF88B474;
sfr volatile typeC1FIFOINT4BITS C1FIFOUA4SETbits absolute 0xBF88B478;
sfr volatile typeC1FIFOINT4BITS C1FIFOUA4INVbits absolute 0xBF88B47C;

typedef struct tagC1FIFOCI4BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI4BITS;
sfr atomic volatile typeC1FIFOCI4BITS C1FIFOCI4bits absolute 0xBF88B480;
sfr volatile typeC1FIFOCI4BITS C1FIFOCI4CLRbits absolute 0xBF88B484;
sfr volatile typeC1FIFOCI4BITS C1FIFOCI4SETbits absolute 0xBF88B488;
sfr volatile typeC1FIFOCI4BITS C1FIFOCI4INVbits absolute 0xBF88B48C;

typedef struct tagC1FIFOCON5BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON5BITS;
sfr atomic volatile typeC1FIFOCON5BITS C1FIFOCON5bits absolute 0xBF88B490;
sfr volatile typeC1FIFOCON5BITS C1FIFOCON5CLRbits absolute 0xBF88B494;
sfr volatile typeC1FIFOCON5BITS C1FIFOCON5SETbits absolute 0xBF88B498;
sfr volatile typeC1FIFOCON5BITS C1FIFOCON5INVbits absolute 0xBF88B49C;

typedef struct tagC1FIFOINT5BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT5BITS;
sfr atomic volatile typeC1FIFOINT5BITS C1FIFOINT5bits absolute 0xBF88B4A0;
sfr volatile typeC1FIFOINT5BITS C1FIFOINT5CLRbits absolute 0xBF88B4A4;
sfr volatile typeC1FIFOINT5BITS C1FIFOINT5SETbits absolute 0xBF88B4A8;
sfr volatile typeC1FIFOINT5BITS C1FIFOINT5INVbits absolute 0xBF88B4AC;
sfr atomic volatile typeC1FIFOINT5BITS C1FIFOUA5bits absolute 0xBF88B4B0;
sfr volatile typeC1FIFOINT5BITS C1FIFOUA5CLRbits absolute 0xBF88B4B4;
sfr volatile typeC1FIFOINT5BITS C1FIFOUA5SETbits absolute 0xBF88B4B8;
sfr volatile typeC1FIFOINT5BITS C1FIFOUA5INVbits absolute 0xBF88B4BC;

typedef struct tagC1FIFOCI5BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI5BITS;
sfr atomic volatile typeC1FIFOCI5BITS C1FIFOCI5bits absolute 0xBF88B4C0;
sfr volatile typeC1FIFOCI5BITS C1FIFOCI5CLRbits absolute 0xBF88B4C4;
sfr volatile typeC1FIFOCI5BITS C1FIFOCI5SETbits absolute 0xBF88B4C8;
sfr volatile typeC1FIFOCI5BITS C1FIFOCI5INVbits absolute 0xBF88B4CC;

typedef struct tagC1FIFOCON6BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON6BITS;
sfr atomic volatile typeC1FIFOCON6BITS C1FIFOCON6bits absolute 0xBF88B4D0;
sfr volatile typeC1FIFOCON6BITS C1FIFOCON6CLRbits absolute 0xBF88B4D4;
sfr volatile typeC1FIFOCON6BITS C1FIFOCON6SETbits absolute 0xBF88B4D8;
sfr volatile typeC1FIFOCON6BITS C1FIFOCON6INVbits absolute 0xBF88B4DC;

typedef struct tagC1FIFOINT6BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT6BITS;
sfr atomic volatile typeC1FIFOINT6BITS C1FIFOINT6bits absolute 0xBF88B4E0;
sfr volatile typeC1FIFOINT6BITS C1FIFOINT6CLRbits absolute 0xBF88B4E4;
sfr volatile typeC1FIFOINT6BITS C1FIFOINT6SETbits absolute 0xBF88B4E8;
sfr volatile typeC1FIFOINT6BITS C1FIFOINT6INVbits absolute 0xBF88B4EC;
sfr atomic volatile typeC1FIFOINT6BITS C1FIFOUA6bits absolute 0xBF88B4F0;
sfr volatile typeC1FIFOINT6BITS C1FIFOUA6CLRbits absolute 0xBF88B4F4;
sfr volatile typeC1FIFOINT6BITS C1FIFOUA6SETbits absolute 0xBF88B4F8;
sfr volatile typeC1FIFOINT6BITS C1FIFOUA6INVbits absolute 0xBF88B4FC;

typedef struct tagC1FIFOCI6BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI6BITS;
sfr atomic volatile typeC1FIFOCI6BITS C1FIFOCI6bits absolute 0xBF88B500;
sfr volatile typeC1FIFOCI6BITS C1FIFOCI6CLRbits absolute 0xBF88B504;
sfr volatile typeC1FIFOCI6BITS C1FIFOCI6SETbits absolute 0xBF88B508;
sfr volatile typeC1FIFOCI6BITS C1FIFOCI6INVbits absolute 0xBF88B50C;

typedef struct tagC1FIFOCON7BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON7BITS;
sfr atomic volatile typeC1FIFOCON7BITS C1FIFOCON7bits absolute 0xBF88B510;
sfr volatile typeC1FIFOCON7BITS C1FIFOCON7CLRbits absolute 0xBF88B514;
sfr volatile typeC1FIFOCON7BITS C1FIFOCON7SETbits absolute 0xBF88B518;
sfr volatile typeC1FIFOCON7BITS C1FIFOCON7INVbits absolute 0xBF88B51C;

typedef struct tagC1FIFOINT7BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT7BITS;
sfr atomic volatile typeC1FIFOINT7BITS C1FIFOINT7bits absolute 0xBF88B520;
sfr volatile typeC1FIFOINT7BITS C1FIFOINT7CLRbits absolute 0xBF88B524;
sfr volatile typeC1FIFOINT7BITS C1FIFOINT7SETbits absolute 0xBF88B528;
sfr volatile typeC1FIFOINT7BITS C1FIFOINT7INVbits absolute 0xBF88B52C;
sfr atomic volatile typeC1FIFOINT7BITS C1FIFOUA7bits absolute 0xBF88B530;
sfr volatile typeC1FIFOINT7BITS C1FIFOUA7CLRbits absolute 0xBF88B534;
sfr volatile typeC1FIFOINT7BITS C1FIFOUA7SETbits absolute 0xBF88B538;
sfr volatile typeC1FIFOINT7BITS C1FIFOUA7INVbits absolute 0xBF88B53C;

typedef struct tagC1FIFOCI7BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI7BITS;
sfr atomic volatile typeC1FIFOCI7BITS C1FIFOCI7bits absolute 0xBF88B540;
sfr volatile typeC1FIFOCI7BITS C1FIFOCI7CLRbits absolute 0xBF88B544;
sfr volatile typeC1FIFOCI7BITS C1FIFOCI7SETbits absolute 0xBF88B548;
sfr volatile typeC1FIFOCI7BITS C1FIFOCI7INVbits absolute 0xBF88B54C;

typedef struct tagC1FIFOCON8BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON8BITS;
sfr atomic volatile typeC1FIFOCON8BITS C1FIFOCON8bits absolute 0xBF88B550;
sfr volatile typeC1FIFOCON8BITS C1FIFOCON8CLRbits absolute 0xBF88B554;
sfr volatile typeC1FIFOCON8BITS C1FIFOCON8SETbits absolute 0xBF88B558;
sfr volatile typeC1FIFOCON8BITS C1FIFOCON8INVbits absolute 0xBF88B55C;

typedef struct tagC1FIFOINT8BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT8BITS;
sfr atomic volatile typeC1FIFOINT8BITS C1FIFOINT8bits absolute 0xBF88B560;
sfr volatile typeC1FIFOINT8BITS C1FIFOINT8CLRbits absolute 0xBF88B564;
sfr volatile typeC1FIFOINT8BITS C1FIFOINT8SETbits absolute 0xBF88B568;
sfr volatile typeC1FIFOINT8BITS C1FIFOINT8INVbits absolute 0xBF88B56C;
sfr atomic volatile typeC1FIFOINT8BITS C1FIFOUA8bits absolute 0xBF88B570;
sfr volatile typeC1FIFOINT8BITS C1FIFOUA8CLRbits absolute 0xBF88B574;
sfr volatile typeC1FIFOINT8BITS C1FIFOUA8SETbits absolute 0xBF88B578;
sfr volatile typeC1FIFOINT8BITS C1FIFOUA8INVbits absolute 0xBF88B57C;

typedef struct tagC1FIFOCI8BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI8BITS;
sfr atomic volatile typeC1FIFOCI8BITS C1FIFOCI8bits absolute 0xBF88B580;
sfr volatile typeC1FIFOCI8BITS C1FIFOCI8CLRbits absolute 0xBF88B584;
sfr volatile typeC1FIFOCI8BITS C1FIFOCI8SETbits absolute 0xBF88B588;
sfr volatile typeC1FIFOCI8BITS C1FIFOCI8INVbits absolute 0xBF88B58C;

typedef struct tagC1FIFOCON9BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON9BITS;
sfr atomic volatile typeC1FIFOCON9BITS C1FIFOCON9bits absolute 0xBF88B590;
sfr volatile typeC1FIFOCON9BITS C1FIFOCON9CLRbits absolute 0xBF88B594;
sfr volatile typeC1FIFOCON9BITS C1FIFOCON9SETbits absolute 0xBF88B598;
sfr volatile typeC1FIFOCON9BITS C1FIFOCON9INVbits absolute 0xBF88B59C;

typedef struct tagC1FIFOINT9BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT9BITS;
sfr atomic volatile typeC1FIFOINT9BITS C1FIFOINT9bits absolute 0xBF88B5A0;
sfr volatile typeC1FIFOINT9BITS C1FIFOINT9CLRbits absolute 0xBF88B5A4;
sfr volatile typeC1FIFOINT9BITS C1FIFOINT9SETbits absolute 0xBF88B5A8;
sfr volatile typeC1FIFOINT9BITS C1FIFOINT9INVbits absolute 0xBF88B5AC;
sfr atomic volatile typeC1FIFOINT9BITS C1FIFOUA9bits absolute 0xBF88B5B0;
sfr volatile typeC1FIFOINT9BITS C1FIFOUA9CLRbits absolute 0xBF88B5B4;
sfr volatile typeC1FIFOINT9BITS C1FIFOUA9SETbits absolute 0xBF88B5B8;
sfr volatile typeC1FIFOINT9BITS C1FIFOUA9INVbits absolute 0xBF88B5BC;

typedef struct tagC1FIFOCI9BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI9BITS;
sfr atomic volatile typeC1FIFOCI9BITS C1FIFOCI9bits absolute 0xBF88B5C0;
sfr volatile typeC1FIFOCI9BITS C1FIFOCI9CLRbits absolute 0xBF88B5C4;
sfr volatile typeC1FIFOCI9BITS C1FIFOCI9SETbits absolute 0xBF88B5C8;
sfr volatile typeC1FIFOCI9BITS C1FIFOCI9INVbits absolute 0xBF88B5CC;

typedef struct tagC1FIFOCON10BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON10BITS;
sfr atomic volatile typeC1FIFOCON10BITS C1FIFOCON10bits absolute 0xBF88B5D0;
sfr volatile typeC1FIFOCON10BITS C1FIFOCON10CLRbits absolute 0xBF88B5D4;
sfr volatile typeC1FIFOCON10BITS C1FIFOCON10SETbits absolute 0xBF88B5D8;
sfr volatile typeC1FIFOCON10BITS C1FIFOCON10INVbits absolute 0xBF88B5DC;

typedef struct tagC1FIFOINT10BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT10BITS;
sfr atomic volatile typeC1FIFOINT10BITS C1FIFOINT10bits absolute 0xBF88B5E0;
sfr volatile typeC1FIFOINT10BITS C1FIFOINT10CLRbits absolute 0xBF88B5E4;
sfr volatile typeC1FIFOINT10BITS C1FIFOINT10SETbits absolute 0xBF88B5E8;
sfr volatile typeC1FIFOINT10BITS C1FIFOINT10INVbits absolute 0xBF88B5EC;
sfr atomic volatile typeC1FIFOINT10BITS C1FIFOUA10bits absolute 0xBF88B5F0;
sfr volatile typeC1FIFOINT10BITS C1FIFOUA10CLRbits absolute 0xBF88B5F4;
sfr volatile typeC1FIFOINT10BITS C1FIFOUA10SETbits absolute 0xBF88B5F8;
sfr volatile typeC1FIFOINT10BITS C1FIFOUA10INVbits absolute 0xBF88B5FC;

typedef struct tagC1FIFOCI10BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI10BITS;
sfr atomic volatile typeC1FIFOCI10BITS C1FIFOCI10bits absolute 0xBF88B600;
sfr volatile typeC1FIFOCI10BITS C1FIFOCI10CLRbits absolute 0xBF88B604;
sfr volatile typeC1FIFOCI10BITS C1FIFOCI10SETbits absolute 0xBF88B608;
sfr volatile typeC1FIFOCI10BITS C1FIFOCI10INVbits absolute 0xBF88B60C;

typedef struct tagC1FIFOCON11BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON11BITS;
sfr atomic volatile typeC1FIFOCON11BITS C1FIFOCON11bits absolute 0xBF88B610;
sfr volatile typeC1FIFOCON11BITS C1FIFOCON11CLRbits absolute 0xBF88B614;
sfr volatile typeC1FIFOCON11BITS C1FIFOCON11SETbits absolute 0xBF88B618;
sfr volatile typeC1FIFOCON11BITS C1FIFOCON11INVbits absolute 0xBF88B61C;

typedef struct tagC1FIFOINT11BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT11BITS;
sfr atomic volatile typeC1FIFOINT11BITS C1FIFOINT11bits absolute 0xBF88B620;
sfr volatile typeC1FIFOINT11BITS C1FIFOINT11CLRbits absolute 0xBF88B624;
sfr volatile typeC1FIFOINT11BITS C1FIFOINT11SETbits absolute 0xBF88B628;
sfr volatile typeC1FIFOINT11BITS C1FIFOINT11INVbits absolute 0xBF88B62C;
sfr atomic volatile typeC1FIFOINT11BITS C1FIFOUA11bits absolute 0xBF88B630;
sfr volatile typeC1FIFOINT11BITS C1FIFOUA11CLRbits absolute 0xBF88B634;
sfr volatile typeC1FIFOINT11BITS C1FIFOUA11SETbits absolute 0xBF88B638;
sfr volatile typeC1FIFOINT11BITS C1FIFOUA11INVbits absolute 0xBF88B63C;

typedef struct tagC1FIFOCI11BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI11BITS;
sfr atomic volatile typeC1FIFOCI11BITS C1FIFOCI11bits absolute 0xBF88B640;
sfr volatile typeC1FIFOCI11BITS C1FIFOCI11CLRbits absolute 0xBF88B644;
sfr volatile typeC1FIFOCI11BITS C1FIFOCI11SETbits absolute 0xBF88B648;
sfr volatile typeC1FIFOCI11BITS C1FIFOCI11INVbits absolute 0xBF88B64C;

typedef struct tagC1FIFOCON12BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON12BITS;
sfr atomic volatile typeC1FIFOCON12BITS C1FIFOCON12bits absolute 0xBF88B650;
sfr volatile typeC1FIFOCON12BITS C1FIFOCON12CLRbits absolute 0xBF88B654;
sfr volatile typeC1FIFOCON12BITS C1FIFOCON12SETbits absolute 0xBF88B658;
sfr volatile typeC1FIFOCON12BITS C1FIFOCON12INVbits absolute 0xBF88B65C;

typedef struct tagC1FIFOINT12BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT12BITS;
sfr atomic volatile typeC1FIFOINT12BITS C1FIFOINT12bits absolute 0xBF88B660;
sfr volatile typeC1FIFOINT12BITS C1FIFOINT12CLRbits absolute 0xBF88B664;
sfr volatile typeC1FIFOINT12BITS C1FIFOINT12SETbits absolute 0xBF88B668;
sfr volatile typeC1FIFOINT12BITS C1FIFOINT12INVbits absolute 0xBF88B66C;
sfr atomic volatile typeC1FIFOINT12BITS C1FIFOUA12bits absolute 0xBF88B670;
sfr volatile typeC1FIFOINT12BITS C1FIFOUA12CLRbits absolute 0xBF88B674;
sfr volatile typeC1FIFOINT12BITS C1FIFOUA12SETbits absolute 0xBF88B678;
sfr volatile typeC1FIFOINT12BITS C1FIFOUA12INVbits absolute 0xBF88B67C;

typedef struct tagC1FIFOCI12BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI12BITS;
sfr atomic volatile typeC1FIFOCI12BITS C1FIFOCI12bits absolute 0xBF88B680;
sfr volatile typeC1FIFOCI12BITS C1FIFOCI12CLRbits absolute 0xBF88B684;
sfr volatile typeC1FIFOCI12BITS C1FIFOCI12SETbits absolute 0xBF88B688;
sfr volatile typeC1FIFOCI12BITS C1FIFOCI12INVbits absolute 0xBF88B68C;

typedef struct tagC1FIFOCON13BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON13BITS;
sfr atomic volatile typeC1FIFOCON13BITS C1FIFOCON13bits absolute 0xBF88B690;
sfr volatile typeC1FIFOCON13BITS C1FIFOCON13CLRbits absolute 0xBF88B694;
sfr volatile typeC1FIFOCON13BITS C1FIFOCON13SETbits absolute 0xBF88B698;
sfr volatile typeC1FIFOCON13BITS C1FIFOCON13INVbits absolute 0xBF88B69C;

typedef struct tagC1FIFOINT13BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT13BITS;
sfr atomic volatile typeC1FIFOINT13BITS C1FIFOINT13bits absolute 0xBF88B6A0;
sfr volatile typeC1FIFOINT13BITS C1FIFOINT13CLRbits absolute 0xBF88B6A4;
sfr volatile typeC1FIFOINT13BITS C1FIFOINT13SETbits absolute 0xBF88B6A8;
sfr volatile typeC1FIFOINT13BITS C1FIFOINT13INVbits absolute 0xBF88B6AC;
sfr atomic volatile typeC1FIFOINT13BITS C1FIFOUA13bits absolute 0xBF88B6B0;
sfr volatile typeC1FIFOINT13BITS C1FIFOUA13CLRbits absolute 0xBF88B6B4;
sfr volatile typeC1FIFOINT13BITS C1FIFOUA13SETbits absolute 0xBF88B6B8;
sfr volatile typeC1FIFOINT13BITS C1FIFOUA13INVbits absolute 0xBF88B6BC;

typedef struct tagC1FIFOCI13BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI13BITS;
sfr atomic volatile typeC1FIFOCI13BITS C1FIFOCI13bits absolute 0xBF88B6C0;
sfr volatile typeC1FIFOCI13BITS C1FIFOCI13CLRbits absolute 0xBF88B6C4;
sfr volatile typeC1FIFOCI13BITS C1FIFOCI13SETbits absolute 0xBF88B6C8;
sfr volatile typeC1FIFOCI13BITS C1FIFOCI13INVbits absolute 0xBF88B6CC;

typedef struct tagC1FIFOCON14BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON14BITS;
sfr atomic volatile typeC1FIFOCON14BITS C1FIFOCON14bits absolute 0xBF88B6D0;
sfr volatile typeC1FIFOCON14BITS C1FIFOCON14CLRbits absolute 0xBF88B6D4;
sfr volatile typeC1FIFOCON14BITS C1FIFOCON14SETbits absolute 0xBF88B6D8;
sfr volatile typeC1FIFOCON14BITS C1FIFOCON14INVbits absolute 0xBF88B6DC;

typedef struct tagC1FIFOINT14BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT14BITS;
sfr atomic volatile typeC1FIFOINT14BITS C1FIFOINT14bits absolute 0xBF88B6E0;
sfr volatile typeC1FIFOINT14BITS C1FIFOINT14CLRbits absolute 0xBF88B6E4;
sfr volatile typeC1FIFOINT14BITS C1FIFOINT14SETbits absolute 0xBF88B6E8;
sfr volatile typeC1FIFOINT14BITS C1FIFOINT14INVbits absolute 0xBF88B6EC;
sfr atomic volatile typeC1FIFOINT14BITS C1FIFOUA14bits absolute 0xBF88B6F0;
sfr volatile typeC1FIFOINT14BITS C1FIFOUA14CLRbits absolute 0xBF88B6F4;
sfr volatile typeC1FIFOINT14BITS C1FIFOUA14SETbits absolute 0xBF88B6F8;
sfr volatile typeC1FIFOINT14BITS C1FIFOUA14INVbits absolute 0xBF88B6FC;

typedef struct tagC1FIFOCI14BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI14BITS;
sfr atomic volatile typeC1FIFOCI14BITS C1FIFOCI14bits absolute 0xBF88B700;
sfr volatile typeC1FIFOCI14BITS C1FIFOCI14CLRbits absolute 0xBF88B704;
sfr volatile typeC1FIFOCI14BITS C1FIFOCI14SETbits absolute 0xBF88B708;
sfr volatile typeC1FIFOCI14BITS C1FIFOCI14INVbits absolute 0xBF88B70C;

typedef struct tagC1FIFOCON15BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON15BITS;
sfr atomic volatile typeC1FIFOCON15BITS C1FIFOCON15bits absolute 0xBF88B710;
sfr volatile typeC1FIFOCON15BITS C1FIFOCON15CLRbits absolute 0xBF88B714;
sfr volatile typeC1FIFOCON15BITS C1FIFOCON15SETbits absolute 0xBF88B718;
sfr volatile typeC1FIFOCON15BITS C1FIFOCON15INVbits absolute 0xBF88B71C;

typedef struct tagC1FIFOINT15BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT15BITS;
sfr atomic volatile typeC1FIFOINT15BITS C1FIFOINT15bits absolute 0xBF88B720;
sfr volatile typeC1FIFOINT15BITS C1FIFOINT15CLRbits absolute 0xBF88B724;
sfr volatile typeC1FIFOINT15BITS C1FIFOINT15SETbits absolute 0xBF88B728;
sfr volatile typeC1FIFOINT15BITS C1FIFOINT15INVbits absolute 0xBF88B72C;
sfr atomic volatile typeC1FIFOINT15BITS C1FIFOUA15bits absolute 0xBF88B730;
sfr volatile typeC1FIFOINT15BITS C1FIFOUA15CLRbits absolute 0xBF88B734;
sfr volatile typeC1FIFOINT15BITS C1FIFOUA15SETbits absolute 0xBF88B738;
sfr volatile typeC1FIFOINT15BITS C1FIFOUA15INVbits absolute 0xBF88B73C;

typedef struct tagC1FIFOCI15BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI15BITS;
sfr atomic volatile typeC1FIFOCI15BITS C1FIFOCI15bits absolute 0xBF88B740;
sfr volatile typeC1FIFOCI15BITS C1FIFOCI15CLRbits absolute 0xBF88B744;
sfr volatile typeC1FIFOCI15BITS C1FIFOCI15SETbits absolute 0xBF88B748;
sfr volatile typeC1FIFOCI15BITS C1FIFOCI15INVbits absolute 0xBF88B74C;

typedef struct tagC1FIFOCON16BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON16BITS;
sfr atomic volatile typeC1FIFOCON16BITS C1FIFOCON16bits absolute 0xBF88B750;
sfr volatile typeC1FIFOCON16BITS C1FIFOCON16CLRbits absolute 0xBF88B754;
sfr volatile typeC1FIFOCON16BITS C1FIFOCON16SETbits absolute 0xBF88B758;
sfr volatile typeC1FIFOCON16BITS C1FIFOCON16INVbits absolute 0xBF88B75C;

typedef struct tagC1FIFOINT16BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT16BITS;
sfr atomic volatile typeC1FIFOINT16BITS C1FIFOINT16bits absolute 0xBF88B760;
sfr volatile typeC1FIFOINT16BITS C1FIFOINT16CLRbits absolute 0xBF88B764;
sfr volatile typeC1FIFOINT16BITS C1FIFOINT16SETbits absolute 0xBF88B768;
sfr volatile typeC1FIFOINT16BITS C1FIFOINT16INVbits absolute 0xBF88B76C;
sfr atomic volatile typeC1FIFOINT16BITS C1FIFOUA16bits absolute 0xBF88B770;
sfr volatile typeC1FIFOINT16BITS C1FIFOUA16CLRbits absolute 0xBF88B774;
sfr volatile typeC1FIFOINT16BITS C1FIFOUA16SETbits absolute 0xBF88B778;
sfr volatile typeC1FIFOINT16BITS C1FIFOUA16INVbits absolute 0xBF88B77C;

typedef struct tagC1FIFOCI16BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI16BITS;
sfr atomic volatile typeC1FIFOCI16BITS C1FIFOCI16bits absolute 0xBF88B780;
sfr volatile typeC1FIFOCI16BITS C1FIFOCI16CLRbits absolute 0xBF88B784;
sfr volatile typeC1FIFOCI16BITS C1FIFOCI16SETbits absolute 0xBF88B788;
sfr volatile typeC1FIFOCI16BITS C1FIFOCI16INVbits absolute 0xBF88B78C;

typedef struct tagC1FIFOCON17BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON17BITS;
sfr atomic volatile typeC1FIFOCON17BITS C1FIFOCON17bits absolute 0xBF88B790;
sfr volatile typeC1FIFOCON17BITS C1FIFOCON17CLRbits absolute 0xBF88B794;
sfr volatile typeC1FIFOCON17BITS C1FIFOCON17SETbits absolute 0xBF88B798;
sfr volatile typeC1FIFOCON17BITS C1FIFOCON17INVbits absolute 0xBF88B79C;

typedef struct tagC1FIFOINT17BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT17BITS;
sfr atomic volatile typeC1FIFOINT17BITS C1FIFOINT17bits absolute 0xBF88B7A0;
sfr volatile typeC1FIFOINT17BITS C1FIFOINT17CLRbits absolute 0xBF88B7A4;
sfr volatile typeC1FIFOINT17BITS C1FIFOINT17SETbits absolute 0xBF88B7A8;
sfr volatile typeC1FIFOINT17BITS C1FIFOINT17INVbits absolute 0xBF88B7AC;
sfr atomic volatile typeC1FIFOINT17BITS C1FIFOUA17bits absolute 0xBF88B7B0;
sfr volatile typeC1FIFOINT17BITS C1FIFOUA17CLRbits absolute 0xBF88B7B4;
sfr volatile typeC1FIFOINT17BITS C1FIFOUA17SETbits absolute 0xBF88B7B8;
sfr volatile typeC1FIFOINT17BITS C1FIFOUA17INVbits absolute 0xBF88B7BC;

typedef struct tagC1FIFOCI17BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI17BITS;
sfr atomic volatile typeC1FIFOCI17BITS C1FIFOCI17bits absolute 0xBF88B7C0;
sfr volatile typeC1FIFOCI17BITS C1FIFOCI17CLRbits absolute 0xBF88B7C4;
sfr volatile typeC1FIFOCI17BITS C1FIFOCI17SETbits absolute 0xBF88B7C8;
sfr volatile typeC1FIFOCI17BITS C1FIFOCI17INVbits absolute 0xBF88B7CC;

typedef struct tagC1FIFOCON18BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON18BITS;
sfr atomic volatile typeC1FIFOCON18BITS C1FIFOCON18bits absolute 0xBF88B7D0;
sfr volatile typeC1FIFOCON18BITS C1FIFOCON18CLRbits absolute 0xBF88B7D4;
sfr volatile typeC1FIFOCON18BITS C1FIFOCON18SETbits absolute 0xBF88B7D8;
sfr volatile typeC1FIFOCON18BITS C1FIFOCON18INVbits absolute 0xBF88B7DC;

typedef struct tagC1FIFOINT18BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT18BITS;
sfr atomic volatile typeC1FIFOINT18BITS C1FIFOINT18bits absolute 0xBF88B7E0;
sfr volatile typeC1FIFOINT18BITS C1FIFOINT18CLRbits absolute 0xBF88B7E4;
sfr volatile typeC1FIFOINT18BITS C1FIFOINT18SETbits absolute 0xBF88B7E8;
sfr volatile typeC1FIFOINT18BITS C1FIFOINT18INVbits absolute 0xBF88B7EC;
sfr atomic volatile typeC1FIFOINT18BITS C1FIFOUA18bits absolute 0xBF88B7F0;
sfr volatile typeC1FIFOINT18BITS C1FIFOUA18CLRbits absolute 0xBF88B7F4;
sfr volatile typeC1FIFOINT18BITS C1FIFOUA18SETbits absolute 0xBF88B7F8;
sfr volatile typeC1FIFOINT18BITS C1FIFOUA18INVbits absolute 0xBF88B7FC;

typedef struct tagC1FIFOCI18BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI18BITS;
sfr atomic volatile typeC1FIFOCI18BITS C1FIFOCI18bits absolute 0xBF88B800;
sfr volatile typeC1FIFOCI18BITS C1FIFOCI18CLRbits absolute 0xBF88B804;
sfr volatile typeC1FIFOCI18BITS C1FIFOCI18SETbits absolute 0xBF88B808;
sfr volatile typeC1FIFOCI18BITS C1FIFOCI18INVbits absolute 0xBF88B80C;

typedef struct tagC1FIFOCON19BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON19BITS;
sfr atomic volatile typeC1FIFOCON19BITS C1FIFOCON19bits absolute 0xBF88B810;
sfr volatile typeC1FIFOCON19BITS C1FIFOCON19CLRbits absolute 0xBF88B814;
sfr volatile typeC1FIFOCON19BITS C1FIFOCON19SETbits absolute 0xBF88B818;
sfr volatile typeC1FIFOCON19BITS C1FIFOCON19INVbits absolute 0xBF88B81C;

typedef struct tagC1FIFOINT19BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT19BITS;
sfr atomic volatile typeC1FIFOINT19BITS C1FIFOINT19bits absolute 0xBF88B820;
sfr volatile typeC1FIFOINT19BITS C1FIFOINT19CLRbits absolute 0xBF88B824;
sfr volatile typeC1FIFOINT19BITS C1FIFOINT19SETbits absolute 0xBF88B828;
sfr volatile typeC1FIFOINT19BITS C1FIFOINT19INVbits absolute 0xBF88B82C;
sfr atomic volatile typeC1FIFOINT19BITS C1FIFOUA19bits absolute 0xBF88B830;
sfr volatile typeC1FIFOINT19BITS C1FIFOUA19CLRbits absolute 0xBF88B834;
sfr volatile typeC1FIFOINT19BITS C1FIFOUA19SETbits absolute 0xBF88B838;
sfr volatile typeC1FIFOINT19BITS C1FIFOUA19INVbits absolute 0xBF88B83C;

typedef struct tagC1FIFOCI19BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI19BITS;
sfr atomic volatile typeC1FIFOCI19BITS C1FIFOCI19bits absolute 0xBF88B840;
sfr volatile typeC1FIFOCI19BITS C1FIFOCI19CLRbits absolute 0xBF88B844;
sfr volatile typeC1FIFOCI19BITS C1FIFOCI19SETbits absolute 0xBF88B848;
sfr volatile typeC1FIFOCI19BITS C1FIFOCI19INVbits absolute 0xBF88B84C;

typedef struct tagC1FIFOCON20BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON20BITS;
sfr atomic volatile typeC1FIFOCON20BITS C1FIFOCON20bits absolute 0xBF88B850;
sfr volatile typeC1FIFOCON20BITS C1FIFOCON20CLRbits absolute 0xBF88B854;
sfr volatile typeC1FIFOCON20BITS C1FIFOCON20SETbits absolute 0xBF88B858;
sfr volatile typeC1FIFOCON20BITS C1FIFOCON20INVbits absolute 0xBF88B85C;

typedef struct tagC1FIFOINT20BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT20BITS;
sfr atomic volatile typeC1FIFOINT20BITS C1FIFOINT20bits absolute 0xBF88B860;
sfr volatile typeC1FIFOINT20BITS C1FIFOINT20CLRbits absolute 0xBF88B864;
sfr volatile typeC1FIFOINT20BITS C1FIFOINT20SETbits absolute 0xBF88B868;
sfr volatile typeC1FIFOINT20BITS C1FIFOINT20INVbits absolute 0xBF88B86C;
sfr atomic volatile typeC1FIFOINT20BITS C1FIFOUA20bits absolute 0xBF88B870;
sfr volatile typeC1FIFOINT20BITS C1FIFOUA20CLRbits absolute 0xBF88B874;
sfr volatile typeC1FIFOINT20BITS C1FIFOUA20SETbits absolute 0xBF88B878;
sfr volatile typeC1FIFOINT20BITS C1FIFOUA20INVbits absolute 0xBF88B87C;

typedef struct tagC1FIFOCI20BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI20BITS;
sfr atomic volatile typeC1FIFOCI20BITS C1FIFOCI20bits absolute 0xBF88B880;
sfr volatile typeC1FIFOCI20BITS C1FIFOCI20CLRbits absolute 0xBF88B884;
sfr volatile typeC1FIFOCI20BITS C1FIFOCI20SETbits absolute 0xBF88B888;
sfr volatile typeC1FIFOCI20BITS C1FIFOCI20INVbits absolute 0xBF88B88C;

typedef struct tagC1FIFOCON21BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON21BITS;
sfr atomic volatile typeC1FIFOCON21BITS C1FIFOCON21bits absolute 0xBF88B890;
sfr volatile typeC1FIFOCON21BITS C1FIFOCON21CLRbits absolute 0xBF88B894;
sfr volatile typeC1FIFOCON21BITS C1FIFOCON21SETbits absolute 0xBF88B898;
sfr volatile typeC1FIFOCON21BITS C1FIFOCON21INVbits absolute 0xBF88B89C;

typedef struct tagC1FIFOINT21BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT21BITS;
sfr atomic volatile typeC1FIFOINT21BITS C1FIFOINT21bits absolute 0xBF88B8A0;
sfr volatile typeC1FIFOINT21BITS C1FIFOINT21CLRbits absolute 0xBF88B8A4;
sfr volatile typeC1FIFOINT21BITS C1FIFOINT21SETbits absolute 0xBF88B8A8;
sfr volatile typeC1FIFOINT21BITS C1FIFOINT21INVbits absolute 0xBF88B8AC;
sfr atomic volatile typeC1FIFOINT21BITS C1FIFOUA21bits absolute 0xBF88B8B0;
sfr volatile typeC1FIFOINT21BITS C1FIFOUA21CLRbits absolute 0xBF88B8B4;
sfr volatile typeC1FIFOINT21BITS C1FIFOUA21SETbits absolute 0xBF88B8B8;
sfr volatile typeC1FIFOINT21BITS C1FIFOUA21INVbits absolute 0xBF88B8BC;

typedef struct tagC1FIFOCI21BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI21BITS;
sfr atomic volatile typeC1FIFOCI21BITS C1FIFOCI21bits absolute 0xBF88B8C0;
sfr volatile typeC1FIFOCI21BITS C1FIFOCI21CLRbits absolute 0xBF88B8C4;
sfr volatile typeC1FIFOCI21BITS C1FIFOCI21SETbits absolute 0xBF88B8C8;
sfr volatile typeC1FIFOCI21BITS C1FIFOCI21INVbits absolute 0xBF88B8CC;

typedef struct tagC1FIFOCON22BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON22BITS;
sfr atomic volatile typeC1FIFOCON22BITS C1FIFOCON22bits absolute 0xBF88B8D0;
sfr volatile typeC1FIFOCON22BITS C1FIFOCON22CLRbits absolute 0xBF88B8D4;
sfr volatile typeC1FIFOCON22BITS C1FIFOCON22SETbits absolute 0xBF88B8D8;
sfr volatile typeC1FIFOCON22BITS C1FIFOCON22INVbits absolute 0xBF88B8DC;

typedef struct tagC1FIFOINT22BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT22BITS;
sfr atomic volatile typeC1FIFOINT22BITS C1FIFOINT22bits absolute 0xBF88B8E0;
sfr volatile typeC1FIFOINT22BITS C1FIFOINT22CLRbits absolute 0xBF88B8E4;
sfr volatile typeC1FIFOINT22BITS C1FIFOINT22SETbits absolute 0xBF88B8E8;
sfr volatile typeC1FIFOINT22BITS C1FIFOINT22INVbits absolute 0xBF88B8EC;
sfr atomic volatile typeC1FIFOINT22BITS C1FIFOUA22bits absolute 0xBF88B8F0;
sfr volatile typeC1FIFOINT22BITS C1FIFOUA22CLRbits absolute 0xBF88B8F4;
sfr volatile typeC1FIFOINT22BITS C1FIFOUA22SETbits absolute 0xBF88B8F8;
sfr volatile typeC1FIFOINT22BITS C1FIFOUA22INVbits absolute 0xBF88B8FC;

typedef struct tagC1FIFOCI22BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI22BITS;
sfr atomic volatile typeC1FIFOCI22BITS C1FIFOCI22bits absolute 0xBF88B900;
sfr volatile typeC1FIFOCI22BITS C1FIFOCI22CLRbits absolute 0xBF88B904;
sfr volatile typeC1FIFOCI22BITS C1FIFOCI22SETbits absolute 0xBF88B908;
sfr volatile typeC1FIFOCI22BITS C1FIFOCI22INVbits absolute 0xBF88B90C;

typedef struct tagC1FIFOCON23BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON23BITS;
sfr atomic volatile typeC1FIFOCON23BITS C1FIFOCON23bits absolute 0xBF88B910;
sfr volatile typeC1FIFOCON23BITS C1FIFOCON23CLRbits absolute 0xBF88B914;
sfr volatile typeC1FIFOCON23BITS C1FIFOCON23SETbits absolute 0xBF88B918;
sfr volatile typeC1FIFOCON23BITS C1FIFOCON23INVbits absolute 0xBF88B91C;

typedef struct tagC1FIFOINT23BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT23BITS;
sfr atomic volatile typeC1FIFOINT23BITS C1FIFOINT23bits absolute 0xBF88B920;
sfr volatile typeC1FIFOINT23BITS C1FIFOINT23CLRbits absolute 0xBF88B924;
sfr volatile typeC1FIFOINT23BITS C1FIFOINT23SETbits absolute 0xBF88B928;
sfr volatile typeC1FIFOINT23BITS C1FIFOINT23INVbits absolute 0xBF88B92C;
sfr atomic volatile typeC1FIFOINT23BITS C1FIFOUA23bits absolute 0xBF88B930;
sfr volatile typeC1FIFOINT23BITS C1FIFOUA23CLRbits absolute 0xBF88B934;
sfr volatile typeC1FIFOINT23BITS C1FIFOUA23SETbits absolute 0xBF88B938;
sfr volatile typeC1FIFOINT23BITS C1FIFOUA23INVbits absolute 0xBF88B93C;

typedef struct tagC1FIFOCI23BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI23BITS;
sfr atomic volatile typeC1FIFOCI23BITS C1FIFOCI23bits absolute 0xBF88B940;
sfr volatile typeC1FIFOCI23BITS C1FIFOCI23CLRbits absolute 0xBF88B944;
sfr volatile typeC1FIFOCI23BITS C1FIFOCI23SETbits absolute 0xBF88B948;
sfr volatile typeC1FIFOCI23BITS C1FIFOCI23INVbits absolute 0xBF88B94C;

typedef struct tagC1FIFOCON24BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON24BITS;
sfr atomic volatile typeC1FIFOCON24BITS C1FIFOCON24bits absolute 0xBF88B950;
sfr volatile typeC1FIFOCON24BITS C1FIFOCON24CLRbits absolute 0xBF88B954;
sfr volatile typeC1FIFOCON24BITS C1FIFOCON24SETbits absolute 0xBF88B958;
sfr volatile typeC1FIFOCON24BITS C1FIFOCON24INVbits absolute 0xBF88B95C;

typedef struct tagC1FIFOINT24BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT24BITS;
sfr atomic volatile typeC1FIFOINT24BITS C1FIFOINT24bits absolute 0xBF88B960;
sfr volatile typeC1FIFOINT24BITS C1FIFOINT24CLRbits absolute 0xBF88B964;
sfr volatile typeC1FIFOINT24BITS C1FIFOINT24SETbits absolute 0xBF88B968;
sfr volatile typeC1FIFOINT24BITS C1FIFOINT24INVbits absolute 0xBF88B96C;
sfr atomic volatile typeC1FIFOINT24BITS C1FIFOUA24bits absolute 0xBF88B970;
sfr volatile typeC1FIFOINT24BITS C1FIFOUA24CLRbits absolute 0xBF88B974;
sfr volatile typeC1FIFOINT24BITS C1FIFOUA24SETbits absolute 0xBF88B978;
sfr volatile typeC1FIFOINT24BITS C1FIFOUA24INVbits absolute 0xBF88B97C;

typedef struct tagC1FIFOCI24BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI24BITS;
sfr atomic volatile typeC1FIFOCI24BITS C1FIFOCI24bits absolute 0xBF88B980;
sfr volatile typeC1FIFOCI24BITS C1FIFOCI24CLRbits absolute 0xBF88B984;
sfr volatile typeC1FIFOCI24BITS C1FIFOCI24SETbits absolute 0xBF88B988;
sfr volatile typeC1FIFOCI24BITS C1FIFOCI24INVbits absolute 0xBF88B98C;

typedef struct tagC1FIFOCON25BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON25BITS;
sfr atomic volatile typeC1FIFOCON25BITS C1FIFOCON25bits absolute 0xBF88B990;
sfr volatile typeC1FIFOCON25BITS C1FIFOCON25CLRbits absolute 0xBF88B994;
sfr volatile typeC1FIFOCON25BITS C1FIFOCON25SETbits absolute 0xBF88B998;
sfr volatile typeC1FIFOCON25BITS C1FIFOCON25INVbits absolute 0xBF88B99C;

typedef struct tagC1FIFOINT25BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT25BITS;
sfr atomic volatile typeC1FIFOINT25BITS C1FIFOINT25bits absolute 0xBF88B9A0;
sfr volatile typeC1FIFOINT25BITS C1FIFOINT25CLRbits absolute 0xBF88B9A4;
sfr volatile typeC1FIFOINT25BITS C1FIFOINT25SETbits absolute 0xBF88B9A8;
sfr volatile typeC1FIFOINT25BITS C1FIFOINT25INVbits absolute 0xBF88B9AC;
sfr atomic volatile typeC1FIFOINT25BITS C1FIFOUA25bits absolute 0xBF88B9B0;
sfr volatile typeC1FIFOINT25BITS C1FIFOUA25CLRbits absolute 0xBF88B9B4;
sfr volatile typeC1FIFOINT25BITS C1FIFOUA25SETbits absolute 0xBF88B9B8;
sfr volatile typeC1FIFOINT25BITS C1FIFOUA25INVbits absolute 0xBF88B9BC;

typedef struct tagC1FIFOCI25BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI25BITS;
sfr atomic volatile typeC1FIFOCI25BITS C1FIFOCI25bits absolute 0xBF88B9C0;
sfr volatile typeC1FIFOCI25BITS C1FIFOCI25CLRbits absolute 0xBF88B9C4;
sfr volatile typeC1FIFOCI25BITS C1FIFOCI25SETbits absolute 0xBF88B9C8;
sfr volatile typeC1FIFOCI25BITS C1FIFOCI25INVbits absolute 0xBF88B9CC;

typedef struct tagC1FIFOCON26BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON26BITS;
sfr atomic volatile typeC1FIFOCON26BITS C1FIFOCON26bits absolute 0xBF88B9D0;
sfr volatile typeC1FIFOCON26BITS C1FIFOCON26CLRbits absolute 0xBF88B9D4;
sfr volatile typeC1FIFOCON26BITS C1FIFOCON26SETbits absolute 0xBF88B9D8;
sfr volatile typeC1FIFOCON26BITS C1FIFOCON26INVbits absolute 0xBF88B9DC;

typedef struct tagC1FIFOINT26BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT26BITS;
sfr atomic volatile typeC1FIFOINT26BITS C1FIFOINT26bits absolute 0xBF88B9E0;
sfr volatile typeC1FIFOINT26BITS C1FIFOINT26CLRbits absolute 0xBF88B9E4;
sfr volatile typeC1FIFOINT26BITS C1FIFOINT26SETbits absolute 0xBF88B9E8;
sfr volatile typeC1FIFOINT26BITS C1FIFOINT26INVbits absolute 0xBF88B9EC;
sfr atomic volatile typeC1FIFOINT26BITS C1FIFOUA26bits absolute 0xBF88B9F0;
sfr volatile typeC1FIFOINT26BITS C1FIFOUA26CLRbits absolute 0xBF88B9F4;
sfr volatile typeC1FIFOINT26BITS C1FIFOUA26SETbits absolute 0xBF88B9F8;
sfr volatile typeC1FIFOINT26BITS C1FIFOUA26INVbits absolute 0xBF88B9FC;

typedef struct tagC1FIFOCI26BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI26BITS;
sfr atomic volatile typeC1FIFOCI26BITS C1FIFOCI26bits absolute 0xBF88BA00;
sfr volatile typeC1FIFOCI26BITS C1FIFOCI26CLRbits absolute 0xBF88BA04;
sfr volatile typeC1FIFOCI26BITS C1FIFOCI26SETbits absolute 0xBF88BA08;
sfr volatile typeC1FIFOCI26BITS C1FIFOCI26INVbits absolute 0xBF88BA0C;

typedef struct tagC1FIFOCON27BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON27BITS;
sfr atomic volatile typeC1FIFOCON27BITS C1FIFOCON27bits absolute 0xBF88BA10;
sfr volatile typeC1FIFOCON27BITS C1FIFOCON27CLRbits absolute 0xBF88BA14;
sfr volatile typeC1FIFOCON27BITS C1FIFOCON27SETbits absolute 0xBF88BA18;
sfr volatile typeC1FIFOCON27BITS C1FIFOCON27INVbits absolute 0xBF88BA1C;

typedef struct tagC1FIFOINT27BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT27BITS;
sfr atomic volatile typeC1FIFOINT27BITS C1FIFOINT27bits absolute 0xBF88BA20;
sfr volatile typeC1FIFOINT27BITS C1FIFOINT27CLRbits absolute 0xBF88BA24;
sfr volatile typeC1FIFOINT27BITS C1FIFOINT27SETbits absolute 0xBF88BA28;
sfr volatile typeC1FIFOINT27BITS C1FIFOINT27INVbits absolute 0xBF88BA2C;
sfr atomic volatile typeC1FIFOINT27BITS C1FIFOUA27bits absolute 0xBF88BA30;
sfr volatile typeC1FIFOINT27BITS C1FIFOUA27CLRbits absolute 0xBF88BA34;
sfr volatile typeC1FIFOINT27BITS C1FIFOUA27SETbits absolute 0xBF88BA38;
sfr volatile typeC1FIFOINT27BITS C1FIFOUA27INVbits absolute 0xBF88BA3C;

typedef struct tagC1FIFOCI27BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI27BITS;
sfr atomic volatile typeC1FIFOCI27BITS C1FIFOCI27bits absolute 0xBF88BA40;
sfr volatile typeC1FIFOCI27BITS C1FIFOCI27CLRbits absolute 0xBF88BA44;
sfr volatile typeC1FIFOCI27BITS C1FIFOCI27SETbits absolute 0xBF88BA48;
sfr volatile typeC1FIFOCI27BITS C1FIFOCI27INVbits absolute 0xBF88BA4C;

typedef struct tagC1FIFOCON28BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON28BITS;
sfr atomic volatile typeC1FIFOCON28BITS C1FIFOCON28bits absolute 0xBF88BA50;
sfr volatile typeC1FIFOCON28BITS C1FIFOCON28CLRbits absolute 0xBF88BA54;
sfr volatile typeC1FIFOCON28BITS C1FIFOCON28SETbits absolute 0xBF88BA58;
sfr volatile typeC1FIFOCON28BITS C1FIFOCON28INVbits absolute 0xBF88BA5C;

typedef struct tagC1FIFOINT28BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT28BITS;
sfr atomic volatile typeC1FIFOINT28BITS C1FIFOINT28bits absolute 0xBF88BA60;
sfr volatile typeC1FIFOINT28BITS C1FIFOINT28CLRbits absolute 0xBF88BA64;
sfr volatile typeC1FIFOINT28BITS C1FIFOINT28SETbits absolute 0xBF88BA68;
sfr volatile typeC1FIFOINT28BITS C1FIFOINT28INVbits absolute 0xBF88BA6C;
sfr atomic volatile typeC1FIFOINT28BITS C1FIFOUA28bits absolute 0xBF88BA70;
sfr volatile typeC1FIFOINT28BITS C1FIFOUA28CLRbits absolute 0xBF88BA74;
sfr volatile typeC1FIFOINT28BITS C1FIFOUA28SETbits absolute 0xBF88BA78;
sfr volatile typeC1FIFOINT28BITS C1FIFOUA28INVbits absolute 0xBF88BA7C;

typedef struct tagC1FIFOCI28BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI28BITS;
sfr atomic volatile typeC1FIFOCI28BITS C1FIFOCI28bits absolute 0xBF88BA80;
sfr volatile typeC1FIFOCI28BITS C1FIFOCI28CLRbits absolute 0xBF88BA84;
sfr volatile typeC1FIFOCI28BITS C1FIFOCI28SETbits absolute 0xBF88BA88;
sfr volatile typeC1FIFOCI28BITS C1FIFOCI28INVbits absolute 0xBF88BA8C;

typedef struct tagC1FIFOCON29BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON29BITS;
sfr atomic volatile typeC1FIFOCON29BITS C1FIFOCON29bits absolute 0xBF88BA90;
sfr volatile typeC1FIFOCON29BITS C1FIFOCON29CLRbits absolute 0xBF88BA94;
sfr volatile typeC1FIFOCON29BITS C1FIFOCON29SETbits absolute 0xBF88BA98;
sfr volatile typeC1FIFOCON29BITS C1FIFOCON29INVbits absolute 0xBF88BA9C;

typedef struct tagC1FIFOINT29BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT29BITS;
sfr atomic volatile typeC1FIFOINT29BITS C1FIFOINT29bits absolute 0xBF88BAA0;
sfr volatile typeC1FIFOINT29BITS C1FIFOINT29CLRbits absolute 0xBF88BAA4;
sfr volatile typeC1FIFOINT29BITS C1FIFOINT29SETbits absolute 0xBF88BAA8;
sfr volatile typeC1FIFOINT29BITS C1FIFOINT29INVbits absolute 0xBF88BAAC;
sfr atomic volatile typeC1FIFOINT29BITS C1FIFOUA29bits absolute 0xBF88BAB0;
sfr volatile typeC1FIFOINT29BITS C1FIFOUA29CLRbits absolute 0xBF88BAB4;
sfr volatile typeC1FIFOINT29BITS C1FIFOUA29SETbits absolute 0xBF88BAB8;
sfr volatile typeC1FIFOINT29BITS C1FIFOUA29INVbits absolute 0xBF88BABC;

typedef struct tagC1FIFOCI29BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI29BITS;
sfr atomic volatile typeC1FIFOCI29BITS C1FIFOCI29bits absolute 0xBF88BAC0;
sfr volatile typeC1FIFOCI29BITS C1FIFOCI29CLRbits absolute 0xBF88BAC4;
sfr volatile typeC1FIFOCI29BITS C1FIFOCI29SETbits absolute 0xBF88BAC8;
sfr volatile typeC1FIFOCI29BITS C1FIFOCI29INVbits absolute 0xBF88BACC;

typedef struct tagC1FIFOCON30BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON30BITS;
sfr atomic volatile typeC1FIFOCON30BITS C1FIFOCON30bits absolute 0xBF88BAD0;
sfr volatile typeC1FIFOCON30BITS C1FIFOCON30CLRbits absolute 0xBF88BAD4;
sfr volatile typeC1FIFOCON30BITS C1FIFOCON30SETbits absolute 0xBF88BAD8;
sfr volatile typeC1FIFOCON30BITS C1FIFOCON30INVbits absolute 0xBF88BADC;

typedef struct tagC1FIFOINT30BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT30BITS;
sfr atomic volatile typeC1FIFOINT30BITS C1FIFOINT30bits absolute 0xBF88BAE0;
sfr volatile typeC1FIFOINT30BITS C1FIFOINT30CLRbits absolute 0xBF88BAE4;
sfr volatile typeC1FIFOINT30BITS C1FIFOINT30SETbits absolute 0xBF88BAE8;
sfr volatile typeC1FIFOINT30BITS C1FIFOINT30INVbits absolute 0xBF88BAEC;
sfr atomic volatile typeC1FIFOINT30BITS C1FIFOUA30bits absolute 0xBF88BAF0;
sfr volatile typeC1FIFOINT30BITS C1FIFOUA30CLRbits absolute 0xBF88BAF4;
sfr volatile typeC1FIFOINT30BITS C1FIFOUA30SETbits absolute 0xBF88BAF8;
sfr volatile typeC1FIFOINT30BITS C1FIFOUA30INVbits absolute 0xBF88BAFC;

typedef struct tagC1FIFOCI30BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI30BITS;
sfr atomic volatile typeC1FIFOCI30BITS C1FIFOCI30bits absolute 0xBF88BB00;
sfr volatile typeC1FIFOCI30BITS C1FIFOCI30CLRbits absolute 0xBF88BB04;
sfr volatile typeC1FIFOCI30BITS C1FIFOCI30SETbits absolute 0xBF88BB08;
sfr volatile typeC1FIFOCI30BITS C1FIFOCI30INVbits absolute 0xBF88BB0C;

typedef struct tagC1FIFOCON31BITS {
union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCON31BITS;
sfr atomic volatile typeC1FIFOCON31BITS C1FIFOCON31bits absolute 0xBF88BB10;
sfr volatile typeC1FIFOCON31BITS C1FIFOCON31CLRbits absolute 0xBF88BB14;
sfr volatile typeC1FIFOCON31BITS C1FIFOCON31SETbits absolute 0xBF88BB18;
sfr volatile typeC1FIFOCON31BITS C1FIFOCON31INVbits absolute 0xBF88BB1C;

typedef struct tagC1FIFOINT31BITS {
union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOINT31BITS;
sfr atomic volatile typeC1FIFOINT31BITS C1FIFOINT31bits absolute 0xBF88BB20;
sfr volatile typeC1FIFOINT31BITS C1FIFOINT31CLRbits absolute 0xBF88BB24;
sfr volatile typeC1FIFOINT31BITS C1FIFOINT31SETbits absolute 0xBF88BB28;
sfr volatile typeC1FIFOINT31BITS C1FIFOINT31INVbits absolute 0xBF88BB2C;
sfr atomic volatile typeC1FIFOINT31BITS C1FIFOUA31bits absolute 0xBF88BB30;
sfr volatile typeC1FIFOINT31BITS C1FIFOUA31CLRbits absolute 0xBF88BB34;
sfr volatile typeC1FIFOINT31BITS C1FIFOUA31SETbits absolute 0xBF88BB38;
sfr volatile typeC1FIFOINT31BITS C1FIFOUA31INVbits absolute 0xBF88BB3C;

typedef struct tagC1FIFOCI31BITS {
union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
};
} typeC1FIFOCI31BITS;
sfr atomic volatile typeC1FIFOCI31BITS C1FIFOCI31bits absolute 0xBF88BB40;
sfr volatile typeC1FIFOCI31BITS C1FIFOCI31CLRbits absolute 0xBF88BB44;
sfr volatile typeC1FIFOCI31BITS C1FIFOCI31SETbits absolute 0xBF88BB48;
sfr volatile typeC1FIFOCI31BITS C1FIFOCI31INVbits absolute 0xBF88BB4C;

typedef struct tagDEVCFG3BITS {
union {
  struct {
    unsigned USERID:16;
    unsigned :12;
    unsigned PMDL1WAY:1;
    unsigned IOL1WAY:1;
    unsigned FUSBIDIO:1;
    unsigned FVBUSONIO:1;
  };
  struct {
    unsigned w:32;
  };
};
} typeDEVCFG3BITS;
sfr volatile typeDEVCFG3BITS DEVCFG3bits absolute 0xBFC00BF0;

typedef struct tagDEVCFG2BITS {
union {
  struct {
    unsigned FPLLIDIV:3;
    unsigned :1;
    unsigned FPLLMUL:3;
    unsigned :1;
    unsigned UPLLIDIV:3;
    unsigned :4;
    unsigned UPLLEN:1;
    unsigned FPLLODIV:3;
  };
  struct {
    unsigned w:32;
  };
};
} typeDEVCFG2BITS;
sfr volatile typeDEVCFG2BITS DEVCFG2bits absolute 0xBFC00BF4;

typedef struct tagDEVCFG1BITS {
union {
  struct {
    unsigned FNOSC:3;
    unsigned :2;
    unsigned FSOSCEN:1;
    unsigned :1;
    unsigned IESO:1;
    unsigned POSCMOD:2;
    unsigned OSCIOFNC:1;
    unsigned :1;
    unsigned FPBDIV:2;
    unsigned FCKSM:2;
    unsigned WDTPS:5;
    unsigned :1;
    unsigned WINDIS:1;
    unsigned FWDTEN:1;
    unsigned FWDTWINSZ:2;
  };
  struct {
    unsigned w:32;
  };
};
} typeDEVCFG1BITS;
sfr volatile typeDEVCFG1BITS DEVCFG1bits absolute 0xBFC00BF8;
