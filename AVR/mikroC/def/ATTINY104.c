// Individual bit access constants
const char B0 = 0;
const char B1 = 1;
const char B2 = 2;
const char B3 = 3;
const char B4 = 4;
const char B5 = 5;
const char B6 = 6;
const char B7 = 7;

const unsigned long __FLASH_SIZE = 0x00000400;

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
const unsigned short IVT_ADDR_INT0 = 0x0001;
const unsigned short IVT_ADDR_PCINT0 = 0x0002;
const unsigned short IVT_ADDR_PCINT1 = 0x0003;
const unsigned short IVT_ADDR_TIM0_CAPT = 0x0004;
const unsigned short IVT_ADDR_TIM0_OVF = 0x0005;
const unsigned short IVT_ADDR_TIM0_COMPA = 0x0006;
const unsigned short IVT_ADDR_TIM0_COMPB = 0x0007;
const unsigned short IVT_ADDR_ANA_COMP = 0x0008;
const unsigned short IVT_ADDR_WDT = 0x0009;
const unsigned short IVT_ADDR_VLM = 0x000A;
const unsigned short IVT_ADDR_ADC = 0x000B;
const unsigned short IVT_ADDR_USART_RXS = 0x000C;
const unsigned short IVT_ADDR_USART_RXC = 0x000D;
const unsigned short IVT_ADDR_USART_DRE = 0x000E;
const unsigned short IVT_ADDR_USART_TXC = 0x000F;

sfr io   unsigned char ADMUX                     absolute 0x001B;
    const register unsigned short int MUX0 = 0;
    sbit  MUX0_bit at ADMUX.B0;
    const register unsigned short int MUX1 = 1;
    sbit  MUX1_bit at ADMUX.B1;
    const register unsigned short int MUX2 = 2;
    sbit  MUX2_bit at ADMUX.B2;
    const register unsigned short int REFS0 = 6;
    sbit  REFS0_bit at ADMUX.B6;
    const register unsigned short int REFS1 = 7;
    sbit  REFS1_bit at ADMUX.B7;

sfr io   unsigned char volatile ADCL                      absolute 0x0019;
sfr io   unsigned char volatile ADCH                      absolute 0x001A;
sfr io   unsigned char volatile ADCSRA                    absolute 0x001D;
    const register unsigned short int ADEN = 7;
    sbit  ADEN_bit at ADCSRA.B7;
    const register unsigned short int ADSC = 6;
    sbit  ADSC_bit at ADCSRA.B6;
    const register unsigned short int ADATE = 5;
    sbit  ADATE_bit at ADCSRA.B5;
    const register unsigned short int ADIF = 4;
    sbit  ADIF_bit at ADCSRA.B4;
    const register unsigned short int ADIE = 3;
    sbit  ADIE_bit at ADCSRA.B3;
    const register unsigned short int ADPS0 = 0;
    sbit  ADPS0_bit at ADCSRA.B0;
    const register unsigned short int ADPS1 = 1;
    sbit  ADPS1_bit at ADCSRA.B1;
    const register unsigned short int ADPS2 = 2;
    sbit  ADPS2_bit at ADCSRA.B2;

sfr io   unsigned char ADCSRB                    absolute 0x001C;
    const register unsigned short int ADLAR = 7;
    sbit  ADLAR_bit at ADCSRB.B7;
    const register unsigned short int ADTS0 = 0;
    sbit  ADTS0_bit at ADCSRB.B0;
    const register unsigned short int ADTS1 = 1;
    sbit  ADTS1_bit at ADCSRB.B1;
    const register unsigned short int ADTS2 = 2;
    sbit  ADTS2_bit at ADCSRB.B2;

sfr io   unsigned char DIDR0                     absolute 0x0017;
    const register unsigned short int ADC7D = 7;
    sbit  ADC7D_bit at DIDR0.B7;
    const register unsigned short int ADC6D = 6;
    sbit  ADC6D_bit at DIDR0.B6;
    const register unsigned short int ADC5D = 5;
    sbit  ADC5D_bit at DIDR0.B5;
    const register unsigned short int ADC4D = 4;
    sbit  ADC4D_bit at DIDR0.B4;
    const register unsigned short int ADC3D = 3;
    sbit  ADC3D_bit at DIDR0.B3;
    const register unsigned short int ADC2D = 2;
    sbit  ADC2D_bit at DIDR0.B2;
    const register unsigned short int ADC1D = 1;
    sbit  ADC1D_bit at DIDR0.B1;
    const register unsigned short int ADC0D = 0;
    sbit  ADC0D_bit at DIDR0.B0;

sfr io   unsigned char volatile ACSRA                     absolute 0x001F;
    const register unsigned short int ACD = 7;
    sbit  ACD_bit at ACSRA.B7;
    const register unsigned short int ACBG = 6;
    sbit  ACBG_bit at ACSRA.B6;
    const register unsigned short int ACO = 5;
    sbit  ACO_bit at ACSRA.B5;
    const register unsigned short int ACI = 4;
    sbit  ACI_bit at ACSRA.B4;
    const register unsigned short int ACIE = 3;
    sbit  ACIE_bit at ACSRA.B3;
    const register unsigned short int ACIC = 2;
    sbit  ACIC_bit at ACSRA.B2;
    const register unsigned short int ACIS0 = 0;
    sbit  ACIS0_bit at ACSRA.B0;
    const register unsigned short int ACIS1 = 1;
    sbit  ACIS1_bit at ACSRA.B1;

sfr io   unsigned char volatile ACSRB                     absolute 0x001E;
    const register unsigned short int ACOE = 1;
    sbit  ACOE_bit at ACSRB.B1;
    const register unsigned short int ACPMUX = 0;
    sbit  ACPMUX_bit at ACSRB.B0;

sfr io   unsigned char volatile DIDR0_AC                  absolute 0x0017;
    const register unsigned short int AIN1D = 1;
    sbit  AIN1D_bit at DIDR0_AC.B1;
    const register unsigned short int AIN0D = 0;
    sbit  AIN0D_bit at DIDR0_AC.B0;

sfr io   unsigned char volatile CCP                       absolute 0x005C;
sfr io   unsigned int  volatile SP                        absolute 0x005D;
sfr io   unsigned char volatile SPL                       absolute 0x005D;
sfr io   unsigned char volatile SREG                      absolute 0x005F;
    const register unsigned short int SREG_I = 7;
    sbit  SREG_I_bit at SREG.B7;
    const register unsigned short int SREG_T = 6;
    sbit  SREG_T_bit at SREG.B6;
    const register unsigned short int SREG_H = 5;
    sbit  SREG_H_bit at SREG.B5;
    const register unsigned short int SREG_S = 4;
    sbit  SREG_S_bit at SREG.B4;
    const register unsigned short int SREG_V = 3;
    sbit  SREG_V_bit at SREG.B3;
    const register unsigned short int SREG_N = 2;
    sbit  SREG_N_bit at SREG.B2;
    const register unsigned short int SREG_Z = 1;
    sbit  SREG_Z_bit at SREG.B1;
    const register unsigned short int SREG_C = 0;
    sbit  SREG_C_bit at SREG.B0;

sfr io   unsigned char volatile CLKMSR                    absolute 0x0037;
    const register unsigned short int CLKMS0 = 0;
    sbit  CLKMS0_bit at CLKMSR.B0;
    const register unsigned short int CLKMS1 = 1;
    sbit  CLKMS1_bit at CLKMSR.B1;

sfr io   unsigned char volatile CLKPSR                    absolute 0x0036;
    const register unsigned short int CLKPS0 = 0;
    sbit  CLKPS0_bit at CLKPSR.B0;
    const register unsigned short int CLKPS1 = 1;
    sbit  CLKPS1_bit at CLKPSR.B1;
    const register unsigned short int CLKPS2 = 2;
    sbit  CLKPS2_bit at CLKPSR.B2;
    const register unsigned short int CLKPS3 = 3;
    sbit  CLKPS3_bit at CLKPSR.B3;

sfr io   unsigned char OSCCAL                    absolute 0x0039;
sfr io   unsigned char SMCR                      absolute 0x003A;
    const register unsigned short int SM0 = 1;
    sbit  SM0_bit at SMCR.B1;
    const register unsigned short int SM1 = 2;
    sbit  SM1_bit at SMCR.B2;
    const register unsigned short int SM2 = 3;
    sbit  SM2_bit at SMCR.B3;
    const register unsigned short int SE = 0;
    sbit  SE_bit at SMCR.B0;

sfr io   unsigned char volatile PRR                       absolute 0x0035;
    const register unsigned short int PRUSART = 2;
    sbit  PRUSART_bit at PRR.B2;
    const register unsigned short int PRADC = 1;
    sbit  PRADC_bit at PRR.B1;
    const register unsigned short int PRTIM0 = 0;
    sbit  PRTIM0_bit at PRR.B0;

sfr io   unsigned char volatile VLMCSR                    absolute 0x0034;
    const register unsigned short int VLMF = 7;
    sbit  VLMF_bit at VLMCSR.B7;
    const register unsigned short int VLMIE = 6;
    sbit  VLMIE_bit at VLMCSR.B6;
    const register unsigned short int VLM0 = 0;
    sbit  VLM0_bit at VLMCSR.B0;
    const register unsigned short int VLM1 = 1;
    sbit  VLM1_bit at VLMCSR.B1;
    const register unsigned short int VLM2 = 2;
    sbit  VLM2_bit at VLMCSR.B2;

sfr io   unsigned char volatile RSTFLR                    absolute 0x003B;
    const register unsigned short int WDRF = 3;
    sbit  WDRF_bit at RSTFLR.B3;
    const register unsigned short int EXTRF = 1;
    sbit  EXTRF_bit at RSTFLR.B1;
    const register unsigned short int PORF = 0;
    sbit  PORF_bit at RSTFLR.B0;

sfr io   unsigned char volatile NVMCSR                    absolute 0x0032;
    const register unsigned short int NVMBSY = 7;
    sbit  NVMBSY_bit at NVMCSR.B7;

sfr io   unsigned char volatile NVMCMD                    absolute 0x0033;
sfr io   unsigned char volatile PORTCR                    absolute 0x0016;
    const register unsigned short int BBMA = 0;
    sbit  BBMA_bit at PORTCR.B0;

sfr io   unsigned char volatile PUEA                      absolute 0x0003;
sfr io   unsigned char DDRA                      absolute 0x0001;
sfr io   unsigned char volatile PINA                      absolute 0x0000;
sfr io   unsigned char PORTA                     absolute 0x0002;
sfr io   unsigned char volatile PORTCR_PORTB              absolute 0x0016;
    const register unsigned short int BBMB = 1;
    sbit  BBMB_bit at PORTCR_PORTB.B1;

sfr io   unsigned char volatile PUEB                      absolute 0x0007;
sfr io   unsigned char DDRB                      absolute 0x0005;
sfr io   unsigned char volatile PINB                      absolute 0x0004;
sfr io   unsigned char PORTB                     absolute 0x0006;
sfr io   unsigned char volatile EICRA                     absolute 0x0015;
    const register unsigned short int ISC01 = 1;
    sbit  ISC01_bit at EICRA.B1;
    const register unsigned short int ISC00 = 0;
    sbit  ISC00_bit at EICRA.B0;

sfr io   unsigned char EIMSK                     absolute 0x0013;
    const register unsigned short int INT0 = 0;
    sbit  INT0_bit at EIMSK.B0;

sfr io   unsigned char volatile EIFR                      absolute 0x0014;
    const register unsigned short int INTF0 = 0;
    sbit  INTF0_bit at EIFR.B0;

sfr io   unsigned char PCICR                     absolute 0x0012;
    const register unsigned short int PCIE1 = 1;
    sbit  PCIE1_bit at PCICR.B1;
    const register unsigned short int PCIE0 = 0;
    sbit  PCIE0_bit at PCICR.B0;

sfr io   unsigned char volatile PCIFR                     absolute 0x0011;
    const register unsigned short int PCIF1 = 1;
    sbit  PCIF1_bit at PCIFR.B1;
    const register unsigned short int PCIF0 = 0;
    sbit  PCIF0_bit at PCIFR.B0;

sfr io   unsigned char PCMSK1                    absolute 0x0010;
    const register unsigned short int PCINT11 = 3;
    sbit  PCINT11_bit at PCMSK1.B3;
    const register unsigned short int PCINT10 = 2;
    sbit  PCINT10_bit at PCMSK1.B2;
    const register unsigned short int PCINT9 = 1;
    sbit  PCINT9_bit at PCMSK1.B1;
    const register unsigned short int PCINT8 = 0;
    sbit  PCINT8_bit at PCMSK1.B0;

sfr io   unsigned char PCMSK0                    absolute 0x000F;
    const register unsigned short int PCINT7 = 7;
    sbit  PCINT7_bit at PCMSK0.B7;
    const register unsigned short int PCINT6 = 6;
    sbit  PCINT6_bit at PCMSK0.B6;
    const register unsigned short int PCINT5 = 5;
    sbit  PCINT5_bit at PCMSK0.B5;
    const register unsigned short int PCINT4 = 4;
    sbit  PCINT4_bit at PCMSK0.B4;
    const register unsigned short int PCINT3 = 3;
    sbit  PCINT3_bit at PCMSK0.B3;
    const register unsigned short int PCINT2 = 2;
    sbit  PCINT2_bit at PCMSK0.B2;
    const register unsigned short int PCINT1 = 1;
    sbit  PCINT1_bit at PCMSK0.B1;
    const register unsigned short int PCINT0 = 0;
    sbit  PCINT0_bit at PCMSK0.B0;

sfr io   unsigned char TCCR0A                    absolute 0x002E;
    const register unsigned short int COM0A0 = 6;
    sbit  COM0A0_bit at TCCR0A.B6;
    const register unsigned short int COM0A1 = 7;
    sbit  COM0A1_bit at TCCR0A.B7;
    const register unsigned short int COM0B0 = 4;
    sbit  COM0B0_bit at TCCR0A.B4;
    const register unsigned short int COM0B1 = 5;
    sbit  COM0B1_bit at TCCR0A.B5;
    const register unsigned short int WGM00 = 0;
    sbit  WGM00_bit at TCCR0A.B0;
    const register unsigned short int WGM01 = 1;
    sbit  WGM01_bit at TCCR0A.B1;

sfr io   unsigned char TCCR0B                    absolute 0x002D;
    const register unsigned short int ICNC0 = 7;
    sbit  ICNC0_bit at TCCR0B.B7;
    const register unsigned short int ICES0 = 6;
    sbit  ICES0_bit at TCCR0B.B6;
    sbit  WGM00_TCCR0B_bit at TCCR0B.B3;
    sbit  WGM01_TCCR0B_bit at TCCR0B.B4;
    const register unsigned short int CS00 = 0;
    sbit  CS00_bit at TCCR0B.B0;
    const register unsigned short int CS01 = 1;
    sbit  CS01_bit at TCCR0B.B1;
    const register unsigned short int CS02 = 2;
    sbit  CS02_bit at TCCR0B.B2;

sfr io   unsigned char volatile TCCR0C                    absolute 0x002C;
    const register unsigned short int FOC0A = 7;
    sbit  FOC0A_bit at TCCR0C.B7;
    const register unsigned short int FOC0B = 6;
    sbit  FOC0B_bit at TCCR0C.B6;

sfr io   unsigned int  volatile TCNT0                     absolute 0x0028;
sfr io   unsigned char volatile TCNT0L                    absolute 0x0028;
sfr io   unsigned char volatile TCNT0H                    absolute 0x0029;
sfr io   unsigned int  OCR0A                     absolute 0x0026;
sfr io   unsigned int  OCR0B                     absolute 0x0024;
sfr io   unsigned int  volatile ICR0                      absolute 0x0022;
sfr io   unsigned char TIMSK0                    absolute 0x002B;
    const register unsigned short int ICIE0 = 5;
    sbit  ICIE0_bit at TIMSK0.B5;
    const register unsigned short int OCIE0B = 2;
    sbit  OCIE0B_bit at TIMSK0.B2;
    const register unsigned short int OCIE0A = 1;
    sbit  OCIE0A_bit at TIMSK0.B1;
    const register unsigned short int TOIE0 = 0;
    sbit  TOIE0_bit at TIMSK0.B0;

sfr io   unsigned char volatile TIFR0                     absolute 0x002A;
    const register unsigned short int ICF0 = 5;
    sbit  ICF0_bit at TIFR0.B5;
    const register unsigned short int OCF0B = 2;
    sbit  OCF0B_bit at TIFR0.B2;
    const register unsigned short int OCF0A = 1;
    sbit  OCF0A_bit at TIFR0.B1;
    const register unsigned short int TOV0 = 0;
    sbit  TOV0_bit at TIFR0.B0;

sfr io   unsigned char volatile GTCCR                     absolute 0x002F;
    const register unsigned short int TSM = 7;
    sbit  TSM_bit at GTCCR.B7;
    const register unsigned short int REMAP = 1;
    sbit  REMAP_bit at GTCCR.B1;
    const register unsigned short int PSR = 0;
    sbit  PSR_bit at GTCCR.B0;

sfr io   unsigned char volatile WDTCSR                    absolute 0x0031;
    const register unsigned short int WDIF = 7;
    sbit  WDIF_bit at WDTCSR.B7;
    const register unsigned short int WDIE = 6;
    sbit  WDIE_bit at WDTCSR.B6;
    const register unsigned short int WDP0 = 0;
    sbit  WDP0_bit at WDTCSR.B0;
    const register unsigned short int WDP1 = 1;
    sbit  WDP1_bit at WDTCSR.B1;
    const register unsigned short int WDP2 = 2;
    sbit  WDP2_bit at WDTCSR.B2;
    const register unsigned short int WDP3 = 5;
    sbit  WDP3_bit at WDTCSR.B5;
    const register unsigned short int WDE = 3;
    sbit  WDE_bit at WDTCSR.B3;

sfr io   unsigned char volatile BYTE0                     absolute 0x0000;
    const register unsigned short int SELFPROGEN = 3;
    sbit  SELFPROGEN_bit at BYTE0.B3;
    const register unsigned short int CKOUT = 2;
    sbit  CKOUT_bit at BYTE0.B2;
    const register unsigned short int WDTON = 1;
    sbit  WDTON_bit at BYTE0.B1;
    const register unsigned short int RSTDISBL = 0;
    sbit  RSTDISBL_bit at BYTE0.B0;

sfr io   unsigned char volatile LOCKBIT                   absolute 0x0000;
    const register unsigned short int LB0 = 0;
    sbit  LB0_bit at LOCKBIT.B0;
    const register unsigned short int LB1 = 1;
    sbit  LB1_bit at LOCKBIT.B1;

sfr io   unsigned char volatile UDR0                      absolute 0x0008;
sfr io   unsigned char volatile UCSR0A                    absolute 0x000E;
    const register unsigned short int RXC0 = 7;
    sbit  RXC0_bit at UCSR0A.B7;
    const register unsigned short int TXC0 = 6;
    sbit  TXC0_bit at UCSR0A.B6;
    const register unsigned short int UDRE0 = 5;
    sbit  UDRE0_bit at UCSR0A.B5;
    const register unsigned short int FE = 4;
    sbit  FE_bit at UCSR0A.B4;
    const register unsigned short int DOR = 3;
    sbit  DOR_bit at UCSR0A.B3;
    const register unsigned short int UPE = 2;
    sbit  UPE_bit at UCSR0A.B2;
    const register unsigned short int U2X = 1;
    sbit  U2X_bit at UCSR0A.B1;
    const register unsigned short int MPCM = 0;
    sbit  MPCM_bit at UCSR0A.B0;

sfr io   unsigned char volatile UCSR0B                    absolute 0x000D;
    const register unsigned short int RXCIE0 = 7;
    sbit  RXCIE0_bit at UCSR0B.B7;
    const register unsigned short int TXCIE0 = 6;
    sbit  TXCIE0_bit at UCSR0B.B6;
    const register unsigned short int UDRIE0 = 5;
    sbit  UDRIE0_bit at UCSR0B.B5;
    const register unsigned short int RXEN0 = 4;
    sbit  RXEN0_bit at UCSR0B.B4;
    const register unsigned short int TXEN0 = 3;
    sbit  TXEN0_bit at UCSR0B.B3;
    const register unsigned short int UCSZ2 = 2;
    sbit  UCSZ2_bit at UCSR0B.B2;
    const register unsigned short int RXB80 = 1;
    sbit  RXB80_bit at UCSR0B.B1;
    const register unsigned short int TXB80 = 0;
    sbit  TXB80_bit at UCSR0B.B0;

sfr io   unsigned char volatile UCSR0C                    absolute 0x000C;
    const register unsigned short int UMSEL0 = 6;
    sbit  UMSEL0_bit at UCSR0C.B6;
    const register unsigned short int UMSEL1 = 7;
    sbit  UMSEL1_bit at UCSR0C.B7;
    const register unsigned short int UPM0 = 4;
    sbit  UPM0_bit at UCSR0C.B4;
    const register unsigned short int UPM1 = 5;
    sbit  UPM1_bit at UCSR0C.B5;
    const register unsigned short int USBS0 = 3;
    sbit  USBS0_bit at UCSR0C.B3;
    const register unsigned short int UCSZ0 = 1;
    sbit  UCSZ0_bit at UCSR0C.B1;
    const register unsigned short int UCSZ1 = 2;
    sbit  UCSZ1_bit at UCSR0C.B2;
    const register unsigned short int UCPOL0 = 0;
    sbit  UCPOL0_bit at UCSR0C.B0;

sfr io   unsigned char volatile UCSR0D                    absolute 0x000B;
    const register unsigned short int RXSIE = 7;
    sbit  RXSIE_bit at UCSR0D.B7;
    const register unsigned short int RXS = 6;
    sbit  RXS_bit at UCSR0D.B6;

sfr io   unsigned int  UBRR0                     absolute 0x0009;
sfr io   unsigned char UBRR0L                    absolute 0x0009;
sfr io   unsigned char UBRR0H                    absolute 0x000A;
