// Definition file for P30F1010

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
const unsigned long __XRAM_RAM_SIZE = 0x0000007F;
const unsigned long __XRAM_RAM_START = 0x800;
const unsigned long __YRAM_RAM_SIZE = 0x0000007F;
const unsigned long __YRAM_RAM_START = 0x880;
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
const unsigned IVT_ADDR_OC1INTERRUPT         = 0x0018;
const unsigned IVT_ADDR_T1INTERRUPT          = 0x001A;
const unsigned IVT_ADDR_INTERRUPT4           = 0x001C;
const unsigned IVT_ADDR_INTERRUPT5           = 0x001E;
const unsigned IVT_ADDR_T2INTERRUPT          = 0x0020;
const unsigned IVT_ADDR_INTERRUPT7           = 0x0022;
const unsigned IVT_ADDR_SPI1INTERRUPT        = 0x0024;
const unsigned IVT_ADDR_U1RXINTERRUPT        = 0x0026;
const unsigned IVT_ADDR_U1TXINTERRUPT        = 0x0028;
const unsigned IVT_ADDR_ADCINTERRUPT         = 0x002A;
const unsigned IVT_ADDR_NVMINTERRUPT         = 0x002C;
const unsigned IVT_ADDR_SI2CINTERRUPT        = 0x002E;
const unsigned IVT_ADDR_MI2CINTERRUPT        = 0x0030;
const unsigned IVT_ADDR_INTERRUPT15          = 0x0032;
const unsigned IVT_ADDR_INT1INTERRUPT        = 0x0034;
const unsigned IVT_ADDR_INT2INTERRUPT        = 0x0036;
const unsigned IVT_ADDR_PWMSPEVENTMATCHINTERRUPT = 0x0038;
const unsigned IVT_ADDR_PWM1INTERRUPT        = 0x003A;
const unsigned IVT_ADDR_PWM2INTERRUPT        = 0x003C;
const unsigned IVT_ADDR_INTERRUPT21          = 0x003E;
const unsigned IVT_ADDR_INTERRUPT22          = 0x0040;
const unsigned IVT_ADDR_INTERRUPT23          = 0x0042;
const unsigned IVT_ADDR_INTERRUPT24          = 0x0044;
const unsigned IVT_ADDR_INTERRUPT25          = 0x0046;
const unsigned IVT_ADDR_INTERRUPT26          = 0x0048;
const unsigned IVT_ADDR_CNINTERRUPT          = 0x004A;
const unsigned IVT_ADDR_INTERRUPT28          = 0x004C;
const unsigned IVT_ADDR_CMP1INTERRUPT        = 0x004E;
const unsigned IVT_ADDR_CMP2INTERRUPT        = 0x0050;
const unsigned IVT_ADDR_INTERRUPT31          = 0x0052;
const unsigned IVT_ADDR_INTERRUPT32          = 0x0054;
const unsigned IVT_ADDR_INTERRUPT33          = 0x0056;
const unsigned IVT_ADDR_INTERRUPT34          = 0x0058;
const unsigned IVT_ADDR_INTERRUPT35          = 0x005A;
const unsigned IVT_ADDR_INTERRUPT36          = 0x005C;
const unsigned IVT_ADDR_ADCP0INTERRUPT       = 0x005E;
const unsigned IVT_ADDR_ADCP1INTERRUPT       = 0x0060;
const unsigned IVT_ADDR_ADCP2INTERRUPT       = 0x0062;
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
const unsigned AIVT_ADDR_ALTINTERRUPT1        = 0x0096;
const unsigned AIVT_ADDR_ALTOC1INTERRUPT      = 0x0098;
const unsigned AIVT_ADDR_ALTT1INTERRUPT       = 0x009A;
const unsigned AIVT_ADDR_ALTINTERRUPT4        = 0x009C;
const unsigned AIVT_ADDR_ALTINTERRUPT5        = 0x009E;
const unsigned AIVT_ADDR_ALTT2INTERRUPT       = 0x00A0;
const unsigned AIVT_ADDR_ALTINTERRUPT7        = 0x00A2;
const unsigned AIVT_ADDR_ALTSPI1INTERRUPT     = 0x00A4;
const unsigned AIVT_ADDR_ALTU1RXINTERRUPT     = 0x00A6;
const unsigned AIVT_ADDR_ALTU1TXINTERRUPT     = 0x00A8;
const unsigned AIVT_ADDR_ALTADCINTERRUPT      = 0x00AA;
const unsigned AIVT_ADDR_ALTNVMINTERRUPT      = 0x00AC;
const unsigned AIVT_ADDR_ALTSI2CINTERRUPT     = 0x00AE;
const unsigned AIVT_ADDR_ALTMI2CINTERRUPT     = 0x00B0;
const unsigned AIVT_ADDR_ALTINTERRUPT15       = 0x00B2;
const unsigned AIVT_ADDR_ALTINT1INTERRUPT     = 0x00B4;
const unsigned AIVT_ADDR_ALTINT2INTERRUPT     = 0x00B6;
const unsigned AIVT_ADDR_ALTPWMSPEVENTMATCHINTERRUPT = 0x00B8;
const unsigned AIVT_ADDR_ALTPWM1INTERRUPT     = 0x00BA;
const unsigned AIVT_ADDR_ALTPWM2INTERRUPT     = 0x00BC;
const unsigned AIVT_ADDR_ALTINTERRUPT21       = 0x00BE;
const unsigned AIVT_ADDR_ALTINTERRUPT22       = 0x00C0;
const unsigned AIVT_ADDR_ALTINTERRUPT23       = 0x00C2;
const unsigned AIVT_ADDR_ALTINTERRUPT24       = 0x00C4;
const unsigned AIVT_ADDR_ALTINTERRUPT25       = 0x00C6;
const unsigned AIVT_ADDR_ALTINTERRUPT26       = 0x00C8;
const unsigned AIVT_ADDR_ALTCNINTERRUPT       = 0x00CA;
const unsigned AIVT_ADDR_ALTINTERRUPT28       = 0x00CC;
const unsigned AIVT_ADDR_ALTCMP1INTERRUPT     = 0x00CE;
const unsigned AIVT_ADDR_ALTCMP2INTERRUPT     = 0x00D0;
const unsigned AIVT_ADDR_ALTINTERRUPT31       = 0x00D2;
const unsigned AIVT_ADDR_ALTINTERRUPT32       = 0x00D4;
const unsigned AIVT_ADDR_ALTINTERRUPT33       = 0x00D6;
const unsigned AIVT_ADDR_ALTINTERRUPT34       = 0x00D8;
const unsigned AIVT_ADDR_ALTINTERRUPT35       = 0x00DA;
const unsigned AIVT_ADDR_ALTINTERRUPT36       = 0x00DC;
const unsigned AIVT_ADDR_ALTADCP0INTERRUPT    = 0x00DE;
const unsigned AIVT_ADDR_ALTADCP1INTERRUPT    = 0x00E0;
const unsigned AIVT_ADDR_ALTADCP2INTERRUPT    = 0x00E2;
const unsigned AIVT_ADDR_ALTINTERRUPT40       = 0x00E4;
const unsigned AIVT_ADDR_ALTINTERRUPT41       = 0x00E6;
const unsigned AIVT_ADDR_ALTINTERRUPT42       = 0x00E8;
const unsigned AIVT_ADDR_ALTINTERRUPT43       = 0x00EA;
const unsigned AIVT_ADDR_ALTINTERRUPT44       = 0x00EC;
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
sfr unsigned int volatile CNEN1            absolute 0x0060;
sfr unsigned int volatile CNPU1            absolute 0x0068;
sfr unsigned int volatile INTCON1          absolute 0x0080;
sfr unsigned int volatile INTCON2          absolute 0x0082;
sfr unsigned int volatile IFS0             absolute 0x0084;
sfr unsigned int volatile IFS1             absolute 0x0086;
sfr unsigned int volatile IFS2             absolute 0x0088;
sfr unsigned int          IEC0             absolute 0x0094;
sfr unsigned int          IEC1             absolute 0x0096;
sfr unsigned int          IEC2             absolute 0x0098;
sfr unsigned int          IPC0             absolute 0x00A4;
sfr unsigned int          IPC1             absolute 0x00A6;
sfr unsigned int          IPC2             absolute 0x00A8;
sfr unsigned int          IPC3             absolute 0x00AA;
sfr unsigned int          IPC4             absolute 0x00AC;
sfr unsigned int          IPC5             absolute 0x00AE;
sfr unsigned int          IPC6             absolute 0x00B0;
sfr unsigned int          IPC7             absolute 0x00B2;
sfr unsigned int          IPC9             absolute 0x00B6;
sfr unsigned int volatile INTTREG          absolute 0x00E0;
sfr unsigned int volatile TMR1             absolute 0x0100;
sfr unsigned int volatile PR1              absolute 0x0102;
sfr unsigned int volatile T1CON            absolute 0x0104;
sfr unsigned int volatile TMR2             absolute 0x0106;
sfr unsigned int volatile PR2              absolute 0x010C;
sfr unsigned int volatile T2CON            absolute 0x0110;
sfr unsigned int          OC1RS            absolute 0x0180;
sfr unsigned int volatile OC1R             absolute 0x0182;
sfr unsigned int volatile OC1CON           absolute 0x0184;
sfr unsigned int volatile I2CRCV           absolute 0x0200;
sfr unsigned int volatile I2CTRN           absolute 0x0202;
sfr unsigned int volatile I2CBRG           absolute 0x0204;
sfr unsigned int volatile I2CCON           absolute 0x0206;
sfr unsigned int volatile I2CSTAT          absolute 0x0208;
sfr unsigned int volatile I2CADD           absolute 0x020A;
sfr unsigned int volatile U1MODE           absolute 0x0220;
sfr unsigned int volatile U1STA            absolute 0x0222;
sfr unsigned int          U1TXREG          absolute 0x0224;
sfr unsigned int volatile U1RXREG          absolute 0x0226;
sfr unsigned int          U1BRG            absolute 0x0228;
sfr unsigned int volatile SPI1STAT         absolute 0x0240;
sfr unsigned int volatile SPI1CON1         absolute 0x0242;
sfr unsigned int volatile SPI1CON          absolute 0x0242;
sfr unsigned int volatile SPI1CON2         absolute 0x0244;
sfr unsigned int volatile SPI1BUF          absolute 0x0246;
sfr unsigned int volatile TRISA            absolute 0x02C0;
sfr unsigned int volatile PORTA            absolute 0x02C2;
sfr unsigned int volatile LATA             absolute 0x02C4;
sfr unsigned int volatile TRISB            absolute 0x02C6;
sfr unsigned int volatile PORTB            absolute 0x02C8;
sfr unsigned int volatile LATB             absolute 0x02CA;
sfr unsigned int volatile TRISD            absolute 0x02D2;
sfr unsigned int volatile PORTD            absolute 0x02D4;
sfr unsigned int volatile LATD             absolute 0x02D6;
sfr unsigned int volatile TRISE            absolute 0x02D8;
sfr unsigned int volatile PORTE            absolute 0x02DA;
sfr unsigned int volatile LATE             absolute 0x02DC;
sfr unsigned int volatile TRISF            absolute 0x02DE;
sfr unsigned int volatile PORTF            absolute 0x02E0;
sfr unsigned int volatile LATF             absolute 0x02E2;
sfr unsigned int volatile ADCON            absolute 0x0300;
sfr unsigned int volatile ADPCFG           absolute 0x0302;
sfr unsigned int volatile ADSTAT           absolute 0x0306;
sfr unsigned int volatile ADBASE           absolute 0x0308;
sfr unsigned int volatile ADCPC0           absolute 0x030A;
sfr unsigned int volatile ADCPC1           absolute 0x030C;
sfr unsigned int volatile ADCBUF0          absolute 0x0320;
sfr unsigned int volatile ADCBUF1          absolute 0x0322;
sfr unsigned int volatile ADCBUF2          absolute 0x0324;
sfr unsigned int volatile ADCBUF3          absolute 0x0326;
sfr unsigned int volatile ADCBUF4          absolute 0x0328;
sfr unsigned int volatile ADCBUF5          absolute 0x032A;
sfr unsigned int          PTCON            absolute 0x0400;
sfr unsigned int volatile PTPER            absolute 0x0402;
sfr unsigned int volatile MDC              absolute 0x0404;
sfr unsigned int volatile SEVTCMP          absolute 0x0406;
sfr unsigned int volatile PWMCON1          absolute 0x0408;
sfr unsigned int volatile IOCON1           absolute 0x040A;
sfr unsigned int volatile FCLCON1          absolute 0x040C;
sfr unsigned int volatile PDC1             absolute 0x040E;
sfr unsigned int volatile PHASE1           absolute 0x0410;
sfr unsigned int volatile DTR1             absolute 0x0412;
sfr unsigned int volatile ALTDTR1          absolute 0x0414;
sfr unsigned int volatile TRIG1            absolute 0x0416;
sfr unsigned int volatile TRGCON1          absolute 0x0418;
sfr unsigned int volatile LEBCON1          absolute 0x041A;
sfr unsigned int volatile PWMCON2          absolute 0x041C;
sfr unsigned int volatile IOCON2           absolute 0x041E;
sfr unsigned int volatile FCLCON2          absolute 0x0420;
sfr unsigned int volatile PDC2             absolute 0x0422;
sfr unsigned int volatile PHASE2           absolute 0x0424;
sfr unsigned int volatile DTR2             absolute 0x0426;
sfr unsigned int volatile ALTDTR2          absolute 0x0428;
sfr unsigned int volatile TRIG2            absolute 0x042A;
sfr unsigned int volatile TRGCON2          absolute 0x042C;
sfr unsigned int volatile LEBCON2          absolute 0x042E;
sfr unsigned int volatile CMPCON1          absolute 0x04C0;
sfr unsigned int volatile CMPDAC1          absolute 0x04C2;
sfr unsigned int volatile CMPCON2          absolute 0x04C4;
sfr unsigned int volatile CMPDAC2          absolute 0x04C6;
sfr unsigned int          RCON             absolute 0x0740;
sfr unsigned int volatile OSCCON           absolute 0x0742;
sfr unsigned int volatile OSCCONL          absolute 0x0742;
sfr unsigned short volatile OSCCONH          absolute 0x0743;
sfr unsigned int volatile OSCTUN           absolute 0x0748;
sfr unsigned int volatile OSCTUN2          absolute 0x074A;
sfr unsigned int volatile LFSR             absolute 0x074C;
sfr unsigned int volatile BSRAM            absolute 0x0750;
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
    const register unsigned short int T2IF = 6;
    sbit  T2IF_bit at IFS0.B6;
    const register unsigned short int T1IF = 3;
    sbit  T1IF_bit at IFS0.B3;
    const register unsigned short int OC1IF = 2;
    sbit  OC1IF_bit at IFS0.B2;
    const register unsigned short int INT0IF = 0;
    sbit  INT0IF_bit at IFS0.B0;

    // IFS1 bits
    const register unsigned short int AC2IF = 14;
    sbit  AC2IF_bit at IFS1.B14;
    const register unsigned short int AC1IF = 13;
    sbit  AC1IF_bit at IFS1.B13;
    const register unsigned short int CNIF = 11;
    sbit  CNIF_bit at IFS1.B11;
    const register unsigned short int PWM2IF = 4;
    sbit  PWM2IF_bit at IFS1.B4;
    const register unsigned short int PWM1IF = 3;
    sbit  PWM1IF_bit at IFS1.B3;
    const register unsigned short int PSEMIF = 2;
    sbit  PSEMIF_bit at IFS1.B2;
    const register unsigned short int INT2IF = 1;
    sbit  INT2IF_bit at IFS1.B1;
    const register unsigned short int INT1IF = 0;
    sbit  INT1IF_bit at IFS1.B0;

    // IFS2 bits
    const register unsigned short int ADCP2IF = 7;
    sbit  ADCP2IF_bit at IFS2.B7;
    const register unsigned short int ADCP1IF = 6;
    sbit  ADCP1IF_bit at IFS2.B6;
    const register unsigned short int ADCP0IF = 5;
    sbit  ADCP0IF_bit at IFS2.B5;

    // IEC0 bits
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
    const register unsigned short int T2IE = 6;
    sbit  T2IE_bit at IEC0.B6;
    const register unsigned short int T1IE = 3;
    sbit  T1IE_bit at IEC0.B3;
    const register unsigned short int OC1IE = 2;
    sbit  OC1IE_bit at IEC0.B2;
    const register unsigned short int INT0IE = 0;
    sbit  INT0IE_bit at IEC0.B0;

    // IEC1 bits
    const register unsigned short int AC2IE = 14;
    sbit  AC2IE_bit at IEC1.B14;
    const register unsigned short int AC1IE = 13;
    sbit  AC1IE_bit at IEC1.B13;
    const register unsigned short int CNIE = 11;
    sbit  CNIE_bit at IEC1.B11;
    const register unsigned short int PWM2IE = 4;
    sbit  PWM2IE_bit at IEC1.B4;
    const register unsigned short int PWM1IE = 3;
    sbit  PWM1IE_bit at IEC1.B3;
    const register unsigned short int PSEMIE = 2;
    sbit  PSEMIE_bit at IEC1.B2;
    const register unsigned short int INT2IE = 1;
    sbit  INT2IE_bit at IEC1.B1;
    const register unsigned short int INT1IE = 0;
    sbit  INT1IE_bit at IEC1.B0;

    // IEC2 bits
    const register unsigned short int ADCP2IE = 7;
    sbit  ADCP2IE_bit at IEC2.B7;
    const register unsigned short int ADCP1IE = 6;
    sbit  ADCP1IE_bit at IEC2.B6;
    const register unsigned short int ADCP0IE = 5;
    sbit  ADCP0IE_bit at IEC2.B5;

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
    const register unsigned short int INT0IP_2 = 2;
    sbit  INT0IP_2_bit at IPC0.B2;
    const register unsigned short int INT0IP_1 = 1;
    sbit  INT0IP_1_bit at IPC0.B1;
    const register unsigned short int INT0IP_0 = 0;
    sbit  INT0IP_0_bit at IPC0.B0;

    // IPC1 bits
    const register unsigned short int T2IP_2 = 10;
    sbit  T2IP_2_bit at IPC1.B10;
    const register unsigned short int T2IP_1 = 9;
    sbit  T2IP_1_bit at IPC1.B9;
    const register unsigned short int T2IP_0 = 8;
    sbit  T2IP_0_bit at IPC1.B8;

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
    const register unsigned short int PWM1IP_2 = 14;
    sbit  PWM1IP_2_bit at IPC4.B14;
    const register unsigned short int PWM1IP_1 = 13;
    sbit  PWM1IP_1_bit at IPC4.B13;
    const register unsigned short int PWM1IP_0 = 12;
    sbit  PWM1IP_0_bit at IPC4.B12;
    const register unsigned short int PSEMIP_2 = 10;
    sbit  PSEMIP_2_bit at IPC4.B10;
    const register unsigned short int PSEMIP_1 = 9;
    sbit  PSEMIP_1_bit at IPC4.B9;
    const register unsigned short int PSEMIP_0 = 8;
    sbit  PSEMIP_0_bit at IPC4.B8;
    const register unsigned short int INT2IP_2 = 6;
    const register unsigned short int INT2IP2 = 6;
    sbit  INT2IP_2_bit at IPC4.B6;
    const register unsigned short int INT2IP_1 = 5;
    const register unsigned short int INT2IP1= 5;
    sbit  INT2IP_1_bit at IPC4.B5;
    const register unsigned short int INT2IP_0 = 4;
    const register unsigned short int INT2IP0= 4;
    sbit  INT2IP_0_bit at IPC4.B4;
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
    const register unsigned short int PWM2IP_2 = 2;
    sbit  PWM2IP_2_bit at IPC5.B2;
    const register unsigned short int PWM2IP_1 = 1;
    sbit  PWM2IP_1_bit at IPC5.B1;
    const register unsigned short int PWM2IP_0 = 0;
    sbit  PWM2IP_0_bit at IPC5.B0;

    // IPC6 bits
    const register unsigned short int CNIP_2 = 14;
    sbit  CNIP_2_bit at IPC6.B14;
    const register unsigned short int CNIP_1 = 13;
    sbit  CNIP_1_bit at IPC6.B13;
    const register unsigned short int CNIP_0 = 12;
    sbit  CNIP_0_bit at IPC6.B12;

    // IPC7 bits
    const register unsigned short int AC2IP_2 = 10;
    sbit  AC2IP_2_bit at IPC7.B10;
    const register unsigned short int AC2IP_1 = 9;
    sbit  AC2IP_1_bit at IPC7.B9;
    const register unsigned short int AC2IP_0 = 8;
    sbit  AC2IP_0_bit at IPC7.B8;
    const register unsigned short int AC1IP_2 = 6;
    sbit  AC1IP_2_bit at IPC7.B6;
    const register unsigned short int AC1IP_1 = 5;
    sbit  AC1IP_1_bit at IPC7.B5;
    const register unsigned short int AC1IP_0 = 4;
    sbit  AC1IP_0_bit at IPC7.B4;

    // IPC9 bits
    const register unsigned short int ADCP2IP_2 = 14;
    sbit  ADCP2IP_2_bit at IPC9.B14;
    const register unsigned short int ADCP2IP_1 = 13;
    sbit  ADCP2IP_1_bit at IPC9.B13;
    const register unsigned short int ADCP2IP_0 = 12;
    sbit  ADCP2IP_0_bit at IPC9.B12;
    const register unsigned short int ADCP1IP_2 = 10;
    sbit  ADCP1IP_2_bit at IPC9.B10;
    const register unsigned short int ADCP1IP_1 = 9;
    sbit  ADCP1IP_1_bit at IPC9.B9;
    const register unsigned short int ADCP1IP_0 = 8;
    sbit  ADCP1IP_0_bit at IPC9.B8;
    const register unsigned short int ADCP0IP_2 = 6;
    sbit  ADCP0IP_2_bit at IPC9.B6;
    const register unsigned short int ADCP0IP_1 = 5;
    sbit  ADCP0IP_1_bit at IPC9.B5;
    const register unsigned short int ADCP0IP_0 = 4;
    sbit  ADCP0IP_0_bit at IPC9.B4;

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
    const register unsigned short int T32 = 3;
    sbit  T32_bit at T2CON.B3;
    sbit  TCS_T2CON_bit at T2CON.B1;

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
    const register unsigned short int USIDL = 13;
    sbit  USIDL_bit at U1MODE.B13;
    const register unsigned short int IREN = 12;
    sbit  IREN_bit at U1MODE.B12;
    const register unsigned short int ALTIO = 10;
    sbit  ALTIO_bit at U1MODE.B10;
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
    sbit  DISSCK_SPI1CON1_bit at SPI1CON1.B12;
    sbit  DISSCK_SPI1CON_bit at SPI1CON.B12;
    const register unsigned short int DISSDO = 11;
    sbit  DISSDO_bit at SPI1CON1.B11;
    sbit  DISSDO_SPI1CON1_bit at SPI1CON1.B11;
    sbit  DISSDO_SPI1CON_bit at SPI1CON.B11;
    const register unsigned short int MODE16 = 10;
    sbit  MODE16_bit at SPI1CON1.B10;
    sbit  MODE16_SPI1CON1_bit at SPI1CON1.B10;
    sbit  MODE16_SPI1CON_bit at SPI1CON.B10;
    const register unsigned short int SMP = 9;
    sbit  SMP_bit at SPI1CON1.B9;
    sbit  SMP_SPI1CON1_bit at SPI1CON1.B9;
    sbit  SMP_SPI1CON_bit at SPI1CON.B9;
    const register unsigned short int CKE = 8;
    sbit  CKE_bit at SPI1CON1.B8;
    sbit  CKE_SPI1CON1_bit at SPI1CON1.B8;
    sbit  CKE_SPI1CON_bit at SPI1CON.B8;
    const register unsigned short int SSEN = 7;
    sbit  SSEN_bit at SPI1CON1.B7;
    sbit  SSEN_SPI1CON1_bit at SPI1CON1.B7;
    sbit  SSEN_SPI1CON_bit at SPI1CON.B7;
    const register unsigned short int CKP = 6;
    sbit  CKP_bit at SPI1CON1.B6;
    sbit  CKP_SPI1CON1_bit at SPI1CON1.B6;
    sbit  CKP_SPI1CON_bit at SPI1CON.B6;
    const register unsigned short int MSTEN = 5;
    sbit  MSTEN_bit at SPI1CON1.B5;
    sbit  MSTEN_SPI1CON1_bit at SPI1CON1.B5;
    sbit  MSTEN_SPI1CON_bit at SPI1CON.B5;
    const register unsigned short int SPRE2 = 4;
    sbit  SPRE2_bit at SPI1CON1.B4;
    sbit  SPRE2_SPI1CON1_bit at SPI1CON1.B4;
    sbit  SPRE2_SPI1CON_bit at SPI1CON.B4;
    const register unsigned short int SPRE1 = 3;
    sbit  SPRE1_bit at SPI1CON1.B3;
    sbit  SPRE1_SPI1CON1_bit at SPI1CON1.B3;
    sbit  SPRE1_SPI1CON_bit at SPI1CON.B3;
    const register unsigned short int SPRE0 = 2;
    sbit  SPRE0_bit at SPI1CON1.B2;
    sbit  SPRE0_SPI1CON1_bit at SPI1CON1.B2;
    sbit  SPRE0_SPI1CON_bit at SPI1CON.B2;
    const register unsigned short int PPRE1 = 1;
    sbit  PPRE1_bit at SPI1CON1.B1;
    sbit  PPRE1_SPI1CON1_bit at SPI1CON1.B1;
    sbit  PPRE1_SPI1CON_bit at SPI1CON.B1;
    const register unsigned short int PPRE0 = 0;
    sbit  PPRE0_bit at SPI1CON1.B0;
    sbit  PPRE0_SPI1CON1_bit at SPI1CON1.B0;
    sbit  PPRE0_SPI1CON_bit at SPI1CON.B0;

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
    const register unsigned short int TRISA9 = 9;
    sbit  TRISA9_bit at TRISA.B9;

    // PORTA bits
    const register unsigned short int RA9 = 9;
    sbit  RA9_bit at PORTA.B9;

    // LATA bits
    const register unsigned short int LATA9 = 9;
    sbit  LATA9_bit at LATA.B9;

    // TRISB bits
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

    // TRISD bits
    const register unsigned short int TRISD0 = 0;
    sbit  TRISD0_bit at TRISD.B0;

    // PORTD bits
    const register unsigned short int RD0 = 0;
    sbit  RD0_bit at PORTD.B0;

    // LATD bits
    const register unsigned short int LATD0 = 0;
    sbit  LATD0_bit at LATD.B0;

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

    // TRISF bits
    const register unsigned short int TRISF8 = 8;
    sbit  TRISF8_bit at TRISF.B8;
    const register unsigned short int TRISF7 = 7;
    sbit  TRISF7_bit at TRISF.B7;
    const register unsigned short int TRISF6 = 6;
    sbit  TRISF6_bit at TRISF.B6;

    // PORTF bits
    const register unsigned short int RF8 = 8;
    sbit  RF8_bit at PORTF.B8;
    const register unsigned short int RF7 = 7;
    sbit  RF7_bit at PORTF.B7;
    const register unsigned short int RF6 = 6;
    sbit  RF6_bit at PORTF.B6;

    // LATF bits
    const register unsigned short int LATF8 = 8;
    sbit  LATF8_bit at LATF.B8;
    const register unsigned short int LATF7 = 7;
    sbit  LATF7_bit at LATF.B7;
    const register unsigned short int LATF6 = 6;
    sbit  LATF6_bit at LATF.B6;

    // ADCON bits
    const register unsigned short int ADON = 15;
    sbit  ADON_bit at ADCON.B15;
    const register unsigned short int ADSIDL = 13;
    sbit  ADSIDL_bit at ADCON.B13;
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
    const register unsigned short int ADCS_2 = 2;
    sbit  ADCS_2_bit at ADCON.B2;
    const register unsigned short int ADCS_1 = 1;
    sbit  ADCS_1_bit at ADCON.B1;
    const register unsigned short int ADCS_0 = 0;
    sbit  ADCS_0_bit at ADCON.B0;

    // ADPCFG bits
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

    // ADSTAT bits
    const register unsigned short int PxRDY_2 = 2;
    sbit  PxRDY_2_bit at ADSTAT.B2;
    const register unsigned short int PxRDY_1 = 1;
    sbit  PxRDY_1_bit at ADSTAT.B1;
    const register unsigned short int PxRDY_0 = 0;
    sbit  PxRDY_0_bit at ADSTAT.B0;

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
    const register unsigned short int SYNCSRC_2 = 6;
    sbit  SYNCSRC_2_bit at PTCON.B6;
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

    // PTPER bits
    const register unsigned short int PTPER_12 = 15;
    sbit  PTPER_12_bit at PTPER.B15;
    const register unsigned short int PTPER_11 = 14;
    sbit  PTPER_11_bit at PTPER.B14;
    const register unsigned short int PTPER_10 = 13;
    sbit  PTPER_10_bit at PTPER.B13;
    const register unsigned short int PTPER_9 = 12;
    sbit  PTPER_9_bit at PTPER.B12;
    const register unsigned short int PTPER_8 = 11;
    sbit  PTPER_8_bit at PTPER.B11;
    const register unsigned short int PTPER_7 = 10;
    sbit  PTPER_7_bit at PTPER.B10;
    const register unsigned short int PTPER_6 = 9;
    sbit  PTPER_6_bit at PTPER.B9;
    const register unsigned short int PTPER_5 = 8;
    sbit  PTPER_5_bit at PTPER.B8;
    const register unsigned short int PTPER_4 = 7;
    sbit  PTPER_4_bit at PTPER.B7;
    const register unsigned short int PTPER_3 = 6;
    sbit  PTPER_3_bit at PTPER.B6;
    const register unsigned short int PTPER_2 = 5;
    sbit  PTPER_2_bit at PTPER.B5;
    const register unsigned short int PTPER_1 = 4;
    sbit  PTPER_1_bit at PTPER.B4;
    const register unsigned short int PTPER_0 = 3;
    sbit  PTPER_0_bit at PTPER.B3;

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
    const register unsigned short int OSYNC = 0;
    sbit  OSYNC_bit at IOCON1.B0;
    sbit  OSYNC_IOCON1_bit at IOCON1.B0;

    // FCLCON1 bits
    const register unsigned short int CLSRC_3 = 12;
    sbit  CLSRC_3_bit at FCLCON1.B12;
    sbit  CLSRC_3_FCLCON1_bit at FCLCON1.B12;
    const register unsigned short int CLSRC_2 = 11;
    sbit  CLSRC_2_bit at FCLCON1.B11;
    sbit  CLSRC_2_FCLCON1_bit at FCLCON1.B11;
    const register unsigned short int CLSRC_1 = 10;
    sbit  CLSRC_1_bit at FCLCON1.B10;
    sbit  CLSRC_1_FCLCON1_bit at FCLCON1.B10;
    const register unsigned short int CLSRC_0 = 9;
    sbit  CLSRC_0_bit at FCLCON1.B9;
    sbit  CLSRC_0_FCLCON1_bit at FCLCON1.B9;
    const register unsigned short int CLPOL = 8;
    sbit  CLPOL_bit at FCLCON1.B8;
    sbit  CLPOL_FCLCON1_bit at FCLCON1.B8;
    const register unsigned short int CLMODE = 7;
    sbit  CLMODE_bit at FCLCON1.B7;
    sbit  CLMODE_FCLCON1_bit at FCLCON1.B7;
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
    const register unsigned short int DTR1_15 = 15;
    sbit  DTR1_15_bit at DTR1.B15;
    const register unsigned short int DTR1_14 = 14;
    sbit  DTR1_14_bit at DTR1.B14;
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
    const register unsigned short int ALTDTR1_15 = 15;
    sbit  ALTDTR1_15_bit at ALTDTR1.B15;
    const register unsigned short int ALTDTR1_14 = 14;
    sbit  ALTDTR1_14_bit at ALTDTR1.B14;
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

    // TRIG1 bits
    const register unsigned short int TRIG1_15 = 15;
    sbit  TRIG1_15_bit at TRIG1.B15;
    const register unsigned short int TRIG1_14 = 14;
    sbit  TRIG1_14_bit at TRIG1.B14;
    const register unsigned short int TRIG1_13 = 13;
    sbit  TRIG1_13_bit at TRIG1.B13;
    const register unsigned short int TRIG1_12 = 12;
    sbit  TRIG1_12_bit at TRIG1.B12;
    const register unsigned short int TRIG1_11 = 11;
    sbit  TRIG1_11_bit at TRIG1.B11;
    const register unsigned short int TRIG1_10 = 10;
    sbit  TRIG1_10_bit at TRIG1.B10;
    const register unsigned short int TRIG1_9 = 9;
    sbit  TRIG1_9_bit at TRIG1.B9;
    const register unsigned short int TRIG1_8 = 8;
    sbit  TRIG1_8_bit at TRIG1.B8;
    const register unsigned short int TRIG1_7 = 7;
    sbit  TRIG1_7_bit at TRIG1.B7;
    const register unsigned short int TRIG1_6 = 6;
    sbit  TRIG1_6_bit at TRIG1.B6;
    const register unsigned short int TRIG1_5 = 5;
    sbit  TRIG1_5_bit at TRIG1.B5;
    const register unsigned short int TRIG1_4 = 4;
    sbit  TRIG1_4_bit at TRIG1.B4;
    const register unsigned short int TRIG1_3 = 3;
    sbit  TRIG1_3_bit at TRIG1.B3;
    const register unsigned short int TRIG1_2 = 2;
    sbit  TRIG1_2_bit at TRIG1.B2;
    const register unsigned short int TRIG1_1 = 1;
    sbit  TRIG1_1_bit at TRIG1.B1;
    const register unsigned short int TRIG1_0 = 0;
    sbit  TRIG1_0_bit at TRIG1.B0;

    // TRGCON1 bits
    const register unsigned short int TRGDIV_2 = 15;
    sbit  TRGDIV_2_bit at TRGCON1.B15;
    sbit  TRGDIV_2_TRGCON1_bit at TRGCON1.B15;
    const register unsigned short int TRGDIV_1 = 14;
    sbit  TRGDIV_1_bit at TRGCON1.B14;
    sbit  TRGDIV_1_TRGCON1_bit at TRGCON1.B14;
    const register unsigned short int TRGDIV_0 = 13;
    sbit  TRGDIV_0_bit at TRGCON1.B13;
    sbit  TRGDIV_0_TRGCON1_bit at TRGCON1.B13;
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
    sbit  OSYNC_IOCON2_bit at IOCON2.B0;

    // FCLCON2 bits
    sbit  CLSRC_3_FCLCON2_bit at FCLCON2.B12;
    sbit  CLSRC_2_FCLCON2_bit at FCLCON2.B11;
    sbit  CLSRC_1_FCLCON2_bit at FCLCON2.B10;
    sbit  CLSRC_0_FCLCON2_bit at FCLCON2.B9;
    sbit  CLPOL_FCLCON2_bit at FCLCON2.B8;
    sbit  CLMODE_FCLCON2_bit at FCLCON2.B7;
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
    const register unsigned short int DTR2_15 = 15;
    sbit  DTR2_15_bit at DTR2.B15;
    const register unsigned short int DTR2_14 = 14;
    sbit  DTR2_14_bit at DTR2.B14;
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
    const register unsigned short int ALTDTR2_15 = 15;
    sbit  ALTDTR2_15_bit at ALTDTR2.B15;
    const register unsigned short int ALTDTR2_14 = 14;
    sbit  ALTDTR2_14_bit at ALTDTR2.B14;
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

    // TRIG2 bits
    const register unsigned short int TRIG2_15 = 15;
    sbit  TRIG2_15_bit at TRIG2.B15;
    const register unsigned short int TRIG2_14 = 14;
    sbit  TRIG2_14_bit at TRIG2.B14;
    const register unsigned short int TRIG2_13 = 13;
    sbit  TRIG2_13_bit at TRIG2.B13;
    const register unsigned short int TRIG2_12 = 12;
    sbit  TRIG2_12_bit at TRIG2.B12;
    const register unsigned short int TRIG2_11 = 11;
    sbit  TRIG2_11_bit at TRIG2.B11;
    const register unsigned short int TRIG2_10 = 10;
    sbit  TRIG2_10_bit at TRIG2.B10;
    const register unsigned short int TRIG2_9 = 9;
    sbit  TRIG2_9_bit at TRIG2.B9;
    const register unsigned short int TRIG2_8 = 8;
    sbit  TRIG2_8_bit at TRIG2.B8;
    const register unsigned short int TRIG2_7 = 7;
    sbit  TRIG2_7_bit at TRIG2.B7;
    const register unsigned short int TRIG2_6 = 6;
    sbit  TRIG2_6_bit at TRIG2.B6;
    const register unsigned short int TRIG2_5 = 5;
    sbit  TRIG2_5_bit at TRIG2.B5;
    const register unsigned short int TRIG2_4 = 4;
    sbit  TRIG2_4_bit at TRIG2.B4;
    const register unsigned short int TRIG2_3 = 3;
    sbit  TRIG2_3_bit at TRIG2.B3;
    const register unsigned short int TRIG2_2 = 2;
    sbit  TRIG2_2_bit at TRIG2.B2;
    const register unsigned short int TRIG2_1 = 1;
    sbit  TRIG2_1_bit at TRIG2.B1;
    const register unsigned short int TRIG2_0 = 0;
    sbit  TRIG2_0_bit at TRIG2.B0;

    // TRGCON2 bits
    sbit  TRGDIV_2_TRGCON2_bit at TRGCON2.B15;
    sbit  TRGDIV_1_TRGCON2_bit at TRGCON2.B14;
    sbit  TRGDIV_0_TRGCON2_bit at TRGCON2.B13;
    sbit  TRGSTRT_5_TRGCON2_bit at TRGCON2.B5;
    sbit  TRGSTRT_4_TRGCON2_bit at TRGCON2.B4;
    sbit  TRGSTRT_3_TRGCON2_bit at TRGCON2.B3;
    sbit  TRGSTRT_2_TRGCON2_bit at TRGCON2.B2;
    sbit  TRGSTRT_1_TRGCON2_bit at TRGCON2.B1;
    sbit  TRGSTRT_0_TRGCON2_bit at TRGCON2.B0;

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
    const register unsigned short int CMREF9 = 9;
    sbit  CMREF9_bit at CMPDAC1.B9;
    sbit  CMREF9_CMPDAC1_bit at CMPDAC1.B9;
    const register unsigned short int CMREF8 = 8;
    sbit  CMREF8_bit at CMPDAC1.B8;
    sbit  CMREF8_CMPDAC1_bit at CMPDAC1.B8;
    const register unsigned short int CMREF7 = 7;
    sbit  CMREF7_bit at CMPDAC1.B7;
    sbit  CMREF7_CMPDAC1_bit at CMPDAC1.B7;
    const register unsigned short int CMREF6 = 6;
    sbit  CMREF6_bit at CMPDAC1.B6;
    sbit  CMREF6_CMPDAC1_bit at CMPDAC1.B6;
    const register unsigned short int CMREF5 = 5;
    sbit  CMREF5_bit at CMPDAC1.B5;
    sbit  CMREF5_CMPDAC1_bit at CMPDAC1.B5;
    const register unsigned short int CMREF4 = 4;
    sbit  CMREF4_bit at CMPDAC1.B4;
    sbit  CMREF4_CMPDAC1_bit at CMPDAC1.B4;
    const register unsigned short int CMREF3 = 3;
    sbit  CMREF3_bit at CMPDAC1.B3;
    sbit  CMREF3_CMPDAC1_bit at CMPDAC1.B3;
    const register unsigned short int CMREF2 = 2;
    sbit  CMREF2_bit at CMPDAC1.B2;
    sbit  CMREF2_CMPDAC1_bit at CMPDAC1.B2;
    const register unsigned short int CMREF1 = 1;
    sbit  CMREF1_bit at CMPDAC1.B1;
    sbit  CMREF1_CMPDAC1_bit at CMPDAC1.B1;
    const register unsigned short int CMREF0 = 0;
    sbit  CMREF0_bit at CMPDAC1.B0;
    sbit  CMREF0_CMPDAC1_bit at CMPDAC1.B0;

    // CMPCON2 bits
    sbit  CMPON_CMPCON2_bit at CMPCON2.B15;
    sbit  CMPSIDL_CMPCON2_bit at CMPCON2.B13;
    sbit  INSEL_1_CMPCON2_bit at CMPCON2.B7;
    sbit  INSEL_0_CMPCON2_bit at CMPCON2.B6;
    sbit  EXTREF_CMPCON2_bit at CMPCON2.B5;
    sbit  CMPSTAT_CMPCON2_bit at CMPCON2.B3;
    sbit  CMPPOL_CMPCON2_bit at CMPCON2.B1;
    sbit  RANGE_CMPCON2_bit at CMPCON2.B0;

    // CMPDAC2 bits
    sbit  CMREF9_CMPDAC2_bit at CMPDAC2.B9;
    sbit  CMREF8_CMPDAC2_bit at CMPDAC2.B8;
    sbit  CMREF7_CMPDAC2_bit at CMPDAC2.B7;
    sbit  CMREF6_CMPDAC2_bit at CMPDAC2.B6;
    sbit  CMREF5_CMPDAC2_bit at CMPDAC2.B5;
    sbit  CMREF4_CMPDAC2_bit at CMPDAC2.B4;
    sbit  CMREF3_CMPDAC2_bit at CMPDAC2.B3;
    sbit  CMREF2_CMPDAC2_bit at CMPDAC2.B2;
    sbit  CMREF1_CMPDAC2_bit at CMPDAC2.B1;
    sbit  CMREF0_CMPDAC2_bit at CMPDAC2.B0;

    // RCON bits
    const register unsigned short int TRAPR = 15;
    sbit  TRAPR_bit at RCON.B15;
    const register unsigned short int IOPUWR = 14;
    sbit  IOPUWR_bit at RCON.B14;
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
    const register unsigned short int PRCDEN = 4;
    sbit  PRCDEN_bit at OSCCON.B4;
    const register unsigned short int CF = 3;
    sbit  CF_bit at OSCCON.B3;
    const register unsigned short int TSEQEN = 2;
    sbit  TSEQEN_bit at OSCCON.B2;
    const register unsigned short int OSWEN = 0;
    sbit  OSWEN_bit at OSCCON.B0;

    // OSCTUN bits
    const register unsigned short int TSEQ3_3 = 15;
    sbit  TSEQ3_3_bit at OSCTUN.B15;
    const register unsigned short int TSEQ3_2 = 14;
    sbit  TSEQ3_2_bit at OSCTUN.B14;
    const register unsigned short int TSEQ3_1 = 13;
    sbit  TSEQ3_1_bit at OSCTUN.B13;
    const register unsigned short int TSEQ3_0 = 12;
    sbit  TSEQ3_0_bit at OSCTUN.B12;
    const register unsigned short int TSEQ2_3 = 11;
    sbit  TSEQ2_3_bit at OSCTUN.B11;
    const register unsigned short int TSEQ2_2 = 10;
    sbit  TSEQ2_2_bit at OSCTUN.B10;
    const register unsigned short int TSEQ2_1 = 9;
    sbit  TSEQ2_1_bit at OSCTUN.B9;
    const register unsigned short int TSEQ2_0 = 8;
    sbit  TSEQ2_0_bit at OSCTUN.B8;
    const register unsigned short int TSEQ1_3 = 7;
    sbit  TSEQ1_3_bit at OSCTUN.B7;
    const register unsigned short int TSEQ1_2 = 6;
    sbit  TSEQ1_2_bit at OSCTUN.B6;
    const register unsigned short int TSEQ1_1 = 5;
    sbit  TSEQ1_1_bit at OSCTUN.B5;
    const register unsigned short int TSEQ1_0 = 4;
    sbit  TSEQ1_0_bit at OSCTUN.B4;
    const register unsigned short int TUN_3 = 3;
    sbit  TUN_3_bit at OSCTUN.B3;
    const register unsigned short int TUN_2 = 2;
    sbit  TUN_2_bit at OSCTUN.B2;
    const register unsigned short int TUN_1 = 1;
    sbit  TUN_1_bit at OSCTUN.B1;
    const register unsigned short int TUN_0 = 0;
    sbit  TUN_0_bit at OSCTUN.B0;

    // OSCTUN2 bits
    const register unsigned short int TSEQ7_3 = 15;
    sbit  TSEQ7_3_bit at OSCTUN2.B15;
    const register unsigned short int TSEQ7_2 = 14;
    sbit  TSEQ7_2_bit at OSCTUN2.B14;
    const register unsigned short int TSEQ7_1 = 13;
    sbit  TSEQ7_1_bit at OSCTUN2.B13;
    const register unsigned short int TSEQ7_0 = 12;
    sbit  TSEQ7_0_bit at OSCTUN2.B12;
    const register unsigned short int TSEQ6_3 = 11;
    sbit  TSEQ6_3_bit at OSCTUN2.B11;
    const register unsigned short int TSEQ6_2 = 10;
    sbit  TSEQ6_2_bit at OSCTUN2.B10;
    const register unsigned short int TSEQ6_1 = 9;
    sbit  TSEQ6_1_bit at OSCTUN2.B9;
    const register unsigned short int TSEQ6_0 = 8;
    sbit  TSEQ6_0_bit at OSCTUN2.B8;
    const register unsigned short int TSEQ5_3 = 7;
    sbit  TSEQ5_3_bit at OSCTUN2.B7;
    const register unsigned short int TSEQ5_2 = 6;
    sbit  TSEQ5_2_bit at OSCTUN2.B6;
    const register unsigned short int TSEQ5_1 = 5;
    sbit  TSEQ5_1_bit at OSCTUN2.B5;
    const register unsigned short int TSEQ5_0 = 4;
    sbit  TSEQ5_0_bit at OSCTUN2.B4;
    const register unsigned short int TSEQ4_3 = 3;
    sbit  TSEQ4_3_bit at OSCTUN2.B3;
    const register unsigned short int TSEQ4_2 = 2;
    sbit  TSEQ4_2_bit at OSCTUN2.B2;
    const register unsigned short int TSEQ4_1 = 1;
    sbit  TSEQ4_1_bit at OSCTUN2.B1;
    const register unsigned short int TSEQ4_0 = 0;
    sbit  TSEQ4_0_bit at OSCTUN2.B0;

    // LFSR bits
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

    // BSRAM bits
    const register unsigned short int IW_BSR = 2;
    sbit  IW_BSR_bit at BSRAM.B2;
    const register unsigned short int IR_BSR = 1;
    sbit  IR_BSR_bit at BSRAM.B1;
    const register unsigned short int RL_BSR = 0;
    sbit  RL_BSR_bit at BSRAM.B0;

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
    const register unsigned short int T3MD = 13;
    sbit  T3MD_bit at PMD1.B13;
    const register unsigned short int T2MD = 12;
    sbit  T2MD_bit at PMD1.B12;
    const register unsigned short int T1MD = 11;
    sbit  T1MD_bit at PMD1.B11;
    const register unsigned short int PWMMD = 9;
    sbit  PWMMD_bit at PMD1.B9;
    const register unsigned short int I2CMD = 7;
    sbit  I2CMD_bit at PMD1.B7;
    const register unsigned short int U1MD = 5;
    sbit  U1MD_bit at PMD1.B5;
    const register unsigned short int SPI1MD = 3;
    sbit  SPI1MD_bit at PMD1.B3;
    const register unsigned short int ADCMD = 0;
    sbit  ADCMD_bit at PMD1.B0;

    // PMD2 bits
    const register unsigned short int OC2MD = 1;
    sbit  OC2MD_bit at PMD2.B1;
    const register unsigned short int OC1MD = 0;
    sbit  OC1MD_bit at PMD2.B0;

    // PMD3 bits
    const register unsigned short int CMP_PSMD = 11;
    sbit  CMP_PSMD_bit at PMD3.B11;

    // Start of structures implementation for backward compatibility

// backward compatibility for PCHBITS
    typedef struct tagPCHBITS {
      unsigned PCH:7;
} typePCHBITS;
sfr volatile typePCHBITS PCHbits absolute 0x030;

// backward compatibility for RCOUNTBITS
    typedef struct tagRCOUNTBITS {
      unsigned RCOUNT:14;
} typeRCOUNTBITS;
sfr volatile typeRCOUNTBITS RCOUNTbits absolute 0x036;

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
      unsigned :1;
      unsigned OC1IF:1;
      unsigned T1IF:1;
      unsigned :2;
      unsigned T2IF:1;
      unsigned :1;
      unsigned SPI1IF:1;
      unsigned U1RXIF:1;
      unsigned U1TXIF:1;
      unsigned ADIF:1;
      unsigned NVMIF:1;
      unsigned SI2CIF:1;
      unsigned MI2CIF:1;
} typeIFS0BITS;
sfr volatile typeIFS0BITS IFS0bits absolute 0x084;

// backward compatibility for IFS1BITS
    typedef struct tagIFS1BITS {
      union {
        struct {
          unsigned INT1IF:1;
          unsigned INT2IF:1;
          unsigned PSEMIF:1;
          unsigned PWM1IF:1;
          unsigned PWM2IF:1;
          unsigned :6;
          unsigned CNIF:1;
          unsigned :1;
          unsigned AC1IF:1;
          unsigned AC2IF:1;
        };
        struct {
          unsigned :2;
          unsigned PWMEVIF:1;
        };
      };
} typeIFS1BITS;
sfr volatile typeIFS1BITS IFS1bits absolute 0x086;

// backward compatibility for IFS2BITS
    typedef struct tagIFS2BITS {
      unsigned :5;
      unsigned ADCP0IF:1;
      unsigned ADCP1IF:1;
      unsigned ADCP2IF:1;
} typeIFS2BITS;
sfr volatile typeIFS2BITS IFS2bits absolute 0x088;

// backward compatibility for IEC0BITS
    typedef struct tagIEC0BITS {
      unsigned INT0IE:1;
      unsigned :1;
      unsigned OC1IE:1;
      unsigned T1IE:1;
      unsigned :2;
      unsigned T2IE:1;
      unsigned :1;
      unsigned SPI1IE:1;
      unsigned U1RXIE:1;
      unsigned U1TXIE:1;
      unsigned ADIE:1;
      unsigned NVMIE:1;
      unsigned SI2CIE:1;
      unsigned MI2CIE:1;
} typeIEC0BITS;
sfr volatile typeIEC0BITS IEC0bits absolute 0x094;

// backward compatibility for IEC1BITS
    typedef struct tagIEC1BITS {
      union {
        struct {
          unsigned INT1IE:1;
          unsigned INT2IE:1;
          unsigned PSEMIE:1;
          unsigned PWM1IE:1;
          unsigned PWM2IE:1;
          unsigned :6;
          unsigned CNIE:1;
          unsigned :1;
          unsigned AC1IE:1;
          unsigned AC2IE:1;
        };
        struct {
          unsigned :2;
          unsigned PWMEVIE:1;
        };
      };
} typeIEC1BITS;
sfr volatile typeIEC1BITS IEC1bits absolute 0x096;

// backward compatibility for IEC2BITS
    typedef struct tagIEC2BITS {
      unsigned :5;
      unsigned ADCP0IE:1;
      unsigned ADCP1IE:1;
      unsigned ADCP2IE:1;
} typeIEC2BITS;
sfr volatile typeIEC2BITS IEC2bits absolute 0x098;

// backward compatibility for IPC0BITS
    typedef struct tagIPC0BITS {
      union {
        struct {
          unsigned INT0IP:3;
          unsigned :5;
          unsigned OC1IP:3;
          unsigned :1;
          unsigned T1IP:3;
        };
        struct {
          unsigned INT0IP0:1;
          unsigned INT0IP1:1;
          unsigned INT0IP2:1;
          unsigned :5;
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
          unsigned :8;
          unsigned T2IP:3;
        };
        struct {
          unsigned :8;
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
sfr volatile typeIPC2BITS IPC2bits absolute 0x0A8;

// backward compatibility for IPC3BITS
    typedef struct tagIPC3BITS {
      union {
        struct {
          unsigned NVMIP:3;
          unsigned :1;
          unsigned SI2CIP:3;
          unsigned :1;
          unsigned MI2CIP:3;
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
        };
      };
} typeIPC3BITS;
sfr volatile typeIPC3BITS IPC3bits absolute 0x0AA;

// backward compatibility for IPC4BITS
    typedef struct tagIPC4BITS {
      union {
        struct {
          unsigned INT1IP:3;
          unsigned :1;
          unsigned INT2IP:3;
          unsigned :1;
          unsigned PSEMIP:3;
          unsigned :1;
          unsigned PWM1IP:3;
        };
        struct {
          unsigned INT1IP0:1;
          unsigned INT1IP1:1;
          unsigned INT1IP2:1;
          unsigned :1;
          unsigned INT2IP0:1;
          unsigned INT2IP1:1;
          unsigned INT2IP2:1;
          unsigned :1;
          unsigned PSEMIP0:1;
          unsigned PSEMIP1:1;
          unsigned PSEMIP2:1;
          unsigned :1;
          unsigned PWM1IP0:1;
          unsigned PWM1IP1:1;
          unsigned PWM1IP2:1;
        };
      };
} typeIPC4BITS;
sfr volatile typeIPC4BITS IPC4bits absolute 0x0AC;

// backward compatibility for IPC5BITS
    typedef struct tagIPC5BITS {
      union {
        struct {
          unsigned PWM2IP:3;
        };
        struct {
          unsigned PWM2IP0:1;
          unsigned PWM2IP1:1;
          unsigned PWM2IP2:1;
        };
      };
} typeIPC5BITS;
sfr volatile typeIPC5BITS IPC5bits absolute 0x0AE;

// backward compatibility for IPC6BITS
    typedef struct tagIPC6BITS {
      union {
        struct {
          unsigned :12;
          unsigned CNIP:3;
        };
        struct {
          unsigned :12;
          unsigned CNIP0:1;
          unsigned CNIP1:1;
          unsigned CNIP2:1;
        };
      };
} typeIPC6BITS;
sfr volatile typeIPC6BITS IPC6bits absolute 0x0B0;

// backward compatibility for IPC7BITS
    typedef struct tagIPC7BITS {
      union {
        struct {
          unsigned :4;
          unsigned AC1IP:3;
          unsigned :1;
          unsigned AC2IP:3;
        };
        struct {
          unsigned :4;
          unsigned AC1IP0:1;
          unsigned AC1IP1:1;
          unsigned AC1IP2:1;
          unsigned :1;
          unsigned AC2IP0:1;
          unsigned AC2IP1:1;
          unsigned AC2IP2:1;
        };
      };
} typeIPC7BITS;
sfr volatile typeIPC7BITS IPC7bits absolute 0x0B2;

// backward compatibility for IPC9BITS
    typedef struct tagIPC9BITS {
      union {
        struct {
          unsigned :4;
          unsigned ADCP0IP:3;
          unsigned :1;
          unsigned ADCP1IP:3;
          unsigned :1;
          unsigned ADCP2IP:3;
        };
        struct {
          unsigned :4;
          unsigned ADCP0IP0:1;
          unsigned ADCP0IP1:1;
          unsigned ADCP0IP2:1;
          unsigned :1;
          unsigned ADCP1IP0:1;
          unsigned ADCP1IP1:1;
          unsigned ADCP1IP2:1;
          unsigned :1;
          unsigned ADCP2IP0:1;
          unsigned ADCP2IP1:1;
          unsigned ADCP2IP2:1;
        };
      };
} typeIPC9BITS;
sfr volatile typeIPC9BITS IPC9bits absolute 0x0B6;

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
sfr volatile typeUART UART1 absolute 0x220;

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
          unsigned :2;
          unsigned ALTIO:1;
          unsigned :1;
          unsigned IREN:1;
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
        struct {
          unsigned :8;
          unsigned UTX8:1;
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
        struct {
          unsigned :8;
          unsigned URX8:1;
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
          unsigned DISSCK:1;
        };
        struct {
          unsigned PPRE:2;
          unsigned SPRE:3;
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
      unsigned :9;
      unsigned TRISA9:1;
} typeTRISABITS;
sfr volatile typeTRISABITS TRISAbits absolute 0x2C0;

// backward compatibility for PORTABITS
    typedef struct tagPORTABITS {
      unsigned :9;
      unsigned RA9:1;
} typePORTABITS;
sfr volatile typePORTABITS PORTAbits absolute 0x2C2;

// backward compatibility for LATABITS
    typedef struct tagLATABITS {
      unsigned :9;
      unsigned LATA9:1;
} typeLATABITS;
sfr volatile typeLATABITS LATAbits absolute 0x2C4;

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
} typeLATBBITS;
sfr volatile typeLATBBITS LATBbits absolute 0x2CA;

// backward compatibility for TRISDBITS
    typedef struct tagTRISDBITS {
      unsigned TRISD0:1;
} typeTRISDBITS;
sfr volatile typeTRISDBITS TRISDbits absolute 0x2D2;

// backward compatibility for PORTDBITS
    typedef struct tagPORTDBITS {
      unsigned RD0:1;
} typePORTDBITS;
sfr volatile typePORTDBITS PORTDbits absolute 0x2D4;

// backward compatibility for LATDBITS
    typedef struct tagLATDBITS {
      unsigned LATD0:1;
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
      unsigned TRISE6:1;
      unsigned TRISE7:1;
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
      unsigned RE6:1;
      unsigned RE7:1;
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
      unsigned LATE6:1;
      unsigned LATE7:1;
} typeLATEBITS;
sfr volatile typeLATEBITS LATEbits absolute 0x2DC;

// backward compatibility for TRISFBITS
    typedef struct tagTRISFBITS {
      unsigned :6;
      unsigned TRISF6:1;
      unsigned TRISF7:1;
      unsigned TRISF8:1;
} typeTRISFBITS;
sfr volatile typeTRISFBITS TRISFbits absolute 0x2DE;

// backward compatibility for PORTFBITS
    typedef struct tagPORTFBITS {
      unsigned :6;
      unsigned RF6:1;
      unsigned RF7:1;
      unsigned RF8:1;
} typePORTFBITS;
sfr volatile typePORTFBITS PORTFbits absolute 0x2E0;

// backward compatibility for LATFBITS
    typedef struct tagLATFBITS {
      unsigned :6;
      unsigned LATF6:1;
      unsigned LATF7:1;
      unsigned LATF8:1;
} typeLATFBITS;
sfr volatile typeLATFBITS LATFbits absolute 0x2E2;

// backward compatibility for ADCONBITS
    typedef struct tagADCONBITS {
      union {
        struct {
          unsigned ADCS:3;
          unsigned :2;
          unsigned SEQSAMP:1;
          unsigned ORDER:1;
          unsigned EIE:1;
          unsigned FORM:1;
          unsigned :1;
          unsigned GSWTRG:1;
          unsigned :2;
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
      union {
        struct {
          unsigned PCFG:8;
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
        };
      };
} typeADPCFGBITS;
sfr volatile typeADPCFGBITS ADPCFGbits absolute 0x302;

// backward compatibility for ADSTATBITS
    typedef struct tagADSTATBITS {
      union {
        struct {
          unsigned PxRDY:3;
        };
        struct {
          unsigned P0RDY:1;
          unsigned P1RDY:1;
          unsigned P2RDY:1;
        };
      };
} typeADSTATBITS;
sfr volatile typeADSTATBITS ADSTATbits absolute 0x306;

// backward compatibility for ADBASEBITS
    typedef struct tagADBASEBITS {
      unsigned :1;
      unsigned ADBASE:15;
} typeADBASEBITS;
sfr volatile typeADBASEBITS ADBASEbits absolute 0x308;

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
          unsigned TRGSRC15:1;
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

// backward compatibility for ADCBUF0BITS
    typedef struct tagADCBUF0BITS {
      unsigned ADCBUF0:10;
} typeADCBUF0BITS;
sfr volatile typeADCBUF0BITS ADCBUF0bits absolute 0x320;

// backward compatibility for ADCBUF1BITS
    typedef struct tagADCBUF1BITS {
      unsigned ADCBUF1:10;
} typeADCBUF1BITS;
sfr volatile typeADCBUF1BITS ADCBUF1bits absolute 0x322;

// backward compatibility for ADCBUF2BITS
    typedef struct tagADCBUF2BITS {
      unsigned ADCBUF2:10;
} typeADCBUF2BITS;
sfr volatile typeADCBUF2BITS ADCBUF2bits absolute 0x324;

// backward compatibility for ADCBUF3BITS
    typedef struct tagADCBUF3BITS {
      unsigned ADCBUF3:10;
} typeADCBUF3BITS;
sfr volatile typeADCBUF3BITS ADCBUF3bits absolute 0x326;

// backward compatibility for ADCBUF4BITS
    typedef struct tagADCBUF4BITS {
      unsigned ADCBUF4:10;
} typeADCBUF4BITS;
sfr volatile typeADCBUF4BITS ADCBUF4bits absolute 0x328;

// backward compatibility for ADCBUF5BITS
    typedef struct tagADCBUF5BITS {
      unsigned ADCBUF5:10;
} typeADCBUF5BITS;
sfr volatile typeADCBUF5BITS ADCBUF5bits absolute 0x32A;

// backward compatibility for PTCONBITS
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
sfr volatile typePTCONBITS PTCONbits absolute 0x400;

// backward compatibility for PTPERBITS
    typedef struct tagPTPERBITS {
      unsigned :3;
      unsigned PTPER:13;
} typePTPERBITS;
sfr volatile typePTPERBITS PTPERbits absolute 0x402;

// backward compatibility for SEVTCMPBITS
    typedef struct tagSEVTCMPBITS {
      unsigned :3;
      unsigned SEVTCMP:13;
} typeSEVTCMPBITS;
sfr volatile typeSEVTCMPBITS SEVTCMPbits absolute 0x406;

// backward compatibility for PWMCON1BITS
    typedef struct tagPWMCON1BITS {
      union {
        struct {
          unsigned IUE:1;
          unsigned XPRES:1;
          unsigned :4;
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
sfr volatile typePWMCON1BITS PWMCON1bits absolute 0x408;

// backward compatibility for IOCON1BITS
    typedef struct tagIOCON1BITS {
      union {
        struct {
          unsigned OSYNC:1;
          unsigned :1;
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
sfr volatile typeIOCON1BITS IOCON1bits absolute 0x40A;

// backward compatibility for FCLCON1BITS
    typedef struct tagFCLCON1BITS {
      union {
        struct {
          unsigned FLTMOD:2;
          unsigned FLTPOL:1;
          unsigned FLTSRC:4;
          unsigned CLMODE:1;
          unsigned CLPOL:1;
          unsigned CLSRC:4;
        };
        struct {
          unsigned FLTMOD0:1;
          unsigned FLTMOD1:1;
          unsigned :1;
          unsigned FLTSRC0:1;
          unsigned FLTSRC1:1;
          unsigned FLTSRC2:1;
          unsigned FLTSRC3:1;
          unsigned :2;
          unsigned CLSRC0:1;
          unsigned CLSRC1:1;
          unsigned CLSRC2:1;
          unsigned CLSRC3:1;
        };
      };
} typeFCLCON1BITS;
sfr volatile typeFCLCON1BITS FCLCON1bits absolute 0x40C;

// backward compatibility for TRIG1BITS
    typedef struct tagTRIG1BITS {
      union {
        struct {
          unsigned TRIG1:16;
        };
        struct {
          unsigned :4;
          unsigned TRIG:12;
        };
      };
} typeTRIG1BITS;
sfr volatile typeTRIG1BITS TRIG1bits absolute 0x416;

// backward compatibility for TRGCON1BITS
    typedef struct tagTRGCON1BITS {
      union {
        struct {
          unsigned TRGSTRT:6;
          unsigned :7;
          unsigned TRGDIV:3;
        };
        struct {
          unsigned TRGSTRT0:1;
          unsigned TRGSTRT1:1;
          unsigned TRGSTRT2:1;
          unsigned TRGSTRT3:1;
          unsigned TRGSTRT4:1;
          unsigned TRGSTRT5:1;
          unsigned :7;
          unsigned TRGDIV0:1;
          unsigned TRGDIV1:1;
          unsigned TRGDIV2:1;
        };
      };
} typeTRGCON1BITS;
sfr volatile typeTRGCON1BITS TRGCON1bits absolute 0x418;

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
sfr volatile typeLEBCON1BITS LEBCON1bits absolute 0x41A;

// backward compatibility for PWMCON2BITS
    typedef struct tagPWMCON2BITS {
      union {
        struct {
          unsigned IUE:1;
          unsigned XPRES:1;
          unsigned :4;
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
sfr volatile typePWMCON2BITS PWMCON2bits absolute 0x41C;

// backward compatibility for IOCON2BITS
    typedef struct tagIOCON2BITS {
      union {
        struct {
          unsigned OSYNC:1;
          unsigned :1;
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
sfr volatile typeIOCON2BITS IOCON2bits absolute 0x41E;

// backward compatibility for FCLCON2BITS
    typedef struct tagFCLCON2BITS {
      union {
        struct {
          unsigned FLTMOD:2;
          unsigned FLTPOL:1;
          unsigned FLTSRC:4;
          unsigned CLMODE:1;
          unsigned CLPOL:1;
          unsigned CLSRC:4;
        };
        struct {
          unsigned FLTMOD0:1;
          unsigned FLTMOD1:1;
          unsigned :1;
          unsigned FLTSRC0:1;
          unsigned FLTSRC1:1;
          unsigned FLTSRC2:1;
          unsigned FLTSRC3:1;
          unsigned :2;
          unsigned CLSRC0:1;
          unsigned CLSRC1:1;
          unsigned CLSRC2:1;
          unsigned CLSRC3:1;
        };
      };
} typeFCLCON2BITS;
sfr volatile typeFCLCON2BITS FCLCON2bits absolute 0x420;

// backward compatibility for TRIG2BITS
    typedef struct tagTRIG2BITS {
      union {
        struct {
          unsigned TRIG2:16;
        };
        struct {
          unsigned :4;
          unsigned TRIG:12;
        };
      };
} typeTRIG2BITS;
sfr volatile typeTRIG2BITS TRIG2bits absolute 0x42A;

// backward compatibility for TRGCON2BITS
    typedef struct tagTRGCON2BITS {
      union {
        struct {
          unsigned TRGSTRT:6;
          unsigned :7;
          unsigned TRGDIV:3;
        };
        struct {
          unsigned TRGSTRT0:1;
          unsigned TRGSTRT1:1;
          unsigned TRGSTRT2:1;
          unsigned TRGSTRT3:1;
          unsigned TRGSTRT4:1;
          unsigned TRGSTRT5:1;
          unsigned :7;
          unsigned TRGDIV0:1;
          unsigned TRGDIV1:1;
          unsigned TRGDIV2:1;
        };
      };
} typeTRGCON2BITS;
sfr volatile typeTRGCON2BITS TRGCON2bits absolute 0x42C;

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
sfr volatile typeLEBCON2BITS LEBCON2bits absolute 0x42E;

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
          unsigned :5;
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
sfr volatile typeCMPCON1BITS CMPCON1bits absolute 0x4C0;

// backward compatibility for CMPDAC1BITS
    typedef struct tagCMPDAC1BITS {
      union {
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
        struct {
          unsigned CMREF:10;
        };
      };
} typeCMPDAC1BITS;
sfr volatile typeCMPDAC1BITS CMPDAC1bits absolute 0x4C2;

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
          unsigned :5;
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
sfr volatile typeCMPCON2BITS CMPCON2bits absolute 0x4C4;

// backward compatibility for CMPDAC2BITS
    typedef struct tagCMPDAC2BITS {
      union {
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
        struct {
          unsigned CMREF:10;
        };
      };
} typeCMPDAC2BITS;
sfr volatile typeCMPDAC2BITS CMPDAC2bits absolute 0x4C6;

// backward compatibility for RCONBITS
    typedef struct tagRCONBITS {
      unsigned POR:1;
      unsigned :1;
      unsigned IDLE:1;
      unsigned SLEEP:1;
      unsigned WDTO:1;
      unsigned SWDTEN:1;
      unsigned SWR:1;
      unsigned EXTR:1;
      unsigned :6;
      unsigned IOPUWR:1;
      unsigned TRAPR:1;
} typeRCONBITS;
sfr volatile typeRCONBITS RCONbits absolute 0x740;

// backward compatibility for OSCCONBITS
    typedef struct tagOSCCONBITS {
      union {
        struct {
          unsigned OSWEN:1;
          unsigned :1;
          unsigned TSEQEN:1;
          unsigned CF:1;
          unsigned PRCDEN:1;
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

// backward compatibility for OSCTUNBITS
    typedef struct tagOSCTUNBITS {
      union {
        struct {
          unsigned TUN:4;
          unsigned TSEQ1:4;
          unsigned TSEQ2:4;
          unsigned TSEQ3:4;
        };
        struct {
          unsigned TUN0:1;
          unsigned TUN1:1;
          unsigned TUN2:1;
          unsigned TUN3:1;
        };
      };
} typeOSCTUNBITS;
sfr volatile typeOSCTUNBITS OSCTUNbits absolute 0x748;

// backward compatibility for OSCTUN2BITS
    typedef struct tagOSCTUN2BITS {
      unsigned TSEQ4:4;
      unsigned TSEQ5:4;
      unsigned TSEQ6:4;
      unsigned TSEQ7:4;
} typeOSCTUN2BITS;
sfr volatile typeOSCTUN2BITS OSCTUN2bits absolute 0x74A;

// backward compatibility for LFSRBITS
    typedef struct tagLFSRBITS {
      unsigned LFSR:15;
} typeLFSRBITS;
sfr volatile typeLFSRBITS LFSRbits absolute 0x74C;

// backward compatibility for BSRAMBITS
    typedef struct tagBSRAMBITS {
      unsigned RL_BSR:1;
      unsigned IR_BSR:1;
      unsigned IW_BSR:1;
} typeBSRAMBITS;
sfr volatile typeBSRAMBITS BSRAMbits absolute 0x750;

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

// backward compatibility for NVMKEYBITS
    typedef struct tagNVMKEYBITS {
      union {
        struct {
          unsigned KEY:8;
        };
        struct {
          unsigned NVMKEY:8;
        };
      };
} typeNVMKEYBITS;
sfr volatile typeNVMKEYBITS NVMKEYbits absolute 0x766;

// backward compatibility for PMD1BITS
    typedef struct tagPMD1BITS {
      unsigned ADCMD:1;
      unsigned :2;
      unsigned SPI1MD:1;
      unsigned :1;
      unsigned U1MD:1;
      unsigned :1;
      unsigned I2CMD:1;
      unsigned :1;
      unsigned PWMMD:1;
      unsigned :1;
      unsigned T1MD:1;
      unsigned T2MD:1;
      unsigned T3MD:1;
} typePMD1BITS;
sfr volatile typePMD1BITS PMD1bits absolute 0x770;

// backward compatibility for PMD2BITS
    typedef struct tagPMD2BITS {
      unsigned OC1MD:1;
      unsigned OC2MD:1;
} typePMD2BITS;
sfr volatile typePMD2BITS PMD2bits absolute 0x772;

// backward compatibility for PMD3BITS
    typedef struct tagPMD3BITS {
      unsigned :11;
      unsigned CMP_PSMD:1;
} typePMD3BITS;
sfr volatile typePMD3BITS PMD3bits absolute 0x774;

