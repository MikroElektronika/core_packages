// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00002000;

const unsigned short ICS_AUTO                  =     0;
const unsigned short ICS_OFF                   =     3;

// Addres offset from Output to Input (port) registers
const signed short   OUTPUT_TO_INPUT_OFFSET    =     -2;

// Rx space registers
sfr rx unsigned short R0  absolute 0x00;
sfr rx unsigned short R1  absolute 0x01;
sfr rx unsigned short R2  absolute 0x02;
sfr rx unsigned short R3  absolute 0x03;
sfr rx unsigned short R4  absolute 0x04;
sfr rx unsigned short R5  absolute 0x05;
sfr rx unsigned short R6  absolute 0x06;
sfr rx unsigned short R7  absolute 0x07;
sfr rx unsigned short R8  absolute 0x08;
sfr rx unsigned short R9  absolute 0x09;
sfr rx unsigned short R10 absolute 0x0A;
sfr rx unsigned short R11 absolute 0x0B;
sfr rx unsigned short R12 absolute 0x0C;
sfr rx unsigned short R13 absolute 0x0D;
sfr rx unsigned short R14 absolute 0x0E;
sfr rx unsigned short R15 absolute 0x0F;
sfr rx unsigned short R16 absolute 0x10;
sfr rx unsigned short R17 absolute 0x11;
sfr rx unsigned short R18 absolute 0x12;
sfr rx unsigned short R19 absolute 0x13;
sfr rx unsigned short R20 absolute 0x14;
sfr rx unsigned short R21 absolute 0x15;
sfr rx unsigned short R22 absolute 0x16;
sfr rx unsigned short R23 absolute 0x17;
sfr rx unsigned short R24 absolute 0x18;
sfr rx unsigned short R25 absolute 0x19;
sfr rx unsigned short R26 absolute 0x1A;
sfr rx unsigned short R27 absolute 0x1B;
sfr rx unsigned short R28 absolute 0x1C;
sfr rx unsigned short R29 absolute 0x1D;
sfr rx unsigned short R30 absolute 0x1E;
sfr rx unsigned short R31 absolute 0x1F;

// X, Y and Z registers
sfr rx unsigned short XL absolute 0x1A;
sfr rx unsigned short XH absolute 0x1B;
sfr rx unsigned short YL absolute 0x1C;
sfr rx unsigned short YH absolute 0x1D;
sfr rx unsigned short ZL absolute 0x1E;
sfr rx unsigned short ZH absolute 0x1F;
sfr rx unsigned int   X  absolute 0x1A;
sfr rx unsigned int   Y  absolute 0x1C;
sfr rx unsigned int   Z  absolute 0x1E;


// Interrupt Vector Table Constants
const unsigned short IVT_ADDR_CRCSCAN = 0x0002;
const unsigned short IVT_ADDR_BOD = 0x0004;
const unsigned short IVT_ADDR_PORTA = 0x0006;
const unsigned short IVT_ADDR_PORTB = 0x0008;
const unsigned short IVT_ADDR_PORTC = 0x000A;
const unsigned short IVT_ADDR_RTC_CNT = 0x000C;
const unsigned short IVT_ADDR_RTC_PIT = 0x000E;
const unsigned short IVT_ADDR_TCA0_LUNF = 0x0010;
const unsigned short IVT_ADDR_TCA0_OVF = 0x0010;
const unsigned short IVT_ADDR_TCA0_HUNF = 0x0012;
const unsigned short IVT_ADDR_TCA0_LCMP0 = 0x0014;
const unsigned short IVT_ADDR_TCA0_CMP0 = 0x0014;
const unsigned short IVT_ADDR_TCA0_CMP1 = 0x0016;
const unsigned short IVT_ADDR_TCA0_LCMP1 = 0x0016;
const unsigned short IVT_ADDR_TCA0_CMP2 = 0x0018;
const unsigned short IVT_ADDR_TCA0_LCMP2 = 0x0018;
const unsigned short IVT_ADDR_TCB0_INT = 0x001A;
const unsigned short IVT_ADDR_TCD0_OVF = 0x001C;
const unsigned short IVT_ADDR_TCD0_TRIG = 0x001E;
const unsigned short IVT_ADDR_AC0 = 0x0020;
const unsigned short IVT_ADDR_ADC0_RESRDY = 0x0022;
const unsigned short IVT_ADDR_ADC0_WCOMP = 0x0024;
const unsigned short IVT_ADDR_TWI0_TWIS = 0x0026;
const unsigned short IVT_ADDR_TWI0_TWIM = 0x0028;
const unsigned short IVT_ADDR_SPI0 = 0x002A;
const unsigned short IVT_ADDR_USART0_RXC = 0x002C;
const unsigned short IVT_ADDR_USART0_DRE = 0x002E;
const unsigned short IVT_ADDR_USART0_TXC = 0x0030;
const unsigned short IVT_ADDR_NVMCTRL = 0x0032;

sfr data unsigned char volatile CTRLA                     absolute 0x0670;
    const register unsigned short int ENABLE = 0;
    sbit  ENABLE_bit at CTRLA.B0;
    const register unsigned short int HYSMODE0 = 1;
    sbit  HYSMODE0_bit at CTRLA.B1;
    const register unsigned short int HYSMODE1 = 2;
    sbit  HYSMODE1_bit at CTRLA.B2;
    const register unsigned short int INTMODE0 = 4;
    sbit  INTMODE0_bit at CTRLA.B4;
    const register unsigned short int INTMODE1 = 5;
    sbit  INTMODE1_bit at CTRLA.B5;
    const register unsigned short int LSMODE = 3;
    sbit  LSMODE_bit at CTRLA.B3;
    const register unsigned short int OUTEN = 6;
    sbit  OUTEN_bit at CTRLA.B6;
    const register unsigned short int RUNSTDBY = 7;
    sbit  RUNSTDBY_bit at CTRLA.B7;

sfr data unsigned char volatile INTCTRL                   absolute 0x0676;
sfr data unsigned char volatile MUXCTRLA                  absolute 0x0672;
    const register unsigned short int INVERT = 7;
    sbit  INVERT_bit at MUXCTRLA.B7;
    const register unsigned short int MUXNEG0 = 0;
    sbit  MUXNEG0_bit at MUXCTRLA.B0;
    const register unsigned short int MUXNEG1 = 1;
    sbit  MUXNEG1_bit at MUXCTRLA.B1;
    const register unsigned short int MUXPOS0 = 3;
    sbit  MUXPOS0_bit at MUXCTRLA.B3;
    const register unsigned short int MUXPOS1 = 4;
    sbit  MUXPOS1_bit at MUXCTRLA.B4;

sfr data unsigned char volatile STATUS                    absolute 0x0677;
    const register unsigned short int STATE = 4;
    sbit  STATE_bit at STATUS.B4;

sfr data unsigned char volatile CALIB                     absolute 0x0616;
    const register unsigned short int DUTYCYC = 0;
    sbit  DUTYCYC_bit at CALIB.B0;

sfr data unsigned char volatile COMMAND_ADC0              absolute 0x0608;
    const register unsigned short int STCONV = 0;
    sbit  STCONV_bit at COMMAND_ADC0.B0;

sfr data unsigned char volatile CTRLA_ADC0                absolute 0x0600;
    sbit  ENABLE_CTRLA_ADC0_bit at CTRLA_ADC0.B0;
    const register unsigned short int FREERUN = 1;
    sbit  FREERUN_bit at CTRLA_ADC0.B1;
    const register unsigned short int RESSEL = 2;
    sbit  RESSEL_bit at CTRLA_ADC0.B2;
    const register unsigned short int RUNSTBY = 7;
    sbit  RUNSTBY_bit at CTRLA_ADC0.B7;

sfr data unsigned char volatile CTRLB                     absolute 0x0601;
    const register unsigned short int SAMPLNUM0 = 0;
    sbit  SAMPLNUM0_bit at CTRLB.B0;
    const register unsigned short int SAMPLNUM1 = 1;
    sbit  SAMPLNUM1_bit at CTRLB.B1;
    const register unsigned short int SAMPLNUM2 = 2;
    sbit  SAMPLNUM2_bit at CTRLB.B2;

sfr data unsigned char volatile CTRLC                     absolute 0x0602;
    const register unsigned short int PRESC0 = 0;
    sbit  PRESC0_bit at CTRLC.B0;
    const register unsigned short int PRESC1 = 1;
    sbit  PRESC1_bit at CTRLC.B1;
    const register unsigned short int PRESC2 = 2;
    sbit  PRESC2_bit at CTRLC.B2;
    const register unsigned short int REFSEL0 = 4;
    sbit  REFSEL0_bit at CTRLC.B4;
    const register unsigned short int REFSEL1 = 5;
    sbit  REFSEL1_bit at CTRLC.B5;
    const register unsigned short int SAMPCAP = 6;
    sbit  SAMPCAP_bit at CTRLC.B6;

sfr data unsigned char volatile CTRLD                     absolute 0x0603;
    const register unsigned short int ASDV = 4;
    sbit  ASDV_bit at CTRLD.B4;
    const register unsigned short int CHDLY0 = 5;
    sbit  CHDLY0_bit at CTRLD.B5;
    const register unsigned short int CHDLY1 = 6;
    sbit  CHDLY1_bit at CTRLD.B6;
    const register unsigned short int CHDLY2 = 7;
    sbit  CHDLY2_bit at CTRLD.B7;
    const register unsigned short int SAMPDLY0 = 0;
    sbit  SAMPDLY0_bit at CTRLD.B0;
    const register unsigned short int SAMPDLY1 = 1;
    sbit  SAMPDLY1_bit at CTRLD.B1;
    const register unsigned short int SAMPDLY2 = 2;
    sbit  SAMPDLY2_bit at CTRLD.B2;
    const register unsigned short int SAMPDLY3 = 3;
    sbit  SAMPDLY3_bit at CTRLD.B3;

sfr data unsigned char volatile CTRLE                     absolute 0x0604;
    const register unsigned short int WINCM0 = 0;
    sbit  WINCM0_bit at CTRLE.B0;
    const register unsigned short int WINCM1 = 1;
    sbit  WINCM1_bit at CTRLE.B1;
    const register unsigned short int WINCM2 = 2;
    sbit  WINCM2_bit at CTRLE.B2;

sfr data unsigned char volatile DBGCTRL                   absolute 0x060C;
    const register unsigned short int DBGRUN = 0;
    sbit  DBGRUN_bit at DBGCTRL.B0;

sfr data unsigned char volatile EVCTRL                    absolute 0x0609;
    const register unsigned short int STARTEI = 0;
    sbit  STARTEI_bit at EVCTRL.B0;

sfr data unsigned char volatile INTCTRL_ADC0              absolute 0x060A;
    const register unsigned short int RESRDY = 0;
    sbit  RESRDY_bit at INTCTRL_ADC0.B0;
    const register unsigned short int WCMP = 1;
    sbit  WCMP_bit at INTCTRL_ADC0.B1;

sfr data unsigned char volatile INTFLAGS                  absolute 0x060B;
    sbit  RESRDY_INTFLAGS_bit at INTFLAGS.B0;
    sbit  WCMP_INTFLAGS_bit at INTFLAGS.B1;

sfr data unsigned char volatile MUXPOS                    absolute 0x0606;
    sbit  MUXPOS0_MUXPOS_bit at MUXPOS.B0;
    sbit  MUXPOS1_MUXPOS_bit at MUXPOS.B1;
    const register unsigned short int MUXPOS2 = 2;
    sbit  MUXPOS2_bit at MUXPOS.B2;
    const register unsigned short int MUXPOS3 = 3;
    sbit  MUXPOS3_bit at MUXPOS.B3;
    const register unsigned short int MUXPOS4 = 4;
    sbit  MUXPOS4_bit at MUXPOS.B4;

sfr data unsigned int  volatile RES                       absolute 0x0610;
sfr data unsigned char volatile SAMPCTRL                  absolute 0x0605;
    const register unsigned short int SAMPLEN0 = 0;
    sbit  SAMPLEN0_bit at SAMPCTRL.B0;
    const register unsigned short int SAMPLEN1 = 1;
    sbit  SAMPLEN1_bit at SAMPCTRL.B1;
    const register unsigned short int SAMPLEN2 = 2;
    sbit  SAMPLEN2_bit at SAMPCTRL.B2;
    const register unsigned short int SAMPLEN3 = 3;
    sbit  SAMPLEN3_bit at SAMPCTRL.B3;
    const register unsigned short int SAMPLEN4 = 4;
    sbit  SAMPLEN4_bit at SAMPCTRL.B4;

sfr data unsigned char volatile TEMP                      absolute 0x060D;
    const register unsigned short int TEMP0 = 0;
    sbit  TEMP0_bit at TEMP.B0;
    const register unsigned short int TEMP1 = 1;
    sbit  TEMP1_bit at TEMP.B1;
    const register unsigned short int TEMP2 = 2;
    sbit  TEMP2_bit at TEMP.B2;
    const register unsigned short int TEMP3 = 3;
    sbit  TEMP3_bit at TEMP.B3;
    const register unsigned short int TEMP4 = 4;
    sbit  TEMP4_bit at TEMP.B4;
    const register unsigned short int TEMP5 = 5;
    sbit  TEMP5_bit at TEMP.B5;
    const register unsigned short int TEMP6 = 6;
    sbit  TEMP6_bit at TEMP.B6;
    const register unsigned short int TEMP7 = 7;
    sbit  TEMP7_bit at TEMP.B7;

sfr data unsigned int  volatile WINHT                     absolute 0x0614;
sfr data unsigned int  volatile WINLT                     absolute 0x0612;
sfr data unsigned char volatile CTRLA_BOD                 absolute 0x0080;
    const register unsigned short int ACTIVE0 = 2;
    sbit  ACTIVE0_bit at CTRLA_BOD.B2;
    const register unsigned short int ACTIVE1 = 3;
    sbit  ACTIVE1_bit at CTRLA_BOD.B3;
    const register unsigned short int SAMPLFREQ = 4;
    sbit  SAMPLFREQ_bit at CTRLA_BOD.B4;
    const register unsigned short int SLEEP0 = 0;
    sbit  SLEEP0_bit at CTRLA_BOD.B0;
    const register unsigned short int SLEEP1 = 1;
    sbit  SLEEP1_bit at CTRLA_BOD.B1;

sfr data unsigned char volatile CTRLB_BOD                 absolute 0x0081;
    const register unsigned short int LVL0 = 0;
    sbit  LVL0_bit at CTRLB_BOD.B0;
    const register unsigned short int LVL1 = 1;
    sbit  LVL1_bit at CTRLB_BOD.B1;
    const register unsigned short int LVL2 = 2;
    sbit  LVL2_bit at CTRLB_BOD.B2;

sfr data unsigned char volatile INTCTRL_BOD               absolute 0x0089;
    const register unsigned short int VLMCFG0 = 1;
    sbit  VLMCFG0_bit at INTCTRL_BOD.B1;
    const register unsigned short int VLMCFG1 = 2;
    sbit  VLMCFG1_bit at INTCTRL_BOD.B2;
    const register unsigned short int VLMIE = 0;
    sbit  VLMIE_bit at INTCTRL_BOD.B0;

sfr data unsigned char volatile INTFLAGS_BOD              absolute 0x008A;
    const register unsigned short int VLMIF = 0;
    sbit  VLMIF_bit at INTFLAGS_BOD.B0;

sfr data unsigned char volatile STATUS_BOD                absolute 0x008B;
    const register unsigned short int VLMS = 0;
    sbit  VLMS_bit at STATUS_BOD.B0;

sfr data unsigned char volatile VLMCTRLA                  absolute 0x0088;
    const register unsigned short int VLMLVL0 = 0;
    sbit  VLMLVL0_bit at VLMCTRLA.B0;
    const register unsigned short int VLMLVL1 = 1;
    sbit  VLMLVL1_bit at VLMCTRLA.B1;

sfr data unsigned char volatile CTRLA_CCL                 absolute 0x01C0;
    sbit  ENABLE_CTRLA_CCL_bit at CTRLA_CCL.B0;
    sbit  RUNSTDBY_CTRLA_CCL_bit at CTRLA_CCL.B6;

sfr data unsigned char volatile LUT0CTRLA                 absolute 0x01C5;
    const register unsigned short int CLKSRC = 6;
    sbit  CLKSRC_bit at LUT0CTRLA.B6;
    const register unsigned short int EDGEDET = 7;
    sbit  EDGEDET_bit at LUT0CTRLA.B7;
    const register unsigned short int FILTSEL0 = 4;
    sbit  FILTSEL0_bit at LUT0CTRLA.B4;
    const register unsigned short int FILTSEL1 = 5;
    sbit  FILTSEL1_bit at LUT0CTRLA.B5;
    const register unsigned short int LUTEN = 0;
    sbit  LUTEN_bit at LUT0CTRLA.B0;
    sbit  OUTEN_LUT0CTRLA_bit at LUT0CTRLA.B3;

sfr data unsigned char volatile LUT0CTRLB                 absolute 0x01C6;
    const register unsigned short int INSEL00 = 0;
    sbit  INSEL00_bit at LUT0CTRLB.B0;
    const register unsigned short int INSEL01 = 1;
    sbit  INSEL01_bit at LUT0CTRLB.B1;
    const register unsigned short int INSEL02 = 2;
    sbit  INSEL02_bit at LUT0CTRLB.B2;
    const register unsigned short int INSEL03 = 3;
    sbit  INSEL03_bit at LUT0CTRLB.B3;
    const register unsigned short int INSEL10 = 4;
    sbit  INSEL10_bit at LUT0CTRLB.B4;
    const register unsigned short int INSEL11 = 5;
    sbit  INSEL11_bit at LUT0CTRLB.B5;
    const register unsigned short int INSEL12 = 6;
    sbit  INSEL12_bit at LUT0CTRLB.B6;
    const register unsigned short int INSEL13 = 7;
    sbit  INSEL13_bit at LUT0CTRLB.B7;

sfr data unsigned char volatile LUT0CTRLC                 absolute 0x01C7;
    const register unsigned short int INSEL20 = 0;
    sbit  INSEL20_bit at LUT0CTRLC.B0;
    const register unsigned short int INSEL21 = 1;
    sbit  INSEL21_bit at LUT0CTRLC.B1;
    const register unsigned short int INSEL22 = 2;
    sbit  INSEL22_bit at LUT0CTRLC.B2;
    const register unsigned short int INSEL23 = 3;
    sbit  INSEL23_bit at LUT0CTRLC.B3;

sfr data unsigned char volatile LUT1CTRLA                 absolute 0x01C9;
    sbit  CLKSRC_LUT1CTRLA_bit at LUT1CTRLA.B6;
    sbit  EDGEDET_LUT1CTRLA_bit at LUT1CTRLA.B7;
    sbit  FILTSEL0_LUT1CTRLA_bit at LUT1CTRLA.B4;
    sbit  FILTSEL1_LUT1CTRLA_bit at LUT1CTRLA.B5;
    sbit  LUTEN_LUT1CTRLA_bit at LUT1CTRLA.B0;
    sbit  OUTEN_LUT1CTRLA_bit at LUT1CTRLA.B3;

sfr data unsigned char volatile LUT1CTRLB                 absolute 0x01CA;
    sbit  INSEL00_LUT1CTRLB_bit at LUT1CTRLB.B0;
    sbit  INSEL01_LUT1CTRLB_bit at LUT1CTRLB.B1;
    sbit  INSEL02_LUT1CTRLB_bit at LUT1CTRLB.B2;
    sbit  INSEL03_LUT1CTRLB_bit at LUT1CTRLB.B3;
    sbit  INSEL10_LUT1CTRLB_bit at LUT1CTRLB.B4;
    sbit  INSEL11_LUT1CTRLB_bit at LUT1CTRLB.B5;
    sbit  INSEL12_LUT1CTRLB_bit at LUT1CTRLB.B6;
    sbit  INSEL13_LUT1CTRLB_bit at LUT1CTRLB.B7;

sfr data unsigned char volatile LUT1CTRLC                 absolute 0x01CB;
    sbit  INSEL20_LUT1CTRLC_bit at LUT1CTRLC.B0;
    sbit  INSEL21_LUT1CTRLC_bit at LUT1CTRLC.B1;
    sbit  INSEL22_LUT1CTRLC_bit at LUT1CTRLC.B2;
    sbit  INSEL23_LUT1CTRLC_bit at LUT1CTRLC.B3;

sfr data unsigned char volatile SEQCTRL0                  absolute 0x01C1;
    const register unsigned short int SEQSEL0 = 0;
    sbit  SEQSEL0_bit at SEQCTRL0.B0;
    const register unsigned short int SEQSEL1 = 1;
    sbit  SEQSEL1_bit at SEQCTRL0.B1;
    const register unsigned short int SEQSEL2 = 2;
    sbit  SEQSEL2_bit at SEQCTRL0.B2;

sfr data unsigned char volatile TRUTH0                    absolute 0x01C8;
sfr data unsigned char volatile TRUTH1                    absolute 0x01CC;
sfr data unsigned char volatile MCLKCTRLA                 absolute 0x0060;
    const register unsigned short int CKSEL0 = 0;
    sbit  CKSEL0_bit at MCLKCTRLA.B0;
    const register unsigned short int CKSEL1 = 1;
    sbit  CKSEL1_bit at MCLKCTRLA.B1;
    const register unsigned short int CLKOUT = 7;
    sbit  CLKOUT_bit at MCLKCTRLA.B7;

sfr data unsigned char volatile MCLKCTRLB                 absolute 0x0061;
    const register unsigned short int PDIV0 = 1;
    sbit  PDIV0_bit at MCLKCTRLB.B1;
    const register unsigned short int PDIV1 = 2;
    sbit  PDIV1_bit at MCLKCTRLB.B2;
    const register unsigned short int PDIV2 = 3;
    sbit  PDIV2_bit at MCLKCTRLB.B3;
    const register unsigned short int PDIV3 = 4;
    sbit  PDIV3_bit at MCLKCTRLB.B4;
    const register unsigned short int PEN = 0;
    sbit  PEN_bit at MCLKCTRLB.B0;

sfr data unsigned char volatile MCLKLOCK                  absolute 0x0062;
    const register unsigned short int LOCKEN = 0;
    sbit  LOCKEN_bit at MCLKLOCK.B0;

sfr data unsigned char volatile MCLKSTATUS                absolute 0x0063;
    const register unsigned short int EXTS = 7;
    sbit  EXTS_bit at MCLKSTATUS.B7;
    const register unsigned short int OSC20MS = 4;
    sbit  OSC20MS_bit at MCLKSTATUS.B4;
    const register unsigned short int OSC32KS = 5;
    sbit  OSC32KS_bit at MCLKSTATUS.B5;
    const register unsigned short int SOSC = 0;
    sbit  SOSC_bit at MCLKSTATUS.B0;
    const register unsigned short int XOSC32KS = 6;
    sbit  XOSC32KS_bit at MCLKSTATUS.B6;

sfr data unsigned char volatile OSC20MCALIBA              absolute 0x0071;
    const register unsigned short int CALSEL20M0 = 6;
    sbit  CALSEL20M0_bit at OSC20MCALIBA.B6;
    const register unsigned short int CALSEL20M1 = 7;
    sbit  CALSEL20M1_bit at OSC20MCALIBA.B7;
    const register unsigned short int CAL20M0 = 0;
    sbit  CAL20M0_bit at OSC20MCALIBA.B0;
    const register unsigned short int CAL20M1 = 1;
    sbit  CAL20M1_bit at OSC20MCALIBA.B1;
    const register unsigned short int CAL20M2 = 2;
    sbit  CAL20M2_bit at OSC20MCALIBA.B2;
    const register unsigned short int CAL20M3 = 3;
    sbit  CAL20M3_bit at OSC20MCALIBA.B3;
    const register unsigned short int CAL20M4 = 4;
    sbit  CAL20M4_bit at OSC20MCALIBA.B4;
    const register unsigned short int CAL20M5 = 5;
    sbit  CAL20M5_bit at OSC20MCALIBA.B5;

sfr data unsigned char volatile OSC20MCALIBB              absolute 0x0072;
    const register unsigned short int LOCK_ = 7;
    sbit  LOCK_bit at OSC20MCALIBB.B7;
    const register unsigned short int TEMPCAL20M0 = 0;
    sbit  TEMPCAL20M0_bit at OSC20MCALIBB.B0;
    const register unsigned short int TEMPCAL20M1 = 1;
    sbit  TEMPCAL20M1_bit at OSC20MCALIBB.B1;
    const register unsigned short int TEMPCAL20M2 = 2;
    sbit  TEMPCAL20M2_bit at OSC20MCALIBB.B2;
    const register unsigned short int TEMPCAL20M3 = 3;
    sbit  TEMPCAL20M3_bit at OSC20MCALIBB.B3;

sfr data unsigned char volatile OSC20MCTRLA               absolute 0x0070;
    sbit  RUNSTDBY_OSC20MCTRLA_bit at OSC20MCTRLA.B1;

sfr data unsigned char volatile OSC32KCTRLA               absolute 0x0078;
    sbit  RUNSTDBY_OSC32KCTRLA_bit at OSC32KCTRLA.B1;

sfr data unsigned char volatile XOSC32KCTRLA              absolute 0x007C;
    const register unsigned short int CSUT0 = 4;
    sbit  CSUT0_bit at XOSC32KCTRLA.B4;
    const register unsigned short int CSUT1 = 5;
    sbit  CSUT1_bit at XOSC32KCTRLA.B5;
    sbit  ENABLE_XOSC32KCTRLA_bit at XOSC32KCTRLA.B0;
    sbit  RUNSTDBY_XOSC32KCTRLA_bit at XOSC32KCTRLA.B1;
    const register unsigned short int SEL = 2;
    sbit  SEL_bit at XOSC32KCTRLA.B2;

sfr io   unsigned char volatile CCP                       absolute 0x0054;
    const register unsigned short int CCP0 = 0;
    sbit  CCP0_bit at CCP.B0;
    const register unsigned short int CCP1 = 1;
    sbit  CCP1_bit at CCP.B1;
    const register unsigned short int CCP2 = 2;
    sbit  CCP2_bit at CCP.B2;
    const register unsigned short int CCP3 = 3;
    sbit  CCP3_bit at CCP.B3;
    const register unsigned short int CCP4 = 4;
    sbit  CCP4_bit at CCP.B4;
    const register unsigned short int CCP5 = 5;
    sbit  CCP5_bit at CCP.B5;
    const register unsigned short int CCP6 = 6;
    sbit  CCP6_bit at CCP.B6;
    const register unsigned short int CCP7 = 7;
    sbit  CCP7_bit at CCP.B7;

sfr io   unsigned char volatile SPH                       absolute 0x005E;
sfr io   unsigned char volatile SPL                       absolute 0x005D;
sfr io   unsigned char volatile SREG                      absolute 0x005F;
    const register unsigned short int SREG_C = 0;
    sbit  SREG_C_bit at SREG.B0;
    const register unsigned short int SREG_H = 5;
    sbit  SREG_H_bit at SREG.B5;
    const register unsigned short int SREG_I = 7;
    sbit  SREG_I_bit at SREG.B7;
    const register unsigned short int SREG_N = 2;
    sbit  SREG_N_bit at SREG.B2;
    const register unsigned short int SREG_S = 4;
    sbit  SREG_S_bit at SREG.B4;
    const register unsigned short int SREG_T = 6;
    sbit  SREG_T_bit at SREG.B6;
    const register unsigned short int SREG_V = 3;
    sbit  SREG_V_bit at SREG.B3;
    const register unsigned short int SREG_Z = 1;
    sbit  SREG_Z_bit at SREG.B1;

sfr data unsigned char volatile CTRLA_CPUINT              absolute 0x0110;
    const register unsigned short int CVT = 5;
    sbit  CVT_bit at CTRLA_CPUINT.B5;
    const register unsigned short int IVSEL = 6;
    sbit  IVSEL_bit at CTRLA_CPUINT.B6;
    const register unsigned short int LVL0RR = 0;
    sbit  LVL0RR_bit at CTRLA_CPUINT.B0;

sfr data unsigned char volatile LVL0PRI                   absolute 0x0112;
    const register unsigned short int LVL0PRI0 = 0;
    sbit  LVL0PRI0_bit at LVL0PRI.B0;
    const register unsigned short int LVL0PRI1 = 1;
    sbit  LVL0PRI1_bit at LVL0PRI.B1;
    const register unsigned short int LVL0PRI2 = 2;
    sbit  LVL0PRI2_bit at LVL0PRI.B2;
    const register unsigned short int LVL0PRI3 = 3;
    sbit  LVL0PRI3_bit at LVL0PRI.B3;
    const register unsigned short int LVL0PRI4 = 4;
    sbit  LVL0PRI4_bit at LVL0PRI.B4;
    const register unsigned short int LVL0PRI5 = 5;
    sbit  LVL0PRI5_bit at LVL0PRI.B5;
    const register unsigned short int LVL0PRI6 = 6;
    sbit  LVL0PRI6_bit at LVL0PRI.B6;
    const register unsigned short int LVL0PRI7 = 7;
    sbit  LVL0PRI7_bit at LVL0PRI.B7;

sfr data unsigned char volatile LVL1VEC                   absolute 0x0113;
    const register unsigned short int LVL1VEC0 = 0;
    sbit  LVL1VEC0_bit at LVL1VEC.B0;
    const register unsigned short int LVL1VEC1 = 1;
    sbit  LVL1VEC1_bit at LVL1VEC.B1;
    const register unsigned short int LVL1VEC2 = 2;
    sbit  LVL1VEC2_bit at LVL1VEC.B2;
    const register unsigned short int LVL1VEC3 = 3;
    sbit  LVL1VEC3_bit at LVL1VEC.B3;
    const register unsigned short int LVL1VEC4 = 4;
    sbit  LVL1VEC4_bit at LVL1VEC.B4;
    const register unsigned short int LVL1VEC5 = 5;
    sbit  LVL1VEC5_bit at LVL1VEC.B5;
    const register unsigned short int LVL1VEC6 = 6;
    sbit  LVL1VEC6_bit at LVL1VEC.B6;
    const register unsigned short int LVL1VEC7 = 7;
    sbit  LVL1VEC7_bit at LVL1VEC.B7;

sfr data unsigned char volatile STATUS_CPUINT             absolute 0x0111;
    const register unsigned short int LVL0EX = 0;
    sbit  LVL0EX_bit at STATUS_CPUINT.B0;
    const register unsigned short int LVL1EX = 1;
    sbit  LVL1EX_bit at STATUS_CPUINT.B1;
    const register unsigned short int NMIEX = 7;
    sbit  NMIEX_bit at STATUS_CPUINT.B7;

sfr data unsigned char volatile CTRLA_CRCSCAN             absolute 0x0120;
    sbit  ENABLE_CTRLA_CRCSCAN_bit at CTRLA_CRCSCAN.B0;
    const register unsigned short int NMIEN = 1;
    sbit  NMIEN_bit at CTRLA_CRCSCAN.B1;
    const register unsigned short int RESET_ = 7;
    sbit  RESET_bit at CTRLA_CRCSCAN.B7;

sfr data unsigned char volatile CTRLB_CRCSCAN             absolute 0x0121;
    const register unsigned short int MODE0 = 4;
    sbit  MODE0_bit at CTRLB_CRCSCAN.B4;
    const register unsigned short int MODE1 = 5;
    sbit  MODE1_bit at CTRLB_CRCSCAN.B5;
    const register unsigned short int SRC0 = 0;
    sbit  SRC0_bit at CTRLB_CRCSCAN.B0;
    const register unsigned short int SRC1 = 1;
    sbit  SRC1_bit at CTRLB_CRCSCAN.B1;

sfr data unsigned char volatile STATUS_CRCSCAN            absolute 0x0122;
    const register unsigned short int BUSY = 0;
    sbit  BUSY_bit at STATUS_CRCSCAN.B0;
    const register unsigned short int OK = 1;
    sbit  OK_bit at STATUS_CRCSCAN.B1;

sfr data unsigned char volatile CTRLA_DAC0                absolute 0x0680;
    sbit  ENABLE_CTRLA_DAC0_bit at CTRLA_DAC0.B0;
    sbit  OUTEN_CTRLA_DAC0_bit at CTRLA_DAC0.B6;
    sbit  RUNSTDBY_CTRLA_DAC0_bit at CTRLA_DAC0.B7;

sfr data unsigned char volatile DATA_DAC0                 absolute 0x0681;
sfr data unsigned char volatile ASYNCCH0                  absolute 0x0182;
    const register unsigned short int ASYNCCH00 = 0;
    sbit  ASYNCCH00_bit at ASYNCCH0.B0;
    const register unsigned short int ASYNCCH01 = 1;
    sbit  ASYNCCH01_bit at ASYNCCH0.B1;
    const register unsigned short int ASYNCCH02 = 2;
    sbit  ASYNCCH02_bit at ASYNCCH0.B2;
    const register unsigned short int ASYNCCH03 = 3;
    sbit  ASYNCCH03_bit at ASYNCCH0.B3;
    const register unsigned short int ASYNCCH04 = 4;
    sbit  ASYNCCH04_bit at ASYNCCH0.B4;
    const register unsigned short int ASYNCCH05 = 5;
    sbit  ASYNCCH05_bit at ASYNCCH0.B5;
    const register unsigned short int ASYNCCH06 = 6;
    sbit  ASYNCCH06_bit at ASYNCCH0.B6;
    const register unsigned short int ASYNCCH07 = 7;
    sbit  ASYNCCH07_bit at ASYNCCH0.B7;

sfr data unsigned char volatile ASYNCCH1                  absolute 0x0183;
    const register unsigned short int ASYNCCH10 = 0;
    sbit  ASYNCCH10_bit at ASYNCCH1.B0;
    const register unsigned short int ASYNCCH11 = 1;
    sbit  ASYNCCH11_bit at ASYNCCH1.B1;
    const register unsigned short int ASYNCCH12 = 2;
    sbit  ASYNCCH12_bit at ASYNCCH1.B2;
    const register unsigned short int ASYNCCH13 = 3;
    sbit  ASYNCCH13_bit at ASYNCCH1.B3;
    const register unsigned short int ASYNCCH14 = 4;
    sbit  ASYNCCH14_bit at ASYNCCH1.B4;
    const register unsigned short int ASYNCCH15 = 5;
    sbit  ASYNCCH15_bit at ASYNCCH1.B5;
    const register unsigned short int ASYNCCH16 = 6;
    sbit  ASYNCCH16_bit at ASYNCCH1.B6;
    const register unsigned short int ASYNCCH17 = 7;
    sbit  ASYNCCH17_bit at ASYNCCH1.B7;

sfr data unsigned char volatile ASYNCCH2                  absolute 0x0184;
    const register unsigned short int ASYNCCH20 = 0;
    sbit  ASYNCCH20_bit at ASYNCCH2.B0;
    const register unsigned short int ASYNCCH21 = 1;
    sbit  ASYNCCH21_bit at ASYNCCH2.B1;
    const register unsigned short int ASYNCCH22 = 2;
    sbit  ASYNCCH22_bit at ASYNCCH2.B2;
    const register unsigned short int ASYNCCH23 = 3;
    sbit  ASYNCCH23_bit at ASYNCCH2.B3;
    const register unsigned short int ASYNCCH24 = 4;
    sbit  ASYNCCH24_bit at ASYNCCH2.B4;
    const register unsigned short int ASYNCCH25 = 5;
    sbit  ASYNCCH25_bit at ASYNCCH2.B5;
    const register unsigned short int ASYNCCH26 = 6;
    sbit  ASYNCCH26_bit at ASYNCCH2.B6;
    const register unsigned short int ASYNCCH27 = 7;
    sbit  ASYNCCH27_bit at ASYNCCH2.B7;

sfr data unsigned char volatile ASYNCCH3                  absolute 0x0185;
    const register unsigned short int ASYNCCH30 = 0;
    sbit  ASYNCCH30_bit at ASYNCCH3.B0;
    const register unsigned short int ASYNCCH31 = 1;
    sbit  ASYNCCH31_bit at ASYNCCH3.B1;
    const register unsigned short int ASYNCCH32 = 2;
    sbit  ASYNCCH32_bit at ASYNCCH3.B2;
    const register unsigned short int ASYNCCH33 = 3;
    sbit  ASYNCCH33_bit at ASYNCCH3.B3;
    const register unsigned short int ASYNCCH34 = 4;
    sbit  ASYNCCH34_bit at ASYNCCH3.B4;
    const register unsigned short int ASYNCCH35 = 5;
    sbit  ASYNCCH35_bit at ASYNCCH3.B5;
    const register unsigned short int ASYNCCH36 = 6;
    sbit  ASYNCCH36_bit at ASYNCCH3.B6;
    const register unsigned short int ASYNCCH37 = 7;
    sbit  ASYNCCH37_bit at ASYNCCH3.B7;

sfr data unsigned char volatile ASYNCSTROBE               absolute 0x0180;
sfr data unsigned char volatile ASYNCUSER0                absolute 0x0192;
sfr data unsigned char volatile ASYNCUSER1                absolute 0x0193;
sfr data unsigned char volatile ASYNCUSER2                absolute 0x0194;
sfr data unsigned char volatile ASYNCUSER3                absolute 0x0195;
sfr data unsigned char volatile ASYNCUSER4                absolute 0x0196;
sfr data unsigned char volatile ASYNCUSER5                absolute 0x0197;
sfr data unsigned char volatile ASYNCUSER6                absolute 0x0198;
sfr data unsigned char volatile ASYNCUSER7                absolute 0x0199;
sfr data unsigned char volatile ASYNCUSER8                absolute 0x019A;
sfr data unsigned char volatile ASYNCUSER9                absolute 0x019B;
sfr data unsigned char volatile ASYNCUSER10               absolute 0x019C;
sfr data unsigned char volatile SYNCCH0                   absolute 0x018A;
    const register unsigned short int SYNCCH00 = 0;
    sbit  SYNCCH00_bit at SYNCCH0.B0;
    const register unsigned short int SYNCCH01 = 1;
    sbit  SYNCCH01_bit at SYNCCH0.B1;
    const register unsigned short int SYNCCH02 = 2;
    sbit  SYNCCH02_bit at SYNCCH0.B2;
    const register unsigned short int SYNCCH03 = 3;
    sbit  SYNCCH03_bit at SYNCCH0.B3;
    const register unsigned short int SYNCCH04 = 4;
    sbit  SYNCCH04_bit at SYNCCH0.B4;
    const register unsigned short int SYNCCH05 = 5;
    sbit  SYNCCH05_bit at SYNCCH0.B5;
    const register unsigned short int SYNCCH06 = 6;
    sbit  SYNCCH06_bit at SYNCCH0.B6;
    const register unsigned short int SYNCCH07 = 7;
    sbit  SYNCCH07_bit at SYNCCH0.B7;

sfr data unsigned char volatile SYNCCH1                   absolute 0x018B;
    const register unsigned short int SYNCCH10 = 0;
    sbit  SYNCCH10_bit at SYNCCH1.B0;
    const register unsigned short int SYNCCH11 = 1;
    sbit  SYNCCH11_bit at SYNCCH1.B1;
    const register unsigned short int SYNCCH12 = 2;
    sbit  SYNCCH12_bit at SYNCCH1.B2;
    const register unsigned short int SYNCCH13 = 3;
    sbit  SYNCCH13_bit at SYNCCH1.B3;
    const register unsigned short int SYNCCH14 = 4;
    sbit  SYNCCH14_bit at SYNCCH1.B4;
    const register unsigned short int SYNCCH15 = 5;
    sbit  SYNCCH15_bit at SYNCCH1.B5;
    const register unsigned short int SYNCCH16 = 6;
    sbit  SYNCCH16_bit at SYNCCH1.B6;
    const register unsigned short int SYNCCH17 = 7;
    sbit  SYNCCH17_bit at SYNCCH1.B7;

sfr data unsigned char volatile SYNCSTROBE                absolute 0x0181;
sfr data unsigned char volatile SYNCUSER0                 absolute 0x01A2;
    const register unsigned short int SYNCUSER00 = 0;
    sbit  SYNCUSER00_bit at SYNCUSER0.B0;
    const register unsigned short int SYNCUSER01 = 1;
    sbit  SYNCUSER01_bit at SYNCUSER0.B1;
    const register unsigned short int SYNCUSER02 = 2;
    sbit  SYNCUSER02_bit at SYNCUSER0.B2;
    const register unsigned short int SYNCUSER03 = 3;
    sbit  SYNCUSER03_bit at SYNCUSER0.B3;
    const register unsigned short int SYNCUSER04 = 4;
    sbit  SYNCUSER04_bit at SYNCUSER0.B4;
    const register unsigned short int SYNCUSER05 = 5;
    sbit  SYNCUSER05_bit at SYNCUSER0.B5;
    const register unsigned short int SYNCUSER06 = 6;
    sbit  SYNCUSER06_bit at SYNCUSER0.B6;
    const register unsigned short int SYNCUSER07 = 7;
    sbit  SYNCUSER07_bit at SYNCUSER0.B7;

sfr data unsigned char volatile SYNCUSER1                 absolute 0x01A3;
    const register unsigned short int SYNCUSER10 = 0;
    sbit  SYNCUSER10_bit at SYNCUSER1.B0;
    const register unsigned short int SYNCUSER11 = 1;
    sbit  SYNCUSER11_bit at SYNCUSER1.B1;
    const register unsigned short int SYNCUSER12 = 2;
    sbit  SYNCUSER12_bit at SYNCUSER1.B2;
    const register unsigned short int SYNCUSER13 = 3;
    sbit  SYNCUSER13_bit at SYNCUSER1.B3;
    const register unsigned short int SYNCUSER14 = 4;
    sbit  SYNCUSER14_bit at SYNCUSER1.B4;
    const register unsigned short int SYNCUSER15 = 5;
    sbit  SYNCUSER15_bit at SYNCUSER1.B5;
    const register unsigned short int SYNCUSER16 = 6;
    sbit  SYNCUSER16_bit at SYNCUSER1.B6;
    const register unsigned short int SYNCUSER17 = 7;
    sbit  SYNCUSER17_bit at SYNCUSER1.B7;

sfr data unsigned char volatile APPEND                    absolute 0x1287;
sfr data unsigned char volatile BODCFG                    absolute 0x1281;
    sbit  ACTIVE0_BODCFG_bit at BODCFG.B2;
    sbit  ACTIVE1_BODCFG_bit at BODCFG.B3;
    sbit  LVL0_BODCFG_bit at BODCFG.B5;
    sbit  LVL1_BODCFG_bit at BODCFG.B6;
    sbit  LVL2_BODCFG_bit at BODCFG.B7;
    sbit  SAMPLFREQ_BODCFG_bit at BODCFG.B4;
    sbit  SLEEP0_BODCFG_bit at BODCFG.B0;
    sbit  SLEEP1_BODCFG_bit at BODCFG.B1;

sfr data unsigned char volatile BOOTEND                   absolute 0x1288;
sfr data unsigned char volatile OSCCFG                    absolute 0x1282;
    const register unsigned short int FREQSEL0 = 0;
    sbit  FREQSEL0_bit at OSCCFG.B0;
    const register unsigned short int FREQSEL1 = 1;
    sbit  FREQSEL1_bit at OSCCFG.B1;
    const register unsigned short int OSCLOCK = 7;
    sbit  OSCLOCK_bit at OSCCFG.B7;

sfr data unsigned char volatile SYSCFG0                   absolute 0x1285;
    const register unsigned short int CRCSRC0 = 6;
    sbit  CRCSRC0_bit at SYSCFG0.B6;
    const register unsigned short int CRCSRC1 = 7;
    sbit  CRCSRC1_bit at SYSCFG0.B7;
    const register unsigned short int EESAVE = 0;
    sbit  EESAVE_bit at SYSCFG0.B0;
    const register unsigned short int RSTPINCFG0 = 2;
    sbit  RSTPINCFG0_bit at SYSCFG0.B2;
    const register unsigned short int RSTPINCFG1 = 3;
    sbit  RSTPINCFG1_bit at SYSCFG0.B3;

sfr data unsigned char volatile SYSCFG1                   absolute 0x1286;
    const register unsigned short int SUT0 = 0;
    sbit  SUT0_bit at SYSCFG1.B0;
    const register unsigned short int SUT1 = 1;
    sbit  SUT1_bit at SYSCFG1.B1;
    const register unsigned short int SUT2 = 2;
    sbit  SUT2_bit at SYSCFG1.B2;

sfr data unsigned char volatile TCD0CFG                   absolute 0x1284;
    const register unsigned short int CMPA = 0;
    sbit  CMPA_bit at TCD0CFG.B0;
    const register unsigned short int CMPAEN = 4;
    sbit  CMPAEN_bit at TCD0CFG.B4;
    const register unsigned short int CMPB = 1;
    sbit  CMPB_bit at TCD0CFG.B1;
    const register unsigned short int CMPBEN = 5;
    sbit  CMPBEN_bit at TCD0CFG.B5;
    const register unsigned short int CMPC = 2;
    sbit  CMPC_bit at TCD0CFG.B2;
    const register unsigned short int CMPCEN = 6;
    sbit  CMPCEN_bit at TCD0CFG.B6;
    const register unsigned short int CMPD = 3;
    sbit  CMPD_bit at TCD0CFG.B3;
    const register unsigned short int CMPDEN = 7;
    sbit  CMPDEN_bit at TCD0CFG.B7;

sfr data unsigned char volatile WDTCFG                    absolute 0x1280;
    const register unsigned short int PERIOD0 = 0;
    sbit  PERIOD0_bit at WDTCFG.B0;
    const register unsigned short int PERIOD1 = 1;
    sbit  PERIOD1_bit at WDTCFG.B1;
    const register unsigned short int PERIOD2 = 2;
    sbit  PERIOD2_bit at WDTCFG.B2;
    const register unsigned short int PERIOD3 = 3;
    sbit  PERIOD3_bit at WDTCFG.B3;
    const register unsigned short int WINDOW0 = 4;
    sbit  WINDOW0_bit at WDTCFG.B4;
    const register unsigned short int WINDOW1 = 5;
    sbit  WINDOW1_bit at WDTCFG.B5;
    const register unsigned short int WINDOW2 = 6;
    sbit  WINDOW2_bit at WDTCFG.B6;
    const register unsigned short int WINDOW3 = 7;
    sbit  WINDOW3_bit at WDTCFG.B7;

sfr io   unsigned char volatile GPIOR0                    absolute 0x001C;
sfr io   unsigned char volatile GPIOR1                    absolute 0x001D;
sfr io   unsigned char volatile GPIOR2                    absolute 0x001E;
sfr io   unsigned char volatile GPIOR3                    absolute 0x001F;
sfr data unsigned char volatile LOCKBIT                   absolute 0x128A;
    const register unsigned short int LB0 = 0;
    sbit  LB0_bit at LOCKBIT.B0;
    const register unsigned short int LB1 = 1;
    sbit  LB1_bit at LOCKBIT.B1;
    const register unsigned short int LB2 = 2;
    sbit  LB2_bit at LOCKBIT.B2;
    const register unsigned short int LB3 = 3;
    sbit  LB3_bit at LOCKBIT.B3;
    const register unsigned short int LB4 = 4;
    sbit  LB4_bit at LOCKBIT.B4;
    const register unsigned short int LB5 = 5;
    sbit  LB5_bit at LOCKBIT.B5;
    const register unsigned short int LB6 = 6;
    sbit  LB6_bit at LOCKBIT.B6;
    const register unsigned short int LB7 = 7;
    sbit  LB7_bit at LOCKBIT.B7;

sfr data unsigned int  volatile ADDR                      absolute 0x1008;
sfr data unsigned char volatile CTRLA_NVMCTRL             absolute 0x1000;
    const register unsigned short int CMD0 = 0;
    sbit  CMD0_bit at CTRLA_NVMCTRL.B0;
    const register unsigned short int CMD1 = 1;
    sbit  CMD1_bit at CTRLA_NVMCTRL.B1;
    const register unsigned short int CMD2 = 2;
    sbit  CMD2_bit at CTRLA_NVMCTRL.B2;

sfr data unsigned char volatile CTRLB_NVMCTRL             absolute 0x1001;
    const register unsigned short int APCWP = 0;
    sbit  APCWP_bit at CTRLB_NVMCTRL.B0;
    const register unsigned short int BOOTLOCK = 1;
    sbit  BOOTLOCK_bit at CTRLB_NVMCTRL.B1;

sfr data unsigned int  volatile DATA_NVMCTRL              absolute 0x1006;
sfr data unsigned char volatile INTCTRL_NVMCTRL           absolute 0x1003;
    const register unsigned short int EEREADY = 0;
    sbit  EEREADY_bit at INTCTRL_NVMCTRL.B0;

sfr data unsigned char volatile INTFLAGS_NVMCTRL          absolute 0x1004;
    sbit  EEREADY_INTFLAGS_NVMCTRL_bit at INTFLAGS_NVMCTRL.B0;

sfr data unsigned char volatile STATUS_NVMCTRL            absolute 0x1002;
    const register unsigned short int EEBUSY = 1;
    sbit  EEBUSY_bit at STATUS_NVMCTRL.B1;
    const register unsigned short int FBUSY = 0;
    sbit  FBUSY_bit at STATUS_NVMCTRL.B0;
    const register unsigned short int WRERROR = 2;
    sbit  WRERROR_bit at STATUS_NVMCTRL.B2;

sfr data unsigned char volatile DIR_PORTA                 absolute 0x0400;
sfr data unsigned char volatile DIRCLR_PORTA              absolute 0x0402;
sfr data unsigned char volatile DIRSET_PORTA              absolute 0x0401;
sfr data unsigned char volatile DIRTGL_PORTA              absolute 0x0403;
sfr data unsigned char volatile IN_PORTA                  absolute 0x0408;
sfr data unsigned char volatile INTFLAGS_PORTA            absolute 0x0409;
    const register unsigned short int INT0 = 0;
    sbit  INT0_bit at INTFLAGS_PORTA.B0;
    const register unsigned short int INT1 = 1;
    sbit  INT1_bit at INTFLAGS_PORTA.B1;
    const register unsigned short int INT2 = 2;
    sbit  INT2_bit at INTFLAGS_PORTA.B2;
    const register unsigned short int INT3 = 3;
    sbit  INT3_bit at INTFLAGS_PORTA.B3;
    const register unsigned short int INT4 = 4;
    sbit  INT4_bit at INTFLAGS_PORTA.B4;
    const register unsigned short int INT5 = 5;
    sbit  INT5_bit at INTFLAGS_PORTA.B5;
    const register unsigned short int INT6 = 6;
    sbit  INT6_bit at INTFLAGS_PORTA.B6;
    const register unsigned short int INT7 = 7;
    sbit  INT7_bit at INTFLAGS_PORTA.B7;

sfr data unsigned char volatile OUT_PORTA                 absolute 0x0404;
sfr data unsigned char volatile OUTCLR_PORTA              absolute 0x0406;
sfr data unsigned char volatile OUTSET_PORTA              absolute 0x0405;
sfr data unsigned char volatile OUTTGL_PORTA              absolute 0x0407;
sfr data unsigned char volatile PIN0CTRL                  absolute 0x0410;
    const register unsigned short int INVEN = 7;
    sbit  INVEN_bit at PIN0CTRL.B7;
    const register unsigned short int ISC0 = 0;
    sbit  ISC0_bit at PIN0CTRL.B0;
    const register unsigned short int ISC1 = 1;
    sbit  ISC1_bit at PIN0CTRL.B1;
    const register unsigned short int ISC2 = 2;
    sbit  ISC2_bit at PIN0CTRL.B2;
    const register unsigned short int PULLUPEN = 3;
    sbit  PULLUPEN_bit at PIN0CTRL.B3;

sfr data unsigned char volatile PIN1CTRL                  absolute 0x0411;
    sbit  INVEN_PIN1CTRL_bit at PIN1CTRL.B7;
    sbit  ISC0_PIN1CTRL_bit at PIN1CTRL.B0;
    sbit  ISC1_PIN1CTRL_bit at PIN1CTRL.B1;
    sbit  ISC2_PIN1CTRL_bit at PIN1CTRL.B2;
    sbit  PULLUPEN_PIN1CTRL_bit at PIN1CTRL.B3;

sfr data unsigned char volatile PIN2CTRL                  absolute 0x0412;
    sbit  INVEN_PIN2CTRL_bit at PIN2CTRL.B7;
    sbit  ISC0_PIN2CTRL_bit at PIN2CTRL.B0;
    sbit  ISC1_PIN2CTRL_bit at PIN2CTRL.B1;
    sbit  ISC2_PIN2CTRL_bit at PIN2CTRL.B2;
    sbit  PULLUPEN_PIN2CTRL_bit at PIN2CTRL.B3;

sfr data unsigned char volatile PIN3CTRL                  absolute 0x0413;
    sbit  INVEN_PIN3CTRL_bit at PIN3CTRL.B7;
    sbit  ISC0_PIN3CTRL_bit at PIN3CTRL.B0;
    sbit  ISC1_PIN3CTRL_bit at PIN3CTRL.B1;
    sbit  ISC2_PIN3CTRL_bit at PIN3CTRL.B2;
    sbit  PULLUPEN_PIN3CTRL_bit at PIN3CTRL.B3;

sfr data unsigned char volatile PIN4CTRL                  absolute 0x0414;
    sbit  INVEN_PIN4CTRL_bit at PIN4CTRL.B7;
    sbit  ISC0_PIN4CTRL_bit at PIN4CTRL.B0;
    sbit  ISC1_PIN4CTRL_bit at PIN4CTRL.B1;
    sbit  ISC2_PIN4CTRL_bit at PIN4CTRL.B2;
    sbit  PULLUPEN_PIN4CTRL_bit at PIN4CTRL.B3;

sfr data unsigned char volatile PIN5CTRL                  absolute 0x0415;
    sbit  INVEN_PIN5CTRL_bit at PIN5CTRL.B7;
    sbit  ISC0_PIN5CTRL_bit at PIN5CTRL.B0;
    sbit  ISC1_PIN5CTRL_bit at PIN5CTRL.B1;
    sbit  ISC2_PIN5CTRL_bit at PIN5CTRL.B2;
    sbit  PULLUPEN_PIN5CTRL_bit at PIN5CTRL.B3;

sfr data unsigned char volatile PIN6CTRL                  absolute 0x0416;
    sbit  INVEN_PIN6CTRL_bit at PIN6CTRL.B7;
    sbit  ISC0_PIN6CTRL_bit at PIN6CTRL.B0;
    sbit  ISC1_PIN6CTRL_bit at PIN6CTRL.B1;
    sbit  ISC2_PIN6CTRL_bit at PIN6CTRL.B2;
    sbit  PULLUPEN_PIN6CTRL_bit at PIN6CTRL.B3;

sfr data unsigned char volatile PIN7CTRL                  absolute 0x0417;
    sbit  INVEN_PIN7CTRL_bit at PIN7CTRL.B7;
    sbit  ISC0_PIN7CTRL_bit at PIN7CTRL.B0;
    sbit  ISC1_PIN7CTRL_bit at PIN7CTRL.B1;
    sbit  ISC2_PIN7CTRL_bit at PIN7CTRL.B2;
    sbit  PULLUPEN_PIN7CTRL_bit at PIN7CTRL.B3;

sfr data unsigned char volatile DIR_PORTB                 absolute 0x0420;
sfr data unsigned char volatile DIRCLR_PORTB              absolute 0x0422;
sfr data unsigned char volatile DIRSET_PORTB              absolute 0x0421;
sfr data unsigned char volatile DIRTGL_PORTB              absolute 0x0423;
sfr data unsigned char volatile IN_PORTB                  absolute 0x0428;
sfr data unsigned char volatile INTFLAGS_PORTB            absolute 0x0429;
    sbit  INT0_INTFLAGS_PORTB_bit at INTFLAGS_PORTB.B0;
    sbit  INT1_INTFLAGS_PORTB_bit at INTFLAGS_PORTB.B1;
    sbit  INT2_INTFLAGS_PORTB_bit at INTFLAGS_PORTB.B2;
    sbit  INT3_INTFLAGS_PORTB_bit at INTFLAGS_PORTB.B3;
    sbit  INT4_INTFLAGS_PORTB_bit at INTFLAGS_PORTB.B4;
    sbit  INT5_INTFLAGS_PORTB_bit at INTFLAGS_PORTB.B5;
    sbit  INT6_INTFLAGS_PORTB_bit at INTFLAGS_PORTB.B6;
    sbit  INT7_INTFLAGS_PORTB_bit at INTFLAGS_PORTB.B7;

sfr data unsigned char volatile OUT_PORTB                 absolute 0x0424;
sfr data unsigned char volatile OUTCLR_PORTB              absolute 0x0426;
sfr data unsigned char volatile OUTSET_PORTB              absolute 0x0425;
sfr data unsigned char volatile OUTTGL_PORTB              absolute 0x0427;
sfr data unsigned char volatile PIN0CTRL_PORTB            absolute 0x0430;
    sbit  INVEN_PIN0CTRL_PORTB_bit at PIN0CTRL_PORTB.B7;
    sbit  ISC0_PIN0CTRL_PORTB_bit at PIN0CTRL_PORTB.B0;
    sbit  ISC1_PIN0CTRL_PORTB_bit at PIN0CTRL_PORTB.B1;
    sbit  ISC2_PIN0CTRL_PORTB_bit at PIN0CTRL_PORTB.B2;
    sbit  PULLUPEN_PIN0CTRL_PORTB_bit at PIN0CTRL_PORTB.B3;

sfr data unsigned char volatile PIN1CTRL_PORTB            absolute 0x0431;
    sbit  INVEN_PIN1CTRL_PORTB_bit at PIN1CTRL_PORTB.B7;
    sbit  ISC0_PIN1CTRL_PORTB_bit at PIN1CTRL_PORTB.B0;
    sbit  ISC1_PIN1CTRL_PORTB_bit at PIN1CTRL_PORTB.B1;
    sbit  ISC2_PIN1CTRL_PORTB_bit at PIN1CTRL_PORTB.B2;
    sbit  PULLUPEN_PIN1CTRL_PORTB_bit at PIN1CTRL_PORTB.B3;

sfr data unsigned char volatile PIN2CTRL_PORTB            absolute 0x0432;
    sbit  INVEN_PIN2CTRL_PORTB_bit at PIN2CTRL_PORTB.B7;
    sbit  ISC0_PIN2CTRL_PORTB_bit at PIN2CTRL_PORTB.B0;
    sbit  ISC1_PIN2CTRL_PORTB_bit at PIN2CTRL_PORTB.B1;
    sbit  ISC2_PIN2CTRL_PORTB_bit at PIN2CTRL_PORTB.B2;
    sbit  PULLUPEN_PIN2CTRL_PORTB_bit at PIN2CTRL_PORTB.B3;

sfr data unsigned char volatile PIN3CTRL_PORTB            absolute 0x0433;
    sbit  INVEN_PIN3CTRL_PORTB_bit at PIN3CTRL_PORTB.B7;
    sbit  ISC0_PIN3CTRL_PORTB_bit at PIN3CTRL_PORTB.B0;
    sbit  ISC1_PIN3CTRL_PORTB_bit at PIN3CTRL_PORTB.B1;
    sbit  ISC2_PIN3CTRL_PORTB_bit at PIN3CTRL_PORTB.B2;
    sbit  PULLUPEN_PIN3CTRL_PORTB_bit at PIN3CTRL_PORTB.B3;

sfr data unsigned char volatile PIN4CTRL_PORTB            absolute 0x0434;
    sbit  INVEN_PIN4CTRL_PORTB_bit at PIN4CTRL_PORTB.B7;
    sbit  ISC0_PIN4CTRL_PORTB_bit at PIN4CTRL_PORTB.B0;
    sbit  ISC1_PIN4CTRL_PORTB_bit at PIN4CTRL_PORTB.B1;
    sbit  ISC2_PIN4CTRL_PORTB_bit at PIN4CTRL_PORTB.B2;
    sbit  PULLUPEN_PIN4CTRL_PORTB_bit at PIN4CTRL_PORTB.B3;

sfr data unsigned char volatile PIN5CTRL_PORTB            absolute 0x0435;
    sbit  INVEN_PIN5CTRL_PORTB_bit at PIN5CTRL_PORTB.B7;
    sbit  ISC0_PIN5CTRL_PORTB_bit at PIN5CTRL_PORTB.B0;
    sbit  ISC1_PIN5CTRL_PORTB_bit at PIN5CTRL_PORTB.B1;
    sbit  ISC2_PIN5CTRL_PORTB_bit at PIN5CTRL_PORTB.B2;
    sbit  PULLUPEN_PIN5CTRL_PORTB_bit at PIN5CTRL_PORTB.B3;

sfr data unsigned char volatile PIN6CTRL_PORTB            absolute 0x0436;
    sbit  INVEN_PIN6CTRL_PORTB_bit at PIN6CTRL_PORTB.B7;
    sbit  ISC0_PIN6CTRL_PORTB_bit at PIN6CTRL_PORTB.B0;
    sbit  ISC1_PIN6CTRL_PORTB_bit at PIN6CTRL_PORTB.B1;
    sbit  ISC2_PIN6CTRL_PORTB_bit at PIN6CTRL_PORTB.B2;
    sbit  PULLUPEN_PIN6CTRL_PORTB_bit at PIN6CTRL_PORTB.B3;

sfr data unsigned char volatile PIN7CTRL_PORTB            absolute 0x0437;
    sbit  INVEN_PIN7CTRL_PORTB_bit at PIN7CTRL_PORTB.B7;
    sbit  ISC0_PIN7CTRL_PORTB_bit at PIN7CTRL_PORTB.B0;
    sbit  ISC1_PIN7CTRL_PORTB_bit at PIN7CTRL_PORTB.B1;
    sbit  ISC2_PIN7CTRL_PORTB_bit at PIN7CTRL_PORTB.B2;
    sbit  PULLUPEN_PIN7CTRL_PORTB_bit at PIN7CTRL_PORTB.B3;

sfr data unsigned char volatile DIR_PORTC                 absolute 0x0440;
sfr data unsigned char volatile DIRCLR_PORTC              absolute 0x0442;
sfr data unsigned char volatile DIRSET_PORTC              absolute 0x0441;
sfr data unsigned char volatile DIRTGL_PORTC              absolute 0x0443;
sfr data unsigned char volatile IN_PORTC                  absolute 0x0448;
sfr data unsigned char volatile INTFLAGS_PORTC            absolute 0x0449;
    sbit  INT0_INTFLAGS_PORTC_bit at INTFLAGS_PORTC.B0;
    sbit  INT1_INTFLAGS_PORTC_bit at INTFLAGS_PORTC.B1;
    sbit  INT2_INTFLAGS_PORTC_bit at INTFLAGS_PORTC.B2;
    sbit  INT3_INTFLAGS_PORTC_bit at INTFLAGS_PORTC.B3;
    sbit  INT4_INTFLAGS_PORTC_bit at INTFLAGS_PORTC.B4;
    sbit  INT5_INTFLAGS_PORTC_bit at INTFLAGS_PORTC.B5;
    sbit  INT6_INTFLAGS_PORTC_bit at INTFLAGS_PORTC.B6;
    sbit  INT7_INTFLAGS_PORTC_bit at INTFLAGS_PORTC.B7;

sfr data unsigned char volatile OUT_PORTC                 absolute 0x0444;
sfr data unsigned char volatile OUTCLR_PORTC              absolute 0x0446;
sfr data unsigned char volatile OUTSET_PORTC              absolute 0x0445;
sfr data unsigned char volatile OUTTGL_PORTC              absolute 0x0447;
sfr data unsigned char volatile PIN0CTRL_PORTC            absolute 0x0450;
    sbit  INVEN_PIN0CTRL_PORTC_bit at PIN0CTRL_PORTC.B7;
    sbit  ISC0_PIN0CTRL_PORTC_bit at PIN0CTRL_PORTC.B0;
    sbit  ISC1_PIN0CTRL_PORTC_bit at PIN0CTRL_PORTC.B1;
    sbit  ISC2_PIN0CTRL_PORTC_bit at PIN0CTRL_PORTC.B2;
    sbit  PULLUPEN_PIN0CTRL_PORTC_bit at PIN0CTRL_PORTC.B3;

sfr data unsigned char volatile PIN1CTRL_PORTC            absolute 0x0451;
    sbit  INVEN_PIN1CTRL_PORTC_bit at PIN1CTRL_PORTC.B7;
    sbit  ISC0_PIN1CTRL_PORTC_bit at PIN1CTRL_PORTC.B0;
    sbit  ISC1_PIN1CTRL_PORTC_bit at PIN1CTRL_PORTC.B1;
    sbit  ISC2_PIN1CTRL_PORTC_bit at PIN1CTRL_PORTC.B2;
    sbit  PULLUPEN_PIN1CTRL_PORTC_bit at PIN1CTRL_PORTC.B3;

sfr data unsigned char volatile PIN2CTRL_PORTC            absolute 0x0452;
    sbit  INVEN_PIN2CTRL_PORTC_bit at PIN2CTRL_PORTC.B7;
    sbit  ISC0_PIN2CTRL_PORTC_bit at PIN2CTRL_PORTC.B0;
    sbit  ISC1_PIN2CTRL_PORTC_bit at PIN2CTRL_PORTC.B1;
    sbit  ISC2_PIN2CTRL_PORTC_bit at PIN2CTRL_PORTC.B2;
    sbit  PULLUPEN_PIN2CTRL_PORTC_bit at PIN2CTRL_PORTC.B3;

sfr data unsigned char volatile PIN3CTRL_PORTC            absolute 0x0453;
    sbit  INVEN_PIN3CTRL_PORTC_bit at PIN3CTRL_PORTC.B7;
    sbit  ISC0_PIN3CTRL_PORTC_bit at PIN3CTRL_PORTC.B0;
    sbit  ISC1_PIN3CTRL_PORTC_bit at PIN3CTRL_PORTC.B1;
    sbit  ISC2_PIN3CTRL_PORTC_bit at PIN3CTRL_PORTC.B2;
    sbit  PULLUPEN_PIN3CTRL_PORTC_bit at PIN3CTRL_PORTC.B3;

sfr data unsigned char volatile PIN4CTRL_PORTC            absolute 0x0454;
    sbit  INVEN_PIN4CTRL_PORTC_bit at PIN4CTRL_PORTC.B7;
    sbit  ISC0_PIN4CTRL_PORTC_bit at PIN4CTRL_PORTC.B0;
    sbit  ISC1_PIN4CTRL_PORTC_bit at PIN4CTRL_PORTC.B1;
    sbit  ISC2_PIN4CTRL_PORTC_bit at PIN4CTRL_PORTC.B2;
    sbit  PULLUPEN_PIN4CTRL_PORTC_bit at PIN4CTRL_PORTC.B3;

sfr data unsigned char volatile PIN5CTRL_PORTC            absolute 0x0455;
    sbit  INVEN_PIN5CTRL_PORTC_bit at PIN5CTRL_PORTC.B7;
    sbit  ISC0_PIN5CTRL_PORTC_bit at PIN5CTRL_PORTC.B0;
    sbit  ISC1_PIN5CTRL_PORTC_bit at PIN5CTRL_PORTC.B1;
    sbit  ISC2_PIN5CTRL_PORTC_bit at PIN5CTRL_PORTC.B2;
    sbit  PULLUPEN_PIN5CTRL_PORTC_bit at PIN5CTRL_PORTC.B3;

sfr data unsigned char volatile PIN6CTRL_PORTC            absolute 0x0456;
    sbit  INVEN_PIN6CTRL_PORTC_bit at PIN6CTRL_PORTC.B7;
    sbit  ISC0_PIN6CTRL_PORTC_bit at PIN6CTRL_PORTC.B0;
    sbit  ISC1_PIN6CTRL_PORTC_bit at PIN6CTRL_PORTC.B1;
    sbit  ISC2_PIN6CTRL_PORTC_bit at PIN6CTRL_PORTC.B2;
    sbit  PULLUPEN_PIN6CTRL_PORTC_bit at PIN6CTRL_PORTC.B3;

sfr data unsigned char volatile PIN7CTRL_PORTC            absolute 0x0457;
    sbit  INVEN_PIN7CTRL_PORTC_bit at PIN7CTRL_PORTC.B7;
    sbit  ISC0_PIN7CTRL_PORTC_bit at PIN7CTRL_PORTC.B0;
    sbit  ISC1_PIN7CTRL_PORTC_bit at PIN7CTRL_PORTC.B1;
    sbit  ISC2_PIN7CTRL_PORTC_bit at PIN7CTRL_PORTC.B2;
    sbit  PULLUPEN_PIN7CTRL_PORTC_bit at PIN7CTRL_PORTC.B3;

sfr data unsigned char volatile CTRLA_PORTMUX             absolute 0x0200;
    const register unsigned short int EVOUT0 = 0;
    sbit  EVOUT0_bit at CTRLA_PORTMUX.B0;
    const register unsigned short int EVOUT1 = 1;
    sbit  EVOUT1_bit at CTRLA_PORTMUX.B1;
    const register unsigned short int EVOUT2 = 2;
    sbit  EVOUT2_bit at CTRLA_PORTMUX.B2;
    const register unsigned short int LUT0 = 4;
    sbit  LUT0_bit at CTRLA_PORTMUX.B4;
    const register unsigned short int LUT1 = 5;
    sbit  LUT1_bit at CTRLA_PORTMUX.B5;

sfr data unsigned char volatile CTRLB_PORTMUX             absolute 0x0201;
    const register unsigned short int SPI0 = 2;
    sbit  SPI0_bit at CTRLB_PORTMUX.B2;
    const register unsigned short int TWI0 = 4;
    sbit  TWI0_bit at CTRLB_PORTMUX.B4;
    const register unsigned short int USART0 = 0;
    sbit  USART0_bit at CTRLB_PORTMUX.B0;

sfr data unsigned char volatile CTRLC_PORTMUX             absolute 0x0202;
    const register unsigned short int TCA00 = 0;
    sbit  TCA00_bit at CTRLC_PORTMUX.B0;
    const register unsigned short int TCA01 = 1;
    sbit  TCA01_bit at CTRLC_PORTMUX.B1;
    const register unsigned short int TCA02 = 2;
    sbit  TCA02_bit at CTRLC_PORTMUX.B2;
    const register unsigned short int TCA03 = 3;
    sbit  TCA03_bit at CTRLC_PORTMUX.B3;
    const register unsigned short int TCA04 = 4;
    sbit  TCA04_bit at CTRLC_PORTMUX.B4;
    const register unsigned short int TCA05 = 5;
    sbit  TCA05_bit at CTRLC_PORTMUX.B5;

sfr data unsigned char volatile CTRLD_PORTMUX             absolute 0x0203;
    const register unsigned short int TCB0 = 0;
    sbit  TCB0_bit at CTRLD_PORTMUX.B0;

sfr io   unsigned char volatile RSTFR                     absolute 0x0040;
    const register unsigned short int BORF = 1;
    sbit  BORF_bit at RSTFR.B1;
    const register unsigned short int EXTRF = 2;
    sbit  EXTRF_bit at RSTFR.B2;
    const register unsigned short int PORF = 0;
    sbit  PORF_bit at RSTFR.B0;
    const register unsigned short int SWRF = 4;
    sbit  SWRF_bit at RSTFR.B4;
    const register unsigned short int UPDIRF = 5;
    sbit  UPDIRF_bit at RSTFR.B5;
    const register unsigned short int WDRF = 3;
    sbit  WDRF_bit at RSTFR.B3;

sfr io   unsigned char volatile SWRR                      absolute 0x0041;
    const register unsigned short int SWRE = 0;
    sbit  SWRE_bit at SWRR.B0;

sfr data unsigned char volatile CLKSEL                    absolute 0x0147;
    const register unsigned short int CLKSEL0 = 0;
    sbit  CLKSEL0_bit at CLKSEL.B0;
    const register unsigned short int CLKSEL1 = 1;
    sbit  CLKSEL1_bit at CLKSEL.B1;

sfr data unsigned int  volatile CMP                       absolute 0x014C;
sfr data unsigned int  volatile CNT                       absolute 0x0148;
sfr data unsigned char volatile CTRLA_RTC                 absolute 0x0140;
    const register unsigned short int PRESCALER0 = 3;
    sbit  PRESCALER0_bit at CTRLA_RTC.B3;
    const register unsigned short int PRESCALER1 = 4;
    sbit  PRESCALER1_bit at CTRLA_RTC.B4;
    const register unsigned short int PRESCALER2 = 5;
    sbit  PRESCALER2_bit at CTRLA_RTC.B5;
    const register unsigned short int PRESCALER3 = 6;
    sbit  PRESCALER3_bit at CTRLA_RTC.B6;
    const register unsigned short int RTCEN = 0;
    sbit  RTCEN_bit at CTRLA_RTC.B0;
    sbit  RUNSTDBY_CTRLA_RTC_bit at CTRLA_RTC.B7;

sfr data unsigned char volatile DBGCTRL_RTC               absolute 0x0145;
    sbit  DBGRUN_DBGCTRL_RTC_bit at DBGCTRL_RTC.B0;

sfr data unsigned char volatile INTCTRL_RTC               absolute 0x0142;
    const register unsigned short int CMP_ = 1;
    sbit  CMP_bit at INTCTRL_RTC.B1;
    const register unsigned short int OVF = 0;
    sbit  OVF_bit at INTCTRL_RTC.B0;

sfr data unsigned char volatile INTFLAGS_RTC              absolute 0x0143;
    sbit  CMP__INTFLAGS_RTC_bit at INTFLAGS_RTC.B1;
    sbit  OVF_INTFLAGS_RTC_bit at INTFLAGS_RTC.B0;

sfr data unsigned int  volatile PER                       absolute 0x014A;
sfr data unsigned char volatile PITCTRLA                  absolute 0x0150;
    sbit  PERIOD0_PITCTRLA_bit at PITCTRLA.B3;
    sbit  PERIOD1_PITCTRLA_bit at PITCTRLA.B4;
    sbit  PERIOD2_PITCTRLA_bit at PITCTRLA.B5;
    sbit  PERIOD3_PITCTRLA_bit at PITCTRLA.B6;
    const register unsigned short int PITEN = 0;
    sbit  PITEN_bit at PITCTRLA.B0;

sfr data unsigned char volatile PITDBGCTRL                absolute 0x0155;
    sbit  DBGRUN_PITDBGCTRL_bit at PITDBGCTRL.B0;

sfr data unsigned char volatile PITINTCTRL                absolute 0x0152;
    const register unsigned short int PI_ = 0;
    sbit  PI_bit at PITINTCTRL.B0;

sfr data unsigned char volatile PITINTFLAGS               absolute 0x0153;
    sbit  PI__PITINTFLAGS_bit at PITINTFLAGS.B0;

sfr data unsigned char volatile PITSTATUS                 absolute 0x0151;
    const register unsigned short int CTRLBUSY = 0;
    sbit  CTRLBUSY_bit at PITSTATUS.B0;

sfr data unsigned char volatile STATUS_RTC                absolute 0x0141;
    const register unsigned short int CMPBUSY = 3;
    sbit  CMPBUSY_bit at STATUS_RTC.B3;
    const register unsigned short int CNTBUSY = 1;
    sbit  CNTBUSY_bit at STATUS_RTC.B1;
    const register unsigned short int CTRLABUSY = 0;
    sbit  CTRLABUSY_bit at STATUS_RTC.B0;
    const register unsigned short int PERBUSY = 2;
    sbit  PERBUSY_bit at STATUS_RTC.B2;

sfr data unsigned char volatile TEMP_RTC                  absolute 0x0144;
sfr data unsigned char volatile DEVICEID0                 absolute 0x1100;
sfr data unsigned char volatile DEVICEID1                 absolute 0x1101;
sfr data unsigned char volatile DEVICEID2                 absolute 0x1102;
sfr data unsigned char volatile SERNUM0                   absolute 0x1103;
sfr data unsigned char volatile SERNUM1                   absolute 0x1104;
sfr data unsigned char volatile SERNUM2                   absolute 0x1105;
sfr data unsigned char volatile SERNUM3                   absolute 0x1106;
sfr data unsigned char volatile SERNUM4                   absolute 0x1107;
sfr data unsigned char volatile SERNUM5                   absolute 0x1108;
sfr data unsigned char volatile SERNUM6                   absolute 0x1109;
sfr data unsigned char volatile SERNUM7                   absolute 0x110A;
sfr data unsigned char volatile SERNUM8                   absolute 0x110B;
sfr data unsigned char volatile SERNUM9                   absolute 0x110C;
sfr data unsigned char volatile TEMPSENSE0                absolute 0x1120;
sfr data unsigned char volatile TEMPSENSE1                absolute 0x1121;
sfr io   unsigned char volatile CTRLA_SLPCTRL             absolute 0x0050;
    const register unsigned short int SEN = 0;
    sbit  SEN_bit at CTRLA_SLPCTRL.B0;
    const register unsigned short int SMODE0 = 1;
    sbit  SMODE0_bit at CTRLA_SLPCTRL.B1;
    const register unsigned short int SMODE1 = 2;
    sbit  SMODE1_bit at CTRLA_SLPCTRL.B2;

sfr data unsigned char volatile CTRLA_SPI0                absolute 0x0820;
    const register unsigned short int CLK2X = 4;
    sbit  CLK2X_bit at CTRLA_SPI0.B4;
    const register unsigned short int DORD = 6;
    sbit  DORD_bit at CTRLA_SPI0.B6;
    sbit  ENABLE_CTRLA_SPI0_bit at CTRLA_SPI0.B0;
    const register unsigned short int MASTER = 5;
    sbit  MASTER_bit at CTRLA_SPI0.B5;
    sbit  PRESC0_CTRLA_SPI0_bit at CTRLA_SPI0.B1;
    sbit  PRESC1_CTRLA_SPI0_bit at CTRLA_SPI0.B2;

sfr data unsigned char volatile CTRLB_SPI0                absolute 0x0821;
    const register unsigned short int BUFEN = 7;
    sbit  BUFEN_bit at CTRLB_SPI0.B7;
    const register unsigned short int BUFWR = 6;
    sbit  BUFWR_bit at CTRLB_SPI0.B6;
    sbit  MODE0_CTRLB_SPI0_bit at CTRLB_SPI0.B0;
    sbit  MODE1_CTRLB_SPI0_bit at CTRLB_SPI0.B1;
    const register unsigned short int SSD = 2;
    sbit  SSD_bit at CTRLB_SPI0.B2;

sfr data unsigned char volatile DATA_SPI0                 absolute 0x0824;
sfr data unsigned char volatile INTCTRL_SPI0              absolute 0x0822;
    const register unsigned short int DREIE = 5;
    sbit  DREIE_bit at INTCTRL_SPI0.B5;
    const register unsigned short int IE = 0;
    sbit  IE_bit at INTCTRL_SPI0.B0;
    const register unsigned short int RXCIE = 7;
    sbit  RXCIE_bit at INTCTRL_SPI0.B7;
    const register unsigned short int SSIE = 4;
    sbit  SSIE_bit at INTCTRL_SPI0.B4;
    const register unsigned short int TXCIE = 6;
    sbit  TXCIE_bit at INTCTRL_SPI0.B6;

sfr data unsigned char volatile INTFLAGS_SPI0             absolute 0x0823;

sfr data unsigned char volatile EXTBRK                    absolute 0x0F02;
    const register unsigned short int ENEXTBRK = 0;
    sbit  ENEXTBRK_bit at EXTBRK.B0;

sfr data unsigned char volatile REVID                     absolute 0x0F01;
sfr data unsigned int  volatile CMP0                      absolute 0x0A28;
sfr data unsigned int  volatile CMP0BUF                   absolute 0x0A38;
sfr data unsigned int  volatile CMP1                      absolute 0x0A2A;
sfr data unsigned int  volatile CMP1BUF                   absolute 0x0A3A;
sfr data unsigned int  volatile CMP2                      absolute 0x0A2C;
sfr data unsigned int  volatile CMP2BUF                   absolute 0x0A3C;
sfr data unsigned int  volatile CNT_TCA0_SINGLE           absolute 0x0A20;
sfr data unsigned char volatile CTRLA_TCA0_SINGLE         absolute 0x0A00;
    sbit  CLKSEL0_CTRLA_TCA0_SINGLE_bit at CTRLA_TCA0_SINGLE.B1;
    sbit  CLKSEL1_CTRLA_TCA0_SINGLE_bit at CTRLA_TCA0_SINGLE.B2;
    const register unsigned short int CLKSEL2 = 3;
    sbit  CLKSEL2_bit at CTRLA_TCA0_SINGLE.B3;
    sbit  ENABLE_CTRLA_TCA0_SINGLE_bit at CTRLA_TCA0_SINGLE.B0;

sfr data unsigned char volatile CTRLB_TCA0_SINGLE         absolute 0x0A01;
    const register unsigned short int ALUPD = 3;
    sbit  ALUPD_bit at CTRLB_TCA0_SINGLE.B3;
    const register unsigned short int CMP0EN = 4;
    sbit  CMP0EN_bit at CTRLB_TCA0_SINGLE.B4;
    const register unsigned short int CMP1EN = 5;
    sbit  CMP1EN_bit at CTRLB_TCA0_SINGLE.B5;
    const register unsigned short int CMP2EN = 6;
    sbit  CMP2EN_bit at CTRLB_TCA0_SINGLE.B6;
    const register unsigned short int WGMODE0 = 0;
    sbit  WGMODE0_bit at CTRLB_TCA0_SINGLE.B0;
    const register unsigned short int WGMODE1 = 1;
    sbit  WGMODE1_bit at CTRLB_TCA0_SINGLE.B1;
    const register unsigned short int WGMODE2 = 2;
    sbit  WGMODE2_bit at CTRLB_TCA0_SINGLE.B2;

sfr data unsigned char volatile CTRLC_TCA0_SINGLE         absolute 0x0A02;
    const register unsigned short int CMP0OV = 0;
    sbit  CMP0OV_bit at CTRLC_TCA0_SINGLE.B0;
    const register unsigned short int CMP1OV = 1;
    sbit  CMP1OV_bit at CTRLC_TCA0_SINGLE.B1;
    const register unsigned short int CMP2OV = 2;
    sbit  CMP2OV_bit at CTRLC_TCA0_SINGLE.B2;

sfr data unsigned char volatile CTRLD_TCA0_SINGLE         absolute 0x0A03;
    const register unsigned short int SPLITM = 0;
    sbit  SPLITM_bit at CTRLD_TCA0_SINGLE.B0;

sfr data unsigned char volatile CTRLECLR                  absolute 0x0A04;
    sbit  CMD0_CTRLECLR_bit at CTRLECLR.B2;
    sbit  CMD1_CTRLECLR_bit at CTRLECLR.B3;
    const register unsigned short int DIR_ = 0;
    sbit  DIR_bit at CTRLECLR.B0;
    const register unsigned short int LUPD = 1;
    sbit  LUPD_bit at CTRLECLR.B1;

sfr data unsigned char volatile CTRLESET                  absolute 0x0A05;
    sbit  CMD0_CTRLESET_bit at CTRLESET.B2;
    sbit  CMD1_CTRLESET_bit at CTRLESET.B3;
    sbit  DIR__CTRLESET_bit at CTRLESET.B0;
    sbit  LUPD_CTRLESET_bit at CTRLESET.B1;

sfr data unsigned char volatile CTRLFCLR                  absolute 0x0A06;
    const register unsigned short int CMP0BV = 1;
    sbit  CMP0BV_bit at CTRLFCLR.B1;
    const register unsigned short int CMP1BV = 2;
    sbit  CMP1BV_bit at CTRLFCLR.B2;
    const register unsigned short int CMP2BV = 3;
    sbit  CMP2BV_bit at CTRLFCLR.B3;
    const register unsigned short int PERBV = 0;
    sbit  PERBV_bit at CTRLFCLR.B0;

sfr data unsigned char volatile CTRLFSET                  absolute 0x0A07;
    sbit  CMP0BV_CTRLFSET_bit at CTRLFSET.B1;
    sbit  CMP1BV_CTRLFSET_bit at CTRLFSET.B2;
    sbit  CMP2BV_CTRLFSET_bit at CTRLFSET.B3;
    sbit  PERBV_CTRLFSET_bit at CTRLFSET.B0;

sfr data unsigned char volatile DBGCTRL_TCA0_SINGLE       absolute 0x0A0E;
    sbit  DBGRUN_DBGCTRL_TCA0_SINGLE_bit at DBGCTRL_TCA0_SINGLE.B0;

sfr data unsigned char volatile EVCTRL_TCA0_SINGLE        absolute 0x0A09;
    const register unsigned short int CNTEI = 0;
    sbit  CNTEI_bit at EVCTRL_TCA0_SINGLE.B0;
    const register unsigned short int EVACT0 = 1;
    sbit  EVACT0_bit at EVCTRL_TCA0_SINGLE.B1;
    const register unsigned short int EVACT1 = 2;
    sbit  EVACT1_bit at EVCTRL_TCA0_SINGLE.B2;

sfr data unsigned char volatile INTCTRL_TCA0_SINGLE       absolute 0x0A0A;
    const register unsigned short int CMP0_ = 4;
    sbit  CMP0_bit at INTCTRL_TCA0_SINGLE.B4;
    const register unsigned short int CMP1_ = 5;
    sbit  CMP1_bit at INTCTRL_TCA0_SINGLE.B5;
    const register unsigned short int CMP2_ = 6;
    sbit  CMP2_bit at INTCTRL_TCA0_SINGLE.B6;
    sbit  OVF_INTCTRL_TCA0_SINGLE_bit at INTCTRL_TCA0_SINGLE.B0;

sfr data unsigned char volatile INTFLAGS_TCA0_SINGLE      absolute 0x0A0B;
    sbit  CMP0__INTFLAGS_TCA0_SINGLE_bit at INTFLAGS_TCA0_SINGLE.B4;
    sbit  CMP1__INTFLAGS_TCA0_SINGLE_bit at INTFLAGS_TCA0_SINGLE.B5;
    sbit  CMP2__INTFLAGS_TCA0_SINGLE_bit at INTFLAGS_TCA0_SINGLE.B6;
    sbit  OVF_INTFLAGS_TCA0_SINGLE_bit at INTFLAGS_TCA0_SINGLE.B0;

sfr data unsigned int  volatile PER_TCA0_SINGLE           absolute 0x0A26;
sfr data unsigned int  volatile PERBUF                    absolute 0x0A36;
sfr data unsigned char volatile TEMP_TCA0_SINGLE          absolute 0x0A0F;
sfr data unsigned char volatile CTRLA_TCA0_SPLIT          absolute 0x0A00;
    sbit  CLKSEL0_CTRLA_TCA0_SPLIT_bit at CTRLA_TCA0_SPLIT.B1;
    sbit  CLKSEL1_CTRLA_TCA0_SPLIT_bit at CTRLA_TCA0_SPLIT.B2;
    sbit  CLKSEL2_CTRLA_TCA0_SPLIT_bit at CTRLA_TCA0_SPLIT.B3;
    sbit  ENABLE_CTRLA_TCA0_SPLIT_bit at CTRLA_TCA0_SPLIT.B0;

sfr data unsigned char volatile CTRLB_TCA0_SPLIT          absolute 0x0A01;
    const register unsigned short int HCMP0EN = 4;
    sbit  HCMP0EN_bit at CTRLB_TCA0_SPLIT.B4;
    const register unsigned short int HCMP1EN = 5;
    sbit  HCMP1EN_bit at CTRLB_TCA0_SPLIT.B5;
    const register unsigned short int HCMP2EN = 6;
    sbit  HCMP2EN_bit at CTRLB_TCA0_SPLIT.B6;
    const register unsigned short int LCMP0EN = 0;
    sbit  LCMP0EN_bit at CTRLB_TCA0_SPLIT.B0;
    const register unsigned short int LCMP1EN = 1;
    sbit  LCMP1EN_bit at CTRLB_TCA0_SPLIT.B1;
    const register unsigned short int LCMP2EN = 2;
    sbit  LCMP2EN_bit at CTRLB_TCA0_SPLIT.B2;

sfr data unsigned char volatile CTRLC_TCA0_SPLIT          absolute 0x0A02;
    const register unsigned short int LCMP0OV = 0;
    sbit  LCMP0OV_bit at CTRLC_TCA0_SPLIT.B0;
    const register unsigned short int LCMP1OV = 1;
    sbit  LCMP1OV_bit at CTRLC_TCA0_SPLIT.B1;
    const register unsigned short int LCMP2OV = 2;
    sbit  LCMP2OV_bit at CTRLC_TCA0_SPLIT.B2;

sfr data unsigned char volatile CTRLD_TCA0_SPLIT          absolute 0x0A03;
    sbit  SPLITM_CTRLD_TCA0_SPLIT_bit at CTRLD_TCA0_SPLIT.B0;

sfr data unsigned char volatile CTRLECLR_TCA0_SPLIT       absolute 0x0A04;
    sbit  CMD0_CTRLECLR_TCA0_SPLIT_bit at CTRLECLR_TCA0_SPLIT.B2;
    sbit  CMD1_CTRLECLR_TCA0_SPLIT_bit at CTRLECLR_TCA0_SPLIT.B3;

sfr data unsigned char volatile CTRLESET_TCA0_SPLIT       absolute 0x0A05;
    sbit  CMD0_CTRLESET_TCA0_SPLIT_bit at CTRLESET_TCA0_SPLIT.B2;
    sbit  CMD1_CTRLESET_TCA0_SPLIT_bit at CTRLESET_TCA0_SPLIT.B3;

sfr data unsigned char volatile DBGCTRL_TCA0_SPLIT        absolute 0x0A0E;
    sbit  DBGRUN_DBGCTRL_TCA0_SPLIT_bit at DBGCTRL_TCA0_SPLIT.B0;

sfr data unsigned char volatile HCMP0                     absolute 0x0A29;
sfr data unsigned char volatile HCMP1                     absolute 0x0A2B;
sfr data unsigned char volatile HCMP2                     absolute 0x0A2D;
sfr data unsigned char volatile HCNT                      absolute 0x0A21;
sfr data unsigned char volatile HPER                      absolute 0x0A27;
sfr data unsigned char volatile INTCTRL_TCA0_SPLIT        absolute 0x0A0A;
    const register unsigned short int HUNF = 1;
    sbit  HUNF_bit at INTCTRL_TCA0_SPLIT.B1;
    const register unsigned short int LUNF = 0;
    sbit  LUNF_bit at INTCTRL_TCA0_SPLIT.B0;

sfr data unsigned char volatile INTFLAGS_TCA0_SPLIT       absolute 0x0A0B;
    sbit  HUNF_INTFLAGS_TCA0_SPLIT_bit at INTFLAGS_TCA0_SPLIT.B1;
    sbit  LUNF_INTFLAGS_TCA0_SPLIT_bit at INTFLAGS_TCA0_SPLIT.B0;

sfr data unsigned char volatile LCMP0                     absolute 0x0A28;
sfr data unsigned char volatile LCMP1                     absolute 0x0A2A;
sfr data unsigned char volatile LCMP2                     absolute 0x0A2C;
sfr data unsigned char volatile LCNT                      absolute 0x0A20;
sfr data unsigned char volatile LPER                      absolute 0x0A26;
sfr data unsigned int  volatile CCMP                      absolute 0x0A4C;
sfr data unsigned int  volatile CNT_TCB0                  absolute 0x0A4A;
sfr data unsigned char volatile CTRLA_TCB0                absolute 0x0A40;
    sbit  CLKSEL0_CTRLA_TCB0_bit at CTRLA_TCB0.B1;
    sbit  CLKSEL1_CTRLA_TCB0_bit at CTRLA_TCB0.B2;
    sbit  ENABLE_CTRLA_TCB0_bit at CTRLA_TCB0.B0;
    sbit  RUNSTDBY_CTRLA_TCB0_bit at CTRLA_TCB0.B6;
    const register unsigned short int SYNCUPD = 4;
    sbit  SYNCUPD_bit at CTRLA_TCB0.B4;

sfr data unsigned char volatile CTRLB_TCB0                absolute 0x0A41;
    const register unsigned short int ASYNC = 6;
    sbit  ASYNC_bit at CTRLB_TCB0.B6;
    const register unsigned short int CCEN = 4;
    sbit  CCEN_bit at CTRLB_TCB0.B4;
    const register unsigned short int CCINIT = 5;
    sbit  CCINIT_bit at CTRLB_TCB0.B5;
    const register unsigned short int CNTMODE0 = 0;
    sbit  CNTMODE0_bit at CTRLB_TCB0.B0;
    const register unsigned short int CNTMODE1 = 1;
    sbit  CNTMODE1_bit at CTRLB_TCB0.B1;
    const register unsigned short int CNTMODE2 = 2;
    sbit  CNTMODE2_bit at CTRLB_TCB0.B2;

sfr data unsigned char volatile DBGCTRL_TCB0              absolute 0x0A48;
    sbit  DBGRUN_DBGCTRL_TCB0_bit at DBGCTRL_TCB0.B0;

sfr data unsigned char volatile EVCTRL_TCB0               absolute 0x0A44;
    const register unsigned short int CAPTEI = 0;
    sbit  CAPTEI_bit at EVCTRL_TCB0.B0;
    const register unsigned short int EDGE = 4;
    sbit  EDGE_bit at EVCTRL_TCB0.B4;
    const register unsigned short int FILTER = 6;
    sbit  FILTER_bit at EVCTRL_TCB0.B6;

sfr data unsigned char volatile INTCTRL_TCB0              absolute 0x0A45;
    const register unsigned short int CAPT = 0;
    sbit  CAPT_bit at INTCTRL_TCB0.B0;

sfr data unsigned char volatile INTFLAGS_TCB0             absolute 0x0A46;
    sbit  CAPT_INTFLAGS_TCB0_bit at INTFLAGS_TCB0.B0;

sfr data unsigned char volatile STATUS_TCB0               absolute 0x0A47;
    const register unsigned short int RUN = 0;
    sbit  RUN_bit at STATUS_TCB0.B0;

sfr data unsigned char volatile TEMP_TCB0                 absolute 0x0A49;
sfr data unsigned int  volatile CMPACLR                   absolute 0x0AAA;
sfr data unsigned int  volatile CMPASET                   absolute 0x0AA8;
sfr data unsigned int  volatile CMPBCLR                   absolute 0x0AAE;
sfr data unsigned int  volatile CMPBSET                   absolute 0x0AAC;
sfr data unsigned char volatile CTRLA_TCD0                absolute 0x0A80;
    sbit  CLKSEL0_CTRLA_TCD0_bit at CTRLA_TCD0.B5;
    sbit  CLKSEL1_CTRLA_TCD0_bit at CTRLA_TCD0.B6;
    const register unsigned short int CNTPRES0 = 3;
    sbit  CNTPRES0_bit at CTRLA_TCD0.B3;
    const register unsigned short int CNTPRES1 = 4;
    sbit  CNTPRES1_bit at CTRLA_TCD0.B4;
    sbit  ENABLE_CTRLA_TCD0_bit at CTRLA_TCD0.B0;
    const register unsigned short int SYNCPRES0 = 1;
    sbit  SYNCPRES0_bit at CTRLA_TCD0.B1;
    const register unsigned short int SYNCPRES1 = 2;
    sbit  SYNCPRES1_bit at CTRLA_TCD0.B2;

sfr data unsigned char volatile CTRLB_TCD0                absolute 0x0A81;
    sbit  WGMODE0_CTRLB_TCD0_bit at CTRLB_TCD0.B0;
    sbit  WGMODE1_CTRLB_TCD0_bit at CTRLB_TCD0.B1;

sfr data unsigned char volatile CTRLC_TCD0                absolute 0x0A82;
    const register unsigned short int AUPDATE = 1;
    sbit  AUPDATE_bit at CTRLC_TCD0.B1;
    const register unsigned short int CMPCSEL = 6;
    sbit  CMPCSEL_bit at CTRLC_TCD0.B6;
    const register unsigned short int CMPDSEL = 7;
    sbit  CMPDSEL_bit at CTRLC_TCD0.B7;
    const register unsigned short int CMPOVR = 0;
    sbit  CMPOVR_bit at CTRLC_TCD0.B0;
    const register unsigned short int FIFTY = 3;
    sbit  FIFTY_bit at CTRLC_TCD0.B3;

sfr data unsigned char volatile CTRLD_TCD0                absolute 0x0A83;
    const register unsigned short int CMPAVAL0 = 0;
    sbit  CMPAVAL0_bit at CTRLD_TCD0.B0;
    const register unsigned short int CMPAVAL1 = 1;
    sbit  CMPAVAL1_bit at CTRLD_TCD0.B1;
    const register unsigned short int CMPAVAL2 = 2;
    sbit  CMPAVAL2_bit at CTRLD_TCD0.B2;
    const register unsigned short int CMPAVAL3 = 3;
    sbit  CMPAVAL3_bit at CTRLD_TCD0.B3;
    const register unsigned short int CMPBVAL0 = 4;
    sbit  CMPBVAL0_bit at CTRLD_TCD0.B4;
    const register unsigned short int CMPBVAL1 = 5;
    sbit  CMPBVAL1_bit at CTRLD_TCD0.B5;
    const register unsigned short int CMPBVAL2 = 6;
    sbit  CMPBVAL2_bit at CTRLD_TCD0.B6;
    const register unsigned short int CMPBVAL3 = 7;
    sbit  CMPBVAL3_bit at CTRLD_TCD0.B7;

sfr data unsigned char volatile CTRLE_TCD0                absolute 0x0A84;
    const register unsigned short int CAPTUREA = 3;
    sbit  CAPTUREA_bit at CTRLE_TCD0.B3;
    const register unsigned short int CAPTUREB = 4;
    sbit  CAPTUREB_bit at CTRLE_TCD0.B4;
    const register unsigned short int DISEOC = 7;
    sbit  DISEOC_bit at CTRLE_TCD0.B7;
    const register unsigned short int RESTART = 2;
    sbit  RESTART_bit at CTRLE_TCD0.B2;
    const register unsigned short int SYNC = 1;
    sbit  SYNC_bit at CTRLE_TCD0.B1;
    const register unsigned short int SYNCEOC = 0;
    sbit  SYNCEOC_bit at CTRLE_TCD0.B0;

sfr data unsigned char volatile DBGCTRL_TCD0              absolute 0x0A9E;
    sbit  DBGRUN_DBGCTRL_TCD0_bit at DBGCTRL_TCD0.B0;
    const register unsigned short int FAULTDET = 2;
    sbit  FAULTDET_bit at DBGCTRL_TCD0.B2;

sfr data unsigned char volatile DITCTRL                   absolute 0x0A98;
    const register unsigned short int DITHERSEL0 = 0;
    sbit  DITHERSEL0_bit at DITCTRL.B0;
    const register unsigned short int DITHERSEL1 = 1;
    sbit  DITHERSEL1_bit at DITCTRL.B1;

sfr data unsigned char volatile DITVAL                    absolute 0x0A99;
    const register unsigned short int DITHER0 = 0;
    sbit  DITHER0_bit at DITVAL.B0;
    const register unsigned short int DITHER1 = 1;
    sbit  DITHER1_bit at DITVAL.B1;
    const register unsigned short int DITHER2 = 2;
    sbit  DITHER2_bit at DITVAL.B2;
    const register unsigned short int DITHER3 = 3;
    sbit  DITHER3_bit at DITVAL.B3;

sfr data unsigned char volatile DLYCTRL                   absolute 0x0A94;
    const register unsigned short int DLYPRESC0 = 4;
    sbit  DLYPRESC0_bit at DLYCTRL.B4;
    const register unsigned short int DLYPRESC1 = 5;
    sbit  DLYPRESC1_bit at DLYCTRL.B5;
    const register unsigned short int DLYSEL0 = 0;
    sbit  DLYSEL0_bit at DLYCTRL.B0;
    const register unsigned short int DLYSEL1 = 1;
    sbit  DLYSEL1_bit at DLYCTRL.B1;
    const register unsigned short int DLYTRIG0 = 2;
    sbit  DLYTRIG0_bit at DLYCTRL.B2;
    const register unsigned short int DLYTRIG1 = 3;
    sbit  DLYTRIG1_bit at DLYCTRL.B3;

sfr data unsigned char volatile DLYVAL                    absolute 0x0A95;
    const register unsigned short int DLYVAL0 = 0;
    sbit  DLYVAL0_bit at DLYVAL.B0;
    const register unsigned short int DLYVAL1 = 1;
    sbit  DLYVAL1_bit at DLYVAL.B1;
    const register unsigned short int DLYVAL2 = 2;
    sbit  DLYVAL2_bit at DLYVAL.B2;
    const register unsigned short int DLYVAL3 = 3;
    sbit  DLYVAL3_bit at DLYVAL.B3;
    const register unsigned short int DLYVAL4 = 4;
    sbit  DLYVAL4_bit at DLYVAL.B4;
    const register unsigned short int DLYVAL5 = 5;
    sbit  DLYVAL5_bit at DLYVAL.B5;
    const register unsigned short int DLYVAL6 = 6;
    sbit  DLYVAL6_bit at DLYVAL.B6;
    const register unsigned short int DLYVAL7 = 7;
    sbit  DLYVAL7_bit at DLYVAL.B7;

sfr data unsigned char volatile EVCTRLA                   absolute 0x0A88;
    const register unsigned short int ACTION = 2;
    sbit  ACTION_bit at EVCTRLA.B2;
    const register unsigned short int CFG0 = 6;
    sbit  CFG0_bit at EVCTRLA.B6;
    const register unsigned short int CFG1 = 7;
    sbit  CFG1_bit at EVCTRLA.B7;
    sbit  EDGE_EVCTRLA_bit at EVCTRLA.B4;
    const register unsigned short int TRIGEI = 0;
    sbit  TRIGEI_bit at EVCTRLA.B0;

sfr data unsigned char volatile EVCTRLB                   absolute 0x0A89;
    sbit  ACTION_EVCTRLB_bit at EVCTRLB.B2;
    sbit  CFG0_EVCTRLB_bit at EVCTRLB.B6;
    sbit  CFG1_EVCTRLB_bit at EVCTRLB.B7;
    sbit  EDGE_EVCTRLB_bit at EVCTRLB.B4;
    sbit  TRIGEI_EVCTRLB_bit at EVCTRLB.B0;

sfr data unsigned char volatile FAULTCTRL                 absolute 0x0A92;
    sbit  CMPA_FAULTCTRL_bit at FAULTCTRL.B0;
    sbit  CMPAEN_FAULTCTRL_bit at FAULTCTRL.B4;
    sbit  CMPB_FAULTCTRL_bit at FAULTCTRL.B1;
    sbit  CMPBEN_FAULTCTRL_bit at FAULTCTRL.B5;
    sbit  CMPC_FAULTCTRL_bit at FAULTCTRL.B2;
    sbit  CMPCEN_FAULTCTRL_bit at FAULTCTRL.B6;
    sbit  CMPD_FAULTCTRL_bit at FAULTCTRL.B3;
    sbit  CMPDEN_FAULTCTRL_bit at FAULTCTRL.B7;

sfr data unsigned char volatile INPUTCTRLA                absolute 0x0A90;
    const register unsigned short int INPUTMODE0 = 0;
    sbit  INPUTMODE0_bit at INPUTCTRLA.B0;
    const register unsigned short int INPUTMODE1 = 1;
    sbit  INPUTMODE1_bit at INPUTCTRLA.B1;
    const register unsigned short int INPUTMODE2 = 2;
    sbit  INPUTMODE2_bit at INPUTCTRLA.B2;
    const register unsigned short int INPUTMODE3 = 3;
    sbit  INPUTMODE3_bit at INPUTCTRLA.B3;

sfr data unsigned char volatile INPUTCTRLB                absolute 0x0A91;
    sbit  INPUTMODE0_INPUTCTRLB_bit at INPUTCTRLB.B0;
    sbit  INPUTMODE1_INPUTCTRLB_bit at INPUTCTRLB.B1;
    sbit  INPUTMODE2_INPUTCTRLB_bit at INPUTCTRLB.B2;
    sbit  INPUTMODE3_INPUTCTRLB_bit at INPUTCTRLB.B3;

sfr data unsigned char volatile INTCTRL_TCD0              absolute 0x0A8C;
    sbit  OVF_INTCTRL_TCD0_bit at INTCTRL_TCD0.B0;
    const register unsigned short int TRIGA = 2;
    sbit  TRIGA_bit at INTCTRL_TCD0.B2;
    const register unsigned short int TRIGB = 3;
    sbit  TRIGB_bit at INTCTRL_TCD0.B3;

sfr data unsigned char volatile INTFLAGS_TCD0             absolute 0x0A8D;
    sbit  OVF_INTFLAGS_TCD0_bit at INTFLAGS_TCD0.B0;
    sbit  TRIGA_INTFLAGS_TCD0_bit at INTFLAGS_TCD0.B2;
    sbit  TRIGB_INTFLAGS_TCD0_bit at INTFLAGS_TCD0.B3;

sfr data unsigned int  volatile SCAPTUREA                 absolute 0x0AA2;
sfr data unsigned int  volatile SCAPTUREB                 absolute 0x0AA4;
sfr data unsigned char volatile STATUS_TCD0               absolute 0x0A8E;
    const register unsigned short int CMDRDY = 1;
    sbit  CMDRDY_bit at STATUS_TCD0.B1;
    const register unsigned short int ENRDY = 0;
    sbit  ENRDY_bit at STATUS_TCD0.B0;
    const register unsigned short int PWMACTA = 6;
    sbit  PWMACTA_bit at STATUS_TCD0.B6;
    const register unsigned short int PWMACTB = 7;
    sbit  PWMACTB_bit at STATUS_TCD0.B7;

sfr data unsigned char volatile CTRLA_TWI0                absolute 0x0810;
    const register unsigned short int FMPEN = 1;
    sbit  FMPEN_bit at CTRLA_TWI0.B1;
    const register unsigned short int SDAHOLD0 = 2;
    sbit  SDAHOLD0_bit at CTRLA_TWI0.B2;
    const register unsigned short int SDAHOLD1 = 3;
    sbit  SDAHOLD1_bit at CTRLA_TWI0.B3;
    const register unsigned short int SDASETUP = 4;
    sbit  SDASETUP_bit at CTRLA_TWI0.B4;

sfr data unsigned char volatile DBGCTRL_TWI0              absolute 0x0812;
    sbit  DBGRUN_DBGCTRL_TWI0_bit at DBGCTRL_TWI0.B0;

sfr data unsigned char volatile MADDR                     absolute 0x0817;
sfr data unsigned char volatile MBAUD                     absolute 0x0816;
sfr data unsigned char volatile MCTRLA                    absolute 0x0813;
    sbit  ENABLE_MCTRLA_bit at MCTRLA.B0;
    const register unsigned short int QCEN = 4;
    sbit  QCEN_bit at MCTRLA.B4;
    const register unsigned short int RIEN = 7;
    sbit  RIEN_bit at MCTRLA.B7;
    const register unsigned short int SMEN = 1;
    sbit  SMEN_bit at MCTRLA.B1;
    const register unsigned short int TIMEOUT0 = 2;
    sbit  TIMEOUT0_bit at MCTRLA.B2;
    const register unsigned short int TIMEOUT1 = 3;
    sbit  TIMEOUT1_bit at MCTRLA.B3;
    const register unsigned short int WIEN = 6;
    sbit  WIEN_bit at MCTRLA.B6;

sfr data unsigned char volatile MCTRLB                    absolute 0x0814;
    const register unsigned short int ACKACT = 2;
    sbit  ACKACT_bit at MCTRLB.B2;
    const register unsigned short int FLUSH = 3;
    sbit  FLUSH_bit at MCTRLB.B3;
    const register unsigned short int MCMD0 = 0;
    sbit  MCMD0_bit at MCTRLB.B0;
    const register unsigned short int MCMD1 = 1;
    sbit  MCMD1_bit at MCTRLB.B1;

sfr data unsigned char volatile MDATA                     absolute 0x0818;
sfr data unsigned char volatile MSTATUS                   absolute 0x0815;
    const register unsigned short int ARBLOST = 3;
    sbit  ARBLOST_bit at MSTATUS.B3;
    const register unsigned short int BUSERR = 2;
    sbit  BUSERR_bit at MSTATUS.B2;
    const register unsigned short int BUSSTATE0 = 0;
    sbit  BUSSTATE0_bit at MSTATUS.B0;
    const register unsigned short int BUSSTATE1 = 1;
    sbit  BUSSTATE1_bit at MSTATUS.B1;
    const register unsigned short int CLKHOLD = 5;
    sbit  CLKHOLD_bit at MSTATUS.B5;
    const register unsigned short int RIF = 7;
    sbit  RIF_bit at MSTATUS.B7;
    const register unsigned short int RXACK = 4;
    sbit  RXACK_bit at MSTATUS.B4;
    const register unsigned short int WIF = 6;
    sbit  WIF_bit at MSTATUS.B6;

sfr data unsigned char volatile SADDR                     absolute 0x081C;
sfr data unsigned char volatile SADDRMASK                 absolute 0x081E;
    const register unsigned short int ADDREN = 0;
    sbit  ADDREN_bit at SADDRMASK.B0;
    const register unsigned short int ADDRMASK0 = 1;
    sbit  ADDRMASK0_bit at SADDRMASK.B1;
    const register unsigned short int ADDRMASK1 = 2;
    sbit  ADDRMASK1_bit at SADDRMASK.B2;
    const register unsigned short int ADDRMASK2 = 3;
    sbit  ADDRMASK2_bit at SADDRMASK.B3;
    const register unsigned short int ADDRMASK3 = 4;
    sbit  ADDRMASK3_bit at SADDRMASK.B4;
    const register unsigned short int ADDRMASK4 = 5;
    sbit  ADDRMASK4_bit at SADDRMASK.B5;
    const register unsigned short int ADDRMASK5 = 6;
    sbit  ADDRMASK5_bit at SADDRMASK.B6;
    const register unsigned short int ADDRMASK6 = 7;
    sbit  ADDRMASK6_bit at SADDRMASK.B7;

sfr data unsigned char volatile SCTRLA                    absolute 0x0819;
    const register unsigned short int APIEN = 6;
    sbit  APIEN_bit at SCTRLA.B6;
    const register unsigned short int DIEN = 7;
    sbit  DIEN_bit at SCTRLA.B7;
    sbit  ENABLE_SCTRLA_bit at SCTRLA.B0;
    const register unsigned short int PIEN = 5;
    sbit  PIEN_bit at SCTRLA.B5;
    const register unsigned short int PMEN = 2;
    sbit  PMEN_bit at SCTRLA.B2;
    sbit  SMEN_SCTRLA_bit at SCTRLA.B1;

sfr data unsigned char volatile SCTRLB                    absolute 0x081A;
    sbit  ACKACT_SCTRLB_bit at SCTRLB.B2;
    const register unsigned short int SCMD0 = 0;
    sbit  SCMD0_bit at SCTRLB.B0;
    const register unsigned short int SCMD1 = 1;
    sbit  SCMD1_bit at SCTRLB.B1;

sfr data unsigned char volatile SDATA                     absolute 0x081D;
sfr data unsigned char volatile SSTATUS                   absolute 0x081B;
    const register unsigned short int AP = 0;
    sbit  AP_bit at SSTATUS.B0;
    const register unsigned short int APIF = 6;
    sbit  APIF_bit at SSTATUS.B6;
    sbit  BUSERR_SSTATUS_bit at SSTATUS.B2;
    sbit  CLKHOLD_SSTATUS_bit at SSTATUS.B5;
    const register unsigned short int COLL = 3;
    sbit  COLL_bit at SSTATUS.B3;
    const register unsigned short int DIF = 7;
    sbit  DIF_bit at SSTATUS.B7;
    sbit  DIR__SSTATUS_bit at SSTATUS.B1;
    sbit  RXACK_SSTATUS_bit at SSTATUS.B4;

sfr data unsigned int  volatile BAUD                      absolute 0x0808;
sfr data unsigned char volatile CTRLA_USART0              absolute 0x0805;
    const register unsigned short int ABEIE = 2;
    sbit  ABEIE_bit at CTRLA_USART0.B2;
    sbit  DREIE_CTRLA_USART0_bit at CTRLA_USART0.B5;
    const register unsigned short int LBME = 3;
    sbit  LBME_bit at CTRLA_USART0.B3;
    const register unsigned short int RS4850 = 0;
    sbit  RS4850_bit at CTRLA_USART0.B0;
    const register unsigned short int RS4851 = 1;
    sbit  RS4851_bit at CTRLA_USART0.B1;
    sbit  RXCIE_CTRLA_USART0_bit at CTRLA_USART0.B7;
    const register unsigned short int RXSIE = 4;
    sbit  RXSIE_bit at CTRLA_USART0.B4;
    sbit  TXCIE_CTRLA_USART0_bit at CTRLA_USART0.B6;

sfr data unsigned char volatile CTRLB_USART0              absolute 0x0806;
    const register unsigned short int MPCM = 0;
    sbit  MPCM_bit at CTRLB_USART0.B0;
    const register unsigned short int ODME = 3;
    sbit  ODME_bit at CTRLB_USART0.B3;
    const register unsigned short int RXEN = 7;
    sbit  RXEN_bit at CTRLB_USART0.B7;
    const register unsigned short int RXMODE0 = 1;
    sbit  RXMODE0_bit at CTRLB_USART0.B1;
    const register unsigned short int RXMODE1 = 2;
    sbit  RXMODE1_bit at CTRLB_USART0.B2;
    const register unsigned short int SFDEN = 4;
    sbit  SFDEN_bit at CTRLB_USART0.B4;
    const register unsigned short int TXEN = 6;
    sbit  TXEN_bit at CTRLB_USART0.B6;

sfr data unsigned char volatile CTRLC_USART0              absolute 0x0807;

sfr data unsigned char volatile DBGCTRL_USART0            absolute 0x080B;
    const register unsigned short int ABMBP = 7;
    sbit  ABMBP_bit at DBGCTRL_USART0.B7;
    sbit  DBGRUN_DBGCTRL_USART0_bit at DBGCTRL_USART0.B0;

sfr data unsigned char volatile EVCTRL_USART0             absolute 0x080C;
    const register unsigned short int IREI = 0;
    sbit  IREI_bit at EVCTRL_USART0.B0;

sfr data unsigned char volatile RXDATAH                   absolute 0x0801;
    const register unsigned short int BUFOVF = 6;
    sbit  BUFOVF_bit at RXDATAH.B6;
    const register unsigned short int DATA8 = 0;
    sbit  DATA8_bit at RXDATAH.B0;
    const register unsigned short int FERR = 2;
    sbit  FERR_bit at RXDATAH.B2;
    const register unsigned short int PERR = 1;
    sbit  PERR_bit at RXDATAH.B1;
    const register unsigned short int RXCIF = 7;
    sbit  RXCIF_bit at RXDATAH.B7;

sfr data unsigned char volatile RXDATAL                   absolute 0x0800;
    const register unsigned short int DATA0 = 0;
    sbit  DATA0_bit at RXDATAL.B0;
    const register unsigned short int DATA1 = 1;
    sbit  DATA1_bit at RXDATAL.B1;
    const register unsigned short int DATA2 = 2;
    sbit  DATA2_bit at RXDATAL.B2;
    const register unsigned short int DATA3 = 3;
    sbit  DATA3_bit at RXDATAL.B3;
    const register unsigned short int DATA4 = 4;
    sbit  DATA4_bit at RXDATAL.B4;
    const register unsigned short int DATA5 = 5;
    sbit  DATA5_bit at RXDATAL.B5;
    const register unsigned short int DATA6 = 6;
    sbit  DATA6_bit at RXDATAL.B6;
    const register unsigned short int DATA7 = 7;
    sbit  DATA7_bit at RXDATAL.B7;

sfr data unsigned char volatile RXPLCTRL                  absolute 0x080E;
    const register unsigned short int RXPL0 = 0;
    sbit  RXPL0_bit at RXPLCTRL.B0;
    const register unsigned short int RXPL1 = 1;
    sbit  RXPL1_bit at RXPLCTRL.B1;
    const register unsigned short int RXPL2 = 2;
    sbit  RXPL2_bit at RXPLCTRL.B2;
    const register unsigned short int RXPL3 = 3;
    sbit  RXPL3_bit at RXPLCTRL.B3;
    const register unsigned short int RXPL4 = 4;
    sbit  RXPL4_bit at RXPLCTRL.B4;
    const register unsigned short int RXPL5 = 5;
    sbit  RXPL5_bit at RXPLCTRL.B5;
    const register unsigned short int RXPL6 = 6;
    sbit  RXPL6_bit at RXPLCTRL.B6;

sfr data unsigned char volatile STATUS_USART0             absolute 0x0804;
    const register unsigned short int BDF = 1;
    sbit  BDF_bit at STATUS_USART0.B1;
    const register unsigned short int DREIF = 5;
    sbit  DREIF_bit at STATUS_USART0.B5;
    const register unsigned short int ISFIF = 3;
    sbit  ISFIF_bit at STATUS_USART0.B3;
    sbit  RXCIF_STATUS_USART0_bit at STATUS_USART0.B7;
    const register unsigned short int RXSIF = 4;
    sbit  RXSIF_bit at STATUS_USART0.B4;
    const register unsigned short int TXCIF = 6;
    sbit  TXCIF_bit at STATUS_USART0.B6;
    const register unsigned short int WFB = 0;
    sbit  WFB_bit at STATUS_USART0.B0;

sfr data unsigned char volatile TXDATAH                   absolute 0x0803;
    sbit  DATA8_TXDATAH_bit at TXDATAH.B0;

sfr data unsigned char volatile TXDATAL                   absolute 0x0802;
    sbit  DATA0_TXDATAL_bit at TXDATAL.B0;
    sbit  DATA1_TXDATAL_bit at TXDATAL.B1;
    sbit  DATA2_TXDATAL_bit at TXDATAL.B2;
    sbit  DATA3_TXDATAL_bit at TXDATAL.B3;
    sbit  DATA4_TXDATAL_bit at TXDATAL.B4;
    sbit  DATA5_TXDATAL_bit at TXDATAL.B5;
    sbit  DATA6_TXDATAL_bit at TXDATAL.B6;
    sbit  DATA7_TXDATAL_bit at TXDATAL.B7;

sfr data unsigned char volatile TXPLCTRL                  absolute 0x080D;
    const register unsigned short int TXPL0 = 0;
    sbit  TXPL0_bit at TXPLCTRL.B0;
    const register unsigned short int TXPL1 = 1;
    sbit  TXPL1_bit at TXPLCTRL.B1;
    const register unsigned short int TXPL2 = 2;
    sbit  TXPL2_bit at TXPLCTRL.B2;
    const register unsigned short int TXPL3 = 3;
    sbit  TXPL3_bit at TXPLCTRL.B3;
    const register unsigned short int TXPL4 = 4;
    sbit  TXPL4_bit at TXPLCTRL.B4;
    const register unsigned short int TXPL5 = 5;
    sbit  TXPL5_bit at TXPLCTRL.B5;
    const register unsigned short int TXPL6 = 6;
    sbit  TXPL6_bit at TXPLCTRL.B6;
    const register unsigned short int TXPL7 = 7;
    sbit  TXPL7_bit at TXPLCTRL.B7;

sfr data unsigned char volatile USERROW0                  absolute 0x1300;
sfr data unsigned char volatile USERROW1                  absolute 0x1301;
sfr data unsigned char volatile USERROW2                  absolute 0x1302;
sfr data unsigned char volatile USERROW3                  absolute 0x1303;
sfr data unsigned char volatile USERROW4                  absolute 0x1304;
sfr data unsigned char volatile USERROW5                  absolute 0x1305;
sfr data unsigned char volatile USERROW6                  absolute 0x1306;
sfr data unsigned char volatile USERROW7                  absolute 0x1307;
sfr data unsigned char volatile USERROW8                  absolute 0x1308;
sfr data unsigned char volatile USERROW9                  absolute 0x1309;
sfr data unsigned char volatile USERROW10                 absolute 0x130A;
sfr data unsigned char volatile USERROW11                 absolute 0x130B;
sfr data unsigned char volatile USERROW12                 absolute 0x130C;
sfr data unsigned char volatile USERROW13                 absolute 0x130D;
sfr data unsigned char volatile USERROW14                 absolute 0x130E;
sfr data unsigned char volatile USERROW15                 absolute 0x130F;
sfr data unsigned char volatile USERROW16                 absolute 0x1310;
sfr data unsigned char volatile USERROW17                 absolute 0x1311;
sfr data unsigned char volatile USERROW18                 absolute 0x1312;
sfr data unsigned char volatile USERROW19                 absolute 0x1313;
sfr data unsigned char volatile USERROW20                 absolute 0x1314;
sfr data unsigned char volatile USERROW21                 absolute 0x1315;
sfr data unsigned char volatile USERROW22                 absolute 0x1316;
sfr data unsigned char volatile USERROW23                 absolute 0x1317;
sfr data unsigned char volatile USERROW24                 absolute 0x1318;
sfr data unsigned char volatile USERROW25                 absolute 0x1319;
sfr data unsigned char volatile USERROW26                 absolute 0x131A;
sfr data unsigned char volatile USERROW27                 absolute 0x131B;
sfr data unsigned char volatile USERROW28                 absolute 0x131C;
sfr data unsigned char volatile USERROW29                 absolute 0x131D;
sfr data unsigned char volatile USERROW30                 absolute 0x131E;
sfr data unsigned char volatile USERROW31                 absolute 0x131F;
sfr io   unsigned char volatile DIR_VPORTA                absolute 0x0000;
sfr io   unsigned char volatile IN_VPORTA                 absolute 0x0002;
sfr io   unsigned char volatile INTFLAGS_VPORTA           absolute 0x0003;
    sbit  INT0_INTFLAGS_VPORTA_bit at INTFLAGS_VPORTA.B0;
    sbit  INT1_INTFLAGS_VPORTA_bit at INTFLAGS_VPORTA.B1;
    sbit  INT2_INTFLAGS_VPORTA_bit at INTFLAGS_VPORTA.B2;
    sbit  INT3_INTFLAGS_VPORTA_bit at INTFLAGS_VPORTA.B3;
    sbit  INT4_INTFLAGS_VPORTA_bit at INTFLAGS_VPORTA.B4;
    sbit  INT5_INTFLAGS_VPORTA_bit at INTFLAGS_VPORTA.B5;
    sbit  INT6_INTFLAGS_VPORTA_bit at INTFLAGS_VPORTA.B6;
    sbit  INT7_INTFLAGS_VPORTA_bit at INTFLAGS_VPORTA.B7;

sfr io   unsigned char volatile OUT_VPORTA                absolute 0x0001;
sfr io   unsigned char volatile DIR_VPORTB                absolute 0x0004;
sfr io   unsigned char volatile IN_VPORTB                 absolute 0x0006;
sfr io   unsigned char volatile INTFLAGS_VPORTB           absolute 0x0007;
    sbit  INT0_INTFLAGS_VPORTB_bit at INTFLAGS_VPORTB.B0;
    sbit  INT1_INTFLAGS_VPORTB_bit at INTFLAGS_VPORTB.B1;
    sbit  INT2_INTFLAGS_VPORTB_bit at INTFLAGS_VPORTB.B2;
    sbit  INT3_INTFLAGS_VPORTB_bit at INTFLAGS_VPORTB.B3;
    sbit  INT4_INTFLAGS_VPORTB_bit at INTFLAGS_VPORTB.B4;
    sbit  INT5_INTFLAGS_VPORTB_bit at INTFLAGS_VPORTB.B5;
    sbit  INT6_INTFLAGS_VPORTB_bit at INTFLAGS_VPORTB.B6;
    sbit  INT7_INTFLAGS_VPORTB_bit at INTFLAGS_VPORTB.B7;

sfr io   unsigned char volatile OUT_VPORTB                absolute 0x0005;
sfr io   unsigned char volatile DIR_VPORTC                absolute 0x0008;
sfr io   unsigned char volatile IN_VPORTC                 absolute 0x000A;
sfr io   unsigned char volatile INTFLAGS_VPORTC           absolute 0x000B;
    sbit  INT0_INTFLAGS_VPORTC_bit at INTFLAGS_VPORTC.B0;
    sbit  INT1_INTFLAGS_VPORTC_bit at INTFLAGS_VPORTC.B1;
    sbit  INT2_INTFLAGS_VPORTC_bit at INTFLAGS_VPORTC.B2;
    sbit  INT3_INTFLAGS_VPORTC_bit at INTFLAGS_VPORTC.B3;
    sbit  INT4_INTFLAGS_VPORTC_bit at INTFLAGS_VPORTC.B4;
    sbit  INT5_INTFLAGS_VPORTC_bit at INTFLAGS_VPORTC.B5;
    sbit  INT6_INTFLAGS_VPORTC_bit at INTFLAGS_VPORTC.B6;
    sbit  INT7_INTFLAGS_VPORTC_bit at INTFLAGS_VPORTC.B7;

sfr io   unsigned char volatile OUT_VPORTC                absolute 0x0009;
sfr data unsigned char volatile CTRLA_VREF                absolute 0x00A0;
    const register unsigned short int ADCREFSEL0 = 4;
    sbit  ADCREFSEL0_bit at CTRLA_VREF.B4;
    const register unsigned short int ADCREFSEL1 = 5;
    sbit  ADCREFSEL1_bit at CTRLA_VREF.B5;
    const register unsigned short int ADCREFSEL2 = 6;
    sbit  ADCREFSEL2_bit at CTRLA_VREF.B6;
    const register unsigned short int DACREFSEL0 = 0;
    sbit  DACREFSEL0_bit at CTRLA_VREF.B0;
    const register unsigned short int DACREFSEL1 = 1;
    sbit  DACREFSEL1_bit at CTRLA_VREF.B1;
    const register unsigned short int DACREFSEL2 = 2;
    sbit  DACREFSEL2_bit at CTRLA_VREF.B2;

sfr data unsigned char volatile CTRLB_VREF                absolute 0x00A1;
    const register unsigned short int ADCREFEN = 1;
    sbit  ADCREFEN_bit at CTRLB_VREF.B1;
    const register unsigned short int DACREFEN = 0;
    sbit  DACREFEN_bit at CTRLB_VREF.B0;
    const register unsigned short int NVMREFEN = 2;
    sbit  NVMREFEN_bit at CTRLB_VREF.B2;

sfr data unsigned char volatile CTRLA_WDT                 absolute 0x0100;
    sbit  PERIOD0_CTRLA_WDT_bit at CTRLA_WDT.B0;
    sbit  PERIOD1_CTRLA_WDT_bit at CTRLA_WDT.B1;
    sbit  PERIOD2_CTRLA_WDT_bit at CTRLA_WDT.B2;
    sbit  PERIOD3_CTRLA_WDT_bit at CTRLA_WDT.B3;
    sbit  WINDOW0_CTRLA_WDT_bit at CTRLA_WDT.B4;
    sbit  WINDOW1_CTRLA_WDT_bit at CTRLA_WDT.B5;
    sbit  WINDOW2_CTRLA_WDT_bit at CTRLA_WDT.B6;
    sbit  WINDOW3_CTRLA_WDT_bit at CTRLA_WDT.B7;

sfr data unsigned char volatile STATUS_WDT                absolute 0x0101;
    sbit  LOCK__STATUS_WDT_bit at STATUS_WDT.B7;
    const register unsigned short int SYNCBUSY = 0;
    sbit  SYNCBUSY_bit at STATUS_WDT.B0;

