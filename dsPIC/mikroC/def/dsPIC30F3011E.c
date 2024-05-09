// Definition file for P30F3011E

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

const unsigned long __FLASH_SIZE = 0x00006000;
const unsigned long __XRAM_RAM_SIZE = 0x000001FF;
const unsigned long __XRAM_RAM_START = 0x1600;
const unsigned long __YRAM_RAM_SIZE = 0x000001FF;
const unsigned long __YRAM_RAM_START = 0x1800;
const long __CONST_FAR_PREFIX = 0x0;
const char __FOSC_PER_CYC = 4;

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
const unsigned IVT_ADDR_IC2INTERRUPT         = 0x001C;
const unsigned IVT_ADDR_OC2INTERRUPT         = 0x001E;
const unsigned IVT_ADDR_T2INTERRUPT          = 0x0020;
const unsigned IVT_ADDR_T3INTERRUPT          = 0x0022;
const unsigned IVT_ADDR_SPI1INTERRUPT        = 0x0024;
const unsigned IVT_ADDR_U1RXINTERRUPT        = 0x0026;
const unsigned IVT_ADDR_U1TXINTERRUPT        = 0x0028;
const unsigned IVT_ADDR_ADCINTERRUPT         = 0x002A;
const unsigned IVT_ADDR_NVMINTERRUPT         = 0x002C;
const unsigned IVT_ADDR_SI2CINTERRUPT        = 0x002E;
const unsigned IVT_ADDR_MI2CINTERRUPT        = 0x0030;
const unsigned IVT_ADDR_CNINTERRUPT          = 0x0032;
const unsigned IVT_ADDR_INT1INTERRUPT        = 0x0034;
const unsigned IVT_ADDR_IC7INTERRUPT         = 0x0036;
const unsigned IVT_ADDR_IC8INTERRUPT         = 0x0038;
const unsigned IVT_ADDR_OC3INTERRUPT         = 0x003A;
const unsigned IVT_ADDR_OC4INTERRUPT         = 0x003C;
const unsigned IVT_ADDR_T4INTERRUPT          = 0x003E;
const unsigned IVT_ADDR_T5INTERRUPT          = 0x0040;
const unsigned IVT_ADDR_INT2INTERRUPT        = 0x0042;
const unsigned IVT_ADDR_U2RXINTERRUPT        = 0x0044;
const unsigned IVT_ADDR_U2TXINTERRUPT        = 0x0046;
const unsigned IVT_ADDR_SPI2INTERRUPT        = 0x0048;
const unsigned IVT_ADDR_C1INTERRUPT          = 0x004A;
const unsigned IVT_ADDR_IC3INTERRUPT         = 0x004C;
const unsigned IVT_ADDR_IC4INTERRUPT         = 0x004E;
const unsigned IVT_ADDR_IC5INTERRUPT         = 0x0050;
const unsigned IVT_ADDR_IC6INTERRUPT         = 0x0052;
const unsigned IVT_ADDR_OC5INTERRUPT         = 0x0054;
const unsigned IVT_ADDR_OC6INTERRUPT         = 0x0056;
const unsigned IVT_ADDR_OC7INTERRUPT         = 0x0058;
const unsigned IVT_ADDR_OC8INTERRUPT         = 0x005A;
const unsigned IVT_ADDR_INT3INTERRUPT        = 0x005C;
const unsigned IVT_ADDR_INT4INTERRUPT        = 0x005E;
const unsigned IVT_ADDR_C2INTERRUPT          = 0x0060;
const unsigned IVT_ADDR_PWMINTERRUPT         = 0x0062;
const unsigned IVT_ADDR_QEIINTERRUPT         = 0x0064;
const unsigned IVT_ADDR_DCIINTERRUPT         = 0x0066;
const unsigned IVT_ADDR_LVDINTERRUPT         = 0x0068;
const unsigned IVT_ADDR_FLTAINTERRUPT        = 0x006A;
const unsigned IVT_ADDR_FLTBINTERRUPT        = 0x006C;
const unsigned IVT_ADDR_INTERRUPT45          = 0x006E;
const unsigned IVT_ADDR_INTERRUPT46          = 0x0070;
const unsigned IVT_ADDR_INTERRUPT47          = 0x0072;
const unsigned IVT_ADDR_INTERRUPT48          = 0x0074;
const unsigned IVT_ADDR_INTERRUPT49          = 0x0076;
const unsigned IVT_ADDR_INTERRUPT50          = 0x0078;
const unsigned IVT_ADDR_INTERRUPT51          = 0x007A;
const unsigned IVT_ADDR_INTERRUPT52          = 0x007C;
const unsigned IVT_ADDR_INTERRUPT53          = 0x007E;

// Alternate Interrupt Vector Table Constants

const unsigned AIVT_ADDR_ALTRESERVEDTRAP0     = 0x0084;
const unsigned AIVT_ADDR_ALTOSCILLATORFAIL    = 0x0086;
const unsigned AIVT_ADDR_ALTADDRESSERROR      = 0x0088;
const unsigned AIVT_ADDR_ALTSTACKERROR        = 0x008A;
const unsigned AIVT_ADDR_ALTMATHERROR         = 0x008C;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP5     = 0x008E;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP6     = 0x0090;
const unsigned AIVT_ADDR_ALTRESERVEDTRAP7     = 0x0092;
const unsigned AIVT_ADDR_ALTINT0INTERRUPT     = 0x0094;
const unsigned AIVT_ADDR_ALTIC1INTERRUPT      = 0x0096;
const unsigned AIVT_ADDR_ALTOC1INTERRUPT      = 0x0098;
const unsigned AIVT_ADDR_ALTT1INTERRUPT       = 0x009A;
const unsigned AIVT_ADDR_ALTIC2INTERRUPT      = 0x009C;
const unsigned AIVT_ADDR_ALTOC2INTERRUPT      = 0x009E;
const unsigned AIVT_ADDR_ALTT2INTERRUPT       = 0x00A0;
const unsigned AIVT_ADDR_ALTT3INTERRUPT       = 0x00A2;
const unsigned AIVT_ADDR_ALTSPI1INTERRUPT     = 0x00A4;
const unsigned AIVT_ADDR_ALTU1RXINTERRUPT     = 0x00A6;
const unsigned AIVT_ADDR_ALTU1TXINTERRUPT     = 0x00A8;
const unsigned AIVT_ADDR_ALTADCINTERRUPT      = 0x00AA;
const unsigned AIVT_ADDR_ALTNVMINTERRUPT      = 0x00AC;
const unsigned AIVT_ADDR_ALTSI2CINTERRUPT     = 0x00AE;
const unsigned AIVT_ADDR_ALTMI2CINTERRUPT     = 0x00B0;
const unsigned AIVT_ADDR_ALTCNINTERRUPT       = 0x00B2;
const unsigned AIVT_ADDR_ALTINT1INTERRUPT     = 0x00B4;
const unsigned AIVT_ADDR_ALTIC7INTERRUPT      = 0x00B6;
const unsigned AIVT_ADDR_ALTIC8INTERRUPT      = 0x00B8;
const unsigned AIVT_ADDR_ALTOC3INTERRUPT      = 0x00BA;
const unsigned AIVT_ADDR_ALTOC4INTERRUPT      = 0x00BC;
const unsigned AIVT_ADDR_ALTT4INTERRUPT       = 0x00BE;
const unsigned AIVT_ADDR_ALTT5INTERRUPT       = 0x00C0;
const unsigned AIVT_ADDR_ALTINT2INTERRUPT     = 0x00C2;
const unsigned AIVT_ADDR_ALTU2RXINTERRUPT     = 0x00C4;
const unsigned AIVT_ADDR_ALTU2TXINTERRUPT     = 0x00C6;
const unsigned AIVT_ADDR_ALTSPI2INTERRUPT     = 0x00C8;
const unsigned AIVT_ADDR_ALTC1INTERRUPT       = 0x00CA;
const unsigned AIVT_ADDR_ALTIC3INTERRUPT      = 0x00CC;
const unsigned AIVT_ADDR_ALTIC4INTERRUPT      = 0x00CE;
const unsigned AIVT_ADDR_ALTIC5INTERRUPT      = 0x00D0;
const unsigned AIVT_ADDR_ALTIC6INTERRUPT      = 0x00D2;
const unsigned AIVT_ADDR_ALTOC5INTERRUPT      = 0x00D4;
const unsigned AIVT_ADDR_ALTOC6INTERRUPT      = 0x00D6;
const unsigned AIVT_ADDR_ALTOC7INTERRUPT      = 0x00D8;
const unsigned AIVT_ADDR_ALTOC8INTERRUPT      = 0x00DA;
const unsigned AIVT_ADDR_ALTINT3INTERRUPT     = 0x00DC;
const unsigned AIVT_ADDR_ALTINT4INTERRUPT     = 0x00DE;
const unsigned AIVT_ADDR_ALTC2INTERRUPT       = 0x00E0;
const unsigned AIVT_ADDR_ALTPWMINTERRUPT      = 0x00E2;
const unsigned AIVT_ADDR_ALTQEIINTERRUPT      = 0x00E4;
const unsigned AIVT_ADDR_ALTDCIINTERRUPT      = 0x00E6;
const unsigned AIVT_ADDR_ALTLVDINTERRUPT      = 0x00E8;
const unsigned AIVT_ADDR_ALTFLTAINTERRUPT     = 0x00EA;
const unsigned AIVT_ADDR_ALTFLTBINTERRUPT     = 0x00EC;
const unsigned AIVT_ADDR_ALTINTERRUPT45       = 0x00EE;
const unsigned AIVT_ADDR_ALTINTERRUPT46       = 0x00F0;
const unsigned AIVT_ADDR_ALTINTERRUPT47       = 0x00F2;
const unsigned AIVT_ADDR_ALTINTERRUPT48       = 0x00F4;
const unsigned AIVT_ADDR_ALTINTERRUPT49       = 0x00F6;
const unsigned AIVT_ADDR_ALTINTERRUPT50       = 0x00F8;
const unsigned AIVT_ADDR_ALTINTERRUPT51       = 0x00FA;
const unsigned AIVT_ADDR_ALTINTERRUPT52       = 0x00FC;
const unsigned AIVT_ADDR_ALTINTERRUPT53       = 0x00FE;

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
sfr unsigned int volatile INTCON1          absolute 0x0080;
sfr unsigned int volatile INTCON2          absolute 0x0082;
sfr unsigned int volatile IFS0             absolute 0x0084;
sfr unsigned int volatile IFS1             absolute 0x0086;
sfr unsigned int volatile IFS2             absolute 0x0088;
sfr unsigned int          IEC0             absolute 0x008C;
sfr unsigned int          IEC1             absolute 0x008E;
sfr unsigned int          IEC2             absolute 0x0090;
sfr unsigned int          IPC0             absolute 0x0094;
sfr unsigned int          IPC1             absolute 0x0096;
sfr unsigned int          IPC2             absolute 0x0098;
sfr unsigned int          IPC3             absolute 0x009A;
sfr unsigned int          IPC4             absolute 0x009C;
sfr unsigned int          IPC5             absolute 0x009E;
sfr unsigned int          IPC6             absolute 0x00A0;
sfr unsigned int          IPC9             absolute 0x00A6;
sfr unsigned int          IPC10            absolute 0x00A8;
sfr unsigned int volatile INTTREG          absolute 0x00B0;
sfr unsigned int volatile CNEN1            absolute 0x00C0;
sfr unsigned int volatile CNEN2            absolute 0x00C2;
sfr unsigned int volatile CNPU1            absolute 0x00C4;
sfr unsigned int volatile CNPU2            absolute 0x00C6;
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
sfr unsigned int volatile QEICON           absolute 0x0122;
sfr unsigned int volatile DFLTCON          absolute 0x0124;
sfr unsigned int volatile POSCNT           absolute 0x0126;
sfr unsigned int volatile MAXCNT           absolute 0x0128;
sfr unsigned int volatile IC1BUF           absolute 0x0140;
sfr unsigned int volatile IC1CON           absolute 0x0142;
sfr unsigned int volatile IC2BUF           absolute 0x0144;
sfr unsigned int volatile IC2CON           absolute 0x0146;
sfr unsigned int volatile IC7BUF           absolute 0x0158;
sfr unsigned int volatile IC7CON           absolute 0x015A;
sfr unsigned int volatile IC8BUF           absolute 0x015C;
sfr unsigned int volatile IC8CON           absolute 0x015E;
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
sfr unsigned int          PTCON            absolute 0x01C0;
sfr unsigned int volatile PTMR             absolute 0x01C2;
sfr unsigned int volatile PTPER            absolute 0x01C4;
sfr unsigned int volatile SEVTCMP          absolute 0x01C6;
sfr unsigned int volatile PWMCON1          absolute 0x01C8;
sfr unsigned int volatile PWMCON2          absolute 0x01CA;
sfr unsigned int volatile DTCON1           absolute 0x01CC;
sfr unsigned int volatile FLTACON          absolute 0x01D0;
sfr unsigned int volatile OVDCON           absolute 0x01D4;
sfr unsigned int volatile PDC1             absolute 0x01D6;
sfr unsigned int volatile PDC2             absolute 0x01D8;
sfr unsigned int volatile PDC3             absolute 0x01DA;
sfr unsigned int volatile I2CRCV           absolute 0x0200;
sfr unsigned int volatile I2CTRN           absolute 0x0202;
sfr unsigned int volatile I2CBRG           absolute 0x0204;
sfr unsigned int volatile I2CCON           absolute 0x0206;
sfr unsigned int volatile I2CSTAT          absolute 0x0208;
sfr unsigned int volatile I2CADD           absolute 0x020A;
sfr unsigned int volatile U1MODE           absolute 0x020C;
sfr unsigned int volatile U1STA            absolute 0x020E;
sfr unsigned int          U1TXREG          absolute 0x0210;
sfr unsigned int volatile U1RXREG          absolute 0x0212;
sfr unsigned int          U1BRG            absolute 0x0214;
sfr unsigned int volatile U2MODE           absolute 0x0216;
sfr unsigned int volatile U2STA            absolute 0x0218;
sfr unsigned int          U2TXREG          absolute 0x021A;
sfr unsigned int volatile U2RXREG          absolute 0x021C;
sfr unsigned int          U2BRG            absolute 0x021E;
sfr unsigned int volatile SPI1STAT         absolute 0x0220;
sfr unsigned int volatile SPI1CON          absolute 0x0222;
sfr unsigned int volatile SPI1BUF          absolute 0x0224;
sfr unsigned int volatile ADCBUF0          absolute 0x0280;
sfr unsigned int volatile ADCBUF1          absolute 0x0282;
sfr unsigned int volatile ADCBUF2          absolute 0x0284;
sfr unsigned int volatile ADCBUF3          absolute 0x0286;
sfr unsigned int volatile ADCBUF4          absolute 0x0288;
sfr unsigned int volatile ADCBUF5          absolute 0x028A;
sfr unsigned int volatile ADCBUF6          absolute 0x028C;
sfr unsigned int volatile ADCBUF7          absolute 0x028E;
sfr unsigned int volatile ADCBUF8          absolute 0x0290;
sfr unsigned int volatile ADCBUF9          absolute 0x0292;
sfr unsigned int volatile ADCBUFA          absolute 0x0294;
sfr unsigned int volatile ADCBUFB          absolute 0x0296;
sfr unsigned int volatile ADCBUFC          absolute 0x0298;
sfr unsigned int volatile ADCBUFD          absolute 0x029A;
sfr unsigned int volatile ADCBUFE          absolute 0x029C;
sfr unsigned int volatile ADCBUFF          absolute 0x029E;
sfr unsigned int volatile ADCON1           absolute 0x02A0;
sfr unsigned int volatile ADCON2           absolute 0x02A2;
sfr unsigned int volatile ADCON3           absolute 0x02A4;
sfr unsigned int volatile ADCHS            absolute 0x02A6;
sfr unsigned int volatile ADPCFG           absolute 0x02A8;
sfr unsigned int volatile ADCSSL           absolute 0x02AA;
sfr unsigned int volatile TRISB            absolute 0x02C6;
sfr unsigned int volatile PORTB            absolute 0x02C8;
sfr unsigned int volatile LATB             absolute 0x02CA;
sfr unsigned int volatile TRISC            absolute 0x02CC;
sfr unsigned int volatile PORTC            absolute 0x02CE;
sfr unsigned int volatile LATC             absolute 0x02D0;
sfr unsigned int volatile TRISD            absolute 0x02D2;
sfr unsigned int volatile PORTD            absolute 0x02D4;
sfr unsigned int volatile LATD             absolute 0x02D6;
sfr unsigned int volatile TRISE            absolute 0x02D8;
sfr unsigned int volatile PORTE            absolute 0x02DA;
sfr unsigned int volatile LATE             absolute 0x02DC;
sfr unsigned int volatile TRISF            absolute 0x02DE;
sfr unsigned int volatile PORTF            absolute 0x02E0;
sfr unsigned int volatile LATF             absolute 0x02E2;
sfr unsigned int          RCON             absolute 0x0740;
sfr unsigned int volatile OSCCON           absolute 0x0742;
sfr unsigned int volatile OSCTUN           absolute 0x0744;
sfr unsigned int volatile NVMCON           absolute 0x0760;
sfr unsigned int volatile NVMADR           absolute 0x0762;
sfr unsigned int volatile NVMADRU          absolute 0x0764;
sfr unsigned int          NVMKEY           absolute 0x0766;
sfr unsigned int          PMD1             absolute 0x0770;
sfr unsigned int          PMD2             absolute 0x0772;
sfr unsigned int          PMD3             absolute 0x0774;

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
    const register unsigned short int SIGNEXT_7 = 15;
    sbit  SIGNEXT_7_bit at ACCAU.B15;
    const register unsigned short int SIGNEXT_6 = 14;
    sbit  SIGNEXT_6_bit at ACCAU.B14;
    const register unsigned short int SIGNEXT_5 = 13;
    sbit  SIGNEXT_5_bit at ACCAU.B13;
    const register unsigned short int SIGNEXT_4 = 12;
    sbit  SIGNEXT_4_bit at ACCAU.B12;
    const register unsigned short int SIGNEXT_3 = 11;
    sbit  SIGNEXT_3_bit at ACCAU.B11;
    const register unsigned short int SIGNEXT_2 = 10;
    sbit  SIGNEXT_2_bit at ACCAU.B10;
    const register unsigned short int SIGNEXT_1 = 9;
    sbit  SIGNEXT_1_bit at ACCAU.B9;
    const register unsigned short int SIGNEXT_0 = 8;
    sbit  SIGNEXT_0_bit at ACCAU.B8;
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
    const register unsigned short int SIGNEXT_23 = 15;
    sbit  SIGNEXT_23_bit at ACCBU.B15;
    const register unsigned short int SIGNEXT_22 = 14;
    sbit  SIGNEXT_22_bit at ACCBU.B14;
    const register unsigned short int SIGNEXT_21 = 13;
    sbit  SIGNEXT_21_bit at ACCBU.B13;
    const register unsigned short int SIGNEXT_20 = 12;
    sbit  SIGNEXT_20_bit at ACCBU.B12;
    const register unsigned short int SIGNEXT_19 = 11;
    sbit  SIGNEXT_19_bit at ACCBU.B11;
    const register unsigned short int SIGNEXT_18 = 10;
    sbit  SIGNEXT_18_bit at ACCBU.B10;
    const register unsigned short int SIGNEXT_17 = 9;
    sbit  SIGNEXT_17_bit at ACCBU.B9;
    const register unsigned short int SIGNEXT_16 = 8;
    sbit  SIGNEXT_16_bit at ACCBU.B8;
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

    // DCOUNT bits
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
    const register unsigned short int DOSTARTH_6 = 6;
    sbit  DOSTARTH_6_bit at DOSTARTH.B6;
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
    const register unsigned short int DOENDH_6 = 6;
    sbit  DOENDH_6_bit at DOENDH.B6;
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

    // INTCON1 bits
    const register unsigned short int NSTDIS = 15;
    sbit  NSTDIS_bit at INTCON1.B15;
    const register unsigned short int OVATE = 10;
    sbit  OVATE_bit at INTCON1.B10;
    const register unsigned short int OVBTE = 9;
    sbit  OVBTE_bit at INTCON1.B9;
    const register unsigned short int COVTE = 8;
    sbit  COVTE_bit at INTCON1.B8;
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
    const register unsigned short int CNIF = 15;
    sbit  CNIF_bit at IFS0.B15;
    const register unsigned short int MI2CIF = 14;
    sbit  MI2CIF_bit at IFS0.B14;
    const register unsigned short int SI2CIF = 13;
    sbit  SI2CIF_bit at IFS0.B13;
    const register unsigned short int NVMIF = 12;
    sbit  NVMIF_bit at IFS0.B12;
    const register unsigned short int ADIF = 11;
    sbit  ADIF_bit at IFS0.B11;
    const register unsigned short int U1TXIF = 10;
    sbit  U1TXIF_bit at IFS0.B10;
    const register unsigned short int U1RXIF = 9;
    sbit  U1RXIF_bit at IFS0.B9;
    const register unsigned short int SPI1IF = 8;
    sbit  SPI1IF_bit at IFS0.B8;
    const register unsigned short int T3IF = 7;
    sbit  T3IF_bit at IFS0.B7;
    const register unsigned short int T2IF = 6;
    sbit  T2IF_bit at IFS0.B6;
    const register unsigned short int OC2IF = 5;
    sbit  OC2IF_bit at IFS0.B5;
    const register unsigned short int IC2IF = 4;
    sbit  IC2IF_bit at IFS0.B4;
    const register unsigned short int T1IF = 3;
    sbit  T1IF_bit at IFS0.B3;
    const register unsigned short int OC1IF = 2;
    sbit  OC1IF_bit at IFS0.B2;
    const register unsigned short int IC1IF = 1;
    sbit  IC1IF_bit at IFS0.B1;
    const register unsigned short int INT0IF = 0;
    sbit  INT0IF_bit at IFS0.B0;

    // IFS1 bits
    const register unsigned short int U2TXIF = 9;
    sbit  U2TXIF_bit at IFS1.B9;
    const register unsigned short int U2RXIF = 8;
    sbit  U2RXIF_bit at IFS1.B8;
    const register unsigned short int INT2IF = 7;
    sbit  INT2IF_bit at IFS1.B7;
    const register unsigned short int T5IF = 6;
    sbit  T5IF_bit at IFS1.B6;
    const register unsigned short int T4IF = 5;
    sbit  T4IF_bit at IFS1.B5;
    const register unsigned short int OC4IF = 4;
    sbit  OC4IF_bit at IFS1.B4;
    const register unsigned short int OC3IF = 3;
    sbit  OC3IF_bit at IFS1.B3;
    const register unsigned short int IC8IF = 2;
    sbit  IC8IF_bit at IFS1.B2;
    const register unsigned short int IC7IF = 1;
    sbit  IC7IF_bit at IFS1.B1;
    const register unsigned short int INT1IF = 0;
    sbit  INT1IF_bit at IFS1.B0;

    // IFS2 bits
    const register unsigned short int FLTAIF = 11;
    sbit  FLTAIF_bit at IFS2.B11;
    const register unsigned short int QEIIF = 8;
    sbit  QEIIF_bit at IFS2.B8;
    const register unsigned short int PWMIF = 7;
    sbit  PWMIF_bit at IFS2.B7;

    // IEC0 bits
    const register unsigned short int CNIE = 15;
    sbit  CNIE_bit at IEC0.B15;
    const register unsigned short int MI2CIE = 14;
    sbit  MI2CIE_bit at IEC0.B14;
    const register unsigned short int SI2CIE = 13;
    sbit  SI2CIE_bit at IEC0.B13;
    const register unsigned short int NVMIE = 12;
    sbit  NVMIE_bit at IEC0.B12;
    const register unsigned short int ADIE = 11;
    sbit  ADIE_bit at IEC0.B11;
    const register unsigned short int U1TXIE = 10;
    sbit  U1TXIE_bit at IEC0.B10;
    const register unsigned short int U1RXIE = 9;
    sbit  U1RXIE_bit at IEC0.B9;
    const register unsigned short int SPI1IE = 8;
    sbit  SPI1IE_bit at IEC0.B8;
    const register unsigned short int T3IE = 7;
    sbit  T3IE_bit at IEC0.B7;
    const register unsigned short int T2IE = 6;
    sbit  T2IE_bit at IEC0.B6;
    const register unsigned short int OC2IE = 5;
    sbit  OC2IE_bit at IEC0.B5;
    const register unsigned short int IC2IE = 4;
    sbit  IC2IE_bit at IEC0.B4;
    const register unsigned short int T1IE = 3;
    sbit  T1IE_bit at IEC0.B3;
    const register unsigned short int OC1IE = 2;
    sbit  OC1IE_bit at IEC0.B2;
    const register unsigned short int IC1IE = 1;
    sbit  IC1IE_bit at IEC0.B1;
    const register unsigned short int INT0IE = 0;
    sbit  INT0IE_bit at IEC0.B0;

    // IEC1 bits
    const register unsigned short int U2TXIE = 9;
    sbit  U2TXIE_bit at IEC1.B9;
    const register unsigned short int U2RXIE = 8;
    sbit  U2RXIE_bit at IEC1.B8;
    const register unsigned short int INT2IE = 7;
    sbit  INT2IE_bit at IEC1.B7;
    const register unsigned short int T5IE = 6;
    sbit  T5IE_bit at IEC1.B6;
    const register unsigned short int T4IE = 5;
    sbit  T4IE_bit at IEC1.B5;
    const register unsigned short int OC4IE = 4;
    sbit  OC4IE_bit at IEC1.B4;
    const register unsigned short int OC3IE = 3;
    sbit  OC3IE_bit at IEC1.B3;
    const register unsigned short int IC8IE = 2;
    sbit  IC8IE_bit at IEC1.B2;
    const register unsigned short int IC7IE = 1;
    sbit  IC7IE_bit at IEC1.B1;
    const register unsigned short int INT1IE = 0;
    sbit  INT1IE_bit at IEC1.B0;

    // IEC2 bits
    const register unsigned short int FLTAIE = 11;
    sbit  FLTAIE_bit at IEC2.B11;
    const register unsigned short int QEIIE = 8;
    sbit  QEIIE_bit at IEC2.B8;
    const register unsigned short int PWMIE = 7;
    sbit  PWMIE_bit at IEC2.B7;

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
    const register unsigned short int T3IP_2 = 14;
    sbit  T3IP_2_bit at IPC1.B14;
    const register unsigned short int T3IP_1 = 13;
    sbit  T3IP_1_bit at IPC1.B13;
    const register unsigned short int T3IP_0 = 12;
    sbit  T3IP_0_bit at IPC1.B12;
    const register unsigned short int T2IP_2 = 10;
    sbit  T2IP_2_bit at IPC1.B10;
    const register unsigned short int T2IP_1 = 9;
    sbit  T2IP_1_bit at IPC1.B9;
    const register unsigned short int T2IP_0 = 8;
    sbit  T2IP_0_bit at IPC1.B8;
    const register unsigned short int OC2IP_2 = 6;
    sbit  OC2IP_2_bit at IPC1.B6;
    const register unsigned short int OC2IP_1 = 5;
    sbit  OC2IP_1_bit at IPC1.B5;
    const register unsigned short int OC2IP_0 = 4;
    sbit  OC2IP_0_bit at IPC1.B4;
    const register unsigned short int IC2IP_2 = 2;
    sbit  IC2IP_2_bit at IPC1.B2;
    const register unsigned short int IC2IP_1 = 1;
    sbit  IC2IP_1_bit at IPC1.B1;
    const register unsigned short int IC2IP_0 = 0;
    sbit  IC2IP_0_bit at IPC1.B0;

    // IPC2 bits
    const register unsigned short int ADIP_2 = 14;
    sbit  ADIP_2_bit at IPC2.B14;
    const register unsigned short int ADIP_1 = 13;
    sbit  ADIP_1_bit at IPC2.B13;
    const register unsigned short int ADIP_0 = 12;
    sbit  ADIP_0_bit at IPC2.B12;
    const register unsigned short int U1TXIP_2 = 10;
    sbit  U1TXIP_2_bit at IPC2.B10;
    const register unsigned short int U1TXIP_1 = 9;
    sbit  U1TXIP_1_bit at IPC2.B9;
    const register unsigned short int U1TXIP_0 = 8;
    sbit  U1TXIP_0_bit at IPC2.B8;
    const register unsigned short int U1RXIP_2 = 6;
    sbit  U1RXIP_2_bit at IPC2.B6;
    const register unsigned short int U1RXIP_1 = 5;
    sbit  U1RXIP_1_bit at IPC2.B5;
    const register unsigned short int U1RXIP_0 = 4;
    sbit  U1RXIP_0_bit at IPC2.B4;
    const register unsigned short int SPI1IP_2 = 2;
    sbit  SPI1IP_2_bit at IPC2.B2;
    const register unsigned short int SPI1IP_1 = 1;
    sbit  SPI1IP_1_bit at IPC2.B1;
    const register unsigned short int SPI1IP_0 = 0;
    sbit  SPI1IP_0_bit at IPC2.B0;

    // IPC3 bits
    const register unsigned short int CNIP_2 = 14;
    sbit  CNIP_2_bit at IPC3.B14;
    const register unsigned short int CNIP_1 = 13;
    sbit  CNIP_1_bit at IPC3.B13;
    const register unsigned short int CNIP_0 = 12;
    sbit  CNIP_0_bit at IPC3.B12;
    const register unsigned short int MI2CIP_2 = 10;
    sbit  MI2CIP_2_bit at IPC3.B10;
    const register unsigned short int MI2CIP_1 = 9;
    sbit  MI2CIP_1_bit at IPC3.B9;
    const register unsigned short int MI2CIP_0 = 8;
    sbit  MI2CIP_0_bit at IPC3.B8;
    const register unsigned short int SI2CIP_2 = 6;
    sbit  SI2CIP_2_bit at IPC3.B6;
    const register unsigned short int SI2CIP_1 = 5;
    sbit  SI2CIP_1_bit at IPC3.B5;
    const register unsigned short int SI2CIP_0 = 4;
    sbit  SI2CIP_0_bit at IPC3.B4;
    const register unsigned short int NVMIP_2 = 2;
    sbit  NVMIP_2_bit at IPC3.B2;
    const register unsigned short int NVMIP_1 = 1;
    sbit  NVMIP_1_bit at IPC3.B1;
    const register unsigned short int NVMIP_0 = 0;
    sbit  NVMIP_0_bit at IPC3.B0;

    // IPC4 bits
    const register unsigned short int OC3IP_2 = 14;
    sbit  OC3IP_2_bit at IPC4.B14;
    const register unsigned short int OC3IP_1 = 13;
    sbit  OC3IP_1_bit at IPC4.B13;
    const register unsigned short int OC3IP_0 = 12;
    sbit  OC3IP_0_bit at IPC4.B12;
    const register unsigned short int IC8IP_2 = 10;
    sbit  IC8IP_2_bit at IPC4.B10;
    const register unsigned short int IC8IP_1 = 9;
    sbit  IC8IP_1_bit at IPC4.B9;
    const register unsigned short int IC8IP_0 = 8;
    sbit  IC8IP_0_bit at IPC4.B8;
    const register unsigned short int IC7IP_2 = 6;
    sbit  IC7IP_2_bit at IPC4.B6;
    const register unsigned short int IC7IP_1 = 5;
    sbit  IC7IP_1_bit at IPC4.B5;
    const register unsigned short int IC7IP_0 = 4;
    sbit  IC7IP_0_bit at IPC4.B4;
    const register unsigned short int INT1IP_2 = 2;
    const register unsigned short int INT1IP2 = 2;
    sbit  INT1IP_2_bit at IPC4.B2;
    const register unsigned short int INT1IP_1 = 1;
    const register unsigned short int INT1IP1 = 1;
    sbit  INT1IP_1_bit at IPC4.B1;
    const register unsigned short int INT1IP_0 = 0;
    const register unsigned short int INT1IP0 = 0;
    sbit  INT1IP_0_bit at IPC4.B0;

    // IPC5 bits
    const register unsigned short int INT2IP_2 = 14;
    const register unsigned short int INT2IP2 = 14;
    sbit  INT2IP_2_bit at IPC5.B14;
    const register unsigned short int INT2IP_1 = 13;
    const register unsigned short int INT2IP1= 13;
    sbit  INT2IP_1_bit at IPC5.B13;
    const register unsigned short int INT2IP_0 = 12;
    const register unsigned short int INT2IP0= 12;
    sbit  INT2IP_0_bit at IPC5.B12;
    const register unsigned short int T5IP_2 = 10;
    sbit  T5IP_2_bit at IPC5.B10;
    const register unsigned short int T5IP_1 = 9;
    sbit  T5IP_1_bit at IPC5.B9;
    const register unsigned short int T5IP_0 = 8;
    sbit  T5IP_0_bit at IPC5.B8;
    const register unsigned short int T4IP_2 = 6;
    sbit  T4IP_2_bit at IPC5.B6;
    const register unsigned short int T4IP_1 = 5;
    sbit  T4IP_1_bit at IPC5.B5;
    const register unsigned short int T4IP_0 = 4;
    sbit  T4IP_0_bit at IPC5.B4;
    const register unsigned short int OC4IP_2 = 2;
    sbit  OC4IP_2_bit at IPC5.B2;
    const register unsigned short int OC4IP_1 = 1;
    sbit  OC4IP_1_bit at IPC5.B1;
    const register unsigned short int OC4IP_0 = 0;
    sbit  OC4IP_0_bit at IPC5.B0;

    // IPC6 bits
    const register unsigned short int U2TXIP_2 = 6;
    sbit  U2TXIP_2_bit at IPC6.B6;
    const register unsigned short int U2TXIP_1 = 5;
    sbit  U2TXIP_1_bit at IPC6.B5;
    const register unsigned short int U2TXIP_0 = 4;
    sbit  U2TXIP_0_bit at IPC6.B4;
    const register unsigned short int U2RXIP_2 = 2;
    sbit  U2RXIP_2_bit at IPC6.B2;
    const register unsigned short int U2RXIP_1 = 1;
    sbit  U2RXIP_1_bit at IPC6.B1;
    const register unsigned short int U2RXIP_0 = 0;
    sbit  U2RXIP_0_bit at IPC6.B0;

    // IPC9 bits
    const register unsigned short int PWMIP_2 = 14;
    sbit  PWMIP_2_bit at IPC9.B14;
    const register unsigned short int PWMIP_1 = 13;
    sbit  PWMIP_1_bit at IPC9.B13;
    const register unsigned short int PWMIP_0 = 12;
    sbit  PWMIP_0_bit at IPC9.B12;

    // IPC10 bits
    const register unsigned short int FLTAIP_2 = 14;
    sbit  FLTAIP_2_bit at IPC10.B14;
    const register unsigned short int FLTAIP_1 = 13;
    sbit  FLTAIP_1_bit at IPC10.B13;
    const register unsigned short int FLTAIP_0 = 12;
    sbit  FLTAIP_0_bit at IPC10.B12;
    const register unsigned short int QEIIP_2 = 2;
    sbit  QEIIP_2_bit at IPC10.B2;
    const register unsigned short int QEIIP_1 = 1;
    sbit  QEIIP_1_bit at IPC10.B1;
    const register unsigned short int QEIIP_0 = 0;
    sbit  QEIIP_0_bit at IPC10.B0;

    // INTTREG bits
    const register unsigned short int IRQTOCPU = 15;
    sbit  IRQTOCPU_bit at INTTREG.B15;
    const register unsigned short int TMODE = 14;
    sbit  TMODE_bit at INTTREG.B14;
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

    // CNEN1 bits
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
    const register unsigned short int CN18IE = 2;
    sbit  CN18IE_bit at CNEN2.B2;
    const register unsigned short int CN17IE = 1;
    sbit  CN17IE_bit at CNEN2.B1;

    // CNPU1 bits
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
    const register unsigned short int CN18PUE = 2;
    sbit  CN18PUE_bit at CNPU2.B2;
    const register unsigned short int CN17PUE = 1;
    sbit  CN17PUE_bit at CNPU2.B1;

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

    // QEICON bits
    const register unsigned short int CNTERR = 15;
    sbit  CNTERR_bit at QEICON.B15;
    const register unsigned short int QEISIDL = 13;
    sbit  QEISIDL_bit at QEICON.B13;
    const register unsigned short int INDX = 12;
    sbit  INDX_bit at QEICON.B12;
    const register unsigned short int UPDN = 11;
    sbit  UPDN_bit at QEICON.B11;
    const register unsigned short int QEIM2 = 10;
    sbit  QEIM2_bit at QEICON.B10;
    const register unsigned short int QEIM1 = 9;
    sbit  QEIM1_bit at QEICON.B9;
    const register unsigned short int QEIM0 = 8;
    sbit  QEIM0_bit at QEICON.B8;
    const register unsigned short int SWPAB = 7;
    sbit  SWPAB_bit at QEICON.B7;
    const register unsigned short int PCDOUT = 6;
    sbit  PCDOUT_bit at QEICON.B6;
    const register unsigned short int TQGATE = 5;
    sbit  TQGATE_bit at QEICON.B5;
    const register unsigned short int TQCKPS1 = 4;
    sbit  TQCKPS1_bit at QEICON.B4;
    const register unsigned short int TQCKPS0 = 3;
    sbit  TQCKPS0_bit at QEICON.B3;
    const register unsigned short int POSRES = 2;
    sbit  POSRES_bit at QEICON.B2;
    const register unsigned short int TQCS = 1;
    sbit  TQCS_bit at QEICON.B1;
    const register unsigned short int UPDN_CNT = 0;
    sbit  UPDN_CNT_bit at QEICON.B0;

    // DFLTCON bits
    const register unsigned short int IMV1 = 10;
    sbit  IMV1_bit at DFLTCON.B10;
    const register unsigned short int IMV0 = 9;
    sbit  IMV0_bit at DFLTCON.B9;
    const register unsigned short int CEID = 8;
    sbit  CEID_bit at DFLTCON.B8;
    const register unsigned short int QEOUT = 7;
    sbit  QEOUT_bit at DFLTCON.B7;
    const register unsigned short int QECK2 = 6;
    sbit  QECK2_bit at DFLTCON.B6;
    const register unsigned short int QECK1 = 5;
    sbit  QECK1_bit at DFLTCON.B5;
    const register unsigned short int QECK0 = 4;
    sbit  QECK0_bit at DFLTCON.B4;

    // POSCNT bits
    const register unsigned short int POSCNT_15 = 15;
    sbit  POSCNT_15_bit at POSCNT.B15;
    const register unsigned short int POSCNT_14 = 14;
    sbit  POSCNT_14_bit at POSCNT.B14;
    const register unsigned short int POSCNT_13 = 13;
    sbit  POSCNT_13_bit at POSCNT.B13;
    const register unsigned short int POSCNT_12 = 12;
    sbit  POSCNT_12_bit at POSCNT.B12;
    const register unsigned short int POSCNT_11 = 11;
    sbit  POSCNT_11_bit at POSCNT.B11;
    const register unsigned short int POSCNT_10 = 10;
    sbit  POSCNT_10_bit at POSCNT.B10;
    const register unsigned short int POSCNT_9 = 9;
    sbit  POSCNT_9_bit at POSCNT.B9;
    const register unsigned short int POSCNT_8 = 8;
    sbit  POSCNT_8_bit at POSCNT.B8;
    const register unsigned short int POSCNT_7 = 7;
    sbit  POSCNT_7_bit at POSCNT.B7;
    const register unsigned short int POSCNT_6 = 6;
    sbit  POSCNT_6_bit at POSCNT.B6;
    const register unsigned short int POSCNT_5 = 5;
    sbit  POSCNT_5_bit at POSCNT.B5;
    const register unsigned short int POSCNT_4 = 4;
    sbit  POSCNT_4_bit at POSCNT.B4;
    const register unsigned short int POSCNT_3 = 3;
    sbit  POSCNT_3_bit at POSCNT.B3;
    const register unsigned short int POSCNT_2 = 2;
    sbit  POSCNT_2_bit at POSCNT.B2;
    const register unsigned short int POSCNT_1 = 1;
    sbit  POSCNT_1_bit at POSCNT.B1;
    const register unsigned short int POSCNT_0 = 0;
    sbit  POSCNT_0_bit at POSCNT.B0;

    // MAXCNT bits
    const register unsigned short int MAXCNT_15 = 15;
    sbit  MAXCNT_15_bit at MAXCNT.B15;
    const register unsigned short int MAXCNT_14 = 14;
    sbit  MAXCNT_14_bit at MAXCNT.B14;
    const register unsigned short int MAXCNT_13 = 13;
    sbit  MAXCNT_13_bit at MAXCNT.B13;
    const register unsigned short int MAXCNT_12 = 12;
    sbit  MAXCNT_12_bit at MAXCNT.B12;
    const register unsigned short int MAXCNT_11 = 11;
    sbit  MAXCNT_11_bit at MAXCNT.B11;
    const register unsigned short int MAXCNT_10 = 10;
    sbit  MAXCNT_10_bit at MAXCNT.B10;
    const register unsigned short int MAXCNT_9 = 9;
    sbit  MAXCNT_9_bit at MAXCNT.B9;
    const register unsigned short int MAXCNT_8 = 8;
    sbit  MAXCNT_8_bit at MAXCNT.B8;
    const register unsigned short int MAXCNT_7 = 7;
    sbit  MAXCNT_7_bit at MAXCNT.B7;
    const register unsigned short int MAXCNT_6 = 6;
    sbit  MAXCNT_6_bit at MAXCNT.B6;
    const register unsigned short int MAXCNT_5 = 5;
    sbit  MAXCNT_5_bit at MAXCNT.B5;
    const register unsigned short int MAXCNT_4 = 4;
    sbit  MAXCNT_4_bit at MAXCNT.B4;
    const register unsigned short int MAXCNT_3 = 3;
    sbit  MAXCNT_3_bit at MAXCNT.B3;
    const register unsigned short int MAXCNT_2 = 2;
    sbit  MAXCNT_2_bit at MAXCNT.B2;
    const register unsigned short int MAXCNT_1 = 1;
    sbit  MAXCNT_1_bit at MAXCNT.B1;
    const register unsigned short int MAXCNT_0 = 0;
    sbit  MAXCNT_0_bit at MAXCNT.B0;

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

    // IC7BUF bits
    const register unsigned short int IC7BUF_15 = 15;
    sbit  IC7BUF_15_bit at IC7BUF.B15;
    const register unsigned short int IC7BUF_14 = 14;
    sbit  IC7BUF_14_bit at IC7BUF.B14;
    const register unsigned short int IC7BUF_13 = 13;
    sbit  IC7BUF_13_bit at IC7BUF.B13;
    const register unsigned short int IC7BUF_12 = 12;
    sbit  IC7BUF_12_bit at IC7BUF.B12;
    const register unsigned short int IC7BUF_11 = 11;
    sbit  IC7BUF_11_bit at IC7BUF.B11;
    const register unsigned short int IC7BUF_10 = 10;
    sbit  IC7BUF_10_bit at IC7BUF.B10;
    const register unsigned short int IC7BUF_9 = 9;
    sbit  IC7BUF_9_bit at IC7BUF.B9;
    const register unsigned short int IC7BUF_8 = 8;
    sbit  IC7BUF_8_bit at IC7BUF.B8;
    const register unsigned short int IC7BUF_7 = 7;
    sbit  IC7BUF_7_bit at IC7BUF.B7;
    const register unsigned short int IC7BUF_6 = 6;
    sbit  IC7BUF_6_bit at IC7BUF.B6;
    const register unsigned short int IC7BUF_5 = 5;
    sbit  IC7BUF_5_bit at IC7BUF.B5;
    const register unsigned short int IC7BUF_4 = 4;
    sbit  IC7BUF_4_bit at IC7BUF.B4;
    const register unsigned short int IC7BUF_3 = 3;
    sbit  IC7BUF_3_bit at IC7BUF.B3;
    const register unsigned short int IC7BUF_2 = 2;
    sbit  IC7BUF_2_bit at IC7BUF.B2;
    const register unsigned short int IC7BUF_1 = 1;
    sbit  IC7BUF_1_bit at IC7BUF.B1;
    const register unsigned short int IC7BUF_0 = 0;
    sbit  IC7BUF_0_bit at IC7BUF.B0;

    // IC7CON bits
    sbit  ICSIDL_IC7CON_bit at IC7CON.B13;
    sbit  ICTMR_IC7CON_bit at IC7CON.B7;
    sbit  ICI_1_IC7CON_bit at IC7CON.B6;
    sbit  ICI_0_IC7CON_bit at IC7CON.B5;
    sbit  ICOV_IC7CON_bit at IC7CON.B4;
    sbit  ICBNE_IC7CON_bit at IC7CON.B3;
    sbit  ICM_2_IC7CON_bit at IC7CON.B2;
    sbit  ICM_1_IC7CON_bit at IC7CON.B1;
    sbit  ICM_0_IC7CON_bit at IC7CON.B0;

    // IC8BUF bits
    const register unsigned short int IC8BUF_15 = 15;
    sbit  IC8BUF_15_bit at IC8BUF.B15;
    const register unsigned short int IC8BUF_14 = 14;
    sbit  IC8BUF_14_bit at IC8BUF.B14;
    const register unsigned short int IC8BUF_13 = 13;
    sbit  IC8BUF_13_bit at IC8BUF.B13;
    const register unsigned short int IC8BUF_12 = 12;
    sbit  IC8BUF_12_bit at IC8BUF.B12;
    const register unsigned short int IC8BUF_11 = 11;
    sbit  IC8BUF_11_bit at IC8BUF.B11;
    const register unsigned short int IC8BUF_10 = 10;
    sbit  IC8BUF_10_bit at IC8BUF.B10;
    const register unsigned short int IC8BUF_9 = 9;
    sbit  IC8BUF_9_bit at IC8BUF.B9;
    const register unsigned short int IC8BUF_8 = 8;
    sbit  IC8BUF_8_bit at IC8BUF.B8;
    const register unsigned short int IC8BUF_7 = 7;
    sbit  IC8BUF_7_bit at IC8BUF.B7;
    const register unsigned short int IC8BUF_6 = 6;
    sbit  IC8BUF_6_bit at IC8BUF.B6;
    const register unsigned short int IC8BUF_5 = 5;
    sbit  IC8BUF_5_bit at IC8BUF.B5;
    const register unsigned short int IC8BUF_4 = 4;
    sbit  IC8BUF_4_bit at IC8BUF.B4;
    const register unsigned short int IC8BUF_3 = 3;
    sbit  IC8BUF_3_bit at IC8BUF.B3;
    const register unsigned short int IC8BUF_2 = 2;
    sbit  IC8BUF_2_bit at IC8BUF.B2;
    const register unsigned short int IC8BUF_1 = 1;
    sbit  IC8BUF_1_bit at IC8BUF.B1;
    const register unsigned short int IC8BUF_0 = 0;
    sbit  IC8BUF_0_bit at IC8BUF.B0;

    // IC8CON bits
    sbit  ICSIDL_IC8CON_bit at IC8CON.B13;
    sbit  ICTMR_IC8CON_bit at IC8CON.B7;
    sbit  ICI_1_IC8CON_bit at IC8CON.B6;
    sbit  ICI_0_IC8CON_bit at IC8CON.B5;
    sbit  ICOV_IC8CON_bit at IC8CON.B4;
    sbit  ICBNE_IC8CON_bit at IC8CON.B3;
    sbit  ICM_2_IC8CON_bit at IC8CON.B2;
    sbit  ICM_1_IC8CON_bit at IC8CON.B1;
    sbit  ICM_0_IC8CON_bit at IC8CON.B0;

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

    // PTCON bits
    const register unsigned short int PTEN = 15;
    sbit  PTEN_bit at PTCON.B15;
    const register unsigned short int PTSIDL = 13;
    sbit  PTSIDL_bit at PTCON.B13;
    const register unsigned short int PTOPS_3 = 7;
    sbit  PTOPS_3_bit at PTCON.B7;
    const register unsigned short int PTOPS_2 = 6;
    sbit  PTOPS_2_bit at PTCON.B6;
    const register unsigned short int PTOPS_1 = 5;
    sbit  PTOPS_1_bit at PTCON.B5;
    const register unsigned short int PTOPS_0 = 4;
    sbit  PTOPS_0_bit at PTCON.B4;
    const register unsigned short int PTCKPS_1 = 3;
    sbit  PTCKPS_1_bit at PTCON.B3;
    const register unsigned short int PTCKPS_0 = 2;
    sbit  PTCKPS_0_bit at PTCON.B2;
    const register unsigned short int PTMOD_1 = 1;
    sbit  PTMOD_1_bit at PTCON.B1;
    const register unsigned short int PTMOD_0 = 0;
    sbit  PTMOD_0_bit at PTCON.B0;

    // PTMR bits
    const register unsigned short int PTDIR = 15;
    sbit  PTDIR_bit at PTMR.B15;
    const register unsigned short int PTMR_14 = 14;
    sbit  PTMR_14_bit at PTMR.B14;
    const register unsigned short int PTMR_13 = 13;
    sbit  PTMR_13_bit at PTMR.B13;
    const register unsigned short int PTMR_12 = 12;
    sbit  PTMR_12_bit at PTMR.B12;
    const register unsigned short int PTMR_11 = 11;
    sbit  PTMR_11_bit at PTMR.B11;
    const register unsigned short int PTMR_10 = 10;
    sbit  PTMR_10_bit at PTMR.B10;
    const register unsigned short int PTMR_9 = 9;
    sbit  PTMR_9_bit at PTMR.B9;
    const register unsigned short int PTMR_8 = 8;
    sbit  PTMR_8_bit at PTMR.B8;
    const register unsigned short int PTMR_7 = 7;
    sbit  PTMR_7_bit at PTMR.B7;
    const register unsigned short int PTMR_6 = 6;
    sbit  PTMR_6_bit at PTMR.B6;
    const register unsigned short int PTMR_5 = 5;
    sbit  PTMR_5_bit at PTMR.B5;
    const register unsigned short int PTMR_4 = 4;
    sbit  PTMR_4_bit at PTMR.B4;
    const register unsigned short int PTMR_3 = 3;
    sbit  PTMR_3_bit at PTMR.B3;
    const register unsigned short int PTMR_2 = 2;
    sbit  PTMR_2_bit at PTMR.B2;
    const register unsigned short int PTMR_1 = 1;
    sbit  PTMR_1_bit at PTMR.B1;
    const register unsigned short int PTMR_0 = 0;
    sbit  PTMR_0_bit at PTMR.B0;

    // PTPER bits
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
    const register unsigned short int SEVTDIR = 15;
    sbit  SEVTDIR_bit at SEVTCMP.B15;
    const register unsigned short int SEVTCMP_14 = 14;
    sbit  SEVTCMP_14_bit at SEVTCMP.B14;
    const register unsigned short int SEVTCMP_13 = 13;
    sbit  SEVTCMP_13_bit at SEVTCMP.B13;
    const register unsigned short int SEVTCMP_12 = 12;
    sbit  SEVTCMP_12_bit at SEVTCMP.B12;
    const register unsigned short int SEVTCMP_11 = 11;
    sbit  SEVTCMP_11_bit at SEVTCMP.B11;
    const register unsigned short int SEVTCMP_10 = 10;
    sbit  SEVTCMP_10_bit at SEVTCMP.B10;
    const register unsigned short int SEVTCMP_9 = 9;
    sbit  SEVTCMP_9_bit at SEVTCMP.B9;
    const register unsigned short int SEVTCMP_8 = 8;
    sbit  SEVTCMP_8_bit at SEVTCMP.B8;
    const register unsigned short int SEVTCMP_7 = 7;
    sbit  SEVTCMP_7_bit at SEVTCMP.B7;
    const register unsigned short int SEVTCMP_6 = 6;
    sbit  SEVTCMP_6_bit at SEVTCMP.B6;
    const register unsigned short int SEVTCMP_5 = 5;
    sbit  SEVTCMP_5_bit at SEVTCMP.B5;
    const register unsigned short int SEVTCMP_4 = 4;
    sbit  SEVTCMP_4_bit at SEVTCMP.B4;
    const register unsigned short int SEVTCMP_3 = 3;
    sbit  SEVTCMP_3_bit at SEVTCMP.B3;
    const register unsigned short int SEVTCMP_2 = 2;
    sbit  SEVTCMP_2_bit at SEVTCMP.B2;
    const register unsigned short int SEVTCMP_1 = 1;
    sbit  SEVTCMP_1_bit at SEVTCMP.B1;
    const register unsigned short int SEVTCMP_0 = 0;
    sbit  SEVTCMP_0_bit at SEVTCMP.B0;

    // PWMCON1 bits
    const register unsigned short int PTMOD3 = 10;
    sbit  PTMOD3_bit at PWMCON1.B10;
    const register unsigned short int PTMOD2 = 9;
    sbit  PTMOD2_bit at PWMCON1.B9;
    const register unsigned short int PTMOD1 = 8;
    sbit  PTMOD1_bit at PWMCON1.B8;
    const register unsigned short int PEN3H = 6;
    sbit  PEN3H_bit at PWMCON1.B6;
    const register unsigned short int PEN2H = 5;
    sbit  PEN2H_bit at PWMCON1.B5;
    const register unsigned short int PEN1H = 4;
    sbit  PEN1H_bit at PWMCON1.B4;
    const register unsigned short int PEN3L = 2;
    sbit  PEN3L_bit at PWMCON1.B2;
    const register unsigned short int PEN2L = 1;
    sbit  PEN2L_bit at PWMCON1.B1;
    const register unsigned short int PEN1L = 0;
    sbit  PEN1L_bit at PWMCON1.B0;

    // PWMCON2 bits
    const register unsigned short int SEVOPS_3 = 11;
    sbit  SEVOPS_3_bit at PWMCON2.B11;
    const register unsigned short int SEVOPS_2 = 10;
    sbit  SEVOPS_2_bit at PWMCON2.B10;
    const register unsigned short int SEVOPS_1 = 9;
    sbit  SEVOPS_1_bit at PWMCON2.B9;
    const register unsigned short int SEVOPS_0 = 8;
    sbit  SEVOPS_0_bit at PWMCON2.B8;
    const register unsigned short int IUE = 2;
    sbit  IUE_bit at PWMCON2.B2;
    const register unsigned short int OSYNC = 1;
    sbit  OSYNC_bit at PWMCON2.B1;
    const register unsigned short int UDIS = 0;
    sbit  UDIS_bit at PWMCON2.B0;

    // DTCON1 bits
    const register unsigned short int DTAPS_1 = 7;
    sbit  DTAPS_1_bit at DTCON1.B7;
    const register unsigned short int DTAPS_0 = 6;
    sbit  DTAPS_0_bit at DTCON1.B6;
    const register unsigned short int DTAVAL_5 = 5;
    sbit  DTAVAL_5_bit at DTCON1.B5;
    const register unsigned short int DTAVAL_4 = 4;
    sbit  DTAVAL_4_bit at DTCON1.B4;
    const register unsigned short int DTAVAL_3 = 3;
    sbit  DTAVAL_3_bit at DTCON1.B3;
    const register unsigned short int DTAVAL_2 = 2;
    sbit  DTAVAL_2_bit at DTCON1.B2;
    const register unsigned short int DTAVAL_1 = 1;
    sbit  DTAVAL_1_bit at DTCON1.B1;
    const register unsigned short int DTAVAL_0 = 0;
    sbit  DTAVAL_0_bit at DTCON1.B0;

    // FLTACON bits
    const register unsigned short int FAOV3H = 13;
    sbit  FAOV3H_bit at FLTACON.B13;
    const register unsigned short int FAOV3L = 12;
    sbit  FAOV3L_bit at FLTACON.B12;
    const register unsigned short int FAOV2H = 11;
    sbit  FAOV2H_bit at FLTACON.B11;
    const register unsigned short int FAOV2L = 10;
    sbit  FAOV2L_bit at FLTACON.B10;
    const register unsigned short int FAOV1H = 9;
    sbit  FAOV1H_bit at FLTACON.B9;
    const register unsigned short int FAOV1L = 8;
    sbit  FAOV1L_bit at FLTACON.B8;
    const register unsigned short int FLTAM = 7;
    sbit  FLTAM_bit at FLTACON.B7;
    const register unsigned short int FAEN3 = 2;
    sbit  FAEN3_bit at FLTACON.B2;
    const register unsigned short int FAEN2 = 1;
    sbit  FAEN2_bit at FLTACON.B1;
    const register unsigned short int FAEN1 = 0;
    sbit  FAEN1_bit at FLTACON.B0;

    // OVDCON bits
    const register unsigned short int POVD3H = 13;
    sbit  POVD3H_bit at OVDCON.B13;
    const register unsigned short int POVD3L = 12;
    sbit  POVD3L_bit at OVDCON.B12;
    const register unsigned short int POVD2H = 11;
    sbit  POVD2H_bit at OVDCON.B11;
    const register unsigned short int POVD2L = 10;
    sbit  POVD2L_bit at OVDCON.B10;
    const register unsigned short int POVD1H = 9;
    sbit  POVD1H_bit at OVDCON.B9;
    const register unsigned short int POVD1L = 8;
    sbit  POVD1L_bit at OVDCON.B8;
    const register unsigned short int POUT3H = 5;
    sbit  POUT3H_bit at OVDCON.B5;
    const register unsigned short int POUT3L = 4;
    sbit  POUT3L_bit at OVDCON.B4;
    const register unsigned short int POUT2H = 3;
    sbit  POUT2H_bit at OVDCON.B3;
    const register unsigned short int POUT2L = 2;
    sbit  POUT2L_bit at OVDCON.B2;
    const register unsigned short int POUT1H = 1;
    sbit  POUT1H_bit at OVDCON.B1;
    const register unsigned short int POUT1L = 0;
    sbit  POUT1L_bit at OVDCON.B0;

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

    // I2CRCV bits
    const register unsigned short int I2CRCV_7 = 7;
    sbit  I2CRCV_7_bit at I2CRCV.B7;
    const register unsigned short int I2CRCV_6 = 6;
    sbit  I2CRCV_6_bit at I2CRCV.B6;
    const register unsigned short int I2CRCV_5 = 5;
    sbit  I2CRCV_5_bit at I2CRCV.B5;
    const register unsigned short int I2CRCV_4 = 4;
    sbit  I2CRCV_4_bit at I2CRCV.B4;
    const register unsigned short int I2CRCV_3 = 3;
    sbit  I2CRCV_3_bit at I2CRCV.B3;
    const register unsigned short int I2CRCV_2 = 2;
    sbit  I2CRCV_2_bit at I2CRCV.B2;
    const register unsigned short int I2CRCV_1 = 1;
    sbit  I2CRCV_1_bit at I2CRCV.B1;
    const register unsigned short int I2CRCV_0 = 0;
    sbit  I2CRCV_0_bit at I2CRCV.B0;

    // I2CTRN bits
    const register unsigned short int I2CTRN_7 = 7;
    sbit  I2CTRN_7_bit at I2CTRN.B7;
    const register unsigned short int I2CTRN_6 = 6;
    sbit  I2CTRN_6_bit at I2CTRN.B6;
    const register unsigned short int I2CTRN_5 = 5;
    sbit  I2CTRN_5_bit at I2CTRN.B5;
    const register unsigned short int I2CTRN_4 = 4;
    sbit  I2CTRN_4_bit at I2CTRN.B4;
    const register unsigned short int I2CTRN_3 = 3;
    sbit  I2CTRN_3_bit at I2CTRN.B3;
    const register unsigned short int I2CTRN_2 = 2;
    sbit  I2CTRN_2_bit at I2CTRN.B2;
    const register unsigned short int I2CTRN_1 = 1;
    sbit  I2CTRN_1_bit at I2CTRN.B1;
    const register unsigned short int I2CTRN_0 = 0;
    sbit  I2CTRN_0_bit at I2CTRN.B0;

    // I2CBRG bits
    const register unsigned short int I2CBRG_8 = 8;
    sbit  I2CBRG_8_bit at I2CBRG.B8;
    const register unsigned short int I2CBRG_7 = 7;
    sbit  I2CBRG_7_bit at I2CBRG.B7;
    const register unsigned short int I2CBRG_6 = 6;
    sbit  I2CBRG_6_bit at I2CBRG.B6;
    const register unsigned short int I2CBRG_5 = 5;
    sbit  I2CBRG_5_bit at I2CBRG.B5;
    const register unsigned short int I2CBRG_4 = 4;
    sbit  I2CBRG_4_bit at I2CBRG.B4;
    const register unsigned short int I2CBRG_3 = 3;
    sbit  I2CBRG_3_bit at I2CBRG.B3;
    const register unsigned short int I2CBRG_2 = 2;
    sbit  I2CBRG_2_bit at I2CBRG.B2;
    const register unsigned short int I2CBRG_1 = 1;
    sbit  I2CBRG_1_bit at I2CBRG.B1;
    const register unsigned short int I2CBRG_0 = 0;
    sbit  I2CBRG_0_bit at I2CBRG.B0;

    // I2CCON bits
    const register unsigned short int I2CEN = 15;
    sbit  I2CEN_bit at I2CCON.B15;
    const register unsigned short int I2CSIDL = 13;
    sbit  I2CSIDL_bit at I2CCON.B13;
    const register unsigned short int SCLREL = 12;
    sbit  SCLREL_bit at I2CCON.B12;
    const register unsigned short int IPMIEN = 11;
    sbit  IPMIEN_bit at I2CCON.B11;
    const register unsigned short int A10M = 10;
    sbit  A10M_bit at I2CCON.B10;
    const register unsigned short int DISSLW = 9;
    sbit  DISSLW_bit at I2CCON.B9;
    const register unsigned short int SMEN = 8;
    sbit  SMEN_bit at I2CCON.B8;
    const register unsigned short int GCEN = 7;
    sbit  GCEN_bit at I2CCON.B7;
    const register unsigned short int STREN = 6;
    sbit  STREN_bit at I2CCON.B6;
    const register unsigned short int ACKDT = 5;
    sbit  ACKDT_bit at I2CCON.B5;
    const register unsigned short int ACKEN = 4;
    sbit  ACKEN_bit at I2CCON.B4;
    const register unsigned short int RCEN = 3;
    sbit  RCEN_bit at I2CCON.B3;
    const register unsigned short int PEN = 2;
    sbit  PEN_bit at I2CCON.B2;
    const register unsigned short int RSEN = 1;
    sbit  RSEN_bit at I2CCON.B1;
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at I2CCON.B0;

    // I2CSTAT bits
    const register unsigned short int ACKSTAT = 15;
    sbit  ACKSTAT_bit at I2CSTAT.B15;
    const register unsigned short int TRSTAT = 14;
    sbit  TRSTAT_bit at I2CSTAT.B14;
    const register unsigned short int BCL = 10;
    sbit  BCL_bit at I2CSTAT.B10;
    const register unsigned short int GCSTAT = 9;
    sbit  GCSTAT_bit at I2CSTAT.B9;
    const register unsigned short int ADD10 = 8;
    sbit  ADD10_bit at I2CSTAT.B8;
    const register unsigned short int IWCOL = 7;
    sbit  IWCOL_bit at I2CSTAT.B7;
    const register unsigned short int I2COV = 6;
    sbit  I2COV_bit at I2CSTAT.B6;
    const register unsigned short int D_A = 5;
    sbit  D_A_bit at I2CSTAT.B5;
    const register unsigned short int P = 4;
    sbit  P_bit at I2CSTAT.B4;
    const register unsigned short int S = 3;
    sbit  S_bit at I2CSTAT.B3;
    const register unsigned short int R_W = 2;
    sbit  R_W_bit at I2CSTAT.B2;
    const register unsigned short int RBF = 1;
    sbit  RBF_bit at I2CSTAT.B1;
    const register unsigned short int TBF = 0;
    sbit  TBF_bit at I2CSTAT.B0;

    // I2CADD bits
    const register unsigned short int I2CADD_9 = 9;
    sbit  I2CADD_9_bit at I2CADD.B9;
    const register unsigned short int I2CADD_8 = 8;
    sbit  I2CADD_8_bit at I2CADD.B8;
    const register unsigned short int I2CADD_7 = 7;
    sbit  I2CADD_7_bit at I2CADD.B7;
    const register unsigned short int I2CADD_6 = 6;
    sbit  I2CADD_6_bit at I2CADD.B6;
    const register unsigned short int I2CADD_5 = 5;
    sbit  I2CADD_5_bit at I2CADD.B5;
    const register unsigned short int I2CADD_4 = 4;
    sbit  I2CADD_4_bit at I2CADD.B4;
    const register unsigned short int I2CADD_3 = 3;
    sbit  I2CADD_3_bit at I2CADD.B3;
    const register unsigned short int I2CADD_2 = 2;
    sbit  I2CADD_2_bit at I2CADD.B2;
    const register unsigned short int I2CADD_1 = 1;
    sbit  I2CADD_1_bit at I2CADD.B1;
    const register unsigned short int I2CADD_0 = 0;
    sbit  I2CADD_0_bit at I2CADD.B0;

    // U1MODE bits
    const register unsigned short int UARTEN = 15;
    sbit  UARTEN_bit at U1MODE.B15;
    sbit  UARTEN_U1MODE_bit at U1MODE.B15;
    const register unsigned short int USIDL = 13;
    sbit  USIDL_bit at U1MODE.B13;
    sbit  USIDL_U1MODE_bit at U1MODE.B13;
    const register unsigned short int ALTIO = 10;
    sbit  ALTIO_bit at U1MODE.B10;
    const register unsigned short int WAKE = 7;
    sbit  WAKE_bit at U1MODE.B7;
    sbit  WAKE_U1MODE_bit at U1MODE.B7;
    const register unsigned short int LPBACK = 6;
    sbit  LPBACK_bit at U1MODE.B6;
    sbit  LPBACK_U1MODE_bit at U1MODE.B6;
    const register unsigned short int ABAUD = 5;
    sbit  ABAUD_bit at U1MODE.B5;
    sbit  ABAUD_U1MODE_bit at U1MODE.B5;
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
    const register unsigned short int UTXISEL = 15;
    sbit  UTXISEL_bit at U1STA.B15;
    sbit  UTXISEL_U1STA_bit at U1STA.B15;
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
    sbit  WAKE_U2MODE_bit at U2MODE.B7;
    sbit  LPBACK_U2MODE_bit at U2MODE.B6;
    sbit  ABAUD_U2MODE_bit at U2MODE.B5;
    sbit  PDSEL_1_U2MODE_bit at U2MODE.B2;
    sbit  PDSEL_0_U2MODE_bit at U2MODE.B1;
    sbit  STSEL_U2MODE_bit at U2MODE.B0;

    // U2STA bits
    sbit  UTXISEL_U2STA_bit at U2STA.B15;
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
    const register unsigned short int SPISIDL = 13;
    sbit  SPISIDL_bit at SPI1STAT.B13;
    const register unsigned short int SPIROV = 6;
    sbit  SPIROV_bit at SPI1STAT.B6;
    const register unsigned short int SPITBF = 1;
    sbit  SPITBF_bit at SPI1STAT.B1;
    const register unsigned short int SPIRBF = 0;
    sbit  SPIRBF_bit at SPI1STAT.B0;

    // SPI1CON bits
    const register unsigned short int FRMEN = 14;
    sbit  FRMEN_bit at SPI1CON.B14;
    const register unsigned short int SPIFSD = 13;
    sbit  SPIFSD_bit at SPI1CON.B13;
    const register unsigned short int DISSDO = 11;
    sbit  DISSDO_bit at SPI1CON.B11;
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
    const register unsigned short int SPRE2 = 4;
    sbit  SPRE2_bit at SPI1CON.B4;
    const register unsigned short int SPRE1 = 3;
    sbit  SPRE1_bit at SPI1CON.B3;
    const register unsigned short int SPRE0 = 2;
    sbit  SPRE0_bit at SPI1CON.B2;
    const register unsigned short int PPRE1 = 1;
    sbit  PPRE1_bit at SPI1CON.B1;
    const register unsigned short int PPRE0 = 0;
    sbit  PPRE0_bit at SPI1CON.B0;

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

    // ADCBUF0 bits
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

    // ADCBUFA bits
    const register unsigned short int ADCBUFA_9 = 9;
    sbit  ADCBUFA_9_bit at ADCBUFA.B9;
    const register unsigned short int ADCBUFA_8 = 8;
    sbit  ADCBUFA_8_bit at ADCBUFA.B8;
    const register unsigned short int ADCBUFA_7 = 7;
    sbit  ADCBUFA_7_bit at ADCBUFA.B7;
    const register unsigned short int ADCBUFA_6 = 6;
    sbit  ADCBUFA_6_bit at ADCBUFA.B6;
    const register unsigned short int ADCBUFA_5 = 5;
    sbit  ADCBUFA_5_bit at ADCBUFA.B5;
    const register unsigned short int ADCBUFA_4 = 4;
    sbit  ADCBUFA_4_bit at ADCBUFA.B4;
    const register unsigned short int ADCBUFA_3 = 3;
    sbit  ADCBUFA_3_bit at ADCBUFA.B3;
    const register unsigned short int ADCBUFA_2 = 2;
    sbit  ADCBUFA_2_bit at ADCBUFA.B2;
    const register unsigned short int ADCBUFA_1 = 1;
    sbit  ADCBUFA_1_bit at ADCBUFA.B1;
    const register unsigned short int ADCBUFA_0 = 0;
    sbit  ADCBUFA_0_bit at ADCBUFA.B0;

    // ADCBUFB bits
    const register unsigned short int ADCBUFB_9 = 9;
    sbit  ADCBUFB_9_bit at ADCBUFB.B9;
    const register unsigned short int ADCBUFB_8 = 8;
    sbit  ADCBUFB_8_bit at ADCBUFB.B8;
    const register unsigned short int ADCBUFB_7 = 7;
    sbit  ADCBUFB_7_bit at ADCBUFB.B7;
    const register unsigned short int ADCBUFB_6 = 6;
    sbit  ADCBUFB_6_bit at ADCBUFB.B6;
    const register unsigned short int ADCBUFB_5 = 5;
    sbit  ADCBUFB_5_bit at ADCBUFB.B5;
    const register unsigned short int ADCBUFB_4 = 4;
    sbit  ADCBUFB_4_bit at ADCBUFB.B4;
    const register unsigned short int ADCBUFB_3 = 3;
    sbit  ADCBUFB_3_bit at ADCBUFB.B3;
    const register unsigned short int ADCBUFB_2 = 2;
    sbit  ADCBUFB_2_bit at ADCBUFB.B2;
    const register unsigned short int ADCBUFB_1 = 1;
    sbit  ADCBUFB_1_bit at ADCBUFB.B1;
    const register unsigned short int ADCBUFB_0 = 0;
    sbit  ADCBUFB_0_bit at ADCBUFB.B0;

    // ADCBUFC bits
    const register unsigned short int ADCBUFC_9 = 9;
    sbit  ADCBUFC_9_bit at ADCBUFC.B9;
    const register unsigned short int ADCBUFC_8 = 8;
    sbit  ADCBUFC_8_bit at ADCBUFC.B8;
    const register unsigned short int ADCBUFC_7 = 7;
    sbit  ADCBUFC_7_bit at ADCBUFC.B7;
    const register unsigned short int ADCBUFC_6 = 6;
    sbit  ADCBUFC_6_bit at ADCBUFC.B6;
    const register unsigned short int ADCBUFC_5 = 5;
    sbit  ADCBUFC_5_bit at ADCBUFC.B5;
    const register unsigned short int ADCBUFC_4 = 4;
    sbit  ADCBUFC_4_bit at ADCBUFC.B4;
    const register unsigned short int ADCBUFC_3 = 3;
    sbit  ADCBUFC_3_bit at ADCBUFC.B3;
    const register unsigned short int ADCBUFC_2 = 2;
    sbit  ADCBUFC_2_bit at ADCBUFC.B2;
    const register unsigned short int ADCBUFC_1 = 1;
    sbit  ADCBUFC_1_bit at ADCBUFC.B1;
    const register unsigned short int ADCBUFC_0 = 0;
    sbit  ADCBUFC_0_bit at ADCBUFC.B0;

    // ADCBUFD bits
    const register unsigned short int ADCBUFD_9 = 9;
    sbit  ADCBUFD_9_bit at ADCBUFD.B9;
    const register unsigned short int ADCBUFD_8 = 8;
    sbit  ADCBUFD_8_bit at ADCBUFD.B8;
    const register unsigned short int ADCBUFD_7 = 7;
    sbit  ADCBUFD_7_bit at ADCBUFD.B7;
    const register unsigned short int ADCBUFD_6 = 6;
    sbit  ADCBUFD_6_bit at ADCBUFD.B6;
    const register unsigned short int ADCBUFD_5 = 5;
    sbit  ADCBUFD_5_bit at ADCBUFD.B5;
    const register unsigned short int ADCBUFD_4 = 4;
    sbit  ADCBUFD_4_bit at ADCBUFD.B4;
    const register unsigned short int ADCBUFD_3 = 3;
    sbit  ADCBUFD_3_bit at ADCBUFD.B3;
    const register unsigned short int ADCBUFD_2 = 2;
    sbit  ADCBUFD_2_bit at ADCBUFD.B2;
    const register unsigned short int ADCBUFD_1 = 1;
    sbit  ADCBUFD_1_bit at ADCBUFD.B1;
    const register unsigned short int ADCBUFD_0 = 0;
    sbit  ADCBUFD_0_bit at ADCBUFD.B0;

    // ADCBUFE bits
    const register unsigned short int ADCBUFE_9 = 9;
    sbit  ADCBUFE_9_bit at ADCBUFE.B9;
    const register unsigned short int ADCBUFE_8 = 8;
    sbit  ADCBUFE_8_bit at ADCBUFE.B8;
    const register unsigned short int ADCBUFE_7 = 7;
    sbit  ADCBUFE_7_bit at ADCBUFE.B7;
    const register unsigned short int ADCBUFE_6 = 6;
    sbit  ADCBUFE_6_bit at ADCBUFE.B6;
    const register unsigned short int ADCBUFE_5 = 5;
    sbit  ADCBUFE_5_bit at ADCBUFE.B5;
    const register unsigned short int ADCBUFE_4 = 4;
    sbit  ADCBUFE_4_bit at ADCBUFE.B4;
    const register unsigned short int ADCBUFE_3 = 3;
    sbit  ADCBUFE_3_bit at ADCBUFE.B3;
    const register unsigned short int ADCBUFE_2 = 2;
    sbit  ADCBUFE_2_bit at ADCBUFE.B2;
    const register unsigned short int ADCBUFE_1 = 1;
    sbit  ADCBUFE_1_bit at ADCBUFE.B1;
    const register unsigned short int ADCBUFE_0 = 0;
    sbit  ADCBUFE_0_bit at ADCBUFE.B0;

    // ADCBUFF bits
    const register unsigned short int ADCBUFF_9 = 9;
    sbit  ADCBUFF_9_bit at ADCBUFF.B9;
    const register unsigned short int ADCBUFF_8 = 8;
    sbit  ADCBUFF_8_bit at ADCBUFF.B8;
    const register unsigned short int ADCBUFF_7 = 7;
    sbit  ADCBUFF_7_bit at ADCBUFF.B7;
    const register unsigned short int ADCBUFF_6 = 6;
    sbit  ADCBUFF_6_bit at ADCBUFF.B6;
    const register unsigned short int ADCBUFF_5 = 5;
    sbit  ADCBUFF_5_bit at ADCBUFF.B5;
    const register unsigned short int ADCBUFF_4 = 4;
    sbit  ADCBUFF_4_bit at ADCBUFF.B4;
    const register unsigned short int ADCBUFF_3 = 3;
    sbit  ADCBUFF_3_bit at ADCBUFF.B3;
    const register unsigned short int ADCBUFF_2 = 2;
    sbit  ADCBUFF_2_bit at ADCBUFF.B2;
    const register unsigned short int ADCBUFF_1 = 1;
    sbit  ADCBUFF_1_bit at ADCBUFF.B1;
    const register unsigned short int ADCBUFF_0 = 0;
    sbit  ADCBUFF_0_bit at ADCBUFF.B0;

    // ADCON1 bits
    const register unsigned short int ADON = 15;
    sbit  ADON_bit at ADCON1.B15;
    const register unsigned short int ADSIDL = 13;
    sbit  ADSIDL_bit at ADCON1.B13;
    const register unsigned short int FORM_1 = 9;
    sbit  FORM_1_bit at ADCON1.B9;
    const register unsigned short int FORM_0 = 8;
    sbit  FORM_0_bit at ADCON1.B8;
    const register unsigned short int SSRC_2 = 7;
    sbit  SSRC_2_bit at ADCON1.B7;
    const register unsigned short int SSRC_1 = 6;
    sbit  SSRC_1_bit at ADCON1.B6;
    const register unsigned short int SSRC_0 = 5;
    sbit  SSRC_0_bit at ADCON1.B5;
    const register unsigned short int SIMSAM = 3;
    sbit  SIMSAM_bit at ADCON1.B3;
    const register unsigned short int ASAM = 2;
    sbit  ASAM_bit at ADCON1.B2;
    const register unsigned short int SAMP = 1;
    sbit  SAMP_bit at ADCON1.B1;
    const register unsigned short int DONE = 0;
    sbit  DONE_bit at ADCON1.B0;

    // ADCON2 bits
    const register unsigned short int VCFG_2 = 15;
    sbit  VCFG_2_bit at ADCON2.B15;
    const register unsigned short int VCFG_1 = 14;
    sbit  VCFG_1_bit at ADCON2.B14;
    const register unsigned short int VCFG_0 = 13;
    sbit  VCFG_0_bit at ADCON2.B13;
    const register unsigned short int CSCNA = 10;
    sbit  CSCNA_bit at ADCON2.B10;
    const register unsigned short int CHPS_1 = 9;
    sbit  CHPS_1_bit at ADCON2.B9;
    const register unsigned short int CHPS_0 = 8;
    sbit  CHPS_0_bit at ADCON2.B8;
    const register unsigned short int BUFS = 7;
    sbit  BUFS_bit at ADCON2.B7;
    const register unsigned short int SMPI_3 = 5;
    sbit  SMPI_3_bit at ADCON2.B5;
    const register unsigned short int SMPI_2 = 4;
    sbit  SMPI_2_bit at ADCON2.B4;
    const register unsigned short int SMPI_1 = 3;
    sbit  SMPI_1_bit at ADCON2.B3;
    const register unsigned short int SMPI_0 = 2;
    sbit  SMPI_0_bit at ADCON2.B2;
    const register unsigned short int BUFM = 1;
    sbit  BUFM_bit at ADCON2.B1;
    const register unsigned short int ALTS = 0;
    sbit  ALTS_bit at ADCON2.B0;

    // ADCON3 bits
    const register unsigned short int SAMC_4 = 12;
    sbit  SAMC_4_bit at ADCON3.B12;
    const register unsigned short int SAMC_3 = 11;
    sbit  SAMC_3_bit at ADCON3.B11;
    const register unsigned short int SAMC_2 = 10;
    sbit  SAMC_2_bit at ADCON3.B10;
    const register unsigned short int SAMC_1 = 9;
    sbit  SAMC_1_bit at ADCON3.B9;
    const register unsigned short int SAMC_0 = 8;
    sbit  SAMC_0_bit at ADCON3.B8;
    const register unsigned short int ADRC = 7;
    sbit  ADRC_bit at ADCON3.B7;
    const register unsigned short int ADCS_5 = 5;
    sbit  ADCS_5_bit at ADCON3.B5;
    const register unsigned short int ADCS_4 = 4;
    sbit  ADCS_4_bit at ADCON3.B4;
    const register unsigned short int ADCS_3 = 3;
    sbit  ADCS_3_bit at ADCON3.B3;
    const register unsigned short int ADCS_2 = 2;
    sbit  ADCS_2_bit at ADCON3.B2;
    const register unsigned short int ADCS_1 = 1;
    sbit  ADCS_1_bit at ADCON3.B1;
    const register unsigned short int ADCS_0 = 0;
    sbit  ADCS_0_bit at ADCON3.B0;

    // ADCHS bits
    const register unsigned short int CH123NB_1 = 15;
    sbit  CH123NB_1_bit at ADCHS.B15;
    const register unsigned short int CH123NB_0 = 14;
    sbit  CH123NB_0_bit at ADCHS.B14;
    const register unsigned short int CH123SB = 13;
    sbit  CH123SB_bit at ADCHS.B13;
    const register unsigned short int CH0NB = 12;
    sbit  CH0NB_bit at ADCHS.B12;
    const register unsigned short int CH0SB_3 = 11;
    sbit  CH0SB_3_bit at ADCHS.B11;
    const register unsigned short int CH0SB_2 = 10;
    sbit  CH0SB_2_bit at ADCHS.B10;
    const register unsigned short int CH0SB_1 = 9;
    sbit  CH0SB_1_bit at ADCHS.B9;
    const register unsigned short int CH0SB_0 = 8;
    sbit  CH0SB_0_bit at ADCHS.B8;
    const register unsigned short int CH123NA_1 = 7;
    sbit  CH123NA_1_bit at ADCHS.B7;
    const register unsigned short int CH123NA_0 = 6;
    sbit  CH123NA_0_bit at ADCHS.B6;
    const register unsigned short int CH123SA = 5;
    sbit  CH123SA_bit at ADCHS.B5;
    const register unsigned short int CH0NA = 4;
    sbit  CH0NA_bit at ADCHS.B4;
    const register unsigned short int CH0SA_3 = 3;
    sbit  CH0SA_3_bit at ADCHS.B3;
    const register unsigned short int CH0SA_2 = 2;
    sbit  CH0SA_2_bit at ADCHS.B2;
    const register unsigned short int CH0SA_1 = 1;
    sbit  CH0SA_1_bit at ADCHS.B1;
    const register unsigned short int CH0SA_0 = 0;
    sbit  CH0SA_0_bit at ADCHS.B0;

    // ADPCFG bits
    const register unsigned short int PCFG_8 = 8;
    sbit  PCFG_8_bit at ADPCFG.B8;
    const register unsigned short int PCFG_7 = 7;
    sbit  PCFG_7_bit at ADPCFG.B7;
    const register unsigned short int PCFG_6 = 6;
    sbit  PCFG_6_bit at ADPCFG.B6;
    const register unsigned short int PCFG_5 = 5;
    sbit  PCFG_5_bit at ADPCFG.B5;
    const register unsigned short int PCFG_4 = 4;
    sbit  PCFG_4_bit at ADPCFG.B4;
    const register unsigned short int PCFG_3 = 3;
    sbit  PCFG_3_bit at ADPCFG.B3;
    const register unsigned short int PCFG_2 = 2;
    sbit  PCFG_2_bit at ADPCFG.B2;
    const register unsigned short int PCFG_1 = 1;
    sbit  PCFG_1_bit at ADPCFG.B1;
    const register unsigned short int PCFG_0 = 0;
    sbit  PCFG_0_bit at ADPCFG.B0;

    // ADCSSL bits
    const register unsigned short int CSSL_8 = 8;
    sbit  CSSL_8_bit at ADCSSL.B8;
    const register unsigned short int CSSL_7 = 7;
    sbit  CSSL_7_bit at ADCSSL.B7;
    const register unsigned short int CSSL_6 = 6;
    sbit  CSSL_6_bit at ADCSSL.B6;
    const register unsigned short int CSSL_5 = 5;
    sbit  CSSL_5_bit at ADCSSL.B5;
    const register unsigned short int CSSL_4 = 4;
    sbit  CSSL_4_bit at ADCSSL.B4;
    const register unsigned short int CSSL_3 = 3;
    sbit  CSSL_3_bit at ADCSSL.B3;
    const register unsigned short int CSSL_2 = 2;
    sbit  CSSL_2_bit at ADCSSL.B2;
    const register unsigned short int CSSL_1 = 1;
    sbit  CSSL_1_bit at ADCSSL.B1;
    const register unsigned short int CSSL_0 = 0;
    sbit  CSSL_0_bit at ADCSSL.B0;

    // TRISB bits
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

    // PORTC bits
    const register unsigned short int RC15 = 15;
    sbit  RC15_bit at PORTC.B15;
    const register unsigned short int RC14 = 14;
    sbit  RC14_bit at PORTC.B14;
    const register unsigned short int RC13 = 13;
    sbit  RC13_bit at PORTC.B13;

    // LATC bits
    const register unsigned short int LATC15 = 15;
    sbit  LATC15_bit at LATC.B15;
    const register unsigned short int LATC14 = 14;
    sbit  LATC14_bit at LATC.B14;
    const register unsigned short int LATC13 = 13;
    sbit  LATC13_bit at LATC.B13;

    // TRISD bits
    const register unsigned short int TRISD3 = 3;
    sbit  TRISD3_bit at TRISD.B3;
    const register unsigned short int TRISD2 = 2;
    sbit  TRISD2_bit at TRISD.B2;
    const register unsigned short int TRISD1 = 1;
    sbit  TRISD1_bit at TRISD.B1;
    const register unsigned short int TRISD0 = 0;
    sbit  TRISD0_bit at TRISD.B0;

    // PORTD bits
    const register unsigned short int RD3 = 3;
    sbit  RD3_bit at PORTD.B3;
    const register unsigned short int RD2 = 2;
    sbit  RD2_bit at PORTD.B2;
    const register unsigned short int RD1 = 1;
    sbit  RD1_bit at PORTD.B1;
    const register unsigned short int RD0 = 0;
    sbit  RD0_bit at PORTD.B0;

    // LATD bits
    const register unsigned short int LATD3 = 3;
    sbit  LATD3_bit at LATD.B3;
    const register unsigned short int LATD2 = 2;
    sbit  LATD2_bit at LATD.B2;
    const register unsigned short int LATD1 = 1;
    sbit  LATD1_bit at LATD.B1;
    const register unsigned short int LATD0 = 0;
    sbit  LATD0_bit at LATD.B0;

    // TRISE bits
    const register unsigned short int TRISE8 = 8;
    sbit  TRISE8_bit at TRISE.B8;
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
    const register unsigned short int RE8 = 8;
    sbit  RE8_bit at PORTE.B8;
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
    const register unsigned short int LATE8 = 8;
    sbit  LATE8_bit at LATE.B8;
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

    // RCON bits
    const register unsigned short int TRAPR = 15;
    sbit  TRAPR_bit at RCON.B15;
    const register unsigned short int IOPUWR = 14;
    sbit  IOPUWR_bit at RCON.B14;
    const register unsigned short int BGST = 13;
    sbit  BGST_bit at RCON.B13;
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
    const register unsigned short int POST_1 = 7;
    sbit  POST_1_bit at OSCCON.B7;
    const register unsigned short int POST_0 = 6;
    sbit  POST_0_bit at OSCCON.B6;
    const register unsigned short int LOCK_ = 5;
    sbit  LOCK_bit at OSCCON.B5;
    const register unsigned short int CF = 3;
    sbit  CF_bit at OSCCON.B3;
    const register unsigned short int LPOSCEN = 1;
    sbit  LPOSCEN_bit at OSCCON.B1;
    const register unsigned short int OSWEN = 0;
    sbit  OSWEN_bit at OSCCON.B0;

    // OSCTUN bits
    const register unsigned short int TUN_3 = 3;
    sbit  TUN_3_bit at OSCTUN.B3;
    const register unsigned short int TUN_2 = 2;
    sbit  TUN_2_bit at OSCTUN.B2;
    const register unsigned short int TUN_1 = 1;
    sbit  TUN_1_bit at OSCTUN.B1;
    const register unsigned short int TUN_0 = 0;
    sbit  TUN_0_bit at OSCTUN.B0;

    // NVMCON bits
    const register unsigned short int WR = 15;
    sbit  WR_bit at NVMCON.B15;
    const register unsigned short int WREN = 14;
    sbit  WREN_bit at NVMCON.B14;
    const register unsigned short int WRERR = 13;
    sbit  WRERR_bit at NVMCON.B13;
    const register unsigned short int TWRI = 8;
    sbit  TWRI_bit at NVMCON.B8;
    const register unsigned short int PROGOP_6 = 6;
    sbit  PROGOP_6_bit at NVMCON.B6;
    const register unsigned short int PROGOP_5 = 5;
    sbit  PROGOP_5_bit at NVMCON.B5;
    const register unsigned short int PROGOP_4 = 4;
    sbit  PROGOP_4_bit at NVMCON.B4;
    const register unsigned short int PROGOP_3 = 3;
    sbit  PROGOP_3_bit at NVMCON.B3;
    const register unsigned short int PROGOP_2 = 2;
    sbit  PROGOP_2_bit at NVMCON.B2;
    const register unsigned short int PROGOP_1 = 1;
    sbit  PROGOP_1_bit at NVMCON.B1;
    const register unsigned short int PROGOP_0 = 0;
    sbit  PROGOP_0_bit at NVMCON.B0;

    // NVMADR bits
    const register unsigned short int NVMADR_15 = 15;
    sbit  NVMADR_15_bit at NVMADR.B15;
    const register unsigned short int NVMADR_14 = 14;
    sbit  NVMADR_14_bit at NVMADR.B14;
    const register unsigned short int NVMADR_13 = 13;
    sbit  NVMADR_13_bit at NVMADR.B13;
    const register unsigned short int NVMADR_12 = 12;
    sbit  NVMADR_12_bit at NVMADR.B12;
    const register unsigned short int NVMADR_11 = 11;
    sbit  NVMADR_11_bit at NVMADR.B11;
    const register unsigned short int NVMADR_10 = 10;
    sbit  NVMADR_10_bit at NVMADR.B10;
    const register unsigned short int NVMADR_9 = 9;
    sbit  NVMADR_9_bit at NVMADR.B9;
    const register unsigned short int NVMADR_8 = 8;
    sbit  NVMADR_8_bit at NVMADR.B8;
    const register unsigned short int NVMADR_7 = 7;
    sbit  NVMADR_7_bit at NVMADR.B7;
    const register unsigned short int NVMADR_6 = 6;
    sbit  NVMADR_6_bit at NVMADR.B6;
    const register unsigned short int NVMADR_5 = 5;
    sbit  NVMADR_5_bit at NVMADR.B5;
    const register unsigned short int NVMADR_4 = 4;
    sbit  NVMADR_4_bit at NVMADR.B4;
    const register unsigned short int NVMADR_3 = 3;
    sbit  NVMADR_3_bit at NVMADR.B3;
    const register unsigned short int NVMADR_2 = 2;
    sbit  NVMADR_2_bit at NVMADR.B2;
    const register unsigned short int NVMADR_1 = 1;
    sbit  NVMADR_1_bit at NVMADR.B1;
    const register unsigned short int NVMADR_0 = 0;
    sbit  NVMADR_0_bit at NVMADR.B0;

    // NVMADRU bits
    const register unsigned short int NVMADR_23 = 7;
    sbit  NVMADR_23_bit at NVMADRU.B7;
    const register unsigned short int NVMADR_22 = 6;
    sbit  NVMADR_22_bit at NVMADRU.B6;
    const register unsigned short int NVMADR_21 = 5;
    sbit  NVMADR_21_bit at NVMADRU.B5;
    const register unsigned short int NVMADR_20 = 4;
    sbit  NVMADR_20_bit at NVMADRU.B4;
    const register unsigned short int NVMADR_19 = 3;
    sbit  NVMADR_19_bit at NVMADRU.B3;
    const register unsigned short int NVMADR_18 = 2;
    sbit  NVMADR_18_bit at NVMADRU.B2;
    const register unsigned short int NVMADR_17 = 1;
    sbit  NVMADR_17_bit at NVMADRU.B1;
    const register unsigned short int NVMADR_16 = 0;
    sbit  NVMADR_16_bit at NVMADRU.B0;

    // NVMKEY bits
    const register unsigned short int KEY_7 = 7;
    sbit  KEY_7_bit at NVMKEY.B7;
    const register unsigned short int KEY_6 = 6;
    sbit  KEY_6_bit at NVMKEY.B6;
    const register unsigned short int KEY_5 = 5;
    sbit  KEY_5_bit at NVMKEY.B5;
    const register unsigned short int KEY_4 = 4;
    sbit  KEY_4_bit at NVMKEY.B4;
    const register unsigned short int KEY_3 = 3;
    sbit  KEY_3_bit at NVMKEY.B3;
    const register unsigned short int KEY_2 = 2;
    sbit  KEY_2_bit at NVMKEY.B2;
    const register unsigned short int KEY_1 = 1;
    sbit  KEY_1_bit at NVMKEY.B1;
    const register unsigned short int KEY_0 = 0;
    sbit  KEY_0_bit at NVMKEY.B0;

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
    const register unsigned short int QEIMD = 10;
    sbit  QEIMD_bit at PMD1.B10;
    const register unsigned short int PWMMD = 9;
    sbit  PWMMD_bit at PMD1.B9;
    const register unsigned short int I2CMD = 7;
    sbit  I2CMD_bit at PMD1.B7;
    const register unsigned short int U2MD = 6;
    sbit  U2MD_bit at PMD1.B6;
    const register unsigned short int U1MD = 5;
    sbit  U1MD_bit at PMD1.B5;
    const register unsigned short int SPI1MD = 3;
    sbit  SPI1MD_bit at PMD1.B3;
    const register unsigned short int ADCMD = 0;
    sbit  ADCMD_bit at PMD1.B0;

    // PMD2 bits
    const register unsigned short int IC8MD = 15;
    sbit  IC8MD_bit at PMD2.B15;
    const register unsigned short int IC7MD = 14;
    sbit  IC7MD_bit at PMD2.B14;
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

    // Start of structures implementation for backward compatibility

// backward compatibility for PCHBITS
    typedef struct tagPCHBITS {
      unsigned PCH:7;
} typePCHBITS;
sfr volatile typePCHBITS PCHbits absolute 0x030;

// backward compatibility for DCOUNTBITS
    typedef struct tagDCOUNTBITS {
      unsigned DCOUNT:14;
} typeDCOUNTBITS;
sfr volatile typeDCOUNTBITS DCOUNTbits absolute 0x038;

// backward compatibility for DOSTARTHBITS
    typedef struct tagDOSTARTHBITS {
      unsigned DOSTARTH:7;
} typeDOSTARTHBITS;
sfr volatile typeDOSTARTHBITS DOSTARTHbits absolute 0x03C;

// backward compatibility for DOENDHBITS
    typedef struct tagDOENDHBITS {
      unsigned DOENDH:7;
} typeDOENDHBITS;
sfr volatile typeDOENDHBITS DOENDHbits absolute 0x040;

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

// backward compatibility for DISICNTBITS
    typedef struct tagDISICNTBITS {
      unsigned DISICNT:14;
} typeDISICNTBITS;
sfr volatile typeDISICNTBITS DISICNTbits absolute 0x052;

// backward compatibility for INTCON1BITS
    typedef struct tagINTCON1BITS {
      unsigned :1;
      unsigned OSCFAIL:1;
      unsigned STKERR:1;
      unsigned ADDRERR:1;
      unsigned MATHERR:1;
      unsigned :3;
      unsigned COVTE:1;
      unsigned OVBTE:1;
      unsigned OVATE:1;
      unsigned :4;
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
      unsigned IC2IF:1;
      unsigned OC2IF:1;
      unsigned T2IF:1;
      unsigned T3IF:1;
      unsigned SPI1IF:1;
      unsigned U1RXIF:1;
      unsigned U1TXIF:1;
      unsigned ADIF:1;
      unsigned NVMIF:1;
      unsigned SI2CIF:1;
      unsigned MI2CIF:1;
      unsigned CNIF:1;
} typeIFS0BITS;
sfr volatile typeIFS0BITS IFS0bits absolute 0x084;

// backward compatibility for IFS1BITS
    typedef struct tagIFS1BITS {
      unsigned INT1IF:1;
      unsigned IC7IF:1;
      unsigned IC8IF:1;
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
      unsigned :7;
      unsigned PWMIF:1;
      unsigned QEIIF:1;
      unsigned :2;
      unsigned FLTAIF:1;
} typeIFS2BITS;
sfr volatile typeIFS2BITS IFS2bits absolute 0x088;

// backward compatibility for IEC0BITS
    typedef struct tagIEC0BITS {
      unsigned INT0IE:1;
      unsigned IC1IE:1;
      unsigned OC1IE:1;
      unsigned T1IE:1;
      unsigned IC2IE:1;
      unsigned OC2IE:1;
      unsigned T2IE:1;
      unsigned T3IE:1;
      unsigned SPI1IE:1;
      unsigned U1RXIE:1;
      unsigned U1TXIE:1;
      unsigned ADIE:1;
      unsigned NVMIE:1;
      unsigned SI2CIE:1;
      unsigned MI2CIE:1;
      unsigned CNIE:1;
} typeIEC0BITS;
sfr volatile typeIEC0BITS IEC0bits absolute 0x08C;

// backward compatibility for IEC1BITS
    typedef struct tagIEC1BITS {
      unsigned INT1IE:1;
      unsigned IC7IE:1;
      unsigned IC8IE:1;
      unsigned OC3IE:1;
      unsigned OC4IE:1;
      unsigned T4IE:1;
      unsigned T5IE:1;
      unsigned INT2IE:1;
      unsigned U2RXIE:1;
      unsigned U2TXIE:1;
} typeIEC1BITS;
sfr volatile typeIEC1BITS IEC1bits absolute 0x08E;

// backward compatibility for IEC2BITS
    typedef struct tagIEC2BITS {
      unsigned :7;
      unsigned PWMIE:1;
      unsigned QEIIE:1;
      unsigned :2;
      unsigned FLTAIE:1;
} typeIEC2BITS;
sfr volatile typeIEC2BITS IEC2bits absolute 0x090;

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
sfr volatile typeIPC0BITS IPC0bits absolute 0x094;

// backward compatibility for IPC1BITS
    typedef struct tagIPC1BITS {
      union {
        struct {
          unsigned IC2IP:3;
          unsigned :1;
          unsigned OC2IP:3;
          unsigned :1;
          unsigned T2IP:3;
          unsigned :1;
          unsigned T3IP:3;
        };
        struct {
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
          unsigned :1;
          unsigned T3IP0:1;
          unsigned T3IP1:1;
          unsigned T3IP2:1;
        };
      };
} typeIPC1BITS;
sfr volatile typeIPC1BITS IPC1bits absolute 0x096;

// backward compatibility for IPC2BITS
    typedef struct tagIPC2BITS {
      union {
        struct {
          unsigned SPI1IP:3;
          unsigned :1;
          unsigned U1RXIP:3;
          unsigned :1;
          unsigned U1TXIP:3;
          unsigned :1;
          unsigned ADIP:3;
        };
        struct {
          unsigned SPI1IP0:1;
          unsigned SPI1IP1:1;
          unsigned SPI1IP2:1;
          unsigned :1;
          unsigned U1RXIP0:1;
          unsigned U1RXIP1:1;
          unsigned U1RXIP2:1;
          unsigned :1;
          unsigned U1TXIP0:1;
          unsigned U1TXIP1:1;
          unsigned U1TXIP2:1;
          unsigned :1;
          unsigned ADIP0:1;
          unsigned ADIP1:1;
          unsigned ADIP2:1;
        };
      };
} typeIPC2BITS;
sfr volatile typeIPC2BITS IPC2bits absolute 0x098;

// backward compatibility for IPC3BITS
    typedef struct tagIPC3BITS {
      union {
        struct {
          unsigned NVMIP:3;
          unsigned :1;
          unsigned SI2CIP:3;
          unsigned :1;
          unsigned MI2CIP:3;
          unsigned :1;
          unsigned CNIP:3;
        };
        struct {
          unsigned NVMIP0:1;
          unsigned NVMIP1:1;
          unsigned NVMIP2:1;
          unsigned :1;
          unsigned SI2CIP0:1;
          unsigned SI2CIP1:1;
          unsigned SI2CIP2:1;
          unsigned :1;
          unsigned MI2CIP0:1;
          unsigned MI2CIP1:1;
          unsigned MI2CIP2:1;
          unsigned :1;
          unsigned CNIP0:1;
          unsigned CNIP1:1;
          unsigned CNIP2:1;
        };
      };
} typeIPC3BITS;
sfr volatile typeIPC3BITS IPC3bits absolute 0x09A;

// backward compatibility for IPC4BITS
    typedef struct tagIPC4BITS {
      union {
        struct {
          unsigned INT1IP:3;
          unsigned :1;
          unsigned IC7IP:3;
          unsigned :1;
          unsigned IC8IP:3;
          unsigned :1;
          unsigned OC3IP:3;
        };
        struct {
          unsigned INT1IP0:1;
          unsigned INT1IP1:1;
          unsigned INT1IP2:1;
          unsigned :1;
          unsigned IC7IP0:1;
          unsigned IC7IP1:1;
          unsigned IC7IP2:1;
          unsigned :1;
          unsigned IC8IP0:1;
          unsigned IC8IP1:1;
          unsigned IC8IP2:1;
          unsigned :1;
          unsigned OC3IP0:1;
          unsigned OC3IP1:1;
          unsigned OC3IP2:1;
        };
      };
} typeIPC4BITS;
sfr volatile typeIPC4BITS IPC4bits absolute 0x09C;

// backward compatibility for IPC5BITS
    typedef struct tagIPC5BITS {
      union {
        struct {
          unsigned OC4IP:3;
          unsigned :1;
          unsigned T4IP:3;
          unsigned :1;
          unsigned T5IP:3;
          unsigned :1;
          unsigned INT2IP:3;
        };
        struct {
          unsigned OC4IP0:1;
          unsigned OC4IP1:1;
          unsigned OC4IP2:1;
          unsigned :1;
          unsigned T4IP0:1;
          unsigned T4IP1:1;
          unsigned T4IP2:1;
          unsigned :1;
          unsigned T5IP0:1;
          unsigned T5IP1:1;
          unsigned T5IP2:1;
          unsigned :1;
          unsigned INT2IP0:1;
          unsigned INT2IP1:1;
          unsigned INT2IP2:1;
        };
      };
} typeIPC5BITS;
sfr volatile typeIPC5BITS IPC5bits absolute 0x09E;

// backward compatibility for IPC6BITS
    typedef struct tagIPC6BITS {
      union {
        struct {
          unsigned U2RXIP:3;
          unsigned :1;
          unsigned U2TXIP:3;
        };
        struct {
          unsigned U2RXIP0:1;
          unsigned U2RXIP1:1;
          unsigned U2RXIP2:1;
          unsigned :1;
          unsigned U2TXIP0:1;
          unsigned U2TXIP1:1;
          unsigned U2TXIP2:1;
        };
      };
} typeIPC6BITS;
sfr volatile typeIPC6BITS IPC6bits absolute 0x0A0;

// backward compatibility for IPC9BITS
    typedef struct tagIPC9BITS {
      union {
        struct {
          unsigned :12;
          unsigned PWMIP:3;
        };
        struct {
          unsigned :12;
          unsigned PWMIP0:1;
          unsigned PWMIP1:1;
          unsigned PWMIP2:1;
        };
      };
} typeIPC9BITS;
sfr volatile typeIPC9BITS IPC9bits absolute 0x0A6;

// backward compatibility for IPC10BITS
    typedef struct tagIPC10BITS {
      union {
        struct {
          unsigned QEIIP:3;
          unsigned :9;
          unsigned FLTAIP:3;
        };
        struct {
          unsigned QEIIP0:1;
          unsigned QEIIP1:1;
          unsigned QEIIP2:1;
          unsigned :9;
          unsigned FLTAIP0:1;
          unsigned FLTAIP1:1;
          unsigned FLTAIP2:1;
        };
      };
} typeIPC10BITS;
sfr volatile typeIPC10BITS IPC10bits absolute 0x0A8;

// backward compatibility for INTTREGBITS
    typedef struct tagINTTREGBITS {
      union {
        struct {
          unsigned VECNUM:6;
          unsigned :2;
          unsigned ILR:4;
          unsigned :1;
          unsigned VHOLD:1;
          unsigned TMODE:1;
          unsigned IRQTOCPU:1;
        };
        struct {
          unsigned VECNUM0:1;
          unsigned VECNUM1:1;
          unsigned VECNUM2:1;
          unsigned VECNUM3:1;
          unsigned VECNUM4:1;
          unsigned VECNUM5:1;
          unsigned :2;
          unsigned ILR0:1;
          unsigned ILR1:1;
          unsigned ILR2:1;
          unsigned ILR3:1;
        };
      };
} typeINTTREGBITS;
sfr volatile typeINTTREGBITS INTTREGbits absolute 0x0B0;

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
} typeCNEN1BITS;
sfr volatile typeCNEN1BITS CNEN1bits absolute 0x0C0;

// backward compatibility for CNEN2BITS
    typedef struct tagCNEN2BITS {
      unsigned :1;
      unsigned CN17IE:1;
      unsigned CN18IE:1;
} typeCNEN2BITS;
sfr volatile typeCNEN2BITS CNEN2bits absolute 0x0C2;

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
} typeCNPU1BITS;
sfr volatile typeCNPU1BITS CNPU1bits absolute 0x0C4;

// backward compatibility for CNPU2BITS
    typedef struct tagCNPU2BITS {
      unsigned :1;
      unsigned CN17PUE:1;
      unsigned CN18PUE:1;
} typeCNPU2BITS;
sfr volatile typeCNPU2BITS CNPU2bits absolute 0x0C6;

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

// backward compatibility for QEICONBITS
    typedef struct tagQEICONBITS {
      union {
        struct {
          unsigned UPDN_SRC:1;
          unsigned TQCS:1;
          unsigned POSRES:1;
          unsigned TQCKPS0:1;
          unsigned TQCKPS1:1;
          unsigned TQGATE:1;
          unsigned PCDOUT:1;
          unsigned SWPAB:1;
          unsigned QEIM0:1;
          unsigned QEIM1:1;
          unsigned QEIM2:1;
          unsigned UPDN:1;
          unsigned INDX:1;
          unsigned QEISIDL:1;
          unsigned :1;
          unsigned CNTERR:1;
        };
        struct {
          unsigned :3;
          unsigned TQCKPS:2;
          unsigned :3;
          unsigned QEIM:3;
        };
      };
} typeQEICONBITS;
sfr volatile typeQEICONBITS QEICONbits absolute 0x122;

// backward compatibility for DFLTCONBITS
    typedef struct tagDFLTCONBITS {
      union {
        struct {
          unsigned :4;
          unsigned QECK0:1;
          unsigned QECK1:1;
          unsigned QECK2:1;
          unsigned QEOUT:1;
          unsigned CEID:1;
          unsigned IMV0:1;
          unsigned IMV1:1;
        };
        struct {
          unsigned :4;
          unsigned QECK:3;
          unsigned :2;
          unsigned IMV:2;
        };
      };
} typeDFLTCONBITS;
sfr volatile typeDFLTCONBITS DFLTCONbits absolute 0x124;

// backward compatibility for IC
    typedef struct tagIC {
            unsigned int icxbuf;
            unsigned int icxcon;
} typeIC;
sfr volatile typeIC IC1 absolute 0x140;
sfr volatile typeIC IC2 absolute 0x144;
sfr volatile typeIC IC7 absolute 0x158;
sfr volatile typeIC IC8 absolute 0x15C;

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

// backward compatibility for IC7CONBITS
    typedef struct tagIC7CONBITS {
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
} typeIC7CONBITS;
sfr volatile typeIC7CONBITS IC7CONbits absolute 0x15A;

// backward compatibility for IC8CONBITS
    typedef struct tagIC8CONBITS {
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
} typeIC8CONBITS;
sfr volatile typeIC8CONBITS IC8CONbits absolute 0x15E;

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

// backward compatibility for PTCONBITS
    typedef struct tagPTCONBITS {
      union {
        struct {
          unsigned PTMOD:2;
          unsigned PTCKPS:2;
          unsigned PTOPS:4;
          unsigned :5;
          unsigned PTSIDL:1;
          unsigned :1;
          unsigned PTEN:1;
        };
        struct {
          unsigned PTMOD0:1;
          unsigned PTMOD1:1;
          unsigned PTCKPS0:1;
          unsigned PTCKPS1:1;
          unsigned PTOPS0:1;
          unsigned PTOPS1:1;
          unsigned PTOPS2:1;
          unsigned PTOPS3:1;
        };
      };
} typePTCONBITS;
sfr volatile typePTCONBITS PTCONbits absolute 0x1C0;

// backward compatibility for PTMRBITS
    typedef struct tagPTMRBITS {
      unsigned PTMR:15;
      unsigned PTDIR:1;
} typePTMRBITS;
sfr volatile typePTMRBITS PTMRbits absolute 0x1C2;

// backward compatibility for PTPERBITS
    typedef struct tagPTPERBITS {
      unsigned PTPER:15;
} typePTPERBITS;
sfr volatile typePTPERBITS PTPERbits absolute 0x1C4;

// backward compatibility for SEVTCMPBITS
    typedef struct tagSEVTCMPBITS {
      unsigned SEVTCMP:15;
      unsigned SEVTDIR:1;
} typeSEVTCMPBITS;
sfr volatile typeSEVTCMPBITS SEVTCMPbits absolute 0x1C6;

// backward compatibility for PWMCON1BITS
    typedef struct tagPWMCON1BITS {
      union {
        struct {
          unsigned PEN1L:1;
          unsigned PEN2L:1;
          unsigned PEN3L:1;
          unsigned :1;
          unsigned PEN1H:1;
          unsigned PEN2H:1;
          unsigned PEN3H:1;
          unsigned :1;
          unsigned PTMOD1:1;
          unsigned PTMOD2:1;
          unsigned PTMOD3:1;
        };
        struct {
          unsigned :8;
          unsigned PMOD1:1;
          unsigned PMOD2:1;
          unsigned PMOD3:1;
        };
      };
} typePWMCON1BITS;
sfr volatile typePWMCON1BITS PWMCON1bits absolute 0x1C8;

// backward compatibility for PWMCON2BITS
    typedef struct tagPWMCON2BITS {
      union {
        struct {
          unsigned UDIS:1;
          unsigned OSYNC:1;
          unsigned IUE:1;
          unsigned :5;
          unsigned SEVOPS:4;
        };
        struct {
          unsigned :8;
          unsigned SEVOPS0:1;
          unsigned SEVOPS1:1;
          unsigned SEVOPS2:1;
          unsigned SEVOPS3:1;
        };
      };
} typePWMCON2BITS;
sfr volatile typePWMCON2BITS PWMCON2bits absolute 0x1CA;

// backward compatibility for DTCON1BITS
    typedef struct tagDTCON1BITS {
      union {
        struct {
          unsigned DTA:6;
          unsigned DTAPS:2;
        };
        struct {
          unsigned DTA0:1;
          unsigned DTA1:1;
          unsigned DTA2:1;
          unsigned DTA3:1;
          unsigned DTA4:1;
          unsigned DTA5:1;
          unsigned DTAPS0:1;
          unsigned DTAPS1:1;
        };
      };
} typeDTCON1BITS;
sfr volatile typeDTCON1BITS DTCON1bits absolute 0x1CC;

// backward compatibility for FLTACONBITS
    typedef struct tagFLTACONBITS {
      unsigned FAEN1:1;
      unsigned FAEN2:1;
      unsigned FAEN3:1;
      unsigned :4;
      unsigned FLTAM:1;
      unsigned FAOV1L:1;
      unsigned FAOV1H:1;
      unsigned FAOV2L:1;
      unsigned FAOV2H:1;
      unsigned FAOV3L:1;
      unsigned FAOV3H:1;
} typeFLTACONBITS;
sfr volatile typeFLTACONBITS FLTACONbits absolute 0x1D0;

// backward compatibility for OVDCONBITS
    typedef struct tagOVDCONBITS {
      unsigned POUT1L:1;
      unsigned POUT1H:1;
      unsigned POUT2L:1;
      unsigned POUT2H:1;
      unsigned POUT3L:1;
      unsigned POUT3H:1;
      unsigned :2;
      unsigned POVD1L:1;
      unsigned POVD1H:1;
      unsigned POVD2L:1;
      unsigned POVD2H:1;
      unsigned POVD3L:1;
      unsigned POVD3H:1;
} typeOVDCONBITS;
sfr volatile typeOVDCONBITS OVDCONbits absolute 0x1D4;

// backward compatibility for I2CRCVBITS
    typedef struct tagI2CRCVBITS {
      union {
        struct {
          unsigned I2CRCV:8;
        };
        struct {
          unsigned I2CRCV0:1;
          unsigned I2CRCV1:1;
          unsigned I2CRCV2:1;
          unsigned I2CRCV3:1;
          unsigned I2CRCV4:1;
          unsigned I2CRCV5:1;
          unsigned I2CRCV6:1;
          unsigned I2CRCV7:1;
        };
      };
} typeI2CRCVBITS;
sfr volatile typeI2CRCVBITS I2CRCVbits absolute 0x200;

// backward compatibility for I2CTRNBITS
    typedef struct tagI2CTRNBITS {
      union {
        struct {
          unsigned I2CTRN:8;
        };
        struct {
          unsigned I2CTRN0:1;
          unsigned I2CTRN1:1;
          unsigned I2CTRN2:1;
          unsigned I2CTRN3:1;
          unsigned I2CTRN4:1;
          unsigned I2CTRN5:1;
          unsigned I2CTRN6:1;
          unsigned I2CTRN7:1;
        };
      };
} typeI2CTRNBITS;
sfr volatile typeI2CTRNBITS I2CTRNbits absolute 0x202;

// backward compatibility for I2CBRGBITS
    typedef struct tagI2CBRGBITS {
      unsigned I2CBRG:9;
} typeI2CBRGBITS;
sfr volatile typeI2CBRGBITS I2CBRGbits absolute 0x204;

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

// backward compatibility for I2CSTATBITS
    typedef struct tagI2CSTATBITS {
      union {
        struct {
          unsigned TBF:1;
          unsigned RBF:1;
          unsigned R_NOT_W:1;
          unsigned S:1;
          unsigned P:1;
          unsigned D_NOT_A:1;
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
          unsigned :2;
          unsigned R_W:1;
          unsigned :2;
          unsigned D_A:1;
        };
      };
} typeI2CSTATBITS;
sfr volatile typeI2CSTATBITS I2CSTATbits absolute 0x208;

// backward compatibility for I2CADDBITS
    typedef struct tagI2CADDBITS {
      unsigned I2CADD:10;
} typeI2CADDBITS;
sfr volatile typeI2CADDBITS I2CADDbits absolute 0x20A;

// backward compatibility for UART
    typedef struct tagUART {
            unsigned int uxmode;
            unsigned int uxsta;
            unsigned int uxtxreg;
            unsigned int uxrxreg;
            unsigned int uxbrg;
} typeUART;
sfr volatile typeUART UART1 absolute 0x20C;
sfr volatile typeUART UART2 absolute 0x216;

// backward compatibility for U1MODEBITS
    typedef struct tagU1MODEBITS {
      union {
        struct {
          unsigned STSEL:1;
          unsigned PDSEL:2;
          unsigned :2;
          unsigned ABAUD:1;
          unsigned LPBACK:1;
          unsigned WAKE:1;
          unsigned :2;
          unsigned ALTIO:1;
          unsigned :2;
          unsigned USIDL:1;
          unsigned :1;
          unsigned UARTEN:1;
        };
        struct {
          unsigned :1;
          unsigned PDSEL0:1;
          unsigned PDSEL1:1;
        };
      };
} typeU1MODEBITS;
sfr volatile typeU1MODEBITS U1MODEbits absolute 0x20C;

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
          unsigned :3;
          unsigned UTXISEL:1;
        };
        struct {
          unsigned :6;
          unsigned URXISEL0:1;
          unsigned URXISEL1:1;
        };
      };
} typeU1STABITS;
sfr volatile typeU1STABITS U1STAbits absolute 0x20E;

// backward compatibility for U1TXREGBITS
    typedef struct tagU1TXREGBITS {
      union {
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
        struct {
          unsigned :8;
          unsigned UTX8:1;
        };
      };
} typeU1TXREGBITS;
sfr volatile typeU1TXREGBITS U1TXREGbits absolute 0x210;

// backward compatibility for U1RXREGBITS
    typedef struct tagU1RXREGBITS {
      union {
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
        struct {
          unsigned :8;
          unsigned URX8:1;
        };
      };
} typeU1RXREGBITS;
sfr volatile typeU1RXREGBITS U1RXREGbits absolute 0x212;

// backward compatibility for U2MODEBITS
    typedef struct tagU2MODEBITS {
      union {
        struct {
          unsigned STSEL:1;
          unsigned PDSEL:2;
          unsigned :2;
          unsigned ABAUD:1;
          unsigned LPBACK:1;
          unsigned WAKE:1;
          unsigned :5;
          unsigned USIDL:1;
          unsigned :1;
          unsigned UARTEN:1;
        };
        struct {
          unsigned :1;
          unsigned PDSEL0:1;
          unsigned PDSEL1:1;
        };
      };
} typeU2MODEBITS;
sfr volatile typeU2MODEBITS U2MODEbits absolute 0x216;

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
          unsigned :3;
          unsigned UTXISEL:1;
        };
        struct {
          unsigned :6;
          unsigned URXISEL0:1;
          unsigned URXISEL1:1;
        };
      };
} typeU2STABITS;
sfr volatile typeU2STABITS U2STAbits absolute 0x218;

// backward compatibility for U2TXREGBITS
    typedef struct tagU2TXREGBITS {
      union {
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
        struct {
          unsigned :8;
          unsigned UTX8:1;
        };
      };
} typeU2TXREGBITS;
sfr volatile typeU2TXREGBITS U2TXREGbits absolute 0x21A;

// backward compatibility for U2RXREGBITS
    typedef struct tagU2RXREGBITS {
      union {
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
        struct {
          unsigned :8;
          unsigned URX8:1;
        };
      };
} typeU2RXREGBITS;
sfr volatile typeU2RXREGBITS U2RXREGbits absolute 0x21C;

// backward compatibility for SPI
    typedef struct tagSPI {
            unsigned int spixstat;
            unsigned int spixcon1;
            unsigned int spixcon2;
            unsigned int unused;
            unsigned int spixbuf;
} typeSPI;
sfr volatile typeSPI SPI1 absolute 0x220;

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
sfr volatile typeSPI1STATBITS SPI1STATbits absolute 0x220;

// backward compatibility for SPI1CONBITS
    typedef struct tagSPI1CONBITS {
      union {
        struct {
          unsigned PPRE0:1;
          unsigned PPRE1:1;
          unsigned SPRE0:1;
          unsigned SPRE1:1;
          unsigned SPRE2:1;
          unsigned MSTEN:1;
          unsigned CKP:1;
          unsigned SSEN:1;
          unsigned CKE:1;
          unsigned SMP:1;
          unsigned MODE16:1;
          unsigned DISSDO:1;
          unsigned :1;
          unsigned SPIFSD:1;
          unsigned FRMEN:1;
        };
        struct {
          unsigned PPRE:2;
          unsigned SPRE:3;
        };
      };
} typeSPI1CONBITS;
sfr volatile typeSPI1CONBITS SPI1CONbits absolute 0x222;

// backward compatibility for ADCON1BITS
    typedef struct tagADCON1BITS {
      union {
        struct {
          unsigned DONE:1;
          unsigned SAMP:1;
          unsigned ASAM:1;
          unsigned SIMSAM:1;
          unsigned :1;
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
} typeADCON1BITS;
sfr volatile typeADCON1BITS ADCON1bits absolute 0x2A0;

// backward compatibility for ADCON2BITS
    typedef struct tagADCON2BITS {
      union {
        struct {
          unsigned ALTS:1;
          unsigned BUFM:1;
          unsigned SMPI:4;
          unsigned :1;
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
          unsigned :2;
          unsigned CHPS0:1;
          unsigned CHPS1:1;
          unsigned :3;
          unsigned VCFG0:1;
          unsigned VCFG1:1;
          unsigned VCFG2:1;
        };
      };
} typeADCON2BITS;
sfr volatile typeADCON2BITS ADCON2bits absolute 0x2A2;

// backward compatibility for ADCON3BITS
    typedef struct tagADCON3BITS {
      union {
        struct {
          unsigned ADCS:6;
          unsigned :1;
          unsigned ADRC:1;
          unsigned SAMC:5;
        };
        struct {
          unsigned ADCS0:1;
          unsigned ADCS1:1;
          unsigned ADCS2:1;
          unsigned ADCS3:1;
          unsigned ADCS4:1;
          unsigned ADCS5:1;
          unsigned :2;
          unsigned SAMC0:1;
          unsigned SAMC1:1;
          unsigned SAMC2:1;
          unsigned SAMC3:1;
          unsigned SAMC4:1;
        };
      };
} typeADCON3BITS;
sfr volatile typeADCON3BITS ADCON3bits absolute 0x2A4;

// backward compatibility for ADCHSBITS
    typedef struct tagADCHSBITS {
      union {
        struct {
          unsigned CH0SA:4;
          unsigned CH0NA:1;
          unsigned CH123SA:1;
          unsigned CH123NA:2;
          unsigned CH0SB:4;
          unsigned CH0NB:1;
          unsigned CH123SB:1;
          unsigned CH123NB:2;
        };
        struct {
          unsigned CH0SA0:1;
          unsigned CH0SA1:1;
          unsigned CH0SA2:1;
          unsigned CH0SA3:1;
          unsigned :2;
          unsigned CH123NA0:1;
          unsigned CH123NA1:1;
          unsigned CH0SB0:1;
          unsigned CH0SB1:1;
          unsigned CH0SB2:1;
          unsigned CH0SB3:1;
          unsigned :2;
          unsigned CH123NB0:1;
          unsigned CH123NB1:1;
        };
      };
} typeADCHSBITS;
sfr volatile typeADCHSBITS ADCHSbits absolute 0x2A6;

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
} typeADPCFGBITS;
sfr volatile typeADPCFGBITS ADPCFGbits absolute 0x2A8;

// backward compatibility for ADCSSLBITS
    typedef struct tagADCSSLBITS {
      unsigned CSSL0:1;
      unsigned CSSL1:1;
      unsigned CSSL2:1;
      unsigned CSSL3:1;
      unsigned CSSL4:1;
      unsigned CSSL5:1;
      unsigned CSSL6:1;
      unsigned CSSL7:1;
      unsigned CSSL8:1;
} typeADCSSLBITS;
sfr volatile typeADCSSLBITS ADCSSLbits absolute 0x2AA;

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
} typeTRISBBITS;
sfr volatile typeTRISBBITS TRISBbits absolute 0x2C6;

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
} typePORTBBITS;
sfr volatile typePORTBBITS PORTBbits absolute 0x2C8;

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
} typeLATBBITS;
sfr volatile typeLATBBITS LATBbits absolute 0x2CA;

// backward compatibility for TRISCBITS
    typedef struct tagTRISCBITS {
      unsigned :13;
      unsigned TRISC13:1;
      unsigned TRISC14:1;
      unsigned TRISC15:1;
} typeTRISCBITS;
sfr volatile typeTRISCBITS TRISCbits absolute 0x2CC;

// backward compatibility for PORTCBITS
    typedef struct tagPORTCBITS {
      unsigned :13;
      unsigned RC13:1;
      unsigned RC14:1;
      unsigned RC15:1;
} typePORTCBITS;
sfr volatile typePORTCBITS PORTCbits absolute 0x2CE;

// backward compatibility for LATCBITS
    typedef struct tagLATCBITS {
      unsigned :13;
      unsigned LATC13:1;
      unsigned LATC14:1;
      unsigned LATC15:1;
} typeLATCBITS;
sfr volatile typeLATCBITS LATCbits absolute 0x2D0;

// backward compatibility for TRISDBITS
    typedef struct tagTRISDBITS {
      unsigned TRISD0:1;
      unsigned TRISD1:1;
      unsigned TRISD2:1;
      unsigned TRISD3:1;
} typeTRISDBITS;
sfr volatile typeTRISDBITS TRISDbits absolute 0x2D2;

// backward compatibility for PORTDBITS
    typedef struct tagPORTDBITS {
      unsigned RD0:1;
      unsigned RD1:1;
      unsigned RD2:1;
      unsigned RD3:1;
} typePORTDBITS;
sfr volatile typePORTDBITS PORTDbits absolute 0x2D4;

// backward compatibility for LATDBITS
    typedef struct tagLATDBITS {
      unsigned LATD0:1;
      unsigned LATD1:1;
      unsigned LATD2:1;
      unsigned LATD3:1;
} typeLATDBITS;
sfr volatile typeLATDBITS LATDbits absolute 0x2D6;

// backward compatibility for TRISEBITS
    typedef struct tagTRISEBITS {
      unsigned TRISE0:1;
      unsigned TRISE1:1;
      unsigned TRISE2:1;
      unsigned TRISE3:1;
      unsigned TRISE4:1;
      unsigned TRISE5:1;
      unsigned :2;
      unsigned TRISE8:1;
} typeTRISEBITS;
sfr volatile typeTRISEBITS TRISEbits absolute 0x2D8;

// backward compatibility for PORTEBITS
    typedef struct tagPORTEBITS {
      unsigned RE0:1;
      unsigned RE1:1;
      unsigned RE2:1;
      unsigned RE3:1;
      unsigned RE4:1;
      unsigned RE5:1;
      unsigned :2;
      unsigned RE8:1;
} typePORTEBITS;
sfr volatile typePORTEBITS PORTEbits absolute 0x2DA;

// backward compatibility for LATEBITS
    typedef struct tagLATEBITS {
      unsigned LATE0:1;
      unsigned LATE1:1;
      unsigned LATE2:1;
      unsigned LATE3:1;
      unsigned LATE4:1;
      unsigned LATE5:1;
      unsigned :2;
      unsigned LATE8:1;
} typeLATEBITS;
sfr volatile typeLATEBITS LATEbits absolute 0x2DC;

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
sfr volatile typeTRISFBITS TRISFbits absolute 0x2DE;

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
sfr volatile typePORTFBITS PORTFbits absolute 0x2E0;

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
sfr volatile typeLATFBITS LATFbits absolute 0x2E2;

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
      unsigned :5;
      unsigned BGST:1;
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
          unsigned :1;
          unsigned LOCK:1;
          unsigned POST:2;
          unsigned NOSC:3;
          unsigned :1;
          unsigned COSC:3;
        };
        struct {
          unsigned :6;
          unsigned POST0:1;
          unsigned POST1:1;
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

// backward compatibility for OSCTUNBITS
    typedef struct tagOSCTUNBITS {
      union {
        struct {
          unsigned TUN:4;
        };
        struct {
          unsigned TUN0:1;
          unsigned TUN1:1;
          unsigned TUN2:1;
          unsigned TUN3:1;
        };
      };
} typeOSCTUNBITS;
sfr volatile typeOSCTUNBITS OSCTUNbits absolute 0x744;

// backward compatibility for NVMCONBITS
    typedef struct tagNVMCONBITS {
      union {
        struct {
          unsigned PROGOP:7;
          unsigned :1;
          unsigned TWRI:1;
          unsigned :4;
          unsigned WRERR:1;
          unsigned WREN:1;
          unsigned WR:1;
        };
        struct {
          unsigned PROGOP0:1;
          unsigned PROGOP1:1;
          unsigned PROGOP2:1;
          unsigned PROGOP3:1;
          unsigned PROGOP4:1;
          unsigned PROGOP5:1;
          unsigned PROGOP6:1;
        };
      };
} typeNVMCONBITS;
sfr volatile typeNVMCONBITS NVMCONbits absolute 0x760;

// backward compatibility for NVMADRUBITS
    typedef struct tagNVMADRUBITS {
      unsigned NVMADR:8;
} typeNVMADRUBITS;
sfr volatile typeNVMADRUBITS NVMADRUbits absolute 0x764;

// backward compatibility for PMD1BITS
    typedef struct tagPMD1BITS {
      unsigned ADCMD:1;
      unsigned :2;
      unsigned SPI1MD:1;
      unsigned :1;
      unsigned U1MD:1;
      unsigned U2MD:1;
      unsigned I2CMD:1;
      unsigned :1;
      unsigned PWMMD:1;
      unsigned QEIMD:1;
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
      unsigned :4;
      unsigned IC7MD:1;
      unsigned IC8MD:1;
} typePMD2BITS;
sfr volatile typePMD2BITS PMD2bits absolute 0x772;

